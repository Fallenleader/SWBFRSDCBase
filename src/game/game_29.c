#include "game.h"

/* 08A9ACB4 */
void func_08A9ACB4(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9ACB4:;
    sp = sp - 48;
    s4 = D_08C38A90 - (-30064);
    s3 = 1;
    s2 = a0 + 0;
    s1 = s4 - 30064;
    f21 = BITSF(LD32(a0+8));
    s0 = LD32(s1+8);
    f12 = f21;
    f0 = func_08A9F454(f12);
    goto L_08A9ACF8;
L_08A9ACF8:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9AD04;
L_08A9AD04:;
    f7 = BITSF(LD32(s0+20));
    f8 = BITSF(LD32(s0+24));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0+12));
    f6 = BITSF(LD32(s0+16));
    f18 = BITSF(LD32(s0+28));
    f9 = f4 * f0;
    f13 = f7 * f20;
    f19 = f18 * f20;
    f11 = f2 * f0;
    f16 = f8 * f20;
    f10 = f3 * f0;
    f15 = f4 * f20;
    f14 = f6 * f20;
    f17 = f1 * f20;
    f4 = f18 * f0;
    f12 = f1 * f0;
    f21 = f3 * f20;
    f1 = f6 * f0;
    f3 = f8 * f0;
    f6 = f2 * f20;
    f2 = f7 * f0;
    a3 = LD32(s4-30064);
    f18 = f17 + f1;
    f20 = f21 + f3;
    f17 = f6 + f2;
    f21 = f15 + f4;
    f0 = f14 - f12;
    f4 = f13 - f11;
    f14 = f16 - f10;
    f13 = f19 - f9;
    a2 = a3 + s1;
    ST32(s0, FBITS(f18));
    ST32(s0+28, FBITS(f13));
    ST32(s0+4, FBITS(f17));
    ST32(s0+20, FBITS(f4));
    ST32(s0+24, FBITS(f14));
    ST32(s0+8, FBITS(f20));
    ST32(s0+12, FBITS(f21));
    ST32(s0+16, FBITS(f0));
    ST8(a2+4, s3);
    f21 = BITSF(LD32(s2+4));
    s0 = LD32(s1+8);
    f12 = f21;
    f0 = func_08A9F454(f12);
    goto L_08A9ADC0;
L_08A9ADC0:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9ADCC;
L_08A9ADCC:;
    f8 = BITSF(LD32(s0+12));
    f6 = BITSF(LD32(s0+32));
    f7 = BITSF(LD32(s0+36));
    f4 = BITSF(LD32(s0+44));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f15 = BITSF(LD32(s0+40));
    f9 = f8 * f0;
    f16 = f4 * f20;
    f12 = f6 * f20;
    f11 = f2 * f0;
    f14 = f7 * f20;
    f10 = f3 * f0;
    f21 = f1 * f0;
    f13 = f15 * f20;
    f19 = f1 * f20;
    f18 = f2 * f20;
    f1 = f6 * f0;
    f2 = f7 * f0;
    f17 = f3 * f20;
    f3 = f15 * f0;
    f15 = f8 * f20;
    f20 = f4 * f0;
    f5 = f19 - f1;
    f0 = f10 + f13;
    f19 = f18 - f2;
    f13 = f9 + f16;
    f18 = f17 - f3;
    a1 = LD32(s4-30064);
    f17 = f15 - f20;
    f20 = f21 + f12;
    f21 = f11 + f14;
    v1 = a1 + s1;
    ST32(s0, FBITS(f5));
    ST32(s0+44, FBITS(f13));
    ST32(s0+4, FBITS(f19));
    ST32(s0+8, FBITS(f18));
    ST32(s0+12, FBITS(f17));
    ST32(s0+32, FBITS(f20));
    ST32(s0+36, FBITS(f21));
    ST32(s0+40, FBITS(f0));
    ST8(v1+4, s3);
    f21 = BITSF(LD32(s2));
    s2 = LD32(s1+8);
    f12 = f21;
    f0 = func_08A9F454(f12);
    goto L_08A9AE88;
L_08A9AE88:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9AE94;
L_08A9AE94:;
    f1 = BITSF(LD32(s2+16));
    f2 = BITSF(LD32(s2+20));
    f3 = BITSF(LD32(s2+24));
    f4 = BITSF(LD32(s2+28));
    f7 = BITSF(LD32(s2+36));
    f19 = BITSF(LD32(s2+44));
    f6 = BITSF(LD32(s2+32));
    f8 = BITSF(LD32(s2+40));
    f21 = f19 * f20;
    f12 = f1 * f0;
    f13 = f7 * f20;
    f11 = f2 * f0;
    f18 = f1 * f20;
    f17 = f2 * f20;
    f1 = f6 * f0;
    f2 = f7 * f0;
    f15 = f4 * f20;
    f7 = f3 * f20;
    f9 = f4 * f0;
    f14 = f6 * f20;
    f16 = f8 * f20;
    f10 = f3 * f0;
    f20 = f19 * f0;
    f3 = f8 * f0;
    f19 = f18 + f1;
    f4 = f21 - f9;
    f18 = f17 + f2;
    a0 = LD32(s4-30064);
    f17 = f7 + f3;
    f2 = f14 - f12;
    f3 = f15 + f20;
    f1 = f13 - f11;
    f0 = f16 - f10;
    v1 = a0 + s1;
    ST32(s2+16, FBITS(f19));
    ST32(s2+44, FBITS(f4));
    ST32(s2+20, FBITS(f18));
    ST32(s2+24, FBITS(f17));
    ST32(s2+28, FBITS(f3));
    ST32(s2+32, FBITS(f2));
    ST32(s2+36, FBITS(f1));
    ST32(s2+40, FBITS(f0));
    ST8(v1+4, s3);
    sp = sp + 48;
    return;
}

/* 08A9AF68 */
void func_08A9AF68(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
L_08A9AF68:;
    a1 = D_08C38A90 - (-30064);
    t1 = a1 - 30064;
    a3 = LD32(t1+8);
    f10 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0));
    f11 = BITSF(LD32(a3+4));
    f8 = BITSF(LD32(a3+20));
    f14 = BITSF(LD32(a3+8));
    f13 = BITSF(LD32(a3+24));
    f9 = BITSF(LD32(a3+12));
    f12 = BITSF(LD32(a3+28));
    f2 = BITSF(LD32(a3));
    f5 = BITSF(LD32(a3+16));
    f17 = f12 * f10;
    f0 = f13 * f10;
    f15 = f9 * f4;
    f12 = f5 * f10;
    f16 = f11 * f4;
    f19 = f14 * f4;
    f11 = f8 * f10;
    f18 = f2 * f4;
    f8 = BITSF(LD32(a0+8));
    f7 = BITSF(LD32(a3+32));
    f1 = BITSF(LD32(a3+36));
    f14 = BITSF(LD32(a3+40));
    f6 = BITSF(LD32(a3+44));
    f13 = f18 + f12;
    f9 = f7 * f8;
    f12 = f6 * f8;
    f18 = f16 + f11;
    f11 = f15 + f17;
    f16 = f19 + f0;
    f17 = f14 * f8;
    f19 = f1 * f8;
    f10 = f11 + f12;
    f14 = f13 + f9;
    f7 = f16 + f17;
    f6 = f18 + f19;
    f15 = BITSF(LD32(a3+48));
    f13 = BITSF(LD32(a3+52));
    f12 = BITSF(LD32(a3+56));
    f11 = BITSF(LD32(a3+60));
    f9 = f14 + f15;
    f8 = f6 + f13;
    f0 = f7 + f12;
    f1 = f10 + f11;
    t0 = LD32(a1-30064);
    v1 = 1;
    ST32(a3+48, FBITS(f9));
    a2 = t0 + t1;
    ST32(a3+60, FBITS(f1));
    ST32(a3+52, FBITS(f8));
    ST32(a3+56, FBITS(f0));
    ST8(a2+4, v1);
    return;
}

/* 08A9B044 */
void func_08A9B044(float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9B044:;
    t3 = D_08AF097C - (2428);
    f2 = BITSF(LD32(t3+2428));
    t2 = D_08AF0980 - (2432);
    f3 = BITSF(LD32(t2+2432));
    f12 = f12 * f2;
    f1 = f15 - f14;
    f13 = f3 / f13;
    t1 = D_08AF0984 - (2436);
    t0 = D_08AF098C - (2444);
    a1 = D_08AF0988 - (2440);
    sp = sp - 32;
    a2 = D_08C38A90 - (-30064);
    a0 = a2 - 30064;
    v0 = 1;
    a3 = LD32(a0+8);
    f6 = BITSF(LD32(a3+32));
    f7 = BITSF(LD32(a3+36));
    f8 = BITSF(LD32(a3+40));
    f5 = BITSF(LD32(a3+44));
    f9 = BITSF(LD32(a3));
    f2 = f3 / f12;
    f10 = BITSF(LD32(a3+4));
    f11 = BITSF(LD32(a3+8));
    f16 = BITSF(LD32(a3+12));
    f17 = BITSF(LD32(a3+16));
    f18 = BITSF(LD32(a3+20));
    f19 = BITSF(LD32(a3+24));
    f20 = BITSF(LD32(a3+28));
    f22 = BITSF(LD32(a3+48));
    f23 = BITSF(LD32(a3+52));
    f24 = BITSF(LD32(a3+56));
    f21 = BITSF(LD32(a3+60));
    f4 = f3 / f1;
    f1 = BITSF(LD32(t1+2436));
    f3 = f12 * f12;
    f0 = f12 * f1;
    f1 = f15 * f14;
    f15 = f15 + f14;
    f12 = f12 * f3;
    f3 = f2 - f0;
    f0 = BITSF(LD32(t0+2444));
    f15 = BITSF(FBITS(f15) ^ 0x80000000u);
    f14 = f1 * f0;
    f0 = BITSF(LD32(a1+2440));
    f12 = f12 * f0;
    f1 = f14 * f4;
    f14 = f15 * f4;
    f0 = f3 - f12;
    f2 = f7 * f1;
    f3 = f5 * f1;
    f12 = f6 * f14;
    f4 = f0 * f13;
    f20 = f20 * f0;
    f17 = f17 * f0;
    f18 = f18 * f0;
    f16 = f16 * f4;
    f9 = f9 * f4;
    f10 = f10 * f4;
    f11 = f11 * f4;
    f19 = f19 * f0;
    f4 = f7 * f14;
    f0 = f6 * f1;
    f5 = f5 * f14;
    f1 = f8 * f1;
    f8 = f8 * f14;
    f13 = f12 - f22;
    f14 = f5 - f21;
    f12 = f4 - f23;
    ST32(a3, FBITS(f9));
    f4 = f8 - f24;
    ST32(a3+4, FBITS(f10));
    ST32(a3+8, FBITS(f11));
    ST32(a3+12, FBITS(f16));
    ST32(a3+16, FBITS(f17));
    ST32(a3+20, FBITS(f18));
    ST32(a3+24, FBITS(f19));
    v1 = LD32(a2-30064);
    ST32(a3+28, FBITS(f20));
    a1 = v1 + a0;
    ST32(a3+48, FBITS(f0));
    ST32(a3+52, FBITS(f2));
    ST32(a3+56, FBITS(f1));
    ST32(a3+60, FBITS(f3));
    ST32(a3+44, FBITS(f14));
    ST32(a3+32, FBITS(f13));
    ST32(a3+36, FBITS(f12));
    ST32(a3+40, FBITS(f4));
    ST8(a1+4, v0);
    sp = sp + 32;
    return;
}

/* 08A9B1D4 */
void func_08A9B1D4(void)
{
    u32 v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9B1D4:;
    a2 = D_08C38A90 - (-30064);
    a0 = LD32(a2-30064);
    sp = sp - 16;
    a1 = a2 - 30064;
    a2 = a0 + a1;
    t0 = LD_U8(a2+4);
    v1 = a0 << 2;
    cnd_ = t0 != 0;
    a3 = v1 + a1;
    if (cnd_) { goto L_08A9B208; }
    goto L_08A9B1FC;
L_08A9B1FC:;
    goto L_08A9B200;
L_08A9B200:;
    sp = sp + 16;
    return;
L_08A9B208:;
    t0 = LD32(a1+8);
    ST8(a2+4, 0);
    a1 = t0 + 0;
    ST32(a3+12, t0);
    func_08A992E0(a0, a1);
    goto L_08A9B21C;
L_08A9B21C:;
    goto L_08A9B200;
}

/* 08A9B224 */
void func_08A9B224(u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9B224:;
    v1 = D_08C38A90 - (-30064);
    sp = sp - 16;
    a0 = LD32(v1-30064);
    s0 = v1 - 30064;
    v0 = a0 + s0;
    a1 = LD_U8(v0+4);
    cnd_ = a1 == 0;
    if (cnd_) { a3 = LD_U8(s0+4); goto L_08A9B260; }
    goto L_08A9B24C;
L_08A9B24C:;
    a1 = LD32(s0+8);
    a2 = a0 << 2;
    a0 = a2 + s0;
    ST32(a0+12, a1);
    a3 = LD_U8(s0+4);
    goto L_08A9B260;
L_08A9B260:;
    cnd_ = a3 != 0;
    if (cnd_) { a1 = LD32(s0+12); goto L_08A9B2DC; }
    goto L_08A9B268;
L_08A9B268:;
    t0 = LD_U8(s0+7);
    goto L_08A9B26C;
L_08A9B26C:;
    cnd_ = t0 != 0;
    if (cnd_) { a1 = LD32(s0+24); goto L_08A9B2CC; }
    goto L_08A9B274;
L_08A9B274:;
    t1 = LD_U8(s0+5);
    goto L_08A9B278;
L_08A9B278:;
    cnd_ = t1 != 0;
    if (cnd_) { a1 = LD32(s0+16); goto L_08A9B2BC; }
    goto L_08A9B280;
L_08A9B280:;
    t2 = LD_U8(s0+6);
    goto L_08A9B284;
L_08A9B284:;
    cnd_ = t2 != 0;
    if (cnd_) { a1 = LD32(s0+20); goto L_08A9B2AC; }
    goto L_08A9B28C;
L_08A9B28C:;
    ST8(s0+7, 0);
    goto L_08A9B290;
L_08A9B290:;
    ST8(s0+4, 0);
    ST8(s0+5, 0);
    ST8(s0+6, 0);
    sp = sp + 16;
    return;
L_08A9B2AC:;
    a0 = 2;
    func_08A992E0(a0, a1);
    goto L_08A9B2B4;
L_08A9B2B4:;
    ST8(s0+7, 0);
    goto L_08A9B290;
L_08A9B2BC:;
    a0 = 1;
    func_08A992E0(a0, a1);
    goto L_08A9B2C4;
L_08A9B2C4:;
    t2 = LD_U8(s0+6);
    goto L_08A9B284;
L_08A9B2CC:;
    a0 = 3;
    func_08A992E0(a0, a1);
    goto L_08A9B2D4;
L_08A9B2D4:;
    t1 = LD_U8(s0+5);
    goto L_08A9B278;
L_08A9B2DC:;
    a0 = 0 + 0;
    func_08A992E0(a0, a1);
    goto L_08A9B2E4;
L_08A9B2E4:;
    t0 = LD_U8(s0+7);
    goto L_08A9B26C;
}

/* 08A9B2EC */
void func_08A9B2EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9B2EC:;
    sp = sp - 32;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 & 0xffff;
    func_08A9B224(a3);
    goto L_08A9B320;
L_08A9B320:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9B338;
L_08A9B338:;
    sp = sp + 32;
    return;
}

/* 08A9B358 */
void func_08A9B358(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9B358:;
    sp = sp - 32;
    s5 = t1 + 0;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 & 0xffff;
    func_08A9B224(a3);
    goto L_08A9B394;
L_08A9B394:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    t1 = s5 + 0;
    func_08A97BB8(a0, a1, a2, a3, t0, t1);
    goto L_08A9B3B0;
L_08A9B3B0:;
    sp = sp + 32;
    return;
}

/* 08A9B3D4 */
void func_08A9B3D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9B3D4:;
    sp = sp - 32;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a0 + 0;
    s1 = a2 & 0xff;
    s0 = a1 & 0xff;
    func_08A9B224(a3);
    goto L_08A9B408;
L_08A9B408:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    func_08A97CAC(a0, a1, a2, a3, t0);
    goto L_08A9B420;
L_08A9B420:;
    sp = sp + 32;
    return;
}

/* 08A9B440 */
void func_08A9B440(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9B440:;
    sp = sp - 32;
    s6 = t2 + 0;
    s5 = t1 + 0;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a0 + 0;
    s1 = a2 & 0xff;
    s0 = a1 & 0xff;
    func_08A9B224(a3);
    goto L_08A9B484;
L_08A9B484:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    t1 = s5 + 0;
    t2 = s6 + 0;
    func_08A97D84(a0, a1, a2, a3, t0, t1, t2);
    goto L_08A9B4A4;
L_08A9B4A4:;
    sp = sp + 32;
    return;
}

/* 08A9B4CC */
u32 func_08A9B4CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9B4CC:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    v0 = 255;
    v1 = a0 & 0x7;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A9B510; }
    goto L_08A9B4E8;
L_08A9B4E8:;
    v0 = 2;
    a0 = (s32)v1 < 3;
    cnd_ = v1 == v0;
    a1 = 2;
    if (cnd_) { goto L_08A9B510; }
    goto L_08A9B4F8;
L_08A9B4F8:;
    cnd_ = a0 == 0;
    a1 = 4;
    if (cnd_) { goto L_08A9B520; }
    goto L_08A9B500;
L_08A9B500:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A9B514; }
    goto L_08A9B508;
L_08A9B508:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9B510;
L_08A9B510:;
    goto L_08A9B514;
L_08A9B514:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08A9B520:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A9B510; }
    goto L_08A9B52C;
L_08A9B52C:;
    cnd_ = v1 != v0;
    a1 = 8;
    if (cnd_) { goto L_08A9B508; }
    goto L_08A9B534;
L_08A9B534:;
    goto L_08A9B514;
}

/* 08A9B53C */
u32 func_08A9B53C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9B53C:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    v0 = 255;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9B578; }
    goto L_08A9B554;
L_08A9B554:;
    a0 = a0 & 0x70;
    v0 = 32;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 33;
    if (cnd_) { goto L_08A9B5D4; }
    goto L_08A9B564;
L_08A9B564:;
    cnd_ = v0 == 0;
    v0 = 64;
    if (cnd_) { goto L_08A9B598; }
    goto L_08A9B56C;
L_08A9B56C:;
    cnd_ = a0 != 0;
    v0 = 16;
    if (cnd_) { goto L_08A9B588; }
    goto L_08A9B574;
L_08A9B574:;
    v1 = 0 + 0;
    goto L_08A9B578;
L_08A9B578:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A9B588:;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9B578; }
    goto L_08A9B590;
L_08A9B590:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9B598;
L_08A9B598:;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 65;
    if (cnd_) { goto L_08A9B5C4; }
    goto L_08A9B5A0;
L_08A9B5A0:;
    cnd_ = v0 == 0;
    v0 = 80;
    if (cnd_) { goto L_08A9B588; }
    goto L_08A9B5A8;
L_08A9B5A8:;
    v0 = 48;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A9B590; }
    goto L_08A9B5B4;
L_08A9B5B4:;
    a0 = a1 + 0;
    v0 = func_08A9B7F0(a0);
    goto L_08A9B5BC;
L_08A9B5BC:;
    v1 = v0 + 0;
    goto L_08A9B578;
L_08A9B5C4:;
    a0 = a1 + 0;
    v0 = func_08A9B7BC(a0);
    goto L_08A9B5CC;
L_08A9B5CC:;
    v1 = v0 + 0;
    goto L_08A9B578;
L_08A9B5D4:;
    a0 = a1 + 0;
    v0 = func_08A9B7F8(a0);
    goto L_08A9B5DC;
L_08A9B5DC:;
    v1 = v0 + 0;
    goto L_08A9B578;
}

/* 08A9B5E4 */
u32 func_08A9B5E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A9B5E4:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A9B5EC;
L_08A9B5EC:;
    v1 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = v1 & 0x7f;
    v0 = v0 << (a2 & 31);
    v1 = (u32)(s32)(s8)v1;
    a3 = a3 | v0;
    cnd_ = (s32)v1 < 0;
    a2 = a2 + 7;
    if (cnd_) { goto L_08A9B5EC; }
    goto L_08A9B60C;
L_08A9B60C:;
    v0 = a0 + 0;
    ST32(a1, a3);
    return v0;
}

/* 08A9B618 */
u32 func_08A9B618(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A9B618:;
    a3 = 0 + 0;
    t0 = 0 + 0;
    goto L_08A9B620;
L_08A9B620:;
    a2 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = a2 & 0x7f;
    v0 = v0 << (a3 & 31);
    v1 = (u32)(s32)(s8)a2;
    t0 = t0 | v0;
    cnd_ = (s32)v1 < 0;
    a3 = a3 + 7;
    if (cnd_) { goto L_08A9B620; }
    goto L_08A9B640;
L_08A9B640:;
    v0 = a3 < 0x20u;
    cnd_ = v0 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08A9B668; }
    goto L_08A9B64C;
L_08A9B64C:;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A9B668; }
    goto L_08A9B658;
L_08A9B658:;
    v0 = (u32)-1;
    v0 = v0 << (a3 & 31);
    t0 = t0 | v0;
    v0 = a0 + 0;
    goto L_08A9B668;
L_08A9B668:;
    ST32(a1, t0);
    return v0;
}

/* 08A9B670 */
u32 func_08A9B670(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9B670:;
    sp = sp - 48;
    v0 = 80;
    s0 = a0 & 0xff;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A9B798; }
    goto L_08A9B6A0;
L_08A9B6A0:;
    v1 = s0 & 0xf;
    v0 = v1 < 0xdu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A9B7AC; }
    goto L_08A9B6B0;
L_08A9B6B0:;
    v1 = D_08AEAA00 - (-22016);
    v1 = v1 - 22016;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A9B6C8u: goto L_08A9B6C8; case 0x08A9B72Cu: goto L_08A9B72C; case 0x08A9B744u: goto L_08A9B744; case 0x08A9B758u: goto L_08A9B758; case 0x08A9B774u: goto L_08A9B774; case 0x08A9B784u: goto L_08A9B784; case 0x08A9B7ACu: goto L_08A9B7AC; default: rs_break(0, 0x08a9b6c0); }
L_08A9B6C8:;
    a0 = a2 + 0;
    a1 = sp + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9B6D4;
L_08A9B6D4:;
    a0 = LD32(sp);
    goto L_08A9B6D8;
L_08A9B6D8:;
    a2 = v0 + 0;
    goto L_08A9B6DC;
L_08A9B6DC:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1, a0); goto L_08A9B704; }
    goto L_08A9B6E4;
L_08A9B6E4:;
    v0 = s0 & 0x70;
    a1 = a0 + s3;
    v0 = v0 ^ 0x10;
    a0 = a0 + s2;
    v1 = (u32)(s32)(s8)s0;
    cnd_ = (s32)v1 < 0;
    if (v0 != 0) a0 = a1;
    if (cnd_) { goto L_08A9B724; }
    goto L_08A9B700;
L_08A9B700:;
    ST32(s1, a0);
    goto L_08A9B704;
L_08A9B704:;
    v0 = a2 + 0;
    sp = sp + 48;
    return v0;
L_08A9B724:;
    a0 = LD32(a0);
    goto L_08A9B700;
L_08A9B72C:;
    v0 = LD_U8(a2+1);
    v1 = LD_U8(a2);
    a2 = a2 + 2;
    v0 = v0 << 8;
    a0 = v0 | v1;
    goto L_08A9B6DC;
L_08A9B744:;
    a0 = a2 + 0;
    a1 = sp + 4;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9B750;
L_08A9B750:;
    a0 = LD32(sp+4);
    goto L_08A9B6D8;
L_08A9B758:;
    v0 = LD_U8(a2+1);
    v1 = LD_U8(a2);
    a2 = a2 + 2;
    v0 = v0 << 8;
    v0 = v0 | v1;
    a0 = (u32)(s32)(s16)v0;
    goto L_08A9B6DC;
L_08A9B774:;
    a0 = LDU32(a2);
    a2 = a2 + 4;
    goto L_08A9B6DC;
L_08A9B784:;
    v0 = LDU32(a2);
    a2 = a2 + 8;
    a0 = v0 + 0;
    goto L_08A9B6DC;
L_08A9B798:;
    v0 = a2 + 3;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a0 = LD32(v0);
    a2 = v0 + 4;
    goto L_08A9B700;
L_08A9B7AC:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    v0 = func_08A9B7B4(a0); return v0;
}

/* 08A9B7B4 */
u32 func_08A9B7B4(u32 a0)
{
    u32 v0 = 0;
L_08A9B7B4:;
    v0 = LD32(a0+852);
    return v0;
}

/* 08A9B7BC */
u32 func_08A9B7BC(u32 a0)
{
    u32 v0 = 0;
L_08A9B7BC:;
    v0 = LD32(a0+864);
    return v0;
}

/* 08A9B7C4 */
void func_08A9B7C4(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9B7C4:;
    sp = sp - 32;
    a0 = a0 - 1;
    a1 = sp + 0;
    v0 = func_08A9EC08(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9B7D8;
L_08A9B7D8:;
    v1 = v0 + 0;
    v0 = LD32(sp+8);
    if (v1 == 0) v0 = 0;
    sp = sp + 32;
    return;
}

/* 08A9B7F0 */
u32 func_08A9B7F0(u32 a0)
{
    u32 v0 = 0;
L_08A9B7F0:;
    v0 = LD32(a0+860);
    return v0;
}

/* 08A9B7F8 */
u32 func_08A9B7F8(u32 a0)
{
    u32 v0 = 0;
L_08A9B7F8:;
    v0 = LD32(a0+856);
    return v0;
}

/* 08A9B800 */
u32 func_08A9B800(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9B800:;
    sp = sp - 64;
    fp = a1 + 0;
    s6 = 0 + 0;
    s3 = a2 + 0;
    s1 = a0 + 9;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9B848;
L_08A9B848:;
    v1 = LD_U8(s0+9);
    a1 = s1 + v0;
    v0 = 101;
    cnd_ = v1 == v0;
    a0 = a1 + 1;
    if (cnd_) { goto L_08A9B984; }
    goto L_08A9B85C;
L_08A9B85C:;
    a1 = s3 + 1720;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9B864;
L_08A9B864:;
    a0 = v0 + 0;
    a1 = s3 + 1716;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9B870;
L_08A9B870:;
    v1 = LD_U8(v0);
    a0 = v0 + 0;
    v0 = (u32)-1;
    ST8(s3+1726, v0);
    v0 = 122;
    ST8(s3+1724, v1);
    a1 = LD_U8(s1);
    v1 = a1 & 0xff;
    cnd_ = v1 == v0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A9B95C; }
    goto L_08A9B898;
L_08A9B898:;
    v0 = a1 & 0xff;
    cnd_ = v0 == 0;
    s4 = 76;
    if (cnd_) { goto L_08A9B8FC; }
    goto L_08A9B8A4;
L_08A9B8A4:;
    v1 = v0 + 0;
    s5 = 82;
    s7 = 80;
    goto L_08A9B8B0;
L_08A9B8B0:;
    cnd_ = v1 == s4;
    s2 = a0 + 1;
    if (cnd_) { goto L_08A9B948; }
    goto L_08A9B8B8;
L_08A9B8B8:;
    cnd_ = v1 == s5;
    a1 = fp + 0;
    if (cnd_) { goto L_08A9B934; }
    goto L_08A9B8C0;
L_08A9B8C0:;
    v0 = s6 + 0;
    cnd_ = v1 != s7;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A9B904; }
    goto L_08A9B8CC;
L_08A9B8CC:;
    s0 = LD_U8(a0);
    a0 = s0 + 0;
    v0 = func_08A9B53C(a0, a1);
    goto L_08A9B8D8;
L_08A9B8D8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = s3 + 1712;
    v0 = func_08A9B670(a0, a1, a2, a3);
    goto L_08A9B8EC;
L_08A9B8EC:;
    a0 = v0 + 0;
    goto L_08A9B8F0;
L_08A9B8F0:;
    v0 = LD_U8(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A9B8B0; }
    goto L_08A9B8FC;
L_08A9B8FC:;
    v0 = a0 + 0;
    if (s6 != 0) v0 = s6;
    goto L_08A9B904;
L_08A9B904:;
    sp = sp + 64;
    return v0;
L_08A9B934:;
    v0 = LD_U8(a0);
    s1 = s1 + 1;
    a0 = s2 + 0;
    ST8(s3+1725, v0);
    goto L_08A9B8F0;
L_08A9B948:;
    v0 = LD_U8(a0);
    s1 = s1 + 1;
    a0 = a0 + 1;
    ST8(s3+1726, v0);
    goto L_08A9B8F0;
L_08A9B95C:;
    a1 = sp + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9B964;
L_08A9B964:;
    a0 = v0 + 0;
    v0 = 1;
    ST8(s3+1727, v0);
    s1 = s1 + 1;
    v0 = LD32(sp);
    a1 = LD_U8(s1);
    s6 = a0 + v0;
    goto L_08A9B898;
L_08A9B984:;
    v1 = LD_U8(s1+1);
    v0 = 104;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A9B85C; }
    goto L_08A9B994;
L_08A9B994:;
    v0 = LDU32(a0);
    s1 = s0 + 11;
    a0 = a1 + 5;
    ST32(s3+1728, v0);
    goto L_08A9B85C;
}

/* 08A9B9AC */
u32 func_08A9B9AC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_08A9B9AC:;
    sp = sp - 320;
    v0 = a0 < a1;
    t0 = a0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = 1;
    cnd_ = v0 == 0;
    ST32(sp, a3);
    if (cnd_) { goto L_08A9BE70; }
    goto L_08A9B9E0;
L_08A9B9E0:;
    s0 = LD_U8(t0);
    goto L_08A9B9E4;
L_08A9B9E4:;
    v1 = s0 - 3;
    v0 = v1 < 0x94u;
    cnd_ = v0 == 0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9B9F4;
L_08A9B9F4:;
    v0 = v1 << 2;
    v1 = D_08AEAA34 - (-21964);
    v1 = v1 - 21964;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A9BA10u: goto L_08A9BA10; case 0x08A9BA34u: goto L_08A9BA34; case 0x08A9BA74u: goto L_08A9BA74; case 0x08A9BA80u: goto L_08A9BA80; case 0x08A9BA88u: goto L_08A9BA88; case 0x08A9BAA0u: goto L_08A9BAA0; case 0x08A9BABCu: goto L_08A9BABC; case 0x08A9BACCu: goto L_08A9BACC; case 0x08A9BADCu: goto L_08A9BADC; case 0x08A9BAF0u: goto L_08A9BAF0; case 0x08A9BB08u: goto L_08A9BB08; case 0x08A9BB20u: goto L_08A9BB20; case 0x08A9BB34u: goto L_08A9BB34; case 0x08A9BB4Cu: goto L_08A9BB4C; case 0x08A9BB70u: goto L_08A9BB70; case 0x08A9BB9Cu: goto L_08A9BB9C; case 0x08A9BBD8u: goto L_08A9BBD8; case 0x08A9BCC8u: goto L_08A9BCC8; case 0x08A9BCECu: goto L_08A9BCEC; case 0x08A9BD08u: goto L_08A9BD08; case 0x08A9BD38u: goto L_08A9BD38; case 0x08A9BD50u: goto L_08A9BD50; case 0x08A9BD74u: goto L_08A9BD74; case 0x08A9BE78u: goto L_08A9BE78; default: rs_break(0, 0x08a9ba08); }
L_08A9BA10:;
    v0 = s0 - 48;
    goto L_08A9BA14;
L_08A9BA14:;
    ST32(sp+256, v0);
    goto L_08A9BA18;
L_08A9BA18:;
    v0 = s1 < 0x40u;
    goto L_08A9BA1C;
L_08A9BA1C:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+256);
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BA24;
L_08A9BA24:;
    v0 = s1 << 2;
    v0 = v0 + sp;
    ST32(v0, v1);
    s1 = s1 + 1;
    goto L_08A9BA34;
L_08A9BA34:;
    v0 = t0 < s2;
    goto L_08A9BA38;
L_08A9BA38:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD_U8(t0); goto L_08A9B9E4; }
    goto L_08A9BA40;
L_08A9BA40:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BA4C;
L_08A9BA4C:;
    v1 = s1 << 2;
    v1 = v1 + sp;
    v0 = LD32(v1);
    sp = sp + 320;
    return v0;
L_08A9BA74:;
    v0 = LD_U8(t0);
    goto L_08A9BA78;
L_08A9BA78:;
    t0 = t0 + 1;
    goto L_08A9BA14;
L_08A9BA80:;
    v0 = (u32)(s32)LD_S8(t0);
    goto L_08A9BA78;
L_08A9BA88:;
    v0 = LD_U8(t0+1);
    v1 = LD_U8(t0);
    t0 = t0 + 2;
    goto L_08A9BA94;
L_08A9BA94:;
    v0 = v0 << 8;
    v0 = v0 | v1;
    goto L_08A9BA14;
L_08A9BAA0:;
    v0 = LD_U8(t0+1);
    v1 = LD_U8(t0);
    t0 = t0 + 2;
    v0 = v0 << 8;
    v0 = v0 | v1;
    v0 = (u32)(s32)(s16)v0;
    goto L_08A9BA14;
L_08A9BABC:;
    v0 = LDU32(t0);
    t0 = t0 + 4;
    goto L_08A9BA14;
L_08A9BACC:;
    v0 = LDU32(t0);
    t0 = t0 + 8;
    goto L_08A9BA14;
L_08A9BADC:;
    a0 = t0 + 0;
    a1 = sp + 256;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9BAE8;
L_08A9BAE8:;
    t0 = v0 + 0;
    goto L_08A9BA18;
L_08A9BAF0:;
    a0 = t0 + 0;
    a1 = sp + 260;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9BAFC;
L_08A9BAFC:;
    t0 = v0 + 0;
    v0 = LD32(sp+260);
    goto L_08A9BA14;
L_08A9BB08:;
    cnd_ = (s32)s1 <= 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BB10;
L_08A9BB10:;
    v0 = v0 + sp;
    v1 = LD32(v0-4);
    goto L_08A9BB18;
L_08A9BB18:;
    ST32(sp+256, v1);
    goto L_08A9BA18;
L_08A9BB20:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 >= 0;
    v0 = t0 < s2;
    if (cnd_) { goto L_08A9BA38; }
    goto L_08A9BB2C;
L_08A9BB2C:;
    goto L_08A9BE78;
L_08A9BB34:;
    v0 = (s32)s1 < 2;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BB40;
L_08A9BB40:;
    v0 = v0 + sp;
    v1 = LD32(v0-8);
    goto L_08A9BB18;
L_08A9BB4C:;
    v1 = LD_U8(t0);
    v0 = s1 - 1;
    t0 = t0 + 1;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    ST32(sp+268, v1);
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BB64;
L_08A9BB64:;
    v0 = s1 - v1;
    v0 = v0 << 2;
    goto L_08A9BB10;
L_08A9BB70:;
    v0 = (s32)s1 < 3;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BB7C;
L_08A9BB7C:;
    v0 = v0 + sp;
    v1 = LD32(v0-4);
    a0 = LD32(v0-8);
    a1 = LD32(v0-12);
    ST32(v0-12, v1);
    ST32(v0-4, a0);
    ST32(v0-8, a1);
    goto L_08A9BA34;
L_08A9BB9C:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BBA8;
L_08A9BBA8:;
    v1 = LD_U8(t0+1);
    a0 = LD_U8(t0);
    v0 = v0 + sp;
    v1 = v1 << 8;
    a1 = LD32(v0);
    v1 = v1 | a0;
    v1 = (u32)(s32)(s16)v1;
    ST32(sp+268, v1);
    cnd_ = a1 == 0;
    t0 = t0 + 2;
    if (cnd_) { goto L_08A9BA34; }
    goto L_08A9BBD0;
L_08A9BBD0:;
    t0 = t0 + v1;
    goto L_08A9BA34;
L_08A9BBD8:;
    s1 = s1 - 2;
    cnd_ = (s32)s1 < 0;
    a0 = s0 - 26;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BBE4;
L_08A9BBE4:;
    v0 = s1 << 2;
    v0 = v0 + sp;
    v1 = a0 < 0x15u;
    a2 = LD32(v0+4);
    cnd_ = v1 == 0;
    a1 = LD32(v0);
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BBFC;
L_08A9BBFC:;
    v1 = D_08AEAC84 - (-21372);
    v0 = a0 << 2;
    v1 = v1 - 21372;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A9BC18u: goto L_08A9BC18; case 0x08A9BC20u: goto L_08A9BC20; case 0x08A9BC38u: goto L_08A9BC38; case 0x08A9BC40u: goto L_08A9BC40; case 0x08A9BC4Cu: goto L_08A9BC4C; case 0x08A9BC5Cu: goto L_08A9BC5C; case 0x08A9BC64u: goto L_08A9BC64; case 0x08A9BC6Cu: goto L_08A9BC6C; case 0x08A9BC74u: goto L_08A9BC74; case 0x08A9BC7Cu: goto L_08A9BC7C; case 0x08A9BC84u: goto L_08A9BC84; case 0x08A9BC8Cu: goto L_08A9BC8C; case 0x08A9BC98u: goto L_08A9BC98; case 0x08A9BCA4u: goto L_08A9BCA4; case 0x08A9BCACu: goto L_08A9BCAC; case 0x08A9BCB4u: goto L_08A9BCB4; case 0x08A9BCBCu: goto L_08A9BCBC; case 0x08A9BE78u: goto L_08A9BE78; default: rs_break(0, 0x08a9bc10); }
L_08A9BC18:;
    v0 = a1 & a2;
    goto L_08A9BA14;
L_08A9BC20:;
    { s32 x_ = (s32)a1, y_ = (s32)a2; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = lo;
    goto L_08A9BC28;
L_08A9BC28:;
    cnd_ = a2 == 0;
    if (cnd_) { rs_break(0x7, 0x08a9bc2c); goto L_08A9BC30; }
    goto L_08A9BC30;
L_08A9BC30:;
    ST32(sp+256, v0);
    goto L_08A9BA18;
L_08A9BC38:;
    v0 = a1 - a2;
    goto L_08A9BA14;
L_08A9BC40:;
    { s32 x_ = (s32)a1, y_ = (s32)a2; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = hi;
    goto L_08A9BC28;
L_08A9BC4C:;
    { s64 p_ = (s64)(s32)a1 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    ST32(sp+256, v0);
    goto L_08A9BA18;
L_08A9BC5C:;
    v0 = a1 | a2;
    goto L_08A9BA14;
L_08A9BC64:;
    v0 = a1 + a2;
    goto L_08A9BA14;
L_08A9BC6C:;
    v0 = a1 << (a2 & 31);
    goto L_08A9BA14;
L_08A9BC74:;
    v0 = a1 >> (a2 & 31);
    goto L_08A9BA14;
L_08A9BC7C:;
    v0 = (u32)((s32)a1 >> (a2 & 31));
    goto L_08A9BA14;
L_08A9BC84:;
    v0 = a1 ^ a2;
    goto L_08A9BA14;
L_08A9BC8C:;
    v0 = a2 ^ a1;
    v0 = v0 < 0x1u;
    goto L_08A9BA14;
L_08A9BC98:;
    v0 = (s32)a2 < (s32)a1;
    goto L_08A9BC9C;
L_08A9BC9C:;
    v0 = v0 ^ 0x1;
    goto L_08A9BA14;
L_08A9BCA4:;
    v0 = (s32)a1 < (s32)a2;
    goto L_08A9BA14;
L_08A9BCAC:;
    v0 = (s32)a1 < (s32)a2;
    goto L_08A9BC9C;
L_08A9BCB4:;
    v0 = (s32)a2 < (s32)a1;
    goto L_08A9BA14;
L_08A9BCBC:;
    v0 = a2 ^ a1;
    v0 = 0 < v0;
    goto L_08A9BA14;
L_08A9BCC8:;
    v0 = LD_U8(t0+1);
    v1 = LD_U8(t0);
    t0 = t0 + 2;
    v0 = v0 << 8;
    v0 = v0 | v1;
    v0 = (u32)(s32)(s16)v0;
    t0 = t0 + v0;
    ST32(sp+268, v0);
    goto L_08A9BA34;
L_08A9BCEC:;
    v0 = s0 - 80;
    goto L_08A9BCF0;
L_08A9BCF0:;
    v0 = v0 << 2;
    v0 = v0 + s3;
    v1 = LD32(v0);
    a0 = LD32(v1);
    ST32(sp+256, a0);
    goto L_08A9BA18;
L_08A9BD08:;
    a0 = t0 + 0;
    a1 = sp + 268;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9BD14;
L_08A9BD14:;
    t0 = v0 + 0;
    v0 = s0 - 112;
    goto L_08A9BD1C;
L_08A9BD1C:;
    v0 = v0 << 2;
    v0 = v0 + s3;
    a0 = LD32(v0);
    v0 = LD32(sp+268);
    v1 = LD32(a0);
    v1 = v1 + v0;
    goto L_08A9BB18;
L_08A9BD38:;
    a0 = t0 + 0;
    a1 = sp + 264;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9BD44;
L_08A9BD44:;
    t0 = v0 + 0;
    v0 = LD32(sp+264);
    goto L_08A9BCF0;
L_08A9BD50:;
    a0 = t0 + 0;
    a1 = sp + 264;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9BD5C;
L_08A9BD5C:;
    a0 = v0 + 0;
    a1 = sp + 268;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9BD68;
L_08A9BD68:;
    t0 = v0 + 0;
    v0 = LD32(sp+264);
    goto L_08A9BD1C;
L_08A9BD74:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BD80;
L_08A9BD80:;
    v0 = v0 + sp;
    a0 = LD32(v0);
    v0 = 31;
    cnd_ = s0 == v0;
    ST32(sp+256, a0);
    if (cnd_) { goto L_08A9BDBC; }
    goto L_08A9BD94;
L_08A9BD94:;
    v0 = s0 < 0x20u;
    cnd_ = v0 == 0;
    v0 = 35;
    if (cnd_) { goto L_08A9BDD4; }
    goto L_08A9BDA0;
L_08A9BDA0:;
    v0 = 6;
    cnd_ = s0 == v0;
    v0 = 25;
    if (cnd_) { goto L_08A9BDC4; }
    goto L_08A9BDAC;
L_08A9BDAC:;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BDB4;
L_08A9BDB4:;
    cnd_ = (s32)a0 >= 0;
    if (cnd_) { v0 = s1 < 0x40u; goto L_08A9BA1C; }
    goto L_08A9BDBC;
L_08A9BDBC:;
    v0 = 0 - a0;
    goto L_08A9BA14;
L_08A9BDC4:;
    v0 = LDU32(a0);
    ST32(sp+256, v0);
    goto L_08A9BA18;
L_08A9BDD4:;
    cnd_ = s0 == v0;
    if (cnd_) { a0 = t0 + 0; goto L_08A9BE54; }
    goto L_08A9BDDC;
L_08A9BDDC:;
    v0 = s0 < 0x24u;
    cnd_ = v0 == 0;
    v0 = 148;
    if (cnd_) { goto L_08A9BDFC; }
    goto L_08A9BDE8;
L_08A9BDE8:;
    v0 = 32;
    cnd_ = s0 != v0;
    v0 = ~(0 | a0);
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BDF4;
L_08A9BDF4:;
    ST32(sp+256, v0);
    goto L_08A9BA18;
L_08A9BDFC:;
    cnd_ = s0 != v0;
    v0 = 2;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BE04;
L_08A9BE04:;
    v1 = LD_U8(t0);
    cnd_ = v1 == v0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08A9BE48; }
    goto L_08A9BE10;
L_08A9BE10:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A9BE30; }
    goto L_08A9BE1C;
L_08A9BE1C:;
    v0 = 1;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A9BE78; }
    goto L_08A9BE28;
L_08A9BE28:;
    v0 = LD_U8(a0);
    goto L_08A9BA14;
L_08A9BE30:;
    cnd_ = v1 == v0;
    v0 = 8;
    if (cnd_) { goto L_08A9BDC4; }
    goto L_08A9BE38;
L_08A9BE38:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A9BDC4; }
    goto L_08A9BE40;
L_08A9BE40:;
    goto L_08A9BE78;
L_08A9BE48:;
    v0 = LD_U8(a0+1);
    v1 = LD_U8(a0);
    goto L_08A9BA94;
L_08A9BE54:;
    a1 = sp + 272;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9BE5C;
L_08A9BE5C:;
    t0 = v0 + 0;
    v1 = LD32(sp+272);
    v0 = LD32(sp+256);
    v0 = v0 + v1;
    goto L_08A9BA14;
L_08A9BE70:;
    s1 = 0 + 0;
    goto L_08A9BA4C;
L_08A9BE78:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    v0 = func_08A9BE80(a0, a1, a2, a3); return v0;
}

/* 08A9BE80 */
u32 func_08A9BE80(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1776] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1776);
L_08A9BE80:;
    sp = sp - 80;
    v0 = a0 < a1;
    fp = sp + 0;
    s6 = 0 + 0;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s3 = a3 + 0;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    ST32(a3+1688, 0);
    if (cnd_) { goto L_08A9BF74; }
    goto L_08A9BECC;
L_08A9BECC:;
    a0 = LD32(a3+1708);
    v0 = LD32(a2+848);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A9BF74; }
    goto L_08A9BEE0;
L_08A9BEE0:;
    a1 = LD_U8(s2);
    v0 = 64;
    v1 = a1 & 0xc0;
    cnd_ = v1 == v0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A9C36C; }
    goto L_08A9BEF4;
L_08A9BEF4:;
    v0 = 128;
    cnd_ = v1 == v0;
    v0 = 192;
    if (cnd_) { goto L_08A9C358; }
    goto L_08A9BF00;
L_08A9BF00:;
    cnd_ = v1 == v0;
    v0 = a1 < 0x30u;
    if (cnd_) { goto L_08A9C340; }
    goto L_08A9BF08;
L_08A9BF08:;
    cnd_ = v0 == 0;
    v1 = D_08AEACD8 - (-21288);
    if (cnd_) { goto L_08A9C384; }
    goto L_08A9BF10;
L_08A9BF10:;
    v0 = a1 << 2;
    v1 = v1 - 21288;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A9BF28u: goto L_08A9BF28; case 0x08A9BF54u: goto L_08A9BF54; case 0x08A9BFA4u: goto L_08A9BFA4; case 0x08A9BFC4u: goto L_08A9BFC4; case 0x08A9BFE4u: goto L_08A9BFE4; case 0x08A9BFF8u: goto L_08A9BFF8; case 0x08A9C044u: goto L_08A9C044; case 0x08A9C068u: goto L_08A9C068; case 0x08A9C080u: goto L_08A9C080; case 0x08A9C0BCu: goto L_08A9C0BC; case 0x08A9C128u: goto L_08A9C128; case 0x08A9C188u: goto L_08A9C188; case 0x08A9C1B8u: goto L_08A9C1B8; case 0x08A9C1D4u: goto L_08A9C1D4; case 0x08A9C1F0u: goto L_08A9C1F0; case 0x08A9C21Cu: goto L_08A9C21C; case 0x08A9C250u: goto L_08A9C250; case 0x08A9C274u: goto L_08A9C274; case 0x08A9C294u: goto L_08A9C294; case 0x08A9C2A8u: goto L_08A9C2A8; case 0x08A9C2ECu: goto L_08A9C2EC; case 0x08A9C2F8u: goto L_08A9C2F8; case 0x08A9C384u: goto L_08A9C384; default: rs_break(0, 0x08a9bf20); }
L_08A9BF28:;
    s0 = LD_U8(s3+1725);
    a1 = s4 + 0;
    s1 = s3 + 1708;
    a0 = s0 + 0;
    v0 = func_08A9B53C(a0, a1);
    goto L_08A9BF3C;
L_08A9BF3C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = s1 + 0;
    v0 = func_08A9B670(a0, a1, a2, a3);
    goto L_08A9BF50;
L_08A9BF50:;
    s2 = v0 + 0;
    goto L_08A9BF54;
L_08A9BF54:;
    v0 = s2 < s5;
    goto L_08A9BF58;
L_08A9BF58:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9BF74; }
    goto L_08A9BF60;
L_08A9BF60:;
    a0 = LD32(s3+1708);
    v0 = LD32(s4+848);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A9BEE0; }
    goto L_08A9BF74;
L_08A9BF74:;
    sp = fp + 0;
    sp = sp + 80;
    return v0;
L_08A9BFA4:;
    v0 = LD_U8(s2);
    v1 = LD32(s3+1720);
    s2 = s2 + 1;
    goto L_08A9BFB0;
L_08A9BFB0:;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    goto L_08A9BFB4;
L_08A9BFB4:;
    v0 = lo;
    v0 = a2 + v0;
    goto L_08A9BFBC;
L_08A9BFBC:;
    ST32(s3+1708, v0);
    goto L_08A9BF54;
L_08A9BFC4:;
    v0 = LD_U8(s2+1);
    v1 = LD_U8(s2);
    a0 = LD32(s3+1720);
    v0 = v0 << 8;
    v0 = v0 | v1;
    { s64 p_ = (s64)(s32)v0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s2 = s2 + 2;
    goto L_08A9BFB4;
L_08A9BFE4:;
    v1 = LD32(s3+1720);
    v0 = LDU32(s2);
    s2 = s2 + 4;
    goto L_08A9BFB0;
L_08A9BFF8:;
    a0 = s2 + 0;
    a1 = fp + 4;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C004;
L_08A9C004:;
    a0 = v0 + 0;
    a1 = fp + 0;
    goto L_08A9C00C;
L_08A9C00C:;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C014;
L_08A9C014:;
    a0 = LD32(s3+1716);
    v1 = LD32(fp);
    goto L_08A9C01C;
L_08A9C01C:;
    s2 = v0 + 0;
    { s64 p_ = (s64)(s32)v1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(fp+4);
    v1 = 1;
    v0 = v0 << 3;
    v0 = v0 + s3;
    a0 = lo;
    ST32(v0+4, v1);
    goto L_08A9C03C;
L_08A9C03C:;
    ST32(v0, a0);
    goto L_08A9BF54;
L_08A9C044:;
    a0 = s2 + 0;
    a1 = fp + 4;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C050;
L_08A9C050:;
    s2 = v0 + 0;
    v0 = LD32(fp+4);
    v0 = v0 << 3;
    v0 = v0 + s3;
    ST32(v0+4, 0);
    goto L_08A9BF54;
L_08A9C068:;
    a0 = s2 + 0;
    a1 = fp + 4;
    goto L_08A9C070;
L_08A9C070:;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C078;
L_08A9C078:;
    s2 = v0 + 0;
    goto L_08A9BF54;
L_08A9C080:;
    a0 = s2 + 0;
    a1 = fp + 4;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C08C;
L_08A9C08C:;
    a0 = v0 + 0;
    a1 = fp + 8;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C098;
L_08A9C098:;
    s2 = v0 + 0;
    v0 = LD32(fp+4);
    v1 = LD32(fp+8);
    a0 = 2;
    v0 = v0 << 3;
    v0 = v0 + s3;
    ST32(v0, v1);
    ST32(v0+4, a0);
    goto L_08A9BF54;
L_08A9C0BC:;
    sp = sp - 1696;
    cnd_ = s6 == 0;
    t1 = sp + 0;
    if (cnd_) { goto L_08A9C0D0; }
    goto L_08A9C0C8;
L_08A9C0C8:;
    t1 = s6 + 0;
    s6 = LD32(s6+1688);
    goto L_08A9C0D0;
L_08A9C0D0:;
    a3 = t1 + 0;
    a2 = s3 + 0;
    t0 = s3 + 1680;
    goto L_08A9C0DC;
L_08A9C0DC:;
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
    if (cnd_) { goto L_08A9C0DC; }
    goto L_08A9C108;
L_08A9C108:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    ST32(s3+1688, t1);
    goto L_08A9BF54;
L_08A9C128:;
    t1 = LD32(s3+1688);
    a3 = s3 + 0;
    a2 = t1 + 0;
    t0 = t1 + 1680;
    goto L_08A9C138;
L_08A9C138:;
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
    if (cnd_) { goto L_08A9C138; }
    goto L_08A9C164;
L_08A9C164:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    ST32(t1+1688, s6);
    s6 = t1 + 0;
    goto L_08A9BF54;
L_08A9C188:;
    a0 = s2 + 0;
    a1 = s3 + 1696;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C194;
L_08A9C194:;
    a0 = v0 + 0;
    a1 = fp + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C1A0;
L_08A9C1A0:;
    v1 = LD32(fp);
    s2 = v0 + 0;
    v0 = 1;
    ST32(s3+1704, v0);
    ST32(s3+1692, v1);
    goto L_08A9BF54;
L_08A9C1B8:;
    a1 = s3 + 1696;
    a0 = s2 + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C1C4;
L_08A9C1C4:;
    s2 = v0 + 0;
    goto L_08A9C1C8;
L_08A9C1C8:;
    v0 = 1;
    ST32(s3+1704, v0);
    goto L_08A9BF54;
L_08A9C1D4:;
    a0 = s2 + 0;
    a1 = fp + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C1E0;
L_08A9C1E0:;
    s2 = v0 + 0;
    v0 = LD32(fp);
    ST32(s3+1692, v0);
    goto L_08A9BF54;
L_08A9C1F0:;
    v0 = 2;
    a0 = s2 + 0;
    a1 = fp + 0;
    ST32(s3+1704, v0);
    ST32(s3+1700, s2);
    goto L_08A9C204;
L_08A9C204:;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C20C;
L_08A9C20C:;
    s2 = v0 + 0;
    v0 = LD32(fp);
    s2 = s2 + v0;
    goto L_08A9BF54;
L_08A9C21C:;
    a0 = s2 + 0;
    a1 = fp + 4;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C228;
L_08A9C228:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    v0 = LD32(fp+4);
    v1 = 3;
    a1 = fp + 0;
    v0 = v0 << 3;
    v0 = v0 + s3;
    ST32(v0+4, v1);
    ST32(v0, s2);
    goto L_08A9C204;
L_08A9C250:;
    a0 = s2 + 0;
    a1 = fp + 4;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C25C;
L_08A9C25C:;
    a0 = v0 + 0;
    a1 = fp + 12;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9C268;
L_08A9C268:;
    a0 = LD32(s3+1716);
    v1 = LD32(fp+12);
    goto L_08A9C01C;
L_08A9C274:;
    a1 = s3 + 1696;
    a0 = s2 + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C280;
L_08A9C280:;
    a0 = v0 + 0;
    a1 = s3 + 1692;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9C28C;
L_08A9C28C:;
    s2 = v0 + 0;
    goto L_08A9C1C8;
L_08A9C294:;
    a1 = s3 + 1692;
    a0 = s2 + 0;
    v0 = func_08A9B618(a0, a1);
    goto L_08A9C2A0;
L_08A9C2A0:;
    s2 = v0 + 0;
    goto L_08A9BF54;
L_08A9C2A8:;
    v0 = 16;
    ST32(fp+4, v0);
    a2 = 16;
    a3 = 1;
    a1 = 0 + 0;
    a0 = s3 + 128;
    goto L_08A9C2C0;
L_08A9C2C0:;
    v0 = a2 + 1;
    v1 = v0 < 0x20u;
    ST32(a0, a1);
    a2 = v0 + 0;
    a1 = a1 + 4;
    ST32(a0+4, a3);
    a0 = a0 + 8;
    cnd_ = v1 != 0;
    ST32(fp+4, v0);
    if (cnd_) { goto L_08A9C2C0; }
    goto L_08A9C2E4;
L_08A9C2E4:;
    v0 = s2 < s5;
    goto L_08A9BF58;
L_08A9C2EC:;
    a1 = s4 + 868;
    a0 = s2 + 0;
    goto L_08A9C070;
L_08A9C2F8:;
    a0 = s2 + 0;
    a1 = fp + 4;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C304;
L_08A9C304:;
    a0 = v0 + 0;
    a1 = fp + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C310;
L_08A9C310:;
    a0 = LD32(s3+1716);
    v1 = LD32(fp);
    s2 = v0 + 0;
    v0 = LD32(fp+4);
    { s64 p_ = (s64)(s32)v1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = 1;
    v0 = v0 << 3;
    v0 = v0 + s3;
    ST32(v0+4, v1);
    a0 = lo;
    a0 = 0 - a0;
    goto L_08A9C03C;
L_08A9C340:;
    v1 = a1 & 0x3f;
    v0 = v1 << 3;
    v0 = v0 + s3;
    ST32(v0+4, 0);
    ST32(fp+4, v1);
    goto L_08A9BF54;
L_08A9C358:;
    v0 = a1 & 0x3f;
    a0 = s2 + 0;
    a1 = fp + 0;
    ST32(fp+4, v0);
    goto L_08A9C00C;
L_08A9C36C:;
    v1 = LD32(s3+1720);
    v0 = a1 & 0x3f;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = a0 + v0;
    goto L_08A9BFBC;
L_08A9C384:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    v0 = func_08A9C38C(a0, a1); return v0;
}

/* 08A9C38C */
u32 func_08A9C38C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9C38C:;
    sp = sp - 64;
    a2 = 1732;
    s4 = a1 + 0;
    s2 = a0 + 0;
    a0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9C3CC;
L_08A9C3CC:;
    a1 = s2 + 856;
    v1 = LD32(s2+848);
    ST32(s2+868, 0);
    v0 = 5;
    a0 = v1 - 1;
    cnd_ = v1 == 0;
    ST32(s2+852, 0);
    if (cnd_) { goto L_08A9C4CC; }
    goto L_08A9C3E8;
L_08A9C3E8:;
    v0 = func_08A9EC08(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A9C3F0;
L_08A9C3F0:;
    s5 = v0 + 0;
    a2 = s4 + 0;
    a1 = s2 + 0;
    cnd_ = s5 == 0;
    v0 = 5;
    if (cnd_) { goto L_08A9C4CC; }
    goto L_08A9C404;
L_08A9C404:;
    v1 = LD32(s2+864);
    v0 = LD32(s5+4);
    s3 = s5 + 8;
    ST32(s4+1708, v1);
    s0 = s5 - v0;
    s6 = s0 + 4;
    a0 = s6 + 0;
    v0 = func_08A9B800(a0, a1, a2);
    goto L_08A9C424;
L_08A9C424:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a2 = s2 + 0;
    a3 = s4 + 0;
    cnd_ = s1 == 0;
    v0 = 3;
    if (cnd_) { goto L_08A9C4CC; }
    goto L_08A9C43C;
L_08A9C43C:;
    v0 = LD32(s0+4);
    s7 = s2 + 852;
    s1 = 0 + 0;
    v0 = s6 + v0;
    a1 = v0 + 4;
    v0 = func_08A9BE80(a0, a1, a2, a3);
    goto L_08A9C454;
L_08A9C454:;
    a0 = LD_U8(s4+1725);
    v0 = func_08A9B4CC(a0);
    goto L_08A9C45C;
L_08A9C45C:;
    v1 = LD_U8(s4+1727);
    v0 = v0 << 1;
    s3 = s3 + v0;
    a1 = sp + 0;
    cnd_ = v1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A9C4F8; }
    goto L_08A9C474;
L_08A9C474:;
    s0 = LD_U8(s4+1726);
    v0 = 255;
    a1 = s2 + 0;
    cnd_ = s0 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A9C4A8; }
    goto L_08A9C488;
L_08A9C488:;
    v0 = func_08A9B53C(a0, a1);
    goto L_08A9C490;
L_08A9C490:;
    a1 = v0 + 0;
    a2 = s3 + 0;
    a0 = s0 + 0;
    a3 = s7 + 0;
    v0 = func_08A9B670(a0, a1, a2, a3);
    goto L_08A9C4A4;
L_08A9C4A4:;
    s3 = v0 + 0;
    goto L_08A9C4A8;
L_08A9C4A8:;
    v0 = LD32(s5);
    if (s1 == 0) s1 = s3;
    a2 = s2 + 0;
    v0 = s5 + v0;
    a1 = v0 + 4;
    a3 = s4 + 0;
    a0 = s1 + 0;
    v0 = func_08A9BE80(a0, a1, a2, a3);
    goto L_08A9C4C8;
L_08A9C4C8:;
    v0 = 0 + 0;
    goto L_08A9C4CC;
L_08A9C4CC:;
    sp = sp + 64;
    return v0;
L_08A9C4F8:;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C500;
L_08A9C500:;
    s3 = v0 + 0;
    v0 = LD32(sp);
    s1 = s3 + v0;
    goto L_08A9C474;
}

/* 08A9C510 */
void func_08A9C510(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[2640] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 2640);
L_08A9C510:;
    sp = sp - 2640;
    a2 = 872;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = sp + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9C53C;
L_08A9C53C:;
    a0 = sp + 0;
    a1 = sp + 880;
    ST32(sp+848, s0);
    v0 = func_08A9C38C(a0, a1);
    goto L_08A9C54C;
L_08A9C54C:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A9C5D4; }
    goto L_08A9C554;
L_08A9C554:;
    v1 = LD32(sp+2584);
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A9C5D8; }
    goto L_08A9C564;
L_08A9C564:;
    a3 = 0 + 0;
    t0 = 1;
    t1 = 2;
    a1 = s1 + 16;
    a2 = sp + 0;
    goto L_08A9C578;
L_08A9C578:;
    v0 = (u32)(s32)LD_S8(a2+884);
    v1 = a3 + s1;
    cnd_ = v0 == t0;
    ST8(v1+864, v0);
    if (cnd_) { goto L_08A9C5EC; }
    goto L_08A9C588;
L_08A9C588:;
    cnd_ = v0 == t1;
    if (cnd_) { v0 = LD32(a2+880); goto L_08A9C5F0; }
    goto L_08A9C590;
L_08A9C590:;
    ST32(a1, 0);
    goto L_08A9C594;
L_08A9C594:;
    a3 = a3 + 1;
    v0 = (s32)a3 < 211;
    a2 = a2 + 8;
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A9C578; }
    goto L_08A9C5A8;
L_08A9C5A8:;
    v0 = LD32(sp+2572);
    v1 = LD_U8(sp+2604);
    a0 = s1 + 0;
    ST32(s1+8, v0);
    v0 = LD_U16(sp+2576);
    ST16(s1+862, v1);
    ST16(s1+860, v0);
    v1 = LD32(sp+2608);
    v0 = LD32(sp+868);
    ST32(s1+4, v1);
    ST32(s1+12, v0);
    goto L_08A9C5D4;
L_08A9C5D4:;
    goto L_08A9C5D8;
L_08A9C5D8:;
    v0 = a0 + 0;
    sp = sp + 2640;
    return;
L_08A9C5EC:;
    v0 = LD32(a2+880);
    goto L_08A9C5F0;
L_08A9C5F0:;
    ST32(a1, v0);
    goto L_08A9C594;
}

/* 08A9C5F8 */
void func_08A9C5F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[928] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 928);
L_08A9C5F8:;
    sp = sp - 928;
    a3 = sp + 0;
    a2 = a0 + 0;
    t0 = a0 + 864;
    s2 = a1 + 0;
    s0 = a0 + 0;
    goto L_08A9C630;
L_08A9C630:;
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
    if (cnd_) { goto L_08A9C630; }
    goto L_08A9C65C;
L_08A9C65C:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    ST32(a3, v0);
    ST32(a3+4, v1);
    v0 = LD32(sp+116);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+1704); goto L_08A9C68C; }
    goto L_08A9C678;
L_08A9C678:;
    v1 = LD32(s0+844);
    v0 = sp + 880;
    ST32(sp+116, v0);
    ST32(sp+880, v1);
    v1 = LD32(s2+1704);
    goto L_08A9C68C;
L_08A9C68C:;
    v0 = 1;
    cnd_ = v1 == v0;
    ST32(s0+116, 0);
    if (cnd_) { goto L_08A9C78C; }
    goto L_08A9C698;
L_08A9C698:;
    v0 = 2;
    cnd_ = v1 != v0;
    a1 = sp + 884;
    if (cnd_) { goto L_08A9C7AC; }
    goto L_08A9C6A4;
L_08A9C6A4:;
    v0 = LD32(s2+1700);
    a0 = v0 + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C6B0;
L_08A9C6B0:;
    a1 = LD32(sp+884);
    a0 = v0 + 0;
    a2 = sp + 0;
    a1 = v0 + a1;
    a3 = 0 + 0;
    v0 = func_08A9B9AC(a0, a1, a2, a3);
    goto L_08A9C6C8;
L_08A9C6C8:;
    s3 = v0 + 0;
    goto L_08A9C6CC;
L_08A9C6CC:;
    ST32(s0+844, s3);
    s1 = s0 + 0;
    s4 = 1;
    s0 = s2 + 0;
    s5 = 2;
    s6 = 3;
    s2 = 210;
    goto L_08A9C6E8;
L_08A9C6E8:;
    v0 = LD32(s0+4);
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(s0); goto L_08A9C784; }
    goto L_08A9C6F4;
L_08A9C6F4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 - 1; goto L_08A9C710; }
    goto L_08A9C6FC;
L_08A9C6FC:;
    cnd_ = v0 == s5;
    if (cnd_) { v0 = LD32(s0); goto L_08A9C770; }
    goto L_08A9C704;
L_08A9C704:;
    cnd_ = v0 == s6;
    a1 = sp + 888;
    if (cnd_) { goto L_08A9C744; }
    goto L_08A9C70C;
L_08A9C70C:;
    s2 = s2 - 1;
    goto L_08A9C710;
L_08A9C710:;
    s0 = s0 + 8;
    cnd_ = (s32)s2 >= 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A9C6E8; }
    goto L_08A9C71C;
L_08A9C71C:;
    sp = sp + 928;
    return;
L_08A9C744:;
    v0 = LD32(s0);
    a0 = v0 + 0;
    v0 = func_08A9B5E4(a0, a1);
    goto L_08A9C750;
L_08A9C750:;
    a1 = LD32(sp+888);
    a0 = v0 + 0;
    a2 = sp + 0;
    a1 = v0 + a1;
    a3 = s3 + 0;
    v0 = func_08A9B9AC(a0, a1, a2, a3);
    goto L_08A9C768;
L_08A9C768:;
    ST32(s1, v0);
    goto L_08A9C70C;
L_08A9C770:;
    v0 = v0 << 2;
    v0 = v0 + sp;
    v1 = LD32(v0);
    ST32(s1, v1);
    goto L_08A9C70C;
L_08A9C784:;
    v0 = s3 + v0;
    goto L_08A9C768;
L_08A9C78C:;
    v0 = LD32(s2+1696);
    a0 = LD32(s2+1692);
    v0 = v0 << 2;
    v0 = v0 + sp;
    v1 = LD32(v0);
    s3 = LD32(v1);
    s3 = s3 + a0;
    goto L_08A9C6CC;
L_08A9C7AC:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    func_08A9C7B4(a0, a1); return;
}

/* 08A9C7B4 */
void func_08A9C7B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9C7B4:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_08A9C5F8(a0, a1);
    goto L_08A9C7D0;
L_08A9C7D0:;
    v0 = LD_U8(s0+1724);
    v0 = v0 << 2;
    v0 = v0 + s1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+848, v1);
    sp = sp + 16;
    return;
}

/* 08A9C800 */
void func_08A9C800(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1792] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1792);
L_08A9C800:;
    sp = sp - 1792;
    s0 = ra + 0;
    s0 = (s0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    s3 = a1 + 0;
    a1 = 0 + 0;
    s2 = a2 + 0;
    a2 = 872;
    s1 = a0 + 0;
    s2 = (s2 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9C83C;
L_08A9C83C:;
    a0 = s1 + 0;
    ST32(s1+848, s0);
    a1 = sp + 0;
    v0 = func_08A9C38C(a0, a1);
    goto L_08A9C84C;
L_08A9C84C:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A9C89C; }
    goto L_08A9C858;
L_08A9C858:;
    v0 = sp + 1744;
    ST32(s1+116, v0);
    v1 = 29;
    v0 = 1;
    ST32(sp+1744, s3);
    ST32(sp+1704, v0);
    ST32(sp+1696, v1);
    ST32(sp+1692, 0);
    func_08A9C5F8(a0, a1);
    goto L_08A9C87C;
L_08A9C87C:;
    ST32(s1+848, s2);
    sp = sp + 1792;
    return;
L_08A9C89C:;
    { rv_t r_ = func_08A96820(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    v0 = func_08A9C8A4(a0, a1); return;
}

/* 08A9C8A4 */
u32 func_08A9C8A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9C8A4:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    func_08A9D72C();
    goto L_08A9C8C8;
L_08A9C8C8:;
    a0 = D_08C38AB4 - (-30028);
    v0 = LD_U8(a0-30028);
    cnd_ = v0 != 0;
    s1 = a0 - 30028;
    if (cnd_) { goto L_08A9CC28; }
    goto L_08A9C8D8;
L_08A9C8D8:;
    v0 = 4;
    v1 = a0 - 30028;
    ST8(a0-30028, v0);
    ST8(v1+1, v0);
    ST8(v1+2, v0);
    ST8(v1+3, v0);
    ST8(v1+4, v0);
    ST8(v1+5, v0);
    ST8(v1+6, v0);
    ST8(v1+7, v0);
    ST8(v1+8, v0);
    ST8(v1+9, v0);
    ST8(v1+10, v0);
    ST8(v1+11, v0);
    ST8(v1+12, v0);
    ST8(v1+13, v0);
    ST8(v1+14, v0);
    ST8(v1+15, v0);
    ST8(v1+16, v0);
    ST8(v1+17, v0);
    ST8(v1+18, v0);
    ST8(v1+19, v0);
    ST8(v1+20, v0);
    ST8(v1+21, v0);
    ST8(v1+22, v0);
    ST8(v1+23, v0);
    ST8(v1+24, v0);
    ST8(v1+25, v0);
    ST8(v1+26, v0);
    ST8(v1+27, v0);
    ST8(v1+28, v0);
    ST8(v1+29, v0);
    ST8(v1+30, v0);
    ST8(v1+64, v0);
    ST8(v1+32, v0);
    ST8(v1+33, v0);
    ST8(v1+34, v0);
    ST8(v1+35, v0);
    ST8(v1+36, v0);
    ST8(v1+37, v0);
    ST8(v1+38, v0);
    ST8(v1+39, v0);
    ST8(v1+40, v0);
    ST8(v1+41, v0);
    ST8(v1+42, v0);
    ST8(v1+43, v0);
    ST8(v1+44, v0);
    ST8(v1+45, v0);
    ST8(v1+46, v0);
    ST8(v1+47, v0);
    ST8(v1+48, v0);
    ST8(v1+49, v0);
    ST8(v1+50, v0);
    ST8(v1+51, v0);
    ST8(v1+52, v0);
    ST8(v1+53, v0);
    ST8(v1+54, v0);
    ST8(v1+55, v0);
    ST8(v1+56, v0);
    ST8(v1+57, v0);
    ST8(v1+58, v0);
    ST8(v1+59, v0);
    ST8(v1+60, v0);
    ST8(v1+61, v0);
    ST8(v1+62, v0);
    ST8(v1+63, v0);
    ST8(v1+64, v0);
    ST8(v1+65, v0);
    ST8(v1+66, v0);
    ST8(v1+67, v0);
    ST8(v1+68, v0);
    ST8(v1+69, v0);
    ST8(v1+70, v0);
    ST8(v1+71, v0);
    ST8(v1+72, v0);
    ST8(v1+73, v0);
    ST8(v1+74, v0);
    ST8(v1+75, v0);
    ST8(v1+76, v0);
    ST8(v1+77, v0);
    ST8(v1+78, v0);
    ST8(v1+79, v0);
    ST8(v1+80, v0);
    ST8(v1+81, v0);
    ST8(v1+82, v0);
    ST8(v1+83, v0);
    ST8(v1+84, v0);
    ST8(v1+85, v0);
    ST8(v1+86, v0);
    ST8(v1+87, v0);
    ST8(v1+88, v0);
    ST8(v1+89, v0);
    ST8(v1+90, v0);
    ST8(v1+91, v0);
    ST8(v1+92, v0);
    ST8(v1+93, v0);
    ST8(v1+94, v0);
    ST8(v1+95, v0);
    ST8(v1+96, v0);
    ST8(v1+97, v0);
    ST8(v1+98, v0);
    ST8(v1+99, v0);
    ST8(v1+100, v0);
    ST8(v1+101, v0);
    ST8(v1+102, v0);
    ST8(v1+103, v0);
    ST8(v1+104, v0);
    ST8(v1+105, v0);
    ST8(v1+106, v0);
    ST8(v1+107, v0);
    ST8(v1+108, v0);
    ST8(v1+109, v0);
    ST8(v1+110, v0);
    ST8(v1+111, v0);
    ST8(v1+112, v0);
    ST8(v1+113, v0);
    ST8(v1+114, v0);
    ST8(v1+115, v0);
    ST8(v1+116, v0);
    ST8(v1+117, v0);
    ST8(v1+118, v0);
    ST8(v1+119, v0);
    ST8(v1+120, v0);
    ST8(v1+121, v0);
    ST8(v1+122, v0);
    ST8(v1+123, v0);
    ST8(v1+124, v0);
    ST8(v1+125, v0);
    ST8(v1+126, v0);
    ST8(v1+127, v0);
    ST8(v1+128, v0);
    ST8(v1+129, v0);
    ST8(v1+130, v0);
    ST8(v1+131, v0);
    ST8(v1+132, v0);
    ST8(v1+133, v0);
    ST8(v1+134, v0);
    ST8(v1+135, v0);
    ST8(v1+136, v0);
    ST8(v1+137, v0);
    ST8(v1+138, v0);
    ST8(v1+139, v0);
    ST8(v1+140, v0);
    ST8(v1+141, v0);
    ST8(v1+142, v0);
    ST8(v1+143, v0);
    ST8(v1+144, v0);
    ST8(v1+145, v0);
    ST8(v1+146, v0);
    ST8(v1+147, v0);
    ST8(v1+148, v0);
    ST8(v1+149, v0);
    ST8(v1+150, v0);
    ST8(v1+151, v0);
    ST8(v1+152, v0);
    ST8(v1+153, v0);
    ST8(v1+154, v0);
    ST8(v1+155, v0);
    ST8(v1+156, v0);
    ST8(v1+157, v0);
    ST8(v1+158, v0);
    ST8(v1+159, v0);
    ST8(v1+160, v0);
    ST8(v1+161, v0);
    ST8(v1+162, v0);
    ST8(v1+163, v0);
    ST8(v1+164, v0);
    ST8(v1+165, v0);
    ST8(v1+166, v0);
    ST8(v1+167, v0);
    ST8(v1+168, v0);
    ST8(v1+169, v0);
    ST8(v1+170, v0);
    ST8(v1+171, v0);
    ST8(v1+172, v0);
    ST8(v1+173, v0);
    ST8(v1+174, v0);
    ST8(v1+175, v0);
    ST8(v1+176, v0);
    ST8(v1+177, v0);
    ST8(v1+178, v0);
    ST8(v1+179, v0);
    ST8(v1+180, v0);
    ST8(v1+181, v0);
    ST8(v1+182, v0);
    ST8(v1+183, v0);
    ST8(v1+184, v0);
    ST8(v1+185, v0);
    ST8(v1+186, v0);
    ST8(v1+187, v0);
    ST8(v1+188, v0);
    ST8(v1+189, v0);
    ST8(v1+190, v0);
    ST8(v1+191, v0);
    ST8(v1+192, v0);
    ST8(v1+193, v0);
    ST8(v1+194, v0);
    ST8(v1+195, v0);
    ST8(v1+196, v0);
    ST8(v1+197, v0);
    ST8(v1+198, v0);
    ST8(v1+199, v0);
    ST8(v1+200, v0);
    ST8(v1+201, v0);
    ST8(v1+202, v0);
    ST8(v1+203, v0);
    ST8(v1+209, v0);
    ST8(v1+204, v0);
    ST8(v1+205, v0);
    ST8(v1+206, v0);
    ST8(v1+207, v0);
    ST8(v1+208, v0);
    goto L_08A9CC28;
L_08A9CC28:;
    s0 = 0 + 0;
    v0 = s0 << 2;
    goto L_08A9CC30;
L_08A9CC30:;
    a0 = v0 + s2;
    v0 = v0 + s3;
    a3 = LD32(v0);
    a2 = LD32(a0);
    v1 = 0 < a3;
    v0 = 0 < a2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08A9CC70; }
    goto L_08A9CC54;
L_08A9CC54:;
    v0 = s0 + s1;
    a0 = a3 + 0;
    cnd_ = a2 == a3;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A9CC6C; }
    goto L_08A9CC64;
L_08A9CC64:;
    a2 = LD_U8(v0);
    func_08A87AE0(a0, a1, a2);
    goto L_08A9CC6C;
L_08A9CC6C:;
    s0 = s0 + 1;
    goto L_08A9CC70;
L_08A9CC70:;
    v0 = (s32)s0 < 210;
    cnd_ = v0 != 0;
    v0 = s0 << 2;
    if (cnd_) { goto L_08A9CC30; }
    goto L_08A9CC7C;
L_08A9CC7C:;
    v0 = LD32(s2+116);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+844); goto L_08A9CC8C; }
    goto L_08A9CC88;
L_08A9CC88:;
    a0 = LD32(v0);
    goto L_08A9CC8C;
L_08A9CC8C:;
    v0 = LD32(s3+844);
    v1 = LD32(s2+868);
    v0 = a0 - v0;
    v0 = v0 + v1;
    sp = sp + 32;
    return v0;
}

/* 08A9CCB8 */
rv_t func_08A9CCB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1776] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1776);
L_08A9CCB8:;
    sp = sp - 1776;
    s4 = 7;
    s3 = 8;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a0 = s0 + 0;
    goto L_08A9CCE8;
L_08A9CCE8:;
    a1 = sp + 0;
    v0 = func_08A9C38C(a0, a1);
    goto L_08A9CCF0;
L_08A9CCF0:;
    a2 = v0 + 0;
    v1 = LD32(s2+16);
    v0 = LD32(s0+848);
    s1 = 4;
    t0 = s2 + 0;
    v0 = v0 ^ v1;
    if (v0 != 0) s1 = 0;
    t1 = s0 + 0;
    a0 = 1;
    a1 = s1 | 0x2;
    cnd_ = a2 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A9CD64; }
    goto L_08A9CD20;
L_08A9CD20:;
    v0 = LD32(sp+1712);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9CD48; }
    goto L_08A9CD2C;
L_08A9CD2C:;
    a0 = s0 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A9CD84; }
    goto L_08A9CD38;
L_08A9CD38:;
    func_08A9C7B4(a0, a1);
    goto L_08A9CD40;
L_08A9CD40:;
    a0 = s0 + 0;
    goto L_08A9CCE8;
L_08A9CD48:;
    a2 = LD32(s2);
    t_ = v0;
    a3 = LD32(s2+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9CD54;
L_08A9CD54:;
    cnd_ = v0 == s4;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A9CD64; }
    goto L_08A9CD5C;
L_08A9CD5C:;
    cnd_ = a2 == s3;
    v0 = 2;
    if (cnd_) { goto L_08A9CD2C; }
    goto L_08A9CD64;
L_08A9CD64:;
    sp = sp + 1776;
    return (rv_t){ v0, v1, f0 };
L_08A9CD84:;
    { rv_t r_ = func_08A96820(a0, a1, a2, 0, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { rv_t r_ = func_08A9CD8C(a0, a1, a2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A9CD8C */
rv_t func_08A9CD8C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[3632] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 3632);
L_08A9CD8C:;
    sp = sp - 3632;
    ST32(sp+3528, a2);
    a2 = ra + 0;
    ST32(sp+3524, a1);
    a1 = sp + 3632;
    ST32(sp+3520, a0);
    ST32(sp+3504, a0);
    a0 = sp + 0;
    ST32(sp+3532, a3);
    ST32(sp+3572, ra);
    func_08A9C800(a0, a1, a2);
    goto L_08A9CE0C;
L_08A9CE0C:;
    a3 = sp + 880;
    a2 = sp + 0;
    t0 = sp + 864;
    goto L_08A9CE18;
L_08A9CE18:;
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
    if (cnd_) { goto L_08A9CE18; }
    goto L_08A9CE44;
L_08A9CE44:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    ST32(a3, v0);
    ST32(a3+4, v1);
    a0 = sp + 880;
    goto L_08A9CE58;
L_08A9CE58:;
    a1 = sp + 1760;
    v0 = func_08A9C38C(a0, a1);
    goto L_08A9CE60;
L_08A9CE60:;
    v1 = v0 + 0;
    v0 = 5;
    t0 = LD32(sp+3504);
    t1 = sp + 880;
    a0 = 1;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08A9CEC0; }
    goto L_08A9CE7C;
L_08A9CE7C:;
    cnd_ = v1 != 0;
    v0 = LD32(sp+3472);
    if (cnd_) { goto L_08A9CEBC; }
    goto L_08A9CE84;
L_08A9CE84:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 880; goto L_08A9CEAC; }
    goto L_08A9CE8C;
L_08A9CE8C:;
    a2 = LD32(t0);
    t_ = v0;
    a3 = LD32(t0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9CE98;
L_08A9CE98:;
    a0 = 6;
    cnd_ = v0 == a0;
    a1 = 8;
    if (cnd_) { goto L_08A9CF38; }
    goto L_08A9CEA4;
L_08A9CEA4:;
    cnd_ = v0 != a1;
    a0 = sp + 880;
    if (cnd_) { goto L_08A9CEBC; }
    goto L_08A9CEAC;
L_08A9CEAC:;
    a1 = sp + 1760;
    func_08A9C7B4(a0, a1);
    goto L_08A9CEB4;
L_08A9CEB4:;
    a0 = sp + 880;
    goto L_08A9CE58;
L_08A9CEBC:;
    v0 = 3;
    goto L_08A9CEC0;
L_08A9CEC0:;
    v1 = 0 + 0;
    goto L_08A9CEC4;
L_08A9CEC4:;
    ra = LD32(sp+3572);
    a3 = LD32(sp+3532);
    a2 = LD32(sp+3528);
    a1 = LD32(sp+3524);
    a0 = LD32(sp+3520);
    v1 = v1 + 3632;
    sp = sp + v1;
    return (rv_t){ v0, v1, f0 };
L_08A9CF38:;
    t0 = LD32(sp+3504);
    v0 = LD32(sp+1728);
    a3 = sp + 880;
    ST32(t0+12, 0);
    a2 = sp + 0;
    ST32(t0+16, v0);
    t0 = sp + 864;
    goto L_08A9CF54;
L_08A9CF54:;
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
    if (cnd_) { goto L_08A9CF54; }
    goto L_08A9CF80;
L_08A9CF80:;
    t1 = LD32(a2);
    v0 = LD32(a2+4);
    ST32(a3, t1);
    ST32(a3+4, v0);
    a1 = sp + 880;
    a0 = LD32(sp+3504);
    { rv_t r_ = func_08A9CCB8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9CF9C;
L_08A9CF9C:;
    v1 = v0 + 0;
    v0 = 7;
    cnd_ = v1 == v0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A9CFB4; }
    goto L_08A9CFAC;
L_08A9CFAC:;
    v0 = v1 + 0;
    goto L_08A9CEC0;
L_08A9CFB4:;
    a1 = sp + 880;
    v0 = func_08A9C8A4(a0, a1);
    goto L_08A9CFBC;
L_08A9CFBC:;
    a0 = LD32(sp+1728);
    v1 = v0 + 0;
    ST32(sp+3572, a0);
    goto L_08A9CEC4;
}

/* 08A9CFCC */
rv_t func_08A9CFCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1776] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1776);
L_08A9CFCC:;
    sp = sp - 1776;
    s6 = 7;
    s5 = 8;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s4 = LD32(a0+12);
    s3 = LD32(a0+16);
    a0 = s1 + 0;
    goto L_08A9D00C;
L_08A9D00C:;
    a1 = sp + 0;
    v0 = func_08A9C38C(a0, a1);
    goto L_08A9D014;
L_08A9D014:;
    v1 = v0 ^ 0x5;
    s0 = v0 + 0;
    a1 = 10;
    v0 = 26;
    if (v1 == 0) a1 = v0;
    v1 = 0 < v1;
    v0 = 0 < s0;
    v0 = v0 & v1;
    t0 = s2 + 0;
    t1 = s1 + 0;
    t2 = s3 + 0;
    a0 = 1;
    cnd_ = v0 != 0;
    v1 = 2;
    if (cnd_) { goto L_08A9D0B4; }
    goto L_08A9D04C;
L_08A9D04C:;
    a2 = LD32(s2);
    t_ = s4;
    a3 = LD32(s2+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D058;
L_08A9D058:;
    t0 = s2 + 0;
    t1 = s1 + 0;
    a0 = 1;
    a1 = 10;
    cnd_ = v0 != 0;
    v1 = 2;
    if (cnd_) { goto L_08A9D0B4; }
    goto L_08A9D070;
L_08A9D070:;
    v0 = 5;
    cnd_ = s0 == v0;
    v0 = LD32(sp+1712);
    if (cnd_) { goto L_08A9D0E0; }
    goto L_08A9D07C;
L_08A9D07C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_08A9D0A4; }
    goto L_08A9D084;
L_08A9D084:;
    a2 = LD32(s2);
    t_ = v0;
    a3 = LD32(s2+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D090;
L_08A9D090:;
    cnd_ = v0 == s6;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A9D0E0; }
    goto L_08A9D098;
L_08A9D098:;
    cnd_ = v0 != s5;
    v1 = 2;
    if (cnd_) { goto L_08A9D0B4; }
    goto L_08A9D0A0;
L_08A9D0A0:;
    a0 = s1 + 0;
    goto L_08A9D0A4;
L_08A9D0A4:;
    a1 = sp + 0;
    func_08A9C7B4(a0, a1);
    goto L_08A9D0AC;
L_08A9D0AC:;
    a0 = s1 + 0;
    goto L_08A9D00C;
L_08A9D0B4:;
    v0 = v1 + 0;
    sp = sp + 1776;
    return (rv_t){ v0, v1, f0 };
L_08A9D0E0:;
    v1 = s0 + 0;
    goto L_08A9D0B4;
}

/* 08A9D0E8 */
void func_08A9D0E8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1888] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1888);
L_08A9D0E8:;
    sp = sp - 1888;
    ST32(sp+1784, a2);
    ST32(sp+1780, a1);
    ST32(sp+1776, a0);
    ST32(sp+1760, a0);
    a0 = sp + 0;
    ST32(sp+1764, a1);
    a1 = sp + 1888;
    ST32(sp+1768, a2);
    a2 = ra + 0;
    ST32(sp+1788, a3);
    ST32(sp+1828, ra);
    func_08A9C800(a0, a1, a2);
    goto L_08A9D170;
L_08A9D170:;
    a3 = sp + 880;
    a2 = sp + 0;
    t0 = sp + 864;
    goto L_08A9D17C;
L_08A9D17C:;
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
    if (cnd_) { goto L_08A9D17C; }
    goto L_08A9D1A8;
L_08A9D1A8:;
    v0 = LD32(sp+1760);
    v1 = LD32(sp+1764);
    t0 = LD32(sp+1768);
    a0 = v0 + 0;
    ST32(v0+12, v1);
    ST32(v0+16, t0);
    t1 = LD32(a2);
    v0 = LD32(a2+4);
    ST32(a3, t1);
    ST32(a3+4, v0);
    a1 = sp + 880;
    { rv_t r_ = func_08A9CFCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D1D8;
L_08A9D1D8:;
    a0 = 7;
    cnd_ = v0 == a0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9D258; }
    goto L_08A9D1E4;
L_08A9D1E4:;
    ra = LD32(sp+1828);
    a3 = LD32(sp+1788);
    a2 = LD32(sp+1784);
    a1 = LD32(sp+1780);
    a0 = LD32(sp+1776);
    v1 = v1 + 1888;
    sp = sp + v1;
    return;
L_08A9D258:;
    a0 = sp + 0;
    a1 = sp + 880;
    v0 = func_08A9C8A4(a0, a1);
    goto L_08A9D264;
L_08A9D264:;
    a0 = LD32(sp+1728);
    v1 = v0 + 0;
    ST32(sp+1828, a0);
    goto L_08A9D1E4;
}

/* 08A9D274 */
rv_t func_08A9D274(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1888] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1888);
L_08A9D274:;
    sp = sp - 1888;
    ST32(sp+1784, a2);
    a2 = ra + 0;
    ST32(sp+1780, a1);
    a1 = sp + 1888;
    ST32(sp+1776, a0);
    ST32(sp+1760, a0);
    a0 = sp + 0;
    ST32(sp+1788, a3);
    ST32(sp+1828, ra);
    func_08A9C800(a0, a1, a2);
    goto L_08A9D2F4;
L_08A9D2F4:;
    a3 = sp + 880;
    a2 = sp + 0;
    t0 = sp + 864;
    goto L_08A9D300;
L_08A9D300:;
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
    if (cnd_) { goto L_08A9D300; }
    goto L_08A9D32C;
L_08A9D32C:;
    v1 = LD32(sp+1760);
    v0 = LD32(v1+12);
    a0 = LD32(a2);
    a1 = LD32(a2+4);
    ST32(a3, a0);
    ST32(a3+4, a1);
    cnd_ = v0 != 0;
    a0 = LD32(sp+1760);
    if (cnd_) { goto L_08A9D3EC; }
    goto L_08A9D34C;
L_08A9D34C:;
    a1 = sp + 880;
    { rv_t r_ = func_08A9CCB8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D354;
L_08A9D354:;
    v1 = v0 + 0;
    goto L_08A9D358;
L_08A9D358:;
    v0 = 7;
    cnd_ = v1 != v0;
    a1 = sp + 880;
    if (cnd_) { goto L_08A9D3FC; }
    goto L_08A9D364;
L_08A9D364:;
    a0 = sp + 0;
    v0 = func_08A9C8A4(a0, a1);
    goto L_08A9D36C;
L_08A9D36C:;
    v1 = v0 + 0;
    v0 = LD32(sp+1728);
    ST32(sp+1828, v0);
    v1 = v1 + 1888;
    ra = LD32(sp+1828);
    a3 = LD32(sp+1788);
    a2 = LD32(sp+1784);
    a1 = LD32(sp+1780);
    a0 = LD32(sp+1776);
    sp = sp + v1;
    return (rv_t){ v0, v1, f0 };
L_08A9D3EC:;
    a1 = sp + 880;
    { rv_t r_ = func_08A9CFCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D3F4;
L_08A9D3F4:;
    v1 = v0 + 0;
    goto L_08A9D358;
L_08A9D3FC:;
    { rv_t r_ = func_08A96820(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { rv_t r_ = func_08A9D404(0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A9D404 */
rv_t func_08A9D404(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1888] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1888);
L_08A9D404:;
    sp = sp - 1888;
    ST32(sp+1828, ra);
    ST32(sp+1788, a3);
    ST32(sp+1784, a2);
    ST32(sp+1780, a1);
    ST32(sp+1776, a0);
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(sp+1760, a0);
    if (cnd_) { goto L_08A9D4FC; }
    goto L_08A9D47C;
L_08A9D47C:;
    { rv_t r_ = func_08A9CD8C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D484;
L_08A9D484:;
    v1 = 0 + 0;
    goto L_08A9D488;
L_08A9D488:;
    ra = LD32(sp+1828);
    a3 = LD32(sp+1788);
    a2 = LD32(sp+1784);
    a1 = LD32(sp+1780);
    a0 = LD32(sp+1776);
    v1 = v1 + 1888;
    sp = sp + v1;
    return (rv_t){ v0, v1, f0 };
L_08A9D4FC:;
    a2 = ra + 0;
    a0 = sp + 0;
    a1 = sp + 1888;
    func_08A9C800(a0, a1, a2);
    goto L_08A9D50C;
L_08A9D50C:;
    a3 = sp + 880;
    a2 = sp + 0;
    t0 = sp + 864;
    goto L_08A9D518;
L_08A9D518:;
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
    if (cnd_) { goto L_08A9D518; }
    goto L_08A9D544;
L_08A9D544:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    ST32(a3, v0);
    ST32(a3+4, v1);
    a1 = sp + 880;
    a0 = LD32(sp+1760);
    { rv_t r_ = func_08A9CFCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D560;
L_08A9D560:;
    v1 = 7;
    cnd_ = v0 != v1;
    a0 = sp + 0;
    if (cnd_) { goto L_08A9D584; }
    goto L_08A9D56C;
L_08A9D56C:;
    a1 = sp + 880;
    v0 = func_08A9C8A4(a0, a1);
    goto L_08A9D574;
L_08A9D574:;
    a0 = LD32(sp+1728);
    v1 = v0 + 0;
    ST32(sp+1828, a0);
    goto L_08A9D488;
L_08A9D584:;
    { rv_t r_ = func_08A96820(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { rv_t r_ = func_08A9D58C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A9D58C */
rv_t func_08A9D58C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9D58C:;
    sp = sp - 16;
    a1 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A9D5B0; }
    goto L_08A9D5A4;
L_08A9D5A4:;
    goto L_08A9D5A8;
L_08A9D5A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A9D5B0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D5B8;
L_08A9D5B8:;
    goto L_08A9D5A8;
}

/* 08A9D5C0 */
void func_08A9D5C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[2736] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 2736);
L_08A9D5C0:;
    sp = sp - 2736;
    ST32(sp+2624, a0);
    a2 = ra + 0;
    a0 = sp + 0;
    ST32(sp+2628, a1);
    a1 = sp + 2736;
    func_08A9C800(a0, a1, a2);
    goto L_08A9D634;
L_08A9D634:;
    a0 = sp + 0;
    goto L_08A9D638;
L_08A9D638:;
    a1 = sp + 880;
    v0 = func_08A9C38C(a0, a1);
    goto L_08A9D640;
L_08A9D640:;
    ST32(sp+2632, v0);
    v0 = v0 ^ 0x5;
    v0 = 0 < v0;
    a0 = LD32(sp+2632);
    a1 = LD32(sp+2628);
    a2 = 3;
    v1 = 0 < a0;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A9D6A4; }
    goto L_08A9D668;
L_08A9D668:;
    v1 = LD32(sp+2624);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9D674;
L_08A9D674:;
    a0 = sp + 0;
    a1 = sp + 880;
    cnd_ = v0 != 0;
    a2 = 3;
    if (cnd_) { goto L_08A9D6A4; }
    goto L_08A9D684;
L_08A9D684:;
    a2 = LD32(sp+2632);
    v0 = 5;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_08A9D6A8; }
    goto L_08A9D694;
L_08A9D694:;
    func_08A9C7B4(a0, a1);
    goto L_08A9D69C;
L_08A9D69C:;
    a0 = sp + 0;
    goto L_08A9D638;
L_08A9D6A4:;
    goto L_08A9D6A8;
L_08A9D6A8:;
    v0 = a2 + 0;
    sp = sp + 2736;
    return;
}

/* 08A9D708 */
void func_08A9D708(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
L_08A9D708:;
    a1 = a1 << 2;
    a1 = a1 + a0;
    v0 = LD32(a1);
    ST32(v0, a2);
    return;
}

/* 08A9D71C */
u32 func_08A9D71C(u32 a0)
{
    u32 v0 = 0;
L_08A9D71C:;
    v0 = LD32(a0+848);
    return v0;
}

/* 08A9D724 */
void func_08A9D724(u32 a0, u32 a1)
{
L_08A9D724:;
    ST32(a0+848, a1);
    return;
}

/* 08A9D72C */
void func_08A9D72C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08A9D72C:;
    v0 = D_08C38AB4 - (-30028);
    v1 = 4;
    a0 = v0 - 30028;
    ST8(v0-30028, v1);
    ST8(a0+1, v1);
    ST8(a0+2, v1);
    ST8(a0+3, v1);
    ST8(a0+4, v1);
    ST8(a0+5, v1);
    ST8(a0+6, v1);
    ST8(a0+7, v1);
    ST8(a0+8, v1);
    ST8(a0+9, v1);
    ST8(a0+10, v1);
    ST8(a0+11, v1);
    ST8(a0+12, v1);
    ST8(a0+13, v1);
    ST8(a0+14, v1);
    ST8(a0+15, v1);
    ST8(a0+16, v1);
    ST8(a0+17, v1);
    ST8(a0+18, v1);
    ST8(a0+19, v1);
    ST8(a0+20, v1);
    ST8(a0+21, v1);
    ST8(a0+22, v1);
    ST8(a0+23, v1);
    ST8(a0+24, v1);
    ST8(a0+25, v1);
    ST8(a0+26, v1);
    ST8(a0+27, v1);
    ST8(a0+28, v1);
    ST8(a0+29, v1);
    ST8(a0+30, v1);
    ST8(a0+64, v1);
    ST8(a0+32, v1);
    ST8(a0+33, v1);
    ST8(a0+34, v1);
    ST8(a0+35, v1);
    ST8(a0+36, v1);
    ST8(a0+37, v1);
    ST8(a0+38, v1);
    ST8(a0+39, v1);
    ST8(a0+40, v1);
    ST8(a0+41, v1);
    ST8(a0+42, v1);
    ST8(a0+43, v1);
    ST8(a0+44, v1);
    ST8(a0+45, v1);
    ST8(a0+46, v1);
    ST8(a0+47, v1);
    ST8(a0+48, v1);
    ST8(a0+49, v1);
    ST8(a0+50, v1);
    ST8(a0+51, v1);
    ST8(a0+52, v1);
    ST8(a0+53, v1);
    ST8(a0+54, v1);
    ST8(a0+55, v1);
    ST8(a0+56, v1);
    ST8(a0+57, v1);
    ST8(a0+58, v1);
    ST8(a0+59, v1);
    ST8(a0+60, v1);
    ST8(a0+61, v1);
    ST8(a0+62, v1);
    ST8(a0+63, v1);
    ST8(a0+64, v1);
    ST8(a0+65, v1);
    ST8(a0+66, v1);
    ST8(a0+67, v1);
    ST8(a0+68, v1);
    ST8(a0+69, v1);
    ST8(a0+70, v1);
    ST8(a0+71, v1);
    ST8(a0+72, v1);
    ST8(a0+73, v1);
    ST8(a0+74, v1);
    ST8(a0+75, v1);
    ST8(a0+76, v1);
    ST8(a0+77, v1);
    ST8(a0+78, v1);
    ST8(a0+79, v1);
    ST8(a0+80, v1);
    ST8(a0+81, v1);
    ST8(a0+82, v1);
    ST8(a0+83, v1);
    ST8(a0+84, v1);
    ST8(a0+85, v1);
    ST8(a0+86, v1);
    ST8(a0+87, v1);
    ST8(a0+88, v1);
    ST8(a0+89, v1);
    ST8(a0+90, v1);
    ST8(a0+91, v1);
    ST8(a0+92, v1);
    ST8(a0+93, v1);
    ST8(a0+94, v1);
    ST8(a0+95, v1);
    ST8(a0+96, v1);
    ST8(a0+97, v1);
    ST8(a0+98, v1);
    ST8(a0+99, v1);
    ST8(a0+100, v1);
    ST8(a0+101, v1);
    ST8(a0+102, v1);
    ST8(a0+103, v1);
    ST8(a0+104, v1);
    ST8(a0+105, v1);
    ST8(a0+106, v1);
    ST8(a0+107, v1);
    ST8(a0+108, v1);
    ST8(a0+109, v1);
    ST8(a0+110, v1);
    ST8(a0+111, v1);
    ST8(a0+112, v1);
    ST8(a0+113, v1);
    ST8(a0+114, v1);
    ST8(a0+115, v1);
    ST8(a0+116, v1);
    ST8(a0+117, v1);
    ST8(a0+118, v1);
    ST8(a0+119, v1);
    ST8(a0+120, v1);
    ST8(a0+121, v1);
    ST8(a0+122, v1);
    ST8(a0+123, v1);
    ST8(a0+124, v1);
    ST8(a0+125, v1);
    ST8(a0+126, v1);
    ST8(a0+127, v1);
    ST8(a0+128, v1);
    ST8(a0+129, v1);
    ST8(a0+130, v1);
    ST8(a0+131, v1);
    ST8(a0+132, v1);
    ST8(a0+133, v1);
    ST8(a0+134, v1);
    ST8(a0+135, v1);
    ST8(a0+136, v1);
    ST8(a0+137, v1);
    ST8(a0+138, v1);
    ST8(a0+139, v1);
    ST8(a0+140, v1);
    ST8(a0+141, v1);
    ST8(a0+142, v1);
    ST8(a0+143, v1);
    ST8(a0+144, v1);
    ST8(a0+145, v1);
    ST8(a0+146, v1);
    ST8(a0+147, v1);
    ST8(a0+148, v1);
    ST8(a0+149, v1);
    ST8(a0+150, v1);
    ST8(a0+151, v1);
    ST8(a0+152, v1);
    ST8(a0+153, v1);
    ST8(a0+154, v1);
    ST8(a0+155, v1);
    ST8(a0+156, v1);
    ST8(a0+157, v1);
    ST8(a0+158, v1);
    ST8(a0+159, v1);
    ST8(a0+160, v1);
    ST8(a0+161, v1);
    ST8(a0+162, v1);
    ST8(a0+163, v1);
    ST8(a0+164, v1);
    ST8(a0+165, v1);
    ST8(a0+166, v1);
    ST8(a0+167, v1);
    ST8(a0+168, v1);
    ST8(a0+169, v1);
    ST8(a0+170, v1);
    ST8(a0+171, v1);
    ST8(a0+172, v1);
    ST8(a0+173, v1);
    ST8(a0+174, v1);
    ST8(a0+175, v1);
    ST8(a0+176, v1);
    ST8(a0+177, v1);
    ST8(a0+178, v1);
    ST8(a0+179, v1);
    ST8(a0+180, v1);
    ST8(a0+181, v1);
    ST8(a0+182, v1);
    ST8(a0+183, v1);
    ST8(a0+184, v1);
    ST8(a0+185, v1);
    ST8(a0+186, v1);
    ST8(a0+187, v1);
    ST8(a0+188, v1);
    ST8(a0+189, v1);
    ST8(a0+190, v1);
    ST8(a0+191, v1);
    ST8(a0+192, v1);
    ST8(a0+193, v1);
    ST8(a0+194, v1);
    ST8(a0+195, v1);
    ST8(a0+196, v1);
    ST8(a0+197, v1);
    ST8(a0+198, v1);
    ST8(a0+199, v1);
    ST8(a0+200, v1);
    ST8(a0+201, v1);
    ST8(a0+202, v1);
    ST8(a0+203, v1);
    ST8(a0+209, v1);
    ST8(a0+204, v1);
    ST8(a0+205, v1);
    ST8(a0+206, v1);
    ST8(a0+207, v1);
    ST8(a0+208, v1);
    return;
}

/* 08A9DA84 */
u32 func_08A9DA84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DA84:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    v0 = 255;
    v1 = a0 & 0x7;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A9DAC8; }
    goto L_08A9DAA0;
L_08A9DAA0:;
    v0 = 2;
    a0 = (s32)v1 < 3;
    cnd_ = v1 == v0;
    a1 = 2;
    if (cnd_) { goto L_08A9DAC8; }
    goto L_08A9DAB0;
L_08A9DAB0:;
    cnd_ = a0 == 0;
    a1 = 4;
    if (cnd_) { goto L_08A9DAD8; }
    goto L_08A9DAB8;
L_08A9DAB8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A9DACC; }
    goto L_08A9DAC0;
L_08A9DAC0:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DAC8;
L_08A9DAC8:;
    goto L_08A9DACC;
L_08A9DACC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08A9DAD8:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A9DAC8; }
    goto L_08A9DAE4;
L_08A9DAE4:;
    cnd_ = v1 != v0;
    a1 = 8;
    if (cnd_) { goto L_08A9DAC0; }
    goto L_08A9DAEC;
L_08A9DAEC:;
    goto L_08A9DACC;
}

/* 08A9DAF4 */
u32 func_08A9DAF4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A9DAF4:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A9DAFC;
L_08A9DAFC:;
    v1 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = v1 & 0x7f;
    v0 = v0 << (a2 & 31);
    v1 = (u32)(s32)(s8)v1;
    a3 = a3 | v0;
    cnd_ = (s32)v1 < 0;
    a2 = a2 + 7;
    if (cnd_) { goto L_08A9DAFC; }
    goto L_08A9DB1C;
L_08A9DB1C:;
    v0 = a0 + 0;
    ST32(a1, a3);
    return v0;
}

/* 08A9DB28 */
u32 func_08A9DB28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A9DB28:;
    a3 = 0 + 0;
    t0 = 0 + 0;
    goto L_08A9DB30;
L_08A9DB30:;
    a2 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = a2 & 0x7f;
    v0 = v0 << (a3 & 31);
    v1 = (u32)(s32)(s8)a2;
    t0 = t0 | v0;
    cnd_ = (s32)v1 < 0;
    a3 = a3 + 7;
    if (cnd_) { goto L_08A9DB30; }
    goto L_08A9DB50;
L_08A9DB50:;
    v0 = a3 < 0x20u;
    cnd_ = v0 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08A9DB78; }
    goto L_08A9DB5C;
L_08A9DB5C:;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A9DB78; }
    goto L_08A9DB68;
L_08A9DB68:;
    v0 = (u32)-1;
    v0 = v0 << (a3 & 31);
    t0 = t0 | v0;
    v0 = a0 + 0;
    goto L_08A9DB78;
L_08A9DB78:;
    ST32(a1, t0);
    return v0;
}

/* 08A9DB80 */
u32 func_08A9DB80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9DB80:;
    sp = sp - 48;
    v0 = 80;
    s0 = a0 & 0xff;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A9DCA8; }
    goto L_08A9DBB0;
L_08A9DBB0:;
    v1 = s0 & 0xf;
    v0 = v1 < 0xdu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A9DCBC; }
    goto L_08A9DBC0;
L_08A9DBC0:;
    v1 = D_08AEAD98 - (-21096);
    v1 = v1 - 21096;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A9DBD8u: goto L_08A9DBD8; case 0x08A9DC3Cu: goto L_08A9DC3C; case 0x08A9DC54u: goto L_08A9DC54; case 0x08A9DC68u: goto L_08A9DC68; case 0x08A9DC84u: goto L_08A9DC84; case 0x08A9DC94u: goto L_08A9DC94; case 0x08A9DCBCu: goto L_08A9DCBC; default: rs_break(0, 0x08a9dbd0); }
L_08A9DBD8:;
    a0 = a2 + 0;
    a1 = sp + 0;
    v0 = func_08A9DAF4(a0, a1);
    goto L_08A9DBE4;
L_08A9DBE4:;
    a0 = LD32(sp);
    goto L_08A9DBE8;
L_08A9DBE8:;
    a2 = v0 + 0;
    goto L_08A9DBEC;
L_08A9DBEC:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1, a0); goto L_08A9DC14; }
    goto L_08A9DBF4;
L_08A9DBF4:;
    v0 = s0 & 0x70;
    a1 = a0 + s3;
    v0 = v0 ^ 0x10;
    a0 = a0 + s2;
    v1 = (u32)(s32)(s8)s0;
    cnd_ = (s32)v1 < 0;
    if (v0 != 0) a0 = a1;
    if (cnd_) { goto L_08A9DC34; }
    goto L_08A9DC10;
L_08A9DC10:;
    ST32(s1, a0);
    goto L_08A9DC14;
L_08A9DC14:;
    v0 = a2 + 0;
    sp = sp + 48;
    return v0;
L_08A9DC34:;
    a0 = LD32(a0);
    goto L_08A9DC10;
L_08A9DC3C:;
    v0 = LD_U8(a2+1);
    v1 = LD_U8(a2);
    a2 = a2 + 2;
    v0 = v0 << 8;
    a0 = v0 | v1;
    goto L_08A9DBEC;
L_08A9DC54:;
    a0 = a2 + 0;
    a1 = sp + 4;
    v0 = func_08A9DB28(a0, a1);
    goto L_08A9DC60;
L_08A9DC60:;
    a0 = LD32(sp+4);
    goto L_08A9DBE8;
L_08A9DC68:;
    v0 = LD_U8(a2+1);
    v1 = LD_U8(a2);
    a2 = a2 + 2;
    v0 = v0 << 8;
    v0 = v0 | v1;
    a0 = (u32)(s32)(s16)v0;
    goto L_08A9DBEC;
L_08A9DC84:;
    a0 = LDU32(a2);
    a2 = a2 + 4;
    goto L_08A9DBEC;
L_08A9DC94:;
    v0 = LDU32(a2);
    a2 = a2 + 8;
    a0 = v0 + 0;
    goto L_08A9DBEC;
L_08A9DCA8:;
    v0 = a2 + 3;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a0 = LD32(v0);
    a2 = v0 + 4;
    goto L_08A9DC10;
L_08A9DCBC:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { u64 r_ = func_08A9DCC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return v0;
}

/* 08A9DCC4 */
u64 func_08A9DCC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DCC4:;
    sp = sp - 16;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A9DCEC; }
    goto L_08A9DCDC;
L_08A9DCDC:;
    goto L_08A9DCE0;
L_08A9DCE0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A9DCEC:;
    v0 = (u32)-1;
    ST32(a1, v0);
    v0 = 2040;
    ST32(a1+4, a2);
    ST32(a1+12, a0);
    ST32(a1+8, a3);
    ST32(a1+16, v0);
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DD0C;
L_08A9DD0C:;
    a1 = D_08C38B90 - (-29808);
    a2 = LD32(a1-29808);
    v1 = D_08C38B88 - (-29816);
    a0 = v0 + 0;
    ST32(s0+20, a2);
    ST32(v1-29816, v0);
    ST32(a1-29808, s0);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DD2C;
L_08A9DD2C:;
    goto L_08A9DCE0;
}

/* 08A9DD34 */
rv_t func_08A9DD34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DD34:;
    sp = sp - 16;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_08A9DCC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9DD48;
L_08A9DD48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9DD54 */
void func_08A9DD54(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DD54:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = 24;
    if (cnd_) { goto L_08A9DD80; }
    goto L_08A9DD70;
L_08A9DD70:;
    goto L_08A9DD74;
L_08A9DD74:;
    sp = sp + 16;
    return;
L_08A9DD80:;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DD88;
L_08A9DD88:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08A9DD34(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DD94;
L_08A9DD94:;
    goto L_08A9DD74;
}

/* 08A9DD9C */
void func_08A9DD9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DD9C:;
    v0 = (u32)-1;
    ST32(a1, v0);
    v0 = 2042;
    sp = sp - 16;
    ST32(a1+8, a3);
    ST32(a1+4, a2);
    ST32(a1+12, a0);
    ST32(a1+16, v0);
    s0 = a1 + 0;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DDCC;
L_08A9DDCC:;
    a1 = D_08C38B90 - (-29808);
    a2 = LD32(a1-29808);
    v1 = D_08C38B88 - (-29816);
    a0 = v0 + 0;
    ST32(s0+20, a2);
    ST32(v1-29816, v0);
    ST32(a1-29808, s0);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DDEC;
L_08A9DDEC:;
    sp = sp + 16;
    return;
}

/* 08A9DDFC */
void func_08A9DDFC(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DDFC:;
    sp = sp - 16;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08A9DD9C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DE10;
L_08A9DE10:;
    sp = sp + 16;
    return;
}

/* 08A9DE1C */
void func_08A9DE1C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DE1C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 24;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DE34;
L_08A9DE34:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_08A9DDFC(a0, a1, 0, 0, 0, 0);
    goto L_08A9DE40;
L_08A9DE40:;
    sp = sp + 16;
    return;
}

/* 08A9DE50 */
u64 func_08A9DE50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DE50:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A9DE88; }
    goto L_08A9DE70;
L_08A9DE70:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A9DE88:;
    s1 = D_08C38B88 - (-29816);
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DE90;
L_08A9DE90:;
    v1 = D_08C38B90 - (-29808);
    a0 = LD32(v1-29808);
    ST32(s1-29816, v0);
    cnd_ = a0 == 0;
    a1 = v1 - 29808;
    if (cnd_) { goto L_08A9DEC0; }
    goto L_08A9DEA4;
L_08A9DEA4:;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    cnd_ = v0 == s0;
    if (cnd_) { s0 = v1 + 0; goto L_08A9DF2C; }
    goto L_08A9DEB4;
L_08A9DEB4:;
    v0 = LD32(v1+20);
    cnd_ = v0 != 0;
    a1 = v1 + 20;
    if (cnd_) { goto L_08A9DEA4; }
    goto L_08A9DEC0;
L_08A9DEC0:;
    v0 = D_08C38B94 - (-29804);
    v1 = LD32(v0-29804);
    cnd_ = v1 == 0;
    a1 = v0 - 29804;
    if (cnd_) { goto L_08A9DF38; }
    goto L_08A9DED0;
L_08A9DED0:;
    a0 = LD32(a1);
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(a0+12);
    if (cnd_) { goto L_08A9DF20; }
    goto L_08A9DEE4;
L_08A9DEE4:;
    v1 = LD32(v0);
    cnd_ = v1 == s0;
    v0 = LD32(a0+20);
    if (cnd_) { goto L_08A9DF00; }
    goto L_08A9DEF0;
L_08A9DEF0:;
    cnd_ = v0 != 0;
    a1 = a0 + 20;
    if (cnd_) { goto L_08A9DED0; }
    goto L_08A9DEF8;
L_08A9DEF8:;
    goto L_08A9DF38;
L_08A9DF00:;
    s0 = a0 + 0;
    ST32(a1, v0);
    a0 = LD32(a0+12);
    { rv_t r_ = func_088F9A14(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DF10;
L_08A9DF10:;
    a0 = LD32(s1-29816);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DF18;
L_08A9DF18:;
    v1 = s0 + 0;
    goto L_08A9DE70;
L_08A9DF20:;
    cnd_ = v0 != s0;
    if (cnd_) { v0 = LD32(a0+20); goto L_08A9DEF0; }
    goto L_08A9DF28;
L_08A9DF28:;
    s0 = a0 + 0;
    goto L_08A9DF2C;
L_08A9DF2C:;
    v0 = LD32(s0+20);
    ST32(a1, v0);
    goto L_08A9DF10;
L_08A9DF38:;
    a0 = LD32(s1-29816);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9DF40;
L_08A9DF40:;
    { rv_t r_ = func_08A96820(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { rv_t r_ = func_08A9DF48(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (u64)v0 | ((u64)v1 << 32);
}

/* 08A9DF48 */
rv_t func_08A9DF48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DF48:;
    sp = sp - 16;
    { u64 r_ = func_08A9DE50(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9DF58;
L_08A9DF58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9DF64 */
void func_08A9DF64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DF64:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A9DF84; }
    goto L_08A9DF78;
L_08A9DF78:;
    goto L_08A9DF7C;
L_08A9DF7C:;
    sp = sp + 16;
    return;
L_08A9DF84:;
    { rv_t r_ = func_08A9DF48(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DF8C;
L_08A9DF8C:;
    a0 = v0 + 0;
    { rv_t r_ = func_088F9A14(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DF94;
L_08A9DF94:;
    goto L_08A9DF7C;
}

/* 08A9DF9C */
u32 func_08A9DF9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9DF9C:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    v0 = 255;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9DFD8; }
    goto L_08A9DFB4;
L_08A9DFB4:;
    a0 = a0 & 0x70;
    v0 = 32;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 33;
    if (cnd_) { goto L_08A9E008; }
    goto L_08A9DFC4;
L_08A9DFC4:;
    cnd_ = v0 == 0;
    v0 = 48;
    if (cnd_) { goto L_08A9DFF8; }
    goto L_08A9DFCC;
L_08A9DFCC:;
    cnd_ = a0 != 0;
    v0 = 16;
    if (cnd_) { goto L_08A9DFE8; }
    goto L_08A9DFD4;
L_08A9DFD4:;
    v1 = 0 + 0;
    goto L_08A9DFD8;
L_08A9DFD8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A9DFE8:;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9DFD8; }
    goto L_08A9DFF0;
L_08A9DFF0:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9DFF8;
L_08A9DFF8:;
    cnd_ = a0 != v0;
    v0 = 80;
    if (cnd_) { goto L_08A9DFE8; }
    goto L_08A9E000;
L_08A9E000:;
    v1 = LD32(a1+8);
    goto L_08A9DFD8;
L_08A9E008:;
    v1 = LD32(a1+4);
    goto L_08A9DFD8;
}

/* 08A9E010 */
u32 func_08A9E010(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9E010:;
    sp = sp - 48;
    v0 = 122;
    s1 = a0 + 0;
    s0 = a0 + 9;
    v1 = LD_U8(a0+9);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A9E060; }
    goto L_08A9E040;
L_08A9E040:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_08A9E060:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9E068;
L_08A9E068:;
    v0 = s0 + v0;
    v0 = v0 + 1;
    a0 = v0 + 0;
    a1 = sp + 0;
    v0 = func_08A9DAF4(a0, a1);
    goto L_08A9E07C;
L_08A9E07C:;
    a0 = v0 + 0;
    a1 = sp + 4;
    v0 = func_08A9DB28(a0, a1);
    goto L_08A9E088;
L_08A9E088:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    a1 = sp + 0;
    s0 = s1 + 10;
    v0 = func_08A9DAF4(a0, a1);
    goto L_08A9E09C;
L_08A9E09C:;
    s2 = 82;
    s1 = 80;
    s3 = 76;
    goto L_08A9E0A8;
L_08A9E0A8:;
    v1 = LD_U8(s0);
    a2 = v0 + 1;
    a1 = 0 + 0;
    cnd_ = v1 == s2;
    a3 = sp + 8;
    if (cnd_) { goto L_08A9E0E8; }
    goto L_08A9E0BC;
L_08A9E0BC:;
    cnd_ = v1 == s1;
    if (cnd_) { a0 = LD_U8(v0); goto L_08A9E0D8; }
    goto L_08A9E0C4;
L_08A9E0C4:;
    v0 = v0 + 1;
    cnd_ = v1 != s3;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A9E040; }
    goto L_08A9E0D0;
L_08A9E0D0:;
    s0 = s0 + 1;
    goto L_08A9E0A8;
L_08A9E0D8:;
    a0 = a0 & 0x7f;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E0E0;
L_08A9E0E0:;
    s0 = s0 + 1;
    goto L_08A9E0A8;
L_08A9E0E8:;
    a0 = LD_U8(v0);
    goto L_08A9E040;
}

/* 08A9E0F0 */
rv_t func_08A9E0F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A9E0F0:;
    a0 = LD32(a1+8);
    v1 = LD32(a2+8);
    v0 = v1 < a0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A9E110; }
    goto L_08A9E104;
L_08A9E104:;
    v0 = a0 < v1;
    a1 = (u32)-1;
    if (v0 == 0) a1 = 0;
    goto L_08A9E110;
L_08A9E110:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9E118 */
rv_t func_08A9E118(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9E118:;
    sp = sp - 48;
    s2 = a2 + 0;
    s2 = s2 + 8;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = s1 + 0;
    a0 = LD32(a0+16);
    s0 = s0 + 8;
    a0 = (a0 >> 3) & 0xff;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E154;
L_08A9E154:;
    a0 = LD32(s1+16);
    a2 = s0 + 0;
    a1 = v0 + 0;
    a0 = (a0 >> 3) & 0xff;
    a3 = sp + 0;
    s3 = v0 + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E170;
L_08A9E170:;
    a0 = LD32(s1+16);
    a1 = s3 + 0;
    a2 = s2 + 0;
    a0 = (a0 >> 3) & 0xff;
    a3 = sp + 4;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E188;
L_08A9E188:;
    a0 = LD32(sp);
    v1 = LD32(sp+4);
    v0 = v1 < a0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A9E1A8; }
    goto L_08A9E19C;
L_08A9E19C:;
    v0 = a0 < v1;
    a1 = (u32)-1;
    if (v0 == 0) a1 = 0;
    goto L_08A9E1A8;
L_08A9E1A8:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9E1C8 */
rv_t func_08A9E1C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9E1C8:;
    sp = sp - 48;
    s3 = a0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s1 = s1 + 8;
    v0 = LD32(a1+4);
    v0 = a1 - v0;
    v0 = v0 + 4;
    a0 = v0 + 0;
    v0 = func_08A9E010(a0);
    goto L_08A9E204;
L_08A9E204:;
    s0 = v0 & 0xff;
    a0 = s0 + 0;
    a1 = s3 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E214;
L_08A9E214:;
    a1 = v0 + 0;
    a2 = s1 + 0;
    a3 = sp + 0;
    a0 = s0 + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E228;
L_08A9E228:;
    a0 = LD32(s2+4);
    a0 = s2 - a0;
    a0 = a0 + 4;
    v0 = func_08A9E010(a0);
    goto L_08A9E238;
L_08A9E238:;
    s0 = v0 & 0xff;
    a1 = s3 + 0;
    a0 = s0 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E248;
L_08A9E248:;
    s2 = s2 + 8;
    a0 = s0 + 0;
    a1 = v0 + 0;
    a2 = s2 + 0;
    a3 = sp + 4;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E260;
L_08A9E260:;
    a0 = LD32(sp);
    v1 = LD32(sp+4);
    v0 = v1 < a0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A9E280; }
    goto L_08A9E274;
L_08A9E274:;
    v0 = a0 < v1;
    a1 = (u32)-1;
    if (v0 == 0) a1 = 0;
    goto L_08A9E280;
L_08A9E280:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9E2A0 */
void func_08A9E2A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9E2A0:;
    sp = sp - 64;
    s6 = a2 + 8;
    s5 = LD32(a2+4);
    ST32(sp, a0);
    ST32(sp+4, a1);
    cnd_ = s5 == 0;
    ST32(sp+8, s5);
    if (cnd_) { goto L_08A9E374; }
    goto L_08A9E2E4;
L_08A9E2E4:;
    v0 = LD32(sp+8);
    goto L_08A9E2E8;
L_08A9E2E8:;
    s2 = v0 - 1;
    s3 = s2 << 1;
    v0 = s3 + 1;
    v0 = v0 < s5;
    ST32(sp+8, s2);
    cnd_ = v0 == 0;
    v1 = s3 + 0;
    if (cnd_) { goto L_08A9E368; }
    goto L_08A9E304;
L_08A9E304:;
    s7 = v1 + 2;
    v0 = s7 < s5;
    a0 = LD32(sp);
    s4 = s2 << 2;
    cnd_ = v0 != 0;
    s0 = s2 << 3;
    if (cnd_) { goto L_08A9E4B8; }
    goto L_08A9E31C;
L_08A9E31C:;
    s1 = s0 + s6;
    goto L_08A9E320;
L_08A9E320:;
    s0 = s4 + s6;
    a0 = LD32(sp);
    a1 = LD32(s1+4);
    a2 = LD32(s0);
    v1 = LD32(sp+4);
    t_ = v1;
    s2 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9E33C;
L_08A9E33C:;
    cnd_ = (s32)v0 <= 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08A9E36C; }
    goto L_08A9E344;
L_08A9E344:;
    v1 = LD32(s0);
    v0 = LD32(s1+4);
    ST32(s0, v0);
    ST32(s1+4, v1);
    goto L_08A9E354;
L_08A9E354:;
    s3 = s2 << 1;
    v0 = s3 + 1;
    v0 = v0 < s5;
    cnd_ = v0 != 0;
    v1 = s3 + 0;
    if (cnd_) { goto L_08A9E304; }
    goto L_08A9E368;
L_08A9E368:;
    a0 = LD32(sp+8);
    goto L_08A9E36C;
L_08A9E36C:;
    cnd_ = a0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A9E2E8; }
    goto L_08A9E374;
L_08A9E374:;
    v0 = s5 < 0x2u;
    cnd_ = v0 != 0;
    v0 = s5 << 2;
    if (cnd_) { goto L_08A9E430; }
    goto L_08A9E380;
L_08A9E380:;
    v0 = v0 + s6;
    ST32(sp+12, v0);
    a1 = LD32(sp+12);
    goto L_08A9E38C;
L_08A9E38C:;
    v0 = LD32(s6);
    s5 = s5 - 1;
    a1 = a1 - 4;
    v1 = LD32(a1);
    ST32(sp+12, a1);
    a1 = 1;
    a0 = a1 < s5;
    ST32(s6, v1);
    s2 = 0 + 0;
    v1 = LD32(sp+12);
    cnd_ = a0 == 0;
    ST32(v1, v0);
    if (cnd_) { goto L_08A9E424; }
    goto L_08A9E3BC;
L_08A9E3BC:;
    s3 = 0 + 0;
    goto L_08A9E3C0;
L_08A9E3C0:;
    s7 = s3 + 2;
    v0 = s7 < s5;
    a0 = LD32(sp);
    s4 = s2 << 2;
    cnd_ = v0 != 0;
    s0 = s2 << 3;
    if (cnd_) { goto L_08A9E460; }
    goto L_08A9E3D8;
L_08A9E3D8:;
    s1 = s0 + s6;
    goto L_08A9E3DC;
L_08A9E3DC:;
    s0 = s4 + s6;
    a0 = LD32(sp);
    a1 = LD32(s1+4);
    a2 = LD32(s0);
    v1 = LD32(sp+4);
    t_ = v1;
    s2 = s3 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9E3F8;
L_08A9E3F8:;
    cnd_ = (s32)v0 <= 0;
    v0 = s5 < 0x2u;
    if (cnd_) { goto L_08A9E428; }
    goto L_08A9E400;
L_08A9E400:;
    v1 = LD32(s0);
    v0 = LD32(s1+4);
    ST32(s0, v0);
    ST32(s1+4, v1);
    goto L_08A9E410;
L_08A9E410:;
    v1 = s2 << 1;
    v0 = v1 + 1;
    v0 = v0 < s5;
    cnd_ = v0 != 0;
    s3 = v1 + 0;
    if (cnd_) { goto L_08A9E3C0; }
    goto L_08A9E424;
L_08A9E424:;
    v0 = s5 < 0x2u;
    goto L_08A9E428;
L_08A9E428:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+12);
    if (cnd_) { goto L_08A9E38C; }
    goto L_08A9E430;
L_08A9E430:;
    sp = sp + 64;
    return;
L_08A9E460:;
    s1 = s0 + s6;
    a1 = LD32(s1+8);
    a2 = LD32(s1+4);
    v1 = LD32(sp+4);
    t_ = v1;
    fp = s4 + s6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9E478;
L_08A9E478:;
    cnd_ = (s32)v0 <= 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A9E4B0; }
    goto L_08A9E480;
L_08A9E480:;
    a1 = LD32(s1+8);
    a2 = LD32(fp);
    v1 = LD32(sp+4);
    t_ = v1;
    s2 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9E494;
L_08A9E494:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { s1 = s0 + s6; goto L_08A9E3DC; }
    goto L_08A9E49C;
L_08A9E49C:;
    v1 = LD32(fp);
    v0 = LD32(s1+8);
    ST32(fp, v0);
    ST32(s1+8, v1);
    goto L_08A9E410;
L_08A9E4B0:;
    s4 = s2 << 2;
    goto L_08A9E3D8;
L_08A9E4B8:;
    s1 = s0 + s6;
    a1 = LD32(s1+8);
    a2 = LD32(s1+4);
    v1 = LD32(sp+4);
    t_ = v1;
    fp = s4 + s6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9E4D0;
L_08A9E4D0:;
    cnd_ = (s32)v0 <= 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A9E508; }
    goto L_08A9E4D8;
L_08A9E4D8:;
    a1 = LD32(s1+8);
    a2 = LD32(fp);
    v1 = LD32(sp+4);
    t_ = v1;
    s2 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9E4EC;
L_08A9E4EC:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { s1 = s0 + s6; goto L_08A9E320; }
    goto L_08A9E4F4;
L_08A9E4F4:;
    v1 = LD32(fp);
    v0 = LD32(s1+8);
    ST32(fp, v0);
    ST32(s1+8, v1);
    goto L_08A9E354;
L_08A9E508:;
    s4 = s2 << 2;
    goto L_08A9E31C;
}

/* 08A9E510 */
u32 func_08A9E510(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9E510:;
    sp = sp - 64;
    s6 = 0 + 0;
    s5 = 0 + 0;
    s4 = 0 + 0;
    s3 = 0 + 0;
    s2 = a0 + 0;
    v0 = LD32(a1);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A9E584; }
    goto L_08A9E55C;
L_08A9E55C:;
    fp = 255;
    s7 = 1;
    goto L_08A9E564;
L_08A9E564:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    v0 = s0 - v0;
    if (cnd_) { goto L_08A9E5B8; }
    goto L_08A9E570;
L_08A9E570:;
    v0 = LD32(s0);
    goto L_08A9E574;
L_08A9E574:;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    s0 = v0 + 4;
    if (cnd_) { goto L_08A9E564; }
    goto L_08A9E584;
L_08A9E584:;
    v0 = s5 + 0;
    sp = sp + 64;
    return v0;
L_08A9E5B8:;
    v0 = v0 + 4;
    cnd_ = v0 == s4;
    s1 = s3 & 0xff;
    if (cnd_) { goto L_08A9E604; }
    goto L_08A9E5C4;
L_08A9E5C4:;
    a0 = v0 + 0;
    s4 = v0 + 0;
    v0 = func_08A9E010(a0);
    goto L_08A9E5D0;
L_08A9E5D0:;
    s1 = v0 & 0xff;
    a0 = s1 + 0;
    a1 = s2 + 0;
    s3 = v0 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E5E4;
L_08A9E5E4:;
    s6 = v0 + 0;
    v0 = LD32(s2+16);
    v1 = (v0 >> 3) & 0xff;
    cnd_ = v1 == fp;
    if (cnd_) { v0 = (v0 & ~(0xffu << 3)) | ((s3 & 0xff) << 3); goto L_08A9E600; }
    goto L_08A9E5F8;
L_08A9E5F8:;
    cnd_ = v1 == s3;
    v0 = v0 | 0x4;
    if (cnd_) { goto L_08A9E604; }
    goto L_08A9E600;
L_08A9E600:;
    ST32(s2+16, v0);
    goto L_08A9E604;
L_08A9E604:;
    a2 = s0 + 8;
    a1 = s6 + 0;
    a3 = sp + 0;
    a0 = s1 + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9E618;
L_08A9E618:;
    a0 = s1 + 0;
    v0 = func_08A9DA84(a0);
    goto L_08A9E620;
L_08A9E620:;
    a0 = v0 + 0;
    v0 = v0 << 3;
    v0 = s7 << (v0 & 31);
    v1 = a0 < 0x4u;
    cnd_ = v1 != 0;
    a0 = v0 - 1;
    if (cnd_) { goto L_08A9E63C; }
    goto L_08A9E638;
L_08A9E638:;
    a0 = (u32)-1;
    goto L_08A9E63C;
L_08A9E63C:;
    v1 = LD32(sp);
    v0 = v1 & a0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A9E574; }
    goto L_08A9E64C;
L_08A9E64C:;
    v0 = LD32(s2);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    s5 = s5 + 1;
    if (cnd_) { goto L_08A9E570; }
    goto L_08A9E65C;
L_08A9E65C:;
    ST32(s2, v1);
    goto L_08A9E570;
}

/* 08A9E664 */
void func_08A9E664(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9E664:;
    sp = sp - 64;
    s6 = a1 + 0;
    s4 = 0 + 0;
    s2 = a0 + 0;
    a1 = s2 + 0;
    s0 = a2 + 0;
    v0 = LD32(a0+16);
    s1 = (v0 >> 3) & 0xff;
    s3 = s1 & 0xff;
    a0 = s3 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E6B4;
L_08A9E6B4:;
    s5 = v0 + 0;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    s7 = 1;
    if (cnd_) { goto L_08A9E6E4; }
    goto L_08A9E6C4;
L_08A9E6C4:;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s2+16); goto L_08A9E710; }
    goto L_08A9E6D0;
L_08A9E6D0:;
    v0 = LD32(s0);
    goto L_08A9E6D4;
L_08A9E6D4:;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    s0 = v0 + 4;
    if (cnd_) { goto L_08A9E6C4; }
    goto L_08A9E6E4;
L_08A9E6E4:;
    sp = sp + 64;
    return;
L_08A9E710:;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v0 = s0 - v1;
    if (cnd_) { goto L_08A9E748; }
    goto L_08A9E71C;
L_08A9E71C:;
    v0 = v0 + 4;
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A9E748; }
    goto L_08A9E728;
L_08A9E728:;
    s4 = v0 + 0;
    v0 = func_08A9E010(a0);
    goto L_08A9E730;
L_08A9E730:;
    s3 = v0 & 0xff;
    a0 = s3 + 0;
    a1 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E744;
L_08A9E744:;
    s5 = v0 + 0;
    goto L_08A9E748;
L_08A9E748:;
    cnd_ = s1 != 0;
    a2 = s0 + 8;
    if (cnd_) { goto L_08A9E784; }
    goto L_08A9E750;
L_08A9E750:;
    v0 = LD32(s0+8);
    goto L_08A9E754;
L_08A9E754:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A9E6D4; }
    goto L_08A9E75C;
L_08A9E75C:;
    a0 = LD32(s6);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A9E6D4; }
    goto L_08A9E768;
L_08A9E768:;
    v0 = LD32(a0+4);
    v1 = v0 << 2;
    v1 = v1 + a0;
    v0 = v0 + 1;
    ST32(a0+4, v0);
    ST32(v1+8, s0);
    goto L_08A9E6D0;
L_08A9E784:;
    a1 = s5 + 0;
    a3 = sp + 0;
    a0 = s3 + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E794;
L_08A9E794:;
    a0 = s3 + 0;
    v0 = func_08A9DA84(a0);
    goto L_08A9E79C;
L_08A9E79C:;
    a0 = v0 + 0;
    v0 = v0 << 3;
    v0 = s7 << (v0 & 31);
    v1 = a0 < 0x4u;
    cnd_ = v1 != 0;
    a0 = v0 - 1;
    if (cnd_) { goto L_08A9E7B8; }
    goto L_08A9E7B4;
L_08A9E7B4:;
    a0 = (u32)-1;
    goto L_08A9E7B8;
L_08A9E7B8:;
    v0 = LD32(sp);
    v0 = v0 & a0;
    goto L_08A9E754;
}

/* 08A9E7C4 */
u32 func_08A9E7C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9E7C4:;
    sp = sp - 64;
    s6 = a2 + 0;
    s4 = 0 + 0;
    s3 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 0;
    v0 = LD32(a0+16);
    s1 = (v0 >> 3) & 0xff;
    s2 = s1 & 0xff;
    a0 = s2 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E814;
L_08A9E814:;
    s5 = v0 + 0;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    s7 = 1;
    if (cnd_) { goto L_08A9E844; }
    goto L_08A9E824;
L_08A9E824:;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s3+16); goto L_08A9E878; }
    goto L_08A9E830;
L_08A9E830:;
    v0 = LD32(s0);
    goto L_08A9E834;
L_08A9E834:;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    s0 = v0 + 4;
    if (cnd_) { goto L_08A9E824; }
    goto L_08A9E844;
L_08A9E844:;
    a0 = 0 + 0;
    goto L_08A9E84C;
L_08A9E84C:;
    v0 = a0 + 0;
    sp = sp + 64;
    return v0;
L_08A9E878:;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v0 = s0 - v1;
    if (cnd_) { goto L_08A9E8B0; }
    goto L_08A9E884;
L_08A9E884:;
    v0 = v0 + 4;
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A9E8B0; }
    goto L_08A9E890;
L_08A9E890:;
    s4 = v0 + 0;
    v0 = func_08A9E010(a0);
    goto L_08A9E898;
L_08A9E898:;
    s2 = v0 & 0xff;
    a0 = s2 + 0;
    a1 = s3 + 0;
    s1 = v0 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9E8AC;
L_08A9E8AC:;
    s5 = v0 + 0;
    goto L_08A9E8B0;
L_08A9E8B0:;
    cnd_ = s1 != 0;
    a2 = s0 + 8;
    if (cnd_) { goto L_08A9E8E8; }
    goto L_08A9E8B8;
L_08A9E8B8:;
    a0 = LD32(s0+8);
    ST32(sp, a0);
    v0 = LD32(s0+12);
    cnd_ = a0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A9E830; }
    goto L_08A9E8CC;
L_08A9E8CC:;
    v1 = LD32(sp+4);
    goto L_08A9E8D0;
L_08A9E8D0:;
    v0 = s6 - a0;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A9E830; }
    goto L_08A9E8E0;
L_08A9E8E0:;
    goto L_08A9E84C;
L_08A9E8E8:;
    a0 = s2 + 0;
    a1 = s5 + 0;
    a3 = sp + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E8F8;
L_08A9E8F8:;
    a2 = v0 + 0;
    a1 = 0 + 0;
    a0 = s2 & 0xf;
    a3 = sp + 4;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9E90C;
L_08A9E90C:;
    a0 = s2 + 0;
    v0 = func_08A9DA84(a0);
    goto L_08A9E914;
L_08A9E914:;
    a1 = v0 + 0;
    v0 = v0 << 3;
    v0 = s7 << (v0 & 31);
    v1 = a1 < 0x4u;
    cnd_ = v1 != 0;
    a1 = v0 - 1;
    if (cnd_) { goto L_08A9E930; }
    goto L_08A9E92C;
L_08A9E92C:;
    a1 = (u32)-1;
    goto L_08A9E930;
L_08A9E930:;
    a0 = LD32(sp);
    v0 = a0 & a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A9E834; }
    goto L_08A9E940;
L_08A9E940:;
    v1 = LD32(sp+4);
    goto L_08A9E8D0;
}

/* 08A9E948 */
u32 func_08A9E948(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9E948:;
    sp = sp - 64;
    s4 = a1 + 0;
    v1 = LD32(a0+16);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A9EBE8; }
    goto L_08A9E984;
L_08A9E984:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 1) & 0x1;
    if (cnd_) { goto L_08A9EB8C; }
    goto L_08A9E990;
L_08A9E990:;
    v0 = (v1 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 3) & 0xff;
    if (cnd_) { goto L_08A9EA84; }
    goto L_08A9E99C;
L_08A9E99C:;
    s7 = LD32(s1+12);
    s5 = LD32(s7+4);
    cnd_ = s5 != 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_08A9E9E4; }
    goto L_08A9E9AC;
L_08A9E9AC:;
    v0 = 0 + 0;
    goto L_08A9E9B0;
L_08A9E9B0:;
    a0 = v0 + 0;
    goto L_08A9E9B4;
L_08A9E9B4:;
    v0 = a0 + 0;
    sp = sp + 64;
    return v0;
L_08A9E9E4:;
    v1 = s6 + s5;
    goto L_08A9E9E8;
L_08A9E9E8:;
    s3 = v1 >> 1;
    v0 = s3 << 2;
    v0 = v0 + s7;
    s2 = LD32(v0+8);
    a0 = LD32(s2+4);
    a0 = s2 - a0;
    a0 = a0 + 4;
    v0 = func_08A9E010(a0);
    goto L_08A9EA08;
L_08A9EA08:;
    s0 = v0 & 0xff;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9EA18;
L_08A9EA18:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 8;
    a3 = sp + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9EA2C;
L_08A9EA2C:;
    s0 = s0 & 0xf;
    a0 = s0 + 0;
    a2 = v0 + 0;
    a1 = 0 + 0;
    a3 = sp + 4;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9EA44;
L_08A9EA44:;
    v1 = LD32(sp);
    v0 = s4 < v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A9EA6C; }
    goto L_08A9EA54;
L_08A9EA54:;
    s5 = s3 + 0;
    goto L_08A9EA58;
L_08A9EA58:;
    v0 = s6 < s5;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = s6 + s5; goto L_08A9E9E8; }
    goto L_08A9EA64;
L_08A9EA64:;
    v0 = 0 + 0;
    goto L_08A9E9B0;
L_08A9EA6C:;
    v0 = v1 + v0;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    s6 = s3 + 1;
    if (cnd_) { goto L_08A9EA58; }
    goto L_08A9EA7C;
L_08A9EA7C:;
    v0 = s2 + 0;
    goto L_08A9E9B0;
L_08A9EA84:;
    cnd_ = v0 != 0;
    if (cnd_) { s6 = LD32(s1+12); goto L_08A9EAF0; }
    goto L_08A9EA8C;
L_08A9EA8C:;
    a1 = LD32(s1+12);
    t0 = LD32(a1+4);
    cnd_ = t0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A9E9AC; }
    goto L_08A9EA9C;
L_08A9EA9C:;
    v1 = t1 + t0;
    goto L_08A9EAA0;
L_08A9EAA0:;
    a3 = v1 >> 1;
    v0 = a3 << 2;
    v0 = v0 + a1;
    a2 = LD32(v0+8);
    v1 = LD32(a2+8);
    v0 = LD32(a2+12);
    a0 = s4 < v1;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = s4 < v1;
    if (cnd_) { goto L_08A9EAE0; }
    goto L_08A9EAC8;
L_08A9EAC8:;
    t0 = a3 + 0;
    goto L_08A9EACC;
L_08A9EACC:;
    v0 = t1 < t0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = t1 + t0; goto L_08A9EAA0; }
    goto L_08A9EAD8;
L_08A9EAD8:;
    v0 = 0 + 0;
    goto L_08A9E9B0;
L_08A9EAE0:;
    cnd_ = v0 == 0;
    t1 = a3 + 1;
    if (cnd_) { goto L_08A9EACC; }
    goto L_08A9EAE8;
L_08A9EAE8:;
    v0 = a2 + 0;
    goto L_08A9E9B0;
L_08A9EAF0:;
    s2 = v0 & 0xff;
    a1 = s1 + 0;
    a0 = s2 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9EB00;
L_08A9EB00:;
    s1 = LD32(s6+4);
    s7 = v0 + 0;
    cnd_ = s1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A9E9AC; }
    goto L_08A9EB10;
L_08A9EB10:;
    v1 = s5 + s1;
    goto L_08A9EB14;
L_08A9EB14:;
    s0 = v1 >> 1;
    v0 = s0 << 2;
    v0 = v0 + s6;
    s3 = LD32(v0+8);
    a0 = s2 + 0;
    a1 = s7 + 0;
    a2 = s3 + 8;
    a3 = sp + 8;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9EB38;
L_08A9EB38:;
    a2 = v0 + 0;
    a0 = s2 & 0xf;
    a1 = 0 + 0;
    a3 = sp + 12;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9EB4C;
L_08A9EB4C:;
    v1 = LD32(sp+8);
    v0 = s4 < v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08A9EB74; }
    goto L_08A9EB5C;
L_08A9EB5C:;
    s1 = s0 + 0;
    goto L_08A9EB60;
L_08A9EB60:;
    v0 = s5 < s1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = s5 + s1; goto L_08A9EB14; }
    goto L_08A9EB6C;
L_08A9EB6C:;
    v0 = 0 + 0;
    goto L_08A9E9B0;
L_08A9EB74:;
    v0 = v1 + v0;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    s5 = s0 + 1;
    if (cnd_) { goto L_08A9EB60; }
    goto L_08A9EB84;
L_08A9EB84:;
    v0 = s3 + 0;
    goto L_08A9E9B0;
L_08A9EB8C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+12); goto L_08A9EBD4; }
    goto L_08A9EB94;
L_08A9EB94:;
    s0 = LD32(s1+12);
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_08A9E9B4; }
    goto L_08A9EBA4;
L_08A9EBA4:;
    a1 = LD32(s0);
    goto L_08A9EBA8;
L_08A9EBA8:;
    a0 = s1 + 0;
    a2 = s4 + 0;
    v0 = func_08A9E7C4(a0, a1, a2);
    goto L_08A9EBB4;
L_08A9EBB4:;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A9E9B4; }
    goto L_08A9EBC0;
L_08A9EBC0:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_08A9EBA8; }
    goto L_08A9EBCC;
L_08A9EBCC:;
    a0 = 0 + 0;
    goto L_08A9E9B4;
L_08A9EBD4:;
    a0 = s1 + 0;
    a2 = s4 + 0;
    v0 = func_08A9E7C4(a0, a1, a2);
    goto L_08A9EBE0;
L_08A9EBE0:;
    a0 = v0 + 0;
    goto L_08A9E9B4;
L_08A9EBE8:;
    func_08A9ED98(a0, a1, t0, t1, t2, t3);
    goto L_08A9EBF0;
L_08A9EBF0:;
    v0 = LD32(s1);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A9E9B4; }
    goto L_08A9EC00;
L_08A9EC00:;
    v1 = LD32(s1+16);
    goto L_08A9E984;
}

/* 08A9EC08 */
u32 func_08A9EC08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9EC08:;
    sp = sp - 32;
    s4 = D_08C38B94 - (-29804);
    s6 = D_08C38B88 - (-29816);
    s5 = a1 + 0;
    s2 = 0 + 0;
    s0 = a0 + 0;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9EC44;
L_08A9EC44:;
    s1 = LD32(s4-29804);
    cnd_ = s1 == 0;
    ST32(s6-29816, v0);
    if (cnd_) { goto L_08A9EC6C; }
    goto L_08A9EC50;
L_08A9EC50:;
    v0 = LD32(s1);
    goto L_08A9EC54;
L_08A9EC54:;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A9ED80; }
    goto L_08A9EC60;
L_08A9EC60:;
    s1 = LD32(s1+20);
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A9EC54; }
    goto L_08A9EC6C;
L_08A9EC6C:;
    s3 = D_08C38B90 - (-29808);
    goto L_08A9EC70;
L_08A9EC70:;
    s1 = LD32(s3-29808);
    cnd_ = s1 == 0;
    v1 = s3 + 0;
    if (cnd_) { goto L_08A9ECE0; }
    goto L_08A9EC7C;
L_08A9EC7C:;
    v0 = LD32(s1+20);
    a0 = s1 + 0;
    a1 = s0 + 0;
    ST32(v1-29808, v0);
    v0 = func_08A9E948(a0, a1, 0, 0, 0, 0);
    goto L_08A9EC90;
L_08A9EC90:;
    s2 = v0 + 0;
    v0 = LD32(s4-29804);
    cnd_ = v0 == 0;
    a0 = s4 - 29804;
    if (cnd_) { goto L_08A9ED78; }
    goto L_08A9ECA0;
L_08A9ECA0:;
    a1 = LD32(s1);
    goto L_08A9ECA4;
L_08A9ECA4:;
    v1 = LD32(a0);
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+20, v1); goto L_08A9ECCC; }
    goto L_08A9ECB8;
L_08A9ECB8:;
    v0 = LD32(v1+20);
    a0 = v1 + 20;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9ECA4; }
    goto L_08A9ECC8;
L_08A9ECC8:;
    ST32(s1+20, v1);
    goto L_08A9ECCC;
L_08A9ECCC:;
    cnd_ = s2 != 0;
    ST32(a0, s1);
    if (cnd_) { goto L_08A9ECE0; }
    goto L_08A9ECD4;
L_08A9ECD4:;
    s1 = LD32(s3-29808);
    cnd_ = s1 != 0;
    v1 = D_08C38B90 - (-29808);
    if (cnd_) { goto L_08A9EC7C; }
    goto L_08A9ECE0;
L_08A9ECE0:;
    a0 = LD32(s6-29816);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9ECE8;
L_08A9ECE8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = s2 + 0; goto L_08A9ED38; }
    goto L_08A9ECF0;
L_08A9ECF0:;
    v0 = LD32(s1+4);
    ST32(s5, v0);
    v1 = LD32(s1+8);
    ST32(s5+4, v1);
    v0 = LD32(s1+16);
    v1 = (v0 >> 2) & 0x1;
    cnd_ = v1 != 0;
    v0 = (v0 >> 3) & 0xff;
    if (cnd_) { goto L_08A9ED60; }
    goto L_08A9ED10;
L_08A9ED10:;
    s0 = v0 & 0xff;
    goto L_08A9ED14;
L_08A9ED14:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    v0 = func_08A9DF9C(a0, a1);
    goto L_08A9ED20;
L_08A9ED20:;
    a1 = v0 + 0;
    a3 = s5 + 8;
    a2 = s2 + 8;
    a0 = s0 + 0;
    v0 = func_08A9DB80(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A9ED34;
L_08A9ED34:;
    v0 = s2 + 0;
    goto L_08A9ED38;
L_08A9ED38:;
    sp = sp + 32;
    return v0;
L_08A9ED60:;
    a0 = LD32(s2+4);
    a0 = s2 - a0;
    a0 = a0 + 4;
    v0 = func_08A9E010(a0);
    goto L_08A9ED70;
L_08A9ED70:;
    s0 = v0 & 0xff;
    goto L_08A9ED14;
L_08A9ED78:;
    v1 = LD32(a0);
    goto L_08A9ECC8;
L_08A9ED80:;
    a1 = s0 + 0;
    v0 = func_08A9E948(a0, a1, 0, 0, 0, 0);
    goto L_08A9ED88;
L_08A9ED88:;
    cnd_ = v0 != 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A9ECE0; }
    goto L_08A9ED90;
L_08A9ED90:;
    s3 = D_08C38B90 - (-29808);
    goto L_08A9EC70;
}

/* 08A9ED98 */
void func_08A9ED98(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A9ED98:;
    sp = sp - 96;
    v0 = LD32(a0+16);
    s1 = v0 >> 11;
    cnd_ = s1 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08A9EE14; }
    goto L_08A9EDD4;
L_08A9EDD4:;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F050; }
    goto L_08A9EDE0;
L_08A9EDE0:;
    s0 = LD32(a0+12);
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_08A9F030; }
    goto L_08A9EDF0;
L_08A9EDF0:;
    v1 = LD32(s3+16);
    goto L_08A9EDF4;
L_08A9EDF4:;
    v1 = (v1 & ~(0x1fffffu << 11)) | ((s1 & 0x1fffff) << 11);
    v0 = v1 >> 11;
    cnd_ = v0 == s1;
    ST32(s3+16, v1);
    if (cnd_) { goto L_08A9EE0C; }
    goto L_08A9EE04;
L_08A9EE04:;
    v0 = v1 & 0x7ff;
    ST32(s3+16, v0);
    goto L_08A9EE0C;
L_08A9EE0C:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A9EFB0; }
    goto L_08A9EE14;
L_08A9EE14:;
    v0 = s1 << 2;
    s0 = v0 + 8;
    a0 = s0 + 0;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9EE24;
L_08A9EE24:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08A9EFAC; }
    goto L_08A9EE2C;
L_08A9EE2C:;
    ST32(v0+4, 0);
    a0 = s0 + 0;
    { rv_t r_ = func_088F99D0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9EE38;
L_08A9EE38:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A9EE44; }
    goto L_08A9EE40;
L_08A9EE40:;
    ST32(v0+4, 0);
    goto L_08A9EE44;
L_08A9EE44:;
    v0 = LD32(s3+16);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s3+12); goto L_08A9F018; }
    goto L_08A9EE54;
L_08A9EE54:;
    s0 = LD32(s3+12);
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A9EFF0; }
    goto L_08A9EE64;
L_08A9EE64:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s3+16); goto L_08A9EE7C; }
    goto L_08A9EE6C;
L_08A9EE6C:;
    v0 = LD32(v0+4);
    cnd_ = v0 != s1;
    if (cnd_) { goto L_08A9F060; }
    goto L_08A9EE78;
L_08A9EE78:;
    a0 = LD32(s3+16);
    goto L_08A9EE7C;
L_08A9EE7C:;
    v1 = ((u32)(uintptr_t)func_08A9E1C8) - (-7736);
    v0 = (a0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    fp = v1 - 7736;
    if (cnd_) { goto L_08A9EEA4; }
    goto L_08A9EE8C;
L_08A9EE8C:;
    v0 = ((u32)(uintptr_t)func_08A9E0F0) - (-7952);
    v1 = (a0 >> 3) & 0xff;
    cnd_ = v1 == 0;
    fp = v0 - 7952;
    if (cnd_) { goto L_08A9EEA4; }
    goto L_08A9EE9C;
L_08A9EE9C:;
    v0 = ((u32)(uintptr_t)func_08A9E118) - (-7912);
    fp = v0 - 7912;
    goto L_08A9EEA4;
L_08A9EEA4:;
    a3 = LD32(sp+4);
    cnd_ = a3 == 0;
    a2 = LD32(sp);
    if (cnd_) { goto L_08A9EFDC; }
    goto L_08A9EEB0;
L_08A9EEB0:;
    a0 = s3 + 0;
    a1 = fp + 0;
    func_08A9F068(a0, a1, a2, a3, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A9EEBC;
L_08A9EEBC:;
    v0 = LD32(sp);
    a2 = LD32(sp+4);
    v1 = LD32(v0+4);
    a0 = LD32(a2+4);
    v1 = v1 + a0;
    cnd_ = v1 != s1;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A9F060; }
    goto L_08A9EED8;
L_08A9EED8:;
    a1 = fp + 0;
    func_08A9E2A0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A9EEE0;
L_08A9EEE0:;
    v0 = LD32(sp+4);
    a3 = LD32(sp);
    s5 = LD32(v0+4);
    cnd_ = s5 == 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08A9EF88; }
    goto L_08A9EEF4;
L_08A9EEF4:;
    v1 = s5 << 2;
    s2 = LD32(a3+4);
    v0 = v1 + v0;
    s7 = v0 + 8;
    s6 = v1 + a3;
    goto L_08A9EF08;
L_08A9EF08:;
    s7 = s7 - 4;
    v1 = s2 << 2;
    s6 = s6 - 4;
    s4 = LD32(s7);
    v0 = v1 + s6;
    s1 = v0 + 8;
    s0 = v1 + a3;
    s5 = s5 - 1;
    goto L_08A9EF28;
L_08A9EF28:;
    a0 = s3 + 0;
    cnd_ = s2 == 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_08A9EF60; }
    goto L_08A9EF34;
L_08A9EF34:;
    ST32(sp+32, a3);
    t_ = fp;
    a1 = LD32(s0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9EF40;
L_08A9EF40:;
    cnd_ = (s32)v0 <= 0;
    a3 = LD32(sp+32);
    if (cnd_) { goto L_08A9EF60; }
    goto L_08A9EF48;
L_08A9EF48:;
    v0 = LD32(s0+4);
    s2 = s2 - 1;
    s0 = s0 - 4;
    ST32(s1, v0);
    s1 = s1 - 4;
    goto L_08A9EF28;
L_08A9EF60:;
    v0 = s2 + s5;
    v0 = v0 << 2;
    v0 = v0 + a3;
    cnd_ = s5 != 0;
    ST32(v0+8, s4);
    if (cnd_) { goto L_08A9EF08; }
    goto L_08A9EF74;
L_08A9EF74:;
    a0 = LD32(sp+16);
    v0 = LD32(a3+4);
    v1 = LD32(a0+4);
    v0 = v0 + v1;
    ST32(a3+4, v0);
    goto L_08A9EF88;
L_08A9EF88:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_088F9A14(a0, 0, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9EF90;
L_08A9EF90:;
    a0 = LD32(sp);
    goto L_08A9EF94;
L_08A9EF94:;
    v1 = LD32(s3+12);
    ST32(a0, v1);
    v0 = LD32(s3+16);
    ST32(s3+12, a0);
    v0 = v0 | 0x1;
    ST32(s3+16, v0);
    goto L_08A9EFAC;
L_08A9EFAC:;
    goto L_08A9EFB0;
L_08A9EFB0:;
    sp = sp + 96;
    return;
L_08A9EFDC:;
    a1 = fp + 0;
    a0 = s3 + 0;
    func_08A9E2A0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A9EFE8;
L_08A9EFE8:;
    a0 = LD32(sp);
    goto L_08A9EF94;
L_08A9EFF0:;
    a2 = LD32(s0);
    goto L_08A9EFF4;
L_08A9EFF4:;
    a0 = s3 + 0;
    a1 = sp + 0;
    s0 = s0 + 4;
    func_08A9E664(a0, a1, a2);
    goto L_08A9F004;
L_08A9F004:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s0); goto L_08A9EFF4; }
    goto L_08A9F010;
L_08A9F010:;
    v0 = LD32(sp);
    goto L_08A9EE64;
L_08A9F018:;
    a0 = s3 + 0;
    a1 = sp + 0;
    func_08A9E664(a0, a1, a2);
    goto L_08A9F024;
L_08A9F024:;
    v0 = LD32(sp);
    goto L_08A9EE64;
L_08A9F02C:;
    a1 = LD32(s0);
    goto L_08A9F030;
L_08A9F030:;
    a0 = s3 + 0;
    s0 = s0 + 4;
    v0 = func_08A9E510(a0, a1, t0, t1, t2, t3);
    goto L_08A9F03C;
L_08A9F03C:;
    v1 = LD32(s0);
    cnd_ = v1 != 0;
    s1 = s1 + v0;
    if (cnd_) { goto L_08A9F02C; }
    goto L_08A9F048;
L_08A9F048:;
    v1 = LD32(s3+16);
    goto L_08A9EDF4;
L_08A9F050:;
    a1 = LD32(a0+12);
    v0 = func_08A9E510(a0, a1, t0, t1, t2, t3);
    goto L_08A9F058;
L_08A9F058:;
    s1 = v0 + 0;
    goto L_08A9EDF0;
L_08A9F060:;
    { rv_t r_ = func_08A96820(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    func_08A9F068(a0, 0, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); return;
}

/* 08A9F068 */
void func_08A9F068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A9F068:;
    sp = sp - 64;
    fp = 0 + 0;
    s6 = a0 + 0;
    s5 = a1 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    v0 = LD32(a2+4);
    t1 = 0 < v0;
    ST32(sp, v0);
    v0 = D_08C38B8C - (-29812);
    s0 = v0 - 29812;
    cnd_ = t1 == 0;
    ST32(sp+4, t1);
    if (cnd_) { goto L_08A9F11C; }
    goto L_08A9F0C4;
L_08A9F0C4:;
    s7 = s0 + 0;
    goto L_08A9F0C8;
L_08A9F0C8:;
    s2 = fp << 2;
    s1 = s2 + s3;
    goto L_08A9F0D0;
L_08A9F0D0:;
    cnd_ = s0 == s7;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A9F0FC; }
    goto L_08A9F0D8;
L_08A9F0D8:;
    a2 = LD32(s0);
    t_ = s5;
    a1 = LD32(s1+8);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9F0E4;
L_08A9F0E4:;
    v1 = s0 - s3;
    cnd_ = (s32)v0 >= 0;
    v1 = s4 + v1;
    if (cnd_) { goto L_08A9F0FC; }
    goto L_08A9F0F0;
L_08A9F0F0:;
    s0 = LD32(v1);
    ST32(v1, 0);
    goto L_08A9F0D0;
L_08A9F0FC:;
    a1 = LD32(sp);
    fp = fp + 1;
    v0 = s3 + s2;
    v1 = s2 + s4;
    a0 = fp < a1;
    ST32(v1+8, s0);
    cnd_ = a0 != 0;
    s0 = v0 + 8;
    if (cnd_) { goto L_08A9F0C8; }
    goto L_08A9F11C;
L_08A9F11C:;
    t1 = LD32(sp+4);
    t0 = 0 + 0;
    a3 = 0 + 0;
    cnd_ = t1 == 0;
    fp = 0 + 0;
    if (cnd_) { goto L_08A9F170; }
    goto L_08A9F130;
L_08A9F130:;
    a0 = s3 + 8;
    a1 = s4 + 8;
    a2 = a0 + 0;
    v1 = a1 + 0;
    goto L_08A9F140;
L_08A9F140:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    v0 = LD32(a0);
    if (cnd_) { goto L_08A9F1A8; }
    goto L_08A9F14C;
L_08A9F14C:;
    a3 = a3 + 1;
    ST32(a2, v0);
    a2 = a2 + 4;
    goto L_08A9F158;
L_08A9F158:;
    t1 = LD32(sp);
    fp = fp + 1;
    v1 = v1 + 4;
    v0 = fp < t1;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A9F140; }
    goto L_08A9F170;
L_08A9F170:;
    ST32(s3+4, a3);
    ST32(s4+4, t0);
    sp = sp + 64;
    return;
L_08A9F1A8:;
    t0 = t0 + 1;
    ST32(a1, v0);
    a1 = a1 + 4;
    goto L_08A9F158;
}

/* 08A9F1B8 */
float func_08A9F1B8(float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9F1B8:;
    sp = sp - 16;
    s0 = FBITS(f12);
    v0 = 0x507f0000u;
    v0 = v0 | 0xffff;
    s0 = (s0 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = (s32)v0 < (s32)s0;
    f5 = f12;
    s1 = FBITS(f12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F244; }
    goto L_08A9F1E8;
L_08A9F1E8:;
    v0 = 0x7f800000u;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F210; }
    goto L_08A9F1F8;
L_08A9F1F8:;
    f0 = f12 + f12;
    goto L_08A9F1FC;
L_08A9F1FC:;
    sp = sp + 16;
    return f0;
L_08A9F210:;
    cnd_ = (s32)s1 <= 0;
    v0 = D_08AEAE20 - (-20960);
    if (cnd_) { goto L_08A9F22C; }
    goto L_08A9F218;
L_08A9F218:;
    v1 = D_08AEAE24 - (-20956);
    f1 = BITSF(LD32(v0-20960));
    f0 = BITSF(LD32(v1-20956));
    f0 = f1 + f0;
    goto L_08A9F1FC;
L_08A9F22C:;
    f0 = BITSF(LD32(v0-20960));
    v0 = D_08AEAE24 - (-20956);
    f1 = BITSF(LD32(v0-20956));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = f0 - f1;
    goto L_08A9F1FC;
L_08A9F244:;
    v0 = 0x3edf0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 != 0;
    v0 = 0x30ff0000u;
    if (cnd_) { goto L_08A9F39C; }
    goto L_08A9F258;
L_08A9F258:;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A9F294; }
    goto L_08A9F268;
L_08A9F268:;
    v0 = D_08AEAE28 - (-20952);
    f0 = BITSF(LD32(v0-20952));
    v0 = D_08AEAE2C - (-20948);
    f1 = BITSF(LD32(v0-20948));
    f0 = f12 + f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f4 = f5 * f5; goto L_08A9F298; }
    goto L_08A9F28C;
L_08A9F28C:;
    f0 = f12;
    goto L_08A9F1FC;
L_08A9F294:;
    f4 = f5 * f5;
    goto L_08A9F298;
L_08A9F298:;
    v0 = D_08AEAE3C - (-20932);
    f0 = BITSF(LD32(v0-20932));
    v0 = D_08AEAE54 - (-20908);
    f3 = f4 * f4;
    f1 = BITSF(LD32(v0-20908));
    v0 = D_08AEAE40 - (-20928);
    f2 = BITSF(LD32(v0-20928));
    f0 = f3 * f0;
    v0 = D_08AEAE58 - (-20904);
    f1 = f3 * f1;
    f0 = f0 + f2;
    f2 = BITSF(LD32(v0-20904));
    v0 = D_08AEAE44 - (-20924);
    f0 = f3 * f0;
    f1 = f1 + f2;
    f2 = BITSF(LD32(v0-20924));
    v0 = D_08AEAE5C - (-20900);
    f0 = f0 + f2;
    f1 = f3 * f1;
    f2 = BITSF(LD32(v0-20900));
    v0 = D_08AEAE48 - (-20920);
    f0 = f3 * f0;
    f1 = f1 + f2;
    f2 = BITSF(LD32(v0-20920));
    v0 = D_08AEAE60 - (-20896);
    f0 = f0 + f2;
    f1 = f3 * f1;
    f2 = BITSF(LD32(v0-20896));
    v0 = D_08AEAE4C - (-20916);
    f0 = f3 * f0;
    f1 = f1 + f2;
    f2 = BITSF(LD32(v0-20916));
    v0 = D_08AEAE64 - (-20892);
    f0 = f0 + f2;
    f1 = f3 * f1;
    f2 = BITSF(LD32(v0-20892));
    v0 = D_08AEAE50 - (-20912);
    f0 = f3 * f0;
    f1 = f1 + f2;
    f2 = BITSF(LD32(v0-20912));
    f0 = f0 + f2;
    f1 = f3 * f1;
    cnd_ = (s32)v1 < 0;
    f0 = f4 * f0;
    if (cnd_) { goto L_08A9F38C; }
    goto L_08A9F348;
L_08A9F348:;
    f1 = f0 + f1;
    v0 = D_08AEADDC - (-21028);
    v1 = v1 << 2;
    v0 = v0 - 21028;
    v0 = v1 + v0;
    f1 = f5 * f1;
    f0 = BITSF(LD32(v0));
    v0 = D_08AEADCC - (-21044);
    v0 = v0 - 21044;
    f1 = f1 - f0;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    f1 = f1 - f5;
    cnd_ = (s32)s1 >= 0;
    f0 = f0 - f1;
    if (cnd_) { goto L_08A9F1FC; }
    goto L_08A9F384;
L_08A9F384:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08A9F1FC;
L_08A9F38C:;
    f0 = f0 + f1;
    f0 = f5 * f0;
    f0 = f5 - f0;
    goto L_08A9F1FC;
L_08A9F39C:;
    f0 = func_08A9F51C(f12);
    goto L_08A9F3A4;
L_08A9F3A4:;
    v0 = 0x3f970000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 != 0;
    f5 = f0;
    if (cnd_) { goto L_08A9F408; }
    goto L_08A9F3B8;
L_08A9F3B8:;
    v0 = 0x3f2f0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 != 0;
    v0 = D_08AEAE2C - (-20948);
    if (cnd_) { goto L_08A9F3F0; }
    goto L_08A9F3CC;
L_08A9F3CC:;
    f1 = f0 + f0;
    f0 = BITSF(LD32(v0-20948));
    v0 = D_08AEAE30 - (-20944);
    v1 = 0 + 0;
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-20944));
    f0 = f5 + f0;
    f5 = f1 / f0;
    goto L_08A9F294;
L_08A9F3F0:;
    f0 = BITSF(LD32(v0-20948));
    v1 = 1;
    f1 = f5 + f0;
    f0 = f5 - f0;
    f5 = f0 / f1;
    goto L_08A9F294;
L_08A9F408:;
    v0 = 0x401b0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 != 0;
    v0 = D_08AEAE38 - (-20936);
    if (cnd_) { goto L_08A9F444; }
    goto L_08A9F41C;
L_08A9F41C:;
    v0 = D_08AEAE34 - (-20940);
    f1 = BITSF(LD32(v0-20940));
    v0 = D_08AEAE2C - (-20948);
    v1 = 2;
    f2 = f0 * f1;
    f1 = f0 - f1;
    f0 = BITSF(LD32(v0-20948));
    f2 = f2 + f0;
    f5 = f1 / f2;
    goto L_08A9F294;
L_08A9F444:;
    f0 = BITSF(LD32(v0-20936));
    v1 = 3;
    f5 = f0 / f5;
    goto L_08A9F294;
}

/* 08A9F454 */
float func_08A9F454(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f13 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9F454:;
    a0 = FBITS(f12);
    v0 = 0x3f490000u;
    v0 = v0 | 0xfd8;
    v1 = (a0 >> 0) & 0x7fffffff;
    sp = sp - 32;
    v0 = (s32)v0 < (s32)v1;
    f13 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F4F4; }
    goto L_08A9F478;
L_08A9F478:;
    v0 = 0x7f7f0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F49C; }
    goto L_08A9F48C;
L_08A9F48C:;
    f0 = f12 - f12;
    goto L_08A9F490;
L_08A9F490:;
    goto L_08A9F494;
L_08A9F494:;
    sp = sp + 32;
    return f0;
L_08A9F49C:;
    a0 = sp + 0;
    v0 = func_08A9FCD4(a0, f12);
    goto L_08A9F4A4;
L_08A9F4A4:;
    v1 = v0 & 0x3;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08A9F504; }
    goto L_08A9F4B4;
L_08A9F4B4:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A9F4E8; }
    goto L_08A9F4BC;
L_08A9F4BC:;
    cnd_ = v1 == v0;
    f12 = BITSF(LD32(sp));
    if (cnd_) { goto L_08A9F4D8; }
    goto L_08A9F4C4;
L_08A9F4C4:;
    f13 = BITSF(LD32(sp+4));
    a0 = 1;
    f0 = func_08AA0904(a0, f12, f13);
    goto L_08A9F4D0;
L_08A9F4D0:;
    goto L_08A9F494;
L_08A9F4D8:;
    f13 = BITSF(LD32(sp+4));
    f0 = func_08AA0024(f12, f13);
    goto L_08A9F4E0;
L_08A9F4E0:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08A9F490;
L_08A9F4E8:;
    cnd_ = v1 != 0;
    f12 = BITSF(LD32(sp));
    if (cnd_) { goto L_08A9F4C4; }
    goto L_08A9F4F0;
L_08A9F4F0:;
    f13 = BITSF(LD32(sp+4));
    goto L_08A9F4F4;
L_08A9F4F4:;
    f0 = func_08AA0024(f12, f13);
    goto L_08A9F4FC;
L_08A9F4FC:;
    goto L_08A9F494;
L_08A9F504:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = 1;
    f0 = func_08AA0904(a0, f12, f13);
    goto L_08A9F514;
L_08A9F514:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08A9F490;
}

/* 08A9F51C */
float func_08A9F51C(float f12)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A9F51C:;
    v0 = FBITS(f12);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    return f0;
}

/* 08A9F530 */
float func_08A9F530(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f13 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9F530:;
    a0 = FBITS(f12);
    v0 = 0x3f490000u;
    v0 = v0 | 0xfd8;
    v1 = (a0 >> 0) & 0x7fffffff;
    sp = sp - 32;
    v0 = (s32)v0 < (s32)v1;
    f13 = BITSF(0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A9F5D8; }
    goto L_08A9F558;
L_08A9F558:;
    v0 = 0x7f7f0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F57C; }
    goto L_08A9F56C;
L_08A9F56C:;
    f0 = f12 - f12;
    goto L_08A9F570;
L_08A9F570:;
    goto L_08A9F574;
L_08A9F574:;
    sp = sp + 32;
    return f0;
L_08A9F57C:;
    a0 = sp + 0;
    v0 = func_08A9FCD4(a0, f12);
    goto L_08A9F584;
L_08A9F584:;
    v1 = v0 & 0x3;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08A9F5E8; }
    goto L_08A9F594;
L_08A9F594:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A9F5C8; }
    goto L_08A9F59C;
L_08A9F59C:;
    cnd_ = v1 == v0;
    f12 = BITSF(LD32(sp));
    if (cnd_) { goto L_08A9F5B4; }
    goto L_08A9F5A4;
L_08A9F5A4:;
    f13 = BITSF(LD32(sp+4));
    f0 = func_08AA0024(f12, f13);
    goto L_08A9F5AC;
L_08A9F5AC:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08A9F570;
L_08A9F5B4:;
    f13 = BITSF(LD32(sp+4));
    a0 = 1;
    f0 = func_08AA0904(a0, f12, f13);
    goto L_08A9F5C0;
L_08A9F5C0:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_08A9F570;
L_08A9F5C8:;
    cnd_ = v1 != 0;
    f12 = BITSF(LD32(sp));
    if (cnd_) { goto L_08A9F5A4; }
    goto L_08A9F5D0;
L_08A9F5D0:;
    f13 = BITSF(LD32(sp+4));
    a0 = 1;
    goto L_08A9F5D8;
L_08A9F5D8:;
    f0 = func_08AA0904(a0, f12, f13);
    goto L_08A9F5E0;
L_08A9F5E0:;
    goto L_08A9F574;
L_08A9F5E8:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f0 = func_08AA0024(f12, f13);
    goto L_08A9F5F4;
L_08A9F5F4:;
    goto L_08A9F574;
}

/* 08A9F5FC */
float func_08A9F5FC(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A9F5FC:;
    sp = sp - 80;
    f21 = f12;
    f20 = f13;
    f0 = func_08A9F8C0(f12, f13);
    goto L_08A9F620;
L_08A9F620:;
    v0 = D_08AEB40C - (-19444);
    s0 = LD32(v0-19444);
    v1 = (u32)-1;
    cnd_ = s0 == v1;
    f22 = f0;
    if (cnd_) { goto L_08A9F644; }
    goto L_08A9F634;
L_08A9F634:;
    f12 = f20;
    { u64 r_ = func_08AA0ABC(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F63C;
L_08A9F63C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F664; }
    goto L_08A9F644;
L_08A9F644:;
    f0 = f22;
    goto L_08A9F648;
L_08A9F648:;
    goto L_08A9F64C;
L_08A9F64C:;
    sp = sp + 80;
    return f0;
L_08A9F664:;
    f12 = f21;
    { u64 r_ = func_08AA0ABC(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F66C;
L_08A9F66C:;
    cnd_ = v0 != 0;
    f0 = f22;
    if (cnd_) { goto L_08A9F648; }
    goto L_08A9F674;
L_08A9F674:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = f22; goto L_08A9F648; }
    goto L_08A9F688;
L_08A9F688:;
    fcc = FCMP(f21, f0, 2);
    cnd_ = !fcc;
    f0 = f22;
    if (cnd_) { goto L_08A9F648; }
    goto L_08A9F698;
L_08A9F698:;
    f12 = f21;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F6A0;
L_08A9F6A0:;
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    f12 = f20;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F6B0;
L_08A9F6B0:;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = 0 + 0;
    v1 = 0 + 0;
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    v0 = D_08AEAE6C - (-20884);
    v0 = v0 - 20884;
    v1 = 1;
    ST32(sp+4, v0);
    v0 = 2;
    ST32(sp, v1);
    cnd_ = s0 == v0;
    ST32(sp+32, 0);
    if (cnd_) { goto L_08A9F72C; }
    goto L_08A9F6E8;
L_08A9F6E8:;
    a0 = sp + 0;
    v0 = func_08AA09D8();
    goto L_08A9F6F0;
L_08A9F6F0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F72C; }
    goto L_08A9F6F8;
L_08A9F6F8:;
    v0 = LD32(sp+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9F718; }
    goto L_08A9F704;
L_08A9F704:;
    a0 = LD32(sp+24);
    a1 = LD32(sp+28);
    { rv_t r_ = func_08A93FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9F710;
L_08A9F710:;
    goto L_08A9F64C;
L_08A9F718:;
    v0 = func_08AA0C08();
    goto L_08A9F720;
L_08A9F720:;
    v1 = LD32(sp+32);
    ST32(v0, v1);
    goto L_08A9F704;
L_08A9F72C:;
    v0 = func_08AA0C08();
    goto L_08A9F734;
L_08A9F734:;
    v1 = 33;
    ST32(v0, v1);
    goto L_08A9F6F8;
}

/* 08A9F740 */
rv_t func_08A9F740(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A9F740:;
    sp = sp - 96;
    s1 = D_08AEB40C - (-19444);
    f22 = f12;
    f21 = f13;
    { rv_t r_ = func_08A9FB0C(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9F774;
L_08A9F774:;
    v0 = (u32)-1;
    s0 = LD32(s1-19444);
    cnd_ = s0 == v0;
    f20 = f0;
    if (cnd_) { goto L_08A9F794; }
    goto L_08A9F784;
L_08A9F784:;
    f12 = f21;
    { u64 r_ = func_08AA0ABC(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F78C;
L_08A9F78C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F7C4; }
    goto L_08A9F794;
L_08A9F794:;
    f1 = f20;
    goto L_08A9F798;
L_08A9F798:;
    goto L_08A9F79C;
L_08A9F79C:;
    f0 = f1;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08A9F7C4:;
    f12 = f22;
    { u64 r_ = func_08AA0ABC(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F7CC;
L_08A9F7CC:;
    cnd_ = v0 != 0;
    f1 = f20;
    if (cnd_) { goto L_08A9F798; }
    goto L_08A9F7D4;
L_08A9F7D4:;
    f0 = BITSF(0);
    fcc = FCMP(f21, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A9F79C; }
    goto L_08A9F7E8;
L_08A9F7E8:;
    v1 = D_08AEAE78 - (-20872);
    f12 = f22;
    v0 = 1;
    v1 = v1 - 20872;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+32, 0);
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F808;
L_08A9F808:;
    s2 = v0 + 0;
    s3 = v1 + 0;
    ST32(sp+8, s2);
    ST32(sp+12, s3);
    f12 = f21;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9F820;
L_08A9F820:;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A9F8A0; }
    goto L_08A9F830;
L_08A9F830:;
    ST32(sp+24, s2);
    ST32(sp+28, s3);
    v1 = LD32(s1-19444);
    goto L_08A9F83C;
L_08A9F83C:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A9F88C; }
    goto L_08A9F848;
L_08A9F848:;
    a0 = sp + 0;
    v0 = func_08AA09D8();
    goto L_08A9F850;
L_08A9F850:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F88C; }
    goto L_08A9F858;
L_08A9F858:;
    v0 = LD32(sp+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9F878; }
    goto L_08A9F864;
L_08A9F864:;
    a0 = LD32(sp+24);
    a1 = LD32(sp+28);
    { rv_t r_ = func_08A93FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9F870;
L_08A9F870:;
    f1 = f0;
    goto L_08A9F798;
L_08A9F878:;
    v0 = func_08AA0C08();
    goto L_08A9F880;
L_08A9F880:;
    v1 = LD32(sp+32);
    ST32(v0, v1);
    goto L_08A9F864;
L_08A9F88C:;
    v0 = func_08AA0C08();
    goto L_08A9F894;
L_08A9F894:;
    v1 = 33;
    ST32(v0, v1);
    goto L_08A9F858;
L_08A9F8A0:;
    v0 = D_08AEAE80 - (-20864);
    v0 = LD32(v0-20864);
    v1 = D_08AEAE84 - (-20860);
    v1 = LD32(v1-20860);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    v1 = LD32(s1-19444);
    goto L_08A9F83C;
}

/* 08A9F8C0 */
float func_08A9F8C0(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9F8C0:;
    a1 = FBITS(f13);
    a0 = FBITS(f12);
    v0 = 0x7f800000u;
    a1 = (a1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    a0 = (a0 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v1 = (s32)v0 < (s32)a0;
    v0 = (s32)v0 < (s32)a1;
    sp = sp - 16;
    v0 = v0 | v1;
    f1 = f12;
    a2 = FBITS(f13);
    a3 = FBITS(f12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9F910; }
    goto L_08A9F8FC;
L_08A9F8FC:;
    f0 = f13 + f12;
    goto L_08A9F900;
L_08A9F900:;
    goto L_08A9F904;
L_08A9F904:;
    sp = sp + 16;
    return f0;
L_08A9F910:;
    v0 = 0x3f800000u;
    cnd_ = a2 == v0;
    v0 = (u32)((s32)a2 >> 30);
    if (cnd_) { goto L_08A9FAFC; }
    goto L_08A9F91C;
L_08A9F91C:;
    v0 = v0 & 0x2;
    v1 = a3 >> 31;
    cnd_ = a0 != 0;
    s0 = v1 | v0;
    if (cnd_) { goto L_08A9F948; }
    goto L_08A9F92C;
L_08A9F92C:;
    v0 = 2;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 3;
    if (cnd_) { goto L_08A9FA68; }
    goto L_08A9F938;
L_08A9F938:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 3; goto L_08A9FAEC; }
    goto L_08A9F940;
L_08A9F940:;
    cnd_ = (s32)s0 >= 0;
    f0 = f12;
    if (cnd_) { goto L_08A9F900; }
    goto L_08A9F948;
L_08A9F948:;
    cnd_ = a1 == 0;
    v0 = 0x7f800000u;
    if (cnd_) { goto L_08A9FA18; }
    goto L_08A9F950;
L_08A9F950:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A9FA34; }
    goto L_08A9F958;
L_08A9F958:;
    cnd_ = a0 == v0;
    v0 = a0 - a1;
    if (cnd_) { goto L_08A9FA18; }
    goto L_08A9F960;
L_08A9F960:;
    a0 = (u32)((s32)v0 >> 23);
    v1 = (s32)a0 < 61;
    cnd_ = v1 != 0;
    v0 = a2 >> 31;
    if (cnd_) { goto L_08A9F9EC; }
    goto L_08A9F970;
L_08A9F970:;
    v0 = D_08AEAED4 - (-20780);
    f2 = BITSF(LD32(v0-20780));
    goto L_08A9F978;
L_08A9F978:;
    v0 = 1;
    goto L_08A9F97C;
L_08A9F97C:;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 2;
    if (cnd_) { goto L_08A9F9D4; }
    goto L_08A9F984;
L_08A9F984:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A9F9C4; }
    goto L_08A9F98C;
L_08A9F98C:;
    cnd_ = s0 == v0;
    v0 = D_08AEAED8 - (-20776);
    if (cnd_) { goto L_08A9F9AC; }
    goto L_08A9F994;
L_08A9F994:;
    f0 = BITSF(LD32(v0-20776));
    v0 = D_08AEAEB0 - (-20816);
    f1 = BITSF(LD32(v0-20816));
    f0 = f2 - f0;
    f0 = f0 - f1;
    goto L_08A9F900;
L_08A9F9AC:;
    f0 = BITSF(LD32(v0-20776));
    v0 = D_08AEAEB0 - (-20816);
    f1 = BITSF(LD32(v0-20816));
    f0 = f2 - f0;
    f0 = f1 - f0;
    goto L_08A9F900;
L_08A9F9C4:;
    cnd_ = s0 == 0;
    f0 = f2;
    if (cnd_) { goto L_08A9F900; }
    goto L_08A9F9CC;
L_08A9F9CC:;
    v0 = D_08AEAED8 - (-20776);
    goto L_08A9F994;
L_08A9F9D4:;
    v1 = FBITS(f2);
    v0 = 0x80000000u;
    v1 = v1 ^ v0;
    f0 = BITSF(v1);
    goto L_08A9F904;
L_08A9F9EC:;
    v1 = (s32)a0 < -60;
    v0 = v0 & v1;
    f2 = BITSF(0);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A9F97C; }
    goto L_08A9FA00;
L_08A9FA00:;
    f12 = f1 / f13;
    f0 = func_08A9F51C(f12);
    goto L_08A9FA08;
L_08A9FA08:;
    f12 = f0;
    f0 = func_08A9F1B8(f12);
    goto L_08A9FA10;
L_08A9FA10:;
    f2 = f0;
    goto L_08A9F978;
L_08A9FA18:;
    cnd_ = (s32)a3 < 0;
    v0 = D_08AEAEBC - (-20804);
    if (cnd_) { goto L_08A9FA28; }
    goto L_08A9FA20;
L_08A9FA20:;
    f0 = BITSF(LD32(v0-20804));
    goto L_08A9F900;
L_08A9FA28:;
    v0 = D_08AEAEB8 - (-20808);
    f0 = BITSF(LD32(v0-20808));
    goto L_08A9F900;
L_08A9FA34:;
    cnd_ = a0 == a1;
    v0 = 1;
    if (cnd_) { goto L_08A9FA94; }
    goto L_08A9FA3C;
L_08A9FA3C:;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 2;
    if (cnd_) { goto L_08A9FA88; }
    goto L_08A9FA44;
L_08A9FA44:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A9FA74; }
    goto L_08A9FA4C;
L_08A9FA4C:;
    cnd_ = s0 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A9FA68; }
    goto L_08A9FA54;
L_08A9FA54:;
    cnd_ = s0 != v0;
    v0 = 0x7f800000u;
    if (cnd_) { goto L_08A9F958; }
    goto L_08A9FA5C;
L_08A9FA5C:;
    v0 = D_08AEAEB4 - (-20812);
    f0 = BITSF(LD32(v0-20812));
    goto L_08A9F900;
L_08A9FA68:;
    v0 = D_08AEAEB0 - (-20816);
    f0 = BITSF(LD32(v0-20816));
    goto L_08A9F900;
L_08A9FA74:;
    f0 = BITSF(0);
    cnd_ = s0 != 0;
    v0 = 0x7f800000u;
    if (cnd_) { goto L_08A9F958; }
    goto L_08A9FA80;
L_08A9FA80:;
    goto L_08A9F904;
L_08A9FA88:;
    v0 = D_08AEAED0 - (-20784);
    f0 = BITSF(LD32(v0-20784));
    goto L_08A9F900;
L_08A9FA94:;
    cnd_ = s0 == v0;
    v0 = (s32)s0 < 2;
    if (cnd_) { goto L_08A9FAE0; }
    goto L_08A9FA9C;
L_08A9FA9C:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A9FACC; }
    goto L_08A9FAA4;
L_08A9FAA4:;
    cnd_ = s0 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A9FAC0; }
    goto L_08A9FAAC;
L_08A9FAAC:;
    cnd_ = s0 != v0;
    v0 = 0x7f800000u;
    if (cnd_) { goto L_08A9F958; }
    goto L_08A9FAB4;
L_08A9FAB4:;
    v0 = D_08AEAECC - (-20788);
    f0 = BITSF(LD32(v0-20788));
    goto L_08A9F900;
L_08A9FAC0:;
    v0 = D_08AEAEC8 - (-20792);
    f0 = BITSF(LD32(v0-20792));
    goto L_08A9F900;
L_08A9FACC:;
    cnd_ = s0 != 0;
    v0 = 0x7f800000u;
    if (cnd_) { goto L_08A9F958; }
    goto L_08A9FAD4;
L_08A9FAD4:;
    v0 = D_08AEAEC0 - (-20800);
    f0 = BITSF(LD32(v0-20800));
    goto L_08A9F900;
L_08A9FAE0:;
    v0 = D_08AEAEC4 - (-20796);
    f0 = BITSF(LD32(v0-20796));
    goto L_08A9F900;
L_08A9FAEC:;
    cnd_ = s0 != v0;
    v0 = D_08AEAEB4 - (-20812);
    if (cnd_) { goto L_08A9F948; }
    goto L_08A9FAF4;
L_08A9FAF4:;
    f0 = BITSF(LD32(v0-20812));
    goto L_08A9F900;
L_08A9FAFC:;
    f0 = func_08A9F1B8(f12);
    goto L_08A9FB04;
L_08A9FB04:;
    goto L_08A9F904;
}

/* 08A9FB0C */
rv_t func_08A9FB0C(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    int cnd_;
L_08A9FB0C:;
    a0 = FBITS(f12);
    v0 = FBITS(f13);
    v1 = 0x7f7f0000u;
    a1 = (a0 >> 0) & 0x7fffffff;
    a3 = (v0 >> 0) & 0x7fffffff;
    v1 = v1 | 0xffff;
    v1 = (s32)v1 < (s32)a1;
    v0 = a3 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = (a0 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0);
    if (cnd_) { goto L_08A9FB48; }
    goto L_08A9FB38;
L_08A9FB38:;
    v0 = 0x7f800000u;
    v0 = (s32)v0 < (s32)a3;
    cnd_ = v0 == 0;
    v0 = (s32)a1 < (s32)a3;
    if (cnd_) { goto L_08A9FB54; }
    goto L_08A9FB48;
L_08A9FB48:;
    f0 = f12 * f13;
    f0 = f0 / f0;
    return (rv_t){ v0, v1, f0 };
L_08A9FB54:;
    cnd_ = v0 != 0;
    f0 = f12;
    if (cnd_) { goto L_08A9FC8C; }
    goto L_08A9FB5C;
L_08A9FB5C:;
    cnd_ = a1 == a3;
    v0 = 0x7f0000u;
    if (cnd_) { goto L_08A9FCA0; }
    goto L_08A9FB64;
L_08A9FB64:;
    v0 = v0 | 0xffff;
    v1 = (u32)((s32)a1 >> 23);
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    t1 = v1 - 127;
    if (cnd_) { goto L_08A9FB90; }
    goto L_08A9FB78;
L_08A9FB78:;
    v0 = a1 << 8;
    cnd_ = (s32)v0 <= 0;
    t1 = (u32)-126;
    if (cnd_) { goto L_08A9FB90; }
    goto L_08A9FB84;
L_08A9FB84:;
    v0 = v0 << 1;
    cnd_ = (s32)v0 > 0;
    t1 = t1 - 1;
    if (cnd_) { goto L_08A9FB84; }
    goto L_08A9FB90;
L_08A9FB90:;
    v0 = 0x7f0000u;
    v0 = v0 | 0xffff;
    v1 = (u32)((s32)a3 >> 23);
    v0 = (s32)v0 < (s32)a3;
    cnd_ = v0 != 0;
    t0 = v1 - 127;
    if (cnd_) { goto L_08A9FBC0; }
    goto L_08A9FBA8;
L_08A9FBA8:;
    v0 = a3 << 8;
    cnd_ = (s32)v0 < 0;
    t0 = (u32)-126;
    if (cnd_) { goto L_08A9FBC0; }
    goto L_08A9FBB4;
L_08A9FBB4:;
    v0 = v0 << 1;
    cnd_ = (s32)v0 >= 0;
    t0 = t0 - 1;
    if (cnd_) { goto L_08A9FBB4; }
    goto L_08A9FBC0;
L_08A9FBC0:;
    v0 = (s32)t1 < -126;
    cnd_ = v0 != 0;
    v0 = (u32)-126;
    if (cnd_) { goto L_08A9FCC8; }
    goto L_08A9FBCC;
L_08A9FBCC:;
    v1 = a1 + 0;
    v1 = (v1 & ~(0x1ffu << 23)) | ((0 & 0x1ff) << 23);
    v0 = 0x800000u;
    a1 = v1 | v0;
    goto L_08A9FBDC;
L_08A9FBDC:;
    t2 = (s32)t0 < -126;
    cnd_ = t2 != 0;
    v0 = (u32)-126;
    if (cnd_) { goto L_08A9FCBC; }
    goto L_08A9FBE8;
L_08A9FBE8:;
    v1 = a3 + 0;
    v1 = (v1 & ~(0x1ffu << 23)) | ((0 & 0x1ff) << 23);
    v0 = 0x800000u;
    a3 = v1 | v0;
    goto L_08A9FBF8;
L_08A9FBF8:;
    a2 = t1 - t0;
    a2 = a2 - 1;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    v1 = a1 - a3;
    if (cnd_) { goto L_08A9FC28; }
    goto L_08A9FC0C;
L_08A9FC0C:;
    a2 = a2 - 1;
    cnd_ = (s32)v1 < 0;
    a1 = a1 << 1;
    if (cnd_) { goto L_08A9FC20; }
    goto L_08A9FC18;
L_08A9FC18:;
    cnd_ = v1 == 0;
    a1 = v1 << 1;
    if (cnd_) { goto L_08A9FCA0; }
    goto L_08A9FC20;
L_08A9FC20:;
    cnd_ = a2 != v0;
    v1 = a1 - a3;
    if (cnd_) { goto L_08A9FC0C; }
    goto L_08A9FC28;
L_08A9FC28:;
    v0 = (s32)v1 < 0;
    if (v0 == 0) a1 = v1;
    cnd_ = a1 == 0;
    v1 = a0 >> 31;
    if (cnd_) { goto L_08A9FCA4; }
    goto L_08A9FC38;
L_08A9FC38:;
    v0 = 0x7f0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9FC68; }
    goto L_08A9FC4C;
L_08A9FC4C:;
    v1 = 0x7f0000u;
    v1 = v1 | 0xffff;
    goto L_08A9FC54;
L_08A9FC54:;
    a1 = a1 << 1;
    v0 = (s32)v1 < (s32)a1;
    cnd_ = v0 == 0;
    t0 = t0 - 1;
    if (cnd_) { goto L_08A9FC54; }
    goto L_08A9FC64;
L_08A9FC64:;
    t2 = (s32)t0 < -126;
    goto L_08A9FC68;
L_08A9FC68:;
    cnd_ = t2 != 0;
    v0 = (u32)-126;
    if (cnd_) { goto L_08A9FC94; }
    goto L_08A9FC70;
L_08A9FC70:;
    v1 = t0 + 127;
    v0 = 0xff800000u;
    v0 = a1 + v0;
    v1 = v1 << 23;
    a1 = v0 | v1;
    goto L_08A9FC84;
L_08A9FC84:;
    a1 = a1 | a0;
    f0 = BITSF(a1);
    goto L_08A9FC8C;
L_08A9FC8C:;
    return (rv_t){ v0, v1, f0 };
L_08A9FC94:;
    a2 = v0 - t0;
    a1 = (u32)((s32)a1 >> (a2 & 31));
    goto L_08A9FC84;
L_08A9FCA0:;
    v1 = a0 >> 31;
    goto L_08A9FCA4;
L_08A9FCA4:;
    v0 = D_08AEAEE0 - (-20768);
    v1 = v1 << 2;
    v0 = v0 - 20768;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    return (rv_t){ v0, v1, f0 };
L_08A9FCBC:;
    a2 = v0 - t0;
    a3 = a3 << (a2 & 31);
    goto L_08A9FBF8;
L_08A9FCC8:;
    a2 = v0 - t1;
    a1 = a1 << (a2 & 31);
    goto L_08A9FBDC;
}

/* 08A9FCD4 */
u32 func_08A9FCD4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9FCD4:;
    sp = sp - 32;
    s0 = FBITS(f12);
    v0 = 0x3f490000u;
    v0 = v0 | 0xfd8;
    s0 = (s0 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = (s32)v0 < (s32)s0;
    s2 = FBITS(f12);
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9FD2C; }
    goto L_08A9FD08;
L_08A9FD08:;
    v0 = 0 + 0;
    ST32(s1, FBITS(f12));
    ST32(a0+4, 0);
    goto L_08A9FD14;
L_08A9FD14:;
    goto L_08A9FD18;
L_08A9FD18:;
    sp = sp + 32;
    return v0;
L_08A9FD2C:;
    v0 = 0x40160000u;
    v0 = v0 | 0xcbe3;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 != 0;
    v0 = 0x43490000u;
    if (cnd_) { goto L_08A9FDF4; }
    goto L_08A9FD40;
L_08A9FD40:;
    cnd_ = (s32)s2 <= 0;
    v0 = D_08AEB310 - (-19696);
    if (cnd_) { goto L_08A9FDA0; }
    goto L_08A9FD48;
L_08A9FD48:;
    f0 = BITSF(LD32(v0-19696));
    v1 = 0x3fc90000u;
    a0 = s0 + 0;
    a0 = (a0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    v1 = v1 | 0xfd0;
    cnd_ = a0 == v1;
    f12 = f12 - f0;
    if (cnd_) { goto L_08A9FD88; }
    goto L_08A9FD64;
L_08A9FD64:;
    v0 = D_08AEB314 - (-19692);
    f2 = BITSF(LD32(v0-19692));
    goto L_08A9FD6C;
L_08A9FD6C:;
    f1 = f12 - f2;
    v0 = 1;
    f0 = f12 - f1;
    ST32(s1, FBITS(f1));
    f0 = f0 - f2;
    goto L_08A9FD80;
L_08A9FD80:;
    ST32(s1+4, FBITS(f0));
    goto L_08A9FD14;
L_08A9FD88:;
    v1 = D_08AEB318 - (-19688);
    f0 = BITSF(LD32(v1-19688));
    v0 = D_08AEB31C - (-19684);
    f2 = BITSF(LD32(v0-19684));
    f12 = f12 - f0;
    goto L_08A9FD6C;
L_08A9FDA0:;
    f0 = BITSF(LD32(v0-19696));
    v1 = 0x3fc90000u;
    a0 = s0 + 0;
    a0 = (a0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    v1 = v1 | 0xfd0;
    cnd_ = a0 == v1;
    f12 = f12 + f0;
    if (cnd_) { goto L_08A9FDDC; }
    goto L_08A9FDBC;
L_08A9FDBC:;
    v0 = D_08AEB314 - (-19692);
    f2 = BITSF(LD32(v0-19692));
    goto L_08A9FDC4;
L_08A9FDC4:;
    f1 = f12 + f2;
    v0 = (u32)-1;
    f0 = f12 - f1;
    ST32(s1, FBITS(f1));
    f0 = f0 + f2;
    goto L_08A9FD80;
L_08A9FDDC:;
    v1 = D_08AEB318 - (-19688);
    f0 = BITSF(LD32(v1-19688));
    v0 = D_08AEB31C - (-19684);
    f2 = BITSF(LD32(v0-19684));
    f12 = f12 + f0;
    goto L_08A9FDC4;
L_08A9FDF4:;
    v0 = v0 | 0xf80;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 == 0;
    v0 = 0x7f7f0000u;
    if (cnd_) { goto L_08A9FEDC; }
    goto L_08A9FE04;
L_08A9FE04:;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (u32)((s32)s0 >> 23); goto L_08A9FE28; }
    goto L_08A9FE14;
L_08A9FE14:;
    f0 = f12 - f12;
    v0 = 0 + 0;
    ST32(a0, FBITS(f0));
    ST32(a0+4, FBITS(f0));
    goto L_08A9FD14;
L_08A9FE28:;
    a2 = v0 - 134;
    v0 = a2 << 23;
    s0 = s0 - v0;
    f12 = BITSF(s0);
    v1 = D_08AEB330 - (-19664);
    f3 = BITSF(LD32(v1-19664));
    v0 = sp + 0;
    v1 = 1;
    goto L_08A9FE48;
L_08A9FE48:;
    f0 = BITSF(F2I(f12, 1));
    v1 = v1 - 1;
    f1 = (float)(s32)FBITS(f0);
    f2 = f12 - f1;
    ST32(v0, FBITS(f1));
    v0 = v0 + 4;
    cnd_ = (s32)v1 >= 0;
    f12 = f2 * f3;
    if (cnd_) { goto L_08A9FE48; }
    goto L_08A9FE68;
L_08A9FE68:;
    f1 = BITSF(0);
    ST32(sp+8, FBITS(f12));
    fcc = FCMP(f12, f1, 2);
    cnd_ = !fcc;
    a3 = 3;
    if (cnd_) { goto L_08A9FE9C; }
    goto L_08A9FE80;
L_08A9FE80:;
    v0 = sp + 8;
    goto L_08A9FE84;
L_08A9FE84:;
    v0 = v0 - 4;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a3 = a3 - 1;
    if (cnd_) { goto L_08A9FE84; }
    goto L_08A9FE9C;
L_08A9FE9C:;
    t1 = D_08AEAF50 - (-20656);
    t1 = t1 - 20656;
    a0 = sp + 0;
    a1 = s1 + 0;
    t0 = 2;
    v0 = func_08AA0144(a0, a1, a2, a3, t0, t1);
    goto L_08A9FEB4;
L_08A9FEB4:;
    cnd_ = (s32)s2 >= 0;
    if (cnd_) { goto L_08A9FD18; }
    goto L_08A9FEBC;
L_08A9FEBC:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = 0 - v0;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_08A9FED0;
L_08A9FED0:;
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    goto L_08A9FD14;
L_08A9FEDC:;
    f0 = func_08A9F51C(f12);
    goto L_08A9FEE4;
L_08A9FEE4:;
    v0 = D_08AEB320 - (-19680);
    f2 = f0;
    f0 = BITSF(LD32(v0-19680));
    v0 = D_08AEB324 - (-19676);
    f1 = BITSF(LD32(v0-19676));
    f0 = f2 * f0;
    v0 = D_08AEB310 - (-19696);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19696));
    v0 = D_08AEB314 - (-19692);
    f0 = BITSF(F2I(f0, 1));
    f5 = (float)(s32)FBITS(f0);
    a1 = FBITS(f0);
    f0 = BITSF(LD32(v0-19692));
    f1 = f5 * f1;
    v1 = (s32)a1 < 32;
    f3 = f5 * f0;
    cnd_ = v1 == 0;
    f4 = f2 - f1;
    if (cnd_) { goto L_08A9FF84; }
    goto L_08A9FF30;
L_08A9FF30:;
    v0 = D_08AEB268 - (-19864);
    v0 = v0 - 19864;
    v1 = a1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1-4);
    v0 = s0 + 0;
    v0 = (v0 & ~(0xffu << 0)) | ((0 & 0xff) << 0);
    cnd_ = v0 == a0;
    if (cnd_) { f1 = f4 - f3; goto L_08A9FF88; }
    goto L_08A9FF54;
L_08A9FF54:;
    f0 = f4 - f3;
    ST32(s1, FBITS(f0));
    goto L_08A9FF5C;
L_08A9FF5C:;
    f2 = BITSF(LD32(s1));
    v0 = a1 + 0;
    f0 = f4 - f2;
    f1 = f0 - f3;
    cnd_ = (s32)s2 >= 0;
    ST32(s1+4, FBITS(f1));
    if (cnd_) { goto L_08A9FD14; }
    goto L_08A9FF74;
L_08A9FF74:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = 0 - a1;
    goto L_08A9FED0;
L_08A9FF84:;
    f1 = f4 - f3;
    goto L_08A9FF88;
L_08A9FF88:;
    a0 = (u32)((s32)s0 >> 23);
    v1 = FBITS(f1);
    v0 = (v1 >> 23) & 0xff;
    v1 = a0 - v0;
    v1 = (s32)v1 < 9;
    cnd_ = v1 != 0;
    ST32(s1, FBITS(f1));
    if (cnd_) { goto L_08A9FF5C; }
    goto L_08A9FFA4;
L_08A9FFA4:;
    v0 = D_08AEB318 - (-19688);
    f0 = BITSF(LD32(v0-19688));
    f2 = f4;
    v0 = D_08AEB31C - (-19684);
    f3 = f5 * f0;
    f1 = BITSF(LD32(v0-19684));
    f4 = f4 - f3;
    f1 = f5 * f1;
    f0 = f2 - f4;
    f0 = f0 - f3;
    f3 = f1 - f0;
    f2 = f4 - f3;
    v1 = FBITS(f2);
    v0 = (v1 >> 23) & 0xff;
    v1 = a0 - v0;
    v1 = (s32)v1 < 26;
    cnd_ = v1 != 0;
    ST32(s1, FBITS(f2));
    if (cnd_) { goto L_08A9FF5C; }
    goto L_08A9FFEC;
L_08A9FFEC:;
    v0 = D_08AEB328 - (-19672);
    f0 = BITSF(LD32(v0-19672));
    f2 = f4;
    v0 = D_08AEB32C - (-19668);
    f3 = f5 * f0;
    f1 = BITSF(LD32(v0-19668));
    f4 = f4 - f3;
    f1 = f5 * f1;
    f0 = f2 - f4;
    f0 = f0 - f3;
    f3 = f1 - f0;
    f2 = f4 - f3;
    ST32(s1, FBITS(f2));
    goto L_08A9FF5C;
}

/* 08AA0024 */
float func_08AA0024(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
L_08AA0024:;
    a1 = FBITS(f12);
    v0 = 0x31ff0000u;
    v1 = 0x3e990000u;
    a0 = (a1 >> 0) & 0x7fffffff;
    v0 = v0 | 0xffff;
    v1 = v1 | 0x9999;
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 != 0;
    a1 = (s32)v1 < (s32)a0;
    if (cnd_) { goto L_08AA0058; }
    goto L_08AA0048;
L_08AA0048:;
    f0 = BITSF(F2I(f12, 1));
    v0 = FBITS(f0);
    cnd_ = v0 == 0;
    v0 = D_08AEB350 - (-19632);
    if (cnd_) { goto L_08AA013C; }
    goto L_08AA0058;
L_08AA0058:;
    f3 = f12 * f12;
    v0 = D_08AEB354 - (-19628);
    f0 = BITSF(LD32(v0-19628));
    v0 = D_08AEB358 - (-19624);
    f1 = BITSF(LD32(v0-19624));
    f0 = f3 * f0;
    v0 = D_08AEB35C - (-19620);
    v1 = 0x3f480000u;
    v1 = (s32)v1 < (s32)a0;
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19620));
    v0 = 0xff000000u;
    a0 = a0 + v0;
    f0 = f3 * f0;
    v0 = D_08AEB360 - (-19616);
    f4 = BITSF(a0);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19616));
    v0 = D_08AEB364 - (-19612);
    f0 = f3 * f0;
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19612));
    v0 = D_08AEB368 - (-19608);
    f0 = f3 * f0;
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19608));
    f0 = f3 * f0;
    f0 = f0 + f1;
    cnd_ = a1 != 0;
    f2 = f3 * f0;
    if (cnd_) { goto L_08AA00FC; }
    goto L_08AA00D0;
L_08AA00D0:;
    f0 = f12 * f13;
    f1 = f3 * f2;
    v0 = D_08AEB36C - (-19604);
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-19604));
    v0 = D_08AEB350 - (-19632);
    f0 = f3 * f0;
    f0 = f0 - f1;
    f1 = BITSF(LD32(v0-19632));
    f0 = f1 - f0;
    return f0;
L_08AA00FC:;
    v0 = D_08AEB36C - (-19604);
    f0 = BITSF(LD32(v0-19604));
    f1 = f3 * f2;
    f2 = f12 * f13;
    cnd_ = v1 == 0;
    f0 = f3 * f0;
    if (cnd_) { goto L_08AA011C; }
    goto L_08AA0114;
L_08AA0114:;
    v0 = D_08AEB370 - (-19600);
    f4 = BITSF(LD32(v0-19600));
    goto L_08AA011C;
L_08AA011C:;
    f2 = f1 - f2;
    v0 = D_08AEB350 - (-19632);
    f1 = f0 - f4;
    f0 = BITSF(LD32(v0-19632));
    f1 = f1 - f2;
    f0 = f0 - f4;
    f0 = f0 - f1;
    return f0;
L_08AA013C:;
    f0 = BITSF(LD32(v0-19632));
    return f0;
}

/* 08AA0144 */
u32 func_08AA0144(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_08AA0144:;
    sp = sp - 400;
    ST32(sp+324, t0);
    t2 = a2 - 3;
    t0 = (u32)((s32)t2 >> 31);
    v0 = LD32(sp+324);
    t0 = t0 >> 29;
    v1 = v0 << 2;
    v0 = D_08AEB374 - (-19596);
    v0 = v0 - 19596;
    v1 = v1 + v0;
    t2 = t2 + t0;
    v0 = 0 + 0;
    fp = (u32)((s32)t2 >> 3);
    fp = (s32)fp > (s32)v0 ? fp : v0;
    s3 = a3 - 1;
    v0 = fp << 3;
    a2 = a2 - v0;
    s7 = a0 + 0;
    s2 = a2 - 8;
    a3 = fp - s3;
    s1 = LD32(v1);
    ST32(sp+320, a1);
    v1 = s3 + s1;
    cnd_ = (s32)v1 < 0;
    ST32(sp+328, t1);
    if (cnd_) { goto L_08AA020C; }
    goto L_08AA01D4;
L_08AA01D4:;
    v0 = a3 << 2;
    t0 = v1 + 1;
    v0 = v0 + t1;
    v1 = sp + 80;
    goto L_08AA01E4;
L_08AA01E4:;
    f0 = BITSF(0);
    cnd_ = (s32)a3 < 0;
    t0 = t0 - 1;
    if (cnd_) { goto L_08AA01F8; }
    goto L_08AA01F0;
L_08AA01F0:;
    f0 = BITSF(LD32(v0));
    f0 = (float)(s32)FBITS(f0);
    goto L_08AA01F8;
L_08AA01F8:;
    ST32(v1, FBITS(f0));
    a3 = a3 + 1;
    v1 = v1 + 4;
    cnd_ = t0 != 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08AA01E4; }
    goto L_08AA020C;
L_08AA020C:;
    v1 = (s32)s1 < 0;
    ST32(sp+332, v1);
    cnd_ = v1 != 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA0278; }
    goto L_08AA021C;
L_08AA021C:;
    v0 = s3 << 2;
    a0 = v0 + sp;
    t3 = (s32)s3 < 0;
    a1 = sp + 240;
    goto L_08AA022C;
L_08AA022C:;
    f3 = BITSF(0);
    cnd_ = t3 != 0;
    v0 = s7 + 0;
    if (cnd_) { goto L_08AA0260; }
    goto L_08AA0238;
L_08AA0238:;
    v1 = a0 + 80;
    a3 = s3 + 1;
    goto L_08AA0240;
L_08AA0240:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v1));
    a3 = a3 - 1;
    v0 = v0 + 4;
    f0 = f0 * f1;
    v1 = v1 - 4;
    cnd_ = a3 != 0;
    f3 = f3 + f0;
    if (cnd_) { goto L_08AA0240; }
    goto L_08AA0260;
L_08AA0260:;
    t0 = t0 + 1;
    v0 = (s32)s1 < (s32)t0;
    ST32(a1, FBITS(f3));
    a0 = a0 + 4;
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08AA022C; }
    goto L_08AA0278;
L_08AA0278:;
    s0 = s1 + 0;
    goto L_08AA027C;
L_08AA027C:;
    s4 = s0 << 2;
    v1 = s4 + sp;
    a3 = s0 + 0;
    cnd_ = (s32)s0 <= 0;
    f20 = BITSF(LD32(v1+240));
    if (cnd_) { goto L_08AA02DC; }
    goto L_08AA0290;
L_08AA0290:;
    v0 = D_08AEB3BC - (-19524);
    f5 = BITSF(LD32(v0-19524));
    v0 = D_08AEB3C0 - (-19520);
    f4 = BITSF(LD32(v0-19520));
    v0 = v1 + 236;
    v1 = sp + 0;
    goto L_08AA02A8;
L_08AA02A8:;
    f0 = f20 * f5;
    f2 = BITSF(LD32(v0));
    a3 = a3 - 1;
    v0 = v0 - 4;
    f1 = BITSF(F2I(f0, 1));
    f3 = (float)(s32)FBITS(f1);
    f0 = f3 * f4;
    f0 = f20 - f0;
    f20 = f2 + f3;
    f1 = BITSF(F2I(f0, 1));
    ST32(v1, FBITS(f1));
    cnd_ = (s32)a3 > 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AA02A8; }
    goto L_08AA02DC;
L_08AA02DC:;
    f12 = f20;
    a0 = s2 + 0;
    f0 = func_08AA0AD0(a0, f12);
    goto L_08AA02E8;
L_08AA02E8:;
    a0 = D_08AEB3C4 - (-19516);
    f12 = BITSF(LD32(a0-19516));
    f20 = f0;
    s6 = 0 + 0;
    f12 = f0 * f12;
    { rv_t r_ = func_08AA09E0(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA0300;
L_08AA0300:;
    v0 = D_08AEB3C8 - (-19512);
    f1 = BITSF(LD32(v0-19512));
    f0 = f0 * f1;
    f20 = f20 - f0;
    f0 = BITSF(F2I(f20, 1));
    s5 = FBITS(f0);
    f0 = (float)(s32)FBITS(f0);
    cnd_ = (s32)s2 <= 0;
    f20 = f20 - f0;
    if (cnd_) { goto L_08AA08D0; }
    goto L_08AA0324;
L_08AA0324:;
    a1 = s4 + sp;
    a0 = LD32(a1-4);
    v1 = 8;
    v1 = v1 - s2;
    t0 = (u32)((s32)a0 >> (v1 & 31));
    v1 = t0 << (v1 & 31);
    v0 = 7;
    a0 = a0 - v1;
    v0 = v0 - s2;
    s6 = (u32)((s32)a0 >> (v0 & 31));
    s5 = s5 + t0;
    ST32(a1-4, a0);
    goto L_08AA0354;
L_08AA0354:;
    cnd_ = (s32)s6 <= 0;
    if (cnd_) { goto L_08AA03C8; }
    goto L_08AA035C;
L_08AA035C:;
    s5 = s5 + 1;
    cnd_ = (s32)s0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AA03A0; }
    goto L_08AA0368;
L_08AA0368:;
    a2 = 256;
    a1 = 255;
    v1 = sp + 0;
    t0 = s0 + 0;
    goto L_08AA0378;
L_08AA0378:;
    a3 = LD32(v1);
    cnd_ = a0 != 0;
    v0 = a1 - a3;
    if (cnd_) { goto L_08AA0390; }
    goto L_08AA0384;
L_08AA0384:;
    cnd_ = a3 == 0;
    v0 = a2 - a3;
    if (cnd_) { goto L_08AA0394; }
    goto L_08AA038C;
L_08AA038C:;
    a0 = 1;
    goto L_08AA0390;
L_08AA0390:;
    ST32(v1, v0);
    goto L_08AA0394;
L_08AA0394:;
    t0 = t0 - 1;
    cnd_ = t0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AA0378; }
    goto L_08AA03A0;
L_08AA03A0:;
    cnd_ = (s32)s2 <= 0;
    v0 = 1;
    if (cnd_) { goto L_08AA03BC; }
    goto L_08AA03A8;
L_08AA03A8:;
    cnd_ = s2 == v0;
    if (cnd_) { v1 = s4 + sp; goto L_08AA08C4; }
    goto L_08AA03B0;
L_08AA03B0:;
    v0 = 2;
    cnd_ = s2 == v0;
    if (cnd_) { v1 = s4 + sp; goto L_08AA08B4; }
    goto L_08AA03BC;
L_08AA03BC:;
    v0 = 2;
    cnd_ = s6 == v0;
    v0 = D_08AEB3D0 - (-19504);
    if (cnd_) { goto L_08AA0898; }
    goto L_08AA03C8;
L_08AA03C8:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    t0 = s0 - 1;
    if (cnd_) { goto L_08AA0820; }
    goto L_08AA03DC;
L_08AA03DC:;
    v0 = (s32)t0 < (s32)s1;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA0410; }
    goto L_08AA03E8;
L_08AA03E8:;
    v0 = t0 << 2;
    a0 = v0 + sp;
    goto L_08AA03F0;
L_08AA03F0:;
    v0 = LD32(a0);
    t0 = t0 - 1;
    v1 = (s32)t0 < (s32)s1;
    a3 = a3 | v0;
    cnd_ = v1 == 0;
    a0 = a0 - 4;
    if (cnd_) { goto L_08AA03F0; }
    goto L_08AA0408;
L_08AA0408:;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08AA04F8; }
    goto L_08AA0410;
L_08AA0410:;
    v0 = s1 - 1;
    v0 = v0 << 2;
    v0 = v0 + sp;
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    a0 = 1;
    if (cnd_) { goto L_08AA0444; }
    goto L_08AA0428;
L_08AA0428:;
    v0 = s1 << 2;
    v0 = v0 + sp;
    v1 = v0 - 4;
    goto L_08AA0434;
L_08AA0434:;
    v1 = v1 - 4;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08AA0434; }
    goto L_08AA0444;
L_08AA0444:;
    t2 = s0 + a0;
    t0 = s0 + 1;
    v0 = (s32)t2 < (s32)t0;
    cnd_ = v0 != 0;
    v1 = s3 << 2;
    if (cnd_) { goto L_08AA04F0; }
    goto L_08AA0458;
L_08AA0458:;
    v0 = t0 << 2;
    v1 = v1 + sp;
    v1 = v0 + v1;
    v0 = v0 + sp;
    t1 = v0 + 240;
    v0 = LD32(sp+328);
    a0 = fp + t0;
    a1 = s3 + t0;
    a0 = a0 << 2;
    a1 = a1 << 2;
    v1 = v1 + 80;
    a0 = a0 + v0;
    a1 = a1 + sp;
    t3 = (s32)s3 < 0;
    goto L_08AA0490;
L_08AA0490:;
    f1 = BITSF(LD32(a0));
    f3 = BITSF(0);
    f0 = (float)(s32)FBITS(f1);
    cnd_ = t3 != 0;
    ST32(v1, FBITS(f0));
    if (cnd_) { goto L_08AA04D0; }
    goto L_08AA04A4;
L_08AA04A4:;
    a2 = a1 + 80;
    v0 = s7 + 0;
    a3 = s3 + 1;
    goto L_08AA04B0;
L_08AA04B0:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a2));
    a3 = a3 - 1;
    v0 = v0 + 4;
    f0 = f0 * f1;
    a2 = a2 - 4;
    cnd_ = a3 != 0;
    f3 = f3 + f0;
    if (cnd_) { goto L_08AA04B0; }
    goto L_08AA04D0;
L_08AA04D0:;
    t0 = t0 + 1;
    v0 = (s32)t2 < (s32)t0;
    ST32(t1, FBITS(f3));
    a1 = a1 + 4;
    a0 = a0 + 4;
    v1 = v1 + 4;
    cnd_ = v0 == 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08AA0490; }
    goto L_08AA04F0;
L_08AA04F0:;
    s0 = t2 + 0;
    goto L_08AA027C;
L_08AA04F8:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    f12 = f20;
    if (cnd_) { goto L_08AA0824; }
    goto L_08AA050C;
L_08AA050C:;
    s0 = s0 - 1;
    v0 = s0 << 2;
    v0 = v0 + sp;
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    s2 = s2 - 8;
    if (cnd_) { goto L_08AA053C; }
    goto L_08AA0524;
L_08AA0524:;
    v1 = v0 + 0;
    goto L_08AA0528;
L_08AA0528:;
    v1 = v1 - 4;
    v0 = LD32(v1);
    s0 = s0 - 1;
    cnd_ = v0 == 0;
    s2 = s2 - 8;
    if (cnd_) { goto L_08AA0528; }
    goto L_08AA053C;
L_08AA053C:;
    v1 = D_08AEB3D0 - (-19504);
    f12 = BITSF(LD32(v1-19504));
    a0 = s2 + 0;
    f0 = func_08AA0AD0(a0, f12);
    goto L_08AA054C;
L_08AA054C:;
    f3 = f0;
    cnd_ = (s32)s0 < 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA060C; }
    goto L_08AA0558;
L_08AA0558:;
    v0 = D_08AEB3BC - (-19524);
    f2 = BITSF(LD32(v0-19524));
    v0 = s0 << 2;
    v0 = v0 + sp;
    goto L_08AA0568;
L_08AA0568:;
    f1 = BITSF(LD32(v0));
    t0 = t0 - 1;
    f0 = (float)(s32)FBITS(f1);
    f0 = f3 * f0;
    f3 = f3 * f2;
    ST32(v0+240, FBITS(f0));
    cnd_ = (s32)t0 >= 0;
    v0 = v0 - 4;
    if (cnd_) { goto L_08AA0568; }
    goto L_08AA0588;
L_08AA0588:;
    cnd_ = (s32)s0 < 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA060C; }
    goto L_08AA0590;
L_08AA0590:;
    v1 = s0 << 2;
    v0 = D_08AEB380 - (-19584);
    t3 = v0 - 19584;
    v1 = v1 + sp;
    goto L_08AA05A0;
L_08AA05A0:;
    v0 = LD32(sp+332);
    f3 = BITSF(0);
    a0 = 0 + 0;
    cnd_ = v0 != 0;
    t1 = s0 - t0;
    if (cnd_) { goto L_08AA05F4; }
    goto L_08AA05B4;
L_08AA05B4:;
    cnd_ = (s32)t1 < 0;
    t2 = t1 + 0;
    if (cnd_) { goto L_08AA05F4; }
    goto L_08AA05BC;
L_08AA05BC:;
    a2 = v1 + 240;
    a1 = t3 + 0;
    f0 = BITSF(LD32(a1));
    goto L_08AA05C8;
L_08AA05C8:;
    f1 = BITSF(LD32(a2));
    a0 = a0 + 1;
    v0 = (s32)s1 < (s32)a0;
    f0 = f0 * f1;
    a3 = (s32)t2 < (s32)a0;
    a1 = a1 + 4;
    a2 = a2 + 4;
    cnd_ = v0 != 0;
    f3 = f3 + f0;
    if (cnd_) { goto L_08AA05F4; }
    goto L_08AA05EC;
L_08AA05EC:;
    cnd_ = a3 == 0;
    if (cnd_) { f0 = BITSF(LD32(a1)); goto L_08AA05C8; }
    goto L_08AA05F4;
L_08AA05F4:;
    v0 = t1 << 2;
    v0 = v0 + sp;
    t0 = t0 - 1;
    ST32(v0+160, FBITS(f3));
    cnd_ = (s32)t0 >= 0;
    v1 = v1 - 4;
    if (cnd_) { goto L_08AA05A0; }
    goto L_08AA060C;
L_08AA060C:;
    v1 = LD32(sp+324);
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+324); goto L_08AA0724; }
    goto L_08AA061C;
L_08AA061C:;
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { goto L_08AA06D8; }
    goto L_08AA0624;
L_08AA0624:;
    f3 = BITSF(0);
    cnd_ = (s32)s0 < 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA0650; }
    goto L_08AA0630;
L_08AA0630:;
    v0 = s0 << 2;
    v0 = v0 + sp;
    v0 = v0 + 160;
    goto L_08AA063C;
L_08AA063C:;
    f0 = BITSF(LD32(v0));
    t0 = t0 - 1;
    v0 = v0 - 4;
    cnd_ = (s32)t0 >= 0;
    f3 = f3 + f0;
    if (cnd_) { goto L_08AA063C; }
    goto L_08AA0650;
L_08AA0650:;
    cnd_ = s6 == 0;
    f1 = f3;
    if (cnd_) { goto L_08AA065C; }
    goto L_08AA0658;
L_08AA0658:;
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    goto L_08AA065C;
L_08AA065C:;
    f0 = BITSF(LD32(sp+160));
    v1 = LD32(sp+320);
    f3 = f0 - f3;
    cnd_ = (s32)s0 <= 0;
    ST32(v1, FBITS(f1));
    if (cnd_) { goto L_08AA068C; }
    goto L_08AA0670;
L_08AA0670:;
    t0 = s0 + 0;
    v0 = sp + 164;
    goto L_08AA0678;
L_08AA0678:;
    f0 = BITSF(LD32(v0));
    t0 = t0 - 1;
    v0 = v0 + 4;
    cnd_ = t0 != 0;
    f3 = f3 + f0;
    if (cnd_) { goto L_08AA0678; }
    goto L_08AA068C;
L_08AA068C:;
    cnd_ = s6 == 0;
    f0 = f3;
    if (cnd_) { goto L_08AA0698; }
    goto L_08AA0694;
L_08AA0694:;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    goto L_08AA0698;
L_08AA0698:;
    a0 = LD32(sp+320);
    ST32(a0+4, FBITS(f0));
    goto L_08AA06A0;
L_08AA06A0:;
    v0 = s5 & 0x7;
    goto L_08AA06A4;
L_08AA06A4:;
    sp = sp + 400;
    return v0;
L_08AA06D8:;
    cnd_ = v1 != 0;
    v0 = s5 & 0x7;
    if (cnd_) { goto L_08AA06A4; }
    goto L_08AA06E0;
L_08AA06E0:;
    f3 = BITSF(0);
    cnd_ = (s32)s0 < 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA070C; }
    goto L_08AA06EC;
L_08AA06EC:;
    v0 = s0 << 2;
    v0 = v0 + sp;
    v0 = v0 + 160;
    goto L_08AA06F8;
L_08AA06F8:;
    f0 = BITSF(LD32(v0));
    t0 = t0 - 1;
    v0 = v0 - 4;
    cnd_ = (s32)t0 >= 0;
    f3 = f3 + f0;
    if (cnd_) { goto L_08AA06F8; }
    goto L_08AA070C;
L_08AA070C:;
    cnd_ = s6 == 0;
    f0 = f3;
    if (cnd_) { goto L_08AA0718; }
    goto L_08AA0714;
L_08AA0714:;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    goto L_08AA0718;
L_08AA0718:;
    v0 = LD32(sp+320);
    ST32(v0, FBITS(f0));
    goto L_08AA06A0;
L_08AA0724:;
    v0 = 3;
    cnd_ = a0 != v0;
    if (cnd_) { v0 = s5 & 0x7; goto L_08AA06A4; }
    goto L_08AA0730;
L_08AA0730:;
    cnd_ = (s32)s0 <= 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA0768; }
    goto L_08AA0738;
L_08AA0738:;
    v0 = s0 << 2;
    v0 = v0 + sp;
    goto L_08AA0740;
L_08AA0740:;
    f0 = BITSF(LD32(v0+156));
    f1 = BITSF(LD32(v0+160));
    t0 = t0 - 1;
    f3 = f0 + f1;
    f0 = f0 - f3;
    ST32(v0+156, FBITS(f3));
    f1 = f1 + f0;
    ST32(v0+160, FBITS(f1));
    cnd_ = (s32)t0 > 0;
    v0 = v0 - 4;
    if (cnd_) { goto L_08AA0740; }
    goto L_08AA0768;
L_08AA0768:;
    a0 = (s32)s0 < 2;
    cnd_ = a0 != 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA07A8; }
    goto L_08AA0774;
L_08AA0774:;
    v0 = s0 << 2;
    v1 = v0 + sp;
    goto L_08AA077C;
L_08AA077C:;
    f0 = BITSF(LD32(v1+156));
    f1 = BITSF(LD32(v1+160));
    t0 = t0 - 1;
    v0 = (s32)t0 < 2;
    f3 = f0 + f1;
    f0 = f0 - f3;
    ST32(v1+156, FBITS(f3));
    f1 = f1 + f0;
    ST32(v1+160, FBITS(f1));
    cnd_ = v0 == 0;
    v1 = v1 - 4;
    if (cnd_) { goto L_08AA077C; }
    goto L_08AA07A8;
L_08AA07A8:;
    f3 = BITSF(0);
    cnd_ = a0 != 0;
    t0 = s0 + 0;
    if (cnd_) { goto L_08AA07D8; }
    goto L_08AA07B4;
L_08AA07B4:;
    v0 = s0 << 2;
    v0 = v0 + sp;
    v1 = v0 + 160;
    goto L_08AA07C0;
L_08AA07C0:;
    f0 = BITSF(LD32(v1));
    t0 = t0 - 1;
    v0 = (s32)t0 < 2;
    f3 = f3 + f0;
    cnd_ = v0 == 0;
    v1 = v1 - 4;
    if (cnd_) { goto L_08AA07C0; }
    goto L_08AA07D8;
L_08AA07D8:;
    cnd_ = s6 != 0;
    if (cnd_) { f1 = BITSF(LD32(sp+160)); goto L_08AA07FC; }
    goto L_08AA07E0;
L_08AA07E0:;
    f0 = BITSF(LD32(sp+160));
    f1 = BITSF(LD32(sp+164));
    v0 = LD32(sp+320);
    ST32(v0+8, FBITS(f3));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    goto L_08AA06A0;
L_08AA07FC:;
    f0 = BITSF(LD32(sp+164));
    f2 = BITSF(FBITS(f3) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v1 = LD32(sp+320);
    ST32(v1+8, FBITS(f2));
    ST32(v1, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    goto L_08AA06A0;
L_08AA0820:;
    f12 = f20;
    goto L_08AA0824;
L_08AA0824:;
    a0 = 0 - s2;
    f0 = func_08AA0AD0(a0, f12);
    goto L_08AA082C;
L_08AA082C:;
    v0 = D_08AEB3C0 - (-19520);
    f2 = BITSF(LD32(v0-19520));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    f20 = f0;
    if (cnd_) { goto L_08AA0888; }
    goto L_08AA0844;
L_08AA0844:;
    v0 = D_08AEB3BC - (-19524);
    f0 = BITSF(LD32(v0-19524));
    s0 = s0 + 1;
    v0 = s0 << 2;
    f0 = f20 * f0;
    v1 = s4 + sp;
    v0 = v0 + sp;
    s2 = s2 + 8;
    f1 = BITSF(F2I(f0, 1));
    f3 = (float)(s32)FBITS(f1);
    f0 = f3 * f2;
    f2 = BITSF(F2I(f3, 1));
    f0 = f20 - f0;
    f1 = BITSF(F2I(f0, 1));
    ST32(v1, FBITS(f1));
    ST32(v0, FBITS(f2));
    goto L_08AA053C;
L_08AA0888:;
    f0 = BITSF(F2I(f0, 1));
    v0 = s4 + sp;
    ST32(v0, FBITS(f0));
    goto L_08AA053C;
L_08AA0898:;
    f12 = BITSF(LD32(v0-19504));
    cnd_ = a0 == 0;
    f20 = f12 - f20;
    if (cnd_) { goto L_08AA03C8; }
    goto L_08AA08A4;
L_08AA08A4:;
    a0 = s2 + 0;
    f0 = func_08AA0AD0(a0, f12);
    goto L_08AA08AC;
L_08AA08AC:;
    f20 = f20 - f0;
    goto L_08AA03C8;
L_08AA08B4:;
    v0 = LD32(v1-4);
    v0 = v0 & 0x3f;
    goto L_08AA08BC;
L_08AA08BC:;
    ST32(v1-4, v0);
    goto L_08AA03BC;
L_08AA08C4:;
    v0 = LD32(v1-4);
    v0 = v0 & 0x7f;
    goto L_08AA08BC;
L_08AA08D0:;
    cnd_ = s2 != 0;
    v0 = D_08AEB3CC - (-19508);
    if (cnd_) { goto L_08AA08E8; }
    goto L_08AA08D8;
L_08AA08D8:;
    v0 = s4 + sp;
    v1 = LD32(v0-4);
    s6 = (u32)((s32)v1 >> 8);
    goto L_08AA0354;
L_08AA08E8:;
    f0 = BITSF(LD32(v0-19508));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AA03C8; }
    goto L_08AA08FC;
L_08AA08FC:;
    s6 = 2;
    goto L_08AA0354;
}

/* 08AA0904 */
float func_08AA0904(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
L_08AA0904:;
    v1 = FBITS(f12);
    v0 = 0x31ff0000u;
    v0 = v0 | 0xffff;
    v1 = (v1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { f3 = f12 * f12; goto L_08AA0934; }
    goto L_08AA0920;
L_08AA0920:;
    f0 = BITSF(F2I(f12, 1));
    v0 = FBITS(f0);
    cnd_ = v0 == 0;
    f1 = f12;
    if (cnd_) { goto L_08AA099C; }
    goto L_08AA0930;
L_08AA0930:;
    f3 = f12 * f12;
    goto L_08AA0934;
L_08AA0934:;
    v0 = D_08AEB3F0 - (-19472);
    f0 = BITSF(LD32(v0-19472));
    v0 = D_08AEB3F4 - (-19468);
    f1 = BITSF(LD32(v0-19468));
    f0 = f3 * f0;
    v0 = D_08AEB3F8 - (-19464);
    f4 = f3 * f12;
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19464));
    v0 = D_08AEB3FC - (-19460);
    f0 = f3 * f0;
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19460));
    v0 = D_08AEB400 - (-19456);
    f0 = f3 * f0;
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-19456));
    f0 = f3 * f0;
    cnd_ = a0 != 0;
    f0 = f0 + f1;
    if (cnd_) { goto L_08AA09A4; }
    goto L_08AA0984;
L_08AA0984:;
    f0 = f3 * f0;
    v0 = D_08AEB404 - (-19452);
    f1 = BITSF(LD32(v0-19452));
    f0 = f0 + f1;
    f0 = f4 * f0;
    f1 = f12 + f0;
    goto L_08AA099C;
L_08AA099C:;
    f0 = f1;
    return f0;
L_08AA09A4:;
    v0 = D_08AEB408 - (-19448);
    f2 = f4 * f0;
    f0 = BITSF(LD32(v0-19448));
    v0 = D_08AEB404 - (-19452);
    f1 = BITSF(LD32(v0-19452));
    f0 = f13 * f0;
    f1 = f4 * f1;
    f0 = f0 - f2;
    f0 = f3 * f0;
    f0 = f0 - f13;
    f0 = f0 - f1;
    f1 = f12 - f0;
    goto L_08AA099C;
}

/* 08AA09D8 */
u32 func_08AA09D8(void)
{
    u32 v0 = 0;
L_08AA09D8:;
    v0 = 0 + 0;
    return v0;
}

/* 08AA09E0 */
rv_t func_08AA09E0(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08AA09E0:;
    a1 = FBITS(f12);
    a2 = FBITS(f12);
    a1 = (a1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = a1 >> 23;
    a0 = v0 - 127;
    v1 = (s32)a0 < 23;
    cnd_ = v1 == 0;
    v0 = 0x7f7f0000u;
    if (cnd_) { goto L_08AA0AA4; }
    goto L_08AA0A00;
L_08AA0A00:;
    cnd_ = (s32)a0 < 0;
    v0 = 0x7f0000u;
    if (cnd_) { goto L_08AA0A64; }
    goto L_08AA0A08;
L_08AA0A08:;
    v0 = v0 | 0xffff;
    a1 = (u32)((s32)v0 >> (a0 & 31));
    v1 = a2 & a1;
    cnd_ = v1 == 0;
    f0 = f12;
    if (cnd_) { goto L_08AA0A50; }
    goto L_08AA0A1C;
L_08AA0A1C:;
    v0 = D_08AEB414 - (-19436);
    f0 = BITSF(LD32(v0-19436));
    f1 = BITSF(0);
    f0 = f12 + f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AA0A4C; }
    goto L_08AA0A3C;
L_08AA0A3C:;
    cnd_ = (s32)a2 < 0;
    v0 = 0x800000u;
    if (cnd_) { goto L_08AA0A58; }
    goto L_08AA0A44;
L_08AA0A44:;
    v0 = ~(0 | a1);
    a2 = a2 & v0;
    goto L_08AA0A4C;
L_08AA0A4C:;
    f0 = BITSF(a2);
    goto L_08AA0A50;
L_08AA0A50:;
    return (rv_t){ v0, v1, f0 };
L_08AA0A58:;
    v0 = (u32)((s32)v0 >> (a0 & 31));
    a2 = a2 + v0;
    goto L_08AA0A44;
L_08AA0A64:;
    v0 = D_08AEB414 - (-19436);
    f0 = BITSF(LD32(v0-19436));
    f1 = BITSF(0);
    f0 = f12 + f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AA0A4C; }
    goto L_08AA0A84;
L_08AA0A84:;
    cnd_ = (s32)a2 < 0;
    if (cnd_) { goto L_08AA0A94; }
    goto L_08AA0A8C;
L_08AA0A8C:;
    a2 = 0 + 0;
    goto L_08AA0A4C;
L_08AA0A94:;
    cnd_ = a1 != 0;
    if (cnd_) { a2 = 0xbf800000u; goto L_08AA0A4C; }
    goto L_08AA0A9C;
L_08AA0A9C:;
    goto L_08AA0A4C;
L_08AA0AA4:;
    v0 = v0 | 0xffff;
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    f0 = f12;
    if (cnd_) { goto L_08AA0A50; }
    goto L_08AA0AB4;
L_08AA0AB4:;
    f0 = f12 + f12;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA0ABC */
u64 func_08AA0ABC(float f12)
{
    u32 v0 = 0, v1 = 0;
L_08AA0ABC:;
    v1 = FBITS(f12);
    v0 = 0x7f800000u;
    v1 = (v1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = (s32)v0 < (s32)v1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AA0AD0 */
float func_08AA0AD0(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f13 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA0AD0:;
    v1 = FBITS(f12);
    sp = sp - 32;
    v1 = (v1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    f0 = f12;
    a1 = FBITS(f12);
    cnd_ = v1 == 0;
    a2 = v1 >> 23;
    if (cnd_) { goto L_08AA0B0C; }
    goto L_08AA0AF4;
L_08AA0AF4:;
    v0 = 0x7f7f0000u;
    v0 = v0 | 0xffff;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = 0x7f0000u;
    if (cnd_) { goto L_08AA0B1C; }
    goto L_08AA0B08;
L_08AA0B08:;
    f0 = f12 + f12;
    goto L_08AA0B0C;
L_08AA0B0C:;
    goto L_08AA0B10;
L_08AA0B10:;
    sp = sp + 32;
    return f0;
L_08AA0B1C:;
    v0 = v0 | 0xffff;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a2 = a2 + a0;
    if (cnd_) { goto L_08AA0B68; }
    goto L_08AA0B2C;
L_08AA0B2C:;
    v0 = D_08AEB428 - (-19416);
    f0 = BITSF(LD32(v0-19416));
    v1 = 0xffff0000u;
    v1 = v1 | 0x3cb0;
    f12 = f12 * f0;
    v1 = (s32)a0 < (s32)v1;
    a1 = FBITS(f12);
    v0 = (a1 >> 23) & 0xff;
    cnd_ = v1 == 0;
    a2 = v0 - 25;
    if (cnd_) { goto L_08AA0B64; }
    goto L_08AA0B54;
L_08AA0B54:;
    v0 = D_08AEB42C - (-19412);
    f0 = BITSF(LD32(v0-19412));
    goto L_08AA0B5C;
L_08AA0B5C:;
    f0 = f12 * f0;
    goto L_08AA0B0C;
L_08AA0B64:;
    a2 = a2 + a0;
    goto L_08AA0B68;
L_08AA0B68:;
    v0 = (s32)a2 < 255;
    cnd_ = v0 == 0;
    v0 = a2 << 23;
    if (cnd_) { goto L_08AA0BA8; }
    goto L_08AA0B74;
L_08AA0B74:;
    v1 = a1 + 0;
    v1 = (v1 & ~(0xffu << 23)) | ((0 & 0xff) << 23);
    v1 = v1 | v0;
    f0 = BITSF(v1);
    cnd_ = (s32)a2 > 0;
    if (cnd_) { goto L_08AA0B10; }
    goto L_08AA0B8C;
L_08AA0B8C:;
    v0 = (s32)a2 < -22;
    cnd_ = v0 == 0;
    a2 = a2 + 25;
    if (cnd_) { goto L_08AA0BCC; }
    goto L_08AA0B98;
L_08AA0B98:;
    v0 = 0xc350;
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 == 0;
    v0 = D_08AEB42C - (-19412);
    if (cnd_) { goto L_08AA0BC4; }
    goto L_08AA0BA8;
L_08AA0BA8:;
    v0 = D_08AEB430 - (-19408);
    f20 = BITSF(LD32(v0-19408));
    goto L_08AA0BB0;
L_08AA0BB0:;
    f13 = f12;
    f12 = f20;
    f0 = func_08AA0BE8(f12, f13);
    goto L_08AA0BBC;
L_08AA0BBC:;
    f0 = f0 * f20;
    goto L_08AA0B0C;
L_08AA0BC4:;
    f20 = BITSF(LD32(v0-19412));
    goto L_08AA0BB0;
L_08AA0BCC:;
    v0 = a2 << 23;
    a1 = (a1 & ~(0xffu << 23)) | ((0 & 0xff) << 23);
    a1 = a1 | v0;
    v1 = D_08AEB434 - (-19404);
    f12 = BITSF(a1);
    f0 = BITSF(LD32(v1-19404));
    goto L_08AA0B5C;
}

/* 08AA0BE8 */
float func_08AA0BE8(float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA0BE8:;
    v1 = FBITS(f12);
    v0 = FBITS(f13);
    v1 = (v1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    v0 = (v0 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0);
    v1 = v1 | v0;
    f0 = BITSF(v1);
    return f0;
}

/* 08AA0C08 */
u32 func_08AA0C08(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0C08:;
    sp = sp - 16;
    v0 = func_08A870E0();
    goto L_08AA0C18;
L_08AA0C18:;
    sp = sp + 16;
    return v0;
}

/* 08AA0C24 */
void func_08AA0C24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0C24:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0C54; }
    goto L_08AA0C40;
L_08AA0C40:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0C54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0C5C;
L_08AA0C5C:;
    ST32(s0, 0);
    goto L_08AA0C40;
}

/* 08AA0C64 */
void func_08AA0C64(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0C64:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0C94; }
    goto L_08AA0C80;
L_08AA0C80:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0C94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0C9C;
L_08AA0C9C:;
    ST32(s0, 0);
    goto L_08AA0C80;
}

/* 08AA0CA4 */
void func_08AA0CA4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0CA4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0CD4; }
    goto L_08AA0CC0;
L_08AA0CC0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0CD4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0CDC;
L_08AA0CDC:;
    ST32(s0, 0);
    goto L_08AA0CC0;
}

/* 08AA0CE4 */
void func_08AA0CE4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0CE4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0D14; }
    goto L_08AA0D00;
L_08AA0D00:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0D14:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0D1C;
L_08AA0D1C:;
    ST32(s0, 0);
    goto L_08AA0D00;
}

/* 08AA0D24 */
void func_08AA0D24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0D24:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0D54; }
    goto L_08AA0D40;
L_08AA0D40:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0D54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0D5C;
L_08AA0D5C:;
    ST32(s0, 0);
    goto L_08AA0D40;
}

/* 08AA0D64 */
void func_08AA0D64(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0D64:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0D94; }
    goto L_08AA0D80;
L_08AA0D80:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0D94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0D9C;
L_08AA0D9C:;
    ST32(s0, 0);
    goto L_08AA0D80;
}

/* 08AA0DA4 */
void func_08AA0DA4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0DA4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0DD4; }
    goto L_08AA0DC0;
L_08AA0DC0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0DD4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0DDC;
L_08AA0DDC:;
    ST32(s0, 0);
    goto L_08AA0DC0;
}

/* 08AA0DE4 */
void func_08AA0DE4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0DE4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0E14; }
    goto L_08AA0E00;
L_08AA0E00:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0E14:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0E1C;
L_08AA0E1C:;
    ST32(s0, 0);
    goto L_08AA0E00;
}

/* 08AA0E24 */
void func_08AA0E24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0E24:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA0E54; }
    goto L_08AA0E40;
L_08AA0E40:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0E54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA0E5C;
L_08AA0E5C:;
    ST32(s0, 0);
    goto L_08AA0E40;
}

/* 08AA0E64 */
void func_08AA0E64(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0E64:;
    sp = sp - 16;
    v0 = a1 << 4;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA0E98; }
    goto L_08AA0E80;
L_08AA0E80:;
    ST32(s0, 0);
    goto L_08AA0E84;
L_08AA0E84:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0E98:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA0EA0;
L_08AA0EA0:;
    ST32(s0, v0);
    goto L_08AA0E84;
}

/* 08AA0EA8 */
void func_08AA0EA8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0EA8:;
    sp = sp - 16;
    v0 = a1 << 1;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA0EDC; }
    goto L_08AA0EC4;
L_08AA0EC4:;
    ST32(s0, 0);
    goto L_08AA0EC8;
L_08AA0EC8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0EDC:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA0EE4;
L_08AA0EE4:;
    ST32(s0, v0);
    goto L_08AA0EC8;
}

/* 08AA0EEC */
void func_08AA0EEC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0EEC:;
    sp = sp - 16;
    v0 = a1 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA0F20; }
    goto L_08AA0F08;
L_08AA0F08:;
    ST32(s0, 0);
    goto L_08AA0F0C;
L_08AA0F0C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA0F20:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA0F28;
L_08AA0F28:;
    ST32(s0, v0);
    goto L_08AA0F0C;
}

/* 08AA0F30 */
float func_08AA0F30(u32 a0, u32 a1)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08AA0F30:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+4, FBITS(f1)); goto L_08AA0F48; }
    goto L_08AA0F48;
L_08AA0F48:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+12, FBITS(f1)); goto L_08AA0F60; }
    goto L_08AA0F60;
L_08AA0F60:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+20));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+20, FBITS(f1)); goto L_08AA0F78; }
    goto L_08AA0F78;
L_08AA0F78:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0, FBITS(f1)); goto L_08AA0F90; }
    goto L_08AA0F90;
L_08AA0F90:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+8, FBITS(f1)); goto L_08AA0FA8; }
    goto L_08AA0FA8;
L_08AA0FA8:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+16, FBITS(f1)); goto L_08AA0FC0; }
    goto L_08AA0FC0;
L_08AA0FC0:;
    return f0;
}

/* 08AA0FC8 */
rv_t func_08AA0FC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0FC8:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = D_08B20494 - (1172);
    a2 = a1 + 0;
    a0 = a0 + 1172;
    a1 = v0 + 0;
    { rv_t r_ = func_08804458(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA0FE8;
L_08AA0FE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA0FF4 */
rv_t func_08AA0FF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA0FF4:;
    v0 = a0 & 0xffff;
    a0 = D_08B20494 - (1172);
    sp = sp - 16;
    a2 = a1 + 0;
    a0 = a0 + 1172;
    a1 = v0 + 0;
    { u64 r_ = func_088044B4(a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1014;
L_08AA1014:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1020 */
void func_08AA1020(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1020:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA1084; }
    goto L_08AA103C;
L_08AA103C:;
    v0 = LD32(v1-4);
    v0 = v0 << 4;
    s0 = v1 + v0;
    goto L_08AA1048;
L_08AA1048:;
    cnd_ = v1 == s0;
    a0 = 2;
    if (cnd_) { goto L_08AA1078; }
    goto L_08AA1050;
L_08AA1050:;
    s0 = s0 - 16;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1058;
L_08AA1058:;
    a0 = s0 + 8;
    func_08AA142C(a0, 0, 0, 0);
    goto L_08AA1060;
L_08AA1060:;
    a0 = s0 + 12;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08AA1068;
L_08AA1068:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1070;
L_08AA1070:;
    v1 = LD32(s1);
    goto L_08AA1048;
L_08AA1078:;
    a0 = v1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1080;
L_08AA1080:;
    ST32(s1, 0);
    goto L_08AA1084;
L_08AA1084:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AA109C */
void func_08AA109C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA109C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA10CC; }
    goto L_08AA10B8;
L_08AA10B8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA10CC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA10D4;
L_08AA10D4:;
    ST32(s0, 0);
    goto L_08AA10B8;
}

/* 08AA10DC */
void func_08AA10DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA10DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA110C; }
    goto L_08AA10F8;
L_08AA10F8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA110C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1114;
L_08AA1114:;
    ST32(s0, 0);
    goto L_08AA10F8;
}

/* 08AA111C */
void func_08AA111C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA111C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA114C; }
    goto L_08AA1138;
L_08AA1138:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA114C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1154;
L_08AA1154:;
    ST32(s0, 0);
    goto L_08AA1138;
}

/* 08AA115C */
void func_08AA115C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA115C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA118C; }
    goto L_08AA1178;
L_08AA1178:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA118C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1194;
L_08AA1194:;
    ST32(s0, 0);
    goto L_08AA1178;
}

/* 08AA119C */
void func_08AA119C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA119C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA11CC; }
    goto L_08AA11B8;
L_08AA11B8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA11CC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA11D4;
L_08AA11D4:;
    ST32(s0, 0);
    goto L_08AA11B8;
}

/* 08AA11DC */
void func_08AA11DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA11DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA120C; }
    goto L_08AA11F8;
L_08AA11F8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA120C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1214;
L_08AA1214:;
    ST32(s0, 0);
    goto L_08AA11F8;
}

/* 08AA121C */
void func_08AA121C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA121C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA124C; }
    goto L_08AA1238;
L_08AA1238:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA124C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1254;
L_08AA1254:;
    ST32(s0, 0);
    goto L_08AA1238;
}

/* 08AA125C */
u32 func_08AA125C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA125C:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1298; }
    goto L_08AA1268;
L_08AA1268:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA1274;
L_08AA1274:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA12A0; }
    goto L_08AA1280;
L_08AA1280:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA1274; }
    goto L_08AA1294;
L_08AA1294:;
    v1 = 0 + 0;
    goto L_08AA1298;
L_08AA1298:;
    v0 = v1 + 0;
    return v0;
L_08AA12A0:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1298; }
    goto L_08AA12A8;
L_08AA12A8:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AA1338; }
    goto L_08AA12B4;
L_08AA12B4:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA1330; }
    goto L_08AA12C0;
L_08AA12C0:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA1328; }
    goto L_08AA12CC;
L_08AA12CC:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AA12D4;
L_08AA12D4:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA12DC;
L_08AA12DC:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA1318; }
    goto L_08AA12EC;
L_08AA12EC:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AA1300; }
    goto L_08AA12F8;
L_08AA12F8:;
    v1 = v0 + 0;
    goto L_08AA12DC;
L_08AA1300:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AA1298;
L_08AA1318:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA12DC; }
    goto L_08AA1320;
L_08AA1320:;
    ST32(v1+8, t1);
    goto L_08AA1300;
L_08AA1328:;
    t1 = LD32(t0+8);
    goto L_08AA12D4;
L_08AA1330:;
    ST32(a3, v1);
    goto L_08AA1300;
L_08AA1338:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA1300;
}

/* 08AA1344 */
u32 func_08AA1344(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA1344:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1380; }
    goto L_08AA1350;
L_08AA1350:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA135C;
L_08AA135C:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA1388; }
    goto L_08AA1368;
L_08AA1368:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA135C; }
    goto L_08AA137C;
L_08AA137C:;
    v1 = 0 + 0;
    goto L_08AA1380;
L_08AA1380:;
    v0 = v1 + 0;
    return v0;
L_08AA1388:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1380; }
    goto L_08AA1390;
L_08AA1390:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AA1420; }
    goto L_08AA139C;
L_08AA139C:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA1418; }
    goto L_08AA13A8;
L_08AA13A8:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA1410; }
    goto L_08AA13B4;
L_08AA13B4:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AA13BC;
L_08AA13BC:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA13C4;
L_08AA13C4:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA1400; }
    goto L_08AA13D4;
L_08AA13D4:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AA13E8; }
    goto L_08AA13E0;
L_08AA13E0:;
    v1 = v0 + 0;
    goto L_08AA13C4;
L_08AA13E8:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AA1380;
L_08AA1400:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA13C4; }
    goto L_08AA1408;
L_08AA1408:;
    ST32(v1+8, t1);
    goto L_08AA13E8;
L_08AA1410:;
    t1 = LD32(t0+8);
    goto L_08AA13BC;
L_08AA1418:;
    ST32(a3, v1);
    goto L_08AA13E8;
L_08AA1420:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA13E8;
}

/* 08AA142C */
void func_08AA142C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA142C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA145C; }
    goto L_08AA1448;
L_08AA1448:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA145C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1464;
L_08AA1464:;
    ST32(s0, 0);
    goto L_08AA1448;
}

/* 08AA146C */
rv_t func_08AA146C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA146C:;
    t0 = a1 + 12;
    f3 = BITSF(LD32(a1));
    f1 = BITSF(LD32(t0+4));
    a3 = a1 + 24;
    f4 = BITSF(LD32(a3+8));
    f0 = f3 + f1;
    v0 = D_08AD3780 - (14208);
    v1 = v0 + 14208;
    t1 = a1 + 0;
    f2 = f0 + f4;
    f0 = BITSF(0);
    a1 = LD32(v0+14208);
    a2 = LD32(v1+8);
    fcc = FCMP(f0, f2, 12);
    v0 = LD32(v1+4);
    sp = sp - 32;
    ST32(sp, a1);
    t5 = a0 + 0;
    ST32(sp+4, v0);
    cnd_ = !fcc;
    ST32(sp+8, a2);
    if (cnd_) { goto L_08AA152C; }
    goto L_08AA14C0;
L_08AA14C0:;
    v0 = D_08AEB4B4 - (-19276);
    f1 = BITSF(LD32(v0-19276));
    v1 = D_08AEB4B8 - (-19272);
    f3 = BITSF(LD32(v1-19272));
    f0 = f2 + f1;
    f8 = sqrtf(f0);
    f1 = f1 / f8;
    f2 = f8 * f3;
    f8 = f1 * f3;
    ST32(a0+12, FBITS(f2));
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(a3+4));
    f0 = f0 - f1;
    f0 = f0 * f8;
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(t1+24));
    f1 = BITSF(LD32(t1+8));
    f1 = f1 - f0;
    f1 = f1 * f8;
    ST32(a0+4, FBITS(f1));
    f2 = BITSF(LD32(t1+4));
    f0 = BITSF(LD32(t1+12));
    f0 = f0 - f2;
    f0 = f0 * f8;
    ST32(a0+8, FBITS(f0));
    goto L_08AA1524;
L_08AA1524:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA152C:;
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1540; }
    goto L_08AA153C;
L_08AA153C:;
    v1 = 1;
    goto L_08AA1540;
L_08AA1540:;
    a2 = v1 << 1;
    v0 = a2 + v1;
    v0 = v0 << 2;
    v0 = t1 + v0;
    t4 = v1 << 2;
    v0 = t4 + v0;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    t2 = t4 + sp;
    if (cnd_) { goto L_08AA157C; }
    goto L_08AA156C;
L_08AA156C:;
    v1 = 2;
    a2 = 4;
    t4 = 8;
    t2 = t4 + sp;
    goto L_08AA157C;
L_08AA157C:;
    v0 = LD32(t2);
    a2 = a2 + v1;
    a2 = a2 << 2;
    t0 = v0 << 2;
    t3 = t0 + sp;
    a3 = LD32(t3);
    a0 = v0 << 1;
    a0 = a0 + v0;
    v1 = a3 << 1;
    v1 = v1 + a3;
    a0 = a0 << 2;
    v1 = v1 << 2;
    v1 = t1 + v1;
    a3 = a3 << 2;
    a0 = t1 + a0;
    v0 = t0 + a0;
    a1 = a3 + v1;
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(v0));
    a2 = t1 + a2;
    a1 = t4 + a2;
    f1 = f1 + f2;
    f0 = BITSF(LD32(a1));
    v0 = D_08AEB4B4 - (-19276);
    f5 = BITSF(LD32(v0-19276));
    f0 = f0 - f1;
    v0 = t4 + a0;
    f2 = BITSF(LD32(v0));
    t1 = a3 + a2;
    f0 = f0 + f5;
    a2 = t0 + a2;
    a0 = a3 + a0;
    a1 = t4 + v1;
    f8 = sqrtf(f0);
    t0 = t0 + v1;
    v0 = D_08AEB4B8 - (-19272);
    f0 = BITSF(LD32(a2));
    f3 = BITSF(LD32(t0));
    f7 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a1));
    f6 = BITSF(LD32(t1));
    f4 = BITSF(LD32(v0-19272));
    a3 = a3 + sp;
    f2 = f2 + f0;
    f3 = f3 - f7;
    f5 = f5 / f8;
    f0 = f8 * f4;
    f1 = f1 + f6;
    f8 = f5 * f4;
    ST32(t2+16, FBITS(f0));
    f1 = f1 * f8;
    f3 = f3 * f8;
    f2 = f2 * f8;
    ST32(sp+28, FBITS(f3));
    ST32(t3+16, FBITS(f2));
    ST32(a3+16, FBITS(f1));
    f2 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+16));
    ST32(t5+4, FBITS(f2));
    ST32(t5, FBITS(f0));
    ST32(t5+12, FBITS(f1));
    ST32(t5+8, FBITS(f3));
    goto L_08AA1524;
}

/* 08AA1680 */
float func_08AA1680(u32 a0, u32 a1)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08AA1680:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+4, FBITS(f1)); goto L_08AA1698; }
    goto L_08AA1698;
L_08AA1698:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+12, FBITS(f1)); goto L_08AA16B0; }
    goto L_08AA16B0;
L_08AA16B0:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(a0+20));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+20, FBITS(f1)); goto L_08AA16C8; }
    goto L_08AA16C8;
L_08AA16C8:;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0, FBITS(f1)); goto L_08AA16E0; }
    goto L_08AA16E0;
L_08AA16E0:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+8, FBITS(f1)); goto L_08AA16F8; }
    goto L_08AA16F8;
L_08AA16F8:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+16, FBITS(f1)); goto L_08AA1710; }
    goto L_08AA1710;
L_08AA1710:;
    return f0;
}

/* 08AA1718 */
void func_08AA1718(u32 a0)
{
    u32 v0 = 0;
L_08AA1718:;
    v0 = 1;
    ST32(a0+16, v0);
    ST32(a0+12, 0);
    ST32(a0+20, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+44, 0);
    ST32(a0+48, 0);
    ST32(a0+52, 0);
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    ST8(a0+32, 0);
    ST8(a0+33, 0);
    ST8(a0+34, 0);
    ST32(a0+88, 0);
    ST32(a0+92, 0);
    ST32(a0+76, 0);
    ST32(a0+96, 0);
    ST32(a0+80, 0);
    ST32(a0+84, 0);
    ST32(a0+100, 0);
    ST32(a0+104, 0);
    ST32(a0+108, 0);
    ST32(a0+56, 0);
    ST32(a0+60, 0);
    ST32(a0+64, 0);
    ST32(a0+68, 0);
    ST8(a0+72, 0);
    return;
}

/* 08AA178C */
u64 func_08AA178C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA178C:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA17D0; }
    goto L_08AA17A4;
L_08AA17A4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA17AC;
L_08AA17AC:;
    a0 = v0 + 120;
    a3 = v0 + 116;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA17E4; }
    goto L_08AA17C4;
L_08AA17C4:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA17AC; }
    goto L_08AA17D0;
L_08AA17D0:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA17E4; }
    goto L_08AA17DC;
L_08AA17DC:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA17F4; }
    goto L_08AA17E4;
L_08AA17E4:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA17F4:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA17FC;
L_08AA17FC:;
    t0 = v0 + 0;
    goto L_08AA17E4;
}

/* 08AA1804 */
u64 func_08AA1804(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1804:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA1848; }
    goto L_08AA181C;
L_08AA181C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA1824;
L_08AA1824:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA185C; }
    goto L_08AA183C;
L_08AA183C:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA1824; }
    goto L_08AA1848;
L_08AA1848:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA185C; }
    goto L_08AA1854;
L_08AA1854:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA186C; }
    goto L_08AA185C;
L_08AA185C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA186C:;
    a2 = 1;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1874;
L_08AA1874:;
    t0 = v0 + 0;
    goto L_08AA185C;
}

/* 08AA187C */
u64 func_08AA187C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA187C:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA18C0; }
    goto L_08AA1894;
L_08AA1894:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA189C;
L_08AA189C:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA18D4; }
    goto L_08AA18B4;
L_08AA18B4:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA189C; }
    goto L_08AA18C0;
L_08AA18C0:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA18D4; }
    goto L_08AA18CC;
L_08AA18CC:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA18E4; }
    goto L_08AA18D4;
L_08AA18D4:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA18E4:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA18EC;
L_08AA18EC:;
    t0 = v0 + 0;
    goto L_08AA18D4;
}

/* 08AA18F4 */
void func_08AA18F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA18F4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = LD32(a1+116);
    cnd_ = a1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA19F0; }
    goto L_08AA1914;
L_08AA1914:;
    a1 = LD32(s0+120);
    goto L_08AA1918;
L_08AA1918:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA19E0; }
    goto L_08AA1920;
L_08AA1920:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA19B0; }
    goto L_08AA1928;
L_08AA1928:;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1930;
L_08AA1930:;
    a0 = s0 + 40;
    func_08AA1020(a0, 0, 0, 0);
    goto L_08AA1938;
L_08AA1938:;
    a0 = s0 + 44;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08AA1940;
L_08AA1940:;
    a0 = s0 + 56;
    func_08AA10DC(a0, 0, 0, 0);
    goto L_08AA1948;
L_08AA1948:;
    a0 = s0 + 92;
    func_08AA111C(a0, 0, 0, 0);
    goto L_08AA1950;
L_08AA1950:;
    a0 = s0 + 96;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08AA1958;
L_08AA1958:;
    a0 = s0 + 80;
    func_08AA115C(a0, 0, 0, 0);
    goto L_08AA1960;
L_08AA1960:;
    s1 = s0 + 4;
    a0 = s0 + 100;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08AA196C;
L_08AA196C:;
    a0 = LD32(s1+100);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA19D0; }
    goto L_08AA1978;
L_08AA1978:;
    a0 = s0 + 64;
    func_08AA11DC(a0, 0, 0, 0);
    goto L_08AA1980;
L_08AA1980:;
    a0 = s0 + 72;
    func_08AA121C(a0, 0, 0, 0);
    goto L_08AA1988;
L_08AA1988:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1990;
L_08AA1990:;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA19C0; }
    goto L_08AA199C;
L_08AA199C:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA19AC;
L_08AA19AC:;
    goto L_08AA19B0;
L_08AA19B0:;
    sp = sp + 16;
    return;
L_08AA19C0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA19C8;
L_08AA19C8:;
    ST32(s0+4, 0);
    goto L_08AA199C;
L_08AA19D0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA19D8;
L_08AA19D8:;
    goto L_08AA1978;
L_08AA19E0:;
    a0 = s1 + 0;
    func_08AA18F4(a0, a1);
    goto L_08AA19E8;
L_08AA19E8:;
    goto L_08AA1920;
L_08AA19F0:;
    func_08AA18F4(a0, a1);
    goto L_08AA19F8;
L_08AA19F8:;
    a1 = LD32(s0+120);
    goto L_08AA1918;
}

/* 08AA1A00 */
void func_08AA1A00(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1A00:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1A60; }
    goto L_08AA1A24;
L_08AA1A24:;
    v0 = LD32(s0+12);
    goto L_08AA1A28;
L_08AA1A28:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1A50; }
    goto L_08AA1A34;
L_08AA1A34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1A3C;
L_08AA1A3C:;
    sp = sp + 16;
    return;
L_08AA1A50:;
    func_08AA1A00(a0, a1, t1, t2, t3);
    goto L_08AA1A58;
L_08AA1A58:;
    goto L_08AA1A34;
L_08AA1A60:;
    func_08AA1A00(a0, a1, t1, t2, t3);
    goto L_08AA1A68;
L_08AA1A68:;
    v0 = LD32(s0+12);
    goto L_08AA1A28;
}

/* 08AA1A70 */
void func_08AA1A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1A70:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1AE4; }
    goto L_08AA1A9C;
L_08AA1A9C:;
    v0 = LD32(s0+12);
    goto L_08AA1AA0;
L_08AA1AA0:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1AD4; }
    goto L_08AA1AB0;
L_08AA1AB0:;
    a0 = LD32(s0);
    goto L_08AA1AB4;
L_08AA1AB4:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1ABC;
L_08AA1ABC:;
    sp = sp + 16;
    return;
L_08AA1AD4:;
    func_08AA1A70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA1ADC;
L_08AA1ADC:;
    a0 = LD32(s0);
    goto L_08AA1AB4;
L_08AA1AE4:;
    func_08AA1A70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA1AEC;
L_08AA1AEC:;
    v0 = LD32(s0+12);
    goto L_08AA1AA0;
}

/* 08AA1AF4 */
u64 func_08AA1AF4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1AF4:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA1B38; }
    goto L_08AA1B0C;
L_08AA1B0C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA1B14;
L_08AA1B14:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA1B4C; }
    goto L_08AA1B2C;
L_08AA1B2C:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA1B14; }
    goto L_08AA1B38;
L_08AA1B38:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA1B4C; }
    goto L_08AA1B44;
L_08AA1B44:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA1B5C; }
    goto L_08AA1B4C;
L_08AA1B4C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA1B5C:;
    a2 = 1;
    { u64 r_ = func_08AA1AF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1B64;
L_08AA1B64:;
    t0 = v0 + 0;
    goto L_08AA1B4C;
}

/* 08AA1B6C */
void func_08AA1B6C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1B6C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1BCC; }
    goto L_08AA1B90;
L_08AA1B90:;
    v0 = LD32(s0+12);
    goto L_08AA1B94;
L_08AA1B94:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1BBC; }
    goto L_08AA1BA0;
L_08AA1BA0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1BA8;
L_08AA1BA8:;
    sp = sp + 16;
    return;
L_08AA1BBC:;
    func_08AA1B6C(a0, a1, t1, t2, t3);
    goto L_08AA1BC4;
L_08AA1BC4:;
    goto L_08AA1BA0;
L_08AA1BCC:;
    func_08AA1B6C(a0, a1, t1, t2, t3);
    goto L_08AA1BD4;
L_08AA1BD4:;
    v0 = LD32(s0+12);
    goto L_08AA1B94;
}

/* 08AA1BDC */
void func_08AA1BDC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1BDC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1C3C; }
    goto L_08AA1C00;
L_08AA1C00:;
    v0 = LD32(s0+12);
    goto L_08AA1C04;
L_08AA1C04:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1C2C; }
    goto L_08AA1C10;
L_08AA1C10:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1C18;
L_08AA1C18:;
    sp = sp + 16;
    return;
L_08AA1C2C:;
    func_08AA1BDC(a0, a1, t1, t2, t3);
    goto L_08AA1C34;
L_08AA1C34:;
    goto L_08AA1C10;
L_08AA1C3C:;
    func_08AA1BDC(a0, a1, t1, t2, t3);
    goto L_08AA1C44;
L_08AA1C44:;
    v0 = LD32(s0+12);
    goto L_08AA1C04;
}

/* 08AA1C4C */
rv_t func_08AA1C4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA1C4C:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1CDC; }
    goto L_08AA1C80;
L_08AA1C80:;
    v0 = LD32(s0+12);
    goto L_08AA1C84;
L_08AA1C84:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s2 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1CA8; }
    goto L_08AA1C98;
L_08AA1C98:;
    { rv_t r_ = func_08AA1C4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1CA0;
L_08AA1CA0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1CBC; }
    goto L_08AA1CA8;
L_08AA1CA8:;
    a0 = LD32(s0);
    a1 = s0 + 4;
    t_ = s3;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1CB8;
L_08AA1CB8:;
    v1 = v0 + 0;
    goto L_08AA1CBC;
L_08AA1CBC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA1CDC:;
    { rv_t r_ = func_08AA1C4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1CE4;
L_08AA1CE4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA1CBC; }
    goto L_08AA1CEC;
L_08AA1CEC:;
    v0 = LD32(s0+12);
    goto L_08AA1C84;
}

/* 08AA1CF4 */
void func_08AA1CF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1CF4:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1D68; }
    goto L_08AA1D20;
L_08AA1D20:;
    v0 = LD32(s0+12);
    goto L_08AA1D24;
L_08AA1D24:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA1D58; }
    goto L_08AA1D34;
L_08AA1D34:;
    a0 = LD32(s0);
    goto L_08AA1D38;
L_08AA1D38:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1D40;
L_08AA1D40:;
    sp = sp + 16;
    return;
L_08AA1D58:;
    func_08AA1CF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA1D60;
L_08AA1D60:;
    a0 = LD32(s0);
    goto L_08AA1D38;
L_08AA1D68:;
    func_08AA1CF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA1D70;
L_08AA1D70:;
    v0 = LD32(s0+12);
    goto L_08AA1D24;
}

/* 08AA1D78 */
rv_t func_08AA1D78(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1D78:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA1E00; }
    goto L_08AA1DA0;
L_08AA1DA0:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AA1DD8; }
    goto L_08AA1DAC;
L_08AA1DAC:;
    v1 = v0 + 0;
    goto L_08AA1DB0;
L_08AA1DB0:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AA1E00; }
    goto L_08AA1DCC;
L_08AA1DCC:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AA1DB0; }
    goto L_08AA1DD8;
L_08AA1DD8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1DE0;
L_08AA1DE0:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    goto L_08AA1E00;
L_08AA1E00:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1E1C */
rv_t func_08AA1E1C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1E1C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA1EA4; }
    goto L_08AA1E44;
L_08AA1E44:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AA1E7C; }
    goto L_08AA1E50;
L_08AA1E50:;
    v1 = v0 + 0;
    goto L_08AA1E54;
L_08AA1E54:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AA1EA4; }
    goto L_08AA1E70;
L_08AA1E70:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AA1E54; }
    goto L_08AA1E7C;
L_08AA1E7C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1E84;
L_08AA1E84:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    goto L_08AA1EA4;
L_08AA1EA4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1EC0 */
rv_t func_08AA1EC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1EC0:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1ED0 */
rv_t func_08AA1ED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1ED0:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1EEC;
L_08AA1EEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1EF8 */
rv_t func_08AA1EF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1EF8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F00 */
rv_t func_08AA1F00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F00:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F08 */
rv_t func_08AA1F08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F08:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F10 */
rv_t func_08AA1F10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F10:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F18 */
rv_t func_08AA1F18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F18:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F20 */
rv_t func_08AA1F20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F20:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F28 */
rv_t func_08AA1F28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F28:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F30 */
rv_t func_08AA1F30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F30:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F38 */
rv_t func_08AA1F38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F38:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F40 */
rv_t func_08AA1F40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F40:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F48 */
rv_t func_08AA1F48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F48:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F50 */
rv_t func_08AA1F50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F50:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F58 */
rv_t func_08AA1F58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F58:;
    v0 = LD32(a0+64);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F60 */
rv_t func_08AA1F60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1F60:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F70 */
rv_t func_08AA1F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1F70:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1F8C;
L_08AA1F8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1F98 */
rv_t func_08AA1F98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1F98:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    { rv_t r_ = func_0880D694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA1FA8;
L_08AA1FA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1FB4 */
rv_t func_08AA1FB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA1FB4:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA1FD0;
L_08AA1FD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1FDC */
rv_t func_08AA1FDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1FDC:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1FEC */
rv_t func_08AA1FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1FEC:;
    v0 = a0 + 68;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1FF4 */
rv_t func_08AA1FF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1FF4:;
    v0 = a0 + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA1FFC */
rv_t func_08AA1FFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA1FFC:;
    v0 = LD32(a0+64);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA2004 */
rv_t func_08AA2004(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA2004:;
    v0 = LD32(a0+96);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA200C */
rv_t func_08AA200C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA200C:;
    v0 = D_08AF09E8 - (2536);
    v0 = v0 + 2536;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0880E8AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2028;
L_08AA2028:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA2034 */
rv_t func_08AA2034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2034:;
    v0 = D_08AF09E8 - (2536);
    v0 = v0 + 2536;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0880E8AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2054;
L_08AA2054:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA205C;
L_08AA205C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA206C */
u64 func_08AA206C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08AA206C:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA211C; }
    goto L_08AA2078;
L_08AA2078:;
    v0 = LD32(a0+12);
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08AA211C; }
    goto L_08AA2084;
L_08AA2084:;
    a2 = LD32(a0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AA20C4; }
    goto L_08AA2090;
L_08AA2090:;
    a3 = LD32(a2+8);
    goto L_08AA2094;
L_08AA2094:;
    v0 = (s32)a1 < (s32)a3;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08AA20B4; }
    goto L_08AA20A0;
L_08AA20A0:;
    v0 = LD32(a0+4);
    v0 = a3 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AA20C4; }
    goto L_08AA20B4;
L_08AA20B4:;
    a2 = LD32(a2+12);
    cnd_ = a2 != 0;
    if (cnd_) { a3 = LD32(a2+8); goto L_08AA2094; }
    goto L_08AA20C0;
L_08AA20C0:;
    v1 = 0 + 0;
    goto L_08AA20C4;
L_08AA20C4:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AA211C; }
    goto L_08AA20CC;
L_08AA20CC:;
    a2 = LD32(v1+4);
    v0 = LD32(v1+8);
    t0 = 0 + 0;
    t2 = LD32(a2+12);
    cnd_ = (s32)t2 <= 0;
    t1 = a1 - v0;
    if (cnd_) { goto L_08AA2104; }
    goto L_08AA20E4;
L_08AA20E4:;
    a2 = LD32(a2+4);
    v0 = LD32(a2);
    goto L_08AA20EC;
L_08AA20EC:;
    t0 = t0 + 1;
    a3 = (s32)t0 < (s32)t2;
    cnd_ = v0 == t1;
    a2 = a2 + 4;
    if (cnd_) { goto L_08AA2124; }
    goto L_08AA20FC;
L_08AA20FC:;
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08AA20EC; }
    goto L_08AA2104;
L_08AA2104:;
    v0 = 0 + 0;
    goto L_08AA2108;
L_08AA2108:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AA211C; }
    goto L_08AA2110;
L_08AA2110:;
    v1 = v0 + 0;
    ST32(a0+12, a1);
    ST32(a0+8, v0);
    goto L_08AA211C;
L_08AA211C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA2124:;
    v1 = LD32(v1);
    v0 = t1 << 4;
    v0 = v0 - t1;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_08AA2108;
}

/* 08AA213C */
rv_t func_08AA213C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA213C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA2144 */
rv_t func_08AA2144(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2144:;
    v0 = D_08AF0D10 - (3344);
    v0 = v0 + 3344;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08810A18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2164;
L_08AA2164:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA216C;
L_08AA216C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA217C */
rv_t func_08AA217C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA217C:;
    v0 = D_08AF0D10 - (3344);
    v0 = v0 + 3344;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08810A18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2198;
L_08AA2198:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA21A4 */
rv_t func_08AA21A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA21A4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA21AC */
rv_t func_08AA21AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA21AC:;
    v0 = D_08AF0D10 - (3344);
    v0 = v0 + 3344;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08810A18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA21C8;
L_08AA21C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA21D4 */
rv_t func_08AA21D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA21D4:;
    v0 = D_08AF0D10 - (3344);
    v0 = v0 + 3344;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08810A18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA21F4;
L_08AA21F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA21FC;
L_08AA21FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA220C */
rv_t func_08AA220C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA220C:;
    v0 = D_08AF0CC8 - (3272);
    v0 = v0 + 3272;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08810A18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2228;
L_08AA2228:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA2234 */
rv_t func_08AA2234(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2234:;
    v0 = D_08AF0CC8 - (3272);
    v0 = v0 + 3272;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08810A18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2254;
L_08AA2254:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA225C;
L_08AA225C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA226C */
rv_t func_08AA226C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA226C:;
    v0 = LD32(a0+16);
    v0 = v0 | 0x1;
    ST32(a0+16, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA227C */
rv_t func_08AA227C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA227C:;
    v0 = LD32(a0+16);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+16, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA228C */
rv_t func_08AA228C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AA228C:;
    v1 = LD32(a0+36);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AA22A0; }
    goto L_08AA2298;
L_08AA2298:;
    v0 = LD_U8(v1+32);
    v0 = 0 < v0;
    goto L_08AA22A0;
L_08AA22A0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA22A8 */
rv_t func_08AA22A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA22A8:;
    v0 = LD32(a0+40);
    v0 = v0 ^ 0x2;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA22B8 */
rv_t func_08AA22B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA22B8:;
    f0 = BITSF(LD32(a0+80));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA22C0 */
rv_t func_08AA22C0(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08AA22C0:;
    v0 = D_08AEB554 - (-19116);
    f0 = BITSF(LD32(v0-19116));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AA2308; }
    goto L_08AA22D8;
L_08AA22D8:;
    v0 = a2 << 2;
    v1 = v0 + a1;
    v0 = v0 + a0;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v0+12));
    a2 = a2 + 1;
    v1 = a2 < 0x6u;
    f0 = f0 + f1;
    cnd_ = v1 != 0;
    ST32(v0+12, FBITS(f0));
    if (cnd_) { goto L_08AA22D8; }
    goto L_08AA2300;
L_08AA2300:;
    return (rv_t){ v0, v1, f0 };
L_08AA2308:;
    v1 = a2 << 2;
    v0 = v1 + a1;
    f1 = BITSF(LD32(v0));
    v1 = v1 + a0;
    f0 = BITSF(LD32(v1+12));
    f1 = f1 * f12;
    a2 = a2 + 1;
    v0 = a2 < 0x6u;
    f0 = f0 + f1;
    cnd_ = v0 != 0;
    ST32(v1+12, FBITS(f0));
    if (cnd_) { goto L_08AA2308; }
    goto L_08AA2334;
L_08AA2334:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA233C */
void func_08AA233C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA233C:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AA23B0; }
    goto L_08AA235C;
L_08AA235C:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AA239C; }
    goto L_08AA2368;
L_08AA2368:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AA2384;
L_08AA2384:;
    v0 = a1 + 0;
    sp = sp + 16;
    return;
L_08AA239C:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA23A4;
L_08AA23A4:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AA2368;
L_08AA23B0:;
    v0 = func_08AA1344(a0, a1);
    goto L_08AA23B8;
L_08AA23B8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA2384; }
    goto L_08AA23C4;
L_08AA23C4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA23CC;
L_08AA23CC:;
    a1 = 1;
    goto L_08AA2384;
}

/* 08AA23D4 */
u32 func_08AA23D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA23D4:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA2410; }
    goto L_08AA23E0;
L_08AA23E0:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA23EC;
L_08AA23EC:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA2418; }
    goto L_08AA23F8;
L_08AA23F8:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA23EC; }
    goto L_08AA240C;
L_08AA240C:;
    v1 = 0 + 0;
    goto L_08AA2410;
L_08AA2410:;
    v0 = v1 + 0;
    return v0;
L_08AA2418:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA2410; }
    goto L_08AA2420;
L_08AA2420:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AA24B0; }
    goto L_08AA242C;
L_08AA242C:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA24A8; }
    goto L_08AA2438;
L_08AA2438:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA24A0; }
    goto L_08AA2444;
L_08AA2444:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AA244C;
L_08AA244C:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA2454;
L_08AA2454:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA2490; }
    goto L_08AA2464;
L_08AA2464:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AA2478; }
    goto L_08AA2470;
L_08AA2470:;
    v1 = v0 + 0;
    goto L_08AA2454;
L_08AA2478:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AA2410;
L_08AA2490:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA2454; }
    goto L_08AA2498;
L_08AA2498:;
    ST32(v1+8, t1);
    goto L_08AA2478;
L_08AA24A0:;
    t1 = LD32(t0+8);
    goto L_08AA244C;
L_08AA24A8:;
    ST32(a3, v1);
    goto L_08AA2478;
L_08AA24B0:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA2478;
}

/* 08AA24BC */
void func_08AA24BC(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08AA24BC:;
    v1 = LD32(a0);
    v0 = 0x100000u;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AA2504; }
    goto L_08AA24D0;
L_08AA24D0:;
    v0 = D_08AEB570 - (-19088);
    f0 = BITSF(LD32(v0-19088));
    v0 = 1;
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    f1 = f0 - f12;
    if (cnd_) { goto L_08AA24F4; }
    goto L_08AA24EC;
L_08AA24EC:;
    ST32(a0+60, 0);
    return;
L_08AA24F4:;
    f0 = BITSF(LD32(a0+60));
    v0 = 1;
    f0 = f0 * f1;
    ST32(a0+60, FBITS(f0));
    goto L_08AA2504;
L_08AA2504:;
    return;
}

/* 08AA250C */
rv_t func_08AA250C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA250C:;
    v1 = LD32(a0);
    v0 = 0x200000u;
    sp = sp - 16;
    v1 = v1 & v0;
    a2 = a0 + 0;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA2590; }
    goto L_08AA2528;
L_08AA2528:;
    v0 = D_08AEB574 - (-19084);
    f0 = BITSF(LD32(v0-19084));
    t2 = D_08B45A9C - (23196);
    t4 = D_08B45ACC - (23244);
    fcc = FCMP(f0, f12, 14);
    t0 = a0 + 64;
    t5 = t2 + 23196;
    a1 = t4 + 23244;
    a0 = a0 + 76;
    a3 = 1;
    cnd_ = !fcc;
    f7 = f0 - f12;
    if (cnd_) { goto L_08AA259C; }
    goto L_08AA2558;
L_08AA2558:;
    f2 = BITSF(LD32(t2+23196));
    f0 = BITSF(LD32(t5+8));
    f1 = BITSF(LD32(t5+4));
    ST32(a2+64, FBITS(f2));
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    v0 = LD32(t4+23244);
    ST32(a2+76, v0);
    v1 = LD32(a1+4);
    ST32(a2+80, v1);
    v0 = LD32(a1+8);
    ST32(a2+84, v0);
    v1 = LD32(a1+12);
    ST32(a2+88, v1);
    goto L_08AA2590;
L_08AA2590:;
    v0 = a3 + 0;
    goto L_08AA2594;
L_08AA2594:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA259C:;
    f1 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(t0+8));
    f4 = BITSF(LD32(t5+8));
    f3 = BITSF(LD32(t5+4));
    f2 = BITSF(LD32(a2+64));
    f5 = BITSF(LD32(t2+23196));
    f3 = f3 * f12;
    f4 = f4 * f12;
    f0 = f0 * f7;
    f1 = f1 * f7;
    f5 = f5 * f12;
    f2 = f2 * f7;
    f0 = f0 + f4;
    f1 = f1 + f3;
    v0 = D_08AEB578 - (-19080);
    f2 = f2 + f5;
    ST32(t0+8, FBITS(f0));
    a3 = 1;
    ST32(t0+4, FBITS(f1));
    ST32(a2+64, FBITS(f2));
    f6 = BITSF(LD32(v0-19080));
    v0 = LD32(a2+76);
    v1 = LD32(a0+4);
    a1 = LD32(a0+12);
    a0 = LD32(a0+8);
    ST32(sp, v0);
    v0 = D_08B45ACC - (23244);
    v0 = v0 + 23244;
    ST32(sp+4, v1);
    v1 = FBITS(f12);
    ST32(sp+8, a0);
    a0 = FBITS(f6);
    ST32(sp+12, a1);
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
    {v[116]=BITSF(LD32(v0+(0)));}
    {v[117]=BITSF(LD32(v0+(4)));}
    {v[118]=BITSF(LD32(v0+(8)));}
    {v[119]=BITSF(LD32(v0+(12)));}
    {v[124]=BITSF(v1);}
    {v[127]=BITSF(a0);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08AA268C; }
    goto L_08AA266C;
L_08AA266C:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_08AA268C;
L_08AA268C:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08AA26A0; }
    goto L_08AA2698;
L_08AA2698:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_08AA26A0;
L_08AA26A0:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08AA26C8; }
    goto L_08AA26BC;
L_08AA26BC:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_08AA26C8;
L_08AA26C8:;
    {ST32(a2+(76),FBITS(v[120]));}
    {ST32(a2+(80),FBITS(v[121]));}
    {ST32(a2+(84),FBITS(v[122]));}
    {ST32(a2+(88),FBITS(v[123]));}
    v0 = a3 + 0;
    goto L_08AA2594;
}

/* 08AA26E0 */
rv_t func_08AA26E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA26E0:;
    v0 = LD32(a0+36);
    v0 = (v0 >> 22) & 0x1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA26EC */
rv_t func_08AA26EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA26EC:;
    v0 = LD32(a0+132);
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA26F8 */
rv_t func_08AA26F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA26F8:;
    v0 = D_08AEB57C - (-19076);
    f0 = BITSF(LD32(v0-19076));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA2704 */
void func_08AA2704(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2704:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AA2778; }
    goto L_08AA2724;
L_08AA2724:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AA2764; }
    goto L_08AA2730;
L_08AA2730:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AA274C;
L_08AA274C:;
    v0 = a1 + 0;
    sp = sp + 16;
    return;
L_08AA2764:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA276C;
L_08AA276C:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AA2730;
L_08AA2778:;
    v0 = func_08AA23D4(a0, a1);
    goto L_08AA2780;
L_08AA2780:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA274C; }
    goto L_08AA278C;
L_08AA278C:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2794;
L_08AA2794:;
    a1 = 1;
    goto L_08AA274C;
}

/* 08AA279C */
void func_08AA279C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA279C:;
    sp = sp - 32;
    v0 = LD32(a0+56);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA27EC; }
    goto L_08AA27C8;
L_08AA27C8:;
    goto L_08AA27CC;
L_08AA27CC:;
    sp = sp + 32;
    return;
L_08AA27EC:;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA27F4;
L_08AA27F4:;
    v0 = LD32(s1+56);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08AA2874; }
    goto L_08AA2800;
L_08AA2800:;
    s3 = s1 + 4;
    goto L_08AA2804;
L_08AA2804:;
    s5 = s4 << 2;
    v1 = s5 + s1;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+52); goto L_08AA2858; }
    goto L_08AA2818;
L_08AA2818:;
    v0 = LD32(s1+60);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08AA284C; }
    goto L_08AA2824;
L_08AA2824:;
    s2 = v1 + 0;
    a0 = LD32(s2+4);
    goto L_08AA282C;
L_08AA282C:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    a0 = a0 + v0;
    func_08AA2994(a0, 0, 0, 0);
    goto L_08AA283C;
L_08AA283C:;
    v1 = LD32(s1+60);
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08AA282C; }
    goto L_08AA284C;
L_08AA284C:;
    a0 = s3 + 0;
    func_08AA29D4(a0, 0, 0, 0);
    goto L_08AA2854;
L_08AA2854:;
    a0 = LD32(s1+52);
    goto L_08AA2858;
L_08AA2858:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA288C; }
    goto L_08AA2860;
L_08AA2860:;
    v0 = LD32(s1+56);
    goto L_08AA2864;
L_08AA2864:;
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s3 = s3 + 4;
    if (cnd_) { goto L_08AA2804; }
    goto L_08AA2874;
L_08AA2874:;
    a0 = s1 + 52;
    func_08AA2A54(a0, 0, 0, 0);
    goto L_08AA287C;
L_08AA287C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2884;
L_08AA2884:;
    goto L_08AA27CC;
L_08AA288C:;
    a0 = a0 + s5;
    func_08AA2A14(a0, 0, 0, 0);
    goto L_08AA2894;
L_08AA2894:;
    v0 = LD32(s1+56);
    goto L_08AA2864;
}

/* 08AA289C */
u64 func_08AA289C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA289C:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA28E0; }
    goto L_08AA28B4;
L_08AA28B4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA28BC;
L_08AA28BC:;
    a0 = v0 + 76;
    a3 = v0 + 72;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA28F4; }
    goto L_08AA28D4;
L_08AA28D4:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA28BC; }
    goto L_08AA28E0;
L_08AA28E0:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA28F4; }
    goto L_08AA28EC;
L_08AA28EC:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA2904; }
    goto L_08AA28F4;
L_08AA28F4:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA2904:;
    a2 = 1;
    { u64 r_ = func_08AA289C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA290C;
L_08AA290C:;
    t0 = v0 + 0;
    goto L_08AA28F4;
}

/* 08AA2914 */
void func_08AA2914(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2914:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+72);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA2984; }
    goto L_08AA2938;
L_08AA2938:;
    v0 = LD32(s0+76);
    goto L_08AA293C;
L_08AA293C:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA2974; }
    goto L_08AA2948;
L_08AA2948:;
    cnd_ = s0 == 0;
    a0 = s0 + 4;
    if (cnd_) { goto L_08AA2960; }
    goto L_08AA2950;
L_08AA2950:;
    func_08AA279C(a0);
    goto L_08AA2958;
L_08AA2958:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2960;
L_08AA2960:;
    sp = sp + 16;
    return;
L_08AA2974:;
    func_08AA2914(a0, a1);
    goto L_08AA297C;
L_08AA297C:;
    goto L_08AA2948;
L_08AA2984:;
    func_08AA2914(a0, a1);
    goto L_08AA298C;
L_08AA298C:;
    v0 = LD32(s0+76);
    goto L_08AA293C;
}

/* 08AA2994 */
void func_08AA2994(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2994:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA29C4; }
    goto L_08AA29B0;
L_08AA29B0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA29C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA29CC;
L_08AA29CC:;
    ST32(s0, 0);
    goto L_08AA29B0;
}

/* 08AA29D4 */
void func_08AA29D4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA29D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2A04; }
    goto L_08AA29F0;
L_08AA29F0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2A04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2A0C;
L_08AA2A0C:;
    ST32(s0, 0);
    goto L_08AA29F0;
}

/* 08AA2A14 */
void func_08AA2A14(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2A14:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2A44; }
    goto L_08AA2A30;
L_08AA2A30:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2A44:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2A4C;
L_08AA2A4C:;
    ST32(s0, 0);
    goto L_08AA2A30;
}

/* 08AA2A54 */
void func_08AA2A54(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2A54:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2A84; }
    goto L_08AA2A70;
L_08AA2A70:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2A84:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2A8C;
L_08AA2A8C:;
    ST32(s0, 0);
    goto L_08AA2A70;
}

/* 08AA2A94 */
void func_08AA2A94(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2A94:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2AC4; }
    goto L_08AA2AB0;
L_08AA2AB0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2AC4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2ACC;
L_08AA2ACC:;
    ST32(s0, 0);
    goto L_08AA2AB0;
}

/* 08AA2AD4 */
u64 func_08AA2AD4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2AD4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2B04; }
    goto L_08AA2AF0;
L_08AA2AF0:;
    v0 = 1;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA2B04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2B0C;
L_08AA2B0C:;
    ST32(s0, 0);
    goto L_08AA2AF0;
}

/* 08AA2B14 */
void func_08AA2B14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2B14:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA2B68; }
    goto L_08AA2B34;
L_08AA2B34:;
    v0 = LD32(a0-4);
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_08AA2B40;
L_08AA2B40:;
    cnd_ = a0 == s0;
    s0 = s0 - 4;
    if (cnd_) { goto L_08AA2B58; }
    goto L_08AA2B48;
L_08AA2B48:;
    a0 = s0 + 0;
    func_08817118(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA2B50;
L_08AA2B50:;
    a0 = LD32(s1);
    goto L_08AA2B40;
L_08AA2B58:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2B60;
L_08AA2B60:;
    ST32(s1, 0);
    goto L_08AA2B68;
L_08AA2B68:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AA2B7C */
void func_08AA2B7C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2B7C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2BAC; }
    goto L_08AA2B98;
L_08AA2B98:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2BAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2BB4;
L_08AA2BB4:;
    ST32(s0, 0);
    goto L_08AA2B98;
}

/* 08AA2BBC */
void func_08AA2BBC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2BBC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2BEC; }
    goto L_08AA2BD8;
L_08AA2BD8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2BEC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2BF4;
L_08AA2BF4:;
    ST32(s0, 0);
    goto L_08AA2BD8;
}

/* 08AA2BFC */
void func_08AA2BFC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2BFC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2C2C; }
    goto L_08AA2C18;
L_08AA2C18:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2C2C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2C34;
L_08AA2C34:;
    ST32(s0, 0);
    goto L_08AA2C18;
}

/* 08AA2C3C */
void func_08AA2C3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2C3C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2C6C; }
    goto L_08AA2C58;
L_08AA2C58:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2C6C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2C74;
L_08AA2C74:;
    ST32(s0, 0);
    goto L_08AA2C58;
}

/* 08AA2C7C */
void func_08AA2C7C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2C7C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2CAC; }
    goto L_08AA2C98;
L_08AA2C98:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2CAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2CB4;
L_08AA2CB4:;
    ST32(s0, 0);
    goto L_08AA2C98;
}

/* 08AA2CBC */
void func_08AA2CBC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2CBC:;
    sp = sp - 16;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08AA2D34; }
    goto L_08AA2CDC;
L_08AA2CDC:;
    v1 = LD32(a1-4);
    v0 = v1 << 4;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a1 + v0;
    goto L_08AA2CF0;
L_08AA2CF0:;
    cnd_ = a1 == s0;
    s0 = s0 - 68;
    if (cnd_) { goto L_08AA2D28; }
    goto L_08AA2CF8;
L_08AA2CF8:;
    v0 = LD32(s0+56);
    s1 = s0 + 56;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA2D14; }
    goto L_08AA2D08;
L_08AA2D08:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_08AA2CF0;
L_08AA2D14:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2D1C;
L_08AA2D1C:;
    ST32(s0+56, 0);
    a1 = LD32(s2);
    goto L_08AA2D08;
L_08AA2D28:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA2D30;
L_08AA2D30:;
    ST32(s2, 0);
    goto L_08AA2D34;
L_08AA2D34:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AA2D50 */
void func_08AA2D50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2D50:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA2D88; }
    goto L_08AA2D6C;
L_08AA2D6C:;
    ST32(a0, 0);
    goto L_08AA2D70;
L_08AA2D70:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2D88:;
    a0 = a1 << 1;
    a0 = a0 + a1;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2D98;
L_08AA2D98:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA2DB0; }
    goto L_08AA2DA0;
L_08AA2DA0:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA2DA8;
L_08AA2DA8:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA2DA8; }
    goto L_08AA2DB0;
L_08AA2DB0:;
    ST32(s1, v0);
    goto L_08AA2D70;
}

/* 08AA2DB8 */
void func_08AA2DB8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2DB8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA2DF0; }
    goto L_08AA2DD4;
L_08AA2DD4:;
    ST32(a0, 0);
    goto L_08AA2DD8;
L_08AA2DD8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2DF0:;
    a0 = a1 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2DF8;
L_08AA2DF8:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA2E10; }
    goto L_08AA2E00;
L_08AA2E00:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA2E08;
L_08AA2E08:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA2E08; }
    goto L_08AA2E10;
L_08AA2E10:;
    ST32(s1, v0);
    goto L_08AA2DD8;
}

/* 08AA2E18 */
void func_08AA2E18(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2E18:;
    sp = sp - 16;
    v0 = a1 << 1;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA2E4C; }
    goto L_08AA2E34;
L_08AA2E34:;
    ST32(s0, 0);
    goto L_08AA2E38;
L_08AA2E38:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2E4C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2E54;
L_08AA2E54:;
    ST32(s0, v0);
    goto L_08AA2E38;
}

/* 08AA2E5C */
void func_08AA2E5C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2E5C:;
    sp = sp - 16;
    v0 = a1 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA2E90; }
    goto L_08AA2E78;
L_08AA2E78:;
    ST32(s0, 0);
    goto L_08AA2E7C;
L_08AA2E7C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA2E90:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA2E98;
L_08AA2E98:;
    ST32(s0, v0);
    goto L_08AA2E7C;
}

/* 08AA2EA0 */
void func_08AA2EA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA2EA0:;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    a2 = a1 + 0;
    v0 = (v0 >> 0) & 0x7fffffff;
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    f4 = BITSF(v1);
    a1 = LD32(a1+8);
    v0 = LD32(a2+12);
    fcc = FCMP(f4, f2, 14);
    sp = sp - 16;
    a1 = (a1 >> 0) & 0x7fffffff;
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(a1);
    f5 = BITSF(v0);
    a3 = a0 + 0;
    ST32(sp, FBITS(f2));
    f1 = f2;
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    cnd_ = fcc;
    ST32(sp+12, v0);
    if (cnd_) { goto L_08AA2EFC; }
    goto L_08AA2EF8;
L_08AA2EF8:;
    f1 = BITSF(v1);
    goto L_08AA2EFC;
L_08AA2EFC:;
    fcc = FCMP(f5, f3, 14);
    cnd_ = fcc;
    f0 = f3;
    if (cnd_) { goto L_08AA2F10; }
    goto L_08AA2F0C;
L_08AA2F0C:;
    f0 = f5;
    goto L_08AA2F10;
L_08AA2F10:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08AA2F20; }
    goto L_08AA2F20;
L_08AA2F20:;
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08AA2F50; }
    goto L_08AA2F30;
L_08AA2F30:;
    fcc = FCMP(f1, f4, 2);
    cnd_ = fcc;
    v0 = 2;
    if (cnd_) { goto L_08AA2F50; }
    goto L_08AA2F40;
L_08AA2F40:;
    fcc = FCMP(f1, f3, 2);
    cnd_ = !fcc;
    v0 = 3;
    if (cnd_) { goto L_08AA30AC; }
    goto L_08AA2F50;
L_08AA2F50:;
    ST32(a3, v0);
    goto L_08AA2F54;
L_08AA2F54:;
    a1 = LD32(a3);
    goto L_08AA2F58;
L_08AA2F58:;
    f5 = BITSF(0);
    v0 = a1 + 3;
    v0 = v0 & 0x3;
    v0 = v0 << 2;
    v0 = v0 + a2;
    f0 = BITSF(LD32(v0));
    v1 = a1 + 1;
    v0 = a1 + 2;
    fcc = FCMP(f0, f5, 12);
    v1 = v1 & 0x3;
    v0 = v0 & 0x3;
    a0 = a1 & 0x3;
    a0 = a0 << 2;
    v1 = v1 << 2;
    v0 = v0 << 2;
    a0 = a0 + a2;
    v1 = v1 + a2;
    v0 = v0 + a2;
    f2 = BITSF(LD32(a0));
    f3 = BITSF(LD32(v1));
    cnd_ = !fcc;
    f4 = BITSF(LD32(v0));
    if (cnd_) { goto L_08AA2FBC; }
    goto L_08AA2FB0;
L_08AA2FB0:;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    goto L_08AA2FBC;
L_08AA2FBC:;
    a0 = D_08AEB5B0 - (-19024);
    f0 = BITSF(LD32(a0-19024));
    v1 = D_08AEB5B4 - (-19020);
    f1 = BITSF(LD32(v1-19020));
    f0 = f2 + f0;
    f1 = f0 * f1;
    fcc = FCMP(f5, f1, 12);
    cnd_ = !fcc;
    a2 = D_08AEB5B8 - (-19016);
    if (cnd_) { goto L_08AA30A0; }
    goto L_08AA2FE4;
L_08AA2FE4:;
    f0 = BITSF(LD32(a2-19016));
    f0 = f1 + f0;
    goto L_08AA2FEC;
L_08AA2FEC:;
    f1 = BITSF(LD32(a0-19024));
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1-19020));
    f1 = f3 + f1;
    t0 = FBITS(f0);
    f0 = BITSF(0);
    f1 = f1 * f2;
    v0 = t0 << 22;
    v0 = a1 | v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(a3, v0);
    if (cnd_) { goto L_08AA3094; }
    goto L_08AA3020;
L_08AA3020:;
    f0 = BITSF(LD32(a2-19016));
    f0 = f1 + f0;
    goto L_08AA3028;
L_08AA3028:;
    f2 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(a0-19024));
    f1 = BITSF(LD32(v1-19020));
    v0 = LD32(a3);
    f0 = f4 + f0;
    a0 = FBITS(f2);
    f1 = f0 * f1;
    f0 = BITSF(0);
    v1 = a0 << 12;
    v0 = v0 | v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(a3, v0);
    if (cnd_) { goto L_08AA3088; }
    goto L_08AA3060;
L_08AA3060:;
    f0 = BITSF(LD32(a2-19016));
    f0 = f1 + f0;
    goto L_08AA3068;
L_08AA3068:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(a3);
    t0 = FBITS(f0);
    v1 = t0 << 2;
    v0 = v0 | v1;
    ST32(a3, v0);
    sp = sp + 16;
    return;
L_08AA3088:;
    f0 = BITSF(LD32(a2-19016));
    f0 = f1 - f0;
    goto L_08AA3068;
L_08AA3094:;
    f0 = BITSF(LD32(a2-19016));
    f0 = f1 - f0;
    goto L_08AA3028;
L_08AA30A0:;
    f0 = BITSF(LD32(a2-19016));
    f0 = f1 - f0;
    goto L_08AA2FEC;
L_08AA30AC:;
    fcc = FCMP(f1, f5, 2);
    cnd_ = fcc;
    if (cnd_) { ST32(a3, 0); goto L_08AA2F54; }
    goto L_08AA30BC;
L_08AA30BC:;
    a1 = LD32(a3);
    goto L_08AA2F58;
}

/* 08AA30C4 */
rv_t func_08AA30C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AA30C4:;
    v1 = LD32(a0+48);
    v0 = a1 << 2;
    a0 = v0 + v1;
    cnd_ = v1 == 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_08AA30DC; }
    goto L_08AA30D8;
L_08AA30D8:;
    v0 = LD32(a0);
    goto L_08AA30DC;
L_08AA30DC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA30E4 */
rv_t func_08AA30E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA30E4:;
    sp = sp - 16;
    v0 = D_08AF0E18 - (3608);
    v0 = v0 + 3608;
    s1 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08AA3140; }
    goto L_08AA310C;
L_08AA310C:;
    a1 = LD32(s0+16);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3194; }
    goto L_08AA3118;
L_08AA3118:;
    a1 = LD32(s0+20);
    goto L_08AA311C;
L_08AA311C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3184; }
    goto L_08AA3124;
L_08AA3124:;
    a0 = LD32(s0);
    goto L_08AA3128;
L_08AA3128:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA3174; }
    goto L_08AA3130;
L_08AA3130:;
    ST32(s0+8, 0);
    a0 = s0 + 0;
    ST32(s0+4, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3140;
L_08AA3140:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AA3160; }
    goto L_08AA314C;
L_08AA314C:;
    goto L_08AA3150;
L_08AA3150:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA3160:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA316C;
L_08AA316C:;
    goto L_08AA3150;
L_08AA3174:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA317C;
L_08AA317C:;
    ST32(s0, 0);
    goto L_08AA3130;
L_08AA3184:;
    a0 = s1 + 0;
    func_08AA326C(a0, a1, t1, t2, t3);
    goto L_08AA318C;
L_08AA318C:;
    a0 = LD32(s0);
    goto L_08AA3128;
L_08AA3194:;
    func_08AA326C(a0, a1, t1, t2, t3);
    goto L_08AA319C;
L_08AA319C:;
    a1 = LD32(s0+20);
    goto L_08AA311C;
}

/* 08AA31A4 */
rv_t func_08AA31A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA31A4:;
    sp = sp - 16;
    v0 = D_08AF0E18 - (3608);
    v0 = v0 + 3608;
    s1 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08AA3200; }
    goto L_08AA31CC;
L_08AA31CC:;
    a1 = LD32(s0+16);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA325C; }
    goto L_08AA31D8;
L_08AA31D8:;
    a1 = LD32(s0+20);
    goto L_08AA31DC;
L_08AA31DC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA324C; }
    goto L_08AA31E4;
L_08AA31E4:;
    a0 = LD32(s0);
    goto L_08AA31E8;
L_08AA31E8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA323C; }
    goto L_08AA31F0;
L_08AA31F0:;
    ST32(s0+8, 0);
    a0 = s0 + 0;
    ST32(s0+4, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3200;
L_08AA3200:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AA3228; }
    goto L_08AA320C;
L_08AA320C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3214;
L_08AA3214:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA3228:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3234;
L_08AA3234:;
    goto L_08AA320C;
L_08AA323C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3244;
L_08AA3244:;
    ST32(s0, 0);
    goto L_08AA31F0;
L_08AA324C:;
    a0 = s1 + 0;
    func_08AA326C(a0, a1, t1, t2, t3);
    goto L_08AA3254;
L_08AA3254:;
    a0 = LD32(s0);
    goto L_08AA31E8;
L_08AA325C:;
    func_08AA326C(a0, a1, t1, t2, t3);
    goto L_08AA3264;
L_08AA3264:;
    a1 = LD32(s0+20);
    goto L_08AA31DC;
}

/* 08AA326C */
void func_08AA326C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA326C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+16);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA32F8; }
    goto L_08AA3290;
L_08AA3290:;
    v0 = LD32(s0+20);
    goto L_08AA3294;
L_08AA3294:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA32E8; }
    goto L_08AA32A0;
L_08AA32A0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA32C8; }
    goto L_08AA32A8;
L_08AA32A8:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA32D8; }
    goto L_08AA32B4;
L_08AA32B4:;
    ST32(s0+8, 0);
    a0 = s0 + 0;
    ST32(s0+4, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA32C4;
L_08AA32C4:;
    goto L_08AA32C8;
L_08AA32C8:;
    sp = sp + 16;
    return;
L_08AA32D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA32E0;
L_08AA32E0:;
    ST32(s0, 0);
    goto L_08AA32B4;
L_08AA32E8:;
    func_08AA326C(a0, a1, t1, t2, t3);
    goto L_08AA32F0;
L_08AA32F0:;
    goto L_08AA32A0;
L_08AA32F8:;
    func_08AA326C(a0, a1, t1, t2, t3);
    goto L_08AA3300;
L_08AA3300:;
    v0 = LD32(s0+20);
    goto L_08AA3294;
}

/* 08AA3308 */
u64 func_08AA3308(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3308:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08AA332C; }
    goto L_08AA3320;
L_08AA3320:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AA3354; }
    goto L_08AA332C;
L_08AA332C:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AA3344; }
    goto L_08AA3334;
L_08AA3334:;
    v0 = (u32)(s32)LD_S8(v1);
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08AA3344; }
    goto L_08AA3340;
L_08AA3340:;
    v1 = 0 + 0;
    goto L_08AA3344;
L_08AA3344:;
    goto L_08AA3348;
L_08AA3348:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA3354:;
    cnd_ = a1 == 0;
    v1 = 1;
    if (cnd_) { goto L_08AA3344; }
    goto L_08AA335C;
L_08AA335C:;
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA3348; }
    goto L_08AA3368;
L_08AA3368:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AA3380; }
    goto L_08AA3370;
L_08AA3370:;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3378;
L_08AA3378:;
    v1 = v0 + 0;
    goto L_08AA3344;
L_08AA3380:;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3388;
L_08AA3388:;
    v1 = v0 + 0;
    goto L_08AA3344;
}

/* 08AA3390 */
u64 func_08AA3390(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3390:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = LD32(a0+316);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA33B8; }
    goto L_08AA33A8;
L_08AA33A8:;
    v0 = LD32(v1+232);
    goto L_08AA33B0;
L_08AA33B0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA33B8:;
    { u64 r_ = func_08AA3390(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA33C0;
L_08AA33C0:;
    goto L_08AA33B0;
}

/* 08AA33C8 */
rv_t func_08AA33C8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AA33C8:;
    v0 = D_08B159FC - (23036);
    a2 = LD32(v0+23036);
    f5 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a2));
    f3 = BITSF(LD32(a2+4));
    f4 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a2+8));
    f0 = f0 - f2;
    f4 = f4 - f3;
    f5 = f5 - f1;
    sp = sp - 48;
    ST32(sp+16, FBITS(f0));
    a0 = a2 + 12;
    v0 = FBITS(f0);
    ST32(sp+24, FBITS(f5));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+20, FBITS(f4));
    {v[100]=BITSF(v0);}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(a2+12);
    v1 = LD32(a0+4);
    a1 = LD32(a0+32);
    {v[96]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[97]=BITSF(v1);}
    v1 = LD32(a0+12);
    {v[98]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(a0+16);
    v1 = LD32(a0+20);
    {v[1]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[2]=BITSF(v1);}
    v1 = LD32(a0+28);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    v0 = FBITS(f4);
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[101]=BITSF(v0);}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f5);
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[102]=BITSF(v0);}
    {float t0=v[100];float t1=v[101];float t2=v[102];float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = f0 + f12;
    f0 = BITSF(0);
    f4 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    fcc = FCMP(f0, f2, 14);
    {v0=FBITS(v[17]);}
    ST32(sp+32, FBITS(f4));
    f5 = BITSF(v0);
    ST32(sp+36, v0);
    ST32(sp, FBITS(f4));
    ST32(sp+4, v0);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_08AA3548; }
    goto L_08AA34D4;
L_08AA34D4:;
    f0 = BITSF(LD32(a2+100));
    f1 = BITSF(LD32(a2+96));
    f3 = f3 * f0;
    f2 = f12 * f1;
    f0 = f4 - f3;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AA354C; }
    goto L_08AA34F8;
L_08AA34F8:;
    f0 = BITSF(FBITS(f4) ^ 0x80000000u);
    f0 = f0 - f3;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AA354C; }
    goto L_08AA3510;
L_08AA3510:;
    f0 = BITSF(LD32(a2+88));
    f1 = BITSF(LD32(a2+112));
    f3 = f3 * f0;
    f2 = f12 * f1;
    f0 = f5 - f3;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    f0 = BITSF(FBITS(f5) ^ 0x80000000u);
    if (cnd_) { goto L_08AA354C; }
    goto L_08AA3534;
L_08AA3534:;
    f0 = f0 - f3;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08AA354C; }
    goto L_08AA3548;
L_08AA3548:;
    v0 = 0 + 0;
    goto L_08AA354C;
L_08AA354C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA3554 */
void func_08AA3554(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3554:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA35A8; }
    goto L_08AA3574;
L_08AA3574:;
    v0 = LD32(a0-4);
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_08AA3580;
L_08AA3580:;
    cnd_ = a0 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_08AA3598; }
    goto L_08AA3588;
L_08AA3588:;
    a0 = s0 + 0;
    func_0881B134(a0);
    goto L_08AA3590;
L_08AA3590:;
    a0 = LD32(s1);
    goto L_08AA3580;
L_08AA3598:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA35A0;
L_08AA35A0:;
    ST32(s1, 0);
    goto L_08AA35A8;
L_08AA35A8:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 08AA35BC */
void func_08AA35BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA35BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA35EC; }
    goto L_08AA35D8;
L_08AA35D8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA35EC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA35F4;
L_08AA35F4:;
    ST32(s0, 0);
    goto L_08AA35D8;
}

/* 08AA35FC */
void func_08AA35FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA35FC:;
    v0 = a1 << 2;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3638; }
    goto L_08AA3620;
L_08AA3620:;
    ST32(s0, 0);
    goto L_08AA3624;
L_08AA3624:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3638:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3640;
L_08AA3640:;
    ST32(s0, v0);
    goto L_08AA3624;
}

/* 08AA3648 */
void func_08AA3648(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3648:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+40);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA36B8; }
    goto L_08AA366C;
L_08AA366C:;
    v0 = LD32(s0+44);
    goto L_08AA3670;
L_08AA3670:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA36A8; }
    goto L_08AA367C;
L_08AA367C:;
    cnd_ = s0 == 0;
    a0 = s0 + 4;
    if (cnd_) { goto L_08AA3694; }
    goto L_08AA3684;
L_08AA3684:;
    func_0881ABF8(a0);
    goto L_08AA368C;
L_08AA368C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3694;
L_08AA3694:;
    sp = sp + 16;
    return;
L_08AA36A8:;
    func_08AA3648(a0, a1);
    goto L_08AA36B0;
L_08AA36B0:;
    goto L_08AA367C;
L_08AA36B8:;
    func_08AA3648(a0, a1);
    goto L_08AA36C0;
L_08AA36C0:;
    v0 = LD32(s0+44);
    goto L_08AA3670;
}

/* 08AA36C8 */
u64 func_08AA36C8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA36C8:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA370C; }
    goto L_08AA36E0;
L_08AA36E0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA36E8;
L_08AA36E8:;
    a0 = v0 + 44;
    a3 = v0 + 40;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA3720; }
    goto L_08AA3700;
L_08AA3700:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA36E8; }
    goto L_08AA370C;
L_08AA370C:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA3720; }
    goto L_08AA3718;
L_08AA3718:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA3730; }
    goto L_08AA3720;
L_08AA3720:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA3730:;
    a2 = 1;
    { u64 r_ = func_08AA36C8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3738;
L_08AA3738:;
    t0 = v0 + 0;
    goto L_08AA3720;
}

/* 08AA3740 */
void func_08AA3740(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3740:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA3790; }
    goto L_08AA375C;
L_08AA375C:;
    s0 = LD32(s0+12);
    goto L_08AA3760;
L_08AA3760:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08AA3778; }
    goto L_08AA3768;
L_08AA3768:;
    goto L_08AA376C;
L_08AA376C:;
    sp = sp + 16;
    return;
L_08AA3778:;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08AA3780;
L_08AA3780:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3788;
L_08AA3788:;
    goto L_08AA376C;
L_08AA3790:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3798;
L_08AA3798:;
    s0 = LD32(s0+12);
    goto L_08AA3760;
}

/* 08AA37A0 */
rv_t func_08AA37A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA37A0:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = 16; goto L_08AA3814; }
    goto L_08AA37C8;
L_08AA37C8:;
    a1 = LD32(a0+4);
    goto L_08AA37CC;
L_08AA37CC:;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(a0+12); goto L_08AA3808; }
    goto L_08AA37D4;
L_08AA37D4:;
    v0 = LD32(a0+8);
    v1 = LD32(a1);
    v0 = v0 + 1;
    ST32(a0+8, v0);
    ST32(a0+4, v1);
    goto L_08AA37E8;
L_08AA37E8:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA3808:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+4); goto L_08AA37CC; }
    goto L_08AA3810;
L_08AA3810:;
    a0 = 16;
    goto L_08AA3814;
L_08AA3814:;
    s3 = LD32(s2+4);
    s1 = LD32(s2+8);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3820;
L_08AA3820:;
    s0 = v0 + 0;
    ST32(v0+8, 0);
    ST32(v0, 0);
    ST32(v0+12, 0);
    cnd_ = v0 != 0;
    ST32(v0+4, 0);
    if (cnd_) { goto L_08AA3840; }
    goto L_08AA3838;
L_08AA3838:;
    a1 = 0 + 0;
    goto L_08AA37E8;
L_08AA3840:;
    { s64 p_ = (s64)(s32)s3 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA384C;
L_08AA384C:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA3888; }
    goto L_08AA3854;
L_08AA3854:;
    s1 = LD32(s0+12);
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08AA3870; }
    goto L_08AA3860;
L_08AA3860:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3868;
L_08AA3868:;
    a1 = 0 + 0;
    goto L_08AA37E8;
L_08AA3870:;
    a0 = s1 + 0;
    func_08AA3740(a0, 0, 0, 0);
    goto L_08AA3878;
L_08AA3878:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3880;
L_08AA3880:;
    goto L_08AA3860;
L_08AA3888:;
    t0 = s3 - 1;
    ST32(s0+4, v0);
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA38C8; }
    goto L_08AA3898;
L_08AA3898:;
    a1 = s1 + 0;
    a2 = 0 + 0;
    goto L_08AA38A0;
L_08AA38A0:;
    v1 = LD32(s0);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a1;
    v0 = v0 < t0;
    v1 = v1 + a2;
    ST32(v1, a0);
    a2 = a2 + s1;
    cnd_ = v0 != 0;
    a1 = a1 + s1;
    if (cnd_) { goto L_08AA38A0; }
    goto L_08AA38C8;
L_08AA38C8:;
    { s64 p_ = (s64)(s32)t0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s0);
    v1 = lo;
    v0 = v0 + v1;
    cnd_ = s0 == 0;
    ST32(v0, 0);
    if (cnd_) { goto L_08AA3838; }
    goto L_08AA38E0;
L_08AA38E0:;
    v0 = LD32(s2);
    a1 = LD32(s0+4);
    a2 = 0 + 0;
    ST32(s0+12, v0);
    cnd_ = a1 == 0;
    ST32(s2, s0);
    if (cnd_) { goto L_08AA3910; }
    goto L_08AA38F8;
L_08AA38F8:;
    v0 = LD32(s0+8);
    v1 = LD32(a1);
    a2 = a1 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    ST32(s0+4, v1);
    goto L_08AA3910;
L_08AA3910:;
    a1 = a2 + 0;
    goto L_08AA37E8;
}

/* 08AA3918 */
void func_08AA3918(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3918:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_08AA3968; }
    goto L_08AA3938;
L_08AA3938:;
    v1 = LD32(a0);
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AA39D8; }
    goto L_08AA3948;
L_08AA3948:;
    v0 = LD32(s0+4);
    goto L_08AA394C;
L_08AA394C:;
    v1 = LD32(s0);
    a0 = 8;
    ST32(s2+4, v0);
    v0 = 4;
    ST32(s2+8, 0);
    cnd_ = v1 == v0;
    ST32(s2, v1);
    if (cnd_) { goto L_08AA3984; }
    goto L_08AA3968;
L_08AA3968:;
    v0 = s2 + 0;
    goto L_08AA396C;
L_08AA396C:;
    sp = sp + 16;
    return;
L_08AA3984:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA398C;
L_08AA398C:;
    ST32(s2+4, v0);
    v1 = LD32(s0+4);
    a0 = LD32(v1);
    ST32(v0, a0);
    v0 = LD32(s0+4);
    s1 = LD32(s2+4);
    s0 = LD32(v0+4);
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA39B0;
L_08AA39B0:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA39BC;
L_08AA39BC:;
    ST32(s1+4, v0);
    a1 = s0 + 0;
    v0 = LD32(s2+4);
    a0 = LD32(v0+4);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA39D0;
L_08AA39D0:;
    v0 = s2 + 0;
    goto L_08AA396C;
L_08AA39D8:;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA39F4; }
    goto L_08AA39E4;
L_08AA39E4:;
    a0 = LD32(s2+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA39EC;
L_08AA39EC:;
    v0 = LD32(s0+4);
    goto L_08AA394C;
L_08AA39F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA39FC;
L_08AA39FC:;
    goto L_08AA39E4;
}

/* 08AA3A04 */
void func_08AA3A04(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA3A04:;
    sp = sp - 32;
    s0 = LD32(a0+16);
    cnd_ = s0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08AA3A70; }
    goto L_08AA3A2C;
L_08AA3A2C:;
    v0 = LD32(a0+12);
    s1 = s0 + 0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AA3A70; }
    goto L_08AA3A3C;
L_08AA3A3C:;
    s4 = D_08B22E78 - (11896);
    a0 = s1 + 0;
    goto L_08AA3A44;
L_08AA3A44:;
    s0 = s1 + 0;
    s1 = LD32(s1+8);
    { u64 r_ = func_0881B320(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3A50;
L_08AA3A50:;
    a1 = s0 + 0;
    a0 = s4 + 11896;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3A5C;
L_08AA3A5C:;
    v0 = LD32(s3+12);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08AA3A44; }
    goto L_08AA3A70;
L_08AA3A70:;
    sp = sp + 32;
    return;
}

/* 08AA3A90 */
u64 func_08AA3A90(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3A90:;
    sp = sp - 16;
    a2 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = LD32(a0+4);
    s0 = LD32(a0);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA3AF0; }
    goto L_08AA3AC0;
L_08AA3AC0:;
    v0 = LD32(s0);
    goto L_08AA3AC4;
L_08AA3AC4:;
    v1 = v0 + a0;
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    v1 = a1 < v1;
    if (cnd_) { goto L_08AA3ADC; }
    goto L_08AA3AD4;
L_08AA3AD4:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AA3B00; }
    goto L_08AA3ADC;
L_08AA3ADC:;
    a2 = s0 + 12;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08AA3AC4; }
    goto L_08AA3AEC;
L_08AA3AEC:;
    goto L_08AA3AF0;
L_08AA3AF0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA3B00:;
    v1 = LD32(s0+4);
    v0 = v0 - 1;
    ST32(a1, v1);
    ST32(s0+8, v0);
    cnd_ = v0 != 0;
    ST32(s0+4, a1);
    if (cnd_) { goto L_08AA3AEC; }
    goto L_08AA3B18;
L_08AA3B18:;
    v0 = LD32(s0+12);
    a0 = LD32(s0);
    ST32(a2, v0);
    cnd_ = a0 != 0;
    ST32(s0+12, 0);
    if (cnd_) { goto L_08AA3B60; }
    goto L_08AA3B2C;
L_08AA3B2C:;
    s1 = LD32(s0+12);
    goto L_08AA3B30;
L_08AA3B30:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08AA3B48; }
    goto L_08AA3B38;
L_08AA3B38:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3B40;
L_08AA3B40:;
    goto L_08AA3AF0;
L_08AA3B48:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_08AA3B50;
L_08AA3B50:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3B58;
L_08AA3B58:;
    goto L_08AA3B38;
L_08AA3B60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3B68;
L_08AA3B68:;
    s1 = LD32(s0+12);
    goto L_08AA3B30;
}

/* 08AA3B70 */
rv_t func_08AA3B70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA3B70:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA3B78 */
void func_08AA3B78(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3B78:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3BAC; }
    goto L_08AA3B94;
L_08AA3B94:;
    ST32(s0, 0);
    goto L_08AA3B98;
L_08AA3B98:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3BAC:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3BB4;
L_08AA3BB4:;
    ST32(s0, v0);
    goto L_08AA3B98;
}

/* 08AA3BBC */
void func_08AA3BBC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3BBC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3BEC; }
    goto L_08AA3BD4;
L_08AA3BD4:;
    ST32(s0, 0);
    goto L_08AA3BD8;
L_08AA3BD8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3BEC:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3BF4;
L_08AA3BF4:;
    ST32(s0, v0);
    goto L_08AA3BD8;
}

/* 08AA3BFC */
void func_08AA3BFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08AA3BFC:;
    sp = sp - 64;
    v0 = a2 < 0xcu;
    fp = a1 + 0;
    s6 = t0 + 0;
    s5 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA3D48; }
    goto L_08AA3C40;
L_08AA3C40:;
    s7 = a2 << 2;
    s2 = s7 + a0;
    v0 = LD32(s2+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+60); goto L_08AA3D0C; }
    goto L_08AA3C54;
L_08AA3C54:;
    v1 = LD32(a0+56);
    a1 = a2 + 1;
    a0 = 2;
    v0 = a1 < v1;
    if (v0 == 0) v1 = a1;
    ST32(s0+56, v1);
    s1 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3C74;
L_08AA3C74:;
    a1 = LD32(s0+60);
    a0 = sp + 0;
    func_08AA3E28(a0, a1, 0, 0, 0);
    goto L_08AA3C80;
L_08AA3C80:;
    v0 = LD32(sp);
    v1 = LD32(s0+60);
    cnd_ = v1 == 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08AA3D00; }
    goto L_08AA3C90;
L_08AA3C90:;
    a1 = LD32(s0+64);
    s3 = s2 + 0;
    s4 = sp + 4;
    goto L_08AA3C9C;
L_08AA3C9C:;
    a0 = s4 + 0;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_08AA3CA4;
L_08AA3CA4:;
    v1 = LD32(s2+4);
    v0 = LD32(sp+4);
    a1 = LD32(s0+64);
    a0 = s1 << 2;
    v1 = a0 + v1;
    ST32(v1, v0);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AA3CEC; }
    goto L_08AA3CC4;
L_08AA3CC4:;
    v0 = LD32(s3+4);
    v0 = a0 + v0;
    a0 = LD32(v0);
    goto L_08AA3CD0;
L_08AA3CD0:;
    ST32(a0, 0);
    a2 = a2 + 1;
    a0 = a0 + 4;
    v0 = LD32(s0+64);
    v1 = a2 < v0;
    cnd_ = v1 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA3CD0; }
    goto L_08AA3CEC;
L_08AA3CEC:;
    v0 = LD32(s0+60);
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AA3C9C; }
    goto L_08AA3D00;
L_08AA3D00:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3D08;
L_08AA3D08:;
    v0 = LD32(s0+60);
    goto L_08AA3D0C;
L_08AA3D0C:;
    v0 = s5 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA3D4C; }
    goto L_08AA3D18;
L_08AA3D18:;
    v0 = LD32(s0+64);
    v0 = s6 < v0;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08AA3D50; }
    goto L_08AA3D28;
L_08AA3D28:;
    v1 = s7 + s0;
    a1 = LD32(v1+4);
    v0 = s5 << 2;
    v1 = s6 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    v1 = v1 + a0;
    ST32(v1, fp);
    goto L_08AA3D48;
L_08AA3D48:;
    goto L_08AA3D4C;
L_08AA3D4C:;
    goto L_08AA3D50;
L_08AA3D50:;
    sp = sp + 64;
    return;
}

/* 08AA3D78 */
u32 func_08AA3D78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3D78:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 2;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3D98;
L_08AA3D98:;
    a0 = LD32(s0+52);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s0 + 52; goto L_08AA3DF8; }
    goto L_08AA3DA4;
L_08AA3DA4:;
    s1 = s1 << 2;
    goto L_08AA3DA8;
L_08AA3DA8:;
    a0 = s1 + a0;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+60); goto L_08AA3DE0; }
    goto L_08AA3DB8;
L_08AA3DB8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA3DC0;
L_08AA3DC0:;
    v1 = LD32(s0+52);
    v1 = s1 + v1;
    v0 = LD32(v1);
    sp = sp + 16;
    return v0;
L_08AA3DE0:;
    v0 = LD32(s0+64);
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    func_08AA3BBC(a0, a1, 0, 0, 0);
    goto L_08AA3DF0;
L_08AA3DF0:;
    goto L_08AA3DB8;
L_08AA3DF8:;
    a1 = 12;
    func_08AA3B78(a0, a1, 0, 0, 0);
    goto L_08AA3E00;
L_08AA3E00:;
    a0 = LD32(s0+52);
    a1 = 0 + 0;
    v1 = a0 + 0;
    goto L_08AA3E0C;
L_08AA3E0C:;
    a1 = a1 + 1;
    v0 = a1 < 0xcu;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AA3E0C; }
    goto L_08AA3E20;
L_08AA3E20:;
    s1 = s1 << 2;
    goto L_08AA3DA8;
}

/* 08AA3E28 */
void func_08AA3E28(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3E28:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3E5C; }
    goto L_08AA3E44;
L_08AA3E44:;
    ST32(s0, 0);
    goto L_08AA3E48;
L_08AA3E48:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3E5C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3E64;
L_08AA3E64:;
    ST32(s0, v0);
    goto L_08AA3E48;
}

/* 08AA3E6C */
void func_08AA3E6C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3E6C:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3EA0; }
    goto L_08AA3E88;
L_08AA3E88:;
    ST32(s0, 0);
    goto L_08AA3E8C;
L_08AA3E8C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3EA0:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3EA8;
L_08AA3EA8:;
    ST32(s0, v0);
    goto L_08AA3E8C;
}

/* 08AA3EB0 */
void func_08AA3EB0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3EB0:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3EE4; }
    goto L_08AA3ECC;
L_08AA3ECC:;
    ST32(s0, 0);
    goto L_08AA3ED0;
L_08AA3ED0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3EE4:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3EEC;
L_08AA3EEC:;
    ST32(s0, v0);
    goto L_08AA3ED0;
}

/* 08AA3EF4 */
void func_08AA3EF4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3EF4:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3F28; }
    goto L_08AA3F10;
L_08AA3F10:;
    ST32(s0, 0);
    goto L_08AA3F14;
L_08AA3F14:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3F28:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3F30;
L_08AA3F30:;
    ST32(s0, v0);
    goto L_08AA3F14;
}

/* 08AA3F38 */
void func_08AA3F38(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3F38:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3F6C; }
    goto L_08AA3F54;
L_08AA3F54:;
    ST32(s0, 0);
    goto L_08AA3F58;
L_08AA3F58:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3F6C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3F74;
L_08AA3F74:;
    ST32(s0, v0);
    goto L_08AA3F58;
}

/* 08AA3F7C */
void func_08AA3F7C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3F7C:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3FB0; }
    goto L_08AA3F98;
L_08AA3F98:;
    ST32(s0, 0);
    goto L_08AA3F9C;
L_08AA3F9C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3FB0:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3FB8;
L_08AA3FB8:;
    ST32(s0, v0);
    goto L_08AA3F9C;
}

/* 08AA3FC0 */
void func_08AA3FC0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA3FC0:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA3FF4; }
    goto L_08AA3FDC;
L_08AA3FDC:;
    ST32(s0, 0);
    goto L_08AA3FE0;
L_08AA3FE0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA3FF4:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA3FFC;
L_08AA3FFC:;
    ST32(s0, v0);
    goto L_08AA3FE0;
}

/* 08AA4004 */
rv_t func_08AA4004(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA4004:;
    sp = sp - 32;
    v1 = (u32)-1;
    s6 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08AA4080; }
    goto L_08AA403C;
L_08AA403C:;
    a1 = LD32(a0+4);
    v1 = LD32(a0+8);
    v0 = (s32)a1 < (s32)v1;
    cnd_ = v0 == 0;
    s0 = v1 << 1;
    if (cnd_) { goto L_08AA4128; }
    goto L_08AA4050;
L_08AA4050:;
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AA407C; }
    goto L_08AA4058;
L_08AA4058:;
    s0 = LD32(a0);
    a1 = a1 + 1;
    goto L_08AA4060;
L_08AA4060:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0); goto L_08AA40AC; }
    goto L_08AA406C;
L_08AA406C:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08AA4060; }
    goto L_08AA407C;
L_08AA407C:;
    v1 = (u32)-1;
    goto L_08AA4080;
L_08AA4080:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA40AC:;
    ST32(s2+4, a1);
    cnd_ = a0 == 0;
    s2 = LD32(s6);
    if (cnd_) { goto L_08AA40CC; }
    goto L_08AA40B8;
L_08AA40B8:;
    cnd_ = s2 == a0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08AA4080; }
    goto L_08AA40C0;
L_08AA40C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA40C8;
L_08AA40C8:;
    ST32(s0, 0);
    goto L_08AA40CC;
L_08AA40CC:;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08AA4120; }
    goto L_08AA40D8;
L_08AA40D8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA40E0;
L_08AA40E0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA40F4;
L_08AA40F4:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA410C; }
    goto L_08AA40FC;
L_08AA40FC:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08AA4104;
L_08AA4104:;
    v1 = s1 + 0;
    goto L_08AA4080;
L_08AA410C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4118;
L_08AA4118:;
    v1 = s1 + 0;
    goto L_08AA4080;
L_08AA4120:;
    ST32(s0, 0);
    goto L_08AA4104;
L_08AA4128:;
    a0 = v1 << 2;
    a0 = a0 + s0;
    ST32(s2+8, s0);
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4140;
L_08AA4140:;
    s5 = v0 + 4;
    ST32(s5-4, s0);
    v0 = s5 + 0;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA4170; }
    goto L_08AA4154;
L_08AA4154:;
    a0 = (u32)-1;
    goto L_08AA4158;
L_08AA4158:;
    v1 = v1 - 1;
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 12;
    if (cnd_) { goto L_08AA4158; }
    goto L_08AA4170;
L_08AA4170:;
    a1 = LD32(s2+4);
    cnd_ = (s32)a1 <= 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08AA4204; }
    goto L_08AA417C;
L_08AA417C:;
    s3 = 0 + 0;
    goto L_08AA4180;
L_08AA4180:;
    s0 = s5 + s3;
    v0 = LD32(s2);
    v1 = LD32(s0);
    v0 = v0 + s3;
    cnd_ = v1 == 0;
    s1 = LD32(v0);
    if (cnd_) { goto L_08AA41AC; }
    goto L_08AA4198;
L_08AA4198:;
    cnd_ = s1 == v1;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA41F4; }
    goto L_08AA41A0;
L_08AA41A0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA41A8;
L_08AA41A8:;
    ST32(s0, 0);
    goto L_08AA41AC;
L_08AA41AC:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08AA430C; }
    goto L_08AA41BC;
L_08AA41BC:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA41C4;
L_08AA41C4:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA41D8;
L_08AA41D8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA42FC; }
    goto L_08AA41E8;
L_08AA41E8:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08AA41F0;
L_08AA41F0:;
    a1 = LD32(s2+4);
    goto L_08AA41F4;
L_08AA41F4:;
    s4 = s4 + 1;
    v0 = (s32)s4 < (s32)a1;
    cnd_ = v0 != 0;
    s3 = s3 + 12;
    if (cnd_) { goto L_08AA4180; }
    goto L_08AA4204;
L_08AA4204:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    s0 = s5 + v0;
    a0 = LD32(s0);
    v0 = a1 + 1;
    ST32(s2+4, v0);
    cnd_ = a0 == 0;
    s1 = LD32(s6);
    if (cnd_) { goto L_08AA423C; }
    goto L_08AA4228;
L_08AA4228:;
    cnd_ = s1 == a0;
    if (cnd_) { a1 = LD32(s2); goto L_08AA4278; }
    goto L_08AA4230;
L_08AA4230:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4238;
L_08AA4238:;
    ST32(s0, 0);
    goto L_08AA423C;
L_08AA423C:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08AA42F4; }
    goto L_08AA4248;
L_08AA4248:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4250;
L_08AA4250:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4264;
L_08AA4264:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA42E0; }
    goto L_08AA426C;
L_08AA426C:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08AA4274;
L_08AA4274:;
    a1 = LD32(s2);
    goto L_08AA4278;
L_08AA4278:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08AA42D4; }
    goto L_08AA4280;
L_08AA4280:;
    v1 = LD32(a1-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a1 + v0;
    goto L_08AA4294;
L_08AA4294:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_08AA42C8; }
    goto L_08AA429C;
L_08AA429C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA42B4; }
    goto L_08AA42A8;
L_08AA42A8:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08AA4294;
L_08AA42B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA42BC;
L_08AA42BC:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_08AA42A8;
L_08AA42C8:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA42D0;
L_08AA42D0:;
    v0 = LD32(s2+4);
    goto L_08AA42D4;
L_08AA42D4:;
    ST32(s2, s5);
    v1 = v0 - 1;
    goto L_08AA4080;
L_08AA42E0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA42EC;
L_08AA42EC:;
    a1 = LD32(s2);
    goto L_08AA4278;
L_08AA42F4:;
    ST32(s0, 0);
    goto L_08AA4274;
L_08AA42FC:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4304;
L_08AA4304:;
    a1 = LD32(s2+4);
    goto L_08AA41F4;
L_08AA430C:;
    ST32(s0, 0);
    goto L_08AA41F0;
}

/* 08AA4314 */
void func_08AA4314(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08AA4314:;
    sp = sp - 64;
    s1 = a1 + 0;
    v0 = LD32(a0+8);
    a1 = v0 - 1;
    cnd_ = (s32)a1 < 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08AA4380; }
    goto L_08AA4350;
L_08AA4350:;
    v1 = LD32(a0);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = v0 + 8;
    v0 = LD32(v1);
    goto L_08AA436C;
L_08AA436C:;
    cnd_ = v0 != 0;
    v1 = v1 - 12;
    if (cnd_) { goto L_08AA4380; }
    goto L_08AA4374;
L_08AA4374:;
    a1 = a1 - 1;
    cnd_ = (s32)a1 >= 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AA436C; }
    goto L_08AA4380;
L_08AA4380:;
    v0 = LD32(s2+4);
    a3 = sp + 0;
    a2 = 0 + 0;
    ST32(sp, v0);
    goto L_08AA4390;
L_08AA4390:;
    v0 = LD_U8(a3);
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08AA4390; }
    goto L_08AA43B8;
L_08AA43B8:;
    ST32(sp+4, a1);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_08AA43C4;
L_08AA43C4:;
    v0 = LD_U8(a2);
    v1 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08AA43C4; }
    goto L_08AA43EC;
L_08AA43EC:;
    a0 = LD32(s2+8);
    cnd_ = (s32)a0 <= 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08AA44E8; }
    goto L_08AA43F8;
L_08AA43F8:;
    s7 = 0xff0000u;
    s7 = s7 | 0xff00;
    s6 = 0 + 0;
    s5 = 0 + 0;
    goto L_08AA4408;
L_08AA4408:;
    v0 = LD32(s2);
    v0 = v0 + s5;
    v1 = LD32(v0+8);
    cnd_ = v1 == 0;
    if (cnd_) { s4 = s4 + 1; goto L_08AA44D8; }
    goto L_08AA441C;
L_08AA441C:;
    ST32(sp+8, s4);
    a2 = sp + 8;
    a1 = 0 + 0;
    goto L_08AA4428;
L_08AA4428:;
    v0 = LD_U8(a2);
    v1 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08AA4428; }
    goto L_08AA4450;
L_08AA4450:;
    cnd_ = (s32)s4 < 0;
    if (cnd_) { a1 = LD32(s2); goto L_08AA4470; }
    goto L_08AA4458;
L_08AA4458:;
    v0 = LD32(s2+8);
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2); goto L_08AA4470; }
    goto L_08AA4468;
L_08AA4468:;
    v0 = LD32(s2);
    a1 = v0 + s6;
    goto L_08AA4470;
L_08AA4470:;
    v0 = LD32(a1);
    cnd_ = v0 == 0;
    s0 = LD32(s1);
    if (cnd_) { goto L_08AA4514; }
    goto L_08AA447C;
L_08AA447C:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_08AA449C; }
    goto L_08AA4488;
L_08AA4488:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_08AA449C;
L_08AA449C:;
    cnd_ = (s32)s3 <= 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08AA44B8; }
    goto L_08AA44A4;
L_08AA44A4:;
    v0 = s3 + 0;
    goto L_08AA44A8;
L_08AA44A8:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08AA44A8; }
    goto L_08AA44B8;
L_08AA44B8:;
    a1 = LD32(a1);
    a0 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA44C4;
L_08AA44C4:;
    v1 = s3 << 2;
    s0 = s0 + v1;
    goto L_08AA44CC;
L_08AA44CC:;
    ST32(s1, s0);
    a0 = LD32(s2+8);
    s4 = s4 + 1;
    goto L_08AA44D8;
L_08AA44D8:;
    v0 = (s32)s4 < (s32)a0;
    s5 = s5 + 12;
    cnd_ = v0 != 0;
    s6 = s6 + 12;
    if (cnd_) { goto L_08AA4408; }
    goto L_08AA44E8;
L_08AA44E8:;
    sp = sp + 64;
    return;
L_08AA4514:;
    ST32(s0, s7);
    s0 = s0 + 4;
    goto L_08AA44CC;
}

/* 08AA4520 */
void func_08AA4520(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA4520:;
    sp = sp - 32;
    s3 = a1 + 0;
    v0 = LD32(a0+8);
    s0 = v0 - 1;
    cnd_ = (s32)s0 < 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA457C; }
    goto L_08AA454C;
L_08AA454C:;
    v1 = LD32(a0);
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = v0 + 8;
    v0 = LD32(v1);
    goto L_08AA4568;
L_08AA4568:;
    cnd_ = v0 != 0;
    v1 = v1 - 12;
    if (cnd_) { goto L_08AA457C; }
    goto L_08AA4570;
L_08AA4570:;
    s0 = s0 - 1;
    cnd_ = (s32)s0 >= 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AA4568; }
    goto L_08AA457C;
L_08AA457C:;
    a1 = LD32(s1+4);
    a0 = s3 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA458C;
L_08AA458C:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4598;
L_08AA4598:;
    a2 = LD32(s1+8);
    cnd_ = (s32)a2 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08AA45CC; }
    goto L_08AA45A4;
L_08AA45A4:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    v0 = v0 + s0;
    v1 = LD32(v0+8);
    cnd_ = v1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AA45E8; }
    goto L_08AA45BC;
L_08AA45BC:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)a2;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08AA45A4; }
    goto L_08AA45CC;
L_08AA45CC:;
    sp = sp + 32;
    return;
L_08AA45E8:;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA45F0;
L_08AA45F0:;
    cnd_ = (s32)s2 < 0;
    if (cnd_) { a1 = LD32(s1); goto L_08AA4610; }
    goto L_08AA45F8;
L_08AA45F8:;
    v0 = LD32(s1+8);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08AA4610; }
    goto L_08AA4608;
L_08AA4608:;
    v0 = LD32(s1);
    a1 = v0 + s0;
    goto L_08AA4610;
L_08AA4610:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4618;
L_08AA4618:;
    a2 = LD32(s1+8);
    goto L_08AA45BC;
}

/* 08AA4620 */
void func_08AA4620(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AA4620:;
    sp = sp - 48;
    s4 = a1 + 0;
    a2 = 4;
    a1 = a0 + 4;
    a3 = 0 + 0;
    s2 = a0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4658;
L_08AA4658:;
    a0 = s4 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA466C;
L_08AA466C:;
    v1 = LD32(sp);
    v0 = LD32(s2+8);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08AA4730; }
    goto L_08AA4680;
L_08AA4680:;
    a1 = LD32(s2);
    v0 = v1 + 1;
    cnd_ = a1 == 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08AA46E0; }
    goto L_08AA4690;
L_08AA4690:;
    v1 = LD32(a1-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a1 + v0;
    goto L_08AA46A4;
L_08AA46A4:;
    cnd_ = a1 == s0;
    s0 = s0 - 12;
    if (cnd_) { goto L_08AA46D8; }
    goto L_08AA46AC;
L_08AA46AC:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA46C4; }
    goto L_08AA46B8;
L_08AA46B8:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08AA46A4;
L_08AA46C4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA46CC;
L_08AA46CC:;
    ST32(s0, 0);
    a1 = LD32(s2);
    goto L_08AA46B8;
L_08AA46D8:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA46E0;
L_08AA46E0:;
    s0 = LD32(s2+8);
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA46F8;
L_08AA46F8:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA4728; }
    goto L_08AA470C;
L_08AA470C:;
    a1 = (u32)-1;
    goto L_08AA4710;
L_08AA4710:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_08AA4710; }
    goto L_08AA4728;
L_08AA4728:;
    ST32(s2, v0);
    v0 = LD32(s2+4);
    goto L_08AA4730;
L_08AA4730:;
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AA47F0; }
    goto L_08AA4738;
L_08AA4738:;
    a3 = 0 + 0;
    goto L_08AA473C;
L_08AA473C:;
    a0 = s4 + 0;
    a1 = sp + 4;
    a2 = 4;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA474C;
L_08AA474C:;
    v1 = LD32(sp+4);
    a0 = LD32(s2);
    a2 = 0 + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    a1 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4774;
L_08AA4774:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08AA479C; }
    goto L_08AA4784;
L_08AA4784:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA47DC; }
    goto L_08AA478C;
L_08AA478C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4794;
L_08AA4794:;
    ST32(s0, 0);
    a0 = s1 + 0;
    goto L_08AA479C;
L_08AA479C:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08AA4820; }
    goto L_08AA47A8;
L_08AA47A8:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA47B0;
L_08AA47B0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA47C4;
L_08AA47C4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA4810; }
    goto L_08AA47D4;
L_08AA47D4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08AA47DC;
L_08AA47DC:;
    v0 = LD32(s2+4);
    goto L_08AA47E0;
L_08AA47E0:;
    s3 = s3 + 1;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA473C; }
    goto L_08AA47F0;
L_08AA47F0:;
    sp = sp + 48;
    return;
L_08AA4810:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4818;
L_08AA4818:;
    v0 = LD32(s2+4);
    goto L_08AA47E0;
L_08AA4820:;
    ST32(s0, 0);
    goto L_08AA47DC;
}

/* 08AA4828 */
rv_t func_08AA4828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA4828:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4830 */
rv_t func_08AA4830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA4830:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4838 */
rv_t func_08AA4838(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA4838:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4840 */
rv_t func_08AA4840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA4840:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4848 */
rv_t func_08AA4848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA4848:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4850 */
rv_t func_08AA4850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4850:;
    v0 = D_08AF0E70 - (3696);
    v0 = v0 + 3696;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA486C;
L_08AA486C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4878 */
rv_t func_08AA4878(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4878:;
    v0 = D_08AF0E70 - (3696);
    v0 = v0 + 3696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4898;
L_08AA4898:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA48A0;
L_08AA48A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA48B0 */
rv_t func_08AA48B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA48B0:;
    v0 = 4;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA48B8 */
rv_t func_08AA48B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA48B8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA48C0 */
rv_t func_08AA48C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA48C0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA48C8 */
rv_t func_08AA48C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA48C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA48D0 */
rv_t func_08AA48D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA48D0:;
    sp = sp - 16;
    v0 = D_08AF0E38 - (3640);
    v0 = v0 + 3640;
    s0 = a0 + 0;
    s1 = s0 + 72;
    v1 = LD32(a0+72);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA4980; }
    goto L_08AA4904;
L_08AA4904:;
    v1 = LD32(s0+44);
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    ST32(s1+4, 0);
    a0 = v1 + 0;
    s2 = s0 + 44;
    ST32(s1+8, 0);
    s1 = s0 + 20;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA4970; }
    goto L_08AA492C;
L_08AA492C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA4960; }
    goto L_08AA4940;
L_08AA4940:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA4960:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4968;
L_08AA4968:;
    ST32(s0+20, 0);
    goto L_08AA4940;
L_08AA4970:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4978;
L_08AA4978:;
    ST32(s0+44, 0);
    goto L_08AA492C;
L_08AA4980:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4988;
L_08AA4988:;
    ST32(s0+72, 0);
    goto L_08AA4904;
}

/* 08AA4990 */
rv_t func_08AA4990(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4990:;
    sp = sp - 16;
    v0 = D_08AF0E38 - (3640);
    v0 = v0 + 3640;
    s0 = a0 + 0;
    s1 = s0 + 72;
    v1 = LD32(a0+72);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA4A48; }
    goto L_08AA49C4;
L_08AA49C4:;
    v1 = LD32(s0+44);
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    ST32(s1+4, 0);
    a0 = v1 + 0;
    s2 = s0 + 44;
    ST32(s1+8, 0);
    s1 = s0 + 20;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA4A38; }
    goto L_08AA49EC;
L_08AA49EC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA4A28; }
    goto L_08AA4A00;
L_08AA4A00:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4A10;
L_08AA4A10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA4A28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4A30;
L_08AA4A30:;
    ST32(s0+20, 0);
    goto L_08AA4A00;
L_08AA4A38:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4A40;
L_08AA4A40:;
    ST32(s0+44, 0);
    goto L_08AA49EC;
L_08AA4A48:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4A50;
L_08AA4A50:;
    ST32(s0+72, 0);
    goto L_08AA49C4;
}

/* 08AA4A58 */
u64 func_08AA4A58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA4A58:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA4A94; }
    goto L_08AA4A64;
L_08AA4A64:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA4A70;
L_08AA4A70:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA4A9C; }
    goto L_08AA4A7C;
L_08AA4A7C:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA4A70; }
    goto L_08AA4A90;
L_08AA4A90:;
    v1 = 0 + 0;
    goto L_08AA4A94;
L_08AA4A94:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA4A9C:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA4A94; }
    goto L_08AA4AA4;
L_08AA4AA4:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AA4B34; }
    goto L_08AA4AB0;
L_08AA4AB0:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA4B2C; }
    goto L_08AA4ABC;
L_08AA4ABC:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA4B24; }
    goto L_08AA4AC8;
L_08AA4AC8:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AA4AD0;
L_08AA4AD0:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA4AD8;
L_08AA4AD8:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA4B14; }
    goto L_08AA4AE8;
L_08AA4AE8:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AA4AFC; }
    goto L_08AA4AF4;
L_08AA4AF4:;
    v1 = v0 + 0;
    goto L_08AA4AD8;
L_08AA4AFC:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AA4A94;
L_08AA4B14:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA4AD8; }
    goto L_08AA4B1C;
L_08AA4B1C:;
    ST32(v1+8, t1);
    goto L_08AA4AFC;
L_08AA4B24:;
    t1 = LD32(t0+8);
    goto L_08AA4AD0;
L_08AA4B2C:;
    ST32(a3, v1);
    goto L_08AA4AFC;
L_08AA4B34:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA4AFC;
}

/* 08AA4B40 */
void func_08AA4B40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4B40:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA4BB8; }
    goto L_08AA4B60;
L_08AA4B60:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AA4BA4; }
    goto L_08AA4B6C;
L_08AA4B6C:;
    v0 = s1 << 2;
    goto L_08AA4B70;
L_08AA4B70:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AA4A58(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4B84;
L_08AA4B84:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4B8C;
L_08AA4B8C:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AA4BA4; }
    goto L_08AA4B9C;
L_08AA4B9C:;
    v0 = s1 << 2;
    goto L_08AA4B70;
L_08AA4BA4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA4BC8; }
    goto L_08AA4BAC;
L_08AA4BAC:;
    ST32(s0+16, 0);
    goto L_08AA4BB0;
L_08AA4BB0:;
    ST32(s0+12, 0);
    goto L_08AA4BB8;
L_08AA4BB8:;
    sp = sp + 16;
    return;
L_08AA4BC8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4BD0;
L_08AA4BD0:;
    ST32(s0+16, 0);
    goto L_08AA4BB0;
}

/* 08AA4BD8 */
void func_08AA4BD8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4BD8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4C10; }
    goto L_08AA4BF4;
L_08AA4BF4:;
    ST32(a0, 0);
    goto L_08AA4BF8;
L_08AA4BF8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA4C10:;
    a0 = a1 << 1;
    a0 = a0 + a1;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4C20;
L_08AA4C20:;
    a1 = v0 + 0;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA4C64; }
    goto L_08AA4C30;
L_08AA4C30:;
    v0 = D_08AEB65C - (-18852);
    f0 = BITSF(LD32(v0-18852));
    v0 = (u32)-1;
    goto L_08AA4C3C;
L_08AA4C3C:;
    a0 = a0 - 1;
    ST16(v1, 0);
    ST16(v1+2, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, FBITS(f0));
    ST32(v1+20, 0);
    cnd_ = a0 != v0;
    v1 = v1 + 24;
    if (cnd_) { goto L_08AA4C3C; }
    goto L_08AA4C64;
L_08AA4C64:;
    ST32(s1, a1);
    goto L_08AA4BF8;
}

/* 08AA4C6C */
rv_t func_08AA4C6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA4C6C:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4C7C */
rv_t func_08AA4C7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4C7C:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA4C98;
L_08AA4C98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA4CA4 */
u64 func_08AA4CA4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AA4CA4:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA4CF8; }
    goto L_08AA4CB4;
L_08AA4CB4:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AA4CF8; }
    goto L_08AA4CD8;
L_08AA4CD8:;
    a0 = LD32(v1);
    goto L_08AA4CDC;
L_08AA4CDC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AA4D00; }
    goto L_08AA4CE8;
L_08AA4CE8:;
    v1 = LD32(v1+4);
    goto L_08AA4CEC;
L_08AA4CEC:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08AA4CDC; }
    goto L_08AA4CF4;
L_08AA4CF4:;
    a3 = 0 + 0;
    goto L_08AA4CF8;
L_08AA4CF8:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA4D00:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08AA4D1C; }
    goto L_08AA4D08;
L_08AA4D08:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AA4CEC; }
    goto L_08AA4D18;
L_08AA4D18:;
    v0 = LD_U8(v1+8);
    goto L_08AA4D1C;
L_08AA4D1C:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08AA4CE8; }
    goto L_08AA4D24;
L_08AA4D24:;
    goto L_08AA4CF8;
}

/* 08AA4D2C */
u32 func_08AA4D2C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AA4D2C:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA4D8C; }
    goto L_08AA4D3C;
L_08AA4D3C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA4D8C; }
    goto L_08AA4D60;
L_08AA4D60:;
    a3 = LD32(a0);
    goto L_08AA4D64;
L_08AA4D64:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AA4D94; }
    goto L_08AA4D7C;
L_08AA4D7C:;
    a0 = LD32(a0+4);
    goto L_08AA4D80;
L_08AA4D80:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AA4D64; }
    goto L_08AA4D88;
L_08AA4D88:;
    a3 = 0 + 0;
    goto L_08AA4D8C;
L_08AA4D8C:;
    v0 = a3 + 0;
    return v0;
L_08AA4D94:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AA4DB0; }
    goto L_08AA4D9C;
L_08AA4D9C:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA4D80; }
    goto L_08AA4DAC;
L_08AA4DAC:;
    v0 = LD_U8(a0+8);
    goto L_08AA4DB0;
L_08AA4DB0:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA4D80; }
    goto L_08AA4DB8;
L_08AA4DB8:;
    goto L_08AA4D8C;
}

/* 08AA4DC0 */
void func_08AA4DC0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4DC0:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4DFC; }
    goto L_08AA4DE4;
L_08AA4DE4:;
    ST32(s0, 0);
    goto L_08AA4DE8;
L_08AA4DE8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA4DFC:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4E04;
L_08AA4E04:;
    ST32(s0, v0);
    goto L_08AA4DE8;
}

/* 08AA4E0C */
void func_08AA4E0C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA4E0C:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4E5C; }
    goto L_08AA4E34;
L_08AA4E34:;
    ST32(a0, 0);
    goto L_08AA4E38;
L_08AA4E38:;
    v0 = 1;
    sp = sp + 32;
    return;
L_08AA4E5C:;
    a0 = a1 << 1;
    a0 = a0 + a1;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4E6C;
L_08AA4E6C:;
    s4 = v0 + 0;
    s1 = v0 + 0;
    cnd_ = s2 == 0;
    s0 = s2 - 1;
    if (cnd_) { goto L_08AA4E94; }
    goto L_08AA4E7C;
L_08AA4E7C:;
    s2 = (u32)-1;
    goto L_08AA4E80;
L_08AA4E80:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_088EDEB0(a0);
    goto L_08AA4E8C;
L_08AA4E8C:;
    cnd_ = s0 != s2;
    s1 = s1 + 24;
    if (cnd_) { goto L_08AA4E80; }
    goto L_08AA4E94;
L_08AA4E94:;
    ST32(s3, s4);
    goto L_08AA4E38;
}

/* 08AA4E9C */
u32 func_08AA4E9C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4E9C:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4ED8; }
    goto L_08AA4EC0;
L_08AA4EC0:;
    ST32(s0, 0);
    goto L_08AA4EC4;
L_08AA4EC4:;
    v0 = 1;
    sp = sp + 16;
    return v0;
L_08AA4ED8:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4EE0;
L_08AA4EE0:;
    ST32(s0, v0);
    goto L_08AA4EC4;
}

/* 08AA4EE8 */
void func_08AA4EE8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4EE8:;
    sp = sp - 16;
    v0 = a1 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4F1C; }
    goto L_08AA4F04;
L_08AA4F04:;
    ST32(s0, 0);
    goto L_08AA4F08;
L_08AA4F08:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA4F1C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4F24;
L_08AA4F24:;
    ST32(s0, v0);
    goto L_08AA4F08;
}

/* 08AA4F2C */
void func_08AA4F2C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4F2C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4F64; }
    goto L_08AA4F48;
L_08AA4F48:;
    ST32(a0, 0);
    goto L_08AA4F4C;
L_08AA4F4C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA4F64:;
    a0 = a1 << 3;
    a0 = a0 - a1;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4F74;
L_08AA4F74:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA4F8C; }
    goto L_08AA4F7C;
L_08AA4F7C:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA4F84;
L_08AA4F84:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA4F84; }
    goto L_08AA4F8C;
L_08AA4F8C:;
    ST32(s1, v0);
    goto L_08AA4F4C;
}

/* 08AA4F94 */
void func_08AA4F94(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4F94:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA4FCC; }
    goto L_08AA4FB0;
L_08AA4FB0:;
    ST32(a0, 0);
    goto L_08AA4FB4;
L_08AA4FB4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA4FCC:;
    a0 = a1 << 3;
    a0 = a0 + a1;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA4FDC;
L_08AA4FDC:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA4FF4; }
    goto L_08AA4FE4;
L_08AA4FE4:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA4FEC;
L_08AA4FEC:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA4FEC; }
    goto L_08AA4FF4;
L_08AA4FF4:;
    ST32(s1, v0);
    goto L_08AA4FB4;
}

/* 08AA4FFC */
void func_08AA4FFC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA4FFC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5034; }
    goto L_08AA5018;
L_08AA5018:;
    ST32(a0, 0);
    goto L_08AA501C;
L_08AA501C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5034:;
    a0 = a1 << 6;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA503C;
L_08AA503C:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA5054; }
    goto L_08AA5044;
L_08AA5044:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA504C;
L_08AA504C:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA504C; }
    goto L_08AA5054;
L_08AA5054:;
    ST32(s1, v0);
    goto L_08AA501C;
}

/* 08AA505C */
void func_08AA505C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA505C:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA50AC; }
    goto L_08AA5084;
L_08AA5084:;
    ST32(a0, 0);
    goto L_08AA5088;
L_08AA5088:;
    v0 = 1;
    sp = sp + 32;
    return;
L_08AA50AC:;
    a0 = a1 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA50B8;
L_08AA50B8:;
    s3 = v0 + 4;
    ST32(s3-4, s2);
    s1 = s3 + 0;
    cnd_ = s2 == 0;
    s0 = s2 - 1;
    if (cnd_) { goto L_08AA50E4; }
    goto L_08AA50CC;
L_08AA50CC:;
    s2 = (u32)-1;
    goto L_08AA50D0;
L_08AA50D0:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_08817110(a0);
    goto L_08AA50DC;
L_08AA50DC:;
    cnd_ = s0 != s2;
    s1 = s1 + 4;
    if (cnd_) { goto L_08AA50D0; }
    goto L_08AA50E4;
L_08AA50E4:;
    ST32(s4, s3);
    goto L_08AA5088;
}

/* 08AA50EC */
void func_08AA50EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA50EC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5124; }
    goto L_08AA5108;
L_08AA5108:;
    ST32(a0, 0);
    goto L_08AA510C;
L_08AA510C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5124:;
    a0 = a1 << 4;
    a0 = a0 + a1;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5138;
L_08AA5138:;
    a1 = v0 + 4;
    ST32(a1-4, s0);
    v1 = a1 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA516C; }
    goto L_08AA514C;
L_08AA514C:;
    a2 = (u32)-1;
    goto L_08AA5150;
L_08AA5150:;
    v0 = v1 + 56;
    a0 = a0 - 1;
    ST32(v1+56, 0);
    v1 = v1 + 68;
    ST32(v0+8, 0);
    cnd_ = a0 != a2;
    ST32(v0+4, 0);
    if (cnd_) { goto L_08AA5150; }
    goto L_08AA516C;
L_08AA516C:;
    ST32(s1, a1);
    goto L_08AA510C;
}

/* 08AA5174 */
void func_08AA5174(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5174:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA51AC; }
    goto L_08AA5190;
L_08AA5190:;
    ST32(a0, 0);
    goto L_08AA5194;
L_08AA5194:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA51AC:;
    a0 = a1 << 3;
    a0 = a0 - a1;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA51BC;
L_08AA51BC:;
    a2 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    a1 = s0 - 1;
    if (cnd_) { goto L_08AA5208; }
    goto L_08AA51CC;
L_08AA51CC:;
    v1 = D_08AEB678 - (-18824);
    f0 = BITSF(LD32(v1-18824));
    v0 = D_08AEB674 - (-18828);
    f1 = BITSF(LD32(v0-18828));
    v0 = (u32)-1;
    goto L_08AA51E0;
L_08AA51E0:;
    a1 = a1 - 1;
    ST32(a0, FBITS(f1));
    ST32(a0+8, FBITS(f1));
    ST32(a0+16, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(a0+12, FBITS(f0));
    ST32(a0+20, FBITS(f0));
    ST32(a0+24, 0);
    cnd_ = a1 != v0;
    a0 = a0 + 28;
    if (cnd_) { goto L_08AA51E0; }
    goto L_08AA5208;
L_08AA5208:;
    ST32(s1, a2);
    goto L_08AA5194;
}

/* 08AA5210 */
void func_08AA5210(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5210:;
    v0 = a1 << 3;
    v0 = v0 - a1;
    sp = sp - 16;
    v0 = v0 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA524C; }
    goto L_08AA5234;
L_08AA5234:;
    ST32(s0, 0);
    goto L_08AA5238;
L_08AA5238:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA524C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5254;
L_08AA5254:;
    ST32(s0, v0);
    goto L_08AA5238;
}

/* 08AA525C */
void func_08AA525C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA525C:;
    sp = sp - 16;
    v0 = a1 << 4;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5290; }
    goto L_08AA5278;
L_08AA5278:;
    ST32(s0, 0);
    goto L_08AA527C;
L_08AA527C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5290:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5298;
L_08AA5298:;
    ST32(s0, v0);
    goto L_08AA527C;
}

/* 08AA52A0 */
void func_08AA52A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA52A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA52D0; }
    goto L_08AA52BC;
L_08AA52BC:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA52D0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA52D8;
L_08AA52D8:;
    ST32(s0, 0);
    goto L_08AA52BC;
}

/* 08AA52E0 */
void func_08AA52E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA52E0:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA531C; }
    goto L_08AA5304;
L_08AA5304:;
    ST32(s0, 0);
    goto L_08AA5308;
L_08AA5308:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA531C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5324;
L_08AA5324:;
    ST32(s0, v0);
    goto L_08AA5308;
}

/* 08AA532C */
void func_08AA532C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA532C:;
    sp = sp - 16;
    v0 = a1 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5360; }
    goto L_08AA5348;
L_08AA5348:;
    ST32(s0, 0);
    goto L_08AA534C;
L_08AA534C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5360:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5368;
L_08AA5368:;
    ST32(s0, v0);
    goto L_08AA534C;
}

/* 08AA5370 */
void func_08AA5370(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_08AA5370:;
    a0 = LD32(a0);
    v0 = 0x1ff00000u;
    v1 = a0 & v0;
    v0 = v1 >> 20;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AA5534; }
    goto L_08AA538C;
L_08AA538C:;
    a3 = D_08AEB688 - (-18808);
    f0 = BITSF(LD32(a3-18808));
    a2 = D_08AEB68C - (-18804);
    f2 = BITSF(LD32(a2-18804));
    f4 = f1 * f0;
    fcc = FCMP(f2, f4, 12);
    cnd_ = fcc;
    if (cnd_) { f4 = f2; goto L_08AA53B0; }
    goto L_08AA53B0;
L_08AA53B0:;
    v0 = 0xf0000u;
    v0 = v0 | 0xf800;
    v1 = a0 & v0;
    v0 = v1 >> 11;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AA5518; }
    goto L_08AA53CC;
L_08AA53CC:;
    f0 = BITSF(LD32(a3-18808));
    f3 = BITSF(LD32(a2-18804));
    f2 = f1 * f0;
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f3; goto L_08AA53E8; }
    goto L_08AA53E8;
L_08AA53E8:;
    v1 = a0 & 0x7ff;
    f0 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AA54FC; }
    goto L_08AA53F8;
L_08AA53F8:;
    v1 = D_08AEB690 - (-18800);
    f0 = BITSF(LD32(v1-18800));
    v0 = D_08AEB694 - (-18796);
    f5 = BITSF(LD32(v0-18796));
    f0 = f1 * f0;
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    ST32(a1+12, FBITS(f0));
    if (cnd_) { goto L_08AA5430; }
    goto L_08AA541C;
L_08AA541C:;
    ST32(a1+12, FBITS(f5));
    ST32(a1, 0);
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    return;
L_08AA5430:;
    {v[4]=0.63661977236f;}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;}
    {float s0=v[0];float s1=v[1];float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);v[8]=d0;v[9]=d1;}
    {float s0=v[0];float s1=v[1];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[4]=d0;v[5]=d1;}
    {v0=FBITS(v[9]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[8]);}
    f1 = BITSF(v0);
    {v0=FBITS(v[4]);}
    ST32(a1+4, v0);
    f3 = f1 * f3;
    f2 = f1 * f0;
    ST32(a1+8, FBITS(f3));
    cnd_ = (s32)a0 < 0;
    ST32(a1, FBITS(f2));
    if (cnd_) { goto L_08AA54F0; }
    goto L_08AA5484;
L_08AA5484:;
    v0 = 0x40000000u;
    v0 = a0 & v0;
    cnd_ = v0 == 0;
    v0 = 0x20000000u;
    if (cnd_) { goto L_08AA54A0; }
    goto L_08AA5494;
L_08AA5494:;
    f0 = BITSF(LD32(a1+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a1+4, FBITS(f0));
    goto L_08AA54A0;
L_08AA54A0:;
    v0 = a0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a1+12)); goto L_08AA54BC; }
    goto L_08AA54AC;
L_08AA54AC:;
    f0 = BITSF(LD32(a1+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a1+8, FBITS(f0));
    f0 = BITSF(LD32(a1+12));
    goto L_08AA54BC;
L_08AA54BC:;
    f2 = BITSF(LD32(a1));
    f3 = BITSF(LD32(a1+4));
    f0 = f0 * f0;
    f1 = BITSF(LD32(a1+8));
    f0 = f5 - f0;
    f0 = sqrtf(f0);
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    ST32(a1+8, FBITS(f1));
    ST32(a1, FBITS(f2));
    ST32(a1+4, FBITS(f3));
    return;
L_08AA54F0:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(a1, FBITS(f0));
    goto L_08AA5484;
L_08AA54FC:;
    v1 = v1 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08AA53F8;
L_08AA5518:;
    v0 = v0 & 0x1;
    v1 = v1 >> 12;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08AA53CC;
L_08AA5534:;
    v0 = v0 & 0x1;
    v1 = v1 >> 21;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08AA538C;
}

/* 08AA5550 */
void func_08AA5550(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5550:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5588; }
    goto L_08AA556C;
L_08AA556C:;
    ST32(a0, 0);
    goto L_08AA5570;
L_08AA5570:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5588:;
    a0 = a1 << 4;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5594;
L_08AA5594:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA55C4; }
    goto L_08AA55A8;
L_08AA55A8:;
    a1 = (u32)-1;
    goto L_08AA55AC;
L_08AA55AC:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 16;
    if (cnd_) { goto L_08AA55AC; }
    goto L_08AA55C4;
L_08AA55C4:;
    ST32(s1, v0);
    goto L_08AA5570;
}

/* 08AA55CC */
void func_08AA55CC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA55CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5604; }
    goto L_08AA55E8;
L_08AA55E8:;
    ST32(a0, 0);
    goto L_08AA55EC;
L_08AA55EC:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5604:;
    a0 = a1 << 1;
    a0 = a0 + a1;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5614;
L_08AA5614:;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA5664; }
    goto L_08AA5620;
L_08AA5620:;
    a3 = D_08B45A9C - (23196);
    a1 = a3 + 23196;
    a2 = (u32)-1;
    goto L_08AA562C;
L_08AA562C:;
    f0 = BITSF(LD32(a3+23196));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    a0 = a0 - 1;
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, 0);
    ST32(v1+16, 0);
    ST8(v1+20, 0);
    ST8(v1+21, 0);
    ST16(v1+22, 0);
    cnd_ = a0 != a2;
    v1 = v1 + 24;
    if (cnd_) { goto L_08AA562C; }
    goto L_08AA5664;
L_08AA5664:;
    ST32(s1, v0);
    goto L_08AA55EC;
}

/* 08AA566C */
void func_08AA566C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA566C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA56A4; }
    goto L_08AA5688;
L_08AA5688:;
    ST32(a0, 0);
    goto L_08AA568C;
L_08AA568C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA56A4:;
    a0 = a1 << 3;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA56AC;
L_08AA56AC:;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA56D8; }
    goto L_08AA56B8;
L_08AA56B8:;
    a1 = (u32)-1;
    goto L_08AA56BC;
L_08AA56BC:;
    a0 = a0 - 1;
    ST16(v1, 0);
    ST16(v1+2, 0);
    ST16(v1+4, 0);
    ST16(v1+6, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 8;
    if (cnd_) { goto L_08AA56BC; }
    goto L_08AA56D8;
L_08AA56D8:;
    ST32(s1, v0);
    goto L_08AA568C;
}

/* 08AA56E0 */
void func_08AA56E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA56E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5710; }
    goto L_08AA56F8;
L_08AA56F8:;
    ST32(s0, 0);
    goto L_08AA56FC;
L_08AA56FC:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5710:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5718;
L_08AA5718:;
    ST32(s0, v0);
    goto L_08AA56FC;
}

/* 08AA5720 */
void func_08AA5720(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5720:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5758; }
    goto L_08AA573C;
L_08AA573C:;
    ST32(a0, 0);
    goto L_08AA5740;
L_08AA5740:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5758:;
    a0 = a1 << 3;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5760;
L_08AA5760:;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA5784; }
    goto L_08AA576C;
L_08AA576C:;
    a1 = (u32)-1;
    goto L_08AA5770;
L_08AA5770:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST16(v1+4, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 8;
    if (cnd_) { goto L_08AA5770; }
    goto L_08AA5784;
L_08AA5784:;
    ST32(s1, v0);
    goto L_08AA5740;
}

/* 08AA578C */
u64 func_08AA578C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA578C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA57C4; }
    goto L_08AA57A8;
L_08AA57A8:;
    ST32(a0, 0);
    goto L_08AA57AC;
L_08AA57AC:;
    v0 = 1;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA57C4:;
    a0 = a1 << 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA57CC;
L_08AA57CC:;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA5814; }
    goto L_08AA57D8;
L_08AA57D8:;
    a3 = D_08B45A9C - (23196);
    a1 = a3 + 23196;
    a2 = (u32)-1;
    goto L_08AA57E4;
L_08AA57E4:;
    f0 = BITSF(LD32(a3+23196));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    a0 = a0 - 1;
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST16(v1+12, 0);
    ST8(v1+14, 0);
    ST8(v1+15, 0);
    cnd_ = a0 != a2;
    v1 = v1 + 16;
    if (cnd_) { goto L_08AA57E4; }
    goto L_08AA5814;
L_08AA5814:;
    ST32(s1, v0);
    goto L_08AA57AC;
}

/* 08AA581C */
void func_08AA581C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA581C:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5858; }
    goto L_08AA5840;
L_08AA5840:;
    ST32(s0, 0);
    goto L_08AA5844;
L_08AA5844:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5858:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5860;
L_08AA5860:;
    ST32(s0, v0);
    goto L_08AA5844;
}

/* 08AA5868 */
void func_08AA5868(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AA5868:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08AA5A88; }
    goto L_08AA5890;
L_08AA5890:;
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AA58CC; }
    goto L_08AA589C;
L_08AA589C:;
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA58BC; }
    goto L_08AA58A8;
L_08AA58A8:;
    a0 = LD32(s0+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA5A5C; }
    goto L_08AA58B4;
L_08AA58B4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA5A4C; }
    goto L_08AA58BC;
L_08AA58BC:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA58C4;
L_08AA58C4:;
    ST32(s1, 0);
    a0 = s3 + 0;
    goto L_08AA58CC;
L_08AA58CC:;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA58D4;
L_08AA58D4:;
    v1 = LD32(sp);
    v0 = v1 < 0x2712u;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AA59CC; }
    goto L_08AA58E4;
L_08AA58E4:;
    v0 = v1 < 0x2710u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA59BC; }
    goto L_08AA58F0;
L_08AA58F0:;
    v0 = 10000;
    ST32(sp+8, v1);
    ST32(sp, v0);
    v0 = LD32(sp+8);
    goto L_08AA5900;
L_08AA5900:;
    a2 = LD32(s3);
    v1 = LD32(sp);
    a1 = v0 << 2;
    a1 = a1 + v0;
    a1 = a1 << 2;
    v0 = LD32(a2+12);
    v1 = v1 < 0x2711u;
    a0 = a1 + 12;
    if (v1 == 0) a1 = a0;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA592C;
L_08AA592C:;
    a1 = s1 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5938;
L_08AA5938:;
    s0 = LD32(s1+4);
    a0 = s0 << 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5944;
L_08AA5944:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08AA5960; }
    goto L_08AA5950;
L_08AA5950:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08AA5958;
L_08AA5958:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08AA5958; }
    goto L_08AA5960;
L_08AA5960:;
    v0 = LD32(s1+4);
    ST32(s1+8, a0);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08AA598C; }
    goto L_08AA5970;
L_08AA5970:;
    goto L_08AA5974;
L_08AA5974:;
    sp = sp + 48;
    return;
L_08AA598C:;
    a1 = LD32(s1+8);
    goto L_08AA5990;
L_08AA5990:;
    v0 = s0 << 4;
    a0 = s3 + 0;
    a1 = a1 + v0;
    func_0882DC24(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AA59A0;
L_08AA59A0:;
    v1 = LD32(s1+4);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+8); goto L_08AA5990; }
    goto L_08AA59B4;
L_08AA59B4:;
    goto L_08AA5974;
L_08AA59BC:;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA59C4;
L_08AA59C4:;
    v0 = LD32(sp+8);
    goto L_08AA5900;
L_08AA59CC:;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA59D8;
L_08AA59D8:;
    a1 = s1 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA59E4;
L_08AA59E4:;
    s0 = LD32(s1+4);
    a0 = s0 << 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA59F0;
L_08AA59F0:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08AA5A0C; }
    goto L_08AA59FC;
L_08AA59FC:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08AA5A04;
L_08AA5A04:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08AA5A04; }
    goto L_08AA5A0C;
L_08AA5A0C:;
    v0 = LD32(s1+4);
    ST32(s1+8, a0);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08AA5970; }
    goto L_08AA5A1C;
L_08AA5A1C:;
    a1 = LD32(s1+8);
    goto L_08AA5A20;
L_08AA5A20:;
    v0 = s0 << 4;
    a0 = s3 + 0;
    a1 = a1 + v0;
    func_0882DC24(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08AA5A30;
L_08AA5A30:;
    v1 = LD32(s1+4);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+8); goto L_08AA5A20; }
    goto L_08AA5A44;
L_08AA5A44:;
    goto L_08AA5974;
L_08AA5A4C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5A54;
L_08AA5A54:;
    goto L_08AA58BC;
L_08AA5A5C:;
    func_08AA5F78(a0);
    goto L_08AA5A64;
L_08AA5A64:;
    a0 = LD32(s0+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA5A78; }
    goto L_08AA5A70;
L_08AA5A70:;
    s0 = LD32(s2);
    goto L_08AA58B4;
L_08AA5A78:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5A80;
L_08AA5A80:;
    s0 = LD32(s2);
    goto L_08AA58B4;
L_08AA5A88:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5A90;
L_08AA5A90:;
    ST32(s1+8, 0);
    goto L_08AA5890;
}

/* 08AA5A98 */
void func_08AA5A98(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AA5A98:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08AA5C78; }
    goto L_08AA5AC0;
L_08AA5AC0:;
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AA5AFC; }
    goto L_08AA5ACC;
L_08AA5ACC:;
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA5AEC; }
    goto L_08AA5AD8;
L_08AA5AD8:;
    a0 = LD32(s0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA5C4C; }
    goto L_08AA5AE4;
L_08AA5AE4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA5C3C; }
    goto L_08AA5AEC;
L_08AA5AEC:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5AF4;
L_08AA5AF4:;
    ST32(s1, 0);
    a0 = s3 + 0;
    goto L_08AA5AFC;
L_08AA5AFC:;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5B04;
L_08AA5B04:;
    v1 = LD32(sp);
    v0 = v1 < 0x2712u;
    cnd_ = v0 == 0;
    v0 = v1 < 0x2710u;
    if (cnd_) { goto L_08AA5BD4; }
    goto L_08AA5B14;
L_08AA5B14:;
    cnd_ = v0 == 0;
    v0 = 10000;
    if (cnd_) { goto L_08AA5BC0; }
    goto L_08AA5B1C;
L_08AA5B1C:;
    ST32(sp+8, v1);
    ST32(sp, v0);
    a2 = LD32(s3);
    goto L_08AA5B28;
L_08AA5B28:;
    a1 = LD32(sp+8);
    v1 = LD32(sp);
    v0 = LD32(a2+12);
    a1 = a1 << 3;
    v1 = v1 < 0x2711u;
    a0 = a1 + 12;
    if (v1 == 0) a1 = a0;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5B4C;
L_08AA5B4C:;
    a1 = s1 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5B58;
L_08AA5B58:;
    a0 = LD32(s1+4);
    s0 = 0 + 0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5B68;
L_08AA5B68:;
    v1 = LD32(s1+4);
    cnd_ = v1 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08AA5B90; }
    goto L_08AA5B74;
L_08AA5B74:;
    goto L_08AA5B78;
L_08AA5B78:;
    sp = sp + 48;
    return;
L_08AA5B90:;
    a1 = LD32(s1+8);
    goto L_08AA5B94;
L_08AA5B94:;
    v0 = s0 << 2;
    a0 = s3 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5BA4;
L_08AA5BA4:;
    v1 = LD32(s1+4);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+8); goto L_08AA5B94; }
    goto L_08AA5BB8;
L_08AA5BB8:;
    goto L_08AA5B78;
L_08AA5BC0:;
    a0 = s3 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5BCC;
L_08AA5BCC:;
    a2 = LD32(s3);
    goto L_08AA5B28;
L_08AA5BD4:;
    a0 = s3 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5BE4;
L_08AA5BE4:;
    a1 = s1 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5BF0;
L_08AA5BF0:;
    a0 = LD32(s1+4);
    s0 = 0 + 0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5C00;
L_08AA5C00:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08AA5B74; }
    goto L_08AA5C0C;
L_08AA5C0C:;
    a1 = LD32(s1+8);
    goto L_08AA5C10;
L_08AA5C10:;
    v0 = s0 << 2;
    a0 = s3 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5C20;
L_08AA5C20:;
    v1 = LD32(s1+4);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+8); goto L_08AA5C10; }
    goto L_08AA5C34;
L_08AA5C34:;
    goto L_08AA5B78;
L_08AA5C3C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5C44;
L_08AA5C44:;
    goto L_08AA5AEC;
L_08AA5C4C:;
    func_08AA5FC8(a0);
    goto L_08AA5C54;
L_08AA5C54:;
    a0 = LD32(s0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA5C68; }
    goto L_08AA5C60;
L_08AA5C60:;
    s0 = LD32(s2);
    goto L_08AA5AE4;
L_08AA5C68:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5C70;
L_08AA5C70:;
    s0 = LD32(s2);
    goto L_08AA5AE4;
L_08AA5C78:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5C80;
L_08AA5C80:;
    ST32(s1+8, 0);
    goto L_08AA5AC0;
}

/* 08AA5C88 */
void func_08AA5C88(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5C88:;
    v0 = a1 << 2;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 2;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5CC4; }
    goto L_08AA5CAC;
L_08AA5CAC:;
    ST32(s0, 0);
    goto L_08AA5CB0;
L_08AA5CB0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5CC4:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5CCC;
L_08AA5CCC:;
    ST32(s0, v0);
    goto L_08AA5CB0;
}

/* 08AA5CD4 */
void func_08AA5CD4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AA5CD4:;
    sp = sp - 48;
    s2 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08AA5EF4; }
    goto L_08AA5CFC;
L_08AA5CFC:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AA5D38; }
    goto L_08AA5D08;
L_08AA5D08:;
    s0 = LD32(s1);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA5D28; }
    goto L_08AA5D14;
L_08AA5D14:;
    a0 = LD32(s0+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA5EC8; }
    goto L_08AA5D20;
L_08AA5D20:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA5EB8; }
    goto L_08AA5D28;
L_08AA5D28:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5D30;
L_08AA5D30:;
    ST32(s2, 0);
    a0 = s3 + 0;
    goto L_08AA5D38;
L_08AA5D38:;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5D40;
L_08AA5D40:;
    v1 = LD32(sp);
    v0 = v1 < 0x2712u;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08AA5E30; }
    goto L_08AA5D50;
L_08AA5D50:;
    v0 = v1 < 0x2710u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA5E20; }
    goto L_08AA5D5C;
L_08AA5D5C:;
    v0 = 10000;
    ST32(sp+8, v1);
    ST32(sp, v0);
    a2 = LD32(s3);
    goto L_08AA5D6C;
L_08AA5D6C:;
    a1 = LD32(sp+8);
    v1 = LD32(sp);
    v0 = LD32(a2+12);
    a1 = a1 << 4;
    v1 = v1 < 0x2711u;
    a0 = a1 + 12;
    if (v1 == 0) a1 = a0;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5D90;
L_08AA5D90:;
    a1 = s2 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5D9C;
L_08AA5D9C:;
    s0 = LD32(s2+4);
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5DB0;
L_08AA5DB0:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08AA5DCC; }
    goto L_08AA5DBC;
L_08AA5DBC:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08AA5DC4;
L_08AA5DC4:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08AA5DC4; }
    goto L_08AA5DCC;
L_08AA5DCC:;
    v0 = LD32(s2+4);
    ST32(s2+8, a0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AA5E04; }
    goto L_08AA5DDC;
L_08AA5DDC:;
    s0 = 0 + 0;
    goto L_08AA5DE0;
L_08AA5DE0:;
    a1 = LD32(s2+8);
    a0 = s3 + 0;
    s1 = s1 + 1;
    a1 = a1 + s0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5DF4;
L_08AA5DF4:;
    v1 = LD32(s2+4);
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08AA5DE0; }
    goto L_08AA5E04;
L_08AA5E04:;
    goto L_08AA5E08;
L_08AA5E08:;
    sp = sp + 48;
    return;
L_08AA5E20:;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5E28;
L_08AA5E28:;
    a2 = LD32(s3);
    goto L_08AA5D6C;
L_08AA5E30:;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5E3C;
L_08AA5E3C:;
    a1 = s2 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5E48;
L_08AA5E48:;
    s0 = LD32(s2+4);
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5E5C;
L_08AA5E5C:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08AA5E78; }
    goto L_08AA5E68;
L_08AA5E68:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08AA5E70;
L_08AA5E70:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08AA5E70; }
    goto L_08AA5E78;
L_08AA5E78:;
    v0 = LD32(s2+4);
    ST32(s2+8, a0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AA5E04; }
    goto L_08AA5E88;
L_08AA5E88:;
    s0 = 0 + 0;
    goto L_08AA5E8C;
L_08AA5E8C:;
    a1 = LD32(s2+8);
    a0 = s3 + 0;
    s1 = s1 + 1;
    a1 = a1 + s0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5EA0;
L_08AA5EA0:;
    v1 = LD32(s2+4);
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08AA5E8C; }
    goto L_08AA5EB0;
L_08AA5EB0:;
    goto L_08AA5E08;
L_08AA5EB8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5EC0;
L_08AA5EC0:;
    goto L_08AA5D28;
L_08AA5EC8:;
    func_08AA6018(a0);
    goto L_08AA5ED0;
L_08AA5ED0:;
    a0 = LD32(s0+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA5EE4; }
    goto L_08AA5EDC;
L_08AA5EDC:;
    s0 = LD32(s1);
    goto L_08AA5D20;
L_08AA5EE4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5EEC;
L_08AA5EEC:;
    s0 = LD32(s1);
    goto L_08AA5D20;
L_08AA5EF4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5EFC;
L_08AA5EFC:;
    ST32(s2+8, 0);
    goto L_08AA5CFC;
}

/* 08AA5F04 */
void func_08AA5F04(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5F04:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA5F3C; }
    goto L_08AA5F20;
L_08AA5F20:;
    ST32(a0, 0);
    goto L_08AA5F24;
L_08AA5F24:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA5F3C:;
    a0 = 104;
    { s64 p_ = (s64)(s32)a1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA5F4C;
L_08AA5F4C:;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA5F70; }
    goto L_08AA5F58;
L_08AA5F58:;
    a1 = (u32)-1;
    goto L_08AA5F5C;
L_08AA5F5C:;
    a0 = a0 - 1;
    ST32(v1+68, 0);
    ST32(v1+96, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 104;
    if (cnd_) { goto L_08AA5F5C; }
    goto L_08AA5F70;
L_08AA5F70:;
    ST32(s1, v0);
    goto L_08AA5F24;
}

/* 08AA5F78 */
void func_08AA5F78(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5F78:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+20);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA5FA4; }
    goto L_08AA5F94;
L_08AA5F94:;
    goto L_08AA5F98;
L_08AA5F98:;
    sp = sp + 16;
    return;
L_08AA5FA4:;
    func_08AA5F78(a0);
    goto L_08AA5FAC;
L_08AA5FAC:;
    v0 = LD32(s0+20);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA5F94; }
    goto L_08AA5FB8;
L_08AA5FB8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA5FC0;
L_08AA5FC0:;
    goto L_08AA5F98;
}

/* 08AA5FC8 */
void func_08AA5FC8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA5FC8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA5FF4; }
    goto L_08AA5FE4;
L_08AA5FE4:;
    goto L_08AA5FE8;
L_08AA5FE8:;
    sp = sp + 16;
    return;
L_08AA5FF4:;
    func_08AA5FC8(a0);
    goto L_08AA5FFC;
L_08AA5FFC:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA5FE4; }
    goto L_08AA6008;
L_08AA6008:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6010;
L_08AA6010:;
    goto L_08AA5FE8;
}

/* 08AA6018 */
void func_08AA6018(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6018:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA6044; }
    goto L_08AA6034;
L_08AA6034:;
    goto L_08AA6038;
L_08AA6038:;
    sp = sp + 16;
    return;
L_08AA6044:;
    func_08AA6018(a0);
    goto L_08AA604C;
L_08AA604C:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA6034; }
    goto L_08AA6058;
L_08AA6058:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6060;
L_08AA6060:;
    goto L_08AA6038;
}

/* 08AA6068 */
void func_08AA6068(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6068:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA60A0; }
    goto L_08AA6084;
L_08AA6084:;
    ST32(a0, 0);
    goto L_08AA6088;
L_08AA6088:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA60A0:;
    a0 = a1 << 3;
    a0 = a0 - a1;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA60B0;
L_08AA60B0:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA6100; }
    goto L_08AA60BC;
L_08AA60BC:;
    v0 = D_08AEB6E0 - (-18720);
    v1 = D_08AEB6E4 - (-18716);
    f1 = BITSF(LD32(v0-18720));
    f0 = BITSF(LD32(v1-18716));
    v0 = a1 + 16;
    v1 = (u32)-1;
    goto L_08AA60D4;
L_08AA60D4:;
    a0 = a0 - 1;
    ST32(v0-4, 0);
    ST32(v0, FBITS(f1));
    ST32(v0+8, FBITS(f1));
    ST32(v0+16, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(v0+20, FBITS(f0));
    ST32(v0+24, 0);
    cnd_ = a0 != v1;
    v0 = v0 + 56;
    if (cnd_) { goto L_08AA60D4; }
    goto L_08AA6100;
L_08AA6100:;
    ST32(s1, a1);
    goto L_08AA6088;
}

/* 08AA6108 */
void func_08AA6108(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6108:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA6140; }
    goto L_08AA6124;
L_08AA6124:;
    ST32(a0, 0);
    goto L_08AA6128;
L_08AA6128:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA6140:;
    a0 = a1 << 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6148;
L_08AA6148:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA6160; }
    goto L_08AA6150;
L_08AA6150:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA6158;
L_08AA6158:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA6158; }
    goto L_08AA6160;
L_08AA6160:;
    ST32(s1, v0);
    goto L_08AA6128;
}

/* 08AA6168 */
void func_08AA6168(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6168:;
    sp = sp - 16;
    v0 = a1 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA619C; }
    goto L_08AA6184;
L_08AA6184:;
    ST32(s0, 0);
    goto L_08AA6188;
L_08AA6188:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA619C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA61A4;
L_08AA61A4:;
    ST32(s0, v0);
    goto L_08AA6188;
}

/* 08AA61AC */
void func_08AA61AC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA61AC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA61DC; }
    goto L_08AA61C4;
L_08AA61C4:;
    ST32(s0, 0);
    goto L_08AA61C8;
L_08AA61C8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA61DC:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA61E4;
L_08AA61E4:;
    ST32(s0, v0);
    goto L_08AA61C8;
}

/* 08AA61EC */
void func_08AA61EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA61EC:;
    sp = sp - 16;
    v0 = a1 << 1;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA6220; }
    goto L_08AA6208;
L_08AA6208:;
    ST32(s0, 0);
    goto L_08AA620C;
L_08AA620C:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA6220:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6228;
L_08AA6228:;
    ST32(s0, v0);
    goto L_08AA620C;
}

/* 08AA6230 */
rv_t func_08AA6230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA6230:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6240 */
rv_t func_08AA6240(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6240:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA625C;
L_08AA625C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6268 */
rv_t func_08AA6268(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6268:;
    sp = sp - 16;
    v0 = D_08AF0F10 - (3856);
    v0 = v0 + 3856;
    s0 = a0 + 0;
    v1 = LD_U8(a0+41);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08AA62A4; }
    goto L_08AA628C;
L_08AA628C:;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    v0 = D_08AF0EC0 - (3776);
    if (cnd_) { goto L_08AA62A8; }
    goto L_08AA6298;
L_08AA6298:;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA62C0; }
    goto L_08AA62A4;
L_08AA62A4:;
    v0 = D_08AF0EC0 - (3776);
    goto L_08AA62A8;
L_08AA62A8:;
    v0 = v0 + 3776;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA62C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA62C8;
L_08AA62C8:;
    v0 = D_08AF0EC0 - (3776);
    goto L_08AA62A8;
}

/* 08AA62D0 */
rv_t func_08AA62D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA62D0:;
    sp = sp - 16;
    v0 = D_08AF0F10 - (3856);
    v0 = v0 + 3856;
    s0 = a0 + 0;
    v1 = LD_U8(a0+41);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08AA630C; }
    goto L_08AA62F4;
L_08AA62F4:;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    v0 = D_08AF0EC0 - (3776);
    if (cnd_) { goto L_08AA6310; }
    goto L_08AA6300;
L_08AA6300:;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA6330; }
    goto L_08AA630C;
L_08AA630C:;
    v0 = D_08AF0EC0 - (3776);
    goto L_08AA6310;
L_08AA6310:;
    v0 = v0 + 3776;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6320;
L_08AA6320:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA6330:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6338;
L_08AA6338:;
    v0 = D_08AF0EC0 - (3776);
    goto L_08AA6310;
}

/* 08AA6340 */
rv_t func_08AA6340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA6340:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6350 */
rv_t func_08AA6350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6350:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA636C;
L_08AA636C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6378 */
rv_t func_08AA6378(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA6378:;
    v0 = LD32(a0+36);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6380 */
void func_08AA6380(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6380:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA63B8; }
    goto L_08AA639C;
L_08AA639C:;
    ST32(a0, 0);
    goto L_08AA63A0;
L_08AA63A0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA63B8:;
    a0 = 88;
    { s64 p_ = (s64)(s32)a1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA63CC;
L_08AA63CC:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_08AA63FC; }
    goto L_08AA63E0;
L_08AA63E0:;
    a1 = (u32)-1;
    goto L_08AA63E4;
L_08AA63E4:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 88;
    if (cnd_) { goto L_08AA63E4; }
    goto L_08AA63FC;
L_08AA63FC:;
    ST32(s1, v0);
    goto L_08AA63A0;
}

/* 08AA6404 */
void func_08AA6404(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA6404:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA6454; }
    goto L_08AA642C;
L_08AA642C:;
    ST32(a0, 0);
    goto L_08AA6430;
L_08AA6430:;
    v0 = 1;
    sp = sp + 32;
    return;
L_08AA6454:;
    a0 = a1 << 4;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6460;
L_08AA6460:;
    s3 = v0 + 4;
    ST32(s3-4, s2);
    s1 = s3 + 0;
    cnd_ = s2 == 0;
    s0 = s2 - 1;
    if (cnd_) { goto L_08AA648C; }
    goto L_08AA6474;
L_08AA6474:;
    s2 = (u32)-1;
    goto L_08AA6478;
L_08AA6478:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_0881B11C(a0);
    goto L_08AA6484;
L_08AA6484:;
    cnd_ = s0 != s2;
    s1 = s1 + 16;
    if (cnd_) { goto L_08AA6478; }
    goto L_08AA648C;
L_08AA648C:;
    ST32(s4, s3);
    goto L_08AA6430;
}

/* 08AA6494 */
void func_08AA6494(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6494:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA64C4; }
    goto L_08AA64B0;
L_08AA64B0:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA64C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA64CC;
L_08AA64CC:;
    ST32(s0, 0);
    goto L_08AA64B0;
}

/* 08AA64D4 */
u32 func_08AA64D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA64D4:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA6510; }
    goto L_08AA64E0;
L_08AA64E0:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA64EC;
L_08AA64EC:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA6518; }
    goto L_08AA64F8;
L_08AA64F8:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA64EC; }
    goto L_08AA650C;
L_08AA650C:;
    v1 = 0 + 0;
    goto L_08AA6510;
L_08AA6510:;
    v0 = v1 + 0;
    return v0;
L_08AA6518:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA6510; }
    goto L_08AA6520;
L_08AA6520:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AA65B0; }
    goto L_08AA652C;
L_08AA652C:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA65A8; }
    goto L_08AA6538;
L_08AA6538:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA65A0; }
    goto L_08AA6544;
L_08AA6544:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AA654C;
L_08AA654C:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA6554;
L_08AA6554:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA6590; }
    goto L_08AA6564;
L_08AA6564:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AA6578; }
    goto L_08AA6570;
L_08AA6570:;
    v1 = v0 + 0;
    goto L_08AA6554;
L_08AA6578:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AA6510;
L_08AA6590:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA6554; }
    goto L_08AA6598;
L_08AA6598:;
    ST32(v1+8, t1);
    goto L_08AA6578;
L_08AA65A0:;
    t1 = LD32(t0+8);
    goto L_08AA654C;
L_08AA65A8:;
    ST32(a3, v1);
    goto L_08AA6578;
L_08AA65B0:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA6578;
}

/* 08AA65BC */
rv_t func_08AA65BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA65BC:;
    sp = sp - 32;
    a2 = a2 & 0xff;
    s3 = a3 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA669C; }
    goto L_08AA65F0;
L_08AA65F0:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA661C; }
    goto L_08AA65F8;
L_08AA65F8:;
    a1 = 0 + 0;
    goto L_08AA65FC;
L_08AA65FC:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA661C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6624;
L_08AA6624:;
    a1 = v0 + 0;
    v0 = LD32(s2+8);
    a2 = LD32(s2+4);
    ST32(a1+8, 0);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s2+8, v0);
    ST32(a1+12, 0);
    ST32(a1, s1);
    ST32(a1+4, v1);
    cnd_ = a2 == 0;
    ST32(s2, a1);
    if (cnd_) { goto L_08AA6684; }
    goto L_08AA6654;
L_08AA6654:;
    a3 = LD32(a2+12);
    v0 = LD32(a2+8);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08AA6694; }
    goto L_08AA6668;
L_08AA6668:;
    v1 = a3 + 1;
    a0 = LD32(a2+4);
    ST32(a2+12, v1);
    v0 = a3 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    ST32(a1+4, v1);
    goto L_08AA6684;
L_08AA6684:;
    v0 = LD32(s2);
    goto L_08AA6688;
L_08AA6688:;
    v1 = LD32(v0+4);
    ST32(s3, v1);
    goto L_08AA65F8;
L_08AA6694:;
    ST32(a1+4, v0);
    goto L_08AA6684;
L_08AA669C:;
    v1 = LD32(a1);
    goto L_08AA66A0;
L_08AA66A0:;
    a0 = a1 + 12;
    s0 = a1 + 8;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AA6740; }
    goto L_08AA66B4;
L_08AA66B4:;
    a1 = LD32(s0);
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08AA66A0; }
    goto L_08AA66C0;
L_08AA66C0:;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA65FC; }
    goto L_08AA66C8;
L_08AA66C8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA66D0;
L_08AA66D0:;
    a1 = v0 + 0;
    v0 = LD32(s2+8);
    a2 = LD32(s2+4);
    ST32(a1+8, 0);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s2+8, v0);
    ST32(a1+12, 0);
    ST32(a1, s1);
    ST32(a1+4, v1);
    cnd_ = a2 == 0;
    ST32(s0, a1);
    if (cnd_) { goto L_08AA6730; }
    goto L_08AA6700;
L_08AA6700:;
    a3 = LD32(a2+12);
    v0 = LD32(a2+8);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (u32)-1; goto L_08AA6738; }
    goto L_08AA6714;
L_08AA6714:;
    v1 = a3 + 1;
    a0 = LD32(a2+4);
    ST32(a2+12, v1);
    v0 = a3 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    ST32(a1+4, v1);
    goto L_08AA6730;
L_08AA6730:;
    v0 = LD32(s0);
    goto L_08AA6688;
L_08AA6738:;
    ST32(a1+4, v0);
    goto L_08AA6730;
L_08AA6740:;
    v0 = LD32(a1+4);
    a1 = 1;
    ST32(s3, v0);
    goto L_08AA65FC;
}

/* 08AA6750 */
void func_08AA6750(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6750:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA67B0; }
    goto L_08AA6774;
L_08AA6774:;
    v0 = LD32(s0+12);
    goto L_08AA6778;
L_08AA6778:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA67A0; }
    goto L_08AA6784;
L_08AA6784:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA678C;
L_08AA678C:;
    sp = sp + 16;
    return;
L_08AA67A0:;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_08AA67A8;
L_08AA67A8:;
    goto L_08AA6784;
L_08AA67B0:;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_08AA67B8;
L_08AA67B8:;
    v0 = LD32(s0+12);
    goto L_08AA6778;
}

/* 08AA67C0 */
void func_08AA67C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA67C0:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA6834; }
    goto L_08AA67EC;
L_08AA67EC:;
    v0 = LD32(s0+12);
    goto L_08AA67F0;
L_08AA67F0:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA6824; }
    goto L_08AA6800;
L_08AA6800:;
    a0 = LD32(s0);
    goto L_08AA6804;
L_08AA6804:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA680C;
L_08AA680C:;
    sp = sp + 16;
    return;
L_08AA6824:;
    func_08AA67C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA682C;
L_08AA682C:;
    a0 = LD32(s0);
    goto L_08AA6804;
L_08AA6834:;
    func_08AA67C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA683C;
L_08AA683C:;
    v0 = LD32(s0+12);
    goto L_08AA67F0;
}

/* 08AA6844 */
void func_08AA6844(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6844:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA68A4; }
    goto L_08AA6868;
L_08AA6868:;
    v0 = LD32(s0+12);
    goto L_08AA686C;
L_08AA686C:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA6894; }
    goto L_08AA6878;
L_08AA6878:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6880;
L_08AA6880:;
    sp = sp + 16;
    return;
L_08AA6894:;
    func_08AA6844(a0, a1, t1, t2, t3);
    goto L_08AA689C;
L_08AA689C:;
    goto L_08AA6878;
L_08AA68A4:;
    func_08AA6844(a0, a1, t1, t2, t3);
    goto L_08AA68AC;
L_08AA68AC:;
    v0 = LD32(s0+12);
    goto L_08AA686C;
}

/* 08AA68B4 */
u64 func_08AA68B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA68B4:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA68F8; }
    goto L_08AA68CC;
L_08AA68CC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA68D4;
L_08AA68D4:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA690C; }
    goto L_08AA68EC;
L_08AA68EC:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA68D4; }
    goto L_08AA68F8;
L_08AA68F8:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA690C; }
    goto L_08AA6904;
L_08AA6904:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA691C; }
    goto L_08AA690C;
L_08AA690C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA691C:;
    a2 = 1;
    { u64 r_ = func_08AA68B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6924;
L_08AA6924:;
    t0 = v0 + 0;
    goto L_08AA690C;
}

/* 08AA692C */
void func_08AA692C(void)
{
L_08AA692C:;
    return;
}

/* 08AA6934 */
rv_t func_08AA6934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6934:;
    sp = sp - 16;
    v1 = D_08AF0F80 - (3968);
    v0 = a0 + 0;
    a1 = LD32(a0+4);
    v1 = v1 + 3968;
    ST32(v0, v1);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AA6964; }
    goto L_08AA6958;
L_08AA6958:;
    goto L_08AA695C;
L_08AA695C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA6964:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA696C;
L_08AA696C:;
    goto L_08AA695C;
}

/* 08AA6974 */
rv_t func_08AA6974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6974:;
    sp = sp - 16;
    v0 = D_08AF0F80 - (3968);
    s0 = a0 + 0;
    v0 = v0 + 3968;
    v1 = LD32(a0+4);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA69B4; }
    goto L_08AA699C;
L_08AA699C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA69A4;
L_08AA69A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA69B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA69BC;
L_08AA69BC:;
    goto L_08AA699C;
}

/* 08AA69C4 */
rv_t func_08AA69C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AA69C4:;
    v0 = LD32(a0+12);
    v1 = ~(0 | a1);
    v1 = 0 < v1;
    a2 = v0 - 1;
    v0 = (s32)0 < (s32)v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a3 = a2 << 2;
    if (cnd_) { goto L_08AA69F4; }
    goto L_08AA69E4;
L_08AA69E4:;
    v0 = LD32(a0+4);
    ST32(a0+12, a2);
    v0 = a3 + v0;
    ST32(v0, a1);
    goto L_08AA69F4;
L_08AA69F4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA69FC */
rv_t func_08AA69FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA69FC:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0+16);
    v1 = LD32(a0+8);
    v0 = v0 + 1;
    cnd_ = v1 != 0;
    ST32(a0+16, v0);
    if (cnd_) { goto L_08AA6B10; }
    goto L_08AA6A38;
L_08AA6A38:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6A40;
L_08AA6A40:;
    ST32(v0+8, 0);
    goto L_08AA6A44;
L_08AA6A44:;
    s1 = v0 + 0;
    ST32(v0+4, 0);
    s0 = LD32(s2);
    cnd_ = s0 == 0;
    ST32(v0, s4);
    if (cnd_) { goto L_08AA6A98; }
    goto L_08AA6A58;
L_08AA6A58:;
    a1 = LD32(s0);
    goto L_08AA6A5C;
L_08AA6A5C:;
    t_ = s3;
    a0 = LD32(s1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6A64;
L_08AA6A64:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08AA6AE4; }
    goto L_08AA6A6C;
L_08AA6A6C:;
    a1 = LD32(s0+8);
    cnd_ = a1 == 0;
    if (cnd_) { ST32(s1+8, a1); goto L_08AA6AC4; }
    goto L_08AA6A78;
L_08AA6A78:;
    a1 = LD32(a1);
    t_ = s3;
    a0 = LD32(s1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6A84;
L_08AA6A84:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_08AA6AC0; }
    goto L_08AA6A8C;
L_08AA6A8C:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_08AA6A5C; }
    goto L_08AA6A98;
L_08AA6A98:;
    ST32(s2+4, s1);
    ST32(s2, s1);
    goto L_08AA6AA0;
L_08AA6AA0:;
    goto L_08AA6AA4;
L_08AA6AA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA6AC0:;
    ST32(s1+8, a1);
    goto L_08AA6AC4;
L_08AA6AC4:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    ST32(s1+4, s0);
    if (cnd_) { goto L_08AA6ADC; }
    goto L_08AA6AD0;
L_08AA6AD0:;
    ST32(v0+4, s1);
    goto L_08AA6AD4;
L_08AA6AD4:;
    ST32(s0+8, s1);
    goto L_08AA6AA0;
L_08AA6ADC:;
    ST32(s2+4, s1);
    goto L_08AA6AD4;
L_08AA6AE4:;
    ST32(s1+8, s0);
    ST32(s1+4, v0);
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+8, s1); goto L_08AA6AF8; }
    goto L_08AA6AF8;
L_08AA6AF8:;
    ST32(s0+4, s1);
    v0 = LD32(s2);
    cnd_ = s0 != v0;
    if (cnd_) { goto L_08AA6AA4; }
    goto L_08AA6B08;
L_08AA6B08:;
    ST32(s2, s1);
    goto L_08AA6AA4;
L_08AA6B10:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6B18;
L_08AA6B18:;
    ST32(v0+8, 0);
    goto L_08AA6A44;
}

/* 08AA6B20 */
rv_t func_08AA6B20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6B20:;
    a0 = D_08B25B00 - (23296);
    sp = sp - 16;
    a0 = a0 + 23296;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6B34;
L_08AA6B34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6B40 */
rv_t func_08AA6B40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6B40:;
    a1 = a0 + 0;
    a0 = D_08B25B00 - (23296);
    sp = sp - 16;
    a0 = a0 + 23296;
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6B58;
L_08AA6B58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6B64 */
rv_t func_08AA6B64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08AA6B64:;
    f1 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(a1+16));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = (u32)-1;
    if (cnd_) { goto L_08AA6B80; }
    goto L_08AA6B7C;
L_08AA6B7C:;
    v0 = 1;
    goto L_08AA6B80;
L_08AA6B80:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA6B88 */
rv_t func_08AA6B88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6B88:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA6BC8; }
    goto L_08AA6BA4;
L_08AA6BA4:;
    v1 = LD32(s1+12);
    goto L_08AA6BA8;
L_08AA6BA8:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08AA6BE8; }
    goto L_08AA6BB8;
L_08AA6BB8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6BC0;
L_08AA6BC0:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08AA6BA8; }
    goto L_08AA6BC8;
L_08AA6BC8:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA6BE8:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6BF0;
L_08AA6BF0:;
    goto L_08AA6BC0;
}

/* 08AA6BF8 */
void func_08AA6BF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6BF8:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA6C38; }
    goto L_08AA6C14;
L_08AA6C14:;
    v1 = LD32(s1+12);
    goto L_08AA6C18;
L_08AA6C18:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08AA6C58; }
    goto L_08AA6C28;
L_08AA6C28:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6C30;
L_08AA6C30:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08AA6C18; }
    goto L_08AA6C38;
L_08AA6C38:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return;
L_08AA6C58:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6C60;
L_08AA6C60:;
    goto L_08AA6C30;
}

/* 08AA6C68 */
u64 func_08AA6C68(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AA6C68:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08AA6C84; }
    goto L_08AA6C74;
L_08AA6C74:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_08AA6C84:;
    ST32(a0+4, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AA6C8C */
void func_08AA6C8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6C8C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA6CC4; }
    goto L_08AA6CA8;
L_08AA6CA8:;
    v0 = LD32(a0);
    goto L_08AA6CAC;
L_08AA6CAC:;
    cnd_ = v0 == a1;
    if (cnd_) { v1 = LD32(a0+8); goto L_08AA6CD0; }
    goto L_08AA6CB4;
L_08AA6CB4:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AA6CAC; }
    goto L_08AA6CC0;
L_08AA6CC0:;
    goto L_08AA6CC4;
L_08AA6CC4:;
    sp = sp + 16;
    return;
L_08AA6CD0:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AA6D20; }
    goto L_08AA6CD8;
L_08AA6CD8:;
    ST32(v1+4, v0);
    goto L_08AA6CDC;
L_08AA6CDC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, v1); goto L_08AA6CEC; }
    goto L_08AA6CE8;
L_08AA6CE8:;
    ST32(v0+8, v1);
    goto L_08AA6CEC;
L_08AA6CEC:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AA6D10; }
    goto L_08AA6CF8;
L_08AA6CF8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6D00;
L_08AA6D00:;
    v0 = LD32(s0+16);
    goto L_08AA6D04;
L_08AA6D04:;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_08AA6CC0;
L_08AA6D10:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6D18;
L_08AA6D18:;
    v0 = LD32(s0+16);
    goto L_08AA6D04;
L_08AA6D20:;
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    goto L_08AA6CDC;
}

/* 08AA6D2C */
u64 func_08AA6D2C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AA6D2C:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0+8); goto L_08AA6D48; }
    goto L_08AA6D38;
L_08AA6D38:;
    v0 = LD32(a0);
    v1 = LD32(v0);
    ST32(a0+4, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_08AA6D48:;
    ST32(a0+4, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08AA6D50 */
void func_08AA6D50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6D50:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA6D88; }
    goto L_08AA6D6C;
L_08AA6D6C:;
    v0 = LD32(a0);
    goto L_08AA6D70;
L_08AA6D70:;
    cnd_ = v0 == a1;
    if (cnd_) { v1 = LD32(a0+8); goto L_08AA6D94; }
    goto L_08AA6D78;
L_08AA6D78:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AA6D70; }
    goto L_08AA6D84;
L_08AA6D84:;
    goto L_08AA6D88;
L_08AA6D88:;
    sp = sp + 16;
    return;
L_08AA6D94:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AA6DE4; }
    goto L_08AA6D9C;
L_08AA6D9C:;
    ST32(v1+4, v0);
    goto L_08AA6DA0;
L_08AA6DA0:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, v1); goto L_08AA6DB0; }
    goto L_08AA6DAC;
L_08AA6DAC:;
    ST32(v0+8, v1);
    goto L_08AA6DB0;
L_08AA6DB0:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AA6DD4; }
    goto L_08AA6DBC;
L_08AA6DBC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6DC4;
L_08AA6DC4:;
    v0 = LD32(s0+16);
    goto L_08AA6DC8;
L_08AA6DC8:;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_08AA6D84;
L_08AA6DD4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6DDC;
L_08AA6DDC:;
    v0 = LD32(s0+16);
    goto L_08AA6DC8;
L_08AA6DE4:;
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    goto L_08AA6DA0;
}

/* 08AA6DF0 */
u64 func_08AA6DF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA6DF0:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA6E2C; }
    goto L_08AA6DFC;
L_08AA6DFC:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA6E08;
L_08AA6E08:;
    a2 = t0 + 28;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA6E34; }
    goto L_08AA6E14;
L_08AA6E14:;
    a3 = t0 + 24;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA6E08; }
    goto L_08AA6E28;
L_08AA6E28:;
    v1 = 0 + 0;
    goto L_08AA6E2C;
L_08AA6E2C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA6E34:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA6E2C; }
    goto L_08AA6E3C;
L_08AA6E3C:;
    v1 = LD32(t0+24);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+28); goto L_08AA6ECC; }
    goto L_08AA6E48;
L_08AA6E48:;
    a1 = LD32(t0+28);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA6EC4; }
    goto L_08AA6E54;
L_08AA6E54:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA6EBC; }
    goto L_08AA6E60;
L_08AA6E60:;
    ST32(a3, v1);
    t1 = LD32(t0+28);
    goto L_08AA6E68;
L_08AA6E68:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA6E70;
L_08AA6E70:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+24); goto L_08AA6EAC; }
    goto L_08AA6E80;
L_08AA6E80:;
    v0 = LD32(v1+28);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+28, t1); goto L_08AA6E94; }
    goto L_08AA6E8C;
L_08AA6E8C:;
    v1 = v0 + 0;
    goto L_08AA6E70;
L_08AA6E94:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+24, 0);
    ST32(t0+28, 0);
    goto L_08AA6E2C;
L_08AA6EAC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA6E70; }
    goto L_08AA6EB4;
L_08AA6EB4:;
    ST32(v1+24, t1);
    goto L_08AA6E94;
L_08AA6EBC:;
    t1 = LD32(t0+24);
    goto L_08AA6E68;
L_08AA6EC4:;
    ST32(a3, v1);
    goto L_08AA6E94;
L_08AA6ECC:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA6E94;
}

/* 08AA6ED8 */
void func_08AA6ED8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA6ED8:;
    sp = sp - 16;
    s2 = a1 + 12;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+24);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA6F70; }
    goto L_08AA6F04;
L_08AA6F04:;
    v0 = LD32(s0+28);
    goto L_08AA6F08;
L_08AA6F08:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA6F60; }
    goto L_08AA6F14;
L_08AA6F14:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AA6F3C; }
    goto L_08AA6F1C;
L_08AA6F1C:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA6F50; }
    goto L_08AA6F28;
L_08AA6F28:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6F38;
L_08AA6F38:;
    goto L_08AA6F3C;
L_08AA6F3C:;
    sp = sp + 16;
    return;
L_08AA6F50:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA6F58;
L_08AA6F58:;
    ST32(s0+12, 0);
    goto L_08AA6F28;
L_08AA6F60:;
    func_08AA6ED8(a0, a1, t1, t2, t3);
    goto L_08AA6F68;
L_08AA6F68:;
    goto L_08AA6F14;
L_08AA6F70:;
    func_08AA6ED8(a0, a1, t1, t2, t3);
    goto L_08AA6F78;
L_08AA6F78:;
    v0 = LD32(s0+28);
    goto L_08AA6F08;
}

/* 08AA6F80 */
u32 func_08AA6F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA6F80:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+24);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA7010; }
    goto L_08AA6FB4;
L_08AA6FB4:;
    v0 = LD32(s0+28);
    goto L_08AA6FB8;
L_08AA6FB8:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s2 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA6FDC; }
    goto L_08AA6FCC;
L_08AA6FCC:;
    v0 = func_08AA6F80(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA6FD4;
L_08AA6FD4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA6FF0; }
    goto L_08AA6FDC;
L_08AA6FDC:;
    a0 = LD32(s0);
    a1 = s0 + 4;
    t_ = s3;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA6FEC;
L_08AA6FEC:;
    v1 = v0 + 0;
    goto L_08AA6FF0;
L_08AA6FF0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08AA7010:;
    v0 = func_08AA6F80(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA7018;
L_08AA7018:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA6FF0; }
    goto L_08AA7020;
L_08AA7020:;
    v0 = LD32(s0+28);
    goto L_08AA6FB8;
}

/* 08AA7028 */
u64 func_08AA7028(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA7028:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA70C8; }
    goto L_08AA7050;
L_08AA7050:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AA70B4; }
    goto L_08AA705C;
L_08AA705C:;
    v0 = s3 << 2;
    goto L_08AA7060;
L_08AA7060:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s3 = s3 + 1;
    { u64 r_ = func_08AA6DF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7074;
L_08AA7074:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08AA709C; }
    goto L_08AA707C;
L_08AA707C:;
    v0 = LD32(v0+12);
    s2 = s0 + 12;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA70F0; }
    goto L_08AA708C;
L_08AA708C:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA709C;
L_08AA709C:;
    v0 = LD32(s1+16);
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_08AA70B4; }
    goto L_08AA70AC;
L_08AA70AC:;
    v0 = s3 << 2;
    goto L_08AA7060;
L_08AA70B4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA70E0; }
    goto L_08AA70BC;
L_08AA70BC:;
    ST32(s1+16, 0);
    goto L_08AA70C0;
L_08AA70C0:;
    ST32(s1+12, 0);
    goto L_08AA70C8;
L_08AA70C8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA70E0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA70E8;
L_08AA70E8:;
    ST32(s1+16, 0);
    goto L_08AA70C0;
L_08AA70F0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA70F8;
L_08AA70F8:;
    ST32(s0+12, 0);
    goto L_08AA708C;
}

/* 08AA7100 */
void func_08AA7100(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7100:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+24);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA7174; }
    goto L_08AA712C;
L_08AA712C:;
    v0 = LD32(s0+28);
    goto L_08AA7130;
L_08AA7130:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA7164; }
    goto L_08AA7140;
L_08AA7140:;
    a0 = LD32(s0);
    goto L_08AA7144;
L_08AA7144:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA714C;
L_08AA714C:;
    sp = sp + 16;
    return;
L_08AA7164:;
    func_08AA7100(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA716C;
L_08AA716C:;
    a0 = LD32(s0);
    goto L_08AA7144;
L_08AA7174:;
    func_08AA7100(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA717C;
L_08AA717C:;
    v0 = LD32(s0+28);
    goto L_08AA7130;
}

/* 08AA7184 */
u64 func_08AA7184(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7184:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA71C8; }
    goto L_08AA719C;
L_08AA719C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA71A4;
L_08AA71A4:;
    a0 = v0 + 28;
    a3 = v0 + 24;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA71DC; }
    goto L_08AA71BC;
L_08AA71BC:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA71A4; }
    goto L_08AA71C8;
L_08AA71C8:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA71DC; }
    goto L_08AA71D4;
L_08AA71D4:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA71EC; }
    goto L_08AA71DC;
L_08AA71DC:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA71EC:;
    a2 = 1;
    { u64 r_ = func_08AA7184(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA71F4;
L_08AA71F4:;
    t0 = v0 + 0;
    goto L_08AA71DC;
}

/* 08AA71FC */
void func_08AA71FC(u32 a0)
{
L_08AA71FC:;
    ST32(a0+8, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 08AA720C */
void func_08AA720C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA720C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA723C; }
    goto L_08AA7228;
L_08AA7228:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA723C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7244;
L_08AA7244:;
    ST32(s0, 0);
    goto L_08AA7228;
}

/* 08AA724C */
void func_08AA724C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA724C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA727C; }
    goto L_08AA7268;
L_08AA7268:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA727C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7284;
L_08AA7284:;
    ST32(s0, 0);
    goto L_08AA7268;
}

/* 08AA728C */
rv_t func_08AA728C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA728C:;
    v0 = D_08AEB8B0 - (-18256);
    f0 = BITSF(LD32(v0-18256));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7298 */
rv_t func_08AA7298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7298:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA72A0 */
rv_t func_08AA72A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA72A0:;
    v0 = LD_U8(a0+136);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA72A8 */
rv_t func_08AA72A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA72A8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA72B0 */
rv_t func_08AA72B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA72B0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA72B8 */
void func_08AA72B8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA72B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA72E8; }
    goto L_08AA72D4;
L_08AA72D4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA72E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA72F0;
L_08AA72F0:;
    ST32(s0, 0);
    goto L_08AA72D4;
}

/* 08AA72F8 */
void func_08AA72F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA72F8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA7328; }
    goto L_08AA7314;
L_08AA7314:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA7328:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7330;
L_08AA7330:;
    ST32(s0, 0);
    goto L_08AA7314;
}

/* 08AA7338 */
rv_t func_08AA7338(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7338:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7340 */
rv_t func_08AA7340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7340:;
    v0 = LD32(a0+4);
    v0 = v0 ^ 0x2;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7350 */
rv_t func_08AA7350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7350:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7358 */
rv_t func_08AA7358(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7358:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7360 */
rv_t func_08AA7360(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7360:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7368 */
rv_t func_08AA7368(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7368:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7370 */
rv_t func_08AA7370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7370:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7378 */
rv_t func_08AA7378(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7378:;
    v0 = LD32(a0+4);
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7384 */
rv_t func_08AA7384(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7384:;
    v0 = LD32(a0+4);
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7394 */
rv_t func_08AA7394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7394:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA739C */
rv_t func_08AA739C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA739C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73A4 */
rv_t func_08AA73A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08AA73A4:;
    v0 = a0 + 56;
    f2 = BITSF(LD32(a0+56));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    ST32(a1, FBITS(f2));
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73C4 */
rv_t func_08AA73C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA73C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73CC */
rv_t func_08AA73CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA73CC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73D4 */
rv_t func_08AA73D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA73D4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73DC */
rv_t func_08AA73DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA73DC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73E4 */
rv_t func_08AA73E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA73E4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73EC */
rv_t func_08AA73EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA73EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA73F4 */
rv_t func_08AA73F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA73F4:;
    v0 = D_08AF11C0 - (4544);
    v0 = v0 + 4544;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0883F214(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7410;
L_08AA7410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA741C */
rv_t func_08AA741C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA741C:;
    v0 = D_08AF11C0 - (4544);
    v0 = v0 + 4544;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883F214(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA743C;
L_08AA743C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7444;
L_08AA7444:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7454 */
rv_t func_08AA7454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7454:;
    v0 = LD32(a0+152);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA745C */
rv_t func_08AA745C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA745C:;
    v0 = LD32(a0+152);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7464 */
rv_t func_08AA7464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7464:;
    sp = sp - 16;
    v0 = D_08AF1150 - (4432);
    v0 = v0 + 4432;
    s0 = a0 + 0;
    s1 = s0 + 140;
    v1 = LD32(a0+140);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA74C0; }
    goto L_08AA7494;
L_08AA7494:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA74A4;
L_08AA74A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA74AC;
L_08AA74AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA74C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA74C8;
L_08AA74C8:;
    ST32(s0+140, 0);
    goto L_08AA7494;
}

/* 08AA74D0 */
rv_t func_08AA74D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA74D0:;
    sp = sp - 16;
    v0 = D_08AF1150 - (4432);
    v0 = v0 + 4432;
    s0 = a0 + 0;
    s1 = s0 + 140;
    v1 = LD32(a0+140);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7524; }
    goto L_08AA7500;
L_08AA7500:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7510;
L_08AA7510:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7524:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA752C;
L_08AA752C:;
    ST32(s0+140, 0);
    goto L_08AA7500;
}

/* 08AA7534 */
rv_t func_08AA7534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7534:;
    sp = sp - 16;
    v0 = D_08AF1150 - (4432);
    v0 = v0 + 4432;
    s0 = a0 + 0;
    s1 = s0 + 140;
    v1 = LD32(a0+140);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7588; }
    goto L_08AA7564;
L_08AA7564:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7574;
L_08AA7574:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7588:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7590;
L_08AA7590:;
    ST32(s0+140, 0);
    goto L_08AA7564;
}

/* 08AA7598 */
rv_t func_08AA7598(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7598:;
    sp = sp - 16;
    v0 = D_08AF1150 - (4432);
    v0 = v0 + 4432;
    s0 = a0 + 0;
    s1 = s0 + 140;
    v1 = LD32(a0+140);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA75F4; }
    goto L_08AA75C8;
L_08AA75C8:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA75D8;
L_08AA75D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA75E0;
L_08AA75E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA75F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA75FC;
L_08AA75FC:;
    ST32(s0+140, 0);
    goto L_08AA75C8;
}

/* 08AA7604 */
rv_t func_08AA7604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7604:;
    v0 = D_08AF1360 - (4960);
    v0 = v0 + 4960;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7620;
L_08AA7620:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA762C */
rv_t func_08AA762C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA762C:;
    v0 = D_08AF1360 - (4960);
    v0 = v0 + 4960;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA764C;
L_08AA764C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7654;
L_08AA7654:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7664 */
rv_t func_08AA7664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7664:;
    v0 = D_08AF1070 - (4208);
    v0 = v0 + 4208;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7684;
L_08AA7684:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA768C;
L_08AA768C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA769C */
rv_t func_08AA769C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA769C:;
    v0 = D_08AF1070 - (4208);
    v0 = v0 + 4208;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA76B8;
L_08AA76B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA76C4 */
rv_t func_08AA76C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA76C4:;
    v0 = D_08AF1000 - (4096);
    v0 = v0 + 4096;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 120;
    { rv_t r_ = func_088D0994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA76E8;
L_08AA76E8:;
    v0 = D_08AF1070 - (4208);
    v0 = v0 + 4208;
    ST32(s0, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA76FC;
L_08AA76FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA770C */
rv_t func_08AA770C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA770C:;
    v0 = D_08AF1000 - (4096);
    v0 = v0 + 4096;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 120;
    { rv_t r_ = func_088D0994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7730;
L_08AA7730:;
    v0 = D_08AF1070 - (4208);
    v0 = v0 + 4208;
    ST32(s0, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_0883E820(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA7744;
L_08AA7744:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA774C;
L_08AA774C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA775C */
rv_t func_08AA775C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA775C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7764 */
rv_t func_08AA7764(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7764:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA776C */
rv_t func_08AA776C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA776C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7774 */
rv_t func_08AA7774(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7774:;
    sp = sp - 16;
    v0 = D_08AF1460 - (5216);
    v0 = v0 + 5216;
    s0 = a0 + 0;
    s1 = s0 + 48;
    v1 = LD32(a0+48);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA77C8; }
    goto L_08AA77A4;
L_08AA77A4:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA77B4;
L_08AA77B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA77C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA77D0;
L_08AA77D0:;
    ST32(s0+48, 0);
    goto L_08AA77A4;
}

/* 08AA77D8 */
rv_t func_08AA77D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA77D8:;
    sp = sp - 16;
    v0 = D_08AF1460 - (5216);
    v0 = v0 + 5216;
    s0 = a0 + 0;
    s1 = s0 + 48;
    v1 = LD32(a0+48);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7834; }
    goto L_08AA7808;
L_08AA7808:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7818;
L_08AA7818:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7820;
L_08AA7820:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7834:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA783C;
L_08AA783C:;
    ST32(s0+48, 0);
    goto L_08AA7808;
}

/* 08AA7844 */
rv_t func_08AA7844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7844:;
    v0 = 2;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA784C */
rv_t func_08AA784C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA784C:;
    v0 = D_08AF1418 - (5144);
    v0 = v0 + 5144;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7868;
L_08AA7868:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7874 */
rv_t func_08AA7874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7874:;
    v0 = D_08AF1418 - (5144);
    v0 = v0 + 5144;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7894;
L_08AA7894:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA789C;
L_08AA789C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA78AC */
rv_t func_08AA78AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA78AC:;
    v0 = 3;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA78B4 */
rv_t func_08AA78B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA78B4:;
    v0 = D_08AF13D0 - (5072);
    v0 = v0 + 5072;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA78D0;
L_08AA78D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA78DC */
rv_t func_08AA78DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA78DC:;
    v0 = D_08AF13D0 - (5072);
    v0 = v0 + 5072;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08842124(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA78FC;
L_08AA78FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7904;
L_08AA7904:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA7914 */
rv_t func_08AA7914(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA7914:;
    v0 = 5;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA791C */
u64 func_08AA791C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AA791C:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA797C; }
    goto L_08AA792C;
L_08AA792C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA797C; }
    goto L_08AA7950;
L_08AA7950:;
    a3 = LD32(a0);
    goto L_08AA7954;
L_08AA7954:;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AA7984; }
    goto L_08AA796C;
L_08AA796C:;
    a0 = LD32(a0+4);
    goto L_08AA7970;
L_08AA7970:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AA7954; }
    goto L_08AA7978;
L_08AA7978:;
    a3 = 0 + 0;
    goto L_08AA797C;
L_08AA797C:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA7984:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AA79A0; }
    goto L_08AA798C;
L_08AA798C:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA7970; }
    goto L_08AA799C;
L_08AA799C:;
    v0 = LD_U8(a0+8);
    goto L_08AA79A0;
L_08AA79A0:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA7970; }
    goto L_08AA79A8;
L_08AA79A8:;
    goto L_08AA797C;
}

/* 08AA79B0 */
u32 func_08AA79B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AA79B0:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA7A10; }
    goto L_08AA79C0;
L_08AA79C0:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA7A10; }
    goto L_08AA79E4;
L_08AA79E4:;
    a3 = LD32(a0);
    goto L_08AA79E8;
L_08AA79E8:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AA7A18; }
    goto L_08AA7A00;
L_08AA7A00:;
    a0 = LD32(a0+4);
    goto L_08AA7A04;
L_08AA7A04:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AA79E8; }
    goto L_08AA7A0C;
L_08AA7A0C:;
    a3 = 0 + 0;
    goto L_08AA7A10;
L_08AA7A10:;
    v0 = a3 + 0;
    return v0;
L_08AA7A18:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AA7A34; }
    goto L_08AA7A20;
L_08AA7A20:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA7A04; }
    goto L_08AA7A30;
L_08AA7A30:;
    v0 = LD_U8(a0+8);
    goto L_08AA7A34;
L_08AA7A34:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA7A04; }
    goto L_08AA7A3C;
L_08AA7A3C:;
    goto L_08AA7A10;
}

/* 08AA7A44 */
u64 func_08AA7A44(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AA7A44:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AA7AA4; }
    goto L_08AA7A54;
L_08AA7A54:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA7AA4; }
    goto L_08AA7A78;
L_08AA7A78:;
    a3 = LD32(a0);
    goto L_08AA7A7C;
L_08AA7A7C:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AA7AAC; }
    goto L_08AA7A94;
L_08AA7A94:;
    a0 = LD32(a0+4);
    goto L_08AA7A98;
L_08AA7A98:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AA7A7C; }
    goto L_08AA7AA0;
L_08AA7AA0:;
    a3 = 0 + 0;
    goto L_08AA7AA4;
L_08AA7AA4:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA7AAC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AA7AC8; }
    goto L_08AA7AB4;
L_08AA7AB4:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA7A98; }
    goto L_08AA7AC4;
L_08AA7AC4:;
    v0 = LD_U8(a0+8);
    goto L_08AA7AC8;
L_08AA7AC8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AA7A98; }
    goto L_08AA7AD0;
L_08AA7AD0:;
    goto L_08AA7AA4;
}

/* 08AA7AD8 */
rv_t func_08AA7AD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7AD8:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7B54; }
    goto L_08AA7B0C;
L_08AA7B0C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA7B44; }
    goto L_08AA7B24;
L_08AA7B24:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7B44:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7B4C;
L_08AA7B4C:;
    ST32(s0+20, 0);
    goto L_08AA7B24;
L_08AA7B54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7B5C;
L_08AA7B5C:;
    ST32(s0+44, 0);
    goto L_08AA7B0C;
}

/* 08AA7B64 */
rv_t func_08AA7B64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7B64:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7BE8; }
    goto L_08AA7B98;
L_08AA7B98:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA7BD8; }
    goto L_08AA7BB0;
L_08AA7BB0:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7BC0;
L_08AA7BC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7BD8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7BE0;
L_08AA7BE0:;
    ST32(s0+20, 0);
    goto L_08AA7BB0;
L_08AA7BE8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7BF0;
L_08AA7BF0:;
    ST32(s0+44, 0);
    goto L_08AA7B98;
}

/* 08AA7BF8 */
rv_t func_08AA7BF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7BF8:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7C7C; }
    goto L_08AA7C2C;
L_08AA7C2C:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA7C6C; }
    goto L_08AA7C44;
L_08AA7C44:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7C54;
L_08AA7C54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7C6C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7C74;
L_08AA7C74:;
    ST32(s0+20, 0);
    goto L_08AA7C44;
L_08AA7C7C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7C84;
L_08AA7C84:;
    ST32(s0+44, 0);
    goto L_08AA7C2C;
}

/* 08AA7C8C */
rv_t func_08AA7C8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7C8C:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7D08; }
    goto L_08AA7CC0;
L_08AA7CC0:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA7CF8; }
    goto L_08AA7CD8;
L_08AA7CD8:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7CF8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7D00;
L_08AA7D00:;
    ST32(s0+20, 0);
    goto L_08AA7CD8;
L_08AA7D08:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7D10;
L_08AA7D10:;
    ST32(s0+44, 0);
    goto L_08AA7CC0;
}

/* 08AA7D18 */
rv_t func_08AA7D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7D18:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7D94; }
    goto L_08AA7D4C;
L_08AA7D4C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA7D84; }
    goto L_08AA7D64;
L_08AA7D64:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7D84:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7D8C;
L_08AA7D8C:;
    ST32(s0+20, 0);
    goto L_08AA7D64;
L_08AA7D94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7D9C;
L_08AA7D9C:;
    ST32(s0+44, 0);
    goto L_08AA7D4C;
}

/* 08AA7DA4 */
rv_t func_08AA7DA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7DA4:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7E28; }
    goto L_08AA7DD8;
L_08AA7DD8:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA7E18; }
    goto L_08AA7DF0;
L_08AA7DF0:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7E00;
L_08AA7E00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7E18:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7E20;
L_08AA7E20:;
    ST32(s0+20, 0);
    goto L_08AA7DF0;
L_08AA7E28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7E30;
L_08AA7E30:;
    ST32(s0+44, 0);
    goto L_08AA7DD8;
}

/* 08AA7E38 */
rv_t func_08AA7E38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7E38:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7EB4; }
    goto L_08AA7E6C;
L_08AA7E6C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA7EA4; }
    goto L_08AA7E84;
L_08AA7E84:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7EA4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7EAC;
L_08AA7EAC:;
    ST32(s0+20, 0);
    goto L_08AA7E84;
L_08AA7EB4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7EBC;
L_08AA7EBC:;
    ST32(s0+44, 0);
    goto L_08AA7E6C;
}

/* 08AA7EC4 */
rv_t func_08AA7EC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7EC4:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7F48; }
    goto L_08AA7EF8;
L_08AA7EF8:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA7F38; }
    goto L_08AA7F10;
L_08AA7F10:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7F20;
L_08AA7F20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7F38:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7F40;
L_08AA7F40:;
    ST32(s0+20, 0);
    goto L_08AA7F10;
L_08AA7F48:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7F50;
L_08AA7F50:;
    ST32(s0+44, 0);
    goto L_08AA7EF8;
}

/* 08AA7F58 */
rv_t func_08AA7F58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7F58:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA7FD4; }
    goto L_08AA7F8C;
L_08AA7F8C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA7FC4; }
    goto L_08AA7FA4;
L_08AA7FA4:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA7FC4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7FCC;
L_08AA7FCC:;
    ST32(s0+20, 0);
    goto L_08AA7FA4;
L_08AA7FD4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA7FDC;
L_08AA7FDC:;
    ST32(s0+44, 0);
    goto L_08AA7F8C;
}

/* 08AA7FE4 */
rv_t func_08AA7FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA7FE4:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8068; }
    goto L_08AA8018;
L_08AA8018:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8058; }
    goto L_08AA8030;
L_08AA8030:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8040;
L_08AA8040:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8058:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8060;
L_08AA8060:;
    ST32(s0+20, 0);
    goto L_08AA8030;
L_08AA8068:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8070;
L_08AA8070:;
    ST32(s0+44, 0);
    goto L_08AA8018;
}

/* 08AA8078 */
rv_t func_08AA8078(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8078:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA80F4; }
    goto L_08AA80AC;
L_08AA80AC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA80E4; }
    goto L_08AA80C4;
L_08AA80C4:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA80E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA80EC;
L_08AA80EC:;
    ST32(s0+20, 0);
    goto L_08AA80C4;
L_08AA80F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA80FC;
L_08AA80FC:;
    ST32(s0+44, 0);
    goto L_08AA80AC;
}

/* 08AA8104 */
rv_t func_08AA8104(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8104:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8188; }
    goto L_08AA8138;
L_08AA8138:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8178; }
    goto L_08AA8150;
L_08AA8150:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8160;
L_08AA8160:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8178:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8180;
L_08AA8180:;
    ST32(s0+20, 0);
    goto L_08AA8150;
L_08AA8188:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8190;
L_08AA8190:;
    ST32(s0+44, 0);
    goto L_08AA8138;
}

/* 08AA8198 */
rv_t func_08AA8198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8198:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8214; }
    goto L_08AA81CC;
L_08AA81CC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8204; }
    goto L_08AA81E4;
L_08AA81E4:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8204:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA820C;
L_08AA820C:;
    ST32(s0+20, 0);
    goto L_08AA81E4;
L_08AA8214:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA821C;
L_08AA821C:;
    ST32(s0+44, 0);
    goto L_08AA81CC;
}

/* 08AA8224 */
rv_t func_08AA8224(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8224:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA82A8; }
    goto L_08AA8258;
L_08AA8258:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8298; }
    goto L_08AA8270;
L_08AA8270:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8280;
L_08AA8280:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8298:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA82A0;
L_08AA82A0:;
    ST32(s0+20, 0);
    goto L_08AA8270;
L_08AA82A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA82B0;
L_08AA82B0:;
    ST32(s0+44, 0);
    goto L_08AA8258;
}

/* 08AA82B8 */
rv_t func_08AA82B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA82B8:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8334; }
    goto L_08AA82EC;
L_08AA82EC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8324; }
    goto L_08AA8304;
L_08AA8304:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8324:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA832C;
L_08AA832C:;
    ST32(s0+20, 0);
    goto L_08AA8304;
L_08AA8334:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA833C;
L_08AA833C:;
    ST32(s0+44, 0);
    goto L_08AA82EC;
}

/* 08AA8344 */
rv_t func_08AA8344(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8344:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA83C8; }
    goto L_08AA8378;
L_08AA8378:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA83B8; }
    goto L_08AA8390;
L_08AA8390:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA83A0;
L_08AA83A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA83B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA83C0;
L_08AA83C0:;
    ST32(s0+20, 0);
    goto L_08AA8390;
L_08AA83C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA83D0;
L_08AA83D0:;
    ST32(s0+44, 0);
    goto L_08AA8378;
}

/* 08AA83D8 */
rv_t func_08AA83D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA83D8:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8454; }
    goto L_08AA840C;
L_08AA840C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8444; }
    goto L_08AA8424;
L_08AA8424:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8444:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA844C;
L_08AA844C:;
    ST32(s0+20, 0);
    goto L_08AA8424;
L_08AA8454:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA845C;
L_08AA845C:;
    ST32(s0+44, 0);
    goto L_08AA840C;
}

/* 08AA8464 */
rv_t func_08AA8464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8464:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA84E8; }
    goto L_08AA8498;
L_08AA8498:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA84D8; }
    goto L_08AA84B0;
L_08AA84B0:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA84C0;
L_08AA84C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA84D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA84E0;
L_08AA84E0:;
    ST32(s0+20, 0);
    goto L_08AA84B0;
L_08AA84E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA84F0;
L_08AA84F0:;
    ST32(s0+44, 0);
    goto L_08AA8498;
}

/* 08AA84F8 */
rv_t func_08AA84F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA84F8:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8574; }
    goto L_08AA852C;
L_08AA852C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8564; }
    goto L_08AA8544;
L_08AA8544:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8564:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA856C;
L_08AA856C:;
    ST32(s0+20, 0);
    goto L_08AA8544;
L_08AA8574:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA857C;
L_08AA857C:;
    ST32(s0+44, 0);
    goto L_08AA852C;
}

/* 08AA8584 */
rv_t func_08AA8584(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8584:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8608; }
    goto L_08AA85B8;
L_08AA85B8:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA85F8; }
    goto L_08AA85D0;
L_08AA85D0:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA85E0;
L_08AA85E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA85F8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8600;
L_08AA8600:;
    ST32(s0+20, 0);
    goto L_08AA85D0;
L_08AA8608:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8610;
L_08AA8610:;
    ST32(s0+44, 0);
    goto L_08AA85B8;
}

/* 08AA8618 */
rv_t func_08AA8618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8618:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8694; }
    goto L_08AA864C;
L_08AA864C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8684; }
    goto L_08AA8664;
L_08AA8664:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8684:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA868C;
L_08AA868C:;
    ST32(s0+20, 0);
    goto L_08AA8664;
L_08AA8694:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA869C;
L_08AA869C:;
    ST32(s0+44, 0);
    goto L_08AA864C;
}

/* 08AA86A4 */
rv_t func_08AA86A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA86A4:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8728; }
    goto L_08AA86D8;
L_08AA86D8:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8718; }
    goto L_08AA86F0;
L_08AA86F0:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8700;
L_08AA8700:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8718:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8720;
L_08AA8720:;
    ST32(s0+20, 0);
    goto L_08AA86F0;
L_08AA8728:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8730;
L_08AA8730:;
    ST32(s0+44, 0);
    goto L_08AA86D8;
}

/* 08AA8738 */
rv_t func_08AA8738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8738:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA87B4; }
    goto L_08AA876C;
L_08AA876C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA87A4; }
    goto L_08AA8784;
L_08AA8784:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA87A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA87AC;
L_08AA87AC:;
    ST32(s0+20, 0);
    goto L_08AA8784;
L_08AA87B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA87BC;
L_08AA87BC:;
    ST32(s0+44, 0);
    goto L_08AA876C;
}

/* 08AA87C4 */
rv_t func_08AA87C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA87C4:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8848; }
    goto L_08AA87F8;
L_08AA87F8:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8838; }
    goto L_08AA8810;
L_08AA8810:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8820;
L_08AA8820:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8838:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8840;
L_08AA8840:;
    ST32(s0+20, 0);
    goto L_08AA8810;
L_08AA8848:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8850;
L_08AA8850:;
    ST32(s0+44, 0);
    goto L_08AA87F8;
}

/* 08AA8858 */
rv_t func_08AA8858(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8858:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA88D4; }
    goto L_08AA888C;
L_08AA888C:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA88C4; }
    goto L_08AA88A4;
L_08AA88A4:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA88C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA88CC;
L_08AA88CC:;
    ST32(s0+20, 0);
    goto L_08AA88A4;
L_08AA88D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA88DC;
L_08AA88DC:;
    ST32(s0+44, 0);
    goto L_08AA888C;
}

/* 08AA88E4 */
rv_t func_08AA88E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA88E4:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8968; }
    goto L_08AA8918;
L_08AA8918:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8958; }
    goto L_08AA8930;
L_08AA8930:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8940;
L_08AA8940:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8958:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8960;
L_08AA8960:;
    ST32(s0+20, 0);
    goto L_08AA8930;
L_08AA8968:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8970;
L_08AA8970:;
    ST32(s0+44, 0);
    goto L_08AA8918;
}

/* 08AA8978 */
rv_t func_08AA8978(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8978:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA89F4; }
    goto L_08AA89AC;
L_08AA89AC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA89E4; }
    goto L_08AA89C4;
L_08AA89C4:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA89E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA89EC;
L_08AA89EC:;
    ST32(s0+20, 0);
    goto L_08AA89C4;
L_08AA89F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA89FC;
L_08AA89FC:;
    ST32(s0+44, 0);
    goto L_08AA89AC;
}

/* 08AA8A04 */
rv_t func_08AA8A04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8A04:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8A88; }
    goto L_08AA8A38;
L_08AA8A38:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8A78; }
    goto L_08AA8A50;
L_08AA8A50:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8A60;
L_08AA8A60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8A78:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8A80;
L_08AA8A80:;
    ST32(s0+20, 0);
    goto L_08AA8A50;
L_08AA8A88:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8A90;
L_08AA8A90:;
    ST32(s0+44, 0);
    goto L_08AA8A38;
}

/* 08AA8A98 */
rv_t func_08AA8A98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8A98:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8B14; }
    goto L_08AA8ACC;
L_08AA8ACC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8B04; }
    goto L_08AA8AE4;
L_08AA8AE4:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8B04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8B0C;
L_08AA8B0C:;
    ST32(s0+20, 0);
    goto L_08AA8AE4;
L_08AA8B14:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8B1C;
L_08AA8B1C:;
    ST32(s0+44, 0);
    goto L_08AA8ACC;
}

/* 08AA8B24 */
rv_t func_08AA8B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8B24:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8BA8; }
    goto L_08AA8B58;
L_08AA8B58:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8B98; }
    goto L_08AA8B70;
L_08AA8B70:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8B80;
L_08AA8B80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8B98:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8BA0;
L_08AA8BA0:;
    ST32(s0+20, 0);
    goto L_08AA8B70;
L_08AA8BA8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8BB0;
L_08AA8BB0:;
    ST32(s0+44, 0);
    goto L_08AA8B58;
}

/* 08AA8BB8 */
rv_t func_08AA8BB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8BB8:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s2 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8C34; }
    goto L_08AA8BEC;
L_08AA8BEC:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    s1 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8C24; }
    goto L_08AA8C04;
L_08AA8C04:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8C24:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8C2C;
L_08AA8C2C:;
    ST32(s0+20, 0);
    goto L_08AA8C04;
L_08AA8C34:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8C3C;
L_08AA8C3C:;
    ST32(s0+44, 0);
    goto L_08AA8BEC;
}

/* 08AA8C44 */
rv_t func_08AA8C44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8C44:;
    sp = sp - 16;
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    s0 = a0 + 0;
    s1 = s0 + 44;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8CC8; }
    goto L_08AA8C78;
L_08AA8C78:;
    v0 = LD32(s0+20);
    ST32(s1+4, 0);
    s2 = s0 + 20;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08AA8CB8; }
    goto L_08AA8C90;
L_08AA8C90:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8CA0;
L_08AA8CA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8CB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8CC0;
L_08AA8CC0:;
    ST32(s0+20, 0);
    goto L_08AA8C90;
L_08AA8CC8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8CD0;
L_08AA8CD0:;
    ST32(s0+44, 0);
    goto L_08AA8C78;
}

/* 08AA8CD8 */
rv_t func_08AA8CD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8CD8:;
    sp = sp - 16;
    v0 = D_08AF1580 - (5504);
    v0 = v0 + 5504;
    s0 = a0 + 0;
    s1 = s0 + 72;
    v1 = LD32(a0+72);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8D88; }
    goto L_08AA8D0C;
L_08AA8D0C:;
    v1 = LD32(s0+44);
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    ST32(s1+4, 0);
    a0 = v1 + 0;
    s2 = s0 + 44;
    ST32(s1+8, 0);
    s1 = s0 + 20;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA8D78; }
    goto L_08AA8D34;
L_08AA8D34:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8D68; }
    goto L_08AA8D48;
L_08AA8D48:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8D68:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8D70;
L_08AA8D70:;
    ST32(s0+20, 0);
    goto L_08AA8D48;
L_08AA8D78:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8D80;
L_08AA8D80:;
    ST32(s0+44, 0);
    goto L_08AA8D34;
L_08AA8D88:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8D90;
L_08AA8D90:;
    ST32(s0+72, 0);
    goto L_08AA8D0C;
}

/* 08AA8D98 */
rv_t func_08AA8D98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA8D98:;
    sp = sp - 16;
    v0 = D_08AF1580 - (5504);
    v0 = v0 + 5504;
    s0 = a0 + 0;
    s1 = s0 + 72;
    v1 = LD32(a0+72);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA8E50; }
    goto L_08AA8DCC;
L_08AA8DCC:;
    v1 = LD32(s0+44);
    v0 = D_08AF1900 - (6400);
    v0 = v0 + 6400;
    ST32(s1+4, 0);
    a0 = v1 + 0;
    s2 = s0 + 44;
    ST32(s1+8, 0);
    s1 = s0 + 20;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08AA8E40; }
    goto L_08AA8DF4;
L_08AA8DF4:;
    v0 = LD32(s0+20);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_08AA8E30; }
    goto L_08AA8E08;
L_08AA8E08:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8E18;
L_08AA8E18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA8E30:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8E38;
L_08AA8E38:;
    ST32(s0+20, 0);
    goto L_08AA8E08;
L_08AA8E40:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8E48;
L_08AA8E48:;
    ST32(s0+44, 0);
    goto L_08AA8DF4;
L_08AA8E50:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA8E58;
L_08AA8E58:;
    ST32(s0+72, 0);
    goto L_08AA8DCC;
}

/* 08AA8E60 */
u64 func_08AA8E60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08AA8E60:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA8E9C; }
    goto L_08AA8E6C;
L_08AA8E6C:;
    t0 = v0 + 0;
    a3 = a0 + 0;
    v0 = LD32(t0);
    goto L_08AA8E78;
L_08AA8E78:;
    a2 = t0 + 12;
    cnd_ = v0 == a1;
    v1 = a1 < v0;
    if (cnd_) { goto L_08AA8EA4; }
    goto L_08AA8E84;
L_08AA8E84:;
    a3 = t0 + 8;
    if (v1 == 0) a3 = a2;
    t0 = LD32(a3);
    cnd_ = t0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_08AA8E78; }
    goto L_08AA8E98;
L_08AA8E98:;
    v1 = 0 + 0;
    goto L_08AA8E9C;
L_08AA8E9C:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA8EA4:;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA8E9C; }
    goto L_08AA8EAC;
L_08AA8EAC:;
    v1 = LD32(t0+8);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(t0+12); goto L_08AA8F3C; }
    goto L_08AA8EB8;
L_08AA8EB8:;
    a1 = LD32(t0+12);
    cnd_ = a1 == 0;
    a2 = LD32(a0+4);
    if (cnd_) { goto L_08AA8F34; }
    goto L_08AA8EC4;
L_08AA8EC4:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, a1); goto L_08AA8F2C; }
    goto L_08AA8ED0;
L_08AA8ED0:;
    ST32(a3, v1);
    t1 = LD32(t0+12);
    goto L_08AA8ED8;
L_08AA8ED8:;
    v1 = LD32(a3);
    a1 = LD32(t1);
    goto L_08AA8EE0;
L_08AA8EE0:;
    v0 = LD32(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA8F1C; }
    goto L_08AA8EF0;
L_08AA8EF0:;
    v0 = LD32(v1+12);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(v1+12, t1); goto L_08AA8F04; }
    goto L_08AA8EFC;
L_08AA8EFC:;
    v1 = v0 + 0;
    goto L_08AA8EE0;
L_08AA8F04:;
    v0 = a2 - 1;
    ST32(a0+4, v0);
    v1 = t0 + 0;
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    goto L_08AA8E9C;
L_08AA8F1C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08AA8EE0; }
    goto L_08AA8F24;
L_08AA8F24:;
    ST32(v1+8, t1);
    goto L_08AA8F04;
L_08AA8F2C:;
    t1 = LD32(t0+8);
    goto L_08AA8ED8;
L_08AA8F34:;
    ST32(a3, v1);
    goto L_08AA8F04;
L_08AA8F3C:;
    a2 = LD32(a0+4);
    ST32(a3, v0);
    goto L_08AA8F04;
}

/* 08AA8F48 */
rv_t func_08AA8F48(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA8F48:;
    sp = sp - 32;
    s5 = 0 + 0;
    s2 = a0 + 0;
    s0 = LD32(a0+4);
    cnd_ = s0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08AA8FDC; }
    goto L_08AA8F7C;
L_08AA8F7C:;
    v0 = LD32(s0);
    s1 = LD_U16(v0+8);
    cnd_ = s1 == 0;
    s4 = LD32(s0+4);
    if (cnd_) { goto L_08AA9078; }
    goto L_08AA8F8C;
L_08AA8F8C:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AA8FA8; }
    goto L_08AA8F98;
L_08AA8F98:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AA9000; }
    goto L_08AA8FA8;
L_08AA8FA8:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA8FB0;
L_08AA8FB0:;
    v1 = v0 + 0;
    v0 = LD32(s2);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(v1+8, 0);
    ST32(s2, v1);
    goto L_08AA8FC8;
L_08AA8FC8:;
    v0 = LD32(v1+8);
    goto L_08AA8FCC;
L_08AA8FCC:;
    ST32(s0+4, v0);
    ST32(v1+8, s0);
    goto L_08AA8FD4;
L_08AA8FD4:;
    cnd_ = s4 != 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_08AA8F7C; }
    goto L_08AA8FDC;
L_08AA8FDC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AA9000:;
    v0 = LD32(v1);
    goto L_08AA9004;
L_08AA9004:;
    v0 = v0 < s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA9058; }
    goto L_08AA9010;
L_08AA9010:;
    s3 = v1 + 0;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08AA9004; }
    goto L_08AA9020;
L_08AA9020:;
    { rv_t r_ = func_08831FE8(t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9028;
L_08AA9028:;
    v1 = v0 + 0;
    cnd_ = s3 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_08AA9048; }
    goto L_08AA9034;
L_08AA9034:;
    v0 = LD32(s3+4);
    ST32(v1+4, v0);
    ST32(s3+4, v1);
    goto L_08AA9040;
L_08AA9040:;
    ST32(v1, s1);
    goto L_08AA8FC8;
L_08AA9048:;
    v0 = LD32(s2);
    ST32(v1+4, v0);
    ST32(s2, v1);
    goto L_08AA9040;
L_08AA9058:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AA9020; }
    goto L_08AA9060;
L_08AA9060:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_08AA8FCC; }
    goto L_08AA9070;
L_08AA9070:;
    goto L_08AA9020;
L_08AA9078:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s2+4, s0); goto L_08AA9084; }
    goto L_08AA9080;
L_08AA9080:;
    ST32(s5+4, s0);
    goto L_08AA9084;
L_08AA9084:;
    s5 = s0 + 0;
    goto L_08AA8FD4;
}

/* 08AA908C */
void func_08AA908C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA908C:;
    sp = sp - 32;
    s4 = a0 + 0;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08AA9110; }
    goto L_08AA90B8;
L_08AA90B8:;
    v0 = LD32(s2+8);
    goto L_08AA90BC;
L_08AA90BC:;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08AA9130; }
    goto L_08AA90C8;
L_08AA90C8:;
    v0 = LD_U8(s0+8);
    goto L_08AA90CC;
L_08AA90CC:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_08AA9160; }
    goto L_08AA90D4;
L_08AA90D4:;
    cnd_ = s1 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08AA9158; }
    goto L_08AA90DC;
L_08AA90DC:;
    ST32(s1+4, v0);
    goto L_08AA90E0;
L_08AA90E0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08832050(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA90EC;
L_08AA90EC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AA90CC; }
    goto L_08AA90F4;
L_08AA90F4:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA9130; }
    goto L_08AA9100;
L_08AA9100:;
    s3 = s2 + 0;
    s2 = LD32(s2+4);
    goto L_08AA9108;
L_08AA9108:;
    cnd_ = s2 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08AA90BC; }
    goto L_08AA9110;
L_08AA9110:;
    sp = sp + 32;
    return;
L_08AA9130:;
    cnd_ = s3 == 0;
    v0 = LD32(s2+4);
    if (cnd_) { goto L_08AA9150; }
    goto L_08AA9138;
L_08AA9138:;
    ST32(s3+4, v0);
    goto L_08AA913C;
L_08AA913C:;
    a0 = s2 + 0;
    s2 = LD32(s2+4);
    { u64 r_ = func_08832008(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9148;
L_08AA9148:;
    goto L_08AA9108;
L_08AA9150:;
    ST32(s4, v0);
    goto L_08AA913C;
L_08AA9158:;
    ST32(s2+8, v0);
    goto L_08AA90E0;
L_08AA9160:;
    s0 = LD32(s0+4);
    goto L_08AA90EC;
}

/* 08AA9168 */
u64 func_08AA9168(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9168:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AA91AC; }
    goto L_08AA9180;
L_08AA9180:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AA9188;
L_08AA9188:;
    a0 = v0 + 12;
    a3 = v0 + 8;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AA91C0; }
    goto L_08AA91A0;
L_08AA91A0:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AA9188; }
    goto L_08AA91AC;
L_08AA91AC:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AA91C0; }
    goto L_08AA91B8;
L_08AA91B8:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AA91D0; }
    goto L_08AA91C0;
L_08AA91C0:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA91D0:;
    a2 = 1;
    { u64 r_ = func_08AA9168(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA91D8;
L_08AA91D8:;
    t0 = v0 + 0;
    goto L_08AA91C0;
}

/* 08AA91E0 */
void func_08AA91E0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA91E0:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AA9274; }
    goto L_08AA920C;
L_08AA920C:;
    v0 = LD32(s1);
    goto L_08AA9210;
L_08AA9210:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AA9264; }
    goto L_08AA9224;
L_08AA9224:;
    v0 = LD_U8(s0+8);
    goto L_08AA9228;
L_08AA9228:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AA92A4; }
    goto L_08AA9230;
L_08AA9230:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AA9294; }
    goto L_08AA9238;
L_08AA9238:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AA9240;
L_08AA9240:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA924C;
L_08AA924C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AA9258;
L_08AA9258:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AA9228; }
    goto L_08AA9260;
L_08AA9260:;
    v1 = LD32(s1+4);
    goto L_08AA9264;
L_08AA9264:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AA9210; }
    goto L_08AA9274;
L_08AA9274:;
    sp = sp + 32;
    return;
L_08AA9294:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AA9240;
L_08AA92A4:;
    s0 = LD32(s0+4);
    goto L_08AA9258;
}

/* 08AA92AC */
void func_08AA92AC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA92AC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA930C; }
    goto L_08AA92D0;
L_08AA92D0:;
    v0 = LD32(s0+12);
    goto L_08AA92D4;
L_08AA92D4:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA92FC; }
    goto L_08AA92E0;
L_08AA92E0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA92E8;
L_08AA92E8:;
    sp = sp + 16;
    return;
L_08AA92FC:;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08AA9304;
L_08AA9304:;
    goto L_08AA92E0;
L_08AA930C:;
    func_08AA92AC(a0, a1, t1, t2, t3);
    goto L_08AA9314;
L_08AA9314:;
    v0 = LD32(s0+12);
    goto L_08AA92D4;
}

/* 08AA931C */
void func_08AA931C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA931C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA9390; }
    goto L_08AA9348;
L_08AA9348:;
    v0 = LD32(s0+12);
    goto L_08AA934C;
L_08AA934C:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA9380; }
    goto L_08AA935C;
L_08AA935C:;
    a0 = LD32(s0);
    goto L_08AA9360;
L_08AA9360:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9368;
L_08AA9368:;
    sp = sp + 16;
    return;
L_08AA9380:;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9388;
L_08AA9388:;
    a0 = LD32(s0);
    goto L_08AA9360;
L_08AA9390:;
    func_08AA931C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9398;
L_08AA9398:;
    v0 = LD32(s0+12);
    goto L_08AA934C;
}

/* 08AA93A0 */
u64 func_08AA93A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA93A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AA9418; }
    goto L_08AA93C0;
L_08AA93C0:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AA9404; }
    goto L_08AA93CC;
L_08AA93CC:;
    v0 = s1 << 2;
    goto L_08AA93D0;
L_08AA93D0:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08AA8E60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA93E4;
L_08AA93E4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA93EC;
L_08AA93EC:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_08AA9404; }
    goto L_08AA93FC;
L_08AA93FC:;
    v0 = s1 << 2;
    goto L_08AA93D0;
L_08AA9404:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AA9428; }
    goto L_08AA940C;
L_08AA940C:;
    ST32(s0+16, 0);
    goto L_08AA9410;
L_08AA9410:;
    ST32(s0+12, 0);
    goto L_08AA9418;
L_08AA9418:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AA9428:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9430;
L_08AA9430:;
    ST32(s0+16, 0);
    goto L_08AA9410;
}

/* 08AA9438 */
rv_t func_08AA9438(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA9438:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA94D0; }
    goto L_08AA9468;
L_08AA9468:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AA94A0; }
    goto L_08AA9474;
L_08AA9474:;
    v1 = v0 + 0;
    goto L_08AA9478;
L_08AA9478:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_08AA94D0; }
    goto L_08AA9494;
L_08AA9494:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AA9478; }
    goto L_08AA94A0;
L_08AA94A0:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA94A8;
L_08AA94A8:;
    ST32(v0, s1);
    a1 = v0 + 4;
    v1 = LD32(s2+4);
    a0 = LD32(s3);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_08AA94D0;
L_08AA94D0:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA94F0 */
rv_t func_08AA94F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA94F0:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AA9564; }
    goto L_08AA9510;
L_08AA9510:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08AA9550; }
    goto L_08AA951C;
L_08AA951C:;
    v1 = LD32(s0+16);
    a1 = 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_08AA9538;
L_08AA9538:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA9550:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9558;
L_08AA9558:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08AA951C;
L_08AA9564:;
    { u64 r_ = func_08AA8E60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA956C;
L_08AA956C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AA9538; }
    goto L_08AA9578;
L_08AA9578:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9580;
L_08AA9580:;
    a1 = 1;
    goto L_08AA9538;
}

/* 08AA9588 */
void func_08AA9588(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08AA9588:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AA95BC; }
    goto L_08AA9594;
L_08AA9594:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08AA95C4; }
    goto L_08AA95A0;
L_08AA95A0:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08AA95BC; }
    goto L_08AA95AC;
L_08AA95AC:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08AA9594; }
    goto L_08AA95BC;
L_08AA95BC:;
    return;
L_08AA95C4:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    return;
}

/* 08AA95D0 */
u32 func_08AA95D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AA95D0:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA9660; }
    goto L_08AA9604;
L_08AA9604:;
    v0 = LD32(s0+12);
    goto L_08AA9608;
L_08AA9608:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = s2 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08AA962C; }
    goto L_08AA961C;
L_08AA961C:;
    v0 = func_08AA95D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9624;
L_08AA9624:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA9640; }
    goto L_08AA962C;
L_08AA962C:;
    a0 = LD32(s0);
    a1 = s0 + 4;
    t_ = s3;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA963C;
L_08AA963C:;
    v1 = v0 + 0;
    goto L_08AA9640;
L_08AA9640:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08AA9660:;
    v0 = func_08AA95D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9668;
L_08AA9668:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AA9640; }
    goto L_08AA9670;
L_08AA9670:;
    v0 = LD32(s0+12);
    goto L_08AA9608;
}

/* 08AA9678 */
void func_08AA9678(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9678:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA96A8; }
    goto L_08AA9694;
L_08AA9694:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA96A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA96B0;
L_08AA96B0:;
    ST32(s0, 0);
    goto L_08AA9694;
}

/* 08AA96B8 */
void func_08AA96B8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA96B8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AA96F0; }
    goto L_08AA96D4;
L_08AA96D4:;
    ST32(a0, 0);
    goto L_08AA96D8;
L_08AA96D8:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AA96F0:;
    a0 = a1 << 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA96F8;
L_08AA96F8:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08AA9710; }
    goto L_08AA9700;
L_08AA9700:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08AA9708;
L_08AA9708:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08AA9708; }
    goto L_08AA9710;
L_08AA9710:;
    ST32(s1, v0);
    goto L_08AA96D8;
}

/* 08AA9718 */
rv_t func_08AA9718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9718:;
    ST32(a0+4, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9720 */
rv_t func_08AA9720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9720:;
    v0 = D_08AF1988 - (6536);
    v0 = v0 + 6536;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08849D7C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA973C;
L_08AA973C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9748 */
rv_t func_08AA9748(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9748:;
    v0 = D_08AF1988 - (6536);
    v0 = v0 + 6536;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08849D7C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9768;
L_08AA9768:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9770;
L_08AA9770:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9780 */
rv_t func_08AA9780(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9780:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9788 */
rv_t func_08AA9788(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9788:;
    sp = sp - 16;
    { rv_t r_ = func_0884AC90(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9798;
L_08AA9798:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA97A4 */
rv_t func_08AA97A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA97A4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA97AC */
rv_t func_08AA97AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA97AC:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA97BC */
rv_t func_08AA97BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA97BC:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA97D8;
L_08AA97D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA97E4 */
rv_t func_08AA97E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA97E4:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA97F4 */
rv_t func_08AA97F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA97F4:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9810;
L_08AA9810:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA981C */
rv_t func_08AA981C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA981C:;
    v0 = D_08B45A9C - (23196);
    v0 = v0 + 23196;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9828 */
rv_t func_08AA9828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9828:;
    v0 = D_08B45A9C - (23196);
    v0 = v0 + 23196;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9834 */
rv_t func_08AA9834(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9834:;
    v0 = D_08B45A9C - (23196);
    v0 = v0 + 23196;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9840 */
rv_t func_08AA9840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9840:;
    v0 = (u32)-1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9848 */
rv_t func_08AA9848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9848:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9854 */
rv_t func_08AA9854(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9854:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9860 */
rv_t func_08AA9860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9860:;
    v0 = (u32)-1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9868 */
rv_t func_08AA9868(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9868:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9870 */
rv_t func_08AA9870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9870:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9878 */
rv_t func_08AA9878(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9878:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9880 */
rv_t func_08AA9880(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9880:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9888 */
rv_t func_08AA9888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9888:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9890 */
rv_t func_08AA9890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9890:;
    v0 = LD32(a0+88);
    v0 = (v0 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA98A0 */
rv_t func_08AA98A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA98A0:;
    v0 = LD32(a0+88);
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA98B0 */
rv_t func_08AA98B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA98B0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA98B8 */
rv_t func_08AA98B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA98B8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA98C0 */
rv_t func_08AA98C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA98C0:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA98D0 */
rv_t func_08AA98D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA98D0:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA98EC;
L_08AA98EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA98F8 */
rv_t func_08AA98F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA98F8:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9908 */
rv_t func_08AA9908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9908:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9924;
L_08AA9924:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9930 */
rv_t func_08AA9930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9930:;
    v0 = a0 + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9938 */
rv_t func_08AA9938(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9938:;
    v0 = a0 + 104;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9940 */
rv_t func_08AA9940(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9940:;
    v0 = a0 + 92;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9948 */
rv_t func_08AA9948(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9948:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9950 */
rv_t func_08AA9950(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9950:;
    f0 = BITSF(LD32(a0+144));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9958 */
rv_t func_08AA9958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9958:;
    f0 = BITSF(LD32(a0+140));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9960 */
rv_t func_08AA9960(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9960:;
    v0 = LD32(a0+148);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9968 */
rv_t func_08AA9968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08AA9968:;
    f2 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = a0 + 104;
    ST32(a0+104, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9988 */
rv_t func_08AA9988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08AA9988:;
    f2 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = a0 + 92;
    ST32(a0+92, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA99A8 */
rv_t func_08AA99A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08AA99A8:;
    f2 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = a0 + 128;
    ST32(a0+128, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA99C8 */
rv_t func_08AA99C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA99C8:;
    ST32(a0+144, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA99D0 */
rv_t func_08AA99D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA99D0:;
    ST32(a0+140, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA99D8 */
rv_t func_08AA99D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA99D8:;
    ST32(a0+148, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA99E0 */
rv_t func_08AA99E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA99E0:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA99F0 */
rv_t func_08AA99F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA99F0:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9A0C;
L_08AA9A0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A18 */
rv_t func_08AA9A18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9A18:;
    v0 = 2;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A20 */
rv_t func_08AA9A20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9A20:;
    v0 = a0 + 92;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A28 */
rv_t func_08AA9A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08AA9A28:;
    f2 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = a0 + 92;
    ST32(a0+92, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A48 */
rv_t func_08AA9A48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9A48:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A58 */
rv_t func_08AA9A58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9A58:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9A74;
L_08AA9A74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A80 */
rv_t func_08AA9A80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9A80:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A88 */
rv_t func_08AA9A88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9A88:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+88);
    v0 = (v0 & ~(0x1u << 9)) | ((a1 & 0x1) << 9);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9A9C */
rv_t func_08AA9A9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9A9C:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+88);
    v0 = (v0 & ~(0x1u << 8)) | ((a1 & 0x1) << 8);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9AB0 */
rv_t func_08AA9AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9AB0:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9AC0 */
rv_t func_08AA9AC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9AC0:;
    v0 = D_08AF1B78 - (7032);
    v0 = v0 + 7032;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9ADC;
L_08AA9ADC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9AE8 */
rv_t func_08AA9AE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9AE8:;
    v0 = 3;
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9AF0 */
rv_t func_08AA9AF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9AF0:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+88);
    v0 = (v0 & ~(0x1u << 9)) | ((a1 & 0x1) << 9);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9B04 */
rv_t func_08AA9B04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AA9B04:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+88);
    v0 = (v0 & ~(0x1u << 8)) | ((a1 & 0x1) << 8);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9B18 */
rv_t func_08AA9B18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9B18:;
    sp = sp - 16;
    v0 = D_08AF0F80 - (3968);
    s0 = a0 + 0;
    v0 = v0 + 3968;
    v1 = LD32(a0+4);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AA9B58; }
    goto L_08AA9B40;
L_08AA9B40:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9B48;
L_08AA9B48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA9B58:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9B60;
L_08AA9B60:;
    goto L_08AA9B40;
}

/* 08AA9B68 */
rv_t func_08AA9B68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9B68:;
    sp = sp - 16;
    v1 = D_08AF0F80 - (3968);
    v0 = a0 + 0;
    a1 = LD32(a0+4);
    v1 = v1 + 3968;
    ST32(v0, v1);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AA9B98; }
    goto L_08AA9B8C;
L_08AA9B8C:;
    goto L_08AA9B90;
L_08AA9B90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA9B98:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9BA0;
L_08AA9BA0:;
    goto L_08AA9B90;
}

/* 08AA9BA8 */
rv_t func_08AA9BA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08AA9BA8:;
    a3 = LD32(a0+12);
    t0 = 0 + 0;
    cnd_ = (s32)a3 <= 0;
    t1 = a3 + 0;
    if (cnd_) { goto L_08AA9BDC; }
    goto L_08AA9BB8;
L_08AA9BB8:;
    a2 = LD32(a0+4);
    t2 = a2 + 0;
    goto L_08AA9BC0;
L_08AA9BC0:;
    v0 = LD32(a2);
    t0 = t0 + 1;
    cnd_ = v0 == a1;
    v1 = (s32)t0 < (s32)a3;
    if (cnd_) { goto L_08AA9BE4; }
    goto L_08AA9BD0;
L_08AA9BD0:;
    a2 = a2 + 4;
    cnd_ = v1 != 0;
    t1 = a3 + 0;
    if (cnd_) { goto L_08AA9BC0; }
    goto L_08AA9BDC;
L_08AA9BDC:;
    return (rv_t){ v0, v1, f0 };
L_08AA9BE4:;
    v0 = t1 - 1;
    ST32(a0+12, v0);
    v0 = v0 << 2;
    v0 = v0 + t2;
    v1 = LD32(v0);
    ST32(a2, v1);
    v0 = LD32(a0+12);
    v0 = v0 << 2;
    v0 = v0 + t2;
    ST32(v0, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08AA9C10 */
rv_t func_08AA9C10(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9C10:;
    sp = sp - 16;
    a3 = LD32(a1+52);
    v0 = a3 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(a1+44);
    if (cnd_) { goto L_08AA9CE0; }
    goto L_08AA9C2C;
L_08AA9C2C:;
    v1 = LD32(a0+64);
    goto L_08AA9C30;
L_08AA9C30:;
    v0 = v0 << 1;
    v0 = v0 + v1;
    s0 = LD_U16(v0);
    v0 = a3 & 0x2;
    cnd_ = v0 == 0;
    v0 = LD32(a1+48);
    if (cnd_) { goto L_08AA9CD4; }
    goto L_08AA9C48;
L_08AA9C48:;
    v1 = LD32(a0+72);
    goto L_08AA9C4C;
L_08AA9C4C:;
    v0 = v0 << 1;
    v0 = v0 + v1;
    a0 = (u32)(s32)LD_S16(v0);
    a0 = (u32)(s32)(s16)a0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9C60;
L_08AA9C60:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AA9CB0; }
    goto L_08AA9C68;
L_08AA9C68:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AA9CC4; }
    goto L_08AA9C74;
L_08AA9C74:;
    a1 = LD32(a0+24);
    goto L_08AA9C78;
L_08AA9C78:;
    cnd_ = a1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08AA9CB4; }
    goto L_08AA9C80;
L_08AA9C80:;
    v0 = 0x80000u;
    v0 = a1 & v0;
    a0 = s0 | 0x2;
    if (v0 != 0) s0 = a0;
    v1 = 0x200000u;
    v1 = a1 & v1;
    a0 = s0 | 0x4;
    if (v1 != 0) s0 = a0;
    v0 = 0x400000u;
    v0 = a1 & v0;
    v1 = s0 | 0x8;
    if (v0 != 0) s0 = v1;
    goto L_08AA9CB0;
L_08AA9CB0:;
    v0 = s0 + 0;
    goto L_08AA9CB4;
L_08AA9CB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AA9CC4:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9CCC;
L_08AA9CCC:;
    a1 = v0 + 0;
    goto L_08AA9C78;
L_08AA9CD4:;
    v1 = LD32(a0+72);
    v0 = v0 + a2;
    goto L_08AA9C4C;
L_08AA9CE0:;
    v1 = LD32(a0+64);
    v0 = v0 + a2;
    goto L_08AA9C30;
}

/* 08AA9CEC */
void func_08AA9CEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9CEC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08AA9D4C; }
    goto L_08AA9D0C;
L_08AA9D0C:;
    v0 = LD32(a0-4);
    v1 = 152;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08AA9D20;
L_08AA9D20:;
    cnd_ = a0 == s0;
    s0 = s0 - 152;
    if (cnd_) { goto L_08AA9D40; }
    goto L_08AA9D28;
L_08AA9D28:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9D38;
L_08AA9D38:;
    a0 = LD32(s1);
    goto L_08AA9D20;
L_08AA9D40:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9D48;
L_08AA9D48:;
    a0 = LD32(s1+4);
    goto L_08AA9D4C;
L_08AA9D4C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AA9D8C; }
    goto L_08AA9D54;
L_08AA9D54:;
    s0 = LD32(s1+12);
    goto L_08AA9D58;
L_08AA9D58:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA9D74; }
    goto L_08AA9D60;
L_08AA9D60:;
    goto L_08AA9D64;
L_08AA9D64:;
    sp = sp + 16;
    return;
L_08AA9D74:;
    a0 = s0 + 0;
    func_08AA9CEC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9D7C;
L_08AA9D7C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9D84;
L_08AA9D84:;
    goto L_08AA9D64;
L_08AA9D8C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9D98;
L_08AA9D98:;
    s0 = LD32(s1+12);
    goto L_08AA9D58;
}

/* 08AA9DA0 */
void func_08AA9DA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9DA0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08AA9E00; }
    goto L_08AA9DC0;
L_08AA9DC0:;
    v0 = LD32(a0-4);
    v1 = 92;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08AA9DD4;
L_08AA9DD4:;
    cnd_ = a0 == s0;
    s0 = s0 - 92;
    if (cnd_) { goto L_08AA9DF4; }
    goto L_08AA9DDC;
L_08AA9DDC:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9DEC;
L_08AA9DEC:;
    a0 = LD32(s1);
    goto L_08AA9DD4;
L_08AA9DF4:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9DFC;
L_08AA9DFC:;
    a0 = LD32(s1+4);
    goto L_08AA9E00;
L_08AA9E00:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AA9E40; }
    goto L_08AA9E08;
L_08AA9E08:;
    s0 = LD32(s1+12);
    goto L_08AA9E0C;
L_08AA9E0C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA9E28; }
    goto L_08AA9E14;
L_08AA9E14:;
    goto L_08AA9E18;
L_08AA9E18:;
    sp = sp + 16;
    return;
L_08AA9E28:;
    a0 = s0 + 0;
    func_08AA9DA0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9E30;
L_08AA9E30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9E38;
L_08AA9E38:;
    goto L_08AA9E18;
L_08AA9E40:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9E4C;
L_08AA9E4C:;
    s0 = LD32(s1+12);
    goto L_08AA9E0C;
}

/* 08AA9E54 */
void func_08AA9E54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9E54:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08AA9EB4; }
    goto L_08AA9E74;
L_08AA9E74:;
    v0 = LD32(a0-4);
    v1 = 104;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08AA9E88;
L_08AA9E88:;
    cnd_ = a0 == s0;
    s0 = s0 - 104;
    if (cnd_) { goto L_08AA9EA8; }
    goto L_08AA9E90;
L_08AA9E90:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9EA0;
L_08AA9EA0:;
    a0 = LD32(s1);
    goto L_08AA9E88;
L_08AA9EA8:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9EB0;
L_08AA9EB0:;
    a0 = LD32(s1+4);
    goto L_08AA9EB4;
L_08AA9EB4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AA9EF4; }
    goto L_08AA9EBC;
L_08AA9EBC:;
    s0 = LD32(s1+12);
    goto L_08AA9EC0;
L_08AA9EC0:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA9EDC; }
    goto L_08AA9EC8;
L_08AA9EC8:;
    goto L_08AA9ECC;
L_08AA9ECC:;
    sp = sp + 16;
    return;
L_08AA9EDC:;
    a0 = s0 + 0;
    func_08AA9E54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9EE4;
L_08AA9EE4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9EEC;
L_08AA9EEC:;
    goto L_08AA9ECC;
L_08AA9EF4:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9F00;
L_08AA9F00:;
    s0 = LD32(s1+12);
    goto L_08AA9EC0;
}

/* 08AA9F08 */
void func_08AA9F08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AA9F08:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08AA9F68; }
    goto L_08AA9F28;
L_08AA9F28:;
    v0 = LD32(a0-4);
    v1 = 92;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08AA9F3C;
L_08AA9F3C:;
    cnd_ = a0 == s0;
    s0 = s0 - 92;
    if (cnd_) { goto L_08AA9F5C; }
    goto L_08AA9F44;
L_08AA9F44:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9F54;
L_08AA9F54:;
    a0 = LD32(s1);
    goto L_08AA9F3C;
L_08AA9F5C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9F64;
L_08AA9F64:;
    a0 = LD32(s1+4);
    goto L_08AA9F68;
L_08AA9F68:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08AA9FA8; }
    goto L_08AA9F70;
L_08AA9F70:;
    s0 = LD32(s1+12);
    goto L_08AA9F74;
L_08AA9F74:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08AA9F90; }
    goto L_08AA9F7C;
L_08AA9F7C:;
    goto L_08AA9F80;
L_08AA9F80:;
    sp = sp + 16;
    return;
L_08AA9F90:;
    a0 = s0 + 0;
    func_08AA9F08(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AA9F98;
L_08AA9F98:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AA9FA0;
L_08AA9FA0:;
    goto L_08AA9F80;
L_08AA9FA8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AA9FB4;
L_08AA9FB4:;
    s0 = LD32(s1+12);
    goto L_08AA9F74;
}

/* 08AA9FBC */
u32 func_08AA9FBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08AA9FBC:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAA06C; }
    goto L_08AA9FC8;
L_08AA9FC8:;
    v0 = LD32(a0+12);
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08AAA06C; }
    goto L_08AA9FD4;
L_08AA9FD4:;
    a2 = LD32(a0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08AAA014; }
    goto L_08AA9FE0;
L_08AA9FE0:;
    a3 = LD32(a2+8);
    goto L_08AA9FE4;
L_08AA9FE4:;
    v0 = (s32)a1 < (s32)a3;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08AAA004; }
    goto L_08AA9FF0;
L_08AA9FF0:;
    v0 = LD32(a0+4);
    v0 = a3 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AAA014; }
    goto L_08AAA004;
L_08AAA004:;
    a2 = LD32(a2+12);
    cnd_ = a2 != 0;
    if (cnd_) { a3 = LD32(a2+8); goto L_08AA9FE4; }
    goto L_08AAA010;
L_08AAA010:;
    v1 = 0 + 0;
    goto L_08AAA014;
L_08AAA014:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AAA06C; }
    goto L_08AAA01C;
L_08AAA01C:;
    a2 = LD32(v1+4);
    v0 = LD32(v1+8);
    t0 = 0 + 0;
    t1 = LD32(a2+12);
    cnd_ = (s32)t1 <= 0;
    t2 = a1 - v0;
    if (cnd_) { goto L_08AAA054; }
    goto L_08AAA034;
L_08AAA034:;
    a2 = LD32(a2+4);
    v0 = LD32(a2);
    goto L_08AAA03C;
L_08AAA03C:;
    t0 = t0 + 1;
    a3 = (s32)t0 < (s32)t1;
    cnd_ = v0 == t2;
    a2 = a2 + 4;
    if (cnd_) { goto L_08AAA074; }
    goto L_08AAA04C;
L_08AAA04C:;
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08AAA03C; }
    goto L_08AAA054;
L_08AAA054:;
    v0 = 0 + 0;
    goto L_08AAA058;
L_08AAA058:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08AAA06C; }
    goto L_08AAA060;
L_08AAA060:;
    v1 = v0 + 0;
    ST32(a0+12, a1);
    ST32(a0+8, v0);
    goto L_08AAA06C;
L_08AAA06C:;
    v0 = v1 + 0;
    return v0;
L_08AAA074:;
    v0 = 92;
    { s64 p_ = (s64)(s32)t2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v0 = v1 + v0;
    goto L_08AAA058;
}

/* 08AAA08C */
u32 func_08AAA08C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAA08C:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AAA0CC; }
    goto L_08AAA098;
L_08AAA098:;
    a2 = LD32(v1+8);
    goto L_08AAA09C;
L_08AAA09C:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AAA0BC; }
    goto L_08AAA0A8;
L_08AAA0A8:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AAA0CC; }
    goto L_08AAA0BC;
L_08AAA0BC:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AAA09C; }
    goto L_08AAA0C8;
L_08AAA0C8:;
    a3 = 0 + 0;
    goto L_08AAA0CC;
L_08AAA0CC:;
    v0 = a3 + 0;
    return v0;
}

/* 08AAA0D4 */
u32 func_08AAA0D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAA0D4:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AAA114; }
    goto L_08AAA0E0;
L_08AAA0E0:;
    a2 = LD32(v1+8);
    goto L_08AAA0E4;
L_08AAA0E4:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AAA104; }
    goto L_08AAA0F0;
L_08AAA0F0:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AAA114; }
    goto L_08AAA104;
L_08AAA104:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AAA0E4; }
    goto L_08AAA110;
L_08AAA110:;
    a3 = 0 + 0;
    goto L_08AAA114;
L_08AAA114:;
    v0 = a3 + 0;
    return v0;
}

/* 08AAA11C */
u32 func_08AAA11C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAA11C:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AAA15C; }
    goto L_08AAA128;
L_08AAA128:;
    a2 = LD32(v1+8);
    goto L_08AAA12C;
L_08AAA12C:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AAA14C; }
    goto L_08AAA138;
L_08AAA138:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AAA15C; }
    goto L_08AAA14C;
L_08AAA14C:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AAA12C; }
    goto L_08AAA158;
L_08AAA158:;
    a3 = 0 + 0;
    goto L_08AAA15C;
L_08AAA15C:;
    v0 = a3 + 0;
    return v0;
}

/* 08AAA164 */
u32 func_08AAA164(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAA164:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AAA1A4; }
    goto L_08AAA170;
L_08AAA170:;
    a2 = LD32(v1+8);
    goto L_08AAA174;
L_08AAA174:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08AAA194; }
    goto L_08AAA180;
L_08AAA180:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08AAA1A4; }
    goto L_08AAA194;
L_08AAA194:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1+8); goto L_08AAA174; }
    goto L_08AAA1A0;
L_08AAA1A0:;
    a3 = 0 + 0;
    goto L_08AAA1A4;
L_08AAA1A4:;
    v0 = a3 + 0;
    return v0;
}

/* 08AAA1AC */
void func_08AAA1AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA1AC:;
    ST32(a0+4, 0);
    sp = sp - 16;
    v0 = LD32(a0);
    ST32(a0+20, 0);
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08AAA204; }
    goto L_08AAA1C8;
L_08AAA1C8:;
    ST32(a0+4, v0);
    a1 = a0 + 8;
    goto L_08AAA1D0;
L_08AAA1D0:;
    a0 = LD32(a2+4);
    ST32(sp+4, 0);
    v0 = LD32(a0+4);
    ST32(a2+12, 0);
    ST32(a2+8, v0);
    v1 = LD32(v0+12);
    ST32(sp, v0);
    v1 = v1 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a1+4, v1);
    if (cnd_) { goto L_08AAA20C; }
    goto L_08AAA1F8;
L_08AAA1F8:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AAA1D0; }
    goto L_08AAA204;
L_08AAA204:;
    sp = sp + 16;
    return;
L_08AAA20C:;
    a1 = LD32(a2+8);
    v1 = v1 << 2;
    a0 = LD32(a0);
    v0 = LD32(a1+4);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 152;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a1);
    v0 = lo;
    a0 = a0 + v0;
    ST32(a2+20, a0);
    goto L_08AAA204;
}

/* 08AAA240 */
void func_08AAA240(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA240:;
    a1 = a0 + 8;
    v0 = LD32(a1+4);
    a2 = a0 + 0;
    sp = sp - 16;
    v0 = v0 - 1;
    a0 = a1 + 0;
    cnd_ = (s32)v0 >= 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08AAA294; }
    goto L_08AAA260;
L_08AAA260:;
    v0 = LD32(a2+4);
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AAA2CC; }
    goto L_08AAA270;
L_08AAA270:;
    v1 = LD32(v0+4);
    ST32(sp+4, 0);
    ST32(a2+8, v1);
    ST32(a2+12, 0);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08AAA260; }
    goto L_08AAA294;
L_08AAA294:;
    a0 = LD32(a2+8);
    v0 = LD32(a1+4);
    a1 = LD32(a2+4);
    v1 = LD32(a0+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 152;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_08AAA2CC;
L_08AAA2CC:;
    sp = sp + 16;
    return;
}

/* 08AAA2D4 */
void func_08AAA2D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA2D4:;
    ST32(a0+4, 0);
    sp = sp - 16;
    v0 = LD32(a0);
    ST32(a0+20, 0);
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08AAA32C; }
    goto L_08AAA2F0;
L_08AAA2F0:;
    ST32(a0+4, v0);
    a1 = a0 + 8;
    goto L_08AAA2F8;
L_08AAA2F8:;
    a0 = LD32(a2+4);
    ST32(sp+4, 0);
    v0 = LD32(a0+4);
    ST32(a2+12, 0);
    ST32(a2+8, v0);
    v1 = LD32(v0+12);
    ST32(sp, v0);
    v1 = v1 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a1+4, v1);
    if (cnd_) { goto L_08AAA334; }
    goto L_08AAA320;
L_08AAA320:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AAA2F8; }
    goto L_08AAA32C;
L_08AAA32C:;
    sp = sp + 16;
    return;
L_08AAA334:;
    a1 = LD32(a2+8);
    v1 = v1 << 2;
    a0 = LD32(a0);
    v0 = LD32(a1+4);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 104;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a1);
    v0 = lo;
    a0 = a0 + v0;
    ST32(a2+20, a0);
    goto L_08AAA32C;
}

/* 08AAA368 */
void func_08AAA368(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA368:;
    a1 = a0 + 8;
    v0 = LD32(a1+4);
    a2 = a0 + 0;
    sp = sp - 16;
    v0 = v0 - 1;
    a0 = a1 + 0;
    cnd_ = (s32)v0 >= 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08AAA3BC; }
    goto L_08AAA388;
L_08AAA388:;
    v0 = LD32(a2+4);
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AAA3F4; }
    goto L_08AAA398;
L_08AAA398:;
    v1 = LD32(v0+4);
    ST32(sp+4, 0);
    ST32(a2+8, v1);
    ST32(a2+12, 0);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08AAA388; }
    goto L_08AAA3BC;
L_08AAA3BC:;
    a0 = LD32(a2+8);
    v0 = LD32(a1+4);
    a1 = LD32(a2+4);
    v1 = LD32(a0+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 104;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_08AAA3F4;
L_08AAA3F4:;
    sp = sp + 16;
    return;
}

/* 08AAA3FC */
void func_08AAA3FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA3FC:;
    ST32(a0+4, 0);
    sp = sp - 16;
    v0 = LD32(a0);
    ST32(a0+20, 0);
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08AAA454; }
    goto L_08AAA418;
L_08AAA418:;
    ST32(a0+4, v0);
    a1 = a0 + 8;
    goto L_08AAA420;
L_08AAA420:;
    a0 = LD32(a2+4);
    ST32(sp+4, 0);
    v0 = LD32(a0+4);
    ST32(a2+12, 0);
    ST32(a2+8, v0);
    v1 = LD32(v0+12);
    ST32(sp, v0);
    v1 = v1 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a1+4, v1);
    if (cnd_) { goto L_08AAA45C; }
    goto L_08AAA448;
L_08AAA448:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AAA420; }
    goto L_08AAA454;
L_08AAA454:;
    sp = sp + 16;
    return;
L_08AAA45C:;
    a1 = LD32(a2+8);
    v1 = v1 << 2;
    a0 = LD32(a0);
    v0 = LD32(a1+4);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 92;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a1);
    v0 = lo;
    a0 = a0 + v0;
    ST32(a2+20, a0);
    goto L_08AAA454;
}

/* 08AAA490 */
void func_08AAA490(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA490:;
    a1 = a0 + 8;
    v0 = LD32(a1+4);
    a2 = a0 + 0;
    sp = sp - 16;
    v0 = v0 - 1;
    a0 = a1 + 0;
    cnd_ = (s32)v0 >= 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08AAA4E4; }
    goto L_08AAA4B0;
L_08AAA4B0:;
    v0 = LD32(a2+4);
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_08AAA51C; }
    goto L_08AAA4C0;
L_08AAA4C0:;
    v1 = LD32(v0+4);
    ST32(sp+4, 0);
    ST32(a2+8, v1);
    ST32(a2+12, 0);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08AAA4B0; }
    goto L_08AAA4E4;
L_08AAA4E4:;
    a0 = LD32(a2+8);
    v0 = LD32(a1+4);
    a1 = LD32(a2+4);
    v1 = LD32(a0+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 92;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_08AAA51C;
L_08AAA51C:;
    sp = sp + 16;
    return;
}

/* 08AAA524 */
void func_08AAA524(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAA524:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AAA598; }
    goto L_08AAA534;
L_08AAA534:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AAA544;
L_08AAA544:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AAA5C0; }
    goto L_08AAA550;
L_08AAA550:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AAA5A8; }
    goto L_08AAA564;
L_08AAA564:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AAA58C; }
    goto L_08AAA56C;
L_08AAA56C:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AAA59C; }
    goto L_08AAA58C;
L_08AAA58C:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAA5C0; }
    goto L_08AAA598;
L_08AAA598:;
    v0 = LD32(a3+4);
    goto L_08AAA59C;
L_08AAA59C:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AAA564; }
    goto L_08AAA5A4;
L_08AAA5A4:;
    a3 = LD32(a2);
    goto L_08AAA5A8;
L_08AAA5A8:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AAA544;
L_08AAA5C0:;
    return;
}

/* 08AAA5C8 */
void func_08AAA5C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AAA5C8:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AAA65C; }
    goto L_08AAA5F4;
L_08AAA5F4:;
    v0 = LD32(s1);
    goto L_08AAA5F8;
L_08AAA5F8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AAA64C; }
    goto L_08AAA60C;
L_08AAA60C:;
    v0 = LD_U8(s0+8);
    goto L_08AAA610;
L_08AAA610:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AAA68C; }
    goto L_08AAA618;
L_08AAA618:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AAA67C; }
    goto L_08AAA620;
L_08AAA620:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AAA628;
L_08AAA628:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAA634;
L_08AAA634:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AAA640;
L_08AAA640:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AAA610; }
    goto L_08AAA648;
L_08AAA648:;
    v1 = LD32(s1+4);
    goto L_08AAA64C;
L_08AAA64C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AAA5F8; }
    goto L_08AAA65C;
L_08AAA65C:;
    sp = sp + 32;
    return;
L_08AAA67C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AAA628;
L_08AAA68C:;
    s0 = LD32(s0+4);
    goto L_08AAA640;
}

/* 08AAA694 */
rv_t func_08AAA694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA694:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA69C */
rv_t func_08AAA69C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA69C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA6A4 */
rv_t func_08AAA6A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA6A4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA6AC */
rv_t func_08AAA6AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA6AC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA6B4 */
rv_t func_08AAA6B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA6B4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA6BC */
rv_t func_08AAA6BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA6BC:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA6C4 */
rv_t func_08AAA6C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA6C4:;
    v0 = D_08AF1BE8 - (7144);
    v0 = v0 + 7144;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAA6E0;
L_08AAA6E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA6EC */
rv_t func_08AAA6EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA6EC:;
    v0 = D_08AF1BE8 - (7144);
    v0 = v0 + 7144;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAA70C;
L_08AAA70C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAA714;
L_08AAA714:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA724 */
rv_t func_08AAA724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA724:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA72C */
rv_t func_08AAA72C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA72C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088512C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA744;
L_08AAA744:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA750 */
rv_t func_08AAA750(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA750:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885136C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA768;
L_08AAA768:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA774 */
rv_t func_08AAA774(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA774:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08851418(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA78C;
L_08AAA78C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA798 */
rv_t func_08AAA798(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA798:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_088514C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA7B0;
L_08AAA7B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7BC */
rv_t func_08AAA7BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7BC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7C4 */
rv_t func_08AAA7C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7CC */
rv_t func_08AAA7CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7CC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7D4 */
rv_t func_08AAA7D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7DC */
rv_t func_08AAA7DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7DC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7E4 */
rv_t func_08AAA7E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7E4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7EC */
rv_t func_08AAA7EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA7EC:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA7F4 */
void func_08AAA7F4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA7F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAA848; }
    goto L_08AAA82C;
L_08AAA82C:;
    v0 = LD32(a0);
    goto L_08AAA830;
L_08AAA830:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAA85C; }
    goto L_08AAA838;
L_08AAA838:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAA830; }
    goto L_08AAA848;
L_08AAA848:;
    v0 = 0 + 0;
    goto L_08AAA84C;
L_08AAA84C:;
    sp = sp + 16;
    return;
L_08AAA85C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAA870; }
    goto L_08AAA864;
L_08AAA864:;
    ST8(a0+8, v0);
    goto L_08AAA868;
L_08AAA868:;
    v0 = 1;
    goto L_08AAA84C;
L_08AAA870:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAA894; }
    goto L_08AAA878;
L_08AAA878:;
    ST32(a2+4, v0);
    goto L_08AAA87C;
L_08AAA87C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAA884;
L_08AAA884:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAA868;
L_08AAA894:;
    ST32(v1, v0);
    goto L_08AAA87C;
}

/* 08AAA89C */
rv_t func_08AAA89C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA89C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08852D94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA8B4;
L_08AAA8B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA8C0 */
rv_t func_08AAA8C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA8C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08852E00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA8D8;
L_08AAA8D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA8E4 */
rv_t func_08AAA8E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA8E4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08852E74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA8FC;
L_08AAA8FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA908 */
rv_t func_08AAA908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA908:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08853594(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA920;
L_08AAA920:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA92C */
rv_t func_08AAA92C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA92C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08853600(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA944;
L_08AAA944:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA950 */
rv_t func_08AAA950(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA950:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08853674(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA968;
L_08AAA968:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA974 */
rv_t func_08AAA974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAA974:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA97C */
rv_t func_08AAA97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA97C:;
    v0 = D_08AF20D4 - (8404);
    v0 = v0 + 8404;
    v1 = v0 + 88;
    ST32(a0+292, v1);
    a1 = D_08AF2148 - (8520);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 + 8520;
    a1 = a1 + 4;
    s0 = a0 + 292;
    func_08853530(a0, a1, t1, t2, t3);
    goto L_08AAA9B0;
L_08AAA9B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAA9B8;
L_08AAA9B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA9C8 */
rv_t func_08AAA9C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA9C8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAA97C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAA9E0;
L_08AAA9E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAA9EC */
rv_t func_08AAA9EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAA9EC:;
    v0 = D_08AF20D4 - (8404);
    v0 = v0 + 8404;
    v1 = v0 + 88;
    ST32(a0+292, v1);
    a1 = D_08AF2148 - (8520);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 + 8520;
    a1 = a1 + 4;
    s1 = a0 + 292;
    s0 = a0 + 0;
    func_08853530(a0, a1, t1, t2, t3);
    goto L_08AAAA28;
L_08AAAA28:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAAA30;
L_08AAAA30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAAA38;
L_08AAAA38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAA4C */
rv_t func_08AAAA4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAA4C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAA9EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAA64;
L_08AAAA64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAA70 */
rv_t func_08AAAA70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAAA70:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAA78 */
rv_t func_08AAAA78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAAA78:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAA80 */
rv_t func_08AAAA80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAAA80:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x3;
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAA94 */
rv_t func_08AAAA94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAAA94:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAA9C */
rv_t func_08AAAA9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAAA9C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAAA4 */
void func_08AAAAA4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
L_08AAAAA4:;
    v0 = D_08AEBBFC - (-17412);
    ST32(a0, 0);
    v1 = a0 + 8;
    a1 = 5;
    ST32(a0+4, 0);
    a2 = (u32)-1;
    f0 = BITSF(LD32(v0-17412));
    goto L_08AAAAC0;
L_08AAAAC0:;
    a1 = a1 - 1;
    ST32(v1, 0);
    ST32(v1+4, FBITS(f0));
    cnd_ = a1 != a2;
    v1 = v1 + 8;
    if (cnd_) { goto L_08AAAAC0; }
    goto L_08AAAAD4;
L_08AAAAD4:;
    ST32(a0+56, 0);
    return;
}

/* 08AAAADC */
u32 func_08AAAADC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AAAADC:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AAAB30; }
    goto L_08AAAAEC;
L_08AAAAEC:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AAAB30; }
    goto L_08AAAB10;
L_08AAAB10:;
    a0 = LD32(v1);
    goto L_08AAAB14;
L_08AAAB14:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AAAB38; }
    goto L_08AAAB20;
L_08AAAB20:;
    v1 = LD32(v1+4);
    goto L_08AAAB24;
L_08AAAB24:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08AAAB14; }
    goto L_08AAAB2C;
L_08AAAB2C:;
    a3 = 0 + 0;
    goto L_08AAAB30;
L_08AAAB30:;
    v0 = a3 + 0;
    return v0;
L_08AAAB38:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08AAAB54; }
    goto L_08AAAB40;
L_08AAAB40:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AAAB24; }
    goto L_08AAAB50;
L_08AAAB50:;
    v0 = LD_U8(v1+8);
    goto L_08AAAB54;
L_08AAAB54:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08AAAB20; }
    goto L_08AAAB5C;
L_08AAAB5C:;
    goto L_08AAAB30;
}

/* 08AAAB64 */
void func_08AAAB64(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAB64:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAABB8; }
    goto L_08AAAB9C;
L_08AAAB9C:;
    v0 = LD32(a0);
    goto L_08AAABA0;
L_08AAABA0:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAABCC; }
    goto L_08AAABA8;
L_08AAABA8:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAABA0; }
    goto L_08AAABB8;
L_08AAABB8:;
    v0 = 0 + 0;
    goto L_08AAABBC;
L_08AAABBC:;
    sp = sp + 16;
    return;
L_08AAABCC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAABE0; }
    goto L_08AAABD4;
L_08AAABD4:;
    ST8(a0+8, v0);
    goto L_08AAABD8;
L_08AAABD8:;
    v0 = 1;
    goto L_08AAABBC;
L_08AAABE0:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAAC04; }
    goto L_08AAABE8;
L_08AAABE8:;
    ST32(a2+4, v0);
    goto L_08AAABEC;
L_08AAABEC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAABF4;
L_08AAABF4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAABD8;
L_08AAAC04:;
    ST32(v1, v0);
    goto L_08AAABEC;
}

/* 08AAAC0C */
rv_t func_08AAAC0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAC0C:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08854C20(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAC1C;
L_08AAAC1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAC28 */
rv_t func_08AAAC28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAC28:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08854C50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAC38;
L_08AAAC38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAC44 */
rv_t func_08AAAC44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAC44:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08854FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAC54;
L_08AAAC54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAC60 */
rv_t func_08AAAC60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAC60:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08855134(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAC70;
L_08AAAC70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAC7C */
u64 func_08AAAC7C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AAAC7C:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AAACDC; }
    goto L_08AAAC8C;
L_08AAAC8C:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AAACDC; }
    goto L_08AAACB0;
L_08AAACB0:;
    a3 = LD32(a0);
    goto L_08AAACB4;
L_08AAACB4:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AAACE4; }
    goto L_08AAACCC;
L_08AAACCC:;
    a0 = LD32(a0+4);
    goto L_08AAACD0;
L_08AAACD0:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AAACB4; }
    goto L_08AAACD8;
L_08AAACD8:;
    a3 = 0 + 0;
    goto L_08AAACDC;
L_08AAACDC:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AAACE4:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AAAD00; }
    goto L_08AAACEC;
L_08AAACEC:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AAACD0; }
    goto L_08AAACFC;
L_08AAACFC:;
    v0 = LD_U8(a0+8);
    goto L_08AAAD00;
L_08AAAD00:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AAACD0; }
    goto L_08AAAD08;
L_08AAAD08:;
    goto L_08AAACDC;
}

/* 08AAAD10 */
void func_08AAAD10(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAAD10:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AAAD84; }
    goto L_08AAAD20;
L_08AAAD20:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AAAD30;
L_08AAAD30:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AAADAC; }
    goto L_08AAAD3C;
L_08AAAD3C:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AAAD94; }
    goto L_08AAAD50;
L_08AAAD50:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AAAD78; }
    goto L_08AAAD58;
L_08AAAD58:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AAAD88; }
    goto L_08AAAD78;
L_08AAAD78:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAADAC; }
    goto L_08AAAD84;
L_08AAAD84:;
    v0 = LD32(a3+4);
    goto L_08AAAD88;
L_08AAAD88:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AAAD50; }
    goto L_08AAAD90;
L_08AAAD90:;
    a3 = LD32(a2);
    goto L_08AAAD94;
L_08AAAD94:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AAAD30;
L_08AAADAC:;
    return;
}

/* 08AAADB4 */
u64 func_08AAADB4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AAADB4:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AAAE48; }
    goto L_08AAADE0;
L_08AAADE0:;
    v0 = LD32(s1);
    goto L_08AAADE4;
L_08AAADE4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AAAE38; }
    goto L_08AAADF8;
L_08AAADF8:;
    v0 = LD_U8(s0+8);
    goto L_08AAADFC;
L_08AAADFC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AAAE78; }
    goto L_08AAAE04;
L_08AAAE04:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AAAE68; }
    goto L_08AAAE0C;
L_08AAAE0C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AAAE14;
L_08AAAE14:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAAE20;
L_08AAAE20:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AAAE2C;
L_08AAAE2C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AAADFC; }
    goto L_08AAAE34;
L_08AAAE34:;
    v1 = LD32(s1+4);
    goto L_08AAAE38;
L_08AAAE38:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AAADE4; }
    goto L_08AAAE48;
L_08AAAE48:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08AAAE68:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AAAE14;
L_08AAAE78:;
    s0 = LD32(s0+4);
    goto L_08AAAE2C;
}

/* 08AAAE80 */
rv_t func_08AAAE80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAE80:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08855840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAE90;
L_08AAAE90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAE9C */
rv_t func_08AAAE9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAE9C:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_088558A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAEAC;
L_08AAAEAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAEB8 */
rv_t func_08AAAEB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAEB8:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08855A54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAEC8;
L_08AAAEC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAED4 */
rv_t func_08AAAED4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAED4:;
    sp = sp - 16;
    a0 = a0 - 60;
    { rv_t r_ = func_08855B24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAAEE4;
L_08AAAEE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAAEF0 */
void func_08AAAEF0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAEF0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAAF44; }
    goto L_08AAAF28;
L_08AAAF28:;
    v0 = LD32(a0);
    goto L_08AAAF2C;
L_08AAAF2C:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAAF58; }
    goto L_08AAAF34;
L_08AAAF34:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAAF2C; }
    goto L_08AAAF44;
L_08AAAF44:;
    v0 = 0 + 0;
    goto L_08AAAF48;
L_08AAAF48:;
    sp = sp + 16;
    return;
L_08AAAF58:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAAF6C; }
    goto L_08AAAF60;
L_08AAAF60:;
    ST8(a0+8, v0);
    goto L_08AAAF64;
L_08AAAF64:;
    v0 = 1;
    goto L_08AAAF48;
L_08AAAF6C:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAAF90; }
    goto L_08AAAF74;
L_08AAAF74:;
    ST32(a2+4, v0);
    goto L_08AAAF78;
L_08AAAF78:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAAF80;
L_08AAAF80:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAAF64;
L_08AAAF90:;
    ST32(v1, v0);
    goto L_08AAAF78;
}

/* 08AAAF98 */
void func_08AAAF98(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAAF98:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAAFEC; }
    goto L_08AAAFD0;
L_08AAAFD0:;
    v0 = LD32(a0);
    goto L_08AAAFD4;
L_08AAAFD4:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAB000; }
    goto L_08AAAFDC;
L_08AAAFDC:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAAFD4; }
    goto L_08AAAFEC;
L_08AAAFEC:;
    v0 = 0 + 0;
    goto L_08AAAFF0;
L_08AAAFF0:;
    sp = sp + 16;
    return;
L_08AAB000:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAB014; }
    goto L_08AAB008;
L_08AAB008:;
    ST8(a0+8, v0);
    goto L_08AAB00C;
L_08AAB00C:;
    v0 = 1;
    goto L_08AAAFF0;
L_08AAB014:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAB038; }
    goto L_08AAB01C;
L_08AAB01C:;
    ST32(a2+4, v0);
    goto L_08AAB020;
L_08AAB020:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB028;
L_08AAB028:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAB00C;
L_08AAB038:;
    ST32(v1, v0);
    goto L_08AAB020;
}

/* 08AAB040 */
rv_t func_08AAB040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB040:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_088587F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB05C;
L_08AAB05C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAB068 */
rv_t func_08AAB068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB068:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088587F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB088;
L_08AAB088:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB090;
L_08AAB090:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAB0A0 */
rv_t func_08AAB0A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB0A0:;
    sp = sp - 16;
    a0 = a0 - 84;
    { rv_t r_ = func_088566D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB0B0;
L_08AAB0B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAB0BC */
rv_t func_08AAB0BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB0BC:;
    sp = sp - 16;
    a0 = a0 - 84;
    { rv_t r_ = func_0885676C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB0CC;
L_08AAB0CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAB0D8 */
rv_t func_08AAB0D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB0D8:;
    sp = sp - 16;
    a0 = a0 - 84;
    { rv_t r_ = func_088568C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB0E8;
L_08AAB0E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAB0F4 */
rv_t func_08AAB0F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB0F4:;
    sp = sp - 16;
    a0 = a0 - 84;
    { rv_t r_ = func_08856B90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB104;
L_08AAB104:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAB110 */
rv_t func_08AAB110(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AAB110:;
    sp = sp - 32;
    v0 = 0 + 0;
    s0 = a0 + 0;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_08AAB134; }
    goto L_08AAB130;
L_08AAB130:;
    v0 = LD32(a1);
    goto L_08AAB134;
L_08AAB134:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAB2C8; }
    goto L_08AAB13C;
L_08AAB13C:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AAB148; }
    goto L_08AAB144;
L_08AAB144:;
    v0 = LD32(a3);
    goto L_08AAB148;
L_08AAB148:;
    v1 = v0 + 0;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(v1+8); goto L_08AAB194; }
    goto L_08AAB158;
L_08AAB158:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(v1+8); goto L_08AAB194; }
    goto L_08AAB16C;
L_08AAB16C:;
    v1 = v0 + 0;
    goto L_08AAB170;
L_08AAB170:;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(v1+8); goto L_08AAB194; }
    goto L_08AAB17C;
L_08AAB17C:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = v0 + 0; goto L_08AAB170; }
    goto L_08AAB190;
L_08AAB190:;
    a0 = LD32(v1+8);
    goto L_08AAB194;
L_08AAB194:;
    cnd_ = a0 == 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_08AAB1E4; }
    goto L_08AAB19C;
L_08AAB19C:;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+4));
    a2 = LD32(v1+12);
    f2 = f12 - f1;
    f0 = f0 - f1;
    v0 = D_08AEBC98 - (-17256);
    f1 = BITSF(LD32(v0-17256));
    cnd_ = a2 == 0;
    f12 = f2 / f0;
    if (cnd_) { goto L_08AAB1CC; }
    goto L_08AAB1C0;
L_08AAB1C0:;
    t0 = LD32(a0+8);
    cnd_ = t0 != 0;
    v0 = D_08AEBC9C - (-17252);
    if (cnd_) { goto L_08AAB1F4; }
    goto L_08AAB1CC;
L_08AAB1CC:;
    f2 = f1 - f12;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(a0));
    f0 = f0 * f2;
    f1 = f1 * f12;
    f0 = f1 + f0;
    goto L_08AAB1E4;
L_08AAB1E4:;
    goto L_08AAB1E8;
L_08AAB1E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08AAB1F4:;
    f0 = BITSF(LD32(v0-17252));
    v0 = D_08AEBCA0 - (-17248);
    f7 = BITSF(LD32(v1));
    f5 = BITSF(LD32(a2));
    f1 = BITSF(LD32(v0-17248));
    f3 = BITSF(LD32(a0));
    f2 = f5 + f5;
    f1 = f7 * f1;
    f4 = f3 * f0;
    v0 = D_08AEBCA4 - (-17244);
    f0 = f7 * f0;
    f2 = f2 - f1;
    f1 = BITSF(LD32(v0-17244));
    f6 = f12 * f12;
    f0 = f0 - f4;
    f1 = f3 * f1;
    f4 = BITSF(LD32(t0));
    f3 = f3 - f5;
    v0 = D_08AEBCA8 - (-17240);
    f2 = f2 + f1;
    f0 = f0 + f4;
    f1 = f12 * f6;
    f3 = f3 * f12;
    f2 = f2 - f4;
    f0 = f0 - f5;
    v1 = LD32(a3+12);
    f2 = f2 * f6;
    f0 = f0 * f1;
    f1 = BITSF(LD32(v0-17240));
    v1 = v1 & 0x1;
    f0 = f0 + f2;
    f0 = f0 + f3;
    f0 = f0 * f1;
    f0 = f0 + f7;
    cnd_ = v1 != 0;
    ST32(sp, FBITS(f0));
    if (cnd_) { goto L_08AAB2B0; }
    goto L_08AAB284;
L_08AAB284:;
    v0 = LD32(a1+12);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(a1+8)); goto L_08AAB29C; }
    goto L_08AAB294;
L_08AAB294:;
    f0 = BITSF(LD32(sp));
    goto L_08AAB1E4;
L_08AAB29C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_088324B4(a1, f12);
    goto L_08AAB2A8;
L_08AAB2A8:;
    f0 = BITSF(LD32(sp));
    goto L_08AAB1E4;
L_08AAB2B0:;
    f12 = BITSF(LD32(a3+4));
    a1 = sp + 0;
    a0 = s0 + 0;
    func_08832498(a1, f12);
    goto L_08AAB2C0;
L_08AAB2C0:;
    a1 = LD32(s0);
    goto L_08AAB284;
L_08AAB2C8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB2D0;
L_08AAB2D0:;
    goto L_08AAB1E8;
}

/* 08AAB2D8 */
void func_08AAB2D8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB2D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AAB308; }
    goto L_08AAB2F4;
L_08AAB2F4:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AAB308:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB310;
L_08AAB310:;
    ST32(s0, 0);
    goto L_08AAB2F4;
}

/* 08AAB318 */
void func_08AAB318(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAB318:;
    sp = sp - 16;
    v0 = a1 << 3;
    s0 = a0 + 0;
    a0 = v0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08AAB34C; }
    goto L_08AAB334;
L_08AAB334:;
    ST32(s0, 0);
    goto L_08AAB338;
L_08AAB338:;
    v0 = 1;
    sp = sp + 16;
    return;
L_08AAB34C:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB354;
L_08AAB354:;
    ST32(s0, v0);
    goto L_08AAB338;
}

/* 08AAB35C */
void func_08AAB35C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AAB35C:;
    sp = sp - 48;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    a1 = 10003;
    s0 = a2 & 0xff;
    s3 = a3 & 0xff;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB39C;
L_08AAB39C:;
    cnd_ = s0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08AAB4CC; }
    goto L_08AAB3A4;
L_08AAB3A4:;
    a1 = 0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB3B0;
L_08AAB3B0:;
    v0 = LD32(s2);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAB3C4; }
    goto L_08AAB3C0;
L_08AAB3C0:;
    v1 = LD32(v0);
    goto L_08AAB3C4;
L_08AAB3C4:;
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_08AAB3D8; }
    goto L_08AAB3CC;
L_08AAB3CC:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08AAB3CC; }
    goto L_08AAB3D8;
L_08AAB3D8:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB3E0;
L_08AAB3E0:;
    v0 = LD32(s2);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAB3F0; }
    goto L_08AAB3EC;
L_08AAB3EC:;
    v1 = LD32(v0);
    goto L_08AAB3F0;
L_08AAB3F0:;
    cnd_ = v1 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08AAB420; }
    goto L_08AAB3F8;
L_08AAB3F8:;
    f12 = BITSF(LD32(s0));
    goto L_08AAB3FC;
L_08AAB3FC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB404;
L_08AAB404:;
    f12 = BITSF(LD32(s0+4));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB410;
L_08AAB410:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0)); goto L_08AAB3FC; }
    goto L_08AAB41C;
L_08AAB41C:;
    v0 = LD32(s2);
    goto L_08AAB420;
L_08AAB420:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAB4A8; }
    goto L_08AAB428;
L_08AAB428:;
    f12 = BITSF(LD32(v0+4));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB434;
L_08AAB434:;
    v1 = LD32(s2);
    a0 = s1 + 0;
    f12 = BITSF(LD32(v1+8));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB444;
L_08AAB444:;
    v1 = LD32(s2);
    a0 = s1 + 0;
    a1 = LD32(v1+12);
    goto L_08AAB450;
L_08AAB450:;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB458;
L_08AAB458:;
    a1 = LD32(s2+4);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB464;
L_08AAB464:;
    f12 = BITSF(LD32(s2+12));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB470;
L_08AAB470:;
    f12 = BITSF(LD32(s2+16));
    a0 = s1 + 0;
    goto L_08AAB478;
L_08AAB478:;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB480;
L_08AAB480:;
    goto L_08AAB484;
L_08AAB484:;
    sp = sp + 48;
    return;
L_08AAB4A8:;
    f12 = BITSF(0);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB4B4;
L_08AAB4B4:;
    f12 = BITSF(0);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB4C0;
L_08AAB4C0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    goto L_08AAB450;
L_08AAB4CC:;
    a1 = 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB4D4;
L_08AAB4D4:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AAB4E4; }
    goto L_08AAB4E0;
L_08AAB4E0:;
    v0 = LD32(v1);
    goto L_08AAB4E4;
L_08AAB4E4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08AAB7F4; }
    goto L_08AAB4EC;
L_08AAB4EC:;
    f12 = BITSF(LD32(s2+12));
    a0 = s2 + 0;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB4F8;
L_08AAB4F8:;
    f1 = f0;
    f0 = BITSF(LD32(s0));
    goto L_08AAB500;
L_08AAB500:;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s2); goto L_08AAB6A8; }
    goto L_08AAB510;
L_08AAB510:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0)); goto L_08AAB500; }
    goto L_08AAB51C;
L_08AAB51C:;
    cnd_ = s3 == 0;
    if (cnd_) { f12 = BITSF(LD32(s2+12)); goto L_08AAB680; }
    goto L_08AAB524;
L_08AAB524:;
    a0 = s1 + 0;
    a1 = 2;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB530;
L_08AAB530:;
    v1 = LD32(s2+4);
    v0 = 1;
    f0 = BITSF(0);
    cnd_ = v1 == v0;
    f21 = BITSF(LD32(s2+12));
    if (cnd_) { goto L_08AAB5EC; }
    goto L_08AAB544;
L_08AAB544:;
    v0 = v1 - 1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f22 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AAB664; }
    goto L_08AAB554;
L_08AAB554:;
    f0 = BITSF(LD32(s2+16));
    a0 = s2 + 0;
    f0 = f0 - f21;
    f20 = f0 / f22;
    f0 = func_0883248C();
    goto L_08AAB568;
L_08AAB568:;
    v1 = LD32(s2+4);
    a2 = 1;
    v0 = a2 < v1;
    cnd_ = v0 == 0;
    f12 = f0;
    if (cnd_) { goto L_08AAB5E8; }
    goto L_08AAB57C;
L_08AAB57C:;
    a3 = LD32(s2+8);
    t0 = D_08AEBCB0 - (-17232);
    f3 = BITSF(LD32(s2+12));
    f4 = BITSF(LD32(t0-17232));
    a1 = a3 + 4;
    goto L_08AAB590;
L_08AAB590:;
    f1 = BITSF(a2);
    a0 = a2 & 0x1;
    v0 = a2 >> 1;
    a0 = a0 | v0;
    cnd_ = (s32)a2 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AAB654; }
    goto L_08AAB5A8;
L_08AAB5A8:;
    f0 = f20 * f0;
    f2 = f3 + f0;
    fcc = FCMP(f2, f21, 14);
    cnd_ = !fcc;
    v0 = a2 - 1;
    if (cnd_) { goto L_08AAB610; }
    goto L_08AAB5C0;
L_08AAB5C0:;
    f0 = BITSF(LD32(a1-4));
    f1 = BITSF(LD32(a1));
    a2 = a2 + 1;
    v0 = a2 < v1;
    f0 = f0 + f1;
    a1 = a1 + 4;
    f0 = f0 * f4;
    f0 = f0 * f20;
    cnd_ = v0 != 0;
    f12 = f12 + f0;
    if (cnd_) { goto L_08AAB590; }
    goto L_08AAB5E8;
L_08AAB5E8:;
    f0 = f12;
    goto L_08AAB5EC;
L_08AAB5EC:;
    a0 = s1 + 0;
    f12 = f0;
    { rv_t r_ = func_0882D974(a0, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB5F8;
L_08AAB5F8:;
    f12 = BITSF(LD32(s2+16));
    a0 = s2 + 0;
    f0 = func_08AABEE0(a0, f12);
    goto L_08AAB604;
L_08AAB604:;
    a0 = s1 + 0;
    goto L_08AAB608;
L_08AAB608:;
    f12 = f0;
    goto L_08AAB478;
L_08AAB610:;
    v0 = v0 << 2;
    v1 = a2 << 2;
    v1 = v1 + a3;
    v0 = v0 + a3;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1));
    f2 = f21 - f2;
    f3 = BITSF(LD32(t0-17232));
    f0 = f0 - f1;
    f2 = f2 + f20;
    f0 = f0 * f22;
    f0 = f0 * f2;
    f0 = f0 * f3;
    f1 = f1 + f0;
    f1 = f1 * f2;
    f12 = f12 + f1;
    goto L_08AAB5E8;
L_08AAB654:;
    f1 = BITSF(a0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AAB5A8;
L_08AAB664:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f22 = (float)(s32)FBITS(f1);
    f22 = f22 + f22;
    goto L_08AAB554;
L_08AAB680:;
    a0 = s2 + 0;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB688;
L_08AAB688:;
    f20 = f0;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB698;
L_08AAB698:;
    a0 = s1 + 0;
    f12 = f20;
    goto L_08AAB478;
L_08AAB6A4:;
    v1 = LD32(s2);
    goto L_08AAB6A8;
L_08AAB6A8:;
    v0 = 0 + 0;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AAB6B8; }
    goto L_08AAB6B4;
L_08AAB6B4:;
    a0 = LD32(v1);
    goto L_08AAB6B8;
L_08AAB6B8:;
    cnd_ = a0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08AAB6CC; }
    goto L_08AAB6C0;
L_08AAB6C0:;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08AAB6C0; }
    goto L_08AAB6CC;
L_08AAB6CC:;
    v0 = v0 ^ 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s2+4); goto L_08AAB6E4; }
    goto L_08AAB6D8;
L_08AAB6D8:;
    cnd_ = s3 == 0;
    a1 = 2;
    if (cnd_) { goto L_08AAB7C0; }
    goto L_08AAB6E0;
L_08AAB6E0:;
    a1 = LD32(s2+4);
    goto L_08AAB6E4;
L_08AAB6E4:;
    a0 = s1 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB6F0;
L_08AAB6F0:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    v0 = D_08AEBCAC - (-17236);
    if (cnd_) { goto L_08AAB480; }
    goto L_08AAB6FC;
L_08AAB6FC:;
    f20 = BITSF(LD32(v0-17236));
    a2 = s0 << 2;
    goto L_08AAB704;
L_08AAB704:;
    a0 = s2 + 0;
    cnd_ = s3 == 0;
    a1 = v1 - 1;
    if (cnd_) { goto L_08AAB7AC; }
    goto L_08AAB710;
L_08AAB710:;
    f0 = BITSF(s0);
    v1 = a1 >> 1;
    a3 = a1 & 0x1;
    a2 = s0 & 0x1;
    v0 = s0 >> 1;
    a2 = a2 | v0;
    a3 = a3 | v1;
    cnd_ = (s32)s0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AAB79C; }
    goto L_08AAB734;
L_08AAB734:;
    f1 = BITSF(a1);
    cnd_ = (s32)a1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AAB78C; }
    goto L_08AAB740;
L_08AAB740:;
    f0 = f20 / f0;
    f12 = BITSF(LD32(s2+12));
    f1 = BITSF(LD32(s2+16));
    f0 = f2 * f0;
    f2 = f20 - f0;
    f1 = f1 * f0;
    f12 = f12 * f2;
    f12 = f12 + f1;
    f0 = func_08AABEE0(a0, f12);
    goto L_08AAB764;
L_08AAB764:;
    f12 = f0;
    a0 = s1 + 0;
    goto L_08AAB76C;
L_08AAB76C:;
    s0 = s0 + 1;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB774;
L_08AAB774:;
    v1 = LD32(s2+4);
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    a2 = s0 << 2;
    if (cnd_) { goto L_08AAB704; }
    goto L_08AAB784;
L_08AAB784:;
    goto L_08AAB484;
L_08AAB78C:;
    f1 = BITSF(a3);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AAB740;
L_08AAB79C:;
    f1 = BITSF(a2);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_08AAB734;
L_08AAB7AC:;
    v0 = LD32(s2+8);
    a0 = s1 + 0;
    v0 = a2 + v0;
    f12 = BITSF(LD32(v0));
    goto L_08AAB76C;
L_08AAB7C0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB7C8;
L_08AAB7C8:;
    f12 = BITSF(LD32(s2+12));
    a0 = s2 + 0;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB7D4;
L_08AAB7D4:;
    f12 = f0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB7E0;
L_08AAB7E0:;
    f12 = BITSF(LD32(s2+16));
    a0 = s2 + 0;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB7EC;
L_08AAB7EC:;
    a0 = s1 + 0;
    goto L_08AAB608;
L_08AAB7F4:;
    f12 = BITSF(LD32(s2+12));
    a0 = s2 + 0;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB800;
L_08AAB800:;
    v1 = LD32(s2+4);
    f1 = f0;
    v0 = s0 < v1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08AAB51C; }
    goto L_08AAB814;
L_08AAB814:;
    v0 = LD32(s2+8);
    f0 = BITSF(LD32(v0));
    goto L_08AAB81C;
L_08AAB81C:;
    a1 = a1 + 1;
    a0 = a1 < v1;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = v0 + 4;
    if (cnd_) { goto L_08AAB6A4; }
    goto L_08AAB834;
L_08AAB834:;
    cnd_ = a0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0)); goto L_08AAB81C; }
    goto L_08AAB83C;
L_08AAB83C:;
    goto L_08AAB51C;
}

/* 08AAB844 */
void func_08AAB844(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08AAB844:;
    sp = sp - 48;
    s3 = a1 + 0;
    s0 = a0 + 0;
    f23 = f12;
    f22 = f13;
    f21 = f14;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    f20 = f15;
    if (cnd_) { goto L_08AAB9B8; }
    goto L_08AAB88C;
L_08AAB88C:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08AAB8C4; }
    goto L_08AAB898;
L_08AAB898:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08AAB8B8; }
    goto L_08AAB8A4;
L_08AAB8A4:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AAB98C; }
    goto L_08AAB8B0;
L_08AAB8B0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08AAB97C; }
    goto L_08AAB8B8;
L_08AAB8B8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB8C0;
L_08AAB8C0:;
    ST32(s0, 0);
    goto L_08AAB8C4;
L_08AAB8C4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB8CC;
L_08AAB8CC:;
    ST32(v0+12, 0);
    a0 = s3 << 2;
    ST32(s0+4, s3);
    ST32(s0+12, FBITS(f21));
    ST32(s0+16, FBITS(f20));
    ST32(s0, v0);
    ST32(v0, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAB8EC;
L_08AAB8EC:;
    f12 = f23 + f23;
    f13 = f21 + f21;
    ST32(s0+8, v0);
    a0 = s0 + 0;
    f12 = f12 - f22;
    f13 = f13 - f20;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_08AAB908;
L_08AAB908:;
    a0 = s0 + 0;
    f12 = f23;
    f13 = f21;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_08AAB918;
L_08AAB918:;
    a0 = s0 + 0;
    f12 = f22;
    f13 = f20;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_08AAB928;
L_08AAB928:;
    f12 = f22 + f22;
    f13 = f20 + f20;
    a0 = s0 + 0;
    f12 = f12 - f23;
    f13 = f13 - f21;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_08AAB940;
L_08AAB940:;
    a0 = s0 + 0;
    func_08AABAF0(a0);
    goto L_08AAB948;
L_08AAB948:;
    a0 = s0 + 0;
    func_08AABB9C(a0);
    goto L_08AAB950;
L_08AAB950:;
    sp = sp + 48;
    return;
L_08AAB97C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB984;
L_08AAB984:;
    goto L_08AAB8B8;
L_08AAB98C:;
    func_08AA5FC8(a0);
    goto L_08AAB994;
L_08AAB994:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08AAB9A8; }
    goto L_08AAB9A0;
L_08AAB9A0:;
    s1 = LD32(s2);
    goto L_08AAB8B0;
L_08AAB9A8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB9B0;
L_08AAB9B0:;
    s1 = LD32(s2);
    goto L_08AAB8B0;
L_08AAB9B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAB9C0;
L_08AAB9C0:;
    ST32(s0+8, 0);
    goto L_08AAB88C;
}

/* 08AAB9C8 */
void func_08AAB9C8(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AAB9C8:;
    sp = sp - 32;
    v1 = 0 + 0;
    s0 = a0 + 0;
    f21 = f12;
    f20 = f13;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08AABA00; }
    goto L_08AAB9FC;
L_08AAB9FC:;
    v1 = LD32(v0);
    goto L_08AABA00;
L_08AABA00:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AABAAC; }
    goto L_08AABA08;
L_08AABA08:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AABA14; }
    goto L_08AABA10;
L_08AABA10:;
    v1 = LD32(v0);
    goto L_08AABA14;
L_08AABA14:;
    v0 = LD32(v1+8);
    cnd_ = v0 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08AABA58; }
    goto L_08AABA20;
L_08AABA20:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08AABA58; }
    goto L_08AABA34;
L_08AABA34:;
    s0 = v0 + 0;
    goto L_08AABA38;
L_08AABA38:;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AABA58; }
    goto L_08AABA44;
L_08AABA44:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { s0 = v0 + 0; goto L_08AABA38; }
    goto L_08AABA58;
L_08AABA58:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AABA60;
L_08AABA60:;
    ST32(v0+8, 0);
    v1 = v0 + 0;
    v0 = LD32(s0+8);
    ST32(v1, FBITS(f21));
    ST32(v1+8, v0);
    v0 = LD32(s0+8);
    ST32(v1+4, FBITS(f20));
    cnd_ = v0 == 0;
    ST32(v1+12, 0);
    if (cnd_) { goto L_08AABA88; }
    goto L_08AABA84;
L_08AABA84:;
    ST32(v0+12, v1);
    goto L_08AABA88;
L_08AABA88:;
    ST32(v1+12, s0);
    ST32(s0+8, v1);
    goto L_08AABA90;
L_08AABA90:;
    sp = sp + 32;
    return;
L_08AABAAC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AABAD4; }
    goto L_08AABAB4;
L_08AABAB4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AABABC;
L_08AABABC:;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0, FBITS(f21));
    ST32(v0+4, FBITS(f20));
    ST32(s1, v0);
    goto L_08AABA90;
L_08AABAD4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AABADC;
L_08AABADC:;
    ST32(v0+12, 0);
    s1 = v0 + 0;
    ST32(s0, v0);
    ST32(v0, 0);
    goto L_08AABAB4;
}

/* 08AABAF0 */
void func_08AABAF0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_08AABAF0:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AABB00; }
    goto L_08AABAFC;
L_08AABAFC:;
    v0 = LD32(a0);
    goto L_08AABB00;
L_08AABB00:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AABB94; }
    goto L_08AABB08;
L_08AABB08:;
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AABB14; }
    goto L_08AABB10;
L_08AABB10:;
    a2 = LD32(a0);
    goto L_08AABB14;
L_08AABB14:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08AABB20; }
    goto L_08AABB1C;
L_08AABB1C:;
    v0 = LD32(a0);
    goto L_08AABB20;
L_08AABB20:;
    v0 = LD32(v0+8);
    v1 = 0 + 0;
    f0 = BITSF(LD32(v0));
    cnd_ = a0 == 0;
    f1 = f0 + f0;
    if (cnd_) { goto L_08AABB38; }
    goto L_08AABB34;
L_08AABB34:;
    v1 = LD32(a0);
    goto L_08AABB38;
L_08AABB38:;
    v1 = LD32(v1+8);
    a1 = 0 + 0;
    v0 = LD32(v1+8);
    f0 = BITSF(LD32(v0));
    f0 = f1 - f0;
    cnd_ = a0 == 0;
    ST32(a2, FBITS(f0));
    if (cnd_) { goto L_08AABB58; }
    goto L_08AABB54;
L_08AABB54:;
    a1 = LD32(a0);
    goto L_08AABB58;
L_08AABB58:;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08AABB78; }
    goto L_08AABB64;
L_08AABB64:;
    v1 = v0 + 0;
    goto L_08AABB68;
L_08AABB68:;
    v0 = LD32(v1+8);
    a0 = v1 + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08AABB68; }
    goto L_08AABB78;
L_08AABB78:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(v0));
    v1 = LD32(v0+12);
    f0 = f0 + f0;
    f1 = BITSF(LD32(v1));
    f0 = f0 - f1;
    ST32(a0, FBITS(f0));
    goto L_08AABB94;
L_08AABB94:;
    return;
}

/* 08AABB9C */
void func_08AABB9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AABB9C:;
    sp = sp - 32;
    v0 = 1;
    a1 = LD32(a0+4);
    cnd_ = a1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08AABC88; }
    goto L_08AABBC0;
L_08AABBC0:;
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08AABC50; }
    goto L_08AABBC8;
L_08AABBC8:;
    v0 = D_08AEBCB4 - (-17228);
    f20 = BITSF(LD32(v0-17228));
    goto L_08AABBD0;
L_08AABBD0:;
    f0 = BITSF(s1);
    v0 = s1 >> 1;
    v1 = a1 - 1;
    a2 = s1 & 0x1;
    a2 = a2 | v0;
    a1 = v1 & 0x1;
    v0 = v1 >> 1;
    a0 = s0 + 0;
    a1 = a1 | v0;
    cnd_ = (s32)s1 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AABC78; }
    goto L_08AABBFC;
L_08AABBFC:;
    f1 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AABC68; }
    goto L_08AABC08;
L_08AABC08:;
    f0 = f20 / f0;
    f12 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(s0+16));
    f0 = f2 * f0;
    f2 = f20 - f0;
    f1 = f1 * f0;
    f12 = f12 * f2;
    f12 = f12 + f1;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AABC2C;
L_08AABC2C:;
    v1 = LD32(s0+4);
    a0 = LD32(s0+8);
    v0 = s1 << 2;
    s1 = s1 + 1;
    a1 = v1 + 0;
    v0 = v0 + a0;
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    ST32(v0, FBITS(f0));
    if (cnd_) { goto L_08AABBD0; }
    goto L_08AABC50;
L_08AABC50:;
    sp = sp + 32;
    return;
L_08AABC68:;
    f1 = BITSF(a1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AABC08;
L_08AABC78:;
    f1 = BITSF(a2);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_08AABBFC;
L_08AABC88:;
    f12 = BITSF(0);
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AABC94;
L_08AABC94:;
    v0 = LD32(s0+8);
    ST32(v0, FBITS(f0));
    goto L_08AABC50;
}

/* 08AABCA0 */
void func_08AABCA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AABCA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AABD10; }
    goto L_08AABCBC;
L_08AABCBC:;
    s0 = LD32(s0);
    goto L_08AABCC0;
L_08AABCC0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AABCE0; }
    goto L_08AABCC8;
L_08AABCC8:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AABCEC; }
    goto L_08AABCD4;
L_08AABCD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AABCDC;
L_08AABCDC:;
    goto L_08AABCE0;
L_08AABCE0:;
    sp = sp + 16;
    return;
L_08AABCEC:;
    func_08AA5FC8(a0);
    goto L_08AABCF4;
L_08AABCF4:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AABCD4; }
    goto L_08AABD00;
L_08AABD00:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AABD08;
L_08AABD08:;
    goto L_08AABCD4;
L_08AABD10:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AABD18;
L_08AABD18:;
    s0 = LD32(s0);
    goto L_08AABCC0;
}

/* 08AABD20 */
void func_08AABD20(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AABD20:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AABD74; }
    goto L_08AABD58;
L_08AABD58:;
    v0 = LD32(a0);
    goto L_08AABD5C;
L_08AABD5C:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AABD88; }
    goto L_08AABD64;
L_08AABD64:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AABD5C; }
    goto L_08AABD74;
L_08AABD74:;
    v0 = 0 + 0;
    goto L_08AABD78;
L_08AABD78:;
    sp = sp + 16;
    return;
L_08AABD88:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AABD9C; }
    goto L_08AABD90;
L_08AABD90:;
    ST8(a0+8, v0);
    goto L_08AABD94;
L_08AABD94:;
    v0 = 1;
    goto L_08AABD78;
L_08AABD9C:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AABDC0; }
    goto L_08AABDA4;
L_08AABDA4:;
    ST32(a2+4, v0);
    goto L_08AABDA8;
L_08AABDA8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AABDB0;
L_08AABDB0:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AABD94;
L_08AABDC0:;
    ST32(v1, v0);
    goto L_08AABDA8;
}

/* 08AABDC8 */
u32 func_08AABDC8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AABDC8:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AABE1C; }
    goto L_08AABDD8;
L_08AABDD8:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08AABE1C; }
    goto L_08AABDFC;
L_08AABDFC:;
    a0 = LD32(v1);
    goto L_08AABE00;
L_08AABE00:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AABE24; }
    goto L_08AABE0C;
L_08AABE0C:;
    v1 = LD32(v1+4);
    goto L_08AABE10;
L_08AABE10:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08AABE00; }
    goto L_08AABE18;
L_08AABE18:;
    a3 = 0 + 0;
    goto L_08AABE1C;
L_08AABE1C:;
    v0 = a3 + 0;
    return v0;
L_08AABE24:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_08AABE40; }
    goto L_08AABE2C;
L_08AABE2C:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08AABE10; }
    goto L_08AABE3C;
L_08AABE3C:;
    v0 = LD_U8(v1+8);
    goto L_08AABE40;
L_08AABE40:;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08AABE0C; }
    goto L_08AABE48;
L_08AABE48:;
    goto L_08AABE1C;
}

/* 08AABE50 */
rv_t func_08AABE50(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
L_08AABE50:;
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a0+16));
    v1 = LD32(a0+4);
    f12 = f12 - f1;
    f0 = f0 - f1;
    v1 = v1 - 1;
    f1 = BITSF(v1);
    v0 = D_08AEBCB8 - (-17224);
    f12 = f12 / f0;
    f3 = BITSF(LD32(v0-17224));
    f0 = (float)(s32)FBITS(f1);
    f2 = f12 * f0;
    f0 = BITSF(F2I(f2, 1));
    v0 = FBITS(f0);
    cnd_ = (s32)v0 < 0;
    a1 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08AABED8; }
    goto L_08AABE90;
L_08AABE90:;
    f12 = (float)(s32)FBITS(f0);
    a2 = v0 << 2;
    cnd_ = a1 != 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AABEB0; }
    goto L_08AABEA0;
L_08AABEA0:;
    v0 = LD32(a0+8);
    v0 = v1 + v0;
    goto L_08AABEA8;
L_08AABEA8:;
    f0 = BITSF(LD32(v0));
    return (rv_t){ v0, v1, f0 };
L_08AABEB0:;
    f2 = f2 - f12;
    v0 = LD32(a0+8);
    f3 = f3 - f2;
    v0 = a2 + v0;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f1 = f1 * f2;
    f0 = f0 * f3;
    f0 = f0 + f1;
    return (rv_t){ v0, v1, f0 };
L_08AABED8:;
    v0 = LD32(a0+8);
    goto L_08AABEA8;
}

/* 08AABEE0 */
float func_08AABEE0(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AABEE0:;
    sp = sp - 32;
    v0 = 1;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    f21 = f12;
    if (cnd_) { goto L_08AAC044; }
    goto L_08AABF0C;
L_08AABF0C:;
    v0 = v1 - 1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f22 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08AAC028; }
    goto L_08AABF1C;
L_08AABF1C:;
    f0 = BITSF(LD32(s0+16));
    f1 = BITSF(LD32(s0+12));
    a0 = s0 + 0;
    f0 = f0 - f1;
    f20 = f0 / f22;
    f0 = func_0883248C();
    goto L_08AABF34;
L_08AABF34:;
    a2 = LD32(s0+4);
    v1 = 1;
    v0 = v1 < a2;
    cnd_ = v0 == 0;
    f12 = f0;
    if (cnd_) { goto L_08AABFB4; }
    goto L_08AABF48;
L_08AABF48:;
    a3 = LD32(s0+8);
    t0 = D_08AEBCBC - (-17220);
    f3 = BITSF(LD32(s0+12));
    f4 = BITSF(LD32(t0-17220));
    a1 = a3 + 4;
    goto L_08AABF5C;
L_08AABF5C:;
    f1 = BITSF(v1);
    a0 = v1 & 0x1;
    v0 = v1 >> 1;
    a0 = a0 | v0;
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08AAC018; }
    goto L_08AABF74;
L_08AABF74:;
    f0 = f20 * f0;
    f2 = f3 + f0;
    fcc = FCMP(f2, f21, 14);
    cnd_ = !fcc;
    v0 = v1 - 1;
    if (cnd_) { goto L_08AABFD4; }
    goto L_08AABF8C;
L_08AABF8C:;
    f0 = BITSF(LD32(a1-4));
    f1 = BITSF(LD32(a1));
    v1 = v1 + 1;
    v0 = v1 < a2;
    f0 = f0 + f1;
    a1 = a1 + 4;
    f0 = f0 * f4;
    f0 = f0 * f20;
    cnd_ = v0 != 0;
    f12 = f12 + f0;
    if (cnd_) { goto L_08AABF5C; }
    goto L_08AABFB4;
L_08AABFB4:;
    f0 = f12;
    goto L_08AABFB8;
L_08AABFB8:;
    sp = sp + 32;
    return f0;
L_08AABFD4:;
    v0 = v0 << 2;
    v1 = v1 << 2;
    v1 = v1 + a3;
    v0 = v0 + a3;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1));
    f2 = f21 - f2;
    f3 = BITSF(LD32(t0-17220));
    f0 = f0 - f1;
    f2 = f2 + f20;
    f0 = f0 * f22;
    f0 = f0 * f2;
    f0 = f0 * f3;
    f1 = f1 + f0;
    f1 = f1 * f2;
    f12 = f12 + f1;
    goto L_08AABFB4;
L_08AAC018:;
    f1 = BITSF(a0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08AABF74;
L_08AAC028:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f22 = (float)(s32)FBITS(f1);
    f22 = f22 + f22;
    goto L_08AABF1C;
L_08AAC044:;
    f0 = BITSF(LD32(a0+12));
    v0 = LD32(a0+8);
    f0 = f12 - f0;
    f1 = BITSF(LD32(v0));
    f0 = f1 * f0;
    goto L_08AABFB8;
}

/* 08AAC05C */
void func_08AAC05C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC05C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAC0B0; }
    goto L_08AAC094;
L_08AAC094:;
    v0 = LD32(a0);
    goto L_08AAC098;
L_08AAC098:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAC0C4; }
    goto L_08AAC0A0;
L_08AAC0A0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAC098; }
    goto L_08AAC0B0;
L_08AAC0B0:;
    v0 = 0 + 0;
    goto L_08AAC0B4;
L_08AAC0B4:;
    sp = sp + 16;
    return;
L_08AAC0C4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAC0D8; }
    goto L_08AAC0CC;
L_08AAC0CC:;
    ST8(a0+8, v0);
    goto L_08AAC0D0;
L_08AAC0D0:;
    v0 = 1;
    goto L_08AAC0B4;
L_08AAC0D8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAC0FC; }
    goto L_08AAC0E0;
L_08AAC0E0:;
    ST32(a2+4, v0);
    goto L_08AAC0E4;
L_08AAC0E4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC0EC;
L_08AAC0EC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAC0D0;
L_08AAC0FC:;
    ST32(v1, v0);
    goto L_08AAC0E4;
}

/* 08AAC104 */
void func_08AAC104(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC104:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAC158; }
    goto L_08AAC13C;
L_08AAC13C:;
    v0 = LD32(a0);
    goto L_08AAC140;
L_08AAC140:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAC16C; }
    goto L_08AAC148;
L_08AAC148:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAC140; }
    goto L_08AAC158;
L_08AAC158:;
    v0 = 0 + 0;
    goto L_08AAC15C;
L_08AAC15C:;
    sp = sp + 16;
    return;
L_08AAC16C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAC180; }
    goto L_08AAC174;
L_08AAC174:;
    ST8(a0+8, v0);
    goto L_08AAC178;
L_08AAC178:;
    v0 = 1;
    goto L_08AAC15C;
L_08AAC180:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAC1A4; }
    goto L_08AAC188;
L_08AAC188:;
    ST32(a2+4, v0);
    goto L_08AAC18C;
L_08AAC18C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC194;
L_08AAC194:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAC178;
L_08AAC1A4:;
    ST32(v1, v0);
    goto L_08AAC18C;
}

/* 08AAC1AC */
rv_t func_08AAC1AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC1AC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08859534(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC1C4;
L_08AAC1C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC1D0 */
rv_t func_08AAC1D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC1D0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088595A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC1E8;
L_08AAC1E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC1F4 */
rv_t func_08AAC1F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC1F4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08859624(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC20C;
L_08AAC20C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC218 */
rv_t func_08AAC218(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAC218:;
    v0 = a0 + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC220 */
rv_t func_08AAC220(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAC220:;
    v0 = a0 + 28;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC228 */
void func_08AAC228(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC228:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAC290; }
    goto L_08AAC270;
L_08AAC270:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAC278;
L_08AAC278:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAC2A4; }
    goto L_08AAC280;
L_08AAC280:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAC278; }
    goto L_08AAC290;
L_08AAC290:;
    v0 = 0 + 0;
    goto L_08AAC294;
L_08AAC294:;
    sp = sp + 16;
    return;
L_08AAC2A4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAC2B8; }
    goto L_08AAC2AC;
L_08AAC2AC:;
    ST8(a0+8, v0);
    goto L_08AAC2B0;
L_08AAC2B0:;
    v0 = 1;
    goto L_08AAC294;
L_08AAC2B8:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAC2DC; }
    goto L_08AAC2C0;
L_08AAC2C0:;
    ST32(v1+4, v0);
    goto L_08AAC2C4;
L_08AAC2C4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC2CC;
L_08AAC2CC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAC2B0;
L_08AAC2DC:;
    ST32(a1, v0);
    goto L_08AAC2C4;
}

/* 08AAC2E4 */
rv_t func_08AAC2E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAC2E4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC2EC */
rv_t func_08AAC2EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAC2EC:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC2F4 */
rv_t func_08AAC2F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAC2F4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC2FC */
rv_t func_08AAC2FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC2FC:;
    sp = sp - 16;
    t0 = t0 & 0xff;
    a0 = a0 + 88;
    { rv_t r_ = func_088D1CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC310;
L_08AAC310:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC31C */
rv_t func_08AAC31C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAC31C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC324 */
rv_t func_08AAC324(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC324:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885AB18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC33C;
L_08AAC33C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC348 */
rv_t func_08AAC348(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC348:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885AB18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC360;
L_08AAC360:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC36C */
rv_t func_08AAC36C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC36C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885AB18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC384;
L_08AAC384:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC390 */
rv_t func_08AAC390(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC390:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885ABF8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC3A8;
L_08AAC3A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC3B4 */
rv_t func_08AAC3B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC3B4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885ABF8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC3CC;
L_08AAC3CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC3D8 */
rv_t func_08AAC3D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC3D8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885ABF8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC3F0;
L_08AAC3F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC3FC */
rv_t func_08AAC3FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC3FC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885ACE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC414;
L_08AAC414:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC420 */
rv_t func_08AAC420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC420:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-64);
    a0 = a0 + v1;
    { rv_t r_ = func_0885ACE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC438;
L_08AAC438:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC444 */
rv_t func_08AAC444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC444:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885ACE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC45C;
L_08AAC45C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC468 */
rv_t func_08AAC468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC468:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885B130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC480;
L_08AAC480:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC48C */
rv_t func_08AAC48C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC48C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-28);
    a0 = a0 + v1;
    { rv_t r_ = func_0885B130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC4A4;
L_08AAC4A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC4B0 */
rv_t func_08AAC4B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC4B0:;
    v1 = D_08AF3648 - (13896);
    sp = sp - 16;
    v1 = v1 + 13896;
    v0 = v1 + 108;
    s1 = a0 + 0;
    a0 = v1 + 220;
    ST32(s1+4, v0);
    a1 = D_08AF3740 - (14144);
    a1 = a1 + 14144;
    ST32(s1, v1);
    a1 = a1 + 12;
    ST32(s1+268, a0);
    a0 = s1 + 4;
    s0 = s1 + 268;
    func_0885D658(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AAC4F8;
L_08AAC4F8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC500;
L_08AAC500:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC508;
L_08AAC508:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC51C */
rv_t func_08AAC51C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC51C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAC4B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC534;
L_08AAC534:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC540 */
rv_t func_08AAC540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC540:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAC4B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC558;
L_08AAC558:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC564 */
rv_t func_08AAC564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC564:;
    v0 = D_08AF3648 - (13896);
    sp = sp - 16;
    v0 = v0 + 13896;
    v1 = v0 + 220;
    s0 = a0 + 0;
    a0 = v0 + 108;
    ST32(s0+268, v1);
    a1 = D_08AF3740 - (14144);
    a1 = a1 + 14144;
    ST32(s0, v0);
    a1 = a1 + 12;
    ST32(s0+4, a0);
    a0 = s0 + 4;
    s0 = s0 + 268;
    func_0885D658(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AAC5A8;
L_08AAC5A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC5B0;
L_08AAC5B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC5C0 */
rv_t func_08AAC5C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC5C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAC564(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC5D8;
L_08AAC5D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC5E4 */
rv_t func_08AAC5E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC5E4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAC564(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC5FC;
L_08AAC5FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC608 */
void func_08AAC608(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC608:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAC670; }
    goto L_08AAC650;
L_08AAC650:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAC658;
L_08AAC658:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAC684; }
    goto L_08AAC660;
L_08AAC660:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAC658; }
    goto L_08AAC670;
L_08AAC670:;
    v0 = 0 + 0;
    goto L_08AAC674;
L_08AAC674:;
    sp = sp + 16;
    return;
L_08AAC684:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAC698; }
    goto L_08AAC68C;
L_08AAC68C:;
    ST8(a0+8, v0);
    goto L_08AAC690;
L_08AAC690:;
    v0 = 1;
    goto L_08AAC674;
L_08AAC698:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAC6BC; }
    goto L_08AAC6A0;
L_08AAC6A0:;
    ST32(v1+4, v0);
    goto L_08AAC6A4;
L_08AAC6A4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC6AC;
L_08AAC6AC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAC690;
L_08AAC6BC:;
    ST32(a1, v0);
    goto L_08AAC6A4;
}

/* 08AAC6C4 */
rv_t func_08AAC6C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC6C4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C4B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC6DC;
L_08AAC6DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC6E8 */
rv_t func_08AAC6E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC6E8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C4B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC700;
L_08AAC700:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC70C */
rv_t func_08AAC70C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC70C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C4B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC724;
L_08AAC724:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC730 */
rv_t func_08AAC730(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC730:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C5B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC748;
L_08AAC748:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC754 */
rv_t func_08AAC754(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC754:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C5B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC76C;
L_08AAC76C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC778 */
rv_t func_08AAC778(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC778:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C5B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC790;
L_08AAC790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC79C */
rv_t func_08AAC79C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC79C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C6C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC7B4;
L_08AAC7B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC7C0 */
rv_t func_08AAC7C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC7C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-64);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C6C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC7D8;
L_08AAC7D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC7E4 */
rv_t func_08AAC7E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC7E4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C6C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC7FC;
L_08AAC7FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC808 */
rv_t func_08AAC808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC808:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C8A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC820;
L_08AAC820:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC82C */
rv_t func_08AAC82C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC82C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-28);
    a0 = a0 + v1;
    { rv_t r_ = func_0885C8A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC844;
L_08AAC844:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC850 */
void func_08AAC850(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC850:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAC8B8; }
    goto L_08AAC898;
L_08AAC898:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAC8A0;
L_08AAC8A0:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAC8CC; }
    goto L_08AAC8A8;
L_08AAC8A8:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAC8A0; }
    goto L_08AAC8B8;
L_08AAC8B8:;
    v0 = 0 + 0;
    goto L_08AAC8BC;
L_08AAC8BC:;
    sp = sp + 16;
    return;
L_08AAC8CC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAC8E0; }
    goto L_08AAC8D4;
L_08AAC8D4:;
    ST8(a0+8, v0);
    goto L_08AAC8D8;
L_08AAC8D8:;
    v0 = 1;
    goto L_08AAC8BC;
L_08AAC8E0:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAC904; }
    goto L_08AAC8E8;
L_08AAC8E8:;
    ST32(v1+4, v0);
    goto L_08AAC8EC;
L_08AAC8EC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAC8F4;
L_08AAC8F4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAC8D8;
L_08AAC904:;
    ST32(a1, v0);
    goto L_08AAC8EC;
}

/* 08AAC90C */
rv_t func_08AAC90C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC90C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885CFDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC924;
L_08AAC924:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC930 */
rv_t func_08AAC930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC930:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885CFDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC948;
L_08AAC948:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC954 */
rv_t func_08AAC954(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC954:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D06C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC96C;
L_08AAC96C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC978 */
rv_t func_08AAC978(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC978:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D06C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC990;
L_08AAC990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC99C */
rv_t func_08AAC99C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC99C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D104(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC9B4;
L_08AAC9B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC9C0 */
rv_t func_08AAC9C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC9C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D1B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC9D8;
L_08AAC9D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAC9E4 */
rv_t func_08AAC9E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAC9E4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-64);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D1B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAC9FC;
L_08AAC9FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACA08 */
rv_t func_08AACA08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACA08:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885E594(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACA20;
L_08AACA20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACA2C */
rv_t func_08AACA2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACA2C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08AACA08(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACA44;
L_08AACA44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACA50 */
void func_08AACA50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACA50:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AACAB8; }
    goto L_08AACA98;
L_08AACA98:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AACAA0;
L_08AACAA0:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AACACC; }
    goto L_08AACAA8;
L_08AACAA8:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AACAA0; }
    goto L_08AACAB8;
L_08AACAB8:;
    v0 = 0 + 0;
    goto L_08AACABC;
L_08AACABC:;
    sp = sp + 16;
    return;
L_08AACACC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AACAE0; }
    goto L_08AACAD4;
L_08AACAD4:;
    ST8(a0+8, v0);
    goto L_08AACAD8;
L_08AACAD8:;
    v0 = 1;
    goto L_08AACABC;
L_08AACAE0:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AACB04; }
    goto L_08AACAE8;
L_08AACAE8:;
    ST32(v1+4, v0);
    goto L_08AACAEC;
L_08AACAEC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AACAF4;
L_08AACAF4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AACAD8;
L_08AACB04:;
    ST32(a1, v0);
    goto L_08AACAEC;
}

/* 08AACB0C */
rv_t func_08AACB0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACB0C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D7E8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACB24;
L_08AACB24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACB30 */
rv_t func_08AACB30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACB30:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885D888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACB48;
L_08AACB48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACB54 */
rv_t func_08AACB54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACB54:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885DA3C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACB6C;
L_08AACB6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACB78 */
u64 func_08AACB78(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08AACB78:;
    v0 = 999;
    a2 = a2 & 0xff;
    cnd_ = a1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08AACBD8; }
    goto L_08AACB88;
L_08AACB88:;
    v0 = LD32(a0+4);
    v1 = LD32(a0);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08AACBD8; }
    goto L_08AACBAC;
L_08AACBAC:;
    a3 = LD32(a0);
    goto L_08AACBB0;
L_08AACBB0:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08AACBE0; }
    goto L_08AACBC8;
L_08AACBC8:;
    a0 = LD32(a0+4);
    goto L_08AACBCC;
L_08AACBCC:;
    cnd_ = a0 != 0;
    if (cnd_) { a3 = LD32(a0); goto L_08AACBB0; }
    goto L_08AACBD4;
L_08AACBD4:;
    a3 = 0 + 0;
    goto L_08AACBD8;
L_08AACBD8:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08AACBE0:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_08AACBFC; }
    goto L_08AACBE8;
L_08AACBE8:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AACBCC; }
    goto L_08AACBF8;
L_08AACBF8:;
    v0 = LD_U8(a0+8);
    goto L_08AACBFC;
L_08AACBFC:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08AACBCC; }
    goto L_08AACC04;
L_08AACC04:;
    goto L_08AACBD8;
}

/* 08AACC0C */
void func_08AACC0C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACC0C:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AACC74; }
    goto L_08AACC54;
L_08AACC54:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AACC5C;
L_08AACC5C:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AACC88; }
    goto L_08AACC64;
L_08AACC64:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AACC5C; }
    goto L_08AACC74;
L_08AACC74:;
    v0 = 0 + 0;
    goto L_08AACC78;
L_08AACC78:;
    sp = sp + 16;
    return;
L_08AACC88:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AACC9C; }
    goto L_08AACC90;
L_08AACC90:;
    ST8(a0+8, v0);
    goto L_08AACC94;
L_08AACC94:;
    v0 = 1;
    goto L_08AACC78;
L_08AACC9C:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AACCC0; }
    goto L_08AACCA4;
L_08AACCA4:;
    ST32(v1+4, v0);
    goto L_08AACCA8;
L_08AACCA8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AACCB0;
L_08AACCB0:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AACC94;
L_08AACCC0:;
    ST32(a1, v0);
    goto L_08AACCA8;
}

/* 08AACCC8 */
rv_t func_08AACCC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACCC8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885EEB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACCE0;
L_08AACCE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACCEC */
rv_t func_08AACCEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACCEC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-64);
    a0 = a0 + v1;
    { rv_t r_ = func_0885EEB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACD04;
L_08AACD04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACD10 */
rv_t func_08AACD10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACD10:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885EF04(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACD28;
L_08AACD28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACD34 */
rv_t func_08AACD34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACD34:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885EF64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACD4C;
L_08AACD4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACD58 */
rv_t func_08AACD58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACD58:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-64);
    a0 = a0 + v1;
    { rv_t r_ = func_0885EF64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACD70;
L_08AACD70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACD7C */
rv_t func_08AACD7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AACD7C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACD84 */
rv_t func_08AACD84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACD84:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08AACD7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACD9C;
L_08AACD9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACDA8 */
rv_t func_08AACDA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACDA8:;
    v0 = D_08AF3920 - (14624);
    sp = sp - 16;
    v0 = v0 + 14624;
    v1 = v0 + 220;
    s0 = a0 + 0;
    a0 = v0 + 108;
    ST32(s0+268, v1);
    a1 = D_08AF3A18 - (14872);
    a1 = a1 + 14872;
    ST32(s0, v0);
    a1 = a1 + 12;
    ST32(s0+4, a0);
    a0 = s0 + 4;
    s0 = s0 + 268;
    func_0885D658(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AACDEC;
L_08AACDEC:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AACDF4;
L_08AACDF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACE04 */
rv_t func_08AACE04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACE04:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AACDA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACE1C;
L_08AACE1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACE28 */
rv_t func_08AACE28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACE28:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08AACDA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACE40;
L_08AACE40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACE4C */
rv_t func_08AACE4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACE4C:;
    v1 = D_08AF3920 - (14624);
    sp = sp - 16;
    v1 = v1 + 14624;
    v0 = v1 + 108;
    s1 = a0 + 0;
    a0 = v1 + 220;
    ST32(s1+4, v0);
    a1 = D_08AF3A18 - (14872);
    a1 = a1 + 14872;
    ST32(s1, v1);
    a1 = a1 + 12;
    ST32(s1+268, a0);
    a0 = s1 + 4;
    s0 = s1 + 268;
    func_0885D658(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AACE94;
L_08AACE94:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AACE9C;
L_08AACE9C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AACEA4;
L_08AACEA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACEB8 */
rv_t func_08AACEB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACEB8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AACE4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACED0;
L_08AACED0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACEDC */
rv_t func_08AACEDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACEDC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08AACE4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACEF4;
L_08AACEF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AACF00 */
u64 func_08AACF00(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACF00:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AACF44; }
    goto L_08AACF18;
L_08AACF18:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AACF20;
L_08AACF20:;
    a0 = v0 + 40;
    a3 = v0 + 36;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AACF58; }
    goto L_08AACF38;
L_08AACF38:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AACF20; }
    goto L_08AACF44;
L_08AACF44:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AACF58; }
    goto L_08AACF50;
L_08AACF50:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AACF68; }
    goto L_08AACF58;
L_08AACF58:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AACF68:;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AACF70;
L_08AACF70:;
    t0 = v0 + 0;
    goto L_08AACF58;
}

/* 08AACF78 */
rv_t func_08AACF78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACF78:;
    sp = sp - 16;
    ST32(a0+20, a2);
    cnd_ = a1 == 0;
    ST32(a0+16, a1);
    if (cnd_) { goto L_08AACFB4; }
    goto L_08AACF8C;
L_08AACF8C:;
    v0 = LD32(a0+8);
    v0 = v0 | 0x400;
    goto L_08AACF94;
L_08AACF94:;
    ST32(a0+8, v0);
    v1 = LD32(a0);
    v0 = LD32(v1+120);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACFA8;
L_08AACFA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AACFB4:;
    v0 = LD32(a0+8);
    v0 = (v0 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    goto L_08AACF94;
}

/* 08AACFC0 */
rv_t func_08AACFC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACFC0:;
    sp = sp - 16;
    v0 = D_08B45A9C - (23196);
    v0 = v0 + 23196;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AACFE8; }
    goto L_08AACFDC;
L_08AACFDC:;
    goto L_08AACFE0;
L_08AACFE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AACFE8:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AACFF0;
L_08AACFF0:;
    goto L_08AACFE0;
}

/* 08AACFF8 */
rv_t func_08AACFF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AACFF8:;
    sp = sp - 16;
    v0 = D_08B45AA8 - (23208);
    v0 = v0 + 23208;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AAD020; }
    goto L_08AAD014;
L_08AAD014:;
    goto L_08AAD018;
L_08AAD018:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD020:;
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD028;
L_08AAD028:;
    goto L_08AAD018;
}

/* 08AAD030 */
rv_t func_08AAD030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD030:;
    sp = sp - 16;
    v0 = D_08B45A9C - (23196);
    v0 = v0 + 23196;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AAD058; }
    goto L_08AAD04C;
L_08AAD04C:;
    goto L_08AAD050;
L_08AAD050:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD058:;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD060;
L_08AAD060:;
    goto L_08AAD050;
}

/* 08AAD068 */
rv_t func_08AAD068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD068:;
    sp = sp - 16;
    a2 = 1;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AAD08C; }
    goto L_08AAD080;
L_08AAD080:;
    goto L_08AAD084;
L_08AAD084:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD08C:;
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD094;
L_08AAD094:;
    goto L_08AAD084;
}

/* 08AAD09C */
rv_t func_08AAD09C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD09C:;
    sp = sp - 16;
    v0 = D_08B45A9C - (23196);
    v0 = v0 + 23196;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AAD0C4; }
    goto L_08AAD0B8;
L_08AAD0B8:;
    goto L_08AAD0BC;
L_08AAD0BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD0C4:;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD0CC;
L_08AAD0CC:;
    goto L_08AAD0BC;
}

/* 08AAD0D4 */
rv_t func_08AAD0D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD0D4:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AAD0F4; }
    goto L_08AAD0E8;
L_08AAD0E8:;
    goto L_08AAD0EC;
L_08AAD0EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD0F4:;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD0FC;
L_08AAD0FC:;
    goto L_08AAD0EC;
}

/* 08AAD104 */
rv_t func_08AAD104(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD104:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AAD124; }
    goto L_08AAD118;
L_08AAD118:;
    goto L_08AAD11C;
L_08AAD11C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD124:;
    { rv_t r_ = func_088BAAA4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD12C;
L_08AAD12C:;
    goto L_08AAD11C;
}

/* 08AAD134 */
rv_t func_08AAD134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD134:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08AAD154; }
    goto L_08AAD148;
L_08AAD148:;
    goto L_08AAD14C;
L_08AAD14C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAD154:;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD15C;
L_08AAD15C:;
    goto L_08AAD14C;
}

/* 08AAD164 */
rv_t func_08AAD164(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD164:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD16C */
rv_t func_08AAD16C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD16C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-40);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD164(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD184;
L_08AAD184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD190 */
rv_t func_08AAD190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD190:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD198 */
rv_t func_08AAD198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD198:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD1A0 */
rv_t func_08AAD1A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD1A0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F64C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD1B8;
L_08AAD1B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD1C4 */
rv_t func_08AAD1C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD1C4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F64C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD1DC;
L_08AAD1DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD1E8 */
rv_t func_08AAD1E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD1E8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F64C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD200;
L_08AAD200:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD20C */
rv_t func_08AAD20C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD20C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F64C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD224;
L_08AAD224:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD230 */
rv_t func_08AAD230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD230:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F710(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD248;
L_08AAD248:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD254 */
rv_t func_08AAD254(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD254:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F710(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD26C;
L_08AAD26C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD278 */
rv_t func_08AAD278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD278:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F710(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD290;
L_08AAD290:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD29C */
rv_t func_08AAD29C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD29C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F710(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD2B4;
L_08AAD2B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD2C0 */
rv_t func_08AAD2C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD2C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-60);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F7E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD2D8;
L_08AAD2D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD2E4 */
rv_t func_08AAD2E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD2E4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-92);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F7E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD2FC;
L_08AAD2FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD308 */
rv_t func_08AAD308(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD308:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-36);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F7E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD320;
L_08AAD320:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD32C */
rv_t func_08AAD32C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD32C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F7E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD344;
L_08AAD344:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD350 */
rv_t func_08AAD350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD350:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-56);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F9B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD368;
L_08AAD368:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD374 */
rv_t func_08AAD374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD374:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-88);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F9B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD38C;
L_08AAD38C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD398 */
rv_t func_08AAD398(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD398:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-32);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F9B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD3B0;
L_08AAD3B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD3BC */
rv_t func_08AAD3BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD3BC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_0885F9B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD3D4;
L_08AAD3D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD3E0 */
rv_t func_08AAD3E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD3E0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FC94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD3F8;
L_08AAD3F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD404 */
rv_t func_08AAD404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD404:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-84);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FC94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD41C;
L_08AAD41C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD428 */
rv_t func_08AAD428(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD428:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-40);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FC94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD440;
L_08AAD440:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD44C */
rv_t func_08AAD44C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD44C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-36);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FC94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD464;
L_08AAD464:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD470 */
rv_t func_08AAD470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD470:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD488;
L_08AAD488:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD494 */
rv_t func_08AAD494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD494:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-124);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD4AC;
L_08AAD4AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD4B8 */
rv_t func_08AAD4B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD4B8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD4D0;
L_08AAD4D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD4DC */
rv_t func_08AAD4DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD4DC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-40);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD4F4;
L_08AAD4F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD500 */
rv_t func_08AAD500(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD500:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-72);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FD50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD518;
L_08AAD518:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD524 */
rv_t func_08AAD524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD524:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FD50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD53C;
L_08AAD53C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD548 */
rv_t func_08AAD548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD548:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FD50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD560;
L_08AAD560:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD56C */
rv_t func_08AAD56C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD56C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD584;
L_08AAD584:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD590 */
rv_t func_08AAD590(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD590:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-68);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD5A8;
L_08AAD5A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD5B4 */
rv_t func_08AAD5B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD5B4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-28);
    a0 = a0 + v1;
    { rv_t r_ = func_0885FDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD5CC;
L_08AAD5CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD5D8 */
rv_t func_08AAD5D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD5D8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-76);
    a0 = a0 + v1;
    { rv_t r_ = func_08860050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD5F0;
L_08AAD5F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD5FC */
rv_t func_08AAD5FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD5FC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08860050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD614;
L_08AAD614:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD620 */
rv_t func_08AAD620(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD620:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-56);
    a0 = a0 + v1;
    { rv_t r_ = func_08860050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD638;
L_08AAD638:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD644 */
rv_t func_08AAD644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD644:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD64C */
rv_t func_08AAD64C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD64C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD644(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD664;
L_08AAD664:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD670 */
rv_t func_08AAD670(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD670:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-72);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD644(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD688;
L_08AAD688:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD694 */
rv_t func_08AAD694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD694:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD69C */
rv_t func_08AAD69C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD69C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD6B4;
L_08AAD6B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD6C0 */
rv_t func_08AAD6C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD6C0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-68);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD6D8;
L_08AAD6D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD6E4 */
rv_t func_08AAD6E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD6E4:;
    ST8(a0+4, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD6EC */
rv_t func_08AAD6EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD6EC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-104);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD6E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD704;
L_08AAD704:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD710 */
rv_t func_08AAD710(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD710:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD718 */
rv_t func_08AAD718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD718:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-72);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD710(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD730;
L_08AAD730:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD73C */
rv_t func_08AAD73C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD73C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD710(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD754;
L_08AAD754:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD760 */
rv_t func_08AAD760(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD760:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD768 */
rv_t func_08AAD768(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD768:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD760(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD780;
L_08AAD780:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD78C */
rv_t func_08AAD78C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD78C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-68);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD760(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD7A4;
L_08AAD7A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD7B0 */
rv_t func_08AAD7B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD7B0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-28);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD760(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD7C8;
L_08AAD7C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD7D4 */
rv_t func_08AAD7D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD7D4:;
    v0 = 60;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD7DC */
rv_t func_08AAD7DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD7DC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-80);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD7D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD7F4;
L_08AAD7F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD800 */
rv_t func_08AAD800(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD800:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD7D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD818;
L_08AAD818:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD824 */
rv_t func_08AAD824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAD824:;
    v0 = 200;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD82C */
rv_t func_08AAD82C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD82C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-80);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD824(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD844;
L_08AAD844:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD850 */
rv_t func_08AAD850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD850:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD824(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD868;
L_08AAD868:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD874 */
rv_t func_08AAD874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD874:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-32);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAD824(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAD88C;
L_08AAD88C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAD898 */
void func_08AAD898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAD898:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08AAD8C4; }
    goto L_08AAD8B8;
L_08AAD8B8:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    a1 = s0 + v1;
    goto L_08AAD8C4;
L_08AAD8C4:;
    func_08860B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AAD8CC;
L_08AAD8CC:;
    f1 = BITSF(LD32(s0+4));
    a0 = s0 + 124;
    a1 = s1 + 240;
    ST32(s1+124, FBITS(f1));
    f0 = BITSF(LD32(s0+8));
    ST32(s1+128, FBITS(f0));
    f1 = BITSF(LD32(s0+12));
    ST32(s1+132, FBITS(f1));
    f0 = BITSF(LD32(s0+16));
    ST32(s1+136, FBITS(f0));
    f1 = BITSF(LD32(s0+20));
    ST32(s1+140, FBITS(f1));
    f0 = BITSF(LD32(s0+24));
    ST32(s1+144, FBITS(f0));
    f1 = BITSF(LD32(s0+28));
    ST32(s1+148, FBITS(f1));
    f0 = BITSF(LD32(s0+32));
    ST32(s1+152, FBITS(f0));
    f1 = BITSF(LD32(s0+36));
    ST32(s1+156, FBITS(f1));
    f0 = BITSF(LD32(s0+40));
    ST32(s1+160, FBITS(f0));
    f1 = BITSF(LD32(s0+44));
    ST32(s1+164, FBITS(f1));
    f0 = BITSF(LD32(s0+48));
    ST32(s1+168, FBITS(f0));
    f1 = BITSF(LD32(s0+52));
    ST32(s1+172, FBITS(f1));
    f0 = BITSF(LD32(s0+56));
    ST32(s1+176, FBITS(f0));
    f1 = BITSF(LD32(s0+60));
    ST32(s1+180, FBITS(f1));
    f0 = BITSF(LD32(s0+64));
    ST32(s1+184, FBITS(f0));
    f1 = BITSF(LD32(s0+68));
    ST32(s1+188, FBITS(f1));
    f0 = BITSF(LD32(s0+72));
    v1 = LD32(s1+256);
    ST32(s1+192, FBITS(f0));
    v0 = LD32(s0+116);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+256, v1);
    f0 = BITSF(LD32(s0+76));
    ST32(s1+196, FBITS(f0));
    f1 = BITSF(LD32(s0+80));
    ST32(s1+200, FBITS(f1));
    f0 = BITSF(LD32(s0+84));
    ST32(s1+204, FBITS(f0));
    f1 = BITSF(LD32(s0+88));
    ST32(s1+208, FBITS(f1));
    f0 = BITSF(LD32(s0+92));
    ST32(s1+212, FBITS(f0));
    f1 = BITSF(LD32(s0+96));
    ST32(s1+216, FBITS(f1));
    f0 = BITSF(LD32(s0+100));
    ST32(s1+220, FBITS(f0));
    f1 = BITSF(LD32(s0+104));
    ST32(s1+224, FBITS(f1));
    f0 = BITSF(LD32(s0+108));
    ST32(s1+228, FBITS(f0));
    f1 = BITSF(LD32(s0+112));
    ST32(s1+232, FBITS(f1));
    v0 = LD32(s0+116);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s1+256, v1);
    v0 = LD32(s0+120);
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(s0+124));
    f1 = BITSF(LD32(a0+4));
    ST32(s1+236, v0);
    ST32(s1+240, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    v0 = LD32(s0+116);
    v1 = LD32(s1+256);
    v0 = (v0 >> 2) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s1+256, v1);
    a0 = LD32(s0+136);
    ST32(s1+252, a0);
    v0 = LD32(s0+116);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s1+256, v1);
    sp = sp + 16;
    return;
}

/* 08AADA38 */
void func_08AADA38(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADA38:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-24);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AADAA0; }
    goto L_08AADA80;
L_08AADA80:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AADA88;
L_08AADA88:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AADAB4; }
    goto L_08AADA90;
L_08AADA90:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AADA88; }
    goto L_08AADAA0;
L_08AADAA0:;
    v0 = 0 + 0;
    goto L_08AADAA4;
L_08AADAA4:;
    sp = sp + 16;
    return;
L_08AADAB4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AADAC8; }
    goto L_08AADABC;
L_08AADABC:;
    ST8(a0+8, v0);
    goto L_08AADAC0;
L_08AADAC0:;
    v0 = 1;
    goto L_08AADAA4;
L_08AADAC8:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AADAEC; }
    goto L_08AADAD0;
L_08AADAD0:;
    ST32(v1+4, v0);
    goto L_08AADAD4;
L_08AADAD4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AADADC;
L_08AADADC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AADAC0;
L_08AADAEC:;
    ST32(a1, v0);
    goto L_08AADAD4;
}

/* 08AADAF4 */
rv_t func_08AADAF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADAF4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08860618(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADB0C;
L_08AADB0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADB18 */
rv_t func_08AADB18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADB18:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08860618(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADB30;
L_08AADB30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADB3C */
rv_t func_08AADB3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADB3C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_08860618(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADB54;
L_08AADB54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADB60 */
rv_t func_08AADB60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADB60:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088606BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADB78;
L_08AADB78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADB84 */
rv_t func_08AADB84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADB84:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_088606BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADB9C;
L_08AADB9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADBA8 */
rv_t func_08AADBA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADBA8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_088606BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADBC0;
L_08AADBC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADBCC */
rv_t func_08AADBCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADBCC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-60);
    a0 = a0 + v1;
    { rv_t r_ = func_08860770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADBE4;
L_08AADBE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADBF0 */
rv_t func_08AADBF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADBF0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-92);
    a0 = a0 + v1;
    { rv_t r_ = func_08860770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADC08;
L_08AADC08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADC14 */
rv_t func_08AADC14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADC14:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-36);
    a0 = a0 + v1;
    { rv_t r_ = func_08860770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADC2C;
L_08AADC2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADC38 */
rv_t func_08AADC38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADC38:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_08860814(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADC50;
L_08AADC50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADC5C */
rv_t func_08AADC5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADC5C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-84);
    a0 = a0 + v1;
    { rv_t r_ = func_08860814(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADC74;
L_08AADC74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADC80 */
rv_t func_08AADC80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADC80:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-40);
    a0 = a0 + v1;
    { rv_t r_ = func_08860814(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADC98;
L_08AADC98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADCA4 */
rv_t func_08AADCA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADCA4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-56);
    a0 = a0 + v1;
    { rv_t r_ = func_08860870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADCBC;
L_08AADCBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADCC8 */
rv_t func_08AADCC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADCC8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-88);
    a0 = a0 + v1;
    { rv_t r_ = func_08860870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADCE0;
L_08AADCE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADCEC */
rv_t func_08AADCEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADCEC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-32);
    a0 = a0 + v1;
    { rv_t r_ = func_08860870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADD04;
L_08AADD04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADD10 */
rv_t func_08AADD10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADD10:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08860A18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADD28;
L_08AADD28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADD34 */
rv_t func_08AADD34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADD34:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-124);
    a0 = a0 + v1;
    { rv_t r_ = func_08860A18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADD4C;
L_08AADD4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADD58 */
rv_t func_08AADD58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADD58:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08860A18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADD70;
L_08AADD70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADD7C */
rv_t func_08AADD7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADD7C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-76);
    a0 = a0 + v1;
    { rv_t r_ = func_08860A78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADD94;
L_08AADD94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADDA0 */
rv_t func_08AADDA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADDA0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08860A78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADDB8;
L_08AADDB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADDC4 */
void func_08AADDC4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADDC4:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-20);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AADE2C; }
    goto L_08AADE0C;
L_08AADE0C:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AADE14;
L_08AADE14:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AADE40; }
    goto L_08AADE1C;
L_08AADE1C:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AADE14; }
    goto L_08AADE2C;
L_08AADE2C:;
    v0 = 0 + 0;
    goto L_08AADE30;
L_08AADE30:;
    sp = sp + 16;
    return;
L_08AADE40:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AADE54; }
    goto L_08AADE48;
L_08AADE48:;
    ST8(a0+8, v0);
    goto L_08AADE4C;
L_08AADE4C:;
    v0 = 1;
    goto L_08AADE30;
L_08AADE54:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AADE78; }
    goto L_08AADE5C;
L_08AADE5C:;
    ST32(v1+4, v0);
    goto L_08AADE60;
L_08AADE60:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AADE68;
L_08AADE68:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AADE4C;
L_08AADE78:;
    ST32(a1, v0);
    goto L_08AADE60;
}

/* 08AADE80 */
rv_t func_08AADE80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADE80:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088610EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADE98;
L_08AADE98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADEA4 */
rv_t func_08AADEA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADEA4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_088610EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADEBC;
L_08AADEBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADEC8 */
rv_t func_08AADEC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADEC8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08861170(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADEE0;
L_08AADEE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADEEC */
rv_t func_08AADEEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADEEC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08861170(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADF04;
L_08AADF04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADF10 */
rv_t func_08AADF10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADF10:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08861204(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADF28;
L_08AADF28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADF34 */
rv_t func_08AADF34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADF34:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-68);
    a0 = a0 + v1;
    { rv_t r_ = func_08861204(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADF4C;
L_08AADF4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADF58 */
rv_t func_08AADF58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADF58:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08861948(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADF70;
L_08AADF70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADF7C */
rv_t func_08AADF7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADF7C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-72);
    a0 = a0 + v1;
    { rv_t r_ = func_08861948(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADF94;
L_08AADF94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADFA0 */
rv_t func_08AADFA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADFA0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1-28);
    a0 = a0 + v0;
    { rv_t r_ = func_08861BF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADFBC;
L_08AADFBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADFC8 */
rv_t func_08AADFC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADFC8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_08861C64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AADFE0;
L_08AADFE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AADFEC */
rv_t func_08AADFEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AADFEC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-80);
    a0 = a0 + v1;
    { rv_t r_ = func_08861C64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE004;
L_08AAE004:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE010 */
rv_t func_08AAE010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE010:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08861CA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE028;
L_08AAE028:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE034 */
rv_t func_08AAE034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE034:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-124);
    a0 = a0 + v1;
    { rv_t r_ = func_08861CA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE04C;
L_08AAE04C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE058 */
rv_t func_08AAE058(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE058:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_088620E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE070;
L_08AAE070:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE07C */
rv_t func_08AAE07C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE07C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-84);
    a0 = a0 + v1;
    { rv_t r_ = func_088620E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE094;
L_08AAE094:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE0A0 */
rv_t func_08AAE0A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE0A0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-56);
    a0 = a0 + v1;
    { rv_t r_ = func_0886233C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE0B8;
L_08AAE0B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE0C4 */
rv_t func_08AAE0C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE0C4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-88);
    a0 = a0 + v1;
    { rv_t r_ = func_0886233C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE0DC;
L_08AAE0DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE0E8 */
rv_t func_08AAE0E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE0E8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-60);
    a0 = a0 + v1;
    { rv_t r_ = func_088624A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE100;
L_08AAE100:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE10C */
rv_t func_08AAE10C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE10C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-92);
    a0 = a0 + v1;
    { rv_t r_ = func_088624A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE124;
L_08AAE124:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE130 */
rv_t func_08AAE130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE130:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-76);
    a0 = a0 + v1;
    { rv_t r_ = func_088625C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE148;
L_08AAE148:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE154 */
void func_08AAE154(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE154:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a1+76);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08AAE284; }
    goto L_08AAE17C;
L_08AAE17C:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08AAE18C; }
    goto L_08AAE188;
L_08AAE188:;
    v0 = 4;
    goto L_08AAE18C;
L_08AAE18C:;
    ST32(s1+68, v0);
    a0 = s0 + 0;
    v0 = func_08861BCC(a0);
    goto L_08AAE198;
L_08AAE198:;
    cnd_ = v0 == 0;
    v0 = 6;
    if (cnd_) { goto L_08AAE1A4; }
    goto L_08AAE1A0;
L_08AAE1A0:;
    ST32(s1+68, v0);
    goto L_08AAE1A4;
L_08AAE1A4:;
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AAE1B8; }
    goto L_08AAE1AC;
L_08AAE1AC:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s2 = s0 + v1;
    goto L_08AAE1B8;
L_08AAE1B8:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    s0 = s1 + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE1CC;
L_08AAE1CC:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE1D8;
L_08AAE1D8:;
    v1 = LD32(s2);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE1E8;
L_08AAE1E8:;
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
    if (cnd_) { v0 = LD32(s2+12); goto L_08AAE21C; }
    goto L_08AAE21C;
L_08AAE21C:;
    ST32(s1+32, v0);
    v1 = LD32(s2+20);
    ST32(s1+36, v1);
    v0 = LD32(s2+20);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08AAE238; }
    goto L_08AAE234;
L_08AAE234:;
    a0 = LD32(s2+28);
    goto L_08AAE238;
L_08AAE238:;
    ST32(s1+40, a0);
    f0 = BITSF(LD32(s2+32));
    ST32(s1+44, FBITS(f0));
    f1 = BITSF(LD32(s2+36));
    ST32(s1+48, FBITS(f1));
    v0 = LD32(s2+48);
    ST32(s1+56, v0);
    v1 = LD32(s2+52);
    ST32(s1+60, v1);
    v0 = (u32)(s32)LD_S16(s2+60);
    ST16(s1+64, v0);
    v1 = LD_U8(s2+62);
    ST8(s1+66, v1);
    sp = sp + 16;
    return;
L_08AAE284:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = v1 & 0x1; goto L_08AAE298; }
    goto L_08AAE290;
L_08AAE290:;
    v0 = 1;
    goto L_08AAE18C;
L_08AAE298:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 2; goto L_08AAE18C; }
    goto L_08AAE2A0;
L_08AAE2A0:;
    v0 = 3;
    goto L_08AAE18C;
}

/* 08AAE2A8 */
void func_08AAE2A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAE2A8:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AAE31C; }
    goto L_08AAE2B8;
L_08AAE2B8:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AAE2C8;
L_08AAE2C8:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AAE344; }
    goto L_08AAE2D4;
L_08AAE2D4:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AAE32C; }
    goto L_08AAE2E8;
L_08AAE2E8:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AAE310; }
    goto L_08AAE2F0;
L_08AAE2F0:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AAE320; }
    goto L_08AAE310;
L_08AAE310:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAE344; }
    goto L_08AAE31C;
L_08AAE31C:;
    v0 = LD32(a3+4);
    goto L_08AAE320;
L_08AAE320:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AAE2E8; }
    goto L_08AAE328;
L_08AAE328:;
    a3 = LD32(a2);
    goto L_08AAE32C;
L_08AAE32C:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AAE2C8;
L_08AAE344:;
    return;
}

/* 08AAE34C */
rv_t func_08AAE34C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE34C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08862B00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE364;
L_08AAE364:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE370 */
rv_t func_08AAE370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE370:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08862B9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE388;
L_08AAE388:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE394 */
rv_t func_08AAE394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE394:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08862C40(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE3AC;
L_08AAE3AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE3B8 */
rv_t func_08AAE3B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE3B8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08862F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE3D0;
L_08AAE3D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE3DC */
rv_t func_08AAE3DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE3DC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-60);
    a0 = a0 + v1;
    { rv_t r_ = func_0886302C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE3F4;
L_08AAE3F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE400 */
rv_t func_08AAE400(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE400:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-56);
    a0 = a0 + v1;
    { rv_t r_ = func_08863284(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE418;
L_08AAE418:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE424 */
rv_t func_08AAE424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE424:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_08863504(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE43C;
L_08AAE43C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE448 */
rv_t func_08AAE448(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE448:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_088637F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE460;
L_08AAE460:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE46C */
rv_t func_08AAE46C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE46C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_08863F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE484;
L_08AAE484:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE490 */
void func_08AAE490(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE490:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAE4F8; }
    goto L_08AAE4D8;
L_08AAE4D8:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAE4E0;
L_08AAE4E0:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAE50C; }
    goto L_08AAE4E8;
L_08AAE4E8:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAE4E0; }
    goto L_08AAE4F8;
L_08AAE4F8:;
    v0 = 0 + 0;
    goto L_08AAE4FC;
L_08AAE4FC:;
    sp = sp + 16;
    return;
L_08AAE50C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAE520; }
    goto L_08AAE514;
L_08AAE514:;
    ST8(a0+8, v0);
    goto L_08AAE518;
L_08AAE518:;
    v0 = 1;
    goto L_08AAE4FC;
L_08AAE520:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAE544; }
    goto L_08AAE528;
L_08AAE528:;
    ST32(v1+4, v0);
    goto L_08AAE52C;
L_08AAE52C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAE534;
L_08AAE534:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAE518;
L_08AAE544:;
    ST32(a1, v0);
    goto L_08AAE52C;
}

/* 08AAE54C */
rv_t func_08AAE54C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE54C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088659D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE564;
L_08AAE564:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE570 */
rv_t func_08AAE570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE570:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_088659D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE588;
L_08AAE588:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE594 */
rv_t func_08AAE594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE594:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08865A4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE5AC;
L_08AAE5AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE5B8 */
rv_t func_08AAE5B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE5B8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08865A4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE5D0;
L_08AAE5D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE5DC */
rv_t func_08AAE5DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE5DC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-60);
    a0 = a0 + v1;
    { rv_t r_ = func_08865AD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE5F4;
L_08AAE5F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE600 */
rv_t func_08AAE600(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE600:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-92);
    a0 = a0 + v1;
    { rv_t r_ = func_08865AD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE618;
L_08AAE618:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE624 */
rv_t func_08AAE624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE624:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-56);
    a0 = a0 + v1;
    { rv_t r_ = func_08865D0C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE63C;
L_08AAE63C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE648 */
rv_t func_08AAE648(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE648:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-88);
    a0 = a0 + v1;
    { rv_t r_ = func_08865D0C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE660;
L_08AAE660:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE66C */
rv_t func_08AAE66C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE66C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_08865F2C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE684;
L_08AAE684:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE690 */
rv_t func_08AAE690(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE690:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-84);
    a0 = a0 + v1;
    { rv_t r_ = func_08865F2C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE6A8;
L_08AAE6A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE6B4 */
rv_t func_08AAE6B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE6B4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_08865F88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE6CC;
L_08AAE6CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE6D8 */
rv_t func_08AAE6D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE6D8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-80);
    a0 = a0 + v1;
    { rv_t r_ = func_08865F88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE6F0;
L_08AAE6F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE6FC */
rv_t func_08AAE6FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE6FC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08865F90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE714;
L_08AAE714:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE720 */
rv_t func_08AAE720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE720:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-124);
    a0 = a0 + v1;
    { rv_t r_ = func_08865F90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE738;
L_08AAE738:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE744 */
rv_t func_08AAE744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE744:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-76);
    a0 = a0 + v1;
    { rv_t r_ = func_08865FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE75C;
L_08AAE75C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE768 */
void func_08AAE768(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE768:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAE7D0; }
    goto L_08AAE7B0;
L_08AAE7B0:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAE7B8;
L_08AAE7B8:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAE7E4; }
    goto L_08AAE7C0;
L_08AAE7C0:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAE7B8; }
    goto L_08AAE7D0;
L_08AAE7D0:;
    v0 = 0 + 0;
    goto L_08AAE7D4;
L_08AAE7D4:;
    sp = sp + 16;
    return;
L_08AAE7E4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAE7F8; }
    goto L_08AAE7EC;
L_08AAE7EC:;
    ST8(a0+8, v0);
    goto L_08AAE7F0;
L_08AAE7F0:;
    v0 = 1;
    goto L_08AAE7D4;
L_08AAE7F8:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAE81C; }
    goto L_08AAE800;
L_08AAE800:;
    ST32(v1+4, v0);
    goto L_08AAE804;
L_08AAE804:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAE80C;
L_08AAE80C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAE7F0;
L_08AAE81C:;
    ST32(a1, v0);
    goto L_08AAE804;
}

/* 08AAE824 */
rv_t func_08AAE824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE824:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-48);
    a0 = a0 + v1;
    { rv_t r_ = func_08866504(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE83C;
L_08AAE83C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE848 */
rv_t func_08AAE848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE848:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-84);
    a0 = a0 + v1;
    { rv_t r_ = func_08866504(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE860;
L_08AAE860:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE86C */
rv_t func_08AAE86C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE86C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-52);
    a0 = a0 + v1;
    { rv_t r_ = func_08866650(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE884;
L_08AAE884:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE890 */
rv_t func_08AAE890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE890:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-124);
    a0 = a0 + v1;
    { rv_t r_ = func_08866650(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE8A8;
L_08AAE8A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE8B4 */
rv_t func_08AAE8B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE8B4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08866A8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE8CC;
L_08AAE8CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE8D8 */
rv_t func_08AAE8D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE8D8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-68);
    a0 = a0 + v1;
    { rv_t r_ = func_08866A8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE8F0;
L_08AAE8F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE8FC */
rv_t func_08AAE8FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE8FC:;
    v0 = D_08AF5310 - (21264);
    sp = sp - 16;
    v0 = v0 + 21264;
    v1 = v0 + 376;
    s0 = a0 + 0;
    a0 = v0 + 172;
    ST32(s0+112, v1);
    a1 = D_08AF54D0 - (21712);
    a1 = a1 + 21712;
    ST32(s0, v0);
    a1 = a1 + 12;
    ST32(s0+36, a0);
    a0 = s0 + 36;
    s0 = s0 + 112;
    func_088629DC(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AAE940;
L_08AAE940:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAE948;
L_08AAE948:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE958 */
rv_t func_08AAE958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE958:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAE8FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE970;
L_08AAE970:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE97C */
rv_t func_08AAE97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE97C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAE8FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAE994;
L_08AAE994:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAE9A0 */
rv_t func_08AAE9A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAE9A0:;
    v1 = D_08AF5310 - (21264);
    sp = sp - 16;
    v1 = v1 + 21264;
    v0 = v1 + 172;
    s1 = a0 + 0;
    a0 = v1 + 376;
    ST32(s1+36, v0);
    a1 = D_08AF54D0 - (21712);
    a1 = a1 + 21712;
    ST32(s1, v1);
    a1 = a1 + 12;
    ST32(s1+112, a0);
    a0 = s1 + 36;
    s0 = s1 + 112;
    func_088629DC(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08AAE9E8;
L_08AAE9E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAE9F0;
L_08AAE9F0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAE9F8;
L_08AAE9F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEA0C */
rv_t func_08AAEA0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEA0C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAE9A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEA24;
L_08AAEA24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEA30 */
rv_t func_08AAEA30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEA30:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAE9A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEA48;
L_08AAEA48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEA54 */
rv_t func_08AAEA54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEA54:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEA5C */
rv_t func_08AAEA5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEA5C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEA54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEA74;
L_08AAEA74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEA80 */
rv_t func_08AAEA80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEA80:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-72);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEA54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEA98;
L_08AAEA98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEAA4 */
rv_t func_08AAEAA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEAA4:;
    v0 = 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEAAC */
rv_t func_08AAEAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEAAC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-44);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEAA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEAC4;
L_08AAEAC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEAD0 */
rv_t func_08AAEAD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEAD0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-80);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEAA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEAE8;
L_08AAEAE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEAF4 */
rv_t func_08AAEAF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEAF4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEAFC */
rv_t func_08AAEAFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEAFC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEB04 */
rv_t func_08AAEB04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEB04:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08866FEC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEB1C;
L_08AAEB1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEB28 */
rv_t func_08AAEB28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEB28:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08867050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEB40;
L_08AAEB40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEB4C */
rv_t func_08AAEB4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEB4C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_088671D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEB64;
L_08AAEB64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEB70 */
void func_08AAEB70(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEB70:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAEBD8; }
    goto L_08AAEBB8;
L_08AAEBB8:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAEBC0;
L_08AAEBC0:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAEBEC; }
    goto L_08AAEBC8;
L_08AAEBC8:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAEBC0; }
    goto L_08AAEBD8;
L_08AAEBD8:;
    v0 = 0 + 0;
    goto L_08AAEBDC;
L_08AAEBDC:;
    sp = sp + 16;
    return;
L_08AAEBEC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAEC00; }
    goto L_08AAEBF4;
L_08AAEBF4:;
    ST8(a0+8, v0);
    goto L_08AAEBF8;
L_08AAEBF8:;
    v0 = 1;
    goto L_08AAEBDC;
L_08AAEC00:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAEC24; }
    goto L_08AAEC08;
L_08AAEC08:;
    ST32(v1+4, v0);
    goto L_08AAEC0C;
L_08AAEC0C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAEC14;
L_08AAEC14:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAEBF8;
L_08AAEC24:;
    ST32(a1, v0);
    goto L_08AAEC0C;
}

/* 08AAEC2C */
rv_t func_08AAEC2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEC2C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEC34 */
rv_t func_08AAEC34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEC34:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEC3C */
void func_08AAEC3C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEC3C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAEC90; }
    goto L_08AAEC74;
L_08AAEC74:;
    v0 = LD32(a0);
    goto L_08AAEC78;
L_08AAEC78:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAECA4; }
    goto L_08AAEC80;
L_08AAEC80:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAEC78; }
    goto L_08AAEC90;
L_08AAEC90:;
    v0 = 0 + 0;
    goto L_08AAEC94;
L_08AAEC94:;
    sp = sp + 16;
    return;
L_08AAECA4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAECB8; }
    goto L_08AAECAC;
L_08AAECAC:;
    ST8(a0+8, v0);
    goto L_08AAECB0;
L_08AAECB0:;
    v0 = 1;
    goto L_08AAEC94;
L_08AAECB8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAECDC; }
    goto L_08AAECC0;
L_08AAECC0:;
    ST32(a2+4, v0);
    goto L_08AAECC4;
L_08AAECC4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAECCC;
L_08AAECCC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAECB0;
L_08AAECDC:;
    ST32(v1, v0);
    goto L_08AAECC4;
}

/* 08AAECE4 */
rv_t func_08AAECE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAECE4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAECEC */
rv_t func_08AAECEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAECEC:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAECF4 */
void func_08AAECF4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAECF4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAED48; }
    goto L_08AAED2C;
L_08AAED2C:;
    v0 = LD32(a0);
    goto L_08AAED30;
L_08AAED30:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAED5C; }
    goto L_08AAED38;
L_08AAED38:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAED30; }
    goto L_08AAED48;
L_08AAED48:;
    v0 = 0 + 0;
    goto L_08AAED4C;
L_08AAED4C:;
    sp = sp + 16;
    return;
L_08AAED5C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAED70; }
    goto L_08AAED64;
L_08AAED64:;
    ST8(a0+8, v0);
    goto L_08AAED68;
L_08AAED68:;
    v0 = 1;
    goto L_08AAED4C;
L_08AAED70:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAED94; }
    goto L_08AAED78;
L_08AAED78:;
    ST32(a2+4, v0);
    goto L_08AAED7C;
L_08AAED7C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAED84;
L_08AAED84:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAED68;
L_08AAED94:;
    ST32(v1, v0);
    goto L_08AAED7C;
}

/* 08AAED9C */
rv_t func_08AAED9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAED9C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08867FA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEDB4;
L_08AAEDB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEDC0 */
rv_t func_08AAEDC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEDC0:;
    v0 = D_08AF580C - (22540);
    v0 = v0 + 22540;
    v1 = v0 + 68;
    ST32(a0+8, v1);
    a1 = D_08AF5868 - (22632);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 + 22632;
    a1 = a1 + 4;
    s0 = a0 + 8;
    func_08874844(a0, a1, t1, t2, t3);
    goto L_08AAEDF4;
L_08AAEDF4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAEDFC;
L_08AAEDFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEE0C */
rv_t func_08AAEE0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEE0C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEDC0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEE24;
L_08AAEE24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEE30 */
rv_t func_08AAEE30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEE30:;
    v0 = D_08AF580C - (22540);
    v0 = v0 + 22540;
    v1 = v0 + 68;
    ST32(a0+8, v1);
    a1 = D_08AF5868 - (22632);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 + 22632;
    a1 = a1 + 4;
    s1 = a0 + 8;
    s0 = a0 + 0;
    func_08874844(a0, a1, t1, t2, t3);
    goto L_08AAEE6C;
L_08AAEE6C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAEE74;
L_08AAEE74:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAEE7C;
L_08AAEE7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEE90 */
rv_t func_08AAEE90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEE90:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEE30(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEEA8;
L_08AAEEA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEEB4 */
rv_t func_08AAEEB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEEB4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEEBC */
rv_t func_08AAEEBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEEBC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEEC4 */
rv_t func_08AAEEC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEEC4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEECC */
rv_t func_08AAEECC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEECC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEED4 */
rv_t func_08AAEED4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEED4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08868314(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEEEC;
L_08AAEEEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEEF8 */
rv_t func_08AAEEF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEEF8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0886838C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEF10;
L_08AAEF10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEF1C */
rv_t func_08AAEF1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEF1C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEF24 */
rv_t func_08AAEF24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEF24:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEF2C */
rv_t func_08AAEF2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEF2C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEF34 */
rv_t func_08AAEF34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAEF34:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEF3C */
rv_t func_08AAEF3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEF3C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08868774(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEF54;
L_08AAEF54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEF60 */
rv_t func_08AAEF60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEF60:;
    v0 = D_08AF5AA4 - (23204);
    v0 = v0 + 23204;
    v1 = v0 + 92;
    ST32(a0+36, v1);
    a1 = D_08AF5B18 - (23320);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 + 23320;
    a1 = a1 + 4;
    s0 = a0 + 36;
    func_088682A8(a0, a1, t1, t2, t3);
    goto L_08AAEF94;
L_08AAEF94:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAEF9C;
L_08AAEF9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEFAC */
rv_t func_08AAEFAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEFAC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEF60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAEFC4;
L_08AAEFC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAEFD0 */
rv_t func_08AAEFD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAEFD0:;
    v0 = D_08AF5AA4 - (23204);
    v0 = v0 + 23204;
    v1 = v0 + 92;
    ST32(a0+36, v1);
    a1 = D_08AF5B18 - (23320);
    sp = sp - 16;
    ST32(a0, v0);
    a1 = a1 + 23320;
    a1 = a1 + 4;
    s1 = a0 + 36;
    s0 = a0 + 0;
    func_088682A8(a0, a1, t1, t2, t3);
    goto L_08AAF00C;
L_08AAF00C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF014;
L_08AAF014:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF01C;
L_08AAF01C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF030 */
rv_t func_08AAF030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF030:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08AAEFD0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF048;
L_08AAF048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF054 */
rv_t func_08AAF054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF054:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF05C */
rv_t func_08AAF05C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF05C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0886888C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF074;
L_08AAF074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF080 */
rv_t func_08AAF080(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF080:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088688F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF098;
L_08AAF098:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF0A4 */
rv_t func_08AAF0A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF0A4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_0886895C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF0BC;
L_08AAF0BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF0C8 */
rv_t func_08AAF0C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF0C8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08869064(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF0E0;
L_08AAF0E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF0EC */
void func_08AAF0EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08AAF0EC:;
    a3 = LD32(a0+8);
    a2 = a0 + 0;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08AAF160; }
    goto L_08AAF0FC;
L_08AAF0FC:;
    a3 = LD32(a0);
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    a0 = a3 + 0;
    goto L_08AAF10C;
L_08AAF10C:;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08AAF188; }
    goto L_08AAF118;
L_08AAF118:;
    v0 = LD32(a0);
    v1 = v1 + v0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    ST32(a2+8, a0);
    if (cnd_) { goto L_08AAF170; }
    goto L_08AAF12C;
L_08AAF12C:;
    cnd_ = a1 != 0;
    a3 = LD32(a2+8);
    if (cnd_) { goto L_08AAF154; }
    goto L_08AAF134;
L_08AAF134:;
    v1 = LD32(a3);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08AAF164; }
    goto L_08AAF154;
L_08AAF154:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08AAF188; }
    goto L_08AAF160;
L_08AAF160:;
    v0 = LD32(a3+4);
    goto L_08AAF164;
L_08AAF164:;
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08AAF12C; }
    goto L_08AAF16C;
L_08AAF16C:;
    a3 = LD32(a2);
    goto L_08AAF170;
L_08AAF170:;
    v1 = LD32(a2+4);
    a0 = a3 + 0;
    v1 = v1 + 1;
    ST32(a2+4, v1);
    v0 = LD32(a3+4);
    goto L_08AAF10C;
L_08AAF188:;
    return;
}

/* 08AAF190 */
rv_t func_08AAF190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF190:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08869368(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF1A8;
L_08AAF1A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF1B4 */
rv_t func_08AAF1B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF1B4:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_088693CC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF1CC;
L_08AAF1CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF1D8 */
rv_t func_08AAF1D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF1D8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_08869440(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF1F0;
L_08AAF1F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF1FC */
u64 func_08AAF1FC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF1FC:;
    sp = sp - 16;
    t1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08AAF240; }
    goto L_08AAF214;
L_08AAF214:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08AAF21C;
L_08AAF21C:;
    a0 = v0 + 148;
    a3 = v0 + 144;
    t0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a3 = a0;
    if (cnd_) { goto L_08AAF254; }
    goto L_08AAF234;
L_08AAF234:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08AAF21C; }
    goto L_08AAF240;
L_08AAF240:;
    a0 = LD32(t1+20);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08AAF254; }
    goto L_08AAF24C;
L_08AAF24C:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08AAF264; }
    goto L_08AAF254;
L_08AAF254:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08AAF264:;
    a2 = 1;
    { u64 r_ = func_08AAF1FC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF26C;
L_08AAF26C:;
    t0 = v0 + 0;
    goto L_08AAF254;
}

/* 08AAF274 */
void func_08AAF274(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF274:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(a0+4);
    a1 = LD32(s0);
    v1 = LD32(v0-12);
    a0 = a0 - 1;
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08AAF2DC; }
    goto L_08AAF2BC;
L_08AAF2BC:;
    a1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08AAF2C4;
L_08AAF2C4:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAF2F0; }
    goto L_08AAF2CC;
L_08AAF2CC:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAF2C4; }
    goto L_08AAF2DC;
L_08AAF2DC:;
    v0 = 0 + 0;
    goto L_08AAF2E0;
L_08AAF2E0:;
    sp = sp + 16;
    return;
L_08AAF2F0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAF304; }
    goto L_08AAF2F8;
L_08AAF2F8:;
    ST8(a0+8, v0);
    goto L_08AAF2FC;
L_08AAF2FC:;
    v0 = 1;
    goto L_08AAF2E0;
L_08AAF304:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAF328; }
    goto L_08AAF30C;
L_08AAF30C:;
    ST32(v1+4, v0);
    goto L_08AAF310;
L_08AAF310:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF318;
L_08AAF318:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAF2FC;
L_08AAF328:;
    ST32(a1, v0);
    goto L_08AAF310;
}

/* 08AAF330 */
rv_t func_08AAF330(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF330:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0886990C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF348;
L_08AAF348:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF354 */
rv_t func_08AAF354(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF354:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08869988(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF36C;
L_08AAF36C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF378 */
rv_t func_08AAF378(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF378:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08869A0C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08AAF390;
L_08AAF390:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF39C */
rv_t func_08AAF39C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF39C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF3B8;
L_08AAF3B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF3C4 */
rv_t func_08AAF3C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF3C4:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF3E4;
L_08AAF3E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF3EC;
L_08AAF3EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF3FC */
rv_t func_08AAF3FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF3FC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF404 */
rv_t func_08AAF404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF404:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF40C */
rv_t func_08AAF40C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF40C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF414 */
void func_08AAF414(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF414:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAF468; }
    goto L_08AAF44C;
L_08AAF44C:;
    v0 = LD32(a0);
    goto L_08AAF450;
L_08AAF450:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAF47C; }
    goto L_08AAF458;
L_08AAF458:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAF450; }
    goto L_08AAF468;
L_08AAF468:;
    v0 = 0 + 0;
    goto L_08AAF46C;
L_08AAF46C:;
    sp = sp + 16;
    return;
L_08AAF47C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAF490; }
    goto L_08AAF484;
L_08AAF484:;
    ST8(a0+8, v0);
    goto L_08AAF488;
L_08AAF488:;
    v0 = 1;
    goto L_08AAF46C;
L_08AAF490:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAF4B4; }
    goto L_08AAF498;
L_08AAF498:;
    ST32(a2+4, v0);
    goto L_08AAF49C;
L_08AAF49C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF4A4;
L_08AAF4A4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAF488;
L_08AAF4B4:;
    ST32(v1, v0);
    goto L_08AAF49C;
}

/* 08AAF4BC */
rv_t func_08AAF4BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF4BC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF4C4 */
rv_t func_08AAF4C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF4C4:;
    v0 = D_08AF60F8 - (24824);
    v0 = v0 + 24824;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_0886AB90(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF4E0;
L_08AAF4E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF4EC */
rv_t func_08AAF4EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF4EC:;
    v0 = D_08AF60F8 - (24824);
    v0 = v0 + 24824;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0886AB90(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF50C;
L_08AAF50C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF514;
L_08AAF514:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF524 */
rv_t func_08AAF524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF524:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF52C */
rv_t func_08AAF52C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF52C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF534 */
rv_t func_08AAF534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF534:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF53C */
rv_t func_08AAF53C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF53C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF544 */
rv_t func_08AAF544(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF544:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF54C */
rv_t func_08AAF54C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF54C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF554 */
rv_t func_08AAF554(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF554:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF570;
L_08AAF570:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF57C */
rv_t func_08AAF57C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF57C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF59C;
L_08AAF59C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF5A4;
L_08AAF5A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF5B4 */
rv_t func_08AAF5B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF5B4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF5BC */
rv_t func_08AAF5BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF5BC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF5C4 */
rv_t func_08AAF5C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF5C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF5CC */
rv_t func_08AAF5CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF5CC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF5D4 */
rv_t func_08AAF5D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF5D4:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF5DC */
void func_08AAF5DC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF5DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAF630; }
    goto L_08AAF614;
L_08AAF614:;
    v0 = LD32(a0);
    goto L_08AAF618;
L_08AAF618:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAF644; }
    goto L_08AAF620;
L_08AAF620:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAF618; }
    goto L_08AAF630;
L_08AAF630:;
    v0 = 0 + 0;
    goto L_08AAF634;
L_08AAF634:;
    sp = sp + 16;
    return;
L_08AAF644:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAF658; }
    goto L_08AAF64C;
L_08AAF64C:;
    ST8(a0+8, v0);
    goto L_08AAF650;
L_08AAF650:;
    v0 = 1;
    goto L_08AAF634;
L_08AAF658:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAF67C; }
    goto L_08AAF660;
L_08AAF660:;
    ST32(a2+4, v0);
    goto L_08AAF664;
L_08AAF664:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF66C;
L_08AAF66C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAF650;
L_08AAF67C:;
    ST32(v1, v0);
    goto L_08AAF664;
}

/* 08AAF684 */
rv_t func_08AAF684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF684:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF68C */
rv_t func_08AAF68C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF68C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF694 */
rv_t func_08AAF694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF694:;
    sp = sp - 16;
    v0 = D_08AF6308 - (25352);
    v0 = v0 + 25352;
    s0 = a0 + 0;
    s1 = s0 + 40;
    v1 = LD32(a0+40);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AAF6F4; }
    goto L_08AAF6C4;
L_08AAF6C4:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF6E0;
L_08AAF6E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAF6F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF6FC;
L_08AAF6FC:;
    ST32(s0+40, 0);
    goto L_08AAF6C4;
}

/* 08AAF704 */
rv_t func_08AAF704(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF704:;
    sp = sp - 16;
    v0 = D_08AF6308 - (25352);
    v0 = v0 + 25352;
    s0 = a0 + 0;
    s1 = s0 + 40;
    v1 = LD32(a0+40);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08AAF76C; }
    goto L_08AAF734;
L_08AAF734:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF750;
L_08AAF750:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF758;
L_08AAF758:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08AAF76C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF774;
L_08AAF774:;
    ST32(s0+40, 0);
    goto L_08AAF734;
}

/* 08AAF77C */
rv_t func_08AAF77C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF77C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF784 */
rv_t func_08AAF784(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAF784:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF78C */
void func_08AAF78C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF78C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAF7E0; }
    goto L_08AAF7C4;
L_08AAF7C4:;
    v0 = LD32(a0);
    goto L_08AAF7C8;
L_08AAF7C8:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAF7F4; }
    goto L_08AAF7D0;
L_08AAF7D0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAF7C8; }
    goto L_08AAF7E0;
L_08AAF7E0:;
    v0 = 0 + 0;
    goto L_08AAF7E4;
L_08AAF7E4:;
    sp = sp + 16;
    return;
L_08AAF7F4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAF808; }
    goto L_08AAF7FC;
L_08AAF7FC:;
    ST8(a0+8, v0);
    goto L_08AAF800;
L_08AAF800:;
    v0 = 1;
    goto L_08AAF7E4;
L_08AAF808:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAF82C; }
    goto L_08AAF810;
L_08AAF810:;
    ST32(a2+4, v0);
    goto L_08AAF814;
L_08AAF814:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF81C;
L_08AAF81C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAF800;
L_08AAF82C:;
    ST32(v1, v0);
    goto L_08AAF814;
}

/* 08AAF834 */
rv_t func_08AAF834(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF834:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF850;
L_08AAF850:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF85C */
rv_t func_08AAF85C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF85C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF87C;
L_08AAF87C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF884;
L_08AAF884:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF894 */
void func_08AAF894(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08AAF894:;
    sp = sp - 32;
    s3 = 0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08AAF928; }
    goto L_08AAF8C0;
L_08AAF8C0:;
    v0 = LD32(s1);
    goto L_08AAF8C4;
L_08AAF8C4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08AAF918; }
    goto L_08AAF8D8;
L_08AAF8D8:;
    v0 = LD_U8(s0+8);
    goto L_08AAF8DC;
L_08AAF8DC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08AAF958; }
    goto L_08AAF8E4;
L_08AAF8E4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AAF948; }
    goto L_08AAF8EC;
L_08AAF8EC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08AAF8F4;
L_08AAF8F4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF900;
L_08AAF900:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08AAF90C;
L_08AAF90C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08AAF8DC; }
    goto L_08AAF914;
L_08AAF914:;
    v1 = LD32(s1+4);
    goto L_08AAF918;
L_08AAF918:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08AAF8C4; }
    goto L_08AAF928;
L_08AAF928:;
    sp = sp + 32;
    return;
L_08AAF948:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08AAF8F4;
L_08AAF958:;
    s0 = LD32(s0+4);
    goto L_08AAF90C;
}

/* 08AAF960 */
rv_t func_08AAF960(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF960:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF97C;
L_08AAF97C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF988 */
rv_t func_08AAF988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF988:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF9A8;
L_08AAF9A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF9B0;
L_08AAF9B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF9C0 */
rv_t func_08AAF9C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF9C0:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAF9DC;
L_08AAF9DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAF9E8 */
rv_t func_08AAF9E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAF9E8:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFA08;
L_08AAFA08:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFA10;
L_08AAFA10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFA20 */
rv_t func_08AAFA20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAFA20:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFA28 */
rv_t func_08AAFA28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAFA28:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFA30 */
void func_08AAFA30(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0;
    int cnd_;
L_08AAFA30:;
    v0 = LD32(a1);
    ST32(a0+4, a3);
    ST32(a0+8, v0);
    cnd_ = a2 == 0;
    ST32(a0, a2);
    if (cnd_) { goto L_08AAFA48; }
    goto L_08AAFA44;
L_08AAFA44:;
    ST32(a2+4, a0);
    goto L_08AAFA48;
L_08AAFA48:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0, a0); goto L_08AAFA54; }
    goto L_08AAFA54;
L_08AAFA54:;
    return;
}

/* 08AAFA5C */
void func_08AAFA5C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAFA5C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAFAB0; }
    goto L_08AAFA94;
L_08AAFA94:;
    v0 = LD32(a0);
    goto L_08AAFA98;
L_08AAFA98:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAFAC4; }
    goto L_08AAFAA0;
L_08AAFAA0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAFA98; }
    goto L_08AAFAB0;
L_08AAFAB0:;
    v0 = 0 + 0;
    goto L_08AAFAB4;
L_08AAFAB4:;
    sp = sp + 16;
    return;
L_08AAFAC4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAFAD8; }
    goto L_08AAFACC;
L_08AAFACC:;
    ST8(a0+8, v0);
    goto L_08AAFAD0;
L_08AAFAD0:;
    v0 = 1;
    goto L_08AAFAB4;
L_08AAFAD8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAFAFC; }
    goto L_08AAFAE0;
L_08AAFAE0:;
    ST32(a2+4, v0);
    goto L_08AAFAE4;
L_08AAFAE4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFAEC;
L_08AAFAEC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAFAD0;
L_08AAFAFC:;
    ST32(v1, v0);
    goto L_08AAFAE4;
}

/* 08AAFB04 */
rv_t func_08AAFB04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAFB04:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFB0C */
rv_t func_08AAFB0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAFB0C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFB28;
L_08AAFB28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFB34 */
rv_t func_08AAFB34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAFB34:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFB54;
L_08AAFB54:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFB5C;
L_08AAFB5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFB6C */
rv_t func_08AAFB6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08AAFB6C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08AAFB74 */
void func_08AAFB74(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08AAFB74:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    a0 = LD32(a0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08AAFBC8; }
    goto L_08AAFBAC;
L_08AAFBAC:;
    v0 = LD32(a0);
    goto L_08AAFBB0;
L_08AAFBB0:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_08AAFBDC; }
    goto L_08AAFBB8;
L_08AAFBB8:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08AAFBB0; }
    goto L_08AAFBC8;
L_08AAFBC8:;
    v0 = 0 + 0;
    goto L_08AAFBCC;
L_08AAFBCC:;
    sp = sp + 16;
    return;
L_08AAFBDC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08AAFBF0; }
    goto L_08AAFBE4;
L_08AAFBE4:;
    ST8(a0+8, v0);
    goto L_08AAFBE8;
L_08AAFBE8:;
    v0 = 1;
    goto L_08AAFBCC;
L_08AAFBF0:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08AAFC14; }
    goto L_08AAFBF8;
L_08AAFBF8:;
    ST32(a2+4, v0);
    goto L_08AAFBFC;
L_08AAFBFC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08AAFC04;
L_08AAFC04:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08AAFBE8;
L_08AAFC14:;
    ST32(v1, v0);
    goto L_08AAFBFC;
}
