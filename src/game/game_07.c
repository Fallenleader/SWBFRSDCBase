#include "game.h"

/* 088A4294 */
u32 func_088A4294(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_088A4294:;
    t1 = LD_U16(a0+1582);
    v0 = D_08AD7480 - (29824);
    t3 = v0 + 29824;
    t2 = 0xffff;
    v0 = t1 & 0xffff;
    goto L_088A42A8;
L_088A42A8:;
    cnd_ = v0 == t2;
    if (cnd_) { ST16(a0+1582, 0); goto L_088A42F8; }
    goto L_088A42B0;
L_088A42B0:;
    v0 = t1 + 1;
    ST16(a0+1582, v0);
    t1 = v0 + 0;
    a3 = 1;
    a2 = 0 + 0;
    t0 = v0 & 0xffff;
    a1 = t3 + 0;
    goto L_088A42CC;
L_088A42CC:;
    v0 = LD_U16(a1);
    a2 = a2 + 1;
    v1 = a2 < 0x3u;
    v0 = v0 ^ t0;
    if (v0 == 0) a3 = 0;
    cnd_ = v1 != 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088A42CC; }
    goto L_088A42E8;
L_088A42E8:;
    cnd_ = a3 == 0;
    v0 = t1 & 0xffff;
    if (cnd_) { goto L_088A42A8; }
    goto L_088A42F0;
L_088A42F0:;
    return v0;
L_088A42F8:;
    t1 = 0 + 0;
    goto L_088A42B0;
}

/* 088A4300 */
rv_t func_088A4300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_088A4300:;
    sp = sp - 304;
    s0 = t0 + 0;
    v1 = a3 < 0x1u;
    t0 = a1 + 0;
    v0 = s0 < 0x1u;
    s1 = a3 + 0;
    a3 = a2 + 0;
    t0 = t0 & 0xffff;
    s2 = a3 & 0xff;
    v1 = v1 | v0;
    a1 = sp + 0;
    a2 = 2;
    a3 = s2 + 0;
    s3 = a0 + 0;
    cnd_ = v1 != 0;
    ST16(sp, t0);
    if (cnd_) { goto L_088A4380; }
    goto L_088A4354;
L_088A4354:;
    ST16(sp+16, t0);
    v0 = func_08A62930();
    goto L_088A435C;
L_088A435C:;
    a0 = sp + 20;
    a1 = s1 + 0;
    a2 = s0 + 0;
    ST16(sp+18, v0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4370;
L_088A4370:;
    a2 = s0 + 4;
    a0 = s3 + 0;
    a1 = sp + 16;
    a3 = s2 + 0;
    goto L_088A4380;
L_088A4380:;
    { rv_t r_ = func_088A402C(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4388;
L_088A4388:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
}

/* 088A43A4 */
float func_088A43A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A43A4:;
    sp = sp - 16;
    a1 = a0 + 1596;
    s0 = a0 + 0;
    a3 = 0 + 0;
    v1 = 1;
    v0 = LD32(a0+1664);
    a2 = v0 << 1;
    cnd_ = v0 != 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_088A43E4; }
    goto L_088A43D0;
L_088A43D0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return f0;
L_088A43E4:;
    { rv_t r_ = func_088A402C(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A43EC;
L_088A43EC:;
    ST32(s0+1664, 0);
    v1 = v0 + 0;
    goto L_088A43D0;
}

/* 088A43F8 */
void func_088A43F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A43F8:;
    sp = sp - 16;
    a1 = 0xf006;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4414;
L_088A4414:;
    sp = sp + 16;
    return;
}

/* 088A4420 */
rv_t func_088A4420(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A4420:;
    sp = sp - 32;
    a2 = a1 + 0;
    ST32(sp, a1);
    a1 = D_08AD740C - (29708);
    a1 = a1 + 29708;
    s0 = a0 + 0;
    f0 = func_088A32AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A4444;
L_088A4444:;
    a0 = s0 + 0;
    a1 = 0xf005;
    a2 = 0 + 0;
    a3 = sp + 0;
    t0 = 2;
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A445C;
L_088A445C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088A446C */
void func_088A446C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A446C:;
    sp = sp - 48;
    v0 = D_08B285B0 - (-31312);
    s4 = 1;
    s3 = a0 + 0;
    s2 = 0 + 0;
    s1 = a0 + 32;
    a0 = s1 + 0;
    v1 = LD32(s1+1540);
    cnd_ = v1 != 0;
    s5 = LD32(v0-31312);
    if (cnd_) { goto L_088A44D8; }
    goto L_088A44B0;
L_088A44B0:;
    v0 = s4 + 0;
    goto L_088A44B4;
L_088A44B4:;
    sp = sp + 48;
    return;
L_088A44D8:;
    a1 = s2 + 0;
    v0 = func_088A9E7C(a0, a1);
    goto L_088A44E0;
L_088A44E0:;
    s0 = v0 + 0;
    v0 = LD32(v0);
    s2 = s2 + 1;
    a1 = sp + 0;
    v0 = s5 - v0;
    v0 = v0 < 0x1f5u;
    cnd_ = v0 == 0;
    t1 = 1;
    if (cnd_) { goto L_088A4518; }
    goto L_088A4500;
L_088A4500:;
    v0 = LD32(s1+1540);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088A44D8; }
    goto L_088A4510;
L_088A4510:;
    v0 = s4 + 0;
    goto L_088A44B4;
L_088A4518:;
    a0 = LD32(s3+12);
    a3 = LD32(s0+4);
    t0 = LD32(s0+8);
    a2 = LD_U16(s3+8);
    v0 = LD32(s3);
    v1 = LD32(s3+4);
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_088A9198(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A453C;
L_088A453C:;
    s4 = s4 & v0;
    cnd_ = s4 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088A4500; }
    goto L_088A4548;
L_088A4548:;
    v0 = func_088AB684(a0);
    goto L_088A4550;
L_088A4550:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088A4500; }
    goto L_088A4558;
L_088A4558:;
    v0 = LD32(s0+8);
    v1 = LD32(a1+32);
    a0 = LD32(a1+40);
    v1 = v1 + v0;
    v1 = v1 + 28;
    a0 = a0 + 1;
    ST32(a1+40, a0);
    ST32(a1+32, v1);
    goto L_088A4500;
}

/* 088A457C */
u64 func_088A457C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088A457C:;
    v1 = D_08B285B0 - (-31312);
    v0 = LD32(v1-31312);
    a1 = LD32(a0+1584);
    v0 = v0 - a1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A4590 */
u32 func_088A4590(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4590:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_088AB4B4();
    goto L_088A45A4;
L_088A45A4:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A45C4; }
    goto L_088A45B0;
L_088A45B0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088A45C4:;
    { u64 r_ = func_088A457C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A45CC;
L_088A45CC:;
    s0 = v0 + 0;
    v0 = func_088AB4A8();
    goto L_088A45D4;
L_088A45D4:;
    v1 = v0 < s0;
    goto L_088A45B0;
}

/* 088A45DC */
void func_088A45DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A45DC:;
    sp = sp - 32;
    v0 = D_08B285B0 - (-31312);
    s2 = a0 + 0;
    s3 = LD32(v0-31312);
    v0 = func_088A4590(a0);
    goto L_088A4604;
L_088A4604:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088A46E0; }
    goto L_088A460C;
L_088A460C:;
    v0 = LD32(s2+1588);
    goto L_088A4610;
L_088A4610:;
    v0 = s3 - v0;
    v0 = v0 < 0x3e9u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A46D0; }
    goto L_088A4620;
L_088A4620:;
    v0 = LD32(s2+1668);
    v0 = s3 - v0;
    v0 = v0 < 0xfbu;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A46C0; }
    goto L_088A4634;
L_088A4634:;
    v0 = LD32(s2+1672);
    v0 = s3 - v0;
    v0 = v0 < 0x1f5u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A46B0; }
    goto L_088A4648;
L_088A4648:;
    v1 = LD32(s2+16);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_088A4678; }
    goto L_088A4658;
L_088A4658:;
    goto L_088A465C;
L_088A465C:;
    v0 = 1;
    sp = sp + 32;
    return;
L_088A4678:;
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s2+1812));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s2+1812, FBITS(f0));
    if (cnd_) { goto L_088A4658; }
    goto L_088A4698;
L_088A4698:;
    a0 = s2 + 0;
    a1 = 1;
    a2 = 0 + 0;
    { rv_t r_ = func_088A34D8(a0, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A46A8;
L_088A46A8:;
    goto L_088A465C;
L_088A46B0:;
    a0 = s2 + 0;
    func_088A446C(a0);
    goto L_088A46B8;
L_088A46B8:;
    ST32(s2+1672, s3);
    goto L_088A4648;
L_088A46C0:;
    a0 = s2 + 0;
    f0 = func_088A43A4(a0, 0, 0, 0);
    goto L_088A46C8;
L_088A46C8:;
    ST32(s2+1668, s3);
    goto L_088A4634;
L_088A46D0:;
    a0 = s2 + 0;
    func_088A43F8(a0, 0, 0, 0);
    goto L_088A46D8;
L_088A46D8:;
    ST32(s2+1588, s3);
    goto L_088A4620;
L_088A46E0:;
    s1 = 0x10620000u;
    { u64 r_ = func_088A457C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A46E8;
L_088A46E8:;
    s1 = s1 | 0x4dd3;
    { u64 p_ = (u64)v0 * s1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    s0 = hi;
    s0 = s0 >> 6;
    v0 = func_088AB4A8();
    goto L_088A46FC;
L_088A46FC:;
    { u64 p_ = (u64)v0 * s1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a1 = D_08AD7430 - (29744);
    a1 = a1 + 29744;
    a2 = s0 + 0;
    v0 = hi;
    v0 = v0 >> 6;
    a3 = v0 + 0;
    a0 = s2 + 0;
    f0 = func_088A32AC(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_088A4720;
L_088A4720:;
    v0 = LD_U8(s2+1580);
    cnd_ = v0 == 0;
    a1 = D_08AD745C - (29788);
    if (cnd_) { goto L_088A4744; }
    goto L_088A472C;
L_088A472C:;
    a0 = s2 + 0;
    goto L_088A4730;
L_088A4730:;
    a1 = 0 + 0;
    a2 = 2;
    { rv_t r_ = func_088A34D8(a0, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A473C;
L_088A473C:;
    v0 = LD32(s2+1588);
    goto L_088A4610;
L_088A4744:;
    a0 = s2 + 0;
    a1 = a1 + 29788;
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A4750;
L_088A4750:;
    v0 = 2;
    ST32(s2+24, v0);
    a0 = s2 + 0;
    func_088AAD34(a0);
    goto L_088A4760;
L_088A4760:;
    a0 = s2 + 0;
    goto L_088A4730;
}

/* 088A4768 */
void func_088A4768(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4768:;
    sp = sp - 16;
    a0 = a0 + 32;
    func_088A9EA8();
    goto L_088A4778;
L_088A4778:;
    sp = sp + 16;
    return;
}

/* 088A4784 */
void func_088A4784(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4784:;
    sp = sp - 16;
    v0 = D_08B16014 - (24596);
    a1 = RS_FADDR(func_088A49D4, 0x088A49D4u) - (18900);
    a1 = a1 + 18900;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s1 = D_08B16020 - (24608);
    a0 = LD32(v0+24596);
    s0 = D_08B16024 - (24612);
    func_088976C4(a0, a1, a2, a3, t1, t2, t3);
    goto L_088A47B8;
L_088A47B8:;
    v1 = D_08B16018 - (24600);
    a0 = LD32(v1+24600);
    a1 = RS_FADDR(func_088A4A78, 0x088A4A78u) - (19064);
    a1 = a1 + 19064;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A47D4;
L_088A47D4:;
    v1 = D_08B1601C - (24604);
    a0 = LD32(v1+24604);
    a1 = RS_FADDR(func_088A4AF8, 0x088A4AF8u) - (19192);
    a1 = a1 + 19192;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A47F0;
L_088A47F0:;
    a0 = LD32(s1+24608);
    a1 = D_08B2AE28 - (-20952);
    a2 = 0 + 0;
    a3 = 10;
    t0 = 0 + 0;
    t1 = 0 + 0;
    a1 = a1 - 20952;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_088A4810;
L_088A4810:;
    a0 = LD32(s1+24608);
    a1 = D_08AD7570 - (30064);
    a1 = a1 + 30064;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_088A4820;
L_088A4820:;
    a0 = LD32(s1+24608);
    s1 = D_08B16028 - (24616);
    func_088978FC(a0, 0, 0, 0);
    goto L_088A482C;
L_088A482C:;
    a0 = LD32(s0+24612);
    a1 = D_08B2AE2C - (-20948);
    t0 = 0 + 0;
    t1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    a1 = a1 - 20948;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_088A484C;
L_088A484C:;
    a0 = LD32(s0+24612);
    a1 = D_08AD7604 - (30212);
    a1 = a1 + 30212;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_088A485C;
L_088A485C:;
    a0 = LD32(s0+24612);
    func_088978FC(a0, 0, 0, 0);
    goto L_088A4864;
L_088A4864:;
    a0 = LD32(s1+24616);
    a1 = D_08B2AE30 - (-20944);
    a1 = a1 - 20944;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A487C;
L_088A487C:;
    a0 = LD32(s1+24616);
    func_088978FC(a0, 0, 0, 0);
    goto L_088A4884;
L_088A4884:;
    sp = sp + 16;
    return;
}

/* 088A4898 */
void func_088A4898(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4898:;
    sp = sp - 16;
    s0 = D_08B2AE28 - (-20952);
    v1 = LD32(s0-20952);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A48D8; }
    goto L_088A48B4;
L_088A48B4:;
    v0 = v1 << 2;
    v1 = D_08AD7648 - (30280);
    v1 = v1 + 30280;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A48D0u: goto L_088A48D0; case 0x088A48D8u: goto L_088A48D8; case 0x088A48E8u: goto L_088A48E8; case 0x088A4900u: goto L_088A4900; case 0x088A4910u: goto L_088A4910; default: rs_break(0, 0x088a48c8); }
L_088A48D0:;
    func_088FF5E8(a1, a2, a3, t0, t1, t2, t3);
    goto L_088A48D8;
L_088A48D8:;
    goto L_088A48DC;
L_088A48DC:;
    sp = sp + 16;
    return;
L_088A48E8:;
    func_0889FA04(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088A48F0;
L_088A48F0:;
    func_088FF7D8(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088A48F8;
L_088A48F8:;
    goto L_088A48DC;
L_088A4900:;
    func_088FF728(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A4908;
L_088A4908:;
    goto L_088A48DC;
L_088A4910:;
    func_0889FA04(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088A4918;
L_088A4918:;
    v0 = D_08B2AA24 - (-21980);
    v0 = LD32(v0-21980);
    v1 = v0 < 0x6u;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A48DC; }
    goto L_088A492C;
L_088A492C:;
    v1 = D_08AD7668 - (30312);
    v0 = v0 << 2;
    v1 = v1 + 30312;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A48D8u: goto L_088A48D8; case 0x088A4948u: goto L_088A4948; case 0x088A4954u: goto L_088A4954; case 0x088A495Cu: goto L_088A495C; case 0x088A4964u: goto L_088A4964; default: rs_break(0, 0x088a4940); }
L_088A4948:;
    v0 = 2;
    goto L_088A494C;
L_088A494C:;
    ST32(s0-20952, v0);
    goto L_088A48D8;
L_088A4954:;
    v0 = 8;
    goto L_088A494C;
L_088A495C:;
    v0 = 9;
    goto L_088A494C;
L_088A4964:;
    v0 = 10;
    goto L_088A494C;
}

/* 088A496C */
void func_088A496C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A496C:;
    v0 = D_08B2AE28 - (-20952);
    a0 = LD32(v0-20952);
    sp = sp - 16;
    v1 = 1;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_088A4990; }
    goto L_088A4984;
L_088A4984:;
    goto L_088A4988;
L_088A4988:;
    sp = sp + 16;
    return;
L_088A4990:;
    func_088FF6B0();
    goto L_088A4998;
L_088A4998:;
    goto L_088A4988;
}

/* 088A49A0 */
void func_088A49A0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A49A0:;
    sp = sp - 16;
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A49B0;
L_088A49B0:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A49C4; }
    goto L_088A49B8;
L_088A49B8:;
    goto L_088A49BC;
L_088A49BC:;
    sp = sp + 16;
    return;
L_088A49C4:;
    { rv_t r_ = func_088A4A78(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A49CC;
L_088A49CC:;
    goto L_088A49BC;
}

/* 088A49D4 */
rv_t func_088A49D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A49D4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A49F8; }
    goto L_088A49F0;
L_088A49F0:;
    cnd_ = a2 == 0;
    v0 = a0 < 0x2u;
    if (cnd_) { goto L_088A4A1C; }
    goto L_088A49F8;
L_088A49F8:;
    a0 = D_08AD7680 - (30336);
    a0 = a0 + 30336;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4A04;
L_088A4A04:;
    a0 = 1;
    goto L_088A4A08;
L_088A4A08:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A4A1C:;
    cnd_ = v0 != 0;
    a0 = D_08AD76BC - (30396);
    if (cnd_) { goto L_088A4A34; }
    goto L_088A4A24;
L_088A4A24:;
    a0 = a0 + 30396;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4A2C;
L_088A4A2C:;
    a0 = 0 + 0;
    goto L_088A4A08;
L_088A4A34:;
    { u64 r_ = func_088A4B8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4A3C;
L_088A4A3C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A4A08; }
    goto L_088A4A44;
L_088A4A44:;
    v0 = D_08B2AE2C - (-20948);
    ST32(v0-20948, s0);
    v0 = func_088FF898(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088A4A50;
L_088A4A50:;
    cnd_ = v0 == 0;
    v1 = 3;
    if (cnd_) { goto L_088A4A6C; }
    goto L_088A4A58;
L_088A4A58:;
    v1 = 1;
    v0 = D_08B2AE28 - (-20952);
    a0 = 1;
    ST32(v0-20952, v1);
    goto L_088A4A08;
L_088A4A6C:;
    v0 = D_08B2AE28 - (-20952);
    ST32(v0-20952, v1);
    goto L_088A4A2C;
}

/* 088A4A78 */
rv_t func_088A4A78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4A78:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD76D4 - (30420);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 30420;
    if (cnd_) { goto L_088A4AB0; }
    goto L_088A4A94;
L_088A4A94:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4A9C;
L_088A4A9C:;
    v1 = 1;
    goto L_088A4AA0;
L_088A4AA0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A4AB0:;
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4AB8;
L_088A4AB8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A4AA0; }
    goto L_088A4AC0;
L_088A4AC0:;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A4AE8; }
    goto L_088A4AD0;
L_088A4AD0:;
    func_088FF904(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088A4AD8;
L_088A4AD8:;
    v1 = 4;
    v0 = D_08B2AE28 - (-20952);
    ST32(v0-20952, v1);
    goto L_088A4A9C;
L_088A4AE8:;
    func_0889F898(0, 0, 0, 0, 0, 0, 0);
    goto L_088A4AF0;
L_088A4AF0:;
    goto L_088A4AD0;
}

/* 088A4AF8 */
rv_t func_088A4AF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4AF8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD76F0 - (30448);
    v0 = v0 & 0xff;
    a1 = D_08B2AE28 - (-20952);
    cnd_ = v0 != 0;
    a0 = a0 + 30448;
    if (cnd_) { goto L_088A4B44; }
    goto L_088A4B18;
L_088A4B18:;
    v1 = LD32(a1-20952);
    v0 = 6;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A4B38; }
    goto L_088A4B28;
L_088A4B28:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A4B38:;
    ST32(a1-20952, 0);
    a0 = 1;
    goto L_088A4B28;
L_088A4B44:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4B4C;
L_088A4B4C:;
    a0 = 1;
    goto L_088A4B28;
}

/* 088A4B54 */
u64 func_088A4B54(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_088A4B54:;
    v0 = D_08B2AE28 - (-20952);
    v1 = LD32(v0-20952);
    v0 = 2;
    a1 = 1;
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 2;
    if (cnd_) { goto L_088A4B84; }
    goto L_088A4B6C;
L_088A4B6C:;
    v0 = v1 - 7;
    cnd_ = a0 != 0;
    v0 = v0 < 0x4u;
    if (cnd_) { goto L_088A4B80; }
    goto L_088A4B78;
L_088A4B78:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A4B84; }
    goto L_088A4B80;
L_088A4B80:;
    a1 = 0 + 0;
    goto L_088A4B84;
L_088A4B84:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A4B8C */
u64 func_088A4B8C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_088A4B8C:;
    v0 = D_08B2AE28 - (-20952);
    v1 = LD32(v0-20952);
    v0 = 3;
    a1 = 1;
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 4;
    if (cnd_) { goto L_088A4BB4; }
    goto L_088A4BA4;
L_088A4BA4:;
    cnd_ = a0 == 0;
    v0 = 6;
    if (cnd_) { goto L_088A4BBC; }
    goto L_088A4BAC;
L_088A4BAC:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = 0 + 0; goto L_088A4BB4; }
    goto L_088A4BB4;
L_088A4BB4:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_088A4BBC:;
    cnd_ = v1 != v0;
    if (cnd_) { a1 = 0 + 0; goto L_088A4BB4; }
    goto L_088A4BC4;
L_088A4BC4:;
    goto L_088A4BB4;
}

/* 088A4BCC */
void func_088A4BCC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4BCC:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 == 0;
    v1 = 3;
    if (cnd_) { goto L_088A4BF0; }
    goto L_088A4BE0;
L_088A4BE0:;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 == 0;
    v1 = 2;
    if (cnd_) { goto L_088A4C04; }
    goto L_088A4BF0;
L_088A4BF0:;
    v0 = D_08B2AE28 - (-20952);
    ST32(v0-20952, v1);
    goto L_088A4BFC;
L_088A4BFC:;
    sp = sp + 16;
    return;
L_088A4C04:;
    v1 = 7;
    v0 = D_08B2AE28 - (-20952);
    ST32(v0-20952, v1);
    func_0889F780(t1, t2, t3);
    goto L_088A4C14;
L_088A4C14:;
    goto L_088A4BFC;
}

/* 088A4C1C */
void func_088A4C1C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_088A4C1C:;
    a0 = D_08B2AE28 - (-20952);
    v1 = LD32(a0-20952);
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 6;
    if (cnd_) { goto L_088A4C38; }
    goto L_088A4C30;
L_088A4C30:;
    ST32(a0-20952, v0);
    return;
L_088A4C38:;
    ST32(a0-20952, 0);
    return;
}

/* 088A4C40 */
void func_088A4C40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4C40:;
    sp = sp - 16;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A4CAC; }
    goto L_088A4C58;
L_088A4C58:;
    v0 = D_08B2BB78 - (-17544);
    goto L_088A4C5C;
L_088A4C5C:;
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088A4C8C; }
    goto L_088A4C68;
L_088A4C68:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    a0 = D_08B2BB72 - (-17550);
    if (cnd_) { goto L_088A4C8C; }
    goto L_088A4C74;
L_088A4C74:;
    v0 = LD_U8(a0-17550);
    cnd_ = v0 == 0;
    v1 = 16;
    if (cnd_) { goto L_088A4C8C; }
    goto L_088A4C80;
L_088A4C80:;
    v0 = D_08B2BB90 - (-17520);
    ST32(v0-17520, v1);
    ST8(a0-17550, 0);
    goto L_088A4C8C;
L_088A4C8C:;
    func_088FF904(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A4C94;
L_088A4C94:;
    v1 = 5;
    v0 = D_08B2AE28 - (-20952);
    ST32(v0-20952, v1);
    sp = sp + 16;
    return;
L_088A4CAC:;
    func_0889F898(a1, a2, a3, t0, t1, t2, t3);
    goto L_088A4CB4;
L_088A4CB4:;
    v0 = D_08B2BB78 - (-17544);
    goto L_088A4C5C;
}

/* 088A4CBC */
void func_088A4CBC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4CBC:;
    sp = sp - 16;
    v0 = D_08B2AE28 - (-20952);
    v1 = LD32(v0-20952);
    v0 = 2;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A4CE8; }
    goto L_088A4CD8;
L_088A4CD8:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
L_088A4CE8:;
    func_088A4C40(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A4CF0;
L_088A4CF0:;
    a0 = 1;
    goto L_088A4CD8;
}

/* 088A4CF8 */
void func_088A4CF8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A4CF8:;
    sp = sp - 32;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    v0 = D_08B2AE5C - (-20900);
    if (cnd_) { goto L_088A4D94; }
    goto L_088A4D2C;
L_088A4D2C:;
    v1 = D_08B2AE44 - (-20924);
    ST32(v0-20900, 0);
    v0 = D_08B2AE54 - (-20908);
    ST32(v1-20924, 0);
    v1 = D_08B2AE58 - (-20904);
    ST32(v0-20908, 0);
    ST32(v1-20904, 0);
    goto L_088A4D48;
L_088A4D48:;
    a0 = 1;
    v0 = D_08B2AE3E - (-20930);
    v1 = D_08B2AE50 - (-20912);
    ST8(v0-20930, a0);
    v0 = D_08B2AE34 - (-20940);
    ST8(v1-20912, 0);
    v1 = D_08B2AE38 - (-20936);
    ST32(v0-20940, 0);
    ST32(v1-20936, 0);
    sp = sp + 32;
    return;
L_088A4D94:;
    v0 = func_088A5DFC();
    goto L_088A4D9C;
L_088A4D9C:;
    cnd_ = v0 == 0;
    s6 = D_08B2AE44 - (-20924);
    if (cnd_) { goto L_088A4E4C; }
    goto L_088A4DA4;
L_088A4DA4:;
    v0 = D_08B2BB80 - (-17536);
    a0 = LD32(v0-17536);
    v1 = 1;
    v0 = D_08B2AE40 - (-20928);
    ST8(v0-20928, v1);
    ST32(s6-20924, a0);
    goto L_088A4DBC;
L_088A4DBC:;
    s0 = LD32(s6-20924);
    a0 = s0 << 2;
    a0 = a0 + s0;
    a0 = a0 << 3;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4DD4;
L_088A4DD4:;
    s4 = v0 + 4;
    ST32(s4-4, s0);
    s1 = s4 + 0;
    cnd_ = s0 == 0;
    s2 = s0 - 1;
    if (cnd_) { goto L_088A4E24; }
    goto L_088A4DE8;
L_088A4DE8:;
    s3 = (u32)-1;
    s5 = 999;
    goto L_088A4DF0;
L_088A4DF0:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4DF8;
L_088A4DF8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1024;
    s2 = s2 - 1;
    func_08830CCC(a0, a1, 0, 0, 0);
    goto L_088A4E0C;
L_088A4E0C:;
    ST32(s1, s0);
    ST8(s1+17, 0);
    ST32(s1+32, s3);
    ST32(s1+36, s5);
    cnd_ = s2 != s3;
    s1 = s1 + 40;
    if (cnd_) { goto L_088A4DF0; }
    goto L_088A4E24;
L_088A4E24:;
    a0 = LD32(s6-20924);
    v0 = D_08B2AE5C - (-20900);
    ST32(v0-20900, s4);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A4E38;
L_088A4E38:;
    v1 = D_08B2AE54 - (-20908);
    ST32(v1-20908, v0);
    v0 = D_08B2AE58 - (-20904);
    ST32(v0-20904, 0);
    goto L_088A4D48;
L_088A4E4C:;
    v0 = 1;
    v1 = D_08B2AE40 - (-20928);
    ST32(s6-20924, v0);
    ST8(v1-20928, 0);
    goto L_088A4DBC;
}

/* 088A4E60 */
void func_088A4E60(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A4E60:;
    sp = sp - 16;
    s0 = D_08B2AE54 - (-20908);
    func_088A6A00();
    goto L_088A4E7C;
L_088A4E7C:;
    a0 = LD32(s0-20908);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A4F18; }
    goto L_088A4E88;
L_088A4E88:;
    s2 = D_08B2AE5C - (-20900);
    a0 = LD32(s2-20900);
    goto L_088A4E90;
L_088A4E90:;
    cnd_ = a0 == 0;
    ST32(s0-20908, 0);
    if (cnd_) { goto L_088A4EE4; }
    goto L_088A4E98;
L_088A4E98:;
    v1 = LD32(a0-4);
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 3;
    s1 = a0 + v0;
    goto L_088A4EAC;
L_088A4EAC:;
    a0 = LD32(s2-20900);
    goto L_088A4EB0;
L_088A4EB0:;
    cnd_ = a0 == s1;
    s1 = s1 - 40;
    if (cnd_) { goto L_088A4EDC; }
    goto L_088A4EB8;
L_088A4EB8:;
    s0 = LD32(s1);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A4EAC; }
    goto L_088A4EC4;
L_088A4EC4:;
    { u64 r_ = func_08830D10(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4ECC;
L_088A4ECC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4ED4;
L_088A4ED4:;
    a0 = LD32(s2-20900);
    goto L_088A4EB0;
L_088A4EDC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4EE4;
L_088A4EE4:;
    ST32(s2-20900, 0);
    v0 = D_08B2AE44 - (-20924);
    v1 = D_08B2AE50 - (-20912);
    ST32(v0-20924, 0);
    v0 = D_08B2AE3E - (-20930);
    ST8(v1-20912, 0);
    ST8(v0-20930, 0);
    sp = sp + 16;
    return;
L_088A4F18:;
    s2 = D_08B2AE5C - (-20900);
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A4F20;
L_088A4F20:;
    a0 = LD32(s2-20900);
    goto L_088A4E90;
}

/* 088A4F28 */
rv_t func_088A4F28(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088A4F28:;
    v0 = D_08B2AE41 - (-20927);
    v1 = LD_U8(v0-20927);
    cnd_ = v1 == 0;
    v0 = D_08AD7848 - (30792);
    if (cnd_) { goto L_088A4F44; }
    goto L_088A4F38;
L_088A4F38:;
    v0 = D_08AD7850 - (30800);
    f0 = BITSF(LD32(v0+30800));
    return (rv_t){ v0, v1, f0 };
L_088A4F44:;
    f0 = BITSF(LD32(v0+30792));
    return (rv_t){ v0, v1, f0 };
}

/* 088A4F4C */
float func_088A4F4C(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088A4F4C:;
    v0 = D_08B2AE41 - (-20927);
    v1 = LD_U8(v0-20927);
    cnd_ = v1 == 0;
    v0 = D_08AD7844 - (30788);
    if (cnd_) { goto L_088A4F68; }
    goto L_088A4F5C;
L_088A4F5C:;
    v0 = D_08AD784C - (30796);
    f0 = BITSF(LD32(v0+30796));
    return f0;
L_088A4F68:;
    f0 = BITSF(LD32(v0+30788));
    return f0;
}

/* 088A4F70 */
float func_088A4F70(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088A4F70:;
    v0 = D_08B2AE41 - (-20927);
    v1 = LD_U8(v0-20927);
    cnd_ = v1 == 0;
    v0 = D_08AD7848 - (30792);
    if (cnd_) { goto L_088A4F8C; }
    goto L_088A4F80;
L_088A4F80:;
    v0 = D_08AD7850 - (30800);
    f0 = BITSF(LD32(v0+30800));
    return f0;
L_088A4F8C:;
    f0 = BITSF(LD32(v0+30792));
    return f0;
}

/* 088A4F94 */
void func_088A4F94(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088A4F94:;
    v1 = D_08B2AE50 - (-20912);
    v0 = LD_U8(v1-20912);
    sp = sp - 64;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A5048; }
    goto L_088A4FD0;
L_088A4FD0:;
    s6 = D_08B2AE48 - (-20920);
    a1 = LD32(s6-20920);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A5014; }
    goto L_088A4FE0;
L_088A4FE0:;
    s5 = D_08B2AE5C - (-20900);
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    v1 = LD32(s5-20900);
    a2 = 1;
    goto L_088A4FF4;
L_088A4FF4:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, FBITS(f0)); goto L_088A5004; }
    goto L_088A5000;
L_088A5000:;
    ST8(v1+16, a2);
    goto L_088A5004;
L_088A5004:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    v1 = v1 + 40;
    if (cnd_) { goto L_088A4FF4; }
    goto L_088A5014;
L_088A5014:;
    sp = sp + 64;
    return;
L_088A5048:;
    v0 = func_088A5E88();
    goto L_088A5050;
L_088A5050:;
    cnd_ = v0 == 0;
    s6 = D_08B2AE48 - (-20920);
    if (cnd_) { goto L_088A51E0; }
    goto L_088A5058;
L_088A5058:;
    v0 = D_08B2BB84 - (-17532);
    v1 = LD32(v0-17532);
    ST32(s6-20920, v1);
    goto L_088A5064;
L_088A5064:;
    v0 = LD32(s6-20920);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088A5160; }
    goto L_088A5070;
L_088A5070:;
    f20 = BITSF(0);
    s5 = D_08B2AE5C - (-20900);
    fp = D_08B285B4 - (-31308);
    s7 = 999;
    s4 = 0 + 0;
    goto L_088A5084;
L_088A5084:;
    a0 = s3 + 0;
    v0 = func_088AD218(a0);
    goto L_088A508C;
L_088A508C:;
    s2 = v0 + 0;
    v0 = LD32(s5-20900);
    s1 = v0 + s4;
    a0 = LD32(s1);
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    ST8(s1+16, 0);
    func_08830D40(a0);
    goto L_088A50AC;
L_088A50AC:;
    a0 = LD32(s1);
    a1 = 1;
    func_08830E28(a0, a1);
    goto L_088A50B8;
L_088A50B8:;
    f0 = BITSF(LD32(fp-31308));
    cnd_ = s2 == s7;
    ST32(s1+12, FBITS(f0));
    if (cnd_) { goto L_088A513C; }
    goto L_088A50C4;
L_088A50C4:;
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    v0 = LD32(a0+4);
    a0 = D_08B28EF4 - (-28940);
    v1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = s2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A5120; }
    goto L_088A50F4;
L_088A50F4:;
    a0 = LD32(a1);
    goto L_088A50F8;
L_088A50F8:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(v1+16); goto L_088A51C0; }
    goto L_088A5110;
L_088A5110:;
    a1 = LD32(a1+4);
    goto L_088A5114;
L_088A5114:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_088A50F8; }
    goto L_088A511C;
L_088A511C:;
    v1 = 0 + 0;
    goto L_088A5120;
L_088A5120:;
    cnd_ = v1 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_088A5140; }
    goto L_088A5128;
L_088A5128:;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_088A5170; }
    goto L_088A513C;
L_088A513C:;
    a0 = (u32)-1;
    goto L_088A5140;
L_088A5140:;
    ST8(s1+17, 0);
    ST32(s1+32, a0);
    goto L_088A5148;
L_088A5148:;
    v0 = LD32(s6-20920);
    s3 = s3 + 1;
    ST32(s1+36, s2);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s4 = s4 + 40;
    if (cnd_) { goto L_088A5084; }
    goto L_088A5160;
L_088A5160:;
    v0 = 1;
    v1 = D_08B2AE50 - (-20912);
    ST8(v1-20912, v0);
    goto L_088A5014;
L_088A5170:;
    ST8(s1+17, v0);
    a0 = v1 + 0;
    v1 = LD32(v1);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s1 + 20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5188;
L_088A5188:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a2 = LD32(s1+32);
    ST32(s1+20, FBITS(f0));
    v1 = D_08B2C0FC - (-16132);
    a1 = s0 + 0;
    ST32(s0+4, FBITS(f1));
    a0 = v1 - 16132;
    a3 = 0 + 0;
    ST32(s0+8, FBITS(f2));
    v0 = func_088CEAA8(a0, a1, a2, a3);
    goto L_088A51B8;
L_088A51B8:;
    ST32(s1+32, v0);
    goto L_088A5148;
L_088A51C0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088A5110; }
    goto L_088A51CC;
L_088A51CC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088A5114; }
    goto L_088A51D8;
L_088A51D8:;
    goto L_088A5120;
L_088A51E0:;
    v0 = 1;
    ST32(s6-20920, v0);
    goto L_088A5064;
}

/* 088A51EC */
u64 func_088A51EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A51EC:;
    sp = sp - 48;
    v0 = D_08B2AE50 - (-20912);
    s1 = a0 + 0;
    v1 = LD_U8(v0-20912);
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A5248; }
    goto L_088A5220;
L_088A5220:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_088A5248:;
    s0 = LD_U16(a0+18);
    s3 = LD_U16(a0+16);
    a1 = s0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_088A6520(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A525C;
L_088A525C:;
    a0 = s3 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088A5304; }
    goto L_088A5268;
L_088A5268:;
    a0 = s3 + 0;
    goto L_088A526C;
L_088A526C:;
    a1 = s0 + 0;
    { u64 r_ = func_088A6520(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5274;
L_088A5274:;
    s2 = v0 + 0;
    v1 = LD_U8(v0+8);
    v0 = LD32(s1+20);
    a0 = s2 + 0;
    cnd_ = v1 != v0;
    a1 = 1;
    if (cnd_) { goto L_088A5220; }
    goto L_088A528C;
L_088A528C:;
    a1 = LD32(s1+4);
    v0 = func_088A66F0(a0, a1);
    goto L_088A5294;
L_088A5294:;
    s4 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088A52CC; }
    goto L_088A52A4;
L_088A52A4:;
    a1 = LD32(s1+24);
    a2 = LD32(s1+20);
    a0 = LD32(s4+8);
    v0 = D_08B2AE4C - (-20916);
    ST32(v0-20916, s1);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A52BC;
L_088A52BC:;
    a0 = s4 + 0;
    { u64 r_ = func_088A7FE8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A52C4;
L_088A52C4:;
    a1 = v0 + 0;
    goto L_088A5220;
L_088A52CC:;
    f0 = func_08877FA4(a0, a1);
    goto L_088A52D4;
L_088A52D4:;
    a0 = 36;
    f20 = f0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A52E0;
L_088A52E0:;
    a3 = LD32(s1+24);
    a1 = LD32(s1+4);
    s0 = v0 + 0;
    f12 = f20;
    a2 = s2 + 0;
    a0 = v0 + 0;
    func_088A7C58(a0, a1, a2, a3, f12);
    goto L_088A52FC;
L_088A52FC:;
    s4 = s0 + 0;
    goto L_088A52A4;
L_088A5304:;
    { u64 r_ = func_08877EB4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A530C;
L_088A530C:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A5220; }
    goto L_088A5314;
L_088A5314:;
    a0 = s3 + 0;
    goto L_088A526C;
}

/* 088A531C */
void func_088A531C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A531C:;
    sp = sp - 48;
    v0 = D_08B2AE50 - (-20912);
    ST8(v0-20912, 0);
    v0 = func_088A5E88();
    goto L_088A5348;
L_088A5348:;
    cnd_ = v0 == 0;
    v0 = D_08B2AE5C - (-20900);
    if (cnd_) { goto L_088A5448; }
    goto L_088A5350;
L_088A5350:;
    s5 = D_08B2AE48 - (-20920);
    v0 = LD32(s5-20920);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088A53A0; }
    goto L_088A5360;
L_088A5360:;
    s4 = D_08B2AE5C - (-20900);
    s1 = 0 + 0;
    goto L_088A5368;
L_088A5368:;
    v0 = LD32(s4-20900);
    a1 = 0 + 0;
    s2 = s2 + 1;
    v0 = v0 + s1;
    a0 = LD32(v0+36);
    v0 = func_088AD374(a0, a1);
    goto L_088A5380;
L_088A5380:;
    v0 = v0 + 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = LD32(s4-20900);
    if (cnd_) { goto L_088A53C4; }
    goto L_088A5390;
L_088A5390:;
    v0 = LD32(s5-20920);
    goto L_088A5394;
L_088A5394:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 40;
    if (cnd_) { goto L_088A5368; }
    goto L_088A53A0;
L_088A53A0:;
    goto L_088A53A4;
L_088A53A4:;
    sp = sp + 48;
    return;
L_088A53C4:;
    a1 = 0 + 0;
    s0 = v0 + s1;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    s3 = LD32(s0+36);
    if (cnd_) { goto L_088A5390; }
    goto L_088A53D8;
L_088A53D8:;
    v0 = LD_U8(s0+8);
    a2 = LD_U8(s0+4);
    a0 = LD32(s0);
    a2 = a2 + v0;
    a2 = a2 & 0xff;
    func_08830E18(a0, a1, a2);
    goto L_088A53F0;
L_088A53F0:;
    a0 = LD32(s0);
    a1 = sp + 0;
    a2 = sp + 4;
    func_08830DFC(a0, a1, a2);
    goto L_088A5400;
L_088A5400:;
    a1 = LD32(sp+4);
    a3 = LD32(sp);
    a0 = 92;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5414;
L_088A5414:;
    v1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A5390; }
    goto L_088A5428;
L_088A5428:;
    f0 = BITSF(LD32(s0+12));
    v0 = 11;
    ST32(v1, v0);
    ST32(v1+4, s3);
    ST32(v1+8, FBITS(f0));
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5440;
L_088A5440:;
    v0 = LD32(s5-20920);
    goto L_088A5394;
L_088A5448:;
    s0 = LD32(v0-20900);
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A53A4; }
    goto L_088A5458;
L_088A5458:;
    v0 = LD_U8(s0+8);
    a2 = LD_U8(s0+4);
    a0 = LD32(s0);
    a1 = 0 + 0;
    a2 = a2 + v0;
    a2 = a2 & 0xff;
    func_08830E18(a0, a1, a2);
    goto L_088A5474;
L_088A5474:;
    a0 = LD32(s0);
    a1 = sp + 8;
    a2 = sp + 12;
    func_08830DFC(a0, a1, a2);
    goto L_088A5484;
L_088A5484:;
    a1 = LD32(sp+12);
    a3 = LD32(sp+8);
    a0 = 92;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5498;
L_088A5498:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088A53A0; }
    goto L_088A54A0;
L_088A54A0:;
    f0 = BITSF(LD32(s0+12));
    v0 = 9;
    ST32(v1, v0);
    v0 = 999;
    a0 = v1 + 0;
    ST32(v1+4, v0);
    a1 = 1;
    a2 = 0 + 0;
    ST32(v1+8, FBITS(f0));
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A54C8;
L_088A54C8:;
    goto L_088A53A4;
}

/* 088A54D0 */
void func_088A54D0(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A54D0:;
    sp = sp - 16;
    func_088A6A00();
    goto L_088A54E0;
L_088A54E0:;
    v0 = D_08B2AE50 - (-20912);
    ST8(v0-20912, 0);
    sp = sp + 16;
    return;
}

/* 088A54F4 */
u64 func_088A54F4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A54F4:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = LD_U8(a0+8);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5518;
L_088A5518:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    a1 = v0 + 0;
    a2 = sp + 0;
    a3 = s2 + 0;
    { u64 r_ = func_088A65D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5530;
L_088A5530:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A5540; }
    goto L_088A5538;
L_088A5538:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5540;
L_088A5540:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A5558 */
rv_t func_088A5558(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088A5558:;
    a2 = a1 & 0xffff;
    v0 = a0 < 0x1u;
    v1 = a2 < 0x1u;
    sp = sp - 64;
    v0 = v0 | v1;
    f20 = f12;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A55C4; }
    goto L_088A5598;
L_088A5598:;
    goto L_088A559C;
L_088A559C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088A55C4:;
    a1 = a0 + 0;
    a0 = sp + 0;
    func_08830E38(a0, a1, a2);
    goto L_088A55D0;
L_088A55D0:;
    a0 = sp + 0;
    a1 = 8;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A55DC;
L_088A55DC:;
    s4 = v0 - 1;
    v0 = (u32)-1;
    cnd_ = s4 == v0;
    f21 = f20;
    if (cnd_) { goto L_088A5598; }
    goto L_088A55EC;
L_088A55EC:;
    v0 = D_08AEC41C - (-15332);
    f22 = BITSF(LD32(v0-15332));
    a0 = sp + 0;
    goto L_088A55F8;
L_088A55F8:;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5600;
L_088A5600:;
    cnd_ = v0 != 0;
    s3 = 90;
    if (cnd_) { goto L_088A5724; }
    goto L_088A5608;
L_088A5608:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5614;
L_088A5614:;
    cnd_ = v0 != 0;
    v0 = D_08B2AE42 - (-20926);
    if (cnd_) { goto L_088A5714; }
    goto L_088A561C;
L_088A561C:;
    s0 = LD_U16(v0-20926);
    goto L_088A5620;
L_088A5620:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A562C;
L_088A562C:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088A5704; }
    goto L_088A5634;
L_088A5634:;
    a0 = sp + 0;
    v0 = func_088A3190(a0);
    goto L_088A563C;
L_088A563C:;
    s2 = v0 + 0;
    goto L_088A5640;
L_088A5640:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088A6520(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A564C;
L_088A564C:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088A56F4; }
    goto L_088A5654;
L_088A5654:;
    a1 = s0 + 0;
    { u64 r_ = func_088A6520(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A565C;
L_088A565C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088A5598; }
    goto L_088A5664;
L_088A5664:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    v0 = func_088A6760(a0, a1);
    goto L_088A5670;
L_088A5670:;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088A56A4; }
    goto L_088A5678;
L_088A5678:;
    a0 = v0 + 0;
    a2 = s3 + 0;
    f12 = f20;
    a1 = sp + 0;
    { u64 r_ = func_088A8484(a0, a1, a2, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A568C;
L_088A568C:;
    s4 = s4 - 1;
    goto L_088A5690;
L_088A5690:;
    v0 = (u32)-1;
    cnd_ = s4 != v0;
    if (cnd_) { a0 = sp + 0; goto L_088A55F8; }
    goto L_088A569C;
L_088A569C:;
    goto L_088A559C;
L_088A56A4:;
    a0 = sp + 0;
    a1 = 6;
    v0 = func_08830ED0(a0, a1);
    goto L_088A56B0;
L_088A56B0:;
    v1 = 63;
    cnd_ = v0 == v1;
    s3 = 1;
    if (cnd_) { goto L_088A56D0; }
    goto L_088A56BC;
L_088A56BC:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { u64 r_ = func_088A54F4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A56C8;
L_088A56C8:;
    s4 = s4 - 1;
    goto L_088A5690;
L_088A56D0:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A56D8;
L_088A56D8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    func_088A83E0(a0, a1, a2, 0, 0, 0);
    goto L_088A56EC;
L_088A56EC:;
    v0 = s0 + 0;
    goto L_088A5678;
L_088A56F4:;
    a1 = s0 + 0;
    { u64 r_ = func_08877EB4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A56FC;
L_088A56FC:;
    a0 = s3 + 0;
    goto L_088A5654;
L_088A5704:;
    a1 = 5;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A570C;
L_088A570C:;
    s2 = v0 + 1000;
    goto L_088A5640;
L_088A5714:;
    a0 = sp + 0;
    v0 = func_088A3280(a0);
    goto L_088A571C;
L_088A571C:;
    s0 = v0 + 0;
    goto L_088A5620;
L_088A5724:;
    a0 = sp + 0;
    v0 = func_088A3210(a0);
    goto L_088A572C;
L_088A572C:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_088A5608; }
    goto L_088A5734;
L_088A5734:;
    a0 = sp + 0;
    a1 = 10;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5740;
L_088A5740:;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088A5758; }
    goto L_088A574C;
L_088A574C:;
    f0 = f0 * f22;
    f20 = f21 + f0;
    goto L_088A568C;
L_088A5758:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088A574C;
}

/* 088A5774 */
u32 func_088A5774(u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_088A5774:;
    v0 = D_08B2AE58 - (-20904);
    v1 = LD32(v0-20904);
    t0 = t0 & 0xff;
    a3 = a3 & 0xff;
    a3 = a3 + t0;
    a3 = a3 + 9;
    cnd_ = v1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088A57DC; }
    goto L_088A5794;
L_088A5794:;
    v0 = D_08B2AE54 - (-20908);
    a1 = LD32(v0-20908);
    t1 = v1 + 0;
    v0 = LD32(a1);
    goto L_088A57A4;
L_088A57A4:;
    t0 = t0 + 1;
    a2 = t0 < t1;
    v1 = LD32(v0);
    a1 = a1 + 4;
    v0 = LD32(v1);
    a0 = LD32(v1+8);
    v0 = v0 + 7;
    v0 = v0 >> 3;
    v0 = v0 + a3;
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088A57E0; }
    goto L_088A57D4;
L_088A57D4:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088A57A4; }
    goto L_088A57DC;
L_088A57DC:;
    t2 = 1;
    goto L_088A57E0;
L_088A57E0:;
    v0 = t2 + 0;
    return v0;
}

/* 088A57E8 */
void func_088A57E8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A57E8:;
    sp = sp - 16;
    s2 = D_08B2AE58 - (-20904);
    v0 = LD32(s2-20904);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A5838; }
    goto L_088A580C;
L_088A580C:;
    s1 = D_08B2AE54 - (-20908);
    v1 = LD32(s1-20908);
    goto L_088A5814;
L_088A5814:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    a0 = LD32(v0);
    func_08AB28FC(a0);
    goto L_088A5828;
L_088A5828:;
    v0 = LD32(s2-20904);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(s1-20908);
    if (cnd_) { goto L_088A5814; }
    goto L_088A5838;
L_088A5838:;
    v0 = D_08B2AE4C - (-20916);
    ST32(v0-20916, 0);
    sp = sp + 16;
    return;
}

/* 088A5858 */
void func_088A5858(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A5858:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088A5898; }
    goto L_088A5878;
L_088A5878:;
    a0 = s0 + 0;
    goto L_088A587C;
L_088A587C:;
    a1 = s1 + 0;
    func_088A5A30(a0, a1);
    goto L_088A5884;
L_088A5884:;
    sp = sp + 16;
    return;
L_088A5898:;
    func_088A59CC(a0);
    goto L_088A58A0;
L_088A58A0:;
    a0 = s0 + 0;
    goto L_088A587C;
}

/* 088A58A8 */
void func_088A58A8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A58A8:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s1 = a1 + 0;
    s0 = a2 + 0;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088A5924; }
    goto L_088A58C8;
L_088A58C8:;
    v0 = s0 < 0x8u;
    goto L_088A58CC;
L_088A58CC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD_U8(s1); goto L_088A5904; }
    goto L_088A58D4;
L_088A58D4:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD_U8(s1); goto L_088A58F0; }
    goto L_088A58DC;
L_088A58DC:;
    goto L_088A58E0;
L_088A58E0:;
    sp = sp + 16;
    return;
L_088A58F0:;
    a1 = s0 + 0;
    func_088A5B00(a0, a1);
    goto L_088A58F8;
L_088A58F8:;
    goto L_088A58E0;
L_088A5900:;
    a0 = LD_U8(s1);
    goto L_088A5904;
L_088A5904:;
    a1 = 8;
    s0 = s0 - 8;
    func_088A5B00(a0, a1);
    goto L_088A5910;
L_088A5910:;
    v0 = s0 < 0x8u;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_088A5900; }
    goto L_088A591C;
L_088A591C:;
    goto L_088A58D4;
L_088A5924:;
    func_088A59CC(a0);
    goto L_088A592C;
L_088A592C:;
    v0 = s0 < 0x8u;
    goto L_088A58CC;
}

/* 088A5934 */
void func_088A5934(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A5934:;
    sp = sp - 32;
    a2 = a2 & 0xff;
    s0 = a1 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088A59BC; }
    goto L_088A5958;
L_088A5958:;
    s3 = D_08B2AE58 - (-20904);
    v0 = LD32(s3-20904);
    goto L_088A5960;
L_088A5960:;
    s1 = LD32(s0);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088A59A0; }
    goto L_088A596C;
L_088A596C:;
    s2 = D_08B2AE54 - (-20908);
    a1 = LD32(s2-20908);
    goto L_088A5974;
L_088A5974:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    v0 = v0 + a1;
    v1 = LD32(v0);
    s0 = s0 + 1;
    a1 = LD32(v1);
    func_088A3124(a0, a1);
    goto L_088A5990;
L_088A5990:;
    v0 = LD32(s3-20904);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s2-20908); goto L_088A5974; }
    goto L_088A59A0;
L_088A59A0:;
    sp = sp + 32;
    return;
L_088A59BC:;
    s3 = D_08B2AE58 - (-20904);
    func_088A59CC(a0);
    goto L_088A59C4;
L_088A59C4:;
    v0 = LD32(s3-20904);
    goto L_088A5960;
}

/* 088A59CC */
void func_088A59CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A59CC:;
    v0 = D_08B2AE4C - (-20916);
    v1 = LD32(v0-20916);
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A5A04; }
    goto L_088A59E8;
L_088A59E8:;
    a0 = s0 + 0;
    goto L_088A59EC;
L_088A59EC:;
    a1 = 6;
    func_088A5B00(a0, a1);
    goto L_088A59F4;
L_088A59F4:;
    sp = sp + 16;
    return;
L_088A5A04:;
    func_088A57E8();
    goto L_088A5A0C;
L_088A5A0C:;
    a0 = s0 + 0;
    goto L_088A59EC;
}

/* 088A5A14 */
void func_088A5A14(u32 a0, u32 a1)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A5A14:;
    sp = sp - 16;
    func_088A5B00(a0, a1);
    goto L_088A5A24;
L_088A5A24:;
    sp = sp + 16;
    return;
}

/* 088A5A30 */
void func_088A5A30(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A5A30:;
    v1 = D_08B2AE58 - (-20904);
    v0 = LD32(v1-20904);
    sp = sp - 48;
    s6 = a0 + 0;
    s4 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A5AD0; }
    goto L_088A5A70;
L_088A5A70:;
    s5 = a1 - 1;
    fp = D_08B2AE54 - (-20908);
    s7 = (u32)-1;
    v1 = LD32(fp-20908);
    goto L_088A5A80;
L_088A5A80:;
    v0 = s4 << 2;
    s1 = s5 + 0;
    v0 = v0 + v1;
    s2 = LD32(v0);
    cnd_ = s5 == s7;
    s0 = s6 + 0;
    if (cnd_) { goto L_088A5AB8; }
    goto L_088A5A98;
L_088A5A98:;
    s3 = (u32)-1;
    goto L_088A5A9C;
L_088A5A9C:;
    a1 = LD_U8(s0);
    a0 = LD32(s2);
    a2 = 8;
    s1 = s1 - 1;
    func_08830D78(a0, a1, a2);
    goto L_088A5AB0;
L_088A5AB0:;
    cnd_ = s1 != s3;
    s0 = s0 + 1;
    if (cnd_) { goto L_088A5A9C; }
    goto L_088A5AB8;
L_088A5AB8:;
    v1 = D_08B2AE58 - (-20904);
    v0 = LD32(v1-20904);
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(fp-20908);
    if (cnd_) { goto L_088A5A80; }
    goto L_088A5AD0;
L_088A5AD0:;
    sp = sp + 48;
    return;
}

/* 088A5B00 */
void func_088A5B00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A5B00:;
    sp = sp - 32;
    s4 = D_08B2AE58 - (-20904);
    v0 = LD32(s4-20904);
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A5B6C; }
    goto L_088A5B34;
L_088A5B34:;
    s3 = D_08B2AE54 - (-20908);
    v1 = LD32(s3-20908);
    goto L_088A5B3C;
L_088A5B3C:;
    v0 = s0 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a3 = LD32(v0);
    a2 = s1 + 0;
    s0 = s0 + 1;
    a0 = LD32(a3);
    func_08830D78(a0, a1, a2);
    goto L_088A5B5C;
L_088A5B5C:;
    v0 = LD32(s4-20904);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(s3-20908);
    if (cnd_) { goto L_088A5B3C; }
    goto L_088A5B6C;
L_088A5B6C:;
    sp = sp + 32;
    return;
}

/* 088A5B8C */
u32 func_088A5B8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A5B8C:;
    sp = sp - 16;
    v0 = D_08B2AE4C - (-20916);
    a2 = a0 & 0xff;
    s0 = a1 & 0xff;
    v1 = LD32(v0-20916);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A5BCC; }
    goto L_088A5BB0;
L_088A5BB0:;
    a0 = 62;
    cnd_ = a2 != 0;
    a1 = 6;
    if (cnd_) { goto L_088A5BDC; }
    goto L_088A5BBC;
L_088A5BBC:;
    a0 = s0 + 0;
    goto L_088A5BC0;
L_088A5BC0:;
    a1 = 1;
    func_088A5B00(a0, a1);
    goto L_088A5BC8;
L_088A5BC8:;
    v0 = 1;
    goto L_088A5BCC;
L_088A5BCC:;
    sp = sp + 16;
    return v0;
L_088A5BDC:;
    func_088A5B00(a0, a1);
    goto L_088A5BE4;
L_088A5BE4:;
    a0 = s0 + 0;
    goto L_088A5BC0;
}

/* 088A5BEC */
void func_088A5BEC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A5BEC:;
    sp = sp - 48;
    a2 = D_08B2AE60 - (-20896);
    v1 = a2 - 20896;
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
    if (cnd_) { goto L_088A5C84; }
    goto L_088A5C38;
L_088A5C38:;
    a2 = LD32(a2-20896);
    a3 = a1 + 0;
    goto L_088A5C40;
L_088A5C40:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_088A5C74; }
    goto L_088A5C58;
L_088A5C58:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_088A5C88; }
    goto L_088A5C68;
L_088A5C68:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088A5C58; }
    goto L_088A5C74;
L_088A5C74:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_088A5C40; }
    goto L_088A5C84;
L_088A5C84:;
    s0 = LD32(sp+8);
    goto L_088A5C88;
L_088A5C88:;
    cnd_ = s0 != 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_088A5D4C; }
    goto L_088A5C90;
L_088A5C90:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_088A5D14; }
    goto L_088A5CA0;
L_088A5CA0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088A5D14; }
    goto L_088A5CAC;
L_088A5CAC:;
    v0 = LD32(s1);
    goto L_088A5CB0;
L_088A5CB0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088A5D04; }
    goto L_088A5CC4;
L_088A5CC4:;
    v0 = LD_U8(s0+8);
    goto L_088A5CC8;
L_088A5CC8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_088A5D44; }
    goto L_088A5CD0;
L_088A5CD0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088A5D34; }
    goto L_088A5CD8;
L_088A5CD8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_088A5CE0;
L_088A5CE0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5CEC;
L_088A5CEC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_088A5CF8;
L_088A5CF8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_088A5CC8; }
    goto L_088A5D00;
L_088A5D00:;
    v1 = LD32(s1+4);
    goto L_088A5D04;
L_088A5D04:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_088A5CB0; }
    goto L_088A5D14;
L_088A5D14:;
    sp = sp + 48;
    return;
L_088A5D34:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_088A5CE0;
L_088A5D44:;
    s0 = LD32(s0+4);
    goto L_088A5CF8;
L_088A5D4C:;
    s0 = LD32(s0);
    goto L_088A5D50;
L_088A5D50:;
    a0 = sp + 0;
    a1 = 1;
    func_08AB2FB4(a0);
    goto L_088A5D5C;
L_088A5D5C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_088A66F0(a0, a1);
    goto L_088A5D68;
L_088A5D68:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_088A6760(a0, a1);
    goto L_088A5D78;
L_088A5D78:;
    s0 = v0 + 0;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088A5D94; }
    goto L_088A5D84;
L_088A5D84:;
    func_088A7E34(a0, 0, 0, 0);
    goto L_088A5D8C;
L_088A5D8C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5D94;
L_088A5D94:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A5DAC; }
    goto L_088A5D9C;
L_088A5D9C:;
    func_088A843C(a0, 0, 0, 0);
    goto L_088A5DA4;
L_088A5DA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A5DAC;
L_088A5DAC:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088A5D50; }
    goto L_088A5DB8;
L_088A5DB8:;
    s1 = LD32(sp);
    goto L_088A5C90;
}

/* 088A5DC0 */
u32 func_088A5DC0(void)
{
    u32 v0 = 0, v1 = 0;
L_088A5DC0:;
    v1 = D_08B2AE3E - (-20930);
    v0 = LD_U8(v1-20930);
    return v0;
}

/* 088A5DCC */
void func_088A5DCC(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A5DCC:;
    sp = sp - 16;
    s0 = a0 & 0xff;
    v0 = func_088A5DC0();
    goto L_088A5DE0;
L_088A5DE0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A5DF0; }
    goto L_088A5DE8;
L_088A5DE8:;
    v0 = D_08B2AE3F - (-20929);
    ST8(v0-20929, s0);
    goto L_088A5DF0;
L_088A5DF0:;
    sp = sp + 16;
    return;
}

/* 088A5DFC */
u32 func_088A5DFC(void)
{
    u32 v0 = 0, v1 = 0;
L_088A5DFC:;
    v1 = D_08B2AE3F - (-20929);
    v0 = LD_U8(v1-20929);
    return v0;
}

/* 088A5E08 */
void func_088A5E08(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A5E08:;
    sp = sp - 16;
    v0 = D_08B2AE3F - (-20929);
    s2 = D_08B2AE40 - (-20928);
    v1 = LD_U8(v0-20929);
    cnd_ = v1 == 0;
    s1 = a0 & 0xff;
    if (cnd_) { goto L_088A5E50; }
    goto L_088A5E30;
L_088A5E30:;
    v0 = LD_U8(s2-20928);
    cnd_ = v0 == s1;
    v0 = D_08B2AE50 - (-20912);
    if (cnd_) { goto L_088A5E50; }
    goto L_088A5E3C;
L_088A5E3C:;
    s0 = LD_U8(v0-20912);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088A5E78; }
    goto L_088A5E48;
L_088A5E48:;
    cnd_ = s0 != 0;
    ST8(s2-20928, s1);
    if (cnd_) { goto L_088A5E68; }
    goto L_088A5E50;
L_088A5E50:;
    goto L_088A5E54;
L_088A5E54:;
    sp = sp + 16;
    return;
L_088A5E68:;
    func_088A4F94();
    goto L_088A5E70;
L_088A5E70:;
    goto L_088A5E54;
L_088A5E78:;
    func_088A531C();
    goto L_088A5E80;
L_088A5E80:;
    goto L_088A5E48;
}

/* 088A5E88 */
u32 func_088A5E88(void)
{
    u32 v0 = 0, v1 = 0;
L_088A5E88:;
    v1 = D_08B2AE40 - (-20928);
    v0 = LD_U8(v1-20928);
    return v0;
}

/* 088A5E94 */
void func_088A5E94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A5E94:;
    sp = sp - 32;
    s4 = a3 & 0xff;
    s3 = a0 + 0;
    a0 = s4 << 2;
    a0 = a0 + s4;
    a0 = a0 << 2;
    ST8(s3+10, 0);
    ST16(s3, a1);
    ST16(s3+2, a2);
    ST8(s3+8, t0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5ED8;
L_088A5ED8:;
    ST32(s3+4, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5EE4;
L_088A5EE4:;
    s0 = v0 + 0;
    v0 = 16;
    ST32(s0+4, v0);
    a0 = 64;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5EF8;
L_088A5EF8:;
    a1 = LD32(s0+4);
    ST32(s0, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A5F20; }
    goto L_088A5F08;
L_088A5F08:;
    v1 = v0 + 0;
    goto L_088A5F0C;
L_088A5F0C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088A5F0C; }
    goto L_088A5F20;
L_088A5F20:;
    ST32(s3+12, s0);
    a0 = 16;
    ST32(s0+12, 0);
    ST32(s0+8, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5F34;
L_088A5F34:;
    s0 = v0 + 0;
    v0 = 16;
    ST32(s0+4, v0);
    a0 = 64;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5F48;
L_088A5F48:;
    a1 = LD32(s0+4);
    ST32(s0, v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A5F70; }
    goto L_088A5F58;
L_088A5F58:;
    v1 = v0 + 0;
    goto L_088A5F5C;
L_088A5F5C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088A5F5C; }
    goto L_088A5F70;
L_088A5F70:;
    v0 = D_08B2AE3C - (-20932);
    ST32(s3+16, s0);
    s2 = D_08B2AE60 - (-20896);
    s1 = s2 - 20896;
    ST32(s0+12, 0);
    a0 = 12;
    ST32(s0+8, 0);
    ST8(v0-20932, s4);
    s0 = LD_U16(s3);
    v1 = LD_U16(s3+2);
    v0 = LD32(s1+4);
    s0 = s0 << 16;
    s0 = s0 | v1;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A5FB0;
L_088A5FB0:;
    a0 = LD32(s2-20896);
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
    return;
}

/* 088A5FFC */
void func_088A5FFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A5FFC:;
    sp = sp - 48;
    a1 = 1;
    s1 = a0 + 0;
    v1 = LD32(a0+12);
    a0 = sp + 0;
    ST32(sp+8, 0);
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+4, 0);
    func_08AB30FC(a0);
    goto L_088A603C;
L_088A603C:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_088A61A4; }
    goto L_088A6048;
L_088A6048:;
    v1 = LD32(s1+16);
    goto L_088A604C;
L_088A604C:;
    s2 = sp + 16;
    a0 = s2 + 0;
    v0 = LD32(v1+8);
    a1 = 1;
    ST32(sp+16, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    func_08AB3178(a0);
    goto L_088A6074;
L_088A6074:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_088A616C; }
    goto L_088A6080;
L_088A6080:;
    a0 = LD32(sp+16);
    goto L_088A6084;
L_088A6084:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088A615C; }
    goto L_088A6094;
L_088A6094:;
    a0 = LD32(sp);
    goto L_088A6098;
L_088A6098:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088A614C; }
    goto L_088A60A8;
L_088A60A8:;
    a0 = LD32(s1+4);
    goto L_088A60AC;
L_088A60AC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A613C; }
    goto L_088A60B4;
L_088A60B4:;
    s0 = LD32(s1+12);
    goto L_088A60B8;
L_088A60B8:;
    cnd_ = s0 == 0;
    if (cnd_) { s0 = LD32(s1+16); goto L_088A60D8; }
    goto L_088A60C0;
L_088A60C0:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A612C; }
    goto L_088A60CC;
L_088A60CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A60D4;
L_088A60D4:;
    s0 = LD32(s1+16);
    goto L_088A60D8;
L_088A60D8:;
    cnd_ = s0 == 0;
    a0 = D_08B2AE60 - (-20896);
    if (cnd_) { goto L_088A60F8; }
    goto L_088A60E0;
L_088A60E0:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A611C; }
    goto L_088A60EC;
L_088A60EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A60F4;
L_088A60F4:;
    a0 = D_08B2AE60 - (-20896);
    goto L_088A60F8;
L_088A60F8:;
    a1 = s1 + 0;
    a0 = a0 - 20896;
    func_08AB338C(a0, a1, 0, 0, 0);
    goto L_088A6104;
L_088A6104:;
    sp = sp + 48;
    return;
L_088A611C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6124;
L_088A6124:;
    goto L_088A60EC;
L_088A612C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6134;
L_088A6134:;
    goto L_088A60CC;
L_088A613C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6144;
L_088A6144:;
    s0 = LD32(s1+12);
    goto L_088A60B8;
L_088A614C:;
    func_08AB31F4(a0, 0, 0, 0);
    goto L_088A6154;
L_088A6154:;
    a0 = LD32(s1+4);
    goto L_088A60AC;
L_088A615C:;
    func_08AB32C0(a0, 0, 0, 0);
    goto L_088A6164;
L_088A6164:;
    a0 = LD32(sp);
    goto L_088A6098;
L_088A616C:;
    a1 = 1;
    a0 = s2 + 0;
    func_08AB3178(a0);
    goto L_088A6178;
L_088A6178:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A6190; }
    goto L_088A6180;
L_088A6180:;
    func_088A843C(a0, 0, 0, 0);
    goto L_088A6188;
L_088A6188:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6190;
L_088A6190:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_088A616C; }
    goto L_088A619C;
L_088A619C:;
    a0 = LD32(sp+16);
    goto L_088A6084;
L_088A61A4:;
    a1 = 1;
    a0 = sp + 0;
    func_08AB30FC(a0);
    goto L_088A61B0;
L_088A61B0:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A61C8; }
    goto L_088A61B8;
L_088A61B8:;
    func_088A7E34(a0, 0, 0, 0);
    goto L_088A61C0;
L_088A61C0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A61C8;
L_088A61C8:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_088A61A4; }
    goto L_088A61D4;
L_088A61D4:;
    v1 = LD32(s1+16);
    goto L_088A604C;
}

/* 088A61DC */
void func_088A61DC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
    u32 t_;
L_088A61DC:;
    v0 = a2 < 0x13u;
    t3 = a0 + 0;
    a3 = a3 & 0xff;
    cnd_ = v0 == 0;
    t1 = t1 & 0xff;
    if (cnd_) { goto L_088A6210; }
    goto L_088A61F0;
L_088A61F0:;
    v1 = D_08AD7730 - (30512);
    v0 = a2 << 2;
    v1 = v1 + 30512;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A620Cu: goto L_088A620C; case 0x088A6210u: goto L_088A6210; default: rs_break(0, 0x088a6204); }
L_088A620C:;
    f12 = f12 * f12;
    goto L_088A6210;
L_088A6210:;
    v1 = D_08B2AE3D - (-20931);
    v0 = LD_U8(v1-20931);
    t4 = 0 + 0;
    v0 = a3 + v0;
    cnd_ = t1 == 0;
    a3 = v0 & 0xff;
    if (cnd_) { goto L_088A6288; }
    goto L_088A6228;
L_088A6228:;
    t5 = t0 >> 3;
    goto L_088A622C;
L_088A622C:;
    a1 = LD_U8(t3+10);
    v1 = LD32(t3+4);
    t4 = t4 + 1;
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v1 = v1 + v0;
    a0 = a3 + t5;
    a1 = a1 + 1;
    v0 = t4 < t1;
    ST8(t3+10, a1);
    ST8(v1+3, a3);
    a3 = a0 & 0xff;
    ST32(v1+16, 0);
    ST8(v1, a2);
    ST8(v1+1, t0);
    ST8(v1+2, t0);
    ST8(v1+4, 0);
    ST8(v1+5, t2);
    ST8(v1+6, t0);
    ST32(v1+8, FBITS(f12));
    cnd_ = v0 != 0;
    ST32(v1+12, 0);
    if (cnd_) { goto L_088A622C; }
    goto L_088A6288;
L_088A6288:;
    return;
}

/* 088A6290 */
void func_088A6290(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t4 = 0, t5 = 0, t6 = 0;
    int cnd_;
L_088A6290:;
    v0 = D_08B2AE3D - (-20931);
    v1 = LD_U8(v0-20931);
    a3 = a3 & 0xff;
    t2 = t2 & 0xff;
    v1 = a3 + v1;
    t4 = a0 + 0;
    a3 = v1 & 0xff;
    cnd_ = t2 == 0;
    t5 = 0 + 0;
    if (cnd_) { goto L_088A6314; }
    goto L_088A62B4;
L_088A62B4:;
    t6 = t0 >> 3;
    goto L_088A62B8;
L_088A62B8:;
    a1 = LD_U8(t4+10);
    v1 = LD32(t4+4);
    t5 = t5 + 1;
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v1 = v1 + v0;
    a0 = a3 + t6;
    a1 = a1 + 1;
    v0 = t5 < t2;
    ST8(t4+10, a1);
    ST8(v1+3, a3);
    a3 = a0 & 0xff;
    ST32(v1+16, 0);
    ST8(v1, a2);
    ST8(v1+1, t0);
    ST8(v1+2, t1);
    ST8(v1+4, 0);
    ST8(v1+5, t3);
    ST8(v1+6, t0);
    ST32(v1+8, 0);
    cnd_ = v0 != 0;
    ST32(v1+12, 0);
    if (cnd_) { goto L_088A62B8; }
    goto L_088A6314;
L_088A6314:;
    return;
}

/* 088A631C */
void func_088A631C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
L_088A631C:;
    t4 = LD_U8(a0+10);
    v0 = D_08B2AE3D - (-20931);
    t5 = LD_U8(v0-20931);
    v1 = LD32(a0+4);
    v0 = t4 << 2;
    v0 = v0 + t4;
    a3 = a3 & 0xff;
    v0 = v0 << 2;
    v1 = v1 + v0;
    a3 = a3 + t5;
    t4 = t4 + 1;
    ST8(a0+10, t4);
    ST8(v1, a2);
    ST8(v1+2, t1);
    ST8(v1+3, a3);
    ST8(v1+4, t2);
    ST8(v1+5, t3);
    ST8(v1+6, t0);
    ST32(v1+16, 0);
    ST8(v1+1, t0);
    ST32(v1+8, 0);
    ST32(v1+12, 0);
    return;
}

/* 088A6378 */
void func_088A6378(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0;
L_088A6378:;
    t2 = LD_U8(a0+10);
    v0 = D_08B2AE3D - (-20931);
    t3 = LD_U8(v0-20931);
    v1 = LD32(a0+4);
    v0 = t2 << 2;
    v0 = v0 + t2;
    a3 = a3 & 0xff;
    v0 = v0 << 2;
    v1 = v1 + v0;
    a3 = a3 + t3;
    t0 = t0 << 1;
    t2 = t2 + 1;
    ST8(a0+10, t2);
    ST8(v1, a2);
    ST8(v1+3, a3);
    ST8(v1+5, t1);
    ST8(v1+6, t0);
    ST32(v1+16, 0);
    ST8(v1+1, 0);
    ST8(v1+2, 0);
    ST8(v1+4, 0);
    ST32(v1+8, 0);
    ST32(v1+12, 0);
    return;
}

/* 088A63D8 */
void func_088A63D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t4 = 0, t5 = 0, t6 = 0;
    int cnd_;
L_088A63D8:;
    v0 = D_08B2AE3D - (-20931);
    v1 = LD_U8(v0-20931);
    a3 = a3 & 0xff;
    t2 = t2 & 0xff;
    v1 = a3 + v1;
    t4 = a0 + 0;
    a3 = v1 & 0xff;
    cnd_ = t2 == 0;
    t5 = 0 + 0;
    if (cnd_) { goto L_088A645C; }
    goto L_088A63FC;
L_088A63FC:;
    t6 = t0 >> 3;
    goto L_088A6400;
L_088A6400:;
    a1 = LD_U8(t4+10);
    v1 = LD32(t4+4);
    t5 = t5 + 1;
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v1 = v1 + v0;
    a0 = a3 + t6;
    a1 = a1 + 1;
    v0 = t5 < t2;
    ST8(t4+10, a1);
    ST8(v1+3, a3);
    a3 = a0 & 0xff;
    ST32(v1+16, FBITS(f13));
    ST8(v1, a2);
    ST8(v1+1, t0);
    ST8(v1+2, t1);
    ST8(v1+4, 0);
    ST8(v1+5, t3);
    ST8(v1+6, t0);
    ST32(v1+8, FBITS(f14));
    cnd_ = v0 != 0;
    ST32(v1+12, FBITS(f12));
    if (cnd_) { goto L_088A6400; }
    goto L_088A645C;
L_088A645C:;
    return;
}

/* 088A6464 */
void func_088A6464(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A6464:;
    sp = sp - 48;
    s4 = 0 + 0;
    s3 = 0 + 0;
    s2 = 0 + 0;
    v0 = LD_U8(a0+10);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088A64D4; }
    goto L_088A6498;
L_088A6498:;
    s0 = 0 + 0;
    goto L_088A649C;
L_088A649C:;
    a0 = LD32(s1+4);
    a1 = sp + 0;
    a2 = sp + 4;
    a0 = a0 + s0;
    func_088A7074(a0, a1, a2);
    goto L_088A64B0;
L_088A64B0:;
    a0 = LD_U8(s1+10);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    s2 = s2 + 1;
    a0 = s2 < a0;
    s4 = s4 + v0;
    s3 = s3 + v1;
    cnd_ = a0 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_088A649C; }
    goto L_088A64D4;
L_088A64D4:;
    v0 = s3 + 7;
    v0 = v0 >> 3;
    s4 = s4 + v0;
    ST8(s1+9, s4);
    v0 = D_08B2AE3C - (-20932);
    v1 = D_08B2AE3D - (-20931);
    ST8(v0-20932, 0);
    ST8(v1-20931, 0);
    sp = sp + 48;
    return;
}

/* 088A6514 */
void func_088A6514(u32 a1)
{
    u32 v0 = 0;
L_088A6514:;
    v0 = D_08B2AE3D - (-20931);
    ST8(v0-20931, a1);
    return;
}

/* 088A6520 */
u64 func_088A6520(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A6520:;
    a1 = a1 & 0xffff;
    t0 = a0 << 16;
    sp = sp - 16;
    a2 = t0 | a1;
    v0 = 999;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_088A65A8; }
    goto L_088A653C;
L_088A653C:;
    a0 = D_08B2AE60 - (-20896);
    v1 = a0 - 20896;
    v0 = LD32(v1+4);
    a1 = LD32(a0-20896);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088A6594; }
    goto L_088A6568;
L_088A6568:;
    v0 = LD32(a1);
    goto L_088A656C;
L_088A656C:;
    v1 = LD_U16(v0);
    a0 = LD_U16(v0+2);
    v1 = v1 << 16;
    v1 = v1 | a0;
    cnd_ = v1 == a2;
    a3 = v0 + 0;
    if (cnd_) { goto L_088A65C4; }
    goto L_088A6584;
L_088A6584:;
    a1 = LD32(a1+4);
    goto L_088A6588;
L_088A6588:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088A656C; }
    goto L_088A6590;
L_088A6590:;
    a3 = 0 + 0;
    goto L_088A6594;
L_088A6594:;
    cnd_ = a3 == 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_088A65A8; }
    goto L_088A659C;
L_088A659C:;
    goto L_088A65A0;
L_088A65A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A65A8:;
    a0 = D_08B2AE60 - (-20896);
    a0 = a0 - 20896;
    a1 = t0 + 0;
    a2 = 1;
    { u64 r_ = func_08AB3444(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A65BC;
L_088A65BC:;
    goto L_088A65A0;
L_088A65C4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088A6588; }
    goto L_088A65D0;
L_088A65D0:;
    goto L_088A6594;
}

/* 088A65D8 */
u64 func_088A65D8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A65D8:;
    v0 = LD32(a3);
    sp = sp - 32;
    v0 = v0 < 0x2u;
    s6 = a2 + 0;
    s5 = a1 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a3 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A6670; }
    goto L_088A661C;
L_088A661C:;
    s4 = 62;
    s3 = 63;
    a1 = 6;
    goto L_088A6628;
L_088A6628:;
    a0 = s0 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6630;
L_088A6630:;
    v1 = v0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = v0 << 2;
    a1 = s5 + 0;
    cnd_ = v1 == s4;
    a2 = s0 + 0;
    if (cnd_) { goto L_088A6670; }
    goto L_088A664C;
L_088A664C:;
    cnd_ = v1 == s3;
    s2 = s2 + 1;
    if (cnd_) { goto L_088A66B0; }
    goto L_088A6654;
L_088A6654:;
    a0 = LD32(s1+4);
    a0 = a0 + v0;
    func_088A770C(a0, a1, a2);
    goto L_088A6660;
L_088A6660:;
    v0 = LD32(s0);
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a1 = 6;
    if (cnd_) { goto L_088A6628; }
    goto L_088A6670;
L_088A6670:;
    a0 = s0 + 0;
    goto L_088A6674;
L_088A6674:;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A667C;
L_088A667C:;
    v0 = 0 < v0;
    ST8(s6, v0);
    v0 = s2 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088A66B0:;
    v0 = LD_U8(s1+10);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088A6670; }
    goto L_088A66BC;
L_088A66BC:;
    s3 = 0 + 0;
    goto L_088A66C0;
L_088A66C0:;
    a0 = LD32(s1+4);
    a1 = s5 + 0;
    a2 = s0 + 0;
    a0 = a0 + s3;
    func_088A770C(a0, a1, a2);
    goto L_088A66D4;
L_088A66D4:;
    v0 = LD_U8(s1+10);
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s3 = s3 + 20;
    if (cnd_) { goto L_088A66C0; }
    goto L_088A66E8;
L_088A66E8:;
    a0 = s0 + 0;
    goto L_088A6674;
}

/* 088A66F0 */
u32 func_088A66F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088A66F0:;
    v0 = 999;
    v1 = LD32(a0+12);
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A6744; }
    goto L_088A6700;
L_088A6700:;
    v0 = LD32(v1+4);
    v1 = LD32(v1);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088A6744; }
    goto L_088A6724;
L_088A6724:;
    v0 = LD32(a0);
    goto L_088A6728;
L_088A6728:;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_088A674C; }
    goto L_088A6734;
L_088A6734:;
    a0 = LD32(a0+4);
    goto L_088A6738;
L_088A6738:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088A6728; }
    goto L_088A6740;
L_088A6740:;
    a2 = 0 + 0;
    goto L_088A6744;
L_088A6744:;
    v0 = a2 + 0;
    return v0;
L_088A674C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_088A6738; }
    goto L_088A6758;
L_088A6758:;
    goto L_088A6744;
}

/* 088A6760 */
u32 func_088A6760(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088A6760:;
    v0 = 999;
    v1 = LD32(a0+16);
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A67B4; }
    goto L_088A6770;
L_088A6770:;
    v0 = LD32(v1+4);
    v1 = LD32(v1);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088A67B4; }
    goto L_088A6794;
L_088A6794:;
    v0 = LD32(a0);
    goto L_088A6798;
L_088A6798:;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    a2 = v0 + 0;
    if (cnd_) { goto L_088A67BC; }
    goto L_088A67A4;
L_088A67A4:;
    a0 = LD32(a0+4);
    goto L_088A67A8;
L_088A67A8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088A6798; }
    goto L_088A67B0;
L_088A67B0:;
    a2 = 0 + 0;
    goto L_088A67B4;
L_088A67B4:;
    v0 = a2 + 0;
    return v0;
L_088A67BC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_088A67A8; }
    goto L_088A67C8;
L_088A67C8:;
    goto L_088A67B4;
}

/* 088A67D0 */
void func_088A67D0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A67D0:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = LD32(a0+12);
    s0 = LD32(a1);
    a0 = 12;
    v0 = LD32(s1+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A6804;
L_088A6804:;
    a0 = LD32(s1);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s2);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 16;
    return;
}

/* 088A6848 */
void func_088A6848(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A6848:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = LD32(a0+16);
    s0 = LD32(a1);
    a0 = 12;
    v0 = LD32(s1+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A687C;
L_088A687C:;
    a0 = LD32(s1);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s2);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 16;
    return;
}

/* 088A68C0 */
void func_088A68C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A68C0:;
    sp = sp - 16;
    s0 = LD32(a0+12);
    v1 = LD32(a1);
    v0 = LD32(s0+4);
    a0 = LD32(s0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A6914; }
    goto L_088A68F8;
L_088A68F8:;
    v0 = LD32(a0);
    goto L_088A68FC;
L_088A68FC:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_088A6924; }
    goto L_088A6904;
L_088A6904:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088A68FC; }
    goto L_088A6914;
L_088A6914:;
    sp = sp + 16;
    return;
L_088A6924:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088A6934; }
    goto L_088A692C;
L_088A692C:;
    ST8(a0+8, v0);
    goto L_088A6914;
L_088A6934:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_088A6958; }
    goto L_088A693C;
L_088A693C:;
    ST32(a2+4, v0);
    goto L_088A6940;
L_088A6940:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6948;
L_088A6948:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_088A6914;
L_088A6958:;
    ST32(v1, v0);
    goto L_088A6940;
}

/* 088A6960 */
void func_088A6960(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A6960:;
    sp = sp - 16;
    s0 = LD32(a0+16);
    v1 = LD32(a1);
    v0 = LD32(s0+4);
    a0 = LD32(s0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A69B4; }
    goto L_088A6998;
L_088A6998:;
    v0 = LD32(a0);
    goto L_088A699C;
L_088A699C:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_088A69C4; }
    goto L_088A69A4;
L_088A69A4:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088A699C; }
    goto L_088A69B4;
L_088A69B4:;
    sp = sp + 16;
    return;
L_088A69C4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088A69D4; }
    goto L_088A69CC;
L_088A69CC:;
    ST8(a0+8, v0);
    goto L_088A69B4;
L_088A69D4:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_088A69F8; }
    goto L_088A69DC;
L_088A69DC:;
    ST32(a2+4, v0);
    goto L_088A69E0;
L_088A69E0:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A69E8;
L_088A69E8:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_088A69B4;
L_088A69F8:;
    ST32(v1, v0);
    goto L_088A69E0;
}

/* 088A6A00 */
void func_088A6A00(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A6A00:;
    sp = sp - 32;
    v1 = D_08B2AE60 - (-20896);
    v1 = v1 - 20896;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    func_08AB2FB4(a0);
    goto L_088A6A38;
L_088A6A38:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_088A6A78; }
    goto L_088A6A44;
L_088A6A44:;
    a0 = LD32(sp);
    goto L_088A6A48;
L_088A6A48:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088A6A68; }
    goto L_088A6A58;
L_088A6A58:;
    goto L_088A6A5C;
L_088A6A5C:;
    sp = sp + 32;
    return;
L_088A6A68:;
    func_08AB3030(a0, 0, 0, 0);
    goto L_088A6A70;
L_088A6A70:;
    goto L_088A6A5C;
L_088A6A78:;
    a1 = 1;
    a0 = sp + 0;
    func_08AB2FB4(a0);
    goto L_088A6A84;
L_088A6A84:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A6A9C; }
    goto L_088A6A8C;
L_088A6A8C:;
    func_088A5FFC(a0);
    goto L_088A6A94;
L_088A6A94:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A6A9C;
L_088A6A9C:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_088A6A78; }
    goto L_088A6AA8;
L_088A6AA8:;
    a0 = LD32(sp);
    goto L_088A6A48;
}

/* 088A6AB0 */
void func_088A6AB0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr126 = v[126], vr127 = v[127];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088A6AB0:;
    sp = sp - 96;
    s3 = a1 + 0;
    s2 = a3 & 0xff;
    s1 = a2 + 0;
    v0 = LD_U8(a0);
    v0 = v0 - 10;
    v1 = v0 < 0x9u;
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088A6EF8; }
    goto L_088A6AF0;
L_088A6AF0:;
    v1 = D_08AD777C - (30588);
    v0 = v0 << 2;
    v1 = v1 + 30588;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A6B0Cu: goto L_088A6B0C; case 0x088A6DB0u: goto L_088A6DB0; case 0x088A6E58u: goto L_088A6E58; case 0x088A6EF8u: goto L_088A6EF8; case 0x088A6F18u: goto L_088A6F18; case 0x088A6F48u: goto L_088A6F48; case 0x088A6F80u: goto L_088A6F80; case 0x088A705Cu: goto L_088A705C; default: rs_break(0, 0x088a6b04); }
L_088A6B0C:;
    {vr112=BITSF(LD32(a2+(0)));}
    {vr113=BITSF(LD32(a2+(4)));}
    {vr114=BITSF(LD32(a2+(8)));}
    {vr115=BITSF(LD32(a2+(12)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[83];float t0=v[86];float d0=s0-t0;vr126=d0;}
    {float s0=vr126;float d0=(s0<-1?-1:(s0>1?1:s0));vr126=d0;}
    {float s0=vr126;float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=v[125];float t0=v[80];float d0=s0-t0;vr127=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[120]=d0;}
    {float s0=vr127;float t0=v[85];float d0=s0-t0;v[121]=d0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088A6BDC; }
    goto L_088A6B6C;
L_088A6B6C:;
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
    if (cnd_) { goto L_088A6BB8; }
    goto L_088A6BA8;
L_088A6BA8:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_088A6BB8;
L_088A6BB8:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088A6BFC; }
    goto L_088A6BC8;
L_088A6BC8:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_088A6BFC; }
    goto L_088A6BD8;
L_088A6BD8:;
    goto L_088A6BDC;
L_088A6BDC:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088A6BFC; }
    goto L_088A6BF0;
L_088A6BF0:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_088A6BFC;
L_088A6BFC:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[122]=d0;}
    {float s0=vr127;float t0=v[90];float d0=s0-t0;v[123]=d0;}
    {float s0=v[122];float d0=s0;vr64=d0;}
    {float s0=v[123];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088A6C94; }
    goto L_088A6C24;
L_088A6C24:;
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
    if (cnd_) { goto L_088A6C70; }
    goto L_088A6C60;
L_088A6C60:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_088A6C70;
L_088A6C70:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088A6CB4; }
    goto L_088A6C80;
L_088A6C80:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_088A6CB4; }
    goto L_088A6C90;
L_088A6C90:;
    goto L_088A6C94;
L_088A6C94:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088A6CB4; }
    goto L_088A6CA8;
L_088A6CA8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_088A6CB4;
L_088A6CB4:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=v[124];vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    f1 = BITSF(0);
    f3 = BITSF(LD32(sp+4));
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    t0 = sp + 48;
    if (cnd_) { goto L_088A6CFC; }
    goto L_088A6CE0;
L_088A6CE0:;
    v0 = D_08AEC420 - (-15328);
    f0 = BITSF(LD32(v0-15328));
    f3 = f3 + f0;
    goto L_088A6CEC;
L_088A6CEC:;
    fcc = FCMP(f3, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f3 + f0; goto L_088A6CEC; }
    goto L_088A6CFC;
L_088A6CFC:;
    v0 = D_08AEC420 - (-15328);
    f0 = BITSF(LD32(v0-15328));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    v0 = D_08AEC424 - (-15324);
    if (cnd_) { goto L_088A6D2C; }
    goto L_088A6D14;
L_088A6D14:;
    f3 = f3 - f0;
    goto L_088A6D18;
L_088A6D18:;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    if (cnd_) { f3 = f3 - f0; goto L_088A6D18; }
    goto L_088A6D28;
L_088A6D28:;
    v0 = D_08AEC424 - (-15324);
    goto L_088A6D2C;
L_088A6D2C:;
    f0 = BITSF(LD32(v0-15324));
    v0 = D_08AEC428 - (-15320);
    f2 = BITSF(LD32(s1+4));
    f3 = f3 * f0;
    f0 = BITSF(LD32(v0-15320));
    f1 = BITSF(0);
    v1 = LD_U16(t0);
    f3 = f3 * f0;
    fcc = FCMP(f2, f1, 12);
    a0 = 1;
    f0 = BITSF(F2I(f3, 1));
    v0 = FBITS(f0);
    v1 = (v1 & ~(0x7fffu << 1)) | ((v0 & 0x7fff) << 1);
    cnd_ = fcc;
    ST16(t0, v1);
    if (cnd_) { goto L_088A6D6C; }
    goto L_088A6D68;
L_088A6D68:;
    a0 = 0 + 0;
    goto L_088A6D6C;
L_088A6D6C:;
    v0 = v1 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    ST16(t0, v0);
    a0 = s3 + 0;
    a3 = s2 + 0;
    a1 = sp + 48;
    a2 = 2;
    func_088A5858(a0, a1, a2, a3);
    goto L_088A6D8C;
L_088A6D8C:;
    goto L_088A6D90;
L_088A6D90:;
    sp = sp + 96;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[126]=vr126;v[127]=vr127;return; }
L_088A6DB0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088A6E48; }
    goto L_088A6DB8;
L_088A6DB8:;
    v0 = D_08B2AE41 - (-20927);
    goto L_088A6DBC;
L_088A6DBC:;
    v1 = LD_U8(v0-20927);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = sp + 32; goto L_088A6E10; }
    goto L_088A6DC8;
L_088A6DC8:;
    a0 = sp + 16;
    a1 = s1 + 0;
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    func_08AB2C80(a0, a1);
    goto L_088A6DE0;
L_088A6DE0:;
    a1 = 17;
    a0 = LD32(sp+16);
    func_088A5A14(a0, a1);
    goto L_088A6DEC;
L_088A6DEC:;
    a0 = LD32(sp+20);
    a1 = 15;
    func_088A5A14(a0, a1);
    goto L_088A6DF8;
L_088A6DF8:;
    a0 = LD32(sp+24);
    a1 = 17;
    goto L_088A6E00;
L_088A6E00:;
    func_088A5A14(a0, a1);
    goto L_088A6E08;
L_088A6E08:;
    goto L_088A6D90;
L_088A6E10:;
    a1 = s1 + 0;
    ST16(sp+32, 0);
    ST16(sp+34, 0);
    ST16(sp+36, 0);
    func_08AB2A28(a0, a1);
    goto L_088A6E24;
L_088A6E24:;
    a1 = 14;
    a0 = LD_U16(sp+32);
    func_088A5A14(a0, a1);
    goto L_088A6E30;
L_088A6E30:;
    a0 = LD_U16(sp+34);
    a1 = 10;
    func_088A5A14(a0, a1);
    goto L_088A6E3C;
L_088A6E3C:;
    a0 = LD_U16(sp+36);
    a1 = 14;
    goto L_088A6E00;
L_088A6E48:;
    a0 = a1 + 0;
    func_088A59CC(a0);
    goto L_088A6E50;
L_088A6E50:;
    v0 = D_08B2AE41 - (-20927);
    goto L_088A6DBC;
L_088A6E58:;
    f4 = BITSF(LD32(a2));
    f3 = BITSF(LD32(s0+12));
    fcc = FCMP(f4, f3, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s0+16));
    if (cnd_) { goto L_088A6EE0; }
    goto L_088A6E70;
L_088A6E70:;
    f2 = f3;
    goto L_088A6E74;
L_088A6E74:;
    f0 = f0 - f3;
    f2 = f2 - f3;
    a1 = LD_U8(s0+2);
    v0 = 1;
    f2 = f2 / f0;
    v0 = v0 << (a1 & 31);
    v0 = v0 - 1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f2 = f2 * f1;
    f2 = BITSF(F2I(f2, 1));
    s1 = FBITS(f2);
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088A6EBC; }
    goto L_088A6EAC;
L_088A6EAC:;
    fcc = FCMP(f4, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { s1 = 1; goto L_088A6EBC; }
    goto L_088A6EBC;
L_088A6EBC:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088A6ED0; }
    goto L_088A6EC4;
L_088A6EC4:;
    a1 = a1 & 0xff;
    a0 = s1 + 0;
    goto L_088A6E00;
L_088A6ED0:;
    a0 = s3 + 0;
    func_088A59CC(a0);
    goto L_088A6ED8;
L_088A6ED8:;
    a1 = LD_U8(s0+2);
    goto L_088A6EC4;
L_088A6EE0:;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_088A6E74; }
    goto L_088A6EF0;
L_088A6EF0:;
    f2 = f4;
    goto L_088A6E74;
L_088A6EF8:;
    a2 = LD_U8(s0+2);
    a0 = s3 + 0;
    a1 = s1 + 0;
    a3 = s2 + 0;
    goto L_088A6F08;
L_088A6F08:;
    func_088A58A8(a0, a1, a2, a3);
    goto L_088A6F10;
L_088A6F10:;
    goto L_088A6D90;
L_088A6F18:;
    a1 = a2 + 0;
    a0 = sp + 52;
    func_08AA2EA0(a0, a1);
    goto L_088A6F24;
L_088A6F24:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088A6F38; }
    goto L_088A6F2C;
L_088A6F2C:;
    a0 = LD32(sp+52);
    goto L_088A6F30;
L_088A6F30:;
    a1 = 32;
    goto L_088A6E00;
L_088A6F38:;
    a0 = s3 + 0;
    func_088A59CC(a0);
    goto L_088A6F40;
L_088A6F40:;
    a0 = LD32(sp+52);
    goto L_088A6F30;
L_088A6F48:;
    a2 = LD_U8(s0+2);
    a1 = LD_U8(s0+4);
    v1 = LD32(s1);
    a0 = 0 - a2;
    v0 = (u32)-1;
    v0 = v0 >> (a0 & 31);
    v0 = v0 << (a1 & 31);
    v1 = v1 & v0;
    v1 = v1 >> (a1 & 31);
    ST32(sp+56, v1);
    a0 = s3 + 0;
    a3 = s2 + 0;
    a1 = sp + 56;
    goto L_088A6F08;
L_088A6F80:;
    v0 = LD_U8(s0+6);
    v1 = LD_U16(a2);
    a1 = a2 + 0;
    a0 = v0 >> 1;
    s0 = 0 + 0;
    s4 = 0 + 0;
    cnd_ = v1 == 0;
    s5 = 7;
    if (cnd_) { goto L_088A6FDC; }
    goto L_088A6FA0;
L_088A6FA0:;
    s0 = s0 + 1;
    goto L_088A6FA4;
L_088A6FA4:;
    cnd_ = s0 == a0;
    v1 = s4 < 0x2u;
    if (cnd_) { goto L_088A6FDC; }
    goto L_088A6FAC;
L_088A6FAC:;
    a3 = LD_U16(a1);
    v0 = a3 < 0x100u;
    v0 = v0 ^ 0x1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = a3 < 0x80u;
    if (cnd_) { goto L_088A703C; }
    goto L_088A6FC4;
L_088A6FC4:;
    s5 = 16;
    s4 = 2;
    goto L_088A6FCC;
L_088A6FCC:;
    a1 = a1 + 2;
    goto L_088A6FD0;
L_088A6FD0:;
    v0 = LD_U16(a1);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 + 1; goto L_088A6FA4; }
    goto L_088A6FDC;
L_088A6FDC:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088A702C; }
    goto L_088A6FE4;
L_088A6FE4:;
    a0 = s0 + 0;
    goto L_088A6FE8;
L_088A6FE8:;
    a1 = 7;
    func_088A5A14(a0, a1);
    goto L_088A6FF0;
L_088A6FF0:;
    a0 = s4 + 0;
    a1 = 2;
    func_088A5A14(a0, a1);
    goto L_088A6FFC;
L_088A6FFC:;
    s0 = s0 - 1;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    s2 = (u32)-1;
    if (cnd_) { goto L_088A6D8C; }
    goto L_088A700C;
L_088A700C:;
    a0 = LD_U16(s1);
    a1 = s5 + 0;
    s0 = s0 - 1;
    func_088A5A14(a0, a1);
    goto L_088A701C;
L_088A701C:;
    cnd_ = s0 != s2;
    s1 = s1 + 2;
    if (cnd_) { goto L_088A700C; }
    goto L_088A7024;
L_088A7024:;
    goto L_088A6D90;
L_088A702C:;
    a0 = s3 + 0;
    func_088A59CC(a0);
    goto L_088A7034;
L_088A7034:;
    a0 = s0 + 0;
    goto L_088A6FE8;
L_088A703C:;
    v0 = v0 ^ 0x1;
    v1 = s4 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = a1 + 2; goto L_088A6FD0; }
    goto L_088A7050;
L_088A7050:;
    s5 = 8;
    s4 = 1;
    goto L_088A6FCC;
L_088A705C:;
    a0 = a1 + 0;
    a1 = a2 + 0;
    a2 = s2 + 0;
    func_088A5934(a0, a1, a2);
    goto L_088A706C;
L_088A706C:;
    goto L_088A6D90;
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[126]=vr126;v[127]=vr127;
}

/* 088A7074 */
void func_088A7074(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A7074:;
    v1 = LD_U8(a0);
    sp = sp - 32;
    v1 = v1 - 10;
    v0 = v1 < 0x9u;
    cnd_ = v0 == 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_088A70FC; }
    goto L_088A708C;
L_088A708C:;
    v0 = v1 << 2;
    v1 = D_08AD77A0 - (30624);
    v1 = v1 + 30624;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A70A8u: goto L_088A70A8; case 0x088A70BCu: goto L_088A70BC; case 0x088A70FCu: goto L_088A70FC; case 0x088A7108u: goto L_088A7108; case 0x088A711Cu: goto L_088A711C; default: rs_break(0, 0x088a70a0); }
L_088A70A8:;
    v0 = 2;
    ST32(a2, 0);
    ST32(a1, v0);
    goto L_088A70B4;
L_088A70B4:;
    sp = sp + 32;
    return;
L_088A70BC:;
    v0 = D_08B2AE41 - (-20927);
    v1 = LD_U8(v0-20927);
    cnd_ = v1 == 0;
    v0 = 38;
    if (cnd_) { goto L_088A70E8; }
    goto L_088A70CC;
L_088A70CC:;
    v0 = 49;
    ST32(a2, v0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    goto L_088A70E0;
L_088A70E0:;
    ST32(a1, 0);
    goto L_088A70B4;
L_088A70E8:;
    ST32(a2, v0);
    ST16(sp+16, 0);
    ST16(sp+18, 0);
    ST16(sp+20, 0);
    goto L_088A70E0;
L_088A70FC:;
    v0 = LD_U8(a3+2);
    goto L_088A7100;
L_088A7100:;
    ST32(a2, v0);
    goto L_088A70E0;
L_088A7108:;
    v0 = 9;
    ST32(a2, v0);
    v1 = LD_U8(a3+6);
    ST32(a1, v1);
    goto L_088A70B4;
L_088A711C:;
    v0 = 32;
    goto L_088A7100;
}

/* 088A7124 */
u32 func_088A7124(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A7124:;
    sp = sp - 48;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a0+1);
    a0 = sp + 0;
    ST32(sp, 0);
    s1 = v0 >> 3;
    a2 = s1 + 0;
    ST32(sp+4, 0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A716C;
L_088A716C:;
    a0 = sp + 4;
    a1 = s3 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A717C;
L_088A717C:;
    v1 = LD_U8(s0+5);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088A71DC; }
    goto L_088A718C;
L_088A718C:;
    cnd_ = v1 == v0;
    v0 = LD32(sp);
    if (cnd_) { goto L_088A71B8; }
    goto L_088A7194;
L_088A7194:;
    v0 = s2 + 0;
    goto L_088A7198;
L_088A7198:;
    sp = sp + 48;
    return v0;
L_088A71B8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s2 + 0; goto L_088A7198; }
    goto L_088A71C0;
L_088A71C0:;
    a0 = s3 + 0;
    goto L_088A71C4;
L_088A71C4:;
    a1 = s4 + 0;
    a2 = s1 + 0;
    s2 = 1;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A71D4;
L_088A71D4:;
    v0 = s2 + 0;
    goto L_088A7198;
L_088A71DC:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    cnd_ = v1 != v0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088A71C4; }
    goto L_088A71EC;
L_088A71EC:;
    v0 = s2 + 0;
    goto L_088A7198;
}

/* 088A71F4 */
u32 func_088A71F4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_088A71F4:;
    v1 = LD_U8(a0+2);
    a3 = LD_U8(a0+4);
    a1 = LD32(a1);
    v1 = 0 - v1;
    v0 = (u32)-1;
    v0 = v0 >> (v1 & 31);
    a0 = LD_U8(a0+5);
    v0 = v0 << (a3 & 31);
    a1 = a1 & v0;
    a1 = a1 >> (a3 & 31);
    v1 = LD32(a2);
    cnd_ = a0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088A7234; }
    goto L_088A7228;
L_088A7228:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088A723C; }
    goto L_088A7234;
L_088A7234:;
    v0 = a3 + 0;
    return v0;
L_088A723C:;
    cnd_ = a1 == v1;
    if (cnd_) { goto L_088A7234; }
    goto L_088A7244;
L_088A7244:;
    ST32(a2, a1);
    a3 = 1;
    goto L_088A7234;
}

/* 088A7250 */
u32 func_088A7250(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A7250:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    v1 = LD_U8(a0+5);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088A7290; }
    goto L_088A7280;
L_088A7280:;
    v0 = 1;
    a0 = a1 + 0;
    cnd_ = v1 == v0;
    a1 = a2 + 0;
    if (cnd_) { goto L_088A72B0; }
    goto L_088A7290;
L_088A7290:;
    v0 = s0 + 0;
    goto L_088A7294;
L_088A7294:;
    sp = sp + 32;
    return v0;
L_088A72B0:;
    v0 = func_088F9088(a0, a1);
    goto L_088A72B8;
L_088A72B8:;
    s0 = 0 < v0;
    a0 = s1 + 0;
    cnd_ = s0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088A7290; }
    goto L_088A72C8;
L_088A72C8:;
    a2 = LD_U8(s3+6);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A72D0;
L_088A72D0:;
    v0 = s0 + 0;
    goto L_088A7294;
}

/* 088A72D8 */
u32 func_088A72D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_088A72D8:;
    v1 = LD_U8(a0+5);
    v0 = 1;
    f3 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a2));
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A733C; }
    goto L_088A72F0;
L_088A72F0:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_088A7338; }
    goto L_088A72FC;
L_088A72FC:;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = f3 - f0; goto L_088A730C; }
    goto L_088A7304;
L_088A7304:;
    v0 = a1 + 0;
    return v0;
L_088A730C:;
    f2 = BITSF(LD32(a0+8));
    v0 = FBITS(f0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088A7304; }
    goto L_088A732C;
L_088A732C:;
    ST32(a2, FBITS(f3));
    goto L_088A7330;
L_088A7330:;
    a1 = 1;
    goto L_088A7304;
L_088A7338:;
    f0 = BITSF(LD32(a0+8));
    goto L_088A733C;
L_088A733C:;
    fcc = FCMP(f3, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088A7304; }
    goto L_088A734C;
L_088A734C:;
    ST32(a2, FBITS(f3));
    goto L_088A7330;
}

/* 088A7354 */
u32 func_088A7354(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A7354:;
    v1 = LD_U8(a0+5);
    v0 = 1;
    sp = sp - 16;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088A73F4; }
    goto L_088A7368;
L_088A7368:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(a2)); goto L_088A7380; }
    goto L_088A7374;
L_088A7374:;
    v0 = a3 + 0;
    goto L_088A7378;
L_088A7378:;
    sp = sp + 16;
    return v0;
L_088A7380:;
    f4 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a1));
    f3 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(a2+8));
    f1 = f1 - f0;
    f3 = f3 - f4;
    f2 = BITSF(LD32(a1+8));
    f6 = BITSF(LD32(a0+8));
    f0 = f1 * f1;
    f2 = f2 - f5;
    f4 = f3 * f3;
    ST32(sp, FBITS(f1));
    f5 = f2 * f2;
    f0 = f0 + f4;
    ST32(sp+4, FBITS(f3));
    f0 = f0 + f5;
    ST32(sp+8, FBITS(f2));
    fcc = FCMP(f0, f6, 12);
    goto L_088A73CC;
L_088A73CC:;
    cnd_ = fcc;
    v0 = a3 + 0;
    if (cnd_) { goto L_088A7378; }
    goto L_088A73D4;
L_088A73D4:;
    f0 = BITSF(LD32(a1+8));
    goto L_088A73D8;
L_088A73D8:;
    f1 = BITSF(LD32(a1));
    goto L_088A73DC;
L_088A73DC:;
    f2 = BITSF(LD32(a1+4));
    ST32(a2+8, FBITS(f0));
    a3 = 1;
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    goto L_088A7374;
L_088A73F4:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+8)); goto L_088A73DC; }
    goto L_088A740C;
L_088A740C:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+8)); goto L_088A73D8; }
    goto L_088A7424;
L_088A7424:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a2+8));
    fcc = FCMP(f1, f0, 2);
    goto L_088A73CC;
}

/* 088A7438 */
u32 func_088A7438(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_088A7438:;
    v1 = LD_U8(a0+5);
    v0 = 1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088A74F4; }
    goto L_088A7448;
L_088A7448:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { f3 = BITSF(LD32(a1)); goto L_088A745C; }
    goto L_088A7454;
L_088A7454:;
    v0 = a3 + 0;
    return v0;
L_088A745C:;
    f2 = BITSF(LD32(a2));
    f4 = BITSF(LD32(a0+8));
    f0 = f3 - f2;
    v0 = FBITS(f0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f4, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A74D8; }
    goto L_088A7484;
L_088A7484:;
    f3 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a2+4));
    f1 = f3 - f0;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f4, f2, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A74D8; }
    goto L_088A74AC;
L_088A74AC:;
    f3 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a2+8));
    f1 = f3 - f0;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f4, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088A7454; }
    goto L_088A74D4;
L_088A74D4:;
    v0 = LD32(a1);
    goto L_088A74D8;
L_088A74D8:;
    a3 = 1;
    ST32(a2, v0);
    v1 = LD32(a1+4);
    ST32(a2+4, v1);
    v0 = LD32(a1+8);
    ST32(a2+8, v0);
    goto L_088A7454;
L_088A74F4:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A74D8; }
    goto L_088A750C;
L_088A750C:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A74D8; }
    goto L_088A7524;
L_088A7524:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a2+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088A7454; }
    goto L_088A753C;
L_088A753C:;
    v0 = LD32(a1);
    goto L_088A74D8;
}

/* 088A7544 */
u32 func_088A7544(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_088A7544:;
    v1 = LD_U8(a0+5);
    v0 = 1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088A75FC; }
    goto L_088A7554;
L_088A7554:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = D_08AEC42C - (-15316); goto L_088A7568; }
    goto L_088A7560;
L_088A7560:;
    v0 = a3 + 0;
    return v0;
L_088A7568:;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(v1-15316));
    v0 = LD32(a1);
    v1 = LD32(a1+8);
    {v[4]=BITSF(v0);}
    f1 = f1 - f0;
    v0 = LD32(a1+4);
    {v[5]=BITSF(v0);}
    v0 = LD32(a1+12);
    {v[6]=BITSF(v1);}
    v1 = LD32(a2);
    {v[7]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(a2+4);
    v1 = LD32(a2+8);
    {v[1]=BITSF(v0);}
    v0 = LD32(a2+12);
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 14);
    goto L_088A75CC;
L_088A75CC:;
    cnd_ = fcc;
    if (cnd_) { goto L_088A7560; }
    goto L_088A75D4;
L_088A75D4:;
    v0 = LD32(a1);
    goto L_088A75D8;
L_088A75D8:;
    a3 = 1;
    ST32(a2, v0);
    v1 = LD32(a1+4);
    ST32(a2+4, v1);
    v0 = LD32(a1+8);
    ST32(a2+8, v0);
    v1 = LD32(a1+12);
    ST32(a2+12, v1);
    goto L_088A7560;
L_088A75FC:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A75D8; }
    goto L_088A7614;
L_088A7614:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A75D8; }
    goto L_088A762C;
L_088A762C:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a2+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a1); goto L_088A75D8; }
    goto L_088A7644;
L_088A7644:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a2+12));
    fcc = FCMP(f1, f0, 2);
    goto L_088A75CC;
}

/* 088A7658 */
u32 func_088A7658(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A7658:;
    sp = sp - 16;
    a3 = a0 + 0;
    v1 = LD_U8(a0);
    v0 = v1 < 0x13u;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A769C; }
    goto L_088A7674;
L_088A7674:;
    v0 = v1 << 2;
    v1 = D_08AD77C4 - (30660);
    v1 = v1 + 30660;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A7690u: goto L_088A7690; case 0x088A76ACu: goto L_088A76AC; case 0x088A76BCu: goto L_088A76BC; case 0x088A76CCu: goto L_088A76CC; case 0x088A76DCu: goto L_088A76DC; case 0x088A76ECu: goto L_088A76EC; case 0x088A76FCu: goto L_088A76FC; default: rs_break(0, 0x088a7688); }
L_088A7690:;
    a0 = a3 + 0;
    v0 = func_088A7124(a0, a1, a2);
    goto L_088A7698;
L_088A7698:;
    a0 = v0 + 0;
    goto L_088A769C;
L_088A769C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_088A76AC:;
    a0 = a3 + 0;
    v0 = func_088A7438(a0, a1, a2);
    goto L_088A76B4;
L_088A76B4:;
    a0 = v0 + 0;
    goto L_088A769C;
L_088A76BC:;
    a0 = a3 + 0;
    v0 = func_088A7354(a0, a1, a2);
    goto L_088A76C4;
L_088A76C4:;
    a0 = v0 + 0;
    goto L_088A769C;
L_088A76CC:;
    a0 = a3 + 0;
    v0 = func_088A72D8(a0, a1, a2);
    goto L_088A76D4;
L_088A76D4:;
    a0 = v0 + 0;
    goto L_088A769C;
L_088A76DC:;
    a0 = a3 + 0;
    v0 = func_088A7544(a0, a1, a2);
    goto L_088A76E4;
L_088A76E4:;
    a0 = v0 + 0;
    goto L_088A769C;
L_088A76EC:;
    a0 = a3 + 0;
    v0 = func_088A71F4(a0, a1, a2);
    goto L_088A76F4;
L_088A76F4:;
    a0 = v0 + 0;
    goto L_088A769C;
L_088A76FC:;
    a0 = a3 + 0;
    v0 = func_088A7250(a0, a1, a2);
    goto L_088A7704;
L_088A7704:;
    a0 = v0 + 0;
    goto L_088A769C;
}

/* 088A770C */
void func_088A770C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr81 = v[81], vr82 = v[82], vr83 = v[83], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088A770C:;
    sp = sp - 128;
    s1 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a0);
    a0 = LD_U8(a0+3);
    v0 = v0 - 10;
    v1 = v0 < 0x9u;
    cnd_ = v1 == 0;
    s3 = a1 + a0;
    if (cnd_) { goto L_088A79B8; }
    goto L_088A774C;
L_088A774C:;
    v1 = D_08AD7810 - (30736);
    v0 = v0 << 2;
    v1 = v1 + 30736;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A7768u: goto L_088A7768; case 0x088A7888u: goto L_088A7888; case 0x088A794Cu: goto L_088A794C; case 0x088A79B8u: goto L_088A79B8; case 0x088A7A00u: goto L_088A7A00; case 0x088A7B80u: goto L_088A7B80; case 0x088A7BC0u: goto L_088A7BC0; case 0x088A7C48u: goto L_088A7C48; default: rs_break(0, 0x088a7760); }
L_088A7768:;
    a0 = a2 + 0;
    a1 = 8;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7774;
L_088A7774:;
    a0 = s1 + 0;
    a1 = 8;
    ST8(sp+80, v0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7784;
L_088A7784:;
    f2 = BITSF(0);
    ST8(sp+81, v0);
    a0 = 1;
    v1 = LD_U16(sp+80);
    ST32(sp+16, FBITS(f2));
    v0 = (v1 >> 1) & 0x7fff;
    f0 = BITSF(v0);
    v0 = D_08AEC430 - (-15312);
    ST32(sp+24, FBITS(f2));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15312));
    v0 = D_08AEC434 - (-15308);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-15308));
    f1 = f1 * f0;
    ST32(sp+20, FBITS(f1));
    {vr112=BITSF(LD32(sp+(16)));}
    {vr113=BITSF(LD32(sp+(20)));}
    {vr114=BITSF(LD32(sp+(24)));}
    {v[115]=0.31830988618f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[115];vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr83=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr81=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr82=d0;}
    {float s0=vr120;float t0=vr83;float d0=s0*t0;v[80]=d0;}
    {float s0=vr81;float s1=vr82;float s2=vr83;float t0=vr116;vr81=s0*t0;vr82=s1*t0;vr83=s2*t0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr87=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr85=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr86=d0;}
    {float s0=vr116;float t0=vr87;float d0=s0*t0;v[84]=d0;}
    {float s0=-(vr85);float s1=-(vr86);float s2=vr87;float t0=vr120;vr85=s0*t0;vr86=s1*t0;vr87=s2*t0;}
    {float s0=v[80];float s1=vr81;float s2=vr82;float s3=vr83;float t0=v[84];float t1=vr85;float t2=vr86;float t3=vr87;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[99]));}
    f1 = BITSF(LD32(sp+4));
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_088A7834; }
    goto L_088A7834;
L_088A7834:;
    v0 = v1 & 0x1;
    cnd_ = v0 == a0;
    f0 = BITSF(LD32(sp+12));
    if (cnd_) { goto L_088A7850; }
    goto L_088A7840;
L_088A7840:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f0));
    goto L_088A7850;
L_088A7850:;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = 16;
    goto L_088A785C;
L_088A785C:;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7864;
L_088A7864:;
    sp = sp + 128;
    { v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return; }
L_088A7888:;
    v0 = D_08B2AE41 - (-20927);
    v1 = LD_U8(v0-20927);
    cnd_ = v1 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_088A78FC; }
    goto L_088A7898;
L_088A7898:;
    a1 = 17;
    ST32(sp+48, 0);
    s0 = sp + 32;
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A78B0;
L_088A78B0:;
    v0 = v0 & 0xffff;
    a0 = s1 + 0;
    a1 = 15;
    ST32(sp+48, v0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A78C4;
L_088A78C4:;
    v0 = v0 & 0xffff;
    a0 = s1 + 0;
    a1 = 17;
    ST32(sp+52, v0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A78D8;
L_088A78D8:;
    v0 = v0 & 0xffff;
    a0 = sp + 48;
    a1 = s0 + 0;
    ST32(sp+56, v0);
    func_08AB2E20(a0, a1);
    goto L_088A78EC;
L_088A78EC:;
    a0 = s3 + 0;
    goto L_088A78F0;
L_088A78F0:;
    a1 = s0 + 0;
    a2 = 12;
    goto L_088A785C;
L_088A78FC:;
    a1 = 14;
    ST16(sp+64, 0);
    s0 = sp + 32;
    ST16(sp+66, 0);
    ST16(sp+68, 0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7914;
L_088A7914:;
    a0 = s1 + 0;
    a1 = 10;
    ST16(sp+64, v0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7924;
L_088A7924:;
    a0 = s1 + 0;
    a1 = 14;
    ST16(sp+66, v0);
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7934;
L_088A7934:;
    a0 = sp + 64;
    a1 = s0 + 0;
    ST16(sp+68, v0);
    func_08AB2BC8(a0, a1);
    goto L_088A7944;
L_088A7944:;
    a0 = s3 + 0;
    goto L_088A78F0;
L_088A794C:;
    a1 = LD_U8(s0+2);
    a0 = a2 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7958;
L_088A7958:;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088A799C; }
    goto L_088A7964;
L_088A7964:;
    v1 = LD_U8(s0+2);
    v0 = 1;
    f3 = BITSF(LD32(s0+12));
    v0 = v0 << (v1 & 31);
    v0 = v0 - 1;
    f1 = BITSF(v0);
    f0 = BITSF(LD32(s0+16));
    f2 = (float)(s32)FBITS(f1);
    f0 = f0 - f3;
    f4 = f4 / f2;
    f4 = f4 * f0;
    f4 = f4 + f3;
    ST32(s3, FBITS(f4));
    goto L_088A7864;
L_088A799C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_088A7964;
L_088A79B8:;
    s0 = LD_U8(s0+2);
    v0 = s0 < 0x9u;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088A79D8; }
    goto L_088A79C8;
L_088A79C8:;
    a1 = s0 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A79D0;
L_088A79D0:;
    ST8(s3, v0);
    goto L_088A7864;
L_088A79D8:;
    a0 = s1 + 0;
    a1 = 8;
    s0 = s0 - 8;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A79E8;
L_088A79E8:;
    a0 = s0 < 0x9u;
    ST8(s3, v0);
    cnd_ = a0 == 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_088A79D8; }
    goto L_088A79F8;
L_088A79F8:;
    a0 = s1 + 0;
    goto L_088A79C8;
L_088A7A00:;
    a0 = a2 + 0;
    a1 = 32;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7A0C;
L_088A7A0C:;
    v1 = 0xffc70000u;
    v1 = v0 & v1;
    a0 = v1 >> 22;
    f0 = BITSF(a0);
    ST32(sp+84, v0);
    t1 = sp + 0;
    t0 = v0 & 0x3;
    cnd_ = (s32)a0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088A7B64; }
    goto L_088A7A30;
L_088A7A30:;
    a1 = D_08AEC438 - (-15304);
    f0 = BITSF(LD32(a1-15304));
    a0 = LD32(sp+84);
    a2 = D_08AEC43C - (-15300);
    f0 = f1 * f0;
    v0 = 0x3f0000u;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(a2-15300));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088A7B48; }
    goto L_088A7A68;
L_088A7A68:;
    f0 = BITSF(LD32(a1-15304));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(a2-15300));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088A7B2C; }
    goto L_088A7A8C;
L_088A7A8C:;
    f0 = BITSF(LD32(a1-15304));
    f1 = BITSF(LD32(a2-15300));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEC440 - (-15296);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-15296));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_088A7AD4; }
    goto L_088A7AD0;
L_088A7AD0:;
    f0 = f2;
    goto L_088A7AD4;
L_088A7AD4:;
    a3 = t0 + 3;
    v0 = t0 + 1;
    v1 = t0 + 2;
    v0 = v0 & 0x3;
    v1 = v1 & 0x3;
    a3 = a3 & 0x3;
    v0 = v0 << 2;
    v1 = v1 << 2;
    a3 = a3 << 2;
    t0 = t0 << 2;
    a3 = a3 + t1;
    t0 = t0 + t1;
    v0 = v0 + t1;
    v1 = v1 + t1;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = 16;
    ST32(t0, FBITS(f6));
    ST32(v0, FBITS(f5));
    ST32(v1, FBITS(f4));
    ST32(a3, FBITS(f0));
    goto L_088A785C;
L_088A7B2C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_088A7A8C;
L_088A7B48:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_088A7A68;
L_088A7B64:;
    v0 = a0 & 0x1;
    v1 = v1 >> 23;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_088A7A30;
L_088A7B80:;
    a1 = LD_U8(s0+2);
    a0 = a2 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7B8C;
L_088A7B8C:;
    a0 = LD_U8(s0+2);
    a2 = LD_U8(s0+4);
    v1 = (u32)-1;
    a0 = 0 - a0;
    a1 = LD32(s3);
    v1 = v1 >> (a0 & 31);
    v1 = v1 << (a2 & 31);
    v1 = ~(0 | v1);
    a1 = a1 & v1;
    v0 = v0 << (a2 & 31);
    a1 = a1 | v0;
    ST32(s3, a1);
    goto L_088A7864;
L_088A7BC0:;
    a0 = a2 + 0;
    a1 = 7;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7BCC;
L_088A7BCC:;
    s2 = v0 + 0;
    v0 = LD_U8(s0+6);
    a0 = s1 + 0;
    a1 = 2;
    v0 = v0 >> 1;
    v0 = v0 - 1;
    v1 = v0 < s2;
    s5 = v0 + 0;
    if (v1 == 0) s5 = s2;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7BF4;
L_088A7BF4:;
    v1 = v0 + 0;
    v0 = 2;
    cnd_ = v1 == v0;
    s4 = 16;
    if (cnd_) { goto L_088A7C14; }
    goto L_088A7C04;
L_088A7C04:;
    v1 = v1 ^ 0x1;
    s4 = 8;
    v0 = 7;
    if (v1 != 0) s4 = v0;
    goto L_088A7C14;
L_088A7C14:;
    s0 = s3 + 0;
    cnd_ = s5 == 0;
    s2 = s5 - 1;
    if (cnd_) { goto L_088A7C40; }
    goto L_088A7C20;
L_088A7C20:;
    s3 = (u32)-1;
    goto L_088A7C24;
L_088A7C24:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7C30;
L_088A7C30:;
    s2 = s2 - 1;
    ST16(s0, v0);
    cnd_ = s2 != s3;
    s0 = s0 + 2;
    if (cnd_) { goto L_088A7C24; }
    goto L_088A7C40;
L_088A7C40:;
    ST16(s0, 0);
    goto L_088A7864;
L_088A7C48:;
    a0 = a2 + 0;
    v0 = func_088A3190(a0);
    goto L_088A7C50;
L_088A7C50:;
    ST32(s3, v0);
    goto L_088A7864;
    v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 088A7C58 */
void func_088A7C58(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A7C58:;
    sp = sp - 32;
    v0 = D_08AEC44C - (-15284);
    s4 = a3 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    f0 = BITSF(LD32(v0-15284));
    ST32(a0, a1);
    f12 = f12 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    ST32(s1+4, a2);
    if (cnd_) { goto L_088A7E24; }
    goto L_088A7CA4;
L_088A7CA4:;
    v0 = D_08AEC450 - (-15280);
    f0 = BITSF(LD32(v0-15280));
    f0 = f12 + f0;
    goto L_088A7CB0;
L_088A7CB0:;
    f0 = BITSF(F2I(f0, 1));
    v0 = 1;
    ST8(s1+28, v0);
    s3 = D_08B2AE38 - (-20936);
    a0 = s1 + 0;
    ST32(s1+24, FBITS(f0));
    s0 = LD_U8(s2+9);
    v0 = func_088A7ED0();
    goto L_088A7CD0;
L_088A7CD0:;
    v1 = LD32(s3-20936);
    s0 = s0 + v0;
    a0 = D_08B2AE34 - (-20940);
    v1 = v1 + s0;
    v0 = v1 < 0xc8u;
    cnd_ = v0 != 0;
    ST32(s3-20936, v1);
    if (cnd_) { goto L_088A7D0C; }
    goto L_088A7CEC;
L_088A7CEC:;
    v0 = LD32(a0-20940);
    ST32(s3-20936, 0);
    v0 = v0 + 100;
    ST32(a0-20940, v0);
    v0 = v0 < 0x7d1u;
    v1 = LD32(a0-20940);
    if (v0 == 0) v1 = 0;
    ST32(a0-20940, v1);
    goto L_088A7D0C;
L_088A7D0C:;
    v0 = D_08B285B0 - (-31312);
    v1 = LD32(v0-31312);
    a0 = LD32(a0-20940);
    v0 = v1 < a0;
    cnd_ = v0 == 0;
    v0 = v1 - a0;
    if (cnd_) { goto L_088A7E1C; }
    goto L_088A7D24;
L_088A7D24:;
    ST32(s1+20, v1);
    goto L_088A7D28;
L_088A7D28:;
    s0 = LD_U8(s2+8);
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A7D34;
L_088A7D34:;
    ST32(s1+8, v0);
    a1 = s4 + 0;
    a2 = s0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7D48;
L_088A7D48:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A7D50;
L_088A7D50:;
    ST32(s1+12, v0);
    a0 = v0 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7D64;
L_088A7D64:;
    a0 = LD_U8(s2+10);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A7D6C;
L_088A7D6C:;
    ST32(s1+16, v0);
    v0 = LD_U8(s2+10);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A7D9C; }
    goto L_088A7D7C;
L_088A7D7C:;
    v0 = LD32(s1+16);
    goto L_088A7D80;
L_088A7D80:;
    v0 = v0 + v1;
    ST8(v0, 0);
    v1 = v1 + 1;
    v0 = LD_U8(s2+10);
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_088A7D80; }
    goto L_088A7D9C;
L_088A7D9C:;
    v0 = func_088A5DFC();
    goto L_088A7DA4;
L_088A7DA4:;
    cnd_ = v0 != 0;
    s0 = D_08B2BB80 - (-17536);
    if (cnd_) { goto L_088A7DDC; }
    goto L_088A7DAC;
L_088A7DAC:;
    ST32(s1+32, 0);
    goto L_088A7DB0;
L_088A7DB0:;
    a0 = s2 + 0;
    goto L_088A7DB4;
L_088A7DB4:;
    a1 = s1 + 0;
    func_088A67D0(a0, a1, 0, 0, 0);
    goto L_088A7DBC;
L_088A7DBC:;
    sp = sp + 32;
    return;
L_088A7DDC:;
    a0 = LD32(s0-17536);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A7DE4;
L_088A7DE4:;
    v1 = LD32(s0-17536);
    ST32(s1+32, v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A7DB0; }
    goto L_088A7DF4;
L_088A7DF4:;
    v0 = LD32(s1+32);
    goto L_088A7DF8;
L_088A7DF8:;
    v0 = v0 + a0;
    ST8(v0, 0);
    a0 = a0 + 1;
    v0 = LD32(s0-17536);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_088A7DF8; }
    goto L_088A7E14;
L_088A7E14:;
    a0 = s2 + 0;
    goto L_088A7DB4;
L_088A7E1C:;
    ST32(s1+20, v0);
    goto L_088A7D28;
L_088A7E24:;
    v0 = D_08AEC450 - (-15280);
    f0 = BITSF(LD32(v0-15280));
    f0 = f12 - f0;
    goto L_088A7CB0;
}

/* 088A7E34 */
void func_088A7E34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A7E34:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A7EC0; }
    goto L_088A7E50;
L_088A7E50:;
    v0 = LD32(s0+12);
    goto L_088A7E54;
L_088A7E54:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A7EB0; }
    goto L_088A7E5C;
L_088A7E5C:;
    v0 = LD32(s0+16);
    goto L_088A7E60;
L_088A7E60:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A7EA0; }
    goto L_088A7E68;
L_088A7E68:;
    v0 = LD32(s0+32);
    goto L_088A7E6C;
L_088A7E6C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A7E90; }
    goto L_088A7E74;
L_088A7E74:;
    a0 = LD32(s0+4);
    goto L_088A7E78;
L_088A7E78:;
    a1 = s0 + 0;
    func_088A68C0(a0, a1, t1, t2, t3);
    goto L_088A7E80;
L_088A7E80:;
    sp = sp + 16;
    return;
L_088A7E90:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7E98;
L_088A7E98:;
    a0 = LD32(s0+4);
    goto L_088A7E78;
L_088A7EA0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7EA8;
L_088A7EA8:;
    v0 = LD32(s0+32);
    goto L_088A7E6C;
L_088A7EB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7EB8;
L_088A7EB8:;
    v0 = LD32(s0+16);
    goto L_088A7E60;
L_088A7EC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A7EC8;
L_088A7EC8:;
    v0 = LD32(s0+12);
    goto L_088A7E54;
}

/* 088A7ED0 */
u32 func_088A7ED0(void)
{
    u32 v0 = 0;
L_088A7ED0:;
    v0 = 11;
    return v0;
}

/* 088A7ED8 */
void func_088A7ED8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A7ED8:;
    sp = sp - 32;
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 2;
    s3 = a2 & 0xff;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    a0 = LD32(v1+4);
    s2 = a0 + v0;
    cnd_ = s3 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088A7F30; }
    goto L_088A7F24;
L_088A7F24:;
    v0 = LD_U8(s2+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A7F88; }
    goto L_088A7F30;
L_088A7F30:;
    v1 = LD32(s0+16);
    a1 = LD_U8(s2+3);
    v0 = LD32(s0+8);
    a2 = LD32(s0+12);
    v1 = v1 + s1;
    s4 = v0 + a1;
    v0 = (u32)(s32)LD_S8(v1);
    a2 = a2 + a1;
    a1 = s4 + 0;
    s5 = 0 < v0;
    v0 = func_088A7658(a0, a1, a2);
    goto L_088A7F5C;
L_088A7F5C:;
    cnd_ = v0 == 0;
    v0 = LD32(s0+16);
    if (cnd_) { goto L_088A7FA8; }
    goto L_088A7F64;
L_088A7F64:;
    v1 = 3;
    v0 = v0 + s1;
    ST8(v0, v1);
    a0 = s2 + 0;
    goto L_088A7F74;
L_088A7F74:;
    a1 = s1 + 0;
    goto L_088A7F78;
L_088A7F78:;
    a2 = s4 + 0;
    a3 = s3 + 0;
    func_088A6AB0(a0, a1, a2, a3);
    goto L_088A7F84;
L_088A7F84:;
    goto L_088A7F88;
L_088A7F88:;
    sp = sp + 32;
    return;
L_088A7FA8:;
    v0 = v0 + s1;
    v1 = LD_U8(v0);
    v1 = v1 - 1;
    a0 = (u32)(s32)(s8)v1;
    cnd_ = (s32)a0 < 0;
    ST8(v0, v1);
    if (cnd_) { goto L_088A7FD8; }
    goto L_088A7FC0;
L_088A7FC0:;
    cnd_ = s5 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088A7F74; }
    goto L_088A7FC8;
L_088A7FC8:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_088A7F88; }
    goto L_088A7FD0;
L_088A7FD0:;
    a1 = s1 + 0;
    goto L_088A7F78;
L_088A7FD8:;
    v0 = LD32(s0+16);
    v0 = v0 + s1;
    ST8(v0, 0);
    goto L_088A7FC0;
}

/* 088A7FE8 */
u64 func_088A7FE8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088A7FE8:;
    sp = sp - 96;
    v1 = D_08B285B0 - (-31312);
    s1 = a0 + 0;
    v0 = LD32(v1-31312);
    v1 = LD32(a0+20);
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    ST32(sp+16, v0);
    v0 = func_088A5E88();
    goto L_088A8034;
L_088A8034:;
    cnd_ = v0 == 0;
    v0 = D_08B2AE54 - (-20908);
    if (cnd_) { goto L_088A83C0; }
    goto L_088A803C;
L_088A803C:;
    v1 = D_08B2AE48 - (-20920);
    v0 = LD32(v1-20920);
    fp = D_08B2AE58 - (-20904);
    ST32(fp-20904, 0);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088A81B0; }
    goto L_088A8054;
L_088A8054:;
    s7 = 0 + 0;
    s5 = 0 + 0;
    goto L_088A805C;
L_088A805C:;
    v1 = D_08B2AE5C - (-20900);
    v0 = LD32(v1-20900);
    a1 = 0 + 0;
    s2 = v0 + s5;
    a0 = LD32(s2+36);
    v0 = func_088AD374(a0, a1);
    goto L_088A8074;
L_088A8074:;
    v0 = v0 + 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = D_08B2AE48 - (-20920);
    if (cnd_) { goto L_088A8198; }
    goto L_088A8084;
L_088A8084:;
    v0 = LD32(sp+16);
    cnd_ = v0 != 0;
    v0 = D_08B2AE54 - (-20908);
    if (cnd_) { goto L_088A816C; }
    goto L_088A8090;
L_088A8090:;
    v0 = LD_U8(s2+17);
    cnd_ = v0 != 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_088A83A4; }
    goto L_088A809C;
L_088A809C:;
    cnd_ = s6 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_088A8168; }
    goto L_088A80A4;
L_088A80A4:;
    v1 = LD32(s6);
    s0 = s2 + 20;
    v0 = LD32(v1+20);
    t_ = v0;
    s3 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A80B8;
L_088A80B8:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s2+20));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    v0 = D_08AD7834 - (30772);
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    ST32(sp+4, FBITS(f1));
    {v[0]=BITSF(v1);}
    v1 = v0 + 30772;
    ST32(sp, FBITS(f0));
    v0 = FBITS(f1);
    ST32(sp+8, FBITS(f2));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f0 = BITSF(LD32(v1));
    goto L_088A811C;
L_088A811C:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_088A813C; }
    goto L_088A812C;
L_088A812C:;
    s3 = s3 + 1;
    v0 = s3 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_088A811C; }
    goto L_088A813C;
L_088A813C:;
    v0 = s3 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s6); goto L_088A832C; }
    goto L_088A8148;
L_088A8148:;
    v0 = LD32(s1+32);
    goto L_088A814C;
L_088A814C:;
    v1 = v0 + s4;
    a0 = LD_U8(v1);
    v0 = a0 & 0xff;
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_088A8324; }
    goto L_088A8164;
L_088A8164:;
    ST8(v1, 0);
    goto L_088A8168;
L_088A8168:;
    v0 = D_08B2AE54 - (-20908);
    goto L_088A816C;
L_088A816C:;
    a0 = LD32(fp-20904);
    a1 = LD32(v0-20908);
    v0 = D_08B2AE5C - (-20900);
    v1 = LD32(v0-20900);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = v1 + s7;
    a0 = a0 + 1;
    ST32(v0, v1);
    ST32(fp-20904, a0);
    goto L_088A8194;
L_088A8194:;
    v1 = D_08B2AE48 - (-20920);
    goto L_088A8198;
L_088A8198:;
    v0 = LD32(v1-20920);
    s4 = s4 + 1;
    s5 = s5 + 40;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s7 = s7 + 40;
    if (cnd_) { goto L_088A805C; }
    goto L_088A81B0;
L_088A81B0:;
    v0 = LD32(s1+4);
    a2 = LD32(s1);
    t0 = LD_U8(v0+10);
    a0 = LD_U16(v0);
    a1 = LD_U16(v0+2);
    a3 = LD_U8(v0+9);
    v0 = func_088A5774(a3, t0);
    goto L_088A81CC;
L_088A81CC:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_088A82E8; }
    goto L_088A81D4;
L_088A81D4:;
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088A826C; }
    goto L_088A81DC;
L_088A81DC:;
    v1 = LD32(s1+4);
    v0 = LD_U8(v1+10);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088A823C; }
    goto L_088A81EC;
L_088A81EC:;
    s2 = 1;
    goto L_088A81F0;
L_088A81F0:;
    a1 = LD_U8(s1+28);
    a0 = s2 + 0;
    a1 = a1 ^ 0x1;
    v0 = func_088A5B8C(a0, a1);
    goto L_088A8200;
L_088A8200:;
    ST8(s1+28, v0);
    v1 = 1;
    goto L_088A8208;
L_088A8208:;
    v0 = v1 + 0;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_088A823C:;
    a1 = s0 + 0;
    goto L_088A8240;
L_088A8240:;
    a0 = s1 + 0;
    a2 = 0 + 0;
    func_088A7ED8(a0, a1, a2);
    goto L_088A824C;
L_088A824C:;
    v1 = LD32(s1+4);
    s0 = s0 + 1;
    v0 = LD_U8(v1+10);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_088A8240; }
    goto L_088A8264;
L_088A8264:;
    s2 = 1;
    goto L_088A81F0;
L_088A826C:;
    a0 = 63;
    func_088A59CC(a0);
    goto L_088A8274;
L_088A8274:;
    v1 = LD32(s1+4);
    v0 = LD_U8(v1+10);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088A82B8; }
    goto L_088A8284;
L_088A8284:;
    v1 = D_08B285B0 - (-31312);
    goto L_088A8288;
L_088A8288:;
    v0 = LD32(v1-31312);
    a0 = LD32(s1+20);
    v1 = LD32(s1+24);
    v0 = v0 - a0;
    { u32 x_ = v0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = lo;
    v0 = v0 + 1;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    a0 = a0 + v0;
    ST32(s1+20, a0);
    goto L_088A81F0;
L_088A82B8:;
    a1 = s0 + 0;
    goto L_088A82BC;
L_088A82BC:;
    a0 = s1 + 0;
    a2 = 1;
    func_088A7ED8(a0, a1, a2);
    goto L_088A82C8;
L_088A82C8:;
    v1 = LD32(s1+4);
    s0 = s0 + 1;
    v0 = LD_U8(v1+10);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_088A82BC; }
    goto L_088A82E0;
L_088A82E0:;
    v1 = D_08B285B0 - (-31312);
    goto L_088A8288;
L_088A82E8:;
    func_088A531C();
    goto L_088A82F0;
L_088A82F0:;
    func_088A4F94();
    goto L_088A82F8;
L_088A82F8:;
    v0 = LD32(s1+4);
    a2 = LD32(s1);
    t0 = LD_U8(v0+10);
    a0 = LD_U16(v0);
    a1 = LD_U16(v0+2);
    a3 = LD_U8(v0+9);
    v0 = func_088A5774(a3, t0);
    goto L_088A8314;
L_088A8314:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A8208; }
    goto L_088A831C;
L_088A831C:;
    v0 = LD32(sp+16);
    goto L_088A81D4;
L_088A8324:;
    ST8(v1, v0);
    goto L_088A8194;
L_088A832C:;
    a0 = s6 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = LD32(s2+32);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A833C;
L_088A833C:;
    v1 = D_08B2C0FC - (-16132);
    s2 = v1 - 16132;
    a2 = (u32)-1;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a3 = 0 + 0;
    v0 = func_088CEAA8(a0, a1, a2, a3);
    goto L_088A8358;
L_088A8358:;
    v1 = ~(0 | v0);
    a2 = v0 + 0;
    v0 = ~(0 | s0);
    v0 = 0 < v0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_088A814C; }
    goto L_088A8378;
L_088A8378:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_088CE348(a0, a1, a2);
    goto L_088A8384;
L_088A8384:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+32); goto L_088A814C; }
    goto L_088A8390;
L_088A8390:;
    v1 = 1;
    v0 = 3;
    if (s3 == 0) v0 = v1;
    s3 = v0 + 0;
    goto L_088A8148;
L_088A83A4:;
    a1 = LD32(s1);
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    a2 = 1;
    { u64 r_ = func_08AAAC7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A83B8;
L_088A83B8:;
    s6 = v0 + 0;
    goto L_088A809C;
L_088A83C0:;
    v1 = D_08B2AE5C - (-20900);
    a0 = LD32(v0-20908);
    v0 = LD32(v1-20900);
    v1 = 1;
    ST32(a0, v0);
    v0 = D_08B2AE58 - (-20904);
    ST32(v0-20904, v1);
    goto L_088A81B0;
}

/* 088A83E0 */
void func_088A83E0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A83E0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a2 + 0;
    ST32(s1+4, a2);
    ST32(a0, a1);
    a0 = LD_U8(a2+8);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8408;
L_088A8408:;
    ST32(s1+8, v0);
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = LD_U8(s0+8);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A841C;
L_088A841C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_088A6848(a0, a1, 0, 0, 0);
    goto L_088A8428;
L_088A8428:;
    sp = sp + 16;
    return;
}

/* 088A843C */
void func_088A843C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A843C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A8474; }
    goto L_088A8458;
L_088A8458:;
    a0 = LD32(s0+4);
    goto L_088A845C;
L_088A845C:;
    a1 = s0 + 0;
    func_088A6960(a0, a1, t1, t2, t3);
    goto L_088A8464;
L_088A8464:;
    sp = sp + 16;
    return;
L_088A8474:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A847C;
L_088A847C:;
    a0 = LD32(s0+4);
    goto L_088A845C;
}

/* 088A8484 */
u64 func_088A8484(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088A8484:;
    sp = sp - 64;
    s4 = a2 & 0xff;
    s2 = a0 + 0;
    s1 = a1 + 0;
    f20 = f12;
    v0 = LD32(a0+4);
    s0 = LD_U8(v0+8);
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A84C4;
L_088A84C4:;
    a1 = LD32(s2+8);
    a2 = s0 + 0;
    a0 = v0 + 0;
    s3 = v0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A84D8;
L_088A84D8:;
    a0 = LD32(s2+4);
    a1 = LD32(s2+8);
    a3 = s1 + 0;
    a2 = sp + 0;
    { u64 r_ = func_088A65D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A84EC;
L_088A84EC:;
    v1 = LD_U8(sp);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_088A8508; }
    goto L_088A84F8;
L_088A84F8:;
    a0 = s2 + 0;
    cnd_ = s4 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_088A8548; }
    goto L_088A8504;
L_088A8504:;
    a1 = LD32(s2+8);
    goto L_088A8508;
L_088A8508:;
    a0 = s2 + 0;
    f12 = f20;
    { u64 r_ = func_088A8560(a0, a1, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8514;
L_088A8514:;
    cnd_ = s3 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088A8524; }
    goto L_088A851C;
L_088A851C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8524;
L_088A8524:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_088A8548:;
    v0 = D_08AEC454 - (-15276);
    f12 = BITSF(LD32(v0-15276));
    f12 = f20 - f12;
    { u64 r_ = func_088A8560(a0, a1, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8558;
L_088A8558:;
    a1 = LD32(s2+8);
    goto L_088A8508;
}

/* 088A8560 */
u64 func_088A8560(u32 a0, u32 a1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A8560:;
    sp = sp - 32;
    a3 = a1 + 0;
    s1 = a0 + 0;
    f20 = f12;
    v0 = LD32(a0+4);
    a0 = LD_U16(v0);
    a2 = LD_U16(v0+2);
    a1 = LD_U8(v0+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8594;
L_088A8594:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A85C0; }
    goto L_088A85A0;
L_088A85A0:;
    v1 = LD32(s1);
    ST32(v0+8, FBITS(f20));
    ST32(v0+4, v1);
    v0 = 2;
    ST32(s0, v0);
    f0 = func_08876F5C(a0);
    goto L_088A85B8;
L_088A85B8:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A85C0;
L_088A85C0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A85D8 */
rv_t func_088A85D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A85D8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A8658; }
    goto L_088A860C;
L_088A860C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A8630; }
    goto L_088A8620;
L_088A8620:;
    v0 = D_08B2AE60 - (-20896);
    a0 = LD32(v0-20896);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A8648; }
    goto L_088A8630;
L_088A8630:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088A8648:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8650;
L_088A8650:;
    goto L_088A8630;
L_088A8658:;
    s3 = D_08B2AE60 - (-20896);
    s0 = s3 - 20896;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8670;
L_088A8670:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-20896, v0);
    if (cnd_) { goto L_088A869C; }
    goto L_088A8680;
L_088A8680:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088A8688;
L_088A8688:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088A8688; }
    goto L_088A869C;
L_088A869C:;
    v0 = s3 - 20896;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088A860C;
}

/* 088A86AC */
rv_t func_088A86AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A86AC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088A85D8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A86C0;
L_088A86C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A86CC */
rv_t func_088A86CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A86CC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088A85D8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A86E0;
L_088A86E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A86EC */
void func_088A86EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A86EC:;
    v1 = D_08AF7B78 - (31608);
    v1 = v1 + 31608;
    sp = sp - 32;
    ST32(a0, v1);
    v0 = a0 + 8;
    v1 = (u32)-1;
    ST32(a0+8, 0);
    s4 = a1 + 0;
    ST8(v0+5, 0);
    ST8(v0+4, 0);
    s2 = a0 + 0;
    ST32(a0+4, v1);
    ST16(a0+16, 0);
    ST8(a0+20, 0);
    ST8(a0+18, 0);
    ST8(a0+19, 0);
    ST8(a0+21, 0);
    cnd_ = a1 != 0;
    ST8(a0+22, 0);
    if (cnd_) { goto L_088A877C; }
    goto L_088A8750;
L_088A8750:;
    ST32(a0+32, 0);
    goto L_088A8754;
L_088A8754:;
    ST32(s2+24, s4);
    goto L_088A8758;
L_088A8758:;
    ST32(s2+28, 0);
    sp = sp + 32;
    return;
L_088A877C:;
    a0 = a1 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8784;
L_088A8784:;
    ST32(s2+32, v0);
    cnd_ = s4 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088A8754; }
    goto L_088A8790;
L_088A8790:;
    v0 = LD32(s2+32);
    s0 = s3 << 2;
    a0 = 1816;
    s0 = s0 + v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A87A4;
L_088A87A4:;
    a0 = v0 + 0;
    s3 = s3 + 1;
    s1 = v0 + 0;
    func_088A3334(a0, 0, 0, 0);
    goto L_088A87B4;
L_088A87B4:;
    v0 = s3 < s4;
    cnd_ = v0 != 0;
    ST32(s0, s1);
    if (cnd_) { goto L_088A8790; }
    goto L_088A87C0;
L_088A87C0:;
    ST32(s2+24, s4);
    goto L_088A8758;
}

/* 088A87C8 */
void func_088A87C8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A87C8:;
    sp = sp - 16;
    a1 = 1;
    a2 = 0 + 0;
    s0 = a0 + 0;
    func_088A8A14(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A87E4;
L_088A87E4:;
    v1 = LD32(s0);
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A87F4;
L_088A87F4:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8804;
L_088A8804:;
    sp = sp + 16;
    return;
}

/* 088A8814 */
u64 func_088A8814(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A8814:;
    sp = sp - 16;
    v0 = D_08AF7B78 - (31608);
    v0 = v0 + 31608;
    s2 = a0 + 0;
    a1 = LD32(a0+32);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088A8878; }
    goto L_088A8840;
L_088A8840:;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088A8870; }
    goto L_088A884C;
L_088A884C:;
    v0 = s1 << 2;
    goto L_088A8850;
L_088A8850:;
    v0 = v0 + a1;
    s0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A88A0; }
    goto L_088A8864;
L_088A8864:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_088A8850; }
    goto L_088A8870;
L_088A8870:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A8890; }
    goto L_088A8878;
L_088A8878:;
    goto L_088A887C;
L_088A887C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A8890:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8898;
L_088A8898:;
    goto L_088A887C;
L_088A88A0:;
    func_088A3360(a0, t1, t2, t3);
    goto L_088A88A8;
L_088A88A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A88B0;
L_088A88B0:;
    a1 = LD32(s2+32);
    v1 = LD32(s2+24);
    goto L_088A8864;
}

/* 088A88BC */
rv_t func_088A88BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A88BC:;
    sp = sp - 16;
    v0 = D_08AF7B78 - (31608);
    v0 = v0 + 31608;
    s2 = a0 + 0;
    a1 = LD32(a0+32);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088A8920; }
    goto L_088A88E8;
L_088A88E8:;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088A8918; }
    goto L_088A88F4;
L_088A88F4:;
    v0 = s1 << 2;
    goto L_088A88F8;
L_088A88F8:;
    v0 = v0 + a1;
    s0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A8948; }
    goto L_088A890C;
L_088A890C:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_088A88F8; }
    goto L_088A8918;
L_088A8918:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A8938; }
    goto L_088A8920;
L_088A8920:;
    goto L_088A8924;
L_088A8924:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A8938:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8940;
L_088A8940:;
    goto L_088A8924;
L_088A8948:;
    func_088A3360(a0, t1, t2, t3);
    goto L_088A8950;
L_088A8950:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8958;
L_088A8958:;
    a1 = LD32(s2+32);
    v1 = LD32(s2+24);
    goto L_088A890C;
}

/* 088A8964 */
rv_t func_088A8964(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A8964:;
    sp = sp - 16;
    v0 = D_08AF7B78 - (31608);
    v0 = v0 + 31608;
    s2 = a0 + 0;
    a1 = LD32(a0+32);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088A89C8; }
    goto L_088A8990;
L_088A8990:;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088A89C0; }
    goto L_088A899C;
L_088A899C:;
    v0 = s1 << 2;
    goto L_088A89A0;
L_088A89A0:;
    v0 = v0 + a1;
    s0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A89F8; }
    goto L_088A89B4;
L_088A89B4:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_088A89A0; }
    goto L_088A89C0;
L_088A89C0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A89E8; }
    goto L_088A89C8;
L_088A89C8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A89D0;
L_088A89D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A89E8:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A89F0;
L_088A89F0:;
    goto L_088A89C8;
L_088A89F8:;
    func_088A3360(a0, t1, t2, t3);
    goto L_088A8A00;
L_088A8A00:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A8A08;
L_088A8A08:;
    a1 = LD32(s2+32);
    v1 = LD32(s2+24);
    goto L_088A89B4;
}

/* 088A8A14 */
void func_088A8A14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A8A14:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 & 0xff;
    s1 = a0 + 0;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088A8A68; }
    goto L_088A8A44;
L_088A8A44:;
    a0 = s1 + 0;
    func_088A92FC(a0);
    goto L_088A8A4C;
L_088A8A4C:;
    sp = sp + 32;
    return;
L_088A8A68:;
    v1 = LD32(s1+32);
    goto L_088A8A6C;
L_088A8A6C:;
    v0 = s0 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a2 = s3 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_088A34D8(a0, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8A88;
L_088A8A88:;
    v1 = LD32(s1+28);
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s1+32); goto L_088A8A6C; }
    goto L_088A8A98;
L_088A8A98:;
    goto L_088A8A44;
}

/* 088A8AA0 */
rv_t func_088A8AA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A8AA0:;
    sp = sp - 48;
    s5 = t0 & 0xff;
    s4 = a3 + 0;
    s3 = t1 & 0xff;
    s2 = a2 & 0xffff;
    a2 = s2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a1+4);
    v0 = LD32(a1);
    a1 = sp + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    v0 = func_088A90C4(a0, a1, a2);
    goto L_088A8AF0;
L_088A8AF0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088A8B20; }
    goto L_088A8AF8;
L_088A8AF8:;
    v0 = s0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088A8B20:;
    v0 = LD32(s1+28);
    v1 = LD32(s1+24);
    a3 = s2 + 0;
    a0 = v0 << 2;
    v0 = v0 < v1;
    t0 = s4 + 0;
    t1 = s5 + 0;
    t2 = s3 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_088A8AF8; }
    goto L_088A8B4C;
L_088A8B4C:;
    v0 = LD32(s1+32);
    v0 = a0 + v0;
    s0 = LD32(v0);
    a0 = s0 + 0;
    f0 = func_088A337C(a0, a1, a2, a3, t2);
    goto L_088A8B60;
L_088A8B60:;
    v0 = LD32(s1+28);
    v0 = v0 + 1;
    ST32(s1+28, v0);
    goto L_088A8AF8;
}

/* 088A8B70 */
float func_088A8B70(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A8B70:;
    sp = sp - 16;
    a1 = 1;
    a2 = 3;
    v0 = LD_U8(a0+19);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088A8BA0; }
    goto L_088A8B90;
L_088A8B90:;
    goto L_088A8B94;
L_088A8B94:;
    sp = sp + 16;
    return f0;
L_088A8BA0:;
    v0 = 1;
    ST8(a0+19, v0);
    func_088A8A14(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A8BAC;
L_088A8BAC:;
    a0 = s0 + 0;
    func_088AB0D4();
    goto L_088A8BB4;
L_088A8BB4:;
    v1 = LD32(s0);
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8BC4;
L_088A8BC4:;
    goto L_088A8B94;
}

/* 088A8BCC */
rv_t func_088A8BCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_088A8BCC:;
    sp = sp - 112;
    s4 = t0 & 0xffff;
    s3 = a0 + 0;
    s1 = sp + 0;
    v1 = LD32(a3+4);
    v0 = LD32(a3);
    ST32(sp+68, a2);
    a2 = 0 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    cnd_ = a1 != 0;
    ST32(sp+64, a1);
    if (cnd_) { goto L_088A8C40; }
    goto L_088A8C18;
L_088A8C18:;
    goto L_088A8C1C;
L_088A8C1C:;
    v0 = a2 + 0;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_088A8C40:;
    a2 = sp + 68;
    a1 = sp + 64;
    v0 = func_088FFA30();
    goto L_088A8C4C;
L_088A8C4C:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8C54;
L_088A8C54:;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = s4 + 0;
    v0 = func_088A90C4(a0, a1, a2);
    goto L_088A8C64;
L_088A8C64:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088A90A8; }
    goto L_088A8C6C;
L_088A8C6C:;
    v0 = LD32(v0+28);
    cnd_ = v0 == 0;
    v0 = D_08B2AEC8 - (-20792);
    if (cnd_) { goto L_088A90AC; }
    goto L_088A8C78;
L_088A8C78:;
    a0 = s2 + 0;
    v0 = func_088AB684(a0);
    goto L_088A8C80;
L_088A8C80:;
    v1 = LD32(v0+36);
    a0 = LD32(sp+68);
    v1 = v1 + a0;
    v1 = v1 + 28;
    ST32(v0+36, v1);
    goto L_088A8C94;
L_088A8C94:;
    a3 = LD32(sp+64);
    v0 = 253;
    a0 = LD_U8(a3);
    v1 = a0 & 0xff;
    cnd_ = v1 == v0;
    a1 = a3 + 0;
    if (cnd_) { goto L_088A9038; }
    goto L_088A8CAC;
L_088A8CAC:;
    cnd_ = s2 == 0;
    v1 = a0 & 0xff;
    if (cnd_) { goto L_088A8FA8; }
    goto L_088A8CB4;
L_088A8CB4:;
    cnd_ = s2 == 0;
    s5 = LD_U16(a3+4);
    if (cnd_) { goto L_088A8D30; }
    goto L_088A8CBC;
L_088A8CBC:;
    a1 = LD32(sp+68);
    s0 = LD_U16(a3+2);
    a0 = a3 + 4;
    a1 = a1 - 4;
    v0 = func_088AB190(a0, a1);
    goto L_088A8CD0;
L_088A8CD0:;
    cnd_ = s0 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088A8CEC; }
    goto L_088A8CD8;
L_088A8CD8:;
    a1 = 1;
    a2 = 9;
    { rv_t r_ = func_088A34D8(a0, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8CE4;
L_088A8CE4:;
    a2 = 1;
    goto L_088A8C18;
L_088A8CEC:;
    v1 = LD32(s2+16);
    v0 = 3;
    cnd_ = v1 == v0;
    a1 = LD32(sp+64);
    if (cnd_) { goto L_088A8D10; }
    goto L_088A8CFC;
L_088A8CFC:;
    a2 = LD32(sp+68);
    a0 = s2 + 0;
    { rv_t r_ = func_088A3B80(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8D08;
L_088A8D08:;
    a2 = v0 + 0;
    goto L_088A8C18;
L_088A8D10:;
    v0 = 0xf005;
    cnd_ = s5 == v0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8D1C;
L_088A8D1C:;
    a0 = s2 + 0;
    a1 = 2;
    { rv_t r_ = func_088A4420(a0, a1, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8D28;
L_088A8D28:;
    a2 = v0 + 0;
    goto L_088A8C18;
L_088A8D30:;
    v0 = 0xf000;
    cnd_ = s5 == v0;
    v0 = 0xf001;
    if (cnd_) { goto L_088A8F7C; }
    goto L_088A8D3C;
L_088A8D3C:;
    cnd_ = s5 == v0;
    v0 = 0xf002;
    if (cnd_) { goto L_088A8F60; }
    goto L_088A8D44;
L_088A8D44:;
    cnd_ = s5 == v0;
    v0 = 0xf005;
    if (cnd_) { goto L_088A8E24; }
    goto L_088A8D4C;
L_088A8D4C:;
    cnd_ = s5 == v0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8D54;
L_088A8D54:;
    v0 = 0xf006;
    cnd_ = s5 == v0;
    v0 = 0xf00a;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8D60;
L_088A8D60:;
    cnd_ = s5 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088A8D84; }
    goto L_088A8D68;
L_088A8D68:;
    a2 = a3 + 4;
    a3 = LD32(sp+68);
    a1 = s4 + 0;
    a3 = a3 - 4;
    v0 = func_088AB0F0(a0, a1);
    goto L_088A8D7C;
L_088A8D7C:;
    a2 = 1;
    goto L_088A8C18;
L_088A8D84:;
    v0 = LD32(sp+68);
    v1 = 4;
    v0 = v0 - 8;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_088A8C1C; }
    goto L_088A8D98;
L_088A8D98:;
    v0 = func_08A62930();
    goto L_088A8DA0;
L_088A8DA0:;
    v1 = LD32(sp+64);
    a2 = LD_U16(v1+6);
    cnd_ = a2 == v0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088A8DC8; }
    goto L_088A8DB0;
L_088A8DB0:;
    a0 = s3 + 0;
    a2 = s4 + 0;
    a3 = 8;
    { rv_t r_ = func_088A9200(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8DC0;
L_088A8DC0:;
    a2 = 1;
    goto L_088A8C18;
L_088A8DC8:;
    v0 = D_08B2AE9C - (-20836);
    v1 = LD32(v0-20836);
    a0 = sp + 36;
    a1 = 8;
    v0 = (u32)-4085;
    ST32(sp+40, v1);
    ST16(sp+38, a2);
    ST16(sp+36, v0);
    ST16(sp+32, 0);
    v0 = func_088AB190(a0, a1);
    goto L_088A8DF0;
L_088A8DF0:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a3 = sp + 32;
    t0 = 12;
    t1 = 1;
    ST16(sp+34, v0);
    { rv_t r_ = func_088A9198(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8E10;
L_088A8E10:;
    v1 = D_08B2AEC4 - (-20796);
    v0 = LD32(v1-20796);
    v0 = v0 + 40;
    ST32(v1-20796, v0);
    goto L_088A8CE4;
L_088A8E24:;
    v0 = LD_U8(s3+21);
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8E30;
L_088A8E30:;
    v0 = func_08A62998();
    goto L_088A8E38;
L_088A8E38:;
    a1 = LD32(sp+68);
    v0 = v0 + 20;
    v1 = a1 - 8;
    cnd_ = v1 != v0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8E4C;
L_088A8E4C:;
    v0 = LD32(sp+64);
    a1 = a1 - 4;
    s0 = LD_U16(v0+2);
    a0 = v0 + 4;
    v0 = func_088AB190(a0, a1);
    goto L_088A8E60;
L_088A8E60:;
    cnd_ = s0 != v0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8E68;
L_088A8E68:;
    v1 = LD32(sp+64);
    v0 = D_08B2AE9C - (-20836);
    s2 = v0 - 20836;
    s0 = v1 + 8;
    a0 = s2 + 0;
    a1 = 4;
    v0 = func_08832688(a0, a1);
    goto L_088A8E84;
L_088A8E84:;
    v1 = LD32(s0+12);
    cnd_ = v0 == v1;
    a0 = s2 + 4;
    if (cnd_) { goto L_088A8F00; }
    goto L_088A8E90;
L_088A8E90:;
    a1 = 4;
    v0 = func_08832688(a0, a1);
    goto L_088A8E98;
L_088A8E98:;
    v1 = LD32(s0+12);
    cnd_ = v0 == v1;
    v0 = (u32)-4092;
    if (cnd_) { goto L_088A8F00; }
    goto L_088A8EA4;
L_088A8EA4:;
    ST16(sp+52, v0);
    ST16(sp+48, 0);
    v0 = func_08A62930();
    goto L_088A8EB0;
L_088A8EB0:;
    a0 = sp + 52;
    a1 = 8;
    ST16(sp+54, v0);
    v0 = 14;
    ST32(sp+56, v0);
    v0 = func_088AB190(a0, a1);
    goto L_088A8EC8;
L_088A8EC8:;
    a2 = s4 + 0;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a3 = sp + 48;
    t0 = 12;
    t1 = 1;
    ST16(sp+50, v0);
    { rv_t r_ = func_088A9198(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8EE8;
L_088A8EE8:;
    v1 = D_08B2AEC4 - (-20796);
    v0 = LD32(v1-20796);
    a2 = 1;
    v0 = v0 + 40;
    ST32(v1-20796, v0);
    goto L_088A8C18;
L_088A8F00:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t1 = 0 + 0;
    { rv_t r_ = func_088A8AA0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8F1C;
L_088A8F1C:;
    v1 = LD32(v0+20);
    cnd_ = v1 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088A8F50; }
    goto L_088A8F28;
L_088A8F28:;
    v0 = 5;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8F34;
L_088A8F34:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a3 = 3;
    { rv_t r_ = func_088A9200(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A8F48;
L_088A8F48:;
    a2 = v0 + 0;
    goto L_088A8C18;
L_088A8F50:;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8F58;
L_088A8F58:;
    a3 = LD32(sp+64);
    goto L_088A8CBC;
L_088A8F60:;
    a2 = a3 + 0;
    a3 = LD32(sp+68);
    a0 = s1 + 0;
    a1 = s4 + 0;
    f0 = func_088AAE48(a0, a1, a2);
    goto L_088A8F74;
L_088A8F74:;
    a2 = 1;
    goto L_088A8C18;
L_088A8F7C:;
    v0 = D_08B2AED4 - (-20780);
    v1 = LD_U8(v0-20780);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A8C18; }
    goto L_088A8F8C;
L_088A8F8C:;
    a2 = a3 + 0;
    a3 = LD32(sp+68);
    a0 = s1 + 0;
    a1 = s4 + 0;
    func_088AAE18(a0, a1, a2);
    goto L_088A8FA0;
L_088A8FA0:;
    a2 = 1;
    goto L_088A8C18;
L_088A8FA8:;
    v0 = 254;
    cnd_ = v1 != v0;
    v0 = 253;
    if (cnd_) { goto L_088A8CB4; }
    goto L_088A8FB4;
L_088A8FB4:;
    v1 = LD_U8(a1+1);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_088A8CB4; }
    goto L_088A8FC0;
L_088A8FC0:;
    v0 = func_088A1268();
    goto L_088A8FC8;
L_088A8FC8:;
    cnd_ = v0 != 0;
    v0 = D_08B2ACDC - (-21284);
    if (cnd_) { goto L_088A9014; }
    goto L_088A8FD0;
L_088A8FD0:;
    v1 = LD_U8(v0-21284);
    cnd_ = v1 == 0;
    a3 = LD32(sp+64);
    if (cnd_) { goto L_088A8CB4; }
    goto L_088A8FDC;
L_088A8FDC:;
    a0 = s1 + 0;
    v0 = WSBH(s4);
    v1 = 2;
    ST8(sp+17, v1);
    ST16(sp+18, v0);
    v0 = func_088FFA48(a0, a3, 0, 0, 0, 0);
    goto L_088A8FF4;
L_088A8FF4:;
    a3 = sp + 16;
    a1 = LD32(sp+64);
    a2 = LD32(sp+68);
    a0 = 0 + 0;
    ST32(sp+20, v0);
    f0 = func_08A7E3E4(a0, a1, a2, a3, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088A900C;
L_088A900C:;
    a2 = 1;
    goto L_088A8C18;
L_088A9014:;
    a0 = s1 + 0;
    v0 = func_088FFA48(a0, 0, 0, 0, 0, 0);
    goto L_088A901C;
L_088A901C:;
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    a0 = v0 + 0;
    a1 = s4 + 0;
    func_088A1258();
    goto L_088A9030;
L_088A9030:;
    a2 = 1;
    goto L_088A8C18;
L_088A9038:;
    v1 = LD_U8(a3+1);
    v0 = 252;
    cnd_ = v1 != v0;
    v0 = 30;
    if (cnd_) { goto L_088A8CAC; }
    goto L_088A9048;
L_088A9048:;
    v1 = LD_U8(a3+2);
    cnd_ = v1 != v0;
    v0 = 102;
    if (cnd_) { goto L_088A8CAC; }
    goto L_088A9054;
L_088A9054:;
    v1 = LD_U8(a3+3);
    cnd_ = v1 != v0;
    v0 = 106;
    if (cnd_) { goto L_088A8CAC; }
    goto L_088A9060;
L_088A9060:;
    v1 = LD_U8(a3+4);
    cnd_ = v1 != v0;
    v0 = 178;
    if (cnd_) { goto L_088A8CAC; }
    goto L_088A906C;
L_088A906C:;
    v1 = LD_U8(a3+5);
    cnd_ = v1 != v0;
    v0 = WSBH(s4);
    if (cnd_) { goto L_088A8CAC; }
    goto L_088A9078;
L_088A9078:;
    a0 = s1 + 0;
    v1 = 2;
    ST8(sp+17, v1);
    ST16(sp+18, v0);
    v0 = func_088FFA48(a0, a3, 0, 0, 0, 0);
    goto L_088A908C;
L_088A908C:;
    a2 = sp + 16;
    a0 = LD32(sp+64);
    a1 = LD32(sp+68);
    ST32(sp+20, v0);
    f0 = func_08A7CA4C(a0, a1, a2);
    goto L_088A90A0;
L_088A90A0:;
    a2 = 1;
    goto L_088A8C18;
L_088A90A8:;
    v0 = D_08B2AEC8 - (-20792);
    goto L_088A90AC;
L_088A90AC:;
    v1 = LD32(v0-20792);
    a0 = LD32(sp+68);
    v1 = v1 + a0;
    v1 = v1 + 28;
    ST32(v0-20792, v1);
    goto L_088A8C94;
}

/* 088A90C4 */
u32 func_088A90C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A90C4:;
    v1 = LD32(a1+4);
    v0 = LD32(a1);
    t2 = LD32(a0+28);
    sp = sp - 32;
    ST32(sp, v0);
    a2 = a2 & 0xffff;
    a1 = sp + 0;
    ST32(sp+4, v1);
    cnd_ = t2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088A9120; }
    goto L_088A90EC;
L_088A90EC:;
    a3 = LD32(a0+32);
    goto L_088A90F0;
L_088A90F0:;
    v0 = LD32(a3);
    t0 = t0 + 1;
    t1 = t0 < t2;
    a0 = LD32(v0);
    ST32(sp+16, a0);
    v1 = LD32(v0+4);
    ST32(sp+20, v1);
    v0 = LD32(a1);
    cnd_ = a0 == v0;
    v1 = v1 & 0xffff;
    if (cnd_) { goto L_088A9130; }
    goto L_088A9118;
L_088A9118:;
    cnd_ = t1 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_088A90F0; }
    goto L_088A9120;
L_088A9120:;
    a0 = 0 + 0;
    v0 = a0 + 0;
    goto L_088A9128;
L_088A9128:;
    sp = sp + 32;
    return v0;
L_088A9130:;
    v0 = LD_U16(a1+4);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_088A9118; }
    goto L_088A913C;
L_088A913C:;
    v1 = LD32(a3);
    v0 = LD_U16(v1+8);
    cnd_ = v0 != a2;
    a0 = v1 + 0;
    if (cnd_) { goto L_088A9118; }
    goto L_088A914C;
L_088A914C:;
    v0 = a0 + 0;
    goto L_088A9128;
}

/* 088A9154 */
u32 func_088A9154(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A9154:;
    sp = sp - 32;
    a2 = a2 & 0xffff;
    v1 = LD32(a1+4);
    v0 = LD32(a1);
    a1 = sp + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    v0 = func_088A90C4(a0, a1, a2);
    goto L_088A9178;
L_088A9178:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A9188; }
    goto L_088A9180;
L_088A9180:;
    v0 = func_088A3FE0();
    goto L_088A9188;
L_088A9188:;
    v0 = 1;
    sp = sp + 32;
    return v0;
}

/* 088A9198 */
rv_t func_088A9198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088A9198:;
    sp = sp - 64;
    t1 = (s32)t0 < 3;
    a2 = a2 & 0xffff;
    t3 = LD32(a1+4);
    t2 = LD32(a1);
    v0 = 1;
    ST32(sp+4, t3);
    cnd_ = a3 == 0;
    ST32(sp, t2);
    if (cnd_) { goto L_088A91C8; }
    goto L_088A91C0;
L_088A91C0:;
    cnd_ = t1 == 0;
    a1 = sp + 16;
    if (cnd_) { goto L_088A91D4; }
    goto L_088A91C8;
L_088A91C8:;
    goto L_088A91CC;
L_088A91CC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088A91D4:;
    ST32(sp+16, t2);
    ST32(sp+20, t3);
    v1 = LD32(a0);
    ST16(sp+24, a2);
    ST32(sp+28, a3);
    ST32(sp+32, t0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A91F8;
L_088A91F8:;
    goto L_088A91CC;
}

/* 088A9200 */
rv_t func_088A9200(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A9200:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = a3 + 0;
    s0 = a2 & 0xffff;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    ST16(sp+16, 0);
    ST32(sp, v0);
    v0 = (u32)-4091;
    ST32(sp+4, v1);
    ST16(sp+20, v0);
    v0 = func_08A62930();
    goto L_088A9240;
L_088A9240:;
    a0 = sp + 20;
    a1 = 6;
    ST16(sp+24, s1);
    ST16(sp+22, v0);
    v0 = func_088AB190(a0, a1);
    goto L_088A9254;
L_088A9254:;
    a0 = s2 + 0;
    a2 = s0 + 0;
    a3 = sp + 16;
    a1 = sp + 0;
    t0 = 10;
    t1 = 1;
    ST16(sp+18, v0);
    { rv_t r_ = func_088A9198(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A9274;
L_088A9274:;
    a0 = D_08B2AEC4 - (-20796);
    v1 = LD32(a0-20796);
    v1 = v1 + 38;
    ST32(a0-20796, v1);
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088A929C */
void func_088A929C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A929C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = a1 & 0xff;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A92B4;
L_088A92B4:;
    sp = sp + 16;
    return;
}

/* 088A92C0 */
void func_088A92C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A92C0:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A92DC;
L_088A92DC:;
    a0 = s0 + 0;
    func_088A92FC(a0);
    goto L_088A92E4;
L_088A92E4:;
    a0 = s0 + 0;
    func_088FFA40();
    goto L_088A92EC;
L_088A92EC:;
    sp = sp + 16;
    return;
}

/* 088A92FC */
void func_088A92FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A92FC:;
    sp = sp - 32;
    s2 = 0 + 0;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088A9368; }
    goto L_088A9324;
L_088A9324:;
    a3 = LD32(a0+32);
    s3 = 3;
    s0 = s2 << 2;
    goto L_088A9330;
L_088A9330:;
    v0 = s0 + a3;
    a0 = LD32(v0);
    func_088A45DC(a0);
    goto L_088A933C;
L_088A933C:;
    a3 = LD32(s1+32);
    v0 = s0 + a3;
    a1 = LD32(v0);
    v1 = LD32(a1+16);
    cnd_ = v1 == s3;
    if (cnd_) { v0 = LD_U8(a1+1580); goto L_088A9384; }
    goto L_088A9354;
L_088A9354:;
    v0 = LD32(s1+28);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s2 << 2;
    if (cnd_) { goto L_088A9330; }
    goto L_088A9368;
L_088A9368:;
    sp = sp + 32;
    return;
L_088A9384:;
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088A93DC; }
    goto L_088A938C;
L_088A938C:;
    func_088AAD34(a0);
    goto L_088A9394;
L_088A9394:;
    v0 = LD32(s1+32);
    goto L_088A9398;
L_088A9398:;
    s2 = s2 - 1;
    v0 = s0 + v0;
    a0 = LD32(v0);
    func_088A3464(a0, 0, 0, 0);
    goto L_088A93A8;
L_088A93A8:;
    a0 = LD32(s1+28);
    v0 = LD32(s1+32);
    v1 = a0 << 2;
    v1 = v1 + v0;
    a1 = s0 + v0;
    a2 = LD32(v1-4);
    a3 = v0 + 0;
    v0 = LD32(a1);
    a0 = a0 - 1;
    ST32(s1+28, a0);
    ST32(v1-4, v0);
    ST32(a1, a2);
    goto L_088A9354;
L_088A93DC:;
    a0 = a1 + 0;
    func_088AB024(a0);
    goto L_088A93E4;
L_088A93E4:;
    v0 = LD32(s1+32);
    goto L_088A9398;
}

/* 088A93EC */
rv_t func_088A93EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088A93EC:;
    sp = sp - 96;
    fp = 0 + 0;
    s4 = sp + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1+4);
    v1 = LD32(a1);
    a1 = LD_U16(a2);
    ST32(sp+4, v0);
    cnd_ = a1 != 0;
    ST32(sp, v1);
    if (cnd_) { goto L_088A944C; }
    goto L_088A9440;
L_088A9440:;
    v0 = 3658;
    ST16(a2, v0);
    fp = 1;
    goto L_088A944C;
L_088A944C:;
    s5 = (u32)-1;
    s7 = 2;
    goto L_088A9454;
L_088A9454:;
    v0 = LD32(s4);
    a0 = 2;
    a1 = 2;
    ST32(s0+8, v0);
    a2 = 17;
    s6 = sp + 16;
    v0 = LD32(s4+4);
    ST32(s0+4, s5);
    ST32(s0+12, v0);
    v1 = LD_U16(s2);
    ST8(s0+18, 0);
    ST16(s0+16, v1);
    ST8(s0+19, 0);
    ST8(s0+20, 0);
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A9490;
L_088A9490:;
    a0 = v0 + 0;
    a1 = s6 + 0;
    a2 = 16;
    cnd_ = v0 == s5;
    ST32(s0+4, v0);
    if (cnd_) { goto L_088A95BC; }
    goto L_088A94A4;
L_088A94A4:;
    v0 = LD_U16(s2);
    ST32(sp+20, 0);
    v0 = WSBH(v0);
    ST32(sp+16, 0);
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    ST16(sp+18, v0);
    ST8(sp+17, s7);
    v0 = sceNetInetBind(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A94C8;
L_088A94C8:;
    cnd_ = v0 != s5;
    s1 = v0 + 0;
    if (cnd_) { goto L_088A9530; }
    goto L_088A94D0;
L_088A94D0:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A94D8;
L_088A94D8:;
    a0 = LD32(s0+4);
    s3 = v0 + 0;
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A94E4;
L_088A94E4:;
    v1 = s3 ^ 0x70;
    a1 = 0 < v1;
    cnd_ = fp == 0;
    ST32(s0+4, s1);
    if (cnd_) { goto L_088A95B4; }
    goto L_088A94F4;
L_088A94F4:;
    v1 = LD_U16(s2);
    a2 = 27015;
    a0 = v1 & 0xffff;
    v0 = a0 < 0x69c7u;
    v0 = v0 ^ 0x1;
    v0 = v0 | a1;
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088A95B4; }
    goto L_088A9514;
L_088A9514:;
    v0 = 3658;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088A9528; }
    goto L_088A9520;
L_088A9520:;
    ST16(s2, v1);
    a2 = v1 + 0;
    goto L_088A9528;
L_088A9528:;
    cnd_ = s3 != 0;
    ST16(s2, a2);
    if (cnd_) { goto L_088A9454; }
    goto L_088A9530;
L_088A9530:;
    a0 = LD32(s0+4);
    a1 = s6 + 0;
    a2 = sp + 32;
    v0 = 16;
    ST32(sp+32, v0);
    v0 = sceNetInetGetsockname(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A9548;
L_088A9548:;
    a1 = s0 + 8;
    v0 = LD32(sp+20);
    v1 = LD_U16(sp+18);
    a0 = s0 + 0;
    ST32(s0+8, v0);
    v1 = WSBH(v1);
    v0 = 1;
    ST8(a1+5, 0);
    ST8(a1+4, 0);
    ST16(s0+16, v1);
    ST8(s0+20, v0);
    ST8(s0+21, 0);
    ST32(s0+28, 0);
    func_088FFA38();
    goto L_088A9580;
L_088A9580:;
    v0 = 1;
    goto L_088A9584;
L_088A9584:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088A95B4:;
    v0 = 0 + 0;
    goto L_088A9584;
L_088A95BC:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A95C4;
L_088A95C4:;
    v0 = 0 + 0;
    goto L_088A9584;
}

/* 088A95CC */
rv_t func_088A95CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A95CC:;
    sp = sp - 16;
    v0 = LD_U8(a0+20);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088A95F4; }
    goto L_088A95E4;
L_088A95E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A95F4:;
    a0 = LD32(a0+4);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A95FC;
L_088A95FC:;
    ST8(s0+20, 0);
    goto L_088A95E4;
}

/* 088A9604 */
rv_t func_088A9604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[8320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 8320);
L_088A9604:;
    sp = sp - 8320;
    s6 = 122;
    s5 = 104;
    s4 = 16;
    s3 = sp + 32;
    s2 = (u32)-1;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    ST32(sp, 0);
    a0 = 1;
    v1 = (u32)((s32)v0 >> 5);
    ST32(sp+4, 0);
    v1 = v1 << 2;
    v1 = v1 + sp;
    ST32(sp+8, 0);
    v0 = v0 & 0x1f;
    a0 = a0 << (v0 & 31);
    ST32(sp+12, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    v0 = LD32(v1);
    ST32(sp+32, 0);
    v0 = v0 | a0;
    ST32(v1, v0);
    ST32(sp+36, 0);
    goto L_088A9690;
L_088A9690:;
    a1 = sp + 0;
    goto L_088A9694;
L_088A9694:;
    t0 = s3 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 64;
    v0 = sceNetInetSelect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A96A8;
L_088A96A8:;
    s0 = sp + 64;
    a1 = s0 + 0;
    a3 = 0 + 0;
    t0 = sp + 48;
    t1 = sp + 8272;
    cnd_ = (s32)v0 <= 0;
    a2 = 8192;
    if (cnd_) { goto L_088A9794; }
    goto L_088A96C4;
L_088A96C4:;
    a0 = LD32(s1+4);
    ST32(sp+8272, s4);
    v0 = sceNetInetRecvfrom(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A96D0;
L_088A96D0:;
    a2 = v0 + 0;
    a1 = s0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == s2;
    a3 = sp + 8256;
    if (cnd_) { goto L_088A9740; }
    goto L_088A96E4;
L_088A96E4:;
    t0 = LD_U16(sp+50);
    v0 = LD32(sp+52);
    ST8(sp+8260, 0);
    t0 = WSBH(t0);
    t0 = t0 & 0xffff;
    ST8(sp+8261, 0);
    ST32(sp+8256, v0);
    { rv_t r_ = func_088A8BCC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A9704;
L_088A9704:;
    v0 = v0 ^ 0x1;
    goto L_088A9708;
L_088A9708:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A9690; }
    goto L_088A9714;
L_088A9714:;
    v0 = v1 + 0;
    sp = sp + 8320;
    return (rv_t){ v0, v1, f0 };
L_088A9740:;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A9748;
L_088A9748:;
    cnd_ = v0 == s5;
    a2 = LD_U16(sp+50);
    if (cnd_) { goto L_088A9768; }
    goto L_088A9750;
L_088A9750:;
    cnd_ = v0 == s6;
    a1 = sp + 0;
    if (cnd_) { goto L_088A9694; }
    goto L_088A9758;
L_088A9758:;
    a0 = s1 + 0;
    f0 = func_088A8B70(a0, 0, 0, 0, 0, 0);
    goto L_088A9760;
L_088A9760:;
    v1 = 0 + 0;
    goto L_088A9714;
L_088A9768:;
    v0 = LD32(sp+52);
    a0 = s1 + 0;
    a2 = WSBH(a2);
    a2 = a2 & 0xffff;
    a1 = sp + 8256;
    ST32(sp+8256, v0);
    ST8(sp+8260, 0);
    ST8(sp+8261, 0);
    v0 = func_088A9154(a0, a1, a2);
    goto L_088A978C;
L_088A978C:;
    v0 = v0 ^ 0x1;
    goto L_088A9708;
L_088A9794:;
    v1 = 1;
    goto L_088A9714;
}

/* 088A979C */
rv_t func_088A979C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088A979C:;
    sp = sp - 64;
    t1 = 1;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    t0 = sp + 32;
    a2 = sp + 0;
    v0 = LD32(a0+4);
    ST32(sp, 0);
    a0 = 64;
    v1 = (u32)((s32)v0 >> 5);
    ST32(sp+4, 0);
    v1 = v1 << 2;
    v1 = v1 + sp;
    ST32(sp+8, 0);
    v0 = v0 & 0x1f;
    t1 = t1 << (v0 & 31);
    ST32(sp+12, 0);
    a3 = 0 + 0;
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    v0 = LD32(v1);
    ST32(sp+32, 0);
    v0 = v0 | t1;
    ST32(v1, v0);
    ST32(sp+36, 0);
    v0 = sceNetInetSelect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A981C;
L_088A981C:;
    v0 = v0 + 1;
    v0 = v0 < 0x2u;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A984C; }
    goto L_088A9834;
L_088A9834:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088A984C:;
    { u64 r_ = func_088FF950(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9854;
L_088A9854:;
    v1 = v0 + 0;
    goto L_088A9834;
}

/* 088A985C */
rv_t func_088A985C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A985C:;
    sp = sp - 32;
    v0 = a1 & 0xff;
    v0 = 0 < v0;
    a0 = LD32(a0+4);
    a1 = 0xffff;
    a2 = 32;
    a3 = sp + 0;
    t0 = 4;
    ST32(sp, v0);
    v0 = sceNetInetSetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A9888;
L_088A9888:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088A9894 */
rv_t func_088A9894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A9894:;
    sp = sp - 16;
    v0 = sceNetInetGetErrno(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A98A4;
L_088A98A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A98B0 */
void func_088A98B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088A98B0:;
    sp = sp - 64;
    s2 = a2 + 0;
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088A98E0; }
    goto L_088A98D4;
L_088A98D4:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088A9914; }
    goto L_088A98E0;
L_088A98E0:;
    v1 = 0 + 0;
    s3 = 0 + 0;
    goto L_088A98E8;
L_088A98E8:;
    cnd_ = s1 != 0;
    if (cnd_) { ST32(s1, v1); goto L_088A98F0; }
    goto L_088A98F0;
L_088A98F0:;
    cnd_ = s2 != 0;
    if (cnd_) { ST16(s2, s3); goto L_088A98F8; }
    goto L_088A98F8;
L_088A98F8:;
    sp = sp + 64;
    return;
L_088A9914:;
    a0 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A991C;
L_088A991C:;
    a0 = sp + 0;
    a1 = 58;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9928;
L_088A9928:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088A9950; }
    goto L_088A9934;
L_088A9934:;
    a0 = v0 + 1;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A993C;
L_088A993C:;
    v1 = 0xffff;
    ST8(s0, 0);
    v1 = v1 < v0;
    v0 = v0 & 0xffff;
    if (v1 == 0) s3 = v0;
    goto L_088A9950;
L_088A9950:;
    a0 = sp + 0;
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A9958;
L_088A9958:;
    v1 = v0 + 0;
    v0 = ~(0 | v0);
    if (v0 == 0) v1 = 0;
    goto L_088A98E8;
}

/* 088A9968 */
u32 func_088A9968(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A9968:;
    sp = sp - 32;
    s0 = D_08B2AE70 - (-20880);
    s0 = s0 - 20880;
    t3 = a0 >> 24;
    t0 = a0 & 0xff;
    t1 = (a0 >> 8) & 0xff;
    v0 = a1 & 0xffff;
    a0 = (a0 >> 16) & 0xff;
    a1 = D_08AD7854 - (30804);
    t2 = a0 + 0;
    a1 = a1 + 30804;
    a0 = s0 + 0;
    a2 = 22;
    a3 = 1;
    ST32(sp, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A99B0;
L_088A99B0:;
    v0 = s0 + 0;
    sp = sp + 32;
    return v0;
}

/* 088A99C4 */
void func_088A99C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A99C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A99DC;
L_088A99DC:;
    v1 = 0x7fff0000u;
    ST32(s0, v0);
    v1 = v1 | 0xffff;
    a0 = 127;
    ST32(v0+8, 0);
    a1 = (u32)-1;
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+12, v1);
    v1 = s0 + 4;
    goto L_088A9A04;
L_088A9A04:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_088A9A04; }
    goto L_088A9A1C;
L_088A9A1C:;
    ST32(s0+1544, 0);
    ST32(s0+1540, 0);
    sp = sp + 16;
    return;
}

/* 088A9A34 */
void func_088A9A34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A9A34:;
    sp = sp - 16;
    s2 = a0 + 0;
    { u64 r_ = func_088A9B1C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9A50;
L_088A9A50:;
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    v0 = (u32)-4;
    if (cnd_) { goto L_088A9AA0; }
    goto L_088A9A5C;
L_088A9A5C:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088A9A8C; }
    goto L_088A9A68;
L_088A9A68:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A9B0C; }
    goto L_088A9A74;
L_088A9A74:;
    a1 = LD32(s1+12);
    goto L_088A9A78;
L_088A9A78:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A9AFC; }
    goto L_088A9A80;
L_088A9A80:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9A88;
L_088A9A88:;
    a0 = LD32(s0+4);
    goto L_088A9A8C;
L_088A9A8C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088A9AE8; }
    goto L_088A9A94;
L_088A9A94:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9A9C;
L_088A9A9C:;
    v0 = (u32)-4;
    goto L_088A9AA0;
L_088A9AA0:;
    cnd_ = s2 == v0;
    s1 = s2 + 4;
    if (cnd_) { goto L_088A9AD0; }
    goto L_088A9AA8;
L_088A9AA8:;
    s0 = s2 + 1540;
    goto L_088A9AAC;
L_088A9AAC:;
    cnd_ = s1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_088A9AD0; }
    goto L_088A9AB4;
L_088A9AB4:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A9AAC; }
    goto L_088A9AC0;
L_088A9AC0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9AC8;
L_088A9AC8:;
    goto L_088A9AAC;
L_088A9AD0:;
    sp = sp + 16;
    return;
L_088A9AE8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A9AF4;
L_088A9AF4:;
    goto L_088A9A94;
L_088A9AFC:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088A9B04;
L_088A9B04:;
    goto L_088A9A80;
L_088A9B0C:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088A9B14;
L_088A9B14:;
    a1 = LD32(s1+12);
    goto L_088A9A78;
}

/* 088A9B1C */
u64 func_088A9B1C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088A9B1C:;
    sp = sp - 16;
    s0 = LD32(a0);
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088A9B60; }
    goto L_088A9B40;
L_088A9B40:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A9C18; }
    goto L_088A9B4C;
L_088A9B4C:;
    a1 = LD32(s1+12);
    goto L_088A9B50;
L_088A9B50:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088A9C08; }
    goto L_088A9B58;
L_088A9B58:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9B60;
L_088A9B60:;
    a1 = LD32(s0+4);
    ST32(s0+8, 0);
    cnd_ = a1 == 0;
    ST32(s0, 0);
    if (cnd_) { goto L_088A9B9C; }
    goto L_088A9B70;
L_088A9B70:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A9B9C; }
    goto L_088A9B80;
L_088A9B80:;
    v1 = LD32(a1+4);
    goto L_088A9B84;
L_088A9B84:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088A9B84; }
    goto L_088A9B9C;
L_088A9B9C:;
    v0 = LD32(s2+1540);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088A9BD8; }
    goto L_088A9BA8;
L_088A9BA8:;
    s0 = s2 + 0;
    goto L_088A9BAC;
L_088A9BAC:;
    v0 = LD32(s0+8);
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A9BF8; }
    goto L_088A9BBC;
L_088A9BBC:;
    ST32(s0+12, 0);
    goto L_088A9BC0;
L_088A9BC0:;
    ST32(s0+4, 0);
    v0 = LD32(s2+1540);
    ST32(s0+8, 0);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_088A9BAC; }
    goto L_088A9BD8;
L_088A9BD8:;
    ST32(s2+1544, 0);
    ST32(s2+1540, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A9BF8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9C00;
L_088A9C00:;
    ST32(s0+12, 0);
    goto L_088A9BC0;
L_088A9C08:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088A9C10;
L_088A9C10:;
    goto L_088A9B58;
L_088A9C18:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088A9C20;
L_088A9C20:;
    a1 = LD32(s1+12);
    goto L_088A9B50;
}

/* 088A9C28 */
u32 func_088A9C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A9C28:;
    v1 = a2 < 0x1u;
    v0 = a3 < 0x1u;
    sp = sp - 48;
    v1 = v1 | v0;
    s3 = a1 + 0;
    a1 = 0 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A9C8C; }
    goto L_088A9C64;
L_088A9C64:;
    v0 = LD32(a0+1544);
    v0 = v0 + a3;
    v0 = v0 < 0x4001u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A9C90; }
    goto L_088A9C78;
L_088A9C78:;
    v0 = LD32(a0+1540);
    a2 = 1;
    v0 = v0 < 0x80u;
    cnd_ = v0 != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_088A9CAC; }
    goto L_088A9C8C;
L_088A9C8C:;
    goto L_088A9C90;
L_088A9C90:;
    v0 = a1 + 0;
    sp = sp + 48;
    return v0;
L_088A9CAC:;
    a1 = LD_U16(s2);
    a0 = LD32(a0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A9CB8;
L_088A9CB8:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A9C8C; }
    goto L_088A9CC0;
L_088A9CC0:;
    v1 = LD32(sp);
    a1 = 1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = v0 + s0;
    ST32(v0+4, s3);
    ST32(v0+12, s1);
    a0 = LD32(s0+1540);
    v1 = LD32(s0+1544);
    ST32(v0+8, s2);
    a0 = a0 + 1;
    v1 = v1 + s1;
    ST32(s0+1544, v1);
    ST32(s0+1540, a0);
    goto L_088A9C8C;
}

/* 088A9D00 */
void func_088A9D00(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088A9D00:;
    sp = sp - 48;
    a3 = (u32)-1;
    s0 = a0 + 0;
    a1 = a1 & 0xffff;
    a2 = sp + 0;
    s2 = LD32(a0);
    ST32(sp, a3);
    a0 = s2 + 0;
    v0 = func_08AB36BC(a0, a1, a2, t2, t3);
    goto L_088A9D38;
L_088A9D38:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A9E28; }
    goto L_088A9D40;
L_088A9D40:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    a3 = LD32(sp);
    if (cnd_) { goto L_088A9D88; }
    goto L_088A9D4C;
L_088A9D4C:;
    s3 = LD32(s2+8);
    v0 = LD32(s1+4);
    cnd_ = v0 == s3;
    v1 = s1 + 0;
    if (cnd_) { goto L_088A9D78; }
    goto L_088A9D5C;
L_088A9D5C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A9E60; }
    goto L_088A9D68;
L_088A9D68:;
    a1 = LD32(s1+12);
    goto L_088A9D6C;
L_088A9D6C:;
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088A9E50; }
    goto L_088A9D74;
L_088A9D74:;
    v1 = v0 + 0;
    goto L_088A9D78;
L_088A9D78:;
    cnd_ = v1 == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_088A9D84; }
    goto L_088A9D80;
L_088A9D80:;
    ST32(v1+4, v0);
    goto L_088A9D84;
L_088A9D84:;
    a3 = LD32(sp);
    goto L_088A9D88;
L_088A9D88:;
    v1 = LD32(s0+1540);
    a0 = LD32(s0+1544);
    v0 = a3 << 1;
    v1 = v1 - 1;
    ST32(s0+1540, v1);
    v0 = v0 + a3;
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+12);
    v0 = LD32(v0+8);
    a0 = a0 - v1;
    cnd_ = v0 != 0;
    ST32(s0+1544, a0);
    if (cnd_) { goto L_088A9E40; }
    goto L_088A9DBC;
L_088A9DBC:;
    a0 = LD32(s0+1540);
    v1 = a3 << 1;
    v1 = v1 + a3;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + s0;
    ST32(v1+4, a0);
    v0 = v0 + 4;
    v1 = v1 + 4;
    a0 = LD32(v0+4);
    ST32(v1+4, a0);
    a1 = LD32(v0+8);
    ST32(v1+8, a1);
    a0 = LD32(s0+1540);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = s0 + v0;
    v1 = v0 + 4;
    ST32(v0+4, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    goto L_088A9E28;
L_088A9E28:;
    sp = sp + 48;
    return;
L_088A9E40:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A9E48;
L_088A9E48:;
    a3 = LD32(sp);
    goto L_088A9DBC;
L_088A9E50:;
    a2 = s3 + 0;
    v0 = func_08AB3628(a0, a1, a2);
    goto L_088A9E58;
L_088A9E58:;
    v1 = v0 + 0;
    goto L_088A9D78;
L_088A9E60:;
    a0 = s2 + 0;
    a2 = s3 + 0;
    v0 = func_08AB3628(a0, a1, a2);
    goto L_088A9E6C;
L_088A9E6C:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088A9D78; }
    goto L_088A9E74;
L_088A9E74:;
    a1 = LD32(s1+12);
    goto L_088A9D6C;
}

/* 088A9E7C */
u32 func_088A9E7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088A9E7C:;
    v1 = LD32(a0+1540);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    a1 = a1 < v1;
    a0 = a0 + v0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A9EA0; }
    goto L_088A9E9C;
L_088A9E9C:;
    v0 = a0 + 4;
    goto L_088A9EA0;
L_088A9EA0:;
    return v0;
}

/* 088A9EA8 */
void func_088A9EA8(void)
{
L_088A9EA8:;
    return;
}

/* 088A9EB0 */
void func_088A9EB0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088A9EB0:;
    sp = sp - 32;
    s1 = D_08B2AECC - (-20788);
    v0 = LD32(s1-20788);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A9FE8; }
    goto L_088A9ED4;
L_088A9ED4:;
    v1 = D_08B2AE8E - (-20850);
    v0 = LD_U16(v1-20850);
    cnd_ = v0 != 0;
    v0 = 3658;
    if (cnd_) { goto L_088A9EE8; }
    goto L_088A9EE4;
L_088A9EE4:;
    ST16(v1-20850, v0);
    goto L_088A9EE8;
L_088A9EE8:;
    s2 = D_08B2BB9C - (-17508);
    func_088FFE0C();
    goto L_088A9EF0;
L_088A9EF0:;
    v0 = LD32(s2-17508);
    cnd_ = v0 == 0;
    a0 = D_08B2AED0 - (-20784);
    if (cnd_) { goto L_088AA06C; }
    goto L_088A9EFC;
L_088A9EFC:;
    v0 = D_08B2BB80 - (-17536);
    v1 = LD32(v0-17536);
    ST32(a0-20784, v1);
    goto L_088A9F08;
L_088A9F08:;
    s0 = LD32(a0-20784);
    s1 = s1 - 20788;
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A9F20;
L_088A9F20:;
    a2 = v0 + 0;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_088A9F60; }
    goto L_088A9F2C;
L_088A9F2C:;
    a1 = 999;
    a0 = (u32)-1;
    goto L_088A9F34;
L_088A9F34:;
    v1 = v1 - 1;
    ST32(v0, 0);
    ST32(v0+4, a1);
    ST32(v0+24, 0);
    ST32(v0+28, 0);
    ST32(v0+32, 0);
    ST32(v0+36, 0);
    ST32(v0+40, 0);
    ST32(v0+44, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 48;
    if (cnd_) { goto L_088A9F34; }
    goto L_088A9F60;
L_088A9F60:;
    v0 = D_08B2AE88 - (-20856);
    v1 = LD32(v0-20856);
    cnd_ = v1 == 0;
    ST32(s1, a2);
    if (cnd_) { goto L_088AA054; }
    goto L_088A9F70;
L_088A9F70:;
    v0 = D_08B1602C - (24620);
    ST8(v0+24620, 0);
    goto L_088A9F78;
L_088A9F78:;
    v0 = D_08B16034 - (24628);
    a0 = LD_U8(v0+24628);
    v0 = D_08B2AEA8 - (-20824);
    ST32(v0-20824, 0);
    v1 = D_08B2AEAC - (-20820);
    v0 = D_08B2AEB0 - (-20816);
    ST32(v1-20820, 0);
    v1 = D_08B2AEBC - (-20804);
    ST32(v0-20816, 0);
    v0 = D_08B2AEC0 - (-20800);
    ST32(v1-20804, 0);
    v1 = D_08B2AEC4 - (-20796);
    ST32(v0-20800, 0);
    v0 = D_08B2AEC8 - (-20792);
    ST32(v1-20796, 0);
    ST32(v0-20792, 0);
    func_088AB4F4(a0);
    goto L_088A9FBC;
L_088A9FBC:;
    v0 = D_08B16030 - (24624);
    a0 = LD32(v0+24624);
    func_088AB49C(a0);
    goto L_088A9FC8;
L_088A9FC8:;
    v0 = LD32(s2-17508);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A9FE8; }
    goto L_088A9FD4;
L_088A9FD4:;
    v0 = D_08B2BB84 - (-17532);
    v1 = LD32(v0-17532);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A9FFC; }
    goto L_088A9FE4;
L_088A9FE4:;
    goto L_088A9FE8;
L_088A9FE8:;
    sp = sp + 32;
    return;
L_088A9FFC:;
    v0 = func_088AAEE4();
    goto L_088AA004;
L_088AA004:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AA00C;
L_088AA00C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088A9FE4; }
    goto L_088AA014;
L_088AA014:;
    a0 = v0 + 0;
    func_088AAF04(a0);
    goto L_088AA01C;
L_088AA01C:;
    s0 = s1 + 20;
    ST32(sp, 0);
    ST8(sp+4, 0);
    ST8(sp+5, 0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA030;
L_088AA030:;
    a2 = v0 + 0;
    a0 = sp + 0;
    a3 = s0 + 0;
    a1 = 0 + 0;
    func_08A62AC4(a0, a2, a3, 0);
    goto L_088AA044;
L_088AA044:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA04C;
L_088AA04C:;
    goto L_088A9FE8;
L_088AA054:;
    { rv_t r_ = func_088AA078(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AA05C;
L_088AA05C:;
    v1 = 1;
    v0 = D_08B1602C - (24620);
    ST8(v0+24620, v1);
    goto L_088A9F78;
L_088AA06C:;
    v0 = 1;
    ST32(a0-20784, v0);
    goto L_088A9F08;
}

/* 088AA078 */
rv_t func_088AA078(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088AA078:;
    sp = sp - 48;
    s0 = D_08B2AE88 - (-20856);
    v0 = LD32(s0-20856);
    s1 = D_08B2AE8C - (-20852);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AA0B0; }
    goto L_088AA098;
L_088AA098:;
    v0 = LD32(s0-20856);
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088AA0B0:;
    v0 = D_08B2AED0 - (-20784);
    a0 = LD32(v0-20784);
    v0 = func_089003A8(a0);
    goto L_088AA0BC;
L_088AA0BC:;
    ST8(sp+4, 0);
    a0 = v0 + 0;
    a2 = s1 - 20852;
    ST8(sp+5, 0);
    v1 = LD32(sp+4);
    ST32(sp, 0);
    ST32(sp+20, v1);
    ST32(sp+16, 0);
    v1 = LD32(v0);
    ST32(s0-20856, v0);
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AA0F0;
L_088AA0F0:;
    v1 = LD_U16(s1-20852);
    cnd_ = v1 != 0;
    v0 = D_08B1602C - (24620);
    if (cnd_) { goto L_088AA10C; }
    goto L_088AA0FC;
L_088AA0FC:;
    v0 = LD32(s0-20856);
    v1 = LD_U16(v0+16);
    ST16(s1-20852, v1);
    v0 = D_08B1602C - (24620);
    goto L_088AA10C;
L_088AA10C:;
    ST8(v0+24620, 0);
    goto L_088AA098;
}

/* 088AA114 */
void func_088AA114(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AA114:;
    sp = sp - 32;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    s4 = D_08B2AECC - (-20788);
    if (cnd_) { goto L_088AA1C0; }
    goto L_088AA144;
L_088AA144:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v0 = LD32(s4-20788);
    if (cnd_) { goto L_088AA1C4; }
    goto L_088AA154;
L_088AA154:;
    t3 = D_08B2AEA4 - (-20828);
    v1 = D_08B285B0 - (-31312);
    t0 = LD32(v1-31312);
    v0 = LD32(t3-20828);
    v0 = v0 < t0;
    cnd_ = v0 == 0;
    v0 = LD32(s4-20788);
    if (cnd_) { goto L_088AA1C4; }
    goto L_088AA170;
L_088AA170:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    t2 = a2 + 23232;
    a0 = LD32(t2+4);
    v0 = (u32)((s32)v1 >> 16);
    a1 = D_08B2AE9C - (-20836);
    v1 = v1 << 16;
    t1 = LD32(a1-20836);
    v1 = v1 + v0;
    v1 = v1 + a0;
    a0 = a0 + v1;
    a3 = v1 >> 1;
    t0 = t0 + 5000;
    v0 = a1 - 20836;
    ST32(v0+4, t1);
    ST32(t2+4, a0);
    ST32(a2+23232, v1);
    ST32(a1-20836, a3);
    ST32(t3-20828, t0);
    s4 = D_08B2AECC - (-20788);
    goto L_088AA1C0;
L_088AA1C0:;
    v0 = LD32(s4-20788);
    goto L_088AA1C4;
L_088AA1C4:;
    cnd_ = v0 == 0;
    v0 = D_08B285B0 - (-31312);
    if (cnd_) { goto L_088AA220; }
    goto L_088AA1CC;
L_088AA1CC:;
    s5 = D_08B2AED0 - (-20784);
    v1 = LD32(s5-20784);
    s3 = LD32(v0-31312);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088AA220; }
    goto L_088AA1E0;
L_088AA1E0:;
    s1 = 0 + 0;
    v0 = LD32(s4-20788);
    goto L_088AA1E8;
L_088AA1E8:;
    s2 = s2 + 1;
    s0 = v0 + s1;
    a0 = LD32(s0);
    cnd_ = a0 == 0;
    s1 = s1 + 48;
    if (cnd_) { goto L_088AA210; }
    goto L_088AA1FC;
L_088AA1FC:;
    v0 = LD32(s0+28);
    v0 = s3 - v0;
    v0 = v0 < 0x7d1u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AA2B0; }
    goto L_088AA210;
L_088AA210:;
    v0 = LD32(s5-20784);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(s4-20788);
    if (cnd_) { goto L_088AA1E8; }
    goto L_088AA220;
L_088AA220:;
    s0 = D_08B2AED8 - (-20776);
    func_088A1260();
    goto L_088AA228;
L_088AA228:;
    func_088A1644(0, 0, 0, 0, 0, 0, 0);
    goto L_088AA230;
L_088AA230:;
    func_08A7C6AC();
    goto L_088AA238;
L_088AA238:;
    v1 = LD32(s0-20776);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_088AA250; }
    goto L_088AA248;
L_088AA248:;
    cnd_ = v1 == v0;
    v0 = D_08B2AE8E - (-20850);
    if (cnd_) { goto L_088AA294; }
    goto L_088AA250;
L_088AA250:;
    func_088AA2C0(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AA258;
L_088AA258:;
    func_088FFE1C();
    goto L_088AA260;
L_088AA260:;
    func_08A62B20();
    goto L_088AA268;
L_088AA268:;
    func_088AB294();
    goto L_088AA270;
L_088AA270:;
    sp = sp + 32;
    return;
L_088AA294:;
    a1 = LD_U16(v0-20850);
    a0 = D_08B2AEE8 - (-20760);
    a0 = a0 - 20760;
    func_088AAE78(a0, a1);
    goto L_088AA2A4;
L_088AA2A4:;
    v0 = 3;
    ST32(s0-20776, v0);
    goto L_088AA250;
L_088AA2B0:;
    func_088A3E50(a0, t1, t2, t3);
    goto L_088AA2B8;
L_088AA2B8:;
    ST32(s0+28, s3);
    goto L_088AA210;
}

/* 088AA2C0 */
void func_088AA2C0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA2C0:;
    v0 = D_08B2AE88 - (-20856);
    v1 = LD32(v0-20856);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088AA2E4; }
    goto L_088AA2D8;
L_088AA2D8:;
    goto L_088AA2DC;
L_088AA2DC:;
    sp = sp + 16;
    return;
L_088AA2E4:;
    func_088A92C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088AA2EC;
L_088AA2EC:;
    goto L_088AA2DC;
}

/* 088AA2F4 */
void func_088AA2F4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA2F4:;
    v0 = D_08B2AE88 - (-20856);
    v1 = LD32(v0-20856);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088AA318; }
    goto L_088AA30C;
L_088AA30C:;
    goto L_088AA310;
L_088AA310:;
    sp = sp + 16;
    return;
L_088AA318:;
    func_088A92C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088AA320;
L_088AA320:;
    goto L_088AA310;
}

/* 088AA328 */
void func_088AA328(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA328:;
    sp = sp - 16;
    s0 = D_08B2AE88 - (-20856);
    a0 = D_08B2AEE8 - (-20760);
    v0 = D_08B2AEF4 - (-20748);
    a1 = a0 - 20760;
    v1 = D_08B2AEF0 - (-20752);
    a2 = LD32(s0-20856);
    ST8(v0-20748, 0);
    v0 = D_08B2AED8 - (-20776);
    ST32(v1-20752, 0);
    ST32(v0-20776, 0);
    ST32(a0-20760, 0);
    cnd_ = a2 == 0;
    ST32(a1+4, 0);
    if (cnd_) { goto L_088AA388; }
    goto L_088AA36C;
L_088AA36C:;
    v0 = D_08B1602C - (24620);
    v1 = LD_U8(v0+24620);
    cnd_ = v1 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_088AA428; }
    goto L_088AA37C;
L_088AA37C:;
    a0 = a2 + 0;
    func_088A87C8(a0, a3, t0, t1, t2, t3);
    goto L_088AA384;
L_088AA384:;
    ST32(s0-20856, 0);
    goto L_088AA388;
L_088AA388:;
    v0 = D_08B2BB9C - (-17508);
    goto L_088AA38C;
L_088AA38C:;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    s0 = D_08B2AECC - (-20788);
    if (cnd_) { goto L_088AA3A8; }
    goto L_088AA398;
L_088AA398:;
    v0 = D_08B2BB84 - (-17532);
    v1 = LD32(v0-17532);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AA410; }
    goto L_088AA3A8;
L_088AA3A8:;
    a0 = LD32(s0-20788);
    goto L_088AA3AC;
L_088AA3AC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AA400; }
    goto L_088AA3B4;
L_088AA3B4:;
    s1 = D_08B2AEA8 - (-20824);
    a0 = LD32(s1-20824);
    goto L_088AA3BC;
L_088AA3BC:;
    v0 = D_08B2AED0 - (-20784);
    v1 = D_08B2AEAC - (-20820);
    ST32(s0-20788, 0);
    ST32(v0-20784, 0);
    cnd_ = a0 != 0;
    ST32(v1-20820, 0);
    if (cnd_) { goto L_088AA3F0; }
    goto L_088AA3D4;
L_088AA3D4:;
    ST32(s1-20824, 0);
    func_088FFE14();
    goto L_088AA3DC;
L_088AA3DC:;
    sp = sp + 16;
    return;
L_088AA3F0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA3F8;
L_088AA3F8:;
    goto L_088AA3D4;
L_088AA400:;
    s1 = D_08B2AEA8 - (-20824);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA408;
L_088AA408:;
    a0 = LD32(s1-20824);
    goto L_088AA3BC;
L_088AA410:;
    s0 = D_08B2AECC - (-20788);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA418;
L_088AA418:;
    a0 = v0 + 0;
    func_08A62B04(a0);
    goto L_088AA420;
L_088AA420:;
    a0 = LD32(s0-20788);
    goto L_088AA3AC;
L_088AA428:;
    a1 = 1;
    a2 = 0 + 0;
    func_088A8A14(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088AA434;
L_088AA434:;
    v0 = D_08B2BB9C - (-17508);
    goto L_088AA38C;
}

/* 088AA43C */
void func_088AA43C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA43C:;
    a0 = D_08AD787C - (30844);
    a1 = D_08B16034 - (24628);
    sp = sp - 16;
    a0 = a0 + 30844;
    a1 = a1 + 24628;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AA460;
L_088AA460:;
    a3 = 0x7fff0000u;
    a0 = D_08AD78A4 - (30884);
    a1 = D_08B16030 - (24624);
    a0 = a0 + 30884;
    a1 = a1 + 24624;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 0 + 0;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_088AA488;
L_088AA488:;
    sp = sp + 16;
    return;
}

/* 088AA494 */
void func_088AA494(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA494:;
    sp = sp - 16;
    t3 = D_08B25AC0 - (23232);
    t5 = t3 + 23232;
    t2 = D_08B2AE9C - (-20836);
    s1 = D_08B2AE88 - (-20856);
    s0 = a0 & 0xff;
    a0 = s0 + 0;
    s2 = 1;
    v1 = LD32(t3+23232);
    a3 = LD32(t5+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a3;
    v0 = (u32)((s32)v1 >> 16);
    a1 = v1 << 16;
    a3 = a3 + v1;
    a1 = a1 + v0;
    a1 = a1 + a3;
    t0 = (u32)((s32)a1 >> 16);
    a2 = a1 << 16;
    a3 = a3 + a1;
    a2 = a2 + t0;
    a2 = a2 + a3;
    v0 = D_08B285B0 - (-31312);
    t1 = LD32(v0-31312);
    a3 = a3 + a2;
    t4 = a2 >> 1;
    v1 = v1 >> 1;
    t0 = t2 - 20836;
    a1 = a1 >> 1;
    v0 = D_08B2AE98 - (-20840);
    ST32(v0-20840, v1);
    t1 = t1 + 5000;
    v0 = D_08B2AEA4 - (-20828);
    ST32(t2-20836, a1);
    ST32(t5+4, a3);
    ST32(t0+4, t4);
    ST32(v0-20828, t1);
    ST32(t3+23232, a2);
    func_088FFE24();
    goto L_088AA548;
L_088AA548:;
    v0 = LD32(s1-20856);
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088AA570; }
    goto L_088AA554;
L_088AA554:;
    v0 = a2 + 0;
    sp = sp + 16;
    return;
L_088AA570:;
    v0 = func_088A1268();
    goto L_088AA578;
L_088AA578:;
    cnd_ = v0 == 0;
    a0 = s0 ^ 0x1;
    if (cnd_) { goto L_088AA5AC; }
    goto L_088AA580;
L_088AA580:;
    v1 = LD32(s1-20856);
    v0 = 1;
    a1 = 1;
    a2 = s2 + 0;
    a0 = v1 + 0;
    cnd_ = s0 != 0;
    ST8(v1+21, v0);
    if (cnd_) { goto L_088AA554; }
    goto L_088AA59C;
L_088AA59C:;
    func_088A929C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AA5A4;
L_088AA5A4:;
    a2 = s2 + 0;
    goto L_088AA554;
L_088AA5AC:;
    v1 = LD32(s1-20856);
    v0 = D_08B2AE8C - (-20852);
    a2 = LD_U16(v0-20852);
    a1 = LD32(v1+4);
    v0 = func_088A14A4(a0, a1, a2);
    goto L_088AA5C0;
L_088AA5C0:;
    s2 = v0 + 0;
    goto L_088AA580;
}

/* 088AA5C8 */
void func_088AA5C8(void)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA5C8:;
    sp = sp - 16;
    func_088FFE2C();
    goto L_088AA5D8;
L_088AA5D8:;
    v0 = D_08B2AE88 - (-20856);
    v0 = LD32(v0-20856);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AA5FC; }
    goto L_088AA5E8;
L_088AA5E8:;
    goto L_088AA5EC;
L_088AA5EC:;
    v0 = D_08B2AED4 - (-20780);
    ST8(v0-20780, 0);
    sp = sp + 16;
    return;
L_088AA5FC:;
    ST8(v0+21, 0);
    func_088A15F4(0, 0, 0, 0, 0, 0, 0);
    goto L_088AA604;
L_088AA604:;
    goto L_088AA5EC;
}

/* 088AA60C */
void func_088AA60C(u32 a0)
{
    u32 v0 = 0;
L_088AA60C:;
    v0 = D_08B2AED4 - (-20780);
    ST8(v0-20780, a0);
    return;
}

/* 088AA618 */
u64 func_088AA618(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA618:;
    sp = sp - 16;
    s0 = a1 + 0;
    { u64 r_ = func_088AB68C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA62C;
L_088AA62C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AA648; }
    goto L_088AA634;
L_088AA634:;
    v0 = LD32(v0);
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AA654; }
    goto L_088AA644;
L_088AA644:;
    goto L_088AA648;
L_088AA648:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AA654:;
    func_088AB23C(a0, a1);
    goto L_088AA65C;
L_088AA65C:;
    goto L_088AA648;
}

/* 088AA664 */
void func_088AA664(void)
{
L_088AA664:;
    return;
}

/* 088AA66C */
u32 func_088AA66C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088AA66C:;
    v1 = D_08B2AECC - (-20788);
    a1 = LD32(v1-20788);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 4;
    a1 = a1 + v0;
    v0 = LD32(a1+4);
    return v0;
}

/* 088AA68C */
rv_t func_088AA68C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA68C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088AA078(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AA6A0;
L_088AA6A0:;
    a3 = RS_FADDR(func_088AAE08, 0x088AAE08u) - (-20984);
    t0 = RS_FADDR(func_088AAE10, 0x088AAE10u) - (-20976);
    a1 = s0 + 0;
    a3 = a3 - 20984;
    t0 = t0 - 20976;
    a2 = 1;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088AA6C8; }
    goto L_088AA6C0;
L_088AA6C0:;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A7C310(a0, a1, a2, a3, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA6C8;
L_088AA6C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AA6D8 */
void func_088AA6D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t5 = 0, t6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AA6D8:;
    sp = sp - 32;
    v0 = D_08B2AE88 - (-20856);
    a1 = LD32(a0+4);
    t2 = LD32(v0-20856);
    a0 = LD32(a0);
    ST32(sp+4, a1);
    cnd_ = t2 == 0;
    ST32(sp, a0);
    if (cnd_) { goto L_088AA73C; }
    goto L_088AA6FC;
L_088AA6FC:;
    v0 = D_08B2AEF4 - (-20748);
    v1 = LD_U8(v0-20748);
    t5 = D_08B2AEE8 - (-20760);
    a3 = RS_FADDR(func_088AB120, 0x088AB120u) - (-20192);
    t0 = RS_FADDR(func_088AB128, 0x088AB128u) - (-20184);
    t6 = t5 - 20760;
    a3 = a3 - 20192;
    t0 = t0 - 20184;
    a2 = 0 + 0;
    cnd_ = v1 != 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088AA748; }
    goto L_088AA728;
L_088AA728:;
    v1 = 2;
    v0 = D_08B2AED8 - (-20776);
    ST32(t5-20760, a0);
    ST32(t6+4, a1);
    ST32(v0-20776, v1);
    goto L_088AA73C;
L_088AA73C:;
    goto L_088AA740;
L_088AA740:;
    sp = sp + 32;
    return;
L_088AA748:;
    ST32(t5-20760, a0);
    v0 = D_08B2AEF0 - (-20752);
    v1 = 1;
    ST32(t6+4, a1);
    a1 = LD32(v0-20752);
    a0 = LD32(t2+4);
    v0 = D_08B2AED8 - (-20776);
    ST32(v0-20776, v1);
    { u64 r_ = func_08A7C310(a0, a1, a2, a3, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA76C;
L_088AA76C:;
    goto L_088AA740;
}

/* 088AA774 */
void func_088AA774(void)
{
L_088AA774:;
    return;
}

/* 088AA77C */
void func_088AA77C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA77C:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AA7B4; }
    goto L_088AA78C;
L_088AA78C:;
    v0 = D_08B2AE88 - (-20856);
    v1 = LD32(v0-20856);
    a1 = 1;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088AA7AC; }
    goto L_088AA7A0;
L_088AA7A0:;
    goto L_088AA7A4;
L_088AA7A4:;
    sp = sp + 16;
    return;
L_088AA7AC:;
    func_088A929C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088AA7B4;
L_088AA7B4:;
    v0 = D_08B2AEDC - (-20772);
    a0 = 64;
    ST32(v0-20772, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AA7C4;
L_088AA7C4:;
    v1 = D_08B2AEE0 - (-20768);
    ST32(v1-20768, v0);
    f0 = func_088FFE34();
    goto L_088AA7D0;
L_088AA7D0:;
    goto L_088AA7A4;
}

/* 088AA7D8 */
u64 func_088AA7D8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AA7D8:;
    sp = sp - 32;
    s2 = D_08B2AEDC - (-20772);
    v0 = LD32(s2-20772);
    s3 = D_08B2AEE0 - (-20768);
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AA830; }
    goto L_088AA804;
L_088AA804:;
    v1 = LD32(s3-20768);
    goto L_088AA808;
L_088AA808:;
    v0 = s1 << 2;
    s1 = s1 + 1;
    v0 = v0 + v1;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AA870; }
    goto L_088AA820;
L_088AA820:;
    v0 = LD32(s2-20772);
    goto L_088AA824;
L_088AA824:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(s3-20768);
    if (cnd_) { goto L_088AA808; }
    goto L_088AA830;
L_088AA830:;
    a0 = LD32(s3-20768);
    cnd_ = a0 != 0;
    ST32(s2-20772, 0);
    if (cnd_) { goto L_088AA860; }
    goto L_088AA83C;
L_088AA83C:;
    goto L_088AA840;
L_088AA840:;
    v0 = D_08B2AEE0 - (-20768);
    ST32(v0-20768, 0);
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088AA860:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA868;
L_088AA868:;
    goto L_088AA840;
L_088AA870:;
    func_088AB62C(a0, t1, t2, t3);
    goto L_088AA878;
L_088AA878:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AA880;
L_088AA880:;
    v0 = LD32(s2-20772);
    goto L_088AA824;
}

/* 088AA888 */
u64 func_088AA888(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AA888:;
    sp = sp - 16;
    v0 = D_08B2AECC - (-20788);
    a1 = a0 + 0;
    v1 = LD32(v0-20788);
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AA8B4; }
    goto L_088AA8A8;
L_088AA8A8:;
    goto L_088AA8AC;
L_088AA8AC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AA8B4:;
    func_088AB23C(a0, a1);
    goto L_088AA8BC;
L_088AA8BC:;
    goto L_088AA8AC;
}

/* 088AA8C4 */
u32 func_088AA8C4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_088AA8C4:;
    v0 = D_08B2AECC - (-20788);
    v1 = LD32(v0-20788);
    cnd_ = v1 == 0;
    a0 = 999;
    if (cnd_) { goto L_088AA8E0; }
    goto L_088AA8D4;
L_088AA8D4:;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(v1+4); goto L_088AA8E0; }
    goto L_088AA8E0;
L_088AA8E0:;
    v0 = a0 + 0;
    return v0;
}

/* 088AA8E8 */
float func_088AA8E8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_088AA8E8:;
    v0 = D_08B2AECC - (-20788);
    v1 = LD32(v0-20788);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AA998; }
    goto L_088AA8F8;
L_088AA8F8:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AA998; }
    goto L_088AA904;
L_088AA904:;
    a1 = LD32(v1+44);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(v1+40); goto L_088AA97C; }
    goto L_088AA910;
L_088AA910:;
    a0 = LD32(v1+40);
    f0 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088AA960; }
    goto L_088AA920;
L_088AA920:;
    a0 = a1 + a0;
    f0 = BITSF(a0);
    v0 = D_08AEC4A0 - (-15200);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15200));
    cnd_ = (s32)a0 < 0;
    f0 = f2 * f0;
    if (cnd_) { goto L_088AA944; }
    goto L_088AA93C;
L_088AA93C:;
    f0 = f0 / f1;
    return f0;
L_088AA944:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_088AA93C;
L_088AA960:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_088AA920;
L_088AA97C:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    v0 = D_08AEC4A0 - (-15200);
    if (cnd_) { goto L_088AA990; }
    goto L_088AA988;
L_088AA988:;
    f0 = BITSF(LD32(v0-15200));
    return f0;
L_088AA990:;
    return f0;
L_088AA998:;
    f0 = BITSF(0);
    goto L_088AA990;
}

/* 088AA9A4 */
rv_t func_088AA9A4(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_088AA9A4:;
    sp = sp - 80;
    v0 = D_08B2AECC - (-20788);
    v1 = LD32(v0-20788);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088AAABC; }
    goto L_088AA9D8;
L_088AA9D8:;
    v0 = D_08B28588 - (-31352);
    v1 = D_08B2AEE4 - (-20764);
    f20 = BITSF(LD32(v0-31352));
    f0 = BITSF(LD32(v1-20764));
    v0 = D_08AEC4A4 - (-15196);
    f1 = BITSF(LD32(v0-15196));
    f0 = f20 - f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088AAB50; }
    goto L_088AAA04;
L_088AAA04:;
    s3 = D_08B2AEDC - (-20772);
    v0 = LD32(s3-20772);
    goto L_088AAA0C;
L_088AAA0C:;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088AAAA0; }
    goto L_088AAA14;
L_088AAA14:;
    v0 = D_08AEC4A8 - (-15192);
    f21 = BITSF(LD32(v0-15192));
    s4 = D_08B2AEE0 - (-20768);
    a2 = LD32(s4-20768);
    goto L_088AAA24;
L_088AAA24:;
    s1 = s2 << 2;
    a0 = s2 + 0;
    v0 = s1 + a2;
    s0 = LD32(v0);
    a1 = sp + 16;
    f0 = BITSF(LD32(s0+12));
    f0 = f20 - f0;
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    t1 = s0 + 42;
    if (cnd_) { goto L_088AAB00; }
    goto L_088AAA50;
L_088AAA50:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AAA6C; }
    goto L_088AAA58;
L_088AAA58:;
    func_088AB62C(a0, t1, t2, t3);
    goto L_088AAA60;
L_088AAA60:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AAA68;
L_088AAA68:;
    a2 = LD32(s4-20768);
    goto L_088AAA6C;
L_088AAA6C:;
    v1 = LD32(s3-20772);
    a0 = s1 + a2;
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a2;
    ST32(s3-20772, v1);
    v1 = LD32(v0);
    ST32(a0, v1);
    v0 = LD32(s3-20772);
    goto L_088AAA90;
L_088AAA90:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a2 = LD32(s4-20768);
    if (cnd_) { goto L_088AAA24; }
    goto L_088AAAA0;
L_088AAAA0:;
    s0 = LD32(s3-20772);
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    v1 = LD32(s3-20772);
    if (cnd_) { goto L_088AAAE0; }
    goto L_088AAAB0;
L_088AAAB0:;
    v0 = D_08B2BBF8 - (-17416);
    ST32(v0-17416, v1);
    goto L_088AAABC;
L_088AAABC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088AAAE0:;
    a0 = s0 + 0;
    goto L_088AAAE4;
L_088AAAE4:;
    s0 = s0 + 1;
    func_088AE354(a0);
    goto L_088AAAEC;
L_088AAAEC:;
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AAAE4; }
    goto L_088AAAF8;
L_088AAAF8:;
    v1 = LD32(s3-20772);
    goto L_088AAAB0;
L_088AAB00:;
    v0 = LD32(s0);
    ST32(sp+16, v0);
    v1 = LD32(s0+4);
    ST32(sp+20, v1);
    a2 = LD_U16(s0+8);
    a3 = LD_U8(s0+40);
    t0 = LD_U8(s0+41);
    t2 = LD32(s0+16);
    t3 = LD32(s0+20);
    t5 = LD32(s0+36);
    v0 = LD32(s0+24);
    v1 = LD32(s0+28);
    t4 = LD32(s0+32);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, t4);
    ST32(sp+12, t5);
    func_088AE2E8(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_088AAB48;
L_088AAB48:;
    v0 = LD32(s3-20772);
    goto L_088AAA90;
L_088AAB50:;
    s3 = D_08B2AEDC - (-20772);
    f0 = func_088FFE34();
    goto L_088AAB58;
L_088AAB58:;
    v0 = LD32(s3-20772);
    goto L_088AAA0C;
}

/* 088AAB60 */
void func_088AAB60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088AAB60:;
    v0 = D_08B2AEB4 - (-20812);
    v1 = LD32(v0-20812);
    v0 = D_08B2AEB8 - (-20808);
    ST32(a0, v1);
    v1 = LD32(v0-20808);
    ST32(a1, v1);
    return;
}

/* 088AAB7C */
void func_088AAB7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088AAB7C:;
    v0 = D_08B2AEBC - (-20804);
    v1 = LD32(v0-20804);
    v0 = D_08B2AEC0 - (-20800);
    ST32(a0, v1);
    v1 = LD32(v0-20800);
    ST32(a1, v1);
    return;
}

/* 088AAB98 */
void func_088AAB98(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AAB98:;
    sp = sp - 16;
    func_08900280();
    goto L_088AABA8;
L_088AABA8:;
    sp = sp + 16;
    return;
}

/* 088AABB4 */
void func_088AABB4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088AABB4:;
    sp = sp - 64;
    v0 = D_08B2BB84 - (-17532);
    s6 = a3 + 0;
    s5 = a2 + 0;
    s4 = a1 & 0xffff;
    s2 = a0 + 0;
    a0 = s4 + 0;
    s1 = D_08B2AECC - (-20788);
    s7 = LD32(v0-17532);
    v0 = func_088ACEB0(a0);
    goto L_088AAC00;
L_088AAC00:;
    s0 = v0 << 1;
    a0 = LD32(s1-20788);
    s0 = s0 + v0;
    s0 = s0 << 4;
    a0 = a0 + s0;
    a1 = s2 + 0;
    s3 = v0 + 0;
    func_088AB6E0(a0, a1);
    goto L_088AAC20;
L_088AAC20:;
    v0 = LD32(s1-20788);
    a0 = 0 + 0;
    v0 = v0 + s0;
    ST32(v0+4, s5);
    v1 = v0 + 8;
    goto L_088AAC34;
L_088AAC34:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, s5);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AAC34; }
    goto L_088AAC48;
L_088AAC48:;
    cnd_ = s4 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088AACE0; }
    goto L_088AAC50;
L_088AAC50:;
    s5 = 11;
    goto L_088AAC54;
L_088AAC54:;
    a0 = s3 + 0;
    v0 = func_088ACE1C(a0);
    goto L_088AAC5C;
L_088AAC5C:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    s0 = v0 + 0;
    func_088AD138(a0, a1, 0, 0, 0);
    goto L_088AAC6C;
L_088AAC6C:;
    a3 = 0 + 0;
    a0 = 94;
    a1 = 4;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AAC80;
L_088AAC80:;
    v1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    ST32(v1, s0);
    a2 = 1;
    s1 = s1 + 1;
    v1 = LD32(v0+28);
    ST32(v0, s5);
    v1 = v1 | 0x1;
    ST32(v0+28, v1);
    ST32(v0+4, s0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AACB0;
L_088AACB0:;
    v0 = LD32(s2);
    a1 = LD_U16(s2+8);
    v1 = LD32(s2+4);
    a2 = s0 + 0;
    a0 = sp + 0;
    a3 = s6 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_08A62AC4(a0, a2, a3, 0);
    goto L_088AACD4;
L_088AACD4:;
    v0 = s1 < s4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AAC54; }
    goto L_088AACE0;
L_088AACE0:;
    cnd_ = s7 == 0;
    v0 = D_08B2BB7C - (-17540);
    if (cnd_) { goto L_088AAD24; }
    goto L_088AACE8;
L_088AACE8:;
    a0 = LD32(v0-17540);
    v1 = s4 + s7;
    cnd_ = v1 == a0;
    if (cnd_) { goto L_088AAD24; }
    goto L_088AACF8;
L_088AACF8:;
    goto L_088AACFC;
L_088AACFC:;
    sp = sp + 64;
    return;
L_088AAD24:;
    func_088A1678(0, 0, 0, 0, 0, 0, 0);
    goto L_088AAD2C;
L_088AAD2C:;
    goto L_088AACFC;
}

/* 088AAD34 */
void func_088AAD34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AAD34:;
    sp = sp - 32;
    v0 = func_088AB684(a0);
    goto L_088AAD54;
L_088AAD54:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_088AAD9C; }
    goto L_088AAD5C;
L_088AAD5C:;
    v0 = D_08B2AECC - (-20788);
    v1 = LD32(v0-20788);
    v0 = 0xaaaa0000u;
    v0 = v0 | 0xaaab;
    v1 = s3 - v1;
    v1 = (u32)((s32)v1 >> 4);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s4 = D_08B2BB84 - (-17532);
    a0 = LD32(s4-17532);
    s2 = lo;
    cnd_ = a0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088AADBC; }
    goto L_088AAD8C;
L_088AAD8C:;
    a0 = s2 + 0;
    func_088ACF30(a0, 0);
    goto L_088AAD94;
L_088AAD94:;
    a0 = s3 + 0;
    func_088AB6EC(a0);
    goto L_088AAD9C;
L_088AAD9C:;
    sp = sp + 32;
    return;
L_088AADBC:;
    a0 = s1 + 0;
    v0 = func_088AD218(a0);
    goto L_088AADC4;
L_088AADC4:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    s0 = v0 + 0;
    v0 = func_088AD374(a0, a1);
    goto L_088AADD4;
L_088AADD4:;
    s1 = s1 + 1;
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AADF8; }
    goto L_088AADE0;
L_088AADE0:;
    v0 = LD32(s4-17532);
    goto L_088AADE4;
L_088AADE4:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AADBC; }
    goto L_088AADF0;
L_088AADF0:;
    goto L_088AAD8C;
L_088AADF8:;
    func_08A62B04(a0);
    goto L_088AAE00;
L_088AAE00:;
    v0 = LD32(s4-17532);
    goto L_088AADE4;
}

/* 088AAE08 */
rv_t func_088AAE08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088AAE08:;
    return (rv_t){ v0, v1, f0 };
}

/* 088AAE10 */
rv_t func_088AAE10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088AAE10:;
    return (rv_t){ v0, v1, f0 };
}

/* 088AAE18 */
void func_088AAE18(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AAE18:;
    sp = sp - 32;
    a1 = a1 & 0xffff;
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    a0 = sp + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    func_088FFEE4(a0, a1, a2);
    goto L_088AAE3C;
L_088AAE3C:;
    sp = sp + 32;
    return;
}

/* 088AAE48 */
float func_088AAE48(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AAE48:;
    sp = sp - 32;
    a1 = a1 & 0xffff;
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    a0 = sp + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    f0 = func_0890006C(a0, a1, a2);
    goto L_088AAE6C;
L_088AAE6C:;
    sp = sp + 32;
    return f0;
}

/* 088AAE78 */
void func_088AAE78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AAE78:;
    sp = sp - 32;
    v1 = a0 + 0;
    v0 = D_08B2AE88 - (-20856);
    t3 = LD32(a0+4);
    t2 = LD32(v1);
    a0 = LD32(v0-20856);
    a1 = a1 & 0xffff;
    a2 = a1 + 0;
    a3 = 0 + 0;
    a1 = sp + 0;
    t0 = 0 + 0;
    t1 = 1;
    ST32(sp, t2);
    ST32(sp+4, t3);
    { rv_t r_ = func_088A8AA0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AAEB8;
L_088AAEB8:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_088AAEC4; }
    goto L_088AAEC0;
L_088AAEC0:;
    v1 = LD32(v0+20);
    goto L_088AAEC4;
L_088AAEC4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AAEDC; }
    goto L_088AAECC;
L_088AAECC:;
    v0 = D_08B2BB71 - (-17551);
    v1 = D_08B2BB72 - (-17550);
    ST8(v0-17551, 0);
    ST8(v1-17550, 0);
    goto L_088AAEDC;
L_088AAEDC:;
    sp = sp + 32;
    return;
}

/* 088AAEE4 */
u32 func_088AAEE4(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AAEE4:;
    sp = sp - 16;
    v0 = func_08A62998();
    goto L_088AAEF4;
L_088AAEF4:;
    v0 = v0 + 20;
    sp = sp + 16;
    return v0;
}

/* 088AAF04 */
void func_088AAF04(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AAF04:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A62930();
    goto L_088AAF18;
L_088AAF18:;
    v1 = D_08B2AE94 - (-20844);
    a0 = D_08B2AE98 - (-20840);
    a2 = LD32(v1-20844);
    v1 = LD32(a0-20840);
    ST16(s0, v0);
    v0 = 1;
    a0 = D_08B2AE9C - (-20836);
    ST32(s0+4, a2);
    a1 = 4;
    a0 = a0 - 20836;
    ST32(s0+8, v1);
    ST16(s0+2, v0);
    v0 = func_08832688(a0, a1);
    goto L_088AAF4C;
L_088AAF4C:;
    ST32(s0+12, v0);
    v0 = func_08A62998();
    goto L_088AAF54;
L_088AAF54:;
    ST32(s0+16, v0);
    s0 = s0 + 20;
    a0 = s0 + 0;
    func_08A629A0(a0);
    goto L_088AAF64;
L_088AAF64:;
    sp = sp + 16;
    return;
}

/* 088AAF74 */
void func_088AAF74(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AAF74:;
    sp = sp - 16;
    v0 = D_08B2BB71 - (-17551);
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    ST8(v0-17551, 0);
    if (cnd_) { goto L_088AAFD4; }
    goto L_088AAF94;
L_088AAF94:;
    v0 = 4;
    cnd_ = a3 == v0;
    v1 = 10;
    if (cnd_) { goto L_088AAFCC; }
    goto L_088AAFA0;
L_088AAFA0:;
    v0 = D_08B2BB90 - (-17520);
    ST32(v0-17520, v1);
    v0 = D_08B2AED8 - (-20776);
    ST32(v0-20776, 0);
    goto L_088AAFB0;
L_088AAFB0:;
    a0 = s1 + 0;
    func_08900270();
    goto L_088AAFB8;
L_088AAFB8:;
    sp = sp + 16;
    return;
L_088AAFCC:;
    v1 = LD32(a2);
    goto L_088AAFA0;
L_088AAFD4:;
    s0 = D_08B2AECC - (-20788);
    a0 = LD32(s0-20788);
    v1 = 1;
    v0 = D_08B2BB72 - (-17550);
    a1 = s1 + 0;
    ST8(v0-17550, v1);
    func_088AB6E0(a0, a1);
    goto L_088AAFF0;
L_088AAFF0:;
    a0 = 0 + 0;
    v0 = LD32(s0-20788);
    ST32(v0+4, 0);
    v1 = v0 + 8;
    goto L_088AB000;
L_088AB000:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AB000; }
    goto L_088AB014;
L_088AB014:;
    v1 = 4;
    v0 = D_08B2AED8 - (-20776);
    ST32(v0-20776, v1);
    goto L_088AAFB0;
}

/* 088AB024 */
void func_088AB024(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB024:;
    sp = sp - 16;
    v0 = D_08B2AECC - (-20788);
    s0 = a0 + 0;
    a0 = LD32(v0-20788);
    func_088AB6EC(a0);
    goto L_088AB040;
L_088AB040:;
    a1 = D_08B2BB72 - (-17550);
    v0 = LD_U8(a1-17550);
    cnd_ = v0 == 0;
    v0 = D_08B2AED8 - (-20776);
    if (cnd_) { goto L_088AB08C; }
    goto L_088AB050;
L_088AB050:;
    v1 = LD32(s0+24);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_088AB080; }
    goto L_088AB060;
L_088AB060:;
    v0 = v1 << 2;
    v1 = D_08AD78DC - (30940);
    v1 = v1 + 30940;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088AB07Cu: goto L_088AB07C; case 0x088AB088u: goto L_088AB088; case 0x088AB0B4u: goto L_088AB0B4; case 0x088AB0BCu: goto L_088AB0BC; case 0x088AB0C4u: goto L_088AB0C4; case 0x088AB0CCu: goto L_088AB0CC; default: rs_break(0, 0x088ab074); }
L_088AB07C:;
    v1 = 12;
    goto L_088AB080;
L_088AB080:;
    v0 = D_08B2BB90 - (-17520);
    ST32(v0-17520, v1);
    goto L_088AB088;
L_088AB088:;
    v0 = D_08B2AED8 - (-20776);
    goto L_088AB08C;
L_088AB08C:;
    a0 = s0 + 0;
    ST32(v0-20776, 0);
    v0 = D_08B2BB71 - (-17551);
    ST8(a1-17550, 0);
    ST8(v0-17551, 0);
    func_08900278();
    goto L_088AB0A4;
L_088AB0A4:;
    sp = sp + 16;
    return;
L_088AB0B4:;
    v1 = 11;
    goto L_088AB080;
L_088AB0BC:;
    v1 = 2;
    goto L_088AB080;
L_088AB0C4:;
    v1 = 10;
    goto L_088AB080;
L_088AB0CC:;
    v1 = 5;
    goto L_088AB080;
}

/* 088AB0D4 */
void func_088AB0D4(void)
{
    u32 v0 = 0, v1 = 0;
L_088AB0D4:;
    v0 = D_08B2AE88 - (-20856);
    ST32(v0-20856, 0);
    v1 = D_08B2BB72 - (-17550);
    v0 = D_08B2BB71 - (-17551);
    ST8(v1-17550, 0);
    ST8(v0-17551, 0);
    return;
}

/* 088AB0F0 */
u32 func_088AB0F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AB0F0:;
    sp = sp - 32;
    a1 = a1 & 0xffff;
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    a0 = sp + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    v0 = func_08900288();
    goto L_088AB114;
L_088AB114:;
    sp = sp + 32;
    return v0;
}

/* 088AB120 */
rv_t func_088AB120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088AB120:;
    return (rv_t){ v0, v1, f0 };
}

/* 088AB128 */
rv_t func_088AB128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088AB128:;
    a1 = D_08B2AEE8 - (-20760);
    cnd_ = a0 != 0;
    a3 = a1 - 20760;
    if (cnd_) { goto L_088AB168; }
    goto L_088AB134;
L_088AB134:;
    v1 = 2;
    v0 = D_08B2AED8 - (-20776);
    ST32(v0-20776, v1);
    v1 = D_08B2AE8E - (-20850);
    a0 = LDU32(a2+4);
    ST8(a3+5, 0);
    ST32(a1-20760, a0);
    ST8(a3+4, 0);
    v0 = LD_U16(a2+2);
    v0 = WSBH(v0);
    ST16(v1-20850, v0);
    return (rv_t){ v0, v1, f0 };
L_088AB168:;
    v0 = D_08B2BB90 - (-17520);
    v1 = D_08B2AED8 - (-20776);
    a0 = 11;
    ST32(v0-17520, a0);
    v0 = D_08B2BB72 - (-17550);
    ST32(v1-20776, 0);
    v1 = D_08B2BB71 - (-17551);
    ST8(v0-17550, 0);
    ST8(v1-17551, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088AB190 */
u32 func_088AB190(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB190:;
    sp = sp - 16;
    v0 = (s32)a1 < 2049;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AB1B4; }
    goto L_088AB1A4;
L_088AB1A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088AB1B4:;
    v0 = func_08832688(a0, a1);
    goto L_088AB1BC;
L_088AB1BC:;
    v1 = v0 & 0xffff;
    v0 = v0 >> 16;
    v1 = v0 ^ v1;
    goto L_088AB1A4;
}

/* 088AB1CC */
u32 func_088AB1CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB1CC:;
    sp = sp - 16;
    v0 = D_08B1603C - (24636);
    v1 = a0 + 0;
    a3 = LD32(v0+24636);
    a0 = LD32(a0);
    a1 = LD_U16(v1+16);
    f0 = BITSF(LD32(v1+8));
    ST32(a3+4, a0);
    a0 = a3 + 20;
    v0 = LD32(v1+4);
    ST16(a3, a1);
    ST32(a3+8, v0);
    a2 = LD_U16(v1+18);
    v0 = LD32(v1+20);
    a1 = LD32(v1+24);
    ST16(a3+2, a2);
    s0 = v0 + 20;
    a2 = v0 + 0;
    ST32(a3+12, FBITS(f0));
    ST32(a3+16, v0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AB228;
L_088AB228:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 088AB23C */
void func_088AB23C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB23C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v0 = func_088AB1CC(a0);
    goto L_088AB25C;
L_088AB25C:;
    v1 = D_08B1603C - (24636);
    a3 = LD32(s0+28);
    a1 = LD32(v1+24636);
    a2 = v0 + 0;
    a3 = a3 & 0x1;
    a0 = s1 + 0;
    { rv_t r_ = func_088A402C(a0, a1, a2, a3, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB278;
L_088AB278:;
    a0 = s1 + 0;
    func_088A4768(a0);
    goto L_088AB280;
L_088AB280:;
    sp = sp + 16;
    return;
}

/* 088AB294 */
void func_088AB294(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_088AB294:;
    t2 = D_08B2AEB0 - (-20816);
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(t2-20816));
    v0 = D_08AEC4AC - (-15188);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-15188));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(t2-20816, FBITS(f0));
    if (cnd_) { goto L_088AB40C; }
    goto L_088AB2C0;
L_088AB2C0:;
    v0 = D_08B2AED0 - (-20784);
    v1 = LD32(v0-20784);
    t0 = 0 + 0;
    t1 = 0 + 0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088AB31C; }
    goto L_088AB2D8;
L_088AB2D8:;
    v0 = D_08B2AECC - (-20788);
    a0 = LD32(v0-20788);
    a3 = v1 + 0;
    goto L_088AB2E4;
L_088AB2E4:;
    v0 = LD32(a0);
    a2 = a2 + 1;
    cnd_ = v0 == 0;
    a1 = a2 < a3;
    if (cnd_) { goto L_088AB30C; }
    goto L_088AB2F4;
L_088AB2F4:;
    v0 = LD32(a0+32);
    v1 = LD32(a0+36);
    ST32(a0+32, 0);
    t0 = t0 + v0;
    t1 = t1 + v1;
    ST32(a0+36, 0);
    goto L_088AB30C;
L_088AB30C:;
    cnd_ = a1 != 0;
    a0 = a0 + 48;
    if (cnd_) { goto L_088AB2E4; }
    goto L_088AB314;
L_088AB314:;
    cnd_ = (s32)t0 < 0;
    v1 = t0 >> 1;
    if (cnd_) { goto L_088AB484; }
    goto L_088AB31C;
L_088AB31C:;
    f0 = BITSF(t0);
    f1 = (float)(s32)FBITS(f0);
    goto L_088AB324;
L_088AB324:;
    f0 = BITSF(t1);
    cnd_ = (s32)t1 < 0;
    f3 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088AB468; }
    goto L_088AB330;
L_088AB330:;
    a0 = D_08B2AEC4 - (-20796);
    v0 = LD32(a0-20796);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088AB44C; }
    goto L_088AB344;
L_088AB344:;
    a1 = D_08B2AEC8 - (-20792);
    v0 = LD32(a1-20792);
    f1 = f1 + f0;
    ST32(a0-20796, 0);
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088AB430; }
    goto L_088AB360;
L_088AB360:;
    f0 = BITSF(LD32(t2-20816));
    a2 = D_08B2AEB4 - (-20812);
    ST32(a1-20792, 0);
    f1 = f1 / f0;
    f0 = BITSF(0);
    v1 = a2 - 20812;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f3 = f3 + f2;
    if (cnd_) { goto L_088AB420; }
    goto L_088AB388;
L_088AB388:;
    a1 = D_08AEC4B0 - (-15184);
    f0 = BITSF(LD32(a1-15184));
    f0 = f1 + f0;
    goto L_088AB394;
L_088AB394:;
    f0 = BITSF(F2I(f0, 1));
    a0 = D_08B2AEB8 - (-20808);
    v0 = FBITS(f0);
    f0 = BITSF(LD32(t2-20816));
    ST32(v1, v0);
    f1 = f3 / f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v1 = a0 - 20808;
    if (cnd_) { goto L_088AB414; }
    goto L_088AB3C0;
L_088AB3C0:;
    f0 = BITSF(LD32(a1-15184));
    f0 = f1 + f0;
    goto L_088AB3C8;
L_088AB3C8:;
    f0 = BITSF(F2I(f0, 1));
    t0 = D_08B2AEBC - (-20804);
    t1 = D_08B2AEC0 - (-20800);
    v0 = LD32(t0-20804);
    ST32(v1, FBITS(f0));
    a2 = LD32(a2-20812);
    a3 = LD32(a0-20808);
    v1 = LD32(t1-20800);
    a0 = v0 + 0;
    v0 = v0 < a2;
    a1 = v1 + 0;
    v1 = v1 < a3;
    if (v0 != 0) a0 = a2;
    if (v1 != 0) a1 = a3;
    ST32(t2-20816, 0);
    ST32(t0-20804, a0);
    ST32(t1-20800, a1);
    goto L_088AB40C;
L_088AB40C:;
    return;
L_088AB414:;
    f0 = BITSF(LD32(a1-15184));
    f0 = f1 - f0;
    goto L_088AB3C8;
L_088AB420:;
    a1 = D_08AEC4B0 - (-15184);
    f0 = BITSF(LD32(a1-15184));
    f0 = f1 - f0;
    goto L_088AB394;
L_088AB430:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_088AB360;
L_088AB44C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_088AB344;
L_088AB468:;
    v1 = t1 >> 1;
    v0 = t1 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f3 = (float)(s32)FBITS(f2);
    f3 = f3 + f3;
    goto L_088AB330;
L_088AB484:;
    v0 = t0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_088AB324;
}

/* 088AB49C */
void func_088AB49C(u32 a0)
{
    u32 v0 = 0;
L_088AB49C:;
    v0 = D_08B16030 - (24624);
    ST32(v0+24624, a0);
    return;
}

/* 088AB4A8 */
u32 func_088AB4A8(void)
{
    u32 v0 = 0, v1 = 0;
L_088AB4A8:;
    v1 = D_08B16030 - (24624);
    v0 = LD32(v1+24624);
    return v0;
}

/* 088AB4B4 */
u32 func_088AB4B4(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB4B4:;
    sp = sp - 16;
    v0 = func_088AB4E8();
    goto L_088AB4C4;
L_088AB4C4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AB4D8; }
    goto L_088AB4CC;
L_088AB4CC:;
    v0 = D_08B16030 - (24624);
    v1 = LD32(v0+24624);
    v1 = 0 < v1;
    goto L_088AB4D8;
L_088AB4D8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088AB4E8 */
u32 func_088AB4E8(void)
{
    u32 v0 = 0, v1 = 0;
L_088AB4E8:;
    v1 = D_08B16034 - (24628);
    v0 = LD_U8(v1+24628);
    return v0;
}

/* 088AB4F4 */
void func_088AB4F4(u32 a0)
{
    u32 v0 = 0;
L_088AB4F4:;
    v0 = D_08B16034 - (24628);
    ST8(v0+24628, a0);
    return;
}

/* 088AB500 */
u64 func_088AB500(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB500:;
    sp = sp - 16;
    v0 = D_08B2AECC - (-20788);
    a0 = LD32(v0-20788);
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AB52C; }
    goto L_088AB51C;
L_088AB51C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AB52C:;
    v0 = func_088AB71C(a0);
    goto L_088AB534;
L_088AB534:;
    v1 = v0 + 0;
    goto L_088AB51C;
}

/* 088AB53C */
float func_088AB53C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48); memcpy(stack_ + 48, PTR(sp_in), 16); /* stack-passed arguments */
L_088AB53C:;
    sp = sp - 48;
    v0 = D_08B28588 - (-31352);
    s4 = t3 + 0;
    s3 = t1 + 0;
    s1 = t2 + 0;
    s0 = a0 + 0;
    t4 = LD32(a1+4);
    v1 = LD32(a1);
    f0 = BITSF(LD32(v0-31352));
    s2 = LD32(sp+48);
    a1 = LD32(sp+60);
    ST32(a0, v1);
    a0 = t2 + 0;
    ST32(s0+4, t4);
    ST32(s0+12, FBITS(f0));
    ST32(s0+16, a3);
    ST32(s0+20, t0);
    ST16(s0+8, a2);
    v0 = LD32(sp+56);
    ST32(s0+28, t2);
    ST8(s0+41, a1);
    ST32(s0+36, s2);
    ST8(s0+40, v0);
    ST32(sp, v1);
    ST32(sp+4, t4);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB5BC;
L_088AB5BC:;
    a0 = v0 + 0;
    ST32(s0+24, v0);
    a1 = s3 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AB5D0;
L_088AB5D0:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB5D8;
L_088AB5D8:;
    ST32(s0+32, v0);
    a1 = s4 + 0;
    a2 = s2 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AB5EC;
L_088AB5EC:;
    t0 = LD32(sp+52);
    s0 = s0 + 42;
    a1 = D_08AD7904 - (30980);
    a0 = s0 + 0;
    a1 = a1 + 30980;
    a2 = 32;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB60C;
L_088AB60C:;
    sp = sp + 48;
    return f0;
}

/* 088AB62C */
void func_088AB62C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB62C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+24);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AB674; }
    goto L_088AB648;
L_088AB648:;
    v0 = LD32(s0+32);
    goto L_088AB64C;
L_088AB64C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AB664; }
    goto L_088AB654;
L_088AB654:;
    goto L_088AB658;
L_088AB658:;
    sp = sp + 16;
    return;
L_088AB664:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AB66C;
L_088AB66C:;
    goto L_088AB658;
L_088AB674:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AB67C;
L_088AB67C:;
    v0 = LD32(s0+32);
    goto L_088AB64C;
}

/* 088AB684 */
u32 func_088AB684(u32 a0)
{
    u32 v0 = 0;
L_088AB684:;
    v0 = LD32(a0+28);
    return v0;
}

/* 088AB68C */
u64 func_088AB68C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088AB68C:;
    a1 = D_08B2AECC - (-20788);
    v0 = LD32(a1-20788);
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 4;
    v0 = v0 + v1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088AB6A8 */
u32 func_088AB6A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u32 hi = 0, lo = 0;
L_088AB6A8:;
    v0 = D_08B2AECC - (-20788);
    a1 = LD32(v0-20788);
    v1 = 0xaaaa0000u;
    v1 = v1 | 0xaaab;
    a0 = a0 - a1;
    a0 = (u32)((s32)a0 >> 4);
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B2AED0 - (-20784);
    v1 = LD32(v0-20784);
    v0 = (u32)-1;
    a0 = lo;
    v1 = v1 < a0;
    if (v1 == 0) v0 = a0;
    return v0;
}

/* 088AB6E0 */
void func_088AB6E0(u32 a0, u32 a1)
{
L_088AB6E0:;
    ST32(a1+28, a0);
    ST32(a0, a1);
    return;
}

/* 088AB6EC */
void func_088AB6EC(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_088AB6EC:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 999; goto L_088AB704; }
    goto L_088AB6F8;
L_088AB6F8:;
    ST32(v0+28, 0);
    ST32(a0, 0);
    v0 = 999;
    goto L_088AB704;
L_088AB704:;
    ST32(a0+4, v0);
    ST32(a0+44, 0);
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    return;
}

/* 088AB71C */
u32 func_088AB71C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB71C:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AB744; }
    goto L_088AB734;
L_088AB734:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088AB744:;
    { u64 r_ = func_088A457C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AB74C;
L_088AB74C:;
    v1 = v0 + 0;
    goto L_088AB734;
}

/* 088AB754 */
void func_088AB754(void)
{
L_088AB754:;
    return;
}

/* 088AB75C */
rv_t func_088AB75C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB75C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088AB754();
    goto L_088AB770;
L_088AB770:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AB77C */
u64 func_088AB77C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB77C:;
    sp = sp - 16;
    a2 = D_08B2B764 - (-18588);
    v1 = a0 < 0x401u;
    a1 = LD32(a2-18588);
    v0 = D_08B2B768 - (-18584);
    v0 = v0 - 18584;
    a1 = a1 < 0x1u;
    a1 = a1 & v1;
    cnd_ = a1 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088AB7BC; }
    goto L_088AB7A8;
L_088AB7A8:;
    ST32(a2-18588, v0);
    goto L_088AB7AC;
L_088AB7AC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AB7BC:;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB7C4;
L_088AB7C4:;
    v1 = v0 + 0;
    goto L_088AB7AC;
}

/* 088AB7CC */
void func_088AB7CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AB7CC:;
    sp = sp - 16;
    a1 = D_08B2B764 - (-18588);
    v1 = LD32(a1-18588);
    cnd_ = v1 == a0;
    if (cnd_) { ST32(a1-18588, 0); goto L_088AB7EC; }
    goto L_088AB7E4;
L_088AB7E4:;
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB7EC;
L_088AB7EC:;
    sp = sp + 16;
    return;
}

/* 088AB7F8 */
void func_088AB7F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088AB7F8:;
    sp = sp - 64;
    s2 = t0 + 0;
    v0 = s2 < t1;
    if (v0 == 0) t1 = s2;
    v0 = D_08B2BB6C - (-17556);
    t0 = 1;
    ST8(v0-17556, 0);
    v0 = D_08B2BB68 - (-17560);
    v1 = t0 < t2;
    ST32(v0-17560, 0);
    v0 = D_08B2BB73 - (-17549);
    if (v1 != 0) t0 = t2;
    ST8(v0-17549, 0);
    v1 = D_08B2BB74 - (-17548);
    v0 = D_08B2B75C - (-18596);
    ST8(v1-17548, 0);
    v1 = D_08B2B760 - (-18592);
    ST32(v0-18596, 0);
    v0 = D_08B2BB8C - (-17524);
    s3 = a1 & 0xff;
    ST32(v1-18592, 0);
    v1 = D_08B2BB90 - (-17520);
    ST32(v0-17524, 0);
    v0 = D_08B2BB84 - (-17532);
    fp = a2 + 0;
    a2 = a0 & 0xff;
    ST32(sp, a3);
    ST32(sp+4, t3);
    ST32(v1-17520, 0);
    cnd_ = s3 == 0;
    ST32(v0-17532, s2);
    if (cnd_) { goto L_088ABBCC; }
    goto L_088AB89C;
L_088AB89C:;
    a1 = 1000;
    v0 = D_08B2BBAC - (-17492);
    a0 = s2 + 1000;
    ST32(v0-17492, a1);
    v1 = D_08B2BBB0 - (-17488);
    v0 = D_08B2BBA8 - (-17496);
    ST32(v1-17488, a0);
    ST32(v0-17496, a1);
    goto L_088AB8BC;
L_088AB8BC:;
    v0 = D_08B2BB70 - (-17552);
    v1 = s2 < 0x1u;
    s7 = D_08B2BB6F - (-17553);
    ST8(v0-17552, v1);
    v0 = D_08B2BB6D - (-17555);
    s5 = D_08B2BB80 - (-17536);
    ST8(v0-17555, a2);
    v0 = 1;
    cnd_ = a2 == 0;
    ST8(s7-17553, s3);
    if (cnd_) { goto L_088AB8F4; }
    goto L_088AB8E4;
L_088AB8E4:;
    s5 = D_08B2BB80 - (-17536);
    cnd_ = v1 == 0;
    ST32(s5-17536, t0);
    if (cnd_) { goto L_088AB8F8; }
    goto L_088AB8F0;
L_088AB8F0:;
    v0 = t0 + 1;
    goto L_088AB8F4;
L_088AB8F4:;
    ST32(s5-17536, v0);
    goto L_088AB8F8;
L_088AB8F8:;
    a0 = t1 << 2;
    v0 = D_08B2BB7C - (-17540);
    ST32(v0-17540, t1);
    s6 = D_08B2BB88 - (-17528);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB90C;
L_088AB90C:;
    a0 = 20;
    ST32(s6-17528, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB918;
L_088AB918:;
    a0 = 32000;
    s1 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB924;
L_088AB924:;
    v1 = 32;
    a0 = 1000;
    ST32(s1+8, v1);
    ST32(s1+12, a0);
    ST32(s1, v0);
    cnd_ = v0 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_088AB994; }
    goto L_088AB940;
L_088AB940:;
    a3 = 0 + 0;
    t0 = 32;
    t1 = 999;
    a2 = 32;
    a1 = 0 + 0;
    goto L_088AB954;
L_088AB954:;
    v1 = LD32(s1);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a2;
    v0 = (s32)v0 < (s32)t1;
    v1 = v1 + a1;
    ST32(v1, a0);
    a1 = a1 + t0;
    cnd_ = v0 != 0;
    a2 = a2 + t0;
    if (cnd_) { goto L_088AB954; }
    goto L_088AB97C;
L_088AB97C:;
    { s64 p_ = (s64)(s32)t1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s1);
    ST32(s1+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_088AB994;
L_088AB994:;
    s0 = LD32(s5-17536);
    v0 = D_08B2BB78 - (-17544);
    ST32(v0-17544, s1);
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 3;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB9B4;
L_088AB9B4:;
    v0 = v0 + 4;
    s4 = D_08B2BB94 - (-17516);
    ST32(v0-4, s0);
    a2 = s4 - 17516;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_088AB9E8; }
    goto L_088AB9D0;
L_088AB9D0:;
    a1 = (u32)-1;
    goto L_088AB9D4;
L_088AB9D4:;
    a0 = a0 - 1;
    ST32(v1+4, 0);
    ST32(v1, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 24;
    if (cnd_) { goto L_088AB9D4; }
    goto L_088AB9E8;
L_088AB9E8:;
    ST32(a2, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AB9F4;
L_088AB9F4:;
    s1 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    s0 = LD32(s5-17536);
    v0 = v0 + 3968;
    ST32(s1, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ABA10;
L_088ABA10:;
    ST32(s1+4, v0);
    a0 = 0 + 0;
    ST32(s1+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_088ABA3C; }
    goto L_088ABA24;
L_088ABA24:;
    v1 = v0 + 0;
    goto L_088ABA28;
L_088ABA28:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088ABA28; }
    goto L_088ABA3C;
L_088ABA3C:;
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s1, v0);
    a0 = s2 + 0;
    v0 = D_08B2BB98 - (-17512);
    ST32(v0-17512, s1);
    v0 = func_088ACEB0(a0);
    goto L_088ABA58;
L_088ABA58:;
    cnd_ = s3 == 0;
    v1 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088ABAC0; }
    goto L_088ABA60;
L_088ABA60:;
    cnd_ = s2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088ABAC0; }
    goto L_088ABA68;
L_088ABA68:;
    s3 = D_08AD790C - (30988);
    goto L_088ABA6C;
L_088ABA6C:;
    a3 = LD32(s4-17516);
    s0 = s1 + 1000;
    a0 = s3 + 30988;
    a2 = LD32(a3+4);
    v0 = LD32(a3);
    a1 = s0 + 0;
    v1 = a2 << 2;
    v0 = a2 < v0;
    v1 = v1 + a3;
    cnd_ = v0 == 0;
    t0 = a2 + 1;
    if (cnd_) { goto L_088ABBBC; }
    goto L_088ABA98;
L_088ABA98:;
    ST32(a3+4, t0);
    ST32(v1+8, s0);
    v0 = LD32(s6-17528);
    goto L_088ABAA4;
L_088ABAA4:;
    v1 = s1 << 2;
    s1 = s1 + 1;
    v1 = v1 + v0;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    ST32(v1, s0);
    if (cnd_) { goto L_088ABA6C; }
    goto L_088ABABC;
L_088ABABC:;
    v1 = D_08B2BB6D - (-17555);
    goto L_088ABAC0;
L_088ABAC0:;
    v0 = LD_U8(v1-17555);
    v1 = D_08B2BB9C - (-17508);
    ST32(v1-17508, fp);
    a0 = D_08B2BBA0 - (-17504);
    v1 = LD32(sp);
    cnd_ = v0 != 0;
    ST32(a0-17504, v1);
    if (cnd_) { goto L_088ABB28; }
    goto L_088ABADC;
L_088ABADC:;
    v0 = LD_U8(s7-17553);
    goto L_088ABAE0;
L_088ABAE0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088ABAFC; }
    goto L_088ABAE8;
L_088ABAE8:;
    v0 = 1;
    v1 = D_08B2BB72 - (-17550);
    a0 = D_08B2BB71 - (-17551);
    ST8(v1-17550, v0);
    ST8(a0-17551, 0);
    goto L_088ABAFC;
L_088ABAFC:;
    sp = sp + 64;
    return;
L_088ABB28:;
    func_088A4CF8();
    goto L_088ABB30;
L_088ABB30:;
    v0 = LD_U8(s7-17553);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088ABBA4; }
    goto L_088ABB3C;
L_088ABB3C:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ABB44;
L_088ABB44:;
    a1 = LD32(s5-17536);
    s0 = v0 + 0;
    a0 = v0 + 0;
    goto L_088ABB50;
L_088ABB50:;
    func_088ADD0C(a0, a1, 0, 0, 0);
    goto L_088ABB58;
L_088ABB58:;
    v0 = D_08B2BBA4 - (-17500);
    ST32(v0-17500, s0);
    func_08900470();
    goto L_088ABB64;
L_088ABB64:;
    v0 = LD_U8(s7-17553);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+4); goto L_088ABB90; }
    goto L_088ABB70;
L_088ABB70:;
    func_088AC180();
    goto L_088ABB78;
L_088ABB78:;
    a0 = 260;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ABB80;
L_088ABB80:;
    v1 = D_08B2BBB4 - (-17484);
    ST32(v1-17484, v0);
    ST32(v0+256, 0);
    goto L_088ABADC;
L_088ABB90:;
    v0 = D_08B2BB71 - (-17551);
    ST8(v0-17551, 0);
    func_088AC1E4(a0);
    goto L_088ABB9C;
L_088ABB9C:;
    v0 = LD_U8(s7-17553);
    goto L_088ABAE0;
L_088ABBA4:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ABBAC;
L_088ABBAC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    goto L_088ABB50;
L_088ABBBC:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ABBC4;
L_088ABBC4:;
    v0 = LD32(s6-17528);
    goto L_088ABAA4;
L_088ABBCC:;
    a0 = 999;
    v0 = D_08B2BBB0 - (-17488);
    ST32(v0-17488, a0);
    v1 = D_08B2BBA8 - (-17496);
    v0 = D_08B2BBAC - (-17492);
    ST32(v1-17496, a0);
    ST32(v0-17492, a0);
    goto L_088AB8BC;
}

/* 088ABBEC */
void func_088ABBEC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_088ABBEC:;
    v0 = D_08B2BBAC - (-17492);
    a0 = LD32(v0-17492);
    v1 = D_08B2BBA8 - (-17496);
    ST32(v1-17496, a0);
    return;
}

/* 088ABC00 */
void func_088ABC00(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ABC00:;
    sp = sp - 16;
    s2 = D_08B2BB6D - (-17555);
    v0 = D_08B2BB73 - (-17549);
    a0 = LD_U8(s2-17555);
    ST8(v0-17549, 0);
    v1 = D_08B2BB6C - (-17556);
    v0 = D_08B2BB68 - (-17560);
    ST8(v1-17556, 0);
    cnd_ = a0 != 0;
    ST32(v0-17560, 0);
    if (cnd_) { goto L_088ABD9C; }
    goto L_088ABC38;
L_088ABC38:;
    s1 = D_08B2B75C - (-18596);
    v0 = LD32(s1-18596);
    goto L_088ABC40;
L_088ABC40:;
    cnd_ = v0 != 0;
    v0 = LD32(s1-18596);
    if (cnd_) { goto L_088ABD74; }
    goto L_088ABC48;
L_088ABC48:;
    s1 = D_08B2BB78 - (-17544);
    goto L_088ABC4C;
L_088ABC4C:;
    s0 = LD32(s1-17544);
    v0 = D_08B2B760 - (-18592);
    cnd_ = s0 == 0;
    ST32(v0-18592, 0);
    if (cnd_) { goto L_088ABC70; }
    goto L_088ABC5C;
L_088ABC5C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088ABD60; }
    goto L_088ABC68;
L_088ABC68:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABC70;
L_088ABC70:;
    s0 = D_08B2BB88 - (-17528);
    a0 = LD32(s0-17528);
    cnd_ = a0 != 0;
    ST32(s1-17544, 0);
    if (cnd_) { goto L_088ABD50; }
    goto L_088ABC80;
L_088ABC80:;
    s1 = D_08B2BB94 - (-17516);
    a1 = LD32(s1-17516);
    goto L_088ABC88;
L_088ABC88:;
    cnd_ = a1 == 0;
    ST32(s0-17528, 0);
    if (cnd_) { goto L_088ABCB8; }
    goto L_088ABC90;
L_088ABC90:;
    v1 = LD32(a1-4);
    a0 = a1 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 3;
    v0 = a1 + v0;
    goto L_088ABCA8;
L_088ABCA8:;
    cnd_ = a0 != v0;
    v0 = v0 - 24;
    if (cnd_) { goto L_088ABCA8; }
    goto L_088ABCB0;
L_088ABCB0:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABCB8;
L_088ABCB8:;
    s0 = D_08B2BB98 - (-17512);
    a0 = LD32(s0-17512);
    cnd_ = a0 != 0;
    ST32(s1-17516, 0);
    if (cnd_) { goto L_088ABD38; }
    goto L_088ABCC8;
L_088ABCC8:;
    v0 = LD_U8(s2-17555);
    goto L_088ABCCC;
L_088ABCCC:;
    cnd_ = v0 == 0;
    ST32(s0-17512, 0);
    if (cnd_) { goto L_088ABCE8; }
    goto L_088ABCD4;
L_088ABCD4:;
    s1 = D_08B2BBA4 - (-17500);
    s0 = LD32(s1-17500);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088ABD20; }
    goto L_088ABCE4;
L_088ABCE4:;
    ST32(s1-17500, 0);
    goto L_088ABCE8;
L_088ABCE8:;
    s0 = D_08B2BBB4 - (-17484);
    a0 = LD32(s0-17484);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABCF4;
L_088ABCF4:;
    ST32(s0-17484, 0);
    v0 = D_08B2BBA0 - (-17504);
    v1 = D_08B2BB9C - (-17508);
    ST32(v0-17504, 0);
    ST32(v1-17508, 0);
    sp = sp + 16;
    return;
L_088ABD20:;
    a0 = s0 + 0;
    func_088ADDE0(a0, t1, t2, t3);
    goto L_088ABD28;
L_088ABD28:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABD30;
L_088ABD30:;
    ST32(s1-17500, 0);
    goto L_088ABCE8;
L_088ABD38:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ABD48;
L_088ABD48:;
    v0 = LD_U8(s2-17555);
    goto L_088ABCCC;
L_088ABD50:;
    s1 = D_08B2BB94 - (-17516);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABD58;
L_088ABD58:;
    a1 = LD32(s1-17516);
    goto L_088ABC88;
L_088ABD60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABD68;
L_088ABD68:;
    goto L_088ABC68;
L_088ABD70:;
    v0 = LD32(s1-18596);
    goto L_088ABD74;
L_088ABD74:;
    a0 = LD32(v0);
    s0 = LD32(v0+4);
    { u64 r_ = func_088ACBAC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABD80;
L_088ABD80:;
    a0 = LD32(s1-18596);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ABD88;
L_088ABD88:;
    ST32(s1-18596, s0);
    cnd_ = s0 != 0;
    s1 = D_08B2B75C - (-18596);
    if (cnd_) { goto L_088ABD70; }
    goto L_088ABD94;
L_088ABD94:;
    s1 = D_08B2BB78 - (-17544);
    goto L_088ABC4C;
L_088ABD9C:;
    func_088AD4AC(t2, t3);
    goto L_088ABDA4;
L_088ABDA4:;
    func_088A4E60();
    goto L_088ABDAC;
L_088ABDAC:;
    v0 = D_08B2BB6F - (-17553);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088ABDD4; }
    goto L_088ABDBC;
L_088ABDBC:;
    func_088AC1B4();
    goto L_088ABDC4;
L_088ABDC4:;
    s1 = D_08B2B75C - (-18596);
    func_0890048C(0, 0, 0, 0, 0);
    goto L_088ABDCC;
L_088ABDCC:;
    v0 = LD32(s1-18596);
    goto L_088ABC40;
L_088ABDD4:;
    func_088AC224();
    goto L_088ABDDC;
L_088ABDDC:;
    goto L_088ABDC4;
}

/* 088ABDE4 */
u32 func_088ABDE4(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088ABDE4:;
    v0 = D_08B2BB6F - (-17553);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088ABE00; }
    goto L_088ABDF4;
L_088ABDF4:;
    v0 = D_08B2BB74 - (-17548);
    v1 = LD_U8(v0-17548);
    v0 = v1 ^ 0x1;
    goto L_088ABE00;
L_088ABE00:;
    return v0;
}

/* 088ABE08 */
void func_088ABE08(void)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ABE08:;
    sp = sp - 16;
    func_088ABE94();
    goto L_088ABE18;
L_088ABE18:;
    v0 = D_08B2BB6F - (-17553);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 != 0;
    v1 = 1;
    if (cnd_) { goto L_088ABE38; }
    goto L_088ABE28;
L_088ABE28:;
    s0 = D_08B2BB74 - (-17548);
    v0 = LD_U8(s0-17548);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088ABE54; }
    goto L_088ABE38;
L_088ABE38:;
    v0 = D_08B2BB73 - (-17549);
    goto L_088ABE3C;
L_088ABE3C:;
    ST8(v0-17549, v1);
    func_089004C4();
    goto L_088ABE44;
L_088ABE44:;
    sp = sp + 16;
    return;
L_088ABE54:;
    func_088ABED0(0, 0, 0);
    goto L_088ABE5C;
L_088ABE5C:;
    func_0883B9C8(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088ABE64;
L_088ABE64:;
    v0 = LD_U8(s0-17548);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_088ABE54; }
    goto L_088ABE70;
L_088ABE70:;
    v0 = D_08B2BB73 - (-17549);
    goto L_088ABE3C;
}

/* 088ABE78 */
void func_088ABE78(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ABE78:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    func_089004E0(a0);
    goto L_088ABE88;
L_088ABE88:;
    sp = sp + 16;
    return;
}

/* 088ABE94 */
void func_088ABE94(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
L_088ABE94:;
    v0 = D_08AEC4B4 - (-15180);
    f0 = BITSF(LD32(v0-15180));
    v1 = D_08B2BB68 - (-17560);
    a0 = 1;
    v0 = D_08B2BB6C - (-17556);
    ST32(v1-17560, FBITS(f0));
    ST8(v0-17556, a0);
    return;
}

/* 088ABEB4 */
u32 func_088ABEB4(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ABEB4:;
    sp = sp - 16;
    v0 = func_08A62C3C();
    goto L_088ABEC4;
L_088ABEC4:;
    sp = sp + 16;
    return v0;
}

/* 088ABED0 */
void func_088ABED0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088ABED0:;
    sp = sp - 48;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088ABF44; }
    goto L_088ABEFC;
L_088ABEFC:;
    v1 = D_08B2BB68 - (-17560);
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(v1-17560));
    v0 = D_08AEC4B8 - (-15176);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-15176));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(v1-17560, FBITS(f0));
    if (cnd_) { goto L_088ABF34; }
    goto L_088ABF28;
L_088ABF28:;
    v1 = 1;
    v0 = D_08B2BB6C - (-17556);
    ST8(v0-17556, v1);
    goto L_088ABF34;
L_088ABF34:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088ABF60; }
    goto L_088ABF44;
L_088ABF44:;
    sp = sp + 48;
    return;
L_088ABF60:;
    s2 = 0 + 0;
    func_089004A8(t1, t2, t3);
    goto L_088ABF68;
L_088ABF68:;
    func_089005D0();
    goto L_088ABF70;
L_088ABF70:;
    v0 = D_08B2B75C - (-18596);
    a0 = LD32(v0-18596);
    cnd_ = a0 == 0;
    s1 = D_08B2B75C - (-18596);
    if (cnd_) { goto L_088ABFE8; }
    goto L_088ABF80;
L_088ABF80:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    v0 = LD32(s1-18596);
    if (cnd_) { goto L_088ABFEC; }
    goto L_088ABF90;
L_088ABF90:;
    s3 = D_08AEC4BC - (-15172);
    f20 = BITSF(LD32(s3-15172));
    s0 = a0 + 0;
    s1 = LD32(s0);
    goto L_088ABFA0;
L_088ABFA0:;
    v0 = LD32(s1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AC070; }
    goto L_088ABFB0;
L_088ABFB0:;
    f0 = BITSF(LD32(s1+8));
    goto L_088ABFB4;
L_088ABFB4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_088ABFC4; }
    goto L_088ABFC4;
L_088ABFC4:;
    s0 = LD32(s0+4);
    goto L_088ABFC8;
L_088ABFC8:;
    cnd_ = s0 != 0;
    if (cnd_) { s1 = LD32(s0); goto L_088ABFA0; }
    goto L_088ABFD0;
L_088ABFD0:;
    f0 = BITSF(LD32(s3-15172));
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_088AC050; }
    goto L_088ABFE4;
L_088ABFE4:;
    s1 = D_08B2B75C - (-18596);
    goto L_088ABFE8;
L_088ABFE8:;
    v0 = LD32(s1-18596);
    goto L_088ABFEC;
L_088ABFEC:;
    cnd_ = v0 != 0;
    v0 = D_08B2B760 - (-18592);
    if (cnd_) { goto L_088AC018; }
    goto L_088ABFF4;
L_088ABFF4:;
    ST32(v0-18592, 0);
    func_089005D8();
    goto L_088ABFFC;
L_088ABFFC:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088ABF44; }
    goto L_088AC004;
L_088AC004:;
    v0 = D_08B285B0 - (-31312);
    a0 = LD32(v0-31312);
    v1 = D_08B2BBB8 - (-17480);
    ST32(v1-17480, a0);
    goto L_088ABF44;
L_088AC018:;
    v0 = LD32(s1-18596);
    a1 = 1;
    a2 = 0 + 0;
    a0 = LD32(v0);
    s0 = LD32(v0+4);
    s2 = s2 + 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC034;
L_088AC034:;
    a0 = LD32(s1-18596);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC03C;
L_088AC03C:;
    ST32(s1-18596, s0);
    cnd_ = s0 != 0;
    s1 = D_08B2B75C - (-18596);
    if (cnd_) { goto L_088AC018; }
    goto L_088AC048;
L_088AC048:;
    v0 = D_08B2B760 - (-18592);
    goto L_088ABFF4;
L_088AC050:;
    s1 = D_08B2B75C - (-18596);
    f0 = func_088AD25C();
    goto L_088AC058;
L_088AC058:;
    f13 = f0;
    f12 = f20;
    a0 = 0 + 0;
    { rv_t r_ = func_0883BD44(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC068;
L_088AC068:;
    v0 = LD32(s1-18596);
    goto L_088ABFEC;
L_088AC070:;
    v0 = func_0883BE6C();
    goto L_088AC078;
L_088AC078:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+4); goto L_088ABFC8; }
    goto L_088AC080;
L_088AC080:;
    f0 = BITSF(LD32(s1+8));
    goto L_088ABFB4;
}

/* 088AC088 */
void func_088AC088(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC088:;
    sp = sp - 16;
    s1 = D_08B2BB6C - (-17556);
    v0 = LD_U8(s1-17556);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AC134; }
    goto L_088AC0A8;
L_088AC0A8:;
    s2 = D_08B2BB6F - (-17553);
    v1 = LD_U8(s2-17553);
    v0 = D_08B2BB68 - (-17560);
    ST32(v0-17560, 0);
    cnd_ = v1 == 0;
    s0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088AC0D4; }
    goto L_088AC0C0;
L_088AC0C0:;
    v0 = LD_U8(s0-17555);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AC124; }
    goto L_088AC0CC;
L_088AC0CC:;
    a0 = 1;
    func_08877764(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088AC0D4;
L_088AC0D4:;
    v0 = LD_U8(s0-17555);
    cnd_ = v0 == 0;
    v0 = LD_U8(s2-17553);
    if (cnd_) { goto L_088AC0E8; }
    goto L_088AC0E0;
L_088AC0E0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AC114; }
    goto L_088AC0E8;
L_088AC0E8:;
    func_088AD4AC(t2, t3);
    goto L_088AC0F0;
L_088AC0F0:;
    ST8(s1-17556, 0);
    goto L_088AC0F4;
L_088AC0F4:;
    func_08900700(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088AC0FC;
L_088AC0FC:;
    sp = sp + 16;
    return;
L_088AC114:;
    func_088A531C();
    goto L_088AC11C;
L_088AC11C:;
    goto L_088AC0E8;
L_088AC124:;
    func_088A4F94();
    goto L_088AC12C;
L_088AC12C:;
    goto L_088AC0CC;
L_088AC134:;
    v0 = D_08B2BB6F - (-17553);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 == 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088AC0F4; }
    goto L_088AC144;
L_088AC144:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AC160; }
    goto L_088AC150;
L_088AC150:;
    a0 = 0 + 0;
    func_08877764(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088AC158;
L_088AC158:;
    goto L_088AC0F4;
L_088AC160:;
    func_088A4F94();
    goto L_088AC168;
L_088AC168:;
    goto L_088AC150;
}

/* 088AC170 */
void func_088AC170(void)
{
L_088AC170:;
    return;
}

/* 088AC178 */
void func_088AC178(void)
{
L_088AC178:;
    return;
}

/* 088AC180 */
void func_088AC180(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC180:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AC1A4; }
    goto L_088AC198;
L_088AC198:;
    goto L_088AC19C;
L_088AC19C:;
    sp = sp + 16;
    return;
L_088AC1A4:;
    func_08900554();
    goto L_088AC1AC;
L_088AC1AC:;
    goto L_088AC19C;
}

/* 088AC1B4 */
void func_088AC1B4(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC1B4:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AC1D4; }
    goto L_088AC1C8;
L_088AC1C8:;
    goto L_088AC1CC;
L_088AC1CC:;
    sp = sp + 16;
    return;
L_088AC1D4:;
    func_08900574();
    goto L_088AC1DC;
L_088AC1DC:;
    goto L_088AC1CC;
}

/* 088AC1E4 */
void func_088AC1E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC1E4:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_088AC208; }
    goto L_088AC1FC;
L_088AC1FC:;
    goto L_088AC200;
L_088AC200:;
    sp = sp + 16;
    return;
L_088AC208:;
    v1 = D_08B2BB71 - (-17551);
    a1 = D_08B2BB72 - (-17550);
    ST8(v1-17551, v0);
    ST8(a1-17550, 0);
    func_089004FC(a0);
    goto L_088AC21C;
L_088AC21C:;
    goto L_088AC200;
}

/* 088AC224 */
void func_088AC224(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC224:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AC244; }
    goto L_088AC238;
L_088AC238:;
    goto L_088AC23C;
L_088AC23C:;
    sp = sp + 16;
    return;
L_088AC244:;
    func_08900538();
    goto L_088AC24C;
L_088AC24C:;
    goto L_088AC23C;
}

/* 088AC254 */
u64 func_088AC254(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC254:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088AC280; }
    goto L_088AC270;
L_088AC270:;
    { u64 r_ = func_088A51EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC278;
L_088AC278:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AC298; }
    goto L_088AC280;
L_088AC280:;
    v0 = D_08B2BBA4 - (-17500);
    a0 = LD32(v0-17500);
    a1 = s0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ADECC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC294;
L_088AC294:;
    goto L_088AC298;
L_088AC298:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088AC2A4 */
u64 func_088AC2A4(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AC2A4:;
    sp = sp - 32;
    v0 = D_08B2BB98 - (-17512);
    s0 = a0 + 0;
    ST32(sp+4, 0);
    v1 = LD32(v0-17512);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    a3 = v0 - 1;
    cnd_ = (s32)a3 < 0;
    ST32(sp+4, a3);
    if (cnd_) { goto L_088AC30C; }
    goto L_088AC2D8;
L_088AC2D8:;
    s1 = D_08B2BBA4 - (-17500);
    goto L_088AC2DC;
L_088AC2DC:;
    v1 = LD32(sp);
    a3 = LD32(sp+4);
    a1 = s0 + 0;
    a0 = LD32(v1+4);
    v0 = a3 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_088AC320; }
    goto L_088AC300;
L_088AC300:;
    v0 = a3 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088AC2DC; }
    goto L_088AC30C;
L_088AC30C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088AC320:;
    a0 = LD32(s1-17500);
    { u64 r_ = func_088ADECC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC328;
L_088AC328:;
    a3 = LD32(sp+4);
    goto L_088AC300;
}

/* 088AC330 */
u64 func_088AC330(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC330:;
    sp = sp - 16;
    v0 = a1 + 0;
    a2 = a1 + 0;
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088AC35C; }
    goto L_088AC348;
L_088AC348:;
    { u64 r_ = func_088AC254(a0, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC350;
L_088AC350:;
    goto L_088AC354;
L_088AC354:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AC35C:;
    v0 = D_08B2BBA4 - (-17500);
    a0 = LD32(v0-17500);
    { u64 r_ = func_088ADECC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC368;
L_088AC368:;
    goto L_088AC354;
}

/* 088AC370 */
rv_t func_088AC370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088AC370:;
    sp = sp - 64;
    a2 = a2 & 0xff;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088AC3A4; }
    goto L_088AC398;
L_088AC398:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    ST32(a0+8, FBITS(f0));
    goto L_088AC3A4;
L_088AC3A4:;
    v1 = LD32(s0);
    v0 = v1 < 0xcu;
    cnd_ = v0 == 0;
    v0 = D_08B2BB6F - (-17553);
    if (cnd_) { goto L_088AC8E0; }
    goto L_088AC3B4;
L_088AC3B4:;
    v0 = v1 << 2;
    v1 = D_08AD7ABC - (31420);
    v1 = v1 + 31420;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088AC3D0u: goto L_088AC3D0; case 0x088AC444u: goto L_088AC444; case 0x088AC454u: goto L_088AC454; case 0x088AC4B0u: goto L_088AC4B0; case 0x088AC580u: goto L_088AC580; case 0x088AC588u: goto L_088AC588; case 0x088AC5A8u: goto L_088AC5A8; case 0x088AC5B8u: goto L_088AC5B8; case 0x088AC5C4u: goto L_088AC5C4; case 0x088AC650u: goto L_088AC650; case 0x088AC674u: goto L_088AC674; case 0x088AC764u: goto L_088AC764; default: rs_break(0, 0x088ac3c8); }
L_088AC3D0:;
    v0 = D_08B2BB6F - (-17553);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 != 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088AC434; }
    goto L_088AC3E0;
L_088AC3E0:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AC424; }
    goto L_088AC3EC;
L_088AC3EC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088AC410; }
    goto L_088AC3F4;
L_088AC3F4:;
    goto L_088AC3F8;
L_088AC3F8:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088AC410:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC418;
L_088AC418:;
    goto L_088AC3F8;
L_088AC420:;
    a0 = s0 + 0;
    goto L_088AC424;
L_088AC424:;
    { u64 r_ = func_088AC254(a0, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC42C;
L_088AC42C:;
    goto L_088AC3EC;
L_088AC434:;
    a0 = s0 + 0;
    { rv_t r_ = func_088AE780(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC43C;
L_088AC43C:;
    goto L_088AC3EC;
L_088AC444:;
    a0 = s0 + 0;
    { rv_t r_ = func_0889F59C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC44C;
L_088AC44C:;
    goto L_088AC3EC;
L_088AC454:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    v0 = D_08B2BB6F - (-17553);
    if (cnd_) { goto L_088AC478; }
    goto L_088AC464;
L_088AC464:;
    v0 = D_08B2B758 - (-18600);
    v1 = LD_U8(v0-18600);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AC4A0; }
    goto L_088AC474;
L_088AC474:;
    v0 = D_08B2BB6F - (-17553);
    goto L_088AC478;
L_088AC478:;
    v1 = LD_U8(v0-17553);
    cnd_ = v1 == 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC484;
L_088AC484:;
    v1 = LD_U8(v0-17555);
    goto L_088AC488;
L_088AC488:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC490;
L_088AC490:;
    a0 = s0 + 0;
    { u64 r_ = func_088AD468(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC498;
L_088AC498:;
    goto L_088AC3EC;
L_088AC4A0:;
    a0 = s0 + 0;
    f0 = func_08876F5C(a0);
    goto L_088AC4A8;
L_088AC4A8:;
    v0 = D_08B2BB6F - (-17553);
    goto L_088AC478;
L_088AC4B0:;
    v0 = D_08B2BB6F - (-17553);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 == 0;
    v0 = D_08B2BB98 - (-17512);
    if (cnd_) { goto L_088AC420; }
    goto L_088AC4C0;
L_088AC4C0:;
    a3 = LD32(v0-17512);
    ST32(sp+20, 0);
    v0 = LD32(a3+12);
    ST32(sp+16, a3);
    a2 = v0 - 1;
    cnd_ = (s32)a2 < 0;
    ST32(sp+20, a2);
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC4DC;
L_088AC4DC:;
    t0 = LD32(s0+4);
    s2 = D_08B2BB94 - (-17516);
    goto L_088AC4E4;
L_088AC4E4:;
    a2 = LD32(sp+20);
    v1 = LD32(a3+4);
    a0 = LD32(s2-17516);
    v0 = a2 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    t1 = a2 + 0;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    a0 = a0 + v0;
    a2 = LD32(a0+4);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AC538; }
    goto L_088AC51C;
L_088AC51C:;
    a0 = a0 + 8;
    goto L_088AC520;
L_088AC520:;
    v0 = LD32(a0);
    cnd_ = v0 == t0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088AC54C; }
    goto L_088AC52C;
L_088AC52C:;
    v0 = v1 < a2;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088AC520; }
    goto L_088AC538;
L_088AC538:;
    v0 = t1 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+20, v0);
    if (cnd_) { goto L_088AC4E4; }
    goto L_088AC544;
L_088AC544:;
    goto L_088AC3EC;
L_088AC54C:;
    cnd_ = a1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AC570; }
    goto L_088AC554;
L_088AC554:;
    v0 = 4;
    ST32(s0, v0);
    goto L_088AC55C;
L_088AC55C:;
    a0 = s0 + 0;
    { u64 r_ = func_088AC330(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC564;
L_088AC564:;
    goto L_088AC3EC;
L_088AC56C:;
    a0 = s0 + 0;
    goto L_088AC570;
L_088AC570:;
    ST32(s0, v0);
    { rv_t r_ = func_08877198(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC578;
L_088AC578:;
    goto L_088AC3EC;
L_088AC580:;
    v0 = LD32(s0+4);
    goto L_088AC56C;
L_088AC588:;
    a0 = s0 + 0;
    f0 = func_0887741C(a0);
    goto L_088AC590;
L_088AC590:;
    v1 = D_08B2BB6F - (-17553);
    goto L_088AC594;
L_088AC594:;
    v0 = LD_U8(v1-17553);
    cnd_ = v0 == 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC5A0;
L_088AC5A0:;
    v1 = LD_U8(v0-17555);
    goto L_088AC488;
L_088AC5A8:;
    a0 = s0 + 0;
    f0 = func_08877264(a0, t1, t2, t3);
    goto L_088AC5B0;
L_088AC5B0:;
    v1 = D_08B2BB6F - (-17553);
    goto L_088AC594;
L_088AC5B8:;
    ST32(s0, 0);
    a0 = s0 + 0;
    { rv_t r_ = func_088AE780(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC5C4;
L_088AC5C4:;
    v0 = 1;
    v1 = D_08B2BB98 - (-17512);
    ST32(s0, v0);
    a3 = LD32(v1-17512);
    ST32(sp+4, 0);
    v0 = LD32(a3+12);
    ST32(sp, a3);
    a2 = v0 - 1;
    cnd_ = (s32)a2 < 0;
    ST32(sp+4, a2);
    if (cnd_) { goto L_088AC618; }
    goto L_088AC5EC;
L_088AC5EC:;
    v0 = LD32(sp);
    a2 = LD32(sp+4);
    a0 = LD32(v0+4);
    v1 = a2 << 2;
    v1 = v1 + a0;
    a1 = LD32(v1);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088AC640; }
    goto L_088AC60C;
L_088AC60C:;
    a2 = a2 - 1;
    cnd_ = (s32)a2 >= 0;
    ST32(sp+4, a2);
    if (cnd_) { goto L_088AC5EC; }
    goto L_088AC618;
L_088AC618:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC628;
L_088AC628:;
    a0 = s0 + 0;
    goto L_088AC62C;
L_088AC62C:;
    a1 = 1;
    a2 = 0 + 0;
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC638;
L_088AC638:;
    goto L_088AC3F8;
L_088AC640:;
    a0 = s0 + 0;
    { u64 r_ = func_088AC330(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC648;
L_088AC648:;
    a2 = LD32(sp+4);
    goto L_088AC60C;
L_088AC650:;
    v0 = D_08B2BB6D - (-17555);
    a0 = LD_U8(v0-17555);
    v1 = 1;
    cnd_ = a0 == 0;
    ST32(s0, v1);
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC664;
L_088AC664:;
    a0 = s0 + 0;
    { u64 r_ = func_088AC2A4(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC66C;
L_088AC66C:;
    goto L_088AC3EC;
L_088AC674:;
    v0 = 1;
    v1 = D_08B2BB98 - (-17512);
    ST32(s0, v0);
    a3 = LD32(v1-17512);
    ST32(sp+4, 0);
    v0 = LD32(a3+12);
    ST32(sp, a3);
    a2 = v0 - 1;
    cnd_ = (s32)a2 < 0;
    ST32(sp+4, a2);
    if (cnd_) { goto L_088AC71C; }
    goto L_088AC69C;
L_088AC69C:;
    s2 = D_08B2BB94 - (-17516);
    goto L_088AC6A0;
L_088AC6A0:;
    v0 = LD32(sp);
    a2 = LD32(sp+4);
    a0 = LD32(v0+4);
    v1 = a2 << 2;
    v1 = v1 + a0;
    a1 = LD32(v1);
    cnd_ = a1 == 0;
    if (cnd_) { a2 = a2 - 1; goto L_088AC714; }
    goto L_088AC6C0;
L_088AC6C0:;
    v0 = a1 << 1;
    v1 = LD32(s2-17516);
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    a3 = LD32(v0+4);
    t0 = LD32(s0+4);
    cnd_ = a3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088AC704; }
    goto L_088AC6E4;
L_088AC6E4:;
    v1 = v0 + 8;
    goto L_088AC6E8;
L_088AC6E8:;
    v0 = LD32(v1);
    cnd_ = v0 == t0;
    if (cnd_) { a2 = a2 - 1; goto L_088AC714; }
    goto L_088AC6F4;
L_088AC6F4:;
    a0 = a0 + 1;
    v0 = a0 < a3;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AC6E8; }
    goto L_088AC704;
L_088AC704:;
    a0 = s0 + 0;
    { u64 r_ = func_088AC330(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC70C;
L_088AC70C:;
    a2 = LD32(sp+4);
    a2 = a2 - 1;
    goto L_088AC714;
L_088AC714:;
    cnd_ = (s32)a2 >= 0;
    ST32(sp+4, a2);
    if (cnd_) { goto L_088AC6A0; }
    goto L_088AC71C;
L_088AC71C:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    v0 = D_08B2BB94 - (-17516);
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC72C;
L_088AC72C:;
    v0 = LD32(v0-17516);
    a2 = LD32(s0+4);
    a1 = LD32(v0+4);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088AC628; }
    goto L_088AC740;
L_088AC740:;
    v1 = v0 + 8;
    goto L_088AC744;
L_088AC744:;
    v0 = LD32(v1);
    cnd_ = v0 == a2;
    a0 = a0 + 1;
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC750;
L_088AC750:;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AC744; }
    goto L_088AC75C;
L_088AC75C:;
    a0 = s0 + 0;
    goto L_088AC62C;
L_088AC764:;
    v0 = 1;
    s3 = D_08B2BB98 - (-17512);
    ST32(s0, v0);
    a3 = LD32(s3-17512);
    ST32(sp+4, 0);
    v0 = LD32(a3+12);
    ST32(sp, a3);
    a2 = v0 - 1;
    cnd_ = (s32)a2 < 0;
    ST32(sp+4, a2);
    if (cnd_) { goto L_088AC800; }
    goto L_088AC78C;
L_088AC78C:;
    t0 = LD32(s0+4);
    s2 = D_08B2BB94 - (-17516);
    goto L_088AC794;
L_088AC794:;
    a2 = LD32(sp+4);
    v1 = LD32(a3+4);
    a0 = LD32(s2-17516);
    v0 = a2 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    t1 = a2 + 0;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = a0 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AC7E8; }
    goto L_088AC7CC;
L_088AC7CC:;
    a0 = v0 + 8;
    goto L_088AC7D0;
L_088AC7D0:;
    v0 = LD32(a0);
    cnd_ = v0 == t0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088AC8D0; }
    goto L_088AC7DC;
L_088AC7DC:;
    v0 = v1 < a2;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088AC7D0; }
    goto L_088AC7E8;
L_088AC7E8:;
    v0 = t1 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088AC794; }
    goto L_088AC7F4;
L_088AC7F4:;
    v0 = 0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC800;
L_088AC800:;
    a3 = D_08B2BBBC - (-17476);
    a0 = LD32(a3-17476);
    v1 = D_08B285B0 - (-31312);
    v1 = LD32(v1-31312);
    v0 = 0x40000u;
    v0 = v0 | 0x93e0;
    a0 = a0 + v0;
    a0 = a0 < v1;
    cnd_ = a0 == 0;
    v0 = D_08B2BB8C - (-17524);
    if (cnd_) { goto L_088AC3EC; }
    goto L_088AC828;
L_088AC828:;
    a2 = LD32(v0-17524);
    a1 = LD32(s0+4);
    a0 = D_08AD798C - (31116);
    a0 = a0 + 31116;
    ST32(a3-17476, v1);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC840;
L_088AC840:;
    a3 = LD32(s3-17512);
    ST32(sp+20, 0);
    v0 = LD32(a3+12);
    ST32(sp+16, a3);
    a2 = v0 - 1;
    cnd_ = (s32)a2 < 0;
    ST32(sp+20, a2);
    if (cnd_) { goto L_088AC8A8; }
    goto L_088AC85C;
L_088AC85C:;
    s2 = D_08B2BB94 - (-17516);
    s3 = D_08AD7A2C - (31276);
    goto L_088AC864;
L_088AC864:;
    v1 = LD32(sp+16);
    a2 = LD32(sp+20);
    a1 = LD32(s2-17516);
    a0 = LD32(v1+4);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 3;
    a1 = a1 + v1;
    v0 = LD32(a1+4);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a1+8); goto L_088AC8BC; }
    goto L_088AC89C;
L_088AC89C:;
    a2 = a2 - 1;
    cnd_ = (s32)a2 >= 0;
    ST32(sp+20, a2);
    if (cnd_) { goto L_088AC864; }
    goto L_088AC8A8;
L_088AC8A8:;
    a0 = D_08AD7A3C - (31292);
    a0 = a0 + 31292;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC8B4;
L_088AC8B4:;
    goto L_088AC3EC;
L_088AC8BC:;
    a1 = a0 + 0;
    a0 = s3 + 31276;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC8C8;
L_088AC8C8:;
    a2 = LD32(sp+20);
    goto L_088AC89C;
L_088AC8D0:;
    cnd_ = a1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AC62C; }
    goto L_088AC8D8;
L_088AC8D8:;
    goto L_088AC55C;
L_088AC8E0:;
    v1 = LD_U8(v0-17553);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AC424; }
    goto L_088AC8EC;
L_088AC8EC:;
    { rv_t r_ = func_088770A0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC8F4;
L_088AC8F4:;
    goto L_088AC3EC;
}

/* 088AC8FC */
rv_t func_088AC8FC(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AC8FC:;
    sp = sp - 32;
    s3 = a1 & 0xff;
    s1 = a0 + 0;
    a3 = LD32(a0+24);
    s2 = LD32(a0+20);
    a2 = LD_U16(s1+18);
    a0 = LD_U16(a0+16);
    if (s3 == 0) a3 = 0;
    a1 = s2 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC938;
L_088AC938:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088AC980; }
    goto L_088AC944;
L_088AC944:;
    v0 = LD32(s1);
    a0 = LD32(s1+4);
    f0 = BITSF(LD32(s1+8));
    ST32(s0, v0);
    ST32(s0+4, a0);
    ST32(s0+8, FBITS(f0));
    v0 = LD32(s1+28);
    v1 = LD32(s0+28);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    cnd_ = s2 == 0;
    ST32(s0+28, v1);
    if (cnd_) { goto L_088AC97C; }
    goto L_088AC974;
L_088AC974:;
    cnd_ = s3 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_088AC99C; }
    goto L_088AC97C;
L_088AC97C:;
    v0 = s0 + 0;
    goto L_088AC980;
L_088AC980:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088AC99C:;
    a1 = LD32(s1+24);
    a0 = LD32(s0+24);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AC9A8;
L_088AC9A8:;
    v0 = s0 + 0;
    goto L_088AC980;
}

/* 088AC9B0 */
rv_t func_088AC9B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AC9B0:;
    sp = sp - 16;
    s2 = a3 & 0xff;
    s1 = a2 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088ACA2C; }
    goto L_088AC9D8;
L_088AC9D8:;
    { rv_t r_ = func_088AC8FC(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AC9E0;
L_088AC9E0:;
    a3 = v0 + 0;
    a0 = v0 + 0;
    a2 = 1;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_088ACA2C; }
    goto L_088AC9F4;
L_088AC9F4:;
    v0 = LD32(v0+28);
    v1 = 999;
    ST32(a3, s0);
    v0 = v0 | 0x2;
    cnd_ = s1 == v1;
    ST32(a3+28, v0);
    if (cnd_) { goto L_088ACA10; }
    goto L_088ACA0C;
L_088ACA0C:;
    ST32(a3+4, s1);
    goto L_088ACA10;
L_088ACA10:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088ACA24; }
    goto L_088ACA18;
L_088ACA18:;
    v0 = LD32(a3+28);
    v0 = (v0 & ~(0x1u << 0)) | ((s2 & 0x1) << 0);
    ST32(a3+28, v0);
    goto L_088ACA24;
L_088ACA24:;
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ACA2C;
L_088ACA2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088ACA44 */
rv_t func_088ACA44(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ACA44:;
    sp = sp - 16;
    v1 = a1 + 0;
    v0 = 999;
    a2 = 1;
    a1 = 1;
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088ACAC8; }
    goto L_088ACA68;
L_088ACA68:;
    a0 = v1 + 0;
    a1 = 0 + 0;
    v0 = func_088AD374(a0, a1);
    goto L_088ACA74;
L_088ACA74:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08B285B4 - (-31308);
    if (cnd_) { goto L_088ACAA0; }
    goto L_088ACA84;
L_088ACA84:;
    f0 = BITSF(LD32(v0-31308));
    a0 = s0 + 0;
    a1 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0+8, FBITS(f0));
    if (cnd_) { goto L_088ACAB8; }
    goto L_088ACA98;
L_088ACA98:;
    f0 = func_08876F5C(a0);
    goto L_088ACAA0;
L_088ACAA0:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACAA8;
L_088ACAA8:;
    goto L_088ACAAC;
L_088ACAAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088ACAB8:;
    a0 = s0 + 0;
    { u64 r_ = func_088AC330(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACAC0;
L_088ACAC0:;
    goto L_088ACAA0;
L_088ACAC8:;
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ACAD0;
L_088ACAD0:;
    goto L_088ACAAC;
}

/* 088ACAD8 */
u64 func_088ACAD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ACAD8:;
    sp = sp - 16;
    v0 = D_08B2BB78 - (-17544);
    t1 = a0 & 0xffff;
    a2 = a2 & 0xffff;
    t0 = LD32(v0-17544);
    cnd_ = t0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088ACB64; }
    goto L_088ACAFC;
L_088ACAFC:;
    a0 = LD32(t0+4);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088ACB60; }
    goto L_088ACB08;
L_088ACB08:;
    v0 = LD32(t0+16);
    v1 = LD32(a0);
    s0 = a0 + 0;
    v0 = v0 + 1;
    ST32(t0+16, v0);
    a0 = 999;
    ST32(t0+4, v1);
    v1 = LD32(s0+28);
    ST32(s0+4, a0);
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST16(s0+16, t1);
    ST16(s0+18, a2);
    ST32(s0+28, v1);
    ST32(s0, a0);
    cnd_ = a1 == 0;
    ST32(s0+20, a1);
    if (cnd_) { goto L_088ACBA4; }
    goto L_088ACB48;
L_088ACB48:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088ACB74; }
    goto L_088ACB50;
L_088ACB50:;
    ST32(s0+24, a3);
    goto L_088ACB54;
L_088ACB54:;
    v0 = LD32(s0+28);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s0+28, v0);
    goto L_088ACB60;
L_088ACB60:;
    v0 = s0 + 0;
    goto L_088ACB64;
L_088ACB64:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088ACB74:;
    a0 = a1 + 0;
    { u64 r_ = func_088AB77C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACB7C;
L_088ACB7C:;
    cnd_ = v0 == 0;
    ST32(s0+24, v0);
    if (cnd_) { goto L_088ACB94; }
    goto L_088ACB84;
L_088ACB84:;
    v0 = LD32(s0+28);
    v0 = v0 | 0x4;
    ST32(s0+28, v0);
    goto L_088ACB54;
L_088ACB94:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACB9C;
L_088ACB9C:;
    v0 = 0 + 0;
    goto L_088ACB64;
L_088ACBA4:;
    ST32(s0+24, 0);
    goto L_088ACB54;
}

/* 088ACBAC */
u64 func_088ACBAC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ACBAC:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088ACBF8; }
    goto L_088ACBC8;
L_088ACBC8:;
    v0 = D_08B2BB78 - (-17544);
    goto L_088ACBCC;
L_088ACBCC:;
    v1 = LD32(v0-17544);
    v0 = LD32(v1+4);
    a0 = LD32(v1+16);
    ST32(s0, v0);
    a0 = a0 - 1;
    ST32(v1+4, s0);
    ST32(v1+16, a0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088ACBF8:;
    a0 = LD32(a0+24);
    func_088AB7CC(a0, t1, t2, t3);
    goto L_088ACC00;
L_088ACC00:;
    v0 = D_08B2BB78 - (-17544);
    goto L_088ACBCC;
}

/* 088ACC08 */
void func_088ACC08(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088ACC08:;
    sp = sp - 64;
    v0 = 91;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088ACC80; }
    goto L_088ACC30;
L_088ACC30:;
    a0 = 8;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ACC38;
L_088ACC38:;
    a0 = D_08B2B760 - (-18592);
    v1 = v0 + 0;
    v0 = LD32(a0-18592);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08B2B75C - (-18596); goto L_088ACC78; }
    goto L_088ACC4C;
L_088ACC4C:;
    ST32(v0+4, v1);
    goto L_088ACC50;
L_088ACC50:;
    ST32(a0-18592, v1);
    ST32(v1, s2);
    ST32(v1+4, 0);
    goto L_088ACC60;
L_088ACC60:;
    sp = sp + 64;
    return;
L_088ACC78:;
    ST32(v0-18596, v1);
    goto L_088ACC50;
L_088ACC80:;
    s1 = LD32(a0+24);
    v0 = LD32(a0+20);
    s3 = s1 + v0;
    v1 = s1 < s3;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088ACCA8; }
    goto L_088ACC98;
L_088ACC98:;
    a0 = s2 + 0;
    { u64 r_ = func_088ACBAC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACCA0;
L_088ACCA0:;
    goto L_088ACC60;
L_088ACCA8:;
    a1 = sp + 0;
    v0 = func_088A2F94(a0, a1);
    goto L_088ACCB0;
L_088ACCB0:;
    a0 = LD_U16(sp);
    a2 = LD_U16(sp+2);
    a1 = LD32(sp+16);
    a3 = 0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACCC8;
L_088ACCC8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088ACD18; }
    goto L_088ACCD0;
L_088ACCD0:;
    v0 = LD32(s2+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088ACCEC; }
    goto L_088ACCE0;
L_088ACCE0:;
    v0 = LD32(s0+28);
    v0 = v0 | 0x1;
    ST32(s0+28, v0);
    goto L_088ACCEC;
L_088ACCEC:;
    v0 = LD32(sp+8);
    f0 = BITSF(LD32(sp+12));
    ST32(s0+4, v0);
    v0 = LD32(sp+4);
    ST32(s0+8, FBITS(f0));
    ST32(s0, v0);
    v1 = LD32(sp+16);
    cnd_ = v1 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_088ACD34; }
    goto L_088ACD10;
L_088ACD10:;
    a0 = s0 + 0;
    func_088ACC08(a0, 0, 0, 0);
    goto L_088ACD18;
L_088ACD18:;
    v0 = LD32(sp+16);
    s1 = s1 + v0;
    v1 = s1 < s3;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088ACCA8; }
    goto L_088ACD2C;
L_088ACD2C:;
    goto L_088ACC98;
L_088ACD34:;
    a0 = LD32(s0+24);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACD3C;
L_088ACD3C:;
    goto L_088ACD10;
}

/* 088ACD44 */
void func_088ACD44(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088ACD44:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = a1 + 0;
    s2 = a2 & 0xff;
    func_089005D0();
    goto L_088ACD6C;
L_088ACD6C:;
    a3 = 0 + 0;
    a0 = LD_U16(s1);
    a2 = LD_U16(s1+2);
    a1 = LD32(s1+16);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACD80;
L_088ACD80:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088ACDC8; }
    goto L_088ACD88;
L_088ACD88:;
    cnd_ = s2 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_088ACD9C; }
    goto L_088ACD90;
L_088ACD90:;
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(s0+28, v0);
    goto L_088ACD9C;
L_088ACD9C:;
    v0 = LD32(s1+8);
    f0 = BITSF(LD32(s1+12));
    ST32(s0+4, v0);
    v1 = LD32(s1+4);
    ST32(s0+8, FBITS(f0));
    ST32(s0, v1);
    v0 = LD32(s1+16);
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088ACDEC; }
    goto L_088ACDC0;
L_088ACDC0:;
    a0 = s0 + 0;
    func_088ACC08(a0, 0, 0, 0);
    goto L_088ACDC8;
L_088ACDC8:;
    func_089005D8();
    goto L_088ACDD0;
L_088ACDD0:;
    sp = sp + 32;
    return;
L_088ACDEC:;
    a0 = LD32(s0+24);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ACDF4;
L_088ACDF4:;
    goto L_088ACDC0;
}

/* 088ACDFC */
u64 func_088ACDFC(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088ACDFC:;
    v0 = D_08B2BB70 - (-17552);
    v1 = LD_U8(v0-17552);
    cnd_ = v1 != 0;
    v0 = 999;
    if (cnd_) { goto L_088ACE14; }
    goto L_088ACE0C;
L_088ACE0C:;
    v0 = D_08B2BBAC - (-17492);
    v0 = LD32(v0-17492);
    goto L_088ACE14;
L_088ACE14:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088ACE1C */
u32 func_088ACE1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ACE1C:;
    sp = sp - 16;
    v1 = D_08B2BBA8 - (-17496);
    a1 = 999;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088ACE54; }
    goto L_088ACE34;
L_088ACE34:;
    a1 = LD32(v1-17496);
    v0 = a1 + 1;
    ST32(v1-17496, v0);
    goto L_088ACE40;
L_088ACE40:;
    goto L_088ACE44;
L_088ACE44:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_088ACE54:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    s0 = D_08B2BBB0 - (-17488);
    if (cnd_) { goto L_088ACE40; }
    goto L_088ACE64;
L_088ACE64:;
    v0 = LD32(s0-17488);
    v0 = v0 < 0x408u;
    cnd_ = v0 != 0;
    v0 = 999;
    if (cnd_) { goto L_088ACE88; }
    goto L_088ACE74;
L_088ACE74:;
    v0 = D_08B2BBB4 - (-17484);
    v1 = LD32(v0-17484);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088ACEA0; }
    goto L_088ACE84;
L_088ACE84:;
    v0 = 999;
    goto L_088ACE88;
L_088ACE88:;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_088ACE44; }
    goto L_088ACE90;
L_088ACE90:;
    a1 = LD32(s0-17488);
    v0 = a1 + 1;
    ST32(s0-17488, v0);
    goto L_088ACE44;
L_088ACEA0:;
    v0 = func_08AB37B0(a0);
    goto L_088ACEA8;
L_088ACEA8:;
    a1 = v0 + 0;
    goto L_088ACE84;
}

/* 088ACEB0 */
u32 func_088ACEB0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_088ACEB0:;
    v0 = D_08B2BB98 - (-17512);
    a1 = LD32(v0-17512);
    t0 = a0 + 0;
    t1 = D_08B2BB8C - (-17524);
    v0 = LD32(a1+12);
    v1 = LD32(a1+8);
    a0 = v0 + 1;
    a3 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_088ACEEC; }
    goto L_088ACEDC;
L_088ACEDC:;
    v0 = LD32(a1+4);
    ST32(a1+12, a0);
    v0 = a3 + v0;
    a2 = LD32(v0);
    goto L_088ACEEC;
L_088ACEEC:;
    v0 = a2 << 1;
    v0 = v0 + a2;
    v1 = (u32)-1;
    a3 = (u32)-1;
    cnd_ = a2 == v1;
    a1 = v0 << 3;
    if (cnd_) { goto L_088ACF28; }
    goto L_088ACF04;
L_088ACF04:;
    v0 = D_08B2BB94 - (-17516);
    a0 = LD32(t1-17524);
    v1 = LD32(v0-17516);
    a3 = a2 + 0;
    a0 = a0 + 1;
    v1 = v1 + a1;
    ST32(v1, t0);
    ST32(v1+4, 0);
    ST32(t1-17524, a0);
    goto L_088ACF28;
L_088ACF28:;
    v0 = a3 + 0;
    return v0;
}

/* 088ACF30 */
void func_088ACF30(u32 a0, u32 t2)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ACF30:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    s1 = a0 + 0;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088AD104; }
    goto L_088ACF58;
L_088ACF58:;
    s2 = D_08B2BB94 - (-17516);
    s0 = s1 << 1;
    a2 = LD32(s2-17516);
    a0 = s0 + s1;
    v0 = a0 << 3;
    a1 = a2 + v0;
    v1 = LD32(a1+4);
    cnd_ = v1 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_088AD008; }
    goto L_088ACF7C;
L_088ACF7C:;
    v0 = a0 + 0;
    t6 = a1 + 0;
    a0 = a2 + 0;
    t1 = D_08B2BB84 - (-17532);
    t5 = v0 + 0;
    t4 = a2 + 0;
    t7 = D_08B2BB88 - (-17528);
    goto L_088ACF98;
L_088ACF98:;
    v1 = v0 << 3;
    a1 = LD32(t1-17532);
    v1 = a0 + v1;
    v0 = t3 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+8);
    a2 = 0 + 0;
    cnd_ = a1 == 0;
    t2 = t1 + 0;
    if (cnd_) { goto L_088ACFE4; }
    goto L_088ACFBC;
L_088ACFBC:;
    t0 = LD32(t7-17528);
    a3 = a1 + 0;
    a0 = t0 + 0;
    goto L_088ACFC8;
L_088ACFC8:;
    v0 = LD32(a0);
    a2 = a2 + 1;
    cnd_ = v0 == v1;
    a1 = a2 < a3;
    if (cnd_) { goto L_088AD120; }
    goto L_088ACFD8;
L_088ACFD8:;
    a0 = a0 + 4;
    cnd_ = a1 != 0;
    t2 = D_08B2BB84 - (-17532);
    if (cnd_) { goto L_088ACFC8; }
    goto L_088ACFE4;
L_088ACFE4:;
    v0 = LD32(t1-17532);
    v1 = LD32(t6+4);
    t3 = t3 + 1;
    v0 = v0 - 1;
    v1 = t3 < v1;
    ST32(t1-17532, v0);
    a0 = t4 + 0;
    cnd_ = v1 != 0;
    v0 = t5 + 0;
    if (cnd_) { goto L_088ACF98; }
    goto L_088AD008;
L_088AD008:;
    v0 = D_08B2BBB4 - (-17484);
    a0 = LD32(v0-17484);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2-17516); goto L_088AD0B8; }
    goto L_088AD018;
L_088AD018:;
    s2 = D_08B2BB94 - (-17516);
    t1 = LD32(s2-17516);
    a1 = s0 + s1;
    v0 = a1 << 3;
    a3 = t1 + v0;
    v1 = LD32(a3+4);
    cnd_ = v1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088AD0B4; }
    goto L_088AD038;
L_088AD038:;
    v0 = D_08B285B0 - (-31312);
    t5 = LD32(v0-31312);
    a2 = a1 + 0;
    a1 = t1 + 0;
    t4 = a3 + 0;
    t1 = a0 + 0;
    t3 = a2 + 0;
    t2 = a1 + 0;
    v0 = a2 << 3;
    goto L_088AD05C;
L_088AD05C:;
    v0 = a1 + v0;
    v1 = t0 << 2;
    v1 = v1 + v0;
    a3 = LD32(v1+8);
    t0 = t0 + 1;
    a2 = t3 + 0;
    v0 = a3 < 0x408u;
    cnd_ = v0 == 0;
    a1 = t2 + 0;
    if (cnd_) { goto L_088AD0A4; }
    goto L_088AD080;
L_088AD080:;
    v0 = LD32(t1+256);
    v1 = v0 << 3;
    a0 = v0 < 0x20u;
    v1 = v1 + t1;
    cnd_ = a0 == 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_088AD0A4; }
    goto L_088AD098;
L_088AD098:;
    ST32(t1+256, v0);
    ST32(v1, a3);
    ST32(v1+4, t5);
    goto L_088AD0A4;
L_088AD0A4:;
    v0 = LD32(t4+4);
    v0 = t0 < v0;
    cnd_ = v0 != 0;
    v0 = a2 << 3;
    if (cnd_) { goto L_088AD05C; }
    goto L_088AD0B4;
L_088AD0B4:;
    a0 = LD32(s2-17516);
    goto L_088AD0B8;
L_088AD0B8:;
    s0 = s0 + s1;
    s0 = s0 << 3;
    a0 = a0 + s0;
    func_08AB3824(a0, t2, t3);
    goto L_088AD0C8;
L_088AD0C8:;
    v0 = D_08B2BB98 - (-17512);
    a0 = LD32(v0-17512);
    v1 = LD32(s2-17516);
    a2 = LD32(a0);
    v1 = v1 + s0;
    ST32(v1, 0);
    ST32(v1+4, 0);
    v0 = LD32(a2+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD0F0;
L_088AD0F0:;
    v1 = D_08B2BB8C - (-17524);
    v0 = LD32(v1-17524);
    a0 = 1;
    v0 = v0 - 1;
    ST32(v1-17524, v0);
    goto L_088AD104;
L_088AD104:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
L_088AD120:;
    v0 = LD32(t2-17532);
    v0 = v0 << 2;
    v0 = v0 + t0;
    v1 = LD32(v0-4);
    ST32(a0, v1);
    goto L_088ACFE4;
}

/* 088AD138 */
void func_088AD138(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD138:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    s0 = a0 + 0;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_088AD1F4; }
    goto L_088AD15C;
L_088AD15C:;
    v1 = D_08B2BB80 - (-17536);
    v0 = LD32(v1-17536);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    s1 = D_08B2BB84 - (-17532);
    if (cnd_) { goto L_088AD1F4; }
    goto L_088AD170;
L_088AD170:;
    v0 = D_08B2BB7C - (-17540);
    a0 = a1 << 1;
    v1 = LD32(s1-17532);
    a1 = LD32(v0-17540);
    a0 = a0 + a2;
    v1 = v1 < a1;
    cnd_ = v1 == 0;
    a2 = a0 << 3;
    if (cnd_) { goto L_088AD1F4; }
    goto L_088AD190;
L_088AD190:;
    v0 = D_08B2BB94 - (-17516);
    v1 = LD32(v0-17516);
    a0 = D_08AD790C - (30988);
    a0 = a0 + 30988;
    a3 = v1 + a2;
    a2 = LD32(a3+4);
    v0 = LD32(a3);
    a1 = s0 + 0;
    v1 = a2 << 2;
    v0 = a2 < v0;
    v1 = v1 + a3;
    cnd_ = v0 == 0;
    t0 = a2 + 1;
    if (cnd_) { goto L_088AD208; }
    goto L_088AD1C4;
L_088AD1C4:;
    ST32(a3+4, t0);
    ST32(v1+8, s0);
    v0 = 999;
    goto L_088AD1D0;
L_088AD1D0:;
    cnd_ = s0 == v0;
    a0 = LD32(s1-17532);
    if (cnd_) { goto L_088AD1F4; }
    goto L_088AD1D8;
L_088AD1D8:;
    v1 = D_08B2BB88 - (-17528);
    a1 = LD32(v1-17528);
    v0 = a0 << 2;
    a0 = a0 + 1;
    v0 = v0 + a1;
    ST32(v0, s0);
    ST32(s1-17532, a0);
    goto L_088AD1F4;
L_088AD1F4:;
    sp = sp + 16;
    return;
L_088AD208:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD210;
L_088AD210:;
    v0 = 999;
    goto L_088AD1D0;
}

/* 088AD218 */
u32 func_088AD218(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088AD218:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    a2 = a0 + 0;
    cnd_ = v1 == 0;
    a3 = 999;
    if (cnd_) { goto L_088AD254; }
    goto L_088AD22C;
L_088AD22C:;
    v0 = D_08B2BB88 - (-17528);
    a1 = LD32(v0-17528);
    cnd_ = a1 == 0;
    v1 = D_08B2BB84 - (-17532);
    if (cnd_) { goto L_088AD254; }
    goto L_088AD23C;
L_088AD23C:;
    v0 = LD32(v1-17532);
    a0 = a0 << 2;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    a0 = a0 + a1;
    if (cnd_) { goto L_088AD254; }
    goto L_088AD250;
L_088AD250:;
    a3 = LD32(a0);
    goto L_088AD254;
L_088AD254:;
    v0 = a3 + 0;
    return v0;
}

/* 088AD25C */
float func_088AD25C(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD25C:;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    sp = sp - 16;
    f0 = BITSF(0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AD27C; }
    goto L_088AD274;
L_088AD274:;
    f0 = func_089005E0();
    goto L_088AD27C;
L_088AD27C:;
    sp = sp + 16;
    return f0;
}

/* 088AD288 */
u32 func_088AD288(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD288:;
    sp = sp - 16;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088AD2C0; }
    goto L_088AD2A0;
L_088AD2A0:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AD2C4; }
    goto L_088AD2B0;
L_088AD2B0:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AD2D0; }
    goto L_088AD2C0;
L_088AD2C0:;
    goto L_088AD2C4;
L_088AD2C4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_088AD2D0:;
    v0 = func_08900644(a0);
    goto L_088AD2D8;
L_088AD2D8:;
    a1 = v0 + 0;
    goto L_088AD2C0;
}

/* 088AD2E0 */
void func_088AD2E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD2E0:;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AD308; }
    goto L_088AD2F4;
L_088AD2F4:;
    ST32(a0, 0);
    ST32(a1, 0);
    goto L_088AD300;
L_088AD300:;
    sp = sp + 16;
    return;
L_088AD308:;
    func_08900690(a0, a1);
    goto L_088AD310;
L_088AD310:;
    goto L_088AD300;
}

/* 088AD318 */
void func_088AD318(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD318:;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088AD340; }
    goto L_088AD32C;
L_088AD32C:;
    ST32(a0, 0);
    ST32(a1, 0);
    goto L_088AD338;
L_088AD338:;
    sp = sp + 16;
    return;
L_088AD340:;
    func_089006AC(a0, a1);
    goto L_088AD348;
L_088AD348:;
    goto L_088AD338;
}

/* 088AD350 */
u32 func_088AD350(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD350:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = func_088AD374(a0, a1);
    goto L_088AD360;
L_088AD360:;
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    sp = sp + 16;
    return v0;
}

/* 088AD374 */
u32 func_088AD374(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AD374:;
    sp = sp - 32;
    v0 = D_08B2BB78 - (-17544);
    a1 = a1 & 0xff;
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    s0 = (u32)-1;
    if (cnd_) { goto L_088AD434; }
    goto L_088AD394;
L_088AD394:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088AD438; }
    goto L_088AD3A4;
L_088AD3A4:;
    v0 = D_08B2BB98 - (-17512);
    v1 = LD32(v0-17512);
    ST32(sp+4, 0);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088AD428; }
    goto L_088AD3C4;
L_088AD3C4:;
    v0 = D_08B2BB94 - (-17516);
    t4 = LD32(v1+4);
    t3 = LD32(v0-17516);
    goto L_088AD3D0;
L_088AD3D0:;
    t2 = LD32(sp+4);
    v0 = t2 << 2;
    v0 = v0 + t4;
    t1 = LD32(v0);
    v1 = t1 << 1;
    v1 = v1 + t1;
    v1 = v1 << 3;
    v0 = t3 + v1;
    t0 = LD32(v0+4);
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088AD41C; }
    goto L_088AD3FC;
L_088AD3FC:;
    v1 = v0 + 8;
    v0 = LD32(v1);
    goto L_088AD404;
L_088AD404:;
    a3 = a3 + 1;
    a2 = a3 < t0;
    cnd_ = v0 == a0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AD460; }
    goto L_088AD414;
L_088AD414:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088AD404; }
    goto L_088AD41C;
L_088AD41C:;
    v0 = t2 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088AD3D0; }
    goto L_088AD428;
L_088AD428:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_088AD448; }
    goto L_088AD434;
L_088AD434:;
    v0 = s0 + 0;
    goto L_088AD438;
L_088AD438:;
    sp = sp + 32;
    return v0;
L_088AD448:;
    cnd_ = a1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088AD438; }
    goto L_088AD450;
L_088AD450:;
    v0 = func_08A62C08();
    goto L_088AD458;
L_088AD458:;
    if (v0 != 0) s0 = 0;
    goto L_088AD434;
L_088AD460:;
    s0 = t1 + 0;
    goto L_088AD428;
}

/* 088AD468 */
u64 func_088AD468(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD468:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088AD494; }
    goto L_088AD484;
L_088AD484:;
    { u64 r_ = func_088A51EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AD48C;
L_088AD48C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AD4A0; }
    goto L_088AD494;
L_088AD494:;
    a0 = s0 + 0;
    { u64 r_ = func_088AC2A4(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AD49C;
L_088AD49C:;
    goto L_088AD4A0;
L_088AD4A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088AD4AC */
void func_088AD4AC(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD4AC:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    v0 = D_08B2BBA4 - (-17500);
    if (cnd_) { goto L_088AD4D0; }
    goto L_088AD4C4;
L_088AD4C4:;
    goto L_088AD4C8;
L_088AD4C8:;
    sp = sp + 16;
    return;
L_088AD4D0:;
    a0 = LD32(v0-17500);
    func_088ADF04(a0, t2, t3);
    goto L_088AD4D8;
L_088AD4D8:;
    goto L_088AD4C8;
}

/* 088AD4E0 */
void func_088AD4E0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD4E0:;
    sp = sp - 16;
    s0 = D_08B16040 - (24640);
    s0 = s0 + 24640;
    a1 = D_08AD7AEC - (31468);
    t0 = a0 + 0;
    a1 = a1 + 31468;
    a0 = s0 + 0;
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD510;
L_088AD510:;
    a0 = s0 + 0;
    func_089006E4();
    goto L_088AD518;
L_088AD518:;
    sp = sp + 16;
    return;
}

/* 088AD528 */
u32 func_088AD528(u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD528:;
    sp = sp - 16;
    v0 = D_08B2BB78 - (-17544);
    a1 = a1 & 0xff;
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    v0 = 999;
    if (cnd_) { goto L_088AD54C; }
    goto L_088AD544;
L_088AD544:;
    v0 = func_08A62C18();
    goto L_088AD54C;
L_088AD54C:;
    sp = sp + 16;
    return v0;
}

/* 088AD558 */
u32 func_088AD558(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD558:;
    sp = sp - 16;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088AD578; }
    goto L_088AD570;
L_088AD570:;
    v0 = func_08A62C20(a0);
    goto L_088AD578;
L_088AD578:;
    sp = sp + 16;
    return v0;
}

/* 088AD584 */
void func_088AD584(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD584:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    a0 = D_08AD7AF4 - (31476);
    v1 = LD_U8(v0-17555);
    a1 = RS_FADDR(func_088AD6B8, 0x088AD6B8u) - (-10568);
    a0 = a0 + 31476;
    a1 = a1 - 10568;
    a2 = 1;
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088AD5C0; }
    goto L_088AD5B0;
L_088AD5B0:;
    goto L_088AD5B4;
L_088AD5B4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_088AD5C0:;
    func_08897664(a0, a1, a2, a3, t1, t2, t3);
    goto L_088AD5C8;
L_088AD5C8:;
    goto L_088AD5B4;
}

/* 088AD5D0 */
rv_t func_088AD5D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD5D0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088AD5F0; }
    goto L_088AD5E8;
L_088AD5E8:;
    cnd_ = a2 == 0;
    v0 = D_08B2BB9C - (-17508);
    if (cnd_) { goto L_088AD634; }
    goto L_088AD5F0;
L_088AD5F0:;
    a0 = D_08AD7BC0 - (31680);
    a0 = a0 + 31680;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD5FC;
L_088AD5FC:;
    a0 = D_08AD7C48 - (31816);
    a0 = a0 + 31816;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD608;
L_088AD608:;
    a0 = D_08AD7CD4 - (31956);
    a0 = a0 + 31956;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD614;
L_088AD614:;
    a0 = D_08AD7D5C - (32092);
    a0 = a0 + 32092;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD620;
L_088AD620:;
    v0 = 1;
    goto L_088AD624;
L_088AD624:;
    goto L_088AD628;
L_088AD628:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088AD634:;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = D_08AD7D7C - (32124); goto L_088AD6B0; }
    goto L_088AD640;
L_088AD640:;
    { rv_t r_ = func_088AD7EC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD648;
L_088AD648:;
    s0 = v0 + 0;
    v0 = 999;
    cnd_ = s0 == v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088AD624; }
    goto L_088AD658;
L_088AD658:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = func_088AD374(a0, a1);
    goto L_088AD664;
L_088AD664:;
    a0 = D_08AD7DC0 - (32192);
    cnd_ = v0 == 0;
    a0 = a0 + 32192;
    if (cnd_) { goto L_088AD6A0; }
    goto L_088AD670;
L_088AD670:;
    a0 = s0 + 0;
    v0 = func_088AD558(a0);
    goto L_088AD678;
L_088AD678:;
    a0 = D_08AD7E1C - (32284);
    a1 = v0 + 0;
    a0 = a0 + 32284;
    a2 = s0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD68C;
L_088AD68C:;
    a0 = s0 + 0;
    a1 = 3;
    { u64 r_ = func_088AD908(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AD698;
L_088AD698:;
    goto L_088AD628;
L_088AD6A0:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD6A8;
L_088AD6A8:;
    v0 = 0 + 0;
    goto L_088AD624;
L_088AD6B0:;
    a0 = a0 + 32124;
    goto L_088AD6A0;
}

/* 088AD6B8 */
rv_t func_088AD6B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088AD6B8:;
    v0 = a0 + 0;
    sp = sp - 48;
    a0 = D_08AD7E48 - (32328);
    v0 = v0 & 0xff;
    a0 = a0 + 32328;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AD7B8; }
    goto L_088AD6E0;
L_088AD6E0:;
    f0 = func_088AD25C();
    goto L_088AD6E8;
L_088AD6E8:;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    f21 = BITSF(0);
    cnd_ = v1 != 0;
    f20 = f0;
    if (cnd_) { goto L_088AD7DC; }
    goto L_088AD6FC;
L_088AD6FC:;
    a0 = sp + 0;
    a1 = sp + 4;
    s0 = D_08AD7E7C - (32380);
    func_088AD2E0(a0, a1);
    goto L_088AD70C;
L_088AD70C:;
    s0 = s0 + 32380;
    a1 = sp + 12;
    a0 = sp + 8;
    func_088AD318(a0, a1);
    goto L_088AD71C;
L_088AD71C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD724;
L_088AD724:;
    a0 = D_08AD7EDC - (32476);
    a0 = a0 + 32476;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD730;
L_088AD730:;
    a0 = s0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD738;
L_088AD738:;
    v0 = D_08B2BB84 - (-17532);
    a1 = LD32(v0-17532);
    a0 = D_08AD7F3C - (32572);
    a0 = a0 + 32572;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD74C;
L_088AD74C:;
    v0 = D_08AEC4C0 - (-15168);
    f0 = BITSF(LD32(v0-15168));
    a0 = D_08AD7F68 - (32616);
    f0 = f20 * f0;
    f1 = BITSF(F2I(f0, 1));
    a1 = FBITS(f1);
    a0 = a0 + 32616;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD76C;
L_088AD76C:;
    f12 = f21;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AD774;
L_088AD774:;
    a0 = D_08AD7F9C - (32668);
    a2 = v0 + 0;
    a3 = v1 + 0;
    a0 = a0 + 32668;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD788;
L_088AD788:;
    a1 = LD32(sp);
    a2 = LD32(sp+8);
    a0 = D_08AD7FD4 - (32724);
    a0 = a0 + 32724;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD79C;
L_088AD79C:;
    a1 = LD32(sp+4);
    a2 = LD32(sp+12);
    a0 = D_08AD8028 - (-32728);
    a0 = a0 - 32728;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD7B0;
L_088AD7B0:;
    a0 = D_08AD807C - (-32644);
    a0 = a0 - 32644;
    goto L_088AD7B8;
L_088AD7B8:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD7C0;
L_088AD7C0:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088AD7DC:;
    f0 = func_089006C8();
    goto L_088AD7E4;
L_088AD7E4:;
    f21 = f0;
    goto L_088AD6FC;
}

/* 088AD7EC */
rv_t func_088AD7EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088AD7EC:;
    sp = sp - 48;
    a1 = sp + 0;
    a2 = 0 + 0;
    s4 = 999;
    s3 = 999;
    s2 = 999;
    s0 = a0 + 0;
    v0 = LD_U16(a0);
    a0 = a0 + 2;
    v0 = v0 ^ 0x23;
    s1 = v0 < 0x1u;
    if (s1 == 0) a0 = s0;
    v0 = func_08837CB8(a0, a1, a2);
    goto L_088AD838;
L_088AD838:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_088AD858; }
    goto L_088AD840;
L_088AD840:;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_088AD858; }
    goto L_088AD848;
L_088AD848:;
    v0 = func_088AD558(a0);
    goto L_088AD850;
L_088AD850:;
    v1 = LD32(sp);
    if (v0 != 0) s2 = v1;
    goto L_088AD858;
L_088AD858:;
    cnd_ = s1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AD8F8; }
    goto L_088AD860;
L_088AD860:;
    a0 = s2 ^ 0x3e7;
    a1 = s3 ^ 0x3e7;
    v0 = a0 < 0x1u;
    v1 = a1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    v1 = 0 < a1;
    if (cnd_) { goto L_088AD8E4; }
    goto L_088AD87C;
L_088AD87C:;
    v0 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = s2 ^ 0x3e7;
    if (cnd_) { goto L_088AD8D8; }
    goto L_088AD88C;
L_088AD88C:;
    cnd_ = s2 == s3;
    a0 = D_08AD8080 - (-32640);
    if (cnd_) { goto L_088AD8D8; }
    goto L_088AD894;
L_088AD894:;
    a1 = s0 + 0;
    a0 = a0 - 32640;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD8A0;
L_088AD8A0:;
    a0 = D_08AD80E8 - (-32536);
    a0 = a0 - 32536;
    a1 = s2 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD8B4;
L_088AD8B4:;
    v0 = s4 + 0;
    goto L_088AD8B8;
L_088AD8B8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088AD8D8:;
    s4 = s2 + 0;
    if (v0 == 0) s4 = s3;
    goto L_088AD8B4;
L_088AD8E4:;
    a0 = D_08AD8154 - (-32428);
    a0 = a0 - 32428;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD8F0;
L_088AD8F0:;
    v0 = s4 + 0;
    goto L_088AD8B8;
L_088AD8F8:;
    a1 = 1;
    v0 = func_088AD528(a1);
    goto L_088AD900;
L_088AD900:;
    s3 = v0 + 0;
    goto L_088AD860;
}

/* 088AD908 */
u64 func_088AD908(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AD908:;
    sp = sp - 16;
    s2 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    v0 = func_088AD374(a0, a1);
    goto L_088AD92C;
L_088AD92C:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AD950; }
    goto L_088AD934;
L_088AD934:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AD950:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = func_088AD350(a0, a1);
    goto L_088AD95C;
L_088AD95C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088ADA00; }
    goto L_088AD964;
L_088AD964:;
    a0 = 96;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AD978;
L_088AD978:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088AD9D4; }
    goto L_088AD980;
L_088AD980:;
    v0 = LD32(v0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+28); goto L_088AD998; }
    goto L_088AD98C;
L_088AD98C:;
    ST32(v0+4, s2);
    ST32(v0, s1);
    v1 = LD32(s0+28);
    goto L_088AD998;
L_088AD998:;
    v0 = 11;
    ST32(s0, v0);
    v1 = v1 | 0x1;
    a0 = s0 + 0;
    ST32(s0+28, v1);
    a1 = 0 + 0;
    a2 = 1;
    ST32(s0+4, s1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD9BC;
L_088AD9BC:;
    ST32(s0, 0);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+4, 0);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AD9D4;
L_088AD9D4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = func_088AD374(a0, a1);
    goto L_088AD9E0;
L_088AD9E0:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = D_08AEC4C4 - (-15164);
    if (cnd_) { goto L_088AD9F8; }
    goto L_088AD9F0;
L_088AD9F0:;
    f12 = BITSF(LD32(v0-15164));
    func_0890071C();
    goto L_088AD9F8;
L_088AD9F8:;
    v1 = 1;
    goto L_088AD934;
L_088ADA00:;
    a1 = 1;
    v0 = func_088AD350(a0, a1);
    goto L_088ADA08;
L_088ADA08:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AD934; }
    goto L_088ADA10;
L_088ADA10:;
    a0 = s1 + 0;
    v0 = func_08A62C10();
    goto L_088ADA18;
L_088ADA18:;
    v1 = v0 + 0;
    goto L_088AD934;
}

/* 088ADA20 */
void func_088ADA20(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ADA20:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 1266;
    s2 = a1 + 0;
    s0 = a2 & 0xff;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ADA48;
L_088ADA48:;
    ST32(s1, v0);
    ST8(s1+16, s0);
    ST32(s1+12, s2);
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return;
}

/* 088ADA74 */
void func_088ADA74(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ADA74:;
    sp = sp - 16;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088ADA94; }
    goto L_088ADA88;
L_088ADA88:;
    goto L_088ADA8C;
L_088ADA8C:;
    sp = sp + 16;
    return;
L_088ADA94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADA9C;
L_088ADA9C:;
    goto L_088ADA8C;
}

/* 088ADAA4 */
u64 func_088ADAA4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088ADAA4:;
    sp = sp - 32;
    s4 = a0 + 0;
    a2 = LD32(a0+12);
    cnd_ = (s32)a2 <= 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_088ADB28; }
    goto L_088ADAD0;
L_088ADAD0:;
    v0 = D_08B2BB94 - (-17516);
    a0 = LD32(v0-17516);
    v1 = a2 << 1;
    v1 = v1 + a2;
    v1 = v1 << 3;
    v1 = a0 + v1;
    s2 = LD32(v1+4);
    cnd_ = s2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088ADB5C; }
    goto L_088ADAF4;
L_088ADAF4:;
    s0 = v1 + 8;
    a1 = LD32(s0);
    goto L_088ADAFC;
L_088ADAFC:;
    a0 = s3 + 0;
    s1 = s1 + 1;
    v0 = func_088ABEB4();
    goto L_088ADB08;
L_088ADB08:;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    v1 = s1 < s2;
    if (cnd_) { goto L_088ADB28; }
    goto L_088ADB14;
L_088ADB14:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_088ADAFC; }
    goto L_088ADB1C;
L_088ADB1C:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088ADB60; }
    goto L_088ADB28;
L_088ADB28:;
    v0 = func_088F9270(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088ADB30;
L_088ADB30:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_088ADB54; }
    goto L_088ADB3C;
L_088ADB3C:;
    v0 = LD32(s3+20);
    v0 = v0 + 20;
    v0 = v0 < 0x4f3u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4+4); goto L_088ADB7C; }
    goto L_088ADB50;
L_088ADB50:;
    a0 = s4 + 0;
    goto L_088ADB54;
L_088ADB54:;
    a1 = s3 + 0;
    { u64 r_ = func_088ADCCC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADB5C;
L_088ADB5C:;
    goto L_088ADB60;
L_088ADB60:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088ADB7C:;
    a0 = LD32(s4);
    a1 = 1266;
    a1 = a1 - v0;
    a0 = a0 + v0;
    a2 = s3 + 0;
    { u64 r_ = func_088A2D9C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADB94;
L_088ADB94:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088ADBB8; }
    goto L_088ADB9C;
L_088ADB9C:;
    v1 = LD32(s4+4);
    goto L_088ADBA0;
L_088ADBA0:;
    v0 = LD32(s4+8);
    v1 = v1 + a0;
    v0 = v0 + 1;
    ST32(s4+8, v0);
    ST32(s4+4, v1);
    goto L_088ADB5C;
L_088ADBB8:;
    a0 = s4 + 0;
    func_088ADBE0(a0, 0, 0);
    goto L_088ADBC0;
L_088ADBC0:;
    a0 = LD32(s4);
    a2 = s3 + 0;
    a1 = 1266;
    { u64 r_ = func_088A2D9C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADBD0;
L_088ADBD0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088ADB5C; }
    goto L_088ADBD8;
L_088ADBD8:;
    v1 = LD32(s4+4);
    goto L_088ADBA0;
}

/* 088ADBE0 */
void func_088ADBE0(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088ADBE0:;
    sp = sp - 48;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088ADC74; }
    goto L_088ADBFC;
L_088ADBFC:;
    v0 = LD32(a0+8);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_088ADC90; }
    goto L_088ADC0C;
L_088ADC0C:;
    a3 = LD32(a0);
    a2 = 0 + 0;
    a0 = 91;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADC1C;
L_088ADC1C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088ADC6C; }
    goto L_088ADC24;
L_088ADC24:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v0 = D_08AD818C - (-32372);
    if (cnd_) { goto L_088ADC88; }
    goto L_088ADC34;
L_088ADC34:;
    v0 = D_08AD8188 - (-32376);
    v0 = LD32(v0-32376);
    goto L_088ADC3C;
L_088ADC3C:;
    cnd_ = s0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_088ADC6C; }
    goto L_088ADC44;
L_088ADC44:;
    v0 = LD_U8(s1+16);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088ADC5C; }
    goto L_088ADC50;
L_088ADC50:;
    v0 = LD32(s0+28);
    v0 = v0 | 0x1;
    ST32(s0+28, v0);
    goto L_088ADC5C;
L_088ADC5C:;
    a1 = s0 + 0;
    { u64 r_ = func_088ADCCC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADC64;
L_088ADC64:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADC6C;
L_088ADC6C:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_088ADC74;
L_088ADC74:;
    sp = sp + 48;
    return;
L_088ADC88:;
    v0 = LD32(v0-32372);
    goto L_088ADC3C;
L_088ADC90:;
    a1 = sp + 0;
    v0 = func_088A2F94(a0, a1);
    goto L_088ADC98;
L_088ADC98:;
    a0 = LD_U16(sp);
    a2 = LD_U16(sp+2);
    a1 = LD32(sp+16);
    a3 = v0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADCAC;
L_088ADCAC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088ADC6C; }
    goto L_088ADCB4;
L_088ADCB4:;
    v0 = LD32(sp+4);
    f0 = BITSF(LD32(sp+12));
    ST32(s0, v0);
    ST32(s0+8, FBITS(f0));
    v0 = LD32(sp+8);
    goto L_088ADC3C;
}

/* 088ADCCC */
u64 func_088ADCCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ADCCC:;
    sp = sp - 16;
    v1 = a1 + 0;
    v0 = LD32(a0+12);
    a0 = a1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088ADCFC; }
    goto L_088ADCE8;
L_088ADCE8:;
    { u64 r_ = func_08900590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADCF0;
L_088ADCF0:;
    goto L_088ADCF4;
L_088ADCF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088ADCFC:;
    a0 = v1 + 0;
    { u64 r_ = func_089005AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADD04;
L_088ADD04:;
    goto L_088ADCF4;
}

/* 088ADD0C */
void func_088ADD0C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088ADD0C:;
    sp = sp - 32;
    s0 = a1 << 2;
    s4 = a0 + 0;
    a0 = s0 + 0;
    s5 = a1 + 0;
    s3 = 0 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ADD44;
L_088ADD44:;
    a0 = s0 + 0;
    ST32(s4, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ADD50;
L_088ADD50:;
    cnd_ = (s32)s5 <= 0;
    ST32(s4+4, v0);
    if (cnd_) { goto L_088ADDB8; }
    goto L_088ADD58;
L_088ADD58:;
    s0 = LD32(s4);
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ADD64;
L_088ADD64:;
    s2 = s3 << 2;
    a1 = s3 + 0;
    s0 = s2 + s0;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a2 = 0 + 0;
    func_088ADA20(a0, a1, a2, 0, 0, 0);
    goto L_088ADD80;
L_088ADD80:;
    ST32(s0, s1);
    a0 = 20;
    v0 = LD32(s4+4);
    s2 = s2 + v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ADD94;
L_088ADD94:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = 1;
    s3 = s3 + 1;
    s0 = v0 + 0;
    func_088ADA20(a0, a1, a2, 0, 0, 0);
    goto L_088ADDAC;
L_088ADDAC:;
    v0 = (s32)s3 < (s32)s5;
    cnd_ = v0 != 0;
    ST32(s2, s0);
    if (cnd_) { goto L_088ADD58; }
    goto L_088ADDB8;
L_088ADDB8:;
    ST32(s4+8, s5);
    sp = sp + 32;
    return;
}

/* 088ADDE0 */
void func_088ADDE0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088ADDE0:;
    sp = sp - 32;
    s3 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088ADE48; }
    goto L_088ADE08;
L_088ADE08:;
    v0 = LD32(s2+4);
    goto L_088ADE0C;
L_088ADE0C:;
    s1 = s3 << 2;
    s3 = s3 + 1;
    v0 = s1 + v0;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088ADEB4; }
    goto L_088ADE24;
L_088ADE24:;
    v0 = LD32(s2);
    goto L_088ADE28;
L_088ADE28:;
    v0 = s1 + v0;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088ADE9C; }
    goto L_088ADE38;
L_088ADE38:;
    v0 = LD32(s2+8);
    goto L_088ADE3C;
L_088ADE3C:;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_088ADE0C; }
    goto L_088ADE48;
L_088ADE48:;
    a0 = LD32(s2+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088ADE8C; }
    goto L_088ADE54;
L_088ADE54:;
    a0 = LD32(s2);
    goto L_088ADE58;
L_088ADE58:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088ADE7C; }
    goto L_088ADE60;
L_088ADE60:;
    goto L_088ADE64;
L_088ADE64:;
    sp = sp + 32;
    return;
L_088ADE7C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADE84;
L_088ADE84:;
    goto L_088ADE64;
L_088ADE8C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADE94;
L_088ADE94:;
    a0 = LD32(s2);
    goto L_088ADE58;
L_088ADE9C:;
    func_088ADA74(a0, t1, t2, t3);
    goto L_088ADEA4;
L_088ADEA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADEAC;
L_088ADEAC:;
    v0 = LD32(s2+8);
    goto L_088ADE3C;
L_088ADEB4:;
    func_088ADA74(a0, t1, t2, t3);
    goto L_088ADEBC;
L_088ADEBC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADEC4;
L_088ADEC4:;
    v0 = LD32(s2);
    goto L_088ADE28;
}

/* 088ADECC */
u64 func_088ADECC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ADECC:;
    sp = sp - 16;
    a2 = a2 << 2;
    v0 = LD32(a1+28);
    v0 = v0 & 0x1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    a2 = a2 + v1;
    a0 = LD32(a2);
    { u64 r_ = func_088ADAA4(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088ADEF8;
L_088ADEF8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088ADF04 */
void func_088ADF04(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ADF04:;
    sp = sp - 16;
    s2 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088ADF60; }
    goto L_088ADF28;
L_088ADF28:;
    v0 = LD32(s1);
    goto L_088ADF2C;
L_088ADF2C:;
    s0 = s2 << 2;
    s2 = s2 + 1;
    v0 = s0 + v0;
    a0 = LD32(v0);
    func_088ADBE0(a0, t2, t3);
    goto L_088ADF40;
L_088ADF40:;
    v0 = LD32(s1+4);
    s0 = s0 + v0;
    a0 = LD32(s0);
    func_088ADBE0(a0, 0, 0);
    goto L_088ADF50;
L_088ADF50:;
    v0 = LD32(s1+8);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_088ADF2C; }
    goto L_088ADF60;
L_088ADF60:;
    sp = sp + 16;
    return;
}

/* 088ADF78 */
void func_088ADF78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088ADF78:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = 1796;
    s0 = v0 & 0xff;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ADF94;
L_088ADF94:;
    a2 = v0 + 4;
    v0 = 16;
    ST32(a2-4, v0);
    v1 = 15;
    v0 = a2 + 0;
    a1 = 999;
    a0 = (u32)-1;
    goto L_088ADFB0;
L_088ADFB0:;
    v1 = v1 - 1;
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    ST16(v0+20, 0);
    ST32(v0+84, a1);
    ST32(v0+88, 0);
    ST8(v0+92, 0);
    ST32(v0+96, 0);
    ST32(v0+100, 0);
    ST32(v0+104, 0);
    ST32(v0+108, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 112;
    if (cnd_) { goto L_088ADFB0; }
    goto L_088ADFE4;
L_088ADFE4:;
    v0 = D_08B2BBF4 - (-17420);
    ST32(v0-17420, a2);
    v1 = D_08B2BBF8 - (-17416);
    v0 = D_08B16060 - (24672);
    ST32(v1-17416, 0);
    cnd_ = s0 == 0;
    ST8(v0+24672, s0);
    if (cnd_) { goto L_088AE018; }
    goto L_088AE000;
L_088AE000:;
    func_08900724();
    goto L_088AE008;
L_088AE008:;
    goto L_088AE00C;
L_088AE00C:;
    sp = sp + 16;
    return;
L_088AE018:;
    a0 = 0 + 0;
    a1 = 10;
    a2 = 16;
    func_088A1DC0(a0, a1, a2);
    goto L_088AE028;
L_088AE028:;
    goto L_088AE00C;
}

/* 088AE030 */
rv_t func_088AE030(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_088AE030:;
    sp = sp - 160;
    v0 = D_08B16060 - (24672);
    v1 = LD_U8(v0+24672);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AE0A4; }
    goto L_088AE06C;
L_088AE06C:;
    { rv_t r_ = func_0890076C(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE074;
L_088AE074:;
    goto L_088AE078;
L_088AE078:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_088AE0A4:;
    func_088A1F20(a3, t0, t1, t2, t3);
    goto L_088AE0AC;
L_088AE0AC:;
    a0 = D_08B2BBF0 - (-17424);
    v1 = D_08B285B0 - (-31312);
    v1 = LD32(v1-31312);
    v0 = LD32(a0-17424);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = v1 + 30000;
    if (cnd_) { goto L_088AE1DC; }
    goto L_088AE0C8;
L_088AE0C8:;
    s5 = D_08B2BBF8 - (-17416);
    v0 = func_08A627F4();
    goto L_088AE0D0;
L_088AE0D0:;
    a0 = v0 + 0;
    s4 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE0DC;
L_088AE0DC:;
    s3 = v0 + 0;
    v0 = D_08B2AE0C - (-20980);
    a0 = LD32(v0-20980);
    v1 = 16;
    v0 = a0 < 0x11u;
    if (v0 != 0) v1 = a0;
    ST32(s5-17416, v1);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(sp+96, 0);
    if (cnd_) { goto L_088AE1CC; }
    goto L_088AE104;
L_088AE104:;
    fp = D_08B2BBF4 - (-17420);
    s7 = sp + 96;
    s6 = 4;
    goto L_088AE110;
L_088AE110:;
    a2 = 32;
    a1 = sp + 16;
    func_088A2664(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AE11C;
L_088AE11C:;
    a0 = LD32(sp+96);
    a1 = s3 + 0;
    func_08A627FC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AE128;
L_088AE128:;
    a0 = LD32(sp+96);
    v0 = func_088A2C44(a0);
    goto L_088AE130;
L_088AE130:;
    a0 = LD32(sp+96);
    ST32(sp+80, v0);
    ST8(sp+84, 0);
    ST8(sp+85, 0);
    v0 = func_088A2CB4(a0);
    goto L_088AE144;
L_088AE144:;
    s0 = v0 + 0;
    a0 = LD32(sp+96);
    v0 = func_088A2734(a0);
    goto L_088AE150;
L_088AE150:;
    a0 = LD32(sp+96);
    s2 = v0 + 0;
    v0 = func_088A276C(a0);
    goto L_088AE15C;
L_088AE15C:;
    a0 = LD32(sp+96);
    s1 = v0 + 0;
    v0 = func_088A27A4(a0);
    goto L_088AE168;
L_088AE168:;
    a1 = LD32(sp+96);
    a0 = LD32(fp-17420);
    t2 = v0 + 0;
    v1 = a1 << 3;
    v1 = v1 - a1;
    v1 = v1 << 4;
    a0 = a0 + v1;
    a2 = s0 + 0;
    a3 = s2 + 0;
    t0 = s1 + 0;
    a1 = sp + 80;
    t1 = sp + 16;
    t3 = 0 + 0;
    ST32(sp, s7);
    ST32(sp+4, s6);
    ST32(sp+8, s3);
    ST32(sp+12, s4);
    func_08AB38E0(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_088AE1B0;
L_088AE1B0:;
    v0 = LD32(sp+96);
    v1 = LD32(s5-17416);
    v0 = v0 + 1;
    v1 = v0 < v1;
    a0 = v0 + 0;
    cnd_ = v1 != 0;
    ST32(sp+96, v0);
    if (cnd_) { goto L_088AE110; }
    goto L_088AE1CC;
L_088AE1CC:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE1D4;
L_088AE1D4:;
    goto L_088AE078;
L_088AE1DC:;
    ST32(a0-17424, v0);
    { rv_t r_ = func_088A1F70(0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE1E4;
L_088AE1E4:;
    goto L_088AE0C8;
}

/* 088AE1EC */
u64 func_088AE1EC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE1EC:;
    sp = sp - 16;
    v0 = D_08B16060 - (24672);
    v1 = LD_U8(v0+24672);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088AE2B0; }
    goto L_088AE210;
L_088AE210:;
    s2 = D_08B2BBF4 - (-17420);
    { u64 r_ = func_08900748(a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE218;
L_088AE218:;
    a0 = LD32(s2-17420);
    goto L_088AE21C;
L_088AE21C:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2-17420, 0); goto L_088AE290; }
    goto L_088AE224;
L_088AE224:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 4;
    s1 = a0 + v0;
    goto L_088AE238;
L_088AE238:;
    v0 = LD32(s2-17420);
    goto L_088AE23C;
L_088AE23C:;
    cnd_ = v0 == s1;
    s0 = s1 - 112;
    if (cnd_) { goto L_088AE280; }
    goto L_088AE244;
L_088AE244:;
    v0 = LD32(s0+96);
    s1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AE270; }
    goto L_088AE254;
L_088AE254:;
    v0 = LD32(s0+104);
    goto L_088AE258;
L_088AE258:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088AE238; }
    goto L_088AE260;
L_088AE260:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE268;
L_088AE268:;
    v0 = LD32(s2-17420);
    goto L_088AE23C;
L_088AE270:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE278;
L_088AE278:;
    v0 = LD32(s0+104);
    goto L_088AE258;
L_088AE280:;
    a0 = LD32(s2-17420);
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE28C;
L_088AE28C:;
    ST32(s2-17420, 0);
    goto L_088AE290;
L_088AE290:;
    v0 = D_08B2BBF8 - (-17416);
    ST32(v0-17416, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AE2B0:;
    s2 = D_08B2BBF4 - (-17420);
    { u64 r_ = func_088A1EC0(a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE2B8;
L_088AE2B8:;
    a0 = LD32(s2-17420);
    goto L_088AE21C;
}

/* 088AE2C0 */
void func_088AE2C0(void)
{
    u32 v0 = 0;
L_088AE2C0:;
    v0 = D_08B2BBF0 - (-17424);
    ST32(v0-17424, 0);
    return;
}

/* 088AE2CC */
u32 func_088AE2CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088AE2CC:;
    a1 = D_08B2BBF4 - (-17420);
    v0 = LD32(a1-17420);
    v1 = a0 << 3;
    v1 = v1 - a0;
    v1 = v1 << 4;
    v0 = v0 + v1;
    return v0;
}

/* 088AE2E8 */
void func_088AE2E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48); memcpy(stack_ + 48, PTR(sp_in), 16); /* stack-passed arguments */
L_088AE2E8:;
    sp = sp - 48;
    v0 = D_08B2BBF4 - (-17420);
    v1 = a0 << 3;
    t4 = LD32(v0-17420);
    v0 = LD32(a1);
    v1 = v1 - a0;
    v1 = v1 << 4;
    t4 = t4 + v1;
    ST32(sp+16, v0);
    a2 = a2 & 0xffff;
    a0 = t4 + 0;
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    t5 = LD32(a1+4);
    ST32(sp, v0);
    a1 = sp + 16;
    ST32(sp+4, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+20, t5);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    func_08AB38E0(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_088AE348;
L_088AE348:;
    sp = sp + 48;
    return;
}

/* 088AE354 */
void func_088AE354(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088AE354:;
    v1 = D_08B2BBF4 - (-17420);
    a1 = LD32(v1-17420);
    v0 = a0 << 3;
    v0 = v0 - a0;
    v0 = v0 << 4;
    a1 = a1 + v0;
    ST8(a1+92, 0);
    return;
}

/* 088AE374 */
void func_088AE374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AE374:;
    sp = sp - 32;
    s4 = D_08B2BBFC - (-17412);
    s3 = a3 & 0xff;
    s2 = s4 - 17412;
    s1 = a0 + 0;
    t0 = LD32(a1);
    ST32(a0, t0);
    v0 = LD32(t0-12);
    v1 = LD32(a1+4);
    a1 = a2 + 0;
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = 0 + 0;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v1 = 999;
    cnd_ = a2 == v1;
    s0 = s1 + v0;
    if (cnd_) { goto L_088AE460; }
    goto L_088AE3D4;
L_088AE3D4:;
    ST32(s0+4, a1);
    a0 = 12;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-12);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE3FC;
L_088AE3FC:;
    a0 = LD32(s4-17412);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    a0 = s1 + 0;
    ST32(v0+4, a1);
    ST32(s2+12, v1);
    ST32(s0, v0);
    ST32(v0, s1);
    cnd_ = s3 != 0;
    ST8(v0+8, 0);
    if (cnd_) { goto L_088AE450; }
    goto L_088AE430;
L_088AE430:;
    goto L_088AE434;
L_088AE434:;
    sp = sp + 32;
    return;
L_088AE450:;
    func_088AE470(a0, 0, 0);
    goto L_088AE458;
L_088AE458:;
    goto L_088AE434;
L_088AE460:;
    v0 = func_088ACE1C(a0);
    goto L_088AE468;
L_088AE468:;
    a1 = v0 + 0;
    goto L_088AE3D4;
}

/* 088AE470 */
void func_088AE470(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE470:;
    sp = sp - 16;
    a1 = 4;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 95;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE494;
L_088AE494:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_088AE4D4; }
    goto L_088AE4A8;
L_088AE4A8:;
    v1 = LD32(s0);
    a3 = LD32(v0+24);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a3, v1);
    v0 = LD32(t0+28);
    ST32(t0, 0);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE4D4;
L_088AE4D4:;
    sp = sp + 16;
    return;
}

/* 088AE4E4 */
void func_088AE4E4(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE4E4:;
    sp = sp - 16;
    a3 = D_08B2BBFC - (-17412);
    t0 = a0 + 0;
    s0 = a3 - 17412;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    a1 = LD32(s0+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a1 = a1 - 1;
    v1 = LD32(a0);
    a0 = LD32(a3-17412);
    v0 = LD32(v1-12);
    v0 = t0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a1;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088AE564; }
    goto L_088AE548;
L_088AE548:;
    v0 = LD32(a0);
    goto L_088AE54C;
L_088AE54C:;
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(s0+8); goto L_088AE574; }
    goto L_088AE554;
L_088AE554:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088AE54C; }
    goto L_088AE564;
L_088AE564:;
    sp = sp + 16;
    return;
L_088AE574:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088AE584; }
    goto L_088AE57C;
L_088AE57C:;
    ST8(a0+8, v0);
    goto L_088AE564;
L_088AE584:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_088AE5AC; }
    goto L_088AE58C;
L_088AE58C:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_088AE594;
L_088AE594:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE59C;
L_088AE59C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_088AE564;
L_088AE5AC:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_088AE594;
}

/* 088AE5BC */
rv_t func_088AE5BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE5BC:;
    v0 = D_08AF7BCC - (31692);
    v0 = v0 + 31692;
    v1 = v0 + 48;
    sp = sp - 16;
    ST32(a0+4, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B2BBFC - (-17412);
    a1 = s0 + 0;
    a0 = a0 - 17412;
    s0 = s0 + 4;
    func_08AB3A50(a0, a1, t1, t2, t3);
    goto L_088AE5F4;
L_088AE5F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE5FC;
L_088AE5FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AE60C */
rv_t func_088AE60C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE60C:;
    v0 = D_08AF7BCC - (31692);
    v0 = v0 + 31692;
    v1 = v0 + 48;
    sp = sp - 16;
    ST32(a0+4, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B2BBFC - (-17412);
    a1 = s0 + 0;
    a0 = a0 - 17412;
    s1 = s0 + 4;
    func_08AB3A50(a0, a1, t1, t2, t3);
    goto L_088AE648;
L_088AE648:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE650;
L_088AE650:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE658;
L_088AE658:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AE66C */
rv_t func_088AE66C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AE66C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AE6EC; }
    goto L_088AE6A0;
L_088AE6A0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AE6C4; }
    goto L_088AE6B4;
L_088AE6B4:;
    v0 = D_08B2BBFC - (-17412);
    a0 = LD32(v0-17412);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AE6DC; }
    goto L_088AE6C4;
L_088AE6C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088AE6DC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE6E4;
L_088AE6E4:;
    goto L_088AE6C4;
L_088AE6EC:;
    s3 = D_08B2BBFC - (-17412);
    s0 = s3 - 17412;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE704;
L_088AE704:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17412, v0);
    if (cnd_) { goto L_088AE730; }
    goto L_088AE714;
L_088AE714:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088AE71C;
L_088AE71C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AE71C; }
    goto L_088AE730;
L_088AE730:;
    v0 = s3 - 17412;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088AE6A0;
}

/* 088AE740 */
rv_t func_088AE740(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE740:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088AE66C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE754;
L_088AE754:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AE760 */
rv_t func_088AE760(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE760:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088AE66C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE774;
L_088AE774:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AE780 */
rv_t func_088AE780(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE780:;
    sp = sp - 16;
    v0 = 127;
    s0 = a0 + 0;
    a1 = 10;
    a2 = 999;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088AE7E8; }
    goto L_088AE7A8;
L_088AE7A8:;
    v0 = func_08900790();
    goto L_088AE7B0;
L_088AE7B0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AE7CC; }
    goto L_088AE7B8;
L_088AE7B8:;
    v0 = D_08B2BB9C - (-17508);
    v0 = LD32(v0-17508);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AE7D8; }
    goto L_088AE7C8;
L_088AE7C8:;
    goto L_088AE7CC;
L_088AE7CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088AE7D8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE7E0;
L_088AE7E0:;
    goto L_088AE7CC;
L_088AE7E8:;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE7F0;
L_088AE7F0:;
    goto L_088AE7CC;
}

/* 088AE7F8 */
float func_088AE7F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AE7F8:;
    sp = sp - 32;
    v1 = D_08B2BC0C - (-17396);
    s3 = D_08B2BC10 - (-17392);
    s2 = a0 + 0;
    s1 = s3 - 17392;
    v0 = LD32(v1-17396);
    s0 = v0 + 0;
    v0 = v0 + 1;
    ST32(v1-17396, v0);
    v0 = D_08AF7C20 - (31776);
    v0 = v0 + 31776;
    ST32(a0+4, s0);
    a0 = 12;
    v1 = LD32(s1+4);
    ST32(s2, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AE854;
L_088AE854:;
    a0 = LD32(s3-17392);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s2);
    ST32(s0, v0);
    ST8(v0+8, 0);
    v0 = LD32(s2+8);
    v0 = v0 | 0x2;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s2+8, v0);
    sp = sp + 32;
    return f0;
}

/* 088AE8AC */
u64 func_088AE8AC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE8AC:;
    sp = sp - 16;
    a1 = D_08B2BC10 - (-17392);
    s0 = a1 - 17392;
    a2 = a0 + 0;
    v0 = LD32(s0+4);
    v1 = LD32(a0+4);
    a0 = LD32(a1-17392);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    v0 = D_08AF7C20 - (31776);
    v0 = v0 + 31776;
    ST32(a2, v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088AE914; }
    goto L_088AE8F8;
L_088AE8F8:;
    v0 = LD32(a0);
    goto L_088AE8FC;
L_088AE8FC:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_088AE924; }
    goto L_088AE904;
L_088AE904:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088AE8FC; }
    goto L_088AE914;
L_088AE914:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088AE924:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088AE934; }
    goto L_088AE92C;
L_088AE92C:;
    ST8(a0+8, v0);
    goto L_088AE914;
L_088AE934:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_088AE95C; }
    goto L_088AE93C;
L_088AE93C:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_088AE944;
L_088AE944:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE94C;
L_088AE94C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_088AE914;
L_088AE95C:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_088AE944;
}

/* 088AE96C */
rv_t func_088AE96C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE96C:;
    v0 = D_08AF7C20 - (31776);
    v0 = v0 + 31776;
    ST32(a0, v0);
    a1 = a0 + 0;
    a0 = D_08B2BC10 - (-17392);
    sp = sp - 16;
    a0 = a0 - 17392;
    { u64 r_ = func_08AB3B0C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE990;
L_088AE990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AE99C */
rv_t func_088AE99C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AE99C:;
    v0 = D_08AF7C20 - (31776);
    v0 = v0 + 31776;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B2BC10 - (-17392);
    a1 = s0 + 0;
    a0 = a0 - 17392;
    { u64 r_ = func_08AB3B0C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE9C8;
L_088AE9C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AE9D0;
L_088AE9D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AE9E0 */
void func_088AE9E0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AE9E0:;
    sp = sp - 32;
    a0 = D_08B2BC10 - (-17392);
    v0 = a0 - 17392;
    a1 = sp + 0;
    v1 = LD32(v0+4);
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_088AEA3C; }
    goto L_088AEA0C;
L_088AEA0C:;
    a3 = LD32(a0-17392);
    a2 = v1 + 0;
    goto L_088AEA14;
L_088AEA14:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_088AEA3C; }
    goto L_088AEA34;
L_088AEA34:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_088AEA14; }
    goto L_088AEA3C;
L_088AEA3C:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AEA9C; }
    goto L_088AEA48;
L_088AEA48:;
    s0 = LD32(v0);
    goto L_088AEA4C;
L_088AEA4C:;
    v0 = LD32(s0+8);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AEAA8; }
    goto L_088AEA5C;
L_088AEA5C:;
    a0 = sp + 0;
    func_08AB3BB4(a0);
    goto L_088AEA64;
L_088AEA64:;
    v0 = LD32(s0+8);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_088AEA90; }
    goto L_088AEA74;
L_088AEA74:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AEA90; }
    goto L_088AEA7C;
L_088AEA7C:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEA8C;
L_088AEA8C:;
    v0 = LD32(sp+8);
    goto L_088AEA90;
L_088AEA90:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_088AEA4C; }
    goto L_088AEA98;
L_088AEA98:;
    goto L_088AEA9C;
L_088AEA9C:;
    sp = sp + 32;
    return;
L_088AEAA8:;
    v0 = LD32(s0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEAB8;
L_088AEAB8:;
    goto L_088AEA5C;
}

/* 088AEAC0 */
void func_088AEAC0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AEAC0:;
    sp = sp - 32;
    v0 = D_08B2BC10 - (-17392);
    v0 = v0 - 17392;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AB3BB4(a0);
    goto L_088AEAE8;
L_088AEAE8:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AEB08; }
    goto L_088AEAF4;
L_088AEAF4:;
    v0 = D_08B2BC0C - (-17396);
    ST32(v0-17396, 0);
    sp = sp + 32;
    return;
L_088AEB08:;
    s0 = LD32(v0);
    goto L_088AEB0C;
L_088AEB0C:;
    a0 = sp + 0;
    func_08AB3BB4(a0);
    goto L_088AEB14;
L_088AEB14:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AEB2C; }
    goto L_088AEB1C;
L_088AEB1C:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEB2C;
L_088AEB2C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_088AEB0C; }
    goto L_088AEB38;
L_088AEB38:;
    goto L_088AEAF4;
}

/* 088AEB40 */
rv_t func_088AEB40(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AEB40:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AEBC0; }
    goto L_088AEB74;
L_088AEB74:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AEB98; }
    goto L_088AEB88;
L_088AEB88:;
    v0 = D_08B2BC10 - (-17392);
    a0 = LD32(v0-17392);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AEBB0; }
    goto L_088AEB98;
L_088AEB98:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088AEBB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AEBB8;
L_088AEBB8:;
    goto L_088AEB98;
L_088AEBC0:;
    s3 = D_08B2BC10 - (-17392);
    s0 = s3 - 17392;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEBD8;
L_088AEBD8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17392, v0);
    if (cnd_) { goto L_088AEC04; }
    goto L_088AEBE8;
L_088AEBE8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088AEBF0;
L_088AEBF0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AEBF0; }
    goto L_088AEC04;
L_088AEC04:;
    v0 = s3 - 17392;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088AEB74;
}

/* 088AEC14 */
rv_t func_088AEC14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AEC14:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088AEB40(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEC28;
L_088AEC28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AEC34 */
rv_t func_088AEC34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AEC34:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088AEB40(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEC48;
L_088AEC48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AEC54 */
float func_088AEC54(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AEC54:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    f0 = func_088AE7F8(a0, t1, t2, t3);
    goto L_088AEC78;
L_088AEC78:;
    v0 = D_08AF7C38 - (31800);
    v0 = v0 + 31800;
    ST32(s1, v0);
    a2 = s1 + 16;
    a3 = s0 + 80;
    goto L_088AEC8C;
L_088AEC8C:;
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    a0 = LD32(s0+8);
    a1 = LD32(s0+12);
    ST32(a2, v0);
    s0 = s0 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = s0 != a3;
    ST32(a2-4, a1);
    if (cnd_) { goto L_088AEC8C; }
    goto L_088AECB8;
L_088AECB8:;
    v0 = LD32(s2);
    ST32(s1+96, v0);
    v1 = LD32(s2+4);
    ST32(s1+100, v1);
    v0 = LD32(s2+8);
    ST32(s1+104, v0);
    v1 = LD32(s2+12);
    ST32(s1+108, v1);
    sp = sp + 16;
    return f0;
}

/* 088AECF0 */
rv_t func_088AECF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_088AECF0:;
    sp = sp - 224;
    s0 = a0 + 0;
    a0 = sp + 0;
    s5 = s0 + 16;
    func_088B18EC(a0);
    goto L_088AED20;
L_088AED20:;
    v0 = s0 + 48;
    s1 = LD32(v0+32);
    t4 = LD32(v0+4);
    t2 = LD32(v0+16);
    s2 = LD32(v0+36);
    v1 = LD32(v0+8);
    t5 = LD32(v0+20);
    t3 = LD32(s0+48);
    ST32(sp+64, t2);
    t7 = s0 + 32;
    a1 = sp + 16;
    ST32(sp+80, s1);
    a0 = sp + 0;
    a2 = 0 + 0;
    ST32(sp+84, t4);
    a3 = 0 + 0;
    t0 = 1;
    ST32(sp+68, t5);
    t1 = 1;
    ST32(sp+48, t3);
    ST32(sp+88, v1);
    ST32(sp+52, s2);
    v1 = LD32(v0+12);
    t6 = LD32(v0+24);
    s4 = LD32(v0+44);
    ST32(sp+92, v1);
    f0 = BITSF(LD32(sp+64));
    f4 = BITSF(LD32(s5+4));
    f3 = BITSF(LD32(s0+16));
    f7 = BITSF(LD32(s5+8));
    f2 = f4 * f0;
    f0 = BITSF(LD32(sp+84));
    s3 = LD32(v0+28);
    ST32(sp+64, t2);
    f8 = f3 * f0;
    f0 = BITSF(LD32(sp+48));
    v1 = LD32(v0+40);
    v0 = FBITS(f2);
    f2 = f3 * f0;
    f1 = BITSF(LD32(sp+80));
    v0 = (v0 >> 0) & 0x7fffffff;
    f11 = BITSF(v0);
    v0 = FBITS(f2);
    f12 = f7 * f1;
    f5 = BITSF(LD32(sp+68));
    f1 = BITSF(LD32(sp+88));
    v0 = (v0 >> 0) & 0x7fffffff;
    f6 = BITSF(v0);
    f10 = f3 * f1;
    v0 = FBITS(f8);
    f1 = f4 * f5;
    ST32(sp+80, t3);
    v0 = (v0 >> 0) & 0x7fffffff;
    f5 = BITSF(v0);
    v0 = FBITS(f1);
    ST32(sp+84, t4);
    f6 = f6 + f11;
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+68, t5);
    f8 = BITSF(v0);
    v0 = FBITS(f10);
    ST32(sp+72, t6);
    f5 = f5 + f8;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(LD32(sp+72));
    f2 = BITSF(v0);
    ST32(sp+56, v1);
    f3 = f4 * f0;
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+56));
    v0 = FBITS(f3);
    f9 = f7 * f0;
    f4 = f7 * f1;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = FBITS(f12);
    f2 = f2 + f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    v0 = FBITS(f9);
    f6 = f6 + f1;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = FBITS(f4);
    f1 = BITSF(LD32(t7+4));
    f5 = f5 + f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    f4 = BITSF(LD32(t7+8));
    f0 = BITSF(LD32(s0+32));
    f2 = f2 + f3;
    f7 = f1 + f5;
    f3 = f0 + f6;
    f1 = f1 - f5;
    f8 = f4 + f2;
    f0 = f0 - f6;
    f4 = f4 - f2;
    ST32(sp+48, s1);
    ST32(sp+16, FBITS(f0));
    ST32(sp+76, s3);
    ST32(sp+52, s2);
    ST32(sp+60, s4);
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f8));
    func_088B1958(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088AEED0;
L_088AEED0:;
    v0 = D_08B2BC44 - (-17340);
    f0 = BITSF(LD32(v0-17340));
    {u32 a_=s0+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    s1 = LD32(sp);
    cnd_ = s1 == 0;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    if (cnd_) { goto L_088AEFB8; }
    goto L_088AEF00;
L_088AEF00:;
    s2 = sp + 64;
    s4 = sp + 128;
    s3 = sp + 96;
    s0 = LD32(s1);
    goto L_088AEF10;
L_088AEF10:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_088C3A64(a0, a1);
    goto L_088AEF1C;
L_088AEF1C:;
    v0 = LD32(sp+64);
    v1 = LD32(sp+76);
    a0 = s0 + 208;
    ST32(sp+96, v0);
    a3 = s4 + 0;
    a2 = s0 + 0;
    v0 = LD32(sp+68);
    ST32(sp+108, v1);
    t0 = s0 + 48;
    ST32(sp+100, v0);
    v0 = LD32(sp+72);
    ST32(sp+104, v0);
    v0 = LD32(s0+208);
    ST32(sp+112, v0);
    v1 = LD32(a0+4);
    ST32(sp+116, v1);
    v0 = LD32(a0+8);
    ST32(sp+120, v0);
    v1 = LD32(a0+12);
    ST32(sp+124, v1);
    goto L_088AEF6C;
L_088AEF6C:;
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
    if (cnd_) { goto L_088AEF6C; }
    goto L_088AEF98;
L_088AEF98:;
    a0 = s3 + 0;
    a1 = s5 + 0;
    { rv_t r_ = func_08AB3C24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AEFA4;
L_088AEFA4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AEFE4; }
    goto L_088AEFAC;
L_088AEFAC:;
    s1 = LD32(s1+4);
    goto L_088AEFB0;
L_088AEFB0:;
    cnd_ = s1 != 0;
    if (cnd_) { s0 = LD32(s1); goto L_088AEF10; }
    goto L_088AEFB8;
L_088AEFB8:;
    a0 = sp + 0;
    { u64 r_ = func_088B18F4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AEFC0;
L_088AEFC0:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_088AEFE4:;
    a0 = s0 + 0;
    { u64 r_ = func_088C9D8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AEFEC;
L_088AEFEC:;
    {u32 a_=s0+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a0 = s0 + 0;
    a1 = s2 + 0;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    { rv_t r_ = func_088C69A0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF008;
L_088AF008:;
    v1 = LD32(s0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s1+4); goto L_088AEFB0; }
    goto L_088AF018;
L_088AF018:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+248, v1);
    ST32(s0+352, 0);
    goto L_088AEFAC;
}

/* 088AF028 */
rv_t func_088AF028(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr56 = v[56], vr57 = v[57], vr58 = v[58], vr59 = v[59], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr63 = v[63], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 560);
L_088AF028:;
    sp = sp - 560;
    t2 = a0 + 64;
    a2 = sp + 32;
    s7 = D_08B28BE8 - (-29720);
    a3 = sp + 48;
    s3 = a0 + 48;
    t0 = 0xffff0000u;
    s1 = a0 + 0;
    a1 = sp + 0;
    s0 = a0 + 16;
    v0 = LD32(a0+48);
    t7 = LD32(a0+80);
    v1 = LD32(a0+64);
    ST32(sp+96, v0);
    v0 = a0 + 32;
    f10 = BITSF(LD32(sp+96));
    ST32(sp+96, v1);
    v1 = a0 + 80;
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(a0+16));
    f3 = BITSF(LD32(s0+4));
    f9 = BITSF(LD32(sp+96));
    ST32(sp+96, t7);
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f3) ^ 0x80000000u);
    f6 = BITSF(FBITS(f4) ^ 0x80000000u);
    f8 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(a0+32));
    t5 = LD32(s3+4);
    t6 = LD32(s3+8);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+16, FBITS(f6));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+48, FBITS(f10));
    ST32(sp+52, FBITS(f9));
    f0 = BITSF(LD32(sp+96));
    a0 = LD32(t2+8);
    t4 = LD32(v1+12);
    t3 = LD32(v1+4);
    v0 = LD32(t2+4);
    t1 = LD32(v1+8);
    ST32(sp+100, t5);
    ST32(sp+104, t6);
    ST32(sp+56, FBITS(f0));
    f0 = BITSF(LD32(sp+100));
    ST32(sp+100, v0);
    f3 = BITSF(LD32(sp+104));
    f1 = BITSF(LD32(sp+100));
    ST32(sp+104, a0);
    ST32(sp+100, t3);
    f2 = BITSF(LD32(sp+104));
    ST32(sp+60, FBITS(f0));
    f0 = BITSF(LD32(sp+100));
    ST32(sp+104, t1);
    a0 = LD32(s7-29720);
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f3));
    ST32(sp+76, FBITS(f2));
    ST32(sp+96, t7);
    ST32(sp+100, t3);
    ST32(sp+108, t4);
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    f0 = BITSF(LD32(sp+104));
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    ST32(sp+80, FBITS(f0));
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;func_08849EF4(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr12=v[12];vr13=v[13];vr14=v[14];vr16=v[16];vr17=v[17];vr18=v[18];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];});
    goto L_088AF190;
L_088AF190:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    {u32 a_=s1+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = D_08AEC4CC - (-15156);
    f0 = BITSF(LD32(v0-15156));
    {u32 a_=sp+(304);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+116, 0);
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    v0 = (u32)-1;
    ST32(sp+112, v0);
    v0 = D_08AEC4C8 - (-15160);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f4 = BITSF(LD32(v0-15160));
    a3 = sp + 144;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a2 = s3 + 0;
    t0 = s1 + 96;
    {u32 a_=sp+(464);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    {u32 a_=sp+(448);vr120=BITSF(LD32(a_+0));vr121=BITSF(LD32(a_+4));vr122=BITSF(LD32(a_+8));vr123=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    goto L_088AF210;
L_088AF210:;
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
    if (cnd_) { goto L_088AF210; }
    goto L_088AF23C;
L_088AF23C:;
    f0 = BITSF(LD32(sp+160));
    f1 = BITSF(LD32(sp+148));
    f2 = BITSF(LD32(sp+152));
    ST32(sp+148, FBITS(f0));
    {u32 a_=sp+(368);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    f0 = BITSF(LD32(sp+176));
    ST32(sp+160, FBITS(f1));
    {u32 a_=sp+(96);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+152, FBITS(f0));
    {u32 a_=sp+(384);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f5 = BITSF(0);
    f0 = BITSF(LD32(sp+180));
    f1 = BITSF(LD32(sp+168));
    ST32(sp+176, FBITS(f2));
    {u32 a_=sp+(144);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    ST32(sp+168, FBITS(f0));
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    ST32(sp+180, FBITS(f1));
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(176);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a3 = LD32(s1+16);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float t0=v[100];float t1=v[101];float t2=v[102];float o0=0;o0+=vr16*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=vr17*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=vr18*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = BITSF(LD32(s1+96));
    v0 = LD32(sp+128);
    a0 = LD32(s0+4);
    a1 = LD32(s0+8);
    a2 = LD32(s0+12);
    ST32(sp+96, v0);
    v0 = FBITS(f0);
    {vr12=BITSF(v0);}
    v0 = LD32(sp+132);
    v1 = LD32(sp+136);
    ST32(sp+100, v0);
    v0 = LD32(sp+140);
    ST32(sp+104, v1);
    ST32(sp+108, v0);
    ST32(sp+192, FBITS(f0));
    ST32(sp+128, a3);
    ST32(sp+132, a0);
    ST32(sp+136, a1);
    ST32(sp+140, a2);
    f3 = BITSF(LD32(t0+8));
    f2 = BITSF(LD32(t0+4));
    ST32(sp+200, FBITS(f3));
    v0 = FBITS(f2);
    {vr13=BITSF(v0);}
    v0 = FBITS(f3);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f5, 2);
    cnd_ = fcc;
    ST32(sp+196, FBITS(f2));
    if (cnd_) { goto L_088AF374; }
    goto L_088AF338;
L_088AF338:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+216, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+208, FBITS(f2));
    ST32(sp+212, v0);
    ST32(sp+192, FBITS(f2));
    ST32(sp+196, v0);
    ST32(sp+200, FBITS(f3));
    goto L_088AF374;
L_088AF374:;
    f0 = BITSF(LD32(sp+192));
    f1 = BITSF(LD32(sp+196));
    f2 = BITSF(LD32(sp+200));
    f0 = f0 * f4;
    f1 = f1 * f4;
    f2 = f2 * f4;
    v0 = D_08AEC4D0 - (-15152);
    ST32(sp+192, FBITS(f0));
    f24 = f5;
    s2 = 0 + 0;
    ST32(sp+196, FBITS(f1));
    s6 = D_08AEC4D4 - (-15148);
    s5 = sp + 208;
    ST32(sp+200, FBITS(f2));
    s4 = sp + 272;
    f23 = BITSF(LD32(v0-15152));
    goto L_088AF3B4;
L_088AF3B4:;
    v0 = LD32(sp+112);
    a1 = LD32(sp+116);
    f13 = BITSF(LD32(s1+16));
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    a0 = (u32)((s32)v0 >> 16);
    a1 = a1 + v0;
    v1 = v0 << 16;
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    v1 = v1 + a0;
    v1 = v1 + a1;
    v0 = (u32)((s32)v1 >> 16);
    a1 = a1 + v1;
    a0 = v1 << 16;
    v1 = v1 >> 1;
    f1 = BITSF(v1);
    f3 = (float)(s32)FBITS(f0);
    a0 = a0 + v0;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f1);
    f3 = f3 * f23;
    f1 = (float)(s32)FBITS(f0);
    f4 = BITSF(LD32(s0+4));
    f2 = f2 * f23;
    f3 = f3 * f13;
    f0 = BITSF(LD32(sp+96));
    f1 = f1 * f23;
    f5 = BITSF(LD32(s0+8));
    f2 = f2 * f4;
    f21 = f3 + f0;
    f0 = BITSF(LD32(sp+100));
    f1 = f1 * f5;
    a1 = a1 + a0;
    f20 = f2 + f0;
    f0 = BITSF(LD32(sp+104));
    f12 = f21;
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    f22 = f1 + f0;
    ST32(sp+116, a1);
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    ST32(sp+112, a0);
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF478;
L_088AF478:;
    f13 = BITSF(LD32(s0+4));
    f12 = f20;
    f21 = f0;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF488;
L_088AF488:;
    f13 = BITSF(LD32(s0+8));
    f12 = f22;
    f20 = f0;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF498;
L_088AF498:;
    fcc = FCMP(f21, f24, 12);
    f22 = f0;
    cnd_ = !fcc;
    {u32 a_=sp+(464);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088AF4B0; }
    goto L_088AF4A8;
L_088AF4A8:;
    f0 = BITSF(LD32(s1+16));
    f21 = f21 + f0;
    goto L_088AF4B0;
L_088AF4B0:;
    fcc = FCMP(f20, f24, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088AF4C8; }
    goto L_088AF4C0;
L_088AF4C0:;
    f0 = BITSF(LD32(s0+4));
    f20 = f20 + f0;
    goto L_088AF4C8;
L_088AF4C8:;
    fcc = FCMP(f22, f24, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+224, FBITS(f21)); goto L_088AF4E4; }
    goto L_088AF4D8;
L_088AF4D8:;
    f0 = BITSF(LD32(s0+8));
    f22 = f22 + f0;
    ST32(sp+224, FBITS(f21));
    goto L_088AF4E4;
L_088AF4E4:;
    {u32 a_=sp+(400);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    ST32(sp+228, FBITS(f20));
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    a1 = s5 + 0;
    {u32 a_=s3+(16);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    ST32(sp+232, FBITS(f22));
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr116=d0;vr117=d1;vr118=d2;vr119=d3;}
    a2 = s4 + 0;
    f0 = BITSF(LD32(s6-15148));
    {u32 a_=sp+(224);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    s2 = s2 + 1;
    v0 = FBITS(f0);
    {vr32=BITSF(v0);}
    {float s0=vr32;float s1=vr32;float s2=vr32;float s3=vr32;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr52;float s1=vr53;float s2=vr54;float t0=vr32;vr52=s0*t0;vr53=s1*t0;vr54=s2*t0;}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=s3+(32);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float t0=vr48;float t1=vr49;float t2=vr50;float t3=vr51;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v0 = LD32(sp+240);
    ST32(sp+224, v0);
    v0 = LD32(sp+244);
    {u32 a_=s1+(32);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    ST32(sp+228, v0);
    v0 = LD32(sp+248);
    ST32(sp+232, v0);
    v0 = LD32(sp+252);
    ST32(sp+236, v0);
    {u32 a_=sp+(224);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {float t0=vr32;float t1=vr33;float t2=vr34;float o0=0;o0+=vr112*t0;o0+=vr116*t1;o0+=vr120*t2;float o1=0;o1+=vr113*t0;o1+=vr117*t1;o1+=vr121*t2;float o2=0;o2+=vr114*t0;o2+=vr118*t1;o2+=vr122*t2;vr16=o0;vr17=o1;vr18=o2;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=v[19];float t0=vr48;float t1=vr49;float t2=vr50;float t3=vr51;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v0 = LD32(sp+256);
    v1 = LD32(sp+268);
    ST32(sp+224, v0);
    v0 = LD32(sp+260);
    f2 = BITSF(LD32(sp+224));
    ST32(sp+228, v0);
    v0 = LD32(sp+264);
    f3 = BITSF(LD32(sp+228));
    ST32(sp+232, v0);
    ST32(sp+236, v1);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    f0 = BITSF(LD32(sp+192));
    v1 = LD32(sp+112);
    f4 = BITSF(LD32(sp+232));
    ST32(sp+208, FBITS(f2));
    f2 = f2 + f0;
    v0 = (u32)((s32)v1 >> 16);
    f1 = BITSF(LD32(sp+196));
    f0 = BITSF(LD32(sp+200));
    t0 = LD32(sp+116);
    v1 = v1 << 16;
    ST32(sp+212, FBITS(f3));
    v1 = v1 + v0;
    f3 = f3 + f1;
    f0 = f4 + f0;
    v1 = v1 + t0;
    a0 = LD32(s7-29720);
    a3 = v1 >> 1;
    v0 = 0xff000000u;
    t0 = t0 + v1;
    a3 = a3 | v0;
    ST32(sp+112, v1);
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    ST32(sp+116, t0);
    ST32(sp+272, FBITS(f2));
    ST32(sp+276, FBITS(f3));
    ST32(sp+280, FBITS(f0));
    ST32(sp+216, FBITS(f4));
    { rv_t r_ = func_08849E4C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF620;
L_088AF620:;
    v1 = s2 < 0x64u;
    {u32 a_=sp+(416);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(448);vr120=BITSF(LD32(a_+0));vr121=BITSF(LD32(a_+4));vr122=BITSF(LD32(a_+8));vr123=BITSF(LD32(a_+12));}
    cnd_ = v1 != 0;
    {u32 a_=sp+(464);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088AF3B4; }
    goto L_088AF638;
L_088AF638:;
    sp = sp + 560;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 088AF678 */
rv_t func_088AF678(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088AF678:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AF6F8; }
    goto L_088AF6AC;
L_088AF6AC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088AF6D0; }
    goto L_088AF6C0;
L_088AF6C0:;
    v0 = D_08B2BC20 - (-17376);
    a0 = LD32(v0-17376);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AF6E8; }
    goto L_088AF6D0;
L_088AF6D0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088AF6E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AF6F0;
L_088AF6F0:;
    goto L_088AF6D0;
L_088AF6F8:;
    s3 = D_08B2BC20 - (-17376);
    s0 = s3 - 17376;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF710;
L_088AF710:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17376, v0);
    if (cnd_) { goto L_088AF73C; }
    goto L_088AF720;
L_088AF720:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088AF728;
L_088AF728:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088AF728; }
    goto L_088AF73C;
L_088AF73C:;
    v0 = s3 - 17376;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088AF6AC;
}

/* 088AF74C */
rv_t func_088AF74C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AF74C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088AF678(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF760;
L_088AF760:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AF76C */
rv_t func_088AF76C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AF76C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088AF678(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AF780;
L_088AF780:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088AF78C */
void func_088AF78C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088AF78C:;
    sp = sp - 48;
    v0 = D_08AEC4DC - (-15140);
    a1 = D_08B2BC60 - (-17312);
    ST32(sp, 0);
    a0 = a1 - 17312;
    f20 = BITSF(LD32(v0-15140));
    v0 = LD32(sp);
    ST32(sp+8, 0);
    ST32(sp+4, FBITS(f20));
    ST32(a1-17312, v0);
    v1 = LD32(sp+12);
    ST32(a0+12, v1);
    v0 = LD32(sp+4);
    ST32(a0+4, v0);
    v1 = LD32(sp+8);
    ST32(a0+8, v1);
    func_088B8464();
    goto L_088AF7D8;
L_088AF7D8:;
    func_088B6700(0, 0, 0);
    goto L_088AF7E0;
L_088AF7E0:;
    func_088C2860();
    goto L_088AF7E8;
L_088AF7E8:;
    v0 = D_08B2BE60 - (-16800);
    ST32(v0-16800, 0);
    func_088C2210();
    goto L_088AF7F4;
L_088AF7F4:;
    func_088B1558(0, 0, 0);
    goto L_088AF7FC;
L_088AF7FC:;
    v0 = D_08AEC4E0 - (-15136);
    f0 = BITSF(LD32(v0-15136));
    v0 = D_08B2BC4C - (-17332);
    ST32(v0-17332, FBITS(f20));
    v1 = D_08B2BC48 - (-17336);
    a0 = 1;
    ST32(v1-17336, FBITS(f0));
    v0 = D_08B2BC55 - (-17323);
    v1 = D_08B2BC30 - (-17360);
    ST8(v0-17323, a0);
    v0 = D_08B2BC44 - (-17340);
    ST32(v1-17360, 0);
    v1 = D_08B2BC50 - (-17328);
    ST32(v0-17340, FBITS(f0));
    ST32(v1-17328, 0);
    sp = sp + 48;
    return;
}

/* 088AF848 */
void func_088AF848(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_088AF848:;
    sp = sp - 80;
    s3 = D_08B2BE64 - (-16796);
    s2 = s3 - 16796;
    func_088B846C();
    goto L_088AF86C;
L_088AF86C:;
    func_088C287C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AF874;
L_088AF874:;
    s1 = LD32(s2+12);
    v0 = D_08B2BE60 - (-16800);
    cnd_ = s1 == 0;
    ST32(v0-16800, 0);
    if (cnd_) { goto L_088AF8AC; }
    goto L_088AF884;
L_088AF884:;
    a0 = s1 + 8;
    goto L_088AF888;
L_088AF888:;
    s0 = s1 + 0;
    s1 = LD32(s1+4);
    a1 = 0 + 0;
    func_088BBFA8(a0, a1);
    goto L_088AF898;
L_088AF898:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AF8A4;
L_088AF8A4:;
    cnd_ = s1 != 0;
    a0 = s1 + 8;
    if (cnd_) { goto L_088AF888; }
    goto L_088AF8AC;
L_088AF8AC:;
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    if (cnd_) { s2 = D_08B2BE80 - (-16768); goto L_088AF8EC; }
    goto L_088AF8B8;
L_088AF8B8:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { s2 = D_08B2BE80 - (-16768); goto L_088AF8EC; }
    goto L_088AF8C4;
L_088AF8C4:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AFC64; }
    goto L_088AF8D0;
L_088AF8D0:;
    s1 = LD32(s0+12);
    goto L_088AF8D4;
L_088AF8D4:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088AFC4C; }
    goto L_088AF8DC;
L_088AF8DC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AF8E4;
L_088AF8E4:;
    ST32(s2, 0);
    s2 = D_08B2BE80 - (-16768);
    goto L_088AF8EC;
L_088AF8EC:;
    v0 = s2 - 16768;
    v1 = LD32(v0+4);
    ST32(sp+4, 0);
    v0 = s3 - 16796;
    a2 = sp + 0;
    a0 = LD32(v1);
    ST32(v0+12, 0);
    v0 = (u32)-1;
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, v1);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_088AF960; }
    goto L_088AF924;
L_088AF924:;
    ST32(sp+4, a0);
    a3 = sp + 8;
    goto L_088AF92C;
L_088AF92C:;
    a0 = LD32(a2+4);
    ST32(sp+36, 0);
    a1 = LD32(a0+4);
    ST32(a2+12, 0);
    ST32(a2+8, a1);
    v0 = LD32(a1+12);
    ST32(sp+32, a1);
    v1 = v0 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a3+4, v1);
    if (cnd_) { goto L_088AFC1C; }
    goto L_088AF954;
L_088AF954:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_088AF92C; }
    goto L_088AF960;
L_088AF960:;
    v0 = D_08B2BE80 - (-16768);
    s0 = v0 - 16768;
    s1 = 108;
    goto L_088AF96C;
L_088AF96C:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088AFA8C; }
    goto L_088AF978;
L_088AF978:;
    cnd_ = (s32)v0 < 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_088AFA8C; }
    goto L_088AF980;
L_088AF980:;
    v1 = LD32(v1+8);
    a0 = (u32)-1;
    a2 = v0 + v1;
    cnd_ = a2 == a0;
    a3 = LD32(s0+4);
    if (cnd_) { goto L_088AFA00; }
    goto L_088AF994;
L_088AF994:;
    v0 = LD32(a3+12);
    cnd_ = a2 == v0;
    if (cnd_) { ST32(a3+12, a0); goto L_088AF9A0; }
    goto L_088AF9A0;
L_088AF9A0:;
    v1 = LD32(a3);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088AF9E0; }
    goto L_088AF9AC;
L_088AF9AC:;
    a0 = LD32(v1+8);
    goto L_088AF9B0;
L_088AF9B0:;
    v0 = (s32)a2 < (s32)a0;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_088AF9D0; }
    goto L_088AF9BC;
L_088AF9BC:;
    v0 = LD32(a3+4);
    v0 = a0 + v0;
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088AF9E0; }
    goto L_088AF9D0;
L_088AF9D0:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1+8); goto L_088AF9B0; }
    goto L_088AF9DC;
L_088AF9DC:;
    a1 = 0 + 0;
    goto L_088AF9E0;
L_088AF9E0:;
    cnd_ = a1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088AFA04; }
    goto L_088AF9E8;
L_088AF9E8:;
    a0 = LD32(a1+4);
    a1 = LD32(a1+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = a2 - a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AFA00;
L_088AFA00:;
    v0 = LD32(sp+12);
    goto L_088AFA04;
L_088AFA04:;
    a3 = sp + 0;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_088AFA84; }
    goto L_088AFA14;
L_088AFA14:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_088AF96C; }
    goto L_088AFA28;
L_088AFA28:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_088AFA14; }
    goto L_088AFA4C;
L_088AFA4C:;
    v1 = LD32(a3+8);
    v0 = LD32(a0+4);
    a1 = LD32(a3+4);
    a2 = LD32(v1+4);
    v0 = v0 << 2;
    a0 = LD32(a1);
    v0 = v0 + a2;
    v1 = LD32(v0);
    { s64 p_ = (s64)(s32)v1 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a3+16, v1);
    a1 = lo;
    a0 = a0 + a1;
    ST32(a3+20, a0);
    goto L_088AF96C;
L_088AFA84:;
    a0 = sp + 8;
    goto L_088AFA4C;
L_088AFA8C:;
    v0 = s2 - 16768;
    s2 = LD32(v0+4);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088AFB04; }
    goto L_088AFAA0;
L_088AFAA0:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_088AFAE4; }
    goto L_088AFAAC;
L_088AFAAC:;
    v0 = LD32(a0-4);
    v1 = 108;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_088AFAC0;
L_088AFAC0:;
    cnd_ = a0 == s0;
    s0 = s0 - 108;
    if (cnd_) { goto L_088AFAD8; }
    goto L_088AFAC8;
L_088AFAC8:;
    a0 = s0 + 52;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AFAD0;
L_088AFAD0:;
    a0 = LD32(s1);
    goto L_088AFAC0;
L_088AFAD8:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFAE0;
L_088AFAE0:;
    a0 = LD32(s1+4);
    goto L_088AFAE4;
L_088AFAE4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088AFC08; }
    goto L_088AFAEC;
L_088AFAEC:;
    s0 = LD32(s1+12);
    goto L_088AFAF0;
L_088AFAF0:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088AFBF0; }
    goto L_088AFAF8;
L_088AFAF8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFB00;
L_088AFB00:;
    v0 = (u32)-1;
    goto L_088AFB04;
L_088AFB04:;
    ST32(s2+12, v0);
    ST32(s2, 0);
    func_088B6738(0, 0, 0);
    goto L_088AFB10;
L_088AFB10:;
    v0 = D_08B2BC20 - (-17376);
    v1 = LD32(v0-17376);
    cnd_ = v1 == 0;
    s3 = v0 - 17376;
    if (cnd_) { goto L_088AFB74; }
    goto L_088AFB20;
L_088AFB20:;
    v0 = LD32(s3+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088AFB70; }
    goto L_088AFB2C;
L_088AFB2C:;
    a1 = v1 + 0;
    goto L_088AFB30;
L_088AFB30:;
    s1 = s2 << 2;
    v0 = s1 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_088AFB5C; }
    goto L_088AFB44;
L_088AFB44:;
    s0 = LD32(a0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFB4C;
L_088AFB4C:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088AFB44; }
    goto L_088AFB54;
L_088AFB54:;
    a1 = LD32(s3);
    v0 = LD32(s3+4);
    goto L_088AFB5C;
L_088AFB5C:;
    s2 = s2 + 1;
    v1 = s1 + a1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    ST32(v1, 0);
    if (cnd_) { goto L_088AFB30; }
    goto L_088AFB70;
L_088AFB70:;
    ST32(s3+12, 0);
    goto L_088AFB74;
L_088AFB74:;
    func_088B9E90(a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AFB7C;
L_088AFB7C:;
    func_088C221C(0, 0, 0);
    goto L_088AFB84;
L_088AFB84:;
    v0 = D_08AEC4E4 - (-15132);
    f1 = BITSF(LD32(v0-15132));
    v0 = D_08AEC4E8 - (-15128);
    f0 = BITSF(LD32(v0-15128));
    v1 = D_08B2BC48 - (-17336);
    ST32(v1-17336, FBITS(f1));
    v1 = D_08B2BC4C - (-17332);
    a0 = 1;
    ST32(v1-17332, FBITS(f0));
    v0 = D_08B2BC55 - (-17323);
    v1 = D_08B2BC30 - (-17360);
    ST8(v0-17323, a0);
    v0 = D_08B2BC44 - (-17340);
    ST32(v1-17360, 0);
    v1 = D_08B2BC50 - (-17328);
    ST32(v0-17340, FBITS(f1));
    ST32(v1-17328, 0);
    func_088B1668();
    goto L_088AFBCC;
L_088AFBCC:;
    func_088AEAC0();
    goto L_088AFBD4;
L_088AFBD4:;
    sp = sp + 80;
    return;
L_088AFBF0:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AFBF8;
L_088AFBF8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFC00;
L_088AFC00:;
    goto L_088AFAF8;
L_088AFC08:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AFC14;
L_088AFC14:;
    s0 = LD32(s1+12);
    goto L_088AFAF0;
L_088AFC1C:;
    v0 = LD32(a1+4);
    v1 = v1 << 2;
    a0 = LD32(a0);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 108;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a1);
    v0 = lo;
    a0 = a0 + v0;
    ST32(a2+20, a0);
    goto L_088AF960;
L_088AFC4C:;
    a0 = s1 + 0;
    func_08AA3740(a0, 0, 0, 0);
    goto L_088AFC54;
L_088AFC54:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFC5C;
L_088AFC5C:;
    goto L_088AF8DC;
L_088AFC64:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFC6C;
L_088AFC6C:;
    s1 = LD32(s0+12);
    goto L_088AF8D4;
}

/* 088AFC74 */
void func_088AFC74(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088AFC74:;
    sp = sp - 64;
    s3 = D_08B2BE64 - (-16796);
    s2 = s3 - 16796;
    func_088B8490();
    goto L_088AFC98;
L_088AFC98:;
    func_088C2990(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AFCA0;
L_088AFCA0:;
    s1 = LD32(s2+12);
    cnd_ = s1 == 0;
    if (cnd_) { s0 = LD32(s2); goto L_088AFCD8; }
    goto L_088AFCAC;
L_088AFCAC:;
    a0 = s1 + 8;
    goto L_088AFCB0;
L_088AFCB0:;
    s0 = s1 + 0;
    s1 = LD32(s1+4);
    a1 = 0 + 0;
    func_088BBFA8(a0, a1);
    goto L_088AFCC0;
L_088AFCC0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFCCC;
L_088AFCCC:;
    cnd_ = s1 != 0;
    a0 = s1 + 8;
    if (cnd_) { goto L_088AFCB0; }
    goto L_088AFCD4;
L_088AFCD4:;
    s0 = LD32(s2);
    goto L_088AFCD8;
L_088AFCD8:;
    cnd_ = s0 == 0;
    s1 = D_08B2BE80 - (-16768);
    if (cnd_) { goto L_088AFD14; }
    goto L_088AFCE0;
L_088AFCE0:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    v1 = s1 - 16768;
    if (cnd_) { goto L_088AFD18; }
    goto L_088AFCEC;
L_088AFCEC:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088AFE74; }
    goto L_088AFCF8;
L_088AFCF8:;
    s1 = LD32(s0+12);
    goto L_088AFCFC;
L_088AFCFC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088AFE5C; }
    goto L_088AFD04;
L_088AFD04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFD0C;
L_088AFD0C:;
    ST32(s2, 0);
    s1 = D_08B2BE80 - (-16768);
    goto L_088AFD14;
L_088AFD14:;
    v1 = s1 - 16768;
    goto L_088AFD18;
L_088AFD18:;
    a2 = LD32(v1+4);
    v0 = s3 - 16796;
    ST32(v0+12, 0);
    a0 = sp + 0;
    v0 = (u32)-1;
    a1 = LD32(a2);
    s0 = v1 + 0;
    ST32(sp+16, v0);
    ST32(sp+4, a1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a2);
    func_08AB41DC(a0);
    goto L_088AFD4C;
L_088AFD4C:;
    v1 = LD32(sp+4);
    goto L_088AFD50;
L_088AFD50:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088AFD80; }
    goto L_088AFD58;
L_088AFD58:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_088AFD80; }
    goto L_088AFD60;
L_088AFD60:;
    v0 = LD32(v1+8);
    a0 = LD32(s0+4);
    a1 = a1 + v0;
    func_08AB4304(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AFD70;
L_088AFD70:;
    a0 = sp + 0;
    func_08AB4270(a0);
    goto L_088AFD78;
L_088AFD78:;
    v1 = LD32(sp+4);
    goto L_088AFD50;
L_088AFD80:;
    v0 = s1 - 16768;
    s2 = LD32(v0+4);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088AFDF8; }
    goto L_088AFD94;
L_088AFD94:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_088AFDD8; }
    goto L_088AFDA0;
L_088AFDA0:;
    v0 = LD32(a0-4);
    v1 = 108;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_088AFDB4;
L_088AFDB4:;
    cnd_ = a0 == s0;
    s0 = s0 - 108;
    if (cnd_) { goto L_088AFDCC; }
    goto L_088AFDBC;
L_088AFDBC:;
    a0 = s0 + 52;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AFDC4;
L_088AFDC4:;
    a0 = LD32(s1);
    goto L_088AFDB4;
L_088AFDCC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFDD4;
L_088AFDD4:;
    a0 = LD32(s1+4);
    goto L_088AFDD8;
L_088AFDD8:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088AFE48; }
    goto L_088AFDE0;
L_088AFDE0:;
    s0 = LD32(s1+12);
    goto L_088AFDE4;
L_088AFDE4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088AFE30; }
    goto L_088AFDEC;
L_088AFDEC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFDF4;
L_088AFDF4:;
    v0 = (u32)-1;
    goto L_088AFDF8;
L_088AFDF8:;
    ST32(s2+12, v0);
    ST32(s2, 0);
    func_088B67D0(0, 0, 0);
    goto L_088AFE04;
L_088AFE04:;
    func_088C226C(0, 0, 0);
    goto L_088AFE0C;
L_088AFE0C:;
    func_088AEAC0();
    goto L_088AFE14;
L_088AFE14:;
    sp = sp + 64;
    return;
L_088AFE30:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088AFE38;
L_088AFE38:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFE40;
L_088AFE40:;
    goto L_088AFDEC;
L_088AFE48:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088AFE54;
L_088AFE54:;
    s0 = LD32(s1+12);
    goto L_088AFDE4;
L_088AFE5C:;
    a0 = s1 + 0;
    func_08AA3740(a0, 0, 0, 0);
    goto L_088AFE64;
L_088AFE64:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFE6C;
L_088AFE6C:;
    goto L_088AFD04;
L_088AFE74:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088AFE7C;
L_088AFE7C:;
    s1 = LD32(s0+12);
    goto L_088AFCFC;
}

/* 088AFE84 */
void func_088AFE84(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088AFE84:;
    sp = sp - 16;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08AEC4F0 - (-15120);
    f3 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1-15120));
    a0 = D_08B2BC44 - (-17340);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    a1 = D_08B2BC30 - (-17360);
    if (cnd_) { goto L_088AFEBC; }
    goto L_088AFEB0;
L_088AFEB0:;
    goto L_088AFEB4;
L_088AFEB4:;
    sp = sp + 16;
    return;
L_088AFEBC:;
    f1 = BITSF(LD32(a0-17340));
    f0 = BITSF(LD32(a1-17360));
    v0 = D_08B2BC48 - (-17336);
    f2 = f3 / f1;
    ST32(v0-17336, FBITS(f1));
    v0 = D_08B2BC4C - (-17332);
    ST32(a0-17340, FBITS(f3));
    f0 = f0 + f3;
    ST32(v0-17332, FBITS(f2));
    ST32(a1-17360, FBITS(f0));
    func_088AFEF0(t1, t2, t3);
    goto L_088AFEE8;
L_088AFEE8:;
    goto L_088AFEB4;
}

/* 088AFEF0 */
void func_088AFEF0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_088AFEF0:;
    sp = sp - 224;
    v0 = D_08AEC4F4 - (-15116);
    s2 = D_08B2BC44 - (-17340);
    s1 = D_08B2BC30 - (-17360);
    v1 = s2 + 0;
    f2 = BITSF(LD32(v0-15116));
    f20 = BITSF(LD32(s2-17340));
    f1 = BITSF(LD32(s1-17360));
    v0 = D_08B2BE30 - (-16848);
    f0 = f20 * f2;
    ST32(v0-16848, 0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = s1 + 0;
    if (cnd_) { goto L_088AFF88; }
    goto L_088AFF60;
L_088AFF60:;
    f3 = f2;
    goto L_088AFF64;
L_088AFF64:;
    f0 = BITSF(LD32(v1-17340));
    f1 = BITSF(LD32(v0-17360));
    v1 = s2 + 0;
    f2 = f0 * f3;
    f1 = f1 - f0;
    fcc = FCMP(f2, f1, 12);
    ST32(v0-17360, FBITS(f1));
    cnd_ = fcc;
    v0 = s1 + 0;
    if (cnd_) { goto L_088AFF64; }
    goto L_088AFF88;
L_088AFF88:;
    v1 = D_08AEC4F8 - (-15112);
    f21 = f20 * f20;
    f0 = BITSF(LD32(v1-15112));
    v0 = D_08B2BC60 - (-17312);
    {u32 a_=v0+(-17312);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f21 * f0;
    v1 = D_08B2BE90 - (-16752);
    a0 = v1 - 16752;
    f1 = BITSF(LD32(s1-17360));
    v0 = FBITS(f0);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    f0 = BITSF(LD32(s2-17340));
    fp = D_08B2BC54 - (-17324);
    s5 = D_08B2BED0 - (-16688);
    fcc = FCMP(f0, f1, 14);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp);
    ST32(v1-16752, v0);
    v0 = LD32(sp+12);
    ST32(a0+12, v0);
    v1 = LD32(sp+4);
    ST32(a0+4, v1);
    v1 = 1;
    v0 = LD32(sp+8);
    ST8(fp-17324, v1);
    cnd_ = fcc;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088B07C4; }
    goto L_088B0000;
L_088B0000:;
    f0 = BITSF(LD32(s1-17360));
    goto L_088B0004;
L_088B0004:;
    f1 = BITSF(LD32(s2-17340));
    goto L_088B0008;
L_088B0008:;
    v1 = D_08B2BC50 - (-17328);
    v0 = LD32(v1-17328);
    f0 = f0 - f1;
    v0 = v0 + 1;
    ST32(v1-17328, v0);
    ST32(s1-17360, FBITS(f0));
    func_088BEF30();
    goto L_088B0024;
L_088B0024:;
    a2 = D_08B2BC20 - (-17376);
    v0 = a2 - 17376;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    a1 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_088B009C; }
    goto L_088B0050;
L_088B0050:;
    a2 = LD32(a2-17376);
    a3 = a0 + 0;
    goto L_088B0058;
L_088B0058:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_088B008C; }
    goto L_088B0070;
L_088B0070:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_088B00A0; }
    goto L_088B0080;
L_088B0080:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_088B0070; }
    goto L_088B008C;
L_088B008C:;
    v0 = a0 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_088B0058; }
    goto L_088B009C;
L_088B009C:;
    a0 = LD32(sp+24);
    goto L_088B00A0;
L_088B00A0:;
    cnd_ = a0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088B0790; }
    goto L_088B00A8;
L_088B00A8:;
    s1 = LD32(sp+16);
    goto L_088B00AC;
L_088B00AC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_088B0130; }
    goto L_088B00BC;
L_088B00BC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088B0130; }
    goto L_088B00C8;
L_088B00C8:;
    v0 = LD32(s1);
    goto L_088B00CC;
L_088B00CC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088B0120; }
    goto L_088B00E0;
L_088B00E0:;
    v0 = LD_U8(s0+8);
    goto L_088B00E4;
L_088B00E4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_088B0788; }
    goto L_088B00EC;
L_088B00EC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088B0778; }
    goto L_088B00F4;
L_088B00F4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_088B00FC;
L_088B00FC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0108;
L_088B0108:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_088B0114;
L_088B0114:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_088B00E4; }
    goto L_088B011C;
L_088B011C:;
    v1 = LD32(s1+4);
    goto L_088B0120;
L_088B0120:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_088B00CC; }
    goto L_088B0130;
L_088B0130:;
    s2 = D_08B2BC38 - (-17352);
    func_088C2288(0, 0, 0);
    goto L_088B0138;
L_088B0138:;
    s6 = D_08B2BC34 - (-17356);
    func_088AE9E0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088B0140;
L_088B0140:;
    func_088B17A8();
    goto L_088B0148;
L_088B0148:;
    v0 = s2 - 17352;
    v1 = LD32(v0+4);
    ST32(s6-17356, 0);
    ST32(s2-17352, v1);
    func_088B080C();
    goto L_088B015C;
L_088B015C:;
    v0 = D_08B2BED4 - (-16684);
    s0 = LD32(v0-16684);
    cnd_ = s0 == 0;
    s1 = 0x20000u;
    if (cnd_) { goto L_088B01A4; }
    goto L_088B016C;
L_088B016C:;
    a0 = s0 + 0;
    func_088C906C(a0);
    goto L_088B0174;
L_088B0174:;
    a0 = s0 + 0;
    func_088CA214(a0);
    goto L_088B017C;
L_088B017C:;
    v1 = LD32(s0+276);
    cnd_ = v1 != 0;
    v0 = LD32(s0+248);
    if (cnd_) { goto L_088B0738; }
    goto L_088B0188;
L_088B0188:;
    v0 = v0 | 0x2;
    ST32(s0+248, v0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0+248); goto L_088B0738; }
    goto L_088B0198;
L_088B0198:;
    s0 = LD32(s0+240);
    goto L_088B019C;
L_088B019C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088B016C; }
    goto L_088B01A4;
L_088B01A4:;
    s1 = LD32(s5-16688);
    cnd_ = s1 == 0;
    v0 = D_08AEC4F8 - (-15112);
    if (cnd_) { goto L_088B01F0; }
    goto L_088B01B0;
L_088B01B0:;
    f22 = BITSF(LD32(v0-15112));
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    s3 = 0x400000u;
    f21 = f21 * f22;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(s1+276);
    goto L_088B01C8;
L_088B01C8:;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s1+248); goto L_088B05A4; }
    goto L_088B01D0;
L_088B01D0:;
    v0 = LD32(s1+248);
    v0 = v0 | 0x2;
    ST32(s1+248, v0);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s1+248); goto L_088B05A4; }
    goto L_088B01E4;
L_088B01E4:;
    s1 = LD32(s1+240);
    goto L_088B01E8;
L_088B01E8:;
    cnd_ = s1 != 0;
    if (cnd_) { v1 = LD32(s1+276); goto L_088B01C8; }
    goto L_088B01F0;
L_088B01F0:;
    s0 = LD32(s5-16688);
    cnd_ = s0 == 0;
    v0 = D_08B2BC38 - (-17352);
    if (cnd_) { goto L_088B0228; }
    goto L_088B01FC;
L_088B01FC:;
    s4 = v0 - 17352;
    s1 = 0x20000u;
    s3 = 0x10000u;
    v1 = LD32(s0+248);
    goto L_088B020C;
L_088B020C:;
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & s1;
    if (cnd_) { goto L_088B04EC; }
    goto L_088B0218;
L_088B0218:;
    s0 = LD32(s0+240);
    goto L_088B021C;
L_088B021C:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0+248); goto L_088B020C; }
    goto L_088B0224;
L_088B0224:;
    s0 = LD32(s5-16688);
    goto L_088B0228;
L_088B0228:;
    cnd_ = s0 == 0;
    v0 = D_08B2BC38 - (-17352);
    if (cnd_) { goto L_088B0258; }
    goto L_088B0230;
L_088B0230:;
    s3 = v0 - 17352;
    s1 = 0x20000u;
    v0 = LD32(s0+248);
    goto L_088B023C;
L_088B023C:;
    v1 = v0 & s1;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_088B0450; }
    goto L_088B024C;
L_088B024C:;
    s0 = LD32(s0+240);
    goto L_088B0250;
L_088B0250:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+248); goto L_088B023C; }
    goto L_088B0258;
L_088B0258:;
    func_088BBD58();
    goto L_088B0260;
L_088B0260:;
    s3 = LD32(s6-17356);
    cnd_ = s3 == 0;
    s7 = D_08B2BE64 - (-16796);
    if (cnd_) { goto L_088B039C; }
    goto L_088B026C;
L_088B026C:;
    v1 = LD32(s3);
    goto L_088B0270;
L_088B0270:;
    s6 = 0 + 0;
    goto L_088B0274;
L_088B0274:;
    cnd_ = v1 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_088B029C; }
    goto L_088B027C;
L_088B027C:;
    v1 = LD32(s1);
    goto L_088B0280;
L_088B0280:;
    v0 = LD32(v1+248);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(v1+388); goto L_088B0430; }
    goto L_088B0290;
L_088B0290:;
    s1 = LD32(s1+4);
    cnd_ = s1 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_088B0280; }
    goto L_088B029C;
L_088B029C:;
    v0 = LD32(s3+4);
    cnd_ = v0 == 0;
    s4 = 1;
    if (cnd_) { goto L_088B0300; }
    goto L_088B02A8;
L_088B02A8:;
    s2 = v0 + 0;
    s5 = s7 - 16796;
    s1 = LD32(s2);
    goto L_088B02B4;
L_088B02B4:;
    cnd_ = s1 == 0;
    if (cnd_) { s2 = LD32(s2+4); goto L_088B02F8; }
    goto L_088B02BC;
L_088B02BC:;
    a0 = s1 + 0;
    v0 = func_088BBDEC(a0, a1);
    goto L_088B02C4;
L_088B02C4:;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = 0 + 0; goto L_088B02F4; }
    goto L_088B02CC;
L_088B02CC:;
    v0 = LD32(s5+12);
    cnd_ = v0 == 0;
    v1 = s5 + 12;
    if (cnd_) { goto L_088B02F0; }
    goto L_088B02D8;
L_088B02D8:;
    s0 = LD32(v1);
    a0 = s0 + 8;
    cnd_ = a0 == s1;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_088B040C; }
    goto L_088B02E8;
L_088B02E8:;
    cnd_ = v0 != 0;
    v1 = s0 + 4;
    if (cnd_) { goto L_088B02D8; }
    goto L_088B02F0;
L_088B02F0:;
    ST32(s2, 0);
    goto L_088B02F4;
L_088B02F4:;
    s2 = LD32(s2+4);
    goto L_088B02F8;
L_088B02F8:;
    cnd_ = s2 != 0;
    if (cnd_) { s1 = LD32(s2); goto L_088B02B4; }
    goto L_088B0300;
L_088B0300:;
    v1 = LD32(s3);
    cnd_ = v1 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_088B0340; }
    goto L_088B030C;
L_088B030C:;
    s1 = LD32(s0);
    goto L_088B0310;
L_088B0310:;
    v1 = LD32(s1+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a0 = (v1 >> 5) & 0x1;
    if (cnd_) { goto L_088B0330; }
    goto L_088B0320;
L_088B0320:;
    cnd_ = a0 != 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_088B0330; }
    goto L_088B0328;
L_088B0328:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088B03EC; }
    goto L_088B0330;
L_088B0330:;
    s0 = LD32(s0+4);
    goto L_088B0334;
L_088B0334:;
    cnd_ = s0 != 0;
    if (cnd_) { s1 = LD32(s0); goto L_088B0310; }
    goto L_088B033C;
L_088B033C:;
    v1 = LD32(s3);
    goto L_088B0340;
L_088B0340:;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_088B0358; }
    goto L_088B0348;
L_088B0348:;
    s6 = s6 + 1;
    v0 = s6 < 0x5u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B0274; }
    goto L_088B0358;
L_088B0358:;
    cnd_ = v1 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_088B0390; }
    goto L_088B0360;
L_088B0360:;
    a0 = LD32(s0);
    goto L_088B0364;
L_088B0364:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = (v1 >> 5) & 0x1;
    if (cnd_) { goto L_088B0384; }
    goto L_088B0374;
L_088B0374:;
    cnd_ = a1 != 0;
    v0 = (v1 >> 6) & 0x1;
    if (cnd_) { goto L_088B0384; }
    goto L_088B037C;
L_088B037C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B03DC; }
    goto L_088B0384;
L_088B0384:;
    s0 = LD32(s0+4);
    goto L_088B0388;
L_088B0388:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_088B0364; }
    goto L_088B0390;
L_088B0390:;
    s3 = LD32(s3+8);
    cnd_ = s3 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_088B0270; }
    goto L_088B039C;
L_088B039C:;
    ST8(fp-17324, 0);
    sp = sp + 224;
    return;
L_088B03DC:;
    { u64 r_ = func_088C9E4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B03E4;
L_088B03E4:;
    s0 = LD32(s0+4);
    goto L_088B0388;
L_088B03EC:;
    func_088C6D00(a0);
    goto L_088B03F4;
L_088B03F4:;
    cnd_ = s4 == 0;
    if (cnd_) { s0 = LD32(s0+4); goto L_088B0334; }
    goto L_088B03FC;
L_088B03FC:;
    a0 = s1 + 0;
    v0 = func_088C6CF8();
    goto L_088B0404;
L_088B0404:;
    if (v0 != 0) s4 = 0;
    goto L_088B0330;
L_088B040C:;
    a1 = 0 + 0;
    ST32(v1, v0);
    func_088BBFA8(a0, a1);
    goto L_088B0418;
L_088B0418:;
    a0 = D_08B2BE64 - (-16796);
    a0 = a0 - 16796;
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0428;
L_088B0428:;
    ST32(s2, 0);
    goto L_088B02F4;
L_088B0430:;
    cnd_ = a0 == 0;
    s2 = v1 + 388;
    if (cnd_) { goto L_088B0448; }
    goto L_088B0438;
L_088B0438:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0440;
L_088B0440:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B0438; }
    goto L_088B0448;
L_088B0448:;
    ST32(s2, 0);
    goto L_088B0290;
L_088B0450:;
    a1 = 1;
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088B024C; }
    goto L_088B045C;
L_088B045C:;
    ST32(s0+380, 0);
    { u64 r_ = func_088B1814(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0464;
L_088B0464:;
    a0 = s0 + 0;
    a1 = 1;
    a2 = 1;
    { u64 r_ = func_088B1848(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0474;
L_088B0474:;
    v0 = LD32(s0+380);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B0250; }
    goto L_088B0480;
L_088B0480:;
    v0 = LD32(s2-17352);
    v1 = LD32(s3+8);
    a1 = 0 + 0;
    a0 = v0 + 12;
    v1 = v1 < a0;
    if (v1 == 0) a1 = v0;
    cnd_ = a1 == 0;
    ST32(s2-17352, a0);
    if (cnd_) { goto L_088B04B4; }
    goto L_088B04A0;
L_088B04A0:;
    v0 = LD32(s6-17356);
    ST32(a1, 0);
    ST32(a1+8, v0);
    ST32(a1+4, 0);
    ST32(s6-17356, a1);
    goto L_088B04B4;
L_088B04B4:;
    v0 = LD32(s2-17352);
    v1 = LD32(s3+8);
    a0 = v0 + 8;
    v1 = v1 < a0;
    if (v1 != 0) v0 = 0;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(s2-17352, a0);
    if (cnd_) { goto L_088B04E4; }
    goto L_088B04D4;
L_088B04D4:;
    v0 = LD32(a1);
    ST32(v1, s0);
    ST32(v1+4, v0);
    ST32(a1, v1);
    goto L_088B04E4;
L_088B04E4:;
    ST32(s0+380, a1);
    goto L_088B024C;
L_088B04EC:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B021C; }
    goto L_088B04F4;
L_088B04F4:;
    ST32(s0+380, 0);
    a0 = s0 + 0;
    a1 = 1;
    a2 = 0 + 0;
    { u64 r_ = func_088B1814(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0508;
L_088B0508:;
    v0 = LD32(s0+248);
    v0 = v0 & s3;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B0590; }
    goto L_088B0518;
L_088B0518:;
    v0 = LD32(s0+380);
    goto L_088B051C;
L_088B051C:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B021C; }
    goto L_088B0524;
L_088B0524:;
    v0 = LD32(s2-17352);
    v1 = LD32(s4+8);
    a1 = 0 + 0;
    a0 = v0 + 12;
    v1 = v1 < a0;
    if (v1 == 0) a1 = v0;
    cnd_ = a1 == 0;
    ST32(s2-17352, a0);
    if (cnd_) { goto L_088B0558; }
    goto L_088B0544;
L_088B0544:;
    v0 = LD32(s6-17356);
    ST32(a1, 0);
    ST32(a1+8, v0);
    ST32(a1+4, 0);
    ST32(s6-17356, a1);
    goto L_088B0558;
L_088B0558:;
    v0 = LD32(s2-17352);
    v1 = LD32(s4+8);
    a0 = v0 + 8;
    v1 = v1 < a0;
    if (v1 != 0) v0 = 0;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(s2-17352, a0);
    if (cnd_) { goto L_088B0588; }
    goto L_088B0578;
L_088B0578:;
    v0 = LD32(a1);
    ST32(v1, s0);
    ST32(v1+4, v0);
    ST32(a1, v1);
    goto L_088B0588;
L_088B0588:;
    ST32(s0+380, a1);
    goto L_088B0218;
L_088B0590:;
    a1 = 1;
    a2 = 0 + 0;
    { u64 r_ = func_088B1848(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B059C;
L_088B059C:;
    v0 = LD32(s0+380);
    goto L_088B051C;
L_088B05A4:;
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s1+240); goto L_088B01E8; }
    goto L_088B05B0;
L_088B05B0:;
    v0 = (v1 >> 6) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_088B0678; }
    goto L_088B05BC;
L_088B05BC:;
    v0 = (v1 >> 7) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & s3;
    if (cnd_) { goto L_088B0634; }
    goto L_088B05C8;
L_088B05C8:;
    cnd_ = v0 != 0;
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B05E4; }
    goto L_088B05D0;
L_088B05D0:;
    {u32 a_=s1+(176);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    goto L_088B05D4;
L_088B05D4:;
    a0 = s1 + 0;
    { u64 r_ = func_088C4CF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B05DC;
L_088B05DC:;
    s1 = LD32(s1+240);
    goto L_088B01E8;
L_088B05E4:;
    a0 = s1 + 0;
    v0 = func_088C4490(a0);
    goto L_088B05EC;
L_088B05EC:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    f0 = func_088C4480(a0);
    goto L_088B05F8;
L_088B05F8:;
    f0 = f20 * f0;
    {u32 a_=s0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 * f22;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B061C;
L_088B061C:;
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s1+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=s1+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B05D4;
L_088B0634:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B05D4; }
    goto L_088B063C;
L_088B063C:;
    a0 = s1 + 0;
    v0 = func_088C4490(a0);
    goto L_088B0644;
L_088B0644:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    f0 = func_088C4480(a0);
    goto L_088B0650;
L_088B0650:;
    f0 = f20 * f0;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f0 = f0 * f22;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B061C;
L_088B0678:;
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    cnd_ = v0 != 0;
    ST32(s1+248, v1);
    if (cnd_) { goto L_088B01E4; }
    goto L_088B0684;
L_088B0684:;
    v0 = v1 & s3;
    cnd_ = v0 == 0;
    v0 = (v1 >> 23) & 0x1;
    if (cnd_) { goto L_088B06FC; }
    goto L_088B0690;
L_088B0690:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B0710; }
    goto L_088B0698;
L_088B0698:;
    a0 = s1 + 0;
    v0 = func_088C44CC(a0);
    goto L_088B06A0;
L_088B06A0:;
    {u32 a_=v0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f21);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    a0 = s1 + 0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f0 = func_088C4480(a0);
    goto L_088B06CC;
L_088B06CC:;
    v0 = FBITS(f0);
    {u32 a_=sp+(32);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B06E8;
L_088B06E8:;
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s1+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=s1+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B06FC;
L_088B06FC:;
    a0 = s1 + 0;
    { u64 r_ = func_088C44D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0704;
L_088B0704:;
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(112);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    goto L_088B01E4;
L_088B0710:;
    a0 = s1 + 0;
    f0 = func_088C4480(a0);
    goto L_088B0718;
L_088B0718:;
    v0 = FBITS(f0);
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B06E8;
L_088B0738:;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B0198; }
    goto L_088B0744;
L_088B0744:;
    { u64 r_ = func_088C9E4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B074C;
L_088B074C:;
    v0 = LD32(s0+248);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = v0 & s1;
    a2 = 1;
    cnd_ = v0 != 0;
    ST32(s0+380, 0);
    if (cnd_) { goto L_088B0198; }
    goto L_088B0768;
L_088B0768:;
    { u64 r_ = func_088B1848(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0770;
L_088B0770:;
    s0 = LD32(s0+240);
    goto L_088B019C;
L_088B0778:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_088B00FC;
L_088B0788:;
    s0 = LD32(s0+4);
    goto L_088B0114;
L_088B0790:;
    a0 = LD32(a0);
    goto L_088B0794;
L_088B0794:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B07A4;
L_088B07A4:;
    a0 = s0 + 0;
    a1 = 1;
    func_08AB443C(a0);
    goto L_088B07B0;
L_088B07B0:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_088B0794; }
    goto L_088B07BC;
L_088B07BC:;
    s1 = LD32(sp+16);
    goto L_088B00AC;
L_088B07C4:;
    func_088C29AC(t1, t2, t3);
    goto L_088B07CC;
L_088B07CC:;
    s0 = LD32(s5-16688);
    cnd_ = s0 == 0;
    f0 = BITSF(LD32(s1-17360));
    if (cnd_) { goto L_088B0004; }
    goto L_088B07D8;
L_088B07D8:;
    a0 = s0 + 0;
    func_088CA214(a0);
    goto L_088B07E0;
L_088B07E0:;
    s0 = LD32(s0+240);
    cnd_ = s0 != 0;
    f0 = BITSF(LD32(s1-17360));
    if (cnd_) { goto L_088B07D8; }
    goto L_088B07EC;
L_088B07EC:;
    f1 = BITSF(LD32(s2-17340));
    goto L_088B0008;
}

/* 088B07F4 */
void func_088B07F4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B07F4:;
    sp = sp - 16;
    sp = sp + 16;
    return;
}

/* 088B0800 */
u32 func_088B0800(void)
{
    u32 v0 = 0;
L_088B0800:;
    v0 = D_08B2BC60 - (-17312);
    v0 = v0 - 17312;
    return v0;
}

/* 088B080C */
void func_088B080C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B080C:;
    sp = sp - 16;
    v1 = D_08B2BC55 - (-17323);
    v0 = LD_U8(v1-17323);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B0834; }
    goto L_088B0828;
L_088B0828:;
    sp = sp + 16;
    return;
L_088B0834:;
    ST8(v1-17323, 0);
    func_088B173C();
    goto L_088B083C;
L_088B083C:;
    v0 = D_08B2BED8 - (-16680);
    s0 = LD32(v0-16680);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088B0828; }
    goto L_088B084C;
L_088B084C:;
    v1 = LD32(s0+276);
    goto L_088B0850;
L_088B0850:;
    cnd_ = v1 != 0;
    v0 = LD32(s0+248);
    if (cnd_) { goto L_088B087C; }
    goto L_088B0858;
L_088B0858:;
    v0 = v0 | 0x2;
    ST32(s0+248, v0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0+248); goto L_088B087C; }
    goto L_088B0868;
L_088B0868:;
    s0 = LD32(s0+240);
    goto L_088B086C;
L_088B086C:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0+276); goto L_088B0850; }
    goto L_088B0874;
L_088B0874:;
    goto L_088B0828;
L_088B087C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_088B0868; }
    goto L_088B0890;
L_088B0890:;
    ST32(s0+380, 0);
    { u64 r_ = func_088B1814(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0898;
L_088B0898:;
    s0 = LD32(s0+240);
    goto L_088B086C;
}

/* 088B08A0 */
rv_t func_088B08A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B08A0:;
    sp = sp - 16;
    { rv_t r_ = func_088B187C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B08B0;
L_088B08B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B08BC */
rv_t func_088B08BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B08BC:;
    sp = sp - 16;
    { rv_t r_ = func_088B18C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B08CC;
L_088B08CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B08D8 */
rv_t func_088B08D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[464] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 464);
L_088B08D8:;
    sp = sp - 464;
    t3 = t3 & 0xff;
    s7 = t0 + 0;
    s6 = t1 & 0xffff;
    s5 = a3 & 0xffff;
    s4 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = t2 & 0xff;
    cnd_ = t3 != 0;
    if (cnd_) { goto L_088B092C; }
    goto L_088B0924;
L_088B0924:;
    cnd_ = s0 == 0;
    s3 = a2 + 4;
    if (cnd_) { goto L_088B0B28; }
    goto L_088B092C;
L_088B092C:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+12));
    f2 = BITSF(LD32(s1+24));
    ST32(sp+48, FBITS(f0));
    s3 = s4 + 4;
    t1 = sp + 48;
    f0 = BITSF(LD32(s1+4));
    a2 = LD32(sp+48);
    ST32(sp+52, FBITS(f1));
    t0 = sp + 96;
    a3 = sp + 0;
    ST32(sp+56, FBITS(f2));
    ST32(sp+48, FBITS(f0));
    f0 = BITSF(LD32(s1+16));
    f1 = BITSF(LD32(s1+28));
    f2 = BITSF(LD32(s1+8));
    v0 = LD32(sp+56);
    a1 = LD32(sp+52);
    ST32(sp+56, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    v1 = LD32(sp+48);
    ST32(sp+48, FBITS(f2));
    f0 = BITSF(LD32(s1+20));
    f1 = BITSF(LD32(s1+32));
    ST32(sp+8, v0);
    v0 = LD32(sp+52);
    a0 = LD32(sp+60);
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    v1 = LD32(sp+56);
    v0 = LD32(sp+48);
    ST32(sp+52, FBITS(f0));
    ST32(sp+24, v1);
    ST32(sp+56, FBITS(f1));
    ST32(sp, a2);
    ST32(sp+4, a1);
    ST32(sp+12, a0);
    ST32(sp+28, a0);
    ST32(sp+32, v0);
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(sp+48, FBITS(f0));
    ST32(sp+36, v0);
    ST32(sp+40, v1);
    ST32(sp+44, a0);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    f1 = BITSF(LD32(s4+4));
    f5 = BITSF(LD32(s3+4));
    f6 = BITSF(LD32(s3+12));
    f2 = BITSF(LD32(s3+8));
    f7 = BITSF(LD32(s3+20));
    f3 = BITSF(LD32(s3+16));
    f0 = f5 - f1;
    f4 = f6 - f2;
    f8 = f7 - f3;
    f1 = f1 + f5;
    ST32(sp+144, FBITS(f0));
    f2 = f2 + f6;
    f3 = f3 + f7;
    ST32(sp+148, FBITS(f4));
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    ST32(sp+152, FBITS(f8));
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+72, v0);
    v0 = D_08AEC504 - (-15100);
    ST32(sp+76, v1);
    f0 = BITSF(LD32(v0-15100));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[112]=BITSF(v0);}
    {float s0=v[112];float s1=v[112];float s2=v[112];float s3=v[112];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[112];float t1=v[113];float t2=v[114];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+176, FBITS(f1));
    ST32(sp+180, FBITS(f2));
    ST32(sp+184, FBITS(f3));
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    ST32(sp+160, FBITS(f1));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+164, FBITS(f2));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[104]=d0;v[105]=d1;v[106]=d2;v[107]=d3;}
    ST32(sp+168, FBITS(f3));
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[96]*t0;o0+=v[100]*t1;o0+=v[104]*t2;float o1=0;o1+=v[97]*t0;o1+=v[101]*t1;o1+=v[105]*t2;float o2=0;o2+=v[98]*t0;o2+=v[102]*t1;o2+=v[106]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088B0AEC;
L_088B0AEC:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != t1;
    ST32(t0-4, a1);
    if (cnd_) { goto L_088B0AEC; }
    goto L_088B0B18;
L_088B0B18:;
    cnd_ = t3 != 0;
    a0 = sp + 64;
    if (cnd_) { goto L_088B0E40; }
    goto L_088B0B20;
L_088B0B20:;
    cnd_ = s0 != 0;
    a0 = sp + 64;
    if (cnd_) { goto L_088B0E28; }
    goto L_088B0B28;
L_088B0B28:;
    s7 = sp + 192;
    goto L_088B0B2C;
L_088B0B2C:;
    a0 = s7 + 0;
    ST32(sp+216, 0);
    s0 = sp + 256;
    ST32(sp+220, 0);
    ST32(sp+224, 0);
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0B44;
L_088B0B44:;
    v0 = D_08AEC508 - (-15096);
    v1 = D_08AEC50C - (-15092);
    f0 = BITSF(LD32(v0-15096));
    f1 = BITSF(LD32(v1-15092));
    a1 = s3 + 0;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    ST32(sp+184, FBITS(f0));
    ST32(sp+248, FBITS(f1));
    ST32(sp+176, FBITS(f0));
    ST32(sp+180, FBITS(f0));
    ST32(sp+240, FBITS(f1));
    ST32(sp+244, FBITS(f1));
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B0B80;
L_088B0B80:;
    f12 = BITSF(0);
    f2 = BITSF(LD32(s2));
    f3 = BITSF(LD32(sp+256));
    f0 = BITSF(LD32(sp+260));
    f6 = BITSF(LD32(s2+4));
    f7 = BITSF(LD32(s2+8));
    ST16(sp+228, s5);
    f3 = f3 + f2;
    f0 = f0 + f2;
    f4 = BITSF(LD32(sp+264));
    f5 = BITSF(LD32(sp+272));
    f1 = BITSF(LD32(sp+268));
    f2 = BITSF(LD32(sp+276));
    v1 = LD32(sp+228);
    f4 = f4 + f6;
    f5 = f5 + f7;
    f1 = f1 + f6;
    f2 = f2 + f7;
    v0 = 0x10000u;
    v1 = v1 | v0;
    a1 = s0 + 0;
    a0 = s7 + 0;
    ST32(sp+260, FBITS(f0));
    ST32(sp+256, FBITS(f3));
    ST32(sp+268, FBITS(f1));
    ST32(sp+264, FBITS(f4));
    ST32(sp+276, FBITS(f2));
    ST32(sp+272, FBITS(f5));
    ST32(sp+228, v1);
    { rv_t r_ = func_088B8958(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0BF8;
L_088B0BF8:;
    v0 = 0xffff;
    cnd_ = s6 == v0;
    s0 = LD32(sp+216);
    if (cnd_) { goto L_088B0D50; }
    goto L_088B0C04;
L_088B0C04:;
    cnd_ = s0 == 0;
    s5 = D_08B2BDB4 - (-16972);
    if (cnd_) { goto L_088B0C60; }
    goto L_088B0C0C;
L_088B0C0C:;
    s3 = s5 - 16972;
    a2 = LD32(s0);
    goto L_088B0C14;
L_088B0C14:;
    a1 = LD32(s5-16972);
    a0 = s3 + 0;
    v1 = a2 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    a2 = (a2 >> 1) & 0x7fff;
    a1 = a1 + v0;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0C38;
L_088B0C38:;
    v0 = v0 & 0xffff;
    v0 = v0 & s6;
    a0 = s3 + 0;
    a2 = s4 + 0;
    a3 = sp + 352;
    cnd_ = v0 != 0;
    t0 = sp + 368;
    if (cnd_) { goto L_088B0C9C; }
    goto L_088B0C54;
L_088B0C54:;
    s0 = LD32(s0+12);
    goto L_088B0C58;
L_088B0C58:;
    cnd_ = s0 != 0;
    if (cnd_) { a2 = LD32(s0); goto L_088B0C14; }
    goto L_088B0C60;
L_088B0C60:;
    a0 = s7 + 0;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0C68;
L_088B0C68:;
    v1 = 1;
    goto L_088B0C6C;
L_088B0C6C:;
    v0 = v1 + 0;
    sp = sp + 464;
    return (rv_t){ v0, v1, f0 };
L_088B0C9C:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    a1 = LD32(s0);
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    f6 = BITSF(LD32(s1+12));
    f7 = BITSF(LD32(s1+16));
    f9 = BITSF(LD32(s1+24));
    f10 = BITSF(LD32(s1+28));
    f11 = BITSF(LD32(s1+32));
    f8 = BITSF(LD32(s1+20));
    ST32(sp+368, FBITS(f3));
    ST32(sp+352, FBITS(f0));
    ST32(sp+356, FBITS(f1));
    ST32(sp+360, FBITS(f2));
    ST32(sp+372, FBITS(f4));
    ST32(sp+376, FBITS(f5));
    ST32(sp+380, FBITS(f6));
    ST32(sp+384, FBITS(f7));
    ST32(sp+288, FBITS(f0));
    ST32(sp+292, FBITS(f1));
    ST32(sp+296, FBITS(f2));
    ST32(sp+304, FBITS(f3));
    ST32(sp+308, FBITS(f4));
    ST32(sp+312, FBITS(f5));
    ST32(sp+316, FBITS(f6));
    ST32(sp+320, FBITS(f7));
    ST32(sp+324, FBITS(f8));
    ST32(sp+328, FBITS(f9));
    ST32(sp+332, FBITS(f10));
    ST32(sp+336, FBITS(f11));
    ST32(sp+388, FBITS(f8));
    ST32(sp+392, FBITS(f9));
    ST32(sp+396, FBITS(f10));
    ST32(sp+400, FBITS(f11));
    { rv_t r_ = func_088B78C8(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0D34;
L_088B0D34:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+12); goto L_088B0C58; }
    goto L_088B0D40;
L_088B0D40:;
    a0 = s7 + 0;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0D48;
L_088B0D48:;
    v1 = 0 + 0;
    goto L_088B0C6C;
L_088B0D50:;
    cnd_ = s0 == 0;
    s5 = D_08B2BDB4 - (-16972);
    if (cnd_) { goto L_088B0C60; }
    goto L_088B0D58;
L_088B0D58:;
    s6 = sp + 288;
    s3 = sp + 304;
    f0 = BITSF(LD32(s2));
    goto L_088B0D64;
L_088B0D64:;
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    a1 = LD32(s0);
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    f6 = BITSF(LD32(s1+12));
    f7 = BITSF(LD32(s1+16));
    f9 = BITSF(LD32(s1+24));
    f10 = BITSF(LD32(s1+28));
    f11 = BITSF(LD32(s1+32));
    f8 = BITSF(LD32(s1+20));
    a0 = s5 - 16972;
    a2 = s4 + 0;
    a3 = s6 + 0;
    t0 = s3 + 0;
    ST32(sp+288, FBITS(f0));
    ST32(sp+292, FBITS(f1));
    ST32(sp+296, FBITS(f2));
    ST32(sp+304, FBITS(f3));
    ST32(sp+308, FBITS(f4));
    ST32(sp+312, FBITS(f5));
    ST32(sp+316, FBITS(f6));
    ST32(sp+320, FBITS(f7));
    ST32(sp+352, FBITS(f0));
    ST32(sp+356, FBITS(f1));
    ST32(sp+360, FBITS(f2));
    ST32(sp+368, FBITS(f3));
    ST32(sp+372, FBITS(f4));
    ST32(sp+376, FBITS(f5));
    ST32(sp+380, FBITS(f6));
    ST32(sp+384, FBITS(f7));
    ST32(sp+388, FBITS(f8));
    ST32(sp+392, FBITS(f9));
    ST32(sp+396, FBITS(f10));
    ST32(sp+400, FBITS(f11));
    ST32(sp+324, FBITS(f8));
    ST32(sp+328, FBITS(f9));
    ST32(sp+332, FBITS(f10));
    ST32(sp+336, FBITS(f11));
    { rv_t r_ = func_088B78C8(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0E08;
L_088B0E08:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B0D40; }
    goto L_088B0E14;
L_088B0E14:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s2)); goto L_088B0D64; }
    goto L_088B0E20;
L_088B0E20:;
    goto L_088B0C60;
L_088B0E28:;
    a1 = s7 + 0;
    { rv_t r_ = func_088B08A0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0E30;
L_088B0E30:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088B0C6C; }
    goto L_088B0E38;
L_088B0E38:;
    s7 = sp + 192;
    goto L_088B0B2C;
L_088B0E40:;
    a1 = s7 + 0;
    { rv_t r_ = func_088B08BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B0E48;
L_088B0E48:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088B0C6C; }
    goto L_088B0E50;
L_088B0E50:;
    goto L_088B0B20;
}

/* 088B0E58 */
u32 func_088B0E58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_088B0E58:;
    {u32 a_=a2+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=t0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=a1+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    sp = sp - 80;
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    v0 = D_08AEC514 - (-15084);
    f0 = BITSF(LD32(v0-15084));
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f1 = f2;
    if (cnd_) { goto L_088B0EC0; }
    goto L_088B0EA8;
L_088B0EA8:;
    v0 = D_08AEC510 - (-15088);
    f0 = BITSF(LD32(v0-15088));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_088B0F50; }
    goto L_088B0EC0;
L_088B0EC0:;
    v0 = D_08AEC518 - (-15080);
    f4 = BITSF(LD32(v0-15080));
    {u32 a_=a0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    f2 = f4 / f1;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f5 = BITSF(0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = f0 * f2;
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088B0F4C; }
    goto L_088B0EFC;
L_088B0EFC:;
    fcc = FCMP(f4, f3, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = 0 + 0; goto L_088B0F50; }
    goto L_088B0F0C;
L_088B0F0C:;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr0=d0;vr1=d1;vr2=d2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f0 = f0 * f2;
    fcc = FCMP(f0, f5, 12);
    cnd_ = fcc;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B0F4C; }
    goto L_088B0F38;
L_088B0F38:;
    f0 = f3 + f0;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B0F5C; }
    goto L_088B0F4C;
L_088B0F4C:;
    v1 = 0 + 0;
    goto L_088B0F50;
L_088B0F50:;
    v0 = v1 + 0;
    sp = sp + 80;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;return v0; }
L_088B0F5C:;
    fcc = FCMP(f2, f5, 12);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    cnd_ = !fcc;
    f0 = f0 * f2;
    if (cnd_) { goto L_088B0F88; }
    goto L_088B0F78;
L_088B0F78:;
    ST8(t1, 0);
    goto L_088B0F7C;
L_088B0F7C:;
    ST32(t2, FBITS(f0));
    v1 = 1;
    goto L_088B0F50;
L_088B0F88:;
    v0 = 1;
    ST8(t1, v0);
    goto L_088B0F7C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;
}

/* 088B0F94 */
u32 func_088B0F94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088B0F94:;
    {u32 a_=a0+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=a2+(0);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;v[20]=d0;v[21]=d1;v[22]=d2;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {float s0=v[20];float s1=v[21];float s2=v[22];float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f5 = BITSF(v0);
    {v0=FBITS(vr0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float d0=-s0;float d1=-s1;float d2=-s2;vr16=d0;vr17=d1;vr18=d2;}
    f4 = BITSF(v0);
    f1 = f5 * f0;
    f0 = f3 * f3;
    v0 = D_08AEC51C - (-15076);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    sp = sp - 64;
    f6 = f1 - f0;
    f0 = BITSF(LD32(v0-15076));
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    fcc = FCMP(f6, f0, 14);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f5 = f5 * f1;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    f0 = f3 * f1;
    {v0=FBITS(vr8);}
    f2 = BITSF(v0);
    f1 = BITSF(v0);
    f7 = BITSF(0);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    f2 = f3 * f2;
    f1 = f4 * f1;
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088B10B0; }
    goto L_088B1044;
L_088B1044:;
    v0 = D_08AEC520 - (-15072);
    f3 = BITSF(LD32(v0-15072));
    f1 = f0 - f1;
    f2 = f2 - f5;
    f0 = f3 / f6;
    f2 = f2 * f0;
    f1 = f1 * f0;
    ST32(t0, FBITS(f1));
    ST32(t1, FBITS(f2));
    f0 = BITSF(LD32(t0));
    fcc = FCMP(f0, f7, 14);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088B10B0; }
    goto L_088B107C;
L_088B107C:;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088B10B0; }
    goto L_088B108C;
L_088B108C:;
    fcc = FCMP(f2, f7, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088B10AC; }
    goto L_088B109C;
L_088B109C:;
    fcc = FCMP(f3, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B10B0; }
    goto L_088B10AC;
L_088B10AC:;
    v0 = 0 + 0;
    goto L_088B10B0;
L_088B10B0:;
    sp = sp + 64;
    { v[0]=vr0;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;return v0; }
    v[0]=vr0;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;
}

/* 088B10B8 */
u32 func_088B10B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088B10B8:;
    sp = sp - 48;
    v0 = D_08AEC524 - (-15068);
    s6 = t0 + 0;
    s5 = a3 + 0;
    s4 = a1 + 0;
    s3 = a0 + 0;
    s2 = t1 + 0;
    s1 = a2 + 0;
    f20 = f12;
    f0 = BITSF(LD32(v0-15068));
    ST32(t1, FBITS(f0));
    v0 = func_088B1278(a0, a1, a2, a3, t0, t1, f12);
    goto L_088B110C;
L_088B110C:;
    a2 = s1 + 0;
    f12 = f20;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a3 = s6 + 0;
    t0 = s2 + 0;
    s1 = 1;
    s0 = 0 < v0;
    v0 = func_088B1184(a0, a1, a2, a3, t0, f12);
    goto L_088B1130;
L_088B1130:;
    f12 = f20;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s5 + 0;
    a3 = s6 + 0;
    t0 = s2 + 0;
    if (v0 != 0) s0 = s1;
    v0 = func_088B1184(a0, a1, a2, a3, t0, f12);
    goto L_088B1150;
L_088B1150:;
    if (v0 != 0) s0 = s1;
    v0 = s0 + 0;
    sp = sp + 48;
    return v0;
}

/* 088B1184 */
u32 func_088B1184(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1184:;
    {u32 a_=a0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    v0 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    v0 = D_08AEC528 - (-15064);
    f0 = BITSF(LD32(v0-15064));
    f12 = f12 * f12;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    fcc = FCMP(f1, f0, 12);
    {v0=FBITS(vr4);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    f3 = f1 + f1;
    f1 = BITSF(v1);
    f0 = f2 - f12;
    sp = sp - 16;
    f6 = BITSF(0);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f4 = f1 * f0;
    a0 = 0 + 0;
    cnd_ = fcc;
    f2 = f3 * f3;
    if (cnd_) { goto L_088B126C; }
    goto L_088B11F4;
L_088B11F4:;
    v0 = D_08AEC52C - (-15060);
    f0 = BITSF(LD32(v0-15060));
    f5 = BITSF(FBITS(f3) ^ 0x80000000u);
    f0 = f4 * f0;
    f0 = f2 - f0;
    fcc = FCMP(f0, f6, 12);
    cnd_ = fcc;
    f3 = f1 + f1;
    if (cnd_) { goto L_088B126C; }
    goto L_088B1218;
L_088B1218:;
    f0 = sqrtf(f0);
    f0 = f5 - f0;
    f3 = f0 / f3;
    fcc = FCMP(f6, f3, 14);
    cnd_ = !fcc;
    v0 = a0 + 0;
    if (cnd_) { goto L_088B1270; }
    goto L_088B1234;
L_088B1234:;
    f0 = BITSF(LD32(t0));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    a0 = 1;
    if (cnd_) { goto L_088B1270; }
    goto L_088B1248;
L_088B1248:;
    ST32(t0, FBITS(f3));
    v0 = LD32(a2);
    ST32(a3, v0);
    v1 = LD32(a2+4);
    ST32(a3+4, v1);
    v0 = LD32(a2+8);
    ST32(a3+8, v0);
    v1 = LD32(a2+12);
    ST32(a3+12, v1);
    goto L_088B126C;
L_088B126C:;
    v0 = a0 + 0;
    goto L_088B1270;
L_088B1270:;
    sp = sp + 16;
    { v[0]=vr0;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;return v0; }
    v[0]=vr0;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;
}

/* 088B1278 */
u32 func_088B1278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr28 = v[28], vr32 = v[32];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088B1278:;
    {u32 a_=a2+(0);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=a1+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    f12 = f12 * f12;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f7 = BITSF(v0);
    {v1=FBITS(vr0);}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f4 = BITSF(v1);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = f4 * f4;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = f0 * f7;
    {v1=FBITS(vr0);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f6 = f1 - f2;
    f2 = BITSF(v0);
    f3 = BITSF(v1);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = FBITS(f6);
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f4 = f3 * f4;
    f1 = f0 - f12;
    f5 = BITSF(v0);
    f2 = f2 * f7;
    v0 = D_08AEC530 - (-15056);
    f0 = BITSF(LD32(v0-15056));
    f3 = f3 * f3;
    f2 = f2 - f4;
    f1 = f1 * f7;
    fcc = FCMP(f5, f0, 12);
    sp = sp - 64;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f1 = f1 - f3;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    f3 = f2 + f2;
    cnd_ = fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_088B1438; }
    goto L_088B1334;
L_088B1334:;
    f1 = f6 * f1;
    v0 = D_08AEC534 - (-15052);
    f0 = BITSF(LD32(v0-15052));
    f2 = f3 * f3;
    f5 = BITSF(0);
    f1 = f1 * f0;
    f0 = f2 - f1;
    fcc = FCMP(f0, f5, 12);
    cnd_ = fcc;
    v0 = a2 + 0;
    if (cnd_) { goto L_088B143C; }
    goto L_088B1360;
L_088B1360:;
    f1 = f6 + f6;
    f9 = sqrtf(f0);
    v0 = D_08AEC538 - (-15048);
    f6 = BITSF(LD32(v0-15048));
    f8 = f6 / f1;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    f0 = f0 - f9;
    f4 = f0 * f8;
    fcc = FCMP(f5, f4, 14);
    cnd_ = !fcc;
    f0 = f9 - f3;
    if (cnd_) { goto L_088B144C; }
    goto L_088B1390;
L_088B1390:;
    fcc = FCMP(f4, f6, 14);
    cnd_ = !fcc;
    if (cnd_) { f4 = f0 * f8; goto L_088B1450; }
    goto L_088B13A0;
L_088B13A0:;
    f2 = f6 / f7;
    v1 = FBITS(f4);
    {vr24=BITSF(v1);}
    {float s0=vr24;float s1=vr24;float s2=vr24;float s3=vr24;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr24;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f1 = f0 * f2;
    fcc = FCMP(f5, f1, 14);
    cnd_ = !fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088B1444; }
    goto L_088B13E0;
L_088B13E0:;
    fcc = FCMP(f1, f6, 14);
    cnd_ = !fcc;
    f0 = f9 - f3;
    if (cnd_) { goto L_088B144C; }
    goto L_088B13F0;
L_088B13F0:;
    v0 = FBITS(f1);
    {vr28=BITSF(v0);}
    {float s0=vr28;float s1=vr28;float s2=vr28;float s3=vr28;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr28;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    goto L_088B1404;
L_088B1404:;
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a2 = 1;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a0 = LD32(sp+52);
    a1 = LD32(sp+56);
    v1 = LD32(sp+60);
    v0 = LD32(sp+48);
    ST32(t0+4, a0);
    ST32(t0, v0);
    ST32(t0+12, v1);
    ST32(t0+8, a1);
    ST32(t1, FBITS(f4));
    goto L_088B1438;
L_088B1438:;
    v0 = a2 + 0;
    goto L_088B143C;
L_088B143C:;
    sp = sp + 64;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[28]=vr28;v[32]=vr32;return v0; }
L_088B1444:;
    f0 = f9 - f3;
    f5 = BITSF(0);
    goto L_088B144C;
L_088B144C:;
    f4 = f0 * f8;
    goto L_088B1450;
L_088B1450:;
    fcc = FCMP(f5, f4, 14);
    cnd_ = !fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_088B1438; }
    goto L_088B1460;
L_088B1460:;
    f3 = BITSF(LD32(v0-15048));
    fcc = FCMP(f4, f3, 14);
    cnd_ = !fcc;
    v0 = a2 + 0;
    if (cnd_) { goto L_088B143C; }
    goto L_088B1474;
L_088B1474:;
    f2 = f3 / f7;
    v1 = FBITS(f4);
    {vr28=BITSF(v1);}
    {float s0=vr28;float s1=vr28;float s2=vr28;float s3=vr28;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr28;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f0 = f0 * f2;
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B1438; }
    goto L_088B14BC;
L_088B14BC:;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    v0 = a2 + 0;
    if (cnd_) { goto L_088B143C; }
    goto L_088B14CC;
L_088B14CC:;
    v1 = FBITS(f0);
    {vr32=BITSF(v1);}
    {float s0=vr32;float s1=vr32;float s2=vr32;float s3=vr32;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr32;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    goto L_088B1404;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[28]=vr28;v[32]=vr32;
}

/* 088B14E4 */
rv_t func_088B14E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B14E4:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088B1538; }
    goto L_088B14F4;
L_088B14F4:;
    v0 = D_08B2BED0 - (-16688);
    v1 = LD32(v0-16688);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088B152C; }
    goto L_088B1504;
L_088B1504:;
    a0 = LD32(v1+248);
    goto L_088B1508;
L_088B1508:;
    v0 = (a0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088B151C; }
    goto L_088B1514;
L_088B1514:;
    ST32(v1+248, a0);
    ST32(v1+352, 0);
    goto L_088B151C;
L_088B151C:;
    v1 = LD32(v1+240);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1+248); goto L_088B1508; }
    goto L_088B1528;
L_088B1528:;
    goto L_088B152C;
L_088B152C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088B1538:;
    a0 = D_08AD8198 - (-32360);
    a0 = a0 - 32360;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1544;
L_088B1544:;
    a0 = D_08AD81C8 - (-32312);
    a0 = a0 - 32312;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1550;
L_088B1550:;
    goto L_088B152C;
}

/* 088B1558 */
void func_088B1558(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1558:;
    a0 = D_08AD8198 - (-32360);
    a1 = RS_FADDR(func_088B14E4, 0x088B14E4u) - (5348);
    sp = sp - 16;
    a0 = a0 - 32360;
    a1 = a1 + 5348;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, t1, t2, t3);
    goto L_088B157C;
L_088B157C:;
    sp = sp + 16;
    return;
}

/* 088B1588 */
u64 func_088B1588(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B1588:;
    sp = sp - 32;
    v0 = a1 ^ 0xffff;
    v1 = a0 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    v1 = s0 & v1;
    s2 = D_08B2BC38 - (-17352);
    a1 = 0x20000u;
    s3 = s2 - 17352;
    s1 = a0 + 0;
    a0 = 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088B1608; }
    goto L_088B15CC;
L_088B15CC:;
    v0 = s1 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08B2BC3C - (-17348);
    if (cnd_) { goto L_088B15F8; }
    goto L_088B15DC;
L_088B15DC:;
    goto L_088B15E0;
L_088B15E0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088B15F8:;
    a0 = LD32(v0-17348);
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1600;
L_088B1600:;
    goto L_088B15E0;
L_088B1608:;
    { rv_t r_ = func_088F9AB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1610;
L_088B1610:;
    v1 = 0x20000u;
    v1 = v0 + v1;
    ST32(s2-17352, v0);
    ST32(s3+8, v1);
    ST32(s3+4, v0);
    goto L_088B15CC;
}

/* 088B1628 */
rv_t func_088B1628(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1628:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088B1588(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B163C;
L_088B163C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B1648 */
rv_t func_088B1648(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1648:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088B1588(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B165C;
L_088B165C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B1668 */
void func_088B1668(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088B1668:;
    v0 = D_08B2BC70 - (-17296);
    v0 = v0 - 17296;
    ST32(v0+132, 0);
    a1 = v0 + 0;
    a0 = 0 + 0;
    v1 = v0 + 0;
    goto L_088B1680;
L_088B1680:;
    a0 = a0 + 1;
    v0 = a0 < 0x1fu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088B1680; }
    goto L_088B1694;
L_088B1694:;
    f1 = BITSF(LD32(a1+132));
    f0 = BITSF(0);
    v0 = LD32(a1+128);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    ST32(a1+124, v0);
    if (cnd_) { goto L_088B1730; }
    goto L_088B16B0;
L_088B16B0:;
    v0 = D_08AEC554 - (-15020);
    f0 = BITSF(LD32(v0-15020));
    f0 = f0 / f1;
    goto L_088B16BC;
L_088B16BC:;
    v0 = D_08B2BCFC - (-17156);
    v0 = v0 - 17156;
    ST32(a1+132, 0);
    a0 = 0 + 0;
    v1 = v0 + 0;
    ST32(v0+132, 0);
    ST32(a1+136, FBITS(f0));
    a1 = v0 + 0;
    goto L_088B16DC;
L_088B16DC:;
    a0 = a0 + 1;
    v0 = a0 < 0x1fu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088B16DC; }
    goto L_088B16F0;
L_088B16F0:;
    f1 = BITSF(LD32(a1+132));
    f0 = BITSF(0);
    v0 = LD32(a1+128);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    ST32(a1+124, v0);
    if (cnd_) { goto L_088B1724; }
    goto L_088B170C;
L_088B170C:;
    v0 = D_08AEC554 - (-15020);
    f0 = BITSF(LD32(v0-15020));
    f0 = f0 / f1;
    goto L_088B1718;
L_088B1718:;
    ST32(a1+136, FBITS(f0));
    ST32(a1+132, 0);
    return;
L_088B1724:;
    v0 = D_08AEC558 - (-15016);
    f0 = BITSF(LD32(v0-15016));
    goto L_088B1718;
L_088B1730:;
    v0 = D_08AEC558 - (-15016);
    f0 = BITSF(LD32(v0-15016));
    goto L_088B16BC;
}

/* 088B173C */
void func_088B173C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088B173C:;
    v0 = D_08B2BCFC - (-17156);
    v0 = v0 - 17156;
    ST32(v0+132, 0);
    a1 = v0 + 0;
    a0 = 0 + 0;
    v1 = v0 + 0;
    goto L_088B1754;
L_088B1754:;
    a0 = a0 + 1;
    v0 = a0 < 0x1fu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088B1754; }
    goto L_088B1768;
L_088B1768:;
    f1 = BITSF(LD32(a1+132));
    f0 = BITSF(0);
    v0 = LD32(a1+128);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    ST32(a1+124, v0);
    if (cnd_) { goto L_088B179C; }
    goto L_088B1784;
L_088B1784:;
    v0 = D_08AEC55C - (-15012);
    f0 = BITSF(LD32(v0-15012));
    f0 = f0 / f1;
    goto L_088B1790;
L_088B1790:;
    ST32(a1+136, FBITS(f0));
    ST32(a1+132, 0);
    return;
L_088B179C:;
    v0 = D_08AEC560 - (-15008);
    f0 = BITSF(LD32(v0-15008));
    goto L_088B1790;
}

/* 088B17A8 */
void func_088B17A8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088B17A8:;
    v0 = D_08B2BC70 - (-17296);
    v0 = v0 - 17296;
    ST32(v0+132, 0);
    a1 = v0 + 0;
    a0 = 0 + 0;
    v1 = v0 + 0;
    goto L_088B17C0;
L_088B17C0:;
    a0 = a0 + 1;
    v0 = a0 < 0x1fu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088B17C0; }
    goto L_088B17D4;
L_088B17D4:;
    f1 = BITSF(LD32(a1+132));
    f0 = BITSF(0);
    v0 = LD32(a1+128);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    ST32(a1+124, v0);
    if (cnd_) { goto L_088B1808; }
    goto L_088B17F0;
L_088B17F0:;
    v0 = D_08AEC564 - (-15004);
    f0 = BITSF(LD32(v0-15004));
    f0 = f0 / f1;
    goto L_088B17FC;
L_088B17FC:;
    ST32(a1+136, FBITS(f0));
    ST32(a1+132, 0);
    return;
L_088B1808:;
    v0 = D_08AEC568 - (-15000);
    f0 = BITSF(LD32(v0-15000));
    goto L_088B17FC;
}

/* 088B1814 */
u64 func_088B1814(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1814:;
    v0 = a0 + 0;
    t0 = a2 & 0xff;
    a2 = a0 + 328;
    a0 = D_08B2BCFC - (-17156);
    sp = sp - 16;
    a3 = a1 & 0xff;
    a0 = a0 - 17156;
    a1 = v0 + 0;
    { u64 r_ = func_08AB44B8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B183C;
L_088B183C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B1848 */
u64 func_088B1848(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1848:;
    v0 = a0 + 0;
    t0 = a2 & 0xff;
    a2 = a0 + 328;
    a0 = D_08B2BC70 - (-17296);
    sp = sp - 16;
    a3 = a1 & 0xff;
    a0 = a0 - 17296;
    a1 = v0 + 0;
    { u64 r_ = func_08AB44B8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1870;
L_088B1870:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B187C */
rv_t func_088B187C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B187C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_088B080C();
    goto L_088B1898;
L_088B1898:;
    a0 = D_08B2BCFC - (-17156);
    a1 = s0 + 0;
    a2 = s1 + 0;
    a0 = a0 - 17156;
    { rv_t r_ = func_08AB47E8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B18AC;
L_088B18AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B18C0 */
rv_t func_088B18C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B18C0:;
    v0 = a0 + 0;
    a0 = D_08B2BC70 - (-17296);
    sp = sp - 16;
    a2 = a1 + 0;
    a0 = a0 - 17296;
    a1 = v0 + 0;
    { rv_t r_ = func_08AB47E8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B18E0;
L_088B18E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B18EC */
void func_088B18EC(u32 a0)
{
L_088B18EC:;
    ST32(a0, 0);
    return;
}

/* 088B18F4 */
u64 func_088B18F4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B18F4:;
    sp = sp - 16;
    { u64 r_ = func_088B1910(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1904;
L_088B1904:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B1910 */
u64 func_088B1910(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1910:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1, 0); goto L_088B1944; }
    goto L_088B1930;
L_088B1930:;
    s0 = LD32(a0+4);
    { u64 r_ = func_088B1C5C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1938;
L_088B1938:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B1930; }
    goto L_088B1940;
L_088B1940:;
    ST32(s1, 0);
    goto L_088B1944;
L_088B1944:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B1958 */
void func_088B1958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B1958:;
    sp = sp - 32;
    s0 = a3 & 0xff;
    s5 = t0 & 0xff;
    s4 = a0 + 0;
    s3 = t1 & 0xff;
    s2 = a1 + 0;
    s1 = a2 & 0xff;
    { u64 r_ = func_088B1910(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1994;
L_088B1994:;
    cnd_ = s0 != 0;
    a0 = D_08B2BC70 - (-17296);
    if (cnd_) { goto L_088B1BB4; }
    goto L_088B199C;
L_088B199C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088B1B8C; }
    goto L_088B19A4;
L_088B19A4:;
    cnd_ = s3 == 0;
    v0 = D_08B2BED0 - (-16688);
    if (cnd_) { goto L_088B19D8; }
    goto L_088B19AC;
L_088B19AC:;
    s0 = LD32(v0-16688);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088B19D8; }
    goto L_088B19B8;
L_088B19B8:;
    v0 = LD32(s0+248);
    goto L_088B19BC;
L_088B19BC:;
    v1 = (v0 >> 1) & 0x1;
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B1AE0; }
    goto L_088B19CC;
L_088B19CC:;
    s0 = LD32(s0+240);
    goto L_088B19D0;
L_088B19D0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+248); goto L_088B19BC; }
    goto L_088B19D8;
L_088B19D8:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_088B1A14; }
    goto L_088B19E0;
L_088B19E0:;
    v0 = D_08B2BED0 - (-16688);
    s0 = LD32(v0-16688);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088B1A18; }
    goto L_088B19F0;
L_088B19F0:;
    v0 = LD32(s0+248);
    goto L_088B19F4;
L_088B19F4:;
    v1 = (v0 >> 1) & 0x1;
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B1A34; }
    goto L_088B1A04;
L_088B1A04:;
    s0 = LD32(s0+240);
    goto L_088B1A08;
L_088B1A08:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+248); goto L_088B19F4; }
    goto L_088B1A10;
L_088B1A10:;
    goto L_088B1A14;
L_088B1A14:;
    goto L_088B1A18;
L_088B1A18:;
    sp = sp + 32;
    return;
L_088B1A34:;
    cnd_ = v1 != 0;
    v0 = s0 + 328;
    if (cnd_) { goto L_088B1A04; }
    goto L_088B1A3C;
L_088B1A3C:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B1A08; }
    goto L_088B1A54;
L_088B1A54:;
    f1 = BITSF(LD32(s0+328));
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B1A08; }
    goto L_088B1A6C;
L_088B1A6C:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B1A08; }
    goto L_088B1A84;
L_088B1A84:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B1A08; }
    goto L_088B1A9C;
L_088B1A9C:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(s2+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B1A08; }
    goto L_088B1AB4;
L_088B1AB4:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(s2+20));
    a1 = s0 + 0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_088B1A04; }
    goto L_088B1AD0;
L_088B1AD0:;
    v0 = func_088B1BD0(a0, a1, 0, 0, 0);
    goto L_088B1AD8;
L_088B1AD8:;
    s0 = LD32(s0+240);
    goto L_088B1A08;
L_088B1AE0:;
    cnd_ = v1 != 0;
    v0 = s0 + 328;
    if (cnd_) { goto L_088B19CC; }
    goto L_088B1AE8;
L_088B1AE8:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B19D0; }
    goto L_088B1B00;
L_088B1B00:;
    f1 = BITSF(LD32(s0+328));
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B19D0; }
    goto L_088B1B18;
L_088B1B18:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B19D0; }
    goto L_088B1B30;
L_088B1B30:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B19D0; }
    goto L_088B1B48;
L_088B1B48:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(s2+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+240); goto L_088B19D0; }
    goto L_088B1B60;
L_088B1B60:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(s2+20));
    a1 = s0 + 0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_088B19CC; }
    goto L_088B1B7C;
L_088B1B7C:;
    v0 = func_088B1BD0(a0, a1, 0, 0, 0);
    goto L_088B1B84;
L_088B1B84:;
    s0 = LD32(s0+240);
    goto L_088B19D0;
L_088B1B8C:;
    func_088B080C();
    goto L_088B1B94;
L_088B1B94:;
    a0 = D_08B2BCFC - (-17156);
    a0 = a0 - 17156;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    func_08AB4BE4(a0, a1, a2, a3, 0, 0, 0);
    goto L_088B1BAC;
L_088B1BAC:;
    goto L_088B19A4;
L_088B1BB4:;
    a0 = a0 - 17296;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = 1;
    func_08AB4BE4(a0, a1, a2, a3, 0, 0, 0);
    goto L_088B1BC8;
L_088B1BC8:;
    goto L_088B199C;
}

/* 088B1BD0 */
u32 func_088B1BD0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1BD0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088B1C04; }
    goto L_088B1BEC;
L_088B1BEC:;
    v0 = LD32(v1);
    goto L_088B1BF0;
L_088B1BF0:;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_088B1C14; }
    goto L_088B1BF8;
L_088B1BF8:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088B1BF0; }
    goto L_088B1C04;
L_088B1C04:;
    a1 = LD32(s0);
    v0 = func_088B1C20(a0, a1, t1, t2, t3);
    goto L_088B1C0C;
L_088B1C0C:;
    ST32(s0, v0);
    goto L_088B1C14;
L_088B1C14:;
    sp = sp + 16;
    return v0;
}

/* 088B1C20 */
u32 func_088B1C20(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1C20:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 8;
    s0 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1C40;
L_088B1C40:;
    ST32(v0+4, s0);
    ST32(v0, s1);
    sp = sp + 16;
    return v0;
}

/* 088B1C5C */
u64 func_088B1C5C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1C5C:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088B1C70; }
    goto L_088B1C68;
L_088B1C68:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1C70;
L_088B1C70:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B1C7C */
rv_t func_088B1C7C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B1C7C:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B1CF8; }
    goto L_088B1CB0;
L_088B1CB0:;
    v0 = D_08B2BC70 - (-17296);
    s0 = v0 - 17296;
    a0 = 0 + 0;
    v1 = s0 + 0;
    goto L_088B1CC0;
L_088B1CC0:;
    a0 = a0 + 1;
    v0 = a0 < 0x1fu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088B1CC0; }
    goto L_088B1CD4;
L_088B1CD4:;
    a0 = 0x20000u;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1CDC;
L_088B1CDC:;
    v1 = D_08AEC56C - (-14996);
    f0 = BITSF(LD32(v1-14996));
    ST32(s0+124, v0);
    ST32(s0+136, FBITS(f0));
    ST32(s0+128, v0);
    ST32(s0+132, 0);
    v1 = s2 < 0x1u;
    goto L_088B1CF8;
L_088B1CF8:;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    s0 = s3 < 0x1u;
    if (cnd_) { goto L_088B1D50; }
    goto L_088B1D08;
L_088B1D08:;
    v0 = D_08B2BCFC - (-17156);
    s0 = v0 - 17156;
    a0 = 0 + 0;
    v1 = s0 + 0;
    goto L_088B1D18;
L_088B1D18:;
    a0 = a0 + 1;
    v0 = a0 < 0x1fu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088B1D18; }
    goto L_088B1D2C;
L_088B1D2C:;
    a0 = 0x20000u;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1D34;
L_088B1D34:;
    v1 = D_08AEC56C - (-14996);
    f0 = BITSF(LD32(v1-14996));
    ST32(s0+124, v0);
    ST32(s0+136, FBITS(f0));
    ST32(s0+128, v0);
    ST32(s0+132, 0);
    s0 = s3 < 0x1u;
    goto L_088B1D50;
L_088B1D50:;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_088B1D74; }
    goto L_088B1D60;
L_088B1D60:;
    v0 = D_08B2BD7C - (-17028);
    a0 = LD32(v0-17028);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088B1DB8; }
    goto L_088B1D70;
L_088B1D70:;
    v0 = s1 < 0x1u;
    goto L_088B1D74;
L_088B1D74:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B1D90; }
    goto L_088B1D80;
L_088B1D80:;
    v0 = D_08B2BCF0 - (-17168);
    a0 = LD32(v0-17168);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088B1DA8; }
    goto L_088B1D90;
L_088B1D90:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088B1DA8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1DB0;
L_088B1DB0:;
    goto L_088B1D90;
L_088B1DB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B1DC0;
L_088B1DC0:;
    v0 = s1 < 0x1u;
    goto L_088B1D74;
}

/* 088B1DC8 */
rv_t func_088B1DC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1DC8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088B1C7C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1DDC;
L_088B1DDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B1DE8 */
rv_t func_088B1DE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B1DE8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088B1C7C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B1DFC;
L_088B1DFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B1E08 */
u32 func_088B1E08(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr20 = v[20];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088B1E08:;
    t2 = 0 < a1;
    t0 = a1 + 0;
    sp = sp - 96;
    t4 = a0 + 0;
    t6 = 0 + 0;
    t1 = 1;
    cnd_ = t2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088B1E7C; }
    goto L_088B1E28;
L_088B1E28:;
    f2 = BITSF(0);
    {u32 a_=a3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = sp + 0;
    v0 = t4 + 0;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088B1E3C;
L_088B1E3C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    a1 = a1 + 1;
    v1 = a1 < t0;
    f1 = f0 + f12;
    v0 = v0 + 16;
    fcc = FCMP(f2, f1, 14);
    ST32(a0, FBITS(f1));
    cnd_ = !fcc;
    a0 = a0 + 4;
    if (cnd_) { goto L_088B1E6C; }
    goto L_088B1E68;
L_088B1E68:;
    t1 = 0 + 0;
    goto L_088B1E6C;
L_088B1E6C:;
    cnd_ = v1 != 0;
    if (cnd_) { {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088B1E3C; }
    goto L_088B1E74;
L_088B1E74:;
    cnd_ = t1 == 0;
    if (cnd_) { goto L_088B1E88; }
    goto L_088B1E7C;
L_088B1E7C:;
    v0 = 0 + 0;
    goto L_088B1E80;
L_088B1E80:;
    sp = sp + 96;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[20]=vr20;return v0; }
L_088B1E88:;
    cnd_ = t2 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088B1F98; }
    goto L_088B1E90;
L_088B1E90:;
    v0 = D_08AEC584 - (-14972);
    f4 = BITSF(LD32(v0-14972));
    v1 = t6 << 4;
    a2 = v1 + a2;
    {u32 a_=sp+(48);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    t3 = t4 + 0;
    t5 = sp + 0;
    goto L_088B1EB0;
L_088B1EB0:;
    f3 = BITSF(LD32(t5));
    f2 = BITSF(0);
    v1 = t1 - 1;
    v0 = t0 - 1;
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    if (t1 == 0) v1 = v0;
    if (cnd_) { goto L_088B1FA0; }
    goto L_088B1ED0;
L_088B1ED0:;
    v0 = v1 << 2;
    v0 = v0 + sp;
    f3 = BITSF(LD32(v0));
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { t1 = t1 + 1; goto L_088B1F80; }
    goto L_088B1EEC;
L_088B1EEC:;
    v0 = v1 << 4;
    v0 = t4 + v0;
    {u32 a_=v0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=t3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=a3+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f0 = f4 / f1;
    f0 = f3 * f0;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_088B1F28; }
    goto L_088B1F28;
L_088B1F28:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f4; goto L_088B1F38; }
    goto L_088B1F38;
L_088B1F38:;
    v1 = FBITS(f0);
    {vr16=BITSF(v1);}
    {float s0=vr16;float s1=vr16;float s2=vr16;float s3=vr16;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr16;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    t6 = t6 + 1;
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+68);
    a0 = LD32(sp+72);
    a1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(a2+4, v1);
    ST32(a2, v0);
    ST32(a2+8, a0);
    ST32(a2+12, a1);
    goto L_088B1F78;
L_088B1F78:;
    a2 = a2 + 16;
    t1 = t1 + 1;
    goto L_088B1F80;
L_088B1F80:;
    v0 = t1 < t0;
    t5 = t5 + 4;
    cnd_ = v0 != 0;
    t3 = t3 + 16;
    if (cnd_) { goto L_088B1EB0; }
    goto L_088B1F90;
L_088B1F90:;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    goto L_088B1F98;
L_088B1F98:;
    v0 = t6 + 0;
    goto L_088B1E80;
L_088B1FA0:;
    v0 = v1 << 2;
    v0 = v0 + sp;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    t2 = t1 << 4;
    if (cnd_) { goto L_088B2050; }
    goto L_088B1FBC;
L_088B1FBC:;
    v1 = v1 << 4;
    v0 = t4 + t2;
    v1 = t4 + v1;
    {u32 a_=v0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=a3+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f0 = f4 / f1;
    f0 = f3 * f0;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_088B1FFC; }
    goto L_088B1FFC;
L_088B1FFC:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f4; goto L_088B200C; }
    goto L_088B200C;
L_088B200C:;
    v1 = FBITS(f0);
    {vr20=BITSF(v1);}
    {float s0=vr20;float s1=vr20;float s2=vr20;float s3=vr20;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr20;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    t6 = t6 + 1;
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+68);
    a0 = LD32(sp+72);
    a1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(a2+4, v1);
    ST32(a2, v0);
    ST32(a2+8, a0);
    ST32(a2+12, a1);
    a2 = a2 + 16;
    goto L_088B2050;
L_088B2050:;
    a0 = t2 + t4;
    v1 = LD32(a0);
    t6 = t6 + 1;
    ST32(a2, v1);
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    v1 = LD32(a0+8);
    ST32(a2+8, v1);
    v0 = LD32(a0+12);
    ST32(a2+12, v0);
    goto L_088B1F78;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[20]=vr20;
}

/* 088B207C */
u32 func_088B207C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088B207C:;
    {u32 a_=a2+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = BITSF(0);
    {u32 a_=a0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f4 = f0 + f12;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f4, f3, 12);
    sp = sp - 48;
    a3 = a0 + 0;
    f2 = f0 + f12;
    a2 = a1 + 0;
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_088B20C8; }
    goto L_088B20C4;
L_088B20C4:;
    v1 = 0 + 0;
    goto L_088B20C8;
L_088B20C8:;
    fcc = FCMP(f2, f3, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088B20DC; }
    goto L_088B20D8;
L_088B20D8:;
    v0 = 0 + 0;
    goto L_088B20DC;
L_088B20DC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088B219C; }
    goto L_088B20E4;
L_088B20E4:;
    cnd_ = v0 != 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088B2190; }
    goto L_088B20EC;
L_088B20EC:;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    v0 = D_08AEC588 - (-14968);
    f4 = BITSF(LD32(v0-14968));
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = f2 / f0;
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    if (cnd_) { goto L_088B211C; }
    goto L_088B2118;
L_088B2118:;
    f1 = f3;
    goto L_088B211C;
L_088B211C:;
    fcc = FCMP(f4, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f4; goto L_088B212C; }
    goto L_088B212C;
L_088B212C:;
    v1 = FBITS(f1);
    {vr16=BITSF(v1);}
    {float s0=vr16;float s1=vr16;float s2=vr16;float s3=vr16;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr16;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    t0 = 2;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v1 = LD32(sp+20);
    v0 = LD32(sp+16);
    a0 = LD32(sp+24);
    a1 = LD32(sp+28);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    ST32(a2+12, a1);
    v0 = LD32(a3+16);
    ST32(a2+16, v0);
    v1 = LD32(a3+20);
    ST32(a2+20, v1);
    v0 = LD32(a3+24);
    ST32(a2+24, v0);
    v1 = LD32(a3+28);
    ST32(a2+28, v1);
    goto L_088B2190;
L_088B2190:;
    v0 = t0 + 0;
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;return v0; }
L_088B219C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a3); goto L_088B2250; }
    goto L_088B21A4;
L_088B21A4:;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = D_08AEC588 - (-14968);
    f2 = BITSF(LD32(v0-14968));
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = f4 / f0;
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B21D4; }
    goto L_088B21D0;
L_088B21D0:;
    f1 = f3;
    goto L_088B21D4;
L_088B21D4:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f2; goto L_088B21E4; }
    goto L_088B21E4;
L_088B21E4:;
    v0 = LD32(a3);
    v1 = FBITS(f1);
    {vr16=BITSF(v1);}
    {float s0=vr16;float s1=vr16;float s2=vr16;float s3=vr16;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    ST32(a2, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr16;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    t0 = 2;
    v1 = LD32(a3+4);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(a2+4, v1);
    v0 = LD32(a3+8);
    ST32(a2+8, v0);
    v1 = LD32(a3+12);
    ST32(a2+12, v1);
    {u32 a_=a3+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(sp+20);
    a1 = LD32(sp+24);
    v1 = LD32(sp+28);
    v0 = LD32(sp+16);
    ST32(a2+20, a0);
    ST32(a2+16, v0);
    ST32(a2+28, v1);
    ST32(a2+24, a1);
    goto L_088B2190;
L_088B2250:;
    t0 = 2;
    ST32(a2, v1);
    v0 = LD32(a3+4);
    ST32(a2+4, v0);
    v1 = LD32(a3+8);
    ST32(a2+8, v1);
    v0 = LD32(a3+12);
    ST32(a2+12, v0);
    v1 = LD32(a3+16);
    ST32(a2+16, v1);
    v0 = LD32(a3+20);
    ST32(a2+20, v0);
    v1 = LD32(a3+24);
    ST32(a2+24, v1);
    v0 = LD32(a3+28);
    ST32(a2+28, v0);
    goto L_088B2190;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;
}

/* 088B2294 */
u32 func_088B2294(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_088B2294:;
    sp = sp - 336;
    v0 = a1 < 0x3u;
    v1 = a2 + 0;
    s4 = t0 + 0;
    t0 = 0 + 0;
    s3 = a1 + 0;
    a1 = a3 + 0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B2348; }
    goto L_088B22DC;
L_088B22DC:;
    v0 = a3 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088B234C; }
    goto L_088B22E8;
L_088B22E8:;
    {u32 a_=a0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr12=d0;vr13=d1;vr14=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    if (cnd_) { goto L_088B232C; }
    goto L_088B231C;
L_088B231C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B232C;
L_088B232C:;
    {v0=FBITS(vr8);}
    f1 = BITSF(0);
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    t0 = 0 + 0;
    if (cnd_) { goto L_088B2378; }
    goto L_088B2348;
L_088B2348:;
    goto L_088B234C;
L_088B234C:;
    v0 = t0 + 0;
    sp = sp + 336;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;return v0; }
L_088B2378:;
    a2 = a1 << 4;
    s0 = a1 + 0;
    a0 = s4 + 0;
    a1 = v1 + 0;
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = func_088F86E4(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B238C;
L_088B238C:;
    {u32 a_=s1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=s1+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = D_08AEC58C - (-14964);
    f0 = BITSF(LD32(v0-14964));
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=vr13;float t2=vr14;float t3=v[15];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = s3 - 1;
    s5 = 0 + 0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    cnd_ = s3 == 0;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088B256C; }
    goto L_088B23E4;
L_088B23E4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;vr11=(float)1;}
    s6 = sp + 224;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    s2 = s1 + 0;
    v0 = v0 << 4;
    goto L_088B23F8;
L_088B23F8:;
    v0 = v0 + s1;
    a3 = LD32(v0+12);
    a0 = LD32(v0+4);
    a2 = LD32(v0+8);
    t0 = LD32(s2);
    v1 = LD32(v0);
    t1 = LD32(s2+8);
    v0 = LD32(s2+4);
    t2 = LD32(s2+12);
    ST32(sp+212, a0);
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    s7 = sp + 48;
    ST32(sp+216, a2);
    f2 = BITSF(0);
    a1 = s0 + 0;
    ST32(sp+220, a3);
    a0 = s4 + 0;
    a2 = s7 + 0;
    ST32(sp+16, t0);
    a3 = s6 + 0;
    s2 = s2 + 16;
    ST32(sp+208, v1);
    t0 = 0 + 0;
    ST32(sp+20, v0);
    {u32 a_=sp+(208);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr12=d0;vr13=d1;vr14=d2;}
    ST32(sp+24, t1);
    ST32(sp+28, t2);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {float s0=vr4;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr0;float t0=vr0;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088B24A0; }
    goto L_088B248C;
L_088B248C:;
    {u32 a_=sp+(272);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {u32 a_=s6+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s6+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B24A0;
L_088B24A0:;
    {u32 a_=sp+(224);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f12 = BITSF(v0);
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    f0 = f1 + f12;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;v[16]=d0;v[17]=d1;v[18]=d2;}
    if (cnd_) { goto L_088B2524; }
    goto L_088B24D8;
L_088B24D8:;
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    v0 = LD32(sp+240);
    v1 = LD32(sp+244);
    f12 = BITSF(FBITS(f12) ^ 0x80000000u);
    ST32(sp+224, v0);
    ST32(sp+228, v1);
    v0 = LD32(sp+248);
    v1 = LD32(sp+252);
    ST32(sp+232, v0);
    ST32(sp+236, v1);
    {u32 a_=sp+(224);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f0 = f1 + f12;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B234C; }
    goto L_088B2524;
L_088B2524:;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = func_088B1E08(a0, a1, a2, a3, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; });
    goto L_088B252C;
L_088B252C:;
    s0 = v0 + 0;
    a2 = v0 << 4;
    v0 = v0 < 0x9u;
    a1 = s7 + 0;
    a0 = s4 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088B2348; }
    goto L_088B2548;
L_088B2548:;
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = func_088F86E4(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B2550;
L_088B2550:;
    v0 = s5 + 0;
    s5 = s5 + 1;
    v1 = s5 < s3;
    cnd_ = s0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088B2348; }
    goto L_088B2564;
L_088B2564:;
    cnd_ = v1 != 0;
    v0 = v0 << 4;
    if (cnd_) { goto L_088B23F8; }
    goto L_088B256C;
L_088B256C:;
    t0 = s0 + 0;
    goto L_088B2348;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 088B2574 */
u32 func_088B2574(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12];
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 208);
L_088B2574:;
    sp = sp - 208;
    v0 = a1 < 0x3u;
    t0 = 0 + 0;
    s4 = a3 + 0;
    s3 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B25E8; }
    goto L_088B25B8;
L_088B25B8:;
    goto L_088B25BC;
L_088B25BC:;
    v0 = t0 + 0;
    sp = sp + 208;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;return v0; }
L_088B25E8:;
    {u32 a_=a0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;vr11=(float)1;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(128);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = a3 + 0;
    a2 = 32;
    s2 = 2;
    s5 = 0 + 0;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr12;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;__auto_type vr_t_ = func_088F86E4(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B263C;
L_088B263C:;
    {u32 a_=s1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=s1+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = D_08AEC590 - (-14960);
    f0 = BITSF(LD32(v0-14960));
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(144);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {vr12=BITSF(v0);}
    {float s0=vr12;float s1=vr12;float s2=vr12;float s3=vr12;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    v1 = s3 - 1;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=v[13];float t2=v[14];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr4=d0;vr5=d1;vr6=d2;}
    cnd_ = s3 == 0;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B27FC; }
    goto L_088B268C;
L_088B268C:;
    s6 = sp + 96;
    s0 = s1 + 0;
    v0 = v1 << 4;
    goto L_088B2698;
L_088B2698:;
    v0 = v0 + s1;
    t0 = LD32(v0+12);
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a3 = LD32(s0);
    v0 = LD32(s0+4);
    t1 = LD32(s0+8);
    t2 = LD32(s0+12);
    ST32(sp+84, a0);
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    s7 = sp + 48;
    ST32(sp+88, a1);
    f2 = BITSF(0);
    a0 = s4 + 0;
    ST32(sp+92, t0);
    a1 = s7 + 0;
    a2 = s6 + 0;
    ST32(sp+80, v1);
    s0 = s0 + 16;
    t0 = 0 + 0;
    ST32(sp+16, a3);
    {u32 a_=sp+(80);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr12=d0;v[13]=d1;v[14]=d2;}
    ST32(sp+20, v0);
    ST32(sp+24, t1);
    ST32(sp+28, t2);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {float s0=vr4;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr0;float t0=vr0;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088B273C; }
    goto L_088B2728;
L_088B2728:;
    {u32 a_=sp+(128);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {u32 a_=s6+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s6+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B273C;
L_088B273C:;
    {u32 a_=sp+(96);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=v[13];float s2=v[14];float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f12 = BITSF(v0);
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    f0 = f1 + f12;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;v[16]=d0;v[17]=d1;v[18]=d2;}
    if (cnd_) { goto L_088B27C0; }
    goto L_088B2774;
L_088B2774:;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    f12 = BITSF(FBITS(f12) ^ 0x80000000u);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    v0 = LD32(sp+120);
    v1 = LD32(sp+124);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    {u32 a_=sp+(96);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f0 = f1 + f12;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B25BC; }
    goto L_088B27C0;
L_088B27C0:;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;__auto_type vr_t_ = func_088B207C(a0, a1, a2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr_t_; });
    goto L_088B27C8;
L_088B27C8:;
    s2 = v0 + 0;
    a2 = v0 << 4;
    a1 = s7 + 0;
    a0 = s4 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088B25B8; }
    goto L_088B27E0;
L_088B27E0:;
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;__auto_type vr_t_ = func_088F86E4(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B27E8;
L_088B27E8:;
    v1 = s5 + 0;
    s5 = s5 + 1;
    v0 = s5 < s3;
    cnd_ = v0 != 0;
    v0 = v1 << 4;
    if (cnd_) { goto L_088B2698; }
    goto L_088B27FC;
L_088B27FC:;
    t0 = s2 + 0;
    goto L_088B25B8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;
}

/* 088B2804 */
void func_088B2804(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088B2804:;
    {u32 a_=a1+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[12];float t1=v[13];float t2=v[14];float t3=v[15];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f1 = BITSF(0);
    {u32 a_=a0+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[12];float t1=v[13];float t2=v[14];float t3=v[15];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    sp = sp - 64;
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f4 = f1;
    f3 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    cnd_ = !fcc;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088B28C8; }
    goto L_088B2848;
L_088B2848:;
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AEC594 - (-14956);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f0 = f0 / f3;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(v0-14956));
    if (cnd_) { goto L_088B2880; }
    goto L_088B286C;
L_088B286C:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f4 = f2;
    if (cnd_) { goto L_088B2880; }
    goto L_088B287C;
L_088B287C:;
    f4 = f0;
    goto L_088B2880;
L_088B2880:;
    v0 = FBITS(f4);
    {v[16]=BITSF(v0);}
    {float s0=v[16];float s1=v[16];float s2=v[16];float s3=v[16];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[16];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(sp+36);
    a1 = LD32(sp+40);
    v1 = LD32(sp+44);
    v0 = LD32(sp+32);
    ST32(a2+4, a0);
    ST32(a2, v0);
    ST32(a2+12, v1);
    ST32(a2+8, a1);
    goto L_088B28C0;
L_088B28C0:;
    sp = sp + 64;
    return;
L_088B28C8:;
    v0 = LD32(a1);
    ST32(a2, v0);
    v1 = LD32(a1+4);
    ST32(a2+4, v1);
    v0 = LD32(a1+8);
    ST32(a2+8, v0);
    v1 = LD32(a1+12);
    ST32(a2+12, v1);
    goto L_088B28C0;
}

/* 088B28EC */
void func_088B28EC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_088B28EC:;
    sp = sp - 160;
    v0 = D_08AEC598 - (-14952);
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    a2 = sp + 104;
    {u32 a_=a0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=v[15];float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    f0 = BITSF(LD32(v0-14952));
    a0 = sp + 96;
    a1 = sp + 100;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[16]=d0;v[17]=d1;v[18]=d2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+104, FBITS(f0));
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    ST32(sp+100, 0);
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {v0=FBITS(vr4);}
    f2 = BITSF(v0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    f0 = f2 / f1;
    ST32(sp+96, FBITS(f0));
    f0 = func_088B64AC(a0, a1, a2);
    goto L_088B298C;
L_088B298C:;
    v0 = FBITS(f0);
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(112);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+96, FBITS(f0));
    a0 = s0 + 0;
    a1 = s2 + 0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a2 = s3 + 0;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v1 = LD32(sp+68);
    a3 = LD32(sp+72);
    t0 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(s0+4, v1);
    ST32(s0, v0);
    ST32(s0+8, a3);
    ST32(s0+12, t0);
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_088B2804(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_088B29F4;
L_088B29F4:;
    sp = sp + 160;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 088B2A10 */
void func_088B2A10(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088B2A10:;
    {u32 a_=a1+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a1+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    sp = sp - 48;
    {u32 a_=a0+(0);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr12=d0;vr13=d1;vr14=d2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr4;float t0=vr0;float d0=s0/t0;v[8]=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=v[8];vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr16=sum;}
    {v0=FBITS(vr16);}
    {vr24=BITSF(v0);}
    {float s0=vr24;float s1=vr24;float s2=vr24;float s3=vr24;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr24;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    a0 = LD32(sp+36);
    a1 = LD32(sp+40);
    v1 = LD32(sp+44);
    v0 = LD32(sp+32);
    ST32(a2+4, a0);
    ST32(a2, v0);
    ST32(a2+12, v1);
    ST32(a2+8, a1);
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;
}

/* 088B2A9C */
u32 func_088B2A9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B2A9C:;
    sp = sp - 32;
    s3 = a1 + 0;
    a1 = t0 + 0;
    s2 = a2 + 0;
    a2 = a0 + 0;
    a0 = s3 + 0;
    s4 = a3 + 0;
    a3 = s2 + 0;
    v0 = func_088B2574(a0, a1, a2, a3);
    goto L_088B2AD8;
L_088B2AD8:;
    s1 = v0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088B2AF4; }
    goto L_088B2AE8;
L_088B2AE8:;
    cnd_ = s1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088B2B18; }
    goto L_088B2AF0;
L_088B2AF0:;
    v1 = s1 + 0;
    goto L_088B2AF4;
L_088B2AF4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088B2B18:;
    a0 = s0 << 4;
    goto L_088B2B1C;
L_088B2B1C:;
    a2 = s4 + a0;
    a1 = s3 + 0;
    a0 = s2 + a0;
    s0 = s0 + 1;
    func_088B2A10(a0, a1, a2);
    goto L_088B2B30;
L_088B2B30:;
    v0 = s0 < s1;
    cnd_ = v0 != 0;
    a0 = s0 << 4;
    if (cnd_) { goto L_088B2B1C; }
    goto L_088B2B3C;
L_088B2B3C:;
    v1 = s1 + 0;
    goto L_088B2AF4;
}

/* 088B2B44 */
u32 func_088B2B44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B2B44:;
    sp = sp - 32;
    v0 = a1 + 0;
    s3 = a3 + 0;
    a1 = t0 + 0;
    a3 = t1 + 0;
    s4 = a2 + 0;
    t0 = s3 + 0;
    a2 = v0 + 0;
    s2 = a0 + 0;
    v0 = func_088B2294(a0, a1, a2, a3, t0);
    goto L_088B2B84;
L_088B2B84:;
    s1 = v0 + 0;
    v0 = v0 < 0x3u;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088B2BA0; }
    goto L_088B2B94;
L_088B2B94:;
    cnd_ = s1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088B2BC4; }
    goto L_088B2B9C;
L_088B2B9C:;
    v1 = s1 + 0;
    goto L_088B2BA0;
L_088B2BA0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088B2BC4:;
    a0 = s0 << 4;
    goto L_088B2BC8;
L_088B2BC8:;
    a2 = s4 + a0;
    a1 = s2 + 0;
    a0 = s3 + a0;
    s0 = s0 + 1;
    func_088B2A10(a0, a1, a2);
    goto L_088B2BDC;
L_088B2BDC:;
    v0 = s0 < s1;
    cnd_ = v0 != 0;
    a0 = s0 << 4;
    if (cnd_) { goto L_088B2BC8; }
    goto L_088B2BE8;
L_088B2BE8:;
    v1 = s1 + 0;
    goto L_088B2BA0;
}

/* 088B2BF0 */
u32 func_088B2BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088B2BF0:;
    sp = sp - 176;
    s4 = a1 + 0;
    a1 = sp + 0;
    s3 = a0 + 0;
    a0 = a2 + 0;
    a2 = t0 + 0;
    s1 = t0 + 0;
    s0 = a3 + 0;
    v0 = func_088C3A9C(a0, a1, a2);
    goto L_088B2C2C;
L_088B2C2C:;
    {u32 a_=s1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    s1 = sp + 64;
    a2 = sp + 128;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s2 = v0 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = func_088C3A9C(a0, a1, a2);
    goto L_088B2C50;
L_088B2C50:;
    a3 = 2;
    cnd_ = s2 == a3;
    a2 = v0 + 0;
    if (cnd_) { goto L_088B2DD4; }
    goto L_088B2C5C;
L_088B2C5C:;
    v0 = s2 < 0x3u;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_088B2D38; }
    goto L_088B2C68;
L_088B2C68:;
    v0 = 1;
    cnd_ = s2 == v0;
    a0 = LD32(sp+4);
    if (cnd_) { goto L_088B2C9C; }
    goto L_088B2C74;
L_088B2C74:;
    a2 = 0 + 0;
    goto L_088B2C78;
L_088B2C78:;
    v0 = a2 + 0;
    sp = sp + 176;
    return v0;
L_088B2C9C:;
    a1 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(s3+4, a0);
    ST32(s3, v0);
    ST32(s3+12, v1);
    cnd_ = a2 == a3;
    ST32(s3+8, a1);
    if (cnd_) { goto L_088B2D1C; }
    goto L_088B2CBC;
L_088B2CBC:;
    v0 = a2 < 0x3u;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_088B2CF8; }
    goto L_088B2CC8;
L_088B2CC8:;
    cnd_ = a2 != s2;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2CD0;
L_088B2CD0:;
    a0 = LD32(sp+68);
    a1 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    a2 = 1;
    ST32(s4+12, v1);
    ST32(s4, v0);
    ST32(s4+4, a0);
    ST32(s4+8, a1);
    goto L_088B2C78;
L_088B2CF8:;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2D00;
L_088B2D00:;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a0 = sp + 0;
    goto L_088B2D0C;
L_088B2D0C:;
    func_088B2A10(a0, a1, a2);
    goto L_088B2D14;
L_088B2D14:;
    a2 = 1;
    goto L_088B2C78;
L_088B2D1C:;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a0 = sp + 0;
    goto L_088B2D28;
L_088B2D28:;
    func_088B2804(a0, a1, a2);
    goto L_088B2D30;
L_088B2D30:;
    a2 = 1;
    goto L_088B2C78;
L_088B2D38:;
    cnd_ = s2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2D40;
L_088B2D40:;
    cnd_ = a2 == a3;
    v0 = a2 < 0x3u;
    if (cnd_) { goto L_088B2DB4; }
    goto L_088B2D48;
L_088B2D48:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088B2D88; }
    goto L_088B2D50;
L_088B2D50:;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2D58;
L_088B2D58:;
    a3 = LD32(sp+68);
    t0 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(s4+4, a3);
    a0 = s1 + 0;
    a2 = s3 + 0;
    ST32(s4, v0);
    a1 = sp + 0;
    ST32(s4+12, v1);
    ST32(s4+8, t0);
    goto L_088B2D0C;
L_088B2D88:;
    cnd_ = a2 != s2;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2D90;
L_088B2D90:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    a0 = sp + 0;
    t0 = 4;
    t1 = 4;
    v0 = func_088B2B44(a0, a1, a2, a3, t0, t1);
    goto L_088B2DAC;
L_088B2DAC:;
    a2 = v0 + 0;
    goto L_088B2C78;
L_088B2DB4:;
    a0 = s1 + 0;
    a2 = s4 + 0;
    a3 = s3 + 0;
    a1 = sp + 0;
    goto L_088B2DC4;
L_088B2DC4:;
    t0 = 4;
    v0 = func_088B2A9C(a0, a1, a2, a3, t0);
    goto L_088B2DCC;
L_088B2DCC:;
    a2 = v0 + 0;
    goto L_088B2C78;
L_088B2DD4:;
    cnd_ = v0 == s2;
    v0 = v0 < 0x3u;
    if (cnd_) { goto L_088B2E3C; }
    goto L_088B2DDC;
L_088B2DDC:;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_088B2E20; }
    goto L_088B2DE4;
L_088B2DE4:;
    v0 = 1;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2DF0;
L_088B2DF0:;
    a3 = LD32(sp+68);
    t0 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(s4+4, a3);
    a0 = s1 + 0;
    a2 = s3 + 0;
    ST32(s4, v0);
    a1 = sp + 0;
    ST32(s4+12, v1);
    ST32(s4+8, t0);
    goto L_088B2D28;
L_088B2E20:;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B2C78; }
    goto L_088B2E28;
L_088B2E28:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    a0 = sp + 0;
    goto L_088B2DC4;
L_088B2E3C:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    a0 = sp + 0;
    func_088B28EC(a0, a1, a2, a3);
    goto L_088B2E50;
L_088B2E50:;
    a2 = 1;
    goto L_088B2C78;
}

/* 088B2E58 */
u32 func_088B2E58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088B2E58:;
    sp = sp - 128;
    v1 = a0 + 16;
    v0 = a0 + 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s4 = a2 + 0;
    a2 = v1 + 0;
    s3 = t0 + 0;
    t0 = sp + 0;
    s2 = a3 + 0;
    a3 = v0 + 0;
    s0 = a1 + 0;
    a1 = s1 + 0;
    f20 = f12;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;func_088B616C(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];});
    goto L_088B2EB0;
L_088B2EB0:;
    {u32 a_=s0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    f2 = f20 * f20;
    a2 = 0 + 0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    a0 = LD32(sp+24);
    a1 = LD32(sp+28);
    ST32(s2, v0);
    ST32(s2+4, v1);
    ST32(s2+8, a0);
    ST32(s2+12, a1);
    {u32 a_=s2+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B2FCC; }
    goto L_088B2F08;
L_088B2F08:;
    {u32 a_=s1+(0);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr12;float t1=v[13];float t2=v[14];float t3=v[15];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=v[13];float t2=v[14];float t3=v[15];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    f0 = BITSF(0);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+32);
    v1 = LD32(sp+40);
    ST32(sp+16, v0);
    v0 = LD32(sp+36);
    ST32(sp+24, v1);
    ST32(sp+20, v0);
    v0 = LD32(sp+44);
    ST32(sp+28, v0);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_088B2FD0; }
    goto L_088B2F70;
L_088B2F70:;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    ST32(s3, v0);
    a2 = 1;
    ST32(s3+4, v1);
    ST32(s3+8, a0);
    ST32(s3+12, a1);
    {u32 a_=s2+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    {float s0=vr0;float t0=vr0;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    f2 = f20 - f0;
    if (cnd_) { goto L_088B2FC4; }
    goto L_088B2FB4;
L_088B2FB4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr0;float d0=s0/t0;vr12=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr12;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s2+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B2FC4;
L_088B2FC4:;
    ST32(s4, FBITS(f2));
    goto L_088B2FCC;
L_088B2FCC:;
    goto L_088B2FD0;
L_088B2FD0:;
    v0 = a2 + 0;
    sp = sp + 128;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;return v0; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;
}

/* 088B2FF0 */
u32 func_088B2FF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22];
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 400);
L_088B2FF0:;
    sp = sp - 400;
    t8 = a1 + 32;
    t9 = a0 + 32;
    s7 = a0 + 0;
    fp = sp + 0;
    s6 = a1 + 0;
    s5 = 0 + 0;
    v0 = LD32(a0+32);
    v1 = LD32(a1+32);
    s2 = LD32(t9+4);
    ST32(sp+316, v0);
    ST32(sp+320, v1);
    v0 = LD32(t8+4);
    v1 = LD32(t8+8);
    s3 = LD32(t9+8);
    s4 = LD32(t9+12);
    ST32(sp+324, v0);
    ST32(sp+328, v1);
    v0 = LD32(t8+12);
    v1 = LD32(sp+316);
    ST32(sp+244, s2);
    ST32(sp+240, v1);
    ST32(sp+332, v0);
    ST32(sp+248, s3);
    v0 = LD32(sp+320);
    ST32(sp+252, s4);
    v1 = LD32(sp+324);
    ST32(sp+304, a2);
    a2 = 15;
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+308, a3);
    ST32(sp+312, t0);
    ST32(sp+336, a2);
    ST32(sp+256, v0);
    ST32(sp+260, v1);
    a2 = LD32(sp+328);
    v0 = LD32(sp+332);
    v1 = LD32(sp+316);
    ST32(sp+264, a2);
    ST32(sp+268, v0);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    t6 = LD32(t8+16);
    t7 = LD32(t8+20);
    s0 = LD32(t8+24);
    s1 = LD32(t8+28);
    ST32(sp+256, v1);
    ST32(sp+260, s2);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+264, s3);
    ST32(sp+268, s4);
    ST32(sp+240, t6);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+244, t7);
    ST32(sp+248, s0);
    ST32(sp+252, s1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    t5 = LD32(t8+44);
    t2 = LD32(t8+32);
    t3 = LD32(t8+36);
    t4 = LD32(t8+40);
    ST32(sp+256, v1);
    ST32(sp+260, s2);
    ST32(sp+264, s3);
    ST32(sp+268, s4);
    ST32(sp+240, t2);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, t3);
    ST32(sp+248, t4);
    ST32(sp+252, t5);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    v0 = LD32(sp+320);
    v1 = LD32(sp+324);
    a2 = LD32(t9+16);
    t0 = LD32(t9+24);
    t1 = LD32(t9+28);
    a3 = LD32(t9+20);
    ST32(sp+240, v0);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+244, v1);
    v0 = LD32(sp+328);
    v1 = LD32(sp+332);
    ST32(sp+256, a2);
    ST32(sp+248, v0);
    ST32(sp+252, v1);
    ST32(sp+260, a3);
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+264, t0);
    ST32(sp+268, t1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    ST32(sp+256, a2);
    ST32(sp+260, a3);
    ST32(sp+264, t0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+268, t1);
    ST32(sp+240, t6);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, t7);
    ST32(sp+248, s0);
    ST32(sp+252, s1);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+256, a2);
    ST32(sp+260, a3);
    ST32(sp+264, t0);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+268, t1);
    ST32(sp+240, t2);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, t3);
    ST32(sp+248, t4);
    ST32(sp+252, t5);
    v0 = LD32(t9+32);
    v1 = LD32(t9+36);
    a1 = LD32(t9+44);
    a0 = LD32(t9+40);
    ST32(sp+256, v0);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+176, v0);
    v0 = LD32(sp+320);
    ST32(sp+260, v1);
    ST32(sp+240, v0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+324);
    ST32(sp+264, a0);
    ST32(sp+244, v0);
    v0 = LD32(sp+328);
    ST32(sp+268, a1);
    ST32(sp+248, v0);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+332);
    ST32(sp+260, v1);
    ST32(sp+252, v0);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    v0 = LD32(sp+176);
    ST32(sp+256, v0);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+264, a0);
    ST32(sp+268, a1);
    ST32(sp+240, t6);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+244, t7);
    ST32(sp+248, s0);
    ST32(sp+252, s1);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+256, v0);
    ST32(sp+260, v1);
    ST32(sp+264, a0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+268, a1);
    ST32(sp+240, t2);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+244, t3);
    ST32(sp+248, t4);
    ST32(sp+252, t5);
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    ST32(sp+160, a2);
    ST32(sp+180, v1);
    a2 = LD32(sp+320);
    v1 = LD32(sp+316);
    ST32(sp+148, s2);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+144, v1);
    ST32(sp+192, a2);
    ST32(sp+152, s3);
    ST32(sp+156, s4);
    ST32(sp+164, a3);
    ST32(sp+168, t0);
    ST32(sp+172, t1);
    ST32(sp+184, a0);
    ST32(sp+188, a1);
    v0 = LD32(sp+324);
    {u32 a_=s6+(16);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s7+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    ST32(sp+196, v0);
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=v[23];float t0=vr16;float t1=vr17;float t2=vr18;float t3=v[19];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    v0 = D_08AEC5A4 - (-14940);
    v1 = LD32(sp+328);
    a2 = LD32(sp+332);
    f10 = BITSF(LD32(v0-14940));
    ST32(sp+200, v1);
    v0 = D_08AEC5A8 - (-14936);
    v1 = D_08AEC5B0 - (-14928);
    ST32(sp+204, a2);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+208, t6);
    ST32(sp+212, t7);
    ST32(sp+216, s0);
    ST32(sp+220, s1);
    ST32(sp+224, t2);
    ST32(sp+228, t3);
    ST32(sp+232, t4);
    ST32(sp+236, t5);
    f11 = BITSF(LD32(v1-14928));
    f9 = BITSF(LD32(v0-14936));
    goto L_088B3340;
L_088B3340:;
    v1 = D_08AEC5AC - (-14932);
    {u32 a_=fp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(v1-14932));
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a2=FBITS(vr0);}
    f0 = BITSF(a2);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B3468; }
    goto L_088B3368;
L_088B3368:;
    s5 = s5 + 1;
    goto L_088B336C;
L_088B336C:;
    v0 = s5 < 0xfu;
    cnd_ = v0 != 0;
    fp = fp + 16;
    if (cnd_) { goto L_088B3340; }
    goto L_088B3378;
L_088B3378:;
    v1 = LD32(sp+336);
    v0 = v1 < 0xfu;
    cnd_ = v0 != 0;
    v0 = LD32(sp+308);
    if (cnd_) { goto L_088B3414; }
    goto L_088B3388;
L_088B3388:;
    a2 = LD32(sp+308);
    v0 = LD32(sp+304);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;vr11=(float)1;}
    ST32(a2, 0);
    a3 = 1;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    a2 = LD32(sp+312);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+292);
    a0 = LD32(sp+296);
    a1 = LD32(sp+300);
    v0 = LD32(sp+288);
    ST32(a2+4, v1);
    ST32(a2, v0);
    ST32(a2+8, a0);
    ST32(a2+12, a1);
    {u32 a_=a2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr8;float t0=vr0;float d0=s0/t0;vr12=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr12;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=a2+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088B33E4;
L_088B33E4:;
    goto L_088B33E8;
L_088B33E8:;
    v0 = a3 + 0;
    sp = sp + 400;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;return v0; }
L_088B3414:;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f10, f0, 12);
    cnd_ = !fcc;
    a3 = 0 + 0;
    if (cnd_) { goto L_088B33E4; }
    goto L_088B3428;
L_088B3428:;
    v1 = LD32(sp+336);
    a3 = 1;
    v0 = v1 << 4;
    v0 = v0 + sp;
    a0 = LD32(v0);
    v1 = LD32(v0+12);
    a1 = LD32(v0+4);
    a2 = LD32(v0+8);
    v0 = LD32(sp+308);
    ST32(v0, FBITS(f10));
    v0 = LD32(sp+312);
    ST32(v0+12, v1);
    ST32(v0, a0);
    ST32(v0+4, a1);
    ST32(v0+8, a2);
    goto L_088B33E4;
L_088B3468:;
    f7 = BITSF(0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f7, f0, 12);
    cnd_ = !fcc;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    if (cnd_) { goto L_088B34B8; }
    goto L_088B3488;
L_088B3488:;
    {float s0=vr12;float s1=vr13;float s2=vr14;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+240);
    ST32(fp, v0);
    v1 = LD32(sp+244);
    ST32(fp+4, v1);
    v0 = LD32(sp+248);
    ST32(fp+8, v0);
    v1 = LD32(sp+252);
    ST32(fp+12, v1);
    {u32 a_=fp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    goto L_088B34B8;
L_088B34B8:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    v1 = LD32(t9+8);
    f0 = BITSF(LD32(s7));
    f1 = BITSF(LD32(s7+4));
    f2 = BITSF(LD32(s7+8));
    v0 = LD32(t9+4);
    {float s0=vr8;float d0=sqrtf(s0);vr8=d0;}
    a0 = LD32(t9+12);
    a1 = LD32(t9+16);
    a2 = LD32(t9+20);
    a3 = LD32(t9+24);
    t0 = LD32(t9+28);
    t1 = LD32(t9+32);
    {float s0=vr0;float t0=vr8;float d0=s0/t0;vr4=d0;}
    t2 = LD32(t9+36);
    t3 = LD32(t9+40);
    t4 = LD32(t9+44);
    f8 = f7;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=fp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+248, v1);
    v1 = LD32(sp+316);
    ST32(sp+244, v0);
    ST32(sp+252, a0);
    ST32(sp+240, v1);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+272, a1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    ST32(sp+276, a2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f4 = BITSF(v0);
    ST32(sp+280, a3);
    f4 = f4 * f0;
    ST32(sp+284, t0);
    a2 = LD32(sp+320);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+288, t1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    ST32(sp+292, t2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(sp+296, t3);
    f0 = f0 * f1;
    ST32(sp+300, t4);
    {u32 a_=fp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+288, a2);
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    v0 = LD32(t8+4);
    a0 = LD32(t8+8);
    a1 = LD32(t8+12);
    ST32(sp+292, v0);
    v1 = (v1 >> 0) & 0x7fffffff;
    f4 = f4 + f0;
    ST32(sp+296, a0);
    f0 = BITSF(v1);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    ST32(sp+300, a1);
    {v0=FBITS(vr4);}
    f5 = BITSF(v0);
    v1 = LD32(t8+20);
    v0 = LD32(t8+16);
    a0 = LD32(t8+24);
    a1 = LD32(t8+28);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+272, v0);
    {u32 a_=sp+(288);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+276, v1);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+280, a0);
    f0 = f0 * f2;
    f3 = BITSF(v0);
    v1 = LD32(sp+304);
    f4 = f4 + f0;
    {u32 a_=v1+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+284, a1);
    v0 = LD32(t8+32);
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(s6));
    f2 = BITSF(LD32(s6+4));
    v1 = LD32(t8+36);
    a0 = LD32(t8+40);
    a1 = LD32(t8+44);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+240, v0);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(sp+244, v1);
    f3 = f3 * f1;
    f0 = f0 * f2;
    ST32(sp+248, a0);
    ST32(sp+252, a1);
    f3 = f3 + f0;
    {u32 a_=fp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f6 = BITSF(LD32(s6+8));
    f2 = BITSF(v0);
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a2=FBITS(vr0);}
    f0 = BITSF(a2);
    f2 = f2 * f6;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    f5 = f5 - f0;
    {v0=FBITS(vr8);}
    f6 = BITSF(v0);
    f3 = f3 + f2;
    f0 = f5 + f4;
    fcc = FCMP(f7, f6, 14);
    f5 = f5 - f4;
    f1 = f0 + f3;
    cnd_ = fcc;
    f2 = f5 - f3;
    if (cnd_) { goto L_088B36AC; }
    goto L_088B36A8;
L_088B36A8:;
    f8 = BITSF(v0);
    goto L_088B36AC;
L_088B36AC:;
    fcc = FCMP(f6, f7, 14);
    cnd_ = fcc;
    f3 = f7;
    if (cnd_) { goto L_088B36C0; }
    goto L_088B36BC;
L_088B36BC:;
    f3 = f6;
    goto L_088B36C0;
L_088B36C0:;
    f0 = f2 + f8;
    fcc = FCMP(f7, f0, 12);
    cnd_ = fcc;
    f0 = f1 + f3;
    if (cnd_) { goto L_088B377C; }
    goto L_088B36D4;
L_088B36D4:;
    fcc = FCMP(f0, f7, 12);
    cnd_ = fcc;
    v0 = (v0 >> 0) & 0x7fffffff;
    if (cnd_) { goto L_088B377C; }
    goto L_088B36E4;
L_088B36E4:;
    f0 = BITSF(v0);
    fcc = FCMP(f11, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s5 = s5 + 1; goto L_088B336C; }
    goto L_088B36F8;
L_088B36F8:;
    v0 = D_08AEC5A8 - (-14936);
    f0 = BITSF(LD32(v0-14936));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = f0 / f6;
    f1 = f1 * f0;
    f0 = f2 * f0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f2 = f1;
    if (cnd_) { goto L_088B3728; }
    goto L_088B3724;
L_088B3724:;
    f2 = f0;
    goto L_088B3728;
L_088B3728:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088B3738; }
    goto L_088B3738;
L_088B3738:;
    fcc = FCMP(f10, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B3750; }
    goto L_088B3748;
L_088B3748:;
    ST32(sp+336, s5);
    f10 = f2;
    goto L_088B3750;
L_088B3750:;
    fcc = FCMP(f9, f1, 14);
    cnd_ = fcc;
    f2 = f9;
    if (cnd_) { goto L_088B3764; }
    goto L_088B3760;
L_088B3760:;
    f2 = f1;
    goto L_088B3764;
L_088B3764:;
    fcc = FCMP(f2, f10, 12);
    f9 = f2;
    cnd_ = !fcc;
    a3 = 0 + 0;
    if (cnd_) { goto L_088B3368; }
    goto L_088B3774;
L_088B3774:;
    goto L_088B33E8;
L_088B377C:;
    a3 = 0 + 0;
    goto L_088B33E4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;
}

/* 088B3784 */
float func_088B3784(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, float f12)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43], vr44 = v[44];
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 416);
L_088B3784:;
    sp = sp - 416;
    ST8(t1, 0);
    t2 = t2 & 0xff;
    t9 = a0 + 0;
    t5 = a1 + 0;
    s7 = t1 + 0;
    s5 = t0 + 0;
    s2 = a3 + 0;
    {u32 a_=a2+(0);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=a2+(32);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+8, v0);
    cnd_ = t2 == 0;
    ST32(sp+12, v1);
    if (cnd_) { goto L_088B3838; }
    goto L_088B3810;
L_088B3810:;
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = D_08AEC5B4 - (-14924);
    if (cnd_) { goto L_088B3B7C; }
    goto L_088B3838;
L_088B3838:;
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float t0=vr36;float t1=vr37;float t2=vr38;float t3=vr39;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr40;float t1=vr41;float t2=vr42;float t3=vr43;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    s1 = LD32(t9+32);
    t7 = t9 + 32;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    a0 = LD32(sp+104);
    a1 = LD32(sp+108);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a2 = LD32(sp+96);
    a3 = LD32(sp+100);
    t0 = LD32(sp+104);
    t1 = LD32(sp+108);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    t2 = LD32(t7+4);
    t3 = LD32(t7+8);
    t4 = LD32(t7+12);
    ST32(sp+16, v0);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr36;float t1=vr37;float t2=vr38;float t3=vr39;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    f9 = BITSF(0);
    v0 = LD32(sp+96);
    ST32(sp+20, v1);
    s6 = 13;
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float t0=vr40;float t1=vr41;float t2=vr42;float t3=vr43;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr28=d0;vr29=d1;vr30=d2;v[31]=d3;}
    v1 = LD32(sp+100);
    ST32(sp+48, v0);
    t8 = 0 + 0;
    s4 = sp + 112;
    v0 = LD32(sp+104);
    ST32(sp+52, v1);
    s3 = D_08AEC5C0 - (-14912);
    fp = D_08AEC5B4 - (-14924);
    v1 = LD32(sp+108);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    ST32(sp+32, a2);
    ST32(sp+36, a3);
    ST32(sp+40, t0);
    ST32(sp+44, t1);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    ST32(sp+100, t2);
    ST32(sp+96, s1);
    ST32(sp+104, t3);
    {u32 a_=sp+(32);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+108, t4);
    {u32 a_=sp+(48);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    t0 = LD32(t7+20);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr20;float t1=vr21;float t2=vr22;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a3 = LD32(t7+24);
    v0 = LD32(t7+16);
    t1 = LD32(t7+28);
    ST32(sp+100, t0);
    ST32(sp+96, v0);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+104, a3);
    ST32(sp+108, t1);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr20;float t1=vr21;float t2=vr22;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    v1 = LD32(t7+32);
    a0 = LD32(t7+36);
    a1 = LD32(t7+40);
    a2 = LD32(t7+44);
    ST32(sp+96, v1);
    ST32(sp+100, a0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+104, a1);
    ST32(sp+108, a2);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+260, t2);
    ST32(sp+264, t3);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr20;float t1=vr21;float t2=vr22;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+268, t4);
    ST32(sp+272, v0);
    v0 = D_08AEC5BC - (-14916);
    f0 = BITSF(LD32(v0-14916));
    ST32(sp+276, t0);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = FBITS(f0);
    ST32(sp+256, s1);
    {vr44=BITSF(v0);}
    {float s0=vr44;float s1=vr44;float s2=vr44;float s3=vr44;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr44;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    ST32(sp+280, a3);
    {u32 a_=t9+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    t3 = LD32(t5+12);
    a3 = LD32(t5);
    t0 = LD32(t5+4);
    t2 = LD32(t5+8);
    v0 = LD32(sp);
    ST32(sp+288, v1);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(v[31]));}
    v1 = LD32(sp+4);
    ST32(sp+304, v0);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+8);
    ST32(sp+308, v1);
    v1 = LD32(sp+12);
    ST32(sp+312, v0);
    v0 = D_08AEC5B8 - (-14920);
    ST32(sp+316, v1);
    v1 = D_08AEC5C4 - (-14908);
    f8 = BITSF(LD32(v0-14920));
    f10 = BITSF(LD32(v1-14908));
    v0 = D_08AEC5C8 - (-14904);
    v1 = D_08AEC5CC - (-14900);
    ST32(sp+284, t1);
    ST32(sp+292, a0);
    ST32(sp+296, a1);
    ST32(sp+300, a2);
    ST32(sp+96, a3);
    ST32(sp+100, t0);
    ST32(sp+104, t2);
    ST32(sp+108, t3);
    f11 = BITSF(LD32(v0-14904));
    f13 = BITSF(LD32(v1-14900));
    s0 = LD32(s5);
    t6 = s0 + t8;
    goto L_088B3A60;
L_088B3A60:;
    v0 = t6 - 13;
    a0 = t6 < 0xdu;
    if (a0 == 0) t6 = v0;
    v1 = t6 << 4;
    t5 = s4 + v1;
    {u32 a_=t5+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(s3-14912));
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B3B90; }
    goto L_088B3A98;
L_088B3A98:;
    t8 = t8 + 1;
    goto L_088B3A9C;
L_088B3A9C:;
    v0 = t8 < 0xdu;
    cnd_ = v0 != 0;
    if (cnd_) { t6 = s0 + t8; goto L_088B3A60; }
    goto L_088B3AA8;
L_088B3AA8:;
    v0 = s6 < 0xdu;
    cnd_ = v0 == 0;
    v0 = s6 << 4;
    if (cnd_) { goto L_088B3B84; }
    goto L_088B3AB4;
L_088B3AB4:;
    v0 = v0 + sp;
    v1 = v0 + 112;
    a1 = LD32(v0+112);
    a2 = LD32(v1+12);
    v0 = LD32(v1+4);
    a0 = LD32(v1+8);
    ST32(s2, a1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    ST32(s2+4, v0);
    v0 = D_08AEC5CC - (-14900);
    ST32(s2+8, a0);
    ST32(s2+12, a2);
    {u32 a_=s2+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    f0 = BITSF(LD32(v0-14900));
    fcc = FCMP(f0, f8, 14);
    {float s0=vr8;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float t0=vr8;float d0=s0/t0;vr4=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    cnd_ = fcc;
    {u32 a_=s2+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B3B78; }
    goto L_088B3B08;
L_088B3B08:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f8, 14);
    cnd_ = !fcc;
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B3B4C; }
    goto L_088B3B1C;
L_088B3B1C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEC5D4 - (-14892);
    f0 = BITSF(LD32(v0-14892));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088B3B44; }
    goto L_088B3B40;
L_088B3B40:;
    v0 = 0 + 0;
    goto L_088B3B44;
L_088B3B44:;
    ST8(s7, v0);
    f0 = f8;
    goto L_088B3B4C;
L_088B3B4C:;
    sp = sp + 416;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;return f0; }
L_088B3B78:;
    v0 = D_08AEC5B4 - (-14924);
    goto L_088B3B7C;
L_088B3B7C:;
    f0 = BITSF(LD32(v0-14924));
    goto L_088B3B4C;
L_088B3B84:;
    v0 = D_08AEC5D0 - (-14896);
    f0 = BITSF(LD32(v0-14896));
    goto L_088B3B4C;
L_088B3B90:;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    if (cnd_) { goto L_088B3BDC; }
    goto L_088B3BAC;
L_088B3BAC:;
    {float s0=vr12;float s1=vr13;float s2=vr14;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+336);
    ST32(t5, v0);
    v1 = LD32(sp+340);
    ST32(t5+4, v1);
    v0 = LD32(sp+344);
    ST32(t5+8, v0);
    v1 = LD32(sp+348);
    ST32(t5+12, v1);
    {u32 a_=t5+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    goto L_088B3BDC;
L_088B3BDC:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    v0 = LD32(t7+4);
    v1 = LD32(t7+8);
    a0 = LD32(t7+12);
    f0 = BITSF(LD32(t9));
    f1 = BITSF(LD32(t9+4));
    {float s0=vr8;float d0=sqrtf(s0);vr8=d0;}
    f3 = BITSF(LD32(t9+8));
    a1 = LD32(t7+16);
    a2 = LD32(t7+20);
    a3 = LD32(t7+24);
    t0 = LD32(t7+28);
    t1 = LD32(t7+32);
    {float s0=vr0;float t0=vr8;float d0=s0/t0;vr4=d0;}
    t2 = LD32(t7+36);
    t3 = LD32(t7+40);
    t4 = LD32(t7+44);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=t5+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+340, v0);
    ST32(sp+344, v1);
    ST32(sp+348, a0);
    ST32(sp+336, s1);
    {u32 a_=t5+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+320, a1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    ST32(sp+324, a2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    ST32(sp+328, a3);
    f2 = f2 * f0;
    ST32(sp+332, t0);
    {u32 a_=t5+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(sp+64, t1);
    f0 = f0 * f1;
    ST32(sp+68, t2);
    ST32(sp+72, t3);
    f2 = f2 + f0;
    ST32(sp+76, t4);
    {u32 a_=t5+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    {float s0=vr32;float s1=vr33;float s2=vr34;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(v0);
    {v0=FBITS(vr0);}
    {float s0=vr36;float s1=vr37;float s2=vr38;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f5 = BITSF(v0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = f1 * f3;
    f4 = BITSF(v0);
    fcc = FCMP(f0, f5, 12);
    {float s0=vr40;float s1=vr41;float s2=vr42;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+352, 0);
    {v0=FBITS(vr0);}
    f7 = f2 + f1;
    f3 = BITSF(v0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    ST32(sp+356, 0);
    {v0=FBITS(vr4);}
    f1 = f4;
    f6 = BITSF(v0);
    cnd_ = fcc;
    f0 = f5;
    if (cnd_) { goto L_088B3D08; }
    goto L_088B3D00;
L_088B3D00:;
    f1 = f5;
    f0 = f4;
    goto L_088B3D08;
L_088B3D08:;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f2 = f1;
    if (cnd_) { goto L_088B3D1C; }
    goto L_088B3D18;
L_088B3D18:;
    f2 = f3;
    goto L_088B3D1C;
L_088B3D1C:;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    f1 = f0;
    if (cnd_) { goto L_088B3D30; }
    goto L_088B3D2C;
L_088B3D2C:;
    f1 = f3;
    goto L_088B3D30;
L_088B3D30:;
    f0 = f1 + f2;
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f4 = BITSF(0);
    f0 = f0 * f10;
    ST32(sp+352, FBITS(f0));
    f0 = f1 - f0;
    f1 = BITSF(LD32(sp+352));
    ST32(sp+356, FBITS(f0));
    f1 = f6 - f1;
    {u32 a_=t5+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f3 = BITSF(v0);
    f2 = f1 + f7;
    f1 = f1 - f7;
    fcc = FCMP(f4, f3, 14);
    f5 = f2 + f0;
    cnd_ = fcc;
    f2 = f1 - f0;
    if (cnd_) { goto L_088B3D80; }
    goto L_088B3D7C;
L_088B3D7C:;
    f4 = BITSF(v0);
    goto L_088B3D80;
L_088B3D80:;
    f1 = BITSF(0);
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f3; goto L_088B3D94; }
    goto L_088B3D94;
L_088B3D94:;
    f0 = f2 + f4;
    f4 = BITSF(0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(fp-14924));
    if (cnd_) { goto L_088B3E54; }
    goto L_088B3DAC;
L_088B3DAC:;
    f0 = f5 + f1;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    v0 = (v0 >> 0) & 0x7fffffff;
    if (cnd_) { goto L_088B3E50; }
    goto L_088B3DC0;
L_088B3DC0:;
    f0 = BITSF(v0);
    fcc = FCMP(f11, f0, 12);
    cnd_ = !fcc;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    if (cnd_) { goto L_088B3E30; }
    goto L_088B3DD4;
L_088B3DD4:;
    f0 = f13 / f3;
    f1 = BITSF(FBITS(f5) ^ 0x80000000u);
    f1 = f1 * f0;
    f0 = f2 * f0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f3 = f1;
    if (cnd_) { goto L_088B3DF8; }
    goto L_088B3DF4;
L_088B3DF4:;
    f3 = f0;
    goto L_088B3DF8;
L_088B3DF8:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088B3E08; }
    goto L_088B3E08;
L_088B3E08:;
    fcc = FCMP(f8, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B3E20; }
    goto L_088B3E18;
L_088B3E18:;
    f8 = f3;
    s6 = t6 + 0;
    goto L_088B3E20;
L_088B3E20:;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f1; goto L_088B3E30; }
    goto L_088B3E30;
L_088B3E30:;
    fcc = FCMP(f12, f8, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(fp-14924)); goto L_088B3E54; }
    goto L_088B3E40;
L_088B3E40:;
    fcc = FCMP(f12, f9, 14);
    cnd_ = !fcc;
    if (cnd_) { t8 = t8 + 1; goto L_088B3A9C; }
    goto L_088B3E50;
L_088B3E50:;
    f0 = BITSF(LD32(fp-14924));
    goto L_088B3E54;
L_088B3E54:;
    ST32(s5, t6);
    goto L_088B3B4C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;
}

/* 088B3E5C */
u32 func_088B3E5C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43];
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 448);
L_088B3E5C:;
    sp = sp - 448;
    s7 = a2 + 0;
    f11 = BITSF(0);
    s6 = sp + 112;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;v[44]=(float)1;v[45]=(float)1;v[46]=(float)1;v[47]=(float)1;}
    s5 = a3 + 0;
    t9 = s6 + 0;
    s3 = a0 + 0;
    t8 = s3 + 32;
    s2 = 0 + 0;
    {u32 a_=a1+(32);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=vr40;float t1=vr41;float t2=vr42;float t3=vr43;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float t0=vr40;float t1=vr41;float t2=vr42;float t3=vr43;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr12=d0;vr13=d1;vr14=d2;}
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    a0 = LD32(sp+104);
    a1 = LD32(sp+108);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    t0 = LD32(sp+96);
    t1 = LD32(sp+100);
    t2 = LD32(sp+104);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    t3 = LD32(sp+108);
    t6 = LD32(sp+64);
    t7 = LD32(sp+68);
    s0 = LD32(sp+72);
    s1 = LD32(sp+76);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    ST32(sp+16, v0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float t0=vr32;float t1=vr33;float t2=vr34;float t3=vr35;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    ST32(sp+32, t0);
    ST32(sp+36, t1);
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    v0 = LD32(sp+96);
    ST32(sp+40, t2);
    ST32(sp+48, v0);
    ST32(sp+44, t3);
    ST32(sp, t6);
    {u32 a_=sp+(32);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    ST32(sp+4, t7);
    ST32(sp+8, s0);
    ST32(sp+12, s1);
    s4 = LD32(s3+32);
    t3 = LD32(t8+4);
    t4 = LD32(t8+8);
    t5 = LD32(t8+12);
    v0 = LD32(sp+100);
    ST32(sp+96, s4);
    ST32(sp+100, t3);
    a0 = LD32(sp+104);
    v1 = LD32(sp+108);
    ST32(sp+104, t4);
    ST32(sp+108, t5);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+52, v0);
    v0 = D_08AEC5D8 - (-14888);
    ST32(sp+56, a0);
    ST32(sp+60, v1);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(48);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    t1 = LD32(t8+16);
    t2 = LD32(t8+20);
    ST32(sp+96, t1);
    ST32(sp+100, t2);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a3 = LD32(t8+28);
    a2 = LD32(t8+24);
    t0 = LD32(t8+32);
    ST32(sp+104, a2);
    ST32(sp+108, a3);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    f0 = BITSF(LD32(v0-14888));
    v0 = FBITS(f0);
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    v0 = D_08AEC5DC - (-14884);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    v1 = LD32(t8+36);
    a0 = LD32(t8+40);
    a1 = LD32(t8+44);
    ST32(sp+100, v1);
    ST32(sp+96, t0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+104, a0);
    ST32(sp+108, a1);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s3+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr36;vr20=s0*t0;vr21=s1*t0;vr22=s2*t0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    ST32(sp+292, v1);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    v1 = D_08AEC5E0 - (-14880);
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+260, t3);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    ST32(sp+264, t4);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+268, t5);
    ST32(sp+272, t1);
    ST32(sp+276, t2);
    ST32(sp+280, a2);
    ST32(sp+284, a3);
    ST32(sp+288, t0);
    ST32(sp+296, a0);
    ST32(sp+300, a1);
    ST32(sp+304, t6);
    f9 = BITSF(LD32(v0-14884));
    v0 = D_08AEC5E4 - (-14876);
    ST32(sp+308, t7);
    ST32(sp+312, s0);
    ST32(sp+316, s1);
    ST32(sp+256, s4);
    f8 = BITSF(LD32(v1-14880));
    f10 = BITSF(LD32(v0-14876));
    goto L_088B40AC;
L_088B40AC:;
    t5 = s2 << 2;
    v0 = t5 + sp;
    ST32(v0+320, FBITS(f9));
    {u32 a_=t9+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B41D8; }
    goto L_088B40D8;
L_088B40D8:;
    s2 = s2 + 1;
    v0 = s2 < 0xdu;
    cnd_ = v0 != 0;
    t9 = t9 + 16;
    if (cnd_) { goto L_088B40AC; }
    goto L_088B40E8;
L_088B40E8:;
    v0 = D_08AEC5E8 - (-14872);
    f3 = BITSF(LD32(v0-14872));
    f4 = BITSF(0);
    v1 = D_08AEC5E0 - (-14880);
    f2 = BITSF(LD32(v1-14880));
    a2 = 13;
    v1 = s6 + 0;
    a0 = 0 + 0;
    a1 = sp + 320;
    goto L_088B410C;
L_088B410C:;
    {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v1 = v1 + 16;
    if (cnd_) { goto L_088B41A8; }
    goto L_088B412C;
L_088B412C:;
    a0 = a0 + 1;
    goto L_088B4130;
L_088B4130:;
    v0 = a0 < 0xdu;
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_088B410C; }
    goto L_088B413C;
L_088B413C:;
    v0 = a2 < 0xdu;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088B417C; }
    goto L_088B4148;
L_088B4148:;
    v0 = a2 << 4;
    v0 = v0 + sp;
    v1 = v0 + 112;
    a2 = LD32(v0+112);
    a0 = LD32(v1+12);
    v0 = LD32(v1+4);
    a1 = LD32(v1+8);
    ST32(s7, FBITS(f3));
    v1 = 1;
    ST32(s5+12, a0);
    ST32(s5, a2);
    ST32(s5+4, v0);
    ST32(s5+8, a1);
    goto L_088B417C;
L_088B417C:;
    v0 = v1 + 0;
    sp = sp + 448;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;return v0; }
L_088B41A8:;
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f4, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = a0 + 1; goto L_088B4130; }
    goto L_088B41BC;
L_088B41BC:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = a0 + 1; goto L_088B4130; }
    goto L_088B41CC;
L_088B41CC:;
    f3 = f0;
    a2 = a0 + 0;
    goto L_088B412C;
L_088B41D8:;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f11, f0, 12);
    cnd_ = !fcc;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    if (cnd_) { goto L_088B4224; }
    goto L_088B41F4;
L_088B41F4:;
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+384);
    ST32(t9, v0);
    v1 = LD32(sp+388);
    ST32(t9+4, v1);
    v0 = LD32(sp+392);
    ST32(t9+8, v0);
    v1 = LD32(sp+396);
    ST32(t9+12, v1);
    {u32 a_=t9+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    goto L_088B4224;
L_088B4224:;
    v0 = LD32(t8+4);
    v1 = LD32(t8+8);
    a0 = LD32(t8+12);
    f0 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    {float s0=vr4;float d0=sqrtf(s0);vr4=d0;}
    a1 = LD32(t8+16);
    a2 = LD32(t8+20);
    a3 = LD32(t8+24);
    t0 = LD32(t8+28);
    t1 = LD32(t8+32);
    t2 = LD32(t8+36);
    {float s0=v[44];float t0=vr4;float d0=s0/t0;vr0=d0;}
    t3 = LD32(t8+40);
    t4 = LD32(t8+44);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=t9+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+388, v0);
    ST32(sp+392, v1);
    ST32(sp+396, a0);
    ST32(sp+384, s4);
    {u32 a_=t9+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+80, a1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    ST32(sp+84, a2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    ST32(sp+88, a3);
    f2 = f2 * f0;
    ST32(sp+92, t0);
    {u32 a_=t9+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(sp+64, t1);
    f0 = f0 * f1;
    ST32(sp+68, t2);
    ST32(sp+72, t3);
    f2 = f2 + f0;
    ST32(sp+76, t4);
    {u32 a_=t9+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(v0);
    {v0=FBITS(vr0);}
    {float s0=vr40;float s1=vr41;float s2=vr42;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f5 = BITSF(v0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = f1 * f3;
    f4 = BITSF(v0);
    fcc = FCMP(f0, f5, 12);
    {float s0=vr32;float s1=vr33;float s2=vr34;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+400, 0);
    {v0=FBITS(vr0);}
    f6 = f2 + f1;
    f3 = BITSF(v0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    ST32(sp+404, 0);
    {v0=FBITS(vr4);}
    f1 = f4;
    f7 = BITSF(v0);
    cnd_ = fcc;
    f0 = f5;
    if (cnd_) { goto L_088B434C; }
    goto L_088B4344;
L_088B4344:;
    f1 = f5;
    f0 = f4;
    goto L_088B434C;
L_088B434C:;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f2 = f1;
    if (cnd_) { goto L_088B4360; }
    goto L_088B435C;
L_088B435C:;
    f2 = f3;
    goto L_088B4360;
L_088B4360:;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    f1 = f0;
    if (cnd_) { goto L_088B4374; }
    goto L_088B4370;
L_088B4370:;
    f1 = f3;
    goto L_088B4374;
L_088B4374:;
    f0 = f1 + f2;
    f3 = BITSF(0);
    f0 = f0 * f10;
    ST32(sp+400, FBITS(f0));
    f0 = f1 - f0;
    f1 = BITSF(LD32(sp+400));
    f2 = f0;
    f1 = f7 - f1;
    ST32(sp+404, FBITS(f0));
    f0 = f1 - f6;
    f1 = f1 + f6;
    f0 = f0 - f2;
    fcc = FCMP(f3, f0, 12);
    cnd_ = fcc;
    f1 = f1 + f2;
    if (cnd_) { goto L_088B43E4; }
    goto L_088B43B4;
L_088B43B4:;
    fcc = FCMP(f1, f3, 12);
    cnd_ = fcc;
    v0 = t5 + sp;
    if (cnd_) { goto L_088B43E4; }
    goto L_088B43C4;
L_088B43C4:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_088B43DC; }
    goto L_088B43D8;
L_088B43D8:;
    f0 = f2;
    goto L_088B43DC;
L_088B43DC:;
    ST32(v0+320, FBITS(f0));
    goto L_088B40D8;
L_088B43E4:;
    v1 = 0 + 0;
    goto L_088B417C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;
}

/* 088B43EC */
u32 func_088B43EC(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99];
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 384);
L_088B43EC:;
    sp = sp - 384;
    s3 = a0 + 32;
    t0 = a0 + 80;
    s2 = a2 + 0;
    a2 = s3 + 0;
    s1 = a3 + 0;
    a3 = sp + 32;
    s0 = a0 + 0;
    f22 = f12;
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088B4440;
L_088B4440:;
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
    if (cnd_) { goto L_088B4440; }
    goto L_088B446C;
L_088B446C:;
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    ST32(sp+36, FBITS(f0));
    {u32 a_=sp+(0);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    a0 = sp + 96;
    f0 = BITSF(LD32(sp+64));
    ST32(sp+48, FBITS(f1));
    a1 = sp + 100;
    a2 = sp + 104;
    f1 = BITSF(LD32(sp+56));
    ST32(sp+40, FBITS(f0));
    f0 = BITSF(LD32(sp+68));
    ST32(sp+64, FBITS(f2));
    {u32 a_=sp+(32);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    ST32(sp+56, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(s0));
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float t0=v[100];float t1=v[101];float t2=v[102];float o0=0;o0+=v[112]*t0;o0+=v[116]*t1;o0+=v[120]*t2;float o1=0;o1+=v[113]*t0;o1+=v[117]*t1;o1+=v[121]*t2;float o2=0;o2+=v[114]*t0;o2+=v[118]*t1;o2+=v[122]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+16);
    f2 = BITSF(FBITS(f3) ^ 0x80000000u);
    v1 = LD32(sp+28);
    ST32(sp, v0);
    v0 = LD32(sp+20);
    f0 = BITSF(LD32(sp));
    ST32(sp+12, v1);
    ST32(sp+4, v0);
    v0 = LD32(sp+24);
    f1 = BITSF(LD32(sp+4));
    ST32(sp+96, FBITS(f0));
    ST32(sp+8, v0);
    f0 = BITSF(LD32(sp+8));
    ST32(sp+100, FBITS(f2));
    ST32(sp+108, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    ST32(sp+104, FBITS(f3));
    f0 = func_088B64AC(a0, a1, a2);
    goto L_088B4518;
L_088B4518:;
    f21 = f0;
    f1 = BITSF(LD32(s0+4));
    a0 = sp + 108;
    a1 = sp + 112;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    a2 = sp + 116;
    ST32(sp+116, FBITS(f1));
    ST32(sp+112, FBITS(f0));
    f0 = func_088B64AC(a0, a1, a2);
    goto L_088B453C;
L_088B453C:;
    f20 = f0;
    f1 = BITSF(LD32(s0+8));
    a2 = sp + 128;
    a0 = sp + 120;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    a1 = sp + 124;
    ST32(sp+128, FBITS(f1));
    ST32(sp+124, FBITS(f0));
    f0 = func_088B64AC(a0, a1, a2);
    goto L_088B4560;
L_088B4560:;
    f1 = f22 * f22;
    f8 = BITSF(LD32(sp+96));
    f6 = BITSF(LD32(sp+108));
    f7 = BITSF(LD32(sp+120));
    f21 = f21 - f8;
    f20 = f20 - f6;
    f0 = f0 - f7;
    a2 = 0 + 0;
    ST32(sp+16, FBITS(f21));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f20));
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B4688; }
    goto L_088B45AC;
L_088B45AC:;
    f9 = BITSF(0);
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(s0)); goto L_088B46B0; }
    goto L_088B45C0;
L_088B45C0:;
    v1 = LD32(sp+20);
    a0 = LD32(sp+24);
    a1 = LD32(sp+28);
    v0 = LD32(sp+16);
    ST32(s1+4, v1);
    ST32(s1, v0);
    ST32(s1+8, a0);
    ST32(s1+12, a1);
    {u32 a_=s1+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    if (cnd_) { goto L_088B4604; }
    goto L_088B45F8;
L_088B45F8:;
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B4604;
L_088B4604:;
    {v0=FBITS(vr8);}
    f0 = BITSF(v0);
    {u32 a_=sp+(192);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f1 = f22 - f0;
    a2 = 1;
    ST32(s2, FBITS(f1));
    {u32 a_=s0+(32);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=s3+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=s3+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    goto L_088B464C;
L_088B464C:;
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(sp+84);
    a1 = LD32(sp+88);
    v1 = LD32(sp+92);
    v0 = LD32(sp+80);
    ST32(s1+4, a0);
    ST32(s1, v0);
    ST32(s1+12, v1);
    ST32(s1+8, a1);
    goto L_088B4688;
L_088B4688:;
    v0 = a2 + 0;
    sp = sp + 384;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;return v0; }
L_088B46B0:;
    v0 = FBITS(f8);
    f5 = BITSF(LD32(s0+4));
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v0 = FBITS(f6);
    f4 = f4 - f2;
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    v0 = FBITS(f7);
    f2 = BITSF(LD32(s0+8));
    f5 = f5 - f3;
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f4, f5, 12);
    cnd_ = !fcc;
    f2 = f2 - f1;
    if (cnd_) { goto L_088B47EC; }
    goto L_088B46F4;
L_088B46F4:;
    fcc = FCMP(f4, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088B479C; }
    goto L_088B4704;
L_088B4704:;
    v0 = FBITS(f8);
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    ST32(sp+88, FBITS(f9));
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+84, FBITS(f9));
    ST32(sp+80, FBITS(f0));
    v1 = LD32(sp+84);
    v0 = LD32(sp+80);
    a0 = LD32(sp+88);
    a1 = LD32(sp+92);
    ST32(s2, FBITS(f4));
    ST32(s1, v0);
    ST32(s1+4, v1);
    ST32(s1+8, a0);
    ST32(s1+12, a1);
    goto L_088B4754;
L_088B4754:;
    f0 = BITSF(LD32(s2));
    {u32 a_=sp+(320);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f0 = f0 + f22;
    a2 = 1;
    ST32(s2, FBITS(f0));
    {u32 a_=s0+(32);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=s3+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(272);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=s3+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    goto L_088B464C;
L_088B479C:;
    v0 = FBITS(f7);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B47A8;
L_088B47A8:;
    {float s0=vr0;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    ST32(sp+84, FBITS(f9));
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+80, FBITS(f9));
    ST32(sp+88, FBITS(f0));
    a1 = LD32(sp+84);
    v0 = LD32(sp+80);
    v1 = LD32(sp+88);
    a0 = LD32(sp+92);
    ST32(s2, FBITS(f2));
    goto L_088B47D8;
L_088B47D8:;
    ST32(s1, v0);
    ST32(s1+4, a1);
    ST32(s1+8, v1);
    ST32(s1+12, a0);
    goto L_088B4754;
L_088B47EC:;
    fcc = FCMP(f5, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088B4840; }
    goto L_088B47FC;
L_088B47FC:;
    v0 = FBITS(f6);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    ST32(sp+88, FBITS(f9));
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+80, FBITS(f9));
    ST32(sp+84, FBITS(f0));
    v0 = LD32(sp+80);
    a1 = LD32(sp+84);
    v1 = LD32(sp+88);
    a0 = LD32(sp+92);
    ST32(s2, FBITS(f5));
    goto L_088B47D8;
L_088B4840:;
    v0 = FBITS(f7);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B47A8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;
}

/* 088B4850 */
u32 func_088B4850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088B4850:;
    sp = sp - 176;
    s4 = a1 + 0;
    a1 = sp + 0;
    s3 = a0 + 0;
    a0 = a2 + 0;
    a2 = t0 + 0;
    s1 = t0 + 0;
    s0 = a3 + 0;
    v0 = func_088C3A9C(a0, a1, a2);
    goto L_088B488C;
L_088B488C:;
    {u32 a_=s1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    s1 = sp + 64;
    a2 = sp + 128;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s2 = v0 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = func_088B4BC8(a0, a1, a2);
    goto L_088B48B0;
L_088B48B0:;
    a3 = 2;
    cnd_ = s2 == a3;
    a2 = v0 + 0;
    if (cnd_) { goto L_088B4A3C; }
    goto L_088B48BC;
L_088B48BC:;
    v0 = s2 < 0x3u;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_088B4998; }
    goto L_088B48C8;
L_088B48C8:;
    v0 = 1;
    cnd_ = s2 == v0;
    a0 = LD32(sp+4);
    if (cnd_) { goto L_088B48FC; }
    goto L_088B48D4;
L_088B48D4:;
    a2 = 0 + 0;
    goto L_088B48D8;
L_088B48D8:;
    v0 = a2 + 0;
    sp = sp + 176;
    return v0;
L_088B48FC:;
    a1 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(s3+4, a0);
    ST32(s3, v0);
    ST32(s3+12, v1);
    cnd_ = a2 == a3;
    ST32(s3+8, a1);
    if (cnd_) { goto L_088B497C; }
    goto L_088B491C;
L_088B491C:;
    v0 = a2 < 0x3u;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_088B4958; }
    goto L_088B4928;
L_088B4928:;
    cnd_ = a2 != s2;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B4930;
L_088B4930:;
    a0 = LD32(sp+68);
    a1 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    a2 = 1;
    ST32(s4+12, v1);
    ST32(s4, v0);
    ST32(s4+4, a0);
    ST32(s4+8, a1);
    goto L_088B48D8;
L_088B4958:;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B4960;
L_088B4960:;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a0 = sp + 0;
    goto L_088B496C;
L_088B496C:;
    func_088B2A10(a0, a1, a2);
    goto L_088B4974;
L_088B4974:;
    a2 = 1;
    goto L_088B48D8;
L_088B497C:;
    a1 = s1 + 0;
    a2 = s4 + 0;
    a0 = sp + 0;
    goto L_088B4988;
L_088B4988:;
    func_088B2804(a0, a1, a2);
    goto L_088B4990;
L_088B4990:;
    a2 = 1;
    goto L_088B48D8;
L_088B4998:;
    cnd_ = s2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B49A0;
L_088B49A0:;
    cnd_ = a2 == a3;
    v0 = a2 < 0x3u;
    if (cnd_) { goto L_088B4A18; }
    goto L_088B49A8;
L_088B49A8:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_088B49EC; }
    goto L_088B49B0;
L_088B49B0:;
    v0 = 1;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B49BC;
L_088B49BC:;
    a3 = LD32(sp+68);
    t0 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(s4+4, a3);
    a0 = s1 + 0;
    a2 = s3 + 0;
    ST32(s4, v0);
    a1 = sp + 0;
    ST32(s4+12, v1);
    ST32(s4+8, t0);
    goto L_088B496C;
L_088B49EC:;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B49F4;
L_088B49F4:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    a0 = sp + 0;
    t0 = 4;
    t1 = 3;
    v0 = func_088B2B44(a0, a1, a2, a3, t0, t1);
    goto L_088B4A10;
L_088B4A10:;
    a2 = v0 + 0;
    goto L_088B48D8;
L_088B4A18:;
    a0 = s1 + 0;
    a2 = s4 + 0;
    a3 = s3 + 0;
    a1 = sp + 0;
    t0 = 4;
    goto L_088B4A2C;
L_088B4A2C:;
    v0 = func_088B2A9C(a0, a1, a2, a3, t0);
    goto L_088B4A34;
L_088B4A34:;
    a2 = v0 + 0;
    goto L_088B48D8;
L_088B4A3C:;
    cnd_ = v0 == a3;
    v0 = v0 < 0x3u;
    if (cnd_) { goto L_088B4AA8; }
    goto L_088B4A44;
L_088B4A44:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_088B4A88; }
    goto L_088B4A4C;
L_088B4A4C:;
    v0 = 1;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B4A58;
L_088B4A58:;
    a3 = LD32(sp+68);
    t0 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(s4+4, a3);
    a0 = s1 + 0;
    a2 = s3 + 0;
    ST32(s4, v0);
    a1 = sp + 0;
    ST32(s4+12, v1);
    ST32(s4+8, t0);
    goto L_088B4988;
L_088B4A88:;
    cnd_ = a2 != v0;
    if (cnd_) { a2 = 0 + 0; goto L_088B48D8; }
    goto L_088B4A90;
L_088B4A90:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    a0 = sp + 0;
    t0 = 3;
    goto L_088B4A2C;
L_088B4AA8:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    a0 = sp + 0;
    func_088B28EC(a0, a1, a2, a3);
    goto L_088B4ABC;
L_088B4ABC:;
    a2 = 1;
    goto L_088B48D8;
}

/* 088B4AC4 */
void func_088B4AC4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
L_088B4AC4:;
    v0 = a1 >> 16;
    t1 = D_08B2BDB4 - (-16972);
    a3 = LD32(t1-16972);
    v1 = v0 << 3;
    v1 = v1 - v0;
    v1 = v1 << 3;
    v1 = v1 + a3;
    a2 = LD32(v1);
    t1 = t1 - 16972;
    v0 = (a1 >> 1) & 0x7fff;
    t3 = LD32(t1+44);
    a2 = a2 + v0;
    a1 = a1 & 0x1;
    a2 = a2 << 3;
    t3 = t3 + a2;
    v0 = a1 << 2;
    v0 = v0 + t3;
    t0 = LD32(v1+4);
    a3 = LD_U16(v0);
    t2 = LD32(t1+56);
    v1 = 3;
    a3 = t0 + a3;
    a3 = a3 << 4;
    a3 = t2 + a3;
    a2 = LD32(a3);
    v0 = 1;
    if (a1 != 0) v0 = v1;
    ST32(a0, a2);
    v0 = v0 << 1;
    v0 = v0 + t3;
    v1 = LD32(a3+4);
    a2 = LD_U16(v0);
    v0 = 2;
    ST32(a0+4, v1);
    if (a1 != 0) v0 = 0;
    a2 = t0 + a2;
    v1 = LD32(a3+8);
    a2 = a2 << 4;
    a2 = t2 + a2;
    ST32(a0+8, v1);
    v0 = v0 << 1;
    v0 = v0 + t3;
    a1 = LD32(a3+12);
    v1 = LD_U16(v0);
    ST32(a0+12, a1);
    t0 = t0 + v1;
    t0 = t0 << 4;
    a1 = LD32(a2);
    t2 = t2 + t0;
    ST32(a0+16, a1);
    v0 = LD32(a2+4);
    ST32(a0+20, v0);
    v1 = LD32(a2+8);
    ST32(a0+24, v1);
    v0 = LD32(a2+12);
    ST32(a0+28, v0);
    v1 = LD32(t2);
    ST32(a0+32, v1);
    v0 = LD32(t2+4);
    ST32(a0+36, v0);
    v1 = LD32(t2+8);
    ST32(a0+40, v1);
    v0 = LD32(t2+12);
    ST32(a0+44, v0);
    return;
}

/* 088B4BC8 */
u32 func_088B4BC8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088B4BC8:;
    {u32 a_=a0+(0);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    sp = sp - 64;
    {u32 a_=a2+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    t1 = a0 + 0;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    v1 = D_08AEC5EC - (-14868);
    {u32 a_=sp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f0 = BITSF(LD32(v1-14868));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr4;float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    if (cnd_) { goto L_088B4D88; }
    goto L_088B4C58;
L_088B4C58:;
    v0 = D_08AEC5F0 - (-14864);
    f1 = BITSF(LD32(v0-14864));
    v1 = 2;
    a2 = 0 + 0;
    t2 = t1 + 0;
    goto L_088B4C6C;
L_088B4C6C:;
    v0 = v1 << 4;
    t0 = t1 + v0;
    {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=t0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v1 = a2 + 0;
    a2 = a2 + 1;
    a0 = a0 + 16;
    a3 = a2 < 0x3u;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B4D40; }
    goto L_088B4CB0;
L_088B4CB0:;
    cnd_ = a3 != 0;
    t2 = t2 + 16;
    if (cnd_) { goto L_088B4C6C; }
    goto L_088B4CB8;
L_088B4CB8:;
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    a0 = 0 + 0;
    a2 = 1;
    v1 = t1 + 16;
    {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088B4CD4;
L_088B4CD4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v1 = v1 + 16;
    if (cnd_) { goto L_088B4CF8; }
    goto L_088B4CF0;
L_088B4CF0:;
    f1 = BITSF(v0);
    a0 = a2 + 0;
    goto L_088B4CF8;
L_088B4CF8:;
    a2 = a2 + 1;
    v0 = a2 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088B4CD4; }
    goto L_088B4D08;
L_088B4D08:;
    a0 = a0 << 4;
    a0 = a0 + t1;
    v1 = LD32(a0);
    a2 = 1;
    ST32(a1, v1);
    v0 = LD32(a0+4);
    ST32(a1+4, v0);
    v1 = LD32(a0+8);
    ST32(a1+8, v1);
    v0 = LD32(a0+12);
    ST32(a1+12, v0);
    goto L_088B4D34;
L_088B4D34:;
    v0 = a2 + 0;
    sp = sp + 64;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;return v0; }
L_088B4D40:;
    v1 = LD32(t0);
    a2 = 2;
    ST32(a1, v1);
    v0 = LD32(t0+4);
    ST32(a1+4, v0);
    v1 = LD32(t0+8);
    ST32(a1+8, v1);
    v0 = LD32(t0+12);
    ST32(a1+12, v0);
    v1 = LD32(t2);
    ST32(a1+16, v1);
    v0 = LD32(t2+4);
    ST32(a1+20, v0);
    v1 = LD32(t2+8);
    ST32(a1+24, v1);
    v0 = LD32(t2+12);
    ST32(a1+28, v0);
    goto L_088B4D34;
L_088B4D88:;
    v1 = LD32(a0);
    a2 = 3;
    ST32(a1, v1);
    v0 = LD32(a0+4);
    ST32(a1+4, v0);
    v1 = LD32(a0+8);
    ST32(a1+8, v1);
    v0 = LD32(a0+12);
    ST32(a1+12, v0);
    v1 = LD32(a0+16);
    ST32(a1+16, v1);
    v0 = LD32(a0+20);
    ST32(a1+20, v0);
    v1 = LD32(a0+24);
    ST32(a1+24, v1);
    v0 = LD32(a0+28);
    ST32(a1+28, v0);
    v1 = LD32(a0+32);
    ST32(a1+32, v1);
    v0 = LD32(a0+36);
    ST32(a1+36, v0);
    v1 = LD32(a0+40);
    ST32(a1+40, v1);
    v0 = LD32(a0+44);
    ST32(a1+44, v0);
    goto L_088B4D34;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;
}

/* 088B4DF0 */
void func_088B4DF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr72 = v[72], vr73 = v[73], vr74 = v[74];
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_088B4DF0:;
    sp = sp - 224;
    v0 = a1 + 208;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = LD32(v0+12);
    a3 = LD32(v0+4);
    t0 = LD32(v0+8);
    a2 = LD32(s0+208);
    v1 = LD32(s0+272);
    v0 = 2;
    ST32(sp+80, v0);
    ST32(sp, a2);
    ST32(sp+4, a3);
    ST32(sp+8, t0);
    cnd_ = v1 == v0;
    ST32(sp+12, a1);
    if (cnd_) { goto L_088B4EF4; }
    goto L_088B4E40;
L_088B4E40:;
    a0 = 1;
    cnd_ = v1 == a0;
    v0 = LD32(s0+276);
    if (cnd_) { goto L_088B4EB8; }
    goto L_088B4E4C;
L_088B4E4C:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B4E64; }
    goto L_088B4E64;
L_088B4E64:;
    f2 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    f1 = f0;
    if (cnd_) { goto L_088B4E7C; }
    goto L_088B4E78;
L_088B4E78:;
    f1 = f2;
    goto L_088B4E7C;
L_088B4E7C:;
    v0 = D_08AEC5F8 - (-14856);
    f0 = BITSF(LD32(v0-14856));
    ST32(s1+28, a1);
    f0 = f1 * f0;
    ST32(s1, a0);
    ST32(s1+4, FBITS(f0));
    goto L_088B4E94;
L_088B4E94:;
    ST32(s1+16, a2);
    ST32(s1+20, a3);
    ST32(s1+24, t0);
    goto L_088B4EA0;
L_088B4EA0:;
    goto L_088B4EA4;
L_088B4EA4:;
    sp = sp + 224;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[72]=vr72;v[73]=vr73;v[74]=vr74;return; }
L_088B4EB8:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B4ED0; }
    goto L_088B4ED0;
L_088B4ED0:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B4EE4; }
    goto L_088B4EE4;
L_088B4EE4:;
    ST32(s1+28, a1);
    ST32(s1+4, FBITS(f0));
    ST32(s1, a0);
    goto L_088B4E94;
L_088B4EF4:;
    a0 = LD32(s0+276);
    a2 = s1 + 4;
    a1 = sp + 16;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(v[75]));}
    func_08AB53BC(a0, a1, a2);
    goto L_088B4F14;
L_088B4F14:;
    {u32 a_=sp+(16);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {float s0=vr60;float s1=vr61;float s2=vr62;float t0=vr60;float t1=vr61;float t2=vr62;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B4F40; }
    goto L_088B4F2C;
L_088B4F2C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr60;float s1=vr61;float s2=vr62;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;v[63]=d3;}
    goto L_088B4F40;
L_088B4F40:;
    f1 = BITSF(LD32(s1+4));
    {v0=FBITS(vr8);}
    f0 = BITSF(v0);
    {u32 a_=s0+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    f1 = f0 / f1;
    {u32 a_=s0+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    f20 = BITSF(v0);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr64=d0;vr65=d1;vr66=d2;v[67]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr68=d0;vr69=d1;vr70=d2;v[71]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr72=d0;vr73=d1;vr74=d2;v[75]=d3;}
    {float t0=vr60;float t1=vr61;float t2=vr62;float o0=0;o0+=vr64*t0;o0+=vr68*t1;o0+=vr72*t2;float o1=0;o1+=vr65*t0;o1+=vr69*t1;o1+=vr73*t2;float o2=0;o2+=vr66*t0;o2+=vr70*t1;o2+=vr74*t2;vr0=o0;vr1=o1;vr2=o2;}
    a2 = D_08AD8218 - (-32232);
    a0 = s1 + 0;
    a2 = a2 - 32232;
    a1 = sp + 80;
    f0 = BITSF(F2I(f1, 1));
    v1 = FBITS(f0);
    v0 = v1 + 1;
    ST32(s1, v0);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+40);
    v1 = LD32(sp+44);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    v0 = func_088B64E0(a0, a1, a2);
    goto L_088B4FB8;
L_088B4FB8:;
    {u32 a_=sp+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(s1+4));
    {u32 a_=sp+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f20 = f20 - f0;
    a0 = v0 - 1;
    f1 = BITSF(a0);
    ST32(s1, v0);
    v1 = FBITS(f20);
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    f20 = f20 + f20;
    f0 = (float)(s32)FBITS(f1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    cnd_ = (s32)a0 < 0;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088B5084; }
    goto L_088B5008;
L_088B5008:;
    f0 = f20 / f0;
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    t1 = LD32(s1);
    t0 = 0 + 0;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    cnd_ = t1 == 0;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088B4EA0; }
    goto L_088B5038;
L_088B5038:;
    a3 = s1 + 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    goto L_088B5040;
L_088B5040:;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    v1 = LD32(sp+52);
    a0 = LD32(sp+56);
    a1 = LD32(sp+60);
    v0 = LD32(sp+48);
    t0 = t0 + 1;
    a2 = t0 < t1;
    ST32(a3+16, v0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(a3+20, v1);
    ST32(a3+24, a0);
    ST32(a3+28, a1);
    cnd_ = a2 != 0;
    a3 = a3 + 16;
    if (cnd_) { goto L_088B5040; }
    goto L_088B507C;
L_088B507C:;
    goto L_088B4EA4;
L_088B5084:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088B5008;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[72]=vr72;v[73]=vr73;v[74]=vr74;
}

/* 088B50A0 */
void func_088B50A0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_088B50A0:;
    sp = sp - 160;
    v0 = a1 + 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    v1 = LD32(v0+12);
    t0 = LD32(v0+4);
    t1 = LD32(v0+8);
    a3 = LD32(a1+16);
    v0 = 2;
    ST32(sp+80, v0);
    ST32(sp, a3);
    ST32(sp+4, t0);
    ST32(sp+8, t1);
    cnd_ = a2 != 0;
    ST32(sp+12, v1);
    if (cnd_) { goto L_088B5144; }
    goto L_088B50E8;
L_088B50E8:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B5100; }
    goto L_088B5100;
L_088B5100:;
    f1 = BITSF(LD32(a1+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B5114; }
    goto L_088B5114;
L_088B5114:;
    v0 = 1;
    ST32(s0+28, v1);
    ST32(s0+4, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+16, a3);
    ST32(s0+20, t0);
    ST32(s0+24, t1);
    goto L_088B5130;
L_088B5130:;
    goto L_088B5134;
L_088B5134:;
    sp = sp + 160;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;return; }
L_088B5144:;
    a2 = a0 + 4;
    a0 = a1 + 0;
    a1 = sp + 16;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;func_08AB5274(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_088B5154;
L_088B5154:;
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    if (cnd_) { goto L_088B5178; }
    goto L_088B516C;
L_088B516C:;
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B5178;
L_088B5178:;
    {v0=FBITS(vr8);}
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    a2 = D_08AD8218 - (-32232);
    f1 = f0 / f1;
    a0 = s0 + 0;
    a2 = a2 - 32232;
    a1 = sp + 80;
    f0 = BITSF(F2I(f1, 1));
    v1 = FBITS(f0);
    v0 = v1 + 1;
    ST32(s0, v0);
    v0 = func_088B64E0(a0, a1, a2);
    goto L_088B51B0;
L_088B51B0:;
    f0 = BITSF(LD32(s0+4));
    {u32 a_=sp+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f20 = f20 - f0;
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = v0 - 1;
    f1 = BITSF(a0);
    v1 = FBITS(f20);
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    ST32(s0, v0);
    f20 = f20 + f20;
    f0 = (float)(s32)FBITS(f1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    cnd_ = (s32)a0 < 0;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088B527C; }
    goto L_088B5200;
L_088B5200:;
    f0 = f20 / f0;
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    t1 = LD32(s0);
    t0 = 0 + 0;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    cnd_ = t1 == 0;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088B5130; }
    goto L_088B5230;
L_088B5230:;
    a3 = s0 + 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    goto L_088B5238;
L_088B5238:;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    v1 = LD32(sp+52);
    a0 = LD32(sp+56);
    a1 = LD32(sp+60);
    v0 = LD32(sp+48);
    t0 = t0 + 1;
    a2 = t0 < t1;
    ST32(a3+16, v0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(a3+20, v1);
    ST32(a3+24, a0);
    ST32(a3+28, a1);
    cnd_ = a2 != 0;
    a3 = a3 + 16;
    if (cnd_) { goto L_088B5238; }
    goto L_088B5274;
L_088B5274:;
    goto L_088B5134;
L_088B527C:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088B5200;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 088B5298 */
u32 func_088B5298(u32 a0)
{
    u32 v0 = 0;
L_088B5298:;
    v0 = LD32(a0);
    return v0;
}

/* 088B52A0 */
u32 func_088B52A0(u32 a0)
{
    u32 v0 = 0;
L_088B52A0:;
    v0 = a0 + 16;
    return v0;
}

/* 088B52A8 */
float func_088B52A8(u32 a0)
{
    float f0 = 0;
L_088B52A8:;
    f0 = BITSF(LD32(a0+4));
    return f0;
}

/* 088B52B0 */
float func_088B52B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 320);
L_088B52B0:;
    sp = sp - 320;
    fp = t0 + 0;
    s6 = a1 + 0;
    s5 = a3 + 0;
    s4 = a2 + 0;
    s2 = a0 + 0;
    f22 = f12;
    f21 = f12;
    s1 = LD32(a2+24);
    ST32(sp+108, t1);
    cnd_ = s1 == 0;
    ST8(t1, 0);
    if (cnd_) { goto L_088B55A0; }
    goto L_088B5314;
L_088B5314:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    v0 = D_08B2BDB4 - (-16972);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s3 = v0 - 16972;
    t0 = LD32(s1);
    goto L_088B5328;
L_088B5328:;
    v1 = D_08B2BDB4 - (-16972);
    a1 = LD32(v1-16972);
    v0 = t0 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + a1;
    v1 = LD32(a0);
    v0 = (t0 >> 1) & 0x7fff;
    t2 = LD32(s3+44);
    v1 = v1 + v0;
    t0 = t0 & 0x1;
    v1 = v1 << 3;
    t2 = t2 + v1;
    v0 = t0 << 2;
    v0 = v0 + t2;
    a3 = LD32(a0+4);
    a1 = LD_U16(v0);
    t1 = LD32(s3+56);
    v1 = 3;
    a1 = a3 + a1;
    a1 = a1 << 4;
    a1 = t1 + a1;
    a0 = LD32(a1);
    v0 = 1;
    if (t0 != 0) v0 = v1;
    ST32(sp, a0);
    v0 = v0 << 1;
    v0 = v0 + t2;
    v1 = LD32(a1+4);
    a2 = LD_U16(v0);
    v0 = 2;
    ST32(sp+4, v1);
    a2 = a3 + a2;
    if (t0 != 0) v0 = 0;
    v1 = LD32(a1+8);
    a2 = a2 << 4;
    v0 = v0 << 1;
    ST32(sp+8, v1);
    a2 = t1 + a2;
    v0 = v0 + t2;
    v1 = LD32(a1+12);
    t0 = LD_U16(v0);
    a0 = s2 + 0;
    ST32(sp+12, v1);
    a3 = a3 + t0;
    a3 = a3 << 4;
    v0 = LD32(a2);
    t1 = t1 + a3;
    {u32 a_=sp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+16, v0);
    s0 = 0 + 0;
    v0 = LD32(a2+4);
    ST32(sp+20, v0);
    v1 = LD32(a2+8);
    ST32(sp+24, v1);
    v0 = LD32(a2+12);
    ST32(sp+28, v0);
    v1 = LD32(t1);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    ST32(sp+32, v1);
    v0 = LD32(t1+4);
    ST32(sp+36, v0);
    v1 = LD32(t1+8);
    ST32(sp+40, v1);
    v0 = LD32(t1+12);
    ST32(sp+44, v0);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=s6+(0);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(208);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr16;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[20];float t1=v[21];float t2=v[22];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f20 = BITSF(v0);
    f0 = func_088B52A8(a0);
    goto L_088B5488;
L_088B5488:;
    {u32 a_=sp+(224);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(240);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    a0 = s2 + 0;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    f0 = func_088B52A8(a0);
    goto L_088B54E0;
L_088B54E0:;
    {u32 a_=sp+(224);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s2 + 0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    f0 = func_088B52A8(a0);
    goto L_088B5538;
L_088B5538:;
    {u32 a_=sp+(224);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(32);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    f0 = BITSF(0);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    fcc = FCMP(f20, f0, 14);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+40, v0);
    cnd_ = !fcc;
    ST32(sp+44, v1);
    if (cnd_) { goto L_088B57C0; }
    goto L_088B5594;
L_088B5594:;
    s1 = LD32(s1+12);
    cnd_ = s1 != 0;
    if (cnd_) { t0 = LD32(s1); goto L_088B5328; }
    goto L_088B55A0;
L_088B55A0:;
    s7 = LD32(s4+28);
    cnd_ = s7 == 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr16=(float)1;vr17=(float)1;vr18=(float)1;vr19=(float)1;}
    if (cnd_) { goto L_088B574C; }
    goto L_088B55AC;
L_088B55AC:;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    a2 = LD32(s7);
    goto L_088B55B4;
L_088B55B4:;
    a3 = LD32(s7+4);
    v0 = D_08B2BDB4 - (-16972);
    a0 = a2 >> 16;
    a1 = a3 >> 16;
    t0 = LD32(v0-16972);
    v1 = a1 << 3;
    v0 = a0 << 3;
    v0 = v0 - a0;
    v1 = v1 - a1;
    v0 = v0 << 3;
    v1 = v1 << 3;
    v1 = v1 + t0;
    v0 = v0 + t0;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    v1 = D_08B2BDB4 - (-16972);
    v1 = v1 - 16972;
    v0 = LD32(v1+56);
    a2 = a2 & 0xffff;
    a3 = a3 & 0xffff;
    a1 = a1 + a2;
    a0 = a0 + a3;
    a1 = a1 << 4;
    a0 = a0 << 4;
    s4 = v0 + a0;
    s3 = v0 + a1;
    s1 = 0 + 0;
    goto L_088B5620;
L_088B5620:;
    a0 = s2 + 0;
    v0 = func_088B5298(a0);
    goto L_088B5628;
L_088B5628:;
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088B5740; }
    goto L_088B5634;
L_088B5634:;
    {u32 a_=s6+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f21);
    {u32 a_=sp+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = func_088B52A8(a0);
    goto L_088B565C;
L_088B565C:;
    a0 = s2 + 0;
    f20 = f0;
    v0 = func_088B52A0(a0);
    goto L_088B5668;
L_088B5668:;
    v1 = s1 << 4;
    s0 = v0 + v1;
    f12 = f20;
    a0 = s0 + 0;
    a1 = sp + 64;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = sp + 80;
    t1 = sp + 104;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;__auto_type vr_t_ = func_088B10B8(a0, a1, a2, a3, t0, t1, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr_t_; });
    goto L_088B5690;
L_088B5690:;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_088B5620; }
    goto L_088B5698;
L_088B5698:;
    f0 = BITSF(LD32(sp+104));
    f0 = f0 * f21;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B5620; }
    goto L_088B56B0;
L_088B56B0:;
    v0 = FBITS(f0);
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    f21 = f0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+52);
    v0 = LD32(sp+48);
    a0 = LD32(sp+56);
    a1 = LD32(sp+60);
    ST32(s5, v0);
    v0 = (u32)-1;
    ST32(s5+4, v1);
    ST32(s5+8, a0);
    ST32(s5+12, a1);
    {u32 a_=s5+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v1 = LD32(sp+108);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr12;float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=s5+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(fp, v0);
    v0 = 1;
    ST8(v1, v0);
    goto L_088B5620;
L_088B5740:;
    s7 = LD32(s7+12);
    cnd_ = s7 != 0;
    if (cnd_) { a2 = LD32(s7); goto L_088B55B4; }
    goto L_088B574C;
L_088B574C:;
    fcc = FCMP(f21, f22, 2);
    cnd_ = fcc;
    f0 = f21;
    if (cnd_) { goto L_088B5784; }
    goto L_088B575C;
L_088B575C:;
    v0 = D_08AEC5FC - (-14852);
    f0 = BITSF(LD32(v0-14852));
    f1 = BITSF(0);
    f0 = f21 - f0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088B577C; }
    goto L_088B577C;
L_088B577C:;
    f21 = f1;
    f0 = f21;
    goto L_088B5784;
L_088B5784:;
    sp = sp + 320;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;return f0; }
L_088B57C0:;
    a0 = s2 + 0;
    v0 = func_088B5298(a0);
    goto L_088B57C8;
L_088B57C8:;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088B5594; }
    goto L_088B57D4;
L_088B57D4:;
    v0 = func_088B52A0(a0);
    goto L_088B57DC;
L_088B57DC:;
    v1 = s0 << 4;
    v0 = v0 + v1;
    a0 = v0 + 0;
    a1 = s6 + 0;
    a2 = sp + 0;
    a3 = sp + 16;
    t0 = sp + 32;
    t1 = sp + 96;
    t2 = sp + 100;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;__auto_type vr_t_ = func_088B0E58(a0, a1, a2, a3, t0, t1, t2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr_t_; });
    goto L_088B5804;
L_088B5804:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_088B57C0; }
    goto L_088B5810;
L_088B5810:;
    f20 = BITSF(LD32(sp+100));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_088B5880; }
    goto L_088B5824;
L_088B5824:;
    v0 = LD_U8(sp+96);
    fcc = FCMP(f20, f0, 14);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B5880; }
    goto L_088B5834;
L_088B5834:;
    cnd_ = !fcc;
    if (cnd_) { f0 = f20; goto L_088B583C; }
    goto L_088B583C;
L_088B583C:;
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    ST32(sp+100, FBITS(f0));
    if (cnd_) { goto L_088B5878; }
    goto L_088B584C;
L_088B584C:;
    a0 = LD32(sp+52);
    a1 = LD32(sp+56);
    a2 = LD32(sp+60);
    v0 = LD32(sp+48);
    v1 = LD32(s1);
    f21 = f0;
    ST32(s5, v0);
    ST32(fp, v1);
    ST32(s5+4, a0);
    ST32(s5+8, a1);
    ST32(s5+12, a2);
    goto L_088B5878;
L_088B5878:;
    s0 = s0 + 1;
    goto L_088B57C0;
L_088B5880:;
    f0 = func_088B52A8(a0);
    goto L_088B5888;
L_088B5888:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    s0 = s0 + 1;
    if (cnd_) { goto L_088B57C0; }
    goto L_088B589C;
L_088B589C:;
    a0 = LD32(sp+48);
    a1 = LD32(sp+52);
    a2 = LD32(sp+56);
    v0 = LD32(sp+60);
    v1 = LD32(s1);
    f0 = BITSF(0);
    ST32(s5+12, v0);
    ST32(fp, v1);
    ST32(s5, a0);
    ST32(s5+4, a1);
    ST32(s5+8, a2);
    goto L_088B5784;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;
}

/* 088B58CC */
float func_088B58CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_088B58CC:;
    sp = sp - 336;
    fp = a3 + 0;
    s4 = a0 + 0;
    f22 = f12;
    f21 = f12;
    s1 = LD32(a2+24);
    ST32(sp+112, a2);
    ST32(sp+108, a1);
    ST32(sp+116, t0);
    cnd_ = s1 == 0;
    ST32(sp+120, t1);
    if (cnd_) { goto L_088B5BC0; }
    goto L_088B592C;
L_088B592C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    v0 = D_08B2BDB4 - (-16972);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s2 = v0 - 16972;
    t0 = LD32(s1);
    goto L_088B5940;
L_088B5940:;
    v1 = D_08B2BDB4 - (-16972);
    a1 = LD32(v1-16972);
    v0 = t0 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + a1;
    v1 = LD32(a0);
    v0 = (t0 >> 1) & 0x7fff;
    t2 = LD32(s2+44);
    v1 = v1 + v0;
    t0 = t0 & 0x1;
    v1 = v1 << 3;
    t2 = t2 + v1;
    v0 = t0 << 2;
    v0 = v0 + t2;
    a3 = LD32(a0+4);
    a1 = LD_U16(v0);
    t1 = LD32(s2+56);
    v1 = 3;
    a1 = a3 + a1;
    a1 = a1 << 4;
    a1 = t1 + a1;
    a0 = LD32(a1);
    v0 = 1;
    if (t0 != 0) v0 = v1;
    ST32(sp, a0);
    v0 = v0 << 1;
    v0 = v0 + t2;
    v1 = LD32(a1+4);
    a2 = LD_U16(v0);
    v0 = 2;
    ST32(sp+4, v1);
    a2 = a3 + a2;
    if (t0 != 0) v0 = 0;
    v1 = LD32(a1+8);
    a2 = a2 << 4;
    v0 = v0 << 1;
    ST32(sp+8, v1);
    a2 = t1 + a2;
    v0 = v0 + t2;
    v1 = LD32(a1+12);
    t0 = LD_U16(v0);
    a0 = s4 + 0;
    ST32(sp+12, v1);
    a3 = a3 + t0;
    a3 = a3 << 4;
    v0 = LD32(a2);
    t1 = t1 + a3;
    {u32 a_=sp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+16, v0);
    s0 = 0 + 0;
    s3 = 1;
    v0 = LD32(a2+4);
    ST32(sp+20, v0);
    v1 = LD32(a2+8);
    ST32(sp+24, v1);
    v0 = LD32(a2+12);
    ST32(sp+28, v0);
    v1 = LD32(t1);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    ST32(sp+32, v1);
    v0 = LD32(t1+4);
    ST32(sp+36, v0);
    v1 = LD32(t1+8);
    ST32(sp+40, v1);
    v0 = LD32(t1+12);
    ST32(sp+44, v0);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v0 = LD32(sp+108);
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(224);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=v0+(0);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr16;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[20];float t1=v[21];float t2=v[22];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f20 = BITSF(v0);
    f0 = func_088B52A8(a0);
    goto L_088B5AA8;
L_088B5AA8:;
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(256);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    a0 = s4 + 0;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    f0 = func_088B52A8(a0);
    goto L_088B5B00;
L_088B5B00:;
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s4 + 0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    f0 = func_088B52A8(a0);
    goto L_088B5B58;
L_088B5B58:;
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(32);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    f0 = BITSF(0);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    fcc = FCMP(f20, f0, 14);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+40, v0);
    cnd_ = !fcc;
    ST32(sp+44, v1);
    if (cnd_) { goto L_088B5FD8; }
    goto L_088B5BB4;
L_088B5BB4:;
    s1 = LD32(s1+12);
    cnd_ = s1 != 0;
    if (cnd_) { t0 = LD32(s1); goto L_088B5940; }
    goto L_088B5BC0;
L_088B5BC0:;
    v0 = LD32(sp+112);
    v0 = LD32(v0+28);
    cnd_ = v0 == 0;
    ST32(sp+176, v0);
    if (cnd_) { goto L_088B5F64; }
    goto L_088B5BD0;
L_088B5BD0:;
    v1 = LD32(sp+176);
    v0 = D_08B2BDB4 - (-16972);
    t0 = LD32(v0-16972);
    a2 = LD32(v1);
    a3 = LD32(v1+4);
    s6 = 0 + 0;
    a0 = a2 >> 16;
    a1 = a3 >> 16;
    v0 = a0 << 3;
    v1 = a1 << 3;
    v0 = v0 - a0;
    v1 = v1 - a1;
    v0 = v0 << 3;
    v1 = v1 << 3;
    v1 = v1 + t0;
    v0 = v0 + t0;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    v1 = D_08B2BDB4 - (-16972);
    v1 = v1 - 16972;
    v0 = LD32(v1+56);
    a2 = a2 & 0xffff;
    a3 = a3 & 0xffff;
    a1 = a1 + a2;
    a0 = a0 + a3;
    a1 = a1 << 4;
    a0 = a0 << 4;
    s7 = v0 + a0;
    s3 = v0 + a1;
    goto L_088B5C44;
L_088B5C44:;
    a0 = s4 + 0;
    v0 = func_088B5298(a0);
    goto L_088B5C4C;
L_088B5C4C:;
    v0 = s6 < v0;
    cnd_ = v0 == 0;
    v0 = LD32(sp+108);
    if (cnd_) { goto L_088B5F54; }
    goto L_088B5C58;
L_088B5C58:;
    v1 = FBITS(f21);
    {u32 a_=sp+(192);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a0 = s4 + 0;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = func_088B52A8(a0);
    goto L_088B5C84;
L_088B5C84:;
    a0 = s4 + 0;
    f20 = f0;
    v0 = func_088B52A0(a0);
    goto L_088B5C90;
L_088B5C90:;
    v1 = s6 << 4;
    s0 = v0 + v1;
    f12 = f20;
    a0 = s0 + 0;
    a1 = sp + 64;
    a2 = s3 + 0;
    a3 = s7 + 0;
    t0 = sp + 80;
    t1 = sp + 104;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;__auto_type vr_t_ = func_088B10B8(a0, a1, a2, a3, t0, t1, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr_t_; });
    goto L_088B5CB8;
L_088B5CB8:;
    cnd_ = v0 == 0;
    if (cnd_) { s6 = s6 + 1; goto L_088B5C44; }
    goto L_088B5CC0;
L_088B5CC0:;
    f0 = BITSF(LD32(sp+104));
    f0 = f0 * f21;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { s6 = s6 + 1; goto L_088B5C44; }
    goto L_088B5CD8;
L_088B5CD8:;
    v0 = FBITS(f0);
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = LD32(sp+112);
    {u32 a_=sp+(80);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    v1 = LD32(sp+116);
    s1 = LD32(v0+24);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    ST32(v1, 0);
    f21 = f0;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr4;float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    cnd_ = s1 == 0;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    if (cnd_) { goto L_088B5F48; }
    goto L_088B5D44;
L_088B5D44:;
    v0 = D_08AEC600 - (-14848);
    f20 = BITSF(LD32(v0-14848));
    v1 = D_08B2BDB4 - (-16972);
    s2 = v1 - 16972;
    s0 = 0 + 0;
    s5 = 2;
    t3 = LD32(s2+44);
    goto L_088B5D60;
L_088B5D60:;
    t2 = 0 + 0;
    t0 = 0 + 0;
    a0 = LD32(s1);
    goto L_088B5D6C;
L_088B5D6C:;
    v0 = D_08B2BDB4 - (-16972);
    a1 = LD32(v0-16972);
    v1 = a0 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    a2 = v0 + a1;
    v1 = LD32(a2);
    v0 = (a0 >> 1) & 0x7fff;
    a0 = a0 & 0x1;
    v1 = v1 + v0;
    v1 = v1 << 3;
    t1 = t0 + 2;
    a1 = t0 ^ s5;
    a3 = t3 + v1;
    cnd_ = a0 == 0;
    v0 = t0 + 0;
    if (cnd_) { goto L_088B5DB8; }
    goto L_088B5DB0;
L_088B5DB0:;
    v0 = 0 + 0;
    if (a1 != 0) v0 = t1;
    goto L_088B5DB8;
L_088B5DB8:;
    a0 = v0 << 1;
    a0 = a0 + a3;
    v0 = LD_U16(a0);
    v1 = LD32(a2+4);
    a1 = LD32(s2+56);
    {u32 a_=s3+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v1 = v1 + v0;
    v1 = v1 << 4;
    v0 = a1 + v1;
    {u32 a_=v0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088B5E28; }
    goto L_088B5E00;
L_088B5E00:;
    {u32 a_=v0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=s7+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B5E2C; }
    goto L_088B5E28;
L_088B5E28:;
    t2 = t2 + 1;
    goto L_088B5E2C;
L_088B5E2C:;
    t0 = t0 + 1;
    v0 = t0 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1); goto L_088B5D6C; }
    goto L_088B5E3C;
L_088B5E3C:;
    cnd_ = t2 == s5;
    if (cnd_) { v1 = LD32(sp+120); goto L_088B5E98; }
    goto L_088B5E44;
L_088B5E44:;
    s1 = LD32(s1+12);
    goto L_088B5E48;
L_088B5E48:;
    cnd_ = s1 != 0;
    if (cnd_) { t3 = LD32(s2+44); goto L_088B5D60; }
    goto L_088B5E50;
L_088B5E50:;
    cnd_ = s0 != 0;
    s6 = s6 + 1;
    if (cnd_) { goto L_088B5C44; }
    goto L_088B5E58;
L_088B5E58:;
    v1 = LD32(sp+48);
    a0 = LD32(sp+52);
    a1 = LD32(sp+56);
    a2 = LD32(sp+60);
    ST32(fp, v1);
    v0 = (u32)-1;
    v1 = LD32(sp+116);
    ST32(fp+20, v0);
    v0 = 1;
    ST32(fp+16, 0);
    ST32(fp+4, a0);
    ST32(fp+8, a1);
    ST32(fp+12, a2);
    ST32(v1, v0);
    ST8(fp+24, v0);
    goto L_088B5C44;
L_088B5E98:;
    v0 = s0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(s1+12); goto L_088B5E48; }
    goto L_088B5EA4;
L_088B5EA4:;
    a2 = LD32(s1);
    v0 = D_08B2BDB4 - (-16972);
    a1 = LD32(v0-16972);
    v1 = a2 >> 16;
    v0 = v1 << 3;
    s0 = s0 << 5;
    s0 = s0 + fp;
    v0 = v0 - v1;
    v1 = 1;
    ST8(s0+24, v1);
    v0 = v0 << 3;
    a1 = a1 + v0;
    v0 = D_08B2BDB4 - (-16972);
    a2 = (a2 >> 1) & 0x7fff;
    a0 = v0 - 16972;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B5EE4;
L_088B5EE4:;
    v0 = v0 & 0xffff;
    ST32(s0+16, v0);
    v1 = LD32(sp+116);
    a3 = LD32(sp+48);
    a1 = LD32(sp+52);
    v0 = LD32(v1);
    v1 = LD32(s1);
    a2 = LD32(sp+56);
    v0 = v0 << 5;
    v0 = v0 + fp;
    ST32(v0+20, v1);
    v0 = LD32(sp+116);
    a0 = LD32(v0);
    v0 = LD32(sp+60);
    v1 = a0 << 5;
    v1 = v1 + fp;
    ST32(v1+12, v0);
    a0 = a0 + 1;
    s0 = a0 + 0;
    ST32(v1, a3);
    ST32(v1+4, a1);
    ST32(v1+8, a2);
    v1 = LD32(sp+116);
    ST32(v1, a0);
    goto L_088B5E44;
L_088B5F48:;
    v0 = LD32(sp+116);
    s0 = LD32(v0);
    goto L_088B5E50;
L_088B5F54:;
    v1 = LD32(sp+176);
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    ST32(sp+176, v1);
    if (cnd_) { goto L_088B5BD0; }
    goto L_088B5F64;
L_088B5F64:;
    fcc = FCMP(f21, f22, 2);
    cnd_ = fcc;
    f0 = f21;
    if (cnd_) { goto L_088B5F9C; }
    goto L_088B5F74;
L_088B5F74:;
    v0 = D_08AEC604 - (-14844);
    f0 = BITSF(LD32(v0-14844));
    f1 = BITSF(0);
    f0 = f21 - f0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088B5F94; }
    goto L_088B5F94;
L_088B5F94:;
    f21 = f1;
    f0 = f21;
    goto L_088B5F9C;
L_088B5F9C:;
    sp = sp + 336;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;return f0; }
L_088B5FD8:;
    a0 = s4 + 0;
    v0 = func_088B5298(a0);
    goto L_088B5FE0;
L_088B5FE0:;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_088B5BB4; }
    goto L_088B5FEC;
L_088B5FEC:;
    v0 = func_088B52A0(a0);
    goto L_088B5FF4;
L_088B5FF4:;
    v1 = s0 << 4;
    a1 = LD32(sp+108);
    v0 = v0 + v1;
    a0 = v0 + 0;
    a2 = sp + 0;
    a3 = sp + 16;
    t0 = sp + 32;
    t1 = sp + 96;
    t2 = sp + 100;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;__auto_type vr_t_ = func_088B0E58(a0, a1, a2, a3, t0, t1, t2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr_t_; });
    goto L_088B601C;
L_088B601C:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_088B5FD8; }
    goto L_088B6028;
L_088B6028:;
    f20 = BITSF(LD32(sp+100));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_088B60DC; }
    goto L_088B603C;
L_088B603C:;
    v0 = LD_U8(sp+96);
    fcc = FCMP(f20, f0, 14);
    cnd_ = v0 == 0;
    v0 = D_08B2BDB4 - (-16972);
    if (cnd_) { goto L_088B60DC; }
    goto L_088B604C;
L_088B604C:;
    cnd_ = fcc;
    a0 = v0 - 16972;
    if (cnd_) { goto L_088B6058; }
    goto L_088B6054;
L_088B6054:;
    f0 = f20;
    goto L_088B6058;
L_088B6058:;
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    ST32(sp+100, FBITS(f0));
    if (cnd_) { goto L_088B6070; }
    goto L_088B6068;
L_088B6068:;
    s0 = s0 + 1;
    goto L_088B5FD8;
L_088B6070:;
    a2 = LD32(s1);
    v1 = D_08B2BDB4 - (-16972);
    a1 = LD32(v1-16972);
    v1 = a2 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    ST8(fp+24, 0);
    v0 = v0 << 3;
    a1 = a1 + v0;
    a2 = (a2 >> 1) & 0x7fff;
    f21 = f0;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B60A0;
L_088B60A0:;
    v0 = v0 & 0xffff;
    ST32(fp+16, v0);
    v0 = LD32(sp+48);
    a0 = LD32(sp+52);
    a1 = LD32(sp+56);
    a2 = LD32(sp+60);
    v1 = LD32(s1);
    ST32(fp, v0);
    v0 = LD32(sp+116);
    ST32(fp+20, v1);
    ST32(fp+4, a0);
    ST32(fp+8, a1);
    ST32(fp+12, a2);
    ST32(v0, s3);
    goto L_088B6068;
L_088B60DC:;
    f0 = func_088B52A8(a0);
    goto L_088B60E4;
L_088B60E4:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    s0 = s0 + 1;
    if (cnd_) { goto L_088B5FD8; }
    goto L_088B60F8;
L_088B60F8:;
    a2 = LD32(s1);
    v1 = D_08B2BDB4 - (-16972);
    a1 = LD32(v1-16972);
    v1 = a2 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    ST8(fp+24, 0);
    a1 = a1 + v0;
    v0 = D_08B2BDB4 - (-16972);
    a2 = (a2 >> 1) & 0x7fff;
    a0 = v0 - 16972;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B612C;
L_088B612C:;
    v0 = v0 & 0xffff;
    ST32(fp+16, v0);
    f0 = BITSF(0);
    v0 = LD32(sp+60);
    v1 = LD32(s1);
    a0 = LD32(sp+48);
    a1 = LD32(sp+52);
    a2 = LD32(sp+56);
    ST32(fp+20, v1);
    v1 = LD32(sp+116);
    ST32(fp+12, v0);
    ST32(v1, s3);
    ST32(fp, a0);
    ST32(fp+4, a1);
    ST32(fp+8, a2);
    goto L_088B5F9C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;
}

/* 088B616C */
void func_088B616C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36];
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_088B616C:;
    {u32 a_=a1+(0);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f1 = BITSF(0);
    {u32 a_=a3+(0);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    sp = sp - 144;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f5 = BITSF(v0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    fcc = FCMP(f0, f1, 14);
    {v0=FBITS(vr0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    f0 = BITSF(v0);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f7 = BITSF(v0);
    cnd_ = !fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B61FC; }
    goto L_088B61C4;
L_088B61C4:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;} goto L_088B6200; }
    goto L_088B61D4;
L_088B61D4:;
    v0 = LD32(a1);
    ST32(t0, v0);
    v1 = LD32(a1+4);
    ST32(t0+4, v1);
    v0 = LD32(a1+8);
    ST32(t0+8, v0);
    v1 = LD32(a1+12);
    goto L_088B61F0;
L_088B61F0:;
    ST32(t0+12, v1);
    goto L_088B61F4;
L_088B61F4:;
    sp = sp + 144;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;return; }
L_088B61FC:;
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    goto L_088B6200;
L_088B6200:;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    fcc = FCMP(f1, f0, 14);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f8 = BITSF(v0);
    cnd_ = !fcc;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088B6268; }
    goto L_088B6238;
L_088B6238:;
    fcc = FCMP(f0, f4, 14);
    cnd_ = !fcc;
    f1 = f5 * f8;
    if (cnd_) { goto L_088B626C; }
    goto L_088B6248;
L_088B6248:;
    v0 = LD32(a2);
    ST32(t0, v0);
    v1 = LD32(a2+4);
    ST32(t0+4, v1);
    v0 = LD32(a2+8);
    ST32(t0+8, v0);
    v1 = LD32(a2+12);
    goto L_088B61F0;
L_088B6268:;
    f1 = f5 * f8;
    goto L_088B626C;
L_088B626C:;
    f0 = f4 * f7;
    f2 = BITSF(0);
    f9 = f1 - f0;
    fcc = FCMP(f9, f2, 14);
    cnd_ = !fcc;
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    if (cnd_) { goto L_088B62F0; }
    goto L_088B6288;
L_088B6288:;
    fcc = FCMP(f2, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B62F0; }
    goto L_088B6298;
L_088B6298:;
    fcc = FCMP(f4, f2, 14);
    cnd_ = !fcc;
    f0 = f5 - f4;
    if (cnd_) { goto L_088B62F0; }
    goto L_088B62A8;
L_088B62A8:;
    f0 = f5 / f0;
    v0 = FBITS(f0);
    {vr32=BITSF(v0);}
    {float s0=vr32;float s1=vr32;float s2=vr32;float s3=vr32;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr32;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B62C8;
L_088B62C8:;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a0 = LD32(sp+68);
    a1 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    goto L_088B62DC;
L_088B62DC:;
    ST32(t0, v0);
    ST32(t0+12, v1);
    ST32(t0+4, a0);
    ST32(t0+8, a1);
    goto L_088B61F4;
L_088B62F0:;
    f1 = BITSF(0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    fcc = FCMP(f1, f0, 14);
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    f6 = BITSF(v0);
    cnd_ = !fcc;
    f1 = f5 * f3;
    if (cnd_) { goto L_088B6354; }
    goto L_088B6324;
L_088B6324:;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    f0 = f6 * f7;
    if (cnd_) { goto L_088B6358; }
    goto L_088B6334;
L_088B6334:;
    v0 = LD32(a3);
    ST32(t0, v0);
    v1 = LD32(a3+4);
    ST32(t0+4, v1);
    v0 = LD32(a3+8);
    ST32(t0+8, v0);
    v1 = LD32(a3+12);
    goto L_088B61F0;
L_088B6354:;
    f0 = f6 * f7;
    goto L_088B6358;
L_088B6358:;
    f2 = BITSF(0);
    f5 = f0 - f1;
    fcc = FCMP(f5, f2, 14);
    cnd_ = !fcc;
    f1 = f4 * f3;
    if (cnd_) { goto L_088B63B8; }
    goto L_088B6370;
L_088B6370:;
    fcc = FCMP(f2, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B63B8; }
    goto L_088B6380;
L_088B6380:;
    fcc = FCMP(f3, f2, 14);
    cnd_ = !fcc;
    f0 = f6 * f8;
    if (cnd_) { goto L_088B63BC; }
    goto L_088B6390;
L_088B6390:;
    f0 = f7 - f3;
    f0 = f7 / f0;
    v0 = FBITS(f0);
    {vr32=BITSF(v0);}
    {float s0=vr32;float s1=vr32;float s2=vr32;float s3=vr32;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr32;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B62C8;
L_088B63B8:;
    f0 = f6 * f8;
    goto L_088B63BC;
L_088B63BC:;
    f7 = BITSF(0);
    f1 = f1 - f0;
    fcc = FCMP(f1, f7, 14);
    cnd_ = !fcc;
    f2 = f1 + f5;
    if (cnd_) { goto L_088B6440; }
    goto L_088B63D4;
L_088B63D4:;
    f2 = f8 - f4;
    fcc = FCMP(f7, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f1 + f5; goto L_088B6440; }
    goto L_088B63E8;
L_088B63E8:;
    f0 = f6 - f3;
    fcc = FCMP(f7, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f1 + f5; goto L_088B6440; }
    goto L_088B63FC;
L_088B63FC:;
    f0 = f2 + f0;
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    f0 = f2 / f0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = FBITS(f0);
    {vr32=BITSF(v0);}
    {float s0=vr32;float s1=vr32;float s2=vr32;float s3=vr32;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr32;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a0 = LD32(sp+100);
    a1 = LD32(sp+104);
    v1 = LD32(sp+108);
    v0 = LD32(sp+96);
    goto L_088B62DC;
L_088B6440:;
    v0 = D_08AEC608 - (-14840);
    f0 = BITSF(LD32(v0-14840));
    f2 = f2 + f9;
    f0 = f0 / f2;
    f1 = f5 * f0;
    f0 = f9 * f0;
    v0 = FBITS(f1);
    {vr32=BITSF(v0);}
    {float s0=vr32;float s1=vr32;float s2=vr32;float s3=vr32;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr32;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    v0 = FBITS(f0);
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr36;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(sp+116);
    a1 = LD32(sp+120);
    v1 = LD32(sp+124);
    v0 = LD32(sp+112);
    goto L_088B62DC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;
}

/* 088B64AC */
float func_088B64AC(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088B64AC:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B64D8; }
    goto L_088B64C4;
L_088B64C4:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B64D8; }
    goto L_088B64D8;
L_088B64D8:;
    return f0;
}

/* 088B64E0 */
u32 func_088B64E0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088B64E0:;
    a0 = LD32(a0);
    v1 = LD32(a1);
    v0 = a0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B6500; }
    goto L_088B64F4;
L_088B64F4:;
    v1 = LD32(a2);
    v0 = v1 < a0;
    if (v0 == 0) v1 = a0;
    goto L_088B6500;
L_088B6500:;
    v0 = v1 + 0;
    return v0;
}

/* 088B6508 */
void func_088B6508(u32 a0, u32 a1)
{
L_088B6508:;
    ST32(a0+8, a1);
    return;
}

/* 088B6510 */
void func_088B6510(void)
{
L_088B6510:;
    return;
}

/* 088B6518 */
void func_088B6518(u32 a0)
{
L_088B6518:;
    ST8(a0+4, 0);
    ST32(a0, 0);
    return;
}

/* 088B6524 */
void func_088B6524(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088B6524:;
    v1 = LD32(a0+8);
    a1 = LD32(a0);
    v0 = LD32(v1+48);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    a2 = a1 << 3;
    if (cnd_) { goto L_088B6574; }
    goto L_088B653C;
L_088B653C:;
    v1 = LD32(v1+52);
    v1 = v1 + a2;
    v0 = LD_U16(v1+6);
    v0 = v0 ^ 0xffff;
    cnd_ = v0 == 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_088B656C; }
    goto L_088B6554;
L_088B6554:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0, a1); goto L_088B6570; }
    goto L_088B6560;
L_088B6560:;
    v0 = 1;
    ST8(a0+4, v0);
    return;
L_088B656C:;
    ST32(a0, a1);
    goto L_088B6570;
L_088B6570:;
    ST8(a0+4, 0);
    goto L_088B6574;
L_088B6574:;
    return;
}

/* 088B657C */
u32 func_088B657C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t2 = 0, t4 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_088B657C:;
    a3 = LD32(a0+8);
    v0 = LD32(a0);
    v1 = LD32(a3+48);
    t0 = v0 << 3;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088B6648; }
    goto L_088B6598;
L_088B6598:;
    v0 = LD_U8(a0+4);
    v1 = LD32(a3+52);
    t2 = a1 + 16;
    v0 = v0 ^ 0x1;
    t4 = a1 + 32;
    cnd_ = v0 == 0;
    a2 = v1 + t0;
    if (cnd_) { goto L_088B6650; }
    goto L_088B65B4;
L_088B65B4:;
    a0 = LD_U16(a2);
    v1 = LD32(a3+44);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(a1, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(a1+4, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(a1+8, FBITS(f0));
    a0 = LD_U16(a2+2);
    v1 = LD32(a3+44);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(a1+16, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(t2+4, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(t2+8, FBITS(f0));
    a0 = LD_U16(a2+4);
    goto L_088B6618;
L_088B6618:;
    v1 = LD32(a3+44);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(a1+32, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(t4+4, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(t4+8, FBITS(f0));
    a2 = 1;
    goto L_088B6648;
L_088B6648:;
    v0 = a2 + 0;
    return v0;
L_088B6650:;
    a0 = LD_U16(a2+4);
    v1 = LD32(a3+44);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(a1, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(a1+4, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(a1+8, FBITS(f0));
    a0 = LD_U16(a2+6);
    v1 = LD32(a3+44);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(a1+16, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(t2+4, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(t2+8, FBITS(f0));
    a0 = LD_U16(a2);
    goto L_088B6618;
}

/* 088B66B8 */
u32 func_088B66B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B66B8:;
    sp = sp - 16;
    a1 = LD32(a0+8);
    v0 = LD32(a0);
    v1 = LD32(a1+48);
    a0 = a1 + 0;
    a1 = v0 + 0;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088B66F0; }
    goto L_088B66E0;
L_088B66E0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_088B66F0:;
    { rv_t r_ = func_08AB26C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B66F8;
L_088B66F8:;
    a2 = v0 & 0xffff;
    goto L_088B66E0;
}

/* 088B6700 */
void func_088B6700(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B6700:;
    sp = sp - 16;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B6710;
L_088B6710:;
    v1 = D_08B2BD88 - (-17016);
    ST32(v1-17016, v0);
    a0 = 8;
    v1 = 144;
    ST32(v0+4, a0);
    ST32(v0+8, v1);
    ST32(v0, 0);
    sp = sp + 16;
    return;
}

/* 088B6738 */
void func_088B6738(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B6738:;
    sp = sp - 16;
    v0 = D_08B2BD88 - (-17016);
    s2 = LD32(v0-17016);
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    if (cnd_) {  goto L_088B6794; }
    goto L_088B6760;
L_088B6760:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088B6794; }
    goto L_088B676C;
L_088B676C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088B67C0; }
    goto L_088B6778;
L_088B6778:;
    s1 = LD32(s0+12);
    goto L_088B677C;
L_088B677C:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088B67A8; }
    goto L_088B6784;
L_088B6784:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B678C;
L_088B678C:;
    ST32(s2, 0);
    goto L_088B6794;
L_088B6794:;
    sp = sp + 16;
    return;
L_088B67A8:;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088B67B0;
L_088B67B0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B67B8;
L_088B67B8:;
    goto L_088B6784;
L_088B67C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B67C8;
L_088B67C8:;
    s1 = LD32(s0+12);
    goto L_088B677C;
}

/* 088B67D0 */
void func_088B67D0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B67D0:;
    sp = sp - 32;
    s3 = D_08B2BD88 - (-17016);
    s0 = LD32(s3-17016);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088B6828; }
    goto L_088B67F4;
L_088B67F4:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088B6820; }
    goto L_088B6800;
L_088B6800:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088B6860; }
    goto L_088B680C;
L_088B680C:;
    s1 = LD32(s2+12);
    goto L_088B6810;
L_088B6810:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088B6848; }
    goto L_088B6818;
L_088B6818:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6820;
L_088B6820:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6828;
L_088B6828:;
    ST32(s3-17016, 0);
    sp = sp + 32;
    return;
L_088B6848:;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088B6850;
L_088B6850:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6858;
L_088B6858:;
    goto L_088B6818;
L_088B6860:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6868;
L_088B6868:;
    s1 = LD32(s2+12);
    goto L_088B6810;
}

/* 088B6870 */
u32 func_088B6870(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B6870:;
    sp = sp - 16;
    v0 = D_08B2BD88 - (-17016);
    a1 = 0 + 0;
    v1 = LD32(v0-17016);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088B68AC; }
    goto L_088B688C;
L_088B688C:;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B6894;
L_088B6894:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088B68AC; }
    goto L_088B689C;
L_088B689C:;
    ST8(v0+116, 0);
    a1 = v0 + 0;
    ST32(v0+128, 0);
    ST32(v0+124, 0);
    goto L_088B68AC;
L_088B68AC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088B68BC */
u64 func_088B68BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B68BC:;
    sp = sp - 16;
    v0 = D_08B2BD88 - (-17016);
    v0 = LD32(v0-17016);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088B68E8; }
    goto L_088B68D4;
L_088B68D4:;
    a0 = v0 + 0;
    cnd_ = v1 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_088B68E8; }
    goto L_088B68E0;
L_088B68E0:;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B68E8;
L_088B68E8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B68F4 */
u32 func_088B68F4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B68F4:;
    a0 = D_08B2BD8C - (-17012);
    sp = sp - 16;
    a0 = a0 - 17012;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B6908;
L_088B6908:;
    cnd_ = v0 == 0;
    v1 = D_08AEC60C - (-14836);
    if (cnd_) { goto L_088B6920; }
    goto L_088B6910;
L_088B6910:;
    f0 = BITSF(LD32(v1-14836));
    ST32(v0+4, 0);
    ST32(v0, 0);
    ST32(v0+8, FBITS(f0));
    goto L_088B6920;
L_088B6920:;
    sp = sp + 16;
    return v0;
}

/* 088B692C */
u64 func_088B692C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B692C:;
    a1 = a0 + 0;
    a0 = D_08B2BD8C - (-17012);
    sp = sp - 16;
    a0 = a0 - 17012;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6944;
L_088B6944:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B6950 */
u64 func_088B6950(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B6950:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v1 = a1 & a0;
    a2 = D_08B2BD8C - (-17012);
    a1 = a1 & v0;
    a0 = a2 - 17012;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088B699C; }
    goto L_088B6988;
L_088B6988:;
    v0 = 272;
    ST32(a0+8, v0);
    v0 = 16;
    ST32(a2-17012, 0);
    ST32(a0+4, v0);
    goto L_088B699C;
L_088B699C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088B69D8; }
    goto L_088B69A4;
L_088B69A4:;
    v0 = D_08B2BD8C - (-17012);
    s1 = LD32(v0-17012);
    cnd_ = s1 == 0;
    if (cnd_) {  goto L_088B69DC; }
    goto L_088B69B4;
L_088B69B4:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088B6A00; }
    goto L_088B69C0;
L_088B69C0:;
    s0 = LD32(s1+12);
    goto L_088B69C4;
L_088B69C4:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B69E8; }
    goto L_088B69CC;
L_088B69CC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B69D4;
L_088B69D4:;
    goto L_088B69D8;
L_088B69D8:;
    goto L_088B69DC;
L_088B69DC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088B69E8:;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088B69F0;
L_088B69F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B69F8;
L_088B69F8:;
    goto L_088B69CC;
L_088B6A00:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6A08;
L_088B6A08:;
    s0 = LD32(s1+12);
    goto L_088B69C4;
}

/* 088B6A10 */
rv_t func_088B6A10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B6A10:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088B6950(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6A24;
L_088B6A24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B6A30 */
rv_t func_088B6A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B6A30:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088B6950(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B6A44;
L_088B6A44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B6A50 */
rv_t func_088B6A50(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B6A50:;
    f3 = BITSF(0);
    sp = sp - 32;
    t0 = 0 + 0;
    a3 = sp + 0;
    goto L_088B6A60;
L_088B6A60:;
    v0 = t0 << 2;
    v1 = v0 + a0;
    f0 = BITSF(LD32(v1));
    v0 = v0 + a1;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    f2 = BITSF(LD32(v0));
    if (cnd_) { goto L_088B6B28; }
    goto L_088B6A80;
L_088B6A80:;
    f0 = BITSF(LD32(a2));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_088B6A88;
L_088B6A88:;
    f0 = f0 - f2;
    f1 = f1 - f2;
    t0 = t0 + 1;
    v0 = (s32)t0 < 3;
    ST32(a3+16, FBITS(f0));
    a2 = a2 + 4;
    ST32(a3, FBITS(f1));
    cnd_ = v0 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_088B6A60; }
    goto L_088B6AAC;
L_088B6AAC:;
    f5 = BITSF(LD32(a0));
    f4 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(a0+8));
    f0 = f5 * f0;
    f2 = f4 * f2;
    f1 = BITSF(LD32(sp+8));
    f6 = BITSF(0);
    f0 = f0 + f2;
    f1 = f3 * f1;
    f0 = f0 + f1;
    fcc = FCMP(f6, f0, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088B6B20; }
    goto L_088B6AEC;
L_088B6AEC:;
    f0 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f0 = f5 * f0;
    f2 = f4 * f2;
    f1 = f3 * f1;
    f0 = f0 + f2;
    f0 = f0 + f1;
    fcc = FCMP(f6, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088B6B20; }
    goto L_088B6B1C;
L_088B6B1C:;
    v0 = 0 + 0;
    goto L_088B6B20;
L_088B6B20:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088B6B28:;
    f1 = BITSF(LD32(a2));
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_088B6A88;
}

/* 088B6B34 */
rv_t func_088B6B34(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088B6B34:;
    sp = sp - 176;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    f8 = BITSF(LD32(a2+4));
    f9 = BITSF(LD32(a2+8));
    f10 = BITSF(LD32(a2+16));
    f11 = BITSF(LD32(a2+20));
    f7 = BITSF(LD32(a2+32));
    f6 = BITSF(LD32(a2+28));
    f2 = BITSF(LD32(a2+12));
    f8 = f8 - f1;
    f9 = f9 - f0;
    f7 = f7 - f0;
    f6 = f6 - f1;
    f10 = f10 - f1;
    f11 = f11 - f0;
    f1 = BITSF(LD32(a2));
    f0 = BITSF(LD32(a0));
    f14 = f10 - f8;
    f13 = f11 - f9;
    f1 = f1 - f0;
    f2 = f2 - f0;
    f12 = f14 * f9;
    f15 = f14 * f7;
    f5 = f13 * f6;
    f20 = f2 - f1;
    f4 = f13 * f8;
    f3 = BITSF(LD32(a2+24));
    f21 = f5 - f15;
    v1 = FBITS(f20);
    f22 = f4 - f12;
    f3 = f3 - f0;
    v0 = (v1 >> 0) & 0x7fffffff;
    v1 = FBITS(f14);
    f15 = f6 - f10;
    f12 = f3 - f2;
    v1 = (v1 >> 0) & 0x7fffffff;
    f19 = f1 - f3;
    f16 = f7 - f11;
    f17 = f8 - f6;
    f18 = f9 - f7;
    f4 = BITSF(v1);
    fcc = FCMP(f22, f21, 12);
    v1 = FBITS(f13);
    ST32(sp+80, FBITS(f12));
    f12 = f22;
    v1 = (v1 >> 0) & 0x7fffffff;
    ST32(sp+84, FBITS(f15));
    f5 = BITSF(v1);
    f15 = f21;
    ST32(sp+88, FBITS(f16));
    ST32(sp+96, FBITS(f19));
    ST32(sp+100, FBITS(f17));
    ST32(sp+104, FBITS(f18));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f8));
    ST32(sp+8, FBITS(f9));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f10));
    ST32(sp+24, FBITS(f11));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f6));
    ST32(sp+40, FBITS(f7));
    ST32(sp+64, FBITS(f20));
    ST32(sp+68, FBITS(f14));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f13));
    if (cnd_) { goto L_088B6C78; }
    goto L_088B6C70;
L_088B6C70:;
    f12 = f21;
    f15 = f22;
    goto L_088B6C78;
L_088B6C78:;
    f7 = BITSF(LD32(a1+4));
    f6 = BITSF(LD32(a1+8));
    f1 = f5 * f7;
    f0 = f4 * f6;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6C9C;
L_088B6C9C:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6CB0;
L_088B6CB0:;
    f17 = BITSF(LD32(sp+72));
    f11 = BITSF(LD32(sp+64));
    f14 = BITSF(LD32(sp));
    f0 = BITSF(FBITS(f17) ^ 0x80000000u);
    f16 = BITSF(LD32(sp+8));
    f10 = BITSF(LD32(sp+32));
    f13 = BITSF(LD32(sp+40));
    f3 = f0 * f14;
    f1 = f11 * f16;
    f0 = f0 * f10;
    f2 = f11 * f13;
    f22 = f3 + f1;
    f21 = f0 + f2;
    f12 = f22;
    fcc = FCMP(f22, f21, 12);
    cnd_ = fcc;
    f15 = f21;
    if (cnd_) { goto L_088B6D00; }
    goto L_088B6CF8;
L_088B6CF8:;
    f12 = f21;
    f15 = f22;
    goto L_088B6D00;
L_088B6D00:;
    f0 = BITSF(v0);
    f9 = BITSF(LD32(a1));
    f1 = f0 * f6;
    f0 = f5 * f9;
    f0 = f0 + f1;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6D24;
L_088B6D24:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6D38;
L_088B6D38:;
    f23 = BITSF(LD32(sp+68));
    f18 = BITSF(LD32(sp+16));
    f20 = BITSF(LD32(sp+20));
    f19 = BITSF(LD32(sp+36));
    f3 = f23 * f18;
    f1 = f11 * f20;
    f2 = f23 * f10;
    f0 = f11 * f19;
    f8 = f3 - f1;
    f21 = f2 - f0;
    f15 = f8;
    fcc = FCMP(f21, f8, 12);
    cnd_ = fcc;
    f12 = f21;
    if (cnd_) { goto L_088B6D7C; }
    goto L_088B6D74;
L_088B6D74:;
    f12 = f8;
    f15 = f21;
    goto L_088B6D7C;
L_088B6D7C:;
    f2 = BITSF(v0);
    f1 = f4 * f9;
    f0 = f2 * f7;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088B71B4; }
    goto L_088B6D9C;
L_088B6D9C:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B71B8; }
    goto L_088B6DB0;
L_088B6DB0:;
    f24 = BITSF(LD32(sp+84));
    f26 = BITSF(LD32(sp+88));
    f27 = BITSF(LD32(sp+4));
    f25 = BITSF(LD32(sp+80));
    f2 = f24 * f16;
    f3 = f26 * f19;
    f0 = f26 * f27;
    f1 = f24 * f13;
    v1 = FBITS(f25);
    f22 = f0 - f2;
    f21 = f3 - f1;
    v0 = (v1 >> 0) & 0x7fffffff;
    v1 = FBITS(f24);
    f12 = f22;
    fcc = FCMP(f22, f21, 12);
    v1 = (v1 >> 0) & 0x7fffffff;
    f4 = BITSF(v1);
    v1 = FBITS(f26);
    v1 = (v1 >> 0) & 0x7fffffff;
    f5 = BITSF(v1);
    cnd_ = fcc;
    f15 = f21;
    if (cnd_) { goto L_088B6E10; }
    goto L_088B6E08;
L_088B6E08:;
    f12 = f21;
    f15 = f22;
    goto L_088B6E10;
L_088B6E10:;
    f1 = f5 * f7;
    f0 = f4 * f6;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6E2C;
L_088B6E2C:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6E40;
L_088B6E40:;
    f0 = BITSF(FBITS(f26) ^ 0x80000000u);
    f3 = f25 * f16;
    f2 = f25 * f13;
    f1 = f0 * f10;
    f0 = f0 * f14;
    f21 = f1 + f2;
    f22 = f0 + f3;
    f15 = f21;
    fcc = FCMP(f22, f21, 12);
    cnd_ = fcc;
    f12 = f22;
    if (cnd_) { goto L_088B6E78; }
    goto L_088B6E70;
L_088B6E70:;
    f12 = f21;
    f15 = f22;
    goto L_088B6E78;
L_088B6E78:;
    f2 = BITSF(v0);
    f1 = f5 * f9;
    f0 = f2 * f6;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6E98;
L_088B6E98:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6EAC;
L_088B6EAC:;
    f3 = f24 * f14;
    f1 = f25 * f27;
    f2 = f24 * f18;
    f0 = f25 * f20;
    f22 = f3 - f1;
    f8 = f2 - f0;
    f12 = f22;
    fcc = FCMP(f22, f8, 12);
    cnd_ = fcc;
    f15 = f8;
    if (cnd_) { goto L_088B6EE0; }
    goto L_088B6ED8;
L_088B6ED8:;
    f12 = f8;
    f15 = f22;
    goto L_088B6EE0;
L_088B6EE0:;
    f2 = BITSF(v0);
    f1 = f4 * f9;
    f0 = f2 * f7;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088B71B4; }
    goto L_088B6F00;
L_088B6F00:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B71B8; }
    goto L_088B6F14;
L_088B6F14:;
    f29 = BITSF(LD32(sp+100));
    f21 = BITSF(LD32(sp+104));
    f30 = BITSF(LD32(sp+24));
    f28 = BITSF(LD32(sp+96));
    f2 = f29 * f16;
    f0 = f21 * f27;
    f3 = f21 * f20;
    f1 = f29 * f30;
    v1 = FBITS(f28);
    f22 = f0 - f2;
    f8 = f3 - f1;
    v0 = (v1 >> 0) & 0x7fffffff;
    v1 = FBITS(f29);
    f12 = f22;
    fcc = FCMP(f22, f8, 12);
    v1 = (v1 >> 0) & 0x7fffffff;
    f4 = BITSF(v1);
    v1 = FBITS(f21);
    v1 = (v1 >> 0) & 0x7fffffff;
    f5 = BITSF(v1);
    cnd_ = fcc;
    f15 = f8;
    if (cnd_) { goto L_088B6F74; }
    goto L_088B6F6C;
L_088B6F6C:;
    f12 = f8;
    f15 = f22;
    goto L_088B6F74;
L_088B6F74:;
    f1 = f5 * f7;
    f0 = f4 * f6;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6F90;
L_088B6F90:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6FA4;
L_088B6FA4:;
    f0 = BITSF(FBITS(f21) ^ 0x80000000u);
    f3 = f28 * f16;
    f2 = f28 * f30;
    f1 = f0 * f18;
    f0 = f0 * f14;
    f8 = f1 + f2;
    f22 = f0 + f3;
    f15 = f8;
    fcc = FCMP(f22, f8, 12);
    cnd_ = fcc;
    f12 = f22;
    if (cnd_) { goto L_088B6FDC; }
    goto L_088B6FD4;
L_088B6FD4:;
    f12 = f8;
    f15 = f22;
    goto L_088B6FDC;
L_088B6FDC:;
    f2 = BITSF(v0);
    f1 = f5 * f9;
    f0 = f2 * f6;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B6FFC;
L_088B6FFC:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B7010;
L_088B7010:;
    f3 = f29 * f10;
    f1 = f28 * f19;
    f2 = f29 * f18;
    f0 = f28 * f20;
    f21 = f3 - f1;
    f8 = f2 - f0;
    f12 = f21;
    fcc = FCMP(f21, f8, 12);
    cnd_ = fcc;
    f15 = f8;
    if (cnd_) { goto L_088B7044; }
    goto L_088B703C;
L_088B703C:;
    f12 = f8;
    f15 = f21;
    goto L_088B7044;
L_088B7044:;
    f2 = BITSF(v0);
    f1 = f4 * f9;
    f0 = f2 * f7;
    f0 = f1 + f0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B7064;
L_088B7064:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B7078;
L_088B7078:;
    fcc = FCMP(f18, f14, 12);
    f15 = f14;
    cnd_ = !fcc;
    f12 = f14;
    if (cnd_) { goto L_088B708C; }
    goto L_088B7088;
L_088B7088:;
    f12 = f18;
    goto L_088B708C;
L_088B708C:;
    fcc = FCMP(f15, f18, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f18; goto L_088B709C; }
    goto L_088B709C;
L_088B709C:;
    fcc = FCMP(f10, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f10; goto L_088B70AC; }
    goto L_088B70AC;
L_088B70AC:;
    fcc = FCMP(f15, f10, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f10; goto L_088B70BC; }
    goto L_088B70BC;
L_088B70BC:;
    fcc = FCMP(f9, f12, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088B71B4; }
    goto L_088B70CC;
L_088B70CC:;
    f0 = BITSF(FBITS(f9) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B71B8; }
    goto L_088B70E0;
L_088B70E0:;
    fcc = FCMP(f20, f27, 12);
    f15 = f27;
    cnd_ = !fcc;
    f12 = f27;
    if (cnd_) { goto L_088B70F4; }
    goto L_088B70F0;
L_088B70F0:;
    f12 = f20;
    goto L_088B70F4;
L_088B70F4:;
    fcc = FCMP(f15, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f20; goto L_088B7104; }
    goto L_088B7104;
L_088B7104:;
    fcc = FCMP(f19, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f19; goto L_088B7114; }
    goto L_088B7114;
L_088B7114:;
    fcc = FCMP(f15, f19, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f19; goto L_088B7124; }
    goto L_088B7124;
L_088B7124:;
    fcc = FCMP(f7, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B7134;
L_088B7134:;
    f0 = BITSF(FBITS(f7) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B7148;
L_088B7148:;
    fcc = FCMP(f30, f16, 12);
    f15 = f16;
    cnd_ = !fcc;
    f12 = f16;
    if (cnd_) { goto L_088B715C; }
    goto L_088B7158;
L_088B7158:;
    f12 = f30;
    goto L_088B715C;
L_088B715C:;
    fcc = FCMP(f15, f30, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f30; goto L_088B716C; }
    goto L_088B716C;
L_088B716C:;
    fcc = FCMP(f13, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f13; goto L_088B717C; }
    goto L_088B717C;
L_088B717C:;
    fcc = FCMP(f15, f13, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f13; goto L_088B718C; }
    goto L_088B718C;
L_088B718C:;
    fcc = FCMP(f6, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 0 + 0; goto L_088B71B4; }
    goto L_088B719C;
L_088B719C:;
    f0 = BITSF(FBITS(f6) ^ 0x80000000u);
    fcc = FCMP(f15, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = f11 * f24; goto L_088B71EC; }
    goto L_088B71B0;
L_088B71B0:;
    v0 = 0 + 0;
    goto L_088B71B4;
L_088B71B4:;
    goto L_088B71B8;
L_088B71B8:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_088B71EC:;
    f5 = f23 * f25;
    f1 = f17 * f25;
    f4 = f11 * f26;
    f2 = f17 * f24;
    f0 = f23 * f26;
    f3 = f3 - f5;
    f1 = f1 - f4;
    a2 = a1 + 0;
    f0 = f0 - f2;
    a0 = sp + 48;
    a1 = sp + 0;
    ST32(sp+52, FBITS(f1));
    ST32(sp+48, FBITS(f0));
    ST32(sp+56, FBITS(f3));
    { rv_t r_ = func_088B6A50(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7228;
L_088B7228:;
    v0 = 0 < v0;
    goto L_088B71B4;
}

/* 088B7230 */
rv_t func_088B7230(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_088B7230:;
    v0 = D_08AEC618 - (-14824);
    v1 = D_08AEC61C - (-14820);
    f1 = BITSF(LD32(v0-14824));
    f0 = BITSF(LD32(v1-14820));
    v0 = a0 + 12;
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    ST32(v0+16, FBITS(f1));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(a0+84, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+44, 0);
    ST32(a0+48, 0);
    ST32(a0+52, 0);
    ST32(a0+56, 0);
    ST32(a0+60, 0);
    ST32(a0+64, 0);
    ST32(a0+68, 0);
    ST32(a0+72, 0);
    ST8(a0+76, 0);
    ST32(a0+80, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088B72A0 */
u64 func_088B72A0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B72A0:;
    sp = sp - 16;
    { u64 r_ = func_088B72BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B72B0;
L_088B72B0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088B72BC */
u64 func_088B72BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B72BC:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 3;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B72E0;
L_088B72E0:;
    v0 = LD_U8(s1+76);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B73B4; }
    goto L_088B72EC;
L_088B72EC:;
    s0 = LD32(s1);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088B7360; }
    goto L_088B72F8;
L_088B72F8:;
    v0 = LD32(s1+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088B7344; }
    goto L_088B7304;
L_088B7304:;
    s0 = s0 + s2;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B7310;
L_088B7310:;
    a0 = s0 + 40;
    s0 = s0 + 12;
    func_08AB54BC(a0, 0, 0, 0);
    goto L_088B731C;
L_088B731C:;
    ST32(s0+28, 0);
    s3 = s3 + 1;
    s2 = s2 + 56;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B732C;
L_088B732C:;
    v1 = LD32(s1+4);
    v1 = s3 < v1;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088B7344; }
    goto L_088B733C;
L_088B733C:;
    s0 = LD32(s1);
    goto L_088B7304;
L_088B7344:;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B734C;
L_088B734C:;
    s0 = s1 + 8;
    a0 = s1 + 36;
    func_08AB54BC(a0, 0, 0, 0);
    goto L_088B7358;
L_088B7358:;
    ST32(s0+28, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B7360;
L_088B7360:;
    a0 = s1 + 0;
    func_08AB54FC(a0, 0, 0, 0);
    goto L_088B7368;
L_088B7368:;
    a0 = s1 + 56;
    func_08AB553C(a0, 0, 0, 0);
    goto L_088B7370;
L_088B7370:;
    a0 = s1 + 44;
    func_08AB557C(a0, 0, 0, 0);
    goto L_088B7378;
L_088B7378:;
    a0 = s1 + 48;
    func_08AB55BC(a0, 0, 0, 0);
    goto L_088B7380;
L_088B7380:;
    a0 = s1 + 64;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_088B7388;
L_088B7388:;
    a0 = s1 + 72;
    func_08AB25E4(a0, 0, 0, 0);
    goto L_088B7390;
L_088B7390:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B7398;
L_088B7398:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088B73B4:;
    a0 = s1 + 80;
    func_08AB54BC(a0, 0, 0, 0);
    goto L_088B73BC;
L_088B73BC:;
    goto L_088B7360;
}

/* 088B73C4 */
float func_088B73C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B73C4:;
    sp = sp - 16;
    t0 = a0 + 0;
    a2 = RS_FADDR(func_088B7410, 0x088B7410u) - (29712);
    v0 = LD32(t0+4);
    a0 = a0 + 8;
    a2 = a2 + 29712;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088B73F4; }
    goto L_088B73E8;
L_088B73E8:;
    goto L_088B73EC;
L_088B73EC:;
    sp = sp + 16;
    return f0;
L_088B73F4:;
    v0 = D_08B2BD9C - (-16996);
    v1 = D_08B2BDA0 - (-16992);
    ST32(v0-16996, a1);
    ST32(v1-16992, t0);
    { rv_t r_ = func_08832E1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7408;
L_088B7408:;
    goto L_088B73EC;
}

/* 088B7410 */
rv_t func_088B7410(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B7410:;
    sp = sp - 16;
    v0 = D_08B2BDA0 - (-16992);
    a3 = a0 + 0;
    a2 = 0 + 0;
    a1 = LD32(v0-16992);
    v0 = a3 << 3;
    v0 = v0 - a3;
    v1 = LD32(a1);
    v0 = v0 << 3;
    a0 = a1 + 0;
    s0 = v1 + v0;
    v1 = LD32(s0+52);
    v0 = D_08B2BD98 - (-17000);
    ST32(v0-17000, a3);
    v1 = v1 & 0x1;
    a1 = s0 + 0;
    cnd_ = v1 != 0;
    a3 = D_08B2BD9C - (-16996);
    if (cnd_) { goto L_088B7488; }
    goto L_088B7460;
L_088B7460:;
    a1 = LD32(a3-16996);
    goto L_088B7464;
L_088B7464:;
    a2 = RS_FADDR(func_088B74B0, 0x088B74B0u) - (29872);
    a0 = s0 + 12;
    a2 = a2 + 29872;
    a3 = 1;
    { rv_t r_ = func_08832E1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7478;
L_088B7478:;
    goto L_088B747C;
L_088B747C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088B7488:;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7490;
L_088B7490:;
    a3 = D_08B2BD9C - (-16996);
    v1 = LD32(a3-16996);
    a0 = LD_U16(v1+36);
    v0 = v0 & a0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B747C; }
    goto L_088B74A8;
L_088B74A8:;
    a1 = LD32(a3-16996);
    goto L_088B7464;
}

/* 088B74B0 */
rv_t func_088B74B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088B74B0:;
    sp = sp - 48;
    s5 = D_08B2BD9C - (-16996);
    s4 = D_08B2BDA0 - (-16992);
    s2 = D_08B2BD98 - (-17000);
    s1 = a0 + 0;
    a2 = s1 + 0;
    a1 = LD32(s4-16992);
    v1 = LD32(s2-17000);
    a0 = LD32(a1);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    s0 = a0 + v0;
    a0 = a1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7518;
L_088B7518:;
    a2 = LD32(s5-16996);
    v1 = LD_U16(a2+36);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = LD32(s2-17000);
    if (cnd_) { goto L_088B755C; }
    goto L_088B752C;
L_088B752C:;
    goto L_088B7530;
L_088B7530:;
    goto L_088B7534;
L_088B7534:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088B755C:;
    a0 = LD32(s4-16992);
    v1 = LD32(s0);
    s6 = v0 << 16;
    a3 = LD32(a0+44);
    v0 = s1 << 1;
    s2 = s6 + v0;
    v1 = v1 + s1;
    v1 = v1 << 3;
    a1 = s2 + 0;
    s7 = a3 + v1;
    { rv_t r_ = func_088B7758(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7588;
L_088B7588:;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088B7740; }
    goto L_088B7590;
L_088B7590:;
    v1 = LD_U16(s7+6);
    goto L_088B7594;
L_088B7594:;
    v0 = 0xffff;
    cnd_ = v1 == v0;
    a2 = LD32(s5-16996);
    if (cnd_) { goto L_088B75B8; }
    goto L_088B75A0;
L_088B75A0:;
    a0 = LD32(s4-16992);
    s2 = s2 + 1;
    a1 = s2 + 0;
    { rv_t r_ = func_088B7758(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B75B0;
L_088B75B0:;
    cnd_ = v0 != 0;
    a0 = LD32(s5-16996);
    if (cnd_) { goto L_088B772C; }
    goto L_088B75B8;
L_088B75B8:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_088B7530; }
    goto L_088B75C0;
L_088B75C0:;
    t0 = LD32(s5-16996);
    v0 = LD_U16(t0+38);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = D_08B2BD9C - (-16996);
    if (cnd_) { goto L_088B7530; }
    goto L_088B75D4;
L_088B75D4:;
    v0 = LD32(s4-16992);
    v1 = LD32(s0);
    a0 = LD32(v0+48);
    v1 = v1 + s1;
    s0 = a0 + v1;
    a3 = LD_U8(s0);
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088B7534; }
    goto L_088B75F4;
L_088B75F4:;
    v1 = LD_U16(s7);
    a1 = LD_U16(s7+2);
    a2 = LD_U16(s7+4);
    v0 = LD_U16(s7+6);
    a0 = a3 & 0x1;
    s1 = v1 + s6;
    fp = v0 + s6;
    s3 = a1 + s6;
    cnd_ = a0 != 0;
    s4 = a2 + s6;
    if (cnd_) { goto L_088B7714; }
    goto L_088B761C;
L_088B761C:;
    v0 = a3 & 0x2;
    cnd_ = v0 != 0;
    a0 = LD32(s2-16996);
    if (cnd_) { goto L_088B7700; }
    goto L_088B7628;
L_088B7628:;
    v0 = a3 & 0x4;
    cnd_ = v0 == 0;
    v0 = a3 & 0x8;
    if (cnd_) { goto L_088B765C; }
    goto L_088B7634;
L_088B7634:;
    v1 = LD_U16(s7+6);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    a0 = LD32(s2-16996);
    if (cnd_) { goto L_088B76F4; }
    goto L_088B7644;
L_088B7644:;
    a1 = s4 + 0;
    a2 = fp + 0;
    goto L_088B764C;
L_088B764C:;
    { rv_t r_ = func_088B8C04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7654;
L_088B7654:;
    a3 = LD_U8(s0);
    v0 = a3 & 0x8;
    goto L_088B765C;
L_088B765C:;
    cnd_ = v0 != 0;
    a0 = LD32(s5-16996);
    if (cnd_) { goto L_088B76E0; }
    goto L_088B7664;
L_088B7664:;
    v0 = a3 & 0x10;
    cnd_ = v0 != 0;
    a0 = LD32(s5-16996);
    if (cnd_) { goto L_088B76D0; }
    goto L_088B7670;
L_088B7670:;
    v0 = a3 & 0x20;
    cnd_ = v0 != 0;
    a0 = LD32(s5-16996);
    if (cnd_) { goto L_088B76C0; }
    goto L_088B767C;
L_088B767C:;
    v0 = a3 & 0x40;
    cnd_ = v0 != 0;
    a0 = LD32(s5-16996);
    if (cnd_) { goto L_088B76B0; }
    goto L_088B7688;
L_088B7688:;
    v0 = a3 + 0;
    v0 = (v0 & ~(0x7fu << 0)) | ((0 & 0x7f) << 0);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088B7530; }
    goto L_088B769C;
L_088B769C:;
    a0 = LD32(s5-16996);
    a1 = fp + 0;
    { rv_t r_ = func_088B8D2C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B76A8;
L_088B76A8:;
    goto L_088B7530;
L_088B76B0:;
    a1 = s4 + 0;
    { rv_t r_ = func_088B8D2C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B76B8;
L_088B76B8:;
    a3 = LD_U8(s0);
    goto L_088B7688;
L_088B76C0:;
    a1 = s3 + 0;
    { rv_t r_ = func_088B8D2C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B76C8;
L_088B76C8:;
    a3 = LD_U8(s0);
    goto L_088B767C;
L_088B76D0:;
    a1 = s1 + 0;
    { rv_t r_ = func_088B8D2C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B76D8;
L_088B76D8:;
    a3 = LD_U8(s0);
    goto L_088B7670;
L_088B76E0:;
    a1 = fp + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088B8C04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B76EC;
L_088B76EC:;
    a3 = LD_U8(s0);
    goto L_088B7664;
L_088B76F4:;
    a1 = s4 + 0;
    a2 = s1 + 0;
    goto L_088B764C;
L_088B7700:;
    a1 = s3 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_088B8C04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B770C;
L_088B770C:;
    a3 = LD_U8(s0);
    goto L_088B7628;
L_088B7714:;
    a0 = t0 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_088B8C04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7724;
L_088B7724:;
    a3 = LD_U8(s0);
    goto L_088B761C;
L_088B772C:;
    a1 = s2 + 0;
    s3 = 1;
    { rv_t r_ = func_088B8B90(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7738;
L_088B7738:;
    goto L_088B75B8;
L_088B7740:;
    a0 = LD32(s5-16996);
    a1 = s2 + 0;
    s3 = 1;
    { rv_t r_ = func_088B8B90(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7750;
L_088B7750:;
    v1 = LD_U16(s7+6);
    goto L_088B7594;
}

/* 088B7758 */
rv_t func_088B7758(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088B7758:;
    sp = sp - 96;
    v0 = a1 >> 16;
    v1 = v0 << 3;
    t0 = LD32(a0);
    v1 = v1 - v0;
    v1 = v1 << 3;
    v1 = v1 + t0;
    a3 = LD32(v1);
    t2 = LD32(a0+44);
    v0 = (a1 >> 1) & 0x7fff;
    a3 = a3 + v0;
    a1 = a1 & 0x1;
    a3 = a3 << 3;
    t2 = t2 + a3;
    v0 = a1 << 2;
    v0 = v0 + t2;
    t0 = LD32(v1+4);
    a3 = LD_U16(v0);
    t1 = LD32(a0+56);
    v1 = 3;
    a3 = t0 + a3;
    a3 = a3 << 4;
    a3 = t1 + a3;
    f0 = BITSF(LD32(a3));
    v0 = 1;
    if (a1 != 0) v0 = v1;
    ST32(sp, FBITS(f0));
    v0 = v0 << 1;
    v0 = v0 + t2;
    f0 = BITSF(LD32(a3+4));
    v1 = LD_U16(v0);
    v0 = 2;
    ST32(sp+4, FBITS(f0));
    v1 = t0 + v1;
    v1 = v1 << 4;
    f0 = BITSF(LD32(a3+8));
    v1 = t1 + v1;
    if (a1 != 0) v0 = 0;
    ST32(sp+8, FBITS(f0));
    v0 = v0 << 1;
    v0 = v0 + t2;
    f0 = BITSF(LD32(v1));
    a0 = LD_U16(v0);
    v0 = D_08AEC620 - (-14816);
    ST32(sp+12, FBITS(f0));
    t0 = t0 + a0;
    t0 = t0 << 4;
    f0 = BITSF(LD32(v1+4));
    f9 = BITSF(LD32(a2+16));
    t1 = t1 + t0;
    ST32(sp+16, FBITS(f0));
    a0 = sp + 48;
    a1 = sp + 64;
    f1 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(a2));
    f4 = BITSF(LD32(a2+4));
    ST32(sp+20, FBITS(f1));
    f8 = f4 - f5;
    f0 = BITSF(LD32(t1));
    f2 = BITSF(LD32(a2+8));
    f3 = BITSF(LD32(a2+12));
    ST32(sp+24, FBITS(f0));
    f4 = f4 + f5;
    f6 = f3 - f2;
    f1 = BITSF(LD32(a2+20));
    f7 = BITSF(LD32(t1+4));
    f3 = f3 + f2;
    f5 = f1 - f9;
    f1 = f1 + f9;
    f0 = BITSF(LD32(v0-14816));
    ST32(sp+28, FBITS(f7));
    a2 = sp + 0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f1 = f1 * f0;
    f8 = f8 * f0;
    f6 = f6 * f0;
    f2 = BITSF(LD32(t1+8));
    ST32(sp+32, FBITS(f2));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f1));
    ST32(sp+64, FBITS(f8));
    ST32(sp+68, FBITS(f6));
    ST32(sp+72, FBITS(f5));
    { rv_t r_ = func_088B6B34(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B78B8;
L_088B78B8:;
    v0 = 0 < v0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 088B78C8 */
rv_t func_088B78C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr56 = v[56], vr57 = v[57], vr58 = v[58], vr59 = v[59], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr63 = v[63], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr72 = v[72], vr73 = v[73], vr74 = v[74], vr75 = v[75], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr79 = v[79], vr84 = v[84], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr88 = v[88], vr89 = v[89], vr90 = v[90], vr91 = v[91], vr92 = v[92], vr93 = v[93], vr94 = v[94], vr95 = v[95], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr107 = v[107], vr108 = v[108], vr109 = v[109], vr110 = v[110], vr111 = v[111];
    u8 stack_[1648] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1648);
L_088B78C8:;
    sp = sp - 1648;
    v0 = a1 >> 16;
    v1 = v0 << 3;
    v1 = v1 - v0;
    v1 = v1 << 3;
    v0 = (a1 >> 1) & 0x7fff;
    a1 = a1 & 0x1;
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    t2 = LD32(a0);
    t4 = LD32(a0+44);
    t5 = LD32(a0+56);
    v1 = v1 + t2;
    t1 = LD32(v1);
    t2 = LD32(v1+4);
    v1 = 3;
    t1 = t1 + v0;
    t1 = t1 << 3;
    t4 = t4 + t1;
    v0 = a1 << 2;
    v0 = v0 + t4;
    t1 = LD_U16(v0);
    v0 = 1;
    if (a1 != 0) v0 = v1;
    t1 = t2 + t1;
    t1 = t1 << 4;
    t1 = t5 + t1;
    a0 = LD32(t1);
    v0 = v0 << 1;
    v0 = v0 + t4;
    ST32(sp, a0);
    {u32 a_=sp+(1568);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1584);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v1 = LD32(t1+4);
    t3 = LD_U16(v0);
    v0 = 2;
    ST32(sp+4, v1);
    t3 = t2 + t3;
    if (a1 != 0) v0 = 0;
    v1 = LD32(t1+8);
    t3 = t3 << 4;
    v0 = v0 << 1;
    ST32(sp+8, v1);
    t3 = t5 + t3;
    v0 = v0 + t4;
    v1 = LD32(t1+12);
    a0 = LD_U16(v0);
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+12, v1);
    {u32 a_=sp+(336);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1600);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(t3);
    {u32 a_=sp+(1616);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    t2 = t2 + a0;
    ST32(sp+16, v0);
    t2 = t2 << 4;
    t5 = t5 + t2;
    v0 = LD32(t3+4);
    s1 = a2 + 4;
    s2 = a2 + 0;
    ST32(sp+20, v0);
    a0 = sp + 224;
    a1 = sp + 240;
    v0 = LD32(t3+8);
    a2 = sp + 144;
    ST32(sp+24, v0);
    {u32 a_=sp+(640);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = LD32(t3+12);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(944);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+28, v0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    v0 = LD32(t5);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+32, v0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(656);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = LD32(t5+4);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(960);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+36, v0);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr88=d0;vr89=d1;vr90=d2;vr91=d3;}
    v0 = LD32(t5+8);
    {u32 a_=sp+(256);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    ST32(sp+40, v0);
    {u32 a_=sp+(1600);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr72=d0;vr73=d1;vr74=d2;vr75=d3;}
    v0 = LD32(t5+12);
    {u32 a_=sp+(976);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1584);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+44, v0);
    v0 = D_08AEC624 - (-14812);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(32);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    f0 = BITSF(LD32(v0-14812));
    {u32 a_=sp+(1616);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr68=d0;vr69=d1;vr70=d2;vr71=d3;}
    v0 = FBITS(f0);
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=1.0f/s0;float d1=1.0f/s1;float d2=1.0f/s2;float d3=1.0f/s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;float d3=s3*t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    f2 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3+4));
    f0 = BITSF(LD32(a3));
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr84=d0;vr85=d1;vr86=d2;vr87=d3;}
    {u32 a_=sp+(1264);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    ST32(sp+80, FBITS(f0));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr92=d0;vr93=d1;vr94=d2;vr95=d3;}
    ST32(sp+84, FBITS(f1));
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=sp+(0);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    ST32(sp+88, FBITS(f2));
    {u32 a_=sp+(16);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1280);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+12));
    f2 = BITSF(LD32(t0+24));
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(1296);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+68, FBITS(f1));
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    ST32(sp+72, FBITS(f2));
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr108=d0;vr109=d1;vr110=d2;vr111=d3;}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr104=d0;vr105=d1;vr106=d2;vr107=d3;}
    v0 = LD32(sp+64);
    f0 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(t0+16));
    a3 = LD32(sp+76);
    ST32(sp+96, v0);
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr100=d0;vr101=d1;vr102=d2;vr103=d3;}
    v1 = LD32(sp+68);
    v0 = LD32(sp+72);
    ST32(sp+64, FBITS(f0));
    ST32(sp+100, v1);
    ST32(sp+104, v0);
    ST32(sp+108, a3);
    f2 = BITSF(LD32(t0+28));
    ST32(sp+68, FBITS(f1));
    v1 = LD32(sp+64);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr12=d0;vr13=d1;vr14=d2;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr20=d0;vr21=d1;vr22=d2;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr24=d0;vr25=d1;vr26=d2;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr16=d0;vr17=d1;vr18=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f0 = BITSF(LD32(t0+8));
    f1 = BITSF(LD32(t0+20));
    ST32(sp+64, FBITS(f0));
    v0 = LD32(sp+64);
    ST32(sp+72, FBITS(f2));
    ST32(sp+112, v1);
    t1 = LD32(sp+68);
    ST32(sp+128, v0);
    ST32(sp+68, FBITS(f1));
    f0 = BITSF(LD32(t0+32));
    v1 = LD32(sp+72);
    v0 = LD32(sp+68);
    ST32(sp+72, FBITS(f0));
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    f0 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+100));
    ST32(sp+132, v0);
    ST32(sp+100, FBITS(f0));
    f0 = BITSF(LD32(sp+128));
    ST32(sp+120, v1);
    f2 = BITSF(LD32(sp+104));
    ST32(sp+104, FBITS(f0));
    f0 = BITSF(LD32(sp+132));
    ST32(sp+116, t1);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+112, FBITS(f1));
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f1 = BITSF(LD32(sp+120));
    ST32(sp+124, a3);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    ST32(sp+120, FBITS(f0));
    v0 = LD32(sp+72);
    {u32 a_=sp+(112);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+140, a3);
    ST32(sp+136, v0);
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1248);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr84));ST32(a_+4,FBITS(vr85));ST32(a_+8,FBITS(vr86));ST32(a_+12,FBITS(vr87));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    ST32(sp+128, FBITS(f2));
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    ST32(sp+132, FBITS(f1));
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr84));ST32(a_+4,FBITS(vr85));ST32(a_+8,FBITS(vr86));ST32(a_+12,FBITS(vr87));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr88));ST32(a_+4,FBITS(vr89));ST32(a_+8,FBITS(vr90));ST32(a_+12,FBITS(vr91));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr92));ST32(a_+4,FBITS(vr93));ST32(a_+8,FBITS(vr94));ST32(a_+12,FBITS(vr95));}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr88));ST32(a_+4,FBITS(vr89));ST32(a_+8,FBITS(vr90));ST32(a_+12,FBITS(vr91));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr92));ST32(a_+4,FBITS(vr93));ST32(a_+8,FBITS(vr94));ST32(a_+12,FBITS(vr95));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(128);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(928);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr88));ST32(a_+4,FBITS(vr89));ST32(a_+8,FBITS(vr90));ST32(a_+12,FBITS(vr91));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr92));ST32(a_+4,FBITS(vr93));ST32(a_+8,FBITS(vr94));ST32(a_+12,FBITS(vr95));}
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(1408);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(1424);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr88));ST32(a_+4,FBITS(vr89));ST32(a_+8,FBITS(vr90));ST32(a_+12,FBITS(vr91));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr92));ST32(a_+4,FBITS(vr93));ST32(a_+8,FBITS(vr94));ST32(a_+12,FBITS(vr95));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1264);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1456);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(544);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float t0=vr20;float t1=vr21;float t2=vr22;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    t6 = LD32(sp+68);
    t7 = LD32(sp+72);
    s0 = LD32(sp+76);
    t1 = LD32(sp+64);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr92;float s1=vr93;float s2=vr94;float s3=vr95;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float t0=vr24;float t1=vr25;float t2=vr26;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    t2 = LD32(sp+64);
    t3 = LD32(sp+68);
    t4 = LD32(sp+72);
    t5 = LD32(sp+76);
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float t0=vr16;float t1=vr17;float t2=vr18;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+68);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    v0 = LD32(sp+64);
    a3 = LD32(sp+72);
    t0 = LD32(sp+76);
    {u32 a_=sp+(1472);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(1488);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1504);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(1520);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1552);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    ST32(sp, t1);
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float t0=vr12;float t1=vr13;float t2=vr14;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+36, v1);
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v1 = LD32(sp+68);
    ST32(sp+40, a3);
    ST32(sp+84, v1);
    v1 = LD32(sp+76);
    a3 = LD32(s2+4);
    ST32(sp+32, v0);
    ST32(sp+92, v1);
    v1 = LD32(s1+4);
    v0 = LD32(sp+64);
    ST32(sp+192, a3);
    ST32(sp+196, v1);
    f3 = BITSF(LD32(sp+192));
    ST32(sp+80, v0);
    f7 = BITSF(LD32(sp+196));
    v0 = LD32(sp+72);
    f0 = BITSF(LD32(sp+80));
    f2 = f7 + f3;
    ST32(sp+88, v0);
    v0 = D_08AEC628 - (-14808);
    f7 = f7 - f3;
    f6 = BITSF(LD32(v0-14808));
    f1 = BITSF(LD32(sp));
    a3 = LD32(s1+16);
    f2 = f2 * f6;
    v0 = LD32(s1+8);
    v1 = LD32(s1+12);
    ST32(sp+4, t6);
    f2 = f2 + f0;
    f7 = f7 * f6;
    ST32(sp+8, t7);
    ST32(sp+12, s0);
    ST32(sp+16, t2);
    ST32(sp+20, t3);
    ST32(sp+24, t4);
    ST32(sp+28, t5);
    ST32(sp+44, t0);
    t0 = LD32(s1+20);
    ST32(sp+144, FBITS(f1));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+16));
    ST32(sp+200, v0);
    ST32(sp+148, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+204, v1);
    ST32(sp+152, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(sp+156, FBITS(f1));
    ST32(sp+160, FBITS(f0));
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+24));
    ST32(sp+208, a3);
    ST32(sp+168, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    ST32(sp+212, t0);
    f4 = BITSF(LD32(sp+204));
    ST32(sp+164, FBITS(f1));
    ST32(sp+176, FBITS(f0));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+200));
    f5 = BITSF(LD32(sp+208));
    f3 = BITSF(LD32(sp+212));
    ST32(sp+172, FBITS(f1));
    f1 = f4 + f0;
    f4 = f4 - f0;
    ST32(sp+240, FBITS(f2));
    f2 = f3 + f5;
    f1 = f1 * f6;
    f0 = BITSF(LD32(sp+84));
    f3 = f3 - f5;
    f2 = f2 * f6;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+88));
    v0 = LD32(sp+240);
    f4 = f4 * f6;
    f2 = f2 + f0;
    ST32(sp+244, FBITS(f1));
    f3 = f3 * f6;
    ST32(sp+248, FBITS(f2));
    v1 = LD32(sp+244);
    ST32(sp+224, v0);
    v0 = LD32(sp+248);
    ST32(sp+228, v1);
    ST32(sp+232, v0);
    ST32(sp+240, FBITS(f7));
    ST32(sp+244, FBITS(f4));
    ST32(sp+248, FBITS(f3));
    { rv_t r_ = func_088B6B34(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B7F60;
L_088B7F60:;
    v0 = 0 < v0;
    sp = sp + 1648;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[92]=vr92;v[93]=vr93;v[94]=vr94;v[95]=vr95;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[92]=vr92;v[93]=vr93;v[94]=vr94;v[95]=vr95;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;
}

/* 088B7F7C */
rv_t func_088B7F7C(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_088B7F7C:;
    sp = sp - 80;
    t0 = RS_FADDR(func_088B812C, 0x088B812Cu) - (-32468);
    a3 = a2 + 0;
    t0 = t0 - 32468;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s3 = D_08B2BDAC - (-16980);
    a0 = a0 + 8;
    t1 = 0 + 0;
    s0 = (u32)-1;
    a2 = a1 + 12;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088B7FF0; }
    goto L_088B7FCC;
L_088B7FCC:;
    v0 = t2 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088B7FF0:;
    v0 = D_08B2BDA4 - (-16988);
    v1 = D_08B2BDA8 - (-16984);
    ST32(v0-16988, a1);
    v0 = D_08B2BDA0 - (-16992);
    s4 = D_08B2BDB0 - (-16976);
    ST32(v1-16984, s2);
    ST32(v0-16992, s1);
    ST32(s3-16980, s0);
    { rv_t r_ = func_08833440(a0, a1, a2, a3, t0, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8014;
L_088B8014:;
    t3 = s2 + 20;
    v1 = LD32(s3-16980);
    a0 = s1 + 0;
    t2 = 0 + 0;
    v0 = v1 << 3;
    v0 = v0 - v1;
    cnd_ = v1 == s0;
    v0 = v0 << 3;
    if (cnd_) { goto L_088B7FCC; }
    goto L_088B8034;
L_088B8034:;
    s0 = LD32(s1);
    v1 = LD32(s4-16976);
    a3 = LD32(s1+44);
    s0 = s0 + v0;
    v0 = LD32(s0);
    t2 = LD32(s0+4);
    a2 = v1 + 0;
    v0 = v0 + v1;
    v0 = v0 << 3;
    a3 = a3 + v0;
    v1 = LD_U16(a3);
    v0 = LD_U16(a3+2);
    t1 = LD32(s1+56);
    v1 = v1 + t2;
    v0 = v0 + t2;
    v1 = v1 << 4;
    v0 = v0 << 4;
    v1 = t1 + v1;
    v0 = t1 + v0;
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    t0 = LD_U16(a3+4);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    a1 = s0 + 0;
    t0 = t0 + t2;
    t0 = t0 << 4;
    t1 = t1 + t0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=t1+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[12]=d0;v[13]=d1;v[14]=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[8];v[12]=s0*t0;v[13]=s1*t0;v[14]=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    ST32(t3+4, FBITS(f2));
    ST32(s2+20, FBITS(f0));
    ST32(t3+8, FBITS(f1));
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B80EC;
L_088B80EC:;
    a0 = LD32(s4-16976);
    v1 = LD32(s0+48);
    a1 = LD32(s1+72);
    ST16(s2+16, v0);
    v1 = v1 + a0;
    v1 = v1 << 1;
    v0 = LD32(s3-16980);
    v1 = v1 + a1;
    a2 = LD_U16(v1);
    v0 = v0 << 16;
    a0 = a0 << 1;
    v0 = v0 + a0;
    ST32(s2+36, v0);
    t2 = 1;
    ST16(s2+18, a2);
    goto L_088B7FCC;
}

/* 088B812C */
rv_t func_088B812C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B812C:;
    sp = sp - 16;
    v0 = D_08B2BDA0 - (-16992);
    t2 = a0 + 0;
    v1 = LD32(v0-16992);
    v0 = a0 << 3;
    v0 = v0 - t2;
    a0 = LD32(v1);
    v1 = D_08B2BDA4 - (-16988);
    a1 = LD32(v1-16988);
    v1 = D_08B2BDA8 - (-16984);
    v0 = v0 << 3;
    a3 = LD32(v1-16984);
    a0 = a0 + v0;
    t0 = RS_FADDR(func_088B8190, 0x088B8190u) - (-32368);
    v0 = D_08B2BD98 - (-17000);
    a0 = a0 + 12;
    a2 = a1 + 12;
    t0 = t0 - 32368;
    t1 = 1;
    ST32(v0-17000, t2);
    { rv_t r_ = func_08833440(a0, a1, a2, a3, t0, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8184;
L_088B8184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8190 */
rv_t func_088B8190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088B8190:;
    sp = sp - 128;
    s5 = D_08B2BD98 - (-17000);
    s3 = D_08B2BDA0 - (-16992);
    a1 = LD32(s3-16992);
    v1 = LD32(s5-17000);
    s2 = a0 + 0;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    a2 = s2 + 0;
    a0 = LD32(a1);
    s0 = a0 + v0;
    a0 = a1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B81F4;
L_088B81F4:;
    v1 = D_08B15AAC - (23212);
    v1 = LD32(v1+23212);
    a1 = (u32)(s32)(s16)v0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 & a1;
    if (cnd_) { goto L_088B8214; }
    goto L_088B820C;
L_088B820C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B8438; }
    goto L_088B8214;
L_088B8214:;
    v1 = D_08B259D4 - (22996);
    v0 = LD32(v1+22996);
    v0 = v0 & a1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B8438; }
    goto L_088B8228;
L_088B8228:;
    v1 = LD32(s3-16992);
    v0 = LD32(s0);
    s1 = LD32(s0+4);
    a0 = LD32(v1+44);
    v0 = v0 + s2;
    v0 = v0 << 3;
    s0 = a0 + v0;
    v1 = LD_U16(s0);
    v0 = LD_U16(s0+2);
    a0 = LD_U16(s0+4);
    a1 = a1 & 0x1;
    a2 = v1 + s1;
    t2 = v0 + s1;
    a0 = a0 + s1;
    ST32(sp+64, 0);
    cnd_ = a1 != 0;
    fp = D_08B2BDA4 - (-16988);
    if (cnd_) { goto L_088B8280; }
    goto L_088B826C;
L_088B826C:;
    v1 = LD32(fp-16988);
    v0 = LD32(v1+44);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(s3-16992);
    if (cnd_) { goto L_088B828C; }
    goto L_088B8280;
L_088B8280:;
    v0 = 1;
    ST32(sp+64, v0);
    v1 = LD32(s3-16992);
    goto L_088B828C;
L_088B828C:;
    s6 = a2 << 4;
    t2 = t2 << 4;
    v0 = LD32(v1+56);
    s4 = a0 << 4;
    a0 = LD32(fp-16988);
    v1 = v0 + s6;
    f0 = BITSF(LD32(v1));
    t2 = v0 + t2;
    v0 = v0 + s4;
    ST32(sp+16, FBITS(f0));
    s7 = sp + 48;
    a1 = a0 + 12;
    f0 = BITSF(LD32(v1+4));
    a2 = sp + 16;
    a3 = sp + 32;
    ST32(sp+20, FBITS(f0));
    t0 = s7 + 0;
    t1 = sp + 0;
    f0 = BITSF(LD32(v1+8));
    ST32(sp+24, FBITS(f0));
    f0 = BITSF(LD32(t2));
    ST32(sp+32, FBITS(f0));
    f1 = BITSF(LD32(t2+4));
    ST32(sp+36, FBITS(f1));
    f0 = BITSF(LD32(t2+8));
    ST32(sp+40, FBITS(f0));
    f1 = BITSF(LD32(v0));
    ST32(sp+48, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+52, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(sp+56, FBITS(f1));
    { rv_t r_ = func_088348A0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8310;
L_088B8310:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD_U16(s0+6); goto L_088B8348; }
    goto L_088B8328;
L_088B8328:;
    v0 = D_08B2BDA8 - (-16984);
    v1 = LD32(v0-16984);
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088B8408; }
    goto L_088B8344;
L_088B8344:;
    v1 = LD_U16(s0+6);
    goto L_088B8348;
L_088B8348:;
    v0 = 0xffff;
    cnd_ = v1 == v0;
    a0 = LD32(s3-16992);
    if (cnd_) { goto L_088B8434; }
    goto L_088B8354;
L_088B8354:;
    v0 = v1 + s1;
    v0 = v0 << 4;
    v1 = LD32(a0+56);
    a0 = LD32(fp-16988);
    a2 = s7 + 0;
    t2 = v1 + s4;
    f0 = BITSF(LD32(t2));
    v0 = v1 + v0;
    v1 = v1 + s6;
    ST32(sp+48, FBITS(f0));
    a1 = a0 + 12;
    a3 = sp + 32;
    f0 = BITSF(LD32(t2+4));
    t0 = sp + 16;
    t1 = sp + 0;
    ST32(sp+52, FBITS(f0));
    f0 = BITSF(LD32(t2+8));
    ST32(sp+56, FBITS(f0));
    f1 = BITSF(LD32(v0));
    ST32(sp+32, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+36, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(sp+40, FBITS(f1));
    f0 = BITSF(LD32(v1));
    ST32(sp+16, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(sp+24, FBITS(f0));
    { rv_t r_ = func_088348A0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B83D0;
L_088B83D0:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B8438; }
    goto L_088B83E8;
L_088B83E8:;
    v0 = D_08B2BDA8 - (-16984);
    v1 = LD32(v0-16984);
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B843C; }
    goto L_088B8404;
L_088B8404:;
    v0 = LD_U8(sp);
    goto L_088B8408;
L_088B8408:;
    cnd_ = v0 != 0;
    v0 = LD32(s5-17000);
    if (cnd_) { goto L_088B8420; }
    goto L_088B8410;
L_088B8410:;
    v0 = LD32(sp+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B8438; }
    goto L_088B841C;
L_088B841C:;
    v0 = LD32(s5-17000);
    goto L_088B8420;
L_088B8420:;
    ST32(v1, FBITS(f1));
    a0 = D_08B2BDB0 - (-16976);
    v1 = D_08B2BDAC - (-16980);
    ST32(v1-16980, v0);
    ST32(a0-16976, s2);
    goto L_088B8434;
L_088B8434:;
    goto L_088B8438;
L_088B8438:;
    goto L_088B843C;
L_088B843C:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8464 */
void func_088B8464(void)
{
L_088B8464:;
    return;
}

/* 088B846C */
void func_088B846C(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B846C:;
    sp = sp - 16;
    func_088B8490();
    goto L_088B847C;
L_088B847C:;
    func_088B8464();
    goto L_088B8484;
L_088B8484:;
    sp = sp + 16;
    return;
}

/* 088B8490 */
void func_088B8490(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8490:;
    a0 = D_08B2BDB4 - (-16972);
    sp = sp - 16;
    a0 = a0 - 16972;
    { u64 r_ = func_088B72BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B84A4;
L_088B84A4:;
    sp = sp + 16;
    return;
}

/* 088B84B0 */
rv_t func_088B84B0(u32 a0, u32 a1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B84B0:;
    v0 = a0 + 0;
    a0 = D_08B2BDB4 - (-16972);
    sp = sp - 16;
    a2 = a1 + 0;
    a0 = a0 - 16972;
    a1 = v0 + 0;
    { rv_t r_ = func_088B7F7C(a0, a1, a2, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B84D0;
L_088B84D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B84DC */
float func_088B84DC(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B84DC:;
    a1 = a0 + 0;
    a0 = D_08B2BDB4 - (-16972);
    sp = sp - 16;
    a0 = a0 - 16972;
    f0 = func_088B73C4(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088B84F4;
L_088B84F4:;
    sp = sp + 16;
    return f0;
}

/* 088B8500 */
u32 func_088B8500(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088B8500:;
    sp = sp - 96;
    f5 = BITSF(LD32(a3+16));
    f1 = BITSF(LD32(a3));
    f0 = BITSF(LD32(a3+8));
    f4 = BITSF(LD32(a3+4));
    f3 = BITSF(LD32(a3+12));
    f2 = BITSF(LD32(a3+20));
    f7 = f4 - f1;
    f8 = f3 - f0;
    f9 = f2 - f5;
    f4 = f4 + f1;
    f3 = f3 + f0;
    f2 = f2 + f5;
    v0 = D_08AEC62C - (-14804);
    f0 = BITSF(LD32(v0-14804));
    f12 = BITSF(LD32(a0+8));
    f13 = BITSF(LD32(a1+8));
    f9 = f9 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    f7 = f7 * f0;
    f8 = f8 * f0;
    f14 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a1));
    f6 = BITSF(LD32(a1+4));
    f10 = BITSF(LD32(a2));
    f11 = BITSF(LD32(a2+4));
    a0 = sp + 48;
    a1 = sp + 64;
    a2 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f12));
    ST32(sp+12, FBITS(f5));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f13));
    ST32(sp+24, FBITS(f10));
    ST32(sp+28, FBITS(f11));
    ST32(sp+32, FBITS(f14));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f2));
    ST32(sp+64, FBITS(f7));
    ST32(sp+68, FBITS(f8));
    ST32(sp+72, FBITS(f9));
    { rv_t r_ = func_088B6B34(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B85C8;
L_088B85C8:;
    v0 = 0 < v0;
    sp = sp + 96;
    return v0;
}

/* 088B85D8 */
rv_t func_088B85D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088B85D8:;
    f4 = BITSF(LD32(a2+4));
    f3 = BITSF(LD32(a0));
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a2));
    v0 = D_08AEC630 - (-14800);
    f1 = f0 + f3;
    f2 = f2 + f4;
    f0 = f0 - f3;
    f6 = BITSF(LD32(v0-14800));
    f8 = BITSF(LD32(a2+20));
    f3 = BITSF(LD32(a2+8));
    f2 = f2 * f6;
    f1 = f1 * f6;
    f11 = f0 * f6;
    f7 = BITSF(LD32(a2+12));
    f12 = f4 - f2;
    f9 = f1 - f2;
    v0 = FBITS(f11);
    f4 = BITSF(LD32(a2+16));
    f3 = f3 + f7;
    v0 = (v0 >> 0) & 0x7fffffff;
    f10 = BITSF(v0);
    v1 = FBITS(f9);
    f4 = f4 + f8;
    f5 = f12 + f10;
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    f3 = f3 * f6;
    f4 = f4 * f6;
    fcc = FCMP(f5, f1, 12);
    sp = sp - 96;
    ST32(sp+80, FBITS(f2));
    v0 = 0 + 0;
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    ST32(sp+32, FBITS(f11));
    ST32(sp, FBITS(f12));
    ST32(sp+16, FBITS(f9));
    cnd_ = fcc;
    ST32(sp+48, FBITS(f10));
    if (cnd_) { goto L_088B87C8; }
    goto L_088B8684;
L_088B8684:;
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+4));
    f16 = f7 - f3;
    f1 = f0 + f2;
    f0 = f0 - f2;
    ST32(sp+4, FBITS(f16));
    f1 = f1 * f6;
    f14 = f0 * f6;
    f13 = f1 - f3;
    v1 = FBITS(f14);
    ST32(sp+36, FBITS(f14));
    v1 = (v1 >> 0) & 0x7fffffff;
    f5 = BITSF(v1);
    v1 = FBITS(f13);
    ST32(sp+20, FBITS(f13));
    f2 = f16 + f5;
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    ST32(sp+52, FBITS(f5));
    if (cnd_) { goto L_088B87C8; }
    goto L_088B86DC;
L_088B86DC:;
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1+8));
    f15 = f8 - f4;
    f1 = f0 + f2;
    f0 = f0 - f2;
    ST32(sp+8, FBITS(f15));
    f1 = f1 * f6;
    f7 = f0 * f6;
    f8 = f1 - f4;
    v1 = FBITS(f7);
    ST32(sp+40, FBITS(f7));
    v1 = (v1 >> 0) & 0x7fffffff;
    f6 = BITSF(v1);
    v1 = FBITS(f8);
    ST32(sp+24, FBITS(f8));
    f2 = f15 + f6;
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_088B87C8; }
    goto L_088B8734;
L_088B8734:;
    f0 = f7 * f13;
    f4 = f14 * f8;
    f1 = f16 * f6;
    f3 = f15 * f5;
    f2 = f4 - f0;
    f1 = f1 + f3;
    v1 = FBITS(f2);
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f0 = f11 * f8;
    if (cnd_) { goto L_088B87C8; }
    goto L_088B8768;
L_088B8768:;
    f4 = f7 * f9;
    f1 = f12 * f6;
    f3 = f15 * f10;
    f2 = f4 - f0;
    f1 = f1 + f3;
    v1 = FBITS(f2);
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f0 = f14 * f9;
    if (cnd_) { goto L_088B87C8; }
    goto L_088B8798;
L_088B8798:;
    f4 = f11 * f13;
    f1 = f12 * f5;
    f3 = f16 * f10;
    f2 = f4 - f0;
    f1 = f1 + f3;
    v1 = FBITS(f2);
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = 1; goto L_088B87C8; }
    goto L_088B87C8;
L_088B87C8:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 088B87D0 */
rv_t func_088B87D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B87D0:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B2BDB4 - (-16972);
    cnd_ = v0 != 0;
    a0 = a0 - 16972;
    if (cnd_) { goto L_088B883C; }
    goto L_088B8804;
L_088B8804:;
    v0 = s1 < 0x1u;
    goto L_088B8808;
L_088B8808:;
    a0 = D_08B2BDB4 - (-16972);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 - 16972;
    if (cnd_) { goto L_088B882C; }
    goto L_088B8818;
L_088B8818:;
    goto L_088B881C;
L_088B881C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088B882C:;
    { u64 r_ = func_088B72A0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8834;
L_088B8834:;
    goto L_088B881C;
L_088B883C:;
    { rv_t r_ = func_088B7230(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8844;
L_088B8844:;
    v0 = s1 < 0x1u;
    goto L_088B8808;
}

/* 088B884C */
rv_t func_088B884C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B884C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088B87D0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8860;
L_088B8860:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B886C */
rv_t func_088B886C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B886C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088B87D0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8880;
L_088B8880:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B888C */
rv_t func_088B888C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B888C:;
    a0 = D_08B2BE0C - (-16884);
    sp = sp - 16;
    a0 = a0 - 16884;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B88A0;
L_088B88A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B88AC */
void func_088B88AC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B88AC:;
    a1 = a0 + 0;
    a0 = D_08B2BE0C - (-16884);
    sp = sp - 16;
    a0 = a0 - 16884;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B88C4;
L_088B88C4:;
    sp = sp + 16;
    return;
}

/* 088B88D0 */
rv_t func_088B88D0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B88D0:;
    a0 = D_08B2BE18 - (-16872);
    sp = sp - 16;
    a0 = a0 - 16872;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B88E4;
L_088B88E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B88F0 */
void func_088B88F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B88F0:;
    a1 = a0 + 0;
    a0 = D_08B2BE18 - (-16872);
    sp = sp - 16;
    a0 = a0 - 16872;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8908;
L_088B8908:;
    sp = sp + 16;
    return;
}

/* 088B8914 */
rv_t func_088B8914(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8914:;
    a0 = D_08B2BE24 - (-16860);
    sp = sp - 16;
    a0 = a0 - 16860;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8928;
L_088B8928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8934 */
void func_088B8934(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8934:;
    a1 = a0 + 0;
    a0 = D_08B2BE24 - (-16860);
    sp = sp - 16;
    a0 = a0 - 16860;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B894C;
L_088B894C:;
    sp = sp + 16;
    return;
}

/* 088B8958 */
rv_t func_088B8958(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8958:;
    sp = sp - 16;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a0));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_088B89F4; }
    goto L_088B897C;
L_088B897C:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a1); goto L_088B89F8; }
    goto L_088B8994;
L_088B8994:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a1); goto L_088B89F8; }
    goto L_088B89AC;
L_088B89AC:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a1); goto L_088B89F8; }
    goto L_088B89C4;
L_088B89C4:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a1); goto L_088B89F8; }
    goto L_088B89DC;
L_088B89DC:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(a0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088B8A9C; }
    goto L_088B89F4;
L_088B89F4:;
    v1 = LD32(a1);
    goto L_088B89F8;
L_088B89F8:;
    f0 = BITSF(0);
    ST32(s0, v1);
    fcc = FCMP(f0, f12, 12);
    v0 = LD32(a1+4);
    ST32(s0+4, v0);
    v1 = LD32(a1+8);
    ST32(s0+8, v1);
    v0 = LD32(a1+12);
    ST32(s0+12, v0);
    v1 = LD32(a1+16);
    ST32(s0+16, v1);
    v0 = LD32(a1+20);
    cnd_ = !fcc;
    ST32(s0+20, v0);
    if (cnd_) { goto L_088B8A78; }
    goto L_088B8A30;
L_088B8A30:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0+16));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+12));
    f5 = BITSF(LD32(s0+20));
    f0 = f0 - f12;
    f1 = f1 - f12;
    f5 = f5 + f12;
    f2 = f2 - f12;
    f3 = f3 + f12;
    f4 = f4 + f12;
    ST32(s0, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    ST32(s0+16, FBITS(f2));
    ST32(s0+4, FBITS(f3));
    ST32(s0+12, FBITS(f4));
    ST32(s0+20, FBITS(f5));
    goto L_088B8A78;
L_088B8A78:;
    func_088B8D9C(a0, t1, t2, t3);
    goto L_088B8A80;
L_088B8A80:;
    a0 = s0 + 0;
    f0 = func_088B84DC(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088B8A88;
L_088B8A88:;
    v1 = D_08B2BE30 - (-16848);
    v0 = LD32(v1-16848);
    v0 = v0 + 1;
    ST32(v1-16848, v0);
    goto L_088B8A9C;
L_088B8A9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8AA8 */
rv_t func_088B8AA8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8AA8:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+24);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+28); goto L_088B8ADC; }
    goto L_088B8AC8;
L_088B8AC8:;
    s0 = LD32(a0+12);
    func_088B88AC(a0, t1, t2, t3);
    goto L_088B8AD0;
L_088B8AD0:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B8AC8; }
    goto L_088B8AD8;
L_088B8AD8:;
    a0 = LD32(s1+28);
    goto L_088B8ADC;
L_088B8ADC:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+32); goto L_088B8AF8; }
    goto L_088B8AE4;
L_088B8AE4:;
    s0 = LD32(a0+12);
    func_088B88F0(a0, t1, t2, t3);
    goto L_088B8AEC;
L_088B8AEC:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B8AE4; }
    goto L_088B8AF4;
L_088B8AF4:;
    a0 = LD32(s1+32);
    goto L_088B8AF8;
L_088B8AF8:;
    cnd_ = a0 == 0;
    v0 = D_08AEC640 - (-14784);
    if (cnd_) { goto L_088B8B14; }
    goto L_088B8B00;
L_088B8B00:;
    s0 = LD32(a0+12);
    func_088B8934(a0, t1, t2, t3);
    goto L_088B8B08;
L_088B8B08:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B8B00; }
    goto L_088B8B10;
L_088B8B10:;
    v0 = D_08AEC640 - (-14784);
    goto L_088B8B14;
L_088B8B14:;
    v1 = D_08AEC644 - (-14780);
    f0 = BITSF(LD32(v0-14784));
    f1 = BITSF(LD32(v1-14780));
    ST32(s1+24, 0);
    ST32(s1+20, FBITS(f1));
    ST32(s1+16, FBITS(f0));
    ST32(s1+28, 0);
    ST32(s1+32, 0);
    ST32(s1, FBITS(f0));
    ST32(s1+8, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    ST32(s1+12, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8B58 */
rv_t func_088B8B58(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8B58:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088B8AA8(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8B6C;
L_088B8B6C:;
    v1 = 4;
    v0 = LD32(s0+36);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s0+36, v0);
    ST16(s0+36, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8B90 */
rv_t func_088B8B90(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8B90:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088B8BC8; }
    goto L_088B8BB0;
L_088B8BB0:;
    v0 = LD32(v1);
    goto L_088B8BB4;
L_088B8BB4:;
    cnd_ = v0 == s0;
    if (cnd_) { goto L_088B8BF4; }
    goto L_088B8BBC;
L_088B8BBC:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088B8BB4; }
    goto L_088B8BC8;
L_088B8BC8:;
    { rv_t r_ = func_088B888C(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8BD0;
L_088B8BD0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088B8BF0; }
    goto L_088B8BD8;
L_088B8BD8:;
    v0 = LD32(s1+24);
    ST32(v1, s0);
    ST32(v1+12, v0);
    ST32(v1+4, 0);
    ST32(s1+24, v1);
    ST32(v1+8, 0);
    goto L_088B8BF0;
L_088B8BF0:;
    goto L_088B8BF4;
L_088B8BF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8C04 */
rv_t func_088B8C04(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B8C04:;
    sp = sp - 32;
    a3 = D_08B2BDB4 - (-16972);
    s3 = a0 + 0;
    s2 = a2 + 0;
    a2 = a1 >> 16;
    s1 = a1 + 0;
    a1 = s2 >> 16;
    v0 = a2 << 3;
    v1 = a1 << 3;
    v0 = v0 - a2;
    v1 = v1 - a1;
    t0 = LD32(a3-16972);
    v0 = v0 << 3;
    v1 = v1 << 3;
    v1 = v1 + t0;
    v0 = v0 + t0;
    a2 = LD32(v0+4);
    a1 = LD32(v1+4);
    a3 = a3 - 16972;
    v0 = LD32(a3+56);
    v1 = s1 & 0xffff;
    a3 = s2 & 0xffff;
    a2 = a2 + v1;
    a1 = a1 + a3;
    a2 = a2 << 4;
    a1 = a1 << 4;
    a1 = v0 + a1;
    v0 = v0 + a2;
    a0 = v0 + 0;
    a2 = s3 + 0;
    s0 = LD32(s3+28);
    { rv_t r_ = func_088B85D8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8C98;
L_088B8C98:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B8CF4; }
    goto L_088B8CA0;
L_088B8CA0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088B8CC8; }
    goto L_088B8CA8;
L_088B8CA8:;
    v1 = LD32(s0);
    goto L_088B8CAC;
L_088B8CAC:;
    cnd_ = v1 == s1;
    if (cnd_) { v0 = LD32(s0+4); goto L_088B8D1C; }
    goto L_088B8CB4;
L_088B8CB4:;
    cnd_ = v1 == s2;
    if (cnd_) { v0 = LD32(s0+4); goto L_088B8D0C; }
    goto L_088B8CBC;
L_088B8CBC:;
    s0 = LD32(s0+12);
    goto L_088B8CC0;
L_088B8CC0:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_088B8CAC; }
    goto L_088B8CC8;
L_088B8CC8:;
    { rv_t r_ = func_088B88D0(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8CD0;
L_088B8CD0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088B8CF0; }
    goto L_088B8CD8;
L_088B8CD8:;
    v0 = LD32(s3+28);
    ST32(v1, s1);
    ST32(v1+12, v0);
    ST32(v1+4, s2);
    ST32(s3+28, v1);
    ST32(v1+8, 0);
    goto L_088B8CF0;
L_088B8CF0:;
    goto L_088B8CF4;
L_088B8CF4:;
    goto L_088B8CF8;
L_088B8CF8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088B8D0C:;
    cnd_ = v0 != s1;
    if (cnd_) { s0 = LD32(s0+12); goto L_088B8CC0; }
    goto L_088B8D14;
L_088B8D14:;
    goto L_088B8CF4;
L_088B8D1C:;
    cnd_ = v0 != s2;
    if (cnd_) { goto L_088B8CB4; }
    goto L_088B8D24;
L_088B8D24:;
    goto L_088B8CF8;
}

/* 088B8D2C */
rv_t func_088B8D2C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8D2C:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0+32);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088B8D64; }
    goto L_088B8D4C;
L_088B8D4C:;
    v0 = LD32(v1);
    goto L_088B8D50;
L_088B8D50:;
    cnd_ = v0 == s0;
    if (cnd_) { goto L_088B8D8C; }
    goto L_088B8D58;
L_088B8D58:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088B8D50; }
    goto L_088B8D64;
L_088B8D64:;
    { rv_t r_ = func_088B8914(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B8D6C;
L_088B8D6C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088B8D88; }
    goto L_088B8D74;
L_088B8D74:;
    v0 = LD32(s1+32);
    ST32(v1, s0);
    ST32(v1+12, v0);
    ST32(v1+8, 0);
    ST32(s1+32, v1);
    goto L_088B8D88;
L_088B8D88:;
    goto L_088B8D8C;
L_088B8D8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B8D9C */
void func_088B8D9C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B8D9C:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    s0 = a0 + 24;
    if (cnd_) { goto L_088B8DDC; }
    goto L_088B8DBC;
L_088B8DBC:;
    v1 = v0 + 0;
    goto L_088B8DC0;
L_088B8DC0:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088B8E70; }
    goto L_088B8DCC;
L_088B8DCC:;
    s0 = v1 + 12;
    v0 = LD32(s0);
    goto L_088B8DD4;
L_088B8DD4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088B8DC0; }
    goto L_088B8DDC;
L_088B8DDC:;
    v0 = LD32(s1+28);
    cnd_ = v0 == 0;
    s0 = s1 + 28;
    if (cnd_) { goto L_088B8E08; }
    goto L_088B8DE8;
L_088B8DE8:;
    v1 = v0 + 0;
    goto L_088B8DEC;
L_088B8DEC:;
    v0 = LD32(v1+8);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088B8E5C; }
    goto L_088B8DF8;
L_088B8DF8:;
    s0 = v1 + 12;
    v0 = LD32(s0);
    goto L_088B8E00;
L_088B8E00:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088B8DEC; }
    goto L_088B8E08;
L_088B8E08:;
    v0 = LD32(s1+32);
    cnd_ = v0 == 0;
    s0 = s1 + 32;
    if (cnd_) { goto L_088B8E34; }
    goto L_088B8E14;
L_088B8E14:;
    v1 = v0 + 0;
    goto L_088B8E18;
L_088B8E18:;
    v0 = LD32(v1+8);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088B8E48; }
    goto L_088B8E24;
L_088B8E24:;
    s0 = v1 + 12;
    v0 = LD32(s0);
    goto L_088B8E2C;
L_088B8E2C:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088B8E18; }
    goto L_088B8E34;
L_088B8E34:;
    sp = sp + 16;
    return;
L_088B8E48:;
    v0 = LD32(v1+12);
    ST32(s0, v0);
    func_088B8934(a0, t1, t2, t3);
    goto L_088B8E54;
L_088B8E54:;
    v0 = LD32(s0);
    goto L_088B8E2C;
L_088B8E5C:;
    v0 = LD32(v1+12);
    ST32(s0, v0);
    func_088B88F0(a0, t1, t2, t3);
    goto L_088B8E68;
L_088B8E68:;
    v0 = LD32(s0);
    goto L_088B8E00;
L_088B8E70:;
    v0 = LD32(v1+12);
    ST32(s0, v0);
    func_088B88AC(a0, t1, t2, t3);
    goto L_088B8E7C;
L_088B8E7C:;
    v0 = LD32(s0);
    goto L_088B8DD4;
}

/* 088B8E84 */
u64 func_088B8E84(u32 a0, u32 a1, u32 t1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088B8E84:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    t2 = s3 < 0x1u;
    v0 = t2 & v0;
    t3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B8EFC; }
    goto L_088B8EB8;
L_088B8EB8:;
    a1 = D_08B2BE0C - (-16884);
    a2 = D_08B2BE18 - (-16872);
    t1 = D_08B2BE24 - (-16860);
    v1 = 32;
    v0 = 16;
    a3 = a1 - 16884;
    t0 = a2 - 16872;
    a0 = t1 - 16860;
    ST32(a0+8, v0);
    ST32(a0+4, v1);
    ST32(a3+8, v0);
    ST32(a3+4, v1);
    ST32(a1-16884, 0);
    ST32(a2-16872, 0);
    ST32(t0+8, v0);
    ST32(t1-16860, 0);
    ST32(t0+4, v1);
    goto L_088B8EFC;
L_088B8EFC:;
    s2 = t3 < 0x1u;
    v0 = t2 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088B8F40; }
    goto L_088B8F0C;
L_088B8F0C:;
    v0 = D_08B2BE24 - (-16860);
    s0 = LD32(v0-16860);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088B8F40; }
    goto L_088B8F1C;
L_088B8F1C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088B9040; }
    goto L_088B8F28;
L_088B8F28:;
    s1 = LD32(s0+12);
    goto L_088B8F2C;
L_088B8F2C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088B9028; }
    goto L_088B8F34;
L_088B8F34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8F3C;
L_088B8F3C:;
    v0 = s3 < 0x1u;
    goto L_088B8F40;
L_088B8F40:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088B8F80; }
    goto L_088B8F4C;
L_088B8F4C:;
    v0 = D_08B2BE18 - (-16872);
    s0 = LD32(v0-16872);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088B8F80; }
    goto L_088B8F5C;
L_088B8F5C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088B9018; }
    goto L_088B8F68;
L_088B8F68:;
    s1 = LD32(s0+12);
    goto L_088B8F6C;
L_088B8F6C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088B9000; }
    goto L_088B8F74;
L_088B8F74:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8F7C;
L_088B8F7C:;
    v0 = s3 < 0x1u;
    goto L_088B8F80;
L_088B8F80:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B8FC0; }
    goto L_088B8F8C;
L_088B8F8C:;
    v0 = D_08B2BE0C - (-16884);
    s0 = LD32(v0-16884);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088B8FC4; }
    goto L_088B8F9C;
L_088B8F9C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088B8FF0; }
    goto L_088B8FA8;
L_088B8FA8:;
    s1 = LD32(s0+12);
    goto L_088B8FAC;
L_088B8FAC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088B8FD8; }
    goto L_088B8FB4;
L_088B8FB4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8FBC;
L_088B8FBC:;
    goto L_088B8FC0;
L_088B8FC0:;
    goto L_088B8FC4;
L_088B8FC4:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088B8FD8:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088B8FE0;
L_088B8FE0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8FE8;
L_088B8FE8:;
    goto L_088B8FB4;
L_088B8FF0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B8FF8;
L_088B8FF8:;
    s1 = LD32(s0+12);
    goto L_088B8FAC;
L_088B9000:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088B9008;
L_088B9008:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9010;
L_088B9010:;
    goto L_088B8F74;
L_088B9018:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9020;
L_088B9020:;
    s1 = LD32(s0+12);
    goto L_088B8F6C;
L_088B9028:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088B9030;
L_088B9030:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9038;
L_088B9038:;
    goto L_088B8F34;
L_088B9040:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9048;
L_088B9048:;
    s1 = LD32(s0+12);
    goto L_088B8F2C;
}

/* 088B9050 */
rv_t func_088B9050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B9050:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088B8E84(a0, a1, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9064;
L_088B9064:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B9070 */
rv_t func_088B9070(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088B9070:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088B8E84(a0, a1, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9084;
L_088B9084:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088B9090 */
void func_088B9090(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16); memcpy(stack_ + 16, PTR(sp_in), 32); /* stack-passed arguments */
L_088B9090:;
    sp = sp - 16;
    t5 = a0 + 0;
    t1 = t1 & 0xffff;
    v0 = LD32(a1);
    t9 = LD_U8(sp+16);
    s0 = LD_U8(sp+20);
    ST32(a0, v0);
    t2 = t2 & 0xff;
    t3 = t3 & 0xff;
    v0 = LD32(a1+4);
    t7 = LD_U8(sp+24);
    t8 = LD_U8(sp+28);
    ST32(a0+4, v0);
    t4 = a0 + 32;
    t6 = a3 + 80;
    v0 = LD32(a1+8);
    ST32(a0+8, v0);
    v0 = LD32(a1+12);
    ST32(a0+12, v0);
    v0 = LD32(a2);
    ST32(a0+16, v0);
    v0 = LD32(a2+4);
    ST32(a0+20, v0);
    v1 = LD32(a2+8);
    ST32(a0+24, v1);
    v0 = LD32(a2+12);
    ST32(a0+28, v0);
    goto L_088B9100;
L_088B9100:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t4, v0);
    a3 = a3 + 16;
    t4 = t4 + 16;
    ST32(t4-12, v1);
    ST32(t4-8, a0);
    cnd_ = a3 != t6;
    ST32(t4-4, a1);
    if (cnd_) { goto L_088B9100; }
    goto L_088B912C;
L_088B912C:;
    v1 = LD32(sp+36);
    ST16(t5+120, t1);
    ST32(t5+128, v1);
    v1 = (u32)-1;
    v0 = LD32(t5+120);
    v0 = (v0 & ~(0x1u << 16)) | ((t2 & 0x1) << 16);
    v0 = (v0 & ~(0x1u << 17)) | ((t3 & 0x1) << 17);
    v0 = (v0 & ~(0x1u << 18)) | ((t9 & 0x1) << 18);
    v0 = (v0 & ~(0x1u << 19)) | ((s0 & 0x1) << 19);
    v0 = (v0 & ~(0x1u << 20)) | ((t7 & 0x1) << 20);
    v0 = (v0 & ~(0x1u << 21)) | ((t8 & 0x1) << 21);
    ST32(t5+116, v1);
    ST32(t5+120, v0);
    v1 = LD32(sp+32);
    ST32(t5+112, t0);
    ST32(t5+124, v1);
    sp = sp + 16;
    return;
}

/* 088B9178 */
void func_088B9178(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088B9178:;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(a1+4);
    ST32(a0+4, v0);
    v1 = LD32(a1+8);
    ST32(a0+8, v1);
    v0 = LD32(a1+12);
    ST32(a0+12, v0);
    return;
}

/* 088B919C */
u32 func_088B919C(u32 a0)
{
    u32 v0 = 0;
L_088B919C:;
    v0 = a0 + 0;
    return v0;
}

/* 088B91A4 */
u32 func_088B91A4(u32 a0)
{
    u32 v0 = 0;
L_088B91A4:;
    v0 = a0 + 32;
    return v0;
}

/* 088B91AC */
void func_088B91AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088B91AC:;
    v1 = LD32(a1);
    ST32(a0+16, v1);
    v0 = LD32(a1+4);
    ST32(a0+20, v0);
    v1 = LD32(a1+8);
    ST32(a0+24, v1);
    v0 = LD32(a1+12);
    ST32(a0+28, v0);
    return;
}

/* 088B91D0 */
u32 func_088B91D0(u32 a0)
{
    u32 v0 = 0;
L_088B91D0:;
    v0 = a0 + 16;
    return v0;
}

/* 088B91D8 */
u32 func_088B91D8(u32 a0)
{
    u32 v0 = 0;
L_088B91D8:;
    v0 = LD_U16(a0+122);
    v0 = v0 & 0x1;
    return v0;
}

/* 088B91E4 */
void func_088B91E4(u32 a0, u32 a1)
{
L_088B91E4:;
    ST16(a0+120, a1);
    return;
}

/* 088B91EC */
u32 func_088B91EC(u32 a0)
{
    u32 v0 = 0;
L_088B91EC:;
    v0 = LD_U16(a0+120);
    return v0;
}

/* 088B91F4 */
void func_088B91F4(u32 a0, u32 a1)
{
L_088B91F4:;
    ST32(a0+116, a1);
    return;
}

/* 088B91FC */
u32 func_088B91FC(u32 a0)
{
    u32 v0 = 0;
L_088B91FC:;
    v0 = LD32(a0+116);
    return v0;
}

/* 088B9204 */
void func_088B9204(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088B9204:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+120);
    v0 = (v0 & ~(0x1u << 17)) | ((a1 & 0x1) << 17);
    ST32(a0+120, v0);
    return;
}

/* 088B9218 */
u32 func_088B9218(u32 a0)
{
    u32 v0 = 0;
L_088B9218:;
    v0 = LD32(a0+120);
    v0 = (v0 >> 17) & 0x1;
    return v0;
}

/* 088B9224 */
void func_088B9224(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088B9224:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+120);
    v0 = (v0 & ~(0x1u << 18)) | ((a1 & 0x1) << 18);
    ST32(a0+120, v0);
    return;
}

/* 088B9238 */
u32 func_088B9238(u32 a0)
{
    u32 v0 = 0;
L_088B9238:;
    v0 = LD32(a0+120);
    v0 = (v0 >> 18) & 0x1;
    return v0;
}

/* 088B9244 */
void func_088B9244(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088B9244:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+120);
    v0 = (v0 & ~(0x1u << 19)) | ((a1 & 0x1) << 19);
    ST32(a0+120, v0);
    return;
}

/* 088B9258 */
u32 func_088B9258(u32 a0)
{
    u32 v0 = 0;
L_088B9258:;
    v0 = LD32(a0+120);
    v0 = (v0 >> 19) & 0x1;
    return v0;
}

/* 088B9264 */
u32 func_088B9264(u32 a0)
{
    u32 v0 = 0;
L_088B9264:;
    v0 = LD32(a0+120);
    v0 = (v0 >> 20) & 0x1;
    return v0;
}

/* 088B9270 */
u32 func_088B9270(u32 a0)
{
    u32 v0 = 0;
L_088B9270:;
    v0 = LD32(a0+120);
    v0 = (v0 >> 21) & 0x1;
    return v0;
}

/* 088B927C */
u32 func_088B927C(u32 a0)
{
    u32 v0 = 0;
L_088B927C:;
    v0 = LD32(a0+124);
    return v0;
}

/* 088B9284 */
void func_088B9284(u32 a0, u32 a1)
{
L_088B9284:;
    ST32(a0+128, a1);
    return;
}

/* 088B928C */
u32 func_088B928C(u32 a0)
{
    u32 v0 = 0;
L_088B928C:;
    v0 = LD32(a0+128);
    return v0;
}

/* 088B9294 */
void func_088B9294(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8];
    u8 stack_[816] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 816);
L_088B9294:;
    sp = sp - 816;
    s4 = a0 + 0;
    a0 = a1 + 0;
    s3 = a1 + 0;
    v0 = func_088B91D0(a0);
    goto L_088B92F4;
L_088B92F4:;
    v1 = LD32(v0);
    ST32(sp, v1);
    a0 = LD32(v0+4);
    ST32(sp+4, a0);
    v1 = LD32(v0+8);
    ST32(sp+8, v1);
    a0 = LD32(v0+12);
    ST32(sp+12, a0);
    {u32 a_=sp+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    if (cnd_) { goto L_088B9338; }
    goto L_088B932C;
L_088B932C:;
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B9338;
L_088B9338:;
    {v0=FBITS(vr8);}
    f0 = BITSF(v0);
    a0 = sp + 16;
    f23 = BITSF(v0);
    f20 = f0;
    ST32(sp+40, 0);
    ST32(sp+44, 0);
    ST32(sp+560, 0);
    ST32(sp+568, 0);
    ST32(sp+48, 0);
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B9364;
L_088B9364:;
    a0 = s3 + 0;
    v0 = func_088B91EC(a0);
    goto L_088B936C;
L_088B936C:;
    a0 = s3 + 0;
    ST16(sp+52, v0);
    v0 = func_088B919C(a0);
    goto L_088B9378;
L_088B9378:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    a1 = LD32(v0);
    a0 = s3 + 0;
    ST32(s4+16, a1);
    v1 = LD32(v0+4);
    ST32(s4+20, v1);
    a1 = LD32(v0+8);
    ST32(s4+24, a1);
    v1 = LD32(v0+12);
    {u32 a_=s4+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(s4+28, v1);
    v0 = func_088B9264(a0);
    goto L_088B93A8;
L_088B93A8:;
    ST32(sp+564, v0);
    a0 = s3 + 0;
    v0 = func_088B9218(a0);
    goto L_088B93B4;
L_088B93B4:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088B93DC; }
    goto L_088B93BC;
L_088B93BC:;
    a0 = s3 + 0;
    v0 = func_088B9238(a0);
    goto L_088B93C4;
L_088B93C4:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088B93DC; }
    goto L_088B93CC;
L_088B93CC:;
    a0 = s3 + 0;
    v0 = func_088B9270(a0);
    goto L_088B93D4;
L_088B93D4:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_088B93E0; }
    goto L_088B93DC;
L_088B93DC:;
    ST32(sp+568, v1);
    goto L_088B93E0;
L_088B93E0:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = D_08AEC678 - (-14728);
    if (cnd_) { goto L_088B97B0; }
    goto L_088B93F4;
L_088B93F4:;
    v1 = D_08AEC67C - (-14724);
    f24 = BITSF(LD32(v0-14728));
    f25 = BITSF(LD32(v1-14724));
    v0 = D_08AEC680 - (-14720);
    v1 = D_08AEC688 - (-14712);
    f27 = BITSF(LD32(v0-14720));
    f28 = BITSF(LD32(v1-14712));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    f26 = f0;
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+560);
    goto L_088B9420;
L_088B9420:;
    v0 = v0 + 1;
    ST32(sp+560, v0);
    v0 = v0 < 0xbu;
    cnd_ = v0 == 0;
    {u32 a_=sp+(576);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B97B0; }
    goto L_088B9434;
L_088B9434:;
    v1 = FBITS(f23);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(576);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = s4 + 16;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s4+16));
    s5 = sp + 96;
    v0 = (u32)-1;
    a0 = s5 + 0;
    a1 = sp + 128;
    ST32(sp+136, FBITS(f2));
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    fp = 0 + 0;
    ST32(sp+548, v0);
    ST32(sp+128, FBITS(f0));
    ST32(sp+132, FBITS(f1));
    ST32(sp+96, FBITS(f24));
    ST32(sp+104, FBITS(f24));
    ST32(sp+112, FBITS(f24));
    ST32(sp+100, FBITS(f25));
    ST32(sp+108, FBITS(f25));
    ST32(sp+116, FBITS(f25));
    f0 = func_08AA0F30(a0, a1);
    goto L_088B94A8;
L_088B94A8:;
    {u32 a_=s4+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a1 = sp + 128;
    a0 = s5 + 0;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = BITSF(LD32(sp+144));
    f1 = BITSF(LD32(sp+148));
    ST32(sp+128, FBITS(f0));
    f0 = BITSF(LD32(sp+152));
    ST32(sp+132, FBITS(f1));
    ST32(sp+136, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_088B94DC;
L_088B94DC:;
    a0 = s3 + 0;
    v0 = func_088B91A4(a0);
    goto L_088B94E4;
L_088B94E4:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s0 = v0 + 0;
    if (cnd_) { goto L_088B9500; }
    goto L_088B94FC;
L_088B94FC:;
    f0 = f1;
    goto L_088B9500;
L_088B9500:;
    f1 = BITSF(LD32(s0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f6 = f0;
    if (cnd_) { goto L_088B9518; }
    goto L_088B9514;
L_088B9514:;
    f6 = f1;
    goto L_088B9518;
L_088B9518:;
    f3 = BITSF(LD32(sp+96));
    f4 = BITSF(LD32(sp+104));
    f5 = BITSF(LD32(sp+116));
    f2 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+100));
    f0 = BITSF(LD32(sp+108));
    f3 = f3 - f6;
    f4 = f4 - f6;
    f5 = f5 + f6;
    f2 = f2 - f6;
    f1 = f1 + f6;
    f0 = f0 + f6;
    v1 = LD32(sp+564);
    ST32(sp+96, FBITS(f3));
    f22 = f23;
    ST32(sp+104, FBITS(f4));
    ST32(sp+112, FBITS(f2));
    ST32(sp+100, FBITS(f1));
    ST32(sp+108, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(sp+116, FBITS(f5));
    if (cnd_) { goto L_088B9C48; }
    goto L_088B956C;
L_088B956C:;
    v0 = LD32(sp+568);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088B9588; }
    goto L_088B9578;
L_088B9578:;
    fcc = FCMP(f26, f22, 12);
    cnd_ = fcc;
    s6 = sp + 400;
    if (cnd_) { goto L_088B980C; }
    goto L_088B9588;
L_088B9588:;
    f21 = BITSF(0);
    fcc = FCMP(f21, f22, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(672);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B95DC; }
    goto L_088B959C;
L_088B959C:;
    v0 = FBITS(f22);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(672);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s4+(16);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s4+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f23 = f23 - f22;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {float s0=vr8;float s1=v[9];float s2=v[10];float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr8=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s4+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s4+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_088B95DC;
L_088B95DC:;
    a0 = s3 + 0;
    v0 = func_088B91D8(a0);
    goto L_088B95E4;
L_088B95E4:;
    cnd_ = v0 != 0;
    v0 = D_08AEC690 - (-14704);
    if (cnd_) { goto L_088B97B0; }
    goto L_088B95EC;
L_088B95EC:;
    f0 = BITSF(LD32(v0-14704));
    fcc = FCMP(f23, f0, 12);
    cnd_ = fcc;
    a2 = LD32(sp+548);
    if (cnd_) { goto L_088B97B0; }
    goto L_088B9600;
L_088B9600:;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    f20 = BITSF(LD32(sp+68));
    if (cnd_) { goto L_088B9638; }
    goto L_088B960C;
L_088B960C:;
    v1 = a2 >> 16;
    a0 = D_08B2BDB4 - (-16972);
    a1 = LD32(a0-16972);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    a1 = a1 + v0;
    a2 = (a2 >> 1) & 0x7fff;
    a0 = a0 - 16972;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B9634;
L_088B9634:;
    fp = v0 & 0xffff;
    goto L_088B9638;
L_088B9638:;
    s0 = D_08AEC694 - (-14700);
    f0 = BITSF(LD32(s0-14700));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    v0 = fp & 0x10;
    if (cnd_) { goto L_088B9658; }
    goto L_088B9650;
L_088B9650:;
    cnd_ = v0 == 0;
    v0 = D_08AEC698 - (-14696);
    if (cnd_) { goto L_088B9688; }
    goto L_088B9658;
L_088B9658:;
    a0 = s3 + 0;
    v0 = func_088B91D0(a0);
    goto L_088B9660;
L_088B9660:;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f21, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08AEC698 - (-14696); goto L_088B9688; }
    goto L_088B9674;
L_088B9674:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    v0 = D_08AEC698 - (-14696);
    if (cnd_) { goto L_088B97B0; }
    goto L_088B9688;
L_088B9688:;
    f0 = BITSF(LD32(v0-14696));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B96E8; }
    goto L_088B969C;
L_088B969C:;
    f0 = BITSF(LD32(s0-14700));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    {float s0=v[12];float s1=v[13];float s2=v[14];float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    if (cnd_) { goto L_088B96EC; }
    goto L_088B96B0;
L_088B96B0:;
    v0 = fp & 0x10;
    cnd_ = v0 == 0;
    {u32 a_=sp+(64);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B96F0; }
    goto L_088B96BC;
L_088B96BC:;
    v0 = D_08AEC69C - (-14692);
    f0 = BITSF(LD32(v0-14692));
    {u32 a_=sp+(592);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+4, FBITS(f0));
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=v[12];float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    goto L_088B96E8;
L_088B96E8:;
    {float s0=v[12];float s1=v[13];float s2=v[14];float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    goto L_088B96EC;
L_088B96EC:;
    {u32 a_=sp+(64);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    goto L_088B96F0;
L_088B96F0:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    fcc = FCMP(f26, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088B975C; }
    goto L_088B970C;
L_088B970C:;
    v1 = v0 + 0;
    {u32 a_=sp+(688);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=v[9];float s2=v[10];float t0=vr0;vr8=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    v0 = D_08AEC6A0 - (-14688);
    f0 = BITSF(LD32(v0-14688));
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(704);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088B975C;
L_088B975C:;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=v[9];float s2=v[10];float t0=vr8;float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(592);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B9780; }
    goto L_088B9774;
L_088B9774:;
    {float s0=v[12];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr8;float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B9780;
L_088B9780:;
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    v0 = D_08AEC6A4 - (-14684);
    f0 = BITSF(LD32(v0-14684));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B97B0; }
    goto L_088B97A0;
L_088B97A0:;
    fcc = FCMP(f26, f23, 12);
    cnd_ = fcc;
    v0 = LD32(sp+560);
    if (cnd_) { goto L_088B9420; }
    goto L_088B97B0;
L_088B97B0:;
    a0 = sp + 16;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B97B8;
L_088B97B8:;
    sp = sp + 816;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;return; }
L_088B980C:;
    a0 = s6 + 0;
    func_088B18EC(a0);
    goto L_088B9814;
L_088B9814:;
    a0 = s3 + 0;
    v0 = func_088B9218(a0);
    goto L_088B981C;
L_088B981C:;
    a0 = s3 + 0;
    s2 = v0 + 0;
    v0 = func_088B9238(a0);
    goto L_088B9828;
L_088B9828:;
    a0 = s3 + 0;
    s1 = v0 + 0;
    v0 = func_088B9258(a0);
    goto L_088B9834;
L_088B9834:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    v0 = func_088B9270(a0);
    goto L_088B9840;
L_088B9840:;
    t1 = v0 + 0;
    a2 = s2 + 0;
    a3 = s1 + 0;
    t0 = s0 + 0;
    a0 = s6 + 0;
    a1 = s5 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;func_088B1958(a0, a1, a2, a3, t0, t1, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];});
    goto L_088B985C;
L_088B985C:;
    a0 = s3 + 0;
    v0 = func_088B91A4(a0);
    goto L_088B9864;
L_088B9864:;
    a2 = v0 + 0;
    a3 = sp + 208;
    t0 = v0 + 80;
    goto L_088B9870;
L_088B9870:;
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
    if (cnd_) { goto L_088B9870; }
    goto L_088B989C;
L_088B989C:;
    a0 = s3 + 0;
    v0 = func_088B91A4(a0);
    goto L_088B98A4;
L_088B98A4:;
    {u32 a_=v0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s4+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    s2 = LD32(sp+400);
    ST32(sp+552, FBITS(f27));
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    ST32(sp+224, v0);
    ST32(sp+228, v1);
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+232, v0);
    ST32(sp+236, v1);
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp+144, v0);
    ST32(sp+148, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+152, v0);
    cnd_ = s2 == 0;
    ST32(sp+156, v1);
    if (cnd_) { goto L_088B9930; }
    goto L_088B9900;
L_088B9900:;
    v0 = D_08AEC68C - (-14708);
    f20 = BITSF(LD32(v0-14708));
    s1 = LD32(s2);
    goto L_088B990C;
L_088B990C:;
    a0 = s3 + 0;
    v0 = func_088B928C(a0);
    goto L_088B9914;
L_088B9914:;
    v1 = LD32(s1+392);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B9988; }
    goto L_088B9924;
L_088B9924:;
    s2 = LD32(s2+4);
    goto L_088B9928;
L_088B9928:;
    cnd_ = s2 != 0;
    if (cnd_) { s1 = LD32(s2); goto L_088B990C; }
    goto L_088B9930;
L_088B9930:;
    f0 = BITSF(LD32(sp+552));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088B995C; }
    goto L_088B9948;
L_088B9948:;
    f22 = f1;
    goto L_088B994C;
L_088B994C:;
    a0 = s6 + 0;
    { u64 r_ = func_088B18F4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9954;
L_088B9954:;
    goto L_088B9588;
L_088B995C:;
    fcc = FCMP(f0, f27, 12);
    cnd_ = !fcc;
    f0 = f0 * f22;
    if (cnd_) { goto L_088B994C; }
    goto L_088B996C;
L_088B996C:;
    f0 = f0 - f28;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B9980; }
    goto L_088B9980;
L_088B9980:;
    f22 = f0;
    goto L_088B994C;
L_088B9988:;
    a0 = s3 + 0;
    v0 = func_088B927C(a0);
    goto L_088B9990;
L_088B9990:;
    v1 = LD32(s1+396);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(s2+4); goto L_088B9928; }
    goto L_088B99A0;
L_088B99A0:;
    s0 = LD32(s1+356);
    a0 = s3 + 0;
    v0 = func_088B91FC(a0);
    goto L_088B99AC;
L_088B99AC:;
    cnd_ = s0 == v0;
    if (cnd_) { s2 = LD32(s2+4); goto L_088B9928; }
    goto L_088B99B4;
L_088B99B4:;
    v1 = LD32(s1+272);
    cnd_ = v1 == 0;
    v0 = 3;
    if (cnd_) { goto L_088B99C8; }
    goto L_088B99C0;
L_088B99C0:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s1+276); goto L_088B9A9C; }
    goto L_088B99C8;
L_088B99C8:;
    a0 = sp + 496;
    a1 = s1 + 0;
    func_088C3A64(a0, a1);
    goto L_088B99D4;
L_088B99D4:;
    v0 = LD32(sp+496);
    v1 = LD32(sp+508);
    a0 = s1 + 208;
    ST32(sp+416, v0);
    a2 = s1 + 0;
    a3 = sp + 448;
    v0 = LD32(sp+500);
    ST32(sp+428, v1);
    t0 = s1 + 48;
    ST32(sp+420, v0);
    v0 = LD32(sp+504);
    ST32(sp+424, v0);
    v0 = LD32(s1+208);
    ST32(sp+432, v0);
    v1 = LD32(a0+4);
    ST32(sp+436, v1);
    v0 = LD32(a0+8);
    ST32(sp+440, v0);
    v1 = LD32(a0+12);
    ST32(sp+444, v1);
    goto L_088B9A24;
L_088B9A24:;
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
    if (cnd_) { goto L_088B9A24; }
    goto L_088B9A50;
L_088B9A50:;
    s1 = sp + 144;
    a2 = s1 + 0;
    a0 = sp + 208;
    a1 = sp + 416;
    a3 = sp + 552;
    t0 = sp + 64;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;__auto_type vr_t_ = func_088B2FF0(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr_t_; });
    goto L_088B9A6C;
L_088B9A6C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(s2+4); goto L_088B9928; }
    goto L_088B9A74;
L_088B9A74:;
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {u32 a_=sp+(592);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = (u32)-1;
    ST32(sp+548, v1);
    {float s0=vr4;float d0=sqrtf(s0);vr4=d0;}
    {float s0=v[12];float t0=vr4;float d0=s0/t0;vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088B9924;
L_088B9A9C:;
    cnd_ = a1 == 0;
    if (cnd_) { s2 = LD32(s2+4); goto L_088B9928; }
    goto L_088B9AA4;
L_088B9AA4:;
    a1 = LD32(a1+32);
    cnd_ = a1 == 0;
    s0 = sp + 512;
    if (cnd_) { goto L_088B9924; }
    goto L_088B9AB0;
L_088B9AB0:;
    a0 = s0 + 0;
    func_088B6508(a0, a1);
    goto L_088B9AB8;
L_088B9AB8:;
    a0 = s0 + 0;
    func_088B6518(a0);
    goto L_088B9AC0;
L_088B9AC0:;
    s5 = 0 + 0;
    s7 = sp + 160;
    fp = sp + 144;
    a0 = s0 + 0;
    goto L_088B9AD0;
L_088B9AD0:;
    a1 = s7 + 0;
    v0 = func_088B657C(a0, a1);
    goto L_088B9AD8;
L_088B9AD8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088B9C38; }
    goto L_088B9AE0;
L_088B9AE0:;
    a0 = s1 + 0;
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;__auto_type vr_t_ = func_088C9D8C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088B9AE8;
L_088B9AE8:;
    a3 = s1 + 192;
    a2 = 0 + 0;
    a1 = s7 + 0;
    goto L_088B9AF4;
L_088B9AF4:;
    {u32 a_=s1+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=a1+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(608);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {float t0=v[48];float t1=v[49];float t2=v[50];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    a2 = a2 + 1;
    a0 = a2 < 0x3u;
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+496);
    ST32(a1, v0);
    v1 = LD32(sp+500);
    ST32(a1+4, v1);
    v0 = LD32(sp+504);
    ST32(a1+8, v0);
    v1 = LD32(sp+508);
    ST32(a1+12, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 16;
    if (cnd_) { goto L_088B9AF4; }
    goto L_088B9B68;
L_088B9B68:;
    f12 = BITSF(LD32(sp+552));
    a0 = sp + 208;
    a1 = fp + 0;
    a2 = s7 + 0;
    a3 = sp + 528;
    t0 = sp + 556;
    t1 = sp + 544;
    t2 = 1;
    ST32(sp+556, 0);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;__auto_type vr_t_ = func_088B3784(a0, a1, a2, a3, t0, t1, t2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr_t_; });
    goto L_088B9B90;
L_088B9B90:;
    fcc = FCMP(f0, f26, 14);
    cnd_ = fcc;
    f4 = f0;
    if (cnd_) { goto L_088B9C30; }
    goto L_088B9BA0;
L_088B9BA0:;
    f0 = BITSF(LD32(sp+552));
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    v0 = LD32(sp+528);
    if (cnd_) { goto L_088B9BF4; }
    goto L_088B9BB4;
L_088B9BB4:;
    fcc = FCMP(f4, f0, 2);
    cnd_ = !fcc;
    {u32 a_=sp+(80);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088B9C20; }
    goto L_088B9BC4;
L_088B9BC4:;
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr4);}
    {v1=FBITS(vr0);}
    f1 = BITSF(v0);
    f2 = BITSF(v1);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+528);
    if (cnd_) { goto L_088B9C20; }
    goto L_088B9BF4;
L_088B9BF4:;
    v1 = LD32(sp+532);
    a0 = s0 + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    v0 = LD32(sp+536);
    v1 = LD32(sp+540);
    ST32(sp+552, FBITS(f4));
    ST32(sp+72, v0);
    ST32(sp+76, v1);
    v0 = func_088B66B8(a0);
    goto L_088B9C1C;
L_088B9C1C:;
    s5 = v0 + 0;
    goto L_088B9C20;
L_088B9C20:;
    a0 = s0 + 0;
    func_088B6524(a0);
    goto L_088B9C28;
L_088B9C28:;
    a0 = s0 + 0;
    goto L_088B9AD0;
L_088B9C30:;
    ST32(sp+552, FBITS(f20));
    a0 = s0 + 0;
    goto L_088B9C38;
L_088B9C38:;
    fp = s5 + 0;
    func_088B6510();
    goto L_088B9C40;
L_088B9C40:;
    s2 = LD32(s2+4);
    goto L_088B9928;
L_088B9C48:;
    f12 = BITSF(0);
    a0 = sp + 16;
    a1 = s5 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;__auto_type vr_t_ = func_088B8958(a0, a1, 0, 0, 0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B9C58;
L_088B9C58:;
    s1 = LD32(s3+112);
    cnd_ = s1 == 0;
    if (cnd_) { a1 = LD32(sp+40); goto L_088B9C80; }
    goto L_088B9C64;
L_088B9C64:;
    cnd_ = (s32)s1 < 0;
    v0 = (s32)s1 < 3;
    if (cnd_) { goto L_088B9C7C; }
    goto L_088B9C6C;
L_088B9C6C:;
    a2 = s0 + 0;
    a3 = sp + 208;
    cnd_ = v0 != 0;
    t0 = s0 + 80;
    if (cnd_) { goto L_088B9DEC; }
    goto L_088B9C7C;
L_088B9C7C:;
    a1 = LD32(sp+40);
    goto L_088B9C80;
L_088B9C80:;
    v0 = D_08AEC680 - (-14720);
    cnd_ = a1 == 0;
    f20 = BITSF(LD32(v0-14720));
    if (cnd_) { goto L_088B9DB8; }
    goto L_088B9C8C;
L_088B9C8C:;
    v0 = D_08AEC684 - (-14716);
    f21 = BITSF(LD32(v0-14716));
    f22 = BITSF(0);
    s0 = a1 + 0;
    s7 = sp + 160;
    s1 = sp + 144;
    s6 = sp + 80;
    s2 = sp + 288;
    a1 = LD32(s0);
    goto L_088B9CB0;
L_088B9CB0:;
    a0 = s7 + 0;
    func_088B4AC4(a0, a1);
    goto L_088B9CB8;
L_088B9CB8:;
    a0 = s3 + 0;
    v0 = func_088B91A4(a0);
    goto L_088B9CC0;
L_088B9CC0:;
    a2 = v0 + 0;
    a3 = sp + 208;
    t0 = v0 + 80;
    goto L_088B9CCC;
L_088B9CCC:;
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
    if (cnd_) { goto L_088B9CCC; }
    goto L_088B9CF8;
L_088B9CF8:;
    a0 = s3 + 0;
    v0 = func_088B91A4(a0);
    goto L_088B9D00;
L_088B9D00:;
    {u32 a_=v0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s4+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    t0 = s0 + 8;
    a0 = sp + 208;
    a1 = s6 + 0;
    f12 = f20;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    a2 = s7 + 0;
    ST32(sp+224, v0);
    a3 = s1 + 0;
    t1 = s2 + 0;
    ST32(sp+228, v1);
    t2 = 1;
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+232, v0);
    ST32(sp+236, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;__auto_type vr_t_ = func_088B3784(a0, a1, a2, a3, t0, t1, t2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr_t_; });
    goto L_088B9D54;
L_088B9D54:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088B97B0; }
    goto L_088B9D64;
L_088B9D64:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v1 = LD32(sp+148);
    if (cnd_) { goto L_088B9D9C; }
    goto L_088B9D74;
L_088B9D74:;
    v0 = LD32(s0);
    f20 = f0;
    ST32(sp+548, v0);
    v0 = LD32(sp+144);
    ST32(sp+68, v1);
    ST32(sp+64, v0);
    v1 = LD32(sp+156);
    v0 = LD32(sp+152);
    ST32(sp+76, v1);
    ST32(sp+72, v0);
    goto L_088B9D9C;
L_088B9D9C:;
    fcc = FCMP(f20, f22, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088B9DB8; }
    goto L_088B9DAC;
L_088B9DAC:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_088B9CB0; }
    goto L_088B9DB8;
L_088B9DB8:;
    fcc = FCMP(f20, f27, 12);
    cnd_ = !fcc;
    f22 = f23;
    if (cnd_) { goto L_088B956C; }
    goto L_088B9DC8;
L_088B9DC8:;
    f0 = f20 * f23;
    f1 = BITSF(0);
    f0 = f0 - f28;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088B9DE4; }
    goto L_088B9DE4;
L_088B9DE4:;
    f22 = f0;
    goto L_088B956C;
L_088B9DEC:;
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
    if (cnd_) { goto L_088B9DEC; }
    goto L_088B9E18;
L_088B9E18:;
    a0 = s3 + 0;
    v0 = func_088B91A4(a0);
    goto L_088B9E20;
L_088B9E20:;
    {u32 a_=v0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s4+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    s0 = sp + 304;
    a2 = s1 ^ 0x2;
    a2 = a2 < 0x1u;
    a1 = sp + 208;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    a0 = s0 + 0;
    ST32(sp+224, v0);
    ST32(sp+228, v1);
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+232, v0);
    ST32(sp+236, v1);
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;func_088B50A0(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];});
    goto L_088B9E68;
L_088B9E68:;
    a0 = s0 + 0;
    a1 = sp + 0;
    f12 = f23;
    a2 = sp + 16;
    a3 = sp + 64;
    t0 = sp + 548;
    t1 = sp + 384;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;__auto_type vr_t_ = func_088B52B0(a0, a1, a2, a3, t0, t1, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr_t_; });
    goto L_088B9E88;
L_088B9E88:;
    f22 = f0;
    goto L_088B956C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;
}

/* 088B9E90 */
void func_088B9E90(u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088B9E90:;
    sp = sp - 64;
    s1 = D_08B2BE3C - (-16836);
    v0 = s1 - 16836;
    a2 = sp + 0;
    ST32(sp+4, 0);
    v1 = LD32(v0+4);
    v0 = (u32)-1;
    ST32(sp+16, v0);
    a0 = LD32(v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, v1);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_088B9F14; }
    goto L_088B9ED8;
L_088B9ED8:;
    ST32(sp+4, a0);
    a3 = sp + 8;
    goto L_088B9EE0;
L_088B9EE0:;
    a1 = LD32(a2+4);
    ST32(sp+36, 0);
    a0 = LD32(a1+4);
    ST32(a2+12, 0);
    ST32(a2+8, a0);
    v0 = LD32(a0+12);
    ST32(sp+32, a0);
    v1 = v0 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a3+4, v1);
    if (cnd_) { goto L_088BA0E0; }
    goto L_088B9F08;
L_088B9F08:;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_088B9EE0; }
    goto L_088B9F14;
L_088B9F14:;
    v0 = D_08B2BE3C - (-16836);
    s0 = v0 - 16836;
    goto L_088B9F1C;
L_088B9F1C:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088BA040; }
    goto L_088B9F28;
L_088B9F28:;
    cnd_ = (s32)v0 < 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_088BA040; }
    goto L_088B9F30;
L_088B9F30:;
    v1 = LD32(v1+8);
    a0 = (u32)-1;
    a2 = v0 + v1;
    cnd_ = a2 == a0;
    a3 = LD32(s0+4);
    if (cnd_) { goto L_088B9FB0; }
    goto L_088B9F44;
L_088B9F44:;
    v0 = LD32(a3+12);
    cnd_ = a2 == v0;
    if (cnd_) { ST32(a3+12, a0); goto L_088B9F50; }
    goto L_088B9F50;
L_088B9F50:;
    v1 = LD32(a3);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088B9F90; }
    goto L_088B9F5C;
L_088B9F5C:;
    a0 = LD32(v1+8);
    goto L_088B9F60;
L_088B9F60:;
    v0 = (s32)a2 < (s32)a0;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_088B9F80; }
    goto L_088B9F6C;
L_088B9F6C:;
    v0 = LD32(a3+4);
    v0 = a0 + v0;
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088B9F90; }
    goto L_088B9F80;
L_088B9F80:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1+8); goto L_088B9F60; }
    goto L_088B9F8C;
L_088B9F8C:;
    a1 = 0 + 0;
    goto L_088B9F90;
L_088B9F90:;
    cnd_ = a1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088B9FB4; }
    goto L_088B9F98;
L_088B9F98:;
    a0 = LD32(a1+4);
    a1 = LD32(a1+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = a2 - a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088B9FB0;
L_088B9FB0:;
    v0 = LD32(sp+12);
    goto L_088B9FB4;
L_088B9FB4:;
    a3 = sp + 0;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_088BA038; }
    goto L_088B9FC4;
L_088B9FC4:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_088B9F1C; }
    goto L_088B9FD8;
L_088B9FD8:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_088B9FC4; }
    goto L_088B9FFC;
L_088B9FFC:;
    v0 = LD32(a3+8);
    v1 = LD32(a0+4);
    a0 = LD32(a3+4);
    a2 = LD32(v0+4);
    v1 = v1 << 2;
    a1 = LD32(a0);
    v1 = v1 + a2;
    a0 = LD32(v1);
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    ST32(a3+20, a1);
    ST32(a3+16, a0);
    goto L_088B9F1C;
L_088BA038:;
    a0 = sp + 8;
    goto L_088B9FFC;
L_088BA040:;
    v0 = s1 - 16836;
    s2 = LD32(v0+4);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { v0 = (u32)-1; goto L_088BA084; }
    goto L_088BA054;
L_088BA054:;
    a0 = LD32(s1);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BA0D0; }
    goto L_088BA060;
L_088BA060:;
    a0 = LD32(s1+4);
    goto L_088BA064;
L_088BA064:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088BA0BC; }
    goto L_088BA06C;
L_088BA06C:;
    s0 = LD32(s1+12);
    goto L_088BA070;
L_088BA070:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088BA0A4; }
    goto L_088BA078;
L_088BA078:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA080;
L_088BA080:;
    v0 = (u32)-1;
    goto L_088BA084;
L_088BA084:;
    ST32(s2+12, v0);
    ST32(s2, 0);
    sp = sp + 64;
    return;
L_088BA0A4:;
    a0 = s0 + 0;
    func_08AB58C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088BA0AC;
L_088BA0AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA0B4;
L_088BA0B4:;
    goto L_088BA078;
L_088BA0BC:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA0C8;
L_088BA0C8:;
    s0 = LD32(s1+12);
    goto L_088BA070;
L_088BA0D0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA0D8;
L_088BA0D8:;
    a0 = LD32(s1+4);
    goto L_088BA064;
L_088BA0E0:;
    v0 = LD32(a0+4);
    v1 = v1 << 2;
    a1 = LD32(a1);
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    ST32(a2+20, a1);
    ST32(a2+16, a0);
    goto L_088B9F14;
}

/* 088BA110 */
rv_t func_088BA110(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BA110:;
    sp = sp - 32;
    s6 = D_08B2BE3C - (-16836);
    v0 = s6 - 16836;
    s5 = a0 + 0;
    s4 = LD32(v0+4);
    t1 = LD32(s4);
    cnd_ = t1 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_088BA1A0; }
    goto L_088BA150;
L_088BA150:;
    t2 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_088BA158;
L_088BA158:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_088BA18C; }
    goto L_088BA174;
L_088BA174:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_088BA18C;
L_088BA18C:;
    cnd_ = a2 != t2;
    s0 = a2 + 0;
    if (cnd_) { goto L_088BA1E8; }
    goto L_088BA194;
L_088BA194:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_088BA158; }
    goto L_088BA1A0;
L_088BA1A0:;
    v1 = t1 + 0;
    cnd_ = t1 == 0;
    s1 = LD32(s4+16);
    if (cnd_) { goto L_088BA5CC; }
    goto L_088BA1AC;
L_088BA1AC:;
    s0 = LD32(s4+4);
    v0 = LD32(v1+8);
    goto L_088BA1B4;
L_088BA1B4:;
    cnd_ = v0 == s1;
    if (cnd_) { s1 = s1 + s0; goto L_088BA5C4; }
    goto L_088BA1BC;
L_088BA1BC:;
    v1 = LD32(v1+12);
    goto L_088BA1C0;
L_088BA1C0:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088BA1B4; }
    goto L_088BA1C8;
L_088BA1C8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA1D0;
L_088BA1D0:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_088BA498; }
    goto L_088BA1E4;
L_088BA1E4:;
    s0 = (u32)-1;
    goto L_088BA1E8;
L_088BA1E8:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088BA300; }
    goto L_088BA1F4;
L_088BA1F4:;
    v0 = s6 - 16836;
    s2 = LD32(v0+4);
    v1 = LD32(s2+12);
    cnd_ = s0 == v1;
    if (cnd_) { s1 = LD32(s2+8); goto L_088BA26C; }
    goto L_088BA208;
L_088BA208:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08AB5880(a0, a1);
    goto L_088BA214;
L_088BA214:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088BA478; }
    goto L_088BA21C;
L_088BA21C:;
    a0 = LD32(v0+4);
    v0 = LD32(v0+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    a3 = s0 - v0;
    if (cnd_) { goto L_088BA254; }
    goto L_088BA234;
L_088BA234:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_088BA23C;
L_088BA23C:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_088BA480; }
    goto L_088BA24C;
L_088BA24C:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088BA23C; }
    goto L_088BA254;
L_088BA254:;
    v0 = 0 + 0;
    goto L_088BA258;
L_088BA258:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088BA26C; }
    goto L_088BA260;
L_088BA260:;
    s1 = v0 + 0;
    ST32(s2+8, v0);
    ST32(s2+12, s0);
    goto L_088BA26C;
L_088BA26C:;
    v0 = 1;
    ST32(s1+4, s0);
    ST32(s1, s5);
    cnd_ = s5 == v0;
    ST32(s1+16, 0);
    if (cnd_) { goto L_088BA380; }
    goto L_088BA280;
L_088BA280:;
    v0 = (s32)s5 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088BA368; }
    goto L_088BA28C;
L_088BA28C:;
    cnd_ = s5 == v0;
    v0 = 3;
    if (cnd_) { goto L_088BA358; }
    goto L_088BA294;
L_088BA294:;
    cnd_ = s5 == v0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088BA348; }
    goto L_088BA29C;
L_088BA29C:;
    ST32(s1+8, v0);
    goto L_088BA2A0;
L_088BA2A0:;
    a1 = LD32(s1+8);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { ST32(s1+12, 0); goto L_088BA2C0; }
    goto L_088BA2B0;
L_088BA2B0:;
    a0 = D_08B2BEA4 - (-16732);
    a0 = a0 - 16732;
    v0 = func_08AB55FC(a0, a1);
    goto L_088BA2BC;
L_088BA2BC:;
    ST32(s1+12, v0);
    goto L_088BA2C0;
L_088BA2C0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA2CC;
L_088BA2CC:;
    a1 = D_08B45A9C - (23196);
    a1 = a1 + 23196;
    a0 = s1 + 0;
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA2DC;
L_088BA2DC:;
    a1 = D_08B45AA8 - (23208);
    a1 = a1 + 23208;
    a0 = s1 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA2EC;
L_088BA2EC:;
    v0 = D_08B2BE38 - (-16840);
    v0 = LD32(v0-16840);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BA32C; }
    goto L_088BA2FC;
L_088BA2FC:;
    a0 = s1 + 0;
    goto L_088BA300;
L_088BA300:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088BA32C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA334;
L_088BA334:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA340;
L_088BA340:;
    a0 = s1 + 0;
    goto L_088BA300;
L_088BA348:;
    v0 = func_088C36FC(t1, t2, t3);
    goto L_088BA350;
L_088BA350:;
    ST32(s1+8, v0);
    goto L_088BA2A0;
L_088BA358:;
    v0 = func_088C32C4(t1, t2, t3);
    goto L_088BA360;
L_088BA360:;
    ST32(s1+8, v0);
    goto L_088BA2A0;
L_088BA368:;
    cnd_ = s5 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088BA29C; }
    goto L_088BA370;
L_088BA370:;
    v0 = func_088C364C(t1, t2, t3);
    goto L_088BA378;
L_088BA378:;
    ST32(s1+8, v0);
    goto L_088BA2A0;
L_088BA380:;
    v0 = func_088C32C4(t1, t2, t3);
    goto L_088BA388;
L_088BA388:;
    a3 = v0 + 0;
    a0 = D_08B2BEA4 - (-16732);
    ST32(s1+8, v0);
    v0 = (u32)-1;
    t2 = a0 - 16732;
    cnd_ = a3 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088BA444; }
    goto L_088BA3A4;
L_088BA3A4:;
    v0 = LD32(t2+12);
    cnd_ = a3 == v0;
    if (cnd_) { v1 = LD32(t2+8); goto L_088BA444; }
    goto L_088BA3B0;
L_088BA3B0:;
    a0 = LD32(a0-16732);
    cnd_ = a0 == 0;
    a2 = t2 + 0;
    if (cnd_) { goto L_088BA3F0; }
    goto L_088BA3BC;
L_088BA3BC:;
    a1 = LD32(a0+8);
    goto L_088BA3C0;
L_088BA3C0:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088BA3E0; }
    goto L_088BA3CC;
L_088BA3CC:;
    v0 = LD32(a2+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BA3F0; }
    goto L_088BA3E0;
L_088BA3E0:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_088BA3C0; }
    goto L_088BA3EC;
L_088BA3EC:;
    v1 = 0 + 0;
    goto L_088BA3F0;
L_088BA3F0:;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BA458; }
    goto L_088BA3F8;
L_088BA3F8:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    t1 = a3 - v0;
    if (cnd_) { goto L_088BA42C; }
    goto L_088BA40C;
L_088BA40C:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_088BA414;
L_088BA414:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == t1;
    a0 = a0 + 4;
    if (cnd_) { goto L_088BA460; }
    goto L_088BA424;
L_088BA424:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088BA414; }
    goto L_088BA42C;
L_088BA42C:;
    v0 = 0 + 0;
    goto L_088BA430;
L_088BA430:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088BA444; }
    goto L_088BA438;
L_088BA438:;
    v1 = v0 + 0;
    ST32(t2+12, a3);
    ST32(t2+8, v0);
    goto L_088BA444;
L_088BA444:;
    v0 = LD32(v1+248);
    ST32(v1+260, 0);
    v0 = v0 | 0x2040;
    ST32(v1+248, v0);
    goto L_088BA2A0;
L_088BA458:;
    v1 = 0 + 0;
    goto L_088BA444;
L_088BA460:;
    v0 = 400;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v0 = v1 + v0;
    goto L_088BA430;
L_088BA478:;
    s1 = 0 + 0;
    goto L_088BA26C;
L_088BA480:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 + a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_088BA258;
L_088BA498:;
    a0 = s0 << 4;
    a0 = a0 + s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA4A8;
L_088BA4A8:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_088BA4C0; }
    goto L_088BA4B0;
L_088BA4B0:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_088BA4B8;
L_088BA4B8:;
    cnd_ = v1 != a0;
    v1 = v1 - 1;
    if (cnd_) { goto L_088BA4B8; }
    goto L_088BA4C0;
L_088BA4C0:;
    ST32(s2, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA4CC;
L_088BA4CC:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA4E4;
L_088BA4E4:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s3+8, s0);
    if (cnd_) { goto L_088BA510; }
    goto L_088BA4F8;
L_088BA4F8:;
    v1 = v0 + 0;
    goto L_088BA4FC;
L_088BA4FC:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088BA4FC; }
    goto L_088BA510;
L_088BA510:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_088BA574; }
    goto L_088BA528;
L_088BA528:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_088BA564; }
    goto L_088BA530;
L_088BA530:;
    s0 = LD32(s2+12);
    goto L_088BA534;
L_088BA534:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088BA54C; }
    goto L_088BA53C;
L_088BA53C:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA544;
L_088BA544:;
    s0 = (u32)-1;
    goto L_088BA1E8;
L_088BA54C:;
    a0 = s0 + 0;
    func_08AB58C8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088BA554;
L_088BA554:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA55C;
L_088BA55C:;
    goto L_088BA53C;
L_088BA564:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA56C;
L_088BA56C:;
    s0 = LD32(s2+12);
    goto L_088BA534;
L_088BA574:;
    cnd_ = s2 == 0;
    ST32(s2+8, s1);
    if (cnd_) { goto L_088BA1E4; }
    goto L_088BA57C;
L_088BA57C:;
    a3 = LD32(s3+12);
    v0 = LD32(s3+8);
    v1 = LD32(s4);
    a1 = (u32)-1;
    v0 = (s32)a3 < (s32)v0;
    ST32(s2+12, v1);
    cnd_ = v0 == 0;
    ST32(s4, s2);
    if (cnd_) { goto L_088BA5BC; }
    goto L_088BA59C;
L_088BA59C:;
    v1 = a3 + 1;
    a0 = LD32(s3+4);
    ST32(s3+12, v1);
    v0 = a3 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    v1 = LD32(s2+8);
    a1 = a1 + v1;
    goto L_088BA5BC;
L_088BA5BC:;
    s0 = a1 + 0;
    goto L_088BA1E8;
L_088BA5C4:;
    v1 = t1 + 0;
    goto L_088BA1C0;
L_088BA5CC:;
    s0 = LD32(s4+4);
    goto L_088BA1C8;
}
