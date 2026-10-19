#include "game.h"

/* 08804000 */
void func_08804000(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08804000:;
    sp = sp - 32;
    func_08A854C4(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08804010;
L_08804010:;
    func_08A85524(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08804018;
L_08804018:;
    sp = sp + 32;
    return;
L_08804024:;
    func_08804040(); return;
}

/* 08804040 */
void func_08804040(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804040:;
    a0 = D_08B20494 - (1172);
    sp = sp - 16;
    a0 = a0 + 1172;
    func_08804294(a0);
    goto L_08804054;
L_08804054:;
    v1 = D_08AEB438 - (-19400);
    f0 = BITSF(LD32(v1-19400));
    a0 = (u32)-1;
    v0 = D_08B159E8 - (23016);
    ST32(v0+23016, a0);
    v0 = D_08B159EC - (23020);
    ST32(v0+23020, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 0880407C */
void func_0880407C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880407C:;
    a0 = D_08B20494 - (1172);
    sp = sp - 16;
    a0 = a0 + 1172;
    func_088042B0(a0);
    goto L_08804090;
L_08804090:;
    sp = sp + 16;
    return;
}

/* 0880409C */
void func_0880409C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880409C:;
    a0 = D_08B20494 - (1172);
    sp = sp - 16;
    a0 = a0 + 1172;
    func_088042CC(a0);
    goto L_088040B0;
L_088040B0:;
    v1 = D_08AEB43C - (-19396);
    f0 = BITSF(LD32(v1-19396));
    a0 = (u32)-1;
    v0 = D_08B159E8 - (23016);
    ST32(v0+23016, a0);
    v0 = D_08B159EC - (23020);
    ST32(v0+23020, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 088040D8 */
rv_t func_088040D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088040D8:;
    a2 = D_08B20490 - (1168);
    a3 = a0 & 0xffff;
    v1 = LD32(a2+1168);
    a0 = a3 << 1;
    v0 = a0 + a3;
    sp = sp - 16;
    v0 = v0 << 3;
    cnd_ = v1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08804138; }
    goto L_088040FC;
L_088040FC:;
    v1 = LD32(v1+12);
    a1 = v0 + v1;
    v0 = LD_U8(a1+20);
    cnd_ = v0 == 0;
    t0 = 1;
    if (cnd_) { goto L_08804138; }
    goto L_08804110;
L_08804110:;
    v0 = a0 + a3;
    t1 = v0 << 3;
    v0 = D_08B2048C - (1164);
    v1 = LD_U8(v0+1164);
    v0 = 251;
    cnd_ = v1 == v0;
    t2 = D_08B20484 - (1156);
    if (cnd_) { goto L_08804144; }
    goto L_0880412C;
L_0880412C:;
    v0 = LD_U8(a1+21);
    cnd_ = v0 == v1;
    a1 = LD32(a2+1168);
    if (cnd_) { goto L_08804148; }
    goto L_08804138;
L_08804138:;
    v0 = t0 + 0;
    goto L_0880413C;
L_0880413C:;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
L_08804144:;
    a1 = LD32(a2+1168);
    goto L_08804148;
L_08804148:;
    v0 = D_08B20480 - (1152);
    a0 = LD32(v0+1152);
    v0 = LD32(a1+12);
    v1 = D_08B2048D - (1165);
    f2 = BITSF(LD32(a0+8));
    v0 = v0 + t1;
    f1 = BITSF(LD32(a0));
    f5 = BITSF(LD32(v0));
    f0 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f1 = f1 - f5;
    f0 = f0 - f3;
    f2 = f2 - f4;
    a2 = LD_U8(v1+1165);
    v1 = FBITS(f1);
    {vr0=BITSF(v1);}
    v1 = FBITS(f0);
    {vr1=BITSF(v1);}
    v1 = FBITS(f2);
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f1));
    t0 = 1;
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f2 = BITSF(LD32(v0+12));
    f1 = BITSF(v1);
    cnd_ = a2 == 0;
    f1 = f1 - f2;
    if (cnd_) { goto L_088041DC; }
    goto L_088041C8;
L_088041C8:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = t0 + 0;
    if (cnd_) { goto L_0880413C; }
    goto L_088041DC;
L_088041DC:;
    f0 = BITSF(LD32(t2+1156));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    t0 = 1;
    if (cnd_) { goto L_08804138; }
    goto L_088041F0;
L_088041F0:;
    v0 = D_08B20488 - (1160);
    ST32(t2+1156, FBITS(f1));
    ST32(v0+1160, a3);
    goto L_08804138;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08804200 */
rv_t func_08804200(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08804200:;
    v0 = D_08AEB450 - (-19376);
    f0 = BITSF(LD32(v0-19376));
    ST32(a0+76, 0);
    v1 = D_08B45A9C - (23196);
    a1 = v1 + 23196;
    ST32(a0+52, FBITS(f0));
    v0 = a0 + 80;
    f0 = BITSF(LD32(v1+23196));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    ST32(a0+80, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST8(a0+94, 0);
    ST8(a0+8, 0);
    ST16(a0+10, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+44, 0);
    ST32(a0+48, 0);
    ST32(a0+56, 0);
    ST32(a0+60, 0);
    ST32(a0+64, 0);
    ST32(a0+68, 0);
    ST8(a0+72, 0);
    ST16(a0+74, 0);
    ST8(a0+92, 0);
    ST8(a0+93, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0880428C */
void func_0880428C(void)
{
L_0880428C:;
    return;
}

/* 08804294 */
void func_08804294(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804294:;
    sp = sp - 16;
    func_088042CC(a0);
    goto L_088042A4;
L_088042A4:;
    sp = sp + 16;
    return;
}

/* 088042B0 */
void func_088042B0(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088042B0:;
    sp = sp - 16;
    func_088042CC(a0);
    goto L_088042C0;
L_088042C0:;
    sp = sp + 16;
    return;
}

/* 088042CC */
void func_088042CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088042CC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 22;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088042E8;
L_088042E8:;
    a0 = s0 + 12;
    func_08AA0C24(a0, 0, 0, 0);
    goto L_088042F0;
L_088042F0:;
    a0 = s0 + 20;
    func_08AA0C64(a0, 0, 0, 0);
    goto L_088042F8;
L_088042F8:;
    a0 = s0 + 24;
    func_08AA0CA4(a0, 0, 0, 0);
    goto L_08804300;
L_08804300:;
    a0 = s0 + 32;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08804308;
L_08804308:;
    a0 = s0 + 40;
    func_08AA0D24(a0, 0, 0, 0);
    goto L_08804310;
L_08804310:;
    s1 = LD32(s0+44);
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088043CC; }
    goto L_0880431C;
L_0880431C:;
    a0 = s0 + 48;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08804324;
L_08804324:;
    a0 = s0 + 56;
    func_08AA0DA4(a0, 0, 0, 0);
    goto L_0880432C;
L_0880432C:;
    a0 = s0 + 60;
    func_08AA0DE4(a0, 0, 0, 0);
    goto L_08804334;
L_08804334:;
    a0 = s0 + 64;
    func_08AA0E24(a0, 0, 0, 0);
    goto L_0880433C;
L_0880433C:;
    ST32(s0+76, 0);
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = s0 + 80;
    ST32(s0+80, FBITS(f2));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST8(s0+94, 0);
    ST8(s0+8, 0);
    ST16(s0+10, 0);
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
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST8(s0+72, 0);
    ST16(s0+74, 0);
    ST8(s0+93, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088043B8;
L_088043B8:;
    sp = sp + 16;
    return;
L_088043CC:;
    func_0882F864(a0);
    goto L_088043D4;
L_088043D4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088043DC;
L_088043DC:;
    goto L_0880431C;
}

/* 088043E4 */
void func_088043E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32); memcpy(stack_ + 32, PTR(sp_in), 16); /* stack-passed arguments */
L_088043E4:;
    sp = sp - 32;
    ST8(a0+72, 0);
    t0 = t0 & 0xffff;
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_08804B14(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08804408;
L_08804408:;
    sp = sp + 32;
    return;
}

/* 08804414 */
void func_08804414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32); memcpy(stack_ + 32, PTR(sp_in), 16); /* stack-passed arguments */
L_08804414:;
    sp = sp - 32;
    v0 = 1;
    ST16(a0+74, t1);
    t1 = t2 + 0;
    t2 = t3 + 0;
    ST8(a0+72, v0);
    t0 = t0 & 0xffff;
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    t3 = LD32(sp+32);
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_08804B14(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0880444C;
L_0880444C:;
    sp = sp + 32;
    return;
}

/* 08804458 */
rv_t func_08804458(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
L_08804458:;
    a3 = LD32(a0+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v0 + a3;
    v1 = LD32(v0+16);
    a3 = LD32(a0+48);
    a2 = a2 << 3;
    v1 = v1 + a2;
    a3 = a3 + a1;
    v1 = LD_U16(v1+6);
    a3 = LD_U8(a3);
    v0 = D_08AEB458 - (-19368);
    f1 = BITSF(v1);
    f3 = BITSF(a3);
    f4 = BITSF(LD32(a0+52));
    f0 = (float)(s32)FBITS(f1);
    f2 = (float)(s32)FBITS(f3);
    f1 = BITSF(LD32(v0-19368));
    f2 = f2 * f4;
    f0 = f0 * f1;
    f0 = f0 + f2;
    return (rv_t){ v0, v1, f0 };
}

/* 088044B4 */
u64 func_088044B4(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088044B4:;
    a1 = a1 & 0xffff;
    v0 = a1 & 0x1;
    a0 = a1 & 0x4;
    cnd_ = v0 != 0;
    t0 = 1;
    if (cnd_) { goto L_0880450C; }
    goto L_088044C8;
L_088044C8:;
    a3 = a1 & 0x10;
    v0 = a1 & 0x2;
    v1 = (a2 >> 1) & 0x1;
    a1 = (a2 >> 2) & 0x1;
    cnd_ = a0 == 0;
    a2 = a2 & 0x1;
    if (cnd_) { goto L_088044E8; }
    goto L_088044E0;
L_088044E0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0880450C; }
    goto L_088044E8;
L_088044E8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088044F8; }
    goto L_088044F0;
L_088044F0:;
    cnd_ = a2 == 0;
    t0 = 1;
    if (cnd_) { goto L_0880450C; }
    goto L_088044F8;
L_088044F8:;
    cnd_ = a3 == 0;
    t0 = 1;
    if (cnd_) { goto L_08804508; }
    goto L_08804500;
L_08804500:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0880450C; }
    goto L_08804508;
L_08804508:;
    t0 = 0 + 0;
    goto L_0880450C;
L_0880450C:;
    v0 = t0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08804514 */
u32 func_08804514(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08804514:;
    sp = sp - 32;
    s1 = a3 & 0xff;
    t0 = s1 + 0;
    s0 = a2 & 0xff;
    a3 = s0 + 0;
    a2 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v0 = func_0880459C(a0, a1, a2, a3, t0);
    goto L_0880454C;
L_0880454C:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a3 = s0 + 0;
    t0 = s1 + 0;
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0880458C; }
    goto L_0880456C;
L_0880456C:;
    v0 = v1 & 0xffff;
    sp = sp + 32;
    return v0;
L_0880458C:;
    v0 = func_08804740(a0, a1, a2, a3, t0);
    goto L_08804594;
L_08804594:;
    v1 = v0 + 0;
    goto L_0880456C;
}

/* 0880459C */
u32 func_0880459C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0880459C:;
    sp = sp - 112;
    v1 = (u32)-1;
    fp = D_08B20484 - (1156);
    s7 = D_08B20488 - (1160);
    s6 = D_08B20490 - (1168);
    s5 = sp + 32;
    s4 = t0 & 0xff;
    s3 = a3 & 0xff;
    s2 = a0 + 0;
    a0 = sp + 0;
    s1 = a2 + 0;
    v0 = LD32(s2+44);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08804704; }
    goto L_08804604;
L_08804604:;
    v0 = D_08AEB45C - (-19364);
    v1 = D_08AEB460 - (-19360);
    f0 = BITSF(LD32(v1-19360));
    f21 = BITSF(LD32(v0-19364));
    ST32(sp+20, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    ST32(sp+12, FBITS(f0));
    ST32(sp, FBITS(f21));
    ST32(sp+8, FBITS(f21));
    ST32(sp+16, FBITS(f21));
    f0 = func_08AA0F30(a0, a1);
    goto L_08804630;
L_08804630:;
    v1 = D_08AEB464 - (-19356);
    v0 = D_08AEB468 - (-19352);
    f3 = BITSF(LD32(v1-19356));
    f20 = BITSF(LD32(v0-19352));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    f1 = f1 - f3;
    f2 = f2 - f20;
    f0 = f0 - f3;
    a0 = sp + 0;
    a1 = s5 + 0;
    ST32(sp+32, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_08804670;
L_08804670:;
    v0 = D_08AEB46C - (-19348);
    f3 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+40));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(v0-19348));
    f3 = f3 + f20;
    f2 = f2 + f20;
    f1 = f1 + f0;
    a1 = s5 + 0;
    a0 = sp + 0;
    ST32(sp+32, FBITS(f3));
    ST32(sp+40, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    f0 = func_08AA0F30(a0, a1);
    goto L_088046A8;
L_088046A8:;
    a2 = RS_FADDR(func_088040D8, 0x088040D8u) - (16600);
    v0 = D_08B20480 - (1152);
    a2 = a2 + 16600;
    a1 = sp + 0;
    ST32(v0+1152, s0);
    cnd_ = s1 == 0;
    v1 = fp + 1156;
    if (cnd_) { goto L_088046C8; }
    goto L_088046C4;
L_088046C4:;
    f21 = BITSF(LD32(s1));
    goto L_088046C8;
L_088046C8:;
    v0 = D_08B2048C - (1164);
    ST8(v0+1164, s3);
    v0 = D_08B2048D - (1165);
    ST32(v1, FBITS(f21));
    v1 = (u32)-1;
    a0 = LD32(s2+44);
    ST8(v0+1165, s4);
    ST32(s7+1160, v1);
    ST32(s6+1168, s2);
    func_0882F89C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088046F0;
L_088046F0:;
    cnd_ = s1 == 0;
    ST32(s6+1168, 0);
    if (cnd_) { goto L_08804700; }
    goto L_088046F8;
L_088046F8:;
    f0 = BITSF(LD32(fp+1156));
    ST32(s1, FBITS(f0));
    goto L_08804700;
L_08804700:;
    v1 = LD32(s7+1160);
    goto L_08804704;
L_08804704:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
}

/* 08804740 */
u32 func_08804740(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804740:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    cnd_ = a2 == 0;
    t0 = t0 & 0xff;
    if (cnd_) { goto L_0880484C; }
    goto L_08804750;
L_08804750:;
    f6 = BITSF(LD32(a2));
    goto L_08804754;
L_08804754:;
    v0 = LD_U16(a0+10);
    t3 = (u32)-1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08804790; }
    goto L_08804764;
L_08804764:;
    a0 = LD32(a0+12);
    f7 = BITSF(0);
    t1 = v0 + 0;
    t2 = 251;
    goto L_08804774;
L_08804774:;
    v0 = LD_U8(a0+20);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088047A4; }
    goto L_08804780;
L_08804780:;
    v1 = v1 + 1;
    goto L_08804784;
L_08804784:;
    v0 = (s32)v1 < (s32)t1;
    cnd_ = v0 != 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_08804774; }
    goto L_08804790;
L_08804790:;
    cnd_ = a2 != 0;
    if (cnd_) { ST32(a2, FBITS(f6)); goto L_08804798; }
    goto L_08804798;
L_08804798:;
    v0 = t3 + 0;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return v0; }
L_088047A4:;
    cnd_ = a3 == t2;
    if (cnd_) { f3 = BITSF(LD32(a0)); goto L_088047BC; }
    goto L_088047AC;
L_088047AC:;
    v0 = LD_U8(a0+21);
    cnd_ = v0 != a3;
    if (cnd_) { v1 = v1 + 1; goto L_08804784; }
    goto L_088047B8;
L_088047B8:;
    f3 = BITSF(LD32(a0));
    goto L_088047BC;
L_088047BC:;
    f4 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    {vr1=BITSF(v0);}
    v0 = FBITS(f2);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f2 = BITSF(LD32(a0+12));
    f1 = BITSF(v0);
    f0 = f1 - f2;
    fcc = FCMP(f6, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = v1 + 1; goto L_08804784; }
    goto L_0880482C;
L_0880482C:;
    fcc = FCMP(f0, f7, 12);
    cnd_ = t0 == 0;
    if (cnd_) { f6 = f0; goto L_08804844; }
    goto L_08804838;
L_08804838:;
    cnd_ = !fcc;
    if (cnd_) { v1 = v1 + 1; goto L_08804784; }
    goto L_08804840;
L_08804840:;
    f6 = f0;
    goto L_08804844;
L_08804844:;
    t3 = v1 + 0;
    goto L_08804780;
L_0880484C:;
    v0 = D_08AEB470 - (-19344);
    f6 = BITSF(LD32(v0-19344));
    goto L_08804754;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08804858 */
u32 func_08804858(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08804858:;
    sp = sp - 48;
    a2 = 251;
    a3 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = ({ v[0]=vr0;__auto_type vr_t_ = func_08804514(a0, a1, a2, a3); vr0=v[0];vr_t_; });
    goto L_0880487C;
L_0880487C:;
    v1 = v0 << 1;
    a0 = LD32(s0+12);
    v1 = v1 + v0;
    v1 = v1 << 3;
    a0 = a0 + v1;
    f5 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f0 = f0 - f5;
    f1 = f1 - f3;
    f2 = f2 - f4;
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f0));
    v0 = FBITS(f1);
    ST32(sp+4, FBITS(f2));
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    ST32(sp, FBITS(f1));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a0+12));
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f0 = f0 * f0;
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08804904; }
    goto L_08804900;
L_08804900:;
    v0 = 0 + 0;
    goto L_08804904;
L_08804904:;
    sp = sp + 48;
    { v[0]=vr0;return v0; }
    v[0]=vr0;
}

/* 08804918 */
void func_08804918(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804918:;
    sp = sp - 16;
    v0 = LD32(a0+44);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08804940; }
    goto L_0880492C;
L_0880492C:;
    v1 = D_08B159E8 - (23016);
    goto L_08804930;
L_08804930:;
    v0 = LD32(v1+23016);
    sp = sp + 16;
    return;
L_08804940:;
    func_0882F89C(a0, a1, a2, a3, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08804948;
L_08804948:;
    v1 = D_08B159E8 - (23016);
    goto L_08804930;
}

/* 08804950 */
void func_08804950(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804950:;
    sp = sp - 16;
    ST32(sp, a1);
    a1 = a0 + 0;
    a2 = a2 & 0xff;
    v1 = LD_U16(sp);
    a0 = LD_U16(a0+10);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = v1 < a0;
    cnd_ = v1 == 0;
    v0 = v0 << 3;
    if (cnd_) { goto L_088049F8; }
    goto L_0880497C;
L_0880497C:;
    a3 = LD32(a1+12);
    v1 = LD_U16(sp+2);
    a0 = a3 + v0;
    v0 = LD_U8(a0+20);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088049F8; }
    goto L_08804998;
L_08804998:;
    cnd_ = a2 == 0;
    t0 = v1 << 3;
    if (cnd_) { goto L_08804A00; }
    goto L_088049A0;
L_088049A0:;
    v1 = LD32(a0+16);
    v1 = t0 + v1;
    v0 = LD_U16(v1+4);
    v0 = v0 + 1;
    ST16(v1+4, v0);
    a0 = LD_U16(sp);
    v1 = LD_U16(sp+2);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v0 = v0 + a3;
    a0 = LD32(v0+16);
    v1 = v1 << 3;
    v1 = v1 + a0;
    v0 = LD_U16(v1+2);
    a0 = v0 | 0x1;
    v0 = ~(0 | v0);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088049F8; }
    goto L_088049F0;
L_088049F0:;
    ST16(v1+2, a0);
    ST8(a1+93, v0);
    goto L_088049F8;
L_088049F8:;
    sp = sp + 16;
    return;
L_08804A00:;
    v1 = LD32(a0+16);
    v1 = t0 + v1;
    v0 = LD_U16(v1+4);
    v0 = v0 - 1;
    ST16(v1+4, v0);
    a0 = LD_U16(sp);
    v1 = LD_U16(sp+2);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v0 = v0 + a3;
    a0 = LD32(v0+16);
    v1 = v1 << 3;
    v1 = v1 + a0;
    a0 = LD_U16(v1+2);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088049F8; }
    goto L_08804A48;
L_08804A48:;
    v0 = LD_U16(v1+4);
    cnd_ = v0 != 0;
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088049F8; }
    goto L_08804A54;
L_08804A54:;
    v0 = 1;
    goto L_088049F0;
}

/* 08804A5C */
void func_08804A5C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804A5C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = a0 + 56;
    a0 = 22;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08804A80;
L_08804A80:;
    a0 = s0 + 0;
    func_08AA0DA4(a0, 0, 0, 0);
    goto L_08804A88;
L_08804A88:;
    a1 = LD_U16(s2+10);
    a0 = s0 + 0;
    func_08AA0E64(a0, a1, 0, 0, 0);
    goto L_08804A94;
L_08804A94:;
    a2 = LD_U16(s2+10);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08804AC4; }
    goto L_08804AA0;
L_08804AA0:;
    a1 = LD32(s2+56);
    v0 = a0 << 4;
    goto L_08804AA8;
L_08804AA8:;
    v0 = v0 + a1;
    v1 = a0 + 1;
    ST32(v0+8, a0);
    a0 = v1 & 0xffff;
    v0 = a0 < a2;
    cnd_ = v0 != 0;
    v0 = a0 << 4;
    if (cnd_) { goto L_08804AA8; }
    goto L_08804AC4;
L_08804AC4:;
    s0 = s2 + 60;
    a0 = s0 + 0;
    func_08AA0DE4(a0, 0, 0, 0);
    goto L_08804AD0;
L_08804AD0:;
    a1 = LD_U16(s2+10);
    s1 = s2 + 64;
    a0 = s0 + 0;
    func_08AA0EA8(a0, a1, 0, 0, 0);
    goto L_08804AE0;
L_08804AE0:;
    a0 = s1 + 0;
    func_08AA0E24(a0, 0, 0, 0);
    goto L_08804AE8;
L_08804AE8:;
    a1 = LD_U16(s2+10);
    a0 = s1 + 0;
    func_08AA0EEC(a0, a1, 0, 0, 0);
    goto L_08804AF4;
L_08804AF4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08804AFC;
L_08804AFC:;
    sp = sp + 16;
    return;
}

/* 08804B14 */
void func_08804B14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80); memcpy(stack_ + 80, PTR(sp_in), 16); /* stack-passed arguments */
L_08804B14:;
    sp = sp - 80;
    s3 = a0 + 0;
    s0 = t0 & 0xffff;
    t4 = LD_U16(a0+10);
    ST32(sp, a1);
    v1 = t4 & 0xffff;
    v0 = s0 < v1;
    ST32(sp+4, a2);
    ST32(sp+8, a3);
    ST32(sp+12, t1);
    ST32(sp+16, t2);
    cnd_ = v0 != 0;
    ST32(sp+20, t3);
    if (cnd_) { goto L_08804BA4; }
    goto L_08804B70;
L_08804B70:;
    ST32(a2, 0);
    goto L_08804B74;
L_08804B74:;
    goto L_08804B78;
L_08804B78:;
    sp = sp + 80;
    return;
L_08804BA4:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08804DE0; }
    goto L_08804BAC;
L_08804BAC:;
    v0 = LD_U8(a0+72);
    cnd_ = v0 == 0;
    s1 = s0 << 1;
    if (cnd_) { goto L_08804BF4; }
    goto L_08804BB8;
L_08804BB8:;
    a0 = LD_U16(a0+74);
    a2 = LD32(s3+12);
    v1 = s1 + s0;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v1 = v1 << 3;
    v0 = v0 << 3;
    v0 = v0 + a2;
    v1 = v1 + a2;
    a1 = LD_U8(v1+21);
    a0 = LD_U8(v0+21);
    cnd_ = a1 == a0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_08804BF4; }
    goto L_08804BEC;
L_08804BEC:;
    ST32(v1, 0);
    goto L_08804B74;
L_08804BF4:;
    a0 = LD32(s3+60);
    ST32(s3+68, 0);
    a2 = t4 & 0xffff;
    a2 = a2 << 1;
    a1 = 0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08804C0C;
L_08804C0C:;
    a0 = LD32(s3+60);
    v1 = LD32(s3+56);
    v0 = s0 << 4;
    fp = a0 + s1;
    s5 = v1 + v0;
    v0 = 1;
    a1 = LD32(sp+16);
    ST8(fp, v0);
    a0 = s0 + 0;
    t_ = a1;
    ST32(s5, 0);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804C38;
L_08804C38:;
    ST32(s5+4, FBITS(f0));
    a1 = s5 + 0;
    a0 = s3 + 0;
    ST32(s5+12, 0);
    func_08804E18(a0, a1);
    goto L_08804C4C;
L_08804C4C:;
    a0 = s3 + 0;
    v0 = func_08804E50(a0);
    goto L_08804C54;
L_08804C54:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_08804D9C; }
    goto L_08804C5C;
L_08804C5C:;
    s6 = LD32(s5+8);
    v0 = LD32(s3+60);
    v1 = LD32(sp+80);
    s0 = s6 << 1;
    a0 = s6 + 0;
    t_ = v1;
    fp = v0 + s0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804C78;
L_08804C78:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08804D9C; }
    goto L_08804C80;
L_08804C80:;
    a0 = LD32(s3+12);
    s7 = s0 + s6;
    s0 = s7 << 3;
    v1 = s0 + a0;
    v0 = LD_U8(v1+20);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08804CEC; }
    goto L_08804CA0;
L_08804CA0:;
    v0 = s0 + a0;
    goto L_08804CA4;
L_08804CA4:;
    v1 = LD32(v0+16);
    s1 = s2 << 3;
    v1 = s1 + v1;
    a0 = LD_U16(v1+2);
    v1 = LD32(sp+84);
    t_ = v1;
    a1 = LD32(sp+12);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804CC0;
L_08804CC0:;
    a1 = s2 + 0;
    a0 = s6 + 0;
    cnd_ = v0 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08804CFC; }
    goto L_08804CD0;
L_08804CD0:;
    a0 = LD32(s3+12);
    goto L_08804CD4;
L_08804CD4:;
    s0 = s7 << 3;
    v1 = s0 + a0;
    v0 = LD_U8(v1+20);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    v0 = s0 + a0;
    if (cnd_) { goto L_08804CA4; }
    goto L_08804CEC;
L_08804CEC:;
    v1 = 1;
    ST8(fp, 0);
    ST8(fp+1, v1);
    goto L_08804C4C;
L_08804CFC:;
    v1 = LD32(s3+12);
    a3 = LD32(s3+56);
    a2 = LD32(s3+60);
    v1 = s0 + v1;
    v0 = LD32(v1+16);
    v0 = s1 + v0;
    s0 = LD_U16(v0);
    v0 = s0 << 4;
    s1 = a3 + v0;
    v0 = LD32(sp+20);
    v1 = s0 << 1;
    t_ = v0;
    s4 = a2 + v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804D30;
L_08804D30:;
    f1 = BITSF(LD32(s5));
    v0 = LD_U8(s4);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    f1 = f1 + f0;
    if (cnd_) { goto L_08804D50; }
    goto L_08804D44;
L_08804D44:;
    v0 = LD_U8(s4+1);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1, FBITS(f1)); goto L_08804D68; }
    goto L_08804D50;
L_08804D50:;
    f0 = BITSF(LD32(s1));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s3+12); goto L_08804CD4; }
    goto L_08804D64;
L_08804D64:;
    ST32(s1, FBITS(f1));
    goto L_08804D68;
L_08804D68:;
    ST32(s1+12, s5);
    v1 = LD32(sp+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804D78;
L_08804D78:;
    v0 = 1;
    ST32(s1+4, FBITS(f0));
    a1 = s1 + 0;
    a0 = s3 + 0;
    ST8(s4, v0);
    ST8(s4+1, 0);
    func_08804E18(a0, a1);
    goto L_08804D94;
L_08804D94:;
    a0 = LD32(s3+12);
    goto L_08804CD4;
L_08804D9C:;
    a0 = LD32(sp+4);
    ST32(a0, 0);
    cnd_ = s5 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_08804DC4; }
    goto L_08804DAC;
L_08804DAC:;
    v0 = 0 + 0;
    goto L_08804DB0;
L_08804DB0:;
    s5 = LD32(s5+12);
    cnd_ = s5 != 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08804DB0; }
    goto L_08804DBC;
L_08804DBC:;
    a1 = LD32(sp+4);
    ST32(a1, v0);
    goto L_08804DC4;
L_08804DC4:;
    v0 = LD32(sp+4);
    a1 = LD32(sp+8);
    v1 = LD32(v0);
    v0 = (s32)v1 < (s32)a1;
    cnd_ = v0 != 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_08804DE8; }
    goto L_08804DDC;
L_08804DDC:;
    v0 = LD32(sp+4);
    goto L_08804DE0;
L_08804DE0:;
    ST32(v0, 0);
    goto L_08804B74;
L_08804DE8:;
    cnd_ = a0 == 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_08804B74; }
    goto L_08804DF0;
L_08804DF0:;
    v1 = LD32(sp);
    v0 = v0 << 1;
    a1 = v0 + v1;
    goto L_08804DFC;
L_08804DFC:;
    v0 = LD_U16(s5+8);
    s5 = LD32(s5+12);
    ST16(a1, v0);
    cnd_ = s5 != 0;
    a1 = a1 - 2;
    if (cnd_) { goto L_08804DFC; }
    goto L_08804E10;
L_08804E10:;
    goto L_08804B78;
}

/* 08804E18 */
void func_08804E18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
L_08804E18:;
    v1 = LD32(a0+68);
    v0 = LD32(a0+64);
    a2 = LD32(a1+8);
    v1 = v1 << 3;
    v1 = v1 + v0;
    ST32(v1+4, a2);
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = LD32(a0+68);
    f0 = f0 + f1;
    v0 = v0 + 1;
    ST32(a0+68, v0);
    ST32(v1, FBITS(f0));
    return;
}

/* 08804E50 */
u32 func_08804E50(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08804E50:;
    a3 = a0 + 0;
    a0 = LD32(a0+68);
    v0 = D_08AEB47C - (-19332);
    f1 = BITSF(LD32(v0-19332));
    t0 = (u32)-1;
    a1 = (u32)-1;
    cnd_ = (s32)a0 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08804EA4; }
    goto L_08804E70;
L_08804E70:;
    v1 = LD32(a3+64);
    goto L_08804E74;
L_08804E74:;
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = a2 + 1; goto L_08804E98; }
    goto L_08804E88;
L_08804E88:;
    t0 = LD32(v1+4);
    f1 = f0;
    a1 = a2 + 0;
    a2 = a2 + 1;
    goto L_08804E98;
L_08804E98:;
    v0 = (s32)a2 < (s32)a0;
    cnd_ = v0 != 0;
    v1 = v1 + 8;
    if (cnd_) { goto L_08804E74; }
    goto L_08804EA4;
L_08804EA4:;
    v0 = (u32)-1;
    cnd_ = t0 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08804EEC; }
    goto L_08804EB0;
L_08804EB0:;
    v0 = LD32(a3+64);
    a0 = a0 << 3;
    a1 = a1 << 3;
    a0 = a0 + v0;
    v1 = LD32(a0-8);
    a1 = a1 + v0;
    a2 = LD32(a3+56);
    ST32(a1, v1);
    v0 = t0 << 4;
    a2 = a2 + v0;
    v1 = LD32(a0-4);
    ST32(a1+4, v1);
    v0 = LD32(a3+68);
    v0 = v0 - 1;
    ST32(a3+68, v0);
    goto L_08804EEC;
L_08804EEC:;
    v0 = a2 + 0;
    return v0;
}

/* 08804EF4 */
rv_t func_08804EF4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804EF4:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B20494 - (1172);
    cnd_ = v0 != 0;
    a0 = a0 + 1172;
    if (cnd_) { goto L_08804F58; }
    goto L_08804F28;
L_08804F28:;
    v0 = s1 < 0x1u;
    goto L_08804F2C;
L_08804F2C:;
    a0 = D_08B20494 - (1172);
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    a0 = a0 + 1172;
    if (cnd_) { goto L_08804F44; }
    goto L_08804F3C;
L_08804F3C:;
    func_0880428C();
    goto L_08804F44;
L_08804F44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08804F58:;
    { rv_t r_ = func_08804200(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804F60;
L_08804F60:;
    v0 = s1 < 0x1u;
    goto L_08804F2C;
}

/* 08804F68 */
rv_t func_08804F68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804F68:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08804EF4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804F7C;
L_08804F7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08804F88 */
rv_t func_08804F88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804F88:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08804EF4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08804F9C;
L_08804F9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08804FA8 */
void func_08804FA8(u32 a0)
{
    u32 v0 = 0;
L_08804FA8:;
    v0 = a0 + 24;
    ST32(a0+4, 0);
    ST32(a0+16, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+24, 0);
    ST32(v0+20, 0);
    ST32(a0, 0);
    ST32(a0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    return;
}

/* 08804FE0 */
rv_t func_08804FE0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08804FE0:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0880509C; }
    goto L_08805000;
L_08805000:;
    a1 = LD32(s0+116);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805118; }
    goto L_0880500C;
L_0880500C:;
    a1 = LD32(s0+120);
    goto L_08805010;
L_08805010:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805108; }
    goto L_08805018;
L_08805018:;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805020;
L_08805020:;
    a0 = s0 + 40;
    func_08AA1020(a0, 0, 0, 0);
    goto L_08805028;
L_08805028:;
    a0 = s0 + 44;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08805030;
L_08805030:;
    a0 = s0 + 56;
    func_08AA10DC(a0, 0, 0, 0);
    goto L_08805038;
L_08805038:;
    a0 = s0 + 92;
    func_08AA111C(a0, 0, 0, 0);
    goto L_08805040;
L_08805040:;
    a0 = s0 + 96;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08805048;
L_08805048:;
    a0 = s0 + 80;
    func_08AA115C(a0, 0, 0, 0);
    goto L_08805050;
L_08805050:;
    s2 = s0 + 4;
    a0 = s0 + 100;
    func_08AA119C(a0, 0, 0, 0);
    goto L_0880505C;
L_0880505C:;
    a0 = LD32(s2+100);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088050F8; }
    goto L_08805068;
L_08805068:;
    a0 = s0 + 64;
    func_08AA11DC(a0, 0, 0, 0);
    goto L_08805070;
L_08805070:;
    a0 = s0 + 72;
    func_08AA121C(a0, 0, 0, 0);
    goto L_08805078;
L_08805078:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805080;
L_08805080:;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088050E8; }
    goto L_0880508C;
L_0880508C:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880509C;
L_0880509C:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088050D8; }
    goto L_088050A8;
L_088050A8:;
    ST32(s1+12, 0);
    goto L_088050AC;
L_088050AC:;
    a0 = s1 + 0;
    ST32(s1+16, 0);
    ST32(s1+4, 0);
    ST32(s1, 0);
    { rv_t r_ = func_08805468(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088050C0;
L_088050C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088050D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088050E0;
L_088050E0:;
    ST32(s1+12, 0);
    goto L_088050AC;
L_088050E8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088050F0;
L_088050F0:;
    ST32(s0+4, 0);
    goto L_0880508C;
L_088050F8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805100;
L_08805100:;
    goto L_08805068;
L_08805108:;
    a0 = s1 + 0;
    func_08AA18F4(a0, a1);
    goto L_08805110;
L_08805110:;
    goto L_08805018;
L_08805118:;
    func_08AA18F4(a0, a1);
    goto L_08805120;
L_08805120:;
    a1 = LD32(s0+120);
    goto L_08805010;
}

/* 08805128 */
rv_t func_08805128(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805128:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = s2 + 24;
    { rv_t r_ = func_08804FE0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805148;
L_08805148:;
    s0 = LD32(s2+24);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s1+12); goto L_08805178; }
    goto L_08805154;
L_08805154:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088052C8; }
    goto L_08805160;
L_08805160:;
    a1 = LD32(s0+12);
    goto L_08805164;
L_08805164:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088052B8; }
    goto L_0880516C;
L_0880516C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805174;
L_08805174:;
    a0 = LD32(s1+12);
    goto L_08805178;
L_08805178:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088052A8; }
    goto L_08805180;
L_08805180:;
    s0 = LD32(s2);
    goto L_08805184;
L_08805184:;
    ST32(s1+16, 0);
    cnd_ = s0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_0880522C; }
    goto L_08805190;
L_08805190:;
    a1 = LD32(s0+116);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805298; }
    goto L_0880519C;
L_0880519C:;
    a1 = LD32(s0+120);
    goto L_088051A0;
L_088051A0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805288; }
    goto L_088051A8;
L_088051A8:;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088051B0;
L_088051B0:;
    a0 = s0 + 40;
    func_08AA1020(a0, 0, 0, 0);
    goto L_088051B8;
L_088051B8:;
    a0 = s0 + 44;
    func_08AA109C(a0, 0, 0, 0);
    goto L_088051C0;
L_088051C0:;
    a0 = s0 + 56;
    func_08AA10DC(a0, 0, 0, 0);
    goto L_088051C8;
L_088051C8:;
    a0 = s0 + 92;
    func_08AA111C(a0, 0, 0, 0);
    goto L_088051D0;
L_088051D0:;
    a0 = s0 + 96;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_088051D8;
L_088051D8:;
    a0 = s0 + 80;
    func_08AA115C(a0, 0, 0, 0);
    goto L_088051E0;
L_088051E0:;
    s1 = s0 + 4;
    a0 = s0 + 100;
    func_08AA119C(a0, 0, 0, 0);
    goto L_088051EC;
L_088051EC:;
    a0 = LD32(s1+100);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08805278; }
    goto L_088051F8;
L_088051F8:;
    a0 = s0 + 64;
    func_08AA11DC(a0, 0, 0, 0);
    goto L_08805200;
L_08805200:;
    a0 = s0 + 72;
    func_08AA121C(a0, 0, 0, 0);
    goto L_08805208;
L_08805208:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805210;
L_08805210:;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08805268; }
    goto L_0880521C;
L_0880521C:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880522C;
L_0880522C:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08805258; }
    goto L_08805238;
L_08805238:;
    ST32(s2+16, 0);
    goto L_0880523C;
L_0880523C:;
    ST32(s2+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08805258:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805260;
L_08805260:;
    ST32(s2+16, 0);
    goto L_0880523C;
L_08805268:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805270;
L_08805270:;
    ST32(s0+4, 0);
    goto L_0880521C;
L_08805278:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805280;
L_08805280:;
    goto L_088051F8;
L_08805288:;
    a0 = s2 + 0;
    func_08AA18F4(a0, a1);
    goto L_08805290;
L_08805290:;
    goto L_088051A8;
L_08805298:;
    a0 = s2 + 0;
    func_08AA18F4(a0, a1);
    goto L_088052A0;
L_088052A0:;
    a1 = LD32(s0+120);
    goto L_088051A0;
L_088052A8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088052B0;
L_088052B0:;
    s0 = LD32(s2);
    goto L_08805184;
L_088052B8:;
    a0 = s1 + 0;
    func_08AA1A00(a0, a1, 0, 0, 0);
    goto L_088052C0;
L_088052C0:;
    goto L_0880516C;
L_088052C8:;
    a0 = s1 + 0;
    func_08AA1A00(a0, a1, 0, 0, 0);
    goto L_088052D0;
L_088052D0:;
    a1 = LD32(s0+12);
    goto L_08805164;
}

/* 088052D8 */
void func_088052D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088052D8:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08805394; }
    goto L_088052F8;
L_088052F8:;
    a1 = LD32(s0+116);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805410; }
    goto L_08805304;
L_08805304:;
    a1 = LD32(s0+120);
    goto L_08805308;
L_08805308:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805400; }
    goto L_08805310;
L_08805310:;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805318;
L_08805318:;
    a0 = s0 + 40;
    func_08AA1020(a0, 0, 0, 0);
    goto L_08805320;
L_08805320:;
    a0 = s0 + 44;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08805328;
L_08805328:;
    a0 = s0 + 56;
    func_08AA10DC(a0, 0, 0, 0);
    goto L_08805330;
L_08805330:;
    a0 = s0 + 92;
    func_08AA111C(a0, 0, 0, 0);
    goto L_08805338;
L_08805338:;
    a0 = s0 + 96;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08805340;
L_08805340:;
    a0 = s0 + 80;
    func_08AA115C(a0, 0, 0, 0);
    goto L_08805348;
L_08805348:;
    s2 = s0 + 4;
    a0 = s0 + 100;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08805354;
L_08805354:;
    a0 = LD32(s2+100);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088053F0; }
    goto L_08805360;
L_08805360:;
    a0 = s0 + 64;
    func_08AA11DC(a0, 0, 0, 0);
    goto L_08805368;
L_08805368:;
    a0 = s0 + 72;
    func_08AA121C(a0, 0, 0, 0);
    goto L_08805370;
L_08805370:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805378;
L_08805378:;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088053E0; }
    goto L_08805384;
L_08805384:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805394;
L_08805394:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088053D0; }
    goto L_088053A0;
L_088053A0:;
    ST32(s1+12, 0);
    goto L_088053A4;
L_088053A4:;
    a0 = s1 + 0;
    ST32(s1+16, 0);
    ST32(s1+4, 0);
    ST32(s1, 0);
    { rv_t r_ = func_08805468(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088053B8;
L_088053B8:;
    sp = sp + 16;
    return;
L_088053D0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088053D8;
L_088053D8:;
    ST32(s1+12, 0);
    goto L_088053A4;
L_088053E0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088053E8;
L_088053E8:;
    ST32(s0+4, 0);
    goto L_08805384;
L_088053F0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088053F8;
L_088053F8:;
    goto L_08805360;
L_08805400:;
    a0 = s1 + 0;
    func_08AA18F4(a0, a1);
    goto L_08805408;
L_08805408:;
    goto L_08805310;
L_08805410:;
    func_08AA18F4(a0, a1);
    goto L_08805418;
L_08805418:;
    a1 = LD32(s0+120);
    goto L_08805308;
}

/* 08805420 */
rv_t func_08805420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805420:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08805450; }
    goto L_0880543C;
L_0880543C:;
    ST32(s0, 0);
    goto L_08805440;
L_08805440:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08805450:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805460;
L_08805460:;
    ST32(s0, 0);
    goto L_08805440;
}

/* 08805468 */
rv_t func_08805468(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08805468:;
    sp = sp - 32;
    v0 = 1;
    v1 = RS_FADDR(func_08805420, 0x08805420u) - (21536);
    s3 = v1 + 21536;
    s2 = a0 + 0;
    s0 = a0 + 24;
    s1 = LD32(a0+24);
    cnd_ = s1 == 0;
    ST8(s0+8, v0);
    if (cnd_) { goto L_088054C4; }
    goto L_088054A0;
L_088054A0:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088055D8; }
    goto L_088054AC;
L_088054AC:;
    a1 = LD32(s1+12);
    goto L_088054B0;
L_088054B0:;
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088055C8; }
    goto L_088054B8;
L_088054B8:;
    a0 = LD32(s1);
    goto L_088054BC;
L_088054BC:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088054C4;
L_088054C4:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { s1 = LD32(s2+24); goto L_08805528; }
    goto L_088054D0;
L_088054D0:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08805514; }
    goto L_088054DC;
L_088054DC:;
    v0 = s1 << 2;
    goto L_088054E0;
L_088054E0:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    v0 = func_08AA125C(a0, a1);
    goto L_088054F4;
L_088054F4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088054FC;
L_088054FC:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08805514; }
    goto L_0880550C;
L_0880550C:;
    v0 = s1 << 2;
    goto L_088054E0;
L_08805514:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088055B8; }
    goto L_0880551C;
L_0880551C:;
    ST32(s0+12, 0);
    goto L_08805520;
L_08805520:;
    ST32(s0+16, 0);
    s1 = LD32(s2+24);
    goto L_08805528;
L_08805528:;
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_08805550; }
    goto L_08805530;
L_08805530:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088055A8; }
    goto L_0880553C;
L_0880553C:;
    a1 = LD32(s1+12);
    goto L_08805540;
L_08805540:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08805598; }
    goto L_08805548;
L_08805548:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805550;
L_08805550:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08805588; }
    goto L_0880555C;
L_0880555C:;
    ST32(s0, 0);
    goto L_08805560;
L_08805560:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08805588:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805590;
L_08805590:;
    ST32(s0, 0);
    goto L_08805560;
L_08805598:;
    a0 = s0 + 0;
    func_08AA1A00(a0, a1, t1, t2, t3);
    goto L_088055A0;
L_088055A0:;
    goto L_08805548;
L_088055A8:;
    a0 = s0 + 0;
    func_08AA1A00(a0, a1, t1, t2, t3);
    goto L_088055B0;
L_088055B0:;
    a1 = LD32(s1+12);
    goto L_08805540;
L_088055B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088055C0;
L_088055C0:;
    ST32(s0+12, 0);
    goto L_08805520;
L_088055C8:;
    a2 = s3 + 0;
    func_08AA1A70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088055D0;
L_088055D0:;
    a0 = LD32(s1);
    goto L_088054BC;
L_088055D8:;
    a2 = s3 + 0;
    func_08AA1A70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088055E0;
L_088055E0:;
    a1 = LD32(s1+12);
    goto L_088054B0;
}

/* 088055E8 */
u32 func_088055E8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088055E8:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = a1 + 0;
    s5 = a2 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805618;
L_08805618:;
    v1 = LD32(s3);
    cnd_ = v1 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08805650; }
    goto L_08805624;
L_08805624:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0880562C;
L_0880562C:;
    a0 = v0 + 120;
    a1 = v0 + 116;
    a2 = v0 + 4;
    v0 = s2 < v1;
    cnd_ = v1 == s2;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0880565C; }
    goto L_08805644;
L_08805644:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0880562C; }
    goto L_08805650;
L_08805650:;
    a0 = LD32(s3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0880571C; }
    goto L_0880565C;
L_0880565C:;
    ST32(s5, a2);
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880568C; }
    goto L_08805668;
L_08805668:;
    sp = sp + 32;
    return v0;
L_0880568C:;
    v0 = LD_U8(s3+8);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08805710; }
    goto L_08805698;
L_08805698:;
    v0 = LD32(s3);
    cnd_ = v0 == 0;
    s4 = s3 + 0;
    if (cnd_) { goto L_088056D0; }
    goto L_088056A4;
L_088056A4:;
    v1 = v0 + 0;
    goto L_088056A8;
L_088056A8:;
    a0 = v1 + 120;
    s4 = v1 + 116;
    v1 = LD32(v1);
    s0 = 0 + 0;
    v0 = s2 < v1;
    cnd_ = v1 == s2;
    if (v0 == 0) s4 = a0;
    if (cnd_) { goto L_08805710; }
    goto L_088056C4;
L_088056C4:;
    v0 = LD32(s4);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088056A8; }
    goto L_088056D0;
L_088056D0:;
    a0 = 124;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088056D8;
L_088056D8:;
    s0 = v0 + 4;
    ST32(v0+4, 0);
    s1 = v0 + 0;
    a0 = s0 + 0;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    func_08AA1718(a0);
    goto L_088056F4;
L_088056F4:;
    ST32(s1, s2);
    v0 = LD32(s3+4);
    ST32(s1+116, 0);
    v0 = v0 + 1;
    ST32(s1+120, 0);
    ST32(s3+4, v0);
    ST32(s4, s1);
    goto L_08805710;
L_08805710:;
    ST32(s5, s0);
    v0 = 1;
    goto L_08805668;
L_0880571C:;
    a2 = 1;
    a1 = s2 + 0;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805728;
L_08805728:;
    a2 = v0 + 0;
    goto L_0880565C;
}

/* 08805730 */
u32 func_08805730(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08805730:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s5 = a2 + 0;
    s3 = a1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805764;
L_08805764:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    s2 = v0 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805774;
L_08805774:;
    ST32(s5, v0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088057A8; }
    goto L_08805780;
L_08805780:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088057A8:;
    s4 = s0 + 24;
    v0 = func_08966444(0, 0, 0);
    goto L_088057B0;
L_088057B0:;
    s1 = v0 + 0;
    v0 = LD_U8(s4+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08805820; }
    goto L_088057C0;
L_088057C0:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_088057F8; }
    goto L_088057CC;
L_088057CC:;
    v1 = v0 + 0;
    goto L_088057D0;
L_088057D0:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s2 < v1;
    cnd_ = v1 == s2;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08805820; }
    goto L_088057EC;
L_088057EC:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088057D0; }
    goto L_088057F8;
L_088057F8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805800;
L_08805800:;
    ST32(v0, s2);
    a1 = v0 + 4;
    v1 = LD32(s4+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s4+4, v1);
    ST32(s0, v0);
    goto L_08805820;
L_08805820:;
    ST32(a1, s1);
    v0 = 0 + 0;
    cnd_ = s1 == 0;
    ST32(s5, s1);
    if (cnd_) { goto L_08805890; }
    goto L_08805830;
L_08805830:;
    a0 = LD32(s1+52);
    cnd_ = a0 == 0;
    s0 = s1 + 52;
    if (cnd_) { goto L_08805850; }
    goto L_0880583C;
L_0880583C:;
    cnd_ = s3 == a0;
    if (cnd_) { v0 = LD32(s5); goto L_0880588C; }
    goto L_08805844;
L_08805844:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880584C;
L_0880584C:;
    ST32(s1+52, 0);
    goto L_08805850;
L_08805850:;
    ST32(s0+8, 0);
    cnd_ = s3 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088058AC; }
    goto L_0880585C;
L_0880585C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805864;
L_08805864:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805878;
L_08805878:;
    cnd_ = v0 != 0;
    ST32(s1+52, v0);
    if (cnd_) { goto L_08805898; }
    goto L_08805880;
L_08805880:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08805888;
L_08805888:;
    v0 = LD32(s5);
    goto L_0880588C;
L_0880588C:;
    ST32(v0+64, s2);
    goto L_08805890;
L_08805890:;
    v1 = 0 < v0;
    goto L_08805780;
L_08805898:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088058A4;
L_088058A4:;
    v0 = LD32(s5);
    goto L_0880588C;
L_088058AC:;
    ST32(s1+52, 0);
    goto L_08805888;
}

/* 088058B4 */
u64 func_088058B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088058B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088058CC;
L_088058CC:;
    a1 = v0 + 0;
    v1 = LD32(s0+24);
    cnd_ = v1 == 0;
    s0 = s0 + 24;
    if (cnd_) { goto L_08805908; }
    goto L_088058DC;
L_088058DC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088058E4;
L_088058E4:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08805914; }
    goto L_088058FC;
L_088058FC:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088058E4; }
    goto L_08805908;
L_08805908:;
    a0 = LD32(s0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08805930; }
    goto L_08805914;
L_08805914:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08805920; }
    goto L_0880591C;
L_0880591C:;
    v0 = LD32(a3);
    goto L_08805920;
L_08805920:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08805930:;
    a2 = 1;
    { u64 r_ = func_08AA1AF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805938;
L_08805938:;
    a3 = v0 + 0;
    goto L_08805914;
}

/* 08805940 */
u64 func_08805940(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805940:;
    sp = sp - 16;
    a0 = a0 + 24;
    a2 = 1;
    { u64 r_ = func_08AA1AF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805954;
L_08805954:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08805960; }
    goto L_0880595C;
L_0880595C:;
    v1 = LD32(v0);
    goto L_08805960;
L_08805960:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08805970 */
void func_08805970(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805970:;
    sp = sp - 16;
    func_08819874();
    goto L_08805980;
L_08805980:;
    func_088169E0();
    goto L_08805988;
L_08805988:;
    sp = sp + 16;
    return;
}

/* 08805994 */
void func_08805994(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805994:;
    a0 = D_08B204FC - (1276);
    sp = sp - 16;
    a0 = a0 + 1276;
    func_088052D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088059A8;
L_088059A8:;
    func_08819898();
    goto L_088059B0;
L_088059B0:;
    func_08816A08(0, 0, 0);
    goto L_088059B8;
L_088059B8:;
    sp = sp + 16;
    return;
}

/* 088059C4 */
void func_088059C4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088059C4:;
    a0 = D_08B204FC - (1276);
    sp = sp - 16;
    a0 = a0 + 1276;
    func_088052D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088059D8;
L_088059D8:;
    func_088198BC();
    goto L_088059E0;
L_088059E0:;
    func_088169E8(0, 0, 0);
    goto L_088059E8;
L_088059E8:;
    sp = sp + 16;
    return;
}

/* 088059F4 */
float func_088059F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088059F4:;
    sp = sp - 16;
    v0 = D_08AF09B0 - (2480);
    v1 = a0 + 28;
    t0 = a0 + 52;
    v0 = v0 + 2480;
    s0 = a0 + 0;
    a2 = 0x20000u;
    ST32(a0+8, 0);
    a2 = a2 | 0x1;
    a3 = 16384;
    ST32(a0, v0);
    ST32(s0+24, 0);
    ST8(v1+8, 0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST32(v1+12, 0);
    ST32(v1+20, 0);
    ST32(t0+20, 0);
    ST32(t0+4, 0);
    ST8(t0+8, 0);
    ST32(t0+12, 0);
    ST32(t0+16, 0);
    ST32(s0+4, 0);
    ST32(s0+16, 0);
    ST32(s0+28, 0);
    ST32(s0+52, 0);
    s2 = a1 + 0;
    a1 = 0x350000u;
    s1 = a0 + 76;
    a1 = a1 | 0x80e2;
    a0 = s1 + 0;
    func_088150F8(a0, a1, a2, a3);
    goto L_08805A84;
L_08805A84:;
    a0 = s0 + 264;
    ST32(s0+220, 0);
    ST32(s0+224, 0);
    func_0881B170(a0);
    goto L_08805A94;
L_08805A94:;
    ST32(s0+4, s0);
    a1 = s2 + 0;
    a0 = s0 + 0;
    ST32(s1+4, s0);
    func_0880655C(a0, a1);
    goto L_08805AA8;
L_08805AA8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08805F0C(a0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805AB0;
L_08805AB0:;
    sp = sp + 16;
    return f0;
}

/* 08805AC8 */
void func_08805AC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805AC8:;
    sp = sp - 16;
    v0 = D_08AF09B0 - (2480);
    v1 = a0 + 28;
    t0 = a0 + 52;
    v0 = v0 + 2480;
    s0 = a0 + 0;
    a2 = 0x20000u;
    ST32(a0+8, 0);
    a3 = 16384;
    a2 = a2 | 0x1;
    ST32(a0, v0);
    ST32(s0+24, 0);
    ST8(v1+8, 0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST32(v1+12, 0);
    ST32(v1+20, 0);
    ST32(t0+20, 0);
    ST32(t0+4, 0);
    ST8(t0+8, 0);
    ST32(t0+12, 0);
    ST32(t0+16, 0);
    ST32(s0+4, 0);
    ST32(s0+16, 0);
    ST32(s0+28, 0);
    ST32(s0+52, 0);
    s2 = a1 + 0;
    a1 = 0x350000u;
    s1 = a0 + 76;
    a1 = a1 | 0x80e2;
    a0 = s1 + 0;
    func_088150F8(a0, a1, a2, a3);
    goto L_08805B58;
L_08805B58:;
    a0 = s0 + 264;
    ST32(s0+220, 0);
    ST32(s0+224, 0);
    func_0881B170(a0);
    goto L_08805B68;
L_08805B68:;
    ST32(s0+4, s0);
    a1 = s2 + 0;
    a0 = s0 + 0;
    ST32(s1+4, s0);
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805B80;
L_08805B80:;
    a0 = s0 + 0;
    { rv_t r_ = func_08805F0C(a0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805B88;
L_08805B88:;
    sp = sp + 16;
    return;
}

/* 08805BA0 */
rv_t func_08805BA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805BA0:;
    sp = sp - 16;
    v0 = D_08AF09B0 - (2480);
    v1 = a0 + 28;
    t0 = a0 + 52;
    v0 = v0 + 2480;
    s0 = a0 + 0;
    a2 = 0x20000u;
    ST32(a0+8, 0);
    a3 = 16384;
    a2 = a2 | 0x1;
    ST32(a0, v0);
    ST32(s0+24, 0);
    ST8(v1+8, 0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST32(v1+12, 0);
    ST32(v1+20, 0);
    ST32(t0+20, 0);
    ST32(t0+4, 0);
    ST8(t0+8, 0);
    ST32(t0+12, 0);
    ST32(t0+16, 0);
    ST32(s0+4, 0);
    ST32(s0+16, 0);
    ST32(s0+28, 0);
    ST32(s0+52, 0);
    s2 = a1 + 0;
    a1 = 0x350000u;
    s1 = a0 + 76;
    a1 = a1 | 0x80e2;
    a0 = s1 + 0;
    func_088150F8(a0, a1, a2, a3);
    goto L_08805C30;
L_08805C30:;
    a0 = s0 + 264;
    ST32(s0+220, 0);
    ST32(s0+224, 0);
    func_0881B170(a0);
    goto L_08805C40;
L_08805C40:;
    ST32(s0+4, s0);
    a1 = s2 + 0;
    a0 = s0 + 0;
    ST32(s1+4, s0);
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08805C58;
L_08805C58:;
    a0 = s0 + 0;
    { rv_t r_ = func_08805F0C(a0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805C60;
L_08805C60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08805C78 */
float func_08805C78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805C78:;
    sp = sp - 16;
    v0 = D_08AF09B0 - (2480);
    v1 = a0 + 28;
    t0 = a0 + 52;
    v0 = v0 + 2480;
    s1 = a0 + 0;
    a2 = 0x20000u;
    ST32(a0+8, 0);
    a2 = a2 | 0x1;
    a3 = 16384;
    ST32(s1+24, 0);
    ST32(a0, v0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+20, 0);
    ST32(t0+20, 0);
    ST32(t0+4, 0);
    ST8(t0+8, 0);
    ST32(t0+12, 0);
    ST32(t0+16, 0);
    ST32(s1+4, 0);
    ST32(s1+16, 0);
    ST32(s1+28, 0);
    ST32(s1+52, 0);
    s2 = a1 + 0;
    a1 = 0x350000u;
    s0 = a0 + 76;
    a1 = a1 | 0x80e2;
    a0 = s0 + 0;
    func_088150F8(a0, a1, a2, a3);
    goto L_08805D08;
L_08805D08:;
    a0 = s1 + 264;
    ST32(s1+220, 0);
    ST32(s1+224, 0);
    func_0881B170(a0);
    goto L_08805D18;
L_08805D18:;
    v0 = LD32(s2+16);
    ST32(s1+4, s1);
    a0 = s1 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(s0+4, s1);
    if (cnd_) { goto L_08805D34; }
    goto L_08805D30;
L_08805D30:;
    a1 = LD32(v0+52);
    goto L_08805D34;
L_08805D34:;
    func_0880655C(a0, a1);
    goto L_08805D3C;
L_08805D3C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08805F0C(a0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805D44;
L_08805D44:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 1;
    { rv_t r_ = func_08805D74(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805D5C;
L_08805D5C:;
    sp = sp + 16;
    return f0;
}

/* 08805D74 */
rv_t func_08805D74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08805D74:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    s3 = t0 & 0xff;
    s0 = a2 & 0xff;
    func_0880A8D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08805DA4;
L_08805DA4:;
    v0 = LD32(s1+16);
    v1 = LD32(s2+16);
    cnd_ = v0 == v1;
    v0 = s2 + 236;
    if (cnd_) { goto L_08805DBC; }
    goto L_08805DB4;
L_08805DB4:;
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(v1+52); goto L_08805EFC; }
    goto L_08805DBC;
L_08805DBC:;
    f0 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s2+236));
    v1 = LD32(s2+20);
    a1 = LD32(s2+252);
    v0 = s1 + 236;
    ST32(v0+12, FBITS(f0));
    a2 = s2 + 280;
    a3 = s1 + 280;
    ST32(v0+4, FBITS(f1));
    a0 = s1 + 0;
    s0 = s2 + 76;
    ST32(v0+8, FBITS(f2));
    ST32(s1+236, FBITS(f3));
    ST32(s1+252, a1);
    ST32(s1+20, v1);
    v0 = LD32(s2+264);
    ST32(s1+264, v0);
    v1 = LD32(s2+268);
    ST32(s1+268, v1);
    v0 = LD32(s2+272);
    ST32(s1+272, v0);
    v1 = LD32(s2+276);
    ST32(s1+276, v1);
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(s2+280));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(s1+280, FBITS(f2));
    v0 = LD32(s2+292);
    ST32(s1+292, v0);
    v1 = LD32(s2+296);
    ST32(s1+296, v1);
    v0 = LD32(s2+300);
    ST32(s1+300, v0);
    v1 = LD32(s2+304);
    ST32(s1+304, v1);
    v0 = LD_U16(s2+314);
    v1 = LD32(s2+256);
    a1 = LD32(s2+260);
    a2 = LD32(s2+224);
    a3 = LD32(s2+220);
    ST16(s1+314, v0);
    ST32(s1+256, v1);
    ST32(s1+260, a1);
    ST32(s1+224, a2);
    ST32(s1+220, a3);
    func_0880AE70(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08805E84;
L_08805E84:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08816728(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805E90;
L_08805E90:;
    a0 = s1 + 76;
    a1 = s0 + 0;
    { rv_t r_ = func_08815564(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805E9C;
L_08805E9C:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08805EB0; }
    goto L_08805EA4;
L_08805EA4:;
    a0 = LD32(s2+228);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08805EC8; }
    goto L_08805EB0;
L_08805EB0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08805EC8:;
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805ED4;
L_08805ED4:;
    ST32(s1+228, v0);
    v1 = v0 + 0;
    v0 = LD32(v1+52);
    goto L_08805EE0;
L_08805EE0:;
    v0 = v0 | 0x3;
    ST32(v1+52, v0);
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+52); goto L_08805EE0; }
    goto L_08805EF4;
L_08805EF4:;
    goto L_08805EB0;
L_08805EFC:;
    a0 = s1 + 0;
    func_0880655C(a0, a1);
    goto L_08805F04;
L_08805F04:;
    v0 = s2 + 236;
    goto L_08805DBC;
}

/* 08805F0C */
rv_t func_08805F0C(u32 a0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805F0C:;
    sp = sp - 16;
    v1 = D_08AEB480 - (-19328);
    a1 = a0 + 280;
    f0 = BITSF(LD32(v1-19328));
    ST32(a0+280, 0);
    v1 = D_08B45ACC - (23244);
    t2 = v1 + 23244;
    ST32(a0+248, FBITS(f0));
    t3 = D_08B20530 - (1328);
    t0 = (u32)-1;
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    a3 = LD32(v1+23244);
    v1 = D_08B285AC - (-31316);
    a1 = LD32(t3+1328);
    ST32(a0+292, a3);
    t1 = a1 + 1;
    a3 = LD32(t2+4);
    a2 = LD32(v1-31316);
    v1 = D_08B2052C - (1324);
    ST32(a0+296, a3);
    a2 = a2 + a1;
    t1 = t1 & 0x7;
    a1 = LD32(t2+8);
    t4 = LD32(v1+1324);
    v1 = 999;
    ST32(a0+300, a1);
    ST32(a0+232, v1);
    v1 = LD32(t2+12);
    ST32(a0+348, a2);
    ST32(a0+20, t0);
    ST32(a0+224, t0);
    ST32(a0+220, t0);
    ST32(a0+252, t0);
    ST32(a0+304, v1);
    ST16(a0+312, t0);
    ST32(a0+352, 0);
    ST32(t3+1328, t1);
    ST32(a0+228, 0);
    ST8(a0+12, 0);
    ST8(a0+13, 0);
    ST32(a0+256, 0);
    ST32(a0+260, 0);
    ST16(a0+320, t0);
    ST32(a0+316, 0);
    cnd_ = t4 != 0;
    ST16(a0+314, 0);
    if (cnd_) { goto L_08805FD8; }
    goto L_08805FCC;
L_08805FCC:;
    goto L_08805FD0;
L_08805FD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08805FD8:;
    t_ = t4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08805FE0;
L_08805FE0:;
    goto L_08805FD0;
}

/* 08805FE8 */
rv_t func_08805FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08805FE8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = D_08AF09B0 - (2480);
    v0 = v0 + 2480;
    a0 = LD32(a0+316);
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088061A4; }
    goto L_08806014;
L_08806014:;
    s1 = LD32(s0+352);
    goto L_08806018;
L_08806018:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_0880618C; }
    goto L_08806020;
L_08806020:;
    a0 = LD32(s0+228);
    goto L_08806024;
L_08806024:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08806158; }
    goto L_0880602C;
L_0880602C:;
    v0 = LD32(s0+256);
    goto L_08806030;
L_08806030:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08806044; }
    goto L_08806038;
L_08806038:;
    v0 = LD32(s0+260);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08806144; }
    goto L_08806044;
L_08806044:;
    a0 = s0 + 76;
    { rv_t r_ = func_088151B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880604C;
L_0880604C:;
    s1 = LD32(s0+52);
    cnd_ = s1 == 0;
    s2 = s0 + 52;
    if (cnd_) { goto L_08806078; }
    goto L_08806058;
L_08806058:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08806134; }
    goto L_08806064;
L_08806064:;
    a1 = LD32(s1+12);
    goto L_08806068;
L_08806068:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08806124; }
    goto L_08806070;
L_08806070:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806078;
L_08806078:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08806114; }
    goto L_08806084;
L_08806084:;
    s1 = LD32(s0+28);
    goto L_08806088;
L_08806088:;
    ST32(s2+16, 0);
    s0 = s0 + 28;
    cnd_ = s1 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_088060B8; }
    goto L_08806098;
L_08806098:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08806104; }
    goto L_088060A4;
L_088060A4:;
    a1 = LD32(s1+12);
    goto L_088060A8;
L_088060A8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088060F4; }
    goto L_088060B0;
L_088060B0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088060B8;
L_088060B8:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088060E4; }
    goto L_088060C4;
L_088060C4:;
    ST32(s0+16, 0);
    goto L_088060C8;
L_088060C8:;
    ST32(s0+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088060E4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088060EC;
L_088060EC:;
    ST32(s0+16, 0);
    goto L_088060C8;
L_088060F4:;
    a0 = s0 + 0;
    func_08AA1B6C(a0, a1, 0, 0, 0);
    goto L_088060FC;
L_088060FC:;
    goto L_088060B0;
L_08806104:;
    a0 = s0 + 0;
    func_08AA1B6C(a0, a1, 0, 0, 0);
    goto L_0880610C;
L_0880610C:;
    a1 = LD32(s1+12);
    goto L_088060A8;
L_08806114:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880611C;
L_0880611C:;
    s1 = LD32(s0+28);
    goto L_08806088;
L_08806124:;
    a0 = s2 + 0;
    func_08AA1BDC(a0, a1, 0, 0, 0);
    goto L_0880612C;
L_0880612C:;
    goto L_08806070;
L_08806134:;
    a0 = s2 + 0;
    func_08AA1BDC(a0, a1, 0, 0, 0);
    goto L_0880613C;
L_0880613C:;
    a1 = LD32(s1+12);
    goto L_08806068;
L_08806144:;
    t_ = v0;
    a0 = s0 + 256;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880614C;
L_0880614C:;
    goto L_08806044;
L_08806154:;
    v1 = LD32(a0);
    goto L_08806158;
L_08806158:;
    v0 = LD32(v1+76);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806164;
L_08806164:;
    a0 = LD32(s0+228);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806178;
L_08806178:;
    v1 = LD32(s0+228);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08806154; }
    goto L_08806184;
L_08806184:;
    v0 = LD32(s0+256);
    goto L_08806030;
L_0880618C:;
    a0 = s1 + 0;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806194;
L_08806194:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880619C;
L_0880619C:;
    a0 = LD32(s0+228);
    goto L_08806024;
L_088061A4:;
    a1 = s0 + 0;
    { rv_t r_ = func_08808534(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088061AC;
L_088061AC:;
    s1 = LD32(s0+352);
    goto L_08806018;
}

/* 088061B4 */
rv_t func_088061B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088061B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = D_08AF09B0 - (2480);
    v0 = v0 + 2480;
    a0 = LD32(a0+316);
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08806370; }
    goto L_088061E0;
L_088061E0:;
    s1 = LD32(s0+352);
    goto L_088061E4;
L_088061E4:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08806358; }
    goto L_088061EC;
L_088061EC:;
    a0 = LD32(s0+228);
    goto L_088061F0;
L_088061F0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08806324; }
    goto L_088061F8;
L_088061F8:;
    v0 = LD32(s0+256);
    goto L_088061FC;
L_088061FC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08806210; }
    goto L_08806204;
L_08806204:;
    v0 = LD32(s0+260);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08806310; }
    goto L_08806210;
L_08806210:;
    a0 = s0 + 76;
    { rv_t r_ = func_088151B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806218;
L_08806218:;
    s1 = LD32(s0+52);
    cnd_ = s1 == 0;
    s2 = s0 + 52;
    if (cnd_) { goto L_08806244; }
    goto L_08806224;
L_08806224:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08806300; }
    goto L_08806230;
L_08806230:;
    a1 = LD32(s1+12);
    goto L_08806234;
L_08806234:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088062F0; }
    goto L_0880623C;
L_0880623C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806244;
L_08806244:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088062E0; }
    goto L_08806250;
L_08806250:;
    s1 = LD32(s0+28);
    goto L_08806254;
L_08806254:;
    ST32(s2+16, 0);
    s0 = s0 + 28;
    cnd_ = s1 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08806284; }
    goto L_08806264;
L_08806264:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088062D0; }
    goto L_08806270;
L_08806270:;
    a1 = LD32(s1+12);
    goto L_08806274;
L_08806274:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088062C0; }
    goto L_0880627C;
L_0880627C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806284;
L_08806284:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088062B0; }
    goto L_08806290;
L_08806290:;
    ST32(s0+16, 0);
    goto L_08806294;
L_08806294:;
    ST32(s0+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088062B0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088062B8;
L_088062B8:;
    ST32(s0+16, 0);
    goto L_08806294;
L_088062C0:;
    a0 = s0 + 0;
    func_08AA1B6C(a0, a1, 0, 0, 0);
    goto L_088062C8;
L_088062C8:;
    goto L_0880627C;
L_088062D0:;
    a0 = s0 + 0;
    func_08AA1B6C(a0, a1, 0, 0, 0);
    goto L_088062D8;
L_088062D8:;
    a1 = LD32(s1+12);
    goto L_08806274;
L_088062E0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088062E8;
L_088062E8:;
    s1 = LD32(s0+28);
    goto L_08806254;
L_088062F0:;
    a0 = s2 + 0;
    func_08AA1BDC(a0, a1, 0, 0, 0);
    goto L_088062F8;
L_088062F8:;
    goto L_0880623C;
L_08806300:;
    a0 = s2 + 0;
    func_08AA1BDC(a0, a1, 0, 0, 0);
    goto L_08806308;
L_08806308:;
    a1 = LD32(s1+12);
    goto L_08806234;
L_08806310:;
    t_ = v0;
    a0 = s0 + 256;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806318;
L_08806318:;
    goto L_08806210;
L_08806320:;
    v1 = LD32(a0);
    goto L_08806324;
L_08806324:;
    v0 = LD32(v1+76);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806330;
L_08806330:;
    a0 = LD32(s0+228);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806344;
L_08806344:;
    v1 = LD32(s0+228);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08806320; }
    goto L_08806350;
L_08806350:;
    v0 = LD32(s0+256);
    goto L_088061FC;
L_08806358:;
    a0 = s1 + 0;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806360;
L_08806360:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806368;
L_08806368:;
    a0 = LD32(s0+228);
    goto L_088061F0;
L_08806370:;
    a1 = s0 + 0;
    { rv_t r_ = func_08808534(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806378;
L_08806378:;
    s1 = LD32(s0+352);
    goto L_088061E4;
}

/* 08806380 */
rv_t func_08806380(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08806380:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = D_08AF09B0 - (2480);
    v0 = v0 + 2480;
    a0 = LD32(a0+316);
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0880654C; }
    goto L_088063B0;
L_088063B0:;
    s0 = LD32(s1+352);
    goto L_088063B4;
L_088063B4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08806534; }
    goto L_088063BC;
L_088063BC:;
    a0 = LD32(s1+228);
    goto L_088063C0;
L_088063C0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08806500; }
    goto L_088063C8;
L_088063C8:;
    v0 = LD32(s1+256);
    goto L_088063CC;
L_088063CC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088063E0; }
    goto L_088063D4;
L_088063D4:;
    v0 = LD32(s1+260);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088064EC; }
    goto L_088063E0;
L_088063E0:;
    a0 = s1 + 76;
    { rv_t r_ = func_088151B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088063E8;
L_088063E8:;
    s0 = LD32(s1+52);
    cnd_ = s0 == 0;
    s2 = s1 + 52;
    if (cnd_) { goto L_08806414; }
    goto L_088063F4;
L_088063F4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088064DC; }
    goto L_08806400;
L_08806400:;
    a1 = LD32(s0+12);
    goto L_08806404;
L_08806404:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088064CC; }
    goto L_0880640C;
L_0880640C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806414;
L_08806414:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088064BC; }
    goto L_08806420;
L_08806420:;
    s0 = LD32(s1+28);
    goto L_08806424;
L_08806424:;
    ST32(s2+16, 0);
    s3 = s1 + 28;
    cnd_ = s0 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08806454; }
    goto L_08806434;
L_08806434:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088064AC; }
    goto L_08806440;
L_08806440:;
    a1 = LD32(s0+12);
    goto L_08806444;
L_08806444:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0880649C; }
    goto L_0880644C;
L_0880644C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806454;
L_08806454:;
    a0 = LD32(s3+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0880648C; }
    goto L_08806460;
L_08806460:;
    ST32(s3+16, 0);
    goto L_08806464;
L_08806464:;
    a0 = s1 + 0;
    ST32(s3+12, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806470;
L_08806470:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0880648C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806494;
L_08806494:;
    ST32(s3+16, 0);
    goto L_08806464;
L_0880649C:;
    a0 = s3 + 0;
    func_08AA1B6C(a0, a1, 0, 0, 0);
    goto L_088064A4;
L_088064A4:;
    goto L_0880644C;
L_088064AC:;
    a0 = s3 + 0;
    func_08AA1B6C(a0, a1, 0, 0, 0);
    goto L_088064B4;
L_088064B4:;
    a1 = LD32(s0+12);
    goto L_08806444;
L_088064BC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088064C4;
L_088064C4:;
    s0 = LD32(s1+28);
    goto L_08806424;
L_088064CC:;
    a0 = s2 + 0;
    func_08AA1BDC(a0, a1, 0, 0, 0);
    goto L_088064D4;
L_088064D4:;
    goto L_0880640C;
L_088064DC:;
    a0 = s2 + 0;
    func_08AA1BDC(a0, a1, 0, 0, 0);
    goto L_088064E4;
L_088064E4:;
    a1 = LD32(s0+12);
    goto L_08806404;
L_088064EC:;
    t_ = v0;
    a0 = s1 + 256;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088064F4;
L_088064F4:;
    goto L_088063E0;
L_088064FC:;
    v1 = LD32(a0);
    goto L_08806500;
L_08806500:;
    v0 = LD32(v1+76);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880650C;
L_0880650C:;
    a0 = LD32(s1+228);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806520;
L_08806520:;
    v1 = LD32(s1+228);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088064FC; }
    goto L_0880652C;
L_0880652C:;
    v0 = LD32(s1+256);
    goto L_088063CC;
L_08806534:;
    a0 = s0 + 0;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880653C;
L_0880653C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806544;
L_08806544:;
    a0 = LD32(s1+228);
    goto L_088063C0;
L_0880654C:;
    a1 = s1 + 0;
    { rv_t r_ = func_08808534(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806554;
L_08806554:;
    s0 = LD32(s1+352);
    goto L_088063B4;
}

/* 0880655C */
void func_0880655C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880655C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = D_08B204F8 - (1272);
    ST32(s0+1272, a1);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806580;
L_08806580:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806590;
L_08806590:;
    ST32(s0+1272, 0);
    sp = sp + 16;
    return;
}

/* 088065A8 */
u64 func_088065A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088065A8:;
    sp = sp - 32;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088065D8; }
    goto L_088065C0;
L_088065C0:;
    ST32(a0+16, 0);
    goto L_088065C4;
L_088065C4:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088065D8:;
    s1 = LD32(a0+16);
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088065E8;
L_088065E8:;
    cnd_ = s1 == 0;
    ST32(s0+16, v0);
    if (cnd_) { goto L_08806680; }
    goto L_088065F0;
L_088065F0:;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08806684; }
    goto L_088065F8;
L_088065F8:;
    a2 = LD32(s0+228);
    cnd_ = a2 == 0;
    if (cnd_) { ST32(s0+220, v0); goto L_08806688; }
    goto L_08806604;
L_08806604:;
    t0 = (u32)-1;
    a0 = LD32(a2+12);
    goto L_0880660C;
L_0880660C:;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { a2 = LD32(a2+8); goto L_08806678; }
    goto L_08806614;
L_08806614:;
    v0 = LD32(s1+68);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0880663C; }
    goto L_08806624;
L_08806624:;
    v1 = LD32(s1+72);
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a3 = LD32(v0+52);
    goto L_0880663C;
L_0880663C:;
    v0 = LD32(s0+16);
    ST32(sp, t0);
    a1 = LD32(v0+68);
    cnd_ = (s32)a1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08806674; }
    goto L_08806650;
L_08806650:;
    v0 = LD32(v0+72);
    v1 = v0 + 52;
    v0 = LD32(v1);
    goto L_0880665C;
L_0880665C:;
    cnd_ = v0 == a3;
    v1 = v1 + 68;
    if (cnd_) { goto L_08806690; }
    goto L_08806664;
L_08806664:;
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0880665C; }
    goto L_08806674;
L_08806674:;
    a2 = LD32(a2+8);
    goto L_08806678;
L_08806678:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2+12); goto L_0880660C; }
    goto L_08806680;
L_08806680:;
    v0 = (u32)-1;
    goto L_08806684;
L_08806684:;
    ST32(s0+220, v0);
    goto L_08806688;
L_08806688:;
    ST32(s0+224, v0);
    goto L_088065C4;
L_08806690:;
    ST32(sp, a0);
    ST32(a2+12, a0);
    goto L_08806674;
}

/* 0880669C */
rv_t func_0880669C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880669C:;
    sp = sp - 16;
    v0 = 0 + 0;
    s0 = a2 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088066B8; }
    goto L_088066B4;
L_088066B4:;
    v0 = LD32(a1);
    goto L_088066B8;
L_088066B8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088066D8; }
    goto L_088066C0;
L_088066C0:;
    a0 = v0 + 0;
    v0 = LD32(v0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088066E8; }
    goto L_088066D4;
L_088066D4:;
    goto L_088066D8;
L_088066D8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088066E8:;
    { rv_t r_ = func_08814A18(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088066F0;
L_088066F0:;
    v1 = LD32(s0);
    v1 = v1 | v0;
    ST32(s0, v1);
    goto L_088066D4;
}

/* 08806700 */
rv_t func_08806700(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08806700:;
    sp = sp - 32;
    v0 = RS_FADDR(func_0880669C, 0x0880669Cu) - (26268);
    s2 = v0 + 26268;
    v0 = 0 + 0;
    v1 = LD32(a0+92);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    s1 = a0 + 52;
    if (cnd_) { goto L_0880679C; }
    goto L_08806730;
L_08806730:;
    s0 = LD32(a0+52);
    v0 = 1;
    ST8(s1+8, v0);
    cnd_ = s0 == 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08806794; }
    goto L_08806744;
L_08806744:;
    v0 = LD32(s0+8);
    a0 = s1 + 0;
    a2 = s2 + 0;
    a1 = v0 + 0;
    cnd_ = v0 != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_088067B4; }
    goto L_0880675C;
L_0880675C:;
    v0 = LD32(s0+12);
    goto L_08806760;
L_08806760:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08806784; }
    goto L_08806774;
L_08806774:;
    { rv_t r_ = func_08AA1C4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880677C;
L_0880677C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+8, 0); goto L_08806798; }
    goto L_08806784;
L_08806784:;
    a0 = LD32(s0);
    a1 = s0 + 4;
    t_ = s2;
    a2 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806794;
L_08806794:;
    ST8(s1+8, 0);
    goto L_08806798;
L_08806798:;
    v0 = LD32(sp);
    goto L_0880679C;
L_0880679C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088067B4:;
    { rv_t r_ = func_08AA1C4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088067BC;
L_088067BC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+8, 0); goto L_08806798; }
    goto L_088067C4;
L_088067C4:;
    v0 = LD32(s0+12);
    goto L_08806760;
}

/* 088067CC */
rv_t func_088067CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088067CC:;
    sp = sp - 48;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a0+12);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_0880686C; }
    goto L_08806804;
L_08806804:;
    a1 = 0 + 0;
    { rv_t r_ = func_08806C1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880680C;
L_0880680C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    { rv_t r_ = func_0880688C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806820;
L_08806820:;
    s1 = D_08B285AC - (-31316);
    v0 = LD32(s0+24);
    goto L_08806828;
L_08806828:;
    v1 = LD32(s1-31316);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08806850; }
    goto L_08806834;
L_08806834:;
    cnd_ = (s32)s3 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08806848; }
    goto L_0880683C;
L_0880683C:;
    { rv_t r_ = func_08806B30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806844;
L_08806844:;
    v1 = LD32(s1-31316);
    goto L_08806848;
L_08806848:;
    ST32(s0+24, v1);
    goto L_08806850;
L_08806850:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880686C:;
    s1 = D_08B285AC - (-31316);
    { rv_t r_ = func_0880688C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806874;
L_08806874:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    { rv_t r_ = func_08806C1C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806884;
L_08806884:;
    v0 = LD32(s0+24);
    goto L_08806828;
}

/* 0880688C */
rv_t func_0880688C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880688C:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    v0 = LD32(a0+352);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880695C; }
    goto L_088068BC;
L_088068BC:;
    a0 = s0 + 0;
    goto L_088068C0;
L_088068C0:;
    a1 = s2 + 0;
    func_0880A838(a0, a1);
    goto L_088068C8;
L_088068C8:;
    a0 = s0 + 292;
    a1 = s3 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088068D4;
L_088068D4:;
    v1 = LD32(s0+312);
    v0 = 0x20000u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = 0x40000u;
    if (cnd_) { goto L_088068F4; }
    goto L_088068E8;
L_088068E8:;
    v0 = 0x40000000u;
    s1 = s1 | v0;
    v0 = 0x40000u;
    goto L_088068F4;
L_088068F4:;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08806908; }
    goto L_08806900;
L_08806900:;
    v0 = 0x10000000u;
    s1 = s1 | v0;
    goto L_08806908;
L_08806908:;
    a1 = s2 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    { rv_t r_ = func_088192DC(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806918;
L_08806918:;
    s0 = LD32(s0+228);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08806944; }
    goto L_08806924;
L_08806924:;
    s1 = (s1 & ~(0x1u << 27)) | ((0 & 0x1) << 27);
    goto L_08806928;
L_08806928:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0880E6C0(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806934;
L_08806934:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    s1 = (s1 & ~(0x1u << 27)) | ((0 & 0x1) << 27);
    if (cnd_) { goto L_08806928; }
    goto L_08806940;
L_08806940:;
    goto L_08806944;
L_08806944:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0880695C:;
    func_0880A2B4(a0);
    goto L_08806964;
L_08806964:;
    a0 = s0 + 0;
    goto L_088068C0;
}

/* 0880696C */
void func_0880696C(void)
{
L_0880696C:;
    return;
}

/* 08806974 */
rv_t func_08806974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08806974:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08806988; }
    goto L_08806984;
L_08806984:;
    a0 = LD32(a1);
    goto L_08806988;
L_08806988:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088069A0; }
    goto L_08806990;
L_08806990:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088069A8; }
    goto L_088069A0;
L_088069A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088069A8:;
    { rv_t r_ = func_08814C84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088069B0;
L_088069B0:;
    goto L_088069A0;
}

/* 088069B8 */
float func_088069B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088069B8:;
    sp = sp - 32;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v0 = func_0880830C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088069E0;
L_088069E0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08806B14; }
    goto L_088069E8;
L_088069E8:;
    a1 = LD32(s0+24);
    cnd_ = a1 != 0;
    a0 = D_08B30A5C - (2652);
    if (cnd_) { goto L_08806A90; }
    goto L_088069F4;
L_088069F4:;
    a0 = LD32(s0+4);
    v0 = func_088DA8C0(a0);
    goto L_088069FC;
L_088069FC:;
    cnd_ = v0 != 0;
    if (cnd_) { f15 = BITSF(LD32(s0+20)); goto L_08806A20; }
    goto L_08806A04;
L_08806A04:;
    goto L_08806A08;
L_08806A08:;
    sp = sp + 32;
    return f0;
L_08806A20:;
    f12 = BITSF(LD32(s0+16));
    f13 = BITSF(LD32(s0+12));
    f14 = BITSF(LD32(s0+8));
    s1 = D_08B15A04 - (23044);
    a0 = v0 + 0;
    a1 = s3 + 0;
    s0 = LD32(s1+23044);
    f0 = func_088DBFA4(a0, a1, f12, f13, f14, f15);
    goto L_08806A40;
L_08806A40:;
    v1 = LD32(s1+23044);
    cnd_ = s0 == v1;
    v1 = s0 << 4;
    if (cnd_) { goto L_08806A04; }
    goto L_08806A4C;
L_08806A4C:;
    v1 = v1 + s0;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = v1 << 3;
    v1 = v1 + v0;
    v0 = D_08B159FC - (23036);
    a1 = 1;
    ST32(v0+23036, v1);
    v0 = D_08B230B0 - (12464);
    a2 = a1 << (s0 & 31);
    a0 = D_08B230A8 - (12456);
    ST8(v0+12464, a1);
    v0 = D_08B15A0C - (23052);
    ST8(a0+12456, a2);
    ST32(s1+23044, s0);
    ST8(v0+23052, a1);
    goto L_08806A04;
L_08806A90:;
    a0 = a0 + 2652;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08806A98;
L_08806A98:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088069F4; }
    goto L_08806AA0;
L_08806AA0:;
    v0 = LD_U8(v0+13);
    cnd_ = v0 != 0;
    v0 = D_08B309FC - (2556);
    if (cnd_) { goto L_088069F4; }
    goto L_08806AAC;
L_08806AAC:;
    a1 = LD32(v0+2556);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08806ACC; }
    goto L_08806AB8;
L_08806AB8:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_08806ACC;
L_08806ACC:;
    v1 = D_08B30A04 - (2564);
    v0 = LD32(v1+2564);
    v0 = v0 - a0;
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088069F4; }
    goto L_08806AE4;
L_08806AE4:;
    f12 = BITSF(LD32(s1+84));
    a0 = s3 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806AF0;
L_08806AF0:;
    cnd_ = v0 == 0;
    v0 = D_08AEB484 - (-19324);
    if (cnd_) { goto L_088069F4; }
    goto L_08806AF8;
L_08806AF8:;
    f12 = BITSF(LD32(v0-19324));
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806B0C;
L_08806B0C:;
    goto L_088069F4;
L_08806B14:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = func_08817F04(a0, a1);
    goto L_08806B20;
L_08806B20:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088069E8; }
    goto L_08806B28;
L_08806B28:;
    goto L_08806A08;
}

/* 08806B30 */
rv_t func_08806B30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08806B30:;
    sp = sp - 32;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08806BA8; }
    goto L_08806B54;
L_08806B54:;
    v0 = LD32(a0+92);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+228); goto L_08806BAC; }
    goto L_08806B64;
L_08806B64:;
    s1 = LD32(a0+52);
    s2 = a0 + 52;
    v0 = 1;
    v1 = RS_FADDR(func_08806974, 0x08806974u) - (26996);
    ST8(s2+8, v0);
    cnd_ = s1 == 0;
    s3 = v1 + 26996;
    if (cnd_) { goto L_08806BA4; }
    goto L_08806B80;
L_08806B80:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08806C0C; }
    goto L_08806B8C;
L_08806B8C:;
    a1 = LD32(s1+12);
    goto L_08806B90;
L_08806B90:;
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08806BFC; }
    goto L_08806B98;
L_08806B98:;
    a0 = LD32(s1);
    goto L_08806B9C;
L_08806B9C:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806BA4;
L_08806BA4:;
    ST8(s2+8, 0);
    goto L_08806BA8;
L_08806BA8:;
    s0 = LD32(s0+228);
    goto L_08806BAC;
L_08806BAC:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08806BE4; }
    goto L_08806BB4;
L_08806BB4:;
    v1 = LD32(s0);
    goto L_08806BB8;
L_08806BB8:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806BC4;
L_08806BC4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08806BD4; }
    goto L_08806BCC;
L_08806BCC:;
    { rv_t r_ = func_08806B30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806BD4;
L_08806BD4:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08806BB8; }
    goto L_08806BE0;
L_08806BE0:;
    goto L_08806BE4;
L_08806BE4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08806BFC:;
    a2 = s3 + 0;
    func_08AA1CF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08806C04;
L_08806C04:;
    a0 = LD32(s1);
    goto L_08806B9C;
L_08806C0C:;
    a2 = s3 + 0;
    func_08AA1CF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08806C14;
L_08806C14:;
    a1 = LD32(s1+12);
    goto L_08806B90;
}

/* 08806C1C */
rv_t func_08806C1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08806C1C:;
    sp = sp - 32;
    s2 = a1 & 0xff;
    s0 = a0 + 0;
    a0 = D_08B285AC - (-31316);
    f20 = f12;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_08806C58; }
    goto L_08806C48;
L_08806C48:;
    v1 = LD32(a0-31316);
    v0 = LD32(s0+20);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08806CE4; }
    goto L_08806C58;
L_08806C58:;
    v1 = D_08AEB488 - (-19320);
    f0 = BITSF(LD32(v1-19320));
    v0 = LD32(a0-31316);
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    ST32(s0+20, v0);
    if (cnd_) { goto L_08806C7C; }
    goto L_08806C74;
L_08806C74:;
    v0 = D_08B285A0 - (-31328);
    f20 = BITSF(LD32(v0-31328));
    goto L_08806C7C;
L_08806C7C:;
    a0 = s0 + 76;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    f12 = f20;
    if (cnd_) { goto L_08806D0C; }
    goto L_08806C90;
L_08806C90:;
    s0 = LD32(s0+228);
    goto L_08806C94;
L_08806C94:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08806CE4; }
    goto L_08806C9C;
L_08806C9C:;
    v0 = LD32(s0);
    goto L_08806CA0;
L_08806CA0:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = LD32(v0+40);
    f12 = f20;
    t_ = a2;
    s1 = LD32(s0+8);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806CB8;
L_08806CB8:;
    v1 = LD32(s0);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806CC8;
L_08806CC8:;
    a0 = s0 + 0;
    a1 = 1;
    cnd_ = v0 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08806CFC; }
    goto L_08806CD8;
L_08806CD8:;
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08806CA0; }
    goto L_08806CE0;
L_08806CE0:;
    goto L_08806CE4;
L_08806CE4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08806CFC:;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806D04;
L_08806D04:;
    goto L_08806CD8;
L_08806D0C:;
    a1 = s2 + 0;
    { rv_t r_ = func_088164F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806D14;
L_08806D14:;
    s0 = LD32(s0+228);
    goto L_08806C94;
}

/* 08806D1C */
rv_t func_08806D1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08806D1C:;
    sp = sp - 112;
    t1 = a1 + 0;
    s4 = a3 + 0;
    v0 = 0 + 0;
    s3 = t0 & 0xff;
    s2 = a2 + 0;
    v1 = LD32(a0+16);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08806D78; }
    goto L_08806D5C;
L_08806D5C:;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_08806D7C; }
    goto L_08806D64;
L_08806D64:;
    v0 = LD32(v1+68);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+112); goto L_08806D9C; }
    goto L_08806D74;
L_08806D74:;
    v0 = 0 + 0;
    goto L_08806D78;
L_08806D78:;
    goto L_08806D7C;
L_08806D7C:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08806D9C:;
    a1 = LD32(v1+72);
    v0 = t1 << 4;
    v0 = v0 + t1;
    v1 = 0x10000u;
    v0 = v0 << 2;
    a0 = a0 & v1;
    s0 = a1 + v0;
    s5 = s1 + 112;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08806D78; }
    goto L_08806DC4;
L_08806DC4:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    a1 = s0 + 12;
    a0 = sp + 16;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08806DE8;
L_08806DE8:;
    v0 = (u32)-1;
    t0 = LD32(s0+48);
    cnd_ = t0 == v0;
    a2 = t0 + 0;
    if (cnd_) { goto L_08806F68; }
    goto L_08806DF8;
L_08806DF8:;
    v0 = LD32(s1+112);
    v1 = 0x20000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = t0 << 3;
    if (cnd_) { goto L_08807168; }
    goto L_08806E0C;
L_08806E0C:;
    a0 = LD32(s5+92);
    v0 = v0 - t0;
    v0 = v0 << 2;
    a0 = a0 + v0;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(sp+32, FBITS(f0));
    a2 = a0 + 12;
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    {v[112]=BITSF(LD32(a0+(12)));}
    {v[113]=BITSF(LD32(a0+(16)));}
    {v[114]=BITSF(LD32(a0+(20)));}
    {v[115]=BITSF(LD32(a0+(24)));}
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
    {ST32(sp+(0),FBITS(v[120]));}
    {ST32(sp+(4),FBITS(v[121]));}
    {ST32(sp+(8),FBITS(v[122]));}
    f3 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+36));
    v0 = LD32(sp+16);
    {v[8]=BITSF(v0);}
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    v1 = LD32(a0+12);
    a1 = LD32(a2+12);
    v0 = LD32(a2+4);
    {v[4]=BITSF(v1);}
    v1 = LD32(a2+8);
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[6]=BITSF(v1);}
    {v[9]=BITSF(v0);}
    v1 = LD32(sp+24);
    v0 = LD32(sp+28);
    {v[7]=BITSF(a1);}
    {v[10]=BITSF(v1);}
    {v[11]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f1 = BITSF(v0);
    ST32(sp+64, FBITS(f0));
    {v0=FBITS(v[3]);}
    f2 = BITSF(v0);
    ST32(sp+68, FBITS(f1));
    {v0=FBITS(v[2]);}
    a0 = LD32(sp+64);
    a1 = LD32(sp+68);
    ST32(sp+72, v0);
    ST32(sp+76, FBITS(f2));
    ST32(sp+48, a0);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+52, a1);
    ST32(sp+16, a0);
    ST32(sp+20, a1);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    goto L_08806F68;
L_08806F68:;
    cnd_ = s3 == 0;
    v1 = 0x20000u;
    if (cnd_) { goto L_08806F8C; }
    goto L_08806F70;
L_08806F70:;
    v0 = LD32(s5);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s1 + 292;
    if (cnd_) { goto L_08807030; }
    goto L_08806F80;
L_08806F80:;
    v0 = (u32)-1;
    cnd_ = t0 == v0;
    if (cnd_) { goto L_08807030; }
    goto L_08806F8C;
L_08806F8C:;
    cnd_ = s2 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08806FA8; }
    goto L_08806F94;
L_08806F94:;
    f1 = BITSF(LD32(sp+8));
    ST32(s2, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(s2+8, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    goto L_08806FA8;
L_08806FA8:;
    cnd_ = s4 == 0;
    if (cnd_) { v0 = 1; goto L_08806D78; }
    goto L_08806FB0;
L_08806FB0:;
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[115]=BITSF(LD32(sp+(28)));}
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
    {ST32(s4+(0),FBITS(v[96]));}
    {ST32(s4+(4),FBITS(v[97]));}
    {ST32(s4+(8),FBITS(v[98]));}
    {ST32(s4+(12),FBITS(v[100]));}
    {ST32(s4+(16),FBITS(v[101]));}
    {ST32(s4+(20),FBITS(v[102]));}
    {ST32(s4+(24),FBITS(v[104]));}
    {ST32(s4+(28),FBITS(v[105]));}
    {ST32(s4+(32),FBITS(v[106]));}
    v0 = 1;
    goto L_08806D78;
L_08807030:;
    {v[112]=BITSF(LD32(s1+(292)));}
    {v[113]=BITSF(LD32(s1+(296)));}
    {v[114]=BITSF(LD32(s1+(300)));}
    {v[115]=BITSF(LD32(s1+(304)));}
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
    {ST32(sp+(0),FBITS(v[120]));}
    {ST32(sp+(4),FBITS(v[121]));}
    {ST32(sp+(8),FBITS(v[122]));}
    v1 = LD32(s1+292);
    a2 = LD32(a0+12);
    v0 = LD32(sp+16);
    {v[8]=BITSF(v1);}
    {v[4]=BITSF(v0);}
    v1 = LD32(a0+8);
    v0 = LD32(a0+4);
    {v[9]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[10]=BITSF(v1);}
    {v[5]=BITSF(v0);}
    v1 = LD32(sp+24);
    v0 = LD32(sp+28);
    {v[6]=BITSF(v1);}
    {v[11]=BITSF(a2);}
    {v[7]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[3]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    a1 = s1 + 280;
    f9 = BITSF(LD32(a1+8));
    f8 = BITSF(LD32(a1+4));
    f7 = BITSF(LD32(s1+280));
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(sp+52, FBITS(f0));
    {v0=FBITS(v[2]);}
    f2 = f2 + f7;
    f0 = BITSF(LD32(sp+8));
    ST32(sp+56, v0);
    f1 = f1 + f8;
    f0 = f0 + f9;
    ST32(sp+48, FBITS(f3));
    ST32(sp+60, FBITS(f6));
    v0 = LD32(sp+48);
    a0 = LD32(sp+56);
    a1 = LD32(sp+60);
    v1 = LD32(sp+52);
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+16, v0);
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, a0);
    ST32(sp+76, a1);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    goto L_08806F8C;
L_08807168:;
    cnd_ = (s32)t0 < 0;
    v0 = a2 << 3;
    if (cnd_) { goto L_08806F68; }
    goto L_08807170;
L_08807170:;
    t1 = LD32(s5+92);
    goto L_08807174;
L_08807174:;
    v0 = v0 - a2;
    v0 = v0 << 2;
    v0 = t1 + v0;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp+32, FBITS(f0));
    a1 = v0 + 12;
    a3 = a2 << 2;
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    {v[112]=BITSF(LD32(v0+(12)));}
    {v[113]=BITSF(LD32(v0+(16)));}
    {v[114]=BITSF(LD32(v0+(20)));}
    {v[115]=BITSF(LD32(v0+(24)));}
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
    {ST32(sp+(0),FBITS(v[120]));}
    {ST32(sp+(4),FBITS(v[121]));}
    {ST32(sp+(8),FBITS(v[122]));}
    f3 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+36));
    v1 = LD32(sp+16);
    {v[8]=BITSF(v1);}
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    v1 = LD32(v0+12);
    a0 = LD32(a1+12);
    v0 = LD32(a1+4);
    {v[4]=BITSF(v1);}
    v1 = LD32(a1+8);
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[6]=BITSF(v1);}
    {v[9]=BITSF(v0);}
    v1 = LD32(sp+24);
    v0 = LD32(sp+28);
    {v[7]=BITSF(a0);}
    {v[10]=BITSF(v1);}
    {v[11]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f1 = BITSF(v0);
    ST32(sp+48, FBITS(f0));
    {v0=FBITS(v[3]);}
    f2 = BITSF(v0);
    ST32(sp+52, FBITS(f1));
    {v0=FBITS(v[2]);}
    a0 = LD32(sp+48);
    a1 = LD32(sp+52);
    ST32(sp+56, v0);
    ST32(sp+60, FBITS(f2));
    ST32(sp+64, a0);
    ST32(sp+68, a1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+16, a0);
    ST32(sp+20, a1);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    ST32(sp+72, v0);
    cnd_ = a2 == 0;
    ST32(sp+76, v1);
    if (cnd_) { goto L_08806F68; }
    goto L_088072D4;
L_088072D4:;
    v1 = LD32(s1+16);
    v0 = LD32(v1+28);
    v0 = a3 + v0;
    a2 = LD32(v0);
    cnd_ = (s32)a2 >= 0;
    v0 = a2 << 3;
    if (cnd_) { goto L_08807174; }
    goto L_088072EC;
L_088072EC:;
    goto L_08806F68;
}

/* 088072F4 */
rv_t func_088072F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088072F4:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s4 = t1 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s0 = t0 & 0xff;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880732C;
L_0880732C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s0 + 0;
    t1 = s4 + 0;
    { rv_t r_ = func_08807368(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08807348;
L_08807348:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08807368 */
rv_t func_08807368(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[464] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 464);
L_08807368:;
    sp = sp - 464;
    v0 = 0 + 0;
    s6 = t0 & 0xff;
    s5 = a3 + 0;
    s4 = a2 + 0;
    s3 = a0 + 0;
    s2 = a1 + 0;
    v1 = LD32(a0+16);
    cnd_ = v1 == 0;
    s1 = t1 + 0;
    if (cnd_) { goto L_088073F4; }
    goto L_088073B4;
L_088073B4:;
    v0 = (u32)-1;
    cnd_ = t1 == v0;
    ST32(sp+272, v0);
    if (cnd_) { goto L_0880783C; }
    goto L_088073C0;
L_088073C0:;
    s0 = LD32(s3+228);
    goto L_088073C4;
L_088073C4:;
    cnd_ = s0 == 0;
    s7 = s3 + 280;
    if (cnd_) { goto L_088073F0; }
    goto L_088073CC;
L_088073CC:;
    v0 = (u32)-1;
    goto L_088073D0;
L_088073D0:;
    cnd_ = s1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08807420; }
    goto L_088073D8;
L_088073D8:;
    v0 = LD32(s0+16);
    cnd_ = v0 == s1;
    if (cnd_) { v1 = LD32(s0); goto L_08807424; }
    goto L_088073E4;
L_088073E4:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088073D0; }
    goto L_088073F0;
L_088073F0:;
    v0 = 0 + 0;
    goto L_088073F4;
L_088073F4:;
    goto L_088073F8;
L_088073F8:;
    sp = sp + 464;
    return (rv_t){ v0, v1, f0 };
L_08807420:;
    v1 = LD32(s0);
    goto L_08807424;
L_08807424:;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+36);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880743C;
L_0880743C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = sp + 0;
    a3 = sp + 16;
    t0 = 0 + 0;
    t1 = (u32)-1;
    {u32 a_=sp+(352);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(400);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088073E4; }
    goto L_08807468;
L_08807468:;
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08807368(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08807474;
L_08807474:;
    a0 = s0 + 0;
    a1 = sp + 64;
    a2 = sp + 80;
    {u32 a_=sp+(352);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(400);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088073E4; }
    goto L_08807494;
L_08807494:;
    { rv_t r_ = func_0880DA58(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880749C;
L_0880749C:;
    {u32 a_=sp+(352);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(400);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088073E4; }
    goto L_088074B0;
L_088074B0:;
    cnd_ = s4 == 0;
    v1 = LD32(sp+80);
    if (cnd_) { goto L_0880759C; }
    goto L_088074B8;
L_088074B8:;
    v0 = LD32(sp+84);
    f2 = BITSF(LD32(sp+64));
    {u32 a_=sp+(304);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(336);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+88);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(288);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+96);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+92);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(320);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+100);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+108);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+104);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+112);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+4);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f1 + f2;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+68));
    ST32(sp+160, FBITS(f4));
    f1 = f0 + f1;
    f0 = BITSF(LD32(sp+72));
    ST32(s4, FBITS(f2));
    f0 = f5 + f0;
    ST32(s4+4, FBITS(f1));
    ST32(s4+8, FBITS(f0));
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f5));
    ST32(sp+144, FBITS(f4));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f5));
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, FBITS(f1));
    ST32(sp+136, FBITS(f0));
    goto L_0880759C;
L_0880759C:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_0880765C; }
    goto L_088075A4;
L_088075A4:;
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[116]=BITSF(LD32(sp+(28)));}
    {v[117]=BITSF(LD32(sp+(32)));}
    {v[118]=BITSF(LD32(sp+(36)));}
    {v[120]=BITSF(LD32(sp+(40)));}
    {v[121]=BITSF(LD32(sp+(44)));}
    {v[122]=BITSF(LD32(sp+(48)));}
    {v[96]=BITSF(LD32(sp+(80)));}
    {v[97]=BITSF(LD32(sp+(84)));}
    {v[98]=BITSF(LD32(sp+(88)));}
    {v[100]=BITSF(LD32(sp+(92)));}
    {v[101]=BITSF(LD32(sp+(96)));}
    {v[102]=BITSF(LD32(sp+(100)));}
    {v[104]=BITSF(LD32(sp+(104)));}
    {v[105]=BITSF(LD32(sp+(108)));}
    {v[106]=BITSF(LD32(sp+(112)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(176),FBITS(v[80]));}
    {ST32(sp+(180),FBITS(v[81]));}
    {ST32(sp+(184),FBITS(v[82]));}
    {ST32(sp+(188),FBITS(v[84]));}
    {ST32(sp+(192),FBITS(v[85]));}
    {ST32(sp+(196),FBITS(v[86]));}
    {ST32(sp+(200),FBITS(v[88]));}
    {ST32(sp+(204),FBITS(v[89]));}
    {ST32(sp+(208),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+176));
    f1 = BITSF(LD32(sp+180));
    ST32(s5, FBITS(f0));
    f0 = BITSF(LD32(sp+184));
    ST32(s5+4, FBITS(f1));
    ST32(s5+8, FBITS(f0));
    f1 = BITSF(LD32(sp+188));
    f0 = BITSF(LD32(sp+192));
    ST32(s5+12, FBITS(f1));
    ST32(s5+16, FBITS(f0));
    f1 = BITSF(LD32(sp+196));
    f0 = BITSF(LD32(sp+200));
    ST32(s5+20, FBITS(f1));
    ST32(s5+24, FBITS(f0));
    f1 = BITSF(LD32(sp+204));
    f0 = BITSF(LD32(sp+208));
    ST32(s5+28, FBITS(f1));
    ST32(s5+32, FBITS(f0));
    goto L_0880765C;
L_0880765C:;
    cnd_ = s6 == 0;
    v0 = 1;
    if (cnd_) { goto L_088073F4; }
    goto L_08807664;
L_08807664:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_088076FC; }
    goto L_0880766C;
L_0880766C:;
    {v[112]=BITSF(LD32(s3+(292)));}
    {v[113]=BITSF(LD32(s3+(296)));}
    {v[114]=BITSF(LD32(s3+(300)));}
    {v[115]=BITSF(LD32(s3+(304)));}
    {v[116]=BITSF(LD32(s4+(0)));}
    {v[117]=BITSF(LD32(s4+(4)));}
    {v[118]=BITSF(LD32(s4+(8)));}
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
    {ST32(s4+(0),FBITS(v[120]));}
    {ST32(s4+(4),FBITS(v[121]));}
    {ST32(s4+(8),FBITS(v[122]));}
    f5 = BITSF(LD32(s7+8));
    f1 = BITSF(LD32(s4));
    f4 = BITSF(LD32(s3+280));
    f2 = BITSF(LD32(s4+4));
    f3 = BITSF(LD32(s7+4));
    f0 = BITSF(LD32(s4+8));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    ST32(s4, FBITS(f1));
    ST32(s4+8, FBITS(f0));
    ST32(s4+4, FBITS(f2));
    goto L_088076FC;
L_088076FC:;
    cnd_ = s5 == 0;
    if (cnd_) { v0 = 1; goto L_088073F4; }
    goto L_08807704;
L_08807704:;
    {v[112]=BITSF(LD32(s3+(292)));}
    {v[113]=BITSF(LD32(s3+(296)));}
    {v[114]=BITSF(LD32(s3+(300)));}
    {v[115]=BITSF(LD32(s3+(304)));}
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
    {ST32(sp+(176),FBITS(v[96]));}
    {ST32(sp+(180),FBITS(v[97]));}
    {ST32(sp+(184),FBITS(v[98]));}
    {ST32(sp+(188),FBITS(v[100]));}
    {ST32(sp+(192),FBITS(v[101]));}
    {ST32(sp+(196),FBITS(v[102]));}
    {ST32(sp+(200),FBITS(v[104]));}
    {ST32(sp+(204),FBITS(v[105]));}
    {ST32(sp+(208),FBITS(v[106]));}
    {v[112]=BITSF(LD32(s5+(0)));}
    {v[113]=BITSF(LD32(s5+(4)));}
    {v[114]=BITSF(LD32(s5+(8)));}
    {v[116]=BITSF(LD32(s5+(12)));}
    {v[117]=BITSF(LD32(s5+(16)));}
    {v[118]=BITSF(LD32(s5+(20)));}
    {v[120]=BITSF(LD32(s5+(24)));}
    {v[121]=BITSF(LD32(s5+(28)));}
    {v[122]=BITSF(LD32(s5+(32)));}
    {v[96]=BITSF(LD32(sp+(176)));}
    {v[97]=BITSF(LD32(sp+(180)));}
    {v[98]=BITSF(LD32(sp+(184)));}
    {v[100]=BITSF(LD32(sp+(188)));}
    {v[101]=BITSF(LD32(sp+(192)));}
    {v[102]=BITSF(LD32(sp+(196)));}
    {v[104]=BITSF(LD32(sp+(200)));}
    {v[105]=BITSF(LD32(sp+(204)));}
    {v[106]=BITSF(LD32(sp+(208)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(224),FBITS(v[80]));}
    {ST32(sp+(228),FBITS(v[81]));}
    {ST32(sp+(232),FBITS(v[82]));}
    {ST32(sp+(236),FBITS(v[84]));}
    {ST32(sp+(240),FBITS(v[85]));}
    {ST32(sp+(244),FBITS(v[86]));}
    {ST32(sp+(248),FBITS(v[88]));}
    {ST32(sp+(252),FBITS(v[89]));}
    {ST32(sp+(256),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+224));
    f1 = BITSF(LD32(sp+256));
    ST32(s5, FBITS(f0));
    f0 = BITSF(LD32(sp+228));
    ST32(s5+32, FBITS(f1));
    ST32(s5+4, FBITS(f0));
    f1 = BITSF(LD32(sp+232));
    f0 = BITSF(LD32(sp+236));
    ST32(s5+8, FBITS(f1));
    ST32(s5+12, FBITS(f0));
    f1 = BITSF(LD32(sp+240));
    f0 = BITSF(LD32(sp+244));
    ST32(s5+16, FBITS(f1));
    ST32(s5+20, FBITS(f0));
    f1 = BITSF(LD32(sp+248));
    f0 = BITSF(LD32(sp+252));
    ST32(s5+24, FBITS(f1));
    ST32(s5+28, FBITS(f0));
    v0 = 1;
    goto L_088073F4;
L_0880783C:;
    a1 = LD32(v1+68);
    cnd_ = (s32)a1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088073C0; }
    goto L_08807848;
L_08807848:;
    v0 = LD32(v1+72);
    v1 = v0 + 52;
    v0 = LD32(v1);
    goto L_08807854;
L_08807854:;
    cnd_ = v0 == s2;
    v1 = v1 + 68;
    if (cnd_) { goto L_08807874; }
    goto L_0880785C;
L_0880785C:;
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08807854; }
    goto L_0880786C;
L_0880786C:;
    s0 = LD32(s3+228);
    goto L_088073C4;
L_08807874:;
    ST32(sp+272, a0);
    a2 = s4 + 0;
    a0 = s3 + 0;
    a1 = LD32(sp+272);
    a3 = s5 + 0;
    t0 = s6 + 0;
    { rv_t r_ = func_08806D1C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08807890;
L_08807890:;
    goto L_088073F8;
}

/* 08807898 */
rv_t func_08807898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 320);
L_08807898:;
    t2 = LD32(a0+16);
    sp = sp - 320;
    t3 = a0 + 0;
    t1 = a1 + 0;
    t4 = a2 + 0;
    t0 = t0 & 0xff;
    cnd_ = t2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088078D4; }
    goto L_088078B8;
L_088078B8:;
    cnd_ = (s32)a1 < 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088078D8; }
    goto L_088078C0;
L_088078C0:;
    v0 = LD32(t2+4);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a0+112); goto L_088078E0; }
    goto L_088078D0;
L_088078D0:;
    v1 = 0 + 0;
    goto L_088078D4;
L_088078D4:;
    v0 = v1 + 0;
    goto L_088078D8;
L_088078D8:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_088078E0:;
    v0 = 0x10000u;
    t5 = a0 + 112;
    v0 = a2 & v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088078D4; }
    goto L_088078F4;
L_088078F4:;
    v0 = a1 << 3;
    t6 = LD32(t5+92);
    v0 = v0 - a1;
    v0 = v0 << 2;
    v0 = t6 + v0;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f0));
    a0 = v0 + 12;
    a1 = 0x20000u;
    ST32(sp+4, FBITS(f1));
    a1 = a2 & a1;
    ST32(sp+8, FBITS(f2));
    v1 = LD32(v0+12);
    ST32(sp+16, v1);
    v0 = LD32(a0+4);
    ST32(sp+20, v0);
    v1 = LD32(a0+8);
    ST32(sp+24, v1);
    v0 = LD32(a0+12);
    cnd_ = a1 != 0;
    ST32(sp+28, v0);
    if (cnd_) { goto L_08807AC0; }
    goto L_08807950;
L_08807950:;
    cnd_ = (s32)t1 <= 0;
    if (cnd_) { goto L_08807AC0; }
    goto L_08807958;
L_08807958:;
    v1 = LD32(t2+28);
    v0 = t1 << 2;
    v0 = v0 + v1;
    t1 = LD32(v0);
    v1 = t1 << 3;
    v1 = v1 - t1;
    v1 = v1 << 2;
    v1 = t6 + v1;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(sp+32, FBITS(f0));
    a2 = v1 + 12;
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    {v[112]=BITSF(LD32(v1+(12)));}
    {v[113]=BITSF(LD32(v1+(16)));}
    {v[114]=BITSF(LD32(v1+(20)));}
    {v[115]=BITSF(LD32(v1+(24)));}
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
    {ST32(sp+(0),FBITS(v[120]));}
    {ST32(sp+(4),FBITS(v[121]));}
    {ST32(sp+(8),FBITS(v[122]));}
    f3 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+36));
    v0 = LD32(sp+16);
    {v[8]=BITSF(v0);}
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    a0 = LD32(v1+12);
    a1 = LD32(a2+12);
    v0 = LD32(a2+4);
    v1 = LD32(a2+8);
    {v[4]=BITSF(a0);}
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[6]=BITSF(v1);}
    {v[9]=BITSF(v0);}
    v1 = LD32(sp+24);
    v0 = LD32(sp+28);
    {v[7]=BITSF(a1);}
    {v[10]=BITSF(v1);}
    {v[11]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[0]);}
    ST32(sp+64, v0);
    {v1=FBITS(v[3]);}
    f3 = BITSF(v1);
    a1 = LD32(sp+64);
    {v0=FBITS(v[1]);}
    {v1=FBITS(v[2]);}
    ST32(sp+68, v0);
    ST32(sp+72, v1);
    ST32(sp+76, FBITS(f3));
    ST32(sp+48, a1);
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    a0 = LD32(sp+76);
    ST32(sp+16, a1);
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    ST32(sp+28, a0);
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    cnd_ = (s32)t1 > 0;
    ST32(sp+60, a0);
    if (cnd_) { goto L_08807958; }
    goto L_08807AC0;
L_08807AC0:;
    cnd_ = t4 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08807ADC; }
    goto L_08807AC8;
L_08807AC8:;
    f1 = BITSF(LD32(sp+4));
    ST32(t4, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(t4+4, FBITS(f1));
    ST32(t4+8, FBITS(f0));
    goto L_08807ADC;
L_08807ADC:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08807B5C; }
    goto L_08807AE4;
L_08807AE4:;
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[115]=BITSF(LD32(sp+(28)));}
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
    {ST32(a3+(0),FBITS(v[96]));}
    {ST32(a3+(4),FBITS(v[97]));}
    {ST32(a3+(8),FBITS(v[98]));}
    {ST32(a3+(12),FBITS(v[100]));}
    {ST32(a3+(16),FBITS(v[101]));}
    {ST32(a3+(20),FBITS(v[102]));}
    {ST32(a3+(24),FBITS(v[104]));}
    {ST32(a3+(28),FBITS(v[105]));}
    {ST32(a3+(32),FBITS(v[106]));}
    goto L_08807B5C;
L_08807B5C:;
    cnd_ = t0 == 0;
    v0 = LD32(t5);
    if (cnd_) { goto L_08807D4C; }
    goto L_08807B64;
L_08807B64:;
    v1 = 0x20000u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_088078D4; }
    goto L_08807B74;
L_08807B74:;
    cnd_ = t4 == 0;
    v0 = t3 + 280;
    if (cnd_) { goto L_08807C0C; }
    goto L_08807B7C;
L_08807B7C:;
    {v[112]=BITSF(LD32(t3+(292)));}
    {v[113]=BITSF(LD32(t3+(296)));}
    {v[114]=BITSF(LD32(t3+(300)));}
    {v[115]=BITSF(LD32(t3+(304)));}
    {v[116]=BITSF(LD32(t4+(0)));}
    {v[117]=BITSF(LD32(t4+(4)));}
    {v[118]=BITSF(LD32(t4+(8)));}
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
    {ST32(t4+(0),FBITS(v[120]));}
    {ST32(t4+(4),FBITS(v[121]));}
    {ST32(t4+(8),FBITS(v[122]));}
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(t4));
    f4 = BITSF(LD32(t3+280));
    f2 = BITSF(LD32(t4+4));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(t4+8));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    ST32(t4, FBITS(f1));
    ST32(t4+8, FBITS(f0));
    ST32(t4+4, FBITS(f2));
    goto L_08807C0C;
L_08807C0C:;
    cnd_ = a3 == 0;
    if (cnd_) { v1 = 1; goto L_088078D4; }
    goto L_08807C14;
L_08807C14:;
    {v[112]=BITSF(LD32(t3+(292)));}
    {v[113]=BITSF(LD32(t3+(296)));}
    {v[114]=BITSF(LD32(t3+(300)));}
    {v[115]=BITSF(LD32(t3+(304)));}
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
    {v[112]=BITSF(LD32(a3+(0)));}
    {v[113]=BITSF(LD32(a3+(4)));}
    {v[114]=BITSF(LD32(a3+(8)));}
    {v[116]=BITSF(LD32(a3+(12)));}
    {v[117]=BITSF(LD32(a3+(16)));}
    {v[118]=BITSF(LD32(a3+(20)));}
    {v[120]=BITSF(LD32(a3+(24)));}
    {v[121]=BITSF(LD32(a3+(28)));}
    {v[122]=BITSF(LD32(a3+(32)));}
    {v[96]=BITSF(LD32(sp+(80)));}
    {v[97]=BITSF(LD32(sp+(84)));}
    {v[98]=BITSF(LD32(sp+(88)));}
    {v[100]=BITSF(LD32(sp+(92)));}
    {v[101]=BITSF(LD32(sp+(96)));}
    {v[102]=BITSF(LD32(sp+(100)));}
    {v[104]=BITSF(LD32(sp+(104)));}
    {v[105]=BITSF(LD32(sp+(108)));}
    {v[106]=BITSF(LD32(sp+(112)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(128),FBITS(v[80]));}
    {ST32(sp+(132),FBITS(v[81]));}
    {ST32(sp+(136),FBITS(v[82]));}
    {ST32(sp+(140),FBITS(v[84]));}
    {ST32(sp+(144),FBITS(v[85]));}
    {ST32(sp+(148),FBITS(v[86]));}
    {ST32(sp+(152),FBITS(v[88]));}
    {ST32(sp+(156),FBITS(v[89]));}
    {ST32(sp+(160),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(sp+160));
    ST32(a3, FBITS(f0));
    f0 = BITSF(LD32(sp+132));
    ST32(a3+32, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    f1 = BITSF(LD32(sp+136));
    f0 = BITSF(LD32(sp+140));
    ST32(a3+8, FBITS(f1));
    ST32(a3+12, FBITS(f0));
    f1 = BITSF(LD32(sp+144));
    f0 = BITSF(LD32(sp+148));
    ST32(a3+16, FBITS(f1));
    ST32(a3+20, FBITS(f0));
    f1 = BITSF(LD32(sp+152));
    f0 = BITSF(LD32(sp+156));
    ST32(a3+24, FBITS(f1));
    ST32(a3+28, FBITS(f0));
    goto L_08807D44;
L_08807D44:;
    v1 = 1;
    goto L_088078D4;
L_08807D4C:;
    v1 = 0x20000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_088078D4; }
    goto L_08807D5C;
L_08807D5C:;
    cnd_ = t4 == 0;
    v0 = t3 + 280;
    if (cnd_) { goto L_08807FAC; }
    goto L_08807D64;
L_08807D64:;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(t4));
    f2 = BITSF(LD32(t3+280));
    f3 = BITSF(LD32(t4+4));
    f6 = BITSF(LD32(t4+8));
    f1 = f1 - f2;
    f3 = f3 - f0;
    f6 = f6 - f4;
    {u32 a_=sp+(208);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(t4, FBITS(f1));
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(224);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(t4+4, FBITS(f3));
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(240);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(t4+8, FBITS(f6));
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    v0 = FBITS(f1);
    {v[112]=BITSF(LD32(t3+(292)));}
    {v[113]=BITSF(LD32(t3+(296)));}
    {v[114]=BITSF(LD32(t3+(300)));}
    {v[115]=BITSF(LD32(t3+(304)));}
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
    {ST32(sp+(128),FBITS(v[96]));}
    {ST32(sp+(132),FBITS(v[97]));}
    {ST32(sp+(136),FBITS(v[98]));}
    {ST32(sp+(140),FBITS(v[100]));}
    {ST32(sp+(144),FBITS(v[101]));}
    {ST32(sp+(148),FBITS(v[102]));}
    {ST32(sp+(152),FBITS(v[104]));}
    {ST32(sp+(156),FBITS(v[105]));}
    {ST32(sp+(160),FBITS(v[106]));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    v1 = LD32(sp+136);
    {v[108]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = FBITS(f3);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[109]=BITSF(v0);}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+132);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[8]=BITSF(v0);}
    v0 = LD32(sp+140);
    {v[9]=BITSF(v1);}
    v1 = LD32(sp+148);
    {v[10]=BITSF(v0);}
    {v[4]=BITSF(v1);}
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+128);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v1=FBITS(v[5]);}
    {v0=FBITS(v[10]);}
    f9 = BITSF(v1);
    f0 = BITSF(v0);
    f8 = BITSF(v0);
    v0 = FBITS(f9);
    v1 = FBITS(f0);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {v0=FBITS(v[8]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f7 = BITSF(v0);
    v1 = FBITS(f0);
    v0 = LD32(sp+144);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(v0);}
    {v0=FBITS(v[6]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(192);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[2]=BITSF(v1);}
    {v1=FBITS(v[9]);}
    f0 = BITSF(v1);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f5 = BITSF(v1);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    f1 = BITSF(v0);
    f4 = BITSF(v1);
    v0 = LD32(sp+160);
    v1 = FBITS(f0);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    v0 = FBITS(f6);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {v[110]=BITSF(v0);}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float t0=v[108];float t1=v[109];float t2=v[110];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    ST32(sp+148, FBITS(f1));
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(t4, v1);
    ST32(sp+180, v0);
    ST32(sp+152, FBITS(f5));
    ST32(sp+156, FBITS(f4));
    ST32(sp+132, FBITS(f8));
    ST32(sp+136, FBITS(f9));
    ST32(sp+140, FBITS(f7));
    ST32(sp+184, FBITS(f3));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+176, v1);
    ST32(sp+32, v1);
    ST32(t4+4, v0);
    ST32(t4+8, FBITS(f3));
    goto L_08807FAC;
L_08807FAC:;
    cnd_ = a3 == 0;
    if (cnd_) { v1 = 1; goto L_088078D4; }
    goto L_08807FB4;
L_08807FB4:;
    {v[112]=BITSF(LD32(t3+(292)));}
    {v[113]=BITSF(LD32(t3+(296)));}
    {v[114]=BITSF(LD32(t3+(300)));}
    {v[115]=BITSF(LD32(t3+(304)));}
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
    {ST32(sp+(128),FBITS(v[96]));}
    {ST32(sp+(132),FBITS(v[97]));}
    {ST32(sp+(136),FBITS(v[98]));}
    {ST32(sp+(140),FBITS(v[100]));}
    {ST32(sp+(144),FBITS(v[101]));}
    {ST32(sp+(148),FBITS(v[102]));}
    {ST32(sp+(152),FBITS(v[104]));}
    {ST32(sp+(156),FBITS(v[105]));}
    {ST32(sp+(160),FBITS(v[106]));}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+132);
    v1 = LD32(sp+136);
    {v[4]=BITSF(v0);}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = LD32(sp+140);
    {v[5]=BITSF(v1);}
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+148);
    {v1=FBITS(v[4]);}
    {v[0]=BITSF(v0);}
    f6 = BITSF(v1);
    v0 = LD32(sp+156);
    v1 = LD32(sp+152);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {v0=FBITS(v[1]);}
    {v1=FBITS(v[2]);}
    f5 = BITSF(v0);
    f4 = BITSF(v1);
    {v0=FBITS(v[5]);}
    f3 = BITSF(v0);
    ST32(sp+148, FBITS(f4));
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[6]);}
    ST32(sp+152, FBITS(f3));
    ST32(sp+156, v1);
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f5));
    ST32(sp+140, FBITS(f6));
    {v[112]=BITSF(LD32(a3+(0)));}
    {v[113]=BITSF(LD32(a3+(4)));}
    {v[114]=BITSF(LD32(a3+(8)));}
    {v[116]=BITSF(LD32(a3+(12)));}
    {v[117]=BITSF(LD32(a3+(16)));}
    {v[118]=BITSF(LD32(a3+(20)));}
    {v[120]=BITSF(LD32(a3+(24)));}
    {v[121]=BITSF(LD32(a3+(28)));}
    {v[122]=BITSF(LD32(a3+(32)));}
    {v[96]=BITSF(LD32(sp+(128)));}
    {v[97]=BITSF(LD32(sp+(132)));}
    {v[98]=BITSF(LD32(sp+(136)));}
    {v[100]=BITSF(LD32(sp+(140)));}
    {v[101]=BITSF(LD32(sp+(144)));}
    {v[102]=BITSF(LD32(sp+(148)));}
    {v[104]=BITSF(LD32(sp+(152)));}
    {v[105]=BITSF(LD32(sp+(156)));}
    {v[106]=BITSF(LD32(sp+(160)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(80),FBITS(v[80]));}
    {ST32(sp+(84),FBITS(v[81]));}
    {ST32(sp+(88),FBITS(v[82]));}
    {ST32(sp+(92),FBITS(v[84]));}
    {ST32(sp+(96),FBITS(v[85]));}
    {ST32(sp+(100),FBITS(v[86]));}
    {ST32(sp+(104),FBITS(v[88]));}
    {ST32(sp+(108),FBITS(v[89]));}
    {ST32(sp+(112),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+80));
    f1 = BITSF(LD32(sp+84));
    ST32(a3, FBITS(f0));
    f0 = BITSF(LD32(sp+88));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f0));
    f1 = BITSF(LD32(sp+92));
    f0 = BITSF(LD32(sp+96));
    ST32(a3+12, FBITS(f1));
    ST32(a3+16, FBITS(f0));
    f1 = BITSF(LD32(sp+100));
    f0 = BITSF(LD32(sp+104));
    ST32(a3+20, FBITS(f1));
    ST32(a3+24, FBITS(f0));
    f1 = BITSF(LD32(sp+108));
    f0 = BITSF(LD32(sp+112));
    ST32(a3+28, FBITS(f1));
    ST32(a3+32, FBITS(f0));
    goto L_08807D44;
}

/* 08808160 */
u32 func_08808160(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08808160:;
    a2 = LD32(a0+16);
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088081A0; }
    goto L_0880816C;
L_0880816C:;
    v1 = LD32(a2+20);
    v0 = a1 << 3;
    a0 = a1 << 2;
    v0 = v0 - a1;
    v0 = v0 << 2;
    a0 = a0 + v1;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088081A8; }
    goto L_0880818C;
L_0880818C:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(a2+24); goto L_088081AC; }
    goto L_08808198;
L_08808198:;
    a3 = a0 + 4;
    goto L_0880819C;
L_0880819C:;
    v0 = a3 + 0;
    goto L_088081A0;
L_088081A0:;
    return v0;
L_088081A8:;
    v1 = LD32(a2+24);
    goto L_088081AC;
L_088081AC:;
    v1 = v0 + v1;
    v0 = LD32(v1+24);
    v0 = v0 & 0x1;
    if (v0 != 0) a3 = v1;
    goto L_0880819C;
}

/* 088081C0 */
u64 func_088081C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088081C0:;
    a0 = LD32(a0+16);
    v0 = a1 << 3;
    v0 = v0 - a1;
    v0 = v0 << 2;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088081EC; }
    goto L_088081D8;
L_088081D8:;
    v1 = LD32(a0+24);
    v1 = v0 + v1;
    v0 = LD32(v1+24);
    v0 = v0 & 0x1;
    if (v0 == 0) v1 = 0;
    goto L_088081EC;
L_088081EC:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088081F4 */
rv_t func_088081F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088081F4:;
    sp = sp - 32;
    v0 = 0 + 0;
    s3 = t0 + 0;
    s2 = a0 + 0;
    a0 = a2 + 0;
    s1 = a3 & 0xff;
    s0 = a1 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08808248; }
    goto L_08808228;
L_08808228:;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08808230;
L_08808230:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a3 = s1 + 0;
    t0 = s3 + 0;
    { rv_t r_ = func_08808264(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808248;
L_08808248:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08808264 */
rv_t func_08808264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08808264:;
    sp = sp - 32;
    v0 = 0 + 0;
    s5 = a2 + 0;
    s4 = a0 + 0;
    a0 = 76;
    s3 = t0 + 0;
    s2 = a3 & 0xff;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088082E8; }
    goto L_088082A4;
L_088082A4:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088082AC;
L_088082AC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = s2 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088082C0;
L_088082C0:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_0880D928(a0, a1);
    goto L_088082CC;
L_088082CC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s4 + 0;
    v0 = LD32(v1+12);
    a2 = s5 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088082E8;
L_088082E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0880830C */
u32 func_0880830C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880830C:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+16);
    cnd_ = a0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088083A0; }
    goto L_08808334;
L_08808334:;
    s0 = LD32(s0+228);
    goto L_08808338;
L_08808338:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0880835C; }
    goto L_08808340;
L_08808340:;
    v0 = s1 + 0;
    goto L_08808344;
L_08808344:;
    sp = sp + 16;
    return v0;
L_0880835C:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808368;
L_08808368:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08808380; }
    goto L_08808374;
L_08808374:;
    v0 = func_0880830C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0880837C;
L_0880837C:;
    s1 = v0 + 0;
    goto L_08808380;
L_08808380:;
    s0 = LD32(s0+8);
    v1 = s1 < 0x1u;
    v0 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0880835C; }
    goto L_08808398;
L_08808398:;
    v0 = s1 + 0;
    goto L_08808344;
L_088083A0:;
    { u64 r_ = func_08817EC8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088083A8;
L_088083A8:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08808340; }
    goto L_088083B0;
L_088083B0:;
    s0 = LD32(s0+228);
    goto L_08808338;
}

/* 088083B8 */
rv_t func_088083B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088083B8:;
    sp = sp - 64;
    s2 = sp + 16;
    s5 = a1 + 0;
    a1 = a2 + 0;
    a2 = a3 + 0;
    s4 = t0 + 0;
    a3 = t0 + 0;
    t0 = sp + 0;
    s1 = t1 + 0;
    t1 = s2 + 0;
    s1 = s1 & 0xff;
    s3 = t2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0880A2D4(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880840C;
L_0880840C:;
    a0 = s0 + 0;
    a1 = s5 + 0;
    a3 = s2 + 0;
    t0 = s4 + 0;
    t1 = s1 + 0;
    t2 = s3 + 0;
    a2 = sp + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08808458; }
    goto L_08808430;
L_08808430:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08808458:;
    { rv_t r_ = func_08808468(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808460;
L_08808460:;
    v1 = v0 + 0;
    goto L_08808430;
}

/* 08808468 */
rv_t func_08808468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08808468:;
    sp = sp - 48;
    v0 = 0 + 0;
    s7 = t0 + 0;
    s6 = a3 + 0;
    s5 = a2 + 0;
    s4 = a0 + 0;
    a0 = 104;
    s3 = t2 + 0;
    s2 = a1 + 0;
    s1 = t1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08808508; }
    goto L_088084B8;
L_088084B8:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088084C0;
L_088084C0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    a1 = s2 + 0;
    func_0880F7C8(a0, a1, a2, a3);
    goto L_088084D8;
L_088084D8:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_0880D928(a0, a1);
    goto L_088084E4;
L_088084E4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s4 + 0;
    v0 = LD32(v1+20);
    a2 = s5 + 0;
    a3 = s6 + 0;
    t0 = s7 + 0;
    t_ = v0;
    t1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808508;
L_08808508:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08808534 */
rv_t func_08808534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08808534:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088085A0; }
    goto L_08808550;
L_08808550:;
    s0 = LD32(a0+228);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088085A4; }
    goto L_0880855C;
L_0880855C:;
    v1 = LD32(s0);
    goto L_08808560;
L_08808560:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880856C;
L_0880856C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08808590; }
    goto L_08808578;
L_08808578:;
    cnd_ = v0 == s1;
    if (cnd_) { v1 = LD32(s0); goto L_088085B8; }
    goto L_08808580;
L_08808580:;
    { rv_t r_ = func_08808534(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808588;
L_08808588:;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_088085A0; }
    goto L_08808590;
L_08808590:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08808560; }
    goto L_0880859C;
L_0880859C:;
    a1 = 0 + 0;
    goto L_088085A0;
L_088085A0:;
    goto L_088085A4;
L_088085A4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088085B8:;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088085C4;
L_088085C4:;
    a1 = 1;
    goto L_088085A0;
}

/* 088085CC */
rv_t func_088085CC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr84 = v[84], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr88 = v[88], vr89 = v[89], vr90 = v[90], vr91 = v[91], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_088085CC:;
    sp = sp - 288;
    s0 = a0 + 0;
    t4 = a1 + 0;
    t9 = a2 + 0;
    t1 = a3 + 0;
    a0 = LD32(a0+16);
    v0 = LD32(a0+4);
    cnd_ = (s32)v0 <= 0;
    t5 = 0 + 0;
    if (cnd_) { goto L_088086EC; }
    goto L_08808600;
L_08808600:;
    s2 = D_08B20534 - (1332);
    s3 = D_08B20834 - (2100);
    s1 = s2 + 1332;
    t2 = s3 + 2100;
    t6 = t2 + 0;
    t3 = s1 + 0;
    t8 = 0 + 0;
    t7 = 0 + 0;
    goto L_08808620;
L_08808620:;
    v0 = LD32(t4);
    v1 = 0x20000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(t4+92); goto L_08808704; }
    goto L_08808634;
L_08808634:;
    v0 = LD32(t4+92);
    v0 = v0 + t7;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(t3, FBITS(f0));
    ST32(t3+4, FBITS(f1));
    ST32(t3+8, FBITS(f2));
    {vr112=BITSF(LD32(v0+(12)));}
    {vr113=BITSF(LD32(v0+(16)));}
    {vr114=BITSF(LD32(v0+(20)));}
    {vr115=BITSF(LD32(v0+(24)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;vr88=s0*t0;vr89=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=vr80;float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;vr104=d0;}
    {float s0=vr96;float t0=vr90;float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;vr105=d0;}
    {float s0=vr106;float t0=vr90;float d0=s0-t0;vr101=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;vr102=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(t2+(0),FBITS(vr96));}
    {ST32(t2+(4),FBITS(vr97));}
    {ST32(t2+(8),FBITS(vr98));}
    {ST32(t2+(12),FBITS(vr100));}
    {ST32(t2+(16),FBITS(vr101));}
    {ST32(t2+(20),FBITS(vr102));}
    {ST32(t2+(24),FBITS(vr104));}
    {ST32(t2+(28),FBITS(vr105));}
    {ST32(t2+(32),FBITS(vr106));}
    goto L_088086CC;
L_088086CC:;
    v0 = LD32(a0+4);
    t5 = t5 + 1;
    t7 = t7 + 28;
    v0 = (s32)t5 < (s32)v0;
    t8 = t8 + 28;
    t3 = t3 + 12;
    cnd_ = v0 != 0;
    t2 = t2 + 36;
    if (cnd_) { goto L_08808620; }
    goto L_088086EC;
L_088086EC:;
    sp = sp + 288;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return (rv_t){ v0, v1, f0 }; }
L_08808704:;
    t0 = a1 + t8;
    {vr112=BITSF(LD32(t0+(12)));}
    {vr113=BITSF(LD32(t0+(16)));}
    {vr114=BITSF(LD32(t0+(20)));}
    {vr115=BITSF(LD32(t0+(24)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;vr88=s0*t0;vr89=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=vr80;float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;vr104=d0;}
    {float s0=vr96;float t0=vr90;float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;vr105=d0;}
    {float s0=vr106;float t0=vr90;float d0=s0-t0;vr101=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;vr102=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    {ST32(sp+(12),FBITS(vr100));}
    {ST32(sp+(16),FBITS(vr101));}
    {ST32(sp+(20),FBITS(vr102));}
    {ST32(sp+(24),FBITS(vr104));}
    {ST32(sp+(28),FBITS(vr105));}
    {ST32(sp+(32),FBITS(vr106));}
    cnd_ = t5 != 0;
    if (cnd_) { v1 = LD32(a0+28); goto L_08808940; }
    goto L_08808788;
L_08808788:;
    v1 = LD32(t1);
    v0 = LD32(t1+4);
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {vr48=BITSF(v1);}
    v1 = LD32(t1+8);
    {vr49=BITSF(v0);}
    {vr50=BITSF(v1);}
    v1 = LD32(t1+12);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v0 = LD32(t1+16);
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {vr48=BITSF(v1);}
    v1 = LD32(t1+20);
    {vr49=BITSF(v0);}
    {vr50=BITSF(v1);}
    v1 = LD32(t1+24);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v0 = LD32(t1+28);
    {u32 a_=sp+(192);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {vr32=BITSF(v1);}
    v1 = LD32(t1+32);
    {vr33=BITSF(v0);}
    {vr34=BITSF(v1);}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(144);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    v0 = LD32(a1);
    f4 = BITSF(LD32(t9));
    f5 = BITSF(LD32(t9+4));
    f6 = BITSF(LD32(t9+8));
    a0 = LD32(a1+8);
    v1 = LD32(a1+4);
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr16=BITSF(v0);}
    {vr17=BITSF(v1);}
    {vr18=BITSF(a0);}
    {float t0=vr16;float t1=vr17;float t2=vr18;float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=vr4*t0;o1+=vr5*t1;o1+=vr6*t2;float o2=0;o2+=vr8*t0;o2+=vr9*t1;o2+=vr10*t2;vr20=o0;vr21=o1;vr22=o2;}
    {v0=FBITS(vr22);}
    f3 = BITSF(v0);
    {v0=FBITS(vr20);}
    f2 = BITSF(v0);
    {v0=FBITS(vr21);}
    f0 = BITSF(v0);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    ST32(sp+80, FBITS(f2));
    ST32(s2+1332, FBITS(f4));
    ST32(s1+4, FBITS(f5));
    ST32(s1+8, FBITS(f6));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr120=BITSF(LD32(sp+(24)));}
    {vr121=BITSF(LD32(sp+(28)));}
    {vr122=BITSF(LD32(sp+(32)));}
    {vr96=BITSF(LD32(t1+(0)));}
    {vr97=BITSF(LD32(t1+(4)));}
    {vr98=BITSF(LD32(t1+(8)));}
    {vr100=BITSF(LD32(t1+(12)));}
    {vr101=BITSF(LD32(t1+(16)));}
    {vr102=BITSF(LD32(t1+(20)));}
    {vr104=BITSF(LD32(t1+(24)));}
    {vr105=BITSF(LD32(t1+(28)));}
    {vr106=BITSF(LD32(t1+(32)));}
    {float m00=0;m00+=vr112*vr96;m00+=vr116*vr97;m00+=vr120*vr98;float m01=0;m01+=vr113*vr96;m01+=vr117*vr97;m01+=vr121*vr98;float m02=0;m02+=vr114*vr96;m02+=vr118*vr97;m02+=vr122*vr98;float m10=0;m10+=vr112*vr100;m10+=vr116*vr101;m10+=vr120*vr102;float m11=0;m11+=vr113*vr100;m11+=vr117*vr101;m11+=vr121*vr102;float m12=0;m12+=vr114*vr100;m12+=vr118*vr101;m12+=vr122*vr102;float m20=0;m20+=vr112*vr104;m20+=vr116*vr105;m20+=vr120*vr106;float m21=0;m21+=vr113*vr104;m21+=vr117*vr105;m21+=vr121*vr106;float m22=0;m22+=vr114*vr104;m22+=vr118*vr105;m22+=vr122*vr106;vr80=m00;vr81=m01;vr82=m02;vr84=m10;vr85=m11;vr86=m12;vr88=m20;vr89=m21;vr90=m22;}
    {ST32(sp+(96),FBITS(vr80));}
    {ST32(sp+(100),FBITS(vr81));}
    {ST32(sp+(104),FBITS(vr82));}
    {ST32(sp+(108),FBITS(vr84));}
    {ST32(sp+(112),FBITS(vr85));}
    {ST32(sp+(116),FBITS(vr86));}
    {ST32(sp+(120),FBITS(vr88));}
    {ST32(sp+(124),FBITS(vr89));}
    {ST32(sp+(128),FBITS(vr90));}
    f0 = BITSF(LD32(sp+96));
    ST32(s3+2100, FBITS(f0));
    f1 = BITSF(LD32(sp+100));
    f0 = BITSF(LD32(sp+104));
    ST32(t6+4, FBITS(f1));
    ST32(t6+8, FBITS(f0));
    f1 = BITSF(LD32(sp+108));
    f0 = BITSF(LD32(sp+112));
    ST32(t6+12, FBITS(f1));
    ST32(t6+16, FBITS(f0));
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    ST32(t6+20, FBITS(f1));
    ST32(t6+24, FBITS(f0));
    f1 = BITSF(LD32(sp+124));
    f0 = BITSF(LD32(sp+128));
    ST32(t6+28, FBITS(f1));
    ST32(t6+32, FBITS(f0));
    goto L_08808938;
L_08808938:;
    a0 = LD32(s0+16);
    goto L_088086CC;
L_08808940:;
    v0 = t5 << 2;
    {u32 a_=sp+(256);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    v0 = v0 + v1;
    a2 = LD32(v0);
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
    a1 = a2 << 3;
    a1 = a1 + a2;
    a1 = a1 << 2;
    a1 = a1 + t6;
    a0 = a2 << 1;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    {vr64=BITSF(v0);}
    a0 = a0 + a2;
    v0 = LD32(a1+8);
    {vr65=BITSF(v1);}
    {vr66=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    v0 = LD32(a1+12);
    v1 = LD32(a1+16);
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    a0 = a0 << 2;
    {vr0=BITSF(v0);}
    v0 = LD32(a1+20);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(a1+24);
    v1 = LD32(a1+28);
    a0 = a0 + s1;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr0=BITSF(v0);}
    v0 = LD32(a1+32);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr104=d0;vr105=d1;vr106=d2;v[107]=d3;}
    v0 = LD32(t0+4);
    a3 = LD32(t0+8);
    f6 = BITSF(LD32(a0+8));
    f4 = BITSF(LD32(a0));
    f5 = BITSF(LD32(a0+4));
    v1 = LD32(t0);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr104;float s1=vr105;float s2=vr106;float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr16=BITSF(v1);}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {vr17=BITSF(v0);}
    {vr18=BITSF(a3);}
    {float t0=vr16;float t1=vr17;float t2=vr18;float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=vr4*t0;o1+=vr5*t1;o1+=vr6*t2;float o2=0;o2+=vr8*t0;o2+=vr9*t1;o2+=vr10*t2;vr20=o0;vr21=o1;vr22=o2;}
    {v0=FBITS(vr22);}
    f3 = BITSF(v0);
    {v0=FBITS(vr20);}
    f2 = BITSF(v0);
    {v0=FBITS(vr21);}
    f0 = BITSF(v0);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f5));
    ST32(sp+88, FBITS(f6));
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr120=BITSF(LD32(sp+(24)));}
    {vr121=BITSF(LD32(sp+(28)));}
    {vr122=BITSF(LD32(sp+(32)));}
    {vr96=BITSF(LD32(a1+(0)));}
    {vr97=BITSF(LD32(a1+(4)));}
    {vr98=BITSF(LD32(a1+(8)));}
    {vr100=BITSF(LD32(a1+(12)));}
    {vr101=BITSF(LD32(a1+(16)));}
    {vr102=BITSF(LD32(a1+(20)));}
    {vr104=BITSF(LD32(a1+(24)));}
    {vr105=BITSF(LD32(a1+(28)));}
    {vr106=BITSF(LD32(a1+(32)));}
    {float m00=0;m00+=vr112*vr96;m00+=vr116*vr97;m00+=vr120*vr98;float m01=0;m01+=vr113*vr96;m01+=vr117*vr97;m01+=vr121*vr98;float m02=0;m02+=vr114*vr96;m02+=vr118*vr97;m02+=vr122*vr98;float m10=0;m10+=vr112*vr100;m10+=vr116*vr101;m10+=vr120*vr102;float m11=0;m11+=vr113*vr100;m11+=vr117*vr101;m11+=vr121*vr102;float m12=0;m12+=vr114*vr100;m12+=vr118*vr101;m12+=vr122*vr102;float m20=0;m20+=vr112*vr104;m20+=vr116*vr105;m20+=vr120*vr106;float m21=0;m21+=vr113*vr104;m21+=vr117*vr105;m21+=vr121*vr106;float m22=0;m22+=vr114*vr104;m22+=vr118*vr105;m22+=vr122*vr106;vr80=m00;vr81=m01;vr82=m02;vr84=m10;vr85=m11;vr86=m12;vr88=m20;vr89=m21;vr90=m22;}
    {ST32(sp+(96),FBITS(vr80));}
    {ST32(sp+(100),FBITS(vr81));}
    {ST32(sp+(104),FBITS(vr82));}
    {ST32(sp+(108),FBITS(vr84));}
    {ST32(sp+(112),FBITS(vr85));}
    {ST32(sp+(116),FBITS(vr86));}
    {ST32(sp+(120),FBITS(vr88));}
    {ST32(sp+(124),FBITS(vr89));}
    {ST32(sp+(128),FBITS(vr90));}
    ST32(t3, FBITS(f4));
    ST32(t3+4, FBITS(f5));
    ST32(t3+8, FBITS(f6));
    f0 = BITSF(LD32(sp+96));
    f1 = BITSF(LD32(sp+100));
    ST32(t2, FBITS(f0));
    f0 = BITSF(LD32(sp+104));
    ST32(t2+4, FBITS(f1));
    ST32(t2+8, FBITS(f0));
    f1 = BITSF(LD32(sp+108));
    f0 = BITSF(LD32(sp+112));
    ST32(t2+12, FBITS(f1));
    ST32(t2+16, FBITS(f0));
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    ST32(t2+20, FBITS(f1));
    ST32(t2+24, FBITS(f0));
    f1 = BITSF(LD32(sp+124));
    f0 = BITSF(LD32(sp+128));
    ST32(t2+28, FBITS(f1));
    ST32(t2+32, FBITS(f0));
    goto L_08808938;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 08808B24 */
rv_t func_08808B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[976] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 976);
L_08808B24:;
    sp = sp - 976;
    v0 = 0 + 0;
    s6 = a2 + 0;
    s5 = a1 + 0;
    s4 = a3 + 0;
    s3 = t0 + 0;
    s0 = a0 + 0;
    t1 = LD32(a0+16);
    cnd_ = t1 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08808D0C; }
    goto L_08808B7C;
L_08808B7C:;
    a0 = LD32(t1+24);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_08808D10; }
    goto L_08808B88;
L_08808B88:;
    v0 = LD32(s0+112);
    v1 = 0x10000u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s1 = s0 + 112;
    if (cnd_) { goto L_08808D44; }
    goto L_08808B9C;
L_08808B9C:;
    f0 = BITSF(LD32(s5+8));
    f1 = BITSF(LD32(s5));
    f4 = BITSF(LD32(s5+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f4));
    v0 = LD32(a0+24);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(t1+100)); goto L_08808BD0; }
    goto L_08808BC4;
L_08808BC4:;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+12));
    f0 = f0 - f1;
    goto L_08808BD0;
L_08808BD0:;
    f0 = f4 - f0;
    s0 = s4 + 12;
    a0 = s4 + 0;
    a2 = sp + 0;
    ST32(sp+4, FBITS(f0));
    a3 = sp + 272;
    f12 = BITSF(LD32(a1+100));
    a1 = s0 + 0;
    { rv_t r_ = func_088347A0(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808BF4;
L_08808BF4:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08808D0C; }
    goto L_08808BFC;
L_08808BFC:;
    f9 = BITSF(LD32(sp+272));
    f0 = BITSF(LD32(s3));
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp));
    if (cnd_) { goto L_08808D0C; }
    goto L_08808C14;
L_08808C14:;
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s4+12));
    f2 = BITSF(LD32(s0+4));
    f0 = f0 * f9;
    f1 = f1 * f9;
    f2 = f2 * f9;
    f8 = BITSF(LD32(s4+8));
    f6 = BITSF(LD32(s4));
    f7 = BITSF(LD32(s4+4));
    f8 = f8 + f0;
    f6 = f6 + f1;
    f7 = f7 + f2;
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f6 - f5;
    f4 = f7 - f4;
    f3 = f8 - f3;
    {u32 a_=sp+(288);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    v1 = FBITS(f4);
    {v[12]=BITSF(v0);}
    a0 = FBITS(f3);
    {v[13]=BITSF(v1);}
    f1 = BITSF(0);
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v1 = (u32)-1;
    v0 = s3 + 20;
    fcc = FCMP(f0, f1, 2);
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f8));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f3));
    ST32(s3+8, v1);
    ST32(s3+12, v1);
    ST32(s3+20, FBITS(f5));
    ST32(v0+4, FBITS(f4));
    cnd_ = fcc;
    ST32(v0+8, FBITS(f3));
    if (cnd_) { goto L_08808CFC; }
    goto L_08808CC0;
L_08808CC0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[0]);}
    f2 = BITSF(a0);
    ST32(v0+8, FBITS(f3));
    {a0=FBITS(v[1]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, a0);
    ST32(sp+40, FBITS(f3));
    ST32(s3+20, FBITS(f2));
    ST32(v0+4, a0);
    goto L_08808CFC;
L_08808CFC:;
    v0 = 1;
    ST16(s3+18, v1);
    ST32(s3, FBITS(f9));
    ST16(s3+16, 0);
    goto L_08808D0C;
L_08808D0C:;
    goto L_08808D10;
L_08808D10:;
    sp = sp + 976;
    return (rv_t){ v0, v1, f0 };
L_08808D44:;
    f12 = BITSF(LD32(s0+368));
    s7 = a3 + 12;
    s2 = s0 + 356;
    a0 = a3 + 0;
    a1 = s7 + 0;
    a2 = s2 + 0;
    a3 = sp + 272;
    { rv_t r_ = func_088347A0(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808D64;
L_08808D64:;
    cnd_ = v0 == 0;
    ST32(sp+304, 0);
    if (cnd_) { goto L_08808E90; }
    goto L_08808D6C;
L_08808D6C:;
    v0 = LD32(s4+44);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    f9 = BITSF(LD32(sp+272));
    if (cnd_) { goto L_088090DC; }
    goto L_08808D7C;
L_08808D7C:;
    f0 = BITSF(LD32(s3));
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+228); goto L_08808E94; }
    goto L_08808D90;
L_08808D90:;
    f2 = BITSF(LD32(s7+8));
    f0 = BITSF(LD32(s4+12));
    f1 = BITSF(LD32(s7+4));
    f2 = f2 * f9;
    f0 = f0 * f9;
    f1 = f1 * f9;
    f6 = BITSF(LD32(s4));
    f7 = BITSF(LD32(s4+4));
    f8 = BITSF(LD32(s4+8));
    f6 = f6 + f0;
    f7 = f7 + f1;
    f8 = f8 + f2;
    f5 = BITSF(LD32(s2+8));
    f3 = BITSF(LD32(s0+356));
    f4 = BITSF(LD32(s2+4));
    f5 = f8 - f5;
    f3 = f6 - f3;
    f4 = f7 - f4;
    {u32 a_=sp+(320);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a0 = FBITS(f5);
    v0 = FBITS(f3);
    v1 = FBITS(f4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v1 = (u32)-1;
    v0 = s3 + 20;
    fcc = FCMP(f0, f1, 2);
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(s3+8, v1);
    ST32(s3+12, v1);
    ST32(s3+20, FBITS(f3));
    ST32(v0+4, FBITS(f4));
    cnd_ = fcc;
    ST32(v0+8, FBITS(f5));
    if (cnd_) { goto L_08808E7C; }
    goto L_08808E40;
L_08808E40:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[0]);}
    f2 = BITSF(a0);
    ST32(v0+8, FBITS(f3));
    {a0=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, a0);
    ST32(sp+24, FBITS(f3));
    ST32(s3+20, FBITS(f2));
    ST32(v0+4, a0);
    goto L_08808E7C;
L_08808E7C:;
    v0 = 1;
    ST32(sp+304, v0);
    ST32(s3, FBITS(f9));
    ST16(s3+18, v1);
    ST16(s3+16, 0);
    goto L_08808E90;
L_08808E90:;
    s0 = LD32(s0+228);
    goto L_08808E94;
L_08808E94:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+304);
    if (cnd_) { goto L_08808D0C; }
    goto L_08808E9C;
L_08808E9C:;
    v0 = LD32(s0+52);
    goto L_08808EA0;
L_08808EA0:;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08808EC0; }
    goto L_08808EAC;
L_08808EAC:;
    s0 = LD32(s0+8);
    goto L_08808EB0;
L_08808EB0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+52); goto L_08808EA0; }
    goto L_08808EB8;
L_08808EB8:;
    v0 = LD32(sp+304);
    goto L_08808D0C;
L_08808EC0:;
    a1 = sp + 160;
    a2 = sp + 48;
    { rv_t r_ = func_0880D9AC(a0, a1, a2, 0, t1, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08808ECC;
L_08808ECC:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+8); goto L_08808EB0; }
    goto L_08808ED4;
L_08808ED4:;
    v1 = LD32(s6);
    v0 = LD32(s6+4);
    {u32 a_=sp+(848);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s6+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s6+12);
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s6+16);
    {u32 a_=sp+(832);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {u32 a_=sp+(864);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s6+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s6+24);
    {u32 a_=sp+(800);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s6+28);
    f4 = BITSF(LD32(s5));
    f5 = BITSF(LD32(s5+4));
    f6 = BITSF(LD32(s5+8));
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(768);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(880);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[32]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(s6+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+164);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp+160);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+168);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[18]);}
    f2 = BITSF(v1);
    f3 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    ST32(sp+16, v1);
    {u32 a_=sp+(816);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    a0 = s0 + 0;
    ST32(sp+20, v0);
    a1 = sp + 96;
    a2 = sp + 224;
    ST32(sp+32, v1);
    a3 = s4 + 0;
    t0 = s3 + 0;
    ST32(sp+36, v0);
    ST32(sp+96, FBITS(f4));
    ST32(sp+100, FBITS(f5));
    ST32(sp+104, FBITS(f6));
    ST32(sp+24, FBITS(f3));
    ST32(sp+40, FBITS(f3));
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[116]=BITSF(LD32(sp+(60)));}
    {v[117]=BITSF(LD32(sp+(64)));}
    {v[118]=BITSF(LD32(sp+(68)));}
    {v[120]=BITSF(LD32(sp+(72)));}
    {v[121]=BITSF(LD32(sp+(76)));}
    {v[122]=BITSF(LD32(sp+(80)));}
    {v[96]=BITSF(LD32(s6+(0)));}
    {v[97]=BITSF(LD32(s6+(4)));}
    {v[98]=BITSF(LD32(s6+(8)));}
    {v[100]=BITSF(LD32(s6+(12)));}
    {v[101]=BITSF(LD32(s6+(16)));}
    {v[102]=BITSF(LD32(s6+(20)));}
    {v[104]=BITSF(LD32(s6+(24)));}
    {v[105]=BITSF(LD32(s6+(28)));}
    {v[106]=BITSF(LD32(s6+(32)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(176),FBITS(v[80]));}
    {ST32(sp+(180),FBITS(v[81]));}
    {ST32(sp+(184),FBITS(v[82]));}
    {ST32(sp+(188),FBITS(v[84]));}
    {ST32(sp+(192),FBITS(v[85]));}
    {ST32(sp+(196),FBITS(v[86]));}
    {ST32(sp+(200),FBITS(v[88]));}
    {ST32(sp+(204),FBITS(v[89]));}
    {ST32(sp+(208),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+176));
    ST32(sp+224, FBITS(f0));
    f1 = BITSF(LD32(sp+180));
    f0 = BITSF(LD32(sp+184));
    ST32(sp+228, FBITS(f1));
    ST32(sp+232, FBITS(f0));
    f1 = BITSF(LD32(sp+188));
    f0 = BITSF(LD32(sp+192));
    ST32(sp+236, FBITS(f1));
    ST32(sp+240, FBITS(f0));
    f1 = BITSF(LD32(sp+196));
    f0 = BITSF(LD32(sp+200));
    ST32(sp+244, FBITS(f1));
    ST32(sp+248, FBITS(f0));
    f1 = BITSF(LD32(sp+204));
    f0 = BITSF(LD32(sp+208));
    ST32(sp+252, FBITS(f1));
    ST32(sp+256, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1+28);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880909C;
L_0880909C:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+8); goto L_08808EB0; }
    goto L_088090A4;
L_088090A4:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088090B4;
L_088090B4:;
    v1 = LD32(s3+12);
    ST32(s3+8, v0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+16); goto L_088090D4; }
    goto L_088090C8;
L_088090C8:;
    v1 = 1;
    ST32(sp+304, v1);
    goto L_08808EAC;
L_088090D4:;
    ST32(s3+12, v0);
    goto L_088090C8;
L_088090DC:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s5 + 0;
    a3 = s6 + 0;
    { rv_t r_ = func_088085CC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088090F0;
L_088090F0:;
    t1 = LD32(s0+16);
    s2 = 0 + 0;
    v0 = LD32(t1+4);
    cnd_ = (s32)v0 <= 0;
    a0 = t1 + 0;
    if (cnd_) { goto L_08808E90; }
    goto L_08809104;
L_08809104:;
    v1 = s3 + 20;
    ST32(sp+624, v1);
    v0 = D_08B20534 - (1332);
    fp = v0 + 1332;
    ST32(sp+896, 0);
    s1 = 0 + 0;
    ST32(sp+900, 0);
    ST32(sp+904, 0);
    goto L_08809124;
L_08809124:;
    v0 = LD32(a0+24);
    v0 = s1 + v0;
    v1 = LD32(v0+24);
    v1 = v1 & 0x2;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(a0+20); goto L_08809184; }
    goto L_0880913C;
L_0880913C:;
    a0 = LD32(sp+904);
    goto L_08809140;
L_08809140:;
    v1 = LD32(sp+900);
    v0 = LD32(t1+4);
    a0 = a0 + 36;
    ST32(sp+904, a0);
    s2 = s2 + 1;
    v1 = v1 + 36;
    a0 = LD32(sp+896);
    v0 = (s32)s2 < (s32)v0;
    s1 = s1 + 28;
    a0 = a0 + 36;
    ST32(sp+896, a0);
    fp = fp + 12;
    a0 = t1 + 0;
    cnd_ = v0 != 0;
    ST32(sp+900, v1);
    if (cnd_) { goto L_08809124; }
    goto L_0880917C;
L_0880917C:;
    s0 = LD32(s0+228);
    goto L_08808E94;
L_08809184:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t1+24); goto L_088091A4; }
    goto L_0880918C;
L_0880918C:;
    v0 = s2 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08809684; }
    goto L_088091A0;
L_088091A0:;
    v0 = LD32(t1+24);
    goto L_088091A4;
L_088091A4:;
    v0 = s1 + v0;
    v1 = LD32(v0+24);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    a0 = LD32(sp+904);
    if (cnd_) { goto L_08809140; }
    goto L_088091B8;
L_088091B8:;
    a0 = LD32(sp+900);
    v1 = D_08B20834 - (2100);
    a1 = v1 + 2100;
    a1 = a0 + a1;
    f8 = BITSF(LD32(a1+4));
    f9 = BITSF(LD32(a1+8));
    f10 = BITSF(LD32(a1+12));
    f18 = BITSF(LD32(a1));
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f8);
    v1 = FBITS(f9);
    {v[0]=BITSF(v0);}
    a0 = FBITS(f10);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f11 = BITSF(LD32(a1+20));
    f12 = BITSF(LD32(a1+24));
    f13 = BITSF(LD32(a1+28));
    f5 = BITSF(LD32(fp));
    f6 = BITSF(LD32(fp+4));
    f7 = BITSF(LD32(fp+8));
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(s4));
    f3 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s4+8));
    v0 = FBITS(f11);
    v1 = FBITS(f12);
    {v[0]=BITSF(v0);}
    a0 = FBITS(f13);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v0=FBITS(v[2]);}
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f1 = BITSF(v0);
    f2 = f2 - f5;
    f3 = f3 - f6;
    f4 = f4 - f7;
    f16 = BITSF(LD32(a1+16));
    f14 = BITSF(LD32(a1+32));
    v1 = FBITS(f1);
    f6 = BITSF(LD32(s7+4));
    a0 = FBITS(f18);
    f5 = BITSF(LD32(s4+12));
    f7 = BITSF(LD32(s7+8));
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f21 = BITSF(v0);
    {u32 a_=sp+(576);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[68]=BITSF(a0);}
    {u32 a_=sp+(448);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[69]=BITSF(v0);}
    {v[64]=BITSF(a0);}
    {v[65]=BITSF(v0);}
    {v0=FBITS(v[2]);}
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(v0);
    f15 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    {v[70]=BITSF(v1);}
    {u32 a_=sp+(432);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a0 = FBITS(f1);
    {u32 a_=sp+(560);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[66]=BITSF(v1);}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v1 = FBITS(f0);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    f19 = BITSF(v0);
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    v0 = FBITS(f16);
    {u32 a_=sp+(592);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(464);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(a0);}
    ST32(sp+16, FBITS(f5));
    {v[69]=BITSF(v0);}
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f6));
    {v[64]=BITSF(a0);}
    {v[65]=BITSF(v0);}
    ST32(sp+32, FBITS(f2));
    {v0=FBITS(v[1]);}
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+36, FBITS(f3));
    f1 = BITSF(v0);
    ST32(sp+68, FBITS(f11));
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+40, FBITS(f4));
    {v[70]=BITSF(v1);}
    {v[66]=BITSF(v1);}
    ST32(sp+72, FBITS(f12));
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+24, FBITS(f7));
    a0 = FBITS(f1);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    ST32(sp+48, FBITS(f18));
    {u32 a_=sp+(384);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    ST32(sp+52, FBITS(f8));
    f17 = BITSF(v0);
    {u32 a_=sp+(608);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+56, FBITS(f9));
    v0 = FBITS(f0);
    {v[68]=BITSF(a0);}
    ST32(sp+60, FBITS(f10));
    {v[69]=BITSF(v0);}
    {u32 a_=sp+(480);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    ST32(sp+64, FBITS(f16));
    {v[64]=BITSF(a0);}
    {v[65]=BITSF(v0);}
    ST32(sp+76, FBITS(f13));
    v1 = FBITS(f14);
    a0 = FBITS(f5);
    ST32(sp+80, FBITS(f14));
    {v[70]=BITSF(v1);}
    {v[66]=BITSF(v1);}
    ST32(sp+68, FBITS(f15));
    v1 = FBITS(f2);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(s4+44);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(368);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {v[40]=BITSF(v1);}
    {v[36]=BITSF(a0);}
    v1 = FBITS(f3);
    a0 = FBITS(f6);
    {v[41]=BITSF(v1);}
    {v[37]=BITSF(a0);}
    v1 = FBITS(f4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[42]=BITSF(v1);}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = FBITS(f7);
    {float t0=v[40];float t1=v[41];float t2=v[42];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v[38]=BITSF(v1);}
    {a0=FBITS(v[32]);}
    {v1=FBITS(v[34]);}
    f3 = BITSF(a0);
    f5 = BITSF(v1);
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {v1=FBITS(v[33]);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    f2 = BITSF(v1);
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v1=FBITS(v[2]);}
    {a0=FBITS(v[0]);}
    f6 = BITSF(v1);
    f4 = BITSF(a0);
    v0 = v0 & 0x4;
    {v1=FBITS(v[1]);}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+72, FBITS(f1));
    a0 = sp + 32;
    a1 = sp + 16;
    ST32(sp+32, FBITS(f3));
    t2 = sp + 96;
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f6));
    ST32(sp+76, FBITS(f17));
    ST32(sp+52, FBITS(f20));
    ST32(sp+56, FBITS(f21));
    ST32(sp+60, FBITS(f19));
    ST32(sp, FBITS(f4));
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f6));
    ST32(sp+96, FBITS(f4));
    ST32(sp+100, v1);
    cnd_ = v0 == 0;
    ST32(sp+104, FBITS(f6));
    if (cnd_) { goto L_0880966C; }
    goto L_08809490;
L_08809490:;
    v1 = LD32(t1+24);
    f1 = BITSF(LD32(s4+24));
    f5 = BITSF(LD32(s4+28));
    v1 = s1 + v1;
    v0 = LD32(v1);
    f6 = BITSF(LD32(s4+32));
    a2 = sp + 128;
    ST32(sp+128, v0);
    a3 = sp + 276;
    t0 = 0 + 0;
    v0 = LD32(v1+4);
    f0 = BITSF(LD32(sp+128));
    t1 = sp + 112;
    ST32(sp+132, v0);
    f0 = f0 * f1;
    v0 = LD32(v1+8);
    f4 = BITSF(LD32(sp+132));
    ST32(sp+136, v0);
    f4 = f4 * f1;
    v0 = LD32(v1+12);
    f2 = BITSF(LD32(sp+136));
    ST32(sp+140, v0);
    f2 = f2 * f5;
    v0 = LD32(v1+16);
    f3 = BITSF(LD32(sp+140));
    ST32(sp+144, v0);
    f3 = f3 * f5;
    v0 = LD32(v1+20);
    f1 = BITSF(LD32(sp+144));
    ST32(sp+128, FBITS(f0));
    f1 = f1 * f6;
    ST32(sp+148, v0);
    f0 = BITSF(LD32(sp+148));
    ST32(sp+136, FBITS(f2));
    f0 = f0 * f6;
    ST32(sp+144, FBITS(f1));
    ST32(sp+132, FBITS(f4));
    ST32(sp+140, FBITS(f3));
    ST32(sp+148, FBITS(f0));
    goto L_0880952C;
L_0880952C:;
    { rv_t r_ = func_08834B8C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08809534;
L_08809534:;
    cnd_ = v0 == 0;
    if (cnd_) { t1 = LD32(s0+16); goto L_0880913C; }
    goto L_0880953C;
L_0880953C:;
    f1 = BITSF(LD32(sp+276));
    f0 = BITSF(LD32(s3));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { t1 = LD32(s0+16); goto L_0880913C; }
    goto L_08809554;
L_08809554:;
    v0 = D_08B20834 - (2100);
    a0 = v0 + 2100;
    v0 = 1;
    ST32(sp+304, v0);
    v0 = (u32)-1;
    {u32 a_=sp+(704);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+896);
    ST32(s3, FBITS(f1));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    a0 = v1 + a0;
    ST32(s3+8, s2);
    {u32 a_=sp+(720);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(s3+12, v0);
    {u32 a_=sp+(640);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[124]=d0;v[125]=d1;v[126]=d2;v[127]=d3;}
    v0 = LD32(a0);
    v1 = LD32(a0+4);
    {v[96]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[97]=BITSF(v1);}
    v1 = LD32(a0+12);
    {v[98]=BITSF(v0);}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    v0 = LD32(a0+16);
    a1 = LD32(a0+32);
    {v[0]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    v0 = LD32(a0+24);
    v1 = LD32(a0+28);
    {u32 a_=sp+(752);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(sp+104);
    {v[0]=BITSF(v0);}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    v0 = LD32(sp+96);
    {v[1]=BITSF(v1);}
    {v[4]=BITSF(v0);}
    v1 = LD32(sp+100);
    {v[2]=BITSF(a1);}
    {v[5]=BITSF(v1);}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[6]=BITSF(a0);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[112]*t0;o0+=v[113]*t1;o0+=v[114]*t2;float o1=0;o1+=v[116]*t0;o1+=v[117]*t1;o1+=v[118]*t2;float o2=0;o2+=v[120]*t0;o2+=v[121]*t1;o2+=v[122]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    v0 = LD32(sp+624);
    {a0=FBITS(v[1]);}
    t1 = LD32(s0+16);
    ST32(v0+4, a0);
    {v1=FBITS(v[0]);}
    ST32(v0+8, FBITS(f3));
    v0 = LD_U8(sp+112);
    ST32(s3+20, v1);
    ST8(s3+33, v0);
    ST32(sp+160, v1);
    ST32(sp+164, a0);
    ST32(sp, v1);
    v1 = (u32)-1;
    ST32(sp+168, FBITS(f3));
    ST32(sp+4, a0);
    ST32(sp+8, FBITS(f3));
    ST16(s3+18, v1);
    ST16(s3+16, 0);
    goto L_0880913C;
L_0880966C:;
    a2 = LD32(t1+24);
    a3 = sp + 276;
    t0 = 0 + 0;
    a2 = a2 + s1;
    t1 = sp + 112;
    goto L_0880952C;
L_08809684:;
    a2 = D_08B20834 - (2100);
    a2 = a2 + 2100;
    v0 = LD32(v1+4);
    v1 = LD32(sp+904);
    a1 = fp + 0;
    a3 = s4 + 0;
    a2 = v1 + a2;
    t_ = v0;
    t0 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088096A8;
L_088096A8:;
    cnd_ = v0 == 0;
    t1 = LD32(s0+16);
    if (cnd_) { goto L_0880913C; }
    goto L_088096B0;
L_088096B0:;
    a0 = 1;
    v0 = (u32)-1;
    ST32(sp+304, a0);
    ST32(s3+8, s2);
    ST32(s3+12, v0);
    goto L_0880913C;
}

/* 088096C8 */
rv_t func_088096C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_088096C8:;
    v1 = LD32(a0+112);
    v0 = 0x10000u;
    a2 = 0 + 0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a0 = a0 + 112;
    if (cnd_) { goto L_08809700; }
    goto L_088096E0;
L_088096E0:;
    v0 = LD32(a0+92);
    a2 = 1;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_08809700;
L_08809700:;
    v0 = a2 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08809708 */
rv_t func_08809708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08809708:;
    sp = sp - 16;
    v0 = D_08B2AA0C - (-22004);
    s0 = a0 + 0;
    v1 = LD32(v0-22004);
    v0 = a0 << 1;
    v0 = v0 + s0;
    a0 = LD32(v1+16);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = (v1 >> 1) & 0x1;
    cnd_ = v1 == 0;
    s1 = D_08B2C0FC - (-16132);
    if (cnd_) { goto L_0880975C; }
    goto L_08809748;
L_08809748:;
    goto L_0880974C;
L_0880974C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880975C:;
    a0 = s1 - 16132;
    a1 = s0 + 0;
    { u64 r_ = func_088CEDB8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08809768;
L_08809768:;
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff;
    cnd_ = a0 == 0;
    a1 = D_08B21140 - (4416);
    if (cnd_) { goto L_08809798; }
    goto L_08809778;
L_08809778:;
    v0 = LD_U8(a1+4416);
    cnd_ = v0 != 0;
    v1 = D_08B2113C - (4412);
    if (cnd_) { goto L_0880979C; }
    goto L_08809784;
L_08809784:;
    v0 = D_08B21138 - (4408);
    ST8(v0+4408, 0);
    v0 = 1;
    ST32(v1+4412, 0);
    ST8(a1+4416, v0);
    goto L_08809798;
L_08809798:;
    v0 = LD_U8(a1+4416);
    goto L_0880979C;
L_0880979C:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_0880974C; }
    goto L_088097A4;
L_088097A4:;
    v0 = D_08B21138 - (4408);
    v1 = LD_U8(v0+4408);
    cnd_ = v1 != 0;
    a0 = v0 + 4408;
    if (cnd_) { goto L_088097E4; }
    goto L_088097B4;
L_088097B4:;
    v0 = s1 - 16132;
    v1 = LD32(v0+16);
    v0 = D_08B230A8 - (12456);
    a1 = a0 + 0;
    a0 = LD_U8(v0+12456);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088097E0; }
    goto L_088097D0;
L_088097D0:;
    v1 = v1 + s0;
    v0 = LD_U8(v1);
    v0 = v0 & a0;
    v0 = 0 < v0;
    goto L_088097E0;
L_088097E0:;
    ST8(a1, v0);
    goto L_088097E4;
L_088097E4:;
    a2 = D_08B2113C - (4412);
    a1 = LD32(a2+4412);
    v1 = (u32)-1;
    cnd_ = a1 == v1;
    v0 = a1 < 0x8u;
    if (cnd_) { goto L_08809748; }
    goto L_088097F8;
L_088097F8:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a2+4412, v1); goto L_08809748; }
    goto L_08809800;
L_08809800:;
    v1 = D_08B21134 - (4404);
    a0 = LD32(v1+4404);
    v0 = a1 << 1;
    v1 = a1 + 1;
    v0 = v0 + a0;
    ST16(v0+320, s0);
    ST32(a2+4412, v1);
    goto L_08809748;
}

/* 08809820 */
rv_t func_08809820(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08809820:;
    sp = sp - 112;
    s1 = a1 + 0;
    a1 = 0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088099A4; }
    goto L_08809850;
L_08809850:;
    v1 = LD_U16(a0+320);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    v0 = a0 + 336;
    if (cnd_) { goto L_088098D4; }
    goto L_08809860;
L_08809860:;
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+336));
    f1 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(v0+8));
    f1 = f1 - f0;
    f3 = f3 - f2;
    f0 = BITSF(LD32(s1+8));
    v0 = D_08AEB48C - (-19316);
    f2 = f1 * f1;
    f0 = f0 - f5;
    f4 = f3 * f3;
    ST32(sp, FBITS(f1));
    f5 = f0 * f0;
    f2 = f2 + f4;
    ST32(sp+8, FBITS(f0));
    f2 = f2 + f5;
    f0 = BITSF(LD32(v0-19316));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    ST32(sp+4, FBITS(f3));
    if (cnd_) { goto L_08809A50; }
    goto L_088098B8;
L_088098B8:;
    v0 = D_08B285AC - (-31316);
    v1 = LD32(v0-31316);
    a0 = LD32(a0+348);
    v1 = v1 < a0;
    v1 = v1 ^ 0x1;
    cnd_ = v1 == 0;
    v0 = D_08B230A8 - (12456);
    if (cnd_) { goto L_08809A54; }
    goto L_088098D4;
L_088098D4:;
    v0 = s0 + 112;
    t5 = LD32(v0+32);
    t0 = LD32(v0+12);
    t1 = LD32(v0+16);
    t2 = LD32(v0+20);
    t3 = LD32(v0+24);
    t4 = LD32(v0+28);
    s3 = sp + 16;
    v0 = D_08B21134 - (4404);
    v1 = D_08B21140 - (4416);
    a1 = sp + 48;
    a0 = s3 + 0;
    s4 = D_08B21138 - (4408);
    s2 = D_08B2113C - (4412);
    a3 = 0 + 0;
    ST32(v0+4404, s0);
    ST8(v1+4416, 0);
    ST32(sp+48, t0);
    ST32(sp+52, t1);
    ST32(sp+56, t2);
    ST32(sp+60, t3);
    ST32(sp+64, t4);
    ST32(sp+68, t5);
    ST8(s4+4408, 0);
    ST32(s2+4412, 0);
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880993C;
L_0880993C:;
    v0 = D_08B2C0FC - (-16132);
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(s1+4));
    f7 = BITSF(LD32(s1+8));
    f3 = f3 + f2;
    f4 = BITSF(LD32(sp+24));
    f5 = BITSF(LD32(sp+32));
    f0 = f0 + f2;
    f1 = BITSF(LD32(sp+28));
    f2 = BITSF(LD32(sp+36));
    f4 = f4 + f6;
    f5 = f5 + f7;
    f1 = f1 + f6;
    f2 = f2 + f7;
    a0 = v0 - 16132;
    v1 = LD32(a0+12);
    a1 = 1;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f3));
    ST32(sp+28, FBITS(f1));
    ST32(sp+24, FBITS(f4));
    ST32(sp+36, FBITS(f2));
    cnd_ = (s32)v1 > 0;
    ST32(sp+32, FBITS(f5));
    if (cnd_) { goto L_088099C8; }
    goto L_088099A4;
L_088099A4:;
    v0 = a1 + 0;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_088099C8:;
    a2 = RS_FADDR(func_08809708, 0x08809708u) - (-26872);
    a1 = s3 + 0;
    a2 = a2 - 26872;
    { rv_t r_ = func_088CE404(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088099D8;
L_088099D8:;
    a0 = LD32(s2+4412);
    v1 = ~(0 | a0);
    v1 = v1 < 0x1u;
    v0 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08809A00; }
    goto L_088099F4;
L_088099F4:;
    ST16(s0+320, a1);
    goto L_088099F8;
L_088099F8:;
    a1 = LD_U8(s4+4408);
    goto L_088099A4;
L_08809A00:;
    v0 = a0 < 0x8u;
    cnd_ = v0 == 0;
    v0 = D_08B285AC - (-31316);
    if (cnd_) { goto L_08809A24; }
    goto L_08809A0C;
L_08809A0C:;
    v0 = a0 << 1;
    v0 = v0 + s0;
    v1 = a0 + 1;
    ST16(v0+320, a1);
    ST32(s2+4412, v1);
    v0 = D_08B285AC - (-31316);
    goto L_08809A24;
L_08809A24:;
    v1 = LD32(v0-31316);
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    v0 = s0 + 336;
    v1 = v1 + 8;
    ST32(s0+336, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(s0+348, v1);
    ST32(v0+4, FBITS(f2));
    goto L_088099F8;
L_08809A50:;
    v0 = D_08B230A8 - (12456);
    goto L_08809A54;
L_08809A54:;
    t2 = LD_U8(v0+12456);
    v1 = D_08B2C0FC - (-16132);
    v1 = v1 - 16132;
    a0 = s0 + 320;
    t0 = 0 + 0;
    t3 = 0xffff;
    a1 = LD_U16(a0);
    goto L_08809A70;
L_08809A70:;
    t0 = t0 + 1;
    t1 = t0 < 0x8u;
    cnd_ = a1 == t3;
    a0 = a0 + 2;
    if (cnd_) { goto L_08809AB0; }
    goto L_08809A80;
L_08809A80:;
    v0 = LD32(v1+16);
    a3 = 0 + 0;
    a2 = t2 & 0xff;
    cnd_ = v0 == 0;
    a1 = v0 + a1;
    if (cnd_) { goto L_08809AA0; }
    goto L_08809A94;
L_08809A94:;
    v0 = LD_U8(a1);
    v0 = v0 & a2;
    a3 = 0 < v0;
    goto L_08809AA0;
L_08809AA0:;
    cnd_ = a3 != 0;
    a1 = 1;
    if (cnd_) { goto L_088099A4; }
    goto L_08809AA8;
L_08809AA8:;
    cnd_ = t1 != 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_08809A70; }
    goto L_08809AB0;
L_08809AB0:;
    a1 = 0 + 0;
    goto L_088099A4;
}

/* 08809AB8 */
rv_t func_08809AB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08809AB8:;
    sp = sp - 32;
    s1 = a1 & 0xff;
    f20 = f12;
    cnd_ = s1 == 0;
    ST32(a0+248, FBITS(f12));
    if (cnd_) { goto L_08809B0C; }
    goto L_08809ADC;
L_08809ADC:;
    s0 = LD32(a0+228);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08809B10; }
    goto L_08809AE8;
L_08809AE8:;
    v1 = LD32(s0);
    goto L_08809AEC;
L_08809AEC:;
    a0 = s0 + 0;
    f12 = f20;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08809B00;
L_08809B00:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08809AEC; }
    goto L_08809B0C;
L_08809B0C:;
    goto L_08809B10;
L_08809B10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08809B24 */
rv_t func_08809B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08809B24:;
    sp = sp - 32;
    s1 = a1 & 0xff;
    f22 = f12;
    f21 = f13;
    f20 = f14;
    ST32(a0+236, FBITS(f12));
    ST32(a0+240, FBITS(f13));
    cnd_ = s1 == 0;
    ST32(a0+244, FBITS(f14));
    if (cnd_) { goto L_08809B98; }
    goto L_08809B60;
L_08809B60:;
    s0 = LD32(a0+228);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08809B9C; }
    goto L_08809B6C;
L_08809B6C:;
    v0 = LD32(s0);
    goto L_08809B70;
L_08809B70:;
    a0 = s0 + 0;
    f12 = f22;
    v1 = LD32(v0+48);
    f13 = f21;
    f14 = f20;
    t_ = v1;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08809B8C;
L_08809B8C:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08809B70; }
    goto L_08809B98;
L_08809B98:;
    goto L_08809B9C;
L_08809B9C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08809BB8 */
float func_08809BB8(u32 a0, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t2 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[1856] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1856);
L_08809BB8:;
    sp = sp - 1856;
    t2 = LD32(a0+16);
    cnd_ = t2 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08809C60; }
    goto L_08809BDC;
L_08809BDC:;
    s0 = LD32(a0+228);
    cnd_ = s0 == 0;
    if (cnd_) {  goto L_08809C64; }
    goto L_08809BE8;
L_08809BE8:;
    v0 = LD32(a0+112);
    v1 = 0x10000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    s3 = a0 + 112;
    if (cnd_) { goto L_08809C60; }
    goto L_08809BFC;
L_08809BFC:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 32;
    goto L_08809C08;
L_08809C08:;
    cnd_ = v0 != v1;
    v0 = v0 - 32;
    if (cnd_) { goto L_08809C08; }
    goto L_08809C10;
L_08809C10:;
    a3 = LD32(s3);
    v0 = 0x20000u;
    v0 = a3 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(t2+4); goto L_08809C7C; }
    goto L_08809C24;
L_08809C24:;
    s1 = LD32(s3+92);
    goto L_08809C28;
L_08809C28:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08809C64; }
    goto L_08809C30;
L_08809C30:;
    v1 = LD32(s0);
    a2 = LD32(s2+16);
    a0 = s0 + 0;
    v0 = LD32(v1+56);
    a3 = (a3 >> 17) & 0x1;
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08809C4C;
L_08809C4C:;
    s0 = LD32(s0+8);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08809C64; }
    goto L_08809C58;
L_08809C58:;
    a3 = LD32(s3);
    goto L_08809C30;
L_08809C60:;
    goto L_08809C64;
L_08809C64:;
    sp = sp + 1856;
    return f0;
L_08809C7C:;
    cnd_ = (s32)v0 <= 0;
    t5 = 0 + 0;
    if (cnd_) { goto L_08809CF4; }
    goto L_08809C84;
L_08809C84:;
    t4 = LD32(s3+92);
    t6 = 0 + 0;
    t7 = t4 + 12;
    goto L_08809C90;
L_08809C90:;
    a2 = t4 + t6;
    t0 = sp + t6;
    v1 = t5 << 2;
    t1 = a2 + 12;
    cnd_ = t5 != 0;
    t3 = t0 + 12;
    if (cnd_) { goto L_08809CFC; }
    goto L_08809CA8;
L_08809CA8:;
    f0 = BITSF(LD32(t4));
    f1 = BITSF(LD32(t4+4));
    f2 = BITSF(LD32(t4+8));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = LD32(t4+12);
    ST32(sp+12, v0);
    v1 = LD32(t7+4);
    ST32(sp+16, v1);
    v0 = LD32(t7+8);
    ST32(sp+20, v0);
    v1 = LD32(t7+12);
    ST32(sp+24, v1);
    goto L_08809CE0;
L_08809CE0:;
    v0 = LD32(t2+4);
    t5 = t5 + 1;
    v0 = (s32)t5 < (s32)v0;
    cnd_ = v0 != 0;
    t6 = t6 + 28;
    if (cnd_) { goto L_08809C90; }
    goto L_08809CF4;
L_08809CF4:;
    s1 = sp + 0;
    goto L_08809C28;
L_08809CFC:;
    v0 = LD32(t2+28);
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    v0 = v1 + v0;
    v1 = LD32(v0);
    f2 = BITSF(LD32(a2+8));
    ST32(t0, FBITS(f0));
    v0 = v1 << 3;
    v0 = v0 - v1;
    ST32(t0+8, FBITS(f2));
    v0 = v0 << 2;
    v1 = sp + v0;
    ST32(t0+4, FBITS(f1));
    {v[112]=BITSF(LD32(v1+(12)));}
    {v[113]=BITSF(LD32(v1+(16)));}
    {v[114]=BITSF(LD32(v1+(20)));}
    {v[115]=BITSF(LD32(v1+(24)));}
    {v[116]=BITSF(LD32(t0+(0)));}
    {v[117]=BITSF(LD32(t0+(4)));}
    {v[118]=BITSF(LD32(t0+(8)));}
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
    {ST32(t0+(0),FBITS(v[120]));}
    {ST32(t0+(4),FBITS(v[121]));}
    {ST32(t0+(8),FBITS(v[122]));}
    a0 = v1 + 12;
    f3 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(t0+8));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    ST32(t0, FBITS(f2));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    v0 = LD32(v1+12);
    a1 = LD32(a0+12);
    v1 = LD32(a2+12);
    {v[8]=BITSF(v0);}
    a2 = LD32(t1+12);
    v0 = LD32(a0+4);
    {v[0]=BITSF(v1);}
    {v[9]=BITSF(v0);}
    v1 = LD32(a0+8);
    v0 = LD32(t1+4);
    {v[10]=BITSF(v1);}
    {v[1]=BITSF(v0);}
    v1 = LD32(t1+8);
    {v[11]=BITSF(a1);}
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(a2);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[4]);}
    ST32(sp+1808, v0);
    {v0=FBITS(v[7]);}
    f3 = BITSF(v0);
    a0 = LD32(sp+1808);
    {v0=FBITS(v[5]);}
    f2 = BITSF(v0);
    ST32(sp+1820, FBITS(f3));
    {v0=FBITS(v[6]);}
    ST32(sp+1812, FBITS(f2));
    ST32(sp+1816, v0);
    ST32(sp+1792, a0);
    v0 = LD32(sp+1812);
    v1 = LD32(sp+1816);
    ST32(sp+1796, v0);
    v0 = LD32(sp+1820);
    ST32(sp+1800, v1);
    ST32(sp+1804, v0);
    ST32(t0+12, a0);
    v0 = LD32(sp+1796);
    ST32(t3+4, v0);
    v1 = LD32(sp+1800);
    ST32(t3+8, v1);
    v0 = LD32(sp+1804);
    ST32(t3+12, v0);
    goto L_08809CE0;
}

/* 08809E70 */
void func_08809E70(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08809E70:;
    sp = sp - 112;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+316);
    cnd_ = a0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08809FC0; }
    goto L_08809EA0;
L_08809EA0:;
    v0 = LD32(s0+312);
    v1 = 0x10000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = D_08AEB494 - (-19308);
    if (cnd_) { goto L_08809EF0; }
    goto L_08809EB4;
L_08809EB4:;
    cnd_ = s1 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+308)); goto L_08809EC8; }
    goto L_08809EBC;
L_08809EBC:;
    f0 = BITSF(LD32(s0+308));
    ST32(s1, FBITS(f0));
    f1 = BITSF(LD32(s0+308));
    goto L_08809EC8;
L_08809EC8:;
    f0 = BITSF(LD32(s0+284));
    f0 = f0 + f1;
    goto L_08809ED4;
L_08809ED4:;
    sp = sp + 112;
    return;
L_08809EF0:;
    f12 = BITSF(LD32(v0-19308));
    v0 = D_08AEB490 - (-19312);
    f21 = BITSF(0);
    f0 = BITSF(LD32(v0-19312));
    s2 = sp + 16;
    a1 = s0 + 280;
    a0 = s2 + 0;
    a2 = sp + 0;
    a3 = 999;
    t0 = 1;
    t1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f21));
    ST32(sp+8, FBITS(f21));
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_08809F2C;
L_08809F2C:;
    fcc = FCMP(f20, f21, 2);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+56, FBITS(f20)); goto L_08809F3C; }
    goto L_08809F3C;
L_08809F3C:;
    v0 = D_08AEB498 - (-19304);
    f2 = BITSF(LD32(v0-19304));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+56));
    a0 = s2 + 0;
    f1 = f1 - f2;
    f0 = f0 + f2;
    ST32(sp+20, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08809F64;
L_08809F64:;
    f3 = f21;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(s0+284));
    f0 = f0 + f1;
    f0 = f0 - f2;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    ST32(s0+308, FBITS(f0));
    if (cnd_) { goto L_08809FA0; }
    goto L_08809F8C;
L_08809F8C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    f3 = f20;
    if (cnd_) { goto L_08809FA0; }
    goto L_08809F9C;
L_08809F9C:;
    f3 = f0;
    goto L_08809FA0;
L_08809FA0:;
    v0 = LD_U16(v0+18);
    ST32(s0+308, FBITS(f3));
    ST16(s0+312, v0);
    v0 = 0x10000u;
    v1 = LD32(s0+312);
    v1 = v1 | v0;
    ST32(s0+312, v1);
    goto L_08809EB4;
L_08809FC0:;
    func_08809E70(a0, a1, f12);
    goto L_08809FC8;
L_08809FC8:;
    goto L_08809ED4;
}

/* 08809FD0 */
void func_08809FD0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08809FD0:;
    sp = sp - 48;
    a2 = a0 + 0;
    a0 = LD32(a0+316);
    cnd_ = a0 != 0;
    v0 = 0x4000000u;
    if (cnd_) { goto L_0880A1FC; }
    goto L_08809FE8;
L_08809FE8:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a2+16); goto L_0880A044; }
    goto L_08809FF4;
L_08809FF4:;
    a3 = D_08B2A744 - (-22716);
    a0 = a3 - 22716;
    a1 = 0 + 0;
    v1 = a0 + 0;
    goto L_0880A004;
L_0880A004:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(v1, 0);
    ST32(v1+16, 0);
    ST32(v1+32, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0880A004; }
    goto L_0880A020;
L_0880A020:;
    f0 = BITSF(LD32(a2+236));
    ST32(a3-22716, FBITS(f0));
    f1 = BITSF(LD32(a2+240));
    ST32(a0+16, FBITS(f1));
    f0 = BITSF(LD32(a2+244));
    ST32(a0+32, FBITS(f0));
    goto L_0880A03C;
L_0880A03C:;
    sp = sp + 48;
    return;
L_0880A044:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0880A03C; }
    goto L_0880A04C;
L_0880A04C:;
    a1 = LD32(a2+112);
    v0 = 0x10000u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    a3 = a2 + 112;
    if (cnd_) { goto L_0880A03C; }
    goto L_0880A060;
L_0880A060:;
    v0 = a0 + 104;
    f5 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+16));
    f3 = BITSF(LD32(a0+104));
    f2 = f2 + f0;
    f1 = f1 + f5;
    f3 = f3 + f4;
    v0 = D_08AEB49C - (-19300);
    f0 = BITSF(LD32(v0-19300));
    v1 = 0x20000u;
    v1 = a1 & v1;
    f5 = f1 * f0;
    f3 = f3 * f0;
    f4 = f2 * f0;
    ST32(sp+8, FBITS(f5));
    ST32(sp, FBITS(f3));
    cnd_ = v1 == 0;
    ST32(sp+4, FBITS(f4));
    if (cnd_) { goto L_0880A124; }
    goto L_0880A0B4;
L_0880A0B4:;
    v0 = LD32(a3+92);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = f5 + f0;
    f1 = f3 + f1;
    f2 = f4 + f2;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_0880A0DC;
L_0880A0DC:;
    v0 = LD32(a0+36);
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    f1 = f1 - f3;
    a0 = a2 + 0;
    f0 = f0 - f4;
    a1 = sp + 0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    func_0880A20C(a0, a1, t1, t2, t3);
    goto L_0880A11C;
L_0880A11C:;
    goto L_0880A03C;
L_0880A124:;
    v0 = LD32(a3+92);
    v1 = a2 + 280;
    f6 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    {v[112]=BITSF(LD32(a2+(292)));}
    {v[113]=BITSF(LD32(a2+(296)));}
    {v[114]=BITSF(LD32(a2+(300)));}
    {v[115]=BITSF(LD32(a2+(304)));}
    {v[116]=BITSF(LD32(sp+(16)));}
    {v[117]=BITSF(LD32(sp+(20)));}
    {v[118]=BITSF(LD32(sp+(24)));}
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
    {ST32(sp+(16),FBITS(v[120]));}
    {ST32(sp+(20),FBITS(v[121]));}
    {ST32(sp+(24),FBITS(v[122]));}
    f0 = BITSF(LD32(a2+280));
    f1 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+24));
    f4 = BITSF(LD32(sp+20));
    f3 = f3 + f0;
    f5 = f5 + f6;
    f4 = f4 + f1;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 + f3;
    f1 = f1 + f4;
    f0 = f0 + f5;
    ST32(sp+16, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    goto L_0880A0DC;
L_0880A1FC:;
    func_08809FD0(a0, a1, t1, t2, t3);
    goto L_0880A204;
L_0880A204:;
    goto L_0880A03C;
}

/* 0880A20C */
void func_0880A20C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880A20C:;
    sp = sp - 32;
    s3 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+312);
    v1 = LD32(a0+352);
    a0 = 24;
    v0 = (v0 >> 19) & 0x1;
    s2 = v0 ^ 0x1;
    cnd_ = v1 == 0;
    a2 = s2 & 0xff;
    if (cnd_) { goto L_0880A28C; }
    goto L_0880A248;
L_0880A248:;
    cnd_ = a2 != 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_0880A27C; }
    goto L_0880A250;
L_0880A250:;
    a0 = LD32(s1+352);
    goto L_0880A254;
L_0880A254:;
    a2 = s2 & 0xff;
    a1 = 1;
    func_0889C91C(a0, a1, a2);
    goto L_0880A260;
L_0880A260:;
    sp = sp + 32;
    return;
L_0880A27C:;
    a0 = LD32(s1+352);
    func_0889C888(a0, a1);
    goto L_0880A284;
L_0880A284:;
    a0 = LD32(s1+352);
    goto L_0880A254;
L_0880A28C:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880A294;
L_0880A294:;
    s0 = v0 + 0;
    a2 = s2 & 0xff;
    a0 = v0 + 0;
    a1 = 1;
    func_0889C644(a0, a1, a2, 0, 0, 0);
    goto L_0880A2A8;
L_0880A2A8:;
    ST32(s1+352, s0);
    a2 = 1;
    goto L_0880A248;
}

/* 0880A2B4 */
void func_0880A2B4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0880A2B4:;
    v1 = LD32(a0+352);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0880A2CC; }
    goto L_0880A2C0;
L_0880A2C0:;
    v0 = LD32(v1+20);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(v1+20, v0);
    goto L_0880A2CC;
L_0880A2CC:;
    return;
}

/* 0880A2D4 */
rv_t func_0880A2D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr107 = v[107], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0880A2D4:;
    t2 = LD32(a0+16);
    sp = sp - 96;
    t4 = a1 + 0;
    t3 = a2 + 0;
    cnd_ = t2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880A324; }
    goto L_0880A2EC;
L_0880A2EC:;
    cnd_ = (s32)a3 < 0;
    if (cnd_) { goto L_0880A324; }
    goto L_0880A2F4;
L_0880A2F4:;
    v0 = LD32(t2+4);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880A324; }
    goto L_0880A304;
L_0880A304:;
    v1 = a0 + 112;
    cnd_ = v1 == 0;
    v0 = 0x10000u;
    if (cnd_) { goto L_0880A320; }
    goto L_0880A310;
L_0880A310:;
    a0 = LD32(a0+112);
    v0 = a0 & v0;
    cnd_ = v0 != 0;
    v0 = 0x20000u;
    if (cnd_) { goto L_0880A32C; }
    goto L_0880A320;
L_0880A320:;
    v0 = 0 + 0;
    goto L_0880A324;
L_0880A324:;
    sp = sp + 96;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return (rv_t){ v0, v1, f0 }; }
L_0880A32C:;
    v0 = a0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AEB4A0 - (-19296); goto L_0880A4C4; }
    goto L_0880A338;
L_0880A338:;
    a0 = LD32(v1+92);
    v0 = a3 << 3;
    v1 = LD32(a2);
    a1 = LD32(a2+4);
    v0 = v0 - a3;
    a3 = LD32(a2+8);
    v0 = v0 << 2;
    a0 = a0 + v0;
    f1 = BITSF(LD32(a0));
    f0 = BITSF(LD32(a0+8));
    f6 = BITSF(LD32(a0+4));
    ST32(sp+16, v1);
    a2 = a0 + 12;
    ST32(sp+20, a1);
    ST32(sp+24, a3);
    f5 = BITSF(LD32(t4+8));
    f3 = BITSF(LD32(t4));
    f4 = BITSF(LD32(t4+4));
    f2 = BITSF(LD32(sp+16));
    f3 = f3 - f1;
    f5 = f5 - f0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f4 = f4 - f6;
    v0 = LD32(t3+12);
    ST32(sp, FBITS(f3));
    v1 = FBITS(f2);
    ST32(sp+28, v0);
    {vr8=BITSF(v1);}
    v0 = FBITS(f0);
    ST32(sp+4, FBITS(f4));
    v1 = FBITS(f1);
    {vr9=BITSF(v1);}
    ST32(sp+8, FBITS(f5));
    {vr10=BITSF(v0);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    v1 = LD32(a0+12);
    v0 = LD32(a2+4);
    a1 = LD32(a2+12);
    {vr0=BITSF(v1);}
    v1 = LD32(a2+8);
    {vr1=BITSF(v0);}
    v0 = LD32(sp+28);
    {vr2=BITSF(v1);}
    {vr11=BITSF(v0);}
    {vr3=BITSF(a1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v1=FBITS(vr4);}
    {v0=FBITS(vr7);}
    ST32(sp+64, v1);
    f3 = BITSF(v0);
    {v1=FBITS(vr5);}
    a1 = LD32(sp+64);
    {v0=FBITS(vr6);}
    ST32(sp+68, v1);
    ST32(sp+72, v0);
    ST32(sp+76, FBITS(f3));
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    a0 = LD32(sp+76);
    ST32(sp+48, a1);
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    ST32(sp+60, a0);
    {vr112=BITSF(LD32(sp+(16)));}
    {vr113=BITSF(LD32(sp+(20)));}
    {vr114=BITSF(LD32(sp+(24)));}
    {vr115=BITSF(LD32(sp+(28)));}
    {vr116=BITSF(LD32(sp+(0)));}
    {vr117=BITSF(LD32(sp+(4)));}
    {vr118=BITSF(LD32(sp+(8)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(t0+(0),FBITS(vr120));}
    {ST32(t0+(4),FBITS(vr121));}
    {ST32(t0+(8),FBITS(vr122));}
    ST32(t1, a1);
    ST32(t1+12, a0);
    ST32(t1+4, v0);
    ST32(t1+8, v1);
    goto L_0880A4BC;
L_0880A4BC:;
    v0 = 1;
    goto L_0880A324;
L_0880A4C4:;
    f0 = BITSF(LD32(v0-19296));
    ST32(sp, 0);
    ST32(sp+76, FBITS(f0));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+64, 0);
    ST32(sp+68, 0);
    cnd_ = (s32)a3 < 0;
    ST32(sp+72, 0);
    if (cnd_) { goto L_0880A648; }
    goto L_0880A4E8;
L_0880A4E8:;
    t5 = LD32(v1+92);
    v0 = a3 << 3;
    goto L_0880A4F0;
L_0880A4F0:;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = t5 + v0;
    {vr112=BITSF(LD32(v0+(12)));}
    {vr113=BITSF(LD32(v0+(16)));}
    {vr114=BITSF(LD32(v0+(20)));}
    {vr115=BITSF(LD32(v0+(24)));}
    {vr116=BITSF(LD32(sp+(0)));}
    {vr117=BITSF(LD32(sp+(4)));}
    {vr118=BITSF(LD32(sp+(8)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(0),FBITS(vr120));}
    {ST32(sp+(4),FBITS(vr121));}
    {ST32(sp+(8),FBITS(vr122));}
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(sp));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(sp+4));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+8));
    f2 = f2 - f3;
    a0 = v0 + 12;
    f0 = f0 - f4;
    ST32(sp, FBITS(f1));
    a2 = a3 << 2;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    v1 = LD32(v0+12);
    a1 = LD32(a0+12);
    v0 = LD32(a0+4);
    {vr8=BITSF(v1);}
    v1 = LD32(a0+8);
    {vr9=BITSF(v0);}
    v0 = LD32(sp+64);
    {vr10=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+68);
    v0 = LD32(sp+72);
    {vr11=BITSF(a1);}
    {vr1=BITSF(v1);}
    v1 = LD32(sp+76);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v1=FBITS(vr7);}
    {v0=FBITS(vr4);}
    f4 = BITSF(v1);
    f3 = BITSF(v0);
    {v1=FBITS(vr5);}
    {v0=FBITS(vr6);}
    ST32(sp+32, FBITS(f3));
    ST32(sp+40, v0);
    ST32(sp+36, v1);
    ST32(sp+44, FBITS(f4));
    v0 = LD32(sp+32);
    a0 = LD32(sp+40);
    a1 = LD32(sp+44);
    v1 = LD32(sp+36);
    ST32(sp+64, v0);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, a0);
    ST32(sp+60, a1);
    ST32(sp+68, v1);
    ST32(sp+72, a0);
    cnd_ = a3 == 0;
    ST32(sp+76, a1);
    if (cnd_) { goto L_0880A648; }
    goto L_0880A634;
L_0880A634:;
    v0 = LD32(t2+28);
    v0 = a2 + v0;
    a3 = LD32(v0);
    cnd_ = (s32)a3 >= 0;
    if (cnd_) { v0 = a3 << 3; goto L_0880A4F0; }
    goto L_0880A648;
L_0880A648:;
    f3 = BITSF(LD32(t4));
    f0 = BITSF(LD32(sp));
    f5 = BITSF(LD32(t4+8));
    f4 = BITSF(LD32(t4+4));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+64));
    f4 = f4 + f1;
    f5 = f5 + f0;
    f1 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(sp+72));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(t0, FBITS(f3));
    v1 = FBITS(f2);
    ST32(sp+68, FBITS(f1));
    {vr8=BITSF(v1);}
    v0 = FBITS(f1);
    ST32(t0+4, FBITS(f4));
    {vr9=BITSF(v0);}
    v1 = FBITS(f0);
    ST32(t0+8, FBITS(f5));
    {vr10=BITSF(v1);}
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f5));
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f0));
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
    {vr116=BITSF(LD32(t0+(0)));}
    {vr117=BITSF(LD32(t0+(4)));}
    {vr118=BITSF(LD32(t0+(8)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(t0+(0),FBITS(vr120));}
    {ST32(t0+(4),FBITS(vr121));}
    {ST32(t0+(8),FBITS(vr122));}
    v0 = LD32(sp+76);
    a0 = LD32(t3+12);
    v1 = LD32(t3);
    {vr11=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = LD32(t3+4);
    v1 = LD32(t3+8);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {vr3=BITSF(a0);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v0=FBITS(vr4);}
    {v1=FBITS(vr5);}
    ST32(sp+32, v0);
    {v0=FBITS(vr7);}
    ST32(sp+36, v1);
    {v1=FBITS(vr6);}
    a0 = LD32(sp+32);
    a1 = LD32(sp+36);
    ST32(sp+40, v1);
    ST32(sp+44, v0);
    ST32(sp+48, a0);
    ST32(sp+52, a1);
    v0 = LD32(sp+40);
    v1 = LD32(sp+44);
    ST32(t1, a0);
    ST32(t1+12, v1);
    ST32(t1+4, a1);
    ST32(t1+8, v0);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    goto L_0880A4BC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 0880A7A0 */
rv_t func_0880A7A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880A7A0:;
    sp = sp - 16;
    s0 = LD32(a0+228);
    cnd_ = s0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0880A7F0; }
    goto L_0880A7BC;
L_0880A7BC:;
    v0 = LD32(s0+16);
    goto L_0880A7C0;
L_0880A7C0:;
    a0 = s0 + 0;
    cnd_ = v0 == s1;
    v1 = s0 + 0;
    if (cnd_) { goto L_0880A7F4; }
    goto L_0880A7CC;
L_0880A7CC:;
    v1 = LD32(s0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880A7DC;
L_0880A7DC:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880A80C; }
    goto L_0880A7E4;
L_0880A7E4:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_0880A7C0; }
    goto L_0880A7F0;
L_0880A7F0:;
    v1 = 0 + 0;
    goto L_0880A7F4;
L_0880A7F4:;
    goto L_0880A7F8;
L_0880A7F8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880A80C:;
    v1 = LD32(s0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880A81C;
L_0880A81C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880A828;
L_0880A828:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0880A7E4; }
    goto L_0880A830;
L_0880A830:;
    goto L_0880A7F8;
}

/* 0880A838 */
void func_0880A838(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880A838:;
    a2 = LD32(a0+312);
    v0 = 0x10000u;
    sp = sp - 16;
    v0 = a2 & v0;
    cnd_ = v0 == 0;
    v1 = a0 + 280;
    if (cnd_) { goto L_0880A8D0; }
    goto L_0880A850;
L_0880A850:;
    f1 = BITSF(LD32(v1+4));
    f8 = BITSF(LD32(a1));
    f6 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a0+280));
    f0 = BITSF(LD32(v1+8));
    f1 = f6 - f1;
    f3 = f8 - f3;
    f7 = BITSF(LD32(a1+8));
    v0 = D_08AEB4A4 - (-19292);
    f5 = f1 * f1;
    f0 = f7 - f0;
    f2 = f3 * f3;
    a2 = (a2 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(sp+4, FBITS(f1));
    f4 = f0 * f0;
    f2 = f2 + f5;
    ST32(sp+8, FBITS(f0));
    f2 = f2 + f4;
    f0 = BITSF(LD32(v0-19292));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    ST32(sp, FBITS(f3));
    if (cnd_) { goto L_0880A8BC; }
    goto L_0880A8AC;
L_0880A8AC:;
    ST32(a0+312, a2);
    f7 = BITSF(LD32(a1+8));
    goto L_0880A8B4;
L_0880A8B4:;
    f8 = BITSF(LD32(a1));
    f6 = BITSF(LD32(a1+4));
    goto L_0880A8BC;
L_0880A8BC:;
    ST32(a0+280, FBITS(f8));
    ST32(v1+8, FBITS(f7));
    ST32(v1+4, FBITS(f6));
    sp = sp + 16;
    return;
L_0880A8D0:;
    f7 = BITSF(LD32(a1+8));
    goto L_0880A8B4;
}

/* 0880A8D8 */
void func_0880A8D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880A8D8:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v0 = LD32(a0+228);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880A90C; }
    goto L_0880A8F8;
L_0880A8F8:;
    goto L_0880A8FC;
L_0880A8FC:;
    sp = sp + 16;
    return;
L_0880A90C:;
    a0 = LD32(s0+228);
    goto L_0880A910;
L_0880A910:;
    a1 = s1 + 0;
    { rv_t r_ = func_0880D8EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880A918;
L_0880A918:;
    v0 = LD32(s0+228);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+228); goto L_0880A910; }
    goto L_0880A924;
L_0880A924:;
    goto L_0880A8FC;
}

/* 0880A92C */
rv_t func_0880A92C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880A92C:;
    sp = sp - 48;
    v1 = a0 + 76;
    s4 = t1 + 0;
    if (t1 == 0) s4 = v1;
    s3 = a0 + 0;
    a0 = a2 & 0x4;
    s7 = t0 + 0;
    s6 = a3 + 0;
    s5 = a2 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0880AA74; }
    goto L_0880A980;
L_0880A980:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0880A9FC; }
    goto L_0880A988;
L_0880A988:;
    s2 = s3 + 28;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0880A9F8; }
    goto L_0880A998;
L_0880A998:;
    v0 = LD32(s3+28);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0880A9D0; }
    goto L_0880A9A4;
L_0880A9A4:;
    v1 = v0 + 0;
    goto L_0880A9A8;
L_0880A9A8:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_0880A9F8; }
    goto L_0880A9C4;
L_0880A9C4:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0880A9A8; }
    goto L_0880A9D0;
L_0880A9D0:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880A9D8;
L_0880A9D8:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    goto L_0880A9F8;
L_0880A9F8:;
    s2 = a1 + 0;
    goto L_0880A9FC;
L_0880A9FC:;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_0880AA0C; }
    goto L_0880AA04;
L_0880AA04:;
    s1 = s1 + 1;
    goto L_0880A980;
L_0880AA0C:;
    a0 = 144;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880AA14;
L_0880AA14:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s5 + 0;
    a3 = s6 + 0;
    func_088150F8(a0, a1, a2, a3);
    goto L_0880AA2C;
L_0880AA2C:;
    ST32(s0+4, s3);
    a0 = s4 + 0;
    a2 = s7 + 0;
    ST32(s2, s0);
    a1 = s0 + 0;
    { rv_t r_ = func_08815264(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880AA44;
L_0880AA44:;
    v0 = s0 + 0;
    goto L_0880AA4C;
L_0880AA4C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880AA74:;
    a0 = s3 + 28;
    { rv_t r_ = func_08AA1D78(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880AA7C;
L_0880AA7C:;
    s2 = v0 + 0;
    cnd_ = s2 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880AA0C; }
    goto L_0880AA88;
L_0880AA88:;
    goto L_0880AA4C;
}

/* 0880AA90 */
rv_t func_0880AA90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880AA90:;
    sp = sp - 48;
    v1 = a0 + 76;
    s4 = t2 + 0;
    if (t2 == 0) s4 = v1;
    s3 = a0 + 0;
    a0 = a2 & 0x4;
    fp = t1 + 0;
    s7 = t0 + 0;
    s6 = a3 + 0;
    s5 = a2 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0880ABE8; }
    goto L_0880AAEC;
L_0880AAEC:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0880AB68; }
    goto L_0880AAF4;
L_0880AAF4:;
    s2 = s3 + 52;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0880AB64; }
    goto L_0880AB04;
L_0880AB04:;
    v0 = LD32(s3+52);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0880AB3C; }
    goto L_0880AB10;
L_0880AB10:;
    v1 = v0 + 0;
    goto L_0880AB14;
L_0880AB14:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_0880AB64; }
    goto L_0880AB30;
L_0880AB30:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0880AB14; }
    goto L_0880AB3C;
L_0880AB3C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880AB44;
L_0880AB44:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    goto L_0880AB64;
L_0880AB64:;
    s2 = a1 + 0;
    goto L_0880AB68;
L_0880AB68:;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_0880AB78; }
    goto L_0880AB70;
L_0880AB70:;
    s1 = s1 + 1;
    goto L_0880AAEC;
L_0880AB78:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880AB80;
L_0880AB80:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s5 + 0;
    a3 = s6 + 0;
    t0 = s7 + 0;
    func_08811C80(a0, a1, a2, a3, t0);
    goto L_0880AB9C;
L_0880AB9C:;
    ST32(s0+4, s3);
    a0 = s4 + 0;
    a2 = fp + 0;
    ST32(s2, s0);
    a1 = s0 + 0;
    { rv_t r_ = func_08815264(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880ABB4;
L_0880ABB4:;
    v0 = s0 + 0;
    goto L_0880ABBC;
L_0880ABBC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880ABE8:;
    a0 = s3 + 52;
    { rv_t r_ = func_08AA1E1C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880ABF0;
L_0880ABF0:;
    s2 = v0 + 0;
    cnd_ = s2 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880AB78; }
    goto L_0880ABFC;
L_0880ABFC:;
    goto L_0880ABBC;
}

/* 0880AC04 */
u32 func_0880AC04(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880AC04:;
    sp = sp - 32;
    s4 = a2 + 0;
    s2 = a0 + 0;
    s1 = a0 + 52;
    v1 = LD32(a0+52);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0880AC64; }
    goto L_0880AC38;
L_0880AC38:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0880AC40;
L_0880AC40:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0880AC70; }
    goto L_0880AC58;
L_0880AC58:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0880AC40; }
    goto L_0880AC64;
L_0880AC64:;
    a0 = LD32(s1+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0880AD30; }
    goto L_0880AC70;
L_0880AC70:;
    cnd_ = a2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0880AC7C; }
    goto L_0880AC78;
L_0880AC78:;
    s3 = LD32(a2);
    goto L_0880AC7C;
L_0880AC7C:;
    cnd_ = s3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880AC94; }
    goto L_0880AC84;
L_0880AC84:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0880ACB8; }
    goto L_0880AC90;
L_0880AC90:;
    v1 = 0 + 0;
    goto L_0880AC94;
L_0880AC94:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0880ACB8:;
    a1 = s4 + 0;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880ACC4;
L_0880ACC4:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880AC94; }
    goto L_0880ACCC;
L_0880ACCC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    v0 = func_08AA1344(a0, a1);
    goto L_0880ACD8;
L_0880ACD8:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_0880AC90; }
    goto L_0880ACE0;
L_0880ACE0:;
    v0 = LD32(s2+52);
    ST32(a3, s4);
    cnd_ = v0 == 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_0880AD14; }
    goto L_0880ACF0;
L_0880ACF0:;
    a1 = LD32(s1);
    goto L_0880ACF4;
L_0880ACF4:;
    v0 = LD32(a1);
    a0 = a1 + 8;
    a2 = a1 + 12;
    v0 = v0 < s4;
    if (v0 == 0) a2 = a0;
    v1 = LD32(a2);
    cnd_ = v1 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0880ACF4; }
    goto L_0880AD14;
L_0880AD14:;
    v0 = LD32(s1+4);
    v1 = 1;
    ST32(a2, a3);
    v0 = v0 + 1;
    ST32(s1+4, v0);
    ST32(s3+8, s4);
    goto L_0880AC94;
L_0880AD30:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880AD3C;
L_0880AD3C:;
    a2 = v0 + 0;
    goto L_0880AC70;
}

/* 0880AD44 */
rv_t func_0880AD44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880AD44:;
    sp = sp - 32;
    s3 = a0 + 28;
    s2 = a0 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0880AD9C; }
    goto L_0880AD70;
L_0880AD70:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0880AD78;
L_0880AD78:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0880ADA8; }
    goto L_0880AD90;
L_0880AD90:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0880AD78; }
    goto L_0880AD9C;
L_0880AD9C:;
    a0 = LD32(s3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0880AE5C; }
    goto L_0880ADA8;
L_0880ADA8:;
    cnd_ = a2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0880ADB4; }
    goto L_0880ADB0;
L_0880ADB0:;
    s1 = LD32(a2);
    goto L_0880ADB4;
L_0880ADB4:;
    cnd_ = s1 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0880AE08; }
    goto L_0880ADBC;
L_0880ADBC:;
    a1 = LD32(s1+12);
    a2 = 1;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880ADC8;
L_0880ADC8:;
    cnd_ = v0 == 0;
    a0 = s2 + 76;
    if (cnd_) { goto L_0880ADD4; }
    goto L_0880ADD0;
L_0880ADD0:;
    a0 = LD32(v0);
    goto L_0880ADD4;
L_0880ADD4:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880ADEC; }
    goto L_0880ADDC;
L_0880ADDC:;
    a1 = s1 + 0;
    goto L_0880ADE0;
L_0880ADE0:;
    { rv_t r_ = func_088153BC(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880ADE8;
L_0880ADE8:;
    v0 = 0 < v0;
    goto L_0880ADEC;
L_0880ADEC:;
    goto L_0880ADF0;
L_0880ADF0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0880AE08:;
    a1 = s0 + 0;
    a0 = s2 + 52;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880AE18;
L_0880AE18:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0880AE24; }
    goto L_0880AE20;
L_0880AE20:;
    s0 = LD32(v0);
    goto L_0880AE24;
L_0880AE24:;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880ADEC; }
    goto L_0880AE2C;
L_0880AE2C:;
    a1 = LD32(s0+12);
    a0 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880AE3C;
L_0880AE3C:;
    cnd_ = v0 == 0;
    a0 = s2 + 76;
    if (cnd_) { goto L_0880AE48; }
    goto L_0880AE44;
L_0880AE44:;
    a0 = LD32(v0);
    goto L_0880AE48;
L_0880AE48:;
    v0 = 0 + 0;
    cnd_ = a0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0880ADE0; }
    goto L_0880AE54;
L_0880AE54:;
    goto L_0880ADF0;
L_0880AE5C:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880AE68;
L_0880AE68:;
    a2 = v0 + 0;
    goto L_0880ADA8;
}

/* 0880AE70 */
void func_0880AE70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880AE70:;
    sp = sp - 16;
    a0 = a0 + 76;
    func_08815484(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0880AE80;
L_0880AE80:;
    sp = sp + 16;
    return;
}

/* 0880AE8C */
void func_0880AE8C(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr64 = v[64], vr65 = v[65], vr66 = v[66];
    u8 stack_[480] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 480);
L_0880AE8C:;
    sp = sp - 480;
    fp = a1 + 0;
    s1 = a0 + 0;
    s3 = s1 + 112;
    s0 = a2 + 0;
    a3 = LD32(a0+16);
    cnd_ = a3 == 0;
    a0 = a0 + 76;
    if (cnd_) { goto L_0880AEFC; }
    goto L_0880AED4;
L_0880AED4:;
    v0 = D_08B285AC - (-31316);
    s2 = LD32(v0-31316);
    v1 = LD32(s1+220);
    cnd_ = v1 == s2;
    if (cnd_) { v0 = LD32(s1+312); goto L_0880AF00; }
    goto L_0880AEE8;
L_0880AEE8:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEB4A8 - (-19288);
    if (cnd_) { goto L_0880B4C4; }
    goto L_0880AEF8;
L_0880AEF8:;
    ST32(s1+220, s2);
    goto L_0880AEFC;
L_0880AEFC:;
    v0 = LD32(s1+312);
    goto L_0880AF00;
L_0880AF00:;
    v1 = 0x100000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v1 = s3 + 12;
    if (cnd_) { goto L_0880AF20; }
    goto L_0880AF10;
L_0880AF10:;
    a2 = LD32(s1+16);
    v0 = LD32(a2+24);
    cnd_ = v0 != 0;
    if (cnd_) { s7 = LD32(a2+4); goto L_0880B10C; }
    goto L_0880AF20;
L_0880AF20:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+16));
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(s3+12));
    f5 = BITSF(LD32(v1+12));
    f8 = BITSF(LD32(v1+20));
    f2 = f2 - f3;
    f5 = f5 - f1;
    f8 = f8 - f0;
    {u32 a_=sp+(112);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {vr64=BITSF(v0);}
    v0 = FBITS(f5);
    {vr65=BITSF(v0);}
    v0 = FBITS(f8);
    {vr66=BITSF(v0);}
    {float s0=vr64;float s1=vr65;float s2=vr66;float t0=vr64;float t1=vr65;float t2=vr66;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr64=sum;}
    v0 = D_08AEB4AC - (-19284);
    f3 = BITSF(LD32(v0-19284));
    ST32(sp, FBITS(f2));
    a1 = s1 + 356;
    {u32 a_=sp+(128);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr64;float d0=sqrtf(s0);vr64=d0;}
    {v0=FBITS(vr64);}
    f0 = BITSF(v0);
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f1 = f0 * f3;
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[124]=d0;v[125]=d1;v[126]=d2;v[127]=d3;}
    ST32(s1+368, FBITS(f1));
    f4 = BITSF(LD32(v1+20));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+12));
    f6 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+16));
    f7 = BITSF(LD32(s3+12));
    f6 = f6 + f0;
    f2 = f2 + f4;
    f7 = f7 + f1;
    f6 = f6 * f3;
    f2 = f2 * f3;
    f7 = f7 * f3;
    ST32(a1+4, FBITS(f6));
    v1 = FBITS(f6);
    ST32(s1+356, FBITS(f7));
    v0 = FBITS(f7);
    {v[4]=BITSF(v0);}
    ST32(a1+8, FBITS(f2));
    v0 = FBITS(f2);
    {v[5]=BITSF(v1);}
    v1 = LD32(s0+4);
    {v[6]=BITSF(v0);}
    v0 = LD32(s0);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s0+12);
    v1 = LD32(s0+16);
    a0 = LD32(s0+32);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(s0+20);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s0+24);
    v1 = LD32(s0+28);
    {u32 a_=sp+(144);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    ST32(sp+4, FBITS(f5));
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[112]*t0;o0+=v[113]*t1;o0+=v[114]*t2;float o1=0;o1+=v[116]*t0;o1+=v[117]*t1;o1+=v[118]*t2;float o2=0;o2+=v[120]*t0;o2+=v[121]*t1;o2+=v[122]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {v0=FBITS(vr0);}
    f5 = BITSF(v0);
    ST32(sp+8, FBITS(f8));
    {v1=FBITS(vr1);}
    {v0=FBITS(vr2);}
    ST32(sp, FBITS(f7));
    f4 = BITSF(v1);
    f3 = BITSF(v0);
    ST32(sp+4, FBITS(f6));
    ST32(sp+8, FBITS(f2));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, v1);
    f2 = BITSF(LD32(fp+8));
    f0 = BITSF(LD32(fp));
    f1 = BITSF(LD32(fp+4));
    f2 = f3 + f2;
    f0 = f5 + f0;
    f1 = f4 + f1;
    ST32(sp+40, v0);
    ST32(s1+356, FBITS(f0));
    ST32(a1+8, FBITS(f2));
    ST32(a1+4, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, v1);
    ST32(sp+24, v0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_0880B0DC;
L_0880B0DC:;
    goto L_0880B0E0;
L_0880B0E0:;
    sp = sp + 480;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[64]=vr64;v[65]=vr65;v[66]=vr66;return; }
L_0880B10C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = s7 - 1;
    s6 = LD32(s1+228);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[64]=vr64;v[65]=vr65;v[66]=vr66;__auto_type vr_t_ = func_0880B4DC(a0, a1, a2, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr64=v[64];vr65=v[65];vr66=v[66];vr_t_; });
    goto L_0880B120;
L_0880B120:;
    a0 = s1 + 0;
    a1 = s3 + 0;
    a2 = fp + 0;
    a3 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[64]=vr64;v[65]=vr65;v[66]=vr66;__auto_type vr_t_ = func_088085CC(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr64=v[64];vr65=v[65];vr66=v[66];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B134;
L_0880B134:;
    s4 = 0 + 0;
    cnd_ = s7 == 0;
    ST32(sp+256, 0);
    if (cnd_) { goto L_0880B210; }
    goto L_0880B140;
L_0880B140:;
    v0 = D_08B20534 - (1332);
    v1 = D_08B20834 - (2100);
    s2 = v0 + 1332;
    s5 = v1 + 2100;
    goto L_0880B150;
L_0880B150:;
    a1 = s4 + 0;
    a0 = s1 + 0;
    v0 = func_08808160(a0, a1);
    goto L_0880B15C;
L_0880B15C:;
    a1 = v0 + 0;
    a2 = s5 + 0;
    a0 = sp + 80;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0880B1F0; }
    goto L_0880B170;
L_0880B170:;
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;__auto_type vr_t_ = func_088F7724(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880B178;
L_0880B178:;
    f2 = BITSF(LD32(s2));
    f3 = BITSF(LD32(sp+80));
    f0 = BITSF(LD32(sp+84));
    f6 = BITSF(LD32(s2+4));
    f7 = BITSF(LD32(s2+8));
    f3 = f3 + f2;
    f4 = BITSF(LD32(sp+88));
    f5 = BITSF(LD32(sp+96));
    f0 = f0 + f2;
    f1 = BITSF(LD32(sp+92));
    f2 = BITSF(LD32(sp+100));
    v1 = LD32(sp+256);
    f4 = f4 + f6;
    f5 = f5 + f7;
    f1 = f1 + f6;
    f2 = f2 + f7;
    v1 = v1 + 1;
    v0 = 1;
    a1 = sp + 80;
    ST32(sp+256, v1);
    a0 = sp + 48;
    ST32(sp+84, FBITS(f0));
    ST32(sp+80, FBITS(f3));
    ST32(sp+92, FBITS(f1));
    ST32(sp+88, FBITS(f4));
    ST32(sp+100, FBITS(f2));
    cnd_ = v1 == v0;
    ST32(sp+96, FBITS(f5));
    if (cnd_) { goto L_0880B490; }
    goto L_0880B1E8;
L_0880B1E8:;
    f0 = func_08AA1680(a0, a1);
    goto L_0880B1F0;
L_0880B1F0:;
    s4 = s4 + 1;
    v0 = s4 < s7;
    s5 = s5 + 36;
    cnd_ = v0 != 0;
    s2 = s2 + 12;
    if (cnd_) { goto L_0880B150; }
    goto L_0880B204;
L_0880B204:;
    v1 = LD32(sp+256);
    cnd_ = v1 != 0;
    f2 = BITSF(LD32(sp+52));
    if (cnd_) { goto L_0880B3FC; }
    goto L_0880B210;
L_0880B210:;
    v1 = s3 + 12;
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+16));
    f7 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(s3+12));
    f0 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+20));
    f7 = f7 - f4;
    f0 = f0 - f2;
    f3 = f3 - f1;
    {u32 a_=sp+(272);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v0 = FBITS(f7);
    {vr64=BITSF(v0);}
    v0 = FBITS(f0);
    {vr65=BITSF(v0);}
    v0 = FBITS(f3);
    {vr66=BITSF(v0);}
    {float s0=vr64;float s1=vr65;float s2=vr66;float t0=vr64;float t1=vr65;float t2=vr66;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr64=sum;}
    v0 = D_08AEB4AC - (-19284);
    ST32(sp+36, FBITS(f0));
    s2 = s1 + 356;
    {u32 a_=sp+(352);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(v0-19284));
    ST32(sp+40, FBITS(f3));
    {float s0=vr64;float d0=sqrtf(s0);vr64=d0;}
    {v0=FBITS(vr64);}
    f0 = BITSF(v0);
    {u32 a_=sp+(288);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f1 = f0 * f4;
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[124]=d0;v[125]=d1;v[126]=d2;v[127]=d3;}
    ST32(s1+368, FBITS(f1));
    f5 = BITSF(LD32(v1+20));
    f3 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+16));
    f6 = BITSF(LD32(s3+12));
    f0 = f0 + f2;
    f1 = f1 + f5;
    f6 = f6 + f3;
    f0 = f0 * f4;
    f1 = f1 * f4;
    f6 = f6 * f4;
    ST32(sp+36, FBITS(f0));
    v1 = FBITS(f0);
    ST32(s1+356, FBITS(f6));
    v0 = FBITS(f6);
    {v[4]=BITSF(v0);}
    ST32(sp+40, FBITS(f1));
    v0 = FBITS(f1);
    {v[5]=BITSF(v1);}
    ST32(s2+4, FBITS(f0));
    {v[6]=BITSF(v0);}
    ST32(s2+8, FBITS(f1));
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s0+12);
    v1 = LD32(s0+16);
    {u32 a_=sp+(304);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = LD32(s0+32);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+20);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    v0 = LD32(s0+24);
    v1 = LD32(s0+28);
    {u32 a_=sp+(400);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[112]*t0;o0+=v[113]*t1;o0+=v[114]*t2;float o1=0;o1+=v[116]*t0;o1+=v[117]*t1;o1+=v[118]*t2;float o2=0;o2+=v[120]*t0;o2+=v[121]*t1;o2+=v[122]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {v0=FBITS(vr0);}
    f5 = BITSF(v0);
    ST32(sp+32, FBITS(f7));
    {v1=FBITS(vr1);}
    {v0=FBITS(vr2);}
    ST32(sp+32, FBITS(f6));
    f4 = BITSF(v1);
    f3 = BITSF(v0);
    ST32(sp, FBITS(f5));
    ST32(sp+4, v1);
    f1 = BITSF(LD32(fp+8));
    f2 = BITSF(LD32(fp));
    f0 = BITSF(LD32(fp+4));
    f1 = f3 + f1;
    f2 = f5 + f2;
    f0 = f4 + f0;
    ST32(sp+8, v0);
    ST32(s1+356, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, v0);
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    ST32(sp+32, FBITS(f2));
    goto L_0880B3D0;
L_0880B3D0:;
    cnd_ = s6 == 0;
    s0 = s1 + 368;
    if (cnd_) { goto L_0880B0DC; }
    goto L_0880B3D8;
L_0880B3D8:;
    a0 = s6 + 0;
    goto L_0880B3DC;
L_0880B3DC:;
    a1 = s2 + 0;
    a2 = s0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[64]=vr64;v[65]=vr65;v[66]=vr66;func_0880E320(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr64=v[64];vr65=v[65];vr66=v[66];});
    goto L_0880B3E8;
L_0880B3E8:;
    s6 = LD32(s6+8);
    cnd_ = s6 != 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_0880B3DC; }
    goto L_0880B3F4;
L_0880B3F4:;
    goto L_0880B0E0;
L_0880B3FC:;
    f1 = BITSF(LD32(sp+60));
    f0 = BITSF(LD32(sp+68));
    f5 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(sp+56));
    f4 = BITSF(LD32(sp+64));
    f8 = f2 - f5;
    f6 = f1 - f3;
    f7 = f0 - f4;
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = FBITS(f8);
    v0 = FBITS(f6);
    {vr0=BITSF(v1);}
    v1 = FBITS(f7);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f5 = f5 + f2;
    f3 = f3 + f1;
    f4 = f4 + f0;
    v0 = D_08AEB4AC - (-19284);
    f2 = BITSF(LD32(v0-19284));
    s2 = s1 + 356;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f4 = f4 * f2;
    f5 = f5 * f2;
    f3 = f3 * f2;
    f1 = f0 * f2;
    ST32(s1+356, FBITS(f5));
    ST32(s1+368, FBITS(f1));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(s2+4, FBITS(f3));
    ST32(s2+8, FBITS(f4));
    ST32(sp+32, FBITS(f5));
    goto L_0880B3D0;
L_0880B490:;
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    goto L_0880B1F0;
L_0880B4C4:;
    f12 = BITSF(LD32(v0-19288));
    a1 = a3 + 0;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[64]=vr64;v[65]=vr65;v[66]=vr66;__auto_type vr_t_ = func_088155D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr64=v[64];vr65=v[65];vr66=v[66];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B4D4;
L_0880B4D4:;
    ST32(s1+220, s2);
    goto L_0880AEFC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[64]=vr64;v[65]=vr65;v[66]=vr66;
}

/* 0880B4DC */
float func_0880B4DC(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B4DC:;
    sp = sp - 16;
    s2 = a2 + 0;
    a2 = a1 + 0;
    a3 = LD32(a0+16);
    cnd_ = a3 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880B554; }
    goto L_0880B504;
L_0880B504:;
    v0 = D_08B285AC - (-31316);
    s1 = LD32(v0-31316);
    v1 = LD32(s0+224);
    cnd_ = v1 == s1;
    a0 = a0 + 76;
    if (cnd_) { goto L_0880B534; }
    goto L_0880B518;
L_0880B518:;
    v0 = LD32(a0+16);
    a1 = a3 + 0;
    t0 = 0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = s2 + 0;
    if (cnd_) { goto L_0880B584; }
    goto L_0880B530;
L_0880B530:;
    ST32(s0+224, s1);
    goto L_0880B534;
L_0880B534:;
    v0 = LD_U8(s0+13);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880B558; }
    goto L_0880B540;
L_0880B540:;
    v1 = LD32(s0+16);
    v0 = LD32(v1+4);
    v0 = v0 - 1;
    cnd_ = s2 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880B56C; }
    goto L_0880B554;
L_0880B554:;
    goto L_0880B558;
L_0880B558:;
    sp = sp + 16;
    return f0;
L_0880B56C:;
    v0 = LD32(s0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B57C;
L_0880B57C:;
    goto L_0880B558;
L_0880B584:;
    v0 = D_08AEB4B0 - (-19280);
    f12 = BITSF(LD32(v0-19280));
    { rv_t r_ = func_088162A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B590;
L_0880B590:;
    ST32(s0+224, s1);
    goto L_0880B534;
}

/* 0880B598 */
rv_t func_0880B598(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B598:;
    sp = sp - 16;
    v0 = LD32(a0+256);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880B5BC; }
    goto L_0880B5B0;
L_0880B5B0:;
    v0 = LD32(a0+260);
    cnd_ = v0 != 0;
    a0 = a0 + 256;
    if (cnd_) { goto L_0880B5D0; }
    goto L_0880B5BC;
L_0880B5BC:;
    ST32(s0+260, 0);
    goto L_0880B5C0;
L_0880B5C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880B5D0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B5D8;
L_0880B5D8:;
    ST32(s0+260, 0);
    goto L_0880B5C0;
}

/* 0880B5E0 */
rv_t func_0880B5E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B5E0:;
    sp = sp - 16;
    s1 = a0 ^ 0x1;
    v1 = s1 < 0x1u;
    s0 = a1 ^ 0xffff;
    v0 = s0 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0880B674; }
    goto L_0880B610;
L_0880B610:;
    v1 = s1 < 0x1u;
    goto L_0880B614;
L_0880B614:;
    v0 = s0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = s0 < 0x1u;
    if (cnd_) { goto L_0880B63C; }
    goto L_0880B624;
L_0880B624:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 32;
    goto L_0880B630;
L_0880B630:;
    cnd_ = v0 != v1;
    v0 = v0 - 32;
    if (cnd_) { goto L_0880B630; }
    goto L_0880B638;
L_0880B638:;
    v0 = s0 < 0x1u;
    goto L_0880B63C;
L_0880B63C:;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = D_08B204FC - (1276);
    if (cnd_) { goto L_0880B664; }
    goto L_0880B64C;
L_0880B64C:;
    goto L_0880B650;
L_0880B650:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880B664:;
    a0 = a0 + 1276;
    { rv_t r_ = func_08805128(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B66C;
L_0880B66C:;
    goto L_0880B650;
L_0880B674:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    func_08804FA8(a0);
    goto L_0880B680;
L_0880B680:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 32;
    goto L_0880B68C;
L_0880B68C:;
    cnd_ = v0 != v1;
    v0 = v0 - 32;
    if (cnd_) { goto L_0880B68C; }
    goto L_0880B694;
L_0880B694:;
    v1 = s1 < 0x1u;
    goto L_0880B614;
}

/* 0880B69C */
rv_t func_0880B69C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B69C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0880B5E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B6B0;
L_0880B6B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880B6BC */
rv_t func_0880B6BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B6BC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0880B5E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B6D0;
L_0880B6D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880B6DC */
rv_t func_0880B6DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B6DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08805AC8(a0, a1);
    goto L_0880B6F0;
L_0880B6F0:;
    v0 = D_08AF09C8 - (2504);
    v0 = v0 + 2504;
    ST32(s0, v0);
    v0 = 1;
    a0 = s0 + 0;
    ST8(s0+13, v0);
    { rv_t r_ = func_0880B7A4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B70C;
L_0880B70C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880B71C */
rv_t func_0880B71C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B71C:;
    v0 = D_08AF09C8 - (2504);
    v0 = v0 + 2504;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08805FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B738;
L_0880B738:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880B744 */
rv_t func_0880B744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B744:;
    v0 = D_08AF09C8 - (2504);
    v0 = v0 + 2504;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08805FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B760;
L_0880B760:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880B76C */
rv_t func_0880B76C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880B76C:;
    v0 = D_08AF09C8 - (2504);
    v0 = v0 + 2504;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08805FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B78C;
L_0880B78C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880B794;
L_0880B794:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880B7A4 */
rv_t func_0880B7A4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0880B7A4:;
    f0 = BITSF(0);
    v0 = a0 + 372;
    v1 = a0 + 384;
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    ST32(a0+384, FBITS(f0));
    ST32(v1+4, FBITS(f0));
    ST32(a0+372, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 0880B7CC */
rv_t func_0880B7CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr8 = v[8], vr11 = v[11], vr16 = v[16], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr107 = v[107], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 544);
L_0880B7CC:;
    sp = sp - 544;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s2 = a0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;v[16]=vr16;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr8=v[8];vr11=v[11];vr16=v[16];vr96=v[96];vr97=v[97];vr98=v[98];vr100=v[100];vr101=v[101];vr102=v[102];vr103=v[103];vr104=v[104];vr105=v[105];vr106=v[106];vr107=v[107];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880B81C;
L_0880B81C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_0880BF3C; }
    goto L_0880B824;
L_0880B824:;
    a3 = LD32(v0+20);
    t0 = LD32(v0+12);
    t1 = LD32(v0+8);
    t2 = LD32(v0+4);
    t3 = LD32(v0);
    s6 = s2 + 112;
    s5 = LD32(s6+92);
    v0 = a3 << 3;
    v0 = v0 - a3;
    v1 = t0 << 3;
    a0 = t1 << 3;
    a1 = t2 << 3;
    a2 = t3 << 3;
    v0 = v0 << 2;
    v1 = v1 - t0;
    a0 = a0 - t1;
    a1 = a1 - t2;
    a2 = a2 - t3;
    v0 = s5 + v0;
    v0 = v0 + 12;
    v1 = v1 << 2;
    a0 = a0 << 2;
    a1 = a1 << 2;
    a2 = a2 << 2;
    ST32(sp+112, v0);
    v1 = s5 + v1;
    a0 = s5 + a0;
    a1 = s5 + a1;
    a2 = s5 + a2;
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    v1 = v1 + 12;
    a0 = a0 + 12;
    a1 = a1 + 12;
    a2 = a2 + 12;
    ST32(sp+132, v0);
    v0 = (u32)-1;
    ST32(sp+116, v1);
    ST32(sp+120, a0);
    ST32(sp+124, a1);
    ST32(sp+128, a2);
    t0 = LD32(s4+16);
    f3 = BITSF(LD32(s2+372));
    f4 = BITSF(LD32(s2+376));
    f22 = BITSF(LD32(s2+384));
    cnd_ = t0 == v0;
    f21 = BITSF(LD32(s2+388));
    if (cnd_) { goto L_0880B8F8; }
    goto L_0880B8E0;
L_0880B8E0:;
    v0 = t0 << 3;
    v0 = v0 - t0;
    v0 = v0 << 2;
    v0 = s5 + v0;
    v0 = v0 + 12;
    ST32(sp+132, v0);
    goto L_0880B8F8;
L_0880B8F8:;
    v0 = ~(0 | t0);
    s7 = 3;
    v1 = 4;
    if (v0 != 0) s7 = v1;
    a0 = (s32)s7 < 2;
    cnd_ = a0 != 0;
    s3 = 2;
    if (cnd_) { goto L_0880CA90; }
    goto L_0880B914;
L_0880B914:;
    v0 = D_08AEB4C0 - (-19264);
    f2 = BITSF(LD32(v0-19264));
    v1 = D_08AEB4C4 - (-19260);
    v0 = D_08AEB4C8 - (-19256);
    f5 = f3 * f2;
    f0 = BITSF(LD32(v0-19256));
    f1 = BITSF(LD32(v1-19260));
    f2 = f4 * f2;
    ST32(sp+176, FBITS(f5));
    f23 = f4 * f0;
    f5 = f3 * f1;
    f4 = f4 * f1;
    {vr0=0.31830988618f;}
    v0 = D_08AEB4BC - (-19268);
    f24 = f3 * f0;
    ST32(sp+272, FBITS(f5));
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    fp = sp + 64;
    ST32(sp+136, FBITS(f2));
    ST32(sp+224, FBITS(f4));
    a2 = LD32(s6+92);
    f20 = BITSF(LD32(v0-19268));
    v0 = s3 << 2;
    goto L_0880B970;
L_0880B970:;
    v0 = v0 + s4;
    a0 = LD32(v0);
    v1 = a0 << 3;
    v1 = v1 - a0;
    v1 = v1 << 2;
    a1 = v1 + s5;
    v0 = LD32(a1+12);
    s1 = a2 + v1;
    a0 = a1 + 12;
    ST32(s1+12, v0);
    s0 = s1 + 12;
    v0 = LD32(a0+4);
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    ST32(s0+8, v1);
    v0 = LD32(a0+12);
    ST32(s0+12, v0);
    v0 = 2;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    cnd_ = s3 == v0;
    ST32(s1+4, FBITS(f2));
    if (cnd_) { goto L_0880C678; }
    goto L_0880B9D4;
L_0880B9D4:;
    v0 = 3;
    cnd_ = s3 == v0;
    v0 = 4;
    if (cnd_) { goto L_0880C400; }
    goto L_0880B9E0;
L_0880B9E0:;
    cnd_ = s3 == v0;
    if (cnd_) { f0 = BITSF(LD32(s1+12)); goto L_0880BF80; }
    goto L_0880B9E8;
L_0880B9E8:;
    s3 = s3 + 1;
    v0 = (s32)s7 < (s32)s3;
    cnd_ = v0 == 0;
    v0 = s3 << 2;
    if (cnd_) { goto L_0880B970; }
    goto L_0880B9F8;
L_0880B9F8:;
    v0 = LD32(s4+24);
    {u32 a_=sp+(400);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = FBITS(f21);
    s1 = v0 << 3;
    s1 = s1 - v0;
    s1 = s1 << 2;
    t1 = s1 + s5;
    v0 = LD32(t1+12);
    s1 = a2 + s1;
    t0 = t1 + 12;
    ST32(s1+12, v0);
    s0 = s1 + 12;
    {vr0=BITSF(v1);}
    v0 = LD32(t0+4);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(432);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(s0+4, v0);
    v0 = FBITS(f22);
    {vr0=BITSF(v0);}
    v0 = LD32(t0+8);
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a3 = LD32(sp+112);
    ST32(s0+8, v0);
    a0 = fp + 0;
    a1 = s2 + 0;
    v1 = LD32(t0+12);
    a2 = sp + 96;
    ST32(s0+12, v1);
    f0 = BITSF(LD32(t1+8));
    f1 = BITSF(LD32(t1));
    f2 = BITSF(LD32(t1+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    f0 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s0+12));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp+76, FBITS(f3));
    ST32(sp+96, v0);
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    ST32(sp+104, v0);
    v1 = LD32(sp+76);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BAD0;
L_0880BAD0:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+132);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BB04;
L_0880BB04:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+116);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BB38;
L_0880BB38:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+120);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BB6C;
L_0880BB6C:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+124);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BBA0;
L_0880BBA0:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+128);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BBD4;
L_0880BBD4:;
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[4]=d0;}
    {u32 a_=sp+(432);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[12]=d0;}
    v0 = D_08AEB4BC - (-19268);
    f5 = BITSF(LD32(v0-19268));
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp+80, 0);
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[12];float d0=cosf(s0*1.57079632679f);vr16=d0;}
    ST32(sp+84, FBITS(f5));
    {float s0=v[12];float d0=sinf(s0*1.57079632679f);v[12]=d0;}
    ST32(sp+88, 0);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(sp+(80)));}
    {vr117=BITSF(LD32(sp+(84)));}
    {vr118=BITSF(LD32(sp+(88)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(vr121));}
    {ST32(sp+(88),FBITS(vr122));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr8;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    f3 = BITSF(v0);
    {v1=FBITS(vr2);}
    ST32(sp+64, FBITS(f2));
    f1 = BITSF(v1);
    ST32(sp+68, FBITS(f3));
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    ST32(sp+72, FBITS(f1));
    {vr8=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+76, FBITS(f4));
    {v[9]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+64);
    {vr11=BITSF(v1);}
    v1 = LD32(sp+68);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {v1=FBITS(v[4]);}
    f4 = BITSF(v0);
    f3 = BITSF(v1);
    {v0=FBITS(v[5]);}
    ST32(sp+20, v0);
    {v1=FBITS(v[6]);}
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+16, FBITS(f3));
    ST32(sp+28, FBITS(f4));
    ST32(sp+24, v1);
    v0 = LD32(sp+20);
    a0 = LD32(sp+16);
    v1 = LD32(sp+24);
    ST32(sp+52, v0);
    v0 = LD32(sp+28);
    ST32(sp+56, v1);
    ST32(sp+60, v0);
    ST32(sp+48, a0);
    ST32(s1+12, a0);
    v0 = LD32(sp+52);
    ST32(s0+4, v0);
    v1 = LD32(sp+56);
    ST32(s0+8, v1);
    v0 = LD32(sp+60);
    ST32(s0+12, v0);
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, 0);
    ST32(sp+88, 0);
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(sp+(80)));}
    {vr117=BITSF(LD32(sp+(84)));}
    {vr118=BITSF(LD32(sp+(88)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(vr121));}
    {ST32(sp+(88),FBITS(vr122));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr16;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    {v1=FBITS(vr2);}
    f3 = BITSF(v0);
    f1 = BITSF(v1);
    ST32(sp+48, FBITS(f2));
    v1 = FBITS(f3);
    ST32(sp+56, FBITS(f1));
    v0 = FBITS(f2);
    {vr8=BITSF(v0);}
    ST32(sp+52, FBITS(f3));
    {v[9]=BITSF(v1);}
    v0 = FBITS(f1);
    ST32(sp+60, FBITS(f4));
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+52);
    {vr11=BITSF(v1);}
    v1 = LD32(sp+56);
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    v0 = LD32(sp+60);
    v1 = LD32(sp+48);
    ST32(sp+28, v0);
    ST32(sp+16, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {v1=FBITS(v[4]);}
    f4 = BITSF(v0);
    f3 = BITSF(v1);
    {v0=FBITS(v[5]);}
    ST32(sp+4, v0);
    {v1=FBITS(v[6]);}
    v0 = LD32(sp+4);
    ST32(sp, FBITS(f3));
    ST32(sp+8, v1);
    ST32(sp+12, FBITS(f4));
    ST32(sp+20, v0);
    v1 = LD32(sp+8);
    v0 = LD32(sp+12);
    a0 = LD32(sp);
    ST32(sp+24, v1);
    ST32(sp+28, v0);
    ST32(sp+16, a0);
    ST32(s1+12, a0);
    v0 = LD32(sp+20);
    ST32(s0+4, v0);
    v1 = LD32(sp+24);
    ST32(s0+8, v1);
    v0 = LD32(sp+28);
    ST32(s0+12, v0);
    goto L_0880BF3C;
L_0880BF3C:;
    sp = sp + 544;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;v[16]=vr16;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return (rv_t){ v0, v1, f0 }; }
L_0880BF80:;
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s0+12));
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f23);
    ST32(sp+68, FBITS(f1));
    {vr0=BITSF(v0);}
    v0 = FBITS(f24);
    ST32(sp+72, FBITS(f2));
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+76, FBITS(f3));
    {vr0=BITSF(v0);}
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+116);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880BFFC;
L_0880BFFC:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+120);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C030;
L_0880C030:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+124);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C064;
L_0880C064:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+128);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C098;
L_0880C098:;
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[4]=d0;}
    {u32 a_=sp+(368);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[12]=d0;}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    ST32(sp+80, 0);
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[12];float d0=cosf(s0*1.57079632679f);vr16=d0;}
    ST32(sp+84, FBITS(f20));
    {float s0=v[12];float d0=sinf(s0*1.57079632679f);v[12]=d0;}
    ST32(sp+88, 0);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(sp+(80)));}
    {vr117=BITSF(LD32(sp+(84)));}
    {vr118=BITSF(LD32(sp+(88)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(vr121));}
    {ST32(sp+(88),FBITS(vr122));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr8;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    f3 = BITSF(v0);
    {v1=FBITS(vr2);}
    ST32(sp+64, FBITS(f2));
    f1 = BITSF(v1);
    ST32(sp+76, FBITS(f4));
    v1 = FBITS(f3);
    ST32(sp+72, FBITS(f1));
    v0 = FBITS(f2);
    {vr8=BITSF(v0);}
    ST32(sp+68, FBITS(f3));
    {v[9]=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+64);
    {vr11=BITSF(v1);}
    v1 = LD32(sp+68);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v1=FBITS(v[4]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[7]);}
    f4 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    {v0=FBITS(v[5]);}
    {v1=FBITS(v[6]);}
    ST32(sp+20, v0);
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_0880C224;
L_0880C224:;
    ST32(sp+24, v1);
    ST32(sp+28, FBITS(f4));
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    a0 = LD32(sp+16);
    ST32(sp+52, v0);
    v0 = LD32(sp+28);
    ST32(sp+56, v1);
    ST32(sp+60, v0);
    ST32(sp+48, a0);
    ST32(s1+12, a0);
    v0 = LD32(sp+52);
    ST32(s0+4, v0);
    v1 = LD32(sp+56);
    ST32(s0+8, v1);
    v0 = LD32(sp+60);
    ST32(s0+12, v0);
    ST32(sp+80, FBITS(f20));
    ST32(sp+84, 0);
    ST32(sp+88, 0);
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(sp+(80)));}
    {vr117=BITSF(LD32(sp+(84)));}
    {vr118=BITSF(LD32(sp+(88)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(vr121));}
    {ST32(sp+(88),FBITS(vr122));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr16;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    {v1=FBITS(vr2);}
    f3 = BITSF(v0);
    f1 = BITSF(v1);
    ST32(sp+60, FBITS(f4));
    v1 = FBITS(f3);
    ST32(sp+56, FBITS(f1));
    v0 = FBITS(f2);
    {vr8=BITSF(v0);}
    ST32(sp+52, FBITS(f3));
    {v[9]=BITSF(v1);}
    v0 = FBITS(f1);
    ST32(sp+48, FBITS(f2));
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+52);
    {vr11=BITSF(v1);}
    v1 = LD32(sp+56);
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    v0 = LD32(sp+60);
    v1 = LD32(sp+48);
    a2 = LD32(s6+92);
    ST32(sp+28, v0);
    ST32(sp+16, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {v1=FBITS(v[4]);}
    f4 = BITSF(v0);
    f3 = BITSF(v1);
    {v0=FBITS(v[5]);}
    ST32(sp+4, v0);
    {v1=FBITS(v[6]);}
    v0 = LD32(sp+4);
    ST32(sp, FBITS(f3));
    ST32(sp+8, v1);
    ST32(sp+12, FBITS(f4));
    ST32(sp+20, v0);
    v1 = LD32(sp+8);
    v0 = LD32(sp+12);
    a0 = LD32(sp);
    ST32(sp+24, v1);
    ST32(sp+28, v0);
    ST32(sp+16, a0);
    ST32(s1+12, a0);
    v0 = LD32(sp+20);
    ST32(s0+4, v0);
    v1 = LD32(sp+24);
    ST32(s0+8, v1);
    v0 = LD32(sp+28);
    goto L_0880C3F8;
L_0880C3F8:;
    ST32(s0+12, v0);
    goto L_0880B9E8;
L_0880C400:;
    f0 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s0+12));
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = fp + 0;
    ST32(sp+68, FBITS(f1));
    a1 = s2 + 0;
    a2 = sp + 96;
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, FBITS(f3));
    v0 = LD32(sp+224);
    v1 = LD32(sp+68);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+272);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+64);
    a3 = LD32(sp+120);
    ST32(sp+100, v1);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+76);
    ST32(sp+96, v0);
    v0 = LD32(sp+72);
    ST32(sp+108, v1);
    ST32(sp+104, v0);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C480;
L_0880C480:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+124);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C4B4;
L_0880C4B4:;
    a0 = fp + 0;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a3 = LD32(sp+128);
    ST32(sp+96, v0);
    a1 = s2 + 0;
    a2 = sp + 96;
    v0 = LD32(sp+72);
    ST32(sp+100, v1);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C4E8;
L_0880C4E8:;
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[4]=d0;}
    {u32 a_=sp+(304);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[12]=d0;}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    ST32(sp+80, 0);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[12];float d0=cosf(s0*1.57079632679f);vr16=d0;}
    ST32(sp+84, FBITS(f20));
    {float s0=v[12];float d0=sinf(s0*1.57079632679f);v[12]=d0;}
    ST32(sp+88, 0);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(sp+(80)));}
    {vr117=BITSF(LD32(sp+(84)));}
    {vr118=BITSF(LD32(sp+(88)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(vr121));}
    {ST32(sp+(88),FBITS(vr122));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr8;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    f3 = BITSF(v0);
    {v1=FBITS(vr2);}
    ST32(sp+64, FBITS(f2));
    f1 = BITSF(v1);
    ST32(sp+76, FBITS(f4));
    v1 = FBITS(f3);
    ST32(sp+72, FBITS(f1));
    v0 = FBITS(f2);
    {vr8=BITSF(v0);}
    ST32(sp+68, FBITS(f3));
    {v[9]=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+64);
    {vr11=BITSF(v1);}
    v1 = LD32(sp+68);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v1=FBITS(v[4]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[7]);}
    f4 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    {v0=FBITS(v[5]);}
    {v1=FBITS(v[6]);}
    ST32(sp+20, v0);
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_0880C224;
L_0880C678:;
    f0 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s0+12));
    ST32(sp+16, FBITS(f0));
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = sp + 16;
    ST32(sp+20, FBITS(f1));
    a1 = s2 + 0;
    a2 = sp + 0;
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    v1 = LD32(sp+136);
    v0 = LD32(sp+176);
    {vr0=BITSF(v1);}
    v1 = LD32(sp+20);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+16);
    a3 = LD32(sp+124);
    ST32(sp+4, v1);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+28);
    ST32(sp, v0);
    v0 = LD32(sp+24);
    ST32(sp+12, v1);
    ST32(sp+8, v0);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C6F8;
L_0880C6F8:;
    a0 = sp + 16;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    a3 = LD32(sp+128);
    ST32(sp, v0);
    a2 = sp + 0;
    a1 = s2 + 0;
    v0 = LD32(sp+24);
    ST32(sp+4, v1);
    v1 = LD32(sp+28);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr8=v[8];vr_t_; });
    goto L_0880C72C;
L_0880C72C:;
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[4]=d0;}
    {u32 a_=sp+(208);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float t0=vr0;float d0=s0*t0;v[12]=d0;}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    ST32(sp+32, 0);
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[12];float d0=cosf(s0*1.57079632679f);vr16=d0;}
    ST32(sp+36, FBITS(f20));
    {float s0=v[12];float d0=sinf(s0*1.57079632679f);v[12]=d0;}
    ST32(sp+40, 0);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr115=BITSF(LD32(sp+(12)));}
    {vr116=BITSF(LD32(sp+(32)));}
    {vr117=BITSF(LD32(sp+(36)));}
    {vr118=BITSF(LD32(sp+(40)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(32),FBITS(vr120));}
    {ST32(sp+(36),FBITS(vr121));}
    {ST32(sp+(40),FBITS(vr122));}
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+40);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr8;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    f3 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    {v1=FBITS(vr2);}
    f1 = BITSF(v1);
    ST32(sp+20, FBITS(f3));
    v0 = FBITS(f2);
    ST32(sp+24, FBITS(f1));
    v1 = FBITS(f3);
    {vr8=BITSF(v0);}
    ST32(sp+28, FBITS(f4));
    v0 = FBITS(f1);
    {v[9]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+16);
    {vr11=BITSF(v1);}
    v1 = LD32(sp+20);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v1=FBITS(v[4]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[7]);}
    f4 = BITSF(v0);
    ST32(sp+64, FBITS(f3));
    {v0=FBITS(v[5]);}
    {v1=FBITS(v[6]);}
    ST32(sp+68, v0);
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+68);
    ST32(sp+72, v1);
    a0 = LD32(sp+64);
    ST32(sp+52, v0);
    v1 = LD32(sp+72);
    v0 = LD32(sp+76);
    ST32(sp+48, a0);
    ST32(sp+60, v0);
    ST32(sp+56, v1);
    ST32(s1+12, a0);
    v0 = LD32(sp+52);
    ST32(s0+4, v0);
    v1 = LD32(sp+56);
    ST32(s0+8, v1);
    v0 = LD32(sp+60);
    ST32(s0+12, v0);
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    ST32(sp+80, FBITS(f20));
    ST32(sp+84, 0);
    ST32(sp+88, 0);
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr115=BITSF(LD32(sp+(12)));}
    {vr116=BITSF(LD32(sp+(32)));}
    {vr117=BITSF(LD32(sp+(36)));}
    {vr118=BITSF(LD32(sp+(40)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr103=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr103;vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;vr107=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=vr107;vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(32),FBITS(vr120));}
    {ST32(sp+(36),FBITS(vr121));}
    {ST32(sp+(40),FBITS(vr122));}
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+40);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr16;float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {v1=FBITS(vr0);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    {v0=FBITS(vr1);}
    {v1=FBITS(vr2);}
    f3 = BITSF(v0);
    f1 = BITSF(v1);
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {vr8=BITSF(v0);}
    ST32(sp+68, FBITS(f3));
    {v[9]=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f4);
    {v[10]=BITSF(v0);}
    ST32(sp+64, FBITS(f2));
    {vr11=BITSF(v1);}
    ST32(sp+72, FBITS(f1));
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    a2 = LD32(s6+92);
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    v0 = LD32(sp+76);
    v1 = LD32(sp+64);
    ST32(sp+60, v0);
    ST32(sp+48, v1);
    v0 = LD32(s1+12);
    v1 = LD32(s0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s0+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s0+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=v[9];float t2=v[10];float t3=vr11;float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {v1=FBITS(v[4]);}
    f4 = BITSF(v0);
    f3 = BITSF(v1);
    {v0=FBITS(v[5]);}
    ST32(sp+100, v0);
    {v1=FBITS(v[6]);}
    v0 = LD32(sp+100);
    ST32(sp+96, FBITS(f3));
    ST32(sp+104, v1);
    ST32(sp+108, FBITS(f4));
    ST32(sp+52, v0);
    v1 = LD32(sp+104);
    v0 = LD32(sp+108);
    a0 = LD32(sp+96);
    ST32(sp+56, v1);
    ST32(sp+60, v0);
    ST32(sp+48, a0);
    ST32(s1+12, a0);
    v0 = LD32(sp+52);
    ST32(s0+4, v0);
    v1 = LD32(sp+56);
    ST32(s0+8, v1);
    v0 = LD32(sp+60);
    goto L_0880C3F8;
L_0880CA90:;
    {vr0=0.31830988618f;}
    a2 = LD32(s6+92);
    fp = sp + 64;
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_0880B9F8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[8]=vr8;v[11]=vr11;v[16]=vr16;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 0880CAA4 */
float func_0880CAA4(u32 a0, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_0880CAA4:;
    sp = sp - 144;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f5 = BITSF(LD32(a3));
    f6 = BITSF(LD32(a3+4));
    f7 = BITSF(LD32(a3+8));
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    f0 = BITSF(LD32(a3+12));
    f2 = BITSF(LD32(a2+12));
    f8 = BITSF(LD32(a2));
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f7 = BITSF(FBITS(f7) ^ 0x80000000u);
    f9 = BITSF(LD32(a2+4));
    f10 = BITSF(LD32(a2+8));
    f20 = f5 * f2;
    f17 = f8 * f0;
    f21 = f6 * f2;
    f22 = f7 * f2;
    f18 = f9 * f0;
    f19 = f10 * f0;
    f14 = f17 + f20;
    v0 = FBITS(f5);
    v1 = FBITS(f8);
    a3 = FBITS(f9);
    t0 = FBITS(f10);
    a1 = FBITS(f6);
    a2 = FBITS(f7);
    {v[4]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v[12]=BITSF(v1);}
    {v[8]=BITSF(v0);}
    {v[5]=BITSF(a3);}
    {v[1]=BITSF(a1);}
    {v[6]=BITSF(t0);}
    {v[2]=BITSF(a2);}
    {v[13]=BITSF(a3);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v[9]=BITSF(a1);}
    {v0=FBITS(v[4]);}
    {v[14]=BITSF(t0);}
    f11 = BITSF(v0);
    {v[10]=BITSF(a2);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v0=FBITS(v[2]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    f15 = f18 + f21;
    f16 = f19 + f22;
    f2 = f2 * f0;
    {v0=FBITS(v[1]);}
    f12 = f14 + f3;
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    f13 = f16 + f4;
    f0 = f15 + f0;
    f2 = f2 - f11;
    ST32(sp+80, FBITS(f20));
    v0 = a0 + 0;
    ST32(sp+84, FBITS(f21));
    ST32(sp+88, FBITS(f22));
    ST32(a0, FBITS(f12));
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f9));
    ST32(sp+8, FBITS(f10));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f6));
    ST32(sp+24, FBITS(f7));
    ST32(sp+64, FBITS(f17));
    ST32(sp+68, FBITS(f18));
    ST32(sp+72, FBITS(f19));
    ST32(sp+48, FBITS(f14));
    ST32(sp+52, FBITS(f15));
    ST32(sp+56, FBITS(f16));
    ST32(sp+112, FBITS(f3));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f4));
    ST32(sp+96, FBITS(f3));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f4));
    ST32(sp+32, FBITS(f12));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f13));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f13));
    ST32(a0+12, FBITS(f2));
    sp = sp + 144;
    return f0;
}

/* 0880CC1C */
rv_t func_0880CC1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880CC1C:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a1 + 0;
    a3 = a3 & 0xff;
    t0 = t0 & 0xff;
    s1 = a0 + 0;
    { rv_t r_ = func_08805D74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CC44;
L_0880CC44:;
    v0 = LD_U8(s0+13);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880CC80; }
    goto L_0880CC50;
L_0880CC50:;
    v0 = LD32(s0+372);
    ST32(s1+372, v0);
    v1 = LD32(s0+376);
    ST32(s1+376, v1);
    v0 = LD32(s0+380);
    ST32(s1+380, v0);
    v1 = LD32(s0+384);
    ST32(s1+384, v1);
    v0 = LD32(s0+388);
    ST32(s1+388, v0);
    v1 = LD32(s0+392);
    ST32(s1+392, v1);
    goto L_0880CC80;
L_0880CC80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880CC90 */
u64 func_0880CC90(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880CC90:;
    sp = sp - 16;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0880CD10; }
    goto L_0880CC9C;
L_0880CC9C:;
    v0 = LD32(a0);
    a1 = LD32(a0+4);
    v1 = LD32(v0+52);
    cnd_ = v1 == 0;
    t0 = v0 + 52;
    if (cnd_) { goto L_0880CCDC; }
    goto L_0880CCB0;
L_0880CCB0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0880CCB8;
L_0880CCB8:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0880CCE8; }
    goto L_0880CCD0;
L_0880CCD0:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0880CCB8; }
    goto L_0880CCDC;
L_0880CCDC:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0880CD00; }
    goto L_0880CCE8;
L_0880CCE8:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880CCF4; }
    goto L_0880CCF0;
L_0880CCF0:;
    v0 = LD32(a3);
    goto L_0880CCF4;
L_0880CCF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0880CD00:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880CD08;
L_0880CD08:;
    a3 = v0 + 0;
    goto L_0880CCE8;
L_0880CD10:;
    a0 = LD32(a0);
    a2 = 1;
    a0 = a0 + 52;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880CD20;
L_0880CD20:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880CD2C; }
    goto L_0880CD28;
L_0880CD28:;
    v1 = LD32(v0);
    goto L_0880CD2C;
L_0880CD2C:;
    v0 = v1 + 0;
    goto L_0880CCF4;
}

/* 0880CD34 */
u64 func_0880CD34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880CD34:;
    sp = sp - 16;
    a2 = 1;
    cnd_ = a1 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0880CD74; }
    goto L_0880CD48;
L_0880CD48:;
    a0 = LD32(a0);
    a1 = LD32(v1+4);
    goto L_0880CD50;
L_0880CD50:;
    a0 = a0 + 52;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880CD58;
L_0880CD58:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880CD64; }
    goto L_0880CD60;
L_0880CD60:;
    v1 = LD32(v0);
    goto L_0880CD64;
L_0880CD64:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0880CD74:;
    a0 = LD32(a0);
    a2 = 1;
    goto L_0880CD50;
}

/* 0880CD80 */
u32 func_0880CD80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0880CD80:;
    a1 = a0 + 0;
    v0 = 0x10000u;
    a2 = 1;
    a0 = a0 & 0x1;
    v0 = v0 | 0x1;
    v1 = a1 & 0x4;
    cnd_ = v1 == 0;
    if (a0 != 0) a2 = v0;
    if (cnd_) { goto L_0880CDA8; }
    goto L_0880CDA0;
L_0880CDA0:;
    v0 = 0x20000u;
    a2 = a2 | v0;
    goto L_0880CDA8;
L_0880CDA8:;
    v0 = a1 & 0x400;
    cnd_ = v0 == 0;
    v0 = a1 & 0x8;
    if (cnd_) { goto L_0880CDC0; }
    goto L_0880CDB4;
L_0880CDB4:;
    v0 = 0x40000u;
    a2 = a2 | v0;
    v0 = a1 & 0x8;
    goto L_0880CDC0;
L_0880CDC0:;
    v1 = a2 | 0x2;
    a0 = a1 & 0x200;
    cnd_ = a0 == 0;
    if (v0 != 0) a2 = v1;
    if (cnd_) { goto L_0880CDD8; }
    goto L_0880CDD0;
L_0880CDD0:;
    v0 = 0x1c00000u;
    a2 = a2 | v0;
    goto L_0880CDD8;
L_0880CDD8:;
    v0 = a1 & 0x40;
    cnd_ = v0 != 0;
    v0 = 0x300000u;
    if (cnd_) { goto L_0880CE08; }
    goto L_0880CDE4;
L_0880CDE4:;
    v0 = a1 & 0x800;
    cnd_ = v0 == 0;
    v0 = a1 & 0x1000;
    if (cnd_) { goto L_0880CDFC; }
    goto L_0880CDF0;
L_0880CDF0:;
    v0 = 0x100000u;
    a2 = a2 | v0;
    v0 = a1 & 0x1000;
    goto L_0880CDFC;
L_0880CDFC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880CE0C; }
    goto L_0880CE04;
L_0880CE04:;
    v0 = 0x200000u;
    goto L_0880CE08;
L_0880CE08:;
    a2 = a2 | v0;
    goto L_0880CE0C;
L_0880CE0C:;
    v0 = a2 + 0;
    return v0;
}

/* 0880CE14 */
u32 func_0880CE14(u32 a0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880CE14:;
    sp = sp - 32;
    v0 = a0 & 0x2;
    f20 = f12;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0880CF38; }
    goto L_0880CE30;
L_0880CE30:;
    v0 = a0 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0880CF1C; }
    goto L_0880CE3C;
L_0880CE3C:;
    v0 = a0 & 0x20;
    cnd_ = v0 != 0;
    v0 = a0 & 0x80;
    if (cnd_) { goto L_0880CED4; }
    goto L_0880CE48;
L_0880CE48:;
    cnd_ = v0 != 0;
    v0 = a0 & 0x100;
    if (cnd_) { goto L_0880CEB8; }
    goto L_0880CE50;
L_0880CE50:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880CE90; }
    goto L_0880CE58;
L_0880CE58:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CE60;
L_0880CE60:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    a1 = 1;
    goto L_0880CE70;
L_0880CE70:;
    func_08810F04(a0, a1, f12);
    goto L_0880CE78;
L_0880CE78:;
    v0 = s0 + 0;
    goto L_0880CE7C;
L_0880CE7C:;
    sp = sp + 32;
    return v0;
L_0880CE90:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CE98;
L_0880CE98:;
    f12 = BITSF(0);
    s0 = v0 + 0;
    a0 = v0 + 0;
    goto L_0880CEA4;
L_0880CEA4:;
    a1 = 0 + 0;
    goto L_0880CEA8;
L_0880CEA8:;
    func_08810BE8(a0, a1, f12);
    goto L_0880CEB0;
L_0880CEB0:;
    v0 = s0 + 0;
    goto L_0880CE7C;
L_0880CEB8:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CEC0;
L_0880CEC0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    goto L_0880CE70;
L_0880CED4:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CEDC;
L_0880CEDC:;
    v1 = D_08AEB4CC - (-19252);
    f0 = BITSF(LD32(v1-19252));
    v1 = D_08AF0CC8 - (3272);
    v1 = v1 + 3272;
    ST32(v0, v1);
    v1 = D_08AEB4D0 - (-19248);
    s0 = v0 + 0;
    ST32(v0+12, FBITS(f0));
    f0 = BITSF(LD32(v1-19248));
    ST32(v0+24, FBITS(f20));
    ST32(v0+28, FBITS(f0));
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST8(v0+16, 0);
    ST32(v0+20, 0);
    goto L_0880CE78;
L_0880CF1C:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CF24;
L_0880CF24:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    a1 = 1;
    goto L_0880CEA8;
L_0880CF38:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CF40;
L_0880CF40:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    goto L_0880CEA4;
}

/* 0880CF50 */
float func_0880CF50(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880CF50:;
    sp = sp - 48;
    s3 = a0 + 0;
    a0 = a2 + 0;
    s1 = a2 + 0;
    f20 = f14;
    s2 = a1 + 0;
    f22 = f13;
    f21 = f12;
    v0 = func_0880CD80(a0);
    goto L_0880CF94;
L_0880CF94:;
    f12 = f20;
    a0 = s1 + 0;
    s0 = v0 | 0x8;
    v0 = func_0880CE14(a0, 0, 0, 0, f12);
    goto L_0880CFA4;
L_0880CFA4:;
    v1 = D_08B159F0 - (23024);
    s1 = v0 + 0;
    v0 = LD32(v1+23024);
    a0 = LD32(s3);
    a2 = s0 + 0;
    a1 = v0 + 0;
    t0 = s2 + 0;
    v0 = v0 + 1;
    a3 = 0x8000;
    t1 = s1 + 0;
    t2 = 0 + 0;
    ST32(v1+23024, v0);
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880CFD8;
L_0880CFD8:;
    s0 = v0 + 0;
    f12 = f21;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880D024; }
    goto L_0880CFE8;
L_0880CFE8:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_0880D050; }
    goto L_0880CFF0;
L_0880CFF0:;
    func_08814994(a0, f12);
    goto L_0880CFF8;
L_0880CFF8:;
    a0 = s0 + 0;
    f12 = f22;
    f0 = func_088149B0(a0, f12);
    goto L_0880D004;
L_0880D004:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D010;
L_0880D010:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_0880D028; }
    goto L_0880D01C;
L_0880D01C:;
    v0 = LD32(s0+8);
    ST32(s3+4, v0);
    goto L_0880D024;
L_0880D024:;
    v0 = LD32(s3+4);
    goto L_0880D028;
L_0880D028:;
    sp = sp + 48;
    return f0;
L_0880D050:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s3+4, 0); goto L_0880CFF0; }
    goto L_0880D058;
L_0880D058:;
    goto L_0880CFF0;
}

/* 0880D060 */
rv_t func_0880D060(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880D060:;
    sp = sp - 48;
    s3 = a0 + 0;
    a0 = a2 + 0;
    s1 = a2 + 0;
    f20 = f12;
    s2 = a1 + 0;
    f21 = f13;
    v0 = func_0880CD80(a0);
    goto L_0880D09C;
L_0880D09C:;
    f12 = f20;
    a0 = s1 + 0;
    s0 = v0 | 0x8;
    v0 = func_0880CE14(a0, 0, 0, 0, f12);
    goto L_0880D0AC;
L_0880D0AC:;
    v1 = D_08B159F0 - (23024);
    s1 = v0 + 0;
    v0 = LD32(v1+23024);
    a0 = LD32(s3);
    a2 = s0 + 0;
    a1 = v0 + 0;
    t0 = s2 + 0;
    v0 = v0 + 1;
    a3 = 0x8000;
    t1 = s1 + 0;
    t2 = 0 + 0;
    ST32(v1+23024, v0);
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D0E0;
L_0880D0E0:;
    s0 = v0 + 0;
    f12 = f21;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880D120; }
    goto L_0880D0F0;
L_0880D0F0:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_0880D148; }
    goto L_0880D0F8;
L_0880D0F8:;
    { rv_t r_ = func_0881483C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D100;
L_0880D100:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D10C;
L_0880D10C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_0880D124; }
    goto L_0880D118;
L_0880D118:;
    v0 = LD32(s0+8);
    ST32(s3+4, v0);
    goto L_0880D120;
L_0880D120:;
    v0 = LD32(s3+4);
    goto L_0880D124;
L_0880D124:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880D148:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s3+4, 0); goto L_0880D0F8; }
    goto L_0880D150;
L_0880D150:;
    goto L_0880D0F8;
}

/* 0880D158 */
rv_t func_0880D158(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880D158:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = a2 + 0;
    s1 = a1 + 0;
    f21 = f13;
    f20 = f12;
    v0 = func_0880CD80(a0);
    goto L_0880D18C;
L_0880D18C:;
    a0 = 20;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D198;
L_0880D198:;
    t4 = D_08B159F0 - (23024);
    v1 = D_08AF0D38 - (3384);
    t3 = LD32(t4+23024);
    v1 = v1 + 3384;
    a0 = LD32(s2);
    ST32(v0, v1);
    a1 = t3 + 0;
    a2 = s0 + 0;
    ST32(v0+12, FBITS(f20));
    t3 = t3 + 1;
    t0 = s1 + 0;
    ST32(v0+4, 0);
    t1 = v0 + 0;
    a3 = 0 + 0;
    ST32(v0+8, 0);
    t2 = 0 + 0;
    ST8(v0+16, 0);
    ST32(t4+23024, t3);
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D1E4;
L_0880D1E4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f21;
    cnd_ = s0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0880D210; }
    goto L_0880D1F8;
L_0880D1F8:;
    { rv_t r_ = func_0881483C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D200;
L_0880D200:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D20C;
L_0880D20C:;
    v0 = LD32(s0+8);
    goto L_0880D210;
L_0880D210:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D230 */
rv_t func_0880D230(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880D230:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = a2 + 0;
    s1 = a1 + 0;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    v0 = func_0880CD80(a0);
    goto L_0880D26C;
L_0880D26C:;
    a0 = 20;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D278;
L_0880D278:;
    t4 = D_08B159F0 - (23024);
    v1 = D_08AF0D38 - (3384);
    t3 = LD32(t4+23024);
    v1 = v1 + 3384;
    a0 = LD32(s2);
    ST32(v0, v1);
    a1 = t3 + 0;
    a2 = s0 + 0;
    ST32(v0+12, FBITS(f20));
    t3 = t3 + 1;
    t0 = s1 + 0;
    ST32(v0+4, 0);
    t1 = v0 + 0;
    a3 = 0 + 0;
    ST32(v0+8, 0);
    t2 = 0 + 0;
    ST8(v0+16, 0);
    ST32(t4+23024, t3);
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D2C4;
L_0880D2C4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f21;
    cnd_ = s0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0880D2FC; }
    goto L_0880D2D8;
L_0880D2D8:;
    func_08814994(a0, f12);
    goto L_0880D2E0;
L_0880D2E0:;
    a0 = s0 + 0;
    f12 = f22;
    f0 = func_088149B0(a0, f12);
    goto L_0880D2EC;
L_0880D2EC:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D2F8;
L_0880D2F8:;
    v0 = LD32(s0+8);
    goto L_0880D2FC;
L_0880D2FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D320 */
rv_t func_0880D320(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D320:;
    sp = sp - 16;
    a0 = LD32(a0);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D330;
L_0880D330:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D33C */
u32 func_0880D33C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D33C:;
    sp = sp - 16;
    { u64 r_ = func_0880CD34(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D34C;
L_0880D34C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880D35C; }
    goto L_0880D354;
L_0880D354:;
    v0 = LD_U16(v0+18);
    v1 = v0 & 0x1;
    goto L_0880D35C;
L_0880D35C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0880D36C */
rv_t func_0880D36C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D36C:;
    sp = sp - 16;
    { u64 r_ = func_0880CD34(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D37C;
L_0880D37C:;
    f0 = BITSF(0);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0+68)); goto L_0880D388; }
    goto L_0880D388;
L_0880D388:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D394 */
rv_t func_0880D394(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880D394:;
    sp = sp - 32;
    f20 = f12;
    { u64 r_ = func_0880CC90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D3A8;
L_0880D3A8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_0880D3BC; }
    goto L_0880D3B4;
L_0880D3B4:;
    f0 = func_088149B0(a0, f12);
    goto L_0880D3BC;
L_0880D3BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D3CC */
float func_0880D3CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D3CC:;
    sp = sp - 16;
    { u64 r_ = func_0880CD34(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D3DC;
L_0880D3DC:;
    f0 = BITSF(0);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0+64)); goto L_0880D3E8; }
    goto L_0880D3E8;
L_0880D3E8:;
    sp = sp + 16;
    return f0;
}

/* 0880D3F4 */
rv_t func_0880D3F4(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880D3F4:;
    sp = sp - 32;
    f20 = f12;
    { u64 r_ = func_0880CC90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D408;
L_0880D408:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_0880D41C; }
    goto L_0880D414;
L_0880D414:;
    { rv_t r_ = func_0881483C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D41C;
L_0880D41C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D42C */
void func_0880D42C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880D42C:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { u64 r_ = func_0880CC90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D448;
L_0880D448:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_0880D460; }
    goto L_0880D454;
L_0880D454:;
    v0 = LD32(s0);
    a1 = LD32(v0+16);
    func_0881490C(a0, a1, f12);
    goto L_0880D460;
L_0880D460:;
    sp = sp + 32;
    return;
}

/* 0880D474 */
void func_0880D474(void)
{
L_0880D474:;
    return;
}

/* 0880D47C */
u64 func_0880D47C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D47C:;
    sp = sp - 16;
    a2 = 1;
    v0 = LD32(a0);
    a1 = LD32(a0+4);
    v0 = v0 + 52;
    a0 = v0 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D49C;
L_0880D49C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880D4A8; }
    goto L_0880D4A4;
L_0880D4A4:;
    v1 = LD32(v0);
    goto L_0880D4A8;
L_0880D4A8:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880D4B4; }
    goto L_0880D4B0;
L_0880D4B0:;
    v0 = LD32(v1+32);
    goto L_0880D4B4;
L_0880D4B4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0880D4C0 */
rv_t func_0880D4C0(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D4C0:;
    sp = sp - 16;
    a0 = LD32(a0);
    { rv_t r_ = func_08806700(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D4D0;
L_0880D4D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D4DC */
void func_0880D4DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_0880D4DC:;
    a1 = LD32(a0+52);
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    a1 = (a1 & ~(0x3fu << 0)) | ((0 & 0x3f) << 0);
    ST32(a0, v0);
    v1 = (u32)-1;
    v0 = (u32)-2;
    ST32(a0+12, v1);
    ST32(a0+48, v0);
    ST32(a0+52, a1);
    ST32(a0+60, 0);
    ST32(a0+8, 0);
    ST32(a0+4, 0);
    ST32(a0+16, 0);
    ST32(a0+56, 0);
    return;
}

/* 0880D51C */
void func_0880D51C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
L_0880D51C:;
    v1 = LD32(a1+12);
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0+12, v1);
    a2 = (u32)-2;
    ST32(a0, v0);
    ST32(a0+8, 0);
    v0 = LD32(a1+52);
    v1 = LD32(a0+52);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    v0 = (v0 >> 4) & 0x1;
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    ST32(a0+48, a2);
    v0 = (v0 >> 5) & 0x1;
    v1 = (v1 & ~(0x1u << 5)) | ((v0 & 0x1) << 5);
    ST32(a0+52, v1);
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v0 = LD32(a1+32);
    a3 = LD32(a1+16);
    ST32(a0+4, 0);
    ST32(a0+32, v0);
    a2 = LD32(a1+36);
    ST32(a0+16, a3);
    ST32(a0+36, a2);
    v0 = LD32(a1+40);
    ST32(a0+40, v0);
    a2 = LD32(a1+44);
    ST32(a0+52, v1);
    v0 = LD32(a1+60);
    v1 = LD32(a1+56);
    ST32(a0+44, a2);
    ST32(a0+60, v0);
    ST32(a0+56, v1);
    return;
}

/* 0880D5D8 */
void func_0880D5D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
L_0880D5D8:;
    v1 = LD32(a1+12);
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0+12, v1);
    a2 = (u32)-2;
    ST32(a0, v0);
    ST32(a0+8, 0);
    v0 = LD32(a1+52);
    v1 = LD32(a0+52);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    v0 = (v0 >> 4) & 0x1;
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    ST32(a0+52, v1);
    v0 = LD32(a1+52);
    ST32(a0+48, a2);
    v0 = (v0 >> 5) & 0x1;
    v1 = (v1 & ~(0x1u << 5)) | ((v0 & 0x1) << 5);
    ST32(a0+52, v1);
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v0 = LD32(a1+32);
    a3 = LD32(a1+16);
    ST32(a0+4, 0);
    ST32(a0+32, v0);
    a2 = LD32(a1+36);
    ST32(a0+16, a3);
    ST32(a0+36, a2);
    v0 = LD32(a1+40);
    ST32(a0+40, v0);
    a2 = LD32(a1+44);
    ST32(a0+52, v1);
    v0 = LD32(a1+60);
    v1 = LD32(a1+56);
    ST32(a0+44, a2);
    ST32(a0+60, v0);
    ST32(a0+56, v1);
    return;
}

/* 0880D694 */
rv_t func_0880D694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D694:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a2 + 0;
    s2 = a1 + 0;
    s0 = a3 & 0xff;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880D6BC;
L_0880D6BC:;
    v1 = LD32(s1);
    a2 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+12);
    a1 = s2 + 0;
    t_ = v0;
    a3 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D6D8;
L_0880D6D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D6F0 */
rv_t func_0880D6F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880D6F0:;
    sp = sp - 48;
    v0 = (u32)-1;
    s4 = a3 & 0xff;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a1 = LD32(a1+16);
    cnd_ = a1 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0880D78C; }
    goto L_0880D72C;
L_0880D72C:;
    a2 = LD32(a1+68);
    cnd_ = (s32)a2 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880D75C; }
    goto L_0880D738;
L_0880D738:;
    v0 = LD32(a1+72);
    v1 = v0 + 52;
    v0 = LD32(v1);
    goto L_0880D744;
L_0880D744:;
    cnd_ = v0 == s3;
    v1 = v1 + 68;
    if (cnd_) { goto L_0880D834; }
    goto L_0880D74C;
L_0880D74C:;
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)a2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0880D744; }
    goto L_0880D75C;
L_0880D75C:;
    s0 = LD32(s2+228);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0880D78C; }
    goto L_0880D768;
L_0880D768:;
    v1 = LD32(s0);
    goto L_0880D76C;
L_0880D76C:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D778;
L_0880D778:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880D7D4; }
    goto L_0880D780;
L_0880D780:;
    s0 = LD32(s0+8);
    goto L_0880D784;
L_0880D784:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0880D76C; }
    goto L_0880D78C;
L_0880D78C:;
    cnd_ = s4 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880D7B0; }
    goto L_0880D794;
L_0880D794:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0880D7B4; }
    goto L_0880D79C;
L_0880D79C:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D7AC;
L_0880D7AC:;
    a0 = 0 + 0;
    goto L_0880D7B0;
L_0880D7B0:;
    goto L_0880D7B4;
L_0880D7B4:;
    v0 = a0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880D7D4:;
    v1 = LD32(s0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D7E4;
L_0880D7E4:;
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880D780; }
    goto L_0880D7EC;
L_0880D7EC:;
    v1 = LD32(s0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D7FC;
L_0880D7FC:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+12);
    a2 = s3 + 0;
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D818;
L_0880D818:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+8); goto L_0880D784; }
    goto L_0880D820;
L_0880D820:;
    v0 = LD32(s1+52);
    a0 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((s4 & 0x1) << 0);
    ST32(s1+52, v0);
    goto L_0880D7B0;
L_0880D834:;
    ST32(sp, a0);
    a0 = 1;
    v1 = LD32(s1+52);
    v1 = (v1 & ~(0x1u << 0)) | ((s4 & 0x1) << 0);
    v0 = LD32(s2+228);
    ST32(s1+52, v1);
    ST32(s1+8, v0);
    v0 = LD32(sp);
    ST32(s2+228, s1);
    ST32(s1+12, v0);
    ST32(s1+4, s2);
    goto L_0880D7B0;
}

/* 0880D864 */
rv_t func_0880D864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D864:;
    v0 = LD32(a0+4);
    sp = sp - 16;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880D8E0; }
    goto L_0880D874;
L_0880D874:;
    v1 = LD32(v0+228);
    cnd_ = v1 == 0;
    v0 = v0 + 228;
    if (cnd_) { goto L_0880D8A0; }
    goto L_0880D880;
L_0880D880:;
    cnd_ = v1 == a0;
    if (cnd_) { v1 = LD32(v0); goto L_0880D8A4; }
    goto L_0880D888;
L_0880D888:;
    v0 = LD32(v0);
    goto L_0880D88C;
L_0880D88C:;
    v1 = LD32(v0+8);
    cnd_ = v1 == 0;
    v0 = v0 + 8;
    if (cnd_) { goto L_0880D8A0; }
    goto L_0880D898;
L_0880D898:;
    cnd_ = v1 != a0;
    if (cnd_) { v0 = LD32(v0); goto L_0880D88C; }
    goto L_0880D8A0;
L_0880D8A0:;
    v1 = LD32(v0);
    goto L_0880D8A4;
L_0880D8A4:;
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_0880D8E4; }
    goto L_0880D8AC;
L_0880D8AC:;
    v1 = LD32(v1+8);
    ST32(a0+4, 0);
    ST32(v0, v1);
    v0 = LD32(a0+52);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST32(a0+8, 0);
    if (cnd_) { goto L_0880D8E0; }
    goto L_0880D8C8;
L_0880D8C8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0880D8E4; }
    goto L_0880D8D0;
L_0880D8D0:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D8E0;
L_0880D8E0:;
    goto L_0880D8E4;
L_0880D8E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D8EC */
rv_t func_0880D8EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D8EC:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0880D90C; }
    goto L_0880D900;
L_0880D900:;
    v0 = LD32(a0+52);
    v0 = v0 | 0x1;
    ST32(a0+52, v0);
    goto L_0880D90C;
L_0880D90C:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D91C;
L_0880D91C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880D928 */
void func_0880D928(u32 a0, u32 a1)
{
L_0880D928:;
    ST32(a0+16, a1);
    return;
}

/* 0880D930 */
rv_t func_0880D930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D930:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 64;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D954;
L_0880D954:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    s2 = v0 + 0;
    func_0880D5D8(a0, a1);
    goto L_0880D964;
L_0880D964:;
    v1 = LD32(s0+8);
    a1 = s1 + 0;
    ST32(s2+4, s1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0880D994; }
    goto L_0880D978;
L_0880D978:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880D994:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880D9A4;
L_0880D9A4:;
    ST32(s2+8, v0);
    goto L_0880D978;
}

/* 0880D9AC */
rv_t func_0880D9AC(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880D9AC:;
    sp = sp - 16;
    v0 = 0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880DA08; }
    goto L_0880D9D8;
L_0880D9D8:;
    a0 = v1 + 0;
    v0 = LD32(s0+48);
    v1 = LD32(v1+224);
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s0+52); goto L_0880DA24; }
    goto L_0880D9EC;
L_0880D9EC:;
    f0 = func_08809BB8(a0, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0880D9F4;
L_0880D9F4:;
    v0 = LD32(s0+4);
    a0 = LD32(s0+48);
    v1 = LD32(v0+224);
    cnd_ = a0 == v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880DA20; }
    goto L_0880DA08;
L_0880DA08:;
    goto L_0880DA0C;
L_0880DA0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880DA20:;
    v0 = LD32(s0+52);
    goto L_0880DA24;
L_0880DA24:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_0880DA48; }
    goto L_0880DA38;
L_0880DA38:;
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880DA40;
L_0880DA40:;
    goto L_0880DA0C;
L_0880DA48:;
    a2 = s2 + 0;
    { rv_t r_ = func_0880DA58(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880DA50;
L_0880DA50:;
    goto L_0880DA0C;
}

/* 0880DA58 */
rv_t func_0880DA58(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0880DA58:;
    sp = sp - 80;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a3 = LD32(a0+4);
    cnd_ = a3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880DAB0; }
    goto L_0880DA84;
L_0880DA84:;
    v1 = LD32(a3+224);
    v0 = LD32(s0+48);
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(a3+292); goto L_0880DAD0; }
    goto L_0880DA94;
L_0880DA94:;
    a0 = a3 + 0;
    f0 = func_08809BB8(a0, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0880DA9C;
L_0880DA9C:;
    a3 = LD32(s0+4);
    v1 = LD32(s0+48);
    v0 = LD32(a3+224);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880DACC; }
    goto L_0880DAB0;
L_0880DAB0:;
    v0 = a0 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0880DACC:;
    v1 = LD32(a3+292);
    goto L_0880DAD0;
L_0880DAD0:;
    a0 = a3 + 292;
    ST32(sp, v1);
    v0 = LD32(a0+4);
    f1 = BITSF(LD32(sp));
    ST32(sp+4, v0);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = LD32(a0+8);
    f2 = BITSF(LD32(sp+4));
    ST32(sp+8, v0);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(LD32(sp+8));
    v0 = LD32(a0+12);
    ST32(sp, FBITS(f1));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+12, v0);
    ST32(sp+4, FBITS(f2));
    cnd_ = s1 == 0;
    ST32(sp+8, FBITS(f0));
    if (cnd_) { goto L_0880DBCC; }
    goto L_0880DB18;
L_0880DB18:;
    v0 = LD32(s0+52);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    v0 = s0 + 20;
    if (cnd_) { goto L_0880DD78; }
    goto L_0880DB28;
L_0880DB28:;
    v1 = s0 + 20;
    v0 = a3 + 280;
    f5 = BITSF(LD32(a3+280));
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(v1+4));
    f2 = f2 - f3;
    f0 = f0 - f5;
    f1 = f1 - f4;
    ST32(s1+8, FBITS(f2));
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
    {v[116]=BITSF(LD32(s1+(0)));}
    {v[117]=BITSF(LD32(s1+(4)));}
    {v[118]=BITSF(LD32(s1+(8)));}
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
    {ST32(s1+(0),FBITS(v[120]));}
    {ST32(s1+(4),FBITS(v[121]));}
    {ST32(s1+(8),FBITS(v[122]));}
    goto L_0880DBCC;
L_0880DBCC:;
    cnd_ = s2 == 0;
    a0 = 1;
    if (cnd_) { goto L_0880DAB0; }
    goto L_0880DBD4;
L_0880DBD4:;
    v0 = LD32(s0+52);
    v0 = v0 & 0x38;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880DCF8; }
    goto L_0880DBE4;
L_0880DBE4:;
    a0 = s0 + 32;
    v1 = LD32(s0+32);
    v0 = LD32(a0+4);
    a1 = LD32(a0+12);
    {v[8]=BITSF(v1);}
    v1 = LD32(a0+8);
    {v[9]=BITSF(v0);}
    v0 = LD32(sp);
    {v[10]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[11]=BITSF(a1);}
    v1 = LD32(sp+12);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f2 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    {v0=FBITS(v[6]);}
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, v0);
    ST32(sp+60, FBITS(f4));
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+40, v0);
    ST32(sp+44, v1);
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[115]=BITSF(LD32(sp+(44)));}
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
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    {ST32(s2+(12),FBITS(v[100]));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(v[106]));}
    a0 = 1;
    goto L_0880DAB0;
L_0880DCF8:;
    {v[112]=BITSF(LD32(s0+(32)));}
    {v[113]=BITSF(LD32(s0+(36)));}
    {v[114]=BITSF(LD32(s0+(40)));}
    {v[115]=BITSF(LD32(s0+(44)));}
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
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    {ST32(s2+(12),FBITS(v[100]));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(v[106]));}
    a0 = 1;
    goto L_0880DAB0;
L_0880DD78:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s0+20));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_0880DBCC;
}

/* 0880DD94 */
rv_t func_0880DD94(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880DD94:;
    sp = sp - 48;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a3 = LD32(a0+4);
    cnd_ = a3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880DDEC; }
    goto L_0880DDC0;
L_0880DDC0:;
    v1 = LD32(a3+224);
    v0 = LD32(s0+48);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0880DE08; }
    goto L_0880DDD0;
L_0880DDD0:;
    a0 = a3 + 0;
    f0 = func_08809BB8(a0, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0880DDD8;
L_0880DDD8:;
    a3 = LD32(s0+4);
    v1 = LD32(s0+48);
    v0 = LD32(a3+224);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880DE08; }
    goto L_0880DDEC;
L_0880DDEC:;
    goto L_0880DDF0;
L_0880DDF0:;
    v0 = a0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880DE08:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0880DE3C; }
    goto L_0880DE10;
L_0880DE10:;
    v0 = LD32(s0+52);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    v0 = a3 + 280;
    if (cnd_) { goto L_0880DFE8; }
    goto L_0880DE20;
L_0880DE20:;
    v0 = s0 + 20;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s0+20));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    goto L_0880DE38;
L_0880DE38:;
    ST32(s1+4, FBITS(f2));
    goto L_0880DE3C;
L_0880DE3C:;
    cnd_ = s2 == 0;
    a0 = 1;
    if (cnd_) { goto L_0880DDEC; }
    goto L_0880DE44;
L_0880DE44:;
    v0 = LD32(s0+52);
    v0 = v0 & 0x38;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a3 + 292; goto L_0880DED4; }
    goto L_0880DE54;
L_0880DE54:;
    {v[112]=BITSF(LD32(s0+(32)));}
    {v[113]=BITSF(LD32(s0+(36)));}
    {v[114]=BITSF(LD32(s0+(40)));}
    {v[115]=BITSF(LD32(s0+(44)));}
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
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    {ST32(s2+(12),FBITS(v[100]));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(v[106]));}
    goto L_0880DDF0;
L_0880DED4:;
    a1 = s0 + 32;
    v0 = LD32(a3+292);
    v1 = LD32(s0+32);
    a2 = LD32(a0+12);
    a3 = LD32(a1+12);
    {v[8]=BITSF(v0);}
    {v[4]=BITSF(v1);}
    v0 = LD32(a0+4);
    v1 = LD32(a0+8);
    {v[9]=BITSF(v0);}
    v0 = LD32(a1+4);
    {v[10]=BITSF(v1);}
    {v[5]=BITSF(v0);}
    v1 = LD32(a1+8);
    {v[11]=BITSF(a2);}
    {v[6]=BITSF(v1);}
    {v[7]=BITSF(a3);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[3]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f2 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    {v0=FBITS(v[2]);}
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, v0);
    ST32(sp+28, FBITS(f4));
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
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
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    {ST32(s2+(12),FBITS(v[100]));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(v[106]));}
    a0 = 1;
    goto L_0880DDEC;
L_0880DFE8:;
    {v[112]=BITSF(LD32(a3+(292)));}
    {v[113]=BITSF(LD32(a3+(296)));}
    {v[114]=BITSF(LD32(a3+(300)));}
    {v[115]=BITSF(LD32(a3+(304)));}
    {v[116]=BITSF(LD32(s0+(20)));}
    {v[117]=BITSF(LD32(s0+(24)));}
    {v[118]=BITSF(LD32(s0+(28)));}
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
    {ST32(s1+(0),FBITS(v[120]));}
    {ST32(s1+(4),FBITS(v[121]));}
    {ST32(s1+(8),FBITS(v[122]));}
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1));
    f4 = BITSF(LD32(a3+280));
    f0 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f4;
    f0 = f0 + f5;
    f2 = f2 + f3;
    ST32(s1, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    goto L_0880DE38;
}

/* 0880E078 */
float func_0880E078(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E078:;
    v0 = (u32)-2;
    ST32(a0+48, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 32;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E098;
L_0880E098:;
    v0 = LD32(s0+52);
    v0 = v0 | 0x8;
    ST32(s0+52, v0);
    sp = sp + 16;
    return f0;
}

/* 0880E0B4 */
rv_t func_0880E0B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0880E0B4:;
    sp = sp - 112;
    s3 = a3 & 0xff;
    s1 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = (s32)a0 < 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_0880E318; }
    goto L_0880E0E0;
L_0880E0E0:;
    v0 = LD32(a2+68);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0880E1F0; }
    goto L_0880E0F0;
L_0880E0F0:;
    v0 = LD32(a2+72);
    v1 = a0 << 4;
    v1 = v1 + a0;
    v1 = v1 << 2;
    s0 = v0 + v1;
    v1 = LD32(s0+48);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 << 3;
    if (cnd_) { goto L_0880E2FC; }
    goto L_0880E114;
L_0880E114:;
    f0 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0));
    ST32(sp+4, FBITS(f0));
    v0 = v0 - v1;
    v0 = v0 << 2;
    f1 = BITSF(LD32(s0+8));
    v0 = a1 + v0;
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    {v[112]=BITSF(LD32(v0+(12)));}
    {v[113]=BITSF(LD32(v0+(16)));}
    {v[114]=BITSF(LD32(v0+(20)));}
    {v[115]=BITSF(LD32(v0+(24)));}
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
    {ST32(sp+(0),FBITS(v[120]));}
    {ST32(sp+(4),FBITS(v[121]));}
    {ST32(sp+(8),FBITS(v[122]));}
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+8));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 + f4;
    f2 = f2 + f3;
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    goto L_0880E1C4;
L_0880E1C4:;
    ST32(sp+8, FBITS(f2));
    v0 = LD32(s1+52);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    a1 = s0 + 12;
    if (cnd_) { goto L_0880E20C; }
    goto L_0880E1D8;
L_0880E1D8:;
    a0 = s1 + 0;
    a2 = sp + 16;
    a3 = s3 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0880E424(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E1EC;
L_0880E1EC:;
    v0 = 1;
    goto L_0880E1F0;
L_0880E1F0:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0880E20C:;
    a0 = sp + 32;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E214;
L_0880E214:;
    v1 = LD32(s0+48);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 << 3;
    if (cnd_) { goto L_0880E2D8; }
    goto L_0880E224;
L_0880E224:;
    v0 = v0 - v1;
    v0 = v0 << 2;
    v0 = s2 + v0;
    a0 = v0 + 12;
    v1 = LD32(v0+12);
    a1 = LD32(a0+12);
    v0 = LD32(a0+4);
    {v[8]=BITSF(v1);}
    v1 = LD32(a0+8);
    {v[9]=BITSF(v0);}
    v0 = LD32(sp+32);
    {v[10]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v[11]=BITSF(a1);}
    v1 = LD32(sp+36);
    v0 = LD32(sp+40);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+44);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f2 = BITSF(v0);
    ST32(sp+64, FBITS(f3));
    {v0=FBITS(v[6]);}
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, v0);
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a0 = LD32(sp+72);
    a1 = LD32(sp+76);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, a0);
    ST32(sp+60, a1);
    goto L_0880E1D8;
L_0880E2D8:;
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+40);
    v1 = LD32(sp+44);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    goto L_0880E1D8;
L_0880E2FC:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    s3 = 0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    goto L_0880E1C4;
L_0880E318:;
    v0 = 0 + 0;
    goto L_0880E1F0;
}

/* 0880E320 */
void func_0880E320(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0880E320:;
    sp = sp - 96;
    s1 = a2 + 0;
    a2 = sp + 48;
    s0 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+72);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E34C;
L_0880E34C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880E414; }
    goto L_0880E354;
L_0880E354:;
    f8 = BITSF(LD32(s0));
    f0 = BITSF(LD32(sp));
    f9 = BITSF(LD32(s0+4));
    f10 = BITSF(LD32(s0+8));
    f4 = f0 - f8;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f5 = f1 - f9;
    f6 = f0 - f10;
    v0 = FBITS(f4);
    {vr0=BITSF(v0);}
    v0 = FBITS(f5);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(s1));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f7 = f0 + f1;
    fcc = FCMP(f3, f7, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f6));
    if (cnd_) { goto L_0880E414; }
    goto L_0880E3C8;
L_0880E3C8:;
    v0 = D_08AEB4E0 - (-19232);
    f1 = BITSF(LD32(v0-19232));
    f4 = f4 * f1;
    f5 = f5 * f1;
    f6 = f6 * f1;
    f2 = f8 + f4;
    f3 = f9 + f5;
    f0 = f10 + f6;
    ST32(s0, FBITS(f2));
    ST32(s0+8, FBITS(f0));
    ST32(s0+4, FBITS(f3));
    f0 = BITSF(LD32(s1));
    ST32(sp+32, FBITS(f4));
    f0 = f0 + f7;
    ST32(sp+36, FBITS(f5));
    f0 = f0 * f1;
    ST32(sp+40, FBITS(f6));
    ST32(s1, FBITS(f0));
    goto L_0880E414;
L_0880E414:;
    sp = sp + 96;
    { v[0]=vr0;return; }
    v[0]=vr0;
}

/* 0880E424 */
rv_t func_0880E424(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_0880E424:;
    v1 = LD32(a0+52);
    t0 = a0 + 20;
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    a3 = a3 & 0xff;
    if (cnd_) { goto L_0880E454; }
    goto L_0880E438;
L_0880E438:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1));
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(a0+20, FBITS(f2));
    v1 = LD32(a0+52);
    goto L_0880E454;
L_0880E454:;
    v0 = v1 & 0x8;
    a1 = v1 + 0;
    cnd_ = v0 != 0;
    a1 = (a1 & ~(0x1u << 5)) | ((a3 & 0x1) << 5);
    if (cnd_) { goto L_0880E484; }
    goto L_0880E464;
L_0880E464:;
    v0 = LD32(a2);
    ST32(a0+32, v0);
    v1 = LD32(a2+4);
    ST32(a0+36, v1);
    v0 = LD32(a2+8);
    ST32(a0+40, v0);
    v1 = LD32(a2+12);
    ST32(a0+44, v1);
    goto L_0880E484;
L_0880E484:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+224);
    ST32(a0+52, a1);
    ST32(a0+48, v1);
    return (rv_t){ v0, v1, f0 };
}

/* 0880E498 */
rv_t func_0880E498(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0880E498:;
    sp = sp - 112;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = LD32(a1+16);
    cnd_ = a1 == 0;
    s1 = s0 + 76;
    if (cnd_) { goto L_0880E4EC; }
    goto L_0880E4C4;
L_0880E4C4:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_0880E4EC; }
    goto L_0880E4D8;
L_0880E4D8:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0880E664; }
    goto L_0880E4E8;
L_0880E4E8:;
    ST32(s0+220, s3);
    goto L_0880E4EC;
L_0880E4EC:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = sp + 16;
    { rv_t r_ = func_08816684(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E4FC;
L_0880E4FC:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = s2 + 20;
    if (cnd_) { goto L_0880E648; }
    goto L_0880E508;
L_0880E508:;
    {v[112]=BITSF(LD32(s2+(32)));}
    {v[113]=BITSF(LD32(s2+(36)));}
    {v[114]=BITSF(LD32(s2+(40)));}
    {v[115]=BITSF(LD32(s2+(44)));}
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
    {ST32(sp+(32),FBITS(v[120]));}
    {ST32(sp+(36),FBITS(v[121]));}
    {ST32(sp+(40),FBITS(v[122]));}
    f0 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(sp+40));
    f2 = f2 + f0;
    f4 = BITSF(LD32(s2+20));
    f3 = f3 + f1;
    f0 = BITSF(LD32(sp+32));
    ST32(v1+4, FBITS(f2));
    a1 = s2 + 32;
    f4 = f4 + f0;
    ST32(v1+8, FBITS(f3));
    v0 = LD32(s2+52);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    ST32(s2+20, FBITS(f4));
    if (cnd_) { goto L_0880E648; }
    goto L_0880E5A8;
L_0880E5A8:;
    t1 = LD32(a1+12);
    a2 = LD32(a1+4);
    t0 = LD32(a1+8);
    a0 = LD32(s2+32);
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    a1 = LD32(sp+24);
    a3 = LD32(sp+28);
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a2);}
    {v[1]=BITSF(v1);}
    {v[6]=BITSF(t0);}
    {v[2]=BITSF(a1);}
    {v[7]=BITSF(t1);}
    {v[3]=BITSF(a3);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v0=FBITS(v[11]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[8]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[9]);}
    f2 = BITSF(v0);
    ST32(sp+64, FBITS(f3));
    {v0=FBITS(v[10]);}
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, v0);
    ST32(sp+76, FBITS(f4));
    a0 = LD32(sp+68);
    a1 = LD32(sp+72);
    v1 = LD32(sp+76);
    v0 = LD32(sp+64);
    ST32(sp+52, a0);
    ST32(sp+48, v0);
    ST32(sp+56, a1);
    ST32(sp+60, v1);
    ST32(s2+32, v0);
    ST32(s2+44, v1);
    ST32(s2+36, a0);
    ST32(s2+40, a1);
    goto L_0880E648;
L_0880E648:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0880E664:;
    v0 = D_08AEB4E4 - (-19228);
    f12 = BITSF(LD32(v0-19228));
    { rv_t r_ = func_088155D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E670;
L_0880E670:;
    ST32(s0+220, s3);
    goto L_0880E4EC;
}

/* 0880E678 */
rv_t func_0880E678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0880E678:;
    v0 = LD32(a0+4);
    a1 = LD32(v0+16);
    cnd_ = a1 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_0880E6B8; }
    goto L_0880E688;
L_0880E688:;
    a0 = LD32(a0+12);
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_0880E6B8; }
    goto L_0880E694;
L_0880E694:;
    v1 = LD32(a1+68);
    v0 = a0 << 4;
    v0 = v0 + a0;
    v1 = (s32)a0 < (s32)v1;
    cnd_ = v1 == 0;
    a2 = v0 << 2;
    if (cnd_) { goto L_0880E6B8; }
    goto L_0880E6AC;
L_0880E6AC:;
    v0 = LD32(a1+72);
    v0 = a2 + v0;
    a3 = LD32(v0+48);
    goto L_0880E6B8;
L_0880E6B8:;
    v0 = a3 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0880E6C0 */
rv_t func_0880E6C0(u32 a0, u32 a1, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0880E6C0:;
    sp = sp - 80;
    s0 = sp + 16;
    a2 = s0 + 0;
    s2 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E6EC;
L_0880E6EC:;
    a0 = s1 + 0;
    a2 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0880E714; }
    goto L_0880E6FC;
L_0880E6FC:;
    goto L_0880E700;
L_0880E700:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0880E714:;
    a3 = LD32(s1+60);
    v0 = LD32(s1+56);
    v1 = LD32(s1);
    a3 = ~(0 | a3);
    a3 = s2 & a3;
    a3 = a3 | v0;
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E738;
L_0880E738:;
    goto L_0880E700;
}

/* 0880E740 */
float func_0880E740(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E740:;
    sp = sp - 16;
    s1 = a2 & 0xff;
    s0 = a0 + 0;
    s2 = a1 + 0;
    func_0880D4DC(a0);
    goto L_0880E764;
L_0880E764:;
    v0 = LD32(s0+52);
    v0 = (v0 & ~(0x1u << 1)) | ((s1 & 0x1) << 1);
    v0 = v0 | 0x4;
    ST32(s0+52, v0);
    v0 = 1;
    v1 = D_08AF0C10 - (3088);
    ST8(s0+69, v0);
    v0 = D_08AEB4E8 - (-19224);
    v1 = v1 + 3088;
    f0 = BITSF(LD32(v0-19224));
    ST32(s0+64, s2);
    ST32(s0, v1);
    ST32(s0+72, FBITS(f0));
    ST8(s0+68, 0);
    sp = sp + 16;
    return f0;
}

/* 0880E7B4 */
u64 func_0880E7B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E7B4:;
    sp = sp - 16;
    s1 = a2 & 0xff;
    s0 = a0 + 0;
    s2 = a1 + 0;
    func_0880D4DC(a0);
    goto L_0880E7D8;
L_0880E7D8:;
    v0 = LD32(s0+52);
    v0 = (v0 & ~(0x1u << 1)) | ((s1 & 0x1) << 1);
    v0 = v0 | 0x4;
    ST32(s0+52, v0);
    v0 = 1;
    v1 = D_08AF0C10 - (3088);
    ST8(s0+69, v0);
    v0 = D_08AEB4EC - (-19220);
    v1 = v1 + 3088;
    f0 = BITSF(LD32(v0-19220));
    ST32(s0+64, s2);
    ST32(s0, v1);
    ST32(s0+72, FBITS(f0));
    ST8(s0+68, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0880E828 */
float func_0880E828(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E828:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    func_0880D51C(a0, a1);
    goto L_0880E848;
L_0880E848:;
    v0 = D_08AF0C10 - (3088);
    v0 = v0 + 3088;
    ST32(s0, v0);
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E85C;
L_0880E85C:;
    a1 = LD32(s2+64);
    a0 = v0 + 0;
    s1 = v0 + 0;
    f0 = func_08805C78(a0, a1);
    goto L_0880E86C;
L_0880E86C:;
    v0 = LD32(s0+52);
    v1 = 1;
    ST32(s0+64, s1);
    v0 = v0 | 0x4;
    ST32(s0+52, v0);
    v0 = D_08AEB4F4 - (-19212);
    f0 = BITSF(LD32(v0-19212));
    ST8(s0+69, v1);
    ST32(s0+72, FBITS(f0));
    ST8(s0+68, v1);
    sp = sp + 16;
    return f0;
}

/* 0880E8AC */
rv_t func_0880E8AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E8AC:;
    sp = sp - 16;
    v0 = D_08AF0C10 - (3088);
    v0 = v0 + 3088;
    s0 = a0 + 0;
    v1 = LD_U8(a0+68);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0880E8DC; }
    goto L_0880E8D0;
L_0880E8D0:;
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880E8F8; }
    goto L_0880E8DC;
L_0880E8DC:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880E8E0;
L_0880E8E0:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880E8F8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E908;
L_0880E908:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880E8E0;
}

/* 0880E910 */
rv_t func_0880E910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E910:;
    sp = sp - 16;
    v0 = D_08AF0C10 - (3088);
    v0 = v0 + 3088;
    s0 = a0 + 0;
    v1 = LD_U8(a0+68);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0880E940; }
    goto L_0880E934;
L_0880E934:;
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880E95C; }
    goto L_0880E940;
L_0880E940:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880E944;
L_0880E944:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880E95C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E96C;
L_0880E96C:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880E944;
}

/* 0880E974 */
rv_t func_0880E974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E974:;
    sp = sp - 16;
    v0 = D_08AF0C10 - (3088);
    v0 = v0 + 3088;
    s0 = a0 + 0;
    v1 = LD_U8(a0+68);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0880E9A4; }
    goto L_0880E998;
L_0880E998:;
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880E9C8; }
    goto L_0880E9A4;
L_0880E9A4:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880E9A8;
L_0880E9A8:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880E9B8;
L_0880E9B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880E9C8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880E9D8;
L_0880E9D8:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880E9A8;
}

/* 0880E9E0 */
rv_t func_0880E9E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880E9E0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a2 + 0;
    s2 = a1 + 0;
    s0 = a3 & 0xff;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880EA08;
L_0880EA08:;
    v1 = LD32(s1);
    a2 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+12);
    a1 = s2 + 0;
    t_ = v0;
    a3 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EA24;
L_0880EA24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EA3C */
rv_t func_0880EA3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EA3C:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_0880D6F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EA54;
L_0880EA54:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880EA6C; }
    goto L_0880EA5C;
L_0880EA5C:;
    v1 = LD32(s0+4);
    v0 = LD32(s0+64);
    a0 = 1;
    ST32(v0+316, v1);
    goto L_0880EA6C;
L_0880EA6C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EA80 */
rv_t func_0880EA80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EA80:;
    sp = sp - 16;
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+316, 0); goto L_0880EA94; }
    goto L_0880EA94;
L_0880EA94:;
    { rv_t r_ = func_0880D864(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EA9C;
L_0880EA9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EAA8 */
rv_t func_0880EAA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EAA8:;
    sp = sp - 16;
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+72));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_0880EAD8; }
    goto L_0880EAC8;
L_0880EAC8:;
    v0 = D_08AEB4F8 - (-19208);
    f0 = BITSF(LD32(v0-19208));
    f12 = f1;
    ST32(a0+72, FBITS(f0));
    goto L_0880EAD8;
L_0880EAD8:;
    a0 = LD32(a0+64);
    { rv_t r_ = func_08806C1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EAE0;
L_0880EAE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EAEC */
rv_t func_0880EAEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EAEC:;
    sp = sp - 16;
    a0 = LD32(a0+64);
    { rv_t r_ = func_0880688C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EAFC;
L_0880EAFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EB08 */
rv_t func_0880EB08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EB08:;
    sp = sp - 16;
    a0 = LD32(a0+64);
    func_0880696C();
    goto L_0880EB18;
L_0880EB18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EB24 */
rv_t func_0880EB24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0880EB24:;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EB2C */
rv_t func_0880EB2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0880EB2C:;
    v1 = LD32(a0+64);
    v0 = v1 + 356;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1+356));
    ST32(a1+8, FBITS(f0));
    v0 = 1;
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    f0 = BITSF(LD32(v1+368));
    ST32(a2, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 0880EB5C */
rv_t func_0880EB5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EB5C:;
    sp = sp - 16;
    v0 = LD32(a0+52);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880EB98; }
    goto L_0880EB78;
L_0880EB78:;
    v0 = LD32(a0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880EB9C; }
    goto L_0880EB84;
L_0880EB84:;
    ST32(v0+316, 0);
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880EBA8; }
    goto L_0880EB94;
L_0880EB94:;
    ST32(s0+64, 0);
    goto L_0880EB98;
L_0880EB98:;
    goto L_0880EB9C;
L_0880EB9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880EBA8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EBB8;
L_0880EBB8:;
    ST32(s0+64, 0);
    goto L_0880EB98;
}

/* 0880EBC0 */
rv_t func_0880EBC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EBC0:;
    sp = sp - 16;
    a0 = LD32(a0+64);
    { rv_t r_ = func_08808B24(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EBD0;
L_0880EBD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EBDC */
rv_t func_0880EBDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EBDC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 76;
    s0 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EC00;
L_0880EC00:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    f0 = func_0880E828(a0, a1);
    goto L_0880EC10;
L_0880EC10:;
    v1 = LD32(s1+8);
    v0 = LD32(s2+64);
    ST32(s2+4, s0);
    a1 = s0 + 0;
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(v0+316, s0);
    if (cnd_) { goto L_0880EC48; }
    goto L_0880EC2C;
L_0880EC2C:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880EC48:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EC58;
L_0880EC58:;
    ST32(s2+8, v0);
    goto L_0880EC2C;
}

/* 0880EC60 */
rv_t func_0880EC60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EC60:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = LD32(a0+64);
    { rv_t r_ = func_08809AB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EC74;
L_0880EC74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880EC80 */
rv_t func_0880EC80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EC80:;
    sp = sp - 16;
    a2 = 0 + 0;
    a0 = LD32(a0+64);
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880EC94;
L_0880EC94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880ECA0 */
rv_t func_0880ECA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880ECA0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = LD32(a0+64);
    { rv_t r_ = func_08809B24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880ECB4;
L_0880ECB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880ECC0 */
rv_t func_0880ECC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880ECC0:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_0880E0B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880ECD8;
L_0880ECD8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880ECF0; }
    goto L_0880ECE0;
L_0880ECE0:;
    v0 = LD_U8(s0+69);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880ED00; }
    goto L_0880ECEC;
L_0880ECEC:;
    goto L_0880ECF0;
L_0880ECF0:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880ED00:;
    a1 = LD32(s0+64);
    { rv_t r_ = func_0880E498(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880ED08;
L_0880ED08:;
    goto L_0880ECF0;
}

/* 0880ED10 */
u32 func_0880ED10(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0880ED10:;
    v1 = LD32(a0+64);
    v0 = 0 + 0;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0880ED30; }
    goto L_0880ED20;
L_0880ED20:;
    v0 = LD32(v1+16);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(v0+64); goto L_0880ED2C; }
    goto L_0880ED2C;
L_0880ED2C:;
    v0 = a0 + 0;
    goto L_0880ED30;
L_0880ED30:;
    return v0;
}

/* 0880ED38 */
u32 func_0880ED38(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880ED38:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 & 0xff;
    func_0880D4DC(a0);
    goto L_0880ED5C;
L_0880ED5C:;
    v0 = D_08AF0BB8 - (3000);
    v1 = LD32(s1+52);
    v0 = v0 + 3000;
    v1 = (v1 & ~(0x1u << 1)) | ((s0 & 0x1) << 1);
    ST32(s1+64, s2);
    ST32(s1, v0);
    ST32(s1+52, v1);
    sp = sp + 16;
    return v0;
}

/* 0880ED90 */
float func_0880ED90(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880ED90:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_0880D51C(a0, a1);
    goto L_0880EDAC;
L_0880EDAC:;
    v0 = D_08AF0BB8 - (3000);
    v0 = v0 + 3000;
    a1 = LD32(s0+64);
    ST32(s1, v0);
    a0 = D_08B44C2C - (19500);
    a0 = a0 + 19500;
    { rv_t r_ = func_088EC0E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880EDC8;
L_0880EDC8:;
    v1 = LD32(s1+52);
    ST32(s1+64, v0);
    v1 = v1 | 0x2;
    ST32(s1+52, v1);
    sp = sp + 16;
    return f0;
}

/* 0880EDEC */
rv_t func_0880EDEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0880EDEC:;
    sp = sp - 48;
    v0 = (u32)-1;
    s4 = D_08B44C2C - (19500);
    s3 = a0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    t0 = LD32(a0+64);
    cnd_ = t0 == v0;
    t2 = LD32(s4+19500);
    if (cnd_) { goto L_0880EF54; }
    goto L_0880EE28;
L_0880EE28:;
    v0 = LD32(t2+12);
    cnd_ = t0 == v0;
    if (cnd_) { s0 = LD32(t2+8); goto L_0880EECC; }
    goto L_0880EE34;
L_0880EE34:;
    a0 = LD32(t2);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880EE74; }
    goto L_0880EE40;
L_0880EE40:;
    a1 = LD32(a0+8);
    goto L_0880EE44;
L_0880EE44:;
    v0 = (s32)t0 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0880EE64; }
    goto L_0880EE50;
L_0880EE50:;
    v0 = LD32(t2+4);
    v0 = a1 + v0;
    v0 = (s32)t0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0880EE74; }
    goto L_0880EE64;
L_0880EE64:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0880EE44; }
    goto L_0880EE70;
L_0880EE70:;
    v1 = 0 + 0;
    goto L_0880EE74;
L_0880EE74:;
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0880EECC; }
    goto L_0880EE7C;
L_0880EE7C:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t1 = LD32(a0+12);
    cnd_ = (s32)t1 <= 0;
    a3 = t0 - v0;
    if (cnd_) { goto L_0880EEB4; }
    goto L_0880EE94;
L_0880EE94:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0880EE9C;
L_0880EE9C:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t1;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_0880EFBC; }
    goto L_0880EEAC;
L_0880EEAC:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0880EE9C; }
    goto L_0880EEB4;
L_0880EEB4:;
    v0 = 0 + 0;
    goto L_0880EEB8;
L_0880EEB8:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0880EECC; }
    goto L_0880EEC0;
L_0880EEC0:;
    s0 = v0 + 0;
    ST32(t2+12, t0);
    ST32(t2+8, v0);
    goto L_0880EECC;
L_0880EECC:;
    cnd_ = s0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s2+32)); goto L_0880EF58; }
    goto L_0880EED4;
L_0880EED4:;
    v1 = LD32(s0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s1));
    if (cnd_) { goto L_0880EF38; }
    goto L_0880EEE4;
L_0880EEE4:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0880EF28; }
    goto L_0880EEF8;
L_0880EEF8:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0880EF28; }
    goto L_0880EF10;
L_0880EF10:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s1+8)); goto L_0880EF3C; }
    goto L_0880EF28;
L_0880EF28:;
    a0 = s0 + 0;
    func_088EC3FC(a0, t1, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0880EF30;
L_0880EF30:;
    v1 = LD32(s0+24);
    f2 = BITSF(LD32(s1));
    goto L_0880EF38;
L_0880EF38:;
    f1 = BITSF(LD32(s1+8));
    goto L_0880EF3C;
L_0880EF3C:;
    f0 = BITSF(LD32(s1+4));
    v0 = v1 | 0x4;
    ST32(s0+24, v0);
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_0880EF54;
L_0880EF54:;
    f2 = BITSF(LD32(s2+32));
    goto L_0880EF58;
L_0880EF58:;
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s2+20));
    a1 = LD32(s3+64);
    a0 = LD32(s4+19500);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880EF78;
L_0880EF78:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0880EF9C; }
    goto L_0880EF80;
L_0880EF80:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    v0 = v0 + 12;
    ST32(v1+12, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    goto L_0880EF9C;
L_0880EF9C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0880EFBC:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_0880EEB8;
}

/* 0880EFD4 */
rv_t func_0880EFD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880EFD4:;
    sp = sp - 16;
    a1 = a0 + 64;
    v0 = LD32(a0+52);
    a0 = D_08B44C2C - (19500);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = a0 + 19500;
    if (cnd_) { goto L_0880F000; }
    goto L_0880EFF4;
L_0880EFF4:;
    goto L_0880EFF8;
L_0880EFF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F000:;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F008;
L_0880F008:;
    goto L_0880EFF8;
}

/* 0880F010 */
rv_t func_0880F010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F010:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 68;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F034;
L_0880F034:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    s2 = v0 + 0;
    f0 = func_0880ED90(a0, a1);
    goto L_0880F044;
L_0880F044:;
    v1 = LD32(s0+8);
    a1 = s1 + 0;
    ST32(s2+4, s1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0880F074; }
    goto L_0880F058;
L_0880F058:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F074:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F084;
L_0880F084:;
    ST32(s2+8, v0);
    goto L_0880F058;
}

/* 0880F08C */
void func_0880F08C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F08C:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    func_0880D4DC(a0);
    goto L_0880F0AC;
L_0880F0AC:;
    v0 = D_08AF0B60 - (2912);
    v0 = v0 + 2912;
    ST32(s0, v0);
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F0C0;
L_0880F0C0:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s1 = v0 + 0;
    func_088D082C(a0, a1, 0, 0, 0);
    goto L_0880F0D0;
L_0880F0D0:;
    v0 = LD32(s0+52);
    ST32(s0+64, s1);
    v0 = v0 | 0x4;
    ST32(s0+52, v0);
    sp = sp + 16;
    return;
}

/* 0880F0F8 */
void func_0880F0F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F0F8:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    func_0880D51C(a0, a1);
    goto L_0880F118;
L_0880F118:;
    v0 = D_08AF0B60 - (2912);
    v1 = LD32(s2+64);
    v0 = v0 + 2912;
    a0 = 152;
    cnd_ = v1 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0880F154; }
    goto L_0880F130;
L_0880F130:;
    v0 = LD32(s1+52);
    goto L_0880F134;
L_0880F134:;
    v0 = v0 | 0x4;
    ST32(s1+52, v0);
    sp = sp + 16;
    return;
L_0880F154:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F15C;
L_0880F15C:;
    s0 = v0 + 0;
    v0 = LD32(s2+64);
    a0 = s0 + 0;
    a1 = LD32(v0+4);
    func_088D082C(a0, a1, 0, 0, 0);
    goto L_0880F170;
L_0880F170:;
    ST32(s1+64, s0);
    a0 = s0 + 0;
    a1 = LD32(s2+64);
    a2 = a1 + 68;
    a1 = a1 + 56;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F188;
L_0880F188:;
    v0 = LD32(s1+52);
    goto L_0880F134;
}

/* 0880F190 */
rv_t func_0880F190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F190:;
    sp = sp - 16;
    v0 = D_08AF0B60 - (2912);
    s0 = a0 + 0;
    v0 = v0 + 2912;
    v1 = LD32(a0+64);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0880F1D4; }
    goto L_0880F1B8;
L_0880F1B8:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F1BC;
L_0880F1BC:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F1D4:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F1E4;
L_0880F1E4:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F1BC;
}

/* 0880F1EC */
rv_t func_0880F1EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F1EC:;
    sp = sp - 16;
    v0 = D_08AF0B60 - (2912);
    s0 = a0 + 0;
    v0 = v0 + 2912;
    v1 = LD32(a0+64);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0880F238; }
    goto L_0880F214;
L_0880F214:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F218;
L_0880F218:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880F228;
L_0880F228:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F238:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F248;
L_0880F248:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F218;
}

/* 0880F250 */
rv_t func_0880F250(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F250:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_0880D6F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F268;
L_0880F268:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880F284; }
    goto L_0880F270;
L_0880F270:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F284:;
    a1 = LD32(s0+4);
    a0 = LD32(s0+64);
    func_088D1E40(a0, a1);
    goto L_0880F290;
L_0880F290:;
    v1 = 1;
    goto L_0880F270;
}

/* 0880F298 */
rv_t func_0880F298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F298:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880F2D0; }
    goto L_0880F2B8;
L_0880F2B8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0880D864(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F2C0;
L_0880F2C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F2D0:;
    func_088D1E40(a0, a1);
    goto L_0880F2D8;
L_0880F2D8:;
    goto L_0880F2B8;
}

/* 0880F2E0 */
void func_0880F2E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F2E0:;
    sp = sp - 16;
    a0 = LD32(a0+64);
    { rv_t r_ = func_088D0A64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F2F0;
L_0880F2F0:;
    sp = sp + 16;
    return;
}

/* 0880F2FC */
rv_t func_0880F2FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0880F2FC:;
    v0 = LD32(a0+64);
    ST32(v0+108, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 0880F308 */
rv_t func_0880F308(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F308:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a3 + 0;
    a0 = LD32(a0+64);
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F328;
L_0880F328:;
    v1 = 0x40000000u;
    v0 = 0x2000000u;
    v1 = s0 & v1;
    s0 = s0 & v0;
    cnd_ = s0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0880F360; }
    goto L_0880F340;
L_0880F340:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0880F358; }
    goto L_0880F348;
L_0880F348:;
    v1 = LD32(s1+64);
    v0 = LD32(v1+116);
    v0 = v0 | 0x2;
    ST32(v1+116, v0);
    goto L_0880F358;
L_0880F358:;
    a0 = LD32(s1+64);
    { rv_t r_ = func_088D1050(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F360;
L_0880F360:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880F374 */
rv_t func_0880F374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F374:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a3 + 0;
    a0 = LD32(a0+64);
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F394;
L_0880F394:;
    v1 = 0x40000000u;
    v0 = 0x2000000u;
    v1 = s0 & v1;
    s0 = s0 & v0;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0880F3B8; }
    goto L_0880F3AC;
L_0880F3AC:;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0880F3C8; }
    goto L_0880F3B4;
L_0880F3B4:;
    goto L_0880F3B8;
L_0880F3B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F3C8:;
    a0 = LD32(s1+64);
    func_088D1894();
    goto L_0880F3D0;
L_0880F3D0:;
    goto L_0880F3B8;
}

/* 0880F3D8 */
rv_t func_0880F3D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0880F3D8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0880F3E0 */
rv_t func_0880F3E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F3E0:;
    a3 = LD32(a0+64);
    v0 = D_08AEB4FC - (-19204);
    f6 = BITSF(LD32(v0-19204));
    v1 = a3 + 32;
    f5 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+20));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+16));
    f2 = BITSF(LD32(a3+32));
    f1 = f1 + f4;
    f0 = f0 + f3;
    f2 = f2 + f5;
    sp = sp - 16;
    f1 = f1 * f6;
    f0 = f0 * f6;
    f2 = f2 * f6;
    v0 = 1;
    ST32(a1+4, FBITS(f1));
    ST32(a1, FBITS(f2));
    ST32(a1+8, FBITS(f0));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f5 = BITSF(LD32(v1+16));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+20));
    f4 = BITSF(LD32(a3+32));
    f1 = f1 - f3;
    f2 = f2 - f5;
    f0 = f0 - f4;
    ST32(sp+4, FBITS(f1));
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    v1 = FBITS(f1);
    {vr1=BITSF(v1);}
    v1 = FBITS(f2);
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f1 = BITSF(v1);
    f0 = f1 * f6;
    ST32(a2, FBITS(f0));
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0880F4A8 */
rv_t func_0880F4A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F4A8:;
    sp = sp - 16;
    a0 = LD32(a0+64);
    { rv_t r_ = func_088D189C(a0, a1, a2, a3, t0, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F4B8;
L_0880F4B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880F4C4 */
rv_t func_0880F4C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F4C4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 68;
    s0 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F4E8;
L_0880F4E8:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_0880F0F8(a0, a1);
    goto L_0880F4F8;
L_0880F4F8:;
    a0 = LD32(s2+64);
    ST32(s2+4, s0);
    a1 = s0 + 0;
    func_088D1E40(a0, a1);
    goto L_0880F508;
L_0880F508:;
    v1 = LD32(s1+8);
    a1 = s0 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0880F534; }
    goto L_0880F518;
L_0880F518:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F534:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F544;
L_0880F544:;
    ST32(s2+8, v0);
    goto L_0880F518;
}

/* 0880F54C */
void func_0880F54C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F54C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_0880D51C(a0, a1);
    goto L_0880F568;
L_0880F568:;
    v0 = LD32(s1+80);
    a1 = LD32(s1+64);
    a3 = s1 + 68;
    ST32(s0+80, v0);
    v0 = D_08AF0B00 - (2816);
    v0 = v0 + 2816;
    a0 = LD32(s1+84);
    ST32(s0, v0);
    a2 = s0 + 68;
    ST32(s0+84, a0);
    v1 = LD32(s1+88);
    ST32(s0+64, a1);
    ST32(s0+88, v1);
    v0 = LD32(s1+92);
    ST32(s0+92, v0);
    f0 = BITSF(LD32(s1+68));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a3+4));
    ST32(s0+68, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    sp = sp + 16;
    return;
}

/* 0880F5D0 */
rv_t func_0880F5D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0880F5D0:;
    f0 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    v0 = a0 + 68;
    ST32(v0+8, FBITS(f0));
    t1 = t1 & 0xff;
    ST32(v0+4, FBITS(f1));
    v0 = 1;
    ST32(a0+68, FBITS(f2));
    v1 = LD32(a3);
    a2 = LD32(a1+228);
    t2 = LD32(a0+52);
    ST32(a0+80, v1);
    t2 = (t2 & ~(0x1u << 0)) | ((t1 & 0x1) << 0);
    v1 = LD32(a3+4);
    ST32(a0+8, a2);
    ST32(a0+84, v1);
    a2 = LD32(a3+8);
    ST32(a0+64, t0);
    ST32(a0+88, a2);
    v1 = LD32(a3+12);
    ST32(a0+4, a1);
    ST32(a0+52, t2);
    ST32(a0+92, v1);
    ST32(a1+228, a0);
    return (rv_t){ v0, v1, f0 };
}

/* 0880F638 */
rv_t func_0880F638(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0880F638:;
    sp = sp - 80;
    v1 = a0 + 68;
    t0 = a0 + 80;
    a2 = LD32(a0+64);
    f2 = BITSF(LD32(a0+68));
    f0 = BITSF(LD32(v1+8));
    v0 = a2 << 3;
    ST32(sp, FBITS(f2));
    v0 = v0 - a2;
    v0 = v0 << 2;
    f1 = BITSF(LD32(v1+4));
    v1 = a1 + v0;
    ST32(sp+8, FBITS(f0));
    t3 = v1 + 12;
    a3 = a3 & 0xff;
    ST32(sp+4, FBITS(f1));
    {vr112=BITSF(LD32(v1+(12)));}
    {vr113=BITSF(LD32(v1+(16)));}
    {vr114=BITSF(LD32(v1+(20)));}
    {vr115=BITSF(LD32(v1+(24)));}
    {vr116=BITSF(LD32(sp+(0)));}
    {vr117=BITSF(LD32(sp+(4)));}
    {vr118=BITSF(LD32(sp+(8)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[103];vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;v[107]=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=v[107];vr104=s0*t0;vr105=s1*t0;v[106]=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(0),FBITS(vr120));}
    {ST32(sp+(4),FBITS(vr121));}
    {ST32(sp+(8),FBITS(vr122));}
    a2 = sp + 16;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(sp+4));
    f0 = f0 + f1;
    f1 = BITSF(LD32(sp+8));
    f2 = f2 + f3;
    a1 = sp + 0;
    f1 = f1 + f4;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    v0 = LD32(v1+12);
    t4 = LD32(t0+12);
    v1 = LD32(a0+80);
    t2 = LD32(t3+12);
    {v[8]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(t3+4);
    v1 = LD32(t3+8);
    {v[9]=BITSF(v0);}
    v0 = LD32(t0+4);
    {v[10]=BITSF(v1);}
    {v[1]=BITSF(v0);}
    v1 = LD32(t0+8);
    {v[11]=BITSF(t2);}
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(t4);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f1 = BITSF(v0);
    ST32(sp+48, FBITS(f0));
    {v0=FBITS(v[7]);}
    f2 = BITSF(v0);
    ST32(sp+52, FBITS(f1));
    {v0=FBITS(v[6]);}
    t0 = LD32(sp+48);
    t1 = LD32(sp+52);
    ST32(sp+56, v0);
    ST32(sp+60, FBITS(f2));
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+32, t0);
    ST32(sp+24, v0);
    ST32(sp+40, v0);
    ST32(sp+36, t1);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    ST32(sp+28, v1);
    ST32(sp+44, v1);
    { rv_t r_ = func_0880E424(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F7B8;
L_0880F7B8:;
    v0 = 1;
    sp = sp + 80;
    { v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return (rv_t){ v0, v1, f0 }; }
    v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 0880F7C8 */
void func_0880F7C8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0880F7C8:;
    sp = sp - 32;
    s0 = a3 & 0xff;
    s0 = 0 < s0;
    s3 = a1 + 0;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    func_0880D4DC(a0);
    goto L_0880F7F8;
L_0880F7F8:;
    v1 = D_08AF0AA0 - (2720);
    v0 = LD32(s1+52);
    v1 = v1 + 2720;
    v0 = (v0 & ~(0x1u << 1)) | ((s2 & 0x1) << 1);
    v0 = (v0 & ~(0x1u << 2)) | ((s0 & 0x1) << 2);
    ST32(s1+96, s3);
    ST32(s1+52, v0);
    ST32(s1, v1);
    ST8(s1+100, 0);
    sp = sp + 32;
    return;
}

/* 0880F838 */
float func_0880F838(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F838:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    func_0880F54C(a0, a1);
    goto L_0880F858;
L_0880F858:;
    v0 = D_08AF0AA0 - (2720);
    v0 = v0 + 2720;
    ST32(s0, v0);
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F86C;
L_0880F86C:;
    a1 = LD32(s2+96);
    a0 = v0 + 0;
    s1 = v0 + 0;
    f0 = func_08805C78(a0, a1);
    goto L_0880F87C;
L_0880F87C:;
    v0 = 1;
    ST32(s0+96, s1);
    ST8(s0+100, v0);
    sp = sp + 16;
    return f0;
}

/* 0880F8A0 */
rv_t func_0880F8A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F8A0:;
    sp = sp - 16;
    v0 = D_08AF0AA0 - (2720);
    v0 = v0 + 2720;
    s0 = a0 + 0;
    v1 = LD_U8(a0+100);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0880F8D0; }
    goto L_0880F8C4;
L_0880F8C4:;
    v0 = LD32(a0+96);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880F8EC; }
    goto L_0880F8D0;
L_0880F8D0:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F8D4;
L_0880F8D4:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F8EC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F8FC;
L_0880F8FC:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F8D4;
}

/* 0880F904 */
rv_t func_0880F904(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F904:;
    sp = sp - 16;
    v0 = D_08AF0AA0 - (2720);
    v0 = v0 + 2720;
    s0 = a0 + 0;
    v1 = LD_U8(a0+100);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0880F934; }
    goto L_0880F928;
L_0880F928:;
    v0 = LD32(a0+96);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880F958; }
    goto L_0880F934;
L_0880F934:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F938;
L_0880F938:;
    v0 = v0 + 3184;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880F948;
L_0880F948:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880F958:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F968;
L_0880F968:;
    v0 = D_08AF0C70 - (3184);
    goto L_0880F938;
}

/* 0880F970 */
rv_t func_0880F970(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F970:;
    sp = sp - 16;
    t1 = t1 & 0xff;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0880F5D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F990;
L_0880F990:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0880F9A4; }
    goto L_0880F998;
L_0880F998:;
    v0 = LD32(s0+96);
    v1 = 1;
    ST32(v0+316, s1);
    goto L_0880F9A4;
L_0880F9A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880F9BC */
rv_t func_0880F9BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F9BC:;
    sp = sp - 16;
    v0 = LD32(a0+96);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+316, 0); goto L_0880F9D0; }
    goto L_0880F9D0;
L_0880F9D0:;
    { rv_t r_ = func_0880D864(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F9D8;
L_0880F9D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880F9E4 */
rv_t func_0880F9E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880F9E4:;
    sp = sp - 16;
    a0 = LD32(a0+96);
    { rv_t r_ = func_08808B24(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880F9F4;
L_0880F9F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FA00 */
rv_t func_0880FA00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FA00:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = LD32(a0+96);
    { rv_t r_ = func_08806C1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FA14;
L_0880FA14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FA20 */
rv_t func_0880FA20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FA20:;
    sp = sp - 16;
    a0 = LD32(a0+96);
    { rv_t r_ = func_0880688C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FA30;
L_0880FA30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FA3C */
rv_t func_0880FA3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FA3C:;
    sp = sp - 16;
    a0 = LD32(a0+96);
    func_0880696C();
    goto L_0880FA4C;
L_0880FA4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FA58 */
rv_t func_0880FA58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0880FA58:;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FA60 */
rv_t func_0880FA60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0880FA60:;
    v1 = LD32(a0+96);
    v0 = v1 + 356;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1+356));
    ST32(a1+8, FBITS(f0));
    v0 = 1;
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    f0 = BITSF(LD32(v1+368));
    ST32(a2, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 0880FA90 */
rv_t func_0880FA90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FA90:;
    sp = sp - 16;
    v0 = LD32(a0+52);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0880FACC; }
    goto L_0880FAAC;
L_0880FAAC:;
    v0 = LD32(a0+96);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0880FAD0; }
    goto L_0880FAB8;
L_0880FAB8:;
    ST32(v0+316, 0);
    v0 = LD32(a0+96);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0880FADC; }
    goto L_0880FAC8;
L_0880FAC8:;
    ST32(s0+96, 0);
    goto L_0880FACC;
L_0880FACC:;
    goto L_0880FAD0;
L_0880FAD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FADC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FAEC;
L_0880FAEC:;
    ST32(s0+96, 0);
    goto L_0880FACC;
}

/* 0880FAF4 */
rv_t func_0880FAF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FAF4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 104;
    s0 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FB18;
L_0880FB18:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    f0 = func_0880F838(a0, a1);
    goto L_0880FB28;
L_0880FB28:;
    v1 = LD32(s1+8);
    v0 = LD32(s2+96);
    ST32(s2+4, s0);
    a1 = s0 + 0;
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(v0+316, s0);
    if (cnd_) { goto L_0880FB60; }
    goto L_0880FB44;
L_0880FB44:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FB60:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FB70;
L_0880FB70:;
    ST32(s2+8, v0);
    goto L_0880FB44;
}

/* 0880FB78 */
rv_t func_0880FB78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FB78:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = LD32(a0+96);
    { rv_t r_ = func_08809AB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FB8C;
L_0880FB8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FB98 */
rv_t func_0880FB98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FB98:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = LD32(a0+96);
    { rv_t r_ = func_08809B24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FBAC;
L_0880FBAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0880FBB8 */
rv_t func_0880FBB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FBB8:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_0880F638(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FBD0;
L_0880FBD0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880FBEC; }
    goto L_0880FBD8;
L_0880FBD8:;
    goto L_0880FBDC;
L_0880FBDC:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FBEC:;
    a1 = LD32(s0+96);
    { rv_t r_ = func_0880E498(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FBF4;
L_0880FBF4:;
    goto L_0880FBDC;
}

/* 0880FBFC */
void func_0880FBFC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FBFC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = a1 + 0;
    s1 = a2 & 0xff;
    func_0880D4DC(a0);
    goto L_0880FC20;
L_0880FC20:;
    a0 = LD32(s0+68);
    v1 = D_08AF0A48 - (2632);
    v0 = LD32(s0+52);
    a0 = (a0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v0 = (v0 & ~(0x1u << 1)) | ((s1 & 0x1) << 1);
    a0 = a0 | 0x1;
    v1 = v1 + 2632;
    ST32(s0+64, s2);
    ST32(s0+52, v0);
    ST32(s0, v1);
    ST32(s0+68, a0);
    sp = sp + 16;
    return;
}

/* 0880FC64 */
void func_0880FC64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FC64:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    func_0880D51C(a0, a1);
    goto L_0880FC80;
L_0880FC80:;
    v1 = LD32(s0+68);
    a0 = LD32(s1+64);
    v0 = D_08AF0A48 - (2632);
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v1 = v1 | 0x1;
    v0 = v0 + 2632;
    ST32(s0+68, v1);
    ST32(s0, v0);
    ST32(s0+64, a0);
    sp = sp + 16;
    return;
}

/* 0880FCB8 */
rv_t func_0880FCB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FCB8:;
    sp = sp - 16;
    v0 = D_08AF0A48 - (2632);
    s0 = a0 + 0;
    v0 = v0 + 2632;
    v1 = LD32(a0+52);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    v1 = v1 & 0x2;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0880FD04; }
    goto L_0880FCE8;
L_0880FCE8:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FD04:;
    a1 = LD32(s0+64);
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880FD0C;
L_0880FD0C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0880FCE8; }
    goto L_0880FD14;
L_0880FD14:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_0880FCE8;
}

/* 0880FD20 */
rv_t func_0880FD20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FD20:;
    sp = sp - 16;
    v0 = D_08AF0A48 - (2632);
    s0 = a0 + 0;
    v0 = v0 + 2632;
    v1 = LD32(a0+52);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    v1 = v1 & 0x2;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0880FD74; }
    goto L_0880FD50;
L_0880FD50:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880FD64;
L_0880FD64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FD74:;
    a1 = LD32(s0+64);
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880FD7C;
L_0880FD7C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0880FD50; }
    goto L_0880FD84;
L_0880FD84:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_0880FD50;
}

/* 0880FD90 */
rv_t func_0880FD90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FD90:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 72;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FDB4;
L_0880FDB4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    s2 = v0 + 0;
    func_0880FC64(a0, a1);
    goto L_0880FDC4;
L_0880FDC4:;
    v1 = LD32(s0+8);
    a1 = s1 + 0;
    ST32(s2+4, s1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0880FDF4; }
    goto L_0880FDD8;
L_0880FDD8:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FDF4:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FE04;
L_0880FE04:;
    ST32(s2+8, v0);
    goto L_0880FDD8;
}

/* 0880FE0C */
rv_t func_0880FE0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0880FE0C:;
    sp = sp - 80;
    s2 = sp + 16;
    s1 = a0 + 0;
    a1 = LD32(a0+64);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880FE38;
L_0880FE38:;
    s0 = v0 + 0;
    v1 = D_08B45A9C - (23196);
    a3 = D_08B45AA8 - (23208);
    v0 = a3 + 23208;
    t0 = v1 + 23196;
    a0 = s1 + 0;
    a1 = sp + 0;
    cnd_ = s0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_0880FED4; }
    goto L_0880FE5C;
L_0880FE5C:;
    f9 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(t0+4));
    f10 = BITSF(LD32(a3+23208));
    f11 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f8 = BITSF(LD32(v1+23196));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f8));
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
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FEC0;
L_0880FEC0:;
    a2 = s2 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0880FEEC; }
    goto L_0880FED4;
L_0880FED4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0880FEEC:;
    { rv_t r_ = func_088E48F4(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FEF4;
L_0880FEF4:;
    v0 = LD32(s1+68);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0880FED4; }
    goto L_0880FF04;
L_0880FF04:;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0880FF0C;
L_0880FF0C:;
    v0 = LD32(s1+68);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+68, v0);
    goto L_0880FED4;
}

/* 0880FF1C */
rv_t func_0880FF1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FF1C:;
    sp = sp - 16;
    a1 = a0 + 0;
    v1 = 0 + 0;
    v0 = LD32(a0+68);
    a0 = D_08B30B5C - (2908);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = a0 + 2908;
    if (cnd_) { goto L_0880FF50; }
    goto L_0880FF40;
L_0880FF40:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0880FF50:;
    a1 = LD32(a1+64);
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0880FF58;
L_0880FF58:;
    v1 = v0 < 0x1u;
    goto L_0880FF40;
}

/* 0880FF60 */
void func_0880FF60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0880FF60:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s1 = a0 + 0;
    s2 = a3 + 0;
    s0 = t0 + 0;
    f0 = func_0880E740(a0, a1, a2);
    goto L_0880FF88;
L_0880FF88:;
    ST32(s1+76, 0);
    v0 = s1 + 80;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    v0 = D_08AF09E8 - (2536);
    v0 = v0 + 2536;
    ST16(s1+76, s2);
    ST32(s1, v0);
    ST32(s1+80, FBITS(f2));
    sp = sp + 16;
    return;
}

/* 0880FFD0 */
rv_t func_0880FFD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr32 = v[32], vr33 = v[33], vr34 = v[34];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_0880FFD0:;
    sp = sp - 336;
    s2 = 0x20000u;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD32(a0+76);
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08810138; }
    goto L_08810004;
L_08810004:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = s1 + 0;
    { rv_t r_ = ({ v[32]=vr32;v[33]=vr33;v[34]=vr34;__auto_type vr_t_ = func_0880EAA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr32=v[32];vr33=v[33];vr34=v[34];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810014;
L_08810014:;
    a3 = LD32(s0+76);
    a0 = 0x10000u;
    v0 = a3 & a0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08810120; }
    goto L_08810028;
L_08810028:;
    v1 = LD32(s0+4);
    a3 = a3 | a0;
    a2 = LD32(s0+64);
    a0 = LD32(v1+292);
    v1 = v1 + 292;
    a1 = a2 + 292;
    ST32(sp+96, a0);
    f1 = BITSF(LD32(sp+96));
    v0 = LD32(v1+4);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+100, v0);
    v0 = FBITS(f1);
    {v[8]=BITSF(v0);}
    v0 = LD32(v1+8);
    f2 = BITSF(LD32(sp+100));
    ST32(sp+104, v0);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(LD32(sp+104));
    v0 = LD32(v1+12);
    ST32(sp+96, FBITS(f1));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a0 = FBITS(f2);
    ST32(sp+108, v0);
    {v[9]=BITSF(a0);}
    v1 = FBITS(f0);
    ST32(sp+100, FBITS(f2));
    {v[10]=BITSF(v1);}
    ST32(sp+104, FBITS(f0));
    a0 = LD32(a1+12);
    v0 = LD32(a1+4);
    v1 = LD32(a2+292);
    {v[0]=BITSF(v1);}
    v1 = LD32(a1+8);
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+108);
    {v[2]=BITSF(v1);}
    {v[11]=BITSF(v0);}
    {v[3]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    f4 = BITSF(a0);
    {v0=FBITS(v[4]);}
    {v1=FBITS(v[5]);}
    {a0=FBITS(v[6]);}
    ST32(sp+128, v0);
    ST32(sp+132, v1);
    ST32(sp+136, a0);
    ST32(sp+140, FBITS(f4));
    v1 = LD32(sp+132);
    a0 = LD32(sp+136);
    a1 = LD32(sp+140);
    v0 = LD32(sp+128);
    ST32(sp+116, v1);
    ST32(sp+112, v0);
    ST32(sp+120, a0);
    ST32(sp+124, a1);
    ST32(s0+92, v0);
    ST32(s0+76, a3);
    ST32(s0+96, v1);
    ST32(s0+100, a0);
    ST32(s0+104, a1);
    goto L_08810120;
L_08810120:;
    sp = sp + 336;
    { v[32]=vr32;v[33]=vr33;v[34]=vr34;return (rv_t){ v0, v1, f0 }; }
L_08810138:;
    a1 = LD_U16(a0+76);
    a0 = LD32(a0+64);
    a3 = sp + 16;
    a2 = sp + 0;
    t0 = 1;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { rv_t r_ = ({ v[32]=vr32;v[33]=vr33;v[34]=vr34;__auto_type vr_t_ = func_08807898(a0, a1, a2, a3, t0); vr32=v[32];vr33=v[33];vr34=v[34];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810160;
L_08810160:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(288);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08810004; }
    goto L_08810168;
L_08810168:;
    v1 = LD32(sp+20);
    v0 = LD32(sp+24);
    {u32 a_=sp+(144);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {v[40]=BITSF(v1);}
    v1 = LD32(sp+28);
    {v[41]=BITSF(v0);}
    v0 = LD32(sp+36);
    {v[42]=BITSF(v1);}
    {v[36]=BITSF(v0);}
    v1 = LD32(sp+40);
    {v[37]=BITSF(v1);}
    {v1=FBITS(v[42]);}
    f0 = BITSF(v1);
    v0 = LD32(sp+44);
    {u32 a_=sp+(192);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[38]=BITSF(v0);}
    a0 = FBITS(f0);
    {v0=FBITS(v[37]);}
    f11 = BITSF(v0);
    v0 = LD32(sp+16);
    {vr32=BITSF(v0);}
    {vr33=BITSF(a0);}
    {a0=FBITS(v[40]);}
    f0 = BITSF(a0);
    v0 = FBITS(f11);
    f9 = BITSF(a0);
    {vr34=BITSF(v0);}
    {a0=FBITS(v[38]);}
    v0 = FBITS(f0);
    f0 = BITSF(a0);
    f10 = BITSF(v1);
    v1 = s0 + 80;
    f1 = BITSF(LD32(v1+4));
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(208);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {vr32=BITSF(v0);}
    v0 = LD32(sp+32);
    {vr33=BITSF(v0);}
    v0 = FBITS(f0);
    f0 = BITSF(LD32(sp+4));
    f7 = BITSF(LD32(v1+8));
    f8 = BITSF(a0);
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+8));
    {a0=FBITS(v[41]);}
    {vr34=BITSF(v0);}
    f7 = f7 - f0;
    f0 = BITSF(a0);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f6 = BITSF(a0);
    {u32 a_=sp+(224);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = FBITS(f0);
    {vr32=BITSF(a0);}
    {a0=FBITS(v[36]);}
    f0 = BITSF(a0);
    f4 = BITSF(LD32(s0+80));
    f5 = BITSF(a0);
    a0 = FBITS(f0);
    f0 = BITSF(LD32(sp));
    v0 = LD32(sp+48);
    {vr33=BITSF(a0);}
    f4 = f4 - f0;
    {vr34=BITSF(v0);}
    {u32 a_=sp+(176);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    a0 = FBITS(f1);
    v0 = FBITS(f4);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[16]=BITSF(v0);}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[17]=BITSF(a0);}
    v0 = FBITS(f7);
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {a0=FBITS(v[22]);}
    f3 = BITSF(a0);
    ST32(v1+4, FBITS(f1));
    {v0=FBITS(v[21]);}
    f2 = BITSF(v0);
    ST32(v1+4, v0);
    {a0=FBITS(v[20]);}
    ST32(v1+8, FBITS(f3));
    v0 = LD32(s0+76);
    ST32(s0+80, a0);
    v0 = v0 | s2;
    ST32(sp+36, FBITS(f8));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f5));
    ST32(sp+20, FBITS(f10));
    ST32(sp+24, FBITS(f11));
    ST32(sp+28, FBITS(f9));
    ST32(sp+80, a0);
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, a0);
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f3));
    ST32(s0+76, v0);
    goto L_08810004;
    v[32]=vr32;v[33]=vr33;v[34]=vr34;
}

/* 088102F4 */
rv_t func_088102F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 368);
L_088102F4:;
    sp = sp - 368;
    a3 = a3 & 0xff;
    s3 = 0 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_0881033C; }
    goto L_08810324;
L_08810324:;
    v0 = LD32(a0+64);
    a0 = 0x20000u;
    v1 = LD32(v0+112);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2+76); goto L_08810344; }
    goto L_0881033C;
L_0881033C:;
    s3 = 1;
    v0 = LD32(s2+76);
    goto L_08810344;
L_08810344:;
    v1 = 0x30000u;
    v0 = v0 & v1;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD_U16(s2+76); goto L_08810384; }
    goto L_08810354;
L_08810354:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    { rv_t r_ = func_0880ECC0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810368;
L_08810368:;
    sp = sp + 368;
    return (rv_t){ v0, v1, f0 };
L_08810384:;
    a0 = LD32(s2+64);
    a2 = sp + 48;
    a3 = sp + 0;
    t0 = s3 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_08807898(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088103A8;
L_088103A8:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08810354; }
    goto L_088103B0;
L_088103B0:;
    a1 = s2 + 80;
    a0 = LD32(a1+8);
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[49]=BITSF(v0);}
    v1 = LD32(sp+8);
    v0 = LD32(sp+16);
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(208);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(240);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(s2+80);
    {v[34]=BITSF(v1);}
    {v[16]=BITSF(v0);}
    v1 = LD32(a1+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[17]=BITSF(v1);}
    {v[18]=BITSF(a0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f1 = BITSF(v0);
    ST32(sp+152, FBITS(f4));
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    ST32(sp+144, FBITS(f1));
    ST32(sp+148, v0);
    ST32(sp+128, FBITS(f1));
    ST32(sp+132, v0);
    cnd_ = s3 == 0;
    ST32(sp+136, FBITS(f4));
    if (cnd_) { goto L_088105FC; }
    goto L_08810470;
L_08810470:;
    f0 = BITSF(LD32(sp+48));
    a1 = LD32(s2+12);
    f5 = f0 + f1;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f6 = f1 + f3;
    f3 = f0 + f4;
    ST32(sp+144, FBITS(f5));
    ST32(sp+148, FBITS(f6));
    ST32(sp+152, FBITS(f3));
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f6));
    cnd_ = (s32)a1 < 0;
    ST32(sp+120, FBITS(f3));
    if (cnd_) { goto L_088105A4; }
    goto L_088104A8;
L_088104A8:;
    a0 = LD32(s2+4);
    s1 = sp + 64;
    a2 = sp + 144;
    a3 = s1 + 0;
    t0 = 1;
    { rv_t r_ = func_08806D1C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088104C0;
L_088104C0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08810548; }
    goto L_088104C8;
L_088104C8:;
    f0 = BITSF(LD32(sp+144));
    f4 = BITSF(LD32(sp+148));
    f5 = BITSF(LD32(sp+152));
    f0 = f0 + f0;
    f4 = f4 + f4;
    f5 = f5 + f5;
    f3 = BITSF(LD32(sp+112));
    f2 = BITSF(LD32(sp+116));
    f1 = BITSF(LD32(sp+120));
    f3 = f0 - f3;
    f2 = f4 - f2;
    f1 = f5 - f1;
    ST32(sp+176, FBITS(f0));
    ST32(sp+112, FBITS(f3));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f1));
    ST32(sp+180, FBITS(f4));
    ST32(sp+184, FBITS(f5));
    goto L_08810510;
L_08810510:;
    ST32(sp+160, FBITS(f3));
    ST32(sp+164, FBITS(f2));
    ST32(sp+168, FBITS(f1));
    goto L_0881051C;
L_0881051C:;
    s0 = sp + 192;
    a1 = s1 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881052C;
L_0881052C:;
    a0 = s2 + 0;
    a1 = sp + 112;
    a2 = s0 + 0;
    a3 = s3 + 0;
    { rv_t r_ = func_0880E424(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810540;
L_08810540:;
    v0 = 1;
    goto L_08810368;
L_08810548:;
    f3 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(v0+280));
    v1 = v0 + 280;
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f0 = f0 + f0;
    f4 = f4 + f4;
    f2 = f2 + f2;
    f3 = f0 - f3;
    ST32(sp+160, FBITS(f0));
    f1 = f2 - f1;
    f0 = BITSF(LD32(sp+120));
    ST32(sp+112, FBITS(f3));
    f0 = f4 - f0;
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    ST32(sp+164, FBITS(f2));
    ST32(sp+168, FBITS(f4));
    ST32(sp+176, FBITS(f3));
    goto L_08810598;
L_08810598:;
    ST32(sp+180, FBITS(f1));
    ST32(sp+184, FBITS(f0));
    goto L_0881051C;
L_088105A4:;
    v0 = LD32(s2+4);
    s1 = sp + 64;
    v1 = v0 + 280;
    f0 = BITSF(LD32(v0+280));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f0 = f0 + f0;
    f2 = f2 + f2;
    f1 = f1 + f1;
    f4 = f0 - f5;
    f5 = f2 - f3;
    f3 = f1 - f6;
    ST32(sp+160, FBITS(f0));
    ST32(sp+112, FBITS(f4));
    ST32(sp+116, FBITS(f3));
    ST32(sp+120, FBITS(f5));
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f2));
    ST32(sp+176, FBITS(f4));
    ST32(sp+180, FBITS(f3));
    ST32(sp+184, FBITS(f5));
    goto L_0881051C;
L_088105FC:;
    f2 = BITSF(LD32(sp+48));
    a1 = LD32(s2+12);
    f2 = f2 + f1;
    f1 = BITSF(LD32(sp+52));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+56));
    ST32(sp+48, FBITS(f2));
    f0 = f0 + f4;
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    {v[112]=BITSF(LD32(s2+(92)));}
    {v[113]=BITSF(LD32(s2+(96)));}
    {v[114]=BITSF(LD32(s2+(100)));}
    {v[115]=BITSF(LD32(s2+(104)));}
    {v[116]=BITSF(LD32(sp+(48)));}
    {v[117]=BITSF(LD32(sp+(52)));}
    {v[118]=BITSF(LD32(sp+(56)));}
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
    {ST32(sp+(112),FBITS(v[120]));}
    {ST32(sp+(116),FBITS(v[121]));}
    {ST32(sp+(120),FBITS(v[122]));}
    cnd_ = (s32)a1 < 0;
    a2 = sp + 176;
    if (cnd_) { goto L_08810804; }
    goto L_0881068C;
L_0881068C:;
    a0 = LD32(s2+4);
    a3 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_08806D1C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881069C;
L_0881069C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08810754; }
    goto L_088106A4;
L_088106A4:;
    {v[112]=BITSF(LD32(s2+(92)));}
    {v[113]=BITSF(LD32(s2+(96)));}
    {v[114]=BITSF(LD32(s2+(100)));}
    {v[115]=BITSF(LD32(s2+(104)));}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    f0 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(sp+176));
    f2 = BITSF(LD32(sp+180));
    f1 = BITSF(LD32(sp+184));
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+116));
    s1 = sp + 64;
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+120));
    ST32(sp+112, FBITS(f3));
    f1 = f1 - f0;
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f1));
    goto L_08810510;
L_08810754:;
    {v[112]=BITSF(LD32(s2+(92)));}
    {v[113]=BITSF(LD32(s2+(96)));}
    {v[114]=BITSF(LD32(s2+(100)));}
    {v[115]=BITSF(LD32(s2+(104)));}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    f2 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    s1 = sp + 64;
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f0));
    goto L_0881051C;
L_08810804:;
    {v[112]=BITSF(LD32(s2+(92)));}
    {v[113]=BITSF(LD32(s2+(96)));}
    {v[114]=BITSF(LD32(s2+(100)));}
    {v[115]=BITSF(LD32(s2+(104)));}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    f2 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    s1 = sp + 64;
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    ST32(sp+176, FBITS(f2));
    goto L_08810598;
}

/* 088108AC */
rv_t func_088108AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088108AC:;
    v0 = LD32(a0+20);
    v1 = 0x10000u;
    v0 = v0 | v1;
    ST32(a0+20, v0);
    v0 = 1;
    ST8(a0+21, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 088108C8 */
rv_t func_088108C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088108C8:;
    sp = sp - 16;
    v0 = 1;
    s0 = a2 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08810980; }
    goto L_088108E0;
L_088108E0:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08810960; }
    goto L_088108EC;
L_088108EC:;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08810914; }
    goto L_088108F4;
L_088108F4:;
    cnd_ = a1 == v0;
    a0 = 1;
    if (cnd_) { goto L_08810900; }
    goto L_088108FC;
L_088108FC:;
    a0 = 0 + 0;
    goto L_08810900;
L_08810900:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08810914:;
    v0 = LD_U8(a0+16);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08810944; }
    goto L_08810920;
L_08810920:;
    v1 = LD32(s0);
    goto L_08810924;
L_08810924:;
    a0 = s0 + 0;
    a1 = 4;
    v0 = LD32(v1+24);
    a2 = 0 + 0;
    goto L_08810934;
L_08810934:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881093C;
L_0881093C:;
    a0 = 1;
    goto L_08810900;
L_08810944:;
    a1 = 0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810958;
L_08810958:;
    v1 = LD32(s0);
    goto L_08810924;
L_08810960:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = 0 + 0; goto L_08810900; }
    goto L_08810968;
L_08810968:;
    a0 = LD32(a0+4);
    a1 = 3;
    goto L_08810970;
L_08810970:;
    v1 = LD32(a0);
    a2 = 0 + 0;
    v0 = LD32(v1+24);
    goto L_08810934;
L_08810980:;
    a0 = LD32(a0+4);
    goto L_08810970;
}

/* 08810988 */
rv_t func_08810988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810988:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08810A0C; }
    goto L_08810998;
L_08810998:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088109EC; }
    goto L_088109A4;
L_088109A4:;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088109C8; }
    goto L_088109AC;
L_088109AC:;
    cnd_ = a1 == v0;
    v1 = 1;
    if (cnd_) { goto L_088109B8; }
    goto L_088109B4;
L_088109B4:;
    v1 = 0 + 0;
    goto L_088109B8;
L_088109B8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088109C8:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    a1 = 4;
    v0 = LD32(v1+24);
    a2 = 0 + 0;
    goto L_088109DC;
L_088109DC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088109E4;
L_088109E4:;
    v1 = 1;
    goto L_088109B8;
L_088109EC:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = 0 + 0; goto L_088109B8; }
    goto L_088109F4;
L_088109F4:;
    a0 = LD32(a0+4);
    a1 = 3;
    goto L_088109FC;
L_088109FC:;
    v1 = LD32(a0);
    a2 = 0 + 0;
    v0 = LD32(v1+24);
    goto L_088109DC;
L_08810A0C:;
    a0 = LD32(a0+4);
    a1 = 0 + 0;
    goto L_088109FC;
}

/* 08810A18 */
rv_t func_08810A18(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810A18:;
    sp = sp - 16;
    v0 = D_08AF0D38 - (3384);
    v1 = a0 + 0;
    a1 = LD32(a0+4);
    v0 = v0 + 3384;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08810A48; }
    goto L_08810A3C;
L_08810A3C:;
    goto L_08810A40;
L_08810A40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08810A48:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810A58;
L_08810A58:;
    goto L_08810A40;
}

/* 08810A60 */
rv_t func_08810A60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810A60:;
    sp = sp - 16;
    v0 = D_08AF0D38 - (3384);
    v1 = a0 + 0;
    a1 = LD32(a0+4);
    v0 = v0 + 3384;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08810A90; }
    goto L_08810A84;
L_08810A84:;
    goto L_08810A88;
L_08810A88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08810A90:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810AA0;
L_08810AA0:;
    goto L_08810A88;
}

/* 08810AA8 */
rv_t func_08810AA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810AA8:;
    sp = sp - 16;
    v0 = D_08AF0D38 - (3384);
    s0 = a0 + 0;
    v0 = v0 + 3384;
    v1 = LD32(a0+4);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08810AE8; }
    goto L_08810AD0;
L_08810AD0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08810AD8;
L_08810AD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08810AE8:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810AF8;
L_08810AF8:;
    goto L_08810AD0;
}

/* 08810B00 */
rv_t func_08810B00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08810B00:;
    sp = sp - 32;
    v1 = a1 + 0;
    a2 = sp + 0;
    v0 = LD_U8(a0+16);
    cnd_ = v0 != 0;
    a1 = 5;
    if (cnd_) { goto L_08810B28; }
    goto L_08810B1C;
L_08810B1C:;
    goto L_08810B20;
L_08810B20:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08810B28:;
    v0 = LD32(a0+4);
    a3 = LD32(v1+8);
    ST32(sp+4, FBITS(f12));
    a0 = v0 + 0;
    v1 = LD32(v0);
    ST32(sp, a3);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810B4C;
L_08810B4C:;
    goto L_08810B20;
}

/* 08810B54 */
rv_t func_08810B54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810B54:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810B6C;
L_08810B6C:;
    v1 = D_08AF0D38 - (3384);
    a1 = LD_U8(s0+16);
    f0 = BITSF(LD32(s0+12));
    v1 = v1 + 3384;
    ST8(v0+16, a1);
    ST32(v0, v1);
    ST32(v0+12, FBITS(f0));
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08810BA0 */
void func_08810BA0(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810BA0:;
    v0 = D_08AF0D10 - (3344);
    v0 = v0 + 3344;
    ST8(a0+16, a1);
    sp = sp - 16;
    ST32(a0, v0);
    ST32(a0+28, FBITS(f12));
    ST32(a0+32, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    a1 = 1;
    { rv_t r_ = func_088108AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810BDC;
L_08810BDC:;
    sp = sp + 16;
    return;
}

/* 08810BE8 */
void func_08810BE8(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810BE8:;
    v0 = D_08AF0D10 - (3344);
    v0 = v0 + 3344;
    ST8(a0+16, a1);
    sp = sp - 16;
    ST32(a0, v0);
    ST32(a0+28, FBITS(f12));
    ST32(a0+32, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    a1 = 1;
    { rv_t r_ = func_088108AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810C24;
L_08810C24:;
    sp = sp + 16;
    return;
}

/* 08810C30 */
void func_08810C30(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810C30:;
    v0 = D_08AF0D10 - (3344);
    a2 = a1 + 0;
    v0 = v0 + 3344;
    ST32(a0+32, FBITS(f13));
    sp = sp - 16;
    ST8(a0+16, a2);
    ST32(a0, v0);
    ST32(a0+28, FBITS(f12));
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    a1 = 1;
    { rv_t r_ = func_088108AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810C70;
L_08810C70:;
    sp = sp + 16;
    return;
}

/* 08810C7C */
void func_08810C7C(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810C7C:;
    v0 = D_08AF0D10 - (3344);
    a2 = a1 + 0;
    v0 = v0 + 3344;
    ST32(a0+32, FBITS(f13));
    sp = sp - 16;
    ST8(a0+16, a2);
    ST32(a0, v0);
    ST32(a0+28, FBITS(f12));
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    a1 = 1;
    { rv_t r_ = func_088108AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810CBC;
L_08810CBC:;
    sp = sp + 16;
    return;
}

/* 08810CC8 */
rv_t func_08810CC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08810CC8:;
    sp = sp - 32;
    v0 = 0x10000u;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+20);
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    f20 = f12;
    if (cnd_) { goto L_08810E68; }
    goto L_08810CF8;
L_08810CF8:;
    f0 = BITSF(LD32(s0+24));
    goto L_08810CFC;
L_08810CFC:;
    f12 = f20;
    a1 = s1 + 0;
    f0 = f0 + f20;
    a0 = s0 + 0;
    ST32(s0+24, FBITS(f0));
    { rv_t r_ = func_08810B00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810D14;
L_08810D14:;
    v1 = LD_U8(s0+20);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { f2 = BITSF(LD32(s0+24)); goto L_08810E1C; }
    goto L_08810D24;
L_08810D24:;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0+12, 0); goto L_08810D40; }
    goto L_08810D2C;
L_08810D2C:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08810DB8; }
    goto L_08810D38;
L_08810D38:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08810D58; }
    goto L_08810D40;
L_08810D40:;
    goto L_08810D44;
L_08810D44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08810D58:;
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810D6C;
L_08810D6C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    f1 = f0;
    if (cnd_) { goto L_08810D9C; }
    goto L_08810D7C;
L_08810D7C:;
    f0 = BITSF(LD32(s0+32));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08810D44; }
    goto L_08810D90;
L_08810D90:;
    f0 = f1 / f0;
    goto L_08810D94;
L_08810D94:;
    ST32(s0+12, FBITS(f0));
    goto L_08810D40;
L_08810D9C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810DB0;
L_08810DB0:;
    ST32(s0+12, FBITS(f20));
    goto L_08810D40;
L_08810DB8:;
    a0 = LD32(s0+4);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810DCC;
L_08810DCC:;
    f1 = BITSF(LD32(s0+32));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f20 = f0;
    if (cnd_) { goto L_08810DF4; }
    goto L_08810DE0;
L_08810DE0:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08810E00; }
    goto L_08810DF4;
L_08810DF4:;
    v0 = D_08AEB508 - (-19192);
    f0 = BITSF(LD32(v0-19192));
    goto L_08810D94;
L_08810E00:;
    a0 = s0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810E10;
L_08810E10:;
    f0 = BITSF(LD32(s0+32));
    f0 = f20 / f0;
    goto L_08810D94;
L_08810E1C:;
    f1 = BITSF(LD32(s0+28));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08810E4C; }
    goto L_08810E30;
L_08810E30:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08810D44; }
    goto L_08810E44;
L_08810E44:;
    f0 = f2 / f1;
    goto L_08810D94;
L_08810E4C:;
    a0 = s0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = 2;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810E5C;
L_08810E5C:;
    v1 = D_08AEB508 - (-19192);
    f0 = BITSF(LD32(v1-19192));
    goto L_08810D94;
L_08810E68:;
    v1 = LD32(a0);
    a1 = LD_U8(a0+21);
    v0 = LD32(v1+24);
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810E7C;
L_08810E7C:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+24)); goto L_08810CFC; }
    goto L_08810E84;
L_08810E84:;
    v1 = LD_U8(s0+21);
    ST32(s0+24, 0);
    ST8(s0+20, v1);
    v0 = LD32(s0+20);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s0+20, v0);
    goto L_08810CF8;
}

/* 08810EA0 */
rv_t func_08810EA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810EA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810EBC;
L_08810EBC:;
    a0 = v0 + 0;
    a1 = LD_U8(s0+16);
    f12 = BITSF(LD32(s0+28));
    f13 = BITSF(LD32(s0+32));
    s1 = v0 + 0;
    func_08810C7C(a0, a1, f12, f13);
    goto L_08810ED4;
L_08810ED4:;
    f0 = BITSF(LD32(s0+12));
    v0 = s1 + 0;
    ST32(s1+12, FBITS(f0));
    v1 = LD32(s0+20);
    f0 = BITSF(LD32(s0+24));
    ST32(s1+20, v1);
    ST32(s1+24, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08810F04 */
void func_08810F04(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810F04:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    func_08810BA0(a0, a1, f12);
    goto L_08810F1C;
L_08810F1C:;
    v0 = D_08AF0CE8 - (3304);
    v0 = v0 + 3304;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08810F38 */
void func_08810F38(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810F38:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    func_08810C30(a0, a1, f12, f13);
    goto L_08810F50;
L_08810F50:;
    v0 = D_08AF0CE8 - (3304);
    v0 = v0 + 3304;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08810F6C */
rv_t func_08810F6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08810F6C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08810F88;
L_08810F88:;
    a0 = v0 + 0;
    a1 = LD_U8(s0+16);
    f12 = BITSF(LD32(s0+28));
    f13 = BITSF(LD32(s0+32));
    s1 = v0 + 0;
    func_08810F38(a0, a1, f12, f13);
    goto L_08810FA0;
L_08810FA0:;
    f0 = BITSF(LD32(s0+12));
    v0 = s1 + 0;
    ST32(s1+12, FBITS(f0));
    v1 = LD32(s0+20);
    f0 = BITSF(LD32(s0+24));
    ST32(s1+20, v1);
    ST32(s1+24, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08810FD0 */
rv_t func_08810FD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08810FD0:;
    sp = sp - 32;
    s0 = a0 + 0;
    f21 = BITSF(0);
    a0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811000;
L_08811000:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811058; }
    goto L_08811008;
L_08811008:;
    f0 = BITSF(LD32(s0+28));
    a1 = 3;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_08811028; }
    goto L_08811020;
L_08811020:;
    f0 = BITSF(LD32(s0+12));
    ST32(s0+28, FBITS(f0));
    goto L_08811028;
L_08811028:;
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(s0+24));
    f12 = f0 + f20;
    fcc = FCMP(f12, f1, 12);
    cnd_ = !fcc;
    ST32(s0+20, FBITS(f12));
    if (cnd_) { goto L_0881106C; }
    goto L_08811044;
L_08811044:;
    f0 = BITSF(LD32(s0+28));
    f0 = f0 * f12;
    f0 = f0 / f1;
    ST32(s0+12, FBITS(f0));
    goto L_08811054;
L_08811054:;
    goto L_08811058;
L_08811058:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0881106C:;
    v0 = LD32(s0+4);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811084;
L_08811084:;
    ST32(s0+12, FBITS(f21));
    goto L_08811054;
}

/* 0881108C */
rv_t func_0881108C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881108C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088110A4;
L_088110A4:;
    v1 = D_08AEB50C - (-19188);
    f0 = BITSF(LD32(v1-19188));
    v1 = D_08AEB510 - (-19184);
    f1 = BITSF(LD32(s0+24));
    ST32(v0+12, FBITS(f0));
    f0 = BITSF(LD32(v1-19184));
    ST32(v0+20, 0);
    v1 = D_08AF0CC8 - (3272);
    v1 = v1 + 3272;
    ST32(v0+28, FBITS(f0));
    ST32(v0+24, FBITS(f1));
    f0 = BITSF(LD32(s0+12));
    ST8(v0+16, 0);
    ST32(v0+12, FBITS(f0));
    a1 = LD_U8(s0+16);
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(s0+28));
    ST8(v0+16, a1);
    ST32(v0, v1);
    ST32(v0+20, FBITS(f0));
    ST32(v0+28, FBITS(f1));
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08811110 */
void func_08811110(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0;
L_08811110:;
    v0 = D_08AF0D58 - (3416);
    v0 = v0 + 3416;
    ST32(a0, v0);
    ST32(a0+8, a1);
    ST32(a0+16, a2);
    ST32(a0+20, a3);
    ST32(a0+28, 0);
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    ST32(a0+24, 0);
    return;
}

/* 0881113C */
rv_t func_0881113C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881113C:;
    sp = sp - 16;
    v0 = D_08AF0D58 - (3416);
    v1 = a0 + 0;
    a1 = LD32(a0+24);
    v0 = v0 + 3416;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_0881116C; }
    goto L_08811160;
L_08811160:;
    goto L_08811164;
L_08811164:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881116C:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881117C;
L_0881117C:;
    goto L_08811164;
}

/* 08811184 */
rv_t func_08811184(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08811184:;
    sp = sp - 16;
    v0 = D_08AF0D58 - (3416);
    v1 = a0 + 0;
    a1 = LD32(a0+24);
    v0 = v0 + 3416;
    ST32(v1, v0);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088111B4; }
    goto L_088111A8;
L_088111A8:;
    goto L_088111AC;
L_088111AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088111B4:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088111C4;
L_088111C4:;
    goto L_088111AC;
}

/* 088111CC */
rv_t func_088111CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088111CC:;
    sp = sp - 16;
    v0 = D_08AF0D58 - (3416);
    s0 = a0 + 0;
    v0 = v0 + 3416;
    v1 = LD32(a0+24);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881120C; }
    goto L_088111F4;
L_088111F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088111FC;
L_088111FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881120C:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881121C;
L_0881121C:;
    goto L_088111F4;
}

/* 08811224 */
void func_08811224(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08811224:;
    sp = sp - 16;
    a1 = LD32(a0+32);
    cnd_ = a1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08811298; }
    goto L_0881123C;
L_0881123C:;
    v0 = D_08AEB514 - (-19180);
    ST32(a0+48, 0);
    ST32(a0+52, 0);
    goto L_08811248;
L_08811248:;
    v1 = LD32(s0+16);
    f1 = BITSF(LD32(v0-19180));
    f0 = BITSF(LD32(s0+48));
    v0 = 0x20000u;
    v1 = v1 & v0;
    ST32(s0+80, FBITS(f0));
    f0 = f1;
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, FBITS(f1));
    cnd_ = v1 != 0;
    ST32(s0+68, 0);
    if (cnd_) { goto L_0881127C; }
    goto L_08811278;
L_08811278:;
    f0 = BITSF(LD32(s0+56));
    goto L_0881127C;
L_0881127C:;
    ST32(s0+76, FBITS(f0));
    v0 = 1;
    ST32(s0+72, FBITS(f0));
    goto L_08811288;
L_08811288:;
    sp = sp + 16;
    return;
L_08811298:;
    v0 = D_08B204FC - (1276);
    v1 = LD32(v0+1276);
    cnd_ = v1 == 0;
    t0 = v0 + 1276;
    if (cnd_) { goto L_088112D4; }
    goto L_088112A8;
L_088112A8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088112B0;
L_088112B0:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088112E0; }
    goto L_088112C8;
L_088112C8:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088112B0; }
    goto L_088112D4;
L_088112D4:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08811318; }
    goto L_088112E0;
L_088112E0:;
    ST32(s0+36, a3);
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08811288; }
    goto L_088112EC;
L_088112EC:;
    f1 = BITSF(LD32(a3+20));
    f0 = BITSF(0);
    v0 = D_08AEB514 - (-19180);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(s0+48, FBITS(f1));
    if (cnd_) { goto L_08811310; }
    goto L_08811308;
L_08811308:;
    f0 = BITSF(LD32(v0-19180));
    f0 = f0 / f1;
    goto L_08811310;
L_08811310:;
    ST32(s0+52, FBITS(f0));
    goto L_08811248;
L_08811318:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08811320;
L_08811320:;
    a3 = v0 + 0;
    goto L_088112E0;
}

/* 08811328 */
u64 func_08811328(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08811328:;
    v1 = 1;
    cnd_ = a1 == v1;
    v0 = (s32)a1 < 2;
    if (cnd_) { goto L_088113C0; }
    goto L_08811334;
L_08811334:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08811380; }
    goto L_0881133C;
L_0881133C:;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+44); goto L_08811350; }
    goto L_08811344;
L_08811344:;
    a2 = 0 + 0;
    goto L_08811348;
L_08811348:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08811350:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_08811378; }
    goto L_0881135C;
L_0881135C:;
    v0 = (s32)v1 < -1;
    goto L_08811360;
L_08811360:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08811348; }
    goto L_08811368;
L_08811368:;
    v0 = (s32)v1 < 3;
    goto L_0881136C;
L_0881136C:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = 0 + 0; goto L_08811348; }
    goto L_08811374;
L_08811374:;
    a2 = 1;
    goto L_08811378;
L_08811378:;
    ST32(a0+44, a1);
    goto L_08811348;
L_08811380:;
    cnd_ = a1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08811348; }
    goto L_08811388;
L_08811388:;
    a2 = LD32(a0+44);
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    v0 = (s32)a2 < -1;
    if (cnd_) { goto L_088113A8; }
    goto L_08811398;
L_08811398:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 0 + 0; goto L_08811348; }
    goto L_088113A0;
L_088113A0:;
    v0 = (s32)a2 < 2;
    goto L_0881136C;
L_088113A8:;
    v0 = LD32(a0+40);
    cnd_ = v0 != v1;
    a2 = 0 + 0;
    if (cnd_) { goto L_08811348; }
    goto L_088113B4;
L_088113B4:;
    a2 = 1;
    ST32(a0+44, 0);
    goto L_08811348;
L_088113C0:;
    v1 = LD32(a0+44);
    v0 = (u32)-1;
    cnd_ = v1 != v0;
    v0 = (s32)v1 < -1;
    if (cnd_) { goto L_08811360; }
    goto L_088113D0;
L_088113D0:;
    v1 = LD32(a0+40);
    v0 = v1 ^ 0x2;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08811348; }
    goto L_088113EC;
L_088113EC:;
    a2 = 1;
    goto L_08811378;
}

/* 088113F4 */
rv_t func_088113F4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_088113F4:;
    f0 = BITSF(LD32(a0+60));
    f1 = BITSF(LD32(a0+68));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_08811424; }
    goto L_0881140C;
L_0881140C:;
    f0 = BITSF(LD32(a0+64));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_08811424; }
    goto L_08811420;
L_08811420:;
    f2 = f1;
    goto L_08811424;
L_08811424:;
    v1 = LD32(a0+16);
    v0 = 0x20000u;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    v0 = D_08AEB518 - (-19176);
    if (cnd_) { goto L_0881147C; }
    goto L_08811438;
L_08811438:;
    f0 = BITSF(LD32(a0+72));
    ST32(a0+72, FBITS(f2));
    ST32(a0+76, FBITS(f0));
    goto L_08811444;
L_08811444:;
    v0 = 0x10000u;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08AEB51C - (-19172); goto L_08811474; }
    goto L_08811454;
L_08811454:;
    v0 = D_08AEB518 - (-19176);
    f1 = BITSF(LD32(a0+72));
    f0 = BITSF(LD32(v0-19176));
    f2 = BITSF(LD32(a0+48));
    f0 = f0 - f1;
    f2 = f2 * f0;
    goto L_0881146C;
L_0881146C:;
    ST32(a0+80, FBITS(f2));
    return (rv_t){ v0, v1, f0 };
L_08811474:;
    f2 = BITSF(LD32(v0-19172));
    goto L_0881146C;
L_0881147C:;
    f0 = BITSF(LD32(v0-19176));
    f1 = BITSF(LD32(a0+72));
    f0 = f0 - f2;
    ST32(a0+76, FBITS(f1));
    ST32(a0+72, FBITS(f0));
    goto L_08811444;
}

/* 08811494 */
void func_08811494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08811494:;
    sp = sp - 144;
    v0 = a0 + 0;
    s2 = sp + 80;
    t5 = a1 + 0;
    s1 = a3 + 0;
    t2 = a1 + 104;
    t4 = a2 + 0;
    a0 = s2 + 0;
    a3 = 0 + 0;
    v0 = LD32(v0+36);
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088114DC; }
    goto L_088114D8;
L_088114D8:;
    a2 = LD32(v0+100);
    goto L_088114DC;
L_088114DC:;
    cnd_ = a2 == 0;
    if (cnd_) { t3 = LD32(t2+20); goto L_08811530; }
    goto L_088114E4;
L_088114E4:;
    v0 = LD32(a2);
    ST32(s1, v0);
    v1 = LD32(a2+4);
    ST32(s1+4, v1);
    v0 = LD32(a2+8);
    ST32(s1+8, v0);
    v1 = LD32(a2+12);
    ST32(s1+12, v1);
    v0 = LD32(a2+16);
    ST32(s1+16, v0);
    v1 = LD32(a2+20);
    ST32(s1+20, v1);
    goto L_08811514;
L_08811514:;
    v0 = 1;
    sp = sp + 144;
    return;
L_08811530:;
    t0 = LD32(t2+8);
    t1 = LD32(t2+12);
    v1 = LD32(t5+104);
    a2 = LD32(t2+4);
    t2 = LD32(t2+16);
    v0 = LD32(t5+36);
    ST32(sp, v1);
    ST32(sp+8, t0);
    ST32(sp+12, t1);
    ST32(sp+20, t3);
    ST32(sp+4, a2);
    ST32(sp+16, t2);
    s0 = LD32(t4+92);
    {v[112]=BITSF(LD32(s0+(12)));}
    {v[113]=BITSF(LD32(s0+(16)));}
    {v[114]=BITSF(LD32(s0+(20)));}
    {v[115]=BITSF(LD32(s0+(24)));}
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
    f6 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f7 = BITSF(FBITS(f7) ^ 0x80000000u);
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    f0 = BITSF(LD32(sp+12));
    f3 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+20));
    f0 = f0 + f6;
    f3 = f3 + f5;
    f4 = f4 + f6;
    f1 = f1 + f5;
    f2 = f2 + f7;
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    ST32(sp, FBITS(f3));
    f0 = f0 + f7;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f4));
    ST32(sp+20, FBITS(f2));
    a2 = LD32(t5+40);
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f6));
    ST32(sp+120, FBITS(f7));
    ST32(sp+16, FBITS(f0));
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08811650;
L_08811650:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = sp + 32;
    a3 = 0 + 0;
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08811664;
L_08811664:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+12));
    f1 = f1 + f0;
    f4 = BITSF(LD32(s1+8));
    f5 = BITSF(LD32(s1+20));
    f6 = BITSF(LD32(s1+16));
    ST32(s1+4, FBITS(f1));
    f0 = BITSF(LD32(s0));
    f2 = f2 + f0;
    ST32(s1, FBITS(f2));
    f0 = BITSF(LD32(s0+4));
    f3 = f3 + f0;
    ST32(s1+12, FBITS(f3));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 + f0;
    ST32(s1+8, FBITS(f4));
    f0 = BITSF(LD32(s0+8));
    f5 = f5 + f0;
    ST32(s1+20, FBITS(f5));
    f0 = BITSF(LD32(s0+8));
    f6 = f6 + f0;
    ST32(s1+16, FBITS(f6));
    goto L_08811514;
}

/* 088116C8 */
rv_t func_088116C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_088116C8:;
    sp = sp - 80;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    v0 = LD32(a0+16);
    s4 = (v0 >> 18) & 0x1;
    cnd_ = s4 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08811BD4; }
    goto L_08811708;
L_08811708:;
    a3 = LD32(s0+36);
    cnd_ = a3 != 0;
    t3 = a3 + 0;
    if (cnd_) { goto L_088117C0; }
    goto L_08811714;
L_08811714:;
    v0 = s2 << 3;
    a0 = LD32(s3+32);
    v0 = v0 - s2;
    v0 = v0 << 2;
    a0 = a0 + v0;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    v0 = LD32(a0+12);
    ST32(s1+12, v0);
    v1 = LD32(a0+16);
    ST32(s1+16, v1);
    v0 = LD32(a0+20);
    ST32(s1+20, v0);
    v1 = LD32(a0+24);
    cnd_ = s4 != 0;
    ST32(s1+24, v1);
    if (cnd_) { goto L_08811794; }
    goto L_08811764;
L_08811764:;
    a0 = 1;
    goto L_08811768;
L_08811768:;
    v0 = a0 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08811794:;
    v0 = LD32(s3);
    a3 = s1 + 12;
    a0 = s3 + 0;
    v1 = LD32(v0+12);
    a1 = s2 + 0;
    t0 = s1 + 0;
    a2 = 0 + 0;
    goto L_088117B0;
L_088117B0:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088117B8;
L_088117B8:;
    a0 = 1;
    goto L_08811768;
L_088117C0:;
    v1 = LD32(a3+76);
    s5 = s2 << 3;
    v1 = s5 + v1;
    v0 = LD_U16(v1);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08811768; }
    goto L_088117D8;
L_088117D8:;
    f12 = BITSF(LD32(s0+72));
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = !fcc;
    s6 = s1 + 12;
    if (cnd_) { goto L_08811BB8; }
    goto L_088117F0;
L_088117F0:;
    v0 = LD_U16(v1+2);
    v1 = LD32(a3+88);
    v0 = v0 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = 0xffc70000u;
    t2 = s6 + 0;
    v1 = a0 & v0;
    v0 = v1 >> 22;
    f0 = BITSF(v0);
    t1 = a0 & 0x3;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08811B9C; }
    goto L_08811824;
L_08811824:;
    a1 = D_08AEB520 - (-19168);
    f0 = BITSF(LD32(a1-19168));
    a2 = D_08AEB524 - (-19164);
    v0 = 0x3f0000u;
    f0 = f1 * f0;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(a2-19164));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08811B80; }
    goto L_08811858;
L_08811858:;
    f0 = BITSF(LD32(a1-19168));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(a2-19164));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08811B64; }
    goto L_0881187C;
L_0881187C:;
    f0 = BITSF(LD32(a1-19168));
    f1 = BITSF(LD32(a2-19164));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEB528 - (-19160);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-19160));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_088118C4; }
    goto L_088118C0;
L_088118C0:;
    f0 = f2;
    goto L_088118C4;
L_088118C4:;
    v1 = LD32(t3+76);
    a0 = t1 + 1;
    a0 = a0 & 0x3;
    t0 = s5 + v1;
    a0 = a0 << 2;
    v1 = t1 << 2;
    v1 = v1 + t2;
    a0 = a0 + t2;
    v0 = t1 + 2;
    ST32(v1, FBITS(f6));
    a1 = t1 + 3;
    v0 = v0 & 0x3;
    ST32(a0, FBITS(f5));
    a1 = a1 & 0x3;
    v0 = v0 << 2;
    a0 = LD_U16(t0+6);
    v0 = v0 + t2;
    a1 = a1 << 2;
    ST32(v0, FBITS(f4));
    a1 = a1 + t2;
    v0 = a0 << 1;
    v1 = LD32(t3+96);
    ST32(a1, FBITS(f0));
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_08811944;
L_08811944:;
    v1 = LD32(a3+40);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD_U8(a3+33); goto L_088119DC; }
    goto L_08811950;
L_08811950:;
    v0 = s2 << 2;
    v0 = v0 + v1;
    v1 = D_08AEB52C - (-19156);
    f5 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1-19156));
    fcc = FCMP(f0, f5, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(a3+33); goto L_088119DC; }
    goto L_08811974;
L_08811974:;
    t0 = LD32(s3+32);
    v0 = s5 - s2;
    v0 = v0 << 2;
    v0 = t0 + v0;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f0 = f1 / f5;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    ST32(s1+8, FBITS(f2));
    ST32(s1, FBITS(f3));
    ST32(s1+4, FBITS(f4));
    v0 = LD_U8(a3+33);
    goto L_088119DC;
L_088119DC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811B3C; }
    goto L_088119E4;
L_088119E4:;
    v0 = LD_U8(a3+34);
    cnd_ = v0 == 0;
    t0 = LD32(s3+32);
    if (cnd_) { goto L_08811B00; }
    goto L_088119F0;
L_088119F0:;
    a1 = s5 - s2;
    a1 = a1 << 2;
    a1 = t0 + a1;
    a0 = a1 + 12;
    a2 = LD32(a0+12);
    v1 = LD32(a0+4);
    v0 = LD32(a1+12);
    {v[8]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[9]=BITSF(v1);}
    a0 = LD32(s6+8);
    v1 = LD32(s6+4);
    {v[10]=BITSF(v0);}
    v0 = LD32(s1+12);
    {v[11]=BITSF(a2);}
    {v[0]=BITSF(v0);}
    a2 = LD32(s6+12);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {v[3]=BITSF(a2);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f2 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    {v0=FBITS(v[6]);}
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, v0);
    ST32(sp+28, FBITS(f4));
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    a0 = LD32(sp+24);
    a2 = LD32(sp+28);
    ST32(s1+12, v0);
    ST32(s1+16, v1);
    ST32(s1+20, a0);
    ST32(s1+24, a2);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a2);
    {v[112]=BITSF(LD32(a1+(12)));}
    {v[113]=BITSF(LD32(a1+(16)));}
    {v[114]=BITSF(LD32(a1+(20)));}
    {v[115]=BITSF(LD32(a1+(24)));}
    {v[116]=BITSF(LD32(s1+(0)));}
    {v[117]=BITSF(LD32(s1+(4)));}
    {v[118]=BITSF(LD32(s1+(8)));}
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
    {ST32(s1+(0),FBITS(v[120]));}
    {ST32(s1+(4),FBITS(v[121]));}
    {ST32(s1+(8),FBITS(v[122]));}
    goto L_08811B00;
L_08811B00:;
    v0 = s5 - s2;
    v0 = v0 << 2;
    v0 = t0 + v0;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s1));
    f4 = BITSF(LD32(v0));
    f1 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+8));
    f2 = f2 + f4;
    f1 = f1 + f3;
    f0 = f0 + f5;
    ST32(s1, FBITS(f2));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    goto L_08811B3C;
L_08811B3C:;
    cnd_ = s4 == 0;
    if (cnd_) { a0 = 1; goto L_08811768; }
    goto L_08811B44;
L_08811B44:;
    v0 = LD32(s3);
    a2 = LD_U8(a3+32);
    a0 = s3 + 0;
    v1 = LD32(v0+12);
    a1 = s2 + 0;
    a3 = s6 + 0;
    t0 = s1 + 0;
    goto L_088117B0;
L_08811B64:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_0881187C;
L_08811B80:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08811858;
L_08811B9C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 23;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08811824;
L_08811BB8:;
    a0 = a3 + 0;
    a1 = s2 + 0;
    a3 = s6 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088182B4(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811BCC;
L_08811BCC:;
    a3 = LD32(s0+36);
    goto L_08811944;
L_08811BD4:;
    v1 = LD32(a1);
    a0 = s3 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = a2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811BE8;
L_08811BE8:;
    s2 = v0 + 0;
    goto L_08811708;
}

/* 08811BF0 */
u32 func_08811BF0(float f12, float f13, float f14, float f15)
{
    u32 v0 = 0;
    int fcc = 0;
    int cnd_;
L_08811BF0:;
    fcc = FCMP(f12, f14, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08811C10; }
    goto L_08811C00;
L_08811C00:;
    fcc = FCMP(f14, f13, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08811C70; }
    goto L_08811C10;
L_08811C10:;
    fcc = FCMP(f12, f15, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08811C30; }
    goto L_08811C20;
L_08811C20:;
    fcc = FCMP(f15, f13, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08811C70; }
    goto L_08811C30;
L_08811C30:;
    fcc = FCMP(f14, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08811C50; }
    goto L_08811C40;
L_08811C40:;
    fcc = FCMP(f12, f15, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08811C70; }
    goto L_08811C50;
L_08811C50:;
    fcc = FCMP(f14, f13, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08811C78; }
    goto L_08811C60;
L_08811C60:;
    fcc = FCMP(f13, f15, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08811C78; }
    goto L_08811C70;
L_08811C70:;
    v0 = 1;
    return v0;
L_08811C78:;
    v0 = 0 + 0;
    return v0;
}

/* 08811C80 */
void func_08811C80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08811C80:;
    sp = sp - 16;
    s1 = t0 + 0;
    s0 = a0 + 0;
    func_08811110(a0, a1, a2, a3);
    goto L_08811C9C;
L_08811C9C:;
    v1 = D_08AEB534 - (-19148);
    f0 = BITSF(LD32(v1-19148));
    v0 = D_08AF0D90 - (3472);
    v0 = v0 + 3472;
    ST32(s0, v0);
    v0 = (u32)-1;
    a0 = s0 + 0;
    ST32(s0+32, s1);
    ST32(s0+64, FBITS(f0));
    ST32(s0+44, v0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    ST32(s0+80, 0);
    func_08811224(a0);
    goto L_08811CF0;
L_08811CF0:;
    sp = sp + 16;
    return;
}

/* 08811D04 */
rv_t func_08811D04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08811D04:;
    sp = sp - 16;
    v0 = D_08AF0D90 - (3472);
    v0 = v0 + 3472;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    a1 = LD32(s0+8);
    ST32(s0, v0);
    a0 = a0 + 52;
    func_08AA233C(a0, a1, t1, t2, t3);
    goto L_08811D30;
L_08811D30:;
    a0 = s0 + 0;
    { rv_t r_ = func_0881113C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811D38;
L_08811D38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08811D48 */
rv_t func_08811D48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08811D48:;
    sp = sp - 16;
    v0 = D_08AF0D90 - (3472);
    v0 = v0 + 3472;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    a1 = LD32(s0+8);
    ST32(s0, v0);
    a0 = a0 + 52;
    func_08AA233C(a0, a1, t1, t2, t3);
    goto L_08811D74;
L_08811D74:;
    a0 = s0 + 0;
    { rv_t r_ = func_0881113C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811D7C;
L_08811D7C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08811D84;
L_08811D84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08811D94 */
rv_t func_08811D94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr92 = v[92], vr96 = v[96], vr100 = v[100], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125];
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 272);
L_08811D94:;
    sp = sp - 272;
    s4 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    f20 = f12;
    a3 = LD32(a0);
    v1 = LD32(a0+16);
    v0 = LD32(a3+32);
    s7 = (v1 >> 18) & 0x1;
    s0 = (v1 >> 21) & 0x1;
    s3 = (v1 >> 20) & 0x1;
    t_ = v0;
    s6 = (v1 >> 17) & 0x1;
    { rv_t r_ = ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr121=v[121];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811DF0;
L_08811DF0:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0881296C; }
    goto L_08811DF8;
L_08811DF8:;
    a1 = s4 + 0;
    a2 = 0 + 0;
    a3 = sp + 0;
    { rv_t r_ = ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = func_088116C8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr121=v[121];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811E08;
L_08811E08:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811FEC; }
    goto L_08811E10;
L_08811E10:;
    a2 = LD32(s1+4);
    v0 = a2 & 0x1;
    cnd_ = v0 != 0;
    t0 = a2 + 0;
    if (cnd_) { goto L_08812964; }
    goto L_08811E20;
L_08811E20:;
    v0 = LD32(s1);
    v1 = 0x400000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s4+32); goto L_08812924; }
    goto L_08811E34;
L_08811E34:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a3 = LD32(s1+92);
    a2 = D_08B45ACC - (23244);
    a0 = a2 + 23244;
    ST32(a3, FBITS(f0));
    a1 = a3 + 12;
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(a2+23244);
    ST32(a3+12, v0);
    v1 = LD32(a0+4);
    ST32(a1+4, v1);
    v0 = LD32(a0+8);
    ST32(a1+8, v0);
    v1 = LD32(a0+12);
    ST32(a1+12, v1);
    goto L_08811E84;
L_08811E84:;
    v0 = t0 | 0x1;
    a2 = v0 + 0;
    ST32(s1+4, v0);
    goto L_08811E90;
L_08811E90:;
    cnd_ = s0 == 0;
    v0 = a2 & 0x1;
    if (cnd_) { goto L_08812774; }
    goto L_08811E98;
L_08811E98:;
    cnd_ = v0 == 0;
    v0 = D_08AEB538 - (-19144);
    if (cnd_) { goto L_088126DC; }
    goto L_08811EA0;
L_08811EA0:;
    a1 = a3 + 12;
    v0 = LD32(a3+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(a1+12);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+12);
    {v[11]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {a0=FBITS(v[5]);}
    f4 = BITSF(v0);
    ST32(sp+84, a0);
    {v1=FBITS(v[4]);}
    {v0=FBITS(v[6]);}
    ST32(sp+80, v1);
    ST32(sp+88, v0);
    ST32(sp+92, FBITS(f4));
    v0 = LD32(sp+84);
    v1 = LD32(sp+88);
    a0 = LD32(sp+80);
    ST32(sp+68, v0);
    v0 = LD32(sp+92);
    ST32(sp+72, v1);
    ST32(sp+76, v0);
    ST32(sp+64, a0);
    ST32(a3+12, a0);
    v0 = LD32(sp+68);
    ST32(a1+4, v0);
    v1 = LD32(sp+72);
    ST32(a1+8, v1);
    v0 = LD32(sp+76);
    goto L_08811F44;
L_08811F44:;
    ST32(a1+12, v0);
    goto L_08811F48;
L_08811F48:;
    cnd_ = s3 == 0;
    v0 = a2 & 0x1;
    if (cnd_) { goto L_08812658; }
    goto L_08811F50;
L_08811F50:;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08812628; }
    goto L_08811F58;
L_08811F58:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    goto L_08811F60;
L_08811F60:;
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    goto L_08811F78;
L_08811F78:;
    s0 = sp + 32;
    a2 = s1 + 0;
    a3 = s0 + 0;
    a0 = s2 + 0;
    a1 = s4 + 0;
    ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;func_08811494(a0, a1, a2, a3, 0); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];});
    goto L_08811F90;
L_08811F90:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f12 = f20;
    { rv_t r_ = func_08AA22C0(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08811FA0;
L_08811FA0:;
    v0 = LD32(s1+4);
    a0 = LD32(s2+36);
    v0 = v0 | 0x1;
    cnd_ = a0 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08811FE8; }
    goto L_08811FB4;
L_08811FB4:;
    a1 = LD32(s2+16);
    v0 = 0x400000u;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s2+72)); goto L_0881250C; }
    goto L_08811FC8;
L_08811FC8:;
    v0 = 0x800000u;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+36); goto L_0881235C; }
    goto L_08811FD8;
L_08811FD8:;
    v0 = 0x1000000u;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s2+72)); goto L_0881201C; }
    goto L_08811FE8;
L_08811FE8:;
    goto L_08811FEC;
L_08811FEC:;
    goto L_08811FF0;
L_08811FF0:;
    v0 = 1;
    sp = sp + 272;
    { v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;return (rv_t){ v0, v1, f0 }; }
L_0881201C:;
    a0 = LD32(s2+36);
    a1 = s4 + 0;
    a2 = sp + 128;
    a3 = sp + 96;
    t0 = s7 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = func_08818A04(a0, a1, a2, a3, t0, f12); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr121=v[121];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08812034;
L_08812034:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811FEC; }
    goto L_0881203C;
L_0881203C:;
    v0 = LD32(s1);
    a0 = 0x200000u;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(sp+132));
    if (cnd_) { goto L_08812290; }
    goto L_08812050;
L_08812050:;
    v0 = D_08AEB538 - (-19144);
    f0 = BITSF(LD32(v0-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp+128));
    if (cnd_) { goto L_0881213C; }
    goto L_08812068;
L_08812068:;
    f2 = BITSF(LD32(s1+64));
    f0 = BITSF(LD32(sp+128));
    v0 = s1 + 64;
    f4 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(sp+132));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+136));
    f4 = f4 + f1;
    v1 = s1 + 76;
    f3 = f3 + f0;
    ST32(s1+64, FBITS(f2));
    ST32(v0+4, FBITS(f4));
    ST32(v0+8, FBITS(f3));
    a0 = LD32(v1+4);
    a1 = LD32(v1+8);
    a2 = LD32(v1+12);
    v0 = LD32(s1+76);
    v1 = LD32(sp+100);
    {v[8]=BITSF(v0);}
    v0 = LD32(sp+96);
    {v[9]=BITSF(a0);}
    {vr0=BITSF(v0);}
    {v[10]=BITSF(a1);}
    v0 = LD32(sp+104);
    {v[1]=BITSF(v1);}
    {v[11]=BITSF(a2);}
    v1 = LD32(sp+108);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    f4 = BITSF(a0);
    {v0=FBITS(v[4]);}
    {v1=FBITS(v[5]);}
    ST32(sp+64, v0);
    {a0=FBITS(v[6]);}
    ST32(sp+68, v1);
    ST32(sp+72, a0);
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a0 = LD32(sp+72);
    a1 = LD32(sp+76);
    ST32(s1+76, v0);
    ST32(s1+88, a1);
    ST32(s1+80, v1);
    ST32(s1+84, a0);
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    ST32(sp+88, a0);
    ST32(sp+92, a1);
    goto L_08811FEC;
L_0881213C:;
    f4 = BITSF(LD32(sp+132));
    f3 = BITSF(LD32(sp+136));
    v0 = s1 + 64;
    f4 = f4 * f20;
    f5 = f5 * f20;
    f3 = f3 * f20;
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1+64));
    f2 = f2 + f4;
    f0 = f0 + f3;
    f1 = f1 + f5;
    a0 = s1 + 76;
    ST32(v0+4, FBITS(f2));
    v1 = FBITS(f20);
    ST32(s1+64, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    ST32(sp+116, FBITS(f4));
    ST32(sp+112, FBITS(f5));
    ST32(sp+120, FBITS(f3));
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr115=BITSF(LD32(v0+(12)));}
    {vr116=BITSF(LD32(sp+(96)));}
    {vr117=BITSF(LD32(sp+(100)));}
    {vr118=BITSF(LD32(sp+(104)));}
    {vr119=BITSF(LD32(sp+(108)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v1);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(64);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(76);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    a1 = LD32(a0+12);
    v1 = LD32(a0+4);
    v0 = LD32(s1+76);
    {v[8]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(sp+68);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+64);
    {v[11]=BITSF(a1);}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+72);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+76);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    f4 = BITSF(a0);
    {v0=FBITS(v[4]);}
    {v1=FBITS(v[5]);}
    ST32(sp+144, v0);
    {a0=FBITS(v[6]);}
    ST32(sp+148, v1);
    ST32(sp+152, a0);
    ST32(sp+156, FBITS(f4));
    v1 = LD32(sp+144);
    a0 = LD32(sp+148);
    v0 = LD32(sp+156);
    a1 = LD32(sp+152);
    ST32(sp+80, v1);
    ST32(sp+84, a0);
    ST32(sp+88, a1);
    ST32(sp+92, v0);
    ST32(s1+88, v0);
    ST32(s1+76, v1);
    ST32(s1+80, a0);
    ST32(s1+84, a1);
    goto L_08811FE8;
L_08812290:;
    f1 = BITSF(LD32(sp+136));
    f0 = BITSF(LD32(sp+128));
    f2 = f2 * f20;
    f1 = f1 * f20;
    v0 = s1 + 64;
    f0 = f0 * f20;
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f1));
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    ST32(s1+64, FBITS(f0));
    v1 = LD32(s1);
    ST32(sp+112, FBITS(f0));
    v1 = v1 | a0;
    ST32(sp+116, FBITS(f2));
    a0 = FBITS(f20);
    ST32(sp+120, FBITS(f1));
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr115=BITSF(LD32(v0+(12)));}
    {vr116=BITSF(LD32(sp+(96)));}
    {vr117=BITSF(LD32(sp+(100)));}
    {vr118=BITSF(LD32(sp+(104)));}
    {vr119=BITSF(LD32(sp+(108)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(a0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(144);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(156);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+144);
    a0 = LD32(sp+148);
    a1 = LD32(sp+152);
    a2 = LD32(sp+156);
    goto L_08812344;
L_08812344:;
    ST32(s1, v1);
    ST32(s1+76, v0);
    ST32(s1+80, a0);
    ST32(s1+84, a1);
    ST32(s1+88, a2);
    goto L_08811FE8;
L_0881235C:;
    f12 = BITSF(LD32(s2+72));
    f13 = BITSF(LD32(s2+48));
    a1 = sp + 128;
    t0 = s6 + 0;
    a2 = sp + 160;
    a3 = s7 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08818D80(a0, a1, a2, a3, t0, f12, f13); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08812378;
L_08812378:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+16); goto L_08811FD8; }
    goto L_08812380;
L_08812380:;
    v0 = LD32(s1);
    v1 = 0x100000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    f6 = BITSF(LD32(sp+160));
    if (cnd_) { goto L_088124C0; }
    goto L_08812394;
L_08812394:;
    v0 = D_08AEB538 - (-19144);
    f7 = BITSF(LD32(v0-19144));
    fcc = FCMP(f7, f20, 14);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp+132));
    if (cnd_) { goto L_0881245C; }
    goto L_088123AC;
L_088123AC:;
    a0 = s1 + 48;
    f0 = BITSF(LD32(sp+132));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(sp+136));
    f4 = BITSF(LD32(s1+48));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+128));
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f3));
    ST32(s1+48, FBITS(f4));
    ST32(s1+60, FBITS(f6));
    goto L_088123E4;
L_088123E4:;
    v0 = LD32(s1+48);
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(a0+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a1 = LD32(s2+16);
    if (cnd_) { goto L_08811FD8; }
    goto L_08812420;
L_08812420:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f2 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(v[1]);}
    ST32(a0+8, FBITS(f2));
    ST32(sp+112, v0);
    ST32(a0+4, v1);
    ST32(sp+120, FBITS(f2));
    ST32(sp+116, v1);
    ST32(s1+48, v0);
    goto L_08811FD8;
L_0881245C:;
    f4 = BITSF(LD32(sp+136));
    a0 = s1 + 48;
    f5 = f5 * f20;
    f4 = f4 * f20;
    f2 = BITSF(LD32(sp+128));
    f3 = BITSF(LD32(s1+48));
    ST32(sp+116, FBITS(f5));
    f2 = f2 * f20;
    f7 = f7 - f20;
    ST32(sp+120, FBITS(f4));
    f6 = f6 * f20;
    f3 = f3 + f2;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+8));
    ST32(sp+112, FBITS(f2));
    f0 = f0 + f5;
    f1 = f1 + f4;
    ST32(s1+48, FBITS(f3));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    f0 = BITSF(LD32(s1+60));
    f0 = f0 * f7;
    f0 = f0 + f6;
    ST32(s1+60, FBITS(f0));
    goto L_088123E4;
L_088124C0:;
    f0 = BITSF(LD32(sp+132));
    f1 = BITSF(LD32(sp+136));
    a0 = s1 + 48;
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = BITSF(LD32(sp+128));
    f3 = f6 * f20;
    ST32(sp+116, FBITS(f0));
    f2 = f2 * f20;
    ST32(sp+120, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    v0 = LD32(s1);
    ST32(s1+48, FBITS(f2));
    v0 = v0 | v1;
    ST32(s1+60, FBITS(f3));
    ST32(s1, v0);
    ST32(sp+112, FBITS(f2));
    goto L_088123E4;
L_0881250C:;
    f13 = BITSF(LD32(s2+48));
    a2 = sp + 112;
    a1 = s4 + 0;
    a3 = s7 + 0;
    t0 = s6 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08818AF4(a0, a1, a2, a3, t0, f12, f13); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08812524;
L_08812524:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+16); goto L_08811FC8; }
    goto L_0881252C;
L_0881252C:;
    v0 = LD32(s1);
    a0 = 0x80000u;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(sp+116));
    if (cnd_) { goto L_088125E4; }
    goto L_08812540;
L_08812540:;
    v0 = D_08AEB538 - (-19144);
    f0 = BITSF(LD32(v0-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp+112));
    if (cnd_) { goto L_08812594; }
    goto L_08812558;
L_08812558:;
    f0 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(s1+36));
    v0 = s1 + 36;
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    a1 = LD32(s2+16);
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(s1+36, FBITS(f3));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f4));
    goto L_08811FC8;
L_08812594:;
    f4 = BITSF(LD32(sp+116));
    f3 = BITSF(LD32(sp+120));
    v0 = s1 + 36;
    f5 = f5 * f20;
    f4 = f4 * f20;
    f3 = f3 * f20;
    f1 = BITSF(LD32(s1+36));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f1 = f1 + f5;
    f2 = f2 + f4;
    f0 = f0 + f3;
    a1 = LD32(s2+16);
    ST32(s1+36, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f4));
    ST32(sp+136, FBITS(f3));
    goto L_08811FC8;
L_088125E4:;
    f1 = BITSF(LD32(sp+120));
    v1 = s1 + 36;
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = BITSF(LD32(sp+112));
    ST32(v1+4, FBITS(f2));
    f0 = f0 * f20;
    ST32(v1+8, FBITS(f1));
    v0 = LD32(s1);
    ST32(s1+36, FBITS(f0));
    v0 = v0 | a0;
    ST32(s1, v0);
    a1 = LD32(s2+16);
    ST32(sp+128, FBITS(f0));
    ST32(sp+132, FBITS(f2));
    ST32(sp+136, FBITS(f1));
    goto L_08811FC8;
L_08812628:;
    f3 = BITSF(LD32(a3));
    f4 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(a3, FBITS(f3));
    ST32(a3+8, FBITS(f2));
    ST32(a3+4, FBITS(f4));
    goto L_08811F78;
L_08812658:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_088126C4; }
    goto L_08812660;
L_08812660:;
    v0 = D_08AEB538 - (-19144);
    f0 = BITSF(LD32(v0-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08812628; }
    goto L_08812678;
L_08812678:;
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f5 * f20;
    f4 = f4 * f20;
    f3 = f3 * f20;
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f4));
    ST32(sp+120, FBITS(f3));
    f1 = BITSF(LD32(a3));
    f2 = BITSF(LD32(a3+4));
    f0 = BITSF(LD32(a3+8));
    f1 = f1 + f5;
    f2 = f2 + f4;
    f0 = f0 + f3;
    ST32(a3, FBITS(f1));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f2));
    goto L_08811F78;
L_088126C4:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = f2 * f20;
    goto L_08811F60;
L_088126DC:;
    f0 = BITSF(LD32(v0-19144));
    a0 = FBITS(f0);
    v1 = D_08B45ACC - (23244);
    goto L_088126E8;
L_088126E8:;
    v1 = v1 + 23244;
    {vr112=BITSF(LD32(v1+(0)));}
    {vr113=BITSF(LD32(v1+(4)));}
    {vr114=BITSF(LD32(v1+(8)));}
    {vr115=BITSF(LD32(v1+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(a0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(96);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(108);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+96);
    a0 = a3 + 12;
    ST32(a3+12, v0);
    v1 = LD32(sp+100);
    ST32(a0+4, v1);
    v0 = LD32(sp+104);
    ST32(a0+8, v0);
    v1 = LD32(sp+108);
    ST32(a0+12, v1);
    goto L_08811F48;
L_08812774:;
    a0 = FBITS(f20);
    cnd_ = v0 == 0;
    v1 = D_08B45ACC - (23244);
    if (cnd_) { goto L_088126E8; }
    goto L_08812780;
L_08812780:;
    v0 = D_08AEB538 - (-19144);
    f0 = BITSF(LD32(v0-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a1 = a3 + 12;
    if (cnd_) { goto L_0881283C; }
    goto L_08812798;
L_08812798:;
    v0 = LD32(a3+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(a1+12);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+12);
    {v[11]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {a0=FBITS(v[5]);}
    f4 = BITSF(v0);
    ST32(sp+84, a0);
    {v1=FBITS(v[4]);}
    {v0=FBITS(v[6]);}
    ST32(sp+80, v1);
    ST32(sp+88, v0);
    ST32(sp+92, FBITS(f4));
    v0 = LD32(sp+84);
    v1 = LD32(sp+88);
    a0 = LD32(sp+80);
    ST32(sp+100, v0);
    v0 = LD32(sp+92);
    ST32(sp+104, v1);
    goto L_08812818;
L_08812818:;
    ST32(sp+108, v0);
    ST32(sp+96, a0);
    ST32(a3+12, a0);
    v0 = LD32(sp+100);
    ST32(a1+4, v0);
    v1 = LD32(sp+104);
    ST32(a1+8, v1);
    v0 = LD32(sp+108);
    goto L_08811F44;
L_0881283C:;
    v1 = v1 + 23244;
    {vr112=BITSF(LD32(v1+(0)));}
    {vr113=BITSF(LD32(v1+(4)));}
    {vr114=BITSF(LD32(v1+(8)));}
    {vr115=BITSF(LD32(v1+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(a0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(80);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(92);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(a3+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(a1+12);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+80);
    {v[11]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+84);
    v0 = LD32(sp+88);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+92);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {a0=FBITS(v[5]);}
    f4 = BITSF(v0);
    ST32(sp+68, a0);
    {v0=FBITS(v[6]);}
    {v1=FBITS(v[4]);}
    ST32(sp+72, v0);
    ST32(sp+64, v1);
    v0 = LD32(sp+68);
    ST32(sp+76, FBITS(f4));
    v1 = LD32(sp+72);
    ST32(sp+100, v0);
    a0 = LD32(sp+64);
    ST32(sp+104, v1);
    v0 = LD32(sp+76);
    goto L_08812818;
L_08812924:;
    a3 = LD32(s1+92);
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(a0+12);
    ST32(a3+12, v0);
    v1 = LD32(a0+16);
    ST32(a3+16, v1);
    v0 = LD32(a0+20);
    ST32(a3+20, v0);
    v1 = LD32(a0+24);
    ST32(a3+24, v1);
    goto L_08811E84;
L_08812964:;
    a3 = LD32(s1+92);
    goto L_08811E90;
L_0881296C:;
    a1 = s4 + 0;
    a2 = 0 + 0;
    a3 = sp + 0;
    { rv_t r_ = ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = func_088116C8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr121=v[121];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881297C;
L_0881297C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811FEC; }
    goto L_08812984;
L_08812984:;
    s5 = D_08AEB538 - (-19144);
    f0 = BITSF(LD32(s5-19144));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = LD32(s1+4); goto L_0881385C; }
    goto L_0881299C;
L_0881299C:;
    cnd_ = s0 == 0;
    a2 = LD32(s1+4);
    if (cnd_) { goto L_088129AC; }
    goto L_088129A4;
L_088129A4:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_0881385C; }
    goto L_088129AC;
L_088129AC:;
    v0 = a2 & 0x1;
    cnd_ = v0 != 0;
    t0 = a2 + 0;
    if (cnd_) { goto L_0881385C; }
    goto L_088129B8;
L_088129B8:;
    v0 = LD32(s1);
    v1 = 0x400000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s4+32); goto L_0881381C; }
    goto L_088129CC;
L_088129CC:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a3 = LD32(s1+92);
    a2 = D_08B45ACC - (23244);
    a0 = a2 + 23244;
    ST32(a3, FBITS(f0));
    a1 = a3 + 12;
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(a2+23244);
    ST32(a3+12, v0);
    v1 = LD32(a0+4);
    ST32(a1+4, v1);
    v0 = LD32(a0+8);
    ST32(a1+8, v0);
    v1 = LD32(a0+12);
    ST32(a1+12, v1);
    goto L_08812A1C;
L_08812A1C:;
    v0 = t0 | 0x1;
    a2 = v0 + 0;
    ST32(s1+4, v0);
    goto L_08812A28;
L_08812A28:;
    cnd_ = s0 == 0;
    v0 = a2 & 0x1;
    if (cnd_) { goto L_088136A0; }
    goto L_08812A30;
L_08812A30:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08813680; }
    goto L_08812A38;
L_08812A38:;
    f0 = BITSF(LD32(s5-19144));
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    v1 = FBITS(f0);
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr115=BITSF(LD32(v0+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v1);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(144);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(156);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+144);
    goto L_08812AAC;
L_08812AAC:;
    a0 = a3 + 12;
    ST32(a3+12, v0);
    v1 = LD32(sp+148);
    ST32(a0+4, v1);
    v0 = LD32(sp+152);
    ST32(a0+8, v0);
    v1 = LD32(sp+156);
    goto L_08812AC8;
L_08812AC8:;
    ST32(a0+12, v1);
    goto L_08812ACC;
L_08812ACC:;
    cnd_ = s3 == 0;
    v0 = a2 & 0x1;
    if (cnd_) { goto L_088135FC; }
    goto L_08812AD4;
L_08812AD4:;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_088135E4; }
    goto L_08812ADC;
L_08812ADC:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    goto L_08812AE4;
L_08812AE4:;
    ST32(sp+128, FBITS(f0));
    ST32(sp+132, FBITS(f1));
    ST32(sp+136, FBITS(f2));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    goto L_08812AFC;
L_08812AFC:;
    s0 = sp + 32;
    a0 = s2 + 0;
    a1 = s4 + 0;
    a2 = s1 + 0;
    a3 = s0 + 0;
    ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;func_08811494(a0, a1, a2, a3, 0); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];});
    goto L_08812B14;
L_08812B14:;
    f0 = BITSF(LD32(s5-19144));
    a0 = 0 + 0;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    f2 = f0 - f20;
    if (cnd_) { goto L_088135AC; }
    goto L_08812B2C;
L_08812B2C:;
    v1 = LD32(sp+36);
    a0 = LD32(sp+40);
    a1 = LD32(sp+44);
    a2 = LD32(sp+48);
    a3 = LD32(sp+52);
    v0 = LD32(sp+32);
    ST32(s1+16, v1);
    ST32(s1+12, v0);
    ST32(s1+20, a0);
    ST32(s1+24, a1);
    ST32(s1+28, a2);
    ST32(s1+32, a3);
    v0 = LD32(s1+4);
    goto L_08812B60;
L_08812B60:;
    v1 = LD32(s2+36);
    v0 = v0 | 0x1;
    cnd_ = v1 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08811FE8; }
    goto L_08812B70;
L_08812B70:;
    a1 = LD32(s2+16);
    v0 = 0x400000u;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    v1 = 0x80000u;
    if (cnd_) { goto L_08813404; }
    goto L_08812B84;
L_08812B84:;
    v0 = LD32(s1);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = 0x800000u;
    if (cnd_) { goto L_08812BCC; }
    goto L_08812B94;
L_08812B94:;
    f4 = BITSF(LD32(s5-19144));
    fcc = FCMP(f4, f20, 14);
    cnd_ = !fcc;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_088133AC; }
    goto L_08812BA8;
L_08812BA8:;
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    goto L_08812BB8;
L_08812BB8:;
    v0 = s1 + 36;
    ST32(v0+8, FBITS(f0));
    ST32(s1+36, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_08812BC8;
L_08812BC8:;
    v0 = 0x800000u;
    goto L_08812BCC;
L_08812BCC:;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    v1 = 0x100000u;
    if (cnd_) { goto L_088131D8; }
    goto L_08812BD8;
L_08812BD8:;
    v0 = LD32(s1);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = 0x1000000u;
    if (cnd_) { goto L_08812C10; }
    goto L_08812BE8;
L_08812BE8:;
    f1 = BITSF(LD32(s5-19144));
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+60, 0); goto L_08812C10; }
    goto L_08812BFC;
L_08812BFC:;
    f1 = f1 - f20;
    f0 = BITSF(LD32(s1+60));
    goto L_08812C04;
L_08812C04:;
    f0 = f0 * f1;
    ST32(s1+60, FBITS(f0));
    goto L_08812C0C;
L_08812C0C:;
    v0 = 0x1000000u;
    goto L_08812C10;
L_08812C10:;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    v1 = 0x200000u;
    if (cnd_) { goto L_08812DDC; }
    goto L_08812C1C;
L_08812C1C:;
    v0 = LD32(s1);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811FEC; }
    goto L_08812C2C;
L_08812C2C:;
    f4 = BITSF(LD32(s5-19144));
    fcc = FCMP(f4, f20, 14);
    cnd_ = fcc;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08812D90; }
    goto L_08812C40;
L_08812C40:;
    a0 = s1 + 64;
    v1 = v0 + 23196;
    f4 = f4 - f20;
    f6 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f5 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(s1+64));
    f0 = f0 * f4;
    f2 = f2 * f4;
    f3 = f3 * f20;
    f6 = f6 * f20;
    f1 = f1 * f4;
    f5 = f5 * f20;
    f2 = f2 + f3;
    f0 = f0 + f6;
    v0 = D_08AEB53C - (-19140);
    f1 = f1 + f5;
    ST32(a0+4, FBITS(f2));
    v1 = s1 + 76;
    ST32(a0+8, FBITS(f0));
    ST32(s1+64, FBITS(f1));
    f0 = BITSF(LD32(v0-19140));
    v0 = LD32(s1+76);
    a0 = LD32(v1+4);
    a2 = LD32(v1+12);
    a1 = LD32(v1+8);
    ST32(sp+144, v0);
    v1 = FBITS(f0);
    v0 = FBITS(f20);
    ST32(sp+148, a0);
    a0 = D_08B45ACC - (23244);
    a0 = a0 + 23244;
    ST32(sp+152, a1);
    ST32(sp+156, a2);
    {vr112=BITSF(LD32(sp+(144)));}
    {vr113=BITSF(LD32(sp+(148)));}
    {vr114=BITSF(LD32(sp+(152)));}
    {vr115=BITSF(LD32(sp+(156)));}
    {vr116=BITSF(LD32(a0+(0)));}
    {vr117=BITSF(LD32(a0+(4)));}
    {vr118=BITSF(LD32(a0+(8)));}
    {vr119=BITSF(LD32(a0+(12)));}
    {vr124=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=vr0;v[98]=(float)1;}
    {float s0=v[97];float t0=vr96;float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=v[98];float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08812D3C; }
    goto L_08812D1C;
L_08812D1C:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=v[98];float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;vr125=s1*t0;}
    goto L_08812D3C;
L_08812D3C:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08812D50; }
    goto L_08812D48;
L_08812D48:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_08812D50;
L_08812D50:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08812D78; }
    goto L_08812D6C;
L_08812D6C:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_08812D78;
L_08812D78:;
    {ST32(s1+(76),FBITS(vr120));}
    {ST32(s1+(80),FBITS(vr121));}
    {ST32(s1+(84),FBITS(vr122));}
    {ST32(s1+(88),FBITS(vr123));}
    goto L_08811FF0;
L_08812D90:;
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = s1 + 64;
    ST32(v0+8, FBITS(f0));
    v1 = D_08B45ACC - (23244);
    a0 = v1 + 23244;
    ST32(v0+4, FBITS(f1));
    ST32(s1+64, FBITS(f2));
    v0 = LD32(v1+23244);
    ST32(s1+76, v0);
    v1 = LD32(a0+4);
    ST32(s1+80, v1);
    v0 = LD32(a0+8);
    ST32(s1+84, v0);
    v1 = LD32(a0+12);
    ST32(s1+88, v1);
    goto L_08811FE8;
L_08812DDC:;
    f12 = BITSF(LD32(s2+72));
    a0 = LD32(s2+36);
    a1 = s4 + 0;
    a2 = sp + 128;
    a3 = sp + 144;
    t0 = s7 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = func_08818A04(a0, a1, a2, a3, t0, f12); vr0=v[0];vr92=v[92];vr96=v[96];vr100=v[100];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr121=v[121];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08812DF8;
L_08812DF8:;
    cnd_ = v0 == 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_0881305C; }
    goto L_08812E00;
L_08812E00:;
    a0 = 0x200000u;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(sp+132));
    if (cnd_) { goto L_08812FA4; }
    goto L_08812E10;
L_08812E10:;
    f0 = BITSF(LD32(s5-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = s1 + 64; goto L_08812E64; }
    goto L_08812E24;
L_08812E24:;
    a0 = LD32(sp+144);
    a1 = LD32(sp+148);
    a2 = LD32(sp+152);
    v1 = LD32(sp+156);
    f2 = BITSF(LD32(sp+128));
    f0 = BITSF(LD32(sp+136));
    f1 = BITSF(LD32(sp+132));
    v0 = s1 + 64;
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(s1+64, FBITS(f2));
    ST32(s1+88, v1);
    ST32(s1+76, a0);
    ST32(s1+80, a1);
    ST32(s1+84, a2);
    goto L_08811FE8;
L_08812E64:;
    f0 = f0 - f20;
    f5 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f4 = BITSF(LD32(s1+64));
    f2 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(sp+132));
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f0 = BITSF(LD32(sp+136));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    v1 = s1 + 76;
    f4 = f4 + f2;
    f5 = f5 + f1;
    f3 = f3 + f0;
    v0 = D_08AEB53C - (-19140);
    ST32(s1+64, FBITS(f4));
    ST32(a0+8, FBITS(f3));
    ST32(a0+4, FBITS(f5));
    f0 = BITSF(LD32(v0-19140));
    a0 = LD32(v1+4);
    v0 = LD32(s1+76);
    a2 = LD32(v1+12);
    a1 = LD32(v1+8);
    ST32(sp+96, v0);
    v0 = FBITS(f0);
    ST32(sp+104, a1);
    ST32(sp+100, a0);
    a0 = FBITS(f20);
    ST32(sp+108, a2);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(sp+(144)));}
    {vr117=BITSF(LD32(sp+(148)));}
    {vr118=BITSF(LD32(sp+(152)));}
    {vr119=BITSF(LD32(sp+(156)));}
    {vr124=BITSF(a0);}
    {v[127]=BITSF(v0);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=vr0;v[98]=(float)1;}
    {float s0=v[97];float t0=vr96;float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=v[98];float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08812F50; }
    goto L_08812F30;
L_08812F30:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=v[98];float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;vr125=s1*t0;}
    goto L_08812F50;
L_08812F50:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08812F64; }
    goto L_08812F5C;
L_08812F5C:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_08812F64;
L_08812F64:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08812F8C; }
    goto L_08812F80;
L_08812F80:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_08812F8C;
L_08812F8C:;
    {ST32(s1+(76),FBITS(vr120));}
    {ST32(s1+(80),FBITS(vr121));}
    {ST32(s1+(84),FBITS(vr122));}
    {ST32(s1+(88),FBITS(vr123));}
    goto L_08811FEC;
L_08812FA4:;
    f1 = BITSF(LD32(sp+136));
    f0 = BITSF(LD32(sp+128));
    f2 = f2 * f20;
    f1 = f1 * f20;
    v0 = s1 + 64;
    f0 = f0 * f20;
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f1));
    v0 = FBITS(f20);
    v1 = LD32(s1);
    ST32(s1+64, FBITS(f0));
    v1 = v1 | a0;
    a0 = D_08B45ACC - (23244);
    a0 = a0 + 23244;
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f1));
    {vr112=BITSF(LD32(a0+(0)));}
    {vr113=BITSF(LD32(a0+(4)));}
    {vr114=BITSF(LD32(a0+(8)));}
    {vr115=BITSF(LD32(a0+(12)));}
    {vr116=BITSF(LD32(sp+(144)));}
    {vr117=BITSF(LD32(sp+(148)));}
    {vr118=BITSF(LD32(sp+(152)));}
    {vr119=BITSF(LD32(sp+(156)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(96);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(108);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+96);
    a0 = LD32(sp+100);
    a1 = LD32(sp+104);
    a2 = LD32(sp+108);
    goto L_08812344;
L_0881305C:;
    v1 = 0x200000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08811FEC; }
    goto L_0881306C;
L_0881306C:;
    f0 = BITSF(LD32(s5-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08812D90; }
    goto L_08813080;
L_08813080:;
    a0 = s1 + 64;
    f4 = f0 - f20;
    v1 = v0 + 23196;
    f5 = BITSF(LD32(v0+23196));
    f6 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(s1+64));
    f5 = f5 * f20;
    f0 = f0 * f4;
    f1 = f1 * f4;
    f2 = f2 * f4;
    f3 = f3 * f20;
    f6 = f6 * f20;
    f1 = f1 + f5;
    v0 = s1 + 76;
    f2 = f2 + f3;
    f0 = f0 + f6;
    ST32(s1+64, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f2));
    a0 = LD32(v0+4);
    a2 = LD32(v0+12);
    v1 = LD32(s1+76);
    a1 = LD32(v0+8);
    v0 = D_08AEB53C - (-19140);
    f0 = BITSF(LD32(v0-19140));
    ST32(sp+96, v1);
    v1 = D_08B45ACC - (23244);
    v0 = FBITS(f0);
    ST32(sp+100, a0);
    v1 = v1 + 23244;
    a0 = FBITS(f20);
    ST32(sp+104, a1);
    ST32(sp+108, a2);
    {vr112=BITSF(LD32(sp+(96)));}
    {vr113=BITSF(LD32(sp+(100)));}
    {vr114=BITSF(LD32(sp+(104)));}
    {vr115=BITSF(LD32(sp+(108)));}
    {vr116=BITSF(LD32(v1+(0)));}
    {vr117=BITSF(LD32(v1+(4)));}
    {vr118=BITSF(LD32(v1+(8)));}
    {vr119=BITSF(LD32(v1+(12)));}
    {vr124=BITSF(a0);}
    {v[127]=BITSF(v0);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=vr0;v[98]=(float)1;}
    {float s0=v[97];float t0=vr96;float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=v[98];float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881317C; }
    goto L_0881315C;
L_0881315C:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=v[98];float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;vr125=s1*t0;}
    goto L_0881317C;
L_0881317C:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08813190; }
    goto L_08813188;
L_08813188:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_08813190;
L_08813190:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088131B8; }
    goto L_088131AC;
L_088131AC:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_088131B8;
L_088131B8:;
    {ST32(s1+(76),FBITS(vr120));}
    {ST32(s1+(80),FBITS(vr121));}
    {ST32(s1+(84),FBITS(vr122));}
    {ST32(s1+(88),FBITS(vr123));}
    goto L_08811FF0;
L_088131D0:;
    ST32(s1+60, 0);
    goto L_08812C0C;
L_088131D8:;
    a0 = s2 + 0;
    f0 = func_08814F08(a0);
    goto L_088131E0;
L_088131E0:;
    a0 = LD32(s2+36);
    f13 = BITSF(LD32(s2+48));
    f12 = f0;
    a1 = sp + 128;
    t0 = s6 + 0;
    a2 = sp + 164;
    a3 = s7 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08818D80(a0, a1, a2, a3, t0, f12, f13); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08813200;
L_08813200:;
    cnd_ = v0 == 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08813374; }
    goto L_08813208;
L_08813208:;
    v1 = 0x100000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    f6 = BITSF(LD32(sp+164));
    if (cnd_) { goto L_08813328; }
    goto L_08813218;
L_08813218:;
    f5 = BITSF(LD32(s5-19144));
    fcc = FCMP(f5, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f5 = f5 - f20; goto L_088132C4; }
    goto L_0881322C;
L_0881322C:;
    f0 = BITSF(LD32(sp+132));
    a0 = s1 + 48;
    f1 = BITSF(LD32(sp+136));
    ST32(a0+4, FBITS(f0));
    f0 = BITSF(LD32(sp+128));
    ST32(a0+8, FBITS(f1));
    ST32(s1+48, FBITS(f0));
    ST32(s1+60, FBITS(f6));
    goto L_0881324C;
L_0881324C:;
    v0 = LD32(s1+48);
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(a0+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a1 = LD32(s2+16);
    if (cnd_) { goto L_08812C0C; }
    goto L_08813288;
L_08813288:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f2 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(v[1]);}
    ST32(a0+8, FBITS(f2));
    ST32(sp+112, v0);
    ST32(a0+4, v1);
    ST32(sp+120, FBITS(f2));
    ST32(sp+116, v1);
    ST32(s1+48, v0);
    goto L_08812C0C;
L_088132C4:;
    a0 = s1 + 48;
    f2 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    f2 = f2 * f5;
    f1 = f1 * f20;
    f0 = f0 * f20;
    f4 = f4 * f5;
    f3 = BITSF(LD32(s1+48));
    f2 = f2 + f1;
    f1 = BITSF(LD32(sp+128));
    f4 = f4 + f0;
    f3 = f3 * f5;
    ST32(a0+4, FBITS(f2));
    f1 = f1 * f20;
    f2 = f6 * f20;
    ST32(a0+8, FBITS(f4));
    f3 = f3 + f1;
    f0 = BITSF(LD32(s1+60));
    f0 = f0 * f5;
    ST32(s1+48, FBITS(f3));
    f0 = f0 + f2;
    ST32(s1+60, FBITS(f0));
    goto L_0881324C;
L_08813328:;
    f0 = BITSF(LD32(sp+132));
    f1 = BITSF(LD32(sp+136));
    a0 = s1 + 48;
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = BITSF(LD32(sp+128));
    f3 = f6 * f20;
    ST32(sp+116, FBITS(f0));
    f2 = f2 * f20;
    ST32(sp+120, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    v0 = LD32(s1);
    ST32(s1+48, FBITS(f2));
    v0 = v0 | v1;
    ST32(s1+60, FBITS(f3));
    ST32(s1, v0);
    ST32(sp+112, FBITS(f2));
    goto L_0881324C;
L_08813374:;
    v1 = 0x100000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+16); goto L_08812C0C; }
    goto L_08813384;
L_08813384:;
    f1 = BITSF(LD32(s5-19144));
    fcc = FCMP(f1, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f1 - f20; goto L_088133A0; }
    goto L_08813398;
L_08813398:;
    a1 = LD32(s2+16);
    goto L_088131D0;
L_088133A0:;
    f0 = BITSF(LD32(s1+60));
    a1 = LD32(s2+16);
    goto L_08812C04;
L_088133AC:;
    a0 = s1 + 36;
    f4 = f4 - f20;
    v1 = v0 + 23196;
    f5 = BITSF(LD32(v0+23196));
    f6 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s1+36));
    f3 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f1 = f1 * f4;
    f5 = f5 * f20;
    f0 = f0 * f4;
    f3 = f3 * f4;
    f2 = f2 * f20;
    f6 = f6 * f20;
    f1 = f1 + f5;
    f3 = f3 + f2;
    f0 = f0 + f6;
    ST32(s1+36, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f3));
    goto L_08812BC8;
L_08813404:;
    a0 = s2 + 0;
    f0 = func_08814F08(a0);
    goto L_0881340C;
L_0881340C:;
    a0 = LD32(s2+36);
    f13 = BITSF(LD32(s2+48));
    f12 = f0;
    a2 = sp + 128;
    a1 = s4 + 0;
    a3 = s7 + 0;
    t0 = s6 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08818AF4(a0, a1, a2, a3, t0, f12, f13); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881342C;
L_0881342C:;
    cnd_ = v0 == 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08813514; }
    goto L_08813434;
L_08813434:;
    a0 = 0x80000u;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(sp+132));
    if (cnd_) { goto L_088134D0; }
    goto L_08813444;
L_08813444:;
    f0 = BITSF(LD32(s5-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    f0 = f0 - f20;
    if (cnd_) { goto L_0881347C; }
    goto L_08813458;
L_08813458:;
    f0 = BITSF(LD32(sp+136));
    v0 = s1 + 36;
    f1 = BITSF(LD32(sp+128));
    ST32(v0+8, FBITS(f0));
    a1 = LD32(s2+16);
    f0 = BITSF(LD32(sp+132));
    ST32(s1+36, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    goto L_08812BC8;
L_0881347C:;
    v0 = s1 + 36;
    f4 = BITSF(LD32(s1+36));
    f5 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = f4 * f0;
    f2 = BITSF(LD32(sp+128));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    a1 = LD32(s2+16);
    f4 = f4 + f2;
    f5 = f5 + f1;
    f3 = f3 + f0;
    ST32(s1+36, FBITS(f4));
    ST32(v0+8, FBITS(f3));
    ST32(v0+4, FBITS(f5));
    goto L_08812BC8;
L_088134D0:;
    f1 = BITSF(LD32(sp+136));
    v1 = s1 + 36;
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = BITSF(LD32(sp+128));
    ST32(v1+4, FBITS(f2));
    f0 = f0 * f20;
    ST32(v1+8, FBITS(f1));
    v0 = LD32(s1);
    ST32(s1+36, FBITS(f0));
    v0 = v0 | a0;
    ST32(s1, v0);
    a1 = LD32(s2+16);
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f1));
    goto L_08812BC8;
L_08813514:;
    v1 = 0x80000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+16); goto L_08812BC8; }
    goto L_08813524;
L_08813524:;
    f4 = BITSF(LD32(s5-19144));
    fcc = FCMP(f4, f20, 14);
    cnd_ = !fcc;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08813550; }
    goto L_08813538;
L_08813538:;
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a1 = LD32(s2+16);
    goto L_08812BB8;
L_08813550:;
    a0 = s1 + 36;
    f4 = f4 - f20;
    v1 = v0 + 23196;
    f5 = BITSF(LD32(v0+23196));
    f6 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s1+36));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f1 = f1 * f4;
    f5 = f5 * f20;
    f0 = f0 * f4;
    f2 = f2 * f4;
    f3 = f3 * f20;
    f6 = f6 * f20;
    f1 = f1 + f5;
    a1 = LD32(s2+16);
    f2 = f2 + f3;
    f0 = f0 + f6;
    ST32(s1+36, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f2));
    goto L_08812BC8;
L_088135AC:;
    v0 = a0 << 2;
    v1 = v0 + s0;
    v0 = v0 + s1;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v0+12));
    a0 = a0 + 1;
    f1 = f1 * f20;
    f0 = f0 * f2;
    v1 = a0 < 0x6u;
    f0 = f0 + f1;
    cnd_ = v1 != 0;
    ST32(v0+12, FBITS(f0));
    if (cnd_) { goto L_088135AC; }
    goto L_088135DC;
L_088135DC:;
    v0 = LD32(s1+4);
    goto L_08812B60;
L_088135E4:;
    f1 = BITSF(LD32(sp+8));
    ST32(a3, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    goto L_08812AFC;
L_088135FC:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08813668; }
    goto L_08813604;
L_08813604:;
    f0 = BITSF(LD32(s5-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(sp)); goto L_088135E4; }
    goto L_08813618;
L_08813618:;
    f0 = f0 - f20;
    f4 = BITSF(LD32(a3));
    f5 = BITSF(LD32(a3+4));
    f3 = BITSF(LD32(a3+8));
    f4 = f4 * f0;
    f2 = BITSF(LD32(sp));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    f4 = f4 + f2;
    f5 = f5 + f1;
    f3 = f3 + f0;
    ST32(a3, FBITS(f4));
    ST32(a3+8, FBITS(f3));
    ST32(a3+4, FBITS(f5));
    goto L_08812AFC;
L_08813668:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = f2 * f20;
    goto L_08812AE4;
L_08813680:;
    a0 = a3 + 12;
    ST32(a3+12, v0);
    v1 = LD32(sp+16);
    ST32(a0+4, v1);
    v0 = LD32(sp+20);
    ST32(a0+8, v0);
    v1 = LD32(sp+24);
    goto L_08812AC8;
L_088136A0:;
    cnd_ = v0 == 0;
    v1 = D_08B45ACC - (23244);
    if (cnd_) { goto L_088137AC; }
    goto L_088136A8;
L_088136A8:;
    f0 = BITSF(LD32(s5-19144));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08813680; }
    goto L_088136BC;
L_088136BC:;
    v0 = LD32(a3+12);
    a0 = a3 + 12;
    ST32(sp+144, v0);
    v0 = D_08AEB53C - (-19140);
    v1 = LD32(a0+4);
    f0 = BITSF(LD32(v0-19140));
    ST32(sp+148, v1);
    v0 = LD32(a0+8);
    ST32(sp+152, v0);
    v0 = FBITS(f0);
    v1 = LD32(a0+12);
    a0 = FBITS(f20);
    ST32(sp+156, v1);
    {vr112=BITSF(LD32(sp+(144)));}
    {vr113=BITSF(LD32(sp+(148)));}
    {vr114=BITSF(LD32(sp+(152)));}
    {vr115=BITSF(LD32(sp+(156)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {vr124=BITSF(a0);}
    {v[127]=BITSF(v0);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=vr0;v[98]=(float)1;}
    {float s0=v[97];float t0=vr96;float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=v[98];float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881375C; }
    goto L_0881373C;
L_0881373C:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=v[98];float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;vr125=s1*t0;}
    goto L_0881375C;
L_0881375C:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08813770; }
    goto L_08813768;
L_08813768:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_08813770;
L_08813770:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08813798; }
    goto L_0881378C;
L_0881378C:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_08813798;
L_08813798:;
    {ST32(a3+(12),FBITS(vr120));}
    {ST32(a3+(16),FBITS(vr121));}
    {ST32(a3+(20),FBITS(vr122));}
    {ST32(a3+(24),FBITS(vr123));}
    goto L_08812ACC;
L_088137AC:;
    a0 = FBITS(f20);
    v1 = v1 + 23244;
    {vr112=BITSF(LD32(v1+(0)));}
    {vr113=BITSF(LD32(v1+(4)));}
    {vr114=BITSF(LD32(v1+(8)));}
    {vr115=BITSF(LD32(v1+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(a0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(144);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(156);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+144);
    goto L_08812AAC;
L_0881381C:;
    a3 = LD32(s1+92);
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(a0+12);
    ST32(a3+12, v0);
    v1 = LD32(a0+16);
    ST32(a3+16, v1);
    v0 = LD32(a0+20);
    ST32(a3+20, v0);
    v1 = LD32(a0+24);
    ST32(a3+24, v1);
    goto L_08812A1C;
L_0881385C:;
    a3 = LD32(s1+92);
    goto L_08812A28;
    v[0]=vr0;v[92]=vr92;v[96]=vr96;v[100]=vr100;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;
}

/* 08813864 */
rv_t func_08813864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_08813864:;
    sp = sp - 176;
    s5 = a1 + 0;
    s4 = a0 + 0;
    s3 = a3 + 0;
    s2 = t0 + 0;
    s0 = a2 + 0;
    f20 = f12;
    v0 = LD32(a0+16);
    v1 = LD32(a0+36);
    fp = (v0 >> 20) & 0x1;
    v0 = (v0 >> 21) & 0x1;
    cnd_ = v1 == 0;
    ST32(sp+96, v0);
    if (cnd_) { goto L_088138DC; }
    goto L_088138CC;
L_088138CC:;
    v0 = LD32(v1+16);
    v0 = v0 - 1;
    v1 = v0 < a3;
    if (v1 != 0) s3 = v0;
    goto L_088138DC;
L_088138DC:;
    v1 = LD32(s4);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088138EC;
L_088138EC:;
    cnd_ = v0 == 0;
    v0 = s3 < s0;
    if (cnd_) { goto L_08813F78; }
    goto L_088138F4;
L_088138F4:;
    cnd_ = v0 != 0;
    s1 = s0 + 0;
    if (cnd_) { goto L_08813B14; }
    goto L_088138FC;
L_088138FC:;
    v0 = D_08AEB540 - (-19136);
    v1 = s0 << 3;
    f21 = BITSF(LD32(v0-19136));
    v1 = v1 - s0;
    v0 = D_08B45ACC - (23244);
    s0 = v1 << 2;
    s6 = 1;
    s7 = v0 + 23244;
    goto L_0881391C;
L_0881391C:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s1 + 0;
    a3 = sp + 0;
    { rv_t r_ = ({ v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = func_088116C8(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08813930;
L_08813930:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08813B08; }
    goto L_08813938;
L_08813938:;
    t1 = s1 >> 5;
    v0 = t1 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    t0 = s1 & 0x1f;
    v0 = s6 << (t0 & 31);
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    if (cnd_) { a3 = LD32(s2+92); goto L_088139D8; }
    goto L_0881395C;
L_0881395C:;
    v0 = LD32(s2);
    v1 = 0x400000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s5+32); goto L_08813F30; }
    goto L_08813970;
L_08813970:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    a3 = LD32(s2+92);
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    v0 = a3 + s0;
    ST32(v0, FBITS(f0));
    a0 = D_08B45ACC - (23244);
    a1 = v0 + 12;
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    v1 = LD32(a0+23244);
    ST32(v0+12, v1);
    a0 = LD32(s7+4);
    ST32(a1+4, a0);
    v0 = LD32(s7+8);
    ST32(a1+8, v0);
    v1 = LD32(s7+12);
    ST32(a1+12, v1);
    goto L_088139C0;
L_088139C0:;
    v0 = t1 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = s6 << (t0 & 31);
    v1 = v1 | a0;
    ST32(v0+4, v1);
    goto L_088139D8;
L_088139D8:;
    cnd_ = s1 != 0;
    v0 = t1 << 2;
    if (cnd_) { goto L_08813CE4; }
    goto L_088139E0;
L_088139E0:;
    v0 = LD32(sp+96);
    cnd_ = v0 == 0;
    v0 = t1 << 2;
    if (cnd_) { goto L_08813CE4; }
    goto L_088139EC;
L_088139EC:;
    v0 = LD32(s2+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = a3 + 12;
    if (cnd_) { goto L_08813C58; }
    goto L_088139FC;
L_088139FC:;
    v0 = LD32(a3+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(a1+12);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+12);
    {v[11]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v1=FBITS(v[7]);}
    {v0=FBITS(v[5]);}
    f4 = BITSF(v1);
    ST32(sp+52, v0);
    {a0=FBITS(v[4]);}
    {v1=FBITS(v[6]);}
    v0 = LD32(sp+52);
    ST32(sp+48, a0);
    ST32(sp+56, v1);
    ST32(sp+60, FBITS(f4));
    ST32(sp+36, v0);
    v1 = LD32(sp+56);
    v0 = LD32(sp+60);
    a0 = LD32(sp+48);
    ST32(sp+40, v1);
    ST32(sp+44, v0);
    ST32(sp+32, a0);
    ST32(a3+12, a0);
    v0 = LD32(sp+36);
    ST32(a1+4, v0);
    v1 = LD32(sp+40);
    ST32(a1+8, v1);
    v0 = LD32(sp+44);
    goto L_08813A9C;
L_08813A9C:;
    ST32(a1+12, v0);
    goto L_08813AA0;
L_08813AA0:;
    cnd_ = fp == 0;
    v0 = t1 << 2;
    if (cnd_) { goto L_08813B78; }
    goto L_08813AA8;
L_08813AA8:;
    cnd_ = s1 != 0;
    v0 = v0 + s2;
    if (cnd_) { goto L_08813B7C; }
    goto L_08813AB0;
L_08813AB0:;
    v0 = LD32(s2+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08813B54; }
    goto L_08813AC0;
L_08813AC0:;
    f3 = BITSF(LD32(a3));
    f4 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(a3, FBITS(f3));
    ST32(a3+8, FBITS(f2));
    ST32(a3+4, FBITS(f4));
    goto L_08813AEC;
L_08813AEC:;
    v0 = t1 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = s6 << (t0 & 31);
    v1 = v1 | a0;
    ST32(v0+4, v1);
    s1 = s1 + 1;
    goto L_08813B08;
L_08813B08:;
    v0 = s3 < s1;
    cnd_ = v0 == 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_0881391C; }
    goto L_08813B14;
L_08813B14:;
    goto L_08813B18;
L_08813B18:;
    v0 = 1;
    sp = sp + 176;
    { v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;return (rv_t){ v0, v1, f0 }; }
L_08813B54:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    goto L_08813AEC;
L_08813B78:;
    v0 = v0 + s2;
    goto L_08813B7C;
L_08813B7C:;
    v1 = LD32(v0+4);
    a0 = s6 << (t0 & 31);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08813C24; }
    goto L_08813B90;
L_08813B90:;
    fcc = FCMP(f21, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f5 = BITSF(LD32(sp)); goto L_08813BD8; }
    goto L_08813BA0;
L_08813BA0:;
    v0 = a3 + s0;
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(v0, FBITS(f3));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f4));
    goto L_08813AEC;
L_08813BD8:;
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f5 * f20;
    f4 = f4 * f20;
    f3 = f3 * f20;
    v0 = a3 + s0;
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f3));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f1 = f1 + f5;
    f2 = f2 + f4;
    f0 = f0 + f3;
    ST32(v0, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    goto L_08813AEC;
L_08813C24:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = f2 * f20;
    v0 = a3 + s0;
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    goto L_08813AEC;
L_08813C58:;
    a0 = FBITS(f21);
    {vr112=BITSF(LD32(s7+(0)));}
    {vr113=BITSF(LD32(s7+(4)));}
    {vr114=BITSF(LD32(s7+(8)));}
    {vr115=BITSF(LD32(s7+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(a0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(64);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(76);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+64);
    a0 = a3 + 12;
    ST32(a3+12, v0);
    v1 = LD32(sp+68);
    ST32(a0+4, v1);
    v0 = LD32(sp+72);
    ST32(a0+8, v0);
    v1 = LD32(sp+76);
    ST32(a0+12, v1);
    goto L_08813AA0;
L_08813CE4:;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = s6 << (t0 & 31);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08813EA0; }
    goto L_08813CFC;
L_08813CFC:;
    fcc = FCMP(f21, f20, 14);
    cnd_ = !fcc;
    a2 = s0 + a3;
    if (cnd_) { goto L_08813DB4; }
    goto L_08813D0C;
L_08813D0C:;
    a1 = a2 + 12;
    v0 = LD32(a2+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(a1+12);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+12);
    {v[11]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {a0=FBITS(v[5]);}
    f4 = BITSF(v0);
    ST32(sp+52, a0);
    {v1=FBITS(v[4]);}
    {v0=FBITS(v[6]);}
    ST32(sp+48, v1);
    ST32(sp+56, v0);
    ST32(sp+60, FBITS(f4));
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    a0 = LD32(sp+48);
    ST32(sp+68, v0);
    v0 = LD32(sp+60);
    ST32(sp+72, v1);
    goto L_08813D90;
L_08813D90:;
    ST32(sp+76, v0);
    ST32(sp+64, a0);
    ST32(a2+12, a0);
    v0 = LD32(sp+68);
    ST32(a1+4, v0);
    v1 = LD32(sp+72);
    ST32(a1+8, v1);
    v0 = LD32(sp+76);
    goto L_08813A9C;
L_08813DB4:;
    a1 = a2 + 12;
    v1 = FBITS(f20);
    {vr112=BITSF(LD32(s7+(0)));}
    {vr113=BITSF(LD32(s7+(4)));}
    {vr114=BITSF(LD32(s7+(8)));}
    {vr115=BITSF(LD32(s7+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v1);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(48);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(60);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(a2+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(a1+12);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[11]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+60);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    {v1=FBITS(v[5]);}
    f4 = BITSF(a0);
    ST32(sp+36, v1);
    {a0=FBITS(v[6]);}
    {v0=FBITS(v[4]);}
    ST32(sp+40, a0);
    ST32(sp+32, v0);
    ST32(sp+44, FBITS(f4));
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    a0 = LD32(sp+32);
    ST32(sp+68, v0);
    ST32(sp+72, v1);
    v0 = LD32(sp+44);
    goto L_08813D90;
L_08813EA0:;
    v0 = FBITS(f20);
    {vr112=BITSF(LD32(s7+(0)));}
    {vr113=BITSF(LD32(s7+(4)));}
    {vr114=BITSF(LD32(s7+(8)));}
    {vr115=BITSF(LD32(s7+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(64);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(76);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+64);
    a0 = s0 + a3;
    a1 = a0 + 12;
    ST32(a0+12, v0);
    v1 = LD32(sp+68);
    ST32(a1+4, v1);
    v0 = LD32(sp+72);
    ST32(a1+8, v0);
    v1 = LD32(sp+76);
    ST32(a1+12, v1);
    goto L_08813AA0;
L_08813F30:;
    a3 = LD32(s2+92);
    a1 = a1 + s0;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    v0 = a3 + s0;
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    v1 = LD32(a1+12);
    ST32(v0+12, v1);
    a0 = LD32(a1+16);
    ST32(v0+16, a0);
    v1 = LD32(a1+20);
    ST32(v0+20, v1);
    a0 = LD32(a1+24);
    ST32(v0+24, a0);
    goto L_088139C0;
L_08813F78:;
    cnd_ = v0 != 0;
    v0 = D_08AEB540 - (-19136);
    if (cnd_) { goto L_08813B14; }
    goto L_08813F80;
L_08813F80:;
    v1 = D_08AEB544 - (-19132);
    a0 = s0 << 3;
    f21 = BITSF(LD32(v0-19136));
    f22 = BITSF(LD32(v1-19132));
    a0 = a0 - s0;
    v1 = D_08B45ACC - (23244);
    s1 = a0 << 2;
    s6 = 1;
    s7 = v1 + 23244;
    goto L_08813FA4;
L_08813FA4:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s0 + 0;
    a3 = sp + 0;
    { rv_t r_ = ({ v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;__auto_type vr_t_ = func_088116C8(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr119=v[119];vr120=v[120];vr122=v[122];vr123=v[123];vr124=v[124];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08813FB8;
L_08813FB8:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08814124; }
    goto L_08813FC0;
L_08813FC0:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = LD32(s2+92); goto L_088144D8; }
    goto L_08813FD0;
L_08813FD0:;
    cnd_ = s0 != 0;
    t0 = s0 >> 5;
    if (cnd_) { goto L_08813FF0; }
    goto L_08813FD8;
L_08813FD8:;
    a0 = LD32(sp+96);
    cnd_ = a0 == 0;
    v0 = t0 << 2;
    if (cnd_) { goto L_08813FF4; }
    goto L_08813FE4;
L_08813FE4:;
    cnd_ = fp != 0;
    if (cnd_) { a3 = LD32(s2+92); goto L_088144CC; }
    goto L_08813FEC;
L_08813FEC:;
    t0 = s0 >> 5;
    goto L_08813FF0;
L_08813FF0:;
    v0 = t0 << 2;
    goto L_08813FF4;
L_08813FF4:;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a2 = s0 & 0x1f;
    v0 = s6 << (a2 & 31);
    v1 = v1 & v0;
    t1 = t0 + 0;
    cnd_ = v1 != 0;
    t2 = a2 + 0;
    if (cnd_) { goto L_088144C4; }
    goto L_08814014;
L_08814014:;
    v0 = LD32(s2);
    v1 = 0x400000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s5+32); goto L_0881447C; }
    goto L_08814028;
L_08814028:;
    v0 = D_08B45A9C - (23196);
    f0 = BITSF(LD32(v0+23196));
    a3 = LD32(s2+92);
    v0 = v0 + 23196;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    v0 = a3 + s1;
    ST32(v0, FBITS(f0));
    a0 = D_08B45ACC - (23244);
    a1 = v0 + 12;
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    v1 = LD32(a0+23244);
    ST32(v0+12, v1);
    a0 = LD32(s7+4);
    ST32(a1+4, a0);
    v0 = LD32(s7+8);
    ST32(a1+8, v0);
    v1 = LD32(s7+12);
    ST32(a1+12, v1);
    goto L_08814078;
L_08814078:;
    v0 = t1 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = s6 << (t2 & 31);
    v1 = v1 | a0;
    ST32(v0+4, v1);
    goto L_08814090;
L_08814090:;
    v0 = LD32(sp+96);
    cnd_ = v0 == 0;
    v0 = t0 << 2;
    if (cnd_) { goto L_088142B4; }
    goto L_0881409C;
L_0881409C:;
    cnd_ = s0 != 0;
    v0 = v0 + s2;
    if (cnd_) { goto L_088142B8; }
    goto L_088140A4;
L_088140A4:;
    v0 = LD32(s2+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0881422C; }
    goto L_088140B4;
L_088140B4:;
    a0 = a3 + 12;
    ST32(a3+12, v0);
    v1 = LD32(sp+16);
    ST32(a0+4, v1);
    v0 = LD32(sp+20);
    ST32(a0+8, v0);
    v1 = LD32(sp+24);
    goto L_088140D0;
L_088140D0:;
    ST32(a0+12, v1);
    goto L_088140D4;
L_088140D4:;
    cnd_ = fp == 0;
    v0 = t0 << 2;
    if (cnd_) { goto L_0881415C; }
    goto L_088140DC;
L_088140DC:;
    cnd_ = s0 != 0;
    v0 = v0 + s2;
    if (cnd_) { goto L_08814160; }
    goto L_088140E4;
L_088140E4:;
    v0 = LD32(s2+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08814138; }
    goto L_088140F4;
L_088140F4:;
    f1 = BITSF(LD32(sp+8));
    ST32(a3, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    goto L_08814108;
L_08814108:;
    v0 = t0 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = s6 << (a2 & 31);
    v1 = v1 | a0;
    ST32(v0+4, v1);
    s0 = s0 + 1;
    goto L_08814124;
L_08814124:;
    v0 = s3 < s0;
    cnd_ = v0 == 0;
    s1 = s1 + 28;
    if (cnd_) { goto L_08813FA4; }
    goto L_08814130;
L_08814130:;
    goto L_08813B18;
L_08814138:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    goto L_08814108;
L_0881415C:;
    v0 = v0 + s2;
    goto L_08814160;
L_08814160:;
    v1 = LD32(v0+4);
    a0 = s6 << (a2 & 31);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_088141F8; }
    goto L_08814174;
L_08814174:;
    v0 = D_08AEB540 - (-19136);
    f0 = BITSF(LD32(v0-19136));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    v0 = a3 + s1;
    if (cnd_) { goto L_088141A8; }
    goto L_0881418C;
L_0881418C:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(v0, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    goto L_08814108;
L_088141A8:;
    f0 = f0 - f20;
    f4 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = f4 * f0;
    f2 = BITSF(LD32(sp));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    f4 = f4 + f2;
    f5 = f5 + f1;
    f3 = f3 + f0;
    ST32(v0, FBITS(f4));
    ST32(v0+8, FBITS(f3));
    ST32(v0+4, FBITS(f5));
    goto L_08814108;
L_088141F8:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = f2 * f20;
    v0 = a3 + s1;
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    goto L_08814108;
L_0881422C:;
    v1 = FBITS(f21);
    {vr112=BITSF(LD32(s7+(0)));}
    {vr113=BITSF(LD32(s7+(4)));}
    {vr114=BITSF(LD32(s7+(8)));}
    {vr115=BITSF(LD32(s7+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v1);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(64);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(76);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+64);
    a0 = a3 + 12;
    ST32(a3+12, v0);
    v1 = LD32(sp+68);
    ST32(a0+4, v1);
    v0 = LD32(sp+72);
    ST32(a0+8, v0);
    v1 = LD32(sp+76);
    goto L_088140D0;
L_088142B4:;
    v0 = v0 + s2;
    goto L_088142B8;
L_088142B8:;
    v1 = LD32(v0+4);
    a0 = s6 << (a2 & 31);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088143F0; }
    goto L_088142CC;
L_088142CC:;
    fcc = FCMP(f21, f20, 14);
    cnd_ = !fcc;
    a1 = a3 + s1;
    if (cnd_) { goto L_08814308; }
    goto L_088142DC;
L_088142DC:;
    v0 = LD32(sp+12);
    a0 = s1 + a3;
    a1 = a0 + 12;
    ST32(a0+12, v0);
    v1 = LD32(sp+16);
    ST32(a1+4, v1);
    v0 = LD32(sp+20);
    ST32(a1+8, v0);
    v1 = LD32(sp+24);
    goto L_08814300;
L_08814300:;
    ST32(a1+12, v1);
    goto L_088140D4;
L_08814308:;
    v1 = LD32(a1+12);
    a0 = a1 + 12;
    ST32(sp+64, v1);
    v0 = LD32(a0+4);
    ST32(sp+68, v0);
    v1 = LD32(a0+8);
    ST32(sp+72, v1);
    v0 = LD32(a0+12);
    a0 = FBITS(f20);
    ST32(sp+76, v0);
    v0 = FBITS(f22);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {vr124=BITSF(a0);}
    {v[127]=BITSF(v0);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=vr0;v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088143A0; }
    goto L_08814380;
L_08814380:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=vr125;float t0=v[100];vr124=s0*t0;vr125=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;vr125=s1*t0;}
    goto L_088143A0;
L_088143A0:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088143B4; }
    goto L_088143AC;
L_088143AC:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_088143B4;
L_088143B4:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;v[121]=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=v[121];float s2=vr122;float s3=vr123;float t0=vr120;float t1=v[121];float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088143DC; }
    goto L_088143D0;
L_088143D0:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=vr120;float s1=v[121];float s2=vr122;float s3=vr123;float t0=v[92];vr120=s0*t0;v[121]=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_088143DC;
L_088143DC:;
    {ST32(a1+(12),FBITS(vr120));}
    {ST32(a1+(16),FBITS(v[121]));}
    {ST32(a1+(20),FBITS(vr122));}
    {ST32(a1+(24),FBITS(vr123));}
    goto L_088140D4;
L_088143F0:;
    v1 = FBITS(f20);
    {vr112=BITSF(LD32(s7+(0)));}
    {vr113=BITSF(LD32(s7+(4)));}
    {vr114=BITSF(LD32(s7+(8)));}
    {vr115=BITSF(LD32(s7+(12)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr119=BITSF(LD32(sp+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr120=sum;}
    {vr124=BITSF(v1);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=vr120;float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(64);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(76);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+64);
    a0 = s1 + a3;
    a1 = a0 + 12;
    ST32(a0+12, v0);
    v1 = LD32(sp+68);
    ST32(a1+4, v1);
    v0 = LD32(sp+72);
    ST32(a1+8, v0);
    v1 = LD32(sp+76);
    goto L_08814300;
L_0881447C:;
    a3 = LD32(s2+92);
    a1 = a1 + s1;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    v0 = a3 + s1;
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    v1 = LD32(a1+12);
    ST32(v0+12, v1);
    a0 = LD32(a1+16);
    ST32(v0+16, a0);
    v1 = LD32(a1+20);
    ST32(v0+20, v1);
    a0 = LD32(a1+24);
    ST32(v0+24, a0);
    goto L_08814078;
L_088144C4:;
    a3 = LD32(s2+92);
    goto L_08814090;
L_088144CC:;
    t0 = 0 + 0;
    a2 = 0 + 0;
    goto L_08814090;
L_088144D8:;
    t0 = s0 >> 5;
    a2 = s0 & 0x1f;
    goto L_08814090;
    v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;
}

/* 088144E4 */
rv_t func_088144E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088144E4:;
    sp = sp - 16;
    v0 = a1 < 0x6u;
    v1 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08814534; }
    goto L_08814500;
L_08814500:;
    v1 = D_08AD3798 - (14232);
    v0 = a1 << 2;
    v1 = v1 + 14232;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0881451Cu: goto L_0881451C; case 0x08814558u: goto L_08814558; case 0x08814574u: goto L_08814574; case 0x08814598u: goto L_08814598; case 0x088145B8u: goto L_088145B8; case 0x0881462Cu: goto L_0881462C; default: rs_break(0, 0x08814514); }
L_0881451C:;
    v0 = LD32(s0+40);
    a0 = s0 + 0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08814548; }
    goto L_08814530;
L_08814530:;
    v1 = 1;
    goto L_08814534;
L_08814534:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08814548:;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08814550;
L_08814550:;
    v1 = 1;
    goto L_08814534;
L_08814558:;
    v0 = LD32(s0+40);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08814534; }
    goto L_08814568;
L_08814568:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08814548;
L_08814574:;
    v1 = LD32(s0);
    goto L_08814578;
L_08814578:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08814584;
L_08814584:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08814530; }
    goto L_08814590;
L_08814590:;
    goto L_08814548;
L_08814598:;
    a0 = LD32(s0+16);
    v0 = a0 & 0xa;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08814534; }
    goto L_088145A8;
L_088145A8:;
    v0 = a0 | 0x2;
    v1 = LD32(s0);
    ST32(s0+16, v0);
    goto L_08814578;
L_088145B8:;
    a0 = LD32(s0+16);
    v0 = a0 & 0xa;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08814534; }
    goto L_088145C8;
L_088145C8:;
    v1 = LD32(s0);
    v0 = a0 | 0x2;
    ST32(s0+16, v0);
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088145E0;
L_088145E0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_0881461C; }
    goto L_088145E8;
L_088145E8:;
    v1 = LD32(s0+28);
    goto L_088145EC;
L_088145EC:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 1; goto L_08814534; }
    goto L_088145F4;
L_088145F4:;
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = 1; goto L_08814534; }
    goto L_08814600;
L_08814600:;
    v1 = LD32(a0);
    a1 = 4;
    goto L_08814608;
L_08814608:;
    v0 = LD32(v1+24);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08814614;
L_08814614:;
    v1 = 1;
    goto L_08814534;
L_0881461C:;
    a1 = 2;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08814624;
L_08814624:;
    v1 = LD32(s0+28);
    goto L_088145EC;
L_0881462C:;
    v0 = LD32(s0+4);
    a1 = LD32(a2);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    a2 = v0 + 52;
    if (cnd_) { goto L_0881466C; }
    goto L_08814640;
L_08814640:;
    v0 = a0 + 0;
    v1 = LD32(v0);
    goto L_08814648;
L_08814648:;
    cnd_ = v1 == a1;
    a3 = v0 + 4;
    if (cnd_) { goto L_08814678; }
    goto L_08814650;
L_08814650:;
    a0 = v0 + 12;
    v1 = a1 < v1;
    v0 = v0 + 8;
    if (v1 == 0) v0 = a0;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08814648; }
    goto L_0881466C;
L_0881466C:;
    a0 = LD32(a2+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088146C0; }
    goto L_08814678;
L_08814678:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08814684; }
    goto L_08814680;
L_08814680:;
    v0 = LD32(a3);
    goto L_08814684;
L_08814684:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_088146A8; }
    goto L_0881468C;
L_0881468C:;
    f12 = BITSF(LD32(v0+68));
    a0 = s0 + 0;
    func_088149CC(a0, f12);
    goto L_08814698;
L_08814698:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 1;
    goto L_08814608;
L_088146A8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08814534; }
    goto L_088146B0;
L_088146B0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08814608;
L_088146C0:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088146C8;
L_088146C8:;
    a3 = v0 + 0;
    goto L_08814678;
}

/* 088146D0 */
rv_t func_088146D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088146D0:;
    sp = sp - 16;
    v1 = LD32(a0+44);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08814714; }
    goto L_088146E8;
L_088146E8:;
    cnd_ = (s32)v1 <= 0;
    v0 = 1;
    if (cnd_) { goto L_08814828; }
    goto L_088146F0;
L_088146F0:;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08814714; }
    goto L_088146F8;
L_088146F8:;
    cnd_ = v1 == v0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08814718; }
    goto L_08814700;
L_08814700:;
    ST32(s0+44, v0);
    goto L_08814704;
L_08814704:;
    goto L_08814708;
L_08814708:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08814714:;
    v0 = (u32)-1;
    goto L_08814718;
L_08814718:;
    ST32(s0+40, v1);
    ST32(s0+44, v0);
    v1 = LD32(s0+40);
    goto L_08814724;
L_08814724:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(s0+56)); goto L_08814740; }
    goto L_08814730;
L_08814730:;
    a0 = s0 + 0;
    { rv_t r_ = func_088113F4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08814738;
L_08814738:;
    goto L_08814708;
L_08814740:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f3 = f12;
    if (cnd_) { goto L_08814770; }
    goto L_08814754;
L_08814754:;
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f0 - f12; goto L_0881481C; }
    goto L_08814764;
L_08814764:;
    f3 = f12 - f0;
    f0 = f1;
    ST32(s0+56, FBITS(f1));
    goto L_08814770;
L_08814770:;
    f5 = BITSF(0);
    fcc = FCMP(f0, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814730; }
    goto L_08814784;
L_08814784:;
    f0 = BITSF(LD32(s0+52));
    f1 = BITSF(LD32(s0+68));
    f2 = BITSF(LD32(s0+64));
    f0 = f3 * f0;
    f3 = f1 + f0;
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    ST32(s0+68, FBITS(f3));
    if (cnd_) { goto L_08814730; }
    goto L_088147A8;
L_088147A8:;
    v0 = LD32(s0+16);
    v1 = 0x10000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0881480C; }
    goto L_088147BC;
L_088147BC:;
    f0 = BITSF(LD32(s0+60));
    f4 = f2 - f0;
    fcc = FCMP(f4, f5, 2);
    cnd_ = !fcc;
    f2 = f3 - f0;
    if (cnd_) { goto L_088147DC; }
    goto L_088147D4;
L_088147D4:;
    ST32(s0+68, FBITS(f0));
    goto L_08814730;
L_088147DC:;
    a0 = s0 + 68;
    a1 = s0 + 60;
    a2 = s0 + 64;
    f2 = f2 / f4;
    f1 = BITSF(F2I(f2, 1));
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 * f4;
    f0 = f3 - f0;
    ST32(s0+68, FBITS(f0));
    f0 = func_088150C4(a0, a1, a2);
    goto L_08814804;
L_08814804:;
    ST32(s0+68, FBITS(f0));
    goto L_08814730;
L_0881480C:;
    a1 = 2;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08814814;
L_08814814:;
    f0 = BITSF(LD32(s0+64));
    goto L_088147D4;
L_0881481C:;
    f3 = f1;
    ST32(s0+56, FBITS(f0));
    goto L_08814770;
L_08814828:;
    v0 = (u32)-1;
    cnd_ = v1 != v0;
    if (cnd_) { ST32(s0+44, v0); goto L_08814704; }
    goto L_08814834;
L_08814834:;
    v1 = LD32(s0+40);
    goto L_08814724;
}

/* 0881483C */
rv_t func_0881483C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881483C:;
    f0 = BITSF(0);
    sp = sp - 16;
    fcc = FCMP(f12, f0, 12);
    s0 = a0 + 0;
    cnd_ = !fcc;
    if (cnd_) { goto L_088148D8; }
    goto L_08814858;
L_08814858:;
    f0 = BITSF(FBITS(f12) ^ 0x80000000u);
    v0 = LD_U16(a0+18);
    f1 = BITSF(LD32(a0+52));
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    f12 = f0 * f1;
    if (cnd_) { goto L_088148B8; }
    goto L_08814870;
L_08814870:;
    f0 = BITSF(LD32(a0+60));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+68, FBITS(f0)); goto L_0881489C; }
    goto L_08814884;
L_08814884:;
    f0 = BITSF(LD32(a0+64));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a0+68, FBITS(f12)); goto L_0881489C; }
    goto L_08814898;
L_08814898:;
    ST32(s0+68, FBITS(f0));
    goto L_0881489C;
L_0881489C:;
    ST32(s0+56, 0);
    a0 = s0 + 0;
    { rv_t r_ = func_088113F4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088148A8;
L_088148A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088148B8:;
    f13 = BITSF(LD32(a0+64));
    f0 = BITSF(LD32(a0+60));
    f13 = f13 - f0;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088148C8;
L_088148C8:;
    f1 = BITSF(LD32(s0+60));
    f1 = f1 + f0;
    ST32(s0+68, FBITS(f1));
    goto L_0881489C;
L_088148D8:;
    ST32(a0+56, FBITS(f12));
    goto L_088148A8;
}

/* 088148E0 */
void func_088148E0(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088148E0:;
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    v0 = D_08AEB548 - (-19128);
    if (cnd_) { goto L_08814904; }
    goto L_088148F4;
L_088148F4:;
    f0 = BITSF(LD32(v0-19128));
    ST32(a0+48, FBITS(f12));
    f0 = f0 / f12;
    ST32(a0+52, FBITS(f0));
    goto L_08814904;
L_08814904:;
    return;
}

/* 0881490C */
void func_0881490C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881490C:;
    sp = sp - 32;
    f1 = BITSF(0);
    s0 = a0 + 0;
    fcc = FCMP(f12, f1, 2);
    v0 = LD32(a0+36);
    cnd_ = v0 == 0;
    f21 = f12;
    if (cnd_) { goto L_08814954; }
    goto L_08814938;
L_08814938:;
    cnd_ = fcc;
    if (cnd_) { goto L_08814958; }
    goto L_08814940;
L_08814940:;
    f0 = BITSF(LD32(v0+24));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881496C; }
    goto L_08814954;
L_08814954:;
    goto L_08814958;
L_08814958:;
    sp = sp + 32;
    return;
L_0881496C:;
    f20 = BITSF(LD32(v0+20));
    f20 = f20 * f0;
    f0 = func_08817B60(a0, a1);
    goto L_08814978;
L_08814978:;
    a0 = s0 + 0;
    f20 = f20 * f0;
    f20 = f20 / f21;
    f12 = f20;
    func_088148E0(a0, f12);
    goto L_0881498C;
L_0881498C:;
    goto L_08814958;
}

/* 08814994 */
void func_08814994(u32 a0, float f12)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_08814994:;
    f0 = BITSF(LD32(a0+64));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a0+60, FBITS(f12)); goto L_088149A8; }
    goto L_088149A8;
L_088149A8:;
    return;
}

/* 088149B0 */
float func_088149B0(u32 a0, float f12)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088149B0:;
    f0 = BITSF(LD32(a0+60));
    fcc = FCMP(f12, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a0+64, FBITS(f12)); goto L_088149C4; }
    goto L_088149C4;
L_088149C4:;
    return f0;
}

/* 088149CC */
void func_088149CC(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088149CC:;
    f0 = BITSF(0);
    sp = sp - 16;
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088149FC; }
    goto L_088149E4;
L_088149E4:;
    v0 = D_08AEB54C - (-19124);
    f0 = BITSF(LD32(v0-19124));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814A08; }
    goto L_088149FC;
L_088149FC:;
    goto L_08814A00;
L_08814A00:;
    sp = sp + 16;
    return;
L_08814A08:;
    ST32(a0+68, FBITS(f12));
    { rv_t r_ = func_088113F4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08814A10;
L_08814A10:;
    goto L_08814A00;
}

/* 08814A18 */
rv_t func_08814A18(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08814A18:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = LD32(a0+36);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08814AC4; }
    goto L_08814A54;
L_08814A54:;
    f23 = BITSF(LD32(s1+76));
    f22 = BITSF(LD32(s1+72));
    s0 = LD32(a0+52);
    fcc = FCMP(f23, f22, 2);
    cnd_ = !fcc;
    s3 = 0 + 0;
    if (cnd_) { goto L_08814AF4; }
    goto L_08814A70;
L_08814A70:;
    v0 = LD32(a0+48);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = s3 + 0; goto L_08814AC4; }
    goto L_08814A7C;
L_08814A7C:;
    f0 = BITSF(LD32(s0+4));
    goto L_08814A80;
L_08814A80:;
    f1 = BITSF(LD32(s0+8));
    v1 = LD32(s0);
    fcc = FCMP(f0, f22, 14);
    v0 = v0 - 1;
    cnd_ = !fcc;
    s0 = s0 + 12;
    if (cnd_) { goto L_08814AB8; }
    goto L_08814A98;
L_08814A98:;
    fcc = FCMP(f22, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814AB8; }
    goto L_08814AA8;
L_08814AA8:;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { s3 = s3 | v1; goto L_08814AB8; }
    goto L_08814AB8;
L_08814AB8:;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+4)); goto L_08814A80; }
    goto L_08814AC0;
L_08814AC0:;
    v0 = s3 + 0;
    goto L_08814AC4;
L_08814AC4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08814AF4:;
    v0 = LD32(s1+16);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(a0+48);
    if (cnd_) { goto L_08814BC4; }
    goto L_08814B04;
L_08814B04:;
    cnd_ = (s32)v0 <= 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08814AC0; }
    goto L_08814B0C;
L_08814B0C:;
    f20 = BITSF(LD32(s0+4));
    f21 = BITSF(LD32(s0+8));
    f14 = f22;
    f12 = f20;
    fcc = FCMP(f20, f21, 2);
    f13 = f21;
    f15 = f23;
    cnd_ = !fcc;
    s4 = LD32(s0);
    if (cnd_) { goto L_08814B64; }
    goto L_08814B30;
L_08814B30:;
    fcc = FCMP(f20, f22, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814B64; }
    goto L_08814B40;
L_08814B40:;
    v0 = LD32(s1+44);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08814B64; }
    goto L_08814B50;
L_08814B50:;
    s2 = s2 - 1;
    goto L_08814B54;
L_08814B54:;
    cnd_ = s2 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08814B0C; }
    goto L_08814B5C;
L_08814B5C:;
    v0 = s3 + 0;
    goto L_08814AC4;
L_08814B64:;
    fcc = FCMP(f23, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814BB0; }
    goto L_08814B74;
L_08814B74:;
    f15 = BITSF(LD32(s1+60));
    f12 = f20;
    f13 = f21;
    f14 = f23;
    v0 = func_08811BF0(f12, f13, f14, f15);
    goto L_08814B88;
L_08814B88:;
    f12 = f20;
    f13 = f21;
    cnd_ = v0 != 0;
    f15 = f22;
    if (cnd_) { goto L_08814BA8; }
    goto L_08814B98;
L_08814B98:;
    f14 = BITSF(LD32(s1+64));
    v0 = func_08811BF0(f12, f13, f14, f15);
    goto L_08814BA0;
L_08814BA0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 - 1; goto L_08814B54; }
    goto L_08814BA8;
L_08814BA8:;
    s3 = s3 | s4;
    goto L_08814B50;
L_08814BB0:;
    s2 = s2 - 1;
    v0 = func_08811BF0(f12, f13, f14, f15);
    goto L_08814BB8;
L_08814BB8:;
    v1 = s3 | s4;
    if (v0 != 0) s3 = v1;
    goto L_08814B54;
L_08814BC4:;
    cnd_ = (s32)v0 <= 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08814AC0; }
    goto L_08814BCC;
L_08814BCC:;
    f20 = BITSF(LD32(s0+4));
    f21 = BITSF(LD32(s0+8));
    f14 = f23;
    f12 = f20;
    fcc = FCMP(f20, f21, 2);
    f13 = f21;
    f15 = f22;
    cnd_ = !fcc;
    s4 = LD32(s0);
    if (cnd_) { goto L_08814C24; }
    goto L_08814BF0;
L_08814BF0:;
    fcc = FCMP(f20, f22, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814C24; }
    goto L_08814C00;
L_08814C00:;
    v0 = LD32(s1+44);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08814C24; }
    goto L_08814C10;
L_08814C10:;
    s2 = s2 - 1;
    goto L_08814C14;
L_08814C14:;
    cnd_ = s2 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08814BCC; }
    goto L_08814C1C;
L_08814C1C:;
    v0 = s3 + 0;
    goto L_08814AC4;
L_08814C24:;
    fcc = FCMP(f22, f23, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814C70; }
    goto L_08814C34;
L_08814C34:;
    f15 = BITSF(LD32(s1+64));
    f12 = f20;
    f13 = f21;
    f14 = f23;
    v0 = func_08811BF0(f12, f13, f14, f15);
    goto L_08814C48;
L_08814C48:;
    f12 = f20;
    f13 = f21;
    cnd_ = v0 != 0;
    f15 = f22;
    if (cnd_) { goto L_08814C68; }
    goto L_08814C58;
L_08814C58:;
    f14 = BITSF(LD32(s1+60));
    v0 = func_08811BF0(f12, f13, f14, f15);
    goto L_08814C60;
L_08814C60:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 - 1; goto L_08814C14; }
    goto L_08814C68;
L_08814C68:;
    s3 = s3 | s4;
    goto L_08814C10;
L_08814C70:;
    s2 = s2 - 1;
    v0 = func_08811BF0(f12, f13, f14, f15);
    goto L_08814C78;
L_08814C78:;
    v1 = s3 | s4;
    if (v0 != 0) s3 = v1;
    goto L_08814C14;
}

/* 08814C84 */
rv_t func_08814C84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08814C84:;
    sp = sp - 32;
    v0 = LD32(a0+36);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08814CBC; }
    goto L_08814CA4;
L_08814CA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08814CBC:;
    a0 = LD32(a0+4);
    a1 = 0 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    t0 = 1;
    { rv_t r_ = func_08807898(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08814CD4;
L_08814CD4:;
    cnd_ = v0 != 0;
    if (cnd_) { f2 = BITSF(LD32(s0+76)); goto L_08814D00; }
    goto L_08814CDC;
L_08814CDC:;
    v0 = LD32(s0+4);
    v1 = v0 + 280;
    f1 = BITSF(LD32(v0+280));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    f2 = BITSF(LD32(s0+76));
    goto L_08814D00;
L_08814D00:;
    f3 = BITSF(LD32(s0+72));
    v1 = LD32(s0+36);
    fcc = FCMP(f2, f3, 2);
    cnd_ = fcc;
    s1 = LD32(v1+60);
    if (cnd_) { goto L_08814CA4; }
    goto L_08814D18;
L_08814D18:;
    v0 = LD32(s0+16);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(v1+56);
    if (cnd_) { goto L_08814E18; }
    goto L_08814D28;
L_08814D28:;
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08814CA4; }
    goto L_08814D30;
L_08814D30:;
    fcc = FCMP(f2, f3, 12);
    f1 = BITSF(LD32(s1));
    cnd_ = !fcc;
    a1 = LD32(s1+4);
    if (cnd_) { goto L_08814DBC; }
    goto L_08814D40;
L_08814D40:;
    f0 = BITSF(LD32(s0+60));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814D64; }
    goto L_08814D54;
L_08814D54:;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+4); goto L_08814D8C; }
    goto L_08814D64;
L_08814D64:;
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814DA0; }
    goto L_08814D74;
L_08814D74:;
    f0 = BITSF(LD32(s0+64));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814DA0; }
    goto L_08814D88;
L_08814D88:;
    a0 = LD32(s0+4);
    goto L_08814D8C;
L_08814D8C:;
    a2 = LD32(s0+36);
    a3 = sp + 0;
    f0 = func_088069B8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08814D98;
L_08814D98:;
    v1 = LD32(s0+36);
    v0 = LD32(v1+56);
    goto L_08814DA0;
L_08814DA0:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    s1 = s1 + 8;
    if (cnd_) { goto L_08814CA4; }
    goto L_08814DB0;
L_08814DB0:;
    f2 = BITSF(LD32(s0+76));
    f3 = BITSF(LD32(s0+72));
    goto L_08814D30;
L_08814DBC:;
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814DDC; }
    goto L_08814DCC;
L_08814DCC:;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+4); goto L_08814D8C; }
    goto L_08814DDC;
L_08814DDC:;
    fcc = FCMP(f1, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814DA0; }
    goto L_08814DEC;
L_08814DEC:;
    f0 = BITSF(LD32(s0+64));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814DA0; }
    goto L_08814E00;
L_08814E00:;
    v0 = LD_U16(s0+18);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814DA0; }
    goto L_08814E10;
L_08814E10:;
    a0 = LD32(s0+4);
    goto L_08814D8C;
L_08814E18:;
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08814CA4; }
    goto L_08814E20;
L_08814E20:;
    fcc = FCMP(f3, f2, 12);
    f1 = BITSF(LD32(s1));
    cnd_ = !fcc;
    a1 = LD32(s1+4);
    if (cnd_) { goto L_08814EAC; }
    goto L_08814E30;
L_08814E30:;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+60)); goto L_08814E58; }
    goto L_08814E40;
L_08814E40:;
    f0 = BITSF(LD32(s0+64));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+4); goto L_08814E7C; }
    goto L_08814E54;
L_08814E54:;
    f0 = BITSF(LD32(s0+60));
    goto L_08814E58;
L_08814E58:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814E90; }
    goto L_08814E68;
L_08814E68:;
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814E90; }
    goto L_08814E78;
L_08814E78:;
    a0 = LD32(s0+4);
    goto L_08814E7C;
L_08814E7C:;
    a2 = LD32(s0+36);
    a3 = sp + 0;
    f0 = func_088069B8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08814E88;
L_08814E88:;
    v1 = LD32(s0+36);
    v0 = LD32(v1+56);
    goto L_08814E90;
L_08814E90:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    s1 = s1 + 8;
    if (cnd_) { goto L_08814CA4; }
    goto L_08814EA0;
L_08814EA0:;
    f2 = BITSF(LD32(s0+76));
    f3 = BITSF(LD32(s0+72));
    goto L_08814E20;
L_08814EAC:;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08814ECC; }
    goto L_08814EBC;
L_08814EBC:;
    fcc = FCMP(f1, f3, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+4); goto L_08814E7C; }
    goto L_08814ECC;
L_08814ECC:;
    fcc = FCMP(f1, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814E90; }
    goto L_08814EDC;
L_08814EDC:;
    f0 = BITSF(LD32(s0+64));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814E90; }
    goto L_08814EF0;
L_08814EF0:;
    v0 = LD_U16(s0+18);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1+56); goto L_08814E90; }
    goto L_08814F00;
L_08814F00:;
    a0 = LD32(s0+4);
    goto L_08814E7C;
}

/* 08814F08 */
float func_08814F08(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08814F08:;
    sp = sp - 48;
    v1 = 0x10000u;
    a3 = a0 + 0;
    a1 = sp + 0;
    a2 = sp + 4;
    v0 = LD32(a0+16);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = a0 + 72;
    if (cnd_) { goto L_08814F74; }
    goto L_08814F34;
L_08814F34:;
    v0 = D_08AEB550 - (-19120);
    f20 = BITSF(LD32(v0-19120));
    f12 = BITSF(LD32(a3+72));
    f13 = f20;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08814F48;
L_08814F48:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f1 + f20; goto L_08814F60; }
    goto L_08814F60;
L_08814F60:;
    f0 = f1;
    goto L_08814F68;
L_08814F68:;
    sp = sp + 48;
    return f0;
L_08814F74:;
    v0 = D_08AEB550 - (-19120);
    f0 = BITSF(LD32(v0-19120));
    ST32(sp, 0);
    ST32(sp+4, FBITS(f0));
    f0 = func_088150C4(a0, a1, a2);
    goto L_08814F88;
L_08814F88:;
    goto L_08814F68;
}

/* 08814F90 */
rv_t func_08814F90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08814F90:;
    sp = sp - 16;
    s1 = a1 + 0;
    t0 = s1 + 28;
    s0 = a0 + 0;
    v1 = LD32(a1+28);
    cnd_ = v1 == 0;
    a1 = LD32(a0+12);
    if (cnd_) { goto L_08814FE8; }
    goto L_08814FBC;
L_08814FBC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08814FC4;
L_08814FC4:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08814FF4; }
    goto L_08814FDC;
L_08814FDC:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08814FC4; }
    goto L_08814FE8;
L_08814FE8:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088150B4; }
    goto L_08814FF4;
L_08814FF4:;
    cnd_ = a3 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08815000; }
    goto L_08814FFC;
L_08814FFC:;
    s2 = LD32(a3);
    goto L_08815000;
L_08815000:;
    a0 = LD32(s0+28);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0881509C; }
    goto L_0881500C;
L_0881500C:;
    a1 = LD32(s0+8);
    goto L_08815010;
L_08815010:;
    a2 = LD32(s0+16);
    a3 = LD32(s0+20);
    t0 = LD32(s0+32);
    a0 = s1 + 0;
    t2 = s2 + 0;
    t1 = v0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881502C;
L_0881502C:;
    f0 = BITSF(LD32(s0+80));
    v1 = LD32(s0+40);
    a0 = LD32(s0+44);
    f1 = BITSF(LD32(s0+48));
    f2 = BITSF(LD32(s0+52));
    f3 = BITSF(LD32(s0+56));
    f4 = BITSF(LD32(s0+60));
    f5 = BITSF(LD32(s0+64));
    f6 = BITSF(LD32(s0+68));
    f7 = BITSF(LD32(s0+72));
    f8 = BITSF(LD32(s0+76));
    ST32(v0+80, FBITS(f0));
    ST32(v0+40, v1);
    ST32(v0+44, a0);
    ST32(v0+48, FBITS(f1));
    ST32(v0+52, FBITS(f2));
    ST32(v0+56, FBITS(f3));
    ST32(v0+60, FBITS(f4));
    ST32(v0+64, FBITS(f5));
    ST32(v0+68, FBITS(f6));
    ST32(v0+72, FBITS(f7));
    ST32(v0+76, FBITS(f8));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881509C:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088150AC;
L_088150AC:;
    a1 = LD32(s0+8);
    goto L_08815010;
L_088150B4:;
    a2 = 1;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088150BC;
L_088150BC:;
    a3 = v0 + 0;
    goto L_08814FF4;
}

/* 088150C4 */
float func_088150C4(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088150C4:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088150F0; }
    goto L_088150DC;
L_088150DC:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088150F0; }
    goto L_088150F0;
L_088150F0:;
    return f0;
}

/* 088150F8 */
void func_088150F8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088150F8:;
    sp = sp - 32;
    s0 = a0 + 0;
    func_08811110(a0, a1, a2, a3);
    goto L_0881510C;
L_0881510C:;
    v0 = D_08AEB55C - (-19108);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0-19108));
    v0 = D_08AF0DC8 - (3528);
    v1 = s0 + 48;
    t0 = s0 + 36;
    a1 = s0 + 72;
    a2 = s0 + 84;
    a3 = s0 + 100;
    v0 = v0 + 3528;
    ST32(s0+32, 0);
    a0 = s0 + 112;
    ST32(s0+36, 0);
    ST32(s0+48, FBITS(f0));
    ST32(s0, v0);
    ST32(v1+4, FBITS(f0));
    ST32(v1+20, FBITS(f0));
    ST32(v1+16, FBITS(f0));
    ST32(v1+12, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f0));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(s0+72, FBITS(f0));
    ST32(s0+84, FBITS(f0));
    ST32(s0+140, 0);
    ST32(t0+60, FBITS(f0));
    ST32(s0+132, 0);
    ST32(a3+4, FBITS(f0));
    ST32(a3+8, FBITS(f0));
    ST32(s0+100, FBITS(f0));
    ST32(s0+112, FBITS(f0));
    ST32(s0+136, 0);
    ST32(t0+92, 0);
    ST32(a0+12, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f0));
    sp = sp + 32;
    return;
}

/* 088151B4 */
rv_t func_088151B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088151B4:;
    sp = sp - 16;
    v0 = D_08AF0DC8 - (3528);
    v0 = v0 + 3528;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    a1 = LD32(s0+8);
    ST32(s0, v0);
    a0 = a0 + 28;
    func_08AA2704(a0, a1, t1, t2, t3);
    goto L_088151E0;
L_088151E0:;
    a0 = s0 + 0;
    func_08815484(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088151E8;
L_088151E8:;
    a0 = s0 + 36;
    v0 = func_08819B18(a0, 0, 0, 0);
    goto L_088151F0;
L_088151F0:;
    a0 = s0 + 0;
    { rv_t r_ = func_0881113C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088151F8;
L_088151F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08815208 */
rv_t func_08815208(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08815208:;
    sp = sp - 16;
    v0 = D_08AF0DC8 - (3528);
    v0 = v0 + 3528;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    a1 = LD32(s0+8);
    ST32(s0, v0);
    a0 = a0 + 28;
    func_08AA2704(a0, a1, t1, t2, t3);
    goto L_08815234;
L_08815234:;
    a0 = s0 + 0;
    func_08815484(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881523C;
L_0881523C:;
    a0 = s0 + 36;
    v0 = func_08819B18(a0, 0, 0, 0);
    goto L_08815244;
L_08815244:;
    a0 = s0 + 0;
    { rv_t r_ = func_0881113C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881524C;
L_0881524C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08815254;
L_08815254:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08815264 */
rv_t func_08815264(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08815264:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a2 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+24);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088152AC; }
    goto L_08815290;
L_08815290:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088152AC:;
    v0 = LD32(s1+8);
    cnd_ = a2 == 0;
    ST32(s0+12, v0);
    if (cnd_) { goto L_08815370; }
    goto L_088152B8;
L_088152B8:;
    v1 = LD32(s1+136);
    a2 = LD32(s0+20);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08815350; }
    goto L_088152C8;
L_088152C8:;
    v0 = LD32(v1+20);
    v0 = v0 < a2;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08815320; }
    goto L_088152D8;
L_088152D8:;
    v0 = LD32(v1+28);
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_088152E8; }
    goto L_088152E4;
L_088152E4:;
    a1 = LD32(v0+8);
    goto L_088152E8;
L_088152E8:;
    cnd_ = a1 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088152C8; }
    goto L_088152F0;
L_088152F0:;
    v1 = LD32(s1+132);
    ST32(a0+8, s0);
    a1 = 1;
    v0 = LD32(s1+132);
    ST32(v1+28, a0);
    ST32(a0+4, v0);
    ST32(s0+24, a0);
    ST32(s1+132, s0);
    v0 = LD_U16(s1+32);
    goto L_08815314;
L_08815314:;
    v0 = v0 + 1;
    ST16(s1+32, v0);
    goto L_08815290;
L_08815320:;
    ST32(a0+8, v1);
    ST32(v1+24, a0);
    ST32(a0+4, s0);
    cnd_ = a3 == 0;
    ST32(s0+28, a0);
    if (cnd_) { goto L_08815348; }
    goto L_08815334;
L_08815334:;
    ST32(a3+8, s0);
    ST32(s0+24, a3);
    goto L_0881533C;
L_0881533C:;
    v0 = LD_U16(s1+32);
    goto L_08815340;
L_08815340:;
    a1 = 1;
    goto L_08815314;
L_08815348:;
    ST32(s1+136, s0);
    goto L_0881533C;
L_08815350:;
    v0 = LD32(a0);
    ST32(s1+136, s0);
    ST32(s1+132, s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08815368;
L_08815368:;
    v0 = LD_U16(s1+32);
    goto L_08815340;
L_08815370:;
    v0 = LD32(s1+132);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s1+32); goto L_088153A4; }
    goto L_0881537C;
L_0881537C:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0881538C; }
    goto L_08815388;
L_08815388:;
    s2 = LD32(v1+4);
    goto L_0881538C;
L_0881538C:;
    a1 = LD32(v0+8);
    a0 = LD32(s1+4);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08815398;
L_08815398:;
    cnd_ = s2 != 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_0881537C; }
    goto L_088153A0;
L_088153A0:;
    v0 = LD_U16(s1+32);
    goto L_088153A4;
L_088153A4:;
    a1 = 1;
    ST32(s1+136, s0);
    v0 = v0 + 1;
    ST16(s1+32, v0);
    ST32(s1+132, s0);
    goto L_08815290;
}

/* 088153BC */
rv_t func_088153BC(u32 a0, u32 a1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088153BC:;
    sp = sp - 16;
    t1 = a0 + 0;
    t0 = 0 + 0;
    a2 = LD32(a0+132);
    a0 = a1 + 0;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08815404; }
    goto L_088153DC;
L_088153DC:;
    v1 = LD32(a2+24);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088153EC; }
    goto L_088153E8;
L_088153E8:;
    a3 = LD32(v1+4);
    goto L_088153EC;
L_088153EC:;
    cnd_ = a2 == a0;
    if (cnd_) { v0 = LD_U16(t1+32); goto L_08815414; }
    goto L_088153F4;
L_088153F4:;
    a1 = a2 + 0;
    t0 = v1 + 0;
    cnd_ = a3 != 0;
    a2 = a3 + 0;
    if (cnd_) { goto L_088153DC; }
    goto L_08815404;
L_08815404:;
    v0 = 0 + 0;
    goto L_08815408;
L_08815408:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08815414:;
    v0 = v0 - 1;
    cnd_ = a1 == 0;
    ST16(t1+32, v0);
    if (cnd_) { goto L_0881545C; }
    goto L_08815420;
L_08815420:;
    cnd_ = v1 == 0;
    ST32(a1+24, v1);
    if (cnd_) { goto L_08815454; }
    goto L_08815428;
L_08815428:;
    ST32(v1+8, a1);
    goto L_0881542C;
L_0881542C:;
    ST32(a2+24, 0);
    cnd_ = t0 == 0;
    ST32(t0+8, 0);
    if (cnd_) { goto L_0881544C; }
    goto L_08815438;
L_08815438:;
    v1 = LD32(t0);
    a0 = t0 + 0;
    goto L_08815440;
L_08815440:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881544C;
L_0881544C:;
    v0 = 1;
    goto L_08815408;
L_08815454:;
    ST32(t1+136, a1);
    goto L_0881542C;
L_0881545C:;
    cnd_ = a3 == 0;
    ST32(t1+132, a3);
    if (cnd_) { goto L_0881547C; }
    goto L_08815464;
L_08815464:;
    ST32(a3+28, t0);
    ST32(v1+4, 0);
    goto L_0881546C;
L_0881546C:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_08815408; }
    goto L_08815474;
L_08815474:;
    v1 = LD32(a0);
    goto L_08815440;
L_0881547C:;
    ST32(t1+136, 0);
    goto L_0881546C;
}

/* 08815484 */
void func_08815484(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08815484:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+132);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088154C0; }
    goto L_088154A0;
L_088154A0:;
    ST32(s0+32, 0);
    goto L_088154A4;
L_088154A4:;
    v0 = 1;
    ST32(s0+132, 0);
    ST32(s0+136, 0);
    sp = sp + 16;
    return;
L_088154C0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088154D0;
L_088154D0:;
    ST32(s0+32, 0);
    goto L_088154A4;
}

/* 088154D8 */
u64 func_088154D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088154D8:;
    sp = sp - 32;
    s3 = a0 + 0;
    s0 = LD32(a0+132);
    cnd_ = s0 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08815534; }
    goto L_08815500;
L_08815500:;
    v0 = LD32(s0+24);
    goto L_08815504;
L_08815504:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08815514; }
    goto L_08815510;
L_08815510:;
    s1 = LD32(v0+4);
    goto L_08815514;
L_08815514:;
    t_ = s2;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881551C;
L_0881551C:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    cnd_ = v0 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08815554; }
    goto L_0881552C;
L_0881552C:;
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s0+24); goto L_08815504; }
    goto L_08815534;
L_08815534:;
    v0 = 1;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08815554:;
    { rv_t r_ = func_088153BC(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881555C;
L_0881555C:;
    goto L_0881552C;
}

/* 08815564 */
rv_t func_08815564(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08815564:;
    sp = sp - 16;
    a1 = a1 + 36;
    a0 = a0 + 36;
    { rv_t r_ = func_08819B5C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08815578;
L_08815578:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08815584 */
rv_t func_08815584(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08815584:;
    sp = sp - 16;
    v0 = 0x20000u;
    s0 = a0 + 0;
    v1 = LD32(a0+16);
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    a0 = a0 + 36;
    if (cnd_) { goto L_088155C0; }
    goto L_088155A8;
L_088155A8:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+16, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088155C0:;
    v0 = func_08819B18(a0, t1, t2, t3);
    goto L_088155C8;
L_088155C8:;
    v1 = LD32(s0+16);
    goto L_088155A8;
}

/* 088155D0 */
rv_t func_088155D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_088155D0:;
    sp = sp - 144;
    s6 = 0 + 0;
    s5 = a2 + 0;
    s4 = a0 + 36;
    s3 = a0 + 0;
    a0 = s4 + 0;
    s2 = a1 + 0;
    f22 = f12;
    a1 = LD32(a1+4);
    { rv_t r_ = func_08819A10(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08815624;
L_08815624:;
    v0 = LD32(s3+36);
    a0 = LD32(s3+132);
    v0 = (v0 & ~(0x7u << 19)) | ((0 & 0x7) << 19);
    cnd_ = a0 == 0;
    ST32(s3+36, v0);
    if (cnd_) { goto L_0881569C; }
    goto L_08815638;
L_08815638:;
    v0 = D_08AEB560 - (-19104);
    f20 = BITSF(LD32(v0-19104));
    f21 = BITSF(0);
    v1 = a0 + 0;
    s0 = LD32(v1+24);
    goto L_0881564C;
L_0881564C:;
    fcc = FCMP(f21, f20, 12);
    s1 = 0 + 0;
    cnd_ = s0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08815660; }
    goto L_0881565C;
L_0881565C:;
    s1 = LD32(s0+4);
    goto L_08815660;
L_08815660:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08815688; }
    goto L_08815670;
L_08815670:;
    a0 = v1 + 0;
    f12 = f20;
    a1 = s2 + 0;
    cnd_ = fcc;
    a2 = s4 + 0;
    if (cnd_) { goto L_08816290; }
    goto L_08815684;
L_08815684:;
    s6 = s6 + a3;
    goto L_08815688;
L_08815688:;
    cnd_ = s0 == 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08815694; }
    goto L_08815690;
L_08815690:;
    f20 = BITSF(LD32(s0+12));
    goto L_08815694;
L_08815694:;
    cnd_ = s1 != 0;
    if (cnd_) { s0 = LD32(v1+24); goto L_0881564C; }
    goto L_0881569C;
L_0881569C:;
    cnd_ = s5 == 0;
    if (cnd_) { a0 = s4 + 0; goto L_08816280; }
    goto L_088156A4;
L_088156A4:;
    cnd_ = s6 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_088156E4; }
    goto L_088156AC;
L_088156AC:;
    v0 = s6 + 0;
    goto L_088156B0;
L_088156B0:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_088156E4:;
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088156F0;
L_088156F0:;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08815CD8; }
    goto L_088156F8;
L_088156F8:;
    f12 = f22;
    a1 = s5 + 0;
    f0 = func_0881A13C(a0, a1, f12);
    goto L_08815704;
L_08815704:;
    v1 = LD32(s3+36);
    a0 = 0x80000u;
    v0 = v1 & a0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0x100000u; goto L_08815778; }
    goto L_08815718;
L_08815718:;
    v0 = LD32(s5);
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    v1 = s3 + 72;
    if (cnd_) { goto L_08815C94; }
    goto L_08815728;
L_08815728:;
    v0 = D_08AEB560 - (-19104);
    f0 = BITSF(LD32(v0-19104));
    fcc = FCMP(f0, f22, 14);
    cnd_ = !fcc;
    f5 = BITSF(LD32(v1+8));
    if (cnd_) { goto L_08815C44; }
    goto L_08815740;
L_08815740:;
    v0 = s5 + 36;
    f1 = BITSF(LD32(s5+36));
    f4 = BITSF(LD32(s3+72));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+8));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    ST32(s5+36, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    goto L_08815770;
L_08815770:;
    v1 = LD32(s3+36);
    goto L_08815774;
L_08815774:;
    a1 = 0x100000u;
    goto L_08815778;
L_08815778:;
    v0 = v1 & a1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0x200000u; goto L_08815864; }
    goto L_08815784;
L_08815784:;
    v0 = LD32(s5);
    f6 = BITSF(LD32(s4+60));
    v0 = v0 & a1;
    cnd_ = v0 == 0;
    v1 = s3 + 84;
    if (cnd_) { goto L_08815BF8; }
    goto L_08815798;
L_08815798:;
    v0 = D_08AEB560 - (-19104);
    f7 = BITSF(LD32(v0-19104));
    fcc = FCMP(f7, f22, 14);
    cnd_ = !fcc;
    f4 = BITSF(LD32(v1+8));
    if (cnd_) { goto L_08815B94; }
    goto L_088157B0;
L_088157B0:;
    a0 = s5 + 48;
    f5 = BITSF(LD32(s3+84));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(s5+48));
    f2 = f2 + f3;
    f0 = f0 + f4;
    f1 = f1 + f5;
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f0));
    ST32(s5+48, FBITS(f1));
    ST32(s5+60, FBITS(f6));
    goto L_088157E4;
L_088157E4:;
    v0 = LD32(s5+48);
    {u32 a_=sp+(64);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(a0+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s3+36); goto L_08815860; }
    goto L_08815820;
L_08815820:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(a0+8, FBITS(f3));
    f0 = BITSF(v1);
    ST32(a0+4, v1);
    ST32(s5+48, v0);
    v1 = LD32(s3+36);
    ST32(sp, v0);
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f3));
    goto L_08815860;
L_08815860:;
    a0 = 0x200000u;
    goto L_08815864;
L_08815864:;
    v0 = v1 & a0;
    cnd_ = v0 == 0;
    v0 = s6 + 0;
    if (cnd_) { goto L_088156B0; }
    goto L_08815870;
L_08815870:;
    v0 = LD32(s5);
    v1 = s3 + 100;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    t0 = s3 + 112;
    if (cnd_) { goto L_08815AC4; }
    goto L_08815884;
L_08815884:;
    v0 = D_08AEB560 - (-19104);
    f0 = BITSF(LD32(v0-19104));
    fcc = FCMP(f0, f22, 14);
    cnd_ = !fcc;
    if (cnd_) { f5 = BITSF(LD32(v1+8)); goto L_08815970; }
    goto L_0881589C;
L_0881589C:;
    v0 = s5 + 64;
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s3+100));
    f1 = BITSF(LD32(s5+64));
    f0 = f0 + f4;
    f2 = f2 + f3;
    f1 = f1 + f5;
    v1 = s5 + 76;
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(s5+64, FBITS(f1));
    a1 = LD32(v1+4);
    a3 = LD32(v1+12);
    v0 = LD32(s3+112);
    a0 = LD32(t0+12);
    a2 = LD32(v1+8);
    {v[8]=BITSF(v0);}
    v1 = LD32(t0+8);
    v0 = LD32(t0+4);
    {v[9]=BITSF(v0);}
    v0 = LD32(s5+76);
    {v[10]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v[11]=BITSF(a0);}
    {v[1]=BITSF(a1);}
    {v[2]=BITSF(a2);}
    {v[3]=BITSF(a3);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    f4 = BITSF(a0);
    {v0=FBITS(v[4]);}
    {v1=FBITS(v[5]);}
    ST32(sp+32, v0);
    {a0=FBITS(v[6]);}
    ST32(sp+36, v1);
    ST32(sp+40, a0);
    ST32(sp+44, FBITS(f4));
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    a0 = LD32(sp+40);
    a1 = LD32(sp+44);
    ST32(s5+76, v0);
    ST32(s5+88, a1);
    ST32(s5+80, v1);
    ST32(s5+84, a0);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    goto L_088156AC;
L_08815970:;
    f4 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(s3+100));
    v0 = s5 + 64;
    f4 = f4 * f22;
    f5 = f5 * f22;
    f3 = f3 * f22;
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s5+64));
    f2 = f2 + f4;
    f0 = f0 + f5;
    f1 = f1 + f3;
    a0 = s5 + 76;
    ST32(v0+4, FBITS(f2));
    v1 = FBITS(f22);
    ST32(s5+64, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f3));
    ST32(sp+8, FBITS(f5));
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[115]=BITSF(LD32(v0+(12)));}
    {v[116]=BITSF(LD32(s3+(112)));}
    {v[117]=BITSF(LD32(s3+(116)));}
    {v[118]=BITSF(LD32(s3+(120)));}
    {v[119]=BITSF(LD32(s3+(124)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[120]=sum;}
    {v[124]=BITSF(v1);}
    {float s0=v[0];v[122]=(float)1;}
    {float s0=v[120];float d0=(float)((s0>0)-(s0<0));v[123]=d0;}
    {float s0=v[123];float t0=v[123];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=v[122];if(((vfpu_cc>>0)&1)==1)v[123]=s0;}
    {float s0=v[122];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[124];float t0=v[123];float d0=s0*t0;v[124]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;v[115]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[116]=s0*t0;v[117]=s1*t0;v[118]=s2*t0;v[119]=s3*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[116]=sum;}
    {float s0=v[116];float d0=1.0f/sqrtf(s0);v[116]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;v[115]=s3*t0;}
    {u32 a_=sp+(16);int off_=(a_>>2)&3;float q_[4]={v[112],v[113],v[114],v[115]};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(28);int off_=(a_>>2)&3;float q_[4]={v[112],v[113],v[114],v[115]};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    a1 = LD32(a0+12);
    v1 = LD32(a0+4);
    v0 = LD32(s5+76);
    {v[8]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(sp+20);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+16);
    {v[11]=BITSF(a1);}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+28);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    f4 = BITSF(a0);
    {v0=FBITS(v[4]);}
    {v1=FBITS(v[5]);}
    ST32(sp+48, v0);
    {a0=FBITS(v[6]);}
    ST32(sp+52, v1);
    ST32(sp+56, a0);
    ST32(sp+60, FBITS(f4));
    v1 = LD32(sp+48);
    a0 = LD32(sp+52);
    v0 = LD32(sp+60);
    a1 = LD32(sp+56);
    ST32(sp+32, v1);
    ST32(sp+36, a0);
    ST32(sp+40, a1);
    ST32(sp+44, v0);
    ST32(s5+88, v0);
    ST32(s5+76, v1);
    ST32(s5+80, a0);
    ST32(s5+84, a1);
    goto L_088156AC;
L_08815AC4:;
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = s5 + 64;
    f2 = f2 * f22;
    f1 = f1 * f22;
    f0 = BITSF(LD32(s3+100));
    ST32(v0+8, FBITS(f2));
    f0 = f0 * f22;
    ST32(v0+4, FBITS(f1));
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    v1 = LD32(s5);
    ST32(s5+64, FBITS(f0));
    v1 = v1 | a0;
    a0 = FBITS(f22);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[115]=BITSF(LD32(v0+(12)));}
    {v[116]=BITSF(LD32(s3+(112)));}
    {v[117]=BITSF(LD32(s3+(116)));}
    {v[118]=BITSF(LD32(s3+(120)));}
    {v[119]=BITSF(LD32(s3+(124)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[120]=sum;}
    {v[124]=BITSF(a0);}
    {float s0=v[0];v[122]=(float)1;}
    {float s0=v[120];float d0=(float)((s0>0)-(s0<0));v[123]=d0;}
    {float s0=v[123];float t0=v[123];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=v[122];if(((vfpu_cc>>0)&1)==1)v[123]=s0;}
    {float s0=v[122];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[124];float t0=v[123];float d0=s0*t0;v[124]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;v[115]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[116]=s0*t0;v[117]=s1*t0;v[118]=s2*t0;v[119]=s3*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[116]=sum;}
    {float s0=v[116];float d0=1.0f/sqrtf(s0);v[116]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;v[115]=s3*t0;}
    {u32 a_=sp+(48);int off_=(a_>>2)&3;float q_[4]={v[112],v[113],v[114],v[115]};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(60);int off_=(a_>>2)&3;float q_[4]={v[112],v[113],v[114],v[115]};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+48);
    goto L_08815B70;
L_08815B70:;
    a0 = LD32(sp+52);
    a1 = LD32(sp+56);
    a2 = LD32(sp+60);
    ST32(s5, v1);
    ST32(s5+76, v0);
    ST32(s5+80, a0);
    ST32(s5+84, a1);
    ST32(s5+88, a2);
    goto L_088156AC;
L_08815B94:;
    f5 = BITSF(LD32(v1+4));
    a0 = s5 + 48;
    f4 = f4 * f22;
    f5 = f5 * f22;
    f3 = BITSF(LD32(s3+84));
    f2 = BITSF(LD32(s5+48));
    ST32(sp+8, FBITS(f4));
    f3 = f3 * f22;
    f7 = f7 - f22;
    ST32(sp+4, FBITS(f5));
    f6 = f6 * f22;
    f2 = f2 + f3;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+4));
    ST32(sp, FBITS(f3));
    f1 = f1 + f4;
    f0 = f0 + f5;
    ST32(s5+48, FBITS(f2));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    f0 = BITSF(LD32(s5+60));
    f0 = f0 * f7;
    f0 = f0 + f6;
    ST32(s5+60, FBITS(f0));
    goto L_088157E4;
L_08815BF8:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a0 = s5 + 48;
    f0 = f0 * f22;
    f1 = f1 * f22;
    f2 = BITSF(LD32(s3+84));
    f3 = f6 * f22;
    ST32(sp+8, FBITS(f0));
    f2 = f2 * f22;
    ST32(sp+4, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    v0 = LD32(s5);
    ST32(s5+48, FBITS(f2));
    v0 = v0 | a1;
    ST32(s5+60, FBITS(f3));
    ST32(s5, v0);
    ST32(sp, FBITS(f2));
    goto L_088157E4;
L_08815C44:;
    f4 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(s3+72));
    v0 = s5 + 36;
    f5 = f5 * f22;
    f3 = f3 * f22;
    f4 = f4 * f22;
    f1 = BITSF(LD32(s5+36));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f1 = f1 + f3;
    f2 = f2 + f4;
    f0 = f0 + f5;
    ST32(sp, FBITS(f3));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(s5+36, FBITS(f1));
    v1 = LD32(s3+36);
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    goto L_08815774;
L_08815C94:;
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v1 = s5 + 36;
    f2 = f2 * f22;
    f1 = f1 * f22;
    f0 = BITSF(LD32(s3+72));
    ST32(v1+8, FBITS(f2));
    f0 = f0 * f22;
    ST32(v1+4, FBITS(f1));
    v0 = LD32(s5);
    ST32(s5+36, FBITS(f0));
    v0 = v0 | a0;
    ST32(s5, v0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_08815770;
L_08815CD8:;
    f12 = f22;
    a1 = s5 + 0;
    func_0881A370(a0, a1, f12);
    goto L_08815CE4;
L_08815CE4:;
    v1 = LD32(s3+36);
    a0 = 0x80000u;
    v0 = v1 & a0;
    cnd_ = v0 == 0;
    v0 = LD32(s5);
    if (cnd_) { goto L_088161E0; }
    goto L_08815CF8;
L_08815CF8:;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    v1 = s3 + 72;
    if (cnd_) { goto L_08816198; }
    goto L_08815D04;
L_08815D04:;
    v0 = D_08AEB560 - (-19104);
    f5 = BITSF(LD32(v0-19104));
    fcc = FCMP(f5, f22, 14);
    cnd_ = !fcc;
    v0 = s5 + 36;
    if (cnd_) { goto L_08816148; }
    goto L_08815D1C;
L_08815D1C:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s3+72));
    f2 = BITSF(LD32(v1+4));
    ST32(v0+8, FBITS(f0));
    ST32(s5+36, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    goto L_08815D34;
L_08815D34:;
    v1 = LD32(s3+36);
    goto L_08815D38;
L_08815D38:;
    a1 = 0x100000u;
    goto L_08815D3C;
L_08815D3C:;
    v0 = v1 & a1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s5 + 0; goto L_08816138; }
    goto L_08815D48;
L_08815D48:;
    v0 = LD32(s5);
    f7 = BITSF(LD32(s4+60));
    v0 = v0 & a1;
    cnd_ = v0 == 0;
    v1 = s3 + 84;
    if (cnd_) { goto L_088160EC; }
    goto L_08815D5C;
L_08815D5C:;
    v0 = D_08AEB560 - (-19104);
    f6 = BITSF(LD32(v0-19104));
    fcc = FCMP(f6, f22, 14);
    cnd_ = !fcc;
    if (cnd_) { f6 = f6 - f22; goto L_08816088; }
    goto L_08815D74;
L_08815D74:;
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(s3+84));
    f1 = BITSF(LD32(v1+4));
    a0 = s5 + 48;
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(s5+48, FBITS(f2));
    ST32(s5+60, FBITS(f7));
    goto L_08815D94;
L_08815D94:;
    v0 = LD32(s5+48);
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(a0+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s3+36); goto L_08815E0C; }
    goto L_08815DD0;
L_08815DD0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f2 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(a0+8, FBITS(f2));
    ST32(sp, v0);
    ST32(a0+4, v1);
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, v1);
    ST32(s5+48, v0);
    v0 = LD32(s3+36);
    goto L_08815E0C;
L_08815E0C:;
    a0 = 0x200000u;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s5 + 0; goto L_08816078; }
    goto L_08815E1C;
L_08815E1C:;
    v0 = LD32(s5);
    v1 = s3 + 100;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    a1 = s3 + 112;
    if (cnd_) { goto L_08815FC8; }
    goto L_08815E30;
L_08815E30:;
    v0 = D_08AEB560 - (-19104);
    f5 = BITSF(LD32(v0-19104));
    fcc = FCMP(f5, f22, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = s5 + 64; goto L_08815E88; }
    goto L_08815E48;
L_08815E48:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(s3+100));
    v0 = s5 + 64;
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    ST32(s5+64, FBITS(f2));
    v0 = LD32(s3+112);
    ST32(s5+76, v0);
    v1 = LD32(a1+4);
    ST32(s5+80, v1);
    v0 = LD32(a1+8);
    ST32(s5+84, v0);
    v1 = LD32(a1+12);
    ST32(s5+88, v1);
    goto L_088156AC;
L_08815E88:;
    f5 = f5 - f22;
    f6 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(s5+64));
    f2 = BITSF(LD32(s3+100));
    f0 = f0 * f5;
    f1 = f1 * f5;
    f2 = f2 * f22;
    f3 = f3 * f5;
    f4 = f4 * f22;
    f6 = f6 * f22;
    f1 = f1 + f2;
    v1 = s5 + 76;
    f3 = f3 + f4;
    f0 = f0 + f6;
    ST32(s5+64, FBITS(f1));
    v0 = D_08AEB564 - (-19100);
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f3));
    f0 = BITSF(LD32(v0-19100));
    a0 = LD32(v1+4);
    v0 = LD32(s5+76);
    a2 = LD32(v1+12);
    a1 = LD32(v1+8);
    ST32(sp+48, v0);
    v0 = FBITS(f0);
    ST32(sp+56, a1);
    ST32(sp+52, a0);
    a0 = FBITS(f22);
    ST32(sp+60, a2);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[115]=BITSF(LD32(sp+(60)));}
    {v[116]=BITSF(LD32(s3+(112)));}
    {v[117]=BITSF(LD32(s3+(116)));}
    {v[118]=BITSF(LD32(s3+(120)));}
    {v[119]=BITSF(LD32(s3+(124)));}
    {v[124]=BITSF(a0);}
    {v[127]=BITSF(v0);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08815F74; }
    goto L_08815F54;
L_08815F54:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_08815F74;
L_08815F74:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08815F88; }
    goto L_08815F80;
L_08815F80:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_08815F88;
L_08815F88:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08815FB0; }
    goto L_08815FA4;
L_08815FA4:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_08815FB0;
L_08815FB0:;
    {ST32(s5+(76),FBITS(v[120]));}
    {ST32(s5+(80),FBITS(v[121]));}
    {ST32(s5+(84),FBITS(v[122]));}
    {ST32(s5+(88),FBITS(v[123]));}
    v0 = s6 + 0;
    goto L_088156B0;
L_08815FC8:;
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = s5 + 64;
    f2 = f2 * f22;
    f1 = f1 * f22;
    f0 = BITSF(LD32(s3+100));
    ST32(v0+8, FBITS(f2));
    f0 = f0 * f22;
    ST32(v0+4, FBITS(f1));
    v0 = FBITS(f22);
    ST32(s5+64, FBITS(f0));
    v1 = LD32(s5);
    ST32(sp, FBITS(f0));
    v1 = v1 | a0;
    a0 = D_08B45ACC - (23244);
    ST32(sp+4, FBITS(f1));
    a0 = a0 + 23244;
    ST32(sp+8, FBITS(f2));
    {v[112]=BITSF(LD32(a0+(0)));}
    {v[113]=BITSF(LD32(a0+(4)));}
    {v[114]=BITSF(LD32(a0+(8)));}
    {v[115]=BITSF(LD32(a0+(12)));}
    {v[116]=BITSF(LD32(s3+(112)));}
    {v[117]=BITSF(LD32(s3+(116)));}
    {v[118]=BITSF(LD32(s3+(120)));}
    {v[119]=BITSF(LD32(s3+(124)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[120]=sum;}
    {v[124]=BITSF(v0);}
    {float s0=v[0];v[122]=(float)1;}
    {float s0=v[120];float d0=(float)((s0>0)-(s0<0));v[123]=d0;}
    {float s0=v[123];float t0=v[123];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=v[122];if(((vfpu_cc>>0)&1)==1)v[123]=s0;}
    {float s0=v[122];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[124];float t0=v[123];float d0=s0*t0;v[124]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;v[115]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[116]=s0*t0;v[117]=s1*t0;v[118]=s2*t0;v[119]=s3*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[116]=sum;}
    {float s0=v[116];float d0=1.0f/sqrtf(s0);v[116]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;v[115]=s3*t0;}
    {u32 a_=sp+(48);int off_=(a_>>2)&3;float q_[4]={v[112],v[113],v[114],v[115]};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(60);int off_=(a_>>2)&3;float q_[4]={v[112],v[113],v[114],v[115]};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    v0 = LD32(sp+48);
    goto L_08815B70;
L_08816078:;
    f12 = f22;
    { rv_t r_ = func_08AA250C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816080;
L_08816080:;
    v0 = s6 + 0;
    goto L_088156B0;
L_08816088:;
    a0 = s5 + 48;
    f5 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(a0+8));
    f2 = f2 * f6;
    f0 = f0 * f22;
    f3 = f3 * f6;
    f5 = f5 * f22;
    f4 = BITSF(LD32(s3+84));
    f2 = f2 + f0;
    f1 = BITSF(LD32(s5+48));
    f3 = f3 + f5;
    f4 = f4 * f22;
    ST32(a0+4, FBITS(f2));
    f1 = f1 * f6;
    f2 = f7 * f22;
    ST32(a0+8, FBITS(f3));
    f1 = f1 + f4;
    f0 = BITSF(LD32(s5+60));
    f0 = f0 * f6;
    ST32(s5+48, FBITS(f1));
    f0 = f0 + f2;
    ST32(s5+60, FBITS(f0));
    goto L_08815D94;
L_088160EC:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a0 = s5 + 48;
    f0 = f0 * f22;
    f1 = f1 * f22;
    f2 = BITSF(LD32(s3+84));
    f3 = f7 * f22;
    ST32(sp+8, FBITS(f0));
    f2 = f2 * f22;
    ST32(sp+4, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    v0 = LD32(s5);
    ST32(s5+48, FBITS(f2));
    v0 = v0 | a1;
    ST32(s5+60, FBITS(f3));
    ST32(s5, v0);
    ST32(sp, FBITS(f2));
    goto L_08815D94;
L_08816138:;
    f12 = f22;
    func_08AA24BC(a0, f12);
    goto L_08816140;
L_08816140:;
    v0 = LD32(s3+36);
    goto L_08815E0C;
L_08816148:;
    f5 = f5 - f22;
    f6 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(s5+36));
    f4 = BITSF(LD32(s3+72));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+8));
    f2 = f2 * f5;
    f4 = f4 * f22;
    f0 = f0 * f5;
    f3 = f3 * f5;
    f1 = f1 * f22;
    f6 = f6 * f22;
    f2 = f2 + f4;
    f3 = f3 + f1;
    f0 = f0 + f6;
    ST32(s5+36, FBITS(f2));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f3));
    goto L_08815D34;
L_08816198:;
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v1 = s5 + 36;
    f2 = f2 * f22;
    f1 = f1 * f22;
    f0 = BITSF(LD32(s3+72));
    ST32(v1+8, FBITS(f2));
    f0 = f0 * f22;
    ST32(v1+4, FBITS(f1));
    v0 = LD32(s5);
    ST32(s5+36, FBITS(f0));
    v0 = v0 | a0;
    ST32(s5, v0);
    v1 = LD32(s3+36);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_08815D38;
L_088161E0:;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    a1 = 0x100000u;
    if (cnd_) { goto L_08815D3C; }
    goto L_088161EC;
L_088161EC:;
    v0 = D_08AEB560 - (-19104);
    f4 = BITSF(LD32(v0-19104));
    fcc = FCMP(f4, f22, 14);
    cnd_ = !fcc;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08816228; }
    goto L_08816204;
L_08816204:;
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = s5 + 36;
    ST32(v0+8, FBITS(f0));
    ST32(s5+36, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_08815D34;
L_08816228:;
    a0 = s5 + 36;
    f4 = f4 - f22;
    v1 = v0 + 23196;
    f5 = BITSF(LD32(v0+23196));
    f6 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s5+36));
    f3 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+8));
    f1 = f1 * f4;
    f5 = f5 * f22;
    f0 = f0 * f4;
    f3 = f3 * f4;
    f2 = f2 * f22;
    f6 = f6 * f22;
    f1 = f1 + f5;
    f3 = f3 + f2;
    f0 = f0 + f6;
    ST32(s5+36, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f3));
    goto L_08815D34;
L_08816280:;
    a1 = s2 + 0;
    { rv_t r_ = func_0881A62C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816288;
L_08816288:;
    v0 = s6 + 0;
    goto L_088156B0;
L_08816290:;
    v1 = LD32(v1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088162A0;
L_088162A0:;
    a3 = v0 + 0;
    goto L_08815684;
}

/* 088162A8 */
rv_t func_088162A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088162A8:;
    sp = sp - 64;
    fp = t0 + 0;
    s7 = a3 + 0;
    s6 = a2 + 0;
    s5 = 0 + 0;
    s4 = a1 + 0;
    s3 = a0 + 36;
    s2 = a0 + 0;
    a0 = s3 + 0;
    f22 = f12;
    a1 = LD32(a1+4);
    { rv_t r_ = func_08819A10(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881630C;
L_0881630C:;
    a0 = LD32(s2+132);
    cnd_ = a0 == 0;
    v0 = D_08AEB568 - (-19096);
    if (cnd_) { goto L_08816380; }
    goto L_08816318;
L_08816318:;
    f20 = BITSF(LD32(v0-19096));
    f21 = BITSF(0);
    v1 = a0 + 0;
    s0 = LD32(v1+24);
    goto L_08816328;
L_08816328:;
    fcc = FCMP(f21, f20, 12);
    s1 = 0 + 0;
    cnd_ = s0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0881633C; }
    goto L_08816338;
L_08816338:;
    s1 = LD32(s0+4);
    goto L_0881633C;
L_0881633C:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0881636C; }
    goto L_0881634C;
L_0881634C:;
    a0 = v1 + 0;
    f12 = f20;
    a1 = s4 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    cnd_ = fcc;
    t0 = s3 + 0;
    if (cnd_) { goto L_08816434; }
    goto L_08816368;
L_08816368:;
    s5 = s5 + t1;
    goto L_0881636C;
L_0881636C:;
    cnd_ = s0 == 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08816378; }
    goto L_08816374;
L_08816374:;
    f20 = BITSF(LD32(s0+12));
    goto L_08816378;
L_08816378:;
    cnd_ = s1 != 0;
    if (cnd_) { s0 = LD32(v1+24); goto L_08816328; }
    goto L_08816380;
L_08816380:;
    cnd_ = fp == 0;
    if (cnd_) { a0 = s3 + 0; goto L_0881641C; }
    goto L_08816388;
L_08816388:;
    cnd_ = s5 != 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_088163CC; }
    goto L_08816390;
L_08816390:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088163CC:;
    v1 = LD32(s2);
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088163DC;
L_088163DC:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08816400; }
    goto L_088163E4;
L_088163E4:;
    a1 = s6 + 0;
    a2 = s7 + 0;
    f12 = f22;
    a3 = fp + 0;
    { rv_t r_ = func_08819D04(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088163F8;
L_088163F8:;
    v0 = s5 + 0;
    goto L_08816390;
L_08816400:;
    a1 = s6 + 0;
    a2 = s7 + 0;
    f12 = f22;
    a3 = fp + 0;
    { rv_t r_ = func_08819F38(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816414;
L_08816414:;
    v0 = s5 + 0;
    goto L_08816390;
L_0881641C:;
    a1 = s6 + 0;
    a2 = s7 + 0;
    a3 = s4 + 0;
    { rv_t r_ = func_0881A584(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881642C;
L_0881642C:;
    v0 = s5 + 0;
    goto L_08816390;
L_08816434:;
    v1 = LD32(v1);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816444;
L_08816444:;
    t1 = v0 + 0;
    goto L_08816368;
}

/* 0881644C */
rv_t func_0881644C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881644C:;
    sp = sp - 32;
    v0 = 0x10000u;
    s3 = a1 + 0;
    v1 = LD32(a0+16);
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_0881648C; }
    goto L_0881647C;
L_0881647C:;
    v0 = a1 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088164D8; }
    goto L_0881648C;
L_0881648C:;
    v1 = LD32(a0+132);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088164D4; }
    goto L_08816498;
L_08816498:;
    v0 = LD32(v1+24);
    a0 = v1 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088164B4; }
    goto L_088164B0;
L_088164B0:;
    s0 = LD32(v0+4);
    goto L_088164B4;
L_088164B4:;
    v1 = LD32(v1);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088164C4;
L_088164C4:;
    v1 = 1;
    if (v0 != 0) s1 = v1;
    cnd_ = s0 != 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08816498; }
    goto L_088164D4;
L_088164D4:;
    v1 = s1 + 0;
    goto L_088164D8;
L_088164D8:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088164F8 */
rv_t func_088164F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088164F8:;
    sp = sp - 48;
    s6 = a1 & 0xff;
    s4 = a0 + 0;
    a0 = D_08B285AC - (-31316);
    f20 = f12;
    cnd_ = s6 != 0;
    if (cnd_) { goto L_08816544; }
    goto L_08816534;
L_08816534:;
    v1 = LD32(a0-31316);
    v0 = LD32(s4+140);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088165E4; }
    goto L_08816544;
L_08816544:;
    v0 = LD32(a0-31316);
    a0 = LD32(s4+132);
    cnd_ = a0 == 0;
    ST32(s4+140, v0);
    if (cnd_) { goto L_088165E0; }
    goto L_08816554;
L_08816554:;
    s0 = a0 + 0;
    s5 = 1;
    goto L_0881655C;
L_0881655C:;
    s1 = LD32(s0+24);
    cnd_ = s1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0881656C; }
    goto L_08816568;
L_08816568:;
    s2 = LD32(s1+4);
    goto L_0881656C;
L_0881656C:;
    v0 = LD32(s0+16);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0881661C; }
    goto L_0881657C;
L_0881657C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    f12 = f20;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = s6 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816594;
L_08816594:;
    v1 = LD32(s0);
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088165A4;
L_088165A4:;
    s5 = s5 & v0;
    goto L_088165A8;
L_088165A8:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088165C4; }
    goto L_088165B0;
L_088165B0:;
    v1 = LD32(s1);
    f12 = f20;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088165C4;
L_088165C4:;
    cnd_ = s3 != 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_0881660C; }
    goto L_088165CC;
L_088165CC:;
    cnd_ = s2 != 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0881655C; }
    goto L_088165D4;
L_088165D4:;
    v0 = LD32(s4+36);
    v0 = (v0 & ~(0x1u << 22)) | ((s5 & 0x1) << 22);
    ST32(s4+36, v0);
    goto L_088165E0;
L_088165E0:;
    goto L_088165E4;
L_088165E4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0881660C:;
    a0 = LD32(s4+4);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816614;
L_08816614:;
    goto L_088165CC;
L_0881661C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    s3 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816630;
L_08816630:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088165A8; }
    goto L_08816638;
L_08816638:;
    s3 = 0 + 0;
    goto L_0881657C;
}

/* 08816640 */
u32 func_08816640(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08816640:;
    v1 = LD32(a0+36);
    v0 = 0x100000u;
    a3 = a0 + 84;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0881667C; }
    goto L_08816658;
L_08816658:;
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a0+84));
    f2 = BITSF(LD32(a3+4));
    ST32(a1+8, FBITS(f0));
    v0 = 1;
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    f0 = BITSF(LD32(a0+96));
    ST32(a2, FBITS(f0));
    goto L_0881667C;
L_0881667C:;
    return v0;
}

/* 08816684 */
rv_t func_08816684(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08816684:;
    v1 = LD32(a0+36);
    v0 = 0x200000u;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088166E4; }
    goto L_08816698;
L_08816698:;
    cnd_ = a1 == 0;
    v0 = a0 + 100;
    if (cnd_) { goto L_088166B8; }
    goto L_088166A0;
L_088166A0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a0+100));
    f2 = BITSF(LD32(v0+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_088166B8;
L_088166B8:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = 1; goto L_088166E4; }
    goto L_088166C0;
L_088166C0:;
    v0 = LD32(a0+112);
    ST32(a2, v0);
    v1 = LD32(a0+116);
    ST32(a2+4, v1);
    v0 = LD32(a0+120);
    ST32(a2+8, v0);
    v1 = LD32(a0+124);
    ST32(a2+12, v1);
    v0 = 1;
    goto L_088166E4;
L_088166E4:;
    return (rv_t){ v0, v1, f0 };
}

/* 088166EC */
rv_t func_088166EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_088166EC:;
    v1 = LD32(a0+36);
    v0 = 0x80000u;
    a2 = a0 + 72;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08816720; }
    goto L_08816704;
L_08816704:;
    f0 = BITSF(LD32(a0+72));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+4));
    ST32(a1, FBITS(f0));
    v0 = 1;
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_08816720;
L_08816720:;
    return (rv_t){ v0, v1, f0 };
}

/* 08816728 */
rv_t func_08816728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08816728:;
    sp = sp - 16;
    s2 = a1 + 0;
    t0 = s2 + 28;
    s1 = a0 + 0;
    v1 = LD32(a1+28);
    cnd_ = v1 == 0;
    a1 = LD32(a0+12);
    if (cnd_) { goto L_08816780; }
    goto L_08816754;
L_08816754:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0881675C;
L_0881675C:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0881678C; }
    goto L_08816774;
L_08816774:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0881675C; }
    goto L_08816780;
L_08816780:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0881682C; }
    goto L_0881678C;
L_0881678C:;
    cnd_ = a3 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08816798; }
    goto L_08816794;
L_08816794:;
    s0 = LD32(a3);
    goto L_08816798;
L_08816798:;
    a0 = LD32(s1+28);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08816814; }
    goto L_088167A4;
L_088167A4:;
    a1 = LD32(s1+8);
    goto L_088167A8;
L_088167A8:;
    a2 = LD32(s1+16);
    a3 = LD32(s1+20);
    t1 = s0 + 0;
    t0 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0880A92C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088167C0;
L_088167C0:;
    v1 = LD32(s1+140);
    s0 = LD32(s1+132);
    cnd_ = s0 == 0;
    ST32(v0+140, v1);
    if (cnd_) { goto L_088167FC; }
    goto L_088167D0;
L_088167D0:;
    v1 = LD32(s0);
    goto L_088167D4;
L_088167D4:;
    a0 = s0 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088167E4;
L_088167E4:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088167F4; }
    goto L_088167F0;
L_088167F0:;
    s0 = LD32(v0+4);
    goto L_088167F4;
L_088167F4:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_088167D4; }
    goto L_088167FC;
L_088167FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08816814:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816824;
L_08816824:;
    a1 = LD32(s1+8);
    goto L_088167A8;
L_0881682C:;
    a2 = 1;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08816834;
L_08816834:;
    a3 = v0 + 0;
    goto L_0881678C;
}

/* 0881683C */
void func_0881683C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881683C:;
    sp = sp - 16;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08816884; }
    goto L_08816858;
L_08816858:;
    v0 = LD32(s1+72);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088168D4; }
    goto L_08816864;
L_08816864:;
    v0 = LD32(s1+76);
    goto L_08816868;
L_08816868:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088168C4; }
    goto L_08816874;
L_08816874:;
    a0 = s1 + 4;
    func_08AA279C(a0);
    goto L_0881687C;
L_0881687C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08816884;
L_08816884:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088168B4; }
    goto L_08816890;
L_08816890:;
    ST32(s0, 0);
    goto L_08816894;
L_08816894:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
L_088168B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088168BC;
L_088168BC:;
    ST32(s0, 0);
    goto L_08816894;
L_088168C4:;
    func_08AA2914(a0, a1);
    goto L_088168CC;
L_088168CC:;
    goto L_08816874;
L_088168D4:;
    func_08AA2914(a0, a1);
    goto L_088168DC;
L_088168DC:;
    v0 = LD32(s1+76);
    goto L_08816868;
}

/* 088168E4 */
u32 func_088168E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088168E4:;
    sp = sp - 32;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088169D8; }
    goto L_08816918;
L_08816918:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0881694C; }
    goto L_08816924;
L_08816924:;
    v1 = v0 + 0;
    goto L_08816928;
L_08816928:;
    a0 = v1 + 76;
    s0 = v1 + 72;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088169D8; }
    goto L_08816940;
L_08816940:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08816928; }
    goto L_0881694C;
L_0881694C:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08816954;
L_08816954:;
    a1 = v0 + 4;
    ST32(a1+52, 0);
    a0 = v0 + 0;
    v1 = 11;
    ST32(a1+56, 0);
    ST32(a1+60, 0);
    ST32(a1+64, 0);
    ST32(v0+4, 0);
    v0 = v0 + 8;
    goto L_08816978;
L_08816978:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08816978; }
    goto L_08816988;
L_08816988:;
    ST32(a0, s1);
    v0 = LD32(s2+4);
    ST32(a0+72, 0);
    v0 = v0 + 1;
    ST32(a0+76, 0);
    ST32(s2+4, v0);
    cnd_ = a1 == 0;
    ST32(s0, a0);
    if (cnd_) { goto L_088169D8; }
    goto L_088169A8;
L_088169A8:;
    ST32(a0+4, s1);
    v0 = a1 + 0;
    ST32(a1+60, s3);
    ST32(a1+64, s4);
    goto L_088169B8;
L_088169B8:;
    sp = sp + 32;
    return v0;
L_088169D8:;
    v0 = 0 + 0;
    goto L_088169B8;
}

/* 088169E0 */
void func_088169E0(void)
{
L_088169E0:;
    return;
}

/* 088169E8 */
void func_088169E8(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088169E8:;
    a0 = D_08B21148 - (4424);
    sp = sp - 16;
    a0 = a0 + 4424;
    func_0881683C(a0, t1, t2, t3);
    goto L_088169FC;
L_088169FC:;
    sp = sp + 16;
    return;
}

/* 08816A08 */
void func_08816A08(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08816A08:;
    a0 = D_08B21148 - (4424);
    sp = sp - 16;
    a0 = a0 + 4424;
    func_0881683C(a0, t1, t2, t3);
    goto L_08816A1C;
L_08816A1C:;
    sp = sp + 16;
    return;
}

/* 08816A28 */
u32 func_08816A28(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08816A28:;
    sp = sp - 16;
    v0 = func_0896CA30(a0);
    goto L_08816A38;
L_08816A38:;
    v1 = ~(0 | v0);
    if (v1 == 0) v0 = 0;
    sp = sp + 16;
    return v0;
}

/* 08816A4C */
u64 func_08816A4C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08816A4C:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08816A94; }
    goto L_08816A74;
L_08816A74:;
    v1 = D_08B21148 - (4424);
    v0 = v1 + 4424;
    ST32(v1+4424, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_08816A94;
L_08816A94:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08816AF4; }
    goto L_08816AA4;
L_08816AA4:;
    v0 = D_08B21148 - (4424);
    s0 = LD32(v0+4424);
    cnd_ = s0 == 0;
    s1 = v0 + 4424;
    if (cnd_) { goto L_08816ADC; }
    goto L_08816AB4;
L_08816AB4:;
    a1 = LD32(s0+72);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08816B24; }
    goto L_08816AC0;
L_08816AC0:;
    a1 = LD32(s0+76);
    goto L_08816AC4;
L_08816AC4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08816B14; }
    goto L_08816ACC;
L_08816ACC:;
    a0 = s0 + 4;
    func_08AA279C(a0);
    goto L_08816AD4;
L_08816AD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08816ADC;
L_08816ADC:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08816B04; }
    goto L_08816AE8;
L_08816AE8:;
    ST32(s1+16, 0);
    goto L_08816AEC;
L_08816AEC:;
    ST32(s1+12, 0);
    goto L_08816AF4;
L_08816AF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08816B04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08816B0C;
L_08816B0C:;
    ST32(s1+16, 0);
    goto L_08816AEC;
L_08816B14:;
    a0 = s1 + 0;
    func_08AA2914(a0, a1);
    goto L_08816B1C;
L_08816B1C:;
    goto L_08816ACC;
L_08816B24:;
    a0 = s1 + 0;
    func_08AA2914(a0, a1);
    goto L_08816B2C;
L_08816B2C:;
    a1 = LD32(s0+76);
    goto L_08816AC4;
}

/* 08816B34 */
rv_t func_08816B34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08816B34:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08816A4C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08816B48;
L_08816B48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08816B54 */
rv_t func_08816B54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08816B54:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08816A4C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08816B68;
L_08816B68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08816B74 */
void func_08816B74(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr81 = v[81], vr82 = v[82], vr85 = v[85], vr86 = v[86], vr90 = v[90], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[432] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 432);
L_08816B74:;
    sp = sp - 432;
    v0 = D_08B21184 - (4484);
    t0 = a0 << 3;
    a3 = t0 - a0;
    a3 = a3 << 2;
    t1 = a0 << 1;
    t1 = t1 + a0;
    t0 = t0 + a0;
    s2 = a0 << 6;
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    s4 = a0 + 0;
    t1 = t1 << 2;
    t0 = t0 << 2;
    s5 = 1;
    s3 = LD32(v0+4484);
    v0 = LD32(s3+32);
    v0 = v0 + a3;
    {vr112=BITSF(LD32(v0+(12)));}
    {vr113=BITSF(LD32(v0+(16)));}
    {vr114=BITSF(LD32(v0+(20)));}
    {vr115=BITSF(LD32(v0+(24)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;v[83]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;v[87]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;vr90=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=v[80];float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=v[87];float d0=s0-t0;vr104=d0;}
    {float s0=vr96;float t0=vr90;float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=v[83];float d0=s0+t0;vr105=d0;}
    {float s0=vr106;float t0=vr90;float d0=s0-t0;vr101=d0;}
    {float s0=vr82;float t0=v[87];float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=v[83];float d0=s0-t0;vr102=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    {ST32(sp+(12),FBITS(vr100));}
    {ST32(sp+(16),FBITS(vr101));}
    {ST32(sp+(20),FBITS(vr102));}
    {ST32(sp+(24),FBITS(vr104));}
    {ST32(sp+(28),FBITS(vr105));}
    {ST32(sp+(32),FBITS(vr106));}
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr120=BITSF(LD32(sp+(24)));}
    {vr121=BITSF(LD32(sp+(28)));}
    {vr122=BITSF(LD32(sp+(32)));}
    {vr96=BITSF(LD32(a1+(0)));}
    {vr97=BITSF(LD32(a1+(4)));}
    {vr98=BITSF(LD32(a1+(8)));}
    {vr100=BITSF(LD32(a1+(12)));}
    {vr101=BITSF(LD32(a1+(16)));}
    {vr102=BITSF(LD32(a1+(20)));}
    {vr104=BITSF(LD32(a1+(24)));}
    {vr105=BITSF(LD32(a1+(28)));}
    {vr106=BITSF(LD32(a1+(32)));}
    {float m00=0;m00+=vr112*vr96;m00+=vr116*vr97;m00+=vr120*vr98;float m01=0;m01+=vr113*vr96;m01+=vr117*vr97;m01+=vr121*vr98;float m02=0;m02+=vr114*vr96;m02+=vr118*vr97;m02+=vr122*vr98;float m10=0;m10+=vr112*vr100;m10+=vr116*vr101;m10+=vr120*vr102;float m11=0;m11+=vr113*vr100;m11+=vr117*vr101;m11+=vr121*vr102;float m12=0;m12+=vr114*vr100;m12+=vr118*vr101;m12+=vr122*vr102;float m20=0;m20+=vr112*vr104;m20+=vr116*vr105;m20+=vr120*vr106;float m21=0;m21+=vr113*vr104;m21+=vr117*vr105;m21+=vr121*vr106;float m22=0;m22+=vr114*vr104;m22+=vr118*vr105;m22+=vr122*vr106;v[80]=m00;vr81=m01;vr82=m02;v[84]=m10;vr85=m11;vr86=m12;v[88]=m20;v[89]=m21;vr90=m22;}
    {ST32(sp+(48),FBITS(v[80]));}
    {ST32(sp+(52),FBITS(vr81));}
    {ST32(sp+(56),FBITS(vr82));}
    {ST32(sp+(60),FBITS(v[84]));}
    {ST32(sp+(64),FBITS(vr85));}
    {ST32(sp+(68),FBITS(vr86));}
    {ST32(sp+(72),FBITS(v[88]));}
    {ST32(sp+(76),FBITS(v[89]));}
    {ST32(sp+(80),FBITS(vr90));}
    f0 = BITSF(LD32(sp+48));
    {u32 a_=sp+(256);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp, FBITS(f0));
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[108]=d0;v[109]=d1;v[110]=d2;v[111]=d3;}
    f0 = BITSF(LD32(sp+52));
    v0 = LD32(a1);
    {vr0=BITSF(v0);}
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(sp+56));
    v1 = LD32(a1+4);
    {vr1=BITSF(v1);}
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(sp+60));
    v0 = LD32(a1+8);
    {vr2=BITSF(v0);}
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(sp+64));
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(sp+68));
    ST32(sp+20, FBITS(f0));
    f0 = BITSF(LD32(sp+72));
    ST32(sp+24, FBITS(f0));
    f0 = BITSF(LD32(sp+76));
    ST32(sp+28, FBITS(f0));
    f0 = BITSF(LD32(sp+80));
    ST32(sp+32, FBITS(f0));
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a0 = LD32(s3+32);
    v0 = LD32(a1+12);
    v1 = LD32(a1+16);
    a0 = a0 + a3;
    f1 = BITSF(LD32(a0));
    f3 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(a1+20);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(a1+24);
    v1 = LD32(a1+28);
    a3 = LD32(a1+32);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(304);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr5=BITSF(v1);}
    {vr6=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr100=d0;vr101=d1;vr102=d2;v[103]=d3;}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr104=d0;vr105=d1;vr106=d2;v[107]=d3;}
    v0 = FBITS(f1);
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr96*t0;o0+=vr97*t1;o0+=vr98*t2;float o1=0;o1+=vr100*t0;o1+=vr101*t1;o1+=vr102*t2;float o2=0;o2+=vr104*t0;o2+=vr105*t1;o2+=vr106*t2;vr4=o0;vr5=o1;vr6=o2;}
    {v0=FBITS(vr4);}
    f5 = BITSF(v0);
    ST32(sp+96, FBITS(f1));
    {v0=FBITS(vr6);}
    f4 = BITSF(v0);
    ST32(sp+100, FBITS(f2));
    {v0=FBITS(vr5);}
    f2 = BITSF(v0);
    ST32(sp+144, FBITS(f5));
    ST32(sp+104, FBITS(f3));
    f0 = BITSF(LD32(a2));
    f3 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+4));
    f0 = f0 + f5;
    f3 = f3 + f4;
    f1 = f1 + f2;
    v1 = LD32(s3+36);
    ST32(sp+148, v0);
    v1 = v1 + t1;
    ST32(sp+152, FBITS(f4));
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f4));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f3));
    ST32(sp+96, FBITS(f0));
    ST32(v1, FBITS(f0));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f3));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f3));
    v0 = LD32(s3+40);
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    v0 = v0 + t0;
    ST32(v0, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(sp+16));
    ST32(v0+12, FBITS(f1));
    ST32(v0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    ST32(v0+20, FBITS(f1));
    ST32(v0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+32));
    ST32(v0+28, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    a0 = LD32(s3+40);
    {u32 a_=sp+(320);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = a0 + t0;
    v0 = LD32(a0+4);
    v1 = LD32(a0+8);
    {vr4=BITSF(v0);}
    v0 = LD32(a0+12);
    {vr5=BITSF(v1);}
    v1 = LD32(a0+24);
    {vr6=BITSF(v0);}
    {v0=FBITS(vr4);}
    f6 = BITSF(v0);
    v0 = LD32(a0+20);
    {vr0=BITSF(v0);}
    v0 = LD32(a0+28);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {v0=FBITS(vr1);}
    f5 = BITSF(v0);
    {v0=FBITS(vr2);}
    f4 = BITSF(v0);
    {v0=FBITS(vr5);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(a0+12, FBITS(f6));
    {v0=FBITS(vr6);}
    ST32(a0+24, FBITS(f3));
    ST32(a0+20, FBITS(f4));
    ST32(a0+8, FBITS(f5));
    ST32(a0+28, FBITS(f2));
    ST32(a0+4, v0);
    v0 = LD32(s3+40);
    v1 = LD32(s3+44);
    a0 = LD32(s3+36);
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+160, FBITS(f0));
    v1 = v1 + s2;
    a0 = a0 + t1;
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f2));
    ST32(sp+172, 0);
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+28));
    v1 = LD32(s3+44);
    ST32(sp+160, FBITS(f0));
    v1 = v1 + s2;
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f2));
    ST32(sp+172, 0);
    {u32 a_=sp+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=v1+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    v1 = LD32(s3+44);
    v0 = D_08AEB580 - (-19072);
    ST32(sp+160, FBITS(f0));
    v1 = v1 + s2;
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f2));
    ST32(sp+172, 0);
    {u32 a_=sp+(160);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=v1+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f3 = BITSF(LD32(v0-19072));
    v0 = LD32(s3+44);
    ST32(sp+160, 0);
    v0 = v0 + s2;
    ST32(sp+172, FBITS(f3));
    ST32(sp+164, 0);
    ST32(sp+168, 0);
    {u32 a_=sp+(160);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=v0+(48);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    v1 = LD32(s3+44);
    ST32(sp+188, FBITS(f3));
    v1 = v1 + s2;
    ST32(sp+176, FBITS(f1));
    ST32(sp+180, FBITS(f2));
    ST32(sp+184, FBITS(f0));
    v0 = LD32(s3+44);
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = v0 + s2;
    {u32 a_=v0+(0);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr120=BITSF(LD32(a_+0));vr121=BITSF(LD32(a_+4));vr122=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(48);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    {float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float o0=0;o0+=vr112*t0;o0+=vr116*t1;o0+=vr120*t2;o0+=v[124]*t3;float o1=0;o1+=vr113*t0;o1+=vr117*t1;o1+=vr121*t2;o1+=v[125]*t3;float o2=0;o2+=vr114*t0;o2+=vr118*t1;o2+=vr122*t2;o2+=v[126]*t3;float o3=0;o3+=vr115*t0;o3+=v[119]*t1;o3+=v[123]*t2;o3+=v[127]*t3;vr4=o0;vr5=o1;vr6=o2;vr7=o3;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=v1+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    s0 = LD32(s3+44);
    f0 = func_088F2C7C();
    goto L_0881702C;
L_0881702C:;
    v0 = FBITS(f0);
    s0 = s0 + s2;
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;vr3=s3*t0;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s1 = LD32(s3+44);
    f0 = func_088F2C7C();
    goto L_08817054;
L_08817054:;
    v0 = FBITS(f0);
    s1 = s1 + s2;
    {u32 a_=s1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;vr3=s3*t0;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s1+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s0 = LD32(s3+44);
    f0 = func_088F2C7C();
    goto L_0881707C;
L_0881707C:;
    v0 = FBITS(f0);
    s0 = s0 + s2;
    {u32 a_=s0+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;vr3=s3*t0;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s0+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    t0 = LD32(s3+4);
    v0 = (s32)s5 < (s32)t0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088170E0; }
    goto L_088170AC;
L_088170AC:;
    v0 = LD32(s3+28);
    goto L_088170B0;
L_088170B0:;
    v1 = s5 << 2;
    a0 = s5 + 0;
    v1 = v1 + v0;
    a3 = LD32(v1);
    s5 = s5 + 1;
    a1 = sp + 0;
    cnd_ = a3 == s4;
    a2 = sp + 96;
    if (cnd_) { goto L_08817100; }
    goto L_088170D0;
L_088170D0:;
    v0 = (s32)s5 < (s32)t0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+28); goto L_088170B0; }
    goto L_088170DC;
L_088170DC:;
    goto L_088170E0;
L_088170E0:;
    sp = sp + 432;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[81]=vr81;v[82]=vr82;v[85]=vr85;v[86]=vr86;v[90]=vr90;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return; }
L_08817100:;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[81]=vr81;v[82]=vr82;v[85]=vr85;v[86]=vr86;v[90]=vr90;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;func_08816B74(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr81=v[81];vr82=v[82];vr85=v[85];vr86=v[86];vr90=v[90];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr101=v[101];vr102=v[102];vr104=v[104];vr105=v[105];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];});
    goto L_08817108;
L_08817108:;
    t0 = LD32(s3+4);
    goto L_088170D0;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[81]=vr81;v[82]=vr82;v[85]=vr85;v[86]=vr86;v[90]=vr90;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 08817110 */
void func_08817110(u32 a0)
{
L_08817110:;
    ST32(a0, 0);
    return;
}

/* 08817118 */
void func_08817118(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817118:;
    sp = sp - 16;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817138; }
    goto L_0881712C;
L_0881712C:;
    goto L_08817130;
L_08817130:;
    sp = sp + 16;
    return;
L_08817138:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817148;
L_08817148:;
    goto L_08817130;
}

/* 08817150 */
void func_08817150(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817150:;
    v1 = D_08AF0E00 - (3584);
    a1 = a0 + 52;
    v1 = v1 + 3584;
    ST32(a0, v1);
    sp = sp - 16;
    ST32(a0+52, 0);
    ST32(a1+8, 0);
    ST32(a1+4, 0);
    func_08817188(a0, t1, t2, t3);
    goto L_0881717C;
L_0881717C:;
    sp = sp + 16;
    return;
}

/* 08817188 */
void func_08817188(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817188:;
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+28, 0);
    ST32(s0+48, 0);
    ST32(s0+32, 0);
    ST32(s0+24, 0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    ST32(s0+44, 0);
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    ST32(s0+80, 0);
    ST32(s0+84, 0);
    ST32(s0+136, 0);
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088171E8;
L_088171E8:;
    a0 = 0x7fff0000u;
    a0 = a0 | 0xffff;
    v1 = D_08AF0E18 - (3608);
    ST32(v0+16, a0);
    v1 = v1 + 3608;
    a0 = 1;
    ST32(v0+12, 0);
    ST32(v0, v1);
    ST8(v0+20, a0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    v1 = LD32(s0+132);
    ST32(s0+96, v0);
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    ST32(s0+132, v1);
    ST32(s0+92, 0);
    ST32(s0+100, 0);
    ST32(s0+128, 0);
    ST32(s0+88, 0);
    sp = sp + 16;
    return;
}

/* 08817244 */
rv_t func_08817244(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817244:;
    v0 = D_08AF0E00 - (3584);
    v0 = v0 + 3584;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 52;
    { u64 r_ = func_0881730C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881726C;
L_0881726C:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817294; }
    goto L_08817278;
L_08817278:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08817294:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881729C;
L_0881729C:;
    ST32(s0+52, 0);
    goto L_08817278;
}

/* 088172A4 */
rv_t func_088172A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088172A4:;
    v0 = D_08AF0E00 - (3584);
    v0 = v0 + 3584;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 52;
    { u64 r_ = func_0881730C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088172CC;
L_088172CC:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088172FC; }
    goto L_088172D8;
L_088172D8:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088172E8;
L_088172E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088172FC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817304;
L_08817304:;
    ST32(s0+52, 0);
    goto L_088172D8;
}

/* 0881730C */
u64 func_0881730C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881730C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817324;
L_08817324:;
    a0 = LD32(s0+80);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08817438; }
    goto L_08817330;
L_08817330:;
    a0 = s0 + 12;
    func_08AA2A94(a0, 0, 0, 0);
    goto L_08817338;
L_08817338:;
    a0 = s0 + 16;
    { u64 r_ = func_08AA2AD4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817340;
L_08817340:;
    a0 = LD32(s0+96);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08817424; }
    goto L_0881734C;
L_0881734C:;
    v0 = LD32(s0+76);
    goto L_08817350;
L_08817350:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088173D4; }
    goto L_08817358;
L_08817358:;
    v1 = LD32(s0+132);
    goto L_0881735C;
L_0881735C:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08817378; }
    goto L_08817368;
L_08817368:;
    a0 = LD32(s0+128);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088173C0; }
    goto L_08817374;
L_08817374:;
    v0 = v1 & 0x2;
    goto L_08817378;
L_08817378:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0881738C; }
    goto L_08817380;
L_08817380:;
    a0 = LD32(s0+128);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088173AC; }
    goto L_0881738C;
L_0881738C:;
    a0 = s0 + 92;
    func_08AA121C(a0, 0, 0, 0);
    goto L_08817394;
L_08817394:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881739C;
L_0881739C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088173AC:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088173B8;
L_088173B8:;
    goto L_0881738C;
L_088173C0:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088173CC;
L_088173CC:;
    v1 = LD32(s0+132);
    goto L_08817374;
L_088173D4:;
    a0 = s0 + 20;
    func_08AA2B14(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088173DC;
L_088173DC:;
    a0 = s0 + 28;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_088173E4;
L_088173E4:;
    a0 = s0 + 48;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_088173EC;
L_088173EC:;
    a0 = s0 + 32;
    func_08AA2BBC(a0, 0, 0, 0);
    goto L_088173F4;
L_088173F4:;
    a0 = s0 + 24;
    func_08AA2BFC(a0, 0, 0, 0);
    goto L_088173FC;
L_088173FC:;
    a0 = s0 + 36;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08817404;
L_08817404:;
    a0 = s0 + 40;
    func_08AA2C3C(a0, 0, 0, 0);
    goto L_0881740C;
L_0881740C:;
    a0 = s0 + 44;
    func_08AA2C7C(a0, 0, 0, 0);
    goto L_08817414;
L_08817414:;
    a0 = s0 + 72;
    func_08AA2CBC(a0, 0, 0, 0);
    goto L_0881741C;
L_0881741C:;
    v1 = LD32(s0+132);
    goto L_0881735C;
L_08817424:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817430;
L_08817430:;
    v0 = LD32(s0+76);
    goto L_08817350;
L_08817438:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817444;
L_08817444:;
    goto L_08817330;
}

/* 0881744C */
void func_0881744C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881744C:;
    a1 = D_08B45AA8 - (23208);
    a2 = D_08B45A9C - (23196);
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = D_08B21184 - (4484);
    a1 = a1 + 23208;
    a2 = a2 + 23196;
    a0 = 0 + 0;
    ST32(v0+4484, v1);
    func_08816B74(a0, a1, a2);
    goto L_08817478;
L_08817478:;
    sp = sp + 16;
    return;
}

/* 08817484 */
void func_08817484(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_08817484:;
    sp = sp - 192;
    s7 = a1 & 0xff;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08817674; }
    goto L_088174BC;
L_088174BC:;
    v0 = D_08AEB584 - (-19068);
    v1 = D_08AEB588 - (-19064);
    f1 = BITSF(LD32(v0-19068));
    f0 = BITSF(LD32(v1-19064));
    s3 = a0 + 104;
    ST32(s3+16, FBITS(f1));
    ST32(s3+20, FBITS(f0));
    ST32(s3+8, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    ST32(s3+12, FBITS(f0));
    v1 = LD32(a0+8);
    a3 = LD32(a0+4);
    s1 = 0 < v1;
    v0 = (s32)s1 < (s32)a3;
    cnd_ = v0 == 0;
    ST32(a0+104, FBITS(f1));
    if (cnd_) { goto L_08817560; }
    goto L_088174FC;
L_088174FC:;
    v1 = s1 << 3;
    a0 = s1 << 1;
    v0 = D_08B211C0 - (4544);
    a2 = v1 - s1;
    a0 = a0 + s1;
    a1 = s1 << 6;
    v1 = v1 + s1;
    v0 = v0 + 4544;
    s0 = a1 + v0;
    s6 = a0 << 2;
    s5 = v1 << 2;
    s4 = a2 << 2;
    goto L_0881752C;
L_0881752C:;
    v1 = LD32(s2+24);
    a1 = v1 + s4;
    v0 = LD32(a1+24);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08817750; }
    goto L_08817544;
L_08817544:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)a3;
    s4 = s4 + 28;
    s5 = s5 + 36;
    s6 = s6 + 12;
    cnd_ = v0 != 0;
    s0 = s0 + 64;
    if (cnd_) { goto L_0881752C; }
    goto L_08817560;
L_08817560:;
    cnd_ = s7 != 0;
    if (cnd_) { f1 = BITSF(LD32(s3+16)); goto L_088175F0; }
    goto L_08817568;
L_08817568:;
    v0 = D_08B2118C - (4492);
    v1 = LD_U8(v0+4492);
    cnd_ = v1 == 0;
    v0 = D_08B221C0 - (8640);
    if (cnd_) { goto L_088176DC; }
    goto L_08817578;
L_08817578:;
    v0 = v0 + 8640;
    v1 = v0 + 48;
    f7 = BITSF(LD32(v0+48));
    f8 = BITSF(LD32(v1+8));
    f6 = BITSF(LD32(v1+4));
    f7 = BITSF(FBITS(f7) ^ 0x80000000u);
    f8 = BITSF(FBITS(f8) ^ 0x80000000u);
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f5 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s2+104));
    f1 = BITSF(LD32(s3+12));
    f2 = BITSF(LD32(s3+8));
    f3 = BITSF(LD32(s3+20));
    f4 = BITSF(LD32(s3+16));
    f0 = f0 + f7;
    f2 = f2 + f6;
    f4 = f4 + f8;
    f5 = f5 + f7;
    f1 = f1 + f6;
    f3 = f3 + f8;
    ST32(s2+104, FBITS(f0));
    ST32(s3+4, FBITS(f5));
    ST32(s3+12, FBITS(f1));
    ST32(s3+8, FBITS(f2));
    ST32(s3+20, FBITS(f3));
    ST32(s3+16, FBITS(f4));
    ST32(sp+80, FBITS(f7));
    ST32(sp+84, FBITS(f6));
    ST32(sp+88, FBITS(f8));
    f1 = BITSF(LD32(s3+16));
    goto L_088175F0;
L_088175F0:;
    f0 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+12));
    f5 = BITSF(LD32(s3+8));
    f4 = BITSF(LD32(s3+20));
    f2 = BITSF(LD32(s2+104));
    f3 = f3 - f5;
    f4 = f4 - f1;
    f0 = f0 - f2;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s2+128);
    ST32(sp+84, FBITS(f3));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+80, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEB58C - (-19060);
    f0 = BITSF(LD32(v0-19060));
    f1 = f1 * f0;
    ST32(s2+100, FBITS(f1));
    cnd_ = a0 == 0;
    ST32(sp+88, FBITS(f4));
    if (cnd_) { goto L_088176B0; }
    goto L_08817660;
L_08817660:;
    v0 = LD32(s2+132);
    v1 = 1;
    v0 = v0 & 0x5;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_088176A0; }
    goto L_08817674;
L_08817674:;
    goto L_08817678;
L_08817678:;
    sp = sp + 192;
    return;
L_088176A0:;
    a1 = s3 + 0;
    func_0884B568(a0, a1);
    goto L_088176A8;
L_088176A8:;
    goto L_08817678;
L_088176B0:;
    v0 = LD32(s2+132);
    a0 = 40;
    v0 = v0 | 0x1;
    ST32(s2+132, v0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088176C4;
L_088176C4:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    s0 = v0 + 0;
    func_0884B4EC(a0, a1);
    goto L_088176D4;
L_088176D4:;
    ST32(s2+128, s0);
    goto L_08817674;
L_088176DC:;
    v1 = D_08B221C0 - (8640);
    v0 = v1 + 8640;
    a0 = v0 + 16;
    a1 = v0 + 32;
    f6 = BITSF(LD32(a0+8));
    f8 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(v1+8640));
    f7 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+16));
    a2 = sp + 32;
    a0 = s3 + 0;
    a1 = s3 + 0;
    a3 = 0 + 0;
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f1));
    ST32(sp+44, FBITS(f2));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f7));
    ST32(sp+60, FBITS(f4));
    ST32(sp+64, FBITS(f8));
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817748;
L_08817748:;
    f1 = BITSF(LD32(s3+16));
    goto L_088175F0;
L_08817750:;
    cnd_ = s7 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0)); goto L_088178A0; }
    goto L_08817758;
L_08817758:;
    v0 = LD32(s2+40);
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = v0 + s5;
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(v0+4));
    f15 = BITSF(LD32(v0+32));
    f12 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v0+16));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[4]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[6]=BITSF(v0);}
    {v0=FBITS(v[1]);}
    f14 = BITSF(v0);
    {v0=FBITS(v[6]);}
    f10 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f11 = BITSF(v0);
    {v0=FBITS(v[2]);}
    f8 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f9 = BITSF(v0);
    a0 = sp + 0;
    a2 = sp + 32;
    a3 = 0 + 0;
    {v0=FBITS(v[0]);}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+44, v0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+32, FBITS(f12));
    ST32(sp+48, FBITS(f13));
    ST32(sp+64, FBITS(f15));
    ST32(sp+36, FBITS(f8));
    ST32(sp+40, FBITS(f9));
    ST32(sp+52, FBITS(f10));
    ST32(sp+56, FBITS(f14));
    ST32(sp+60, FBITS(f11));
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817824;
L_08817824:;
    v0 = LD32(s2+36);
    f0 = BITSF(LD32(sp+4));
    v0 = v0 + s6;
    f1 = BITSF(LD32(v0));
    f0 = f0 + f1;
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(v0));
    f0 = f0 + f1;
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(v0+8));
    f0 = f0 + f1;
    ST32(sp+20, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(v0+8));
    f0 = f0 + f1;
    ST32(sp+16, FBITS(f0));
    goto L_0881788C;
L_0881788C:;
    a0 = s3 + 0;
    a1 = sp + 0;
    f0 = func_08AA1680(a0, a1);
    goto L_08817898;
L_08817898:;
    a3 = LD32(s2+4);
    goto L_08817544;
L_088178A0:;
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+16));
    f4 = BITSF(LD32(s0+20));
    f5 = BITSF(LD32(s0+24));
    f6 = BITSF(LD32(s0+32));
    f7 = BITSF(LD32(s0+36));
    f8 = BITSF(LD32(s0+40));
    a0 = sp + 0;
    a2 = sp + 32;
    a3 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    ST32(sp+60, FBITS(f7));
    ST32(sp+64, FBITS(f8));
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088178F4;
L_088178F4:;
    f1 = BITSF(LD32(s0+48));
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(s0+52));
    f7 = BITSF(LD32(s0+56));
    f3 = f3 + f1;
    f4 = BITSF(LD32(sp+8));
    f5 = BITSF(LD32(sp+16));
    f2 = f2 + f1;
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+20));
    f4 = f4 + f6;
    f5 = f5 + f7;
    f0 = f0 + f6;
    f1 = f1 + f7;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    goto L_0881788C;
}

/* 0881794C */
u32 func_0881794C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_0881794C:;
    v0 = D_08B15A04 - (23044);
    a1 = LD32(v0+23044);
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = a1 << 4;
    v1 = v1 + a1;
    v1 = v1 << 3;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+124));
    v0 = LD32(a0+80);
    cnd_ = v0 == 0;
    f12 = f12 * f0;
    if (cnd_) { goto L_088179A4; }
    goto L_0881797C;
L_0881797C:;
    v0 = LD32(a0+80);
    goto L_08817980;
L_08817980:;
    f0 = BITSF(LD32(v0+84));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088179A4; }
    goto L_08817994;
L_08817994:;
    a0 = v0 + 0;
    v0 = LD32(v0+80);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+80); goto L_08817980; }
    goto L_088179A4;
L_088179A4:;
    v0 = a0 + 0;
    return v0;
}

/* 088179AC */
void func_088179AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
L_088179AC:;
    v0 = LD32(a1+20);
    v1 = LD32(a1+4);
    a2 = LD32(a1+28);
    a3 = LD32(a1+48);
    t0 = LD32(a1+32);
    t1 = LD32(a1+36);
    t2 = LD32(a1+40);
    t3 = LD32(a1+44);
    t4 = LD32(a1+68);
    t5 = LD32(a1+72);
    ST32(a0+20, v0);
    ST32(a0+4, v1);
    ST32(a0+28, a2);
    ST32(a0+48, a3);
    ST32(a0+32, t0);
    ST32(a0+36, t1);
    ST32(a0+40, t2);
    ST32(a0+44, t3);
    ST32(a0+68, t4);
    ST32(a0+72, t5);
    return;
}

/* 08817A00 */
void func_08817A00(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08817A00:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08817AEC; }
    goto L_08817A1C;
L_08817A1C:;
    a2 = LD32(a0+100);
    cnd_ = a2 == 0;
    a0 = 24;
    if (cnd_) { goto L_08817AD8; }
    goto L_08817A28;
L_08817A28:;
    v0 = LD32(s0);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(a2, v0);
    v1 = LD32(s0+4);
    f0 = BITSF(LD32(a2));
    ST32(a2+4, v1);
    f2 = BITSF(LD32(a2+4));
    v0 = LD32(s0+8);
    f2 = f2 - f0;
    ST32(a2+8, v0);
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = LD32(s0+12);
    f0 = BITSF(LD32(a2+8));
    ST32(a2+12, v0);
    f1 = BITSF(LD32(a2+12));
    v1 = LD32(s0+16);
    f1 = f1 - f0;
    ST32(a2+16, v1);
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = LD32(s0+20);
    f3 = BITSF(LD32(a2+16));
    ST32(a2+20, v0);
    f0 = BITSF(LD32(a2+20));
    ST32(sp+4, FBITS(f1));
    f0 = f0 - f3;
    ST32(sp, FBITS(f2));
    v0 = FBITS(f0);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+8, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEB590 - (-19056);
    f0 = BITSF(LD32(v0-19056));
    f1 = f1 * f0;
    ST32(s1+104, FBITS(f1));
    goto L_08817AC4;
L_08817AC4:;
    sp = sp + 48;
    return;
L_08817AD8:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817AE0;
L_08817AE0:;
    ST32(s1+100, v0);
    a2 = v0 + 0;
    goto L_08817A28;
L_08817AEC:;
    v0 = LD32(a0+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817AC4; }
    goto L_08817AF8;
L_08817AF8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817B00;
L_08817B00:;
    ST32(s1+104, 0);
    ST32(s1+100, 0);
    goto L_08817AC4;
}

/* 08817B0C */
void func_08817B0C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08817B0C:;
    v1 = LD32(a0+40);
    cnd_ = v1 == 0;
    ST32(a0+44, 0);
    if (cnd_) { goto L_08817B58; }
    goto L_08817B18;
L_08817B18:;
    v0 = LD32(a0+16);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    v0 = D_08AEB5A4 - (-19036);
    if (cnd_) { goto L_08817B58; }
    goto L_08817B28;
L_08817B28:;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v0-19036));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08817B58; }
    goto L_08817B40;
L_08817B40:;
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08817B58; }
    goto L_08817B54;
L_08817B54:;
    ST32(a0+44, v0);
    goto L_08817B58;
L_08817B58:;
    return;
}

/* 08817B60 */
float func_08817B60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_08817B60:;
    cnd_ = a1 == 0;
    v0 = D_08AEB5AC - (-19028);
    if (cnd_) { goto L_08817BF0; }
    goto L_08817B68;
L_08817B68:;
    v1 = LD32(a0+40);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08817BF0; }
    goto L_08817B74;
L_08817B74:;
    a0 = LD32(a0+44);
    v0 = a0 << 2;
    v0 = v0 + v1;
    v1 = D_08AEB5A8 - (-19032);
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1-19032));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08AEB5AC - (-19028); goto L_08817BF0; }
    goto L_08817B9C;
L_08817B9C:;
    v1 = LD32(a1+4);
    v0 = a0 << 3;
    v0 = v0 - a0;
    v1 = (s32)a0 < (s32)v1;
    cnd_ = v1 == 0;
    v0 = v0 << 2;
    if (cnd_) { goto L_08817BEC; }
    goto L_08817BB4;
L_08817BB4:;
    a0 = LD32(a1+32);
    a0 = a0 + v0;
    v0 = LD32(a0);
    a1 = LD32(a0+8);
    {v[0]=BITSF(v0);}
    v1 = LD32(a0+4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f0 = f0 / f2;
    return f0;
L_08817BEC:;
    v0 = D_08AEB5AC - (-19028);
    goto L_08817BF0;
L_08817BF0:;
    f0 = BITSF(LD32(v0-19028));
    return f0;
}

/* 08817BF8 */
u32 func_08817BF8(u32 a0)
{
    u32 v0 = 0;
L_08817BF8:;
    v0 = LD32(a0+128);
    return v0;
}

/* 08817C00 */
u32 func_08817C00(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08817C00:;
    v1 = LD32(a0+128);
    a0 = a0 + 104;
    v0 = v1 + 4;
    if (v1 == 0) v0 = a0;
    return v0;
}

/* 08817C14 */
void func_08817C14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817C14:;
    sp = sp - 16;
    s2 = a1 + 0;
    v1 = LD32(a0+132);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08817C48; }
    goto L_08817C3C;
L_08817C3C:;
    v0 = LD32(a0+128);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817CB8; }
    goto L_08817C48;
L_08817C48:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = v1 | 0x5;
    if (cnd_) { goto L_08817C64; }
    goto L_08817C54;
L_08817C54:;
    v0 = LD32(s1+128);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817CA0; }
    goto L_08817C60;
L_08817C60:;
    v0 = v1 | 0x5;
    goto L_08817C64;
L_08817C64:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+132, v0);
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817C74;
L_08817C74:;
    s0 = v0 + 0;
    a1 = s2 + 0;
    a0 = v0 + 0;
    func_0884B4EC(a0, a1);
    goto L_08817C84;
L_08817C84:;
    ST32(s1+128, s0);
    sp = sp + 16;
    return;
L_08817CA0:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817CB0;
L_08817CB0:;
    v1 = LD32(s1+132);
    goto L_08817C60;
L_08817CB8:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817CC8;
L_08817CC8:;
    v1 = LD32(s1+132);
    goto L_08817C48;
}

/* 08817CD0 */
void func_08817CD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817CD0:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0+132);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08817D00; }
    goto L_08817CF4;
L_08817CF4:;
    v0 = LD32(a0+128);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817D58; }
    goto L_08817D00;
L_08817D00:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0); goto L_08817D1C; }
    goto L_08817D0C;
L_08817D0C:;
    v0 = LD32(s0+128);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817D40; }
    goto L_08817D18;
L_08817D18:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08817D1C;
L_08817D1C:;
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v0 = v1 | 0x2;
    ST32(s0+128, s1);
    ST32(s0+132, v0);
    sp = sp + 16;
    return;
L_08817D40:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817D50;
L_08817D50:;
    v1 = LD32(s0+132);
    goto L_08817D18;
L_08817D58:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08817D68;
L_08817D68:;
    v1 = LD32(s0+132);
    goto L_08817D00;
}

/* 08817D70 */
u64 func_08817D70(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08817D70:;
    cnd_ = a0 == 0;
    t2 = a1 + 0;
    if (cnd_) { goto L_08817DE4; }
    goto L_08817D78;
L_08817D78:;
    v0 = a0 >> 31;
    v0 = a0 + v0;
    a1 = (u32)((s32)v0 >> 1);
    t1 = a0 + 0;
    a3 = 0 + 0;
    t0 = a1 << 3;
    goto L_08817D90;
L_08817D90:;
    v0 = t0 - a1;
    v0 = v0 << 2;
    v0 = v0 + t2;
    v1 = LD32(v0);
    cnd_ = v1 == a2;
    v0 = (s32)a2 < (s32)v1;
    if (cnd_) { goto L_08817DCC; }
    goto L_08817DA8;
L_08817DA8:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a1 + 0; goto L_08817DB4; }
    goto L_08817DB0;
L_08817DB0:;
    t1 = a1 + 0;
    goto L_08817DB4;
L_08817DB4:;
    v0 = a3 + t1;
    v1 = v0 >> 31;
    v0 = v0 + v1;
    a1 = (u32)((s32)v0 >> 1);
    cnd_ = a1 != a3;
    t0 = a1 << 3;
    if (cnd_) { goto L_08817D90; }
    goto L_08817DCC;
L_08817DCC:;
    v0 = t0 - a1;
    v0 = v0 << 2;
    a3 = v0 + t2;
    v1 = LD32(a3);
    cnd_ = v1 == a2;
    if (cnd_) { goto L_08817DEC; }
    goto L_08817DE4;
L_08817DE4:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08817DEC:;
    cnd_ = (s32)a1 <= 0;
    t1 = a1 + 0;
    if (cnd_) { goto L_08817E00; }
    goto L_08817DF4;
L_08817DF4:;
    v0 = LD32(a3-28);
    cnd_ = v0 == a2;
    v1 = a3 - 28;
    if (cnd_) { goto L_08817EA8; }
    goto L_08817E00;
L_08817E00:;
    a0 = a0 - 1;
    goto L_08817E04;
L_08817E04:;
    v0 = (s32)a1 < (s32)a0;
    cnd_ = v0 == 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_08817E28; }
    goto L_08817E10;
L_08817E10:;
    v0 = t0 - a1;
    v0 = v0 << 2;
    v0 = v0 + t2;
    v1 = LD32(v0+28);
    cnd_ = v1 == a2;
    v1 = v0 + 28;
    if (cnd_) { goto L_08817E84; }
    goto L_08817E28;
L_08817E28:;
    cnd_ = t1 == a3;
    a2 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08817E74; }
    goto L_08817E30;
L_08817E30:;
    v1 = LD32(a2+23232);
    t0 = a2 + 23232;
    a1 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = a3 - t1;
    a0 = v1 >> 1;
    v0 = v0 + 1;
    { u32 x_ = a0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    ST32(a2+23232, v1);
    ST32(t0+4, a1);
    a3 = hi;
    a1 = t1 + a3;
    t0 = a1 << 3;
    goto L_08817E74;
L_08817E74:;
    v0 = t0 - a1;
    v0 = v0 << 2;
    v0 = t2 + v0;
    return (u64)v0 | ((u64)v1 << 32);
L_08817E84:;
    a3 = a3 + 1;
    goto L_08817E88;
L_08817E88:;
    v0 = (s32)a3 < (s32)a0;
    cnd_ = v0 == 0;
    v1 = v1 + 28;
    if (cnd_) { goto L_08817E28; }
    goto L_08817E94;
L_08817E94:;
    v0 = LD32(v1);
    cnd_ = v0 == a2;
    if (cnd_) { a3 = a3 + 1; goto L_08817E88; }
    goto L_08817EA0;
L_08817EA0:;
    goto L_08817E28;
L_08817EA8:;
    t1 = t1 - 1;
    goto L_08817EAC;
L_08817EAC:;
    cnd_ = (s32)t1 <= 0;
    v1 = v1 - 28;
    if (cnd_) { goto L_08817E00; }
    goto L_08817EB4;
L_08817EB4:;
    v0 = LD32(v1);
    cnd_ = v0 == a2;
    if (cnd_) { t1 = t1 - 1; goto L_08817EAC; }
    goto L_08817EC0;
L_08817EC0:;
    a0 = a0 - 1;
    goto L_08817E04;
}

/* 08817EC8 */
u64 func_08817EC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817EC8:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a1 + 0;
    v0 = LD32(a0+88);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817EF4; }
    goto L_08817EE8;
L_08817EE8:;
    a1 = LD32(v1+92);
    { u64 r_ = func_08817D70(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817EF0;
L_08817EF0:;
    a1 = v0 + 0;
    goto L_08817EF4;
L_08817EF4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08817F04 */
u32 func_08817F04(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08817F04:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a1 + 0;
    v0 = LD32(a0+64);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08817F30; }
    goto L_08817F24;
L_08817F24:;
    a1 = LD32(v1+68);
    { u64 r_ = func_08817D70(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08817F2C;
L_08817F2C:;
    a1 = v0 + 0;
    goto L_08817F30;
L_08817F30:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08817F40 */
rv_t func_08817F40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_08817F40:;
    a2 = LD32(a0+48);
    cnd_ = a2 == 0;
    if (cnd_) { f0 = BITSF(LD32(a3+4)); goto L_08817F64; }
    goto L_08817F4C;
L_08817F4C:;
    t1 = a1 << 2;
    v0 = t1 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == a1;
    if (cnd_) { a0 = LD32(a0+28); goto L_08817F8C; }
    goto L_08817F60;
L_08817F60:;
    f0 = BITSF(LD32(a3+4));
    goto L_08817F64;
L_08817F64:;
    f1 = BITSF(LD32(a3+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(a3+4, FBITS(f0));
    ST32(a3+8, FBITS(f1));
    f0 = BITSF(LD32(t0));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(t0, FBITS(f0));
    goto L_08817F84;
L_08817F84:;
    return (rv_t){ v0, v1, f0 };
L_08817F8C:;
    v0 = t1 + a0;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { f0 = BITSF(LD32(a3+4)); goto L_08817F64; }
    goto L_08817F9C;
L_08817F9C:;
    v0 = a1 << 2;
    goto L_08817FA0;
L_08817FA0:;
    t1 = v0 + a0;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = a1 != v1;
    if (cnd_) { goto L_08817F84; }
    goto L_08817FB4;
L_08817FB4:;
    a1 = LD32(t1);
    cnd_ = a1 != 0;
    v0 = a1 << 2;
    if (cnd_) { goto L_08817FA0; }
    goto L_08817FC0;
L_08817FC0:;
    f0 = BITSF(LD32(a3+4));
    goto L_08817F64;
}

/* 08817FC8 */
rv_t func_08817FC8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51];
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08817FC8:;
    v0 = D_08B21184 - (4484);
    a0 = LD32(v0+4484);
    sp = sp - 144;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088180EC; }
    goto L_08817FDC;
L_08817FDC:;
    v0 = D_08B21188 - (4488);
    t1 = LD32(v0+4488);
    cnd_ = t1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088180EC; }
    goto L_08817FEC;
L_08817FEC:;
    a1 = LD32(t1+92);
    cnd_ = a1 == 0;
    t0 = LD32(a0+4);
    if (cnd_) { goto L_088180EC; }
    goto L_08817FF8;
L_08817FF8:;
    v1 = LD32(t1);
    v0 = 0x20000u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088180F4; }
    goto L_0881800C;
L_0881800C:;
    cnd_ = (s32)t0 <= 0;
    v0 = D_08AEB5BC - (-19012);
    if (cnd_) { goto L_088180DC; }
    goto L_08818014;
L_08818014:;
    a0 = D_08B211C0 - (4544);
    f3 = BITSF(LD32(v0-19012));
    a0 = a0 + 4544;
    v0 = a1 + 0;
    v1 = t0 + 0;
    a1 = sp + 0;
    goto L_0881802C;
L_0881802C:;
    {vr28=BITSF(LD32(v0+(12)));}
    {vr29=BITSF(LD32(v0+(16)));}
    {vr30=BITSF(LD32(v0+(20)));}
    {vr31=BITSF(LD32(v0+(24)));}
    {float s0=vr31;float s1=vr30;float s2=-(vr29);float s3=-(vr28);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=-(vr30);float s1=vr31;float s2=vr28;float s3=-(vr29);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr29;float s1=-(vr28);float s2=vr31;float s3=-(vr30);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr31;float s1=vr30;float s2=-(vr29);float s3=vr28;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=-(vr30);float s1=vr31;float s2=vr28;float s3=vr29;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr29;float s1=-(vr28);float s2=vr31;float s3=vr30;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=-(vr28);float s1=-(vr29);float s2=-(vr30);float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float m00=0;m00+=vr16*vr32;m00+=vr17*vr36;m00+=vr18*vr40;m00+=vr19*vr44;float m01=0;m01+=vr20*vr32;m01+=vr21*vr36;m01+=vr22*vr40;m01+=vr23*vr44;float m02=0;m02+=vr24*vr32;m02+=vr25*vr36;m02+=vr26*vr40;m02+=vr27*vr44;float m03=0;m03+=vr28*vr32;m03+=vr29*vr36;m03+=vr30*vr40;m03+=vr31*vr44;float m10=0;m10+=vr16*vr33;m10+=vr17*vr37;m10+=vr18*vr41;m10+=vr19*vr45;float m11=0;m11+=vr20*vr33;m11+=vr21*vr37;m11+=vr22*vr41;m11+=vr23*vr45;float m12=0;m12+=vr24*vr33;m12+=vr25*vr37;m12+=vr26*vr41;m12+=vr27*vr45;float m13=0;m13+=vr28*vr33;m13+=vr29*vr37;m13+=vr30*vr41;m13+=vr31*vr45;float m20=0;m20+=vr16*vr34;m20+=vr17*vr38;m20+=vr18*vr42;m20+=vr19*vr46;float m21=0;m21+=vr20*vr34;m21+=vr21*vr38;m21+=vr22*vr42;m21+=vr23*vr46;float m22=0;m22+=vr24*vr34;m22+=vr25*vr38;m22+=vr26*vr42;m22+=vr27*vr46;float m23=0;m23+=vr28*vr34;m23+=vr29*vr38;m23+=vr30*vr42;m23+=vr31*vr46;float m30=0;m30+=vr16*vr35;m30+=vr17*vr39;m30+=vr18*vr43;m30+=vr19*vr47;float m31=0;m31+=vr20*vr35;m31+=vr21*vr39;m31+=vr22*vr43;m31+=vr23*vr47;float m32=0;m32+=vr24*vr35;m32+=vr25*vr39;m32+=vr26*vr43;m32+=vr27*vr47;float m33=0;m33+=vr28*vr35;m33+=vr29*vr39;m33+=vr30*vr43;m33+=vr31*vr47;vr0=m00;vr4=m01;vr8=m02;vr12=m03;vr1=m10;vr5=m11;vr9=m12;vr13=m13;vr2=m20;vr6=m21;vr10=m22;vr14=m23;vr3=m30;vr7=m31;vr11=m32;vr15=m33;}
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a1+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a1+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(v0+8));
    ST32(sp+64, FBITS(f0));
    {u32 a_=a0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+68, FBITS(f1));
    {u32 a_=a0+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+72, FBITS(f2));
    v1 = v1 - 1;
    v0 = v0 + 28;
    ST32(sp+76, FBITS(f3));
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a1+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    cnd_ = v1 != 0;
    a0 = a0 + 64;
    if (cnd_) { goto L_0881802C; }
    goto L_088180D8;
L_088180D8:;
    v1 = LD32(t1);
    goto L_088180DC;
L_088180DC:;
    v0 = D_08B2118C - (4492);
    v1 = (v1 >> 17) & 0x1;
    ST8(v0+4492, v1);
    v0 = 1;
    goto L_088180EC;
L_088180EC:;
    sp = sp + 144;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;return (rv_t){ v0, v1, f0 }; }
L_088180F4:;
    cnd_ = (s32)t0 <= 0;
    v0 = D_08AEB5BC - (-19012);
    if (cnd_) { goto L_088180DC; }
    goto L_088180FC;
L_088180FC:;
    {vr28=BITSF(LD32(a1+(12)));}
    {vr29=BITSF(LD32(a1+(16)));}
    {vr30=BITSF(LD32(a1+(20)));}
    {vr31=BITSF(LD32(a1+(24)));}
    {float s0=vr31;float s1=vr30;float s2=-(vr29);float s3=-(vr28);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=-(vr30);float s1=vr31;float s2=vr28;float s3=-(vr29);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr29;float s1=-(vr28);float s2=vr31;float s3=-(vr30);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr31;float s1=vr30;float s2=-(vr29);float s3=vr28;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=-(vr30);float s1=vr31;float s2=vr28;float s3=vr29;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr29;float s1=-(vr28);float s2=vr31;float s3=vr30;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=-(vr28);float s1=-(vr29);float s2=-(vr30);float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float m00=0;m00+=vr16*vr32;m00+=vr17*vr36;m00+=vr18*vr40;m00+=vr19*vr44;float m01=0;m01+=vr20*vr32;m01+=vr21*vr36;m01+=vr22*vr40;m01+=vr23*vr44;float m02=0;m02+=vr24*vr32;m02+=vr25*vr36;m02+=vr26*vr40;m02+=vr27*vr44;float m03=0;m03+=vr28*vr32;m03+=vr29*vr36;m03+=vr30*vr40;m03+=vr31*vr44;float m10=0;m10+=vr16*vr33;m10+=vr17*vr37;m10+=vr18*vr41;m10+=vr19*vr45;float m11=0;m11+=vr20*vr33;m11+=vr21*vr37;m11+=vr22*vr41;m11+=vr23*vr45;float m12=0;m12+=vr24*vr33;m12+=vr25*vr37;m12+=vr26*vr41;m12+=vr27*vr45;float m13=0;m13+=vr28*vr33;m13+=vr29*vr37;m13+=vr30*vr41;m13+=vr31*vr45;float m20=0;m20+=vr16*vr34;m20+=vr17*vr38;m20+=vr18*vr42;m20+=vr19*vr46;float m21=0;m21+=vr20*vr34;m21+=vr21*vr38;m21+=vr22*vr42;m21+=vr23*vr46;float m22=0;m22+=vr24*vr34;m22+=vr25*vr38;m22+=vr26*vr42;m22+=vr27*vr46;float m23=0;m23+=vr28*vr34;m23+=vr29*vr38;m23+=vr30*vr42;m23+=vr31*vr46;float m30=0;m30+=vr16*vr35;m30+=vr17*vr39;m30+=vr18*vr43;m30+=vr19*vr47;float m31=0;m31+=vr20*vr35;m31+=vr21*vr39;m31+=vr22*vr43;m31+=vr23*vr47;float m32=0;m32+=vr24*vr35;m32+=vr25*vr39;m32+=vr26*vr43;m32+=vr27*vr47;float m33=0;m33+=vr28*vr35;m33+=vr29*vr39;m33+=vr30*vr43;m33+=vr31*vr47;vr0=m00;vr4=m01;vr8=m02;vr12=m03;vr1=m10;vr5=m11;vr9=m12;vr13=m13;vr2=m20;vr6=m21;vr10=m22;vr14=m23;vr3=m30;vr7=m31;vr11=m32;vr15=m33;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f3 = BITSF(LD32(v0-19012));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    a2 = LD32(a0+28);
    ST32(sp+64, FBITS(f0));
    a0 = D_08B211C0 - (4544);
    v1 = a0 + 4544;
    ST32(sp+68, FBITS(f1));
    a3 = 1;
    v0 = (s32)a3 < (s32)t0;
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, FBITS(f3));
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(4544);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v1+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v1+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=v1+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088180D8; }
    goto L_088181B4;
L_088181B4:;
    a0 = a1 + 28;
    t2 = v1 + 0;
    a1 = a2 + 4;
    a2 = sp + 80;
    goto L_088181C4;
L_088181C4:;
    {vr28=BITSF(LD32(a0+(12)));}
    {vr29=BITSF(LD32(a0+(16)));}
    {vr30=BITSF(LD32(a0+(20)));}
    {vr31=BITSF(LD32(a0+(24)));}
    {float s0=vr31;float s1=vr30;float s2=-(vr29);float s3=-(vr28);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=-(vr30);float s1=vr31;float s2=vr28;float s3=-(vr29);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr29;float s1=-(vr28);float s2=vr31;float s3=-(vr30);float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr31;float s1=vr30;float s2=-(vr29);float s3=vr28;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=-(vr30);float s1=vr31;float s2=vr28;float s3=vr29;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr29;float s1=-(vr28);float s2=vr31;float s3=vr30;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=-(vr28);float s1=-(vr29);float s2=-(vr30);float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float m00=0;m00+=vr16*vr32;m00+=vr17*vr36;m00+=vr18*vr40;m00+=vr19*vr44;float m01=0;m01+=vr20*vr32;m01+=vr21*vr36;m01+=vr22*vr40;m01+=vr23*vr44;float m02=0;m02+=vr24*vr32;m02+=vr25*vr36;m02+=vr26*vr40;m02+=vr27*vr44;float m03=0;m03+=vr28*vr32;m03+=vr29*vr36;m03+=vr30*vr40;m03+=vr31*vr44;float m10=0;m10+=vr16*vr33;m10+=vr17*vr37;m10+=vr18*vr41;m10+=vr19*vr45;float m11=0;m11+=vr20*vr33;m11+=vr21*vr37;m11+=vr22*vr41;m11+=vr23*vr45;float m12=0;m12+=vr24*vr33;m12+=vr25*vr37;m12+=vr26*vr41;m12+=vr27*vr45;float m13=0;m13+=vr28*vr33;m13+=vr29*vr37;m13+=vr30*vr41;m13+=vr31*vr45;float m20=0;m20+=vr16*vr34;m20+=vr17*vr38;m20+=vr18*vr42;m20+=vr19*vr46;float m21=0;m21+=vr20*vr34;m21+=vr21*vr38;m21+=vr22*vr42;m21+=vr23*vr46;float m22=0;m22+=vr24*vr34;m22+=vr25*vr38;m22+=vr26*vr42;m22+=vr27*vr46;float m23=0;m23+=vr28*vr34;m23+=vr29*vr38;m23+=vr30*vr42;m23+=vr31*vr46;float m30=0;m30+=vr16*vr35;m30+=vr17*vr39;m30+=vr18*vr43;m30+=vr19*vr47;float m31=0;m31+=vr20*vr35;m31+=vr21*vr39;m31+=vr22*vr43;m31+=vr23*vr47;float m32=0;m32+=vr24*vr35;m32+=vr25*vr39;m32+=vr26*vr43;m32+=vr27*vr47;float m33=0;m33+=vr28*vr35;m33+=vr29*vr39;m33+=vr30*vr43;m33+=vr31*vr47;vr0=m00;vr4=m01;vr8=m02;vr12=m03;vr1=m10;vr5=m11;vr9=m12;vr13=m13;vr2=m20;vr6=m21;vr10=m22;vr14=m23;vr3=m30;vr7=m31;vr11=m32;vr15=m33;}
    {u32 a_=a2+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a2+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a2+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    v0 = LD32(a1);
    f2 = BITSF(LD32(a0+8));
    ST32(sp+64, FBITS(f0));
    v0 = v0 << 6;
    v0 = v0 + t2;
    ST32(sp+68, FBITS(f1));
    v1 = a3 << 6;
    a3 = a3 + 1;
    {u32 a_=v0+(0);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    ST32(sp+72, FBITS(f2));
    v1 = v1 + t2;
    a1 = a1 + 4;
    {u32 a_=v0+(16);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    ST32(sp+76, FBITS(f3));
    a0 = a0 + 28;
    {u32 a_=sp+(64);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=v0+(48);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=a2+(32);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float m00=0;m00+=vr32*vr16;m00+=vr36*vr17;m00+=vr40*vr18;m00+=vr44*vr19;float m01=0;m01+=vr33*vr16;m01+=vr37*vr17;m01+=vr41*vr18;m01+=vr45*vr19;float m02=0;m02+=vr34*vr16;m02+=vr38*vr17;m02+=vr42*vr18;m02+=vr46*vr19;float m03=0;m03+=vr35*vr16;m03+=vr39*vr17;m03+=vr43*vr18;m03+=vr47*vr19;float m10=0;m10+=vr32*vr20;m10+=vr36*vr21;m10+=vr40*vr22;m10+=vr44*vr23;float m11=0;m11+=vr33*vr20;m11+=vr37*vr21;m11+=vr41*vr22;m11+=vr45*vr23;float m12=0;m12+=vr34*vr20;m12+=vr38*vr21;m12+=vr42*vr22;m12+=vr46*vr23;float m13=0;m13+=vr35*vr20;m13+=vr39*vr21;m13+=vr43*vr22;m13+=vr47*vr23;float m20=0;m20+=vr32*vr24;m20+=vr36*vr25;m20+=vr40*vr26;m20+=vr44*vr27;float m21=0;m21+=vr33*vr24;m21+=vr37*vr25;m21+=vr41*vr26;m21+=vr45*vr27;float m22=0;m22+=vr34*vr24;m22+=vr38*vr25;m22+=vr42*vr26;m22+=vr46*vr27;float m23=0;m23+=vr35*vr24;m23+=vr39*vr25;m23+=vr43*vr26;m23+=vr47*vr27;float m30=0;m30+=vr32*vr28;m30+=vr36*vr29;m30+=vr40*vr30;m30+=vr44*vr31;float m31=0;m31+=vr33*vr28;m31+=vr37*vr29;m31+=vr41*vr30;m31+=vr45*vr31;float m32=0;m32+=vr34*vr28;m32+=vr38*vr29;m32+=vr42*vr30;m32+=vr46*vr31;float m33=0;m33+=vr35*vr28;m33+=vr39*vr29;m33+=vr43*vr30;m33+=vr47*vr31;vr0=m00;vr1=m01;vr2=m02;vr3=m03;vr4=m10;vr5=m11;vr6=m12;vr7=m13;vr8=m20;vr9=m21;vr10=m22;vr11=m23;vr12=m30;vr13=m31;vr14=m32;vr15=m33;}
    v0 = (s32)a3 < (s32)t0;
    {u32 a_=a2+(48);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=v1+(48);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=v1+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    cnd_ = v0 != 0;
    {u32 a_=v1+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088181C4; }
    goto L_088182AC;
L_088182AC:;
    v1 = LD32(t1);
    goto L_088180DC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;
}

/* 088182B4 */
rv_t func_088182B4(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088182B4:;
    sp = sp - 96;
    s0 = a1 << 3;
    v0 = 1;
    t6 = a0 + 0;
    s1 = LD32(a0+76);
    v1 = s0 + s1;
    t0 = LD_U16(v1);
    cnd_ = t0 == v0;
    t7 = a2 + 0;
    if (cnd_) { goto L_0881881C; }
    goto L_088182E4;
L_088182E4:;
    s2 = D_08AEB5C8 - (-19000);
    v0 = D_08AEB5CC - (-18996);
    a1 = LD_U16(v1+2);
    f3 = BITSF(LD32(v0-18996));
    a0 = LD32(a0+92);
    f2 = BITSF(0);
    f4 = BITSF(LD32(s2-19000));
    t1 = t0 - 1;
    t2 = 0 + 0;
    goto L_08818308;
L_08818308:;
    v1 = t2 + t1;
    v1 = (u32)((s32)v1 >> 1);
    v0 = v1 + a1;
    v0 = v0 << 1;
    cnd_ = v1 == t2;
    v0 = v0 + a0;
    if (cnd_) { goto L_08818354; }
    goto L_08818320;
L_08818320:;
    v0 = LD_U16(v0);
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    fcc = FCMP(f12, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { t2 = v1 + 0; goto L_0881834C; }
    goto L_08818340;
L_08818340:;
    t1 = v1 + 0;
    f4 = f1;
    goto L_08818308;
L_0881834C:;
    f2 = f1;
    goto L_08818308;
L_08818354:;
    f1 = f4 - f2;
    f0 = f12 - f2;
    f9 = BITSF(0);
    f0 = f0 / f1;
    fcc = FCMP(f0, f9, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(s2-19000));
    if (cnd_) { goto L_08818388; }
    goto L_08818374;
L_08818374:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f9 = f2;
    if (cnd_) { goto L_08818388; }
    goto L_08818384;
L_08818384:;
    f9 = f0;
    goto L_08818388;
L_08818388:;
    cnd_ = a3 == 0;
    v0 = s0 + s1;
    if (cnd_) { goto L_08818688; }
    goto L_08818390;
L_08818390:;
    v1 = LD_U16(v0+2);
    t0 = LD32(t6+88);
    v0 = 0xffc70000u;
    v1 = t2 + v1;
    v1 = v1 << 2;
    v1 = t0 + v1;
    a0 = LD32(v1);
    t5 = sp + 0;
    v1 = a0 & v0;
    v0 = v1 >> 22;
    f2 = BITSF(v0);
    t3 = a0 & 0x3;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08818800; }
    goto L_088183C8;
L_088183C8:;
    t8 = D_08AEB5C0 - (-19008);
    f0 = BITSF(LD32(t8-19008));
    t9 = D_08AEB5C4 - (-19004);
    v0 = 0x3f0000u;
    f0 = f1 * f0;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(t9-19004));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f7 = f0 - f1;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088187E4; }
    goto L_088183FC;
L_088183FC:;
    f0 = BITSF(LD32(t8-19008));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(t9-19004));
    f2 = BITSF(v0);
    f6 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f5 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088187C8; }
    goto L_08818420;
L_08818420:;
    f1 = BITSF(LD32(t8-19008));
    f4 = f7 * f7;
    f2 = BITSF(LD32(t9-19004));
    f1 = f5 * f1;
    f0 = BITSF(LD32(s2-19000));
    f3 = f6 * f6;
    f8 = BITSF(0);
    f5 = f1 - f2;
    f0 = f0 - f4;
    f1 = f5 * f5;
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f8, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_08818464; }
    goto L_08818460;
L_08818460:;
    f0 = f8;
    goto L_08818464;
L_08818464:;
    v1 = s0 + s1;
    v0 = LD_U16(v1+2);
    a2 = t3 + 3;
    a1 = t3 + 1;
    v0 = t1 + v0;
    v0 = v0 << 2;
    v0 = t0 + v0;
    t0 = LD32(v0);
    v0 = 0xffc70000u;
    a0 = t3 + 2;
    t4 = t0 & v0;
    v0 = t4 >> 22;
    a1 = a1 & 0x3;
    a0 = a0 & 0x3;
    a2 = a2 & 0x3;
    f1 = BITSF(v0);
    v1 = t3 << 2;
    a1 = a1 << 2;
    a0 = a0 << 2;
    a2 = a2 << 2;
    a2 = a2 + t5;
    v1 = v1 + t5;
    a1 = a1 + t5;
    a0 = a0 + t5;
    ST32(v1, FBITS(f7));
    t5 = sp + 16;
    t3 = t0 & 0x3;
    ST32(a1, FBITS(f6));
    f2 = (float)(s32)FBITS(f1);
    ST32(a0, FBITS(f5));
    cnd_ = (s32)v0 < 0;
    ST32(a2, FBITS(f0));
    if (cnd_) { goto L_088187AC; }
    goto L_088184E4;
L_088184E4:;
    f0 = BITSF(LD32(t8-19008));
    v0 = 0x3f0000u;
    f1 = BITSF(LD32(t9-19004));
    f0 = f2 * f0;
    v0 = v0 | 0xf000;
    v1 = t0 & v0;
    v0 = v1 >> 12;
    f7 = f0 - f1;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08818790; }
    goto L_08818510;
L_08818510:;
    f0 = BITSF(LD32(t8-19008));
    v1 = t0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(t9-19004));
    f2 = BITSF(v0);
    f6 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f5 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08818774; }
    goto L_08818534;
L_08818534:;
    f1 = BITSF(LD32(t8-19008));
    f4 = f7 * f7;
    f2 = BITSF(LD32(t9-19004));
    f1 = f5 * f1;
    f0 = BITSF(LD32(s2-19000));
    f3 = f6 * f6;
    f5 = BITSF(0);
    f2 = f1 - f2;
    f0 = f0 - f4;
    f1 = f2 * f2;
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f5, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_08818578; }
    goto L_08818574;
L_08818574:;
    f0 = f5;
    goto L_08818578;
L_08818578:;
    v0 = t3 + 1;
    a1 = t3 + 3;
    v1 = t3 + 2;
    v0 = v0 & 0x3;
    v1 = v1 & 0x3;
    a1 = a1 & 0x3;
    v0 = v0 << 2;
    a0 = t3 << 2;
    v0 = v0 + t5;
    v1 = v1 << 2;
    a1 = a1 << 2;
    a0 = a0 + t5;
    ST32(a0, FBITS(f7));
    v1 = v1 + t5;
    a1 = a1 + t5;
    ST32(v0, FBITS(f6));
    v0 = D_08AEB5D0 - (-18992);
    ST32(v1, FBITS(f2));
    ST32(a1, FBITS(f0));
    f0 = BITSF(LD32(v0-18992));
    v0 = FBITS(f9);
    v1 = FBITS(f0);
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
    {v[116]=BITSF(LD32(sp+(16)));}
    {v[117]=BITSF(LD32(sp+(20)));}
    {v[118]=BITSF(LD32(sp+(24)));}
    {v[119]=BITSF(LD32(sp+(28)));}
    {v[124]=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881863C; }
    goto L_0881861C;
L_0881861C:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_0881863C;
L_0881863C:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08818650; }
    goto L_08818648;
L_08818648:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_08818650;
L_08818650:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08818678; }
    goto L_0881866C;
L_0881866C:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_08818678;
L_08818678:;
    {ST32(a3+(0),FBITS(v[120]));}
    {ST32(a3+(4),FBITS(v[121]));}
    {ST32(a3+(8),FBITS(v[122]));}
    {ST32(a3+(12),FBITS(v[123]));}
    goto L_08818688;
L_08818688:;
    cnd_ = t7 == 0;
    a0 = s0 + s1;
    if (cnd_) { goto L_08818758; }
    goto L_08818690;
L_08818690:;
    v1 = LD_U16(a0+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(a0+6); goto L_088186A8; }
    goto L_088186A0;
L_088186A0:;
    v0 = LD_U16(a0+6);
    v1 = v0 + t2;
    goto L_088186A8;
L_088186A8:;
    a2 = s0 + s1;
    v0 = v1 << 1;
    a3 = LD32(t6+96);
    a0 = LD_U16(a2+4);
    v0 = v0 + v1;
    v0 = v0 << 2;
    v1 = 1;
    cnd_ = a0 == v1;
    a1 = a3 + v0;
    if (cnd_) { goto L_0881876C; }
    goto L_088186CC;
L_088186CC:;
    v0 = LD_U16(a2+6);
    v1 = v0 + t1;
    goto L_088186D4;
L_088186D4:;
    f0 = BITSF(LD32(s2-19000));
    f4 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1));
    f0 = f0 - f9;
    f2 = BITSF(LD32(a1+4));
    v0 = v1 << 1;
    v0 = v0 + v1;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    v0 = v0 << 2;
    ST32(sp+56, FBITS(f4));
    v0 = a3 + v0;
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f5 = f5 * f9;
    f0 = f0 * f9;
    f1 = f1 * f9;
    f4 = f4 + f5;
    f3 = f3 + f0;
    f2 = f2 + f1;
    ST32(sp+64, FBITS(f0));
    ST32(t7+8, FBITS(f4));
    ST32(t7+4, FBITS(f2));
    ST32(t7, FBITS(f3));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    goto L_08818758;
L_08818758:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0881876C:;
    v1 = LD_U16(a2+6);
    goto L_088186D4;
L_08818774:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f5 = (float)(s32)FBITS(f0);
    f5 = f5 + f5;
    goto L_08818534;
L_08818790:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08818510;
L_088187AC:;
    v0 = v0 & 0x1;
    v1 = t4 >> 23;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_088184E4;
L_088187C8:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f5 = (float)(s32)FBITS(f0);
    f5 = f5 + f5;
    goto L_08818420;
L_088187E4:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_088183FC;
L_08818800:;
    v0 = v0 & 0x1;
    v1 = v1 >> 23;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088183C8;
L_0881881C:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_0881885C; }
    goto L_08818824;
L_08818824:;
    a0 = LD32(a0+36);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U16(v1+2); goto L_08818898; }
    goto L_08818830;
L_08818830:;
    v0 = a1 << 4;
    v0 = v0 + a0;
    a0 = LD32(v0+8);
    v1 = LD32(a0);
    ST32(a3, v1);
    v0 = LD32(a0+4);
    ST32(a3+4, v0);
    v1 = LD32(a0+8);
    ST32(a3+8, v1);
    v0 = LD32(a0+12);
    ST32(a3+12, v0);
    goto L_0881885C;
L_0881885C:;
    cnd_ = t7 == 0;
    a0 = s0 + s1;
    if (cnd_) { goto L_08818758; }
    goto L_08818864;
L_08818864:;
    a1 = LD_U16(a0+6);
    v1 = LD32(t6+96);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(t7+8, FBITS(f0));
    ST32(t7, FBITS(f1));
    ST32(t7+4, FBITS(f2));
    goto L_08818758;
L_08818898:;
    v1 = LD32(t6+88);
    v0 = v0 << 2;
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 0xffc70000u;
    v1 = a1 & v0;
    v0 = v1 >> 22;
    f0 = BITSF(v0);
    a0 = a1 & 0x3;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088189E8; }
    goto L_088188C4;
L_088188C4:;
    t8 = D_08AEB5C0 - (-19008);
    f0 = BITSF(LD32(t8-19008));
    t9 = D_08AEB5C4 - (-19004);
    v0 = 0x3f0000u;
    f0 = f1 * f0;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(t9-19004));
    v1 = a1 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088189CC; }
    goto L_088188F8;
L_088188F8:;
    f0 = BITSF(LD32(t8-19008));
    v1 = a1 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(t9-19004));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088189B0; }
    goto L_0881891C;
L_0881891C:;
    f0 = BITSF(LD32(t8-19008));
    f1 = BITSF(LD32(t9-19004));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEB5C8 - (-19000);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-19000));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_08818964; }
    goto L_08818960;
L_08818960:;
    f0 = f2;
    goto L_08818964;
L_08818964:;
    a1 = a0 + 3;
    v0 = a0 + 1;
    v1 = a0 + 2;
    v0 = v0 & 0x3;
    v1 = v1 & 0x3;
    a1 = a1 & 0x3;
    v0 = v0 << 2;
    v1 = v1 << 2;
    a1 = a1 << 2;
    a0 = a0 << 2;
    a1 = a1 + a3;
    a0 = a0 + a3;
    v0 = v0 + a3;
    v1 = v1 + a3;
    ST32(a0, FBITS(f6));
    ST32(v0, FBITS(f5));
    ST32(v1, FBITS(f4));
    ST32(a1, FBITS(f0));
    goto L_0881885C;
L_088189B0:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_0881891C;
L_088189CC:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_088188F8;
L_088189E8:;
    v0 = v0 & 0x1;
    v1 = v1 >> 23;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_088188C4;
}

/* 08818A04 */
rv_t func_08818A04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08818A04:;
    sp = sp - 32;
    v1 = 0 + 0;
    s4 = t0 & 0xff;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    v0 = LD_U8(a0+72);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08818A64; }
    goto L_08818A40;
L_08818A40:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08818A64:;
    a1 = LD32(a0+16);
    { rv_t r_ = func_088182B4(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08818A6C;
L_08818A6C:;
    v0 = 0 < s1;
    v1 = 0 < s2;
    v0 = v0 & v1;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08818AC4; }
    goto L_08818A84;
L_08818A84:;
    cnd_ = s4 == 0;
    v1 = 1;
    if (cnd_) { goto L_08818A40; }
    goto L_08818A8C;
L_08818A8C:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08818AA0; }
    goto L_08818A94;
L_08818A94:;
    f0 = BITSF(LD32(s1));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s1, FBITS(f0));
    goto L_08818AA0;
L_08818AA0:;
    cnd_ = s3 == 0;
    v1 = 1;
    if (cnd_) { goto L_08818A40; }
    goto L_08818AA8;
L_08818AA8:;
    f1 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s3+4, FBITS(f1));
    ST32(s3+8, FBITS(f0));
    goto L_08818A40;
L_08818AC4:;
    f0 = func_08817B60(a0, a1);
    goto L_08818ACC;
L_08818ACC:;
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    ST32(s1+8, FBITS(f3));
    goto L_08818A84;
}

/* 08818AF4 */
rv_t func_08818AF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08818AF4:;
    sp = sp - 48;
    t1 = a0 + 0;
    s2 = a3 & 0xff;
    v1 = 0 + 0;
    s1 = t0 & 0xff;
    v0 = LD_U8(a0+72);
    cnd_ = v0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_08818D48; }
    goto L_08818B24;
L_08818B24:;
    cnd_ = a2 == 0;
    if (cnd_) {  goto L_08818D4C; }
    goto L_08818B2C;
L_08818B2C:;
    f1 = BITSF(0);
    fcc = FCMP(f13, f1, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_08818D4C; }
    goto L_08818B40;
L_08818B40:;
    fcc = FCMP(f12, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f1; goto L_08818B50; }
    goto L_08818B50;
L_08818B50:;
    t3 = D_08AEB5D4 - (-18988);
    f0 = BITSF(LD32(t3-18988));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f0; goto L_08818B68; }
    goto L_08818B68;
L_08818B68:;
    v0 = LD32(t1+16);
    t2 = LD32(t1+76);
    a3 = v0 << 3;
    v1 = a3 + t2;
    a2 = LD_U16(v1);
    v0 = 1;
    cnd_ = a2 == v0;
    t0 = 1;
    if (cnd_) { goto L_08818D6C; }
    goto L_08818B88;
L_08818B88:;
    v1 = LD_U16(v1+2);
    a0 = LD32(t1+92);
    v0 = v1 + 1;
    v0 = v0 << 1;
    v0 = v0 + a0;
    v0 = LD_U16(v0);
    v1 = v1 << 1;
    v1 = v1 + a0;
    f0 = BITSF(v0);
    v0 = LD_U16(v1);
    a0 = a2 - 2;
    f2 = (float)(s32)FBITS(f0);
    f1 = BITSF(v0);
    v0 = D_08AEB5D8 - (-18984);
    f4 = BITSF(LD32(v0-18984));
    f3 = (float)(s32)FBITS(f1);
    a2 = 0 + 0;
    f2 = f2 * f4;
    cnd_ = (s32)a0 <= 0;
    f0 = f3 * f4;
    if (cnd_) { goto L_08818C10; }
    goto L_08818BD8;
L_08818BD8:;
    v1 = v1 + 2;
    goto L_08818BDC;
L_08818BDC:;
    fcc = FCMP(f12, f2, 12);
    cnd_ = fcc;
    v1 = v1 + 2;
    if (cnd_) { goto L_08818C10; }
    goto L_08818BEC;
L_08818BEC:;
    v0 = LD_U16(v1);
    a2 = a2 + 1;
    t0 = t0 + 1;
    f0 = BITSF(v0);
    v0 = (s32)a2 < (s32)a0;
    f1 = (float)(s32)FBITS(f0);
    f0 = f2;
    cnd_ = v0 != 0;
    f2 = f1 * f4;
    if (cnd_) { goto L_08818BDC; }
    goto L_08818C10;
L_08818C10:;
    a0 = a3 + t2;
    v1 = LD_U16(a0+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(a0+6); goto L_08818C2C; }
    goto L_08818C24;
L_08818C24:;
    v0 = LD_U16(a0+6);
    v1 = v0 + a2;
    goto L_08818C2C;
L_08818C2C:;
    a2 = a3 + t2;
    v0 = v1 << 1;
    t2 = LD32(t1+96);
    a0 = LD_U16(a2+4);
    v0 = v0 + v1;
    v0 = v0 << 2;
    v1 = 1;
    cnd_ = a0 == v1;
    a3 = t2 + v0;
    if (cnd_) { goto L_08818D64; }
    goto L_08818C50;
L_08818C50:;
    v0 = LD_U16(a2+6);
    v1 = v0 + t0;
    goto L_08818C58;
L_08818C58:;
    f0 = f2 - f0;
    f1 = BITSF(LD32(t3-18988));
    v0 = v1 << 1;
    v0 = v0 + v1;
    f0 = f0 * f13;
    v0 = v0 << 2;
    v0 = t2 + v0;
    f4 = BITSF(LD32(a3));
    f1 = f1 / f0;
    f2 = BITSF(LD32(a3+4));
    f5 = BITSF(LD32(v0+8));
    f6 = BITSF(LD32(a3+8));
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = f0 - f4;
    f3 = f3 - f2;
    f5 = f5 - f6;
    f2 = f0 * f1;
    f4 = f3 * f1;
    f1 = f5 * f1;
    ST32(sp+16, FBITS(f0));
    ST32(s0+4, FBITS(f4));
    ST32(s0+8, FBITS(f1));
    ST32(s0, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f4));
    cnd_ = a1 == 0;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_08818CFC; }
    goto L_08818CD0;
L_08818CD0:;
    a0 = t1 + 0;
    f0 = func_08817B60(a0, a1);
    goto L_08818CD8;
L_08818CD8:;
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    ST32(s0+8, FBITS(f3));
    goto L_08818CFC;
L_08818CFC:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08818D34; }
    goto L_08818D04;
L_08818D04:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    goto L_08818D34;
L_08818D34:;
    cnd_ = s2 == 0;
    v1 = 1;
    if (cnd_) { goto L_08818D48; }
    goto L_08818D3C;
L_08818D3C:;
    f0 = BITSF(LD32(s0));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s0, FBITS(f0));
    goto L_08818D48;
L_08818D48:;
    goto L_08818D4C;
L_08818D4C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08818D64:;
    v1 = LD_U16(a2+6);
    goto L_08818C58;
L_08818D6C:;
    v1 = 1;
    ST32(s0, FBITS(f1));
    ST32(s0+8, FBITS(f1));
    ST32(s0+4, FBITS(f1));
    goto L_08818D48;
}

/* 08818D80 */
rv_t func_08818D80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08818D80:;
    sp = sp - 112;
    t1 = a0 + 0;
    s3 = a3 & 0xff;
    v1 = 0 + 0;
    s2 = t0 & 0xff;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = LD_U8(a0+72);
    cnd_ = v0 == 0;
    f21 = f13;
    if (cnd_) { goto L_088191F4; }
    goto L_08818DC8;
L_08818DC8:;
    v1 = a2 < 0x1u;
    v0 = a1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088191F4; }
    goto L_08818DDC;
L_08818DDC:;
    f0 = BITSF(0);
    fcc = FCMP(f13, f0, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_088191F8; }
    goto L_08818DF0;
L_08818DF0:;
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f0; goto L_08818E00; }
    goto L_08818E00;
L_08818E00:;
    t6 = D_08AEB5DC - (-18980);
    f1 = BITSF(LD32(t6-18980));
    fcc = FCMP(f1, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f1; goto L_08818E18; }
    goto L_08818E18;
L_08818E18:;
    v0 = LD32(t1+16);
    t2 = LD32(t1+76);
    a2 = v0 << 3;
    v1 = a2 + t2;
    a1 = LD_U16(v1);
    v0 = 1;
    cnd_ = a1 == v0;
    a3 = 1;
    if (cnd_) { goto L_088192C8; }
    goto L_08818E38;
L_08818E38:;
    v1 = LD_U16(v1+2);
    a0 = LD32(t1+92);
    v0 = v1 + 1;
    v0 = v0 << 1;
    v0 = v0 + a0;
    v0 = LD_U16(v0);
    v1 = v1 << 1;
    v1 = v1 + a0;
    f0 = BITSF(v0);
    v0 = LD_U16(v1);
    a0 = a1 - 2;
    f2 = (float)(s32)FBITS(f0);
    f1 = BITSF(v0);
    v0 = D_08AEB5E0 - (-18976);
    f4 = BITSF(LD32(v0-18976));
    f3 = (float)(s32)FBITS(f1);
    a1 = 0 + 0;
    f20 = f2 * f4;
    cnd_ = (s32)a0 <= 0;
    f22 = f3 * f4;
    if (cnd_) { goto L_08818EC4; }
    goto L_08818E88;
L_08818E88:;
    f2 = f4;
    v1 = v1 + 2;
    goto L_08818E90;
L_08818E90:;
    fcc = FCMP(f12, f20, 12);
    cnd_ = fcc;
    v1 = v1 + 2;
    if (cnd_) { goto L_08818EC4; }
    goto L_08818EA0;
L_08818EA0:;
    v0 = LD_U16(v1);
    a1 = a1 + 1;
    f22 = f20;
    f0 = BITSF(v0);
    v0 = (s32)a1 < (s32)a0;
    a3 = a3 + 1;
    f1 = (float)(s32)FBITS(f0);
    cnd_ = v0 != 0;
    f20 = f1 * f2;
    if (cnd_) { goto L_08818E90; }
    goto L_08818EC4;
L_08818EC4:;
    v0 = a2 + t2;
    v1 = LD_U16(v0+2);
    a0 = LD32(t1+88);
    v0 = 0xffc70000u;
    v1 = a1 + v1;
    v1 = v1 << 2;
    v1 = a0 + v1;
    a1 = LD32(v1);
    t5 = sp + 0;
    v1 = a1 & v0;
    v0 = v1 >> 22;
    f0 = BITSF(v0);
    t0 = a1 & 0x3;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088192AC; }
    goto L_08818F00;
L_08818F00:;
    t3 = D_08AEB5E4 - (-18972);
    f0 = BITSF(LD32(t3-18972));
    t4 = D_08AEB5E8 - (-18968);
    v0 = 0x3f0000u;
    f0 = f1 * f0;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(t4-18968));
    v1 = a1 & v0;
    v0 = v1 >> 12;
    f7 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08819290; }
    goto L_08818F34;
L_08818F34:;
    f0 = BITSF(LD32(t3-18972));
    v1 = a1 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(t4-18968));
    f2 = BITSF(v0);
    f6 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f5 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08819274; }
    goto L_08818F58;
L_08818F58:;
    f1 = BITSF(LD32(t3-18972));
    f4 = f7 * f7;
    f2 = BITSF(LD32(t4-18968));
    f1 = f5 * f1;
    f0 = BITSF(LD32(t6-18980));
    f3 = f6 * f6;
    f8 = BITSF(0);
    f5 = f1 - f2;
    f0 = f0 - f4;
    f1 = f5 * f5;
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f8, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_08818F9C; }
    goto L_08818F98;
L_08818F98:;
    f0 = f8;
    goto L_08818F9C;
L_08818F9C:;
    v1 = a2 + t2;
    v0 = LD_U16(v1+2);
    a2 = t0 + 3;
    a1 = t0 + 1;
    v0 = a3 + v0;
    v0 = v0 << 2;
    v0 = a0 + v0;
    a3 = LD32(v0);
    v0 = 0xffc70000u;
    a0 = t0 + 2;
    t1 = a3 & v0;
    v0 = t1 >> 22;
    a1 = a1 & 0x3;
    a0 = a0 & 0x3;
    a2 = a2 & 0x3;
    f1 = BITSF(v0);
    v1 = t0 << 2;
    a1 = a1 << 2;
    a0 = a0 << 2;
    a2 = a2 << 2;
    a2 = a2 + t5;
    v1 = v1 + t5;
    a1 = a1 + t5;
    a0 = a0 + t5;
    ST32(v1, FBITS(f7));
    t2 = sp + 16;
    t0 = a3 & 0x3;
    ST32(a1, FBITS(f6));
    f2 = (float)(s32)FBITS(f1);
    ST32(a0, FBITS(f5));
    cnd_ = (s32)v0 < 0;
    ST32(a2, FBITS(f0));
    if (cnd_) { goto L_08819258; }
    goto L_0881901C;
L_0881901C:;
    f0 = BITSF(LD32(t3-18972));
    v0 = 0x3f0000u;
    f1 = BITSF(LD32(t4-18968));
    f0 = f2 * f0;
    v0 = v0 | 0xf000;
    v1 = a3 & v0;
    v0 = v1 >> 12;
    f7 = f0 - f1;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0881923C; }
    goto L_08819048;
L_08819048:;
    f0 = BITSF(LD32(t3-18972));
    v1 = a3 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(t4-18968));
    f2 = BITSF(v0);
    f6 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f5 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08819220; }
    goto L_0881906C;
L_0881906C:;
    f1 = BITSF(LD32(t3-18972));
    f4 = f7 * f7;
    f2 = BITSF(LD32(t4-18968));
    f1 = f5 * f1;
    f0 = BITSF(LD32(t6-18980));
    f3 = f6 * f6;
    f5 = BITSF(0);
    f2 = f1 - f2;
    f0 = f0 - f4;
    f1 = f2 * f2;
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f5, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_088190B0; }
    goto L_088190AC;
L_088190AC:;
    f0 = f5;
    goto L_088190B0;
L_088190B0:;
    a3 = t0 + 3;
    v0 = t0 + 1;
    a2 = t0 + 2;
    v0 = v0 & 0x3;
    a2 = a2 & 0x3;
    a3 = a3 & 0x3;
    v1 = t0 << 2;
    v0 = v0 << 2;
    a2 = a2 << 2;
    a3 = a3 << 2;
    v1 = v1 + t2;
    v0 = v0 + t2;
    a3 = a3 + t2;
    a2 = a2 + t2;
    ST32(v1, FBITS(f7));
    a0 = sp + 32;
    a1 = s0 + 0;
    ST32(v0, FBITS(f6));
    ST32(a2, FBITS(f2));
    ST32(a3, FBITS(f0));
    f6 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(sp+8));
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    v1 = LD32(sp+16);
    v0 = FBITS(f6);
    {v[0]=BITSF(v1);}
    {v[8]=BITSF(v0);}
    v1 = LD32(sp+24);
    v0 = FBITS(f5);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+12);
    {v[11]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+28);
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    f7 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f2 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    {v0=FBITS(v[6]);}
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+48);
    ST32(sp+60, FBITS(f7));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp, FBITS(f6));
    ST32(sp+40, v0);
    ST32(sp+44, v1);
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f4));
    f0 = func_08835A20(a0, a1);
    goto L_088191B8;
L_088191B8:;
    f1 = f20 - f22;
    f1 = f1 * f21;
    f0 = f0 / f1;
    cnd_ = s2 == 0;
    ST32(s1, FBITS(f0));
    if (cnd_) { goto L_088191D4; }
    goto L_088191CC;
L_088191CC:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s1, FBITS(f0));
    goto L_088191D4;
L_088191D4:;
    cnd_ = s3 == 0;
    v1 = 1;
    if (cnd_) { goto L_088191F4; }
    goto L_088191DC;
L_088191DC:;
    f0 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_088191F4;
L_088191F4:;
    goto L_088191F8;
L_088191F8:;
    v0 = v1 + 0;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08819220:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f5 = (float)(s32)FBITS(f0);
    f5 = f5 + f5;
    goto L_0881906C;
L_0881923C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08819048;
L_08819258:;
    v0 = v0 & 0x1;
    v1 = t1 >> 23;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_0881901C;
L_08819274:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f5 = (float)(s32)FBITS(f0);
    f5 = f5 + f5;
    goto L_08818F58;
L_08819290:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_08818F34;
L_088192AC:;
    v0 = v0 & 0x1;
    v1 = v1 >> 23;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08818F00;
L_088192C8:;
    v1 = 1;
    ST32(s0+4, FBITS(f1));
    ST32(s0, FBITS(f0));
    ST32(s1, FBITS(f0));
    goto L_088191F4;
}

/* 088192DC */
rv_t func_088192DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088192DC:;
    sp = sp - 176;
    v1 = D_08B21184 - (4484);
    fp = a3 + 0;
    s5 = a2 + 0;
    s3 = a0 + 0;
    v0 = LD32(a0+16);
    ST32(sp+96, a1);
    cnd_ = v0 == 0;
    ST32(v1+4484, v0);
    if (cnd_) { goto L_08819530; }
    goto L_0881932C;
L_0881932C:;
    v0 = a0 + 112;
    a3 = D_08B21188 - (4488);
    cnd_ = v0 == 0;
    ST32(a3+4488, v0);
    if (cnd_) { goto L_08819530; }
    goto L_0881933C;
L_0881933C:;
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+12));
    f2 = BITSF(LD32(a2+24));
    ST32(sp+64, FBITS(f0));
    v0 = D_08B221C0 - (8640);
    v1 = v0 + 8640;
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, 0);
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+16));
    f2 = BITSF(LD32(a2+28));
    {u32 a_=sp+(64);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+20));
    f2 = BITSF(LD32(a2+32));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    {u32 a_=sp+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+64, FBITS(f0));
    {u32 a_=v0+(8640);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v0 = D_08AEB5EC - (-18964);
    f0 = BITSF(LD32(v0-18964));
    v0 = D_08B285AC - (-31316);
    {u32 a_=v1+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+76, FBITS(f0));
    {u32 a_=v1+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(v0-31316);
    {u32 a_=v1+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+100, v0);
    func_0880AE8C(a0, a1, a2, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088193F4;
L_088193F4:;
    v1 = s3 + 356;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s3+356));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08B21181 - (4481);
    ST32(sp+88, FBITS(f2));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    a0 = LD_U8(v0+4481);
    cnd_ = a0 == 0;
    f20 = BITSF(LD32(s3+368));
    if (cnd_) { goto L_08819428; }
    goto L_08819420;
L_08819420:;
    v0 = 0x30000000u;
    fp = fp | v0;
    goto L_08819428;
L_08819428:;
    v0 = D_08B15A00 - (23040);
    s0 = LD32(v0+23040);
    v0 = (u32)-1;
    s0 = s0 - 1;
    cnd_ = s0 == v0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088194A4; }
    goto L_08819440;
L_08819440:;
    v1 = s0 << 4;
    v1 = v1 + s0;
    v0 = D_08B22E88 - (11912);
    v1 = v1 << 3;
    v0 = v0 + 11912;
    s1 = v1 + v0;
    v0 = 0x10000000u;
    v1 = 0x20000000u;
    v0 = fp & v0;
    v1 = fp & v1;
    ST32(sp+104, v0);
    s6 = D_08B15A04 - (23044);
    s7 = 1;
    ST32(sp+108, v1);
    goto L_08819478;
L_08819478:;
    v1 = D_08B21180 - (4480);
    v0 = LD_U8(v1+4480);
    cnd_ = v0 == 0;
    s4 = s4 << 1;
    if (cnd_) { goto L_08819628; }
    goto L_08819488;
L_08819488:;
    v0 = LD32(s6+23044);
    cnd_ = v0 == s0;
    v1 = D_08B159FC - (23036);
    if (cnd_) { goto L_088195A0; }
    goto L_08819494;
L_08819494:;
    s0 = s0 - 1;
    goto L_08819498;
L_08819498:;
    a3 = (u32)-1;
    cnd_ = s0 != a3;
    s1 = s1 - 136;
    if (cnd_) { goto L_08819478; }
    goto L_088194A4;
L_088194A4:;
    v0 = 0x1000000u;
    v0 = fp & v0;
    cnd_ = v0 != 0;
    v0 = D_08B159F4 - (23028);
    if (cnd_) { goto L_088194C0; }
    goto L_088194B4;
L_088194B4:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08819534; }
    goto L_088194BC;
L_088194BC:;
    v0 = D_08B159F4 - (23028);
    goto L_088194C0;
L_088194C0:;
    v1 = LD_U8(v0+23028);
    cnd_ = v1 == 0;
    v0 = D_08B21188 - (4488);
    if (cnd_) { goto L_08819500; }
    goto L_088194CC;
L_088194CC:;
    v0 = LD32(s3+224);
    v1 = LD32(sp+100);
    cnd_ = v0 == v1;
    a0 = D_08B21184 - (4484);
    if (cnd_) { goto L_088194FC; }
    goto L_088194DC;
L_088194DC:;
    v0 = LD32(a0+4484);
    a2 = LD32(v0+4);
    v1 = (s32)a2 < 2;
    cnd_ = v1 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_0881958C; }
    goto L_088194F0;
L_088194F0:;
    a3 = LD32(sp+100);
    goto L_088194F4;
L_088194F4:;
    ST32(s3+220, a3);
    ST32(s3+224, a3);
    goto L_088194FC;
L_088194FC:;
    v0 = D_08B21188 - (4488);
    goto L_08819500;
L_08819500:;
    a1 = LD32(v0+4488);
    a2 = (fp >> 27) & 0x1;
    a0 = 0x2000000u;
    v0 = LD32(a1);
    v1 = 0x10000u;
    a0 = fp & a0;
    v0 = v0 | v1;
    v0 = (v0 & ~(0x1u << 17)) | ((a2 & 0x1) << 17);
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08819530; }
    goto L_08819528;
L_08819528:;
    cnd_ = s4 != 0;
    if (cnd_) { a1 = LD32(sp+96); goto L_08819564; }
    goto L_08819530;
L_08819530:;
    goto L_08819534;
L_08819534:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_08819564:;
    a0 = s3 + 0;
    a2 = s5 + 0;
    a3 = s4 + 0;
    t0 = fp + 0;
    t1 = sp + 80;
    f12 = f20;
    t2 = 0 + 0;
    { rv_t r_ = func_08819660(a0, a1, a2, a3, t0, t1, t2, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08819584;
L_08819584:;
    goto L_08819534;
L_0881958C:;
    a0 = s3 + 0;
    a1 = 1;
    f0 = func_0880B4DC(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08819598;
L_08819598:;
    a3 = LD32(sp+100);
    goto L_088194F4;
L_088195A0:;
    v1 = LD32(v1+23036);
    v0 = LD_U8(v1+132);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_08819498; }
    goto L_088195B0;
L_088195B0:;
    a0 = LD32(s3+316);
    cnd_ = a0 != 0;
    s2 = LD32(v1+128);
    if (cnd_) { goto L_08819618; }
    goto L_088195BC;
L_088195BC:;
    v0 = LD32(s3+232);
    goto L_088195C0;
L_088195C0:;
    cnd_ = s2 == v0;
    v1 = LD32(sp+104);
    if (cnd_) { goto L_08819494; }
    goto L_088195C8;
L_088195C8:;
    cnd_ = v1 == 0;
    a0 = LD32(sp+108);
    if (cnd_) { goto L_088195FC; }
    goto L_088195D0;
L_088195D0:;
    cnd_ = a0 == 0;
    a1 = LD32(sp+96);
    if (cnd_) { goto L_088195E0; }
    goto L_088195D8;
L_088195D8:;
    s4 = s4 | 0x1;
    goto L_08819494;
L_088195E0:;
    a0 = s3 + 0;
    a2 = s5 + 0;
    { rv_t r_ = func_08809820(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088195EC;
L_088195EC:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_08819498; }
    goto L_088195F4;
L_088195F4:;
    s4 = s4 | 0x1;
    goto L_08819494;
L_088195FC:;
    a0 = sp + 80;
    f12 = f20;
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08819608;
L_08819608:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_08819498; }
    goto L_08819610;
L_08819610:;
    a0 = LD32(sp+108);
    goto L_088195D0;
L_08819618:;
    { u64 r_ = func_08AA3390(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08819620;
L_08819620:;
    goto L_088195C0;
L_08819628:;
    v0 = LD32(s6+23044);
    cnd_ = s0 == v0;
    v1 = D_08B159FC - (23036);
    if (cnd_) { goto L_088195A0; }
    goto L_08819634;
L_08819634:;
    v0 = s7 << (s0 & 31);
    a0 = D_08B230A8 - (12456);
    ST8(a0+12456, v0);
    v0 = D_08B230AC - (12460);
    a3 = D_08B15A0C - (23052);
    v0 = v0 + 12460;
    ST8(a3+23052, s7);
    ST32(v1+23036, s1);
    ST32(s6+23044, s0);
    ST8(v0+4, s7);
    goto L_088195A0;
}

/* 08819660 */
rv_t func_08819660(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08819660:;
    sp = sp - 128;
    v0 = D_08B2C222 - (-15838);
    t2 = t2 & 0xff;
    s3 = t1 + 0;
    s2 = a3 + 0;
    s1 = t0 + 0;
    s0 = a0 + 0;
    v1 = LD_U8(v0-15838);
    cnd_ = v1 == 0;
    f20 = f12;
    if (cnd_) { goto L_08819780; }
    goto L_088196A0;
L_088196A0:;
    cnd_ = t2 == 0;
    v0 = D_08B2C230 - (-15824);
    if (cnd_) { goto L_0881976C; }
    goto L_088196A8;
L_088196A8:;
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+12));
    f2 = BITSF(LD32(a2+24));
    ST32(sp+64, FBITS(f0));
    v0 = D_08B221C0 - (8640);
    t2 = v0 + 8640;
    ST32(sp+68, FBITS(f1));
    t3 = a0 + 112;
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, 0);
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+16));
    f2 = BITSF(LD32(a2+28));
    f3 = BITSF(LD32(a2+32));
    {u32 a_=sp+(64);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+20));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+64, FBITS(f0));
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f3));
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    {u32 a_=sp+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    {u32 a_=v0+(8640);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v0 = D_08AEB5F0 - (-18960);
    f0 = BITSF(LD32(v0-18960));
    {u32 a_=t2+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = D_08B21188 - (4488);
    ST32(sp+76, FBITS(f0));
    {u32 a_=t2+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=t2+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(a0+16);
    ST32(v0+4488, t3);
    v0 = D_08B21184 - (4484);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(v0+4484, v1);
    v0 = D_08B2C230 - (-15824);
    goto L_0881976C;
L_0881976C:;
    v1 = LD_U8(v0-15824);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088197A0; }
    goto L_08819778;
L_08819778:;
    { u64 r_ = func_088CFC08(a0, a1, a2, a3, t0, t1, t2, t3, f12, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08819780;
L_08819780:;
    goto L_08819784;
L_08819784:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_088197A0:;
    { rv_t r_ = func_08817FC8(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088197A8;
L_088197A8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08819784; }
    goto L_088197B0;
L_088197B0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08809FD0(a0, a1, 0, 0, 0);
    goto L_088197BC;
L_088197BC:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    v0 = D_08B22E04 - (11780);
    if (cnd_) { goto L_08819824; }
    goto L_088197D0;
L_088197D0:;
    v0 = D_08B22E00 - (11776);
    v0 = LD32(v0+11776);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08819808; }
    goto L_088197E0;
L_088197E0:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    f12 = f20;
    f0 = func_08966298(a0, a1, a2, a3, f12);
    goto L_088197F4;
L_088197F4:;
    v1 = D_08B2C200 - (-15872);
    goto L_088197F8;
L_088197F8:;
    v0 = LD32(v1-15872);
    v0 = v0 + 1;
    ST32(v1-15872, v0);
    goto L_08819780;
L_08819808:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881981C;
L_0881981C:;
    v1 = D_08B2C200 - (-15872);
    goto L_088197F8;
L_08819824:;
    v0 = LD32(v0+11780);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08819858; }
    goto L_08819830;
L_08819830:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    f12 = f20;
    f0 = func_0896637C(a0, a1, a2, a3, f12);
    goto L_08819844;
L_08819844:;
    v1 = D_08B2C204 - (-15868);
    goto L_08819848;
L_08819848:;
    v0 = LD32(v1-15868);
    v0 = v0 + 1;
    ST32(v1-15868, v0);
    goto L_08819780;
L_08819858:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881986C;
L_0881986C:;
    v1 = D_08B2C204 - (-15868);
    goto L_08819848;
}

/* 08819874 */
void func_08819874(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08819874:;
    sp = sp - 16;
    func_08966364();
    goto L_08819884;
L_08819884:;
    func_088F3F24();
    goto L_0881988C;
L_0881988C:;
    sp = sp + 16;
    return;
}

/* 08819898 */
void func_08819898(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08819898:;
    sp = sp - 16;
    func_0896636C();
    goto L_088198A8;
L_088198A8:;
    func_088F3F34();
    goto L_088198B0;
L_088198B0:;
    sp = sp + 16;
    return;
}

/* 088198BC */
void func_088198BC(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088198BC:;
    sp = sp - 16;
    func_08966374();
    goto L_088198CC;
L_088198CC:;
    func_088F3F2C();
    goto L_088198D4;
L_088198D4:;
    sp = sp + 16;
    return;
}

/* 088198E0 */
void func_088198E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088198E0:;
    v0 = D_08B2118C - (4492);
    a2 = LD_U8(v0+4492);
    v0 = D_08B211C0 - (4544);
    v0 = v0 + 4544;
    v1 = a1 << 6;
    t0 = D_08B221C0 - (8640);
    v1 = v1 + v0;
    sp = sp - 16;
    a3 = t0 + 8640;
    cnd_ = a2 == 0;
    v0 = v1 + 48;
    if (cnd_) { goto L_08819930; }
    goto L_0881990C;
L_0881990C:;
    f0 = BITSF(LD32(v1+48));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    ST32(a0, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    goto L_08819924;
L_08819924:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
L_08819930:;
    {u32 a_=t0+(8640);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=v1+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;o0+=v[28]*t3;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;o1+=v[29]*t3;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;o2+=v[30]*t3;float o3=0;o3+=v[19]*t0;o3+=v[23]*t1;o3+=v[27]*t2;o3+=v[31]*t3;v[0]=o0;v[1]=o1;v[2]=o2;v[3]=o3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    goto L_08819924;
}

/* 08819968 */
u64 func_08819968(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08819968:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    v0 = a1 < 0x1u;
    v1 = a0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = a1 < 0x1u;
    if (cnd_) { goto L_088199A0; }
    goto L_08819984;
L_08819984:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08819990;
L_08819990:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08819990; }
    goto L_08819998;
L_08819998:;
    v0 = a1 < 0x1u;
    v1 = a0 < 0x1u;
    goto L_088199A0;
L_088199A0:;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = a1 < 0x1u;
    if (cnd_) { goto L_088199C4; }
    goto L_088199AC;
L_088199AC:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 32;
    goto L_088199B8;
L_088199B8:;
    cnd_ = v0 != v1;
    v0 = v0 - 32;
    if (cnd_) { goto L_088199B8; }
    goto L_088199C0;
L_088199C0:;
    v0 = a1 < 0x1u;
    goto L_088199C4;
L_088199C4:;
    v1 = a0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088199E8; }
    goto L_088199D4;
L_088199D4:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 32;
    goto L_088199E0;
L_088199E0:;
    cnd_ = v0 != v1;
    if (cnd_) { v0 = v0 - 32; goto L_088199E0; }
    goto L_088199E8;
L_088199E8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088199F0 */
rv_t func_088199F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088199F0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08819968(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08819A04;
L_08819A04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08819A10 */
rv_t func_08819A10(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08819A10:;
    sp = sp - 32;
    s0 = a0 + 0;
    v1 = s0 + 4;
    a0 = 0 + 0;
    s1 = a1 + 0;
    goto L_08819A30;
L_08819A30:;
    a0 = a0 + 1;
    v0 = a0 < 0x2u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08819A30; }
    goto L_08819A44;
L_08819A44:;
    v0 = LD_U16(s0);
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08819B08; }
    goto L_08819A50;
L_08819A50:;
    a0 = s0 + 0;
    v0 = func_08819B18(a0, t1, t2, t3);
    goto L_08819A58;
L_08819A58:;
    v0 = D_08AEB5F8 - (-18952);
    f0 = BITSF(LD32(v0-18952));
    v1 = s0 + 12;
    v0 = s0 + 76;
    a1 = s0 + 36;
    a2 = s0 + 48;
    a3 = s0 + 64;
    ST32(s0, 0);
    a0 = s1 << 3;
    a0 = a0 - s1;
    ST32(v1+4, 0);
    a0 = a0 << 2;
    ST32(v1+20, 0);
    ST32(v1+16, 0);
    ST32(v1+12, 0);
    ST32(v1+8, 0);
    ST32(s0+12, 0);
    ST32(s0+36, 0);
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(a2+4, 0);
    ST32(a2+8, FBITS(f0));
    ST32(s0+48, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    ST32(v0+12, FBITS(f0));
    ST32(s0+76, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, FBITS(f0));
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08819AE4;
L_08819AE4:;
    cnd_ = s1 == 0;
    v1 = s1 - 1;
    if (cnd_) { goto L_08819AFC; }
    goto L_08819AEC;
L_08819AEC:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08819AF4;
L_08819AF4:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08819AF4; }
    goto L_08819AFC;
L_08819AFC:;
    ST16(s0, s1);
    ST32(s0+92, v0);
    goto L_08819B08;
L_08819B08:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08819B18 */
u32 func_08819B18(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08819B18:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+92);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08819B4C; }
    goto L_08819B34;
L_08819B34:;
    ST32(s0, 0);
    goto L_08819B38;
L_08819B38:;
    ST32(s0+92, 0);
    sp = sp + 16;
    return v0;
L_08819B4C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08819B54;
L_08819B54:;
    ST32(s0, 0);
    goto L_08819B38;
}

/* 08819B5C */
rv_t func_08819B5C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08819B5C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+92);
    cnd_ = a0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08819CF4; }
    goto L_08819B7C;
L_08819B7C:;
    v0 = LD_U16(s0);
    goto L_08819B80;
L_08819B80:;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08819B90;
L_08819B90:;
    t3 = v0 + 0;
    v0 = LD_U16(s0);
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_08819BB0; }
    goto L_08819BA0;
L_08819BA0:;
    v0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08819BA8;
L_08819BA8:;
    cnd_ = v1 != v0;
    v1 = v1 - 1;
    if (cnd_) { goto L_08819BA8; }
    goto L_08819BB0;
L_08819BB0:;
    v0 = LD32(s0);
    a0 = s0 + 36;
    a1 = s1 + 36;
    ST32(s1, v0);
    a2 = s0 + 48;
    a3 = s1 + 48;
    v0 = LD32(s0+12);
    t0 = s0 + 64;
    t1 = s1 + 64;
    ST32(s1+12, v0);
    t2 = 0 + 0;
    v1 = LD32(s0+16);
    ST32(s1+92, t3);
    ST32(s1+16, v1);
    v0 = LD32(s0+20);
    ST32(s1+20, v0);
    v1 = LD32(s0+24);
    ST32(s1+24, v1);
    v0 = LD32(s0+28);
    ST32(s1+28, v0);
    v1 = LD32(s0+32);
    ST32(s1+32, v1);
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(s0+36));
    f0 = BITSF(LD32(a0+4));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(s1+36, FBITS(f2));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(s0+48));
    f0 = BITSF(LD32(a2+4));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    ST32(s1+48, FBITS(f2));
    f0 = BITSF(LD32(s0+60));
    ST32(s1+60, FBITS(f0));
    f2 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(s0+64));
    f1 = BITSF(LD32(t0+4));
    ST32(s1+64, FBITS(f0));
    ST32(t1+4, FBITS(f1));
    ST32(t1+8, FBITS(f2));
    v1 = LD32(s0+76);
    a0 = LD_U16(s1);
    ST32(s1+76, v1);
    v0 = LD32(s0+80);
    ST32(s1+80, v0);
    v1 = LD32(s0+84);
    ST32(s1+84, v1);
    v0 = LD32(s0+88);
    cnd_ = a0 == 0;
    ST32(s1+88, v0);
    if (cnd_) { goto L_08819CE0; }
    goto L_08819C80;
L_08819C80:;
    a2 = LD32(s0+92);
    t1 = t3 + 0;
    a3 = 0 + 0;
    goto L_08819C8C;
L_08819C8C:;
    a1 = a2 + a3;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    a0 = t1 + a3;
    ST32(a0, FBITS(f0));
    t2 = t2 + 1;
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    v0 = LD32(a1+12);
    ST32(a0+12, v0);
    v1 = LD32(a1+16);
    ST32(a0+16, v1);
    v0 = LD32(a1+20);
    ST32(a0+20, v0);
    v1 = LD32(a1+24);
    ST32(a0+24, v1);
    v0 = LD_U16(s1);
    v0 = t2 < v0;
    cnd_ = v0 != 0;
    a3 = a3 + 28;
    if (cnd_) { goto L_08819C8C; }
    goto L_08819CE0;
L_08819CE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08819CF4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08819CFC;
L_08819CFC:;
    v0 = LD_U16(s0);
    goto L_08819B80;
}

/* 08819D04 */
rv_t func_08819D04(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr122 = v[122], vr123 = v[123], vr124 = v[124];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08819D04:;
    t4 = a3 + 0;
    t3 = a0 + 0;
    a3 = LD32(a0+92);
    v0 = a1 << 3;
    a0 = LD32(t4+92);
    v0 = v0 - a1;
    v0 = v0 << 2;
    v1 = a2 < a1;
    sp = sp - 80;
    t0 = a0 + v0;
    cnd_ = v1 != 0;
    a3 = a3 + v0;
    if (cnd_) { goto L_08819EF0; }
    goto L_08819D34;
L_08819D34:;
    v0 = D_08B45ACC - (23244);
    t6 = v0 + 23244;
    t5 = 1;
    goto L_08819D40;
L_08819D40:;
    v0 = a1 >> 5;
    v0 = v0 << 2;
    t1 = v0 + t4;
    v0 = v0 + t3;
    v1 = LD32(v0+4);
    a0 = a1 & 0x1f;
    a0 = t5 << (a0 & 31);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = a1 + 1; goto L_08819EE0; }
    goto L_08819D68;
L_08819D68:;
    v0 = LD32(t1+4);
    v1 = v0 | a0;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    t2 = t0 + 12;
    if (cnd_) { goto L_08819EF8; }
    goto L_08819D7C;
L_08819D7C:;
    f3 = BITSF(LD32(a3));
    f4 = BITSF(LD32(a3+4));
    f5 = BITSF(LD32(a3+8));
    f3 = f3 * f12;
    f4 = f4 * f12;
    f5 = f5 * f12;
    v0 = FBITS(f12);
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f0 = f0 + f3;
    f1 = f1 + f4;
    f2 = f2 + f5;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(t0, FBITS(f0));
    ST32(t0+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(t0+4, FBITS(f1));
    {vr112=BITSF(LD32(t6+(0)));}
    {vr113=BITSF(LD32(t6+(4)));}
    {vr114=BITSF(LD32(t6+(8)));}
    {vr115=BITSF(LD32(t6+(12)));}
    {vr116=BITSF(LD32(a3+(12)));}
    {vr117=BITSF(LD32(a3+(16)));}
    {vr118=BITSF(LD32(a3+(20)));}
    {vr119=BITSF(LD32(a3+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[120]=sum;}
    {vr124=BITSF(v0);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=v[120];float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;v[125]=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[125];vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(48);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(60);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    a0 = LD32(t2+12);
    v0 = LD32(t0+12);
    v1 = LD32(t2+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(t2+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[11]=BITSF(a0);}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+60);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[4]);}
    ST32(sp+64, v0);
    {v0=FBITS(v[7]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f2 = BITSF(v0);
    a0 = LD32(sp+64);
    {v0=FBITS(v[6]);}
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, v0);
    v0 = LD32(sp+68);
    ST32(sp+76, FBITS(f3));
    ST32(sp+32, a0);
    ST32(sp+36, v0);
    v1 = LD32(sp+72);
    v0 = LD32(sp+76);
    ST32(sp+40, v1);
    ST32(sp+44, v0);
    ST32(t0+12, a0);
    v0 = LD32(sp+36);
    ST32(t0+16, v0);
    v1 = LD32(sp+40);
    ST32(t0+20, v1);
    v0 = LD32(sp+44);
    ST32(t0+24, v0);
    goto L_08819EDC;
L_08819EDC:;
    a1 = a1 + 1;
    goto L_08819EE0;
L_08819EE0:;
    v0 = a2 < a1;
    a3 = a3 + 28;
    cnd_ = v0 == 0;
    t0 = t0 + 28;
    if (cnd_) { goto L_08819D40; }
    goto L_08819EF0;
L_08819EF0:;
    sp = sp + 80;
    { v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[122]=vr122;v[123]=vr123;v[124]=vr124;return (rv_t){ v0, v1, f0 }; }
L_08819EF8:;
    f0 = BITSF(LD32(a3));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    ST32(t0, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f2));
    v0 = LD32(a3+12);
    ST32(t1+4, v1);
    ST32(t0+12, v0);
    v1 = LD32(a3+16);
    ST32(t0+16, v1);
    v0 = LD32(a3+20);
    ST32(t0+20, v0);
    v1 = LD32(a3+24);
    ST32(t0+24, v1);
    goto L_08819EDC;
    v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[122]=vr122;v[123]=vr123;v[124]=vr124;
}

/* 08819F38 */
rv_t func_08819F38(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08819F38:;
    t4 = a3 + 0;
    t3 = a0 + 0;
    a3 = LD32(a0+92);
    v0 = a1 << 3;
    a0 = LD32(t4+92);
    v0 = v0 - a1;
    v0 = v0 << 2;
    v1 = a2 < a1;
    sp = sp - 16;
    t0 = a0 + v0;
    cnd_ = v1 != 0;
    a3 = a3 + v0;
    if (cnd_) { goto L_0881A0F4; }
    goto L_08819F68;
L_08819F68:;
    v1 = D_08AEB5FC - (-18948);
    f0 = BITSF(LD32(v1-18948));
    v0 = D_08AEB600 - (-18944);
    t6 = LD32(v0-18944);
    f6 = f0 - f12;
    t5 = 1;
    goto L_08819F80;
L_08819F80:;
    v0 = a1 >> 5;
    v0 = v0 << 2;
    t1 = v0 + t4;
    v0 = v0 + t3;
    v1 = LD32(v0+4);
    a0 = a1 & 0x1f;
    a0 = t5 << (a0 & 31);
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = a1 + 1; goto L_0881A0E4; }
    goto L_08819FA8;
L_08819FA8:;
    v0 = LD32(t1+4);
    v1 = v0 | a0;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    t2 = t0 + 12;
    if (cnd_) { goto L_0881A0FC; }
    goto L_08819FBC;
L_08819FBC:;
    f4 = BITSF(LD32(t0));
    f5 = BITSF(LD32(a3));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(a3+4));
    f0 = BITSF(LD32(t0+8));
    f3 = BITSF(LD32(a3+8));
    f4 = f4 * f6;
    f5 = f5 * f12;
    f1 = f1 * f6;
    f2 = f2 * f12;
    f0 = f0 * f6;
    f3 = f3 * f12;
    f4 = f4 + f5;
    f1 = f1 + f2;
    v1 = LD32(t0+12);
    f0 = f0 + f3;
    ST32(t0, FBITS(f4));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    ST32(sp, v1);
    v0 = LD32(t2+4);
    ST32(sp+4, v0);
    v1 = LD32(t2+8);
    ST32(sp+8, v1);
    v0 = LD32(t2+12);
    ST32(sp+12, v0);
    v0 = FBITS(f12);
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
    {v[116]=BITSF(LD32(a3+(12)));}
    {v[117]=BITSF(LD32(a3+(16)));}
    {v[118]=BITSF(LD32(a3+(20)));}
    {v[119]=BITSF(LD32(a3+(24)));}
    {v[124]=BITSF(v0);}
    {v[127]=BITSF(t6);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881A094; }
    goto L_0881A074;
L_0881A074:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_0881A094;
L_0881A094:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881A0A8; }
    goto L_0881A0A0;
L_0881A0A0:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_0881A0A8;
L_0881A0A8:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881A0D0; }
    goto L_0881A0C4;
L_0881A0C4:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_0881A0D0;
L_0881A0D0:;
    {ST32(t0+(12),FBITS(v[120]));}
    {ST32(t0+(16),FBITS(v[121]));}
    {ST32(t0+(20),FBITS(v[122]));}
    {ST32(t0+(24),FBITS(v[123]));}
    goto L_0881A0E0;
L_0881A0E0:;
    a1 = a1 + 1;
    goto L_0881A0E4;
L_0881A0E4:;
    v0 = a2 < a1;
    a3 = a3 + 28;
    cnd_ = v0 == 0;
    t0 = t0 + 28;
    if (cnd_) { goto L_08819F80; }
    goto L_0881A0F4;
L_0881A0F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881A0FC:;
    f0 = BITSF(LD32(a3));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    ST32(t0, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f2));
    v0 = LD32(a3+12);
    ST32(t1+4, v1);
    ST32(t0+12, v0);
    v1 = LD32(a3+16);
    ST32(t0+16, v1);
    v0 = LD32(a3+20);
    ST32(t0+20, v0);
    v1 = LD32(a3+24);
    ST32(t0+24, v1);
    goto L_0881A0E0;
}
