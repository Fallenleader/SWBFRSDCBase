#include "game.h"

/* 08A34EE4 */
rv_t func_08A34EE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34EE4:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    a1 = v0 + a1;
    v0 = D_08AE34B0 - (13488);
    v0 = v0 + 13488;
    sp = sp - 16;
    v1 = a1 << 2;
    a0 = a0 < 0xeu;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A34F40; }
    goto L_08A34F14;
L_08A34F14:;
    v0 = D_08B1C178 - (-16008);
    v1 = LD32(v1);
    v0 = v0 - 16008;
    a0 = a1 << 3;
    a0 = a0 + v0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = D_08AE30F4 - (12532); goto L_08A34F4C; }
    goto L_08A34F34;
L_08A34F34:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34F3C;
L_08A34F3C:;
    v0 = 1;
    goto L_08A34F40;
L_08A34F40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34F4C:;
    a0 = a0 + 12532;
    goto L_08A34F34;
}

/* 08A34F54 */
rv_t func_08A34F54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34F54:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34F70; }
    goto L_08A34F68;
L_08A34F68:;
    cnd_ = a2 == 0;
    a1 = 2;
    if (cnd_) { goto L_08A34F8C; }
    goto L_08A34F70;
L_08A34F70:;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34F7C;
L_08A34F7C:;
    v0 = 1;
    goto L_08A34F84;
L_08A34F84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34F8C:;
    { rv_t r_ = func_08A34EE4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34F94;
L_08A34F94:;
    goto L_08A34F84;
}

/* 08A34F9C */
rv_t func_08A34F9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34F9C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34FB8; }
    goto L_08A34FB0;
L_08A34FB0:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A34FD4; }
    goto L_08A34FB8;
L_08A34FB8:;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34FC4;
L_08A34FC4:;
    v0 = 1;
    goto L_08A34FCC;
L_08A34FCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34FD4:;
    { rv_t r_ = func_08A34EE4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34FDC;
L_08A34FDC:;
    goto L_08A34FCC;
}

/* 08A34FE4 */
rv_t func_08A34FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34FE4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A35000; }
    goto L_08A34FF8;
L_08A34FF8:;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A3501C; }
    goto L_08A35000;
L_08A35000:;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3500C;
L_08A3500C:;
    v0 = 1;
    goto L_08A35014;
L_08A35014:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3501C:;
    { rv_t r_ = func_08A34EE4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35024;
L_08A35024:;
    goto L_08A35014;
}

/* 08A3502C */
void func_08A3502C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3502C:;
    a0 = D_08AE31A4 - (12708);
    a1 = ((u32)(uintptr_t)func_08A34978) - (18808);
    sp = sp - 16;
    a0 = a0 + 12708;
    a1 = a1 + 18808;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A35050;
L_08A35050:;
    a0 = D_08AE31D8 - (12760);
    a1 = ((u32)(uintptr_t)func_08A349F0) - (18928);
    a0 = a0 + 12760;
    a1 = a1 + 18928;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3506C;
L_08A3506C:;
    a0 = D_08AE321C - (12828);
    a1 = ((u32)(uintptr_t)func_08A34A68) - (19048);
    a0 = a0 + 12828;
    a1 = a1 + 19048;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A35088;
L_08A35088:;
    a0 = D_08AE3254 - (12884);
    a1 = ((u32)(uintptr_t)func_08A34BE8) - (19432);
    a0 = a0 + 12884;
    a1 = a1 + 19432;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A350A4;
L_08A350A4:;
    a0 = D_08AE3290 - (12944);
    a1 = ((u32)(uintptr_t)func_08A34D68) - (19816);
    a0 = a0 + 12944;
    a1 = a1 + 19816;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A350C0;
L_08A350C0:;
    a0 = D_08AE32CC - (13004);
    a1 = ((u32)(uintptr_t)func_08A34F54) - (20308);
    a0 = a0 + 13004;
    a1 = a1 + 20308;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A350DC;
L_08A350DC:;
    a0 = D_08AE3300 - (13056);
    a1 = ((u32)(uintptr_t)func_08A34F9C) - (20380);
    a0 = a0 + 13056;
    a1 = a1 + 20380;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A350F8;
L_08A350F8:;
    a0 = D_08AE3338 - (13112);
    a1 = ((u32)(uintptr_t)func_08A34FE4) - (20452);
    a0 = a0 + 13112;
    a1 = a1 + 20452;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A35114;
L_08A35114:;
    a0 = D_08AE3370 - (13168);
    a1 = ((u32)(uintptr_t)func_08A34840) - (18496);
    a0 = a0 + 13168;
    a1 = a1 + 18496;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A35130;
L_08A35130:;
    a0 = D_08AE339C - (13212);
    a1 = ((u32)(uintptr_t)func_08A34930) - (18736);
    a0 = a0 + 13212;
    a1 = a1 + 18736;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3514C;
L_08A3514C:;
    sp = sp + 16;
    return;
}

/* 08A35158 */
rv_t func_08A35158(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A35158:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 48;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A35688; }
    goto L_08A35198;
L_08A35198:;
    v0 = D_08AEFB8C - (-1140);
    f1 = BITSF(LD32(v0-1140));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AEFB90 - (-1136);
    f7 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f2 = BITSF(LD32(v1-1136));
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f7 = f7 * f1;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f3 = f3 * f1;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AEFB94 - (-1132);
    f6 = f6 * f1;
    f4 = (float)(s32)FBITS(f0);
    f5 = f5 * f1;
    f0 = BITSF(LD32(v0-1132));
    v0 = D_08AEFB98 - (-1128);
    f4 = f4 * f1;
    t7 = D_08C2D464 - (-11164);
    f1 = BITSF(LD32(v0-1128));
    v1 = D_08B1C174 - (-16012);
    v0 = t7 - 11164;
    v1 = v1 - 16012;
    a3 = D_08C2D40C - (-11252);
    t3 = D_08C2D41C - (-11236);
    t4 = D_08C2D42C - (-11220);
    t5 = D_08C2D43C - (-11204);
    t6 = D_08C2D450 - (-11184);
    t1 = v1 - 4;
    t8 = v0 + 20;
    t0 = t5 - 11204;
    t2 = t6 - 11184;
    a0 = a3 - 11252;
    a1 = t3 - 11236;
    a2 = t4 - 11220;
    ST32(a0+4, FBITS(f5));
    t9 = v0 + 140;
    s0 = v0 + 260;
    ST32(a0+12, FBITS(f3));
    s1 = v0 + 320;
    s2 = v0 + 380;
    ST32(a1+4, FBITS(f7));
    s3 = v0 + 440;
    s4 = v0 + 500;
    ST32(a1+12, FBITS(f3));
    s5 = v0 + 560;
    s6 = v0 + 620;
    ST32(a2+12, FBITS(f3));
    s7 = v0 + 680;
    fp = v0 + 740;
    ST32(a3-11252, FBITS(f4));
    a3 = v0 + 80;
    ST32(t3-11236, FBITS(f6));
    t3 = v0 + 200;
    ST32(t4-11220, FBITS(f3));
    t4 = v0 + 800;
    ST32(t5-11204, FBITS(f2));
    ST32(t6-11184, FBITS(f2));
    ST32(t7-11164, 0);
    ST32(t0+16, v1);
    ST32(a0+8, FBITS(f6));
    ST32(a2+4, FBITS(f3));
    ST32(a1+8, FBITS(f7));
    ST32(t2+16, t1);
    ST32(a2+8, FBITS(f3));
    ST32(v0+16, v1);
    ST32(t0+4, FBITS(f2));
    ST32(t0+8, FBITS(f3));
    ST32(t2+4, FBITS(f2));
    ST32(t0+12, FBITS(f3));
    ST32(v0+4, 0);
    ST32(t2+8, FBITS(f3));
    ST32(t8+4, 0);
    ST32(t2+12, FBITS(f3));
    ST32(v0+8, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(v0+20, FBITS(f0));
    ST32(t8+8, FBITS(f1));
    ST32(t8+16, v1);
    ST32(t8+12, FBITS(f0));
    t8 = v0 + 40;
    ST32(t8+16, v1);
    ST32(t8+4, 0);
    ST32(t8+8, FBITS(f2));
    ST32(t8+12, FBITS(f0));
    t8 = v0 + 60;
    ST32(t8+16, v1);
    ST32(t8+4, FBITS(f1));
    ST32(a3+16, v1);
    ST32(t8+8, FBITS(f0));
    ST32(t8+12, FBITS(f2));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+12, FBITS(f2));
    a3 = v0 + 100;
    ST32(a3+16, v1);
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    ST32(a3+12, FBITS(f2));
    a3 = v0 + 120;
    ST32(a3+16, t1);
    ST32(a3+4, 0);
    ST32(t9+16, t1);
    ST32(a3+8, FBITS(f0));
    ST32(a3+12, FBITS(f0));
    ST32(t9+4, 0);
    ST32(t9+8, FBITS(f2));
    ST32(t9+12, FBITS(f0));
    t9 = v0 + 160;
    ST32(v0+40, FBITS(f1));
    ST32(v0+60, 0);
    ST32(v0+80, FBITS(f0));
    ST32(v0+100, FBITS(f1));
    ST32(v0+120, 0);
    ST32(v0+140, FBITS(f1));
    ST32(v0+160, FBITS(f0));
    ST32(t9+4, 0);
    ST32(t9+16, t1);
    ST32(t9+8, FBITS(f1));
    ST32(t9+12, FBITS(f0));
    t9 = v0 + 180;
    ST32(t9+16, t1);
    ST32(t9+4, FBITS(f1));
    ST32(t3+16, t1);
    ST32(t9+8, FBITS(f0));
    ST32(t9+12, FBITS(f2));
    ST32(t3+4, FBITS(f1));
    ST32(t3+8, FBITS(f2));
    ST32(t3+12, FBITS(f2));
    t3 = v0 + 220;
    ST32(t3+16, t1);
    ST32(t3+4, FBITS(f1));
    ST32(t3+8, FBITS(f1));
    ST32(t3+12, FBITS(f2));
    t3 = v0 + 240;
    ST32(t3+16, v1);
    ST32(t3+4, FBITS(f0));
    ST32(s0+16, v1);
    ST32(t3+8, FBITS(f0));
    ST32(t3+12, FBITS(f1));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    ST32(s0+12, FBITS(f1));
    s0 = v0 + 280;
    ST32(s0+16, v1);
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f2));
    ST32(s0+12, FBITS(f1));
    s0 = v0 + 300;
    ST32(v0+180, 0);
    ST32(v0+200, FBITS(f1));
    ST32(v0+220, FBITS(f0));
    ST32(v0+240, 0);
    ST32(v0+260, FBITS(f0));
    ST32(v0+280, FBITS(f1));
    ST32(v0+300, 0);
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f0));
    ST32(s0+12, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    ST32(s1+8, FBITS(f2));
    ST32(s1+12, FBITS(f1));
    ST32(s0+16, t1);
    ST32(s1+16, t1);
    s1 = v0 + 340;
    ST32(s1+4, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s1+12, FBITS(f1));
    ST32(s1+16, t1);
    s1 = v0 + 360;
    ST32(s1+4, 0);
    ST32(s1+8, FBITS(f3));
    ST32(s1+12, FBITS(f3));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f3));
    ST32(s2+12, FBITS(f2));
    ST32(s1+16, 0);
    ST32(s2+16, t1);
    s2 = v0 + 400;
    ST32(s2+4, 0);
    ST32(s2+8, FBITS(f3));
    ST32(s2+12, FBITS(f3));
    ST32(s2+16, 0);
    s2 = v0 + 420;
    ST32(v0+320, FBITS(f1));
    ST32(v0+340, FBITS(f0));
    ST32(v0+360, 0);
    ST32(v0+380, FBITS(f2));
    ST32(v0+400, 0);
    ST32(v0+420, 0);
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    ST32(s2+12, 0);
    ST32(s2+16, 0);
    ST32(s3+4, FBITS(f2));
    ST32(s3+8, FBITS(f1));
    ST32(s3+16, t1);
    ST32(s3+12, FBITS(f3));
    s3 = v0 + 460;
    ST32(s3+4, 0);
    ST32(s3+8, 0);
    ST32(s3+16, 0);
    ST32(s3+12, 0);
    s3 = v0 + 480;
    ST32(s3+4, 0);
    ST32(s3+8, 0);
    ST32(s4+4, FBITS(f0));
    ST32(s4+8, FBITS(f3));
    ST32(s3+16, 0);
    ST32(s3+12, 0);
    ST32(s4+16, v1);
    ST32(s4+12, FBITS(f1));
    s4 = v0 + 520;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    ST32(s4+16, 0);
    ST32(s4+12, 0);
    s4 = v0 + 540;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    ST32(s5+4, FBITS(f2));
    ST32(s5+8, FBITS(f0));
    ST32(s4+16, 0);
    ST32(v0+440, FBITS(f0));
    ST32(v0+460, 0);
    ST32(v0+480, 0);
    ST32(v0+500, FBITS(f2));
    ST32(v0+520, 0);
    ST32(v0+540, 0);
    ST32(s4+12, 0);
    ST32(v0+560, 0);
    ST32(s5+12, FBITS(f3));
    ST32(s5+16, t1);
    s5 = v0 + 580;
    ST32(s5+4, 0);
    ST32(s5+16, 0);
    ST32(s5+8, 0);
    ST32(s5+12, 0);
    s5 = v0 + 600;
    ST32(s5+4, 0);
    ST32(s5+16, 0);
    ST32(s6+4, 0);
    ST32(s6+16, v1);
    ST32(s5+8, 0);
    ST32(s5+12, 0);
    ST32(s6+8, FBITS(f3));
    ST32(s6+12, FBITS(f0));
    s6 = v0 + 640;
    ST32(s6+4, 0);
    ST32(s6+16, 0);
    ST32(s6+8, 0);
    ST32(s6+12, 0);
    s6 = v0 + 660;
    ST32(s6+4, FBITS(f2));
    ST32(s6+16, v1);
    ST32(s7+4, FBITS(f2));
    ST32(s7+16, v1);
    ST32(s6+8, FBITS(f0));
    ST32(s6+12, FBITS(f3));
    ST32(s7+8, FBITS(f1));
    ST32(s7+12, FBITS(f3));
    s7 = v0 + 700;
    ST32(s7+4, FBITS(f2));
    ST32(v0+580, 0);
    ST32(v0+600, 0);
    ST32(v0+620, FBITS(f2));
    ST32(v0+640, 0);
    ST32(v0+660, 0);
    ST32(v0+680, FBITS(f0));
    ST32(v0+700, FBITS(f1));
    ST32(s7+8, FBITS(f2));
    ST32(s7+16, v1);
    ST32(s7+12, FBITS(f3));
    s7 = v0 + 720;
    ST32(s7+16, 0);
    ST32(s7+4, 0);
    ST32(fp+16, t1);
    ST32(s7+8, 0);
    ST32(s7+12, 0);
    ST32(fp+4, FBITS(f2));
    ST32(fp+8, FBITS(f2));
    ST32(fp+12, FBITS(f3));
    fp = v0 + 760;
    ST32(fp+16, 0);
    ST32(fp+4, FBITS(f3));
    ST32(fp+8, 0);
    ST32(fp+12, FBITS(f3));
    fp = v0 + 780;
    ST32(fp+16, 0);
    ST32(fp+4, 0);
    ST32(t4+16, t1);
    ST32(fp+8, 0);
    ST32(fp+12, 0);
    ST32(t4+8, FBITS(f3));
    ST32(t4+12, FBITS(f0));
    ST32(t4+4, 0);
    t4 = v0 + 820;
    ST32(v0+740, FBITS(f1));
    ST32(v0+800, FBITS(f2));
    ST32(v0+820, 0);
    ST32(t4+16, 0);
    ST32(v0+720, 0);
    ST32(v0+760, 0);
    ST32(v0+780, 0);
    ST32(t4+4, 0);
    ST32(t4+8, 0);
    ST32(t4+12, 0);
    goto L_08A35688;
L_08A35688:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A356B4 */
rv_t func_08A356B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A356B4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A35158(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A356C8;
L_08A356C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A356D4 */
rv_t func_08A356D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A356D4:;
    sp = sp - 16;
    v0 = D_08AE3558 - (13656);
    s0 = v0 + 13656;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A356F0;
L_08A356F0:;
    a0 = 0x65000000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x8cd9;
    if (cnd_) { goto L_08A35760; }
    goto L_08A356FC;
L_08A356FC:;
    a0 = 0xc3170000u;
    goto L_08A35700;
L_08A35700:;
    a0 = a0 | 0xf67b;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35710;
L_08A35710:;
    a0 = 0x3c8e0000u;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a0 = a0 | 0xddd1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35724;
L_08A35724:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    func_08A37364(a0);
    goto L_08A35730;
L_08A35730:;
    f0 = func_08A36BA0(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A35738;
L_08A35738:;
    func_08A37304();
    goto L_08A35740;
L_08A35740:;
    v1 = (u32)-1;
    v0 = D_08B1C2D0 - (-15664);
    ST32(v0-15664, v1);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A35760:;
    { rv_t r_ = func_0888B320(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35768;
L_08A35768:;
    a3 = 0x7fff0000u;
    a1 = v0 + 392;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A356FC; }
    goto L_08A35788;
L_08A35788:;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A35790;
L_08A35790:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A35798;
L_08A35798:;
    a0 = 0xc3170000u;
    goto L_08A35700;
}

/* 08A357A0 */
rv_t func_08A357A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A357A0:;
    a0 = 0xc3170000u;
    sp = sp - 16;
    a0 = a0 | 0xf67b;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A357B8;
L_08A357B8:;
    s0 = D_08AE3558 - (13656);
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    s0 = s0 + 13656;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A357CC;
L_08A357CC:;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A357D4;
L_08A357D4:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A357F8; }
    goto L_08A357DC;
L_08A357DC:;
    a0 = 3;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A357E4;
L_08A357E4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A357F8:;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35800;
L_08A35800:;
    goto L_08A357DC;
}

/* 08A35808 */
rv_t func_08A35808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A35808:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE3598 - (13720);
    a0 = a0 + 13720;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A35834; }
    goto L_08A3582C;
L_08A3582C:;
    cnd_ = a2 == 0;
    v1 = s0 < 0x5u;
    if (cnd_) { goto L_08A35850; }
    goto L_08A35834;
L_08A35834:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3583C;
L_08A3583C:;
    v0 = 1;
    goto L_08A35840;
L_08A35840:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A35850:;
    a0 = D_08AE3558 - (13656);
    v0 = 0 + 0;
    cnd_ = v1 == 0;
    a0 = a0 + 13656;
    if (cnd_) { goto L_08A35840; }
    goto L_08A35860;
L_08A35860:;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A35868;
L_08A35868:;
    v0 = v0 < 0x2u;
    v1 = D_08C2D7DD - (-10275);
    ST8(v1-10275, v0);
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35878;
L_08A35878:;
    v1 = 0xcd120000u;
    a0 = 0x3c8e0000u;
    v1 = v1 | 0xe72f;
    cnd_ = v0 == v1;
    a0 = a0 | 0xddd1;
    if (cnd_) { goto L_08A358BC; }
    goto L_08A3588C;
L_08A3588C:;
    v1 = D_08AE3E64 - (15972);
    goto L_08A35890;
L_08A35890:;
    v1 = v1 + 15972;
    v0 = s0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A358AC;
L_08A358AC:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A358B4;
L_08A358B4:;
    v0 = 1;
    goto L_08A35840;
L_08A358BC:;
    func_08A37364(a0);
    goto L_08A358C4;
L_08A358C4:;
    v1 = D_08AE3E64 - (15972);
    goto L_08A35890;
}

/* 08A358CC */
rv_t func_08A358CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A358CC:;
    sp = sp - 80;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A358F4; }
    goto L_08A358EC;
L_08A358EC:;
    cnd_ = a2 == 0;
    v0 = a0 < 0x5u;
    if (cnd_) { goto L_08A3591C; }
    goto L_08A358F4;
L_08A358F4:;
    a0 = D_08AE3598 - (13720);
    a0 = a0 + 13720;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35900;
L_08A35900:;
    v1 = 1;
    goto L_08A35904;
L_08A35904:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A3591C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A35904; }
    goto L_08A35924;
L_08A35924:;
    cnd_ = a0 == 0;
    s1 = D_08B1C2D4 - (-15660);
    if (cnd_) { goto L_08A359BC; }
    goto L_08A3592C;
L_08A3592C:;
    f0 = BITSF(s0);
    cnd_ = (s32)s0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A359A0; }
    goto L_08A35938;
L_08A35938:;
    v0 = D_08AEFB9C - (-1124);
    f0 = BITSF(LD32(v0-1124));
    v0 = 0x5ac30000u;
    v0 = v0 | 0xa2c4;
    f1 = f1 * f0;
    ST32(sp+16, v0);
    v0 = D_08AEFBA0 - (-1120);
    a0 = D_08AE35D0 - (13776);
    f0 = f1 + f0;
    v1 = LD32(s1-15660);
    a0 = a0 + 13776;
    a1 = sp + 16;
    ST32(sp+36, FBITS(f0));
    f0 = BITSF(LD32(v0-1120));
    ST32(sp+24, v1);
    ST32(sp+28, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST8(sp+20, 0);
    ST32(sp+32, 0);
    ST32(sp+44, 0);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35998;
L_08A35998:;
    v1 = 1;
    goto L_08A35904;
L_08A359A0:;
    v1 = s0 >> 1;
    v0 = s0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A35938;
L_08A359BC:;
    v0 = D_08B263B8 - (25528);
    a1 = LD32(v0+25528);
    a0 = D_08AE35DC - (13788);
    a0 = a0 + 13788;
    a2 = sp + 0;
    ST8(sp, 0);
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A359D8;
L_08A359D8:;
    v1 = LD_U8(sp);
    cnd_ = v1 == 0;
    ST32(s1-15660, v0);
    if (cnd_) { goto L_08A3592C; }
    goto L_08A359E4;
L_08A359E4:;
    func_0883A610(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A359EC;
L_08A359EC:;
    goto L_08A3592C;
}

/* 08A359F4 */
rv_t func_08A359F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A359F4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A35A1C; }
    goto L_08A35A14;
L_08A35A14:;
    cnd_ = a2 == 0;
    v0 = a0 < 0x5u;
    if (cnd_) { goto L_08A35A44; }
    goto L_08A35A1C;
L_08A35A1C:;
    a0 = D_08AE3608 - (13832);
    a0 = a0 + 13832;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35A28;
L_08A35A28:;
    v1 = 1;
    goto L_08A35A2C;
L_08A35A2C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A35A44:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_08A35A2C; }
    goto L_08A35A4C;
L_08A35A4C:;
    a0 = 0x3c8e0000u;
    a1 = 1;
    a2 = 1;
    a0 = a0 | 0xddd1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35A60;
L_08A35A60:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    func_08A37364(a0);
    goto L_08A35A6C;
L_08A35A6C:;
    v0 = D_08C2933C - (-27844);
    s1 = v0 - 27844;
    v0 = func_08A3729C();
    goto L_08A35A78;
L_08A35A78:;
    v1 = v0 < 0x1u;
    a1 = v0 + 0;
    v0 = s1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A35A2C; }
    goto L_08A35A90;
L_08A35A90:;
    v1 = D_08AE3680 - (13952);
    v0 = s0 << 2;
    v1 = v1 + 13952;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A35AACu: goto L_08A35AAC; case 0x08A35AC4u: goto L_08A35AC4; case 0x08A35AE0u: goto L_08A35AE0; case 0x08A35AF0u: goto L_08A35AF0; default: rs_break(0, 0x08a35aa4); }
L_08A35AAC:;
    a0 = 0x7ea00000u;
    a0 = a0 | 0x8e83;
    goto L_08A35AB4;
L_08A35AB4:;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35ABC;
L_08A35ABC:;
    v1 = 1;
    goto L_08A35A2C;
L_08A35AC4:;
    v1 = LD_U8(a1+8);
    v0 = D_08AE3E8C - (16012);
    v0 = v0 + 16012;
    goto L_08A35AD0;
L_08A35AD0:;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    goto L_08A35AB4;
L_08A35AE0:;
    v1 = LD_U8(a1+9);
    v0 = D_08AE3ECC - (16076);
    v0 = v0 + 16076;
    goto L_08A35AD0;
L_08A35AF0:;
    v1 = LD32(s1+1496);
    v0 = D_08AE3F0C - (16140);
    v0 = v0 + 16140;
    goto L_08A35AD0;
}

/* 08A35B00 */
rv_t func_08A35B00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A35B00:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A35B40; }
    goto L_08A35B1C;
L_08A35B1C:;
    a0 = D_08AE3694 - (13972);
    a0 = a0 + 13972;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35B28;
L_08A35B28:;
    goto L_08A35B2C;
L_08A35B2C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A35B40:;
    v0 = func_08A3729C();
    goto L_08A35B48;
L_08A35B48:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A35B70; }
    goto L_08A35B50;
L_08A35B50:;
    a0 = D_08AE3558 - (13656);
    a0 = a0 + 13656;
    v0 = func_08899420(a0, 0, 0, 0);
    goto L_08A35B5C;
L_08A35B5C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A35BA8; }
    goto L_08A35B64;
L_08A35B64:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+4, s1); goto L_08A35B70; }
    goto L_08A35B70;
L_08A35B70:;
    v1 = 1;
    v0 = D_08C29342 - (-27838);
    ST8(v0-27838, v1);
    f0 = func_08A36BA0(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A35B80;
L_08A35B80:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35B8C;
L_08A35B8C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+172, 0); goto L_08A35B94; }
    goto L_08A35B94;
L_08A35B94:;
    a0 = 0xcd120000u;
    a0 = a0 | 0xe72f;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35BA0;
L_08A35BA0:;
    goto L_08A35B2C;
L_08A35BA8:;
    ST32(s0, s1);
    goto L_08A35B70;
}

/* 08A35BB0 */
rv_t func_08A35BB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A35BB0:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A35C20; }
    goto L_08A35BE4;
L_08A35BE4:;
    a0 = D_08AE36F4 - (14068);
    a0 = a0 + 14068;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35BF0;
L_08A35BF0:;
    v0 = 1;
    goto L_08A35BF4;
L_08A35BF4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A35C20:;
    s1 = D_08AE3558 - (13656);
    a0 = s1 + 13656;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A35C2C;
L_08A35C2C:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_08A35C4C; }
    goto L_08A35C38;
L_08A35C38:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = s0 < a0; goto L_08A35C50; }
    goto L_08A35C44;
L_08A35C44:;
    v0 = 0 + 0;
    goto L_08A35BF4;
L_08A35C4C:;
    v0 = s0 < a0;
    goto L_08A35C50;
L_08A35C50:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A35BF4; }
    goto L_08A35C58;
L_08A35C58:;
    s5 = s1 + 13656;
    v0 = func_08A28C68();
    goto L_08A35C60;
L_08A35C60:;
    a0 = s5 + 0;
    s7 = v0 + 0;
    s6 = D_08B1C2D0 - (-15664);
    v0 = func_08899420(a0, 0, 0, 0);
    goto L_08A35C70;
L_08A35C70:;
    s3 = v0 + 0;
    v0 = LD32(s6-15664);
    cnd_ = v0 == s3;
    a0 = 0x7ea00000u;
    if (cnd_) { goto L_08A35CA8; }
    goto L_08A35C80;
L_08A35C80:;
    a0 = a0 | 0x8e83;
    { rv_t r_ = func_0888B320(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35C88;
L_08A35C88:;
    s4 = v0 + 0;
    v0 = func_08A3729C();
    goto L_08A35C90;
L_08A35C90:;
    v1 = 0 < v0;
    s2 = v0 + 0;
    v0 = 0 < s4;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A35D50; }
    goto L_08A35CA8;
L_08A35CA8:;
    a0 = s1 + 13656;
    goto L_08A35CAC;
L_08A35CAC:;
    ST32(s6-15664, s3);
    v0 = func_08899420(a0, 0, 0, 0);
    goto L_08A35CB4;
L_08A35CB4:;
    v1 = v0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A35D34; }
    goto L_08A35CC4;
L_08A35CC4:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = D_08C2933C - (-27844); goto L_08A35D0C; }
    goto L_08A35CD0;
L_08A35CD0:;
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35CE4;
L_08A35CE4:;
    a1 = s1 + 0;
    a0 = LD32(sp);
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A35CF4;
L_08A35CF4:;
    a0 = v0 + 0;
    v0 = func_08834304(a0);
    goto L_08A35CFC;
L_08A35CFC:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35D04;
L_08A35D04:;
    v0 = 1;
    goto L_08A35BF4;
L_08A35D0C:;
    a1 = s7 + 0;
    a0 = a0 - 27844;
    v0 = func_08978120(a0, a1);
    goto L_08A35D18;
L_08A35D18:;
    a1 = v0 + 0;
    v0 = D_08AE3E28 - (15912);
    v1 = s0 << 2;
    v0 = v0 + 15912;
    v1 = v1 + v0;
    s1 = LD32(v1);
    goto L_08A35CD0;
L_08A35D34:;
    a1 = s0 + 0;
    a0 = s7 + 0;
    s1 = 0x65880000u;
    v0 = func_089780FC(a0, a1);
    goto L_08A35D44;
L_08A35D44:;
    a1 = v0 + 0;
    s1 = s1 | 0x132d;
    goto L_08A35CD0;
L_08A35D50:;
    a0 = s5 + 0;
    v0 = func_08899420(a0, 0, 0, 0);
    goto L_08A35D58;
L_08A35D58:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A35D80; }
    goto L_08A35D64;
L_08A35D64:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s2+4); goto L_08A35D70; }
    goto L_08A35D70;
L_08A35D70:;
    a0 = s4 + 0;
    func_0888FCA8(a0, a1);
    goto L_08A35D78;
L_08A35D78:;
    a0 = s1 + 13656;
    goto L_08A35CAC;
L_08A35D80:;
    a1 = LD32(s2);
    goto L_08A35D70;
}

/* 08A35D88 */
rv_t func_08A35D88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A35D88:;
    sp = sp - 128;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A35DE0; }
    goto L_08A35DB0;
L_08A35DB0:;
    a0 = D_08AE36F4 - (14068);
    a0 = a0 + 14068;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35DBC;
L_08A35DBC:;
    v0 = 1;
    goto L_08A35DC0;
L_08A35DC0:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08A35DE0:;
    s1 = D_08AE3558 - (13656);
    a0 = s1 + 13656;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A35DEC;
L_08A35DEC:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_08A35E0C; }
    goto L_08A35DF8;
L_08A35DF8:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = s0 < a0; goto L_08A35E10; }
    goto L_08A35E04;
L_08A35E04:;
    v0 = 0 + 0;
    goto L_08A35DC0;
L_08A35E0C:;
    v0 = s0 < a0;
    goto L_08A35E10;
L_08A35E10:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A35DC0; }
    goto L_08A35E18;
L_08A35E18:;
    v0 = func_08A28C68();
    goto L_08A35E20;
L_08A35E20:;
    a0 = s1 + 13656;
    s2 = v0 + 0;
    v0 = func_08899420(a0, 0, 0, 0);
    goto L_08A35E2C;
L_08A35E2C:;
    v1 = 1;
    a1 = 0 + 0;
    cnd_ = v0 == v1;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A35F44; }
    goto L_08A35E3C;
L_08A35E3C:;
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a2 = sp + 80;
    ST32(sp+80, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35E50;
L_08A35E50:;
    a1 = s1 + 0;
    a0 = LD32(sp+80);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35E60;
L_08A35E60:;
    s3 = v0 + 0;
    v0 = LD32(sp+80);
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = v0 != 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A35EDC; }
    goto L_08A35E78;
L_08A35E78:;
    f0 = BITSF(LD32(sp));
    goto L_08A35E7C;
L_08A35E7C:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    v0 = 0xc91b0000u;
    v0 = v0 | 0x7788;
    a0 = D_08AE35D0 - (13776);
    ST32(sp+32, v0);
    v1 = 1;
    v0 = 1;
    a0 = a0 + 13776;
    a1 = sp + 32;
    ST32(sp+36, s3);
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST8(sp+60, v0);
    ST8(sp+61, v1);
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+40, 0);
    ST32(sp+44, 0);
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35ED4;
L_08A35ED4:;
    v0 = 1;
    goto L_08A35DC0;
L_08A35EDC:;
    s4 = sp + 16;
    a0 = s4 + 0;
    ST32(sp+16, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_08A35EEC;
L_08A35EEC:;
    v1 = s0 << 1;
    v1 = v1 + s0;
    v0 = D_08AE3E40 - (15936);
    v1 = v1 << 2;
    v0 = v0 + 15936;
    s0 = v1 + v0;
    s2 = 0 + 0;
    s1 = sp + 0;
    goto L_08A35F0C;
L_08A35F0C:;
    a1 = LD32(s0);
    f12 = BITSF(0);
    a0 = LD32(sp+80);
    s2 = s2 + 1;
    s0 = s0 + 4;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35F24;
L_08A35F24:;
    v0 = s2 < 0x3u;
    ST32(s1, FBITS(f0));
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A35F0C; }
    goto L_08A35F34;
L_08A35F34:;
    a0 = s4 + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35F3C;
L_08A35F3C:;
    f0 = BITSF(LD32(sp));
    goto L_08A35E7C;
L_08A35F44:;
    a0 = D_08C2933C - (-27844);
    a1 = s2 + 0;
    a0 = a0 - 27844;
    v0 = func_08978120(a0, a1);
    goto L_08A35F54;
L_08A35F54:;
    a1 = v0 + 0;
    v0 = D_08AE3E1C - (15900);
    v1 = s0 << 2;
    v0 = v0 + 15900;
    v1 = v1 + v0;
    s1 = LD32(v1);
    goto L_08A35E3C;
}

/* 08A35F70 */
rv_t func_08A35F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A35F70:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = 0xcd120000u;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 | 0xe72f;
    if (cnd_) { goto L_08A35FA8; }
    goto L_08A35F8C;
L_08A35F8C:;
    a0 = D_08AE3724 - (14116);
    a0 = a0 + 14116;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35F98;
L_08A35F98:;
    goto L_08A35F9C;
L_08A35F9C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A35FA8:;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A35FB0;
L_08A35FB0:;
    v1 = D_08C2CE70 - (-12688);
    v0 = LD32(v1-12688);
    a1 = 0xedff0000u;
    a0 = 0xbf670000u;
    a1 = a1 | 0x6328;
    v0 = v0 ^ 0x3;
    a0 = a0 | 0x9e15;
    if (v0 != 0) a0 = a1;
    a2 = 1;
    a1 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A35FDC;
L_08A35FDC:;
    goto L_08A35F9C;
}

/* 08A35FE4 */
rv_t func_08A35FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A35FE4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE3754 - (14164);
    v0 = v0 & 0xff;
    a0 = a0 + 14164;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A36020; }
    goto L_08A36008;
L_08A36008:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36010;
L_08A36010:;
    goto L_08A36014;
L_08A36014:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A36020:;
    a0 = 0x89830000u;
    a0 = a0 | 0x132b;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3602C;
L_08A3602C:;
    goto L_08A36014;
}

/* 08A36034 */
rv_t func_08A36034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A36034:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A36058; }
    goto L_08A36050;
L_08A36050:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A3607C; }
    goto L_08A36058;
L_08A36058:;
    a0 = D_08AE37A0 - (14240);
    a0 = a0 + 14240;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36064;
L_08A36064:;
    v0 = 1;
    goto L_08A36068;
L_08A36068:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A3607C:;
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A36068; }
    goto L_08A36084;
L_08A36084:;
    a0 = D_08AE3558 - (13656);
    a0 = a0 + 13656;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A36090;
L_08A36090:;
    s1 = v0 + 0;
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A3617C; }
    goto L_08A360A0;
L_08A360A0:;
    v0 = 1;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08A36154; }
    goto L_08A360AC;
L_08A360AC:;
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A360C0;
L_08A360C0:;
    a1 = s0 + 0;
    a0 = LD32(sp);
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A360D0;
L_08A360D0:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = D_08AE3E78 - (15992);
    if (cnd_) { goto L_08A36130; }
    goto L_08A360E0;
L_08A360E0:;
    v0 = func_08834304(a0);
    goto L_08A360E8;
L_08A360E8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A360F0;
L_08A360F0:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A360F8;
L_08A360F8:;
    v1 = 0xcd120000u;
    v1 = v1 | 0xe72f;
    cnd_ = v0 == v1;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A36120; }
    goto L_08A36108;
L_08A36108:;
    v0 = s1 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = s1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = D_08C2D7DC - (-10276);
    if (cnd_) { goto L_08A36128; }
    goto L_08A36120;
L_08A36120:;
    a0 = 1;
    v0 = D_08C2D7DC - (-10276);
    goto L_08A36128;
L_08A36128:;
    ST8(v0-10276, a0);
    goto L_08A36064;
L_08A36130:;
    v0 = s1 << 2;
    v1 = v1 + 15992;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3614C;
L_08A3614C:;
    goto L_08A360E8;
L_08A36154:;
    v0 = func_08A28C68();
    goto L_08A3615C;
L_08A3615C:;
    a0 = D_08C2933C - (-27844);
    a1 = v0 + 0;
    a0 = a0 - 27844;
    v0 = func_08978120(a0, a1);
    goto L_08A3616C;
L_08A3616C:;
    a1 = v0 + 0;
    v0 = D_08AE3E34 - (15924);
    s0 = LD32(v0+15924);
    goto L_08A360AC;
L_08A3617C:;
    s0 = 0x65830000u;
    v0 = func_08A28C68();
    goto L_08A36184;
L_08A36184:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_089780FC(a0, a1);
    goto L_08A36190;
L_08A36190:;
    a1 = v0 + 0;
    s0 = s0 | 0x9733;
    goto L_08A360AC;
}

/* 08A3619C */
rv_t func_08A3619C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3619C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE37F0 - (14320);
    a0 = a0 + 14320;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A361D0; }
    goto L_08A361C4;
L_08A361C4:;
    v0 = D_08C2933C - (-27844);
    cnd_ = a2 == 0;
    s1 = v0 - 27844;
    if (cnd_) { goto L_08A361F0; }
    goto L_08A361D0;
L_08A361D0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A361D8;
L_08A361D8:;
    goto L_08A361DC;
L_08A361DC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A361F0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A3620C; }
    goto L_08A361F8;
L_08A361F8:;
    v0 = func_08A3729C();
    goto L_08A36200;
L_08A36200:;
    ST8(v0+8, s0);
    v0 = 1;
    ST8(s1+6, v0);
    goto L_08A3620C;
L_08A3620C:;
    f0 = func_08A36BA0(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A36214;
L_08A36214:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    func_08A37364(a0);
    goto L_08A36220;
L_08A36220:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3622C;
L_08A3622C:;
    a0 = 0xcd120000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0xe72f;
    if (cnd_) { goto L_08A3623C; }
    goto L_08A36238;
L_08A36238:;
    ST32(v0+172, 0);
    goto L_08A3623C;
L_08A3623C:;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36244;
L_08A36244:;
    goto L_08A361DC;
}

/* 08A3624C */
rv_t func_08A3624C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3624C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE382C - (14380);
    a0 = a0 + 14380;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A36280; }
    goto L_08A36274;
L_08A36274:;
    v0 = D_08C2933C - (-27844);
    cnd_ = a2 == 0;
    s1 = v0 - 27844;
    if (cnd_) { goto L_08A362A0; }
    goto L_08A36280;
L_08A36280:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36288;
L_08A36288:;
    goto L_08A3628C;
L_08A3628C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A362A0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A362BC; }
    goto L_08A362A8;
L_08A362A8:;
    v0 = func_08A3729C();
    goto L_08A362B0;
L_08A362B0:;
    ST8(v0+9, s0);
    v0 = 1;
    ST8(s1+6, v0);
    goto L_08A362BC;
L_08A362BC:;
    f0 = func_08A36BA0(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A362C4;
L_08A362C4:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    func_08A37364(a0);
    goto L_08A362D0;
L_08A362D0:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A362DC;
L_08A362DC:;
    a0 = 0xcd120000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0xe72f;
    if (cnd_) { goto L_08A362EC; }
    goto L_08A362E8;
L_08A362E8:;
    ST32(v0+172, 0);
    goto L_08A362EC;
L_08A362EC:;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A362F4;
L_08A362F4:;
    goto L_08A3628C;
}

/* 08A362FC */
rv_t func_08A362FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_08A362FC:;
    sp = sp - 208;
    a1 = a1 & 0xff;
    t2 = a0 + 0;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A36324; }
    goto L_08A3631C;
L_08A3631C:;
    cnd_ = a2 == 0;
    v0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A36348; }
    goto L_08A36324;
L_08A36324:;
    a0 = D_08AE3868 - (14440);
    a0 = a0 + 14440;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36330;
L_08A36330:;
    goto L_08A36334;
L_08A36334:;
    v0 = 1;
    sp = sp + 208;
    return (rv_t){ v0, v1, f0 };
L_08A36348:;
    t1 = v0 - 27844;
    cnd_ = t1 == 0;
    t3 = t1 + 1312;
    if (cnd_) { goto L_08A36430; }
    goto L_08A36354;
L_08A36354:;
    t0 = sp + 0;
    a3 = t3 + 0;
    a2 = t1 + 1488;
    goto L_08A36360;
L_08A36360:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != a2;
    ST32(t0-4, a1);
    if (cnd_) { goto L_08A36360; }
    goto L_08A3638C;
L_08A3638C:;
    s0 = t1 + 0;
    a0 = t3 + 0;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    t1 = LD32(a3+8);
    ST32(t0, v0);
    ST32(t0+4, v1);
    ST32(t0+8, t1);
    a1 = sp + 0;
    a2 = 188;
    ST32(sp+184, t2);
    v0 = func_088F86C8(a0, a1, a2);
    goto L_08A363BC;
L_08A363BC:;
    v1 = 0 < v0;
    v0 = LD_U8(s0+6);
    s1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A363D8; }
    goto L_08A363D0;
L_08A363D0:;
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s1+6, a0); goto L_08A363E0; }
    goto L_08A363D8;
L_08A363D8:;
    a0 = 1;
    ST8(s1+6, a0);
    goto L_08A363E0;
L_08A363E0:;
    a2 = sp + 0;
    a3 = s0 + 1312;
    t0 = sp + 176;
    goto L_08A363EC;
L_08A363EC:;
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
    if (cnd_) { goto L_08A363EC; }
    goto L_08A36418;
L_08A36418:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    goto L_08A36430;
L_08A36430:;
    f0 = func_08A36BA0(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A36438;
L_08A36438:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    func_08A37364(a0);
    goto L_08A36444;
L_08A36444:;
    a0 = 0x3c8e0000u;
    a0 = a0 | 0xddd1;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36450;
L_08A36450:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+172, 0); goto L_08A36458; }
    goto L_08A36458;
L_08A36458:;
    a0 = 0xcd120000u;
    a0 = a0 | 0xe72f;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36464;
L_08A36464:;
    goto L_08A36334;
}

/* 08A3646C */
void func_08A3646C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3646C:;
    a0 = D_08AE38A0 - (14496);
    a1 = ((u32)(uintptr_t)func_08A35F70) - (24432);
    sp = sp - 16;
    a0 = a0 + 14496;
    a1 = a1 + 24432;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A3649C;
L_08A3649C:;
    a0 = D_08AE38D4 - (14548);
    a1 = ((u32)(uintptr_t)func_08A35FE4) - (24548);
    a0 = a0 + 14548;
    a1 = a1 + 24548;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A364B8;
L_08A364B8:;
    a0 = D_08AE3918 - (14616);
    a1 = ((u32)(uintptr_t)func_08A36034) - (24628);
    a0 = a0 + 14616;
    a1 = a1 + 24628;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A364D4;
L_08A364D4:;
    a0 = D_08AE394C - (14668);
    a1 = ((u32)(uintptr_t)func_08A356D4) - (22228);
    a0 = a0 + 14668;
    a1 = a1 + 22228;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A364F0;
L_08A364F0:;
    a0 = D_08AE3988 - (14728);
    a1 = ((u32)(uintptr_t)func_08A357A0) - (22432);
    a0 = a0 + 14728;
    a1 = a1 + 22432;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3650C;
L_08A3650C:;
    a0 = D_08AE39C8 - (14792);
    a1 = ((u32)(uintptr_t)func_08A3619C) - (24988);
    a0 = a0 + 14792;
    a1 = a1 + 24988;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A36528;
L_08A36528:;
    a0 = D_08AE3A10 - (14864);
    a1 = ((u32)(uintptr_t)func_08A3624C) - (25164);
    a0 = a0 + 14864;
    a1 = a1 + 25164;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A36544;
L_08A36544:;
    a0 = D_08AE3A60 - (14944);
    a1 = ((u32)(uintptr_t)func_08A35B00) - (23296);
    a0 = a0 + 14944;
    a1 = a1 + 23296;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A36560;
L_08A36560:;
    a0 = D_08AE3AAC - (15020);
    a1 = ((u32)(uintptr_t)func_08A362FC) - (25340);
    a0 = a0 + 15020;
    a1 = a1 + 25340;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3657C;
L_08A3657C:;
    a0 = D_08AE3AF0 - (15088);
    a1 = ((u32)(uintptr_t)func_08A359F4) - (23028);
    a0 = a0 + 15088;
    a1 = a1 + 23028;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A36598;
L_08A36598:;
    a0 = D_08AE3B3C - (15164);
    a1 = ((u32)(uintptr_t)func_08A35BB0) - (23472);
    a0 = a0 + 15164;
    a1 = a1 + 23472;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A365B4;
L_08A365B4:;
    a0 = D_08AE3B88 - (15240);
    a1 = ((u32)(uintptr_t)func_08A35D88) - (23944);
    a0 = a0 + 15240;
    a1 = a1 + 23944;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A365D0;
L_08A365D0:;
    a0 = D_08AE3BD4 - (15316);
    a1 = ((u32)(uintptr_t)func_08A35808) - (22536);
    a0 = a0 + 15316;
    a1 = a1 + 22536;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A365EC;
L_08A365EC:;
    a0 = D_08AE3C20 - (15392);
    a1 = ((u32)(uintptr_t)func_08A358CC) - (22732);
    a0 = a0 + 15392;
    a1 = a1 + 22732;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A36608;
L_08A36608:;
    v1 = D_08C2933C - (-27844);
    s2 = v1 - 27844;
    a0 = s2 + 0;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A3661C;
L_08A3661C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A366CC; }
    goto L_08A36624;
L_08A36624:;
    v0 = D_08AE3C6C - (15468);
    s0 = v0 + 15468;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36634;
L_08A36634:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A367F4; }
    goto L_08A3663C;
L_08A3663C:;
    v0 = D_08AE3CA4 - (15524);
    goto L_08A36640;
L_08A36640:;
    s0 = v0 + 15524;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3664C;
L_08A3664C:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A367C4; }
    goto L_08A36654;
L_08A36654:;
    v0 = D_08AE3CE0 - (15584);
    goto L_08A36658;
L_08A36658:;
    s0 = v0 + 15584;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36664;
L_08A36664:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A36794; }
    goto L_08A3666C;
L_08A3666C:;
    v0 = D_08AE3D18 - (15640);
    goto L_08A36670;
L_08A36670:;
    s0 = v0 + 15640;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3667C;
L_08A3667C:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A36764; }
    goto L_08A36684;
L_08A36684:;
    v0 = D_08AE3D54 - (15700);
    goto L_08A36688;
L_08A36688:;
    s0 = v0 + 15700;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36694;
L_08A36694:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A36734; }
    goto L_08A3669C;
L_08A3669C:;
    v0 = D_08AE3D90 - (15760);
    goto L_08A366A0;
L_08A366A0:;
    s0 = v0 + 15760;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A366AC;
L_08A366AC:;
    cnd_ = v0 == 0;
    a1 = D_08C2D7DC - (-10276);
    if (cnd_) { goto L_08A3670C; }
    goto L_08A366B4;
L_08A366B4:;
    v0 = D_08AE3DD4 - (15828);
    goto L_08A366B8;
L_08A366B8:;
    s0 = v0 + 15828;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A366C4;
L_08A366C4:;
    cnd_ = v0 == 0;
    a1 = D_08C2D7DD - (-10275);
    if (cnd_) { goto L_08A366E4; }
    goto L_08A366CC;
L_08A366CC:;
    goto L_08A366D0;
L_08A366D0:;
    sp = sp + 16;
    return;
L_08A366E4:;
    a1 = a1 - 10275;
    a0 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A366F8;
L_08A366F8:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A36704;
L_08A36704:;
    goto L_08A366D0;
L_08A3670C:;
    a1 = a1 - 10276;
    a0 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36720;
L_08A36720:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A3672C;
L_08A3672C:;
    v0 = D_08AE3DD4 - (15828);
    goto L_08A366B8;
L_08A36734:;
    a1 = s2 + 1496;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A36750;
L_08A36750:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A3675C;
L_08A3675C:;
    v0 = D_08AE3D90 - (15760);
    goto L_08A366A0;
L_08A36764:;
    a1 = s1 + 20;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A36780;
L_08A36780:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A3678C;
L_08A3678C:;
    v0 = D_08AE3D54 - (15700);
    goto L_08A36688;
L_08A36794:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A367B0;
L_08A367B0:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A367BC;
L_08A367BC:;
    v0 = D_08AE3D18 - (15640);
    goto L_08A36670;
L_08A367C4:;
    a1 = s1 + 32;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A367E0;
L_08A367E0:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A367EC;
L_08A367EC:;
    v0 = D_08AE3CE0 - (15584);
    goto L_08A36658;
L_08A367F4:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A36810;
L_08A36810:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A3681C;
L_08A3681C:;
    v0 = D_08AE3CA4 - (15524);
    goto L_08A36640;
}

/* 08A36824 */
float func_08A36824(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A36824:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = a2 + 0;
    a2 = sp + 16;
    s0 = s1 + 184;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3684C;
L_08A3684C:;
    a1 = 0xd3820000u;
    f0 = BITSF(LD32(s1+184));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    a0 = LD32(sp+16);
    f12 = f0;
    a1 = a1 | 0x599f;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36878;
L_08A36878:;
    a1 = 0xd3820000u;
    f12 = BITSF(LD32(sp+4));
    a0 = LD32(sp+16);
    a1 = a1 | 0x59a0;
    ST32(sp, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36890;
L_08A36890:;
    a1 = 0xd3820000u;
    f12 = BITSF(LD32(sp+8));
    a0 = LD32(sp+16);
    a1 = a1 | 0x59a1;
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A368A8;
L_08A368A8:;
    ST32(s0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp));
    ST32(s0+4, FBITS(f1));
    ST32(s1+184, FBITS(f0));
    sp = sp + 48;
    return f0;
}

/* 08A368D0 */
void func_08A368D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A368D0:;
    sp = sp - 32;
    s5 = a1 + 0;
    s4 = a0 + 0;
    s3 = a2 + 0;
    s2 = a3 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36904;
L_08A36904:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A369B4; }
    goto L_08A3690C;
L_08A3690C:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A36978; }
    goto L_08A36914;
L_08A36914:;
    a0 = v0 + 0;
    v0 = func_0880ED10(a0);
    goto L_08A3691C;
L_08A3691C:;
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A36934; }
    goto L_08A36924;
L_08A36924:;
    v1 = LD32(s0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36934;
L_08A36934:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s0 < 0x1u; goto L_08A369B8; }
    goto L_08A36940;
L_08A36940:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    v0 = s0 < 0x1u;
    if (cnd_) { goto L_08A369B8; }
    goto L_08A3694C;
L_08A3694C:;
    a0 = LD32(s0+12);
    cnd_ = (s32)a0 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3696C; }
    goto L_08A36958;
L_08A36958:;
    v0 = LD32(v1+68);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+72); goto L_08A36A70; }
    goto L_08A36968;
L_08A36968:;
    v0 = 0 + 0;
    goto L_08A3696C;
L_08A3696C:;
    cnd_ = v0 == s3;
    v0 = s0 < 0x1u;
    if (cnd_) { goto L_08A369B8; }
    goto L_08A36974;
L_08A36974:;
    v1 = LD32(s0);
    goto L_08A36978;
L_08A36978:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36984;
L_08A36984:;
    v1 = LD32(s0);
    s1 = v0 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3699C;
L_08A3699C:;
    cnd_ = s1 == 0;
    v0 = s0 < 0x1u;
    if (cnd_) { goto L_08A369B8; }
    goto L_08A369A4;
L_08A369A4:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A369B4;
L_08A369B4:;
    v0 = s0 < 0x1u;
    goto L_08A369B8;
L_08A369B8:;
    v1 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A369E8; }
    goto L_08A369C8;
L_08A369C8:;
    sp = sp + 32;
    return;
L_08A369E8:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A369F0;
L_08A369F0:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s1 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36A00;
L_08A36A00:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36A08;
L_08A36A08:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    f0 = func_089673C4(a0, a1, a2);
    goto L_08A36A1C;
L_08A36A1C:;
    v1 = LD32(s0);
    a1 = s4 + 0;
    a2 = s3 + 0;
    v0 = LD32(v1+12);
    a0 = s0 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36A38;
L_08A36A38:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A36A60; }
    goto L_08A36A40;
L_08A36A40:;
    cnd_ = s1 == 0;
    if (cnd_) {  goto L_08A369C8; }
    goto L_08A36A48;
L_08A36A48:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36A58;
L_08A36A58:;
    goto L_08A369C8;
L_08A36A60:;
    a1 = s5 + 0;
    func_0880D928(a0, a1);
    goto L_08A36A68;
L_08A36A68:;
    goto L_08A369C8;
L_08A36A70:;
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+52);
    goto L_08A3696C;
}

/* 08A36A88 */
u32 func_08A36A88(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A36A88:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_08A28C68();
    goto L_08A36A9C;
L_08A36A9C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08A36AA8;
L_08A36AA8:;
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36AC0;
L_08A36AC0:;
    a1 = 0xe9770000u;
    a0 = LD32(sp);
    a1 = a1 | 0x2a8d;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36AD4;
L_08A36AD4:;
    sp = sp + 32;
    return v0;
}

/* 08A36AE4 */
void func_08A36AE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A36AE4:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = func_08A28C68();
    goto L_08A36B00;
L_08A36B00:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08A36B0C;
L_08A36B0C:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36B24;
L_08A36B24:;
    a1 = 0xd0a00000u;
    a0 = LD32(sp);
    a1 = a1 | 0xea22;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36B38;
L_08A36B38:;
    v1 = v0 + 0;
    v0 = 0xc51c0000u;
    v0 = v0 | 0x7177;
    a1 = 0x36470000u;
    a0 = v0 < v1;
    cnd_ = v1 == v0;
    a1 = a1 | 0x70d;
    if (cnd_) { goto L_08A36B94; }
    goto L_08A36B54;
L_08A36B54:;
    cnd_ = a0 == 0;
    v0 = 0xec940000u;
    if (cnd_) { goto L_08A36B68; }
    goto L_08A36B5C;
L_08A36B5C:;
    v0 = v0 | 0x19d1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 0xf18c0000u; goto L_08A36B8C; }
    goto L_08A36B68;
L_08A36B68:;
    a2 = 0x10000u;
    a0 = s1 + 0;
    a2 = a2 | 0x1;
    f0 = func_0887FF88(a0, a1, a2, 0);
    goto L_08A36B78;
L_08A36B78:;
    sp = sp + 32;
    return;
L_08A36B8C:;
    a1 = a1 | 0x2565;
    goto L_08A36B68;
L_08A36B94:;
    a1 = 0x59af0000u;
    a1 = a1 | 0x9518;
    goto L_08A36B68;
}

/* 08A36BA0 */
float func_08A36BA0(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A36BA0:;
    sp = sp - 96;
    v0 = D_08C2933C - (-27844);
    s4 = v0 - 27844;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08A3715C; }
    goto L_08A36BD8;
L_08A36BD8:;
    a0 = 0xadae0000u;
    a0 = a0 | 0x5401;
    { rv_t r_ = func_0888B288(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36BE4;
L_08A36BE4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A370DC; }
    goto L_08A36BEC;
L_08A36BEC:;
    s1 = LD32(v0+160);
    cnd_ = s1 == 0;
    s6 = D_08B1C2C8 - (-15672);
    if (cnd_) { goto L_08A37248; }
    goto L_08A36BF8;
L_08A36BF8:;
    v0 = func_08A28C68();
    goto L_08A36C00;
L_08A36C00:;
    s0 = v0 + 0;
    v0 = 4;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A37160; }
    goto L_08A36C10;
L_08A36C10:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    v0 = func_08978120(a0, a1);
    goto L_08A36C1C;
L_08A36C1C:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    s3 = v0 + 0;
    v0 = func_0897808C(a0, a1);
    goto L_08A36C2C;
L_08A36C2C:;
    a1 = 0 + 0;
    a0 = s4 + 0;
    ST32(sp+32, v0);
    v0 = func_08977918(a0, a1);
    goto L_08A36C3C;
L_08A36C3C:;
    v1 = LD32(v0+12);
    v0 = D_08ADC630 - (-14800);
    v0 = v0 - 14800;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = func_08A36A88(a0);
    goto L_08A36C58;
L_08A36C58:;
    a1 = 0 + 0;
    a0 = s4 + 0;
    ST32(sp+36, v0);
    v0 = func_08977918(a0, a1);
    goto L_08A36C68;
L_08A36C68:;
    a0 = D_08ADC5E8 - (-14872);
    v1 = LD32(v0+4);
    v0 = a0 - 14872;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = func_08A36A88(a0);
    goto L_08A36C84;
L_08A36C84:;
    a1 = 0 + 0;
    a0 = s4 + 0;
    fp = v0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A36C94;
L_08A36C94:;
    v1 = LD32(v0+16);
    v0 = D_08ADC648 - (-14776);
    v0 = v0 - 14776;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = func_08A36A88(a0);
    goto L_08A36CB0;
L_08A36CB0:;
    a0 = s4 + 0;
    a1 = 0 + 0;
    ST32(sp+40, v0);
    v0 = func_08977918(a0, a1);
    goto L_08A36CC0;
L_08A36CC0:;
    a0 = D_08ADC610 - (-14832);
    v1 = LD32(v0+8);
    v0 = a0 - 14832;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = func_08A36A88(a0);
    goto L_08A36CDC;
L_08A36CDC:;
    s5 = v0 + 0;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A36CF0; }
    goto L_08A36CEC;
L_08A36CEC:;
    v1 = LD32(v0+64);
    goto L_08A36CF0;
L_08A36CF0:;
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A36D2C; }
    goto L_08A36CF8;
L_08A36CF8:;
    a1 = s3 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36D04;
L_08A36D04:;
    v0 = LD32(s1+256);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = 0x203e0000u; goto L_08A36D1C; }
    goto L_08A36D10;
L_08A36D10:;
    a0 = s1 + 0;
    { rv_t r_ = func_0880B598(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36D18;
L_08A36D18:;
    a2 = 0x203e0000u;
    goto L_08A36D1C;
L_08A36D1C:;
    a1 = s3 + 0;
    a0 = s2 + 0;
    a2 = a2 | 0x217d;
    f0 = func_08A36824(a0, a1, a2);
    goto L_08A36D2C;
L_08A36D2C:;
    v0 = LD32(s1+256);
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A37238; }
    goto L_08A36D38;
L_08A36D38:;
    s3 = s4 + 1312;
    a0 = s3 + 0;
    s6 = D_08B1C2C8 - (-15672);
    v0 = func_0897843C(a0, a1);
    goto L_08A36D48;
L_08A36D48:;
    v1 = LD32(s6-15672);
    cnd_ = v0 == v1;
    s7 = D_08B1C2CC - (-15668);
    if (cnd_) { goto L_08A37218; }
    goto L_08A36D54;
L_08A36D54:;
    a0 = s3 + 0;
    goto L_08A36D58;
L_08A36D58:;
    a1 = s0 + 0;
    v0 = func_0897843C(a0, a1);
    goto L_08A36D60;
L_08A36D60:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    ST32(s6-15672, v0);
    v0 = func_0897848C(a0, a1);
    goto L_08A36D70;
L_08A36D70:;
    v1 = LD32(s1+256);
    cnd_ = v1 == 0;
    ST32(s7-15668, v0);
    if (cnd_) { goto L_08A36D84; }
    goto L_08A36D7C;
L_08A36D7C:;
    a0 = s1 + 0;
    { rv_t r_ = func_0880B598(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A36D84;
L_08A36D84:;
    a0 = LD32(s1+16);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3700C; }
    goto L_08A36D90;
L_08A36D90:;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A36D98;
L_08A36D98:;
    a2 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    v0 = D_08B1C2C8 - (-15672);
    if (cnd_) { goto L_08A3700C; }
    goto L_08A36DA8;
L_08A36DA8:;
    a0 = LD32(v0-15672);
    v1 = D_08AEFBA4 - (-1116);
    f1 = BITSF(LD32(v1-1116));
    v0 = a0 & 0xff;
    a0 = a0 >> 8;
    f4 = BITSF(v0);
    v0 = a0 & 0xff;
    a0 = a0 >> 8;
    f5 = BITSF(v0);
    v0 = (a0 >> 8) & 0xff;
    f0 = BITSF(v0);
    v0 = D_08B1C2CC - (-15668);
    v1 = LD32(v0-15668);
    f10 = (float)(s32)FBITS(f0);
    a3 = D_08AEFBA8 - (-1112);
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    f7 = BITSF(v0);
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    f8 = BITSF(v0);
    f10 = f10 * f1;
    v0 = (v1 >> 8) & 0xff;
    a0 = a0 & 0xff;
    v1 = v1 & 0xff;
    f3 = BITSF(LD32(a3-1112));
    f0 = BITSF(a0);
    f9 = BITSF(v1);
    f11 = BITSF(v0);
    f12 = f10 * f3;
    f2 = (float)(s32)FBITS(f4);
    f3 = (float)(s32)FBITS(f5);
    f4 = (float)(s32)FBITS(f0);
    f5 = (float)(s32)FBITS(f7);
    f6 = (float)(s32)FBITS(f8);
    f7 = (float)(s32)FBITS(f9);
    f8 = (float)(s32)FBITS(f11);
    f0 = BITSF(0);
    f2 = f2 * f1;
    f3 = f3 * f1;
    f8 = f8 * f1;
    f4 = f4 * f1;
    f5 = f5 * f1;
    f6 = f6 * f1;
    f7 = f7 * f1;
    fcc = FCMP(f0, f12, 12);
    ST32(sp+8, FBITS(f2));
    v1 = sp + 0;
    ST32(sp+4, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+20, FBITS(f6));
    ST32(sp+16, FBITS(f7));
    ST32(sp+28, FBITS(f8));
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f10));
    if (cnd_) { goto L_08A37208; }
    goto L_08A36E88;
L_08A36E88:;
    t0 = D_08AEFBAC - (-1108);
    f0 = BITSF(LD32(t0-1108));
    f0 = f12 + f0;
    goto L_08A36E94;
L_08A36E94:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a3-1112));
    a0 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08A371FC; }
    goto L_08A36EBC;
L_08A36EBC:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f2 + f0;
    goto L_08A36EC4;
L_08A36EC4:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-1112));
    a0 = a0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08A371F0; }
    goto L_08A36EF0;
L_08A36EF0:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 + f0;
    goto L_08A36EF8;
L_08A36EF8:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-1112));
    a0 = a0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08A371E4; }
    goto L_08A36F24;
L_08A36F24:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 + f0;
    goto L_08A36F2C;
L_08A36F2C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(sp+28));
    v1 = sp + 16;
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-1112));
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 + v0;
    if (cnd_) { goto L_08A371D8; }
    goto L_08A36F58;
L_08A36F58:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 + f0;
    goto L_08A36F60;
L_08A36F60:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a3-1112));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08A371CC; }
    goto L_08A36F88;
L_08A36F88:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f2 + f0;
    goto L_08A36F90;
L_08A36F90:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-1112));
    a1 = a1 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08A371C0; }
    goto L_08A36FBC;
L_08A36FBC:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 + f0;
    goto L_08A36FC4;
L_08A36FC4:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-1112));
    a1 = a1 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08A371B4; }
    goto L_08A36FF0;
L_08A36FF0:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 + f0;
    goto L_08A36FF8;
L_08A36FF8:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    a1 = a1 + v0;
    { rv_t r_ = func_08A6A46C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37008;
L_08A37008:;
    s0 = v0 + 0;
    goto L_08A3700C;
L_08A3700C:;
    v0 = ((u32)(uintptr_t)func_08AB122C) - (4652);
    v0 = v0 + 4652;
    ST32(s1+256, s0);
    ST32(s1+260, v0);
    a0 = s4 + 0;
    goto L_08A37020;
L_08A37020:;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A37028;
L_08A37028:;
    v1 = LD32(v0+4);
    a0 = D_08ADC5E8 - (-14872);
    s0 = a0 - 14872;
    v1 = v1 << 2;
    v1 = v1 + s0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A3719C; }
    goto L_08A37048;
L_08A37048:;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A37050;
L_08A37050:;
    v1 = LD32(v0+8);
    a0 = D_08ADC610 - (-14832);
    v0 = a0 - 14832;
    v1 = v1 << 2;
    v1 = v1 + v0;
    goto L_08A37064;
L_08A37064:;
    a1 = LD32(v1);
    a0 = s2 + 0;
    if (fp != 0) s5 = fp;
    func_08A36AE4(a0, a1);
    goto L_08A37074;
L_08A37074:;
    a3 = LD32(sp+32);
    a1 = 0x300000u;
    a1 = a1 | 0xcde0;
    a2 = a1 + 0;
    a0 = s1 + 0;
    func_08A368D0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3708C;
L_08A3708C:;
    a1 = 0xd0cd0000u;
    a2 = 0x10000u;
    a3 = s5 + 0;
    a1 = a1 | 0xc21c;
    a2 = a2 | 0x9140;
    a0 = s1 + 0;
    func_08A368D0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A370A8;
L_08A370A8:;
    a3 = LD32(sp+36);
    a1 = 0x13e40000u;
    a2 = 0x2e0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x33e5;
    a2 = a2 | 0x150b;
    func_08A368D0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A370C4;
L_08A370C4:;
    a1 = 0x7e770000u;
    a3 = LD32(sp+40);
    a1 = a1 | 0x9b80;
    a0 = s1 + 0;
    a2 = a1 + 0;
    func_08A368D0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A370DC;
L_08A370DC:;
    a0 = 0x2c120000u;
    a0 = a0 | 0xf010;
    { rv_t r_ = func_0888B288(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A370E8;
L_08A370E8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A3715C; }
    goto L_08A370F0;
L_08A370F0:;
    a1 = 0 + 0;
    a0 = s4 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A370FC;
L_08A370FC:;
    v1 = LD32(v0+8);
    v0 = D_08ADC610 - (-14832);
    s0 = v0 - 14832;
    v1 = v1 << 2;
    v1 = v1 + s0;
    a0 = LD32(v1);
    v0 = func_08A36A88(a0);
    goto L_08A37118;
L_08A37118:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    func_0887FF20(a0, a1);
    goto L_08A37124;
L_08A37124:;
    v0 = LD32(s2+160);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3718C; }
    goto L_08A37130;
L_08A37130:;
    a0 = s4 + 0;
    goto L_08A37134;
L_08A37134:;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A3713C;
L_08A3713C:;
    v1 = LD32(v0+8);
    a2 = 0xd0cd0000u;
    a0 = s2 + 0;
    v1 = v1 << 2;
    v1 = v1 + s0;
    a1 = LD32(v1);
    a2 = a2 | 0xc21c;
    f0 = func_08A36824(a0, a1, a2);
    goto L_08A3715C;
L_08A3715C:;
    goto L_08A37160;
L_08A37160:;
    sp = sp + 96;
    return f0;
L_08A3718C:;
    a0 = s2 + 0;
    f0 = func_0887F434(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A37194;
L_08A37194:;
    a0 = s4 + 0;
    goto L_08A37134;
L_08A3719C:;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A371A4;
L_08A371A4:;
    v1 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + s0;
    goto L_08A37064;
L_08A371B4:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 - f0;
    goto L_08A36FF8;
L_08A371C0:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 - f0;
    goto L_08A36FC4;
L_08A371CC:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f2 - f0;
    goto L_08A36F90;
L_08A371D8:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 - f0;
    goto L_08A36F60;
L_08A371E4:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 - f0;
    goto L_08A36F2C;
L_08A371F0:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f1 - f0;
    goto L_08A36EF8;
L_08A371FC:;
    f0 = BITSF(LD32(t0-1108));
    f0 = f2 - f0;
    goto L_08A36EC4;
L_08A37208:;
    t0 = D_08AEFBAC - (-1108);
    f0 = BITSF(LD32(t0-1108));
    f0 = f12 - f0;
    goto L_08A36E94;
L_08A37218:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_0897848C(a0, a1);
    goto L_08A37224;
L_08A37224:;
    v1 = LD32(s7-15668);
    cnd_ = v0 != v1;
    if (cnd_) { a0 = s3 + 0; goto L_08A36D58; }
    goto L_08A37230;
L_08A37230:;
    a0 = s4 + 0;
    goto L_08A37020;
L_08A37238:;
    s6 = D_08B1C2C8 - (-15672);
    s7 = D_08B1C2CC - (-15668);
    s3 = s4 + 1312;
    goto L_08A36D54;
L_08A37248:;
    s7 = D_08B1C2CC - (-15668);
    a1 = LD32(s6-15672);
    a2 = LD32(s7-15668);
    a0 = v0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_0887FBB0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37260;
L_08A37260:;
    a0 = s2 + 0;
    f0 = func_0887F434(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A37268;
L_08A37268:;
    s1 = LD32(s2+160);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A37160; }
    goto L_08A37274;
L_08A37274:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A37284; }
    goto L_08A37280;
L_08A37280:;
    a1 = LD32(v0+64);
    goto L_08A37284;
L_08A37284:;
    a2 = 0x203e0000u;
    a0 = s2 + 0;
    a2 = a2 | 0x217d;
    f0 = func_08A36824(a0, a1, a2);
    goto L_08A37294;
L_08A37294:;
    goto L_08A36BF8;
}

/* 08A3729C */
u32 func_08A3729C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3729C:;
    sp = sp - 16;
    v0 = D_08C2933C - (-27844);
    s0 = v0 - 27844;
    v0 = func_08A28C68();
    goto L_08A372B4;
L_08A372B4:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A372FC; }
    goto L_08A372C4;
L_08A372C4:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = s0 + 1472; goto L_08A372E0; }
    goto L_08A372CC;
L_08A372CC:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A372F4; }
    goto L_08A372D8;
L_08A372D8:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s0 + 1460; goto L_08A372E0; }
    goto L_08A372E0;
L_08A372E0:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08A372F4:;
    a0 = s0 + 1448;
    goto L_08A372E0;
L_08A372FC:;
    a0 = s0 + 1484;
    goto L_08A372E0;
}

/* 08A37304 */
void func_08A37304(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A37304:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v1 = D_08C2D7E0 - (-10272);
    a3 = v1 - 10272;
    t0 = v0 + 1488;
    a2 = v0 + 1312;
    goto L_08A3731C;
L_08A3731C:;
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
    if (cnd_) { goto L_08A3731C; }
    goto L_08A37348;
L_08A37348:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    return;
}

/* 08A37364 */
void func_08A37364(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A37364:;
    sp = sp - 32;
    v0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A37424; }
    goto L_08A37384;
L_08A37384:;
    a0 = v0 + 0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3738C;
L_08A3738C:;
    s1 = v0 + 0;
    s2 = 0 + 0;
    cnd_ = v0 == 0;
    s3 = 32;
    if (cnd_) { goto L_08A37408; }
    goto L_08A3739C;
L_08A3739C:;
    v1 = LD32(s1);
    goto L_08A373A0;
L_08A373A0:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A373AC;
L_08A373AC:;
    v0 = s2 < v0;
    a1 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A37408; }
    goto L_08A373C0;
L_08A373C0:;
    v1 = LD32(s1);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A373D0;
L_08A373D0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3739C; }
    goto L_08A373DC;
L_08A373DC:;
    v0 = func_08888FE0(a0);
    goto L_08A373E4;
L_08A373E4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A373A0; }
    goto L_08A373EC;
L_08A373EC:;
    v0 = LD32(s0+156);
    cnd_ = v0 != s3;
    if (cnd_) { v1 = LD32(s1); goto L_08A373A0; }
    goto L_08A373F8;
L_08A373F8:;
    a0 = LD32(s0+144);
    func_08A275D0(a0);
    goto L_08A37400;
L_08A37400:;
    v1 = LD32(s1);
    goto L_08A373A0;
L_08A37408:;
    sp = sp + 32;
    return;
L_08A37424:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3742C;
L_08A3742C:;
    goto L_08A37384;
}

/* 08A37434 */
rv_t func_08A37434(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A37434:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2D7AC - (-10324);
    t1 = D_08C2D7BC - (-10308);
    t2 = D_08C2D7CC - (-10292);
    a1 = a1 & a0;
    v1 = t0 - 10324;
    a2 = t1 - 10308;
    cnd_ = a1 == 0;
    a3 = t2 - 10292;
    if (cnd_) { goto L_08A374EC; }
    goto L_08A37464;
L_08A37464:;
    v0 = D_08AEFBB0 - (-1104);
    f4 = BITSF(LD32(v0-1104));
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
    ST32(t0-10324, FBITS(f2));
    ST32(t1-10308, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-10292, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A374EC;
L_08A374EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A374F4 */
rv_t func_08A374F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A374F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A37434(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37508;
L_08A37508:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A37514 */
void func_08A37514(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A37514:;
    ST8(a0+104, 0);
    sp = sp - 16;
    a2 = 176;
    ST8(a0+105, 0);
    a1 = 0 + 0;
    s2 = a0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A37540;
L_08A37540:;
    a0 = 156;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37548;
L_08A37548:;
    s1 = v0 + 4;
    s0 = v0 + 0;
    v0 = 2;
    ST32(s1-4, v0);
    a0 = s1 + 0;
    s0 = s0 + 80;
    func_08A3BD08(a0);
    goto L_08A37564;
L_08A37564:;
    a0 = s0 + 0;
    func_08A3BD08(a0);
    goto L_08A3756C;
L_08A3756C:;
    ST32(s2, s1);
    a0 = 192;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37578;
L_08A37578:;
    ST32(s2+4, v0);
    a0 = 48;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37584;
L_08A37584:;
    ST32(s2+8, v0);
    a0 = 1328;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37590;
L_08A37590:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A44944(a0, a1);
    goto L_08A375A0;
L_08A375A0:;
    ST32(s2+68, s0);
    a1 = 0x4f000000u;
    a0 = 89;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A375B4;
L_08A375B4:;
    s0 = D_08AE3F34 - (16180);
    a0 = LD32(s2);
    s0 = s0 + 16180;
    t0 = v0 + 0;
    a2 = 21;
    a3 = 1;
    a1 = s0 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A375D4;
L_08A375D4:;
    a0 = 109;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A375E0;
L_08A375E0:;
    a0 = LD32(s2);
    a1 = s0 + 0;
    t0 = v0 + 0;
    a2 = 21;
    a3 = 1;
    a0 = a0 + 76;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A375FC;
L_08A375FC:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A376E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37604;
L_08A37604:;
    v0 = 1;
    ST8(s2+64, v0);
    sp = sp + 16;
    return;
}

/* 08A37624 */
void func_08A37624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A37624:;
    sp = sp - 16;
    s0 = LD32(a0+68);
    cnd_ = s0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A376CC; }
    goto L_08A37640;
L_08A37640:;
    a0 = LD32(s1);
    goto L_08A37644;
L_08A37644:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08A37684; }
    goto L_08A3764C;
L_08A3764C:;
    v0 = LD32(a0-4);
    v1 = 76;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08A37660;
L_08A37660:;
    cnd_ = a0 == s0;
    s0 = s0 - 76;
    if (cnd_) { goto L_08A37678; }
    goto L_08A37668;
L_08A37668:;
    a0 = s0 + 0;
    func_08A3BDB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A37670;
L_08A37670:;
    a0 = LD32(s1);
    goto L_08A37660;
L_08A37678:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A37680;
L_08A37680:;
    a0 = LD32(s1+4);
    goto L_08A37684;
L_08A37684:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A376BC; }
    goto L_08A3768C;
L_08A3768C:;
    a0 = LD32(s1+8);
    goto L_08A37690;
L_08A37690:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A376AC; }
    goto L_08A37698;
L_08A37698:;
    goto L_08A3769C;
L_08A3769C:;
    sp = sp + 16;
    return;
L_08A376AC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A376B4;
L_08A376B4:;
    goto L_08A3769C;
L_08A376BC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A376C4;
L_08A376C4:;
    a0 = LD32(s1+8);
    goto L_08A37690;
L_08A376CC:;
    a0 = s0 + 0;
    func_08A44974(a0);
    goto L_08A376D4;
L_08A376D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A376DC;
L_08A376DC:;
    a0 = LD32(s1);
    goto L_08A37644;
}

/* 08A376E4 */
rv_t func_08A376E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A376E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A37740(a0);
    goto L_08A376F8;
L_08A376F8:;
    a0 = s0 + 0;
    func_08A37728(a0);
    goto L_08A37700;
L_08A37700:;
    a0 = s0 + 0;
    func_08A39114(a0);
    goto L_08A37708;
L_08A37708:;
    a0 = s0 + 0;
    func_08A3897C(a0);
    goto L_08A37710;
L_08A37710:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A3776C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37718;
L_08A37718:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A37728 */
void func_08A37728(u32 a0)
{
    u32 v0 = 0;
L_08A37728:;
    v0 = 9;
    ST32(a0+24, v0);
    ST32(a0+108, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    return;
}

/* 08A37740 */
void func_08A37740(u32 a0)
{
    u32 v0 = 0;
L_08A37740:;
    v0 = D_08C2D8CE - (-10034);
    ST8(a0+105, 0);
    ST8(a0+57, 0);
    ST8(a0+58, 0);
    ST8(a0+59, 0);
    ST8(a0+52, 0);
    ST8(a0+53, 0);
    ST8(a0+104, 0);
    ST32(a0+12, 0);
    ST8(v0-10034, 0);
    return;
}

/* 08A3776C */
rv_t func_08A3776C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3776C:;
    sp = sp - 16;
    a1 = 1;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    func_08A3BD2C(a0, a1, a2);
    goto L_08A3778C;
L_08A3778C:;
    a0 = LD32(s0);
    a1 = 1;
    a2 = 0 + 0;
    a0 = a0 + 76;
    func_08A3BD2C(a0, a1, a2);
    goto L_08A377A0;
L_08A377A0:;
    a0 = LD32(s0);
    a2 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08A3BDEC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A377B0;
L_08A377B0:;
    a0 = LD32(s0);
    a2 = s0 + 0;
    a1 = 1;
    a0 = a0 + 76;
    { rv_t r_ = func_08A3BDEC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A377C4;
L_08A377C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A377D4 */
void func_08A377D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_08A377D4:;
    sp = sp - 208;
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    s5 = a0 + 0;
    a1 = v0 + 40;
    t1 = 0 + 0;
    a3 = 2;
    a2 = sp + 0;
    t4 = LD32(a0+4);
    a0 = 0 + 0;
    v1 = t4 + 0;
    v0 = LD32(a1);
    goto L_08A3782C;
L_08A3782C:;
    ST32(v1+8, 0);
    a1 = a1 + 44;
    ST8(v1, 0);
    ST32(v1+4, a3);
    cnd_ = v0 == 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_08A37850; }
    goto L_08A37844;
L_08A37844:;
    ST32(a2, a0);
    t1 = t1 + 1;
    a2 = a2 + 4;
    goto L_08A37850;
L_08A37850:;
    a0 = a0 + 1;
    v0 = a0 < 0x10u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08A3782C; }
    goto L_08A37860;
L_08A37860:;
    s7 = D_08B25AC8 - (23240);
    t6 = LD32(s5+8);
    ST32(sp+64, 0);
    t0 = 0 + 0;
    a3 = sp + 64;
    a1 = LD32(s7+23240);
    t3 = s7 + 23240;
    t2 = 4;
    t5 = 1;
    a2 = t6 + 4;
    goto L_08A37888;
L_08A37888:;
    v1 = LD32(t3+4);
    a0 = (u32)((s32)a1 >> 16);
    v0 = a1 << 16;
    a1 = v0 + a0;
    a1 = a1 + v1;
    v0 = a1 >> 1;
    { u32 x_ = v0, y_ = t2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = v1 + a1;
    ST32(t3+4, v1);
    a0 = hi;
    v0 = a3 + a0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { t0 = t0 + 1; goto L_08A378E0; }
    goto L_08A378C0;
L_08A378C0:;
    v0 = a0 + 1;
    goto L_08A378C4;
L_08A378C4:;
    a0 = v0 & 0x3;
    v1 = a3 + a0;
    v0 = LD_U8(v1);
    cnd_ = v0 != 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_08A378C4; }
    goto L_08A378D8;
L_08A378D8:;
    t0 = t0 + 1;
    v0 = a3 + a0;
    goto L_08A378E0;
L_08A378E0:;
    v1 = t0 < 0x4u;
    ST32(a2, a0);
    a2 = a2 + 12;
    cnd_ = v1 != 0;
    ST8(v0, t5);
    if (cnd_) { goto L_08A37888; }
    goto L_08A378F4;
L_08A378F4:;
    ST8(sp+67, 0);
    v0 = D_08B25AC8 - (23240);
    a2 = a1 + 0;
    ST8(sp+66, 0);
    t3 = v0 + 23240;
    t0 = 0 + 0;
    ST8(sp+65, 0);
    t2 = 4;
    t5 = 1;
    ST8(sp+64, 0);
    ST32(s7+23240, a1);
    a1 = t6 + 8;
    goto L_08A37924;
L_08A37924:;
    v1 = LD32(t3+4);
    a0 = (u32)((s32)a2 >> 16);
    v0 = a2 << 16;
    a2 = v0 + a0;
    a2 = a2 + v1;
    v0 = a2 >> 1;
    { u32 x_ = v0, y_ = t2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = v1 + a2;
    ST32(t3+4, v1);
    a0 = hi;
    v0 = a3 + a0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { t0 = t0 + 1; goto L_08A3797C; }
    goto L_08A3795C;
L_08A3795C:;
    v0 = a0 + 1;
    goto L_08A37960;
L_08A37960:;
    a0 = v0 & 0x3;
    v1 = a3 + a0;
    v0 = LD_U8(v1);
    cnd_ = v0 != 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_08A37960; }
    goto L_08A37974;
L_08A37974:;
    t0 = t0 + 1;
    v0 = a3 + a0;
    goto L_08A3797C;
L_08A3797C:;
    v1 = t0 < 0x4u;
    ST32(a1, a0);
    a1 = a1 + 12;
    cnd_ = v1 != 0;
    ST8(v0, t5);
    if (cnd_) { goto L_08A37924; }
    goto L_08A37990;
L_08A37990:;
    a1 = s7 + 23240;
    a0 = LD32(a1+4);
    v1 = (u32)((s32)a2 >> 16);
    v0 = a2 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = t1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(s7+23240, v0);
    t0 = a1 + 0;
    a2 = v0 + 0;
    ST32(a1+4, a0);
    a3 = hi;
    goto L_08A379C8;
L_08A379C8:;
    v1 = (u32)((s32)a2 >> 16);
    v0 = a2 << 16;
    a2 = v0 + v1;
    a2 = a2 + a0;
    v0 = a2 >> 1;
    { u32 x_ = v0, y_ = t1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    cnd_ = a3 == v1;
    a0 = a0 + a2;
    if (cnd_) { goto L_08A379C8; }
    goto L_08A379EC;
L_08A379EC:;
    v0 = a3 << 2;
    v0 = v0 + sp;
    v0 = LD32(v0);
    v1 = v1 << 2;
    v1 = v1 + sp;
    v1 = LD32(v1);
    ST32(sp+144, v0);
    v0 = 1;
    fp = 0 + 0;
    ST32(sp+148, v1);
    v1 = LD32(sp+144);
    ST32(t0+4, a0);
    s0 = v1 << 1;
    v1 = LD32(sp+148);
    ST32(s7+23240, a2);
    s1 = v1 << 1;
    v1 = LD32(sp+144);
    ST32(sp+152, 0);
    s0 = s0 + v1;
    v1 = LD32(sp+148);
    s0 = s0 << 2;
    s0 = s0 + t4;
    s1 = s1 + v1;
    s1 = s1 << 2;
    v1 = s1 + t4;
    ST8(s0, v0);
    ST8(v1, v0);
    v0 = 1;
    ST32(s0+4, 0);
    ST32(v1+4, v0);
    v0 = func_08A43638();
    goto L_08A37A68;
L_08A37A68:;
    ST32(s0+8, v0);
    v0 = LD32(s5+4);
    s1 = s1 + v0;
    v0 = func_08A43638();
    goto L_08A37A78;
L_08A37A78:;
    ST32(s1+8, v0);
    goto L_08A37A7C;
L_08A37A7C:;
    v1 = LD32(sp+144);
    v0 = LD32(sp+148);
    t4 = LD32(s5+4);
    s0 = 0 + 0;
    if (fp != 0) v0 = v1;
    v1 = 44;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B1C34C - (-15540);
    v1 = v1 - 15540;
    a2 = 0 + 0;
    a0 = t4 + 4;
    v0 = lo;
    t1 = v0 + v1;
    t0 = 2;
    a1 = v1 + 4;
    a3 = sp + 80;
    goto L_08A37ABC;
L_08A37ABC:;
    v0 = LD32(a0);
    cnd_ = v0 == t0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08A37C84; }
    goto L_08A37AC8;
L_08A37AC8:;
    a2 = a2 + 1;
    goto L_08A37ACC;
L_08A37ACC:;
    v0 = a2 < 0x10u;
    cnd_ = v0 != 0;
    a1 = a1 + 44;
    if (cnd_) { goto L_08A37ABC; }
    goto L_08A37AD8;
L_08A37AD8:;
    v0 = func_08A435F4();
    goto L_08A37AE0;
L_08A37AE0:;
    cnd_ = v0 == 0;
    s3 = v0 - 1;
    if (cnd_) { goto L_08A37B90; }
    goto L_08A37AE8;
L_08A37AE8:;
    cnd_ = s0 == 0;
    v0 = D_08B25AC8 - (23240);
    if (cnd_) { goto L_08A37B90; }
    goto L_08A37AF0;
L_08A37AF0:;
    s6 = v0 + 23240;
    v1 = LD32(s7+23240);
    goto L_08A37AF8;
L_08A37AF8:;
    a0 = LD32(s6+4);
    a1 = LD32(s5+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v1;
    ST32(s7+23240, v1);
    s2 = s0 - 1;
    ST32(s6+4, a0);
    s1 = hi;
    v0 = s1 << 2;
    s4 = v0 + sp;
    v1 = LD32(s4+80);
    s0 = v1 << 1;
    s0 = s0 + v1;
    s0 = s0 << 2;
    s0 = s0 + a1;
    ST32(s0+4, fp);
    v0 = func_08A4367C();
    goto L_08A37B50;
L_08A37B50:;
    v1 = s1 < s2;
    cnd_ = v1 == 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A37B78; }
    goto L_08A37B5C;
L_08A37B5C:;
    a0 = s4 + 0;
    goto L_08A37B60;
L_08A37B60:;
    v0 = LD32(a0+84);
    s1 = s1 + 1;
    v1 = s1 < s2;
    ST32(a0+80, v0);
    cnd_ = v1 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A37B60; }
    goto L_08A37B78;
L_08A37B78:;
    v0 = s3 + 0;
    s0 = s2 + 0;
    cnd_ = v0 == 0;
    s3 = s3 - 1;
    if (cnd_) { goto L_08A37B90; }
    goto L_08A37B88;
L_08A37B88:;
    cnd_ = s2 != 0;
    v1 = LD32(s7+23240);
    if (cnd_) { goto L_08A37AF8; }
    goto L_08A37B90;
L_08A37B90:;
    v0 = LD32(sp+152);
    v0 = v0 + 1;
    ST32(sp+152, v0);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    fp = 1;
    if (cnd_) { goto L_08A37A7C; }
    goto L_08A37BA8;
L_08A37BA8:;
    s1 = 0 + 0;
    s0 = 0 + 0;
    goto L_08A37BB0;
L_08A37BB0:;
    a0 = LD32(s5);
    a1 = 0 + 0;
    a2 = 0 + 0;
    a0 = a0 + s0;
    s1 = s1 + 1;
    func_08A3BD2C(a0, a1, a2);
    goto L_08A37BC8;
L_08A37BC8:;
    v0 = s1 < 0x2u;
    cnd_ = v0 != 0;
    s0 = s0 + 76;
    if (cnd_) { goto L_08A37BB0; }
    goto L_08A37BD4;
L_08A37BD4:;
    v0 = D_08B1C2EC - (-15636);
    v1 = LD32(v0-15636);
    v0 = 2;
    cnd_ = v1 == v0;
    a1 = 2;
    if (cnd_) { goto L_08A37C38; }
    goto L_08A37BE8;
L_08A37BE8:;
    v0 = 3;
    cnd_ = v1 == v0;
    a1 = 3;
    if (cnd_) { goto L_08A37C38; }
    goto L_08A37BF4;
L_08A37BF4:;
    v0 = LD32(s7+23240);
    a3 = s7 + 23240;
    a1 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = 2;
    a0 = v0 >> 1;
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v0;
    ST32(s7+23240, v0);
    ST32(a3+4, a1);
    a1 = v1 + 0;
    v1 = 3;
    a2 = hi;
    if (a2 == 0) a1 = v1;
    goto L_08A37C38;
L_08A37C38:;
    s0 = LD32(s5);
    a0 = a1 + 0;
    ST32(s0+44, a1);
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A37C48;
L_08A37C48:;
    ST32(s0+120, v0);
    a0 = s5 + 0;
    func_08A3B590(a0);
    goto L_08A37C54;
L_08A37C54:;
    sp = sp + 208;
    return;
L_08A37C84:;
    v1 = LD32(a1);
    v0 = LD32(t1+4);
    cnd_ = v1 == v0;
    if (cnd_) { a2 = a2 + 1; goto L_08A37ACC; }
    goto L_08A37C94;
L_08A37C94:;
    ST32(a3, a2);
    s0 = s0 + 1;
    a3 = a3 + 4;
    goto L_08A37AC8;
}

/* 08A37CA4 */
void func_08A37CA4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A37CA4:;
    sp = sp - 32;
    v0 = D_08AE3F80 - (16256);
    v1 = v0 + 16256;
    s1 = 0 + 0;
    s0 = sp + 0;
    a0 = LD32(v0+16256);
    a1 = LD32(v1+4);
    ST32(sp, a0);
    ST32(sp+4, a1);
    a0 = LD32(s0);
    goto L_08A37CD8;
L_08A37CD8:;
    s1 = s1 + 1;
    s0 = s0 + 4;
    { rv_t r_ = func_08827B7C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A37CE4;
L_08A37CE4:;
    v1 = s1 < 0x2u;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_08A37CD8; }
    goto L_08A37CF0;
L_08A37CF0:;
    sp = sp + 32;
    return;
}

/* 08A37D04 */
void func_08A37D04(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_08A37D04:;
    a2 = LD32(a1);
    t1 = a0 + 0;
    v0 = 1;
    a0 = LD32(a2+44);
    ST8(t1, v0);
    t3 = a1 + 0;
    a3 = 0 + 0;
    ST32(t1+8, a0);
    v1 = LD32(a2+48);
    a1 = LD32(a1+16);
    ST32(t1+20, v1);
    v0 = LD32(a2+124);
    ST32(t1+4, a1);
    ST32(t1+44, v0);
    v1 = LD32(a2+64);
    ST32(t1+12, v1);
    v0 = LD32(a2+140);
    ST32(t1+36, v0);
    v1 = LD32(a2+68);
    ST32(t1+16, v1);
    v0 = LD32(a2+144);
    ST32(t1+40, v0);
    goto L_08A37D5C;
L_08A37D5C:;
    v1 = a3 << 2;
    a1 = v1 + a2;
    v0 = LD32(a1+52);
    v1 = v1 + t1;
    a3 = a3 + 1;
    ST32(v1+24, v0);
    a0 = a3 < 0x3u;
    v0 = LD32(a1+128);
    cnd_ = a0 != 0;
    ST32(v1+48, v0);
    if (cnd_) { goto L_08A37D5C; }
    goto L_08A37D84;
L_08A37D84:;
    t2 = LD32(t3+8);
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A37D90;
L_08A37D90:;
    a0 = a3 + t2;
    v1 = LD32(a0);
    v0 = a3 + t1;
    a1 = v0 + 252;
    ST32(v0+252, v1);
    t0 = t0 + 1;
    a2 = t0 < 0x4u;
    v1 = LD32(a0+4);
    a3 = a3 + 12;
    ST32(a1+4, v1);
    v0 = LD32(a0+8);
    cnd_ = a2 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A37D90; }
    goto L_08A37DC4;
L_08A37DC4:;
    t2 = LD32(t3+4);
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A37DD0;
L_08A37DD0:;
    a0 = a3 + t2;
    v1 = LD32(a0);
    v0 = a3 + t1;
    a1 = v0 + 60;
    ST32(v0+60, v1);
    t0 = t0 + 1;
    a2 = t0 < 0x10u;
    v1 = LD32(a0+4);
    a3 = a3 + 12;
    ST32(a1+4, v1);
    v0 = LD32(a0+8);
    cnd_ = a2 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A37DD0; }
    goto L_08A37E04;
L_08A37E04:;
    v0 = LD_U8(t3+126);
    a0 = LD32(t3+112);
    a2 = LD32(t3+156);
    ST8(t1+300, v0);
    v0 = t1 + 0;
    v1 = LD_U8(t3+125);
    ST32(t1+312, a0);
    ST8(t1+301, v1);
    a0 = LD_U8(t3+128);
    a1 = LD32(t3+60);
    ST32(t1+308, a2);
    ST8(t1+302, a0);
    v1 = LD_U8(t3+127);
    ST32(t1+316, a1);
    ST8(t1+303, v1);
    a0 = LD32(t3+120);
    v1 = LD_U8(t3+172);
    ST32(t1+320, a0);
    ST8(t1+304, v1);
    return;
}

/* 08A37E54 */
u32 func_08A37E54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A37E54:;
    sp = sp - 16;
    v1 = 0 + 0;
    s2 = a0 + 0;
    v0 = LD_U8(a1);
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08A37E98; }
    goto L_08A37E7C;
L_08A37E7C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A37E98:;
    v1 = LD32(a1+4);
    s0 = LD32(a0);
    v0 = LD32(a1+8);
    ST32(a0+16, v1);
    ST32(s0+44, v0);
    v1 = LD32(a1+4);
    ST32(a0+88, 0);
    ST32(a0+20, v1);
    ST32(a0+108, 0);
    a0 = LD32(a1+8);
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A37EC4;
L_08A37EC4:;
    ST32(s0+120, v0);
    a2 = 0 + 0;
    a0 = LD32(s2);
    v0 = LD32(s1+20);
    ST32(a0+48, v0);
    v1 = LD32(s1+44);
    ST32(a0+124, v1);
    v0 = LD32(s1+12);
    ST32(a0+64, v0);
    v1 = LD32(s2);
    v0 = LD32(s1+36);
    ST32(v1+140, v0);
    v0 = LD32(s1+16);
    a0 = LD32(s2);
    ST32(a0+68, v0);
    v1 = LD32(s2);
    v0 = LD32(s1+40);
    ST32(v1+144, v0);
    a3 = LD32(s2);
    goto L_08A37F10;
L_08A37F10:;
    v1 = a2 << 2;
    a1 = v1 + s1;
    v0 = LD32(a1+24);
    v1 = v1 + a3;
    a2 = a2 + 1;
    ST32(v1+52, v0);
    a0 = a2 < 0x3u;
    v0 = LD32(a1+48);
    cnd_ = a0 != 0;
    ST32(v1+128, v0);
    if (cnd_) { goto L_08A37F10; }
    goto L_08A37F38;
L_08A37F38:;
    t1 = LD32(s2+8);
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A37F44;
L_08A37F44:;
    v1 = a3 + s1;
    v0 = LD32(v1+252);
    a1 = a3 + t1;
    v1 = v1 + 252;
    ST32(a1, v0);
    t0 = t0 + 1;
    a2 = t0 < 0x4u;
    a0 = LD32(v1+4);
    a3 = a3 + 12;
    ST32(a1+4, a0);
    v0 = LD32(v1+8);
    cnd_ = a2 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A37F44; }
    goto L_08A37F78;
L_08A37F78:;
    t1 = LD32(s2+4);
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A37F84;
L_08A37F84:;
    v1 = a3 + s1;
    v0 = LD32(v1+60);
    a1 = a3 + t1;
    v1 = v1 + 60;
    ST32(a1, v0);
    t0 = t0 + 1;
    a2 = t0 < 0x10u;
    a0 = LD32(v1+4);
    a3 = a3 + 12;
    ST32(a1+4, a0);
    v0 = LD32(v1+8);
    cnd_ = a2 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A37F84; }
    goto L_08A37FB8;
L_08A37FB8:;
    v0 = LD_U8(s1+300);
    v1 = LD32(s1+312);
    a2 = LD32(s1+308);
    ST8(s2+126, v0);
    a0 = s2 + 0;
    v0 = LD_U8(s1+301);
    ST32(s2+112, v1);
    ST8(s2+125, v0);
    v1 = LD_U8(s1+302);
    a1 = LD32(s1+316);
    ST32(s2+156, a2);
    ST8(s2+128, v1);
    v0 = LD_U8(s1+303);
    ST32(s2+60, a1);
    ST8(s2+127, v0);
    v1 = LD32(s1+320);
    v0 = LD_U8(s1+304);
    ST32(s2+120, v1);
    ST8(s2+172, v0);
    func_08A37740(a0);
    goto L_08A38008;
L_08A38008:;
    a0 = s2 + 0;
    func_08A3B590(a0);
    goto L_08A38010;
L_08A38010:;
    v1 = 1;
    goto L_08A37E7C;
}

/* 08A38018 */
void func_08A38018(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38018:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+68);
    func_08A44990(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A38030;
L_08A38030:;
    v1 = LD32(s0+68);
    v0 = 1;
    a0 = s0 + 0;
    ST8(v1+1184, v0);
    func_08A37CA4(0, 0, 0);
    goto L_08A38044;
L_08A38044:;
    a0 = 1;
    func_08A4DCA0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3804C;
L_08A3804C:;
    sp = sp + 16;
    return;
}

/* 08A3805C */
void func_08A3805C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3805C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 1;
    func_08A4DCA0(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A38074;
L_08A38074:;
    a0 = LD32(s0+68);
    func_08A44AB0(a0);
    goto L_08A3807C;
L_08A3807C:;
    v1 = LD32(s0+68);
    v0 = 1;
    ST8(v1+1184, v0);
    sp = sp + 16;
    return;
}

/* 08A38098 */
void func_08A38098(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38098:;
    sp = sp - 16;
    v0 = LD_U8(a0+59);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A3812C; }
    goto L_08A380B0;
L_08A380B0:;
    v0 = LD_U8(a0+64);
    a1 = D_08C2933C - (-27844);
    a1 = a1 - 27844;
    cnd_ = v0 == 0;
    a1 = a1 + 1736;
    if (cnd_) { goto L_08A380E0; }
    goto L_08A380C4;
L_08A380C4:;
    { rv_t r_ = func_08A376E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A380CC;
L_08A380CC:;
    ST8(s0+64, 0);
    goto L_08A380D0;
L_08A380D0:;
    goto L_08A380D4;
L_08A380D4:;
    sp = sp + 16;
    return;
L_08A380E0:;
    v0 = func_08A37E54(a0, a1);
    goto L_08A380E8;
L_08A380E8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3811C; }
    goto L_08A380F0;
L_08A380F0:;
    v1 = LD32(s0+16);
    v0 = 9;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3810C; }
    goto L_08A38100;
L_08A38100:;
    v0 = LD32(s0+68);
    goto L_08A38104;
L_08A38104:;
    ST8(v0+1184, 0);
    goto L_08A380D0;
L_08A3810C:;
    { rv_t r_ = func_08A376E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38114;
L_08A38114:;
    v0 = LD32(s0+68);
    goto L_08A38104;
L_08A3811C:;
    { rv_t r_ = func_08A376E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38124;
L_08A38124:;
    goto L_08A380D4;
L_08A3812C:;
    ST8(a0+59, 0);
    ST8(a0+58, 0);
    goto L_08A380D0;
}

/* 08A38138 */
void func_08A38138(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38138:;
    sp = sp - 16;
    v0 = LD_U8(a0+105);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A38170; }
    goto L_08A38150;
L_08A38150:;
    func_08A382B0(a0);
    goto L_08A38158;
L_08A38158:;
    func_08A4DB30();
    goto L_08A38160;
L_08A38160:;
    sp = sp + 16;
    return;
L_08A38170:;
    func_08A389D8(a0);
    goto L_08A38178;
L_08A38178:;
    a1 = LD32(s0+16);
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    v1 = a1 ^ 0x5;
    if (cnd_) { goto L_08A381B4; }
    goto L_08A38188;
L_08A38188:;
    v1 = D_08AE3F88 - (16264);
    v0 = a1 << 2;
    v1 = v1 + 16264;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A381A4u: goto L_08A381A4; case 0x08A381B0u: goto L_08A381B0; case 0x08A38230u: goto L_08A38230; case 0x08A38240u: goto L_08A38240; case 0x08A38250u: goto L_08A38250; case 0x08A38260u: goto L_08A38260; case 0x08A38270u: goto L_08A38270; case 0x08A38280u: goto L_08A38280; case 0x08A38290u: goto L_08A38290; case 0x08A382A0u: goto L_08A382A0; default: rs_break(0, 0x08a3819c); }
L_08A381A4:;
    a0 = s0 + 0;
    func_08A39164(a0);
    goto L_08A381AC;
L_08A381AC:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A381B0:;
    v1 = a1 ^ 0x5;
    goto L_08A381B4;
L_08A381B4:;
    v0 = a1 ^ 0x9;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD_U8(s0+51); goto L_08A381F0; }
    goto L_08A381CC;
L_08A381CC:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD_U8(s0+51); goto L_08A381F0; }
    goto L_08A381D8;
L_08A381D8:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD_U8(s0+51); goto L_08A381F0; }
    goto L_08A381E0;
L_08A381E0:;
    v0 = LD_U8(s0+55);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A38220; }
    goto L_08A381EC;
L_08A381EC:;
    v0 = LD_U8(s0+51);
    goto L_08A381F0;
L_08A381F0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A38208; }
    goto L_08A381F8;
L_08A381F8:;
    a0 = s0 + 0;
    func_08A39018(a0, a1);
    goto L_08A38200;
L_08A38200:;
    goto L_08A38158;
L_08A38208:;
    a1 = 2;
    func_08A3910C(a0, a1);
    goto L_08A38210;
L_08A38210:;
    v0 = LD32(s0+12);
    v0 = v0 < 0x1u;
    ST32(s0+12, v0);
    goto L_08A381F8;
L_08A38220:;
    a0 = s0 + 0;
    func_08A3B250(a0);
    goto L_08A38228;
L_08A38228:;
    v0 = LD_U8(s0+51);
    goto L_08A381F0;
L_08A38230:;
    a0 = s0 + 0;
    func_08A394D0(a0);
    goto L_08A38238;
L_08A38238:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A38240:;
    a0 = s0 + 0;
    func_08A39544(a0);
    goto L_08A38248;
L_08A38248:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A38250:;
    a0 = s0 + 0;
    func_08A39CE0(a0);
    goto L_08A38258;
L_08A38258:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A38260:;
    a0 = s0 + 0;
    func_08A3A3B8(a0);
    goto L_08A38268;
L_08A38268:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A38270:;
    a0 = s0 + 0;
    func_08A3A47C(a0);
    goto L_08A38278;
L_08A38278:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A38280:;
    a0 = s0 + 0;
    func_08A3AD24(a0);
    goto L_08A38288;
L_08A38288:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A38290:;
    a0 = s0 + 0;
    func_08A3ADA8(a0);
    goto L_08A38298;
L_08A38298:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
L_08A382A0:;
    a0 = s0 + 0;
    func_08A3B168(a0);
    goto L_08A382A8;
L_08A382A8:;
    a1 = LD32(s0+16);
    goto L_08A381B0;
}

/* 08A382B0 */
void func_08A382B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_08A382B0:;
    sp = sp - 352;
    s0 = a0 + 0;
    func_0883BFA8();
    goto L_08A382C8;
L_08A382C8:;
    v0 = D_08B1C300 - (-15616);
    a0 = LD32(v0-15616);
    v1 = 1;
    cnd_ = a0 == v1;
    v0 = (s32)a0 < 2;
    if (cnd_) { goto L_08A383DC; }
    goto L_08A382DC;
L_08A382DC:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A38398; }
    goto L_08A382E4;
L_08A382E4:;
    cnd_ = a0 == v0;
    v0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A38300; }
    goto L_08A382EC;
L_08A382EC:;
    goto L_08A382F0;
L_08A382F0:;
    sp = sp + 352;
    return;
L_08A38300:;
    s1 = v0 - 27844;
    a0 = sp + 0;
    a1 = s0 + 0;
    func_08A37D04(a0, a1);
    goto L_08A38310;
L_08A38310:;
    a0 = s1 + 1736;
    a1 = sp + 0;
    a2 = 324;
    v0 = func_088F86C8(a0, a1, a2);
    goto L_08A38320;
L_08A38320:;
    v1 = LD_U8(s1+6);
    v0 = 0 < v0;
    a1 = s1 + 0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3833C; }
    goto L_08A38334;
L_08A38334:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(a1+6, a0); goto L_08A38344; }
    goto L_08A3833C;
L_08A3833C:;
    a0 = 1;
    ST8(a1+6, a0);
    goto L_08A38344;
L_08A38344:;
    a2 = sp + 0;
    a3 = s1 + 1736;
    t0 = sp + 320;
    goto L_08A38350;
L_08A38350:;
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
    if (cnd_) { goto L_08A38350; }
    goto L_08A3837C;
L_08A3837C:;
    v0 = 1;
    v1 = LD32(a2);
    ST32(a3, v1);
    ST8(s0+57, v0);
    ST8(s0+105, 0);
    ST8(s0+58, v0);
    goto L_08A382EC;
L_08A38398:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A382F0; }
    goto L_08A383A0;
L_08A383A0:;
    v0 = LD_U8(s0+104);
    cnd_ = v0 != 0;
    ST8(s0+105, 0);
    if (cnd_) { goto L_08A383B4; }
    goto L_08A383AC;
L_08A383AC:;
    ST8(s0+57, 0);
    goto L_08A382F0;
L_08A383B4:;
    a0 = 0xecea0000u;
    a0 = a0 | 0x2eb3;
    { u64 r_ = func_0888AA60(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A383C0;
L_08A383C0:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+57, 0); goto L_08A382EC; }
    goto L_08A383C8;
L_08A383C8:;
    a0 = 0xecea0000u;
    a0 = a0 | 0x2eb3;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A383D4;
L_08A383D4:;
    ST8(s0+57, 0);
    goto L_08A382EC;
L_08A383DC:;
    ST8(s0+58, a0);
    ST8(s0+57, 0);
    ST8(s0+105, 0);
    goto L_08A382EC;
}

/* 08A383EC */
void func_08A383EC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A383EC:;
    ST8(a0+105, 0);
    a0 = 0x4a950000u;
    sp = sp - 16;
    a0 = a0 | 0xdb6b;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38404;
L_08A38404:;
    a0 = 0x74420000u;
    a0 = a0 | 0xb873;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38410;
L_08A38410:;
    sp = sp + 16;
    return;
}

/* 08A3841C */
void func_08A3841C(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3841C:;
    sp = sp - 16;
    a0 = LD32(a0+68);
    func_08A44BFC(a0);
    goto L_08A3842C;
L_08A3842C:;
    sp = sp + 16;
    return;
}

/* 08A38438 */
void func_08A38438(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38438:;
    sp = sp - 16;
    v0 = 9;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A3845C; }
    goto L_08A38454;
L_08A38454:;
    a0 = LD32(a0+68);
    func_08A480F0(a0);
    goto L_08A3845C;
L_08A3845C:;
    a0 = LD32(s0+68);
    func_08A4A480(a0);
    goto L_08A38464;
L_08A38464:;
    sp = sp + 16;
    return;
}

/* 08A38474 */
u32 func_08A38474(u32 a0)
{
    u32 v0 = 0;
L_08A38474:;
    v0 = LD_U8(a0+58);
    return v0;
}

/* 08A3847C */
u32 func_08A3847C(u32 a0)
{
    u32 v0 = 0;
L_08A3847C:;
    v0 = LD_U8(a0+59);
    return v0;
}

/* 08A38484 */
u32 func_08A38484(u32 a0)
{
    u32 v0 = 0;
L_08A38484:;
    v0 = LD_U8(a0+57);
    return v0;
}

/* 08A3848C */
u32 func_08A3848C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A3848C:;
    v0 = LD32(a0+8);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v0 = v0 + v1;
    return v0;
}

/* 08A384A4 */
u32 func_08A384A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A384A4:;
    v0 = LD32(a0+4);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v0 = v0 + v1;
    return v0;
}

/* 08A384BC */
u32 func_08A384BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A384BC:;
    v0 = LD32(a0+4);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v0 = v0 + v1;
    return v0;
}

/* 08A384D4 */
u64 func_08A384D4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
L_08A384D4:;
    v1 = LD32(a0+12);
    v0 = LD32(a0);
    a0 = 76;
    { s64 p_ = (s64)(s32)v1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    v0 = v0 + v1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A384F0 */
u32 func_08A384F0(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u32 hi = 0, lo = 0;
L_08A384F0:;
    v0 = 76;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(a0);
    a1 = lo;
    v0 = v0 + a1;
    return v0;
}

/* 08A38508 */
rv_t func_08A38508(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38508:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    { rv_t r_ = func_08A3BE90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38520;
L_08A38520:;
    cnd_ = v0 != 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_08A38538; }
    goto L_08A38528;
L_08A38528:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A38538:;
    v0 = v0 + 76;
    goto L_08A38528;
}

/* 08A38540 */
u64 func_08A38540(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38540:;
    sp = sp - 16;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38550;
L_08A38550:;
    a0 = LD32(v0+44);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38558;
L_08A38558:;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A38568 */
u32 func_08A38568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38568:;
    sp = sp - 16;
    v0 = a1 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A3858C; }
    goto L_08A3857C;
L_08A3857C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A3858C:;
    v0 = 76;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(a0);
    v0 = lo;
    a0 = a0 + v0;
    { rv_t r_ = func_08A3BE90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A385A4;
L_08A385A4:;
    v1 = v0 + 0;
    goto L_08A3857C;
}

/* 08A385AC */
u32 func_08A385AC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u32 hi = 0, lo = 0;
L_08A385AC:;
    v0 = 76;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(a0);
    a1 = lo;
    v0 = v0 + a1;
    return v0;
}

/* 08A385C4 */
u32 func_08A385C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A385C4:;
    sp = sp - 32;
    v0 = D_08B1C60C - (-14836);
    a1 = a1 << 5;
    v0 = v0 - 14836;
    a1 = a1 + v0;
    s5 = a0 + 0;
    s2 = 2;
    s3 = LD32(a1+8);
    cnd_ = s3 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A38648; }
    goto L_08A38608;
L_08A38608:;
    s0 = a1 + 12;
    s4 = 2;
    goto L_08A38610;
L_08A38610:;
    a1 = LD32(s0);
    a0 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3861C;
L_08A3861C:;
    v1 = LD32(v0+4);
    cnd_ = v1 == s4;
    v0 = 2;
    if (cnd_) { goto L_08A3864C; }
    goto L_08A38628;
L_08A38628:;
    cnd_ = s2 == s4;
    if (cnd_) { s2 = v1 + 0; goto L_08A38638; }
    goto L_08A38630;
L_08A38630:;
    cnd_ = v1 != s2;
    if (cnd_) { goto L_08A38650; }
    goto L_08A38638;
L_08A38638:;
    s1 = s1 + 1;
    v0 = s1 < s3;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A38610; }
    goto L_08A38648;
L_08A38648:;
    v0 = s2 + 0;
    goto L_08A3864C;
L_08A3864C:;
    goto L_08A38650;
L_08A38650:;
    sp = sp + 32;
    return v0;
}

/* 08A38670 */
u32 func_08A38670(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08A38670:;
    a1 = a1 << 2;
    a1 = a1 + a0;
    v0 = LD32(a1+132);
    return v0;
}

/* 08A38680 */
u32 func_08A38680(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08A38680:;
    a1 = a1 << 2;
    a1 = a1 + a0;
    v0 = LD32(a1+164);
    return v0;
}

/* 08A38690 */
u64 func_08A38690(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A38690:;
    v1 = LD32(a0+16);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+100); goto L_08A386B4; }
    goto L_08A386A0;
L_08A386A0:;
    v0 = LD32(a0+112);
    v0 = v0 - 10;
    v0 = v0 < 0xau;
    v0 = v0 ^ 0x1;
    return (u64)v0 | ((u64)v1 << 32);
L_08A386B4:;
    v0 = v0 - 10;
    v0 = v0 < 0xau;
    v0 = v0 ^ 0x1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A386C4 */
u64 func_08A386C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A386C4:;
    sp = sp - 16;
    v0 = 3;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A387B0; }
    goto L_08A386E8;
L_08A386E8:;
    a1 = LD32(a0+60);
    v0 = func_08A384A4(a0, a1);
    goto L_08A386F0;
L_08A386F0:;
    v1 = v0 + 0;
    s1 = LD32(v0+4);
    v0 = LD32(s0+12);
    cnd_ = s1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3872C; }
    goto L_08A38704;
L_08A38704:;
    v0 = LD32(s0+112);
    goto L_08A38708;
L_08A38708:;
    v0 = v0 + 10;
    v0 = a0 < v0;
    v0 = v0 ^ 0x1;
    goto L_08A38714;
L_08A38714:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A3872C:;
    v1 = LD32(v1+8);
    v0 = v1 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+112); goto L_08A38708; }
    goto L_08A3873C;
L_08A3873C:;
    a1 = LD32(s0+120);
    a0 = s0 + 0;
    s2 = v1 - 10;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3874C;
L_08A3874C:;
    v1 = v0 + 0;
    v0 = LD32(v0+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD_U8(v1); goto L_08A38780; }
    goto L_08A3875C;
L_08A3875C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38764;
L_08A38764:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A3876C;
L_08A3876C:;
    v1 = v0 + 0;
    a0 = v1 + 0;
    v0 = v0 < s2;
    if (v0 == 0) a0 = s2;
    goto L_08A38704;
L_08A38780:;
    cnd_ = v0 == 0;
    s1 = LD32(v1+8);
    if (cnd_) { goto L_08A38798; }
    goto L_08A38788;
L_08A38788:;
    v0 = func_08A43528();
    goto L_08A38790;
L_08A38790:;
    v0 = v0 - s1;
    goto L_08A3876C;
L_08A38798:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A387A0;
L_08A387A0:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A387A8;
L_08A387A8:;
    v0 = v0 - s1;
    goto L_08A3876C;
L_08A387B0:;
    a1 = LD32(a0+60);
    v0 = func_08A384A4(a0, a1);
    goto L_08A387B8;
L_08A387B8:;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s1 = LD32(v0+8);
    if (cnd_) { goto L_08A38858; }
    goto L_08A387C4;
L_08A387C4:;
    v0 = func_08A43528();
    goto L_08A387CC;
L_08A387CC:;
    a0 = LD32(s0+12);
    goto L_08A387D0;
L_08A387D0:;
    a2 = v0 - s1;
    v0 = 76;
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(s0);
    a1 = LD32(s0+100);
    a0 = lo;
    a0 = a0 + v1;
    v0 = LD32(a0+48);
    a1 = a1 + 10;
    v1 = v0 < a2;
    if (v1 == 0) v0 = a2;
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A38834; }
    goto L_08A38808;
L_08A38808:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38810;
L_08A38810:;
    v0 = LD32(v0+48);
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A3883C; }
    goto L_08A38820;
L_08A38820:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { s1 = 1; goto L_08A38834; }
    goto L_08A38834;
L_08A38834:;
    v0 = s1 + 0;
    goto L_08A38714;
L_08A3883C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A38820;
L_08A38858:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38860;
L_08A38860:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A38868;
L_08A38868:;
    a0 = LD32(s0+12);
    goto L_08A387D0;
}

/* 08A38870 */
rv_t func_08A38870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38870:;
    v1 = a1 < 0x10u;
    v0 = (s32)a3 < 3;
    v1 = v1 ^ 0x1;
    v0 = v0 ^ 0x1;
    sp = sp - 16;
    v1 = v1 | v0;
    s1 = t0 + 0;
    s0 = a3 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A388CC; }
    goto L_08A388A4;
L_08A388A4:;
    v1 = (s32)t0 < 5;
    v0 = a2 ^ 0x8;
    v1 = v1 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    v0 = 16;
    if (cnd_) { goto L_08A388D0; }
    goto L_08A388C0;
L_08A388C0:;
    v0 = t1 < 0x11u;
    cnd_ = v0 != 0;
    v1 = t1 ^ 0x10;
    if (cnd_) { goto L_08A388E8; }
    goto L_08A388CC;
L_08A388CC:;
    v0 = 16;
    goto L_08A388D0;
L_08A388D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A388E8:;
    if (v1 == 0) t1 = a1;
    v0 = t1 << 3;
    v0 = v0 + a2;
    v1 = D_08AE3FB0 - (16304);
    v1 = v1 + 16304;
    v0 = v0 << 2;
    v0 = v0 + v1;
    s2 = LD32(v0);
    v1 = 17;
    cnd_ = s2 == v1;
    if (cnd_) { goto L_08A38934; }
    goto L_08A38914;
L_08A38914:;
    v0 = 2;
    cnd_ = a3 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A38944; }
    goto L_08A38920;
L_08A38920:;
    a1 = s2 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A38928;
L_08A38928:;
    v1 = LD32(v0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = 4; goto L_08A38944; }
    goto L_08A38934;
L_08A38934:;
    a0 = 4;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3893C;
L_08A3893C:;
    v0 = 17;
    goto L_08A388D0;
L_08A38944:;
    cnd_ = s1 == v0;
    v1 = D_08B1C34C - (-15540);
    if (cnd_) { goto L_08A3896C; }
    goto L_08A3894C;
L_08A3894C:;
    v0 = 44;
    { s64 p_ = (s64)(s32)s2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 - 15540;
    v0 = lo;
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 != s1;
    if (cnd_) { goto L_08A38934; }
    goto L_08A3896C;
L_08A3896C:;
    a0 = 0 + 0;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38974;
L_08A38974:;
    v0 = s2 + 0;
    goto L_08A388D0;
}

/* 08A3897C */
void func_08A3897C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A3897C:;
    v0 = LD32(a0+60);
    v1 = LD32(a0+120);
    ST8(a0+51, 0);
    ST32(a0+28, v0);
    ST32(a0+32, v1);
    ST8(a0+36, 0);
    ST8(a0+37, 0);
    ST8(a0+38, 0);
    ST8(a0+39, 0);
    ST8(a0+40, 0);
    ST8(a0+41, 0);
    ST8(a0+42, 0);
    ST8(a0+43, 0);
    ST8(a0+45, 0);
    ST8(a0+46, 0);
    ST8(a0+47, 0);
    ST8(a0+48, 0);
    ST8(a0+49, 0);
    ST8(a0+50, 0);
    ST8(a0+54, 0);
    ST8(a0+55, 0);
    ST8(a0+56, 0);
    return;
}

/* 08A389D8 */
void func_08A389D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A389D8:;
    sp = sp - 32;
    s0 = a0 + 0;
    s4 = 0 + 0;
    s3 = 0 + 0;
    s2 = 0 + 0;
    func_08A3897C(a0);
    goto L_08A38A08;
L_08A38A08:;
    s1 = 0 + 0;
    func_0883BFA8();
    goto L_08A38A10;
L_08A38A10:;
    v1 = LD32(s0+12);
    v0 = 76;
    a0 = LD32(s0);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    a0 = a0 + v1;
    func_08A3BED4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A38A2C;
L_08A38A2C:;
    a0 = s0 + 0;
    func_08A38C90(a0);
    goto L_08A38A34;
L_08A38A34:;
    a0 = s0 + 0;
    func_08A38CB0(a0);
    goto L_08A38A3C;
L_08A38A3C:;
    { u64 r_ = func_08897BC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38A44;
L_08A38A44:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08A38B84; }
    goto L_08A38A4C;
L_08A38A4C:;
    a2 = D_08B2889C - (-30564);
    a0 = a2 - 30564;
    v0 = LD_U8(a0+93);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A38A70; }
    goto L_08A38A60;
L_08A38A60:;
    v0 = D_08B286E1 - (-31007);
    v1 = LD_U8(v0-31007);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = 1; goto L_08A38A94; }
    goto L_08A38A70;
L_08A38A70:;
    v0 = LD_U8(a0+458);
    cnd_ = v0 == 0;
    a0 = a2 - 30564;
    if (cnd_) { goto L_08A38A94; }
    goto L_08A38A7C;
L_08A38A7C:;
    v0 = D_08B2884E - (-30642);
    v1 = LD_U8(v0-30642);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(a0+91); goto L_08A38A98; }
    goto L_08A38A8C;
L_08A38A8C:;
    a1 = 1;
    a0 = a2 - 30564;
    goto L_08A38A94;
L_08A38A94:;
    v0 = LD_U8(a0+91);
    goto L_08A38A98;
L_08A38A98:;
    s4 = a1 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A38AB4; }
    goto L_08A38AA4;
L_08A38AA4:;
    v0 = D_08B286DF - (-31009);
    v1 = LD_U8(v0-31009);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = 1; goto L_08A38AD4; }
    goto L_08A38AB4;
L_08A38AB4:;
    v0 = LD_U8(a0+457);
    cnd_ = v0 == 0;
    v1 = a2 - 30564;
    if (cnd_) { goto L_08A38AD8; }
    goto L_08A38AC0;
L_08A38AC0:;
    v0 = D_08B2884D - (-30643);
    v1 = LD_U8(v0-30643);
    cnd_ = v1 != 0;
    v1 = a2 - 30564;
    if (cnd_) { goto L_08A38AD8; }
    goto L_08A38AD0;
L_08A38AD0:;
    a1 = 1;
    goto L_08A38AD4;
L_08A38AD4:;
    v1 = a2 - 30564;
    goto L_08A38AD8;
L_08A38AD8:;
    v0 = LD_U8(v1+115);
    s3 = a1 + 0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A38AF4; }
    goto L_08A38AE8;
L_08A38AE8:;
    v0 = LD_U8(v1+456);
    cnd_ = v0 == 0;
    a1 = a2 - 30564;
    if (cnd_) { goto L_08A38AFC; }
    goto L_08A38AF4;
L_08A38AF4:;
    a0 = 1;
    a1 = a2 - 30564;
    goto L_08A38AFC;
L_08A38AFC:;
    v0 = LD_U8(a1+113);
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A38B1C; }
    goto L_08A38B0C;
L_08A38B0C:;
    v0 = D_08B286F5 - (-30987);
    v1 = LD_U8(v0-30987);
    cnd_ = v1 == 0;
    if (cnd_) { a3 = 1; goto L_08A38B3C; }
    goto L_08A38B1C;
L_08A38B1C:;
    v0 = LD_U8(a1+455);
    cnd_ = v0 == 0;
    a0 = a2 - 30564;
    if (cnd_) { goto L_08A38B40; }
    goto L_08A38B28;
L_08A38B28:;
    v0 = D_08B2884B - (-30645);
    v1 = LD_U8(v0-30645);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(a0+13); goto L_08A38B44; }
    goto L_08A38B38;
L_08A38B38:;
    a3 = 1;
    goto L_08A38B3C;
L_08A38B3C:;
    a0 = a2 - 30564;
    goto L_08A38B40;
L_08A38B40:;
    v0 = LD_U8(a0+13);
    goto L_08A38B44;
L_08A38B44:;
    a1 = a3 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A38B60; }
    goto L_08A38B50;
L_08A38B50:;
    v0 = D_08B28691 - (-31087);
    v1 = LD_U8(v0-31087);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A38B78; }
    goto L_08A38B60;
L_08A38B60:;
    v0 = LD_U8(a0+449);
    cnd_ = v0 == 0;
    v0 = D_08B28845 - (-30651);
    if (cnd_) { goto L_08A38B78; }
    goto L_08A38B6C;
L_08A38B6C:;
    v1 = LD_U8(v0-30651);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A38B78; }
    goto L_08A38B78;
L_08A38B78:;
    cnd_ = a1 != 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08A38C6C; }
    goto L_08A38B80;
L_08A38B80:;
    v0 = LD32(s0+16);
    goto L_08A38B84;
L_08A38B84:;
    v0 = v0 - 3;
    v1 = v0 < 0x7u;
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s0+53, 0); goto L_08A38BC4; }
    goto L_08A38B94;
L_08A38B94:;
    v1 = D_08AE41B0 - (16816);
    v0 = v0 << 2;
    v1 = v1 + 16816;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A38BB0u: goto L_08A38BB0; case 0x08A38BD4u: goto L_08A38BD4; case 0x08A38C18u: goto L_08A38C18; case 0x08A38C4Cu: goto L_08A38C4C; case 0x08A38C58u: goto L_08A38C58; default: rs_break(0, 0x08a38ba8); }
L_08A38BB0:;
    v1 = LD32(s0+88);
    v0 = 2;
    goto L_08A38BB8;
L_08A38BB8:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A38BD8; }
    goto L_08A38BC0;
L_08A38BC0:;
    ST8(s0+53, 0);
    goto L_08A38BC4;
L_08A38BC4:;
    cnd_ = s2 == 0;
    ST8(s0+52, 0);
    if (cnd_) { goto L_08A38BF4; }
    goto L_08A38BCC;
L_08A38BCC:;
    v0 = 1;
    ST8(s0+56, v0);
    goto L_08A38BD4;
L_08A38BD4:;
    goto L_08A38BD8;
L_08A38BD8:;
    sp = sp + 32;
    return;
L_08A38BF4:;
    cnd_ = s4 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A38C04; }
    goto L_08A38BFC;
L_08A38BFC:;
    ST8(s0+52, v0);
    goto L_08A38BD4;
L_08A38C04:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08A38BD8; }
    goto L_08A38C0C;
L_08A38C0C:;
    v0 = 1;
    ST8(s0+53, v0);
    goto L_08A38BD8;
L_08A38C18:;
    v1 = LD32(s0+108);
    v0 = 5;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A38BD4; }
    goto L_08A38C28;
L_08A38C28:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A38BD4; }
    goto L_08A38C30;
L_08A38C30:;
    cnd_ = v1 != v0;
    if (cnd_) { ST8(s0+53, 0); goto L_08A38BC4; }
    goto L_08A38C38;
L_08A38C38:;
    cnd_ = s1 == 0;
    if (cnd_) { ST8(s0+53, 0); goto L_08A38BC4; }
    goto L_08A38C40;
L_08A38C40:;
    v0 = 1;
    ST8(s0+38, v0);
    goto L_08A38BD4;
L_08A38C4C:;
    v1 = LD32(s0+108);
    v0 = 5;
    goto L_08A38BB8;
L_08A38C58:;
    cnd_ = s1 == 0;
    if (cnd_) { ST8(s0+53, 0); goto L_08A38BC4; }
    goto L_08A38C60;
L_08A38C60:;
    v0 = 1;
    ST8(s0+36, v0);
    goto L_08A38BC0;
L_08A38C6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38C74;
L_08A38C74:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38C7C;
L_08A38C7C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08A38B84; }
    goto L_08A38C84;
L_08A38C84:;
    v0 = 1;
    ST8(s0+55, v0);
    goto L_08A38B80;
}

/* 08A38C90 */
void func_08A38C90(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A38C90:;
    v1 = LD32(a0+28);
    v0 = LD32(a0+60);
    cnd_ = v0 == v1;
    a1 = v1 < 0x10u;
    if (cnd_) { goto L_08A38CA8; }
    goto L_08A38CA0;
L_08A38CA0:;
    cnd_ = a1 != 0;
    if (cnd_) { ST32(a0+60, v1); goto L_08A38CA8; }
    goto L_08A38CA8;
L_08A38CA8:;
    return;
}

/* 08A38CB0 */
void func_08A38CB0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A38CB0:;
    v0 = LD32(a0+120);
    a1 = LD32(a0+32);
    cnd_ = v0 == a1;
    v1 = v0 < 0x10u;
    if (cnd_) { goto L_08A38CC8; }
    goto L_08A38CC0;
L_08A38CC0:;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(a0+120, a1); goto L_08A38CC8; }
    goto L_08A38CC8;
L_08A38CC8:;
    return;
}

/* 08A38CD0 */
void func_08A38CD0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A38CD0:;
    sp = sp - 32;
    s5 = 4;
    s2 = 3;
    s1 = 0 + 0;
    s0 = a0 + 0;
    goto L_08A38D00;
L_08A38D00:;
    a0 = s0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38D08;
L_08A38D08:;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A38DC8; }
    goto L_08A38D14;
L_08A38D14:;
    v0 = func_08A3848C(a0, a1);
    goto L_08A38D1C;
L_08A38D1C:;
    v1 = LD32(v0+4);
    goto L_08A38D20;
L_08A38D20:;
    cnd_ = v1 == s2;
    if (cnd_) { s5 = s1 + 0; goto L_08A38D38; }
    goto L_08A38D28;
L_08A38D28:;
    s1 = s1 + 1;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A38D00; }
    goto L_08A38D38;
L_08A38D38:;
    s2 = LD32(s0+12);
    v0 = D_08B1C34C - (-15540);
    s4 = v0 - 15540;
    s1 = 0 + 0;
    s3 = 44;
    goto L_08A38D4C;
L_08A38D4C:;
    a1 = LD32(s0+60);
    a0 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A38D58;
L_08A38D58:;
    v1 = LD32(v0+4);
    a1 = s1 < 0x11u;
    cnd_ = v1 == s2;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A38DA0; }
    goto L_08A38D68;
L_08A38D68:;
    a0 = LD32(s0+60);
    v0 = a0 + 1;
    goto L_08A38D70;
L_08A38D70:;
    v0 = v0 & 0xf;
    cnd_ = a1 != 0;
    ST32(s0+60, v0);
    if (cnd_) { goto L_08A38D4C; }
    goto L_08A38D7C;
L_08A38D7C:;
    goto L_08A38D80;
L_08A38D80:;
    sp = sp + 32;
    return;
L_08A38DA0:;
    v0 = LD32(s0+60);
    { s64 p_ = (s64)(s32)v0 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = v0 + 0;
    v1 = lo;
    v1 = v1 + s4;
    v0 = LD32(v1+4);
    cnd_ = v0 != s5;
    if (cnd_) { v0 = a0 + 1; goto L_08A38D70; }
    goto L_08A38DC0;
L_08A38DC0:;
    goto L_08A38D80;
L_08A38DC8:;
    a0 = s0 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A38DD0;
L_08A38DD0:;
    v1 = LD32(v0+8);
    goto L_08A38D20;
}

/* 08A38DD8 */
void func_08A38DD8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38DD8:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = 44;
    a0 = LD32(a0+60);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a0 = lo;
    s0 = a0 + v0;
    v1 = LD32(s0+28);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A38E40; }
    goto L_08A38E18;
L_08A38E18:;
    a1 = s1 + 0;
    goto L_08A38E1C;
L_08A38E1C:;
    a0 = s0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A38E24;
L_08A38E24:;
    v1 = LD32(s2+120);
    cnd_ = v1 == v0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A38E50; }
    goto L_08A38E30;
L_08A38E30:;
    v0 = LD32(s0+28);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A38E1C; }
    goto L_08A38E40;
L_08A38E40:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A38E4C;
L_08A38E4C:;
    ST32(s2+120, v0);
    goto L_08A38E50;
L_08A38E50:;
    sp = sp + 16;
    return;
}

/* 08A38E68 */
void func_08A38E68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38E68:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = 44;
    a0 = LD32(a0+60);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a0 = lo;
    s0 = a0 + v0;
    v1 = LD32(s0+28);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A38ED0; }
    goto L_08A38EA8;
L_08A38EA8:;
    a1 = s1 + 0;
    goto L_08A38EAC;
L_08A38EAC:;
    a0 = s0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A38EB4;
L_08A38EB4:;
    v1 = LD32(s2+120);
    cnd_ = v1 == v0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A38EE0; }
    goto L_08A38EC0;
L_08A38EC0:;
    v0 = LD32(s0+28);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A38EAC; }
    goto L_08A38ED0;
L_08A38ED0:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A38EDC;
L_08A38EDC:;
    ST32(s2+120, v0);
    goto L_08A38EE0;
L_08A38EE0:;
    sp = sp + 16;
    return;
}

/* 08A38EF8 */
u64 func_08A38EF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38EF8:;
    sp = sp - 16;
    s0 = LD_U8(a0+42);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A38F24; }
    goto L_08A38F14;
L_08A38F14:;
    { u64 r_ = func_08A38690(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38F1C;
L_08A38F1C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+112); goto L_08A38F90; }
    goto L_08A38F24;
L_08A38F24:;
    v0 = LD_U8(s1+41);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A38F68; }
    goto L_08A38F30;
L_08A38F30:;
    v0 = s0 & 0xff;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_08A38F4C; }
    goto L_08A38F3C;
L_08A38F3C:;
    v0 = LD_U8(s1+41);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A38F58; }
    goto L_08A38F48;
L_08A38F48:;
    a0 = 4;
    goto L_08A38F4C;
L_08A38F4C:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38F54;
L_08A38F54:;
    goto L_08A38F58;
L_08A38F58:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A38F68:;
    a0 = s1 + 0;
    { u64 r_ = func_08A386C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A38F70;
L_08A38F70:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+112); goto L_08A38F80; }
    goto L_08A38F78;
L_08A38F78:;
    s0 = LD_U8(s1+42);
    goto L_08A38F30;
L_08A38F80:;
    a0 = 3;
    v0 = v0 + 10;
    goto L_08A38F88;
L_08A38F88:;
    ST32(s1+112, v0);
    goto L_08A38F4C;
L_08A38F90:;
    a0 = 3;
    v0 = v0 - 10;
    goto L_08A38F88;
}

/* 08A38F9C */
void func_08A38F9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A38F9C:;
    sp = sp - 16;
    v0 = LD_U8(a0+42);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A38FEC; }
    goto L_08A38FB4;
L_08A38FB4:;
    v0 = LD32(a0+100);
    v1 = v0 - 10;
    v0 = v0 < 0xbu;
    cnd_ = v0 != 0;
    a0 = 3;
    if (cnd_) { goto L_08A38FE4; }
    goto L_08A38FC8;
L_08A38FC8:;
    ST32(s0+100, v1);
    goto L_08A38FCC;
L_08A38FCC:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A38FD4;
L_08A38FD4:;
    goto L_08A38FD8;
L_08A38FD8:;
    sp = sp + 16;
    return;
L_08A38FE4:;
    a0 = 4;
    goto L_08A38FCC;
L_08A38FEC:;
    v0 = LD_U8(a0+41);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A38FD8; }
    goto L_08A38FF8;
L_08A38FF8:;
    { u64 r_ = func_08A386C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39000;
L_08A39000:;
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_08A38FE4; }
    goto L_08A39008;
L_08A39008:;
    v0 = LD32(s0+100);
    v0 = v0 + 10;
    ST32(s0+100, v0);
    goto L_08A38FCC;
}

/* 08A39018 */
void func_08A39018(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39018:;
    sp = sp - 16;
    v1 = LD32(a0+20);
    v0 = LD32(a0+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A3906C; }
    goto L_08A39034;
L_08A39034:;
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+16, v1); goto L_08A3906C; }
    goto L_08A39040;
L_08A39040:;
    v0 = v1 << 2;
    v1 = D_08AE41CC - (16844);
    v1 = v1 + 16844;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A3905Cu: goto L_08A3905C; case 0x08A3907Cu: goto L_08A3907C; case 0x08A3908Cu: goto L_08A3908C; case 0x08A3909Cu: goto L_08A3909C; case 0x08A390ACu: goto L_08A390AC; case 0x08A390BCu: goto L_08A390BC; case 0x08A390CCu: goto L_08A390CC; case 0x08A390DCu: goto L_08A390DC; case 0x08A390ECu: goto L_08A390EC; case 0x08A390FCu: goto L_08A390FC; default: rs_break(0, 0x08a39054); }
L_08A3905C:;
    a0 = s0 + 0;
    func_08A39114(a0);
    goto L_08A39064;
L_08A39064:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A39068:;
    ST32(s0+16, v1);
    goto L_08A3906C;
L_08A3906C:;
    sp = sp + 16;
    return;
L_08A3907C:;
    a0 = s0 + 0;
    func_08A39130();
    goto L_08A39084;
L_08A39084:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A3908C:;
    a0 = s0 + 0;
    func_08A391D8(a0);
    goto L_08A39094;
L_08A39094:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A3909C:;
    a0 = s0 + 0;
    func_08A39508(a0);
    goto L_08A390A4;
L_08A390A4:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A390AC:;
    a0 = s0 + 0;
    func_08A39CB8(a0);
    goto L_08A390B4;
L_08A390B4:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A390BC:;
    a0 = s0 + 0;
    func_08A3A2B8(a0);
    goto L_08A390C4;
L_08A390C4:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A390CC:;
    a0 = s0 + 0;
    func_08A3A3E8(a0);
    goto L_08A390D4;
L_08A390D4:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A390DC:;
    a0 = s0 + 0;
    func_08A3A5CC(a0, a1);
    goto L_08A390E4;
L_08A390E4:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A390EC:;
    a0 = s0 + 0;
    func_08A3AD98(a0);
    goto L_08A390F4;
L_08A390F4:;
    v1 = LD32(s0+20);
    goto L_08A39068;
L_08A390FC:;
    a0 = s0 + 0;
    func_08A3B09C(a0);
    goto L_08A39104;
L_08A39104:;
    v1 = LD32(s0+20);
    goto L_08A39068;
}

/* 08A3910C */
void func_08A3910C(u32 a0, u32 a1)
{
L_08A3910C:;
    ST32(a0+20, a1);
    return;
}

/* 08A39114 */
void func_08A39114(u32 a0)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39114:;
    sp = sp - 16;
    a1 = 1;
    func_08A3910C(a0, a1);
    goto L_08A39124;
L_08A39124:;
    sp = sp + 16;
    return;
}

/* 08A39130 */
void func_08A39130(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39130:;
    a0 = 0x211a0000u;
    sp = sp - 16;
    a0 = a0 | 0xe60c;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3914C;
L_08A3914C:;
    v1 = 4;
    v0 = D_08B1C2EC - (-15636);
    ST32(v0-15636, v1);
    sp = sp + 16;
    return;
}

/* 08A39164 */
void func_08A39164(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39164:;
    sp = sp - 16;
    v0 = D_08B1C2EC - (-15636);
    v1 = LD32(v0-15636);
    v0 = 4;
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A391B8; }
    goto L_08A39184;
L_08A39184:;
    v0 = LD_U8(a0+105);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A391C8; }
    goto L_08A39190;
L_08A39190:;
    a0 = 0x211a0000u;
    goto L_08A39194;
L_08A39194:;
    a0 = a0 | 0xe60c;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3919C;
L_08A3919C:;
    a0 = s0 + 0;
    func_08A377D4(a0);
    goto L_08A391A4;
L_08A391A4:;
    v0 = LD32(s0+68);
    a0 = s0 + 0;
    a1 = 2;
    ST8(v0+1184, 0);
    func_08A3910C(a0, a1);
    goto L_08A391B8;
L_08A391B8:;
    sp = sp + 16;
    return;
L_08A391C8:;
    func_08A383EC(a0);
    goto L_08A391D0;
L_08A391D0:;
    a0 = 0x211a0000u;
    goto L_08A39194;
}

/* 08A391D8 */
void func_08A391D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A391D8:;
    sp = sp - 48;
    s0 = a0 + 0;
    a1 = LD32(a0+12);
    v0 = func_08A3B2C0(a0, a1);
    goto L_08A39210;
L_08A39210:;
    ST32(s0+60, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3921C;
L_08A3921C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39224;
L_08A39224:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A39490; }
    goto L_08A3922C;
L_08A3922C:;
    v1 = LD32(s0+4);
    goto L_08A39230;
L_08A39230:;
    v0 = D_08B1C34C - (-15540);
    ST32(s0+72, 0);
    v0 = v0 - 15540;
    a3 = v0 + 32;
    ST32(s0+76, 0);
    a0 = v1 + 4;
    a2 = 0 + 0;
    ST32(s0+80, 0);
    ST32(s0+84, 0);
    t0 = LD32(s0+12);
    goto L_08A39258;
L_08A39258:;
    v0 = LD32(a0);
    a2 = a2 + 1;
    a1 = a2 < 0x10u;
    cnd_ = v0 == t0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08A3947C; }
    goto L_08A3926C;
L_08A3926C:;
    cnd_ = a1 != 0;
    a3 = a3 + 44;
    if (cnd_) { goto L_08A39258; }
    goto L_08A39274;
L_08A39274:;
    v0 = 76;
    { s64 p_ = (s64)(s32)t0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(s0);
    a3 = LD32(s0+76);
    a1 = LD32(s0+72);
    a0 = D_08B1C60C - (-14836);
    v0 = lo;
    v0 = v0 + v1;
    a2 = LD32(v0+48);
    v0 = 9999;
    a0 = a0 - 14836;
    v0 = v0 - a2;
    v1 = a3 < v0;
    if (v1 != 0) v0 = a3;
    a1 = a1 + v0;
    ST32(s0+72, a1);
    fp = a0 + 0;
    s3 = 0 + 0;
    ST32(s0+76, v0);
    s7 = 1;
    s5 = a0 + 8;
    s6 = 0 + 0;
    goto L_08A392CC;
L_08A392CC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    v0 = func_08A385C4(a0, a1);
    goto L_08A392D8;
L_08A392D8:;
    v1 = LD32(s0+12);
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s0+80); goto L_08A3946C; }
    goto L_08A392E4;
L_08A392E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A392EC;
L_08A392EC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A39448; }
    goto L_08A392F4;
L_08A392F4:;
    a1 = s3 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A392FC;
L_08A392FC:;
    v1 = LD32(v0+4);
    cnd_ = v1 == s7;
    if (cnd_) { goto L_08A393C4; }
    goto L_08A39308;
L_08A39308:;
    s3 = s3 + 1;
    goto L_08A3930C;
L_08A3930C:;
    v0 = s3 < 0x4u;
    s6 = s6 + 32;
    cnd_ = v0 != 0;
    s5 = s5 + 32;
    if (cnd_) { goto L_08A392CC; }
    goto L_08A3931C;
L_08A3931C:;
    a1 = LD32(s0+12);
    v0 = 76;
    v1 = LD32(s0);
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s0+72);
    a2 = LD32(s0+80);
    a3 = LD32(s0+84);
    a1 = lo;
    a1 = a1 + v1;
    v0 = LD32(a1+48);
    v0 = 0 - v0;
    v0 = v0 - a0;
    v0 = v0 + 9999;
    v1 = a2 < v0;
    if (v1 != 0) v0 = a2;
    a0 = a0 + v0;
    ST32(s0+72, a0);
    ST32(s0+80, v0);
    v1 = LD32(a1+48);
    v1 = 0 - v1;
    v1 = v1 - a0;
    v1 = v1 + 9999;
    v0 = a3 < v1;
    if (v0 != 0) v1 = a3;
    a0 = a0 + v1;
    ST32(s0+72, a0);
    ST32(s0+84, v1);
    v0 = LD32(a1+48);
    v0 = v0 + a0;
    ST32(a1+48, v0);
    sp = sp + 48;
    return;
L_08A393C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A393CC;
L_08A393CC:;
    v1 = LD_U8(v0+69);
    goto L_08A393D0;
L_08A393D0:;
    cnd_ = v1 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_08A3930C; }
    goto L_08A393D8;
L_08A393D8:;
    v0 = LD32(s5);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A39308; }
    goto L_08A393E4;
L_08A393E4:;
    s4 = s6 + fp;
    s1 = s4 + 12;
    a0 = LD32(s1);
    goto L_08A393F0;
L_08A393F0:;
    v1 = LD32(s0+4);
    a1 = LD32(s0+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1+4);
    s2 = s2 + 1;
    cnd_ = a0 == a1;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A39430; }
    goto L_08A39418;
L_08A39418:;
    v0 = LD32(s4+8);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A393F0; }
    goto L_08A39428;
L_08A39428:;
    s3 = s3 + 1;
    goto L_08A3930C;
L_08A39430:;
    v0 = func_08A4356C();
    goto L_08A39438;
L_08A39438:;
    v1 = LD32(s0+84);
    v1 = v1 + v0;
    ST32(s0+84, v1);
    goto L_08A39418;
L_08A39448:;
    a1 = s3 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A39450;
L_08A39450:;
    v1 = LD32(v0+8);
    cnd_ = v1 != s7;
    if (cnd_) { s3 = s3 + 1; goto L_08A3930C; }
    goto L_08A3945C;
L_08A3945C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39464;
L_08A39464:;
    v1 = LD_U8(v0+69);
    goto L_08A393D0;
L_08A3946C:;
    v1 = LD32(s5-4);
    v0 = v0 + v1;
    ST32(s0+80, v0);
    goto L_08A392E4;
L_08A3947C:;
    v1 = LD32(a3);
    v0 = LD32(s0+76);
    v0 = v0 + v1;
    ST32(s0+76, v0);
    goto L_08A3926C;
L_08A39490:;
    a0 = s0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39498;
L_08A39498:;
    v1 = D_08AE58CC - (22732);
    a1 = 0x8bd40000u;
    a0 = 0x6f9c0000u;
    f13 = BITSF(LD32(v1+22732));
    f12 = BITSF(0);
    a1 = a1 | 0x709d;
    a0 = a0 | 0x87a8;
    if (v0 == 0) a0 = a1;
    a2 = 0 + 0;
    a1 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A394C8;
L_08A394C8:;
    v1 = LD32(s0+4);
    goto L_08A39230;
}

/* 08A394D0 */
void func_08A394D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A394D0:;
    sp = sp - 16;
    v1 = LD_U8(a0+36);
    cnd_ = v1 != 0;
    a1 = 3;
    if (cnd_) { goto L_08A394F0; }
    goto L_08A394E4;
L_08A394E4:;
    goto L_08A394E8;
L_08A394E8:;
    sp = sp + 16;
    return;
L_08A394F0:;
    func_08A3910C(a0, a1);
    goto L_08A394F8;
L_08A394F8:;
    a0 = 1;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39500;
L_08A39500:;
    goto L_08A394E8;
}

/* 08A39508 */
void func_08A39508(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39508:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A3B28C(a0);
    goto L_08A3951C;
L_08A3951C:;
    ST8(s0+128, 0);
    ST32(s0+88, 0);
    ST32(s0+92, 0);
    ST32(s0+96, 0);
    ST32(s0+100, 0);
    ST8(s0+127, 0);
    sp = sp + 16;
    return;
}

/* 08A39544 */
void func_08A39544(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39544:;
    sp = sp - 16;
    a2 = 1;
    v1 = LD32(a0+88);
    cnd_ = v1 == a2;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A39710; }
    goto L_08A39560;
L_08A39560:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A3961C; }
    goto L_08A3956C;
L_08A3956C:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A395BC; }
    goto L_08A39574;
L_08A39574:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+47); goto L_08A3958C; }
    goto L_08A3957C;
L_08A3957C:;
    goto L_08A39580;
L_08A39580:;
    goto L_08A39584;
L_08A39584:;
    sp = sp + 16;
    return;
L_08A3958C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0+88, 0); goto L_08A395A8; }
    goto L_08A39594;
L_08A39594:;
    v0 = LD_U8(a0+36);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A39580; }
    goto L_08A395A0;
L_08A395A0:;
    a1 = 4;
    func_08A3910C(a0, a1);
    goto L_08A395A8;
L_08A395A8:;
    a0 = 1;
    goto L_08A395AC;
L_08A395AC:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A395B4;
L_08A395B4:;
    goto L_08A39580;
L_08A395BC:;
    v0 = LD_U8(a0+54);
    cnd_ = v0 != 0;
    a1 = D_08C2D8CE - (-10034);
    if (cnd_) { goto L_08A395F8; }
    goto L_08A395C8;
L_08A395C8:;
    v0 = LD_U8(a0+48);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A395E8; }
    goto L_08A395D4;
L_08A395D4:;
    func_08A39C8C(a0);
    goto L_08A395DC;
L_08A395DC:;
    ST32(s0+88, 0);
    goto L_08A395E0;
L_08A395E0:;
    a0 = 2;
    goto L_08A395AC;
L_08A395E8:;
    func_08A397F0(a0);
    goto L_08A395F0;
L_08A395F0:;
    goto L_08A39580;
L_08A395F8:;
    v0 = LD_U8(a1-10034);
    v1 = D_08B1C84D - (-14259);
    a0 = 3;
    v0 = v0 ^ 0x1;
    ST8(a1-10034, v0);
    v0 = D_08B1C84C - (-14260);
    ST8(v1-14259, a2);
    ST8(v0-14260, a2);
    goto L_08A395AC;
L_08A3961C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A39580; }
    goto L_08A39624;
L_08A39624:;
    v0 = LD_U8(a0+43);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3968C; }
    goto L_08A39630;
L_08A39630:;
    v0 = LD_U8(a0+45);
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A39670; }
    goto L_08A3963C;
L_08A3963C:;
    v0 = LD_U8(a0+36);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a0+126, 0); goto L_08A39660; }
    goto L_08A39648;
L_08A39648:;
    v0 = LD_U8(a0+46);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A39584; }
    goto L_08A39654;
L_08A39654:;
    v0 = 3;
    ST32(a0+88, v0);
    goto L_08A39584;
L_08A39660:;
    a1 = 4;
    func_08A3910C(a0, a1);
    goto L_08A39668;
L_08A39668:;
    a0 = 2;
    goto L_08A395AC;
L_08A39670:;
    ST32(a0+88, v0);
    a0 = 3;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3967C;
L_08A3967C:;
    a0 = s0 + 0;
    func_08A3979C(a0);
    goto L_08A39684;
L_08A39684:;
    goto L_08A39580;
L_08A3968C:;
    v0 = func_08A3B36C(a0);
    goto L_08A39694;
L_08A39694:;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_08A395AC; }
    goto L_08A3969C;
L_08A3969C:;
    a0 = s0 + 0;
    v0 = func_08A3B3C8(a0);
    goto L_08A396A4;
L_08A396A4:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_08A395AC; }
    goto L_08A396AC;
L_08A396AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A396B4;
L_08A396B4:;
    v0 = LD32(v0+48);
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A396F4; }
    goto L_08A396C4;
L_08A396C4:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A396E0; }
    goto L_08A396D8;
L_08A396D8:;
    a0 = 4;
    goto L_08A395AC;
L_08A396E0:;
    ST32(s0+88, v0);
    a0 = 1;
    v0 = 10;
    ST32(s0+100, v0);
    goto L_08A395AC;
L_08A396F4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A396C4;
L_08A39710:;
    func_08A38F9C(a0);
    goto L_08A39718;
L_08A39718:;
    v0 = LD_U8(s0+47);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+48); goto L_08A3978C; }
    goto L_08A39724;
L_08A39724:;
    a1 = LD32(s0+60);
    a0 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A39730;
L_08A39730:;
    a0 = v0 + 0;
    v1 = LD32(v0+4);
    v0 = LD32(s0+12);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3974C; }
    goto L_08A39744;
L_08A39744:;
    ST32(s0+88, 0);
    goto L_08A3957C;
L_08A3974C:;
    a1 = LD32(s0+100);
    func_08A3BCDC(a0, a1);
    goto L_08A39754;
L_08A39754:;
    v1 = LD32(s0+12);
    v0 = 76;
    a2 = LD32(s0);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = LD32(s0+100);
    a0 = 1;
    v1 = lo;
    v1 = v1 + a2;
    v0 = LD32(v1+48);
    v0 = v0 - a1;
    ST32(v1+48, v0);
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39784;
L_08A39784:;
    ST32(s0+88, 0);
    goto L_08A3957C;
L_08A3978C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A39580; }
    goto L_08A39794;
L_08A39794:;
    ST32(s0+88, 0);
    goto L_08A395E0;
}

/* 08A3979C */
void func_08A3979C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3979C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 0xecea0000u;
    a0 = a0 | 0x2eb3;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A397C0;
L_08A397C0:;
    a0 = 1;
    ST8(s0+104, a0);
    v0 = D_08B1C84D - (-14259);
    v1 = D_08C2D8CE - (-10034);
    ST8(v0-14259, a0);
    v0 = D_08B1C84C - (-14260);
    ST8(v1-10034, 0);
    ST8(v0-14260, a0);
    sp = sp + 16;
    return;
}

/* 08A397F0 */
void func_08A397F0(u32 a0)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A397F0:;
    sp = sp - 16;
    s1 = D_08C2D8CC - (-10036);
    v0 = LD_U8(s1-10036);
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A39828; }
    goto L_08A39810;
L_08A39810:;
    ST8(s1-10036, 0);
    goto L_08A39814;
L_08A39814:;
    sp = sp + 16;
    return;
L_08A39828:;
    func_08A39840(a0);
    goto L_08A39830;
L_08A39830:;
    a0 = s0 + 0;
    func_08A3990C(a0);
    goto L_08A39838;
L_08A39838:;
    ST8(s1-10036, 0);
    goto L_08A39814;
}

/* 08A39840 */
void func_08A39840(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A39840:;
    sp = sp - 32;
    v0 = D_08C2D8CE - (-10034);
    s3 = D_08B1C2F0 - (-15632);
    s2 = D_08B1C2F4 - (-15628);
    s1 = D_08B1C2F8 - (-15624);
    v1 = LD_U8(v0-10034);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A398B0; }
    goto L_08A39874;
L_08A39874:;
    v0 = LD32(s3-15632);
    a2 = v0 + 0;
    v0 = v0 < 0x3u;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A398FC; }
    goto L_08A39888;
L_08A39888:;
    a2 = LD32(s2-15628);
    goto L_08A3988C;
L_08A3988C:;
    a0 = s0 + 0;
    v0 = a2 < 0x3u;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A398EC; }
    goto L_08A3989C;
L_08A3989C:;
    a2 = LD32(s1-15624);
    goto L_08A398A0;
L_08A398A0:;
    a0 = s0 + 0;
    v0 = a2 < 0x3u;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A398DC; }
    goto L_08A398B0;
L_08A398B0:;
    v0 = (u32)-1;
    goto L_08A398B4;
L_08A398B4:;
    ST32(s1-15624, v0);
    ST32(s3-15632, v0);
    ST32(s2-15628, v0);
    sp = sp + 32;
    return;
L_08A398DC:;
    { u64 r_ = func_08A39AAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A398E4;
L_08A398E4:;
    v0 = (u32)-1;
    goto L_08A398B4;
L_08A398EC:;
    { u64 r_ = func_08A39AAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A398F4;
L_08A398F4:;
    a2 = LD32(s1-15624);
    goto L_08A398A0;
L_08A398FC:;
    { u64 r_ = func_08A39AAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39904;
L_08A39904:;
    a2 = LD32(s2-15628);
    goto L_08A3988C;
}

/* 08A3990C */
void func_08A3990C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3990C:;
    sp = sp - 16;
    v0 = D_08C2D8CE - (-10034);
    v1 = LD_U8(v0-10034);
    cnd_ = v1 != 0;
    s0 = D_08B1C2FC - (-15620);
    if (cnd_) { goto L_08A3993C; }
    goto L_08A39928;
L_08A39928:;
    v0 = LD32(s0-15620);
    a1 = v0 + 0;
    v0 = v0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A39954; }
    goto L_08A3993C;
L_08A3993C:;
    v0 = (u32)-1;
    goto L_08A39940;
L_08A39940:;
    ST32(s0-15620, v0);
    sp = sp + 16;
    return;
L_08A39954:;
    { u64 r_ = func_08A39BA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3995C;
L_08A3995C:;
    v0 = (u32)-1;
    goto L_08A39940;
}

/* 08A39964 */
rv_t func_08A39964(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A39964:;
    sp = sp - 32;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39994;
L_08A39994:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s2 = v0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A399A4;
L_08A399A4:;
    v1 = LD_U8(v0+70);
    f0 = BITSF(s2);
    cnd_ = v1 == 0;
    f20 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A399D8; }
    goto L_08A399B4;
L_08A399B4:;
    v0 = s2 & 0x1;
    cnd_ = (s32)s2 < 0;
    v1 = s2 >> 1;
    if (cnd_) { goto L_08A399F8; }
    goto L_08A399C0;
L_08A399C0:;
    { rv_t r_ = func_08A43404(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A399C8;
L_08A399C8:;
    f0 = f20 * f0;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    s2 = s2 - v0;
    goto L_08A399D8;
L_08A399D8:;
    v0 = s2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A399F8:;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f20 = (float)(s32)FBITS(f0);
    f20 = f20 + f20;
    goto L_08A399C0;
}

/* 08A39A0C */
rv_t func_08A39A0C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A39A0C:;
    sp = sp - 32;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v0 = func_08A43360(a0);
    goto L_08A39A34;
L_08A39A34:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s2 = v0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A39A44;
L_08A39A44:;
    v1 = LD_U8(v0+70);
    f0 = BITSF(s2);
    cnd_ = v1 == 0;
    f20 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A39A78; }
    goto L_08A39A54;
L_08A39A54:;
    v0 = s2 & 0x1;
    cnd_ = (s32)s2 < 0;
    v1 = s2 >> 1;
    if (cnd_) { goto L_08A39A98; }
    goto L_08A39A60;
L_08A39A60:;
    { rv_t r_ = func_08A4344C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39A68;
L_08A39A68:;
    f0 = f20 * f0;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    s2 = s2 - v0;
    goto L_08A39A78;
L_08A39A78:;
    v0 = s2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A39A98:;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f20 = (float)(s32)FBITS(f0);
    f20 = f20 + f20;
    goto L_08A39A60;
}

/* 08A39AAC */
u64 func_08A39AAC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A39AAC:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s4 = s2 << 2;
    s1 = a2 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39ADC;
L_08A39ADC:;
    s0 = v0 + 0;
    v0 = s4 + v0;
    a3 = LD32(v0+52);
    v1 = s1 - 1;
    a1 = s2 + 0;
    a2 = s1 + 0;
    cnd_ = a3 == v1;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A39B1C; }
    goto L_08A39AFC;
L_08A39AFC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A39B1C:;
    a3 = LD32(s3+12);
    { rv_t r_ = func_08A39964(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39B24;
L_08A39B24:;
    a2 = v0 + 0;
    v0 = LD32(s0+48);
    v0 = v0 < a2;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A39AFC; }
    goto L_08A39B38;
L_08A39B38:;
    v1 = LD32(s3+12);
    v0 = 76;
    a1 = LD32(s3);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    v1 = v1 + a1;
    v0 = LD32(v1+48);
    a1 = s4 + v1;
    ST32(a1+52, s1);
    v0 = v0 - a2;
    ST32(v1+48, v0);
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39B68;
L_08A39B68:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39B74;
L_08A39B74:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39B7C;
L_08A39B7C:;
    a3 = v0 + 0;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    func_08A4DED0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A39B90;
L_08A39B90:;
    v1 = 1;
    v0 = D_08B1C84C - (-14260);
    ST8(v0-14260, v1);
    goto L_08A39AFC;
}

/* 08A39BA0 */
u64 func_08A39BA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A39BA0:;
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39BC4;
L_08A39BC4:;
    s0 = v0 + 0;
    v0 = s1 + v0;
    v1 = LD_U8(v0+64);
    cnd_ = v1 == 0;
    v0 = v0 + 64;
    if (cnd_) { goto L_08A39BE8; }
    goto L_08A39BD8;
L_08A39BD8:;
    v0 = LD_U8(v0+4);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A39C04; }
    goto L_08A39BE8;
L_08A39BE8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A39C04:;
    a2 = LD32(s2+12);
    s3 = 1;
    { rv_t r_ = func_08A39A0C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39C10;
L_08A39C10:;
    a2 = v0 + 0;
    v0 = LD32(s0+48);
    v0 = v0 < a2;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A39BE8; }
    goto L_08A39C24;
L_08A39C24:;
    v1 = LD32(s2+12);
    v0 = 76;
    a1 = LD32(s2);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    v1 = v1 + a1;
    v0 = LD32(v1+48);
    a1 = s1 + v1;
    ST8(a1+68, s3);
    v0 = v0 - a2;
    ST32(v1+48, v0);
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39C54;
L_08A39C54:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39C60;
L_08A39C60:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39C68;
L_08A39C68:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08A4DF3C(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A39C78;
L_08A39C78:;
    v0 = D_08B1C84D - (-14259);
    v1 = D_08B1C84C - (-14260);
    ST8(v0-14259, s3);
    ST8(v1-14260, s3);
    goto L_08A39BE8;
}

/* 08A39C8C */
void func_08A39C8C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39C8C:;
    ST8(a0+104, 0);
    a0 = 0xecea0000u;
    sp = sp - 16;
    a0 = a0 | 0x2eb3;
    v0 = D_08C2D8CE - (-10034);
    ST8(v0-10034, 0);
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39CAC;
L_08A39CAC:;
    sp = sp + 16;
    return;
}

/* 08A39CB8 */
void func_08A39CB8(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08A39CB8:;
    v0 = LD_U8(a0+126);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 3; goto L_08A39CD8; }
    goto L_08A39CC4;
L_08A39CC4:;
    ST8(a0+124, 0);
    ST32(a0+108, 0);
    ST32(a0+112, 0);
    ST32(a0+116, 0);
    return;
L_08A39CD8:;
    ST32(a0+108, v0);
    return;
}

/* 08A39CE0 */
void func_08A39CE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39CE0:;
    sp = sp - 16;
    v1 = LD32(a0+108);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A39D1C; }
    goto L_08A39CF8;
L_08A39CF8:;
    v0 = v1 << 2;
    v1 = D_08AE41F4 - (16884);
    v1 = v1 + 16884;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A39D14u: goto L_08A39D14; case 0x08A39D1Cu: goto L_08A39D1C; case 0x08A39D28u: goto L_08A39D28; case 0x08A39D38u: goto L_08A39D38; case 0x08A39D48u: goto L_08A39D48; case 0x08A39D58u: goto L_08A39D58; case 0x08A39D68u: goto L_08A39D68; default: rs_break(0, 0x08a39d0c); }
L_08A39D14:;
    a0 = a1 + 0;
    func_08A39E00(a0);
    goto L_08A39D1C;
L_08A39D1C:;
    goto L_08A39D20;
L_08A39D20:;
    sp = sp + 16;
    return;
L_08A39D28:;
    a0 = a1 + 0;
    func_08A39F54(a0);
    goto L_08A39D30;
L_08A39D30:;
    goto L_08A39D20;
L_08A39D38:;
    a0 = a1 + 0;
    func_08A39FDC(a0);
    goto L_08A39D40;
L_08A39D40:;
    goto L_08A39D20;
L_08A39D48:;
    a0 = a1 + 0;
    func_08A3A1D0(a0);
    goto L_08A39D50;
L_08A39D50:;
    goto L_08A39D20;
L_08A39D58:;
    a0 = a1 + 0;
    func_08A3A158(a0);
    goto L_08A39D60;
L_08A39D60:;
    goto L_08A39D20;
L_08A39D68:;
    a0 = a1 + 0;
    func_08A39D78(a0);
    goto L_08A39D70;
L_08A39D70:;
    goto L_08A39D20;
}

/* 08A39D78 */
void func_08A39D78(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39D78:;
    sp = sp - 16;
    a2 = D_08C2D8CE - (-10034);
    s0 = a0 + 0;
    v0 = LD_U8(a0+54);
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A39DDC; }
    goto L_08A39D98;
L_08A39D98:;
    v0 = LD_U8(a0+48);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A39DBC; }
    goto L_08A39DA4;
L_08A39DA4:;
    goto L_08A39DA8;
L_08A39DA8:;
    v0 = D_08C2D8CC - (-10036);
    ST8(v0-10036, 0);
    sp = sp + 16;
    return;
L_08A39DBC:;
    func_08A39C8C(a0);
    goto L_08A39DC4;
L_08A39DC4:;
    ST32(s0+108, 0);
    a0 = 2;
    goto L_08A39DCC;
L_08A39DCC:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39DD4;
L_08A39DD4:;
    goto L_08A39DA8;
L_08A39DDC:;
    v0 = LD_U8(a2-10034);
    v1 = D_08B1C84D - (-14259);
    ST8(v1-14259, a1);
    v0 = v0 ^ 0x1;
    v1 = D_08B1C84C - (-14260);
    a0 = 3;
    ST8(v1-14260, a1);
    ST8(a2-10034, v0);
    goto L_08A39DCC;
}

/* 08A39E00 */
void func_08A39E00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39E00:;
    sp = sp - 16;
    v0 = LD_U8(a0+128);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A39F44; }
    goto L_08A39E1C;
L_08A39E1C:;
    v0 = LD_U8(s0+45);
    goto L_08A39E20;
L_08A39E20:;
    cnd_ = v0 != 0;
    v0 = 5;
    if (cnd_) { goto L_08A39F28; }
    goto L_08A39E28;
L_08A39E28:;
    v0 = LD_U8(s0+38);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A39E6C; }
    goto L_08A39E34;
L_08A39E34:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A39E54; }
    goto L_08A39E40;
L_08A39E40:;
    goto L_08A39E44;
L_08A39E44:;
    sp = sp + 16;
    return;
L_08A39E54:;
    a1 = 8;
    func_08A3910C(a0, a1);
    goto L_08A39E5C;
L_08A39E5C:;
    a0 = 2;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39E64;
L_08A39E64:;
    goto L_08A39E44;
L_08A39E6C:;
    a0 = s0 + 0;
    v0 = func_08A3B36C(a0);
    goto L_08A39E74;
L_08A39E74:;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_08A39EA0; }
    goto L_08A39E7C;
L_08A39E7C:;
    a0 = s0 + 0;
    v0 = func_08A3B3A4(a0);
    goto L_08A39E84;
L_08A39E84:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_08A39EA0; }
    goto L_08A39E8C;
L_08A39E8C:;
    a0 = s0 + 0;
    func_08A38E68(a0);
    goto L_08A39E94;
L_08A39E94:;
    v0 = 1;
    a0 = 1;
    ST32(s0+108, v0);
    goto L_08A39EA0;
L_08A39EA0:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39EA8;
L_08A39EA8:;
    v1 = LD32(s0+60);
    v0 = 44;
    ST8(s0+127, 0);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a0 = s0 + 0;
    v1 = lo;
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    v0 = func_08A3848C(a0, a1);
    goto L_08A39ED4;
L_08A39ED4:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39EE0;
L_08A39EE0:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A39F0C; }
    goto L_08A39EE8;
L_08A39EE8:;
    v1 = LD32(s1+4);
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A39E44; }
    goto L_08A39EF8;
L_08A39EF8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39F00;
L_08A39F00:;
    v1 = LD_U8(v0+71);
    goto L_08A39F04;
L_08A39F04:;
    ST8(s0+127, v1);
    goto L_08A39E40;
L_08A39F0C:;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A39E44; }
    goto L_08A39F18;
L_08A39F18:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A39F20;
L_08A39F20:;
    v1 = LD_U8(v0+71);
    goto L_08A39F04;
L_08A39F28:;
    ST32(s0+108, v0);
    a0 = 3;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39F34;
L_08A39F34:;
    a0 = s0 + 0;
    func_08A3979C(a0);
    goto L_08A39F3C;
L_08A39F3C:;
    goto L_08A39E44;
L_08A39F44:;
    func_08A38CD0(a0);
    goto L_08A39F4C;
L_08A39F4C:;
    v0 = LD_U8(s0+45);
    goto L_08A39E20;
}

/* 08A39F54 */
void func_08A39F54(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A39F54:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A38DD8(a0);
    goto L_08A39F68;
L_08A39F68:;
    v0 = LD_U8(s0+38);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A39FA4; }
    goto L_08A39F74;
L_08A39F74:;
    v0 = LD_U8(s0+39);
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_08A39F90; }
    goto L_08A39F80;
L_08A39F80:;
    goto L_08A39F84;
L_08A39F84:;
    sp = sp + 16;
    return;
L_08A39F90:;
    ST32(s0+108, 0);
    goto L_08A39F94;
L_08A39F94:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A39F9C;
L_08A39F9C:;
    goto L_08A39F84;
L_08A39FA4:;
    v0 = func_08A3B4E0(a0);
    goto L_08A39FAC;
L_08A39FAC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A39FC4; }
    goto L_08A39FB4;
L_08A39FB4:;
    v0 = func_08A3B518(a0);
    goto L_08A39FBC;
L_08A39FBC:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_08A39F94; }
    goto L_08A39FC4;
L_08A39FC4:;
    v0 = 2;
    v1 = 10;
    a0 = 1;
    ST32(s0+108, v0);
    ST32(s0+112, v1);
    goto L_08A39F94;
}

/* 08A39FDC */
void func_08A39FDC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A39FDC:;
    sp = sp - 32;
    s0 = a0 + 0;
    { u64 r_ = func_08A38EF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A000;
L_08A3A000:;
    v0 = LD_U8(s0+38);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+39); goto L_08A3A144; }
    goto L_08A3A00C;
L_08A3A00C:;
    a1 = LD32(s0+60);
    a0 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A018;
L_08A3A018:;
    a1 = LD32(s0+120);
    a0 = s0 + 0;
    s2 = v0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A028;
L_08A3A028:;
    s1 = v0 + 0;
    v1 = LD32(v0+4);
    v0 = LD32(s2+4);
    cnd_ = v0 == v1;
    v0 = v1 ^ 0x2;
    if (cnd_) { goto L_08A3A084; }
    goto L_08A3A03C;
L_08A3A03C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A3A118; }
    goto L_08A3A044;
L_08A3A044:;
    v0 = D_08B1C2DC - (-15652);
    f0 = BITSF(LD32(v0-15652));
    v1 = 4;
    ST32(s0+108, v1);
    ST32(s0+148, FBITS(f0));
    a0 = 1;
    goto L_08A3A05C;
L_08A3A05C:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A064;
L_08A3A064:;
    goto L_08A3A068;
L_08A3A068:;
    sp = sp + 32;
    return;
L_08A3A084:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A3A118; }
    goto L_08A3A08C;
L_08A3A08C:;
    v0 = LD32(s0+12);
    cnd_ = v1 != v0;
    a0 = 1;
    if (cnd_) { goto L_08A3A05C; }
    goto L_08A3A098;
L_08A3A098:;
    v0 = 1;
    ST8(s0+130, v0);
    ST8(s0+129, 0);
    v0 = LD_U8(s1);
    s3 = LD32(s0+112);
    cnd_ = v0 == 0;
    s4 = LD32(s1+8);
    if (cnd_) { goto L_08A3A100; }
    goto L_08A3A0B4;
L_08A3A0B4:;
    v0 = func_08A43528();
    goto L_08A3A0BC;
L_08A3A0BC:;
    v1 = v0 - s4;
    goto L_08A3A0C0;
L_08A3A0C0:;
    v0 = v1 < s3;
    a1 = v1 + 0;
    if (v0 == 0) a1 = s3;
    ST32(s0+112, a1);
    a0 = s2 + 0;
    func_08A3BCEC(a0, a1);
    goto L_08A3A0D8;
L_08A3A0D8:;
    a1 = LD32(s0+112);
    a0 = s1 + 0;
    func_08A3BCDC(a0, a1);
    goto L_08A3A0E4;
L_08A3A0E4:;
    v0 = LD32(s0+120);
    goto L_08A3A0E8;
L_08A3A0E8:;
    a0 = s0 + 0;
    a1 = 7;
    ST32(s0+60, v0);
    func_08A3910C(a0, a1);
    goto L_08A3A0F8;
L_08A3A0F8:;
    a0 = 1;
    goto L_08A3A05C;
L_08A3A100:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A108;
L_08A3A108:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A3A110;
L_08A3A110:;
    v1 = v0 - s4;
    goto L_08A3A0C0;
L_08A3A118:;
    a1 = LD32(s0+112);
    ST8(s0+129, v0);
    a0 = s2 + 0;
    ST8(s0+130, 0);
    func_08A3BCEC(a0, a1);
    goto L_08A3A12C;
L_08A3A12C:;
    a1 = LD32(s0+12);
    a2 = LD32(s0+112);
    a0 = s1 + 0;
    func_08A3BCFC(a0, a1, a2);
    goto L_08A3A13C;
L_08A3A13C:;
    v0 = LD32(s0+120);
    goto L_08A3A0E8;
L_08A3A144:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3A068; }
    goto L_08A3A14C;
L_08A3A14C:;
    ST32(s0+108, 0);
    a0 = 2;
    goto L_08A3A05C;
}

/* 08A3A158 */
void func_08A3A158(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3A158:;
    sp = sp - 16;
    a1 = a0 + 0;
    v0 = LD_U8(a0+38);
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A3A1BC; }
    goto L_08A3A170;
L_08A3A170:;
    v1 = D_08C2DFB4 - (-8268);
    v0 = LD32(v1-8268);
    v0 = v0 ^ 0x7;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3A1B4; }
    goto L_08A3A184;
L_08A3A184:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a1+148));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a1+148, FBITS(f0));
    if (cnd_) { goto L_08A3A1B4; }
    goto L_08A3A1A8;
L_08A3A1A8:;
    v0 = 3;
    ST32(a1+108, v0);
    goto L_08A3A1B4;
L_08A3A1B4:;
    sp = sp + 16;
    return;
L_08A3A1BC:;
    v0 = 3;
    ST32(a1+108, v0);
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A1C8;
L_08A3A1C8:;
    goto L_08A3A1B4;
}

/* 08A3A1D0 */
void func_08A3A1D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3A1D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+120);
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A1E8;
L_08A3A1E8:;
    v1 = LD32(v0+4);
    ST8(s0+129, 0);
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    ST8(s0+130, 0);
    if (cnd_) { goto L_08A3A264; }
    goto L_08A3A1FC;
L_08A3A1FC:;
    v0 = LD32(s0+12);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3A268; }
    goto L_08A3A208;
L_08A3A208:;
    a1 = LD32(s0+60);
    a0 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A214;
L_08A3A214:;
    v1 = LD_U8(s0+49);
    cnd_ = v1 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3A22C; }
    goto L_08A3A220;
L_08A3A220:;
    v0 = LD_U8(s0+50);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+39); goto L_08A3A298; }
    goto L_08A3A22C;
L_08A3A22C:;
    v0 = LD_U8(s0+126);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3A288; }
    goto L_08A3A238;
L_08A3A238:;
    v0 = v1 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+124, 0); goto L_08A3A274; }
    goto L_08A3A244;
L_08A3A244:;
    v0 = 1;
    ST8(s0+124, v0);
    a0 = s0 + 0;
    a1 = 6;
    func_08A3910C(a0, a1);
    goto L_08A3A258;
L_08A3A258:;
    a0 = 3;
    goto L_08A3A25C;
L_08A3A25C:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A264;
L_08A3A264:;
    goto L_08A3A268;
L_08A3A268:;
    goto L_08A3A26C;
L_08A3A26C:;
    sp = sp + 16;
    return;
L_08A3A274:;
    a0 = s0 + 0;
    a1 = 5;
    func_08A3910C(a0, a1);
    goto L_08A3A280;
L_08A3A280:;
    a0 = 1;
    goto L_08A3A25C;
L_08A3A288:;
    a1 = LD32(s0+112);
    func_08A3BCEC(a0, a1);
    goto L_08A3A290;
L_08A3A290:;
    v1 = LD_U8(s0+49);
    goto L_08A3A238;
L_08A3A298:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3A268; }
    goto L_08A3A2A0;
L_08A3A2A0:;
    v0 = LD_U8(s0+126);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A3A26C; }
    goto L_08A3A2AC;
L_08A3A2AC:;
    ST32(s0+108, 0);
    a0 = 2;
    goto L_08A3A25C;
}

/* 08A3A2B8 */
void func_08A3A2B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3A2B8:;
    sp = sp - 16;
    v1 = 44;
    a2 = 1;
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    s0 = a0 + 0;
    a1 = LD32(a0+120);
    ST8(a0+59, a2);
    { s64 p_ = (s64)(s32)a1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST8(a0+153, a2);
    ST8(a0+152, 0);
    v1 = lo;
    s1 = v1 + v0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A300;
L_08A3A300:;
    a0 = 0 + 0;
    s2 = v0 + 0;
    func_08978CB4(a0);
    goto L_08A3A30C;
L_08A3A30C:;
    a0 = LD_U8(s0+126);
    v1 = 1;
    v0 = D_08B1BB5C - (-17572);
    cnd_ = a0 != 0;
    ST32(v0-17572, v1);
    if (cnd_) { goto L_08A3A338; }
    goto L_08A3A320;
L_08A3A320:;
    v0 = LD32(s1+40);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+36); goto L_08A3A33C; }
    goto L_08A3A32C;
L_08A3A32C:;
    v0 = LD_U8(s2);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+36); goto L_08A3A33C; }
    goto L_08A3A338;
L_08A3A338:;
    a0 = LD32(s1+40);
    goto L_08A3A33C;
L_08A3A33C:;
    func_08978924(a0, 0, 0, 0);
    goto L_08A3A344;
L_08A3A344:;
    a2 = LD32(s0);
    v0 = D_08B1BB44 - (-17596);
    a1 = LD32(s0+120);
    v1 = LD32(a2+44);
    a0 = s0 + 0;
    ST32(v0-17596, v1);
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A360;
L_08A3A360:;
    a0 = s0 + 0;
    s2 = LD32(v0+8);
    s1 = LD32(s0+112);
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A370;
L_08A3A370:;
    cnd_ = v0 == 0;
    v0 = D_08C29330 - (-27856);
    if (cnd_) { goto L_08A3A3A8; }
    goto L_08A3A378;
L_08A3A378:;
    v1 = D_08C29334 - (-27852);
    ST32(v0-27856, s1);
    ST32(v1-27852, s2);
    goto L_08A3A384;
L_08A3A384:;
    v1 = LD32(s0+68);
    v0 = 1;
    ST8(v1+1184, v0);
    sp = sp + 16;
    return;
L_08A3A3A8:;
    v1 = D_08C29334 - (-27852);
    ST32(v0-27856, s2);
    ST32(v1-27852, s1);
    goto L_08A3A384;
}

/* 08A3A3B8 */
void func_08A3A3B8(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3A3B8:;
    sp = sp - 16;
    a1 = 7;
    s0 = a0 + 0;
    func_08A3910C(a0, a1);
    goto L_08A3A3D0;
L_08A3A3D0:;
    v0 = LD32(s0+68);
    ST8(v0+1184, 0);
    sp = sp + 16;
    return;
}

/* 08A3A3E8 */
void func_08A3A3E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3A3E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+120);
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A400;
L_08A3A400:;
    a0 = v0 + 0;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    v0 = LD32(s0+112);
    if (cnd_) { goto L_08A3A46C; }
    goto L_08A3A410;
L_08A3A410:;
    ST32(s0+132, v0);
    v1 = LD32(a0+8);
    ST32(s0+136, v1);
    goto L_08A3A41C;
L_08A3A41C:;
    v1 = LD32(s0+120);
    v0 = v1 ^ 0x6;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A3A450; }
    goto L_08A3A438;
L_08A3A438:;
    v0 = LD_U8(s0+126);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+140, a1); goto L_08A3A458; }
    goto L_08A3A444;
L_08A3A444:;
    v0 = LD_U8(a0);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+140, a1); goto L_08A3A458; }
    goto L_08A3A450;
L_08A3A450:;
    a1 = 1;
    ST8(s0+140, a1);
    goto L_08A3A458;
L_08A3A458:;
    ST32(s0+144, 0);
    sp = sp + 16;
    return;
L_08A3A46C:;
    ST32(s0+136, v0);
    v1 = LD32(a0+8);
    ST32(s0+132, v1);
    goto L_08A3A41C;
}

/* 08A3A47C */
void func_08A3A47C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3A47C:;
    sp = sp - 16;
    v0 = D_08B2859C - (-31332);
    s0 = a0 + 0;
    a2 = 0 + 0;
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(a0+144));
    v0 = D_08B1C2D8 - (-15656);
    f1 = BITSF(LD32(v0-15656));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(a0+144, FBITS(f0));
    if (cnd_) { goto L_08A3A5B8; }
    goto L_08A3A4BC;
L_08A3A4BC:;
    ST32(a0+144, 0);
    v1 = LD32(a0);
    v0 = LD_U8(v1+64);
    cnd_ = v0 == 0;
    a1 = LD32(v1+60);
    if (cnd_) { goto L_08A3A4D8; }
    goto L_08A3A4D0;
L_08A3A4D0:;
    v0 = LD_U8(v1+68);
    a2 = 0 < v0;
    goto L_08A3A4D8;
L_08A3A4D8:;
    a0 = LD32(v1+56);
    a3 = LD_U8(s0+140);
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3A4E4;
L_08A3A4E4:;
    v1 = LD32(s0);
    s1 = v0 + 100;
    v0 = LD_U8(v1+140);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3A500; }
    goto L_08A3A4F8;
L_08A3A4F8:;
    v0 = LD_U8(v1+144);
    a2 = 0 < v0;
    goto L_08A3A500;
L_08A3A500:;
    a1 = LD32(v1+136);
    a0 = LD32(v1+132);
    a3 = LD_U8(s0+140);
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3A510;
L_08A3A510:;
    t0 = D_08B25AC0 - (23232);
    a3 = LD32(t0+23232);
    t1 = t0 + 23232;
    a1 = LD32(t1+4);
    v1 = (u32)((s32)a3 >> 16);
    a3 = a3 << 16;
    a3 = a3 + v1;
    a3 = a3 + a1;
    a0 = a3 >> 1;
    v1 = 200;
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s1 = s1 - v0;
    a1 = a1 + a3;
    ST32(t1+4, a1);
    a0 = s0 + 0;
    a1 = 7;
    ST32(t0+23232, a3);
    a2 = hi;
    a2 = (s32)s1 < (s32)a2;
    a2 = a2 ^ 0x1;
    t1 = a2 < 0x1u;
    a2 = a2 << 2;
    a2 = a2 + s0;
    v0 = LD32(a2+132);
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_08A3A580; }
    goto L_08A3A578;
L_08A3A578:;
    cnd_ = v1 != 0;
    ST32(a2+132, v1);
    if (cnd_) { goto L_08A3A5B8; }
    goto L_08A3A580;
L_08A3A580:;
    v0 = 76;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(s0);
    a3 = LD32(s0+132);
    t0 = LD32(s0+136);
    ST8(s0+153, 0);
    v0 = lo;
    v0 = v0 + a2;
    v1 = LD32(v0+44);
    ST32(s0+156, t1);
    ST32(s0+164, a3);
    ST32(s0+160, v1);
    ST32(s0+168, t0);
    func_08A3910C(a0, a1);
    goto L_08A3A5B8;
L_08A3A5B8:;
    sp = sp + 16;
    return;
}

/* 08A3A5CC */
void func_08A3A5CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3A5CC:;
    sp = sp - 32;
    v0 = 1;
    s2 = a0 + 0;
    v1 = LD_U8(a0+129);
    ST8(a0+125, v0);
    cnd_ = v1 != 0;
    ST8(a0+172, 0);
    if (cnd_) { goto L_08A3A750; }
    goto L_08A3A5FC;
L_08A3A5FC:;
    v0 = LD_U8(a0+130);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3A750; }
    goto L_08A3A608;
L_08A3A608:;
    v0 = LD_U8(a0+153);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+168); goto L_08A3A690; }
    goto L_08A3A614;
L_08A3A614:;
    v1 = LD_U8(a0+152);
    v0 = D_08C28F7C - (-28804);
    ST8(a0+153, 0);
    cnd_ = v1 != 0;
    s3 = v0 - 28804;
    if (cnd_) { goto L_08A3A810; }
    goto L_08A3A628;
L_08A3A628:;
    a0 = LD32(a0);
    v1 = LD32(s3+8);
    v0 = LD32(a0+44);
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s2+156, 0); goto L_08A3A650; }
    goto L_08A3A63C;
L_08A3A63C:;
    v0 = LD32(a0+120);
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A3A64C; }
    goto L_08A3A648;
L_08A3A648:;
    v0 = 2;
    goto L_08A3A64C;
L_08A3A64C:;
    ST32(s2+156, v0);
    goto L_08A3A650;
L_08A3A650:;
    ST32(s2+160, v1);
    a0 = LD32(a0+44);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A65C;
L_08A3A65C:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    s0 = s0 << 2;
    s0 = s0 + s3;
    a0 = LD32(v0+120);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A674;
L_08A3A674:;
    a0 = LD32(s0+12);
    v0 = v0 << 2;
    v0 = v0 + s3;
    ST32(s2+164, a0);
    v1 = LD32(v0+12);
    ST32(s2+168, v1);
    goto L_08A3A68C;
L_08A3A68C:;
    v0 = LD32(s2+168);
    goto L_08A3A690;
L_08A3A690:;
    a0 = 0xcccc0000u;
    a0 = a0 | 0xcccd;
    v0 = v0 + 9;
    { u64 p_ = (u64)v0 * a0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = LD32(s2+164);
    s1 = LD32(s2+156);
    v1 = v1 + 9;
    v0 = hi;
    { u64 p_ = (u64)v1 * a0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = v0 >> 3;
    a0 = v0 << 2;
    a0 = a0 + v0;
    a0 = a0 << 1;
    v1 = hi;
    v1 = v1 >> 3;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    ST32(s2+164, v0);
    v0 = 2;
    cnd_ = s1 == v0;
    ST32(s2+168, a0);
    if (cnd_) { goto L_08A3A7DC; }
    goto L_08A3A6E8;
L_08A3A6E8:;
    v1 = s1 << 2;
    v1 = v1 + s2;
    v0 = LD32(v1+164);
    v0 = v0 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s2+120); goto L_08A3A70C; }
    goto L_08A3A700;
L_08A3A700:;
    v0 = 10;
    ST32(v1+164, v0);
    goto L_08A3A708;
L_08A3A708:;
    a1 = LD32(s2+120);
    goto L_08A3A70C;
L_08A3A70C:;
    a0 = s2 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3A714;
L_08A3A714:;
    a1 = LD32(s2+12);
    cnd_ = s1 == a1;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A3A78C; }
    goto L_08A3A720;
L_08A3A720:;
    v0 = a1 < 0x1u;
    v0 = v0 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+164);
    a1 = LD32(s0+8);
    a0 = s0 + 0;
    a1 = a1 - v1;
    func_08A3BCEC(a0, a1);
    goto L_08A3A740;
L_08A3A740:;
    v0 = LD32(s0+8);
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3A77C; }
    goto L_08A3A750;
L_08A3A750:;
    a0 = s2 + 0;
    func_08A3A890(a0);
    goto L_08A3A758;
L_08A3A758:;
    a0 = s2 + 0;
    func_08A3B590(a0);
    goto L_08A3A760;
L_08A3A760:;
    sp = sp + 32;
    return;
L_08A3A77C:;
    a1 = 10;
    func_08A3BCDC(a0, a1);
    goto L_08A3A784;
L_08A3A784:;
    goto L_08A3A750;
L_08A3A78C:;
    v0 = LD_U8(s2+126);
    cnd_ = v0 != 0;
    v0 = a1 << 2;
    if (cnd_) { goto L_08A3A7B4; }
    goto L_08A3A798;
L_08A3A798:;
    v0 = LD_U8(s0);
    cnd_ = v0 == 0;
    v0 = a1 << 2;
    if (cnd_) { goto L_08A3A7B4; }
    goto L_08A3A7A4;
L_08A3A7A4:;
    v0 = 1;
    ST8(s2+126, v0);
    ST8(s2+125, 0);
    goto L_08A3A750;
L_08A3A7B4:;
    v0 = v0 + s2;
    a2 = LD32(v0+164);
    a0 = s0 + 0;
    func_08A3BCFC(a0, a1, a2);
    goto L_08A3A7C4;
L_08A3A7C4:;
    v0 = LD_U8(s0);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A3A750; }
    goto L_08A3A7D0;
L_08A3A7D0:;
    ST8(s0, 0);
    ST8(s2+172, v0);
    goto L_08A3A750;
L_08A3A7DC:;
    a1 = 0 + 0;
    a0 = s2 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3A7E8;
L_08A3A7E8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A7F0;
L_08A3A7F0:;
    v0 = 0 < v0;
    v1 = v0 << 2;
    v1 = v1 + s2;
    a0 = 10;
    s1 = v0 + 0;
    ST32(v1+164, a0);
    ST32(s2+156, v0);
    goto L_08A3A708;
L_08A3A810:;
    a1 = 0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3A818;
L_08A3A818:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A820;
L_08A3A820:;
    a1 = 0 + 0;
    a0 = s2 + 0;
    s0 = v0 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3A830;
L_08A3A830:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A838;
L_08A3A838:;
    ST32(s2+156, s0);
    a1 = s0 + 0;
    a0 = s2 + 0;
    s1 = 0 < v0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3A84C;
L_08A3A84C:;
    v1 = LD32(v0+44);
    a1 = s0 + 0;
    a0 = s2 + 0;
    ST32(s2+160, v1);
    s0 = s0 << 2;
    s1 = s1 << 2;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3A868;
L_08A3A868:;
    a0 = LD32(v0+44);
    s0 = s0 + s2;
    s1 = s1 + s2;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A878;
L_08A3A878:;
    v0 = v0 << 2;
    v0 = v0 + s3;
    v1 = LD32(v0+12);
    ST32(s0+164, v1);
    ST32(s1+164, 0);
    goto L_08A3A68C;
}

/* 08A3A890 */
void func_08A3A890(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A3A890:;
    sp = sp - 48;
    a1 = 44;
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    s1 = a0 + 0;
    v1 = LD32(a0+120);
    { s64 p_ = (s64)(s32)v1 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    v1 = v1 + v0;
    s3 = LD32(v1+4);
    a1 = s3 + 0;
    v0 = func_08A385C4(a0, a1);
    goto L_08A3A8E8;
L_08A3A8E8:;
    s6 = s3 << 1;
    v1 = LD32(s1+8);
    s7 = v0 + 0;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = s1 + 0;
    s5 = LD32(v0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A90C;
L_08A3A90C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3A914;
L_08A3A914:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3A920;
L_08A3A920:;
    s2 = v0 + 0;
    v0 = v0 ^ 0x1;
    cnd_ = s0 != 0;
    s4 = v0 & 0xff;
    if (cnd_) { goto L_08A3A934; }
    goto L_08A3A930;
L_08A3A930:;
    s4 = s2 + 0;
    goto L_08A3A934;
L_08A3A934:;
    v1 = LD_U8(s1+129);
    v0 = s4 ^ 0x1;
    cnd_ = v1 == 0;
    fp = v0 & 0xff;
    if (cnd_) { goto L_08A3AA10; }
    goto L_08A3A944;
L_08A3A944:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A3A9D0; }
    goto L_08A3A94C;
L_08A3A94C:;
    s0 = D_08AE58CC - (22732);
    v0 = 0x466a0000u;
    a0 = 0x4e130000u;
    f12 = BITSF(0);
    f13 = BITSF(LD32(s0+22732));
    v0 = v0 | 0xd958;
    a0 = a0 | 0x65d3;
    if (s4 == 0) a0 = v0;
    a1 = 1;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3A97C;
L_08A3A97C:;
    cnd_ = s7 == s5;
    v0 = 0x4e500000u;
    if (cnd_) { goto L_08A3A9CC; }
    goto L_08A3A984;
L_08A3A984:;
    a0 = 0x52d00000u;
    f13 = BITSF(LD32(s0+22732));
    f12 = BITSF(0);
    v0 = v0 | 0xb216;
    a0 = a0 | 0x4ba1;
    if (s4 == 0) a0 = v0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3A9AC;
L_08A3A9AC:;
    cnd_ = s2 == 0;
    v1 = LD32(s1+8);
    if (cnd_) { goto L_08A3A9FC; }
    goto L_08A3A9B4;
L_08A3A9B4:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    goto L_08A3A9C4;
L_08A3A9C4:;
    a1 = s4 + 0;
    func_08A4DFA4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3A9CC;
L_08A3A9CC:;
    goto L_08A3A9D0;
L_08A3A9D0:;
    sp = sp + 48;
    return;
L_08A3A9FC:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+8);
    goto L_08A3A9C4;
L_08A3AA10:;
    v0 = LD_U8(s1+130);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3A9D0; }
    goto L_08A3AA1C;
L_08A3AA1C:;
    v1 = LD32(s1+156);
    v0 = LD32(s1+12);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3AA80; }
    goto L_08A3AA2C;
L_08A3AA2C:;
    cnd_ = s0 == 0;
    v0 = D_08AE58CC - (22732);
    if (cnd_) { goto L_08A3AA68; }
    goto L_08A3AA34;
L_08A3AA34:;
    f13 = BITSF(LD32(v0+22732));
    v1 = 0x3d710000u;
    a0 = 0xc0730000u;
    v1 = v1 | 0xf58d;
    a0 = a0 | 0x1702;
    goto L_08A3AA48;
L_08A3AA48:;
    f12 = BITSF(0);
    if (s2 == 0) a0 = v1;
    a1 = 1;
    goto L_08A3AA54;
L_08A3AA54:;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AA60;
L_08A3AA60:;
    goto L_08A3A9D0;
L_08A3AA68:;
    f13 = BITSF(LD32(v0+22732));
    v1 = 0xa8260000u;
    a0 = 0xcb030000u;
    v1 = v1 | 0xd6ef;
    a0 = a0 | 0xc9c4;
    goto L_08A3AA48;
L_08A3AA80:;
    cnd_ = s0 == 0;
    v0 = LD_U8(s1+125);
    if (cnd_) { goto L_08A3ABCC; }
    goto L_08A3AA88;
L_08A3AA88:;
    cnd_ = v0 == 0;
    v0 = D_08AE58CC - (22732);
    if (cnd_) { goto L_08A3ABA8; }
    goto L_08A3AA90;
L_08A3AA90:;
    s0 = D_08AE58CC - (22732);
    v0 = 0xb1d10000u;
    a0 = 0xb6500000u;
    f12 = BITSF(0);
    f13 = BITSF(LD32(s0+22732));
    v0 = v0 | 0x3bf2;
    a0 = a0 | 0xd57d;
    if (s4 == 0) a0 = v0;
    a1 = 1;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AAC0;
L_08A3AAC0:;
    cnd_ = s7 == s5;
    if (cnd_) { goto L_08A3A9D0; }
    goto L_08A3AAC8;
L_08A3AAC8:;
    v0 = LD32(s1+156);
    cnd_ = s7 == v0;
    v0 = 0xb68e0000u;
    if (cnd_) { goto L_08A3AB74; }
    goto L_08A3AAD4;
L_08A3AAD4:;
    a0 = 0xbb0d0000u;
    f13 = BITSF(LD32(s0+22732));
    f12 = BITSF(0);
    v0 = v0 | 0x21c0;
    a0 = a0 | 0xbb4b;
    if (s4 == 0) a0 = v0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AAFC;
L_08A3AAFC:;
    cnd_ = s4 == 0;
    s0 = LD32(s1+8);
    if (cnd_) { goto L_08A3AB60; }
    goto L_08A3AB04;
L_08A3AB04:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + s0;
    s2 = LD32(v0+4);
    goto L_08A3AB14;
L_08A3AB14:;
    a1 = LD32(s1+12);
    a0 = s1 + 0;
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3AB24;
L_08A3AB24:;
    v0 = s2 + v0;
    v1 = LD_U8(v0+68);
    a0 = s2 + 0;
    a1 = s4 + 0;
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3AB50; }
    goto L_08A3AB3C;
L_08A3AB3C:;
    v0 = s6 + s3;
    goto L_08A3AB40;
L_08A3AB40:;
    v0 = v0 << 2;
    v0 = v0 + s0;
    ST32(v0, s7);
    goto L_08A3A9CC;
L_08A3AB50:;
    func_08A4E000(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AB58;
L_08A3AB58:;
    s0 = LD32(s1+8);
    goto L_08A3AB3C;
L_08A3AB60:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + s0;
    s2 = LD32(v0+8);
    goto L_08A3AB14;
L_08A3AB74:;
    v0 = 0x73cc0000u;
    a0 = 0x2f770000u;
    f13 = BITSF(LD32(s0+22732));
    f12 = BITSF(0);
    v0 = v0 | 0x9fdf;
    a0 = a0 | 0xa52a;
    if (s4 == 0) a0 = v0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3ABA0;
L_08A3ABA0:;
    s0 = LD32(s1+8);
    goto L_08A3AB3C;
L_08A3ABA8:;
    f13 = BITSF(LD32(v0+22732));
    v1 = 0xcb030000u;
    a0 = 0xa8260000u;
    v1 = v1 | 0xc9c4;
    a0 = a0 | 0xd6ef;
    goto L_08A3ABBC;
L_08A3ABBC:;
    f12 = BITSF(0);
    if (s2 == 0) a0 = v1;
    a1 = 0 + 0;
    goto L_08A3AA54;
L_08A3ABCC:;
    cnd_ = v0 != 0;
    v0 = D_08AE58CC - (22732);
    if (cnd_) { goto L_08A3ABEC; }
    goto L_08A3ABD4;
L_08A3ABD4:;
    f13 = BITSF(LD32(v0+22732));
    v1 = 0xc0730000u;
    a0 = 0x3d710000u;
    v1 = v1 | 0x1702;
    a0 = a0 | 0xf58d;
    goto L_08A3ABBC;
L_08A3ABEC:;
    a0 = s1 + 0;
    s0 = D_08AE58CC - (22732);
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3ABF8;
L_08A3ABF8:;
    v1 = 0x57e10000u;
    a0 = 0xd4ce0000u;
    f12 = BITSF(0);
    f13 = BITSF(LD32(s0+22732));
    v1 = v1 | 0xdd14;
    a0 = a0 | 0xd3a9;
    if (v0 == 0) a0 = v1;
    a1 = 1;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AC24;
L_08A3AC24:;
    cnd_ = s7 == s5;
    if (cnd_) { goto L_08A3A9D0; }
    goto L_08A3AC2C;
L_08A3AC2C:;
    v0 = LD32(s1+156);
    cnd_ = s7 == v0;
    v0 = 0xdc0a0000u;
    if (cnd_) { goto L_08A3ACBC; }
    goto L_08A3AC38;
L_08A3AC38:;
    a0 = 0x97b50000u;
    f13 = BITSF(LD32(s0+22732));
    f12 = BITSF(0);
    v0 = v0 | 0xf89;
    a0 = a0 | 0x14d4;
    if (s4 == 0) a0 = v0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AC60;
L_08A3AC60:;
    cnd_ = fp == 0;
    s0 = LD32(s1+8);
    if (cnd_) { goto L_08A3ACA8; }
    goto L_08A3AC68;
L_08A3AC68:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + s0;
    s2 = LD32(v0+4);
    goto L_08A3AC78;
L_08A3AC78:;
    a1 = LD32(s1+12);
    a0 = s1 + 0;
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3AC88;
L_08A3AC88:;
    v0 = s2 + v0;
    v1 = LD_U8(v0+68);
    cnd_ = v1 == 0;
    v0 = s6 + s3;
    if (cnd_) { goto L_08A3AB40; }
    goto L_08A3AC98;
L_08A3AC98:;
    a0 = s2 + 0;
    a1 = fp + 0;
    a2 = 1;
    goto L_08A3AB50;
L_08A3ACA8:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + s0;
    s2 = LD32(v0+8);
    goto L_08A3AC78;
L_08A3ACBC:;
    v0 = 0x4e500000u;
    a0 = 0x52d00000u;
    f13 = BITSF(LD32(s0+22732));
    f12 = BITSF(0);
    v0 = v0 | 0xb216;
    a0 = a0 | 0x4ba1;
    if (s4 == 0) a0 = v0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3ACE8;
L_08A3ACE8:;
    cnd_ = s2 == 0;
    v1 = LD32(s1+8);
    if (cnd_) { goto L_08A3AD10; }
    goto L_08A3ACF0;
L_08A3ACF0:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    goto L_08A3AD00;
L_08A3AD00:;
    a1 = s4 + 0;
    func_08A4DFA4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3AD08;
L_08A3AD08:;
    s0 = LD32(s1+8);
    goto L_08A3AB3C;
L_08A3AD10:;
    v0 = s6 + s3;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+8);
    goto L_08A3AD00;
}

/* 08A3AD24 */
void func_08A3AD24(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3AD24:;
    sp = sp - 16;
    v0 = LD_U8(a0+36);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A3AD80; }
    goto L_08A3AD38;
L_08A3AD38:;
    v0 = LD_U8(a0+172);
    cnd_ = v0 != 0;
    a1 = 9;
    if (cnd_) { goto L_08A3AD70; }
    goto L_08A3AD44;
L_08A3AD44:;
    v0 = LD_U8(a0+125);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 4; goto L_08A3AD70; }
    goto L_08A3AD50;
L_08A3AD50:;
    v0 = LD_U8(a0+128);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = v1 + 0; goto L_08A3AD6C; }
    goto L_08A3AD5C;
L_08A3AD5C:;
    v0 = LD_U8(a0+127);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A3AD8C; }
    goto L_08A3AD68;
L_08A3AD68:;
    a0 = v1 + 0;
    goto L_08A3AD6C;
L_08A3AD6C:;
    a1 = 8;
    goto L_08A3AD70;
L_08A3AD70:;
    func_08A3910C(a0, a1);
    goto L_08A3AD78;
L_08A3AD78:;
    a0 = 1;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3AD80;
L_08A3AD80:;
    sp = sp + 16;
    return;
L_08A3AD8C:;
    ST8(a0+128, v0);
    a1 = 4;
    goto L_08A3AD70;
}

/* 08A3AD98 */
void func_08A3AD98(u32 a0)
{
L_08A3AD98:;
    ST32(a0+116, 0);
    ST32(a0+108, 0);
    ST32(a0+112, 0);
    return;
}

/* 08A3ADA8 */
void func_08A3ADA8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3ADA8:;
    sp = sp - 32;
    s1 = 0 + 0;
    v1 = LD32(a0+108);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A3AE18; }
    goto L_08A3ADD8;
L_08A3ADD8:;
    v0 = v1 << 2;
    v1 = D_08AE4214 - (16916);
    v1 = v1 + 16916;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A3ADF4u: goto L_08A3ADF4; case 0x08A3AE18u: goto L_08A3AE18; case 0x08A3AED4u: goto L_08A3AED4; case 0x08A3AF30u: goto L_08A3AF30; case 0x08A3B060u: goto L_08A3B060; case 0x08A3B070u: goto L_08A3B070; case 0x08A3B084u: goto L_08A3B084; default: rs_break(0, 0x08a3adec); }
L_08A3ADF4:;
    v0 = LD_U8(s0+45);
    cnd_ = v0 != 0;
    v0 = 5;
    if (cnd_) { goto L_08A3AEB8; }
    goto L_08A3AE00;
L_08A3AE00:;
    v0 = LD_U8(s0+38);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3AE78; }
    goto L_08A3AE0C;
L_08A3AE0C:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_08A3AE64; }
    goto L_08A3AE18;
L_08A3AE18:;
    v1 = LD_U8(s0+40);
    goto L_08A3AE1C;
L_08A3AE1C:;
    v0 = 1;
    if (v1 != 0) s1 = v0;
    cnd_ = s1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A3AE4C; }
    goto L_08A3AE2C;
L_08A3AE2C:;
    sp = sp + 32;
    return;
L_08A3AE4C:;
    a1 = 2;
    func_08A3910C(a0, a1);
    goto L_08A3AE54;
L_08A3AE54:;
    v0 = LD32(s0+12);
    v0 = v0 < 0x1u;
    ST32(s0+12, v0);
    goto L_08A3AE2C;
L_08A3AE64:;
    s1 = 1;
    goto L_08A3AE68;
L_08A3AE68:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3AE70;
L_08A3AE70:;
    v1 = LD_U8(s0+40);
    goto L_08A3AE1C;
L_08A3AE78:;
    a0 = s0 + 0;
    v0 = func_08A3B36C(a0);
    goto L_08A3AE80;
L_08A3AE80:;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_08A3AE68; }
    goto L_08A3AE88;
L_08A3AE88:;
    a0 = s0 + 0;
    v0 = func_08A3B3A4(a0);
    goto L_08A3AE90;
L_08A3AE90:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_08A3AE68; }
    goto L_08A3AE98;
L_08A3AE98:;
    a0 = s0 + 0;
    v0 = func_08A3B440(a0);
    goto L_08A3AEA0;
L_08A3AEA0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 4; goto L_08A3AE68; }
    goto L_08A3AEA8;
L_08A3AEA8:;
    v0 = 1;
    a0 = 1;
    goto L_08A3AEB0;
L_08A3AEB0:;
    ST32(s0+108, v0);
    goto L_08A3AE68;
L_08A3AEB8:;
    ST32(s0+108, v0);
    a0 = 3;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3AEC4;
L_08A3AEC4:;
    a0 = s0 + 0;
    func_08A3979C(a0);
    goto L_08A3AECC;
L_08A3AECC:;
    v1 = LD_U8(s0+40);
    goto L_08A3AE1C;
L_08A3AED4:;
    v0 = LD_U8(s0+39);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+108, 0); goto L_08A3AE18; }
    goto L_08A3AEE0;
L_08A3AEE0:;
    v0 = LD_U8(s0+38);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s0+40); goto L_08A3AE1C; }
    goto L_08A3AEEC;
L_08A3AEEC:;
    a0 = s0 + 0;
    v0 = func_08A3B4E0(a0);
    goto L_08A3AEF4;
L_08A3AEF4:;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_08A3AE68; }
    goto L_08A3AEFC;
L_08A3AEFC:;
    a0 = s0 + 0;
    v0 = func_08A3B518(a0);
    goto L_08A3AF04;
L_08A3AF04:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_08A3AE68; }
    goto L_08A3AF0C;
L_08A3AF0C:;
    a0 = s0 + 0;
    v0 = func_08A3B518(a0);
    goto L_08A3AF14;
L_08A3AF14:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 4; goto L_08A3AE68; }
    goto L_08A3AF1C;
L_08A3AF1C:;
    v0 = 10;
    ST32(s0+112, v0);
    a0 = 1;
    v0 = 2;
    goto L_08A3AEB0;
L_08A3AF30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A38EF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3AF38;
L_08A3AF38:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+120); goto L_08A3AF54; }
    goto L_08A3AF44;
L_08A3AF44:;
    v0 = LD_U8(s0+38);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+39); goto L_08A3B04C; }
    goto L_08A3AF50;
L_08A3AF50:;
    a1 = LD32(s0+120);
    goto L_08A3AF54;
L_08A3AF54:;
    a0 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3AF5C;
L_08A3AF5C:;
    s1 = v0 + 0;
    v1 = LD32(v0+4);
    v0 = LD32(s0+12);
    cnd_ = v1 != v0;
    a0 = 1;
    if (cnd_) { goto L_08A3AE64; }
    goto L_08A3AF70;
L_08A3AF70:;
    a1 = LD32(s0+60);
    a0 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A3AF7C;
L_08A3AF7C:;
    s4 = v0 + 0;
    v0 = LD_U8(s1);
    s2 = LD32(s0+112);
    cnd_ = v0 == 0;
    s3 = LD32(s1+8);
    if (cnd_) { goto L_08A3B034; }
    goto L_08A3AF90;
L_08A3AF90:;
    v0 = func_08A43528();
    goto L_08A3AF98;
L_08A3AF98:;
    v1 = v0 - s3;
    goto L_08A3AF9C;
L_08A3AF9C:;
    v0 = v1 < s2;
    a1 = v1 + 0;
    if (v0 == 0) a1 = s2;
    ST32(s0+112, a1);
    a0 = s4 + 0;
    func_08A3BCEC(a0, a1);
    goto L_08A3AFB4;
L_08A3AFB4:;
    a1 = LD32(s0+112);
    a0 = s1 + 0;
    func_08A3BCDC(a0, a1);
    goto L_08A3AFC0;
L_08A3AFC0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3AFC8;
L_08A3AFC8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3AFD0;
L_08A3AFD0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3B018; }
    goto L_08A3AFD8;
L_08A3AFD8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3AFE0;
L_08A3AFE0:;
    v1 = 0xb0090000u;
    a0 = 0x8f570000u;
    v1 = v1 | 0x3957;
    a0 = a0 | 0x5d4c;
    goto L_08A3AFF0;
L_08A3AFF0:;
    if (v0 == 0) a0 = v1;
    v0 = D_08AE58CC - (22732);
    f13 = BITSF(LD32(v0+22732));
    f12 = BITSF(0);
    a1 = 1;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3B010;
L_08A3B010:;
    a0 = 1;
    goto L_08A3AE64;
L_08A3B018:;
    a0 = s0 + 0;
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B020;
L_08A3B020:;
    v1 = 0x3e100000u;
    a0 = 0x339a0000u;
    v1 = v1 | 0xaf85;
    a0 = a0 | 0x54da;
    goto L_08A3AFF0;
L_08A3B034:;
    a0 = s0 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B03C;
L_08A3B03C:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A3B044;
L_08A3B044:;
    v1 = v0 - s3;
    goto L_08A3AF9C;
L_08A3B04C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s0+40); goto L_08A3AE1C; }
    goto L_08A3B054;
L_08A3B054:;
    ST32(s0+108, 0);
    a0 = 2;
    goto L_08A3AE68;
L_08A3B060:;
    a0 = s0 + 0;
    func_08A39D78(a0);
    goto L_08A3B068;
L_08A3B068:;
    v1 = LD_U8(s0+40);
    goto L_08A3AE1C;
L_08A3B070:;
    v0 = LD_U8(s0+39);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s0+40); goto L_08A3AE1C; }
    goto L_08A3B07C;
L_08A3B07C:;
    ST32(s0+108, 0);
    goto L_08A3AE18;
L_08A3B084:;
    v0 = LD_U8(s0+39);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s0+40); goto L_08A3AE1C; }
    goto L_08A3B090;
L_08A3B090:;
    v0 = 1;
    ST32(s0+108, v0);
    goto L_08A3AE18;
}

/* 08A3B09C */
void func_08A3B09C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B09C:;
    sp = sp - 16;
    s1 = 0x81540000u;
    s1 = s1 | 0xd073;
    s0 = a0 + 0;
    a1 = LD32(a0+156);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3B0C0;
L_08A3B0C0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B0C8;
L_08A3B0C8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3B0E4; }
    goto L_08A3B0D0;
L_08A3B0D0:;
    goto L_08A3B0D4;
L_08A3B0D4:;
    sp = sp + 16;
    return;
L_08A3B0E4:;
    { rv_t r_ = func_08A38508(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B0EC;
L_08A3B0EC:;
    v1 = LD32(v0+44);
    v0 = D_08C2933C - (-27844);
    s0 = v0 - 27844;
    a1 = LD32(s0+300);
    v0 = 0xfc9d0000u;
    v1 = v1 ^ 0x3;
    v0 = v0 | 0x4fb7;
    if (v1 != 0) s1 = v0;
    a1 = a1 < 0x1u;
    a0 = s1 + 0;
    v0 = D_08C2D8CD - (-10035);
    ST8(v0-10035, a1);
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B120;
L_08A3B120:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3B14C; }
    goto L_08A3B128;
L_08A3B128:;
    a0 = s1 + 0;
    goto L_08A3B12C;
L_08A3B12C:;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B138;
L_08A3B138:;
    a0 = s0 + 164;
    a1 = 34;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B144;
L_08A3B144:;
    goto L_08A3B0D4;
L_08A3B14C:;
    v0 = LD32(v0);
    v1 = D_08AEFBB4 - (-1100);
    a1 = LD32(v0+12);
    t_ = a1;
    f12 = BITSF(LD32(v1-1100));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B160;
L_08A3B160:;
    a0 = s1 + 0;
    goto L_08A3B12C;
}

/* 08A3B168 */
void func_08A3B168(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_08A3B168:;
    sp = sp - 352;
    v0 = LD_U8(a0+36);
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A3B190; }
    goto L_08A3B180;
L_08A3B180:;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3B1B4; }
    goto L_08A3B18C;
L_08A3B18C:;
    a1 = 1;
    goto L_08A3B190;
L_08A3B190:;
    ST8(a0+58, a1);
    v0 = D_08B1CA20 - (-13792);
    v1 = LD_U8(v0-13792);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(a0+57, a1); goto L_08A3B1C0; }
    goto L_08A3B1A4;
L_08A3B1A4:;
    ST8(a0+57, 0);
    goto L_08A3B1A8;
L_08A3B1A8:;
    a0 = 1;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B1B0;
L_08A3B1B0:;
    goto L_08A3B1B4;
L_08A3B1B4:;
    sp = sp + 352;
    return;
L_08A3B1C0:;
    a1 = a0 + 0;
    a0 = sp + 0;
    func_08A37D04(a0, a1);
    goto L_08A3B1CC;
L_08A3B1CC:;
    v0 = D_08C2933C - (-27844);
    s0 = v0 - 27844;
    a0 = s0 + 1736;
    a1 = sp + 0;
    a2 = 324;
    ST8(sp, 0);
    v0 = func_088F86C8(a0, a1, a2);
    goto L_08A3B1E8;
L_08A3B1E8:;
    a0 = 0 < v0;
    v0 = LD_U8(s0+6);
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A3B204; }
    goto L_08A3B1FC;
L_08A3B1FC:;
    cnd_ = a0 == 0;
    if (cnd_) { ST8(a1+6, v1); goto L_08A3B20C; }
    goto L_08A3B204;
L_08A3B204:;
    v1 = 1;
    ST8(a1+6, v1);
    goto L_08A3B20C;
L_08A3B20C:;
    a2 = sp + 0;
    a3 = s0 + 1736;
    t0 = sp + 320;
    goto L_08A3B218;
L_08A3B218:;
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
    if (cnd_) { goto L_08A3B218; }
    goto L_08A3B244;
L_08A3B244:;
    v0 = LD32(a2);
    ST32(a3, v0);
    goto L_08A3B1A8;
}

/* 08A3B250 */
void func_08A3B250(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B250:;
    v0 = 1;
    ST8(a0+105, v0);
    a0 = 0x4a950000u;
    sp = sp - 16;
    v1 = (u32)-1;
    a0 = a0 | 0xdb6b;
    a1 = 1;
    a2 = 0 + 0;
    v0 = D_08B1C300 - (-15616);
    ST32(v0-15616, v1);
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B280;
L_08A3B280:;
    sp = sp + 16;
    return;
}

/* 08A3B28C */
void func_08A3B28C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B28C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+12);
    v0 = func_08A3B2C0(a0, a1);
    goto L_08A3B2A4;
L_08A3B2A4:;
    v1 = v0 ^ 0x11;
    if (v1 == 0) v0 = 0;
    ST32(s0+60, v0);
    sp = sp + 16;
    return;
}

/* 08A3B2C0 */
u32 func_08A3B2C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A3B2C0:;
    sp = sp - 48;
    s3 = 1;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_08A3B2EC;
L_08A3B2EC:;
    a0 = s2 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B2F4;
L_08A3B2F4:;
    v1 = LD32(v0);
    ST32(sp, v1);
    a1 = LD32(v0+4);
    a0 = LD_U8(sp);
    ST32(sp+4, a1);
    v1 = LD32(v0+8);
    cnd_ = a0 == 0;
    ST32(sp+8, v1);
    if (cnd_) { goto L_08A3B32C; }
    goto L_08A3B314;
L_08A3B314:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A3B35C; }
    goto L_08A3B31C;
L_08A3B31C:;
    cnd_ = s1 != s3;
    v0 = 17;
    if (cnd_) { goto L_08A3B340; }
    goto L_08A3B324;
L_08A3B324:;
    cnd_ = a1 == s1;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A3B340; }
    goto L_08A3B32C;
L_08A3B32C:;
    s0 = s0 + 1;
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3B2EC; }
    goto L_08A3B33C;
L_08A3B33C:;
    v0 = 17;
    goto L_08A3B340;
L_08A3B340:;
    goto L_08A3B344;
L_08A3B344:;
    sp = sp + 48;
    return v0;
L_08A3B35C:;
    cnd_ = a1 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A3B32C; }
    goto L_08A3B364;
L_08A3B364:;
    goto L_08A3B344;
}

/* 08A3B36C */
u32 func_08A3B36C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B36C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+60);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B384;
L_08A3B384:;
    v0 = LD32(v0+4);
    v1 = LD32(s0+12);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 08A3B3A4 */
u32 func_08A3B3A4(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B3A4:;
    sp = sp - 16;
    a1 = LD32(a0+60);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B3B4;
L_08A3B3B4:;
    v0 = LD32(v0+8);
    v0 = v0 < 0xbu;
    sp = sp + 16;
    return v0;
}

/* 08A3B3C8 */
u32 func_08A3B3C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B3C8:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a0+60);
    a1 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B3E8;
L_08A3B3E8:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s1 = LD32(v0+8);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B3F8;
L_08A3B3F8:;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3B428; }
    goto L_08A3B404;
L_08A3B404:;
    v0 = func_08A43528();
    goto L_08A3B40C;
L_08A3B40C:;
    v0 = s1 < v0;
    goto L_08A3B410;
L_08A3B410:;
    v0 = v0 ^ 0x1;
    sp = sp + 16;
    return v0;
L_08A3B428:;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B430;
L_08A3B430:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A3B438;
L_08A3B438:;
    v0 = s1 < v0;
    goto L_08A3B410;
}

/* 08A3B440 */
u32 func_08A3B440(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B440:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = 44;
    a0 = LD32(a0+60);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a0 = lo;
    a0 = a0 + v0;
    v1 = LD32(a0+28);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3B4C0; }
    goto L_08A3B480;
L_08A3B480:;
    s2 = a0 + 0;
    a1 = s0 + 0;
    goto L_08A3B488;
L_08A3B488:;
    a0 = s2 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3B490;
L_08A3B490:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B49C;
L_08A3B49C:;
    v1 = LD32(v0+4);
    v0 = LD32(s1+12);
    s0 = s0 + 1;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_08A3B4C4; }
    goto L_08A3B4B0;
L_08A3B4B0:;
    v0 = LD32(s2+28);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3B488; }
    goto L_08A3B4C0;
L_08A3B4C0:;
    a0 = 0 + 0;
    goto L_08A3B4C4;
L_08A3B4C4:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A3B4E0 */
u32 func_08A3B4E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B4E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+120);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B4F8;
L_08A3B4F8:;
    v0 = LD32(v0+4);
    v1 = LD32(s0+12);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 08A3B518 */
u32 func_08A3B518(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B518:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a0+120);
    a1 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B538;
L_08A3B538:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s1 = LD32(v0+8);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3B548;
L_08A3B548:;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3B578; }
    goto L_08A3B554;
L_08A3B554:;
    v0 = func_08A43528();
    goto L_08A3B55C;
L_08A3B55C:;
    v0 = s1 < v0;
    goto L_08A3B560;
L_08A3B560:;
    v0 = v0 ^ 0x1;
    sp = sp + 16;
    return v0;
L_08A3B578:;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B580;
L_08A3B580:;
    a0 = v0 + 0;
    v0 = func_08A3BEB8(a0);
    goto L_08A3B588;
L_08A3B588:;
    v0 = s1 < v0;
    goto L_08A3B560;
}

/* 08A3B590 */
void func_08A3B590(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A3B590:;
    sp = sp - 48;
    fp = 2;
    s7 = 0 + 0;
    s6 = 0 + 0;
    s1 = a0 + 0;
    goto L_08A3B5CC;
L_08A3B5CC:;
    s0 = LD32(s1+8);
    a1 = s6 + 0;
    a0 = s1 + 0;
    s0 = s0 + s7;
    s3 = LD32(s0+4);
    s2 = LD32(s0+8);
    v0 = func_08A385C4(a0, a1);
    goto L_08A3B5E8;
L_08A3B5E8:;
    s5 = 76;
    s4 = v0 < 0x1u;
    cnd_ = v0 == fp;
    ST32(s0, v0);
    if (cnd_) { goto L_08A3B6C8; }
    goto L_08A3B5F8;
L_08A3B5F8:;
    { s64 p_ = (s64)(s32)v0 * (s32)s5; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s1);
    s0 = lo;
    v0 = v0 + s0;
    a0 = LD32(v0+44);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B610;
L_08A3B610:;
    cnd_ = v0 != 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_08A3B690; }
    goto L_08A3B618;
L_08A3B618:;
    v0 = 1;
    { s64 p_ = (s64)(s32)s4 * (s32)s5; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = s0 + v1;
    v1 = s3 + v1;
    ST8(v1+64, v0);
    a0 = lo;
    v0 = LD32(s1);
    v0 = a0 + v0;
    v0 = s2 + v0;
    ST8(v0+64, 0);
    v1 = LD32(s1);
    a0 = a0 + v1;
    a0 = s2 + a0;
    goto L_08A3B64C;
L_08A3B64C:;
    ST8(a0+68, 0);
    goto L_08A3B650;
L_08A3B650:;
    s6 = s6 + 1;
    v0 = s6 < 0x4u;
    cnd_ = v0 != 0;
    s7 = s7 + 12;
    if (cnd_) { goto L_08A3B5CC; }
    goto L_08A3B660;
L_08A3B660:;
    sp = sp + 48;
    return;
L_08A3B690:;
    v0 = 1;
    { s64 p_ = (s64)(s32)s4 * (s32)s5; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = s0 + v1;
    v1 = s2 + v1;
    ST8(v1+64, v0);
    a0 = lo;
    v0 = LD32(s1);
    v0 = a0 + v0;
    v0 = s3 + v0;
    ST8(v0+64, 0);
    v1 = LD32(s1);
    a0 = a0 + v1;
    a0 = s3 + a0;
    goto L_08A3B64C;
L_08A3B6C8:;
    v0 = LD32(s1);
    a0 = LD32(v0+44);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3B6D4;
L_08A3B6D4:;
    cnd_ = v0 != 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08A3B70C; }
    goto L_08A3B6DC;
L_08A3B6DC:;
    v0 = s3 + v0;
    ST8(v0+64, 0);
    v1 = LD32(s1);
    v1 = v1 + s2;
    ST8(v1+140, 0);
    v0 = LD32(s1);
    v0 = s3 + v0;
    ST8(v0+68, 0);
    v1 = LD32(s1);
    v1 = v1 + s2;
    goto L_08A3B704;
L_08A3B704:;
    ST8(v1+144, 0);
    goto L_08A3B650;
L_08A3B70C:;
    v0 = s2 + v0;
    ST8(v0+64, 0);
    v1 = LD32(s1);
    v1 = v1 + s3;
    ST8(v1+140, 0);
    v0 = LD32(s1);
    v0 = s2 + v0;
    ST8(v0+68, 0);
    v1 = LD32(s1);
    v1 = v1 + s3;
    goto L_08A3B704;
}

/* 08A3B738 */
void func_08A3B738(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B738:;
    a0 = D_08AE4234 - (16948);
    a1 = ((u32)(uintptr_t)func_08A3B894) - (-18284);
    sp = sp - 16;
    a0 = a0 + 16948;
    a1 = a1 - 18284;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A3B75C;
L_08A3B75C:;
    a0 = D_08AE4268 - (17000);
    a1 = ((u32)(uintptr_t)func_08A3B908) - (-18168);
    a0 = a0 + 17000;
    a1 = a1 - 18168;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3B778;
L_08A3B778:;
    a0 = D_08AE4298 - (17048);
    a1 = ((u32)(uintptr_t)func_08A3B97C) - (-18052);
    a0 = a0 + 17048;
    a1 = a1 - 18052;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3B794;
L_08A3B794:;
    a0 = D_08AE42C4 - (17092);
    a1 = ((u32)(uintptr_t)func_08A3B9F0) - (-17936);
    a0 = a0 + 17092;
    a1 = a1 - 17936;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3B7B0;
L_08A3B7B0:;
    a0 = D_08AE42F0 - (17136);
    a1 = ((u32)(uintptr_t)func_08A3BA64) - (-17820);
    a0 = a0 + 17136;
    a1 = a1 - 17820;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3B7CC;
L_08A3B7CC:;
    a0 = D_08AE4320 - (17184);
    a1 = D_08B1C2EC - (-15636);
    t0 = 1;
    t1 = 0 + 0;
    a0 = a0 + 17184;
    a1 = a1 - 15636;
    a2 = 2;
    a3 = 4;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A3B7F0;
L_08A3B7F0:;
    a0 = D_08AE434C - (17228);
    a1 = D_08C2D8CE - (-10034);
    a0 = a0 + 17228;
    a1 = a1 - 10034;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B80C;
L_08A3B80C:;
    a3 = 0x7fff0000u;
    a0 = D_08AE4384 - (17284);
    a1 = D_08B1C304 - (-15612);
    t0 = 1;
    t1 = 0 + 0;
    a0 = a0 + 17284;
    a1 = a1 - 15612;
    a2 = 0x80000000u;
    a3 = a3 | 0xffff;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A3B834;
L_08A3B834:;
    a0 = D_08AE43B0 - (17328);
    a1 = ((u32)(uintptr_t)func_08A3BAAC) - (-17748);
    a0 = a0 + 17328;
    a1 = a1 - 17748;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3B850;
L_08A3B850:;
    a0 = D_08AE43D8 - (17368);
    a1 = ((u32)(uintptr_t)func_08A3BAF4) - (-17676);
    a0 = a0 + 17368;
    a1 = a1 - 17676;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3B86C;
L_08A3B86C:;
    a0 = D_08AE4404 - (17412);
    a1 = D_08C2D8CD - (-10035);
    a0 = a0 + 17412;
    a1 = a1 - 10035;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B888;
L_08A3B888:;
    sp = sp + 16;
    return;
}

/* 08A3B894 */
rv_t func_08A3B894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B894:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE4444 - (17476);
    a0 = a0 + 17476;
    cnd_ = a2 != 0;
    v0 = a1 & 0xff;
    if (cnd_) { goto L_08A3B8C0; }
    goto L_08A3B8B8;
L_08A3B8B8:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3B8E0; }
    goto L_08A3B8C0;
L_08A3B8C0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B8C8;
L_08A3B8C8:;
    a0 = 1;
    goto L_08A3B8CC;
L_08A3B8CC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3B8E0:;
    a0 = 0 + 0;
    { rv_t r_ = func_08A3BB3C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B8E8;
L_08A3B8E8:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3B8CC; }
    goto L_08A3B8F0;
L_08A3B8F0:;
    v0 = D_08B1C2F0 - (-15632);
    ST32(v0-15632, s0);
    v1 = 1;
    v0 = D_08C2D8CC - (-10036);
    ST8(v0-10036, v1);
    goto L_08A3B8C8;
}

/* 08A3B908 */
rv_t func_08A3B908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B908:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE4478 - (17528);
    a0 = a0 + 17528;
    cnd_ = a2 != 0;
    v0 = a1 & 0xff;
    if (cnd_) { goto L_08A3B934; }
    goto L_08A3B92C;
L_08A3B92C:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3B954; }
    goto L_08A3B934;
L_08A3B934:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B93C;
L_08A3B93C:;
    a0 = 1;
    goto L_08A3B940;
L_08A3B940:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3B954:;
    a0 = 1;
    { rv_t r_ = func_08A3BB3C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B95C;
L_08A3B95C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3B940; }
    goto L_08A3B964;
L_08A3B964:;
    v0 = D_08B1C2F4 - (-15628);
    ST32(v0-15628, s0);
    v1 = 1;
    v0 = D_08C2D8CC - (-10036);
    ST8(v0-10036, v1);
    goto L_08A3B93C;
}

/* 08A3B97C */
rv_t func_08A3B97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B97C:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE44AC - (17580);
    a0 = a0 + 17580;
    cnd_ = a2 != 0;
    v0 = a1 & 0xff;
    if (cnd_) { goto L_08A3B9A8; }
    goto L_08A3B9A0;
L_08A3B9A0:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3B9C8; }
    goto L_08A3B9A8;
L_08A3B9A8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B9B0;
L_08A3B9B0:;
    a0 = 1;
    goto L_08A3B9B4;
L_08A3B9B4:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3B9C8:;
    a0 = 2;
    { rv_t r_ = func_08A3BB3C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3B9D0;
L_08A3B9D0:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3B9B4; }
    goto L_08A3B9D8;
L_08A3B9D8:;
    v0 = D_08B1C2F8 - (-15624);
    ST32(v0-15624, s0);
    v1 = 1;
    v0 = D_08C2D8CC - (-10036);
    ST8(v0-10036, v1);
    goto L_08A3B9B0;
}

/* 08A3B9F0 */
rv_t func_08A3B9F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3B9F0:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    a0 = D_08AE44DC - (17628);
    a0 = a0 + 17628;
    cnd_ = a2 != 0;
    v0 = a1 & 0xff;
    if (cnd_) { goto L_08A3BA1C; }
    goto L_08A3BA14;
L_08A3BA14:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3BA3C; }
    goto L_08A3BA1C;
L_08A3BA1C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BA24;
L_08A3BA24:;
    a0 = 1;
    goto L_08A3BA28;
L_08A3BA28:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3BA3C:;
    a0 = 3;
    { rv_t r_ = func_08A3BB3C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BA44;
L_08A3BA44:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3BA28; }
    goto L_08A3BA4C;
L_08A3BA4C:;
    v0 = D_08B1C2FC - (-15620);
    ST32(v0-15620, s0);
    v1 = 1;
    v0 = D_08C2D8CC - (-10036);
    ST8(v0-10036, v1);
    goto L_08A3BA24;
}

/* 08A3BA64 */
rv_t func_08A3BA64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BA64:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AE4508 - (17672);
    a0 = a0 + 17672;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A3BA8C; }
    goto L_08A3BA84;
L_08A3BA84:;
    cnd_ = a1 == 0;
    v0 = D_08B1C2EC - (-15636);
    if (cnd_) { goto L_08A3BAA4; }
    goto L_08A3BA8C;
L_08A3BA8C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BA94;
L_08A3BA94:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3BAA4:;
    ST32(v0-15636, v1);
    goto L_08A3BA94;
}

/* 08A3BAAC */
rv_t func_08A3BAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BAAC:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AE4534 - (17716);
    a0 = a0 + 17716;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A3BAD4; }
    goto L_08A3BACC;
L_08A3BACC:;
    cnd_ = a1 == 0;
    v0 = D_08B1C304 - (-15612);
    if (cnd_) { goto L_08A3BAEC; }
    goto L_08A3BAD4;
L_08A3BAD4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BADC;
L_08A3BADC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3BAEC:;
    ST32(v0-15612, v1);
    goto L_08A3BADC;
}

/* 08A3BAF4 */
rv_t func_08A3BAF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BAF4:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AE4560 - (17760);
    a0 = a0 + 17760;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A3BB1C; }
    goto L_08A3BB14;
L_08A3BB14:;
    cnd_ = a1 == 0;
    v0 = D_08B1C300 - (-15616);
    if (cnd_) { goto L_08A3BB34; }
    goto L_08A3BB1C;
L_08A3BB1C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BB24;
L_08A3BB24:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3BB34:;
    ST32(v0-15616, v1);
    goto L_08A3BB24;
}

/* 08A3BB3C */
rv_t func_08A3BB3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3BB3C:;
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_08A3C5CC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3BB60;
L_08A3BB60:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3BB7C; }
    goto L_08A3BB6C;
L_08A3BB6C:;
    v1 = LD32(v0+16);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = D_08C2D8CE - (-10034);
    if (cnd_) { goto L_08A3BB9C; }
    goto L_08A3BB7C;
L_08A3BB7C:;
    goto L_08A3BB80;
L_08A3BB80:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A3BB9C:;
    v1 = LD_U8(v0-10034);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A3BB80; }
    goto L_08A3BBA8;
L_08A3BBA8:;
    cnd_ = (s32)s1 < 0;
    v0 = (s32)s2 < 3;
    if (cnd_) { goto L_08A3BB80; }
    goto L_08A3BBB0;
L_08A3BBB0:;
    cnd_ = v0 != 0;
    v0 = (s32)s1 < 4;
    if (cnd_) { goto L_08A3BC90; }
    goto L_08A3BBB8;
L_08A3BBB8:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3BB80; }
    goto L_08A3BBC0;
L_08A3BBC0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A38508(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BBC8;
L_08A3BBC8:;
    v0 = s1 + v0;
    v1 = LD_U8(v0+64);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3BB7C; }
    goto L_08A3BBD8;
L_08A3BBD8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A38508(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BBE0;
L_08A3BBE0:;
    v0 = s1 + v0;
    v1 = LD_U8(v0+68);
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3BB7C; }
    goto L_08A3BBF0;
L_08A3BBF0:;
    a0 = s1 + 0;
    v0 = func_08A43360(a0);
    goto L_08A3BBF8;
L_08A3BBF8:;
    s1 = v0 + 0;
    { rv_t r_ = func_08A4344C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BC00;
L_08A3BC00:;
    a0 = s0 + 0;
    goto L_08A3BC04;
L_08A3BC04:;
    f20 = f0;
    { rv_t r_ = func_08A38508(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BC0C;
L_08A3BC0C:;
    v1 = LD_U8(v0+70);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A3BC5C; }
    goto L_08A3BC18;
L_08A3BC18:;
    f1 = BITSF(s1);
    cnd_ = (s32)s1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A3BC74; }
    goto L_08A3BC24;
L_08A3BC24:;
    f0 = f0 * f20;
    v0 = D_08AEFBB8 - (-1096);
    f1 = BITSF(LD32(v0-1096));
    f2 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f0, 14);
    v1 = FBITS(f2);
    cnd_ = !fcc;
    if (cnd_) { s1 = s1 - v1; goto L_08A3BC5C; }
    goto L_08A3BC44;
L_08A3BC44:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    s1 = s1 - v1;
    goto L_08A3BC5C;
L_08A3BC5C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A38508(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BC64;
L_08A3BC64:;
    v1 = LD32(v0+48);
    v1 = v1 < s1;
    a0 = v1 ^ 0x1;
    goto L_08A3BB7C;
L_08A3BC74:;
    v0 = s1 & 0x1;
    v1 = s1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A3BC24;
L_08A3BC90:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A38508(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BC98;
L_08A3BC98:;
    v1 = s2 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+52);
    v0 = v0 + 1;
    cnd_ = s1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3BB7C; }
    goto L_08A3BCB0;
L_08A3BCB0:;
    a1 = s1 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3BCBC;
L_08A3BCBC:;
    s1 = v0 + 0;
    { rv_t r_ = func_08A43404(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BCC4;
L_08A3BCC4:;
    a0 = s0 + 0;
    goto L_08A3BC04;
}

/* 08A3BCCC */
u32 func_08A3BCCC(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08A3BCCC:;
    a1 = a1 << 2;
    a1 = a1 + a0;
    v0 = LD32(a1+8);
    return v0;
}

/* 08A3BCDC */
void func_08A3BCDC(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08A3BCDC:;
    v0 = LD32(a0+8);
    v0 = v0 + a1;
    ST32(a0+8, v0);
    return;
}

/* 08A3BCEC */
void func_08A3BCEC(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08A3BCEC:;
    v0 = LD32(a0+8);
    v0 = v0 - a1;
    ST32(a0+8, v0);
    return;
}

/* 08A3BCFC */
void func_08A3BCFC(u32 a0, u32 a1, u32 a2)
{
L_08A3BCFC:;
    ST32(a0+8, a2);
    ST32(a0+4, a1);
    return;
}

/* 08A3BD08 */
void func_08A3BD08(u32 a0)
{
    u32 a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BD08:;
    ST32(a0+72, 0);
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 0 + 0;
    func_08A3BD2C(a0, a1, a2);
    goto L_08A3BD20;
L_08A3BD20:;
    sp = sp + 16;
    return;
}

/* 08A3BD2C */
void func_08A3BD2C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BD2C:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A3BD50; }
    goto L_08A3BD4C;
L_08A3BD4C:;
    ST16(a0, 0);
    goto L_08A3BD50;
L_08A3BD50:;
    v0 = 4;
    ST32(s0+44, v0);
    v0 = func_08A435B0();
    goto L_08A3BD5C;
L_08A3BD5C:;
    ST32(s0+48, v0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    cnd_ = s1 == 0;
    ST32(s0+60, 0);
    if (cnd_) { goto L_08A3BD88; }
    goto L_08A3BD78;
L_08A3BD78:;
    v0 = LD32(s0+72);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3BD9C; }
    goto L_08A3BD84;
L_08A3BD84:;
    ST32(s0+72, 0);
    goto L_08A3BD88;
L_08A3BD88:;
    sp = sp + 16;
    return;
L_08A3BD9C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BDAC;
L_08A3BDAC:;
    ST32(s0+72, 0);
    goto L_08A3BD88;
}

/* 08A3BDB4 */
void func_08A3BDB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BDB4:;
    sp = sp - 16;
    v0 = LD32(a0+72);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3BDD4; }
    goto L_08A3BDC8;
L_08A3BDC8:;
    goto L_08A3BDCC;
L_08A3BDCC:;
    sp = sp + 16;
    return;
L_08A3BDD4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BDE4;
L_08A3BDE4:;
    goto L_08A3BDCC;
}

/* 08A3BDEC */
rv_t func_08A3BDEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BDEC:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 & 0xff;
    v0 = LD32(a0+72);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3BE78; }
    goto L_08A3BE18;
L_08A3BE18:;
    cnd_ = s0 == 0;
    a0 = 24;
    if (cnd_) { goto L_08A3BE54; }
    goto L_08A3BE20;
L_08A3BE20:;
    a0 = 64;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BE28;
L_08A3BE28:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A423BC(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3BE38;
L_08A3BE38:;
    ST32(s1+72, s0);
    goto L_08A3BE3C;
L_08A3BE3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3BE54:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BE5C;
L_08A3BE5C:;
    v1 = D_08B153B8 - (21432);
    v1 = v1 + 21432;
    ST32(s1+72, v0);
    ST32(v0+4, s2);
    ST32(v0, v1);
    ST32(v0+8, 0);
    goto L_08A3BE3C;
L_08A3BE78:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BE88;
L_08A3BE88:;
    goto L_08A3BE18;
}

/* 08A3BE90 */
rv_t func_08A3BE90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BE90:;
    sp = sp - 16;
    a0 = LD32(a0+72);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BEAC;
L_08A3BEAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A3BEB8 */
u32 func_08A3BEB8(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BEB8:;
    sp = sp - 16;
    a0 = LD32(a0+52);
    v0 = func_08A43494(a0);
    goto L_08A3BEC8;
L_08A3BEC8:;
    sp = sp + 16;
    return v0;
}

/* 08A3BED4 */
void func_08A3BED4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BED4:;
    sp = sp - 16;
    a0 = LD32(a0+72);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BEF0;
L_08A3BEF0:;
    sp = sp + 16;
    return;
}

/* 08A3BEFC */
rv_t func_08A3BEFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A3BEFC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2D89C - (-10084);
    t1 = D_08C2D8AC - (-10068);
    t2 = D_08C2D8BC - (-10052);
    a1 = a1 & a0;
    v1 = t0 - 10084;
    a2 = t1 - 10068;
    cnd_ = a1 == 0;
    a3 = t2 - 10052;
    if (cnd_) { goto L_08A3BFB4; }
    goto L_08A3BF2C;
L_08A3BF2C:;
    v0 = D_08AEFBBC - (-1092);
    f4 = BITSF(LD32(v0-1092));
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
    ST32(t0-10084, FBITS(f2));
    ST32(t1-10068, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-10052, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A3BFB4;
L_08A3BFB4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A3BFBC */
rv_t func_08A3BFBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BFBC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A3BEFC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3BFD0;
L_08A3BFD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A3BFDC */
rv_t func_08A3BFDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3BFDC:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE4584 - (17796);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 17796;
    if (cnd_) { goto L_08A3C028; }
    goto L_08A3BFF8;
L_08A3BFF8:;
    v0 = D_08C2D910 - (-9968);
    v1 = LD_U8(v0-9968);
    cnd_ = v1 == 0;
    v0 = D_08C2D900 - (-9984);
    if (cnd_) { goto L_08A3C018; }
    goto L_08A3C008;
L_08A3C008:;
    goto L_08A3C00C;
L_08A3C00C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3C018:;
    a0 = LD32(v0-9984);
    { rv_t r_ = func_08A376E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C020;
L_08A3C020:;
    goto L_08A3C00C;
L_08A3C028:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C030;
L_08A3C030:;
    goto L_08A3C00C;
}

/* 08A3C038 */
u32 func_08A3C038(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C038:;
    sp = sp - 16;
    s2 = D_08C2D900 - (-9984);
    s1 = a0 + 0;
    s0 = 0 + 0;
    a0 = LD32(s2-9984);
    goto L_08A3C05C;
L_08A3C05C:;
    a1 = s0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3C064;
L_08A3C064:;
    v1 = LD32(v0+44);
    cnd_ = s1 == v1;
    a0 = LD32(s2-9984);
    if (cnd_) { goto L_08A3C098; }
    goto L_08A3C070;
L_08A3C070:;
    s0 = s0 + 1;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3C05C; }
    goto L_08A3C080;
L_08A3C080:;
    goto L_08A3C084;
L_08A3C084:;
    sp = sp + 16;
    return v0;
L_08A3C098:;
    a1 = s0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3C0A0;
L_08A3C0A0:;
    goto L_08A3C084;
}

/* 08A3C0A8 */
u32 func_08A3C0A8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C0A8:;
    sp = sp - 16;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3C0B8;
L_08A3C0B8:;
    a0 = v0 + 0;
    v0 = func_08A3C038(a0);
    goto L_08A3C0C0;
L_08A3C0C0:;
    sp = sp + 16;
    return v0;
}

/* 08A3C0CC */
void func_08A3C0CC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C0CC:;
    sp = sp - 16;
    func_08A430DC();
    goto L_08A3C0DC;
L_08A3C0DC:;
    a0 = 176;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C0E4;
L_08A3C0E4:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08A37514(a0);
    goto L_08A3C0F0;
L_08A3C0F0:;
    v0 = D_08C2D900 - (-9984);
    ST32(v0-9984, s0);
    v1 = D_08C2D904 - (-9980);
    ST8(v1-9980, 0);
    sp = sp + 16;
    return;
}

/* 08A3C110 */
void func_08A3C110(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3C110:;
    a0 = D_08AE45C0 - (17856);
    a1 = ((u32)(uintptr_t)func_08A3BFDC) - (-16420);
    sp = sp - 32;
    a0 = a0 + 17856;
    a1 = a1 - 16420;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08B1C2E0 - (-15648);
    s0 = s0 - 15648;
    f21 = BITSF(0);
    func_08897664(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A3C14C;
L_08A3C14C:;
    v1 = D_08AEFBC0 - (-1088);
    f20 = BITSF(LD32(v1-1088));
    a0 = D_08AE45FC - (17916);
    a1 = D_08B1C308 - (-15608);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 17916;
    a1 = a1 - 15608;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C178;
L_08A3C178:;
    a0 = D_08AE4630 - (17968);
    a1 = D_08B1C30C - (-15604);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 17968;
    a1 = a1 - 15604;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C19C;
L_08A3C19C:;
    a0 = D_08AE4674 - (18036);
    a1 = D_08B1C310 - (-15600);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18036;
    a1 = a1 - 15600;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C1C0;
L_08A3C1C0:;
    a0 = D_08AE469C - (18076);
    a1 = D_08B1C314 - (-15596);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18076;
    a1 = a1 - 15596;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C1E4;
L_08A3C1E4:;
    a0 = D_08AE46CC - (18124);
    a1 = D_08B1C318 - (-15592);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18124;
    a1 = a1 - 15592;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C208;
L_08A3C208:;
    a0 = D_08AE46FC - (18172);
    a1 = D_08B1C31C - (-15588);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18172;
    a1 = a1 - 15588;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C22C;
L_08A3C22C:;
    a0 = D_08AE472C - (18220);
    a1 = D_08B1C320 - (-15584);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18220;
    a1 = a1 - 15584;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C250;
L_08A3C250:;
    a0 = D_08AE4758 - (18264);
    a1 = D_08B1C324 - (-15580);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18264;
    a1 = a1 - 15580;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C274;
L_08A3C274:;
    a0 = D_08AE478C - (18316);
    a1 = D_08B1C328 - (-15576);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18316;
    a1 = a1 - 15576;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C298;
L_08A3C298:;
    a0 = D_08AE47B4 - (18356);
    a1 = D_08B1C32C - (-15572);
    f13 = f20;
    f12 = f21;
    a0 = a0 + 18356;
    a1 = a1 - 15572;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C2BC;
L_08A3C2BC:;
    v0 = func_08A43528();
    goto L_08A3C2C4;
L_08A3C2C4:;
    a0 = D_08AE47E0 - (18400);
    a1 = D_08B1C330 - (-15568);
    t0 = 1;
    t1 = 0 + 0;
    a0 = a0 + 18400;
    a1 = a1 - 15568;
    a3 = v0 + 0;
    a2 = 10;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A3C2E8;
L_08A3C2E8:;
    a0 = D_08AE4820 - (18464);
    a1 = D_08C2DD80 - (-8832);
    a0 = a0 + 18464;
    a1 = a1 - 8832;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C304;
L_08A3C304:;
    v1 = D_08AEFBC4 - (-1084);
    f20 = BITSF(LD32(v1-1084));
    a0 = D_08AE486C - (18540);
    a1 = D_08B1C334 - (-15564);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18540;
    a1 = a1 - 15564;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C330;
L_08A3C330:;
    a0 = D_08AE48B0 - (18608);
    a1 = D_08C2DD81 - (-8831);
    a0 = a0 + 18608;
    a1 = a1 - 8831;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C34C;
L_08A3C34C:;
    a0 = D_08AE48E4 - (18660);
    a1 = D_08B1C338 - (-15560);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18660;
    a1 = a1 - 15560;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C370;
L_08A3C370:;
    a0 = D_08AE4910 - (18704);
    a1 = D_08C2DD82 - (-8830);
    a0 = a0 + 18704;
    a1 = a1 - 8830;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C38C;
L_08A3C38C:;
    a0 = D_08AE4958 - (18776);
    a1 = D_08B1C33C - (-15556);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18776;
    a1 = a1 - 15556;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C3B0;
L_08A3C3B0:;
    a0 = D_08AE499C - (18844);
    a1 = D_08C2DD83 - (-8829);
    a0 = a0 + 18844;
    a1 = a1 - 8829;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C3CC;
L_08A3C3CC:;
    a0 = D_08AE49E4 - (18916);
    a1 = D_08B1C340 - (-15552);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 18916;
    a1 = a1 - 15552;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C3F0;
L_08A3C3F0:;
    a0 = D_08AE4A28 - (18984);
    a1 = D_08C2DD85 - (-8827);
    a0 = a0 + 18984;
    a1 = a1 - 8827;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C40C;
L_08A3C40C:;
    a0 = D_08AE4A64 - (19044);
    a1 = D_08B1C344 - (-15548);
    f12 = f21;
    f13 = f20;
    a0 = a0 + 19044;
    a1 = a1 - 15548;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C430;
L_08A3C430:;
    a0 = D_08AE4A9C - (19100);
    a1 = D_08B1C348 - (-15544);
    f13 = f20;
    f12 = f21;
    a0 = a0 + 19100;
    a1 = a1 - 15544;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C454;
L_08A3C454:;
    v0 = D_08AEFBC8 - (-1080);
    f13 = BITSF(LD32(v0-1080));
    a0 = D_08AE4AD8 - (19160);
    a1 = D_08B1C2D8 - (-15656);
    f12 = f21;
    a0 = a0 + 19160;
    a1 = a1 - 15656;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C47C;
L_08A3C47C:;
    v1 = D_08AEFBCC - (-1076);
    f20 = BITSF(LD32(v1-1076));
    a0 = D_08AE4B14 - (19220);
    a1 = s0 + 0;
    f12 = f21;
    f13 = f20;
    a0 = a0 + 19220;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C4A4;
L_08A3C4A4:;
    a0 = D_08AE4B4C - (19276);
    a1 = s0 + 4;
    f12 = f21;
    f13 = f20;
    a0 = a0 + 19276;
    a2 = 1;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C4C4;
L_08A3C4C4:;
    s0 = s0 + 8;
    a0 = D_08AE4B84 - (19332);
    f12 = f21;
    f13 = f20;
    a1 = s0 + 0;
    a0 = a0 + 19332;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08AE4BBC - (19388);
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A3C4EC;
L_08A3C4EC:;
    s0 = s0 + 19388;
    a1 = D_08C2D904 - (-9980);
    a1 = a1 - 9980;
    a0 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3C508;
L_08A3C508:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A3C510;
L_08A3C510:;
    sp = sp + 32;
    return;
}

/* 08A3C528 */
void func_08A3C528(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C528:;
    sp = sp - 16;
    v0 = D_08C2D900 - (-9984);
    s0 = LD32(v0-9984);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3C55C; }
    goto L_08A3C544;
L_08A3C544:;
    func_08A43264();
    goto L_08A3C54C;
L_08A3C54C:;
    sp = sp + 16;
    return;
L_08A3C55C:;
    func_08A37624(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A3C564;
L_08A3C564:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3C56C;
L_08A3C56C:;
    goto L_08A3C544;
}

/* 08A3C574 */
void func_08A3C574(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08A3C574:;
    v0 = D_08C2D900 - (-9984);
    v0 = LD32(v0-9984);
    cnd_ = v0 == 0;
    a0 = a0 & 0xff;
    if (cnd_) { goto L_08A3C588; }
    goto L_08A3C584;
L_08A3C584:;
    ST8(v0+64, a0);
    goto L_08A3C588;
L_08A3C588:;
    return;
}

/* 08A3C590 */
void func_08A3C590(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_08A3C590:;
    v0 = ((u32)(uintptr_t)func_08A3C5C4) - (-14908);
    v0 = v0 - 14908;
    v1 = D_08B307C8 - (1992);
    a2 = 1;
    ST32(v1+1992, v0);
    a0 = D_08C2D904 - (-9980);
    a1 = 1;
    v0 = D_08C2D918 - (-9960);
    v1 = D_08C2D910 - (-9968);
    ST8(a0-9980, a2);
    ST32(v0-9960, a1);
    ST8(v1-9968, a2);
    return;
}

/* 08A3C5C4 */
rv_t func_08A3C5C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A3C5C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A3C5CC */
u64 func_08A3C5CC(void)
{
    u32 v0 = 0, v1 = 0;
L_08A3C5CC:;
    v1 = D_08C2D900 - (-9984);
    v0 = LD32(v1-9984);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A3C5D8 */
void func_08A3C5D8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C5D8:;
    sp = sp - 16;
    func_08A3C6C4(t1, t2, t3);
    goto L_08A3C5E8;
L_08A3C5E8:;
    v0 = D_08C2D914 - (-9964);
    v0 = LD32(v0-9964);
    v1 = v0 < 0x6u;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A3C624; }
    goto L_08A3C5FC;
L_08A3C5FC:;
    v1 = D_08AE4C00 - (19456);
    v0 = v0 << 2;
    v1 = v1 + 19456;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A3C618u: goto L_08A3C618; case 0x08A3C620u: goto L_08A3C620; case 0x08A3C62Cu: goto L_08A3C62C; case 0x08A3C63Cu: goto L_08A3C63C; case 0x08A3C64Cu: goto L_08A3C64C; default: rs_break(0, 0x08a3c610); }
L_08A3C618:;
    func_08A3C7E4();
    goto L_08A3C620;
L_08A3C620:;
    goto L_08A3C624;
L_08A3C624:;
    sp = sp + 16;
    return;
L_08A3C62C:;
    func_08A3C818(0, 0, 0, 0, 0, 0, 0);
    goto L_08A3C634;
L_08A3C634:;
    goto L_08A3C624;
L_08A3C63C:;
    func_08A3C884();
    goto L_08A3C644;
L_08A3C644:;
    goto L_08A3C624;
L_08A3C64C:;
    func_08A3C8C0(0, 0, 0);
    goto L_08A3C654;
L_08A3C654:;
    goto L_08A3C624;
}

/* 08A3C65C */
void func_08A3C65C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C65C:;
    sp = sp - 16;
    v0 = D_08C2D900 - (-9984);
    v1 = D_08C2D904 - (-9980);
    a0 = LD32(v0-9984);
    v0 = LD_U8(v1-9980);
    cnd_ = v0 != 0;
    v0 = D_08C2D910 - (-9968);
    if (cnd_) { goto L_08A3C6A8; }
    goto L_08A3C67C;
L_08A3C67C:;
    v1 = 4;
    v0 = D_08B1BB44 - (-17596);
    ST32(v0-17596, v1);
    a1 = 1;
    v0 = D_08C2D918 - (-9960);
    ST32(v0-9960, a1);
    v1 = D_08C29330 - (-27856);
    v0 = D_08C29334 - (-27852);
    ST32(v1-27856, 0);
    ST32(v0-27852, 0);
    v0 = D_08C2D910 - (-9968);
    goto L_08A3C6A8;
L_08A3C6A8:;
    ST8(v0-9968, 0);
    func_08A3805C(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A3C6B0;
L_08A3C6B0:;
    func_08832344(0, 0, 0);
    goto L_08A3C6B8;
L_08A3C6B8:;
    sp = sp + 16;
    return;
}

/* 08A3C6C4 */
void func_08A3C6C4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C6C4:;
    sp = sp - 16;
    s1 = D_08C2D914 - (-9964);
    s0 = D_08C2D918 - (-9960);
    v0 = LD32(s0-9960);
    v1 = LD32(s1-9964);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08A3C754; }
    goto L_08A3C6E8;
L_08A3C6E8:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0-9960); goto L_08A3C71C; }
    goto L_08A3C6F4;
L_08A3C6F4:;
    v0 = v1 << 2;
    v1 = D_08AE4C18 - (19480);
    v1 = v1 + 19480;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A3C710u: goto L_08A3C710; case 0x08A3C718u: goto L_08A3C718; case 0x08A3C798u: goto L_08A3C798; case 0x08A3C7A8u: goto L_08A3C7A8; case 0x08A3C7B8u: goto L_08A3C7B8; default: rs_break(0, 0x08a3c708); }
L_08A3C710:;
    func_08A3C7F4();
    goto L_08A3C718;
L_08A3C718:;
    v1 = LD32(s0-9960);
    goto L_08A3C71C;
L_08A3C71C:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = LD32(s0-9960);
    if (cnd_) { goto L_08A3C750; }
    goto L_08A3C728;
L_08A3C728:;
    v0 = v1 << 2;
    v1 = D_08AE4C2C - (19500);
    v1 = v1 + 19500;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A3C744u: goto L_08A3C744; case 0x08A3C74Cu: goto L_08A3C74C; case 0x08A3C768u: goto L_08A3C768; case 0x08A3C778u: goto L_08A3C778; case 0x08A3C788u: goto L_08A3C788; default: rs_break(0, 0x08a3c73c); }
L_08A3C744:;
    func_08A3C7C8(t1, t2, t3);
    goto L_08A3C74C;
L_08A3C74C:;
    v0 = LD32(s0-9960);
    goto L_08A3C750;
L_08A3C750:;
    ST32(s1-9964, v0);
    goto L_08A3C754;
L_08A3C754:;
    sp = sp + 16;
    return;
L_08A3C768:;
    func_08A3C7FC(t1, t2, t3);
    goto L_08A3C770;
L_08A3C770:;
    v0 = LD32(s0-9960);
    goto L_08A3C750;
L_08A3C778:;
    func_08A3C85C(t1, t2, t3);
    goto L_08A3C780;
L_08A3C780:;
    v0 = LD32(s0-9960);
    goto L_08A3C750;
L_08A3C788:;
    func_08A3C89C();
    goto L_08A3C790;
L_08A3C790:;
    v0 = LD32(s0-9960);
    goto L_08A3C750;
L_08A3C798:;
    func_08A3C854();
    goto L_08A3C7A0;
L_08A3C7A0:;
    v1 = LD32(s0-9960);
    goto L_08A3C71C;
L_08A3C7A8:;
    func_08A3C894();
    goto L_08A3C7B0;
L_08A3C7B0:;
    v1 = LD32(s0-9960);
    goto L_08A3C71C;
L_08A3C7B8:;
    func_08A3C934();
    goto L_08A3C7C0;
L_08A3C7C0:;
    v1 = LD32(s0-9960);
    goto L_08A3C71C;
}

/* 08A3C7C8 */
void func_08A3C7C8(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C7C8:;
    sp = sp - 16;
    func_08A3C984(t1, t2, t3);
    goto L_08A3C7D8;
L_08A3C7D8:;
    sp = sp + 16;
    return;
}

/* 08A3C7E4 */
void func_08A3C7E4(void)
{
    u32 v0 = 0, v1 = 0;
L_08A3C7E4:;
    v1 = 2;
    v0 = D_08C2D918 - (-9960);
    ST32(v0-9960, v1);
    return;
}

/* 08A3C7F4 */
void func_08A3C7F4(void)
{
L_08A3C7F4:;
    return;
}

/* 08A3C7FC */
void func_08A3C7FC(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C7FC:;
    sp = sp - 16;
    func_08A3C93C(t1, t2, t3);
    goto L_08A3C80C;
L_08A3C80C:;
    sp = sp + 16;
    return;
}

/* 08A3C818 */
void func_08A3C818(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C818:;
    sp = sp - 16;
    v0 = func_08975DC0(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A3C828;
L_08A3C828:;
    cnd_ = v0 != 0;
    v1 = 3;
    if (cnd_) { goto L_08A3C844; }
    goto L_08A3C830;
L_08A3C830:;
    v0 = D_08C2D918 - (-9960);
    ST32(v0-9960, v1);
    goto L_08A3C83C;
L_08A3C83C:;
    sp = sp + 16;
    return;
L_08A3C844:;
    func_08A3C964(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3C84C;
L_08A3C84C:;
    goto L_08A3C83C;
}

/* 08A3C854 */
void func_08A3C854(void)
{
L_08A3C854:;
    return;
}

/* 08A3C85C */
void func_08A3C85C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C85C:;
    sp = sp - 16;
    func_08A3C9C8(t1, t2, t3);
    goto L_08A3C86C;
L_08A3C86C:;
    v0 = D_08C2D900 - (-9984);
    a0 = LD32(v0-9984);
    func_08A38018(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3C878;
L_08A3C878:;
    sp = sp + 16;
    return;
}

/* 08A3C884 */
void func_08A3C884(void)
{
    u32 v0 = 0, v1 = 0;
L_08A3C884:;
    v1 = 4;
    v0 = D_08C2D918 - (-9960);
    ST32(v0-9960, v1);
    return;
}

/* 08A3C894 */
void func_08A3C894(void)
{
L_08A3C894:;
    return;
}

/* 08A3C89C */
void func_08A3C89C(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C89C:;
    v0 = D_08C2D900 - (-9984);
    a0 = LD32(v0-9984);
    sp = sp - 16;
    func_08A38098(a0);
    goto L_08A3C8B4;
L_08A3C8B4:;
    sp = sp + 16;
    return;
}

/* 08A3C8C0 */
void func_08A3C8C0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C8C0:;
    sp = sp - 16;
    s0 = D_08C2D900 - (-9984);
    func_08A3C9C8(t1, t2, t3);
    goto L_08A3C8D4;
L_08A3C8D4:;
    a0 = LD32(s0-9984);
    func_08A38138(a0);
    goto L_08A3C8DC;
L_08A3C8DC:;
    func_08A3CA24(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3C8E4;
L_08A3C8E4:;
    a0 = LD32(s0-9984);
    v0 = func_08A38474(a0);
    goto L_08A3C8EC;
L_08A3C8EC:;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A3C914; }
    goto L_08A3C8F4;
L_08A3C8F4:;
    v1 = D_08C28DC8 - (-29240);
    a0 = D_08C2D904 - (-9980);
    ST32(v1-29240, v0);
    ST8(a0-9980, 0);
    goto L_08A3C908;
L_08A3C908:;
    sp = sp + 16;
    return;
L_08A3C914:;
    a0 = LD32(s0-9984);
    v0 = func_08A3847C(a0);
    goto L_08A3C91C;
L_08A3C91C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3C908; }
    goto L_08A3C924;
L_08A3C924:;
    v1 = 1;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_08A3C908;
}

/* 08A3C934 */
void func_08A3C934(void)
{
L_08A3C934:;
    return;
}

/* 08A3C93C */
void func_08A3C93C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C93C:;
    a0 = D_08AE4C40 - (19520);
    sp = sp - 16;
    a0 = a0 + 19520;
    func_08978924(a0, t1, t2, t3);
    goto L_08A3C950;
L_08A3C950:;
    func_08975C88();
    goto L_08A3C958;
L_08A3C958:;
    sp = sp + 16;
    return;
}

/* 08A3C964 */
void func_08A3C964(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C964:;
    sp = sp - 16;
    a0 = 1;
    a1 = (u32)-1;
    func_089766D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A3C978;
L_08A3C978:;
    sp = sp + 16;
    return;
}

/* 08A3C984 */
void func_08A3C984(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C984:;
    sp = sp - 16;
    a0 = 1;
    func_08A60C74(t1, t2, t3);
    goto L_08A3C994;
L_08A3C994:;
    func_08A6941C();
    goto L_08A3C99C;
L_08A3C99C:;
    func_08876DE8(0, 0, 0);
    goto L_08A3C9A4;
L_08A3C9A4:;
    func_088CEDE8();
    goto L_08A3C9AC;
L_08A3C9AC:;
    func_0897CFD8();
    goto L_08A3C9B4;
L_08A3C9B4:;
    func_088ABE08();
    goto L_08A3C9BC;
L_08A3C9BC:;
    sp = sp + 16;
    return;
}

/* 08A3C9C8 */
void func_08A3C9C8(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3C9C8:;
    sp = sp - 16;
    func_088ABED0(t1, t2, t3);
    goto L_08A3C9D8;
L_08A3C9D8:;
    func_08845B64(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3C9E0;
L_08A3C9E0:;
    func_08877710(0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3C9E8;
L_08A3C9E8:;
    func_088F1698();
    goto L_08A3C9F0;
L_08A3C9F0:;
    func_088AFE84(0, 0, 0);
    goto L_08A3C9F8;
L_08A3C9F8:;
    func_08897F68(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3CA00;
L_08A3CA00:;
    func_088AC088(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3CA08;
L_08A3CA08:;
    func_088D9E78();
    goto L_08A3CA10;
L_08A3CA10:;
    func_088894BC();
    goto L_08A3CA18;
L_08A3CA18:;
    sp = sp + 16;
    return;
}

/* 08A3CA24 */
void func_08A3CA24(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CA24:;
    sp = sp - 16;
    func_088CF2F8(a1, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A3CA34;
L_08A3CA34:;
    func_08A3CA50();
    goto L_08A3CA3C;
L_08A3CA3C:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3CA44;
L_08A3CA44:;
    sp = sp + 16;
    return;
}

/* 08A3CA50 */
void func_08A3CA50(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CA50:;
    sp = sp - 16;
    a2 = D_08B15A04 - (23044);
    v0 = LD32(a2+23044);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A3CAA8; }
    goto L_08A3CA74;
L_08A3CA74:;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = D_08B159FC - (23036);
    a1 = 1;
    ST32(v1+23036, v0);
    a0 = D_08B230B0 - (12464);
    v0 = D_08B230A8 - (12456);
    v1 = D_08B15A0C - (23052);
    ST8(a0+12464, a1);
    ST32(a2+23044, 0);
    ST8(v0+12456, a1);
    ST8(v1+23052, a1);
    a0 = 0 + 0;
    goto L_08A3CAA8;
L_08A3CAA8:;
    a1 = 0 + 0;
    func_088CEE54(a0, a1);
    goto L_08A3CAB0;
L_08A3CAB0:;
    v0 = D_08B2C18C - (-15988);
    s2 = v0 - 15988;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_08A3CAC0;
L_08A3CAC0:;
    a0 = s2 + 0;
    a2 = (u32)-1;
    s0 = s0 + 1;
    func_0890CFBC(a2);
    goto L_08A3CAD0;
L_08A3CAD0:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08A3CAC0; }
    goto L_08A3CADC;
L_08A3CADC:;
    a1 = 0 + 0;
    a0 = s2 + 0;
    func_0890CFD8(a0, a1);
    goto L_08A3CAE8;
L_08A3CAE8:;
    a0 = s2 + 0;
    a1 = 1;
    func_0890CFE0(a0, a1);
    goto L_08A3CAF4;
L_08A3CAF4:;
    a0 = s2 + 0;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3CB00;
L_08A3CB00:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_0890D028(a0, a1);
    goto L_08A3CB0C;
L_08A3CB0C:;
    a0 = s2 + 0;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08A3CB18;
L_08A3CB18:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_0890D0B8(a0, a1);
    goto L_08A3CB24;
L_08A3CB24:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08A3CB30;
L_08A3CB30:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_0890D248(a0, a1);
    goto L_08A3CB3C;
L_08A3CB3C:;
    a0 = s2 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_08A3CB48;
L_08A3CB48:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_0890D290(a0, a1);
    goto L_08A3CB54;
L_08A3CB54:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08A3CB60;
L_08A3CB60:;
    s1 = D_08BB1D14 - (7444);
    v0 = 10;
    ST32(s2+44, v0);
    func_088F0D3C(0, 0, 0, 0, 0);
    goto L_08A3CB70;
L_08A3CB70:;
    s0 = D_08C2D900 - (-9984);
    func_088F1700();
    goto L_08A3CB78;
L_08A3CB78:;
    func_088CEE34(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3CB80;
L_08A3CB80:;
    func_0881C978();
    goto L_08A3CB88;
L_08A3CB88:;
    func_088F16E4();
    goto L_08A3CB90;
L_08A3CB90:;
    { u64 r_ = func_08877A60(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3CB98;
L_08A3CB98:;
    func_088B07F4();
    goto L_08A3CBA0;
L_08A3CBA0:;
    a1 = LD32(s1+7444);
    a0 = 0 + 0;
    func_089017AC(a1);
    goto L_08A3CBAC;
L_08A3CBAC:;
    func_088F172C();
    goto L_08A3CBB4;
L_08A3CBB4:;
    a1 = LD32(s1+7444);
    a0 = 0 + 0;
    func_0890308C(a1);
    goto L_08A3CBC0;
L_08A3CBC0:;
    a0 = LD32(s0-9984);
    func_08A3841C(a0);
    goto L_08A3CBC8;
L_08A3CBC8:;
    func_088F17D4();
    goto L_08A3CBD0;
L_08A3CBD0:;
    func_08889520();
    goto L_08A3CBD8;
L_08A3CBD8:;
    a0 = LD32(s0-9984);
    v0 = 1;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3CBF4; }
    goto L_08A3CBEC;
L_08A3CBEC:;
    func_08A38438(a0);
    goto L_08A3CBF4;
L_08A3CBF4:;
    func_08897E28(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3CBFC;
L_08A3CBFC:;
    func_0897D2E4(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3CC04;
L_08A3CC04:;
    sp = sp + 16;
    return;
}

/* 08A3CC1C */
u32 func_08A3CC1C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CC1C:;
    sp = sp - 16;
    v0 = D_08C2D900 - (-9984);
    v1 = LD32(v0-9984);
    v0 = 0 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A3CC44; }
    goto L_08A3CC38;
L_08A3CC38:;
    goto L_08A3CC3C;
L_08A3CC3C:;
    sp = sp + 16;
    return v0;
L_08A3CC44:;
    v0 = func_08A38484(a0);
    goto L_08A3CC4C;
L_08A3CC4C:;
    goto L_08A3CC3C;
}

/* 08A3CC54 */
void func_08A3CC54(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08A3CC54:;
    v0 = D_08C2D900 - (-9984);
    v0 = LD32(v0-9984);
    cnd_ = v0 == 0;
    a0 = a0 & 0xff;
    if (cnd_) { goto L_08A3CC68; }
    goto L_08A3CC64;
L_08A3CC64:;
    ST8(v0+152, a0);
    goto L_08A3CC68;
L_08A3CC68:;
    return;
}

/* 08A3CC70 */
u64 func_08A3CC70(void)
{
    u32 v0 = 0, v1 = 0;
L_08A3CC70:;
    v1 = D_08C2D904 - (-9980);
    v0 = LD_U8(v1-9980);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A3CC7C */
u32 func_08A3CC7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CC7C:;
    sp = sp - 16;
    v0 = D_08C2D900 - (-9984);
    v1 = a0 + 0;
    a2 = LD32(v0-9984);
    a1 = a0 + 0;
    v1 = v1 < 0x2u;
    a0 = a2 + 0;
    a2 = 0 < a2;
    a2 = a2 & v1;
    cnd_ = a2 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A3CCB8; }
    goto L_08A3CCAC;
L_08A3CCAC:;
    v0 = func_08A384F0(a0, a1);
    goto L_08A3CCB4;
L_08A3CCB4:;
    v0 = LD32(v0+44);
    goto L_08A3CCB8;
L_08A3CCB8:;
    sp = sp + 16;
    return v0;
}

/* 08A3CCC4 */
u32 func_08A3CCC4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CCC4:;
    sp = sp - 16;
    v0 = func_08A3C0A8(a0);
    goto L_08A3CCD4;
L_08A3CCD4:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A3CCE8; }
    goto L_08A3CCDC;
L_08A3CCDC:;
    v0 = LD32(v0+56);
    v0 = (s32)v0 < 2;
    v1 = v0 ^ 0x1;
    goto L_08A3CCE8;
L_08A3CCE8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A3CCF8 */
float func_08A3CCF8(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CCF8:;
    sp = sp - 16;
    v0 = func_08A3C038(a0);
    goto L_08A3CD08;
L_08A3CD08:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AEFBD4 - (-1068); goto L_08A3CD1C; }
    goto L_08A3CD10;
L_08A3CD10:;
    v0 = LD32(v0+56);
    cnd_ = (s32)v0 > 0;
    v0 = D_08AEFBD4 - (-1068);
    if (cnd_) { goto L_08A3CD2C; }
    goto L_08A3CD1C;
L_08A3CD1C:;
    f0 = BITSF(LD32(v0-1068));
    goto L_08A3CD20;
L_08A3CD20:;
    sp = sp + 16;
    return f0;
L_08A3CD2C:;
    v0 = D_08AEFBD0 - (-1072);
    f0 = BITSF(LD32(v0-1072));
    goto L_08A3CD20;
}

/* 08A3CD38 */
u32 func_08A3CD38(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CD38:;
    sp = sp - 16;
    v0 = func_08A3C038(a0);
    goto L_08A3CD48;
L_08A3CD48:;
    cnd_ = v0 == 0;
    v1 = 3;
    if (cnd_) { goto L_08A3CD58; }
    goto L_08A3CD50;
L_08A3CD50:;
    v0 = LD32(v0+60);
    v1 = v0 + 1;
    goto L_08A3CD58;
L_08A3CD58:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A3CD68 */
float func_08A3CD68(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CD68:;
    sp = sp - 16;
    v0 = 2;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A3CD94; }
    goto L_08A3CD78;
L_08A3CD78:;
    v0 = func_08A3C038(a0);
    goto L_08A3CD80;
L_08A3CD80:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AEFBDC - (-1060); goto L_08A3CD98; }
    goto L_08A3CD88;
L_08A3CD88:;
    v0 = LD_U8(v0+68);
    cnd_ = v0 != 0;
    v0 = D_08AEFBD8 - (-1064);
    if (cnd_) { goto L_08A3CDA8; }
    goto L_08A3CD94;
L_08A3CD94:;
    v0 = D_08AEFBDC - (-1060);
    goto L_08A3CD98;
L_08A3CD98:;
    f0 = BITSF(LD32(v0-1060));
    goto L_08A3CD9C;
L_08A3CD9C:;
    sp = sp + 16;
    return f0;
L_08A3CDA8:;
    f0 = BITSF(LD32(v0-1064));
    goto L_08A3CD9C;
}

/* 08A3CDB0 */
float func_08A3CDB0(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CDB0:;
    sp = sp - 16;
    v0 = func_08A3C0A8(a0);
    goto L_08A3CDC0;
L_08A3CDC0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AEFBE4 - (-1052); goto L_08A3CDD4; }
    goto L_08A3CDC8;
L_08A3CDC8:;
    v0 = LD_U8(v0+68);
    cnd_ = v0 != 0;
    v0 = D_08AEFBE4 - (-1052);
    if (cnd_) { goto L_08A3CDE4; }
    goto L_08A3CDD4;
L_08A3CDD4:;
    f0 = BITSF(LD32(v0-1052));
    goto L_08A3CDD8;
L_08A3CDD8:;
    sp = sp + 16;
    return f0;
L_08A3CDE4:;
    v0 = D_08AEFBE0 - (-1056);
    f0 = BITSF(LD32(v0-1056));
    goto L_08A3CDD8;
}

/* 08A3CDF0 */
float func_08A3CDF0(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CDF0:;
    sp = sp - 16;
    v0 = 3;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A3CE1C; }
    goto L_08A3CE00;
L_08A3CE00:;
    v0 = func_08A3C038(a0);
    goto L_08A3CE08;
L_08A3CE08:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3CE1C; }
    goto L_08A3CE10;
L_08A3CE10:;
    v0 = LD_U8(v0+68);
    cnd_ = v0 != 0;
    v0 = D_08AEFBE8 - (-1048);
    if (cnd_) { goto L_08A3CE2C; }
    goto L_08A3CE1C;
L_08A3CE1C:;
    f0 = BITSF(0);
    goto L_08A3CE20;
L_08A3CE20:;
    sp = sp + 16;
    return f0;
L_08A3CE2C:;
    f0 = BITSF(LD32(v0-1048));
    goto L_08A3CE20;
}

/* 08A3CE34 */
rv_t func_08A3CE34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A3CE34:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2D8D0 - (-10032);
    t1 = D_08C2D8E0 - (-10016);
    t2 = D_08C2D8F0 - (-10000);
    a1 = a1 & a0;
    v1 = t0 - 10032;
    a2 = t1 - 10016;
    cnd_ = a1 == 0;
    a3 = t2 - 10000;
    if (cnd_) { goto L_08A3CEEC; }
    goto L_08A3CE64;
L_08A3CE64:;
    v0 = D_08AEFBEC - (-1044);
    f4 = BITSF(LD32(v0-1044));
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
    ST32(t0-10032, FBITS(f2));
    ST32(t1-10016, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-10000, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A3CEEC;
L_08A3CEEC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A3CEF4 */
rv_t func_08A3CEF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3CEF4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A3CE34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3CF08;
L_08A3CF08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A3CF14 */
u64 func_08A3CF14(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3CF14:;
    v0 = D_08C2D94C - (-9908);
    sp = sp - 32;
    a3 = v0 - 9908;
    a2 = a3 + 0;
    ST32(a0, 0);
    ST32(a0+4, a1);
    a1 = 0 + 0;
    a0 = 16;
    goto L_08A3CF50;
L_08A3CF50:;
    v0 = a1 << 6;
    v0 = v0 + a3;
    v1 = 15;
    goto L_08A3CF5C;
L_08A3CF5C:;
    v1 = v1 - 1;
    ST32(v0, a0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08A3CF5C; }
    goto L_08A3CF6C;
L_08A3CF6C:;
    a1 = a1 + 1;
    v0 = (s32)a1 < 16;
    ST32(a2, 0);
    cnd_ = v0 != 0;
    a2 = a2 + 68;
    if (cnd_) { goto L_08A3CF50; }
    goto L_08A3CF80;
L_08A3CF80:;
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    s5 = v0 + 0;
    s2 = 0 + 0;
    s4 = 0 + 0;
    s3 = v0 + 28;
    goto L_08A3CF98;
L_08A3CF98:;
    v0 = LD32(s3);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3CFD8; }
    goto L_08A3CFA4;
L_08A3CFA4:;
    s1 = s4 + s5;
    a1 = s0 + 0;
    goto L_08A3CFAC;
L_08A3CFAC:;
    a0 = s1 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3CFB4;
L_08A3CFB4:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A3D010(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3CFC4;
L_08A3CFC4:;
    v0 = LD32(s1+28);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3CFAC; }
    goto L_08A3CFD8;
L_08A3CFD8:;
    s2 = s2 + 1;
    v0 = (s32)s2 < 16;
    s3 = s3 + 44;
    cnd_ = v0 != 0;
    s4 = s4 + 44;
    if (cnd_) { goto L_08A3CF98; }
    goto L_08A3CFEC;
L_08A3CFEC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A3D010 */
u64 func_08A3D010(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3D010:;
    sp = sp - 32;
    v0 = a0 << 4;
    v1 = D_08C2D94C - (-9908);
    v0 = v0 + a1;
    t0 = v1 - 9908;
    v0 = v0 << 2;
    a3 = v0 + t0;
    v1 = LD32(a3);
    v1 = v1 < a2;
    cnd_ = v1 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A3D0C4; }
    goto L_08A3D050;
L_08A3D050:;
    a0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    v1 = a1 << 4;
    v1 = v1 + s2;
    a0 = lo;
    a0 = a0 + v0;
    a1 = LD32(a0+28);
    v1 = v1 << 2;
    v1 = v1 + t0;
    ST32(a3, a2);
    s0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(v1, a2);
    if (cnd_) { goto L_08A3D0C4; }
    goto L_08A3D08C;
L_08A3D08C:;
    s3 = a2 + 1;
    s1 = a0 + 0;
    a1 = s0 + 0;
    goto L_08A3D098;
L_08A3D098:;
    a0 = s1 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3D0A0;
L_08A3D0A0:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = s3 + 0;
    { u64 r_ = func_08A3D010(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D0B0;
L_08A3D0B0:;
    v0 = LD32(s1+28);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3D098; }
    goto L_08A3D0C4;
L_08A3D0C4:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A3D0E0 */
void func_08A3D0E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3D0E0:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3D108; }
    goto L_08A3D0F8;
L_08A3D0F8:;
    goto L_08A3D0FC;
L_08A3D0FC:;
    sp = sp + 16;
    return;
L_08A3D108:;
    func_08A3D6BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A3D110;
L_08A3D110:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D118;
L_08A3D118:;
    goto L_08A3D0FC;
}

/* 08A3D120 */
void func_08A3D120(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3D120:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    a0 = 380;
    if (cnd_) { goto L_08A3D15C; }
    goto L_08A3D140;
L_08A3D140:;
    a0 = LD32(s1);
    func_08A3E044(a0);
    goto L_08A3D148;
L_08A3D148:;
    sp = sp + 16;
    return;
L_08A3D15C:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3D164;
L_08A3D164:;
    a1 = LD32(s1+4);
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A3D654(a0, a1);
    goto L_08A3D174;
L_08A3D174:;
    ST32(s1, s0);
    goto L_08A3D140;
}

/* 08A3D17C */
void func_08A3D17C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3D17C:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    a0 = 380;
    if (cnd_) { goto L_08A3D1B8; }
    goto L_08A3D19C;
L_08A3D19C:;
    a0 = LD32(s1);
    func_08A3F708(a0);
    goto L_08A3D1A4;
L_08A3D1A4:;
    sp = sp + 16;
    return;
L_08A3D1B8:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3D1C0;
L_08A3D1C0:;
    a1 = LD32(s1+4);
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A3D654(a0, a1);
    goto L_08A3D1D0;
L_08A3D1D0:;
    ST32(s1, s0);
    goto L_08A3D19C;
}

/* 08A3D1D8 */
u32 func_08A3D1D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
L_08A3D1D8:;
    a1 = LD32(a0);
    v1 = LD32(a1+368);
    a2 = LD32(a1+372);
    v0 = LD32(a1+364);
    v1 = v1 - 1;
    a0 = v1 < a2;
    if (a0 == 0) v1 = a2;
    v1 = v1 << 8;
    v0 = v0 + v1;
    return v0;
}

/* 08A3D200 */
void func_08A3D200(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08A3D200:;
    v0 = LD32(a0);
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A3D544; }
    goto L_08A3D210;
L_08A3D210:;
    v0 = LD32(a0+8);
    t3 = D_08B1C310 - (-15600);
    f0 = BITSF(LD32(t3-15600));
    f3 = BITSF(v0);
    f2 = f1 * f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D528; }
    goto L_08A3D22C;
L_08A3D22C:;
    t2 = D_08B1C314 - (-15596);
    f0 = BITSF(LD32(t2-15596));
    v0 = LD32(a0+16);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D50C; }
    goto L_08A3D24C;
L_08A3D24C:;
    t1 = D_08B1C318 - (-15592);
    f0 = BITSF(LD32(t1-15592));
    v0 = LD32(a0+24);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D4F0; }
    goto L_08A3D26C;
L_08A3D26C:;
    t0 = D_08B1C31C - (-15588);
    f0 = BITSF(LD32(t0-15588));
    v0 = LD32(a0+32);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D4D4; }
    goto L_08A3D28C;
L_08A3D28C:;
    a3 = D_08B1C320 - (-15584);
    f0 = BITSF(LD32(a3-15584));
    v0 = LD32(a0+40);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D4B8; }
    goto L_08A3D2AC;
L_08A3D2AC:;
    a2 = D_08B1C324 - (-15580);
    f0 = BITSF(LD32(a2-15580));
    v0 = LD32(a0+56);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f0 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D49C; }
    goto L_08A3D2CC;
L_08A3D2CC:;
    f0 = f0 + f1;
    v0 = D_08B1C328 - (-15576);
    f1 = BITSF(LD32(v0-15576));
    a1 = D_08AEFBF0 - (-1040);
    f2 = BITSF(LD32(a1-1040));
    f0 = f0 * f1;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a0+4); goto L_08A3D310; }
    goto L_08A3D2F8;
L_08A3D2F8:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(a0+4);
    goto L_08A3D310;
L_08A3D310:;
    ST32(a0+48, v1);
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A3D480; }
    goto L_08A3D320;
L_08A3D320:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(t3-15600));
    f3 = BITSF(v0);
    f2 = f1 * f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D464; }
    goto L_08A3D338;
L_08A3D338:;
    f0 = BITSF(LD32(t2-15596));
    v0 = LD32(a0+20);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D448; }
    goto L_08A3D354;
L_08A3D354:;
    f0 = BITSF(LD32(t1-15592));
    v0 = LD32(a0+28);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A3D42C; }
    goto L_08A3D370;
L_08A3D370:;
    f0 = BITSF(LD32(t0-15588));
    v0 = LD32(a0+36);
    f0 = f1 * f0;
    f3 = BITSF(v0);
    f1 = (float)(s32)FBITS(f3);
    cnd_ = (s32)v0 < 0;
    f3 = f2 + f0;
    if (cnd_) { goto L_08A3D410; }
    goto L_08A3D38C;
L_08A3D38C:;
    f0 = BITSF(LD32(a3-15584));
    v0 = LD32(a0+44);
    f0 = f1 * f0;
    f1 = BITSF(v0);
    f3 = f3 + f0;
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A3D3F4; }
    goto L_08A3D3A8;
L_08A3D3A8:;
    f0 = BITSF(LD32(a2-15580));
    v0 = D_08B1C32C - (-15572);
    f1 = BITSF(LD32(v0-15572));
    f0 = f2 * f0;
    f2 = BITSF(LD32(a1-1040));
    f0 = f3 + f0;
    f0 = f0 * f1;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f1);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A3D3EC; }
    goto L_08A3D3D8;
L_08A3D3D8:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    goto L_08A3D3EC;
L_08A3D3EC:;
    ST32(a0+52, v1);
    return;
L_08A3D3F4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08A3D3A8;
L_08A3D410:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D38C;
L_08A3D42C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D370;
L_08A3D448:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D354;
L_08A3D464:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D338;
L_08A3D480:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08A3D320;
L_08A3D49C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08A3D2CC;
L_08A3D4B8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D2AC;
L_08A3D4D4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D28C;
L_08A3D4F0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D26C;
L_08A3D50C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D24C;
L_08A3D528:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A3D22C;
L_08A3D544:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08A3D210;
}

/* 08A3D560 */
float func_08A3D560(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
L_08A3D560:;
    v0 = D_08AEFBFC - (-1028);
    v1 = D_08AEFBF4 - (-1036);
    f6 = BITSF(LD32(v0-1028));
    t0 = a0 & 0x1;
    v0 = a0 >> 1;
    f7 = BITSF(LD32(v1-1036));
    t0 = t0 | v0;
    t2 = a1 & 0x1;
    v0 = a1 >> 1;
    f0 = BITSF(a3);
    f2 = BITSF(a0);
    t2 = t2 | v0;
    v1 = a2 & 0x1;
    v0 = a2 >> 1;
    v1 = v1 | v0;
    t1 = a3 & 0x1;
    v0 = a3 >> 1;
    f3 = f7;
    t1 = t1 | v0;
    f4 = (float)(s32)FBITS(f0);
    cnd_ = (s32)a0 < 0;
    f1 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A3D644; }
    goto L_08A3D5B8;
L_08A3D5B8:;
    f5 = BITSF(a1);
    f8 = BITSF(a2);
    v0 = D_08AEFBF8 - (-1032);
    f2 = (float)(s32)FBITS(f5);
    f0 = (float)(s32)FBITS(f8);
    cnd_ = (s32)a2 < 0;
    f5 = BITSF(LD32(v0-1032));
    if (cnd_) { goto L_08A3D634; }
    goto L_08A3D5D4;
L_08A3D5D4:;
    f0 = f0 * f3;
    f0 = f0 * f1;
    cnd_ = (s32)a1 < 0;
    f3 = f0 + f1;
    if (cnd_) { goto L_08A3D624; }
    goto L_08A3D5E4;
L_08A3D5E4:;
    cnd_ = (s32)a3 < 0;
    if (cnd_) { goto L_08A3D614; }
    goto L_08A3D5EC;
L_08A3D5EC:;
    f0 = f4 * f7;
    f0 = f0 + f5;
    f0 = f2 * f0;
    f1 = f3 + f0;
    f0 = f3 - f0;
    f1 = f5 / f1;
    f0 = f0 * f1;
    f0 = f0 * f6;
    f0 = f0 + f6;
    return f0;
L_08A3D614:;
    f8 = BITSF(t1);
    f4 = (float)(s32)FBITS(f8);
    f4 = f4 + f4;
    goto L_08A3D5EC;
L_08A3D624:;
    f0 = BITSF(t2);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08A3D5E4;
L_08A3D634:;
    f8 = BITSF(v1);
    f0 = (float)(s32)FBITS(f8);
    f0 = f0 + f0;
    goto L_08A3D5D4;
L_08A3D644:;
    f5 = BITSF(t0);
    f1 = (float)(s32)FBITS(f5);
    f1 = f1 + f1;
    goto L_08A3D5B8;
}

/* 08A3D654 */
void func_08A3D654(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3D654:;
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0, a1);
    a0 = a0 + 196;
    func_08A3BD08(a0);
    goto L_08A3D670;
L_08A3D670:;
    a0 = s0 + 276;
    func_08A3BD08(a0);
    goto L_08A3D678;
L_08A3D678:;
    v0 = 495;
    ST32(s0+376, v0);
    a0 = 0x10000u;
    a0 = a0 | 0xef00;
    ST32(s0+368, 0);
    ST32(s0+372, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3D694;
L_08A3D694:;
    ST32(s0+364, v0);
    v0 = 17;
    a0 = s0 + 0;
    ST32(s0+356, v0);
    ST32(s0+360, 0);
    func_08A3D708(a0);
    goto L_08A3D6AC;
L_08A3D6AC:;
    sp = sp + 16;
    return;
}

/* 08A3D6BC */
void func_08A3D6BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3D6BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+364);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3D6F8; }
    goto L_08A3D6D8;
L_08A3D6D8:;
    a0 = s0 + 276;
    func_08A3BDB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A3D6E0;
L_08A3D6E0:;
    a0 = s0 + 196;
    func_08A3BDB4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A3D6E8;
L_08A3D6E8:;
    sp = sp + 16;
    return;
L_08A3D6F8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D700;
L_08A3D700:;
    goto L_08A3D6D8;
}

/* 08A3D708 */
void func_08A3D708(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3D708:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a0 + 0;
    goto L_08A3D728;
L_08A3D728:;
    a0 = LD32(s1);
    a1 = s2 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3D734;
L_08A3D734:;
    v1 = LD_U8(v0);
    a0 = LD32(s1);
    a1 = s2 + 0;
    ST8(s0+4, v1);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3D748;
L_08A3D748:;
    v1 = LD32(v0+4);
    a0 = LD32(s1);
    a1 = s2 + 0;
    ST32(s0+8, v1);
    s2 = s2 + 1;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3D760;
L_08A3D760:;
    v1 = LD32(v0+8);
    v0 = (s32)s2 < 16;
    ST32(s0+12, v1);
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08A3D728; }
    goto L_08A3D774;
L_08A3D774:;
    v1 = LD32(s1);
    a1 = LD32(v1+12);
    a0 = v1 + 0;
    ST32(s1+272, a1);
    v0 = LD32(v1+12);
    v0 = v0 < 0x1u;
    ST32(s1+352, v0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D794;
L_08A3D794:;
    v1 = LD32(v0+44);
    a0 = LD32(s1);
    ST32(s1+240, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D7A4;
L_08A3D7A4:;
    v1 = LD32(v0+48);
    a0 = LD32(s1);
    ST32(s1+244, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D7B4;
L_08A3D7B4:;
    v1 = LD32(v0+52);
    a0 = LD32(s1);
    ST32(s1+248, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D7C4;
L_08A3D7C4:;
    v1 = LD32(v0+56);
    a0 = LD32(s1);
    ST32(s1+252, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D7D4;
L_08A3D7D4:;
    v1 = LD32(v0+60);
    a0 = LD32(s1);
    ST32(s1+256, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D7E4;
L_08A3D7E4:;
    v1 = LD32(v0+64);
    a0 = LD32(s1);
    ST32(s1+260, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D7F4;
L_08A3D7F4:;
    v1 = LD32(v0+68);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+264, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D808;
L_08A3D808:;
    v1 = LD32(v0+44);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+320, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D81C;
L_08A3D81C:;
    v1 = LD32(v0+48);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+324, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D830;
L_08A3D830:;
    v1 = LD32(v0+52);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+328, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D844;
L_08A3D844:;
    v1 = LD32(v0+56);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+332, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D858;
L_08A3D858:;
    v1 = LD32(v0+60);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+336, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D86C;
L_08A3D86C:;
    v1 = LD32(v0+64);
    a0 = LD32(s1);
    a1 = LD32(s1+352);
    ST32(s1+340, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A3D880;
L_08A3D880:;
    v1 = LD32(v0+68);
    ST32(s1+344, v1);
    sp = sp + 16;
    return;
}

/* 08A3D8A0 */
void func_08A3D8A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A3D8A0:;
    sp = sp - 80;
    s3 = a0 + 0;
    s0 = a1 + 0;
    func_08A41614(a0);
    goto L_08A3D8D8;
L_08A3D8D8:;
    a0 = s0 + 0;
    ST32(sp, 0);
    a1 = 15;
    goto L_08A3D8E4;
L_08A3D8E4:;
    v1 = LD32(sp);
    v0 = LD_U8(a0+4);
    a1 = a1 - 1;
    a3 = v1 - 1;
    cnd_ = v0 == 0;
    a2 = v1 + 1;
    if (cnd_) { goto L_08A3D910; }
    goto L_08A3D8FC;
L_08A3D8FC:;
    v0 = LD32(a0+8);
    v1 = LD32(s0+272);
    v0 = v0 ^ v1;
    if (v0 != 0) a2 = a3;
    ST32(sp, a2);
    goto L_08A3D910;
L_08A3D910:;
    cnd_ = (s32)a1 >= 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08A3D8E4; }
    goto L_08A3D918;
L_08A3D918:;
    a0 = LD32(s0+240);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D920;
L_08A3D920:;
    v1 = LD32(s0+244);
    v0 = D_08B1C34C - (-15540);
    a2 = LD32(s0+272);
    ST32(s3, v1);
    v0 = v0 - 15540;
    a3 = v0 + 32;
    v1 = LD32(s0+324);
    ST32(s3+8, 0);
    a1 = 0 + 0;
    a0 = s0 + 8;
    ST32(s3+4, v1);
    ST32(s3+12, 0);
    goto L_08A3D950;
L_08A3D950:;
    v0 = LD32(a0);
    cnd_ = v0 == a2;
    v1 = v0 ^ 0x2;
    if (cnd_) { goto L_08A3DE6C; }
    goto L_08A3D95C;
L_08A3D95C:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = a1 + 1; goto L_08A3D978; }
    goto L_08A3D964;
L_08A3D964:;
    v1 = LD32(a3);
    v0 = LD32(s3+12);
    v0 = v0 + v1;
    ST32(s3+12, v0);
    goto L_08A3D974;
L_08A3D974:;
    a1 = a1 + 1;
    goto L_08A3D978;
L_08A3D978:;
    v0 = a1 < 0x10u;
    a0 = a0 + 12;
    cnd_ = v0 != 0;
    a3 = a3 + 44;
    if (cnd_) { goto L_08A3D950; }
    goto L_08A3D988;
L_08A3D988:;
    v0 = D_08C2DD4C - (-8884);
    v1 = LD32(v0-8884);
    ST32(sp+4, 0);
    v1 = v1 < 0x2u;
    ST32(s3+16, 0);
    cnd_ = v1 == 0;
    ST32(s3+20, 0);
    if (cnd_) { goto L_08A3DB80; }
    goto L_08A3D9A4;
L_08A3D9A4:;
    ST32(sp+8, 0);
    a0 = LD32(s0+240);
    goto L_08A3D9AC;
L_08A3D9AC:;
    ST32(sp+12, 0);
    s7 = 1;
    ST32(sp+16, 0);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3D9BC;
L_08A3D9BC:;
    cnd_ = v0 != 0;
    ST32(sp+20, s7);
    if (cnd_) { goto L_08A3DE58; }
    goto L_08A3D9C4;
L_08A3D9C4:;
    a0 = LD32(s0);
    a1 = LD32(sp+8);
    v0 = func_08A3848C(a0, a1);
    goto L_08A3D9D0;
L_08A3D9D0:;
    v0 = LD32(v0+4);
    goto L_08A3D9D4;
L_08A3D9D4:;
    a0 = LD32(sp+8);
    a1 = 1;
    cnd_ = v0 == a1;
    s6 = a0 << 5;
    if (cnd_) { goto L_08A3DE28; }
    goto L_08A3D9E4;
L_08A3D9E4:;
    v0 = D_08B1C60C - (-14836);
    v1 = v0 - 14836;
    a0 = s6 + v1;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A3DACC; }
    goto L_08A3D9FC;
L_08A3D9FC:;
    fp = a0 + 0;
    s1 = a0 + 12;
    v1 = s6 + v1;
    goto L_08A3DA08;
L_08A3DA08:;
    v0 = s4 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+12);
    a2 = LD32(s0+272);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0+8);
    v1 = a0 ^ 0x2;
    cnd_ = a0 == a2;
    v1 = 0 < v1;
    if (cnd_) { goto L_08A3DE18; }
    goto L_08A3DA38;
L_08A3DA38:;
    a1 = LD32(sp+16);
    a1 = a1 + v1;
    ST32(sp+16, a1);
    goto L_08A3DA44;
L_08A3DA44:;
    a1 = LD32(s1);
    s4 = s4 + 1;
    a0 = s0 + 0;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = s0 + v0;
    v1 = LD32(v0+8);
    s2 = 0 + 0;
    v1 = v1 ^ 0x2;
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A3DE00; }
    goto L_08A3DA74;
L_08A3DA74:;
    s2 = 1;
    goto L_08A3DA78;
L_08A3DA78:;
    a1 = LD32(s1);
    goto L_08A3DA7C;
L_08A3DA7C:;
    a0 = s0 + 0;
    s7 = s7 & s2;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = s0 + v0;
    v1 = LD32(v0+8);
    v1 = v1 ^ 0x2;
    cnd_ = v1 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A3DDE8; }
    goto L_08A3DAA4;
L_08A3DAA4:;
    s5 = 1;
    v1 = LD32(sp+20);
    goto L_08A3DAAC;
L_08A3DAAC:;
    v0 = LD32(fp+8);
    v1 = v1 & s5;
    v0 = s4 < v0;
    ST32(sp+20, v1);
    v1 = D_08B1C60C - (-14836);
    v1 = v1 - 14836;
    cnd_ = v0 != 0;
    v1 = s6 + v1;
    if (cnd_) { goto L_08A3DA08; }
    goto L_08A3DACC;
L_08A3DACC:;
    a0 = D_08B1C60C - (-14836);
    a0 = a0 - 14836;
    a1 = s6 + a0;
    v1 = LD32(sp+12);
    v0 = LD32(a1+8);
    v0 = v0 - v1;
    v1 = v0 < 0x2u;
    cnd_ = v1 == 0;
    v1 = LD32(sp+16);
    if (cnd_) { goto L_08A3DB20; }
    goto L_08A3DAF0;
L_08A3DAF0:;
    a0 = LD32(sp+16);
    v1 = v0 + a0;
    a0 = LD32(a1+4);
    v0 = v1 + 2;
    v1 = v1 + 1;
    if (s7 == 0) v1 = v0;
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = LD32(s3+16);
    a0 = lo;
    v0 = v0 + a0;
    ST32(s3+16, v0);
    v1 = LD32(sp+16);
    goto L_08A3DB20;
L_08A3DB20:;
    v0 = LD32(a1+8);
    v0 = v0 - v1;
    v1 = v0 < 0x2u;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(sp+8); goto L_08A3DB68; }
    goto L_08A3DB34;
L_08A3DB34:;
    a0 = LD32(sp+12);
    v1 = v0 + a0;
    a0 = LD32(a1+4);
    a1 = LD32(sp+20);
    v0 = v1 + 2;
    v1 = v1 + 1;
    if (a1 == 0) v1 = v0;
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = LD32(s3+20);
    a0 = lo;
    v0 = v0 + a0;
    ST32(s3+20, v0);
    v0 = LD32(sp+8);
    goto L_08A3DB68;
L_08A3DB68:;
    v0 = v0 + 1;
    ST32(sp+8, v0);
    v0 = v0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+240); goto L_08A3D9AC; }
    goto L_08A3DB7C;
L_08A3DB7C:;
    a2 = LD32(s0+272);
    goto L_08A3DB80;
L_08A3DB80:;
    v0 = LD_U8(s0+265);
    cnd_ = v0 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08A3DB9C; }
    goto L_08A3DB8C;
L_08A3DB8C:;
    v0 = LD32(s3+16);
    v1 = LD32(sp+4);
    v0 = v0 + v1;
    ST32(s3+16, v0);
    goto L_08A3DB9C;
L_08A3DB9C:;
    s6 = 0 + 0;
    fp = 0 + 0;
    s5 = 0 + 0;
    s2 = 0 + 0;
    ST32(sp+24, 0);
    ST32(s3+24, 0);
    ST32(s3+28, 0);
    ST32(s3+32, 0);
    ST32(s3+36, 0);
    ST32(s3+40, 0);
    ST32(s3+44, 0);
    goto L_08A3DBC8;
L_08A3DBC8:;
    s4 = s2 << 1;
    v0 = s4 + s2;
    v0 = v0 << 2;
    v0 = s0 + v0;
    s1 = v0 + 4;
    v0 = LD32(s1+4);
    cnd_ = v0 == a2;
    v0 = v0 ^ 0x2;
    if (cnd_) { goto L_08A3DD58; }
    goto L_08A3DBE8;
L_08A3DBE8:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3DCD4; }
    goto L_08A3DBF0;
L_08A3DBF0:;
    s5 = s5 + 1;
    goto L_08A3DBF4;
L_08A3DBF4:;
    s2 = s2 + 1;
    goto L_08A3DBF8;
L_08A3DBF8:;
    v0 = s2 < 0x10u;
    cnd_ = v0 == 0;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_08A3DC0C; }
    goto L_08A3DC04;
L_08A3DC04:;
    a2 = LD32(s0+272);
    goto L_08A3DBC8;
L_08A3DC0C:;
    a1 = LD32(s3+32);
    a0 = 1;
    v0 = s7 - v1;
    v0 = (s32)v0 > (s32)a0 ? v0 : a0;
    { u32 x_ = a1, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = LD32(s3+36);
    v1 = s6 - fp;
    v1 = (s32)v1 > (s32)a0 ? v1 : a0;
    v0 = LD32(sp);
    a1 = lo;
    { u32 x_ = a2, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    ST32(s3+32, a1);
    a2 = lo;
    cnd_ = (s32)v0 <= 0;
    ST32(s3+36, a2);
    if (cnd_) { goto L_08A3DCAC; }
    goto L_08A3DC48;
L_08A3DC48:;
    v0 = s5 + s6;
    ST32(s3+4, 0);
    ST32(s3+12, 0);
    ST32(s3+20, 0);
    ST32(s3+28, 0);
    ST32(s3+36, 0);
    cnd_ = v0 != 0;
    ST32(s3+44, 0);
    if (cnd_) { goto L_08A3DC70; }
    goto L_08A3DC68;
L_08A3DC68:;
    v0 = 9999;
    ST32(s3+56, v0);
    goto L_08A3DC70;
L_08A3DC70:;
    a0 = s3 + 0;
    func_08A3D200(a0);
    goto L_08A3DC78;
L_08A3DC78:;
    v0 = s3 + 0;
    sp = sp + 80;
    return;
L_08A3DCAC:;
    v1 = LD32(sp);
    cnd_ = (s32)v1 >= 0;
    if (cnd_) { goto L_08A3DC70; }
    goto L_08A3DCB8;
L_08A3DCB8:;
    ST32(s3, 0);
    ST32(s3+8, 0);
    ST32(s3+16, 0);
    ST32(s3+24, 0);
    ST32(s3+32, 0);
    ST32(s3+40, 0);
    goto L_08A3DC70;
L_08A3DCD4:;
    a1 = s2 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3DCDC;
L_08A3DCDC:;
    v1 = LD32(s3+28);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v1 = v1 + v0;
    ST32(s3+28, v1);
    s6 = s6 + 1;
    { u64 r_ = func_08A41390(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3DCF8;
L_08A3DCF8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A3DD48; }
    goto L_08A3DD00;
L_08A3DD00:;
    fp = fp + 1;
    goto L_08A3DD04;
L_08A3DD04:;
    a1 = s2 + 0;
    a0 = s0 + 0;
    v0 = func_08A41228(a0, a1);
    goto L_08A3DD10;
L_08A3DD10:;
    a1 = v0 + 0;
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A3DBF8; }
    goto L_08A3DD20;
L_08A3DD20:;
    v0 = s4 + s2;
    v0 = v0 << 2;
    v0 = s0 + v0;
    v1 = LD32(v0+12);
    a0 = LD32(s3+44);
    { u32 x_ = v1, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = lo;
    a0 = a0 + v1;
    ST32(s3+44, a0);
    goto L_08A3DBF4;
L_08A3DD48:;
    v0 = LD32(s3+36);
    v0 = v0 + v1;
    ST32(s3+36, v0);
    goto L_08A3DD04;
L_08A3DD58:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3DD64;
L_08A3DD64:;
    v1 = LD32(s3+24);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v1 = v1 + v0;
    ST32(s3+24, v1);
    s7 = s7 + 1;
    { u64 r_ = func_08A41390(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3DD80;
L_08A3DD80:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A3DDD8; }
    goto L_08A3DD88;
L_08A3DD88:;
    a0 = LD32(sp+24);
    a0 = a0 + 1;
    ST32(sp+24, a0);
    goto L_08A3DD94;
L_08A3DD94:;
    a1 = s2 + 0;
    a0 = s0 + 0;
    v0 = func_08A41228(a0, a1);
    goto L_08A3DDA0;
L_08A3DDA0:;
    a1 = v0 + 0;
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A3DBF8; }
    goto L_08A3DDB0;
L_08A3DDB0:;
    v0 = s4 + s2;
    v0 = v0 << 2;
    v0 = s0 + v0;
    v1 = LD32(v0+12);
    a0 = LD32(s3+40);
    { u32 x_ = v1, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = lo;
    a0 = a0 + v1;
    ST32(s3+40, a0);
    goto L_08A3DBF4;
L_08A3DDD8:;
    v0 = LD32(s3+32);
    v0 = v0 + v1;
    ST32(s3+32, v0);
    goto L_08A3DD94;
L_08A3DDE8:;
    a2 = LD32(s0+272);
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3DDF0;
L_08A3DDF0:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+20);
    if (cnd_) { goto L_08A3DAAC; }
    goto L_08A3DDF8;
L_08A3DDF8:;
    s5 = 1;
    goto L_08A3DAAC;
L_08A3DE00:;
    a2 = LD32(s0+352);
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3DE08;
L_08A3DE08:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A3DA7C; }
    goto L_08A3DE10;
L_08A3DE10:;
    s2 = 1;
    goto L_08A3DA78;
L_08A3DE18:;
    a0 = LD32(sp+12);
    a0 = a0 + 1;
    ST32(sp+12, a0);
    goto L_08A3DA44;
L_08A3DE28:;
    v0 = func_08A4356C();
    goto L_08A3DE30;
L_08A3DE30:;
    a0 = D_08B1C60C - (-14836);
    a0 = a0 - 14836;
    v1 = s6 + a0;
    a0 = LD32(v1+8);
    v1 = LD32(sp+4);
    { s64 p_ = (s64)(s32)v0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v1 = v1 + v0;
    ST32(sp+4, v1);
    goto L_08A3D9E4;
L_08A3DE58:;
    a0 = LD32(s0);
    a1 = LD32(sp+8);
    v0 = func_08A3848C(a0, a1);
    goto L_08A3DE64;
L_08A3DE64:;
    v0 = LD32(v0+8);
    goto L_08A3D9D4;
L_08A3DE6C:;
    v0 = LD32(s3+8);
    v1 = LD32(a3);
    v0 = v0 + v1;
    ST32(s3+8, v0);
    goto L_08A3D974;
}

/* 08A3DE80 */
void func_08A3DE80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3DE80:;
    sp = sp - 16;
    v0 = a1 + 128;
    v1 = 2;
    goto L_08A3DE90;
L_08A3DE90:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08A3DE90; }
    goto L_08A3DEA0;
L_08A3DEA0:;
    v0 = a1 + 140;
    v1 = 3;
    goto L_08A3DEA8;
L_08A3DEA8:;
    v1 = v1 - 1;
    ST8(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08A3DEA8; }
    goto L_08A3DEB8;
L_08A3DEB8:;
    v0 = D_08AEFC00 - (-1024);
    f0 = BITSF(LD32(v0-1024));
    a2 = 0 + 0;
    a3 = 16;
    v1 = a1 + 0;
    goto L_08A3DECC;
L_08A3DECC:;
    a2 = a2 + 1;
    v0 = a2 < 0x2u;
    ST32(v1+144, a3);
    ST32(v1+152, a3);
    ST32(v1+160, 0);
    ST32(v1+168, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A3DECC; }
    goto L_08A3DEEC;
L_08A3DEEC:;
    func_08A3DF00(a0, a1);
    goto L_08A3DEF4;
L_08A3DEF4:;
    sp = sp + 16;
    return;
}

/* 08A3DF00 */
void func_08A3DF00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3DF00:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = a1 + 0;
    goto L_08A3DF28;
L_08A3DF28:;
    a0 = LD32(s2);
    ST32(s0, 0);
    a1 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A3DF38;
L_08A3DF38:;
    v1 = LD32(v0+4);
    v0 = LD32(s2+272);
    a1 = s1 + 0;
    a0 = 0 + 0;
    cnd_ = v1 == v0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A3DFA0; }
    goto L_08A3DF50;
L_08A3DF50:;
    v0 = (s32)s1 < 16;
    ST32(s0+64, a0);
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A3DF28; }
    goto L_08A3DF60;
L_08A3DF60:;
    v1 = 16;
    v0 = 5;
    ST32(s3+180, v1);
    ST32(s3+248, v0);
    ST8(s3+252, 0);
    ST32(s3+176, v1);
    ST32(s3+184, 0);
    ST32(s3+240, 0);
    ST32(s3+236, 0);
    sp = sp + 32;
    return;
L_08A3DFA0:;
    a0 = LD32(s2);
    v0 = func_08A384A4(a0, a1);
    goto L_08A3DFA8;
L_08A3DFA8:;
    a0 = LD32(v0+8);
    goto L_08A3DF50;
}

/* 08A3DFB0 */
u32 func_08A3DFB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3DFB0:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = t0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+368);
    v1 = LD32(a0+376);
    cnd_ = v0 == v1;
    t1 = v0 << 8;
    if (cnd_) { goto L_08A3E024; }
    goto L_08A3DFF0;
L_08A3DFF0:;
    a1 = LD32(a0+364);
    a1 = a1 + t1;
    func_08A3DE80(a0, a1);
    goto L_08A3DFFC;
L_08A3DFFC:;
    v1 = LD32(s0+368);
    a0 = LD32(s0+364);
    v0 = v1 << 8;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0+156, s1);
    ST32(s0+368, v1);
    ST32(v0+144, s4);
    ST32(v0+152, s2);
    ST32(v0+148, s3);
    goto L_08A3E024;
L_08A3E024:;
    sp = sp + 32;
    return v0;
}

/* 08A3E044 */
void func_08A3E044(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A3E044:;
    ST32(a0+368, 0);
    sp = sp - 80;
    v0 = 4;
    s1 = a0 + 0;
    s2 = 3;
    s0 = 0 + 0;
    ST32(sp, v0);
    func_08A3D708(a0);
    goto L_08A3E08C;
L_08A3E08C:;
    a0 = LD32(s1+240);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3E094;
L_08A3E094:;
    a0 = LD32(s1+240);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3E09C;
L_08A3E09C:;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A3E568; }
    goto L_08A3E0A4;
L_08A3E0A4:;
    a0 = LD32(s1);
    v0 = func_08A3848C(a0, a1);
    goto L_08A3E0AC;
L_08A3E0AC:;
    v0 = LD32(v0+4);
    goto L_08A3E0B0;
L_08A3E0B0:;
    cnd_ = v0 == s2;
    if (cnd_) { ST32(sp, s0); goto L_08A3E0C8; }
    goto L_08A3E0B8;
L_08A3E0B8:;
    s0 = s0 + 1;
    v0 = s0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3E094; }
    goto L_08A3E0C8;
L_08A3E0C8:;
    ST32(sp+28, 0);
    s3 = 0 + 0;
    s6 = s1 + 8;
    goto L_08A3E0D4;
L_08A3E0D4:;
    v0 = s3 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_08A3E54C; }
    goto L_08A3E0E0;
L_08A3E0E0:;
    v1 = LD32(s6);
    v0 = LD32(s1+272);
    cnd_ = v1 == v0;
    v0 = D_08B1C34C - (-15540);
    if (cnd_) { goto L_08A3E354; }
    goto L_08A3E0F0;
L_08A3E0F0:;
    v1 = LD32(sp+28);
    goto L_08A3E0F4;
L_08A3E0F4:;
    s3 = s3 + 1;
    v0 = s3 < 0x11u;
    v1 = v1 + 44;
    s6 = s6 + 12;
    cnd_ = v0 != 0;
    ST32(sp+28, v1);
    if (cnd_) { goto L_08A3E0D4; }
    goto L_08A3E10C;
L_08A3E10C:;
    v0 = LD32(s1+368);
    s7 = 0 + 0;
    fp = 0 + 0;
    ST32(s1+372, v0);
    s5 = 5;
    s6 = 0 + 0;
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A3E34C; }
    goto L_08A3E12C;
L_08A3E12C:;
    a3 = LD32(s1+364);
    s3 = 0 + 0;
    goto L_08A3E134;
L_08A3E134:;
    s2 = s4 << 8;
    a1 = a3 + s2;
    goto L_08A3E13C;
L_08A3E13C:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    v0 = func_08A3E57C(a1, a2);
    goto L_08A3E148;
L_08A3E148:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+364); goto L_08A3E210; }
    goto L_08A3E150;
L_08A3E150:;
    a3 = LD32(s1+364);
    goto L_08A3E154;
L_08A3E154:;
    s3 = s3 + 1;
    goto L_08A3E158;
L_08A3E158:;
    v0 = s3 < 0x400u;
    cnd_ = v0 != 0;
    a1 = a3 + s2;
    if (cnd_) { goto L_08A3E13C; }
    goto L_08A3E164;
L_08A3E164:;
    v0 = LD32(s1+368);
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A3E134; }
    goto L_08A3E178;
L_08A3E178:;
    a1 = LD32(s1+372);
    a2 = fp + 0;
    a0 = s1 + 0;
    a1 = a1 << 8;
    a1 = a3 + a1;
    v0 = func_08A3E57C(a1, a2);
    goto L_08A3E190;
L_08A3E190:;
    v1 = LD32(s1+372);
    a1 = LD32(s1+364);
    a0 = s1 + 0;
    v1 = v1 << 8;
    a1 = a1 + v1;
    v0 = func_08A3E5E4(a0, a1);
    goto L_08A3E1A8;
L_08A3E1A8:;
    a0 = s1 + 0;
    func_08A3D708(a0);
    goto L_08A3E1B0;
L_08A3E1B0:;
    v1 = LD32(s1+372);
    v0 = LD32(s1+364);
    v1 = v1 << 8;
    v1 = v1 + v0;
    a0 = LD32(v1+152);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = s1 + v0;
    v1 = LD32(v0+12);
    ST32(s1+356, a0);
    ST32(s1+360, v1);
    sp = sp + 80;
    return;
L_08A3E210:;
    a0 = s1 + 0;
    a1 = a1 + s2;
    func_08A3DF00(a0, a1);
    goto L_08A3E21C;
L_08A3E21C:;
    a1 = LD32(s1+364);
    a0 = s1 + 0;
    a1 = a1 + s2;
    v0 = func_08A3E5E4(a0, a1);
    goto L_08A3E22C;
L_08A3E22C:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_08A3D708(a0);
    goto L_08A3E238;
L_08A3E238:;
    cnd_ = s0 == 0;
    if (cnd_) { a3 = LD32(s1+364); goto L_08A3E154; }
    goto L_08A3E240;
L_08A3E240:;
    a1 = LD32(s1+364);
    a0 = s1 + 0;
    a1 = a1 + s2;
    func_08A3FB1C(a0, a1);
    goto L_08A3E250;
L_08A3E250:;
    a0 = s1 + 0;
    func_08A3D708(a0);
    goto L_08A3E258;
L_08A3E258:;
    a3 = LD32(s1+364);
    t0 = LD32(s1+372);
    a2 = LD32(s1+368);
    a1 = s2 + a3;
    a0 = LD32(a1+236);
    v0 = LD32(a1+240);
    v1 = t0 < a2;
    t1 = a3 + 0;
    cnd_ = v1 == 0;
    t2 = a0 - v0;
    if (cnd_) { goto L_08A3E2A4; }
    goto L_08A3E280;
L_08A3E280:;
    v0 = LD_U8(a1+252);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1+248); goto L_08A3E298; }
    goto L_08A3E28C;
L_08A3E28C:;
    cnd_ = s6 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_08A3E158; }
    goto L_08A3E294;
L_08A3E294:;
    v0 = LD32(a1+248);
    goto L_08A3E298;
L_08A3E298:;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_08A3E158; }
    goto L_08A3E2A4;
L_08A3E2A4:;
    a1 = s2 + t1;
    v1 = LD32(a1+152);
    a0 = LD32(s1+356);
    cnd_ = v1 == a0;
    v0 = v1 << 1;
    if (cnd_) { goto L_08A3E314; }
    goto L_08A3E2B8;
L_08A3E2B8:;
    v0 = LD32(a1+156);
    cnd_ = v0 == a0;
    v0 = v1 << 1;
    if (cnd_) { goto L_08A3E314; }
    goto L_08A3E2C4;
L_08A3E2C4:;
    cnd_ = t0 == a2;
    v1 = s2 + t1;
    if (cnd_) { goto L_08A3E2F8; }
    goto L_08A3E2CC;
L_08A3E2CC:;
    v0 = LD_U8(v1+252);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+248); goto L_08A3E2E4; }
    goto L_08A3E2D8;
L_08A3E2D8:;
    cnd_ = s6 == 0;
    if (cnd_) { ST32(s1+372, s4); goto L_08A3E2FC; }
    goto L_08A3E2E0;
L_08A3E2E0:;
    v0 = LD32(v1+248);
    goto L_08A3E2E4;
L_08A3E2E4:;
    v1 = (s32)s7 < (s32)t2;
    v0 = v0 < s5;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_08A3E158; }
    goto L_08A3E2F8;
L_08A3E2F8:;
    ST32(s1+372, s4);
    goto L_08A3E2FC;
L_08A3E2FC:;
    v0 = s2 + t1;
    s7 = t2 + 0;
    s6 = LD_U8(v0+252);
    s5 = LD32(v0+248);
    fp = s3 + 0;
    goto L_08A3E154;
L_08A3E314:;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = s1 + v0;
    v1 = LD32(v0+12);
    a0 = LD32(s1+360);
    v1 = v1 < a0;
    cnd_ = v1 != 0;
    a0 = 3;
    if (cnd_) { goto L_08A3E2C4; }
    goto L_08A3E334;
L_08A3E334:;
    ST32(a1+248, a0);
    t2 = (u32)-9999;
    ST8(a1+252, 0);
    a2 = LD32(s1+368);
    t0 = LD32(s1+372);
    goto L_08A3E2C4;
L_08A3E34C:;
    a3 = LD32(s1+364);
    goto L_08A3E178;
L_08A3E354:;
    a0 = v0 - 15540;
    v0 = LD32(sp+28);
    v1 = v0 + a0;
    v0 = LD32(v1+28);
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A3E0F0; }
    goto L_08A3E36C;
L_08A3E36C:;
    ST32(sp+4, v1);
    v1 = LD32(sp+28);
    ST32(sp+8, v1);
    v0 = LD32(sp+8);
    goto L_08A3E37C;
L_08A3E37C:;
    a1 = s5 + 0;
    s0 = v0 + a0;
    a0 = s0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3E38C;
L_08A3E38C:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s1 + v1;
    a0 = LD32(v1+8);
    v0 = LD32(s1+272);
    cnd_ = a0 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A3E3E0; }
    goto L_08A3E3AC;
L_08A3E3AC:;
    a1 = s5 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3E3B4;
L_08A3E3B4:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s3 + 0;
    a3 = 16;
    t0 = 16;
    s4 = v0 + 0;
    v0 = func_08A3DFB0(a0, a1, a2, a3, t0);
    goto L_08A3E3D0;
L_08A3E3D0:;
    a0 = LD32(s0+4);
    v1 = LD32(sp);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD_U8(s1+263); goto L_08A3E408; }
    goto L_08A3E3E0;
L_08A3E3E0:;
    a0 = LD32(sp+4);
    goto L_08A3E3E4;
L_08A3E3E4:;
    s5 = s5 + 1;
    v0 = LD32(a0+28);
    a0 = D_08B1C34C - (-15540);
    a0 = a0 - 15540;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A3E37C; }
    goto L_08A3E400;
L_08A3E400:;
    v1 = LD32(sp+28);
    goto L_08A3E0F4;
L_08A3E408:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+4); goto L_08A3E3E4; }
    goto L_08A3E410;
L_08A3E410:;
    a0 = a0 << 5;
    ST32(sp+24, a0);
    v0 = D_08B1C60C - (-14836);
    a0 = v0 - 14836;
    v1 = LD32(sp+24);
    a1 = v1 + a0;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08A3E3E0; }
    goto L_08A3E434;
L_08A3E434:;
    ST32(sp+12, a1);
    goto L_08A3E438;
L_08A3E438:;
    v1 = v1 + a0;
    v0 = s7 << 2;
    v0 = v0 + v1;
    s0 = LD32(v0+12);
    a0 = LD32(s1+272);
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 2;
    v0 = s1 + v0;
    v1 = LD32(v0+8);
    cnd_ = v1 == a0;
    v0 = 44;
    if (cnd_) { goto L_08A3E490; }
    goto L_08A3E468;
L_08A3E468:;
    v1 = LD32(sp+12);
    goto L_08A3E46C;
L_08A3E46C:;
    s7 = s7 + 1;
    a0 = D_08B1C60C - (-14836);
    a0 = a0 - 14836;
    v0 = LD32(v1+8);
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_08A3E438; }
    goto L_08A3E488;
L_08A3E488:;
    a0 = LD32(sp+4);
    goto L_08A3E3E4;
L_08A3E490:;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v1 = v0 - 15540;
    a0 = lo;
    a1 = a0 + v1;
    v0 = LD32(a1+28);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A3E468; }
    goto L_08A3E4B0;
L_08A3E4B0:;
    v0 = s3 ^ s0;
    v0 = v0 < 0x1u;
    ST32(sp+16, a0);
    fp = a1 + 0;
    ST32(sp+20, v0);
    v0 = LD32(sp+16);
    goto L_08A3E4C8;
L_08A3E4C8:;
    a1 = s2 + 0;
    s2 = s2 + 1;
    a0 = v0 + v1;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3E4D8;
L_08A3E4D8:;
    v1 = v0 << 1;
    a0 = LD32(sp+20);
    v1 = v1 + v0;
    t0 = v0 + 0;
    v0 = s4 ^ v0;
    v0 = v0 < 0x1u;
    v1 = v1 << 2;
    v0 = a0 & v0;
    cnd_ = v0 == 0;
    v1 = s1 + v1;
    if (cnd_) { goto L_08A3E520; }
    goto L_08A3E500;
L_08A3E500:;
    v0 = LD32(fp+28);
    goto L_08A3E504;
L_08A3E504:;
    v1 = D_08B1C34C - (-15540);
    v1 = v1 - 15540;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A3E4C8; }
    goto L_08A3E518;
L_08A3E518:;
    v1 = LD32(sp+12);
    goto L_08A3E46C;
L_08A3E520:;
    v1 = LD32(v1+8);
    v0 = LD32(s1+272);
    a0 = s1 + 0;
    a1 = s3 + 0;
    a2 = s4 + 0;
    cnd_ = v1 == v0;
    a3 = s0 + 0;
    if (cnd_) { goto L_08A3E500; }
    goto L_08A3E53C;
L_08A3E53C:;
    v0 = func_08A3DFB0(a0, a1, a2, a3, t0);
    goto L_08A3E544;
L_08A3E544:;
    v0 = LD32(fp+28);
    goto L_08A3E504;
L_08A3E54C:;
    a1 = 16;
    a2 = 16;
    a3 = 16;
    t0 = 16;
    v0 = func_08A3DFB0(a0, a1, a2, a3, t0);
    goto L_08A3E560;
L_08A3E560:;
    v1 = LD32(sp+28);
    goto L_08A3E0F4;
L_08A3E568:;
    a0 = LD32(s1);
    a1 = s0 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A3E574;
L_08A3E574:;
    v0 = LD32(v0+8);
    goto L_08A3E0B0;
}

/* 08A3E57C */
u32 func_08A3E57C(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A3E57C:;
    a3 = 0 + 0;
    v1 = a1 + 128;
    goto L_08A3E584;
L_08A3E584:;
    v0 = a3 << 1;
    v0 = a2 >> (v0 & 31);
    a0 = v0 & 0x3;
    a3 = a3 + 1;
    v0 = a0 < 0x3u;
    t0 = a3 < 0x3u;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A3E5DC; }
    goto L_08A3E5A4;
L_08A3E5A4:;
    ST32(v1, a0);
    cnd_ = t0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A3E584; }
    goto L_08A3E5B0;
L_08A3E5B0:;
    a1 = a1 + 140;
    a0 = 0 + 0;
    goto L_08A3E5B8;
L_08A3E5B8:;
    v0 = a0 + 6;
    v0 = a2 >> (v0 & 31);
    a0 = a0 + 1;
    v0 = v0 & 0x1;
    v1 = a0 < 0x4u;
    ST8(a1, v0);
    cnd_ = v1 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A3E5B8; }
    goto L_08A3E5D8;
L_08A3E5D8:;
    t1 = 1;
    goto L_08A3E5DC;
L_08A3E5DC:;
    v0 = t1 + 0;
    return v0;
}

/* 08A3E5E4 */
u32 func_08A3E5E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_08A3E5E4:;
    sp = sp - 224;
    s6 = a1 + 0;
    s5 = 0 + 0;
    v0 = LD_U8(a1+142);
    cnd_ = v0 == 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_08A3E68C; }
    goto L_08A3E628;
L_08A3E628:;
    v0 = LD_U8(a0+262);
    cnd_ = v0 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3E634;
L_08A3E634:;
    v0 = LD_U8(a0+266);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3E678; }
    goto L_08A3E640;
L_08A3E640:;
    goto L_08A3E644;
L_08A3E644:;
    v0 = t4 + 0;
    sp = sp + 224;
    return v0;
L_08A3E678:;
    a0 = 2;
    v0 = func_08A43360(a0);
    goto L_08A3E680;
L_08A3E680:;
    s5 = v0 + 0;
    v0 = 1;
    ST8(s4+266, v0);
    goto L_08A3E68C;
L_08A3E68C:;
    s3 = 0 + 0;
    s7 = 1;
    fp = 2;
    s2 = s6 + 128;
    s1 = s4 + 0;
    goto L_08A3E6A0;
L_08A3E6A0:;
    v0 = LD32(s1+248);
    v1 = LD32(s2);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3F6F8; }
    goto L_08A3E6B4;
L_08A3E6B4:;
    cnd_ = v1 == s7;
    if (cnd_) { a0 = s3 + 0; goto L_08A3F6E8; }
    goto L_08A3E6BC;
L_08A3E6BC:;
    cnd_ = v1 != fp;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3E6C4;
L_08A3E6C4:;
    a0 = s3 + 0;
    a1 = 2;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3E6D0;
L_08A3E6D0:;
    s0 = v0 + 0;
    v0 = LD32(s1+248);
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A3F6D8; }
    goto L_08A3E6E0;
L_08A3E6E0:;
    v0 = LD_U8(s4+266);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08A3E714; }
    goto L_08A3E6EC;
L_08A3E6EC:;
    f0 = BITSF(s0);
    cnd_ = (s32)s0 < 0;
    f20 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A3F6BC; }
    goto L_08A3E6F8;
L_08A3E6F8:;
    { rv_t r_ = func_08A43404(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3E700;
L_08A3E700:;
    f0 = f20 * f0;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    s0 = s0 - v0;
    v0 = LD32(s2);
    goto L_08A3E714;
L_08A3E714:;
    s5 = s5 + s0;
    ST32(s1+248, v0);
    goto L_08A3E71C;
L_08A3E71C:;
    s3 = s3 + 1;
    v0 = s3 < 0x3u;
    s1 = s1 + 4;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A3E6A0; }
    goto L_08A3E730;
L_08A3E730:;
    v0 = LD32(s4+244);
    v0 = v0 < s5;
    cnd_ = v0 != 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3E740;
L_08A3E740:;
    s3 = 0 + 0;
    s7 = 2;
    fp = 1;
    s1 = s4 + 256;
    s2 = s6 + 140;
    goto L_08A3E754;
L_08A3E754:;
    cnd_ = s3 == s7;
    if (cnd_) { s3 = s3 + 1; goto L_08A3E7D0; }
    goto L_08A3E75C;
L_08A3E75C:;
    v0 = LD_U8(s2);
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A3E7CC; }
    goto L_08A3E768;
L_08A3E768:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3E774;
L_08A3E774:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3E644; }
    goto L_08A3E780;
L_08A3E780:;
    v0 = func_08A43360(a0);
    goto L_08A3E788;
L_08A3E788:;
    ST8(s1+8, fp);
    f0 = BITSF(v0);
    s0 = v0 + 0;
    v0 = LD_U8(s4+266);
    cnd_ = v0 == 0;
    f20 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A3E7C8; }
    goto L_08A3E7A0;
L_08A3E7A0:;
    v1 = s0 & 0x1;
    v0 = s0 >> 1;
    cnd_ = (s32)s0 < 0;
    v1 = v1 | v0;
    if (cnd_) { goto L_08A3F6AC; }
    goto L_08A3E7B0;
L_08A3E7B0:;
    { rv_t r_ = func_08A4344C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3E7B8;
L_08A3E7B8:;
    f0 = f20 * f0;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    s0 = s0 - v0;
    goto L_08A3E7C8;
L_08A3E7C8:;
    s5 = s5 + s0;
    goto L_08A3E7CC;
L_08A3E7CC:;
    s3 = s3 + 1;
    goto L_08A3E7D0;
L_08A3E7D0:;
    v0 = s3 < 0x4u;
    s2 = s2 + 1;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A3E754; }
    goto L_08A3E7E0;
L_08A3E7E0:;
    v0 = LD32(s4+244);
    v0 = v0 < s5;
    cnd_ = v0 != 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3E7F0;
L_08A3E7F0:;
    v0 = LD32(s6+148);
    a0 = LD32(s4+240);
    v0 = v0 ^ 0x10;
    s7 = 0 < v0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3E804;
L_08A3E804:;
    cnd_ = s7 == 0;
    if (cnd_) { a1 = LD32(s6+152); goto L_08A3E81C; }
    goto L_08A3E80C;
L_08A3E80C:;
    v0 = LD_U8(s4+267);
    cnd_ = v0 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3E818;
L_08A3E818:;
    a1 = LD32(s6+152);
    goto L_08A3E81C;
L_08A3E81C:;
    v0 = LD32(s4+244);
    a2 = LD32(s4+272);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v1 = s4 + v1;
    a0 = LD32(v1+8);
    v0 = v0 - s5;
    cnd_ = a0 == a2;
    ST32(s4+244, v0);
    if (cnd_) { goto L_08A3F678; }
    goto L_08A3E844;
L_08A3E844:;
    a3 = 0 + 0;
    t2 = 16;
    a0 = s6 + 0;
    goto L_08A3E850;
L_08A3E850:;
    v0 = LD32(a0+144);
    t0 = sp + 32;
    v1 = t0 + a3;
    cnd_ = v0 == t2;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A3F670; }
    goto L_08A3E864;
L_08A3E864:;
    v0 = LD32(a0+152);
    t0 = v1 + 0;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s4 + v1;
    v1 = LD32(v1+8);
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(t0, t1); goto L_08A3E898; }
    goto L_08A3E88C;
L_08A3E88C:;
    cnd_ = v1 != a2;
    if (cnd_) { t1 = 1; goto L_08A3E894; }
    goto L_08A3E894;
L_08A3E894:;
    ST8(t0, t1);
    goto L_08A3E898;
L_08A3E898:;
    a3 = a3 + 1;
    v0 = a3 < 0x2u;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A3E850; }
    goto L_08A3E8A8;
L_08A3E8A8:;
    fp = 16;
    a0 = 0 + 0;
    v1 = s4 + 0;
    goto L_08A3E8B4;
L_08A3E8B4:;
    v0 = LD32(v1+8);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD_U8(v1+4); goto L_08A3F668; }
    goto L_08A3E8C0;
L_08A3E8C0:;
    a0 = a0 + 1;
    v0 = a0 < 0x10u;
    cnd_ = v0 != 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_08A3E8B4; }
    goto L_08A3E8D0;
L_08A3E8D0:;
    v0 = LD_U8(sp+32);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A3E910; }
    goto L_08A3E8DC;
L_08A3E8DC:;
    v0 = LD_U8(sp+33);
    cnd_ = v0 == 0;
    v0 = (s32)a1 < 16;
    if (cnd_) { goto L_08A3E94C; }
    goto L_08A3E8E8;
L_08A3E8E8:;
    v1 = LD32(s6+144);
    v0 = 16;
    cnd_ = v1 == v0;
    v0 = a1 << 1;
    if (cnd_) { goto L_08A3E90C; }
    goto L_08A3E8F8;
L_08A3E8F8:;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + s4;
    ST32(v0+8, a2);
    a2 = LD32(s4+272);
    goto L_08A3E90C;
L_08A3E90C:;
    s1 = 0 + 0;
    goto L_08A3E910;
L_08A3E910:;
    s5 = sp + 16;
    s0 = s4 + 8;
    goto L_08A3E918;
L_08A3E918:;
    v0 = LD32(s0);
    a1 = s1 + 0;
    a0 = s4 + 0;
    s2 = s5 + s1;
    cnd_ = v0 == a2;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A3F650; }
    goto L_08A3E930;
L_08A3E930:;
    s1 = s1 + 1;
    v0 = s1 < 0x10u;
    ST8(s2, s3);
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08A3E918; }
    goto L_08A3E944;
L_08A3E944:;
    a1 = LD32(s6+152);
    v0 = (s32)a1 < 16;
    goto L_08A3E94C;
L_08A3E94C:;
    s3 = 2;
    cnd_ = v0 == 0;
    s5 = 2;
    if (cnd_) { goto L_08A3E974; }
    goto L_08A3E958;
L_08A3E958:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = s4 + v0;
    s3 = LD32(v0+8);
    ST32(v0+8, a2);
    a2 = LD32(s4+272);
    goto L_08A3E974;
L_08A3E974:;
    v1 = LD32(s6+156);
    v0 = (s32)v1 < 16;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3E9A0; }
    goto L_08A3E984;
L_08A3E984:;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = s4 + v0;
    s5 = LD32(v0+8);
    ST32(v0+8, a2);
    a2 = LD32(s4+272);
    goto L_08A3E9A0;
L_08A3E9A0:;
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 2;
    v0 = s4 + v0;
    v1 = LD32(v0+8);
    a1 = s0 + 0;
    s1 = sp + s0;
    a0 = s4 + 0;
    s0 = s0 + 1;
    cnd_ = v1 == a2;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A3F638; }
    goto L_08A3E9CC;
L_08A3E9CC:;
    v0 = s0 < 0x10u;
    goto L_08A3E9D0;
L_08A3E9D0:;
    cnd_ = v0 == 0;
    ST8(s1, s2);
    if (cnd_) { goto L_08A3E9E0; }
    goto L_08A3E9D8;
L_08A3E9D8:;
    a2 = LD32(s4+272);
    goto L_08A3E9A0;
L_08A3E9E0:;
    a1 = LD32(s6+152);
    v0 = (s32)a1 < 16;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s6+156); goto L_08A3EA08; }
    goto L_08A3E9F0;
L_08A3E9F0:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + s4;
    ST32(v0+8, s3);
    a2 = LD32(s6+156);
    goto L_08A3EA08;
L_08A3EA08:;
    v0 = (s32)a2 < 16;
    cnd_ = v0 == 0;
    v0 = LD_U8(sp+32);
    if (cnd_) { goto L_08A3EA2C; }
    goto L_08A3EA14;
L_08A3EA14:;
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v0 = v0 + s4;
    ST32(v0+8, s5);
    v0 = LD_U8(sp+32);
    goto L_08A3EA2C;
L_08A3EA2C:;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A3EA94; }
    goto L_08A3EA34;
L_08A3EA34:;
    v0 = LD_U8(sp+33);
    cnd_ = v0 != 0;
    v1 = 16;
    if (cnd_) { goto L_08A3EA98; }
    goto L_08A3EA40;
L_08A3EA40:;
    v0 = LD32(s6+144);
    v1 = sp + v0;
    a0 = LD_U8(v1);
    cnd_ = a0 == 0;
    v1 = 16;
    if (cnd_) { goto L_08A3EA98; }
    goto L_08A3EA54;
L_08A3EA54:;
    v0 = sp + a1;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    v1 = 16;
    if (cnd_) { goto L_08A3EA98; }
    goto L_08A3EA64;
L_08A3EA64:;
    cnd_ = s7 == 0;
    if (cnd_) { a3 = 1; goto L_08A3EA98; }
    goto L_08A3EA6C;
L_08A3EA6C:;
    v0 = LD32(s6+148);
    v1 = sp + v0;
    a0 = LD_U8(v1);
    cnd_ = a0 == 0;
    v1 = 16;
    if (cnd_) { goto L_08A3EA98; }
    goto L_08A3EA80;
L_08A3EA80:;
    v0 = sp + a2;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    v1 = 16;
    if (cnd_) { goto L_08A3EA98; }
    goto L_08A3EA90;
L_08A3EA90:;
    a3 = 1;
    goto L_08A3EA94;
L_08A3EA94:;
    v1 = 16;
    goto L_08A3EA98;
L_08A3EA98:;
    v0 = a3 & 0xff;
    ST8(s6+252, a3);
    ST32(sp+112, 0);
    ST32(sp+116, v1);
    cnd_ = v0 != 0;
    ST32(sp+120, v1);
    if (cnd_) { goto L_08A3F620; }
    goto L_08A3EAB0;
L_08A3EAB0:;
    a0 = 2;
    v0 = 1;
    if (s7 == 0) a0 = v0;
    ST32(sp+124, a0);
    cnd_ = a0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A3EC20; }
    goto L_08A3EAC8;
L_08A3EAC8:;
    s5 = sp + 64;
    s7 = sp + 48;
    goto L_08A3EAD0;
L_08A3EAD0:;
    a1 = sp + 32;
    v0 = a1 + s3;
    v1 = LD_U8(v0);
    a2 = 0 + 0;
    cnd_ = v1 != 0;
    s2 = s3 << 2;
    if (cnd_) { goto L_08A3EB00; }
    goto L_08A3EAE8;
L_08A3EAE8:;
    v0 = s2 + s6;
    v1 = LD32(v0+144);
    a0 = sp + v1;
    v0 = LD_U8(a0);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 1; goto L_08A3EB00; }
    goto L_08A3EB00;
L_08A3EB00:;
    a1 = s2 + s6;
    v0 = LD32(a1+152);
    t0 = LD32(sp+112);
    ST8(s7, a2);
    v1 = sp + v0;
    a0 = LD_U8(v1);
    cnd_ = t0 != 0;
    ST8(s5, a0);
    if (cnd_) { goto L_08A3EC08; }
    goto L_08A3EB20;
L_08A3EB20:;
    v0 = a2 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(sp+112); goto L_08A3EBC4; }
    goto L_08A3EB2C;
L_08A3EB2C:;
    v1 = LD32(a1+144);
    v0 = 44;
    a0 = D_08B1C34C - (-15540);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 - 15540;
    v1 = lo;
    s0 = v1 + a0;
    v0 = LD32(s0+28);
    v0 = t0 < v0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A3EBC0; }
    goto L_08A3EB58;
L_08A3EB58:;
    a1 = s1 + 0;
    goto L_08A3EB5C;
L_08A3EB5C:;
    a0 = s0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3EB64;
L_08A3EB64:;
    a2 = v0 + 0;
    v0 = LD32(s6+144);
    cnd_ = a2 == v0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A3EBB0; }
    goto L_08A3EB74;
L_08A3EB74:;
    v0 = LD32(s6+148);
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08A3EBB4; }
    goto L_08A3EB80;
L_08A3EB80:;
    v0 = LD32(s6+152);
    cnd_ = a2 == v0;
    v0 = a2 << 1;
    if (cnd_) { goto L_08A3EBB0; }
    goto L_08A3EB8C;
L_08A3EB8C:;
    v1 = LD32(s6+156);
    v0 = v0 + a2;
    v0 = v0 << 2;
    cnd_ = a2 == v1;
    v0 = s4 + v0;
    if (cnd_) { goto L_08A3EBB0; }
    goto L_08A3EBA0;
L_08A3EBA0:;
    v1 = LD32(v0+8);
    v0 = LD32(s4+272);
    cnd_ = v1 == v0;
    a0 = sp + a2;
    if (cnd_) { goto L_08A3F5E0; }
    goto L_08A3EBB0;
L_08A3EBB0:;
    v0 = LD32(s0+28);
    goto L_08A3EBB4;
L_08A3EBB4:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A3EB5C; }
    goto L_08A3EBC0;
L_08A3EBC0:;
    t0 = LD32(sp+112);
    goto L_08A3EBC4;
L_08A3EBC4:;
    cnd_ = t0 != 0;
    a1 = LD32(sp+124);
    if (cnd_) { goto L_08A3EC0C; }
    goto L_08A3EBCC;
L_08A3EBCC:;
    v0 = LD_U8(s5);
    cnd_ = v0 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_08A3EC10; }
    goto L_08A3EBD8;
L_08A3EBD8:;
    v0 = s2 + s6;
    v1 = LD32(v0+152);
    v0 = 44;
    a0 = D_08B1C34C - (-15540);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 - 15540;
    v1 = lo;
    s0 = v1 + a0;
    v0 = LD32(s0+28);
    v0 = t0 < v0;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A3F540; }
    goto L_08A3EC08;
L_08A3EC08:;
    a1 = LD32(sp+124);
    goto L_08A3EC0C;
L_08A3EC0C:;
    s3 = s3 + 1;
    goto L_08A3EC10;
L_08A3EC10:;
    s7 = s7 + 1;
    v0 = (s32)s3 < (s32)a1;
    cnd_ = v0 != 0;
    s5 = s5 + 1;
    if (cnd_) { goto L_08A3EAD0; }
    goto L_08A3EC20;
L_08A3EC20:;
    v1 = LD32(s6+144);
    s3 = 0 + 0;
    v0 = (s32)v1 < 16;
    cnd_ = v0 == 0;
    ST32(sp+128, 0);
    if (cnd_) { goto L_08A3EC44; }
    goto L_08A3EC34;
L_08A3EC34:;
    v0 = LD32(s6+148);
    v0 = v1 ^ v0;
    v0 = v0 < 0x1u;
    ST32(sp+128, v0);
    goto L_08A3EC44;
L_08A3EC44:;
    a3 = 0 + 0;
    t3 = 0 + 0;
    a1 = s6 + 0;
    goto L_08A3EC50;
L_08A3EC50:;
    t0 = LD32(sp+128);
    a0 = 3;
    v1 = 2;
    if (t0 != 0) v1 = a0;
    a0 = LD32(a1+144);
    v0 = v1 << 2;
    v0 = v0 + v1;
    t1 = v0 << 1;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v1 = a0 << 2;
    a3 = a3 + 1;
    v0 = v0 << 2;
    a0 = (s32)a0 < 16;
    t0 = a3 < 0x2u;
    v0 = v0 + s4;
    a2 = v1 + s6;
    cnd_ = a0 == 0;
    t2 = 10;
    if (cnd_) { goto L_08A3F538; }
    goto L_08A3EC9C;
L_08A3EC9C:;
    v1 = LD32(v0+12);
    v1 = t1 - v1;
    v1 = (s32)v1 > (s32)t3 ? v1 : t3;
    ST32(a2, v1);
    s3 = s3 + v1;
    v0 = LD32(s4+244);
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3ECC0;
L_08A3ECC0:;
    v0 = LD32(sp+128);
    cnd_ = v0 != 0;
    ST32(a1+160, t2);
    if (cnd_) { goto L_08A3F530; }
    goto L_08A3ECCC;
L_08A3ECCC:;
    cnd_ = t0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A3EC50; }
    goto L_08A3ECD4;
L_08A3ECD4:;
    a0 = LD32(s4+244);
    v1 = a0 < s3;
    v0 = s3 < a0;
    cnd_ = v0 == 0;
    t4 = v1 < 0x1u;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3ECE8;
L_08A3ECE8:;
    v0 = (s32)fp < 16;
    cnd_ = v0 == 0;
    v0 = s3 < a0;
    if (cnd_) { goto L_08A3ED64; }
    goto L_08A3ECF4;
L_08A3ECF4:;
    v0 = sp + fp;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = fp << 1; goto L_08A3ED14; }
    goto L_08A3ED04;
L_08A3ED04:;
    v1 = LD_U8(v0+16);
    cnd_ = v1 != 0;
    v1 = a0 < s3;
    if (cnd_) { goto L_08A3ED60; }
    goto L_08A3ED10;
L_08A3ED10:;
    v0 = fp << 1;
    goto L_08A3ED14;
L_08A3ED14:;
    v0 = v0 + fp;
    v0 = v0 << 2;
    v0 = s4 + v0;
    v1 = D_08B1C330 - (-15568);
    a2 = LD32(v0+12);
    a1 = LD32(v1-15568);
    v0 = a2 < a1;
    cnd_ = v0 == 0;
    v1 = a0 < s3;
    if (cnd_) { goto L_08A3ED60; }
    goto L_08A3ED38;
L_08A3ED38:;
    v0 = a0 - s3;
    a1 = a1 - a2;
    a0 = a1 < v0;
    v1 = fp << 2;
    if (a0 != 0) v0 = a1;
    v1 = v1 + s6;
    ST32(v1, v0);
    s3 = s3 + v0;
    a0 = LD32(s4+244);
    v1 = a0 < s3;
    goto L_08A3ED60;
L_08A3ED60:;
    v0 = s3 < a0;
    goto L_08A3ED64;
L_08A3ED64:;
    cnd_ = v0 == 0;
    t4 = v1 < 0x1u;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3ED6C;
L_08A3ED6C:;
    v1 = sp + 32;
    a1 = sp + 64;
    t0 = sp + 80;
    ST32(sp+144, v1);
    s1 = s6 + 0;
    ST32(sp+132, 0);
    ST32(sp+136, a1);
    ST32(sp+140, sp);
    ST32(sp+148, t0);
    goto L_08A3ED90;
L_08A3ED90:;
    a1 = LD32(s1+144);
    v0 = (s32)a1 < 16;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+132); goto L_08A3F514; }
    goto L_08A3EDA0;
L_08A3EDA0:;
    v1 = LD32(sp+144);
    v0 = LD_U8(v1);
    cnd_ = v0 == 0;
    s2 = LD32(sp+148);
    if (cnd_) { goto L_08A3F4DC; }
    goto L_08A3EDB0;
L_08A3EDB0:;
    a0 = s4 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3EDB8;
L_08A3EDB8:;
    a1 = LD32(s1+152);
    a0 = s4 + 0;
    s0 = v0 - 10;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3EDC8;
L_08A3EDC8:;
    v1 = v0 < s0;
    if (v1 == 0) v0 = s0;
    goto L_08A3EDD0;
L_08A3EDD0:;
    a0 = LD32(sp+128);
    cnd_ = a0 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_08A3F4A8; }
    goto L_08A3EDDC;
L_08A3EDDC:;
    a0 = LD32(sp+140);
    v0 = LD32(s4+244);
    a1 = LD32(sp+140);
    v1 = LD32(a0+80);
    v0 = v0 - s3;
    a0 = 0 + 0;
    v1 = (s32)v1 < (s32)v0 ? v1 : v0;
    v1 = (s32)v1 > (s32)a0 ? v1 : a0;
    ST32(a1+80, v1);
    cnd_ = v1 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3EE08;
L_08A3EE08:;
    t0 = LD32(sp+144);
    a1 = LD32(sp+132);
    a0 = sp + 96;
    v1 = LD_U8(t0);
    v0 = a0 + a1;
    cnd_ = v1 == 0;
    ST8(v0, v1);
    if (cnd_) { goto L_08A3F39C; }
    goto L_08A3EE24;
L_08A3EE24:;
    v0 = sp + a1;
    v1 = LD_U8(v0+48);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s1+152); goto L_08A3EE48; }
    goto L_08A3EE34;
L_08A3EE34:;
    t0 = LD32(sp+136);
    v0 = LD_U8(t0);
    cnd_ = v0 == 0;
    a1 = LD32(sp+128);
    if (cnd_) { goto L_08A3EF80; }
    goto L_08A3EE44;
L_08A3EE44:;
    a0 = LD32(s1+152);
    goto L_08A3EE48;
L_08A3EE48:;
    v1 = a0 ^ 0x6;
    v1 = v1 < 0x1u;
    v0 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3EE7C; }
    goto L_08A3EE60;
L_08A3EE60:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = s4 + v0;
    v1 = LD_U8(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD_U8(s4+260); goto L_08A3EE84; }
    goto L_08A3EE7C;
L_08A3EE7C:;
    s0 = 1;
    v0 = LD_U8(s4+260);
    goto L_08A3EE84;
L_08A3EE84:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3EE94; }
    goto L_08A3EE8C;
L_08A3EE8C:;
    v0 = LD_U8(s4+264);
    a2 = 0 < v0;
    goto L_08A3EE94;
L_08A3EE94:;
    a0 = LD32(s4+252);
    a1 = LD32(s4+256);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3EEA4;
L_08A3EEA4:;
    fp = v0 + 0;
    v0 = LD_U8(s4+340);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3EEBC; }
    goto L_08A3EEB4;
L_08A3EEB4:;
    v0 = LD_U8(s4+344);
    a2 = 0 < v0;
    goto L_08A3EEBC;
L_08A3EEBC:;
    a0 = LD32(s4+332);
    a1 = LD32(s4+336);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3EECC;
L_08A3EECC:;
    v1 = LD32(s1+152);
    s7 = v0 + 0;
    v0 = D_08B1C308 - (-15608);
    f20 = BITSF(LD32(v0-15608));
    v0 = v1 << 1;
    v0 = v0 + v1;
    a0 = LD32(sp+132);
    v0 = v0 << 2;
    s0 = LD32(sp+140);
    v0 = s4 + v0;
    v1 = sp + 96;
    s2 = v0 + 4;
    s5 = v1 + a0;
    goto L_08A3EF00;
L_08A3EF00:;
    a1 = LD32(s2+8);
    a0 = LD32(s0+80);
    a2 = fp + 0;
    a3 = s7 + 0;
    f0 = func_08A3D560(a0, a1, a2, a3);
    goto L_08A3EF14;
L_08A3EF14:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    t0 = LD32(sp+132);
    if (cnd_) { goto L_08A3EF48; }
    goto L_08A3EF24;
L_08A3EF24:;
    v0 = LD32(s0+80);
    ST8(s5, 0);
    v0 = v0 - 10;
    v1 = v0 < 0xbu;
    cnd_ = v1 == 0;
    ST32(s0+80, v0);
    if (cnd_) { goto L_08A3EF00; }
    goto L_08A3EF3C;
L_08A3EF3C:;
    v0 = 10;
    ST32(s0+80, v0);
    t0 = LD32(sp+132);
    goto L_08A3EF48;
L_08A3EF48:;
    a1 = sp + 96;
    v0 = a1 + t0;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    a1 = LD32(sp+128);
    if (cnd_) { goto L_08A3EF80; }
    goto L_08A3EF5C;
L_08A3EF5C:;
    v1 = LD32(sp+140);
    v0 = LD32(v1+80);
    v1 = 10;
    v0 = v0 + 10;
    a0 = v1 < v0;
    if (a0 != 0) v1 = v0;
    a0 = LD32(sp+140);
    ST32(a0+80, v1);
    goto L_08A3EF7C;
L_08A3EF7C:;
    a1 = LD32(sp+128);
    goto L_08A3EF80;
L_08A3EF80:;
    cnd_ = a1 == 0;
    if (cnd_) { t0 = LD32(sp+140); goto L_08A3F394; }
    goto L_08A3EF88;
L_08A3EF88:;
    v1 = LD32(sp+80);
    v0 = LD32(sp+84);
    a2 = v1 + v0;
    goto L_08A3EF94;
L_08A3EF94:;
    a0 = LD32(s1+144);
    v0 = LD32(sp+140);
    t4 = 0 + 0;
    a1 = LD32(v0+80);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + s4;
    v1 = LD32(v0+12);
    a0 = a0 << 2;
    a0 = a0 + s6;
    v0 = LD32(a0);
    v1 = a2 - v1;
    v1 = v1 + 10;
    v1 = (s32)v1 > (s32)v0 ? v1 : v0;
    s3 = s3 - v0;
    ST32(a0, v1);
    cnd_ = a1 == 0;
    s3 = s3 + v1;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3EFE0;
L_08A3EFE0:;
    ST32(s1+160, a1);
    a0 = LD32(s4+244);
    v0 = s3 < a0;
    cnd_ = v0 == 0;
    v0 = a0 < s3;
    if (cnd_) { goto L_08A3F100; }
    goto L_08A3EFF4;
L_08A3EFF4:;
    v1 = LD32(sp+148);
    v0 = LD32(sp+132);
    a1 = LD32(sp+144);
    v1 = v1 + 4;
    t0 = LD32(sp+140);
    ST32(sp+148, v1);
    v0 = v0 + 1;
    a1 = a1 + 1;
    v1 = LD32(sp+136);
    ST32(sp+132, v0);
    t0 = t0 + 4;
    v1 = v1 + 1;
    v0 = v0 < 0x2u;
    ST32(sp+144, a1);
    s1 = s1 + 4;
    ST32(sp+140, t0);
    cnd_ = v0 != 0;
    ST32(sp+136, v1);
    if (cnd_) { goto L_08A3ED90; }
    goto L_08A3F03C;
L_08A3F03C:;
    v1 = a0 < s3;
    v0 = s3 < a0;
    cnd_ = v0 == 0;
    t4 = v1 < 0x1u;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3F04C;
L_08A3F04C:;
    a1 = LD32(sp+112);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A3F078; }
    goto L_08A3F058;
L_08A3F058:;
    t0 = LD32(sp+116);
    a1 = LD32(sp+120);
    v0 = (s32)t0 < 16;
    v1 = (s32)a1 < 16;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3F2B8; }
    goto L_08A3F074;
L_08A3F074:;
    v0 = s3 < a0;
    goto L_08A3F078;
L_08A3F078:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = a0 < s3; goto L_08A3F118; }
    goto L_08A3F080;
L_08A3F080:;
    s5 = 0 + 0;
    goto L_08A3F084;
L_08A3F084:;
    s7 = 16;
    s0 = 0 + 0;
    s2 = s6 + 0;
    s1 = s4 + 0;
    goto L_08A3F094;
L_08A3F094:;
    v0 = LD32(s6+152);
    cnd_ = s0 == v0;
    if (cnd_) { s0 = s0 + 1; goto L_08A3F0C0; }
    goto L_08A3F0A0;
L_08A3F0A0:;
    v0 = LD32(s6+156);
    cnd_ = s0 == v0;
    if (cnd_) { s0 = s0 + 1; goto L_08A3F0C0; }
    goto L_08A3F0AC;
L_08A3F0AC:;
    v1 = LD32(s1+8);
    v0 = LD32(s4+272);
    cnd_ = v1 == v0;
    a2 = sp + s0;
    if (cnd_) { goto L_08A3F264; }
    goto L_08A3F0BC;
L_08A3F0BC:;
    s0 = s0 + 1;
    goto L_08A3F0C0;
L_08A3F0C0:;
    v0 = s0 < 0x10u;
    s1 = s1 + 12;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A3F094; }
    goto L_08A3F0D0;
L_08A3F0D0:;
    cnd_ = s5 == 0;
    v0 = s7 << 2;
    if (cnd_) { goto L_08A3F110; }
    goto L_08A3F0D8;
L_08A3F0D8:;
    v0 = v0 + s6;
    v1 = LD32(v0);
    s3 = s3 + 10;
    v1 = v1 + 10;
    ST32(v0, v1);
    a0 = LD32(s4+244);
    v0 = s3 < a0;
    cnd_ = v0 != 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A3F084; }
    goto L_08A3F0FC;
L_08A3F0FC:;
    v0 = a0 < s3;
    goto L_08A3F100;
L_08A3F100:;
    cnd_ = v0 == 0;
    t4 = 1;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3F108;
L_08A3F108:;
    t4 = 0 + 0;
    goto L_08A3E640;
L_08A3F110:;
    a0 = LD32(s4+244);
    v1 = a0 < s3;
    goto L_08A3F118;
L_08A3F118:;
    v0 = s3 < a0;
    cnd_ = v0 == 0;
    t4 = v1 < 0x1u;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3F124;
L_08A3F124:;
    v0 = LD_U8(sp+96);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s6+252); goto L_08A3F1C0; }
    goto L_08A3F130;
L_08A3F130:;
    s7 = sp + 16;
    s5 = 0 + 0;
    goto L_08A3F138;
L_08A3F138:;
    fp = 16;
    s0 = 0 + 0;
    s2 = s6 + 0;
    s1 = s4 + 0;
    goto L_08A3F148;
L_08A3F148:;
    v0 = LD32(s6+152);
    cnd_ = s0 == v0;
    if (cnd_) { s0 = s0 + 1; goto L_08A3F174; }
    goto L_08A3F154;
L_08A3F154:;
    v0 = LD32(s6+156);
    cnd_ = s0 == v0;
    if (cnd_) { s0 = s0 + 1; goto L_08A3F174; }
    goto L_08A3F160;
L_08A3F160:;
    v1 = LD32(s1+8);
    v0 = LD32(s4+272);
    cnd_ = v1 == v0;
    a2 = s7 + s0;
    if (cnd_) { goto L_08A3F210; }
    goto L_08A3F170;
L_08A3F170:;
    s0 = s0 + 1;
    goto L_08A3F174;
L_08A3F174:;
    v0 = s0 < 0x10u;
    s1 = s1 + 12;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A3F148; }
    goto L_08A3F184;
L_08A3F184:;
    cnd_ = s5 == 0;
    v0 = fp << 2;
    if (cnd_) { goto L_08A3F1B8; }
    goto L_08A3F18C;
L_08A3F18C:;
    v0 = v0 + s6;
    v1 = LD32(v0);
    s3 = s3 + 10;
    v1 = v1 + 10;
    ST32(v0, v1);
    a0 = LD32(s4+244);
    v0 = s3 < a0;
    cnd_ = v0 != 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A3F138; }
    goto L_08A3F1B0;
L_08A3F1B0:;
    v0 = a0 < s3;
    goto L_08A3F100;
L_08A3F1B8:;
    a0 = LD32(s4+244);
    v0 = LD_U8(s6+252);
    goto L_08A3F1C0;
L_08A3F1C0:;
    cnd_ = v0 != 0;
    v0 = a0 < s3;
    if (cnd_) { goto L_08A3F200; }
    goto L_08A3F1C8;
L_08A3F1C8:;
    v0 = LD_U8(sp+48);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A3F1F8; }
    goto L_08A3F1D4;
L_08A3F1D4:;
    v0 = LD_U8(sp+49);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s6+252, v1); goto L_08A3F1FC; }
    goto L_08A3F1E0;
L_08A3F1E0:;
    v0 = LD_U8(sp+64);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s6+252, v1); goto L_08A3F1FC; }
    goto L_08A3F1EC;
L_08A3F1EC:;
    v0 = LD_U8(sp+65);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A3F1F8; }
    goto L_08A3F1F8;
L_08A3F1F8:;
    ST8(s6+252, v1);
    goto L_08A3F1FC;
L_08A3F1FC:;
    v0 = a0 < s3;
    goto L_08A3F200;
L_08A3F200:;
    cnd_ = v0 != 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3F208;
L_08A3F208:;
    t4 = 1;
    goto L_08A3E640;
L_08A3F210:;
    v0 = LD_U8(a2);
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A3F170; }
    goto L_08A3F220;
L_08A3F220:;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F228;
L_08A3F228:;
    a2 = LD32(s1+12);
    v1 = LD32(s2);
    a1 = s0 + 0;
    v0 = v0 - a2;
    v0 = v0 - v1;
    v0 = (s32)v0 < (s32)s5;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A3F170; }
    goto L_08A3F248;
L_08A3F248:;
    fp = s0 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F250;
L_08A3F250:;
    v1 = LD32(s1+12);
    a0 = LD32(s2);
    v0 = v0 - v1;
    s5 = v0 - a0;
    goto L_08A3F170;
L_08A3F264:;
    v0 = LD_U8(a2);
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A3F0BC; }
    goto L_08A3F274;
L_08A3F274:;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F27C;
L_08A3F27C:;
    a2 = LD32(s1+12);
    v1 = LD32(s2);
    a1 = s0 + 0;
    v0 = v0 - a2;
    v0 = v0 - v1;
    v0 = (s32)v0 < (s32)s5;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A3F0BC; }
    goto L_08A3F29C;
L_08A3F29C:;
    s7 = s0 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F2A4;
L_08A3F2A4:;
    v1 = LD32(s1+12);
    a0 = LD32(s2);
    v0 = v0 - v1;
    s5 = v0 - a0;
    goto L_08A3F0BC;
L_08A3F2B8:;
    a0 = s4 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F2C0;
L_08A3F2C0:;
    t0 = LD32(sp+120);
    a1 = LD32(s6+144);
    v1 = t0 << 1;
    v1 = v1 + t0;
    v1 = v1 << 2;
    v1 = s4 + v1;
    a0 = t0 << 2;
    a2 = LD32(v1+12);
    a0 = a0 + s6;
    v1 = LD32(a0);
    v0 = v0 - a2;
    cnd_ = t0 == a1;
    s1 = v0 - v1;
    if (cnd_) { goto L_08A3F38C; }
    goto L_08A3F2F4;
L_08A3F2F4:;
    v0 = LD32(s6+148);
    v1 = LD32(sp+120);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s6+164); goto L_08A3F384; }
    goto L_08A3F304;
L_08A3F304:;
    v0 = LD32(s6+152);
    a0 = LD32(sp+120);
    cnd_ = a0 == v0;
    if (cnd_) { s1 = s1 + a2; goto L_08A3F320; }
    goto L_08A3F314;
L_08A3F314:;
    v0 = LD32(s6+156);
    cnd_ = a0 == v0;
    if (cnd_) { s1 = s1 + a2; goto L_08A3F320; }
    goto L_08A3F320;
L_08A3F320:;
    a1 = LD32(sp+116);
    v1 = LD32(s4+244);
    a0 = s4 + 0;
    s0 = a1 << 2;
    s0 = s0 + s6;
    v0 = LD32(s0);
    s3 = s3 - v0;
    v1 = v1 - s3;
    v1 = (s32)v1 < (s32)s1 ? v1 : s1;
    v0 = 0 + 0;
    s1 = (s32)v1 > (s32)v0 ? v1 : v0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F350;
L_08A3F350:;
    t0 = LD32(sp+116);
    v1 = t0 << 1;
    v1 = v1 + t0;
    v1 = v1 << 2;
    v1 = s4 + v1;
    a0 = LD32(v1+12);
    v0 = v0 - a0;
    v1 = v0 < s1;
    if (v1 == 0) v0 = s1;
    ST32(s0, v0);
    s3 = s3 + v0;
    a0 = LD32(s4+244);
    goto L_08A3F074;
L_08A3F384:;
    s1 = s1 + v0;
    goto L_08A3F320;
L_08A3F38C:;
    v0 = LD32(s6+160);
    goto L_08A3F384;
L_08A3F394:;
    a2 = LD32(t0+80);
    goto L_08A3EF94;
L_08A3F39C:;
    t0 = LD32(sp+132);
    a1 = sp + 48;
    v0 = a1 + t0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    v1 = LD32(sp+136);
    if (cnd_) { goto L_08A3F3C8; }
    goto L_08A3F3B4;
L_08A3F3B4:;
    v0 = LD32(s1+152);
    v1 = sp + v0;
    a0 = LD_U8(v1);
    cnd_ = a0 == 0;
    v1 = LD32(sp+136);
    if (cnd_) { goto L_08A3F410; }
    goto L_08A3F3C8;
L_08A3F3C8:;
    v0 = LD_U8(v1);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+128); goto L_08A3EF80; }
    goto L_08A3F3D4;
L_08A3F3D4:;
    a0 = LD32(sp+132);
    t0 = LD32(sp+112);
    v0 = a1 + a0;
    a1 = 1;
    cnd_ = t0 == 0;
    ST8(v0, a1);
    if (cnd_) { goto L_08A3EF7C; }
    goto L_08A3F3EC;
L_08A3F3EC:;
    v0 = LD32(s1+144);
    v1 = LD32(sp+120);
    cnd_ = v1 != v0;
    a1 = LD32(sp+128);
    if (cnd_) { goto L_08A3EF80; }
    goto L_08A3F3FC;
L_08A3F3FC:;
    a0 = 16;
    ST32(sp+116, a0);
    ST32(sp+120, a0);
    goto L_08A3F408;
L_08A3F408:;
    ST32(sp+112, 0);
    goto L_08A3EF7C;
L_08A3F410:;
    a1 = LD32(s1+144);
    a0 = s4 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F41C;
L_08A3F41C:;
    s0 = v0 - 10;
    v0 = LD32(sp+128);
    cnd_ = v0 == 0;
    v1 = LD32(sp+132);
    if (cnd_) { goto L_08A3F440; }
    goto L_08A3F42C;
L_08A3F42C:;
    cnd_ = (s32)v1 <= 0;
    v0 = LD32(sp+80);
    if (cnd_) { goto L_08A3F440; }
    goto L_08A3F434;
L_08A3F434:;
    s0 = s0 - v0;
    cnd_ = (s32)s0 <= 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3F440;
L_08A3F440:;
    a1 = LD32(s1+152);
    a0 = s4 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F44C;
L_08A3F44C:;
    a1 = LD32(s1+152);
    a0 = LD32(sp+136);
    t0 = 1;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v1 = s4 + v1;
    ST8(a0, t0);
    a0 = LD32(v1+12);
    v0 = v0 - a0;
    v1 = v0 < s0;
    if (v1 == 0) v0 = s0;
    a0 = LD32(sp+112);
    v1 = LD32(sp+140);
    cnd_ = a0 == 0;
    ST32(v1+80, v0);
    if (cnd_) { goto L_08A3EF7C; }
    goto L_08A3F48C;
L_08A3F48C:;
    t0 = LD32(sp+120);
    cnd_ = t0 != a1;
    a1 = LD32(sp+128);
    if (cnd_) { goto L_08A3EF80; }
    goto L_08A3F498;
L_08A3F498:;
    v0 = 16;
    ST32(sp+116, v0);
    ST32(sp+120, v0);
    goto L_08A3F408;
L_08A3F4A8:;
    t0 = LD32(sp+140);
    a1 = LD32(s1+144);
    a0 = s4 + 0;
    s0 = LD32(t0+80);
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F4BC;
L_08A3F4BC:;
    v1 = LD32(sp+80);
    v0 = v0 - v1;
    v0 = v0 - 10;
    v1 = v0 < s0;
    if (v1 == 0) v0 = s0;
    v1 = LD32(sp+140);
    ST32(v1+80, v0);
    goto L_08A3EDDC;
L_08A3F4DC:;
    a1 = LD32(s1+152);
    a0 = s4 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F4E8;
L_08A3F4E8:;
    a0 = LD32(s1+152);
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 2;
    v1 = s4 + v1;
    a0 = LD32(v1+12);
    v1 = 10;
    v0 = v0 - a0;
    a1 = v0 < 0xau;
    if (a1 == 0) v0 = v1;
    goto L_08A3EDD0;
L_08A3F514:;
    t0 = LD32(sp+140);
    v0 = 16;
    v1 = sp + a1;
    ST32(s1+152, v0);
    ST8(v1+96, 0);
    ST32(t0+80, 0);
    goto L_08A3EFF4;
L_08A3F530:;
    ST32(s6+164, t2);
    goto L_08A3ECD4;
L_08A3F538:;
    ST32(a1+160, 0);
    goto L_08A3ECCC;
L_08A3F540:;
    a1 = s1 + 0;
    goto L_08A3F544;
L_08A3F544:;
    a0 = s0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3F54C;
L_08A3F54C:;
    a2 = v0 + 0;
    v0 = LD32(s6+144);
    cnd_ = a2 == v0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A3F598; }
    goto L_08A3F55C;
L_08A3F55C:;
    v0 = LD32(s6+148);
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08A3F59C; }
    goto L_08A3F568;
L_08A3F568:;
    v0 = LD32(s6+152);
    cnd_ = a2 == v0;
    v0 = a2 << 1;
    if (cnd_) { goto L_08A3F598; }
    goto L_08A3F574;
L_08A3F574:;
    v1 = LD32(s6+156);
    v0 = v0 + a2;
    v0 = v0 << 2;
    cnd_ = a2 == v1;
    v0 = s4 + v0;
    if (cnd_) { goto L_08A3F598; }
    goto L_08A3F588;
L_08A3F588:;
    v1 = LD32(v0+8);
    v0 = LD32(s4+272);
    cnd_ = v1 == v0;
    a0 = sp + a2;
    if (cnd_) { goto L_08A3F5B0; }
    goto L_08A3F598;
L_08A3F598:;
    v0 = LD32(s0+28);
    goto L_08A3F59C;
L_08A3F59C:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s1 + 0; goto L_08A3F544; }
    goto L_08A3F5A8;
L_08A3F5A8:;
    a1 = LD32(sp+124);
    goto L_08A3EC0C;
L_08A3F5B0:;
    v0 = LD_U8(a0);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08A3F59C; }
    goto L_08A3F5BC;
L_08A3F5BC:;
    v0 = s2 + s6;
    v0 = LD32(v0+152);
    v1 = 1;
    a0 = 1;
    ST32(sp+120, v0);
    ST32(sp+116, a2);
    ST32(sp+112, v1);
    ST8(s5, a0);
    goto L_08A3EC08;
L_08A3F5E0:;
    v0 = LD_U8(a0);
    a1 = sp + 16;
    cnd_ = v0 == 0;
    v1 = a1 + a2;
    if (cnd_) { goto L_08A3EBB0; }
    goto L_08A3F5F0;
L_08A3F5F0:;
    v0 = LD_U8(v1);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08A3EBB4; }
    goto L_08A3F5FC;
L_08A3F5FC:;
    v0 = s2 + s6;
    v0 = LD32(v0+144);
    t0 = 1;
    ST32(sp+116, a2);
    ST32(sp+120, v0);
    v0 = 1;
    ST32(sp+112, t0);
    ST8(s7, v0);
    goto L_08A3EBC0;
L_08A3F620:;
    v0 = 1;
    ST8(sp+65, v0);
    ST8(sp+48, v0);
    ST8(sp+64, v0);
    ST8(sp+49, v0);
    goto L_08A3EC20;
L_08A3F638:;
    { u64 r_ = func_08A41390(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3F640;
L_08A3F640:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = 1; goto L_08A3E9CC; }
    goto L_08A3F648;
L_08A3F648:;
    v0 = s0 < 0x10u;
    goto L_08A3E9D0;
L_08A3F650:;
    { u64 r_ = func_08A41390(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3F658;
L_08A3F658:;
    cnd_ = v0 != 0;
    a2 = LD32(s4+272);
    if (cnd_) { goto L_08A3E930; }
    goto L_08A3F660;
L_08A3F660:;
    s3 = 1;
    goto L_08A3E930;
L_08A3F668:;
    if (v0 != 0) fp = a0;
    goto L_08A3E8C0;
L_08A3F670:;
    ST8(v1, 0);
    goto L_08A3E898;
L_08A3F678:;
    a0 = s4 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F680;
L_08A3F680:;
    a1 = LD32(s6+152);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v1 = s4 + v1;
    a0 = LD32(v1+12);
    a0 = a0 < v0;
    cnd_ = a0 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E640; }
    goto L_08A3F6A4;
L_08A3F6A4:;
    a2 = LD32(s4+272);
    goto L_08A3E844;
L_08A3F6AC:;
    f0 = BITSF(v1);
    f20 = (float)(s32)FBITS(f0);
    f20 = f20 + f20;
    goto L_08A3E7B0;
L_08A3F6BC:;
    v0 = s0 & 0x1;
    v1 = s0 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f20 = (float)(s32)FBITS(f0);
    f20 = f20 + f20;
    goto L_08A3E6F8;
L_08A3F6D8:;
    a1 = 1;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3F6E0;
L_08A3F6E0:;
    s0 = s0 + v0;
    goto L_08A3E6E0;
L_08A3F6E8:;
    a1 = 1;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3F6F0;
L_08A3F6F0:;
    s0 = v0 + 0;
    goto L_08A3E6E0;
L_08A3F6F8:;
    cnd_ = (s32)v1 <= 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A3E71C; }
    goto L_08A3F700;
L_08A3F700:;
    goto L_08A3E644;
}

/* 08A3F708 */
void func_08A3F708(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A3F708:;
    sp = sp - 80;
    s4 = 0 + 0;
    s3 = a0 + 0;
    s2 = s3 + 4;
    s1 = s3 + 0;
    func_08A3D708(a0);
    goto L_08A3F748;
L_08A3F748:;
    v0 = D_08B1C34C - (-15540);
    s6 = v0 - 15540;
    v0 = 16;
    ST32(sp, v0);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    goto L_08A3F760;
L_08A3F760:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s4 + 1; goto L_08A3F780; }
    goto L_08A3F76C;
L_08A3F76C:;
    v1 = LD32(s1+8);
    v0 = LD32(s3+272);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3FA2C; }
    goto L_08A3F77C;
L_08A3F77C:;
    s4 = s4 + 1;
    goto L_08A3F780;
L_08A3F780:;
    v0 = s4 < 0x10u;
    s1 = s1 + 12;
    s2 = s2 + 12;
    cnd_ = v0 != 0;
    s6 = s6 + 44;
    if (cnd_) { goto L_08A3F760; }
    goto L_08A3F794;
L_08A3F794:;
    a0 = LD32(sp+4);
    v0 = LD32(sp);
    a1 = (s32)a0 < 16;
    a0 = (s32)v0 < 16;
    v1 = a0 ^ 0x1;
    v0 = a1 ^ 0x1;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = 0 + 0; goto L_08A3F7CC; }
    goto L_08A3F7B8;
L_08A3F7B8:;
    v1 = LD32(sp+8);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    v0 = a1 & a0;
    if (cnd_) { goto L_08A3F818; }
    goto L_08A3F7C8;
L_08A3F7C8:;
    s2 = 0 + 0;
    goto L_08A3F7CC;
L_08A3F7CC:;
    s4 = 0 + 0;
    s1 = s3 + 0;
    goto L_08A3F7D4;
L_08A3F7D4:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A3F7F4; }
    goto L_08A3F7E0;
L_08A3F7E0:;
    v1 = LD32(s1+8);
    v0 = LD32(s3+272);
    cnd_ = v1 == v0;
    if (cnd_) { s0 = LD32(s1+12); goto L_08A3F8A0; }
    goto L_08A3F7F0;
L_08A3F7F0:;
    s2 = s2 + 1;
    goto L_08A3F7F4;
L_08A3F7F4:;
    v0 = s2 < 0x10u;
    s1 = s1 + 12;
    cnd_ = v0 != 0;
    s4 = s4 + 44;
    if (cnd_) { goto L_08A3F7D4; }
    goto L_08A3F804;
L_08A3F804:;
    v0 = LD32(sp+4);
    v1 = LD32(sp);
    a1 = (s32)v0 < 16;
    a0 = (s32)v1 < 16;
    v0 = a1 & a0;
    goto L_08A3F818;
L_08A3F818:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A3F874; }
    goto L_08A3F820;
L_08A3F820:;
    a0 = LD32(sp+8);
    v0 = a0 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A3F878; }
    goto L_08A3F830;
L_08A3F830:;
    a1 = LD32(s3+372);
    v0 = LD32(s3+368);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s3+364); goto L_08A3F850; }
    goto L_08A3F844;
L_08A3F844:;
    ST32(s3+372, 0);
    a1 = 0 + 0;
    v1 = LD32(s3+364);
    goto L_08A3F850;
L_08A3F850:;
    v0 = a1 << 8;
    a0 = LD32(sp);
    v0 = v0 + v1;
    v1 = LD32(sp+8);
    ST32(v0+176, a0);
    ST32(v0+184, v1);
    v1 = LD32(sp+4);
    ST32(v0+180, v1);
    goto L_08A3F874;
L_08A3F874:;
    goto L_08A3F878;
L_08A3F878:;
    sp = sp + 80;
    return;
L_08A3F8A0:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F8AC;
L_08A3F8AC:;
    v0 = v0 - 10;
    s0 = s0 < v0;
    cnd_ = s0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A3F7F4; }
    goto L_08A3F8BC;
L_08A3F8BC:;
    a2 = LD32(s3+352);
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3F8CC;
L_08A3F8CC:;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A3F7F4; }
    goto L_08A3F8D4;
L_08A3F8D4:;
    a0 = D_08B1C34C - (-15540);
    a0 = a0 - 15540;
    fp = s4 + a0;
    v0 = LD32(fp+28);
    cnd_ = v0 == 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_08A3F7F0; }
    goto L_08A3F8EC;
L_08A3F8EC:;
    ST32(sp+24, s1);
    a1 = LD32(sp+16);
    goto L_08A3F8F4;
L_08A3F8F4:;
    a0 = fp + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3F8FC;
L_08A3F8FC:;
    s5 = v0 + 0;
    v0 = v0 << 1;
    v0 = v0 + s5;
    v0 = v0 << 2;
    s7 = s3 + v0;
    a0 = LD32(sp+16);
    s0 = s7 + 4;
    v1 = LD32(s0+4);
    v0 = LD32(s3+272);
    a0 = a0 + 1;
    cnd_ = v1 == v0;
    ST32(sp+16, a0);
    if (cnd_) { goto L_08A3F948; }
    goto L_08A3F92C;
L_08A3F92C:;
    v0 = LD32(fp+28);
    goto L_08A3F930;
L_08A3F930:;
    a0 = LD32(sp+16);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(sp+16); goto L_08A3F8F4; }
    goto L_08A3F940;
L_08A3F940:;
    s2 = s2 + 1;
    goto L_08A3F7F4;
L_08A3F948:;
    v0 = LD32(sp+24);
    a0 = s3 + 0;
    v0 = v0 + 4;
    ST32(sp+20, v0);
    v0 = LD32(s0+8);
    s6 = v0 - 10;
    v0 = LD32(sp+8);
    v1 = v0 < s6;
    cnd_ = v1 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A3F92C; }
    goto L_08A3F970;
L_08A3F970:;
    v0 = func_08A414A4(a0, a1);
    goto L_08A3F978;
L_08A3F978:;
    v1 = LD32(sp+20);
    a2 = LD32(s3+352);
    a0 = s3 + 0;
    a3 = LD32(v1+8);
    a1 = s5 + 0;
    v0 = v0 - a3;
    v1 = v0 < s6;
    if (v1 != 0) s6 = v0;
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3F99C;
L_08A3F99C:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A3FA00; }
    goto L_08A3F9A4;
L_08A3F9A4:;
    v0 = LD_U8(s7+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(fp+28); goto L_08A3F930; }
    goto L_08A3F9B0;
L_08A3F9B0:;
    v1 = 44;
    { s64 p_ = (s64)(s32)s5 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B1C34C - (-15540);
    v1 = v1 - 15540;
    a0 = LD32(s3);
    v0 = lo;
    v0 = v0 + v1;
    a1 = LD32(v0+4);
    v0 = func_08A385C4(a0, a1);
    goto L_08A3F9D4;
L_08A3F9D4:;
    v1 = LD32(s3+272);
    cnd_ = v0 == v1;
    a0 = LD32(sp+20);
    if (cnd_) { goto L_08A3F92C; }
    goto L_08A3F9E0;
L_08A3F9E0:;
    v1 = LD32(s0+8);
    v0 = LD32(a0+8);
    v1 = v1 + v0;
    v1 = v1 >> 1;
    v1 = v1 - v0;
    a0 = v1 < s6;
    if (a0 != 0) s6 = v1;
    v1 = LD32(sp+8);
    goto L_08A3FA00;
L_08A3FA00:;
    v0 = v1 < s6;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A3F92C; }
    goto L_08A3FA0C;
L_08A3FA0C:;
    a2 = LD32(s3+352);
    a1 = s5 + 0;
    ST32(sp, s5);
    ST32(sp+8, s6);
    ST32(sp+4, s2);
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3FA24;
L_08A3FA24:;
    v0 = LD32(fp+28);
    goto L_08A3F930;
L_08A3FA2C:;
    s0 = LD32(s1+12);
    v0 = func_08A43528();
    goto L_08A3FA34;
L_08A3FA34:;
    v0 = v0 - 10;
    s0 = s0 < v0;
    cnd_ = s0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A3F794; }
    goto L_08A3FA44;
L_08A3FA44:;
    a2 = LD32(s3+352);
    a1 = s4 + 0;
    ST32(sp+4, s4);
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3FA54;
L_08A3FA54:;
    cnd_ = v0 != 0;
    s7 = s6 + 0;
    if (cnd_) { goto L_08A3F794; }
    goto L_08A3FA5C;
L_08A3FA5C:;
    v0 = LD32(s6+28);
    fp = 0 + 0;
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A3F77C; }
    goto L_08A3FA6C;
L_08A3FA6C:;
    ST32(sp+12, s2);
    a1 = s5 + 0;
    goto L_08A3FA74;
L_08A3FA74:;
    a0 = s7 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A3FA7C;
L_08A3FA7C:;
    a1 = v0 + 0;
    v0 = v0 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = s3 + v0;
    a0 = v0 + 4;
    v1 = LD32(a0+4);
    v0 = LD32(s3+272);
    cnd_ = v1 == v0;
    s5 = s5 + 1;
    if (cnd_) { goto L_08A3FABC; }
    goto L_08A3FAA4;
L_08A3FAA4:;
    v0 = LD32(s7+28);
    goto L_08A3FAA8;
L_08A3FAA8:;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s5 + 0; goto L_08A3FA74; }
    goto L_08A3FAB4;
L_08A3FAB4:;
    s4 = s4 + 1;
    goto L_08A3F780;
L_08A3FABC:;
    v0 = LD32(a0+8);
    a0 = LD32(sp+8);
    s0 = v0 - 10;
    v1 = a0 < s0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A3FAE4; }
    goto L_08A3FAD4;
L_08A3FAD4:;
    cnd_ = s0 != a0;
    if (cnd_) { v0 = LD32(s7+28); goto L_08A3FAA8; }
    goto L_08A3FADC;
L_08A3FADC:;
    cnd_ = fp != 0;
    if (cnd_) { v0 = LD32(s7+28); goto L_08A3FAA8; }
    goto L_08A3FAE4;
L_08A3FAE4:;
    ST32(sp, a1);
    v0 = func_08A43528();
    goto L_08A3FAEC;
L_08A3FAEC:;
    a0 = s3 + 0;
    v1 = LD32(sp+12);
    a2 = LD32(s3+352);
    a1 = LD32(v1+8);
    v0 = v0 - a1;
    a1 = LD32(sp);
    v1 = v0 < s0;
    if (v1 == 0) v0 = s0;
    ST32(sp+8, v0);
    v0 = func_08A412CC(a0, a1, a2);
    goto L_08A3FB14;
L_08A3FB14:;
    fp = v0 + 0;
    goto L_08A3FAA4;
}

/* 08A3FB1C */
void func_08A3FB1C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_08A3FB1C:;
    sp = sp - 400;
    a2 = 0 + 0;
    s4 = a1 + 0;
    s3 = a0 + 0;
    goto L_08A3FB60;
L_08A3FB60:;
    v1 = a2 << 2;
    a0 = v1 + s4;
    v1 = v1 + s3;
    a1 = LD32(a0+128);
    v0 = LD32(v1+248);
    a2 = a2 + 1;
    a0 = a2 < 0x3u;
    v0 = (s32)v0 > (s32)a1 ? v0 : a1;
    cnd_ = a0 != 0;
    ST32(v1+248, v0);
    if (cnd_) { goto L_08A3FB60; }
    goto L_08A3FB88;
L_08A3FB88:;
    a3 = 0 + 0;
    a1 = s4 + 140;
    v1 = s3 + 256;
    goto L_08A3FB94;
L_08A3FB94:;
    v0 = LD_U8(v1+4);
    a3 = a3 + 1;
    t0 = a3 < 0x4u;
    a0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3FBB4; }
    goto L_08A3FBAC;
L_08A3FBAC:;
    v0 = LD_U8(a1);
    a2 = 0 < v0;
    goto L_08A3FBB4;
L_08A3FBB4:;
    v0 = a0 | a2;
    v0 = 0 < v0;
    ST8(v1+8, v0);
    a1 = a1 + 1;
    cnd_ = t0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A3FB94; }
    goto L_08A3FBCC;
L_08A3FBCC:;
    s2 = 0 + 0;
    s1 = s4 + 0;
    s0 = s3 + 0;
    goto L_08A3FBD8;
L_08A3FBD8:;
    a2 = LD32(s0+8);
    a1 = s2 + 0;
    a0 = s3 + 0;
    v0 = func_08A41504(a0, a1, a2);
    goto L_08A3FBE8;
L_08A3FBE8:;
    a0 = LD32(s0+12);
    a1 = LD32(s1);
    s2 = s2 + 1;
    a2 = s2 < 0x10u;
    a0 = a0 + a1;
    v1 = a0 < v0;
    if (v1 == 0) a0 = v0;
    ST32(s0+12, a0);
    s1 = s1 + 4;
    cnd_ = a2 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08A3FBD8; }
    goto L_08A3FC14;
L_08A3FC14:;
    v0 = LD32(s4+144);
    v0 = (s32)v0 < 16;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A3FCBC; }
    goto L_08A3FC24;
L_08A3FC24:;
    a1 = s3 + 0;
    a0 = sp + 0;
    func_08A3D8A0(a0, a1);
    goto L_08A3FC30;
L_08A3FC30:;
    a2 = s4 + 188;
    a3 = sp + 0;
    t0 = sp + 48;
    goto L_08A3FC3C;
L_08A3FC3C:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(a2, v0);
    a3 = a3 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = a3 != t0;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A3FC3C; }
    goto L_08A3FC68;
L_08A3FC68:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    goto L_08A3FC84;
L_08A3FC84:;
    sp = sp + 400;
    return;
L_08A3FCBC:;
    s6 = D_08AEFC04 - (-1020);
    f20 = BITSF(LD32(s6-1020));
    s5 = sp + 128;
    func_08A41614(a0);
    goto L_08A3FCCC;
L_08A3FCCC:;
    a0 = sp + 64;
    func_08A41614(a0);
    goto L_08A3FCD4;
L_08A3FCD4:;
    fp = sp + 192;
    a0 = s5 + 0;
    func_08A41614(a0);
    goto L_08A3FCE0;
L_08A3FCE0:;
    a0 = fp + 0;
    func_08A41614(a0);
    goto L_08A3FCE8;
L_08A3FCE8:;
    a0 = LD32(s4+152);
    v1 = LD32(s3+272);
    f21 = f20;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    a1 = s3 + v0;
    v0 = LD32(a1+8);
    cnd_ = v0 == v1;
    f22 = f20;
    if (cnd_) { goto L_08A3FDBC; }
    goto L_08A3FD10;
L_08A3FD10:;
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s4+144); goto L_08A3FDC0; }
    goto L_08A3FD1C;
L_08A3FD1C:;
    v0 = a0 ^ 0x6;
    v0 = v0 < 0x1u;
    v1 = a0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3FD40; }
    goto L_08A3FD34;
L_08A3FD34:;
    v0 = LD_U8(a1+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s3+260); goto L_08A3FD48; }
    goto L_08A3FD40;
L_08A3FD40:;
    s0 = 1;
    v0 = LD_U8(s3+260);
    goto L_08A3FD48;
L_08A3FD48:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3FD58; }
    goto L_08A3FD50;
L_08A3FD50:;
    v0 = LD_U8(s3+264);
    a2 = 0 < v0;
    goto L_08A3FD58;
L_08A3FD58:;
    a0 = LD32(s3+252);
    a1 = LD32(s3+256);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3FD68;
L_08A3FD68:;
    s1 = v0 + 0;
    v0 = LD_U8(s3+340);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3FD80; }
    goto L_08A3FD78;
L_08A3FD78:;
    v0 = LD_U8(s3+344);
    a2 = 0 < v0;
    goto L_08A3FD80;
L_08A3FD80:;
    a0 = LD32(s3+332);
    a1 = LD32(s3+336);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3FD90;
L_08A3FD90:;
    a1 = LD32(s4+152);
    a0 = LD32(s4+160);
    a2 = s1 + 0;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v1 = s3 + v1;
    a1 = LD32(v1+12);
    a3 = v0 + 0;
    f0 = func_08A3D560(a0, a1, a2, a3);
    goto L_08A3FDB8;
L_08A3FDB8:;
    f20 = f0;
    goto L_08A3FDBC;
L_08A3FDBC:;
    a1 = LD32(s4+144);
    goto L_08A3FDC0;
L_08A3FDC0:;
    a2 = LD32(s4+160);
    a0 = s3 + 0;
    func_08A41570(a0, a1, a2);
    goto L_08A3FDCC;
L_08A3FDCC:;
    t1 = D_08B1C308 - (-15608);
    f0 = BITSF(LD32(t1-15608));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    a1 = LD32(s4+152);
    if (cnd_) { goto L_08A40F60; }
    goto L_08A3FDE4;
L_08A3FDE4:;
    f20 = BITSF(LD32(s6-1020));
    goto L_08A3FDE8;
L_08A3FDE8:;
    a0 = LD32(s3+272);
    a2 = LD32(s4+160);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + s3;
    v1 = LD32(v0+12);
    ST32(v0+8, a0);
    a0 = s3 + 0;
    a2 = a2 - v1;
    ST8(v0+4, 0);
    func_08A415B0(a0, a1, a2);
    goto L_08A3FE18;
L_08A3FE18:;
    a3 = LD32(s4+148);
    v0 = (s32)a3 < 16;
    cnd_ = v0 == 0;
    a0 = a3 << 1;
    if (cnd_) { goto L_08A40EFC; }
    goto L_08A3FE28;
L_08A3FE28:;
    t0 = LD32(s4+156);
    a1 = LD32(s3+272);
    v1 = t0 << 1;
    v1 = v1 + t0;
    v1 = v1 << 2;
    v1 = s3 + v1;
    a2 = v1 + 4;
    s1 = LD32(a2+4);
    a0 = a0 + a3;
    a0 = a0 << 2;
    a1 = s1 ^ a1;
    v0 = s1 ^ 0x2;
    a1 = 0 < a1;
    v0 = 0 < v0;
    a0 = s3 + a0;
    a1 = a1 & v0;
    fp = LD32(a0+12);
    s5 = LD32(a2+8);
    cnd_ = a1 == 0;
    s7 = LD_U8(v1+4);
    if (cnd_) { goto L_08A3FF00; }
    goto L_08A3FE78;
L_08A3FE78:;
    v0 = t0 ^ 0x6;
    v0 = v0 < 0x1u;
    v1 = t0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A3FE98; }
    goto L_08A3FE90;
L_08A3FE90:;
    cnd_ = s7 == 0;
    if (cnd_) { v0 = LD_U8(s3+260); goto L_08A3FEA0; }
    goto L_08A3FE98;
L_08A3FE98:;
    s0 = 1;
    v0 = LD_U8(s3+260);
    goto L_08A3FEA0;
L_08A3FEA0:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3FEB0; }
    goto L_08A3FEA8;
L_08A3FEA8:;
    v0 = LD_U8(s3+264);
    a2 = 0 < v0;
    goto L_08A3FEB0;
L_08A3FEB0:;
    a0 = LD32(s3+252);
    a1 = LD32(s3+256);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3FEC0;
L_08A3FEC0:;
    s2 = v0 + 0;
    v0 = LD_U8(s3+340);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A3FED8; }
    goto L_08A3FED0;
L_08A3FED0:;
    v0 = LD_U8(s3+344);
    a2 = 0 < v0;
    goto L_08A3FED8;
L_08A3FED8:;
    a0 = LD32(s3+332);
    a1 = LD32(s3+336);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A3FEE8;
L_08A3FEE8:;
    a0 = LD32(s4+164);
    a2 = s2 + 0;
    a3 = v0 + 0;
    a1 = s5 + 0;
    f0 = func_08A3D560(a0, a1, a2, a3);
    goto L_08A3FEFC;
L_08A3FEFC:;
    f21 = f0;
    goto L_08A3FF00;
L_08A3FF00:;
    a1 = LD32(s4+148);
    a2 = LD32(s4+164);
    a0 = s3 + 0;
    func_08A41570(a0, a1, a2);
    goto L_08A3FF10;
L_08A3FF10:;
    t1 = D_08B1C308 - (-15608);
    f0 = BITSF(LD32(t1-15608));
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    a0 = sp + 256;
    if (cnd_) { goto L_08A40E9C; }
    goto L_08A3FF28;
L_08A3FF28:;
    f21 = BITSF(LD32(s6-1020));
    a1 = LD32(s4+156);
    goto L_08A3FF30;
L_08A3FF30:;
    v1 = LD32(s3+272);
    a2 = LD32(s4+164);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + s3;
    ST32(v0+8, v1);
    a2 = a2 - s5;
    a0 = s3 + 0;
    ST8(v0+4, 0);
    func_08A415B0(a0, a1, a2);
    goto L_08A3FF5C;
L_08A3FF5C:;
    a0 = sp + 256;
    a1 = s3 + 0;
    func_08A3D8A0(a0, a1);
    goto L_08A3FF68;
L_08A3FF68:;
    t0 = sp + 0;
    a3 = sp + 256;
    a2 = sp + 304;
    goto L_08A3FF74;
L_08A3FF74:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != a2;
    ST32(t0-4, a1);
    if (cnd_) { goto L_08A3FF74; }
    goto L_08A3FFA0;
L_08A3FFA0:;
    v1 = LD32(s4+156);
    a1 = LD32(s4+148);
    a2 = fp + 0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = v0 + s3;
    ST8(v0+4, s7);
    ST32(v0+8, s1);
    t1 = LD32(a3);
    t2 = LD32(a3+4);
    v0 = LD32(a3+8);
    ST32(t0, t1);
    ST32(t0+4, t2);
    ST32(t0+8, v0);
    a0 = s3 + 0;
    func_08A415B0(a0, a1, a2);
    goto L_08A3FFE4;
L_08A3FFE4:;
    a1 = LD32(s4+156);
    a0 = s3 + 0;
    a2 = s5 + 0;
    func_08A415B0(a0, a1, a2);
    goto L_08A3FFF4;
L_08A3FFF4:;
    v0 = LD_U8(s4+142);
    goto L_08A3FFF8;
L_08A3FFF8:;
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A40044; }
    goto L_08A40000;
L_08A40000:;
    s2 = 0xcccc0000u;
    s1 = 0 + 0;
    s2 = s2 | 0xcccd;
    s0 = s3 + 0;
    v1 = LD32(s0+248);
    goto L_08A40014;
L_08A40014:;
    a0 = s1 + 0;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A40E7C; }
    goto L_08A40024;
L_08A40024:;
    a0 = s1 + 0;
    a1 = 1;
    s1 = s1 + 1;
    cnd_ = (s32)v1 <= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A40E60; }
    goto L_08A40038;
L_08A40038:;
    v0 = s1 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+248); goto L_08A40014; }
    goto L_08A40044;
L_08A40044:;
    a0 = s3 + 0;
    func_08A3D708(a0);
    goto L_08A4004C;
L_08A4004C:;
    v0 = D_08B1C308 - (-15608);
    f0 = BITSF(LD32(v0-15608));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    v0 = D_08B1C30C - (-15604);
    if (cnd_) { goto L_08A40E28; }
    goto L_08A40064;
L_08A40064:;
    v0 = LD32(s4+152);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s3 + v1;
    v0 = LD32(v1+8);
    v0 = v0 ^ 0x2;
    cnd_ = v0 != 0;
    f20 = BITSF(LD32(s6-1020));
    if (cnd_) { goto L_08A40E1C; }
    goto L_08A40088;
L_08A40088:;
    v0 = D_08AE4C48 - (19528);
    v0 = LD32(v0+19528);
    goto L_08A40090;
L_08A40090:;
    t0 = LD32(sp+56);
    goto L_08A40094;
L_08A40094:;
    ST32(s4+248, v0);
    goto L_08A40098;
L_08A40098:;
    v1 = D_08B1C308 - (-15608);
    goto L_08A4009C;
L_08A4009C:;
    f0 = BITSF(LD32(v1-15608));
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    v0 = D_08B1C30C - (-15604);
    if (cnd_) { goto L_08A40DF4; }
    goto L_08A400B0;
L_08A400B0:;
    f21 = BITSF(LD32(s6-1020));
    a3 = LD32(sp+120);
    goto L_08A400B8;
L_08A400B8:;
    a0 = D_08B1C308 - (-15608);
    goto L_08A400BC;
L_08A400BC:;
    f0 = BITSF(LD32(a0-15608));
    goto L_08A400C0;
L_08A400C0:;
    fcc = FCMP(f0, f22, 14);
    cnd_ = !fcc;
    v0 = D_08B1C30C - (-15604);
    if (cnd_) { goto L_08A40DCC; }
    goto L_08A400D0;
L_08A400D0:;
    f22 = BITSF(LD32(s6-1020));
    a2 = LD32(sp+184);
    goto L_08A400D8;
L_08A400D8:;
    f0 = BITSF(LD32(s6-1020));
    goto L_08A400DC;
L_08A400DC:;
    v0 = LD32(sp);
    goto L_08A400E0;
L_08A400E0:;
    f4 = f20 * f21;
    f1 = f0 - f20;
    f2 = f0 - f22;
    f0 = f0 - f21;
    f5 = BITSF(v0);
    f6 = f1 * f2;
    f3 = (float)(s32)FBITS(f5);
    f1 = f1 * f22;
    cnd_ = (s32)v0 < 0;
    f5 = f20 * f0;
    if (cnd_) { goto L_08A40DB0; }
    goto L_08A40108;
L_08A40108:;
    v0 = LD32(sp+64);
    f2 = f3 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40D94; }
    goto L_08A4011C;
L_08A4011C:;
    v0 = LD32(sp+128);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40D78; }
    goto L_08A40134;
L_08A40134:;
    f0 = f0 * f1;
    v0 = LD32(sp+192);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40D5C; }
    goto L_08A4014C;
L_08A4014C:;
    f0 = f0 * f6;
    a1 = D_08AEFC08 - (-1016);
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    a0 = LD32(sp+4);
    if (cnd_) { goto L_08A40184; }
    goto L_08A40170;
L_08A40170:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    goto L_08A40184;
L_08A40184:;
    v0 = v1 + s5;
    ST32(s4+188, v0);
    f2 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40D40; }
    goto L_08A40198;
L_08A40198:;
    v0 = LD32(sp+68);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40D24; }
    goto L_08A401AC;
L_08A401AC:;
    v0 = LD32(sp+132);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40D08; }
    goto L_08A401C4;
L_08A401C4:;
    f0 = f0 * f1;
    v0 = LD32(sp+196);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40CEC; }
    goto L_08A401DC;
L_08A401DC:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A40214; }
    goto L_08A401FC;
L_08A401FC:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+8);
    goto L_08A40214;
L_08A40214:;
    ST32(s4+192, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40CD0; }
    goto L_08A40224;
L_08A40224:;
    v0 = LD32(sp+72);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40CB4; }
    goto L_08A40238;
L_08A40238:;
    v0 = LD32(sp+136);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40C98; }
    goto L_08A40250;
L_08A40250:;
    f0 = f0 * f1;
    v0 = LD32(sp+200);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40C7C; }
    goto L_08A40268;
L_08A40268:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08A402A0; }
    goto L_08A40288;
L_08A40288:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+12);
    goto L_08A402A0;
L_08A402A0:;
    ST32(s4+196, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40C60; }
    goto L_08A402B0;
L_08A402B0:;
    v0 = LD32(sp+76);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40C44; }
    goto L_08A402C4;
L_08A402C4:;
    v0 = LD32(sp+140);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40C28; }
    goto L_08A402DC;
L_08A402DC:;
    f0 = f0 * f1;
    v0 = LD32(sp+204);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40C0C; }
    goto L_08A402F4;
L_08A402F4:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A4032C; }
    goto L_08A40314;
L_08A40314:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+16);
    goto L_08A4032C;
L_08A4032C:;
    ST32(s4+200, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40BF0; }
    goto L_08A4033C;
L_08A4033C:;
    v0 = LD32(sp+80);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40BD4; }
    goto L_08A40350;
L_08A40350:;
    v0 = LD32(sp+144);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40BB8; }
    goto L_08A40368;
L_08A40368:;
    f0 = f0 * f1;
    v0 = LD32(sp+208);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40B9C; }
    goto L_08A40380;
L_08A40380:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_08A403B8; }
    goto L_08A403A0;
L_08A403A0:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+20);
    goto L_08A403B8;
L_08A403B8:;
    ST32(s4+204, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40B80; }
    goto L_08A403C8;
L_08A403C8:;
    v0 = LD32(sp+84);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40B64; }
    goto L_08A403DC;
L_08A403DC:;
    v0 = LD32(sp+148);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40B48; }
    goto L_08A403F4;
L_08A403F4:;
    f0 = f0 * f1;
    v0 = LD32(sp+212);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40B2C; }
    goto L_08A4040C;
L_08A4040C:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A40444; }
    goto L_08A4042C;
L_08A4042C:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+24);
    goto L_08A40444;
L_08A40444:;
    ST32(s4+208, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40B10; }
    goto L_08A40454;
L_08A40454:;
    v0 = LD32(sp+88);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40AF4; }
    goto L_08A40468;
L_08A40468:;
    v0 = LD32(sp+152);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40AD8; }
    goto L_08A40480;
L_08A40480:;
    f0 = f0 * f1;
    v0 = LD32(sp+216);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40ABC; }
    goto L_08A40498;
L_08A40498:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+28);
    if (cnd_) { goto L_08A404D0; }
    goto L_08A404B8;
L_08A404B8:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+28);
    goto L_08A404D0;
L_08A404D0:;
    ST32(s4+212, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40AA0; }
    goto L_08A404E0;
L_08A404E0:;
    v0 = LD32(sp+92);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40A84; }
    goto L_08A404F4;
L_08A404F4:;
    v0 = LD32(sp+156);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40A68; }
    goto L_08A4050C;
L_08A4050C:;
    f0 = f0 * f1;
    v0 = LD32(sp+220);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40A4C; }
    goto L_08A40524;
L_08A40524:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08A4055C; }
    goto L_08A40544;
L_08A40544:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+32);
    goto L_08A4055C;
L_08A4055C:;
    ST32(s4+216, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40A30; }
    goto L_08A4056C;
L_08A4056C:;
    v0 = LD32(sp+96);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40A14; }
    goto L_08A40580;
L_08A40580:;
    v0 = LD32(sp+160);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A409F8; }
    goto L_08A40598;
L_08A40598:;
    f0 = f0 * f1;
    v0 = LD32(sp+224);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A409DC; }
    goto L_08A405B0;
L_08A405B0:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+36);
    if (cnd_) { goto L_08A405E8; }
    goto L_08A405D0;
L_08A405D0:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+36);
    goto L_08A405E8;
L_08A405E8:;
    ST32(s4+220, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A409C0; }
    goto L_08A405F8;
L_08A405F8:;
    v0 = LD32(sp+100);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A409A4; }
    goto L_08A4060C;
L_08A4060C:;
    v0 = LD32(sp+164);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40988; }
    goto L_08A40624;
L_08A40624:;
    f0 = f0 * f1;
    v0 = LD32(sp+228);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A4096C; }
    goto L_08A4063C;
L_08A4063C:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_08A40674; }
    goto L_08A4065C;
L_08A4065C:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+40);
    goto L_08A40674;
L_08A40674:;
    ST32(s4+224, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40950; }
    goto L_08A40684;
L_08A40684:;
    v0 = LD32(sp+104);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40934; }
    goto L_08A40698;
L_08A40698:;
    v0 = LD32(sp+168);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A40918; }
    goto L_08A406B0;
L_08A406B0:;
    f0 = f0 * f1;
    v0 = LD32(sp+232);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A408FC; }
    goto L_08A406C8;
L_08A406C8:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08A40700; }
    goto L_08A406E8;
L_08A406E8:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = LD32(sp+44);
    goto L_08A40700;
L_08A40700:;
    ST32(s4+228, v1);
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A408E0; }
    goto L_08A40710;
L_08A40710:;
    v0 = LD32(sp+108);
    f2 = f0 * f4;
    f3 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A408C4; }
    goto L_08A40724;
L_08A40724:;
    v0 = LD32(sp+172);
    f0 = f0 * f5;
    f3 = BITSF(v0);
    f2 = f2 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f3);
    if (cnd_) { goto L_08A408A8; }
    goto L_08A4073C;
L_08A4073C:;
    f0 = f0 * f1;
    v0 = LD32(sp+236);
    f3 = f2 + f0;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A4088C; }
    goto L_08A40754;
L_08A40754:;
    f0 = f0 * f6;
    f2 = BITSF(LD32(a1-1016));
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f3);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A40788; }
    goto L_08A40774;
L_08A40774:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    goto L_08A40788;
L_08A40788:;
    f2 = BITSF(t0);
    ST32(s4+232, v1);
    cnd_ = (s32)t0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08A40870; }
    goto L_08A40798;
L_08A40798:;
    f3 = f0 * f4;
    f4 = BITSF(a3);
    cnd_ = (s32)a3 < 0;
    f0 = (float)(s32)FBITS(f4);
    if (cnd_) { goto L_08A40854; }
    goto L_08A407A8;
L_08A407A8:;
    f0 = f0 * f5;
    f4 = BITSF(a2);
    f3 = f3 + f0;
    cnd_ = (s32)a2 < 0;
    f2 = (float)(s32)FBITS(f4);
    if (cnd_) { goto L_08A40838; }
    goto L_08A407BC;
L_08A407BC:;
    v0 = LD32(sp+248);
    f0 = f2 * f1;
    f1 = BITSF(v0);
    f2 = f3 + f0;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A4081C; }
    goto L_08A407D4;
L_08A407D4:;
    f0 = f0 * f6;
    f1 = BITSF(LD32(a1-1016));
    f0 = f2 + f0;
    f4 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f0, 14);
    v1 = FBITS(f4);
    cnd_ = !fcc;
    if (cnd_) { ST32(s4+244, v1); goto L_08A4080C; }
    goto L_08A407F4;
L_08A407F4:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    ST32(s4+244, v1);
    goto L_08A4080C;
L_08A4080C:;
    a0 = s4 + 188;
    func_08A3D200(a0);
    goto L_08A40814;
L_08A40814:;
    goto L_08A3FC84;
L_08A4081C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A407D4;
L_08A40838:;
    v1 = a2 >> 1;
    v0 = a2 & 0x1;
    v0 = v0 | v1;
    f5 = BITSF(v0);
    f2 = (float)(s32)FBITS(f5);
    f2 = f2 + f2;
    goto L_08A407BC;
L_08A40854:;
    v1 = a3 >> 1;
    v0 = a3 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A407A8;
L_08A40870:;
    v1 = t0 >> 1;
    v0 = t0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40798;
L_08A4088C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A40754;
L_08A408A8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A4073C;
L_08A408C4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40724;
L_08A408E0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40710;
L_08A408FC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A406C8;
L_08A40918:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A406B0;
L_08A40934:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40698;
L_08A40950:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40684;
L_08A4096C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A4063C;
L_08A40988:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40624;
L_08A409A4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A4060C;
L_08A409C0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A405F8;
L_08A409DC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A405B0;
L_08A409F8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40598;
L_08A40A14:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40580;
L_08A40A30:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A4056C;
L_08A40A4C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A40524;
L_08A40A68:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A4050C;
L_08A40A84:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A404F4;
L_08A40AA0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A404E0;
L_08A40ABC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A40498;
L_08A40AD8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40480;
L_08A40AF4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40468;
L_08A40B10:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40454;
L_08A40B2C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A4040C;
L_08A40B48:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A403F4;
L_08A40B64:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A403DC;
L_08A40B80:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A403C8;
L_08A40B9C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A40380;
L_08A40BB8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40368;
L_08A40BD4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40350;
L_08A40BF0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A4033C;
L_08A40C0C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A402F4;
L_08A40C28:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A402DC;
L_08A40C44:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A402C4;
L_08A40C60:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A402B0;
L_08A40C7C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A40268;
L_08A40C98:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40250;
L_08A40CB4:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40238;
L_08A40CD0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40224;
L_08A40CEC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A401DC;
L_08A40D08:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A401C4;
L_08A40D24:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A401AC;
L_08A40D40:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40198;
L_08A40D5C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08A4014C;
L_08A40D78:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A40134;
L_08A40D94:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_08A4011C;
L_08A40DB0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f3 = (float)(s32)FBITS(f0);
    f3 = f3 + f3;
    goto L_08A40108;
L_08A40DCC:;
    f0 = BITSF(LD32(v0-15604));
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+184);
    if (cnd_) { goto L_08A400D8; }
    goto L_08A40DE0;
L_08A40DE0:;
    cnd_ = a2 != 0;
    f0 = BITSF(LD32(s6-1020));
    if (cnd_) { goto L_08A400DC; }
    goto L_08A40DE8;
L_08A40DE8:;
    f22 = BITSF(0);
    v0 = LD32(sp);
    goto L_08A400E0;
L_08A40DF4:;
    f0 = BITSF(LD32(v0-15604));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    a3 = LD32(sp+120);
    if (cnd_) { goto L_08A400B8; }
    goto L_08A40E08;
L_08A40E08:;
    cnd_ = a3 != 0;
    a0 = D_08B1C308 - (-15608);
    if (cnd_) { goto L_08A400BC; }
    goto L_08A40E10;
L_08A40E10:;
    f21 = BITSF(0);
    f0 = BITSF(LD32(a0-15608));
    goto L_08A400C0;
L_08A40E1C:;
    v0 = D_08AE4C44 - (19524);
    v0 = LD32(v0+19524);
    goto L_08A40090;
L_08A40E28:;
    f0 = BITSF(LD32(v0-15604));
    v1 = 2;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    ST32(s4+248, v1);
    if (cnd_) { goto L_08A40E58; }
    goto L_08A40E40;
L_08A40E40:;
    t0 = LD32(sp+56);
    cnd_ = t0 != 0;
    v1 = D_08B1C308 - (-15608);
    if (cnd_) { goto L_08A4009C; }
    goto L_08A40E4C;
L_08A40E4C:;
    f20 = BITSF(0);
    v0 = 3;
    goto L_08A40094;
L_08A40E58:;
    t0 = LD32(sp+56);
    goto L_08A40098;
L_08A40E60:;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A40E68;
L_08A40E68:;
    { u64 p_ = (u64)v0 * s2; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = hi;
    v0 = v0 >> 3;
    s5 = s5 + v0;
    goto L_08A40038;
L_08A40E7C:;
    { u64 r_ = func_08A4326C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A40E84;
L_08A40E84:;
    { u64 p_ = (u64)v0 * s2; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = LD32(s0+248);
    v0 = hi;
    v0 = v0 >> 3;
    s5 = s5 + v0;
    goto L_08A40024;
L_08A40E9C:;
    a1 = s3 + 0;
    func_08A3D8A0(a0, a1);
    goto L_08A40EA4;
L_08A40EA4:;
    a3 = sp + 64;
    a2 = sp + 256;
    t0 = sp + 304;
    goto L_08A40EB0;
L_08A40EB0:;
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
    if (cnd_) { goto L_08A40EB0; }
    goto L_08A40EDC;
L_08A40EDC:;
    t2 = LD32(a2);
    v0 = LD32(a2+4);
    v1 = LD32(a2+8);
    ST32(a3, t2);
    ST32(a3+4, v0);
    ST32(a3+8, v1);
    a1 = LD32(s4+156);
    goto L_08A3FF30;
L_08A40EFC:;
    a0 = sp + 256;
    a1 = s3 + 0;
    func_08A3D8A0(a0, a1);
    goto L_08A40F08;
L_08A40F08:;
    a3 = sp + 0;
    a2 = sp + 256;
    t0 = sp + 304;
    goto L_08A40F14;
L_08A40F14:;
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
    if (cnd_) { goto L_08A40F14; }
    goto L_08A40F40;
L_08A40F40:;
    a0 = LD32(a2);
    a1 = LD32(a2+4);
    t1 = LD32(a2+8);
    ST32(a3, a0);
    ST32(a3+4, a1);
    ST32(a3+8, t1);
    v0 = LD_U8(s4+142);
    goto L_08A3FFF8;
L_08A40F60:;
    a2 = LD32(s4+160);
    a0 = s3 + 0;
    func_08A41570(a0, a1, a2);
    goto L_08A40F6C;
L_08A40F6C:;
    a3 = LD32(s4+148);
    v0 = (s32)a3 < 16;
    cnd_ = v0 == 0;
    a0 = a3 << 1;
    if (cnd_) { goto L_08A411C4; }
    goto L_08A40F7C;
L_08A40F7C:;
    t0 = LD32(s4+156);
    a1 = LD32(s3+272);
    v1 = t0 << 1;
    v1 = v1 + t0;
    v1 = v1 << 2;
    v1 = s3 + v1;
    a2 = v1 + 4;
    s1 = LD32(a2+4);
    a0 = a0 + a3;
    a0 = a0 << 2;
    a0 = s3 + a0;
    a1 = s1 ^ a1;
    v0 = s1 ^ 0x2;
    a0 = LD32(a0+12);
    v1 = LD_U8(v1+4);
    a1 = 0 < a1;
    v0 = 0 < v0;
    a1 = a1 & v0;
    ST32(sp+320, a0);
    s7 = LD32(a2+8);
    cnd_ = a1 == 0;
    ST32(sp+324, v1);
    if (cnd_) { goto L_08A41060; }
    goto L_08A40FD4;
L_08A40FD4:;
    v0 = t0 ^ 0x6;
    v0 = v0 < 0x1u;
    v1 = t0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A40FF8; }
    goto L_08A40FEC;
L_08A40FEC:;
    t2 = LD32(sp+324);
    cnd_ = t2 == 0;
    if (cnd_) { v0 = LD_U8(s3+260); goto L_08A41000; }
    goto L_08A40FF8;
L_08A40FF8:;
    s0 = 1;
    v0 = LD_U8(s3+260);
    goto L_08A41000;
L_08A41000:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A41010; }
    goto L_08A41008;
L_08A41008:;
    v0 = LD_U8(s3+264);
    a2 = 0 < v0;
    goto L_08A41010;
L_08A41010:;
    a0 = LD32(s3+252);
    a1 = LD32(s3+256);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A41020;
L_08A41020:;
    s2 = v0 + 0;
    v0 = LD_U8(s3+340);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A41038; }
    goto L_08A41030;
L_08A41030:;
    v0 = LD_U8(s3+344);
    a2 = 0 < v0;
    goto L_08A41038;
L_08A41038:;
    a0 = LD32(s3+332);
    a1 = LD32(s3+336);
    a3 = s0 + 0;
    v0 = func_08A436C0(a0, a1, a2, a3);
    goto L_08A41048;
L_08A41048:;
    a0 = LD32(s4+164);
    a2 = s2 + 0;
    a3 = v0 + 0;
    a1 = s7 + 0;
    f0 = func_08A3D560(a0, a1, a2, a3);
    goto L_08A4105C;
L_08A4105C:;
    f22 = f0;
    goto L_08A41060;
L_08A41060:;
    a1 = LD32(s4+148);
    a2 = LD32(s4+164);
    a0 = s3 + 0;
    func_08A41570(a0, a1, a2);
    goto L_08A41070;
L_08A41070:;
    v0 = D_08B1C308 - (-15608);
    f0 = BITSF(LD32(v0-15608));
    fcc = FCMP(f22, f0, 12);
    cnd_ = fcc;
    s0 = sp + 304;
    if (cnd_) { goto L_08A4115C; }
    goto L_08A41088;
L_08A41088:;
    f22 = BITSF(LD32(s6-1020));
    a1 = LD32(s4+156);
    goto L_08A41090;
L_08A41090:;
    v1 = LD32(s3+272);
    a2 = LD32(s4+164);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + s3;
    ST32(v0+8, v1);
    a2 = a2 - s7;
    a0 = s3 + 0;
    ST8(v0+4, 0);
    func_08A415B0(a0, a1, a2);
    goto L_08A410BC;
L_08A410BC:;
    a0 = sp + 256;
    a1 = s3 + 0;
    func_08A3D8A0(a0, a1);
    goto L_08A410C8;
L_08A410C8:;
    t0 = s5 + 0;
    a3 = sp + 256;
    goto L_08A410D0;
L_08A410D0:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != s0;
    ST32(t0-4, a1);
    if (cnd_) { goto L_08A410D0; }
    goto L_08A410FC;
L_08A410FC:;
    v1 = LD32(s4+156);
    t2 = LD32(sp+324);
    a1 = LD32(s4+148);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = v0 + s3;
    a2 = LD32(sp+320);
    ST8(v0+4, t2);
    ST32(v0+8, s1);
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    t1 = LD32(a3+8);
    ST32(t0, v0);
    ST32(t0+4, v1);
    ST32(t0+8, t1);
    a0 = s3 + 0;
    func_08A415B0(a0, a1, a2);
    goto L_08A41144;
L_08A41144:;
    a1 = LD32(s4+156);
    a0 = s3 + 0;
    a2 = s7 + 0;
    func_08A415B0(a0, a1, a2);
    goto L_08A41154;
L_08A41154:;
    a1 = LD32(s4+152);
    goto L_08A3FDE8;
L_08A4115C:;
    a0 = sp + 256;
    a1 = s3 + 0;
    s0 = sp + 304;
    func_08A3D8A0(a0, a1);
    goto L_08A4116C;
L_08A4116C:;
    a3 = fp + 0;
    a2 = sp + 256;
    t0 = s0 + 0;
    goto L_08A41178;
L_08A41178:;
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
    if (cnd_) { goto L_08A41178; }
    goto L_08A411A4;
L_08A411A4:;
    v1 = LD32(a2);
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    ST32(a3, v1);
    ST32(a3+4, a0);
    ST32(a3+8, a1);
    a1 = LD32(s4+156);
    goto L_08A41090;
L_08A411C4:;
    a0 = sp + 256;
    a1 = s3 + 0;
    func_08A3D8A0(a0, a1);
    goto L_08A411D0;
L_08A411D0:;
    a3 = s5 + 0;
    a2 = sp + 256;
    t0 = sp + 304;
    goto L_08A411DC;
L_08A411DC:;
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
    if (cnd_) { goto L_08A411DC; }
    goto L_08A41208;
L_08A41208:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    a1 = LD32(s4+152);
    goto L_08A3FDE8;
}

/* 08A41228 */
u32 func_08A41228(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A41228:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v0 = v0 + 4;
    v1 = LD32(v0+4);
    t1 = a1 + 0;
    v1 = v1 ^ 0x2;
    cnd_ = v1 == 0;
    a1 = 16;
    if (cnd_) { goto L_08A41290; }
    goto L_08A41250;
L_08A41250:;
    t0 = v0 + 0;
    a3 = 0 + 0;
    goto L_08A41258;
L_08A41258:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 + 1; goto L_08A41280; }
    goto L_08A41264;
L_08A41264:;
    v1 = LD32(a0+8);
    v0 = LD32(t0+4);
    cnd_ = v1 == v0;
    a2 = v1 ^ 0x2;
    if (cnd_) { goto L_08A4127C; }
    goto L_08A41274;
L_08A41274:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = 15; goto L_08A41298; }
    goto L_08A4127C;
L_08A4127C:;
    a3 = a3 + 1;
    goto L_08A41280;
L_08A41280:;
    v0 = (s32)a3 < 16;
    cnd_ = v0 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08A41258; }
    goto L_08A4128C;
L_08A4128C:;
    a1 = 16;
    goto L_08A41290;
L_08A41290:;
    v0 = a1 + 0;
    return v0;
L_08A41298:;
    v0 = t1 < 0x10u;
    v1 = a0 + 0;
    if (v0 != 0) v1 = t1;
    v0 = a3 < 0x10u;
    if (v0 != 0) a0 = a3;
    v1 = v1 << 4;
    v1 = v1 + a0;
    v0 = D_08C2D94C - (-9908);
    v1 = v1 << 2;
    v0 = v0 - 9908;
    v1 = v1 + v0;
    a1 = LD32(v1);
    goto L_08A41290;
}

/* 08A412CC */
u32 func_08A412CC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A412CC:;
    sp = sp - 32;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    s3 = a0 + 0;
    s2 = a2 + 0;
    v1 = LD32(v0+8);
    cnd_ = v1 == a2;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A41370; }
    goto L_08A41308;
L_08A41308:;
    v0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B1C34C - (-15540);
    v1 = v1 - 15540;
    v0 = lo;
    v0 = v0 + v1;
    a0 = LD32(v0+28);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A4136C; }
    goto L_08A4132C;
L_08A4132C:;
    s1 = v0 + 0;
    a1 = s0 + 0;
    goto L_08A41334;
L_08A41334:;
    a0 = s1 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A4133C;
L_08A4133C:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s3 + v1;
    v0 = LD32(v1+8);
    s0 = s0 + 1;
    cnd_ = v0 == s2;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A41370; }
    goto L_08A4135C;
L_08A4135C:;
    v0 = LD32(s1+28);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A41334; }
    goto L_08A4136C;
L_08A4136C:;
    a0 = 1;
    goto L_08A41370;
L_08A41370:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A41390 */
u64 func_08A41390(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A41390:;
    v0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 48;
    v1 = D_08B1C34C - (-15540);
    v1 = v1 - 15540;
    s2 = a0 + 0;
    s6 = 0 + 0;
    s0 = lo;
    a0 = s0 + v1;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A41474; }
    goto L_08A413E4;
L_08A413E4:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = s2 + v0;
    s5 = lo;
    s4 = v0 + 4;
    s3 = a0 + 0;
    s7 = v1 + 0;
    goto L_08A41404;
L_08A41404:;
    s0 = s5 + v1;
    a1 = s1 + 0;
    a0 = s0 + 0;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A41414;
L_08A41414:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s2 + v1;
    a2 = LD32(v1+8);
    v0 = LD32(s4+4);
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = a2 == v0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A41464; }
    goto L_08A4143C;
L_08A4143C:;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A41444;
L_08A41444:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s2 + v1;
    v0 = LD32(v1+8);
    v0 = v0 ^ 0x2;
    v0 = 0 < v0;
    s6 = s6 + v0;
    goto L_08A41464;
L_08A41464:;
    v0 = LD32(s3+28);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    v1 = s7 + 0;
    if (cnd_) { goto L_08A41404; }
    goto L_08A41474;
L_08A41474:;
    v0 = s6 + 0;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A414A4 */
u32 func_08A414A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A414A4:;
    v0 = a1 << 1;
    sp = sp - 16;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v1 = LD_U8(v0+4);
    a1 = a0 + 0;
    v0 = v0 + 4;
    cnd_ = v1 == 0;
    a0 = a0 + 196;
    if (cnd_) { goto L_08A414E0; }
    goto L_08A414D0;
L_08A414D0:;
    v1 = LD32(v0+4);
    v0 = LD32(a1+272);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A414F4; }
    goto L_08A414E0;
L_08A414E0:;
    v0 = func_08A3BEB8(a0);
    goto L_08A414E8;
L_08A414E8:;
    goto L_08A414EC;
L_08A414EC:;
    sp = sp + 16;
    return v0;
L_08A414F4:;
    v0 = func_08A43528();
    goto L_08A414FC;
L_08A414FC:;
    goto L_08A414EC;
}

/* 08A41504 */
u32 func_08A41504(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41504:;
    v0 = a1 << 1;
    sp = sp - 16;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v1 = LD_U8(v0+4);
    a1 = a0 + 0;
    cnd_ = v1 == 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08A41538; }
    goto L_08A4152C;
L_08A4152C:;
    v0 = LD32(v0+4);
    cnd_ = v0 == a2;
    if (cnd_) { goto L_08A41560; }
    goto L_08A41538;
L_08A41538:;
    v0 = LD32(a1+352);
    a0 = a1 + 276;
    cnd_ = a2 == v0;
    v1 = a1 + 196;
    if (cnd_) { goto L_08A4154C; }
    goto L_08A41548;
L_08A41548:;
    a0 = v1 + 0;
    goto L_08A4154C;
L_08A4154C:;
    v0 = func_08A3BEB8(a0);
    goto L_08A41554;
L_08A41554:;
    goto L_08A41558;
L_08A41558:;
    sp = sp + 16;
    return v0;
L_08A41560:;
    v0 = func_08A43528();
    goto L_08A41568;
L_08A41568:;
    goto L_08A41558;
}

/* 08A41570 */
void func_08A41570(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_08A41570:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    a1 = (s32)a1 < 16;
    cnd_ = a1 == 0;
    a3 = v0 + a0;
    if (cnd_) { goto L_08A415A8; }
    goto L_08A41588;
L_08A41588:;
    a1 = LD32(a3+12);
    v1 = 10;
    v0 = a1 - a2;
    a2 = v0 < 0xau;
    if (a2 != 0) v0 = v1;
    a0 = v0 < a1;
    if (a0 == 0) v0 = a1;
    ST32(a3+12, v0);
    goto L_08A415A8;
L_08A415A8:;
    return;
}

/* 08A415B0 */
void func_08A415B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A415B0:;
    a3 = a1 << 1;
    a3 = a3 + a1;
    sp = sp - 16;
    a3 = a3 << 2;
    v0 = (s32)a1 < 16;
    s1 = a3 + a0;
    s0 = a2 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A415F0; }
    goto L_08A415DC;
L_08A415DC:;
    sp = sp + 16;
    return;
L_08A415F0:;
    v0 = func_08A414A4(a0, a1);
    goto L_08A415F8;
L_08A415F8:;
    v1 = 10;
    a0 = s0 < 0xau;
    if (a0 == 0) v1 = s0;
    a1 = v1 < v0;
    if (a1 == 0) v1 = v0;
    ST32(s1+12, v1);
    goto L_08A415DC;
}

/* 08A41614 */
void func_08A41614(u32 a0)
{
L_08A41614:;
    ST32(a0+56, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
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
    ST32(a0+52, 0);
    return;
}

/* 08A41654 */
rv_t func_08A41654(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A41654:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2D91C - (-9956);
    t1 = D_08C2D92C - (-9940);
    t2 = D_08C2D93C - (-9924);
    a1 = a1 & a0;
    v1 = t0 - 9956;
    a2 = t1 - 9940;
    cnd_ = a1 == 0;
    a3 = t2 - 9924;
    if (cnd_) { goto L_08A4170C; }
    goto L_08A41684;
L_08A41684:;
    v0 = D_08AEFC0C - (-1012);
    f4 = BITSF(LD32(v0-1012));
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
    ST32(t0-9956, FBITS(f2));
    ST32(t1-9940, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-9924, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A4170C;
L_08A4170C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A41714 */
rv_t func_08A41714(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41714:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A41654(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41728;
L_08A41728:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A41734 */
rv_t func_08A41734(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41734:;
    ST8(a0+12, 0);
    sp = sp - 16;
    ST8(a0+13, 0);
    ST8(a0+14, 0);
    ST8(a0+15, 0);
    ST8(a0+16, 0);
    ST8(a0+17, 0);
    ST8(a0+18, 0);
    ST8(a0+19, 0);
    ST8(a0+20, 0);
    ST8(a0+21, 0);
    ST8(a0+23, 0);
    s0 = a0 + 0;
    { u64 r_ = func_08897BC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41774;
L_08A41774:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A41A94; }
    goto L_08A4177C;
L_08A4177C:;
    a1 = D_08B2889C - (-30564);
    a0 = a1 - 30564;
    v0 = LD_U8(a0+294);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A417A0; }
    goto L_08A41790;
L_08A41790:;
    v0 = D_08B287AA - (-30806);
    v1 = LD_U8(v0-30806);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A417C0; }
    goto L_08A417A0;
L_08A417A0:;
    v0 = LD_U8(a0+461);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+12, a2); goto L_08A417C4; }
    goto L_08A417AC;
L_08A417AC:;
    v0 = D_08B28851 - (-30639);
    v1 = LD_U8(v0-30639);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+12, a2); goto L_08A417C4; }
    goto L_08A417BC;
L_08A417BC:;
    a2 = 1;
    goto L_08A417C0;
L_08A417C0:;
    ST8(s0+12, a2);
    goto L_08A417C4;
L_08A417C4:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+296);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A417E4; }
    goto L_08A417D4;
L_08A417D4:;
    v0 = D_08B287AC - (-30804);
    v1 = LD_U8(v0-30804);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A41804; }
    goto L_08A417E4;
L_08A417E4:;
    v0 = LD_U8(a0+462);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+13, a2); goto L_08A41808; }
    goto L_08A417F0;
L_08A417F0:;
    v0 = D_08B28852 - (-30638);
    v1 = LD_U8(v0-30638);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+13, a2); goto L_08A41808; }
    goto L_08A41800;
L_08A41800:;
    a2 = 1;
    goto L_08A41804;
L_08A41804:;
    ST8(s0+13, a2);
    goto L_08A41808;
L_08A41808:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+293);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A41828; }
    goto L_08A41818;
L_08A41818:;
    v0 = D_08B287A9 - (-30807);
    v1 = LD_U8(v0-30807);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A41848; }
    goto L_08A41828;
L_08A41828:;
    v0 = LD_U8(a0+463);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+14, a2); goto L_08A4184C; }
    goto L_08A41834;
L_08A41834:;
    v0 = D_08B28853 - (-30637);
    v1 = LD_U8(v0-30637);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+14, a2); goto L_08A4184C; }
    goto L_08A41844;
L_08A41844:;
    a2 = 1;
    goto L_08A41848;
L_08A41848:;
    ST8(s0+14, a2);
    goto L_08A4184C;
L_08A4184C:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+295);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A4186C; }
    goto L_08A4185C;
L_08A4185C:;
    v0 = D_08B287AB - (-30805);
    v1 = LD_U8(v0-30805);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A4188C; }
    goto L_08A4186C;
L_08A4186C:;
    v0 = LD_U8(a0+464);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+15, a2); goto L_08A41890; }
    goto L_08A41878;
L_08A41878:;
    v0 = D_08B28854 - (-30636);
    v1 = LD_U8(v0-30636);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+15, a2); goto L_08A41890; }
    goto L_08A41888;
L_08A41888:;
    a2 = 1;
    goto L_08A4188C;
L_08A4188C:;
    ST8(s0+15, a2);
    goto L_08A41890;
L_08A41890:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+13);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A418B0; }
    goto L_08A418A0;
L_08A418A0:;
    v0 = D_08B28691 - (-31087);
    v1 = LD_U8(v0-31087);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A418D0; }
    goto L_08A418B0;
L_08A418B0:;
    v0 = LD_U8(a0+449);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+16, a2); goto L_08A418D4; }
    goto L_08A418BC;
L_08A418BC:;
    v0 = D_08B28845 - (-30651);
    v1 = LD_U8(v0-30651);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+16, a2); goto L_08A418D4; }
    goto L_08A418CC;
L_08A418CC:;
    a2 = 1;
    goto L_08A418D0;
L_08A418D0:;
    ST8(s0+16, a2);
    goto L_08A418D4;
L_08A418D4:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A418F4; }
    goto L_08A418E4;
L_08A418E4:;
    v0 = D_08B2868C - (-31092);
    v1 = LD_U8(v0-31092);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A41914; }
    goto L_08A418F4;
L_08A418F4:;
    v0 = LD_U8(a0+450);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+19, a2); goto L_08A41918; }
    goto L_08A41900;
L_08A41900:;
    v0 = D_08B28846 - (-30650);
    v1 = LD_U8(v0-30650);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+19, a2); goto L_08A41918; }
    goto L_08A41910;
L_08A41910:;
    a2 = 1;
    goto L_08A41914;
L_08A41914:;
    ST8(s0+19, a2);
    goto L_08A41918;
L_08A41918:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+44);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A41938; }
    goto L_08A41928;
L_08A41928:;
    v0 = D_08B286B0 - (-31056);
    v1 = LD_U8(v0-31056);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A41958; }
    goto L_08A41938;
L_08A41938:;
    v0 = LD_U8(a0+451);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+18, a2); goto L_08A4195C; }
    goto L_08A41944;
L_08A41944:;
    v0 = D_08B28847 - (-30649);
    v1 = LD_U8(v0-30649);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+18, a2); goto L_08A4195C; }
    goto L_08A41954;
L_08A41954:;
    a2 = 1;
    goto L_08A41958;
L_08A41958:;
    ST8(s0+18, a2);
    goto L_08A4195C;
L_08A4195C:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+46);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A4197C; }
    goto L_08A4196C;
L_08A4196C:;
    v0 = D_08B286B2 - (-31054);
    v1 = LD_U8(v0-31054);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A4199C; }
    goto L_08A4197C;
L_08A4197C:;
    v0 = LD_U8(a0+452);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+17, a2); goto L_08A419A0; }
    goto L_08A41988;
L_08A41988:;
    v0 = D_08B28848 - (-30648);
    v1 = LD_U8(v0-30648);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+17, a2); goto L_08A419A0; }
    goto L_08A41998;
L_08A41998:;
    a2 = 1;
    goto L_08A4199C;
L_08A4199C:;
    ST8(s0+17, a2);
    goto L_08A419A0;
L_08A419A0:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+93);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A419C0; }
    goto L_08A419B0;
L_08A419B0:;
    v0 = D_08B286E1 - (-31007);
    v1 = LD_U8(v0-31007);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A419E0; }
    goto L_08A419C0;
L_08A419C0:;
    v0 = LD_U8(a0+458);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+20, a2); goto L_08A419E4; }
    goto L_08A419CC;
L_08A419CC:;
    v0 = D_08B2884E - (-30642);
    v1 = LD_U8(v0-30642);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+20, a2); goto L_08A419E4; }
    goto L_08A419DC;
L_08A419DC:;
    a2 = 1;
    goto L_08A419E0;
L_08A419E0:;
    ST8(s0+20, a2);
    goto L_08A419E4;
L_08A419E4:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+91);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A41A04; }
    goto L_08A419F4;
L_08A419F4:;
    v0 = D_08B286DF - (-31009);
    v1 = LD_U8(v0-31009);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A41A24; }
    goto L_08A41A04;
L_08A41A04:;
    v0 = LD_U8(a0+457);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+21, a2); goto L_08A41A28; }
    goto L_08A41A10;
L_08A41A10:;
    v0 = D_08B2884D - (-30643);
    v1 = LD_U8(v0-30643);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+21, a2); goto L_08A41A28; }
    goto L_08A41A20;
L_08A41A20:;
    a2 = 1;
    goto L_08A41A24;
L_08A41A24:;
    ST8(s0+21, a2);
    goto L_08A41A28;
L_08A41A28:;
    v1 = a1 - 30564;
    v0 = LD_U8(v1+115);
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A41A44; }
    goto L_08A41A38;
L_08A41A38:;
    v0 = LD_U8(v1+456);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+22, a0); goto L_08A41A4C; }
    goto L_08A41A44;
L_08A41A44:;
    a0 = 1;
    ST8(s0+22, a0);
    goto L_08A41A4C;
L_08A41A4C:;
    a0 = a1 - 30564;
    v0 = LD_U8(a0+113);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A41A6C; }
    goto L_08A41A5C;
L_08A41A5C:;
    v0 = D_08B286F5 - (-30987);
    v1 = LD_U8(v0-30987);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = 1; goto L_08A41A8C; }
    goto L_08A41A6C;
L_08A41A6C:;
    v0 = LD_U8(a0+455);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+23, a1); goto L_08A41A90; }
    goto L_08A41A78;
L_08A41A78:;
    v0 = D_08B2884B - (-30645);
    v1 = LD_U8(v0-30645);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+23, a1); goto L_08A41A90; }
    goto L_08A41A88;
L_08A41A88:;
    a1 = 1;
    goto L_08A41A8C;
L_08A41A8C:;
    ST8(s0+23, a1);
    goto L_08A41A90;
L_08A41A90:;
    v0 = LD32(s0+4);
    goto L_08A41A94;
L_08A41A94:;
    v0 = LD32(v0+16);
    v1 = v0 < 0xau;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A41ACC; }
    goto L_08A41AA4;
L_08A41AA4:;
    v1 = D_08AE4C4C - (19532);
    v0 = v0 << 2;
    v1 = v1 + 19532;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A41AC0u: goto L_08A41AC0; case 0x08A41AC8u: goto L_08A41AC8; case 0x08A41AD8u: goto L_08A41AD8; case 0x08A41AE8u: goto L_08A41AE8; case 0x08A41AF8u: goto L_08A41AF8; case 0x08A41B08u: goto L_08A41B08; case 0x08A41B18u: goto L_08A41B18; case 0x08A41B28u: goto L_08A41B28; case 0x08A41B38u: goto L_08A41B38; default: rs_break(0, 0x08a41ab8); }
L_08A41AC0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A41B48(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41AC8;
L_08A41AC8:;
    goto L_08A41ACC;
L_08A41ACC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A41AD8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A41B64(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41AE0;
L_08A41AE0:;
    goto L_08A41ACC;
L_08A41AE8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A41C84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41AF0;
L_08A41AF0:;
    goto L_08A41ACC;
L_08A41AF8:;
    a0 = s0 + 0;
    func_08A41E0C();
    goto L_08A41B00;
L_08A41B00:;
    goto L_08A41ACC;
L_08A41B08:;
    a0 = s0 + 0;
    func_08A41E04();
    goto L_08A41B10;
L_08A41B10:;
    goto L_08A41ACC;
L_08A41B18:;
    a0 = s0 + 0;
    { u64 r_ = func_08A41E14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41B20;
L_08A41B20:;
    goto L_08A41ACC;
L_08A41B28:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A41E30(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41B30;
L_08A41B30:;
    goto L_08A41ACC;
L_08A41B38:;
    a0 = s0 + 0;
    { u64 r_ = func_08A41F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41B40;
L_08A41B40:;
    goto L_08A41ACC;
}

/* 08A41B48 */
u64 func_08A41B48(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A41B48:;
    v0 = LD_U8(a0+16);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A41B5C; }
    goto L_08A41B54;
L_08A41B54:;
    v1 = LD32(a0+4);
    ST8(v1+36, v0);
    goto L_08A41B5C;
L_08A41B5C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A41B64 */
rv_t func_08A41B64(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41B64:;
    sp = sp - 16;
    s1 = 1;
    a1 = LD32(a0+4);
    v1 = LD32(a1+88);
    cnd_ = v1 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A41C28; }
    goto L_08A41B88;
L_08A41B88:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A41BD8; }
    goto L_08A41B94;
L_08A41B94:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+16); goto L_08A41BB0; }
    goto L_08A41B9C;
L_08A41B9C:;
    goto L_08A41BA0;
L_08A41BA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A41BB0:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a1+47, s1); goto L_08A41BB8; }
    goto L_08A41BB8;
L_08A41BB8:;
    v0 = LD_U8(s0+19);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a1+48, s1); goto L_08A41BC4; }
    goto L_08A41BC4;
L_08A41BC4:;
    v0 = LD_U8(s0+20);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a1+54, s1); goto L_08A41B9C; }
    goto L_08A41BD0;
L_08A41BD0:;
    goto L_08A41BA0;
L_08A41BD8:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A41BA0; }
    goto L_08A41BE0;
L_08A41BE0:;
    { rv_t r_ = func_08A4206C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41BE8;
L_08A41BE8:;
    v0 = LD_U8(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+18); goto L_08A41C00; }
    goto L_08A41BF4;
L_08A41BF4:;
    v0 = LD32(s0+4);
    ST8(v0+43, s1);
    v0 = LD_U8(s0+18);
    goto L_08A41C00;
L_08A41C00:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+17); goto L_08A41C14; }
    goto L_08A41C08;
L_08A41C08:;
    v0 = LD32(s0+4);
    ST8(v0+45, s1);
    v0 = LD_U8(s0+17);
    goto L_08A41C14;
L_08A41C14:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41BA0; }
    goto L_08A41C1C;
L_08A41C1C:;
    v0 = LD32(s0+4);
    ST8(v0+36, s1);
    goto L_08A41BA0;
L_08A41C28:;
    { u64 r_ = func_08A42388(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41C30;
L_08A41C30:;
    v0 = LD_U8(s0+14);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+15); goto L_08A41C48; }
    goto L_08A41C3C;
L_08A41C3C:;
    v0 = LD32(s0+4);
    ST8(v0+42, s1);
    v0 = LD_U8(s0+15);
    goto L_08A41C48;
L_08A41C48:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+16); goto L_08A41C5C; }
    goto L_08A41C50;
L_08A41C50:;
    v0 = LD32(s0+4);
    ST8(v0+41, s1);
    v0 = LD_U8(s0+16);
    goto L_08A41C5C;
L_08A41C5C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+19); goto L_08A41C70; }
    goto L_08A41C64;
L_08A41C64:;
    v0 = LD32(s0+4);
    ST8(v0+47, s1);
    v0 = LD_U8(s0+19);
    goto L_08A41C70;
L_08A41C70:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41BA0; }
    goto L_08A41C78;
L_08A41C78:;
    v0 = LD32(s0+4);
    ST8(v0+48, s1);
    goto L_08A41BA0;
}

/* 08A41C84 */
rv_t func_08A41C84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41C84:;
    sp = sp - 16;
    a1 = LD32(a0+4);
    v1 = LD32(a1+108);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A41CF8; }
    goto L_08A41CA4;
L_08A41CA4:;
    v0 = v1 << 2;
    v1 = D_08AE4C74 - (19572);
    v1 = v1 + 19572;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A41CC0u: goto L_08A41CC0; case 0x08A41CF8u: goto L_08A41CF8; case 0x08A41D3Cu: goto L_08A41D3C; case 0x08A41D6Cu: goto L_08A41D6C; case 0x08A41D7Cu: goto L_08A41D7C; case 0x08A41DBCu: goto L_08A41DBC; case 0x08A41DFCu: goto L_08A41DFC; default: rs_break(0, 0x08a41cb8); }
L_08A41CC0:;
    v0 = LD_U8(a1+128);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41D2C; }
    goto L_08A41CCC;
L_08A41CCC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A420B8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41CD4;
L_08A41CD4:;
    v0 = LD_U8(s0+16);
    goto L_08A41CD8;
L_08A41CD8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_08A41D20; }
    goto L_08A41CE0;
L_08A41CE0:;
    v0 = LD_U8(s0+17);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+18); goto L_08A41D08; }
    goto L_08A41CEC;
L_08A41CEC:;
    v1 = LD32(s0+4);
    v0 = 1;
    ST8(v1+36, v0);
    goto L_08A41CF8;
L_08A41CF8:;
    goto L_08A41CFC;
L_08A41CFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A41D08:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41CFC; }
    goto L_08A41D10;
L_08A41D10:;
    v1 = LD32(s0+4);
    v0 = 1;
    ST8(v1+45, v0);
    goto L_08A41CFC;
L_08A41D20:;
    v0 = 1;
    ST8(v1+38, v0);
    goto L_08A41CF8;
L_08A41D2C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A4206C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41D34;
L_08A41D34:;
    v0 = LD_U8(s0+16);
    goto L_08A41CD8;
L_08A41D3C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A421E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41D44;
L_08A41D44:;
    v0 = LD_U8(s0+16);
    goto L_08A41D48;
L_08A41D48:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_08A41D20; }
    goto L_08A41D50;
L_08A41D50:;
    v0 = LD_U8(s0+19);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41CFC; }
    goto L_08A41D5C;
L_08A41D5C:;
    v1 = LD32(s0+4);
    v0 = 1;
    ST8(v1+39, v0);
    goto L_08A41CFC;
L_08A41D6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A42388(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41D74;
L_08A41D74:;
    v0 = LD_U8(s0+16);
    goto L_08A41D48;
L_08A41D7C:;
    v0 = LD_U8(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+18); goto L_08A41D94; }
    goto L_08A41D88;
L_08A41D88:;
    v0 = 1;
    ST8(a1+50, v0);
    goto L_08A41CF8;
L_08A41D94:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+19); goto L_08A41DA8; }
    goto L_08A41D9C;
L_08A41D9C:;
    v0 = 1;
    ST8(a1+49, v0);
    goto L_08A41CF8;
L_08A41DA8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41CFC; }
    goto L_08A41DB0;
L_08A41DB0:;
    v0 = 1;
    ST8(a1+39, v0);
    goto L_08A41CFC;
L_08A41DBC:;
    v0 = LD_U8(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+19); goto L_08A41DD4; }
    goto L_08A41DC8;
L_08A41DC8:;
    v0 = 1;
    ST8(a1+47, v0);
    v0 = LD_U8(s0+19);
    goto L_08A41DD4;
L_08A41DD4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+20); goto L_08A41DE8; }
    goto L_08A41DDC;
L_08A41DDC:;
    v0 = 1;
    ST8(a1+48, v0);
    v0 = LD_U8(s0+20);
    goto L_08A41DE8;
L_08A41DE8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41CFC; }
    goto L_08A41DF0;
L_08A41DF0:;
    v0 = 1;
    ST8(a1+54, v0);
    goto L_08A41CFC;
L_08A41DFC:;
    v0 = LD_U8(s0+16);
    goto L_08A41DA8;
}

/* 08A41E04 */
void func_08A41E04(void)
{
L_08A41E04:;
    return;
}

/* 08A41E0C */
void func_08A41E0C(void)
{
L_08A41E0C:;
    return;
}

/* 08A41E14 */
u64 func_08A41E14(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A41E14:;
    v0 = LD_U8(a0+16);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A41E28; }
    goto L_08A41E20;
L_08A41E20:;
    v1 = LD32(a0+4);
    ST8(v1+36, v0);
    goto L_08A41E28;
L_08A41E28:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A41E30 */
rv_t func_08A41E30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41E30:;
    sp = sp - 16;
    a1 = LD32(a0+4);
    v1 = LD32(a1+108);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A41E98; }
    goto L_08A41E50;
L_08A41E50:;
    v0 = v1 << 2;
    v1 = D_08AE4C94 - (19604);
    v1 = v1 + 19604;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A41E6Cu: goto L_08A41E6C; case 0x08A41E98u: goto L_08A41E98; case 0x08A41EF0u: goto L_08A41EF0; case 0x08A41F20u: goto L_08A41F20; case 0x08A41F30u: goto L_08A41F30; case 0x08A41F70u: goto L_08A41F70; default: rs_break(0, 0x08a41e64); }
L_08A41E6C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A4206C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41E74;
L_08A41E74:;
    v0 = LD_U8(s0+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A41EC0; }
    goto L_08A41E80;
L_08A41E80:;
    v0 = LD_U8(s0+17);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+18); goto L_08A41EA8; }
    goto L_08A41E8C;
L_08A41E8C:;
    v1 = LD32(s0+4);
    v0 = 1;
    ST8(v1+36, v0);
    goto L_08A41E98;
L_08A41E98:;
    goto L_08A41E9C;
L_08A41E9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A41EA8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41E9C; }
    goto L_08A41EB0;
L_08A41EB0:;
    v1 = LD32(s0+4);
    v0 = 1;
    ST8(v1+45, v0);
    goto L_08A41E9C;
L_08A41EC0:;
    a0 = s0 + 0;
    v0 = func_08A422B0(a0);
    goto L_08A41EC8;
L_08A41EC8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41EE0; }
    goto L_08A41ED0;
L_08A41ED0:;
    v1 = LD32(s0+4);
    goto L_08A41ED4;
L_08A41ED4:;
    v0 = 1;
    ST8(v1+38, v0);
    goto L_08A41E98;
L_08A41EE0:;
    a0 = 4;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41EE8;
L_08A41EE8:;
    goto L_08A41E9C;
L_08A41EF0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A4224C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A41EF8;
L_08A41EF8:;
    v0 = LD_U8(s0+16);
    goto L_08A41EFC;
L_08A41EFC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_08A41ED4; }
    goto L_08A41F04;
L_08A41F04:;
    v0 = LD_U8(s0+19);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41E9C; }
    goto L_08A41F10;
L_08A41F10:;
    v1 = LD32(s0+4);
    v0 = 1;
    ST8(v1+39, v0);
    goto L_08A41E9C;
L_08A41F20:;
    a0 = s0 + 0;
    { u64 r_ = func_08A42388(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A41F28;
L_08A41F28:;
    v0 = LD_U8(s0+16);
    goto L_08A41EFC;
L_08A41F30:;
    v0 = LD_U8(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+19); goto L_08A41F48; }
    goto L_08A41F3C;
L_08A41F3C:;
    v0 = 1;
    ST8(a1+47, v0);
    v0 = LD_U8(s0+19);
    goto L_08A41F48;
L_08A41F48:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+20); goto L_08A41F5C; }
    goto L_08A41F50;
L_08A41F50:;
    v0 = 1;
    ST8(a1+48, v0);
    v0 = LD_U8(s0+20);
    goto L_08A41F5C;
L_08A41F5C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41E9C; }
    goto L_08A41F64;
L_08A41F64:;
    v0 = 1;
    ST8(a1+54, v0);
    goto L_08A41E9C;
L_08A41F70:;
    v0 = LD_U8(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A41E9C; }
    goto L_08A41F7C;
L_08A41F7C:;
    v0 = 1;
    ST8(a1+39, v0);
    goto L_08A41E9C;
}

/* 08A41F88 */
u64 func_08A41F88(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A41F88:;
    v0 = LD_U8(a0+16);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A41F9C; }
    goto L_08A41F94;
L_08A41F94:;
    v1 = LD32(a0+4);
    ST8(v1+40, v0);
    goto L_08A41F9C;
L_08A41F9C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A41FA4 */
rv_t func_08A41FA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A41FA4:;
    sp = sp - 16;
    t3 = a2 + 0;
    t4 = a3 + 0;
    t2 = LD_U8(a0+13);
    cnd_ = t2 != 0;
    t1 = t0 + 0;
    if (cnd_) { goto L_08A42064; }
    goto L_08A41FC0;
L_08A41FC0:;
    a3 = LD_U8(a0+14);
    cnd_ = a3 != 0;
    v1 = LD_U8(a0+12);
    if (cnd_) { goto L_08A41FE0; }
    goto L_08A41FCC;
L_08A41FCC:;
    cnd_ = v1 != 0;
    v0 = a3 & 0xff;
    if (cnd_) { goto L_08A41FE4; }
    goto L_08A41FD4;
L_08A41FD4:;
    v0 = LD_U8(a0+15);
    cnd_ = v0 == 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_08A42018; }
    goto L_08A41FE0;
L_08A41FE0:;
    v0 = a3 & 0xff;
    goto L_08A41FE4;
L_08A41FE4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a0+15); goto L_08A42028; }
    goto L_08A41FEC;
L_08A41FEC:;
    v0 = v1 & 0xff;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A42004; }
    goto L_08A41FF8;
L_08A41FF8:;
    v0 = 7;
    a2 = 0 + 0;
    if (t2 != 0) a2 = v0;
    goto L_08A42004;
L_08A42004:;
    a0 = LD32(a0+4);
    a3 = t3 + 0;
    t0 = t4 + 0;
    { rv_t r_ = func_08A38870(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A42014;
L_08A42014:;
    a2 = v0 + 0;
    goto L_08A42018;
L_08A42018:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A42028:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = v1 & 0xff; goto L_08A4204C; }
    goto L_08A42030;
L_08A42030:;
    v0 = v1 & 0xff;
    cnd_ = v0 != 0;
    a2 = 3;
    if (cnd_) { goto L_08A42004; }
    goto L_08A4203C;
L_08A4203C:;
    a2 = 5;
    v0 = 4;
    if (t2 == 0) a2 = v0;
    goto L_08A42004;
L_08A4204C:;
    a2 = 2;
    v0 = 6;
    if (v1 == 0) a2 = v0;
    goto L_08A42004;
L_08A4205C:;
    v1 = LD_U8(a0+12);
    goto L_08A41FE0;
L_08A42064:;
    a3 = LD_U8(a0+14);
    goto L_08A4205C;
}

/* 08A4206C */
rv_t func_08A4206C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4206C:;
    sp = sp - 16;
    a2 = 2;
    a3 = 4;
    t0 = 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a1 = LD32(v0+60);
    { rv_t r_ = func_08A41FA4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A42094;
L_08A42094:;
    v1 = v0 + 0;
    v0 = v0 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A420AC; }
    goto L_08A420A4;
L_08A420A4:;
    v0 = LD32(s0+4);
    ST32(v0+28, v1);
    goto L_08A420AC;
L_08A420AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A420B8 */
rv_t func_08A420B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A420B8:;
    sp = sp - 32;
    s4 = 4;
    s3 = 3;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+60);
    goto L_08A420F0;
L_08A420F0:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A38540(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A420F8;
L_08A420F8:;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A421D4; }
    goto L_08A42100;
L_08A42100:;
    a0 = LD32(s1+4);
    v0 = func_08A3848C(a0, a1);
    goto L_08A42108;
L_08A42108:;
    v1 = LD32(v0+4);
    goto L_08A4210C;
L_08A4210C:;
    cnd_ = v1 == s3;
    if (cnd_) { s4 = s2 + 0; goto L_08A42124; }
    goto L_08A42114;
L_08A42114:;
    s2 = s2 + 1;
    v0 = s2 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A420F0; }
    goto L_08A42124;
L_08A42124:;
    v0 = D_08B1C34C - (-15540);
    s5 = v0 - 15540;
    s2 = 0 + 0;
    s3 = 44;
    goto L_08A42134;
L_08A42134:;
    a0 = LD32(s1+4);
    a1 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A42140;
L_08A42140:;
    a3 = LD32(s1+4);
    a0 = LD32(v0+4);
    a2 = s2 < 0x11u;
    v1 = LD32(a3+12);
    a1 = s0 + 1;
    cnd_ = a0 == v1;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A421B4; }
    goto L_08A4215C;
L_08A4215C:;
    cnd_ = a2 != 0;
    s0 = a1 & 0xf;
    if (cnd_) { goto L_08A42134; }
    goto L_08A42164;
L_08A42164:;
    a2 = LD32(a3+12);
    goto L_08A42168;
L_08A42168:;
    a1 = s0 + 0;
    a3 = s4 + 0;
    a0 = s1 + 0;
    t0 = 16;
    { rv_t r_ = func_08A41FA4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4217C;
L_08A4217C:;
    s0 = v0 + 0;
    v0 = v0 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A42194; }
    goto L_08A4218C;
L_08A4218C:;
    v0 = LD32(s1+4);
    ST32(v0+28, s0);
    goto L_08A42194;
L_08A42194:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A421B4:;
    { s64 p_ = (s64)(s32)s0 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + s5;
    v1 = LD32(v0+4);
    cnd_ = v1 != s4;
    if (cnd_) { goto L_08A4215C; }
    goto L_08A421CC;
L_08A421CC:;
    a2 = LD32(a3+12);
    goto L_08A42168;
L_08A421D4:;
    a0 = LD32(s1+4);
    a1 = s2 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A421E0;
L_08A421E0:;
    v1 = LD32(v0+8);
    goto L_08A4210C;
}

/* 08A421E8 */
rv_t func_08A421E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A421E8:;
    sp = sp - 16;
    a2 = 2;
    a3 = 4;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+60);
    a1 = s0 + 0;
    t0 = s0 + 0;
    { rv_t r_ = func_08A41FA4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A42218;
L_08A42218:;
    v1 = v0 + 0;
    v0 = v0 < 0x10u;
    cnd_ = v0 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A42238; }
    goto L_08A42228;
L_08A42228:;
    cnd_ = v1 == s0;
    if (cnd_) { goto L_08A4223C; }
    goto L_08A42230;
L_08A42230:;
    v0 = LD32(s1+4);
    ST32(v0+32, v1);
    goto L_08A42238;
L_08A42238:;
    goto L_08A4223C;
L_08A4223C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4224C */
rv_t func_08A4224C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4224C:;
    sp = sp - 16;
    a3 = 4;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+60);
    a2 = LD32(v0+12);
    a1 = s0 + 0;
    t0 = s0 + 0;
    { rv_t r_ = func_08A41FA4(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4227C;
L_08A4227C:;
    v1 = v0 + 0;
    v0 = v0 < 0x10u;
    cnd_ = v0 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A4229C; }
    goto L_08A4228C;
L_08A4228C:;
    cnd_ = v1 == s0;
    if (cnd_) { goto L_08A422A0; }
    goto L_08A42294;
L_08A42294:;
    v0 = LD32(s1+4);
    ST32(v0+32, v1);
    goto L_08A4229C;
L_08A4229C:;
    goto L_08A422A0;
L_08A422A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A422B0 */
u32 func_08A422B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A422B0:;
    sp = sp - 32;
    v1 = 44;
    s3 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+60);
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    s4 = a0 + v0;
    s1 = LD32(s4+28);
    cnd_ = s1 != 0;
    ST32(s0+8, 0);
    if (cnd_) { goto L_08A42324; }
    goto L_08A42300;
L_08A42300:;
    v0 = 0 + 0;
    goto L_08A42304;
L_08A42304:;
    sp = sp + 32;
    return v0;
L_08A42324:;
    a1 = LD32(s0+8);
    a0 = s4 + 0;
    s3 = s3 + 1;
    v0 = func_08A3BCCC(a0, a1);
    goto L_08A42334;
L_08A42334:;
    a0 = LD32(s0+4);
    a1 = v0 + 0;
    s2 = v0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A42344;
L_08A42344:;
    a0 = LD32(s0+4);
    v1 = LD32(v0+4);
    v0 = LD32(a0+12);
    cnd_ = v1 == v0;
    a1 = s3 < s1;
    if (cnd_) { goto L_08A4237C; }
    goto L_08A42358;
L_08A42358:;
    v0 = LD32(s0+8);
    v0 = s1 + v0;
    v0 = v0 + 1;
    { u32 x_ = v0, y_ = s1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    cnd_ = a1 != 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_08A42324; }
    goto L_08A42374;
L_08A42374:;
    v0 = 0 + 0;
    goto L_08A42304;
L_08A4237C:;
    v0 = 1;
    ST32(a0+32, s2);
    goto L_08A42304;
}

/* 08A42388 */
u64 func_08A42388(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A42388:;
    v0 = LD_U8(a0+14);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a0+15); goto L_08A423A4; }
    goto L_08A42394;
L_08A42394:;
    v1 = LD32(a0+4);
    v0 = 1;
    ST8(v1+42, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_08A423A4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A423B4; }
    goto L_08A423AC;
L_08A423AC:;
    v1 = LD32(a0+4);
    ST8(v1+41, v0);
    goto L_08A423B4;
L_08A423B4:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A423BC */
u64 func_08A423BC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A423BC:;
    v0 = D_08B153A0 - (21408);
    sp = sp - 16;
    v0 = v0 + 21408;
    s0 = a0 + 0;
    ST32(a0, v0);
    v0 = 10;
    a0 = 8;
    s2 = a1 + 0;
    ST32(s0+12, v0);
    ST32(s0+4, a1);
    ST8(s0+16, 0);
    ST8(s0+17, 0);
    ST32(s0+24, 0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A42404;
L_08A42404:;
    s1 = v0 + 0;
    a1 = s2 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08A3CF14(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42414;
L_08A42414:;
    ST32(s0+8, s1);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A42430 */
rv_t func_08A42430(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A42430:;
    sp = sp - 16;
    v0 = D_08B153A0 - (21408);
    s1 = a0 + 0;
    v0 = v0 + 21408;
    s0 = LD32(a0+8);
    ST32(s1, v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A4247C; }
    goto L_08A4245C;
L_08A4245C:;
    v0 = D_08B153D0 - (21456);
    goto L_08A42460;
L_08A42460:;
    v0 = v0 + 21456;
    ST32(s1, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A4247C:;
    func_08A3D0E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A42484;
L_08A42484:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4248C;
L_08A4248C:;
    v0 = D_08B153D0 - (21456);
    goto L_08A42460;
}

/* 08A42494 */
rv_t func_08A42494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A42494:;
    sp = sp - 16;
    v0 = D_08B153A0 - (21408);
    s1 = a0 + 0;
    v0 = v0 + 21408;
    s0 = LD32(a0+8);
    ST32(s1, v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A424E8; }
    goto L_08A424C0;
L_08A424C0:;
    v0 = D_08B153D0 - (21456);
    goto L_08A424C4;
L_08A424C4:;
    v0 = v0 + 21456;
    ST32(s1, v0);
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A424D4;
L_08A424D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A424E8:;
    func_08A3D0E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A424F0;
L_08A424F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A424F8;
L_08A424F8:;
    v0 = D_08B153D0 - (21456);
    goto L_08A424C4;
}

/* 08A42500 */
rv_t func_08A42500(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A42500:;
    sp = sp - 304;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A42568; }
    goto L_08A42534;
L_08A42534:;
    v0 = LD_U8(a0+17);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A42FA0; }
    goto L_08A42540;
L_08A42540:;
    f1 = BITSF(LD32(a0+24));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s2+16); goto L_08A42598; }
    goto L_08A42558;
L_08A42558:;
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    f0 = f1 - f0;
    goto L_08A42564;
L_08A42564:;
    ST32(s2+24, FBITS(f0));
    goto L_08A42568;
L_08A42568:;
    goto L_08A4256C;
L_08A4256C:;
    goto L_08A42570;
L_08A42570:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_08A42594:;
    v0 = LD_U8(s2+16);
    goto L_08A42598;
L_08A42598:;
    cnd_ = v0 == 0;
    a2 = LD32(s2+4);
    if (cnd_) { goto L_08A425B0; }
    goto L_08A425A0;
L_08A425A0:;
    v1 = LD32(s2+12);
    v0 = LD32(a2+16);
    cnd_ = v0 == v1;
    v0 = 1;
    if (cnd_) { goto L_08A42F98; }
    goto L_08A425B0;
L_08A425B0:;
    v1 = LD32(a2+16);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    ST8(s2+16, 0);
    if (cnd_) { goto L_08A42568; }
    goto L_08A425C0;
L_08A425C0:;
    v0 = v1 << 2;
    v1 = D_08AE4CB4 - (19636);
    v1 = v1 + 19636;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A42568u: goto L_08A42568; case 0x08A425DCu: goto L_08A425DC; case 0x08A4267Cu: goto L_08A4267C; case 0x08A42ABCu: goto L_08A42ABC; case 0x08A42D6Cu: goto L_08A42D6C; case 0x08A42D88u: goto L_08A42D88; case 0x08A42DBCu: goto L_08A42DBC; case 0x08A42F8Cu: goto L_08A42F8C; default: rs_break(0, 0x08a425d4); }
L_08A425DC:;
    v1 = LD32(a2+16);
    v0 = LD32(s2+12);
    cnd_ = v1 == v0;
    v0 = 16;
    if (cnd_) { goto L_08A4266C; }
    goto L_08A425EC;
L_08A425EC:;
    ST32(s2+20, v0);
    s0 = 0 + 0;
    a0 = LD32(s2+4);
    goto L_08A425F8;
L_08A425F8:;
    a1 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A42600;
L_08A42600:;
    a2 = LD32(s2+4);
    v1 = LD32(v0+4);
    v0 = LD32(a2+12);
    cnd_ = v1 == v0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08A4264C; }
    goto L_08A42614;
L_08A42614:;
    s0 = s0 + 1;
    goto L_08A42618;
L_08A42618:;
    v0 = (s32)s0 < 16;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08A425F8; }
    goto L_08A42624;
L_08A42624:;
    a2 = LD32(s2+4);
    goto L_08A42628;
L_08A42628:;
    v0 = D_08C2DD80 - (-8832);
    v1 = D_08B1C334 - (-15564);
    a0 = LD32(a2+16);
    a1 = LD_U8(v0-8832);
    f0 = BITSF(LD32(v1-15564));
    ST32(s2+12, a0);
    goto L_08A42640;
L_08A42640:;
    ST32(s2+24, FBITS(f0));
    ST8(s2+17, a1);
    goto L_08A42568;
L_08A4264C:;
    a1 = s0 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A42654;
L_08A42654:;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08A42618; }
    goto L_08A42660;
L_08A42660:;
    a2 = LD32(s2+4);
    ST32(a2+28, s0);
    goto L_08A42628;
L_08A4266C:;
    v0 = 1;
    ST8(s2+16, v0);
    ST8(s2+28, 0);
    goto L_08A42568;
L_08A4267C:;
    v1 = LD32(a2+16);
    v0 = LD32(s2+12);
    cnd_ = v1 == v0;
    if (cnd_) { s0 = LD32(a2+88); goto L_08A426DC; }
    goto L_08A4268C;
L_08A4268C:;
    a0 = LD32(s2+8);
    func_08A3D120(a0, t1, t2, t3);
    goto L_08A42694;
L_08A42694:;
    v0 = LD32(s2+4);
    v1 = D_08C2DD81 - (-8831);
    a1 = LD_U8(v1-8831);
    a0 = LD32(v0+16);
    v0 = D_08B1C338 - (-15560);
    f0 = BITSF(LD32(v0-15560));
    ST8(s2+17, a1);
    v1 = s2 + 44;
    ST32(s2+24, FBITS(f0));
    ST32(s2+12, a0);
    a0 = 0 + 0;
    goto L_08A426C0;
L_08A426C0:;
    a0 = a0 + 1;
    v0 = a0 < 0x10u;
    ST8(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A426C0; }
    goto L_08A426D4;
L_08A426D4:;
    goto L_08A4256C;
L_08A426DC:;
    s1 = 1;
    cnd_ = s0 == s1;
    v0 = (s32)s0 < 2;
    if (cnd_) { goto L_08A42A54; }
    goto L_08A426E8;
L_08A426E8:;
    cnd_ = v0 != 0;
    v0 = 3;
    if (cnd_) { goto L_08A42928; }
    goto L_08A426F0;
L_08A426F0:;
    cnd_ = s0 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A42700; }
    goto L_08A426F8;
L_08A426F8:;
    ST8(s2+16, v0);
    goto L_08A42568;
L_08A42700:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42708;
L_08A42708:;
    a2 = v0 + 0;
    a3 = sp + 0;
    t0 = v0 + 256;
    goto L_08A42714;
L_08A42714:;
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
    if (cnd_) { goto L_08A42714; }
    goto L_08A42740;
L_08A42740:;
    v1 = LD_U8(sp+142);
    v0 = (u32)-1;
    ST32(s2+40, v0);
    s5 = 0 + 0;
    ST32(s2+36, v0);
    cnd_ = v1 != 0;
    ST32(s2+32, v0);
    if (cnd_) { goto L_08A428B0; }
    goto L_08A4275C;
L_08A4275C:;
    s1 = 0 + 0;
    goto L_08A42760;
L_08A42760:;
    s6 = D_08C2DD82 - (-8830);
    s7 = D_08B1C33C - (-15556);
    s4 = sp + 137;
    goto L_08A4276C;
L_08A4276C:;
    v0 = (s32)s1 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08A42824; }
    goto L_08A42778;
L_08A42778:;
    v0 = LD_U8(s4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A427AC; }
    goto L_08A42784;
L_08A42784:;
    s1 = s1 + 1;
    goto L_08A42788;
L_08A42788:;
    v0 = (s32)s1 < 7;
    cnd_ = v0 != 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_08A4276C; }
    goto L_08A42794;
L_08A42794:;
    cnd_ = s5 != 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A4279C;
L_08A4279C:;
    v1 = LD32(s2+4);
    v0 = 1;
    ST8(v1+47, v0);
    goto L_08A4256C;
L_08A427AC:;
    a0 = LD32(s2+4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A427B4;
L_08A427B4:;
    v0 = s1 + v0;
    v1 = LD_U8(v0+65);
    cnd_ = v1 != 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A42788; }
    goto L_08A427C4;
L_08A427C4:;
    v0 = s1 - 3;
    a0 = LD32(s2+4);
    ST32(s2+40, v0);
    s5 = 1;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A427D8;
L_08A427D8:;
    a0 = LD32(s2+4);
    a1 = LD32(s2+40);
    s0 = v0 + 0;
    a2 = LD32(a0+12);
    { rv_t r_ = func_08A39A0C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A427EC;
L_08A427EC:;
    v1 = LD32(s0+48);
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08A42808; }
    goto L_08A427FC;
L_08A427FC:;
    v0 = LD32(s2+4);
    goto L_08A42800;
L_08A42800:;
    ST8(v0+51, s5);
    goto L_08A42794;
L_08A42808:;
    a1 = LD32(s2+40);
    { u64 r_ = func_08A39BA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42810;
L_08A42810:;
    v0 = LD_U8(s6-8830);
    goto L_08A42814;
L_08A42814:;
    f0 = BITSF(LD32(s7-15556));
    ST8(s2+17, v0);
    ST32(s2+24, FBITS(f0));
    goto L_08A42794;
L_08A42824:;
    s3 = s1 << 2;
    s0 = s3 + sp;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42830;
L_08A42830:;
    v0 = s3 + v0;
    a0 = LD32(s0+128);
    v1 = LD32(v0+52);
    v1 = (s32)v1 < (s32)a0;
    cnd_ = v1 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A42788; }
    goto L_08A42848;
L_08A42848:;
    a0 = LD32(s2+4);
    ST32(s2+32, s1);
    s5 = 1;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42858;
L_08A42858:;
    v0 = s3 + v0;
    v1 = LD32(v0+52);
    a0 = LD32(s2+4);
    v1 = v1 + 1;
    ST32(s2+36, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42870;
L_08A42870:;
    a0 = LD32(s2+4);
    a1 = LD32(s2+32);
    a2 = LD32(s2+36);
    a3 = LD32(a0+12);
    s0 = v0 + 0;
    { rv_t r_ = func_08A39964(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A42888;
L_08A42888:;
    v1 = LD32(s0+48);
    v1 = v1 < v0;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A42800; }
    goto L_08A42898;
L_08A42898:;
    a0 = LD32(s2+4);
    a1 = LD32(s2+32);
    a2 = LD32(s2+36);
    { u64 r_ = func_08A39AAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A428A8;
L_08A428A8:;
    v0 = LD_U8(s6-8830);
    goto L_08A42814;
L_08A428B0:;
    a0 = LD32(s2+4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A428B8;
L_08A428B8:;
    v1 = LD_U8(v0+70);
    cnd_ = v1 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A42760; }
    goto L_08A428C4;
L_08A428C4:;
    v0 = 2;
    a0 = LD32(s2+4);
    ST32(s2+40, v0);
    s5 = 1;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A428D8;
L_08A428D8:;
    a0 = LD32(s2+4);
    a1 = LD32(s2+40);
    s0 = v0 + 0;
    a2 = LD32(a0+12);
    { rv_t r_ = func_08A39A0C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A428EC;
L_08A428EC:;
    v1 = LD32(s0+48);
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08A42908; }
    goto L_08A428FC;
L_08A428FC:;
    v0 = LD32(s2+4);
    ST8(v0+51, s5);
    goto L_08A42568;
L_08A42908:;
    a1 = LD32(s2+40);
    { u64 r_ = func_08A39BA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42910;
L_08A42910:;
    v0 = D_08C2DD82 - (-8830);
    v1 = D_08B1C33C - (-15556);
    a0 = LD_U8(v0-8830);
    f0 = BITSF(LD32(v1-15556));
    ST8(s2+17, a0);
    goto L_08A42564;
L_08A42928:;
    cnd_ = s0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A426F8; }
    goto L_08A42930;
L_08A42930:;
    v0 = LD_U8(s2+28);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a2+60); goto L_08A42948; }
    goto L_08A4293C;
L_08A4293C:;
    ST8(a2+46, s1);
    ST8(s2+28, s1);
    goto L_08A42568;
L_08A42948:;
    a0 = a2 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A42950;
L_08A42950:;
    v1 = LD32(s2+4);
    a0 = LD32(v0+4);
    v0 = LD32(v1+12);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A429F8; }
    goto L_08A42964;
L_08A42964:;
    s1 = 0 + 0;
    goto L_08A42968;
L_08A42968:;
    s0 = s2 + 44;
    goto L_08A4296C;
L_08A4296C:;
    a0 = LD32(s2+4);
    a1 = s1 + 0;
    v0 = func_08A384BC(a0, a1);
    goto L_08A42978;
L_08A42978:;
    v1 = LD32(s2+4);
    a0 = LD32(v0+4);
    v0 = LD32(v1+12);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A429B0; }
    goto L_08A4298C;
L_08A4298C:;
    s1 = s1 + 1;
    goto L_08A42990;
L_08A42990:;
    v0 = s1 < 0x10u;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A4296C; }
    goto L_08A4299C;
L_08A4299C:;
    v0 = 1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A429A8;
L_08A429A8:;
    ST8(s2+16, v0);
    goto L_08A4256C;
L_08A429B0:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A429B8;
L_08A429B8:;
    v1 = s1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A42990; }
    goto L_08A429CC;
L_08A429CC:;
    v0 = LD_U8(s0);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A42990; }
    goto L_08A429D8;
L_08A429D8:;
    v0 = D_08C2DD83 - (-8829);
    a0 = LD_U8(v0-8829);
    v0 = LD32(s2+4);
    v1 = D_08B1C340 - (-15552);
    f0 = BITSF(LD32(v1-15552));
    ST8(s2+17, a0);
    ST32(v0+28, s1);
    goto L_08A42564;
L_08A429F8:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42A00;
L_08A42A00:;
    a0 = LD32(s2+4);
    a1 = LD32(a0+60);
    v1 = a1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A42968; }
    goto L_08A42A1C;
L_08A42A1C:;
    v0 = a1 + s2;
    v1 = LD_U8(v0+44);
    cnd_ = v1 != 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A42968; }
    goto L_08A42A2C;
L_08A42A2C:;
    ST32(s2+60, 0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42A34;
L_08A42A34:;
    v1 = LD32(v0+48);
    v1 = v1 < 0xau;
    cnd_ = v1 == 0;
    v0 = LD32(s2+4);
    if (cnd_) { goto L_08A42A4C; }
    goto L_08A42A44;
L_08A42A44:;
    ST8(v0+51, s1);
    goto L_08A42568;
L_08A42A4C:;
    ST8(v0+43, s1);
    goto L_08A42568;
L_08A42A54:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42A5C;
L_08A42A5C:;
    a2 = LD32(s2+4);
    a0 = LD32(a2+60);
    a1 = LD32(a2+100);
    v1 = a0 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    v0 = a0 + s2;
    if (cnd_) { goto L_08A42AB0; }
    goto L_08A42A80;
L_08A42A80:;
    v0 = LD32(s2+60);
    cnd_ = v0 == a1;
    ST8(a2+41, s0);
    if (cnd_) { goto L_08A42AA8; }
    goto L_08A42A8C;
L_08A42A8C:;
    a0 = LD32(a2+100);
    goto L_08A42A90;
L_08A42A90:;
    v0 = D_08C2DD84 - (-8828);
    v1 = D_08B1C348 - (-15544);
    a1 = LD_U8(v0-8828);
    f0 = BITSF(LD32(v1-15544));
    ST32(s2+60, a0);
    goto L_08A42640;
L_08A42AA8:;
    ST8(a2+51, s0);
    goto L_08A42A8C;
L_08A42AB0:;
    ST8(a2+47, s0);
    ST8(v0+44, s0);
    goto L_08A42568;
L_08A42ABC:;
    v0 = LD32(a2+16);
    v1 = LD_U8(a2+128);
    a1 = LD32(a2+108);
    s3 = 1;
    ST32(s2+12, v0);
    cnd_ = a1 == s3;
    s0 = 0 < v1;
    if (cnd_) { goto L_08A42D14; }
    goto L_08A42AD8;
L_08A42AD8:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A42C38; }
    goto L_08A42AE4;
L_08A42AE4:;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A42BC4; }
    goto L_08A42AEC;
L_08A42AEC:;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42AF4;
L_08A42AF4:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42AFC;
L_08A42AFC:;
    v1 = s0 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+144);
    v0 = (s32)v0 < 16;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A42B1C; }
    goto L_08A42B14;
L_08A42B14:;
    ST8(s2+16, s3);
    goto L_08A42568;
L_08A42B1C:;
    { u64 r_ = func_08897BC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42B24;
L_08A42B24:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42B2C;
L_08A42B2C:;
    a0 = D_08B2889C - (-30564);
    a1 = a0 - 30564;
    v0 = LD_U8(a1+13);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a1+449); goto L_08A42B54; }
    goto L_08A42B40;
L_08A42B40:;
    v0 = D_08B28691 - (-31087);
    v1 = LD_U8(v0-31087);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s2+4); goto L_08A42B70; }
    goto L_08A42B50;
L_08A42B50:;
    v0 = LD_U8(a1+449);
    goto L_08A42B54;
L_08A42B54:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 - 30564; goto L_08A42B7C; }
    goto L_08A42B5C;
L_08A42B5C:;
    v0 = D_08B28845 - (-30651);
    v1 = LD_U8(v0-30651);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = a0 - 30564; goto L_08A42B7C; }
    goto L_08A42B6C;
L_08A42B6C:;
    v1 = LD32(s2+4);
    goto L_08A42B70;
L_08A42B70:;
    v0 = 1;
    ST8(v1+50, v0);
    goto L_08A42568;
L_08A42B7C:;
    v0 = LD_U8(a0+44);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a0+451); goto L_08A42B9C; }
    goto L_08A42B88;
L_08A42B88:;
    v0 = D_08B286B0 - (-31056);
    v1 = LD_U8(v0-31056);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s2+4); goto L_08A42BB8; }
    goto L_08A42B98;
L_08A42B98:;
    v0 = LD_U8(a0+451);
    goto L_08A42B9C;
L_08A42B9C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42BA4;
L_08A42BA4:;
    v0 = D_08B28847 - (-30649);
    v1 = LD_U8(v0-30649);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A42570; }
    goto L_08A42BB4;
L_08A42BB4:;
    v1 = LD32(s2+4);
    goto L_08A42BB8;
L_08A42BB8:;
    v0 = 1;
    ST8(v1+49, v0);
    goto L_08A42568;
L_08A42BC4:;
    a0 = LD32(s2+8);
    s1 = s0 << 2;
    v0 = func_08A3D1D8(a0);
    goto L_08A42BD0;
L_08A42BD0:;
    v0 = s1 + v0;
    v1 = LD32(v0+144);
    v1 = (s32)v1 < 16;
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s2+16, s3); goto L_08A42568; }
    goto L_08A42BE4;
L_08A42BE4:;
    v0 = LD32(s2+4);
    a0 = LD32(s2+8);
    s0 = LD32(v0+112);
    v0 = func_08A3D1D8(a0);
    goto L_08A42BF4;
L_08A42BF4:;
    v0 = s1 + v0;
    v1 = LD32(v0+160);
    s0 = s0 < v1;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A42C2C; }
    goto L_08A42C08;
L_08A42C08:;
    a2 = LD32(s2+4);
    v1 = LD32(s2+60);
    v0 = LD32(a2+112);
    cnd_ = v1 == v0;
    ST8(a2+41, s3);
    if (cnd_) { goto L_08A42C24; }
    goto L_08A42C1C;
L_08A42C1C:;
    a0 = LD32(a2+112);
    goto L_08A42A90;
L_08A42C24:;
    ST8(a2+51, s3);
    goto L_08A42C1C;
L_08A42C2C:;
    ST8(v0+38, s3);
    ST8(v0+47, s3);
    goto L_08A42568;
L_08A42C38:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42C40;
L_08A42C40:;
    a0 = LD32(s2+8);
    s4 = s0 << 2;
    v0 = func_08A3D1D8(a0);
    goto L_08A42C4C;
L_08A42C4C:;
    v0 = s4 + v0;
    v1 = LD32(v0+144);
    v1 = (s32)v1 < 16;
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s2+16, s3); goto L_08A42568; }
    goto L_08A42C60;
L_08A42C60:;
    a0 = LD32(s2+8);
    s0 = LD32(s2+4);
    v0 = func_08A3D1D8(a0);
    goto L_08A42C6C;
L_08A42C6C:;
    v0 = s4 + v0;
    v1 = LD32(v0+144);
    a0 = LD32(s2+8);
    s1 = LD32(s2+4);
    ST32(s0+28, v1);
    v0 = func_08A3D1D8(a0);
    goto L_08A42C84;
L_08A42C84:;
    v1 = LD32(s2+4);
    v0 = s4 + v0;
    a1 = LD32(v0+152);
    ST8(v1+38, s3);
    v0 = D_08C2DD83 - (-8829);
    v1 = D_08B1C340 - (-15552);
    f0 = BITSF(LD32(v1-15552));
    a0 = LD_U8(v0-8829);
    ST32(s1+32, a1);
    ST8(s2+17, a0);
    ST32(s2+24, FBITS(f0));
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42CB8;
L_08A42CB8:;
    v0 = s4 + v0;
    a1 = LD32(v0+144);
    a0 = LD32(s2+4);
    v0 = func_08A384BC(a0, a1);
    goto L_08A42CC8;
L_08A42CC8:;
    a2 = LD32(s2+4);
    v1 = LD32(v0+4);
    v0 = LD32(a2+12);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A42CE4; }
    goto L_08A42CDC;
L_08A42CDC:;
    ST8(a2+51, s3);
    goto L_08A42568;
L_08A42CE4:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42CEC;
L_08A42CEC:;
    v0 = s4 + v0;
    a1 = LD32(v0+144);
    goto L_08A42CF4;
L_08A42CF4:;
    a0 = LD32(s2+4);
    v0 = func_08A384BC(a0, a1);
    goto L_08A42CFC;
L_08A42CFC:;
    v1 = LD32(v0+8);
    v1 = v1 < 0x14u;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42D0C;
L_08A42D0C:;
    a2 = LD32(s2+4);
    goto L_08A42CDC;
L_08A42D14:;
    a0 = LD32(s2+8);
    s1 = s0 << 2;
    v0 = func_08A3D1D8(a0);
    goto L_08A42D20;
L_08A42D20:;
    v0 = s1 + v0;
    v1 = LD32(v0+144);
    v1 = (s32)v1 < 16;
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s2+16, s3); goto L_08A42568; }
    goto L_08A42D34;
L_08A42D34:;
    a0 = LD32(s2+8);
    ST32(s2+60, 0);
    s0 = LD32(s2+4);
    v0 = func_08A3D1D8(a0);
    goto L_08A42D44;
L_08A42D44:;
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    a0 = LD32(v0+152);
    ST8(v1+38, s3);
    v0 = D_08C2DD83 - (-8829);
    v1 = D_08B1C340 - (-15552);
    a1 = LD_U8(v0-8829);
    f0 = BITSF(LD32(v1-15552));
    ST32(s0+32, a0);
    goto L_08A42640;
L_08A42D6C:;
    a0 = LD32(a2+16);
    v0 = LD32(s2+12);
    cnd_ = a0 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A42568; }
    goto L_08A42D7C;
L_08A42D7C:;
    ST8(s2+16, v0);
    ST32(s2+12, a0);
    goto L_08A42568;
L_08A42D88:;
    a1 = LD32(a2+16);
    v0 = LD32(s2+12);
    cnd_ = a1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A42568; }
    goto L_08A42D98;
L_08A42D98:;
    ST8(s2+16, v0);
    v1 = D_08C2DD85 - (-8827);
    v0 = D_08B1C344 - (-15548);
    a0 = LD_U8(v1-8827);
    f0 = BITSF(LD32(v0-15548));
    ST32(s2+12, a1);
    ST32(s2+24, FBITS(f0));
    ST8(s2+17, a0);
    goto L_08A42568;
L_08A42DBC:;
    v1 = LD32(a2+16);
    v0 = LD32(s2+12);
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a2+108); goto L_08A42DE4; }
    goto L_08A42DCC;
L_08A42DCC:;
    a0 = LD32(s2+8);
    func_08A3D17C(a0, t1, t2, t3);
    goto L_08A42DD4;
L_08A42DD4:;
    v0 = LD32(s2+4);
    v1 = LD32(v0+16);
    ST32(s2+12, v1);
    goto L_08A42568;
L_08A42DE4:;
    s3 = 1;
    cnd_ = a0 == s3;
    v0 = (s32)a0 < 2;
    if (cnd_) { goto L_08A42F18; }
    goto L_08A42DF0;
L_08A42DF0:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A42E84; }
    goto L_08A42DF8;
L_08A42DF8:;
    cnd_ = a0 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A42E10; }
    goto L_08A42E00;
L_08A42E00:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42E08;
L_08A42E08:;
    ST8(s2+16, s3);
    goto L_08A4256C;
L_08A42E10:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42E18;
L_08A42E18:;
    v1 = LD32(v0+176);
    v1 = (s32)v1 < 16;
    cnd_ = v1 != 0;
    v0 = D_08B1C348 - (-15544);
    if (cnd_) { goto L_08A42E34; }
    goto L_08A42E28;
L_08A42E28:;
    v0 = LD32(s2+4);
    goto L_08A42E2C;
L_08A42E2C:;
    ST8(v0+36, s3);
    goto L_08A42568;
L_08A42E34:;
    f0 = BITSF(LD32(v0-15544));
    v1 = LD32(s2+4);
    a0 = LD32(s2+8);
    ST32(s2+24, FBITS(f0));
    s0 = LD32(v1+112);
    v0 = func_08A3D1D8(a0);
    goto L_08A42E4C;
L_08A42E4C:;
    v1 = LD32(v0+184);
    s0 = s0 < v1;
    cnd_ = s0 == 0;
    if (cnd_) { ST8(s2+16, s3); goto L_08A42568; }
    goto L_08A42E5C;
L_08A42E5C:;
    a2 = LD32(s2+4);
    v1 = LD32(s2+60);
    v0 = LD32(a2+112);
    cnd_ = v1 == v0;
    ST8(a2+41, s3);
    if (cnd_) { goto L_08A42E7C; }
    goto L_08A42E70;
L_08A42E70:;
    v0 = LD32(a2+112);
    ST32(s2+60, v0);
    goto L_08A42568;
L_08A42E7C:;
    ST8(a2+51, s3);
    goto L_08A42E70;
L_08A42E84:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42E8C;
L_08A42E8C:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42E94;
L_08A42E94:;
    v1 = LD32(v0+176);
    v1 = (s32)v1 < 16;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A42E2C; }
    goto L_08A42EA4;
L_08A42EA4:;
    v0 = D_08B1C340 - (-15552);
    f0 = BITSF(LD32(v0-15552));
    a0 = LD32(s2+8);
    s0 = LD32(s2+4);
    ST32(s2+24, FBITS(f0));
    v0 = func_08A3D1D8(a0);
    goto L_08A42EBC;
L_08A42EBC:;
    v1 = LD32(v0+176);
    a0 = LD32(s2+8);
    s1 = LD32(s2+4);
    ST32(s0+28, v1);
    v0 = func_08A3D1D8(a0);
    goto L_08A42ED0;
L_08A42ED0:;
    v1 = LD32(v0+180);
    v0 = LD32(s2+4);
    a0 = LD32(s2+8);
    ST32(s1+32, v1);
    ST8(v0+38, s3);
    v0 = func_08A3D1D8(a0);
    goto L_08A42EE8;
L_08A42EE8:;
    a1 = LD32(v0+176);
    a0 = LD32(s2+4);
    v0 = func_08A384BC(a0, a1);
    goto L_08A42EF4;
L_08A42EF4:;
    a2 = LD32(s2+4);
    v1 = LD32(v0+4);
    v0 = LD32(a2+12);
    cnd_ = v1 != v0;
    if (cnd_) { ST8(a2+51, s3); goto L_08A42568; }
    goto L_08A42F08;
L_08A42F08:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42F10;
L_08A42F10:;
    a1 = LD32(v0+176);
    goto L_08A42CF4;
L_08A42F18:;
    a0 = LD32(s2+8);
    v0 = func_08A3D1D8(a0);
    goto L_08A42F20;
L_08A42F20:;
    v1 = LD32(v0+176);
    v1 = (s32)v1 < 16;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A42E2C; }
    goto L_08A42F30;
L_08A42F30:;
    v0 = D_08B1C340 - (-15552);
    f0 = BITSF(LD32(v0-15552));
    a0 = LD32(s2+8);
    ST32(s2+60, 0);
    ST32(s2+24, FBITS(f0));
    s0 = LD32(s2+4);
    v0 = func_08A3D1D8(a0);
    goto L_08A42F4C;
L_08A42F4C:;
    v1 = LD32(v0+180);
    v0 = LD32(s2+4);
    a0 = LD32(s2+8);
    ST32(s0+32, v1);
    ST8(v0+38, s3);
    v0 = func_08A3D1D8(a0);
    goto L_08A42F64;
L_08A42F64:;
    a1 = LD32(v0+180);
    a0 = LD32(s2+4);
    v0 = func_08A384BC(a0, a1);
    goto L_08A42F70;
L_08A42F70:;
    a0 = LD32(s2+4);
    v1 = LD32(v0+4);
    v0 = LD32(a0+12);
    cnd_ = v1 != v0;
    if (cnd_) { ST8(a0+51, s3); goto L_08A42568; }
    goto L_08A42F84;
L_08A42F84:;
    goto L_08A4256C;
L_08A42F8C:;
    v0 = LD32(a2+16);
    ST32(s2+12, v0);
    goto L_08A42568;
L_08A42F98:;
    ST8(a2+36, v0);
    goto L_08A42568;
L_08A42FA0:;
    { u64 r_ = func_08897BC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A42FA8;
L_08A42FA8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42FB0;
L_08A42FB0:;
    a0 = D_08B2889C - (-30564);
    a0 = a0 - 30564;
    v0 = LD_U8(a0+13);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a0+449); goto L_08A42FD8; }
    goto L_08A42FC4;
L_08A42FC4:;
    v0 = D_08B28691 - (-31087);
    v1 = LD_U8(v0-31087);
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s2+17, 0); goto L_08A42FF4; }
    goto L_08A42FD4;
L_08A42FD4:;
    v0 = LD_U8(a0+449);
    goto L_08A42FD8;
L_08A42FD8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4256C; }
    goto L_08A42FE0;
L_08A42FE0:;
    v0 = D_08B28845 - (-30651);
    v1 = LD_U8(v0-30651);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A42570; }
    goto L_08A42FF0;
L_08A42FF0:;
    ST8(s2+17, 0);
    goto L_08A42FF4;
L_08A42FF4:;
    ST32(s2+24, 0);
    goto L_08A42594;
}

/* 08A42FFC */
rv_t func_08A42FFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A42FFC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2DD50 - (-8880);
    t1 = D_08C2DD60 - (-8864);
    t2 = D_08C2DD70 - (-8848);
    a1 = a1 & a0;
    v1 = t0 - 8880;
    a2 = t1 - 8864;
    cnd_ = a1 == 0;
    a3 = t2 - 8848;
    if (cnd_) { goto L_08A430B4; }
    goto L_08A4302C;
L_08A4302C:;
    v0 = D_08AEFC10 - (-1008);
    f4 = BITSF(LD32(v0-1008));
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
    ST32(t0-8880, FBITS(f2));
    ST32(t1-8864, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-8848, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A430B4;
L_08A430B4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A430BC */
rv_t func_08A430BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A430BC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A42FFC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A430D0;
L_08A430D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A430DC */
void func_08A430DC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A430DC:;
    sp = sp - 32;
    v1 = D_08C2DDB8 - (-8776);
    v0 = LD_U8(v1-8776);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A43114; }
    goto L_08A43100;
L_08A43100:;
    sp = sp + 32;
    return;
L_08A43114:;
    a0 = 0x4f000000u;
    a1 = 0x118f0000u;
    v0 = 1;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x882e;
    a2 = sp + 0;
    ST8(v1-8776, v0);
    s2 = 0 + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4313C;
L_08A4313C:;
    v1 = D_08AE4DC0 - (19904);
    v0 = D_08B1C34C - (-15540);
    s1 = v1 + 19904;
    s0 = v0 - 15540;
    goto L_08A4314C;
L_08A4314C:;
    a1 = LD32(s1);
    a2 = LD32(s0+32);
    a0 = LD32(sp);
    s2 = s2 + 1;
    s1 = s1 + 4;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43164;
L_08A43164:;
    v1 = s2 < 0x10u;
    ST32(s0+32, v0);
    cnd_ = v1 != 0;
    s0 = s0 + 44;
    if (cnd_) { goto L_08A4314C; }
    goto L_08A43174;
L_08A43174:;
    a0 = 0x4f000000u;
    a1 = 0xcbd80000u;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x214a;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43190;
L_08A43190:;
    v1 = D_08AE4E00 - (19968);
    v0 = D_08B1C60C - (-14836);
    s2 = v1 + 19968;
    s0 = v0 - 14836;
    s1 = 0 + 0;
    goto L_08A431A4;
L_08A431A4:;
    a1 = LD32(s2);
    a2 = LD32(s0+4);
    a0 = LD32(sp);
    s1 = s1 + 1;
    s2 = s2 + 4;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A431BC;
L_08A431BC:;
    v1 = s1 < 0x4u;
    ST32(s0+4, v0);
    cnd_ = v1 != 0;
    s0 = s0 + 32;
    if (cnd_) { goto L_08A431A4; }
    goto L_08A431CC;
L_08A431CC:;
    v0 = D_08B1C34C - (-15540);
    a3 = v0 - 15540;
    a2 = 0 + 0;
    t0 = 16;
    goto L_08A431DC;
L_08A431DC:;
    a1 = 0 + 0;
    v1 = a3 + 8;
    v0 = LD32(v1);
    goto L_08A431E8;
L_08A431E8:;
    a1 = a1 + 1;
    a0 = a1 < 0x5u;
    cnd_ = v0 == t0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A43200; }
    goto L_08A431F8;
L_08A431F8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A431E8; }
    goto L_08A43200;
L_08A43200:;
    a2 = a2 + 1;
    v0 = a2 < 0x10u;
    cnd_ = v0 != 0;
    a3 = a3 + 44;
    if (cnd_) { goto L_08A431DC; }
    goto L_08A43210;
L_08A43210:;
    v0 = D_08B1C34C - (-15540);
    v1 = D_08B1C60C - (-14836);
    v0 = v0 - 15540;
    a3 = v1 - 14836;
    a2 = v0 + 4;
    a1 = 0 + 0;
    goto L_08A43228;
L_08A43228:;
    v1 = LD32(a2);
    a2 = a2 + 44;
    v1 = v1 << 5;
    v1 = v1 + a3;
    a0 = LD32(v1+8);
    v0 = a0 << 2;
    v0 = v0 + v1;
    ST32(v0+12, a1);
    a1 = a1 + 1;
    a0 = a0 + 1;
    v0 = a1 < 0x10u;
    cnd_ = v0 != 0;
    ST32(v1+8, a0);
    if (cnd_) { goto L_08A43228; }
    goto L_08A4325C;
L_08A4325C:;
    goto L_08A43100;
}

/* 08A43264 */
void func_08A43264(void)
{
L_08A43264:;
    return;
}

/* 08A4326C */
u64 func_08A4326C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A4326C:;
    sp = sp - 128;
    v0 = D_08AE4E40 - (20032);
    a3 = v0 + 20032;
    a2 = sp + 0;
    t0 = a3 + 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    goto L_08A43294;
L_08A43294:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(a2, v0);
    a3 = a3 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = a3 != t0;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A43294; }
    goto L_08A432C0;
L_08A432C0:;
    v0 = LD32(a3);
    ST32(a2, v0);
    v0 = D_08AE4E64 - (20068);
    a3 = v0 + 20068;
    t0 = sp + 48;
    a2 = a3 + 32;
    goto L_08A432D8;
L_08A432D8:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != a2;
    ST32(t0-4, a1);
    if (cnd_) { goto L_08A432D8; }
    goto L_08A43304;
L_08A43304:;
    t1 = LD32(a3);
    ST32(t0, t1);
    a0 = 0x4f000000u;
    a1 = 0x5a70000u;
    a2 = sp + 96;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x4a46;
    ST32(sp+96, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43328;
L_08A43328:;
    v1 = s0 << 1;
    v1 = v1 + s0;
    v1 = v1 + s1;
    v1 = v1 << 2;
    v1 = v1 + sp;
    a2 = LD32(v1);
    a1 = LD32(v1+48);
    a0 = LD32(sp+96);
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4334C;
L_08A4334C:;
    sp = sp + 128;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A43360 */
u32 func_08A43360(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A43360:;
    sp = sp - 64;
    a1 = D_08AE4E88 - (20104);
    a2 = D_08AE4E98 - (20120);
    v1 = a2 + 20120;
    v0 = a1 + 20104;
    t2 = LD32(a1+20104);
    t3 = LD32(v0+12);
    t4 = LD32(a2+20120);
    a3 = LD32(v0+4);
    t0 = LD32(v0+8);
    t5 = LD32(v1+12);
    t1 = LD32(v1+4);
    v0 = LD32(v1+8);
    s0 = a0 + 0;
    a1 = 0x5a70000u;
    a0 = 0x4f000000u;
    s0 = s0 << 2;
    s0 = s0 + sp;
    a2 = sp + 32;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x4a46;
    ST32(sp, t2);
    ST32(sp+4, a3);
    ST32(sp+8, t0);
    ST32(sp+12, t3);
    ST32(sp+16, t4);
    ST32(sp+20, t1);
    ST32(sp+28, t5);
    ST32(sp+24, v0);
    ST32(sp+32, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A433E4;
L_08A433E4:;
    a2 = LD32(s0);
    a1 = LD32(s0+16);
    a0 = LD32(sp+32);
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A433F4;
L_08A433F4:;
    sp = sp + 64;
    return v0;
}

/* 08A43404 */
rv_t func_08A43404(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A43404:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0xefc00000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x5de7;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43428;
L_08A43428:;
    v0 = D_08AEFC14 - (-1004);
    f12 = BITSF(LD32(v0-1004));
    a0 = LD32(sp);
    a1 = 0xdecd0000u;
    a1 = a1 | 0x8e9c;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43440;
L_08A43440:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4344C */
rv_t func_08A4344C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4344C:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0xefc00000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x5de7;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43470;
L_08A43470:;
    v0 = D_08AEFC18 - (-1000);
    f12 = BITSF(LD32(v0-1000));
    a0 = LD32(sp);
    a1 = 0xd5540000u;
    a1 = a1 | 0x623a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43488;
L_08A43488:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A43494 */
u32 func_08A43494(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A43494:;
    sp = sp - 64;
    v0 = D_08AE4EA8 - (20136);
    v1 = D_08AE4EB4 - (20148);
    a1 = v0 + 20136;
    a2 = v1 + 20148;
    a3 = LD32(v0+20136);
    t0 = LD32(a1+8);
    t1 = LD32(v1+20148);
    t2 = LD32(a2+8);
    v1 = LD32(a2+4);
    v0 = LD32(a1+4);
    s0 = a0 + 0;
    a1 = 0x5a70000u;
    a0 = 0x4f000000u;
    s0 = s0 << 2;
    s0 = s0 + sp;
    a2 = sp + 32;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x4a46;
    ST32(sp, a3);
    ST32(sp+8, t0);
    ST32(sp+16, t1);
    ST32(sp+20, v1);
    ST32(sp+24, t2);
    ST32(sp+4, v0);
    ST32(sp+32, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43508;
L_08A43508:;
    a2 = LD32(s0);
    a1 = LD32(s0+16);
    a0 = LD32(sp+32);
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43518;
L_08A43518:;
    sp = sp + 64;
    return v0;
}

/* 08A43528 */
u32 func_08A43528(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A43528:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0x6a40000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x576f;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4354C;
L_08A4354C:;
    a1 = 0x32590000u;
    a0 = LD32(sp);
    a1 = a1 | 0x4843;
    a2 = 150;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43560;
L_08A43560:;
    sp = sp + 32;
    return v0;
}

/* 08A4356C */
u32 func_08A4356C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4356C:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0xefc00000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x5de7;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43590;
L_08A43590:;
    a1 = 0xb76e0000u;
    a0 = LD32(sp);
    a1 = a1 | 0x179c;
    a2 = 30;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A435A4;
L_08A435A4:;
    sp = sp + 32;
    return v0;
}

/* 08A435B0 */
u32 func_08A435B0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A435B0:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0x310000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x6510;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A435D4;
L_08A435D4:;
    a1 = 0x3d4f0000u;
    a0 = LD32(sp);
    a1 = a1 | 0xb49a;
    a2 = 2000;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A435E8;
L_08A435E8:;
    sp = sp + 32;
    return v0;
}

/* 08A435F4 */
u32 func_08A435F4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A435F4:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0x310000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x6510;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43618;
L_08A43618:;
    a1 = 0xcaec0000u;
    a0 = LD32(sp);
    a1 = a1 | 0x7bcb;
    a2 = 4;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4362C;
L_08A4362C:;
    sp = sp + 32;
    return v0;
}

/* 08A43638 */
u32 func_08A43638(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A43638:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0x6a40000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x576f;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4365C;
L_08A4365C:;
    a1 = 0x498d0000u;
    a0 = LD32(sp);
    a1 = a1 | 0xa23;
    a2 = 150;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43670;
L_08A43670:;
    sp = sp + 32;
    return v0;
}

/* 08A4367C */
u32 func_08A4367C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4367C:;
    sp = sp - 32;
    a0 = 0x4f000000u;
    a1 = 0x6a40000u;
    a2 = sp + 0;
    a0 = a0 | 0x8c3a;
    a1 = a1 | 0x576f;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A436A0;
L_08A436A0:;
    a1 = 0x71650000u;
    a0 = LD32(sp);
    a1 = a1 | 0x2568;
    a2 = 50;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A436B4;
L_08A436B4:;
    sp = sp + 32;
    return v0;
}

/* 08A436C0 */
u32 func_08A436C0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A436C0:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = 0xe2eb0000u;
    s1 = a0 + 0;
    a0 = 0x4f000000u;
    a0 = a0 | 0x8c3a;
    s0 = a2 & 0xff;
    a1 = a1 | 0x111f;
    a2 = sp + 0;
    s4 = 0 + 0;
    s3 = a3 & 0xff;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4370C;
L_08A4370C:;
    cnd_ = s0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A4373C; }
    goto L_08A43714;
L_08A43714:;
    a1 = 0xf0b00000u;
    cnd_ = s3 != 0;
    a1 = a1 | 0x2ece;
    if (cnd_) { goto L_08A43728; }
    goto L_08A43720;
L_08A43720:;
    a1 = 0x10fe0000u;
    a1 = a1 | 0x54bf;
    goto L_08A43728;
L_08A43728:;
    a0 = LD32(sp);
    a2 = 5;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43734;
L_08A43734:;
    s4 = v0 + 0;
    v0 = 1;
    goto L_08A4373C;
L_08A4373C:;
    cnd_ = s1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A43834; }
    goto L_08A43744;
L_08A43744:;
    v0 = (s32)s1 < 2;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A43760; }
    goto L_08A43750;
L_08A43750:;
    v0 = 2;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08A437FC; }
    goto L_08A4375C;
L_08A4375C:;
    v0 = 1;
    goto L_08A43760;
L_08A43760:;
    cnd_ = s2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A437DC; }
    goto L_08A43768;
L_08A43768:;
    v0 = (s32)s2 < 2;
    cnd_ = v0 != 0;
    v0 = s4 + s0;
    if (cnd_) { goto L_08A43784; }
    goto L_08A43774;
L_08A43774:;
    v0 = 2;
    cnd_ = s2 == v0;
    a1 = 0x93da0000u;
    if (cnd_) { goto L_08A437A8; }
    goto L_08A43780;
L_08A43780:;
    v0 = s4 + s0;
    goto L_08A43784;
L_08A43784:;
    v0 = v0 + v1;
    sp = sp + 48;
    return v0;
L_08A437A8:;
    cnd_ = s3 == 0;
    a1 = a1 | 0x677c;
    if (cnd_) { goto L_08A437D0; }
    goto L_08A437B0;
L_08A437B0:;
    a0 = LD32(sp);
    a1 = 0xb2d80000u;
    a1 = a1 | 0x5071;
    a2 = 10;
    goto L_08A437C0;
L_08A437C0:;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A437C8;
L_08A437C8:;
    v1 = v0 + 0;
    goto L_08A43780;
L_08A437D0:;
    a0 = LD32(sp);
    a2 = 0 + 0;
    goto L_08A437C0;
L_08A437DC:;
    a1 = 0x5ef40000u;
    cnd_ = s3 == 0;
    a1 = a1 | 0x2c3b;
    if (cnd_) { goto L_08A437D0; }
    goto L_08A437E8;
L_08A437E8:;
    a0 = LD32(sp);
    a1 = 0xb1230000u;
    a1 = a1 | 0x77d2;
    a2 = 5;
    goto L_08A437C0;
L_08A437FC:;
    cnd_ = s3 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A43824; }
    goto L_08A43804;
L_08A43804:;
    a1 = 0x6f230000u;
    a1 = a1 | 0xdbea;
    goto L_08A4380C;
L_08A4380C:;
    a0 = LD32(sp);
    a2 = 5;
    goto L_08A43814;
L_08A43814:;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4381C;
L_08A4381C:;
    s0 = v0 + 0;
    goto L_08A4375C;
L_08A43824:;
    a1 = 0x61000000u;
    a1 = a1 | 0x4b23;
    a2 = 10;
    goto L_08A43814;
L_08A43834:;
    a1 = 0x2c1a0000u;
    cnd_ = s3 == 0;
    a1 = a1 | 0xfe2;
    if (cnd_) { goto L_08A4380C; }
    goto L_08A43840;
L_08A43840:;
    a0 = LD32(sp);
    a1 = 0x6d6f0000u;
    a1 = a1 | 0x34b;
    a2 = 0 + 0;
    goto L_08A43814;
}

/* 08A43854 */
rv_t func_08A43854(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A43854:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2DD88 - (-8824);
    t1 = D_08C2DD98 - (-8808);
    t2 = D_08C2DDA8 - (-8792);
    a1 = a1 & a0;
    v1 = t0 - 8824;
    a2 = t1 - 8808;
    cnd_ = a1 == 0;
    a3 = t2 - 8792;
    if (cnd_) { goto L_08A4390C; }
    goto L_08A43884;
L_08A43884:;
    v0 = D_08AEFC1C - (-996);
    f4 = BITSF(LD32(v0-996));
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
    ST32(t0-8824, FBITS(f2));
    ST32(t1-8808, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-8792, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A4390C;
L_08A4390C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A43914 */
rv_t func_08A43914(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, ra = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A43914:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A43854(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43928;
L_08A43928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A43934:;
    sp = sp - 320;
    ST32(sp+288, ra);
    ST32(sp+284, s3);
    s3 = a0 + 0;
    ST32(sp+280, s2);
    s2 = a1 + 0;
    ST32(sp+276, s1);
    s1 = D_08B306F0 - (1776);
    ST32(sp+272, s0);
    s0 = D_08B2C12C - (-16084);
    s0 = s0 - 16084;
    ST32(sp+308, FBITS(f21));
    ST32(sp+304, FBITS(f20));
    func_088CF2F8(a1, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4396C;
L_08A4396C:;
    v0 = D_08AEFC20 - (-992);
    f20 = BITSF(LD32(v0-992));
    f12 = BITSF(0);
    v0 = 0xff000000u;
    ST32(s0+64, v0);
    f13 = f12;
    f14 = f20;
    ST32(s0+84, 0);
    f15 = f20;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A43998;
L_08A43998:;
    v0 = D_08B306EC - (1772);
    f1 = BITSF(LD32(s1+1776));
    f0 = BITSF(LD32(v0+1772));
    f12 = BITSF(0);
    f14 = (float)(s32)FBITS(f1);
    f15 = (float)(s32)FBITS(f0);
    f13 = f12;
    a0 = s0 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A439BC;
L_08A439BC:;
    v0 = (u32)-1;
    ST32(s0+80, v0);
    a1 = 1;
    a0 = s0 + 0;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A439D0;
L_08A439D0:;
    v0 = func_08901790();
    goto L_08A439D8;
L_08A439D8:;
    a0 = 0 + 0;
    func_088CD5B0(a0);
    goto L_08A439E0;
L_08A439E0:;
    f12 = f20;
    a0 = 0 + 0;
    func_088CD5EC(a0, f12);
    goto L_08A439EC;
L_08A439EC:;
    f0 = BITSF(LD32(s1+1776));
    v0 = D_08AEFC24 - (-988);
    a0 = 107;
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-988));
    a1 = 0 + 0;
    f20 = f20 * f0;
    v0 = func_0897A064(a0, a1);
    goto L_08A43A0C;
L_08A43A0C:;
    v1 = D_08AEFC28 - (-984);
    a1 = D_08AEFC2C - (-980);
    f12 = BITSF(LD32(v1-984));
    f13 = BITSF(LD32(a1-980));
    a0 = 0xffb00000u;
    a2 = v0 + 0;
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 5;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43A34;
L_08A43A34:;
    v0 = D_08AEFC30 - (-976);
    f0 = BITSF(LD32(v0-976));
    v0 = D_08AEFC34 - (-972);
    a1 = LD32(s2+12);
    ST32(sp+256, FBITS(f0));
    a0 = s2 + 0;
    f0 = BITSF(LD32(v0-972));
    ST32(sp+260, FBITS(f0));
    v0 = func_08A385AC(a0, a1);
    goto L_08A43A58;
L_08A43A58:;
    a1 = D_08AE4F80 - (20352);
    t0 = LD32(s2+12);
    t1 = v0 + 0;
    a3 = 1;
    t0 = t0 + 1;
    a1 = a1 + 20352;
    a0 = sp + 0;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43A7C;
L_08A43A7C:;
    f12 = BITSF(LD32(sp+256));
    f13 = BITSF(LD32(sp+260));
    a0 = 0xffb00000u;
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43A9C;
L_08A43A9C:;
    v1 = LD32(s2+16);
    v0 = D_08AEFC38 - (-968);
    f21 = BITSF(LD32(v0-968));
    f0 = BITSF(LD32(sp+260));
    v0 = D_08B1C68C - (-14708);
    v0 = v0 - 14708;
    v1 = v1 << 2;
    v1 = v1 + v0;
    f0 = f0 + f21;
    t0 = LD32(v1);
    a1 = D_08AE4F98 - (20376);
    a1 = a1 + 20376;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    ST32(sp+260, FBITS(f0));
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43AE0;
L_08A43AE0:;
    a0 = 0xffb00000u;
    f12 = BITSF(LD32(sp+256));
    f13 = BITSF(LD32(sp+260));
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43B00;
L_08A43B00:;
    f0 = BITSF(LD32(sp+260));
    v1 = LD32(s2+16);
    f0 = f0 + f21;
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    ST32(sp+260, FBITS(f0));
    if (cnd_) { goto L_08A43B48; }
    goto L_08A43B18;
L_08A43B18:;
    v0 = v1 << 2;
    v1 = D_08AE4FA8 - (20392);
    v1 = v1 + 20392;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A43B34u: goto L_08A43B34; case 0x08A43B48u: goto L_08A43B48; case 0x08A43B84u: goto L_08A43B84; case 0x08A43BA0u: goto L_08A43BA0; case 0x08A43BBCu: goto L_08A43BBC; case 0x08A43BD8u: goto L_08A43BD8; case 0x08A43BF4u: goto L_08A43BF4; case 0x08A43C10u: goto L_08A43C10; default: rs_break(0, 0x08a43b2c); }
L_08A43B34:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A43C2C(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A43B48;
L_08A43B48:;
    func_08897E28(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A43B50;
L_08A43B50:;
    v0 = func_08901790();
    goto L_08A43B58;
L_08A43B58:;
    { u64 r_ = func_088CF370(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43B60;
L_08A43B60:;
    ra = LD32(sp+288);
    s3 = LD32(sp+284);
    s2 = LD32(sp+280);
    s1 = LD32(sp+276);
    s0 = LD32(sp+272);
    f21 = BITSF(LD32(sp+308));
    f20 = BITSF(LD32(sp+304));
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_08A43B84:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A43D48(a0, a1, a2, a3);
    goto L_08A43B98;
L_08A43B98:;
    goto L_08A43B48;
L_08A43BA0:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A43E18(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A43BB4;
L_08A43BB4:;
    goto L_08A43B48;
L_08A43BBC:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A44078(a1, a2, a3);
    goto L_08A43BD0;
L_08A43BD0:;
    goto L_08A43B48;
L_08A43BD8:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A441F8(a1, a2, a3);
    goto L_08A43BEC;
L_08A43BEC:;
    goto L_08A43B48;
L_08A43BF4:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A443B8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A43C08;
L_08A43C08:;
    goto L_08A43B48;
L_08A43C10:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = sp + 256;
    a3 = sp + 260;
    func_08A445A4(a1, a2, a3);
    goto L_08A43C24;
L_08A43C24:;
    goto L_08A43B48;
}

/* 08A43C2C */
void func_08A43C2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A43C2C:;
    sp = sp - 304;
    v0 = D_08B306F0 - (1776);
    s3 = a0 + 0;
    a0 = sp + 0;
    s2 = a2 + 0;
    a2 = 256;
    s1 = a1 + 0;
    s0 = a3 + 0;
    a3 = 1;
    f0 = BITSF(LD32(v0+1776));
    v0 = D_08AEFC3C - (-964);
    t0 = LD32(a1+72);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-964));
    a1 = D_08AE4FD0 - (20432);
    a1 = a1 + 20432;
    f20 = f20 * f0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43C90;
L_08A43C90:;
    f12 = BITSF(LD32(s2));
    f13 = BITSF(LD32(s0));
    f14 = f20;
    a2 = sp + 0;
    a1 = 3;
    a0 = (u32)-1;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43CAC;
L_08A43CAC:;
    v0 = D_08AEFC40 - (-960);
    f21 = BITSF(LD32(v0-960));
    f0 = BITSF(LD32(s0));
    a0 = s1 + 0;
    f0 = f0 + f21;
    ST32(s0, FBITS(f0));
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43CC8;
L_08A43CC8:;
    t0 = LD32(v0+48);
    a1 = D_08AE4FEC - (20460);
    a3 = 1;
    a0 = sp + 0;
    a1 = a1 + 20460;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43CE4;
L_08A43CE4:;
    f12 = BITSF(LD32(s2));
    f13 = BITSF(LD32(s0));
    f14 = f20;
    a2 = sp + 0;
    a0 = (u32)-1;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43D00;
L_08A43D00:;
    f0 = BITSF(LD32(s0));
    a1 = LD32(s1+60);
    a0 = s3 + 0;
    f0 = f0 + f21;
    a2 = s1 + 0;
    a3 = s2 + 0;
    t0 = s0 + 0;
    ST32(s0, FBITS(f0));
    func_08A44670(a1, a2, a3, t0);
    goto L_08A43D24;
L_08A43D24:;
    sp = sp + 304;
    return;
}

/* 08A43D48 */
void func_08A43D48(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A43D48:;
    sp = sp - 304;
    v0 = D_08B306F0 - (1776);
    s3 = a0 + 0;
    a0 = a1 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a3 + 0;
    f0 = BITSF(LD32(v0+1776));
    v0 = D_08AEFC44 - (-956);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-956));
    f20 = f20 * f0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A43D94;
L_08A43D94:;
    t0 = LD32(v0+48);
    a1 = D_08AE5004 - (20484);
    a3 = 1;
    a0 = sp + 0;
    a1 = a1 + 20484;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43DB0;
L_08A43DB0:;
    f12 = BITSF(LD32(s2));
    f13 = BITSF(LD32(s0));
    f14 = f20;
    a2 = sp + 0;
    a0 = (u32)-1;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43DCC;
L_08A43DCC:;
    v0 = D_08AEFC48 - (-952);
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(v0-952));
    a1 = LD32(s1+60);
    a0 = s3 + 0;
    f1 = f1 + f0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    t0 = s0 + 0;
    ST32(s0, FBITS(f1));
    func_08A44670(a1, a2, a3, t0);
    goto L_08A43DF8;
L_08A43DF8:;
    sp = sp + 304;
    return;
}

/* 08A43E18 */
void func_08A43E18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08A43E18:;
    sp = sp - 336;
    v0 = D_08B306F0 - (1776);
    fp = a3 + 0;
    s7 = a2 + 0;
    s4 = 0xff200000u;
    s4 = s4 | 0x2020;
    s3 = (u32)-1;
    s1 = a1 + 0;
    s0 = s3 + 0;
    f0 = BITSF(LD32(v0+1776));
    v0 = D_08AEFC4C - (-948);
    s2 = LD32(a1+108);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-948));
    v0 = D_08B1C6B4 - (-14668);
    v0 = v0 - 14668;
    f22 = f1 * f0;
    v1 = s2 << 2;
    v1 = v1 + v0;
    a2 = LD32(v1);
    f13 = BITSF(LD32(a3));
    f12 = BITSF(LD32(s7));
    ST32(sp+256, a0);
    f14 = f22;
    a0 = (u32)-1;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43EB8;
L_08A43EB8:;
    v0 = D_08AEFC50 - (-944);
    f20 = BITSF(LD32(v0-944));
    f13 = BITSF(LD32(fp));
    v0 = D_08AEFC54 - (-940);
    f21 = BITSF(LD32(v0-940));
    f13 = f13 + f20;
    v0 = LD_U8(s1+124);
    if (s2 != 0) s0 = s4;
    a2 = D_08AE5018 - (20504);
    ST32(fp, FBITS(f13));
    f14 = f22;
    a0 = s0 + 0;
    f12 = BITSF(LD32(s7));
    a2 = a2 + 20504;
    a1 = 3;
    f12 = f12 + f21;
    s0 = LD32(s1+60);
    ST32(sp+260, v0);
    s5 = LD32(s1+112);
    s6 = LD32(s1+120);
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43F0C;
L_08A43F0C:;
    f0 = BITSF(LD32(fp));
    a0 = LD32(sp+256);
    a1 = s0 + 0;
    f0 = f0 + f20;
    a2 = s1 + 0;
    a3 = s7 + 0;
    t0 = fp + 0;
    ST32(fp, FBITS(f0));
    s0 = s3 + 0;
    func_08A44670(a1, a2, a3, t0);
    goto L_08A43F34;
L_08A43F34:;
    a1 = D_08AE5028 - (20520);
    t0 = s5 + 0;
    a3 = 1;
    v0 = s2 ^ 0x2;
    a1 = a1 + 20520;
    a0 = sp + 0;
    a2 = 256;
    if (v0 != 0) s0 = s4;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43F58;
L_08A43F58:;
    f12 = BITSF(LD32(s7));
    f13 = BITSF(LD32(fp));
    a0 = s0 + 0;
    f14 = f22;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43F74;
L_08A43F74:;
    f13 = BITSF(LD32(fp));
    v0 = s2 ^ 0x1;
    s0 = s3 + 0;
    f13 = f13 + f20;
    if (v0 != 0) s0 = s4;
    a2 = D_08AE503C - (20540);
    a0 = s0 + 0;
    ST32(fp, FBITS(f13));
    a2 = a2 + 20540;
    f14 = f22;
    f12 = BITSF(LD32(s7));
    a1 = 3;
    s0 = s3 + 0;
    f12 = f12 + f21;
    s2 = s2 ^ 0x3;
    if (s2 != 0) s0 = s4;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A43FB8;
L_08A43FB8:;
    f0 = BITSF(LD32(fp));
    a0 = LD32(sp+256);
    t0 = fp + 0;
    f0 = f0 + f20;
    a1 = s6 + 0;
    a2 = s1 + 0;
    a3 = s7 + 0;
    ST32(fp, FBITS(f0));
    func_08A44670(a1, a2, a3, t0);
    goto L_08A43FDC;
L_08A43FDC:;
    v0 = D_08AE504C - (20556);
    t0 = v0 + 20556;
    v0 = LD32(sp+260);
    cnd_ = v0 != 0;
    a1 = D_08AE5050 - (20560);
    if (cnd_) { goto L_08A43FF8; }
    goto L_08A43FF0;
L_08A43FF0:;
    v0 = D_08AE5060 - (20576);
    t0 = v0 + 20576;
    goto L_08A43FF8;
L_08A43FF8:;
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 20560;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4400C;
L_08A4400C:;
    f12 = BITSF(LD32(s7));
    f13 = BITSF(LD32(fp));
    f14 = f22;
    a0 = s0 + 0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44028;
L_08A44028:;
    v0 = D_08AEFC50 - (-944);
    f0 = BITSF(LD32(fp));
    f1 = BITSF(LD32(v0-944));
    f0 = f0 + f1;
    ST32(fp, FBITS(f0));
    sp = sp + 336;
    return;
}

/* 08A44078 */
void func_08A44078(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A44078:;
    sp = sp - 288;
    v0 = 44;
    v1 = D_08B306F0 - (1776);
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    a1 = LD32(a1+120);
    f0 = BITSF(LD32(v1+1776));
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    f20 = (float)(s32)FBITS(f0);
    a1 = lo;
    a1 = a1 + v0;
    v0 = D_08AEFC58 - (-936);
    f0 = BITSF(LD32(v0-936));
    a0 = LD32(a1);
    a1 = 0 + 0;
    f20 = f20 * f0;
    v0 = func_0897A064(a0, a1);
    goto L_08A440E0;
L_08A440E0:;
    a1 = D_08AE5064 - (20580);
    t0 = v0 + 0;
    a3 = 1;
    a0 = sp + 0;
    a1 = a1 + 20580;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A440FC;
L_08A440FC:;
    f12 = BITSF(LD32(s1));
    f13 = BITSF(LD32(s0));
    a0 = 0xffb00000u;
    f14 = f20;
    a2 = sp + 0;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4411C;
L_08A4411C:;
    v0 = D_08AEFC5C - (-932);
    f21 = BITSF(LD32(v0-932));
    f0 = BITSF(LD32(s0));
    a0 = s2 + 0;
    a1 = 0 + 0;
    f0 = f0 + f21;
    ST32(s0, FBITS(f0));
    v0 = func_08A38670(a0, a1);
    goto L_08A4413C;
L_08A4413C:;
    a1 = D_08AE507C - (20604);
    t0 = v0 + 0;
    a3 = 1;
    a0 = sp + 0;
    a1 = a1 + 20604;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44158;
L_08A44158:;
    f12 = BITSF(LD32(s1));
    f13 = BITSF(LD32(s0));
    a0 = 0xffb00000u;
    f14 = f20;
    a2 = sp + 0;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44178;
L_08A44178:;
    f0 = BITSF(LD32(s0));
    a0 = s2 + 0;
    a1 = 1;
    f0 = f0 + f21;
    ST32(s0, FBITS(f0));
    v0 = func_08A38670(a0, a1);
    goto L_08A44190;
L_08A44190:;
    a1 = D_08AE5090 - (20624);
    t0 = v0 + 0;
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 20624;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A441AC;
L_08A441AC:;
    f12 = BITSF(LD32(s1));
    f13 = BITSF(LD32(s0));
    a0 = 0xffb00000u;
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A441CC;
L_08A441CC:;
    f0 = BITSF(LD32(s0));
    f0 = f0 + f21;
    ST32(s0, FBITS(f0));
    sp = sp + 288;
    return;
}

/* 08A441F8 */
void func_08A441F8(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A441F8:;
    sp = sp - 304;
    v0 = 44;
    v1 = D_08B306F0 - (1776);
    s6 = a2 + 0;
    s5 = a1 + 0;
    s4 = a3 + 0;
    a1 = LD32(a1+120);
    f0 = BITSF(LD32(v1+1776));
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    f1 = (float)(s32)FBITS(f0);
    a1 = lo;
    a1 = a1 + v0;
    v0 = D_08AEFC60 - (-928);
    f0 = BITSF(LD32(v0-928));
    a0 = LD32(a1);
    a1 = 0 + 0;
    f20 = f1 * f0;
    v0 = func_0897A064(a0, a1);
    goto L_08A44270;
L_08A44270:;
    a1 = D_08AE50A4 - (20644);
    a1 = a1 + 20644;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    t0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44290;
L_08A44290:;
    f12 = BITSF(LD32(s6));
    f13 = BITSF(LD32(s4));
    a0 = 0xffb00000u;
    a0 = a0 | 0xb0b0;
    f14 = f20;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A442B0;
L_08A442B0:;
    v0 = D_08AEFC64 - (-924);
    f21 = BITSF(LD32(v0-924));
    f0 = BITSF(LD32(s4));
    a0 = LD32(s5+160);
    v0 = 4;
    f0 = f0 + f21;
    cnd_ = a0 == v0;
    ST32(s4, FBITS(f0));
    if (cnd_) { goto L_08A44394; }
    goto L_08A442D0;
L_08A442D0:;
    v0 = func_08A26F1C(a0);
    goto L_08A442D8;
L_08A442D8:;
    s0 = LD32(s5+156);
    a0 = s5 + 0;
    s3 = v0 + 0;
    a1 = s0 + 0;
    v0 = func_08A385AC(a0, a1);
    goto L_08A442EC;
L_08A442EC:;
    a1 = s0 + 0;
    a0 = s5 + 0;
    s0 = s0 < 0x1u;
    s2 = v0 + 0;
    v0 = func_08A38680(a0, a1);
    goto L_08A44300;
L_08A44300:;
    a0 = s5 + 0;
    a1 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_08A38680(a0, a1);
    goto L_08A44310;
L_08A44310:;
    a1 = D_08AE50B8 - (20664);
    a1 = a1 + 20664;
    t0 = s3 + 0;
    t1 = s2 + 0;
    t2 = s1 + 0;
    t3 = v0 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44338;
L_08A44338:;
    f12 = BITSF(LD32(s6));
    goto L_08A4433C;
L_08A4433C:;
    f13 = BITSF(LD32(s4));
    a0 = 0xffb00000u;
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44358;
L_08A44358:;
    f0 = BITSF(LD32(s4));
    f0 = f0 + f21;
    ST32(s4, FBITS(f0));
    sp = sp + 304;
    return;
L_08A44394:;
    a1 = D_08AE50DC - (20700);
    a1 = a1 + 20700;
    t0 = s0 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A443B0;
L_08A443B0:;
    f12 = BITSF(LD32(s6));
    goto L_08A4433C;
}

/* 08A443B8 */
void func_08A443B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08A443B8:;
    sp = sp - 336;
    v0 = D_08B306F0 - (1776);
    s7 = a1 + 0;
    s5 = a2 + 0;
    s4 = (u32)-1;
    s2 = 0xff200000u;
    s2 = s2 | 0x2020;
    s1 = s4 + 0;
    s0 = a3 + 0;
    f0 = BITSF(LD32(v0+1776));
    v0 = D_08AEFC68 - (-920);
    s3 = LD32(a1+108);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-920));
    v0 = D_08B1C6B4 - (-14668);
    v0 = v0 - 14668;
    f20 = f20 * f0;
    v1 = s3 << 2;
    v1 = v1 + v0;
    a2 = LD32(v1);
    f13 = BITSF(LD32(a3));
    f12 = BITSF(LD32(s5));
    ST32(sp+256, a0);
    f14 = f20;
    a0 = (u32)-1;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44458;
L_08A44458:;
    v0 = D_08AEFC6C - (-916);
    f21 = BITSF(LD32(v0-916));
    f13 = BITSF(LD32(s0));
    v0 = D_08AEFC70 - (-912);
    f22 = BITSF(LD32(v0-912));
    f13 = f13 + f21;
    if (s3 != 0) s1 = s2;
    a2 = D_08AE5018 - (20504);
    f14 = f20;
    ST32(s0, FBITS(f13));
    a0 = s1 + 0;
    a2 = a2 + 20504;
    f12 = BITSF(LD32(s5));
    a1 = 3;
    s1 = LD32(s7+60);
    f12 = f12 + f22;
    s6 = LD32(s7+112);
    fp = LD32(s7+120);
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A444A4;
L_08A444A4:;
    f0 = BITSF(LD32(s0));
    a0 = LD32(sp+256);
    a1 = s1 + 0;
    f0 = f0 + f21;
    a2 = s7 + 0;
    a3 = s5 + 0;
    t0 = s0 + 0;
    ST32(s0, FBITS(f0));
    s1 = s4 + 0;
    func_08A44670(a1, a2, a3, t0);
    goto L_08A444CC;
L_08A444CC:;
    a1 = D_08AE5028 - (20520);
    t0 = s6 + 0;
    a3 = 1;
    a0 = sp + 0;
    v0 = s3 ^ 0x2;
    a1 = a1 + 20520;
    a2 = 256;
    if (v0 != 0) s1 = s2;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A444F0;
L_08A444F0:;
    f12 = BITSF(LD32(s5));
    f13 = BITSF(LD32(s0));
    a0 = s1 + 0;
    f14 = f20;
    a2 = sp + 0;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4450C;
L_08A4450C:;
    f13 = BITSF(LD32(s0));
    s3 = s3 ^ 0x1;
    s1 = s4 + 0;
    f13 = f13 + f21;
    if (s3 != 0) s1 = s2;
    a2 = D_08AE503C - (20540);
    f14 = f20;
    ST32(s0, FBITS(f13));
    a0 = s1 + 0;
    a2 = a2 + 20540;
    f12 = BITSF(LD32(s5));
    a1 = 3;
    f12 = f12 + f22;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44544;
L_08A44544:;
    f0 = BITSF(LD32(s0));
    a0 = LD32(sp+256);
    a1 = fp + 0;
    f0 = f0 + f21;
    a2 = s7 + 0;
    a3 = s5 + 0;
    t0 = s0 + 0;
    ST32(s0, FBITS(f0));
    func_08A44670(a1, a2, a3, t0);
    goto L_08A44568;
L_08A44568:;
    sp = sp + 336;
    return;
}

/* 08A445A4 */
void func_08A445A4(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A445A4:;
    sp = sp - 304;
    v0 = D_08B306F0 - (1776);
    s3 = a2 + 0;
    s1 = a3 + 0;
    s0 = a1 + 0;
    f0 = BITSF(LD32(v0+1776));
    v0 = D_08AEFC74 - (-908);
    a0 = LD32(a1+160);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-908));
    f20 = f20 * f0;
    v0 = func_08A26F1C(a0);
    goto L_08A445EC;
L_08A445EC:;
    a1 = LD32(s0+156);
    a0 = s0 + 0;
    s2 = v0 + 0;
    v0 = func_08A385AC(a0, a1);
    goto L_08A445FC;
L_08A445FC:;
    a1 = D_08AE50F4 - (20724);
    t0 = s2 + 0;
    t1 = v0 + 0;
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 20724;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4461C;
L_08A4461C:;
    f12 = BITSF(LD32(s3));
    f13 = BITSF(LD32(s1));
    a0 = 0xffb00000u;
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4463C;
L_08A4463C:;
    v0 = D_08AEFC78 - (-904);
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(v0-904));
    f0 = f0 + f1;
    ST32(s1, FBITS(f0));
    sp = sp + 304;
    return;
}

/* 08A44670 */
void func_08A44670(u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A44670:;
    sp = sp - 304;
    a0 = 44;
    { s64 p_ = (s64)(s32)a1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B306F0 - (1776);
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a0 = lo;
    s4 = a3 + 0;
    s3 = a0 + v0;
    v0 = D_08AEFC7C - (-900);
    s2 = t0 + 0;
    s5 = D_08AEFC80 - (-896);
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a2 + 0;
    f0 = BITSF(LD32(v1+1776));
    a0 = LD32(s3);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-900));
    f20 = f1 * f0;
    v0 = func_0897A064(a0, a1);
    goto L_08A446E4;
L_08A446E4:;
    a1 = D_08AE5110 - (20752);
    t0 = v0 + 0;
    a3 = 1;
    a1 = a1 + 20752;
    a0 = sp + 0;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44700;
L_08A44700:;
    f12 = BITSF(LD32(s4));
    f13 = BITSF(LD32(s2));
    a0 = 0xffb00000u;
    f14 = f20;
    a2 = sp + 0;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44720;
L_08A44720:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s5-896));
    a0 = s0 + 0;
    a1 = s1 + 0;
    f0 = f0 + f1;
    ST32(s2, FBITS(f0));
    v0 = func_08A384A4(a0, a1);
    goto L_08A4473C;
L_08A4473C:;
    v1 = LD32(s3+4);
    s0 = v0 + 0;
    v0 = D_08B1C60C - (-14836);
    v0 = v0 - 14836;
    v1 = v1 << 5;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A44760;
L_08A44760:;
    v1 = LD_U8(s0);
    t0 = v0 + 0;
    v0 = D_08AE5120 - (20768);
    cnd_ = v1 != 0;
    t2 = v0 + 20768;
    if (cnd_) { goto L_08A4477C; }
    goto L_08A44774;
L_08A44774:;
    v0 = D_08AE5128 - (20776);
    t2 = v0 + 20776;
    goto L_08A4477C;
L_08A4477C:;
    t1 = LD32(s3+32);
    a1 = D_08AE512C - (20780);
    a1 = a1 + 20780;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44798;
L_08A44798:;
    f12 = BITSF(LD32(s4));
    f13 = BITSF(LD32(s2));
    a0 = 0xffb00000u;
    a0 = a0 | 0xb0b0;
    f14 = f20;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A447B8;
L_08A447B8:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s5-896));
    a0 = LD32(s0+4);
    v0 = D_08AE5140 - (20800);
    f0 = f0 + f1;
    t0 = v0 + 20800;
    cnd_ = a0 == 0;
    ST32(s2, FBITS(f0));
    if (cnd_) { goto L_08A447F0; }
    goto L_08A447D8;
L_08A447D8:;
    v1 = D_08AE514C - (20812);
    v0 = 1;
    cnd_ = a0 == v0;
    t0 = v1 + 20812;
    if (cnd_) { goto L_08A447F0; }
    goto L_08A447E8;
L_08A447E8:;
    v0 = D_08AE5158 - (20824);
    t0 = v0 + 20824;
    goto L_08A447F0;
L_08A447F0:;
    t1 = LD32(s0+8);
    a1 = D_08AE5160 - (20832);
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 20832;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4480C;
L_08A4480C:;
    f12 = BITSF(LD32(s4));
    f13 = BITSF(LD32(s2));
    a0 = 0xffb00000u;
    f14 = f20;
    a0 = a0 | 0xb0b0;
    a1 = 3;
    a2 = sp + 0;
    { rv_t r_ = func_088CBD68(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4482C;
L_08A4482C:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s5-896));
    f0 = f0 + f1;
    ST32(s2, FBITS(f0));
    sp = sp + 304;
    return;
}

/* 08A44864 */
rv_t func_08A44864(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A44864:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2DDBC - (-8772);
    t1 = D_08C2DDCC - (-8756);
    t2 = D_08C2DDDC - (-8740);
    a1 = a1 & a0;
    v1 = t0 - 8772;
    a2 = t1 - 8756;
    cnd_ = a1 == 0;
    a3 = t2 - 8740;
    if (cnd_) { goto L_08A4491C; }
    goto L_08A44894;
L_08A44894:;
    v0 = D_08AEFC84 - (-892);
    f4 = BITSF(LD32(v0-892));
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
    ST32(t0-8772, FBITS(f2));
    ST32(t1-8756, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-8740, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A4491C;
L_08A4491C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A44924 */
rv_t func_08A44924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44924:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A44864(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44938;
L_08A44938:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A44944 */
void func_08A44944(u32 a0, u32 a1)
{
    u32 v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44944:;
    v1 = a0 + 4;
    ST8(v1+804, 0);
    sp = sp - 16;
    ST32(a0, a1);
    ST8(a0+1184, 0);
    ST32(v1+800, 0);
    func_08A4B3E4(a0);
    goto L_08A44968;
L_08A44968:;
    sp = sp + 16;
    return;
}

/* 08A44974 */
void func_08A44974(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44974:;
    sp = sp - 16;
    func_08A4B4B0(a0);
    goto L_08A44984;
L_08A44984:;
    sp = sp + 16;
    return;
}

/* 08A44990 */
void func_08A44990(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44990:;
    sp = sp - 16;
    s1 = D_08AEFC88 - (-888);
    s0 = a0 + 0;
    func_08A44ADC(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A449AC;
L_08A449AC:;
    func_08A4CBCC(0, 0, 0, 0, 0);
    goto L_08A449B4;
L_08A449B4:;
    func_08A4CDC8();
    goto L_08A449BC;
L_08A449BC:;
    f0 = BITSF(LD32(s1-888));
    v0 = D_08B1C848 - (-14264);
    a0 = s0 + 0;
    ST32(v0-14264, FBITS(f0));
    func_08A4B4B8(a0);
    goto L_08A449D0;
L_08A449D0:;
    func_08A4BD88();
    goto L_08A449D8;
L_08A449D8:;
    s0 = LD32(s0);
    v0 = 7;
    v1 = LD32(s0+16);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s0+129); goto L_08A44A94; }
    goto L_08A449EC;
L_08A449EC:;
    v0 = 6;
    goto L_08A449F0;
L_08A449F0:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A44A68; }
    goto L_08A449F8;
L_08A449F8:;
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A44A68; }
    goto L_08A44A04;
L_08A44A04:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s0+108); goto L_08A44A5C; }
    goto L_08A44A10;
L_08A44A10:;
    v0 = D_08AEFC8C - (-884);
    goto L_08A44A14;
L_08A44A14:;
    f12 = BITSF(LD32(v0-884));
    func_0881CB7C(f12);
    goto L_08A44A1C;
L_08A44A1C:;
    v0 = D_08AEFC90 - (-880);
    f13 = BITSF(LD32(s1-888));
    f12 = BITSF(LD32(v0-880));
    { rv_t r_ = func_0881D084(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44A2C;
L_08A44A2C:;
    a0 = 1;
    v0 = D_08B1C84D - (-14259);
    ST8(v0-14259, a0);
    v1 = D_08C2DFB0 - (-8272);
    v0 = D_08B1C84C - (-14260);
    ST8(v1-8272, 0);
    ST8(v0-14260, a0);
    sp = sp + 16;
    return;
L_08A44A5C:;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = D_08AEFC8C - (-884); goto L_08A44A14; }
    goto L_08A44A68;
L_08A44A68:;
    a0 = LD32(s0+120);
    v0 = func_08A4B3B4(a0);
    goto L_08A44A70;
L_08A44A70:;
    a2 = D_08B45A9C - (23196);
    a1 = v0 + 0;
    a2 = a2 + 23196;
    a0 = 6;
    func_08A4BE04(a0, a1, a2);
    goto L_08A44A84;
L_08A44A84:;
    func_08A4C1F0();
    goto L_08A44A8C;
L_08A44A8C:;
    v0 = D_08AEFC8C - (-884);
    goto L_08A44A14;
L_08A44A94:;
    cnd_ = v0 != 0;
    v0 = 6;
    if (cnd_) { goto L_08A449F0; }
    goto L_08A44A9C;
L_08A44A9C:;
    v0 = LD_U8(s0+130);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A44A68; }
    goto L_08A44AA8;
L_08A44AA8:;
    v0 = 6;
    goto L_08A449F0;
}

/* 08A44AB0 */
void func_08A44AB0(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44AB0:;
    sp = sp - 16;
    func_08A4B4D4(a0);
    goto L_08A44AC0;
L_08A44AC0:;
    func_08A4CB6C(0, 0, 0, 0, 0, 0, 0);
    goto L_08A44AC8;
L_08A44AC8:;
    func_08A4CE38(0);
    goto L_08A44AD0;
L_08A44AD0:;
    sp = sp + 16;
    return;
}

/* 08A44ADC */
void func_08A44ADC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A44ADC:;
    sp = sp - 32;
    v0 = D_08C2DE40 - (-8640);
    v1 = D_08AE5184 - (20868);
    s5 = D_08B28E68 - (-29080);
    s4 = s5 - 29080;
    s3 = 999;
    s2 = v1 + 20868;
    s1 = 0 + 0;
    s0 = v0 - 8640;
    goto L_08A44B1C;
L_08A44B1C:;
    a2 = LD32(s2);
    cnd_ = a2 == s3;
    v1 = LD32(s5-29080);
    if (cnd_) { goto L_08A44BA4; }
    goto L_08A44B28;
L_08A44B28:;
    v0 = LD32(s4+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A44B74; }
    goto L_08A44B48;
L_08A44B48:;
    a0 = LD32(a1);
    goto L_08A44B4C;
L_08A44B4C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A44BDC; }
    goto L_08A44B64;
L_08A44B64:;
    a1 = LD32(a1+4);
    goto L_08A44B68;
L_08A44B68:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A44B4C; }
    goto L_08A44B70;
L_08A44B70:;
    a0 = 0 + 0;
    goto L_08A44B74;
L_08A44B74:;
    cnd_ = a0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A44BA8; }
    goto L_08A44B7C;
L_08A44B7C:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44B8C;
L_08A44B8C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_08A44BA4;
L_08A44BA4:;
    s1 = s1 + 1;
    goto L_08A44BA8;
L_08A44BA8:;
    v0 = s1 < 0x10u;
    s2 = s2 + 4;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08A44B1C; }
    goto L_08A44BB8;
L_08A44BB8:;
    sp = sp + 32;
    return;
L_08A44BDC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A44B68; }
    goto L_08A44BE8;
L_08A44BE8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A44B68; }
    goto L_08A44BF4;
L_08A44BF4:;
    goto L_08A44B74;
}

/* 08A44BFC */
void func_08A44BFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44BFC:;
    sp = sp - 16;
    v0 = LD_U8(a0+1184);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A44C54; }
    goto L_08A44C18;
L_08A44C18:;
    v0 = LD32(a0);
    v1 = LD_U8(v0+104);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A44C98; }
    goto L_08A44C28;
L_08A44C28:;
    s1 = D_08B1C84C - (-14260);
    func_08A44E40(a0);
    goto L_08A44C30;
L_08A44C30:;
    v0 = LD_U8(s1-14260);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A44C80; }
    goto L_08A44C3C;
L_08A44C3C:;
    s1 = D_08B1C84D - (-14259);
    v0 = LD_U8(s1-14259);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A44C68; }
    goto L_08A44C4C;
L_08A44C4C:;
    a0 = s0 + 0;
    func_08A49A48(a0);
    goto L_08A44C54;
L_08A44C54:;
    sp = sp + 16;
    return;
L_08A44C68:;
    a0 = s0 + 0;
    func_08A457D4(a0);
    goto L_08A44C70;
L_08A44C70:;
    a0 = s0 + 0;
    func_08A459D8(a0);
    goto L_08A44C78;
L_08A44C78:;
    ST8(s1-14259, 0);
    goto L_08A44C4C;
L_08A44C80:;
    a0 = s0 + 0;
    func_08A451D4(a0);
    goto L_08A44C88;
L_08A44C88:;
    a0 = s0 + 0;
    func_08A45410(a0);
    goto L_08A44C90;
L_08A44C90:;
    ST8(s1-14260, 0);
    goto L_08A44C3C;
L_08A44C98:;
    func_08A4AF70(a0);
    goto L_08A44CA0;
L_08A44CA0:;
    a0 = s0 + 0;
    func_08A4A698(a0);
    goto L_08A44CA8;
L_08A44CA8:;
    a0 = s0 + 0;
    func_08A4B4F0(a0);
    goto L_08A44CB0;
L_08A44CB0:;
    a1 = 0 + 0;
    a0 = s0 + 0;
    func_08A4B684(a0, a1);
    goto L_08A44CBC;
L_08A44CBC:;
    a0 = s0 + 0;
    func_08A45DA0(a0);
    goto L_08A44CC4;
L_08A44CC4:;
    a0 = s0 + 0;
    func_08A45F48(a0);
    goto L_08A44CCC;
L_08A44CCC:;
    a1 = LD32(s0);
    v1 = LD32(a1+16);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A44D0C; }
    goto L_08A44CE0;
L_08A44CE0:;
    v1 = D_08AE520C - (21004);
    v1 = v1 + 21004;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A44CF8u: goto L_08A44CF8; case 0x08A44D0Cu: goto L_08A44D0C; case 0x08A44D1Cu: goto L_08A44D1C; case 0x08A44D54u: goto L_08A44D54; case 0x08A44D64u: goto L_08A44D64; case 0x08A44D74u: goto L_08A44D74; case 0x08A44DE0u: goto L_08A44DE0; default: rs_break(0, 0x08a44cf0); }
L_08A44CF8:;
    a0 = s0 + 0;
    func_08A4656C(a0);
    goto L_08A44D00;
L_08A44D00:;
    v1 = 1;
    v0 = D_08B1C854 - (-14252);
    ST8(v0-14252, v1);
    goto L_08A44D0C;
L_08A44D0C:;
    a0 = s0 + 0;
    func_08A48068(a0);
    goto L_08A44D14;
L_08A44D14:;
    goto L_08A44C4C;
L_08A44D1C:;
    v1 = LD32(a1+88);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A44D44; }
    goto L_08A44D2C;
L_08A44D2C:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A44D0C; }
    goto L_08A44D34;
L_08A44D34:;
    a0 = s0 + 0;
    func_08A48C74(a0);
    goto L_08A44D3C;
L_08A44D3C:;
    goto L_08A44D0C;
L_08A44D44:;
    a0 = s0 + 0;
    func_08A483F4(a0);
    goto L_08A44D4C;
L_08A44D4C:;
    goto L_08A44D0C;
L_08A44D54:;
    a0 = s0 + 0;
    func_08A490AC(a0);
    goto L_08A44D5C;
L_08A44D5C:;
    goto L_08A44D0C;
L_08A44D64:;
    a0 = s0 + 0;
    func_08A49770(a0);
    goto L_08A44D6C;
L_08A44D6C:;
    goto L_08A44D0C;
L_08A44D74:;
    v1 = LD32(a1+108);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A44D0C; }
    goto L_08A44D84;
L_08A44D84:;
    v1 = D_08AE5234 - (21044);
    v1 = v1 + 21044;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A44D0Cu: goto L_08A44D0C; case 0x08A44D9Cu: goto L_08A44D9C; case 0x08A44DB0u: goto L_08A44DB0; case 0x08A44DC4u: goto L_08A44DC4; default: rs_break(0, 0x08a44d94); }
L_08A44D9C:;
    a0 = s0 + 0;
    a1 = 1;
    func_08A4B684(a0, a1);
    goto L_08A44DA8;
L_08A44DA8:;
    goto L_08A44D0C;
L_08A44DB0:;
    a0 = s0 + 0;
    a1 = 1;
    func_08A4B684(a0, a1);
    goto L_08A44DBC;
L_08A44DBC:;
    goto L_08A44D44;
L_08A44DC4:;
    v1 = D_08C2DFB4 - (-8268);
    v0 = LD32(v1-8268);
    v0 = v0 ^ 0x7;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A44D0C; }
    goto L_08A44DD8;
L_08A44DD8:;
    goto L_08A44D54;
L_08A44DE0:;
    a0 = s0 + 0;
    func_08A49938(a0);
    goto L_08A44DE8;
L_08A44DE8:;
    goto L_08A44D0C;
}

/* 08A44DF0 */
u32 func_08A44DF0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A44DF0:;
    sp = sp - 16;
    a0 = a1 + 0;
    s0 = a2 + 0;
    { rv_t r_ = func_0888B320(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44E08;
L_08A44E08:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A44E38; }
    goto L_08A44E14;
L_08A44E14:;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44E1C;
L_08A44E1C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A44E38; }
    goto L_08A44E24;
L_08A44E24:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A44E38:;
    v1 = 0 + 0;
    goto L_08A44E24;
}

/* 08A44E40 */
void func_08A44E40(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[2080] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 2080);
L_08A44E40:;
    sp = sp - 2080;
    v0 = D_08C2D8CE - (-10034);
    v1 = LD_U8(v0-10034);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A451C4; }
    goto L_08A44E68;
L_08A44E68:;
    a0 = LD32(a0);
    a1 = LD32(a0+12);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A44E78;
L_08A44E78:;
    a0 = LD32(v0+44);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A44E80;
L_08A44E80:;
    a0 = 0xecea0000u;
    a0 = a0 | 0x2eb3;
    s0 = v0 < 0x1u;
    { u64 r_ = func_0888AB24(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A44E90;
L_08A44E90:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A44F30; }
    goto L_08A44E98;
L_08A44E98:;
    v1 = LD32(v0+156);
    v0 = 0xe5020000u;
    v0 = v0 | 0x5703;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A451B8; }
    goto L_08A44EAC;
L_08A44EAC:;
    cnd_ = v0 != 0;
    v0 = 0xffeb0000u;
    if (cnd_) { goto L_08A45058; }
    goto L_08A44EB4;
L_08A44EB4:;
    v0 = 0xe5c0000u;
    v0 = v0 | 0xe9ec;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A45040; }
    goto L_08A44EC4;
L_08A44EC4:;
    cnd_ = v0 != 0;
    v0 = 0x608b0000u;
    if (cnd_) { goto L_08A44F98; }
    goto L_08A44ECC;
L_08A44ECC:;
    v0 = 0xe5c0000u;
    v0 = v0 | 0xe9ea;
    cnd_ = v1 == v0;
    v0 = 0xe5c0000u;
    if (cnd_) { goto L_08A44F80; }
    goto L_08A44EDC;
L_08A44EDC:;
    v0 = v0 | 0xe9eb;
    cnd_ = v1 == v0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A44F68; }
    goto L_08A44EE8;
L_08A44EE8:;
    a0 = 0 + 0;
    goto L_08A44EEC;
L_08A44EEC:;
    a1 = 0 + 0;
    goto L_08A44EF0;
L_08A44EF0:;
    v0 = func_0897A064(a0, a1);
    goto L_08A44EF8;
L_08A44EF8:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 1024;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44F0C;
L_08A44F0C:;
    a1 = 0xbe4f0000u;
    goto L_08A44F10;
L_08A44F10:;
    a2 = 0x31680000u;
    a0 = s1 + 0;
    a1 = a1 | 0x9329;
    a2 = a2 | 0x99b2;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A44F24;
L_08A44F24:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A44F48; }
    goto L_08A44F2C;
L_08A44F2C:;
    goto L_08A44F30;
L_08A44F30:;
    sp = sp + 2080;
    return;
L_08A44F48:;
    a0 = v0 + 0;
    a1 = (u32)-1;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44F54;
L_08A44F54:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A44F60;
L_08A44F60:;
    goto L_08A44F30;
L_08A44F68:;
    cnd_ = s0 != 0;
    a0 = 39;
    if (cnd_) { goto L_08A44F78; }
    goto L_08A44F70;
L_08A44F70:;
    a1 = 0x4f000000u;
    a0 = 42;
    goto L_08A44F78;
L_08A44F78:;
    a1 = a1 | 0x8c3a;
    goto L_08A44EF0;
L_08A44F80:;
    a1 = 0x4f000000u;
    cnd_ = s0 != 0;
    a0 = 38;
    if (cnd_) { goto L_08A44F78; }
    goto L_08A44F8C;
L_08A44F8C:;
    a1 = 0x4f000000u;
    a0 = 41;
    goto L_08A44F78;
L_08A44F98:;
    v0 = v0 | 0x64f3;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A45024; }
    goto L_08A44FA4;
L_08A44FA4:;
    cnd_ = v0 != 0;
    v0 = 0x608b0000u;
    if (cnd_) { goto L_08A44FFC; }
    goto L_08A44FAC;
L_08A44FAC:;
    v0 = v0 | 0x64f2;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A44EEC; }
    goto L_08A44FB8;
L_08A44FB8:;
    a1 = 0x4f000000u;
    a0 = 32;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A44FC8;
L_08A44FC8:;
    s0 = v0 + 0;
    a0 = 0 + 0;
    goto L_08A44FD0;
L_08A44FD0:;
    v0 = func_08A43494(a0);
    goto L_08A44FD8;
L_08A44FD8:;
    a0 = sp + 0;
    goto L_08A44FDC;
L_08A44FDC:;
    a1 = s0 + 0;
    t0 = v0 + 0;
    a2 = 1024;
    a3 = 1;
    goto L_08A44FEC;
L_08A44FEC:;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A44FF4;
L_08A44FF4:;
    a1 = 0xbe4f0000u;
    goto L_08A44F10;
L_08A44FFC:;
    v0 = v0 | 0x64f4;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_08A44EEC; }
    goto L_08A45008;
L_08A45008:;
    a1 = 0x4f000000u;
    a0 = 34;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A45018;
L_08A45018:;
    s0 = v0 + 0;
    a0 = 2;
    goto L_08A44FD0;
L_08A45024:;
    a1 = 0x4f000000u;
    a0 = 33;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A45034;
L_08A45034:;
    s0 = v0 + 0;
    a0 = 1;
    goto L_08A44FD0;
L_08A45040:;
    a1 = 0x4f000000u;
    cnd_ = s0 != 0;
    a0 = 40;
    if (cnd_) { goto L_08A44F78; }
    goto L_08A4504C;
L_08A4504C:;
    a1 = 0x4f000000u;
    a0 = 43;
    goto L_08A44F78;
L_08A45058:;
    v0 = v0 | 0x7ee2;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A45184; }
    goto L_08A45064;
L_08A45064:;
    cnd_ = v0 != 0;
    v0 = 0xffeb0000u;
    if (cnd_) { goto L_08A450BC; }
    goto L_08A4506C;
L_08A4506C:;
    v0 = 0xe5020000u;
    v0 = v0 | 0x5704;
    cnd_ = v1 == v0;
    v0 = 0xe5020000u;
    if (cnd_) { goto L_08A45094; }
    goto L_08A4507C;
L_08A4507C:;
    v0 = v0 | 0x5705;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_08A44EEC; }
    goto L_08A45088;
L_08A45088:;
    a1 = 0x4f000000u;
    a0 = 37;
    goto L_08A44F78;
L_08A45094:;
    a1 = 0x4f000000u;
    a0 = 36;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A450A4;
L_08A450A4:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 1024;
    a3 = 1;
    t0 = 20;
    goto L_08A44FEC;
L_08A450BC:;
    v0 = v0 | 0x7ee4;
    cnd_ = v1 == v0;
    v0 = v1 < v0;
    if (cnd_) { goto L_08A45120; }
    goto L_08A450C8;
L_08A450C8:;
    cnd_ = v0 != 0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A450F8; }
    goto L_08A450D0;
L_08A450D0:;
    v0 = 0xffeb0000u;
    v0 = v0 | 0x7ee5;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A44EEC; }
    goto L_08A450E0;
L_08A450E0:;
    a1 = 0x4f000000u;
    cnd_ = s0 != 0;
    a0 = 31;
    if (cnd_) { goto L_08A44F78; }
    goto L_08A450EC;
L_08A450EC:;
    a1 = 0x4f000000u;
    a0 = 27;
    goto L_08A44F78;
L_08A450F8:;
    cnd_ = s0 != 0;
    a0 = 29;
    if (cnd_) { goto L_08A45108; }
    goto L_08A45100;
L_08A45100:;
    a1 = 0x4f000000u;
    a0 = 25;
    goto L_08A45108;
L_08A45108:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A45110;
L_08A45110:;
    s0 = v0 + 0;
    v0 = func_08A4356C();
    goto L_08A45118;
L_08A45118:;
    a0 = sp + 0;
    goto L_08A44FDC;
L_08A45120:;
    a1 = 0x4f000000u;
    cnd_ = s0 != 0;
    a0 = 30;
    if (cnd_) { goto L_08A45134; }
    goto L_08A4512C;
L_08A4512C:;
    a1 = 0x4f000000u;
    a0 = 26;
    goto L_08A45134;
L_08A45134:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4513C;
L_08A4513C:;
    s0 = v0 + 0;
    { rv_t r_ = func_08A43404(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45144;
L_08A45144:;
    v0 = D_08AEFC94 - (-876);
    f20 = BITSF(LD32(v0-876));
    f0 = f0 * f20;
    f21 = BITSF(F2I(f0, 1));
    { rv_t r_ = func_08A4344C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45158;
L_08A45158:;
    f0 = f0 * f20;
    a1 = s0 + 0;
    t0 = FBITS(f21);
    a0 = sp + 0;
    f1 = BITSF(F2I(f0, 1));
    a2 = 1024;
    t1 = FBITS(f1);
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4517C;
L_08A4517C:;
    a1 = 0xbe4f0000u;
    goto L_08A44F10;
L_08A45184:;
    a1 = 0x4f000000u;
    cnd_ = s0 == 0;
    a0 = 24;
    if (cnd_) { goto L_08A44F78; }
    goto L_08A45190;
L_08A45190:;
    a1 = 0x4f000000u;
    a0 = 28;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A451A0;
L_08A451A0:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 1024;
    a3 = 1;
    t0 = 10;
    goto L_08A44FEC;
L_08A451B8:;
    a1 = 0x4f000000u;
    a0 = 35;
    goto L_08A44F78;
L_08A451C4:;
    a0 = LD32(a0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A451CC;
L_08A451CC:;
    goto L_08A44E78;
}

/* 08A451D4 */
void func_08A451D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A451D4:;
    sp = sp - 128;
    v0 = D_08AE5254 - (21076);
    v1 = D_08AE5260 - (21088);
    a2 = v1 + 21088;
    a1 = v0 + 21076;
    s3 = a0 + 0;
    t2 = LD32(v1+21088);
    t3 = LD32(a2+8);
    t0 = LD32(a2+4);
    v1 = LD32(a1+4);
    a3 = LD32(v0+21076);
    t1 = LD32(a1+8);
    v0 = D_08AE526C - (21100);
    ST32(sp+4, v1);
    a2 = v0 + 21100;
    ST32(sp+16, t2);
    ST32(sp+20, t0);
    ST32(sp+24, t3);
    ST32(sp, a3);
    a3 = sp + 32;
    ST32(sp+8, t1);
    t1 = a2 + 48;
    goto L_08A45254;
L_08A45254:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(a3, v0);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = a2 != t1;
    ST32(a3-4, a1);
    if (cnd_) { goto L_08A45254; }
    goto L_08A45280;
L_08A45280:;
    v0 = D_08C2D8CE - (-10034);
    v1 = LD_U8(v0-10034);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A45400; }
    goto L_08A45290;
L_08A45290:;
    a0 = LD32(s3);
    a1 = LD32(a0+12);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A452A0;
L_08A452A0:;
    fp = v0 + 0;
    goto L_08A452A4;
L_08A452A4:;
    s5 = 0 + 0;
    s7 = 2;
    s2 = sp + 0;
    s6 = sp + 0;
    goto L_08A452B4;
L_08A452B4:;
    v0 = s5 << 2;
    s4 = v0 + fp;
    s0 = 0 + 0;
    s1 = s6 + 32;
    goto L_08A452C4;
L_08A452C4:;
    v1 = LD32(s4+52);
    v0 = v1 < s0;
    cnd_ = v0 == 0;
    v0 = v1 + 1;
    if (cnd_) { goto L_08A453D4; }
    goto L_08A452D4;
L_08A452D4:;
    cnd_ = v0 == s0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A45384; }
    goto L_08A452DC;
L_08A452DC:;
    a1 = LD32(s2);
    a2 = LD32(s1);
    a1 = a1 + s0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A452EC;
L_08A452EC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A45300; }
    goto L_08A452F4;
L_08A452F4:;
    a1 = 256;
    a2 = 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45300;
L_08A45300:;
    cnd_ = s0 == s7;
    if (cnd_) { goto L_08A4535C; }
    goto L_08A45308;
L_08A45308:;
    s0 = s0 + 1;
    goto L_08A4530C;
L_08A4530C:;
    v0 = s0 < 0x3u;
    goto L_08A45310;
L_08A45310:;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A452C4; }
    goto L_08A45318;
L_08A45318:;
    s5 = s5 + 1;
    v0 = s5 < 0x3u;
    s6 = s6 + 16;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A452B4; }
    goto L_08A4532C;
L_08A4532C:;
    sp = sp + 128;
    return;
L_08A4535C:;
    a0 = LD32(s2+16);
    { rv_t r_ = func_0888B288(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45364;
L_08A45364:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A45308; }
    goto L_08A4536C;
L_08A4536C:;
    a1 = 256;
    a2 = 0 + 0;
    goto L_08A45374;
L_08A45374:;
    s0 = s0 + 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4537C;
L_08A4537C:;
    v0 = s0 < 0x3u;
    goto L_08A45310;
L_08A45384:;
    a1 = LD32(s2);
    a2 = LD32(s1);
    a1 = a1 + s0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45394;
L_08A45394:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A453AC; }
    goto L_08A4539C;
L_08A4539C:;
    a1 = 256;
    a2 = 1;
    goto L_08A453A4;
L_08A453A4:;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A453AC;
L_08A453AC:;
    cnd_ = s0 != s7;
    if (cnd_) { s0 = s0 + 1; goto L_08A4530C; }
    goto L_08A453B4;
L_08A453B4:;
    a0 = LD32(s2+16);
    { rv_t r_ = func_0888B288(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A453BC;
L_08A453BC:;
    a0 = v0 + 0;
    a1 = 256;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A45374; }
    goto L_08A453CC;
L_08A453CC:;
    s0 = s0 + 1;
    goto L_08A4530C;
L_08A453D4:;
    a1 = LD32(s2);
    a2 = LD32(s1);
    a0 = s3 + 0;
    a1 = a1 + s0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A453E8;
L_08A453E8:;
    a0 = v0 + 0;
    a1 = 256;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A453A4; }
    goto L_08A453F8;
L_08A453F8:;
    goto L_08A453AC;
L_08A45400:;
    a0 = LD32(s3);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45408;
L_08A45408:;
    fp = v0 + 0;
    goto L_08A452A4;
}

/* 08A45410 */
void func_08A45410(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08A45410:;
    sp = sp - 272;
    v0 = D_08AE5254 - (21076);
    v1 = v0 + 21076;
    s3 = a0 + 0;
    a1 = LD32(v0+21076);
    a3 = LD32(v1+8);
    a2 = LD32(v1+4);
    v0 = D_08AE529C - (21148);
    ST32(sp, a1);
    t0 = v0 + 21148;
    ST32(sp+4, a2);
    a2 = sp + 16;
    ST32(sp+8, a3);
    a3 = t0 + 48;
    goto L_08A45480;
L_08A45480:;
    v0 = LD32(t0);
    v1 = LD32(t0+4);
    a0 = LD32(t0+8);
    a1 = LD32(t0+12);
    ST32(a2, v0);
    t0 = t0 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = t0 != a3;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A45480; }
    goto L_08A454AC;
L_08A454AC:;
    v0 = D_08AE52CC - (21196);
    a2 = v0 + 21196;
    a3 = sp + 64;
    t0 = a2 + 48;
    goto L_08A454BC;
L_08A454BC:;
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
    if (cnd_) { goto L_08A454BC; }
    goto L_08A454E8;
L_08A454E8:;
    v1 = D_08C2D8CE - (-10034);
    v0 = LD_U8(v1-10034);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A457C4; }
    goto L_08A454F8;
L_08A454F8:;
    a0 = LD32(s3);
    a1 = LD32(a0+12);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A45508;
L_08A45508:;
    f23 = BITSF(0);
    fp = v0 + 0;
    s5 = 0 + 0;
    s4 = sp + 0;
    goto L_08A45518;
L_08A45518:;
    v0 = s5 << 4;
    s2 = v0 + sp;
    s1 = 0 + 0;
    s6 = s5 << 2;
    goto L_08A45528;
L_08A45528:;
    v1 = s6 + fp;
    v0 = LD32(v1+52);
    v0 = v0 < s1;
    cnd_ = v0 != 0;
    a1 = LD32(s4);
    if (cnd_) { goto L_08A45614; }
    goto L_08A4553C;
L_08A4553C:;
    a2 = LD32(s2+16);
    a0 = s3 + 0;
    a1 = a1 + s1;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A4554C;
L_08A4554C:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A455E0; }
    goto L_08A45554;
L_08A45554:;
    a1 = LD32(s4);
    goto L_08A45558;
L_08A45558:;
    a2 = LD32(s2+64);
    a0 = s3 + 0;
    a1 = a1 + s1;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45568;
L_08A45568:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A455D0; }
    goto L_08A45570;
L_08A45570:;
    s1 = s1 + 1;
    goto L_08A45574;
L_08A45574:;
    v0 = s1 < 0x3u;
    goto L_08A45578;
L_08A45578:;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A45528; }
    goto L_08A45580;
L_08A45580:;
    s5 = s5 + 1;
    v0 = s5 < 0x3u;
    cnd_ = v0 != 0;
    s4 = s4 + 4;
    if (cnd_) { goto L_08A45518; }
    goto L_08A45590;
L_08A45590:;
    sp = sp + 272;
    return;
L_08A455D0:;
    s1 = s1 + 1;
    func_088837F8(a0, 0, 0, 0);
    goto L_08A455D8;
L_08A455D8:;
    v0 = s1 < 0x3u;
    goto L_08A45578;
L_08A455E0:;
    a1 = 0xd70000u;
    a0 = v0 + 0;
    a1 = a1 | 0xd7ff;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A455F0;
L_08A455F0:;
    a1 = 0x4f000000u;
    a0 = 79;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A45600;
L_08A45600:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4560C;
L_08A4560C:;
    a1 = LD32(s4);
    goto L_08A45558;
L_08A45614:;
    a2 = LD32(s2+16);
    a0 = s3 + 0;
    a1 = a1 + s1;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45624;
L_08A45624:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A45570; }
    goto L_08A4562C;
L_08A4562C:;
    a1 = 0xffff0000u;
    a0 = v0 + 0;
    a1 = a1 | 0xff;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4563C;
L_08A4563C:;
    v1 = D_08C2D8CE - (-10034);
    v0 = LD_U8(v1-10034);
    cnd_ = v0 == 0;
    v0 = LD32(s3);
    if (cnd_) { goto L_08A457BC; }
    goto L_08A4564C;
L_08A4564C:;
    v1 = LD32(v0+12);
    a3 = v1 < 0x1u;
    goto L_08A45654;
L_08A45654:;
    a0 = LD32(s3);
    a1 = s5 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08A39964(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45664;
L_08A45664:;
    t0 = v0 + 0;
    v0 = D_08AE52FC - (21244);
    a2 = 32;
    a3 = 1;
    a0 = sp + 112;
    a1 = v0 + 21244;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45680;
L_08A45680:;
    a1 = sp + 112;
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4568C;
L_08A4568C:;
    a0 = s0 + 0;
    v0 = func_0888392C(a0);
    goto L_08A45694;
L_08A45694:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4569C;
L_08A4569C:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A456A4;
L_08A456A4:;
    v1 = LD32(s0);
    s7 = sp + 176;
    a1 = s0 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A456BC;
L_08A456BC:;
    a0 = s0 + 0;
    f20 = BITSF(LD32(sp+176));
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A456C8;
L_08A456C8:;
    ST32(sp+192, v0);
    v0 = D_08AEFC98 - (-872);
    a0 = sp + 112;
    f22 = BITSF(LD32(v0-872));
    f0 = BITSF(LD32(sp+192));
    a1 = (u32)-1;
    f12 = f22;
    ST32(sp+196, v1);
    f20 = f20 + f0;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A456F0;
L_08A456F0:;
    a1 = LD32(s4);
    a2 = LD32(s2+64);
    a0 = s3 + 0;
    a1 = a1 + s1;
    f21 = f20 - f0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45708;
L_08A45708:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A45570; }
    goto L_08A45710;
L_08A45710:;
    f20 = BITSF(0);
    a0 = v0 + 0;
    a1 = (u32)-1;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45720;
L_08A45720:;
    fcc = FCMP(f23, f20, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08A45788; }
    goto L_08A45730;
L_08A45730:;
    fcc = FCMP(f20, f23, 12);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A455D0; }
    goto L_08A45740;
L_08A45740:;
    v0 = D_08B1C844 - (-14268);
    a1 = LD32(v0-14268);
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45750;
L_08A45750:;
    v1 = LD32(s0);
    a0 = s7 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45764;
L_08A45764:;
    v1 = LD32(s0);
    f12 = f21 - f23;
    f13 = BITSF(LD32(sp+180));
    v0 = LD32(v1+32);
    a0 = s0 + 0;
    t_ = v0;
    f14 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45780;
L_08A45780:;
    s1 = s1 + 1;
    goto L_08A45574;
L_08A45788:;
    a0 = s0 + 0;
    v0 = func_0888392C(a0);
    goto L_08A45790;
L_08A45790:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45798;
L_08A45798:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A457A0;
L_08A457A0:;
    v1 = D_08B1C844 - (-14268);
    a0 = LD32(v1-14268);
    f12 = f22;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A457B4;
L_08A457B4:;
    f23 = f0;
    goto L_08A45730;
L_08A457BC:;
    a3 = LD32(v0+12);
    goto L_08A45654;
L_08A457C4:;
    a0 = LD32(s3);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A457CC;
L_08A457CC:;
    goto L_08A45508;
}

/* 08A457D4 */
void func_08A457D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A457D4:;
    sp = sp - 96;
    v0 = D_08C2D8CE - (-10034);
    v1 = LD_U8(v0-10034);
    cnd_ = v1 == 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_08A459C8; }
    goto L_08A45810;
L_08A45810:;
    a0 = LD32(a0);
    a1 = LD32(a0+12);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A45820;
L_08A45820:;
    a0 = LD32(v0+44);
    goto L_08A45824;
L_08A45824:;
    s0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4582C;
L_08A4582C:;
    cnd_ = v0 != 0;
    v0 = D_08AE5324 - (21284);
    if (cnd_) { goto L_08A459B8; }
    goto L_08A45834;
L_08A45834:;
    v0 = D_08AE534C - (21324);
    v1 = D_08AE5374 - (21364);
    fp = v0 + 21324;
    s7 = v1 + 21364;
    goto L_08A45844;
L_08A45844:;
    a0 = D_08AE5304 - (21252);
    a1 = D_08AE5314 - (21268);
    v0 = a0 + 21252;
    v1 = a1 + 21268;
    a2 = LD32(a0+21252);
    t0 = LD32(v0+12);
    t1 = LD32(a1+21268);
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    t2 = LD32(v1+12);
    a3 = LD32(v1+4);
    v0 = LD32(v1+8);
    ST32(sp, a2);
    s6 = 0xffeb0000u;
    s2 = s0 + 64;
    ST32(sp+4, a0);
    s3 = 0 + 0;
    s6 = s6 | 0x7ee2;
    ST32(sp+8, a1);
    s4 = sp + 0;
    ST32(sp+12, t0);
    ST32(sp+16, t1);
    ST32(sp+20, a3);
    ST32(sp+24, v0);
    ST32(sp+28, t2);
    goto L_08A458A8;
L_08A458A8:;
    a2 = LD32(s4);
    a1 = s3 + s6;
    a0 = s5 + 0;
    v0 = func_08A44DF0(a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A458B8;
L_08A458B8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A45924; }
    goto L_08A458C0;
L_08A458C0:;
    v0 = LD_U8(s2+4);
    s0 = fp + 0;
    if (v0 == 0) s0 = s7;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(sp+32, 0); goto L_08A458F8; }
    goto L_08A458D4;
L_08A458D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A458DC;
L_08A458DC:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+36, v0);
    ST32(sp+40, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A458F0;
L_08A458F0:;
    cnd_ = v0 != 0;
    ST32(sp+32, v0);
    if (cnd_) { goto L_08A459A4; }
    goto L_08A458F8;
L_08A458F8:;
    ST32(sp+40, 0);
    ST32(sp+36, 0);
    a0 = s1 + 0;
    goto L_08A45904;
L_08A45904:;
    a1 = sp + 32;
    a2 = 0 + 0;
    func_088804E8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A45910;
L_08A45910:;
    a0 = LD32(sp+32);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A45994; }
    goto L_08A4591C;
L_08A4591C:;
    ST32(sp+40, 0);
    ST32(sp+36, 0);
    goto L_08A45924;
L_08A45924:;
    a2 = LD32(s4+16);
    a1 = s3 + s6;
    a0 = s5 + 0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45934;
L_08A45934:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD_U8(s2); goto L_08A45980; }
    goto L_08A4593C;
L_08A4593C:;
    s3 = s3 + 1;
    goto L_08A45940;
L_08A45940:;
    v0 = s3 < 0x4u;
    s4 = s4 + 4;
    cnd_ = v0 != 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A458A8; }
    goto L_08A45950;
L_08A45950:;
    sp = sp + 96;
    return;
L_08A45980:;
    a0 = v0 + 0;
    a1 = 256;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4598C;
L_08A4598C:;
    s3 = s3 + 1;
    goto L_08A45940;
L_08A45994:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4599C;
L_08A4599C:;
    ST32(sp+32, 0);
    goto L_08A4591C;
L_08A459A4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A459B0;
L_08A459B0:;
    a0 = s1 + 0;
    goto L_08A45904;
L_08A459B8:;
    v1 = D_08AE53A4 - (21412);
    fp = v0 + 21284;
    s7 = v1 + 21412;
    goto L_08A45844;
L_08A459C8:;
    a0 = LD32(a0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A459D0;
L_08A459D0:;
    a0 = LD32(v0+44);
    goto L_08A45824;
}

/* 08A459D8 */
void func_08A459D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_08A459D8:;
    sp = sp - 224;
    a2 = D_08AE53D0 - (21456);
    a3 = D_08AE53E0 - (21472);
    t0 = D_08AE53F0 - (21488);
    v1 = a3 + 21472;
    a1 = t0 + 21488;
    v0 = a2 + 21456;
    s2 = a0 + 0;
    t1 = LD32(a2+21456);
    t4 = LD32(v0+12);
    t5 = LD32(a3+21472);
    t6 = LD32(v1+12);
    s0 = LD32(a1+12);
    a2 = LD32(v0+4);
    a3 = LD32(v0+8);
    t2 = LD32(a1+4);
    v0 = LD32(v1+8);
    t7 = LD32(t0+21488);
    t0 = LD32(v1+4);
    v1 = LD32(a1+8);
    a1 = D_08C2D8CE - (-10034);
    t3 = LD_U8(a1-10034);
    ST32(sp, t1);
    ST32(sp+4, a2);
    ST32(sp+8, a3);
    ST32(sp+12, t4);
    ST32(sp+16, t5);
    ST32(sp+20, t0);
    ST32(sp+24, v0);
    ST32(sp+28, t6);
    ST32(sp+32, t7);
    ST32(sp+36, t2);
    ST32(sp+40, v1);
    cnd_ = t3 == 0;
    ST32(sp+44, s0);
    if (cnd_) { goto L_08A45D90; }
    goto L_08A45A94;
L_08A45A94:;
    a0 = LD32(a0);
    a1 = LD32(a0+12);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A45AA4;
L_08A45AA4:;
    a0 = LD32(v0+44);
    goto L_08A45AA8;
L_08A45AA8:;
    s4 = v0 + 0;
    s3 = 0xffeb0000u;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45AB4;
L_08A45AB4:;
    v0 = v0 < 0x1u;
    v1 = D_08AEFCA0 - (-864);
    f21 = BITSF(LD32(v1-864));
    ST32(sp+144, v0);
    s6 = 0 + 0;
    fp = sp + 48;
    s3 = s3 | 0x7ee2;
    goto L_08A45AD0;
L_08A45AD0:;
    v0 = LD_U8(s4+64);
    cnd_ = v0 == 0;
    ST32(sp+148, 0);
    if (cnd_) { goto L_08A45AE8; }
    goto L_08A45ADC;
L_08A45ADC:;
    v0 = LD_U8(s4+68);
    cnd_ = v0 != 0;
    s1 = s6 << 2;
    if (cnd_) { goto L_08A45D10; }
    goto L_08A45AE8;
L_08A45AE8:;
    s1 = s6 << 2;
    v0 = s1 + sp;
    a2 = LD32(v0);
    a0 = s2 + 0;
    a1 = s3 + 0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45B00;
L_08A45B00:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    s5 = s1 + 0;
    if (cnd_) { goto L_08A45BF4; }
    goto L_08A45B0C;
L_08A45B0C:;
    a1 = 0xffff0000u;
    a0 = v0 + 0;
    a1 = a1 | 0xff;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45B1C;
L_08A45B1C:;
    v1 = D_08C2D8CE - (-10034);
    v0 = LD_U8(v1-10034);
    cnd_ = v0 == 0;
    v0 = LD32(s2);
    if (cnd_) { goto L_08A45D08; }
    goto L_08A45B2C;
L_08A45B2C:;
    v1 = LD32(v0+12);
    a2 = v1 < 0x1u;
    goto L_08A45B34;
L_08A45B34:;
    a0 = LD32(s2);
    a1 = s6 + 0;
    s7 = sp + 112;
    { rv_t r_ = func_08A39A0C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45B44;
L_08A45B44:;
    a0 = D_08B1C844 - (-14268);
    t0 = LD32(a0-14268);
    t1 = v0 + 0;
    v0 = D_08AE5400 - (21504);
    a2 = 32;
    a3 = 1;
    a0 = fp + 0;
    a1 = v0 + 21504;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45B68;
L_08A45B68:;
    a1 = fp + 0;
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45B74;
L_08A45B74:;
    a0 = s0 + 0;
    v0 = func_0888392C(a0);
    goto L_08A45B7C;
L_08A45B7C:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45B84;
L_08A45B84:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A45B8C;
L_08A45B8C:;
    v1 = LD32(s0);
    a1 = s0 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45BA0;
L_08A45BA0:;
    a0 = s0 + 0;
    f20 = BITSF(LD32(sp+112));
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45BAC;
L_08A45BAC:;
    a0 = D_08AEFC9C - (-868);
    f12 = BITSF(LD32(a0-868));
    a1 = (u32)-1;
    a0 = fp + 0;
    ST32(sp+128, v0);
    ST32(sp+132, v1);
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A45BC8;
L_08A45BC8:;
    v0 = s5 + sp;
    f1 = BITSF(LD32(sp+128));
    a2 = LD32(v0+32);
    a0 = s2 + 0;
    f1 = f1 - f0;
    a1 = s3 + 0;
    f1 = f1 * f21;
    f20 = f20 + f1;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45BEC;
L_08A45BEC:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A45CB4; }
    goto L_08A45BF4;
L_08A45BF4:;
    v0 = s1 + sp;
    goto L_08A45BF8;
L_08A45BF8:;
    a2 = LD32(v0+16);
    a0 = s2 + 0;
    a1 = s3 + 0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45C08;
L_08A45C08:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A45C68; }
    goto L_08A45C10;
L_08A45C10:;
    a0 = LD32(sp+148);
    a1 = 0xd70000u;
    v0 = (u32)-1;
    a1 = a1 | 0xd7ff;
    if (a0 == 0) a1 = v0;
    a0 = s0 + 0;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45C2C;
L_08A45C2C:;
    a1 = LD32(sp+144);
    v1 = D_08AE51C4 - (20932);
    v1 = v1 + 20932;
    cnd_ = a1 != 0;
    v0 = s1 + v1;
    if (cnd_) { goto L_08A45C4C; }
    goto L_08A45C40;
L_08A45C40:;
    a0 = D_08AE51D4 - (20948);
    a0 = a0 + 20948;
    v0 = s1 + a0;
    goto L_08A45C4C;
L_08A45C4C:;
    a0 = LD32(v0);
    a1 = 0x4f000000u;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A45C5C;
L_08A45C5C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45C68;
L_08A45C68:;
    s6 = s6 + 1;
    v0 = s6 < 0x4u;
    s4 = s4 + 1;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A45AD0; }
    goto L_08A45C7C;
L_08A45C7C:;
    sp = sp + 224;
    return;
L_08A45CB4:;
    a0 = v0 + 0;
    a1 = (u32)-1;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45CC0;
L_08A45CC0:;
    v0 = D_08B1C844 - (-14268);
    a1 = LD32(v0-14268);
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45CD0;
L_08A45CD0:;
    v1 = LD32(s0);
    a0 = s7 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45CE4;
L_08A45CE4:;
    v1 = LD32(s0);
    f14 = BITSF(0);
    f13 = BITSF(LD32(sp+116));
    v0 = LD32(v1+32);
    a0 = s0 + 0;
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45D00;
L_08A45D00:;
    v0 = s1 + sp;
    goto L_08A45BF8;
L_08A45D08:;
    a2 = LD32(v0+12);
    goto L_08A45B34;
L_08A45D10:;
    s5 = s1 + sp;
    a2 = LD32(s5);
    a0 = s2 + 0;
    a1 = s3 + 0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45D24;
L_08A45D24:;
    v1 = 1;
    s0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(sp+148, v1);
    if (cnd_) { goto L_08A45D5C; }
    goto L_08A45D34;
L_08A45D34:;
    a2 = LD32(s5+32);
    goto L_08A45D38;
L_08A45D38:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    v0 = func_08A44DF0(a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A45D44;
L_08A45D44:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s1 + sp; goto L_08A45BF8; }
    goto L_08A45D4C;
L_08A45D4C:;
    a0 = v0 + 0;
    func_088837F8(a0, 0, 0, 0);
    goto L_08A45D54;
L_08A45D54:;
    v0 = s1 + sp;
    goto L_08A45BF8;
L_08A45D5C:;
    a1 = 0xd70000u;
    a0 = v0 + 0;
    a1 = a1 | 0xd7ff;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45D6C;
L_08A45D6C:;
    a1 = 0x4f000000u;
    a0 = 79;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A45D7C;
L_08A45D7C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45D88;
L_08A45D88:;
    a2 = LD32(s5+32);
    goto L_08A45D38;
L_08A45D90:;
    a0 = LD32(a0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45D98;
L_08A45D98:;
    a0 = LD32(v0+44);
    goto L_08A45AA8;
}

/* 08A45DA0 */
void func_08A45DA0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A45DA0:;
    sp = sp - 48;
    s5 = a0 + 0;
    f0 = func_08A4CA54();
    goto L_08A45DCC;
L_08A45DCC:;
    v0 = D_08AEFCA4 - (-860);
    f20 = f0;
    f0 = BITSF(LD32(v0-860));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEFCA8 - (-856);
    if (cnd_) { goto L_08A45F2C; }
    goto L_08A45DE8;
L_08A45DE8:;
    f20 = BITSF(0);
    goto L_08A45DEC;
L_08A45DEC:;
    s3 = D_08B1C848 - (-14264);
    goto L_08A45DF0;
L_08A45DF0:;
    f0 = BITSF(LD32(s3-14264));
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08A45E8C; }
    goto L_08A45E04;
L_08A45E04:;
    ST32(s3-14264, FBITS(f20));
    v0 = D_08AE5184 - (20868);
    s1 = v0 + 20868;
    s0 = 0 + 0;
    s2 = D_08B1C850 - (-14256);
    s4 = D_08B28E68 - (-29080);
    goto L_08A45E1C;
L_08A45E1C:;
    v0 = LD32(s2-14256);
    a0 = s4 - 29080;
    cnd_ = s0 != v0;
    a2 = 1;
    if (cnd_) { goto L_08A45EF0; }
    goto L_08A45E2C;
L_08A45E2C:;
    s0 = s0 + 1;
    goto L_08A45E30;
L_08A45E30:;
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A45E1C; }
    goto L_08A45E3C;
L_08A45E3C:;
    s0 = s5 + 4;
    v0 = LD32(s0+800);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A45EB0; }
    goto L_08A45E4C;
L_08A45E4C:;
    v0 = D_08AE5174 - (20852);
    goto L_08A45E50;
L_08A45E50:;
    s1 = v0 + 20852;
    s0 = 0 + 0;
    a1 = LD32(s1);
    goto L_08A45E5C;
L_08A45E5C:;
    a0 = s4 - 29080;
    a2 = 1;
    s0 = s0 + 1;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45E6C;
L_08A45E6C:;
    s1 = s1 + 4;
    cnd_ = v0 == 0;
    v1 = s0 < 0x4u;
    if (cnd_) { goto L_08A45E80; }
    goto L_08A45E78;
L_08A45E78:;
    f0 = BITSF(LD32(s3-14264));
    ST32(v0+196, FBITS(f0));
    goto L_08A45E80;
L_08A45E80:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A45E5C; }
    goto L_08A45E88;
L_08A45E88:;
    goto L_08A45E8C;
L_08A45E8C:;
    sp = sp + 48;
    return;
L_08A45EB0:;
    a1 = s1 + 0;
    goto L_08A45EB4;
L_08A45EB4:;
    a0 = s0 + 0;
    v0 = func_08A4B79C(a0, a1);
    goto L_08A45EBC;
L_08A45EBC:;
    a0 = LD32(v0+8);
    s1 = s1 + 1;
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45EC8;
L_08A45EC8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+800); goto L_08A45EDC; }
    goto L_08A45ED0;
L_08A45ED0:;
    ST32(v0+24, FBITS(f20));
    ST32(v0+20, FBITS(f20));
    v0 = LD32(s0+800);
    goto L_08A45EDC;
L_08A45EDC:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A45EB4; }
    goto L_08A45EE8;
L_08A45EE8:;
    v0 = D_08AE5174 - (20852);
    goto L_08A45E50;
L_08A45EF0:;
    a1 = LD32(s1);
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A45EF8;
L_08A45EF8:;
    cnd_ = v0 == 0;
    v1 = v0 + 88;
    if (cnd_) { goto L_08A45E2C; }
    goto L_08A45F00;
L_08A45F00:;
    v0 = LD32(v1+12);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A45F20; }
    goto L_08A45F10;
L_08A45F10:;
    f12 = BITSF(LD32(s3-14264));
    { rv_t r_ = func_08809AB8(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A45F18;
L_08A45F18:;
    s0 = s0 + 1;
    goto L_08A45E30;
L_08A45F20:;
    f0 = BITSF(LD32(s3-14264));
    ST32(v1+108, FBITS(f0));
    goto L_08A45E2C;
L_08A45F2C:;
    f0 = BITSF(LD32(v0-856));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_08A45DEC; }
    goto L_08A45F40;
L_08A45F40:;
    s3 = D_08B1C848 - (-14264);
    goto L_08A45DF0;
}

/* 08A45F48 */
void func_08A45F48(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A45F48:;
    sp = sp - 16;
    v0 = 7;
    a1 = LD32(a0);
    v1 = LD32(a1+16);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a1+129); goto L_08A46040; }
    goto L_08A45F64;
L_08A45F64:;
    v0 = 6;
    goto L_08A45F68;
L_08A45F68:;
    cnd_ = v1 == v0;
    v0 = 5;
    if (cnd_) { goto L_08A46030; }
    goto L_08A45F70;
L_08A45F70:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A46030; }
    goto L_08A45F78;
L_08A45F78:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a1+108); goto L_08A46024; }
    goto L_08A45F80;
L_08A45F80:;
    v1 = LD32(a1+16);
    goto L_08A45F84;
L_08A45F84:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a1+108); goto L_08A4600C; }
    goto L_08A45F90;
L_08A45F90:;
    v1 = D_08C2DFB4 - (-8268);
    goto L_08A45F94;
L_08A45F94:;
    v0 = LD32(v1-8268);
    v0 = v0 ^ 0x7;
    cnd_ = v0 == 0;
    v1 = D_08C2DFB0 - (-8272);
    if (cnd_) { goto L_08A45FC4; }
    goto L_08A45FA4;
L_08A45FA4:;
    v0 = LD_U8(a1+52);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a1+53); goto L_08A45FF4; }
    goto L_08A45FB0;
L_08A45FB0:;
    v0 = LD_U8(v1-8272);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(a1+53); goto L_08A45FF4; }
    goto L_08A45FBC;
L_08A45FBC:;
    v0 = 1;
    ST8(v1-8272, v0);
    goto L_08A45FC4;
L_08A45FC4:;
    v0 = LD_U8(v1-8272);
    goto L_08A45FC8;
L_08A45FC8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A45FE4; }
    goto L_08A45FD0;
L_08A45FD0:;
    func_08A46198(a0);
    goto L_08A45FD8;
L_08A45FD8:;
    goto L_08A45FDC;
L_08A45FDC:;
    sp = sp + 16;
    return;
L_08A45FE4:;
    func_08A4605C(a0);
    goto L_08A45FEC;
L_08A45FEC:;
    goto L_08A45FDC;
L_08A45FF4:;
    cnd_ = v0 == 0;
    v0 = LD_U8(v1-8272);
    if (cnd_) { goto L_08A45FC8; }
    goto L_08A45FFC;
L_08A45FFC:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(v1-8272, 0); goto L_08A45FC4; }
    goto L_08A46004;
L_08A46004:;
    goto L_08A45FC8;
L_08A4600C:;
    cnd_ = v0 != v1;
    v1 = D_08C2DFB4 - (-8268);
    if (cnd_) { goto L_08A45F94; }
    goto L_08A46014;
L_08A46014:;
    func_08A4631C(a0);
    goto L_08A4601C;
L_08A4601C:;
    goto L_08A45FDC;
L_08A46024:;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = LD32(a1+16); goto L_08A45F84; }
    goto L_08A46030;
L_08A46030:;
    func_08A462C4(a0);
    goto L_08A46038;
L_08A46038:;
    goto L_08A45FDC;
L_08A46040:;
    cnd_ = v0 != 0;
    v0 = 6;
    if (cnd_) { goto L_08A45F68; }
    goto L_08A46048;
L_08A46048:;
    v0 = LD_U8(a1+130);
    cnd_ = v0 == 0;
    v0 = 6;
    if (cnd_) { goto L_08A46030; }
    goto L_08A46054;
L_08A46054:;
    goto L_08A45F68;
}

/* 08A4605C */
void func_08A4605C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4605C:;
    a1 = D_08B45A9C - (23196);
    sp = sp - 16;
    a1 = a1 + 23196;
    a2 = a1 + 0;
    s1 = a0 + 0;
    a0 = 0 + 0;
    func_08A4BE04(a0, a1, a2);
    goto L_08A46088;
L_08A46088:;
    v1 = D_08C2DFB4 - (-8268);
    v0 = LD32(v1-8268);
    v0 = v0 ^ 0x7;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A46114; }
    goto L_08A4609C;
L_08A4609C:;
    a1 = LD32(s1);
    v0 = 2;
    v1 = LD32(a1+16);
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A460CC; }
    goto L_08A460B0;
L_08A460B0:;
    cnd_ = v1 == v0;
    v0 = 8;
    if (cnd_) { goto L_08A46128; }
    goto L_08A460B8;
L_08A460B8:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a1+108); goto L_08A4612C; }
    goto L_08A460C0;
L_08A460C0:;
    a0 = s1 + 0;
    func_08A47C04(a0);
    goto L_08A460C8;
L_08A460C8:;
    a1 = LD32(s1);
    goto L_08A460CC;
L_08A460CC:;
    v0 = LD_U8(a1+56);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A46108; }
    goto L_08A460D8;
L_08A460D8:;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_08A460E0;
L_08A460E0:;
    a0 = s1 + 0;
    a2 = 1;
    s0 = s0 + 1;
    func_08A4793C(a0, a1, a2);
    goto L_08A460F0;
L_08A460F0:;
    v0 = s0 < 0x4u;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A460E0; }
    goto L_08A460FC;
L_08A460FC:;
    a0 = s1 + 0;
    func_08A46FDC(a0);
    goto L_08A46104;
L_08A46104:;
    a0 = s1 + 0;
    goto L_08A46108;
L_08A46108:;
    a1 = 2;
    func_08A46D40(a0, a1);
    goto L_08A46110;
L_08A46110:;
    goto L_08A46114;
L_08A46114:;
    sp = sp + 16;
    return;
L_08A46128:;
    v1 = LD32(a1+108);
    goto L_08A4612C;
L_08A4612C:;
    v0 = 1;
    cnd_ = v1 != v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A460C0; }
    goto L_08A46138;
L_08A46138:;
    s0 = LD32(a1+60);
    s2 = LD32(a1+120);
    a1 = s0 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A46148;
L_08A46148:;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A46184; }
    goto L_08A46154;
L_08A46154:;
    a0 = LD32(s1);
    goto L_08A46158;
L_08A46158:;
    a1 = s2 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A46160;
L_08A46160:;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A460CC; }
    goto L_08A4616C;
L_08A4616C:;
    a1 = s2 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    func_08A4727C(a0, a1);
    goto L_08A4617C;
L_08A4617C:;
    a1 = LD32(s1);
    goto L_08A460CC;
L_08A46184:;
    a0 = s1 + 0;
    a2 = 0 + 0;
    func_08A4727C(a0, a1);
    goto L_08A46190;
L_08A46190:;
    a0 = LD32(s1);
    goto L_08A46158;
}

/* 08A46198 */
void func_08A46198(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A46198:;
    sp = sp - 16;
    s1 = a0 + 0;
    a3 = 44;
    v1 = D_08B1C34C - (-15540);
    a2 = v1 - 15540;
    v1 = 4;
    a0 = LD32(a0);
    v0 = LD32(a0+60);
    a1 = LD32(a0+16);
    { s64 p_ = (s64)(s32)v0 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + a2;
    cnd_ = a1 == v1;
    s0 = LD32(v0+4);
    if (cnd_) { goto L_08A46294; }
    goto L_08A461DC;
L_08A461DC:;
    v0 = 8;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+108); goto L_08A46298; }
    goto L_08A461E8;
L_08A461E8:;
    a1 = D_08B45A9C - (23196);
    goto L_08A461EC;
L_08A461EC:;
    v0 = 1;
    a1 = a1 + 23196;
    cnd_ = s0 == v0;
    a0 = 1;
    if (cnd_) { goto L_08A46238; }
    goto L_08A461FC;
L_08A461FC:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    a1 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08A4622C; }
    goto L_08A46208;
L_08A46208:;
    v0 = 2;
    a1 = a1 + 23196;
    cnd_ = s0 == v0;
    a0 = 3;
    if (cnd_) { goto L_08A46238; }
    goto L_08A46218;
L_08A46218:;
    a1 = D_08B45A9C - (23196);
    v0 = 3;
    a1 = a1 + 23196;
    cnd_ = s0 == v0;
    a0 = 4;
    if (cnd_) { goto L_08A46238; }
    goto L_08A4622C;
L_08A4622C:;
    a1 = D_08B45A9C - (23196);
    a1 = a1 + 23196;
    a0 = 2;
    goto L_08A46238;
L_08A46238:;
    a2 = a1 + 0;
    func_08A4BE04(a0, a1, a2);
    goto L_08A46240;
L_08A46240:;
    v1 = D_08C2DFB4 - (-8268);
    v0 = LD32(v1-8268);
    v0 = v0 ^ 0x7;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A46268; }
    goto L_08A46254;
L_08A46254:;
    goto L_08A46258;
L_08A46258:;
    sp = sp + 16;
    return;
L_08A46268:;
    a1 = s0 + 0;
    func_08A47200(a0, a1);
    goto L_08A46270;
L_08A46270:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08A476A0(a0, a1);
    goto L_08A4627C;
L_08A4627C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    func_08A4793C(a0, a1, a2);
    goto L_08A4628C;
L_08A4628C:;
    goto L_08A46258;
L_08A46294:;
    v1 = LD32(a0+108);
    goto L_08A46298;
L_08A46298:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_08A462AC; }
    goto L_08A462A4;
L_08A462A4:;
    cnd_ = v1 != v0;
    a1 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08A461EC; }
    goto L_08A462AC;
L_08A462AC:;
    v0 = LD32(a0+120);
    { s64 p_ = (s64)(s32)v0 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + a2;
    s0 = LD32(v0+4);
    goto L_08A461E8;
}

/* 08A462C4 */
void func_08A462C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A462C4:;
    sp = sp - 32;
    v0 = LD32(a0);
    v1 = LD32(v0+120);
    v0 = D_08B1C850 - (-14256);
    a0 = v1 + 0;
    ST32(v0-14256, v1);
    v0 = func_08A4B3B4(a0);
    goto L_08A462E4;
L_08A462E4:;
    a2 = D_08B45A9C - (23196);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a2 = a2 + 23196;
    a0 = 6;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    func_08A4BE04(a0, a1, a2);
    goto L_08A46310;
L_08A46310:;
    sp = sp + 32;
    return;
}

/* 08A4631C */
void func_08A4631C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A4631C:;
    sp = sp - 144;
    s1 = sp + 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0+60);
    v0 = func_08A4B3B4(a0);
    goto L_08A46340;
L_08A46340:;
    v1 = LD32(s0);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    a0 = LD32(v1+120);
    f1 = BITSF(LD32(v0+4));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08A4B3B4(a0);
    goto L_08A46364;
L_08A46364:;
    a0 = 5;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a1 = sp + 0;
    a2 = s1 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    func_08A4BE04(a0, a1, a2);
    goto L_08A4638C;
L_08A4638C:;
    v1 = D_08C2DFB4 - (-8268);
    v0 = LD32(v1-8268);
    v0 = v0 ^ 0x7;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A463B0; }
    goto L_08A463A0;
L_08A463A0:;
    sp = sp + 144;
    return;
L_08A463B0:;
    v1 = D_08AE540C - (21516);
    v0 = v1 + 21516;
    t1 = LD32(v1+21516);
    t2 = LD32(v0+20);
    a2 = LD32(v0+8);
    a3 = LD32(v0+12);
    t0 = LD32(v0+16);
    v1 = LD32(v0+4);
    a1 = 1;
    a0 = sp + 0;
    ST32(sp+32, t1);
    ST32(sp+40, a2);
    ST32(sp+44, a3);
    ST32(sp+48, t0);
    ST32(sp+52, t2);
    ST32(sp+36, v1);
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A463F4;
L_08A463F4:;
    a1 = 1;
    a0 = s1 + 0;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46400;
L_08A46400:;
    f7 = BITSF(LD32(sp));
    f8 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f2 = f2 - f7;
    f4 = f4 - f8;
    f3 = f3 - f6;
    v1 = LD32(s0);
    ST32(sp+96, FBITS(f2));
    v0 = D_08B1C2DC - (-15652);
    a0 = 16;
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f3));
    f5 = BITSF(LD32(v0-15652));
    f1 = BITSF(LD32(v1+148));
    v1 = D_08AEFCAC - (-852);
    f0 = BITSF(LD32(v1-852));
    f1 = f1 / f5;
    v0 = D_08AEFCB0 - (-848);
    ST32(sp+120, 0);
    ST32(sp+124, 0);
    f0 = f0 - f1;
    f1 = BITSF(LD32(v0-848));
    v0 = D_08AEFCB4 - (-844);
    f2 = f2 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f0 = BITSF(LD32(v0-844));
    f7 = f7 + f2;
    f8 = f8 + f4;
    f6 = f6 + f3;
    ST32(sp+80, FBITS(f2));
    f1 = f7 - f1;
    f0 = f8 - f0;
    ST32(sp+72, FBITS(f6));
    ST32(sp+112, FBITS(f1));
    ST32(sp+116, FBITS(f0));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f7));
    ST32(sp+68, FBITS(f8));
    v0 = func_08A4CB34(a0);
    goto L_08A464B0;
L_08A464B0:;
    s1 = v0 + 0;
    a0 = LD32(s0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A464BC;
L_08A464BC:;
    a0 = LD32(s0);
    v1 = LD32(v0+44);
    a0 = LD32(a0+112);
    v1 = v1 ^ 0x2;
    v0 = a0 < 0x29u;
    cnd_ = v0 != 0;
    a1 = 0 < v1;
    if (cnd_) { goto L_08A464E8; }
    goto L_08A464D8;
L_08A464D8:;
    a1 = a1 + 2;
    v1 = a0 < 0x47u;
    v0 = a1 + 2;
    if (v1 == 0) a1 = v0;
    goto L_08A464E8;
L_08A464E8:;
    v0 = a1 << 2;
    v0 = v0 + sp;
    a0 = LD32(v0+32);
    a1 = sp + 112;
    a3 = s1 + 0;
    a2 = (u32)-1;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A46504;
L_08A46504:;
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    s0 = D_08B2C12C - (-16084);
    if (cnd_) { goto L_08A46538; }
    goto L_08A4651C;
L_08A4651C:;
    a0 = s0 - 16084;
    goto L_08A46520;
L_08A46520:;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46528;
L_08A46528:;
    v0 = func_08901790();
    goto L_08A46530;
L_08A46530:;
    goto L_08A463A0;
L_08A46538:;
    a0 = s0 - 16084;
    v0 = D_08AEFCB8 - (-840);
    f0 = BITSF(LD32(v0-840));
    f12 = BITSF(LD32(a0+32));
    v0 = D_08AEFCBC - (-836);
    v1 = D_08AEFCC0 - (-832);
    f12 = f12 + f0;
    f13 = BITSF(LD32(a0+48));
    f14 = BITSF(LD32(v0-836));
    f15 = BITSF(LD32(v1-832));
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A46564;
L_08A46564:;
    a0 = s0 - 16084;
    goto L_08A46520;
}

/* 08A4656C */
void func_08A4656C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A4656C:;
    sp = sp - 144;
    v0 = D_08C2DFA0 - (-8288);
    v1 = v0 - 8288;
    s6 = D_08B2C12C - (-16084);
    s5 = D_08AE52FC - (21244);
    s4 = D_08AEFCDC - (-804);
    s3 = D_08B1C844 - (-14268);
    s7 = s3 + 0;
    s2 = sp + 16;
    s1 = a0 + 0;
    a0 = 11;
    s0 = D_08AEFCD8 - (-808);
    f0 = BITSF(LD32(v0-8288));
    v0 = D_08AEFCC4 - (-828);
    f1 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-828));
    v0 = D_08AEFCC8 - (-824);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-824));
    ST32(sp+12, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A46608;
L_08A46608:;
    a2 = 0xafff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = 5;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A46620;
L_08A46620:;
    a1 = 1;
    a0 = s6 - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4662C;
L_08A4662C:;
    f22 = BITSF(LD32(s0-808));
    v0 = func_08901790();
    goto L_08A46634;
L_08A46634:;
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+8));
    v0 = D_08AEFCD0 - (-816);
    f2 = BITSF(LD32(v0-816));
    f0 = f1 + f0;
    v0 = D_08AEFCD4 - (-812);
    f20 = BITSF(LD32(v0-812));
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    f20 = f1 + f20;
    f24 = f0 - f2;
    f25 = f1 + f2;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46668;
L_08A46668:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A46670;
L_08A46670:;
    f21 = BITSF(LD32(s4-804));
    a0 = LD32(s3-14268);
    a1 = (u32)-1;
    f12 = f21;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A46684;
L_08A46684:;
    a0 = LD32(s1);
    f26 = f0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46690;
L_08A46690:;
    f13 = BITSF(LD32(sp+4));
    f12 = f20;
    f14 = f21;
    f13 = f13 + f22;
    f15 = f21;
    a2 = (u32)-256;
    a3 = 4;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A466B8;
L_08A466B8:;
    v1 = D_08AEFCE0 - (-800);
    f23 = BITSF(LD32(v1-800));
    a1 = 0x4f000000u;
    a0 = 84;
    a1 = a1 | 0x8c3a;
    f22 = f22 + f23;
    v0 = func_0897A064(a0, a1);
    goto L_08A466D4;
L_08A466D4:;
    f13 = BITSF(LD32(sp+4));
    a0 = v0 + 0;
    f12 = f20;
    f13 = f13 + f22;
    a1 = 0 + 0;
    f14 = f21;
    f15 = f21;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A466FC;
L_08A466FC:;
    a0 = LD32(s1);
    v0 = LD32(a0+76);
    cnd_ = v0 != 0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A46A6C; }
    goto L_08A4670C;
L_08A4670C:;
    v0 = LD32(a0+80);
    cnd_ = v0 != 0;
    v0 = D_08AEFCCC - (-820);
    if (cnd_) { goto L_08A469A0; }
    goto L_08A46718;
L_08A46718:;
    v0 = LD32(a0+84);
    cnd_ = v0 != 0;
    v0 = D_08AEFCCC - (-820);
    if (cnd_) { goto L_08A468B8; }
    goto L_08A46724;
L_08A46724:;
    a0 = 9;
    goto L_08A46728;
L_08A46728:;
    v0 = D_08AEFCE4 - (-796);
    f22 = BITSF(LD32(v0-796));
    v0 = func_08A4CB34(a0);
    goto L_08A46734;
L_08A46734:;
    f20 = BITSF(LD32(s0-808));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    a3 = v0 + 0;
    f0 = f0 + f20;
    f1 = f1 + f22;
    a2 = (u32)-256;
    a1 = sp + 48;
    a0 = 6;
    ST32(sp+52, FBITS(f1));
    s0 = s6 - 16084;
    ST32(sp+48, FBITS(f0));
    ST32(sp+56, 0);
    ST32(sp+60, 0);
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A46770;
L_08A46770:;
    v0 = D_08AEFCEC - (-788);
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = s0 + 0;
    f12 = f12 + f20;
    f13 = f13 + f22;
    f20 = BITSF(LD32(v0-788));
    v0 = D_08AEFCE8 - (-792);
    f14 = BITSF(LD32(v0-792));
    f15 = f20;
    f22 = f22 + f20;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A467A0;
L_08A467A0:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A467AC;
L_08A467AC:;
    f20 = BITSF(LD32(s4-804));
    v0 = func_08901790();
    goto L_08A467B4;
L_08A467B4:;
    a1 = 0x4f000000u;
    a0 = 87;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A467C4;
L_08A467C4:;
    f13 = BITSF(LD32(sp+4));
    f12 = f25;
    f13 = f13 + f22;
    f14 = f20;
    f15 = f20;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A467EC;
L_08A467EC:;
    v1 = LD32(s1);
    a1 = s5 + 21244;
    a0 = s2 + 0;
    t0 = LD32(v1+72);
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46808;
L_08A46808:;
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f15 = f20;
    f13 = f13 + f22;
    a2 = (u32)-256;
    a3 = 8;
    a0 = s2 + 0;
    f12 = f24;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46830;
L_08A46830:;
    a0 = s2 + 0;
    f12 = f20;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A46840;
L_08A46840:;
    f0 = f24 - f0;
    f13 = BITSF(LD32(sp+4));
    a0 = LD32(s3-14268);
    f14 = f20;
    f0 = f0 - f26;
    f13 = f13 + f22;
    f15 = f20;
    a1 = 0 + 0;
    f12 = f0;
    a2 = (u32)-1;
    a3 = 2;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46870;
L_08A46870:;
    sp = sp + 144;
    return;
L_08A468B8:;
    f0 = BITSF(LD32(v0-820));
    f22 = f22 + f0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A468C4;
L_08A468C4:;
    v1 = LD32(v0+44);
    v0 = 2;
    a1 = 0x4f000000u;
    cnd_ = v1 == v0;
    a0 = 119;
    if (cnd_) { goto L_08A468E0; }
    goto L_08A468D8;
L_08A468D8:;
    a1 = 0x4f000000u;
    a0 = 115;
    goto L_08A468E0;
L_08A468E0:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A468E8;
L_08A468E8:;
    f13 = BITSF(LD32(sp+4));
    f20 = BITSF(LD32(s4-804));
    f12 = f25;
    f13 = f13 + f22;
    f14 = f20;
    f15 = f20;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46914;
L_08A46914:;
    v1 = LD32(s1);
    a1 = s5 + 21244;
    a0 = s2 + 0;
    t0 = LD32(v1+84);
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46930;
L_08A46930:;
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f15 = f20;
    f13 = f13 + f22;
    a2 = (u32)-256;
    a3 = 8;
    a1 = 0 + 0;
    a0 = s2 + 0;
    f12 = f24;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46958;
L_08A46958:;
    a0 = s2 + 0;
    f12 = f20;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A46968;
L_08A46968:;
    f0 = f24 - f0;
    f13 = BITSF(LD32(sp+4));
    a0 = LD32(s3-14268);
    f14 = f20;
    f0 = f0 - f26;
    f13 = f13 + f22;
    a1 = 0 + 0;
    f15 = f20;
    f12 = f0;
    a2 = (u32)-1;
    a3 = 2;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46998;
L_08A46998:;
    a0 = 9;
    goto L_08A46728;
L_08A469A0:;
    f0 = BITSF(LD32(v0-820));
    a1 = 0x4f000000u;
    a0 = 86;
    f22 = f22 + f0;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A469B8;
L_08A469B8:;
    f13 = BITSF(LD32(sp+4));
    f12 = f25;
    f14 = f21;
    f13 = f13 + f22;
    f15 = f21;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A469E0;
L_08A469E0:;
    v1 = LD32(s1);
    a1 = s5 + 21244;
    a0 = s2 + 0;
    t0 = LD32(v1+80);
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A469FC;
L_08A469FC:;
    f13 = BITSF(LD32(sp+4));
    f14 = f21;
    f15 = f21;
    f13 = f13 + f22;
    a2 = (u32)-256;
    a3 = 8;
    a1 = 0 + 0;
    a0 = s2 + 0;
    f12 = f24;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46A24;
L_08A46A24:;
    a0 = s2 + 0;
    f12 = f21;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A46A34;
L_08A46A34:;
    f0 = f24 - f0;
    f13 = BITSF(LD32(sp+4));
    a0 = LD32(s7-14268);
    f14 = f21;
    f0 = f0 - f26;
    f13 = f13 + f22;
    a1 = 0 + 0;
    f15 = f21;
    f12 = f0;
    a2 = (u32)-1;
    a3 = 2;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46A64;
L_08A46A64:;
    a0 = LD32(s1);
    goto L_08A46718;
L_08A46A6C:;
    f22 = f22 + f23;
    a0 = 85;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A46A7C;
L_08A46A7C:;
    f13 = BITSF(LD32(sp+4));
    f12 = f25;
    f14 = f21;
    f13 = f13 + f22;
    f15 = f21;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46AA4;
L_08A46AA4:;
    v1 = LD32(s1);
    s2 = sp + 16;
    a1 = s5 + 21244;
    t0 = LD32(v1+76);
    a0 = s2 + 0;
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46AC4;
L_08A46AC4:;
    f13 = BITSF(LD32(sp+4));
    f14 = f21;
    f15 = f21;
    f13 = f13 + f22;
    a2 = (u32)-256;
    a3 = 8;
    a1 = 0 + 0;
    a0 = s2 + 0;
    f12 = f24;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46AEC;
L_08A46AEC:;
    a0 = s2 + 0;
    f12 = f21;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A46AFC;
L_08A46AFC:;
    f0 = f24 - f0;
    f13 = BITSF(LD32(sp+4));
    a0 = LD32(s3-14268);
    a1 = 0 + 0;
    f0 = f0 - f26;
    f13 = f13 + f22;
    f14 = f21;
    f15 = f21;
    f12 = f0;
    a2 = (u32)-1;
    a3 = 2;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46B2C;
L_08A46B2C:;
    a0 = LD32(s1);
    goto L_08A4670C;
}

/* 08A46B34 */
void func_08A46B34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A46B34:;
    sp = sp - 16;
    v0 = 6;
    s0 = a0 + 0;
    a1 = LD32(a0);
    v1 = LD32(a1+16);
    cnd_ = v1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A46B90; }
    goto L_08A46B5C;
L_08A46B5C:;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46B64;
L_08A46B64:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46B6C;
L_08A46B6C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A46C7C; }
    goto L_08A46B74;
L_08A46B74:;
    a0 = LD32(s0);
    v0 = 9;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A46C7C; }
    goto L_08A46B88;
L_08A46B88:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a0+108); goto L_08A46C8C; }
    goto L_08A46B90;
L_08A46B90:;
    a0 = D_08AE544C - (21580);
    goto L_08A46B94;
L_08A46B94:;
    a0 = a0 + 21580;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46B9C;
L_08A46B9C:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A46BA4;
L_08A46BA4:;
    v0 = LD32(s0);
    a0 = 5;
    a1 = 0x4f000000u;
    v1 = LD32(v0+16);
    v0 = 7;
    a1 = a1 | 0x8c3a;
    v1 = v1 ^ 0x6;
    if (v1 != 0) a0 = v0;
    v0 = func_0897A064(a0, a1);
    goto L_08A46BC8;
L_08A46BC8:;
    s1 = v0 + 0;
    v0 = D_08AEFCF0 - (-784);
    f12 = BITSF(LD32(v0-784));
    f13 = BITSF(0);
    a0 = s0 + 0;
    f0 = func_08A46CA4(f12, f13);
    goto L_08A46BE0;
L_08A46BE0:;
    v1 = D_08AEFCF4 - (-780);
    f1 = BITSF(LD32(v1-780));
    v0 = D_08AEFCF8 - (-776);
    f2 = BITSF(LD32(v0-776));
    f0 = f0 * f1;
    a0 = 0xff0000u;
    f1 = f0 - f2;
    fcc = FCMP(f2, f0, 14);
    f0 = BITSF(F2I(f0, 1));
    s0 = FBITS(f0);
    cnd_ = !fcc;
    a0 = a0 | 0xff00;
    if (cnd_) { goto L_08A46C20; }
    goto L_08A46C10;
L_08A46C10:;
    f1 = BITSF(F2I(f1, 1));
    v0 = 0x80000000u;
    s0 = FBITS(f1);
    s0 = s0 | v0;
    goto L_08A46C20;
L_08A46C20:;
    s0 = s0 << 24;
    s0 = s0 + a0;
    f0 = func_088CD39C();
    goto L_08A46C2C;
L_08A46C2C:;
    v0 = D_08AEFCFC - (-772);
    f13 = BITSF(LD32(v0-772));
    v0 = D_08AEFD00 - (-768);
    a0 = s1 + 0;
    f13 = f13 - f0;
    f0 = BITSF(LD32(v0-768));
    v0 = D_08AEFD04 - (-764);
    a2 = s0 + 0;
    f13 = f13 * f0;
    f0 = BITSF(LD32(v0-764));
    v0 = D_08AEFD0C - (-756);
    f14 = BITSF(LD32(v0-756));
    f13 = f13 + f0;
    v0 = D_08AEFD08 - (-760);
    f12 = BITSF(LD32(v0-760));
    a1 = 0 + 0;
    f15 = f14;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46C78;
L_08A46C78:;
    goto L_08A46C7C;
L_08A46C7C:;
    sp = sp + 16;
    return;
L_08A46C8C:;
    cnd_ = a0 == v1;
    v0 = 3;
    if (cnd_) { goto L_08A46C78; }
    goto L_08A46C94;
L_08A46C94:;
    cnd_ = a0 != v0;
    a0 = D_08AE544C - (21580);
    if (cnd_) { goto L_08A46B94; }
    goto L_08A46C9C;
L_08A46C9C:;
    goto L_08A46C7C;
}

/* 08A46CA4 */
float func_08A46CA4(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A46CA4:;
    sp = sp - 32;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    f0 = f0 + f13;
    f13 = f12;
    f12 = f0;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46CC4;
L_08A46CC4:;
    v0 = D_08AEFD10 - (-752);
    f1 = BITSF(LD32(v0-752));
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = BITSF(0);
    f0 = f0 * f1;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = D_08AEFD14 - (-748);
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    f2 = BITSF(LD32(v0-748));
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AEFD18 - (-744);
    f1 = f0 + f2;
    f0 = BITSF(LD32(v0-744));
    f0 = f1 * f0;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f3; goto L_08A46D24; }
    goto L_08A46D24;
L_08A46D24:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_08A46D34; }
    goto L_08A46D34;
L_08A46D34:;
    sp = sp + 32;
    { v[0]=vr0;return f0; }
    v[0]=vr0;
}

/* 08A46D40 */
void func_08A46D40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A46D40:;
    v0 = a1 ^ 0x2;
    v1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v1 = v1 | v0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A46DBC; }
    goto L_08A46D70;
L_08A46D70:;
    v0 = s0 - 1;
    goto L_08A46D74;
L_08A46D74:;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A46D94; }
    goto L_08A46D80;
L_08A46D80:;
    goto L_08A46D84;
L_08A46D84:;
    sp = sp + 16;
    return;
L_08A46D94:;
    a0 = LD32(s1);
    v0 = func_08A3B2C0(a0, a1);
    goto L_08A46D9C;
L_08A46D9C:;
    v1 = 17;
    a1 = v0 + 0;
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A46D80; }
    goto L_08A46DAC;
L_08A46DAC:;
    func_08A46DE4(a0, a1);
    goto L_08A46DB4;
L_08A46DB4:;
    goto L_08A46D84;
L_08A46DBC:;
    a0 = LD32(a0);
    v0 = func_08A3B2C0(a0, a1);
    goto L_08A46DC4;
L_08A46DC4:;
    v1 = 17;
    a1 = v0 + 0;
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A46D70; }
    goto L_08A46DD4;
L_08A46DD4:;
    func_08A46DE4(a0, a1);
    goto L_08A46DDC;
L_08A46DDC:;
    v0 = s0 - 1;
    goto L_08A46D74;
}

/* 08A46DE4 */
void func_08A46DE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A46DE4:;
    sp = sp - 112;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    s0 = 21;
    v0 = func_08A4B3B4(a0);
    goto L_08A46E10;
L_08A46E10:;
    v1 = D_08AEFD1C - (-740);
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v1-740));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = f3 + f4;
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+8, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46E58;
L_08A46E58:;
    a0 = sp + 16;
    a1 = 1;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46E64;
L_08A46E64:;
    a0 = LD32(s2);
    a1 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A46E70;
L_08A46E70:;
    a1 = LD32(v0+4);
    a0 = LD32(s2);
    v0 = func_08A38568(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A46E7C;
L_08A46E7C:;
    f0 = BITSF(LD32(sp+20));
    v1 = D_08AEFD20 - (-736);
    f20 = BITSF(LD32(v1-736));
    v1 = 19;
    if (v0 == 0) s0 = v1;
    f1 = BITSF(LD32(sp+16));
    v0 = D_08AEFD24 - (-732);
    ST32(sp+52, FBITS(f0));
    f1 = f1 - f20;
    a0 = 9;
    f0 = BITSF(LD32(v0-732));
    v0 = D_08AEFD28 - (-728);
    ST32(sp+48, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    f0 = BITSF(LD32(v0-728));
    ST32(sp+60, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A46EC0;
L_08A46EC0:;
    a0 = s0 + 0;
    s0 = D_08B2C12C - (-16084);
    a3 = v0 + 0;
    a1 = sp + 48;
    a2 = (u32)-1;
    s0 = s0 - 16084;
    s2 = v0 + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A46EE0;
L_08A46EE0:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46EEC;
L_08A46EEC:;
    v0 = D_08AEFD2C - (-724);
    f0 = BITSF(LD32(v0-724));
    f2 = BITSF(LD32(sp));
    v0 = D_08AEFD30 - (-720);
    f1 = BITSF(LD32(sp+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(v0-720));
    v0 = D_08AEFD34 - (-716);
    a3 = s2 + 0;
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-716));
    v0 = D_08AEFD38 - (-712);
    a2 = (u32)-1;
    ST32(sp+72, FBITS(f0));
    a1 = sp + 64;
    a0 = 25;
    f0 = BITSF(LD32(v0-712));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+76, FBITS(f0));
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A46F40;
L_08A46F40:;
    a1 = 1;
    a0 = s0 + 0;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46F4C;
L_08A46F4C:;
    v0 = func_08901790();
    goto L_08A46F54;
L_08A46F54:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A46F60;
L_08A46F60:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A46F68;
L_08A46F68:;
    v0 = 44;
    { s64 p_ = (s64)(s32)s1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a1 = 0 + 0;
    s1 = lo;
    s1 = s1 + v0;
    a0 = LD32(s1);
    v0 = func_0897A064(a0, a1);
    goto L_08A46F8C;
L_08A46F8C:;
    v1 = D_08AEFD3C - (-708);
    f0 = BITSF(LD32(v1-708));
    f12 = BITSF(LD32(sp+48));
    f13 = BITSF(LD32(sp+52));
    f14 = f0;
    f12 = f12 + f20;
    f13 = f13 + f0;
    a0 = v0 + 0;
    a1 = 0 + 0;
    f15 = f0;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A46FC0;
L_08A46FC0:;
    sp = sp + 112;
    return;
}

/* 08A46FDC */
void func_08A46FDC(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A46FDC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_08A46FF8;
L_08A46FF8:;
    a0 = s1 + 0;
    s0 = s0 + 1;
    func_08A47024(a0, a1);
    goto L_08A47004;
L_08A47004:;
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A46FF8; }
    goto L_08A47010;
L_08A47010:;
    sp = sp + 16;
    return;
}

/* 08A47024 */
void func_08A47024(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A47024:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A47044;
L_08A47044:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = sp + 0;
    a1 = 1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47068;
L_08A47068:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A4708C(a0, a1, a2);
    goto L_08A47078;
L_08A47078:;
    sp = sp + 32;
    return;
}

/* 08A4708C */
void func_08A4708C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A4708C:;
    sp = sp - 80;
    s4 = sp + 16;
    s3 = a1 + 0;
    s2 = (u32)-21846;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    v0 = func_08A384A4(a0, a1);
    goto L_08A470C8;
L_08A470C8:;
    v1 = LD32(v0+4);
    v1 = v1 ^ 0x2;
    cnd_ = v1 != 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A470FC; }
    goto L_08A470D8;
L_08A470D8:;
    goto L_08A470DC;
L_08A470DC:;
    sp = sp + 80;
    return;
L_08A470FC:;
    a0 = LD32(s0);
    v0 = func_08A384A4(a0, a1);
    goto L_08A47104;
L_08A47104:;
    a1 = LD32(v0+4);
    a0 = LD32(s0);
    v0 = func_08A38568(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A47110;
L_08A47110:;
    v1 = D_08AEFD40 - (-704);
    f0 = BITSF(LD32(s1));
    f20 = BITSF(LD32(v1-704));
    a0 = D_08AEFD44 - (-700);
    f2 = BITSF(LD32(a0-700));
    f1 = BITSF(LD32(s1+4));
    f0 = f0 - f20;
    v1 = 0xffaa0000u;
    v1 = v1 | 0xaaff;
    if (v0 == 0) s2 = v1;
    f1 = f1 - f2;
    v0 = D_08AEFD48 - (-696);
    ST32(sp, FBITS(f0));
    a0 = 9;
    f0 = BITSF(LD32(v0-696));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f2));
    v0 = func_08A4CB34(a0);
    goto L_08A4715C;
L_08A4715C:;
    a3 = v0 + 0;
    a2 = s2 + 0;
    a0 = 12;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47170;
L_08A47170:;
    a0 = D_08B2C12C - (-16084);
    a1 = 1;
    a0 = a0 - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47180;
L_08A47180:;
    v0 = func_08901790();
    goto L_08A47188;
L_08A47188:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47194;
L_08A47194:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A4719C;
L_08A4719C:;
    a0 = LD32(s0);
    a1 = s3 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A471A8;
L_08A471A8:;
    t0 = LD32(v0+8);
    a1 = D_08AE52FC - (21244);
    a1 = a1 + 21244;
    a0 = s4 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A471C4;
L_08A471C4:;
    v1 = D_08AEFD4C - (-692);
    f0 = BITSF(LD32(v1-692));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f0;
    f12 = f12 + f20;
    f13 = f13 + f0;
    a0 = s4 + 0;
    a1 = 0 + 0;
    f15 = f0;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A471F8;
L_08A471F8:;
    goto L_08A470DC;
}

/* 08A47200 */
void func_08A47200(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A47200:;
    sp = sp - 32;
    v0 = D_08B1C60C - (-14836);
    a1 = a1 << 5;
    v0 = v0 - 14836;
    s2 = a1 + v0;
    s3 = a0 + 0;
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A47260; }
    goto L_08A47238;
L_08A47238:;
    s0 = s2 + 12;
    goto L_08A4723C;
L_08A4723C:;
    a1 = LD32(s0);
    a0 = s3 + 0;
    a2 = 0 + 0;
    func_08A4727C(a0, a1);
    goto L_08A4724C;
L_08A4724C:;
    v0 = LD32(s2+8);
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A4723C; }
    goto L_08A47260;
L_08A47260:;
    sp = sp + 32;
    return;
}

/* 08A4727C */
void func_08A4727C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08A4727C:;
    sp = sp - 176;
    s6 = 1;
    s3 = a1 + 0;
    s2 = 0xffaa0000u;
    s2 = s2 | 0xcfaa;
    s1 = a0 + 0;
    a0 = LD32(a0);
    v0 = func_08A384A4(a0, a1);
    goto L_08A472D8;
L_08A472D8:;
    a1 = LD32(v0+4);
    a0 = LD32(s1);
    v0 = func_08A38568(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A472E4;
L_08A472E4:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A4767C; }
    goto L_08A472EC;
L_08A472EC:;
    s2 = (u32)-21846;
    goto L_08A472F0;
L_08A472F0:;
    s6 = 0 + 0;
    goto L_08A472F4;
L_08A472F4:;
    a0 = s3 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A472FC;
L_08A472FC:;
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v1 = D_08AEFD54 - (-684);
    v0 = D_08AEFD50 - (-688);
    f5 = BITSF(LD32(v1-684));
    f0 = BITSF(LD32(v0-688));
    a1 = 1;
    f4 = f3 + f5;
    f0 = f1 + f0;
    a0 = sp + 0;
    ST32(sp+32, FBITS(f1));
    fp = sp + 64;
    s7 = D_08B2C12C - (-16084);
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+56, FBITS(f5));
    ST32(sp+16, FBITS(f0));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47364;
L_08A47364:;
    a0 = sp + 16;
    a1 = 1;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47370;
L_08A47370:;
    a1 = 1;
    a0 = sp + 32;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4737C;
L_08A4737C:;
    a0 = 9;
    v0 = func_08A4CB34(a0);
    goto L_08A47384;
L_08A47384:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    s5 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47394;
L_08A47394:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A4739C;
L_08A4739C:;
    v0 = D_08AEFD58 - (-680);
    f22 = BITSF(LD32(v0-680));
    v0 = D_08B1C844 - (-14268);
    a0 = LD32(v0-14268);
    a1 = (u32)-1;
    f12 = f22;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A473B8;
L_08A473B8:;
    a0 = LD32(s1);
    a1 = s3 + 0;
    f24 = f0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A473C8;
L_08A473C8:;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    v0 = D_08AEFD5C - (-676);
    if (cnd_) { goto L_08A47614; }
    goto L_08A473D4;
L_08A473D4:;
    v1 = D_08AEFD6C - (-660);
    goto L_08A473D8;
L_08A473D8:;
    f20 = BITSF(LD32(v1-660));
    f0 = BITSF(LD32(sp+32));
    s0 = 44;
    { s64 p_ = (s64)(s32)s3 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    f0 = f0 - f20;
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a1 = 0 + 0;
    s0 = lo;
    ST32(sp+64, FBITS(f0));
    s0 = s0 + v0;
    v0 = D_08AEFD70 - (-656);
    f0 = BITSF(LD32(sp+36));
    f21 = BITSF(LD32(v0-656));
    v0 = D_08AEFD74 - (-652);
    a0 = LD32(s0);
    ST32(sp+68, FBITS(f0));
    s4 = sp + 80;
    f0 = BITSF(LD32(v0-652));
    ST32(sp+72, FBITS(f21));
    ST32(sp+76, FBITS(f0));
    v0 = func_0897A064(a0, a1);
    goto L_08A47430;
L_08A47430:;
    a0 = v0 + 0;
    f12 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    f14 = f22;
    f12 = f12 + f20;
    f13 = f13 + f22;
    f15 = f22;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4745C;
L_08A4745C:;
    v0 = D_08AEFD78 - (-648);
    f0 = BITSF(LD32(v0-648));
    f1 = BITSF(LD32(sp+20));
    v0 = 10;
    a0 = 11;
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+16));
    if (s6 == 0) a0 = v0;
    v0 = D_08AEFD7C - (-644);
    ST32(sp+64, FBITS(f0));
    a2 = s2 + 0;
    a3 = s5 + 0;
    f0 = BITSF(LD32(v0-644));
    a1 = fp + 0;
    ST32(sp+68, FBITS(f1));
    ST32(sp+76, FBITS(f0));
    ST32(sp+72, FBITS(f21));
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A474A4;
L_08A474A4:;
    a0 = s7 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A474B0;
L_08A474B0:;
    v0 = func_08901790();
    goto L_08A474B8;
L_08A474B8:;
    t0 = LD32(s0+32);
    v0 = D_08AE52FC - (21244);
    s0 = v0 + 21244;
    a0 = s4 + 0;
    a1 = s0 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A474D8;
L_08A474D8:;
    v0 = D_08AEFD5C - (-676);
    f23 = BITSF(LD32(v0-676));
    v0 = D_08AEFD80 - (-640);
    f21 = BITSF(LD32(v0-640));
    f12 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    f0 = f24 * f21;
    f12 = f12 + f23;
    f13 = f13 + f22;
    f14 = f22;
    f15 = f22;
    f12 = f12 + f0;
    a2 = (u32)-256;
    a3 = 4;
    a0 = s4 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4751C;
L_08A4751C:;
    a0 = s4 + 0;
    f12 = f22;
    a1 = (u32)-1;
    f20 = BITSF(LD32(sp+64));
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A47530;
L_08A47530:;
    f0 = f0 + f24;
    f20 = f20 + f23;
    f13 = BITSF(LD32(sp+68));
    v0 = D_08B1C844 - (-14268);
    f0 = f0 * f21;
    f13 = f13 + f22;
    a0 = LD32(v0-14268);
    a1 = 0 + 0;
    f20 = f20 - f0;
    f14 = f22;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 2;
    f12 = f20;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4756C;
L_08A4756C:;
    cnd_ = s6 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A475B8; }
    goto L_08A47574;
L_08A47574:;
    goto L_08A47578;
L_08A47578:;
    sp = sp + 176;
    return;
L_08A475B8:;
    a1 = s3 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A475C0;
L_08A475C0:;
    t0 = LD32(v0+8);
    a1 = s0 + 0;
    a0 = s4 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A475D8;
L_08A475D8:;
    v0 = D_08AEFD84 - (-636);
    f12 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(v0-636));
    f12 = f12 + f23;
    f14 = f22;
    f13 = f13 + f0;
    a0 = s4 + 0;
    a1 = 0 + 0;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4760C;
L_08A4760C:;
    goto L_08A47578;
L_08A47614:;
    f0 = BITSF(LD32(v0-676));
    f2 = BITSF(LD32(sp));
    v0 = D_08AEFD60 - (-672);
    f1 = BITSF(LD32(sp+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(v0-672));
    v0 = D_08AEFD64 - (-668);
    fp = sp + 64;
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-668));
    v0 = D_08AEFD68 - (-664);
    a0 = 25;
    ST32(sp+72, FBITS(f0));
    a1 = fp + 0;
    a2 = (u32)-1;
    f0 = BITSF(LD32(v0-664));
    a3 = s5 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+76, FBITS(f0));
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47668;
L_08A47668:;
    a0 = s7 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47674;
L_08A47674:;
    v1 = D_08AEFD6C - (-660);
    goto L_08A473D8;
L_08A4767C:;
    a1 = s3 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A47684;
L_08A47684:;
    v1 = LD32(v0+4);
    v1 = v1 ^ 0x2;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A472F4; }
    goto L_08A47694;
L_08A47694:;
    s2 = 0xffaa0000u;
    s2 = s2 | 0xaaff;
    goto L_08A472F0;
}

/* 08A476A0 */
void func_08A476A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A476A0:;
    sp = sp - 80;
    v0 = (s32)a1 < 4;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A476EC; }
    goto L_08A476CC;
L_08A476CC:;
    goto L_08A476D0;
L_08A476D0:;
    sp = sp + 80;
    return;
L_08A476EC:;
    v0 = D_08C2DF00 - (-8448);
    v1 = a1 << 3;
    v0 = v0 - 8448;
    v1 = v1 + v0;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1));
    a0 = 9;
    ST32(sp+20, FBITS(f1));
    s4 = D_08B2C12C - (-16084);
    ST32(sp+16, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    v0 = func_08A4CB34(a0);
    goto L_08A47728;
L_08A47728:;
    a2 = 0x99ff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a1 = sp + 16;
    a0 = 1;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47740;
L_08A47740:;
    a0 = s4 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4774C;
L_08A4774C:;
    v0 = func_08901790();
    goto L_08A47754;
L_08A47754:;
    a0 = LD32(s1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4775C;
L_08A4775C:;
    a0 = LD32(v0+44);
    s2 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47768;
L_08A47768:;
    cnd_ = v0 != 0;
    a0 = LD32(s1);
    if (cnd_) { goto L_08A478EC; }
    goto L_08A47770;
L_08A47770:;
    a1 = s0 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A47778;
L_08A47778:;
    s0 = LD32(v0+4);
    v0 = D_08AE51C4 - (20932);
    v0 = v0 + 20932;
    v1 = s0 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = 0x4f000000u;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4779C;
L_08A4779C:;
    s3 = v0 + 0;
    v0 = s0 + s2;
    v1 = LD_U8(v0+68);
    s0 = s0 + 29;
    s1 = LD_U8(v0+64);
    cnd_ = v1 != 0;
    a0 = 12;
    if (cnd_) { goto L_08A477BC; }
    goto L_08A477B8;
L_08A477B8:;
    a0 = 13;
    goto L_08A477BC;
L_08A477BC:;
    v0 = func_08A4CB34(a0);
    goto L_08A477C4;
L_08A477C4:;
    a3 = v0 + 0;
    v0 = D_08AEFD88 - (-632);
    f0 = BITSF(LD32(v0-632));
    f2 = BITSF(LD32(sp+16));
    v0 = D_08AEFD8C - (-628);
    f1 = BITSF(LD32(sp+20));
    f2 = f2 + f0;
    f0 = BITSF(LD32(v0-628));
    s2 = sp + 32;
    a0 = s0 + 0;
    f1 = f1 + f0;
    a1 = s2 + 0;
    a2 = (u32)-1;
    s0 = s4 - 16084;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, 0);
    ST32(sp+44, 0);
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47810;
L_08A47810:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4781C;
L_08A4781C:;
    v0 = func_08901790();
    goto L_08A47824;
L_08A47824:;
    cnd_ = s1 == 0;
    v0 = D_08AEFD90 - (-624);
    if (cnd_) { goto L_08A47888; }
    goto L_08A4782C;
L_08A4782C:;
    a0 = D_08AE5424 - (21540);
    goto L_08A47830;
L_08A47830:;
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47838;
L_08A47838:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A47840;
L_08A47840:;
    v0 = D_08AEFD98 - (-616);
    f0 = BITSF(LD32(v0-616));
    f12 = BITSF(LD32(sp+16));
    v0 = D_08AEFD9C - (-612);
    f13 = BITSF(LD32(sp+20));
    f12 = f12 + f0;
    f0 = BITSF(LD32(v0-612));
    v0 = D_08AEFDA0 - (-608);
    f14 = BITSF(LD32(v0-608));
    f13 = f13 + f0;
    a0 = s3 + 0;
    a1 = 0 + 0;
    f15 = f14;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47880;
L_08A47880:;
    goto L_08A476D0;
L_08A47888:;
    f0 = BITSF(LD32(v0-624));
    f2 = BITSF(LD32(sp+16));
    v0 = D_08AEFD94 - (-620);
    f1 = BITSF(LD32(sp+20));
    f2 = f2 + f0;
    f0 = BITSF(LD32(v0-620));
    a0 = 9;
    ST32(sp+40, 0);
    f1 = f1 + f0;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+44, 0);
    v0 = func_08A4CB34(a0);
    goto L_08A478BC;
L_08A478BC:;
    a3 = v0 + 0;
    a1 = s2 + 0;
    a2 = (u32)-1;
    a0 = 26;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A478D0;
L_08A478D0:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A478DC;
L_08A478DC:;
    v0 = func_08901790();
    goto L_08A478E4;
L_08A478E4:;
    a0 = D_08AE5424 - (21540);
    goto L_08A47830;
L_08A478EC:;
    a1 = s0 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A478F4;
L_08A478F4:;
    s0 = LD32(v0+8);
    v0 = D_08AE51D4 - (20948);
    v0 = v0 + 20948;
    v1 = s0 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = 0x4f000000u;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A47918;
L_08A47918:;
    s3 = v0 + 0;
    v0 = s0 + s2;
    v1 = LD_U8(v0+68);
    s0 = s0 + 33;
    s1 = LD_U8(v0+64);
    cnd_ = v1 != 0;
    a0 = 14;
    if (cnd_) { goto L_08A477BC; }
    goto L_08A47934;
L_08A47934:;
    a0 = 15;
    goto L_08A477BC;
}

/* 08A4793C */
void func_08A4793C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A4793C:;
    sp = sp - 112;
    s4 = 0xffaa0000u;
    s4 = s4 | 0xcfaa;
    s3 = a2 & 0xff;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    v0 = func_08A3848C(a0, a1);
    goto L_08A47994;
L_08A47994:;
    a1 = LD32(v0);
    a0 = LD32(s0);
    v0 = func_08A38568(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A479A0;
L_08A479A0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0); goto L_08A47BE4; }
    goto L_08A479A8;
L_08A479A8:;
    s4 = (u32)-21846;
    goto L_08A479AC;
L_08A479AC:;
    v0 = D_08C2DF20 - (-8416);
    s2 = s1 << 3;
    cnd_ = s3 != 0;
    v0 = v0 - 8416;
    if (cnd_) { goto L_08A479C8; }
    goto L_08A479BC;
L_08A479BC:;
    v0 = D_08C2DF60 - (-8352);
    s2 = s1 << 3;
    v0 = v0 - 8352;
    goto L_08A479C8;
L_08A479C8:;
    cnd_ = s3 == 0;
    s0 = s2 + v0;
    if (cnd_) { goto L_08A47BC8; }
    goto L_08A479D0;
L_08A479D0:;
    s7 = D_08AE5424 - (21540);
    a0 = s7 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A479DC;
L_08A479DC:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A479E4;
L_08A479E4:;
    s6 = D_08B1C60C - (-14836);
    s5 = s1 << 5;
    v0 = s6 - 14836;
    v0 = s5 + v0;
    a0 = LD32(v0);
    a1 = 0 + 0;
    s1 = D_08AEFDA4 - (-604);
    v0 = func_0897A064(a0, a1);
    goto L_08A47A04;
L_08A47A04:;
    f14 = BITSF(LD32(s1-604));
    f13 = BITSF(LD32(s0+4));
    f12 = BITSF(LD32(s0));
    a0 = v0 + 0;
    a1 = 0 + 0;
    f15 = f14;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47A28;
L_08A47A28:;
    v1 = D_08C2DF40 - (-8384);
    v1 = v1 - 8384;
    cnd_ = s3 != 0;
    s0 = s2 + v1;
    if (cnd_) { goto L_08A47A44; }
    goto L_08A47A38;
L_08A47A38:;
    v0 = D_08C2DF80 - (-8320);
    v0 = v0 - 8320;
    s0 = s2 + v0;
    goto L_08A47A44;
L_08A47A44:;
    a0 = 9;
    v0 = func_08A4CB34(a0);
    goto L_08A47A4C;
L_08A47A4C:;
    f21 = BITSF(LD32(s1-604));
    f0 = BITSF(LD32(s0+4));
    a3 = v0 + 0;
    v0 = D_08AEFDA8 - (-600);
    f0 = f0 + f21;
    f1 = BITSF(LD32(s0));
    a2 = s4 + 0;
    a1 = sp + 0;
    ST32(sp+4, FBITS(f0));
    a0 = 11;
    s1 = D_08B1C844 - (-14268);
    f0 = BITSF(LD32(v0-600));
    v0 = D_08AEFDAC - (-596);
    ST32(sp, FBITS(f1));
    s0 = sp + 16;
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-596));
    ST32(sp+12, FBITS(f0));
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47A98;
L_08A47A98:;
    a0 = D_08B2C12C - (-16084);
    a1 = 1;
    a0 = a0 - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47AA8;
L_08A47AA8:;
    v0 = func_08901790();
    goto L_08A47AB0;
L_08A47AB0:;
    a0 = s7 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47AB8;
L_08A47AB8:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A47AC0;
L_08A47AC0:;
    a0 = LD32(s1-14268);
    f12 = f21;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A47AD0;
L_08A47AD0:;
    v0 = s6 - 14836;
    v0 = s5 + v0;
    t0 = LD32(v0+4);
    a1 = D_08AE52FC - (21244);
    a0 = s0 + 0;
    a1 = a1 + 21244;
    a2 = 5;
    a3 = 1;
    f24 = f0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47AF8;
L_08A47AF8:;
    v1 = D_08AEFDB0 - (-592);
    v0 = D_08AEFDB4 - (-588);
    f22 = BITSF(LD32(v1-592));
    f23 = BITSF(LD32(v0-588));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f0 = f24 * f23;
    f12 = f12 + f22;
    f13 = f13 + f21;
    f14 = f21;
    f15 = f21;
    f12 = f12 + f0;
    a2 = (u32)-256;
    a3 = 4;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47B3C;
L_08A47B3C:;
    a0 = s0 + 0;
    f12 = f21;
    a1 = (u32)-1;
    f20 = BITSF(LD32(sp));
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A47B50;
L_08A47B50:;
    f0 = f0 + f24;
    f20 = f20 + f22;
    f13 = BITSF(LD32(sp+4));
    a0 = LD32(s1-14268);
    f0 = f0 * f23;
    f13 = f13 + f21;
    f14 = f21;
    f15 = f21;
    f20 = f20 - f0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 2;
    f12 = f20;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47B88;
L_08A47B88:;
    sp = sp + 112;
    return;
L_08A47BC8:;
    a0 = D_08AE544C - (21580);
    a0 = a0 + 21580;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47BD4;
L_08A47BD4:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A47BDC;
L_08A47BDC:;
    s7 = D_08AE5424 - (21540);
    goto L_08A479E4;
L_08A47BE4:;
    a1 = s1 + 0;
    v0 = func_08A3848C(a0, a1);
    goto L_08A47BEC;
L_08A47BEC:;
    v1 = LD32(v0);
    v0 = 0xffaa0000u;
    v0 = v0 | 0xaaff;
    v1 = v1 ^ 0x2;
    if (v1 != 0) s4 = v0;
    goto L_08A479AC;
}

/* 08A47C04 */
void func_08A47C04(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08A47C04:;
    sp = sp - 160;
    s3 = a0 + 0;
    s0 = 2;
    a0 = LD32(a0);
    s5 = LD32(a0+60);
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A47C5C;
L_08A47C5C:;
    a1 = LD32(v0);
    a0 = LD32(s3);
    ST32(sp, a1);
    v1 = LD32(v0+4);
    ST32(sp+4, v1);
    a1 = LD32(v0+8);
    ST32(sp+8, a1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47C7C;
L_08A47C7C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47C84;
L_08A47C84:;
    cnd_ = v0 == 0;
    v0 = LD32(s3);
    if (cnd_) { goto L_08A48060; }
    goto L_08A47C8C;
L_08A47C8C:;
    v1 = LD32(v0+12);
    v1 = v1 < 0x1u;
    goto L_08A47C94;
L_08A47C94:;
    a0 = LD32(sp+4);
    s2 = 0xffaa0000u;
    v0 = a0 ^ 0x2;
    cnd_ = v0 == 0;
    s2 = s2 | 0xcfaa;
    if (cnd_) { goto L_08A47CC0; }
    goto L_08A47CA8;
L_08A47CA8:;
    s2 = 0xffaa0000u;
    s0 = 3;
    cnd_ = a0 == v1;
    s2 = s2 | 0xaaff;
    if (cnd_) { goto L_08A47CC0; }
    goto L_08A47CB8;
L_08A47CB8:;
    s0 = 4;
    s2 = (u32)-21846;
    goto L_08A47CC0;
L_08A47CC0:;
    v0 = D_08AEFDB8 - (-584);
    f20 = BITSF(LD32(v0-584));
    v0 = D_08AEFDBC - (-580);
    f0 = BITSF(LD32(v0-580));
    v0 = D_08AEFDC0 - (-576);
    a0 = 10;
    ST32(sp+20, FBITS(f0));
    s1 = D_08B1C844 - (-14268);
    s4 = sp + 48;
    f0 = BITSF(LD32(v0-576));
    v0 = D_08AEFDC4 - (-572);
    ST32(sp+16, FBITS(f20));
    ST32(sp+24, FBITS(f0));
    f0 = BITSF(LD32(v0-572));
    ST32(sp+28, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A47D00;
L_08A47D00:;
    a2 = 0x99ff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = s0 + 0;
    a1 = sp + 16;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47D18;
L_08A47D18:;
    v0 = D_08B2C12C - (-16084);
    s6 = v0 - 16084;
    a1 = 1;
    a0 = s6 + 0;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47D2C;
L_08A47D2C:;
    s0 = 44;
    v0 = func_08901790();
    goto L_08A47D34;
L_08A47D34:;
    a0 = D_08AE544C - (21580);
    a0 = a0 + 21580;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47D40;
L_08A47D40:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A47D48;
L_08A47D48:;
    { s64 p_ = (s64)(s32)s5 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a1 = 0 + 0;
    s0 = lo;
    s0 = s0 + v0;
    a0 = LD32(s0);
    v0 = func_0897A064(a0, a1);
    goto L_08A47D68;
L_08A47D68:;
    v1 = D_08AEFDC8 - (-568);
    f0 = BITSF(LD32(v1-568));
    f12 = BITSF(LD32(sp+16));
    f13 = BITSF(LD32(sp+20));
    v1 = D_08AEFDCC - (-564);
    f23 = BITSF(LD32(v1-564));
    f13 = f13 + f20;
    f12 = f12 + f0;
    f14 = f23;
    f15 = f23;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47DA4;
L_08A47DA4:;
    a0 = 9;
    v0 = func_08A4CB34(a0);
    goto L_08A47DAC;
L_08A47DAC:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    s7 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47DBC;
L_08A47DBC:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A47DC4;
L_08A47DC4:;
    v0 = D_08AEFDD0 - (-560);
    f25 = BITSF(LD32(v0-560));
    v0 = D_08AEFDD4 - (-556);
    f0 = BITSF(LD32(v0-556));
    f2 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a2 = s2 + 0;
    f2 = f2 + f25;
    f1 = f1 + f0;
    a3 = s7 + 0;
    a1 = sp + 32;
    a0 = 11;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, 0);
    ST32(sp+44, 0);
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47E08;
L_08A47E08:;
    a0 = s6 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47E14;
L_08A47E14:;
    v0 = func_08901790();
    goto L_08A47E1C;
L_08A47E1C:;
    a0 = LD32(s1-14268);
    f12 = f23;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A47E2C;
L_08A47E2C:;
    t0 = LD32(s0+32);
    v0 = D_08AE52FC - (21244);
    s0 = v0 + 21244;
    a0 = s4 + 0;
    a1 = s0 + 0;
    a2 = 8;
    a3 = 1;
    f22 = f0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47E50;
L_08A47E50:;
    v1 = D_08AEFDD8 - (-552);
    v0 = D_08AEFDDC - (-548);
    f24 = BITSF(LD32(v1-552));
    f21 = BITSF(LD32(v0-548));
    f12 = BITSF(LD32(sp+32));
    f13 = BITSF(LD32(sp+36));
    f0 = f22 * f21;
    f12 = f12 + f24;
    f13 = f13 + f23;
    f14 = f23;
    f15 = f23;
    f12 = f12 + f0;
    a2 = (u32)-256;
    a3 = 4;
    a0 = s4 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47E94;
L_08A47E94:;
    a0 = s4 + 0;
    f12 = f23;
    a1 = (u32)-1;
    f20 = BITSF(LD32(sp+32));
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A47EA8;
L_08A47EA8:;
    f0 = f0 + f22;
    f20 = f20 + f24;
    f13 = BITSF(LD32(sp+36));
    a0 = LD32(s1-14268);
    f0 = f0 * f21;
    f13 = f13 + f23;
    f14 = f23;
    f15 = f23;
    f20 = f20 - f0;
    a2 = (u32)-1;
    a3 = 2;
    a1 = 0 + 0;
    f12 = f20;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47EE0;
L_08A47EE0:;
    a1 = 0x4f000000u;
    a0 = 53;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A47EF0;
L_08A47EF0:;
    v1 = D_08AEFDE0 - (-544);
    f20 = BITSF(LD32(v1-544));
    f12 = BITSF(LD32(sp+32));
    f13 = BITSF(LD32(sp+36));
    a0 = v0 + 0;
    f12 = f12 + f20;
    f13 = f13 + f23;
    a1 = 0 + 0;
    f14 = f23;
    f15 = f23;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47F24;
L_08A47F24:;
    v1 = LD32(sp+4);
    v1 = v1 ^ 0x2;
    cnd_ = v1 != 0;
    v0 = D_08AEFDE4 - (-540);
    if (cnd_) { goto L_08A47F80; }
    goto L_08A47F34;
L_08A47F34:;
    v0 = func_08901790();
    goto L_08A47F3C;
L_08A47F3C:;
    sp = sp + 160;
    return;
L_08A47F80:;
    f0 = BITSF(LD32(v0-540));
    f2 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a2 = s2 + 0;
    f2 = f2 + f25;
    f1 = f1 + f0;
    a3 = s7 + 0;
    a1 = sp + 64;
    a0 = 12;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, 0);
    ST32(sp+76, 0);
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A47FB8;
L_08A47FB8:;
    a0 = s6 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A47FC4;
L_08A47FC4:;
    v0 = func_08901790();
    goto L_08A47FCC;
L_08A47FCC:;
    a0 = LD32(s3);
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A47FD8;
L_08A47FD8:;
    t0 = LD32(v0+8);
    a1 = s0 + 0;
    a0 = s4 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A47FF0;
L_08A47FF0:;
    f12 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    f14 = f23;
    f12 = f12 + f24;
    f13 = f13 + f23;
    f15 = f23;
    a2 = (u32)-1;
    a3 = 4;
    a0 = s4 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4801C;
L_08A4801C:;
    a1 = 0x4f000000u;
    a0 = 52;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4802C;
L_08A4802C:;
    f12 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    f14 = f23;
    f12 = f12 + f20;
    f13 = f13 + f23;
    a0 = v0 + 0;
    a1 = 0 + 0;
    f15 = f23;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48058;
L_08A48058:;
    goto L_08A47F34;
L_08A48060:;
    v1 = LD32(v0+12);
    goto L_08A47C94;
}

/* 08A48068 */
void func_08A48068(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A48068:;
    sp = sp - 32;
    v0 = D_08AEFDE8 - (-536);
    a2 = 0x60000000u;
    a3 = (u32)-1;
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0-536));
    v0 = D_08AEFDEC - (-532);
    a0 = 13;
    ST32(sp+8, FBITS(f0));
    a1 = sp + 0;
    f0 = BITSF(LD32(v0-532));
    ST32(sp, 0);
    ST32(sp+12, FBITS(f0));
    ST32(sp+4, 0);
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A480AC;
L_08A480AC:;
    a0 = D_08B2C12C - (-16084);
    a0 = a0 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A480BC;
L_08A480BC:;
    v0 = func_08901790();
    goto L_08A480C4;
L_08A480C4:;
    v1 = LD32(s0);
    v0 = 9;
    a1 = LD32(v1+16);
    cnd_ = a1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A480E0; }
    goto L_08A480D8;
L_08A480D8:;
    func_08A482F4(a0);
    goto L_08A480E0;
L_08A480E0:;
    sp = sp + 32;
    return;
}

/* 08A480F0 */
void func_08A480F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A480F0:;
    sp = sp - 80;
    v1 = D_08AEFDF0 - (-528);
    v0 = D_08C2D8CE - (-10034);
    s3 = 0 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(v1-528));
    a1 = LD_U8(v0-10034);
    v0 = D_08AEFDF4 - (-524);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-524));
    v0 = D_08AEFDF8 - (-520);
    ST32(sp+4, 0);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-520));
    cnd_ = a1 == 0;
    ST32(sp+12, FBITS(f0));
    if (cnd_) { goto L_08A48178; }
    goto L_08A4814C;
L_08A4814C:;
    a1 = LD32(a0);
    v0 = 3;
    a0 = LD32(a1+16);
    cnd_ = a0 == v0;
    if (cnd_) { v1 = LD32(a1+88); goto L_08A482E0; }
    goto L_08A48160;
L_08A48160:;
    v0 = 4;
    goto L_08A48164;
L_08A48164:;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = LD32(a1+108); goto L_08A482CC; }
    goto L_08A4816C;
L_08A4816C:;
    v0 = 8;
    goto L_08A48170;
L_08A48170:;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = LD32(a1+108); goto L_08A482B8; }
    goto L_08A48178;
L_08A48178:;
    a0 = D_08AE544C - (21580);
    goto L_08A4817C;
L_08A4817C:;
    a0 = a0 + 21580;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48184;
L_08A48184:;
    a0 = v0 + 0;
    s1 = D_08AEFDFC - (-516);
    s2 = D_08B1C844 - (-14268);
    func_088CD5B0(a0);
    goto L_08A48194;
L_08A48194:;
    f12 = BITSF(LD32(s1-516));
    a0 = LD32(s2-14268);
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A481A4;
L_08A481A4:;
    cnd_ = s3 == 0;
    f21 = f0;
    if (cnd_) { goto L_08A482A8; }
    goto L_08A481AC;
L_08A481AC:;
    a0 = LD32(s0);
    a1 = LD32(a0+12);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A481BC;
L_08A481BC:;
    v1 = LD32(v0+48);
    goto L_08A481C0;
L_08A481C0:;
    s0 = sp + 16;
    t0 = 9999;
    v0 = v1 < 0x2710u;
    a1 = D_08AE52FC - (21244);
    if (v0 != 0) t0 = v1;
    a0 = s0 + 0;
    a1 = a1 + 21244;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A481E8;
L_08A481E8:;
    f20 = BITSF(LD32(s1-516));
    f12 = BITSF(0);
    a2 = (u32)-256;
    f14 = f20;
    f13 = f12;
    f15 = f20;
    a3 = 264;
    a1 = sp + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48210;
L_08A48210:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A48220;
L_08A48220:;
    f12 = BITSF(LD32(sp+8));
    f13 = BITSF(LD32(sp+4));
    a0 = LD32(s2-14268);
    f12 = f12 - f0;
    f14 = f20;
    f15 = f20;
    a2 = (u32)-1;
    f12 = f12 - f21;
    a3 = 2;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4824C;
L_08A4824C:;
    a1 = 0x4f000000u;
    a0 = 53;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4825C;
L_08A4825C:;
    a0 = v0 + 0;
    v0 = D_08AEFE00 - (-512);
    f13 = BITSF(LD32(sp+4));
    f12 = BITSF(LD32(v0-512));
    f14 = f20;
    f15 = f20;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48284;
L_08A48284:;
    sp = sp + 80;
    return;
L_08A482A8:;
    a0 = LD32(s0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A482B0;
L_08A482B0:;
    v1 = LD32(v0+48);
    goto L_08A481C0;
L_08A482B8:;
    v0 = 5;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = D_08AE544C - (21580); goto L_08A4817C; }
    goto L_08A482C4;
L_08A482C4:;
    s3 = 1;
    goto L_08A48178;
L_08A482CC:;
    v0 = 5;
    cnd_ = v1 != v0;
    v0 = 8;
    if (cnd_) { goto L_08A48170; }
    goto L_08A482D8;
L_08A482D8:;
    s3 = 1;
    goto L_08A48178;
L_08A482E0:;
    v0 = 2;
    cnd_ = v1 != v0;
    v0 = 4;
    if (cnd_) { goto L_08A48164; }
    goto L_08A482EC;
L_08A482EC:;
    s3 = 1;
    goto L_08A48178;
}

/* 08A482F4 */
void func_08A482F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A482F4:;
    sp = sp - 48;
    v0 = D_08AEFE04 - (-508);
    s1 = a0 + 0;
    s0 = D_08AE544C - (21580);
    s0 = s0 + 21580;
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-508));
    v0 = D_08AEFE08 - (-504);
    ST32(sp, 0);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-504));
    ST32(sp+4, 0);
    ST32(sp+12, FBITS(f0));
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4833C;
L_08A4833C:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A48344;
L_08A48344:;
    a1 = 0x4f000000u;
    a0 = 55;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A48354;
L_08A48354:;
    v1 = D_08AEFE10 - (-496);
    f20 = BITSF(LD32(v1-496));
    v1 = D_08AEFE0C - (-500);
    f0 = BITSF(LD32(v1-500));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f12 = f12 + f0;
    f15 = f20;
    a2 = (u32)-1;
    a3 = 0 + 0;
    a1 = 0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4838C;
L_08A4838C:;
    a0 = s0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48394;
L_08A48394:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A4839C;
L_08A4839C:;
    v0 = LD32(s1);
    a0 = s1 + 0;
    a1 = LD32(v0+16);
    v0 = func_08A4A7CC(a1);
    goto L_08A483AC;
L_08A483AC:;
    v1 = D_08AEFE14 - (-492);
    f12 = BITSF(LD32(sp));
    f0 = BITSF(LD32(v1-492));
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f12 = f12 + f0;
    f15 = f20;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A483DC;
L_08A483DC:;
    sp = sp + 48;
    return;
}

/* 08A483F4 */
void func_08A483F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 448);
L_08A483F4:;
    sp = sp - 448;
    v0 = 3;
    s4 = a0 + 0;
    t0 = LD32(a0);
    v1 = LD32(t0+16);
    fp = LD32(t0+60);
    cnd_ = v1 == v0;
    s5 = LD32(t0+120);
    if (cnd_) { goto L_08A48C6C; }
    goto L_08A48450;
L_08A48450:;
    t0 = LD32(t0+112);
    goto L_08A48454;
L_08A48454:;
    a0 = LD32(s4);
    ST32(sp+352, t0);
    s1 = 0xfff00000u;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48464;
L_08A48464:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4846C;
L_08A4846C:;
    s1 = s1 | 0x2828;
    a0 = LD32(s4);
    s0 = 0xff300000u;
    s0 = s0 | 0x80ff;
    v1 = s1 + 0;
    if (v0 == 0) v1 = s0;
    ST32(sp+356, v1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4848C;
L_08A4848C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48494;
L_08A48494:;
    v1 = D_08C2DFA0 - (-8288);
    f0 = BITSF(LD32(v1-8288));
    if (v0 == 0) s0 = s1;
    v0 = 0xffcc0000u;
    v0 = v0 | 0xcccc;
    a0 = v1 - 8288;
    ST32(sp+360, v0);
    v0 = D_08AEFE18 - (-488);
    f1 = BITSF(LD32(a0+4));
    ST32(sp, FBITS(f0));
    a0 = 11;
    f0 = BITSF(LD32(v0-488));
    v0 = D_08AEFE1C - (-484);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-484));
    ST32(sp+12, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A484DC;
L_08A484DC:;
    a2 = 0xafff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = 5;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A484F4;
L_08A484F4:;
    v1 = D_08B2C12C - (-16084);
    a0 = v1 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48504;
L_08A48504:;
    v0 = func_08901790();
    goto L_08A4850C;
L_08A4850C:;
    v0 = D_08AE5424 - (21540);
    a0 = v0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48518;
L_08A48518:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A48520;
L_08A48520:;
    a0 = LD32(s4);
    v0 = 3;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    a2 = 56;
    if (cnd_) { goto L_08A48570; }
    goto L_08A48534;
L_08A48534:;
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4853C;
L_08A4853C:;
    a0 = LD32(s4);
    v1 = LD32(v0+4);
    v0 = LD32(a0+12);
    cnd_ = v1 == v0;
    v1 = LD32(sp+356);
    if (cnd_) { goto L_08A48C60; }
    goto L_08A48550;
L_08A48550:;
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48558;
L_08A48558:;
    v1 = LD32(v0+4);
    v1 = v1 ^ 0x2;
    cnd_ = v1 == 0;
    a2 = 112;
    if (cnd_) { goto L_08A48570; }
    goto L_08A48568;
L_08A48568:;
    ST32(sp+360, s0);
    a2 = 57;
    goto L_08A48570;
L_08A48570:;
    a1 = 0x4f000000u;
    a0 = a2 + 0;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A48580;
L_08A48580:;
    v1 = D_08AEFE20 - (-480);
    f20 = BITSF(LD32(v1-480));
    v1 = D_08AEFE24 - (-476);
    f0 = BITSF(LD32(v1-476));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    v1 = D_08AEFE28 - (-472);
    f21 = BITSF(LD32(v1-472));
    f12 = f12 + f20;
    f13 = f13 + f0;
    f14 = f21;
    f15 = f21;
    a2 = (u32)-256;
    a3 = 4;
    a1 = 0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A485C4;
L_08A485C4:;
    v0 = D_08AE5424 - (21540);
    a0 = v0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A485D0;
L_08A485D0:;
    a0 = v0 + 0;
    s0 = 44;
    func_088CD5B0(a0);
    goto L_08A485DC;
L_08A485DC:;
    { s64 p_ = (s64)(s32)fp * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    s2 = v0 - 15540;
    a1 = 0 + 0;
    s1 = sp + 16;
    v1 = lo;
    v1 = v1 + s2;
    a0 = LD32(v1);
    v0 = func_0897A064(a0, a1);
    goto L_08A48600;
L_08A48600:;
    v1 = D_08AE5474 - (21620);
    s3 = v1 + 21620;
    a0 = s1 + 0;
    t0 = v0 + 0;
    a1 = s3 + 0;
    a2 = 64;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48620;
L_08A48620:;
    v1 = LD32(s4);
    v0 = 3;
    a0 = LD32(v1+16);
    cnd_ = a0 == v0;
    { s64 p_ = (s64)(s32)s5 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_08A48C20; }
    goto L_08A48634;
L_08A48634:;
    a1 = 0 + 0;
    s0 = sp + 144;
    s7 = D_08AEFE30 - (-464);
    s6 = D_08AEFE34 - (-460);
    v0 = lo;
    v0 = v0 + s2;
    a0 = LD32(v0);
    v0 = func_0897A064(a0, a1);
    goto L_08A48654;
L_08A48654:;
    t0 = v0 + 0;
    a1 = s3 + 0;
    a0 = s0 + 0;
    a2 = 64;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4866C;
L_08A4866C:;
    v1 = D_08AEFE2C - (-468);
    f20 = BITSF(LD32(v1-468));
    f0 = BITSF(LD32(s7-464));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = s1 + 0;
    f12 = f12 + f0;
    f13 = f13 + f20;
    a1 = 0 + 0;
    f14 = f21;
    f15 = f21;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A486A4;
L_08A486A4:;
    f0 = BITSF(LD32(s6-460));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f21;
    f12 = f12 + f0;
    f13 = f13 + f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    f15 = f21;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A486D4;
L_08A486D4:;
    f3 = BITSF(LD32(s7-464));
    f5 = BITSF(LD32(sp));
    f23 = BITSF(LD32(s6-460));
    v0 = D_08AEFE3C - (-452);
    f22 = BITSF(LD32(v0-452));
    f2 = f5 + f23;
    v0 = D_08AEFE48 - (-440);
    s7 = D_08AEFE38 - (-456);
    f3 = f5 + f3;
    f6 = BITSF(LD32(s7-456));
    f1 = BITSF(LD32(v0-440));
    f0 = BITSF(LD32(sp+4));
    a1 = LD32(s4);
    f1 = f2 - f1;
    f4 = f0 + f22;
    v0 = D_08AEFE40 - (-448);
    f3 = f3 - f6;
    f2 = f2 - f6;
    v1 = D_08AEFE44 - (-444);
    f20 = BITSF(LD32(v0-448));
    f21 = BITSF(LD32(v1-444));
    a0 = LD32(a1+16);
    v0 = 3;
    ST32(sp+272, FBITS(f3));
    ST32(sp+288, FBITS(f2));
    ST32(sp+304, FBITS(f1));
    ST32(sp+276, FBITS(f4));
    ST32(sp+280, FBITS(f20));
    ST32(sp+284, FBITS(f21));
    ST32(sp+292, FBITS(f4));
    ST32(sp+296, FBITS(f20));
    ST32(sp+300, FBITS(f21));
    ST32(sp+308, FBITS(f4));
    ST32(sp+312, FBITS(f20));
    cnd_ = a0 == v0;
    ST32(sp+316, FBITS(f21));
    if (cnd_) { goto L_08A48BDC; }
    goto L_08A48764;
L_08A48764:;
    a0 = a1 + 0;
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48770;
L_08A48770:;
    v1 = LD32(s4);
    a0 = LD32(v0+4);
    v0 = LD32(v1+12);
    v0 = v0 < 0x1u;
    cnd_ = a0 == v0;
    f1 = BITSF(LD32(sp));
    if (cnd_) { goto L_08A48B90; }
    goto L_08A48788;
L_08A48788:;
    a0 = 9;
    v0 = func_08A4CB34(a0);
    goto L_08A48790;
L_08A48790:;
    a2 = LD32(sp+356);
    a3 = v0 + 0;
    s0 = v0 + 0;
    v0 = D_08B2C12C - (-16084);
    s1 = v0 - 16084;
    a1 = sp + 272;
    a0 = 8;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A487B0;
L_08A487B0:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A487BC;
L_08A487BC:;
    v0 = LD32(s4);
    v1 = 3;
    a0 = LD32(v0+16);
    cnd_ = a0 == v1;
    a2 = LD32(sp+360);
    if (cnd_) { goto L_08A48810; }
    goto L_08A487D0;
L_08A487D0:;
    a3 = s0 + 0;
    a1 = sp + 288;
    a0 = 8;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A487E0;
L_08A487E0:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A487EC;
L_08A487EC:;
    a0 = LD32(s4);
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A487F8;
L_08A487F8:;
    v1 = LD32(s4);
    a0 = LD32(v0+4);
    v0 = LD32(v1+12);
    v0 = v0 < 0x1u;
    cnd_ = a0 == v0;
    a2 = LD32(sp+356);
    if (cnd_) { goto L_08A48B6C; }
    goto L_08A48810;
L_08A48810:;
    v0 = func_08901790();
    goto L_08A48818;
L_08A48818:;
    v1 = D_08AE5424 - (21540);
    a0 = v1 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48824;
L_08A48824:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A4882C;
L_08A4882C:;
    a0 = LD32(s4);
    a1 = fp + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48838;
L_08A48838:;
    v1 = LD32(v0+8);
    a0 = LD32(s4);
    v0 = LD32(sp+352);
    a1 = s5 + 0;
    s1 = v1 + v0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48850;
L_08A48850:;
    a1 = LD32(s4);
    v1 = LD32(v0+8);
    v0 = LD32(sp+352);
    a0 = LD32(a1+16);
    s2 = v1 + v0;
    v0 = 3;
    cnd_ = a0 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A488A8; }
    goto L_08A48870;
L_08A48870:;
    a1 = fp + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48878;
L_08A48878:;
    v1 = LD32(v0+8);
    a0 = LD32(s4);
    v0 = LD32(sp+352);
    a1 = s5 + 0;
    s1 = v1 - v0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48890;
L_08A48890:;
    a0 = LD32(s4);
    v1 = LD32(v0+4);
    v0 = LD32(a0+12);
    v0 = v0 < 0x1u;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A48B5C; }
    goto L_08A488A8;
L_08A488A8:;
    s6 = D_08AE52FC - (21244);
    s0 = sp + 336;
    s3 = s6 + 21244;
    t0 = s1 + 0;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A488CC;
L_08A488CC:;
    v1 = D_08AEFE4C - (-436);
    f22 = BITSF(LD32(v1-436));
    f21 = BITSF(LD32(s7-456));
    f12 = BITSF(LD32(sp+272));
    f13 = BITSF(LD32(sp+276));
    v0 = D_08AEFE28 - (-472);
    f20 = BITSF(LD32(v0-472));
    f12 = f12 + f21;
    f13 = f13 + f22;
    a0 = s0 + 0;
    a1 = 0 + 0;
    f14 = f20;
    f15 = f20;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4890C;
L_08A4890C:;
    v1 = LD32(s4);
    v0 = 3;
    a0 = LD32(v1+16);
    cnd_ = a0 == v0;
    t0 = s2 + 0;
    if (cnd_) { goto L_08A48984; }
    goto L_08A48920;
L_08A48920:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48934;
L_08A48934:;
    f12 = BITSF(LD32(sp+288));
    f13 = BITSF(LD32(sp+292));
    a0 = s0 + 0;
    f12 = f12 + f21;
    f13 = f13 + f22;
    a1 = 0 + 0;
    f14 = f20;
    f15 = f20;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48960;
L_08A48960:;
    a0 = LD32(s4);
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4896C;
L_08A4896C:;
    v1 = LD32(s4);
    a0 = LD32(v0+4);
    v0 = LD32(v1+12);
    v0 = v0 < 0x1u;
    cnd_ = a0 == v0;
    t0 = LD32(sp+352);
    if (cnd_) { goto L_08A48B14; }
    goto L_08A48984;
L_08A48984:;
    a0 = D_08AE544C - (21580);
    goto L_08A48988;
L_08A48988:;
    a0 = a0 + 21580;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48990;
L_08A48990:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A48998;
L_08A48998:;
    t0 = LD32(sp+352);
    a1 = s6 + 21244;
    a0 = s0 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A489B0;
L_08A489B0:;
    v1 = D_08AEFE20 - (-480);
    f21 = BITSF(LD32(v1-480));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    v0 = D_08AEFE28 - (-472);
    f14 = BITSF(LD32(v0-472));
    f12 = f12 + f21;
    f13 = f13 + f21;
    f15 = f14;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 4;
    a0 = s0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A489E8;
L_08A489E8:;
    a0 = 9;
    v0 = func_08A4CB34(a0);
    goto L_08A489F0;
L_08A489F0:;
    f0 = BITSF(LD32(sp));
    f24 = BITSF(LD32(s7-456));
    s3 = v0 + 0;
    f0 = f0 + f21;
    v0 = D_08AEFE50 - (-432);
    v1 = D_08AEFE54 - (-428);
    f20 = BITSF(LD32(v0-432));
    f0 = f0 - f24;
    f22 = BITSF(LD32(v1-428));
    f1 = BITSF(LD32(sp+4));
    v0 = D_08AEFE58 - (-424);
    f0 = f0 - f20;
    f1 = f1 + f22;
    f23 = BITSF(LD32(v0-424));
    a0 = LD32(s4);
    v1 = D_08B2C12C - (-16084);
    s0 = (u32)-1;
    s1 = 0xff4c0000u;
    s2 = v1 - 16084;
    ST32(sp+320, FBITS(f0));
    s1 = s1 | 0x4c4c;
    ST32(sp+324, FBITS(f1));
    ST32(sp+328, FBITS(f20));
    ST32(sp+332, FBITS(f23));
    { u64 r_ = func_08A38690(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48A54;
L_08A48A54:;
    a2 = s0 + 0;
    if (v0 == 0) a2 = s1;
    a3 = s3 + 0;
    a1 = sp + 320;
    a0 = 17;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A48A6C;
L_08A48A6C:;
    a1 = 1;
    a0 = s2 + 0;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48A78;
L_08A48A78:;
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    a0 = LD32(s4);
    f1 = f1 + f21;
    f0 = f0 + f22;
    ST32(sp+312, FBITS(f20));
    f1 = f1 + f24;
    ST32(sp+308, FBITS(f0));
    ST32(sp+304, FBITS(f1));
    ST32(sp+316, FBITS(f23));
    { u64 r_ = func_08A386C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48AA4;
L_08A48AA4:;
    if (v0 == 0) s0 = s1;
    a2 = s0 + 0;
    a3 = s3 + 0;
    a1 = sp + 304;
    a0 = 18;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A48ABC;
L_08A48ABC:;
    a0 = s2 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48AC8;
L_08A48AC8:;
    v0 = func_08901790();
    goto L_08A48AD0;
L_08A48AD0:;
    sp = sp + 448;
    return;
L_08A48B14:;
    a1 = s3 + 0;
    a0 = s0 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48B28;
L_08A48B28:;
    f12 = BITSF(LD32(sp+304));
    f13 = BITSF(LD32(sp+308));
    f14 = f20;
    f12 = f12 + f21;
    f13 = f13 + f22;
    a0 = s0 + 0;
    a1 = 0 + 0;
    f15 = f20;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48B54;
L_08A48B54:;
    a0 = D_08AE544C - (21580);
    goto L_08A48988;
L_08A48B5C:;
    a1 = s5 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A48B64;
L_08A48B64:;
    s2 = LD32(v0+8);
    goto L_08A488A8;
L_08A48B6C:;
    a1 = sp + 304;
    a0 = 8;
    a3 = s0 + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A48B7C;
L_08A48B7C:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48B88;
L_08A48B88:;
    goto L_08A48810;
L_08A48B90:;
    v1 = D_08AEFE4C - (-436);
    f2 = BITSF(LD32(v1-436));
    f1 = f1 + f23;
    f0 = BITSF(LD32(sp+4));
    ST32(sp+328, FBITS(f20));
    f1 = f1 - f2;
    f0 = f0 + f22;
    ST32(sp+332, FBITS(f21));
    ST32(sp+320, FBITS(f1));
    ST32(sp+324, FBITS(f0));
    v0 = LD32(sp+320);
    v1 = LD32(sp+324);
    ST32(sp+288, v0);
    ST32(sp+292, v1);
    v0 = LD32(sp+328);
    v1 = LD32(sp+332);
    ST32(sp+296, v0);
    ST32(sp+300, v1);
    goto L_08A48788;
L_08A48BDC:;
    v0 = D_08AEFE20 - (-480);
    f0 = BITSF(LD32(v0-480));
    ST32(sp+324, FBITS(f4));
    f0 = f5 + f0;
    v1 = LD32(sp+324);
    ST32(sp+328, FBITS(f20));
    f0 = f0 - f6;
    ST32(sp+332, FBITS(f21));
    ST32(sp+320, FBITS(f0));
    v0 = LD32(sp+320);
    ST32(sp+276, v1);
    ST32(sp+272, v0);
    v1 = LD32(sp+332);
    v0 = LD32(sp+328);
    ST32(sp+284, v1);
    ST32(sp+280, v0);
    goto L_08A48788;
L_08A48C20:;
    v0 = D_08AEFE2C - (-468);
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(v0-468));
    f12 = f12 + f20;
    f14 = f21;
    f13 = f13 + f0;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f15 = f21;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48C54;
L_08A48C54:;
    s7 = D_08AEFE30 - (-464);
    s6 = D_08AEFE34 - (-460);
    goto L_08A486D4;
L_08A48C60:;
    a2 = 58;
    ST32(sp+360, v1);
    goto L_08A48570;
L_08A48C6C:;
    t0 = LD32(t0+100);
    goto L_08A48454;
}

/* 08A48C74 */
void func_08A48C74(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int cnd_;
    u8 stack_[592] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 592);
L_08A48C74:;
    sp = sp - 592;
    v1 = D_08B1C854 - (-14252);
    v0 = LD_U8(v1-14252);
    cnd_ = v0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08A48CDC; }
    goto L_08A48CAC;
L_08A48CAC:;
    ST8(v1-14252, 0);
    goto L_08A48CB0;
L_08A48CB0:;
    goto L_08A48CB4;
L_08A48CB4:;
    sp = sp + 592;
    return;
L_08A48CDC:;
    v0 = D_08C2DFA0 - (-8288);
    f0 = BITSF(LD32(v0-8288));
    v1 = v0 - 8288;
    v0 = D_08AEFE5C - (-420);
    f1 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f0));
    a0 = 11;
    f0 = BITSF(LD32(v0-420));
    v0 = D_08AEFE60 - (-416);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-416));
    ST32(sp+12, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A48D14;
L_08A48D14:;
    a2 = 0xafff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = 5;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A48D2C;
L_08A48D2C:;
    a0 = D_08B2C12C - (-16084);
    a0 = a0 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48D3C;
L_08A48D3C:;
    v0 = func_08901790();
    goto L_08A48D44;
L_08A48D44:;
    a0 = LD32(s3);
    a1 = 0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A48D50;
L_08A48D50:;
    a0 = LD32(s3);
    s1 = v0 + 0;
    a1 = 1;
    v0 = func_08A384F0(a0, a1);
    goto L_08A48D60;
L_08A48D60:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    s2 = s1 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48D70;
L_08A48D70:;
    if (v0 == 0) s2 = s0;
    cnd_ = s2 == 0;
    s1 = sp + 16;
    if (cnd_) { goto L_08A48CB0; }
    goto L_08A48D7C;
L_08A48D7C:;
    a0 = LD32(s2+44);
    s6 = D_08AE5424 - (21540);
    v0 = func_08A26F1C(a0);
    goto L_08A48D88;
L_08A48D88:;
    a1 = 0x4f000000u;
    a0 = 98;
    a1 = a1 | 0x8c3a;
    s0 = v0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A48D9C;
L_08A48D9C:;
    a1 = v0 + 0;
    t0 = s0 + 0;
    a2 = 256;
    a3 = 1;
    a0 = s1 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48DB4;
L_08A48DB4:;
    a0 = s6 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48DBC;
L_08A48DBC:;
    a0 = v0 + 0;
    s5 = D_08AEFE64 - (-412);
    func_088CD5B0(a0);
    goto L_08A48DC8;
L_08A48DC8:;
    f0 = BITSF(LD32(s5-412));
    f12 = BITSF(LD32(sp));
    v0 = D_08AEFE68 - (-408);
    f13 = BITSF(LD32(sp+4));
    f12 = f12 + f0;
    f0 = BITSF(LD32(v0-408));
    s4 = D_08AEFE6C - (-404);
    f14 = BITSF(LD32(s4-404));
    f13 = f13 + f0;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = (u32)-1;
    f15 = f14;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48E04;
L_08A48E04:;
    v1 = LD32(s2+72);
    v0 = D_08AE547C - (21628);
    v0 = v0 + 21628;
    a1 = LD32(v1+32);
    ST32(sp+528, v0);
    a0 = a1 < 0x3u;
    s0 = LD32(v1+40);
    cnd_ = a0 != 0;
    a2 = LD32(v1+36);
    if (cnd_) { goto L_08A48F20; }
    goto L_08A48E28;
L_08A48E28:;
    v0 = s0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A48EF8; }
    goto L_08A48E34;
L_08A48E34:;
    s1 = s6 + 21540;
    goto L_08A48E38;
L_08A48E38:;
    a0 = s1 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48E40;
L_08A48E40:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A48E48;
L_08A48E48:;
    f0 = BITSF(LD32(s5-412));
    f12 = BITSF(LD32(sp));
    v0 = D_08AEFE70 - (-400);
    f13 = BITSF(LD32(sp+4));
    f12 = f12 + f0;
    f0 = BITSF(LD32(v0-400));
    f20 = BITSF(LD32(s4-404));
    a0 = LD32(sp+528);
    f13 = f13 + f0;
    f14 = f20;
    f15 = f20;
    a2 = (u32)-256;
    a3 = 4;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48E84;
L_08A48E84:;
    a1 = 0x4f000000u;
    a1 = a1 | 0x8c3a;
    a0 = 108;
    v0 = func_0897A064(a0, a1);
    goto L_08A48E94;
L_08A48E94:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48EA0;
L_08A48EA0:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A48EA8;
L_08A48EA8:;
    v0 = D_08AEFE78 - (-392);
    f0 = BITSF(LD32(v0-392));
    f13 = BITSF(LD32(sp+4));
    v0 = D_08AEFE7C - (-388);
    f12 = BITSF(LD32(sp));
    f13 = f13 + f0;
    f0 = BITSF(LD32(v0-388));
    v0 = D_08AEFE74 - (-396);
    f14 = f20;
    f13 = f13 - f0;
    f0 = BITSF(LD32(v0-396));
    a0 = s0 + 0;
    a1 = 0 + 0;
    f12 = f12 + f0;
    f15 = f20;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A48EF0;
L_08A48EF0:;
    goto L_08A48CB4;
L_08A48EF8:;
    a0 = LD32(s2+44);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A48F00;
L_08A48F00:;
    v0 = v0 < 0x1u;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = v0 + 0;
    a3 = sp + 528;
    func_08A49050(a1, a2, a3);
    goto L_08A48F18;
L_08A48F18:;
    s1 = s6 + 21540;
    goto L_08A48E38;
L_08A48F20:;
    a0 = s3 + 0;
    a3 = sp + 528;
    func_08A48F34(a1, a2, a3);
    goto L_08A48F2C;
L_08A48F2C:;
    s1 = s6 + 21540;
    goto L_08A48E38;
}

/* 08A48F34 */
void func_08A48F34(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A48F34:;
    sp = sp - 16;
    v1 = 1;
    s0 = a3 + 0;
    cnd_ = a1 == v1;
    if (cnd_) { goto L_08A4900C; }
    goto L_08A48F4C;
L_08A48F4C:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A48FC0; }
    goto L_08A48F58;
L_08A48F58:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A48F70; }
    goto L_08A48F60;
L_08A48F60:;
    goto L_08A48F64;
L_08A48F64:;
    goto L_08A48F68;
L_08A48F68:;
    sp = sp + 16;
    return;
L_08A48F70:;
    cnd_ = a2 == v1;
    v0 = (s32)a2 < 2;
    if (cnd_) { goto L_08A48FB4; }
    goto L_08A48F78;
L_08A48F78:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A48FA0; }
    goto L_08A48F80;
L_08A48F80:;
    cnd_ = a2 != a1;
    if (cnd_) { goto L_08A48F64; }
    goto L_08A48F88;
L_08A48F88:;
    a1 = 0x4f000000u;
    a0 = 107;
    goto L_08A48F90;
L_08A48F90:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A48F98;
L_08A48F98:;
    ST32(s0, v0);
    goto L_08A48F60;
L_08A48FA0:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A48F64; }
    goto L_08A48FA8;
L_08A48FA8:;
    a1 = 0x4f000000u;
    a0 = 105;
    goto L_08A48F90;
L_08A48FB4:;
    a1 = 0x4f000000u;
    a0 = 106;
    goto L_08A48F90;
L_08A48FC0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A48F64; }
    goto L_08A48FC8;
L_08A48FC8:;
    cnd_ = a2 == v1;
    v0 = (s32)a2 < 2;
    if (cnd_) { goto L_08A49000; }
    goto L_08A48FD0;
L_08A48FD0:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A48FEC; }
    goto L_08A48FD8;
L_08A48FD8:;
    cnd_ = a2 != v0;
    if (cnd_) {  goto L_08A48F68; }
    goto L_08A48FE0;
L_08A48FE0:;
    a1 = 0x4f000000u;
    a0 = 101;
    goto L_08A48F90;
L_08A48FEC:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A48F64; }
    goto L_08A48FF4;
L_08A48FF4:;
    a1 = 0x4f000000u;
    a0 = 99;
    goto L_08A48F90;
L_08A49000:;
    a1 = 0x4f000000u;
    a0 = 100;
    goto L_08A48F90;
L_08A4900C:;
    cnd_ = a2 == a1;
    v0 = (s32)a2 < 2;
    if (cnd_) { goto L_08A49044; }
    goto L_08A49014;
L_08A49014:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A49030; }
    goto L_08A4901C;
L_08A4901C:;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_08A48F64; }
    goto L_08A49024;
L_08A49024:;
    a1 = 0x4f000000u;
    a0 = 104;
    goto L_08A48F90;
L_08A49030:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A48F64; }
    goto L_08A49038;
L_08A49038:;
    a1 = 0x4f000000u;
    a0 = 102;
    goto L_08A48F90;
L_08A49044:;
    a1 = 0x4f000000u;
    a0 = 103;
    goto L_08A48F90;
}

/* 08A49050 */
void func_08A49050(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A49050:;
    v0 = D_08AE51C4 - (20932);
    v1 = a1 << 2;
    v0 = v0 + 20932;
    a0 = v1 + v0;
    v0 = D_08AE51D4 - (20948);
    sp = sp - 16;
    v0 = v0 + 20948;
    v1 = v1 + v0;
    s0 = a3 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A490A4; }
    goto L_08A49080;
L_08A49080:;
    a0 = LD32(a0);
    goto L_08A49084;
L_08A49084:;
    a1 = 0x4f000000u;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49090;
L_08A49090:;
    ST32(s0, v0);
    sp = sp + 16;
    return;
L_08A490A4:;
    a0 = LD32(v1);
    goto L_08A49084;
}

/* 08A490AC */
void func_08A490AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08A490AC:;
    sp = sp - 192;
    s6 = D_08AEFE80 - (-384);
    v0 = D_08AEFE84 - (-380);
    fp = D_08B2C12C - (-16084);
    s2 = a0 + 0;
    a0 = 11;
    s1 = 0xfff00000u;
    s1 = s1 | 0x2828;
    s0 = 0xff300000u;
    s0 = s0 | 0x80ff;
    f0 = BITSF(LD32(s6-384));
    s5 = s1 + 0;
    s4 = s0 + 0;
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-380));
    ST32(sp+8, 0);
    ST32(sp+4, FBITS(f0));
    ST32(sp+12, 0);
    v0 = func_08A4CB34(a0);
    goto L_08A49138;
L_08A49138:;
    a2 = 0x99ff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = 5;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A49150;
L_08A49150:;
    a1 = 1;
    a0 = fp - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4915C;
L_08A4915C:;
    v0 = func_08901790();
    goto L_08A49164;
L_08A49164:;
    a0 = LD32(s2);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4916C;
L_08A4916C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49174;
L_08A49174:;
    a0 = LD32(s2);
    if (v0 == 0) s5 = s0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49180;
L_08A49180:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49188;
L_08A49188:;
    a0 = LD32(s2);
    if (v0 == 0) s4 = s1;
    v0 = 6;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    s1 = LD32(a0+120);
    if (cnd_) { goto L_08A49760; }
    goto L_08A491A0;
L_08A491A0:;
    v0 = LD32(a0+112);
    goto L_08A491A4;
L_08A491A4:;
    ST32(sp+80, v0);
    v1 = LD32(a0+16);
    v0 = 6;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a0+12); goto L_08A49750; }
    goto L_08A491B8;
L_08A491B8:;
    a1 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A491C0;
L_08A491C0:;
    v0 = LD32(v0+8);
    ST32(sp+84, v0);
    goto L_08A491C8;
L_08A491C8:;
    v0 = s1 ^ 0x6;
    v0 = v0 < 0x1u;
    v1 = s1 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A49720; }
    goto L_08A491E0;
L_08A491E0:;
    s3 = 1;
    goto L_08A491E4;
L_08A491E4:;
    a0 = LD32(s2);
    goto L_08A491E8;
L_08A491E8:;
    s0 = 56;
    s7 = D_08AE5424 - (21540);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A491F4;
L_08A491F4:;
    a0 = LD32(s2);
    v1 = 52;
    if (s3 == 0) s0 = v1;
    a1 = LD32(a0+12);
    v0 = v0 + s0;
    v0 = LD32(v0+4);
    a1 = a1 < 0x1u;
    ST32(sp+88, v0);
    v0 = func_08A384F0(a0, a1);
    goto L_08A49218;
L_08A49218:;
    v0 = v0 + s0;
    a0 = LD32(s2);
    v0 = LD32(v0+4);
    ST32(sp+92, v0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4922C;
L_08A4922C:;
    a0 = LD32(s2);
    v0 = LD_U8(v0+68);
    a1 = LD32(a0+12);
    ST32(sp+96, v0);
    a1 = a1 < 0x1u;
    v0 = func_08A384F0(a0, a1);
    goto L_08A49244;
L_08A49244:;
    v0 = LD_U8(v0+68);
    a0 = LD32(s2);
    ST32(sp+100, v0);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49254;
L_08A49254:;
    a0 = LD32(s2);
    v1 = LD32(v0+56);
    a1 = LD32(a0+12);
    v1 = v1 ^ 0x2;
    v1 = v1 < 0x1u;
    a1 = a1 < 0x1u;
    ST32(sp+104, v1);
    v0 = func_08A384F0(a0, a1);
    goto L_08A49274;
L_08A49274:;
    a0 = s7 + 21540;
    v1 = LD32(v0+56);
    v1 = v1 ^ 0x2;
    v1 = v1 < 0x1u;
    ST32(sp+108, v1);
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4928C;
L_08A4928C:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A49294;
L_08A49294:;
    a1 = 0x4f000000u;
    cnd_ = s3 != 0;
    a0 = 125;
    if (cnd_) { goto L_08A492A8; }
    goto L_08A492A0;
L_08A492A0:;
    a1 = 0x4f000000u;
    a0 = 126;
    goto L_08A492A8;
L_08A492A8:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A492B0;
L_08A492B0:;
    a0 = v0 + 0;
    v0 = D_08AEFE8C - (-372);
    f21 = BITSF(LD32(v0-372));
    f20 = BITSF(LD32(s6-384));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    v0 = D_08AEFE90 - (-368);
    f22 = BITSF(LD32(v0-368));
    f12 = f12 + f21;
    f13 = f13 + f20;
    f14 = f22;
    f15 = f22;
    a2 = (u32)-256;
    a3 = 4;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A492F0;
L_08A492F0:;
    a0 = D_08AE544C - (21580);
    a0 = a0 + 21580;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A492FC;
L_08A492FC:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A49304;
L_08A49304:;
    v1 = 44;
    { s64 p_ = (s64)(s32)s1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    a1 = 0 + 0;
    s2 = fp - 16084;
    v1 = lo;
    v1 = v1 + v0;
    a0 = LD32(v1);
    s3 = s7 + 21540;
    s1 = sp + 48;
    v0 = func_0897A064(a0, a1);
    goto L_08A49334;
L_08A49334:;
    f13 = BITSF(LD32(sp+4));
    v1 = D_08AEFE88 - (-376);
    f23 = BITSF(LD32(v1-376));
    f13 = f13 + f20;
    f12 = BITSF(LD32(sp));
    f14 = f22;
    f15 = f22;
    f12 = f12 + f21;
    f13 = f13 + f23;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 4;
    a0 = v0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4936C;
L_08A4936C:;
    v1 = D_08AEFE94 - (-364);
    v0 = D_08AEFEA8 - (-344);
    f24 = BITSF(LD32(v1-364));
    f25 = BITSF(LD32(v0-344));
    f1 = BITSF(LD32(sp));
    v0 = D_08AEFE98 - (-360);
    f20 = BITSF(LD32(v0-360));
    f3 = f1 + f25;
    v0 = D_08AEFE9C - (-356);
    f1 = f1 + f24;
    f0 = BITSF(LD32(v0-356));
    f2 = BITSF(LD32(sp+4));
    f3 = f3 - f20;
    f1 = f1 - f20;
    f2 = f2 + f0;
    v1 = D_08AEFEA4 - (-348);
    v0 = D_08AEFEA0 - (-352);
    f0 = BITSF(LD32(v1-348));
    f4 = BITSF(LD32(v0-352));
    a0 = 9;
    ST32(sp+16, FBITS(f1));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    ST32(sp+44, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A493E0;
L_08A493E0:;
    a3 = v0 + 0;
    a2 = s5 + 0;
    a1 = sp + 16;
    a0 = 8;
    s0 = v0 + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A493F8;
L_08A493F8:;
    a0 = s2 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49404;
L_08A49404:;
    a3 = s0 + 0;
    a2 = s4 + 0;
    a1 = sp + 32;
    a0 = 8;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A49418;
L_08A49418:;
    a1 = 1;
    a0 = s2 + 0;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49424;
L_08A49424:;
    s0 = D_08AE52FC - (21244);
    v0 = func_08901790();
    goto L_08A4942C;
L_08A4942C:;
    a0 = s3 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49434;
L_08A49434:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A4943C;
L_08A4943C:;
    t0 = LD32(sp+80);
    s0 = s0 + 21244;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49458;
L_08A49458:;
    v1 = D_08AEFEAC - (-340);
    f21 = BITSF(LD32(v1-340));
    f12 = BITSF(LD32(sp+16));
    f13 = BITSF(LD32(sp+20));
    f14 = f22;
    f12 = f12 + f20;
    f13 = f13 + f21;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4948C;
L_08A4948C:;
    t0 = LD32(sp+84);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A494A4;
L_08A494A4:;
    f12 = BITSF(LD32(sp+32));
    f13 = BITSF(LD32(sp+36));
    f14 = f22;
    f12 = f12 + f20;
    f13 = f13 + f21;
    f15 = f22;
    a3 = 4;
    a2 = (u32)-1;
    a1 = 0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A494D0;
L_08A494D0:;
    a0 = s3 + 0;
    v0 = D_08AEFEB0 - (-336);
    f20 = BITSF(LD32(v0-336));
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A494E0;
L_08A494E0:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A494E8;
L_08A494E8:;
    v0 = D_08AE5480 - (21632);
    v1 = v0 + 21632;
    a0 = LD32(v0+21632);
    a2 = LD32(v1+8);
    a1 = LD32(v1+4);
    v1 = LD32(sp+88);
    ST32(sp+64, a0);
    a0 = 0x330000u;
    v0 = v1 << 2;
    ST32(sp+72, a2);
    v0 = v0 + sp;
    a0 = a0 | 0x155f;
    ST32(sp+68, a1);
    a1 = LD32(v0+64);
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49524;
L_08A49524:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f22;
    f12 = f12 + f24;
    f13 = f13 + f20;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49550;
L_08A49550:;
    v0 = LD32(sp+92);
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    v1 = v0 << 2;
    v1 = v1 + sp;
    a1 = LD32(v1+64);
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4956C;
L_08A4956C:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = v0 + 0;
    f12 = f12 + f25;
    f13 = f13 + f20;
    a1 = 0 + 0;
    f20 = f20 + f23;
    f14 = f22;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4959C;
L_08A4959C:;
    v1 = LD32(sp+96);
    cnd_ = v1 != 0;
    f21 = f20;
    if (cnd_) { goto L_08A496D8; }
    goto L_08A495A8;
L_08A495A8:;
    v0 = LD32(sp+100);
    goto L_08A495AC;
L_08A495AC:;
    cnd_ = v0 != 0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A49694; }
    goto L_08A495B4;
L_08A495B4:;
    v1 = LD32(sp+104);
    goto L_08A495B8;
L_08A495B8:;
    cnd_ = v1 != 0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A49654; }
    goto L_08A495C0;
L_08A495C0:;
    v0 = LD32(sp+108);
    goto L_08A495C4;
L_08A495C4:;
    cnd_ = v0 != 0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A49614; }
    goto L_08A495CC;
L_08A495CC:;
    goto L_08A495D0;
L_08A495D0:;
    sp = sp + 192;
    return;
L_08A49614:;
    a0 = 132;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49620;
L_08A49620:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f22;
    f12 = f12 + f25;
    f13 = f13 + f20;
    a0 = v0 + 0;
    a1 = 0 + 0;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4964C;
L_08A4964C:;
    goto L_08A495D0;
L_08A49654:;
    a0 = 132;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49660;
L_08A49660:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = v0 + 0;
    f12 = f12 + f24;
    f13 = f13 + f21;
    a1 = 0 + 0;
    f14 = f22;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4968C;
L_08A4968C:;
    v0 = LD32(sp+108);
    goto L_08A495C4;
L_08A49694:;
    a0 = 131;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A496A0;
L_08A496A0:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = v0 + 0;
    f12 = f12 + f25;
    f13 = f13 + f20;
    a1 = 0 + 0;
    f14 = f22;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    f20 = f20 + f23;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A496D0;
L_08A496D0:;
    v1 = LD32(sp+104);
    goto L_08A495B8;
L_08A496D8:;
    a1 = 0x4f000000u;
    a0 = 131;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A496E8;
L_08A496E8:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = v0 + 0;
    f12 = f12 + f24;
    f13 = f13 + f20;
    a1 = 0 + 0;
    f14 = f22;
    f15 = f22;
    a2 = (u32)-1;
    a3 = 4;
    f21 = f20 + f23;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49718;
L_08A49718:;
    v0 = LD32(sp+100);
    goto L_08A495AC;
L_08A49720:;
    a0 = LD32(s2);
    a1 = s1 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4972C;
L_08A4972C:;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s2); goto L_08A491E8; }
    goto L_08A49738;
L_08A49738:;
    v0 = LD32(s2);
    v1 = LD_U8(v0+126);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s2); goto L_08A491E8; }
    goto L_08A49748;
L_08A49748:;
    s3 = 1;
    goto L_08A491E4;
L_08A49750:;
    a1 = a1 < 0x1u;
    v0 = func_08A38670(a0, a1);
    goto L_08A49758;
L_08A49758:;
    ST32(sp+84, v0);
    goto L_08A491C8;
L_08A49760:;
    a1 = LD32(a0+12);
    v0 = func_08A38670(a0, a1);
    goto L_08A49768;
L_08A49768:;
    a0 = LD32(s2);
    goto L_08A491A4;
}

/* 08A49770 */
void func_08A49770(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A49770:;
    sp = sp - 48;
    v0 = D_08C2DFA0 - (-8288);
    v1 = v0 - 8288;
    s1 = a0 + 0;
    a0 = 11;
    f0 = BITSF(LD32(v0-8288));
    v0 = D_08AEFEB4 - (-332);
    f1 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-332));
    v0 = D_08AEFEB8 - (-328);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-328));
    ST32(sp+12, FBITS(f0));
    v0 = func_08A4CB34(a0);
    goto L_08A497C4;
L_08A497C4:;
    a2 = 0x99ff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = 5;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A497DC;
L_08A497DC:;
    a0 = D_08B2C12C - (-16084);
    a0 = a0 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A497EC;
L_08A497EC:;
    v0 = func_08901790();
    goto L_08A497F4;
L_08A497F4:;
    a0 = LD32(s1);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A497FC;
L_08A497FC:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49804;
L_08A49804:;
    cnd_ = v0 == 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_08A4992C; }
    goto L_08A4980C;
L_08A4980C:;
    a0 = LD32(v1+12);
    goto L_08A49810;
L_08A49810:;
    v0 = LD_U8(v1+129);
    cnd_ = v0 != 0;
    a1 = 0x4f000000u;
    if (cnd_) { goto L_08A49924; }
    goto L_08A4981C;
L_08A4981C:;
    v0 = LD_U8(v1+130);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 111; goto L_08A49838; }
    goto L_08A49828;
L_08A49828:;
    v0 = LD32(v1+156);
    cnd_ = v0 == a0;
    if (cnd_) { a0 = 60; goto L_08A49838; }
    goto L_08A49834;
L_08A49834:;
    a0 = 59;
    goto L_08A49838;
L_08A49838:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49840;
L_08A49840:;
    a0 = D_08AE544C - (21580);
    a0 = a0 + 21580;
    s0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49850;
L_08A49850:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A49858;
L_08A49858:;
    v0 = D_08AEFEC0 - (-320);
    f0 = BITSF(LD32(v0-320));
    f13 = BITSF(LD32(sp+4));
    v1 = D_08AEFEBC - (-324);
    v0 = D_08AEFEC4 - (-316);
    f21 = BITSF(LD32(v1-324));
    f13 = f13 + f0;
    f20 = BITSF(LD32(v0-316));
    f12 = f21;
    a3 = 4;
    f14 = f20;
    f15 = f20;
    a2 = (u32)-1;
    a1 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49898;
L_08A49898:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A498A4;
L_08A498A4:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A498AC;
L_08A498AC:;
    v0 = LD32(s1);
    v1 = 44;
    a1 = 0 + 0;
    a2 = LD32(v0+120);
    v0 = D_08B1C34C - (-15540);
    v0 = v0 - 15540;
    { s64 p_ = (s64)(s32)a2 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = lo;
    a2 = a2 + v0;
    a0 = LD32(a2);
    v0 = func_0897A064(a0, a1);
    goto L_08A498D8;
L_08A498D8:;
    a0 = v0 + 0;
    v0 = D_08AEFEC8 - (-312);
    f13 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(v0-312));
    f14 = f20;
    f12 = f21;
    f13 = f13 + f0;
    f15 = f20;
    a1 = 0 + 0;
    a2 = (u32)-256;
    a3 = 4;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49908;
L_08A49908:;
    sp = sp + 48;
    return;
L_08A49924:;
    a0 = 112;
    goto L_08A49838;
L_08A4992C:;
    v0 = LD32(v1+12);
    a0 = v0 < 0x1u;
    goto L_08A49810;
}

/* 08A49938 */
void func_08A49938(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A49938:;
    sp = sp - 48;
    a0 = LD32(a0);
    a1 = LD32(a0+156);
    v0 = func_08A384F0(a0, a1);
    goto L_08A4994C;
L_08A4994C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49954;
L_08A49954:;
    v1 = D_08C2DFA0 - (-8288);
    a1 = v1 - 8288;
    cnd_ = v0 != 0;
    a0 = 11;
    if (cnd_) { goto L_08A49970; }
    goto L_08A49964;
L_08A49964:;
    goto L_08A49968;
L_08A49968:;
    sp = sp + 48;
    return;
L_08A49970:;
    v0 = D_08AEFECC - (-308);
    f4 = BITSF(LD32(v1-8288));
    f7 = BITSF(LD32(v0-308));
    v1 = D_08AEFED4 - (-300);
    v0 = D_08AEFED0 - (-304);
    f0 = f4 + f7;
    f3 = BITSF(LD32(a1+4));
    f6 = BITSF(LD32(v0-304));
    f2 = BITSF(LD32(v1-300));
    ST32(sp+20, FBITS(f3));
    f5 = f3 + f6;
    f1 = f4 + f2;
    f0 = f0 - f2;
    ST32(sp, FBITS(f4));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+28, FBITS(f5));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f7));
    ST32(sp+12, FBITS(f6));
    v0 = func_08A4CB34(a0);
    goto L_08A499C4;
L_08A499C4:;
    a2 = 0x99ff0000u;
    a3 = v0 + 0;
    a2 = a2 | 0xffff;
    a0 = 5;
    a1 = sp + 0;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A499DC;
L_08A499DC:;
    a0 = D_08B2C12C - (-16084);
    a1 = 1;
    a0 = a0 - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A499EC;
L_08A499EC:;
    v0 = func_08901790();
    goto L_08A499F4;
L_08A499F4:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49A00;
L_08A49A00:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A49A08;
L_08A49A08:;
    a1 = 0x4f000000u;
    a0 = 97;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49A18;
L_08A49A18:;
    a0 = v0 + 0;
    v0 = D_08AEFED8 - (-296);
    f12 = BITSF(0);
    f14 = BITSF(LD32(v0-296));
    a1 = sp + 16;
    f13 = f12;
    f15 = f14;
    a2 = (u32)-1;
    a3 = 452;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49A40;
L_08A49A40:;
    goto L_08A49968;
}

/* 08A49A48 */
void func_08A49A48(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A49A48:;
    sp = sp - 64;
    s4 = a0 + 0;
    a1 = LD32(a0);
    v0 = LD_U8(a1+105);
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A49AD4; }
    goto L_08A49A90;
L_08A49A90:;
    v1 = LD32(a1+16);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A49AA0;
L_08A49AA0:;
    v0 = v1 << 2;
    v1 = D_08AE548C - (21644);
    v1 = v1 + 21644;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A49ABCu: goto L_08A49ABC; case 0x08A49AD4u: goto L_08A49AD4; case 0x08A49CA8u: goto L_08A49CA8; case 0x08A4A08Cu: goto L_08A4A08C; case 0x08A4A0D0u: goto L_08A4A0D0; case 0x08A4A460u: goto L_08A4A460; default: rs_break(0, 0x08a49ab4); }
L_08A49ABC:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49AC4;
L_08A49AC4:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49ACC;
L_08A49ACC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s4+1188, 0); goto L_08A49C8C; }
    goto L_08A49AD4;
L_08A49AD4:;
    v0 = s3 < 0x7u;
    goto L_08A49AD8;
L_08A49AD8:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A49B08; }
    goto L_08A49AE0;
L_08A49AE0:;
    v0 = s3 << 2;
    v0 = v0 + s3;
    v0 = v0 << 2;
    v0 = v0 + s4;
    v1 = v0 + 1192;
    goto L_08A49AF4;
L_08A49AF4:;
    a0 = a0 + 1;
    v0 = a0 < 0x7u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 20;
    if (cnd_) { goto L_08A49AF4; }
    goto L_08A49B08;
L_08A49B08:;
    cnd_ = s3 != 0;
    if (cnd_) { a0 = D_08AE5424 - (21540); goto L_08A49B48; }
    goto L_08A49B10;
L_08A49B10:;
    goto L_08A49B14;
L_08A49B14:;
    sp = sp + 64;
    return;
L_08A49B48:;
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49B50;
L_08A49B50:;
    a0 = v0 + 0;
    fp = D_08AEFEDC - (-292);
    func_088CD5B0(a0);
    goto L_08A49B5C;
L_08A49B5C:;
    s1 = 0 + 0;
    cnd_ = s3 == 0;
    f20 = BITSF(LD32(fp-292));
    if (cnd_) { goto L_08A49BEC; }
    goto L_08A49B68;
L_08A49B68:;
    v0 = D_08AEFEEC - (-276);
    f21 = BITSF(LD32(v0-276));
    s2 = 0x7fff0000u;
    s5 = D_08AEFEE8 - (-280);
    s2 = s2 | 0xfffb;
    s7 = D_08AEFEE0 - (-288);
    s6 = D_08AEFEE4 - (-284);
    s0 = s4 + 0;
    goto L_08A49B88;
L_08A49B88:;
    v1 = LD32(s0+1188);
    v0 = v1 - 4;
    v0 = s2 < v0;
    v1 = v1 ^ 0x8;
    v0 = v0 ^ 0x1;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s6-284));
    if (cnd_) { goto L_08A49BB0; }
    goto L_08A49BAC;
L_08A49BAC:;
    f0 = BITSF(LD32(s7-288));
    goto L_08A49BB0;
L_08A49BB0:;
    ST32(s0+1204, FBITS(f0));
    a1 = (u32)-1;
    s1 = s1 + 1;
    ST32(s0+1196, FBITS(f0));
    a0 = LD32(s0+1192);
    f12 = BITSF(LD32(s5-280));
    f0 = func_088CB674(a0, a1, f12);
    goto L_08A49BCC;
L_08A49BCC:;
    f1 = BITSF(LD32(s0+1204));
    v0 = s1 < s3;
    f1 = f1 + f0;
    f1 = f1 + f21;
    ST32(s0+1204, FBITS(f1));
    f20 = f20 + f1;
    cnd_ = v0 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_08A49B88; }
    goto L_08A49BEC;
L_08A49BEC:;
    v0 = D_08AEFEF0 - (-272);
    f0 = BITSF(LD32(v0-272));
    a0 = s3 - 1;
    a1 = 1;
    f0 = f20 - f0;
    a0 = (s32)a0 > (s32)a1 ? a0 : a1;
    f2 = BITSF(LD32(fp-292));
    f1 = BITSF(F2I(f0, 1));
    ST32(s4+1200, FBITS(f2));
    v1 = FBITS(f1);
    v0 = 0 - v1;
    { s32 x_ = (s32)v0, y_ = (s32)a0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v1 = 0 + 0;
    v0 = lo;
    cnd_ = s3 == a1;
    v1 = (s32)v0 > (s32)v1 ? v0 : v1;
    if (cnd_) { goto L_08A49C74; }
    goto L_08A49C2C;
L_08A49C2C:;
    a0 = 1;
    v0 = a0 < s3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A49B14; }
    goto L_08A49C3C;
L_08A49C3C:;
    f0 = BITSF(v1);
    v1 = s4 + 20;
    f2 = (float)(s32)FBITS(f0);
    goto L_08A49C48;
L_08A49C48:;
    f0 = BITSF(LD32(v1+1180));
    f1 = BITSF(LD32(v1+1184));
    a0 = a0 + 1;
    v0 = a0 < s3;
    f0 = f0 + f1;
    f0 = f0 + f2;
    ST32(v1+1200, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 20;
    if (cnd_) { goto L_08A49C48; }
    goto L_08A49C6C;
L_08A49C6C:;
    goto L_08A49B14;
L_08A49C74:;
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f2;
    ST32(s4+1200, FBITS(f0));
    goto L_08A49B10;
L_08A49C88:;
    ST32(s4+1188, 0);
    goto L_08A49C8C;
L_08A49C8C:;
    a1 = 0x4f000000u;
    a0 = 88;
    goto L_08A49C94;
L_08A49C94:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49C9C;
L_08A49C9C:;
    s3 = 1;
    ST32(s4+1192, v0);
    goto L_08A49AD4;
L_08A49CA8:;
    v1 = LD32(a1+88);
    s0 = 1;
    cnd_ = v1 == s0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08A4A034; }
    goto L_08A49CB8;
L_08A49CB8:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A49F34; }
    goto L_08A49CC0;
L_08A49CC0:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A49CE8; }
    goto L_08A49CC8;
L_08A49CC8:;
    cnd_ = v1 != v0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A49CD0;
L_08A49CD0:;
    v0 = D_08C2DD82 - (-8830);
    v1 = LD_U8(v0-8830);
    cnd_ = v1 == 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A49CE0;
L_08A49CE0:;
    ST32(s4+1188, 0);
    goto L_08A49C8C;
L_08A49CE8:;
    a0 = a1 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49CF0;
L_08A49CF0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49CF8;
L_08A49CF8:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A49D00;
L_08A49D00:;
    v0 = 3;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 69;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49D18;
L_08A49D18:;
    v1 = D_08C2D8CE - (-10034);
    a0 = LD_U8(v1-10034);
    cnd_ = a0 == 0;
    ST32(s4+1192, v0);
    if (cnd_) { goto L_08A49D70; }
    goto L_08A49D28;
L_08A49D28:;
    s0 = s4 + 20;
    v0 = 5;
    ST32(s0+1188, v0);
    a1 = 0x4f000000u;
    a0 = 81;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49D44;
L_08A49D44:;
    s1 = s4 + 40;
    ST32(s0+1192, v0);
    a1 = 0x4f000000u;
    v0 = 8;
    a0 = 68;
    ST32(s1+1188, v0);
    goto L_08A49D5C;
L_08A49D5C:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49D64;
L_08A49D64:;
    s3 = 3;
    ST32(s1+1192, v0);
    goto L_08A49AD4;
L_08A49D70:;
    s0 = s4 + 20;
    v0 = 5;
    ST32(s0+1188, v0);
    a1 = 0x4f000000u;
    a0 = 80;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49D8C;
L_08A49D8C:;
    ST32(s0+1192, v0);
    a0 = 0xecea0000u;
    a0 = a0 | 0x2eb3;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49D9C;
L_08A49D9C:;
    s3 = 2;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A49DAC; }
    goto L_08A49DA8;
L_08A49DA8:;
    v1 = LD32(v0+156);
    goto L_08A49DAC;
L_08A49DAC:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A49E00; }
    goto L_08A49DB4;
L_08A49DB4:;
    v0 = 0xe5020000u;
    v0 = v0 | 0x5703;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A49F2C; }
    goto L_08A49DC4;
L_08A49DC4:;
    cnd_ = v0 != 0;
    v0 = 0xffeb0000u;
    if (cnd_) { goto L_08A49EA8; }
    goto L_08A49DCC;
L_08A49DCC:;
    v0 = 0xe5c0000u;
    v0 = v0 | 0xe9ec;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A49EA0; }
    goto L_08A49DDC;
L_08A49DDC:;
    cnd_ = v0 != 0;
    v0 = 0x608b0000u;
    if (cnd_) { goto L_08A49E58; }
    goto L_08A49DE4;
L_08A49DE4:;
    v0 = 0xe5c0000u;
    v0 = v0 | 0xe9ea;
    cnd_ = v1 == v0;
    v0 = 0xe5c0000u;
    if (cnd_) { goto L_08A49E4C; }
    goto L_08A49DF4;
L_08A49DF4:;
    v0 = v0 | 0xe9eb;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = 2; goto L_08A49E38; }
    goto L_08A49E00;
L_08A49E00:;
    s0 = s3 << 2;
    goto L_08A49E04;
L_08A49E04:;
    s0 = s0 + s3;
    s0 = s0 << 2;
    v0 = 8;
    if (a0 != 0) v0 = 0;
    s0 = s0 + s4;
    goto L_08A49E18;
L_08A49E18:;
    ST32(s0+1188, v0);
    a1 = 0x4f000000u;
    a0 = 68;
    goto L_08A49E24;
L_08A49E24:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49E2C;
L_08A49E2C:;
    s3 = s3 + 1;
    goto L_08A49E30;
L_08A49E30:;
    ST32(s0+1192, v0);
    goto L_08A49AD4;
L_08A49E38:;
    a1 = 1;
    goto L_08A49E3C;
L_08A49E3C:;
    s0 = s3 << 2;
    { rv_t r_ = func_08A3BB3C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49E44;
L_08A49E44:;
    a0 = v0 + 0;
    goto L_08A49E04;
L_08A49E4C:;
    a0 = 2;
    goto L_08A49E50;
L_08A49E50:;
    a1 = 0 + 0;
    goto L_08A49E3C;
L_08A49E58:;
    v0 = v0 | 0x64f3;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A49E98; }
    goto L_08A49E64;
L_08A49E64:;
    cnd_ = v0 != 0;
    v0 = 0x608b0000u;
    if (cnd_) { goto L_08A49E80; }
    goto L_08A49E6C;
L_08A49E6C:;
    v0 = v0 | 0x64f2;
    cnd_ = v1 != v0;
    if (cnd_) { s0 = s3 << 2; goto L_08A49E04; }
    goto L_08A49E78;
L_08A49E78:;
    a0 = 0 + 0;
    goto L_08A49E50;
L_08A49E80:;
    v0 = v0 | 0x64f4;
    cnd_ = v1 != v0;
    if (cnd_) { s0 = s3 << 2; goto L_08A49E04; }
    goto L_08A49E8C;
L_08A49E8C:;
    a0 = 0 + 0;
    goto L_08A49E90;
L_08A49E90:;
    a1 = 2;
    goto L_08A49E3C;
L_08A49E98:;
    a0 = 0 + 0;
    goto L_08A49E38;
L_08A49EA0:;
    a0 = 2;
    goto L_08A49E90;
L_08A49EA8:;
    v0 = v0 | 0x7ee2;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_08A49F24; }
    goto L_08A49EB4;
L_08A49EB4:;
    cnd_ = v0 != 0;
    v0 = 0xffeb0000u;
    if (cnd_) { goto L_08A49EE8; }
    goto L_08A49EBC;
L_08A49EBC:;
    v0 = 0xe5020000u;
    v0 = v0 | 0x5704;
    cnd_ = v1 == v0;
    v0 = 0xe5020000u;
    if (cnd_) { goto L_08A49EE0; }
    goto L_08A49ECC;
L_08A49ECC:;
    v0 = v0 | 0x5705;
    cnd_ = v1 != v0;
    if (cnd_) { s0 = s3 << 2; goto L_08A49E04; }
    goto L_08A49ED8;
L_08A49ED8:;
    a0 = 1;
    goto L_08A49E90;
L_08A49EE0:;
    a0 = 1;
    goto L_08A49E38;
L_08A49EE8:;
    v0 = v0 | 0x7ee4;
    cnd_ = v1 == v0;
    v0 = v1 < v0;
    if (cnd_) { goto L_08A49F1C; }
    goto L_08A49EF4;
L_08A49EF4:;
    cnd_ = v0 != 0;
    v0 = 0xffeb0000u;
    if (cnd_) { goto L_08A49F14; }
    goto L_08A49EFC;
L_08A49EFC:;
    v0 = v0 | 0x7ee5;
    cnd_ = v1 != v0;
    if (cnd_) { s0 = s3 << 2; goto L_08A49E04; }
    goto L_08A49F08;
L_08A49F08:;
    a0 = 3;
    a1 = 3;
    goto L_08A49E3C;
L_08A49F14:;
    a0 = 3;
    goto L_08A49E38;
L_08A49F1C:;
    a0 = 3;
    goto L_08A49E90;
L_08A49F24:;
    a0 = 3;
    goto L_08A49E50;
L_08A49F2C:;
    a0 = 1;
    goto L_08A49E50;
L_08A49F34:;
    cnd_ = v1 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A49F3C;
L_08A49F3C:;
    a0 = a1 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A49F44;
L_08A49F44:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A49F4C;
L_08A49F4C:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A49F54;
L_08A49F54:;
    v0 = D_08C2DFB0 - (-8272);
    v1 = LD_U8(v0-8272);
    cnd_ = v1 == 0;
    v0 = 6;
    if (cnd_) { goto L_08A4A014; }
    goto L_08A49F64;
L_08A49F64:;
    s1 = s3 << 2;
    s1 = s1 + s3;
    s1 = s1 << 2;
    s1 = s1 + s4;
    s3 = s3 + 1;
    ST32(s1+1188, s0);
    a1 = 0x4f000000u;
    s0 = s3 << 2;
    a0 = 64;
    a1 = a1 | 0x8c3a;
    s0 = s0 + s3;
    v0 = func_0897A064(a0, a1);
    goto L_08A49F94;
L_08A49F94:;
    s0 = s0 << 2;
    s0 = s0 + s4;
    ST32(s1+1192, v0);
    v0 = 2;
    a1 = 0x4f000000u;
    ST32(s0+1188, v0);
    a0 = 65;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A49FB8;
L_08A49FB8:;
    ST32(s0+1192, v0);
    s3 = s3 + 1;
    a0 = LD32(s4);
    v0 = func_08A3B36C(a0);
    goto L_08A49FC8;
L_08A49FC8:;
    cnd_ = v0 == 0;
    s0 = s3 << 2;
    if (cnd_) { goto L_08A49FE0; }
    goto L_08A49FD0;
L_08A49FD0:;
    a0 = LD32(s4);
    v0 = func_08A3B3C8(a0);
    goto L_08A49FD8;
L_08A49FD8:;
    cnd_ = v0 == 0;
    s0 = s3 << 2;
    if (cnd_) { goto L_08A4A000; }
    goto L_08A49FE0;
L_08A49FE0:;
    s0 = s0 + s3;
    s0 = s0 << 2;
    s0 = s0 + s4;
    v0 = 8;
    ST32(s0+1188, v0);
    goto L_08A49FF4;
L_08A49FF4:;
    a1 = 0x4f000000u;
    a0 = 63;
    goto L_08A49E24;
L_08A4A000:;
    s0 = s0 + s3;
    s0 = s0 << 2;
    s0 = s0 + s4;
    ST32(s0+1188, 0);
    goto L_08A49FF4;
L_08A4A014:;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 127;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A028;
L_08A4A028:;
    ST32(s4+1192, v0);
    s3 = 1;
    goto L_08A49F64;
L_08A4A034:;
    a0 = a1 + 0;
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A03C;
L_08A4A03C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A044;
L_08A4A044:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A04C;
L_08A4A04C:;
    v0 = 3;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 67;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A064;
L_08A4A064:;
    s0 = s4 + 20;
    ST32(s4+1192, v0);
    a1 = 0x4f000000u;
    a0 = 66;
    ST32(s0+1188, 0);
    a1 = a1 | 0x8c3a;
    s3 = 2;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A084;
L_08A4A084:;
    ST32(s0+1192, v0);
    goto L_08A49AD4;
L_08A4A08C:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A094;
L_08A4A094:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A09C;
L_08A4A09C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s4); goto L_08A4A0B8; }
    goto L_08A4A0A4;
L_08A4A0A4:;
    v0 = D_08C2DD85 - (-8827);
    v1 = LD_U8(v0-8827);
    cnd_ = v1 == 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A0B4;
L_08A4A0B4:;
    v0 = LD32(s4);
    goto L_08A4A0B8;
L_08A4A0B8:;
    v1 = LD_U8(v0+125);
    cnd_ = v1 != 0;
    ST32(s4+1188, 0);
    if (cnd_) { goto L_08A49C8C; }
    goto L_08A4A0C4;
L_08A4A0C4:;
    a1 = 0x4f000000u;
    a0 = 93;
    goto L_08A49C94;
L_08A4A0D0:;
    a0 = LD32(a1+108);
    v0 = a0 < 0x6u;
    cnd_ = v0 == 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A0E0;
L_08A4A0E0:;
    v1 = D_08AE54B4 - (21684);
    v0 = a0 << 2;
    v1 = v1 + 21684;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A49C88u: goto L_08A49C88; case 0x08A4A0FCu: goto L_08A4A0FC; case 0x08A4A21Cu: goto L_08A4A21C; case 0x08A4A298u: goto L_08A4A298; case 0x08A4A2FCu: goto L_08A4A2FC; case 0x08A4A3BCu: goto L_08A4A3BC; default: rs_break(0, 0x08a4a0f4); }
L_08A4A0FC:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A104;
L_08A4A104:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A10C;
L_08A4A10C:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A114;
L_08A4A114:;
    v0 = D_08C2DFB0 - (-8272);
    v1 = LD_U8(v0-8272);
    cnd_ = v1 == 0;
    v0 = 6;
    if (cnd_) { goto L_08A4A1FC; }
    goto L_08A4A124;
L_08A4A124:;
    s1 = s3 << 2;
    s1 = s1 + s3;
    s1 = s1 << 2;
    s1 = s1 + s4;
    v0 = 1;
    s3 = s3 + 1;
    ST32(s1+1188, v0);
    s0 = s3 << 2;
    a1 = 0x4f000000u;
    a0 = 82;
    a1 = a1 | 0x8c3a;
    s0 = s0 + s3;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A158;
L_08A4A158:;
    s0 = s0 << 2;
    s0 = s0 + s4;
    ST32(s1+1192, v0);
    v0 = 2;
    a1 = 0x4f000000u;
    ST32(s0+1188, v0);
    a0 = 71;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A17C;
L_08A4A17C:;
    ST32(s0+1192, v0);
    s3 = s3 + 1;
    a0 = LD32(s4);
    v0 = func_08A3B36C(a0);
    goto L_08A4A18C;
L_08A4A18C:;
    cnd_ = v0 == 0;
    s0 = s3 << 2;
    if (cnd_) { goto L_08A4A1A4; }
    goto L_08A4A194;
L_08A4A194:;
    a0 = LD32(s4);
    v0 = func_08A3B3A4(a0);
    goto L_08A4A19C;
L_08A4A19C:;
    cnd_ = v0 == 0;
    s0 = s3 << 2;
    if (cnd_) { goto L_08A4A1C4; }
    goto L_08A4A1A4;
L_08A4A1A4:;
    s0 = s0 + s3;
    s0 = s0 << 2;
    s0 = s0 + s4;
    v0 = 8;
    ST32(s0+1188, v0);
    goto L_08A4A1B8;
L_08A4A1B8:;
    a1 = 0x4f000000u;
    a0 = 70;
    goto L_08A49E24;
L_08A4A1C4:;
    a0 = LD32(s4);
    v0 = func_08A3B440(a0);
    goto L_08A4A1CC;
L_08A4A1CC:;
    cnd_ = v0 != 0;
    v1 = 8;
    if (cnd_) { goto L_08A4A1E4; }
    goto L_08A4A1D4;
L_08A4A1D4:;
    v0 = LD32(s4);
    a0 = LD32(v0+16);
    cnd_ = a0 == v1;
    if (cnd_) { s0 = s3 << 2; goto L_08A4A1A4; }
    goto L_08A4A1E4;
L_08A4A1E4:;
    s0 = s3 << 2;
    s0 = s0 + s3;
    s0 = s0 << 2;
    s0 = s0 + s4;
    ST32(s0+1188, 0);
    goto L_08A4A1B8;
L_08A4A1FC:;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 127;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A210;
L_08A4A210:;
    ST32(s4+1192, v0);
    s3 = 1;
    goto L_08A4A124;
L_08A4A21C:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A224;
L_08A4A224:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A22C;
L_08A4A22C:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A234;
L_08A4A234:;
    v0 = 3;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 67;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A24C;
L_08A4A24C:;
    ST32(s4+1192, v0);
    a0 = LD32(s4);
    v0 = func_08A3B4E0(a0);
    goto L_08A4A258;
L_08A4A258:;
    cnd_ = v0 == 0;
    s0 = s4 + 20;
    if (cnd_) { goto L_08A4A270; }
    goto L_08A4A260;
L_08A4A260:;
    a0 = LD32(s4);
    v0 = func_08A3B518(a0);
    goto L_08A4A268;
L_08A4A268:;
    cnd_ = v0 != 0;
    s0 = s4 + 20;
    if (cnd_) { goto L_08A4A28C; }
    goto L_08A4A270;
L_08A4A270:;
    ST32(s0+1188, 0);
    goto L_08A4A274;
L_08A4A274:;
    a1 = 0x4f000000u;
    a0 = 72;
    goto L_08A4A27C;
L_08A4A27C:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A284;
L_08A4A284:;
    s3 = 2;
    goto L_08A49E30;
L_08A4A28C:;
    v0 = 8;
    ST32(s0+1188, v0);
    goto L_08A4A274;
L_08A4A298:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A2A0;
L_08A4A2A0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A2A8;
L_08A4A2A8:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A2B0;
L_08A4A2B0:;
    v0 = 3;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 67;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A2C8;
L_08A4A2C8:;
    v1 = LD32(s4);
    ST32(s4+1192, v0);
    v0 = 8;
    a0 = LD32(v1+16);
    cnd_ = a0 == v0;
    s0 = s4 + 20;
    if (cnd_) { goto L_08A4A2F0; }
    goto L_08A4A2E0;
L_08A4A2E0:;
    a1 = 0x4f000000u;
    a0 = 73;
    goto L_08A4A2E8;
L_08A4A2E8:;
    ST32(s0+1188, 0);
    goto L_08A4A27C;
L_08A4A2F0:;
    a1 = 0x4f000000u;
    a0 = 77;
    goto L_08A4A2E8;
L_08A4A2FC:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A304;
L_08A4A304:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A30C;
L_08A4A30C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 8; goto L_08A4A374; }
    goto L_08A4A314;
L_08A4A314:;
    v0 = LD32(s4);
    v1 = LD_U8(v0+126);
    cnd_ = v1 == 0;
    v0 = 3;
    if (cnd_) { goto L_08A4A328; }
    goto L_08A4A324;
L_08A4A324:;
    v0 = 8;
    goto L_08A4A328;
L_08A4A328:;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 67;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A33C;
L_08A4A33C:;
    ST32(s4+1192, v0);
    s0 = s4 + 20;
    v0 = 1;
    ST32(s0+1188, v0);
    a1 = 0x4f000000u;
    a0 = 74;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A35C;
L_08A4A35C:;
    s1 = s4 + 40;
    a1 = 0x4f000000u;
    a0 = 75;
    ST32(s0+1192, v0);
    goto L_08A4A36C;
L_08A4A36C:;
    ST32(s1+1188, 0);
    goto L_08A49D5C;
L_08A4A374:;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 67;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A388;
L_08A4A388:;
    s0 = s4 + 20;
    ST32(s4+1192, v0);
    v0 = 1;
    a1 = 0x4f000000u;
    ST32(s0+1188, v0);
    a0 = 74;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A3A8;
L_08A4A3A8:;
    ST32(s0+1192, v0);
    s1 = s4 + 40;
    a1 = 0x4f000000u;
    a0 = 113;
    goto L_08A4A36C;
L_08A4A3BC:;
    a0 = LD32(s4);
    { u64 r_ = func_08A384D4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A3C4;
L_08A4A3C4:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A3CC;
L_08A4A3CC:;
    cnd_ = v0 != 0;
    v0 = s3 < 0x7u;
    if (cnd_) { goto L_08A49AD8; }
    goto L_08A4A3D4;
L_08A4A3D4:;
    v0 = 3;
    ST32(s4+1188, v0);
    a1 = 0x4f000000u;
    a0 = 69;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A3EC;
L_08A4A3EC:;
    v1 = D_08C2D8CE - (-10034);
    a0 = LD_U8(v1-10034);
    cnd_ = a0 == 0;
    ST32(s4+1192, v0);
    if (cnd_) { goto L_08A4A438; }
    goto L_08A4A3FC;
L_08A4A3FC:;
    s0 = s4 + 20;
    v0 = 5;
    ST32(s0+1188, v0);
    a1 = 0x4f000000u;
    a0 = 81;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A418;
L_08A4A418:;
    s3 = 2;
    ST32(s0+1192, v0);
    goto L_08A4A420;
L_08A4A420:;
    s0 = s3 << 2;
    s0 = s0 + s3;
    s0 = s0 << 2;
    s0 = s0 + s4;
    v0 = 8;
    goto L_08A49E18;
L_08A4A438:;
    s0 = s4 + 20;
    v0 = 5;
    ST32(s0+1188, v0);
    a1 = 0x4f000000u;
    a0 = 80;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A454;
L_08A4A454:;
    ST32(s0+1192, v0);
    s3 = 2;
    goto L_08A4A420;
L_08A4A460:;
    ST32(s4+1188, 0);
    a1 = 0x4f000000u;
    a0 = 88;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A474;
L_08A4A474:;
    ST32(s4+1192, v0);
    s3 = 1;
    goto L_08A49AD4;
}

/* 08A4A480 */
void func_08A4A480(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A4A480:;
    sp = sp - 80;
    v0 = D_08AEFEF4 - (-268);
    a2 = 0x60000000u;
    a3 = (u32)-1;
    a1 = sp + 0;
    s4 = D_08B2C12C - (-16084);
    s0 = a0 + 0;
    a0 = 13;
    f0 = BITSF(LD32(v0-268));
    v0 = D_08AEFF04 - (-252);
    ST32(sp, 0);
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(v0-252));
    v0 = D_08AEFEF8 - (-264);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-264));
    ST32(sp+12, FBITS(f0));
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A4A4F0;
L_08A4A4F0:;
    a1 = 1;
    a0 = s4 - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A4FC;
L_08A4A4FC:;
    v0 = func_08901790();
    goto L_08A4A504;
L_08A4A504:;
    a0 = s0 + 0;
    func_08A46B34(a0);
    goto L_08A4A50C;
L_08A4A50C:;
    a0 = D_08AE5424 - (21540);
    a0 = a0 + 21540;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A518;
L_08A4A518:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A4A520;
L_08A4A520:;
    v0 = LD32(s0+1192);
    cnd_ = v0 == 0;
    v0 = D_08AEFEFC - (-260);
    if (cnd_) { goto L_08A4A5E0; }
    goto L_08A4A52C;
L_08A4A52C:;
    f23 = BITSF(LD32(v0-260));
    v1 = D_08AEFF08 - (-248);
    v0 = D_08AEFF0C - (-244);
    f22 = BITSF(LD32(v1-248));
    f21 = BITSF(LD32(v0-244));
    s1 = 8;
    s3 = D_08AEFF00 - (-256);
    s2 = (u32)-1;
    v0 = LD32(s0+1188);
    goto L_08A4A550;
L_08A4A550:;
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A4A5D0; }
    goto L_08A4A558;
L_08A4A558:;
    f0 = BITSF(LD32(s0+1200));
    f1 = BITSF(LD32(s0+1196));
    f20 = BITSF(LD32(s3-256));
    ST32(sp+28, FBITS(f23));
    ST32(sp+16, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+20, FBITS(f20));
    v0 = func_08A4A610(a0);
    goto L_08A4A578;
L_08A4A578:;
    a3 = v0 + 0;
    a1 = sp + 16;
    a0 = 14;
    cnd_ = v0 == s2;
    a2 = (u32)-1;
    if (cnd_) { goto L_08A4A5A0; }
    goto L_08A4A58C;
L_08A4A58C:;
    func_08A4A868(a0, a1, a2, a3);
    goto L_08A4A594;
L_08A4A594:;
    a1 = 1;
    a0 = s4 - 16084;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A5A0;
L_08A4A5A0:;
    f0 = BITSF(LD32(s0+1196));
    f12 = BITSF(LD32(sp+16));
    a0 = LD32(s0+1192);
    f13 = f20;
    f12 = f12 + f0;
    a1 = 0 + 0;
    f14 = f21;
    f15 = f21;
    f12 = f12 + f22;
    a2 = (u32)-1;
    a3 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4A5D0;
L_08A4A5D0:;
    s0 = s0 + 20;
    v0 = LD32(s0+1192);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+1188); goto L_08A4A550; }
    goto L_08A4A5E0;
L_08A4A5E0:;
    sp = sp + 80;
    return;
}

/* 08A4A610 */
u32 func_08A4A610(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4A610:;
    sp = sp - 16;
    v0 = a0 < 0x8u;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A4A650; }
    goto L_08A4A624;
L_08A4A624:;
    v1 = D_08AE54CC - (21708);
    v0 = a0 << 2;
    v1 = v1 + 21708;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A4A640u: goto L_08A4A640; case 0x08A4A660u: goto L_08A4A660; case 0x08A4A668u: goto L_08A4A668; case 0x08A4A670u: goto L_08A4A670; case 0x08A4A678u: goto L_08A4A678; case 0x08A4A680u: goto L_08A4A680; case 0x08A4A688u: goto L_08A4A688; case 0x08A4A690u: goto L_08A4A690; default: rs_break(0, 0x08a4a638); }
L_08A4A640:;
    a0 = 3;
    goto L_08A4A644;
L_08A4A644:;
    v0 = func_08A4CB34(a0);
    goto L_08A4A64C;
L_08A4A64C:;
    v1 = v0 + 0;
    goto L_08A4A650;
L_08A4A650:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A4A660:;
    a0 = 1;
    goto L_08A4A644;
L_08A4A668:;
    a0 = 2;
    goto L_08A4A644;
L_08A4A670:;
    a0 = 4;
    goto L_08A4A644;
L_08A4A678:;
    a0 = 5;
    goto L_08A4A644;
L_08A4A680:;
    a0 = 6;
    goto L_08A4A644;
L_08A4A688:;
    a0 = 7;
    goto L_08A4A644;
L_08A4A690:;
    a0 = 8;
    goto L_08A4A644;
}

/* 08A4A698 */
void func_08A4A698(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4A698:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_08A4A6B4;
L_08A4A6B4:;
    a0 = s1 + 0;
    s0 = s0 + 1;
    func_08A4A6E0(a0, a1);
    goto L_08A4A6C0;
L_08A4A6C0:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A4A6B4; }
    goto L_08A4A6CC;
L_08A4A6CC:;
    sp = sp + 16;
    return;
}

/* 08A4A6E0 */
void func_08A4A6E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4A6E0:;
    sp = sp - 16;
    v0 = (s32)a1 < 4;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4A710; }
    goto L_08A4A6FC;
L_08A4A6FC:;
    goto L_08A4A700;
L_08A4A700:;
    sp = sp + 16;
    return;
L_08A4A710:;
    a0 = LD32(a0);
    v0 = func_08A385C4(a0, a1);
    goto L_08A4A718;
L_08A4A718:;
    s1 = v0 + 0;
    v1 = D_08AEFF10 - (-240);
    v0 = D_08B1C848 - (-14264);
    f0 = BITSF(LD32(v1-240));
    f1 = BITSF(LD32(v0-14264));
    v0 = D_08AE5174 - (20852);
    v1 = s0 << 2;
    f1 = f1 * f0;
    v0 = v0 + 20852;
    v1 = v1 + v0;
    a1 = LD32(v1);
    f0 = BITSF(F2I(f1, 1));
    a0 = D_08B28E68 - (-29080);
    a0 = a0 - 29080;
    a2 = 1;
    v0 = FBITS(f0);
    s0 = (u32)(s32)(s8)v0;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4A760;
L_08A4A760:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A4A6FC; }
    goto L_08A4A768;
L_08A4A768:;
    v0 = 1;
    cnd_ = s1 == v0;
    v0 = 0xf00000u;
    if (cnd_) { goto L_08A4A7C0; }
    goto L_08A4A774;
L_08A4A774:;
    v0 = (s32)s1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A4A7A8; }
    goto L_08A4A780;
L_08A4A780:;
    cnd_ = s1 != v0;
    if (cnd_) {  goto L_08A4A700; }
    goto L_08A4A788;
L_08A4A788:;
    v0 = 0xff0000u;
    a1 = s0 << 24;
    v0 = v0 | 0xffff;
    goto L_08A4A794;
L_08A4A794:;
    a1 = a1 + v0;
    a2 = 1;
    func_0885E6EC(a0, a1, a2);
    goto L_08A4A7A0;
L_08A4A7A0:;
    goto L_08A4A700;
L_08A4A7A8:;
    cnd_ = s1 != 0;
    if (cnd_) {  goto L_08A4A700; }
    goto L_08A4A7B0;
L_08A4A7B0:;
    v0 = 0x80000u;
    a1 = s0 << 24;
    v0 = v0 | 0x50ff;
    goto L_08A4A794;
L_08A4A7C0:;
    a1 = s0 << 24;
    v0 = v0 | 0x2828;
    goto L_08A4A794;
}

/* 08A4A7CC */
u32 func_08A4A7CC(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4A7CC:;
    sp = sp - 16;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4A814; }
    goto L_08A4A7DC;
L_08A4A7DC:;
    v1 = D_08AE54EC - (21740);
    v0 = a1 << 2;
    v1 = v1 + 21740;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A4A7F8u: goto L_08A4A7F8; case 0x08A4A814u: goto L_08A4A814; case 0x08A4A820u: goto L_08A4A820; case 0x08A4A82Cu: goto L_08A4A82C; case 0x08A4A838u: goto L_08A4A838; case 0x08A4A844u: goto L_08A4A844; case 0x08A4A850u: goto L_08A4A850; case 0x08A4A85Cu: goto L_08A4A85C; default: rs_break(0, 0x08a4a7f0); }
L_08A4A7F8:;
    a1 = 0x4f000000u;
    a0 = 0 + 0;
    goto L_08A4A800;
L_08A4A800:;
    a1 = a1 | 0x8c3a;
    v0 = func_0897A064(a0, a1);
    goto L_08A4A808;
L_08A4A808:;
    sp = sp + 16;
    return v0;
L_08A4A814:;
    v0 = D_08AE547C - (21628);
    v0 = v0 + 21628;
    goto L_08A4A808;
L_08A4A820:;
    a1 = 0x4f000000u;
    a0 = 1;
    goto L_08A4A800;
L_08A4A82C:;
    a1 = 0x4f000000u;
    a0 = 2;
    goto L_08A4A800;
L_08A4A838:;
    a1 = 0x4f000000u;
    a0 = 5;
    goto L_08A4A800;
L_08A4A844:;
    a1 = 0x4f000000u;
    a0 = 6;
    goto L_08A4A800;
L_08A4A850:;
    a1 = 0x4f000000u;
    a0 = 3;
    goto L_08A4A800;
L_08A4A85C:;
    a1 = 0x4f000000u;
    a0 = 4;
    goto L_08A4A800;
}

/* 08A4A868 */
void func_08A4A868(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4A868:;
    sp = sp - 32;
    s3 = D_08B2C12C - (-16084);
    s0 = s3 - 16084;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(s0+64, a2);
    ST32(s0+80, a3);
    f12 = BITSF(LD32(a1));
    f13 = BITSF(LD32(a1+4));
    f14 = BITSF(LD32(a1+8));
    f15 = BITSF(LD32(a1+12));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A4A8B0;
L_08A4A8B0:;
    v0 = 1;
    v1 = s1 < 0x2cu;
    cnd_ = v1 == 0;
    ST32(s0+84, v0);
    if (cnd_) { goto L_08A4AE64; }
    goto L_08A4A8C0;
L_08A4A8C0:;
    v1 = D_08AE5514 - (21780);
    v0 = s1 << 2;
    v1 = v1 + 21780;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A4A8DCu: goto L_08A4A8DC; case 0x08A4A944u: goto L_08A4A944; case 0x08A4A974u: goto L_08A4A974; case 0x08A4A9BCu: goto L_08A4A9BC; case 0x08A4A9E4u: goto L_08A4A9E4; case 0x08A4AA08u: goto L_08A4AA08; case 0x08A4AA48u: goto L_08A4AA48; case 0x08A4AA90u: goto L_08A4AA90; case 0x08A4AAB8u: goto L_08A4AAB8; case 0x08A4AADCu: goto L_08A4AADC; case 0x08A4AB00u: goto L_08A4AB00; case 0x08A4AB44u: goto L_08A4AB44; case 0x08A4AB88u: goto L_08A4AB88; case 0x08A4ABD0u: goto L_08A4ABD0; case 0x08A4ABE8u: goto L_08A4ABE8; case 0x08A4AC08u: goto L_08A4AC08; case 0x08A4AC38u: goto L_08A4AC38; case 0x08A4AC5Cu: goto L_08A4AC5C; case 0x08A4AC84u: goto L_08A4AC84; case 0x08A4ACACu: goto L_08A4ACAC; case 0x08A4ACC4u: goto L_08A4ACC4; case 0x08A4ACDCu: goto L_08A4ACDC; case 0x08A4ACE8u: goto L_08A4ACE8; case 0x08A4ACF4u: goto L_08A4ACF4; case 0x08A4AD18u: goto L_08A4AD18; case 0x08A4AD60u: goto L_08A4AD60; case 0x08A4ADA4u: goto L_08A4ADA4; case 0x08A4ADB8u: goto L_08A4ADB8; case 0x08A4ADFCu: goto L_08A4ADFC; case 0x08A4AE20u: goto L_08A4AE20; case 0x08A4AE44u: goto L_08A4AE44; case 0x08A4AE64u: goto L_08A4AE64; case 0x08A4AE80u: goto L_08A4AE80; case 0x08A4AEC4u: goto L_08A4AEC4; case 0x08A4AEECu: goto L_08A4AEEC; case 0x08A4AF14u: goto L_08A4AF14; case 0x08A4AF34u: goto L_08A4AF34; case 0x08A4AF58u: goto L_08A4AF58; default: rs_break(0, 0x08a4a8d4); }
L_08A4A8DC:;
    f12 = BITSF(0);
    v0 = D_08AEFF14 - (-236);
    v1 = D_08AEFF18 - (-232);
    f14 = BITSF(LD32(v0-236));
    f15 = BITSF(LD32(v1-232));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f13 = f12;
    goto L_08A4A8FC;
L_08A4A8FC:;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4A904;
L_08A4A904:;
    v0 = D_08AEFF1C - (-228);
    v1 = D_08AEFF20 - (-224);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-228));
    f15 = BITSF(LD32(v1-224));
    goto L_08A4A91C;
L_08A4A91C:;
    a0 = s0 + 0;
    goto L_08A4A920;
L_08A4A920:;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A4A928;
L_08A4A928:;
    goto L_08A4A92C;
L_08A4A92C:;
    sp = sp + 32;
    return;
L_08A4A944:;
    v0 = D_08AEFF50 - (-176);
    f12 = BITSF(LD32(v0-176));
    v1 = D_08AEFF58 - (-168);
    v0 = D_08AEFF54 - (-172);
    f14 = BITSF(LD32(v0-172));
    f15 = BITSF(LD32(v1-168));
    a0 = s3 - 16084;
    f13 = f12;
    goto L_08A4A964;
L_08A4A964:;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4A96C;
L_08A4A96C:;
    goto L_08A4A92C;
L_08A4A974:;
    v0 = D_08AEFF5C - (-164);
    v1 = D_08AEFF60 - (-160);
    f12 = BITSF(LD32(v0-164));
    f13 = BITSF(LD32(v1-160));
    v0 = D_08AEFF54 - (-172);
    v1 = D_08AEFF58 - (-168);
    f14 = BITSF(LD32(v0-172));
    f15 = BITSF(LD32(v1-168));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4A9A0;
L_08A4A9A0:;
    v0 = D_08AEFF64 - (-156);
    v1 = D_08AEFF68 - (-152);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-156));
    f15 = BITSF(LD32(v1-152));
    goto L_08A4A91C;
L_08A4A9BC:;
    v0 = D_08AEFF24 - (-220);
    f12 = BITSF(LD32(v0-220));
    v1 = D_08AEFF14 - (-236);
    v0 = D_08AEFF18 - (-232);
    f13 = BITSF(0);
    f14 = BITSF(LD32(v1-236));
    f15 = BITSF(LD32(v0-232));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    goto L_08A4A8FC;
L_08A4A9E4:;
    v0 = D_08AEFF18 - (-232);
    f13 = BITSF(LD32(v0-232));
    v0 = D_08AEFF14 - (-236);
    f12 = BITSF(0);
    f14 = BITSF(LD32(v0-236));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f15 = f13;
    goto L_08A4A8FC;
L_08A4AA08:;
    f12 = BITSF(0);
    v0 = D_08AEFF28 - (-216);
    v1 = D_08AEFF2C - (-212);
    f14 = BITSF(LD32(v0-216));
    f15 = BITSF(LD32(v1-212));
    s0 = s3 - 16084;
    f13 = f12;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AA2C;
L_08A4AA2C:;
    v0 = D_08AEFF30 - (-208);
    v1 = D_08AEFF34 - (-204);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-208));
    f15 = BITSF(LD32(v1-204));
    goto L_08A4A91C;
L_08A4AA48:;
    v0 = D_08AEFF38 - (-200);
    v1 = D_08AEFF3C - (-196);
    f12 = BITSF(LD32(v0-200));
    f13 = BITSF(LD32(v1-196));
    v0 = D_08AEFF40 - (-192);
    v1 = D_08AEFF44 - (-188);
    f14 = BITSF(LD32(v0-192));
    f15 = BITSF(LD32(v1-188));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AA74;
L_08A4AA74:;
    v0 = D_08AEFF48 - (-184);
    v1 = D_08AEFF4C - (-180);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-184));
    f15 = BITSF(LD32(v1-180));
    goto L_08A4A91C;
L_08A4AA90:;
    v0 = D_08AEFF6C - (-148);
    v1 = D_08AEFF70 - (-144);
    f12 = BITSF(LD32(v0-148));
    f13 = BITSF(LD32(v1-144));
    v0 = D_08AEFF74 - (-140);
    v1 = D_08AEFF78 - (-136);
    f14 = BITSF(LD32(v0-140));
    f15 = BITSF(LD32(v1-136));
    goto L_08A4AAB0;
L_08A4AAB0:;
    a0 = s3 - 16084;
    goto L_08A4A964;
L_08A4AAB8:;
    v0 = D_08AEFF7C - (-132);
    v1 = D_08AEFF80 - (-128);
    f12 = BITSF(LD32(v0-132));
    f13 = BITSF(LD32(v1-128));
    v0 = D_08AEFF84 - (-124);
    v1 = D_08AEFF88 - (-120);
    f14 = BITSF(LD32(v0-124));
    f15 = BITSF(LD32(v1-120));
    goto L_08A4AAB0;
L_08A4AADC:;
    v0 = D_08AEFF94 - (-108);
    f14 = BITSF(LD32(v0-108));
    v1 = D_08AEFF90 - (-112);
    v0 = D_08AEFF8C - (-116);
    f12 = BITSF(LD32(v0-116));
    f13 = BITSF(LD32(v1-112));
    a0 = s3 - 16084;
    goto L_08A4AAF8;
L_08A4AAF8:;
    f15 = f14;
    goto L_08A4A964;
L_08A4AB00:;
    v0 = D_08AEFF98 - (-104);
    f12 = BITSF(LD32(v0-104));
    v1 = D_08AEFF9C - (-100);
    v0 = D_08AEFFA0 - (-96);
    f14 = BITSF(LD32(v1-100));
    f15 = BITSF(LD32(v0-96));
    f13 = BITSF(0);
    s0 = s3 - 16084;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AB28;
L_08A4AB28:;
    v0 = D_08AEFFA4 - (-92);
    v1 = D_08AEFFA8 - (-88);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-92));
    f15 = BITSF(LD32(v1-88));
    goto L_08A4A91C;
L_08A4AB44:;
    v0 = D_08AEFF98 - (-104);
    f12 = BITSF(LD32(v0-104));
    v1 = D_08AEFF9C - (-100);
    v0 = D_08AEFFAC - (-84);
    f14 = BITSF(LD32(v1-100));
    f15 = BITSF(LD32(v0-84));
    f13 = BITSF(0);
    s0 = s3 - 16084;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AB6C;
L_08A4AB6C:;
    v0 = D_08AEFFA4 - (-92);
    v1 = D_08AEFFB0 - (-80);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-92));
    f15 = BITSF(LD32(v1-80));
    goto L_08A4A91C;
L_08A4AB88:;
    v0 = D_08AEFF98 - (-104);
    v1 = D_08AEFFB4 - (-76);
    f12 = BITSF(LD32(v0-104));
    f13 = BITSF(LD32(v1-76));
    v0 = D_08AEFF9C - (-100);
    v1 = D_08AEFFB8 - (-72);
    f14 = BITSF(LD32(v0-100));
    f15 = BITSF(LD32(v1-72));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4ABB4;
L_08A4ABB4:;
    v0 = D_08AEFFA4 - (-92);
    v1 = D_08AEFFBC - (-68);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-92));
    f15 = BITSF(LD32(v1-68));
    goto L_08A4A91C;
L_08A4ABD0:;
    f12 = BITSF(0);
    v0 = D_08AEFFC0 - (-64);
    f14 = BITSF(LD32(v0-64));
    a0 = s3 - 16084;
    goto L_08A4ABE0;
L_08A4ABE0:;
    f13 = f12;
    goto L_08A4AAF8;
L_08A4ABE8:;
    v0 = D_08AEFFC4 - (-60);
    f13 = BITSF(LD32(v0-60));
    v1 = D_08AEFF14 - (-236);
    v0 = D_08AEFFC8 - (-56);
    f12 = BITSF(0);
    f14 = BITSF(LD32(v1-236));
    f15 = BITSF(LD32(v0-56));
    goto L_08A4AAB0;
L_08A4AC08:;
    v0 = D_08AEFFCC - (-52);
    v1 = D_08AEFF50 - (-176);
    f12 = BITSF(LD32(v0-52));
    f13 = BITSF(LD32(v1-176));
    v0 = D_08AEFFD0 - (-48);
    v1 = D_08AEFFD4 - (-44);
    f14 = BITSF(LD32(v0-48));
    f15 = BITSF(LD32(v1-44));
    a1 = s3 - 16084;
    a0 = a1 + 0;
    ST8(a1+93, 0);
    goto L_08A4A964;
L_08A4AC38:;
    v0 = D_08AEFFD8 - (-40);
    v1 = D_08AEFF50 - (-176);
    f12 = BITSF(LD32(v0-40));
    f13 = BITSF(LD32(v1-176));
    v0 = D_08AEFF70 - (-144);
    v1 = D_08AEFFD4 - (-44);
    f14 = BITSF(LD32(v0-144));
    f15 = BITSF(LD32(v1-44));
    goto L_08A4AAB0;
L_08A4AC5C:;
    v0 = D_08AEFF50 - (-176);
    f12 = BITSF(LD32(v0-176));
    goto L_08A4AC64;
L_08A4AC64:;
    a0 = s3 - 16084;
    v1 = D_08AEFFDC - (-36);
    f13 = BITSF(LD32(v1-36));
    goto L_08A4AC70;
L_08A4AC70:;
    v0 = D_08AEFFE0 - (-32);
    v1 = D_08AEFFE4 - (-28);
    f14 = BITSF(LD32(v0-32));
    f15 = BITSF(LD32(v1-28));
    goto L_08A4A964;
L_08A4AC84:;
    v0 = D_08AEFF50 - (-176);
    f12 = BITSF(LD32(v0-176));
    goto L_08A4AC8C;
L_08A4AC8C:;
    a0 = s3 - 16084;
    v1 = D_08AEFF38 - (-200);
    f13 = BITSF(LD32(v1-200));
    goto L_08A4AC98;
L_08A4AC98:;
    v0 = D_08AEFFE0 - (-32);
    v1 = D_08AEFF84 - (-124);
    f14 = BITSF(LD32(v0-32));
    f15 = BITSF(LD32(v1-124));
    goto L_08A4A964;
L_08A4ACAC:;
    v0 = D_08AEFF50 - (-176);
    v1 = D_08AEFFE8 - (-24);
    f12 = BITSF(LD32(v0-176));
    f13 = BITSF(LD32(v1-24));
    a0 = s3 - 16084;
    goto L_08A4AC70;
L_08A4ACC4:;
    v0 = D_08AEFF50 - (-176);
    v1 = D_08AEFFEC - (-20);
    f12 = BITSF(LD32(v0-176));
    f13 = BITSF(LD32(v1-20));
    a0 = s3 - 16084;
    goto L_08A4AC98;
L_08A4ACDC:;
    v0 = D_08AEFFF0 - (-16);
    f12 = BITSF(LD32(v0-16));
    goto L_08A4AC64;
L_08A4ACE8:;
    v0 = D_08AEFFF0 - (-16);
    f12 = BITSF(LD32(v0-16));
    goto L_08A4AC8C;
L_08A4ACF4:;
    v0 = D_08AEFFF4 - (-12);
    v1 = D_08AEFFF8 - (-8);
    f12 = BITSF(LD32(v0-12));
    f13 = BITSF(LD32(v1-8));
    v0 = D_08AEFFFC - (-4);
    v1 = D_08AEFFB4 - (-76);
    f14 = BITSF(LD32(v0-4));
    f15 = BITSF(LD32(v1-76));
    goto L_08A4AAB0;
L_08A4AD18:;
    v0 = D_08AF0000;
    v1 = D_08AF0004 - (4);
    f12 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v1+4));
    v0 = D_08AF0008 - (8);
    v1 = D_08AF000C - (12);
    f14 = BITSF(LD32(v0+8));
    f15 = BITSF(LD32(v1+12));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AD44;
L_08A4AD44:;
    v0 = D_08AF0010 - (16);
    v1 = D_08AF0014 - (20);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0+16));
    f15 = BITSF(LD32(v1+20));
    goto L_08A4A91C;
L_08A4AD60:;
    v0 = D_08AEFF78 - (-136);
    f14 = BITSF(LD32(v0-136));
    v0 = D_08AEFF50 - (-176);
    f12 = BITSF(LD32(v0-176));
    goto L_08A4AD70;
L_08A4AD70:;
    s0 = s3 - 16084;
    v1 = D_08AF0018 - (24);
    f13 = BITSF(LD32(v1+24));
    f15 = f14;
    a0 = s0 + 0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AD88;
L_08A4AD88:;
    v0 = D_08AF001C - (28);
    f14 = BITSF(LD32(v0+28));
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    a0 = s0 + 0;
    f15 = f14;
    goto L_08A4A920;
L_08A4ADA4:;
    v0 = D_08AEFF78 - (-136);
    f14 = BITSF(LD32(v0-136));
    v0 = D_08AEFFB8 - (-72);
    f12 = BITSF(LD32(v0-72));
    goto L_08A4AD70;
L_08A4ADB8:;
    f12 = BITSF(0);
    v0 = D_08AEFF58 - (-168);
    v1 = D_08AF0020 - (32);
    f14 = BITSF(LD32(v0-168));
    f15 = BITSF(LD32(v1+32));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f13 = f12;
    goto L_08A4ADD8;
L_08A4ADD8:;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4ADE0;
L_08A4ADE0:;
    v0 = D_08AEFF68 - (-152);
    v1 = D_08AF0024 - (36);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0-152));
    f15 = BITSF(LD32(v1+36));
    goto L_08A4A91C;
L_08A4ADFC:;
    v0 = D_08AF0020 - (32);
    f13 = BITSF(LD32(v0+32));
    v0 = D_08AEFF58 - (-168);
    f12 = BITSF(0);
    f14 = BITSF(LD32(v0-168));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    goto L_08A4AE18;
L_08A4AE18:;
    f15 = f13;
    goto L_08A4ADD8;
L_08A4AE20:;
    v0 = D_08AEFF58 - (-168);
    f12 = BITSF(LD32(v0-168));
    v0 = D_08AF0020 - (32);
    f13 = BITSF(0);
    f15 = BITSF(LD32(v0+32));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f14 = f12;
    goto L_08A4ADD8;
L_08A4AE44:;
    v0 = D_08AEFF58 - (-168);
    f12 = BITSF(LD32(v0-168));
    v1 = D_08AF0020 - (32);
    f13 = BITSF(LD32(v1+32));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f14 = f12;
    goto L_08A4AE18;
L_08A4AE64:;
    v0 = D_08AEFFC0 - (-64);
    v1 = s3 - 16084;
    f12 = BITSF(0);
    f14 = BITSF(LD32(v0-64));
    ST32(v1+84, 0);
    a0 = v1 + 0;
    goto L_08A4ABE0;
L_08A4AE80:;
    v0 = D_08AF0028 - (40);
    f13 = BITSF(LD32(v0+40));
    v0 = D_08AEFF6C - (-148);
    f12 = BITSF(0);
    f14 = BITSF(LD32(v0-148));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    goto L_08A4AE9C;
L_08A4AE9C:;
    f15 = f13;
    goto L_08A4AEA0;
L_08A4AEA0:;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A4AEA8;
L_08A4AEA8:;
    v0 = D_08AF002C - (44);
    v1 = D_08AF0030 - (48);
    f13 = BITSF(LD32(s2+4));
    f12 = BITSF(LD32(s2));
    f14 = BITSF(LD32(v0+44));
    f15 = BITSF(LD32(v1+48));
    goto L_08A4A91C;
L_08A4AEC4:;
    v0 = D_08AF0034 - (52);
    f13 = BITSF(LD32(v0+52));
    v1 = D_08AEFF6C - (-148);
    v0 = D_08AF0028 - (40);
    f12 = BITSF(0);
    f14 = BITSF(LD32(v1-148));
    f15 = BITSF(LD32(v0+40));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    goto L_08A4AEA0;
L_08A4AEEC:;
    v0 = D_08AEFF6C - (-148);
    f12 = BITSF(LD32(v0-148));
    v1 = D_08AF0028 - (40);
    v0 = D_08AF0034 - (52);
    f13 = BITSF(LD32(v0+52));
    f15 = BITSF(LD32(v1+40));
    goto L_08A4AF04;
L_08A4AF04:;
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f14 = f12;
    goto L_08A4AEA0;
L_08A4AF14:;
    v0 = D_08AEFF6C - (-148);
    f12 = BITSF(LD32(v0-148));
    v1 = D_08AF0028 - (40);
    f13 = BITSF(LD32(v1+40));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f14 = f12;
    goto L_08A4AE9C;
L_08A4AF34:;
    f12 = BITSF(0);
    v0 = D_08AEFF6C - (-148);
    v1 = D_08AF0028 - (40);
    f14 = BITSF(LD32(v0-148));
    f15 = BITSF(LD32(v1+40));
    s0 = s3 - 16084;
    a0 = s0 + 0;
    f13 = f12;
    goto L_08A4AEA0;
L_08A4AF58:;
    v0 = D_08AEFF6C - (-148);
    f12 = BITSF(LD32(v0-148));
    v0 = D_08AF0028 - (40);
    f13 = BITSF(0);
    f15 = BITSF(LD32(v0+40));
    goto L_08A4AF04;
}

/* 08A4AF70 */
void func_08A4AF70(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4AF70:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4AF9C(a0);
    goto L_08A4AF84;
L_08A4AF84:;
    a0 = s0 + 0;
    func_08A4B0DC(a0);
    goto L_08A4AF8C;
L_08A4AF8C:;
    sp = sp + 16;
    return;
}

/* 08A4AF9C */
void func_08A4AF9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4AF9C:;
    sp = sp - 64;
    s5 = D_08B1C848 - (-14264);
    s4 = D_08AF0038 - (56);
    s3 = D_08AF003C - (60);
    s2 = 1;
    s1 = a0 + 0;
    s0 = 0 + 0;
    a0 = LD32(s1);
    goto L_08A4AFDC;
L_08A4AFDC:;
    a1 = s0 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4AFE4;
L_08A4AFE4:;
    v1 = LD32(v0);
    ST32(sp, v1);
    a0 = LD32(v0+4);
    ST32(sp+4, a0);
    v1 = LD32(v0+8);
    cnd_ = a0 == s2;
    ST32(sp+8, v1);
    if (cnd_) { goto L_08A4B0A0; }
    goto L_08A4B000;
L_08A4B000:;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4B050; }
    goto L_08A4B00C;
L_08A4B00C:;
    a0 = s0 + 0;
    goto L_08A4B010;
L_08A4B010:;
    a1 = 0 + 0;
    func_08A4CF9C(a0, a1);
    goto L_08A4B018;
L_08A4B018:;
    s0 = s0 + 1;
    goto L_08A4B01C;
L_08A4B01C:;
    v0 = (s32)s0 < 16;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A4AFDC; }
    goto L_08A4B028;
L_08A4B028:;
    sp = sp + 64;
    return;
L_08A4B050:;
    cnd_ = a0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A4B010; }
    goto L_08A4B058;
L_08A4B058:;
    f0 = BITSF(LD32(s5-14264));
    f20 = BITSF(LD32(s4+56));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A4B074; }
    goto L_08A4B070;
L_08A4B070:;
    a1 = 0 + 0;
    goto L_08A4B074;
L_08A4B074:;
    a0 = s0 + 0;
    func_08A4CF9C(a0, a1);
    goto L_08A4B07C;
L_08A4B07C:;
    f13 = BITSF(0);
    f12 = BITSF(LD32(s3+60));
    a0 = s0 + 0;
    f15 = f20;
    f14 = f13;
    goto L_08A4B090;
L_08A4B090:;
    a1 = 0 + 0;
    func_08A4D00C(a0, a1, f12, f13, f14, f15);
    goto L_08A4B098;
L_08A4B098:;
    s0 = s0 + 1;
    goto L_08A4B01C;
L_08A4B0A0:;
    f0 = BITSF(LD32(s5-14264));
    f20 = BITSF(LD32(s4+56));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A4B0BC; }
    goto L_08A4B0B8;
L_08A4B0B8:;
    a1 = 0 + 0;
    goto L_08A4B0BC;
L_08A4B0BC:;
    a0 = s0 + 0;
    func_08A4CF9C(a0, a1);
    goto L_08A4B0C4;
L_08A4B0C4:;
    f14 = BITSF(0);
    f12 = BITSF(LD32(s3+60));
    a0 = s0 + 0;
    f13 = f20;
    f15 = f14;
    goto L_08A4B090;
}

/* 08A4B0DC */
void func_08A4B0DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4B0DC:;
    sp = sp - 64;
    fp = D_08B1C848 - (-14264);
    s6 = D_08AF0040 - (64);
    s0 = a0 + 0;
    v0 = LD32(a0);
    s2 = LD32(v0+60);
    a0 = v0 + 0;
    s1 = LD32(v0+120);
    a1 = s2 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4B134;
L_08A4B134:;
    a1 = LD32(v0+4);
    a0 = LD32(s0);
    v0 = func_08A38568(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A4B140;
L_08A4B140:;
    a0 = LD32(s0);
    a1 = s2 + 0;
    s4 = v0 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4B150;
L_08A4B150:;
    v1 = LD32(v0+4);
    a0 = LD32(s0);
    a1 = s1 + 0;
    v1 = v1 ^ 0x2;
    s3 = v1 < 0x1u;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4B168;
L_08A4B168:;
    a1 = LD32(v0+4);
    a0 = LD32(s0);
    v0 = func_08A38568(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A4B174;
L_08A4B174:;
    a0 = LD32(s0);
    a1 = s1 + 0;
    s7 = v0 + 0;
    v0 = func_08A384A4(a0, a1);
    goto L_08A4B184;
L_08A4B184:;
    f0 = BITSF(LD32(fp-14264));
    f20 = BITSF(LD32(s6+64));
    v1 = LD32(v0+4);
    a1 = 1;
    fcc = FCMP(f20, f0, 14);
    v1 = v1 ^ 0x2;
    cnd_ = fcc;
    s5 = v1 < 0x1u;
    if (cnd_) { goto L_08A4B1A8; }
    goto L_08A4B1A4;
L_08A4B1A4:;
    a1 = 0 + 0;
    goto L_08A4B1A8;
L_08A4B1A8:;
    a0 = s2 + 0;
    func_08A4CF9C(a0, a1);
    goto L_08A4B1B0;
L_08A4B1B0:;
    a0 = LD32(s0);
    v0 = 4;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 5;
    if (cnd_) { goto L_08A4B29C; }
    goto L_08A4B1C4;
L_08A4B1C4:;
    cnd_ = v0 == 0;
    v0 = 8;
    if (cnd_) { goto L_08A4B294; }
    goto L_08A4B1CC;
L_08A4B1CC:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a0+88); goto L_08A4B210; }
    goto L_08A4B1D8;
L_08A4B1D8:;
    goto L_08A4B1DC;
L_08A4B1DC:;
    goto L_08A4B1E0;
L_08A4B1E0:;
    sp = sp + 64;
    return;
L_08A4B210:;
    v0 = 1;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 2;
    if (cnd_) { goto L_08A4B22C; }
    goto L_08A4B21C;
L_08A4B21C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4B1DC; }
    goto L_08A4B224;
L_08A4B224:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A4B1E0; }
    goto L_08A4B22C;
L_08A4B22C:;
    cnd_ = s3 != 0;
    v0 = D_08AF0044 - (68);
    if (cnd_) { goto L_08A4B27C; }
    goto L_08A4B234;
L_08A4B234:;
    cnd_ = s4 == 0;
    f12 = BITSF(LD32(v0+68));
    if (cnd_) { goto L_08A4B268; }
    goto L_08A4B23C;
L_08A4B23C:;
    v0 = D_08AF0044 - (68);
    f14 = BITSF(0);
    f12 = BITSF(LD32(v0+68));
    a0 = s2 + 0;
    goto L_08A4B24C;
L_08A4B24C:;
    f13 = f20;
    goto L_08A4B250;
L_08A4B250:;
    f15 = f14;
    goto L_08A4B254;
L_08A4B254:;
    a1 = 1;
    goto L_08A4B258;
L_08A4B258:;
    func_08A4D00C(a0, a1, f12, f13, f14, f15);
    goto L_08A4B260;
L_08A4B260:;
    goto L_08A4B1DC;
L_08A4B268:;
    f13 = BITSF(0);
    a0 = s2 + 0;
    goto L_08A4B270;
L_08A4B270:;
    f15 = f20;
    goto L_08A4B274;
L_08A4B274:;
    f14 = f13;
    goto L_08A4B254;
L_08A4B27C:;
    f13 = BITSF(0);
    f12 = BITSF(LD32(v0+68));
    a0 = s2 + 0;
    goto L_08A4B288;
L_08A4B288:;
    f14 = f13;
    f15 = f13;
    goto L_08A4B254;
L_08A4B294:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A4B1DC; }
    goto L_08A4B29C;
L_08A4B29C:;
    a0 = LD32(a0+108);
    v0 = 1;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 2;
    if (cnd_) { goto L_08A4B340; }
    goto L_08A4B2AC;
L_08A4B2AC:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A4B300; }
    goto L_08A4B2B4;
L_08A4B2B4:;
    cnd_ = a0 != v0;
    if (cnd_) {  goto L_08A4B1DC; }
    goto L_08A4B2BC;
L_08A4B2BC:;
    v0 = D_08AF0044 - (68);
    f20 = BITSF(LD32(s6+64));
    f21 = BITSF(LD32(v0+68));
    a0 = s2 + 0;
    a1 = 0 + 0;
    f12 = f21;
    f13 = f20;
    f14 = f20;
    f15 = f20;
    func_08A4D00C(a0, a1, f12, f13, f14, f15);
    goto L_08A4B2E4;
L_08A4B2E4:;
    a0 = s1 + 0;
    f12 = f21;
    f13 = f20;
    f14 = f20;
    f15 = f20;
    a1 = 0 + 0;
    goto L_08A4B258;
L_08A4B300:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A4B1DC; }
    goto L_08A4B308;
L_08A4B308:;
    cnd_ = s3 != 0;
    v0 = D_08AF0044 - (68);
    if (cnd_) { goto L_08A4B27C; }
    goto L_08A4B310;
L_08A4B310:;
    cnd_ = s4 != 0;
    if (cnd_) { f13 = BITSF(LD32(s6+64)); goto L_08A4B330; }
    goto L_08A4B318;
L_08A4B318:;
    v0 = D_08AF0044 - (68);
    f15 = BITSF(LD32(s6+64));
    f13 = BITSF(0);
    f12 = BITSF(LD32(v0+68));
    a0 = s2 + 0;
    goto L_08A4B274;
L_08A4B330:;
    f14 = BITSF(0);
    f12 = BITSF(LD32(v0+68));
    a0 = s2 + 0;
    goto L_08A4B250;
L_08A4B340:;
    f0 = BITSF(LD32(fp-14264));
    f20 = BITSF(LD32(s6+64));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A4B35C; }
    goto L_08A4B358;
L_08A4B358:;
    a1 = 0 + 0;
    goto L_08A4B35C;
L_08A4B35C:;
    a0 = s1 + 0;
    func_08A4CF9C(a0, a1);
    goto L_08A4B364;
L_08A4B364:;
    v0 = D_08AF0044 - (68);
    f21 = BITSF(LD32(v0+68));
    a0 = s2 + 0;
    f13 = f20;
    f12 = f21;
    f14 = f20;
    f15 = f20;
    a1 = 0 + 0;
    func_08A4D00C(a0, a1, f12, f13, f14, f15);
    goto L_08A4B388;
L_08A4B388:;
    cnd_ = s5 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A4B3A8; }
    goto L_08A4B390;
L_08A4B390:;
    f13 = BITSF(0);
    cnd_ = s7 == 0;
    f12 = f21;
    if (cnd_) { goto L_08A4B270; }
    goto L_08A4B39C;
L_08A4B39C:;
    f14 = BITSF(0);
    goto L_08A4B24C;
L_08A4B3A8:;
    f13 = BITSF(0);
    f12 = f21;
    goto L_08A4B288;
}

/* 08A4B3B4 */
u32 func_08A4B3B4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A4B3B4:;
    v0 = a0 << 1;
    v1 = v0 + a0;
    v0 = D_08C2DE40 - (-8640);
    a0 = (s32)a0 < 16;
    cnd_ = a0 == 0;
    v0 = v0 - 8640;
    if (cnd_) { goto L_08A4B3DC; }
    goto L_08A4B3CC;
L_08A4B3CC:;
    v0 = D_08C2DE40 - (-8640);
    v1 = v1 << 2;
    v0 = v0 - 8640;
    v0 = v1 + v0;
    goto L_08A4B3DC;
L_08A4B3DC:;
    return v0;
}

/* 08A4B3E4 */
void func_08A4B3E4(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4B3E4:;
    sp = sp - 32;
    v0 = D_08B1C34C - (-15540);
    s6 = a0 + 0;
    s5 = v0 - 15540;
    s4 = 0 + 0;
    goto L_08A4B418;
L_08A4B418:;
    v0 = LD32(s5+28);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A4B468; }
    goto L_08A4B424;
L_08A4B424:;
    s3 = s6 + 4;
    s1 = s5 + 8;
    s0 = LD32(s1);
    goto L_08A4B430;
L_08A4B430:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    v0 = func_08A4B6EC(a0, a1, a2);
    goto L_08A4B440;
L_08A4B440:;
    s2 = s2 + 1;
    a2 = s0 + 0;
    s1 = s1 + 4;
    a0 = s3 + 0;
    cnd_ = v0 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_08A4B4A0; }
    goto L_08A4B458;
L_08A4B458:;
    v0 = LD32(s5+28);
    goto L_08A4B45C;
L_08A4B45C:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s1); goto L_08A4B430; }
    goto L_08A4B468;
L_08A4B468:;
    s4 = s4 + 1;
    v0 = s4 < 0x10u;
    cnd_ = v0 != 0;
    s5 = s5 + 44;
    if (cnd_) { goto L_08A4B418; }
    goto L_08A4B478;
L_08A4B478:;
    sp = sp + 32;
    return;
L_08A4B4A0:;
    func_08A4B6B0(a0, a1, a2);
    goto L_08A4B4A8;
L_08A4B4A8:;
    v0 = LD32(s5+28);
    goto L_08A4B45C;
}

/* 08A4B4B0 */
void func_08A4B4B0(u32 a0)
{
L_08A4B4B0:;
    ST32(a0+804, 0);
    return;
}

/* 08A4B4B8 */
void func_08A4B4B8(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4B4B8:;
    sp = sp - 16;
    a0 = a0 + 4;
    func_08A4B7EC(a0);
    goto L_08A4B4C8;
L_08A4B4C8:;
    sp = sp + 16;
    return;
}

/* 08A4B4D4 */
void func_08A4B4D4(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4B4D4:;
    sp = sp - 16;
    a0 = a0 + 4;
    func_08A4BC1C(a0);
    goto L_08A4B4E4;
L_08A4B4E4:;
    sp = sp + 16;
    return;
}

/* 08A4B4F0 */
void func_08A4B4F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4B4F0:;
    sp = sp - 64;
    fp = a0 + 4;
    s7 = a0 + 0;
    s5 = 0 + 0;
    v0 = LD32(fp+800);
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08A4B5C0; }
    goto L_08A4B534;
L_08A4B534:;
    a0 = fp + 0;
    goto L_08A4B538;
L_08A4B538:;
    a1 = s5 + 0;
    v0 = func_08A4B79C(a0, a1);
    goto L_08A4B540;
L_08A4B540:;
    a1 = LD32(v0);
    a0 = LD32(s7);
    s1 = v0 + 0;
    ST32(sp+4, 0);
    v0 = func_08A384A4(a0, a1);
    goto L_08A4B554;
L_08A4B554:;
    s6 = 0 + 0;
    a0 = LD32(s7);
    a1 = LD32(s1+4);
    s0 = LD32(v0+4);
    v0 = func_08A384A4(a0, a1);
    goto L_08A4B568;
L_08A4B568:;
    s2 = LD32(v0+4);
    v0 = s0 ^ 0x2;
    s3 = v0 < 0x1u;
    v1 = s2 ^ 0x2;
    cnd_ = s3 == 0;
    s4 = v1 < 0x1u;
    if (cnd_) { goto L_08A4B668; }
    goto L_08A4B580;
L_08A4B580:;
    cnd_ = s4 == 0;
    if (cnd_) { a0 = LD32(s7); goto L_08A4B650; }
    goto L_08A4B588;
L_08A4B588:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A4B61C; }
    goto L_08A4B594;
L_08A4B594:;
    cnd_ = s6 == 0;
    v0 = LD32(s1+12);
    if (cnd_) { goto L_08A4B600; }
    goto L_08A4B59C;
L_08A4B59C:;
    a0 = fp + 0;
    a1 = s5 + 0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A4B5F0; }
    goto L_08A4B5AC;
L_08A4B5AC:;
    v1 = LD32(sp);
    goto L_08A4B5B0;
L_08A4B5B0:;
    s5 = s5 + 1;
    v0 = s5 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = fp + 0; goto L_08A4B538; }
    goto L_08A4B5C0;
L_08A4B5C0:;
    sp = sp + 64;
    return;
L_08A4B5F0:;
    func_08A4BB0C(a0, a1, a2);
    goto L_08A4B5F8;
L_08A4B5F8:;
    v1 = LD32(sp);
    goto L_08A4B5B0;
L_08A4B600:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(sp); goto L_08A4B5B0; }
    goto L_08A4B60C;
L_08A4B60C:;
    a0 = fp + 0;
    a1 = s5 + 0;
    a2 = 1;
    goto L_08A4B5F0;
L_08A4B61C:;
    cnd_ = s6 != 0;
    if (cnd_) { v0 = LD32(s1+12); goto L_08A4B600; }
    goto L_08A4B624;
L_08A4B624:;
    cnd_ = s3 != 0;
    v0 = LD32(s1+12);
    if (cnd_) { goto L_08A4B600; }
    goto L_08A4B62C;
L_08A4B62C:;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_08A4B600; }
    goto L_08A4B634;
L_08A4B634:;
    v1 = 2;
    a0 = fp + 0;
    a1 = s5 + 0;
    cnd_ = v0 != v1;
    a2 = 2;
    if (cnd_) { goto L_08A4B5F0; }
    goto L_08A4B648;
L_08A4B648:;
    v1 = LD32(sp);
    goto L_08A4B5B0;
L_08A4B650:;
    a1 = s2 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A4B658;
L_08A4B658:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4B660;
L_08A4B660:;
    s6 = v0 + 0;
    goto L_08A4B588;
L_08A4B668:;
    a0 = LD32(s7);
    a1 = s0 + 0;
    v0 = func_08A384F0(a0, a1);
    goto L_08A4B674;
L_08A4B674:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A3BE90(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4B67C;
L_08A4B67C:;
    ST32(sp+4, v0);
    goto L_08A4B580;
}

/* 08A4B684 */
void func_08A4B684(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4B684:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = LD32(a0);
    a0 = a0 + 4;
    a3 = LD32(v0+120);
    a2 = LD32(v0+60);
    func_08A4BB64(a0, a1, a2, a3);
    goto L_08A4B6A4;
L_08A4B6A4:;
    sp = sp + 16;
    return;
}

/* 08A4B6B0 */
void func_08A4B6B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A4B6B0:;
    v0 = LD32(a0+800);
    v1 = v0 << 4;
    v0 = v0 + 1;
    v0 = v0 < 0x33u;
    cnd_ = v0 == 0;
    v1 = v1 + a0;
    if (cnd_) { goto L_08A4B6E4; }
    goto L_08A4B6C8;
L_08A4B6C8:;
    v0 = (u32)-1;
    ST32(v1+12, v0);
    v0 = LD32(a0+800);
    ST32(v1, a1);
    v0 = v0 + 1;
    ST32(v1+4, a2);
    ST32(a0+800, v0);
    goto L_08A4B6E4;
L_08A4B6E4:;
    return;
}

/* 08A4B6EC */
u32 func_08A4B6EC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4B6EC:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = 0 + 0;
    v0 = LD32(a0+800);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A4B73C; }
    goto L_08A4B71C;
L_08A4B71C:;
    v0 = 0 + 0;
    goto L_08A4B720;
L_08A4B720:;
    sp = sp + 32;
    return v0;
L_08A4B73C:;
    a1 = s1 + 0;
    goto L_08A4B740;
L_08A4B740:;
    a0 = s0 + 0;
    v0 = func_08A4B7C4(a0, a1);
    goto L_08A4B748;
L_08A4B748:;
    a0 = LD32(v0);
    v1 = v0 + 0;
    cnd_ = a0 == s3;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A4B788; }
    goto L_08A4B758;
L_08A4B758:;
    cnd_ = a0 == s2;
    if (cnd_) { v0 = LD32(v1+4); goto L_08A4B778; }
    goto L_08A4B760;
L_08A4B760:;
    v0 = LD32(s0+800);
    goto L_08A4B764;
L_08A4B764:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A4B740; }
    goto L_08A4B770;
L_08A4B770:;
    v0 = 0 + 0;
    goto L_08A4B720;
L_08A4B778:;
    cnd_ = v0 != s3;
    if (cnd_) { v0 = LD32(s0+800); goto L_08A4B764; }
    goto L_08A4B780;
L_08A4B780:;
    v0 = 1;
    goto L_08A4B720;
L_08A4B788:;
    v0 = LD32(v0+4);
    cnd_ = v0 != s2;
    if (cnd_) { goto L_08A4B758; }
    goto L_08A4B794;
L_08A4B794:;
    v0 = 1;
    goto L_08A4B720;
}

/* 08A4B79C */
u32 func_08A4B79C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A4B79C:;
    v0 = LD32(a0+800);
    v1 = a1 < 0x32u;
    v0 = a1 < v0;
    v0 = v0 & v1;
    a1 = a1 << 4;
    cnd_ = v0 != 0;
    v1 = a0 + a1;
    if (cnd_) { goto L_08A4B7BC; }
    goto L_08A4B7B8;
L_08A4B7B8:;
    v1 = a0 + 0;
    goto L_08A4B7BC;
L_08A4B7BC:;
    v0 = v1 + 0;
    return v0;
}

/* 08A4B7C4 */
u32 func_08A4B7C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A4B7C4:;
    v0 = LD32(a0+800);
    v1 = a1 < 0x32u;
    v0 = a1 < v0;
    v0 = v0 & v1;
    a1 = a1 << 4;
    cnd_ = v0 != 0;
    v1 = a0 + a1;
    if (cnd_) { goto L_08A4B7E4; }
    goto L_08A4B7E0;
L_08A4B7E0:;
    v1 = a0 + 0;
    goto L_08A4B7E4;
L_08A4B7E4:;
    v0 = v1 + 0;
    return v0;
}

/* 08A4B7EC */
void func_08A4B7EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4B7EC:;
    sp = sp - 32;
    s1 = a0 + 0;
    s2 = 0 + 0;
    func_08A4B8C0(a0);
    goto L_08A4B810;
L_08A4B810:;
    v0 = 1;
    v1 = LD32(s1+800);
    cnd_ = v1 == 0;
    ST8(s1+804, v0);
    if (cnd_) { goto L_08A4B864; }
    goto L_08A4B820;
L_08A4B820:;
    s3 = 1;
    a1 = s2 + 0;
    goto L_08A4B828;
L_08A4B828:;
    a0 = s1 + 0;
    v0 = func_08A4B79C(a0, a1);
    goto L_08A4B830;
L_08A4B830:;
    a0 = s1 + 0;
    a1 = 1;
    s0 = v0 + 0;
    v0 = func_08A4B894(a0, a1);
    goto L_08A4B840;
L_08A4B840:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_08A4BC94(a0, a1);
    goto L_08A4B84C;
L_08A4B84C:;
    ST32(s0+12, s3);
    s2 = s2 + 1;
    v0 = LD32(s1+800);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A4B828; }
    goto L_08A4B864;
L_08A4B864:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4BA38(a0, a1, a2, a3);
    goto L_08A4B878;
L_08A4B878:;
    sp = sp + 32;
    return;
}

/* 08A4B894 */
u32 func_08A4B894(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A4B894:;
    v0 = (s32)a1 < 4;
    v1 = a0 + 0;
    cnd_ = v0 == 0;
    a0 = a0 + 808;
    if (cnd_) { goto L_08A4B8B8; }
    goto L_08A4B8A4;
L_08A4B8A4:;
    v0 = 92;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v1 + v0;
    a0 = v0 + 808;
    goto L_08A4B8B8;
L_08A4B8B8:;
    v0 = a0 + 0;
    return v0;
}

/* 08A4B8C0 */
void func_08A4B8C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4B8C0:;
    sp = sp - 16;
    v0 = D_08B1C6D4 - (-14636);
    a3 = v0 - 14636;
    t2 = a0 + 808;
    t1 = a0 + 0;
    a2 = t2 + 0;
    t0 = a3 + 80;
    goto L_08A4B8E0;
L_08A4B8E0:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(a2, v0);
    a3 = a3 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = a3 != t0;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A4B8E0; }
    goto L_08A4B90C;
L_08A4B90C:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    v0 = D_08B1C730 - (-14544);
    a3 = v0 - 14544;
    a2 = t1 + 900;
    t0 = a3 + 80;
    goto L_08A4B934;
L_08A4B934:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(a2, v0);
    a3 = a3 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = a3 != t0;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A4B934; }
    goto L_08A4B960;
L_08A4B960:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    v0 = D_08B1C78C - (-14452);
    a3 = v0 - 14452;
    a2 = t1 + 992;
    t0 = a3 + 80;
    goto L_08A4B988;
L_08A4B988:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(a2, v0);
    a3 = a3 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = a3 != t0;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A4B988; }
    goto L_08A4B9B4;
L_08A4B9B4:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    v0 = D_08B1C7E8 - (-14360);
    a3 = v0 - 14360;
    a2 = t1 + 1084;
    t0 = a3 + 80;
    goto L_08A4B9DC;
L_08A4B9DC:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(a2, v0);
    a3 = a3 + 16;
    a2 = a2 + 16;
    ST32(a2-12, v1);
    ST32(a2-8, a0);
    cnd_ = a3 != t0;
    ST32(a2-4, a1);
    if (cnd_) { goto L_08A4B9DC; }
    goto L_08A4BA08;
L_08A4BA08:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    a0 = t2 + 0;
    a1 = 4;
    func_088EB0CC(a0, a1);
    goto L_08A4BA2C;
L_08A4BA2C:;
    sp = sp + 16;
    return;
}

/* 08A4BA38 */
void func_08A4BA38(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4BA38:;
    sp = sp - 64;
    v0 = a1 + 0;
    a1 = 3;
    s1 = a2 + 0;
    s4 = a0 + 0;
    s3 = v0 & 0xff;
    s0 = a3 + 0;
    v0 = func_08A4B894(a0, a1);
    goto L_08A4BA70;
L_08A4BA70:;
    a0 = s1 + 0;
    s2 = v0 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A4BA7C;
L_08A4BA7C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    a0 = s0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    v0 = func_08A4B3B4(a0);
    goto L_08A4BA9C;
L_08A4BA9C:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a1 = sp + 16;
    a2 = s2 + 0;
    a0 = sp + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    cnd_ = s1 == s0;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_08A4BAEC; }
    goto L_08A4BAC4;
L_08A4BAC4:;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4BACC;
L_08A4BACC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s3 ^ 0x1;
    if (cnd_) { goto L_08A4BAEC; }
    goto L_08A4BAD8;
L_08A4BAD8:;
    v1 = LD32(v0+4);
    v0 = LD32(v0+72);
    v0 = (v0 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    ST32(a0+72, v0);
    ST32(s4+1176, v1);
    goto L_08A4BAEC;
L_08A4BAEC:;
    sp = sp + 64;
    return;
}

/* 08A4BB0C */
void func_08A4BB0C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4BB0C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s0 = a0 + 0;
    v0 = func_08A4B79C(a0, a1);
    goto L_08A4BB2C;
L_08A4BB2C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_08A4B894(a0, a1);
    goto L_08A4BB3C;
L_08A4BB3C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08A4BD04(a0, a1);
    goto L_08A4BB48;
L_08A4BB48:;
    ST32(s1+12, s2);
    sp = sp + 16;
    return;
}

/* 08A4BB64 */
void func_08A4BB64(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4BB64:;
    sp = sp - 32;
    s4 = a2 + 0;
    s3 = a3 + 0;
    s1 = a0 + 0;
    s0 = a1 & 0xff;
    a0 = LD32(a0+1176);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4BB98;
L_08A4BB98:;
    s2 = v0 + 0;
    v1 = s0 ^ 0x1;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s4 + 0;
    cnd_ = v0 == 0;
    a3 = s3 + 0;
    if (cnd_) { goto L_08A4BC0C; }
    goto L_08A4BBB4;
L_08A4BBB4:;
    v0 = LD32(v0+72);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s2+72, v0);
    a0 = s4 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A4BBC8;
L_08A4BBC8:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A4BBD4;
L_08A4BBD4:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    cnd_ = s4 == s3;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A4BBEC; }
    goto L_08A4BBE4;
L_08A4BBE4:;
    func_088EB81C(a0, a1, a2);
    goto L_08A4BBEC;
L_08A4BBEC:;
    goto L_08A4BBF0;
L_08A4BBF0:;
    sp = sp + 32;
    return;
L_08A4BC0C:;
    func_08A4BA38(a0, a1, a2, a3);
    goto L_08A4BC14;
L_08A4BC14:;
    goto L_08A4BBF0;
}

/* 08A4BC1C */
void func_08A4BC1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4BC1C:;
    sp = sp - 16;
    v0 = LD_U8(a0+804);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A4BC50; }
    goto L_08A4BC38;
L_08A4BC38:;
    v0 = LD32(a0+800);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A4BC64; }
    goto L_08A4BC44;
L_08A4BC44:;
    a0 = LD32(s0+1176);
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4BC4C;
L_08A4BC4C:;
    ST32(s0+1176, 0);
    goto L_08A4BC50;
L_08A4BC50:;
    sp = sp + 16;
    return;
L_08A4BC64:;
    a1 = s1 + 0;
    goto L_08A4BC68;
L_08A4BC68:;
    a0 = s0 + 0;
    v0 = func_08A4B79C(a0, a1);
    goto L_08A4BC70;
L_08A4BC70:;
    a0 = LD32(v0+8);
    s1 = s1 + 1;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4BC7C;
L_08A4BC7C:;
    v0 = LD32(s0+800);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A4BC68; }
    goto L_08A4BC8C;
L_08A4BC8C:;
    goto L_08A4BC44;
}

/* 08A4BC94 */
void func_08A4BC94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4BC94:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = LD32(a0);
    v0 = func_08A4B3B4(a0);
    goto L_08A4BCB8;
L_08A4BCB8:;
    a0 = LD32(s1+4);
    s0 = v0 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A4BCC4;
L_08A4BCC4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4BCD4;
L_08A4BCD4:;
    a0 = LD32(v0+4);
    v1 = D_08B1C848 - (-14264);
    f0 = BITSF(LD32(v1-14264));
    ST32(s1+8, a0);
    ST32(v0+24, FBITS(f0));
    ST32(v0+20, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08A4BD04 */
void func_08A4BD04(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4BD04:;
    sp = sp - 32;
    s3 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    v0 = func_08A4B3B4(a0);
    goto L_08A4BD2C;
L_08A4BD2C:;
    a0 = LD32(s0+4);
    s2 = v0 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A4BD38;
L_08A4BD38:;
    a0 = LD32(s0+8);
    s1 = v0 + 0;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4BD44;
L_08A4BD44:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4BD54;
L_08A4BD54:;
    a0 = LD32(v0+4);
    v1 = D_08B1C848 - (-14264);
    f0 = BITSF(LD32(v1-14264));
    ST32(s0+8, a0);
    ST32(v0+24, FBITS(f0));
    ST32(v0+20, FBITS(f0));
    sp = sp + 32;
    return;
}

/* 08A4BD88 */
void func_08A4BD88(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_08A4BD88:;
    v1 = D_08C2DFC8 - (-8248);
    v0 = v1 - 8248;
    a1 = v0 + 12;
    t0 = LD32(v0+12);
    t1 = LD32(a1+8);
    f1 = BITSF(LD32(v1-8248));
    f0 = BITSF(0);
    v1 = D_08C2E074 - (-8076);
    t2 = LD32(a1+4);
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    a0 = v1 - 8076;
    a3 = D_08C2DFBC - (-8260);
    a1 = a0 + 12;
    v0 = D_08C2E070 - (-8080);
    ST32(v1-8076, FBITS(f1));
    a2 = a3 - 8260;
    v1 = D_08C2DFB8 - (-8264);
    ST32(a0+12, t0);
    ST32(a1+8, t1);
    ST32(v0-8080, FBITS(f0));
    v0 = D_08C2DFB4 - (-8268);
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f3));
    ST32(v1-8264, 0);
    ST32(a1+4, t2);
    ST32(v0-8268, 0);
    ST32(a2+4, FBITS(f0));
    ST32(a3-8260, FBITS(f0));
    ST32(a2+8, FBITS(f0));
    return;
}

/* 08A4BE04 */
void func_08A4BE04(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A4BE04:;
    sp = sp - 96;
    v0 = (s32)a0 < 7;
    a3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4BEB8; }
    goto L_08A4BE1C;
L_08A4BE1C:;
    t1 = D_08C2DFB8 - (-8264);
    t2 = LD32(t1-8264);
    cnd_ = t2 == a0;
    v1 = 7;
    if (cnd_) { goto L_08A4BEB0; }
    goto L_08A4BE2C;
L_08A4BE2C:;
    v0 = D_08C2DFB4 - (-8268);
    a0 = (s32)a0 < 5;
    ST32(v0-8268, v1);
    cnd_ = a0 == 0;
    ST32(t1-8264, a3);
    if (cnd_) { goto L_08A4BF38; }
    goto L_08A4BE40;
L_08A4BE40:;
    v1 = a3 << 1;
    v1 = v1 + a3;
    v0 = D_08C2DFC8 - (-8248);
    v0 = v0 - 8248;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a3 = LD32(v1+20);
    a2 = LD32(v1+16);
    a0 = LD32(v1+12);
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    a1 = D_08C2E074 - (-8076);
    v0 = a1 - 8076;
    v1 = v0 + 12;
    ST32(a1-8076, FBITS(f0));
    ST32(v0+12, a0);
    ST32(v1+8, a3);
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v1+4, a2);
    goto L_08A4BE94;
L_08A4BE94:;
    v0 = LD32(t1-8264);
    goto L_08A4BE98;
L_08A4BE98:;
    s0 = D_08C2E070 - (-8080);
    v1 = 6;
    cnd_ = v0 == v1;
    ST32(s0-8080, 0);
    if (cnd_) { goto L_08A4BEFC; }
    goto L_08A4BEA8;
L_08A4BEA8:;
    cnd_ = t2 == v1;
    if (cnd_) { goto L_08A4BEC8; }
    goto L_08A4BEB0;
L_08A4BEB0:;
    func_08A4C204();
    goto L_08A4BEB8;
L_08A4BEB8:;
    sp = sp + 96;
    return;
L_08A4BEC8:;
    a0 = sp + 32;
    func_08A4C348(a0);
    goto L_08A4BED0;
L_08A4BED0:;
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    ST32(s0-8080, v1);
    goto L_08A4BEB0;
L_08A4BEFC:;
    a0 = sp + 32;
    func_08A4C348(a0);
    goto L_08A4BF04;
L_08A4BF04:;
    v0 = LD32(sp+32);
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+36);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(s0-8080, FBITS(f0));
    goto L_08A4BEB0;
L_08A4BF38:;
    v0 = 5;
    cnd_ = a3 == v0;
    v0 = 6;
    if (cnd_) { goto L_08A4BFBC; }
    goto L_08A4BF44;
L_08A4BF44:;
    cnd_ = a3 != v0;
    v0 = LD32(t1-8264);
    if (cnd_) { goto L_08A4BE98; }
    goto L_08A4BF4C;
L_08A4BF4C:;
    v0 = D_08C2E058 - (-8104);
    v1 = v0 - 8104;
    f5 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f3 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v0-8104));
    a0 = v1 + 12;
    f0 = f0 + f3;
    f4 = f4 + f2;
    f1 = f1 + f5;
    a1 = LD32(v1+12);
    a2 = LD32(a0+8);
    a3 = LD32(a0+4);
    v1 = D_08C2E074 - (-8076);
    v0 = v1 - 8076;
    a0 = v0 + 12;
    ST32(v1-8076, FBITS(f4));
    ST32(v0+12, a1);
    ST32(a0+8, a2);
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(a0+4, a3);
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f1));
    goto L_08A4BE94;
L_08A4BFBC:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    v0 = D_08AF0048 - (72);
    f0 = BITSF(LD32(v0+72));
    f2 = BITSF(LD32(v1+108));
    f1 = BITSF(LD32(v1+92));
    a3 = D_08AF004C - (76);
    f2 = f2 + f2;
    f1 = f1 + f1;
    f12 = BITSF(LD32(a3+76));
    {v[8]=0.63661977236f;}
    f2 = f2 * f0;
    f1 = f1 * f12;
    v0 = D_08AF0050 - (80);
    f8 = BITSF(LD32(v0+80));
    f2 = f2 * f12;
    a0 = FBITS(f1);
    {v[0]=BITSF(a0);}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    v1 = FBITS(f2);
    {v[4]=BITSF(v1);}
    {float s0=v[4];float t0=v[8];float d0=s0*t0;v[4]=d0;}
    {v[16]=BITSF(a0);}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    f5 = f8 / f1;
    {v[12]=BITSF(v1);}
    {float s0=v[12];float t0=v[8];float d0=s0*t0;v[4]=d0;}
    {float s0=v[16];float t0=v[8];float d0=s0*t0;v[8]=d0;}
    f6 = BITSF(LD32(a2+4));
    f14 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a2));
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[16]=d0;}
    {float s0=v[8];float d0=cosf(s0*1.57079632679f);v[12]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {float s0=v[8];float d0=sinf(s0*1.57079632679f);v[8]=d0;}
    f7 = BITSF(LD32(a2+8));
    f15 = BITSF(LD32(a1+8));
    f13 = BITSF(LD32(a1));
    v0 = 1;
    {float s0=v[8];float t0=v[12];float d0=s0/t0;v[0]=d0;}
    {v1=FBITS(v[0]);}
    f10 = BITSF(v1);
    f2 = f8 / f2;
    {float s0=v[4];float t0=v[16];float d0=s0/t0;v[0]=d0;}
    {a0=FBITS(v[0]);}
    f9 = BITSF(a0);
    f6 = f6 - f14;
    f11 = f1 - f13;
    f7 = f7 - f15;
    v1 = FBITS(f6);
    a0 = FBITS(f6);
    ST32(sp, FBITS(f11));
    v1 = (v1 >> 0) & 0x7fffffff;
    a0 = (a0 >> 0) & 0x7fffffff;
    f3 = BITSF(v1);
    f4 = BITSF(a0);
    v1 = FBITS(f11);
    a0 = FBITS(f7);
    f3 = f3 + f5;
    f4 = f4 + f2;
    v1 = (v1 >> 0) & 0x7fffffff;
    a0 = (a0 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    f2 = BITSF(a0);
    f3 = f10 * f3;
    f4 = f9 * f4;
    f1 = f1 + f8;
    f2 = f2 + f8;
    ST32(sp+4, FBITS(f6));
    f1 = f1 + f3;
    f2 = f2 + f4;
    f1 = f1 * f12;
    f2 = f2 * f12;
    f5 = f1 - f8;
    f2 = f2 - f8;
    f4 = f5 / f10;
    f3 = f2 / f9;
    fcc = FCMP(f3, f4, 12);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f7));
    if (cnd_) { goto L_08A4C118; }
    goto L_08A4C114;
L_08A4C114:;
    v0 = 0 + 0;
    goto L_08A4C118;
L_08A4C118:;
    f6 = f11 * f12;
    cnd_ = v0 == 0;
    v1 = sp + 32;
    if (cnd_) { goto L_08A4C13C; }
    goto L_08A4C124;
L_08A4C124:;
    a0 = FBITS(f11);
    {v[20]=BITSF(a0);}
    {float s0=v[20];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    f6 = f0 * f5;
    goto L_08A4C13C;
L_08A4C13C:;
    fcc = FCMP(f3, f4, 14);
    cnd_ = fcc;
    f0 = f4;
    if (cnd_) { goto L_08A4C150; }
    goto L_08A4C14C;
L_08A4C14C:;
    f0 = f3;
    goto L_08A4C150;
L_08A4C150:;
    cnd_ = v0 == 0;
    f3 = BITSF(FBITS(f0) ^ 0x80000000u);
    if (cnd_) { goto L_08A4C1D0; }
    goto L_08A4C158;
L_08A4C158:;
    f1 = BITSF(LD32(a3+76));
    f0 = BITSF(LD32(sp+8));
    f0 = f0 * f1;
    goto L_08A4C164;
L_08A4C164:;
    ST32(v1+8, FBITS(f0));
    a1 = D_08C2E04C - (-8116);
    a3 = a1 - 8116;
    ST32(v1, FBITS(f6));
    a2 = D_08C2E074 - (-8076);
    v0 = a2 - 8076;
    ST32(v1+4, FBITS(f3));
    t0 = v0 + 12;
    f2 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f2 = f13 + f2;
    f1 = f14 + f1;
    f0 = f15 + f0;
    v1 = LD32(a1-8116);
    a0 = LD32(a3+8);
    a1 = LD32(a3+4);
    ST32(a2-8076, FBITS(f2));
    ST32(v0+12, v1);
    ST32(t0+8, a0);
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    ST32(t0+4, a1);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    goto L_08A4BE94;
L_08A4C1D0:;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f0);
    {v[24]=BITSF(v0);}
    {float s0=v[24];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    f0 = f0 * f2;
    goto L_08A4C164;
}

/* 08A4C1F0 */
void func_08A4C1F0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08A4C1F0:;
    v0 = D_08C2DFB8 - (-8264);
    a0 = LD32(v0-8264);
    v1 = D_08C2DFB4 - (-8268);
    ST32(v1-8268, a0);
    return;
}

/* 08A4C204 */
void func_08A4C204(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4C204:;
    sp = sp - 16;
    v0 = D_08C2DFB4 - (-8268);
    v1 = LD32(v0-8268);
    v0 = 7;
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 8;
    if (cnd_) { goto L_08A4C244; }
    goto L_08A4C220;
L_08A4C220:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A4C23C; }
    goto L_08A4C228;
L_08A4C228:;
    cnd_ = (s32)v1 < 0;
    if (cnd_) { goto L_08A4C23C; }
    goto L_08A4C230;
L_08A4C230:;
    func_08A4C264();
    goto L_08A4C238;
L_08A4C238:;
    goto L_08A4C23C;
L_08A4C23C:;
    sp = sp + 16;
    return;
L_08A4C244:;
    v0 = func_08A4C2B4();
    goto L_08A4C24C;
L_08A4C24C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A4C23C; }
    goto L_08A4C254;
L_08A4C254:;
    func_08A4C1F0();
    goto L_08A4C25C;
L_08A4C25C:;
    goto L_08A4C23C;
}

/* 08A4C264 */
void func_08A4C264(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4C264:;
    sp = sp - 16;
    s0 = D_08C2E074 - (-8076);
    s0 = s0 - 8076;
    a0 = s0 + 0;
    s0 = s0 + 12;
    func_0881CBAC(a0);
    goto L_08A4C284;
L_08A4C284:;
    a0 = s0 + 0;
    func_0881CF98(a0);
    goto L_08A4C28C;
L_08A4C28C:;
    f0 = BITSF(0);
    v0 = D_08C2DFBC - (-8260);
    v1 = v0 - 8260;
    ST32(v0-8260, FBITS(f0));
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08A4C2B4 */
u32 func_08A4C2B4(void)
{
    u32 v0 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4C2B4:;
    sp = sp - 64;
    a0 = sp + 0;
    func_08A4C348(a0);
    goto L_08A4C2C4;
L_08A4C2C4:;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AF0054 - (84);
    f0 = BITSF(LD32(v0+84));
    a0 = sp + 16;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08A4C320; }
    goto L_08A4C314;
L_08A4C314:;
    sp = sp + 64;
    return v0;
L_08A4C320:;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    func_08A4C638(a0);
    goto L_08A4C330;
L_08A4C330:;
    func_08A4C3A4();
    goto L_08A4C338;
L_08A4C338:;
    func_08A4C42C();
    goto L_08A4C340;
L_08A4C340:;
    v0 = 0 + 0;
    goto L_08A4C314;
}

/* 08A4C348 */
void func_08A4C348(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4C348:;
    v0 = D_08C2E074 - (-8076);
    v1 = v0 - 8076;
    f5 = BITSF(LD32(v0-8076));
    f0 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v1+4));
    sp = sp - 32;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    ST32(sp, FBITS(f5));
    v0 = a0 + 0;
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f0));
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+4));
    f5 = f5 - f2;
    f0 = f0 - f1;
    f4 = f4 - f3;
    ST32(a0, FBITS(f5));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f4));
    sp = sp + 32;
    return;
}

/* 08A4C3A4 */
void func_08A4C3A4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4C3A4:;
    sp = sp - 64;
    v1 = D_08C2DFBC - (-8260);
    a0 = v1 - 8260;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f2 = BITSF(LD32(v1-8260));
    f3 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    f2 = f2 * f0;
    f3 = f3 * f0;
    f1 = f1 * f0;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    ST32(sp, FBITS(f2));
    a0 = sp + 32;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    f0 = BITSF(LD32(v1));
    f5 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v1+4));
    f2 = f0 + f2;
    f3 = f5 + f3;
    f1 = f4 + f1;
    ST32(sp+16, FBITS(f0));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    func_0881CBAC(a0);
    goto L_08A4C420;
L_08A4C420:;
    sp = sp + 64;
    return;
}

/* 08A4C42C */
void func_08A4C42C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A4C42C:;
    sp = sp - 48;
    v0 = D_08C2DFB8 - (-8264);
    v1 = D_08B159FC - (23036);
    a1 = LD32(v0-8264);
    a2 = LD32(v1+23036);
    v0 = D_08C2DFD4 - (-8236);
    a0 = a1 << 1;
    a0 = a0 + a1;
    v0 = v0 - 8236;
    a0 = a0 << 3;
    a0 = a0 + v0;
    f1 = BITSF(LD32(a2+48));
    f0 = BITSF(LD32(a0));
    a2 = a2 + 48;
    v0 = D_08AF0058 - (88);
    f5 = f0 - f1;
    f3 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a0+4));
    f6 = BITSF(LD32(v0+88));
    f3 = f3 - f0;
    f4 = f1 - f2;
    fcc = FCMP(f6, f5, 12);
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_08A4C4B0; }
    goto L_08A4C4A0;
L_08A4C4A0:;
    v0 = D_08AF005C - (92);
    f0 = BITSF(LD32(v0+92));
    f5 = f5 - f0;
    ST32(sp, FBITS(f5));
    goto L_08A4C4B0;
L_08A4C4B0:;
    v0 = D_08AF0060 - (96);
    f1 = BITSF(LD32(v0+96));
    f5 = BITSF(LD32(sp));
    fcc = FCMP(f5, f1, 12);
    cnd_ = !fcc;
    f4 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_08A4C4E0; }
    goto L_08A4C4CC;
L_08A4C4CC:;
    v0 = D_08AF005C - (92);
    f0 = BITSF(LD32(v0+92));
    f5 = f5 + f0;
    ST32(sp, FBITS(f5));
    f4 = BITSF(LD32(sp+4));
    goto L_08A4C4E0;
L_08A4C4E0:;
    fcc = FCMP(f6, f4, 12);
    cnd_ = !fcc;
    v0 = D_08AF005C - (92);
    if (cnd_) { goto L_08A4C4FC; }
    goto L_08A4C4F0;
L_08A4C4F0:;
    f0 = BITSF(LD32(v0+92));
    f4 = f4 - f0;
    ST32(sp+4, FBITS(f4));
    goto L_08A4C4FC;
L_08A4C4FC:;
    fcc = FCMP(f4, f1, 12);
    cnd_ = !fcc;
    f3 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_08A4C520; }
    goto L_08A4C50C;
L_08A4C50C:;
    v0 = D_08AF005C - (92);
    f0 = BITSF(LD32(v0+92));
    f4 = f4 + f0;
    ST32(sp+4, FBITS(f4));
    f3 = BITSF(LD32(sp+8));
    goto L_08A4C520;
L_08A4C520:;
    fcc = FCMP(f6, f3, 12);
    cnd_ = !fcc;
    v0 = D_08AF005C - (92);
    if (cnd_) { goto L_08A4C53C; }
    goto L_08A4C530;
L_08A4C530:;
    f0 = BITSF(LD32(v0+92));
    f3 = f3 - f0;
    ST32(sp+8, FBITS(f3));
    goto L_08A4C53C;
L_08A4C53C:;
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A4C560; }
    goto L_08A4C54C;
L_08A4C54C:;
    v0 = D_08AF005C - (92);
    f0 = BITSF(LD32(v0+92));
    f3 = f3 + f0;
    ST32(sp+8, FBITS(f3));
    v0 = D_08B285A0 - (-31328);
    goto L_08A4C560;
L_08A4C560:;
    v1 = D_08AF0064 - (100);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1+100));
    f1 = f1 * f0;
    fcc = FCMP(f1, f5, 12);
    cnd_ = !fcc;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    if (cnd_) { goto L_08A4C588; }
    goto L_08A4C580;
L_08A4C580:;
    ST32(sp, FBITS(f1));
    f5 = f1;
    goto L_08A4C588;
L_08A4C588:;
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4C5A0; }
    goto L_08A4C598;
L_08A4C598:;
    ST32(sp, FBITS(f0));
    f5 = f0;
    goto L_08A4C5A0;
L_08A4C5A0:;
    fcc = FCMP(f1, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4C5B8; }
    goto L_08A4C5B0;
L_08A4C5B0:;
    ST32(sp+4, FBITS(f1));
    f4 = f1;
    goto L_08A4C5B8;
L_08A4C5B8:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4C5D0; }
    goto L_08A4C5C8;
L_08A4C5C8:;
    ST32(sp+4, FBITS(f0));
    f4 = f0;
    goto L_08A4C5D0;
L_08A4C5D0:;
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4C5E8; }
    goto L_08A4C5E0;
L_08A4C5E0:;
    ST32(sp+8, FBITS(f1));
    f3 = f1;
    goto L_08A4C5E8;
L_08A4C5E8:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a2+8)); goto L_08A4C604; }
    goto L_08A4C5F8;
L_08A4C5F8:;
    ST32(sp+8, FBITS(f0));
    f3 = f0;
    f0 = BITSF(LD32(a2+8));
    goto L_08A4C604;
L_08A4C604:;
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    f0 = f0 + f3;
    f1 = f1 + f5;
    f2 = f2 + f4;
    a0 = sp + 16;
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    func_0881CF98(a0);
    goto L_08A4C62C;
L_08A4C62C:;
    sp = sp + 48;
    return;
}

/* 08A4C638 */
void func_08A4C638(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A4C638:;
    sp = sp - 80;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    s0 = a0 + 0;
    f20 = BITSF(0);
    v0 = LD32(a0);
    v1 = LD32(a0+8);
    {vr12=BITSF(v0);}
    v0 = LD32(a0+4);
    {vr13=BITSF(v0);}
    {vr14=BITSF(v1);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = D_08AF0068 - (104);
    if (cnd_) { goto L_08A4C6DC; }
    goto L_08A4C694;
L_08A4C694:;
    {float s0=vr0;float d0=sqrtf(s0);v[4]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(a0, FBITS(f2));
    ST32(s0+4, v0);
    ST32(a0+8, FBITS(f3));
    v0 = D_08AF0068 - (104);
    goto L_08A4C6DC;
L_08A4C6DC:;
    f21 = BITSF(LD32(v0+104));
    fcc = FCMP(f20, f21, 12);
    cnd_ = !fcc;
    v0 = D_08AF006C - (108);
    if (cnd_) { goto L_08A4C74C; }
    goto L_08A4C6F0;
L_08A4C6F0:;
    f0 = BITSF(LD32(v0+108));
    f3 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    v0 = D_08C2DFBC - (-8260);
    v1 = v0 - 8260;
    ST32(v0-8260, FBITS(f1));
    ST32(v1+8, FBITS(f3));
    ST32(v1+4, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    goto L_08A4C72C;
L_08A4C72C:;
    sp = sp + 80;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[12]=vr12;v[13]=vr13;v[14]=vr14;return; }
L_08A4C74C:;
    s2 = D_08C2DFBC - (-8260);
    s1 = s2 - 8260;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_08A4C8EC(); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A4C758;
L_08A4C758:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;__auto_type vr_t_ = func_08A4C9D4(a0, a1, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; });
    goto L_08A4C768;
L_08A4C768:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A4C838; }
    goto L_08A4C770;
L_08A4C770:;
    f1 = BITSF(LD32(v0-31328));
    v0 = D_08AF0070 - (112);
    f0 = BITSF(LD32(v0+112));
    f7 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0));
    f1 = f1 * f0;
    f2 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s2-8260));
    f6 = BITSF(LD32(s1+4));
    f7 = f7 * f1;
    f4 = f4 * f1;
    f2 = f2 * f1;
    f3 = BITSF(LD32(s1+8));
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f5 = f5 + f4;
    f6 = f6 + f2;
    f3 = f3 + f7;
    ST32(sp, FBITS(f4));
    v0 = FBITS(f5);
    {vr0=BITSF(v0);}
    v0 = FBITS(f6);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = D_08AF0074 - (116);
    f20 = BITSF(LD32(v0+116));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f7));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f12 = BITSF(v0);
    ST32(s2-8260, FBITS(f5));
    fcc = FCMP(f20, f0, 12);
    ST32(s1+4, FBITS(f6));
    cnd_ = !fcc;
    ST32(s1+8, FBITS(f3));
    if (cnd_) { goto L_08A4C72C; }
    goto L_08A4C808;
L_08A4C808:;
    a0 = s1 + 0;
    func_08A4C98C(a0, f12);
    goto L_08A4C810;
L_08A4C810:;
    f0 = BITSF(LD32(s2-8260));
    f2 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s1+8));
    f0 = f0 * f20;
    f2 = f2 * f20;
    f1 = f1 * f20;
    goto L_08A4C828;
L_08A4C828:;
    ST32(s2-8260, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_08A4C72C;
L_08A4C838:;
    f1 = BITSF(LD32(v0-31328));
    v0 = D_08AF0078 - (120);
    f0 = BITSF(LD32(v0+120));
    f2 = BITSF(LD32(s0+8));
    f7 = BITSF(LD32(s0));
    f1 = f1 * f0;
    f4 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s2-8260));
    f6 = BITSF(LD32(s1+4));
    f2 = f2 * f1;
    f7 = f7 * f1;
    f4 = f4 * f1;
    f3 = BITSF(LD32(s1+8));
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f5 = f5 - f7;
    f6 = f6 - f4;
    f3 = f3 - f2;
    ST32(sp+8, FBITS(f2));
    v0 = FBITS(f5);
    {vr0=BITSF(v0);}
    v0 = FBITS(f6);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f4));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f12 = BITSF(v0);
    ST32(s2-8260, FBITS(f5));
    fcc = FCMP(f0, f21, 12);
    ST32(s1+4, FBITS(f6));
    cnd_ = !fcc;
    ST32(s1+8, FBITS(f3));
    if (cnd_) { goto L_08A4C72C; }
    goto L_08A4C8C8;
L_08A4C8C8:;
    a0 = s1 + 0;
    func_08A4C98C(a0, f12);
    goto L_08A4C8D0;
L_08A4C8D0:;
    f0 = BITSF(LD32(s2-8260));
    f2 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s1+8));
    f0 = f0 * f21;
    f2 = f2 * f21;
    f1 = f1 * f21;
    goto L_08A4C828;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 08A4C8EC */
void func_08A4C8EC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_08A4C8EC:;
    a1 = D_08C2DFBC - (-8260);
    a0 = a1 - 8260;
    f2 = BITSF(LD32(a1-8260));
    f5 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08AF007C - (124);
    f6 = BITSF(LD32(v0+124));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    fcc = FCMP(f0, f6, 12);
    cnd_ = fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A4C984; }
    goto L_08A4C944;
L_08A4C944:;
    v1 = D_08AF0080 - (128);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1+128));
    f0 = f0 * f1;
    f0 = f3 - f0;
    fcc = FCMP(f0, f6, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f6; goto L_08A4C968; }
    goto L_08A4C968;
L_08A4C968:;
    f0 = f0 / f3;
    f1 = f4 * f0;
    f2 = f2 * f0;
    f0 = f5 * f0;
    ST32(a0+8, FBITS(f1));
    ST32(a1-8260, FBITS(f2));
    ST32(a0+4, FBITS(f0));
    goto L_08A4C984;
L_08A4C984:;
    return;
}

/* 08A4C98C */
void func_08A4C98C(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08A4C98C:;
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = fcc;
    v0 = D_08AF0084 - (132);
    if (cnd_) { goto L_08A4C9CC; }
    goto L_08A4C9A0;
L_08A4C9A0:;
    f0 = BITSF(LD32(v0+132));
    f2 = BITSF(LD32(a0));
    f3 = BITSF(LD32(a0+4));
    f0 = f0 / f12;
    f1 = BITSF(LD32(a0+8));
    f2 = f2 * f0;
    f1 = f1 * f0;
    f3 = f3 * f0;
    ST32(a0, FBITS(f2));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f3));
    goto L_08A4C9CC;
L_08A4C9CC:;
    return;
}

/* 08A4C9D4 */
u32 func_08A4C9D4(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6];
L_08A4C9D4:;
    v0 = LD32(a0);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    v1 = LD32(a0+4);
    {vr4=BITSF(v0);}
    a2 = LD32(a0+8);
    {vr5=BITSF(v1);}
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    {vr0=BITSF(v0);}
    a3 = LD32(a1+8);
    {vr1=BITSF(v1);}
    {vr6=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    f0 = BITSF(v0);
    f2 = f1 * f1;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08A4CA4C; }
    goto L_08A4CA30;
L_08A4CA30:;
    v0 = D_08AF0088 - (136);
    f0 = BITSF(LD32(v0+136));
    f0 = f12 * f0;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = 0 + 0; goto L_08A4CA4C; }
    goto L_08A4CA4C;
L_08A4CA4C:;
    v0 = v1 + 0;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;return v0; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 08A4CA54 */
float func_08A4CA54(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4CA54:;
    sp = sp - 64;
    s0 = D_08C2E070 - (-8080);
    f2 = BITSF(0);
    f3 = BITSF(LD32(s0-8080));
    fcc = FCMP(f3, f2, 2);
    cnd_ = !fcc;
    f0 = f2;
    if (cnd_) { goto L_08A4CAA4; }
    goto L_08A4CA7C;
L_08A4CA7C:;
    v0 = D_08C2DFB4 - (-8268);
    a0 = LD32(v0-8268);
    v1 = 6;
    cnd_ = a0 == v1;
    v0 = D_08AF008C - (140);
    if (cnd_) { goto L_08A4CA94; }
    goto L_08A4CA90;
L_08A4CA90:;
    f0 = BITSF(LD32(v0+140));
    goto L_08A4CA94;
L_08A4CA94:;
    sp = sp + 64;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return f0; }
L_08A4CAA4:;
    fcc = FCMP(f2, f3, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A4CAF4; }
    goto L_08A4CAB4;
L_08A4CAB4:;
    func_08A4C348(a0);
    goto L_08A4CABC;
L_08A4CABC:;
    f2 = BITSF(LD32(s0-8080));
    v0 = LD32(sp);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f0 = f2 - f1;
    f0 = f0 / f2;
    goto L_08A4CA94;
L_08A4CAF4:;
    a0 = sp + 0;
    func_08A4C348(a0);
    goto L_08A4CAFC;
L_08A4CAFC:;
    f2 = BITSF(LD32(s0-8080));
    v0 = LD32(sp);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    {vr0=BITSF(v0);}
    v1 = LD32(sp+8);
    v0 = LD32(sp+4);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f0 = f0 / f2;
    goto L_08A4CA94;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08A4CB34 */
u32 func_08A4CB34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A4CB34:;
    v0 = D_08C2E08C - (-8052);
    v1 = LD_U8(v0-8052);
    a1 = (s32)a0 < 17;
    cnd_ = v1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A4CB64; }
    goto L_08A4CB48;
L_08A4CB48:;
    v0 = D_08B1C85C - (-14244);
    v0 = v0 - 14244;
    v1 = a0 << 2;
    v1 = v1 + v0;
    cnd_ = a1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A4CB64; }
    goto L_08A4CB60;
L_08A4CB60:;
    v0 = LD32(v1);
    goto L_08A4CB64;
L_08A4CB64:;
    return v0;
}

/* 08A4CB6C */
void func_08A4CB6C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4CB6C:;
    sp = sp - 16;
    s2 = D_08C2E08C - (-8052);
    v0 = LD_U8(s2-8052);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4CBB4; }
    goto L_08A4CB8C;
L_08A4CB8C:;
    v0 = D_08B1C85C - (-14244);
    s1 = v0 - 14244;
    s0 = 16;
    a0 = LD32(s1);
    goto L_08A4CB9C;
L_08A4CB9C:;
    s0 = s0 - 1;
    s1 = s1 + 4;
    { u64 r_ = func_08839BE8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4CBA8;
L_08A4CBA8:;
    cnd_ = (s32)s0 >= 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A4CB9C; }
    goto L_08A4CBB0;
L_08A4CBB0:;
    ST8(s2-8052, 0);
    goto L_08A4CBB4;
L_08A4CBB4:;
    sp = sp + 16;
    return;
}

/* 08A4CBCC */
void func_08A4CBCC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4CBCC:;
    sp = sp - 16;
    s1 = D_08C2E08C - (-8052);
    v0 = LD_U8(s1-8052);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4CBFC; }
    goto L_08A4CBE8;
L_08A4CBE8:;
    sp = sp + 16;
    return;
L_08A4CBFC:;
    a0 = D_08AE55F8 - (22008);
    a0 = a0 + 22008;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, a3, t0, t1, t2, t3);
    goto L_08A4CC0C;
L_08A4CC0C:;
    a0 = D_08AE5620 - (22048);
    a0 = a0 + 22048;
    s0 = D_08B1C85C - (-14244);
    a1 = 24616;
    ST32(s0-14244, v0);
    s0 = s0 - 14244;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CC28;
L_08A4CC28:;
    ST32(s0+16, v0);
    a0 = D_08AE5648 - (22088);
    a0 = a0 + 22088;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CC3C;
L_08A4CC3C:;
    ST32(s0+12, v0);
    a0 = D_08AE566C - (22124);
    a0 = a0 + 22124;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CC50;
L_08A4CC50:;
    ST32(s0+4, v0);
    a0 = D_08AE5694 - (22164);
    a0 = a0 + 22164;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CC64;
L_08A4CC64:;
    ST32(s0+8, v0);
    a0 = D_08AE56C0 - (22208);
    a0 = a0 + 22208;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CC78;
L_08A4CC78:;
    ST32(s0+20, v0);
    a0 = D_08AE56E4 - (22244);
    a0 = a0 + 22244;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CC8C;
L_08A4CC8C:;
    ST32(s0+24, v0);
    a0 = D_08AE5708 - (22280);
    a0 = a0 + 22280;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CCA0;
L_08A4CCA0:;
    ST32(s0+28, v0);
    a0 = D_08AE5730 - (22320);
    a0 = a0 + 22320;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CCB4;
L_08A4CCB4:;
    ST32(s0+32, v0);
    a0 = D_08AE5758 - (22360);
    a0 = a0 + 22360;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CCC8;
L_08A4CCC8:;
    ST32(s0+36, v0);
    a0 = D_08AE5780 - (22400);
    a0 = a0 + 22400;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CCDC;
L_08A4CCDC:;
    ST32(s0+40, v0);
    a0 = D_08AE57AC - (22444);
    a0 = a0 + 22444;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CCF0;
L_08A4CCF0:;
    ST32(s0+44, v0);
    a0 = D_08AE57D8 - (22488);
    a0 = a0 + 22488;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CD04;
L_08A4CD04:;
    ST32(s0+48, v0);
    a0 = D_08AE5804 - (22532);
    a0 = a0 + 22532;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CD18;
L_08A4CD18:;
    ST32(s0+52, v0);
    a0 = D_08AE5838 - (22584);
    a0 = a0 + 22584;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CD2C;
L_08A4CD2C:;
    ST32(s0+56, v0);
    a0 = D_08AE5864 - (22628);
    a0 = a0 + 22628;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CD40;
L_08A4CD40:;
    ST32(s0+60, v0);
    a0 = D_08AE5894 - (22676);
    a0 = a0 + 22676;
    a1 = 24616;
    v0 = func_08A4CD68(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A4CD54;
L_08A4CD54:;
    ST32(s0+64, v0);
    func_0883A610(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A4CD5C;
L_08A4CD5C:;
    v0 = 1;
    ST8(s1-8052, v0);
    goto L_08A4CBE8;
}

/* 08A4CD68 */
u32 func_08A4CD68(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4CD68:;
    sp = sp - 16;
    v0 = D_08B263B8 - (25528);
    s0 = a1 + 0;
    a2 = 0 + 0;
    a1 = LD32(v0+25528);
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A4CD88;
L_08A4CD88:;
    v1 = v0 + 0;
    a0 = v0 < 0xfau;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A4CDB8; }
    goto L_08A4CD9C;
L_08A4CD9C:;
    cnd_ = a0 == 0;
    a1 = v1 << 2;
    if (cnd_) { goto L_08A4CDB8; }
    goto L_08A4CDA4;
L_08A4CDA4:;
    v0 = D_08B25FC4 - (24516);
    v0 = v0 + 24516;
    v0 = a1 + v0;
    ST32(v0, s0);
    goto L_08A4CDB8;
L_08A4CDB8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A4CDC8 */
void func_08A4CDC8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4CDC8:;
    sp = sp - 16;
    s2 = D_08C2E0D0 - (-7984);
    v0 = LD_U8(s2-7984);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4CE20; }
    goto L_08A4CDE8;
L_08A4CDE8:;
    v0 = D_08C2E090 - (-8048);
    s1 = v0 - 8048;
    s0 = 0 + 0;
    goto L_08A4CDF4;
L_08A4CDF4:;
    a0 = s0 + 0;
    v0 = func_08A4B3B4(a0);
    goto L_08A4CDFC;
L_08A4CDFC:;
    a0 = v0 + 0;
    s0 = s0 + 1;
    v0 = func_08A4D1C4(a0, 0, 0);
    goto L_08A4CE08;
L_08A4CE08:;
    v1 = s0 < 0x10u;
    ST32(s1, v0);
    cnd_ = v1 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A4CDF4; }
    goto L_08A4CE18;
L_08A4CE18:;
    v0 = 1;
    ST8(s2-7984, v0);
    goto L_08A4CE20;
L_08A4CE20:;
    sp = sp + 16;
    return;
}

/* 08A4CE38 */
void func_08A4CE38(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4CE38:;
    sp = sp - 32;
    s4 = D_08C2E0D0 - (-7984);
    v0 = LD_U8(s4-7984);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4CF5C; }
    goto L_08A4CE60;
L_08A4CE60:;
    v0 = D_08C2E090 - (-8048);
    s2 = v0 - 8048;
    s0 = 0 + 0;
    s1 = D_08B44C2C - (19500);
    s3 = (u32)-1;
    a1 = s0 << 2;
    goto L_08A4CE78;
L_08A4CE78:;
    v0 = a1 + s2;
    t1 = LD32(v0);
    cnd_ = t1 == s3;
    t3 = LD32(s1+19500);
    if (cnd_) { goto L_08A4CF3C; }
    goto L_08A4CE88;
L_08A4CE88:;
    v0 = LD32(t3+12);
    cnd_ = t1 == v0;
    if (cnd_) { a0 = LD32(t3+8); goto L_08A4CF28; }
    goto L_08A4CE94;
L_08A4CE94:;
    a0 = LD32(t3);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A4CED4; }
    goto L_08A4CEA0;
L_08A4CEA0:;
    a2 = LD32(a0+8);
    goto L_08A4CEA4;
L_08A4CEA4:;
    v0 = (s32)t1 < (s32)a2;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A4CEC4; }
    goto L_08A4CEB0;
L_08A4CEB0:;
    v0 = LD32(t3+4);
    v0 = a2 + v0;
    v0 = (s32)t1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4CED4; }
    goto L_08A4CEC4;
L_08A4CEC4:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a2 = LD32(a0+8); goto L_08A4CEA4; }
    goto L_08A4CED0;
L_08A4CED0:;
    v1 = 0 + 0;
    goto L_08A4CED4;
L_08A4CED4:;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A4CF7C; }
    goto L_08A4CEDC;
L_08A4CEDC:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    t2 = LD32(a0+12);
    cnd_ = (s32)t2 <= 0;
    t0 = t1 - v0;
    if (cnd_) { goto L_08A4CF10; }
    goto L_08A4CEF0;
L_08A4CEF0:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_08A4CEF8;
L_08A4CEF8:;
    a3 = a3 + 1;
    a2 = (s32)a3 < (s32)t2;
    cnd_ = v0 == t0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A4CF84; }
    goto L_08A4CF08;
L_08A4CF08:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A4CEF8; }
    goto L_08A4CF10;
L_08A4CF10:;
    v0 = 0 + 0;
    goto L_08A4CF14;
L_08A4CF14:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A4CF28; }
    goto L_08A4CF1C;
L_08A4CF1C:;
    a0 = v0 + 0;
    ST32(t3+12, t1);
    ST32(t3+8, v0);
    goto L_08A4CF28;
L_08A4CF28:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = a1 + s2; goto L_08A4CF40; }
    goto L_08A4CF30;
L_08A4CF30:;
    v0 = LD32(a0+24);
    v0 = v0 | 0x1;
    ST32(a0+24, v0);
    goto L_08A4CF3C;
L_08A4CF3C:;
    a1 = a1 + s2;
    goto L_08A4CF40;
L_08A4CF40:;
    a0 = s1 + 19500;
    s0 = s0 + 1;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4CF4C;
L_08A4CF4C:;
    v0 = s0 < 0x10u;
    cnd_ = v0 != 0;
    a1 = s0 << 2;
    if (cnd_) { goto L_08A4CE78; }
    goto L_08A4CF58;
L_08A4CF58:;
    ST8(s4-7984, 0);
    goto L_08A4CF5C;
L_08A4CF5C:;
    sp = sp + 32;
    return;
L_08A4CF7C:;
    a0 = 0 + 0;
    goto L_08A4CF28;
L_08A4CF84:;
    v1 = LD32(v1);
    v0 = t0 << 4;
    v0 = v0 - t0;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_08A4CF14;
}

/* 08A4CF9C */
void func_08A4CF9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4CF9C:;
    sp = sp - 16;
    v0 = D_08C2E0D0 - (-7984);
    a2 = (s32)a0 < 16;
    v1 = LD_U8(v0-7984);
    cnd_ = v1 == 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A4CFD4; }
    goto L_08A4CFBC;
L_08A4CFBC:;
    v0 = D_08C2E090 - (-8048);
    v1 = a0 << 2;
    v0 = v0 - 8048;
    v1 = v1 + v0;
    cnd_ = a2 != 0;
    s0 = a1 ^ 0x1;
    if (cnd_) { goto L_08A4CFE4; }
    goto L_08A4CFD4;
L_08A4CFD4:;
    sp = sp + 16;
    return;
L_08A4CFE4:;
    v0 = D_08B44C2C - (19500);
    a1 = LD32(v1);
    a0 = LD32(v0+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4CFF4;
L_08A4CFF4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A4CFD4; }
    goto L_08A4CFFC;
L_08A4CFFC:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 0)) | ((s0 & 0x1) << 0);
    ST32(v1+24, v0);
    goto L_08A4CFD4;
}

/* 08A4D00C */
void func_08A4D00C(u32 a0, u32 a1, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4D00C:;
    sp = sp - 32;
    v0 = D_08C2E0D0 - (-7984);
    a2 = (s32)a0 < 16;
    s0 = a1 & 0xff;
    f23 = f14;
    f22 = f13;
    f21 = f15;
    v1 = LD_U8(v0-7984);
    cnd_ = v1 == 0;
    f20 = f12;
    if (cnd_) { goto L_08A4D06C; }
    goto L_08A4D054;
L_08A4D054:;
    v0 = D_08C2E090 - (-8048);
    v1 = a0 << 2;
    v0 = v0 - 8048;
    v1 = v1 + v0;
    cnd_ = a2 != 0;
    s2 = D_08B44C2C - (19500);
    if (cnd_) { goto L_08A4D094; }
    goto L_08A4D06C;
L_08A4D06C:;
    goto L_08A4D070;
L_08A4D070:;
    sp = sp + 32;
    return;
L_08A4D094:;
    s1 = LD32(v1);
    a0 = LD32(s2+19500);
    a1 = s1 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D0A4;
L_08A4D0A4:;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A4D0B0; }
    goto L_08A4D0AC;
L_08A4D0AC:;
    ST32(v0+28, FBITS(f20));
    goto L_08A4D0B0;
L_08A4D0B0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A4D110; }
    goto L_08A4D0B8;
L_08A4D0B8:;
    f0 = func_08A4D128();
    goto L_08A4D0C0;
L_08A4D0C0:;
    v0 = D_08AF0090 - (144);
    f1 = BITSF(LD32(v0+144));
    a0 = LD32(s2+19500);
    a1 = s1 + 0;
    f2 = f1 - f22;
    f3 = f1 - f21;
    f1 = f1 - f23;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f1 = f1 * f0;
    f22 = f22 + f2;
    f20 = f21 + f3;
    f23 = f23 + f1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D0F8;
L_08A4D0F8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4D070; }
    goto L_08A4D100;
L_08A4D100:;
    ST32(v0+44, FBITS(f20));
    goto L_08A4D104;
L_08A4D104:;
    ST32(v0+36, FBITS(f22));
    ST32(v0+40, FBITS(f23));
    goto L_08A4D06C;
L_08A4D110:;
    a0 = LD32(s2+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D118;
L_08A4D118:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4D070; }
    goto L_08A4D120;
L_08A4D120:;
    ST32(v0+44, FBITS(f21));
    goto L_08A4D104;
}

/* 08A4D128 */
float func_08A4D128(void)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A4D128:;
    sp = sp - 48;
    v0 = D_08AF0094 - (148);
    v1 = D_08B285B4 - (-31308);
    f20 = BITSF(LD32(v0+148));
    f12 = BITSF(LD32(v1-31308));
    f13 = f20;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4D14C;
L_08A4D14C:;
    v0 = D_08AF0098 - (152);
    f1 = BITSF(LD32(v0+152));
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(0);
    f0 = f0 * f1;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AF009C - (156);
    f1 = f0 + f20;
    f0 = BITSF(LD32(v0+156));
    f0 = f1 * f0;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_08A4D1A4; }
    goto L_08A4D1A4;
L_08A4D1A4:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f20; goto L_08A4D1B4; }
    goto L_08A4D1B4;
L_08A4D1B4:;
    sp = sp + 48;
    { v[0]=vr0;return f0; }
    v[0]=vr0;
}

/* 08A4D1C4 */
u32 func_08A4D1C4(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4D1C4:;
    sp = sp - 32;
    s3 = D_08B44C2C - (19500);
    v0 = s3 + 19500;
    s1 = a0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088EBDD0(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4D1F0;
L_08A4D1F0:;
    a1 = v0 + 0;
    a0 = LD32(s3+19500);
    s2 = v0 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D200;
L_08A4D200:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A4D288; }
    goto L_08A4D208;
L_08A4D208:;
    v1 = LD32(v0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s1));
    if (cnd_) { goto L_08A4D26C; }
    goto L_08A4D218;
L_08A4D218:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4D25C; }
    goto L_08A4D22C;
L_08A4D22C:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4D25C; }
    goto L_08A4D244;
L_08A4D244:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s1+8)); goto L_08A4D270; }
    goto L_08A4D25C;
L_08A4D25C:;
    a0 = s0 + 0;
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A4D264;
L_08A4D264:;
    v1 = LD32(s0+24);
    f2 = BITSF(LD32(s1));
    goto L_08A4D26C;
L_08A4D26C:;
    f1 = BITSF(LD32(s1+8));
    goto L_08A4D270;
L_08A4D270:;
    f0 = BITSF(LD32(s1+4));
    v0 = v1 | 0x4;
    ST32(s0+24, v0);
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_08A4D288;
L_08A4D288:;
    a0 = LD32(s3+19500);
    a1 = s2 + 0;
    s1 = D_08B44C2C - (19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D298;
L_08A4D298:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A4D2AC; }
    goto L_08A4D2A0;
L_08A4D2A0:;
    v0 = D_08AF00A0 - (160);
    f0 = BITSF(LD32(v0+160));
    ST32(v1+28, FBITS(f0));
    goto L_08A4D2AC;
L_08A4D2AC:;
    a0 = 0 + 0;
    v0 = func_08A4CB34(a0);
    goto L_08A4D2B4;
L_08A4D2B4:;
    a0 = LD32(s1+19500);
    a1 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D2C4;
L_08A4D2C4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+32, s0); goto L_08A4D2CC; }
    goto L_08A4D2CC;
L_08A4D2CC:;
    a0 = LD32(s1+19500);
    a1 = s2 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D2D8;
L_08A4D2D8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A4D2F4; }
    goto L_08A4D2E0;
L_08A4D2E0:;
    v0 = D_08AF00A4 - (164);
    f0 = BITSF(LD32(v0+164));
    ST32(v1+44, FBITS(f0));
    ST32(v1+36, FBITS(f0));
    ST32(v1+40, FBITS(f0));
    goto L_08A4D2F4;
L_08A4D2F4:;
    v0 = s2 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A4D314 */
rv_t func_08A4D314(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A4D314:;
    sp = sp - 48;
    s2 = a0 ^ 0x1;
    v0 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v1 = s1 < 0x1u;
    t2 = v1 & v0;
    cnd_ = t2 == 0;
    if (cnd_) { goto L_08A4D664; }
    goto L_08A4D340;
L_08A4D340:;
    v0 = D_08AF00A8 - (168);
    f3 = BITSF(LD32(v0+168));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AF00AC - (172);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f7 = BITSF(LD32(v1+172));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f3;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f1 = f1 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f3;
    a2 = D_08C2DDF0 - (-8720);
    f2 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    a3 = D_08C2DE00 - (-8704);
    t0 = D_08C2DE10 - (-8688);
    f2 = f2 * f3;
    t1 = D_08C2DE20 - (-8672);
    v0 = t1 - 8672;
    v1 = a2 - 8720;
    a0 = a3 - 8704;
    a1 = t0 - 8688;
    ST32(a1+12, FBITS(f1));
    ST32(v1+4, FBITS(f4));
    ST32(v1+12, FBITS(f1));
    ST32(a0+4, FBITS(f6));
    ST32(a0+12, FBITS(f1));
    ST32(a2-8720, FBITS(f2));
    ST32(a3-8704, FBITS(f5));
    ST32(t0-8688, FBITS(f1));
    ST32(t1-8672, FBITS(f7));
    ST32(v0+28, 0);
    ST32(v0+16, FBITS(f7));
    ST32(v1+8, FBITS(f5));
    ST32(a1+4, FBITS(f1));
    ST32(a0+8, FBITS(f6));
    ST32(a1+8, FBITS(f1));
    ST32(v0+4, FBITS(f7));
    ST32(v0+8, 0);
    ST32(v0+12, FBITS(f7));
    ST32(v0+20, 0);
    cnd_ = t2 == 0;
    ST32(v0+24, 0);
    if (cnd_) { goto L_08A4D664; }
    goto L_08A4D414;
L_08A4D414:;
    s0 = D_08AE58BC - (22716);
    s0 = s0 + 22716;
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D424;
L_08A4D424:;
    v1 = D_08B1C6D4 - (-14636);
    v1 = v1 - 14636;
    ST32(v1+20, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D438;
L_08A4D438:;
    v1 = D_08B1C730 - (-14544);
    v1 = v1 - 14544;
    ST32(v1+20, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D44C;
L_08A4D44C:;
    v1 = D_08B1C78C - (-14452);
    v1 = v1 - 14452;
    ST32(v1+20, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4D460;
L_08A4D460:;
    v1 = D_08AF00B4 - (180);
    f1 = BITSF(LD32(v1+180));
    v1 = D_08B1C7E8 - (-14360);
    v1 = v1 - 14360;
    ST32(v1+20, v0);
    v0 = D_08AF00BC - (188);
    t0 = D_08C2DF20 - (-8416);
    f0 = BITSF(LD32(v0+188));
    v0 = D_08AF00D8 - (216);
    a0 = D_08AF00B0 - (176);
    ST32(t0-8416, FBITS(f0));
    t2 = D_08C2DF00 - (-8448);
    a1 = t2 - 8448;
    f0 = BITSF(LD32(v0+216));
    f2 = BITSF(LD32(a0+176));
    v0 = D_08AF00DC - (220);
    a0 = t0 - 8416;
    ST32(a1+28, FBITS(f1));
    t1 = D_08C2DF40 - (-8384);
    a2 = t1 - 8384;
    ST32(a0+28, FBITS(f0));
    t3 = D_08C2DF60 - (-8352);
    v1 = t3 - 8352;
    f0 = BITSF(LD32(v0+220));
    v0 = D_08AF00B8 - (184);
    ST32(t2-8448, FBITS(f2));
    t4 = D_08C2DF80 - (-8320);
    a3 = t4 - 8320;
    ST32(t1-8384, FBITS(f0));
    t0 = D_08C2DFA0 - (-8288);
    t1 = t0 - 8288;
    f0 = BITSF(LD32(v0+184));
    v0 = D_08AF00C0 - (192);
    ST32(a1+16, FBITS(f2));
    ST32(a1+24, FBITS(f0));
    f0 = BITSF(LD32(v0+192));
    v0 = D_08AF00C4 - (196);
    ST32(a0+4, FBITS(f0));
    f0 = BITSF(LD32(v0+196));
    v0 = D_08AF00C8 - (200);
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(v0+200));
    v0 = D_08AF00CC - (204);
    ST32(a0+12, FBITS(f0));
    f0 = BITSF(LD32(v0+204));
    v0 = D_08AF00D0 - (208);
    ST32(a0+16, FBITS(f0));
    f0 = BITSF(LD32(v0+208));
    v0 = D_08AF00D4 - (212);
    ST32(a0+20, FBITS(f0));
    f0 = BITSF(LD32(v0+212));
    v0 = D_08AF00E0 - (224);
    ST32(a0+24, FBITS(f0));
    f0 = BITSF(LD32(v0+224));
    v0 = D_08AF00E8 - (232);
    f3 = BITSF(LD32(v0+232));
    v0 = D_08AF00E4 - (228);
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v0+228));
    v0 = D_08AF00F8 - (248);
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    ST32(a1+12, FBITS(f1));
    ST32(a1+20, FBITS(f1));
    ST32(a2+8, FBITS(f0));
    f0 = BITSF(LD32(v0+248));
    v0 = D_08AF00FC - (252);
    ST32(a2+28, FBITS(f0));
    f0 = BITSF(LD32(v0+252));
    v0 = D_08AF0118 - (280);
    ST32(t3-8352, FBITS(f0));
    f0 = BITSF(LD32(v0+280));
    v0 = D_08AF011C - (284);
    ST32(v1+28, FBITS(f0));
    f0 = BITSF(LD32(v0+284));
    v0 = D_08AF00EC - (236);
    ST32(t4-8320, FBITS(f0));
    f0 = BITSF(LD32(v0+236));
    v0 = D_08AF00F0 - (240);
    ST32(a2+16, FBITS(f0));
    f0 = BITSF(LD32(v0+240));
    v0 = D_08AF00F4 - (244);
    ST32(a2+20, FBITS(f0));
    f0 = BITSF(LD32(v0+244));
    v0 = D_08AF0100 - (256);
    ST32(a2+24, FBITS(f0));
    f0 = BITSF(LD32(v0+256));
    v0 = D_08AF0104 - (260);
    ST32(v1+4, FBITS(f0));
    f0 = BITSF(LD32(v0+260));
    v0 = D_08AF0108 - (264);
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0+264));
    v0 = D_08AF010C - (268);
    ST32(v1+12, FBITS(f0));
    f0 = BITSF(LD32(v0+268));
    v0 = D_08AF0110 - (272);
    ST32(v1+16, FBITS(f0));
    f0 = BITSF(LD32(v0+272));
    v0 = D_08AF0114 - (276);
    ST32(v1+20, FBITS(f0));
    f0 = BITSF(LD32(v0+276));
    v0 = D_08AF0120 - (288);
    ST32(v1+24, FBITS(f0));
    f0 = BITSF(LD32(v0+288));
    v0 = D_08AF0124 - (292);
    ST32(a3+4, FBITS(f0));
    f0 = BITSF(LD32(v0+292));
    v0 = D_08AF0128 - (296);
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(v0+296));
    v0 = D_08AF012C - (300);
    ST32(a3+12, FBITS(f0));
    f0 = BITSF(LD32(v0+300));
    v0 = D_08AF0134 - (308);
    ST32(a2+12, FBITS(f3));
    ST32(a3+16, FBITS(f0));
    f0 = BITSF(LD32(v0+308));
    v0 = D_08AF0138 - (312);
    ST32(a3+28, FBITS(f0));
    f0 = BITSF(LD32(v0+312));
    v0 = D_08AF013C - (316);
    ST32(t0-8288, FBITS(f0));
    f0 = BITSF(LD32(v0+316));
    v0 = D_08AF0130 - (304);
    ST32(a3+24, FBITS(f3));
    ST32(t1+4, FBITS(f0));
    f0 = BITSF(LD32(v0+304));
    ST32(a3+20, FBITS(f0));
    goto L_08A4D664;
L_08A4D664:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4D9C8; }
    goto L_08A4D678;
L_08A4D678:;
    v0 = D_08AF0154 - (340);
    f1 = BITSF(LD32(v0+340));
    v0 = D_08AF0144 - (324);
    f0 = BITSF(LD32(v0+324));
    v0 = D_08AF0148 - (328);
    a3 = D_08C2DFA8 - (-8280);
    ST32(sp, FBITS(f0));
    a1 = a3 - 8280;
    t0 = D_08C2DFC8 - (-8248);
    f0 = BITSF(LD32(v0+328));
    v0 = D_08AF014C - (332);
    ST32(sp+16, FBITS(f1));
    t2 = D_08C2DFBC - (-8260);
    a0 = t0 - 8248;
    ST32(sp+4, FBITS(f0));
    t6 = t2 - 8260;
    t7 = a0 + 24;
    f0 = BITSF(LD32(v0+332));
    v0 = D_08AF0150 - (336);
    ST32(sp+20, 0);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0+336));
    v0 = D_08AF0140 - (320);
    v1 = LD32(sp);
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(v0+320));
    v0 = D_08AF013C - (316);
    a2 = LD32(sp+4);
    t1 = LD32(sp+8);
    t3 = LD32(sp+12);
    t4 = LD32(sp+16);
    t5 = LD32(sp+20);
    ST32(a3-8280, FBITS(f0));
    a3 = D_08B45A9C - (23196);
    f0 = BITSF(LD32(v0+316));
    v0 = D_08AF0158 - (344);
    ST32(a1+4, FBITS(f0));
    f0 = BITSF(LD32(v0+344));
    v0 = D_08AF015C - (348);
    ST32(t0-8248, v1);
    v1 = D_08AF0160 - (352);
    t0 = D_08C2E074 - (-8076);
    ST32(t2-8260, 0);
    a1 = t0 - 8076;
    ST32(t6+8, 0);
    ST32(a0+4, a2);
    a2 = a3 + 23196;
    ST32(a0+8, t1);
    ST32(a0+12, t3);
    ST32(a0+16, t4);
    ST32(a0+20, t5);
    ST32(t6+4, 0);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0+348));
    v0 = D_08AF0164 - (356);
    f2 = BITSF(LD32(v0+356));
    ST32(sp+4, FBITS(f0));
    v0 = LD32(sp);
    f0 = BITSF(LD32(v1+352));
    ST32(sp+8, FBITS(f0));
    ST32(a0+24, v0);
    v0 = LD32(sp+4);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, 0);
    ST32(t7+4, v0);
    v1 = LD32(sp+8);
    ST32(t7+8, v1);
    v0 = LD32(sp+12);
    ST32(t7+12, v0);
    v1 = LD32(sp+16);
    ST32(t7+16, v1);
    v0 = LD32(sp+20);
    ST32(t7+20, v0);
    v0 = D_08AF0168 - (360);
    t7 = a0 + 48;
    f0 = BITSF(LD32(v0+360));
    v0 = D_08AF016C - (364);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0+364));
    v0 = D_08AF0170 - (368);
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(v0+368));
    v0 = LD32(sp);
    ST32(sp+8, FBITS(f0));
    ST32(a0+48, v0);
    v0 = LD32(sp+4);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, 0);
    ST32(t7+4, v0);
    v1 = LD32(sp+8);
    ST32(t7+8, v1);
    v0 = LD32(sp+12);
    ST32(t7+12, v0);
    v1 = LD32(sp+16);
    ST32(t7+16, v1);
    v0 = LD32(sp+20);
    ST32(t7+20, v0);
    v0 = D_08AF0174 - (372);
    t7 = a0 + 72;
    f0 = BITSF(LD32(v0+372));
    v0 = D_08AF0178 - (376);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0+376));
    v0 = D_08AF017C - (380);
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(v0+380));
    v0 = LD32(sp);
    ST32(sp+8, FBITS(f0));
    ST32(a0+72, v0);
    v0 = LD32(sp+4);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, 0);
    ST32(t7+4, v0);
    v1 = LD32(sp+8);
    ST32(t7+8, v1);
    v0 = LD32(sp+12);
    ST32(t7+12, v0);
    v1 = LD32(sp+16);
    ST32(t7+16, v1);
    v0 = LD32(sp+20);
    ST32(t7+20, v0);
    v0 = D_08AF0180 - (384);
    t7 = a0 + 96;
    f0 = BITSF(LD32(v0+384));
    v0 = D_08AF0184 - (388);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0+388));
    v0 = D_08AF0188 - (392);
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(v0+392));
    v0 = LD32(sp);
    ST32(sp+8, FBITS(f0));
    ST32(a0+96, v0);
    v0 = LD32(sp+4);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, 0);
    ST32(t7+4, v0);
    v1 = LD32(sp+8);
    ST32(t7+8, v1);
    v0 = LD32(sp+12);
    ST32(t7+12, v0);
    v1 = LD32(sp+16);
    ST32(t7+16, v1);
    v0 = LD32(sp+20);
    ST32(t7+20, v0);
    t7 = a0 + 120;
    ST32(sp, 0);
    v0 = LD32(sp);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(a0+120, v0);
    v0 = LD32(sp+4);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, 0);
    ST32(t7+4, v0);
    v1 = LD32(sp+8);
    ST32(t7+8, v1);
    v0 = LD32(sp+12);
    ST32(t7+12, v0);
    v1 = LD32(sp+16);
    ST32(t7+16, v1);
    v0 = LD32(sp+20);
    ST32(t7+20, v0);
    v0 = D_08AF018C - (396);
    t7 = a0 + 144;
    f0 = BITSF(LD32(v0+396));
    v0 = D_08AF0190 - (400);
    ST32(sp+12, FBITS(f2));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0+400));
    v0 = LD32(sp);
    ST32(sp+16, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(a0+144, v0);
    v0 = LD32(sp+4);
    ST32(sp+20, 0);
    ST32(sp+8, 0);
    ST32(t7+4, v0);
    v1 = LD32(sp+8);
    ST32(t7+8, v1);
    v0 = LD32(sp+12);
    ST32(t7+12, v0);
    v1 = LD32(sp+16);
    ST32(t7+16, v1);
    v0 = LD32(sp+20);
    ST32(t7+20, v0);
    f0 = BITSF(LD32(a3+23196));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    ST32(sp, FBITS(f0));
    v0 = LD32(sp);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(t0-8076, v0);
    ST32(sp+12, 0);
    ST32(sp+16, 0);
    v0 = LD32(sp+4);
    ST32(sp+20, 0);
    ST32(a1+4, v0);
    v1 = LD32(sp+8);
    ST32(a1+8, v1);
    v0 = LD32(sp+20);
    ST32(a1+20, v0);
    v1 = LD32(sp+12);
    ST32(a1+12, v1);
    v0 = LD32(sp+16);
    ST32(a1+16, v0);
    goto L_08A4D9C8;
L_08A4D9C8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4D9DC */
rv_t func_08A4D9DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4D9DC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A4D314(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4D9F0;
L_08A4D9F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4D9FC */
void func_08A4D9FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A4D9FC:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    s2 = a0 + 0;
    a0 = 0 + 0;
    s1 = a2 & 0xff;
    s0 = a3 & 0xff;
    f21 = f12;
    f20 = f13;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A4DB20; }
    goto L_08A4DA38;
L_08A4DA38:;
    v0 = D_08B285B4 - (-31308);
    goto L_08A4DA3C;
L_08A4DA3C:;
    f0 = BITSF(LD32(v0-31308));
    v1 = D_08C2E104 - (-7932);
    a1 = v1 - 7932;
    v1 = LD32(a1+248);
    f0 = f0 + f20;
    v0 = LD32(sp+20);
    v0 = (v0 & ~(0x1u << 0)) | ((s0 & 0x1) << 0);
    v0 = (v0 & ~(0x1u << 3)) | ((s1 & 0x1) << 3);
    a0 = v0 + 0;
    v1 = v1 < 0xau;
    a2 = 0xcccc0000u;
    a3 = (u32)-1;
    a0 = (a0 & ~(0x3u << 1)) | ((0 & 0x3) << 1);
    v1 = v1 ^ 0x1;
    a2 = a2 | 0xcccd;
    ST32(sp+8, FBITS(f21));
    ST32(sp+16, FBITS(f0));
    ST32(sp+12, 0);
    ST32(sp, s2);
    ST32(sp+4, a3);
    cnd_ = v1 != 0;
    ST32(sp+20, a0);
    if (cnd_) { goto L_08A4DB00; }
    goto L_08A4DA94;
L_08A4DA94:;
    v1 = LD32(a1+244);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 3;
    v0 = v0 + a1;
    ST32(v0+20, a0);
    ST32(v0, s2);
    ST32(v0+4, a3);
    v1 = LD32(sp+8);
    ST32(v0+8, v1);
    a0 = LD32(sp+12);
    ST32(v0+12, a0);
    v1 = LD32(sp+16);
    ST32(v0+16, v1);
    a0 = LD32(a1+244);
    v0 = LD32(a1+248);
    a0 = a0 + 1;
    { u64 p_ = (u64)a0 * a2; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = v0 + 1;
    ST32(a1+248, v0);
    v1 = hi;
    v1 = v1 >> 3;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    a0 = a0 - v0;
    ST32(a1+244, a0);
    goto L_08A4DB00;
L_08A4DB00:;
    sp = sp + 64;
    return;
L_08A4DB20:;
    func_08A4DCA0(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4DB28;
L_08A4DB28:;
    v0 = D_08B285B4 - (-31308);
    goto L_08A4DA3C;
}

/* 08A4DB30 */
void func_08A4DB30(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4DB30:;
    sp = sp - 16;
    v0 = D_08C2E104 - (-7932);
    s1 = v0 - 7932;
    v1 = LD32(s1+248);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A4DBCC; }
    goto L_08A4DB50;
L_08A4DB50:;
    v0 = LD32(s1+240);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 3;
    s0 = v1 + s1;
    a0 = LD32(s0+20);
    v0 = a0 & 0x2;
    cnd_ = v0 != 0;
    v0 = D_08B285B4 - (-31308);
    if (cnd_) { goto L_08A4DC40; }
    goto L_08A4DB74;
L_08A4DB74:;
    v1 = a0 & 0x4;
    cnd_ = v1 != 0;
    f1 = BITSF(LD32(v0-31308));
    if (cnd_) { goto L_08A4DB98; }
    goto L_08A4DB80;
L_08A4DB80:;
    f0 = BITSF(LD32(s0+8));
    v0 = a0 | 0x4;
    ST32(s0+20, v0);
    f0 = f1 + f0;
    a0 = v0 + 0;
    ST32(s0+12, FBITS(f0));
    goto L_08A4DB98;
L_08A4DB98:;
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+12)); goto L_08A4DBBC; }
    goto L_08A4DBA4;
L_08A4DBA4:;
    f0 = BITSF(LD32(s0+16));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+248); goto L_08A4DBFC; }
    goto L_08A4DBB8;
L_08A4DBB8:;
    f0 = BITSF(LD32(s0+12));
    goto L_08A4DBBC;
L_08A4DBBC:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A4DBE0; }
    goto L_08A4DBCC;
L_08A4DBCC:;
    goto L_08A4DBD0;
L_08A4DBD0:;
    sp = sp + 16;
    return;
L_08A4DBE0:;
    a0 = LD32(s0);
    v0 = func_08A4DC60(a0);
    goto L_08A4DBE8;
L_08A4DBE8:;
    v1 = LD32(s0+20);
    ST32(s0+4, v0);
    v1 = v1 | 0x2;
    ST32(s0+20, v1);
    goto L_08A4DBCC;
L_08A4DBFC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A4DBD0; }
    goto L_08A4DC04;
L_08A4DC04:;
    a0 = LD32(s1+240);
    v1 = 0xcccc0000u;
    v1 = v1 | 0xcccd;
    a0 = a0 + 1;
    { u64 p_ = (u64)a0 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = v0 - 1;
    ST32(s1+248, v0);
    v1 = hi;
    v1 = v1 >> 3;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    a0 = a0 - v0;
    ST32(s1+240, a0);
    goto L_08A4DBD0;
L_08A4DC40:;
    a0 = LD32(s0+4);
    v0 = func_088D51E0(a0);
    goto L_08A4DC48;
L_08A4DC48:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A4DBD0; }
    goto L_08A4DC50;
L_08A4DC50:;
    a0 = s0 + 4;
    { rv_t r_ = func_088D514C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4DC58;
L_08A4DC58:;
    v0 = LD32(s1+248);
    goto L_08A4DBFC;
}

/* 08A4DC60 */
u32 func_08A4DC60(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4DC60:;
    sp = sp - 32;
    v0 = func_088D4EF8(a0);
    goto L_08A4DC70;
L_08A4DC70:;
    v1 = (u32)-1;
    a0 = v0 + 0;
    a1 = 999;
    a2 = sp + 0;
    cnd_ = v0 == 0;
    ST32(sp, v1);
    if (cnd_) { goto L_08A4DC90; }
    goto L_08A4DC88;
L_08A4DC88:;
    func_088D4F1C(a0, a1, a2);
    goto L_08A4DC90;
L_08A4DC90:;
    v0 = LD32(sp);
    sp = sp + 32;
    return v0;
}

/* 08A4DCA0 */
void func_08A4DCA0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A4DCA0:;
    sp = sp - 288;
    a0 = a0 & 0xff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A4DE90; }
    goto L_08A4DCCC;
L_08A4DCCC:;
    s2 = D_08C2E104 - (-7932);
    a1 = s2 - 7932;
    v0 = LD32(a1+248);
    v1 = ((u32)(uintptr_t)func_08A4DEB4) - (-8524);
    a0 = ((u32)(uintptr_t)func_08AD17CC) - (6092);
    s6 = v1 - 8524;
    s5 = a0 + 6092;
    ST32(sp+240, 0);
    s1 = 0 + 0;
    ST32(sp+244, 0);
    cnd_ = v0 == 0;
    ST32(sp+248, 0);
    if (cnd_) { goto L_08A4DE08; }
    goto L_08A4DCFC;
L_08A4DCFC:;
    s3 = 0xcccc0000u;
    s4 = a1 + 0;
    s3 = s3 | 0xcccd;
    v0 = LD32(s4+240);
    goto L_08A4DD0C;
L_08A4DD0C:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 3;
    s0 = v1 + s4;
    t_ = s5;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4DD24;
L_08A4DD24:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A4DE80; }
    goto L_08A4DD2C;
L_08A4DD2C:;
    v0 = LD32(sp+248);
    v0 = v0 < 0xau;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a2 = s2 - 7932;
    if (cnd_) { goto L_08A4DDBC; }
    goto L_08A4DD40;
L_08A4DD40:;
    v1 = LD32(sp+244);
    a0 = LD32(s0+20);
    a1 = LD32(s0);
    v0 = v1 << 1;
    a2 = LD32(s0+4);
    a3 = LD32(s0+8);
    t0 = LD32(s0+12);
    t1 = LD32(s0+16);
    v0 = v0 + v1;
    v0 = v0 << 3;
    v0 = v0 + sp;
    ST32(v0+20, a0);
    ST32(v0, a1);
    ST32(v0+4, a2);
    ST32(v0+8, a3);
    ST32(v0+12, t0);
    ST32(v0+16, t1);
    a0 = LD32(sp+244);
    v0 = LD32(sp+248);
    a0 = a0 + 1;
    { u64 p_ = (u64)a0 * s3; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = v0 + 1;
    ST32(sp+248, v0);
    v1 = hi;
    v1 = v1 >> 3;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    a0 = a0 - v0;
    ST32(sp+244, a0);
    a2 = s2 - 7932;
    goto L_08A4DDBC;
L_08A4DDBC:;
    a1 = LD32(a2+248);
    s1 = s1 + 1;
    cnd_ = a1 == 0;
    v0 = a1 - 1;
    if (cnd_) { goto L_08A4DDFC; }
    goto L_08A4DDCC;
L_08A4DDCC:;
    a0 = LD32(a2+240);
    ST32(a2+248, v0);
    a1 = v0 + 0;
    a0 = a0 + 1;
    { u64 p_ = (u64)a0 * s3; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = hi;
    v1 = v1 >> 3;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    a0 = a0 - v0;
    ST32(a2+240, a0);
    goto L_08A4DDFC;
L_08A4DDFC:;
    v0 = s1 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4+240); goto L_08A4DD0C; }
    goto L_08A4DE08;
L_08A4DE08:;
    a3 = s2 - 7932;
    a2 = sp + 0;
    t0 = sp + 240;
    goto L_08A4DE14;
L_08A4DE14:;
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
    if (cnd_) { goto L_08A4DE14; }
    goto L_08A4DE40;
L_08A4DE40:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    goto L_08A4DE5C;
L_08A4DE5C:;
    sp = sp + 288;
    return;
L_08A4DE80:;
    t_ = s6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4DE88;
L_08A4DE88:;
    a2 = s2 - 7932;
    goto L_08A4DDBC;
L_08A4DE90:;
    a0 = D_08C2E104 - (-7932);
    a1 = ((u32)(uintptr_t)func_08A4DEB4) - (-8524);
    a2 = ((u32)(uintptr_t)func_08AD17D4) - (6100);
    a0 = a0 - 7932;
    a1 = a1 - 8524;
    a2 = a2 + 6100;
    func_08AD17E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4DEAC;
L_08A4DEAC:;
    goto L_08A4DE5C;
}

/* 08A4DEB4 */
rv_t func_08A4DEB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4DEB4:;
    sp = sp - 16;
    a0 = a0 + 4;
    { rv_t r_ = func_088D514C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4DEC4;
L_08A4DEC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4DED0 */
void func_08A4DED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4DED0:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    cnd_ = a1 == 0;
    a3 = a3 & 0xff;
    if (cnd_) { goto L_08A4DF28; }
    goto L_08A4DEE4;
L_08A4DEE4:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08A4DF2C; }
    goto L_08A4DEEC;
L_08A4DEEC:;
    v1 = a0 << 1;
    v1 = v1 + a1;
    v0 = D_08AE58D4 - (22740);
    v1 = v1 << 2;
    v0 = v0 + 22740;
    cnd_ = a2 == 0;
    a3 = v1 + v0;
    if (cnd_) { goto L_08A4DF34; }
    goto L_08A4DF08;
L_08A4DF08:;
    a0 = LD32(a3-4);
    goto L_08A4DF0C;
L_08A4DF0C:;
    v0 = D_08AF0194 - (404);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0+404));
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4DF28;
L_08A4DF28:;
    goto L_08A4DF2C;
L_08A4DF2C:;
    sp = sp + 16;
    return;
L_08A4DF34:;
    a0 = LD32(a3+20);
    goto L_08A4DF0C;
}

/* 08A4DF3C */
void func_08A4DF3C(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4DF3C:;
    sp = sp - 16;
    v0 = a0 < 0x4u;
    a1 = a1 & 0xff;
    cnd_ = v0 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A4DF90; }
    goto L_08A4DF54;
L_08A4DF54:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A4DF94; }
    goto L_08A4DF5C;
L_08A4DF5C:;
    v0 = D_08AE5904 - (22788);
    v1 = a0 << 2;
    v0 = v0 + 22788;
    cnd_ = a1 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08A4DF9C; }
    goto L_08A4DF70;
L_08A4DF70:;
    a0 = LD32(v1);
    goto L_08A4DF74;
L_08A4DF74:;
    v0 = D_08AF0198 - (408);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0+408));
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4DF90;
L_08A4DF90:;
    goto L_08A4DF94;
L_08A4DF94:;
    sp = sp + 16;
    return;
L_08A4DF9C:;
    a0 = LD32(v1+16);
    goto L_08A4DF74;
}

/* 08A4DFA4 */
void func_08A4DFA4(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4DFA4:;
    sp = sp - 16;
    v0 = a0 < 0x4u;
    cnd_ = v0 == 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A4DFEC; }
    goto L_08A4DFB8;
L_08A4DFB8:;
    v0 = D_08AE5924 - (22820);
    v1 = a0 << 2;
    v0 = v0 + 22820;
    cnd_ = a1 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08A4DFF8; }
    goto L_08A4DFCC;
L_08A4DFCC:;
    a0 = LD32(v1);
    goto L_08A4DFD0;
L_08A4DFD0:;
    v0 = D_08AF019C - (412);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0+412));
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4DFEC;
L_08A4DFEC:;
    sp = sp + 16;
    return;
L_08A4DFF8:;
    a0 = LD32(v1+16);
    goto L_08A4DFD0;
}

/* 08A4E000 */
void func_08A4E000(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E000:;
    sp = sp - 16;
    v0 = a0 < 0x4u;
    a2 = a2 & 0xff;
    cnd_ = v0 == 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A4E050; }
    goto L_08A4E018;
L_08A4E018:;
    cnd_ = a1 == 0;
    v0 = D_08AE5944 - (22852);
    if (cnd_) { goto L_08A4E064; }
    goto L_08A4E020;
L_08A4E020:;
    a0 = a0 << 2;
    v0 = v0 + 22852;
    cnd_ = a2 == 0;
    a0 = a0 + v0;
    if (cnd_) { goto L_08A4E05C; }
    goto L_08A4E030;
L_08A4E030:;
    a0 = LD32(a0+16);
    goto L_08A4E034;
L_08A4E034:;
    v0 = D_08AF01A0 - (416);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0+416));
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A4D9FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A4E050;
L_08A4E050:;
    sp = sp + 16;
    return;
L_08A4E05C:;
    a0 = LD32(a0);
    goto L_08A4E034;
L_08A4E064:;
    v1 = a0 << 2;
    v0 = v0 + 22852;
    cnd_ = a2 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08A4E07C; }
    goto L_08A4E074;
L_08A4E074:;
    a0 = LD32(v1+48);
    goto L_08A4E034;
L_08A4E07C:;
    a0 = LD32(v1+32);
    goto L_08A4E034;
}

/* 08A4E084 */
rv_t func_08A4E084(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A4E084:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t1 = D_08C2E0D4 - (-7980);
    t2 = D_08C2E0E4 - (-7964);
    t3 = D_08C2E0F4 - (-7948);
    v0 = D_08C2E104 - (-7932);
    a1 = a1 & a0;
    v1 = v0 - 7932;
    a2 = t1 - 7980;
    a3 = t2 - 7964;
    cnd_ = a1 == 0;
    t0 = t3 - 7948;
    if (cnd_) { goto L_08A4E150; }
    goto L_08A4E0BC;
L_08A4E0BC:;
    v0 = D_08AF01A4 - (420);
    f4 = BITSF(LD32(v0+420));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(v1+248, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(v1+240, 0);
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
    ST32(a2+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(a2+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(t0+12, FBITS(f1));
    ST32(a3+4, FBITS(f3));
    ST32(a2+12, FBITS(f1));
    ST32(a3+8, FBITS(f3));
    ST32(v1+244, 0);
    ST32(t1-7980, FBITS(f2));
    ST32(t2-7964, FBITS(f6));
    ST32(a3+12, FBITS(f1));
    ST32(t3-7948, FBITS(f1));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f1));
    goto L_08A4E150;
L_08A4E150:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4E158 */
rv_t func_08A4E158(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E158:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A4E084(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E16C;
L_08A4E16C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4E178 */
u64 func_08A4E178(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E178:;
    sp = sp - 16;
    v0 = a0 + 0;
    v1 = 386;
    ST32(v0+12, v1);
    v1 = D_08AF01B4 - (436);
    a2 = 512;
    f0 = BITSF(LD32(v1+436));
    v1 = 1;
    ST32(a0, a1);
    a0 = a0 + 34;
    a1 = 0 + 0;
    ST32(v0+548, FBITS(f0));
    ST32(v0+552, v1);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    ST32(v0+28, 0);
    ST8(v0+32, 0);
    ST8(v0+33, 0);
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4E1D4;
L_08A4E1D4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A4E1E0 */
void func_08A4E1E0(void)
{
L_08A4E1E0:;
    return;
}

/* 08A4E1E8 */
rv_t func_08A4E1E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4E1E8:;
    sp = sp - 32;
    v0 = D_08AE59C0 - (22976);
    v1 = a1 << 2;
    v0 = v0 + 22976;
    v1 = v1 + v0;
    s1 = a0 + 0;
    s2 = D_08AF01BC - (444);
    s0 = a2 + 0;
    f22 = f12;
    t2 = LD32(v1);
    ST32(a0+16, a3);
    ST32(a0+12, t2);
    a0 = D_08AE5984 - (22916);
    a0 = a0 + 22916;
    ST32(s1+20, t0);
    ST32(s1+24, t1);
    ST32(s1, a1);
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4E24C;
L_08A4E24C:;
    ST32(s1+4, v0);
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A4E764(a0, a1, 0, 0, 0, 0);
    goto L_08A4E25C;
L_08A4E25C:;
    a0 = LD32(s1+4);
    s0 = D_08C2E280 - (-7552);
    s0 = s0 - 7552;
    func_088CD5B0(a0);
    goto L_08A4E26C;
L_08A4E26C:;
    v0 = D_08AF01B8 - (440);
    a1 = LD32(s1);
    f21 = BITSF(LD32(v0+440));
    f20 = BITSF(LD32(s2+444));
    a2 = LD32(s1+12);
    a1 = a1 << 4;
    f13 = f20;
    f12 = f21;
    a1 = a1 + s0;
    a0 = s1 + 34;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E298;
L_08A4E298:;
    ST32(s1+8, FBITS(f0));
    a0 = s1 + 0;
    a1 = 34;
    a2 = 0 + 0;
    v0 = func_08A4E744(a1, a2);
    goto L_08A4E2AC;
L_08A4E2AC:;
    a1 = LD32(s1);
    a2 = LD32(s1+12);
    a0 = v0 + 0;
    a1 = a1 << 4;
    f13 = f20;
    a1 = a1 + s0;
    f12 = f21;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E2CC;
L_08A4E2CC:;
    f20 = f20 / f0;
    f2 = f0;
    f0 = BITSF(LD32(s1+8));
    v0 = D_08AF01C0 - (448);
    f1 = f0 * f20;
    f0 = BITSF(LD32(v0+448));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    v0 = D_08AF01C4 - (452);
    if (cnd_) { goto L_08A4E2FC; }
    goto L_08A4E2F4;
L_08A4E2F4:;
    f0 = BITSF(LD32(v0+452));
    f1 = f1 + f0;
    goto L_08A4E2FC;
L_08A4E2FC:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A4E334; }
    goto L_08A4E310;
L_08A4E310:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AF01C8 - (456);
    if (cnd_) { goto L_08A4E3BC; }
    goto L_08A4E320;
L_08A4E320:;
    f0 = BITSF(LD32(v0+456));
    f0 = f1 + f0;
    goto L_08A4E328;
L_08A4E328:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    f0 = BITSF(0);
    goto L_08A4E334;
L_08A4E334:;
    f12 = f22;
    fcc = FCMP(f22, f0, 2);
    cnd_ = !fcc;
    ST32(s1+552, v0);
    if (cnd_) { goto L_08A4E368; }
    goto L_08A4E348;
L_08A4E348:;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A4E3A0; }
    goto L_08A4E354;
L_08A4E354:;
    v0 = D_08AF01CC - (460);
    f0 = BITSF(LD32(v0+460));
    f1 = BITSF(LD32(s2+444));
    f0 = f2 * f0;
    f12 = f0 - f1;
    goto L_08A4E368;
L_08A4E368:;
    v0 = 1;
    ST32(s1+548, FBITS(f12));
    ST8(s1+33, v0);
    ST8(s1+32, 0);
    ST32(s1+28, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A4E3A0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08A4E354;
L_08A4E3BC:;
    f0 = BITSF(LD32(v0+456));
    f0 = f1 - f0;
    goto L_08A4E328;
}

/* 08A4E3C8 */
rv_t func_08A4E3C8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4E3C8:;
    sp = sp - 32;
    v1 = 388;
    v0 = 3;
    s1 = a0 + 0;
    ST32(s1+24, a3);
    ST32(a0+12, v1);
    ST32(s1+16, a2);
    ST32(a0, v0);
    a0 = D_08AE5984 - (22916);
    a0 = a0 + 22916;
    ST32(s1+20, 0);
    s0 = a1 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4E410;
L_08A4E410:;
    a1 = s0 + 0;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    s0 = D_08C2E280 - (-7552);
    func_08A4E764(a0, a1, 0, 0, 0, 0);
    goto L_08A4E424;
L_08A4E424:;
    a0 = LD32(s1+4);
    s0 = s0 - 7552;
    func_088CD5B0(a0);
    goto L_08A4E430;
L_08A4E430:;
    v1 = D_08AF01D0 - (464);
    v0 = D_08AF01D4 - (468);
    a1 = LD32(s1);
    f20 = BITSF(LD32(v1+464));
    f21 = BITSF(LD32(v0+468));
    a2 = LD32(s1+12);
    a1 = a1 << 4;
    f12 = f20;
    f13 = f21;
    a1 = a1 + s0;
    a0 = s1 + 34;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E460;
L_08A4E460:;
    ST32(s1+8, FBITS(f0));
    a0 = s1 + 0;
    a1 = 34;
    a2 = 0 + 0;
    v0 = func_08A4E744(a1, a2);
    goto L_08A4E474;
L_08A4E474:;
    a1 = LD32(s1);
    a2 = LD32(s1+12);
    a0 = v0 + 0;
    a1 = a1 << 4;
    a1 = a1 + s0;
    f12 = f20;
    f13 = f21;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E494;
L_08A4E494:;
    f2 = BITSF(0);
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08A4E4D4; }
    goto L_08A4E4A8;
L_08A4E4A8:;
    f1 = f21 / f0;
    f0 = BITSF(LD32(s1+8));
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AF01D8 - (472);
    if (cnd_) { goto L_08A4E510; }
    goto L_08A4E4C4;
L_08A4E4C4:;
    f0 = BITSF(LD32(v0+472));
    f0 = f1 + f0;
    goto L_08A4E4CC;
L_08A4E4CC:;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    goto L_08A4E4D4;
L_08A4E4D4:;
    ST32(s1+552, v1);
    v1 = D_08AF01DC - (476);
    v0 = 1;
    f0 = BITSF(LD32(v1+476));
    ST32(s1+28, 0);
    ST8(s1+32, v0);
    ST32(s1+548, FBITS(f0));
    ST8(s1+33, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A4E510:;
    f0 = BITSF(LD32(v0+472));
    f0 = f1 - f0;
    goto L_08A4E4CC;
}

/* 08A4E51C */
u32 func_08A4E51C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_08A4E51C:;
    sp = sp - 544;
    v0 = D_08AF01E0 - (480);
    s2 = a0 + 0;
    f2 = BITSF(LD32(a0+548));
    f0 = BITSF(LD32(v0+480));
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A4E5CC; }
    goto L_08A4E554;
L_08A4E554:;
    f3 = BITSF(LD32(a0+28));
    v0 = LD_U8(a0+33);
    cnd_ = v0 == 0;
    f1 = f2 - f3;
    if (cnd_) { goto L_08A4E578; }
    goto L_08A4E564;
L_08A4E564:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f3 + f0;
    ST32(a0+28, FBITS(f0));
    f3 = f0;
    goto L_08A4E578;
L_08A4E578:;
    v0 = LD32(s2+20);
    cnd_ = v0 == 0;
    f0 = f2 - f3;
    if (cnd_) { goto L_08A4E5B0; }
    goto L_08A4E584;
L_08A4E584:;
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_08A4E598; }
    goto L_08A4E598;
L_08A4E598:;
    f1 = BITSF(F2I(f1, 1));
    f0 = BITSF(F2I(f20, 1));
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    cnd_ = v0 != v1;
    if (cnd_) { a1 = LD32(s2+16); goto L_08A4E5EC; }
    goto L_08A4E5B0;
L_08A4E5B0:;
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A4E5CC; }
    goto L_08A4E5C0;
L_08A4E5C0:;
    ST8(s2+33, 0);
    v1 = 1;
    ST32(s2+28, 0);
    goto L_08A4E5CC;
L_08A4E5CC:;
    v0 = v1 + 0;
    sp = sp + 544;
    return v0;
L_08A4E5EC:;
    a2 = 0 + 0;
    v0 = func_08A4E744(a1, a2);
    goto L_08A4E5F4;
L_08A4E5F4:;
    a1 = LD32(s2+20);
    a0 = s2 + 0;
    a2 = 0 + 0;
    s1 = v0 + 0;
    v0 = func_08A4E744(a1, a2);
    goto L_08A4E608;
L_08A4E608:;
    f12 = f20;
    s0 = v0 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4E614;
L_08A4E614:;
    t2 = v0 + 0;
    a0 = sp + 0;
    a1 = s1 + 0;
    t3 = v1 + 0;
    t0 = s0 + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E634;
L_08A4E634:;
    a0 = s2 + 0;
    a1 = sp + 0;
    func_08A4E764(a0, a1, 0, 0, 0, 0);
    goto L_08A4E640;
L_08A4E640:;
    f2 = BITSF(LD32(s2+548));
    f3 = BITSF(LD32(s2+28));
    goto L_08A4E5B0;
}

/* 08A4E64C */
rv_t func_08A4E64C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E64C:;
    sp = sp - 16;
    v1 = a0 + 0;
    f0 = BITSF(0);
    v0 = LD_U8(a0+33);
    cnd_ = v0 == 0;
    a0 = a0 + 34;
    if (cnd_) { goto L_08A4E6AC; }
    goto L_08A4E668;
L_08A4E668:;
    t0 = LD32(v1);
    t1 = LD32(v1+12);
    a3 = LD32(v1+4);
    v0 = D_08AE59AC - (22956);
    v1 = D_08AE59D4 - (22996);
    a2 = t0 << 2;
    v0 = v0 + 22956;
    v1 = v1 + 22996;
    a2 = a2 + v0;
    v1 = t0 + v1;
    v0 = D_08C2E280 - (-7552);
    a1 = LD32(a2);
    a2 = LD_U8(v1);
    t0 = t0 << 4;
    v0 = v0 - 7552;
    t0 = t0 + v0;
    { rv_t r_ = func_08A50E40(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E6AC;
L_08A4E6AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4E6B8 */
float func_08A4E6B8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_08A4E6B8:;
    v1 = LD32(a0);
    v0 = D_08C2E280 - (-7552);
    v0 = v0 - 7552;
    v1 = v1 << 4;
    v1 = v1 + v0;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+12));
    f0 = f0 - f1;
    return f0;
}

/* 08A4E6DC */
u32 func_08A4E6DC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E6DC:;
    t0 = LD32(a0);
    sp = sp - 16;
    v1 = a1 + 0;
    a1 = a2 + 0;
    v0 = 0 + 0;
    cnd_ = t0 == v1;
    a2 = a3 + 0;
    if (cnd_) { goto L_08A4E708; }
    goto L_08A4E6FC;
L_08A4E6FC:;
    sp = sp + 16;
    return v0;
L_08A4E708:;
    { u64 r_ = func_08A4E718(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4E710;
L_08A4E710:;
    v0 = 0 < v0;
    goto L_08A4E6FC;
}

/* 08A4E718 */
u64 func_08A4E718(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A4E718:;
    v0 = LD32(a0+16);
    cnd_ = v0 == a1;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A4E72C; }
    goto L_08A4E724;
L_08A4E724:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A4E72C:;
    v0 = LD32(a0+24);
    cnd_ = v0 != a2;
    if (cnd_) { goto L_08A4E724; }
    goto L_08A4E738;
L_08A4E738:;
    v0 = LD_U8(a0+33);
    v1 = 0 < v0;
    goto L_08A4E724;
}

/* 08A4E744 */
u32 func_08A4E744(u32 a1, u32 a2)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E744:;
    sp = sp - 16;
    a0 = a1 + 0;
    a1 = a2 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A4E758;
L_08A4E758:;
    sp = sp + 16;
    return v0;
}

/* 08A4E764 */
void func_08A4E764(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E764:;
    sp = sp - 16;
    a0 = a0 + 34;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E77C;
L_08A4E77C:;
    sp = sp + 16;
    return;
}

/* 08A4E788 */
rv_t func_08A4E788(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E788:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A4E990; }
    goto L_08A4E7A8;
L_08A4E7A8:;
    v0 = D_08AF01E8 - (488);
    f1 = BITSF(LD32(v0+488));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AF01F8 - (504);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f7 = BITSF(LD32(v1+504));
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f1;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f2 = f2 * f1;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF01EC - (492);
    f5 = f5 * f1;
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f1;
    t3 = D_08C2E250 - (-7600);
    t1 = D_08C2E210 - (-7664);
    f3 = f3 * f1;
    f1 = BITSF(LD32(v0+492));
    v0 = D_08AF01F0 - (496);
    f8 = BITSF(LD32(v0+496));
    v0 = D_08AF0204 - (516);
    f10 = BITSF(LD32(v0+516));
    v0 = D_08C2E200 - (-7680);
    ST32(v0-7680, FBITS(f3));
    a1 = v0 - 7680;
    v0 = D_08AF01F4 - (500);
    f0 = BITSF(LD32(v0+500));
    v1 = D_08AF01FC - (508);
    t4 = D_08C2E220 - (-7648);
    t5 = D_08C2E230 - (-7632);
    t0 = t3 - 7600;
    a2 = t1 - 7664;
    a3 = t4 - 7648;
    f9 = BITSF(LD32(v1+508));
    v0 = D_08AF0200 - (512);
    v1 = t5 - 7632;
    ST32(a3+12, FBITS(f2));
    t7 = D_08C2E260 - (-7584);
    t2 = t7 - 7584;
    ST32(a1+4, FBITS(f4));
    s0 = D_08C2E280 - (-7552);
    a0 = s0 - 7552;
    ST32(a1+12, FBITS(f2));
    t6 = D_08C2E270 - (-7568);
    t8 = a0 + 16;
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f2));
    ST32(t1-7664, FBITS(f5));
    t1 = t6 - 7568;
    ST32(t4-7648, FBITS(f2));
    ST32(t5-7632, FBITS(f1));
    ST32(v1+28, 0);
    ST32(v1+16, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    f0 = BITSF(LD32(v0+512));
    ST32(t0+4, FBITS(f8));
    v0 = D_08AF0208 - (520);
    ST32(t2+4, FBITS(f0));
    ST32(a1+8, FBITS(f5));
    ST32(a3+4, FBITS(f2));
    ST32(a2+8, FBITS(f6));
    ST32(a3+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f1));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    ST32(t3-7600, FBITS(f8));
    ST32(t0+12, FBITS(f7));
    ST32(t7-7584, FBITS(f9));
    ST32(t2+8, FBITS(f10));
    f0 = BITSF(LD32(v0+520));
    v1 = LD32(t3-7600);
    a1 = LD32(t0+12);
    a2 = LD32(t0+4);
    a3 = LD32(t0+8);
    ST32(t1+4, FBITS(f0));
    ST32(t1+12, FBITS(f7));
    ST32(t1+8, FBITS(f10));
    ST32(t6-7568, FBITS(f9));
    ST32(s0-7552, v1);
    ST32(t2+12, FBITS(f7));
    ST32(a0+4, a2);
    ST32(a0+8, a3);
    ST32(a0+12, a1);
    ST32(a0+16, v1);
    ST32(t8+12, a1);
    ST32(t8+4, a2);
    ST32(t8+8, a3);
    t8 = a0 + 32;
    ST32(a0+32, v1);
    ST32(t8+12, a1);
    ST32(t8+4, a2);
    ST32(t8+8, a3);
    t8 = a0 + 48;
    v0 = LD32(t7-7584);
    v1 = LD32(t2+4);
    ST32(a0+48, v0);
    ST32(t8+4, v1);
    v0 = LD32(t2+8);
    ST32(t8+8, v0);
    v1 = LD32(t2+12);
    ST32(t8+12, v1);
    t8 = a0 + 64;
    v1 = LD32(t1+4);
    v0 = LD32(t6-7568);
    ST32(a0+64, v0);
    ST32(t8+4, v1);
    v0 = LD32(t1+8);
    ST32(t8+8, v0);
    v1 = LD32(t1+12);
    ST32(t8+12, v1);
    goto L_08A4E990;
L_08A4E990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4E99C */
rv_t func_08A4E99C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E99C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A4E788(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4E9B0;
L_08A4E9B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4E9BC */
void func_08A4E9BC(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4E9BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A4E9D0;
L_08A4E9D0:;
    v0 = D_08B153E8 - (21480);
    v0 = v0 + 21480;
    ST32(s0, v0);
    ST8(s0+20, 0);
    ST32(s0+16, 0);
    sp = sp + 16;
    return;
}

/* 08A4E9F4 */
rv_t func_08A4E9F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A4E9F4:;
    v0 = D_08B15410 - (21520);
    v0 = v0 + 21520;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EA04 */
rv_t func_08A4EA04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4EA04:;
    v0 = D_08B15410 - (21520);
    v0 = v0 + 21520;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4EA20;
L_08A4EA20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EA2C */
rv_t func_08A4EA2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4EA2C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE59E4 - (23012);
    a0 = a0 + 23012;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4EA48;
L_08A4EA48:;
    ST32(s0+24, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EA60 */
void func_08A4EA60(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 560);
L_08A4EA60:;
    sp = sp - 560;
    s2 = a1 + 0;
    a1 = 0 + 0;
    s4 = a0 + 0;
    a0 = s2 + 0;
    s3 = a2 + 0;
    f20 = f12;
    v0 = func_08A4FB7C(a0, a1);
    goto L_08A4EA9C;
L_08A4EA9C:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    s1 = v0 + 0;
    v0 = func_08A4FB7C(a0, a1);
    goto L_08A4EAAC;
L_08A4EAAC:;
    f12 = f20;
    s0 = v0 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4EAB8;
L_08A4EAB8:;
    t3 = v1 + 0;
    a0 = sp + 0;
    a1 = s1 + 0;
    t0 = s0 + 0;
    t2 = v0 + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EAD8;
L_08A4EAD8:;
    a0 = D_08C30614 - (1556);
    a1 = s4 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    f12 = f20;
    a0 = a0 + 1556;
    a2 = sp + 0;
    t1 = 0 + 0;
    t2 = 1;
    { rv_t r_ = func_08A4E1E8(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EB00;
L_08A4EB00:;
    sp = sp + 560;
    return;
}

/* 08A4EB24 */
rv_t func_08A4EB24(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4EB24:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08A4FB7C(a0, a1);
    goto L_08A4EB40;
L_08A4EB40:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08A4EB64(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EB50;
L_08A4EB50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EB64 */
rv_t func_08A4EB64(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4EB64:;
    sp = sp - 16;
    t2 = D_08C2FD64 - (-668);
    v1 = t2 - 668;
    t0 = a0 + 0;
    t1 = a1 + 0;
    a3 = a2 + 0;
    a0 = v1 + 2224;
    v0 = LD_U8(v1+33);
    goto L_08A4EB88;
L_08A4EB88:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = v1 + 0; goto L_08A4EBA4; }
    goto L_08A4EB90;
L_08A4EB90:;
    v1 = v1 + 556;
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(v1+33); goto L_08A4EB88; }
    goto L_08A4EBA0;
L_08A4EBA0:;
    a0 = t2 - 668;
    goto L_08A4EBA4;
L_08A4EBA4:;
    a1 = t0 + 0;
    a2 = t1 + 0;
    { rv_t r_ = func_08A4E3C8(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EBB0;
L_08A4EBB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EBBC */
u64 func_08A4EBBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A4EBBC:;
    sp = sp - 32;
    v0 = D_08C2FD64 - (-668);
    s0 = v0 - 668;
    s3 = s0 + 2224;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a0 = s0 + 0;
    goto L_08A4EBEC;
L_08A4EBEC:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_08A4E718(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4EBF8;
L_08A4EBF8:;
    s0 = s0 + 556;
    v1 = (s32)s0 < (s32)s3;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A4EC14; }
    goto L_08A4EC08;
L_08A4EC08:;
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A4EBEC; }
    goto L_08A4EC10;
L_08A4EC10:;
    a0 = 0 + 0;
    goto L_08A4EC14;
L_08A4EC14:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A4EC34 */
rv_t func_08A4EC34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A4EC34:;
    sp = sp - 48;
    v0 = D_08AF020C - (524);
    v1 = D_08C2FD64 - (-668);
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = v1 - 668;
    s3 = s0 + 2224;
    f20 = BITSF(LD32(v0+524));
    a0 = s0 + 0;
    goto L_08A4EC70;
L_08A4EC70:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_08A4E718(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A4EC7C;
L_08A4EC7C:;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s0+28)); goto L_08A4ECB4; }
    goto L_08A4EC84;
L_08A4EC84:;
    s0 = s0 + 556;
    v0 = (s32)s0 < (s32)s3;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A4EC70; }
    goto L_08A4EC94;
L_08A4EC94:;
    goto L_08A4EC98;
L_08A4EC98:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A4ECB4:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A4EC98; }
    goto L_08A4ECC8;
L_08A4ECC8:;
    ST32(s0+548, FBITS(f20));
    ST32(s0+28, FBITS(f20));
    goto L_08A4EC98;
}

/* 08A4ECD4 */
void func_08A4ECD4(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4ECD4:;
    sp = sp - 16;
    v0 = D_08C2E354 - (-7340);
    v0 = v0 - 7340;
    v0 = v0 + 33;
    v1 = 3;
    goto L_08A4ECEC;
L_08A4ECEC:;
    v1 = v1 - 1;
    ST8(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 556;
    if (cnd_) { goto L_08A4ECEC; }
    goto L_08A4ECFC;
L_08A4ECFC:;
    func_08A4ED10();
    goto L_08A4ED04;
L_08A4ED04:;
    sp = sp + 16;
    return;
}

/* 08A4ED10 */
void func_08A4ED10(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A4ED10:;
    v0 = D_08C2FD64 - (-668);
    t1 = v0 - 668;
    v1 = D_08C2EC04 - (-5116);
    v0 = D_08C2F4B4 - (-2892);
    t0 = v1 - 5116;
    a3 = v0 - 2892;
    a1 = 0 + 0;
    a2 = 3;
    goto L_08A4ED30;
L_08A4ED30:;
    v0 = a1 + t1;
    v1 = a1 + t0;
    a0 = a1 + a3;
    a2 = a2 - 1;
    ST8(v0+33, 0);
    a1 = a1 + 556;
    ST8(v1+33, 0);
    cnd_ = (s32)a2 >= 0;
    ST8(a0+33, 0);
    if (cnd_) { goto L_08A4ED30; }
    goto L_08A4ED54;
L_08A4ED54:;
    v0 = D_08C30635 - (1589);
    ST8(v0+1589, 0);
    return;
}

/* 08A4ED60 */
rv_t func_08A4ED60(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A4ED60:;
    sp = sp - 48;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = a1 + 0;
    a1 = a2 + 0;
    s3 = a2 + 0;
    s0 = a3 & 0xff;
    f20 = f12;
    v0 = func_08A4FB7C(a0, a1);
    goto L_08A4ED9C;
L_08A4ED9C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s2 + 0;
    t0 = s3 + 0;
    f12 = f20;
    t1 = s0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A4EE08(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EDBC;
L_08A4EDBC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EDDC */
rv_t func_08A4EDDC(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4EDDC:;
    a2 = a2 & 0xff;
    sp = sp - 16;
    t1 = a2 + 0;
    a3 = 0 + 0;
    a2 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_08A4EE08(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EDFC;
L_08A4EDFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A4EE08 */
rv_t func_08A4EE08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A4EE08:;
    v0 = t1 + 0;
    sp = sp - 16;
    t8 = a2 + 0;
    t4 = v0 & 0xff;
    a2 = D_08C2EC04 - (-5116);
    v0 = 3;
    t6 = a3 + 0;
    t1 = a3 + 0;
    t5 = t0 + 0;
    t2 = t0 + 0;
    s0 = D_08C2E34C - (-7348);
    t9 = (s32)a0 < 4;
    t7 = a1 + 0;
    a2 = a2 - 5116;
    a3 = a1 + 0;
    t0 = t8 + 0;
    cnd_ = a0 == v0;
    t3 = t4 + 0;
    if (cnd_) { goto L_08A4EEC4; }
    goto L_08A4EE5C;
L_08A4EE5C:;
    a2 = D_08C2E354 - (-7340);
    s0 = D_08C2E348 - (-7352);
    cnd_ = t9 != 0;
    a2 = a2 - 7340;
    if (cnd_) { goto L_08A4EE78; }
    goto L_08A4EE6C;
L_08A4EE6C:;
    v0 = 4;
    cnd_ = a0 == v0;
    s1 = D_08C2E350 - (-7344);
    if (cnd_) { goto L_08A4EE98; }
    goto L_08A4EE78;
L_08A4EE78:;
    a1 = LD32(s0-7352);
    { rv_t r_ = func_08A4EED4(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EE80;
L_08A4EE80:;
    ST32(s0-7352, v0);
    goto L_08A4EE84;
L_08A4EE84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A4EE98:;
    a1 = LD32(s1-7344);
    a2 = D_08C2F4B4 - (-2892);
    a2 = a2 - 2892;
    a3 = t7 + 0;
    t0 = t8 + 0;
    t1 = t6 + 0;
    t2 = t5 + 0;
    t3 = t4 + 0;
    { rv_t r_ = func_08A4EED4(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EEBC;
L_08A4EEBC:;
    ST32(s1-7344, v0);
    goto L_08A4EE84;
L_08A4EEC4:;
    a1 = LD32(s0-7348);
    { rv_t r_ = func_08A4EED4(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A4EECC;
L_08A4EECC:;
    ST32(s0-7348, v0);
    goto L_08A4EE84;
}
