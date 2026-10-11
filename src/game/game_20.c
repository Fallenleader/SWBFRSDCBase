#include "game.h"

/* 089C3C28 */
rv_t func_089C3C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3C28:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3C4C;
L_089C3C4C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089C3C60; }
    goto L_089C3C54;
L_089C3C54:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_089C3C70; }
    goto L_089C3C5C;
L_089C3C5C:;
    v0 = LD32(s0+8);
    goto L_089C3C60;
L_089C3C60:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s0+4); goto L_089C3C84; }
    goto L_089C3C6C;
L_089C3C6C:;
    ST32(s0+8, v1);
    goto L_089C3C70;
L_089C3C70:;
    goto L_089C3C74;
L_089C3C74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C3C84:;
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089C3C70; }
    goto L_089C3C90;
L_089C3C90:;
    v0 = v1 << 2;
    v1 = D_08ADE764 - (-6300);
    v1 = v1 - 6300;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C3CACu: goto L_089C3CAC; case 0x089C3CBCu: goto L_089C3CBC; case 0x089C3CC4u: goto L_089C3CC4; case 0x089C3CD4u: goto L_089C3CD4; case 0x089C3CE4u: goto L_089C3CE4; case 0x089C3CF4u: goto L_089C3CF4; case 0x089C3D04u: goto L_089C3D04; default: rs_break(0, 0x089c3ca4); }
L_089C3CAC:;
    a0 = s0 + 0;
    v0 = func_089C3D14();
    goto L_089C3CB4;
L_089C3CB4:;
    goto L_089C3C74;
L_089C3CBC:;
    v0 = 0 + 0;
    goto L_089C3C70;
L_089C3CC4:;
    a0 = s0 + 0;
    v0 = func_089C3D1C();
    goto L_089C3CCC;
L_089C3CCC:;
    goto L_089C3C74;
L_089C3CD4:;
    a0 = s0 + 0;
    v0 = func_089C3D24();
    goto L_089C3CDC;
L_089C3CDC:;
    goto L_089C3C74;
L_089C3CE4:;
    a0 = s0 + 0;
    v0 = func_089C3D2C();
    goto L_089C3CEC;
L_089C3CEC:;
    goto L_089C3C74;
L_089C3CF4:;
    a0 = s0 + 0;
    v0 = func_089C3D34();
    goto L_089C3CFC;
L_089C3CFC:;
    goto L_089C3C74;
L_089C3D04:;
    a0 = s0 + 0;
    v0 = func_089C3D3C();
    goto L_089C3D0C;
L_089C3D0C:;
    goto L_089C3C74;
}

/* 089C3D14 */
u32 func_089C3D14(void)
{
    u32 v0 = 0;
L_089C3D14:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3D1C */
u32 func_089C3D1C(void)
{
    u32 v0 = 0;
L_089C3D1C:;
    v0 = 6;
    return v0;
}

/* 089C3D24 */
u32 func_089C3D24(void)
{
    u32 v0 = 0;
L_089C3D24:;
    v0 = 5;
    return v0;
}

/* 089C3D2C */
u32 func_089C3D2C(void)
{
    u32 v0 = 0;
L_089C3D2C:;
    v0 = 7;
    return v0;
}

/* 089C3D34 */
u32 func_089C3D34(void)
{
    u32 v0 = 0;
L_089C3D34:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3D3C */
u32 func_089C3D3C(void)
{
    u32 v0 = 0;
L_089C3D3C:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3D44 */
rv_t func_089C3D44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089C3D44:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2AFC8 - (-20536);
    t1 = D_08C2AFD8 - (-20520);
    t2 = D_08C2AFE8 - (-20504);
    a1 = a1 & a0;
    v1 = t0 - 20536;
    a2 = t1 - 20520;
    cnd_ = a1 == 0;
    a3 = t2 - 20504;
    if (cnd_) { goto L_089C3DFC; }
    goto L_089C3D74;
L_089C3D74:;
    v0 = D_08AEED70 - (-4752);
    f4 = BITSF(LD32(v0-4752));
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
    ST32(t0-20536, FBITS(f2));
    ST32(t1-20520, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-20504, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089C3DFC;
L_089C3DFC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C3E04 */
rv_t func_089C3E04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3E04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089C3D44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3E18;
L_089C3E18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C3E24 */
void func_089C3E24(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089C3E24:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = a0 + 0;
    s2 = s3 + 600;
    s1 = s3 + 804;
    func_089D9AEC(a0, a1);
    goto L_089C3E54;
L_089C3E54:;
    t2 = 999;
    a0 = LD32(s0);
    t1 = D_08B45A9C - (23196);
    t0 = t1 + 23196;
    ST32(s3, a0);
    t4 = s3 + 528;
    t6 = s3 + 540;
    v0 = LD32(a0-12);
    v1 = LD32(s0+28);
    t5 = D_08B45AA8 - (23208);
    v0 = s3 + v0;
    ST32(v0, v1);
    a1 = t5 + 23208;
    a2 = s3 + 552;
    v1 = LD32(s3);
    a0 = LD32(s0+32);
    a3 = (u32)-1;
    v0 = LD32(v1-16);
    v1 = s3 + 748;
    t7 = s3 + 772;
    v0 = s3 + v0;
    ST32(v0, a0);
    v0 = D_08AEED74 - (-4748);
    a0 = s3 + 760;
    ST32(s3+236, 0);
    s0 = s3 + 784;
    t3 = 1;
    ST32(s3+240, 0);
    t8 = 0 + 0;
    ST32(s3+244, 0);
    ST32(s3+248, 0);
    ST32(s3+252, 0);
    ST32(s3+256, 0);
    ST32(s3+260, 0);
    ST32(s3+264, 0);
    ST32(s3+268, 0);
    ST32(s3+272, 0);
    ST32(s3+276, 0);
    ST32(s3+280, 0);
    ST32(s3+284, 0);
    ST32(s3+288, 0);
    ST32(s3+292, 0);
    ST32(s3+296, 0);
    ST32(s3+300, 0);
    ST32(s3+304, 0);
    ST32(s3+308, 0);
    ST32(s3+312, 0);
    ST32(s3+316, 0);
    ST32(s3+320, 0);
    ST32(s3+324, 0);
    ST32(s3+328, 0);
    ST32(s3+332, 0);
    ST32(s3+336, 0);
    ST32(s3+340, 0);
    ST32(s3+344, 0);
    ST32(s3+348, 0);
    ST32(s3+352, 0);
    ST32(s3+356, 0);
    ST32(s3+360, 0);
    ST32(s3+364, 0);
    ST32(s3+368, 0);
    ST32(s3+372, 0);
    ST32(s3+376, 0);
    ST32(s3+380, 0);
    ST32(s3+384, 0);
    ST32(s3+388, 0);
    ST32(s3+392, 0);
    ST32(s3+396, 0);
    ST32(s3+400, 0);
    ST32(s3+404, 0);
    ST32(s3+408, 0);
    ST32(s3+412, 0);
    ST32(s3+416, 0);
    ST32(s3+420, 0);
    ST32(s3+424, 0);
    ST32(s3+436, 0);
    ST32(s3+440, 0);
    ST8(s3+444, 0);
    ST32(s3+448, t2);
    ST32(s3+452, t2);
    ST32(s3+456, t2);
    ST32(s3+460, t2);
    ST32(s3+464, 0);
    ST8(s3+468, 0);
    ST8(s3+469, 0);
    ST32(s3+472, 0);
    ST8(s3+476, 0);
    ST32(s3+480, 0);
    ST32(s3+484, 0);
    ST32(s3+488, 0);
    ST32(s3+492, 0);
    ST32(s3+496, 0);
    ST32(s3+500, 0);
    ST32(s3+504, 0);
    ST32(s3+508, 0);
    ST32(s3+512, 0);
    ST32(s3+516, 0);
    ST32(s3+520, 0);
    ST32(s3+524, t2);
    f1 = BITSF(LD32(t1+23196));
    f2 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(t0+8));
    ST32(s3+528, FBITS(f1));
    ST32(t4+8, FBITS(f0));
    ST32(t4+4, FBITS(f2));
    f1 = BITSF(LD32(t1+23196));
    f2 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(t0+8));
    ST32(s3+540, FBITS(f1));
    ST32(t6+8, FBITS(f0));
    ST32(t6+4, FBITS(f2));
    f0 = BITSF(LD32(t5+23208));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+12));
    f4 = BITSF(LD32(a1+16));
    ST32(s3+552, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    ST32(a2+12, FBITS(f3));
    f0 = BITSF(LD32(a1+32));
    f1 = BITSF(LD32(a1+20));
    f2 = BITSF(LD32(a1+24));
    f3 = BITSF(LD32(a1+28));
    ST32(a2+32, FBITS(f0));
    ST32(a2+20, FBITS(f1));
    ST32(a2+24, FBITS(f2));
    ST32(a2+16, FBITS(f4));
    ST32(a2+28, FBITS(f3));
    ST32(s3+652, a3);
    ST32(s3+588, 0);
    ST32(s3+592, 0);
    ST32(s3+596, 0);
    ST32(s3+600, 0);
    ST32(s3+604, 0);
    ST32(s3+608, 0);
    ST32(s3+612, 0);
    ST32(s3+616, 0);
    ST8(s3+620, 0);
    ST8(s3+621, 0);
    ST32(s3+624, a3);
    ST32(s3+628, a3);
    ST32(s3+632, a3);
    ST32(s3+636, a3);
    ST32(s3+640, a3);
    ST32(s3+644, a3);
    ST32(s3+648, a3);
    ST8(s3+656, 0);
    ST32(s3+660, 0);
    ST32(s3+664, 0);
    ST8(s3+668, 0);
    ST8(s3+669, 0);
    ST8(s3+670, 0);
    ST32(s3+672, 0);
    f0 = BITSF(LD32(v0-4748));
    ST32(s3+676, 0);
    v0 = D_08AEED78 - (-4744);
    ST32(s3+680, 0);
    ST32(s3+736, FBITS(f0));
    ST32(s3+684, 0);
    ST32(s3+688, 0);
    ST32(s3+692, 0);
    ST32(s3+696, 0);
    ST32(s3+700, 0);
    ST32(s3+704, 0);
    ST32(s3+708, 0);
    ST32(s3+712, 0);
    ST32(s3+716, 0);
    ST32(s3+720, 0);
    ST32(s3+724, 0);
    ST32(s3+728, 0);
    ST32(s3+732, 0);
    ST32(s3+740, 0);
    ST32(s3+744, 0);
    f0 = BITSF(LD32(t1+23196));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    ST32(s3+748, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(t1+23196));
    ST32(v1+8, FBITS(f2));
    f1 = BITSF(LD32(t0+4));
    ST32(s3+760, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    f0 = BITSF(LD32(t1+23196));
    f1 = BITSF(LD32(t0+8));
    f2 = BITSF(LD32(t0+4));
    ST32(s3+772, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    f0 = BITSF(LD32(t0+8));
    ST32(t7+4, FBITS(f2));
    ST32(t7+8, FBITS(f0));
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    ST32(s3+796, 0);
    ST8(s3+800, 0);
    ST8(s3+801, 0);
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    v1 = LD32(s3);
    f0 = BITSF(LD32(v0-4744));
    v0 = (u32)-32765;
    a0 = LD32(v1-16);
    ST32(s3+844, 0);
    a0 = s3 + a0;
    ST32(s3+848, 0);
    ST32(s3+820, FBITS(f0));
    ST32(s3+840, t2);
    ST32(s3+784, 0);
    ST32(s3+804, 0);
    ST32(s3+816, 0);
    ST32(s3+824, 0);
    ST32(s3+828, 0);
    ST32(s3+832, 0);
    ST32(s3+836, 0);
    ST32(s3+852, 0);
    ST16(a0+8, v0);
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    ST8(v0+246, t3);
    v1 = LD32(s3+844);
    v0 = LD32(s3+848);
    v0 = (v0 & ~(0x1u << 3)) | ((t3 & 0x1) << 3);
    v1 = v1 | 0x1;
    v0 = (v0 & ~(0x1u << 2)) | ((t3 & 0x1) << 2);
    ST32(s3+848, v0);
    ST32(s3+844, v1);
    goto L_089C41E4;
L_089C41E4:;
    t8 = t8 + 1;
    v0 = t8 < 0x4u;
    ST32(s2, 0);
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089C41E4; }
    goto L_089C41F8;
L_089C41F8:;
    a0 = 0 + 0;
    v1 = s3 + 0;
    goto L_089C4200;
L_089C4200:;
    a0 = a0 + 1;
    v0 = a0 < 0x6u;
    ST32(v1+672, 0);
    ST32(v1+696, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089C4200; }
    goto L_089C4218;
L_089C4218:;
    v0 = LD32(s3+844);
    a1 = LD32(s3);
    s2 = D_08C2B0A8 - (-20312);
    v0 = (v0 & ~(0x1u << 19)) | ((0 & 0x1) << 19);
    ST32(s3+844, v0);
    s1 = s2 - 20312;
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = LD32(s1+4);
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4250;
L_089C4250:;
    a0 = LD32(s2-20312);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    a0 = s3 + 0;
    ST32(v0+4, a1);
    ST32(v0, s3);
    ST32(s0, v0);
    ST8(v0+8, 0);
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4284;
L_089C4284:;
    a0 = 0x10000u;
    a1 = 0xb8a80000u;
    a0 = a0 | 0x94f7;
    a1 = a1 | 0xcf5b;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C42A0;
L_089C42A0:;
    v0 = D_08AEED7C - (-4740);
    f12 = BITSF(LD32(v0-4740));
    a0 = LD32(sp);
    a1 = 0x7fe60000u;
    a1 = a1 | 0xf359;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C42B8;
L_089C42B8:;
    v0 = D_08B2BFA4 - (-16476);
    v1 = LD_U8(v0-16476);
    cnd_ = v1 == 0;
    ST32(s3+204, FBITS(f0));
    if (cnd_) { goto L_089C42E4; }
    goto L_089C42C8;
L_089C42C8:;
    v0 = D_08B2BFC0 - (-16448);
    f1 = BITSF(LD32(v0-16448));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089C42E0; }
    goto L_089C42E0;
L_089C42E0:;
    ST32(s3+204, FBITS(f0));
    goto L_089C42E4;
L_089C42E4:;
    v0 = D_08AEED80 - (-4736);
    f12 = BITSF(LD32(v0-4736));
    a0 = LD32(sp);
    a1 = 0x154c0000u;
    a1 = a1 | 0x54f4;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C42FC;
L_089C42FC:;
    ST32(s3+208, FBITS(f0));
    v0 = D_08AEED84 - (-4732);
    a1 = 0xee710000u;
    a0 = LD32(sp);
    f12 = BITSF(LD32(v0-4732));
    a1 = a1 | 0x2133;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4318;
L_089C4318:;
    ST32(s3+212, FBITS(f0));
    v0 = D_08AEED88 - (-4728);
    a1 = 0x84380000u;
    a0 = LD32(sp);
    f12 = BITSF(LD32(v0-4728));
    a1 = a1 | 0x3da;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4334;
L_089C4334:;
    ST32(s3+216, FBITS(f0));
    sp = sp + 48;
    return;
}

/* 089C4354 */
void func_089C4354(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C4354:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = 0 + 0;
    s2 = a0 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s4+28);
    v0 = a0 + v0;
    ST32(v0, v1);
    a1 = LD32(a0);
    v1 = LD32(s4+32);
    v0 = LD32(a1-16);
    v0 = a0 + v0;
    ST32(v0, v1);
    func_089C9BC4(a0);
    goto L_089C43AC;
L_089C43AC:;
    a0 = s2 + 0;
    func_089CA0F8(a0);
    goto L_089C43B4;
L_089C43B4:;
    a0 = s2 + 0;
    func_089C9DF8(a0);
    goto L_089C43BC;
L_089C43BC:;
    a0 = s2 + 0;
    func_089C9F18(a0);
    goto L_089C43C4;
L_089C43C4:;
    a0 = s2 + 0;
    func_089CD794(a0);
    goto L_089C43CC;
L_089C43CC:;
    a0 = s2 + 0;
    func_089CD764(a0);
    goto L_089C43D4;
L_089C43D4:;
    a0 = s2 + 0;
    func_089C9CD8(a0);
    goto L_089C43DC;
L_089C43DC:;
    v0 = LD32(s2+720);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+724); goto L_089C441C; }
    goto L_089C43E8;
L_089C43E8:;
    s1 = s2 + 0;
    a0 = LD32(s1+672);
    goto L_089C43F0;
L_089C43F0:;
    s3 = s3 + 1;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C43F8;
L_089C43F8:;
    s0 = LD32(s1+672);
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C456C; }
    goto L_089C4408;
L_089C4408:;
    v0 = LD32(s2+720);
    goto L_089C440C;
L_089C440C:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+672); goto L_089C43F0; }
    goto L_089C4418;
L_089C4418:;
    v0 = LD32(s2+724);
    goto L_089C441C;
L_089C441C:;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089C4454; }
    goto L_089C4424;
L_089C4424:;
    s1 = s2 + 0;
    a0 = LD32(s1+696);
    goto L_089C442C;
L_089C442C:;
    s3 = s3 + 1;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C4434;
L_089C4434:;
    s0 = LD32(s1+696);
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C4554; }
    goto L_089C4444;
L_089C4444:;
    v0 = LD32(s2+724);
    goto L_089C4448;
L_089C4448:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+696); goto L_089C442C; }
    goto L_089C4454;
L_089C4454:;
    a0 = s2 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C445C;
L_089C445C:;
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4470;
L_089C4470:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C4544; }
    goto L_089C4478;
L_089C4478:;
    a1 = LD32(s2);
    goto L_089C447C;
L_089C447C:;
    v1 = D_08C2B0A8 - (-20312);
    s0 = v1 - 20312;
    v0 = LD32(a1-16);
    a0 = LD32(s0+4);
    a1 = LD32(v1-20312);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089C44D0; }
    goto L_089C44B4;
L_089C44B4:;
    v0 = LD32(a0);
    goto L_089C44B8;
L_089C44B8:;
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(s0+8); goto L_089C44FC; }
    goto L_089C44C0;
L_089C44C0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089C44B8; }
    goto L_089C44D0;
L_089C44D0:;
    a1 = s4 + 4;
    a0 = s2 + 0;
    func_089DA1FC(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C44DC;
L_089C44DC:;
    sp = sp + 32;
    return;
L_089C44FC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089C450C; }
    goto L_089C4504;
L_089C4504:;
    ST8(a0+8, v0);
    goto L_089C44D0;
L_089C450C:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089C4534; }
    goto L_089C4514;
L_089C4514:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_089C451C;
L_089C451C:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4524;
L_089C4524:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_089C44D0;
L_089C4534:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_089C451C;
L_089C4544:;
    a0 = s2 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C454C;
L_089C454C:;
    a1 = LD32(s2);
    goto L_089C447C;
L_089C4554:;
    func_08A17B30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C455C;
L_089C455C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4564;
L_089C4564:;
    v0 = LD32(s2+724);
    goto L_089C4448;
L_089C456C:;
    func_08A17B30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C4574;
L_089C4574:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C457C;
L_089C457C:;
    v0 = LD32(s2+720);
    goto L_089C440C;
}

/* 089C4584 */
rv_t func_089C4584(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C4584:;
    v1 = D_08B02D70 - (11632);
    v1 = v1 + 11632;
    v0 = v1 + 596;
    a1 = v1 + 708;
    ST32(a0+856, v0);
    sp = sp - 32;
    ST32(a0+1120, a1);
    ST32(a0, v1);
    s2 = a0 + 0;
    s3 = 0 + 0;
    func_089C9BC4(a0);
    goto L_089C45C4;
L_089C45C4:;
    a0 = s2 + 0;
    func_089CA0F8(a0);
    goto L_089C45CC;
L_089C45CC:;
    a0 = s2 + 0;
    func_089C9DF8(a0);
    goto L_089C45D4;
L_089C45D4:;
    a0 = s2 + 0;
    func_089C9F18(a0);
    goto L_089C45DC;
L_089C45DC:;
    a0 = s2 + 0;
    func_089CD794(a0);
    goto L_089C45E4;
L_089C45E4:;
    a0 = s2 + 0;
    func_089CD764(a0);
    goto L_089C45EC;
L_089C45EC:;
    a0 = s2 + 0;
    func_089C9CD8(a0);
    goto L_089C45F4;
L_089C45F4:;
    v0 = LD32(s2+720);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_089C462C; }
    goto L_089C4600;
L_089C4600:;
    a0 = LD32(s1+672);
    goto L_089C4604;
L_089C4604:;
    s3 = s3 + 1;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C460C;
L_089C460C:;
    s0 = LD32(s1+672);
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C4704; }
    goto L_089C461C;
L_089C461C:;
    v0 = LD32(s2+720);
    goto L_089C4620;
L_089C4620:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+672); goto L_089C4604; }
    goto L_089C462C;
L_089C462C:;
    v0 = LD32(s2+724);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089C4668; }
    goto L_089C4638;
L_089C4638:;
    s1 = s2 + 0;
    a0 = LD32(s1+696);
    goto L_089C4640;
L_089C4640:;
    s3 = s3 + 1;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C4648;
L_089C4648:;
    s0 = LD32(s1+696);
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C46EC; }
    goto L_089C4658;
L_089C4658:;
    v0 = LD32(s2+724);
    goto L_089C465C;
L_089C465C:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+696); goto L_089C4640; }
    goto L_089C4668;
L_089C4668:;
    a0 = s2 + 0;
    s1 = s2 + 1120;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4674;
L_089C4674:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C467C;
L_089C467C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C46DC; }
    goto L_089C4684;
L_089C4684:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_089C4688;
L_089C4688:;
    s0 = D_08B03050 - (12368);
    a1 = s2 + 0;
    a0 = a0 - 20312;
    s0 = s0 + 12368;
    func_08AC66BC(a0, a1, 0, 0, 0);
    goto L_089C469C;
L_089C469C:;
    a1 = s0 + 4;
    a0 = s2 + 0;
    s0 = s0 + 36;
    func_089DA1FC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C46AC;
L_089C46AC:;
    a1 = s0 + 0;
    a0 = s2 + 856;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C46B8;
L_089C46B8:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C46C0;
L_089C46C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C46DC:;
    a0 = s2 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C46E4;
L_089C46E4:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_089C4688;
L_089C46EC:;
    func_08A17B30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C46F4;
L_089C46F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C46FC;
L_089C46FC:;
    v0 = LD32(s2+724);
    goto L_089C465C;
L_089C4704:;
    func_08A17B30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C470C;
L_089C470C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4714;
L_089C4714:;
    v0 = LD32(s2+720);
    goto L_089C4620;
}

/* 089C471C */
rv_t func_089C471C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C471C:;
    v1 = D_08B02D70 - (11632);
    v1 = v1 + 11632;
    v0 = v1 + 596;
    a1 = v1 + 708;
    ST32(a0+856, v0);
    sp = sp - 32;
    ST32(a0+1120, a1);
    ST32(a0, v1);
    s2 = a0 + 0;
    s3 = 0 + 0;
    func_089C9BC4(a0);
    goto L_089C475C;
L_089C475C:;
    a0 = s2 + 0;
    func_089CA0F8(a0);
    goto L_089C4764;
L_089C4764:;
    a0 = s2 + 0;
    func_089C9DF8(a0);
    goto L_089C476C;
L_089C476C:;
    a0 = s2 + 0;
    func_089C9F18(a0);
    goto L_089C4774;
L_089C4774:;
    a0 = s2 + 0;
    func_089CD794(a0);
    goto L_089C477C;
L_089C477C:;
    a0 = s2 + 0;
    func_089CD764(a0);
    goto L_089C4784;
L_089C4784:;
    a0 = s2 + 0;
    func_089C9CD8(a0);
    goto L_089C478C;
L_089C478C:;
    v0 = LD32(s2+720);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_089C47C4; }
    goto L_089C4798;
L_089C4798:;
    a0 = LD32(s1+672);
    goto L_089C479C;
L_089C479C:;
    s3 = s3 + 1;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C47A4;
L_089C47A4:;
    s0 = LD32(s1+672);
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C48A4; }
    goto L_089C47B4;
L_089C47B4:;
    v0 = LD32(s2+720);
    goto L_089C47B8;
L_089C47B8:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+672); goto L_089C479C; }
    goto L_089C47C4;
L_089C47C4:;
    v0 = LD32(s2+724);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089C4800; }
    goto L_089C47D0;
L_089C47D0:;
    s1 = s2 + 0;
    a0 = LD32(s1+696);
    goto L_089C47D8;
L_089C47D8:;
    s3 = s3 + 1;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C47E0;
L_089C47E0:;
    s0 = LD32(s1+696);
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C488C; }
    goto L_089C47F0;
L_089C47F0:;
    v0 = LD32(s2+724);
    goto L_089C47F4;
L_089C47F4:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+696); goto L_089C47D8; }
    goto L_089C4800;
L_089C4800:;
    a0 = s2 + 0;
    s1 = s2 + 1120;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C480C;
L_089C480C:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4814;
L_089C4814:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C487C; }
    goto L_089C481C;
L_089C481C:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_089C4820;
L_089C4820:;
    s0 = D_08B03050 - (12368);
    a1 = s2 + 0;
    a0 = a0 - 20312;
    s0 = s0 + 12368;
    func_08AC66BC(a0, a1, 0, 0, 0);
    goto L_089C4834;
L_089C4834:;
    a1 = s0 + 4;
    a0 = s2 + 0;
    s0 = s0 + 36;
    func_089DA1FC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C4844;
L_089C4844:;
    a1 = s0 + 0;
    a0 = s2 + 856;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C4850;
L_089C4850:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4858;
L_089C4858:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4860;
L_089C4860:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C487C:;
    a0 = s2 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4884;
L_089C4884:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_089C4820;
L_089C488C:;
    func_08A17B30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C4894;
L_089C4894:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C489C;
L_089C489C:;
    v0 = LD32(s2+724);
    goto L_089C47F4;
L_089C48A4:;
    func_08A17B30(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C48AC;
L_089C48AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C48B4;
L_089C48B4:;
    v0 = LD32(s2+720);
    goto L_089C47B8;
}

/* 089C48BC */
rv_t func_089C48BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C48BC:;
    sp = sp - 32;
    a2 = D_08B25AC0 - (23232);
    a3 = a2 + 23232;
    s0 = a0 + 0;
    v0 = LD32(a0+844);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089C4A14; }
    goto L_089C48E4;
L_089C48E4:;
    v0 = D_08AEEDA4 - (-4700);
    f0 = BITSF(LD32(v0-4700));
    ST32(a0+820, FBITS(f0));
    v0 = LD32(a2+23232);
    v1 = LD32(a3+4);
    a1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a1;
    v0 = v0 + v1;
    v1 = v1 + v0;
    a1 = (v0 >> 1) & 0x1;
    ST32(a3+4, v1);
    cnd_ = a1 == 0;
    ST32(a2+23232, v0);
    if (cnd_) { goto L_089C4A04; }
    goto L_089C491C;
L_089C491C:;
    v0 = func_089C68D4(a0, t1, t2, t3);
    goto L_089C4924;
L_089C4924:;
    a1 = v0 + 0;
    goto L_089C4928;
L_089C4928:;
    v0 = D_08AEEDA8 - (-4696);
    f12 = BITSF(LD32(v0-4696));
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_089C8FD4(a0, a1, a2, a3);
    goto L_089C4940;
L_089C4940:;
    a0 = s0 + 0;
    func_089CD578(a0);
    goto L_089C4948;
L_089C4948:;
    a0 = s0 + 0;
    func_089CD424(a0);
    goto L_089C4950;
L_089C4950:;
    a0 = s0 + 0;
    func_089CB2E0(a0);
    goto L_089C4958;
L_089C4958:;
    v0 = LD32(s0+844);
    a0 = s0 + 0;
    v0 = v0 | 0x8;
    ST32(s0+844, v0);
    func_089C9BC4(a0);
    goto L_089C496C;
L_089C496C:;
    a0 = s0 + 0;
    func_089CA0F8(a0);
    goto L_089C4974;
L_089C4974:;
    a0 = s0 + 0;
    func_089C9DF8(a0);
    goto L_089C497C;
L_089C497C:;
    a0 = s0 + 0;
    func_089C9F18(a0);
    goto L_089C4984;
L_089C4984:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    v0 = s0 + 540;
    if (cnd_) { goto L_089C49AC; }
    goto L_089C4994;
L_089C4994:;
    v0 = LD32(s0+844);
    v1 = 0x80000u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C49E4; }
    goto L_089C49A8;
L_089C49A8:;
    v0 = s0 + 540;
    goto L_089C49AC;
L_089C49AC:;
    ST32(s0+540, 0);
    a0 = s0 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(sp, 0);
    f0 = func_089C8410(a0);
    goto L_089C49CC;
L_089C49CC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DC32C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C49D4;
L_089C49D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C49E4:;
    { rv_t r_ = func_089CAF64(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C49EC;
L_089C49EC:;
    v1 = LD32(s0);
    v0 = LD32(v1+464);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C49FC;
L_089C49FC:;
    v0 = s0 + 540;
    goto L_089C49AC;
L_089C4A04:;
    v0 = func_089C68FC(a0, t1, t2, t3);
    goto L_089C4A0C;
L_089C4A0C:;
    a1 = v0 + 0;
    goto L_089C4928;
L_089C4A14:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08876270(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4A24;
L_089C4A24:;
    goto L_089C4940;
}

/* 089C4A2C */
rv_t func_089C4A2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089C4A2C:;
    sp = sp - 64;
    s1 = a0 + 0;
    f0 = func_089C5440(a0);
    goto L_089C4A54;
L_089C4A54:;
    a0 = s1 + 0;
    ST32(s1+236, FBITS(f0));
    f0 = func_089C5488(a0);
    goto L_089C4A60;
L_089C4A60:;
    ST32(s1+240, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C54D0(a0);
    goto L_089C4A6C;
L_089C4A6C:;
    ST32(s1+244, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5518(a0);
    goto L_089C4A78;
L_089C4A78:;
    ST32(s1+248, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5560(a0);
    goto L_089C4A84;
L_089C4A84:;
    ST32(s1+252, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C55A8(a0);
    goto L_089C4A90;
L_089C4A90:;
    ST32(s1+256, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C55F0(a0);
    goto L_089C4A9C;
L_089C4A9C:;
    ST32(s1+260, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5638(a0);
    goto L_089C4AA8;
L_089C4AA8:;
    ST32(s1+264, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5680(a0);
    goto L_089C4AB4;
L_089C4AB4:;
    ST32(s1+268, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C56C8(a0);
    goto L_089C4AC0;
L_089C4AC0:;
    ST32(s1+272, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5710(a0, 0, 0, 0);
    goto L_089C4ACC;
L_089C4ACC:;
    ST32(s1+276, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C573C(a0, 0, 0, 0);
    goto L_089C4AD8;
L_089C4AD8:;
    ST32(s1+280, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5768(a0, 0, 0, 0);
    goto L_089C4AE4;
L_089C4AE4:;
    ST32(s1+284, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5790(a0, 0, 0, 0);
    goto L_089C4AF0;
L_089C4AF0:;
    ST32(s1+288, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C57BC(a0, 0, 0, 0);
    goto L_089C4AFC;
L_089C4AFC:;
    ST32(s1+292, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C57E8(a0, 0, 0, 0);
    goto L_089C4B08;
L_089C4B08:;
    ST32(s1+296, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5814(a0, 0, 0, 0);
    goto L_089C4B14;
L_089C4B14:;
    ST32(s1+300, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5840(a0, 0, 0, 0);
    goto L_089C4B20;
L_089C4B20:;
    ST32(s1+304, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C586C(a0, 0, 0, 0);
    goto L_089C4B2C;
L_089C4B2C:;
    ST32(s1+308, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C58C4(a0, 0, 0, 0);
    goto L_089C4B38;
L_089C4B38:;
    ST32(s1+312, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C58F0(a0);
    goto L_089C4B44;
L_089C4B44:;
    ST32(s1+316, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5938(a0);
    goto L_089C4B50;
L_089C4B50:;
    ST32(s1+320, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5980(a0);
    goto L_089C4B5C;
L_089C4B5C:;
    ST32(s1+324, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C59C8(a0);
    goto L_089C4B68;
L_089C4B68:;
    ST32(s1+328, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5A10(a0);
    goto L_089C4B74;
L_089C4B74:;
    ST32(s1+332, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5A58(a0);
    goto L_089C4B80;
L_089C4B80:;
    ST32(s1+336, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5AA0(a0);
    goto L_089C4B8C;
L_089C4B8C:;
    ST32(s1+340, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5AE8(a0, 0, 0, 0);
    goto L_089C4B98;
L_089C4B98:;
    ST32(s1+344, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5B10(a0, 0, 0, 0);
    goto L_089C4BA4;
L_089C4BA4:;
    ST32(s1+348, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5B3C(a0, 0, 0, 0);
    goto L_089C4BB0;
L_089C4BB0:;
    ST32(s1+352, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5B68(a0, 0, 0, 0);
    goto L_089C4BBC;
L_089C4BBC:;
    ST32(s1+356, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5B94(a0, 0, 0, 0);
    goto L_089C4BC8;
L_089C4BC8:;
    ST32(s1+360, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5BBC(a0, 0, 0, 0);
    goto L_089C4BD4;
L_089C4BD4:;
    ST32(s1+364, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5BE8(a0, 0, 0, 0);
    goto L_089C4BE0;
L_089C4BE0:;
    ST32(s1+368, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5C14(a0, 0, 0, 0);
    goto L_089C4BEC;
L_089C4BEC:;
    ST32(s1+372, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5C40(a0, 0, 0, 0);
    goto L_089C4BF8;
L_089C4BF8:;
    ST32(s1+376, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5D84(a0, 0, 0, 0);
    goto L_089C4C04;
L_089C4C04:;
    ST32(s1+380, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5DB0(a0, 0, 0, 0);
    goto L_089C4C10;
L_089C4C10:;
    ST32(s1+384, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5DDC(a0, 0, 0, 0);
    goto L_089C4C1C;
L_089C4C1C:;
    ST32(s1+388, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5E08(a0, 0, 0, 0);
    goto L_089C4C28;
L_089C4C28:;
    ST32(s1+392, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5F44(a0, 0, 0, 0);
    goto L_089C4C34;
L_089C4C34:;
    ST32(s1+428, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C5F70(a0, 0, 0, 0);
    goto L_089C4C40;
L_089C4C40:;
    ST32(s1+432, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C63D0(a0);
    goto L_089C4C4C;
L_089C4C4C:;
    ST32(s1+396, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C6418(a0, 0, 0, 0);
    goto L_089C4C58;
L_089C4C58:;
    ST32(s1+400, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C644C(a0, 0, 0, 0);
    goto L_089C4C64;
L_089C4C64:;
    ST32(s1+404, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C6524(a0, 0, 0, 0);
    goto L_089C4C70;
L_089C4C70:;
    ST32(s1+408, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C654C(a0, 0, 0, 0);
    goto L_089C4C7C;
L_089C4C7C:;
    ST32(s1+412, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C657C(a0, 0, 0, 0);
    goto L_089C4C88;
L_089C4C88:;
    ST32(s1+416, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C65CC(a0, 0, 0, 0);
    goto L_089C4C94;
L_089C4C94:;
    ST32(s1+420, FBITS(f0));
    a0 = s1 + 0;
    f0 = func_089C65A4(a0, 0, 0, 0);
    goto L_089C4CA0;
L_089C4CA0:;
    ST32(s1+424, FBITS(f0));
    a0 = s1 + 0;
    v0 = func_089C6AE8(a0, 0, 0, 0);
    goto L_089C4CAC;
L_089C4CAC:;
    ST8(s1+444, v0);
    a0 = s1 + 0;
    v0 = func_089C6A3C(a0, 0, 0, 0);
    goto L_089C4CB8;
L_089C4CB8:;
    ST32(s1+436, v0);
    a0 = s1 + 0;
    v0 = func_089C64FC(a0, 0, 0, 0);
    goto L_089C4CC4;
L_089C4CC4:;
    ST32(s1+440, v0);
    a0 = s1 + 0;
    v0 = func_089C664C(a0, 0, 0, 0);
    goto L_089C4CD0;
L_089C4CD0:;
    v1 = LD32(s1+844);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+844, v1);
    a0 = s1 + 0;
    v0 = func_089C6C78(a0, 0, 0, 0);
    goto L_089C4CE4;
L_089C4CE4:;
    v1 = LD32(s1+844);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s1+844, v1);
    a0 = s1 + 0;
    v0 = func_089C68AC(a0, 0, 0, 0);
    goto L_089C4CF8;
L_089C4CF8:;
    v1 = LD32(s1+844);
    v1 = (v1 & ~(0x1u << 17)) | ((v0 & 0x1) << 17);
    ST32(s1+844, v1);
    a0 = s1 + 0;
    v0 = func_089C6C00(a0, 0, 0, 0);
    goto L_089C4D0C;
L_089C4D0C:;
    v1 = LD32(s1+844);
    v1 = (v1 & ~(0x1u << 13)) | ((v0 & 0x1) << 13);
    ST32(s1+844, v1);
    a0 = s1 + 0;
    v0 = func_089C6B38(a0, 0, 0, 0);
    goto L_089C4D20;
L_089C4D20:;
    v1 = LD32(s1+844);
    v1 = (v1 & ~(0x1u << 14)) | ((v0 & 0x1) << 14);
    ST32(s1+844, v1);
    a0 = s1 + 0;
    f0 = func_089C6478(a0, 0, 0, 0);
    goto L_089C4D34;
L_089C4D34:;
    f12 = f0;
    a0 = s1 + 0;
    f20 = f0;
    func_089DCF40(a0, f12);
    goto L_089C4D44;
L_089C4D44:;
    v1 = LD32(s1);
    v0 = LD32(v1+348);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4D54;
L_089C4D54:;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_089C4D64; }
    goto L_089C4D64;
L_089C4D64:;
    ST32(s1+160, FBITS(f20));
    a0 = s1 + 0;
    f0 = func_089C64A4(a0, 0, 0, 0);
    goto L_089C4D70;
L_089C4D70:;
    v0 = 6;
    ST32(s1+168, FBITS(f0));
    a0 = s1 + 0;
    ST32(s1+720, v0);
    v0 = func_089C60B4(a0, 0, 0, 0);
    goto L_089C4D84;
L_089C4D84:;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_089C536C; }
    goto L_089C4D8C;
L_089C4D8C:;
    v0 = 6;
    goto L_089C4D90;
L_089C4D90:;
    ST32(s1+724, v0);
    a0 = s1 + 0;
    v0 = func_089C61A4(a0, 0, 0, 0);
    goto L_089C4D9C;
L_089C4D9C:;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_089C5300; }
    goto L_089C4DA4;
L_089C4DA4:;
    a0 = s1 + 0;
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_089C4DAC;
L_089C4DAC:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4DC0;
L_089C4DC0:;
    v1 = LD32(s1+720);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089C4E1C; }
    goto L_089C4DCC;
L_089C4DCC:;
    s4 = 1;
    s2 = s1 + 672;
    goto L_089C4DD4;
L_089C4DD4:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4DDC;
L_089C4DDC:;
    a1 = LD32(sp);
    s0 = v0 + 0;
    t0 = s3 & 0xff;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    func_08A16FD8(a0, a1, a2, a3, t0, 0, 0);
    goto L_089C4DF8;
L_089C4DF8:;
    s3 = s3 + 1;
    ST32(s2, s0);
    cnd_ = s0 == 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089C4E0C; }
    goto L_089C4E08;
L_089C4E08:;
    ST8(s0+336, s4);
    goto L_089C4E0C;
L_089C4E0C:;
    v0 = LD32(s1+720);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C4DD4; }
    goto L_089C4E1C;
L_089C4E1C:;
    a0 = s1 + 0;
    v0 = func_089C5FC4(a0, 0, 0, 0);
    goto L_089C4E24;
L_089C4E24:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C4E38;
L_089C4E38:;
    v1 = LD32(s1+724);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089C4E94; }
    goto L_089C4E44;
L_089C4E44:;
    s4 = 1;
    s2 = s1 + 696;
    goto L_089C4E4C;
L_089C4E4C:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C4E54;
L_089C4E54:;
    a1 = LD32(sp);
    s0 = v0 + 0;
    t0 = s3 & 0xff;
    a0 = v0 + 0;
    a2 = s1 + 0;
    a3 = 1;
    func_08A16FD8(a0, a1, a2, a3, t0, 0, 0);
    goto L_089C4E70;
L_089C4E70:;
    s3 = s3 + 1;
    ST32(s2, s0);
    cnd_ = s0 == 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089C4E84; }
    goto L_089C4E80;
L_089C4E80:;
    ST8(s0+336, s4);
    goto L_089C4E84;
L_089C4E84:;
    v0 = LD32(s1+724);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C4E4C; }
    goto L_089C4E94;
L_089C4E94:;
    v1 = LD32(s1+720);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+692); goto L_089C52D4; }
    goto L_089C4EA4;
L_089C4EA4:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+688); goto L_089C52A8; }
    goto L_089C4EB0;
L_089C4EB0:;
    v0 = v1 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+684); goto L_089C527C; }
    goto L_089C4EBC;
L_089C4EBC:;
    v0 = v1 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+680); goto L_089C5250; }
    goto L_089C4EC8;
L_089C4EC8:;
    v0 = v1 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+676); goto L_089C5224; }
    goto L_089C4ED4;
L_089C4ED4:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(s1+672); goto L_089C51FC; }
    goto L_089C4EDC;
L_089C4EDC:;
    a2 = LD32(s1+724);
    v0 = a2 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+716); goto L_089C51D0; }
    goto L_089C4EEC;
L_089C4EEC:;
    v0 = a2 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+712); goto L_089C51A4; }
    goto L_089C4EF8;
L_089C4EF8:;
    v0 = a2 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+708); goto L_089C5178; }
    goto L_089C4F04;
L_089C4F04:;
    v0 = a2 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+704); goto L_089C514C; }
    goto L_089C4F10;
L_089C4F10:;
    v0 = a2 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+700); goto L_089C5120; }
    goto L_089C4F1C;
L_089C4F1C:;
    cnd_ = a2 != 0;
    if (cnd_) { s0 = LD32(s1+696); goto L_089C50F8; }
    goto L_089C4F24;
L_089C4F24:;
    v1 = LD32(s1+720);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089C5000; }
    goto L_089C4F30;
L_089C4F30:;
    v0 = D_08AEEDAC - (-4692);
    f5 = BITSF(0);
    f6 = BITSF(LD32(v0-4692));
    t0 = v0 - 4692;
    goto L_089C4F40;
L_089C4F40:;
    v0 = a0 << 2;
    v0 = v0 + s1;
    v0 = LD32(v0+672);
    f3 = BITSF(0);
    f0 = BITSF(LD32(v0+52));
    fcc = FCMP(f0, f5, 2);
    cnd_ = fcc;
    a2 = a0 + 1;
    if (cnd_) { goto L_089C4F70; }
    goto L_089C4F64;
L_089C4F64:;
    f1 = f6 / f0;
    f0 = BITSF(LD32(v0+48));
    f3 = f0 * f1;
    goto L_089C4F70;
L_089C4F70:;
    v0 = a2 < v1;
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_089C4FF8; }
    goto L_089C4F7C;
L_089C4F7C:;
    v0 = a2 << 2;
    f2 = BITSF(0);
    f4 = BITSF(LD32(t0));
    v0 = v0 + s1;
    a0 = v0 + 672;
    a3 = 1;
    goto L_089C4F94;
L_089C4F94:;
    v0 = LD32(a0);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0+52));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    a1 = a1 + 1;
    if (cnd_) { goto L_089C4FBC; }
    goto L_089C4FB0;
L_089C4FB0:;
    f1 = f4 / f1;
    f0 = BITSF(LD32(v0+48));
    f0 = f0 * f1;
    goto L_089C4FBC;
L_089C4FBC:;
    fcc = FCMP(f3, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a0); goto L_089C4FE0; }
    goto L_089C4FCC;
L_089C4FCC:;
    v1 = LD32(a0);
    v0 = LD32(v1+364);
    v0 = (v0 & ~(0x1u << 16)) | ((a3 & 0x1) << 16);
    ST32(v1+364, v0);
    v0 = LD32(a0);
    goto L_089C4FE0;
L_089C4FE0:;
    ST32(v0+124, 0);
    v1 = LD32(s1+720);
    v0 = a1 < v1;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089C4F94; }
    goto L_089C4FF4;
L_089C4FF4:;
    v0 = a2 < v1;
    goto L_089C4FF8;
L_089C4FF8:;
    cnd_ = v0 != 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_089C4F40; }
    goto L_089C5000;
L_089C5000:;
    a2 = LD32(s1+724);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C50D4; }
    goto L_089C500C;
L_089C500C:;
    v0 = D_08AEEDAC - (-4692);
    f5 = BITSF(0);
    f6 = BITSF(LD32(v0-4692));
    t1 = v0 - 4692;
    goto L_089C501C;
L_089C501C:;
    v0 = v1 << 2;
    v0 = v0 + s1;
    v0 = LD32(v0+696);
    f3 = BITSF(0);
    f0 = BITSF(LD32(v0+52));
    fcc = FCMP(f0, f5, 2);
    cnd_ = fcc;
    a3 = v1 + 1;
    if (cnd_) { goto L_089C504C; }
    goto L_089C5040;
L_089C5040:;
    f1 = f6 / f0;
    f0 = BITSF(LD32(v0+48));
    f3 = f0 * f1;
    goto L_089C504C;
L_089C504C:;
    v0 = a3 < a2;
    cnd_ = v0 == 0;
    a1 = a3 + 0;
    if (cnd_) { goto L_089C50CC; }
    goto L_089C5058;
L_089C5058:;
    v0 = a3 << 2;
    f2 = BITSF(0);
    f4 = BITSF(LD32(t1));
    v0 = v0 + s1;
    a0 = v0 + 696;
    t0 = 1;
    goto L_089C5070;
L_089C5070:;
    v0 = LD32(a0);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0+52));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    a1 = a1 + 1;
    if (cnd_) { goto L_089C5098; }
    goto L_089C508C;
L_089C508C:;
    f1 = f4 / f1;
    f0 = BITSF(LD32(v0+48));
    f0 = f0 * f1;
    goto L_089C5098;
L_089C5098:;
    fcc = FCMP(f3, f0, 2);
    cnd_ = !fcc;
    v0 = a1 < a2;
    if (cnd_) { goto L_089C50C0; }
    goto L_089C50A8;
L_089C50A8:;
    v1 = LD32(a0);
    v0 = LD32(v1+364);
    v0 = (v0 & ~(0x1u << 16)) | ((t0 & 0x1) << 16);
    ST32(v1+364, v0);
    a2 = LD32(s1+724);
    v0 = a1 < a2;
    goto L_089C50C0;
L_089C50C0:;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089C5070; }
    goto L_089C50C8;
L_089C50C8:;
    v0 = a3 < a2;
    goto L_089C50CC;
L_089C50CC:;
    cnd_ = v0 != 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_089C501C; }
    goto L_089C50D4;
L_089C50D4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089C50F8:;
    a0 = s1 + 0;
    v0 = func_089C60DC(a0, 0, 0, 0);
    goto L_089C5100;
L_089C5100:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+696);
    { rv_t r_ = func_089C62D0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C5110;
L_089C5110:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    goto L_089C4F24;
L_089C5120:;
    a0 = s1 + 0;
    v0 = func_089C6104(a0, 0, 0, 0);
    goto L_089C5128;
L_089C5128:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+700);
    { rv_t r_ = func_089C62F8(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C5138;
L_089C5138:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    a2 = LD32(s1+724);
    goto L_089C4F1C;
L_089C514C:;
    a0 = s1 + 0;
    v0 = func_089C612C(a0, 0, 0, 0);
    goto L_089C5154;
L_089C5154:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+704);
    f0 = func_089C6324(a0, 0, 0, 0);
    goto L_089C5164;
L_089C5164:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    a2 = LD32(s1+724);
    goto L_089C4F10;
L_089C5178:;
    a0 = s1 + 0;
    v0 = func_089C6154(a0, 0, 0, 0);
    goto L_089C5180;
L_089C5180:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+708);
    f0 = func_089C634C(a0, 0, 0, 0);
    goto L_089C5190;
L_089C5190:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    a2 = LD32(s1+724);
    goto L_089C4F04;
L_089C51A4:;
    a0 = s1 + 0;
    v0 = func_089C617C(a0, 0, 0, 0);
    goto L_089C51AC;
L_089C51AC:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+712);
    f0 = func_089C6378(a0, 0, 0, 0);
    goto L_089C51BC;
L_089C51BC:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    a2 = LD32(s1+724);
    goto L_089C4EF8;
L_089C51D0:;
    a0 = s1 + 0;
    v0 = func_089C61A4(a0, 0, 0, 0);
    goto L_089C51D8;
L_089C51D8:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+716);
    f0 = func_089C63A4(a0, 0, 0, 0);
    goto L_089C51E8;
L_089C51E8:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    a2 = LD32(s1+724);
    goto L_089C4EEC;
L_089C51FC:;
    a0 = s1 + 0;
    v0 = func_089C5FEC(a0, 0, 0, 0);
    goto L_089C5204;
L_089C5204:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+672);
    f0 = func_089C61CC(a0, 0, 0, 0);
    goto L_089C5214;
L_089C5214:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    goto L_089C4EDC;
L_089C5224:;
    a0 = s1 + 0;
    v0 = func_089C6014(a0, 0, 0, 0);
    goto L_089C522C;
L_089C522C:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+676);
    f0 = func_089C61F4(a0, 0, 0, 0);
    goto L_089C523C;
L_089C523C:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    v1 = LD32(s1+720);
    goto L_089C4ED4;
L_089C5250:;
    a0 = s1 + 0;
    v0 = func_089C603C(a0, 0, 0, 0);
    goto L_089C5258;
L_089C5258:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+680);
    f0 = func_089C6220(a0, 0, 0, 0);
    goto L_089C5268;
L_089C5268:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    v1 = LD32(s1+720);
    goto L_089C4EC8;
L_089C527C:;
    a0 = s1 + 0;
    v0 = func_089C6064(a0, 0, 0, 0);
    goto L_089C5284;
L_089C5284:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+684);
    f0 = func_089C624C(a0, 0, 0, 0);
    goto L_089C5294;
L_089C5294:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    v1 = LD32(s1+720);
    goto L_089C4EBC;
L_089C52A8:;
    a0 = s1 + 0;
    v0 = func_089C608C(a0, 0, 0, 0);
    goto L_089C52B0;
L_089C52B0:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+688);
    f0 = func_089C6278(a0, 0, 0, 0);
    goto L_089C52C0;
L_089C52C0:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    v1 = LD32(s1+720);
    goto L_089C4EB0;
L_089C52D4:;
    a0 = s1 + 0;
    v0 = func_089C60B4(a0, 0, 0, 0);
    goto L_089C52DC;
L_089C52DC:;
    ST32(s0+292, v0);
    a0 = s1 + 0;
    s0 = LD32(s1+692);
    f0 = func_089C62A4(a0, 0, 0, 0);
    goto L_089C52EC;
L_089C52EC:;
    f1 = BITSF(LD32(s0+52));
    f0 = f0 * f1;
    ST32(s0+48, FBITS(f0));
    v1 = LD32(s1+720);
    goto L_089C4EA4;
L_089C5300:;
    ST32(s1+724, v0);
    a0 = s1 + 0;
    v0 = func_089C617C(a0, 0, 0, 0);
    goto L_089C530C;
L_089C530C:;
    cnd_ = v0 != 0;
    v0 = 4;
    if (cnd_) { goto L_089C4DA4; }
    goto L_089C5314;
L_089C5314:;
    ST32(s1+724, v0);
    a0 = s1 + 0;
    v0 = func_089C6154(a0, 0, 0, 0);
    goto L_089C5320;
L_089C5320:;
    cnd_ = v0 != 0;
    v0 = 3;
    if (cnd_) { goto L_089C4DA4; }
    goto L_089C5328;
L_089C5328:;
    ST32(s1+724, v0);
    a0 = s1 + 0;
    v0 = func_089C612C(a0, 0, 0, 0);
    goto L_089C5334;
L_089C5334:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_089C4DA4; }
    goto L_089C533C;
L_089C533C:;
    ST32(s1+724, v0);
    a0 = s1 + 0;
    v0 = func_089C6104(a0, 0, 0, 0);
    goto L_089C5348;
L_089C5348:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_089C4DA4; }
    goto L_089C5350;
L_089C5350:;
    ST32(s1+724, v0);
    a0 = s1 + 0;
    v0 = func_089C60DC(a0, 0, 0, 0);
    goto L_089C535C;
L_089C535C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+724, 0); goto L_089C4DA4; }
    goto L_089C5364;
L_089C5364:;
    goto L_089C4DA4;
L_089C536C:;
    ST32(s1+720, v0);
    a0 = s1 + 0;
    v0 = func_089C608C(a0, 0, 0, 0);
    goto L_089C5378;
L_089C5378:;
    cnd_ = v0 != 0;
    v0 = 6;
    if (cnd_) { goto L_089C4D90; }
    goto L_089C5380;
L_089C5380:;
    v0 = 4;
    ST32(s1+720, v0);
    a0 = s1 + 0;
    v0 = func_089C6064(a0, 0, 0, 0);
    goto L_089C5390;
L_089C5390:;
    cnd_ = v0 != 0;
    v0 = 6;
    if (cnd_) { goto L_089C4D90; }
    goto L_089C5398;
L_089C5398:;
    v0 = 3;
    ST32(s1+720, v0);
    a0 = s1 + 0;
    v0 = func_089C603C(a0, 0, 0, 0);
    goto L_089C53A8;
L_089C53A8:;
    cnd_ = v0 != 0;
    v0 = 6;
    if (cnd_) { goto L_089C4D90; }
    goto L_089C53B0;
L_089C53B0:;
    v0 = 2;
    ST32(s1+720, v0);
    a0 = s1 + 0;
    v0 = func_089C6014(a0, 0, 0, 0);
    goto L_089C53C0;
L_089C53C0:;
    cnd_ = v0 != 0;
    v0 = 6;
    if (cnd_) { goto L_089C4D90; }
    goto L_089C53C8;
L_089C53C8:;
    v0 = 1;
    ST32(s1+720, v0);
    a0 = s1 + 0;
    v0 = func_089C5FEC(a0, 0, 0, 0);
    goto L_089C53D8;
L_089C53D8:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+720, 0); goto L_089C4D8C; }
    goto L_089C53E0;
L_089C53E0:;
    v0 = 6;
    goto L_089C4D90;
}

/* 089C53E8 */
float func_089C53E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C53E8:;
    sp = sp - 16;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C53F8;
L_089C53F8:;
    sp = sp + 16;
    return f0;
}

/* 089C5404 */
float func_089C5404(float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_089C5404:;
    v0 = D_08AEEDB0 - (-4688);
    f1 = BITSF(LD32(v0-4688));
    f0 = f12 * f1;
    return f0;
}

/* 089C5414 */
float func_089C5414(float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_089C5414:;
    v0 = D_08AEEDB4 - (-4684);
    f1 = BITSF(LD32(v0-4684));
    f0 = f12 * f1;
    return f0;
}

/* 089C5424 */
u64 func_089C5424(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5424:;
    sp = sp - 16;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5434;
L_089C5434:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C5440 */
float func_089C5440(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5440:;
    v0 = D_08AEEDB8 - (-4680);
    f12 = BITSF(LD32(v0-4680));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C545C;
L_089C545C:;
    a1 = 0x20770000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x1220;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5470;
L_089C5470:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5478;
L_089C5478:;
    sp = sp + 16;
    return f0;
}

/* 089C5488 */
float func_089C5488(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5488:;
    v0 = D_08AEEDBC - (-4676);
    f12 = BITSF(LD32(v0-4676));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C54A4;
L_089C54A4:;
    a1 = 0x59510000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x366a;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C54B8;
L_089C54B8:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C54C0;
L_089C54C0:;
    sp = sp + 16;
    return f0;
}

/* 089C54D0 */
float func_089C54D0(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C54D0:;
    v0 = D_08AEEDC0 - (-4672);
    f12 = BITSF(LD32(v0-4672));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C54EC;
L_089C54EC:;
    a1 = 0x2d3b0000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x33ff;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5500;
L_089C5500:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5508;
L_089C5508:;
    sp = sp + 16;
    return f0;
}

/* 089C5518 */
float func_089C5518(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5518:;
    v0 = D_08AEEDC4 - (-4668);
    f12 = BITSF(LD32(v0-4668));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C5534;
L_089C5534:;
    a1 = 0xad130000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xf1cf;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5548;
L_089C5548:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5550;
L_089C5550:;
    sp = sp + 16;
    return f0;
}

/* 089C5560 */
float func_089C5560(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5560:;
    v0 = D_08AEEDC8 - (-4664);
    f12 = BITSF(LD32(v0-4664));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C557C;
L_089C557C:;
    a1 = 0x1870000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xcc1b;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5590;
L_089C5590:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5598;
L_089C5598:;
    sp = sp + 16;
    return f0;
}

/* 089C55A8 */
float func_089C55A8(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C55A8:;
    v0 = D_08AEEDCC - (-4660);
    f12 = BITSF(LD32(v0-4660));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C55C4;
L_089C55C4:;
    a1 = 0xa9340000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x66ee;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C55D8;
L_089C55D8:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C55E0;
L_089C55E0:;
    sp = sp + 16;
    return f0;
}

/* 089C55F0 */
float func_089C55F0(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C55F0:;
    v0 = D_08AEEDD0 - (-4656);
    f12 = BITSF(LD32(v0-4656));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C560C;
L_089C560C:;
    a1 = 0xf0850000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xe8dd;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5620;
L_089C5620:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5628;
L_089C5628:;
    sp = sp + 16;
    return f0;
}

/* 089C5638 */
float func_089C5638(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5638:;
    v0 = D_08AEEDD4 - (-4652);
    f12 = BITSF(LD32(v0-4652));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C5654;
L_089C5654:;
    a1 = 0xd19c0000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xdcd;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5668;
L_089C5668:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5670;
L_089C5670:;
    sp = sp + 16;
    return f0;
}

/* 089C5680 */
float func_089C5680(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5680:;
    v0 = D_08AEEDD8 - (-4648);
    f12 = BITSF(LD32(v0-4648));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C569C;
L_089C569C:;
    a1 = 0x7d550000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x7bde;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C56B0;
L_089C56B0:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C56B8;
L_089C56B8:;
    sp = sp + 16;
    return f0;
}

/* 089C56C8 */
float func_089C56C8(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C56C8:;
    v0 = D_08AEEDDC - (-4644);
    f12 = BITSF(LD32(v0-4644));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C56E4;
L_089C56E4:;
    a1 = 0xdaa10000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x80cf;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C56F8;
L_089C56F8:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5700;
L_089C5700:;
    sp = sp + 16;
    return f0;
}

/* 089C5710 */
float func_089C5710(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5710:;
    sp = sp - 16;
    v0 = D_08AEEDE0 - (-4640);
    a1 = 0xe6a20000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4640));
    a1 = a1 | 0x7177;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5730;
L_089C5730:;
    sp = sp + 16;
    return f0;
}

/* 089C573C */
float func_089C573C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C573C:;
    sp = sp - 16;
    v0 = D_08AEEDE4 - (-4636);
    a1 = 0x8fbf0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4636));
    a1 = a1 | 0x2335;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C575C;
L_089C575C:;
    sp = sp + 16;
    return f0;
}

/* 089C5768 */
float func_089C5768(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5768:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x14990000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x9ffd;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5784;
L_089C5784:;
    sp = sp + 16;
    return f0;
}

/* 089C5790 */
float func_089C5790(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5790:;
    sp = sp - 16;
    v0 = D_08AEEDE8 - (-4632);
    a1 = 0x81c80000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4632));
    a1 = a1 | 0x2d81;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C57B0;
L_089C57B0:;
    sp = sp + 16;
    return f0;
}

/* 089C57BC */
float func_089C57BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C57BC:;
    sp = sp - 16;
    v0 = D_08AEEDEC - (-4628);
    a1 = 0xbf8f0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4628));
    a1 = a1 | 0x289d;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C57DC;
L_089C57DC:;
    sp = sp + 16;
    return f0;
}

/* 089C57E8 */
float func_089C57E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C57E8:;
    sp = sp - 16;
    v0 = D_08AEEDF0 - (-4624);
    a1 = 0x1a570000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4624));
    a1 = a1 | 0x942e;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5808;
L_089C5808:;
    sp = sp + 16;
    return f0;
}

/* 089C5814 */
float func_089C5814(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5814:;
    sp = sp - 16;
    v0 = D_08AEEDF4 - (-4620);
    a1 = 0x77fb0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4620));
    a1 = a1 | 0x8dfe;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5834;
L_089C5834:;
    sp = sp + 16;
    return f0;
}

/* 089C5840 */
float func_089C5840(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5840:;
    sp = sp - 16;
    v0 = D_08AEEDF8 - (-4616);
    a1 = 0x58470000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4616));
    a1 = a1 | 0x80a7;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5860;
L_089C5860:;
    sp = sp + 16;
    return f0;
}

/* 089C586C */
float func_089C586C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C586C:;
    sp = sp - 16;
    v0 = D_08AEEDFC - (-4612);
    a1 = 0xc7830000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4612));
    a1 = a1 | 0xcc12;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C588C;
L_089C588C:;
    sp = sp + 16;
    return f0;
}

/* 089C5898 */
float func_089C5898(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5898:;
    sp = sp - 16;
    v0 = D_08AEEE00 - (-4608);
    a1 = 0xbfad0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4608));
    a1 = a1 | 0x6f31;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C58B8;
L_089C58B8:;
    sp = sp + 16;
    return f0;
}

/* 089C58C4 */
float func_089C58C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C58C4:;
    sp = sp - 16;
    v0 = D_08AEEE04 - (-4604);
    a1 = 0xde6e0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4604));
    a1 = a1 | 0xe9a0;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C58E4;
L_089C58E4:;
    sp = sp + 16;
    return f0;
}

/* 089C58F0 */
float func_089C58F0(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C58F0:;
    v0 = D_08AEEE08 - (-4600);
    f12 = BITSF(LD32(v0-4600));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C590C;
L_089C590C:;
    a1 = 0xe9e60000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x89b;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5920;
L_089C5920:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5928;
L_089C5928:;
    sp = sp + 16;
    return f0;
}

/* 089C5938 */
float func_089C5938(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5938:;
    v0 = D_08AEEE0C - (-4596);
    f12 = BITSF(LD32(v0-4596));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C5954;
L_089C5954:;
    a1 = 0xfd340000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x4b0a;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5968;
L_089C5968:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5970;
L_089C5970:;
    sp = sp + 16;
    return f0;
}

/* 089C5980 */
float func_089C5980(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5980:;
    v0 = D_08AEEE10 - (-4592);
    f12 = BITSF(LD32(v0-4592));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C599C;
L_089C599C:;
    a1 = 0xe9ec0000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x669b;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C59B0;
L_089C59B0:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C59B8;
L_089C59B8:;
    sp = sp + 16;
    return f0;
}

/* 089C59C8 */
float func_089C59C8(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C59C8:;
    v0 = D_08AEEE14 - (-4588);
    f12 = BITSF(LD32(v0-4588));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C59E4;
L_089C59E4:;
    a1 = 0xfd3a0000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xa90a;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C59F8;
L_089C59F8:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5A00;
L_089C5A00:;
    sp = sp + 16;
    return f0;
}

/* 089C5A10 */
float func_089C5A10(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5A10:;
    v0 = D_08AEEE18 - (-4584);
    f12 = BITSF(LD32(v0-4584));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C5A2C;
L_089C5A2C:;
    a1 = 0xcd280000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xaa81;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5A40;
L_089C5A40:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5A48;
L_089C5A48:;
    sp = sp + 16;
    return f0;
}

/* 089C5A58 */
float func_089C5A58(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5A58:;
    v0 = D_08AEEE1C - (-4580);
    f12 = BITSF(LD32(v0-4580));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C5A74;
L_089C5A74:;
    a1 = 0x634a0000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0xe53;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5A88;
L_089C5A88:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5A90;
L_089C5A90:;
    sp = sp + 16;
    return f0;
}

/* 089C5AA0 */
float func_089C5AA0(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5AA0:;
    v0 = D_08AEEE20 - (-4576);
    f12 = BITSF(LD32(v0-4576));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C5ABC;
L_089C5ABC:;
    a1 = 0xf3b10000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x95f0;
    f12 = f0;
    f0 = func_089C53E8(a0, a1, 0, 0, 0, f12);
    goto L_089C5AD0;
L_089C5AD0:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C5AD8;
L_089C5AD8:;
    sp = sp + 16;
    return f0;
}

/* 089C5AE8 */
float func_089C5AE8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5AE8:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x881c0000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xcd0d;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5B04;
L_089C5B04:;
    sp = sp + 16;
    return f0;
}

/* 089C5B10 */
float func_089C5B10(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5B10:;
    sp = sp - 16;
    v0 = D_08AEEE24 - (-4572);
    a1 = 0x7ae00000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4572));
    a1 = a1 | 0x1311;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5B30;
L_089C5B30:;
    sp = sp + 16;
    return f0;
}

/* 089C5B3C */
float func_089C5B3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5B3C:;
    sp = sp - 16;
    v0 = D_08AEEE28 - (-4568);
    a1 = 0x881c0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4568));
    a1 = a1 | 0xcd0c;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5B5C;
L_089C5B5C:;
    sp = sp + 16;
    return f0;
}

/* 089C5B68 */
float func_089C5B68(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5B68:;
    sp = sp - 16;
    v0 = D_08AEEE2C - (-4564);
    a1 = 0x7ae00000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4564));
    a1 = a1 | 0x1310;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5B88;
L_089C5B88:;
    sp = sp + 16;
    return f0;
}

/* 089C5B94 */
float func_089C5B94(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5B94:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x7ae00000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x130f;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5BB0;
L_089C5BB0:;
    sp = sp + 16;
    return f0;
}

/* 089C5BBC */
float func_089C5BBC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5BBC:;
    sp = sp - 16;
    v0 = D_08AEEE30 - (-4560);
    a1 = 0xefda0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4560));
    a1 = a1 | 0xa2be;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5BDC;
L_089C5BDC:;
    sp = sp + 16;
    return f0;
}

/* 089C5BE8 */
float func_089C5BE8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5BE8:;
    sp = sp - 16;
    v0 = D_08AEEE34 - (-4556);
    a1 = 0x68640000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4556));
    a1 = a1 | 0x609e;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5C08;
L_089C5C08:;
    sp = sp + 16;
    return f0;
}

/* 089C5C14 */
float func_089C5C14(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5C14:;
    sp = sp - 16;
    v0 = D_08AEEE38 - (-4552);
    a1 = 0xb58a0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4552));
    a1 = a1 | 0x83fa;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5C34;
L_089C5C34:;
    sp = sp + 16;
    return f0;
}

/* 089C5C40 */
float func_089C5C40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5C40:;
    sp = sp - 16;
    v0 = D_08AEEE3C - (-4548);
    a1 = 0x20140000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4548));
    a1 = a1 | 0x4d79;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5C60;
L_089C5C60:;
    sp = sp + 16;
    return f0;
}

/* 089C5C6C */
u64 func_089C5C6C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5C6C:;
    sp = sp - 16;
    a1 = 0x11140000u;
    a1 = a1 | 0x5057;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5C88;
L_089C5C88:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C5C94 */
u32 func_089C5C94(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5C94:;
    sp = sp - 16;
    a1 = 0xd09e0000u;
    a1 = a1 | 0xe37c;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5CB0;
L_089C5CB0:;
    sp = sp + 16;
    return v0;
}

/* 089C5CBC */
u32 func_089C5CBC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5CBC:;
    sp = sp - 16;
    a1 = 0x24740000u;
    a1 = a1 | 0x11b;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5CD8;
L_089C5CD8:;
    sp = sp + 16;
    return v0;
}

/* 089C5CE4 */
u32 func_089C5CE4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5CE4:;
    sp = sp - 16;
    a1 = 0x1acf0000u;
    a1 = a1 | 0xb5c1;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5D00;
L_089C5D00:;
    sp = sp + 16;
    return v0;
}

/* 089C5D0C */
u64 func_089C5D0C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5D0C:;
    sp = sp - 16;
    a1 = 0xccec0000u;
    a1 = a1 | 0x5018;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5D28;
L_089C5D28:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C5D34 */
u32 func_089C5D34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5D34:;
    sp = sp - 16;
    a1 = 0x594c0000u;
    a1 = a1 | 0x8e55;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5D50;
L_089C5D50:;
    sp = sp + 16;
    return v0;
}

/* 089C5D5C */
u32 func_089C5D5C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5D5C:;
    sp = sp - 16;
    a1 = 0x594c0000u;
    a1 = a1 | 0x8e5b;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_089C5424(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5D78;
L_089C5D78:;
    sp = sp + 16;
    return v0;
}

/* 089C5D84 */
float func_089C5D84(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5D84:;
    sp = sp - 16;
    v0 = D_08AEEE40 - (-4544);
    a1 = 0x934c0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4544));
    a1 = a1 | 0x685;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5DA4;
L_089C5DA4:;
    sp = sp + 16;
    return f0;
}

/* 089C5DB0 */
float func_089C5DB0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5DB0:;
    sp = sp - 16;
    v0 = D_08AEEE44 - (-4540);
    a1 = 0x92790000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4540));
    a1 = a1 | 0x9a86;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5DD0;
L_089C5DD0:;
    sp = sp + 16;
    return f0;
}

/* 089C5DDC */
float func_089C5DDC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5DDC:;
    sp = sp - 16;
    v0 = D_08AEEE48 - (-4536);
    a1 = 0x1c280000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4536));
    a1 = a1 | 0x1323;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5DFC;
L_089C5DFC:;
    sp = sp + 16;
    return f0;
}

/* 089C5E08 */
float func_089C5E08(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5E08:;
    sp = sp - 16;
    v0 = D_08AEEE4C - (-4532);
    a1 = 0x91190000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4532));
    a1 = a1 | 0xa698;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5E28;
L_089C5E28:;
    sp = sp + 16;
    return f0;
}

/* 089C5E34 */
u32 func_089C5E34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5E34:;
    sp = sp - 16;
    a1 = 0xdbb30000u;
    a1 = a1 | 0x9db1;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5E50;
L_089C5E50:;
    sp = sp + 16;
    return v0;
}

/* 089C5E5C */
u32 func_089C5E5C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5E5C:;
    sp = sp - 16;
    a1 = 0xdf800000u;
    a1 = a1 | 0x8dac;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5E78;
L_089C5E78:;
    sp = sp + 16;
    return v0;
}

/* 089C5E84 */
u32 func_089C5E84(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5E84:;
    sp = sp - 16;
    a1 = 0x4fc70000u;
    a1 = a1 | 0x4ac5;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5EA0;
L_089C5EA0:;
    sp = sp + 16;
    return v0;
}

/* 089C5EAC */
u32 func_089C5EAC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5EAC:;
    sp = sp - 16;
    a1 = 0x14ae0000u;
    a1 = a1 | 0x7a52;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5EC8;
L_089C5EC8:;
    sp = sp + 16;
    return v0;
}

/* 089C5ED4 */
u64 func_089C5ED4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5ED4:;
    sp = sp - 16;
    a1 = 0x2ecd0000u;
    a1 = a1 | 0x76a1;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5EF0;
L_089C5EF0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C5EFC */
u32 func_089C5EFC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5EFC:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = 0x73a40000u;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = a1 | 0x4bac;
    if (cnd_) { goto L_089C5F30; }
    goto L_089C5F18;
L_089C5F18:;
    a0 = LD32(a0+588);
    goto L_089C5F1C;
L_089C5F1C:;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5F24;
L_089C5F24:;
    sp = sp + 16;
    return v0;
L_089C5F30:;
    a0 = LD32(a0+588);
    a1 = 0x73a40000u;
    a1 = a1 | 0x4bac;
    a2 = 0 + 0;
    goto L_089C5F1C;
}

/* 089C5F44 */
float func_089C5F44(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5F44:;
    sp = sp - 16;
    v0 = D_08AEEE50 - (-4528);
    a1 = 0x934c0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4528));
    a1 = a1 | 0x67f;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5F64;
L_089C5F64:;
    sp = sp + 16;
    return f0;
}

/* 089C5F70 */
float func_089C5F70(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5F70:;
    sp = sp - 16;
    v0 = D_08AEEE54 - (-4524);
    a1 = 0x1c280000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4524));
    a1 = a1 | 0x131d;
    f0 = func_089C53E8(a0, a1, t1, t2, t3, f12);
    goto L_089C5F90;
L_089C5F90:;
    sp = sp + 16;
    return f0;
}

/* 089C5F9C */
u32 func_089C5F9C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5F9C:;
    sp = sp - 16;
    a1 = 0x8f4a0000u;
    a1 = a1 | 0xb0df;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5FB8;
L_089C5FB8:;
    sp = sp + 16;
    return v0;
}

/* 089C5FC4 */
u32 func_089C5FC4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5FC4:;
    sp = sp - 16;
    a1 = 0x8f4a0000u;
    a1 = a1 | 0xb0e0;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C5FE0;
L_089C5FE0:;
    sp = sp + 16;
    return v0;
}

/* 089C5FEC */
u32 func_089C5FEC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C5FEC:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x5978;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6008;
L_089C6008:;
    sp = sp + 16;
    return v0;
}

/* 089C6014 */
u32 func_089C6014(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6014:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x5979;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6030;
L_089C6030:;
    sp = sp + 16;
    return v0;
}

/* 089C603C */
u32 func_089C603C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C603C:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x597a;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6058;
L_089C6058:;
    sp = sp + 16;
    return v0;
}

/* 089C6064 */
u32 func_089C6064(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6064:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x597b;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6080;
L_089C6080:;
    sp = sp + 16;
    return v0;
}

/* 089C608C */
u32 func_089C608C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C608C:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x597c;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C60A8;
L_089C60A8:;
    sp = sp + 16;
    return v0;
}

/* 089C60B4 */
u32 func_089C60B4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C60B4:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x597d;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C60D0;
L_089C60D0:;
    sp = sp + 16;
    return v0;
}

/* 089C60DC */
u32 func_089C60DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C60DC:;
    sp = sp - 16;
    a1 = 0x6f5c0000u;
    a1 = a1 | 0x8657;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C60F8;
L_089C60F8:;
    sp = sp + 16;
    return v0;
}

/* 089C6104 */
u32 func_089C6104(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6104:;
    sp = sp - 16;
    a1 = 0x6f5c0000u;
    a1 = a1 | 0x8658;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6120;
L_089C6120:;
    sp = sp + 16;
    return v0;
}

/* 089C612C */
u32 func_089C612C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C612C:;
    sp = sp - 16;
    a1 = 0x6f5c0000u;
    a1 = a1 | 0x8659;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6148;
L_089C6148:;
    sp = sp + 16;
    return v0;
}

/* 089C6154 */
u32 func_089C6154(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6154:;
    sp = sp - 16;
    a1 = 0x6f5c0000u;
    a1 = a1 | 0x865a;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6170;
L_089C6170:;
    sp = sp + 16;
    return v0;
}

/* 089C617C */
u32 func_089C617C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C617C:;
    sp = sp - 16;
    a1 = 0x6f5c0000u;
    a1 = a1 | 0x865b;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6198;
L_089C6198:;
    sp = sp + 16;
    return v0;
}

/* 089C61A4 */
u32 func_089C61A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C61A4:;
    sp = sp - 16;
    a1 = 0x6f5c0000u;
    a1 = a1 | 0x865c;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C61C0;
L_089C61C0:;
    sp = sp + 16;
    return v0;
}

/* 089C61CC */
float func_089C61CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C61CC:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x47000000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x985;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C61E8;
L_089C61E8:;
    sp = sp + 16;
    return f0;
}

/* 089C61F4 */
float func_089C61F4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C61F4:;
    sp = sp - 16;
    v0 = D_08AEEE58 - (-4520);
    a1 = 0x47000000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4520));
    a1 = a1 | 0x986;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6214;
L_089C6214:;
    sp = sp + 16;
    return f0;
}

/* 089C6220 */
float func_089C6220(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6220:;
    sp = sp - 16;
    v0 = D_08AEEE5C - (-4516);
    a1 = 0x47000000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4516));
    a1 = a1 | 0x987;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6240;
L_089C6240:;
    sp = sp + 16;
    return f0;
}

/* 089C624C */
float func_089C624C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C624C:;
    sp = sp - 16;
    v0 = D_08AEEE60 - (-4512);
    a1 = 0x47000000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4512));
    a1 = a1 | 0x988;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C626C;
L_089C626C:;
    sp = sp + 16;
    return f0;
}

/* 089C6278 */
float func_089C6278(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6278:;
    sp = sp - 16;
    v0 = D_08AEEE64 - (-4508);
    a1 = 0x47000000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4508));
    a1 = a1 | 0x989;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6298;
L_089C6298:;
    sp = sp + 16;
    return f0;
}

/* 089C62A4 */
float func_089C62A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C62A4:;
    sp = sp - 16;
    v0 = D_08AEEE68 - (-4504);
    a1 = 0x47000000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4504));
    a1 = a1 | 0x98a;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C62C4;
L_089C62C4:;
    sp = sp + 16;
    return f0;
}

/* 089C62D0 */
rv_t func_089C62D0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C62D0:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x48b40000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xe224;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C62EC;
L_089C62EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C62F8 */
rv_t func_089C62F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C62F8:;
    sp = sp - 16;
    v0 = D_08AEEE6C - (-4500);
    a1 = 0x48b40000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4500));
    a1 = a1 | 0xe225;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6318;
L_089C6318:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C6324 */
float func_089C6324(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6324:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x48b40000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xe226;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6340;
L_089C6340:;
    sp = sp + 16;
    return f0;
}

/* 089C634C */
float func_089C634C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C634C:;
    sp = sp - 16;
    v0 = D_08AEEE70 - (-4496);
    a1 = 0x48b40000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4496));
    a1 = a1 | 0xe227;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C636C;
L_089C636C:;
    sp = sp + 16;
    return f0;
}

/* 089C6378 */
float func_089C6378(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6378:;
    sp = sp - 16;
    v0 = D_08AEEE74 - (-4492);
    a1 = 0x48b40000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4492));
    a1 = a1 | 0xe227;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6398;
L_089C6398:;
    sp = sp + 16;
    return f0;
}

/* 089C63A4 */
float func_089C63A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C63A4:;
    sp = sp - 16;
    v0 = D_08AEEE78 - (-4488);
    a1 = 0x48b40000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4488));
    a1 = a1 | 0xe227;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C63C4;
L_089C63C4:;
    sp = sp + 16;
    return f0;
}

/* 089C63D0 */
float func_089C63D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C63D0:;
    v0 = D_08AEEE7C - (-4484);
    f12 = BITSF(LD32(v0-4484));
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5404(f12);
    goto L_089C63EC;
L_089C63EC:;
    a1 = 0x13fc0000u;
    a0 = LD32(s0+588);
    a1 = a1 | 0x87cc;
    f12 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6400;
L_089C6400:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C6408;
L_089C6408:;
    sp = sp + 16;
    return f0;
}

/* 089C6418 */
float func_089C6418(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6418:;
    sp = sp - 16;
    v0 = D_08AEEE80 - (-4480);
    a1 = 0xc8ab0000u;
    f12 = BITSF(LD32(v0-4480));
    a0 = LD32(a0+588);
    a1 = a1 | 0x3688;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6438;
L_089C6438:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C6440;
L_089C6440:;
    sp = sp + 16;
    return f0;
}

/* 089C644C */
float func_089C644C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C644C:;
    sp = sp - 16;
    v0 = D_08AEEE84 - (-4476);
    a1 = 0x93c40000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4476));
    a1 = a1 | 0x461b;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C646C;
L_089C646C:;
    sp = sp + 16;
    return f0;
}

/* 089C6478 */
float func_089C6478(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6478:;
    sp = sp - 16;
    v0 = D_08AEEE88 - (-4472);
    a1 = 0xc9030000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4472));
    a1 = a1 | 0x5dc;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6498;
L_089C6498:;
    sp = sp + 16;
    return f0;
}

/* 089C64A4 */
float func_089C64A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C64A4:;
    sp = sp - 16;
    v0 = D_08AEEE8C - (-4468);
    a1 = 0x1d920000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4468));
    a1 = a1 | 0xa92f;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C64C4;
L_089C64C4:;
    sp = sp + 16;
    return f0;
}

/* 089C64D0 */
u32 func_089C64D0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C64D0:;
    sp = sp - 16;
    a1 = 0xccec0000u;
    a2 = 0x381b0000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x752d;
    a2 = a2 | 0x5229;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C64F0;
L_089C64F0:;
    sp = sp + 16;
    return v0;
}

/* 089C64FC */
u32 func_089C64FC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C64FC:;
    sp = sp - 16;
    a1 = 0xfe70000u;
    a1 = a1 | 0x28f;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6518;
L_089C6518:;
    sp = sp + 16;
    return v0;
}

/* 089C6524 */
float func_089C6524(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6524:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x64a50000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x5217;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6540;
L_089C6540:;
    sp = sp + 16;
    return f0;
}

/* 089C654C */
float func_089C654C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C654C:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x34a80000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xcc94;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6568;
L_089C6568:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C6570;
L_089C6570:;
    sp = sp + 16;
    return f0;
}

/* 089C657C */
float func_089C657C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C657C:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x35920000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x8cfe;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6598;
L_089C6598:;
    sp = sp + 16;
    return f0;
}

/* 089C65A4 */
float func_089C65A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C65A4:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0xf7870000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x596f;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C65C0;
L_089C65C0:;
    sp = sp + 16;
    return f0;
}

/* 089C65CC */
float func_089C65CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C65CC:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0xf69d0000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0x9905;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C65E8;
L_089C65E8:;
    f12 = f0;
    f0 = func_089C5414(f12);
    goto L_089C65F0;
L_089C65F0:;
    sp = sp + 16;
    return f0;
}

/* 089C65FC */
u32 func_089C65FC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C65FC:;
    sp = sp - 16;
    a1 = 0x659b0000u;
    a1 = a1 | 0x700d;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, t1, t2, t3);
    goto L_089C6618;
L_089C6618:;
    sp = sp + 16;
    return v0;
}

/* 089C6624 */
u32 func_089C6624(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6624:;
    sp = sp - 16;
    a1 = 0x23cd0000u;
    a1 = a1 | 0x77c0;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6640;
L_089C6640:;
    sp = sp + 16;
    return v0;
}

/* 089C664C */
u32 func_089C664C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C664C:;
    sp = sp - 16;
    a1 = 0x65da0000u;
    a1 = a1 | 0xb55;
    a0 = LD32(a0+588);
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6668;
L_089C6668:;
    sp = sp + 16;
    return v0;
}

/* 089C6674 */
u32 func_089C6674(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6674:;
    sp = sp - 16;
    a1 = 0x65b0000u;
    a1 = a1 | 0xcc42;
    a0 = LD32(a0+588);
    a2 = 999;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6690;
L_089C6690:;
    sp = sp + 16;
    return v0;
}

/* 089C669C */
u32 func_089C669C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C669C:;
    sp = sp - 16;
    a1 = 0xacc70000u;
    a1 = a1 | 0x5fa6;
    a0 = LD32(a0+588);
    a2 = 999;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C66B8;
L_089C66B8:;
    sp = sp + 16;
    return v0;
}

/* 089C66C4 */
rv_t func_089C66C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C66C4:;
    sp = sp - 16;
    v0 = D_08AEEE90 - (-4464);
    a1 = 0x94b60000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4464));
    a1 = a1 | 0x3172;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C66E4;
L_089C66E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C66F0 */
float func_089C66F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C66F0:;
    sp = sp - 16;
    v0 = D_08AEEE94 - (-4460);
    a1 = 0x932a0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4460));
    a1 = a1 | 0x698a;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6710;
L_089C6710:;
    sp = sp + 16;
    return f0;
}

/* 089C671C */
u64 func_089C671C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C671C:;
    sp = sp - 16;
    a1 = 0x8ea40000u;
    a1 = a1 | 0xbfad;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6738;
L_089C6738:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C6744 */
u32 func_089C6744(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6744:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9446;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6760;
L_089C6760:;
    sp = sp + 16;
    return v0;
}

/* 089C676C */
u32 func_089C676C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C676C:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9447;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6788;
L_089C6788:;
    sp = sp + 16;
    return v0;
}

/* 089C6794 */
u32 func_089C6794(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6794:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9448;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C67B0;
L_089C67B0:;
    sp = sp + 16;
    return v0;
}

/* 089C67BC */
u32 func_089C67BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C67BC:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9449;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C67D8;
L_089C67D8:;
    sp = sp + 16;
    return v0;
}

/* 089C67E4 */
u32 func_089C67E4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C67E4:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944a;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6800;
L_089C6800:;
    sp = sp + 16;
    return v0;
}

/* 089C680C */
u32 func_089C680C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C680C:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944b;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6828;
L_089C6828:;
    sp = sp + 16;
    return v0;
}

/* 089C6834 */
u32 func_089C6834(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6834:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944c;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6850;
L_089C6850:;
    sp = sp + 16;
    return v0;
}

/* 089C685C */
u32 func_089C685C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C685C:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944d;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6878;
L_089C6878:;
    sp = sp + 16;
    return v0;
}

/* 089C6884 */
u64 func_089C6884(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6884:;
    sp = sp - 16;
    a1 = 0x300000u;
    a1 = a1 | 0x15f2;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C68A0;
L_089C68A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C68AC */
u32 func_089C68AC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C68AC:;
    sp = sp - 16;
    a1 = 0x6c810000u;
    a1 = a1 | 0x9c3f;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C68C8;
L_089C68C8:;
    sp = sp + 16;
    return v0;
}

/* 089C68D4 */
u32 func_089C68D4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C68D4:;
    sp = sp - 16;
    a1 = 0x2b200000u;
    a1 = a1 | 0xdfdc;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C68F0;
L_089C68F0:;
    sp = sp + 16;
    return v0;
}

/* 089C68FC */
u32 func_089C68FC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C68FC:;
    sp = sp - 16;
    a1 = 0x4c1c0000u;
    a1 = a1 | 0xe2a9;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6918;
L_089C6918:;
    sp = sp + 16;
    return v0;
}

/* 089C6924 */
u32 func_089C6924(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6924:;
    sp = sp - 16;
    a1 = 0x1aa30000u;
    a1 = a1 | 0x2906;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6940;
L_089C6940:;
    sp = sp + 16;
    return v0;
}

/* 089C694C */
u32 func_089C694C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C694C:;
    sp = sp - 16;
    a1 = 0xccec0000u;
    a1 = a1 | 0x72da;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6968;
L_089C6968:;
    sp = sp + 16;
    return v0;
}

/* 089C6974 */
u32 func_089C6974(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6974:;
    sp = sp - 16;
    a1 = 0xd0a30000u;
    a1 = a1 | 0xe35a;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6990;
L_089C6990:;
    sp = sp + 16;
    return v0;
}

/* 089C699C */
u32 func_089C699C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C699C:;
    sp = sp - 16;
    a1 = 0xc9910000u;
    a1 = a1 | 0x7ac1;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C69B8;
L_089C69B8:;
    sp = sp + 16;
    return v0;
}

/* 089C69C4 */
u32 func_089C69C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C69C4:;
    sp = sp - 16;
    a1 = 0x4b1c0000u;
    a1 = a1 | 0xab41;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C69E0;
L_089C69E0:;
    sp = sp + 16;
    return v0;
}

/* 089C69EC */
u32 func_089C69EC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C69EC:;
    sp = sp - 16;
    a1 = 0x9e520000u;
    a1 = a1 | 0xe615;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6A08;
L_089C6A08:;
    sp = sp + 16;
    return v0;
}

/* 089C6A14 */
u32 func_089C6A14(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6A14:;
    sp = sp - 16;
    a1 = 0x65940000u;
    a1 = a1 | 0xd5a8;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6A30;
L_089C6A30:;
    sp = sp + 16;
    return v0;
}

/* 089C6A3C */
u32 func_089C6A3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6A3C:;
    sp = sp - 16;
    a1 = 0x47090000u;
    a1 = a1 | 0x6c11;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6A58;
L_089C6A58:;
    sp = sp + 16;
    return v0;
}

/* 089C6A64 */
float func_089C6A64(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6A64:;
    v0 = D_08AEEE98 - (-4456);
    f12 = BITSF(LD32(v0-4456));
    a0 = a1 + 0;
    a1 = 0xab0b0000u;
    sp = sp - 16;
    a1 = a1 | 0x1f5d;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6A84;
L_089C6A84:;
    sp = sp + 16;
    return f0;
}

/* 089C6A90 */
float func_089C6A90(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6A90:;
    v0 = D_08AEEE9C - (-4452);
    f12 = BITSF(LD32(v0-4452));
    a0 = a1 + 0;
    a1 = 0xac5c0000u;
    sp = sp - 16;
    a1 = a1 | 0x1d65;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6AB0;
L_089C6AB0:;
    sp = sp + 16;
    return f0;
}

/* 089C6ABC */
float func_089C6ABC(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6ABC:;
    v0 = D_08AEEEA0 - (-4448);
    f12 = BITSF(LD32(v0-4448));
    a0 = a1 + 0;
    a1 = 0xac5c0000u;
    sp = sp - 16;
    a1 = a1 | 0x1d64;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6ADC;
L_089C6ADC:;
    sp = sp + 16;
    return f0;
}

/* 089C6AE8 */
u32 func_089C6AE8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6AE8:;
    sp = sp - 16;
    a1 = 0xa0480000u;
    a1 = a1 | 0xa140;
    a0 = LD32(a0+588);
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6B04;
L_089C6B04:;
    sp = sp + 16;
    return v0;
}

/* 089C6B10 */
u32 func_089C6B10(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6B10:;
    sp = sp - 16;
    a1 = 0xfc3c0000u;
    a1 = a1 | 0x5538;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6B2C;
L_089C6B2C:;
    sp = sp + 16;
    return v0;
}

/* 089C6B38 */
u32 func_089C6B38(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6B38:;
    sp = sp - 16;
    a1 = 0x87190000u;
    a1 = a1 | 0x383e;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6B54;
L_089C6B54:;
    sp = sp + 16;
    return v0;
}

/* 089C6B60 */
u32 func_089C6B60(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6B60:;
    sp = sp - 16;
    a1 = 0x392d0000u;
    a1 = a1 | 0x4e69;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6B7C;
L_089C6B7C:;
    sp = sp + 16;
    return v0;
}

/* 089C6B88 */
u32 func_089C6B88(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6B88:;
    sp = sp - 16;
    a1 = 0xf3ab0000u;
    a1 = a1 | 0xbd73;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6BA4;
L_089C6BA4:;
    sp = sp + 16;
    return v0;
}

/* 089C6BB0 */
u32 func_089C6BB0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6BB0:;
    sp = sp - 16;
    a1 = 0x5fc0000u;
    a1 = a1 | 0x89f0;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6BCC;
L_089C6BCC:;
    sp = sp + 16;
    return v0;
}

/* 089C6BD8 */
u32 func_089C6BD8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6BD8:;
    sp = sp - 16;
    a1 = 0xcd5e0000u;
    a1 = a1 | 0x874c;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6BF4;
L_089C6BF4:;
    sp = sp + 16;
    return v0;
}

/* 089C6C00 */
u32 func_089C6C00(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6C00:;
    sp = sp - 16;
    a1 = 0x54ed0000u;
    a1 = a1 | 0xf1f0;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6C1C;
L_089C6C1C:;
    sp = sp + 16;
    return v0;
}

/* 089C6C28 */
u32 func_089C6C28(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6C28:;
    sp = sp - 16;
    a1 = 0xd0a00000u;
    a1 = a1 | 0x77db;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6C44;
L_089C6C44:;
    sp = sp + 16;
    return v0;
}

/* 089C6C50 */
u32 func_089C6C50(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6C50:;
    sp = sp - 16;
    a1 = 0x42c30000u;
    a1 = a1 | 0xbe87;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6C6C;
L_089C6C6C:;
    sp = sp + 16;
    return v0;
}

/* 089C6C78 */
u32 func_089C6C78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C6C78:;
    sp = sp - 16;
    a1 = 0xe6dc0000u;
    a1 = a1 | 0x15d2;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6C94;
L_089C6C94:;
    sp = sp + 16;
    return v0;
}

/* 089C6CA0 */
rv_t func_089C6CA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C6CA0:;
    sp = sp - 32;
    s2 = a0 + 0;
    v1 = LD32(a0+40);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089C6CD4; }
    goto L_089C6CC4;
L_089C6CC4:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a0); goto L_089C6D88; }
    goto L_089C6CD4;
L_089C6CD4:;
    a0 = s2 + 0;
    goto L_089C6CD8;
L_089C6CD8:;
    a1 = s0 + 0;
    { rv_t r_ = func_089DC70C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6CE0;
L_089C6CE0:;
    v0 = 999;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_089C6D78; }
    goto L_089C6CEC;
L_089C6CEC:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6CF4;
L_089C6CF4:;
    v0 = LD32(s2+720);
    goto L_089C6CF8;
L_089C6CF8:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089C6D24; }
    goto L_089C6D00;
L_089C6D00:;
    s0 = s2 + 672;
    goto L_089C6D04;
L_089C6D04:;
    a0 = LD32(s0);
    a1 = s2 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_08A19C8C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6D14;
L_089C6D14:;
    v0 = LD32(s2+720);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089C6D04; }
    goto L_089C6D24;
L_089C6D24:;
    v0 = LD32(s2+724);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089C6D54; }
    goto L_089C6D30;
L_089C6D30:;
    s0 = s2 + 696;
    goto L_089C6D34;
L_089C6D34:;
    a0 = LD32(s0);
    a1 = s2 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_08A19C8C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6D44;
L_089C6D44:;
    v0 = LD32(s2+724);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089C6D34; }
    goto L_089C6D54;
L_089C6D54:;
    v0 = LD32(s2+848);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s2+848, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C6D78:;
    a0 = s2 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6D80;
L_089C6D80:;
    v0 = LD32(s2+720);
    goto L_089C6CF8;
L_089C6D88:;
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6D94;
L_089C6D94:;
    a0 = LD32(s2+40);
    a1 = sp + 0;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6DA0;
L_089C6DA0:;
    v1 = LD32(s2);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6DB0;
L_089C6DB0:;
    a0 = LD32(s2+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAB18(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6DBC;
L_089C6DBC:;
    v1 = LD32(s2);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6DCC;
L_089C6DCC:;
    a0 = LD32(s2+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6DD8;
L_089C6DD8:;
    a0 = s2 + 0;
    goto L_089C6CD8;
}

/* 089C6DE0 */
rv_t func_089C6DE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C6DE0:;
    sp = sp - 32;
    a2 = LD32(a0);
    v1 = LD32(a0+460);
    v0 = LD32(a2-16);
    v0 = a0 + v0;
    a1 = LD32(v0+4);
    cnd_ = a1 == v1;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C6E20; }
    goto L_089C6E14;
L_089C6E14:;
    v0 = LD32(a0+456);
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a2+48); goto L_089C6E44; }
    goto L_089C6E20;
L_089C6E20:;
    { rv_t r_ = func_089DCEC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6E28;
L_089C6E28:;
    goto L_089C6E2C;
L_089C6E2C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C6E44:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6E4C;
L_089C6E4C:;
    a1 = v0 + 0;
    v0 = 999;
    cnd_ = a1 == v0;
    if (cnd_) { a2 = LD32(s0+460); goto L_089C6E64; }
    goto L_089C6E5C;
L_089C6E5C:;
    a0 = s0 + 0;
    goto L_089C6E20;
L_089C6E64:;
    s2 = D_08C2B0A8 - (-20312);
    v0 = s2 - 20312;
    cnd_ = a2 == a1;
    a0 = 0 + 0;
    if (cnd_) { goto L_089C6EC4; }
    goto L_089C6E74;
L_089C6E74:;
    v0 = LD32(v0+4);
    v1 = LD32(s2-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089C6EC8; }
    goto L_089C6E98;
L_089C6E98:;
    a0 = LD32(a1);
    goto L_089C6E9C;
L_089C6E9C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089C6F44; }
    goto L_089C6EB4;
L_089C6EB4:;
    a1 = LD32(a1+4);
    goto L_089C6EB8;
L_089C6EB8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089C6E9C; }
    goto L_089C6EC0;
L_089C6EC0:;
    a0 = 0 + 0;
    goto L_089C6EC4;
L_089C6EC4:;
    s1 = a0 + 0;
    goto L_089C6EC8;
L_089C6EC8:;
    s3 = 999;
    v1 = LD32(s1);
    goto L_089C6ED0;
L_089C6ED0:;
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6EDC;
L_089C6EDC:;
    a0 = s2 - 20312;
    cnd_ = v0 != s3;
    a2 = 1;
    if (cnd_) { goto L_089C6F2C; }
    goto L_089C6EE8;
L_089C6EE8:;
    a1 = LD32(s1+460);
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C6EF0;
L_089C6EF0:;
    a2 = v0 + 0;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089C6E5C; }
    goto L_089C6EFC;
L_089C6EFC:;
    a0 = LD32(v0);
    a1 = LD32(s0);
    v0 = LD32(a0-16);
    v1 = LD32(a1-16);
    v0 = a2 + v0;
    v1 = s0 + v1;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    cnd_ = a1 != a0;
    if (cnd_) { v1 = LD32(s1); goto L_089C6ED0; }
    goto L_089C6F24;
L_089C6F24:;
    a0 = s0 + 0;
    goto L_089C6E20;
L_089C6F2C:;
    v1 = LD32(s1);
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6F3C;
L_089C6F3C:;
    goto L_089C6E2C;
L_089C6F44:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089C6EB8; }
    goto L_089C6F50;
L_089C6F50:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089C6EB8; }
    goto L_089C6F5C;
L_089C6F5C:;
    s1 = a0 + 0;
    goto L_089C6EC8;
}

/* 089C6F64 */
rv_t func_089C6F64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C6F64:;
    sp = sp - 32;
    s4 = 0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    v0 = func_0897364C();
    goto L_089C6F98;
L_089C6F98:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C704C; }
    goto L_089C6FA0;
L_089C6FA0:;
    v1 = LD32(s0);
    a1 = s2 + 0;
    v0 = LD32(v1+164);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C6FB4;
L_089C6FB4:;
    ST32(s1, v0);
    v0 = 1;
    a1 = 0 + 0;
    ST8(s1+7, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 ^ s3;
    v1 = v1 < 0x1u;
    ST8(s1+6, v1);
    a0 = LD32(s0);
    v0 = LD32(a0-16);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    v1 = v1 ^ 0x1;
    cnd_ = s4 != 0;
    ST8(s1+5, v1);
    if (cnd_) { goto L_089C7044; }
    goto L_089C7000;
L_089C7000:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s3;
    if (cnd_) { a1 = 1; goto L_089C7018; }
    goto L_089C7018;
L_089C7018:;
    v0 = 27;
    ST8(s1+4, a1);
    ST32(s1+8, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C7044:;
    a1 = 1;
    goto L_089C7018;
L_089C704C:;
    v1 = LD32(s0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C705C;
L_089C705C:;
    v0 = v0 ^ 0x3e7;
    s4 = 0 < v0;
    goto L_089C6FA0;
}

/* 089C7068 */
rv_t func_089C7068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C7068:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C708C;
L_089C708C:;
    a2 = 0xff1a0000u;
    v1 = 999;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == v1;
    a2 = a2 | 0xee1a;
    if (cnd_) { goto L_089C70B0; }
    goto L_089C70A4;
L_089C70A4:;
    { rv_t r_ = func_089DD154(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C70AC;
L_089C70AC:;
    a2 = v0 + 0;
    goto L_089C70B0;
L_089C70B0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C70C8 */
rv_t func_089C70C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C70C8:;
    sp = sp - 16;
    v0 = 999;
    s2 = a2 + 0;
    a3 = LD32(a0+524);
    cnd_ = a3 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_089C7180; }
    goto L_089C70F0;
L_089C70F0:;
    a0 = D_08C2B3A4 - (-19548);
    v1 = a0 - 19548;
    v0 = LD32(v1+4);
    a1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089C7148; }
    goto L_089C711C;
L_089C711C:;
    a0 = LD32(a1);
    goto L_089C7120;
L_089C7120:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089C71CC; }
    goto L_089C7138;
L_089C7138:;
    a1 = LD32(a1+4);
    goto L_089C713C;
L_089C713C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089C7120; }
    goto L_089C7144;
L_089C7144:;
    s0 = 0 + 0;
    goto L_089C7148;
L_089C7148:;
    cnd_ = s0 == 0;
    v1 = 0x801e;
    if (cnd_) { goto L_089C7180; }
    goto L_089C7150;
L_089C7150:;
    a1 = LD32(s0);
    v0 = LD32(a1-16);
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a1+216); goto L_089C7198; }
    goto L_089C7168;
L_089C7168:;
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+80));
    ST32(s1, FBITS(f0));
    f1 = BITSF(LD32(s0+52));
    ST32(s2, FBITS(f1));
    goto L_089C7180;
L_089C7180:;
    goto L_089C7184;
L_089C7184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C7198:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C71A0;
L_089C71A0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089C71B0; }
    goto L_089C71A8;
L_089C71A8:;
    a1 = LD32(s0);
    goto L_089C7168;
L_089C71B0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+284);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C71C4;
L_089C71C4:;
    goto L_089C7184;
L_089C71CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C7138; }
    goto L_089C71D8;
L_089C71D8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089C713C; }
    goto L_089C71E4;
L_089C71E4:;
    goto L_089C7148;
}

/* 089C71EC */
rv_t func_089C71EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089C71EC:;
    v0 = 1;
    ST8(a0+670, v0);
    sp = sp - 64;
    s1 = a0 + 0;
    { rv_t r_ = func_089DA874(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7228;
L_089C7228:;
    f0 = BITSF(0);
    a1 = LD32(s1);
    ST8(s1+670, 0);
    v0 = LD32(a1-12);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089C72A8; }
    goto L_089C7250;
L_089C7250:;
    a0 = LD32(s1+40);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089C75FC; }
    goto L_089C725C;
L_089C725C:;
    v0 = LD32(a1-12);
    goto L_089C7260;
L_089C7260:;
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089C72A8; }
    goto L_089C727C;
L_089C727C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089C72A8:;
    a0 = s1 + 0;
    func_089CEDE0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C72B0;
L_089C72B0:;
    a0 = s1 + 0;
    func_089CE39C(a0);
    goto L_089C72B8;
L_089C72B8:;
    a0 = s1 + 0;
    func_089CEBA0(a0);
    goto L_089C72C0;
L_089C72C0:;
    a0 = s1 + 0;
    func_089CB878(a0);
    goto L_089C72C8;
L_089C72C8:;
    v0 = LD32(s1);
    v1 = LD32(v0+484);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C72D8;
L_089C72D8:;
    a0 = s1 + 0;
    func_089CD5C0(a0, 0, 0, 0);
    goto L_089C72E0;
L_089C72E0:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+801, 0); goto L_089C72EC; }
    goto L_089C72EC;
L_089C72EC:;
    v1 = LD32(s1+720);
    s5 = 1;
    s6 = 1;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089C7354; }
    goto L_089C7300;
L_089C7300:;
    s0 = s1 + 0;
    a0 = LD32(s0+672);
    goto L_089C7308;
L_089C7308:;
    s2 = s2 + 1;
    v0 = func_08A17BB4(a0);
    goto L_089C7310;
L_089C7310:;
    v1 = LD32(s0+672);
    if (v0 != 0) s5 = 0;
    v0 = LD32(v1+84);
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089C7340; }
    goto L_089C7324;
L_089C7324:;
    v0 = LD_U8(v1+336);
    cnd_ = v0 == 0;
    if (cnd_) { s6 = 0 + 0; goto L_089C7344; }
    goto L_089C7330;
L_089C7330:;
    v0 = LD32(v1);
    v0 = v0 ^ 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+720); goto L_089C7348; }
    goto L_089C7340;
L_089C7340:;
    s6 = 0 + 0;
    goto L_089C7344;
L_089C7344:;
    v1 = LD32(s1+720);
    goto L_089C7348;
L_089C7348:;
    v0 = s2 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+672); goto L_089C7308; }
    goto L_089C7354;
L_089C7354:;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089C73A4; }
    goto L_089C735C;
L_089C735C:;
    f20 = BITSF(0);
    s7 = 1;
    s0 = s1 + 0;
    s4 = 0 + 0;
    goto L_089C736C;
L_089C736C:;
    cnd_ = s6 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089C7590; }
    goto L_089C7374;
L_089C7374:;
    v0 = LD32(s0+672);
    ST8(v0+336, 0);
    a0 = LD32(s0+672);
    f0 = func_08A19804(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C7384;
L_089C7384:;
    v0 = LD32(s0+672);
    ST8(v0+336, s7);
    v0 = LD32(s1+720);
    goto L_089C7390;
L_089C7390:;
    s2 = s2 + 1;
    s4 = s4 + 4;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089C736C; }
    goto L_089C73A4;
L_089C73A4:;
    v1 = LD32(s1+724);
    s5 = 1;
    s6 = 1;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089C740C; }
    goto L_089C73B8;
L_089C73B8:;
    s0 = s1 + 0;
    a0 = LD32(s0+696);
    goto L_089C73C0;
L_089C73C0:;
    s2 = s2 + 1;
    v0 = func_08A17BB4(a0);
    goto L_089C73C8;
L_089C73C8:;
    v1 = LD32(s0+696);
    if (v0 != 0) s5 = 0;
    v0 = LD32(v1+84);
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089C73F8; }
    goto L_089C73DC;
L_089C73DC:;
    v0 = LD_U8(v1+336);
    cnd_ = v0 == 0;
    if (cnd_) { s6 = 0 + 0; goto L_089C73FC; }
    goto L_089C73E8;
L_089C73E8:;
    v0 = LD32(v1);
    v0 = v0 ^ 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+724); goto L_089C7400; }
    goto L_089C73F8;
L_089C73F8:;
    s6 = 0 + 0;
    goto L_089C73FC;
L_089C73FC:;
    v1 = LD32(s1+724);
    goto L_089C7400;
L_089C7400:;
    v0 = s2 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+696); goto L_089C73C0; }
    goto L_089C740C;
L_089C740C:;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089C745C; }
    goto L_089C7414;
L_089C7414:;
    f20 = BITSF(0);
    s7 = 1;
    s0 = s1 + 0;
    s4 = 0 + 0;
    goto L_089C7424;
L_089C7424:;
    cnd_ = s6 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089C751C; }
    goto L_089C742C;
L_089C742C:;
    v0 = LD32(s0+696);
    ST8(v0+336, 0);
    a0 = LD32(s0+696);
    f0 = func_08A19804(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C743C;
L_089C743C:;
    v0 = LD32(s0+696);
    ST8(v0+336, s7);
    v0 = LD32(s1+724);
    goto L_089C7448;
L_089C7448:;
    s2 = s2 + 1;
    s4 = s4 + 4;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089C7424; }
    goto L_089C745C;
L_089C745C:;
    a0 = LD32(s1+40);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+852); goto L_089C7488; }
    goto L_089C7468;
L_089C7468:;
    v1 = LD32(s1+848);
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C74E4; }
    goto L_089C7478;
L_089C7478:;
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C74C0; }
    goto L_089C7484;
L_089C7484:;
    v0 = LD32(s1+852);
    goto L_089C7488;
L_089C7488:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C74A0; }
    goto L_089C7494;
L_089C7494:;
    v0 = LD32(s1+844);
    v0 = v0 | 0x10;
    ST32(s1+844, v0);
    goto L_089C74A0;
L_089C74A0:;
    a0 = s1 + 0;
    func_089C7638(a0, 0, 0, 0);
    goto L_089C74A8;
L_089C74A8:;
    v1 = LD32(s1);
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C74B8;
L_089C74B8:;
    goto L_089C727C;
L_089C74C0:;
    a0 = LD32(s1+40);
    { u64 r_ = func_088BB1F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C74C8;
L_089C74C8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+852); goto L_089C7488; }
    goto L_089C74D0;
L_089C74D0:;
    a0 = LD32(s1+40);
    a1 = 0 + 0;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C74DC;
L_089C74DC:;
    v0 = LD32(s1+852);
    goto L_089C7488;
L_089C74E4:;
    { u64 r_ = func_088BB1F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C74EC;
L_089C74EC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+40); goto L_089C74FC; }
    goto L_089C74F4;
L_089C74F4:;
    v1 = LD32(s1+848);
    goto L_089C7478;
L_089C74FC:;
    a1 = 1;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7504;
L_089C7504:;
    v0 = D_08AEEEA4 - (-4444);
    a0 = LD32(s1+40);
    f12 = BITSF(LD32(v0-4444));
    func_088BB2EC(a0, f12);
    goto L_089C7514;
L_089C7514:;
    v1 = LD32(s1+848);
    goto L_089C7478;
L_089C751C:;
    v0 = LD32(s0+696);
    s3 = s4 + 0;
    ST8(v0+336, s7);
    v1 = LD32(s0+696);
    v0 = LD32(v1+364);
    v0 = (v0 & ~(0x1u << 1)) | ((s5 & 0x1) << 1);
    ST32(v1+364, v0);
    a0 = LD32(s0+696);
    func_08A186DC(a0);
    goto L_089C7540;
L_089C7540:;
    v0 = LD32(s1+848);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = s4 + s1;
    if (cnd_) { goto L_089C7574; }
    goto L_089C7550;
L_089C7550:;
    v1 = LD32(s0+696);
    v0 = LD32(v1+296);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C7574; }
    goto L_089C7560;
L_089C7560:;
    f0 = BITSF(LD32(v1+300));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = s3 + s1; goto L_089C7580; }
    goto L_089C7574;
L_089C7574:;
    a0 = LD32(a0+696);
    f0 = func_08A17C64(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C757C;
L_089C757C:;
    v0 = s3 + s1;
    goto L_089C7580;
L_089C7580:;
    a0 = LD32(v0+696);
    func_08A186EC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C7588;
L_089C7588:;
    v0 = LD32(s1+724);
    goto L_089C7448;
L_089C7590:;
    v0 = LD32(s0+672);
    s3 = s4 + 0;
    v1 = LD32(v0+364);
    v1 = (v1 & ~(0x1u << 1)) | ((s5 & 0x1) << 1);
    ST32(v0+364, v1);
    a0 = LD32(s0+672);
    func_08A186DC(a0);
    goto L_089C75AC;
L_089C75AC:;
    v0 = LD32(s1+848);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s4 + s1;
    if (cnd_) { goto L_089C75E0; }
    goto L_089C75BC;
L_089C75BC:;
    v1 = LD32(s0+672);
    v0 = LD32(v1+296);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C75E0; }
    goto L_089C75CC;
L_089C75CC:;
    f0 = BITSF(LD32(v1+300));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = s3 + s1; goto L_089C75EC; }
    goto L_089C75E0;
L_089C75E0:;
    a0 = LD32(a0+672);
    f0 = func_08A17C64(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C75E8;
L_089C75E8:;
    v0 = s3 + s1;
    goto L_089C75EC;
L_089C75EC:;
    a0 = LD32(v0+672);
    func_08A186EC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C75F4;
L_089C75F4:;
    v0 = LD32(s1+720);
    goto L_089C7390;
L_089C75FC:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7604;
L_089C7604:;
    cnd_ = v0 != 0;
    a1 = LD32(s1);
    if (cnd_) { goto L_089C725C; }
    goto L_089C760C;
L_089C760C:;
    v1 = 0x801e;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a1-12); goto L_089C7260; }
    goto L_089C7624;
L_089C7624:;
    a0 = LD32(s1+40);
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7630;
L_089C7630:;
    a1 = LD32(s1);
    goto L_089C725C;
}

/* 089C7638 */
void func_089C7638(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089C7638:;
    sp = sp - 80;
    s0 = a0 + 0;
    v1 = LD32(a0+844);
    a1 = LD32(a0+852);
    v0 = (v1 >> 11) & 0x1;
    a0 = (a1 >> 3) & 0x1;
    cnd_ = v0 == a0;
    v0 = a1 & 0x8;
    if (cnd_) { goto L_089C7690; }
    goto L_089C766C;
L_089C766C:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_089C7684; }
    goto L_089C7678;
L_089C7678:;
    v1 = (v1 & ~(0x1u << 3)) | ((a0 & 0x1) << 3);
    ST32(s0+844, v1);
    v0 = v1 + 0;
    goto L_089C7684;
L_089C7684:;
    v0 = (v0 & ~(0x1u << 11)) | ((a0 & 0x1) << 11);
    ST32(s0+844, v0);
    v0 = a1 & 0x8;
    goto L_089C7690;
L_089C7690:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+832); goto L_089C7794; }
    goto L_089C7698;
L_089C7698:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+832); goto L_089C7794; }
    goto L_089C76A4;
L_089C76A4:;
    v0 = LD32(s0+436);
    cnd_ = v0 != 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_089C76C0; }
    goto L_089C76B0;
L_089C76B0:;
    a0 = s0 + 0;
    v0 = func_089C5FC4(a0, t1, t2, t3);
    goto L_089C76B8;
L_089C76B8:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_089C76D8; }
    goto L_089C76C0;
L_089C76C0:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 16;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C76D4;
L_089C76D4:;
    a1 = LD32(sp+16);
    goto L_089C76D8;
L_089C76D8:;
    f20 = BITSF(0);
    a0 = s0 + 0;
    f0 = func_089C6A64(a1, 0, 0, 0);
    goto L_089C76E4;
L_089C76E4:;
    a0 = s0 + 0;
    f21 = f0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C76F0;
L_089C76F0:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C76F8;
L_089C76F8:;
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    v0 = FBITS(f2);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f4));
    fcc = FCMP(f20, f0, 12);
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_089C7818; }
    goto L_089C7740;
L_089C7740:;
    a1 = LD32(sp+16);
    goto L_089C7744;
L_089C7744:;
    a0 = s0 + 0;
    f0 = func_089C6A90(a1, 0, 0, 0);
    goto L_089C774C;
L_089C774C:;
    a1 = LD32(sp+16);
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_089C6ABC(a1, 0, 0, 0);
    goto L_089C775C;
L_089C775C:;
    v0 = D_08B285A0 - (-31328);
    f4 = BITSF(LD32(v0-31328));
    f3 = BITSF(LD32(s0+348));
    f2 = BITSF(LD32(s0+312));
    f20 = f20 * f4;
    f0 = f0 * f4;
    f1 = BITSF(LD32(s0+356));
    f2 = f2 + f20;
    f1 = f1 + f0;
    f3 = f3 + f20;
    ST32(s0+312, FBITS(f2));
    ST32(s0+348, FBITS(f3));
    ST32(s0+356, FBITS(f1));
    a1 = LD32(s0+832);
    goto L_089C7794;
L_089C7794:;
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_089C77B8; }
    goto L_089C779C;
L_089C779C:;
    goto L_089C77A0;
L_089C77A0:;
    sp = sp + 80;
    return;
L_089C77B8:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C77C0;
L_089C77C0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089C7810; }
    goto L_089C77C8;
L_089C77C8:;
    v0 = LD32(s0);
    a1 = 0xcb7e0000u;
    a2 = sp + 0;
    a0 = LD32(v0-12);
    a3 = 0 + 0;
    t0 = 1;
    a0 = s0 + a0;
    v1 = LD32(a0);
    t1 = (u32)-1;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = a1 | 0x7191;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C77F8;
L_089C77F8:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7808;
L_089C7808:;
    goto L_089C77A0;
L_089C7810:;
    ST32(s0+832, 0);
    goto L_089C779C;
L_089C7818:;
    { u64 r_ = func_08971F74(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7820;
L_089C7820:;
    cnd_ = v0 != 0;
    f4 = BITSF(LD32(sp));
    if (cnd_) { goto L_089C7910; }
    goto L_089C7828;
L_089C7828:;
    fcc = FCMP(f20, f4, 12);
    cnd_ = !fcc;
    f5 = f4;
    if (cnd_) { goto L_089C7904; }
    goto L_089C7838;
L_089C7838:;
    v0 = D_08AEEEA8 - (-4440);
    f7 = BITSF(LD32(v0-4440));
    goto L_089C7840;
L_089C7840:;
    f3 = BITSF(LD32(sp+8));
    f0 = BITSF(0);
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    f2 = f3;
    if (cnd_) { goto L_089C78F8; }
    goto L_089C7858;
L_089C7858:;
    v0 = D_08AEEEA8 - (-4440);
    f6 = BITSF(LD32(v0-4440));
    goto L_089C7860;
L_089C7860:;
    f1 = BITSF(0);
    fcc = FCMP(f5, f1, 2);
    cnd_ = fcc;
    v0 = D_08B285A4 - (-31324);
    if (cnd_) { goto L_089C7888; }
    goto L_089C7874;
L_089C7874:;
    f0 = BITSF(LD32(v0-31324));
    f0 = f7 * f0;
    f0 = f0 * f21;
    f4 = f5 - f0;
    ST32(sp, FBITS(f4));
    goto L_089C7888;
L_089C7888:;
    fcc = FCMP(f2, f1, 2);
    cnd_ = fcc;
    f0 = f7 * f4;
    if (cnd_) { goto L_089C78B4; }
    goto L_089C7898;
L_089C7898:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(v0-31324));
    f0 = f6 * f0;
    f0 = f0 * f21;
    f3 = f2 - f0;
    ST32(sp+8, FBITS(f3));
    f0 = f7 * f4;
    goto L_089C78B4;
L_089C78B4:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp, FBITS(f1)); goto L_089C78C4; }
    goto L_089C78C4;
L_089C78C4:;
    f0 = f6 * f3;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+8, FBITS(f1)); goto L_089C78D8; }
    goto L_089C78D8;
L_089C78D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C78E0;
L_089C78E0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_089C78E8;
L_089C78E8:;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C78F0;
L_089C78F0:;
    a1 = LD32(sp+16);
    goto L_089C7744;
L_089C78F8:;
    v0 = D_08AEEEAC - (-4436);
    f6 = BITSF(LD32(v0-4436));
    goto L_089C7860;
L_089C7904:;
    v0 = D_08AEEEAC - (-4436);
    f7 = BITSF(LD32(v0-4436));
    goto L_089C7840;
L_089C7910:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7918;
L_089C7918:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    goto L_089C78E8;
}

/* 089C7928 */
rv_t func_089C7928(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C7928:;
    sp = sp - 16;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C79EC; }
    goto L_089C7944;
L_089C7944:;
    a1 = LD32(a0+104);
    cnd_ = a1 != 0;
    v1 = LD32(a0);
    if (cnd_) { goto L_089C79C0; }
    goto L_089C7950;
L_089C7950:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = 32;
    if (cnd_) { goto L_089C7984; }
    goto L_089C7970;
L_089C7970:;
    goto L_089C7974;
L_089C7974:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C7984:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C798C;
L_089C798C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A5DAA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C799C;
L_089C799C:;
    a0 = s1 + 0;
    cnd_ = s1 == 0;
    ST32(s0+104, s1);
    if (cnd_) { goto L_089C7970; }
    goto L_089C79A8;
L_089C79A8:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    goto L_089C79B0;
L_089C79B0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C79B8;
L_089C79B8:;
    goto L_089C7974;
L_089C79C0:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = a1 + 0;
    if (cnd_) { goto L_089C7970; }
    goto L_089C79E0;
L_089C79E0:;
    v1 = LD32(a1);
    goto L_089C79E4;
L_089C79E4:;
    v0 = LD32(v1+12);
    goto L_089C79B0;
L_089C79EC:;
    v0 = LD32(a0+104);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C7970; }
    goto L_089C79F8;
L_089C79F8:;
    v1 = LD32(v0);
    goto L_089C79E4;
}

/* 089C7A00 */
rv_t func_089C7A00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C7A00:;
    sp = sp - 32;
    v0 = 0x805b;
    s1 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089C7FE8; }
    goto L_089C7A28;
L_089C7A28:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8060;
    if (cnd_) { goto L_089C7D1C; }
    goto L_089C7A34;
L_089C7A34:;
    v0 = 0x804d;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089C7CCC; }
    goto L_089C7A40;
L_089C7A40:;
    cnd_ = v0 != 0;
    v0 = 0x804e;
    if (cnd_) { goto L_089C7C70; }
    goto L_089C7A48;
L_089C7A48:;
    v0 = 90;
    cnd_ = v1 == v0;
    v0 = 0x804c;
    if (cnd_) { goto L_089C7B44; }
    goto L_089C7A54;
L_089C7A54:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a1+24); goto L_089C7A88; }
    goto L_089C7A5C;
L_089C7A5C:;
    a0 = s1 + 0;
    goto L_089C7A60;
L_089C7A60:;
    a1 = s0 + 0;
    { rv_t r_ = func_089DAD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7A68;
L_089C7A68:;
    a3 = v0 + 0;
    goto L_089C7A6C;
L_089C7A6C:;
    v0 = a3 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C7A88:;
    cnd_ = v0 == 0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7A90;
L_089C7A90:;
    a2 = LD32(v0);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22840;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7AA0;
L_089C7AA0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089C7AF0; }
    goto L_089C7AC4;
L_089C7AC4:;
    a1 = LD32(a0);
    goto L_089C7AC8;
L_089C7AC8:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089C7B24; }
    goto L_089C7AE0;
L_089C7AE0:;
    a0 = LD32(a0+4);
    goto L_089C7AE4;
L_089C7AE4:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_089C7AC8; }
    goto L_089C7AEC;
L_089C7AEC:;
    s0 = 0 + 0;
    goto L_089C7AF0;
L_089C7AF0:;
    cnd_ = s0 == 0;
    if (cnd_) { a3 = 1; goto L_089C7A6C; }
    goto L_089C7AF8;
L_089C7AF8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089CEC70(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089C7B04;
L_089C7B04:;
    a0 = s1 + 0;
    v0 = func_089C64D0(a0, 0, 0, 0);
    goto L_089C7B0C;
L_089C7B0C:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089C91D8(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7B1C;
L_089C7B1C:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7B24:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089C7AE0; }
    goto L_089C7B30;
L_089C7B30:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089C7AE4; }
    goto L_089C7B3C;
L_089C7B3C:;
    goto L_089C7AF0;
L_089C7B44:;
    s2 = LD32(a1+24);
    cnd_ = s2 == 0;
    a3 = 1;
    if (cnd_) { goto L_089C7A6C; }
    goto L_089C7B50;
L_089C7B50:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    if (cnd_) { f12 = BITSF(LD32(s0+8)); goto L_089C7B6C; }
    goto L_089C7B5C;
L_089C7B5C:;
    v0 = LD_U8(a0+124);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089C7C48; }
    goto L_089C7B68;
L_089C7B68:;
    f12 = BITSF(LD32(s0+8));
    goto L_089C7B6C;
L_089C7B6C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089D0EA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7B78;
L_089C7B78:;
    v0 = LD_U8(s1+124);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = 1; goto L_089C7A6C; }
    goto L_089C7B84;
L_089C7B84:;
    v1 = LD32(s1);
    a1 = sp + 0;
    v0 = LD32(v1+276);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7B98;
L_089C7B98:;
    f0 = BITSF(LD32(sp+4));
    a1 = s1 + 540;
    ST32(a1+4, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(a1+8, FBITS(f0));
    f0 = BITSF(LD32(sp));
    v1 = LD32(s1);
    ST32(s1+540, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7BC4;
L_089C7BC4:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v1 = s1 + 552;
    ST32(v1+32, FBITS(f0));
    f0 = BITSF(LD32(v0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    ST32(s1+552, FBITS(f0));
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7C20;
L_089C7C20:;
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    v1 = s1 + 528;
    v0 = 1;
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(s1+528, FBITS(f2));
    ST8(s1+124, v0);
    goto L_089C7B1C;
L_089C7C48:;
    v0 = LD32(v1+460);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7C54;
L_089C7C54:;
    cnd_ = v0 != 0;
    f12 = BITSF(LD32(s0+8));
    if (cnd_) { goto L_089C7B6C; }
    goto L_089C7C5C;
L_089C7C5C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089D0F84(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7C68;
L_089C7C68:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7C70:;
    cnd_ = v1 == v0;
    v0 = 0x804f;
    if (cnd_) { goto L_089C7CBC; }
    goto L_089C7C78;
L_089C7C78:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089C7A60; }
    goto L_089C7C80;
L_089C7C80:;
    v1 = LD32(a1+24);
    v0 = LD32(a0+844);
    a2 = a0 + 748;
    a0 = LD_U8(v1);
    a1 = v1 + 4;
    a3 = 1;
    v0 = (v0 & ~(0x1u << 10)) | ((a0 & 0x1) << 10);
    ST32(s1+844, v0);
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    ST32(s1+748, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    goto L_089C7A6C;
L_089C7CBC:;
    { rv_t r_ = func_089C9548(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7CC4;
L_089C7CC4:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7CCC:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7CD8;
L_089C7CD8:;
    a1 = LD32(a1);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7CE8;
L_089C7CE8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7CF0;
L_089C7CF0:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_089CECB4(a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C7CFC;
L_089C7CFC:;
    a0 = s1 + 0;
    v0 = func_089C64D0(a0, 0, 0, 0);
    goto L_089C7D04;
L_089C7D04:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089C92A4(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7D14;
L_089C7D14:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7D1C:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089C7F5C; }
    goto L_089C7D24;
L_089C7D24:;
    cnd_ = v0 != 0;
    v0 = 0x8080;
    if (cnd_) { goto L_089C7DDC; }
    goto L_089C7D2C;
L_089C7D2C:;
    v0 = 0x805c;
    cnd_ = v1 == v0;
    v0 = 0x805f;
    if (cnd_) { goto L_089C7DCC; }
    goto L_089C7D38;
L_089C7D38:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089C7A60; }
    goto L_089C7D40;
L_089C7D40:;
    a1 = LD32(a1+24);
    v0 = LD_U8(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+724); goto L_089C7D90; }
    goto L_089C7D50;
L_089C7D50:;
    v0 = LD32(a0+720);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7D5C;
L_089C7D5C:;
    a2 = a0 + 672;
    goto L_089C7D60;
L_089C7D60:;
    a0 = LD32(a2);
    v0 = LD_U8(a1+1);
    a3 = a3 + 1;
    v1 = LD32(a0+296);
    v1 = v1 + v0;
    ST32(a0+296, v1);
    v0 = LD32(s1+720);
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_089C7D60; }
    goto L_089C7D88;
L_089C7D88:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7D90:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7D98;
L_089C7D98:;
    a2 = a0 + 696;
    goto L_089C7D9C;
L_089C7D9C:;
    a0 = LD32(a2);
    v0 = LD_U8(a1+1);
    a3 = a3 + 1;
    v1 = LD32(a0+296);
    v1 = v1 + v0;
    ST32(a0+296, v1);
    v0 = LD32(s1+724);
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_089C7D9C; }
    goto L_089C7DC4;
L_089C7DC4:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7DCC:;
    { rv_t r_ = func_089CD7C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7DD4;
L_089C7DD4:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7DDC:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089C7F40; }
    goto L_089C7DE4;
L_089C7DE4:;
    cnd_ = v0 != 0;
    v0 = 0x8081;
    if (cnd_) { goto L_089C7E74; }
    goto L_089C7DEC;
L_089C7DEC:;
    v0 = 0x8061;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089C7A60; }
    goto L_089C7DF8;
L_089C7DF8:;
    v0 = LD32(a1+24);
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0+724); goto L_089C7E40; }
    goto L_089C7E08;
L_089C7E08:;
    v0 = LD32(a0+720);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7E14;
L_089C7E14:;
    a0 = a0 + 672;
    goto L_089C7E18;
L_089C7E18:;
    v1 = LD32(a0);
    a1 = a1 + 1;
    ST32(v1+296, 0);
    ST32(v1+300, 0);
    v0 = LD32(s1+720);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089C7E18; }
    goto L_089C7E38;
L_089C7E38:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7E40:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7E48;
L_089C7E48:;
    a0 = a0 + 696;
    goto L_089C7E4C;
L_089C7E4C:;
    v1 = LD32(a0);
    a1 = a1 + 1;
    ST32(v1+296, 0);
    ST32(v1+300, 0);
    v0 = LD32(s1+724);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089C7E4C; }
    goto L_089C7E6C;
L_089C7E6C:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7E74:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089C7A60; }
    goto L_089C7E7C;
L_089C7E7C:;
    a1 = LD32(a0+844);
    v0 = 0x80000u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_089C7EC4; }
    goto L_089C7E90;
L_089C7E90:;
    v1 = LD32(s1+852);
    v0 = v1 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 0x80000u; goto L_089C7EAC; }
    goto L_089C7EA0;
L_089C7EA0:;
    v0 = v1 | 0x8;
    ST32(s1+852, v0);
    v1 = 0x80000u;
    goto L_089C7EAC;
L_089C7EAC:;
    v0 = a1 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = 1; goto L_089C7A6C; }
    goto L_089C7EB8;
L_089C7EB8:;
    v0 = a1 | v1;
    ST32(s1+844, v0);
    goto L_089C7B1C;
L_089C7EC4:;
    v1 = LD32(v0+464);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7ED0;
L_089C7ED0:;
    a0 = s1 + 0;
    { rv_t r_ = func_089CAF64(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7ED8;
L_089C7ED8:;
    v0 = LD32(s1);
    a1 = 1;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08876270(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7EEC;
L_089C7EEC:;
    a0 = s1 + 0;
    func_089CD578(a0);
    goto L_089C7EF4;
L_089C7EF4:;
    a0 = s1 + 0;
    func_089CD424(a0);
    goto L_089C7EFC;
L_089C7EFC:;
    a0 = s1 + 0;
    func_089CB2E0(a0);
    goto L_089C7F04;
L_089C7F04:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7F0C;
L_089C7F0C:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7F20;
L_089C7F20:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C7F30; }
    goto L_089C7F28;
L_089C7F28:;
    a1 = LD32(s1+844);
    goto L_089C7E90;
L_089C7F30:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7F38;
L_089C7F38:;
    a1 = LD32(s1+844);
    goto L_089C7E90;
L_089C7F40:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { a3 = 1; goto L_089C7A6C; }
    goto L_089C7F4C;
L_089C7F4C:;
    a1 = LD32(a1);
    { u64 r_ = func_089CAFE0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C7F54;
L_089C7F54:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7F5C:;
    a1 = LD32(a1+24);
    v0 = LD_U8(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+724); goto L_089C7FAC; }
    goto L_089C7F6C;
L_089C7F6C:;
    v0 = LD32(a0+720);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7F78;
L_089C7F78:;
    a0 = a0 + 672;
    goto L_089C7F7C;
L_089C7F7C:;
    v1 = LD32(a0);
    f1 = BITSF(LD32(a1+4));
    a2 = a2 + 1;
    f0 = BITSF(LD32(v1+300));
    f0 = f0 + f1;
    ST32(v1+300, FBITS(f0));
    v0 = LD32(s1+720);
    v0 = a2 < v0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089C7F7C; }
    goto L_089C7FA4;
L_089C7FA4:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7FAC:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089C7B1C; }
    goto L_089C7FB4;
L_089C7FB4:;
    a0 = a0 + 696;
    goto L_089C7FB8;
L_089C7FB8:;
    v1 = LD32(a0);
    f1 = BITSF(LD32(a1+4));
    a2 = a2 + 1;
    f0 = BITSF(LD32(v1+300));
    f0 = f0 + f1;
    ST32(v1+300, FBITS(f0));
    v0 = LD32(s1+724);
    v0 = a2 < v0;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089C7FB8; }
    goto L_089C7FE0;
L_089C7FE0:;
    a3 = 1;
    goto L_089C7A6C;
L_089C7FE8:;
    { rv_t r_ = func_089C9408(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C7FF0;
L_089C7FF0:;
    v0 = LD32(s1+844);
    a3 = 1;
    v0 = (v0 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    ST32(s1+844, v0);
    goto L_089C7A6C;
}

/* 089C8004 */
rv_t func_089C8004(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C8004:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    s2 = s1 + 24;
    if (cnd_) { goto L_089C83D8; }
    goto L_089C8028;
L_089C8028:;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8038;
L_089C8038:;
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
    if (cnd_) { goto L_089C82B8; }
    goto L_089C8074;
L_089C8074:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C81F8; }
    goto L_089C8084;
L_089C8084:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089C811C; }
    goto L_089C80AC;
L_089C80AC:;
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
    if (cnd_) { goto L_089C80F8; }
    goto L_089C80E8;
L_089C80E8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089C80F8;
L_089C80F8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C813C; }
    goto L_089C8108;
L_089C8108:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089C813C; }
    goto L_089C8118;
L_089C8118:;
    goto L_089C811C;
L_089C811C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C813C; }
    goto L_089C8130;
L_089C8130:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089C813C;
L_089C813C:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089C81CC; }
    goto L_089C815C;
L_089C815C:;
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
    if (cnd_) { goto L_089C81A8; }
    goto L_089C8198;
L_089C8198:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089C81A8;
L_089C81A8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C81EC; }
    goto L_089C81B8;
L_089C81B8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089C81EC; }
    goto L_089C81C8;
L_089C81C8:;
    goto L_089C81CC;
L_089C81CC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C81EC; }
    goto L_089C81E0;
L_089C81E0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089C81EC;
L_089C81EC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089C8370; }
    goto L_089C81F4;
L_089C81F4:;
    goto L_089C81F8;
L_089C81F8:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089C828C; }
    goto L_089C821C;
L_089C821C:;
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
    if (cnd_) { goto L_089C8268; }
    goto L_089C8258;
L_089C8258:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089C8268;
L_089C8268:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C82AC; }
    goto L_089C8278;
L_089C8278:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089C82AC; }
    goto L_089C8288;
L_089C8288:;
    goto L_089C828C;
L_089C828C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C82AC; }
    goto L_089C82A0;
L_089C82A0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089C82AC;
L_089C82AC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089C8370; }
    goto L_089C82B4;
L_089C82B4:;
    goto L_089C82B8;
L_089C82B8:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089C834C; }
    goto L_089C82DC;
L_089C82DC:;
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
    if (cnd_) { goto L_089C8328; }
    goto L_089C8318;
L_089C8318:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089C8328;
L_089C8328:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C836C; }
    goto L_089C8338;
L_089C8338:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089C836C; }
    goto L_089C8348;
L_089C8348:;
    goto L_089C834C;
L_089C834C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089C836C; }
    goto L_089C8360;
L_089C8360:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089C836C;
L_089C836C:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089C8370;
L_089C8370:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s1+(0),FBITS(v[96]));}
    {ST32(s1+(4),FBITS(v[97]));}
    {ST32(s1+(8),FBITS(v[98]));}
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8390;
L_089C8390:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s2+8, FBITS(f0));
    a1 = s1 + 12;
    ST32(s1+24, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    v0 = LD32(s0);
    v1 = LD32(v0+276);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C83BC;
L_089C83BC:;
    a1 = LD32(s0);
    v0 = LD32(a1+268);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C83CC;
L_089C83CC:;
    ST32(s1+48, v0);
    v0 = LD32(s0+848);
    ST32(s1+52, v0);
    goto L_089C83D8;
L_089C83D8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C83F4 */
rv_t func_089C83F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C83F4:;
    sp = sp - 16;
    { rv_t r_ = func_089DAC88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8404;
L_089C8404:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C8410 */
float func_089C8410(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089C8410:;
    sp = sp - 176;
    s1 = a0 + 0;
    s0 = a0 + 552;
    a1 = s0 + 0;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C844C; }
    goto L_089C8438;
L_089C8438:;
    goto L_089C843C;
L_089C843C:;
    sp = sp + 176;
    return f0;
L_089C844C:;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8460;
L_089C8460:;
    a2 = s1 + 540;
    {u32 a_=sp+(144);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+552);
    v0 = LD32(s0+4);
    a1 = LD32(s0+32);
    a0 = LD32(s1+40);
    {u32 a_=sp+(48);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+8);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(32);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(s0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(s0+24);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(s0+28);
    v0 = LD32(s1+540);
    {v[33]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = LD32(a2+4);
    {v[34]=BITSF(a1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    a1 = LD32(a2+8);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    a1 = sp + 0;
    {v0=FBITS(v[17]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8524;
L_089C8524:;
    goto L_089C843C;
}

/* 089C852C */
void func_089C852C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_089C852C:;
    sp = sp - 272;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089C855C; }
    goto L_089C8548;
L_089C8548:;
    sp = sp + 272;
    return;
L_089C855C:;
    v1 = LD32(a0);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    s0 = a0 + 552;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C857C;
L_089C857C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s1 + 528;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(v0));
    v1 = LD32(s1);
    ST32(s1+528, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C85A8;
L_089C85A8:;
    f7 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(s0+4, FBITS(f0));
    a0 = s1 + 0;
    ST32(s0+8, FBITS(f1));
    ST32(s0+12, FBITS(f2));
    ST32(s0+16, FBITS(f3));
    ST32(s0+20, FBITS(f4));
    ST32(s0+24, FBITS(f5));
    ST32(s0+28, FBITS(f6));
    ST32(s0+32, FBITS(f7));
    f0 = BITSF(LD32(v0));
    v1 = LD32(s1);
    ST32(s1+552, FBITS(f0));
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8604;
L_089C8604:;
    f2 = BITSF(LD32(s0+4));
    f17 = BITSF(LD32(s1+552));
    f15 = BITSF(LD32(s0+8));
    f14 = BITSF(LD32(s0+12));
    f12 = BITSF(LD32(s0+20));
    f11 = BITSF(LD32(s0+24));
    f10 = BITSF(LD32(s0+28));
    v1 = FBITS(f2);
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v0 = FBITS(f17);
    {u32 a_=sp+(96);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v0);}
    {v[56]=BITSF(v1);}
    v0 = FBITS(f15);
    v1 = FBITS(f14);
    {v[57]=BITSF(v0);}
    {u32 a_=sp+(112);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {v[58]=BITSF(v1);}
    v0 = FBITS(f12);
    v1 = FBITS(f11);
    {v[52]=BITSF(v0);}
    v0 = FBITS(f10);
    {v[53]=BITSF(v1);}
    {v[54]=BITSF(v0);}
    {v0=FBITS(v[58]);}
    {v1=FBITS(v[53]);}
    f1 = BITSF(v0);
    f0 = BITSF(v1);
    f16 = BITSF(v1);
    f13 = BITSF(v0);
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[49]=BITSF(v1);}
    {v1=FBITS(v[56]);}
    f0 = BITSF(v1);
    f8 = BITSF(LD32(s0+16));
    {v[50]=BITSF(v0);}
    v0 = FBITS(f0);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v0);}
    {v0=FBITS(v[54]);}
    f0 = BITSF(v0);
    f9 = BITSF(v1);
    f7 = BITSF(v0);
    v1 = FBITS(f8);
    {v0=FBITS(v[57]);}
    {v[49]=BITSF(v1);}
    v1 = FBITS(f0);
    f0 = BITSF(v0);
    f6 = BITSF(LD32(s0+32));
    {v[50]=BITSF(v1);}
    f5 = BITSF(v0);
    v1 = FBITS(f0);
    {v0=FBITS(v[52]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(240);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f2));
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f4 = BITSF(v0);
    {v[32]=BITSF(v1);}
    v0 = FBITS(f6);
    v1 = FBITS(f0);
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[33]=BITSF(v1);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(sp);
    {v[34]=BITSF(v0);}
    {v[20]=BITSF(v1);}
    v0 = LD32(sp+4);
    v1 = LD32(sp+8);
    {v[21]=BITSF(v0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[22]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = s1 + 540;
    {v1=FBITS(v[17]);}
    ST32(sp+16, FBITS(f17));
    ST32(sp+32, FBITS(f8));
    ST32(sp+48, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f5));
    ST32(sp+44, FBITS(f4));
    ST32(sp+20, FBITS(f13));
    ST32(sp+24, FBITS(f16));
    ST32(sp+28, FBITS(f9));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v1);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f3));
    ST32(s1+540, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+4, v1);
    goto L_089C8548;
}

/* 089C8798 */
void func_089C8798(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C8798:;
    sp = sp - 16;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C87C0; }
    goto L_089C87B0;
L_089C87B0:;
    sp = sp + 16;
    return;
L_089C87C0:;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C87D0;
L_089C87D0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s0 + 528;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(v0));
    v1 = LD32(s0);
    ST32(s0+528, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C87FC;
L_089C87FC:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v0 = s0 + 552;
    ST32(s0+552, FBITS(f0));
    ST32(v0+32, FBITS(f8));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    goto L_089C87B0;
}

/* 089C884C */
void func_089C884C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089C884C:;
    f2 = BITSF(LD32(a1+4));
    f17 = BITSF(LD32(a1));
    f14 = BITSF(LD32(a1+8));
    f15 = BITSF(LD32(a1+12));
    f12 = BITSF(LD32(a1+20));
    f11 = BITSF(LD32(a1+24));
    f10 = BITSF(LD32(a1+28));
    v0 = FBITS(f17);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {v[48]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    v0 = FBITS(f2);
    {v[56]=BITSF(v0);}
    v0 = FBITS(f14);
    {v[57]=BITSF(v0);}
    v0 = FBITS(f15);
    {v[58]=BITSF(v0);}
    v0 = FBITS(f12);
    {v[52]=BITSF(v0);}
    v0 = FBITS(f11);
    {v[53]=BITSF(v0);}
    v0 = FBITS(f10);
    {v[54]=BITSF(v0);}
    {v0=FBITS(v[53]);}
    f0 = BITSF(v0);
    f16 = BITSF(v0);
    {v0=FBITS(v[58]);}
    f1 = BITSF(v0);
    f8 = BITSF(LD32(a1+16));
    f13 = BITSF(v0);
    v0 = FBITS(f1);
    {v[49]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[50]=BITSF(v0);}
    {v0=FBITS(v[56]);}
    f0 = BITSF(v0);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f9 = BITSF(v0);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    v0 = FBITS(f0);
    {v[48]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[49]=BITSF(v0);}
    {v0=FBITS(v[54]);}
    f0 = BITSF(v0);
    f7 = BITSF(v0);
    f5 = BITSF(LD32(a1+32));
    v0 = FBITS(f0);
    {v[50]=BITSF(v0);}
    {v0=FBITS(v[57]);}
    f0 = BITSF(v0);
    f6 = BITSF(v0);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    v0 = FBITS(f0);
    {v[32]=BITSF(v0);}
    {v0=FBITS(v[52]);}
    f0 = BITSF(v0);
    sp = sp - 128;
    a2 = a0 + 540;
    v1 = LD32(a0+540);
    f4 = BITSF(v0);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = FBITS(f0);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(v0);}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = FBITS(f5);
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(v0);}
    v1 = LD32(a2+8);
    v0 = LD32(a2+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    ST32(sp+4, FBITS(f2));
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f17));
    v0 = a0 + 552;
    ST32(sp+16, FBITS(f8));
    ST32(sp+32, FBITS(f5));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f4));
    ST32(sp+4, FBITS(f13));
    ST32(sp+8, FBITS(f16));
    ST32(sp+12, FBITS(f9));
    ST32(sp+68, FBITS(f0));
    ST32(sp+52, FBITS(f0));
    ST32(sp+72, FBITS(f3));
    ST32(sp+56, FBITS(f3));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+48, FBITS(f2));
    ST32(a0+540, FBITS(f2));
    {v[112]=BITSF(LD32(a1+(0)));}
    {v[113]=BITSF(LD32(a1+(4)));}
    {v[114]=BITSF(LD32(a1+(8)));}
    {v[116]=BITSF(LD32(a1+(12)));}
    {v[117]=BITSF(LD32(a1+(16)));}
    {v[118]=BITSF(LD32(a1+(20)));}
    {v[120]=BITSF(LD32(a1+(24)));}
    {v[121]=BITSF(LD32(a1+(28)));}
    {v[122]=BITSF(LD32(a1+(32)));}
    {v[96]=BITSF(LD32(a0+(552)));}
    {v[97]=BITSF(LD32(a0+(556)));}
    {v[98]=BITSF(LD32(a0+(560)));}
    {v[100]=BITSF(LD32(a0+(564)));}
    {v[101]=BITSF(LD32(a0+(568)));}
    {v[102]=BITSF(LD32(a0+(572)));}
    {v[104]=BITSF(LD32(a0+(576)));}
    {v[105]=BITSF(LD32(a0+(580)));}
    {v[106]=BITSF(LD32(a0+(584)));}
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
    ST32(a0+552, FBITS(f0));
    f1 = BITSF(LD32(sp+112));
    f0 = BITSF(LD32(sp+84));
    ST32(v0+32, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+88));
    f0 = BITSF(LD32(sp+92));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+96));
    f0 = BITSF(LD32(sp+100));
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+104));
    f0 = BITSF(LD32(sp+108));
    ST32(v0+24, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    sp = sp + 128;
    return;
}

/* 089C8AA4 */
rv_t func_089C8AA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_089C8AA4:;
    v0 = LD32(a0+720);
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C8AFC; }
    goto L_089C8AB4;
L_089C8AB4:;
    a0 = LD32(a0+672);
    cnd_ = a0 == 0;
    f2 = f0;
    if (cnd_) { goto L_089C8AFC; }
    goto L_089C8AC0;
L_089C8AC0:;
    v0 = D_08AEEEB0 - (-4432);
    f0 = BITSF(LD32(a0+120));
    f1 = BITSF(LD32(v0-4432));
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_089C8AFC; }
    goto L_089C8AE0;
L_089C8AE0:;
    v0 = D_08AEEEB4 - (-4428);
    f2 = BITSF(LD32(v0-4428));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_089C8AF8; }
    goto L_089C8AF8;
L_089C8AF8:;
    f0 = f2;
    goto L_089C8AFC;
L_089C8AFC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C8B04 */
rv_t func_089C8B04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C8B04:;
    v0 = LD32(a0+672);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C8B1C; }
    goto L_089C8B10;
L_089C8B10:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x2;
    v1 = v0 < 0x1u;
    goto L_089C8B1C;
L_089C8B1C:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089C8B24 */
rv_t func_089C8B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C8B24:;
    v0 = LD32(a0+672);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C8B3C; }
    goto L_089C8B30;
L_089C8B30:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x4;
    v1 = v0 < 0x1u;
    goto L_089C8B3C;
L_089C8B3C:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089C8B44 */
rv_t func_089C8B44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C8B44:;
    sp = sp - 32;
    f3 = BITSF(0);
    v0 = LD32(a0+672);
    cnd_ = v0 == 0;
    f0 = f3;
    if (cnd_) { goto L_089C8B80; }
    goto L_089C8B5C;
L_089C8B5C:;
    f2 = BITSF(LD32(v0+68));
    a0 = sp + 0;
    a1 = sp + 4;
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    a2 = sp + 8;
    if (cnd_) { goto L_089C8B8C; }
    goto L_089C8B78;
L_089C8B78:;
    v0 = D_08AEEEB8 - (-4424);
    f0 = BITSF(LD32(v0-4424));
    goto L_089C8B80;
L_089C8B80:;
    goto L_089C8B84;
L_089C8B84:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C8B8C:;
    f0 = BITSF(LD32(v0+44));
    v0 = D_08AEEEB8 - (-4424);
    f1 = BITSF(LD32(v0-4424));
    f0 = f0 / f2;
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    f1 = f1 - f0;
    ST32(sp, FBITS(f1));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089C8BB0;
L_089C8BB0:;
    goto L_089C8B84;
}

/* 089C8BB8 */
rv_t func_089C8BB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C8BB8:;
    sp = sp - 32;
    f3 = BITSF(0);
    v0 = LD32(a0+672);
    cnd_ = v0 == 0;
    f0 = f3;
    if (cnd_) { goto L_089C8BF4; }
    goto L_089C8BD0;
L_089C8BD0:;
    f2 = BITSF(LD32(v0+112));
    a0 = sp + 0;
    a1 = sp + 4;
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    a2 = sp + 8;
    if (cnd_) { goto L_089C8C00; }
    goto L_089C8BEC;
L_089C8BEC:;
    v0 = D_08AEEEBC - (-4420);
    f0 = BITSF(LD32(v0-4420));
    goto L_089C8BF4;
L_089C8BF4:;
    goto L_089C8BF8;
L_089C8BF8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C8C00:;
    f0 = BITSF(LD32(v0+108));
    v0 = D_08AEEEBC - (-4420);
    f1 = BITSF(LD32(v0-4420));
    f0 = f0 / f2;
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f0));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089C8C20;
L_089C8C20:;
    goto L_089C8BF8;
}

/* 089C8C28 */
rv_t func_089C8C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C8C28:;
    sp = sp - 16;
    a1 = a0 + 672;
    a2 = LD32(a0+720);
    { u64 r_ = func_089C8C70(a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C8C3C;
L_089C8C3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C8C48 */
rv_t func_089C8C48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C8C48:;
    sp = sp - 16;
    a1 = a0 + 696;
    a2 = LD32(a0+724);
    { u64 r_ = func_089C8C70(a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C8C5C;
L_089C8C5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C8C68 */
rv_t func_089C8C68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C8C68:;
    v0 = LD32(a0+720);
    return (rv_t){ v0, v1, f0 };
}

/* 089C8C70 */
u64 func_089C8C70(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_089C8C70:;
    v0 = LD32(a1);
    t0 = 0 + 0;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_089C8C84; }
    goto L_089C8C80;
L_089C8C80:;
    t1 = LD32(v0+188);
    goto L_089C8C84;
L_089C8C84:;
    cnd_ = a2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089C8CB4; }
    goto L_089C8C8C;
L_089C8C8C:;
    v1 = LD32(a1);
    goto L_089C8C90;
L_089C8C90:;
    a3 = a3 + 1;
    a0 = a3 < a2;
    cnd_ = v1 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_089C8CAC; }
    goto L_089C8CA0;
L_089C8CA0:;
    v0 = LD32(v1+188);
    cnd_ = v0 == t1;
    if (cnd_) { v0 = LD32(v1+84); goto L_089C8CBC; }
    goto L_089C8CAC;
L_089C8CAC:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_089C8C90; }
    goto L_089C8CB4;
L_089C8CB4:;
    v0 = t0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_089C8CBC:;
    t0 = t0 + v0;
    goto L_089C8CAC;
}

/* 089C8CC4 */
rv_t func_089C8CC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_089C8CC4:;
    sp = sp - 240;
    s1 = a2 + 0;
    s0 = a1 + 0;
    a1 = sp + 0;
    v1 = LD32(a0);
    a3 = LD32(v1+276);
    t_ = a3;
    f22 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C8D04;
L_089C8D04:;
    f4 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    v0 = D_08AEEEC4 - (-4412);
    f1 = BITSF(LD32(v0-4412));
    a1 = FBITS(f4);
    v0 = LD32(sp);
    {u32 a_=sp+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[4]=BITSF(v0);}
    a0 = LD32(sp+8);
    {v[5]=BITSF(v1);}
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[6]=BITSF(a0);}
    {v[0]=BITSF(a1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    a1 = FBITS(f2);
    {v[1]=BITSF(a1);}
    a1 = FBITS(f3);
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    fcc = FCMP(f1, f22, 12);
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {a1=FBITS(v[4]);}
    f21 = BITSF(a1);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    f23 = BITSF(a1);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+8, FBITS(f3)); goto L_089C8DA4; }
    goto L_089C8D80;
L_089C8D80:;
    fcc = FCMP(f1, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+8, FBITS(f3)); goto L_089C8DA4; }
    goto L_089C8D90;
L_089C8D90:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = BITSF(FBITS(f2) ^ 0x80000000u); goto L_089C8DD8; }
    goto L_089C8DA0;
L_089C8DA0:;
    ST32(s1+8, FBITS(f3));
    goto L_089C8DA4;
L_089C8DA4:;
    ST32(s1, FBITS(f4));
    ST32(s1+4, FBITS(f2));
    goto L_089C8DAC;
L_089C8DAC:;
    v0 = 1;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_089C8DD8:;
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f5 = f0 * f21;
    a1 = FBITS(f2);
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[5]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v[6]=BITSF(a0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(a1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    v0 = D_08AEEEC8 - (-4408);
    v1 = D_08AEEECC - (-4404);
    f1 = f0 / f5;
    f24 = BITSF(LD32(v0-4408));
    f20 = BITSF(LD32(v1-4404));
    a1 = sp + 52;
    a0 = sp + 48;
    a2 = sp + 56;
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+52, FBITS(f20));
    ST32(sp+56, FBITS(f24));
    ST32(sp+48, FBITS(f1));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089C8E58;
L_089C8E58:;
    f12 = f24 / f22;
    v0 = FBITS(f0);
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {v[4]=1.57079632679f;}
    {v[8]=0.63661977236f;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(v0);
    a1 = FBITS(f0);
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    f1 = f21 * f12;
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    f0 = f1 * f0;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(s0+8)); goto L_089C8FC8; }
    goto L_089C8ECC;
L_089C8ECC:;
    fcc = FCMP(f0, f24, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(s0+8)); goto L_089C8FC8; }
    goto L_089C8EDC;
L_089C8EDC:;
    a1 = FBITS(f0);
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AEEED0 - (-4400);
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f0 + f2;
    f0 = BITSF(LD32(v0-4400));
    f0 = f0 - f1;
    a1 = FBITS(f0);
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEEED4 - (-4396);
    f0 = BITSF(LD32(v0-4396));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f24 / f1; goto L_089C8F64; }
    goto L_089C8F48;
L_089C8F48:;
    v0 = D_08AEEED8 - (-4392);
    f0 = BITSF(LD32(v0-4392));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(s0+8)); goto L_089C8FC8; }
    goto L_089C8F60;
L_089C8F60:;
    f0 = f24 / f1;
    goto L_089C8F64;
L_089C8F64:;
    f2 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0));
    f5 = BITSF(LD32(s0+4));
    f1 = f23 * f12;
    f0 = f3 * f0;
    f3 = BITSF(LD32(sp+8));
    f0 = f0 * f1;
    f1 = BITSF(LD32(sp));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f6 = f6 + f3;
    f4 = f4 + f1;
    f5 = f5 + f2;
    ST32(sp+32, FBITS(f1));
    ST32(s1+8, FBITS(f6));
    ST32(s1+4, FBITS(f5));
    ST32(s1, FBITS(f4));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    goto L_089C8DAC;
L_089C8FC8:;
    f4 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    goto L_089C8DA0;
}

/* 089C8FD4 */
void func_089C8FD4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C8FD4:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a3 & 0xff;
    s0 = a2 & 0xff;
    { u64 r_ = func_089C94AC(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9004;
L_089C9004:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C90A0; }
    goto L_089C900C;
L_089C900C:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_089C90A4; }
    goto L_089C9014;
L_089C9014:;
    a3 = LD32(s2);
    v0 = 11;
    s4 = 9;
    if (s1 == 0) s4 = v0;
    v0 = LD32(a3-12);
    v1 = 0x10000u;
    v1 = v1 | 0x9;
    v0 = s2 + v0;
    if (s0 != 0) s4 = v1;
    v1 = LD32(v0+100);
    cnd_ = v1 == 0;
    a0 = 36;
    if (cnd_) { goto L_089C90A0; }
    goto L_089C9044;
L_089C9044:;
    s1 = v1 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C904C;
L_089C904C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    v0 = D_08AEEEDC - (-4388);
    f12 = BITSF(LD32(v0-4388));
    a1 = 0 + 0;
    func_08810F04(a0, a1, f12);
    goto L_089C9064;
L_089C9064:;
    ST32(s2+816, s0);
    a1 = s3 + 0;
    a0 = s1 + 0;
    a2 = s4 | 0x4;
    t1 = s0 + 0;
    t0 = s3 + 0;
    a3 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9088;
L_089C9088:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089C909C; }
    goto L_089C9094;
L_089C9094:;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C909C;
L_089C909C:;
    goto L_089C90A0;
L_089C90A0:;
    goto L_089C90A4;
L_089C90A4:;
    sp = sp + 32;
    return;
}

/* 089C90BC */
float func_089C90BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C90BC:;
    sp = sp - 32;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_089C94AC(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C90E4;
L_089C90E4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C91AC; }
    goto L_089C90EC;
L_089C90EC:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089C91B0; }
    goto L_089C90F4;
L_089C90F4:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    v0 = 0x10000u;
    if (cnd_) { goto L_089C91B0; }
    goto L_089C910C;
L_089C910C:;
    v1 = LD32(s1+52);
    s3 = 1;
    v0 = v0 | 0x9;
    if (s2 != 0) s3 = v0;
    cnd_ = v1 == 0;
    a3 = s1 + 52;
    if (cnd_) { goto L_089C9150; }
    goto L_089C9124;
L_089C9124:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089C912C;
L_089C912C:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_089C915C; }
    goto L_089C9144;
L_089C9144:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089C912C; }
    goto L_089C9150;
L_089C9150:;
    a0 = LD32(a3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089C91C4; }
    goto L_089C915C;
L_089C915C:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089C9168; }
    goto L_089C9164;
L_089C9164:;
    v0 = LD32(a2);
    goto L_089C9168;
L_089C9168:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089C9178; }
    goto L_089C9170;
L_089C9170:;
    a1 = s0 + 0;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9178;
L_089C9178:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = 0 + 0;
    t0 = s0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9198;
L_089C9198:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C91A8; }
    goto L_089C91A0;
L_089C91A0:;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C91A8;
L_089C91A8:;
    goto L_089C91AC;
L_089C91AC:;
    goto L_089C91B0;
L_089C91B0:;
    sp = sp + 32;
    return f0;
L_089C91C4:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C91D0;
L_089C91D0:;
    a2 = v0 + 0;
    goto L_089C915C;
}

/* 089C91D8 */
rv_t func_089C91D8(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C91D8:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a2 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_089C94AC(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C91F8;
L_089C91F8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C9268; }
    goto L_089C9200;
L_089C9200:;
    cnd_ = s0 == 0;
    if (cnd_) {  goto L_089C926C; }
    goto L_089C9208;
L_089C9208:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 1;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    s1 = LD32(v1+100);
    cnd_ = s1 == 0;
    a0 = s1 + 52;
    if (cnd_) { goto L_089C9268; }
    goto L_089C9228;
L_089C9228:;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9230;
L_089C9230:;
    a2 = 0x10000u;
    a1 = s0 + 0;
    t0 = s0 + 0;
    a2 = a2 | 0x9;
    a3 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089C925C; }
    goto L_089C9258;
L_089C9258:;
    v1 = LD32(v0);
    goto L_089C925C;
L_089C925C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089C9278; }
    goto L_089C9264;
L_089C9264:;
    goto L_089C9268;
L_089C9268:;
    goto L_089C926C;
L_089C926C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C9278:;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9280;
L_089C9280:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089C9264; }
    goto L_089C928C;
L_089C928C:;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9294;
L_089C9294:;
    a0 = s1 + 0;
    { rv_t r_ = func_0880B7A4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C929C;
L_089C929C:;
    goto L_089C9268;
}

/* 089C92A4 */
rv_t func_089C92A4(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C92A4:;
    sp = sp - 16;
    v0 = a1 + 0;
    s1 = a2 + 0;
    a0 = LD32(a1);
    a1 = a2 + 0;
    a2 = 1;
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    a0 = s0 + 52;
    if (cnd_) { goto L_089C9308; }
    goto L_089C92DC;
L_089C92DC:;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C92E4;
L_089C92E4:;
    v1 = 0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C92F8; }
    goto L_089C92F4;
L_089C92F4:;
    v1 = LD32(v0);
    goto L_089C92F8;
L_089C92F8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089C930C; }
    goto L_089C9300;
L_089C9300:;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9308;
L_089C9308:;
    goto L_089C930C;
L_089C930C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C931C */
rv_t func_089C931C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C931C:;
    sp = sp - 16;
    a2 = 1;
    a3 = 0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+100);
    cnd_ = v1 == 0;
    a0 = v1 + 52;
    if (cnd_) { goto L_089C9378; }
    goto L_089C9344;
L_089C9344:;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C934C;
L_089C934C:;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089C935C; }
    goto L_089C9358;
L_089C9358:;
    v1 = LD32(v0);
    goto L_089C935C;
L_089C935C:;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089C9378; }
    goto L_089C9364;
L_089C9364:;
    v1 = LD32(v1);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9374;
L_089C9374:;
    a3 = v0 < 0x1u;
    goto L_089C9378;
L_089C9378:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C9388 */
void func_089C9388(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C9388:;
    sp = sp - 32;
    v0 = a0 + 540;
    s0 = a0 + 0;
    ST32(v0+8, 0);
    ST32(v0+4, 0);
    v1 = LD32(a0+844);
    a1 = LD32(a0);
    ST32(sp, 0);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    v0 = LD32(a1-16);
    ST32(a0+844, v1);
    v0 = a0 + v0;
    v1 = LD_U16(v0+8);
    v0 = 0x8004;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    cnd_ = v1 == v0;
    ST32(a0+540, 0);
    if (cnd_) { goto L_089C93E8; }
    goto L_089C93D8;
L_089C93D8:;
    goto L_089C93DC;
L_089C93DC:;
    sp = sp + 32;
    return;
L_089C93E8:;
    v0 = func_089C5CE4(a0, t1, t2, t3);
    goto L_089C93F0;
L_089C93F0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 1;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089C9400;
L_089C9400:;
    goto L_089C93DC;
}

/* 089C9408 */
rv_t func_089C9408(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C9408:;
    v0 = a0 + 540;
    ST32(v0+8, 0);
    sp = sp - 32;
    ST32(a0+540, 0);
    ST32(v0+4, 0);
    s0 = a0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    f0 = func_089C8410(a0);
    goto L_089C9438;
L_089C9438:;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = s0 + v0;
    a1 = LD_U16(v0+8);
    cnd_ = a1 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C948C; }
    goto L_089C9454;
L_089C9454:;
    v0 = LD32(s0+844);
    goto L_089C9458;
L_089C9458:;
    v1 = LD32(s0+848);
    ST32(s0+504, 0);
    v0 = v0 | 0x200;
    v1 = v1 | 0xc;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+500, 0);
    ST32(s0+496, 0);
    ST32(s0+844, v0);
    ST32(s0+848, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C948C:;
    v0 = func_089C5CBC(a0, 0, 0, 0);
    goto L_089C9494;
L_089C9494:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 1;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089C94A4;
L_089C94A4:;
    v0 = LD32(s0+844);
    goto L_089C9458;
}

/* 089C94AC */
u64 func_089C94AC(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C94AC:;
    sp = sp - 16;
    v0 = D_08B204FC - (1276);
    v1 = LD32(v0+1276);
    cnd_ = v1 == 0;
    t0 = v0 + 1276;
    if (cnd_) { goto L_089C94F0; }
    goto L_089C94C4;
L_089C94C4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089C94CC;
L_089C94CC:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089C94FC; }
    goto L_089C94E4;
L_089C94E4:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089C94CC; }
    goto L_089C94F0;
L_089C94F0:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089C950C; }
    goto L_089C94FC;
L_089C94FC:;
    v0 = 0 < a3;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089C950C:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9514;
L_089C9514:;
    a3 = v0 + 0;
    goto L_089C94FC;
}

/* 089C951C */
rv_t func_089C951C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C951C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9534;
L_089C9534:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C9540 */
rv_t func_089C9540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C9540:;
    v0 = LD32(a0+448);
    return (rv_t){ v0, v1, f0 };
}

/* 089C9548 */
rv_t func_089C9548(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C9548:;
    sp = sp - 32;
    v0 = a0 + 540;
    s0 = a0 + 0;
    a1 = D_08C2A9D8 - (-22056);
    ST32(v0+8, 0);
    a3 = a1 - 22056;
    ST32(v0+4, 0);
    v1 = LD32(a0+848);
    a0 = LD32(a0);
    ST32(sp, 0);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    v0 = LD32(a0-16);
    ST32(s0+848, v1);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    v0 = 999;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    cnd_ = a2 == v0;
    ST32(s0+540, 0);
    if (cnd_) { goto L_089C9604; }
    goto L_089C95A0;
L_089C95A0:;
    v0 = LD32(a3+4);
    v1 = LD32(a1-22056);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C95F0; }
    goto L_089C95C4;
L_089C95C4:;
    a0 = LD32(a1);
    goto L_089C95C8;
L_089C95C8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089C969C; }
    goto L_089C95E0;
L_089C95E0:;
    a1 = LD32(a1+4);
    goto L_089C95E4;
L_089C95E4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089C95C8; }
    goto L_089C95EC;
L_089C95EC:;
    v1 = 0 + 0;
    goto L_089C95F0;
L_089C95F0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089C9604; }
    goto L_089C95F8;
L_089C95F8:;
    v0 = LD32(s0+848);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s0+848, v0);
    goto L_089C9604;
L_089C9604:;
    a0 = s0 + 0;
    { u64 r_ = func_089C5C6C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C960C;
L_089C960C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+844); goto L_089C9624; }
    goto L_089C9614;
L_089C9614:;
    goto L_089C9618;
L_089C9618:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C9624:;
    a1 = 12;
    a0 = 0x8032;
    v0 = v0 | 0x8;
    ST32(s0+844, v0);
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9640;
L_089C9640:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089C9614; }
    goto L_089C9648;
L_089C9648:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    v1 = 0xe7a30000u;
    if (cnd_) { goto L_089C9680; }
    goto L_089C9654;
L_089C9654:;
    a0 = LD32(a2);
    v0 = LD32(a2+8);
    v1 = v1 | 0xa175;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a2+8, v0);
    ST32(a2+4, v1);
    ST32(a2, a0);
    v0 = LD32(a1+28);
    v0 = v0 | 0x1;
    ST32(a1+28, v0);
    goto L_089C9680;
L_089C9680:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9694;
L_089C9694:;
    goto L_089C9618;
L_089C969C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089C95E0; }
    goto L_089C96A8;
L_089C96A8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089C95E4; }
    goto L_089C96B4;
L_089C96B4:;
    goto L_089C95F0;
}

/* 089C96BC */
void func_089C96BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C96BC:;
    sp = sp - 32;
    f0 = BITSF(0);
    a2 = a0 + 0;
    s0 = a1 + 0;
    f3 = BITSF(LD32(a0+304));
    f4 = BITSF(LD32(a0+380));
    f5 = BITSF(LD32(a0+388));
    fcc = FCMP(f3, f0, 12);
    f6 = BITSF(LD32(a0+384));
    f20 = BITSF(LD32(a0+392));
    cnd_ = !fcc;
    f1 = BITSF(LD32(a0+308));
    if (cnd_) { goto L_089C96FC; }
    goto L_089C96F8;
L_089C96F8:;
    f3 = f0;
    goto L_089C96FC;
L_089C96FC:;
    f2 = BITSF(LD32(a2+836));
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_089C9714; }
    goto L_089C9710;
L_089C9710:;
    f0 = f1;
    goto L_089C9714;
L_089C9714:;
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089C9724; }
    goto L_089C9724;
L_089C9724:;
    f1 = f1 - f3;
    v0 = D_08AEEEE0 - (-4384);
    f2 = f0 - f3;
    f0 = BITSF(LD32(v0-4384));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEEEE4 - (-4380);
    if (cnd_) { goto L_089C97C0; }
    goto L_089C9744;
L_089C9744:;
    f2 = f2 / f1;
    goto L_089C9748;
L_089C9748:;
    f0 = BITSF(LD32(v0-4380));
    f1 = f4 * f5;
    f0 = f0 - f2;
    f1 = f1 * f2;
    f0 = f4 * f0;
    f0 = f0 + f1;
    ST32(s0, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = a2 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a2+852); goto L_089C97AC; }
    goto L_089C9780;
L_089C9780:;
    a0 = a2 + 0;
    v0 = func_089CC1C0(a0);
    goto L_089C9788;
L_089C9788:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C979C; }
    goto L_089C9790;
L_089C9790:;
    f0 = BITSF(LD32(s0));
    f0 = f0 * f20;
    ST32(s0, FBITS(f0));
    goto L_089C979C;
L_089C979C:;
    sp = sp + 32;
    return;
L_089C97AC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    f0 = f0 * f6;
    if (cnd_) { goto L_089C9780; }
    goto L_089C97B8;
L_089C97B8:;
    ST32(s0, FBITS(f0));
    goto L_089C9780;
L_089C97C0:;
    f2 = BITSF(LD32(v0-4380));
    goto L_089C9748;
}

/* 089C97C8 */
void func_089C97C8(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
L_089C97C8:;
    f4 = BITSF(LD32(a0+304));
    f0 = BITSF(0);
    f5 = BITSF(LD32(a0+428));
    f1 = BITSF(LD32(a0+432));
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    f3 = BITSF(LD32(a0+308));
    if (cnd_) { goto L_089C97EC; }
    goto L_089C97E8;
L_089C97E8:;
    f4 = f0;
    goto L_089C97EC;
L_089C97EC:;
    f2 = BITSF(LD32(a0+836));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = BITSF(FBITS(f2) ^ 0x80000000u); goto L_089C9800; }
    goto L_089C9800;
L_089C9800:;
    fcc = FCMP(f2, f3, 14);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_089C9814; }
    goto L_089C9810;
L_089C9810:;
    f0 = f3;
    goto L_089C9814;
L_089C9814:;
    fcc = FCMP(f4, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f4; goto L_089C9824; }
    goto L_089C9824;
L_089C9824:;
    f3 = f3 - f4;
    v0 = D_08AEEEE8 - (-4376);
    f2 = f0 - f4;
    f0 = BITSF(LD32(v0-4376));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    v0 = D_08AEEEEC - (-4372);
    if (cnd_) { goto L_089C9868; }
    goto L_089C9844;
L_089C9844:;
    f2 = f2 / f3;
    goto L_089C9848;
L_089C9848:;
    f0 = BITSF(LD32(v0-4372));
    f1 = f1 * f5;
    f0 = f0 - f2;
    f1 = f1 * f2;
    f0 = f5 * f0;
    f0 = f0 + f1;
    ST32(a1, FBITS(f0));
    return;
L_089C9868:;
    f2 = BITSF(LD32(v0-4372));
    goto L_089C9848;
}

/* 089C9870 */
void func_089C9870(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9870:;
    v0 = 1;
    ST8(a0+621, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089C5E34(a0, t1, t2, t3);
    goto L_089C9890;
L_089C9890:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C98B4; }
    goto L_089C9898;
L_089C9898:;
    v0 = (u32)-1;
    ST32(s0+624, v0);
    goto L_089C98A0;
L_089C98A0:;
    goto L_089C98A4;
L_089C98A4:;
    goto L_089C98A8;
L_089C98A8:;
    sp = sp + 16;
    return;
L_089C98B4:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C98BC;
L_089C98BC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089C98A0; }
    goto L_089C98C4;
L_089C98C4:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C98D4;
L_089C98D4:;
    f12 = BITSF(LD32(s1+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C98E0;
L_089C98E0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C98A4; }
    goto L_089C98E8;
L_089C98E8:;
    v0 = LD_U8(s0+620);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089C98A8; }
    goto L_089C98F4;
L_089C98F4:;
    a0 = s0 + 0;
    v0 = func_089CC1C0(a0);
    goto L_089C98FC;
L_089C98FC:;
    cnd_ = v0 != 0;
    v0 = D_08B309FC - (2556);
    if (cnd_) { goto L_089C993C; }
    goto L_089C9904;
L_089C9904:;
    a1 = LD32(v0+2556);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089C9924; }
    goto L_089C9910;
L_089C9910:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_089C9924;
L_089C9924:;
    v1 = D_08B30A04 - (2564);
    v0 = LD32(v1+2564);
    v0 = v0 - a0;
    v0 = (s32)v0 < 7;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089C98A4; }
    goto L_089C993C;
L_089C993C:;
    v0 = 1;
    v1 = LD32(s0);
    ST8(s0+620, v0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9954;
L_089C9954:;
    f12 = BITSF(0);
    a0 = s1 + 0;
    a1 = s0 + 624;
    a2 = v0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9968;
L_089C9968:;
    a0 = s0 + 0;
    func_089C9978(a0, 0, 0, 0);
    goto L_089C9970;
L_089C9970:;
    goto L_089C98A4;
}

/* 089C9978 */
void func_089C9978(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C9978:;
    sp = sp - 32;
    v0 = LD_U8(a0+621);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089C99EC; }
    goto L_089C9994;
L_089C9994:;
    v0 = LD_U8(a0+620);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C9BB4; }
    goto L_089C99A0;
L_089C99A0:;
    v1 = LD32(s1+624);
    goto L_089C99A4;
L_089C99A4:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089C99F0; }
    goto L_089C99B0;
L_089C99B0:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C99C0;
L_089C99C0:;
    a0 = LD32(s1+624);
    s0 = v0 + 0;
    f0 = func_088E0018(a0);
    goto L_089C99CC;
L_089C99CC:;
    f12 = f0;
    a0 = s0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C99D8;
L_089C99D8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C9A14; }
    goto L_089C99E0;
L_089C99E0:;
    v0 = LD_U8(s1+620);
    goto L_089C99E4;
L_089C99E4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C9A00; }
    goto L_089C99EC;
L_089C99EC:;
    goto L_089C99F0;
L_089C99F0:;
    sp = sp + 32;
    return;
L_089C9A00:;
    a0 = s1 + 0;
    func_089C9BC4(a0);
    goto L_089C9A08;
L_089C9A08:;
    v0 = 1;
    ST8(s1+621, v0);
    goto L_089C99EC;
L_089C9A14:;
    a0 = s1 + 0;
    v0 = func_089CC1C0(a0);
    goto L_089C9A1C;
L_089C9A1C:;
    cnd_ = v0 != 0;
    v0 = D_08B309FC - (2556);
    if (cnd_) { goto L_089C9A5C; }
    goto L_089C9A24;
L_089C9A24:;
    a1 = LD32(v0+2556);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089C9A44; }
    goto L_089C9A30;
L_089C9A30:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_089C9A44;
L_089C9A44:;
    v1 = D_08B30A04 - (2564);
    v0 = LD32(v1+2564);
    v0 = v0 - a0;
    v0 = (s32)v0 < 6;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s1+620); goto L_089C99E4; }
    goto L_089C9A5C;
L_089C9A5C:;
    a0 = LD32(s1+624);
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9A64;
L_089C9A64:;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_089C9A74; }
    goto L_089C9A6C;
L_089C9A6C:;
    ST8(s1+620, 0);
    goto L_089C99EC;
L_089C9A74:;
    a0 = s1 + 0;
    func_089C96BC(a0, a1);
    goto L_089C9A7C;
L_089C9A7C:;
    a1 = sp + 4;
    a0 = s1 + 0;
    func_089C97C8(a0, a1);
    goto L_089C9A88;
L_089C9A88:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9A98;
L_089C9A98:;
    a0 = LD32(s1+624);
    a1 = v0 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9AA4;
L_089C9AA4:;
    a0 = LD32(s1+624);
    f0 = func_088E00A8(a0);
    goto L_089C9AAC;
L_089C9AAC:;
    f2 = BITSF(LD32(sp));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f12 = f0;
    if (cnd_) { goto L_089C9AEC; }
    goto L_089C9AC0;
L_089C9AC0:;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08AEEEF0 - (-4368);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1-4368));
    f0 = f0 * f1;
    f12 = f12 + f0;
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089C9B20; }
    goto L_089C9AE8;
L_089C9AE8:;
    f12 = f2;
    goto L_089C9AEC;
L_089C9AEC:;
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089C9B20; }
    goto L_089C9AFC;
L_089C9AFC:;
    v1 = D_08AEEEF0 - (-4368);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1-4368));
    f0 = f0 * f1;
    f12 = f12 - f0;
    fcc = FCMP(f12, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f2; goto L_089C9B20; }
    goto L_089C9B20;
L_089C9B20:;
    a0 = LD32(s1+624);
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9B28;
L_089C9B28:;
    a0 = LD32(s1+624);
    f0 = func_088E0128(a0);
    goto L_089C9B30;
L_089C9B30:;
    f2 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f12 = f0;
    if (cnd_) { goto L_089C9B70; }
    goto L_089C9B44;
L_089C9B44:;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08AEEEF0 - (-4368);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1-4368));
    f0 = f0 * f1;
    f12 = f12 + f0;
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089C9BA4; }
    goto L_089C9B6C;
L_089C9B6C:;
    f12 = f2;
    goto L_089C9B70;
L_089C9B70:;
    fcc = FCMP(f2, f12, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089C9BA4; }
    goto L_089C9B80;
L_089C9B80:;
    v1 = D_08AEEEF0 - (-4368);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(v1-4368));
    f0 = f0 * f1;
    f12 = f12 - f0;
    fcc = FCMP(f12, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f2; goto L_089C9BA4; }
    goto L_089C9BA4;
L_089C9BA4:;
    a0 = LD32(s1+624);
    func_088E00E0(a0, f12);
    goto L_089C9BAC;
L_089C9BAC:;
    goto L_089C99F0;
L_089C9BB4:;
    func_089C9870(a0, t1, t2, t3);
    goto L_089C9BBC;
L_089C9BBC:;
    v1 = LD32(s1+624);
    goto L_089C99A4;
}

/* 089C9BC4 */
void func_089C9BC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9BC4:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = (u32)-1;
    a1 = LD32(v1+624);
    a0 = a0 + 624;
    ST8(v1+621, 0);
    cnd_ = a1 == v0;
    ST8(v1+620, 0);
    if (cnd_) { goto L_089C9BF0; }
    goto L_089C9BE8;
L_089C9BE8:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9BF0;
L_089C9BF0:;
    sp = sp + 16;
    return;
}

/* 089C9BFC */
void func_089C9BFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9BFC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_089C9CD8(a0);
    goto L_089C9C18;
L_089C9C18:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_089C5EFC(a0, a1, 0, 0, 0);
    goto L_089C9C24;
L_089C9C24:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089C9C44; }
    goto L_089C9C30;
L_089C9C30:;
    goto L_089C9C34;
L_089C9C34:;
    sp = sp + 16;
    return;
L_089C9C44:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9C4C;
L_089C9C4C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089C9C30; }
    goto L_089C9C58;
L_089C9C58:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9C68;
L_089C9C68:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9C74;
L_089C9C74:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C9C34; }
    goto L_089C9C7C;
L_089C9C7C:;
    v0 = D_08B309FC - (2556);
    t1 = LD32(v0+2556);
    v0 = D_08B30A04 - (2564);
    a1 = s1 + 636;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    cnd_ = t1 == 0;
    t0 = LD32(v0+2564);
    if (cnd_) { goto L_089C9CB4; }
    goto L_089C9CA0;
L_089C9CA0:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a3 = LD32(t1+12);
    v0 = LD32(v1+12);
    a3 = a3 + v0;
    goto L_089C9CB4;
L_089C9CB4:;
    v0 = t0 - a3;
    v0 = (s32)v0 < 7;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089C9C34; }
    goto L_089C9CC4;
L_089C9CC4:;
    v0 = D_08AEEEF4 - (-4364);
    f12 = BITSF(LD32(v0-4364));
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9CD0;
L_089C9CD0:;
    goto L_089C9C34;
}

/* 089C9CD8 */
void func_089C9CD8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9CD8:;
    sp = sp - 16;
    v1 = a0 + 636;
    v0 = (u32)-1;
    a1 = LD32(a0+636);
    cnd_ = a1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089C9CFC; }
    goto L_089C9CF4;
L_089C9CF4:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9CFC;
L_089C9CFC:;
    sp = sp + 16;
    return;
}

/* 089C9D08 */
void func_089C9D08(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9D08:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C9F18(a0);
    goto L_089C9D20;
L_089C9D20:;
    a0 = s0 + 0;
    func_089C9DF8(a0);
    goto L_089C9D28;
L_089C9D28:;
    a0 = s0 + 0;
    v0 = func_089C5E5C(a0, 0, 0, 0);
    goto L_089C9D30;
L_089C9D30:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089C9D50; }
    goto L_089C9D3C;
L_089C9D3C:;
    goto L_089C9D40;
L_089C9D40:;
    sp = sp + 16;
    return;
L_089C9D50:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9D58;
L_089C9D58:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C9D3C; }
    goto L_089C9D64;
L_089C9D64:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9D74;
L_089C9D74:;
    f12 = BITSF(LD32(s1+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9D80;
L_089C9D80:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C9D40; }
    goto L_089C9D88;
L_089C9D88:;
    v0 = D_08B309FC - (2556);
    a2 = LD32(v0+2556);
    v0 = D_08B30A04 - (2564);
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = a2 == 0;
    a3 = LD32(v0+2564);
    if (cnd_) { goto L_089C9DB8; }
    goto L_089C9DA4;
L_089C9DA4:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a1 = LD32(a2+12);
    v0 = LD32(v1+12);
    a1 = a1 + v0;
    goto L_089C9DB8;
L_089C9DB8:;
    v0 = a3 - a1;
    v0 = (s32)v0 < 7;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089C9D40; }
    goto L_089C9DC8;
L_089C9DC8:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9DD8;
L_089C9DD8:;
    a2 = v0 + 0;
    v0 = D_08AEEEF8 - (-4360);
    f12 = BITSF(LD32(v0-4360));
    a1 = s0 + 628;
    a0 = s1 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9DF0;
L_089C9DF0:;
    goto L_089C9D40;
}

/* 089C9DF8 */
void func_089C9DF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9DF8:;
    sp = sp - 16;
    v1 = a0 + 628;
    v0 = (u32)-1;
    a1 = LD32(a0+628);
    cnd_ = a1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089C9E1C; }
    goto L_089C9E14;
L_089C9E14:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9E1C;
L_089C9E1C:;
    sp = sp + 16;
    return;
}

/* 089C9E28 */
void func_089C9E28(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9E28:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C9F18(a0);
    goto L_089C9E40;
L_089C9E40:;
    a0 = s0 + 0;
    func_089C9DF8(a0);
    goto L_089C9E48;
L_089C9E48:;
    a0 = s0 + 0;
    v0 = func_089C5E84(a0, 0, 0, 0);
    goto L_089C9E50;
L_089C9E50:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089C9E70; }
    goto L_089C9E5C;
L_089C9E5C:;
    goto L_089C9E60;
L_089C9E60:;
    sp = sp + 16;
    return;
L_089C9E70:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C9E78;
L_089C9E78:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089C9E5C; }
    goto L_089C9E84;
L_089C9E84:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9E94;
L_089C9E94:;
    f12 = BITSF(LD32(s1+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9EA0;
L_089C9EA0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C9E60; }
    goto L_089C9EA8;
L_089C9EA8:;
    v0 = D_08B309FC - (2556);
    a2 = LD32(v0+2556);
    v0 = D_08B30A04 - (2564);
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = a2 == 0;
    a3 = LD32(v0+2564);
    if (cnd_) { goto L_089C9ED8; }
    goto L_089C9EC4;
L_089C9EC4:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a1 = LD32(a2+12);
    v0 = LD32(v1+12);
    a1 = a1 + v0;
    goto L_089C9ED8;
L_089C9ED8:;
    v0 = a3 - a1;
    v0 = (s32)v0 < 7;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089C9E60; }
    goto L_089C9EE8;
L_089C9EE8:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9EF8;
L_089C9EF8:;
    a2 = v0 + 0;
    v0 = D_08AEEEFC - (-4356);
    f12 = BITSF(LD32(v0-4356));
    a1 = s0 + 632;
    a0 = s1 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9F10;
L_089C9F10:;
    goto L_089C9E60;
}

/* 089C9F18 */
void func_089C9F18(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9F18:;
    sp = sp - 16;
    v1 = a0 + 632;
    v0 = (u32)-1;
    a1 = LD32(a0+632);
    cnd_ = a1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089C9F3C; }
    goto L_089C9F34;
L_089C9F34:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9F3C;
L_089C9F3C:;
    sp = sp + 16;
    return;
}

/* 089C9F48 */
void func_089C9F48(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C9F48:;
    sp = sp - 16;
    v0 = LD_U8(a0+669);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C9FA0; }
    goto L_089C9F60;
L_089C9F60:;
    v1 = LD32(a0+640);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089C9FA0; }
    goto L_089C9F70;
L_089C9F70:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+664));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(a0+664, FBITS(f0));
    if (cnd_) { goto L_089C9F94; }
    goto L_089C9F90;
L_089C9F90:;
    ST32(a0+664, FBITS(f2));
    goto L_089C9F94;
L_089C9F94:;
    a0 = LD32(s0+640);
    f12 = BITSF(LD32(s0+664));
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9FA0;
L_089C9FA0:;
    v0 = LD_U8(s0+668);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C9FF0; }
    goto L_089C9FAC;
L_089C9FAC:;
    v1 = LD32(s0+644);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089C9FF0; }
    goto L_089C9FBC;
L_089C9FBC:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+660));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(s0+660, FBITS(f0));
    if (cnd_) { goto L_089C9FE0; }
    goto L_089C9FDC;
L_089C9FDC:;
    ST32(s0+660, FBITS(f2));
    goto L_089C9FE0;
L_089C9FE0:;
    f12 = BITSF(LD32(s0+664));
    a0 = LD32(s0+644);
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C9FEC;
L_089C9FEC:;
    goto L_089C9FF0;
L_089C9FF0:;
    sp = sp + 16;
    return;
}

/* 089C9FFC */
void func_089C9FFC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C9FFC:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_089C5EAC(a0, t1, t2, t3);
    goto L_089CA01C;
L_089CA01C:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089CA044; }
    goto L_089CA028;
L_089CA028:;
    sp = sp + 32;
    return;
L_089CA044:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CA04C;
L_089CA04C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089CA028; }
    goto L_089CA054;
L_089CA054:;
    v0 = LD_U8(s0+656);
    v0 = v0 ^ 0x1;
    v0 = 0 < v0;
    cnd_ = v0 == 0;
    ST8(s0+656, v0);
    if (cnd_) { goto L_089CA0B0; }
    goto L_089CA068;
L_089CA068:;
    v1 = LD32(s0+640);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s1 = s0 + 640;
    if (cnd_) { goto L_089CA080; }
    goto L_089CA078;
L_089CA078:;
    a0 = s1 + 0;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA080;
L_089CA080:;
    v0 = D_08AEEF00 - (-4352);
    f20 = BITSF(LD32(v0-4352));
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    f12 = f20;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA09C;
L_089CA09C:;
    v0 = 1;
    ST32(s0+660, FBITS(f20));
    ST8(s0+668, v0);
    ST8(s0+669, 0);
    goto L_089CA028;
L_089CA0B0:;
    v1 = LD32(s0+644);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s1 = s0 + 644;
    if (cnd_) { goto L_089CA0C8; }
    goto L_089CA0C0;
L_089CA0C0:;
    a0 = s1 + 0;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA0C8;
L_089CA0C8:;
    v0 = D_08AEEF00 - (-4352);
    f20 = BITSF(LD32(v0-4352));
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    f12 = f20;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA0E4;
L_089CA0E4:;
    v0 = 1;
    ST32(s0+664, FBITS(f20));
    ST8(s0+669, v0);
    ST8(s0+668, 0);
    goto L_089CA028;
}

/* 089CA0F8 */
void func_089CA0F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CA0F8:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+640);
    cnd_ = v0 == s1;
    a0 = a0 + 640;
    if (cnd_) { goto L_089CA124; }
    goto L_089CA11C;
L_089CA11C:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA124;
L_089CA124:;
    v0 = LD32(s0+644);
    cnd_ = v0 == s1;
    a0 = s0 + 644;
    if (cnd_) { goto L_089CA138; }
    goto L_089CA130;
L_089CA130:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA138;
L_089CA138:;
    sp = sp + 16;
    return;
}

/* 089CA14C */
rv_t func_089CA14C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CA14C:;
    sp = sp - 32;
    s1 = a2 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+104);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA174;
L_089CA174:;
    s2 = v0 + 0;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = sp + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA194;
L_089CA194:;
    f3 = BITSF(LD32(s1));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v0 = s2 + 0;
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(s1, FBITS(f3));
    ST32(s1+8, FBITS(f2));
    ST32(s1+4, FBITS(f4));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089CA1E0 */
rv_t func_089CA1E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_089CA1E0:;
    sp = sp - 256;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a3 + 0;
    s0 = a2 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_089CA37C; }
    goto L_089CA218;
L_089CA218:;
    cnd_ = a3 == 0;
    v0 = D_08AEEF04 - (-4348);
    if (cnd_) { goto L_089CA238; }
    goto L_089CA220;
L_089CA220:;
    f20 = BITSF(LD32(a3+60));
    f0 = BITSF(LD32(v0-4348));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_089CA244; }
    goto L_089CA238;
L_089CA238:;
    v0 = D_08AEEF08 - (-4344);
    f20 = BITSF(LD32(v0-4344));
    v0 = LD32(s0);
    goto L_089CA244;
L_089CA244:;
    f12 = BITSF(0);
    a2 = 0 + 0;
    v1 = LD32(v0+56);
    a0 = s0 + 0;
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA25C;
L_089CA25C:;
    a1 = LD32(s0);
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    a0 = LD32(a1-12);
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    a0 = s0 + a0;
    a2 = LD32(a0);
    f0 = BITSF(LD32(v1+4));
    ST32(sp+16, FBITS(f1));
    a1 = sp + 16;
    v0 = LD32(a2+20);
    ST32(sp+20, FBITS(f0));
    t_ = v0;
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA298;
L_089CA298:;
    v1 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v1-31328));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp));
    f6 = f5 + f5;
    f7 = f4 + f4;
    f8 = f3 + f3;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 + f6;
    f1 = f1 + f7;
    f0 = f0 + f8;
    a0 = sp + 32;
    a1 = s1 + 0;
    a2 = 1;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+56, FBITS(f3));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CA310;
L_089CA310:;
    a1 = sp + 48;
    f0 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+36));
    v1 = LD32(s0);
    f12 = f20;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp+48, FBITS(f2));
    a0 = s0 + 0;
    f1 = f1 - f0;
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f1));
    v0 = LD32(v1+72);
    t_ = v0;
    a2 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA35C;
L_089CA35C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CA714; }
    goto L_089CA364;
L_089CA364:;
    v0 = LD_U8(s2+194);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CA380; }
    goto L_089CA370;
L_089CA370:;
    v0 = LD_U8(s2+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CA3A4; }
    goto L_089CA37C;
L_089CA37C:;
    goto L_089CA380;
L_089CA380:;
    sp = sp + 256;
    return (rv_t){ v0, v1, f0 };
L_089CA3A4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA3AC;
L_089CA3AC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CA380; }
    goto L_089CA3B4;
L_089CA3B4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA3BC;
L_089CA3BC:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    s1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_089CA37C; }
    goto L_089CA3C8;
L_089CA3C8:;
    v1 = LD32(s1+23232);
    s4 = s1 + 23232;
    a2 = LD32(s4+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    a1 = v1 >> 1;
    v0 = 10;
    { u32 x_ = a1, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = a2 + v1;
    ST32(s4+4, a2);
    a0 = hi;
    a0 = (s32)a0 < 8;
    cnd_ = a0 == 0;
    ST32(s1+23232, v1);
    if (cnd_) { goto L_089CA37C; }
    goto L_089CA408;
L_089CA408:;
    v1 = LD32(s2);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA418;
L_089CA418:;
    v1 = LD32(s2);
    f21 = BITSF(LD32(v0+4));
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA42C;
L_089CA42C:;
    v1 = LD32(s2);
    f20 = BITSF(LD32(v0+16));
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA440;
L_089CA440:;
    f6 = BITSF(LD32(v0+28));
    v1 = FBITS(f21);
    v0 = FBITS(f20);
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v1);}
    v1 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v1=FBITS(v[8]);}
    {v0=FBITS(v[10]);}
    f1 = BITSF(v1);
    f5 = BITSF(v0);
    f4 = BITSF(v1);
    {v1=FBITS(v[9]);}
    f0 = BITSF(v1);
    v0 = FBITS(f1);
    f3 = BITSF(v1);
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = FBITS(f5);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f21));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+36, FBITS(f20));
    ST32(sp+40, FBITS(f6));
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f5));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f5));
    if (cnd_) { goto L_089CA530; }
    goto L_089CA4F8;
L_089CA4F8:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f3));
    goto L_089CA530;
L_089CA530:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA538;
L_089CA538:;
    v1 = LD32(s1+23232);
    a0 = LD32(s4+4);
    a1 = LD32(v0+16);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    a0 = a0 + v1;
    v0 = (v1 >> 1) & 0x1;
    ST32(s4+4, a0);
    a0 = a1 + 4;
    cnd_ = v0 != 0;
    ST32(s1+23232, v1);
    if (cnd_) { goto L_089CA640; }
    goto L_089CA56C;
L_089CA56C:;
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(a0+8));
    f8 = BITSF(LD32(a0+4));
    f9 = BITSF(LD32(a0+12));
    f10 = BITSF(LD32(a0+20));
    f8 = f8 - f1;
    f9 = f9 - f0;
    f10 = f10 - f2;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f8);
    v1 = FBITS(f9);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f10);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08AEEF0C - (-4340);
    f0 = BITSF(LD32(v0-4340));
    f5 = BITSF(LD32(sp+72));
    f3 = BITSF(LD32(sp+64));
    f2 = BITSF(LD32(sp+68));
    v0 = D_08AEEF10 - (-4336);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    f4 = BITSF(LD32(v0-4336));
    f6 = BITSF(LD32(s3));
    f1 = f1 * f0;
    f7 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    ST32(sp+112, FBITS(f8));
    f5 = f5 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(sp+116, FBITS(f9));
    f11 = f5 * f4;
    f1 = f3 * f4;
    f4 = f2 * f4;
    f0 = f0 + f11;
    f6 = f6 + f1;
    f7 = f7 + f4;
    ST32(s3+8, FBITS(f0));
    ST32(s3, FBITS(f6));
    ST32(s3+4, FBITS(f7));
    ST32(sp+120, FBITS(f10));
    ST32(sp+96, FBITS(f3));
    ST32(sp+100, FBITS(f2));
    ST32(sp+104, FBITS(f5));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f11));
    goto L_089CA37C;
L_089CA640:;
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(a0+8));
    f8 = BITSF(LD32(a0+4));
    f9 = BITSF(LD32(a0+12));
    f10 = BITSF(LD32(a0+20));
    f8 = f8 - f1;
    f9 = f9 - f0;
    f10 = f10 - f2;
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f8);
    v1 = FBITS(f9);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f10);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08AEEF0C - (-4340);
    f0 = BITSF(LD32(v0-4340));
    f5 = BITSF(LD32(sp+72));
    f3 = BITSF(LD32(sp+64));
    f2 = BITSF(LD32(sp+68));
    v0 = D_08AEEF10 - (-4336);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    f4 = BITSF(LD32(v0-4336));
    f6 = BITSF(LD32(s3));
    f1 = f1 * f0;
    f7 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    ST32(sp+80, FBITS(f8));
    f5 = f5 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(sp+84, FBITS(f9));
    f11 = f5 * f4;
    f1 = f3 * f4;
    f4 = f2 * f4;
    f0 = f0 - f11;
    f6 = f6 - f1;
    f7 = f7 - f4;
    ST32(s3+8, FBITS(f0));
    ST32(s3, FBITS(f6));
    ST32(s3+4, FBITS(f7));
    ST32(sp+88, FBITS(f10));
    ST32(sp+96, FBITS(f3));
    ST32(sp+100, FBITS(f2));
    ST32(sp+104, FBITS(f5));
    ST32(sp+112, FBITS(f1));
    ST32(sp+116, FBITS(f4));
    ST32(sp+120, FBITS(f11));
    goto L_089CA37C;
L_089CA714:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = s3 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA72C;
L_089CA72C:;
    goto L_089CA380;
}

/* 089CA734 */
void func_089CA734(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_089CA734:;
    sp = sp - 352;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CA77C; }
    goto L_089CA75C;
L_089CA75C:;
    goto L_089CA760;
L_089CA760:;
    sp = sp + 352;
    return;
L_089CA77C:;
    v0 = LD32(a0+844);
    v1 = LD32(a0);
    s1 = 999;
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(a0+844, v0);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+268);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA7A8;
L_089CA7A8:;
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089CA760; }
    goto L_089CA7B0;
L_089CA7B0:;
    v1 = LD32(s0);
    v0 = LD32(v1+268);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA7C0;
L_089CA7C0:;
    a2 = v0 + 0;
    v1 = D_08C2C200 - (-15872);
    v0 = v1 - 15872;
    {u32 a_=sp+(256);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = a2 == s1;
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089CA75C; }
    goto L_089CA7E0;
L_089CA7E0:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089CA830; }
    goto L_089CA804;
L_089CA804:;
    a0 = LD32(a1);
    goto L_089CA808;
L_089CA808:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089CAB58; }
    goto L_089CA820;
L_089CA820:;
    a1 = LD32(a1+4);
    goto L_089CA824;
L_089CA824:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089CA808; }
    goto L_089CA82C;
L_089CA82C:;
    s1 = 0 + 0;
    goto L_089CA830;
L_089CA830:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089CA760; }
    goto L_089CA838;
L_089CA838:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    v0 = LD32(v1+228);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    t_ = v0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA858;
L_089CA858:;
    s2 = v0 + 0;
    {u32 a_=sp+(288);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089CA75C; }
    goto L_089CA868;
L_089CA868:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 1;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CA880;
L_089CA880:;
    v0 = LD32(s1);
    f21 = BITSF(0);
    a1 = sp + 16;
    v1 = LD32(v0+56);
    a0 = s1 + 0;
    f12 = f21;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA8A0;
L_089CA8A0:;
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+4));
    a0 = s1 + 0;
    a1 = sp + 32;
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+8));
    ST32(sp+32, FBITS(f3));
    a2 = sp + 48;
    f2 = f2 - f0;
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1+72);
    t_ = v0;
    f12 = BITSF(LD32(s2+60));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA8EC;
L_089CA8EC:;
    f1 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+52));
    {u32 a_=sp+(256);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    f3 = f1 - f0;
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+56));
    {u32 a_=sp+(272);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    ST32(sp+48, FBITS(f3));
    {u32 a_=sp+(288);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    f1 = f1 - f0;
    ST32(sp+52, FBITS(f2));
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    ST32(sp+56, FBITS(f1));
    if (cnd_) { goto L_089CA75C; }
    goto L_089CA930;
L_089CA930:;
    v0 = FBITS(f3);
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    v0 = D_08AEEF14 - (-4332);
    if (cnd_) { goto L_089CA9A8; }
    goto L_089CA968;
L_089CA968:;
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
    v0 = D_08AEEF14 - (-4332);
    goto L_089CA9A8;
L_089CA9A8:;
    v1 = LD32(s0);
    f20 = BITSF(LD32(v0-4332));
    ST32(sp+84, FBITS(f21));
    a0 = s0 + 0;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+92);
    ST32(sp+80, FBITS(f21));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    ST32(sp+88, FBITS(f20));
    t_ = v0;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CA9D8;
L_089CA9D8:;
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(144);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(208);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(176);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+80);
    v0 = LD32(sp+84);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+88);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[22]=BITSF(v1);}
    {v[24]=BITSF(v0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    v0 = LD32(sp+56);
    v1 = LD32(sp+52);
    {v[25]=BITSF(v1);}
    {v[26]=BITSF(v0);}
    {v0=FBITS(v[18]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    a0 = sp + 112;
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[24]=sum;}
    {v0=FBITS(v[24]);}
    ST32(sp+112, v0);
    v0 = D_08AEEF18 - (-4328);
    a1 = sp + 116;
    f0 = BITSF(LD32(v0-4328));
    a2 = sp + 120;
    ST32(sp+100, FBITS(f2));
    ST32(sp+68, FBITS(f2));
    ST32(sp+116, FBITS(f0));
    ST32(sp+120, FBITS(f20));
    ST32(sp+96, FBITS(f3));
    ST32(sp+104, FBITS(f4));
    ST32(sp+64, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CAAFC;
L_089CAAFC:;
    v0 = D_08AEEF1C - (-4324);
    f1 = BITSF(LD32(s0+400));
    f2 = BITSF(LD32(v0-4324));
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+112, FBITS(f0));
    f1 = f1 * f2;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089CA760; }
    goto L_089CAB48;
L_089CAB48:;
    v0 = LD32(s0+844);
    v0 = v0 | 0x40;
    ST32(s0+844, v0);
    goto L_089CA760;
L_089CAB58:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089CA820; }
    goto L_089CAB64;
L_089CAB64:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089CA824; }
    goto L_089CAB70;
L_089CAB70:;
    goto L_089CA830;
}

/* 089CAB78 */
rv_t func_089CAB78(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CAB78:;
    sp = sp - 32;
    v0 = LD32(a0);
    v1 = LD32(v0+344);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAB98;
L_089CAB98:;
    a0 = s0 + 0;
    f20 = f0;
    { rv_t r_ = func_089C66C4(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CABA4;
L_089CABA4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089CABB8; }
    goto L_089CABB4;
L_089CABB4:;
    v0 = 0 + 0;
    goto L_089CABB8;
L_089CABB8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089CABCC */
void func_089CABCC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CABCC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089C66C4(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CABE0;
L_089CABE0:;
    f12 = f0;
    a0 = s0 + 0;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CABEC;
L_089CABEC:;
    sp = sp + 16;
    return;
}

/* 089CABFC */
u32 func_089CABFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CABFC:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+344);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAC18;
L_089CAC18:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f2 = BITSF(LD32(s0+404));
    f1 = f1 * f2;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089CAC3C; }
    goto L_089CAC38;
L_089CAC38:;
    v0 = 0 + 0;
    goto L_089CAC3C;
L_089CAC3C:;
    sp = sp + 16;
    return v0;
}

/* 089CAC4C */
void func_089CAC4C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CAC4C:;
    sp = sp - 16;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(a0+404));
    f12 = BITSF(LD32(v0-31328));
    f12 = f12 * f0;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAC68;
L_089CAC68:;
    sp = sp + 16;
    return;
}

/* 089CAC74 */
rv_t func_089CAC74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089CAC74:;
    v0 = LD32(a0+844);
    f0 = BITSF(0);
    v0 = v0 & 0x100;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+168)); goto L_089CAC88; }
    goto L_089CAC88;
L_089CAC88:;
    return (rv_t){ v0, v1, f0 };
}

/* 089CAC90 */
rv_t func_089CAC90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_089CAC90:;
    sp = sp - 224;
    s1 = a1 + 0;
    a1 = a2 + 0;
    v0 = LD32(a0+844);
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CACE8; }
    goto L_089CACB8;
L_089CACB8:;
    v0 = a0 + 748;
    f0 = BITSF(LD32(a0+748));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(s1, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_089CACD4;
L_089CACD4:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_089CACE8:;
    a0 = sp + 16;
    a2 = 1;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CAD04;
L_089CAD04:;
    v0 = D_08AEEF20 - (-4320);
    v1 = LD32(s0);
    f0 = BITSF(LD32(v0-4320));
    ST32(sp+48, 0);
    a0 = s0 + 0;
    ST32(sp+56, FBITS(f0));
    v0 = LD32(v1+92);
    t_ = v0;
    ST32(sp+52, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAD28;
L_089CAD28:;
    {u32 a_=sp+(192);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    f2 = BITSF(LD32(sp+16));
    {u32 a_=sp+(96);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+56);
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+20));
    ST32(sp+64, FBITS(f4));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(s1, FBITS(f2));
    f0 = f0 + f5;
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f5));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    goto L_089CACD4;
}

/* 089CAE18 */
rv_t func_089CAE18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089CAE18:;
    v0 = LD_U8(a0+194);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089CAE44; }
    goto L_089CAE24;
L_089CAE24:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0+448); goto L_089CAE48; }
    goto L_089CAE30;
L_089CAE30:;
    v0 = LD32(a0+448);
    v0 = v0 ^ 0x3e7;
    a1 = 0 < v0;
    goto L_089CAE3C;
L_089CAE3C:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
L_089CAE44:;
    v1 = LD32(a0+448);
    goto L_089CAE48;
L_089CAE48:;
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089CAE3C; }
    goto L_089CAE54;
L_089CAE54:;
    v0 = LD32(a0+844);
    a1 = (v0 >> 6) & 0x1;
    goto L_089CAE3C;
}

/* 089CAE60 */
rv_t func_089CAE60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CAE60:;
    sp = sp - 16;
    v0 = 999;
    s1 = a1 + 0;
    v1 = LD32(a0+524);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CAEF8; }
    goto L_089CAE84;
L_089CAE84:;
    v0 = 999;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089CAEA8; }
    goto L_089CAE90;
L_089CAE90:;
    v1 = LD32(s0);
    v0 = LD32(v1+424);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAEA0;
L_089CAEA0:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089CAED0; }
    goto L_089CAEA8;
L_089CAEA8:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089CAED0; }
    goto L_089CAEB8;
L_089CAEB8:;
    v1 = LD32(s0+844);
    v0 = 0x80000u;
    a0 = s0 + 0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089CAEE8; }
    goto L_089CAED0;
L_089CAED0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CAEE8:;
    { rv_t r_ = func_089DCAAC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAEF0;
L_089CAEF0:;
    a2 = v0 + 0;
    goto L_089CAED0;
L_089CAEF8:;
    v1 = LD32(a0);
    v0 = LD32(v1+428);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAF08;
L_089CAF08:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089CAED0; }
    goto L_089CAF10;
L_089CAF10:;
    v1 = LD32(s0+524);
    goto L_089CAE84;
}

/* 089CAF18 */
u32 func_089CAF18(u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089CAF18:;
    v1 = 0x5c20000u;
    v0 = 1;
    cnd_ = a1 == v0;
    v1 = v1 | 0xcf5f;
    if (cnd_) { goto L_089CAF5C; }
    goto L_089CAF28;
L_089CAF28:;
    v1 = 0x10000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0x88de;
    if (cnd_) { goto L_089CAF5C; }
    goto L_089CAF34;
L_089CAF34:;
    v1 = 0x5c20000u;
    v0 = 2;
    cnd_ = a1 == v0;
    v1 = v1 | 0xcf60;
    if (cnd_) { goto L_089CAF5C; }
    goto L_089CAF44;
L_089CAF44:;
    v1 = 0x5c20000u;
    v0 = 3;
    cnd_ = a1 == v0;
    v1 = v1 | 0xcf61;
    if (cnd_) { goto L_089CAF5C; }
    goto L_089CAF54;
L_089CAF54:;
    v1 = 0x10000u;
    v1 = v1 | 0x88de;
    goto L_089CAF5C;
L_089CAF5C:;
    v0 = v1 + 0;
    return v0;
}

/* 089CAF64 */
rv_t func_089CAF64(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CAF64:;
    sp = sp - 16;
    s2 = LD32(a0+440);
    cnd_ = s2 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089CAF9C; }
    goto L_089CAF84;
L_089CAF84:;
    goto L_089CAF88;
L_089CAF88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CAF9C:;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAFAC;
L_089CAFAC:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAFC0;
L_089CAFC0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CAFD8;
L_089CAFD8:;
    goto L_089CAF88;
}

/* 089CAFE0 */
u64 func_089CAFE0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089CAFE0:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a2 = sp + 16;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB008;
L_089CB008:;
    a1 = 0xbfba0000u;
    v0 = LD32(sp+16);
    a1 = a1 | 0xf153;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CB034; }
    goto L_089CB020;
L_089CB020:;
    goto L_089CB024;
L_089CB024:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089CB034:;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB03C;
L_089CB03C:;
    a1 = 0xcb7e0000u;
    s1 = v0 + 0;
    t1 = (u32)-1;
    a3 = 0 + 0;
    t0 = 1;
    a1 = a1 | 0x7191;
    cnd_ = v0 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_089CB080; }
    goto L_089CB05C;
L_089CB05C:;
    a0 = LD32(sp+16);
    a1 = 0xfe70000u;
    a1 = a1 | 0x28f;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB070;
L_089CB070:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+440, v0); goto L_089CB020; }
    goto L_089CB078;
L_089CB078:;
    goto L_089CB024;
L_089CB080:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB09C;
L_089CB09C:;
    v1 = LD32(s0);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB0AC;
L_089CB0AC:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB0C4;
L_089CB0C4:;
    ST32(s0+832, v0);
    goto L_089CB05C;
}

/* 089CB0CC */
void func_089CB0CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089CB0CC:;
    sp = sp - 112;
    s3 = a0 + 0;
    s4 = 0 + 0;
    v0 = func_089C65FC(a0, t1, t2, t3);
    goto L_089CB100;
L_089CB100:;
    a0 = s3 + 0;
    s5 = v0 + 0;
    v0 = func_089C6624(a0, 0, 0, 0);
    goto L_089CB10C;
L_089CB10C:;
    s6 = v0 + 0;
    v1 = s3 + 528;
    v0 = s3 + 552;
    f10 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s3+528));
    f1 = BITSF(LD32(v1+4));
    f11 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(s3+552));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+12));
    f6 = BITSF(LD32(v0+16));
    f7 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(v0+24));
    f9 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f10));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+44, FBITS(f9));
    cnd_ = s5 == 0;
    ST32(sp+48, FBITS(f11));
    if (cnd_) { goto L_089CB214; }
    goto L_089CB17C;
L_089CB17C:;
    s7 = sp + 16;
    s2 = s3 + 0;
    a3 = 0 + 0;
    goto L_089CB188;
L_089CB188:;
    t0 = 271;
    a1 = s7 + 0;
    a2 = s6 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB19C;
L_089CB19C:;
    ST32(s2+600, v0);
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB1A8;
L_089CB1A8:;
    a1 = LD32(s2+600);
    a0 = v0 + 0;
    a2 = 1;
    s0 = v0 + 0;
    func_0880FBFC(a0, a1, a2);
    goto L_089CB1BC;
L_089CB1BC:;
    v1 = LD32(s3);
    a1 = s4 + 0;
    s2 = s2 + 4;
    v0 = LD32(v1-12);
    a0 = s3 + 0;
    v0 = s3 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_089CB224; }
    goto L_089CB1E0;
L_089CB1E0:;
    v0 = func_089CAF18(a1);
    goto L_089CB1E8;
L_089CB1E8:;
    v1 = LD32(s0);
    a2 = v0 + 0;
    a3 = 1;
    v0 = LD32(v1+12);
    a0 = s0 + 0;
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB204;
L_089CB204:;
    cnd_ = v0 == 0;
    v1 = s4 < s5;
    if (cnd_) { goto L_089CB224; }
    goto L_089CB20C;
L_089CB20C:;
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089CB188; }
    goto L_089CB214;
L_089CB214:;
    v1 = LD32(s3+524);
    v0 = 999;
    cnd_ = v1 == v0;
    ST32(s3+616, s5);
    if (cnd_) { goto L_089CB250; }
    goto L_089CB224;
L_089CB224:;
    goto L_089CB228;
L_089CB228:;
    sp = sp + 112;
    return;
L_089CB250:;
    a0 = s3 + 0;
    func_089CB2E0(a0);
    goto L_089CB258;
L_089CB258:;
    goto L_089CB228;
}

/* 089CB260 */
void func_089CB260(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CB260:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = LD32(a0+616);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089CB2C4; }
    goto L_089CB288;
L_089CB288:;
    s3 = D_08B30B5C - (2908);
    s0 = a0 + 600;
    a1 = LD32(s0);
    goto L_089CB294;
L_089CB294:;
    a0 = s3 + 2908;
    s1 = s1 + 1;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB2A0;
L_089CB2A0:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089CB2B4; }
    goto L_089CB2AC;
L_089CB2AC:;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB2B4;
L_089CB2B4:;
    v0 = LD32(s2+616);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_089CB294; }
    goto L_089CB2C4;
L_089CB2C4:;
    sp = sp + 32;
    return;
}

/* 089CB2E0 */
void func_089CB2E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CB2E0:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = LD32(a0+616);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089CB348; }
    goto L_089CB308;
L_089CB308:;
    s3 = D_08B30B5C - (2908);
    s0 = a0 + 600;
    a1 = LD32(s0);
    goto L_089CB314;
L_089CB314:;
    a0 = s3 + 2908;
    s1 = s1 + 1;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB320;
L_089CB320:;
    a0 = v0 + 0;
    s0 = s0 + 4;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089CB338; }
    goto L_089CB330;
L_089CB330:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB338;
L_089CB338:;
    v0 = LD32(s2+616);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_089CB314; }
    goto L_089CB348;
L_089CB348:;
    sp = sp + 32;
    return;
}

/* 089CB364 */
float func_089CB364(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CB364:;
    sp = sp - 32;
    v0 = D_08B2C1BC - (-15940);
    f0 = BITSF(0);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089CB430; }
    goto L_089CB388;
L_089CB388:;
    f1 = BITSF(LD32(a0+304));
    f3 = f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f2 = BITSF(LD32(a0+308));
    if (cnd_) { goto L_089CB3A4; }
    goto L_089CB3A0;
L_089CB3A0:;
    f1 = f0;
    goto L_089CB3A4;
L_089CB3A4:;
    a0 = a2 + 540;
    v0 = LD32(a2+540);
    a1 = LD32(a0+8);
    {v[0]=BITSF(v0);}
    v1 = LD32(a0+4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_089CB3E0; }
    goto L_089CB3E0;
L_089CB3E0:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089CB3F0; }
    goto L_089CB3F0;
L_089CB3F0:;
    f20 = f0 - f1;
    fcc = FCMP(f20, f3, 2);
    cnd_ = !fcc;
    f2 = f2 - f1;
    if (cnd_) { goto L_089CB444; }
    goto L_089CB404;
L_089CB404:;
    fcc = FCMP(f2, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f20 = f20 / f2; goto L_089CB448; }
    goto L_089CB414;
L_089CB414:;
    s0 = D_08AEEF24 - (-4316);
    f20 = BITSF(LD32(s0-4316));
    goto L_089CB41C;
L_089CB41C:;
    a0 = a2 + 0;
    f0 = func_089C66F0(a0, t1, t2, t3);
    goto L_089CB424;
L_089CB424:;
    f0 = f20 * f0;
    f1 = BITSF(LD32(s0-4316));
    f0 = f0 + f1;
    goto L_089CB430;
L_089CB430:;
    sp = sp + 32;
    return f0;
L_089CB444:;
    f20 = f20 / f2;
    goto L_089CB448;
L_089CB448:;
    s0 = D_08AEEF24 - (-4316);
    goto L_089CB41C;
}

/* 089CB450 */
void func_089CB450(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089CB450:;
    sp = sp - 48;
    s2 = a0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB474;
L_089CB474:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CB49C; }
    goto L_089CB47C;
L_089CB47C:;
    goto L_089CB480;
L_089CB480:;
    sp = sp + 48;
    return;
L_089CB49C:;
    a0 = s2 + 0;
    f0 = func_089CB364(a0, 0, 0, 0);
    goto L_089CB4A4;
L_089CB4A4:;
    v0 = LD32(s2+616);
    f20 = f0;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089CB47C; }
    goto L_089CB4B4;
L_089CB4B4:;
    s3 = D_08B30B5C - (2908);
    s0 = s2 + 600;
    a1 = LD32(s0);
    goto L_089CB4C0;
L_089CB4C0:;
    a0 = s3 + 2908;
    s1 = s1 + 1;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB4CC;
L_089CB4CC:;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089CB4D8; }
    goto L_089CB4D4;
L_089CB4D4:;
    ST32(v0+60, FBITS(f20));
    goto L_089CB4D8;
L_089CB4D8:;
    v0 = LD32(s2+616);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_089CB4C0; }
    goto L_089CB4E8;
L_089CB4E8:;
    goto L_089CB480;
}

/* 089CB4F0 */
void func_089CB4F0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089CB4F0:;
    sp = sp - 80;
    s0 = D_08B1BC74 - (-17292);
    a0 = 0x71e70000u;
    v0 = LD_U8(s0-17292);
    a0 = a0 | 0x542;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CB528; }
    goto L_089CB514;
L_089CB514:;
    sp = sp + 80;
    return;
L_089CB528:;
    s1 = D_08C2B1BC - (-20036);
    { rv_t r_ = func_088E9FDC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB530;
L_089CB530:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0-17292, 0); goto L_089CB514; }
    goto L_089CB538;
L_089CB538:;
    v0 = LD32(s1-20036);
    t1 = D_08B45AA8 - (23208);
    a2 = 0x71e70000u;
    v1 = t1 + 23208;
    a1 = sp + 16;
    a2 = a2 | 0x542;
    a3 = 0 + 0;
    t0 = 303;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089CB514; }
    goto L_089CB560;
L_089CB560:;
    f7 = BITSF(LD32(t1+23208));
    f8 = BITSF(LD32(v1+32));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+16));
    f4 = BITSF(LD32(v1+20));
    f5 = BITSF(LD32(v1+24));
    f6 = BITSF(LD32(v1+28));
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
    ST32(sp+8, 0);
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB5B8;
L_089CB5B8:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    a1 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1-20036, v0);
    if (cnd_) { goto L_089CB5D4; }
    goto L_089CB5CC;
L_089CB5CC:;
    ST8(s0-17292, 0);
    goto L_089CB514;
L_089CB5D4:;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB5DC;
L_089CB5DC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089CB514; }
    goto L_089CB5E8;
L_089CB5E8:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB5F0;
L_089CB5F0:;
    v0 = D_08C2B1C0 - (-20032);
    ST8(v0-20032, 0);
    goto L_089CB514;
}

/* 089CB5FC */
void func_089CB5FC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_089CB5FC:;
    sp = sp - 256;
    s1 = D_08B1BC74 - (-17292);
    v0 = LD_U8(s1-17292);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089CB660; }
    goto L_089CB620;
L_089CB620:;
    s0 = D_08C2B1BC - (-20036);
    v0 = LD32(s0-20036);
    cnd_ = v0 != 0;
    a1 = LD32(s0-20036);
    if (cnd_) { goto L_089CB67C; }
    goto L_089CB630;
L_089CB630:;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    func_089CB4F0(t1, t2, t3);
    goto L_089CB644;
L_089CB644:;
    v0 = LD32(s0-20036);
    {u32 a_=sp+(176);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(224);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089CB678; }
    goto L_089CB65C;
L_089CB65C:;
    ST8(s1-17292, 0);
    goto L_089CB660;
L_089CB660:;
    sp = sp + 256;
    return;
L_089CB678:;
    a1 = LD32(s0-20036);
    goto L_089CB67C;
L_089CB67C:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB698;
L_089CB698:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089CB660; }
    goto L_089CB6A0;
L_089CB6A0:;
    a1 = LD32(s2+20);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB6B4;
L_089CB6B4:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(224);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089CB850; }
    goto L_089CB6BC;
L_089CB6BC:;
    v0 = LD32(v0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = D_08C2B1C0 - (-20032);
    if (cnd_) { goto L_089CB854; }
    goto L_089CB6CC;
L_089CB6CC:;
    v0 = LD_U8(s0-20032);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CB840; }
    goto L_089CB6D8;
L_089CB6D8:;
    v1 = D_08AEEF28 - (-4312);
    f0 = BITSF(LD32(v1-4312));
    v0 = D_08B159FC - (23036);
    t1 = LD32(v0+23036);
    ST32(sp+40, FBITS(f0));
    {u32 a_=sp+(128);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    t0 = t1 + 12;
    ST32(sp+32, 0);
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = 0 + 0;
    ST32(sp+36, 0);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(t1+12);
    v1 = LD32(t0+4);
    {v[96]=BITSF(v0);}
    v0 = LD32(t0+8);
    {v[97]=BITSF(v1);}
    v1 = LD32(t0+12);
    {v[98]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(t0+16);
    v1 = LD32(t0+20);
    {v[1]=BITSF(v0);}
    v0 = LD32(t0+28);
    {v[2]=BITSF(v1);}
    v1 = LD32(t0+24);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    v1 = LD32(t0+32);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {v[20]=BITSF(a0);}
    v0 = 0x42700000u;
    {v[21]=BITSF(a0);}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[22]=BITSF(v0);}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    ST32(sp+56, FBITS(f5));
    f4 = BITSF(v0);
    ST32(sp+48, FBITS(f1));
    {v0=FBITS(v[17]);}
    f3 = BITSF(v0);
    ST32(sp+52, v0);
    a0 = s1 + 0;
    a2 = sp + 64;
    ST32(sp+20, v0);
    a1 = sp + 0;
    a3 = 0 + 0;
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f5));
    f0 = BITSF(LD32(t1));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    f0 = f0 + f4;
    f1 = f1 + f3;
    f2 = f2 + f5;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f3 = BITSF(LD32(t0+12));
    f0 = BITSF(LD32(t1+12));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, FBITS(f3));
    f4 = BITSF(LD32(t0+32));
    f0 = BITSF(LD32(t0+16));
    f1 = BITSF(LD32(t0+20));
    f2 = BITSF(LD32(t0+24));
    f3 = BITSF(LD32(t0+28));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(sp+92, FBITS(f3));
    ST32(sp+96, FBITS(f4));
    { rv_t r_ = func_088E48F4(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB834;
L_089CB834:;
    v0 = 1;
    ST8(s0-20032, v0);
    goto L_089CB660;
L_089CB840:;
    a0 = s1 + 0;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB848;
L_089CB848:;
    {u32 a_=sp+(224);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    goto L_089CB6D8;
L_089CB850:;
    s0 = D_08C2B1C0 - (-20032);
    goto L_089CB854;
L_089CB854:;
    v0 = LD_U8(s0-20032);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089CB868; }
    goto L_089CB860;
L_089CB860:;
    ST8(s0-20032, 0);
    goto L_089CB660;
L_089CB868:;
    a1 = 1;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB870;
L_089CB870:;
    ST8(s0-20032, 0);
    goto L_089CB660;
}

/* 089CB878 */
void func_089CB878(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CB878:;
    sp = sp - 16;
    v0 = LD32(a0+844);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CB8EC; }
    goto L_089CB89C;
L_089CB89C:;
    v0 = LD_U8(a0+444);
    cnd_ = v0 == 0;
    s2 = 999;
    if (cnd_) { goto L_089CB8EC; }
    goto L_089CB8A8;
L_089CB8A8:;
    v0 = LD32(a0+524);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    cnd_ = v0 == s2;
    a1 = v0 + 0;
    if (cnd_) { goto L_089CB8EC; }
    goto L_089CB8C0;
L_089CB8C0:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CB8C8;
L_089CB8C8:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CB8EC; }
    goto L_089CB8D4;
L_089CB8D4:;
    v1 = LD32(v0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB8E4;
L_089CB8E4:;
    cnd_ = v0 == s2;
    if (cnd_) { v1 = LD32(s1); goto L_089CB904; }
    goto L_089CB8EC;
L_089CB8EC:;
    goto L_089CB8F0;
L_089CB8F0:;
    sp = sp + 16;
    return;
L_089CB904:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_089CB8EC; }
    goto L_089CB924;
L_089CB924:;
    v0 = func_089C64D0(a0, 0, 0, 0);
    goto L_089CB92C;
L_089CB92C:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089C91D8(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB93C;
L_089CB93C:;
    goto L_089CB8F0;
}

/* 089CB944 */
rv_t func_089CB944(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CB944:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A049C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB958;
L_089CB958:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CB974; }
    goto L_089CB964;
L_089CB964:;
    goto L_089CB968;
L_089CB968:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CB974:;
    v0 = func_088BB4E4(a0);
    goto L_089CB97C;
L_089CB97C:;
    v0 = v0 | 0x800;
    a0 = LD32(s0+40);
    v0 = v0 & 0xffff;
    a1 = v0 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB990;
L_089CB990:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB264(a0, a1);
    goto L_089CB99C;
L_089CB99C:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB234(a0, a1);
    goto L_089CB9A8;
L_089CB9A8:;
    v0 = D_08AEEF2C - (-4308);
    a0 = LD32(s0+40);
    f12 = BITSF(LD32(v0-4308));
    { rv_t r_ = func_088BB550(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CB9B8;
L_089CB9B8:;
    a0 = LD32(s0+40);
    a1 = 4;
    v0 = func_088BB56C(a0, a1);
    goto L_089CB9C4;
L_089CB9C4:;
    a0 = LD32(s0+40);
    a1 = (u32)-1;
    v0 = func_088BB578(a0, a1);
    goto L_089CB9D0;
L_089CB9D0:;
    goto L_089CB968;
}

/* 089CB9D8 */
void func_089CB9D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    float *v = vfpu_v;
L_089CB9D8:;
    v1 = D_08B159FC - (23036);
    v0 = LD32(v1+23036);
    v1 = 1;
    {v[112]=BITSF(LD32(v0+(12)));}
    {v[113]=BITSF(LD32(v0+(16)));}
    {v[114]=BITSF(LD32(v0+(20)));}
    {v[116]=BITSF(LD32(v0+(24)));}
    {v[117]=BITSF(LD32(v0+(28)));}
    {v[118]=BITSF(LD32(v0+(32)));}
    {v[120]=BITSF(LD32(v0+(36)));}
    {v[121]=BITSF(LD32(v0+(40)));}
    {v[122]=BITSF(LD32(v0+(44)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBC64; }
    goto L_089CBA20;
L_089CBA20:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBBA4; }
    goto L_089CBA30;
L_089CBA30:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBAC8; }
    goto L_089CBA58;
L_089CBA58:;
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
    if (cnd_) { goto L_089CBAA4; }
    goto L_089CBA94;
L_089CBA94:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBAA4;
L_089CBAA4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBAE8; }
    goto L_089CBAB4;
L_089CBAB4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBAE8; }
    goto L_089CBAC4;
L_089CBAC4:;
    goto L_089CBAC8;
L_089CBAC8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBAE8; }
    goto L_089CBADC;
L_089CBADC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBAE8;
L_089CBAE8:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBB78; }
    goto L_089CBB08;
L_089CBB08:;
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
    if (cnd_) { goto L_089CBB54; }
    goto L_089CBB44;
L_089CBB44:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBB54;
L_089CBB54:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBB98; }
    goto L_089CBB64;
L_089CBB64:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBB98; }
    goto L_089CBB74;
L_089CBB74:;
    goto L_089CBB78;
L_089CBB78:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBB98; }
    goto L_089CBB8C;
L_089CBB8C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBB98;
L_089CBB98:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089CBD1C; }
    goto L_089CBBA0;
L_089CBBA0:;
    goto L_089CBBA4;
L_089CBBA4:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBC38; }
    goto L_089CBBC8;
L_089CBBC8:;
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
    if (cnd_) { goto L_089CBC14; }
    goto L_089CBC04;
L_089CBC04:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBC14;
L_089CBC14:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBC58; }
    goto L_089CBC24;
L_089CBC24:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBC58; }
    goto L_089CBC34;
L_089CBC34:;
    goto L_089CBC38;
L_089CBC38:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBC58; }
    goto L_089CBC4C;
L_089CBC4C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBC58;
L_089CBC58:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089CBD1C; }
    goto L_089CBC60;
L_089CBC60:;
    goto L_089CBC64;
L_089CBC64:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBCF8; }
    goto L_089CBC88;
L_089CBC88:;
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
    if (cnd_) { goto L_089CBCD4; }
    goto L_089CBCC4;
L_089CBCC4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBCD4;
L_089CBCD4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBD18; }
    goto L_089CBCE4;
L_089CBCE4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBD18; }
    goto L_089CBCF4;
L_089CBCF4:;
    goto L_089CBCF8;
L_089CBCF8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBD18; }
    goto L_089CBD0C;
L_089CBD0C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBD18;
L_089CBD18:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089CBD1C;
L_089CBD1C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(a0+(784),FBITS(v[96]));}
    {ST32(a0+(788),FBITS(v[97]));}
    {ST32(a0+(792),FBITS(v[98]));}
    ST8(a0+800, v1);
    ST32(a0+796, 0);
    return;
}

/* 089CBD38 */
u64 func_089CBD38(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CBD38:;
    sp = sp - 16;
    { u64 r_ = func_089C5D0C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CBD48;
L_089CBD48:;
    v0 = 0 < v0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089CBD58 */
void func_089CBD58(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089CBD58:;
    sp = sp - 48;
    s2 = D_08AEEF3C - (-4292);
    {v[112]=BITSF(LD32(a0+(552)));}
    {v[113]=BITSF(LD32(a0+(556)));}
    {v[114]=BITSF(LD32(a0+(560)));}
    {v[116]=BITSF(LD32(a0+(564)));}
    {v[117]=BITSF(LD32(a0+(568)));}
    {v[118]=BITSF(LD32(a0+(572)));}
    {v[120]=BITSF(LD32(a0+(576)));}
    {v[121]=BITSF(LD32(a0+(580)));}
    {v[122]=BITSF(LD32(a0+(584)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBFE4; }
    goto L_089CBDA0;
L_089CBDA0:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBF24; }
    goto L_089CBDB0;
L_089CBDB0:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBE48; }
    goto L_089CBDD8;
L_089CBDD8:;
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
    if (cnd_) { goto L_089CBE24; }
    goto L_089CBE14;
L_089CBE14:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBE24;
L_089CBE24:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBE68; }
    goto L_089CBE34;
L_089CBE34:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBE68; }
    goto L_089CBE44;
L_089CBE44:;
    goto L_089CBE48;
L_089CBE48:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBE68; }
    goto L_089CBE5C;
L_089CBE5C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBE68;
L_089CBE68:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBEF8; }
    goto L_089CBE88;
L_089CBE88:;
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
    if (cnd_) { goto L_089CBED4; }
    goto L_089CBEC4;
L_089CBEC4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBED4;
L_089CBED4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBF18; }
    goto L_089CBEE4;
L_089CBEE4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBF18; }
    goto L_089CBEF4;
L_089CBEF4:;
    goto L_089CBEF8;
L_089CBEF8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBF18; }
    goto L_089CBF0C;
L_089CBF0C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBF18;
L_089CBF18:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089CC09C; }
    goto L_089CBF20;
L_089CBF20:;
    goto L_089CBF24;
L_089CBF24:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CBFB8; }
    goto L_089CBF48;
L_089CBF48:;
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
    if (cnd_) { goto L_089CBF94; }
    goto L_089CBF84;
L_089CBF84:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CBF94;
L_089CBF94:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBFD8; }
    goto L_089CBFA4;
L_089CBFA4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CBFD8; }
    goto L_089CBFB4;
L_089CBFB4:;
    goto L_089CBFB8;
L_089CBFB8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CBFD8; }
    goto L_089CBFCC;
L_089CBFCC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CBFD8;
L_089CBFD8:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089CC09C; }
    goto L_089CBFE0;
L_089CBFE0:;
    goto L_089CBFE4;
L_089CBFE4:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089CC078; }
    goto L_089CC008;
L_089CC008:;
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
    if (cnd_) { goto L_089CC054; }
    goto L_089CC044;
L_089CC044:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089CC054;
L_089CC054:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CC098; }
    goto L_089CC064;
L_089CC064:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089CC098; }
    goto L_089CC074;
L_089CC074:;
    goto L_089CC078;
L_089CC078:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089CC098; }
    goto L_089CC08C;
L_089CC08C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089CC098;
L_089CC098:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089CC09C;
L_089CC09C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(a0+(804),FBITS(v[96]));}
    {ST32(a0+(808),FBITS(v[97]));}
    {ST32(a0+(812),FBITS(v[98]));}
    s1 = D_08AEEF38 - (-4296);
    f24 = BITSF(LD32(s1-4296));
    f20 = BITSF(LD32(s2-4292));
    f21 = f24 - f20;
    f12 = BITSF(LD32(a0+804));
    s0 = a0 + 804;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC0F0;
L_089CC0F0:;
    fcc = FCMP(f0, f20, 12);
    f25 = BITSF(LD32(s1-4296));
    f23 = BITSF(LD32(s2-4292));
    f1 = f0 + f21;
    cnd_ = fcc;
    f22 = f25 - f23;
    if (cnd_) { goto L_089CC11C; }
    goto L_089CC108;
L_089CC108:;
    fcc = FCMP(f24, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089CC11C; }
    goto L_089CC118;
L_089CC118:;
    f1 = f0;
    goto L_089CC11C;
L_089CC11C:;
    ST32(s0, FBITS(f1));
    f13 = f22;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC12C;
L_089CC12C:;
    fcc = FCMP(f0, f23, 12);
    f24 = BITSF(LD32(s1-4296));
    f21 = BITSF(LD32(s2-4292));
    f1 = f0 + f22;
    cnd_ = fcc;
    f20 = f24 - f21;
    if (cnd_) { goto L_089CC158; }
    goto L_089CC144;
L_089CC144:;
    fcc = FCMP(f25, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f22;
    if (cnd_) { goto L_089CC158; }
    goto L_089CC154;
L_089CC154:;
    f1 = f0;
    goto L_089CC158;
L_089CC158:;
    ST32(s0+4, FBITS(f1));
    f13 = f20;
    f12 = BITSF(LD32(s0+8));
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC168;
L_089CC168:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    f1 = f0 + f20;
    if (cnd_) { goto L_089CC18C; }
    goto L_089CC178;
L_089CC178:;
    fcc = FCMP(f24, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f20;
    if (cnd_) { goto L_089CC18C; }
    goto L_089CC188;
L_089CC188:;
    f1 = f0;
    goto L_089CC18C;
L_089CC18C:;
    ST32(s0+8, FBITS(f1));
    sp = sp + 48;
    return;
}

/* 089CC1C0 */
u32 func_089CC1C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC1C0:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    s0 = a0 + 0;
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_089CC264; }
    goto L_089CC1E8;
L_089CC1E8:;
    s1 = LD32(v0+20);
    v0 = 999;
    cnd_ = s1 == v0;
    if (cnd_) {  goto L_089CC268; }
    goto L_089CC1F8;
L_089CC1F8:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == s1;
    t0 = 1;
    if (cnd_) { goto L_089CC264; }
    goto L_089CC210;
L_089CC210:;
    a3 = LD32(a0+460);
    cnd_ = a3 == v0;
    s2 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_089CC260; }
    goto L_089CC21C;
L_089CC21C:;
    a1 = a3 + 0;
    goto L_089CC220;
L_089CC220:;
    a0 = s2 - 20312;
    a2 = 1;
    cnd_ = a3 == s1;
    t0 = 1;
    if (cnd_) { goto L_089CC264; }
    goto L_089CC230;
L_089CC230:;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC238;
L_089CC238:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_089CC264; }
    goto L_089CC244;
L_089CC244:;
    v0 = LD32(s0);
    a3 = LD32(a1+460);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a3 != v0;
    a1 = a3 + 0;
    if (cnd_) { goto L_089CC220; }
    goto L_089CC260;
L_089CC260:;
    t0 = 0 + 0;
    goto L_089CC264;
L_089CC264:;
    goto L_089CC268;
L_089CC268:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
}

/* 089CC280 */
rv_t func_089CC280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089CC280:;
    return (rv_t){ v0, v1, f0 };
}

/* 089CC288 */
rv_t func_089CC288(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089CC288:;
    return (rv_t){ v0, v1, f0 };
}

/* 089CC290 */
rv_t func_089CC290(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC290:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = LD32(a0+720);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089CC2D8; }
    goto L_089CC2B4;
L_089CC2B4:;
    s0 = a0 + 672;
    goto L_089CC2B8;
L_089CC2B8:;
    a0 = LD32(s0);
    a1 = 0 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC2C8;
L_089CC2C8:;
    v0 = LD32(s2+720);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089CC2B8; }
    goto L_089CC2D8;
L_089CC2D8:;
    v0 = LD32(s2+724);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089CC308; }
    goto L_089CC2E4;
L_089CC2E4:;
    s0 = s2 + 696;
    goto L_089CC2E8;
L_089CC2E8:;
    a0 = LD32(s0);
    a1 = 0 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_08A199D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC2F8;
L_089CC2F8:;
    v0 = LD32(s2+724);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_089CC2E8; }
    goto L_089CC308;
L_089CC308:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089CC320 */
u64 func_089CC320(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089CC320:;
    sp = sp - 64;
    a2 = D_08C2A6C8 - (-22840);
    v0 = a2 - 22840;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089CC3B8; }
    goto L_089CC36C;
L_089CC36C:;
    a2 = LD32(a2-22840);
    a3 = a1 + 0;
    goto L_089CC374;
L_089CC374:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089CC3A8; }
    goto L_089CC38C;
L_089CC38C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089CC3BC; }
    goto L_089CC39C;
L_089CC39C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089CC38C; }
    goto L_089CC3A8;
L_089CC3A8:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089CC374; }
    goto L_089CC3B8;
L_089CC3B8:;
    v1 = LD32(sp+8);
    goto L_089CC3BC;
L_089CC3BC:;
    cnd_ = v1 == 0;
    v0 = D_08AEEF48 - (-4280);
    if (cnd_) { goto L_089CC40C; }
    goto L_089CC3C4;
L_089CC3C4:;
    f20 = BITSF(LD32(v0-4280));
    s3 = 999;
    s2 = LD32(v1);
    goto L_089CC3D0;
L_089CC3D0:;
    v1 = LD32(s2);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC3E0;
L_089CC3E0:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    cnd_ = v0 == s3;
    a0 = 0x8001;
    if (cnd_) { goto L_089CC4D0; }
    goto L_089CC3F4;
L_089CC3F4:;
    a0 = sp + 0;
    goto L_089CC3F8;
L_089CC3F8:;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC400;
L_089CC400:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { s2 = LD32(v1); goto L_089CC3D0; }
    goto L_089CC40C;
L_089CC40C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089CC494; }
    goto L_089CC420;
L_089CC420:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089CC494; }
    goto L_089CC42C;
L_089CC42C:;
    v0 = LD32(s1);
    goto L_089CC430;
L_089CC430:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089CC484; }
    goto L_089CC444;
L_089CC444:;
    v0 = LD_U8(s0+8);
    goto L_089CC448;
L_089CC448:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089CC4C8; }
    goto L_089CC450;
L_089CC450:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089CC4B8; }
    goto L_089CC458;
L_089CC458:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089CC460;
L_089CC460:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC46C;
L_089CC46C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089CC478;
L_089CC478:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089CC448; }
    goto L_089CC480;
L_089CC480:;
    v1 = LD32(s1+4);
    goto L_089CC484;
L_089CC484:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089CC430; }
    goto L_089CC494;
L_089CC494:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089CC4B8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089CC460;
L_089CC4C8:;
    s0 = LD32(s0+4);
    goto L_089CC478;
L_089CC4D0:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC4D8;
L_089CC4D8:;
    s0 = LD32(v0+24);
    s1 = v0 + 0;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089CC4E8;
L_089CC4E8:;
    ST32(s0+12, FBITS(f20));
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(s2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC510;
L_089CC510:;
    ST32(s0+8, v0);
    a0 = s1 + 0;
    a1 = 1;
    v1 = LD32(s2);
    a2 = 1;
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s1+4, v1);
    a3 = LD32(s2);
    v0 = LD32(a3-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s1, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC54C;
L_089CC54C:;
    a0 = sp + 0;
    goto L_089CC3F8;
}

/* 089CC554 */
void func_089CC554(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_089CC554:;
    v0 = 1;
    v1 = D_08B1BC74 - (-17292);
    a0 = D_08C2B1BC - (-20036);
    ST8(v1-17292, v0);
    ST32(a0-20036, 0);
    return;
}

/* 089CC56C */
rv_t func_089CC56C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC56C:;
    sp = sp - 16;
    v0 = D_08AEEF4C - (-4276);
    a1 = 0x34d0000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4276));
    a1 = a1 | 0xb50e;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC58C;
L_089CC58C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089CC598 */
rv_t func_089CC598(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC598:;
    sp = sp - 16;
    v0 = D_08AEEF50 - (-4272);
    a1 = 0x3eab0000u;
    f12 = BITSF(LD32(v0-4272));
    a0 = LD32(a0+588);
    a1 = a1 | 0xc268;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC5B8;
L_089CC5B8:;
    v0 = D_08AEEF54 - (-4268);
    f1 = BITSF(LD32(v0-4268));
    f0 = f0 * f1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089CC5D0 */
rv_t func_089CC5D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC5D0:;
    sp = sp - 16;
    v0 = LD32(a0+448);
    cnd_ = a1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CC62C; }
    goto L_089CC5EC;
L_089CC5EC:;
    v0 = 999;
    cnd_ = a1 == v0;
    ST32(a0+448, a1);
    if (cnd_) { goto L_089CC62C; }
    goto L_089CC5F8;
L_089CC5F8:;
    s1 = a0 + 224;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089CC624; }
    goto L_089CC608;
L_089CC608:;
    v0 = LD32(v1+8);
    goto L_089CC60C;
L_089CC60C:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_089CC624; }
    goto L_089CC614;
L_089CC614:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_089CC60C; }
    goto L_089CC620;
L_089CC620:;
    a0 = 0 + 0;
    goto L_089CC624;
L_089CC624:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089CC640; }
    goto L_089CC62C;
L_089CC62C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CC640:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC648;
L_089CC648:;
    a0 = v0 + 0;
    v1 = LD32(s0+224);
    v0 = LD32(s0+448);
    ST32(a0, 0);
    ST32(a0+8, v0);
    cnd_ = v1 == 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_089CC668; }
    goto L_089CC664;
L_089CC664:;
    ST32(v1, a0);
    goto L_089CC668;
L_089CC668:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    ST32(s0+224, a0);
    if (cnd_) { goto L_089CC62C; }
    goto L_089CC674;
L_089CC674:;
    ST32(s1+4, a0);
    goto L_089CC62C;
}

/* 089CC67C */
rv_t func_089CC67C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC67C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+448);
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC6A0;
L_089CC6A0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CC6CC; }
    goto L_089CC6A8;
L_089CC6A8:;
    v0 = LD32(s0);
    a1 = LD32(a0);
    v1 = LD32(v0-16);
    v0 = LD32(a1+24);
    v1 = s0 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC6C4;
L_089CC6C4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089CC768; }
    goto L_089CC6CC;
L_089CC6CC:;
    a0 = LD32(s0+448);
    v0 = 999;
    cnd_ = a0 == v0;
    a2 = s0 + 224;
    if (cnd_) { goto L_089CC74C; }
    goto L_089CC6DC;
L_089CC6DC:;
    v1 = LD32(a2+4);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_089CC708; }
    goto L_089CC6E8;
L_089CC6E8:;
    a1 = a0 + 0;
    v0 = LD32(v1+8);
    goto L_089CC6F0;
L_089CC6F0:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_089CC708; }
    goto L_089CC6F8;
L_089CC6F8:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_089CC6F0; }
    goto L_089CC704;
L_089CC704:;
    a0 = 0 + 0;
    goto L_089CC708;
L_089CC708:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089CC73C; }
    goto L_089CC710;
L_089CC710:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_089CC75C; }
    goto L_089CC71C;
L_089CC71C:;
    ST32(v1+4, v0);
    goto L_089CC720;
L_089CC720:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a2+4, v1); goto L_089CC730; }
    goto L_089CC72C;
L_089CC72C:;
    ST32(v0, v1);
    goto L_089CC730;
L_089CC730:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC738;
L_089CC738:;
    v1 = LD32(s0);
    goto L_089CC73C;
L_089CC73C:;
    a0 = s0 + 0;
    v0 = LD32(v1+440);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC74C;
L_089CC74C:;
    goto L_089CC750;
L_089CC750:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CC75C:;
    ST32(a2, v0);
    v1 = LD32(a0);
    goto L_089CC720;
L_089CC768:;
    v0 = LD32(v1+488);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC774;
L_089CC774:;
    goto L_089CC750;
}

/* 089CC77C */
rv_t func_089CC77C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CC77C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+696);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089CC7A0; }
    goto L_089CC798;
L_089CC798:;
    v0 = LD32(a0+364);
    a1 = v0 & 0x1;
    goto L_089CC7A0;
L_089CC7A0:;
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089CC7BC; }
    goto L_089CC7A8;
L_089CC7A8:;
    v1 = LD32(a0+20);
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    v1 = v1 ^ v0;
    v1 = v1 < 0x1u;
    goto L_089CC7BC;
L_089CC7BC:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(s0+448); goto L_089CC7D0; }
    goto L_089CC7C4;
L_089CC7C4:;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0+464, 0); goto L_089CC870; }
    goto L_089CC7CC;
L_089CC7CC:;
    v1 = LD32(s0+448);
    goto L_089CC7D0;
L_089CC7D0:;
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+452, v1); goto L_089CC7EC; }
    goto L_089CC7DC;
L_089CC7DC:;
    v0 = LD32(s0+452);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089CC82C; }
    goto L_089CC7E8;
L_089CC7E8:;
    ST32(s0+452, v1);
    goto L_089CC7EC;
L_089CC7EC:;
    ST8(s0+468, 0);
    ST32(s0+464, 0);
    goto L_089CC7F4;
L_089CC7F4:;
    f1 = BITSF(LD32(s0+464));
    f0 = BITSF(LD32(s0+408));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089CC81C; }
    goto L_089CC80C;
L_089CC80C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089CC81C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC878(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC824;
L_089CC824:;
    ST8(s0+468, v0);
    goto L_089CC80C;
L_089CC82C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC878(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC834;
L_089CC834:;
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089CC844; }
    goto L_089CC83C;
L_089CC83C:;
    v1 = LD32(s0+448);
    goto L_089CC7E8;
L_089CC844:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+464));
    a2 = s0 + 408;
    a0 = sp + 0;
    f0 = f0 + f1;
    a1 = sp + 4;
    ST32(sp+4, 0);
    ST32(sp, FBITS(f0));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CC868;
L_089CC868:;
    ST32(s0+464, FBITS(f0));
    goto L_089CC7F4;
L_089CC870:;
    ST8(s0+468, 0);
    goto L_089CC80C;
}

/* 089CC878 */
rv_t func_089CC878(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CC878:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+448);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC89C;
L_089CC89C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089CC90C; }
    goto L_089CC8A8;
L_089CC8A8:;
    v1 = LD32(v0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC8B8;
L_089CC8B8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089CC90C; }
    goto L_089CC8C0;
L_089CC8C0:;
    v0 = LD32(s0+696);
    v1 = 0xf9680000u;
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = v1 | 0xc3bb;
    if (cnd_) { goto L_089CC8E4; }
    goto L_089CC8D8;
L_089CC8D8:;
    v0 = LD32(v0+20);
    v0 = v0 ^ v1;
    a1 = v0 < 0x1u;
    goto L_089CC8E4;
L_089CC8E4:;
    v0 = LD_U8(s0+468);
    cnd_ = v0 == 0;
    if (cnd_) { f12 = BITSF(LD32(a0+424)); goto L_089CC8FC; }
    goto L_089CC8F0;
L_089CC8F0:;
    cnd_ = a1 == 0;
    if (cnd_) { f12 = BITSF(LD32(s0+416)); goto L_089CC920; }
    goto L_089CC8F8;
L_089CC8F8:;
    f12 = BITSF(LD32(a0+424));
    goto L_089CC8FC;
L_089CC8FC:;
    f13 = BITSF(LD32(a0+420));
    goto L_089CC900;
L_089CC900:;
    { rv_t r_ = func_089CC92C(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC908;
L_089CC908:;
    v1 = v0 + 0;
    goto L_089CC90C;
L_089CC90C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CC920:;
    f13 = BITSF(LD32(s0+412));
    a0 = s0 + 0;
    goto L_089CC900;
}

/* 089CC92C */
rv_t func_089CC92C(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_089CC92C:;
    sp = sp - 336;
    s1 = a0 + 0;
    a2 = 1;
    f23 = f13;
    f20 = f12;
    a1 = LD32(a0+448);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CC978;
L_089CC978:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089CCC14; }
    goto L_089CC984;
L_089CC984:;
    v1 = LD32(s1);
    f21 = BITSF(0);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CC998;
L_089CC998:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+24));
    f4 = BITSF(LD32(v0+28));
    f8 = BITSF(LD32(v0+32));
    f7 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    ST32(sp, FBITS(f0));
    a2 = 0 + 0;
    a0 = s0 + 0;
    ST32(sp+4, FBITS(f1));
    a1 = sp + 64;
    ST32(sp+12, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+28, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+8, FBITS(f7));
    ST32(sp+20, FBITS(f6));
    ST32(sp+32, FBITS(f8));
    ST32(sp+48, FBITS(f7));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f8));
    v0 = LD32(s0);
    v1 = LD32(v0+56);
    t_ = v1;
    f12 = f21;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCA08;
L_089CCA08:;
    a1 = LD32(s1);
    v0 = LD32(a1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCA18;
L_089CCA18:;
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(sp+64));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 - f2;
    f0 = BITSF(LD32(sp+68));
    f2 = BITSF(LD32(sp+72));
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 - f3;
    f2 = f2 - f4;
    v1 = FBITS(f1);
    {v[0]=BITSF(v1);}
    a0 = FBITS(f0);
    a1 = FBITS(f2);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+84, FBITS(f0));
    v0 = 0 + 0;
    ST32(sp+80, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f2));
    if (cnd_) { goto L_089CCC14; }
    goto L_089CCA84;
L_089CCA84:;
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v1);}
    {v[13]=BITSF(a0);}
    {v[14]=BITSF(a1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    s0 = D_08AEEF58 - (-4264);
    if (cnd_) { goto L_089CCAEC; }
    goto L_089CCAB0;
L_089CCAB0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a2=FBITS(v[2]);}
    f3 = BITSF(a2);
    {v0=FBITS(v[0]);}
    {a2=FBITS(v[1]);}
    ST32(sp+96, v0);
    ST32(sp+100, a2);
    ST32(sp+104, FBITS(f3));
    ST32(sp+80, v0);
    ST32(sp+84, a2);
    ST32(sp+88, FBITS(f3));
    s0 = D_08AEEF58 - (-4264);
    goto L_089CCAEC;
L_089CCAEC:;
    s2 = D_08AEEF5C - (-4260);
    f2 = BITSF(LD32(s0-4264));
    f3 = BITSF(LD32(s2-4260));
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+88);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+48);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v[0]=1.57079632679f;}
    a0 = sp + 112;
    a1 = sp + 116;
    a2 = sp + 120;
    {v0=FBITS(v[4]);}
    ST32(sp+116, FBITS(f2));
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s4 = D_08AEEF60 - (-4256);
    ST32(sp+112, v0);
    s3 = D_08AEEF64 - (-4252);
    ST32(sp+120, FBITS(f3));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CCB64;
L_089CCB64:;
    v0 = FBITS(f0);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    f20 = BITSF(LD32(s3-4252));
    f22 = BITSF(LD32(s4-4256));
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f21 = f22 - f20;
    ST32(sp+112, FBITS(f0));
    f13 = f21;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCBAC;
L_089CCBAC:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089CCBD0; }
    goto L_089CCBBC;
L_089CCBBC:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089CCBD0; }
    goto L_089CCBCC;
L_089CCBCC:;
    f1 = f0;
    goto L_089CCBD0;
L_089CCBD0:;
    a2 = FBITS(f1);
    a2 = (a2 >> 0) & 0x7fffffff;
    f1 = BITSF(a2);
    fcc = FCMP(f1, f23, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_089CCC14; }
    goto L_089CCBEC;
L_089CCBEC:;
    v1 = LD32(s1+696);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089CCC0C; }
    goto L_089CCBF8;
L_089CCBF8:;
    v1 = LD32(v1+20);
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    v1 = v1 ^ v0;
    a0 = v1 < 0x1u;
    goto L_089CCC0C;
L_089CCC0C:;
    cnd_ = a0 != 0;
    v0 = 1;
    if (cnd_) { goto L_089CCC44; }
    goto L_089CCC14;
L_089CCC14:;
    sp = sp + 336;
    return (rv_t){ v0, v1, f0 };
L_089CCC44:;
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+28));
    v0 = FBITS(f2);
    a2 = FBITS(f3);
    f5 = BITSF(LD32(s0-4264));
    f6 = BITSF(LD32(s2-4260));
    v1 = LD32(sp+84);
    {u32 a_=sp+(256);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[5]=BITSF(a2);}
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+80);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+88);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    a0 = sp + 124;
    a1 = sp + 128;
    a2 = sp + 132;
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f6));
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f3));
    ST32(sp+104, FBITS(f4));
    ST32(sp+124, FBITS(f0));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CCCC4;
L_089CCCC4:;
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(sp+124));
    f20 = BITSF(LD32(s3-4252));
    f22 = BITSF(LD32(s4-4256));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    f21 = f22 - f20;
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    ST32(sp+112, FBITS(f0));
    f13 = f21;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCD10;
L_089CCD10:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089CCD34; }
    goto L_089CCD20;
L_089CCD20:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089CCD34; }
    goto L_089CCD30;
L_089CCD30:;
    f1 = f0;
    goto L_089CCD34;
L_089CCD34:;
    a2 = FBITS(f1);
    v0 = D_08AEEF68 - (-4248);
    f0 = BITSF(LD32(v0-4248));
    a2 = (a2 >> 0) & 0x7fffffff;
    f1 = BITSF(a2);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_089CCC14; }
    goto L_089CCD58;
L_089CCD58:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089CCC14; }
    goto L_089CCD6C;
L_089CCD6C:;
    v0 = 0 + 0;
    goto L_089CCC14;
}

/* 089CCD74 */
rv_t func_089CCD74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CCD74:;
    sp = sp - 16;
    v0 = LD32(a0+88);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CCDA8; }
    goto L_089CCD8C;
L_089CCD8C:;
    a0 = LD32(v0+56);
    cnd_ = a0 == 0;
    v1 = v0 + 60;
    if (cnd_) { goto L_089CCDA8; }
    goto L_089CCD98;
L_089CCD98:;
    v0 = LD32(a0+112);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CCDD8; }
    goto L_089CCDA8;
L_089CCDA8:;
    v0 = LD32(s0+40);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CCDC4; }
    goto L_089CCDB4;
L_089CCDB4:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089CCDE8; }
    goto L_089CCDC0;
L_089CCDC0:;
    v0 = LD32(s0);
    goto L_089CCDC4;
L_089CCDC4:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08875D9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCDD0;
L_089CCDD0:;
    v1 = v0 + 0;
    goto L_089CCDD4;
L_089CCDD4:;
    goto L_089CCDD8;
L_089CCDD8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CCDE8:;
    v1 = LD32(s0);
    v0 = LD32(v1+460);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCDF8;
L_089CCDF8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CCDC4; }
    goto L_089CCE00;
L_089CCE00:;
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCE08;
L_089CCE08:;
    v1 = v0 + 0;
    goto L_089CCDD4;
}

/* 089CCE10 */
rv_t func_089CCE10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089CCE10:;
    sp = sp - 128;
    v1 = LD32(a0+88);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CCE44; }
    goto L_089CCE28;
L_089CCE28:;
    v0 = LD32(v1+56);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_089CCE48; }
    goto L_089CCE34;
L_089CCE34:;
    v0 = LD_U16(v0+114);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = v1 + 84;
    if (cnd_) { goto L_089CCE70; }
    goto L_089CCE44;
L_089CCE44:;
    v0 = LD32(s0+40);
    goto L_089CCE48;
L_089CCE48:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CCE60; }
    goto L_089CCE50;
L_089CCE50:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089CCE84; }
    goto L_089CCE5C;
L_089CCE5C:;
    v0 = LD32(s0);
    goto L_089CCE60;
L_089CCE60:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08875DF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCE6C;
L_089CCE6C:;
    a0 = v0 + 0;
    goto L_089CCE70;
L_089CCE70:;
    v0 = a0 + 0;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089CCE84:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCE90;
L_089CCE90:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CCE60; }
    goto L_089CCE98;
L_089CCE98:;
    v0 = LD_U8(s0+670);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CCEB4; }
    goto L_089CCEA4;
L_089CCEA4:;
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCEAC;
L_089CCEAC:;
    a0 = v0 + 0;
    goto L_089CCE70;
L_089CCEB4:;
    a0 = s0 + 0;
    f0 = func_089C63D0(a0);
    goto L_089CCEBC;
L_089CCEBC:;
    f1 = BITSF(LD32(s0+500));
    v0 = D_08AEEF6C - (-4244);
    f2 = BITSF(LD32(v0-4244));
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089CCEDC; }
    goto L_089CCEDC;
L_089CCEDC:;
    v0 = D_08AEEF70 - (-4240);
    f0 = BITSF(LD32(v0-4240));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_089CCEF4; }
    goto L_089CCEF4;
L_089CCEF4:;
    v1 = D_08C2B1C8 - (-20024);
    v0 = (u32)(s32)LD_S8(v1-20024);
    ST32(sp+56, FBITS(f1));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
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
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_089CCFA4; }
    goto L_089CCFA0;
L_089CCFA0:;
    ST8(v1-20024, v0);
    goto L_089CCFA4;
L_089CCFA4:;
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CCFAC;
L_089CCFAC:;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
    {v[96]=BITSF(LD32(v0+(0)));}
    {v[97]=BITSF(LD32(v0+(4)));}
    {v[98]=BITSF(LD32(v0+(8)));}
    {v[100]=BITSF(LD32(v0+(12)));}
    {v[101]=BITSF(LD32(v0+(16)));}
    {v[102]=BITSF(LD32(v0+(20)));}
    {v[104]=BITSF(LD32(v0+(24)));}
    {v[105]=BITSF(LD32(v0+(28)));}
    {v[106]=BITSF(LD32(v0+(32)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(64),FBITS(v[80]));}
    {ST32(sp+(68),FBITS(v[81]));}
    {ST32(sp+(72),FBITS(v[82]));}
    {ST32(sp+(76),FBITS(v[84]));}
    {ST32(sp+(80),FBITS(v[85]));}
    {ST32(sp+(84),FBITS(v[86]));}
    {ST32(sp+(88),FBITS(v[88]));}
    {ST32(sp+(92),FBITS(v[89]));}
    {ST32(sp+(96),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+64));
    v1 = D_08C2B1D0 - (-20016);
    f1 = BITSF(LD32(sp+68));
    ST32(v1-20016, FBITS(f0));
    v0 = v1 - 20016;
    a0 = v0 + 0;
    f0 = BITSF(LD32(sp+72));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+76));
    f0 = BITSF(LD32(sp+80));
    ST32(v0+12, FBITS(f1));
    ST32(v0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+88));
    ST32(v0+20, FBITS(f1));
    ST32(v0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+92));
    f0 = BITSF(LD32(sp+96));
    ST32(v0+28, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    goto L_089CCE70;
}

/* 089CD074 */
rv_t func_089CD074(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD074:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0+88);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CD0EC; }
    goto L_089CD094;
L_089CD094:;
    v0 = LD32(v1+56);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_089CD0F0; }
    goto L_089CD0A0;
L_089CD0A0:;
    a0 = LD32(v0+112);
    v0 = (a0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_089CD0F0; }
    goto L_089CD0B0;
L_089CD0B0:;
    v0 = (a0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_089CD0F0; }
    goto L_089CD0BC;
L_089CD0BC:;
    v0 = v1 + 72;
    f0 = BITSF(LD32(v1+72));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(a1, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    goto L_089CD0D4;
L_089CD0D4:;
    ST32(s1+4, FBITS(f2));
    goto L_089CD0DC;
L_089CD0DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CD0EC:;
    v0 = LD32(s0+40);
    goto L_089CD0F0;
L_089CD0F0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CD108; }
    goto L_089CD0F8;
L_089CD0F8:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089CD120; }
    goto L_089CD104;
L_089CD104:;
    v0 = LD32(s0);
    goto L_089CD108;
L_089CD108:;
    a1 = s1 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08875E48(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD118;
L_089CD118:;
    goto L_089CD0DC;
L_089CD120:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD12C;
L_089CD12C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089CD108; }
    goto L_089CD134;
L_089CD134:;
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD13C;
L_089CD13C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    goto L_089CD0D4;
}

/* 089CD154 */
rv_t func_089CD154(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_089CD154:;
    sp = sp - 192;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    s2 = a0 + 0;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_089C6884(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD184;
L_089CD184:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089CD1A8; }
    goto L_089CD18C;
L_089CD18C:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_089CD1A8:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    s0 = s2 + 540;
    v0 = LD32(v1+240);
    t_ = v0;
    s1 = D_08C2B1C4 - (-20028);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD1C0;
L_089CD1C0:;
    {u32 a_=sp+(144);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+32);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a2 = LD32(s2);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(48);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(32);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(s0+4);
    v0 = LD32(s2+540);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v0);}
    a0 = LD32(s0+8);
    {v[34]=BITSF(a1);}
    {v[21]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    ST32(sp, FBITS(f2));
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+4, v0);
    ST32(sp+20, v0);
    ST32(s1-20028, s2);
    v0 = LD32(a2+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD288;
L_089CD288:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD29C;
L_089CD29C:;
    a2 = v0 + 0;
    v0 = D_08AEEF74 - (-4236);
    f12 = BITSF(LD32(v0-4236));
    a0 = s3 + 0;
    a1 = s0 + 0;
    a3 = 0 + 0;
    t0 = sp + 0;
    { rv_t r_ = func_088EDEFC(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD2BC;
L_089CD2BC:;
    ST32(s1-20028, 0);
    goto L_089CD18C;
}

/* 089CD2C4 */
rv_t func_089CD2C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CD2C4:;
    v1 = a1 + 80;
    v0 = D_08AEEF78 - (-4232);
    f3 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0-4232));
    f1 = BITSF(LD32(a1+80));
    sp = sp - 32;
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    ST32(sp+8, FBITS(f3));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    v1 = LD32(sp+8);
    a0 = LD32(sp+4);
    v0 = LD32(sp);
    ST32(a1+88, v1);
    ST32(a1+80, v0);
    ST32(a1+84, a0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089CD318 */
void func_089CD318(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089CD318:;
    sp = sp - 80;
    s0 = a0 + 0;
    v0 = func_089C6B88(a0, t1, t2, t3);
    goto L_089CD330;
L_089CD330:;
    v1 = s0 + 552;
    a0 = s0 + 528;
    f10 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(s0+528));
    f1 = BITSF(LD32(a0+4));
    f11 = BITSF(LD32(v1+32));
    f2 = BITSF(LD32(s0+552));
    f3 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(v1+12));
    f6 = BITSF(LD32(v1+16));
    f7 = BITSF(LD32(v1+20));
    f8 = BITSF(LD32(v1+24));
    f9 = BITSF(LD32(v1+28));
    a1 = sp + 16;
    a2 = v0 + 0;
    a3 = 0 + 0;
    t0 = 15;
    a0 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f10));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+44, FBITS(f9));
    ST32(sp+48, FBITS(f11));
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD3B0;
L_089CD3B0:;
    a0 = 72;
    ST32(s0+824, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD3BC;
L_089CD3BC:;
    a1 = LD32(s0+824);
    a0 = v0 + 0;
    a2 = 1;
    s1 = v0 + 0;
    func_0880FBFC(a0, a1, a2);
    goto L_089CD3D0;
L_089CD3D0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    s0 = LD32(s0+100);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089CD414; }
    goto L_089CD3EC;
L_089CD3EC:;
    v0 = func_089C6B60(a0, 0, 0, 0);
    goto L_089CD3F4;
L_089CD3F4:;
    v1 = LD32(s1);
    a2 = v0 + 0;
    a0 = s1 + 0;
    t0 = LD32(v1+12);
    a3 = 1;
    t_ = t0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD410;
L_089CD410:;
    goto L_089CD414;
L_089CD414:;
    sp = sp + 80;
    return;
}

/* 089CD424 */
void func_089CD424(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD424:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+824);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD444;
L_089CD444:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089CD458; }
    goto L_089CD450;
L_089CD450:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD458;
L_089CD458:;
    ST32(s0+824, 0);
    sp = sp + 16;
    return;
}

/* 089CD46C */
void func_089CD46C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089CD46C:;
    sp = sp - 80;
    s0 = a0 + 0;
    v0 = func_089C6BD8(a0, t1, t2, t3);
    goto L_089CD484;
L_089CD484:;
    v1 = s0 + 552;
    a0 = s0 + 528;
    f10 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(s0+528));
    f1 = BITSF(LD32(a0+4));
    f11 = BITSF(LD32(v1+32));
    f2 = BITSF(LD32(s0+552));
    f3 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(v1+12));
    f6 = BITSF(LD32(v1+16));
    f7 = BITSF(LD32(v1+20));
    f8 = BITSF(LD32(v1+24));
    f9 = BITSF(LD32(v1+28));
    a1 = sp + 16;
    a2 = v0 + 0;
    a3 = 0 + 0;
    t0 = 15;
    a0 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f10));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+44, FBITS(f9));
    ST32(sp+48, FBITS(f11));
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD504;
L_089CD504:;
    a0 = 72;
    ST32(s0+828, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD510;
L_089CD510:;
    a1 = LD32(s0+828);
    a0 = v0 + 0;
    a2 = 1;
    s1 = v0 + 0;
    func_0880FBFC(a0, a1, a2);
    goto L_089CD524;
L_089CD524:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    s0 = LD32(s0+100);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089CD568; }
    goto L_089CD540;
L_089CD540:;
    v0 = func_089C6BB0(a0, 0, 0, 0);
    goto L_089CD548;
L_089CD548:;
    v1 = LD32(s1);
    a2 = v0 + 0;
    a0 = s1 + 0;
    t0 = LD32(v1+12);
    a3 = 1;
    t_ = t0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD564;
L_089CD564:;
    goto L_089CD568;
L_089CD568:;
    sp = sp + 80;
    return;
}

/* 089CD578 */
void func_089CD578(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD578:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = LD32(a0+828);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD598;
L_089CD598:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089CD5AC; }
    goto L_089CD5A4;
L_089CD5A4:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD5AC;
L_089CD5AC:;
    ST32(s0+828, 0);
    sp = sp + 16;
    return;
}

/* 089CD5C0 */
void func_089CD5C0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CD5C0:;
    sp = sp - 32;
    v0 = LD32(a0+844);
    v0 = (v0 >> 14) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CD650; }
    goto L_089CD5E0;
L_089CD5E0:;
    a1 = LD32(a0);
    v1 = D_08B2C1BC - (-15940);
    a2 = LD_U8(v1-15940);
    v0 = LD32(a1-12);
    f1 = BITSF(LD32(a0+52));
    v1 = D_08AEEF7C - (-4228);
    v0 = a0 + v0;
    f0 = BITSF(LD32(v0+80));
    f2 = BITSF(LD32(v1-4228));
    cnd_ = a2 == 0;
    f20 = f0 / f1;
    if (cnd_) { goto L_089CD610; }
    goto L_089CD60C;
L_089CD60C:;
    f20 = f2;
    goto L_089CD610;
L_089CD610:;
    v0 = LD32(s0+824);
    cnd_ = v0 != 0;
    v0 = D_08AEEF80 - (-4224);
    if (cnd_) { goto L_089CD6A8; }
    goto L_089CD61C;
L_089CD61C:;
    f0 = BITSF(LD32(v0-4224));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089CD698; }
    goto L_089CD630;
L_089CD630:;
    v0 = LD32(s0+828);
    goto L_089CD634;
L_089CD634:;
    cnd_ = v0 != 0;
    v0 = D_08AEEF84 - (-4220);
    if (cnd_) { goto L_089CD674; }
    goto L_089CD63C;
L_089CD63C:;
    f0 = BITSF(LD32(v0-4220));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089CD664; }
    goto L_089CD650;
L_089CD650:;
    goto L_089CD654;
L_089CD654:;
    sp = sp + 32;
    return;
L_089CD664:;
    a0 = s0 + 0;
    func_089CD46C(a0, t1, t2, t3);
    goto L_089CD66C;
L_089CD66C:;
    goto L_089CD654;
L_089CD674:;
    f0 = BITSF(LD32(v0-4220));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_089CD654; }
    goto L_089CD688;
L_089CD688:;
    a0 = s0 + 0;
    func_089CD578(a0);
    goto L_089CD690;
L_089CD690:;
    goto L_089CD654;
L_089CD698:;
    func_089CD318(a0, t1, t2, t3);
    goto L_089CD6A0;
L_089CD6A0:;
    v0 = LD32(s0+828);
    goto L_089CD634;
L_089CD6A8:;
    f0 = BITSF(LD32(v0-4224));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0+828); goto L_089CD634; }
    goto L_089CD6BC;
L_089CD6BC:;
    func_089CD424(a0);
    goto L_089CD6C4;
L_089CD6C4:;
    v0 = LD32(s0+828);
    goto L_089CD634;
}

/* 089CD6CC */
rv_t func_089CD6CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD6CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0);
    s0 = LD_U8(a0+195);
    v0 = LD32(v1+460);
    t_ = v0;
    s0 = s0 ^ 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD6F4;
L_089CD6F4:;
    v1 = 1;
    if (v0 != 0) s0 = v1;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A04770(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD708;
L_089CD708:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089CD71C */
rv_t func_089CD71C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD71C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+460);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD738;
L_089CD738:;
    cnd_ = v0 != 0;
    a0 = 3;
    if (cnd_) { goto L_089CD750; }
    goto L_089CD740;
L_089CD740:;
    v1 = LD_U8(s0+195);
    a0 = 1;
    v0 = 3;
    if (v1 == 0) a0 = v0;
    goto L_089CD750;
L_089CD750:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089CD764 */
void func_089CD764(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD764:;
    sp = sp - 16;
    v1 = a0 + 648;
    v0 = (u32)-1;
    a1 = LD32(a0+648);
    cnd_ = a1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089CD788; }
    goto L_089CD780;
L_089CD780:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD788;
L_089CD788:;
    sp = sp + 16;
    return;
}

/* 089CD794 */
void func_089CD794(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD794:;
    sp = sp - 16;
    v1 = a0 + 652;
    v0 = (u32)-1;
    a1 = LD32(a0+652);
    cnd_ = a1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089CD7B8; }
    goto L_089CD7B0;
L_089CD7B0:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD7B8;
L_089CD7B8:;
    sp = sp + 16;
    return;
}

/* 089CD7C4 */
rv_t func_089CD7C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD7C4:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+648);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089CD7F8; }
    goto L_089CD7E8;
L_089CD7E8:;
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD7F0;
L_089CD7F0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CD818; }
    goto L_089CD7F8;
L_089CD7F8:;
    a0 = s0 + 0;
    func_089CD764(a0);
    goto L_089CD800;
L_089CD800:;
    a0 = s0 + 0;
    { u64 r_ = func_089C5ED4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD808;
L_089CD808:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089CD828; }
    goto L_089CD814;
L_089CD814:;
    goto L_089CD818;
L_089CD818:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CD828:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD830;
L_089CD830:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089CD814; }
    goto L_089CD83C;
L_089CD83C:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD84C;
L_089CD84C:;
    a2 = v0 + 0;
    v0 = D_08AEEF88 - (-4216);
    f12 = BITSF(LD32(v0-4216));
    a1 = s0 + 648;
    a0 = s1 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD864;
L_089CD864:;
    goto L_089CD818;
}

/* 089CD86C */
void func_089CD86C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CD86C:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+652);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089CD8A0; }
    goto L_089CD890;
L_089CD890:;
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD898;
L_089CD898:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CD8C0; }
    goto L_089CD8A0;
L_089CD8A0:;
    a0 = s0 + 0;
    func_089CD794(a0);
    goto L_089CD8A8;
L_089CD8A8:;
    a0 = s0 + 0;
    v0 = func_089C5EAC(a0, 0, 0, 0);
    goto L_089CD8B0;
L_089CD8B0:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089CD8D0; }
    goto L_089CD8BC;
L_089CD8BC:;
    goto L_089CD8C0;
L_089CD8C0:;
    sp = sp + 16;
    return;
L_089CD8D0:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD8D8;
L_089CD8D8:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089CD8BC; }
    goto L_089CD8E4;
L_089CD8E4:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD8F4;
L_089CD8F4:;
    v1 = D_08AEEF8C - (-4212);
    f12 = BITSF(LD32(v1-4212));
    a0 = s1 + 0;
    a2 = v0 + 0;
    a1 = s0 + 652;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD90C;
L_089CD90C:;
    v0 = D_08AEEF90 - (-4208);
    a0 = LD32(s0+652);
    f12 = BITSF(LD32(v0-4208));
    func_088E00E0(a0, f12);
    goto L_089CD91C;
L_089CD91C:;
    goto L_089CD8C0;
}

/* 089CD924 */
float func_089CD924(float f12)
{
    u32 v0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_089CD924:;
    v0 = D_08AEEF94 - (-4204);
    f0 = BITSF(LD32(v0-4204));
    v0 = D_08AEEF98 - (-4200);
    f12 = f12 * f0;
    f0 = BITSF(LD32(v0-4200));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12; goto L_089CD948; }
    goto L_089CD948;
L_089CD948:;
    return f0;
}

/* 089CD950 */
void func_089CD950(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 384);
L_089CD950:;
    sp = sp - 384;
    v0 = 999;
    s0 = a0 + 0;
    a1 = LD32(a0+448);
    cnd_ = a1 == v0;
    ST32(a0+480, 0);
    if (cnd_) { goto L_089CDD20; }
    goto L_089CD980;
L_089CD980:;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    a2 = 1;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CD9A0;
L_089CD9A0:;
    a0 = v0 + 0;
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089CDD20; }
    goto L_089CD9B8;
L_089CD9B8:;
    s1 = D_08AEEF9C - (-4196);
    a3 = LD32(s0+672);
    f21 = BITSF(0);
    f0 = BITSF(LD32(s1-4196));
    a1 = sp + 16;
    ST32(sp+16, FBITS(f21));
    ST32(sp+8, FBITS(f0));
    ST32(sp+20, FBITS(f21));
    ST32(sp+24, FBITS(f0));
    ST32(sp, FBITS(f21));
    cnd_ = a3 == 0;
    ST32(sp+4, FBITS(f21));
    if (cnd_) { goto L_089CDD58; }
    goto L_089CD9E8;
L_089CD9E8:;
    v0 = LD32(s0);
    a2 = a0 + 0;
    v1 = LD32(v0+64);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CD9FC;
L_089CD9FC:;
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    goto L_089CDA0C;
L_089CDA0C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    t_ = v0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CDA2C;
L_089CDA2C:;
    v1 = s0 + 552;
    f20 = BITSF(LD32(s0+552));
    f18 = BITSF(LD32(v1+4));
    f16 = BITSF(LD32(v1+8));
    f15 = BITSF(LD32(v1+12));
    f14 = BITSF(LD32(v1+20));
    f13 = BITSF(LD32(v1+24));
    f12 = BITSF(LD32(v1+28));
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = FBITS(f20);
    {u32 a_=sp+(128);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    {u32 a_=sp+(144);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    a0 = FBITS(f18);
    {v[40]=BITSF(a0);}
    a0 = FBITS(f16);
    {v[41]=BITSF(a0);}
    a0 = FBITS(f15);
    {v[42]=BITSF(a0);}
    a0 = FBITS(f14);
    {v[36]=BITSF(a0);}
    a0 = FBITS(f13);
    {v[37]=BITSF(a0);}
    a0 = FBITS(f12);
    {v[38]=BITSF(a0);}
    {a0=FBITS(v[37]);}
    f0 = BITSF(a0);
    f19 = BITSF(a0);
    {a0=FBITS(v[42]);}
    f1 = BITSF(a0);
    f2 = BITSF(LD32(v0));
    f17 = BITSF(a0);
    a0 = FBITS(f1);
    {v[33]=BITSF(a0);}
    a0 = FBITS(f0);
    f0 = BITSF(LD32(sp+16));
    f10 = BITSF(LD32(v1+16));
    {v[34]=BITSF(a0);}
    f21 = f0 - f2;
    {a0=FBITS(v[40]);}
    f0 = BITSF(a0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f11 = BITSF(a0);
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = FBITS(f0);
    {v[32]=BITSF(a0);}
    a0 = FBITS(f10);
    {v[33]=BITSF(a0);}
    {a0=FBITS(v[38]);}
    f0 = BITSF(a0);
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    ST32(sp+16, FBITS(f21));
    {v0=FBITS(v[41]);}
    f9 = BITSF(a0);
    a0 = FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 - f1;
    f2 = f2 - f3;
    {v[34]=BITSF(a0);}
    f7 = BITSF(LD32(v1+32));
    a0 = FBITS(f21);
    {u32 a_=sp+(160);v[44]=BITSF(LD32(a_+0));v[45]=BITSF(LD32(a_+4));v[46]=BITSF(LD32(a_+8));v[47]=BITSF(LD32(a_+12));}
    f8 = BITSF(v0);
    {v[44]=BITSF(a0);}
    {v0=FBITS(v[36]);}
    a0 = FBITS(f0);
    f0 = BITSF(v0);
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f6 = BITSF(v0);
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = FBITS(f7);
    {v[32]=BITSF(a0);}
    {u32 a_=sp+(224);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = FBITS(f0);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[33]=BITSF(a0);}
    a0 = FBITS(f5);
    {v[34]=BITSF(v0);}
    {v[45]=BITSF(a0);}
    v0 = FBITS(f2);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[46]=BITSF(v0);}
    v0 = 0 + 0;
    {float t0=v[44];float t1=v[45];float t2=v[46];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v[20]=BITSF(v0);}
    {a0=FBITS(v[18]);}
    {v0=FBITS(v[17]);}
    f0 = BITSF(a0);
    f1 = BITSF(v0);
    f4 = BITSF(a0);
    f3 = BITSF(v0);
    f21 = BITSF(0);
    v0 = FBITS(f0);
    a0 = FBITS(f1);
    {v[21]=BITSF(a0);}
    {v[22]=BITSF(v0);}
    {float s0=v[20];float s1=v[21];float s2=v[22];float t0=v[20];float t1=v[21];float t2=v[22];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    {v0=FBITS(v[16]);}
    ST32(sp+32, FBITS(f20));
    fcc = FCMP(f0, f21, 2);
    f22 = f21;
    ST32(sp+48, FBITS(f10));
    ST32(sp+64, FBITS(f7));
    ST32(sp+52, FBITS(f9));
    ST32(sp+56, FBITS(f8));
    ST32(sp+60, FBITS(f6));
    ST32(sp+36, FBITS(f17));
    ST32(sp+40, FBITS(f19));
    ST32(sp+44, FBITS(f11));
    ST32(sp+96, v0);
    ST32(sp+80, v0);
    ST32(sp+16, FBITS(f21));
    ST32(sp+100, FBITS(f3));
    ST32(sp+104, FBITS(f4));
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089CDC5C; }
    goto L_089CDC20;
L_089CDC20:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    f2 = BITSF(a0);
    {v0=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    f21 = BITSF(v0);
    ST32(sp+100, a0);
    ST32(sp+104, FBITS(f2));
    ST32(sp+16, v0);
    ST32(sp+20, a0);
    ST32(sp+24, FBITS(f2));
    ST32(sp+96, v0);
    goto L_089CDC5C;
L_089CDC5C:;
    v1 = LD32(sp+4);
    {u32 a_=sp+(256);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f21);
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+20);
    {v[2]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+24);
    {v[6]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    v0 = D_08AEEFA0 - (-4192);
    f2 = BITSF(LD32(s1-4196));
    ST32(sp+112, FBITS(f0));
    a0 = sp + 112;
    a1 = sp + 116;
    f0 = BITSF(LD32(v0-4192));
    a2 = sp + 120;
    ST32(sp+120, FBITS(f2));
    ST32(sp+116, FBITS(f0));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CDCC8;
L_089CDCC8:;
    v0 = FBITS(f0);
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {v[4]=1.57079632679f;}
    a0 = s0 + 0;
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    ST32(sp+112, FBITS(f0));
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    f0 = func_089CD924(f12);
    goto L_089CDD04;
L_089CDD04:;
    f1 = BITSF(LD32(sp+20));
    fcc = FCMP(f22, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089CDD40; }
    goto L_089CDD18;
L_089CDD18:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s0+480, FBITS(f0));
    goto L_089CDD20;
L_089CDD20:;
    goto L_089CDD24;
L_089CDD24:;
    sp = sp + 384;
    return;
L_089CDD40:;
    fcc = FCMP(f1, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089CDD24; }
    goto L_089CDD50;
L_089CDD50:;
    ST32(s0+480, FBITS(f0));
    goto L_089CDD24;
L_089CDD58:;
    v0 = LD32(v0);
    f12 = f21;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+56);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CDD7C;
L_089CDD7C:;
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    goto L_089CDA0C;
}

/* 089CDD90 */
void func_089CDD90(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 384);
L_089CDD90:;
    sp = sp - 384;
    v0 = 999;
    s0 = a0 + 0;
    a1 = LD32(a0+448);
    cnd_ = a1 == v0;
    ST32(a0+484, 0);
    if (cnd_) { goto L_089CE168; }
    goto L_089CDDC0;
L_089CDDC0:;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    a2 = 1;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CDDE0;
L_089CDDE0:;
    a0 = v0 + 0;
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089CE168; }
    goto L_089CDDF8;
L_089CDDF8:;
    ST32(sp+16, 0);
    s1 = D_08AEEFA4 - (-4188);
    a1 = sp + 16;
    a3 = LD32(s0+672);
    f21 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(s1-4188));
    ST32(sp+20, FBITS(f21));
    ST32(sp+8, FBITS(f0));
    ST32(sp+24, FBITS(f0));
    ST32(sp, FBITS(f21));
    cnd_ = a3 == 0;
    ST32(sp+4, FBITS(f21));
    if (cnd_) { goto L_089CE188; }
    goto L_089CDE28;
L_089CDE28:;
    v0 = LD32(s0);
    a2 = a0 + 0;
    v1 = LD32(v0+64);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CDE3C;
L_089CDE3C:;
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    goto L_089CDE4C;
L_089CDE4C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    t_ = v0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CDE6C;
L_089CDE6C:;
    v1 = s0 + 552;
    f18 = BITSF(LD32(v1+4));
    f16 = BITSF(LD32(v1+8));
    f15 = BITSF(LD32(v1+12));
    f14 = BITSF(LD32(v1+20));
    f13 = BITSF(LD32(v1+24));
    f12 = BITSF(LD32(v1+28));
    f20 = BITSF(LD32(s0+552));
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[44]=BITSF(LD32(a_+0));v[45]=BITSF(LD32(a_+4));v[46]=BITSF(LD32(a_+8));v[47]=BITSF(LD32(a_+12));}
    a0 = FBITS(f20);
    {u32 a_=sp+(144);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = FBITS(f18);
    {v[44]=BITSF(a0);}
    a0 = FBITS(f16);
    {v[45]=BITSF(a0);}
    a0 = FBITS(f15);
    {v[46]=BITSF(a0);}
    a0 = FBITS(f14);
    {v[40]=BITSF(a0);}
    a0 = FBITS(f13);
    {v[41]=BITSF(a0);}
    a0 = FBITS(f12);
    {v[42]=BITSF(a0);}
    {a0=FBITS(v[41]);}
    f0 = BITSF(a0);
    f19 = BITSF(a0);
    {a0=FBITS(v[46]);}
    f1 = BITSF(a0);
    f2 = BITSF(LD32(v0+4));
    f17 = BITSF(a0);
    a0 = FBITS(f1);
    {v[33]=BITSF(a0);}
    a0 = FBITS(f0);
    f0 = BITSF(LD32(sp+20));
    f10 = BITSF(LD32(v1+16));
    {v[34]=BITSF(a0);}
    f21 = f0 - f2;
    {a0=FBITS(v[44]);}
    f0 = BITSF(a0);
    f1 = BITSF(LD32(v0));
    f5 = BITSF(LD32(sp+16));
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+20, FBITS(f21));
    f11 = BITSF(a0);
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = FBITS(f0);
    {v[32]=BITSF(a0);}
    a0 = FBITS(f10);
    {v[33]=BITSF(a0);}
    {a0=FBITS(v[42]);}
    f0 = BITSF(a0);
    f5 = f5 - f1;
    f4 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v1+32));
    f9 = BITSF(a0);
    {v1=FBITS(v[45]);}
    a0 = FBITS(f0);
    f0 = BITSF(v1);
    f4 = f4 - f1;
    {v[34]=BITSF(a0);}
    v0 = FBITS(f21);
    {u32 a_=sp+(160);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    a0 = FBITS(f5);
    {v[36]=BITSF(a0);}
    a0 = FBITS(f0);
    {v[37]=BITSF(v0);}
    {v0=FBITS(v[40]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f8 = BITSF(v1);
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[32]=BITSF(a0);}
    f6 = BITSF(v0);
    {v[33]=BITSF(v1);}
    a0 = FBITS(f7);
    v0 = FBITS(f4);
    {v[34]=BITSF(a0);}
    {v[38]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    {a0=FBITS(v[16]);}
    f0 = BITSF(v1);
    f1 = BITSF(a0);
    f3 = BITSF(v1);
    f2 = BITSF(a0);
    f21 = BITSF(0);
    v0 = 0 + 0;
    {u32 a_=sp+(224);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = FBITS(f1);
    a0 = FBITS(f0);
    {v[12]=BITSF(v1);}
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {v1=FBITS(v[17]);}
    ST32(sp+32, FBITS(f20));
    fcc = FCMP(f0, f21, 2);
    f22 = f21;
    ST32(sp+48, FBITS(f10));
    ST32(sp+64, FBITS(f7));
    ST32(sp+52, FBITS(f9));
    ST32(sp+56, FBITS(f8));
    ST32(sp+60, FBITS(f6));
    ST32(sp+36, FBITS(f17));
    ST32(sp+40, FBITS(f19));
    ST32(sp+44, FBITS(f11));
    ST32(sp+96, FBITS(f2));
    ST32(sp+84, v1);
    ST32(sp+20, FBITS(f21));
    ST32(sp+100, v1);
    ST32(sp+104, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+88, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_089CE098; }
    goto L_089CE060;
L_089CE060:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[1]);}
    {a0=FBITS(v[2]);}
    {v0=FBITS(v[0]);}
    f21 = BITSF(v1);
    ST32(sp+96, v0);
    ST32(sp+104, a0);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+100, v1);
    goto L_089CE098;
L_089CE098:;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    a0 = FBITS(f21);
    v0 = LD32(sp+8);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+16);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+24);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    ST32(sp+112, v0);
    v0 = D_08AEEFA8 - (-4184);
    a0 = sp + 112;
    f2 = BITSF(LD32(s1-4188));
    f0 = BITSF(LD32(v0-4184));
    a1 = sp + 116;
    a2 = sp + 120;
    ST32(sp+120, FBITS(f2));
    ST32(sp+116, FBITS(f0));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CE100;
L_089CE100:;
    v1 = FBITS(f0);
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {v[4]=1.57079632679f;}
    a0 = s0 + 0;
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    ST32(sp+112, FBITS(f0));
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    f0 = func_089CD924(f12);
    goto L_089CE13C;
L_089CE13C:;
    f1 = BITSF(LD32(sp+16));
    fcc = FCMP(f22, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+484, FBITS(f0)); goto L_089CE168; }
    goto L_089CE150;
L_089CE150:;
    fcc = FCMP(f1, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089CE16C; }
    goto L_089CE160;
L_089CE160:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s0+484, FBITS(f0));
    goto L_089CE168;
L_089CE168:;
    goto L_089CE16C;
L_089CE16C:;
    sp = sp + 384;
    return;
L_089CE188:;
    v0 = LD32(v0);
    f12 = f21;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+56);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE1AC;
L_089CE1AC:;
    {u32 a_=sp+(336);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    goto L_089CDE4C;
}

/* 089CE1C0 */
rv_t func_089CE1C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CE1C0:;
    sp = sp - 16;
    v0 = LD32(a0+844);
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089CE1EC; }
    goto L_089CE1D8;
L_089CE1D8:;
    a0 = 0 + 0;
    goto L_089CE1DC;
L_089CE1DC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089CE1EC:;
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE1F8;
L_089CE1F8:;
    v1 = 999;
    cnd_ = v0 != v1;
    a0 = 1;
    if (cnd_) { goto L_089CE1DC; }
    goto L_089CE204;
L_089CE204:;
    a0 = 0 + 0;
    goto L_089CE1DC;
}

/* 089CE20C */
void func_089CE20C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089CE20C:;
    sp = sp - 48;
    a2 = D_08C2B0A8 - (-20312);
    v1 = a2 - 20312;
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
    if (cnd_) { goto L_089CE2A4; }
    goto L_089CE258;
L_089CE258:;
    a2 = LD32(a2-20312);
    a3 = a1 + 0;
    goto L_089CE260;
L_089CE260:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089CE294; }
    goto L_089CE278;
L_089CE278:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089CE2A8; }
    goto L_089CE288;
L_089CE288:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089CE278; }
    goto L_089CE294;
L_089CE294:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089CE260; }
    goto L_089CE2A4;
L_089CE2A4:;
    v0 = LD32(sp+8);
    goto L_089CE2A8;
L_089CE2A8:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089CE2E0; }
    goto L_089CE2B0;
L_089CE2B0:;
    v0 = LD32(v0);
    goto L_089CE2B4;
L_089CE2B4:;
    a0 = sp + 0;
    v0 = LD32(v0+92);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089CE2C8; }
    goto L_089CE2C4;
L_089CE2C4:;
    ST32(v0+12, s0);
    goto L_089CE2C8;
L_089CE2C8:;
    func_08AC6778(a0, a1);
    goto L_089CE2D0;
L_089CE2D0:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_089CE2B4; }
    goto L_089CE2DC;
L_089CE2DC:;
    s1 = LD32(sp);
    goto L_089CE2E0;
L_089CE2E0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089CE364; }
    goto L_089CE2F0;
L_089CE2F0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089CE364; }
    goto L_089CE2FC;
L_089CE2FC:;
    v0 = LD32(s1);
    goto L_089CE300;
L_089CE300:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089CE354; }
    goto L_089CE314;
L_089CE314:;
    v0 = LD_U8(s0+8);
    goto L_089CE318;
L_089CE318:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089CE394; }
    goto L_089CE320;
L_089CE320:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089CE384; }
    goto L_089CE328;
L_089CE328:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089CE330;
L_089CE330:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE33C;
L_089CE33C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089CE348;
L_089CE348:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089CE318; }
    goto L_089CE350;
L_089CE350:;
    v1 = LD32(s1+4);
    goto L_089CE354;
L_089CE354:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089CE300; }
    goto L_089CE364;
L_089CE364:;
    sp = sp + 48;
    return;
L_089CE384:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089CE330;
L_089CE394:;
    s0 = LD32(s0+4);
    goto L_089CE348;
}

/* 089CE39C */
void func_089CE39C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CE39C:;
    sp = sp - 16;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089CE3E4; }
    goto L_089CE3B4;
L_089CE3B4:;
    v1 = LD32(a0);
    a0 = LD32(a0+460);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    a1 = 0x40000u;
    if (cnd_) { goto L_089CE3E4; }
    goto L_089CE3D0;
L_089CE3D0:;
    v0 = LD32(s0+844);
    v1 = v0 | a1;
    v0 = v0 & a1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+844, v1); goto L_089CE3F4; }
    goto L_089CE3E4;
L_089CE3E4:;
    goto L_089CE3E8;
L_089CE3E8:;
    sp = sp + 16;
    return;
L_089CE3F4:;
    a0 = LD32(s0+588);
    v0 = func_089CE4C8(a0);
    goto L_089CE3FC;
L_089CE3FC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CE3E8; }
    goto L_089CE404;
L_089CE404:;
    a0 = LD32(s0+588);
    func_089CE490(a0);
    goto L_089CE40C;
L_089CE40C:;
    a1 = LD32(s0+456);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE420;
L_089CE420:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089CE44C; }
    goto L_089CE428;
L_089CE428:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089CE43C;
L_089CE43C:;
    v1 = 0x58d0000u;
    v1 = v1 | 0x13bf;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089CE3E8; }
    goto L_089CE44C;
L_089CE44C:;
    a0 = 3;
    a1 = 253;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE45C;
L_089CE45C:;
    f12 = BITSF(0);
    a0 = 3;
    a1 = 253;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_089CE3E4; }
    goto L_089CE474;
L_089CE474:;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE47C;
L_089CE47C:;
    goto L_089CE3E8;
}

/* 089CE484 */
void func_089CE484(void)
{
    u32 v0 = 0;
L_089CE484:;
    v0 = D_08C2B1B8 - (-20040);
    ST32(v0-20040, 0);
    return;
}

/* 089CE490 */
void func_089CE490(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_089CE490:;
    a3 = D_08C2B1B8 - (-20040);
    v1 = LD32(a3-20040);
    v0 = D_08C2B0B8 - (-20296);
    v0 = v0 - 20296;
    a2 = a0 + 0;
    a0 = v1 << 2;
    a0 = a0 + v0;
    v0 = 64;
    cnd_ = v1 == v0;
    a1 = v1 + 1;
    if (cnd_) { goto L_089CE4C0; }
    goto L_089CE4B8;
L_089CE4B8:;
    ST32(a0, a2);
    ST32(a3-20040, a1);
    goto L_089CE4C0;
L_089CE4C0:;
    return;
}

/* 089CE4C8 */
u32 func_089CE4C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_089CE4C8:;
    v0 = D_08C2B1B8 - (-20040);
    v0 = LD32(v0-20040);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089CE504; }
    goto L_089CE4D8;
L_089CE4D8:;
    a3 = v0 + 0;
    v0 = D_08C2B0B8 - (-20296);
    a1 = v0 - 20296;
    v0 = LD32(a1);
    goto L_089CE4E8;
L_089CE4E8:;
    a2 = a2 + 1;
    v1 = a2 < a3;
    a1 = a1 + 4;
    cnd_ = v0 == a0;
    t0 = 1;
    if (cnd_) { goto L_089CE508; }
    goto L_089CE4FC;
L_089CE4FC:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_089CE4E8; }
    goto L_089CE504;
L_089CE504:;
    t0 = 0 + 0;
    goto L_089CE508;
L_089CE508:;
    v0 = t0 + 0;
    return v0;
}

/* 089CE510 */
void func_089CE510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CE510:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+436);
    cnd_ = v0 == 0;
    f21 = f12;
    if (cnd_) { goto L_089CE658; }
    goto L_089CE540;
L_089CE540:;
    v0 = LD32(a0+852);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089CE65C; }
    goto L_089CE550;
L_089CE550:;
    v0 = LD32(a0+844);
    v1 = 0x80000u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089CE65C; }
    goto L_089CE564;
L_089CE564:;
    v0 = LD32(a0+840);
    v1 = 999;
    cnd_ = v0 == v1;
    a0 = 0x8080;
    if (cnd_) { goto L_089CE584; }
    goto L_089CE574;
L_089CE574:;
    cnd_ = a1 == v1;
    if (cnd_) { a1 = 8; goto L_089CE588; }
    goto L_089CE57C;
L_089CE57C:;
    cnd_ = v0 == a1;
    if (cnd_) { goto L_089CE63C; }
    goto L_089CE584;
L_089CE584:;
    a1 = 8;
    goto L_089CE588;
L_089CE588:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE594;
L_089CE594:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_089CE5F0; }
    goto L_089CE59C;
L_089CE59C:;
    a3 = LD32(s2+436);
    v0 = LD32(v0+24);
    a0 = t1 + 0;
    a1 = 1;
    ST32(v0+4, s0);
    a2 = 1;
    ST32(v0, a3);
    v1 = LD32(s2);
    t0 = LD32(t1+28);
    v0 = LD32(v1-16);
    t0 = t0 | 0x1;
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(t1+4, v1);
    a3 = LD32(s2);
    v0 = LD32(a3-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(t1+28, t0);
    ST32(t1, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE5F0;
L_089CE5F0:;
    a0 = 0x8081;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE604;
L_089CE604:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089CE638; }
    goto L_089CE60C;
L_089CE60C:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE620;
L_089CE620:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE628;
L_089CE628:;
    v0 = LD32(s2+844);
    v1 = 0x80000u;
    v0 = v0 | v1;
    ST32(s2+844, v0);
    goto L_089CE638;
L_089CE638:;
    goto L_089CE63C;
L_089CE63C:;
    sp = sp + 32;
    return;
L_089CE658:;
    v0 = LD32(s2);
    goto L_089CE65C;
L_089CE65C:;
    v1 = LD32(v0+496);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE668;
L_089CE668:;
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_089CE63C; }
    goto L_089CE678;
L_089CE678:;
    f20 = BITSF(LD32(s2+52));
    v0 = D_08B285A0 - (-31328);
    v1 = LD32(s2);
    f20 = f20 * f21;
    f0 = BITSF(LD32(v0-31328));
    v0 = LD32(v1+500);
    a0 = s2 + 0;
    t_ = v0;
    f20 = f20 * f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE69C;
L_089CE69C:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a1 = 32;
    a0 = 0x8001;
    f21 = f20 * f0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE6B4;
L_089CE6B4:;
    s0 = LD32(v0+24);
    s1 = v0 + 0;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089CE6C4;
L_089CE6C4:;
    ST32(s0+12, FBITS(f21));
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(s2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE6EC;
L_089CE6EC:;
    v1 = 0x9e500000u;
    v1 = v1 | 0x986;
    ST32(s0, v1);
    a1 = s1 + 0;
    ST32(s0+8, v0);
    v0 = LD32(s2);
    a0 = LD32(v0-16);
    a0 = s2 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE714;
L_089CE714:;
    a0 = s2 + 0;
    { rv_t r_ = func_089CD7C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE71C;
L_089CE71C:;
    goto L_089CE63C;
}

/* 089CE724 */
void func_089CE724(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_089CE724:;
    sp = sp - 320;
    s0 = a0 + 0;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    a2 = LD32(a1+8);
    ST32(sp, v0);
    v0 = D_08AEEFAC - (-4180);
    ST32(sp+8, a2);
    ST32(sp+4, v1);
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v1 = LD32(a1+12);
    f20 = BITSF(LD32(v0-4180));
    a1 = LD32(a0);
    ST32(sp+16, FBITS(f1));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+12, v1);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+56, FBITS(f20));
    v0 = LD32(a1+240);
    ST32(sp+48, 0);
    t_ = v0;
    ST32(sp+52, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE7AC;
L_089CE7AC:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(96);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(176);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+56);
    {v[21]=BITSF(v0);}
    v0 = LD32(sp+16);
    {v[22]=BITSF(v1);}
    {v[24]=BITSF(v0);}
    v1 = LD32(sp+20);
    v0 = LD32(sp+24);
    {v[25]=BITSF(v1);}
    {v[26]=BITSF(v0);}
    v0 = D_08AEEFB0 - (-4176);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f0 = BITSF(LD32(v0-4176));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    ST32(sp+84, FBITS(f0));
    v0 = FBITS(f1);
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[17]);}
    f2 = BITSF(v0);
    f0 = BITSF(v0);
    a0 = sp + 80;
    a1 = sp + 84;
    a2 = sp + 88;
    v0 = FBITS(f0);
    ST32(sp+88, FBITS(f20));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+64, FBITS(f3));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[24];float t1=v[25];float t2=v[26];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+68, FBITS(f2));
    {v0=FBITS(v[0]);}
    ST32(sp+72, FBITS(f4));
    ST32(sp+80, v0);
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    f0 = func_089D005C(a0, a1, a2);
    goto L_089CE8D0;
L_089CE8D0:;
    v0 = FBITS(f0);
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    v0 = LD32(s0);
    {v[4]=1.57079632679f;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    v1 = LD32(v0+492);
    ST32(sp+80, FBITS(f0));
    a0 = s0 + 0;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CE914;
L_089CE914:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    a0 = s0 + 540;
    if (cnd_) { goto L_089CE934; }
    goto L_089CE924;
L_089CE924:;
    v0 = LD32(s0+436);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CE98C; }
    goto L_089CE930;
L_089CE930:;
    a0 = s0 + 540;
    goto L_089CE934;
L_089CE934:;
    v0 = LD32(s0+540);
    a1 = LD32(a0+8);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s0+836));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089CE978; }
    goto L_089CE978;
L_089CE978:;
    a0 = s0 + 0;
    f12 = f1;
    a1 = 999;
    func_089CE510(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089CE988;
L_089CE988:;
    goto L_089CE98C;
L_089CE98C:;
    sp = sp + 320;
    return;
}

/* 089CE99C */
void func_089CE99C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089CE99C:;
    sp = sp - 64;
    a2 = 1;
    s0 = a0 + 0;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    s2 = LD32(a1+4);
    a1 = s2 + 0;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CE9D0;
L_089CE9D0:;
    s1 = v0 + 0;
    v0 = LD32(s0+436);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089CEB8C; }
    goto L_089CE9E0;
L_089CE9E0:;
    cnd_ = s1 == 0;
    a0 = s0 + 540;
    if (cnd_) { goto L_089CEAA4; }
    goto L_089CE9E8;
L_089CE9E8:;
    v0 = LD32(s0+540);
    a1 = LD32(a0+8);
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s0+836));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089CEA2C; }
    goto L_089CEA2C;
L_089CEA2C:;
    a2 = D_08AEEFB4 - (-4172);
    f0 = BITSF(LD32(a2-4172));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_089CEA44; }
    goto L_089CEA44;
L_089CEA44:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    f20 = f1;
    if (cnd_) { goto L_089CEA58; }
    goto L_089CEA54;
L_089CEA54:;
    f20 = BITSF(0);
    goto L_089CEA58;
L_089CEA58:;
    v1 = LD32(s1);
    a0 = 0xffff0000u;
    a0 = a0 | 0x7ffc;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD_U16(v0+8);
    v1 = v1 + a0;
    v0 = v1 < 0x1bu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_089CEAC0; }
    goto L_089CEA80;
L_089CEA80:;
    v1 = D_08ADE794 - (-6252);
    v1 = v1 - 6252;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089CEA98u: goto L_089CEA98; case 0x089CEAA4u: goto L_089CEAA4; case 0x089CEAC0u: goto L_089CEAC0; case 0x089CEAD8u: goto L_089CEAD8; default: rs_break(0, 0x089cea90); }
L_089CEA98:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_089CEF5C(a0, a1, 0, 0, 0);
    goto L_089CEAA4;
L_089CEAA4:;
    goto L_089CEAA8;
L_089CEAA8:;
    sp = sp + 64;
    return;
L_089CEAC0:;
    a0 = s0 + 0;
    goto L_089CEAC4;
L_089CEAC4:;
    f12 = f20;
    a1 = s2 + 0;
    func_089CE510(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089CEAD0;
L_089CEAD0:;
    goto L_089CEAA8;
L_089CEAD8:;
    a3 = LD32(s0);
    v0 = LD32(s1+456);
    v1 = LD32(a3-16);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_089CEAA8; }
    goto L_089CEAF4;
L_089CEAF4:;
    v0 = LD32(s1+844);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(a2-4172));
    if (cnd_) { goto L_089CEB54; }
    goto L_089CEB04;
L_089CEB04:;
    a0 = s1 + 540;
    v0 = LD32(s1+540);
    a1 = LD32(a0+8);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s1+836));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089CEB4C; }
    goto L_089CEB4C;
L_089CEB4C:;
    f20 = f20 + f1;
    f0 = BITSF(LD32(a2-4172));
    goto L_089CEB54;
L_089CEB54:;
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    f1 = f20;
    if (cnd_) { goto L_089CEB68; }
    goto L_089CEB64;
L_089CEB64:;
    f1 = f0;
    goto L_089CEB68;
L_089CEB68:;
    v0 = LD32(a3-16);
    a0 = s1 + 0;
    f12 = f1;
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    f20 = f1;
    func_089CE510(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089CEB84;
L_089CEB84:;
    a0 = s0 + 0;
    goto L_089CEAC4;
L_089CEB8C:;
    f12 = BITSF(0);
    a1 = s2 + 0;
    func_089CE510(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089CEB98;
L_089CEB98:;
    goto L_089CE9E0;
}

/* 089CEBA0 */
void func_089CEBA0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CEBA0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+40);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_089CEBE8; }
    goto L_089CEBC0;
L_089CEBC0:;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v0 = 0x8004;
    v1 = s1 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_089CEBF8; }
    goto L_089CEBDC;
L_089CEBDC:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a0); goto L_089CEBFC; }
    goto L_089CEBE4;
L_089CEBE4:;
    goto L_089CEBE8;
L_089CEBE8:;
    sp = sp + 16;
    return;
L_089CEBF8:;
    v1 = LD32(a0);
    goto L_089CEBFC;
L_089CEBFC:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089CEBE8; }
    goto L_089CEC08;
L_089CEC08:;
    v0 = func_088BB294(a0);
    goto L_089CEC10;
L_089CEC10:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089CEC30; }
    goto L_089CEC18;
L_089CEC18:;
    a1 = s0 + 0;
    goto L_089CEC1C;
L_089CEC1C:;
    a0 = s1 + 0;
    func_089CE99C(a0, a1);
    goto L_089CEC24;
L_089CEC24:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089CEC1C; }
    goto L_089CEC30;
L_089CEC30:;
    v0 = LD32(s1+844);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CEBE8; }
    goto L_089CEC40;
L_089CEC40:;
    a0 = LD32(s1+40);
    v0 = func_088BB2B8(a0);
    goto L_089CEC48;
L_089CEC48:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089CEBE4; }
    goto L_089CEC50;
L_089CEC50:;
    a1 = s0 + 0;
    goto L_089CEC54;
L_089CEC54:;
    a0 = s1 + 0;
    func_089CE724(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089CEC5C;
L_089CEC5C:;
    s0 = LD32(s0+20);
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089CEC54; }
    goto L_089CEC68;
L_089CEC68:;
    goto L_089CEBE8;
}

/* 089CEC70 */
void func_089CEC70(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CEC70:;
    sp = sp - 16;
    v1 = LD32(a1);
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CEC8C;
L_089CEC8C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CECA4; }
    goto L_089CEC98;
L_089CEC98:;
    f0 = func_08A19B08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089CECA0;
L_089CECA0:;
    ST32(s0+256, 0);
    goto L_089CECA4;
L_089CECA4:;
    sp = sp + 16;
    return;
}

/* 089CECB4 */
void func_089CECB4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CECB4:;
    sp = sp - 16;
    v1 = LD32(a1);
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CECD0;
L_089CECD0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089CECEC; }
    goto L_089CECE0;
L_089CECE0:;
    { rv_t r_ = func_08A199D8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CECE8;
L_089CECE8:;
    ST32(s0+256, 0);
    goto L_089CECEC;
L_089CECEC:;
    sp = sp + 16;
    return;
}

/* 089CECFC */
u64 func_089CECFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CECFC:;
    sp = sp - 16;
    v0 = 999;
    s0 = a0 + 0;
    v1 = LD32(a0+524);
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_089CED40; }
    goto L_089CED24;
L_089CED24:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089CED40:;
    v0 = LD32(s0);
    a1 = LD32(s0+460);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 == v0;
    s2 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_089CEDA0; }
    goto L_089CED5C;
L_089CED5C:;
    s1 = 999;
    a0 = s2 - 20312;
    goto L_089CED64;
L_089CED64:;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CED6C;
L_089CED6C:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089CED24; }
    goto L_089CED78;
L_089CED78:;
    v0 = LD32(v0+524);
    cnd_ = v0 != s1;
    a0 = 1;
    if (cnd_) { goto L_089CED24; }
    goto L_089CED84;
L_089CED84:;
    v0 = LD32(s0);
    a1 = LD32(a1+460);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 != v0;
    if (cnd_) { a0 = s2 - 20312; goto L_089CED64; }
    goto L_089CEDA0;
L_089CEDA0:;
    a0 = 0 + 0;
    goto L_089CED24;
}

/* 089CEDA8 */
rv_t func_089CEDA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CEDA8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089CECFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CEDBC;
L_089CEDBC:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_089CEDCC; }
    goto L_089CEDC4;
L_089CEDC4:;
    v0 = LD_U8(s0+444);
    a0 = v0 < 0x1u;
    goto L_089CEDCC;
L_089CEDCC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089CEDE0 */
void func_089CEDE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089CEDE0:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    s1 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CEE04;
L_089CEE04:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CEE34; }
    goto L_089CEE0C;
L_089CEE0C:;
    v1 = LD32(s1+844);
    v0 = 0x10000u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CEED0; }
    goto L_089CEE20;
L_089CEE20:;
    v0 = 0x10000u;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CEE48; }
    goto L_089CEE30;
L_089CEE30:;
    goto L_089CEE34;
L_089CEE34:;
    sp = sp + 16;
    return;
L_089CEE48:;
    a0 = s1 + 0;
    { u64 r_ = func_089CECFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CEE50;
L_089CEE50:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089CEE34; }
    goto L_089CEE58;
L_089CEE58:;
    v1 = LD32(s1);
    v0 = LD32(v1+476);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CEE68;
L_089CEE68:;
    v1 = LD32(s1);
    a1 = LD32(s1+460);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    s2 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_089CEE30; }
    goto L_089CEE84;
L_089CEE84:;
    a0 = s2 - 20312;
    goto L_089CEE88;
L_089CEE88:;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CEE90;
L_089CEE90:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CEE30; }
    goto L_089CEE9C;
L_089CEE9C:;
    v0 = LD32(v0);
    v1 = LD32(v0+476);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CEEAC;
L_089CEEAC:;
    a0 = LD32(s1);
    a1 = LD32(s0+460);
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    a0 = s2 - 20312;
    if (cnd_) { goto L_089CEE88; }
    goto L_089CEEC8;
L_089CEEC8:;
    goto L_089CEE34;
L_089CEED0:;
    a0 = s1 + 0;
    { u64 r_ = func_089CECFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CEED8;
L_089CEED8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089CEEE8; }
    goto L_089CEEE0;
L_089CEEE0:;
    v1 = LD32(s1+844);
    goto L_089CEE20;
L_089CEEE8:;
    v0 = LD32(v1+472);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CEEF4;
L_089CEEF4:;
    v1 = LD32(s1);
    a1 = LD32(s1+460);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    s2 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_089CEE30; }
    goto L_089CEF10;
L_089CEF10:;
    a0 = s2 - 20312;
    goto L_089CEF14;
L_089CEF14:;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CEF1C;
L_089CEF1C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089CEE30; }
    goto L_089CEF28;
L_089CEF28:;
    v0 = LD32(v0);
    v1 = LD32(v0+472);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CEF38;
L_089CEF38:;
    a0 = LD32(s1);
    a1 = LD32(s0+460);
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    a0 = s2 - 20312;
    if (cnd_) { goto L_089CEF14; }
    goto L_089CEF54;
L_089CEF54:;
    goto L_089CEE34;
}

/* 089CEF5C */
void func_089CEF5C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t5 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s7 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[1392] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1392);
L_089CEF5C:;
    sp = sp - 1392;
    s4 = a1 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v0 = 0x801d;
    v1 = a0 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089CF034; }
    goto L_089CEFD0;
L_089CEFD0:;
    v0 = 0x8004;
    cnd_ = v1 == v0;
    if (cnd_) { {u32 a_=sp+(1024);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));} goto L_089CF038; }
    goto L_089CEFDC;
L_089CEFDC:;
    goto L_089CEFE0;
L_089CEFE0:;
    goto L_089CEFE4;
L_089CEFE4:;
    sp = sp + 1392;
    return;
L_089CF034:;
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    goto L_089CF038;
L_089CF038:;
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    v0 = func_089C6AE8(a0, t1, t2, t3);
    goto L_089CF078;
L_089CF078:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089CEFE0; }
    goto L_089CF080;
L_089CF080:;
    a0 = s2 + 0;
    v0 = func_089C68AC(a0, 0, 0, 0);
    goto L_089CF088;
L_089CF088:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089CEFDC; }
    goto L_089CF090;
L_089CF090:;
    v1 = LD32(s2+40);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089CEFE0; }
    goto L_089CF09C;
L_089CF09C:;
    s1 = LD32(v1+16);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089CEFE4; }
    goto L_089CF0A8;
L_089CF0A8:;
    v1 = LD32(s4);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF0B8;
L_089CF0B8:;
    v1 = D_08AEEFB8 - (-4168);
    f1 = BITSF(LD32(v1-4168));
    ST32(sp+16, 0);
    v1 = s1 + 4;
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v0 = D_08AEEFBC - (-4164);
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    f5 = BITSF(LD32(v0-4164));
    f3 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+16));
    f2 = f3 + f5;
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+16, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    f3 = BITSF(LD32(v1+16));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s1+4));
    f2 = f3 + f5;
    ST32(sp+24, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+16));
    f3 = f0 + f5;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+48, FBITS(f2));
    f3 = BITSF(LD32(v1+20));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+12));
    f2 = f3 - f5;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+20));
    f2 = f4 - f5;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+60, FBITS(f2));
    ST32(sp+20, FBITS(f2));
    f3 = BITSF(LD32(v1+20));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+4));
    f1 = f3 - f5;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+64, FBITS(f1));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+20));
    f2 = f4 - f5;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    f3 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s1+4));
    f5 = f3 + f5;
    v1 = LD32(s2);
    ST32(sp+20, FBITS(f1));
    ST32(sp+76, FBITS(f5));
    ST32(sp+16, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF274;
L_089CF274:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(336);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(352);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {v[33]=BITSF(a0);}
    a0 = LD32(s2);
    {u32 a_=sp+(1072);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+32);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = LD32(sp+36);
    {u32 a_=sp+(320);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+40);
    {v[21]=BITSF(v0);}
    v0 = LD32(a0+240);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[16]);}
    {v1=FBITS(v[18]);}
    f2 = BITSF(a0);
    f3 = BITSF(v1);
    ST32(sp+32, a0);
    {v1=FBITS(v[17]);}
    a0 = s2 + 0;
    ST32(sp+80, FBITS(f2));
    ST32(sp+16, FBITS(f2));
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    ST32(sp+84, v1);
    ST32(sp+88, FBITS(f3));
    ST32(sp+20, v1);
    t_ = v0;
    ST32(sp+24, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF344;
L_089CF344:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(400);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(416);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {v[33]=BITSF(a0);}
    a0 = LD32(s2);
    {u32 a_=sp+(1136);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+32);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+44);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = LD32(sp+48);
    {u32 a_=sp+(384);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[21]=BITSF(v0);}
    v0 = LD32(a0+240);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[18]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[17]);}
    f0 = BITSF(a0);
    {v1=FBITS(v[16]);}
    ST32(sp+52, FBITS(f3));
    a0 = s2 + 0;
    ST32(sp+48, FBITS(f0));
    ST32(sp+20, FBITS(f0));
    ST32(sp+84, FBITS(f0));
    ST32(sp+44, v1);
    ST32(sp+16, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+80, v1);
    t_ = v0;
    ST32(sp+88, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF414;
L_089CF414:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(464);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(480);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {v[33]=BITSF(a0);}
    a0 = LD32(s2);
    {u32 a_=sp+(1200);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+32);
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+56);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = LD32(sp+60);
    {u32 a_=sp+(448);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+64);
    {v[21]=BITSF(v0);}
    v0 = LD32(a0+240);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[16]);}
    {v1=FBITS(v[18]);}
    f2 = BITSF(a0);
    f3 = BITSF(v1);
    ST32(sp+56, a0);
    {v1=FBITS(v[17]);}
    a0 = s2 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+80, FBITS(f2));
    ST32(sp+60, v1);
    ST32(sp+64, FBITS(f3));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+84, v1);
    t_ = v0;
    ST32(sp+88, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF4E4;
L_089CF4E4:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(528);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(544);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {v[33]=BITSF(a0);}
    a0 = LD32(s2);
    {u32 a_=sp+(1264);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+32);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[34]=BITSF(a1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = LD32(sp+68);
    v0 = LD32(sp+72);
    {u32 a_=sp+(512);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+76);
    {v[21]=BITSF(v0);}
    v0 = LD32(a0+244);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[18]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[17]);}
    f0 = BITSF(a0);
    {v1=FBITS(v[16]);}
    ST32(sp+76, FBITS(f3));
    a0 = s2 + 0;
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f0));
    ST32(sp+16, v1);
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    ST32(sp+80, v1);
    ST32(sp+84, FBITS(f0));
    t_ = v0;
    ST32(sp+88, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF5B4;
L_089CF5B4:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    f2 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    v1 = LD32(s2);
    f2 = f2 + f3;
    f0 = f0 + f4;
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF5F4;
L_089CF5F4:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(sp+44));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    f2 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+52));
    v1 = LD32(s2);
    f2 = f2 + f3;
    f0 = f0 + f4;
    ST32(sp+44, FBITS(f1));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f0));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF634;
L_089CF634:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(sp+56));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    f2 = BITSF(LD32(sp+60));
    f0 = BITSF(LD32(sp+64));
    v1 = LD32(s2);
    f2 = f2 + f3;
    f0 = f0 + f4;
    ST32(sp+56, FBITS(f1));
    ST32(sp+60, FBITS(f2));
    ST32(sp+64, FBITS(f0));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CF674;
L_089CF674:;
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(sp+72));
    f3 = BITSF(LD32(sp+40));
    v1 = D_08AEEFC0 - (-4160);
    f2 = f2 + f0;
    f5 = BITSF(LD32(v1-4160));
    ST32(sp+576, FBITS(f3));
    {u32 a_=sp+(656);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(sp+60));
    f0 = BITSF(LD32(v0));
    f20 = BITSF(LD32(sp+36));
    ST32(sp+584, FBITS(f3));
    f3 = f2 + f5;
    {u32 a_=sp+(640);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(v0+8));
    f19 = BITSF(LD32(sp+32));
    ST32(sp+136, FBITS(f3));
    {u32 a_=sp+(672);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(sp+68));
    f7 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+76));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+44));
    f4 = f4 + f1;
    f1 = f7 - f20;
    f0 = f0 - f19;
    {u32 a_=sp+(752);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(s0);}
    ST32(sp+20, FBITS(f1));
    {v[8]=BITSF(s0);}
    {v[28]=BITSF(s0);}
    f1 = BITSF(LD32(sp+576));
    ST32(sp+16, FBITS(f0));
    {v[32]=BITSF(s0);}
    f6 = BITSF(0);
    f0 = BITSF(LD32(sp+52));
    f0 = f0 - f1;
    f1 = f7 + f5;
    ST32(sp+24, FBITS(f0));
    f0 = f20 + f5;
    ST32(sp+112, FBITS(f1));
    f1 = BITSF(LD32(sp+56));
    ST32(sp+100, FBITS(f0));
    ST32(sp+580, FBITS(f1));
    f1 = BITSF(LD32(sp+112));
    f0 = BITSF(LD32(sp+584));
    f1 = f1 - f7;
    f5 = f0 + f5;
    f0 = BITSF(LD32(sp+64));
    s1 = FBITS(f1);
    ST32(sp+588, FBITS(f0));
    {v[29]=BITSF(s1);}
    {v[30]=BITSF(s0);}
    f0 = BITSF(LD32(sp+136));
    f1 = BITSF(LD32(sp+100));
    f0 = f0 - f2;
    f1 = f1 - f20;
    s5 = FBITS(f0);
    t1 = FBITS(f1);
    f0 = BITSF(LD32(sp+580));
    f1 = BITSF(LD32(sp+44));
    {v[21]=BITSF(t1);}
    {v[9]=BITSF(s5);}
    f0 = f0 - f1;
    f1 = BITSF(LD32(sp+52));
    {v[10]=BITSF(s0);}
    {v[22]=BITSF(s0);}
    t3 = FBITS(f0);
    f0 = BITSF(LD32(sp+588));
    {v[36]=BITSF(t3);}
    f0 = f0 - f1;
    f1 = f19 - f3;
    t5 = FBITS(f0);
    f0 = BITSF(LD32(sp+584));
    s7 = FBITS(f1);
    f1 = f3 - f19;
    f0 = f5 - f0;
    {v[16]=BITSF(s7);}
    s3 = FBITS(f0);
    f0 = BITSF(LD32(sp+576));
    ST32(sp+208, FBITS(f1));
    {u32 a_=sp+(608);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f0 = f0 - f4;
    f1 = BITSF(LD32(sp+588));
    v1 = LD32(sp+20);
    v0 = LD32(sp+208);
    t9 = FBITS(f0);
    f0 = f2 - f20;
    f1 = f4 - f1;
    {v[12]=BITSF(v0);}
    {u32 a_=sp+(624);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+212, FBITS(f0));
    {u32 a_=sp+(592);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+576));
    v0 = LD32(sp+212);
    a3 = FBITS(f1);
    f0 = f4 - f0;
    {v[13]=BITSF(v0);}
    {v[33]=BITSF(s3);}
    {v[34]=BITSF(s0);}
    ST32(sp+216, FBITS(f0));
    f0 = BITSF(LD32(sp+584));
    v0 = LD32(sp+216);
    {v[14]=BITSF(v0);}
    f7 = f0 - f7;
    f0 = BITSF(LD32(sp+580));
    v0 = LD32(sp+16);
    {v[0]=BITSF(v0);}
    f0 = f3 - f0;
    {v[4]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    v0 = LD32(sp+24);
    ST32(sp+688, FBITS(f0));
    {v[2]=BITSF(v0);}
    a0 = FBITS(f7);
    f0 = BITSF(LD32(sp+584));
    {v[37]=BITSF(a0);}
    {v[5]=BITSF(v1);}
    f0 = f2 - f0;
    a0 = LD32(sp+688);
    {v[6]=BITSF(v0);}
    {v[24]=BITSF(a0);}
    a1 = FBITS(f0);
    f0 = f20 - f2;
    {v[38]=BITSF(t5);}
    {v[25]=BITSF(a1);}
    {v[26]=BITSF(a3);}
    t7 = FBITS(f0);
    {v[17]=BITSF(t7);}
    {v[18]=BITSF(t9);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[40]=d0;v[41]=d1;v[42]=d2;}
    {a0=FBITS(v[42]);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[20];float t1=v[21];float t2=v[22];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    ST32(sp+768, a0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];float t1=v[13];float t2=v[14];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v0=FBITS(v[0]);}
    {a0=FBITS(v[2]);}
    f1 = BITSF(v0);
    f10 = BITSF(a0);
    {a0=FBITS(v[1]);}
    f0 = BITSF(a0);
    {float s0=v[36];float s1=v[37];float s2=v[38];float t0=v[28];float t1=v[29];float t2=v[30];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v1=FBITS(v[10]);}
    f9 = BITSF(v0);
    f21 = BITSF(v1);
    v0 = FBITS(f0);
    v1 = FBITS(f1);
    {u32 a_=sp+(784);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f8 = BITSF(a0);
    {v[12]=BITSF(v1);}
    {a0=FBITS(v[8]);}
    {v[13]=BITSF(v0);}
    v1 = FBITS(f10);
    f26 = BITSF(a0);
    {v[14]=BITSF(v1);}
    {a0=FBITS(v[0]);}
    {v1=FBITS(v[2]);}
    {v0=FBITS(v[9]);}
    f13 = BITSF(v1);
    f25 = BITSF(v0);
    {v0=FBITS(v[1]);}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=v[32];float t1=v[33];float t2=v[34];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v1=FBITS(v[2]);}
    f16 = BITSF(v1);
    {v1=FBITS(v[40]);}
    f1 = BITSF(v1);
    f0 = BITSF(FBITS(f25) ^ 0x80000000u);
    f11 = BITSF(a0);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    {a0=FBITS(v[0]);}
    f14 = BITSF(a0);
    {a0=FBITS(v[41]);}
    ST32(sp+772, FBITS(f1));
    f18 = BITSF(a0);
    ST32(sp+1296, FBITS(f0));
    f12 = BITSF(v0);
    f0 = BITSF(FBITS(f18) ^ 0x80000000u);
    f1 = BITSF(LD32(sp+768));
    {v0=FBITS(v[1]);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f15 = BITSF(v0);
    {v0=FBITS(v[0]);}
    ST32(sp+1280, v0);
    f29 = BITSF(FBITS(f26) ^ 0x80000000u);
    f30 = BITSF(FBITS(f21) ^ 0x80000000u);
    ST32(sp+780, FBITS(f1));
    f31 = BITSF(FBITS(f11) ^ 0x80000000u);
    f28 = BITSF(FBITS(f12) ^ 0x80000000u);
    f1 = BITSF(LD32(sp+576));
    ST32(sp+776, FBITS(f0));
    f27 = BITSF(FBITS(f13) ^ 0x80000000u);
    f24 = BITSF(FBITS(f14) ^ 0x80000000u);
    f0 = BITSF(LD32(sp+1280));
    ST32(sp+68, FBITS(f3));
    f23 = BITSF(FBITS(f15) ^ 0x80000000u);
    fcc = FCMP(f0, f6, 2);
    ST32(sp+72, FBITS(f2));
    f22 = BITSF(FBITS(f16) ^ 0x80000000u);
    ST32(sp+76, FBITS(f4));
    ST32(sp+96, FBITS(f19));
    ST32(sp+104, FBITS(f1));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+44));
    ST32(sp+132, FBITS(f3));
    ST32(sp+116, FBITS(f1));
    f1 = BITSF(LD32(sp+588));
    ST32(sp+108, FBITS(f0));
    ST32(sp+128, FBITS(f1));
    f0 = BITSF(LD32(sp+580));
    f1 = BITSF(LD32(sp+1296));
    ST32(sp+124, FBITS(f5));
    ST32(sp+120, FBITS(f0));
    ST32(sp+160, FBITS(f1));
    f0 = BITSF(LD32(sp+772));
    f1 = BITSF(LD32(sp+776));
    ST32(sp+140, FBITS(f4));
    ST32(sp+192, FBITS(f0));
    ST32(sp+156, FBITS(f29));
    ST32(sp+164, FBITS(f30));
    ST32(sp+144, FBITS(f9));
    ST32(sp+148, FBITS(f8));
    ST32(sp+152, FBITS(f10));
    ST32(sp+80, FBITS(f6));
    ST32(sp+88, FBITS(f6));
    ST32(sp+168, FBITS(f31));
    ST32(sp+172, FBITS(f28));
    ST32(sp+176, FBITS(f27));
    ST32(sp+180, FBITS(f24));
    ST32(sp+184, FBITS(f23));
    ST32(sp+188, FBITS(f22));
    ST32(sp+208, s7);
    ST32(sp+212, t7);
    ST32(sp+216, t9);
    ST32(sp+84, s5);
    ST32(sp+196, FBITS(f1));
    f0 = BITSF(LD32(sp+768));
    f3 = BITSF(LD32(sp+780));
    f1 = BITSF(LD32(sp+772));
    ST32(sp+24, FBITS(f0));
    ST32(sp+200, FBITS(f3));
    ST32(sp+232, FBITS(f0));
    f3 = BITSF(LD32(sp+776));
    f0 = BITSF(LD32(sp+780));
    ST32(sp+16, v1);
    ST32(sp+20, a0);
    ST32(sp+224, v1);
    ST32(sp+228, a0);
    ST32(sp+240, FBITS(f1));
    ST32(sp+244, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+248, FBITS(f0));
    if (cnd_) { goto L_089CFAA4; }
    goto L_089CFA70;
L_089CFA70:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+144, v1);
    ST32(sp+148, a0);
    ST32(sp+152, v0);
    goto L_089CFAA4;
L_089CFAA4:;
    v0 = LD32(sp+156);
    {u32 a_=sp+(800);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+160);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+164);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+168);
    if (cnd_) { goto L_089CFB18; }
    goto L_089CFAE0;
L_089CFAE0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+156, v1);
    ST32(sp+160, a0);
    ST32(sp+164, v0);
    v0 = LD32(sp+168);
    goto L_089CFB18;
L_089CFB18:;
    {u32 a_=sp+(816);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+172);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+176);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+180);
    if (cnd_) { goto L_089CFB88; }
    goto L_089CFB50;
L_089CFB50:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+168, v1);
    ST32(sp+172, a0);
    ST32(sp+176, v0);
    v0 = LD32(sp+180);
    goto L_089CFB88;
L_089CFB88:;
    {u32 a_=sp+(832);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+184);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+188);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+192);
    if (cnd_) { goto L_089CFBF8; }
    goto L_089CFBC0;
L_089CFBC0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+180, v1);
    ST32(sp+184, a0);
    ST32(sp+188, v0);
    v0 = LD32(sp+192);
    goto L_089CFBF8;
L_089CFBF8:;
    {u32 a_=sp+(848);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+196);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+200);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    f7 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_089CFC68; }
    goto L_089CFC30;
L_089CFC30:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+192, v1);
    ST32(sp+196, a0);
    ST32(sp+200, v0);
    f7 = BITSF(LD32(sp+8));
    goto L_089CFC68;
L_089CFC68:;
    f0 = BITSF(LD32(sp+576));
    f5 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f4 = f7 - f0;
    f0 = BITSF(LD32(sp+580));
    f2 = f5 - f19;
    f3 = f6 - f20;
    f5 = f5 - f0;
    f0 = BITSF(LD32(sp+584));
    v0 = LD32(sp+144);
    f8 = BITSF(0);
    f6 = f6 - f0;
    a0 = FBITS(f2);
    a1 = FBITS(f3);
    a2 = FBITS(f4);
    {u32 a_=sp+(864);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(880);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v0 = LD32(sp+148);
    {v[6]=BITSF(a2);}
    {v[1]=BITSF(v0);}
    f0 = BITSF(LD32(sp+588));
    v0 = LD32(sp+152);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f7 = f7 - f0;
    ST32(sp+256, FBITS(f2));
    fcc = FCMP(f1, f8, 12);
    ST32(sp+260, FBITS(f3));
    ST32(sp+264, FBITS(f4));
    ST32(sp+268, FBITS(f2));
    ST32(sp+272, FBITS(f3));
    ST32(sp+276, FBITS(f4));
    ST32(sp+280, FBITS(f5));
    ST32(sp+284, FBITS(f6));
    ST32(sp+288, FBITS(f7));
    ST32(sp+292, FBITS(f5));
    ST32(sp+296, FBITS(f6));
    ST32(sp+300, FBITS(f7));
    ST32(sp+240, FBITS(f2));
    ST32(sp+244, FBITS(f3));
    ST32(sp+248, FBITS(f4));
    ST32(sp+304, FBITS(f2));
    ST32(sp+308, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+312, FBITS(f4));
    if (cnd_) { goto L_089CEFDC; }
    goto L_089CFD30;
L_089CFD30:;
    v0 = LD32(sp+156);
    {u32 a_=sp+(896);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(912);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v0 = LD32(sp+160);
    {v[6]=BITSF(a2);}
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+164);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_089CEFE0; }
    goto L_089CFD78;
L_089CFD78:;
    v0 = LD32(sp+168);
    t3 = FBITS(f5);
    v1 = FBITS(f6);
    t5 = FBITS(f7);
    {u32 a_=sp+(928);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(944);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(t3);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+172);
    {v[6]=BITSF(t5);}
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+176);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_089CEFE0; }
    goto L_089CFDCC;
L_089CFDCC:;
    v0 = LD32(sp+180);
    {u32 a_=sp+(960);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(t3);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+188);
    v1 = LD32(sp+184);
    {v[6]=BITSF(t5);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089CEFE0; }
    goto L_089CFE14;
L_089CFE14:;
    v0 = LD32(sp+192);
    {u32 a_=sp+(992);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v1 = LD32(sp+196);
    {v[6]=BITSF(a2);}
    {v[1]=BITSF(v1);}
    v0 = LD32(sp+200);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {a0=FBITS(v[4]);}
    f0 = BITSF(a0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089CEFE4; }
    goto L_089CFE5C;
L_089CFE5C:;
    a2 = 0 + 0;
    a1 = 32;
    a3 = 0 + 0;
    a0 = 0x8001;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089CFE70;
L_089CFE70:;
    s0 = LD32(v0+24);
    s1 = v0 + 0;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089CFE80;
L_089CFE80:;
    v0 = D_08AEEFC4 - (-4156);
    f0 = BITSF(LD32(v0-4156));
    ST32(s0+12, FBITS(f0));
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(s2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CFEB0;
L_089CFEB0:;
    ST32(s0+8, v0);
    a1 = s1 + 0;
    v0 = LD32(s1+28);
    v0 = v0 | 0x1;
    ST32(s1+28, v0);
    v1 = LD32(s4);
    a2 = LD32(s2);
    v0 = LD32(v1-16);
    a0 = LD32(a2-16);
    v0 = s4 + v0;
    a2 = LD32(v0+4);
    a0 = s2 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CFEE4;
L_089CFEE4:;
    goto L_089CEFE0;
}

/* 089CFEEC */
rv_t func_089CFEEC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089CFEEC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D0010; }
    goto L_089CFF20;
L_089CFF20:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEEFC8 - (-4152);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-4152));
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
    t0 = D_08C2AFF8 - (-20488);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B008 - (-20472);
    a3 = D_08C2B018 - (-20456);
    v1 = t0 - 20488;
    a1 = v0 - 20472;
    a2 = a3 - 20456;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B0A8 - (-20312);
    s0 = s3 - 20312;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-20472, FBITS(f5));
    v0 = 4;
    ST32(t0-20488, FBITS(f1));
    ST32(a3-20456, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089CFFD8;
L_089CFFD8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-20312, v0);
    if (cnd_) { goto L_089D0004; }
    goto L_089CFFE8;
L_089CFFE8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089CFFF0;
L_089CFFF0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089CFFF0; }
    goto L_089D0004;
L_089D0004:;
    v0 = s3 - 20312;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089D0010;
L_089D0010:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D0034; }
    goto L_089D0024;
L_089D0024:;
    v0 = D_08C2B0A8 - (-20312);
    a0 = LD32(v0-20312);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089D004C; }
    goto L_089D0034;
L_089D0034:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D004C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0054;
L_089D0054:;
    goto L_089D0034;
}

/* 089D005C */
float func_089D005C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089D005C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D0088; }
    goto L_089D0074;
L_089D0074:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089D0088; }
    goto L_089D0088;
L_089D0088:;
    return f0;
}

/* 089D0090 */
rv_t func_089D0090(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0090:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089CFEEC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D00A4;
L_089D00A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D00B0 */
rv_t func_089D00B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D00B0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089CFEEC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D00C4;
L_089D00C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D00D0 */
void func_089D00D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D00D0:;
    sp = sp - 32;
    a2 = 999;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = a0 + 0;
    s2 = (u32)-1;
    s1 = 5;
    func_089E13B8(a0, a1);
    goto L_089D0104;
L_089D0104:;
    a3 = 999;
    a0 = LD32(s0);
    t0 = D_08B45AA8 - (23208);
    a1 = t0 + 23208;
    ST32(s3, a0);
    a2 = s3 + 292;
    t1 = D_08B45A9C - (23196);
    v0 = LD32(a0-12);
    v1 = LD32(s0+28);
    t2 = t1 + 23196;
    v0 = s3 + v0;
    ST32(v0, v1);
    t3 = s3 + 328;
    v1 = LD32(s3);
    a0 = LD32(s0+32);
    s0 = s3 + 348;
    v0 = LD32(v1-16);
    v0 = s3 + v0;
    ST32(v0, a0);
    v0 = 1;
    v1 = LD32(s3);
    ST32(s3+240, v0);
    a0 = LD32(v1-16);
    ST32(s3+200, 0);
    a0 = s3 + a0;
    ST32(s3+204, 0);
    ST32(s3+208, 0);
    ST32(s3+212, 0);
    ST32(s3+216, a3);
    ST32(s3+220, 0);
    ST32(s3+224, 0);
    ST32(s3+228, 0);
    ST32(s3+232, 0);
    ST32(s3+236, 0);
    v0 = LD32(a0+4);
    ST32(s3+244, v0);
    v1 = LD32(a0+4);
    ST32(s3+268, a3);
    ST32(s3+248, v1);
    ST32(s3+252, a3);
    ST32(s3+256, a3);
    ST32(s3+260, a3);
    ST32(s3+264, a3);
    ST32(s3+272, 0);
    ST32(s3+276, 0);
    ST32(s3+280, 0);
    ST32(s3+284, 0);
    ST32(s3+288, 0);
    f0 = BITSF(LD32(a1+32));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f8 = BITSF(LD32(t0+23208));
    f3 = BITSF(LD32(a1+12));
    f4 = BITSF(LD32(a1+16));
    f5 = BITSF(LD32(a1+20));
    f6 = BITSF(LD32(a1+24));
    f7 = BITSF(LD32(a1+28));
    ST32(a2+32, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    ST32(a2+12, FBITS(f3));
    ST32(a2+16, FBITS(f4));
    ST32(a2+20, FBITS(f5));
    ST32(a2+24, FBITS(f6));
    ST32(a2+28, FBITS(f7));
    ST32(s3+292, FBITS(f8));
    f0 = BITSF(LD32(t1+23196));
    f1 = BITSF(LD32(t2+8));
    f2 = BITSF(LD32(t2+4));
    ST32(s3+328, FBITS(f0));
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f2));
    ST32(s3+340, 0);
    ST32(s3+344, 0);
    goto L_089D022C;
L_089D022C:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_0897A7A0(a0);
    goto L_089D0238;
L_089D0238:;
    cnd_ = s1 != s2;
    s0 = s0 + 32;
    if (cnd_) { goto L_089D022C; }
    goto L_089D0240;
L_089D0240:;
    v0 = LD32(s3);
    ST32(s3+540, 0);
    s2 = D_08C2B2A8 - (-19800);
    s1 = s2 - 19800;
    v1 = LD32(v0-16);
    v0 = (u32)-32765;
    a0 = 12;
    v1 = s3 + v1;
    ST16(v1+8, v0);
    v0 = 999;
    a1 = LD32(s3+232);
    v1 = LD32(s3+228);
    a2 = LD32(s3+236);
    a3 = LD32(s3);
    a1 = a1 | 0xc;
    a2 = a2 | 0x20;
    v1 = v1 | 0x1;
    ST32(s3+236, a2);
    ST32(s3+252, v0);
    ST32(s3+232, a1);
    v0 = LD32(a3-16);
    ST32(s3+228, v1);
    v0 = s3 + v0;
    v1 = LD32(s1+4);
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D02B0;
L_089D02B0:;
    a0 = LD32(s2-19800);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    a0 = 40;
    ST32(v0+4, a1);
    ST32(v0, s3);
    ST32(s0, v0);
    ST8(v0+8, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D02E4;
L_089D02E4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08A24280(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D02F8;
L_089D02F8:;
    ST32(s3+200, s0);
    sp = sp + 32;
    return;
}

/* 089D0318 */
void func_089D0318(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D0318:;
    sp = sp - 32;
    s4 = a1 + 0;
    s2 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a1 = LD32(a1+28);
    v0 = a0 + v0;
    ST32(v0, a1);
    v1 = LD32(a0);
    a1 = LD32(s4+32);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    ST32(v0, a1);
    { rv_t r_ = func_089D6840(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0370;
L_089D0370:;
    a0 = s2 + 0;
    v0 = func_089D194C(a0);
    goto L_089D0378;
L_089D0378:;
    a0 = LD32(s2);
    v1 = LD32(a0-16);
    v1 = s2 + v1;
    a0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_089D058C; }
    goto L_089D0390;
L_089D0390:;
    a0 = s2 + 0;
    v0 = func_089D194C(a0);
    goto L_089D0398;
L_089D0398:;
    a2 = v0 + 0;
    s5 = D_08C2B2A8 - (-19800);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = s5 - 19800;
    if (cnd_) { goto L_089D0484; }
    goto L_089D03AC;
L_089D03AC:;
    v0 = LD32(v1+4);
    v1 = LD32(s5-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D03FC; }
    goto L_089D03D0;
L_089D03D0:;
    a0 = LD32(a1);
    goto L_089D03D4;
L_089D03D4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089D056C; }
    goto L_089D03EC;
L_089D03EC:;
    a1 = LD32(a1+4);
    goto L_089D03F0;
L_089D03F0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089D03D4; }
    goto L_089D03F8;
L_089D03F8:;
    s1 = 0 + 0;
    goto L_089D03FC;
L_089D03FC:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s2+200); goto L_089D0488; }
    goto L_089D0404;
L_089D0404:;
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0414;
L_089D0414:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D041C;
L_089D041C:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    if (cnd_) { a0 = LD32(s2+200); goto L_089D0488; }
    goto L_089D0438;
L_089D0438:;
    s3 = D_08C2ADE8 - (-21016);
    a2 = 1;
    goto L_089D0440;
L_089D0440:;
    a0 = s3 - 21016;
    v0 = func_08AC6A38(a0, a1, a2);
    goto L_089D0448;
L_089D0448:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D0558; }
    goto L_089D0450;
L_089D0450:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0460;
L_089D0460:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D0468;
L_089D0468:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    goto L_089D0470;
L_089D0470:;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    a2 = 1;
    if (cnd_) { goto L_089D0440; }
    goto L_089D0484;
L_089D0484:;
    a0 = LD32(s2+200);
    goto L_089D0488;
L_089D0488:;
    s0 = s5 - 19800;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0490;
L_089D0490:;
    v0 = LD32(s2);
    a0 = LD32(s0+4);
    a1 = LD32(s5-19800);
    v1 = LD32(v0-16);
    a0 = a0 - 1;
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    a3 = v0 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D04E0; }
    goto L_089D04C4;
L_089D04C4:;
    v0 = LD32(a0);
    goto L_089D04C8;
L_089D04C8:;
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(s0+8); goto L_089D0510; }
    goto L_089D04D0;
L_089D04D0:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089D04C8; }
    goto L_089D04E0;
L_089D04E0:;
    a1 = s4 + 4;
    a0 = s2 + 0;
    func_089E15D8(a0, a1, 0, 0);
    goto L_089D04EC;
L_089D04EC:;
    sp = sp + 32;
    return;
L_089D0510:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_089D0550; }
    goto L_089D0518;
L_089D0518:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D0540; }
    goto L_089D0520;
L_089D0520:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_089D0528;
L_089D0528:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0530;
L_089D0530:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_089D04E0;
L_089D0540:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_089D0528;
L_089D0550:;
    ST8(a0+8, v0);
    goto L_089D04E0;
L_089D0558:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    goto L_089D0470;
L_089D056C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089D03EC; }
    goto L_089D0578;
L_089D0578:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089D03F0; }
    goto L_089D0584;
L_089D0584:;
    goto L_089D03FC;
L_089D058C:;
    a0 = s2 + 0;
    v0 = func_089D1944(a0);
    goto L_089D0594;
L_089D0594:;
    a3 = LD32(s2);
    a2 = v0 + 0;
    v0 = LD32(a3-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    cnd_ = a2 == v1;
    s5 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D0484; }
    goto L_089D05B0;
L_089D05B0:;
    s3 = D_08C2ADE8 - (-21016);
    s5 = s3 - 21016;
    s1 = 999;
    goto L_089D05BC;
L_089D05BC:;
    cnd_ = a2 == s1;
    v1 = LD32(s3-21016);
    if (cnd_) { goto L_089D0654; }
    goto L_089D05C4;
L_089D05C4:;
    v0 = LD32(s5+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089D0610; }
    goto L_089D05E4;
L_089D05E4:;
    a0 = LD32(a1);
    goto L_089D05E8;
L_089D05E8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089D0664; }
    goto L_089D0600;
L_089D0600:;
    a1 = LD32(a1+4);
    goto L_089D0604;
L_089D0604:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089D05E8; }
    goto L_089D060C;
L_089D060C:;
    s0 = 0 + 0;
    goto L_089D0610;
L_089D0610:;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(a3-16); goto L_089D0658; }
    goto L_089D0618;
L_089D0618:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0628;
L_089D0628:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D0630;
L_089D0630:;
    a3 = LD32(s2);
    a2 = v0 + 0;
    goto L_089D0638;
L_089D0638:;
    v0 = LD32(a3-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    cnd_ = a2 != v1;
    if (cnd_) { goto L_089D05BC; }
    goto L_089D064C;
L_089D064C:;
    s5 = D_08C2B2A8 - (-19800);
    goto L_089D0484;
L_089D0654:;
    v0 = LD32(a3-16);
    goto L_089D0658;
L_089D0658:;
    v0 = s2 + v0;
    a2 = LD32(v0+4);
    goto L_089D0638;
L_089D0664:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D0600; }
    goto L_089D0670;
L_089D0670:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089D0604; }
    goto L_089D067C;
L_089D067C:;
    goto L_089D0610;
}

/* 089D0684 */
rv_t func_089D0684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D0684:;
    v1 = D_08B03698 - (13976);
    v1 = v1 + 13976;
    a1 = v1 + 604;
    v0 = v1 + 400;
    ST32(a0, v1);
    sp = sp - 32;
    ST32(a0+544, v0);
    ST32(a0+620, a1);
    s2 = a0 + 0;
    s3 = a0 + 620;
    { rv_t r_ = func_089D6840(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D06CC;
L_089D06CC:;
    a0 = s2 + 0;
    v0 = func_089D194C(a0);
    goto L_089D06D4;
L_089D06D4:;
    v1 = LD32(s3+4);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089D07F8; }
    goto L_089D06E0;
L_089D06E0:;
    a0 = s2 + 0;
    v0 = func_089D194C(a0);
    goto L_089D06E8;
L_089D06E8:;
    s5 = D_08C2B2A8 - (-19800);
    a0 = s5 - 19800;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D06FC;
L_089D06FC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089D0780; }
    goto L_089D0704;
L_089D0704:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0714;
L_089D0714:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D071C;
L_089D071C:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    s4 = D_08C2ADE8 - (-21016);
    if (cnd_) { goto L_089D0780; }
    goto L_089D0738;
L_089D0738:;
    a2 = 1;
    goto L_089D073C;
L_089D073C:;
    a0 = s4 - 21016;
    v0 = func_08AC6A38(a0, a1, a2);
    goto L_089D0744;
L_089D0744:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D07E4; }
    goto L_089D074C;
L_089D074C:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D075C;
L_089D075C:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D0764;
L_089D0764:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    goto L_089D076C;
L_089D076C:;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    a2 = 1;
    if (cnd_) { goto L_089D073C; }
    goto L_089D0780;
L_089D0780:;
    a0 = LD32(s2+200);
    s0 = D_08B03940 - (14656);
    s0 = s0 + 14656;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0790;
L_089D0790:;
    a0 = s5 - 19800;
    a1 = s2 + 0;
    func_08AC6ACC(a0, a1, 0, 0, 0);
    goto L_089D079C;
L_089D079C:;
    a1 = s0 + 4;
    a0 = s2 + 0;
    s0 = s0 + 36;
    func_089E15D8(a0, a1, 0, 0);
    goto L_089D07AC;
L_089D07AC:;
    a1 = s0 + 0;
    a0 = s2 + 544;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D07B8;
L_089D07B8:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D07C0;
L_089D07C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D07E4:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    goto L_089D076C;
L_089D07F8:;
    a0 = s2 + 0;
    v0 = func_089D1944(a0);
    goto L_089D0800;
L_089D0800:;
    a1 = v0 + 0;
    v0 = LD32(s3+4);
    cnd_ = a1 == v0;
    s4 = D_08C2ADE8 - (-21016);
    if (cnd_) { goto L_089D084C; }
    goto L_089D0810;
L_089D0810:;
    a2 = 1;
    goto L_089D0814;
L_089D0814:;
    a0 = s4 - 21016;
    v0 = func_08AC6A38(a0, a1, a2);
    goto L_089D081C;
L_089D081C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D0854; }
    goto L_089D0824;
L_089D0824:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0834;
L_089D0834:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D083C;
L_089D083C:;
    a1 = v0 + 0;
    goto L_089D0840;
L_089D0840:;
    v0 = LD32(s3+4);
    cnd_ = a1 != v0;
    a2 = 1;
    if (cnd_) { goto L_089D0814; }
    goto L_089D084C;
L_089D084C:;
    s5 = D_08C2B2A8 - (-19800);
    goto L_089D0780;
L_089D0854:;
    a1 = LD32(s3+4);
    goto L_089D0840;
}

/* 089D085C */
rv_t func_089D085C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D085C:;
    v1 = D_08B03698 - (13976);
    v1 = v1 + 13976;
    a1 = v1 + 604;
    v0 = v1 + 400;
    ST32(a0, v1);
    sp = sp - 32;
    ST32(a0+544, v0);
    ST32(a0+620, a1);
    s2 = a0 + 0;
    s3 = a0 + 620;
    { rv_t r_ = func_089D6840(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D08A4;
L_089D08A4:;
    a0 = s2 + 0;
    v0 = func_089D194C(a0);
    goto L_089D08AC;
L_089D08AC:;
    v1 = LD32(s3+4);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089D09D8; }
    goto L_089D08B8;
L_089D08B8:;
    a0 = s2 + 0;
    v0 = func_089D194C(a0);
    goto L_089D08C0;
L_089D08C0:;
    s5 = D_08C2B2A8 - (-19800);
    a0 = s5 - 19800;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D08D4;
L_089D08D4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089D0958; }
    goto L_089D08DC;
L_089D08DC:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D08EC;
L_089D08EC:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D08F4;
L_089D08F4:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    s4 = D_08C2ADE8 - (-21016);
    if (cnd_) { goto L_089D0958; }
    goto L_089D0910;
L_089D0910:;
    a2 = 1;
    goto L_089D0914;
L_089D0914:;
    a0 = s4 - 21016;
    v0 = func_08AC6A38(a0, a1, a2);
    goto L_089D091C;
L_089D091C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D09C4; }
    goto L_089D0924;
L_089D0924:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0934;
L_089D0934:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D093C;
L_089D093C:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    goto L_089D0944;
L_089D0944:;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    a2 = 1;
    if (cnd_) { goto L_089D0914; }
    goto L_089D0958;
L_089D0958:;
    a0 = LD32(s2+200);
    s0 = D_08B03940 - (14656);
    s0 = s0 + 14656;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0968;
L_089D0968:;
    a0 = s5 - 19800;
    a1 = s2 + 0;
    func_08AC6ACC(a0, a1, 0, 0, 0);
    goto L_089D0974;
L_089D0974:;
    a1 = s0 + 4;
    a0 = s2 + 0;
    s0 = s0 + 36;
    func_089E15D8(a0, a1, 0, 0);
    goto L_089D0984;
L_089D0984:;
    a1 = s0 + 0;
    a0 = s2 + 544;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D0990;
L_089D0990:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0998;
L_089D0998:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D09A0;
L_089D09A0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D09C4:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    goto L_089D0944;
L_089D09D8:;
    a0 = s2 + 0;
    v0 = func_089D1944(a0);
    goto L_089D09E0;
L_089D09E0:;
    a1 = v0 + 0;
    v0 = LD32(s3+4);
    cnd_ = a1 == v0;
    s4 = D_08C2ADE8 - (-21016);
    if (cnd_) { goto L_089D0A2C; }
    goto L_089D09F0;
L_089D09F0:;
    a2 = 1;
    goto L_089D09F4;
L_089D09F4:;
    a0 = s4 - 21016;
    v0 = func_08AC6A38(a0, a1, a2);
    goto L_089D09FC;
L_089D09FC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D0A34; }
    goto L_089D0A04;
L_089D0A04:;
    v0 = LD32(v0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0A14;
L_089D0A14:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D0A1C;
L_089D0A1C:;
    a1 = v0 + 0;
    goto L_089D0A20;
L_089D0A20:;
    v0 = LD32(s3+4);
    cnd_ = a1 != v0;
    a2 = 1;
    if (cnd_) { goto L_089D09F4; }
    goto L_089D0A2C;
L_089D0A2C:;
    s5 = D_08C2B2A8 - (-19800);
    goto L_089D0958;
L_089D0A34:;
    a1 = LD32(s3+4);
    goto L_089D0A20;
}

/* 089D0A3C */
float func_089D0A3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0A3C:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0xbdaf0000u;
    a0 = LD32(a0+208);
    a1 = a1 | 0x8554;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0A58;
L_089D0A58:;
    sp = sp + 16;
    return f0;
}

/* 089D0A64 */
u32 func_089D0A64(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0A64:;
    sp = sp - 16;
    a1 = 0x47090000u;
    a1 = a1 | 0x6c11;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0A80;
L_089D0A80:;
    sp = sp + 16;
    return v0;
}

/* 089D0A8C */
u64 func_089D0A8C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0A8C:;
    sp = sp - 16;
    a1 = 0xa0480000u;
    a1 = a1 | 0xa140;
    a0 = LD32(a0+208);
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0AA8;
L_089D0AA8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0AB4 */
float func_089D0AB4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0AB4:;
    sp = sp - 16;
    v0 = D_08AEEFE0 - (-4128);
    a1 = 0x8b420000u;
    a0 = LD32(a0+208);
    f12 = BITSF(LD32(v0-4128));
    a1 = a1 | 0xc3c2;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0AD4;
L_089D0AD4:;
    sp = sp + 16;
    return f0;
}

/* 089D0AE0 */
float func_089D0AE0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0AE0:;
    sp = sp - 16;
    v0 = D_08AEEFE4 - (-4124);
    a1 = 0xb7350000u;
    a0 = LD32(a0+208);
    f12 = BITSF(LD32(v0-4124));
    a1 = a1 | 0x25c;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0B00;
L_089D0B00:;
    sp = sp + 16;
    return f0;
}

/* 089D0B0C */
u32 func_089D0B0C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0B0C:;
    sp = sp - 16;
    a1 = 0x350000u;
    a2 = 0x10000u;
    a0 = LD32(a0+208);
    a1 = a1 | 0xce05;
    a2 = a2 | 0xa7d2;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0B2C;
L_089D0B2C:;
    sp = sp + 16;
    return v0;
}

/* 089D0B38 */
u32 func_089D0B38(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0B38:;
    sp = sp - 16;
    a1 = 0x65da0000u;
    a1 = a1 | 0xb55;
    a0 = LD32(a0+208);
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0B54;
L_089D0B54:;
    sp = sp + 16;
    return v0;
}

/* 089D0B60 */
u32 func_089D0B60(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0B60:;
    sp = sp - 16;
    a1 = 0x11140000u;
    a1 = a1 | 0x5057;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0B7C;
L_089D0B7C:;
    sp = sp + 16;
    return v0;
}

/* 089D0B88 */
u64 func_089D0B88(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0B88:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad40;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0BA4;
L_089D0BA4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0BB0 */
u64 func_089D0BB0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0BB0:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad41;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0BCC;
L_089D0BCC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0BD8 */
u64 func_089D0BD8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0BD8:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad42;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0BF4;
L_089D0BF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0C00 */
u64 func_089D0C00(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0C00:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad43;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0C1C;
L_089D0C1C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0C28 */
u64 func_089D0C28(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0C28:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad44;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0C44;
L_089D0C44:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0C50 */
u64 func_089D0C50(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0C50:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad45;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0C6C;
L_089D0C6C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0C78 */
u64 func_089D0C78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0C78:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad46;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0C94;
L_089D0C94:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0CA0 */
u64 func_089D0CA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0CA0:;
    sp = sp - 16;
    a1 = 0xc6750000u;
    a1 = a1 | 0xad47;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0CBC;
L_089D0CBC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D0CC8 */
u32 func_089D0CC8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0CC8:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9446;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0CE4;
L_089D0CE4:;
    sp = sp + 16;
    return v0;
}

/* 089D0CF0 */
u32 func_089D0CF0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0CF0:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9447;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0D0C;
L_089D0D0C:;
    sp = sp + 16;
    return v0;
}

/* 089D0D18 */
u32 func_089D0D18(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0D18:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9448;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0D34;
L_089D0D34:;
    sp = sp + 16;
    return v0;
}

/* 089D0D40 */
u32 func_089D0D40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0D40:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x9449;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0D5C;
L_089D0D5C:;
    sp = sp + 16;
    return v0;
}

/* 089D0D68 */
u32 func_089D0D68(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0D68:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944a;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0D84;
L_089D0D84:;
    sp = sp + 16;
    return v0;
}

/* 089D0D90 */
u32 func_089D0D90(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0D90:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944b;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0DAC;
L_089D0DAC:;
    sp = sp + 16;
    return v0;
}

/* 089D0DB8 */
u32 func_089D0DB8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0DB8:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944c;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0DD4;
L_089D0DD4:;
    sp = sp + 16;
    return v0;
}

/* 089D0DE0 */
u32 func_089D0DE0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0DE0:;
    sp = sp - 16;
    a1 = 0x71290000u;
    a1 = a1 | 0x944d;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0DFC;
L_089D0DFC:;
    sp = sp + 16;
    return v0;
}

/* 089D0E08 */
u32 func_089D0E08(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0E08:;
    sp = sp - 16;
    a1 = 0x6c810000u;
    a1 = a1 | 0x9c3f;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D0E24;
L_089D0E24:;
    sp = sp + 16;
    return v0;
}

/* 089D0E30 */
void func_089D0E30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D0E30:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_089E47DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089D0E4C;
L_089D0E4C:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_089D0E54;
L_089D0E54:;
    ST32(s1+120, v0);
    a0 = s0 + 0;
    v0 = LD32(s0+252);
    ST32(s1+124, v0);
    v0 = func_089D1944(a0);
    goto L_089D0E68;
L_089D0E68:;
    ST32(s1+128, v0);
    v0 = LD32(s0+256);
    ST32(s1+132, v0);
    v1 = LD32(s0+236);
    ST32(s1+136, v1);
    v0 = LD32(s0+232);
    ST32(s1+140, v0);
    f0 = BITSF(LD32(s0+344));
    ST32(s1+144, FBITS(f0));
    v0 = LD32(s0+264);
    ST32(s1+148, v0);
    sp = sp + 16;
    return;
}

/* 089D0EA8 */
rv_t func_089D0EA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D0EA8:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    f21 = BITSF(0);
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0EE0;
L_089D0EE0:;
    f12 = f20;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089D0F68; }
    goto L_089D0EF0;
L_089D0EF0:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+100);
    cnd_ = v0 != 0;
    if (cnd_) { f21 = BITSF(LD32(v0+276)); goto L_089D0F08; }
    goto L_089D0F08;
L_089D0F08:;
    f0 = func_089E48B8(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D0F10;
L_089D0F10:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+100);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+276, FBITS(f21)); goto L_089D0F28; }
    goto L_089D0F28;
L_089D0F28:;
    v0 = LD32(s1+120);
    ST32(s0+456, v0);
    v1 = LD32(s1+124);
    ST32(s0+524, v1);
    v0 = LD32(s1+128);
    ST32(s0+460, v0);
    v1 = LD32(s1+132);
    ST32(s0+448, v1);
    v0 = LD32(s1+136);
    ST32(s0+852, v0);
    v1 = LD32(s1+140);
    ST32(s0+848, v1);
    f0 = BITSF(LD32(s1+144));
    ST32(s0+836, FBITS(f0));
    v0 = LD32(s1+148);
    ST32(s0+840, v0);
    goto L_089D0F68;
L_089D0F68:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089D0F84 */
rv_t func_089D0F84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D0F84:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D0FB4;
L_089D0FB4:;
    f12 = f20;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089D0FDC; }
    goto L_089D0FC4;
L_089D0FC4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D0FDC:;
    f0 = func_089E4B1C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D0FE4;
L_089D0FE4:;
    v0 = LD32(s1+120);
    ST32(s0+456, v0);
    v1 = LD32(s1+124);
    ST32(s0+524, v1);
    v0 = LD32(s1+128);
    ST32(s0+460, v0);
    v1 = LD32(s1+136);
    ST32(s0+852, v1);
    f0 = BITSF(LD32(s1+144));
    ST32(s0+836, FBITS(f0));
    v0 = LD32(s1+148);
    ST32(s0+840, v0);
    goto L_089D0FC4;
}

/* 089D1018 */
void func_089D1018(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D1018:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D103C;
L_089D103C:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 34;
    t0 = 152;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089D1058;
L_089D1058:;
    a0 = s2 + 0;
    func_089D1080(a0);
    goto L_089D1060;
L_089D1060:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089D1068;
L_089D1068:;
    sp = sp + 16;
    return;
}

/* 089D1080 */
void func_089D1080(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_089D1080:;
    sp = sp - 192;
    f20 = BITSF(0);
    s0 = a0 + 0;
    func_089E4C08(a0);
    goto L_089D109C;
L_089D109C:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 120;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089D10C0;
L_089D10C0:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 124;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089D10E4;
L_089D10E4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 128;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089D1108;
L_089D1108:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 132;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089D112C;
L_089D112C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 136;
    t0 = 32;
    t1 = 6;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089D1150;
L_089D1150:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 140;
    t0 = 32;
    t1 = 4;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089D1174;
L_089D1174:;
    v0 = D_08AEEFEC - (-4116);
    v1 = D_08AEEFF0 - (-4112);
    f13 = BITSF(LD32(v0-4116));
    f14 = BITSF(LD32(v1-4112));
    f12 = f20;
    a0 = s0 + 0;
    t3 = 2;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 144;
    t0 = 32;
    t1 = 9;
    t2 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089D11AC;
L_089D11AC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 148;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089D11D0;
L_089D11D0:;
    sp = sp + 192;
    return;
}

/* 089D11E4 */
rv_t func_089D11E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089D11E4:;
    sp = sp - 64;
    s0 = a0 + 0;
    { rv_t r_ = func_089E1890(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1204;
L_089D1204:;
    a0 = s0 + 0;
    func_089D785C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D120C;
L_089D120C:;
    a1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(a1-12);
    a0 = s0 + v0;
    f1 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D15C0; }
    goto L_089D1230;
L_089D1230:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089D15D0; }
    goto L_089D123C;
L_089D123C:;
    v0 = LD32(a1-12);
    goto L_089D1240;
L_089D1240:;
    f0 = BITSF(0);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D15C0; }
    goto L_089D125C;
L_089D125C:;
    a0 = s0 + 0;
    func_089D64EC(a0, a1, 0, 0, 0);
    goto L_089D1264;
L_089D1264:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+212)); goto L_089D129C; }
    goto L_089D127C;
L_089D127C:;
    v1 = LD32(s0+232);
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D1570; }
    goto L_089D128C;
L_089D128C:;
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D1538; }
    goto L_089D1298;
L_089D1298:;
    f1 = BITSF(LD32(s0+212));
    goto L_089D129C;
L_089D129C:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s0+84); goto L_089D1308; }
    goto L_089D12B0;
L_089D12B0:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+212, FBITS(f0));
    if (cnd_) { goto L_089D1304; }
    goto L_089D12CC;
L_089D12CC:;
    v1 = LD32(s0+228);
    v0 = v1 & 0x40;
    cnd_ = v0 != 0;
    v0 = v1 & 0x80;
    if (cnd_) { goto L_089D1518; }
    goto L_089D12DC;
L_089D12DC:;
    cnd_ = v0 != 0;
    v0 = v1 & 0x100;
    if (cnd_) { goto L_089D14FC; }
    goto L_089D12E4;
L_089D12E4:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+84); goto L_089D1308; }
    goto L_089D12EC;
L_089D12EC:;
    v0 = LD32(s0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D14EC; }
    goto L_089D12FC;
L_089D12FC:;
    v1 = (v1 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    goto L_089D1300;
L_089D1300:;
    ST32(s0+228, v1);
    goto L_089D1304;
L_089D1304:;
    a1 = LD32(s0+84);
    goto L_089D1308;
L_089D1308:;
    a0 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_089D13DC; }
    goto L_089D1318;
L_089D1318:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D135C; }
    goto L_089D133C;
L_089D133C:;
    a0 = LD32(v1);
    goto L_089D1340;
L_089D1340:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089D14CC; }
    goto L_089D134C;
L_089D134C:;
    v1 = LD32(v1+4);
    goto L_089D1350;
L_089D1350:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089D1340; }
    goto L_089D1358;
L_089D1358:;
    s1 = 0 + 0;
    goto L_089D135C;
L_089D135C:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s0+236); goto L_089D13E0; }
    goto L_089D1364;
L_089D1364:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D136C;
L_089D136C:;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D1398; }
    goto L_089D1374;
L_089D1374:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+168); goto L_089D14BC; }
    goto L_089D1398;
L_089D1398:;
    v0 = D_08ADC67C - (-14724);
    a1 = LD32(v0-14724);
    a0 = s1 + 0;
    { u64 r_ = func_089824B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D13A8;
L_089D13A8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+236); goto L_089D13E0; }
    goto L_089D13B0;
L_089D13B0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s0+236); goto L_089D13E0; }
    goto L_089D13B8;
L_089D13B8:;
    v0 = LD32(s0);
    f0 = BITSF(LD32(s0+8));
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f20 = BITSF(LD32(v1+40));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D1474; }
    goto L_089D13DC;
L_089D13DC:;
    v0 = LD32(s0+236);
    goto L_089D13E0;
L_089D13E0:;
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D1464; }
    goto L_089D13EC;
L_089D13EC:;
    f1 = BITSF(LD32(s0+224));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D141C; }
    goto L_089D1404;
L_089D1404:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089D141C:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1424;
L_089D1424:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089D1404; }
    goto L_089D142C;
L_089D142C:;
    a0 = sp + 0;
    func_0897A7A0(a0);
    goto L_089D1434;
L_089D1434:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+224));
    v0 = LD32(s0);
    a0 = s0 + 0;
    f0 = f0 * f1;
    v1 = LD32(v0+8);
    a1 = sp + 0;
    t_ = v1;
    ST32(sp+12, FBITS(f0));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D145C;
L_089D145C:;
    goto L_089D1404;
L_089D1464:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D6AAC(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D146C;
L_089D146C:;
    goto L_089D1404;
L_089D1474:;
    a0 = s0 + 0;
    f0 = func_089D0AB4(a0, 0, 0, 0);
    goto L_089D147C;
L_089D147C:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 * f1;
    f12 = f20 + f0;
    fcc = FCMP(f12, f2, 14);
    cnd_ = !fcc;
    v0 = LD32(s0);
    if (cnd_) { goto L_089D14B4; }
    goto L_089D14A0;
L_089D14A0:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_089D14AC;
L_089D14AC:;
    v0 = LD32(s0+236);
    goto L_089D13E0;
L_089D14B4:;
    f12 = f2;
    goto L_089D14A0;
L_089D14BC:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D14C4;
L_089D14C4:;
    s2 = v0 < 0x1u;
    goto L_089D1398;
L_089D14CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089D134C; }
    goto L_089D14D8;
L_089D14D8:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089D1350; }
    goto L_089D14E4;
L_089D14E4:;
    goto L_089D135C;
L_089D14EC:;
    a1 = 0 + 0;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D14F4;
L_089D14F4:;
    v1 = LD32(s0+228);
    goto L_089D12FC;
L_089D14FC:;
    a0 = s0 + 0;
    a1 = 999;
    { rv_t r_ = func_089D1F3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1508;
L_089D1508:;
    v0 = LD32(s0+228);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+228, v0);
    goto L_089D1304;
L_089D1518:;
    a1 = LD32(s0+216);
    a0 = s0 + 0;
    { rv_t r_ = func_089D1EA8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1524;
L_089D1524:;
    v1 = LD32(s0+228);
    v0 = 999;
    ST32(s0+216, v0);
    v1 = (v1 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    goto L_089D1300;
L_089D1538:;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { u64 r_ = func_088BB1F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1548;
L_089D1548:;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+212)); goto L_089D129C; }
    goto L_089D1550;
L_089D1550:;
    v1 = LD32(s0);
    a1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1568;
L_089D1568:;
    f1 = BITSF(LD32(s0+212));
    goto L_089D129C;
L_089D1570:;
    { u64 r_ = func_088BB1F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1578;
L_089D1578:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089D1588; }
    goto L_089D1580;
L_089D1580:;
    v1 = LD32(s0+232);
    goto L_089D128C;
L_089D1588:;
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D159C;
L_089D159C:;
    v0 = LD32(s0);
    a0 = D_08AEEFF4 - (-4108);
    f12 = BITSF(LD32(a0-4108));
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    func_088BB2EC(a0, f12);
    goto L_089D15B8;
L_089D15B8:;
    v1 = LD32(s0+232);
    goto L_089D128C;
L_089D15C0:;
    a0 = s0 + 0;
    func_089D771C(a0);
    goto L_089D15C8;
L_089D15C8:;
    goto L_089D125C;
L_089D15D0:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D15D8;
L_089D15D8:;
    cnd_ = v0 != 0;
    a1 = LD32(s0);
    if (cnd_) { goto L_089D123C; }
    goto L_089D15E0;
L_089D15E0:;
    v1 = 0x801e;
    v0 = LD32(a1-16);
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = LD32(a1-12);
    if (cnd_) { goto L_089D1240; }
    goto L_089D15F8;
L_089D15F8:;
    a1 = 1;
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1608;
L_089D1608:;
    a1 = LD32(s0);
    goto L_089D123C;
}

/* 089D1610 */
rv_t func_089D1610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D1610:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E3E38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1628;
L_089D1628:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    f0 = func_089D0AE0(a0, 0, 0, 0);
    goto L_089D1634;
L_089D1634:;
    v0 = LD32(s0);
    f12 = f0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_089D1648;
L_089D1648:;
    a0 = s0 + 0;
    f0 = func_089D0AE0(a0, 0, 0, 0);
    goto L_089D1650;
L_089D1650:;
    ST32(s0+8, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089D0A3C(a0, 0, 0, 0);
    goto L_089D165C;
L_089D165C:;
    ST32(s0+224, FBITS(f0));
    a0 = s0 + 0;
    v0 = func_089D0A64(a0, 0, 0, 0);
    goto L_089D1668;
L_089D1668:;
    ST32(s0+280, v0);
    a0 = s0 + 0;
    v0 = func_089D0B38(a0, 0, 0, 0);
    goto L_089D1674;
L_089D1674:;
    v1 = LD32(s0+228);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s0+228, v1);
    a0 = s0 + 0;
    v0 = func_089D640C(a0, 0, 0, 0);
    goto L_089D1688;
L_089D1688:;
    v1 = LD32(s0+228);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s0+228, v1);
    a0 = s0 + 0;
    v0 = func_089D0E08(a0, 0, 0, 0);
    goto L_089D169C;
L_089D169C:;
    a0 = LD32(s0);
    v1 = LD32(s0+228);
    v1 = (v1 & ~(0x1u << 13)) | ((v0 & 0x1) << 13);
    v0 = LD32(a0-16);
    ST32(s0+228, v1);
    v0 = s0 + v0;
    v1 = LD_U16(v0+8);
    v0 = 0x801e;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089D16EC; }
    goto L_089D16C4;
L_089D16C4:;
    v1 = LD32(s0+236);
    a0 = (v1 >> 5) & 0x1;
    goto L_089D16CC;
L_089D16CC:;
    v1 = (v1 & ~(0x1u << 5)) | ((a0 & 0x1) << 5);
    v0 = s1 + 0;
    ST32(s0+236, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D16EC:;
    v1 = LD32(s0+236);
    goto L_089D16CC;
}

/* 089D16F4 */
rv_t func_089D16F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D16F4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1718;
L_089D1718:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E36F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1724;
L_089D1724:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D1738 */
rv_t func_089D1738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D1738:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089D1758;
L_089D1758:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089D1758; }
    goto L_089D177C;
L_089D177C:;
    v1 = LD32(sp);
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089D1820; }
    goto L_089D1788;
L_089D1788:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_089D17DC; }
    goto L_089D1794;
L_089D1794:;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = sp + 4; goto L_089D17F0; }
    goto L_089D179C;
L_089D179C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089D17E0; }
    goto L_089D17A4;
L_089D17A4:;
    a2 = sp + 8;
    a1 = 0 + 0;
    goto L_089D17AC;
L_089D17AC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089D17AC; }
    goto L_089D17D0;
L_089D17D0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E3748(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D17DC;
L_089D17DC:;
    goto L_089D17E0;
L_089D17E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D17F0:;
    a1 = 0 + 0;
    goto L_089D17F4;
L_089D17F4:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089D17F4; }
    goto L_089D1818;
L_089D1818:;
    goto L_089D17E0;
L_089D1820:;
    a1 = s0 + 0;
    { rv_t r_ = func_089E3748(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1828;
L_089D1828:;
    v1 = LD32(sp);
    goto L_089D1788;
}

/* 089D1830 */
rv_t func_089D1830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D1830:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_089E181C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1844;
L_089D1844:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089D1850;
L_089D1850:;
    a1 = 0x87030000u;
    v0 = LD32(s0+208);
    a1 = a1 | 0xa534;
    a2 = sp + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D1880; }
    goto L_089D1868;
L_089D1868:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1870;
L_089D1870:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D1880:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089D1888;
L_089D1888:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089D1868; }
    goto L_089D1890;
L_089D1890:;
    a2 = LD32(s0);
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    cnd_ = v1 != 0;
    a0 = LD32(v0+44);
    if (cnd_) { goto L_089D18AC; }
    goto L_089D18A8;
L_089D18A8:;
    a1 = LD32(v0+12);
    goto L_089D18AC;
L_089D18AC:;
    v0 = LD32(a2-16);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    v0 = func_0885EF6C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D18BC;
L_089D18BC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089D1868; }
    goto L_089D18C4;
L_089D18C4:;
    v0 = LD32(s0+228);
    v0 = v0 | 0x800;
    ST32(s0+228, v0);
    v0 = D_08AEEFF8 - (-4104);
    f0 = BITSF(LD32(v1+28));
    f1 = BITSF(LD32(v0-4104));
    f0 = f0 * f1;
    ST32(s0+288, FBITS(f0));
    goto L_089D1868;
}

/* 089D18E8 */
rv_t func_089D18E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D18E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E46F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D18FC;
L_089D18FC:;
    v0 = LD32(s0+232);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s0+232, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D1918 */
rv_t func_089D1918(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D1918:;
    sp = sp - 16;
    v0 = LD32(a0+232);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(a0+232, v0);
    { rv_t r_ = func_089E324C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1930;
L_089D1930:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D193C */
u32 func_089D193C(u32 a0)
{
    u32 v0 = 0;
L_089D193C:;
    v0 = LD32(a0+240);
    return v0;
}

/* 089D1944 */
u32 func_089D1944(u32 a0)
{
    u32 v0 = 0;
L_089D1944:;
    v0 = LD32(a0+244);
    return v0;
}

/* 089D194C */
u32 func_089D194C(u32 a0)
{
    u32 v0 = 0;
L_089D194C:;
    v0 = LD32(a0+248);
    return v0;
}

/* 089D1954 */
void func_089D1954(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D1954:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_089D193C(a0);
    goto L_089D1978;
L_089D1978:;
    a0 = LD32(s0);
    s3 = v0 + 0;
    v0 = D_08C2B228 - (-19928);
    v1 = LD32(a0-16);
    s1 = v0 - 19928;
    ST32(s1+12, s0);
    v1 = s0 + v1;
    a0 = s0 + 0;
    v0 = LD32(v1+4);
    ST32(s1+8, v0);
    v0 = func_089D1944(a0);
    goto L_089D19A4;
L_089D19A4:;
    v1 = LD32(s0);
    a3 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a3 == v1;
    s2 = 1;
    if (cnd_) { goto L_089D1A1C; }
    goto L_089D19C0;
L_089D19C0:;
    v0 = s2 < s3;
    cnd_ = v0 == 0;
    s1 = s1 + 16;
    if (cnd_) { goto L_089D1A1C; }
    goto L_089D19CC;
L_089D19CC:;
    s4 = D_08C2B2A8 - (-19800);
    ST32(s1+8, a3);
    goto L_089D19D4;
L_089D19D4:;
    a1 = a3 + 0;
    a0 = s4 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D19E4;
L_089D19E4:;
    ST32(s1+12, v0);
    a0 = v0 + 0;
    s2 = s2 + 1;
    v0 = func_089D1944(a0);
    goto L_089D19F4;
L_089D19F4:;
    v1 = LD32(s0);
    a3 = v0 + 0;
    s1 = s1 + 16;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a3 == v1;
    a0 = s2 < s3;
    if (cnd_) { goto L_089D1A1C; }
    goto L_089D1A14;
L_089D1A14:;
    cnd_ = a0 != 0;
    if (cnd_) { ST32(s1+8, a3); goto L_089D19D4; }
    goto L_089D1A1C;
L_089D1A1C:;
    sp = sp + 32;
    return;
}

/* 089D1A3C */
u64 func_089D1A3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D1A3C:;
    sp = sp - 32;
    s5 = a1 + 0;
    s2 = 0 + 0;
    v0 = func_089D193C(a0);
    goto L_089D1A68;
L_089D1A68:;
    a0 = 0 < v0;
    cnd_ = a0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089D1ACC; }
    goto L_089D1A74;
L_089D1A74:;
    v0 = D_08C2B228 - (-19928);
    v1 = v0 - 19928;
    goto L_089D1A7C;
L_089D1A7C:;
    ST32(v1+4, s2);
    s2 = s2 + 1;
    v0 = s2 < s3;
    ST8(v1, 0);
    ST8(v1+1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 16;
    if (cnd_) { goto L_089D1A7C; }
    goto L_089D1A98;
L_089D1A98:;
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D1ACC; }
    goto L_089D1AA0;
L_089D1AA0:;
    v0 = D_08C2B228 - (-19928);
    s4 = v0 - 19928;
    goto L_089D1AA8;
L_089D1AA8:;
    a0 = LD32(s4+12);
    s2 = s2 + 1;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1AB4;
L_089D1AB4:;
    a1 = s5 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D1AF8; }
    goto L_089D1AC0;
L_089D1AC0:;
    v0 = s2 < s3;
    goto L_089D1AC4;
L_089D1AC4:;
    cnd_ = v0 != 0;
    s4 = s4 + 16;
    if (cnd_) { goto L_089D1AA8; }
    goto L_089D1ACC;
L_089D1ACC:;
    a1 = 0 + 0;
    goto L_089D1AD0;
L_089D1AD0:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_089D1AF8:;
    s1 = LD32(s4+12);
    v1 = LD32(s1);
    v0 = LD32(v1+232);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1B0C;
L_089D1B0C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+236);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1B20;
L_089D1B20:;
    s0 = (s32)s0 < (s32)v0;
    s0 = s0 ^ 0x1;
    cnd_ = s0 == 0;
    v0 = s2 < s3;
    if (cnd_) { goto L_089D1AC4; }
    goto L_089D1B30;
L_089D1B30:;
    a2 = 1;
    ST8(s4, a2);
    v1 = 999;
    v0 = LD32(s4+12);
    a0 = LD32(v0+252);
    cnd_ = a0 == v1;
    a1 = 1;
    if (cnd_) { goto L_089D1AD0; }
    goto L_089D1B4C;
L_089D1B4C:;
    ST8(s4+1, a2);
    goto L_089D1AD0;
}

/* 089D1B54 */
rv_t func_089D1B54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D1B54:;
    sp = sp - 48;
    s6 = a1 + 0;
    s2 = 0 + 0;
    v0 = func_089D193C(a0);
    goto L_089D1B8C;
L_089D1B8C:;
    a0 = 0 < v0;
    cnd_ = a0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089D1C00; }
    goto L_089D1B98;
L_089D1B98:;
    v0 = D_08C2B228 - (-19928);
    v1 = v0 - 19928;
    goto L_089D1BA0;
L_089D1BA0:;
    ST32(v1+4, s2);
    s2 = s2 + 1;
    v0 = s2 < s3;
    ST8(v1, 0);
    ST8(v1+1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 16;
    if (cnd_) { goto L_089D1BA0; }
    goto L_089D1BBC;
L_089D1BBC:;
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D1C00; }
    goto L_089D1BC4;
L_089D1BC4:;
    v0 = D_08C2B228 - (-19928);
    s7 = v0 - 19928;
    s4 = s7 + 0;
    s5 = s7 + 0;
    fp = s7 + 0;
    goto L_089D1BD8;
L_089D1BD8:;
    a0 = LD32(s5+12);
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1BE0;
L_089D1BE0:;
    a1 = s6 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D1C38; }
    goto L_089D1BEC;
L_089D1BEC:;
    s2 = s2 + 1;
    goto L_089D1BF0;
L_089D1BF0:;
    v0 = s2 < s3;
    s5 = s5 + 16;
    cnd_ = v0 != 0;
    s4 = s4 + 16;
    if (cnd_) { goto L_089D1BD8; }
    goto L_089D1C00;
L_089D1C00:;
    a1 = 0 + 0;
    goto L_089D1C04;
L_089D1C04:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D1C38:;
    s1 = LD32(s5+12);
    v1 = LD32(s1);
    v0 = LD32(v1+232);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1C4C;
L_089D1C4C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+236);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1C60;
L_089D1C60:;
    s0 = (s32)s0 < (s32)v0;
    s0 = s0 ^ 0x1;
    cnd_ = s0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_089D1BF0; }
    goto L_089D1C70;
L_089D1C70:;
    ST32(s7+4, s2);
    v1 = 999;
    v0 = LD32(s5+12);
    a0 = LD32(v0+252);
    cnd_ = a0 == v1;
    a1 = 1;
    if (cnd_) { goto L_089D1C04; }
    goto L_089D1C88;
L_089D1C88:;
    s6 = s2 + 1;
    v0 = s6 < s3;
    cnd_ = v0 == 0;
    v0 = s6 << 4;
    if (cnd_) { goto L_089D1CD4; }
    goto L_089D1C98;
L_089D1C98:;
    v0 = v0 + fp;
    s7 = s4 + 0;
    s2 = v0 + 12;
    s4 = 999;
    s1 = LD32(s2);
    goto L_089D1CAC;
L_089D1CAC:;
    a1 = 999;
    a2 = 0 + 0;
    v0 = LD32(s1+252);
    s2 = s2 + 16;
    cnd_ = v0 == s4;
    a0 = s1 + 0;
    if (cnd_) { goto L_089D1CE4; }
    goto L_089D1CC4;
L_089D1CC4:;
    s6 = s6 + 1;
    goto L_089D1CC8;
L_089D1CC8:;
    v0 = s6 < s3;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s2); goto L_089D1CAC; }
    goto L_089D1CD4;
L_089D1CD4:;
    v0 = 1;
    a1 = 1;
    ST8(s5+1, v0);
    goto L_089D1C04;
L_089D1CE4:;
    v1 = LD32(s1);
    v0 = LD32(v1+232);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1CF4;
L_089D1CF4:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+236);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1D08;
L_089D1D08:;
    s0 = (s32)s0 < (s32)v0;
    s0 = s0 ^ 0x1;
    cnd_ = s0 == 0;
    if (cnd_) { s6 = s6 + 1; goto L_089D1CC8; }
    goto L_089D1D18;
L_089D1D18:;
    a1 = 1;
    ST32(s7+4, s6);
    goto L_089D1C04;
}

/* 089D1D24 */
rv_t func_089D1D24(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D1D24:;
    sp = sp - 32;
    s3 = a1 + 0;
    s1 = 0 + 0;
    v0 = func_089D193C(a0);
    goto L_089D1D50;
L_089D1D50:;
    s4 = 0 < v0;
    cnd_ = s4 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089D1E54; }
    goto L_089D1D5C;
L_089D1D5C:;
    v0 = D_08C2B228 - (-19928);
    s0 = v0 - 19928;
    goto L_089D1D64;
L_089D1D64:;
    v0 = LD_U8(s0+1);
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_089D1E98; }
    goto L_089D1D70;
L_089D1D70:;
    v0 = s1 < s2;
    goto L_089D1D74;
L_089D1D74:;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_089D1D64; }
    goto L_089D1D7C;
L_089D1D7C:;
    cnd_ = s4 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D1E54; }
    goto L_089D1D84;
L_089D1D84:;
    v0 = D_08C2B228 - (-19928);
    s0 = v0 - 19928;
    s5 = s0 + 0;
    goto L_089D1D90;
L_089D1D90:;
    v1 = LD32(s0+4);
    v0 = v1 << 4;
    cnd_ = v1 == s1;
    v0 = v0 + s5;
    if (cnd_) { goto L_089D1DAC; }
    goto L_089D1DA0;
L_089D1DA0:;
    a1 = LD32(v0+12);
    a0 = LD32(s0+12);
    { rv_t r_ = func_089D43C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1DAC;
L_089D1DAC:;
    s1 = s1 + 1;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_089D1D90; }
    goto L_089D1DBC;
L_089D1DBC:;
    cnd_ = s4 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D1E54; }
    goto L_089D1DC4;
L_089D1DC4:;
    v0 = D_08C2B228 - (-19928);
    s0 = v0 - 19928;
    s4 = 999;
    goto L_089D1DD0;
L_089D1DD0:;
    v0 = LD_U8(s0);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_089D1E48; }
    goto L_089D1DDC;
L_089D1DDC:;
    v1 = D_08C2A880 - (-22400);
    v0 = v1 - 22400;
    cnd_ = s3 == s4;
    a1 = 0 + 0;
    if (cnd_) { goto L_089D1E3C; }
    goto L_089D1DEC;
L_089D1DEC:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-22400);
    v0 = v0 - 1;
    v0 = s3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089D1E3C; }
    goto L_089D1E10;
L_089D1E10:;
    a1 = LD32(a0);
    goto L_089D1E14;
L_089D1E14:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089D1E78; }
    goto L_089D1E2C;
L_089D1E2C:;
    a0 = LD32(a0+4);
    goto L_089D1E30;
L_089D1E30:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_089D1E14; }
    goto L_089D1E38;
L_089D1E38:;
    a1 = 0 + 0;
    goto L_089D1E3C;
L_089D1E3C:;
    a0 = LD32(s0+12);
    { rv_t r_ = func_089D45C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1E44;
L_089D1E44:;
    s1 = s1 + 1;
    goto L_089D1E48;
L_089D1E48:;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_089D1DD0; }
    goto L_089D1E54;
L_089D1E54:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D1E78:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089D1E30; }
    goto L_089D1E84;
L_089D1E84:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089D1E30; }
    goto L_089D1E90;
L_089D1E90:;
    goto L_089D1E3C;
L_089D1E98:;
    a0 = LD32(s0+12);
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1EA0;
L_089D1EA0:;
    v0 = s1 < s2;
    goto L_089D1D74;
}

/* 089D1EA8 */
rv_t func_089D1EA8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D1EA8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_089D4E8C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1EC4;
L_089D1EC4:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D1EF0; }
    goto L_089D1ECC;
L_089D1ECC:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D1F08; }
    goto L_089D1EF0;
L_089D1EF0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D1F08:;
    func_089D1954(a0);
    goto L_089D1F10;
L_089D1F10:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_089D1A3C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1F1C;
L_089D1F1C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D1EF0; }
    goto L_089D1F2C;
L_089D1F2C:;
    { rv_t r_ = func_089D1D24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1F34;
L_089D1F34:;
    a2 = 1;
    goto L_089D1EF0;
}

/* 089D1F3C */
rv_t func_089D1F3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D1F3C:;
    sp = sp - 16;
    v0 = 999;
    v1 = LD32(a0+252);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D1F6C; }
    goto L_089D1F5C;
L_089D1F5C:;
    { u64 r_ = func_089D0A8C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1F64;
L_089D1F64:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+252); goto L_089D1F80; }
    goto L_089D1F6C;
L_089D1F6C:;
    goto L_089D1F70;
L_089D1F70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D1F80:;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D1F90;
L_089D1F90:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089D1F6C; }
    goto L_089D1F98;
L_089D1F98:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1FAC;
L_089D1FAC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D1F70; }
    goto L_089D1FB4;
L_089D1FB4:;
    v1 = LD32(s0+232);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D20C0; }
    goto L_089D1FC4;
L_089D1FC4:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08C2C9C4 - (-13884);
    if (cnd_) { goto L_089D203C; }
    goto L_089D1FD0;
L_089D1FD0:;
    v1 = LD32(s0+204);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    cnd_ = v1 == v0;
    if (cnd_) { f1 = BITSF(LD32(s0+8)); goto L_089D1FF4; }
    goto L_089D1FE4;
L_089D1FE4:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D1FEC;
L_089D1FEC:;
    goto L_089D1F70;
L_089D1FF4:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089D1FE4; }
    goto L_089D2008;
L_089D2008:;
    a0 = LD32(s0);
    f0 = BITSF(LD32(s1+8));
    v1 = LD32(s1);
    v0 = LD32(a0-12);
    a0 = LD32(v1-12);
    v0 = s0 + v0;
    f12 = BITSF(LD32(v0+40));
    a0 = s1 + a0;
    f12 = f12 / f1;
    f12 = f12 * f0;
    func_0886422C(a0, f12);
    goto L_089D2034;
L_089D2034:;
    goto L_089D1FE4;
L_089D203C:;
    v1 = LD32(v0-13884);
    cnd_ = (s32)v1 <= 0;
    a1 = 12;
    if (cnd_) { goto L_089D205C; }
    goto L_089D2048;
L_089D2048:;
    v0 = LD32(s0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D1F70; }
    goto L_089D2058;
L_089D2058:;
    a1 = 12;
    goto L_089D205C;
L_089D205C:;
    a0 = 0x8032;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D206C;
L_089D206C:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089D1F6C; }
    goto L_089D2074;
L_089D2074:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D20A8; }
    goto L_089D2080;
L_089D2080:;
    v0 = LD32(a2);
    v1 = LD32(a2+8);
    a0 = 0x409b0000u;
    a0 = a0 | 0x8404;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a2+8, v1);
    ST32(a2+4, a0);
    ST32(a2, v0);
    goto L_089D20A4;
L_089D20A4:;
    v0 = LD32(s0);
    goto L_089D20A8;
L_089D20A8:;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D20B8;
L_089D20B8:;
    goto L_089D1F70;
L_089D20C0:;
    a0 = s0 + 0;
    v0 = func_089D0B60(a0, 0, 0, 0);
    goto L_089D20C8;
L_089D20C8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+232); goto L_089D20D8; }
    goto L_089D20D0;
L_089D20D0:;
    v1 = LD32(s0+232);
    goto L_089D1FC4;
L_089D20D8:;
    a0 = s0 + 0;
    v0 = v0 | 0x8;
    ST32(s0+232, v0);
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D20E8;
L_089D20E8:;
    a1 = 0 + 0;
    a0 = 0x805b;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D20FC;
L_089D20FC:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089D20A4; }
    goto L_089D2104;
L_089D2104:;
    goto L_089D1F70;
}

/* 089D210C */
rv_t func_089D210C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D210C:;
    sp = sp - 16;
    v0 = 999;
    s0 = a0 + 0;
    a2 = 1;
    v1 = LD32(a0+252);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089D2164; }
    goto L_089D2138;
L_089D2138:;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2140;
L_089D2140:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D2164; }
    goto L_089D214C;
L_089D214C:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D215C;
L_089D215C:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D2174; }
    goto L_089D2164;
L_089D2164:;
    goto L_089D2168;
L_089D2168:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D2174:;
    v0 = LD32(s0+232);
    v0 = v0 | 0x8;
    ST32(s0+232, v0);
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2184;
L_089D2184:;
    goto L_089D2168;
}

/* 089D218C */
rv_t func_089D218C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D218C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_089D1954(a0);
    goto L_089D21A8;
L_089D21A8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089D1B54(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D21B4;
L_089D21B4:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089D21D4; }
    goto L_089D21C0;
L_089D21C0:;
    goto L_089D21C4;
L_089D21C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D21D4:;
    { rv_t r_ = func_089D1D24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D21DC;
L_089D21DC:;
    goto L_089D21C4;
}

/* 089D21E4 */
u64 func_089D21E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089D21E4:;
    sp = sp - 64;
    s6 = 0 + 0;
    s0 = a0 + 0;
    s3 = s0 + 0;
    v0 = func_089D193C(a0);
    goto L_089D2220;
L_089D2220:;
    cnd_ = v0 == 0;
    s7 = v0 + 0;
    if (cnd_) { goto L_089D2428; }
    goto L_089D2228;
L_089D2228:;
    fp = 999;
    goto L_089D222C;
L_089D222C:;
    cnd_ = s3 == 0;
    if (cnd_) { s6 = s6 + 1; goto L_089D241C; }
    goto L_089D2234;
L_089D2234:;
    a0 = s3 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089D223C;
L_089D223C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D2254; }
    goto L_089D2244;
L_089D2244:;
    v0 = LD32(s3+172);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D23F0; }
    goto L_089D2254;
L_089D2254:;
    a0 = s3 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D225C;
L_089D225C:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D24B8; }
    goto L_089D2264;
L_089D2264:;
    v0 = LD32(s3+172);
    goto L_089D2268;
L_089D2268:;
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D23E8; }
    goto L_089D2274;
L_089D2274:;
    v0 = LD32(s3+84);
    cnd_ = v0 == fp;
    v0 = D_08C2AA98 - (-21864);
    if (cnd_) { goto L_089D23E8; }
    goto L_089D2280;
L_089D2280:;
    v0 = v0 - 21864;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a1 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a0 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089D22F4; }
    goto L_089D22A8;
L_089D22A8:;
    a2 = LD32(v0);
    a3 = a0 + 0;
    goto L_089D22B0;
L_089D22B0:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_089D22E4; }
    goto L_089D22C8;
L_089D22C8:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_089D22F8; }
    goto L_089D22D8;
L_089D22D8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089D22C8; }
    goto L_089D22E4;
L_089D22E4:;
    v0 = a0 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089D22B0; }
    goto L_089D22F4;
L_089D22F4:;
    a0 = sp + 0;
    goto L_089D22F8;
L_089D22F8:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08ABF2F4(a0, a1);
    goto L_089D2308;
L_089D2308:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089D2364; }
    goto L_089D2314;
L_089D2314:;
    s1 = LD32(v0);
    goto L_089D2318;
L_089D2318:;
    v1 = s1 ^ s3;
    v1 = 0 < v1;
    v0 = 0 < s1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = 0x8001;
    if (cnd_) { goto L_089D2348; }
    goto L_089D2330;
L_089D2330:;
    v1 = LD32(s1+84);
    v0 = LD32(s3+84);
    a1 = 32;
    a2 = 0 + 0;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089D2470; }
    goto L_089D2348;
L_089D2348:;
    a0 = sp + 0;
    a1 = 1;
    func_08ABF2F4(a0, a1);
    goto L_089D2354;
L_089D2354:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_089D2318; }
    goto L_089D2360;
L_089D2360:;
    s1 = LD32(sp);
    goto L_089D2364;
L_089D2364:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D23E8; }
    goto L_089D2374;
L_089D2374:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089D23E8; }
    goto L_089D2380;
L_089D2380:;
    v0 = LD32(s1);
    goto L_089D2384;
L_089D2384:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D23D8; }
    goto L_089D2398;
L_089D2398:;
    v0 = LD_U8(s0+8);
    goto L_089D239C;
L_089D239C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D2468; }
    goto L_089D23A4;
L_089D23A4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D2458; }
    goto L_089D23AC;
L_089D23AC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D23B4;
L_089D23B4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D23C0;
L_089D23C0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D23CC;
L_089D23CC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D239C; }
    goto L_089D23D4;
L_089D23D4:;
    v1 = LD32(s1+4);
    goto L_089D23D8;
L_089D23D8:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D2384; }
    goto L_089D23E8;
L_089D23E8:;
    a0 = s3 + 0;
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D23F0;
L_089D23F0:;
    a0 = s3 + 0;
    v0 = func_089D1944(a0);
    goto L_089D23F8;
L_089D23F8:;
    cnd_ = v0 == fp;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D2418; }
    goto L_089D2400;
L_089D2400:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2414;
L_089D2414:;
    s3 = v0 + 0;
    goto L_089D2418;
L_089D2418:;
    s6 = s6 + 1;
    goto L_089D241C;
L_089D241C:;
    v0 = s6 < s7;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D222C; }
    goto L_089D2428;
L_089D2428:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089D2458:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089D23B4;
L_089D2468:;
    s0 = LD32(s0+4);
    goto L_089D23CC;
L_089D2470:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2478;
L_089D2478:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D2348; }
    goto L_089D2480;
L_089D2480:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089D24A8; }
    goto L_089D248C;
L_089D248C:;
    v0 = LD32(v1+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D24A8;
L_089D24A8:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D24B0;
L_089D24B0:;
    s1 = LD32(sp);
    goto L_089D2364;
L_089D24B8:;
    a0 = 0x805d;
    a1 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D24C8;
L_089D24C8:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089D2264; }
    goto L_089D24D0;
L_089D24D0:;
    v1 = LD32(s3+84);
    v0 = 3;
    ST32(a2, v0);
    a0 = a2 + 0;
    a1 = 1;
    ST32(a2+4, v1);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D24F0;
L_089D24F0:;
    v0 = LD32(s3+172);
    goto L_089D2268;
}

/* 089D24F8 */
rv_t func_089D24F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D24F8:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089D2578; }
    goto L_089D2518;
L_089D2518:;
    v1 = LD_U16(a1+16);
    v0 = 0x8044;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_089D2578; }
    goto L_089D2528;
L_089D2528:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8048;
    if (cnd_) { goto L_089D274C; }
    goto L_089D2534;
L_089D2534:;
    v0 = 0x802b;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089D2578; }
    goto L_089D2540;
L_089D2540:;
    cnd_ = v0 != 0;
    v0 = 0x8041;
    if (cnd_) { goto L_089D26E8; }
    goto L_089D2548;
L_089D2548:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 5;
    if (cnd_) { goto L_089D2698; }
    goto L_089D2554;
L_089D2554:;
    cnd_ = v0 == 0;
    v0 = 0x8025;
    if (cnd_) { goto L_089D2650; }
    goto L_089D255C;
L_089D255C:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+228); goto L_089D2590; }
    goto L_089D2568;
L_089D2568:;
    a0 = s1 + 0;
    goto L_089D256C;
L_089D256C:;
    a1 = s0 + 0;
    { rv_t r_ = func_089E1C74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2574;
L_089D2574:;
    a2 = v0 + 0;
    goto L_089D2578;
L_089D2578:;
    goto L_089D257C;
L_089D257C:;
    goto L_089D2580;
L_089D2580:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D2590:;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089D261C; }
    goto L_089D259C;
L_089D259C:;
    a2 = LD32(a0+268);
    v0 = 999;
    a0 = D_08C2BA28 - (-17880);
    cnd_ = a2 == v0;
    v1 = a0 - 17880;
    if (cnd_) { goto L_089D2618; }
    goto L_089D25B0;
L_089D25B0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-17880);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089D2600; }
    goto L_089D25D4;
L_089D25D4:;
    a0 = LD32(a1);
    goto L_089D25D8;
L_089D25D8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089D2630; }
    goto L_089D25F0;
L_089D25F0:;
    a1 = LD32(a1+4);
    goto L_089D25F4;
L_089D25F4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089D25D8; }
    goto L_089D25FC;
L_089D25FC:;
    a0 = 0 + 0;
    goto L_089D2600;
L_089D2600:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089D261C; }
    goto L_089D2608;
L_089D2608:;
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2618;
L_089D2618:;
    a0 = s1 + 0;
    goto L_089D261C;
L_089D261C:;
    a1 = 1;
    goto L_089D2620;
L_089D2620:;
    func_089D7AB4(a0, a1);
    goto L_089D2628;
L_089D2628:;
    a0 = s1 + 0;
    goto L_089D256C;
L_089D2630:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089D25F4; }
    goto L_089D263C;
L_089D263C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089D25F4; }
    goto L_089D2648;
L_089D2648:;
    goto L_089D2600;
L_089D2650:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089D256C; }
    goto L_089D2658;
L_089D2658:;
    v0 = LD32(a0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_089D2578; }
    goto L_089D2668;
L_089D2668:;
    v1 = LD32(a1+24);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089D2688; }
    goto L_089D2674;
L_089D2674:;
    v0 = LD32(v1+52);
    ST32(a0+232, v0);
    v1 = LD32(v1+48);
    ST32(a0+256, v1);
    a0 = s1 + 0;
    goto L_089D2688;
L_089D2688:;
    a1 = s0 + 0;
    { rv_t r_ = func_089E1C74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2690;
L_089D2690:;
    a2 = 1;
    goto L_089D2578;
L_089D2698:;
    v0 = LD32(a0+228);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a0+268); goto L_089D26B4; }
    goto L_089D26A8;
L_089D26A8:;
    a0 = s1 + 0;
    goto L_089D26AC;
L_089D26AC:;
    a1 = 0 + 0;
    goto L_089D2620;
L_089D26B4:;
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_089D26C4;
L_089D26C4:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089D26AC; }
    goto L_089D26CC;
L_089D26CC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D26E0;
L_089D26E0:;
    a0 = s1 + 0;
    goto L_089D26AC;
L_089D26E8:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089D273C; }
    goto L_089D26F0;
L_089D26F0:;
    cnd_ = v0 != 0;
    v0 = 0x8042;
    if (cnd_) { goto L_089D2714; }
    goto L_089D26F8;
L_089D26F8:;
    v0 = 0x8040;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089D256C; }
    goto L_089D2704;
L_089D2704:;
    a1 = LD32(a1+4);
    { rv_t r_ = func_089D1EA8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D270C;
L_089D270C:;
    a2 = 1;
    goto L_089D2578;
L_089D2714:;
    cnd_ = v1 == v0;
    v0 = 0x8043;
    if (cnd_) { goto L_089D272C; }
    goto L_089D271C;
L_089D271C:;
    cnd_ = v1 != v0;
    a2 = 1;
    if (cnd_) { goto L_089D2568; }
    goto L_089D2724;
L_089D2724:;
    goto L_089D257C;
L_089D272C:;
    a1 = LD32(a1+4);
    { rv_t r_ = func_089D210C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2734;
L_089D2734:;
    a2 = 1;
    goto L_089D2578;
L_089D273C:;
    a1 = LD32(a1+4);
    { rv_t r_ = func_089D1F3C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2744;
L_089D2744:;
    a2 = 1;
    goto L_089D2578;
L_089D274C:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089D28B8; }
    goto L_089D2754;
L_089D2754:;
    cnd_ = v0 != 0;
    v0 = 0x805e;
    if (cnd_) { goto L_089D2788; }
    goto L_089D275C;
L_089D275C:;
    v0 = 0x8046;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089D2778; }
    goto L_089D2768;
L_089D2768:;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_089D2578; }
    goto L_089D2770;
L_089D2770:;
    goto L_089D257C;
L_089D2778:;
    a1 = LD32(a1+4);
    { u64 r_ = func_089D21E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2780;
L_089D2780:;
    a2 = 1;
    goto L_089D2578;
L_089D2788:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089D289C; }
    goto L_089D2790;
L_089D2790:;
    cnd_ = v0 != 0;
    v0 = 0x8062;
    if (cnd_) { goto L_089D27D8; }
    goto L_089D2798;
L_089D2798:;
    v0 = 0x8049;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089D256C; }
    goto L_089D27A4;
L_089D27A4:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { a2 = 1; goto L_089D2578; }
    goto L_089D27B0;
L_089D27B0:;
    v0 = LD32(a0);
    a1 = LD32(a1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D27D0;
L_089D27D0:;
    a2 = 1;
    goto L_089D2578;
L_089D27D8:;
    cnd_ = v1 == v0;
    v0 = 0x8080;
    if (cnd_) { goto L_089D283C; }
    goto L_089D27E0;
L_089D27E0:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089D256C; }
    goto L_089D27E8;
L_089D27E8:;
    v0 = LD32(a0+236);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_089D2578; }
    goto L_089D27F8;
L_089D27F8:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089D257C; }
    goto L_089D2804;
L_089D2804:;
    v1 = LD32(a0+264);
    a0 = 999;
    cnd_ = v1 == a0;
    if (cnd_) { a1 = LD32(a1); goto L_089D282C; }
    goto L_089D2814;
L_089D2814:;
    v0 = LD32(a1+4);
    cnd_ = v0 == a0;
    if (cnd_) { a1 = LD32(a1); goto L_089D282C; }
    goto L_089D2820;
L_089D2820:;
    cnd_ = v1 == v0;
    if (cnd_) {  goto L_089D2580; }
    goto L_089D2828;
L_089D2828:;
    a1 = LD32(a1);
    goto L_089D282C;
L_089D282C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089D691C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2834;
L_089D2834:;
    a2 = 1;
    goto L_089D2578;
L_089D283C:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    a2 = 1;
    if (cnd_) { goto L_089D2578; }
    goto L_089D2848;
L_089D2848:;
    v1 = LD32(a0);
    f0 = BITSF(LD32(a1+8));
    f12 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    f1 = f1 + f0;
    fcc = FCMP(f1, f12, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(a0+8));
    if (cnd_) { goto L_089D2888; }
    goto L_089D2874;
L_089D2874:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    f12 = f2;
    if (cnd_) { goto L_089D2888; }
    goto L_089D2884;
L_089D2884:;
    f12 = f1;
    goto L_089D2888;
L_089D2888:;
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    func_0886422C(a0, f12);
    goto L_089D2894;
L_089D2894:;
    a2 = 1;
    goto L_089D2578;
L_089D289C:;
    a0 = LD32(a0+200);
    cnd_ = a0 == 0;
    if (cnd_) { a2 = 1; goto L_089D2578; }
    goto L_089D28A8;
L_089D28A8:;
    { rv_t r_ = func_08A24788(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D28B0;
L_089D28B0:;
    a2 = 1;
    goto L_089D2578;
L_089D28B8:;
    v0 = LD32(a0);
    v1 = LD32(v0+228);
    t_ = v1;
    a1 = LD32(a1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D28C8;
L_089D28C8:;
    a2 = 1;
    goto L_089D2578;
}

/* 089D28D0 */
rv_t func_089D28D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D28D0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 152;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2904;
L_089D2904:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D293C; }
    goto L_089D290C;
L_089D290C:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D2924; }
    goto L_089D291C;
L_089D291C:;
    func_089D0E30(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D2924;
L_089D2924:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D293C;
L_089D293C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D2950 */
rv_t func_089D2950(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D2950:;
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x804e;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2974;
L_089D2974:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_089D299C; }
    goto L_089D2980;
L_089D2980:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2990;
L_089D2990:;
    v0 = LD32(s0+232);
    v0 = (v0 & ~(0x3u << 2)) | ((0 & 0x3) << 2);
    ST32(s0+232, v0);
    goto L_089D299C;
L_089D299C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D29AC */
u32 func_089D29AC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0;
L_089D29AC:;
    v0 = LD32(a0+228);
    ST32(a0+212, FBITS(f12));
    v0 = v0 | 0x40;
    ST32(a0+228, v0);
    ST32(a0+216, a1);
    return v0;
}

/* 089D29C4 */
u32 func_089D29C4(u32 a0, float f12)
{
    u32 v0 = 0;
L_089D29C4:;
    v0 = LD32(a0+228);
    ST32(a0+212, FBITS(f12));
    v0 = v0 | 0x80;
    ST32(a0+228, v0);
    return v0;
}

/* 089D29D8 */
rv_t func_089D29D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D29D8:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = a2 & 0xff;
    s2 = a1 + 0;
    func_08A16BC0(a0);
    goto L_089D2A00;
L_089D2A00:;
    a1 = 10013;
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2A14;
L_089D2A14:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2A1C;
L_089D2A1C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+12); goto L_089D2A4C; }
    goto L_089D2A24;
L_089D2A24:;
    v0 = LD32(s1+228);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089D2AB8; }
    goto L_089D2A34;
L_089D2A34:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2A48;
L_089D2A48:;
    v0 = LD32(s2+12);
    goto L_089D2A4C;
L_089D2A4C:;
    cnd_ = s3 != 0;
    ST32(s1+12, v0);
    if (cnd_) { goto L_089D2A64; }
    goto L_089D2A54;
L_089D2A54:;
    v0 = LD32(s2+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D2AA8; }
    goto L_089D2A64;
L_089D2A64:;
    a1 = s3 ^ 0x1;
    goto L_089D2A68;
L_089D2A68:;
    a0 = s1 + 0;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2A70;
L_089D2A70:;
    v0 = LD32(s1+236);
    a0 = LD32(s2+116);
    v1 = LD32(s2+112);
    v0 = v0 | 0x20;
    ST32(s1+236, v0);
    ST32(s1+112, v1);
    ST32(s1+116, a0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D2AA8:;
    a1 = 0 + 0;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2AB0;
L_089D2AB0:;
    a1 = s3 ^ 0x1;
    goto L_089D2A68;
L_089D2AB8:;
    a0 = s1 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0B0C(a0, 0, 0, 0);
    goto L_089D2ACC;
L_089D2ACC:;
    v1 = LD32(s2);
    a2 = v0 + 0;
    a1 = s0 + 0;
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+96);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2AF0;
L_089D2AF0:;
    a0 = 0x804c;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2B04;
L_089D2B04:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089D2A48; }
    goto L_089D2B0C;
L_089D2B0C:;
    a0 = LD32(v0+24);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089D2B30; }
    goto L_089D2B18;
L_089D2B18:;
    v0 = LD32(s2);
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    ST32(a0, v0);
    v1 = LD32(s1);
    goto L_089D2B30;
L_089D2B30:;
    a0 = t0 + 0;
    a1 = 1;
    v0 = LD32(v1-16);
    v1 = 2;
    a2 = 1;
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    ST32(t0, v1);
    ST32(t0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2B58;
L_089D2B58:;
    v0 = LD32(s2+12);
    goto L_089D2A4C;
}

/* 089D2B60 */
rv_t func_089D2B60(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D2B60:;
    sp = sp - 48;
    s1 = a0 + 0;
    s3 = a2 & 0xff;
    s2 = a1 + 0;
    func_08A16CA0(a0);
    goto L_089D2B88;
L_089D2B88:;
    a1 = 10015;
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2B9C;
L_089D2B9C:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2BA4;
L_089D2BA4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D2C34; }
    goto L_089D2BAC;
L_089D2BAC:;
    v0 = LD32(s1+228);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_089D2DA8; }
    goto L_089D2BBC;
L_089D2BBC:;
    a0 = s2 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2BCC;
L_089D2BCC:;
    a0 = 0x804d;
    goto L_089D2BD0;
L_089D2BD0:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2BE0;
L_089D2BE0:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089D2C34; }
    goto L_089D2BE8;
L_089D2BE8:;
    a0 = LD32(v0+24);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089D2C0C; }
    goto L_089D2BF4;
L_089D2BF4:;
    v0 = LD32(s2);
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    ST32(a0, v0);
    v1 = LD32(s1);
    goto L_089D2C0C;
L_089D2C0C:;
    a0 = t0 + 0;
    a1 = 1;
    v0 = LD32(v1-16);
    v1 = 2;
    a2 = 1;
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    ST32(t0, v1);
    ST32(t0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2C34;
L_089D2C34:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2C3C;
L_089D2C3C:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089D2D98; }
    goto L_089D2C44;
L_089D2C44:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089D2C4C;
L_089D2C4C:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2C60;
L_089D2C60:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D2C84; }
    goto L_089D2C68;
L_089D2C68:;
    a0 = s1 + 0;
    { u64 r_ = func_089D4F40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2C70;
L_089D2C70:;
    cnd_ = v0 != 0;
    v0 = 4;
    if (cnd_) { goto L_089D2C7C; }
    goto L_089D2C78;
L_089D2C78:;
    ST32(s0+12, v0);
    goto L_089D2C7C;
L_089D2C7C:;
    cnd_ = s0 == s1;
    if (cnd_) { v1 = LD32(s1); goto L_089D2D74; }
    goto L_089D2C84;
L_089D2C84:;
    cnd_ = s3 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D2D60; }
    goto L_089D2C8C;
L_089D2C8C:;
    a1 = LD32(s1+172);
    a0 = s1 + 0;
    a1 = (a1 >> 2) & 0x1;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2C9C;
L_089D2C9C:;
    v1 = LD32(s2);
    a0 = 90;
    a1 = 168;
    v0 = LD32(v1-16);
    a3 = 0 + 0;
    v0 = s2 + v0;
    a2 = LD_U16(v0+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D2CBC;
L_089D2CBC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D2D10; }
    goto L_089D2CC4;
L_089D2CC4:;
    a0 = LD32(v0+24);
    cnd_ = a0 == 0;
    v0 = 2;
    if (cnd_) { goto L_089D2CDC; }
    goto L_089D2CD0;
L_089D2CD0:;
    a1 = s2 + 0;
    func_089A891C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D2CD8;
L_089D2CD8:;
    v0 = 2;
    goto L_089D2CDC;
L_089D2CDC:;
    ST32(s0, v0);
    a0 = s0 + 0;
    a1 = 1;
    a3 = LD32(s2);
    v1 = LD32(s0+28);
    a2 = 1;
    v0 = LD32(a3-16);
    v1 = v1 | 0x1;
    v0 = s2 + v0;
    a3 = LD32(v0+4);
    ST32(s0+28, v1);
    ST32(s0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2D10;
L_089D2D10:;
    a1 = LD32(s1);
    v1 = 0x801e;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+236); goto L_089D2D54; }
    goto L_089D2D2C;
L_089D2D2C:;
    v0 = LD32(a1+80);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2D38;
L_089D2D38:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D2D54:;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+236, v0);
    goto L_089D2D2C;
L_089D2D60:;
    a1 = 1;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2D68;
L_089D2D68:;
    v0 = 999;
    ST32(s2+224, v0);
    goto L_089D2C8C;
L_089D2D74:;
    ST32(sp, 0);
    a0 = s1 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2D90;
L_089D2D90:;
    goto L_089D2C84;
L_089D2D98:;
    a1 = s2 + 0;
    func_089D3494(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D2DA0;
L_089D2DA0:;
    goto L_089D2C44;
L_089D2DA8:;
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2DB4;
L_089D2DB4:;
    a0 = 0x804d;
    goto L_089D2BD0;
}

/* 089D2DBC */
u32 func_089D2DBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[512] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 512);
L_089D2DBC:;
    sp = sp - 512;
    s5 = a3 + 0;
    s4 = a1 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2E18;
L_089D2E18:;
    a0 = LD32(s2);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    v1 = LD32(a0-16);
    f1 = BITSF(LD32(v0+4));
    ST32(sp, FBITS(f0));
    v1 = s2 + v1;
    a0 = LD32(v1+4);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08A15234(a0, 0, 0, 0);
    goto L_089D2E44;
L_089D2E44:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4); goto L_089D3460; }
    goto L_089D2E4C;
L_089D2E4C:;
    a1 = LD32(s2);
    a0 = LD32(s4);
    f23 = BITSF(0);
    v0 = LD32(a1-12);
    v1 = LD32(a0-12);
    v0 = s2 + v0;
    v1 = s4 + v1;
    s1 = LD32(v0+4);
    s3 = LD32(v1+4);
    v0 = 0 < s1;
    v1 = 0 < s3;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D3314; }
    goto L_089D2E84;
L_089D2E84:;
    v0 = D_08AEF004 - (-4092);
    f0 = BITSF(LD32(v0-4092));
    f24 = f23 + f0;
    fcc = FCMP(f23, f24, 12);
    cnd_ = !fcc;
    f20 = f23;
    if (cnd_) { goto L_089D3064; }
    goto L_089D2EA0;
L_089D2EA0:;
    v0 = D_08AEF008 - (-4088);
    v1 = D_08AEF00C - (-4084);
    f21 = BITSF(LD32(v0-4088));
    f22 = BITSF(LD32(v1-4084));
    s1 = 0 + 0;
    goto L_089D2EB4;
L_089D2EB4:;
    v0 = 1;
    cnd_ = s1 == v0;
    if (cnd_) { ST32(sp+144, 0); goto L_089D32FC; }
    goto L_089D2EC0;
L_089D2EC0:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(sp+144, 0); goto L_089D32E4; }
    goto L_089D2EC8;
L_089D2EC8:;
    v0 = 2;
    cnd_ = s1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089D32D0; }
    goto L_089D2ED4;
L_089D2ED4:;
    cnd_ = s1 == v0;
    if (cnd_) { ST32(sp+144, FBITS(f22)); goto L_089D32B8; }
    goto L_089D2EDC;
L_089D2EDC:;
    a0 = LD32(a1-12);
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    a0 = s2 + a0;
    v1 = LD32(a0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D2F24;
L_089D2F24:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    f2 = BITSF(LD32(sp));
    {u32 a_=sp+(192);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[20]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(sp+40);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[16]);}
    f1 = BITSF(v1);
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    f2 = f2 + f1;
    {v0=FBITS(v[17]);}
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(v0);
    a0 = s2 + 0;
    a1 = s0 + 0;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+8));
    a2 = s0 + 0;
    ST32(s0, FBITS(f2));
    f0 = f0 + f5;
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    ST32(sp+160, v1);
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f5));
    ST32(sp+128, v1);
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f5));
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    v0 = func_089D5A60(a0, a1, a2);
    goto L_089D302C;
L_089D302C:;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s0)); goto L_089D31F4; }
    goto L_089D3034;
L_089D3034:;
    s1 = s1 + 1;
    goto L_089D3038;
L_089D3038:;
    v0 = s1 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { f20 = f20 + f22; goto L_089D304C; }
    goto L_089D3044;
L_089D3044:;
    a1 = LD32(s2);
    goto L_089D2EB4;
L_089D304C:;
    fcc = FCMP(f20, f24, 12);
    cnd_ = !fcc;
    a1 = LD32(s2);
    if (cnd_) { goto L_089D3064; }
    goto L_089D305C;
L_089D305C:;
    s1 = 0 + 0;
    goto L_089D2EB4;
L_089D3064:;
    a0 = LD32(a1-12);
    f1 = BITSF(FBITS(f23) ^ 0x80000000u);
    v0 = D_08AEF008 - (-4088);
    a0 = s2 + a0;
    v1 = LD32(a0);
    f0 = BITSF(LD32(v0-4088));
    ST32(sp+40, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    ST32(sp+168, FBITS(f1));
    v0 = LD32(v1+24);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+160, 0);
    ST32(sp+164, 0);
    ST32(sp+32, 0);
    t_ = v0;
    ST32(sp+36, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D30A8;
L_089D30A8:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(400);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(384);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(336);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(320);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v1);}
    f2 = BITSF(LD32(sp));
    v1 = LD32(sp+40);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[16]);}
    f1 = BITSF(v1);
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    f2 = f2 + f1;
    {v0=FBITS(v[17]);}
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(v0);
    a0 = s4 + 0;
    a1 = sp + 16;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+8));
    a2 = s0 + 0;
    a3 = s5 + 0;
    f0 = f0 + f5;
    ST32(sp+128, v1);
    ST32(sp+144, v1);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f5));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f5));
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f0));
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_089D31B4;
L_089D31B4:;
    v1 = v0 + 0;
    goto L_089D31BC;
L_089D31BC:;
    v0 = v1 + 0;
    sp = sp + 512;
    return v0;
L_089D31F4:;
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = f2 - f1;
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    s3 = sp + 80;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s3 + 0;
    a1 = sp + 64;
    ST32(sp+164, FBITS(f0));
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f1));
    ST32(sp+160, FBITS(f2));
    ST32(sp+168, FBITS(f1));
    ST32(sp+68, 0);
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D323C;
L_089D323C:;
    a0 = D_08B20494 - (1172);
    a0 = a0 + 1172;
    a1 = s0 + 0;
    v0 = func_08804858(a0, a1);
    goto L_089D324C;
L_089D324C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_089D3038; }
    goto L_089D3258;
L_089D3258:;
    v1 = LD32(s4);
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D3274; }
    goto L_089D3270;
L_089D3270:;
    a2 = LD32(v0+16);
    goto L_089D3274;
L_089D3274:;
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    t0 = (u32)-1;
    if (cnd_) { goto L_089D328C; }
    goto L_089D3288;
L_089D3288:;
    t0 = LD32(v0+8);
    goto L_089D328C;
L_089D328C:;
    a1 = s3 + 0;
    a0 = s0 + 0;
    a3 = 4100;
    t1 = 0xffff;
    t2 = 1;
    t3 = 1;
    { rv_t r_ = func_088B08D8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D32A8;
L_089D32A8:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089D3034; }
    goto L_089D32B0;
L_089D32B0:;
    goto L_089D31BC;
L_089D32B8:;
    ST32(sp+148, 0);
    ST32(sp+152, 0);
    ST32(sp+48, FBITS(f22));
    goto L_089D32C4;
L_089D32C4:;
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    goto L_089D2EDC;
L_089D32D0:;
    ST32(sp+144, FBITS(f21));
    ST32(sp+148, 0);
    ST32(sp+152, 0);
    ST32(sp+48, FBITS(f21));
    goto L_089D32C4;
L_089D32E4:;
    ST32(sp+148, 0);
    ST32(sp+152, FBITS(f21));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, FBITS(f21));
    goto L_089D2EDC;
L_089D32FC:;
    ST32(sp+148, 0);
    ST32(sp+152, FBITS(f22));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, FBITS(f22));
    goto L_089D2EDC;
L_089D3314:;
    a0 = s1 + 0;
    v0 = func_088BAA98(a0);
    goto L_089D331C;
L_089D331C:;
    f5 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+16));
    v1 = LD32(s2);
    f3 = f3 + f4;
    f1 = f1 + f5;
    f2 = f2 + f0;
    v0 = D_08AEEFFC - (-4100);
    f0 = BITSF(LD32(v0-4100));
    a0 = LD32(v1-12);
    f1 = f1 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    a0 = s2 + a0;
    v1 = LD32(a0);
    ST32(sp+152, FBITS(f1));
    ST32(sp+144, FBITS(f3));
    ST32(sp+148, FBITS(f2));
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D337C;
L_089D337C:;
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+144));
    f1 = BITSF(LD32(sp+152));
    v0 = 0 + 0;
    f0 = f0 - f2;
    f1 = f1 - f3;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+132, FBITS(f23));
    ST32(sp+128, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+136, FBITS(f1));
    {v1=FBITS(v[0]);}
    f23 = BITSF(v1);
    v0 = func_088BAA98(a0);
    goto L_089D33D8;
L_089D33D8:;
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+20));
    v1 = D_08AEF000 - (-4096);
    f3 = BITSF(LD32(v0));
    f2 = f2 - f1;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+12));
    f20 = BITSF(LD32(v1-4096));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f5 = f2 * f20;
    a0 = s3 + 0;
    ST32(sp+144, FBITS(f0));
    f23 = f23 + f5;
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f2));
    v0 = func_088BAA98(a0);
    goto L_089D3420;
L_089D3420:;
    f3 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f0 = f0 - f3;
    f3 = BITSF(LD32(v0+8));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f20 = f0 * f20;
    ST32(sp+152, FBITS(f0));
    ST32(sp+144, FBITS(f2));
    f23 = f23 + f20;
    ST32(sp+148, FBITS(f1));
    a1 = LD32(s2);
    goto L_089D2E84;
L_089D3460:;
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D3478;
L_089D3478:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_089D2E4C;
}

/* 089D3494 */
void func_089D3494(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089D3494:;
    sp = sp - 112;
    s2 = sp + 32;
    a2 = sp + 0;
    a3 = s2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_089D2DBC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089D34C0;
L_089D34C0:;
    cnd_ = v0 != 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_089D3564; }
    goto L_089D34C8;
L_089D34C8:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D34E0;
L_089D34E0:;
    v1 = D_08AEF010 - (-4080);
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1-4080));
    v1 = D_08AEF014 - (-4076);
    f3 = BITSF(LD32(v0+8));
    f1 = f1 - f0;
    f2 = BITSF(LD32(v1-4076));
    f0 = BITSF(LD32(v0));
    a1 = sp + 16;
    a0 = s2 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+80, 0);
    ST32(sp+84, 0);
    ST32(sp+88, FBITS(f2));
    ST32(sp+16, 0);
    goto L_089D3528;
L_089D3528:;
    ST32(sp+20, 0);
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D3530;
L_089D3530:;
    a0 = s1 + 0;
    v1 = LD32(s1);
    a2 = s2 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D354C;
L_089D354C:;
    sp = sp + 112;
    return;
L_089D3564:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D357C;
L_089D357C:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a1 = sp + 16;
    f2 = f2 - f1;
    f4 = f4 - f0;
    ST32(sp+16, FBITS(f3));
    a0 = s2 + 0;
    ST32(sp+84, FBITS(f2));
    ST32(sp+24, FBITS(f4));
    ST32(sp+80, FBITS(f3));
    ST32(sp+88, FBITS(f4));
    goto L_089D3528;
}

/* 089D35C0 */
rv_t func_089D35C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089D35C0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 089D35C8 */
rv_t func_089D35C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D35C8:;
    sp = sp - 48;
    f0 = BITSF(0);
    s3 = a1 + 0;
    s2 = a2 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_089D36A4; }
    goto L_089D3614;
L_089D3614:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D361C;
L_089D361C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089D194C(a0);
    goto L_089D3628;
L_089D3628:;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_089D3638; }
    goto L_089D3630;
L_089D3630:;
    cnd_ = s2 != 0;
    a0 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D3670; }
    goto L_089D3638;
L_089D3638:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3640;
L_089D3640:;
    v1 = 3;
    if (v0 == 0) v1 = 0;
    goto L_089D3648;
L_089D3648:;
    goto L_089D364C;
L_089D364C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D3670:;
    a0 = a0 - 19800;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3680;
L_089D3680:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D3638; }
    goto L_089D3688;
L_089D3688:;
    v1 = LD32(v0);
    a1 = s3 + 0;
    v0 = LD32(v1+232);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D369C;
L_089D369C:;
    v1 = v0 + 0;
    goto L_089D3648;
L_089D36A4:;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D36AC;
L_089D36AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D3614; }
    goto L_089D36B4;
L_089D36B4:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D36BC;
L_089D36BC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089D3648; }
    goto L_089D36C4;
L_089D36C4:;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089D3648; }
    goto L_089D36E0;
L_089D36E0:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D364C; }
    goto L_089D36EC;
L_089D36EC:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 == 0;
    a2 = D_08C2BF38 - (-16584);
    if (cnd_) { goto L_089D364C; }
    goto L_089D36F8;
L_089D36F8:;
    v0 = a2 - 16584;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089D376C; }
    goto L_089D3720;
L_089D3720:;
    a2 = LD32(a2-16584);
    a3 = a1 + 0;
    goto L_089D3728;
L_089D3728:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089D375C; }
    goto L_089D3740;
L_089D3740:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089D3770; }
    goto L_089D3750;
L_089D3750:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089D3740; }
    goto L_089D375C;
L_089D375C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089D3728; }
    goto L_089D376C;
L_089D376C:;
    v1 = LD32(sp+8);
    goto L_089D3770;
L_089D3770:;
    cnd_ = v1 == 0;
    a0 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_089D37A4; }
    goto L_089D3778;
L_089D3778:;
    v1 = LD32(v1);
    goto L_089D377C;
L_089D377C:;
    a0 = sp + 0;
    v0 = LD32(v1+96);
    cnd_ = v0 == s3;
    a1 = 1;
    if (cnd_) { goto L_089D3EAC; }
    goto L_089D378C;
L_089D378C:;
    func_08ABC8D8(a0, a1);
    goto L_089D3794;
L_089D3794:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_089D377C; }
    goto L_089D37A0;
L_089D37A0:;
    a0 = D_08C2B4CC - (-19252);
    goto L_089D37A4;
L_089D37A4:;
    v0 = 999;
    v1 = a0 - 19252;
    cnd_ = s3 == v0;
    s5 = 0 + 0;
    if (cnd_) { goto L_089D38FC; }
    goto L_089D37B4;
L_089D37B4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089D3804; }
    goto L_089D37D8;
L_089D37D8:;
    a0 = LD32(a1);
    goto L_089D37DC;
L_089D37DC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089D3E8C; }
    goto L_089D37F4;
L_089D37F4:;
    a1 = LD32(a1+4);
    goto L_089D37F8;
L_089D37F8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089D37DC; }
    goto L_089D3800;
L_089D3800:;
    s5 = 0 + 0;
    goto L_089D3804;
L_089D3804:;
    cnd_ = s5 == 0;
    if (cnd_) { a1 = LD32(s1+12); goto L_089D3900; }
    goto L_089D380C;
L_089D380C:;
    v0 = LD32(s1+228);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s5); goto L_089D3840; }
    goto L_089D381C;
L_089D381C:;
    a0 = LD32(s1+208);
    a1 = 0xbeeb0000u;
    a1 = a1 | 0x1a1c;
    a2 = 4;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089D3830;
L_089D3830:;
    v1 = LD32(s5+12);
    cnd_ = v0 != v1;
    if (cnd_) { s1 = LD32(sp); goto L_089D3DE8; }
    goto L_089D383C;
L_089D383C:;
    v1 = LD32(s5);
    goto L_089D3840;
L_089D3840:;
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D384C;
L_089D384C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+12); goto L_089D3900; }
    goto L_089D3854;
L_089D3854:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D38DC; }
    goto L_089D3868;
L_089D3868:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D38DC; }
    goto L_089D3874;
L_089D3874:;
    v0 = LD32(s1);
    goto L_089D3878;
L_089D3878:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D38CC; }
    goto L_089D388C;
L_089D388C:;
    v0 = LD_U8(s0+8);
    goto L_089D3890;
L_089D3890:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D38F4; }
    goto L_089D3898;
L_089D3898:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D38E4; }
    goto L_089D38A0;
L_089D38A0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D38A8;
L_089D38A8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D38B4;
L_089D38B4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D38C0;
L_089D38C0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3890; }
    goto L_089D38C8;
L_089D38C8:;
    v1 = LD32(s1+4);
    goto L_089D38CC;
L_089D38CC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3878; }
    goto L_089D38DC;
L_089D38DC:;
    v1 = 1;
    goto L_089D3648;
L_089D38E4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D38A8;
L_089D38F4:;
    s0 = LD32(s0+4);
    goto L_089D38C0;
L_089D38FC:;
    a1 = LD32(s1+12);
    goto L_089D3900;
L_089D3900:;
    v0 = a1 ^ 0x4;
    cnd_ = s5 == 0;
    s0 = v0 < 0x1u;
    if (cnd_) { goto L_089D3DE0; }
    goto L_089D390C;
L_089D390C:;
    v0 = LD32(s5+12);
    a0 = 0 < s0;
    v1 = 1;
    v0 = v0 ^ a1;
    if (v0 != 0) v1 = a0;
    s0 = v1 + 0;
    goto L_089D3924;
L_089D3924:;
    v1 = LD32(s1+252);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089D3CF8; }
    goto L_089D3934;
L_089D3934:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_089D39A8; }
    goto L_089D393C;
L_089D393C:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089D3944;
L_089D3944:;
    a1 = v0 + 0;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 != v0;
    s4 = s1 + 0;
    if (cnd_) { goto L_089D3CE0; }
    goto L_089D3960;
L_089D3960:;
    a0 = LD32(s4+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3968;
L_089D3968:;
    a0 = LD32(s5+12);
    s0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3974;
L_089D3974:;
    s0 = s0 ^ v0;
    s0 = 0 < s0;
    v0 = 0 < s4;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_089D3998; }
    goto L_089D398C;
L_089D398C:;
    v1 = LD32(s4+12);
    cnd_ = v1 != v0;
    if (cnd_) { s1 = LD32(sp); goto L_089D3C3C; }
    goto L_089D3998;
L_089D3998:;
    a0 = s1 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D39A0;
L_089D39A0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D3B4C; }
    goto L_089D39A8;
L_089D39A8:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D39B0;
L_089D39B0:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089D194C(a0);
    goto L_089D39BC;
L_089D39BC:;
    cnd_ = s0 == v0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089D39D0; }
    goto L_089D39C4;
L_089D39C4:;
    cnd_ = s2 != 0;
    a0 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D3A74; }
    goto L_089D39CC;
L_089D39CC:;
    s1 = LD32(sp);
    goto L_089D39D0;
L_089D39D0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D3A54; }
    goto L_089D39E0;
L_089D39E0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3A54; }
    goto L_089D39EC;
L_089D39EC:;
    v0 = LD32(s1);
    goto L_089D39F0;
L_089D39F0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D3A44; }
    goto L_089D3A04;
L_089D3A04:;
    v0 = LD_U8(s0+8);
    goto L_089D3A08;
L_089D3A08:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D3A6C; }
    goto L_089D3A10;
L_089D3A10:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3A5C; }
    goto L_089D3A18;
L_089D3A18:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D3A20;
L_089D3A20:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3A2C;
L_089D3A2C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D3A38;
L_089D3A38:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3A08; }
    goto L_089D3A40;
L_089D3A40:;
    v1 = LD32(s1+4);
    goto L_089D3A44;
L_089D3A44:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D39F0; }
    goto L_089D3A54;
L_089D3A54:;
    v1 = 3;
    goto L_089D3648;
L_089D3A5C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3A20;
L_089D3A6C:;
    s0 = LD32(s0+4);
    goto L_089D3A38;
L_089D3A74:;
    a0 = a0 - 19800;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3A84;
L_089D3A84:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D39CC; }
    goto L_089D3A8C;
L_089D3A8C:;
    v1 = LD32(v0);
    a1 = s3 + 0;
    v0 = LD32(v1+232);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D3AA0;
L_089D3AA0:;
    s1 = LD32(sp);
    s5 = v0 + 0;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D3B2C; }
    goto L_089D3AB8;
L_089D3AB8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3B2C; }
    goto L_089D3AC4;
L_089D3AC4:;
    v0 = LD32(s1);
    goto L_089D3AC8;
L_089D3AC8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D3B1C; }
    goto L_089D3ADC;
L_089D3ADC:;
    v0 = LD_U8(s0+8);
    goto L_089D3AE0;
L_089D3AE0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D3B44; }
    goto L_089D3AE8;
L_089D3AE8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3B34; }
    goto L_089D3AF0;
L_089D3AF0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D3AF8;
L_089D3AF8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3B04;
L_089D3B04:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D3B10;
L_089D3B10:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3AE0; }
    goto L_089D3B18;
L_089D3B18:;
    v1 = LD32(s1+4);
    goto L_089D3B1C;
L_089D3B1C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3AC8; }
    goto L_089D3B2C;
L_089D3B2C:;
    v1 = s5 + 0;
    goto L_089D3648;
L_089D3B34:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3AF8;
L_089D3B44:;
    s0 = LD32(s0+4);
    goto L_089D3B10;
L_089D3B4C:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089D3B54;
L_089D3B54:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D39A8; }
    goto L_089D3B5C;
L_089D3B5C:;
    a0 = s5 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3B64;
L_089D3B64:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D39A8; }
    goto L_089D3B6C;
L_089D3B6C:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089D3B74;
L_089D3B74:;
    a1 = LD32(s1);
    s2 = LD32(sp);
    s5 = 5;
    v1 = LD32(a1-16);
    a0 = LD32(s2+8);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    a0 = a0 - 1;
    v1 = 4;
    v0 = v0 ^ a1;
    ST32(s2+8, a0);
    cnd_ = a0 != 0;
    if (v0 != 0) s5 = v1;
    if (cnd_) { goto L_089D3B2C; }
    goto L_089D3BA8;
L_089D3BA8:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3B2C; }
    goto L_089D3BB4;
L_089D3BB4:;
    v0 = LD32(s2);
    goto L_089D3BB8;
L_089D3BB8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D3C0C; }
    goto L_089D3BCC;
L_089D3BCC:;
    v0 = LD_U8(s0+8);
    goto L_089D3BD0;
L_089D3BD0:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_089D3C34; }
    goto L_089D3BD8;
L_089D3BD8:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089D3C24; }
    goto L_089D3BE0;
L_089D3BE0:;
    v0 = LD32(s0+4);
    ST32(s1+4, v0);
    goto L_089D3BE8;
L_089D3BE8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3BF4;
L_089D3BF4:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089D3C00;
L_089D3C00:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3BD0; }
    goto L_089D3C08;
L_089D3C08:;
    v1 = LD32(s2+4);
    goto L_089D3C0C;
L_089D3C0C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089D3BB8; }
    goto L_089D3C1C;
L_089D3C1C:;
    v1 = s5 + 0;
    goto L_089D3648;
L_089D3C24:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3BE8;
L_089D3C34:;
    s0 = LD32(s0+4);
    goto L_089D3C00;
L_089D3C3C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D3A54; }
    goto L_089D3C4C;
L_089D3C4C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3A54; }
    goto L_089D3C58;
L_089D3C58:;
    v0 = LD32(s1);
    goto L_089D3C5C;
L_089D3C5C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D3CB0; }
    goto L_089D3C70;
L_089D3C70:;
    v0 = LD_U8(s0+8);
    goto L_089D3C74;
L_089D3C74:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D3CD8; }
    goto L_089D3C7C;
L_089D3C7C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3CC8; }
    goto L_089D3C84;
L_089D3C84:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D3C8C;
L_089D3C8C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3C98;
L_089D3C98:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D3CA4;
L_089D3CA4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3C74; }
    goto L_089D3CAC;
L_089D3CAC:;
    v1 = LD32(s1+4);
    goto L_089D3CB0;
L_089D3CB0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3C5C; }
    goto L_089D3CC0;
L_089D3CC0:;
    v1 = 3;
    goto L_089D3648;
L_089D3CC8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3C8C;
L_089D3CD8:;
    s0 = LD32(s0+4);
    goto L_089D3CA4;
L_089D3CE0:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3CF0;
L_089D3CF0:;
    s4 = v0 + 0;
    goto L_089D3960;
L_089D3CF8:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089D3D00;
L_089D3D00:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D3934; }
    goto L_089D3D08;
L_089D3D08:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089D3934; }
    goto L_089D3D10;
L_089D3D10:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089D3D18;
L_089D3D18:;
    a1 = LD32(s1);
    s2 = LD32(sp);
    s5 = 5;
    v1 = LD32(a1-16);
    a0 = LD32(s2+8);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    a0 = a0 - 1;
    v1 = 4;
    v0 = v0 ^ a1;
    ST32(s2+8, a0);
    cnd_ = a0 != 0;
    if (v0 != 0) s5 = v1;
    if (cnd_) { goto L_089D3B2C; }
    goto L_089D3D4C;
L_089D3D4C:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3B2C; }
    goto L_089D3D58;
L_089D3D58:;
    v0 = LD32(s2);
    goto L_089D3D5C;
L_089D3D5C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D3DB0; }
    goto L_089D3D70;
L_089D3D70:;
    v0 = LD_U8(s0+8);
    goto L_089D3D74;
L_089D3D74:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s0 + 0; goto L_089D3DD8; }
    goto L_089D3D7C;
L_089D3D7C:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089D3DC8; }
    goto L_089D3D84;
L_089D3D84:;
    v0 = LD32(s0+4);
    ST32(s1+4, v0);
    goto L_089D3D8C;
L_089D3D8C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3D98;
L_089D3D98:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089D3DA4;
L_089D3DA4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3D74; }
    goto L_089D3DAC;
L_089D3DAC:;
    v1 = LD32(s2+4);
    goto L_089D3DB0;
L_089D3DB0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089D3D5C; }
    goto L_089D3DC0;
L_089D3DC0:;
    v1 = s5 + 0;
    goto L_089D3648;
L_089D3DC8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3D8C;
L_089D3DD8:;
    s0 = LD32(s0+4);
    goto L_089D3DA4;
L_089D3DE0:;
    s0 = 0 < s0;
    goto L_089D3924;
L_089D3DE8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D3A54; }
    goto L_089D3DF8;
L_089D3DF8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3A54; }
    goto L_089D3E04;
L_089D3E04:;
    v0 = LD32(s1);
    goto L_089D3E08;
L_089D3E08:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D3E5C; }
    goto L_089D3E1C;
L_089D3E1C:;
    v0 = LD_U8(s0+8);
    goto L_089D3E20;
L_089D3E20:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D3E84; }
    goto L_089D3E28;
L_089D3E28:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3E74; }
    goto L_089D3E30;
L_089D3E30:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D3E38;
L_089D3E38:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3E44;
L_089D3E44:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D3E50;
L_089D3E50:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3E20; }
    goto L_089D3E58;
L_089D3E58:;
    v1 = LD32(s1+4);
    goto L_089D3E5C;
L_089D3E5C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3E08; }
    goto L_089D3E6C;
L_089D3E6C:;
    v1 = 3;
    goto L_089D3648;
L_089D3E74:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3E38;
L_089D3E84:;
    s0 = LD32(s0+4);
    goto L_089D3E50;
L_089D3E8C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_089D37F4; }
    goto L_089D3E98;
L_089D3E98:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089D37F8; }
    goto L_089D3EA4;
L_089D3EA4:;
    goto L_089D3804;
L_089D3EAC:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D3F34; }
    goto L_089D3EC0;
L_089D3EC0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D3F34; }
    goto L_089D3ECC;
L_089D3ECC:;
    v0 = LD32(s1);
    goto L_089D3ED0;
L_089D3ED0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D3F24; }
    goto L_089D3EE4;
L_089D3EE4:;
    v0 = LD_U8(s0+8);
    goto L_089D3EE8;
L_089D3EE8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D3F4C; }
    goto L_089D3EF0;
L_089D3EF0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3F3C; }
    goto L_089D3EF8;
L_089D3EF8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D3F00;
L_089D3F00:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D3F0C;
L_089D3F0C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D3F18;
L_089D3F18:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D3EE8; }
    goto L_089D3F20;
L_089D3F20:;
    v1 = LD32(s1+4);
    goto L_089D3F24;
L_089D3F24:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D3ED0; }
    goto L_089D3F34;
L_089D3F34:;
    v1 = 2;
    goto L_089D3648;
L_089D3F3C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D3F00;
L_089D3F4C:;
    s0 = LD32(s0+4);
    goto L_089D3F18;
}

/* 089D3F54 */
rv_t func_089D3F54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D3F54:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089D194C(a0);
    goto L_089D3F68;
L_089D3F68:;
    a0 = LD32(s0);
    a1 = 5;
    v1 = LD32(a0-16);
    s0 = s0 + v1;
    a0 = LD32(s0+4);
    v1 = 4;
    v0 = v0 ^ a0;
    if (v0 != 0) a1 = v1;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D3F9C */
void func_089D3F9C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D3F9C:;
    sp = sp - 16;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089D3FEC; }
    goto L_089D3FC0;
L_089D3FC0:;
    v1 = LD32(a1);
    a1 = LD32(a0);
    v0 = LD32(v1-16);
    a2 = LD32(a1+224);
    v0 = s0 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D3FDC;
L_089D3FDC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_089D29D8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D3FEC;
L_089D3FEC:;
    sp = sp + 16;
    return;
}

/* 089D4004 */
rv_t func_089D4004(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D4004:;
    sp = sp - 32;
    a2 = 1;
    s0 = a0 + 0;
    s2 = LD32(a0+252);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a1 = s2 + 0;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D403C;
L_089D403C:;
    s3 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = s3 == 0;
    v0 = 999;
    if (cnd_) { goto L_089D40CC; }
    goto L_089D404C;
L_089D404C:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4054;
L_089D4054:;
    a1 = LD32(s0+84);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a2 = 1;
    s4 = v0 + 0;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D406C;
L_089D406C:;
    s1 = v0 + 0;
    v1 = 0x300000u;
    v1 = v1 | 0xcffa;
    cnd_ = s1 == 0;
    v0 = 999;
    if (cnd_) { goto L_089D40CC; }
    goto L_089D4080;
L_089D4080:;
    v0 = LD32(s0+204);
    f1 = BITSF(0);
    cnd_ = v0 == v1;
    if (cnd_) { f2 = BITSF(LD32(s0+8)); goto L_089D40EC; }
    goto L_089D4090;
L_089D4090:;
    v1 = LD32(s0);
    goto L_089D4094;
L_089D4094:;
    a0 = s0 + 0;
    v0 = LD32(v1+224);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D40A4;
L_089D40A4:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D40B8;
L_089D40B8:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_089D2B60(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D40C8;
L_089D40C8:;
    v0 = s2 + 0;
    goto L_089D40CC;
L_089D40CC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D40EC:;
    fcc = FCMP(f2, f1, 2);
    cnd_ = fcc;
    v1 = LD32(s0);
    if (cnd_) { goto L_089D4094; }
    goto L_089D40FC;
L_089D40FC:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4094; }
    goto L_089D411C;
L_089D411C:;
    f0 = BITSF(LD32(s3+8));
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f12 = BITSF(LD32(v0+40));
    f12 = f12 / f2;
    f12 = f12 * f0;
    func_0886422C(a0, f12);
    goto L_089D4138;
L_089D4138:;
    v1 = LD32(s0);
    goto L_089D4094;
}

/* 089D4140 */
void func_089D4140(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089D4140:;
    sp = sp - 112;
    s5 = a1 & 0xff;
    s3 = a0 + 0;
    s2 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089D424C; }
    goto L_089D4178;
L_089D4178:;
    s7 = D_08C2A880 - (-22400);
    s6 = D_08C2B2A8 - (-19800);
    a1 = LD32(s2+252);
    goto L_089D4184;
L_089D4184:;
    a2 = 1;
    a0 = s7 - 22400;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4190;
L_089D4190:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089D421C; }
    goto L_089D4198;
L_089D4198:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s4 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D41B4;
L_089D41B4:;
    a1 = LD32(s1+12);
    a0 = v0 + 0;
    v0 = func_089EDB40(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D41C0;
L_089D41C0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D421C; }
    goto L_089D41CC;
L_089D41CC:;
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D41D4;
L_089D41D4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    v0 = func_089ED36C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D41E8;
L_089D41E8:;
    a3 = 0 + 0;
    if (v0 == 0) a3 = s4;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = sp + 0;
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_089D4200;
L_089D4200:;
    v1 = LD32(s1);
    a2 = s4 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+16);
    a1 = sp + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D421C;
L_089D421C:;
    a0 = s2 + 0;
    v0 = func_089D1944(a0);
    goto L_089D4224;
L_089D4224:;
    a1 = v0 + 0;
    a0 = s6 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4234;
L_089D4234:;
    cnd_ = v0 == s3;
    s2 = v0 + 0;
    if (cnd_) { goto L_089D424C; }
    goto L_089D423C;
L_089D423C:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_089D4250; }
    goto L_089D4244;
L_089D4244:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s2+252); goto L_089D4184; }
    goto L_089D424C;
L_089D424C:;
    goto L_089D4250;
L_089D4250:;
    sp = sp + 112;
    return;
}

/* 089D4278 */
void func_089D4278(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D4278:;
    sp = sp - 32;
    s5 = D_08C2B2A8 - (-19800);
    v0 = s5 - 19800;
    v1 = a2 + 0;
    a2 = 1;
    s2 = a0 + 0;
    a0 = v0 + 0;
    s3 = v1 & 0xff;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D42BC;
L_089D42BC:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_089D4374; }
    goto L_089D42C4;
L_089D42C4:;
    cnd_ = s2 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_089D4374; }
    goto L_089D42CC;
L_089D42CC:;
    s6 = D_08C2A880 - (-22400);
    a1 = LD32(s1+252);
    goto L_089D42D4;
L_089D42D4:;
    a0 = s6 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D42E0;
L_089D42E0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D4344; }
    goto L_089D42EC;
L_089D42EC:;
    v1 = LD32(v0);
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = LD32(s1+84);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D42FC;
L_089D42FC:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4310;
L_089D4310:;
    v1 = LD32(s0);
    a0 = s4 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_089D1EA8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4328;
L_089D4328:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 999;
    if (cnd_) { goto L_089D439C; }
    goto L_089D4334;
L_089D4334:;
    v1 = LD32(s1);
    v0 = LD32(v1+224);
    goto L_089D433C;
L_089D433C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4344;
L_089D4344:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D434C;
L_089D434C:;
    a1 = v0 + 0;
    a0 = s5 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D435C;
L_089D435C:;
    cnd_ = v0 == s2;
    s1 = v0 + 0;
    if (cnd_) { goto L_089D4374; }
    goto L_089D4364;
L_089D4364:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_089D4378; }
    goto L_089D436C;
L_089D436C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+252); goto L_089D42D4; }
    goto L_089D4374;
L_089D4374:;
    goto L_089D4378;
L_089D4378:;
    sp = sp + 32;
    return;
L_089D439C:;
    v1 = LD32(s1);
    v0 = LD32(v1+172);
    t_ = v0;
    a1 = LD32(s0+84);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D43AC;
L_089D43AC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 999;
    v0 = LD32(v1+172);
    goto L_089D433C;
}

/* 089D43C0 */
rv_t func_089D43C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D43C0:;
    sp = sp - 32;
    s3 = a0 + 0;
    a2 = 1;
    s1 = a1 + 0;
    v0 = LD32(a0+84);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a1 = v0 + 0;
    s2 = LD32(s3+252);
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D43FC;
L_089D43FC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D44A0; }
    goto L_089D4404;
L_089D4404:;
    v1 = LD32(s3);
    a0 = s3 + 0;
    v0 = LD32(v1+224);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4418;
L_089D4418:;
    a1 = LD32(s3+172);
    a0 = s3 + 0;
    a1 = (a1 >> 2) & 0x1;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4428;
L_089D4428:;
    v1 = LD32(s1);
    a1 = s2 + 0;
    v0 = LD32(v1+224);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D443C;
L_089D443C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4448;
L_089D4448:;
    v1 = LD32(s1);
    a1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s1 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4468;
L_089D4468:;
    a0 = D_08C2A880 - (-22400);
    a1 = s2 + 0;
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D447C;
L_089D447C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089D44A0; }
    goto L_089D4484;
L_089D4484:;
    v0 = LD32(s3+228);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s1+228);
    if (cnd_) { goto L_089D4578; }
    goto L_089D4494;
L_089D4494:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_089D44BC; }
    goto L_089D44A0;
L_089D44A0:;
    goto L_089D44A4;
L_089D44A4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D44BC:;
    a1 = 1;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D44CC;
L_089D44CC:;
    v1 = LD32(s1);
    goto L_089D44D0;
L_089D44D0:;
    a0 = s1 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0B0C(a0, 0, 0, 0);
    goto L_089D44E4;
L_089D44E4:;
    v1 = LD32(s2);
    a2 = v0 + 0;
    a1 = s0 + 0;
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+96);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4508;
L_089D4508:;
    a0 = 0x804c;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D451C;
L_089D451C:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089D44A0; }
    goto L_089D4524;
L_089D4524:;
    a0 = LD32(v0+24);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s3); goto L_089D4548; }
    goto L_089D4530;
L_089D4530:;
    v0 = LD32(s2);
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    ST32(a0, v0);
    v1 = LD32(s3);
    goto L_089D4548;
L_089D4548:;
    a0 = t0 + 0;
    a1 = 1;
    v0 = LD32(v1-16);
    v1 = 2;
    a2 = 1;
    v0 = s3 + v0;
    a3 = LD32(v0+4);
    ST32(t0, v1);
    ST32(t0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4570;
L_089D4570:;
    goto L_089D44A4;
L_089D4578:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_089D45AC; }
    goto L_089D4584;
L_089D4584:;
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4590;
L_089D4590:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D45A4;
L_089D45A4:;
    goto L_089D44A4;
L_089D45AC:;
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D45B8;
L_089D45B8:;
    v1 = LD32(s1);
    goto L_089D44D0;
}

/* 089D45C0 */
rv_t func_089D45C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D45C0:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089D466C; }
    goto L_089D45EC;
L_089D45EC:;
    v1 = LD32(a1);
    v0 = LD32(v1-16);
    v0 = a1 + v0;
    s3 = LD32(v0+4);
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4600;
L_089D4600:;
    a1 = LD32(s1+84);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a2 = 1;
    s4 = v0 + 0;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4618;
L_089D4618:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D466C; }
    goto L_089D4620;
L_089D4620:;
    func_08A16A2C(0, 0, 0);
    goto L_089D4628;
L_089D4628:;
    v0 = LD32(s2);
    a1 = s3 + 0;
    v1 = LD32(v0+224);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D463C;
L_089D463C:;
    a1 = LD32(s2);
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(a1-16);
    a2 = LD32(v1+88);
    v0 = s2 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D465C;
L_089D465C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_089D29D8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D466C;
L_089D466C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089D468C */
rv_t func_089D468C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D468C:;
    sp = sp - 32;
    v0 = D_08C2C9B8 - (-13896);
    a2 = v0 - 13896;
    v1 = LD32(a2+12);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089D46D8; }
    goto L_089D46B4;
L_089D46B4:;
    v0 = LD32(a0+236);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(a0+236, v0);
    goto L_089D46C0;
L_089D46C0:;
    goto L_089D46C4;
L_089D46C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D46D8:;
    v0 = LD32(a2+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(a2+8, v0);
    ST32(sp, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABE9F8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D46FC;
L_089D46FC:;
    s0 = LD32(sp+8);
    cnd_ = s0 == 0;
    if (cnd_) { v1 = LD32(s1+236); goto L_089D47C8; }
    goto L_089D4708;
L_089D4708:;
    v0 = LD32(s1);
    goto L_089D470C;
L_089D470C:;
    s0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = s0 + 28;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4728;
L_089D4728:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+28));
    a0 = sp + 0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a1 = 1;
    if (cnd_) { goto L_089D47B0; }
    goto L_089D4744;
L_089D4744:;
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D47B0; }
    goto L_089D4758;
L_089D4758:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D47B0; }
    goto L_089D4770;
L_089D4770:;
    f0 = BITSF(LD32(s2+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D47B0; }
    goto L_089D4784;
L_089D4784:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D47B0; }
    goto L_089D479C;
L_089D479C:;
    f0 = BITSF(LD32(s2+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_089D47F4; }
    goto L_089D47B0;
L_089D47B0:;
    { u64 r_ = func_08ABE9F8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D47B8;
L_089D47B8:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D470C; }
    goto L_089D47C4;
L_089D47C4:;
    v1 = LD32(s1+236);
    goto L_089D47C8;
L_089D47C8:;
    a0 = LD32(sp);
    v1 = v1 | 0x1;
    ST32(s1+236, v1);
    goto L_089D47D4;
L_089D47D4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089D46C0; }
    goto L_089D47E4;
L_089D47E4:;
    { u64 r_ = func_08ABEA90(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D47EC;
L_089D47EC:;
    goto L_089D46C4;
L_089D47F4:;
    v0 = LD32(s1+236);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s1+236, v0);
    a0 = LD32(sp);
    goto L_089D47D4;
}

/* 089D4808 */
void func_089D4808(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D4808:;
    sp = sp - 48;
    a2 = D_08C2C9A8 - (-13912);
    a1 = a2 - 13912;
    v1 = LD32(a1+12);
    cnd_ = v1 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089D4864; }
    goto L_089D4838;
L_089D4838:;
    v0 = LD32(a0+236);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(a0+236, v0);
    goto L_089D4844;
L_089D4844:;
    goto L_089D4848;
L_089D4848:;
    sp = sp + 48;
    return;
L_089D4864:;
    v0 = LD32(a1+8);
    v1 = LD32(a1+4);
    ST32(sp, a1);
    v0 = v0 + 1;
    a0 = sp + 0;
    ST32(a1+8, v0);
    ST32(sp+8, 0);
    cnd_ = v1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089D48D4; }
    goto L_089D4888;
L_089D4888:;
    a2 = LD32(a2-13912);
    a3 = v1 + 0;
    goto L_089D4890;
L_089D4890:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089D48C4; }
    goto L_089D48A8;
L_089D48A8:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089D48D8; }
    goto L_089D48B8;
L_089D48B8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089D48A8; }
    goto L_089D48C4;
L_089D48C4:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089D4890; }
    goto L_089D48D4;
L_089D48D4:;
    v0 = LD32(sp+8);
    goto L_089D48D8;
L_089D48D8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2+236); goto L_089D49AC; }
    goto L_089D48E0;
L_089D48E0:;
    s0 = LD32(v0);
    goto L_089D48E4;
L_089D48E4:;
    v0 = LD_U8(s0+52);
    cnd_ = v0 == 0;
    s1 = s0 + 28;
    if (cnd_) { goto L_089D4990; }
    goto L_089D48F0;
L_089D48F0:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D490C;
L_089D490C:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+28));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_089D4994; }
    goto L_089D4924;
L_089D4924:;
    f0 = BITSF(LD32(s1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4994; }
    goto L_089D4938;
L_089D4938:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4994; }
    goto L_089D4950;
L_089D4950:;
    f0 = BITSF(LD32(s1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4994; }
    goto L_089D4964;
L_089D4964:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4994; }
    goto L_089D497C;
L_089D497C:;
    f0 = BITSF(LD32(s1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_089D4A5C; }
    goto L_089D4990;
L_089D4990:;
    a0 = sp + 0;
    goto L_089D4994;
L_089D4994:;
    a1 = 1;
    func_08AC6B88(a0, a1);
    goto L_089D499C;
L_089D499C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089D48E4; }
    goto L_089D49A8;
L_089D49A8:;
    v1 = LD32(s2+236);
    goto L_089D49AC;
L_089D49AC:;
    s1 = LD32(sp);
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s2+236, v1);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D4844; }
    goto L_089D49C8;
L_089D49C8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D4844; }
    goto L_089D49D4;
L_089D49D4:;
    v0 = LD32(s1);
    goto L_089D49D8;
L_089D49D8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D4A2C; }
    goto L_089D49EC;
L_089D49EC:;
    v0 = LD_U8(s0+8);
    goto L_089D49F0;
L_089D49F0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D4A54; }
    goto L_089D49F8;
L_089D49F8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D4A44; }
    goto L_089D4A00;
L_089D4A00:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D4A08;
L_089D4A08:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4A14;
L_089D4A14:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D4A20;
L_089D4A20:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D49F0; }
    goto L_089D4A28;
L_089D4A28:;
    v1 = LD32(s1+4);
    goto L_089D4A2C;
L_089D4A2C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D49D8; }
    goto L_089D4A3C;
L_089D4A3C:;
    goto L_089D4848;
L_089D4A44:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D4A08;
L_089D4A54:;
    s0 = LD32(s0+4);
    goto L_089D4A20;
L_089D4A5C:;
    v0 = LD32(s2+236);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s2+236, v0);
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D4844; }
    goto L_089D4A7C;
L_089D4A7C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D4844; }
    goto L_089D4A88;
L_089D4A88:;
    v0 = LD32(s1);
    goto L_089D4A8C;
L_089D4A8C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D4AE0; }
    goto L_089D4AA0;
L_089D4AA0:;
    v0 = LD_U8(s0+8);
    goto L_089D4AA4;
L_089D4AA4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D4B08; }
    goto L_089D4AAC;
L_089D4AAC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D4AF8; }
    goto L_089D4AB4;
L_089D4AB4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D4ABC;
L_089D4ABC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4AC8;
L_089D4AC8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D4AD4;
L_089D4AD4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D4AA4; }
    goto L_089D4ADC;
L_089D4ADC:;
    v1 = LD32(s1+4);
    goto L_089D4AE0;
L_089D4AE0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D4A8C; }
    goto L_089D4AF0;
L_089D4AF0:;
    goto L_089D4848;
L_089D4AF8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D4ABC;
L_089D4B08:;
    s0 = LD32(s0+4);
    goto L_089D4AD4;
}

/* 089D4B10 */
void func_089D4B10(u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_089D4B10:;
    v0 = D_08AEF018 - (-4072);
    f2 = BITSF(LD32(v0-4072));
    v0 = D_08AEF020 - (-4064);
    f0 = BITSF(LD32(v0-4064));
    v1 = D_08AEF01C - (-4068);
    v0 = D_08AEF024 - (-4060);
    f1 = BITSF(LD32(v1-4068));
    ST32(a1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-4060));
    ST32(a1+20, FBITS(f1));
    ST32(a1+12, FBITS(f0));
    ST32(a1+16, FBITS(f2));
    ST32(a1, FBITS(f2));
    ST32(a1+4, FBITS(f1));
    return;
}

/* 089D4B4C */
void func_089D4B4C(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
L_089D4B4C:;
    v0 = LD32(a1+28);
    a1 = a1 + 28;
    v1 = D_08AEF02C - (-4052);
    ST32(a2, v0);
    v0 = D_08AEF028 - (-4056);
    a0 = LD32(a1+4);
    f4 = BITSF(LD32(v0-4056));
    f0 = BITSF(LD32(a2));
    ST32(a2+4, a0);
    f0 = f0 - f4;
    v0 = LD32(a1+8);
    f1 = BITSF(LD32(v1-4052));
    f5 = BITSF(LD32(a2+4));
    ST32(a2+8, v0);
    f5 = f5 + f4;
    v0 = LD32(a1+12);
    f2 = BITSF(LD32(a2+8));
    ST32(a2+12, v0);
    f2 = f2 - f1;
    v0 = LD32(a1+16);
    f3 = BITSF(LD32(a2+12));
    ST32(a2+16, v0);
    f3 = f3 + f1;
    v0 = LD32(a1+20);
    f1 = BITSF(LD32(a2+16));
    ST32(a2, FBITS(f0));
    f1 = f1 - f4;
    ST32(a2+20, v0);
    f0 = BITSF(LD32(a2+20));
    ST32(a2+8, FBITS(f2));
    f0 = f0 + f4;
    ST32(a2+16, FBITS(f1));
    ST32(a2+20, FBITS(f0));
    ST32(a2+4, FBITS(f5));
    ST32(a2+12, FBITS(f3));
    return;
}

/* 089D4BDC */
rv_t func_089D4BDC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089D4BDC:;
    sp = sp - 112;
    s1 = a0 + 0;
    a0 = 0 + 0;
    { u64 r_ = func_08A145E4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4BFC;
L_089D4BFC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D4D88; }
    goto L_089D4C04;
L_089D4C04:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = s0 + 28;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4C20;
L_089D4C20:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+28));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a1 = s0 + 0;
    if (cnd_) { goto L_089D4CA8; }
    goto L_089D4C38;
L_089D4C38:;
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_089D4CAC; }
    goto L_089D4C4C;
L_089D4C4C:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4CAC; }
    goto L_089D4C64;
L_089D4C64:;
    f0 = BITSF(LD32(s2+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4CAC; }
    goto L_089D4C78;
L_089D4C78:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4CAC; }
    goto L_089D4C90;
L_089D4C90:;
    f0 = BITSF(LD32(s2+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089D4D8C; }
    goto L_089D4CA4;
L_089D4CA4:;
    a1 = s0 + 0;
    goto L_089D4CA8;
L_089D4CA8:;
    a0 = s1 + 0;
    goto L_089D4CAC;
L_089D4CAC:;
    a2 = sp + 0;
    func_089D4B4C(a1, a2);
    goto L_089D4CB4;
L_089D4CB4:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4CD0;
L_089D4CD0:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_089D4D44; }
    goto L_089D4CE8;
L_089D4CE8:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    s0 = sp + 32;
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4CF8;
L_089D4CF8:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+12));
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4D10;
L_089D4D10:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4D20;
L_089D4D20:;
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4D34;
L_089D4D34:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a1 = sp + 64;
    if (cnd_) { goto L_089D4DA0; }
    goto L_089D4D44;
L_089D4D44:;
    s0 = sp + 32;
    goto L_089D4D48;
L_089D4D48:;
    a0 = s0 + 0;
    func_0897A7A0(a0);
    goto L_089D4D50;
L_089D4D50:;
    a3 = LD32(s1);
    v0 = D_08AEF030 - (-4048);
    a1 = LD32(s1+84);
    v1 = LD32(a3-16);
    f0 = BITSF(LD32(v0-4048));
    v0 = LD32(a3+12);
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    ST32(sp+44, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+40, a1);
    a1 = s0 + 0;
    t_ = v0;
    ST32(sp+36, a2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4D88;
L_089D4D88:;
    goto L_089D4D8C;
L_089D4D8C:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089D4DA0:;
    a0 = s1 + 0;
    func_089D4B10(a1);
    goto L_089D4DA8;
L_089D4DA8:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4DC4;
L_089D4DC4:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+64));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+68));
    if (cnd_) { goto L_089D4D44; }
    goto L_089D4DDC;
L_089D4DDC:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    s0 = sp + 32;
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4DEC;
L_089D4DEC:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(sp+72));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+76));
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4E04;
L_089D4E04:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+80));
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4E14;
L_089D4E14:;
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+84));
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4E28;
L_089D4E28:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D4D48; }
    goto L_089D4E38;
L_089D4E38:;
    a0 = s1 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4E40;
L_089D4E40:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D4D8C; }
    goto L_089D4E48;
L_089D4E48:;
    a2 = 0 + 0;
    a0 = 0x804a;
    a1 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4E5C;
L_089D4E5C:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089D4D88; }
    goto L_089D4E64;
L_089D4E64:;
    v1 = LD32(s1+84);
    v0 = 3;
    ST32(a2, v0);
    a0 = a2 + 0;
    a1 = 1;
    ST32(a2+4, v1);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D4E84;
L_089D4E84:;
    goto L_089D4D8C;
}

/* 089D4E8C */
u64 func_089D4E8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D4E8C:;
    sp = sp - 16;
    v1 = 1;
    s1 = a1 + 0;
    v0 = LD32(a0+252);
    cnd_ = v0 == a1;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D4F24; }
    goto L_089D4EB4;
L_089D4EB4:;
    v0 = func_089D1944(a0);
    goto L_089D4EBC;
L_089D4EBC:;
    a1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 == v0;
    s2 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D4F20; }
    goto L_089D4ED8;
L_089D4ED8:;
    a0 = s2 - 19800;
    goto L_089D4EDC;
L_089D4EDC:;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4EE4;
L_089D4EE4:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089D4F24; }
    goto L_089D4EF0;
L_089D4EF0:;
    v0 = LD32(v0+252);
    cnd_ = v0 == s1;
    v1 = 1;
    if (cnd_) { goto L_089D4F24; }
    goto L_089D4EFC;
L_089D4EFC:;
    v0 = func_089D1944(a0);
    goto L_089D4F04;
L_089D4F04:;
    a1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 != v0;
    a0 = s2 - 19800;
    if (cnd_) { goto L_089D4EDC; }
    goto L_089D4F20;
L_089D4F20:;
    v1 = 0 + 0;
    goto L_089D4F24;
L_089D4F24:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D4F40 */
u64 func_089D4F40(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D4F40:;
    sp = sp - 16;
    v0 = 999;
    s0 = a0 + 0;
    v1 = LD32(a0+252);
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_089D4F84; }
    goto L_089D4F68;
L_089D4F68:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089D4F84:;
    v0 = func_089D1944(a0);
    goto L_089D4F8C;
L_089D4F8C:;
    a1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 == v0;
    s2 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D4FF4; }
    goto L_089D4FA8;
L_089D4FA8:;
    s1 = 999;
    a0 = s2 - 19800;
    goto L_089D4FB0;
L_089D4FB0:;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D4FB8;
L_089D4FB8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089D4F68; }
    goto L_089D4FC4;
L_089D4FC4:;
    v0 = LD32(v0+252);
    cnd_ = v0 != s1;
    a1 = 1;
    if (cnd_) { goto L_089D4F68; }
    goto L_089D4FD0;
L_089D4FD0:;
    v0 = func_089D1944(a0);
    goto L_089D4FD8;
L_089D4FD8:;
    a1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a1 != v0;
    if (cnd_) { a0 = s2 - 19800; goto L_089D4FB0; }
    goto L_089D4FF4;
L_089D4FF4:;
    a1 = 0 + 0;
    goto L_089D4F68;
}

/* 089D4FFC */
rv_t func_089D4FFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D4FFC:;
    sp = sp - 48;
    s0 = a0 + 0;
    { u64 r_ = func_089D4F40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5010;
L_089D5010:;
    f2 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+220)); goto L_089D5038; }
    goto L_089D501C;
L_089D501C:;
    v0 = D_08AEF034 - (-4044);
    f0 = BITSF(LD32(v0-4044));
    ST32(s0+220, FBITS(f0));
    goto L_089D5028;
L_089D5028:;
    goto L_089D502C;
L_089D502C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D5038:;
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089D502C; }
    goto L_089D5048;
L_089D5048:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+220, FBITS(f0));
    if (cnd_) { goto L_089D502C; }
    goto L_089D5064;
L_089D5064:;
    v0 = LD32(s0+228);
    a2 = 0xfffe0000u;
    a1 = 0x10000u;
    v0 = (v0 >> 1) & 0x1;
    a2 = a2 | 0x7960;
    cnd_ = v0 != 0;
    a1 = a1 | 0x869f;
    if (cnd_) { goto L_089D50A4; }
    goto L_089D5080;
L_089D5080:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    v0 = v0 + a2;
    v0 = a1 < v0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089D50AC; }
    goto L_089D50A4;
L_089D50A4:;
    ST32(s0+220, 0);
    goto L_089D5028;
L_089D50AC:;
    func_0897A7A0(a0);
    goto L_089D50B4;
L_089D50B4:;
    a3 = LD32(s0);
    v0 = D_08AEF038 - (-4040);
    a1 = LD32(s0+84);
    v1 = LD32(a3-16);
    f0 = BITSF(LD32(v0-4040));
    v0 = LD32(a3+12);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    ST32(sp+12, FBITS(f0));
    a0 = s0 + 0;
    ST32(sp+8, a1);
    a1 = sp + 0;
    t_ = v0;
    ST32(sp+4, a2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D50EC;
L_089D50EC:;
    ST32(s0+220, 0);
    goto L_089D5028;
}

/* 089D50F4 */
rv_t func_089D50F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D50F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E39C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5108;
L_089D5108:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D5130; }
    goto L_089D5120;
L_089D5120:;
    goto L_089D5124;
L_089D5124:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D5130:;
    v0 = func_088BB4E4(a0);
    goto L_089D5138;
L_089D5138:;
    a0 = LD32(s0);
    v0 = v0 | 0x800;
    v0 = v0 & 0xffff;
    v1 = LD32(a0-12);
    a1 = v0 + 0;
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5158;
L_089D5158:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB264(a0, a1);
    goto L_089D5170;
L_089D5170:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB234(a0, a1);
    goto L_089D5188;
L_089D5188:;
    v0 = LD32(s0);
    a0 = D_08AEF03C - (-4036);
    f12 = BITSF(LD32(a0-4036));
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB550(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D51A4;
L_089D51A4:;
    v1 = LD32(s0);
    a1 = 4;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB56C(a0, a1);
    goto L_089D51BC;
L_089D51BC:;
    v1 = LD32(s0);
    a1 = (u32)-1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB578(a0, a1);
    goto L_089D51D4;
L_089D51D4:;
    goto L_089D5124;
}

/* 089D51DC */
u64 func_089D51DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D51DC:;
    sp = sp - 32;
    s5 = a1 + 0;
    s2 = a0 + 0;
    s0 = a0 + 0;
    s1 = LD32(a0);
    v0 = LD32(s1-16);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    ST32(a1+248, v1);
    a0 = LD32(v0+4);
    ST32(a1+244, a0);
    goto L_089D5224;
L_089D5224:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D522C;
L_089D522C:;
    a3 = LD32(s1-16);
    s3 = D_08C2B2A8 - (-19800);
    a0 = s3 - 19800;
    a3 = s2 + a3;
    v1 = LD32(a3+4);
    a1 = v0 + 0;
    cnd_ = v0 == v1;
    a2 = 1;
    if (cnd_) { goto L_089D5260; }
    goto L_089D524C;
L_089D524C:;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5254;
L_089D5254:;
    s1 = LD32(s2);
    s0 = v0 + 0;
    goto L_089D5224;
L_089D5260:;
    v0 = LD32(s5);
    a0 = s2 + 0;
    s4 = 0 + 0;
    v1 = LD32(v0-16);
    v1 = s5 + v1;
    v0 = LD32(v1+4);
    ST32(s0+244, v0);
    s0 = s2 + 0;
    v0 = func_089D193C(a0);
    goto L_089D5284;
L_089D5284:;
    s1 = v0 + 1;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089D52C0; }
    goto L_089D5290;
L_089D5290:;
    ST32(s0+240, s1);
    a0 = s0 + 0;
    s4 = s4 + 1;
    v0 = func_089D1944(a0);
    goto L_089D52A0;
L_089D52A0:;
    a1 = v0 + 0;
    a0 = s3 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D52B0;
L_089D52B0:;
    v1 = s4 < s1;
    cnd_ = v1 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D5290; }
    goto L_089D52BC;
L_089D52BC:;
    goto L_089D52C0;
L_089D52C0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D52E0 */
rv_t func_089D52E0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D52E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089D0B88(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D52F4;
L_089D52F4:;
    a1 = v0 + 0;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5314; }
    goto L_089D5304;
L_089D5304:;
    goto L_089D5308;
L_089D5308:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D5314:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D531C;
L_089D531C:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0BB0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5324;
L_089D5324:;
    a1 = v0 + 0;
    a2 = 1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5304; }
    goto L_089D5334;
L_089D5334:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D533C;
L_089D533C:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0BD8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5344;
L_089D5344:;
    a1 = v0 + 0;
    a2 = 2;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5304; }
    goto L_089D5354;
L_089D5354:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D535C;
L_089D535C:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0C00(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5364;
L_089D5364:;
    a1 = v0 + 0;
    a2 = 3;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5304; }
    goto L_089D5374;
L_089D5374:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D537C;
L_089D537C:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0C28(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5384;
L_089D5384:;
    a1 = v0 + 0;
    a2 = 4;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5304; }
    goto L_089D5394;
L_089D5394:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D539C;
L_089D539C:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0C50(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D53A4;
L_089D53A4:;
    a1 = v0 + 0;
    a2 = 5;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5304; }
    goto L_089D53B4;
L_089D53B4:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D53BC;
L_089D53BC:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0C78(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D53C4;
L_089D53C4:;
    a1 = v0 + 0;
    a2 = 6;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5304; }
    goto L_089D53D4;
L_089D53D4:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D53DC;
L_089D53DC:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0CA0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D53E4;
L_089D53E4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 7;
    if (cnd_) { goto L_089D5304; }
    goto L_089D53F4;
L_089D53F4:;
    { rv_t r_ = func_089D5404(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D53FC;
L_089D53FC:;
    goto L_089D5308;
}

/* 089D5404 */
rv_t func_089D5404(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D5404:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = 684;
    s2 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089D544C; }
    goto L_089D5430;
L_089D5430:;
    goto L_089D5434;
L_089D5434:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D544C:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5454;
L_089D5454:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 999;
    { rv_t r_ = func_089BB248(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5464;
L_089D5464:;
    a1 = s0 + 0;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089D5430; }
    goto L_089D5470;
L_089D5470:;
    v0 = LD32(s1);
    ST32(s1+568, s2);
    v1 = LD32(v0+188);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5484;
L_089D5484:;
    a0 = s1 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D548C;
L_089D548C:;
    a0 = s1 + 0;
    v0 = func_089BB6C8(a0, 0, 0, 0);
    goto L_089D5494;
L_089D5494:;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089D5578; }
    goto L_089D54A0;
L_089D54A0:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D54BC;
L_089D54BC:;
    a0 = LD32(s1);
    v1 = LD32(a0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+8);
    v0 = v0 | 0x1000;
    ST32(v1+8, v0);
    v0 = LD32(s3);
    goto L_089D54D8;
L_089D54D8:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D54F0;
L_089D54F0:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5504;
L_089D5504:;
    v1 = LD32(s3);
    a0 = LD32(v1-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5520;
L_089D5520:;
    a2 = LD32(s1);
    a1 = v0 + 0;
    v1 = LD32(a2+36);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5534;
L_089D5534:;
    v0 = LD32(s1+232);
    a1 = s1 + 56;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+232, v0);
    v0 = 1;
    v1 = LD32(s3+68);
    ST8(a1+22, v0);
    ST32(a1+12, v1);
    v0 = LD32(s1);
    v1 = LD32(v0+112);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5564;
L_089D5564:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_089D51DC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5570;
L_089D5570:;
    goto L_089D5434;
L_089D5578:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5598;
L_089D5598:;
    v0 = LD32(s3);
    goto L_089D54D8;
}

/* 089D55A0 */
void func_089D55A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_089D55A0:;
    sp = sp - 272;
    s5 = D_08C2B2BC - (-19780);
    v1 = LD32(s5-19780);
    s2 = a1 & 0xff;
    v0 = v1 < 0x3u;
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D5770; }
    goto L_089D55DC;
L_089D55DC:;
    v0 = LD32(a0+84);
    v1 = v1 + 1;
    a0 = 999;
    cnd_ = v0 == a0;
    ST32(s5-19780, v1);
    if (cnd_) { goto L_089D5600; }
    goto L_089D55F0;
L_089D55F0:;
    v0 = LD32(s1+172);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s5-19780);
    if (cnd_) { goto L_089D5768; }
    goto L_089D5600;
L_089D5600:;
    a2 = D_08C2B2A8 - (-19800);
    v0 = a2 - 19800;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089D5678; }
    goto L_089D562C;
L_089D562C:;
    a2 = LD32(a2-19800);
    a3 = a1 + 0;
    goto L_089D5634;
L_089D5634:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089D5668; }
    goto L_089D564C;
L_089D564C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089D567C; }
    goto L_089D565C;
L_089D565C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089D564C; }
    goto L_089D5668;
L_089D5668:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089D5634; }
    goto L_089D5678;
L_089D5678:;
    v0 = LD32(sp+8);
    goto L_089D567C;
L_089D567C:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089D56E0; }
    goto L_089D5684;
L_089D5684:;
    s4 = 0x8004;
    s6 = sp + 80;
    goto L_089D568C;
L_089D568C:;
    v1 = LD32(s1);
    s0 = LD32(v0);
    a0 = sp + 0;
    v0 = LD32(v1-16);
    a2 = LD32(s0+252);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a2 == v1;
    a1 = 1;
    if (cnd_) { goto L_089D57B0; }
    goto L_089D56B0;
L_089D56B0:;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D56C4;
L_089D56C4:;
    v0 = LD32(sp+8);
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089D568C; }
    goto L_089D56DC;
L_089D56DC:;
    s1 = LD32(sp);
    goto L_089D56E0;
L_089D56E0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089D5764; }
    goto L_089D56F0;
L_089D56F0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D5764; }
    goto L_089D56FC;
L_089D56FC:;
    v0 = LD32(s1);
    goto L_089D5700;
L_089D5700:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089D5754; }
    goto L_089D5714;
L_089D5714:;
    v0 = LD_U8(s0+8);
    goto L_089D5718;
L_089D5718:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089D57A8; }
    goto L_089D5720;
L_089D5720:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D5798; }
    goto L_089D5728;
L_089D5728:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089D5730;
L_089D5730:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D573C;
L_089D573C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089D5748;
L_089D5748:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089D5718; }
    goto L_089D5750;
L_089D5750:;
    v1 = LD32(s1+4);
    goto L_089D5754;
L_089D5754:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D5700; }
    goto L_089D5764;
L_089D5764:;
    v0 = LD32(s5-19780);
    goto L_089D5768;
L_089D5768:;
    v0 = v0 - 1;
    ST32(s5-19780, v0);
    goto L_089D5770;
L_089D5770:;
    sp = sp + 272;
    return;
L_089D5798:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089D5730;
L_089D57A8:;
    s0 = LD32(s0+4);
    goto L_089D5748;
L_089D57B0:;
    a1 = 0 + 0;
    a0 = s0 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_089D55A0(a0, a1, t1, t2, t3);
    goto L_089D57CC;
L_089D57CC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D57D4;
L_089D57D4:;
    a0 = LD32(s0);
    s3 = 0 + 0;
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v0 = LD32(a0-16);
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    v0 = s0 + v0;
    v1 = LD_U16(v0+8);
    cnd_ = v1 == s4;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089D581C; }
    goto L_089D57FC;
L_089D57FC:;
    v0 = LD32(a0+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5808;
L_089D5808:;
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089D5820; }
    goto L_089D581C;
L_089D581C:;
    s3 = 1;
    goto L_089D5820;
L_089D5820:;
    cnd_ = s2 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D5898; }
    goto L_089D5828;
L_089D5828:;
    v0 = LD32(s0);
    goto L_089D582C;
L_089D582C:;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD_U16(v1+8);
    cnd_ = v0 == s4;
    s1 = 0 + 0;
    if (cnd_) { goto L_089D5888; }
    goto L_089D5840;
L_089D5840:;
    a0 = s0 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5848;
L_089D5848:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D5858; }
    goto L_089D5850;
L_089D5850:;
    cnd_ = s1 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089D56E0; }
    goto L_089D5858;
L_089D5858:;
    a0 = s6 + 0;
    func_0897A7A0(a0);
    goto L_089D5860;
L_089D5860:;
    v0 = LD32(sp+108);
    a0 = s0 + 0;
    v0 = v0 | 0x1;
    ST32(sp+108, v0);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s6 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5880;
L_089D5880:;
    s1 = LD32(sp);
    goto L_089D56E0;
L_089D5888:;
    a0 = s0 + 0;
    { u64 r_ = func_089D4F40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5890;
L_089D5890:;
    s1 = v0 < 0x1u;
    goto L_089D5840;
L_089D5898:;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D58AC;
L_089D58AC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D582C; }
    goto L_089D58B4;
L_089D58B4:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D582C; }
    goto L_089D58BC;
L_089D58BC:;
    v0 = LD32(s1);
    a0 = s1 + 0;
    v1 = LD32(v0+28);
    t_ = v1;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D58D0;
L_089D58D0:;
    v0 = LD32(s0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_089D582C; }
    goto L_089D58E0;
L_089D58E0:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D58F8;
L_089D58F8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v0 = D_08AEF040 - (-4032);
    ST32(sp+24, FBITS(f0));
    f0 = BITSF(LD32(v0-4032));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+56, FBITS(f0));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5940;
L_089D5940:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    f2 = BITSF(LD32(sp+16));
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
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+56);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+20));
    ST32(sp+64, FBITS(f3));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(sp+16, FBITS(f2));
    f0 = f0 + f5;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f5));
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5A3C;
L_089D5A3C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 16;
    t0 = LD32(v1+16);
    a2 = v0 + 0;
    t_ = t0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5A58;
L_089D5A58:;
    v0 = LD32(s0);
    goto L_089D582C;
}

/* 089D5A60 */
u32 func_089D5A60(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089D5A60:;
    sp = sp - 112;
    t0 = 0 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    a2 = sp + 16;
    s0 = sp + 32;
    v0 = LD32(a0);
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    v1 = LD32(v0-16);
    v0 = D_08AEF044 - (-4028);
    f0 = BITSF(LD32(v0-4028));
    v0 = D_08AEF04C - (-4020);
    a0 = a0 + v1;
    f1 = f1 - f0;
    f0 = BITSF(LD32(a1));
    f12 = BITSF(LD32(v0-4020));
    v0 = D_08AEF048 - (-4024);
    a3 = LD32(a0+4);
    ST32(sp, FBITS(f0));
    a1 = sp + 0;
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-4024));
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, 0);
    ST32(sp+24, 0);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089D5AE4;
L_089D5AE4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5AEC;
L_089D5AEC:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_089D5B48; }
    goto L_089D5AFC;
L_089D5AFC:;
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(s1+4, FBITS(f2));
    v0 = D_08AEF050 - (-4016);
    ST32(s1, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    f0 = BITSF(LD32(v1));
    f2 = f2 + f0;
    f0 = BITSF(LD32(v0-4016));
    f2 = f2 - f0;
    goto L_089D5B28;
L_089D5B28:;
    ST32(s1+4, FBITS(f2));
    v0 = a0 + 0;
    sp = sp + 112;
    return v0;
L_089D5B48:;
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s2+4));
    ST32(s1+8, FBITS(f0));
    a0 = 0 + 0;
    ST32(s1, FBITS(f1));
    goto L_089D5B28;
}

/* 089D5B64 */
u32 func_089D5B64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_089D5B64:;
    sp = sp - 240;
    s5 = a1 + 0;
    a1 = 999;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089D5C0C; }
    goto L_089D5BB4;
L_089D5BB4:;
    v0 = func_08A155FC(a0);
    goto L_089D5BBC;
L_089D5BBC:;
    s0 = v0 + 0;
    v0 = 999;
    cnd_ = s0 == v0;
    a0 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D5C54; }
    goto L_089D5BCC;
L_089D5BCC:;
    a0 = a0 - 19800;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5BDC;
L_089D5BDC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D5C54; }
    goto L_089D5BE4;
L_089D5BE4:;
    v0 = LD32(s1);
    a1 = LD32(a0);
    a2 = 1;
    v1 = LD32(v0-16);
    v0 = LD32(a1+232);
    v1 = s1 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5C04;
L_089D5C04:;
    a1 = s0 + 0;
    ST32(s5, v0);
    goto L_089D5C0C;
L_089D5C0C:;
    v0 = a1 + 0;
    sp = sp + 240;
    return v0;
L_089D5C54:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    a1 = 999;
    if (cnd_) { goto L_089D5C0C; }
    goto L_089D5C6C;
L_089D5C6C:;
    s4 = 0 + 0;
    v0 = func_088BAA98(a0);
    goto L_089D5C74;
L_089D5C74:;
    a0 = LD32(v0);
    v1 = D_08AEF054 - (-4012);
    f20 = BITSF(LD32(v1-4012));
    ST32(sp, a0);
    a3 = D_08C2B2A8 - (-19800);
    a3 = a3 - 19800;
    v1 = LD32(v0+4);
    a2 = LD32(a3+8);
    f0 = BITSF(LD32(sp));
    ST32(sp+4, v1);
    a2 = a2 + 1;
    f0 = f0 - f20;
    v1 = LD32(v0+8);
    f4 = BITSF(LD32(sp+4));
    s2 = sp + 96;
    ST32(sp+8, v1);
    f4 = f4 + f20;
    a0 = s2 + 0;
    v1 = LD32(v0+12);
    f2 = BITSF(LD32(sp+8));
    ST32(a3+8, a2);
    a1 = 1;
    f2 = f2 - f20;
    ST32(sp+12, v1);
    v1 = LD32(v0+16);
    f3 = BITSF(LD32(sp+12));
    ST32(sp+96, a3);
    f3 = f3 + f20;
    ST32(sp+16, v1);
    a2 = LD32(v0+20);
    f1 = BITSF(LD32(sp+16));
    ST32(sp, FBITS(f0));
    f1 = f1 - f20;
    ST32(sp+20, a2);
    f0 = BITSF(LD32(sp+20));
    ST32(sp+8, FBITS(f2));
    f0 = f0 + f20;
    ST32(sp+16, FBITS(f1));
    ST32(sp+4, FBITS(f4));
    ST32(sp+12, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+100, 0);
    ST32(sp+104, 0);
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5D24;
L_089D5D24:;
    v0 = LD32(sp+104);
    cnd_ = v0 == 0;
    s3 = sp + 64;
    if (cnd_) { goto L_089D5F3C; }
    goto L_089D5D30;
L_089D5D30:;
    s0 = LD32(v0);
    goto L_089D5D34;
L_089D5D34:;
    a0 = s4 < 0x8u;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    v1 = 0 < v0;
    v1 = v1 & a0;
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D5F6C; }
    goto L_089D5D58;
L_089D5D58:;
    a1 = 1;
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5D60;
L_089D5D60:;
    v0 = LD32(sp+104);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089D5D34; }
    goto L_089D5D6C;
L_089D5D6C:;
    cnd_ = s4 == 0;
    v0 = D_08AEF058 - (-4008);
    if (cnd_) { goto L_089D5F3C; }
    goto L_089D5D74;
L_089D5D74:;
    f20 = BITSF(LD32(v0-4008));
    s6 = 0 + 0;
    cnd_ = s4 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089D5ECC; }
    goto L_089D5D84;
L_089D5D84:;
    s2 = sp + 0;
    v0 = LD32(s1);
    goto L_089D5D8C;
L_089D5D8C:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5DA4;
L_089D5DA4:;
    a0 = LD32(s2+64);
    s0 = v0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5DC8;
L_089D5DC8:;
    v1 = LD32(s1);
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    a0 = LD32(v1-12);
    f0 = f0 - f2;
    f4 = f4 - f5;
    f1 = f1 - f3;
    a0 = s1 + a0;
    v1 = LD32(a0);
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f4));
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5E14;
L_089D5E14:;
    a0 = LD32(s2+64);
    s0 = v0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s2 = s2 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5E38;
L_089D5E38:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f0;
    f2 = f2 - f1;
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    v1 = LD32(sp+116);
    {v[4]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+112);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+128, FBITS(f3));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+132, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+136, FBITS(f4));
    if (cnd_) { goto L_089D5EBC; }
    goto L_089D5EB4;
L_089D5EB4:;
    f20 = BITSF(v0);
    s6 = s3 + 0;
    goto L_089D5EBC;
L_089D5EBC:;
    s3 = s3 + 1;
    v0 = s3 < s4;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089D5D8C; }
    goto L_089D5ECC;
L_089D5ECC:;
    s0 = s6 << 2;
    v1 = LD32(s1);
    s0 = s0 + sp;
    a0 = LD32(s0+64);
    v0 = LD32(v1-16);
    v1 = LD32(a0);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    v0 = LD32(v1+232);
    t_ = v0;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D5EF8;
L_089D5EF8:;
    ST32(s5, v0);
    v1 = LD32(s0+64);
    a2 = LD32(sp+96);
    a0 = LD32(v1);
    v0 = LD32(a2+8);
    a1 = LD32(a0-16);
    v0 = v0 - 1;
    v1 = v1 + a1;
    s0 = LD32(v1+4);
    cnd_ = v0 == 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_089D5F2C; }
    goto L_089D5F24;
L_089D5F24:;
    a1 = s0 + 0;
    goto L_089D5C0C;
L_089D5F2C:;
    a0 = a2 + 0;
    { u64 r_ = func_08AC6C20(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5F34;
L_089D5F34:;
    a1 = s0 + 0;
    goto L_089D5C0C;
L_089D5F3C:;
    ST32(s5, 0);
    a0 = LD32(sp+96);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089D5F5C; }
    goto L_089D5F54;
L_089D5F54:;
    a1 = 999;
    goto L_089D5C0C;
L_089D5F5C:;
    { u64 r_ = func_08AC6C20(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D5F64;
L_089D5F64:;
    a1 = 999;
    goto L_089D5C0C;
L_089D5F6C:;
    a0 = v0 + 0;
    v0 = func_088BAA98(a0);
    goto L_089D5F74;
L_089D5F74:;
    a1 = LD32(v0);
    a0 = s0 + 0;
    ST32(sp+32, a1);
    v1 = LD32(v0+4);
    f0 = BITSF(LD32(sp+32));
    ST32(sp+36, v1);
    f22 = f0 - f20;
    v1 = LD32(v0+8);
    f0 = BITSF(LD32(sp+36));
    ST32(sp+40, v1);
    f25 = f0 + f20;
    v1 = LD32(v0+12);
    f0 = BITSF(LD32(sp+40));
    ST32(sp+44, v1);
    f26 = f0 - f20;
    v1 = LD32(v0+16);
    f0 = BITSF(LD32(sp+44));
    ST32(sp+48, v1);
    f24 = f0 + f20;
    v1 = LD32(v0+20);
    f0 = BITSF(LD32(sp+48));
    ST32(sp+32, FBITS(f22));
    f23 = f0 - f20;
    ST32(sp+52, v1);
    f0 = BITSF(LD32(sp+52));
    ST32(sp+40, FBITS(f26));
    f21 = f0 + f20;
    ST32(sp+48, FBITS(f23));
    ST32(sp+36, FBITS(f25));
    ST32(sp+44, FBITS(f24));
    ST32(sp+52, FBITS(f21));
    v0 = func_089D194C(a0);
    goto L_089D5FF4;
L_089D5FF4:;
    a1 = LD32(s0);
    v1 = LD32(a1-16);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    cnd_ = v0 != a0;
    if (cnd_) { a0 = s2 + 0; goto L_089D5D58; }
    goto L_089D600C;
L_089D600C:;
    v0 = LD32(a1-12);
    f0 = BITSF(0);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = s2 + 0; goto L_089D5D58; }
    goto L_089D602C;
L_089D602C:;
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f22, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = s2 + 0; goto L_089D5D58; }
    goto L_089D6040;
L_089D6040:;
    f0 = BITSF(LD32(sp));
    fcc = FCMP(f0, f25, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = s2 + 0; goto L_089D5D58; }
    goto L_089D6054;
L_089D6054:;
    f0 = BITSF(LD32(sp+12));
    fcc = FCMP(f26, f0, 14);
    cnd_ = !fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D6068;
L_089D6068:;
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f0, f24, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D607C;
L_089D607C:;
    f0 = BITSF(LD32(sp+20));
    fcc = FCMP(f23, f0, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_089D5D58; }
    goto L_089D6090;
L_089D6090:;
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D60A0;
L_089D60A0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_089D60F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D60AC;
L_089D60AC:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D60B4;
L_089D60B4:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D60C0;
L_089D60C0:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D60CC;
L_089D60CC:;
    v1 = LD32(s0);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D60DC;
L_089D60DC:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089D5D58; }
    goto L_089D60E4;
L_089D60E4:;
    ST32(s3, s0);
    s4 = s4 + 1;
    s3 = s3 + 4;
    goto L_089D5D58;
}

/* 089D60F4 */
u32 func_089D60F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_089D60F4:;
    sp = sp - 304;
    v0 = D_08AEF05C - (-4004);
    s1 = a0 + 0;
    s0 = a1 + 0;
    f20 = BITSF(0);
    a1 = LD32(a1);
    f0 = BITSF(LD32(v0-4004));
    v1 = LD32(a1-12);
    v1 = s0 + v1;
    a1 = LD32(v1);
    ST32(sp+8, FBITS(f0));
    a0 = v1 + 0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp+24, FBITS(f0));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    v0 = LD32(a1+24);
    ST32(sp+4, FBITS(f20));
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(sp+16, FBITS(f20));
    ST32(sp+20, FBITS(f20));
    t_ = v0;
    ST32(sp, FBITS(f20));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6160;
L_089D6160:;
    a1 = LD32(s0);
    {u32 a_=sp+(256);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    a2 = LD32(a1-12);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    s0 = s0 + a2;
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[34]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(112);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a0);}
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+4);
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    a0 = LD32(s0);
    v1 = LD32(sp+8);
    {v[34]=BITSF(a1);}
    {v[21]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    ST32(sp+8, FBITS(f3));
    {v1=FBITS(v[17]);}
    ST32(sp+40, FBITS(f3));
    ST32(sp+24, FBITS(f3));
    v0 = LD32(a0+20);
    ST32(sp, FBITS(f2));
    a0 = s0 + 0;
    ST32(sp+4, v1);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v1);
    ST32(sp+16, FBITS(f2));
    t_ = v0;
    ST32(sp+20, v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D623C;
L_089D623C:;
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    a0 = LD32(v1-12);
    ST32(sp+32, FBITS(f0));
    s1 = s1 + a0;
    v1 = LD32(s1);
    f1 = BITSF(LD32(v0+4));
    ST32(sp+40, FBITS(f2));
    a0 = s1 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    ST32(sp+36, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6270;
L_089D6270:;
    f7 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f4 = f5 - f4;
    f3 = f6 - f3;
    f2 = f7 - f2;
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+16, FBITS(f5));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+20, FBITS(f6));
    ST32(sp+24, FBITS(f7));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f2));
    if (cnd_) { goto L_089D6314; }
    goto L_089D62DC;
L_089D62DC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+64, v1);
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_089D6314;
L_089D6314:;
    f4 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    v1 = FBITS(f4);
    v0 = FBITS(f2);
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    if (cnd_) { goto L_089D6394; }
    goto L_089D6358;
L_089D6358:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    f4 = BITSF(v0);
    f2 = BITSF(v1);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f3));
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f3));
    goto L_089D6394;
L_089D6394:;
    v0 = FBITS(f4);
    v1 = FBITS(f2);
    {u32 a_=sp+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    v0 = D_08AEF060 - (-4000);
    f0 = BITSF(LD32(v0-4000));
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089D63F4; }
    goto L_089D63F0;
L_089D63F0:;
    v0 = 0 + 0;
    goto L_089D63F4;
L_089D63F4:;
    sp = sp + 304;
    return v0;
}

/* 089D640C */
u32 func_089D640C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D640C:;
    sp = sp - 16;
    a1 = 0xe6dc0000u;
    a1 = a1 | 0x15d2;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6428;
L_089D6428:;
    sp = sp + 16;
    return v0;
}

/* 089D6434 */
u32 func_089D6434(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D6434:;
    sp = sp - 16;
    v0 = a0 + 0;
    a1 = 0xfd900000u;
    a2 = LD32(a0);
    a0 = LD32(a0+208);
    a1 = a1 | 0x9268;
    v1 = LD32(a2-12);
    v0 = v0 + v1;
    a2 = LD32(v0+16);
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6460;
L_089D6460:;
    sp = sp + 16;
    return v0;
}

/* 089D646C */
u32 func_089D646C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D646C:;
    sp = sp - 16;
    v0 = a0 + 0;
    a1 = 0xfd880000u;
    a2 = LD32(a0);
    a0 = LD32(a0+208);
    a1 = a1 | 0x6efc;
    v1 = LD32(a2-12);
    v0 = v0 + v1;
    a2 = LD32(v0+20);
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6498;
L_089D6498:;
    sp = sp + 16;
    return v0;
}

/* 089D64A4 */
u32 func_089D64A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D64A4:;
    sp = sp - 16;
    a1 = 0x77b0000u;
    a1 = a1 | 0x5978;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = LD32(a0+208);
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D64C8;
L_089D64C8:;
    a0 = LD32(s0+208);
    a1 = 0xd0ef0000u;
    a2 = v0 + 0;
    a1 = a1 | 0xb265;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D64DC;
L_089D64DC:;
    sp = sp + 16;
    return v0;
}

/* 089D64EC */
void func_089D64EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D64EC:;
    sp = sp - 16;
    v0 = LD32(a0+228);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D65AC; }
    goto L_089D6508;
L_089D6508:;
    v0 = LD32(a0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+268); goto L_089D65CC; }
    goto L_089D6518;
L_089D6518:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { a1 = LD32(s0+268); goto L_089D65CC; }
    goto L_089D653C;
L_089D653C:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+268); goto L_089D65CC; }
    goto L_089D6548;
L_089D6548:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+268); goto L_089D65CC; }
    goto L_089D6554;
L_089D6554:;
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = a0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s0+232); goto L_089D65BC; }
    goto L_089D656C;
L_089D656C:;
    a0 = s0 + 0;
    func_089D66C4(a0, t1, t2, t3);
    goto L_089D6574;
L_089D6574:;
    a0 = s0 + 0;
    func_089D65F0(a0);
    goto L_089D657C;
L_089D657C:;
    a1 = LD32(s0+268);
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_089D6590;
L_089D6590:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D65AC; }
    goto L_089D6598;
L_089D6598:;
    v1 = LD32(v0);
    a1 = 1;
    goto L_089D65A0;
L_089D65A0:;
    v0 = LD32(v1+28);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D65AC;
L_089D65AC:;
    sp = sp + 16;
    return;
L_089D65BC:;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D656C; }
    goto L_089D65C8;
L_089D65C8:;
    a1 = LD32(s0+268);
    goto L_089D65CC;
L_089D65CC:;
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_089D65DC;
L_089D65DC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D65AC; }
    goto L_089D65E4;
L_089D65E4:;
    v1 = LD32(v0);
    a1 = 0 + 0;
    goto L_089D65A0;
}

/* 089D65F0 */
void func_089D65F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D65F0:;
    sp = sp - 16;
    v0 = 999;
    a1 = LD32(a0+268);
    cnd_ = a1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D6640; }
    goto L_089D6610;
L_089D6610:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D6644; }
    goto L_089D6628;
L_089D6628:;
    v0 = LD32(a0+228);
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089D6654; }
    goto L_089D6640;
L_089D6640:;
    goto L_089D6644;
L_089D6644:;
    sp = sp + 16;
    return;
L_089D6654:;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_089D665C;
L_089D665C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089D6640; }
    goto L_089D6664;
L_089D6664:;
    v0 = LD32(v0);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D6640; }
    goto L_089D667C;
L_089D667C:;
    v0 = func_089D64A4(a0, 0, 0, 0);
    goto L_089D6684;
L_089D6684:;
    a1 = LD32(s1);
    a2 = LD32(s0);
    a3 = 0 + 0;
    a0 = LD32(a1-12);
    v1 = LD32(a2-16);
    a2 = v0 + 0;
    a0 = s1 + a0;
    t0 = LD32(a0);
    v1 = s0 + v1;
    v0 = LD32(t0+96);
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D66B4;
L_089D66B4:;
    v1 = LD32(s0+228);
    v1 = v1 | 0x400;
    ST32(s0+228, v1);
    goto L_089D6640;
}

/* 089D66C4 */
void func_089D66C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D66C4:;
    sp = sp - 32;
    v0 = 999;
    v1 = LD32(a0+268);
    cnd_ = v1 == v0;
    s3 = a0 + 0;
    if (cnd_) { goto L_089D6708; }
    goto L_089D66EC;
L_089D66EC:;
    goto L_089D66F0;
L_089D66F0:;
    sp = sp + 32;
    return;
L_089D6708:;
    v0 = LD32(a0+228);
    a1 = 0xbeeb0000u;
    a2 = 4;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a1 = a1 | 0x1a1c;
    if (cnd_) { goto L_089D66EC; }
    goto L_089D6720;
L_089D6720:;
    a0 = LD32(a0+208);
    v0 = func_0896CE48(a0, a1, a2, t1, t2, t3);
    goto L_089D6728;
L_089D6728:;
    a0 = 300;
    s2 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6734;
L_089D6734:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 999;
    func_089EC670(a0, a1);
    goto L_089D6744;
L_089D6744:;
    v1 = LD32(s0);
    a0 = LD32(s3);
    v0 = LD32(v1-16);
    a1 = LD32(a0-12);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    a1 = s3 + a1;
    ST32(s3+268, a2);
    v1 = LD32(a1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6774;
L_089D6774:;
    s1 = v0 + 0;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6794;
L_089D6794:;
    v1 = LD32(s0);
    a2 = v0 + 0;
    a3 = 0 + 0;
    v0 = LD32(v1+16);
    a1 = s1 + 0;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D67B0;
L_089D67B0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D67B8;
L_089D67B8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    f0 = func_089EDDAC(a0, a1);
    goto L_089D67C4;
L_089D67C4:;
    a0 = s3 + 0;
    v0 = func_089D6434(a0, 0, 0, 0);
    goto L_089D67CC;
L_089D67CC:;
    a0 = s3 + 0;
    s1 = v0 + 0;
    v0 = func_089D646C(a0, 0, 0, 0);
    goto L_089D67D8;
L_089D67D8:;
    v1 = LD32(s0);
    a2 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D67F8;
L_089D67F8:;
    a0 = LD32(s3+208);
    a1 = 0xaf9c0000u;
    a1 = a1 | 0x6a65;
    a2 = (u32)-1;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D680C;
L_089D680C:;
    ST32(s0+16, v0);
    a0 = s3 + 0;
    ST32(s0+20, 0);
    v0 = LD32(s3+228);
    v0 = (v0 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    ST32(s3+228, v0);
    func_089D65F0(a0);
    goto L_089D6828;
L_089D6828:;
    v0 = LD32(s0+192);
    v0 = v0 | 0x5;
    ST32(s0+192, v0);
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6838;
L_089D6838:;
    goto L_089D66F0;
}

/* 089D6840 */
rv_t func_089D6840(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D6840:;
    sp = sp - 16;
    s2 = 999;
    a1 = LD32(a0+268);
    cnd_ = a1 == s2;
    s1 = a0 + 0;
    if (cnd_) { goto L_089D687C; }
    goto L_089D6864;
L_089D6864:;
    v0 = LD32(a0+228);
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_089D6894; }
    goto L_089D687C;
L_089D687C:;
    goto L_089D6880;
L_089D6880:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089D6894:;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_089D689C;
L_089D689C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D690C; }
    goto L_089D68A4;
L_089D68A4:;
    v0 = LD32(s1+228);
    v0 = v0 & 0x400;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D68EC; }
    goto L_089D68B4;
L_089D68B4:;
    v1 = LD32(s0);
    goto L_089D68B8;
L_089D68B8:;
    a0 = s0 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D68C8;
L_089D68C8:;
    v1 = LD32(s0);
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D68D8;
L_089D68D8:;
    v0 = LD32(s1+228);
    ST32(s1+268, s2);
    v0 = (v0 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    ST32(s1+228, v0);
    goto L_089D687C;
L_089D68EC:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6904;
L_089D6904:;
    v1 = LD32(s0);
    goto L_089D68B8;
L_089D690C:;
    { u64 r_ = func_08878300(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6914;
L_089D6914:;
    goto L_089D6880;
}

/* 089D691C */
rv_t func_089D691C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D691C:;
    sp = sp - 48;
    f20 = BITSF(0);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a3 = a0 + v1;
    f0 = BITSF(LD32(a3+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D6968; }
    goto L_089D6950;
L_089D6950:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D696C; }
    goto L_089D695C;
L_089D695C:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+236); goto L_089D697C; }
    goto L_089D6968;
L_089D6968:;
    goto L_089D696C;
L_089D696C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D697C:;
    ST32(a0+284, a1);
    a0 = 0xd0cd0000u;
    v0 = v0 | 0x8;
    ST32(s0+236, v0);
    v0 = 0 + 0;
    a0 = a0 | 0xc21c;
    v1 = LD32(a3+64);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(a3+64, v1);
    a2 = sp + 0;
    a1 = LD32(s0+284);
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D69B0;
L_089D69B0:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    a1 = 0xfec50000u;
    if (cnd_) { goto L_089D6A7C; }
    goto L_089D69BC;
L_089D69BC:;
    f1 = BITSF(LD32(s0+272));
    fcc = FCMP(f1, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D69E4; }
    goto L_089D69D0;
L_089D69D0:;
    f0 = BITSF(LD32(s0+276));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D69F4; }
    goto L_089D69E4;
L_089D69E4:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D6C68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D69EC;
L_089D69EC:;
    goto L_089D696C;
L_089D69F4:;
    fcc = FCMP(f1, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { a3 = 0 + 0; goto L_089D6A14; }
    goto L_089D6A04;
L_089D6A04:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D6AAC(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6A0C;
L_089D6A0C:;
    goto L_089D696C;
L_089D6A14:;
    a0 = 0x8080;
    a1 = 8;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6A24;
L_089D6A24:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089D6968; }
    goto L_089D6A2C;
L_089D6A2C:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    a2 = 1;
    if (cnd_) { goto L_089D6968; }
    goto L_089D6A38;
L_089D6A38:;
    v0 = LD32(s0+284);
    a0 = a3 + 0;
    a1 = 1;
    ST32(v1, v0);
    v1 = 2;
    v0 = LD32(a3+28);
    ST32(a3, v1);
    v0 = v0 | 0x1;
    ST32(a3+28, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6A74;
L_089D6A74:;
    goto L_089D696C;
L_089D6A7C:;
    a1 = a1 | 0x2438;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6A88;
L_089D6A88:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a1 = 0x6ffe0000u;
    a1 = a1 | 0x9124;
    f12 = f20;
    ST32(s0+276, FBITS(f0));
    a0 = LD32(sp);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6AA4;
L_089D6AA4:;
    ST32(s0+272, FBITS(f0));
    goto L_089D69BC;
}

/* 089D6AAC */
rv_t func_089D6AAC(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D6AAC:;
    sp = sp - 48;
    v0 = LD32(a0+236);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D6B94; }
    goto L_089D6AD4;
L_089D6AD4:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(a0+272));
    f1 = BITSF(LD32(v0-31328));
    f20 = BITSF(0);
    f1 = f2 - f1;
    f0 = f2 * f1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    ST32(a0+272, FBITS(f1));
    if (cnd_) { goto L_089D6B1C; }
    goto L_089D6AFC;
L_089D6AFC:;
    fcc = FCMP(f2, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+272)); goto L_089D6C44; }
    goto L_089D6B0C;
L_089D6B0C:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+272)); goto L_089D6C44; }
    goto L_089D6B1C;
L_089D6B1C:;
    a3 = 0 + 0;
    a0 = 0x8081;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6B30;
L_089D6B30:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089D6B70; }
    goto L_089D6B38;
L_089D6B38:;
    v1 = LD32(v0+28);
    v0 = 2;
    ST32(a3, v0);
    v1 = v1 | 0x1;
    a0 = a3 + 0;
    ST32(a3+28, v1);
    a1 = 1;
    a2 = 1;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6B70;
L_089D6B70:;
    a1 = LD32(s0+284);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6B88;
L_089D6B88:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    a1 = 0xb02e0000u;
    if (cnd_) { goto L_089D6BB0; }
    goto L_089D6B94;
L_089D6B94:;
    goto L_089D6B98;
L_089D6B98:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D6BB0:;
    f12 = f20;
    a1 = a1 | 0x8b6f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6BBC;
L_089D6BBC:;
    a0 = LD32(sp);
    a1 = 0xc80e0000u;
    f12 = f20;
    a1 = a1 | 0x6c92;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6BD4;
L_089D6BD4:;
    a1 = LD32(s0+252);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    f20 = f0;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6BEC;
L_089D6BEC:;
    cnd_ = v0 == 0;
    s1 = 999;
    if (cnd_) { goto L_089D6BF8; }
    goto L_089D6BF4;
L_089D6BF4:;
    s1 = LD32(v0+84);
    goto L_089D6BF8;
L_089D6BF8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6C14;
L_089D6C14:;
    a2 = LD32(s0+252);
    t1 = LD32(s0+284);
    f12 = f21;
    a0 = v0 + 0;
    f14 = f20;
    a3 = s1 + 0;
    f13 = f21;
    a1 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_0897A7E8(a0, a1, a2, a3, t0, t1, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6C3C;
L_089D6C3C:;
    goto L_089D6B98;
L_089D6C44:;
    f0 = BITSF(LD32(s0+276));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_089D6B98; }
    goto L_089D6C58;
L_089D6C58:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D6C68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6C60;
L_089D6C60:;
    goto L_089D6B98;
}

/* 089D6C68 */
rv_t func_089D6C68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D6C68:;
    sp = sp - 48;
    s0 = a0 + 0;
    v0 = LD32(a0+236);
    a0 = sp + 0;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+236, v0);
    func_0897A7A0(a0);
    goto L_089D6C8C;
L_089D6C8C:;
    v0 = LD32(sp+28);
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = v0 | 0x1;
    ST32(sp+28, v0);
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6CAC;
L_089D6CAC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 089D6CBC */
rv_t func_089D6CBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D6CBC:;
    sp = sp - 48;
    v0 = 0x9e500000u;
    v0 = v0 | 0x986;
    s1 = a1 + 0;
    v1 = LD32(a1);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D6E00; }
    goto L_089D6CE4;
L_089D6CE4:;
    v0 = D_08C2B2B8 - (-19784);
    goto L_089D6CE8;
L_089D6CE8:;
    v1 = LD_U8(v0-19784);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089D6D04; }
    goto L_089D6CF4;
L_089D6CF4:;
    v0 = LD32(s1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D6DF0; }
    goto L_089D6D04;
L_089D6D04:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6D0C;
L_089D6D0C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D6D24; }
    goto L_089D6D14;
L_089D6D14:;
    v0 = LD32(s0+228);
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D6D80; }
    goto L_089D6D24;
L_089D6D24:;
    a1 = s1 + 0;
    { rv_t r_ = func_089E1FDC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6D2C;
L_089D6D2C:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089D6D60; }
    goto L_089D6D50;
L_089D6D50:;
    v0 = LD32(s0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+176); goto L_089D6D70; }
    goto L_089D6D60;
L_089D6D60:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D6D70:;
    a1 = s1 + 0;
    { rv_t r_ = func_08957534(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6D78;
L_089D6D78:;
    goto L_089D6D60;
L_089D6D80:;
    a0 = sp + 0;
    func_0897A7A0(a0);
    goto L_089D6D88;
L_089D6D88:;
    v0 = LD32(s1+12);
    a0 = s0 + 0;
    a1 = sp + 0;
    ST32(sp+12, v0);
    v0 = D_08AEF064 - (-3996);
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(v0-3996));
    t2 = LD32(s1+28);
    t1 = LD32(s1);
    f1 = f1 * f0;
    v0 = LD32(s1+4);
    v1 = LD32(s1+8);
    a2 = LD32(s1+16);
    a3 = LD32(s1+20);
    t0 = LD32(s1+24);
    ST32(sp, t1);
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    ST32(sp+24, t0);
    ST32(sp+28, t2);
    ST32(sp+12, FBITS(f1));
    { rv_t r_ = func_089E1FDC(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6DE8;
L_089D6DE8:;
    goto L_089D6D60;
L_089D6DF0:;
    a1 = s1 + 0;
    { u64 r_ = func_089D7B60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6DF8;
L_089D6DF8:;
    goto L_089D6D60;
L_089D6E00:;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6E08;
L_089D6E08:;
    cnd_ = v0 == 0;
    v0 = D_08C2B2B8 - (-19784);
    if (cnd_) { goto L_089D6CE8; }
    goto L_089D6E10;
L_089D6E10:;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 != v1;
    v0 = D_08C2B2B8 - (-19784);
    if (cnd_) { goto L_089D6CE8; }
    goto L_089D6E2C;
L_089D6E2C:;
    goto L_089D6D60;
}

/* 089D6E34 */
rv_t func_089D6E34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D6E34:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a0 + 0;
    { u64 r_ = func_089D0A8C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6E58;
L_089D6E58:;
    cnd_ = v0 != 0;
    v0 = 999;
    if (cnd_) { goto L_089D6EA8; }
    goto L_089D6E60;
L_089D6E60:;
    v1 = LD32(s1+252);
    cnd_ = v1 == v0;
    a0 = D_08C2A08C - (-24436);
    if (cnd_) { goto L_089D6EA8; }
    goto L_089D6E6C;
L_089D6E6C:;
    a1 = LD32(s1+84);
    a0 = a0 - 24436;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6E7C;
L_089D6E7C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089D6EA8; }
    goto L_089D6E84;
L_089D6E84:;
    v1 = LD32(v0);
    v0 = LD32(v1+88);
    t_ = v0;
    a1 = LD32(s1+252);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6E94;
L_089D6E94:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+224);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6EA8;
L_089D6EA8:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089D6EB0;
L_089D6EB0:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    cnd_ = s0 == v0;
    if (cnd_) { goto L_089D6F68; }
    goto L_089D6ECC;
L_089D6ECC:;
    a1 = LD32(s1+252);
    goto L_089D6ED0;
L_089D6ED0:;
    v0 = 999;
    cnd_ = a1 == v0;
    a0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089D6F0C; }
    goto L_089D6EDC;
L_089D6EDC:;
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6EE8;
L_089D6EE8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D6F0C; }
    goto L_089D6EF0;
L_089D6EF0:;
    v0 = LD32(s1+228);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_089D6F3C; }
    goto L_089D6F00;
L_089D6F00:;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6F0C;
L_089D6F0C:;
    a1 = s2 + 0;
    goto L_089D6F10;
L_089D6F10:;
    a0 = s1 + 0;
    { rv_t r_ = func_089E28B4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6F18;
L_089D6F18:;
    a0 = s1 + 0;
    { rv_t r_ = func_089D6840(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6F20;
L_089D6F20:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D6F3C:;
    f12 = BITSF(0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_089D6F4C;
L_089D6F4C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6F60;
L_089D6F60:;
    a1 = s2 + 0;
    goto L_089D6F10;
L_089D6F68:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089D6F70;
L_089D6F70:;
    cnd_ = v0 == s0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089D6ECC; }
    goto L_089D6F78;
L_089D6F78:;
    s3 = D_08C2ADE8 - (-21016);
    a2 = 1;
    goto L_089D6F80;
L_089D6F80:;
    a0 = s3 - 21016;
    v0 = func_08AC6A38(a0, a1, a2);
    goto L_089D6F88;
L_089D6F88:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    s0 = v0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D6FA0;
L_089D6FA0:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D6FA8;
L_089D6FA8:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    a2 = 1;
    if (cnd_) { goto L_089D6F80; }
    goto L_089D6FC4;
L_089D6FC4:;
    a1 = LD32(s1+252);
    goto L_089D6ED0;
}

/* 089D6FCC */
rv_t func_089D6FCC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D6FCC:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 0x5d00000u;
    a0 = a0 | 0x4860;
    a2 = sp + 0;
    a1 = s1 + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D6FF8;
L_089D6FF8:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = 672;
    if (cnd_) { goto L_089D7028; }
    goto L_089D7004;
L_089D7004:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D700C;
L_089D700C:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089B04F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D701C;
L_089D701C:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D70CC; }
    goto L_089D7028;
L_089D7028:;
    a0 = 0x360000u;
    a0 = a0 | 0x34ea;
    a2 = sp + 0;
    a1 = s1 + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D703C;
L_089D703C:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = 648;
    if (cnd_) { goto L_089D706C; }
    goto L_089D7048;
L_089D7048:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7050;
L_089D7050:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089B534C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7060;
L_089D7060:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089D70CC; }
    goto L_089D706C;
L_089D706C:;
    a0 = 0xcc980000u;
    a0 = a0 | 0x70f0;
    a2 = sp + 0;
    a1 = s1 + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7080;
L_089D7080:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    a0 = 684;
    if (cnd_) { goto L_089D70A4; }
    goto L_089D708C;
L_089D708C:;
    v0 = 0 + 0;
    goto L_089D7090;
L_089D7090:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D70A4:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D70AC;
L_089D70AC:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089BB248(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D70BC;
L_089D70BC:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089D7090; }
    goto L_089D70C8;
L_089D70C8:;
    v0 = LD32(s0);
    goto L_089D70CC;
L_089D70CC:;
    a2 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D70E8;
L_089D70E8:;
    v1 = LD32(s0);
    a1 = s1 + 0;
    v0 = LD32(v1+188);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D70FC;
L_089D70FC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7104;
L_089D7104:;
    v0 = s0 + 0;
    goto L_089D7090;
}

/* 089D710C */
void func_089D710C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089D710C:;
    sp = sp - 64;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0+256);
    t_ = v1;
    f21 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7134;
L_089D7134:;
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D7204; }
    goto L_089D7144;
L_089D7144:;
    a2 = LD32(s0);
    v1 = 0x8004;
    v0 = LD32(a2-16);
    v0 = s0 + v0;
    a1 = LD_U16(v0+8);
    cnd_ = a1 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D7218; }
    goto L_089D7160;
L_089D7160:;
    f20 = BITSF(LD32(s0+8));
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f20 = f20 * f21;
    v1 = LD32(a2+260);
    a0 = s0 + 0;
    t_ = v1;
    f20 = f20 * f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7180;
L_089D7180:;
    a0 = sp + 0;
    f21 = f20 * f0;
    func_0897A7A0(a0);
    goto L_089D718C;
L_089D718C:;
    a0 = sp + 0;
    func_0897A7BC(a0);
    goto L_089D7194;
L_089D7194:;
    a3 = LD32(s0);
    a0 = LD32(s0+84);
    v1 = 0x9e500000u;
    v0 = LD32(a3-16);
    ST32(sp+8, a0);
    v1 = v1 | 0x986;
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    ST32(sp+12, FBITS(f21));
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = LD32(a3+8);
    ST32(sp+4, a2);
    t_ = v0;
    ST32(sp, v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D71D0;
L_089D71D0:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a0 = 0x805c;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D71E4;
L_089D71E4:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_089D7200; }
    goto L_089D71F0;
L_089D71F0:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7200;
L_089D7200:;
    goto L_089D7204;
L_089D7204:;
    sp = sp + 64;
    return;
L_089D7218:;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7220;
L_089D7220:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D7204; }
    goto L_089D7228;
L_089D7228:;
    a2 = LD32(s0);
    goto L_089D7160;
}

/* 089D7230 */
void func_089D7230(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_089D7230:;
    sp = sp - 320;
    s0 = a0 + 0;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    a2 = LD32(a1+8);
    ST32(sp, v0);
    ST32(sp+8, a2);
    ST32(sp+4, v1);
    v0 = LD32(a0);
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    a0 = LD32(v0-12);
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a0 = s0 + a0;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = D_08AEF068 - (-3992);
    v1 = LD32(a1+12);
    f20 = BITSF(LD32(v0-3992));
    a1 = LD32(a0);
    ST32(sp+16, FBITS(f1));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+12, v1);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+56, FBITS(f20));
    v0 = LD32(a1+24);
    ST32(sp+48, 0);
    t_ = v0;
    ST32(sp+52, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D72C4;
L_089D72C4:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(96);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(176);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+56);
    {v[21]=BITSF(v0);}
    v0 = LD32(sp+16);
    {v[22]=BITSF(v1);}
    {v[24]=BITSF(v0);}
    v1 = LD32(sp+20);
    v0 = LD32(sp+24);
    {v[25]=BITSF(v1);}
    {v[26]=BITSF(v0);}
    v0 = D_08AEF06C - (-3988);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f0 = BITSF(LD32(v0-3988));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    ST32(sp+84, FBITS(f0));
    v0 = FBITS(f1);
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[17]);}
    f2 = BITSF(v0);
    f0 = BITSF(v0);
    a0 = sp + 80;
    a1 = sp + 84;
    a2 = sp + 88;
    v0 = FBITS(f0);
    ST32(sp+88, FBITS(f20));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+64, FBITS(f3));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[24];float t1=v[25];float t2=v[26];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+68, FBITS(f2));
    {v0=FBITS(v[0]);}
    ST32(sp+72, FBITS(f4));
    ST32(sp+80, v0);
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    f0 = func_089D8E38(a0, a1, a2);
    goto L_089D73E8;
L_089D73E8:;
    v0 = FBITS(f0);
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    v0 = LD32(s0);
    {v[4]=1.57079632679f;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    v1 = LD32(v0+252);
    ST32(sp+80, FBITS(f0));
    a0 = s0 + 0;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D742C;
L_089D742C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089D744C; }
    goto L_089D743C;
L_089D743C:;
    sp = sp + 320;
    return;
L_089D744C:;
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D745C;
L_089D745C:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s0+344));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089D74A0; }
    goto L_089D74A0;
L_089D74A0:;
    a0 = s0 + 0;
    f12 = f1;
    func_089D710C(a0, f12);
    goto L_089D74AC;
L_089D74AC:;
    goto L_089D743C;
}

/* 089D74B4 */
void func_089D74B4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089D74B4:;
    sp = sp - 80;
    v0 = 999;
    s1 = a0 + 0;
    a2 = LD32(a1+4);
    a1 = D_08C2C31C - (-15588);
    cnd_ = a2 == v0;
    v1 = a1 - 15588;
    if (cnd_) { goto L_089D760C; }
    goto L_089D74E8;
L_089D74E8:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089D7538; }
    goto L_089D750C;
L_089D750C:;
    a0 = LD32(a1);
    goto L_089D7510;
L_089D7510:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089D76FC; }
    goto L_089D7528;
L_089D7528:;
    a1 = LD32(a1+4);
    goto L_089D752C;
L_089D752C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089D7510; }
    goto L_089D7534;
L_089D7534:;
    s0 = 0 + 0;
    goto L_089D7538;
L_089D7538:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089D7610; }
    goto L_089D7540;
L_089D7540:;
    v1 = LD32(s1);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7550;
L_089D7550:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s1+344));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089D7594; }
    goto L_089D7594;
L_089D7594:;
    s3 = D_08AEF070 - (-3984);
    f0 = BITSF(LD32(s3-3984));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_089D75AC; }
    goto L_089D75AC;
L_089D75AC:;
    s2 = LD32(s1+228);
    v0 = (s2 >> 13) & 0x1;
    cnd_ = v0 == 0;
    f20 = f1;
    if (cnd_) { goto L_089D75C0; }
    goto L_089D75BC;
L_089D75BC:;
    f20 = BITSF(0);
    goto L_089D75C0;
L_089D75C0:;
    v1 = LD32(s0);
    a0 = 0xffff0000u;
    a0 = a0 | 0x7ffc;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD_U16(v0+8);
    v1 = v1 + a0;
    v0 = v1 < 0x1bu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_089D762C; }
    goto L_089D75E8;
L_089D75E8:;
    v1 = D_08ADE800 - (-6144);
    v1 = v1 - 6144;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089D7600u: goto L_089D7600; case 0x089D760Cu: goto L_089D760C; case 0x089D762Cu: goto L_089D762C; case 0x089D7640u: goto L_089D7640; default: rs_break(0, 0x089d75f8); }
L_089D7600:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_089D7D08(a0, a1, 0, 0, 0);
    goto L_089D760C;
L_089D760C:;
    goto L_089D7610;
L_089D7610:;
    sp = sp + 80;
    return;
L_089D762C:;
    a0 = s1 + 0;
    goto L_089D7630;
L_089D7630:;
    f12 = f20;
    func_089D710C(a0, f12);
    goto L_089D7638;
L_089D7638:;
    goto L_089D7610;
L_089D7640:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_089D7648;
L_089D7648:;
    a0 = LD32(s1);
    v1 = LD32(a0-16);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    cnd_ = v0 == a0;
    v1 = s2 | 0x4000;
    if (cnd_) { goto L_089D760C; }
    goto L_089D7660;
L_089D7660:;
    ST32(s1+228, v1);
    v0 = LD32(s0+228);
    v0 = (v0 >> 13) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089D76A4; }
    goto L_089D7674;
L_089D7674:;
    f0 = BITSF(LD32(s3-3984));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    f1 = f20;
    if (cnd_) { goto L_089D768C; }
    goto L_089D7688;
L_089D7688:;
    f1 = f0;
    goto L_089D768C;
L_089D768C:;
    a0 = s0 + 0;
    f12 = f1;
    f20 = f1;
    func_089D710C(a0, f12);
    goto L_089D769C;
L_089D769C:;
    a0 = s1 + 0;
    goto L_089D7630;
L_089D76A4:;
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D76B0;
L_089D76B0:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s0+344));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089D76F4; }
    goto L_089D76F4;
L_089D76F4:;
    f20 = f20 + f1;
    goto L_089D7674;
L_089D76FC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089D752C; }
    goto L_089D7708;
L_089D7708:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089D7528; }
    goto L_089D7714;
L_089D7714:;
    goto L_089D7538;
}

/* 089D771C */
void func_089D771C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D771C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_089D7778; }
    goto L_089D7748;
L_089D7748:;
    v0 = LD32(s1+228);
    v1 = LD32(a1-16);
    v0 = (v0 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    ST32(s1+228, v0);
    v1 = s1 + v1;
    v0 = 0x8004;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_089D7788; }
    goto L_089D776C;
L_089D776C:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089D778C; }
    goto L_089D7774;
L_089D7774:;
    goto L_089D7778;
L_089D7778:;
    sp = sp + 16;
    return;
L_089D7788:;
    a0 = LD32(a0+4);
    goto L_089D778C;
L_089D778C:;
    v0 = 3;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089D7778; }
    goto L_089D779C;
L_089D779C:;
    v0 = func_088BB294(a0);
    goto L_089D77A4;
L_089D77A4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D77C4; }
    goto L_089D77AC;
L_089D77AC:;
    a1 = s0 + 0;
    goto L_089D77B0;
L_089D77B0:;
    a0 = s1 + 0;
    func_089D74B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D77B8;
L_089D77B8:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089D77B0; }
    goto L_089D77C4;
L_089D77C4:;
    v0 = LD32(s1+228);
    v0 = (v0 >> 13) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089D7778; }
    goto L_089D77D4;
L_089D77D4:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB2B8(a0);
    goto L_089D77E8;
L_089D77E8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D7774; }
    goto L_089D77F0;
L_089D77F0:;
    a1 = s0 + 0;
    goto L_089D77F4;
L_089D77F4:;
    a0 = s1 + 0;
    func_089D7230(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089D77FC;
L_089D77FC:;
    s0 = LD32(s0+20);
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089D77F4; }
    goto L_089D7808;
L_089D7808:;
    goto L_089D7778;
}

/* 089D7810 */
rv_t func_089D7810(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D7810:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 & 0xff;
    { rv_t r_ = func_089D52E0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D782C;
L_089D782C:;
    v0 = LD32(s1+232);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    cnd_ = s0 == 0;
    ST32(s1+232, v0);
    if (cnd_) { goto L_089D7848; }
    goto L_089D783C;
L_089D783C:;
    v0 = LD32(s1+236);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+236, v0);
    goto L_089D7848;
L_089D7848:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D785C */
void func_089D785C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D785C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089D7964; }
    goto L_089D788C;
L_089D788C:;
    v0 = LD32(s0+228);
    s2 = s0 + 328;
    v0 = v0 & 0x4000;
    cnd_ = v0 == 0;
    s1 = s0 + 292;
    if (cnd_) { goto L_089D79AC; }
    goto L_089D78A0;
L_089D78A0:;
    ST32(s0+340, 0);
    goto L_089D78A4;
L_089D78A4:;
    a0 = LD32(a1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D78BC;
L_089D78BC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0));
    ST32(s2+8, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    v0 = LD32(s0);
    ST32(s0+328, FBITS(f2));
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D78F0;
L_089D78F0:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(s1+32, FBITS(f0));
    ST32(s1+8, FBITS(f2));
    ST32(s1+4, FBITS(f1));
    ST32(s1+12, FBITS(f3));
    ST32(s1+16, FBITS(f4));
    ST32(s1+20, FBITS(f5));
    ST32(s1+24, FBITS(f6));
    ST32(s1+28, FBITS(f7));
    f2 = BITSF(LD32(v0));
    v0 = D_08AEF07C - (-3972);
    f1 = BITSF(LD32(s0+340));
    f0 = BITSF(LD32(v0-3972));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s0+292, FBITS(f2));
    if (cnd_) { goto L_089D7960; }
    goto L_089D7950;
L_089D7950:;
    v1 = LD32(s0+84);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s0); goto L_089D7978; }
    goto L_089D7960;
L_089D7960:;
    goto L_089D7964;
L_089D7964:;
    sp = sp + 32;
    return;
L_089D7978:;
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v0 = 1;
    a0 = LD32(v1);
    cnd_ = a0 != v0;
    if (cnd_) {  goto L_089D7964; }
    goto L_089D7994;
L_089D7994:;
    v0 = LD32(a1+88);
    a0 = s0 + 0;
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D79A4;
L_089D79A4:;
    goto L_089D7964;
L_089D79AC:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D79BC;
L_089D79BC:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s2+4));
    f5 = BITSF(LD32(s0+328));
    f2 = BITSF(LD32(v0+8));
    f4 = f4 - f1;
    f0 = f0 - f5;
    f3 = BITSF(LD32(s2+8));
    v0 = D_08AEF074 - (-3980);
    f5 = f4 * f4;
    f2 = f2 - f3;
    f1 = f0 * f0;
    ST32(sp, FBITS(f0));
    f3 = f2 * f2;
    f1 = f1 + f5;
    f0 = BITSF(LD32(v0-3980));
    ST32(sp+4, FBITS(f4));
    f1 = f1 + f3;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_089D7A20; }
    goto L_089D7A14;
L_089D7A14:;
    a1 = LD32(s0);
    s1 = s0 + 292;
    goto L_089D78A0;
L_089D7A20:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7A3C;
L_089D7A3C:;
    a0 = v0 + 0;
    v0 = D_08AEF078 - (-3976);
    f12 = BITSF(LD32(v0-3976));
    a1 = s1 + 0;
    v0 = func_088358B0(a0, a1, f12);
    goto L_089D7A50;
L_089D7A50:;
    cnd_ = v0 == 0;
    a1 = LD32(s0);
    if (cnd_) { goto L_089D78A0; }
    goto L_089D7A58;
L_089D7A58:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+340));
    f0 = f0 + f1;
    ST32(s0+340, FBITS(f0));
    goto L_089D78A4;
}

/* 089D7A70 */
rv_t func_089D7A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D7A70:;
    sp = sp - 16;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    a3 = LD32(a1+8);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a3);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = a0 + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    ST32(v0+344, v1);
    { rv_t r_ = func_089E27EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7AA8;
L_089D7AA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D7AB4 */
void func_089D7AB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D7AB4:;
    sp = sp - 32;
    s2 = a1 & 0xff;
    s1 = a0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D7AD8;
L_089D7AD8:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    s3 = D_08C2B2A8 - (-19800);
    if (cnd_) { goto L_089D7B44; }
    goto L_089D7AF4;
L_089D7AF4:;
    a0 = s3 - 19800;
    goto L_089D7AF8;
L_089D7AF8:;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7B00;
L_089D7B00:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_089D7B44; }
    goto L_089D7B10;
L_089D7B10:;
    v0 = LD32(v0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7B20;
L_089D7B20:;
    a0 = s0 + 0;
    v0 = func_089D1944(a0);
    goto L_089D7B28;
L_089D7B28:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 != v1;
    if (cnd_) { a0 = s3 - 19800; goto L_089D7AF8; }
    goto L_089D7B44;
L_089D7B44:;
    sp = sp + 32;
    return;
}

/* 089D7B60 */
u64 func_089D7B60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
L_089D7B60:;
    v1 = LD32(a0+540);
    v0 = LD32(a1);
    v1 = v1 << 5;
    v1 = v1 + a0;
    ST32(v1+348, v0);
    v1 = v1 + 348;
    v0 = LD32(a1+4);
    ST32(v1+4, v0);
    a2 = LD32(a1+8);
    ST32(v1+8, a2);
    v0 = LD32(a1+12);
    ST32(v1+12, v0);
    a2 = LD32(a1+16);
    ST32(v1+16, a2);
    v0 = LD32(a1+20);
    ST32(v1+20, v0);
    a2 = LD32(a1+24);
    ST32(v1+24, a2);
    a3 = LD32(a1+28);
    ST32(v1+28, a3);
    v0 = LD32(a0+540);
    v0 = v0 + 1;
    ST32(a0+540, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089D7BC0 */
void func_089D7BC0(void)
{
    u32 v0 = 0, v1 = 0;
L_089D7BC0:;
    v1 = 1;
    v0 = D_08C2B2B8 - (-19784);
    ST8(v0-19784, v1);
    return;
}

/* 089D7BD0 */
rv_t func_089D7BD0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089D7BD0:;
    sp = sp - 48;
    v0 = D_08C2B2A8 - (-19800);
    v0 = v0 - 19800;
    a0 = sp + 0;
    a1 = 1;
    f20 = BITSF(0);
    s1 = 0 + 0;
    v1 = LD32(v0+8);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08C2B2B8 - (-19784);
    ST8(v1-19784, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7C24;
L_089D7C24:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    f21 = f20;
    if (cnd_) { goto L_089D7CA8; }
    goto L_089D7C30;
L_089D7C30:;
    s0 = LD32(v0);
    goto L_089D7C34;
L_089D7C34:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7C40;
L_089D7C40:;
    a1 = LD32(s0+540);
    cnd_ = a1 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089D7CA0; }
    goto L_089D7C4C;
L_089D7C4C:;
    f20 = BITSF(0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089D7C88; }
    goto L_089D7C58;
L_089D7C58:;
    v1 = s0 + 360;
    f0 = BITSF(LD32(v1));
    goto L_089D7C60;
L_089D7C60:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v1 = v1 + 32;
    if (cnd_) { goto L_089D7C78; }
    goto L_089D7C70;
L_089D7C70:;
    f20 = f0;
    s1 = a0 + 0;
    goto L_089D7C78;
L_089D7C78:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_089D7C60; }
    goto L_089D7C88;
L_089D7C88:;
    fcc = FCMP(f21, f20, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s0); goto L_089D7CE8; }
    goto L_089D7C98;
L_089D7C98:;
    ST32(s0+540, 0);
    goto L_089D7C9C;
L_089D7C9C:;
    v0 = LD32(sp+8);
    goto L_089D7CA0;
L_089D7CA0:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089D7C34; }
    goto L_089D7CA8;
L_089D7CA8:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089D7CD8; }
    goto L_089D7CBC;
L_089D7CBC:;
    goto L_089D7CC0;
L_089D7CC0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089D7CD8:;
    { u64 r_ = func_08AC6C20(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7CE0;
L_089D7CE0:;
    goto L_089D7CC0;
L_089D7CE8:;
    a1 = s1 << 5;
    a1 = s0 + a1;
    v1 = LD32(v0+8);
    a1 = a1 + 348;
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7D00;
L_089D7D00:;
    ST32(s0+540, 0);
    goto L_089D7C9C;
}

/* 089D7D08 */
void func_089D7D08(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t5 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s7 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[1424] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1424);
L_089D7D08:;
    sp = sp - 1424;
    s4 = a1 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v0 = 0x801d;
    v1 = a0 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089D7DE0; }
    goto L_089D7D7C;
L_089D7D7C:;
    v0 = 0x8004;
    cnd_ = v1 == v0;
    if (cnd_) { {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));} goto L_089D7DE4; }
    goto L_089D7D88;
L_089D7D88:;
    goto L_089D7D8C;
L_089D7D8C:;
    goto L_089D7D90;
L_089D7D90:;
    sp = sp + 1424;
    return;
L_089D7DE0:;
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    goto L_089D7DE4;
L_089D7DE4:;
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    { u64 r_ = func_089D0A8C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D7E24;
L_089D7E24:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D7D8C; }
    goto L_089D7E2C;
L_089D7E2C:;
    a0 = s2 + 0;
    v0 = func_089D0E08(a0, 0, 0, 0);
    goto L_089D7E34;
L_089D7E34:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089D7D88; }
    goto L_089D7E3C;
L_089D7E3C:;
    v1 = LD32(s2);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089D7D8C; }
    goto L_089D7E54;
L_089D7E54:;
    s1 = LD32(v1+16);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089D7D90; }
    goto L_089D7E60;
L_089D7E60:;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D7E7C;
L_089D7E7C:;
    v1 = D_08AEF080 - (-3968);
    f1 = BITSF(LD32(v1-3968));
    ST32(sp+16, 0);
    v1 = s1 + 4;
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v0 = D_08AEF084 - (-3964);
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    f5 = BITSF(LD32(v0-3964));
    f3 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+16));
    f2 = f3 + f5;
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+16, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    f3 = BITSF(LD32(v1+16));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s1+4));
    f2 = f3 + f5;
    ST32(sp+24, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+16));
    f3 = f0 + f5;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+48, FBITS(f2));
    f3 = BITSF(LD32(v1+20));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+12));
    f2 = f3 - f5;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+20));
    f2 = f4 - f5;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+60, FBITS(f2));
    ST32(sp+20, FBITS(f2));
    f3 = BITSF(LD32(v1+20));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+4));
    f1 = f3 - f5;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+64, FBITS(f1));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+20));
    f2 = f4 - f5;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    ST32(sp+72, FBITS(f2));
    v0 = LD32(s2);
    f2 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(s1+4));
    a0 = LD32(v0-12);
    f5 = f2 + f5;
    f0 = BITSF(LD32(v1+8));
    a0 = s2 + a0;
    v1 = LD32(a0);
    ST32(sp+76, FBITS(f5));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f2));
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8044;
L_089D8044:;
    a1 = LD32(s2);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(368);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(a1-12);
    {u32 a_=sp+(1104);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+12);
    a0 = s2 + a0;
    v1 = LD32(v0+16);
    a2 = LD32(v0+32);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(352);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a1);}
    a1 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a1);}
    a1 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+36);
    {u32 a_=sp+(400);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[33]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    a1 = LD32(a0);
    {v[34]=BITSF(a2);}
    v1 = LD32(sp+40);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a1+24);
    {v1=FBITS(v[17]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v1);
    ST32(sp+88, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    t_ = v0;
    ST32(sp+24, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D811C;
L_089D811C:;
    a1 = LD32(s2);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(a1-12);
    {u32 a_=sp+(1168);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+12);
    a0 = s2 + a0;
    v1 = LD32(v0+16);
    a2 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(416);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(448);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a1);}
    a1 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a1);}
    a1 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+48);
    {u32 a_=sp+(464);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+44);
    {v[33]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    a1 = LD32(a0);
    {v[34]=BITSF(a2);}
    v1 = LD32(sp+52);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a1+24);
    {v1=FBITS(v[17]);}
    ST32(sp+44, FBITS(f2));
    ST32(sp+48, v1);
    ST32(sp+52, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v1);
    t_ = v0;
    ST32(sp+88, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D81F4;
L_089D81F4:;
    a1 = LD32(s2);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(496);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(a1-12);
    {u32 a_=sp+(1232);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+12);
    a0 = s2 + a0;
    v1 = LD32(v0+16);
    a2 = LD32(v0+32);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(480);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a1);}
    a1 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a1);}
    a1 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+60);
    {u32 a_=sp+(528);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+56);
    {v[33]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    a1 = LD32(a0);
    {v[34]=BITSF(a2);}
    v1 = LD32(sp+64);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a1+24);
    {v1=FBITS(v[17]);}
    ST32(sp+56, FBITS(f2));
    ST32(sp+60, v1);
    ST32(sp+64, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v1);
    t_ = v0;
    ST32(sp+88, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D82CC;
L_089D82CC:;
    a1 = LD32(s2);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(560);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(a1-12);
    {u32 a_=sp+(1296);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    a2 = LD32(v0+32);
    a0 = s2 + a0;
    a1 = LD32(v0+12);
    v1 = LD32(v0+16);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(576);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a1);}
    a1 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a1);}
    a1 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+72);
    {u32 a_=sp+(592);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+68);
    {v[33]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    a1 = LD32(a0);
    {v[34]=BITSF(a2);}
    v1 = LD32(sp+76);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a1+20);
    {v1=FBITS(v[17]);}
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, v1);
    ST32(sp+76, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v1);
    t_ = v0;
    ST32(sp+88, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D83A4;
L_089D83A4:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(s2);
    f1 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    a0 = LD32(v1-12);
    f2 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    a0 = s2 + a0;
    f2 = f2 + f3;
    f0 = f0 + f4;
    v1 = LD32(a0);
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D83F0;
L_089D83F0:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(s2);
    f1 = BITSF(LD32(sp+44));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    a0 = LD32(v1-12);
    f2 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+52));
    a0 = s2 + a0;
    f2 = f2 + f3;
    f0 = f0 + f4;
    v1 = LD32(a0);
    ST32(sp+44, FBITS(f1));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f0));
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D843C;
L_089D843C:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(s2);
    f1 = BITSF(LD32(sp+56));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    a0 = LD32(v1-12);
    f2 = BITSF(LD32(sp+60));
    f0 = BITSF(LD32(sp+64));
    a0 = s2 + a0;
    f2 = f2 + f3;
    f0 = f0 + f4;
    v1 = LD32(a0);
    ST32(sp+56, FBITS(f1));
    ST32(sp+60, FBITS(f2));
    ST32(sp+64, FBITS(f0));
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8488;
L_089D8488:;
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(sp+72));
    f3 = BITSF(LD32(sp+40));
    v1 = D_08AEF088 - (-3960);
    f2 = f2 + f0;
    f5 = BITSF(LD32(v1-3960));
    ST32(sp+608, FBITS(f3));
    {u32 a_=sp+(688);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(768);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(sp+60));
    f0 = BITSF(LD32(v0));
    f20 = BITSF(LD32(sp+36));
    ST32(sp+616, FBITS(f3));
    f3 = f2 + f5;
    {u32 a_=sp+(672);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(v0+8));
    f19 = BITSF(LD32(sp+32));
    ST32(sp+136, FBITS(f3));
    {u32 a_=sp+(704);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(752);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(sp+68));
    f7 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+76));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+44));
    f4 = f4 + f1;
    f1 = f7 - f20;
    f0 = f0 - f19;
    {u32 a_=sp+(784);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(s0);}
    ST32(sp+20, FBITS(f1));
    {v[8]=BITSF(s0);}
    {v[28]=BITSF(s0);}
    f1 = BITSF(LD32(sp+608));
    ST32(sp+16, FBITS(f0));
    {v[32]=BITSF(s0);}
    f6 = BITSF(0);
    f0 = BITSF(LD32(sp+52));
    f0 = f0 - f1;
    f1 = f7 + f5;
    ST32(sp+24, FBITS(f0));
    f0 = f20 + f5;
    ST32(sp+112, FBITS(f1));
    f1 = BITSF(LD32(sp+56));
    ST32(sp+100, FBITS(f0));
    ST32(sp+612, FBITS(f1));
    f1 = BITSF(LD32(sp+112));
    f0 = BITSF(LD32(sp+616));
    f1 = f1 - f7;
    f5 = f0 + f5;
    f0 = BITSF(LD32(sp+64));
    s1 = FBITS(f1);
    ST32(sp+620, FBITS(f0));
    {v[29]=BITSF(s1);}
    {v[30]=BITSF(s0);}
    f0 = BITSF(LD32(sp+136));
    f1 = BITSF(LD32(sp+100));
    f0 = f0 - f2;
    f1 = f1 - f20;
    s5 = FBITS(f0);
    t1 = FBITS(f1);
    f0 = BITSF(LD32(sp+612));
    f1 = BITSF(LD32(sp+44));
    {v[21]=BITSF(t1);}
    {v[9]=BITSF(s5);}
    f0 = f0 - f1;
    f1 = BITSF(LD32(sp+52));
    {v[10]=BITSF(s0);}
    {v[22]=BITSF(s0);}
    t3 = FBITS(f0);
    f0 = BITSF(LD32(sp+620));
    {v[36]=BITSF(t3);}
    f0 = f0 - f1;
    f1 = f19 - f3;
    t5 = FBITS(f0);
    f0 = BITSF(LD32(sp+616));
    s7 = FBITS(f1);
    f1 = f3 - f19;
    f0 = f5 - f0;
    {v[16]=BITSF(s7);}
    s3 = FBITS(f0);
    f0 = BITSF(LD32(sp+608));
    ST32(sp+208, FBITS(f1));
    {u32 a_=sp+(640);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f0 = f0 - f4;
    f1 = BITSF(LD32(sp+620));
    v1 = LD32(sp+20);
    v0 = LD32(sp+208);
    t9 = FBITS(f0);
    f0 = f2 - f20;
    f1 = f4 - f1;
    {v[12]=BITSF(v0);}
    {u32 a_=sp+(656);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+212, FBITS(f0));
    {u32 a_=sp+(624);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+608));
    v0 = LD32(sp+212);
    a3 = FBITS(f1);
    f0 = f4 - f0;
    {v[13]=BITSF(v0);}
    {v[33]=BITSF(s3);}
    {v[34]=BITSF(s0);}
    ST32(sp+216, FBITS(f0));
    f0 = BITSF(LD32(sp+616));
    v0 = LD32(sp+216);
    {v[14]=BITSF(v0);}
    f7 = f0 - f7;
    f0 = BITSF(LD32(sp+612));
    v0 = LD32(sp+16);
    {v[0]=BITSF(v0);}
    f0 = f3 - f0;
    {v[4]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    v0 = LD32(sp+24);
    ST32(sp+720, FBITS(f0));
    {v[2]=BITSF(v0);}
    a0 = FBITS(f7);
    f0 = BITSF(LD32(sp+616));
    {v[37]=BITSF(a0);}
    {v[5]=BITSF(v1);}
    f0 = f2 - f0;
    a0 = LD32(sp+720);
    {v[6]=BITSF(v0);}
    {v[24]=BITSF(a0);}
    a1 = FBITS(f0);
    f0 = f20 - f2;
    {v[38]=BITSF(t5);}
    {v[25]=BITSF(a1);}
    {v[26]=BITSF(a3);}
    t7 = FBITS(f0);
    {v[17]=BITSF(t7);}
    {v[18]=BITSF(t9);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[40]=d0;v[41]=d1;v[42]=d2;}
    {a0=FBITS(v[42]);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[20];float t1=v[21];float t2=v[22];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    ST32(sp+800, a0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];float t1=v[13];float t2=v[14];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v0=FBITS(v[0]);}
    {a0=FBITS(v[2]);}
    f1 = BITSF(v0);
    f10 = BITSF(a0);
    {a0=FBITS(v[1]);}
    f0 = BITSF(a0);
    {float s0=v[36];float s1=v[37];float s2=v[38];float t0=v[28];float t1=v[29];float t2=v[30];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v1=FBITS(v[10]);}
    f9 = BITSF(v0);
    f21 = BITSF(v1);
    v0 = FBITS(f0);
    v1 = FBITS(f1);
    {u32 a_=sp+(816);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f8 = BITSF(a0);
    {v[12]=BITSF(v1);}
    {a0=FBITS(v[8]);}
    {v[13]=BITSF(v0);}
    v1 = FBITS(f10);
    f26 = BITSF(a0);
    {v[14]=BITSF(v1);}
    {a0=FBITS(v[0]);}
    {v1=FBITS(v[2]);}
    {v0=FBITS(v[9]);}
    f13 = BITSF(v1);
    f25 = BITSF(v0);
    {v0=FBITS(v[1]);}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=v[32];float t1=v[33];float t2=v[34];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {v1=FBITS(v[2]);}
    f16 = BITSF(v1);
    {v1=FBITS(v[40]);}
    f1 = BITSF(v1);
    f0 = BITSF(FBITS(f25) ^ 0x80000000u);
    f11 = BITSF(a0);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    {a0=FBITS(v[0]);}
    f14 = BITSF(a0);
    {a0=FBITS(v[41]);}
    ST32(sp+804, FBITS(f1));
    f18 = BITSF(a0);
    ST32(sp+1328, FBITS(f0));
    f12 = BITSF(v0);
    f0 = BITSF(FBITS(f18) ^ 0x80000000u);
    f1 = BITSF(LD32(sp+800));
    {v0=FBITS(v[1]);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f15 = BITSF(v0);
    {v0=FBITS(v[0]);}
    ST32(sp+1312, v0);
    f29 = BITSF(FBITS(f26) ^ 0x80000000u);
    f30 = BITSF(FBITS(f21) ^ 0x80000000u);
    ST32(sp+812, FBITS(f1));
    f31 = BITSF(FBITS(f11) ^ 0x80000000u);
    f28 = BITSF(FBITS(f12) ^ 0x80000000u);
    f1 = BITSF(LD32(sp+608));
    ST32(sp+808, FBITS(f0));
    f27 = BITSF(FBITS(f13) ^ 0x80000000u);
    f24 = BITSF(FBITS(f14) ^ 0x80000000u);
    f0 = BITSF(LD32(sp+1312));
    ST32(sp+68, FBITS(f3));
    f23 = BITSF(FBITS(f15) ^ 0x80000000u);
    fcc = FCMP(f0, f6, 2);
    ST32(sp+72, FBITS(f2));
    f22 = BITSF(FBITS(f16) ^ 0x80000000u);
    ST32(sp+76, FBITS(f4));
    ST32(sp+96, FBITS(f19));
    ST32(sp+104, FBITS(f1));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+44));
    ST32(sp+132, FBITS(f3));
    ST32(sp+116, FBITS(f1));
    f1 = BITSF(LD32(sp+620));
    ST32(sp+108, FBITS(f0));
    ST32(sp+128, FBITS(f1));
    f0 = BITSF(LD32(sp+612));
    f1 = BITSF(LD32(sp+1328));
    ST32(sp+124, FBITS(f5));
    ST32(sp+120, FBITS(f0));
    ST32(sp+160, FBITS(f1));
    f0 = BITSF(LD32(sp+804));
    f1 = BITSF(LD32(sp+808));
    ST32(sp+140, FBITS(f4));
    ST32(sp+192, FBITS(f0));
    ST32(sp+156, FBITS(f29));
    ST32(sp+164, FBITS(f30));
    ST32(sp+144, FBITS(f9));
    ST32(sp+148, FBITS(f8));
    ST32(sp+152, FBITS(f10));
    ST32(sp+80, FBITS(f6));
    ST32(sp+88, FBITS(f6));
    ST32(sp+168, FBITS(f31));
    ST32(sp+172, FBITS(f28));
    ST32(sp+176, FBITS(f27));
    ST32(sp+180, FBITS(f24));
    ST32(sp+184, FBITS(f23));
    ST32(sp+188, FBITS(f22));
    ST32(sp+208, s7);
    ST32(sp+212, t7);
    ST32(sp+216, t9);
    ST32(sp+84, s5);
    ST32(sp+196, FBITS(f1));
    f0 = BITSF(LD32(sp+800));
    f3 = BITSF(LD32(sp+812));
    f1 = BITSF(LD32(sp+804));
    ST32(sp+24, FBITS(f0));
    ST32(sp+200, FBITS(f3));
    ST32(sp+232, FBITS(f0));
    f3 = BITSF(LD32(sp+808));
    f0 = BITSF(LD32(sp+812));
    ST32(sp+16, v1);
    ST32(sp+20, a0);
    ST32(sp+224, v1);
    ST32(sp+228, a0);
    ST32(sp+240, FBITS(f1));
    ST32(sp+244, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+248, FBITS(f0));
    if (cnd_) { goto L_089D88B8; }
    goto L_089D8884;
L_089D8884:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+144, v1);
    ST32(sp+148, a0);
    ST32(sp+152, v0);
    goto L_089D88B8;
L_089D88B8:;
    v0 = LD32(sp+156);
    {u32 a_=sp+(832);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+160);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+164);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+168);
    if (cnd_) { goto L_089D892C; }
    goto L_089D88F4;
L_089D88F4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+156, v1);
    ST32(sp+160, a0);
    ST32(sp+164, v0);
    v0 = LD32(sp+168);
    goto L_089D892C;
L_089D892C:;
    {u32 a_=sp+(848);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+172);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+176);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+180);
    if (cnd_) { goto L_089D899C; }
    goto L_089D8964;
L_089D8964:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+168, v1);
    ST32(sp+172, a0);
    ST32(sp+176, v0);
    v0 = LD32(sp+180);
    goto L_089D899C;
L_089D899C:;
    {u32 a_=sp+(864);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+184);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+188);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+192);
    if (cnd_) { goto L_089D8A0C; }
    goto L_089D89D4;
L_089D89D4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+180, v1);
    ST32(sp+184, a0);
    ST32(sp+188, v0);
    v0 = LD32(sp+192);
    goto L_089D8A0C;
L_089D8A0C:;
    {u32 a_=sp+(880);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+196);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+200);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    f7 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_089D8A7C; }
    goto L_089D8A44;
L_089D8A44:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+240, v1);
    ST32(sp+244, a0);
    ST32(sp+248, v0);
    ST32(sp+192, v1);
    ST32(sp+196, a0);
    ST32(sp+200, v0);
    f7 = BITSF(LD32(sp+8));
    goto L_089D8A7C;
L_089D8A7C:;
    f0 = BITSF(LD32(sp+608));
    f5 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f4 = f7 - f0;
    f0 = BITSF(LD32(sp+612));
    f2 = f5 - f19;
    f3 = f6 - f20;
    f5 = f5 - f0;
    f0 = BITSF(LD32(sp+616));
    v0 = LD32(sp+144);
    f8 = BITSF(0);
    f6 = f6 - f0;
    a0 = FBITS(f2);
    a1 = FBITS(f3);
    a2 = FBITS(f4);
    {u32 a_=sp+(896);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(912);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v0 = LD32(sp+148);
    {v[6]=BITSF(a2);}
    {v[1]=BITSF(v0);}
    f0 = BITSF(LD32(sp+620));
    v0 = LD32(sp+152);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f7 = f7 - f0;
    ST32(sp+256, FBITS(f2));
    fcc = FCMP(f1, f8, 12);
    ST32(sp+260, FBITS(f3));
    ST32(sp+264, FBITS(f4));
    ST32(sp+268, FBITS(f2));
    ST32(sp+272, FBITS(f3));
    ST32(sp+276, FBITS(f4));
    ST32(sp+280, FBITS(f5));
    ST32(sp+284, FBITS(f6));
    ST32(sp+288, FBITS(f7));
    ST32(sp+292, FBITS(f5));
    ST32(sp+296, FBITS(f6));
    ST32(sp+300, FBITS(f7));
    ST32(sp+240, FBITS(f2));
    ST32(sp+244, FBITS(f3));
    ST32(sp+248, FBITS(f4));
    ST32(sp+304, FBITS(f2));
    ST32(sp+308, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+312, FBITS(f4));
    if (cnd_) { goto L_089D7D88; }
    goto L_089D8B44;
L_089D8B44:;
    v0 = LD32(sp+156);
    {u32 a_=sp+(928);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(944);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v0 = LD32(sp+160);
    {v[6]=BITSF(a2);}
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+164);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_089D7D8C; }
    goto L_089D8B8C;
L_089D8B8C:;
    v0 = LD32(sp+168);
    t3 = FBITS(f5);
    v1 = FBITS(f6);
    t5 = FBITS(f7);
    {u32 a_=sp+(960);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(t3);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+172);
    {v[6]=BITSF(t5);}
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+176);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_089D7D8C; }
    goto L_089D8BE0;
L_089D8BE0:;
    v0 = LD32(sp+180);
    {u32 a_=sp+(992);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(t3);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+188);
    v1 = LD32(sp+184);
    {v[6]=BITSF(t5);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D7D8C; }
    goto L_089D8C28;
L_089D8C28:;
    v0 = LD32(sp+192);
    {u32 a_=sp+(1024);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1040);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v1 = LD32(sp+196);
    {v[6]=BITSF(a2);}
    {v[1]=BITSF(v1);}
    v0 = LD32(sp+200);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {a0=FBITS(v[4]);}
    f0 = BITSF(a0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D7D90; }
    goto L_089D8C70;
L_089D8C70:;
    s0 = sp + 320;
    a0 = s0 + 0;
    func_0897A7A0(a0);
    goto L_089D8C7C;
L_089D8C7C:;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089D8C84;
L_089D8C84:;
    v0 = LD32(s2);
    t0 = LD32(s4);
    a3 = LD32(s2+84);
    v1 = LD32(v0-16);
    v0 = D_08AEF08C - (-3956);
    f0 = BITSF(LD32(v0-3956));
    v1 = s2 + v1;
    a2 = LD32(v1+4);
    ST32(sp+332, FBITS(f0));
    a0 = s4 + 0;
    ST32(sp+324, a2);
    ST32(sp+328, a3);
    v0 = LD32(t0+8);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8CC0;
L_089D8CC0:;
    goto L_089D7D8C;
}

/* 089D8CC8 */
rv_t func_089D8CC8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D8CC8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D8DEC; }
    goto L_089D8CFC;
L_089D8CFC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF090 - (-3952);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3952));
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
    t0 = D_08C2B1F8 - (-19976);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B208 - (-19960);
    a3 = D_08C2B218 - (-19944);
    v1 = t0 - 19976;
    a1 = v0 - 19960;
    a2 = a3 - 19944;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B2A8 - (-19800);
    s0 = s3 - 19800;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-19960, FBITS(f5));
    v0 = 4;
    ST32(t0-19976, FBITS(f1));
    ST32(a3-19944, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8DB4;
L_089D8DB4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-19800, v0);
    if (cnd_) { goto L_089D8DE0; }
    goto L_089D8DC4;
L_089D8DC4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089D8DCC;
L_089D8DCC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089D8DCC; }
    goto L_089D8DE0;
L_089D8DE0:;
    v0 = s3 - 19800;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089D8DEC;
L_089D8DEC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089D8E10; }
    goto L_089D8E00;
L_089D8E00:;
    v0 = D_08C2B2A8 - (-19800);
    a0 = LD32(v0-19800);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089D8E28; }
    goto L_089D8E10;
L_089D8E10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089D8E28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D8E30;
L_089D8E30:;
    goto L_089D8E10;
}

/* 089D8E38 */
float func_089D8E38(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089D8E38:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089D8E64; }
    goto L_089D8E50;
L_089D8E50:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089D8E64; }
    goto L_089D8E64;
L_089D8E64:;
    return f0;
}

/* 089D8E6C */
rv_t func_089D8E6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D8E6C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089D8CC8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8E80;
L_089D8E80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D8E8C */
rv_t func_089D8E8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D8E8C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089D8CC8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8EA0;
L_089D8EA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D8EAC */
void func_089D8EAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D8EAC:;
    sp = sp - 16;
    a2 = 0xe7a30000u;
    a2 = a2 | 0xa175;
    s0 = a0 + 0;
    func_089DF4EC(a0, a1, a2);
    goto L_089D8EC8;
L_089D8EC8:;
    v1 = D_08B04118 - (16664);
    v0 = LD32(s0+4);
    v1 = v1 + 16664;
    ST32(s0, v1);
    a1 = LD32(v0+52);
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_089D8F10; }
    goto L_089D8EE4;
L_089D8EE4:;
    v0 = LD32(s0+112);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v0);
    { u64 r_ = func_089C5C6C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D8EF4;
L_089D8EF4:;
    v1 = LD32(s0+72);
    a0 = 0x200000u;
    a1 = 0x100000u;
    v1 = v1 | a0;
    v1 = v1 | a1;
    ST32(s0+72, v1);
    ST32(s0+68, v0);
    goto L_089D8F10;
L_089D8F10:;
    sp = sp + 16;
    return;
}

/* 089D8F20 */
rv_t func_089D8F20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089D8F20:;
    sp = sp - 32;
    a2 = 1;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(v0+52);
    v0 = v1 + 540;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089D8F98; }
    goto L_089D8F54;
L_089D8F54:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    v0 = LD32(v1+844);
    v0 = (v0 & ~(0x1u << 3)) | ((a2 & 0x1) << 3);
    ST32(v1+844, v0);
    ST32(v1+540, 0);
    ST32(s0+80, 0);
    ST32(v1+732, a2);
    func_089CD86C(a0);
    goto L_089D8F84;
L_089D8F84:;
    ST32(s0+80, 0);
    a1 = s1 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_089DF898(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8F94;
L_089D8F94:;
    a1 = v0 + 0;
    goto L_089D8F98;
L_089D8F98:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089D8FB0 */
rv_t func_089D8FB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D8FB0:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D8FF4; }
    goto L_089D8FD4;
L_089D8FD4:;
    ST32(s0+732, 0);
    f0 = func_089C8410(a0);
    goto L_089D8FDC;
L_089D8FDC:;
    a0 = s0 + 0;
    func_089C9388(a0, 0, 0, 0);
    goto L_089D8FE4;
L_089D8FE4:;
    a0 = s0 + 0;
    func_089CB9D8(a0);
    goto L_089D8FEC;
L_089D8FEC:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFDDC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D8FF4;
L_089D8FF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D9008 */
void func_089D9008(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D9008:;
    sp = sp - 16;
    a2 = 0x409b0000u;
    a2 = a2 | 0x8404;
    s0 = a0 + 0;
    func_089DF4EC(a0, a1, a2);
    goto L_089D9024;
L_089D9024:;
    v1 = D_08B040C0 - (16576);
    v0 = LD32(s0+4);
    v1 = v1 + 16576;
    ST32(s0, v1);
    a1 = LD32(v0+52);
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_089D906C; }
    goto L_089D9040;
L_089D9040:;
    v0 = LD32(s0+112);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v0);
    v0 = func_089C5C94(a0, 0, 0, 0);
    goto L_089D9050;
L_089D9050:;
    v1 = LD32(s0+72);
    a0 = 0x200000u;
    a1 = 0x100000u;
    v1 = v1 | a0;
    v1 = v1 | a1;
    ST32(s0+72, v1);
    ST32(s0+68, v0);
    goto L_089D906C;
L_089D906C:;
    sp = sp + 16;
    return;
}

/* 089D907C */
rv_t func_089D907C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089D907C:;
    sp = sp - 96;
    s2 = a0 + 0;
    s0 = 0 + 0;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    v1 = s1 + 540;
    if (cnd_) { goto L_089D953C; }
    goto L_089D90A8;
L_089D90A8:;
    v0 = 2;
    ST32(s1+732, v0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    v0 = LD32(s1+844);
    ST32(s1+540, 0);
    v0 = v0 | 0x8;
    ST32(s1+844, v0);
    ST32(a0+80, 0);
    { rv_t r_ = func_089DF898(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D90DC;
L_089D90DC:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D90F0;
L_089D90F0:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
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
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D93BC; }
    goto L_089D9178;
L_089D9178:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D92FC; }
    goto L_089D9188;
L_089D9188:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089D9220; }
    goto L_089D91B0;
L_089D91B0:;
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
    if (cnd_) { goto L_089D91FC; }
    goto L_089D91EC;
L_089D91EC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089D91FC;
L_089D91FC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D9240; }
    goto L_089D920C;
L_089D920C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089D9240; }
    goto L_089D921C;
L_089D921C:;
    goto L_089D9220;
L_089D9220:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D9240; }
    goto L_089D9234;
L_089D9234:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089D9240;
L_089D9240:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089D92D0; }
    goto L_089D9260;
L_089D9260:;
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
    if (cnd_) { goto L_089D92AC; }
    goto L_089D929C;
L_089D929C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089D92AC;
L_089D92AC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D92F0; }
    goto L_089D92BC;
L_089D92BC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089D92F0; }
    goto L_089D92CC;
L_089D92CC:;
    goto L_089D92D0;
L_089D92D0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D92F0; }
    goto L_089D92E4;
L_089D92E4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089D92F0;
L_089D92F0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089D9474; }
    goto L_089D92F8;
L_089D92F8:;
    goto L_089D92FC;
L_089D92FC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089D9390; }
    goto L_089D9320;
L_089D9320:;
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
    if (cnd_) { goto L_089D936C; }
    goto L_089D935C;
L_089D935C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089D936C;
L_089D936C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D93B0; }
    goto L_089D937C;
L_089D937C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089D93B0; }
    goto L_089D938C;
L_089D938C:;
    goto L_089D9390;
L_089D9390:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D93B0; }
    goto L_089D93A4;
L_089D93A4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089D93B0;
L_089D93B0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089D9474; }
    goto L_089D93B8;
L_089D93B8:;
    goto L_089D93BC;
L_089D93BC:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089D9450; }
    goto L_089D93E0;
L_089D93E0:;
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
    if (cnd_) { goto L_089D942C; }
    goto L_089D941C;
L_089D941C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089D942C;
L_089D942C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D9470; }
    goto L_089D943C;
L_089D943C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089D9470; }
    goto L_089D944C;
L_089D944C:;
    goto L_089D9450;
L_089D9450:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089D9470; }
    goto L_089D9464;
L_089D9464:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089D9470;
L_089D9470:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089D9474;
L_089D9474:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    ST32(sp+64, 0);
    ST32(sp+72, 0);
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
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
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D952C;
L_089D952C:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = sp + 16;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D953C;
L_089D953C:;
    v0 = s0 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 089D9558 */
rv_t func_089D9558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D9558:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D9594; }
    goto L_089D957C;
L_089D957C:;
    ST32(s0+732, 0);
    { rv_t r_ = func_089C9408(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D9584;
L_089D9584:;
    a0 = s0 + 0;
    f0 = func_089C8410(a0);
    goto L_089D958C;
L_089D958C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFDDC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D9594;
L_089D9594:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D95A8 */
void func_089D95A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D95A8:;
    sp = sp - 16;
    a2 = 0xcad60000u;
    a2 = a2 | 0xd076;
    s0 = a0 + 0;
    func_089DF4EC(a0, a1, a2);
    goto L_089D95C4;
L_089D95C4:;
    v1 = D_08B04068 - (16488);
    v0 = LD32(s0+4);
    v1 = v1 + 16488;
    ST32(s0, v1);
    a1 = LD32(v0+52);
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_089D9614; }
    goto L_089D95E0;
L_089D95E0:;
    v0 = LD32(s0+112);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v0);
    { u64 r_ = func_089C5D0C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089D95F0;
L_089D95F0:;
    v1 = LD32(s0+72);
    a0 = 0x800000u;
    a1 = 0x200000u;
    v1 = v1 | a0;
    v1 = v1 | a1;
    a0 = 0x100000u;
    v1 = v1 | a0;
    ST32(s0+72, v1);
    ST32(s0+68, v0);
    goto L_089D9614;
L_089D9614:;
    sp = sp + 16;
    return;
}

/* 089D9624 */
rv_t func_089D9624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D9624:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    a2 = LD32(v0+52);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089D965C; }
    goto L_089D963C;
L_089D963C:;
    v1 = LD32(a2+844);
    v0 = 3;
    ST32(a2+732, v0);
    v1 = v1 | 0x8;
    ST32(a2+844, v1);
    ST32(a0+80, 0);
    { rv_t r_ = func_089DF898(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D9658;
L_089D9658:;
    v1 = v0 + 0;
    goto L_089D965C;
L_089D965C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D966C */
rv_t func_089D966C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D966C:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D96B4; }
    goto L_089D9690;
L_089D9690:;
    v0 = LD32(s0+844);
    ST32(s0+732, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+844, v0);
    f0 = func_089C8410(a0);
    goto L_089D96A4;
L_089D96A4:;
    a0 = s0 + 0;
    func_089CB9D8(a0);
    goto L_089D96AC;
L_089D96AC:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFDDC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D96B4;
L_089D96B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D96C8 */
rv_t func_089D96C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D96C8:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D9710; }
    goto L_089D96EC;
L_089D96EC:;
    v0 = LD32(s0+844);
    ST32(s0+732, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+844, v0);
    f0 = func_089C8410(a0);
    goto L_089D9700;
L_089D9700:;
    a0 = s0 + 0;
    func_089CB9D8(a0);
    goto L_089D9708;
L_089D9708:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFC98(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D9710;
L_089D9710:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D9724 */
void func_089D9724(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D9724:;
    sp = sp - 16;
    a2 = 0xcad60000u;
    a2 = a2 | 0xd077;
    s0 = a0 + 0;
    func_089DF4EC(a0, a1, a2);
    goto L_089D9740;
L_089D9740:;
    v1 = D_08B04010 - (16400);
    v0 = LD32(s0+4);
    v1 = v1 + 16400;
    ST32(s0, v1);
    a1 = LD32(v0+52);
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_089D9788; }
    goto L_089D975C;
L_089D975C:;
    v0 = LD32(s0+112);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v0);
    v0 = func_089C5D34(a0, 0, 0, 0);
    goto L_089D976C;
L_089D976C:;
    v1 = LD32(s0+72);
    a0 = 0x200000u;
    a1 = 0x100000u;
    v1 = v1 | a0;
    v1 = v1 | a1;
    ST32(s0+72, v1);
    ST32(s0+68, v0);
    goto L_089D9788;
L_089D9788:;
    sp = sp + 16;
    return;
}

/* 089D9798 */
rv_t func_089D9798(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D9798:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    a2 = LD32(v0+52);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089D97D0; }
    goto L_089D97B0;
L_089D97B0:;
    v1 = LD32(a2+844);
    v0 = 4;
    ST32(a2+732, v0);
    v1 = v1 | 0x8;
    ST32(a2+844, v1);
    ST32(a0+80, 0);
    { rv_t r_ = func_089DF898(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D97CC;
L_089D97CC:;
    v1 = v0 + 0;
    goto L_089D97D0;
L_089D97D0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D97E0 */
rv_t func_089D97E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D97E0:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D9828; }
    goto L_089D9804;
L_089D9804:;
    v0 = LD32(s0+844);
    ST32(s0+732, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+844, v0);
    f0 = func_089C8410(a0);
    goto L_089D9818;
L_089D9818:;
    a0 = s0 + 0;
    func_089CB9D8(a0);
    goto L_089D9820;
L_089D9820:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFDDC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D9828;
L_089D9828:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089D983C */
rv_t func_089D983C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089D983C:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089D9884; }
    goto L_089D9860;
L_089D9860:;
    v0 = LD32(s0+844);
    ST32(s0+732, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+844, v0);
    f0 = func_089C8410(a0);
    goto L_089D9874;
L_089D9874:;
    a0 = s0 + 0;
    func_089CB9D8(a0);
    goto L_089D987C;
L_089D987C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFC98(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089D9884;
L_089D9884:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}
