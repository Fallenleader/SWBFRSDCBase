#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

/* 08A5045C */
u64 func_08A5045C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A5045C:;
    sp = sp - 96;
    f20 = BITSF(0);
    s4 = a2 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    f21 = f20;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A504CC; }
    goto L_08A504A4;
L_08A504A4:;
    f2 = BITSF(LD32(a0+16));
    f1 = BITSF(LD32(a0+24));
    f0 = BITSF(LD32(a0+28));
    f3 = BITSF(LD32(a0+20));
    f1 = f1 - f2;
    f4 = BITSF(LD32(a0+32));
    f0 = f0 - f3;
    f2 = BITSF(LD32(a0+36));
    f21 = f4 * f1;
    f20 = f2 * f0;
    goto L_08A504CC;
L_08A504CC:;
    v0 = D_08AE5A14 - (23060);
    s7 = v0 + 23060;
    v1 = D_08AE5A18 - (23064);
    v0 = D_08C30870 - (2160);
    s6 = v1 + 23064;
    s2 = v0 + 2160;
    s0 = 0 + 0;
    s5 = sp + 16;
    f0 = BITSF(LD32(s2));
    goto L_08A504F0;
L_08A504F0:;
    f1 = BITSF(LD32(s2+4));
    f3 = BITSF(LD32(s3));
    f0 = f0 * f21;
    f1 = f1 * f20;
    f2 = BITSF(LD32(s3+4));
    v0 = s0 + s7;
    v1 = s0 + s6;
    f0 = f0 + f3;
    f1 = f1 + f2;
    a2 = LD_U8(v0);
    a3 = LD_U8(v1);
    a0 = s1 + 0;
    a1 = s5 + 0;
    t0 = 0 + 0;
    t1 = s4 + 0;
    s0 = s0 + 1;
    ST32(sp+16, FBITS(f0));
    s2 = s2 + 8;
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A50840(a0, a1, a2, a3, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A50548;
L_08A50548:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s2)); goto L_08A504F0; }
    goto L_08A50554;
L_08A50554:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A50588 */
void func_08A50588(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A50588:;
    sp = sp - 96;
    f20 = BITSF(0);
    s4 = a2 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    f21 = f20;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A505F8; }
    goto L_08A505D0;
L_08A505D0:;
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a0+16));
    f3 = BITSF(LD32(a0+8));
    f1 = f1 - f2;
    f4 = BITSF(LD32(a0+20));
    f0 = f0 - f3;
    f2 = BITSF(LD32(a0+24));
    f21 = f4 * f1;
    f20 = f2 * f0;
    goto L_08A505F8;
L_08A505F8:;
    v0 = D_08AE5A14 - (23060);
    s7 = v0 + 23060;
    v1 = D_08AE5A18 - (23064);
    v0 = D_08C30870 - (2160);
    s6 = v1 + 23064;
    s2 = v0 + 2160;
    s0 = 0 + 0;
    s5 = sp + 16;
    f0 = BITSF(LD32(s2));
    goto L_08A5061C;
L_08A5061C:;
    f1 = BITSF(LD32(s2+4));
    f3 = BITSF(LD32(s3));
    f0 = f0 * f21;
    f1 = f1 * f20;
    f2 = BITSF(LD32(s3+4));
    v0 = s0 + s7;
    v1 = s0 + s6;
    f0 = f0 + f3;
    f1 = f1 + f2;
    a2 = LD_U8(v0);
    a3 = LD_U8(v1);
    a0 = s1 + 0;
    a1 = s5 + 0;
    t0 = 0 + 0;
    t1 = s4 + 0;
    s0 = s0 + 1;
    ST32(sp+16, FBITS(f0));
    s2 = s2 + 8;
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    func_08A50718(a0, a1, a2, a3, t0, t1);
    goto L_08A50674;
L_08A50674:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s2)); goto L_08A5061C; }
    goto L_08A50680;
L_08A50680:;
    sp = sp + 96;
    return;
}

/* 08A506B4 */
u64 func_08A506B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A506B4:;
    sp = sp - 32;
    v0 = D_08B1C8A4 - (-14172);
    v0 = v0 - 14172;
    a0 = a0 << 3;
    a0 = a0 + v0;
    s0 = a1 + 0;
    s1 = a2 + 0;
    a0 = LD32(a0+4);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A506E4;
L_08A506E4:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0));
    a2 = s1 + 0;
    a0 = v0 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A5045C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A50704;
L_08A50704:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A50718 */
void func_08A50718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A50718:;
    sp = sp - 32;
    v0 = D_08B2C12C - (-16084);
    t2 = a0 + 0;
    s1 = v0 - 16084;
    a0 = s1 + 0;
    s0 = a1 + 0;
    a2 = a2 & 0xff;
    a3 = a3 & 0xff;
    t0 = t0 & 0xff;
    cnd_ = t2 == 0;
    if (cnd_) { goto L_08A50824; }
    goto L_08A50754;
L_08A50754:;
    f2 = BITSF(LD32(t2+4));
    f1 = BITSF(LD32(t2+12));
    f0 = BITSF(LD32(t2+16));
    f3 = BITSF(LD32(t2+8));
    f1 = f1 - f2;
    f4 = BITSF(LD32(t2+20));
    f0 = f0 - f3;
    f2 = BITSF(LD32(t2+24));
    f20 = f4 * f1;
    cnd_ = t0 == 0;
    f21 = f2 * f0;
    if (cnd_) { goto L_08A507A8; }
    goto L_08A50780;
L_08A50780:;
    v0 = D_08AF0284 - (644);
    f0 = BITSF(LD32(v0+644));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = f20 * f0;
    f0 = f21 * f0;
    f1 = f1 - f3;
    f2 = f2 - f0;
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_08A507A8;
L_08A507A8:;
    v1 = LD32(t2);
    ST32(s1+64, t1);
    v0 = 1;
    f12 = BITSF(LD32(t2+4));
    f13 = BITSF(LD32(t2+8));
    f2 = BITSF(LD32(t2+16));
    f0 = BITSF(LD32(t2+12));
    ST32(s1+84, v0);
    f1 = f12;
    f15 = f2 - f13;
    ST32(s1+80, v1);
    f14 = f0 - f12;
    cnd_ = a2 == 0;
    f3 = f13;
    if (cnd_) { goto L_08A507E8; }
    goto L_08A507E0;
L_08A507E0:;
    f14 = f1 - f0;
    f12 = f0;
    goto L_08A507E8;
L_08A507E8:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08A507F8; }
    goto L_08A507F0;
L_08A507F0:;
    f15 = f3 - f2;
    f13 = f2;
    goto L_08A507F8;
L_08A507F8:;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A50800;
L_08A50800:;
    f13 = BITSF(LD32(s0+4));
    f12 = BITSF(LD32(s0));
    a0 = s1 + 0;
    f14 = f20;
    f15 = f21;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A50818;
L_08A50818:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A50824;
L_08A50824:;
    sp = sp + 32;
    return;
}

/* 08A50840 */
u64 func_08A50840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A50840:;
    sp = sp - 32;
    v0 = D_08B2C12C - (-16084);
    t2 = a0 + 0;
    s1 = v0 - 16084;
    a0 = s1 + 0;
    s0 = a1 + 0;
    a2 = a2 & 0xff;
    a3 = a3 & 0xff;
    t0 = t0 & 0xff;
    cnd_ = t2 == 0;
    if (cnd_) { goto L_08A5094C; }
    goto L_08A5087C;
L_08A5087C:;
    f2 = BITSF(LD32(t2+16));
    f1 = BITSF(LD32(t2+24));
    f0 = BITSF(LD32(t2+28));
    f3 = BITSF(LD32(t2+20));
    f1 = f1 - f2;
    f4 = BITSF(LD32(t2+32));
    f0 = f0 - f3;
    f2 = BITSF(LD32(t2+36));
    f20 = f4 * f1;
    cnd_ = t0 == 0;
    f21 = f2 * f0;
    if (cnd_) { goto L_08A508D0; }
    goto L_08A508A8;
L_08A508A8:;
    v0 = D_08AF0288 - (648);
    f0 = BITSF(LD32(v0+648));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = f20 * f0;
    f0 = f21 * f0;
    f1 = f1 - f3;
    f2 = f2 - f0;
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_08A508D0;
L_08A508D0:;
    v1 = LD32(t2+12);
    ST32(s1+64, t1);
    v0 = 1;
    f12 = BITSF(LD32(t2+16));
    f13 = BITSF(LD32(t2+20));
    f2 = BITSF(LD32(t2+28));
    f0 = BITSF(LD32(t2+24));
    ST32(s1+84, v0);
    f1 = f12;
    f15 = f2 - f13;
    ST32(s1+80, v1);
    f14 = f0 - f12;
    cnd_ = a2 == 0;
    f3 = f13;
    if (cnd_) { goto L_08A50910; }
    goto L_08A50908;
L_08A50908:;
    f14 = f1 - f0;
    f12 = f0;
    goto L_08A50910;
L_08A50910:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08A50920; }
    goto L_08A50918;
L_08A50918:;
    f15 = f3 - f2;
    f13 = f2;
    goto L_08A50920;
L_08A50920:;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A50928;
L_08A50928:;
    f13 = BITSF(LD32(s0+4));
    f12 = BITSF(LD32(s0));
    a0 = s1 + 0;
    f14 = f20;
    f15 = f21;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A50940;
L_08A50940:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5094C;
L_08A5094C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A50968 */
void func_08A50968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A50968:;
    sp = sp - 48;
    v0 = D_08B1C8A4 - (-14172);
    v0 = v0 - 14172;
    a0 = a0 << 3;
    a0 = a0 + v0;
    s4 = a1 + 0;
    s3 = t1 + 0;
    s2 = t0 & 0xff;
    s1 = a3 & 0xff;
    s0 = a2 & 0xff;
    a0 = LD32(a0+4);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A509B0;
L_08A509B0:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    t0 = s2 + 0;
    t1 = s3 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A509E0; }
    goto L_08A509CC;
L_08A509CC:;
    f0 = BITSF(LD32(s4+4));
    f1 = BITSF(LD32(s4));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    { u64 r_ = func_08A50840(a0, a1, a2, a3, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A509E0;
L_08A509E0:;
    sp = sp + 48;
    return;
}

/* 08A50A00 */
void func_08A50A00(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A50A00:;
    sp = sp - 96;
    v0 = D_08B1C8A4 - (-14172);
    v1 = a0 << 3;
    v0 = v0 - 14172;
    v1 = v1 + v0;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s4 = a2 + 0;
    f20 = BITSF(0);
    f21 = f20;
    a0 = LD32(v1+4);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A50A60;
L_08A50A60:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AF028C - (652); goto L_08A50A94; }
    goto L_08A50A68;
L_08A50A68:;
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+24));
    f0 = BITSF(LD32(v0+28));
    f3 = BITSF(LD32(v0+20));
    f2 = f2 - f1;
    f4 = BITSF(LD32(v0+36));
    f0 = f0 - f3;
    f1 = BITSF(LD32(v0+32));
    f20 = f4 * f0;
    f21 = f1 * f2;
    v0 = D_08AF028C - (652);
    goto L_08A50A94;
L_08A50A94:;
    v1 = D_08AE5A14 - (23060);
    f22 = BITSF(LD32(v0+652));
    s7 = v1 + 23060;
    v0 = D_08AE5A18 - (23064);
    v1 = D_08C30870 - (2160);
    s6 = v0 + 23064;
    s1 = v1 + 2160;
    s0 = 0 + 0;
    s5 = sp + 16;
    f0 = BITSF(LD32(s1+4));
    goto L_08A50ABC;
L_08A50ABC:;
    f1 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s2));
    f0 = f0 * f20;
    f1 = f1 * f21;
    f2 = BITSF(LD32(s2+4));
    v0 = s0 + s7;
    f0 = f0 * f22;
    v1 = s0 + s6;
    f1 = f1 + f3;
    a2 = LD_U8(v0);
    f0 = f0 + f2;
    a3 = LD_U8(v1);
    a0 = s3 + 0;
    a1 = s5 + 0;
    t0 = 0 + 0;
    t1 = s4 + 0;
    s0 = s0 + 1;
    ST32(sp+16, FBITS(f1));
    s1 = s1 + 8;
    ST32(sp+20, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    func_08A50968(a0, a1, a2, a3, t0, t1);
    goto L_08A50B18;
L_08A50B18:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s1+4)); goto L_08A50ABC; }
    goto L_08A50B24;
L_08A50B24:;
    sp = sp + 96;
    return;
}

/* 08A50B5C */
u64 func_08A50B5C(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr8 = v[8];
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08A50B5C:;
    sp = sp - 144;
    v0 = D_08B1C8A4 - (-14172);
    v0 = v0 - 14172;
    a0 = a0 << 3;
    a0 = a0 + v0;
    s5 = D_08B2C12C - (-16084);
    s4 = 0 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = s5 - 16084;
    f21 = f12;
    f20 = f13;
    a0 = LD32(a0+4);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A50BC4;
L_08A50BC4:;
    s0 = v0 + 0;
    f12 = BITSF(LD32(v0+24));
    f13 = BITSF(LD32(v0+28));
    f14 = BITSF(LD32(v0+16));
    f15 = BITSF(LD32(v0+20));
    v0 = D_08AF0290 - (656);
    f1 = BITSF(LD32(v0+656));
    v0 = D_08AF0294 - (660);
    f0 = BITSF(LD32(v0+660));
    f1 = f21 * f1;
    f5 = f12 - f14;
    f6 = f13 - f15;
    f3 = BITSF(LD32(s0+32));
    f4 = f1 - f0;
    f2 = BITSF(LD32(s0+36));
    f3 = f3 * f5;
    f14 = f14 - f12;
    v0 = FBITS(f4);
    f2 = f2 * f6;
    f15 = f15 - f13;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    a0 = s1 + 0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f22 = f2 * f20;
    f20 = f3 * f20;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A50C34;
L_08A50C34:;
    v0 = D_08AF0298 - (664);
    v1 = LD32(s0+12);
    f0 = BITSF(LD32(v0+664));
    v0 = 1;
    ST32(s1+80, v1);
    f21 = f21 * f0;
    v1 = D_08AF02A0 - (672);
    ST32(s1+84, v0);
    v0 = D_08AF029C - (668);
    {vr8=0.63661977236f;}
    ST32(s1+64, s2);
    s0 = s1 + 0;
    f24 = BITSF(LD32(v0+668));
    f23 = BITSF(LD32(v1+672));
    goto L_08A50C6C;
L_08A50C6C:;
    f1 = BITSF(s4);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(s3));
    a0 = s0 + 0;
    a1 = 1;
    f0 = f0 * f24;
    ST32(s5-16084, FBITS(f1));
    s4 = s4 + 1;
    f0 = f21 + f0;
    f1 = BITSF(LD32(s3+4));
    f0 = f0 + f23;
    ST32(s0+16, FBITS(f1));
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float t0=vr8;float d0=s0*t0;vr0=d0;}
    {vr4=BITSF(v0);}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f1 = BITSF(LD32(s3));
    {float s0=vr4;float t0=vr8;float d0=s0*t0;vr4=d0;}
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    f4 = f20 * f0;
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    {vr0=BITSF(v0);}
    f1 = f1 + f4;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f5 = f20 * f0;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(s0+4, FBITS(f1));
    {vr4=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f1 = BITSF(LD32(s3+4));
    {float s0=vr0;float t0=vr8;float d0=s0*t0;vr0=d0;}
    {float s0=vr4;float t0=vr8;float d0=s0*t0;vr4=d0;}
    f1 = f1 - f5;
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    ST32(s0+20, FBITS(f1));
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s3));
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    f3 = f22 * f0;
    f1 = f1 + f4;
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    f1 = f1 + f3;
    f2 = f22 * f0;
    ST32(s0+8, FBITS(f1));
    f0 = BITSF(LD32(s3+4));
    f0 = f0 - f5;
    f0 = f0 + f2;
    ST32(s0+24, FBITS(f0));
    f1 = BITSF(LD32(s3));
    f1 = f1 + f3;
    ST32(s0+12, FBITS(f1));
    f0 = BITSF(LD32(s3+4));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f0 = f0 + f2;
    ST32(s0+28, FBITS(f0));
    { u64 r_ = ({ v[0]=vr0;v[4]=vr4;v[8]=vr8;__auto_type vr_t_ = func_088CF194(a0, a1); vr0=v[0];vr4=v[4];vr8=v[8];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A50D78;
L_08A50D78:;
    v0 = (s32)s4 < 4;
    cnd_ = v0 != 0;
    {u32 a_=sp+(64);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A50C6C; }
    goto L_08A50D84;
L_08A50D84:;
    sp = sp + 144;
    { v[0]=vr0;v[4]=vr4;v[8]=vr8;return (u64)v0 | ((u64)v1 << 32); }
    v[0]=vr0;v[4]=vr4;v[8]=vr8;
}

/* 08A50DBC */
rv_t func_08A50DBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A50DBC:;
    sp = sp - 48;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s4 = t1 + 0;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s0 = a2 & 0xff;
    f20 = f12;
    v0 = func_0897A064(a0, a1);
    goto L_08A50DFC;
L_08A50DFC:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = s1 + 0;
    a2 = s0 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    t1 = s4 + 0;
    { rv_t r_ = func_08A50E40(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A50E1C;
L_08A50E1C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A50E40 */
rv_t func_08A50E40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A50E40:;
    sp = sp - 48;
    s1 = a0 + 0;
    f0 = BITSF(0);
    a0 = a3 + 0;
    s4 = t1 + 0;
    s3 = a2 & 0xff;
    s2 = a1 + 0;
    s0 = t0 + 0;
    f21 = f12;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A50F04; }
    goto L_08A50E90;
L_08A50E90:;
    func_088CD5B0(a0);
    goto L_08A50E98;
L_08A50E98:;
    v0 = D_08AF02A4 - (676);
    v1 = D_08AF02A8 - (680);
    f22 = BITSF(LD32(v0+676));
    f23 = BITSF(LD32(v1+680));
    a0 = s1 + 0;
    f12 = f22;
    a1 = s0 + 0;
    f13 = f23;
    a2 = s4 + 0;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A50EC0;
L_08A50EC0:;
    f20 = f0;
    f13 = f0;
    f12 = f21;
    a0 = s0 + 0;
    cnd_ = s3 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A50F34; }
    goto L_08A50ED8;
L_08A50ED8:;
    f12 = BITSF(0);
    a1 = s2 + 0;
    a0 = s0 + 0;
    f13 = f21;
    f14 = f22;
    f15 = f23;
    a2 = s4 + 0;
    a3 = s1 + 0;
    t0 = s2 + 0;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A50F00;
L_08A50F00:;
    f0 = f20;
    goto L_08A50F04;
L_08A50F04:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A50F34:;
    f0 = func_08A50F44(a0, a1, f12, f13);
    goto L_08A50F3C;
L_08A50F3C:;
    f20 = f0;
    goto L_08A50ED8;
}

/* 08A50F44 */
float func_08A50F44(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08A50F44:;
    sp = sp - 112;
    v0 = D_08AF02AC - (684);
    f23 = BITSF(0);
    f0 = BITSF(LD32(v0+684));
    f2 = f13 - f0;
    fcc = FCMP(f23, f2, 12);
    cnd_ = !fcc;
    a2 = D_08AF02B4 - (692);
    if (cnd_) { goto L_08A50FE4; }
    goto L_08A50F90;
L_08A50F90:;
    v0 = D_08AF02B0 - (688);
    f0 = BITSF(LD32(v0+688));
    f1 = f2 * f0;
    fcc = FCMP(f23, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a2+692));
    if (cnd_) { goto L_08A51298; }
    goto L_08A50FAC;
L_08A50FAC:;
    f0 = f1 + f0;
    goto L_08A50FB0;
L_08A50FB0:;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(v0+688));
    f3 = (float)(s32)FBITS(f1);
    f0 = f2 * f0;
    f1 = BITSF(0);
    f0 = f0 - f3;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f23 = f1 + f3;
    if (cnd_) { goto L_08A50FE4; }
    goto L_08A50FD8;
L_08A50FD8:;
    v0 = D_08AF02B8 - (696);
    f1 = BITSF(LD32(v0+696));
    f23 = f1 + f3;
    goto L_08A50FE4;
L_08A50FE4:;
    v0 = a1 >> 24;
    f0 = BITSF(v0);
    v0 = D_08AF02C8 - (712);
    f3 = BITSF(LD32(v0+712));
    v0 = 255;
    f7 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = a1 & 0xff;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = (a1 >> 8) & 0xff;
    f8 = BITSF(v0);
    v0 = D_08AF02BC - (700);
    f1 = BITSF(LD32(v0+700));
    f7 = f7 * f3;
    a1 = (a1 >> 16) & 0xff;
    f9 = BITSF(a1);
    v0 = D_08AF02C0 - (704);
    f1 = f23 * f1;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+704));
    f10 = f7 * f6;
    f4 = (float)(s32)FBITS(f8);
    f5 = (float)(s32)FBITS(f9);
    f1 = f1 + f0;
    f0 = BITSF(0);
    f6 = f6 * f3;
    f2 = f2 * f3;
    f4 = f4 * f3;
    f5 = f5 * f3;
    fcc = FCMP(f0, f10, 12);
    v0 = D_08AF02C4 - (708);
    f0 = BITSF(LD32(v0+708));
    ST32(sp+24, FBITS(f2));
    a1 = sp + 0;
    f24 = f1 + f0;
    ST32(sp, FBITS(f6));
    ST32(sp+20, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+8, FBITS(f6));
    ST32(sp+4, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f7));
    if (cnd_) { goto L_08A5128C; }
    goto L_08A51094;
L_08A51094:;
    f0 = BITSF(LD32(a2+692));
    f0 = f10 + f0;
    goto L_08A5109C;
L_08A5109C:;
    v1 = D_08AF02CC - (716);
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(v1+716));
    a3 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s2 = a3 << 8;
    if (cnd_) { goto L_08A51280; }
    goto L_08A510C8;
L_08A510C8:;
    f0 = BITSF(LD32(a2+692));
    f0 = f2 + f0;
    goto L_08A510D0;
L_08A510D0:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a1+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1+716));
    s2 = s2 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s2 = s2 << 8;
    if (cnd_) { goto L_08A51274; }
    goto L_08A510FC;
L_08A510FC:;
    f0 = BITSF(LD32(a2+692));
    f0 = f1 + f0;
    goto L_08A51104;
L_08A51104:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a1+8));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1+716));
    s2 = s2 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s2 = s2 << 8;
    if (cnd_) { goto L_08A51268; }
    goto L_08A51130;
L_08A51130:;
    f0 = BITSF(LD32(a2+692));
    f0 = f1 + f0;
    goto L_08A51138;
L_08A51138:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+692));
    v0 = D_08AF02D4 - (724);
    f20 = BITSF(LD32(v0+724));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0+4));
    f2 = f13 * f1;
    f1 = f24 * f1;
    f0 = f0 + f12;
    v0 = D_08AF02D0 - (720);
    f22 = BITSF(LD32(v0+720));
    s2 = s2 + v1;
    f0 = f0 + f2;
    s3 = sp + 32;
    a0 = 33;
    a1 = s3 + 0;
    f0 = f0 - f1;
    a2 = 1;
    a3 = s2 + 0;
    ST32(sp+32, FBITS(f22));
    f21 = f0 + f20;
    f0 = BITSF(F2I(f23, 1));
    s1 = FBITS(f0);
    ST32(sp+36, FBITS(f21));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5119C;
L_08A5119C:;
    v0 = D_08AF02D8 - (728);
    f0 = BITSF(LD32(v0+728));
    fcc = FCMP(f0, f23, 14);
    cnd_ = !fcc;
    f21 = f21 + f20;
    if (cnd_) { goto L_08A511C8; }
    goto L_08A511B4;
L_08A511B4:;
    f0 = f23 - f0;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    s1 = FBITS(f0);
    s1 = s1 | v0;
    goto L_08A511C8;
L_08A511C8:;
    cnd_ = s1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A5120C; }
    goto L_08A511D0;
L_08A511D0:;
    v0 = D_08AF02DC - (732);
    f20 = BITSF(LD32(v0+732));
    f21 = f21 + f20;
    goto L_08A511DC;
L_08A511DC:;
    a0 = 32;
    a1 = s3 + 0;
    a2 = 1;
    a3 = s2 + 0;
    s0 = s0 + 1;
    ST32(sp+36, FBITS(f21));
    f21 = f21 + f20;
    ST32(sp+32, FBITS(f22));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51200;
L_08A51200:;
    v0 = s0 < s1;
    cnd_ = v0 != 0;
    if (cnd_) { f21 = f21 + f20; goto L_08A511DC; }
    goto L_08A5120C;
L_08A5120C:;
    v0 = D_08AF02E0 - (736);
    f0 = BITSF(LD32(v0+736));
    a1 = s3 + 0;
    a3 = s2 + 0;
    f21 = f21 + f0;
    a0 = 31;
    a2 = 1;
    ST32(sp+32, FBITS(f22));
    ST32(sp+36, FBITS(f21));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51234;
L_08A51234:;
    f0 = f24;
    sp = sp + 112;
    return f0;
L_08A51268:;
    f0 = BITSF(LD32(a2+692));
    f0 = f1 - f0;
    goto L_08A51138;
L_08A51274:;
    f0 = BITSF(LD32(a2+692));
    f0 = f1 - f0;
    goto L_08A51104;
L_08A51280:;
    f0 = BITSF(LD32(a2+692));
    f0 = f2 - f0;
    goto L_08A510D0;
L_08A5128C:;
    f0 = BITSF(LD32(a2+692));
    f0 = f10 - f0;
    goto L_08A5109C;
L_08A51298:;
    f0 = f1 - f0;
    goto L_08A50FB0;
}

/* 08A512A0 */
u32 func_08A512A0(u32 a0, float f12, float f13)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A512A0:;
    f12 = f12 / f13;
    sp = sp - 32;
    v0 = D_08AF02E4 - (740);
    a1 = sp + 4;
    a2 = sp + 8;
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0+740));
    a0 = sp + 0;
    ST32(sp+4, 0);
    ST32(sp+8, FBITS(f0));
    f0 = f0 - f12;
    ST32(sp, FBITS(f0));
    f0 = func_08A51980(a0, a1, a2);
    goto L_08A512DC;
L_08A512DC:;
    f12 = f0;
    a0 = s0 + 0;
    v0 = func_08A4FC78(a0, f12);
    goto L_08A512E8;
L_08A512E8:;
    sp = sp + 32;
    return v0;
}

/* 08A512F8 */
rv_t func_08A512F8(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A512F8:;
    sp = sp - 80;
    s2 = a2 + 0;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    f20 = f12;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08A513CC; }
    goto L_08A5132C;
L_08A5132C:;
    v0 = D_08B1C8A4 - (-14172);
    goto L_08A51330;
L_08A51330:;
    v1 = s0 << 3;
    v0 = v0 - 14172;
    v1 = v1 + v0;
    a0 = LD32(v1+4);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51344;
L_08A51344:;
    cnd_ = v0 == 0;
    s0 = sp + 16;
    if (cnd_) { goto L_08A51364; }
    goto L_08A5134C;
L_08A5134C:;
    f0 = BITSF(0);
    a1 = v0 + 0;
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A51380; }
    goto L_08A51364;
L_08A51364:;
    goto L_08A51368;
L_08A51368:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A51380:;
    func_08A5D6D0(a0, a1);
    goto L_08A51388;
L_08A51388:;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+28));
    f3 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1));
    f0 = f0 - f1;
    a1 = sp + 0;
    a0 = s0 + 0;
    a3 = s2 + 0;
    f0 = f0 * f20;
    a2 = 0 + 0;
    ST32(sp, FBITS(f2));
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f3));
    ST32(sp+28, FBITS(f1));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A513C4;
L_08A513C4:;
    goto L_08A51368;
L_08A513CC:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A513E0;
L_08A513E0:;
    v0 = D_08B1C8A4 - (-14172);
    goto L_08A51330;
}

/* 08A513E8 */
rv_t func_08A513E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A513E8:;
    sp = sp - 80;
    v0 = a1 + 0;
    a1 = sp + 0;
    s2 = a3 + 0;
    a3 = t0 + 0;
    s1 = a2 + 0;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a0 = v0 + 0;
    f20 = f12;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_08A514C8; }
    goto L_08A51428;
L_08A51428:;
    v0 = D_08B1C8A4 - (-14172);
    goto L_08A5142C;
L_08A5142C:;
    v1 = s0 << 3;
    v0 = v0 - 14172;
    v1 = v1 + v0;
    a0 = LD32(v1+4);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51440;
L_08A51440:;
    cnd_ = v0 == 0;
    s0 = sp + 16;
    if (cnd_) { goto L_08A51460; }
    goto L_08A51448;
L_08A51448:;
    f0 = BITSF(0);
    a1 = v0 + 0;
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A5147C; }
    goto L_08A51460;
L_08A51460:;
    goto L_08A51464;
L_08A51464:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A5147C:;
    func_08A5D6D0(a0, a1);
    goto L_08A51484;
L_08A51484:;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+28));
    f3 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1));
    f0 = f0 - f1;
    a1 = sp + 0;
    a0 = s0 + 0;
    a3 = s2 + 0;
    f0 = f0 * f20;
    a2 = 0 + 0;
    ST32(sp, FBITS(f2));
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f3));
    ST32(sp+28, FBITS(f1));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A514C0;
L_08A514C0:;
    goto L_08A51464;
L_08A514C8:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A514DC;
L_08A514DC:;
    v0 = D_08B1C8A4 - (-14172);
    goto L_08A5142C;
}

/* 08A514E4 */
u32 func_08A514E4(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A514E4:;
    v0 = D_08AF02EC - (748);
    f0 = BITSF(LD32(v0+748));
    v1 = D_08AF02E8 - (744);
    f2 = BITSF(LD32(v1+744));
    fcc = FCMP(f12, f0, 12);
    sp = sp - 16;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f2));
    if (cnd_) { goto L_08A5151C; }
    goto L_08A51510;
L_08A51510:;
    v0 = D_08AF02F0 - (752);
    f0 = BITSF(LD32(v0+752));
    f13 = f13 * f0;
    goto L_08A5151C;
L_08A5151C:;
    v0 = D_08AF02F4 - (756);
    f1 = BITSF(LD32(v0+756));
    fcc = FCMP(f13, f1, 14);
    cnd_ = !fcc;
    v0 = D_08AF02F8 - (760);
    if (cnd_) { goto L_08A51654; }
    goto L_08A51534;
L_08A51534:;
    f0 = BITSF(LD32(v0+760));
    ST32(sp, FBITS(f2));
    f0 = f13 * f0;
    ST32(sp+4, FBITS(f0));
    goto L_08A51544;
L_08A51544:;
    v1 = D_08AF02FC - (764);
    f0 = BITSF(LD32(v1+764));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A51644; }
    goto L_08A51568;
L_08A51568:;
    a1 = D_08AF0300 - (768);
    f0 = BITSF(LD32(a1+768));
    f0 = f1 + f0;
    goto L_08A51574;
L_08A51574:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v1+764));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A51638; }
    goto L_08A5159C;
L_08A5159C:;
    f0 = BITSF(LD32(a1+768));
    f0 = f2 + f0;
    goto L_08A515A4;
L_08A515A4:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+764));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A5162C; }
    goto L_08A515D0;
L_08A515D0:;
    f0 = BITSF(LD32(a1+768));
    f0 = f1 + f0;
    goto L_08A515D8;
L_08A515D8:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v1+764));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A51620; }
    goto L_08A51604;
L_08A51604:;
    f0 = BITSF(LD32(a1+768));
    f0 = f1 + f0;
    goto L_08A5160C;
L_08A5160C:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 16;
    return v0;
L_08A51620:;
    f0 = BITSF(LD32(a1+768));
    f0 = f1 - f0;
    goto L_08A5160C;
L_08A5162C:;
    f0 = BITSF(LD32(a1+768));
    f0 = f1 - f0;
    goto L_08A515D8;
L_08A51638:;
    f0 = BITSF(LD32(a1+768));
    f0 = f2 - f0;
    goto L_08A515A4;
L_08A51644:;
    a1 = D_08AF0300 - (768);
    f0 = BITSF(LD32(a1+768));
    f0 = f1 - f0;
    goto L_08A51574;
L_08A51654:;
    fcc = FCMP(f1, f13, 12);
    cnd_ = !fcc;
    v0 = D_08AF02F0 - (752);
    if (cnd_) { goto L_08A51694; }
    goto L_08A51664;
L_08A51664:;
    f0 = BITSF(LD32(v0+752));
    fcc = FCMP(f13, f0, 14);
    cnd_ = !fcc;
    v0 = D_08AF02F8 - (760);
    if (cnd_) { goto L_08A5169C; }
    goto L_08A51678;
L_08A51678:;
    f0 = f13 - f1;
    f1 = BITSF(LD32(v0+760));
    ST32(sp+4, FBITS(f2));
    f0 = f0 * f1;
    f0 = f2 - f0;
    ST32(sp, FBITS(f0));
    goto L_08A51544;
L_08A51694:;
    f0 = BITSF(LD32(v0+752));
    v0 = D_08AF02F8 - (760);
    goto L_08A5169C;
L_08A5169C:;
    f1 = BITSF(LD32(v0+760));
    f0 = f13 - f0;
    f2 = BITSF(LD32(v1+744));
    f0 = f0 * f1;
    f2 = f2 - f0;
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    goto L_08A51544;
}

/* 08A516BC */
u32 func_08A516BC(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A516BC:;
    v0 = a0 >> 24;
    f7 = BITSF(v0);
    v1 = a0 & 0xff;
    a2 = (a0 >> 8) & 0xff;
    v0 = D_08AF0308 - (776);
    a0 = (a0 >> 16) & 0xff;
    f0 = BITSF(LD32(v0+776));
    f1 = BITSF(v1);
    f5 = BITSF(a2);
    f6 = BITSF(a0);
    f13 = f13 * f0;
    f2 = (float)(s32)FBITS(f1);
    f3 = (float)(s32)FBITS(f5);
    f4 = (float)(s32)FBITS(f6);
    f1 = (float)(s32)FBITS(f7);
    v0 = D_08AF0304 - (772);
    f0 = BITSF(LD32(v0+772));
    fcc = FCMP(f12, f13, 14);
    sp = sp - 16;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    ST32(sp+12, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp, FBITS(f4));
    if (cnd_) { goto L_08A51848; }
    goto L_08A5172C;
L_08A5172C:;
    a1 = D_08AF0310 - (784);
    f1 = BITSF(LD32(a1+784));
    f0 = f1 / f13;
    f0 = f0 * f12;
    f1 = f0 + f1;
    goto L_08A51740;
L_08A51740:;
    v1 = D_08AF0314 - (788);
    f0 = BITSF(LD32(v1+788));
    ST32(sp+12, FBITS(f1));
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A5183C; }
    goto L_08A51764;
L_08A51764:;
    f0 = BITSF(LD32(a1+784));
    f0 = f1 + f0;
    goto L_08A5176C;
L_08A5176C:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v1+788));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A51830; }
    goto L_08A51794;
L_08A51794:;
    f0 = BITSF(LD32(a1+784));
    f0 = f2 + f0;
    goto L_08A5179C;
L_08A5179C:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+788));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A51824; }
    goto L_08A517C8;
L_08A517C8:;
    f0 = BITSF(LD32(a1+784));
    f0 = f1 + f0;
    goto L_08A517D0;
L_08A517D0:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v1+788));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A51818; }
    goto L_08A517FC;
L_08A517FC:;
    f0 = BITSF(LD32(a1+784));
    f0 = f1 + f0;
    goto L_08A51804;
L_08A51804:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 16;
    return v0;
L_08A51818:;
    f0 = BITSF(LD32(a1+784));
    f0 = f1 - f0;
    goto L_08A51804;
L_08A51824:;
    f0 = BITSF(LD32(a1+784));
    f0 = f1 - f0;
    goto L_08A517D0;
L_08A51830:;
    f0 = BITSF(LD32(a1+784));
    f0 = f2 - f0;
    goto L_08A5179C;
L_08A5183C:;
    f0 = BITSF(LD32(a1+784));
    f0 = f1 - f0;
    goto L_08A5176C;
L_08A51848:;
    fcc = FCMP(f13, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12 / f13; goto L_08A5187C; }
    goto L_08A51858;
L_08A51858:;
    f0 = f13 + f13;
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12 / f13; goto L_08A5187C; }
    goto L_08A5186C;
L_08A5186C:;
    v0 = D_08AF030C - (780);
    f1 = BITSF(LD32(v0+780));
    a1 = D_08AF0310 - (784);
    goto L_08A51740;
L_08A5187C:;
    a1 = D_08AF0310 - (784);
    f1 = BITSF(LD32(a1+784));
    f0 = f0 * f1;
    f1 = f1 - f0;
    goto L_08A51740;
}

/* 08A51890 */
rv_t func_08A51890(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A51890:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t4 = D_08C30870 - (2160);
    t2 = D_08C30890 - (2192);
    t3 = D_08C308A0 - (2208);
    t5 = D_08C308B0 - (2224);
    a1 = a1 & a0;
    a2 = t4 + 2160;
    a3 = t2 + 2192;
    t0 = t3 + 2208;
    cnd_ = a1 == 0;
    t1 = t5 + 2224;
    if (cnd_) { goto L_08A51978; }
    goto L_08A518C8;
L_08A518C8:;
    v0 = D_08AF031C - (796);
    f4 = BITSF(LD32(v0+796));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF0318 - (792);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f7 = BITSF(LD32(v1+792));
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
    ST32(a2+8, 0);
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(a2+24, 0);
    f3 = f3 * f4;
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    ST32(t1+12, FBITS(f1));
    ST32(t2+2192, FBITS(f2));
    ST32(t4+2160, FBITS(f7));
    ST32(t3+2208, FBITS(f6));
    ST32(a2+16, FBITS(f7));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f3));
    ST32(t0+12, FBITS(f1));
    ST32(t5+2224, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f3));
    ST32(t1+8, FBITS(f1));
    goto L_08A51978;
L_08A51978:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A51980 */
float func_08A51980(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A51980:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A519AC; }
    goto L_08A51998;
L_08A51998:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A519AC; }
    goto L_08A519AC;
L_08A519AC:;
    return f0;
}

/* 08A519B4 */
rv_t func_08A519B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A519B4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A51890(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A519C8;
L_08A519C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A519D4 */
void func_08A519D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A519D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A519E8;
L_08A519E8:;
    v0 = D_08B15438 - (21560);
    a0 = 1;
    v0 = v0 + 21560;
    v1 = 999;
    ST8(s0+38, a0);
    ST32(s0, v0);
    ST32(s0+20, v1);
    ST32(s0+16, 0);
    ST8(s0+24, 0);
    ST8(s0+36, 0);
    ST8(s0+37, a0);
    sp = sp + 16;
    return;
}

/* 08A51A24 */
rv_t func_08A51A24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A51A24:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51A4C;
L_08A51A4C:;
    v1 = LD32(s0+4);
    ST32(s0+20, v0);
    a0 = LD32(v1+24);
    a1 = LD32(a0);
    v0 = LD32(a1+200);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51A68;
L_08A51A68:;
    v1 = LD32(s0+4);
    ST8(s0+24, v0);
    a0 = LD32(v1+24);
    a1 = LD32(a0);
    v0 = LD32(a1+80);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51A84;
L_08A51A84:;
    ST32(s0+16, FBITS(f0));
    a0 = s0 + 0;
    { rv_t r_ = func_08A4FAC0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51A90;
L_08A51A90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A51AA0 */
rv_t func_08A51AA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_08A51AA0:;
    sp = sp - 192;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51AE0;
L_08A51AE0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A51DDC; }
    goto L_08A51AE8;
L_08A51AE8:;
    v0 = D_08B1C9D8 - (-13864);
    a0 = LD32(v0-13864);
    s3 = D_08AF0328 - (808);
    s2 = sp + 32;
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51AFC;
L_08A51AFC:;
    a1 = v0 + 0;
    a0 = sp + 0;
    func_08A5D6D0(a0, a1);
    goto L_08A51B08;
L_08A51B08:;
    v0 = D_08AF0320 - (800);
    f0 = BITSF(LD32(v0+800));
    f1 = BITSF(LD32(sp+20));
    v1 = D_08C30910 - (2320);
    a0 = v1 + 2320;
    f1 = f1 * f0;
    v0 = D_08AF0324 - (804);
    f3 = BITSF(LD32(v1+2320));
    f4 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(v0+804));
    f0 = BITSF(LD32(s3+808));
    a1 = s2 + 0;
    a0 = sp + 0;
    a2 = (u32)-1;
    ST32(sp+20, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f0));
    func_08A50588(a0, a1, a2);
    goto L_08A51B60;
L_08A51B60:;
    v0 = D_08AF0330 - (816);
    f1 = BITSF(LD32(v0+816));
    v0 = 255;
    f0 = BITSF(v0);
    a1 = 153;
    v0 = D_08AF032C - (812);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(a1);
    f4 = BITSF(LD32(v0+812));
    a1 = 192;
    f2 = f1 * f2;
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(0);
    v0 = 224;
    ST32(sp+60, FBITS(f1));
    fcc = FCMP(f0, f2, 12);
    f1 = BITSF(v0);
    f0 = BITSF(a1);
    f3 = f3 * f4;
    f2 = (float)(s32)FBITS(f1);
    f1 = (float)(s32)FBITS(f0);
    v1 = sp + 48;
    ST32(sp+48, FBITS(f3));
    f2 = f2 * f4;
    f1 = f1 * f4;
    a3 = 222;
    ST32(sp+56, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+52, FBITS(f1));
    if (cnd_) { goto L_08A51BD8; }
    goto L_08A51BD4;
L_08A51BD4:;
    a3 = 221;
    goto L_08A51BD8;
L_08A51BD8:;
    v0 = D_08AF0334 - (820);
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v0+820));
    f0 = BITSF(0);
    f2 = f2 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s1 = a3 << 8;
    if (cnd_) { goto L_08A51DCC; }
    goto L_08A51BFC;
L_08A51BFC:;
    a0 = D_08AF0338 - (824);
    f0 = BITSF(LD32(a0+824));
    f0 = f2 + f0;
    goto L_08A51C08;
L_08A51C08:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+820));
    a1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s1 = s1 + a1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 << 8;
    if (cnd_) { goto L_08A51DC0; }
    goto L_08A51C34;
L_08A51C34:;
    f0 = BITSF(LD32(a0+824));
    f0 = f1 + f0;
    goto L_08A51C3C;
L_08A51C3C:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+820));
    v0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s1 = s1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 << 8;
    if (cnd_) { goto L_08A51DB4; }
    goto L_08A51C68;
L_08A51C68:;
    f0 = BITSF(LD32(a0+824));
    f0 = f1 + f0;
    goto L_08A51C70;
L_08A51C70:;
    f0 = BITSF(F2I(f0, 1));
    s0 = sp + 64;
    a0 = s0 + 0;
    a1 = FBITS(f0);
    s1 = s1 + a1;
    func_08A5D69C(a0);
    goto L_08A51C88;
L_08A51C88:;
    v1 = D_08AF0340 - (832);
    f1 = BITSF(LD32(v1+832));
    f0 = BITSF(LD32(sp+20));
    v0 = D_08AF0344 - (836);
    f23 = BITSF(LD32(v0+836));
    f1 = f1 - f0;
    v0 = D_08AF033C - (828);
    f2 = BITSF(LD32(s3+808));
    f22 = BITSF(LD32(v0+828));
    f1 = f1 + f23;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a3 = s1 + 0;
    v0 = (u32)-1;
    a2 = 0 + 0;
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f1));
    ST32(sp+76, FBITS(f2));
    ST32(sp+64, v0);
    ST32(sp+88, FBITS(f22));
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A51CEC;
L_08A51CEC:;
    v0 = D_08AF0348 - (840);
    f21 = BITSF(LD32(v0+840));
    f0 = BITSF(LD32(sp+84));
    a0 = s0 + 0;
    a1 = s2 + 0;
    f0 = f21 - f0;
    a3 = s1 + 0;
    a2 = 0 + 0;
    ST32(sp+36, 0);
    ST32(sp+32, FBITS(f0));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A51D18;
L_08A51D18:;
    v0 = D_08AF034C - (844);
    f20 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(v0+844));
    f2 = f20 + f20;
    a0 = s0 + 0;
    f1 = f1 - f0;
    a1 = s2 + 0;
    f21 = f21 - f2;
    a3 = s1 + 0;
    f1 = f1 + f23;
    a2 = 0 + 0;
    ST32(sp+32, FBITS(f20));
    ST32(sp+88, FBITS(f1));
    ST32(sp+84, FBITS(f21));
    ST32(sp+36, 0);
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A51D5C;
L_08A51D5C:;
    a0 = s0 + 0;
    f0 = BITSF(LD32(sp+88));
    a1 = s2 + 0;
    a3 = s1 + 0;
    f22 = f22 - f0;
    a2 = 0 + 0;
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, FBITS(f22));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A51D80;
L_08A51D80:;
    goto L_08A51D84;
L_08A51D84:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_08A51DB4:;
    f0 = BITSF(LD32(a0+824));
    f0 = f1 - f0;
    goto L_08A51C70;
L_08A51DC0:;
    f0 = BITSF(LD32(a0+824));
    f0 = f1 - f0;
    goto L_08A51C3C;
L_08A51DCC:;
    a0 = D_08AF0338 - (824);
    f0 = BITSF(LD32(a0+824));
    f0 = f2 - f0;
    goto L_08A51C08;
L_08A51DDC:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+392);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51DF0;
L_08A51DF0:;
    cnd_ = v0 != 0;
    v0 = D_08C30910 - (2320);
    if (cnd_) { goto L_08A52184; }
    goto L_08A51DF8;
L_08A51DF8:;
    a3 = LD32(s1+4);
    goto L_08A51DFC;
L_08A51DFC:;
    v0 = LD32(a3+24);
    v0 = LD32(v0+92);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A51D84; }
    goto L_08A51E0C;
L_08A51E0C:;
    v1 = LD32(v0+12);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = D_08C2C200 - (-15872);
    if (cnd_) { goto L_08A51D84; }
    goto L_08A51E1C;
L_08A51E1C:;
    a2 = LD32(s1+20);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A51D84; }
    goto L_08A51E2C;
L_08A51E2C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A51E7C; }
    goto L_08A51E50;
L_08A51E50:;
    a0 = LD32(a1);
    goto L_08A51E54;
L_08A51E54:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A52164; }
    goto L_08A51E6C;
L_08A51E6C:;
    a1 = LD32(a1+4);
    goto L_08A51E70;
L_08A51E70:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A51E54; }
    goto L_08A51E78;
L_08A51E78:;
    s2 = 0 + 0;
    goto L_08A51E7C;
L_08A51E7C:;
    cnd_ = s2 == 0;
    s4 = 0xffff0000u;
    if (cnd_) { goto L_08A51D80; }
    goto L_08A51E84;
L_08A51E84:;
    v0 = LD32(a3+24);
    ST32(sp+96, 0);
    a0 = v0 + 0;
    ST32(sp+100, 0);
    s3 = 0 + 0;
    ST32(sp+104, 0);
    v1 = LD32(v0);
    v0 = LD32(v1+388);
    t_ = v0;
    f21 = BITSF(LD32(sp+96));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51EAC;
L_08A51EAC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A52144; }
    goto L_08A51EB4;
L_08A51EB4:;
    v0 = LD32(s2);
    f12 = BITSF(LD32(s1+16));
    s0 = sp + 96;
    v1 = LD32(v0+56);
    a2 = s3 + 0;
    a0 = s2 + 0;
    t_ = v1;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51ED4;
L_08A51ED4:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51EE0;
L_08A51EE0:;
    f0 = BITSF(LD32(sp+104));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A51D84; }
    goto L_08A51EF4;
L_08A51EF4:;
    f0 = BITSF(LD32(sp+96));
    a0 = (u32)-1;
    ST32(sp+112, 0);
    s3 = D_08AF0328 - (808);
    s0 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    f0 = BITSF(LD32(sp+100));
    ST32(sp+36, FBITS(f0));
    v0 = func_08A5FB08(a0);
    goto L_08A51F18;
L_08A51F18:;
    a0 = 0xde350000u;
    a2 = sp + 112;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51F2C;
L_08A51F2C:;
    f22 = BITSF(LD32(s3+808));
    a0 = LD32(sp+112);
    a1 = 0x4db00000u;
    a1 = a1 | 0xf6a9;
    f12 = f22;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51F44;
L_08A51F44:;
    v0 = D_08AF0350 - (848);
    f12 = BITSF(LD32(v0+848));
    a0 = LD32(sp+112);
    a1 = 0x15600000u;
    a1 = a1 | 0x269;
    f24 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51F60;
L_08A51F60:;
    v0 = D_08AF0354 - (852);
    f12 = BITSF(LD32(v0+852));
    a0 = LD32(sp+112);
    a1 = 0x32010000u;
    a1 = a1 | 0x73f2;
    f20 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51F7C;
L_08A51F7C:;
    v0 = LD32(s1+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    f23 = f0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A51F94;
L_08A51F94:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A52124; }
    goto L_08A51F9C;
L_08A51F9C:;
    v0 = LD_U8(s1+24);
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s1+16)); goto L_08A51FD8; }
    goto L_08A51FA8;
L_08A51FA8:;
    v0 = 1;
    f12 = f21;
    f21 = f22;
    ST8(s1+38, v0);
    ST8(s1+37, v0);
    goto L_08A51FBC;
L_08A51FBC:;
    a1 = sp + 32;
    f13 = f21;
    a2 = s4 + 0;
    a0 = 23;
    { u64 r_ = func_08A50B5C(a0, a1, a2, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A51FD0;
L_08A51FD0:;
    goto L_08A51D84;
L_08A51FD8:;
    fcc = FCMP(f1, f24, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A51FF8; }
    goto L_08A51FE8;
L_08A51FE8:;
    f0 = f22 / f24;
    f21 = f22;
    goto L_08A51FF0;
L_08A51FF0:;
    f12 = f1 * f0;
    goto L_08A51FBC;
L_08A51FF8:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s1+37); goto L_08A52014; }
    goto L_08A52008;
L_08A52008:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A52088; }
    goto L_08A52010;
L_08A52010:;
    v0 = LD_U8(s1+37);
    goto L_08A52014;
L_08A52014:;
    cnd_ = v0 != 0;
    a0 = 0x55800000u;
    if (cnd_) { goto L_08A52044; }
    goto L_08A5201C;
L_08A5201C:;
    v0 = D_08AF0358 - (856);
    f12 = BITSF(LD32(s1+12));
    f13 = BITSF(LD32(v0+856));
    a0 = 0xffff0000u;
    v0 = func_08A516BC(a0, f12, f13);
    goto L_08A52030;
L_08A52030:;
    s4 = v0 + 0;
    v0 = D_08AF0338 - (824);
    f12 = f21;
    f21 = BITSF(LD32(v0+824));
    goto L_08A51FBC;
L_08A52044:;
    a1 = 0 + 0;
    a0 = a0 | 0xd8ff;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A52050;
L_08A52050:;
    s0 = v0 + 0;
    v0 = LD32(s1+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5206C;
L_08A5206C:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    f12 = f22;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52080;
L_08A52080:;
    ST8(s1+37, 0);
    goto L_08A5201C;
L_08A52088:;
    fcc = FCMP(f1, f23, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+38); goto L_08A520B0; }
    goto L_08A52098;
L_08A52098:;
    f0 = f23 - f20;
    v0 = D_08AF0338 - (824);
    f1 = f1 - f20;
    f21 = BITSF(LD32(v0+824));
    f0 = f22 / f0;
    goto L_08A51FF0;
L_08A520B0:;
    cnd_ = v0 != 0;
    a0 = 0x55800000u;
    if (cnd_) { goto L_08A520E0; }
    goto L_08A520B8;
L_08A520B8:;
    v0 = D_08AF0358 - (856);
    f12 = BITSF(LD32(s1+12));
    f13 = BITSF(LD32(v0+856));
    a0 = 0xffff0000u;
    v0 = func_08A516BC(a0, f12, f13);
    goto L_08A520CC;
L_08A520CC:;
    s4 = v0 + 0;
    v0 = D_08AF035C - (860);
    f12 = f21;
    f21 = BITSF(LD32(v0+860));
    goto L_08A51FBC;
L_08A520E0:;
    a1 = 0 + 0;
    a0 = a0 | 0xd8ff;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A520EC;
L_08A520EC:;
    s0 = v0 + 0;
    v0 = LD32(s1+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52108;
L_08A52108:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    f12 = f22;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5211C;
L_08A5211C:;
    ST8(s1+38, 0);
    goto L_08A520B8;
L_08A52124:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52138;
L_08A52138:;
    v1 = LD_U8(v0+324);
    s0 = 0 < v1;
    goto L_08A51F9C;
L_08A52144:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52158;
L_08A52158:;
    v1 = LD_U8(v0+324);
    s3 = 0 < v1;
    goto L_08A51EB4;
L_08A52164:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A51E6C; }
    goto L_08A52170;
L_08A52170:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A51E70; }
    goto L_08A5217C;
L_08A5217C:;
    goto L_08A51E7C;
L_08A52184:;
    v1 = v0 + 2320;
    f0 = BITSF(LD32(v0+2320));
    f1 = BITSF(LD32(v1+4));
    a1 = sp + 32;
    a0 = 0 + 0;
    a2 = 1;
    a3 = (u32)-1;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A521AC;
L_08A521AC:;
    a3 = LD32(s1+4);
    goto L_08A51DFC;
}

/* 08A521B4 */
rv_t func_08A521B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A521B4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C308C0 - (2240);
    t4 = D_08C308D0 - (2256);
    t5 = D_08C308E0 - (2272);
    t6 = D_08C308F0 - (2288);
    t2 = D_08C30910 - (2320);
    a1 = a1 & a0;
    a2 = t6 + 2288;
    a3 = t3 + 2240;
    t0 = t4 + 2256;
    t1 = t5 + 2272;
    cnd_ = a1 == 0;
    t7 = t2 + 2320;
    if (cnd_) { goto L_08A522BC; }
    goto L_08A521F4;
L_08A521F4:;
    v0 = D_08AF0370 - (880);
    f3 = BITSF(LD32(v0+880));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF0374 - (884);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+8, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF0378 - (888);
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0+888));
    v0 = D_08AF037C - (892);
    f4 = f4 * f3;
    ST32(a2+24, 0);
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    f7 = BITSF(LD32(v1+884));
    ST32(t1+12, FBITS(f1));
    ST32(t2+2320, FBITS(f0));
    f0 = BITSF(LD32(v0+892));
    ST32(t3+2240, FBITS(f2));
    ST32(t4+2256, FBITS(f6));
    ST32(t7+4, FBITS(f0));
    ST32(t5+2272, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t6+2288, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A522BC;
L_08A522BC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A522C4 */
rv_t func_08A522C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A522C4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A521B4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A522D8;
L_08A522D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A522E4 */
void func_08A522E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A522E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A522F8;
L_08A522F8:;
    v0 = D_08B15460 - (21600);
    v0 = v0 + 21600;
    v1 = 999;
    ST32(s0, v0);
    ST32(s0+20, v1);
    ST8(s0+48, 0);
    ST32(s0+16, 0);
    ST8(s0+24, 0);
    ST32(s0+36, 0);
    ST8(s0+40, 0);
    ST32(s0+44, 0);
    sp = sp + 16;
    return;
}

/* 08A52334 */
rv_t func_08A52334(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A52334:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5235C;
L_08A5235C:;
    a0 = LD32(s0+4);
    ST32(s0+20, v0);
    v1 = LD32(a0+24);
    v0 = LD_U8(v1+468);
    a0 = v1 + 0;
    cnd_ = v0 == 0;
    ST8(s0+24, v0);
    if (cnd_) { goto L_08A52388; }
    goto L_08A52378;
L_08A52378:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A52388:;
    f0 = func_089C6524(a0, 0, 0, 0);
    goto L_08A52390;
L_08A52390:;
    v1 = LD32(s0+4);
    ST32(s0+44, FBITS(f0));
    a0 = LD32(v1+24);
    v0 = LD32(a0);
    v1 = LD32(v0+80);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A523AC;
L_08A523AC:;
    ST32(s0+16, FBITS(f0));
    goto L_08A52378;
}

/* 08A523B4 */
rv_t func_08A523B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08A523B4:;
    sp = sp - 128;
    a1 = sp + 0;
    s1 = a0 + 0;
    f20 = BITSF(0);
    v0 = LD32(a0+4);
    ST32(sp, FBITS(f20));
    a2 = LD32(v0+24);
    ST32(sp+4, FBITS(f20));
    ST32(sp+8, FBITS(f20));
    v0 = LD32(a2);
    v1 = LD32(v0+380);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52404;
L_08A52404:;
    a0 = sp + 0;
    a1 = 1;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52410;
L_08A52410:;
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    fcc = FCMP(f20, f0, 12);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+16, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+20, FBITS(f0));
    if (cnd_) { goto L_08A52650; }
    goto L_08A5242C;
L_08A5242C:;
    a2 = LD32(s1+20);
    goto L_08A52430;
L_08A52430:;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A5256C; }
    goto L_08A52440;
L_08A52440:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A52490; }
    goto L_08A52464;
L_08A52464:;
    a0 = LD32(a1);
    goto L_08A52468;
L_08A52468:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A52630; }
    goto L_08A52480;
L_08A52480:;
    a1 = LD32(a1+4);
    goto L_08A52484;
L_08A52484:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A52468; }
    goto L_08A5248C;
L_08A5248C:;
    v1 = 0 + 0;
    goto L_08A52490;
L_08A52490:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A52570; }
    goto L_08A52498;
L_08A52498:;
    v0 = LD32(v1);
    f21 = BITSF(0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s3 = sp + 32;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A524B8;
L_08A524B8:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = LD32(s1+4);
    ST32(sp+48, FBITS(f0));
    a0 = LD32(v0+24);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A524E8;
L_08A524E8:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    a0 = sp + 48;
    a1 = 1;
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+32, FBITS(f21));
    ST32(sp+36, FBITS(f21));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52514;
L_08A52514:;
    f0 = BITSF(LD32(sp+56));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A52570; }
    goto L_08A52528;
L_08A52528:;
    v0 = LD_U8(s1+24);
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    ST32(sp+32, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(sp+36, FBITS(f1));
    if (cnd_) { goto L_08A525D8; }
    goto L_08A52540;
L_08A52540:;
    v0 = LD_U8(s1+48);
    cnd_ = v0 != 0;
    s2 = D_08AF0380 - (896);
    if (cnd_) { goto L_08A52590; }
    goto L_08A5254C;
L_08A5254C:;
    f21 = BITSF(LD32(s2+896));
    goto L_08A52550;
L_08A52550:;
    a1 = s3 + 0;
    a0 = 23;
    f12 = f21;
    f13 = f21;
    a2 = 0xffff0000u;
    goto L_08A52564;
L_08A52564:;
    { u64 r_ = func_08A50B5C(a0, a1, a2, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5256C;
L_08A5256C:;
    goto L_08A52570;
L_08A52570:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08A52590:;
    a0 = 0x55800000u;
    a1 = 0 + 0;
    a0 = a0 | 0xd8ff;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A525A0;
L_08A525A0:;
    s0 = v0 + 0;
    v0 = LD32(s1+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    f21 = BITSF(LD32(s2+896));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A525BC;
L_08A525BC:;
    f12 = BITSF(LD32(s2+896));
    a0 = s0 + 0;
    a2 = v0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A525D0;
L_08A525D0:;
    ST8(s1+48, 0);
    goto L_08A52550;
L_08A525D8:;
    f1 = BITSF(LD32(s1+16));
    fcc = FCMP(f1, f21, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08A52570; }
    goto L_08A525EC;
L_08A525EC:;
    f0 = BITSF(LD32(s1+44));
    v0 = 1;
    ST8(s1+48, v0);
    f21 = f1 / f0;
    v0 = D_08AF0380 - (896);
    f20 = BITSF(LD32(v0+896));
    a0 = s1 + 0;
    a1 = (u32)-1;
    a2 = 0xffff0000u;
    f12 = f21;
    v0 = func_08A5269C(a1, a2, f12);
    goto L_08A52618;
L_08A52618:;
    a2 = v0 + 0;
    a1 = s3 + 0;
    f12 = f21;
    f13 = f20;
    a0 = 23;
    goto L_08A52564;
L_08A52630:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A52480; }
    goto L_08A5263C;
L_08A5263C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A52484; }
    goto L_08A52648;
L_08A52648:;
    goto L_08A52490;
L_08A52650:;
    v0 = LD32(s1+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+392);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52668;
L_08A52668:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s1+20); goto L_08A52430; }
    goto L_08A52670;
L_08A52670:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a1 = sp + 32;
    a0 = 0 + 0;
    a2 = 1;
    a3 = (u32)-1;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A52694;
L_08A52694:;
    a2 = LD32(s1+20);
    goto L_08A52430;
}

/* 08A5269C */
u32 func_08A5269C(u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A5269C:;
    sp = sp - 96;
    v0 = a1 >> 24;
    v1 = a2 >> 24;
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    v0 = D_08AF0384 - (900);
    f14 = (float)(s32)FBITS(f0);
    f15 = (float)(s32)FBITS(f1);
    f0 = BITSF(LD32(v0+900));
    v0 = D_08AF0388 - (904);
    f1 = BITSF(LD32(v0+904));
    a0 = a1 & 0xff;
    f15 = f15 * f0;
    f1 = f1 - f12;
    f14 = f14 * f0;
    f2 = BITSF(a0);
    v0 = (a1 >> 8) & 0xff;
    a0 = (a2 >> 8) & 0xff;
    a1 = (a1 >> 16) & 0xff;
    v1 = a2 & 0xff;
    a2 = (a2 >> 16) & 0xff;
    f4 = BITSF(a1);
    f11 = BITSF(a0);
    f3 = BITSF(v0);
    f10 = BITSF(v1);
    f13 = BITSF(a2);
    f19 = f14 * f1;
    f20 = f15 * f12;
    f5 = (float)(s32)FBITS(f2);
    f6 = (float)(s32)FBITS(f3);
    f7 = (float)(s32)FBITS(f4);
    f8 = (float)(s32)FBITS(f10);
    f9 = (float)(s32)FBITS(f11);
    f10 = (float)(s32)FBITS(f13);
    f5 = f5 * f0;
    f6 = f6 * f0;
    f7 = f7 * f0;
    f8 = f8 * f0;
    f9 = f9 * f0;
    f10 = f10 * f0;
    f18 = f19 + f20;
    a1 = D_08AF038C - (908);
    f0 = BITSF(LD32(a1+908));
    f11 = f7 * f1;
    f13 = f6 * f1;
    f16 = f10 * f12;
    f17 = f9 * f12;
    f21 = f18 * f0;
    f1 = f5 * f1;
    f12 = f8 * f12;
    f0 = BITSF(0);
    f2 = f11 + f16;
    f3 = f13 + f17;
    f4 = f1 + f12;
    fcc = FCMP(f0, f21, 12);
    ST32(sp+32, FBITS(f2));
    a0 = sp + 32;
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+4, FBITS(f6));
    ST32(sp, FBITS(f7));
    ST32(sp+12, FBITS(f14));
    ST32(sp+24, FBITS(f8));
    ST32(sp+20, FBITS(f9));
    ST32(sp+16, FBITS(f10));
    ST32(sp+28, FBITS(f15));
    ST32(sp+48, FBITS(f11));
    ST32(sp+52, FBITS(f13));
    ST32(sp+56, FBITS(f1));
    ST32(sp+60, FBITS(f19));
    ST32(sp+64, FBITS(f16));
    ST32(sp+68, FBITS(f17));
    ST32(sp+72, FBITS(f12));
    ST32(sp+76, FBITS(f20));
    cnd_ = !fcc;
    ST32(sp+44, FBITS(f18));
    if (cnd_) { goto L_08A528BC; }
    goto L_08A527D8;
L_08A527D8:;
    v1 = D_08AF0390 - (912);
    f0 = BITSF(LD32(v1+912));
    f0 = f21 + f0;
    goto L_08A527E4;
L_08A527E4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a1+908));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A528B0; }
    goto L_08A5280C;
L_08A5280C:;
    f0 = BITSF(LD32(v1+912));
    f0 = f2 + f0;
    goto L_08A52814;
L_08A52814:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+908));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A528A4; }
    goto L_08A52840;
L_08A52840:;
    f0 = BITSF(LD32(v1+912));
    f0 = f1 + f0;
    goto L_08A52848;
L_08A52848:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1+908));
    a0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A52898; }
    goto L_08A52874;
L_08A52874:;
    f0 = BITSF(LD32(v1+912));
    f0 = f1 + f0;
    goto L_08A5287C;
L_08A5287C:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 96;
    return v0;
L_08A52898:;
    f0 = BITSF(LD32(v1+912));
    f0 = f1 - f0;
    goto L_08A5287C;
L_08A528A4:;
    f0 = BITSF(LD32(v1+912));
    f0 = f1 - f0;
    goto L_08A52848;
L_08A528B0:;
    f0 = BITSF(LD32(v1+912));
    f0 = f2 - f0;
    goto L_08A52814;
L_08A528BC:;
    v1 = D_08AF0390 - (912);
    f0 = BITSF(LD32(v1+912));
    f0 = f21 - f0;
    goto L_08A527E4;
}

/* 08A528CC */
rv_t func_08A528CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A528CC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30918 - (2328);
    t4 = D_08C30928 - (2344);
    t5 = D_08C30938 - (2360);
    t6 = D_08C30948 - (2376);
    t2 = D_08C30968 - (2408);
    a1 = a1 & a0;
    a2 = t6 + 2376;
    a3 = t3 + 2328;
    t0 = t4 + 2344;
    t1 = t5 + 2360;
    cnd_ = a1 == 0;
    t7 = t2 + 2408;
    if (cnd_) { goto L_08A529D4; }
    goto L_08A5290C;
L_08A5290C:;
    v0 = D_08AF03A8 - (936);
    f3 = BITSF(LD32(v0+936));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF03AC - (940);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+8, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF03B0 - (944);
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0+944));
    v0 = D_08AF03B4 - (948);
    f4 = f4 * f3;
    ST32(a2+24, 0);
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    f7 = BITSF(LD32(v1+940));
    ST32(t1+12, FBITS(f1));
    ST32(t2+2408, FBITS(f0));
    f0 = BITSF(LD32(v0+948));
    ST32(t3+2328, FBITS(f2));
    ST32(t4+2344, FBITS(f6));
    ST32(t7+4, FBITS(f0));
    ST32(t5+2360, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t6+2376, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A529D4;
L_08A529D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A529DC */
rv_t func_08A529DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A529DC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A528CC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A529F0;
L_08A529F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A529FC */
void func_08A529FC(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A529FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A52A10;
L_08A52A10:;
    v0 = D_08B15488 - (21640);
    v0 = v0 + 21640;
    ST32(s0, v0);
    ST8(s0+72, 0);
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
    ST32(s0+60, 0);
    ST8(s0+64, 0);
    ST8(s0+65, 0);
    ST8(s0+66, 0);
    ST32(s0+68, 0);
    sp = sp + 16;
    return;
}

/* 08A52A70 */
rv_t func_08A52A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A52A70:;
    sp = sp - 16;
    s0 = D_08AE5A1C - (23068);
    s0 = s0 + 23068;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A52A94;
L_08A52A94:;
    a0 = s0 + 0;
    ST32(s1+32, v0);
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A52AA0;
L_08A52AA0:;
    ST32(s1+36, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A52ABC */
rv_t func_08A52ABC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A52ABC:;
    v0 = 1;
    ST32(a0+60, 0);
    ST32(a0+56, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08A52ACC */
rv_t func_08A52ACC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A52ACC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    v0 = LD32(a0+24);
    v1 = LD_U8(v0+195);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(a0+24); goto L_08A52B04; }
    goto L_08A52AF8;
L_08A52AF8:;
    ST32(s0+60, 0);
    ST32(s0+56, 0);
    a0 = LD32(a0+24);
    goto L_08A52B04;
L_08A52B04:;
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52B14;
L_08A52B14:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A52D98; }
    goto L_08A52B1C;
L_08A52B1C:;
    a0 = LD32(s0+4);
    v0 = 1;
    ST8(s0+66, v0);
    a1 = LD32(a0+24);
    v1 = LD32(s1);
    a3 = LD32(a1);
    v1 = v1 ^ 0x2;
    a2 = v1 < 0x1u;
    v0 = LD32(a3-16);
    v1 = 0x8005;
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A52D88; }
    goto L_08A52B54;
L_08A52B54:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A52D74; }
    goto L_08A52B5C;
L_08A52B5C:;
    ST32(s0+16, v0);
    goto L_08A52B60;
L_08A52B60:;
    a0 = (u32)-1;
    v0 = LD32(s1+80);
    cnd_ = v0 == 0;
    v1 = LD32(s1+88);
    if (cnd_) { goto L_08A52B78; }
    goto L_08A52B70;
L_08A52B70:;
    { s32 x_ = (s32)v1, y_ = (s32)v0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    a0 = lo;
    goto L_08A52B78;
L_08A52B78:;
    ST32(s0+20, a0);
    a0 = s1 + 0;
    v0 = func_08A1C290(a0);
    goto L_08A52B84;
L_08A52B84:;
    ST32(s0+48, v0);
    v0 = LD32(s0+40);
    v1 = LD32(s1+188);
    cnd_ = v0 == v1;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A52D60; }
    goto L_08A52B98;
L_08A52B98:;
    ST32(s0+40, v1);
    ST32(s0+56, 0);
    goto L_08A52BA0;
L_08A52BA0:;
    v0 = LD32(s0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+384);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52BB8;
L_08A52BB8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A52D58; }
    goto L_08A52BC0;
L_08A52BC0:;
    a0 = LD32(s0+4);
    v0 = 1;
    ST8(s0+65, v0);
    a1 = LD32(a0+24);
    v1 = LD32(s1);
    a2 = LD32(a1);
    v1 = v1 ^ 0x2;
    s2 = v1 < 0x1u;
    v0 = LD32(a2-16);
    v1 = 0x8005;
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A52D48; }
    goto L_08A52BF8;
L_08A52BF8:;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A52D34; }
    goto L_08A52C00;
L_08A52C00:;
    ST32(s0+24, v0);
    goto L_08A52C04;
L_08A52C04:;
    a0 = (u32)-1;
    v0 = LD32(s1+80);
    cnd_ = v0 == 0;
    v1 = LD32(s1+88);
    if (cnd_) { goto L_08A52C1C; }
    goto L_08A52C14;
L_08A52C14:;
    { s32 x_ = (s32)v1, y_ = (s32)v0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    a0 = lo;
    goto L_08A52C1C;
L_08A52C1C:;
    ST32(s0+28, a0);
    a0 = s1 + 0;
    v0 = func_08A1C290(a0);
    goto L_08A52C28;
L_08A52C28:;
    ST32(s0+52, v0);
    a0 = 0 + 0;
    v0 = LD32(s1);
    v1 = LD32(s1+364);
    v0 = v0 ^ 0xd;
    v1 = (v1 >> 4) & 0x1;
    v0 = v0 < 0x1u;
    cnd_ = v0 != 0;
    ST8(s0+64, v1);
    if (cnd_) { goto L_08A52C54; }
    goto L_08A52C4C;
L_08A52C4C:;
    cnd_ = s2 == 0;
    if (cnd_) { ST8(s0+72, a0); goto L_08A52CB4; }
    goto L_08A52C54;
L_08A52C54:;
    a0 = 1;
    cnd_ = s2 == 0;
    ST8(s0+72, a0);
    if (cnd_) { goto L_08A52CB4; }
    goto L_08A52C60;
L_08A52C60:;
    f1 = BITSF(LD32(s1+68));
    f3 = BITSF(0);
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    v1 = D_08AF03B8 - (952);
    if (cnd_) { goto L_08A52D2C; }
    goto L_08A52C78;
L_08A52C78:;
    f0 = BITSF(LD32(s1+44));
    f2 = BITSF(LD32(v1+952));
    f0 = f0 / f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    f1 = f3;
    if (cnd_) { goto L_08A52CAC; }
    goto L_08A52C98;
L_08A52C98:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f1 = f2;
    if (cnd_) { goto L_08A52CAC; }
    goto L_08A52CA8;
L_08A52CA8:;
    f1 = f0;
    goto L_08A52CAC;
L_08A52CAC:;
    f0 = f1;
    goto L_08A52CB0;
L_08A52CB0:;
    ST32(s0+68, FBITS(f0));
    goto L_08A52CB4;
L_08A52CB4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+188); goto L_08A52CEC; }
    goto L_08A52CBC;
L_08A52CBC:;
    v0 = LD32(s1+364);
    f1 = BITSF(0);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    v1 = D_08AF03B8 - (952);
    if (cnd_) { goto L_08A52CDC; }
    goto L_08A52CD0;
L_08A52CD0:;
    f1 = BITSF(LD32(s1+180));
    f0 = BITSF(LD32(s1+44));
    f1 = f0 / f1;
    goto L_08A52CDC;
L_08A52CDC:;
    f0 = BITSF(LD32(v1+952));
    f0 = f0 - f1;
    ST32(s0+68, FBITS(f0));
    v1 = LD32(s1+188);
    goto L_08A52CEC;
L_08A52CEC:;
    v0 = LD32(s0+44);
    cnd_ = v0 == v1;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A52D18; }
    goto L_08A52CF8;
L_08A52CF8:;
    ST32(s0+44, v1);
    goto L_08A52CFC;
L_08A52CFC:;
    ST32(s0+60, 0);
    goto L_08A52D00;
L_08A52D00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A52D18:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+60));
    f0 = f0 + f1;
    ST32(s0+60, FBITS(f0));
    goto L_08A52D00;
L_08A52D2C:;
    f0 = BITSF(LD32(v1+952));
    goto L_08A52CB0;
L_08A52D34:;
    v0 = LD32(a2+236);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52D40;
L_08A52D40:;
    ST32(s0+24, v0);
    goto L_08A52C04;
L_08A52D48:;
    cnd_ = s2 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A52C00; }
    goto L_08A52D50;
L_08A52D50:;
    v0 = LD32(s1+84);
    goto L_08A52C00;
L_08A52D58:;
    ST8(s0+65, 0);
    goto L_08A52CFC;
L_08A52D60:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+56));
    f0 = f0 + f1;
    ST32(s0+56, FBITS(f0));
    goto L_08A52BA0;
L_08A52D74:;
    v0 = LD32(a3+232);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52D80;
L_08A52D80:;
    ST32(s0+16, v0);
    goto L_08A52B60;
L_08A52D88:;
    cnd_ = a2 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A52B5C; }
    goto L_08A52D90;
L_08A52D90:;
    v0 = LD32(s1+84);
    goto L_08A52B5C;
L_08A52D98:;
    ST32(s0+56, 0);
    ST8(s0+66, 0);
    goto L_08A52BA0;
}

/* 08A52DA4 */
rv_t func_08A52DA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A52DA4:;
    sp = sp - 16;
    v0 = LD_U8(a0+66);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A52DE8; }
    goto L_08A52DBC;
L_08A52DBC:;
    v0 = LD_U8(s0+65);
    goto L_08A52DC0;
L_08A52DC0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A52DD8; }
    goto L_08A52DC8;
L_08A52DC8:;
    goto L_08A52DCC;
L_08A52DCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A52DD8:;
    { rv_t r_ = func_08A52FF4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52DE0;
L_08A52DE0:;
    goto L_08A52DCC;
L_08A52DE8:;
    { rv_t r_ = func_08A52DF8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52DF0;
L_08A52DF0:;
    v0 = LD_U8(s0+65);
    goto L_08A52DC0;
}

/* 08A52DF8 */
rv_t func_08A52DF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A52DF8:;
    sp = sp - 64;
    s2 = sp + 16;
    v0 = LD32(a0+48);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A52EB0; }
    goto L_08A52E1C;
L_08A52E1C:;
    v1 = LD_U8(a0+65);
    v0 = D_08C309C0 - (2496);
    v0 = v0 + 2496;
    cnd_ = v1 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08A52E38; }
    goto L_08A52E30;
L_08A52E30:;
    v0 = D_08C309C8 - (2504);
    v0 = v0 + 2504;
    goto L_08A52E38;
L_08A52E38:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    a0 = LD32(s0+48);
    ST32(a2+4, FBITS(f0));
    s2 = sp + 16;
    a1 = s2 + 0;
    ST32(a2, FBITS(f1));
    a3 = (u32)-1;
    a2 = 1;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    s1 = s2 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    func_08A4FE18(a0, a1, a2, a3);
    goto L_08A52E74;
L_08A52E74:;
    v0 = D_08C309E0 - (2528);
    v1 = LD_U8(s0+65);
    cnd_ = v1 != 0;
    v0 = v0 + 2528;
    if (cnd_) { goto L_08A52E8C; }
    goto L_08A52E84;
L_08A52E84:;
    v0 = D_08C309E8 - (2536);
    v0 = v0 + 2536;
    goto L_08A52E8C;
L_08A52E8C:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f12 = BITSF(LD32(s0+56));
    a2 = LD32(s0+40);
    ST32(s1, FBITS(f0));
    a1 = s1 + 0;
    a0 = s0 + 0;
    ST32(s1+4, FBITS(f1));
    func_08A5318C(a0, a1, a2, f12);
    goto L_08A52EB0;
L_08A52EB0:;
    v1 = LD_U8(s0+65);
    v0 = D_08C309D0 - (2512);
    cnd_ = v1 != 0;
    v0 = v0 + 2512;
    if (cnd_) { goto L_08A52EC8; }
    goto L_08A52EC0;
L_08A52EC0:;
    v0 = D_08C309D8 - (2520);
    v0 = v0 + 2520;
    goto L_08A52EC8;
L_08A52EC8:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    a0 = 3;
    ST32(s2+4, FBITS(f0));
    a1 = sp + 0;
    a2 = 1;
    ST32(s2, FBITS(f1));
    a3 = (u32)-1;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A52EFC;
L_08A52EFC:;
    v0 = LD32(s0+16);
    cnd_ = (s32)v0 < 0;
    v0 = D_08C30A00 - (2560);
    if (cnd_) { goto L_08A52F9C; }
    goto L_08A52F08;
L_08A52F08:;
    v1 = LD_U8(s0+65);
    v0 = v0 + 2560;
    cnd_ = v1 != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08A52F20; }
    goto L_08A52F18;
L_08A52F18:;
    v0 = D_08C30A08 - (2568);
    v0 = v0 + 2568;
    goto L_08A52F20;
L_08A52F20:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    a2 = LD32(s0+16);
    ST32(a3+4, FBITS(f0));
    a0 = s0 + 0;
    a1 = sp + 0;
    ST32(a3, FBITS(f1));
    { rv_t r_ = func_08A5323C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52F40;
L_08A52F40:;
    v0 = LD32(s0+20);
    goto L_08A52F44;
L_08A52F44:;
    cnd_ = (s32)v0 < 0;
    v0 = D_08C30A10 - (2576);
    if (cnd_) { goto L_08A52F84; }
    goto L_08A52F4C;
L_08A52F4C:;
    v1 = LD_U8(s0+65);
    v0 = v0 + 2576;
    cnd_ = v1 != 0;
    a2 = sp + 32;
    if (cnd_) { goto L_08A52F64; }
    goto L_08A52F5C;
L_08A52F5C:;
    v0 = D_08C30A18 - (2584);
    v0 = v0 + 2584;
    goto L_08A52F64;
L_08A52F64:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    a1 = a2 + 0;
    ST32(a2+4, FBITS(f0));
    a0 = s0 + 0;
    ST32(a2, FBITS(f1));
    a2 = LD32(s0+20);
    { rv_t r_ = func_08A5323C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A52F84;
L_08A52F84:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A52F9C:;
    v1 = LD_U8(s0+65);
    v0 = D_08C309F0 - (2544);
    v0 = v0 + 2544;
    cnd_ = v1 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08A52FB8; }
    goto L_08A52FB0;
L_08A52FB0:;
    v0 = D_08C309F8 - (2552);
    v0 = v0 + 2552;
    goto L_08A52FB8;
L_08A52FB8:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    a1 = sp + 32;
    ST32(a2+4, FBITS(f0));
    a0 = 36;
    a3 = 0xff000000u;
    ST32(a2, FBITS(f1));
    a2 = 1;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A52FEC;
L_08A52FEC:;
    v0 = LD32(s0+20);
    goto L_08A52F44;
}

/* 08A52FF4 */
rv_t func_08A52FF4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A52FF4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+52);
    cnd_ = a0 != 0;
    v0 = D_08C309C8 - (2504);
    if (cnd_) { goto L_08A53148; }
    goto L_08A53010;
L_08A53010:;
    v0 = D_08C309D8 - (2520);
    goto L_08A53014;
L_08A53014:;
    v1 = v0 + 2520;
    f0 = BITSF(LD32(v0+2520));
    f1 = BITSF(LD32(v1+4));
    a0 = 3;
    a1 = sp + 0;
    a2 = 1;
    a3 = (u32)-1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5303C;
L_08A5303C:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+72); goto L_08A530D4; }
    goto L_08A53048;
L_08A53048:;
    v0 = LD32(s0+24);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = LD_U8(s0+72); goto L_08A530A0; }
    goto L_08A53054;
L_08A53054:;
    a0 = LD32(s0+32);
    func_088CD5B0(a0);
    goto L_08A5305C;
L_08A5305C:;
    a0 = 159;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A53068;
L_08A53068:;
    v1 = D_08C30A20 - (2592);
    a0 = v1 + 2592;
    f12 = BITSF(LD32(v1+2592));
    v1 = D_08AF03BC - (956);
    f13 = BITSF(LD32(a0+4));
    f14 = BITSF(LD32(v1+956));
    a2 = v0 + 0;
    a0 = 0xff000000u;
    a1 = 4132;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53090;
L_08A53090:;
    goto L_08A53094;
L_08A53094:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A530A0:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A53094; }
    goto L_08A530A8;
L_08A530A8:;
    f12 = BITSF(LD32(s0+68));
    goto L_08A530AC;
L_08A530AC:;
    a3 = 0xff400000u;
    a3 = a3 | 0x4040;
    a2 = D_08C30A28 - (2600);
    a2 = a2 + 2600;
    a0 = 34;
    a1 = 35;
    t0 = a3 + 0;
    { rv_t r_ = func_08A513E8(a0, a1, a2, a3, t0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A530CC;
L_08A530CC:;
    goto L_08A53094;
L_08A530D4:;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0+68)); goto L_08A530AC; }
    goto L_08A530DC;
L_08A530DC:;
    a2 = LD32(s0+24);
    cnd_ = (s32)a2 < 0;
    a1 = D_08C30A08 - (2568);
    if (cnd_) { goto L_08A53114; }
    goto L_08A530E8;
L_08A530E8:;
    a1 = a1 + 2568;
    a0 = s0 + 0;
    { rv_t r_ = func_08A5323C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A530F4;
L_08A530F4:;
    a2 = LD32(s0+28);
    goto L_08A530F8;
L_08A530F8:;
    cnd_ = (s32)a2 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A53090; }
    goto L_08A53100;
L_08A53100:;
    a1 = D_08C30A18 - (2584);
    a1 = a1 + 2584;
    { rv_t r_ = func_08A5323C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5310C;
L_08A5310C:;
    goto L_08A53094;
L_08A53114:;
    v0 = D_08C309F8 - (2552);
    v1 = v0 + 2552;
    f0 = BITSF(LD32(v0+2552));
    f1 = BITSF(LD32(v1+4));
    a0 = 36;
    a1 = sp + 0;
    a2 = 1;
    a3 = 0xff000000u;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53140;
L_08A53140:;
    a2 = LD32(s0+28);
    goto L_08A530F8;
L_08A53148:;
    v1 = v0 + 2504;
    f0 = BITSF(LD32(v0+2504));
    f1 = BITSF(LD32(v1+4));
    a1 = sp + 0;
    a2 = 1;
    a3 = (u32)-1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    func_08A4FE18(a0, a1, a2, a3);
    goto L_08A5316C;
L_08A5316C:;
    a1 = D_08C309E8 - (2536);
    f12 = BITSF(LD32(s0+60));
    a2 = LD32(s0+44);
    a1 = a1 + 2536;
    a0 = s0 + 0;
    func_08A5318C(a0, a1, a2, f12);
    goto L_08A53184;
L_08A53184:;
    v0 = D_08C309D8 - (2520);
    goto L_08A53014;
}

/* 08A5318C */
void func_08A5318C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5318C:;
    sp = sp - 32;
    v0 = D_08AF03C0 - (960);
    s1 = a1 + 0;
    s0 = a2 + 0;
    f21 = BITSF(LD32(v0+960));
    fcc = FCMP(f12, f21, 12);
    cnd_ = !fcc;
    f20 = f12;
    if (cnd_) { goto L_08A531D4; }
    goto L_08A531C4;
L_08A531C4:;
    v0 = D_08C30FA8 - (4008);
    v1 = LD_U8(v0+4008);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A531F0; }
    goto L_08A531D4;
L_08A531D4:;
    goto L_08A531D8;
L_08A531D8:;
    sp = sp + 32;
    return;
L_08A531F0:;
    a0 = LD32(a0+32);
    func_088CD5B0(a0);
    goto L_08A531F8;
L_08A531F8:;
    a0 = s0 + 0;
    v0 = func_08834304(a0);
    goto L_08A53200;
L_08A53200:;
    f12 = f20;
    f13 = f21;
    a0 = (u32)-1;
    s0 = v0 + 0;
    v0 = func_08A512A0(a0, f12, f13);
    goto L_08A53214;
L_08A53214:;
    v1 = D_08AF03C4 - (964);
    f13 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s1));
    f14 = BITSF(LD32(v1+964));
    a0 = v0 + 0;
    a2 = s0 + 0;
    a1 = 4132;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53234;
L_08A53234:;
    goto L_08A531D8;
}

/* 08A5323C */
rv_t func_08A5323C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 272);
L_08A5323C:;
    sp = sp - 272;
    s1 = a1 + 0;
    s0 = a2 + 0;
    a0 = LD32(a0+32);
    func_088CD5B0(a0);
    goto L_08A5325C;
L_08A5325C:;
    a1 = D_08AE5A44 - (23108);
    t0 = s0 + 0;
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 23108;
    a2 = 128;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53278;
L_08A53278:;
    v0 = D_08AF03C8 - (968);
    f13 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s1));
    f14 = BITSF(LD32(v0+968));
    a0 = 0xff000000u;
    a1 = 4132;
    a2 = sp + 0;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53298;
L_08A53298:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
}

/* 08A532AC */
rv_t func_08A532AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A532AC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    t8 = a1 & a0;
    cnd_ = t8 == 0;
    if (cnd_) { goto L_08A5350C; }
    goto L_08A532D8;
L_08A532D8:;
    v0 = D_08AF03CC - (972);
    f1 = BITSF(LD32(v0+972));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AF03D4 - (980);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f8 = BITSF(LD32(v1+980));
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
    v0 = D_08AF03D0 - (976);
    f5 = f5 * f1;
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+976));
    v0 = D_08AF03D8 - (984);
    f4 = f4 * f1;
    f3 = f3 * f1;
    v1 = D_08AF03E0 - (992);
    f1 = BITSF(LD32(v0+984));
    v0 = D_08AF03DC - (988);
    f7 = BITSF(LD32(v1+992));
    f9 = BITSF(LD32(v0+988));
    a3 = D_08C30970 - (2416);
    t0 = D_08C30980 - (2432);
    t3 = D_08C30990 - (2448);
    t4 = D_08C309A0 - (2464);
    t5 = D_08C309C0 - (2496);
    t1 = D_08C309C8 - (2504);
    t6 = D_08C309D0 - (2512);
    v0 = t4 + 2464;
    v1 = a3 + 2416;
    a0 = t0 + 2432;
    a1 = t3 + 2448;
    t2 = D_08C309D8 - (2520);
    t7 = t5 + 2496;
    s0 = t1 + 2504;
    a2 = t6 + 2512;
    ST32(a1+12, FBITS(f2));
    s2 = t2 + 2520;
    s1 = D_08C309E0 - (2528);
    ST32(a3+2416, FBITS(f3));
    s3 = s1 + 2528;
    a3 = D_08C309E8 - (2536);
    ST32(t0+2432, FBITS(f5));
    t0 = a3 + 2536;
    ST32(a2+4, FBITS(f1));
    ST32(t1+2504, FBITS(f8));
    ST32(t2+2520, FBITS(f7));
    ST32(t3+2448, FBITS(f2));
    ST32(v1+4, FBITS(f4));
    ST32(v1+12, FBITS(f2));
    ST32(a0+4, FBITS(f6));
    ST32(a0+12, FBITS(f2));
    ST32(t4+2464, FBITS(f0));
    ST32(v0+28, 0);
    ST32(v0+16, FBITS(f0));
    ST32(t7+4, FBITS(f1));
    ST32(t5+2496, FBITS(f8));
    ST32(s0+4, FBITS(f9));
    ST32(t6+2512, FBITS(f7));
    ST32(v1+8, FBITS(f5));
    ST32(a1+4, FBITS(f2));
    ST32(a0+8, FBITS(f6));
    ST32(a1+8, FBITS(f2));
    ST32(v0+4, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(v0+8, 0);
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    v0 = D_08AF03E4 - (996);
    ST32(s2+4, FBITS(f9));
    f1 = BITSF(LD32(v0+996));
    v0 = D_08AF03E8 - (1000);
    f0 = BITSF(LD32(v0+1000));
    v0 = D_08AF03EC - (1004);
    ST32(a3+2536, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1004));
    ST32(s1+2528, FBITS(f1));
    cnd_ = t8 == 0;
    ST32(t0+4, FBITS(f0));
    if (cnd_) { goto L_08A5350C; }
    goto L_08A53444;
L_08A53444:;
    v0 = D_08AF03F0 - (1008);
    f1 = BITSF(LD32(v0+1008));
    v0 = D_08AF03F8 - (1016);
    f4 = BITSF(LD32(v0+1016));
    v0 = D_08AF0400 - (1024);
    f2 = BITSF(LD32(v0+1024));
    v0 = D_08AF03D8 - (984);
    f0 = BITSF(LD32(v0+984));
    v1 = D_08AF03F4 - (1012);
    f5 = BITSF(LD32(v1+1012));
    t5 = D_08C309F0 - (2544);
    v1 = D_08AF03FC - (1020);
    f3 = BITSF(LD32(v1+1020));
    v0 = D_08AF0404 - (1028);
    v1 = t5 + 2544;
    ST32(v1+4, FBITS(f0));
    t6 = D_08C309F8 - (2552);
    s0 = D_08C30A10 - (2576);
    f0 = BITSF(LD32(v0+1028));
    t0 = D_08C30A18 - (2584);
    t1 = D_08C30A20 - (2592);
    v0 = D_08AF0408 - (1032);
    a1 = t6 + 2552;
    a0 = s0 + 2576;
    a2 = t0 + 2584;
    t2 = t1 + 2592;
    ST32(a1+4, FBITS(f9));
    t3 = D_08C30A28 - (2600);
    t7 = D_08C30A00 - (2560);
    ST32(a0+4, FBITS(f4));
    a3 = D_08C30A08 - (2568);
    s1 = t7 + 2560;
    ST32(a2+4, FBITS(f3));
    s2 = a3 + 2568;
    t4 = t3 + 2600;
    ST32(t2+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1032));
    v0 = D_08AF040C - (1036);
    ST32(a3+2568, FBITS(f5));
    ST32(t3+2600, FBITS(f0));
    f0 = BITSF(LD32(v0+1036));
    ST32(t0+2584, FBITS(f2));
    ST32(t4+4, FBITS(f0));
    ST32(t1+2592, FBITS(f1));
    ST32(s1+4, FBITS(f4));
    ST32(t5+2544, FBITS(f1));
    ST32(t6+2552, FBITS(f1));
    ST32(t7+2560, FBITS(f5));
    ST32(s2+4, FBITS(f3));
    ST32(s0+2576, FBITS(f2));
    goto L_08A5350C;
L_08A5350C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A53524 */
rv_t func_08A53524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A53524:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A532AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53538;
L_08A53538:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A53544 */
void func_08A53544(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A53544:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A53558;
L_08A53558:;
    v0 = D_08B154B0 - (21680);
    v0 = v0 + 21680;
    ST32(s0, v0);
    ST32(s0+16, 0);
    sp = sp + 16;
    return;
}

/* 08A53578 */
rv_t func_08A53578(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A53578:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE5A4C - (23116);
    a0 = a0 + 23116;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53594;
L_08A53594:;
    ST32(s0+16, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A535AC */
rv_t func_08A535AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A535AC:;
    sp = sp - 64;
    s2 = a0 + 0;
    { rv_t r_ = func_08A4FAC0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A535D4;
L_08A535D4:;
    v0 = D_08C30A90 - (2704);
    v1 = LD32(v0+2704);
    v0 = v0 + 2704;
    ST32(sp, v0);
    cnd_ = v1 == 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_08A536C4; }
    goto L_08A535EC;
L_08A535EC:;
    v0 = D_08AF0410 - (1040);
    f20 = BITSF(LD32(v0+1040));
    s4 = 1;
    s3 = D_08B285A0 - (-31328);
    s1 = LD32(v1);
    goto L_08A53600;
L_08A53600:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53608;
L_08A53608:;
    a0 = LD32(s1);
    v1 = LD32(a0+116);
    f1 = BITSF(LD32(a0+100));
    f0 = BITSF(LD32(a0+96));
    v0 = LD32(a0+84);
    a1 = LD32(a0+88);
    v1 = (v1 >> 1) & 0x1;
    ST32(s1+12, FBITS(f0));
    ST32(s1+16, FBITS(f1));
    ST8(s1+20, v1);
    ST32(s1+4, v0);
    ST32(s1+8, a1);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53654;
L_08A53654:;
    s0 = v0 + 0;
    v0 = LD32(s2+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53670;
L_08A53670:;
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(v0));
    f1 = f1 - f3;
    f0 = f0 - f2;
    f1 = f1 * f1;
    f0 = f0 * f0;
    f0 = f0 + f1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+24, 0); goto L_08A536E8; }
    goto L_08A536A4;
L_08A536A4:;
    f0 = BITSF(LD32(s1+24));
    f1 = BITSF(LD32(s3-31328));
    ST8(s1+21, s4);
    f0 = f0 + f1;
    ST32(s1+24, FBITS(f0));
    goto L_08A536B8;
L_08A536B8:;
    v1 = LD32(sp+4);
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_08A53600; }
    goto L_08A536C4;
L_08A536C4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A536E8:;
    ST8(s1+21, 0);
    goto L_08A536B8;
}

/* 08A536F0 */
rv_t func_08A536F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A536F0:;
    sp = sp - 48;
    s3 = D_08C30A90 - (2704);
    s0 = a0 + 0;
    s1 = LD32(a0+84);
    s2 = LD32(a0+88);
    f20 = BITSF(LD32(a0+100));
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5372C;
L_08A5372C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    f12 = f20;
    s4 = v0 + 0;
    func_08A53F90(a0, a1, a2, a3, f12);
    goto L_08A53748;
L_08A53748:;
    v0 = s3 + 2704;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    a0 = 12;
    if (cnd_) { goto L_08A537BC; }
    goto L_08A53758;
L_08A53758:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53760;
L_08A53760:;
    v1 = LD32(s3+2704);
    goto L_08A53764;
L_08A53764:;
    ST32(v0, s4);
    a0 = s3 + 2704;
    ST32(v0+4, 0);
    cnd_ = v1 == 0;
    ST32(v0+8, v1);
    if (cnd_) { goto L_08A537B4; }
    goto L_08A53778;
L_08A53778:;
    ST32(v1+4, v0);
    goto L_08A5377C;
L_08A5377C:;
    v1 = s3 + 2704;
    ST32(s3+2704, v0);
    v0 = LD32(v1+16);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A537B4:;
    ST32(a0+4, v0);
    goto L_08A5377C;
L_08A537BC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A537C4;
L_08A537C4:;
    v1 = LD32(s3+2704);
    goto L_08A53764;
}

/* 08A537CC */
void func_08A537CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A537CC:;
    sp = sp - 48;
    s2 = D_08C30A90 - (2704);
    v0 = s2 + 2704;
    s1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53800;
L_08A53800:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    s3 = s2 + 0;
    if (cnd_) { goto L_08A5382C; }
    goto L_08A5380C;
L_08A5380C:;
    s0 = LD32(v0);
    goto L_08A53810;
L_08A53810:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53818;
L_08A53818:;
    v0 = LD32(s0);
    cnd_ = v0 == s1;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A53848; }
    goto L_08A53824;
L_08A53824:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A53810; }
    goto L_08A5382C;
L_08A5382C:;
    goto L_08A53830;
L_08A53830:;
    sp = sp + 48;
    return;
L_08A53848:;
    a0 = LD32(s2+2704);
    cnd_ = a0 == 0;
    s1 = s3 + 2704;
    if (cnd_) { goto L_08A5386C; }
    goto L_08A53854;
L_08A53854:;
    v0 = LD32(a0);
    goto L_08A53858;
L_08A53858:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08A5387C; }
    goto L_08A53860;
L_08A53860:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A53858; }
    goto L_08A5386C;
L_08A5386C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53874;
L_08A53874:;
    goto L_08A53830;
L_08A5387C:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08A538CC; }
    goto L_08A53884;
L_08A53884:;
    ST32(v1+4, v0);
    goto L_08A53888;
L_08A53888:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+2704, v1); goto L_08A53898; }
    goto L_08A53894;
L_08A53894:;
    ST32(v0+8, v1);
    goto L_08A53898;
L_08A53898:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A538BC; }
    goto L_08A538A4;
L_08A538A4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A538AC;
L_08A538AC:;
    v0 = LD32(s1+16);
    goto L_08A538B0;
L_08A538B0:;
    v0 = v0 - 1;
    ST32(s1+16, v0);
    goto L_08A5386C;
L_08A538BC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A538C4;
L_08A538C4:;
    v0 = LD32(s1+16);
    goto L_08A538B0;
L_08A538CC:;
    ST32(s1+4, v0);
    v1 = LD32(a0+8);
    goto L_08A53888;
}

/* 08A538D8 */
u32 func_08A538D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A538D8:;
    sp = sp - 32;
    v0 = D_08C30A90 - (2704);
    v0 = v0 + 2704;
    s1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53904;
L_08A53904:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A53928; }
    goto L_08A53910;
L_08A53910:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_08A53928:;
    s0 = LD32(s0);
    goto L_08A5392C;
L_08A5392C:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53934;
L_08A53934:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    a0 = LD32(v1-16);
    v0 = v0 + a0;
    v1 = LD32(v0+4);
    cnd_ = v1 == s1;
    a1 = 1;
    if (cnd_) { goto L_08A53910; }
    goto L_08A53950;
L_08A53950:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08A5392C; }
    goto L_08A5395C;
L_08A5395C:;
    a1 = 0 + 0;
    goto L_08A53910;
}

/* 08A53964 */
rv_t func_08A53964(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08A53964:;
    sp = sp - 128;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A539C4;
L_08A539C4:;
    v1 = 999;
    cnd_ = v0 == v1;
    v0 = D_08C30A90 - (2704);
    if (cnd_) { goto L_08A53A18; }
    goto L_08A539D0;
L_08A539D0:;
    goto L_08A539D4;
L_08A539D4:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08A53A18:;
    a0 = sp + 0;
    v0 = v0 + 2704;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53A2C;
L_08A53A2C:;
    a0 = LD32(sp+4);
    cnd_ = a0 == 0;
    v0 = D_08AF041C - (1052);
    if (cnd_) { goto L_08A539D0; }
    goto L_08A53A38;
L_08A53A38:;
    f23 = BITSF(LD32(v0+1052));
    v0 = D_08AF0424 - (1060);
    v1 = D_08AF0420 - (1056);
    f25 = BITSF(LD32(v0+1060));
    f24 = BITSF(LD32(v1+1056));
    v1 = D_08C30A80 - (2688);
    s5 = v1 + 2688;
    s7 = D_08AF0418 - (1048);
    s6 = D_08AF0414 - (1044);
    fp = D_08C30FA8 - (4008);
    s0 = LD32(a0);
    goto L_08A53A64;
L_08A53A64:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1AEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53A6C;
L_08A53A6C:;
    a0 = LD32(s0);
    s3 = D_08C30A80 - (2688);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+12);
    t_ = v0;
    s4 = s3 + 2688;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53A90;
L_08A53A90:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = LD_U8(s0+21);
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    cnd_ = v0 != 0;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_08A53AC4; }
    goto L_08A53AB0;
L_08A53AB0:;
    a0 = LD32(sp+4);
    goto L_08A53AB4;
L_08A53AB4:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08A53A64; }
    goto L_08A53ABC;
L_08A53ABC:;
    goto L_08A539D4;
L_08A53AC4:;
    a0 = LD32(s1+16);
    func_088CD5B0(a0);
    goto L_08A53ACC;
L_08A53ACC:;
    a0 = LD32(s0);
    v1 = LD32(a0);
    v0 = LD32(v1+88);
    t_ = v0;
    f21 = BITSF(LD32(s7+1048));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53AE0;
L_08A53AE0:;
    f22 = BITSF(LD32(s6+1044));
    a0 = v0 + 0;
    a1 = s4 + 0;
    f12 = f21;
    f13 = f22;
    a2 = 388;
    s2 = v0 + 0;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53B00;
L_08A53B00:;
    f20 = f0;
    f0 = BITSF(LD32(s0+24));
    fcc = FCMP(f0, f23, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s3+2688));
    if (cnd_) { goto L_08A53B44; }
    goto L_08A53B18;
L_08A53B18:;
    f12 = BITSF(0);
    v0 = LD_U8(fp+4008);
    a0 = s4 + 0;
    f14 = f21;
    f15 = f22;
    a3 = s2 + 0;
    a1 = (u32)-1;
    a2 = 388;
    cnd_ = v0 == 0;
    f13 = f12;
    if (cnd_) { goto L_08A53B84; }
    goto L_08A53B40;
L_08A53B40:;
    f0 = BITSF(LD32(s3+2688));
    goto L_08A53B44;
L_08A53B44:;
    f1 = BITSF(LD32(s5+8));
    f2 = BITSF(LD32(s5+4));
    a1 = s0 + 0;
    f1 = f1 + f0;
    f2 = f2 + f20;
    a0 = s1 + 0;
    f1 = f1 * f24;
    f2 = f2 + f23;
    f1 = f1 - f25;
    f13 = f2;
    ST32(sp+36, FBITS(f2));
    f12 = f1;
    ST32(sp+32, FBITS(f1));
    { u64 r_ = func_08A53B94(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53B7C;
L_08A53B7C:;
    a0 = LD32(sp+4);
    goto L_08A53AB4;
L_08A53B84:;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53B8C;
L_08A53B8C:;
    f0 = BITSF(LD32(s3+2688));
    goto L_08A53B44;
}

/* 08A53B94 */
u64 func_08A53B94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A53B94:;
    sp = sp - 96;
    s6 = D_08AF0428 - (1064);
    s4 = a0 + 0;
    s2 = 0xff800000u;
    s2 = s2 | 0x8080;
    s1 = a1 + 0;
    f22 = f12;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    f21 = f13;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A53BF4;
L_08A53BF4:;
    s3 = v0 + 0;
    v0 = LD_U8(s1+20);
    s0 = LD32(s1+4);
    cnd_ = v0 != 0;
    f12 = BITSF(LD32(s6+1064));
    if (cnd_) { goto L_08A53D98; }
    goto L_08A53C08;
L_08A53C08:;
    f1 = BITSF(LD32(s1+16));
    f0 = BITSF(LD32(s1+12));
    s5 = D_08AF042C - (1068);
    v0 = 4;
    f20 = f1 / f0;
    cnd_ = s0 == v0;
    f1 = BITSF(LD32(s5+1068));
    if (cnd_) { goto L_08A53D54; }
    goto L_08A53C24;
L_08A53C24:;
    cnd_ = s0 == s3;
    f0 = BITSF(LD32(s5+1068));
    if (cnd_) { goto L_08A53D24; }
    goto L_08A53C2C;
L_08A53C2C:;
    v1 = s0 ^ s3;
    v0 = s0 ^ 0x4;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    f0 = BITSF(LD32(s5+1068));
    if (cnd_) { goto L_08A53CF8; }
    goto L_08A53C48;
L_08A53C48:;
    a1 = 0xff800000u;
    a1 = a1 | 0x8080;
    a2 = s2 + 0;
    a0 = s4 + 0;
    f13 = f22;
    f14 = f21;
    { u64 r_ = func_08A53DBC(a0, a1, a2, f12, f13, f14); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53C64;
L_08A53C64:;
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A53C78; }
    goto L_08A53C70;
L_08A53C70:;
    v0 = LD32(v0+116);
    a1 = v0 & 0x1;
    goto L_08A53C78;
L_08A53C78:;
    v0 = a1 & 0xff;
    cnd_ = v0 != 0;
    v0 = D_08AF0430 - (1072);
    if (cnd_) { goto L_08A53CB8; }
    goto L_08A53C84;
L_08A53C84:;
    goto L_08A53C88;
L_08A53C88:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_08A53CB8:;
    f12 = BITSF(LD32(s4+12));
    f13 = BITSF(LD32(v0+1072));
    a0 = (u32)-1;
    v0 = func_08A516BC(a0, f12, f13);
    goto L_08A53CC8;
L_08A53CC8:;
    f0 = BITSF(LD32(s6+1064));
    a3 = v0 + 0;
    a0 = 42;
    f1 = f21 + f0;
    f0 = f22 + f0;
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53CF0;
L_08A53CF0:;
    goto L_08A53C88;
L_08A53CF8:;
    a0 = sp + 28;
    a1 = sp + 32;
    f1 = f0 - f20;
    a2 = sp + 36;
    ST32(sp+36, FBITS(f0));
    s2 = 0xffff0000u;
    ST32(sp+28, FBITS(f1));
    ST32(sp+32, 0);
    f0 = func_08A54174(a0, a1, a2);
    goto L_08A53D1C;
L_08A53D1C:;
    f12 = f0;
    goto L_08A53C48;
L_08A53D24:;
    a0 = sp + 16;
    a1 = sp + 20;
    f1 = f0 - f20;
    a2 = sp + 24;
    s2 = 0xff000000u;
    ST32(sp+24, FBITS(f0));
    s2 = s2 | 0xff;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, 0);
    f0 = func_08A54174(a0, a1, a2);
    goto L_08A53D4C;
L_08A53D4C:;
    f12 = f0;
    goto L_08A53C2C;
L_08A53D54:;
    v0 = LD32(s1);
    f0 = BITSF(0);
    s2 = 0xff000000u;
    v1 = LD32(v0+88);
    fcc = FCMP(f20, f0, 12);
    s2 = s2 | 0xff;
    v1 = v1 ^ s3;
    v0 = 0xffff0000u;
    cnd_ = fcc;
    if (v1 != 0) s2 = v0;
    if (cnd_) { goto L_08A53D90; }
    goto L_08A53D7C;
L_08A53D7C:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_08A53D90; }
    goto L_08A53D8C;
L_08A53D8C:;
    f0 = f20;
    goto L_08A53D90;
L_08A53D90:;
    f12 = f0;
    goto L_08A53C24;
L_08A53D98:;
    a1 = 0xff000000u;
    a0 = s4 + 0;
    f13 = f22;
    f14 = f21;
    a1 = a1 | 0xff;
    a2 = 0xffff0000u;
    { u64 r_ = func_08A53DBC(a0, a1, a2, f12, f13, f14); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53DB4;
L_08A53DB4:;
    goto L_08A53C88;
}

/* 08A53DBC */
u64 func_08A53DBC(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08A53DBC:;
    sp = sp - 144;
    v0 = D_08AF0434 - (1076);
    s2 = a2 + 0;
    s0 = a0 + 0;
    f23 = f12;
    f22 = f13;
    f21 = f14;
    f20 = BITSF(LD32(v0+1076));
    f12 = BITSF(LD32(a0+12));
    a0 = a1 + 0;
    f13 = f20;
    v0 = func_08A516BC(a0, f12, f13);
    goto L_08A53E18;
L_08A53E18:;
    f12 = BITSF(LD32(s0+12));
    a0 = s2 + 0;
    f13 = f20;
    s1 = v0 + 0;
    v0 = func_08A516BC(a0, f12, f13);
    goto L_08A53E2C;
L_08A53E2C:;
    s2 = v0 + 0;
    v0 = D_08B1C8D8 - (-14120);
    a0 = LD32(v0-14120);
    ST32(sp, FBITS(f22));
    ST32(sp+4, FBITS(f21));
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53E44;
L_08A53E44:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A53EA8; }
    goto L_08A53E4C;
L_08A53E4C:;
    v0 = D_08AF0438 - (1080);
    f20 = BITSF(LD32(v0+1080));
    a3 = s1 + 0;
    a0 = 6;
    fcc = FCMP(f23, f20, 2);
    a2 = 0 + 0;
    cnd_ = fcc;
    a1 = sp + 16;
    if (cnd_) { goto L_08A53E94; }
    goto L_08A53E6C;
L_08A53E6C:;
    f0 = BITSF(0);
    s3 = sp + 32;
    a1 = s0 + 0;
    fcc = FCMP(f23, f0, 2);
    s4 = sp + 64;
    s5 = sp + 16;
    a3 = s2 + 0;
    cnd_ = !fcc;
    if (cnd_) { goto L_08A53EDC; }
    goto L_08A53E90;
L_08A53E90:;
    a1 = s5 + 0;
    goto L_08A53E94;
L_08A53E94:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A53EA8;
L_08A53EA8:;
    goto L_08A53EAC;
L_08A53EAC:;
    sp = sp + 144;
    return (u64)v0 | ((u64)v1 << 32);
L_08A53EDC:;
    a0 = s3 + 0;
    func_08A5D6D0(a0, a1);
    goto L_08A53EE4;
L_08A53EE4:;
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+48));
    a1 = s0 + 0;
    a0 = s4 + 0;
    f0 = f0 - f1;
    f0 = f0 * f23;
    f1 = f1 + f0;
    ST32(sp+48, FBITS(f1));
    func_08A5D6D0(a0, a1);
    goto L_08A53F08;
L_08A53F08:;
    f0 = f20 - f23;
    f2 = BITSF(LD32(sp+80));
    f1 = BITSF(LD32(sp+72));
    a0 = s3 + 0;
    a3 = s1 + 0;
    f1 = f1 - f2;
    a1 = s5 + 0;
    a2 = 0 + 0;
    f1 = f1 * f0;
    f0 = BITSF(LD32(sp));
    f2 = f2 + f1;
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(sp+72, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A53F48;
L_08A53F48:;
    a0 = s4 + 0;
    f0 = BITSF(LD32(sp+40));
    f1 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+56));
    a1 = s5 + 0;
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+4));
    a3 = s2 + 0;
    a2 = 0 + 0;
    f2 = f2 * f1;
    f1 = BITSF(LD32(sp));
    f0 = f0 + f2;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A53F88;
L_08A53F88:;
    goto L_08A53EAC;
}

/* 08A53F90 */
void func_08A53F90(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
L_08A53F90:;
    ST32(a0, a1);
    ST32(a0+4, a2);
    ST32(a0+8, a3);
    ST32(a0+12, FBITS(f12));
    ST32(a0+24, 0);
    ST8(a0+20, 0);
    ST8(a0+21, 0);
    return;
}

/* 08A53FB0 */
rv_t func_08A53FB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A53FB0:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    t6 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = t6 & v0;
    t7 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A54100; }
    goto L_08A53FDC;
L_08A53FDC:;
    v0 = D_08AF043C - (1084);
    f1 = BITSF(LD32(v0+1084));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t3 = D_08C30A50 - (2640);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    a3 = t3 + 2640;
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
    f5 = f5 * f1;
    v0 = D_08AF0440 - (1088);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f1;
    t2 = D_08C30A80 - (2688);
    ST32(a3+12, FBITS(f2));
    f3 = f3 * f1;
    a0 = t2 + 2688;
    f1 = BITSF(LD32(v0+1088));
    v0 = D_08C30A40 - (2624);
    ST32(v0+2624, FBITS(f5));
    a2 = v0 + 2624;
    v0 = D_08AF0444 - (1092);
    f0 = BITSF(LD32(v0+1092));
    v0 = D_08AF0450 - (1104);
    t0 = D_08C30A30 - (2608);
    ST32(t2+2688, FBITS(f0));
    t4 = D_08C30A60 - (2656);
    v1 = t4 + 2656;
    f0 = BITSF(LD32(v0+1104));
    v0 = D_08AF0448 - (1096);
    ST32(t0+2608, FBITS(f3));
    a1 = t0 + 2608;
    t5 = D_08C30A90 - (2704);
    ST32(a0+12, FBITS(f0));
    t1 = t5 + 2704;
    f0 = BITSF(LD32(v0+1096));
    v0 = D_08AF044C - (1100);
    ST32(a1+4, FBITS(f4));
    ST32(a1+12, FBITS(f2));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f2));
    ST32(t3+2640, FBITS(f2));
    ST32(t4+2656, FBITS(f1));
    ST32(v1+28, 0);
    ST32(v1+16, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1100));
    ST32(t5+2704, 0);
    ST32(a0+8, FBITS(f0));
    ST32(a1+8, FBITS(f5));
    ST32(a3+4, FBITS(f2));
    ST32(a2+8, FBITS(f6));
    ST32(a3+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f1));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    ST32(t1+4, 0);
    ST32(t1+8, 0);
    ST32(t1+12, 0);
    ST32(t1+16, 0);
    goto L_08A54100;
L_08A54100:;
    v0 = t7 < 0x1u;
    v0 = t6 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A54154; }
    goto L_08A54110;
L_08A54110:;
    v0 = D_08C30A90 - (2704);
    s0 = LD32(v0+2704);
    cnd_ = s0 == 0;
    s1 = v0 + 2704;
    if (cnd_) { goto L_08A54144; }
    goto L_08A54120;
L_08A54120:;
    v1 = LD32(s1+12);
    goto L_08A54124;
L_08A54124:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08A54164; }
    goto L_08A54134;
L_08A54134:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5413C;
L_08A5413C:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08A54124; }
    goto L_08A54144;
L_08A54144:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    goto L_08A54154;
L_08A54154:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A54164:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5416C;
L_08A5416C:;
    goto L_08A5413C;
}

/* 08A54174 */
float func_08A54174(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A54174:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A541A0; }
    goto L_08A5418C;
L_08A5418C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A541A0; }
    goto L_08A541A0;
L_08A541A0:;
    return f0;
}

/* 08A541A8 */
rv_t func_08A541A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A541A8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A53FB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A541BC;
L_08A541BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A541C8 */
rv_t func_08A541C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A541C8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A53FB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A541DC;
L_08A541DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A541E8 */
void func_08A541E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A541E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A541FC;
L_08A541FC:;
    f0 = BITSF(0);
    v0 = D_08B154D8 - (21720);
    a1 = s0 + 64;
    a2 = s0 + 52;
    v0 = v0 + 21720;
    ST32(a2+8, FBITS(f0));
    a3 = D_08B45AA8 - (23208);
    v1 = a3 + 23208;
    ST32(a1+16, 0);
    a0 = s0 + 16;
    ST32(s0, v0);
    ST32(a2+4, FBITS(f0));
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(a1+12, 0);
    ST32(s0+52, FBITS(f0));
    ST32(s0+64, 0);
    f0 = BITSF(LD32(a3+23208));
    f1 = BITSF(LD32(v1+32));
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v1+12));
    f5 = BITSF(LD32(v1+16));
    f6 = BITSF(LD32(v1+20));
    f7 = BITSF(LD32(v1+24));
    f8 = BITSF(LD32(v1+28));
    ST32(s0+16, FBITS(f0));
    ST32(a0+32, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f3));
    ST32(a0+12, FBITS(f4));
    ST32(a0+16, FBITS(f5));
    ST32(a0+20, FBITS(f6));
    ST32(a0+24, FBITS(f7));
    ST32(a0+28, FBITS(f8));
    sp = sp + 16;
    return;
}

/* 08A54298 */
rv_t func_08A54298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A54298:;
    v0 = D_08B154D8 - (21720);
    v0 = v0 + 21720;
    ST32(a0, v0);
    sp = sp - 32;
    s2 = a0 + 64;
    s1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, s2);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A542D0;
L_08A542D0:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08A54308; }
    goto L_08A542DC;
L_08A542DC:;
    a0 = s2 + 0;
    { rv_t r_ = func_08AD1B10(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A542E4;
L_08A542E4:;
    v0 = D_08B15410 - (21520);
    v0 = v0 + 21520;
    ST32(s1, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A54308:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54310;
L_08A54310:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54318;
L_08A54318:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08A54308; }
    goto L_08A54324;
L_08A54324:;
    goto L_08A542DC;
}

/* 08A5432C */
rv_t func_08A5432C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5432C:;
    v0 = D_08B154D8 - (21720);
    v0 = v0 + 21720;
    ST32(a0, v0);
    sp = sp - 32;
    s2 = a0 + 64;
    s1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, s2);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54364;
L_08A54364:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08A543A4; }
    goto L_08A54370;
L_08A54370:;
    a0 = s2 + 0;
    { rv_t r_ = func_08AD1B10(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A54378;
L_08A54378:;
    v0 = D_08B15410 - (21520);
    v0 = v0 + 21520;
    ST32(s1, v0);
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5438C;
L_08A5438C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A543A4:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A543AC;
L_08A543AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A543B4;
L_08A543B4:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08A543A4; }
    goto L_08A543C0;
L_08A543C0:;
    goto L_08A54370;
}

/* 08A543C8 */
rv_t func_08A543C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08A543C8:;
    sp = sp - 144;
    v0 = a0 + 64;
    s2 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54404;
L_08A54404:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    v0 = D_08AF0454 - (1108);
    if (cnd_) { goto L_08A54464; }
    goto L_08A54410;
L_08A54410:;
    f20 = BITSF(LD32(v0+1108));
    s1 = D_08B285A0 - (-31328);
    goto L_08A54418;
L_08A54418:;
    s0 = LD32(v1);
    f0 = BITSF(LD32(s0+4));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A54714; }
    goto L_08A54430;
L_08A54430:;
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54438;
L_08A54438:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_08A54DB0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A54444;
L_08A54444:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5444C;
L_08A5444C:;
    f0 = BITSF(LD32(s0+4));
    goto L_08A54450;
L_08A54450:;
    f1 = BITSF(LD32(s1-31328));
    v1 = LD32(sp+4);
    f0 = f0 + f1;
    cnd_ = v1 != 0;
    ST32(s0+4, FBITS(f0));
    if (cnd_) { goto L_08A54418; }
    goto L_08A54464;
L_08A54464:;
    v0 = LD32(s2+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s3 = s2 + 52;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5447C;
L_08A5447C:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s2+52));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A544C4; }
    goto L_08A54494;
L_08A54494:;
    f1 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_08A544C8; }
    goto L_08A544AC;
L_08A544AC:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    s4 = D_08B159FC - (23036);
    if (cnd_) { goto L_08A544CC; }
    goto L_08A544C4;
L_08A544C4:;
    v1 = 1;
    goto L_08A544C8;
L_08A544C8:;
    s4 = D_08B159FC - (23036);
    goto L_08A544CC;
L_08A544CC:;
    v0 = LD32(s4+23036);
    f1 = BITSF(LD32(s2+16));
    s5 = v1 & 0xff;
    f0 = BITSF(LD32(v0+12));
    s1 = s2 + 16;
    v0 = v0 + 12;
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A545B4; }
    goto L_08A544F4;
L_08A544F4:;
    f1 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A5450C;
L_08A5450C:;
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A54524;
L_08A54524:;
    f1 = BITSF(LD32(s1+12));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A5453C;
L_08A5453C:;
    f1 = BITSF(LD32(s1+16));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A54554;
L_08A54554:;
    f1 = BITSF(LD32(s1+20));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A5456C;
L_08A5456C:;
    f1 = BITSF(LD32(s1+24));
    f0 = BITSF(LD32(v0+24));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A54584;
L_08A54584:;
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(LD32(v0+28));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A545B8; }
    goto L_08A5459C;
L_08A5459C:;
    f1 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(s1+32));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { s0 = 1; goto L_08A545B4; }
    goto L_08A545B4;
L_08A545B4:;
    v0 = LD32(s2+4);
    goto L_08A545B8;
L_08A545B8:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = s0 ^ 0x1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A545CC;
L_08A545CC:;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = LD32(s4+23036);
    ST32(s3+8, FBITS(f0));
    v0 = v1 + 12;
    ST32(s3+4, FBITS(f1));
    ST32(s2+52, FBITS(f2));
    f8 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(s1+32, FBITS(f0));
    ST32(s2+16, FBITS(f8));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(s1+12, FBITS(f3));
    ST32(s1+16, FBITS(f4));
    ST32(s1+20, FBITS(f5));
    ST32(s1+24, FBITS(f6));
    cnd_ = s0 != 0;
    ST32(s1+28, FBITS(f7));
    if (cnd_) { goto L_08A54640; }
    goto L_08A54638;
L_08A54638:;
    cnd_ = s5 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A5464C; }
    goto L_08A54640;
L_08A54640:;
    a0 = s2 + 0;
    func_08A54724(a0);
    goto L_08A54648;
L_08A54648:;
    v0 = LD32(s2+4);
    goto L_08A5464C;
L_08A5464C:;
    f2 = BITSF(0);
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+24);
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = v1 + 148;
    f0 = BITSF(LD32(v1+148));
    f1 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f2));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f2));
    ST32(v1+148, FBITS(f2));
    ST32(sp+56, FBITS(f2));
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f2));
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {v[4]=BITSF(v0);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+24);
    {v[1]=BITSF(v1);}
    {v[6]=BITSF(v0);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A54704; }
    goto L_08A546DC;
L_08A546DC:;
    goto L_08A546E0;
L_08A546E0:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08A54704:;
    a1 = sp + 16;
    { rv_t r_ = func_08A547B8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5470C;
L_08A5470C:;
    goto L_08A546E0;
L_08A54714:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5471C;
L_08A5471C:;
    f0 = BITSF(LD32(s0+4));
    goto L_08A54450;
}

/* 08A54724 */
void func_08A54724(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A54724:;
    sp = sp - 48;
    v0 = a0 + 64;
    s1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54750;
L_08A54750:;
    s0 = LD32(sp+4);
    cnd_ = s0 == 0;
    s2 = sp + 16;
    if (cnd_) { goto L_08A547A0; }
    goto L_08A5475C;
L_08A5475C:;
    s0 = LD32(s0);
    goto L_08A54760;
L_08A54760:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    v0 = s0 + 8;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    v0 = func_08A548C8(a0, a1);
    goto L_08A54788;
L_08A54788:;
    a0 = sp + 0;
    ST32(s0, v0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54794;
L_08A54794:;
    s0 = LD32(sp+4);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08A54760; }
    goto L_08A547A0;
L_08A547A0:;
    sp = sp + 48;
    return;
}

/* 08A547B8 */
rv_t func_08A547B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A547B8:;
    sp = sp - 64;
    v0 = a0 + 64;
    s3 = a0 + 0;
    a0 = sp + 0;
    s2 = a1 + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A547EC;
L_08A547EC:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A54860; }
    goto L_08A547F8;
L_08A547F8:;
    v0 = LD32(v0);
    goto L_08A547FC;
L_08A547FC:;
    f1 = BITSF(LD32(s2));
    a0 = sp + 0;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = v0 + 8;
    if (cnd_) { goto L_08A54848; }
    goto L_08A54818;
L_08A54818:;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A54848; }
    goto L_08A54830;
L_08A54830:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { ST32(v0+4, 0); goto L_08A548AC; }
    goto L_08A54848;
L_08A54848:;
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54850;
L_08A54850:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_08A547FC; }
    goto L_08A5485C;
L_08A5485C:;
    a1 = s2 + 0;
    goto L_08A54860;
L_08A54860:;
    a0 = s3 + 0;
    v0 = func_08A548C8(a0, a1);
    goto L_08A54868;
L_08A54868:;
    a0 = 20;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A54874;
L_08A54874:;
    f2 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    s1 = v0 + 0;
    a1 = s0 + 0;
    a0 = v0 + 0;
    a2 = sp + 16;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    func_08A54FA4(a0, a1, a2);
    goto L_08A548A0;
L_08A548A0:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A54D2C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A548AC;
L_08A548AC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08A548C8 */
u32 func_08A548C8(u32 a0, u32 a1)
{
    u32 v0 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr118 = v[118], vr125 = v[125];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A548C8:;
    f0 = BITSF(LD32(a0+60));
    f1 = BITSF(LD32(a0+52));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1));
    f5 = BITSF(0);
    f2 = f2 - f0;
    f3 = f3 - f1;
    sp = sp - 16;
    f6 = f5;
    f1 = f2 * f2;
    f0 = f3 * f3;
    {v[112]=BITSF(LD32(a0+(16)));}
    {v[113]=BITSF(LD32(a0+(20)));}
    {v[114]=BITSF(LD32(a0+(24)));}
    {v[116]=BITSF(LD32(a0+(28)));}
    {v[117]=BITSF(LD32(a0+(32)));}
    {vr118=BITSF(LD32(a0+(36)));}
    {v[120]=BITSF(LD32(a0+(40)));}
    {v[121]=BITSF(LD32(a0+(44)));}
    {v[122]=BITSF(LD32(a0+(48)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54B74; }
    goto L_08A54930;
L_08A54930:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54AB4; }
    goto L_08A54940;
L_08A54940:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A549D8; }
    goto L_08A54968;
L_08A54968:;
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
    if (cnd_) { goto L_08A549B4; }
    goto L_08A549A4;
L_08A549A4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A549B4;
L_08A549B4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A549F8; }
    goto L_08A549C4;
L_08A549C4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A549F8; }
    goto L_08A549D4;
L_08A549D4:;
    goto L_08A549D8;
L_08A549D8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A549F8; }
    goto L_08A549EC;
L_08A549EC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A549F8;
L_08A549F8:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A54A88; }
    goto L_08A54A18;
L_08A54A18:;
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
    if (cnd_) { goto L_08A54A64; }
    goto L_08A54A54;
L_08A54A54:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A54A64;
L_08A54A64:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54AA8; }
    goto L_08A54A74;
L_08A54A74:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A54AA8; }
    goto L_08A54A84;
L_08A54A84:;
    goto L_08A54A88;
L_08A54A88:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54AA8; }
    goto L_08A54A9C;
L_08A54A9C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A54AA8;
L_08A54AA8:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_08A54C2C; }
    goto L_08A54AB0;
L_08A54AB0:;
    goto L_08A54AB4;
L_08A54AB4:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A54B48; }
    goto L_08A54AD8;
L_08A54AD8:;
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
    if (cnd_) { goto L_08A54B24; }
    goto L_08A54B14;
L_08A54B14:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A54B24;
L_08A54B24:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54B68; }
    goto L_08A54B34;
L_08A54B34:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A54B68; }
    goto L_08A54B44;
L_08A54B44:;
    goto L_08A54B48;
L_08A54B48:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54B68; }
    goto L_08A54B5C;
L_08A54B5C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A54B68;
L_08A54B68:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_08A54C2C; }
    goto L_08A54B70;
L_08A54B70:;
    goto L_08A54B74;
L_08A54B74:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A54C08; }
    goto L_08A54B98;
L_08A54B98:;
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
    if (cnd_) { goto L_08A54BE4; }
    goto L_08A54BD4;
L_08A54BD4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A54BE4;
L_08A54BE4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54C28; }
    goto L_08A54BF4;
L_08A54BF4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A54C28; }
    goto L_08A54C04;
L_08A54C04:;
    goto L_08A54C08;
L_08A54C08:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A54C28; }
    goto L_08A54C1C;
L_08A54C1C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A54C28;
L_08A54C28:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_08A54C2C;
L_08A54C2C:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=v[124];vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    f0 = f0 + f1;
    f4 = sqrtf(f0);
    fcc = FCMP(f4, f5, 2);
    cnd_ = fcc;
    f7 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_08A54C88; }
    goto L_08A54C54;
L_08A54C54:;
    v0 = FBITS(f2);
    {v[4]=1.57079632679f;}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f0 = f0 / f4;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    {float s0=vr0;float t0=v[4];float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f5 = BITSF(v0);
    goto L_08A54C88;
L_08A54C88:;
    fcc = FCMP(f6, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A54CD0; }
    goto L_08A54C98;
L_08A54C98:;
    fcc = FCMP(f2, f6, 12);
    cnd_ = !fcc;
    v0 = D_08AF0458 - (1112);
    if (cnd_) { goto L_08A54CD0; }
    goto L_08A54CA8;
L_08A54CA8:;
    f0 = BITSF(LD32(v0+1112));
    goto L_08A54CAC;
L_08A54CAC:;
    f5 = f0 - f5;
    goto L_08A54CB0;
L_08A54CB0:;
    f5 = f5 - f7;
    goto L_08A54CB4;
L_08A54CB4:;
    v0 = D_08AF0460 - (1120);
    f0 = BITSF(LD32(v0+1120));
    f0 = f5 * f0;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    sp = sp + 16;
    { v[0]=vr0;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[118]=vr118;v[125]=vr125;return v0; }
L_08A54CD0:;
    f0 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f5 = f5 - f7; goto L_08A54CB4; }
    goto L_08A54CE4;
L_08A54CE4:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AF0458 - (1112);
    if (cnd_) { goto L_08A54D00; }
    goto L_08A54CF4;
L_08A54CF4:;
    f0 = BITSF(LD32(v0+1112));
    f5 = f5 + f0;
    goto L_08A54CB0;
L_08A54D00:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f5 = f5 - f7; goto L_08A54CB4; }
    goto L_08A54D10;
L_08A54D10:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f5 = f5 - f7; goto L_08A54CB4; }
    goto L_08A54D20;
L_08A54D20:;
    v0 = D_08AF045C - (1116);
    f0 = BITSF(LD32(v0+1116));
    goto L_08A54CAC;
    v[0]=vr0;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[118]=vr118;v[125]=vr125;
}

/* 08A54D2C */
rv_t func_08A54D2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A54D2C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 64;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    a0 = 12;
    if (cnd_) { goto L_08A54DA0; }
    goto L_08A54D50;
L_08A54D50:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A54D58;
L_08A54D58:;
    v1 = v0 + 0;
    goto L_08A54D5C;
L_08A54D5C:;
    v0 = LD32(s0);
    ST32(v1, s1);
    ST32(v1+4, 0);
    cnd_ = v0 == 0;
    ST32(v1+8, v0);
    if (cnd_) { goto L_08A54D98; }
    goto L_08A54D70;
L_08A54D70:;
    ST32(v0+4, v1);
    goto L_08A54D74;
L_08A54D74:;
    v0 = LD32(s0+16);
    ST32(s0, v1);
    v0 = v0 + 1;
    ST32(s0+16, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A54D98:;
    ST32(s0+4, v1);
    goto L_08A54D74;
L_08A54DA0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A54DA8;
L_08A54DA8:;
    v1 = v0 + 0;
    goto L_08A54D5C;
}

/* 08A54DB0 */
void func_08A54DB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A54DB0:;
    sp = sp - 16;
    v1 = LD32(a0+64);
    cnd_ = v1 == 0;
    s0 = a0 + 64;
    if (cnd_) { goto L_08A54DE0; }
    goto L_08A54DC8;
L_08A54DC8:;
    v0 = LD32(v1);
    goto L_08A54DCC;
L_08A54DCC:;
    cnd_ = v0 == a1;
    if (cnd_) { a0 = LD32(v1+8); goto L_08A54DF0; }
    goto L_08A54DD4;
L_08A54DD4:;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A54DCC; }
    goto L_08A54DE0;
L_08A54DE0:;
    sp = sp + 16;
    return;
L_08A54DF0:;
    cnd_ = a0 == 0;
    v0 = LD32(v1+4);
    if (cnd_) { goto L_08A54E40; }
    goto L_08A54DF8;
L_08A54DF8:;
    ST32(a0+4, v0);
    goto L_08A54DFC;
L_08A54DFC:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, a0); goto L_08A54E0C; }
    goto L_08A54E08;
L_08A54E08:;
    ST32(v0+8, a0);
    goto L_08A54E0C;
L_08A54E0C:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A54E30; }
    goto L_08A54E18;
L_08A54E18:;
    a0 = v1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54E20;
L_08A54E20:;
    v0 = LD32(s0+16);
    goto L_08A54E24;
L_08A54E24:;
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_08A54DE0;
L_08A54E30:;
    t_ = v0;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A54E38;
L_08A54E38:;
    v0 = LD32(s0+16);
    goto L_08A54E24;
L_08A54E40:;
    ST32(s0+4, v0);
    a0 = LD32(v1+8);
    goto L_08A54DFC;
}

/* 08A54E4C */
rv_t func_08A54E4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08A54E4C:;
    sp = sp - 128;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54E7C;
L_08A54E7C:;
    cnd_ = v0 == 0;
    v0 = s0 + 64;
    if (cnd_) { goto L_08A54EA8; }
    goto L_08A54E84;
L_08A54E84:;
    goto L_08A54E88;
L_08A54E88:;
    sp = sp + 128;
    { v[0]=vr0;v[4]=vr4;return (rv_t){ v0, v1, f0 }; }
L_08A54EA8:;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54EB8;
L_08A54EB8:;
    a0 = LD32(sp+4);
    cnd_ = a0 == 0;
    v0 = D_08AF0464 - (1124);
    if (cnd_) { goto L_08A54E84; }
    goto L_08A54EC4;
L_08A54EC4:;
    f22 = BITSF(LD32(v0+1124));
    v1 = D_08AF0468 - (1128);
    v0 = D_08AF046C - (1132);
    {vr0=0.63661977236f;}
    f21 = BITSF(LD32(v1+1128));
    f20 = BITSF(LD32(v0+1132));
    s0 = D_08C30AF4 - (2804);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s2 = sp + 32;
    s1 = s0 + 2804;
    f4 = BITSF(LD32(s0+2804));
    goto L_08A54EF0;
L_08A54EF0:;
    f5 = BITSF(LD32(s1+4));
    v0 = LD32(a0);
    ST32(sp+16, FBITS(f4));
    {u32 a_=sp+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f5));
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a1 = s2 + 0;
    f0 = BITSF(LD32(v0));
    a2 = 1;
    a3 = 0xffff0000u;
    f12 = (float)(s32)FBITS(f0);
    a0 = 19;
    f12 = f12 + f12;
    f12 = f12 + f22;
    f12 = f12 * f21;
    v0 = FBITS(f12);
    {vr0=BITSF(v0);}
    {vr4=BITSF(v0);}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=vr0;float t0=v[8];float d0=s0*t0;vr0=d0;}
    {float s0=vr4;float t0=v[8];float d0=s0*t0;vr4=d0;}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    {v0=FBITS(vr4);}
    f3 = BITSF(v0);
    f0 = f2 * f20;
    f1 = f3 * f20;
    f4 = f4 + f0;
    f5 = f5 - f1;
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    { u64 r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = func_08A50324(a0, a1, a2, a3, f12); vr0=v[0];vr4=v[4];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54F88;
L_08A54F88:;
    a0 = sp + 0;
    { u64 r_ = func_08AD1B80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A54F90;
L_08A54F90:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    f4 = BITSF(LD32(s0+2804));
    if (cnd_) { goto L_08A54EF0; }
    goto L_08A54F9C;
L_08A54F9C:;
    goto L_08A54E88;
    v[0]=vr0;v[4]=vr4;
}

/* 08A54FA4 */
void func_08A54FA4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08A54FA4:;
    ST32(a0+4, 0);
    v0 = a0 + 8;
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    ST32(v0+8, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0, a1);
    ST32(v0+4, FBITS(f2));
    return;
}

/* 08A54FCC */
rv_t func_08A54FCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A54FCC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30AA4 - (2724);
    t4 = D_08C30AB4 - (2740);
    t5 = D_08C30AC4 - (2756);
    t6 = D_08C30AD4 - (2772);
    t2 = D_08C30AF4 - (2804);
    a1 = a1 & a0;
    a2 = t6 + 2772;
    a3 = t3 + 2724;
    t0 = t4 + 2740;
    t1 = t5 + 2756;
    cnd_ = a1 == 0;
    t7 = t2 + 2804;
    if (cnd_) { goto L_08A550D4; }
    goto L_08A5500C;
L_08A5500C:;
    v0 = D_08AF0470 - (1136);
    f3 = BITSF(LD32(v0+1136));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF0474 - (1140);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+8, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF0478 - (1144);
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0+1144));
    v0 = D_08AF047C - (1148);
    f4 = f4 * f3;
    ST32(a2+24, 0);
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    f7 = BITSF(LD32(v1+1140));
    ST32(t1+12, FBITS(f1));
    ST32(t2+2804, FBITS(f0));
    f0 = BITSF(LD32(v0+1148));
    ST32(t3+2724, FBITS(f2));
    ST32(t4+2740, FBITS(f6));
    ST32(t7+4, FBITS(f0));
    ST32(t5+2756, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t6+2772, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A550D4;
L_08A550D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A550DC */
rv_t func_08A550DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A550DC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A54FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A550F0;
L_08A550F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A550FC */
void func_08A550FC(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A550FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A55110;
L_08A55110:;
    v0 = D_08B15500 - (21760);
    v0 = v0 + 21760;
    ST32(s0, v0);
    ST32(s0+20, 0);
    sp = sp + 16;
    return;
}

/* 08A55130 */
rv_t func_08A55130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A55130:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE5A74 - (23156);
    a0 = a0 + 23156;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5514C;
L_08A5514C:;
    ST32(s0+20, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A55164 */
rv_t func_08A55164(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A55164:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5518C;
L_08A5518C:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_08A55200; }
    goto L_08A551A0;
L_08A551A0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A551F0; }
    goto L_08A551C4;
L_08A551C4:;
    a0 = LD32(a1);
    goto L_08A551C8;
L_08A551C8:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A55218; }
    goto L_08A551E0;
L_08A551E0:;
    a1 = LD32(a1+4);
    goto L_08A551E4;
L_08A551E4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A551C8; }
    goto L_08A551EC;
L_08A551EC:;
    v1 = 0 + 0;
    goto L_08A551F0;
L_08A551F0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A55200; }
    goto L_08A551F8;
L_08A551F8:;
    v0 = LD32(v1+64);
    ST32(s0+16, v0);
    goto L_08A55200;
L_08A55200:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A4FAC0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55208;
L_08A55208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A55218:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A551E0; }
    goto L_08A55224;
L_08A55224:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A551E4; }
    goto L_08A55230;
L_08A55230:;
    goto L_08A551F0;
}

/* 08A55238 */
rv_t func_08A55238(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A55238:;
    sp = sp - 96;
    a2 = D_08C30B4C - (2892);
    v1 = a2 + 2892;
    s3 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A552E0; }
    goto L_08A55294;
L_08A55294:;
    a2 = LD32(a2+2892);
    a3 = a1 + 0;
    goto L_08A5529C;
L_08A5529C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A552D0; }
    goto L_08A552B4;
L_08A552B4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A552E4; }
    goto L_08A552C4;
L_08A552C4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A552B4; }
    goto L_08A552D0;
L_08A552D0:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A5529C; }
    goto L_08A552E0;
L_08A552E0:;
    v1 = LD32(sp+8);
    goto L_08A552E4;
L_08A552E4:;
    cnd_ = v1 == 0;
    v0 = D_08AF0480 - (1152);
    if (cnd_) { goto L_08A55370; }
    goto L_08A552EC;
L_08A552EC:;
    f21 = BITSF(LD32(v0+1152));
    s4 = D_08C29F04 - (-24828);
    s1 = LD32(v1);
    goto L_08A552F8;
L_08A552F8:;
    a1 = 1;
    a0 = sp + 0;
    func_08AC4E2C(a0, a1);
    goto L_08A55304;
L_08A55304:;
    v1 = LD32(s1);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55314;
L_08A55314:;
    a1 = v0 + 0;
    a0 = s4 - 24828;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_08A55324;
L_08A55324:;
    s2 = v0 + 0;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A55368; }
    goto L_08A55334;
L_08A55334:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A55368; }
    goto L_08A55340;
L_08A55340:;
    v0 = LD32(s1);
    f0 = BITSF(0);
    v1 = LD32(v0-12);
    a0 = s1 + v1;
    f1 = BITSF(LD32(a0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_08A55440; }
    goto L_08A55364;
L_08A55364:;
    v1 = LD32(sp+8);
    goto L_08A55368;
L_08A55368:;
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_08A552F8; }
    goto L_08A55370;
L_08A55370:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A553F8; }
    goto L_08A55384;
L_08A55384:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A553F8; }
    goto L_08A55390;
L_08A55390:;
    v0 = LD32(s1);
    goto L_08A55394;
L_08A55394:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A553E8; }
    goto L_08A553A8;
L_08A553A8:;
    v0 = LD_U8(s0+8);
    goto L_08A553AC;
L_08A553AC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A55438; }
    goto L_08A553B4;
L_08A553B4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A55428; }
    goto L_08A553BC;
L_08A553BC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A553C4;
L_08A553C4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A553D0;
L_08A553D0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A553DC;
L_08A553DC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A553AC; }
    goto L_08A553E4;
L_08A553E4:;
    v1 = LD32(s1+4);
    goto L_08A553E8;
L_08A553E8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A55394; }
    goto L_08A553F8;
L_08A553F8:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08A55428:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A553C4;
L_08A55438:;
    s0 = LD32(s0+4);
    goto L_08A553DC;
L_08A55440:;
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5544C;
L_08A5544C:;
    s0 = v0 + 0;
    v0 = LD32(s3+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55468;
L_08A55468:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f2));
    v0 = FBITS(f0);
    ST32(sp+20, FBITS(f1));
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    ST32(sp+16, FBITS(f0));
    v0 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+52);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f20 = BITSF(v1);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A554D8;
L_08A554D8:;
    a0 = LD32(s3+16);
    a2 = LD32(s1);
    v1 = v0 ^ 0x4;
    v0 = v0 ^ a0;
    v0 = 0 < v0;
    v1 = 0 < v1;
    a3 = LD32(a2+96);
    a1 = LD_U8(s3+8);
    s5 = v0 & v1;
    a0 = s1 + 0;
    t_ = a3;
    a2 = s5 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55508;
L_08A55508:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A55368; }
    goto L_08A55518;
L_08A55518:;
    f13 = f0 * f21;
    f12 = f20;
    f14 = f0;
    a0 = s3 + 0;
    f0 = func_08A55E58(f12, f13, f14);
    goto L_08A5552C;
L_08A5552C:;
    f20 = f0;
    cnd_ = s2 == 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_08A55554; }
    goto L_08A55538;
L_08A55538:;
    v1 = LD32(s2);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5554C;
L_08A5554C:;
    s0 = s0 ^ v0;
    s6 = s0 < 0x1u;
    goto L_08A55554;
L_08A55554:;
    cnd_ = s2 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A55568; }
    goto L_08A5555C;
L_08A5555C:;
    v0 = LD32(s2+72);
    v0 = (v0 >> 1) & 0x1;
    s0 = v0 < 0x1u;
    goto L_08A55568;
L_08A55568:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+112);
    t_ = v0;
    s2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5557C;
L_08A5557C:;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = 1; goto L_08A555A0; }
    goto L_08A55584;
L_08A55584:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 7;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { s2 = 1; goto L_08A555A0; }
    goto L_08A555A0;
L_08A555A0:;
    cnd_ = s5 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A555E8; }
    goto L_08A555A8;
L_08A555A8:;
    cnd_ = s0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A55368; }
    goto L_08A555B0;
L_08A555B0:;
    cnd_ = s6 != 0;
    if (cnd_) { goto L_08A55368; }
    goto L_08A555B8;
L_08A555B8:;
    v1 = LD32(s1);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A555C8;
L_08A555C8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A55368; }
    goto L_08A555D0;
L_08A555D0:;
    a1 = s1 + 0;
    f12 = f20;
    a0 = s3 + 0;
    f0 = func_08A55840(a0, a1, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A555E0;
L_08A555E0:;
    v1 = LD32(sp+8);
    goto L_08A55368;
L_08A555E8:;
    a1 = s1 + 0;
    { rv_t r_ = func_08A55984(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A555F0;
L_08A555F0:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A55368; }
    goto L_08A555F8;
L_08A555F8:;
    v1 = LD32(s1);
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55608;
L_08A55608:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A55368; }
    goto L_08A55610;
L_08A55610:;
    cnd_ = s2 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A55368; }
    goto L_08A55618;
L_08A55618:;
    f12 = f20;
    a0 = s3 + 0;
    f0 = func_08A55914(a0, a1, f12);
    goto L_08A55624;
L_08A55624:;
    v1 = LD32(sp+8);
    goto L_08A55368;
}

/* 08A5562C */
rv_t func_08A5562C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5562C:;
    sp = sp - 32;
    s3 = D_08C30B4C - (2892);
    s2 = s3 + 2892;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A55664;
L_08A55664:;
    cnd_ = v0 == 0;
    a0 = 12;
    if (cnd_) { goto L_08A55688; }
    goto L_08A5566C;
L_08A5566C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A55688:;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A556A8;
L_08A556A8:;
    a0 = LD32(s3+2892);
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
    goto L_08A5566C;
}

/* 08A556D8 */
u64 func_08A556D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A556D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A55700;
L_08A55700:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A55764; }
    goto L_08A55708;
L_08A55708:;
    a1 = LD32(s0);
    v1 = D_08C30B4C - (2892);
    s1 = v1 + 2892;
    v0 = LD32(a1-16);
    a0 = LD32(s1+4);
    a1 = LD32(v1+2892);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A55764; }
    goto L_08A55744;
L_08A55744:;
    v0 = LD32(a0);
    goto L_08A55748;
L_08A55748:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08A55774; }
    goto L_08A55750;
L_08A55750:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A55748; }
    goto L_08A55760;
L_08A55760:;
    goto L_08A55764;
L_08A55764:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A55774:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A55784; }
    goto L_08A5577C;
L_08A5577C:;
    ST8(a0+8, v0);
    goto L_08A55760;
L_08A55784:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A557AC; }
    goto L_08A5578C;
L_08A5578C:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08A55794;
L_08A55794:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5579C;
L_08A5579C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A55760;
L_08A557AC:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08A55794;
}

/* 08A557BC */
u64 func_08A557BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A557BC:;
    v0 = 999;
    a2 = a0 + 0;
    cnd_ = a0 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A55828; }
    goto L_08A557CC;
L_08A557CC:;
    a0 = D_08C30B4C - (2892);
    v1 = a0 + 2892;
    v0 = LD32(v1+4);
    a1 = LD32(a0+2892);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A55828; }
    goto L_08A557F8;
L_08A557F8:;
    v0 = LD32(a1);
    goto L_08A557FC;
L_08A557FC:;
    a0 = LD32(v0);
    a3 = v0 + 0;
    v1 = LD32(a0-16);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 == a2;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A55830; }
    goto L_08A55818;
L_08A55818:;
    a1 = LD32(a1+4);
    goto L_08A5581C;
L_08A5581C:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08A557FC; }
    goto L_08A55824;
L_08A55824:;
    a3 = 0 + 0;
    goto L_08A55828;
L_08A55828:;
    v0 = 0 < a3;
    return (u64)v0 | ((u64)v1 << 32);
L_08A55830:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5581C; }
    goto L_08A55838;
L_08A55838:;
    goto L_08A55828;
}

/* 08A55840 */
float func_08A55840(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A55840:;
    sp = sp - 48;
    v0 = D_08C30FA8 - (4008);
    a2 = sp + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD_U8(v0+4008);
    cnd_ = v1 == 0;
    f20 = f12;
    if (cnd_) { goto L_08A55888; }
    goto L_08A55870;
L_08A55870:;
    goto L_08A55874;
L_08A55874:;
    sp = sp + 48;
    return f0;
L_08A55888:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    { rv_t r_ = func_08A56144(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55894;
L_08A55894:;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A55870; }
    goto L_08A558A0;
L_08A558A0:;
    { rv_t r_ = func_08A561AC(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A558A8;
L_08A558A8:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A55874; }
    goto L_08A558B0;
L_08A558B0:;
    a0 = LD32(s0+20);
    func_088CD5B0(a0);
    goto L_08A558B8;
L_08A558B8:;
    v0 = LD32(s0+4);
    a1 = 0xff000000u;
    f12 = f20;
    v1 = LD_U8(v0+28);
    v0 = (u32)-1;
    a0 = s0 + 0;
    if (v1 == 0) a1 = v0;
    v0 = func_08A55E9C(a1, f12);
    goto L_08A558D8;
L_08A558D8:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A558EC;
L_08A558EC:;
    v1 = D_08AF0484 - (1156);
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = BITSF(LD32(v1+1156));
    a0 = s0 + 0;
    a2 = v0 + 0;
    a1 = 4;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5590C;
L_08A5590C:;
    goto L_08A55874;
}

/* 08A55914 */
float func_08A55914(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A55914:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    a1 = 0xffff0000u;
    if (cnd_) { goto L_08A55954; }
    goto L_08A55938;
L_08A55938:;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD_U16(v0+8);
    v0 = (u32)-256;
    v1 = v1 ^ 0x8004;
    if (v1 != 0) a1 = v0;
    goto L_08A55954;
L_08A55954:;
    v0 = func_08A55E9C(a1, f12);
    goto L_08A5595C;
L_08A5595C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    f0 = func_08A55C94(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A55970;
L_08A55970:;
    sp = sp + 16;
    return f0;
}

/* 08A55984 */
rv_t func_08A55984(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A55984:;
    sp = sp - 64;
    s2 = a0 + 0;
    a0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A559B0;
L_08A559B0:;
    a0 = D_08C29F04 - (-24828);
    a0 = a0 - 24828;
    a1 = v0 + 0;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_08A559C4;
L_08A559C4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A559DC; }
    goto L_08A559CC;
L_08A559CC:;
    v0 = LD32(v0+72);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A559F8; }
    goto L_08A559DC;
L_08A559DC:;
    v0 = 0 + 0;
    goto L_08A559E0;
L_08A559E0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A559F8:;
    s1 = LD32(v1+68);
    func_08A5D69C(a0);
    goto L_08A55A00;
L_08A55A00:;
    v0 = D_08B263B8 - (25528);
    a1 = LD32(v0+25528);
    a0 = D_08AE5A9C - (23196);
    a2 = 0 + 0;
    a0 = a0 + 23196;
    v0 = func_0883A334(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A55A18;
L_08A55A18:;
    a2 = s1 & 0x1;
    cnd_ = a2 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08A55BDC; }
    goto L_08A55A24;
L_08A55A24:;
    v0 = D_08AF0488 - (1160);
    f0 = BITSF(LD32(v0+1160));
    goto L_08A55A2C;
L_08A55A2C:;
    a0 = s1 >> 1;
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A55BC0; }
    goto L_08A55A40;
L_08A55A40:;
    a3 = D_08AF0490 - (1168);
    f0 = BITSF(LD32(a3+1168));
    v0 = D_08AF0494 - (1172);
    a1 = D_08AF0498 - (1176);
    f0 = f1 * f0;
    f1 = BITSF(LD32(v0+1172));
    f0 = f0 + f1;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(a1+1176));
    if (cnd_) { goto L_08A55A84; }
    goto L_08A55A70;
L_08A55A70:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f1 = f2;
    if (cnd_) { goto L_08A55A84; }
    goto L_08A55A80;
L_08A55A80:;
    f1 = f0;
    goto L_08A55A84;
L_08A55A84:;
    cnd_ = a2 == 0;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_08A55BB4; }
    goto L_08A55A8C;
L_08A55A8C:;
    f0 = BITSF(LD32(a1+1176));
    goto L_08A55A90;
L_08A55A90:;
    f1 = BITSF(a0);
    ST32(sp+12, FBITS(f0));
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A55B98; }
    goto L_08A55AA0;
L_08A55AA0:;
    f1 = BITSF(LD32(a3+1168));
    v0 = D_08AF049C - (1180);
    f2 = BITSF(LD32(a1+1176));
    f1 = f0 * f1;
    f0 = BITSF(LD32(v0+1180));
    a0 = sp + 32;
    a2 = sp + 40;
    f1 = f1 + f0;
    a1 = sp + 36;
    ST32(sp+40, FBITS(f2));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, 0);
    f0 = func_08A563C4(a0, a1, a2);
    goto L_08A55AD4;
L_08A55AD4:;
    v0 = D_08AF04A0 - (1184);
    v1 = LD32(s0);
    f1 = BITSF(LD32(v0+1184));
    a0 = D_08C2B3A4 - (-19548);
    v0 = LD32(v1-16);
    ST32(sp+16, FBITS(f0));
    v1 = a0 - 19548;
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    v0 = 999;
    ST32(sp+20, FBITS(f1));
    cnd_ = a2 == v0;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_08A559DC; }
    goto L_08A55B08;
L_08A55B08:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A55B58; }
    goto L_08A55B2C;
L_08A55B2C:;
    a0 = LD32(a1);
    goto L_08A55B30;
L_08A55B30:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A55B78; }
    goto L_08A55B48;
L_08A55B48:;
    a1 = LD32(a1+4);
    goto L_08A55B4C;
L_08A55B4C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A55B30; }
    goto L_08A55B54;
L_08A55B54:;
    v1 = 0 + 0;
    goto L_08A55B58;
L_08A55B58:;
    cnd_ = v1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A559DC; }
    goto L_08A55B60;
L_08A55B60:;
    a1 = LD32(v1+184);
    a2 = s0 + 0;
    a3 = sp + 0;
    f0 = func_08A55C94(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A55B70;
L_08A55B70:;
    v0 = 1;
    goto L_08A559E0;
L_08A55B78:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A55B48; }
    goto L_08A55B84;
L_08A55B84:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A55B4C; }
    goto L_08A55B90;
L_08A55B90:;
    goto L_08A55B58;
L_08A55B98:;
    v0 = a0 & 0x1;
    v1 = s1 >> 2;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A55AA0;
L_08A55BB4:;
    v0 = D_08AF0488 - (1160);
    f0 = BITSF(LD32(v0+1160));
    goto L_08A55A90;
L_08A55BC0:;
    v0 = a0 & 0x1;
    v1 = s1 >> 2;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A55A40;
L_08A55BDC:;
    v0 = D_08AF048C - (1164);
    f0 = BITSF(LD32(v0+1164));
    goto L_08A55A2C;
}

/* 08A55BE8 */
void func_08A55BE8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A55BE8:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = LD32(a0);
    a1 = LD32(v0-16);
    v1 = a0 + a1;
    v0 = LD_U16(v1+8);
    v1 = v0 ^ 0x8004;
    a1 = v0 ^ 0x8014;
    a2 = v0 ^ 0x801d;
    v1 = v1 < 0x1u;
    v0 = v0 ^ 0x8003;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    a2 = a2 < 0x1u;
    v1 = v1 | a1;
    cnd_ = v1 != 0;
    v0 = v0 | a2;
    if (cnd_) { goto L_08A55C3C; }
    goto L_08A55C34;
L_08A55C34:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A55C88; }
    goto L_08A55C3C;
L_08A55C3C:;
    { rv_t r_ = func_08A05610(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55C44;
L_08A55C44:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A55C88; }
    goto L_08A55C4C;
L_08A55C4C:;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A55C8C; }
    goto L_08A55C58;
L_08A55C58:;
    f1 = BITSF(LD32(v0+28));
    f0 = BITSF(LD32(s0+8));
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f0 = f0 - f1;
    f1 = BITSF(LD32(v1+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A55C80; }
    goto L_08A55C80;
L_08A55C80:;
    ST32(s0+8, FBITS(f0));
    goto L_08A55C88;
L_08A55C88:;
    goto L_08A55C8C;
L_08A55C8C:;
    sp = sp + 16;
    return;
}

/* 08A55C94 */
float func_08A55C94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A55C94:;
    sp = sp - 96;
    s1 = a2 + 0;
    a2 = sp + 0;
    s3 = a1 + 0;
    a1 = s1 + 0;
    s2 = a0 + 0;
    s0 = a3 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_08A55FF0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A55CDC;
L_08A55CDC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A55D78; }
    goto L_08A55CE4;
L_08A55CE4:;
    cnd_ = s0 == 0;
    v0 = D_08AF04A4 - (1188);
    if (cnd_) { goto L_08A55DC0; }
    goto L_08A55CEC;
L_08A55CEC:;
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0+16));
    f0 = BITSF(LD32(s0+12));
    f3 = BITSF(LD32(s0+4));
    f2 = f2 - f1;
    f4 = BITSF(LD32(s0+24));
    f0 = f0 - f3;
    f1 = BITSF(LD32(s0+20));
    f20 = f4 * f2;
    f21 = f1 * f0;
    f0 = BITSF(LD32(v0+1188));
    f1 = BITSF(LD32(sp+4));
    v1 = LD_U8(s2+8);
    f0 = f20 * f0;
    a0 = s1 + 0;
    a1 = sp + 0;
    a3 = s3 + 0;
    f1 = f1 - f0;
    a2 = 1;
    cnd_ = v1 != 0;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_08A55D98; }
    goto L_08A55D40;
L_08A55D40:;
    func_08A55BE8(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A55D48;
L_08A55D48:;
    a0 = LD32(s0);
    f15 = BITSF(LD32(s0+24));
    f12 = BITSF(LD32(s0+4));
    f13 = BITSF(LD32(s0+8));
    f14 = BITSF(LD32(s0+20));
    a1 = sp + 0;
    a2 = s3 + 0;
    f17 = f20;
    f16 = f21;
    goto L_08A55D6C;
L_08A55D6C:;
    func_08A50040(a0, a1, a2, f12, f13, f14, f15, f16, f17);
    goto L_08A55D74;
L_08A55D74:;
    goto L_08A55D78;
L_08A55D78:;
    sp = sp + 96;
    return f0;
L_08A55D98:;
    f0 = BITSF(LD32(sp));
    a0 = s0 + 0;
    a1 = sp + 32;
    ST32(sp+36, FBITS(f1));
    ST32(sp+20, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    ST32(sp+16, FBITS(f0));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A55DB8;
L_08A55DB8:;
    goto L_08A55D78;
L_08A55DC0:;
    v0 = LD_U8(s2+8);
    a3 = s3 + 0;
    a0 = 5;
    a2 = 1;
    cnd_ = v0 != 0;
    a1 = sp + 16;
    if (cnd_) { goto L_08A55E34; }
    goto L_08A55DD8;
L_08A55DD8:;
    v0 = D_08B1C8D0 - (-14128);
    a0 = LD32(v0-14128);
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A55DE4;
L_08A55DE4:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A55D74; }
    goto L_08A55DF4;
L_08A55DF4:;
    func_08A55BE8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A55DFC;
L_08A55DFC:;
    f12 = BITSF(LD32(s0+16));
    f13 = BITSF(LD32(s0+20));
    f16 = BITSF(LD32(s0+24));
    f17 = BITSF(LD32(s0+28));
    f14 = BITSF(LD32(s0+32));
    f16 = f16 - f12;
    f17 = f17 - f13;
    f15 = BITSF(LD32(s0+36));
    a0 = LD32(s0+12);
    f16 = f14 * f16;
    f17 = f15 * f17;
    a2 = s3 + 0;
    a1 = sp + 0;
    goto L_08A55D6C;
L_08A55E34:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A55E50;
L_08A55E50:;
    goto L_08A55D78;
}

/* 08A55E58 */
float func_08A55E58(float f12, float f13, float f14)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A55E58:;
    f13 = f14 - f13;
    f14 = f14 - f12;
    v0 = D_08AF04A8 - (1192);
    f0 = BITSF(LD32(v0+1192));
    sp = sp - 32;
    f14 = f14 / f13;
    a0 = sp + 0;
    a1 = sp + 4;
    a2 = sp + 8;
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, 0);
    ST32(sp, FBITS(f14));
    f0 = func_08A563C4(a0, a1, a2);
    goto L_08A55E90;
L_08A55E90:;
    sp = sp + 32;
    return f0;
}

/* 08A55E9C */
u32 func_08A55E9C(u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A55E9C:;
    v0 = (a1 >> 16) & 0xff;
    v1 = a1 & 0xff;
    a0 = D_08AF04B0 - (1200);
    a1 = (a1 >> 8) & 0xff;
    f0 = BITSF(v1);
    f2 = BITSF(LD32(a0+1200));
    f5 = BITSF(v0);
    f1 = BITSF(a1);
    f6 = f12 * f2;
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f2 = (float)(s32)FBITS(f5);
    v0 = D_08AF04AC - (1196);
    f0 = BITSF(LD32(v0+1196));
    f1 = BITSF(0);
    sp = sp - 16;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    fcc = FCMP(f1, f6, 12);
    ST32(sp+12, FBITS(f12));
    v1 = sp + 0;
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+4, FBITS(f4));
    if (cnd_) { goto L_08A55FE0; }
    goto L_08A55F04;
L_08A55F04:;
    a1 = D_08AF04B4 - (1204);
    f0 = BITSF(LD32(a1+1204));
    f0 = f6 + f0;
    goto L_08A55F10;
L_08A55F10:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(a0+1200));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A55FD4; }
    goto L_08A55F38;
L_08A55F38:;
    f0 = BITSF(LD32(a1+1204));
    f0 = f2 + f0;
    goto L_08A55F40;
L_08A55F40:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+1200));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A55FC8; }
    goto L_08A55F6C;
L_08A55F6C:;
    f0 = BITSF(LD32(a1+1204));
    f0 = f1 + f0;
    goto L_08A55F74;
L_08A55F74:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a0+1200));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A55FBC; }
    goto L_08A55FA0;
L_08A55FA0:;
    f0 = BITSF(LD32(a1+1204));
    f0 = f1 + f0;
    goto L_08A55FA8;
L_08A55FA8:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 16;
    return v0;
L_08A55FBC:;
    f0 = BITSF(LD32(a1+1204));
    f0 = f1 - f0;
    goto L_08A55FA8;
L_08A55FC8:;
    f0 = BITSF(LD32(a1+1204));
    f0 = f1 - f0;
    goto L_08A55F74;
L_08A55FD4:;
    f0 = BITSF(LD32(a1+1204));
    f0 = f2 - f0;
    goto L_08A55F40;
L_08A55FE0:;
    a1 = D_08AF04B4 - (1204);
    f0 = BITSF(LD32(a1+1204));
    f0 = f6 - f0;
    goto L_08A55F10;
}

/* 08A55FF0 */
rv_t func_08A55FF0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A55FF0:;
    sp = sp - 64;
    a0 = a1 + 0;
    s1 = D_08B159FC - (23036);
    s0 = a2 + 0;
    v0 = LD32(a1);
    v1 = LD32(v0+60);
    t_ = v1;
    a1 = a2 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5601C;
L_08A5601C:;
    f3 = BITSF(0);
    v0 = D_08AF04B8 - (1208);
    f4 = BITSF(LD32(v0+1208));
    ST32(sp, FBITS(f3));
    {u32 a_=sp+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a0 = s0 + 0;
    v0 = LD32(s1+23036);
    ST32(sp+4, FBITS(f3));
    a1 = 1;
    ST32(sp+8, FBITS(f3));
    f0 = BITSF(LD32(v0+16));
    ST32(sp, FBITS(f0));
    v1 = FBITS(f0);
    {v[8]=BITSF(v1);}
    f1 = BITSF(LD32(v0+28));
    ST32(sp+4, FBITS(f1));
    v1 = FBITS(f1);
    {v[9]=BITSF(v1);}
    f2 = BITSF(LD32(v0+40));
    v0 = FBITS(f2);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+8, FBITS(f2));
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    if (cnd_) { goto L_08A560C4; }
    goto L_08A56090;
L_08A56090:;
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(v[1]);}
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_08A560C4;
L_08A560C4:;
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+4));
    f0 = f0 * f4;
    f1 = BITSF(LD32(s0));
    f3 = f3 * f4;
    f2 = f2 * f4;
    f1 = f1 - f0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    f0 = BITSF(LD32(s0+4));
    ST32(s0, FBITS(f1));
    f0 = f0 - f2;
    f1 = BITSF(LD32(s0+8));
    f1 = f1 - f3;
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_0881D3D4(a0, a1); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56110;
L_08A56110:;
    v1 = LD32(s1+23036);
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A56130; }
    goto L_08A5612C;
L_08A5612C:;
    v0 = 0 + 0;
    goto L_08A56130;
L_08A56130:;
    sp = sp + 64;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;
}

/* 08A56144 */
rv_t func_08A56144(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A56144:;
    sp = sp - 32;
    s0 = a2 + 0;
    a2 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_08A55FF0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56168;
L_08A56168:;
    v0 = D_08B159FC - (23036);
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    v1 = LD32(v0+23036);
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f2));
    f1 = BITSF(LD32(v1+80));
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A5619C; }
    goto L_08A56198;
L_08A56198:;
    v0 = 0 + 0;
    goto L_08A5619C;
L_08A5619C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A561AC */
rv_t func_08A561AC(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A561AC:;
    v0 = D_08AF04BC - (1212);
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(v0+1212));
    v1 = 0 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A561E4; }
    goto L_08A561CC;
L_08A561CC:;
    v0 = D_08AF04C0 - (1216);
    f0 = BITSF(LD32(v0+1216));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = 1; goto L_08A561E4; }
    goto L_08A561E4;
L_08A561E4:;
    v0 = D_08AF04C4 - (1220);
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(v0+1220));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = 0 < a0;
    if (cnd_) { goto L_08A5621C; }
    goto L_08A56200;
L_08A56200:;
    v0 = D_08AF04C0 - (1216);
    f0 = BITSF(LD32(v0+1216));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = 1; goto L_08A56218; }
    goto L_08A56218;
L_08A56218:;
    v0 = 0 < a0;
    goto L_08A5621C;
L_08A5621C:;
    if (v1 == 0) v0 = 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A56224 */
rv_t func_08A56224(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A56224:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A56378; }
    goto L_08A56258;
L_08A56258:;
    v0 = D_08AF04C8 - (1224);
    f2 = BITSF(LD32(v0+1224));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AF04CC - (1228);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f7 = BITSF(LD32(v1+1228));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f2;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f1 = f1 * f2;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f2;
    v0 = D_08C30AFC - (2812);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f2;
    t0 = D_08C30B0C - (2828);
    t1 = D_08C30B1C - (2844);
    f3 = f3 * f2;
    t2 = D_08C30B2C - (2860);
    s3 = D_08C30B4C - (2892);
    v1 = t2 + 2860;
    ST32(v0+2812, FBITS(f3));
    a1 = v0 + 2812;
    a2 = t0 + 2828;
    a3 = t1 + 2844;
    s0 = s3 + 2892;
    v0 = 4;
    ST32(a3+12, FBITS(f1));
    a0 = 16;
    ST32(a1+4, FBITS(f4));
    ST32(a1+12, FBITS(f1));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t0+2828, FBITS(f5));
    ST32(t2+2860, FBITS(f7));
    ST32(t1+2844, FBITS(f1));
    ST32(v1+16, FBITS(f7));
    ST32(v1+28, 0);
    ST32(a1+8, FBITS(f5));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f6));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(v1+4, FBITS(f7));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f7));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56340;
L_08A56340:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s3+2892, v0);
    if (cnd_) { goto L_08A5636C; }
    goto L_08A56350;
L_08A56350:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A56358;
L_08A56358:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A56358; }
    goto L_08A5636C;
L_08A5636C:;
    v0 = s3 + 2892;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A56378;
L_08A56378:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5639C; }
    goto L_08A5638C;
L_08A5638C:;
    v0 = D_08C30B4C - (2892);
    a0 = LD32(v0+2892);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A563B4; }
    goto L_08A5639C;
L_08A5639C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A563B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A563BC;
L_08A563BC:;
    goto L_08A5639C;
}

/* 08A563C4 */
float func_08A563C4(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A563C4:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A563F0; }
    goto L_08A563DC;
L_08A563DC:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A563F0; }
    goto L_08A563F0;
L_08A563F0:;
    return f0;
}

/* 08A563F8 */
rv_t func_08A563F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A563F8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A56224(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5640C;
L_08A5640C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A56418 */
rv_t func_08A56418(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A56418:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A56224(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5642C;
L_08A5642C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A56438 */
void func_08A56438(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A56438:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5644C;
L_08A5644C:;
    v0 = 7;
    ST32(s0+84, v0);
    v0 = D_08B15528 - (21800);
    v1 = s0 + 16;
    v0 = v0 + 21800;
    ST32(v1+8, 0);
    ST32(s0, v0);
    ST32(v1+4, 0);
    ST32(s0+16, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    ST8(s0+80, 0);
    sp = sp + 16;
    return;
}

/* 08A56490 */
rv_t func_08A56490(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A56490:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE5AC8 - (23240);
    a0 = a0 + 23240;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A564AC;
L_08A564AC:;
    ST32(s0+68, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A564C4 */
rv_t func_08A564C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A564C4:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A564F0;
L_08A564F0:;
    a2 = v0 + 0;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A56634; }
    goto L_08A56504;
L_08A56504:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A56554; }
    goto L_08A56528;
L_08A56528:;
    a0 = LD32(a1);
    goto L_08A5652C;
L_08A5652C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A566A0; }
    goto L_08A56544;
L_08A56544:;
    a1 = LD32(a1+4);
    goto L_08A56548;
L_08A56548:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A5652C; }
    goto L_08A56550;
L_08A56550:;
    s0 = 0 + 0;
    goto L_08A56554;
L_08A56554:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A56634; }
    goto L_08A5655C;
L_08A5655C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A04F20(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56564;
L_08A56564:;
    cnd_ = v0 != 0;
    ST8(s1+80, v0);
    if (cnd_) { goto L_08A56688; }
    goto L_08A5656C;
L_08A5656C:;
    f1 = BITSF(LD32(s0+52));
    goto L_08A56570;
L_08A56570:;
    v0 = D_08AF04D0 - (1232);
    f0 = BITSF(LD32(v0+1232));
    ST32(s1+72, FBITS(f1));
    f2 = f1 * f0;
    f1 = BITSF(0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AF04D4 - (1236);
    if (cnd_) { goto L_08A5667C; }
    goto L_08A56594;
L_08A56594:;
    f0 = BITSF(LD32(v0+1236));
    f0 = f2 + f0;
    goto L_08A5659C;
L_08A5659C:;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    v0 = 7;
    if (cnd_) { goto L_08A565D0; }
    goto L_08A565B0;
L_08A565B0:;
    v0 = v1 << 2;
    v1 = D_08AE5AF0 - (23280);
    v1 = v1 + 23280;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A565CCu: goto L_08A565CC; case 0x08A56664u: goto L_08A56664; case 0x08A5666Cu: goto L_08A5666C; case 0x08A56674u: goto L_08A56674; default: rs_break(0, 0x08a565c4); }
L_08A565CC:;
    v0 = 8;
    goto L_08A565D0;
L_08A565D0:;
    f1 = BITSF(LD32(s1+72));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    ST32(s1+84, v0);
    if (cnd_) { goto L_08A56634; }
    goto L_08A565E8;
L_08A565E8:;
    v0 = LD_U8(s1+80);
    cnd_ = v0 != 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_08A56650; }
    goto L_08A565F4;
L_08A565F4:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+80));
    goto L_08A56600;
L_08A56600:;
    f0 = f0 / f1;
    f2 = BITSF(0);
    v0 = D_08AF04D8 - (1240);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f1 = BITSF(LD32(v0+1240));
    if (cnd_) { goto L_08A56630; }
    goto L_08A5661C;
L_08A5661C:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f2 = f1;
    if (cnd_) { goto L_08A56630; }
    goto L_08A5662C;
L_08A5662C:;
    f2 = f0;
    goto L_08A56630;
L_08A56630:;
    ST32(s1+76, FBITS(f2));
    goto L_08A56634;
L_08A56634:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A4FAC0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5663C;
L_08A5663C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A56650:;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5665C;
L_08A5665C:;
    f1 = BITSF(LD32(s1+72));
    goto L_08A56600;
L_08A56664:;
    v0 = 9;
    goto L_08A565D0;
L_08A5666C:;
    v0 = 10;
    goto L_08A565D0;
L_08A56674:;
    v0 = 7;
    goto L_08A565D0;
L_08A5667C:;
    f0 = BITSF(LD32(v0+1236));
    f0 = f2 - f0;
    goto L_08A5659C;
L_08A56688:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56698;
L_08A56698:;
    f1 = f0;
    goto L_08A56570;
L_08A566A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A56548; }
    goto L_08A566AC;
L_08A566AC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A56544; }
    goto L_08A566B8;
L_08A566B8:;
    goto L_08A56554;
}

/* 08A566C0 */
rv_t func_08A566C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[736] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 736);
L_08A566C0:;
    sp = sp - 736;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_08A567DC; }
    goto L_08A56700;
L_08A56700:;
    v0 = LD32(a0+4);
    s2 = LD32(v0+24);
    cnd_ = s2 == 0;
    s0 = D_08C30BDC - (3036);
    if (cnd_) { goto L_08A567E0; }
    goto L_08A56710;
L_08A56710:;
    a0 = LD32(a0+68);
    s1 = s0 + 3036;
    func_088CD5B0(a0);
    goto L_08A5671C;
L_08A5671C:;
    v0 = s2 + 540;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s2+540));
    f3 = BITSF(LD32(v0+4));
    {u32 a_=sp+(656);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f5);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    a1 = D_08AE5B0C - (23308);
    a3 = 1;
    a1 = a1 + 23308;
    a0 = sp + 0;
    a2 = 128;
    ST32(sp+256, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+260, FBITS(f3));
    f2 = BITSF(F2I(f0, 1));
    t0 = FBITS(f2);
    ST32(sp+264, FBITS(f5));
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56784;
L_08A56784:;
    f13 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s0+3036));
    a0 = (u32)-1;
    a1 = 2;
    a2 = sp + 0;
    { rv_t r_ = func_088CBB34(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5679C;
L_08A5679C:;
    v0 = D_08AF04E0 - (1248);
    f20 = BITSF(LD32(s0+3036));
    f0 = BITSF(LD32(v0+1248));
    a1 = D_08AE5B14 - (23316);
    a1 = a1 + 23316;
    f20 = f20 + f0;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A567C4;
L_08A567C4:;
    f13 = BITSF(LD32(s1+4));
    f12 = f20;
    a0 = (u32)-1;
    a1 = 2;
    a2 = sp + 0;
    { rv_t r_ = func_088CBB34(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A567DC;
L_08A567DC:;
    v0 = LD32(s4+4);
    goto L_08A567E0;
L_08A567E0:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A567F4;
L_08A567F4:;
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08A56A24; }
    goto L_08A56800;
L_08A56800:;
    v0 = LD32(s4+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56818;
L_08A56818:;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5682C;
L_08A5682C:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_08A56A00; }
    goto L_08A56834;
L_08A56834:;
    a2 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(a2-12);
    v0 = s5 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s4+8); goto L_08A56A04; }
    goto L_08A56858;
L_08A56858:;
    v1 = LD32(s4+4);
    v0 = D_08C30FA8 - (4008);
    a1 = LD_U8(v0+4008);
    a0 = LD_U8(v1+28);
    s1 = 0xff000000u;
    v0 = (u32)-1;
    if (a0 == 0) s1 = v0;
    cnd_ = a1 != 0;
    s3 = D_08AF04DC - (1244);
    if (cnd_) { goto L_08A568F8; }
    goto L_08A5687C;
L_08A5687C:;
    v0 = LD_U8(s4+80);
    cnd_ = v0 == 0;
    v0 = LD32(a2+88);
    if (cnd_) { goto L_08A56D00; }
    goto L_08A56888;
L_08A56888:;
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56890;
L_08A56890:;
    a0 = 374;
    a1 = 0 + 0;
    s0 = v0 + 0;
    v0 = func_08A4FB7C(a0, a1);
    goto L_08A568A0;
L_08A568A0:;
    a1 = D_08AE5B20 - (23328);
    a1 = a1 + 23328;
    t0 = s0 + 0;
    t1 = v0 + 0;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A568C0;
L_08A568C0:;
    a0 = LD32(s4+68);
    goto L_08A568C4;
L_08A568C4:;
    s3 = D_08AF04DC - (1244);
    func_088CD5B0(a0);
    goto L_08A568CC;
L_08A568CC:;
    f12 = BITSF(0);
    v0 = D_08AF04E4 - (1252);
    f15 = BITSF(LD32(s3+1244));
    f14 = BITSF(LD32(v0+1252));
    a0 = D_08C30BC4 - (3012);
    a0 = a0 + 3012;
    f13 = f12;
    a1 = s1 + 0;
    a2 = 388;
    a3 = sp + 0;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A568F8;
L_08A568F8:;
    v1 = LD32(s4+84);
    v0 = D_08B1C8A4 - (-14172);
    v0 = v0 - 14172;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a0 = LD32(v1+4);
    s6 = sp + 272;
    s0 = sp + 336;
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5691C;
L_08A5691C:;
    a1 = v0 + 0;
    a0 = s6 + 0;
    s2 = v0 + 0;
    func_08A5D6D0(a0, a1);
    goto L_08A5692C;
L_08A5692C:;
    v0 = D_08C30BAC - (2988);
    a0 = D_08C30BB4 - (2996);
    v1 = v0 + 2988;
    a1 = a0 + 2996;
    f0 = BITSF(LD32(a0+2996));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(v0+2988));
    f3 = BITSF(LD32(v1+4));
    a0 = 40;
    a1 = s0 + 0;
    a2 = 1;
    a3 = s1 + 0;
    ST32(sp+320, FBITS(f0));
    ST32(sp+324, FBITS(f1));
    ST32(sp+336, FBITS(f2));
    ST32(sp+340, FBITS(f3));
    ST32(sp+304, FBITS(f2));
    ST32(sp+308, FBITS(f3));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A56978;
L_08A56978:;
    t1 = s1 + 0;
    f0 = BITSF(LD32(sp+320));
    f1 = BITSF(LD32(sp+324));
    a0 = 40;
    a1 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    t0 = 1;
    ST32(sp+336, FBITS(f0));
    ST32(sp+340, FBITS(f1));
    func_08A50968(a0, a1, a2, a3, t0, t1);
    goto L_08A569A4;
L_08A569A4:;
    f20 = BITSF(LD32(s3+1244));
    f6 = BITSF(LD32(s4+76));
    fcc = FCMP(f6, f20, 2);
    cnd_ = fcc;
    v0 = D_08C30BBC - (3004);
    if (cnd_) { goto L_08A56CD0; }
    goto L_08A569BC;
L_08A569BC:;
    f0 = BITSF(0);
    fcc = FCMP(f6, f0, 2);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp+276));
    if (cnd_) { goto L_08A56BC8; }
    goto L_08A569D0;
L_08A569D0:;
    v0 = D_08C30BBC - (3004);
    v1 = v0 + 3004;
    f0 = BITSF(LD32(v0+3004));
    f1 = BITSF(LD32(v1+4));
    a0 = LD32(s4+84);
    ST32(sp+336, FBITS(f0));
    a1 = s0 + 0;
    a2 = 1;
    ST32(sp+340, FBITS(f1));
    a3 = (u32)-1;
    goto L_08A569F8;
L_08A569F8:;
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A56A00;
L_08A56A00:;
    v0 = LD_U8(s4+8);
    goto L_08A56A04;
L_08A56A04:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A56A24; }
    goto L_08A56A0C;
L_08A56A0C:;
    cnd_ = s5 == 0;
    v0 = D_08C30FA8 - (4008);
    if (cnd_) { goto L_08A56A24; }
    goto L_08A56A14;
L_08A56A14:;
    v1 = LD_U8(v0+4008);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s5); goto L_08A56A58; }
    goto L_08A56A20;
L_08A56A20:;
    goto L_08A56A24;
L_08A56A24:;
    sp = sp + 736;
    return (rv_t){ v0, v1, f0 };
L_08A56A58:;
    s3 = sp + 400;
    s1 = D_08C30BD4 - (3028);
    a0 = LD32(v0-12);
    a0 = s5 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s2 = s1 + 3028;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56A78;
L_08A56A78:;
    s0 = v0 + 0;
    v0 = LD32(s4+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56A94;
L_08A56A94:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(672);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = 358;
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+260, FBITS(f0));
    a1 = 0 + 0;
    ST32(sp+256, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+264, FBITS(f4));
    f20 = BITSF(F2I(f0, 1));
    v0 = func_08A4FB7C(a0, a1);
    goto L_08A56B00;
L_08A56B00:;
    a1 = D_08AE5B2C - (23340);
    t0 = v0 + 0;
    a3 = 1;
    a1 = a1 + 23340;
    a0 = sp + 0;
    a2 = 128;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56B1C;
L_08A56B1C:;
    v0 = D_08AF04DC - (1244);
    f12 = BITSF(LD32(v0+1244));
    a0 = sp + 0;
    a1 = 0 + 0;
    a2 = 4;
    f0 = func_088CD128(a0, a1, a2, f12);
    goto L_08A56B34;
L_08A56B34:;
    t0 = FBITS(f20);
    a1 = D_08AE5B34 - (23348);
    a1 = a1 + 23348;
    a2 = 128;
    a3 = 1;
    a0 = s3 + 0;
    v0 = D_08AF04EC - (1260);
    f23 = f0;
    f22 = BITSF(LD32(v0+1260));
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56B5C;
L_08A56B5C:;
    a0 = LD32(s4+68);
    f21 = f23 + f22;
    func_088CD5B0(a0);
    goto L_08A56B68;
L_08A56B68:;
    v0 = D_08AF04E8 - (1256);
    f20 = BITSF(LD32(v0+1256));
    f0 = BITSF(LD32(s1+3028));
    f13 = BITSF(LD32(s2+4));
    f21 = f21 * f20;
    f1 = f23 * f20;
    a0 = (u32)-1;
    a1 = 4;
    f0 = f0 - f21;
    a2 = sp + 0;
    f22 = f22 * f20;
    f12 = f0 + f1;
    { rv_t r_ = func_088CBB34(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56B9C;
L_08A56B9C:;
    f0 = BITSF(LD32(s1+3028));
    f13 = BITSF(LD32(s2+4));
    a2 = s3 + 0;
    f0 = f0 - f21;
    a0 = (u32)-1;
    a1 = 4;
    f0 = f0 + f23;
    f12 = f0 + f22;
    { rv_t r_ = func_088CBB34(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56BC0;
L_08A56BC0:;
    goto L_08A56A24;
L_08A56BC8:;
    f4 = BITSF(LD32(sp+284));
    f0 = BITSF(LD32(sp+280));
    f1 = BITSF(LD32(sp+288));
    f4 = f4 - f5;
    f3 = BITSF(LD32(sp+292));
    f1 = f1 - f0;
    f2 = BITSF(LD32(sp+296));
    f3 = f3 * f4;
    v0 = D_08AF04E8 - (1256);
    f2 = f2 * f1;
    f0 = BITSF(LD32(v0+1256));
    v1 = D_08C30BBC - (3004);
    f4 = f4 * f6;
    f2 = f2 * f0;
    f3 = f3 * f0;
    v0 = v1 + 3004;
    f0 = BITSF(LD32(v1+3004));
    f1 = BITSF(LD32(v0+4));
    f5 = f5 + f4;
    f0 = f0 - f3;
    f1 = f1 - f2;
    s1 = sp + 352;
    a1 = s2 + 0;
    a0 = s1 + 0;
    ST32(sp+284, FBITS(f5));
    s0 = sp + 384;
    ST32(sp+336, FBITS(f0));
    ST32(sp+340, FBITS(f1));
    func_08A5D6D0(a0, a1);
    goto L_08A56C3C;
L_08A56C3C:;
    a0 = s4 + 0;
    f2 = BITSF(LD32(s4+76));
    f3 = BITSF(LD32(sp+364));
    f1 = BITSF(LD32(sp+356));
    f2 = f20 - f2;
    f0 = BITSF(LD32(sp+336));
    f1 = f1 - f3;
    ST32(sp+384, FBITS(f0));
    f1 = f1 * f2;
    f0 = BITSF(LD32(sp+340));
    f3 = f3 + f1;
    ST32(sp+388, FBITS(f0));
    ST32(sp+356, FBITS(f3));
    v0 = func_08A56D2C(a0);
    goto L_08A56C74;
L_08A56C74:;
    a3 = v0 + 0;
    a0 = s6 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A56C88;
L_08A56C88:;
    f0 = BITSF(LD32(sp+276));
    f1 = BITSF(LD32(sp+284));
    f2 = BITSF(LD32(sp+292));
    a0 = s1 + 0;
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+336));
    a1 = s0 + 0;
    a2 = 0 + 0;
    f2 = f2 * f1;
    f1 = BITSF(LD32(sp+340));
    a3 = (u32)-1;
    f0 = f0 + f2;
    ST32(sp+388, FBITS(f1));
    ST32(sp+384, FBITS(f0));
    ST32(sp+336, FBITS(f0));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A56CC8;
L_08A56CC8:;
    v0 = LD_U8(s4+8);
    goto L_08A56A04;
L_08A56CD0:;
    v1 = v0 + 3004;
    f0 = BITSF(LD32(v0+3004));
    f1 = BITSF(LD32(v1+4));
    a0 = s4 + 0;
    ST32(sp+336, FBITS(f0));
    ST32(sp+340, FBITS(f1));
    v0 = func_08A56D2C(a0);
    goto L_08A56CEC;
L_08A56CEC:;
    a3 = v0 + 0;
    a0 = LD32(s4+84);
    a1 = s0 + 0;
    a2 = 1;
    goto L_08A569F8;
L_08A56D00:;
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56D08;
L_08A56D08:;
    a1 = D_08AE5B2C - (23340);
    a1 = a1 + 23340;
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A56D24;
L_08A56D24:;
    a0 = LD32(s4+68);
    goto L_08A568C4;
}

/* 08A56D2C */
u32 func_08A56D2C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A56D2C:;
    sp = sp - 32;
    v0 = LD_U8(a0+80);
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A56F20; }
    goto L_08A56D40;
L_08A56D40:;
    v0 = D_08AF04F4 - (1268);
    f0 = BITSF(LD32(a0+72));
    f1 = BITSF(LD32(v0+1268));
    a0 = D_08AF04F0 - (1264);
    f3 = BITSF(LD32(a0+1264));
    fcc = FCMP(f1, f0, 14);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, FBITS(f3));
    cnd_ = fcc;
    f1 = BITSF(LD32(v1+76));
    if (cnd_) { goto L_08A56D7C; }
    goto L_08A56D70;
L_08A56D70:;
    v0 = D_08AF04F8 - (1272);
    f0 = BITSF(LD32(v0+1272));
    f1 = f1 * f0;
    goto L_08A56D7C;
L_08A56D7C:;
    v0 = D_08AF04FC - (1276);
    f2 = BITSF(LD32(v0+1276));
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    v0 = D_08AF0500 - (1280);
    if (cnd_) { goto L_08A56EB8; }
    goto L_08A56D94;
L_08A56D94:;
    f0 = BITSF(LD32(v0+1280));
    ST32(sp, FBITS(f3));
    f0 = f1 * f0;
    ST32(sp+4, FBITS(f0));
    goto L_08A56DA4;
L_08A56DA4:;
    v1 = D_08AF0504 - (1284);
    f0 = BITSF(LD32(v1+1284));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A56EA8; }
    goto L_08A56DC8;
L_08A56DC8:;
    a1 = D_08AF0508 - (1288);
    f0 = BITSF(LD32(a1+1288));
    f0 = f1 + f0;
    goto L_08A56DD4;
L_08A56DD4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v1+1284));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A56E9C; }
    goto L_08A56DFC;
L_08A56DFC:;
    f0 = BITSF(LD32(a1+1288));
    f0 = f2 + f0;
    goto L_08A56E04;
L_08A56E04:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+1284));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A56E90; }
    goto L_08A56E30;
L_08A56E30:;
    f0 = BITSF(LD32(a1+1288));
    f0 = f1 + f0;
    goto L_08A56E38;
L_08A56E38:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v1+1284));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A56E84; }
    goto L_08A56E64;
L_08A56E64:;
    f0 = BITSF(LD32(a1+1288));
    f0 = f1 + f0;
    goto L_08A56E6C;
L_08A56E6C:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    goto L_08A56E7C;
L_08A56E7C:;
    sp = sp + 32;
    return v0;
L_08A56E84:;
    f0 = BITSF(LD32(a1+1288));
    f0 = f1 - f0;
    goto L_08A56E6C;
L_08A56E90:;
    f0 = BITSF(LD32(a1+1288));
    f0 = f1 - f0;
    goto L_08A56E38;
L_08A56E9C:;
    f0 = BITSF(LD32(a1+1288));
    f0 = f2 - f0;
    goto L_08A56E04;
L_08A56EA8:;
    a1 = D_08AF0508 - (1288);
    f0 = BITSF(LD32(a1+1288));
    f0 = f1 - f0;
    goto L_08A56DD4;
L_08A56EB8:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AF04F8 - (1272);
    if (cnd_) { goto L_08A56EF8; }
    goto L_08A56EC8;
L_08A56EC8:;
    f0 = BITSF(LD32(v0+1272));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = D_08AF0500 - (1280);
    if (cnd_) { goto L_08A56F00; }
    goto L_08A56EDC;
L_08A56EDC:;
    f0 = f1 - f2;
    f1 = BITSF(LD32(v0+1280));
    ST32(sp+4, FBITS(f3));
    f0 = f0 * f1;
    f0 = f3 - f0;
    ST32(sp, FBITS(f0));
    goto L_08A56DA4;
L_08A56EF8:;
    f0 = BITSF(LD32(v0+1272));
    v0 = D_08AF0500 - (1280);
    goto L_08A56F00;
L_08A56F00:;
    f2 = BITSF(LD32(a0+1264));
    f0 = f1 - f0;
    f1 = BITSF(LD32(v0+1280));
    f0 = f0 * f1;
    f2 = f2 - f0;
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    goto L_08A56DA4;
L_08A56F20:;
    f12 = BITSF(LD32(a0+76));
    a1 = 0xff000000u;
    a2 = 0xff000000u;
    a1 = a1 | 0xffff;
    a2 = a2 | 0x80;
    v0 = func_08A56F40(a1, a2, f12);
    goto L_08A56F38;
L_08A56F38:;
    goto L_08A56E7C;
}

/* 08A56F40 */
u32 func_08A56F40(u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A56F40:;
    sp = sp - 96;
    v0 = a1 >> 24;
    v1 = a2 >> 24;
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    v0 = D_08AF050C - (1292);
    f14 = (float)(s32)FBITS(f0);
    f15 = (float)(s32)FBITS(f1);
    f0 = BITSF(LD32(v0+1292));
    v0 = D_08AF0510 - (1296);
    f1 = BITSF(LD32(v0+1296));
    a0 = a1 & 0xff;
    f15 = f15 * f0;
    f1 = f1 - f12;
    f14 = f14 * f0;
    f2 = BITSF(a0);
    v0 = (a1 >> 8) & 0xff;
    a0 = (a2 >> 8) & 0xff;
    a1 = (a1 >> 16) & 0xff;
    v1 = a2 & 0xff;
    a2 = (a2 >> 16) & 0xff;
    f4 = BITSF(a1);
    f11 = BITSF(a0);
    f3 = BITSF(v0);
    f10 = BITSF(v1);
    f13 = BITSF(a2);
    f19 = f14 * f1;
    f20 = f15 * f12;
    f5 = (float)(s32)FBITS(f2);
    f6 = (float)(s32)FBITS(f3);
    f7 = (float)(s32)FBITS(f4);
    f8 = (float)(s32)FBITS(f10);
    f9 = (float)(s32)FBITS(f11);
    f10 = (float)(s32)FBITS(f13);
    f5 = f5 * f0;
    f6 = f6 * f0;
    f7 = f7 * f0;
    f8 = f8 * f0;
    f9 = f9 * f0;
    f10 = f10 * f0;
    f18 = f19 + f20;
    a1 = D_08AF0514 - (1300);
    f0 = BITSF(LD32(a1+1300));
    f11 = f7 * f1;
    f13 = f6 * f1;
    f16 = f10 * f12;
    f17 = f9 * f12;
    f21 = f18 * f0;
    f1 = f5 * f1;
    f12 = f8 * f12;
    f0 = BITSF(0);
    f2 = f11 + f16;
    f3 = f13 + f17;
    f4 = f1 + f12;
    fcc = FCMP(f0, f21, 12);
    ST32(sp+32, FBITS(f2));
    a0 = sp + 32;
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+4, FBITS(f6));
    ST32(sp, FBITS(f7));
    ST32(sp+12, FBITS(f14));
    ST32(sp+24, FBITS(f8));
    ST32(sp+20, FBITS(f9));
    ST32(sp+16, FBITS(f10));
    ST32(sp+28, FBITS(f15));
    ST32(sp+48, FBITS(f11));
    ST32(sp+52, FBITS(f13));
    ST32(sp+56, FBITS(f1));
    ST32(sp+60, FBITS(f19));
    ST32(sp+64, FBITS(f16));
    ST32(sp+68, FBITS(f17));
    ST32(sp+72, FBITS(f12));
    ST32(sp+76, FBITS(f20));
    cnd_ = !fcc;
    ST32(sp+44, FBITS(f18));
    if (cnd_) { goto L_08A57160; }
    goto L_08A5707C;
L_08A5707C:;
    v1 = D_08AF0518 - (1304);
    f0 = BITSF(LD32(v1+1304));
    f0 = f21 + f0;
    goto L_08A57088;
L_08A57088:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a1+1300));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A57154; }
    goto L_08A570B0;
L_08A570B0:;
    f0 = BITSF(LD32(v1+1304));
    f0 = f2 + f0;
    goto L_08A570B8;
L_08A570B8:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+1300));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A57148; }
    goto L_08A570E4;
L_08A570E4:;
    f0 = BITSF(LD32(v1+1304));
    f0 = f1 + f0;
    goto L_08A570EC;
L_08A570EC:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1+1300));
    a0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A5713C; }
    goto L_08A57118;
L_08A57118:;
    f0 = BITSF(LD32(v1+1304));
    f0 = f1 + f0;
    goto L_08A57120;
L_08A57120:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 96;
    return v0;
L_08A5713C:;
    f0 = BITSF(LD32(v1+1304));
    f0 = f1 - f0;
    goto L_08A57120;
L_08A57148:;
    f0 = BITSF(LD32(v1+1304));
    f0 = f1 - f0;
    goto L_08A570EC;
L_08A57154:;
    f0 = BITSF(LD32(v1+1304));
    f0 = f2 - f0;
    goto L_08A570B8;
L_08A57160:;
    v1 = D_08AF0518 - (1304);
    f0 = BITSF(LD32(v1+1304));
    f0 = f21 - f0;
    goto L_08A57088;
}

/* 08A57170 */
rv_t func_08A57170(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A57170:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 32;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A57330; }
    goto L_08A571A0;
L_08A571A0:;
    v0 = D_08AF051C - (1308);
    f1 = BITSF(LD32(v0+1308));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t3 = D_08C30B7C - (2940);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    a2 = t3 + 2940;
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
    f5 = f5 * f1;
    v0 = D_08AF0520 - (1312);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f1;
    t0 = D_08C30BAC - (2988);
    ST32(a2+12, FBITS(f2));
    f3 = f3 * f1;
    t1 = D_08C30BB4 - (2996);
    f1 = BITSF(LD32(v0+1312));
    v0 = D_08AF0530 - (1328);
    f8 = BITSF(LD32(v0+1328));
    v0 = D_08C30B6C - (2924);
    ST32(v0+2924, FBITS(f5));
    a1 = v0 + 2924;
    v0 = D_08AF0524 - (1316);
    f0 = BITSF(LD32(v0+1316));
    v0 = D_08AF052C - (1324);
    t5 = D_08C30BBC - (3004);
    ST32(t0+2988, FBITS(f0));
    a3 = D_08C30B5C - (2908);
    v1 = D_08AF0528 - (1320);
    f0 = BITSF(LD32(v0+1324));
    v0 = D_08AF0534 - (1332);
    t2 = t5 + 3004;
    ST32(t1+2996, FBITS(f0));
    t4 = D_08C30B8C - (2956);
    a0 = a3 + 2908;
    f0 = BITSF(LD32(v0+1332));
    v0 = D_08AF0538 - (1336);
    ST32(a3+2908, FBITS(f3));
    s1 = D_08C30BC4 - (3012);
    t6 = t0 + 2988;
    ST32(t2+4, FBITS(f0));
    t7 = t1 + 2996;
    a3 = s1 + 3012;
    f7 = BITSF(LD32(v1+1320));
    f0 = BITSF(LD32(v0+1336));
    v1 = t4 + 2956;
    v0 = D_08AF0540 - (1344);
    ST32(a0+4, FBITS(f4));
    s0 = D_08C30BD4 - (3028);
    s3 = s0 + 3028;
    ST32(a0+12, FBITS(f2));
    s2 = D_08C30BDC - (3036);
    s4 = s2 + 3036;
    ST32(a1+4, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(t3+2940, FBITS(f2));
    ST32(t4+2956, FBITS(f1));
    ST32(v1+28, 0);
    ST32(v1+16, FBITS(f1));
    ST32(t6+4, FBITS(f7));
    ST32(t7+4, FBITS(f7));
    ST32(t5+3004, FBITS(f8));
    ST32(a0+8, FBITS(f5));
    ST32(a2+4, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a2+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f1));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    ST32(s1+3012, FBITS(f0));
    f0 = BITSF(LD32(v0+1344));
    v0 = D_08AF0544 - (1348);
    ST32(a3+12, FBITS(f0));
    f0 = BITSF(LD32(v0+1348));
    v0 = D_08AF0548 - (1352);
    ST32(s0+3028, FBITS(f8));
    ST32(s3+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1352));
    v0 = D_08AF054C - (1356);
    ST32(s2+3036, FBITS(f0));
    f0 = BITSF(LD32(v0+1356));
    v0 = D_08AF053C - (1340);
    ST32(s4+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1340));
    ST32(a3+4, FBITS(f7));
    ST32(a3+8, FBITS(f0));
    goto L_08A57330;
L_08A57330:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5734C */
rv_t func_08A5734C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5734C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A57170(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57360;
L_08A57360:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5736C */
void func_08A5736C(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5736C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A57380;
L_08A57380:;
    v0 = D_08B15550 - (21840);
    v0 = v0 + 21840;
    ST32(s0, v0);
    ST32(s0+32, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return;
}

/* 08A573B0 */
rv_t func_08A573B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A573B0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE5B3C - (23356);
    a0 = a0 + 23356;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A573CC;
L_08A573CC:;
    ST32(s0+32, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A573E4 */
rv_t func_08A573E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A573E4:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    ST32(sp, 0);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+216);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57410;
L_08A57410:;
    a2 = s0 + 20;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A5749C; }
    goto L_08A5741C;
L_08A5741C:;
    v0 = LD32(s0+4);
    v1 = LD32(v0+24);
    f0 = BITSF(LD32(v1+52));
    ST32(s0+20, FBITS(f0));
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    f0 = BITSF(LD32(v1+80));
    ST32(sp, FBITS(f0));
    goto L_08A57440;
L_08A57440:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(s0+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    f3 = f0;
    if (cnd_) { goto L_08A5748C; }
    goto L_08A57458;
L_08A57458:;
    f0 = BITSF(LD32(sp));
    v0 = D_08AF0550 - (1360);
    f0 = f0 / f1;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(v0+1360));
    if (cnd_) { goto L_08A57488; }
    goto L_08A57474;
L_08A57474:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f3 = f2;
    if (cnd_) { goto L_08A57488; }
    goto L_08A57484;
L_08A57484:;
    f3 = f0;
    goto L_08A57488;
L_08A57488:;
    ST32(s0+16, FBITS(f3));
    goto L_08A5748C;
L_08A5748C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5749C:;
    v0 = LD32(s0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+284);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A574B4;
L_08A574B4:;
    goto L_08A57440;
}

/* 08A574BC */
rv_t func_08A574BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A574BC:;
    sp = sp - 80;
    s2 = (u32)-1;
    s1 = a0 + 0;
    s0 = 0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(v0+24);
    v0 = LD_U8(v1+196);
    cnd_ = v0 == 0;
    a0 = 26;
    if (cnd_) { goto L_08A57828; }
    goto L_08A574FC;
L_08A574FC:;
    f12 = BITSF(LD32(s1+16));
    a1 = D_08C30C34 - (3124);
    a1 = a1 + 3124;
    a2 = s2 + 0;
    a3 = s0 + 0;
    { rv_t r_ = func_08A512F8(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57514;
L_08A57514:;
    v0 = LD32(s1+4);
    v1 = LD_U8(v0+28);
    cnd_ = v1 == 0;
    v0 = D_08AE5B84 - (23428);
    if (cnd_) { goto L_08A57820; }
    goto L_08A57524;
L_08A57524:;
    v0 = D_08AE5B80 - (23424);
    a3 = LD32(v0+23424);
    goto L_08A5752C;
L_08A5752C:;
    v0 = D_08C30C44 - (3140);
    v1 = v0 + 3140;
    f0 = BITSF(LD32(v0+3140));
    f1 = BITSF(LD32(v1+4));
    a0 = 21;
    a2 = 1;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A57554;
L_08A57554:;
    a3 = D_08B1C8A0 - (-14176);
    a2 = LD32(a3-14176);
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_08A57778; }
    goto L_08A5756C;
L_08A5756C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A575BC; }
    goto L_08A57590;
L_08A57590:;
    a0 = LD32(a1);
    goto L_08A57594;
L_08A57594:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A57800; }
    goto L_08A575AC;
L_08A575AC:;
    a1 = LD32(a1+4);
    goto L_08A575B0;
L_08A575B0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A57594; }
    goto L_08A575B8;
L_08A575B8:;
    v1 = 0 + 0;
    goto L_08A575BC;
L_08A575BC:;
    cnd_ = v1 == 0;
    a1 = D_08C2B3A4 - (-19548);
    if (cnd_) { goto L_08A57774; }
    goto L_08A575C4;
L_08A575C4:;
    a2 = LD32(v1+4);
    v0 = 999;
    v1 = a1 - 19548;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A57628; }
    goto L_08A575D8;
L_08A575D8:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A57628; }
    goto L_08A575FC;
L_08A575FC:;
    a0 = LD32(a1);
    goto L_08A57600;
L_08A57600:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A57754; }
    goto L_08A57618;
L_08A57618:;
    a1 = LD32(a1+4);
    goto L_08A5761C;
L_08A5761C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A57600; }
    goto L_08A57624;
L_08A57624:;
    a0 = 0 + 0;
    goto L_08A57628;
L_08A57628:;
    cnd_ = a0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A576B8; }
    goto L_08A57630;
L_08A57630:;
    v0 = LD32(a0);
    f20 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08A576BC; }
    goto L_08A57654;
L_08A57654:;
    f2 = BITSF(LD32(a0+52));
    s4 = D_08AF0554 - (1364);
    fcc = FCMP(f2, f20, 2);
    cnd_ = !fcc;
    ST32(s1+28, FBITS(f2));
    if (cnd_) { goto L_08A57718; }
    goto L_08A5766C;
L_08A5766C:;
    f12 = BITSF(LD32(s1+28));
    fcc = FCMP(f12, f20, 2);
    cnd_ = !fcc;
    s3 = D_08C30C3C - (3132);
    if (cnd_) { goto L_08A576DC; }
    goto L_08A57680;
L_08A57680:;
    a0 = LD32(s1+32);
    func_088CD5B0(a0);
    goto L_08A57688;
L_08A57688:;
    v1 = LD32(s0);
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57698;
L_08A57698:;
    v1 = s3 + 3132;
    f14 = BITSF(LD32(s4+1364));
    f12 = BITSF(LD32(s3+3132));
    f13 = BITSF(LD32(v1+4));
    a2 = v0 + 0;
    a0 = (u32)-1;
    a1 = 4128;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A576B8;
L_08A576B8:;
    goto L_08A576BC;
L_08A576BC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A576DC:;
    f13 = BITSF(LD32(s1+24));
    v0 = func_08A514E4(f12, f13);
    goto L_08A576E4;
L_08A576E4:;
    f12 = BITSF(LD32(s1+28));
    a0 = s1 + 0;
    s2 = v0 + 0;
    v0 = func_08A57854(f12);
    goto L_08A576F4;
L_08A576F4:;
    f12 = BITSF(LD32(s1+24));
    a3 = 0xffc00000u;
    a1 = s3 + 3132;
    a0 = v0 + 0;
    a2 = s2 + 0;
    a3 = a3 | 0xc0c0;
    { rv_t r_ = func_08A512F8(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57710;
L_08A57710:;
    goto L_08A57680;
L_08A57718:;
    v1 = LD32(a0);
    f1 = BITSF(LD32(s4+1364));
    a0 = sp + 16;
    v0 = LD32(v1-12);
    a1 = sp + 20;
    a2 = sp + 24;
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+80));
    ST32(sp+24, FBITS(f1));
    f0 = f0 / f2;
    ST32(sp+20, FBITS(f20));
    ST32(sp+16, FBITS(f0));
    f0 = func_08A57A68(a0, a1, a2);
    goto L_08A5774C;
L_08A5774C:;
    ST32(s1+24, FBITS(f0));
    goto L_08A5766C;
L_08A57754:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5761C; }
    goto L_08A57760;
L_08A57760:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5761C; }
    goto L_08A5776C;
L_08A5776C:;
    goto L_08A57628;
L_08A57774:;
    a2 = LD32(a3-14176);
    goto L_08A57778;
L_08A57778:;
    a1 = D_08C2C200 - (-15872);
    v0 = 999;
    v1 = a1 - 15872;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A57628; }
    goto L_08A5778C;
L_08A5778C:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A57628; }
    goto L_08A577B0;
L_08A577B0:;
    a0 = LD32(a1);
    goto L_08A577B4;
L_08A577B4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A577E0; }
    goto L_08A577CC;
L_08A577CC:;
    a1 = LD32(a1+4);
    goto L_08A577D0;
L_08A577D0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A577B4; }
    goto L_08A577D8;
L_08A577D8:;
    a0 = 0 + 0;
    goto L_08A57628;
L_08A577E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A577D0; }
    goto L_08A577EC;
L_08A577EC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A577D0; }
    goto L_08A577F8;
L_08A577F8:;
    goto L_08A57628;
L_08A57800:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A575AC; }
    goto L_08A5780C;
L_08A5780C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A575B0; }
    goto L_08A57818;
L_08A57818:;
    goto L_08A575BC;
L_08A57820:;
    a3 = LD32(v0+23428);
    goto L_08A5752C;
L_08A57828:;
    f12 = BITSF(LD32(s1+20));
    f13 = BITSF(LD32(s1+16));
    s0 = 0xffc00000u;
    s0 = s0 | 0xc0c0;
    v0 = func_08A514E4(f12, f13);
    goto L_08A5783C;
L_08A5783C:;
    f12 = BITSF(LD32(s1+20));
    a0 = s1 + 0;
    s2 = v0 + 0;
    v0 = func_08A57854(f12);
    goto L_08A5784C;
L_08A5784C:;
    a0 = v0 + 0;
    goto L_08A574FC;
}

/* 08A57854 */
u32 func_08A57854(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
L_08A57854:;
    v0 = D_08AF0558 - (1368);
    f0 = BITSF(LD32(v0+1368));
    f1 = BITSF(0);
    f12 = f12 * f0;
    fcc = FCMP(f1, f12, 12);
    cnd_ = !fcc;
    v0 = D_08AF055C - (1372);
    if (cnd_) { goto L_08A578D0; }
    goto L_08A57874;
L_08A57874:;
    f0 = BITSF(LD32(v0+1372));
    f0 = f12 + f0;
    goto L_08A5787C;
L_08A5787C:;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    a0 = 7;
    if (cnd_) { goto L_08A578B0; }
    goto L_08A57890;
L_08A57890:;
    v0 = v1 << 2;
    v1 = D_08AE5B64 - (23396);
    v1 = v1 + 23396;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A578ACu: goto L_08A578AC; case 0x08A578B8u: goto L_08A578B8; case 0x08A578C0u: goto L_08A578C0; case 0x08A578C8u: goto L_08A578C8; default: rs_break(0, 0x08a578a4); }
L_08A578AC:;
    a0 = 8;
    goto L_08A578B0;
L_08A578B0:;
    v0 = a0 + 0;
    return v0;
L_08A578B8:;
    a0 = 9;
    goto L_08A578B0;
L_08A578C0:;
    a0 = 10;
    goto L_08A578B0;
L_08A578C8:;
    a0 = 7;
    goto L_08A578B0;
L_08A578D0:;
    f0 = BITSF(LD32(v0+1372));
    f0 = f12 - f0;
    goto L_08A5787C;
}

/* 08A578DC */
rv_t func_08A578DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A578DC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    sp = sp - 16;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30BE4 - (3044);
    t4 = D_08C30BF4 - (3060);
    t8 = D_08C30C04 - (3076);
    t9 = D_08C30C14 - (3092);
    s0 = D_08C30C34 - (3124);
    t2 = D_08C30C3C - (3132);
    t5 = D_08C30C44 - (3140);
    s2 = D_08C30C4C - (3148);
    a1 = a1 & a0;
    a2 = t9 + 3092;
    a3 = t3 + 3044;
    t0 = t4 + 3060;
    t1 = t8 + 3076;
    t6 = s0 + 3124;
    t7 = t2 + 3132;
    s1 = t5 + 3140;
    cnd_ = a1 == 0;
    s3 = s2 + 3148;
    if (cnd_) { goto L_08A57A50; }
    goto L_08A57948;
L_08A57948:;
    v0 = D_08AF0560 - (1376);
    f3 = BITSF(LD32(v0+1376));
    v0 = D_08AF0568 - (1384);
    f8 = BITSF(LD32(v0+1384));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(a2+8, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+24, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    ST32(a2+28, 0);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    ST32(a2+20, 0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f3;
    v0 = D_08AF056C - (1388);
    f1 = f1 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+1388));
    v0 = D_08AF0570 - (1392);
    ST32(t1+12, FBITS(f1));
    f6 = f6 * f3;
    f4 = f4 * f3;
    ST32(t3+3044, FBITS(f2));
    v1 = D_08AF0564 - (1380);
    f5 = f5 * f3;
    ST32(t6+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1392));
    v0 = D_08AF0574 - (1396);
    f7 = BITSF(LD32(v1+1380));
    ST32(t7+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1396));
    v0 = D_08AF0578 - (1400);
    ST32(t2+3132, FBITS(f8));
    ST32(t5+3140, FBITS(f0));
    f0 = BITSF(LD32(v0+1400));
    v0 = D_08AF057C - (1404);
    ST32(t4+3060, FBITS(f6));
    ST32(s1+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1404));
    v0 = D_08AF0580 - (1408);
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t8+3076, FBITS(f1));
    ST32(t9+3092, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(s0+3124, FBITS(f8));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    ST32(s2+3148, FBITS(f0));
    f0 = BITSF(LD32(v0+1408));
    ST32(s3+4, FBITS(f0));
    goto L_08A57A50;
L_08A57A50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A57A68 */
float func_08A57A68(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A57A68:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A57A94; }
    goto L_08A57A80;
L_08A57A80:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A57A94; }
    goto L_08A57A94;
L_08A57A94:;
    return f0;
}

/* 08A57A9C */
rv_t func_08A57A9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A57A9C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A578DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57AB0;
L_08A57AB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A57ABC */
void func_08A57ABC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A57ABC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A57AD8;
L_08A57AD8:;
    v0 = D_08B15578 - (21880);
    v0 = v0 + 21880;
    ST32(s0, v0);
    v0 = 4;
    f1 = BITSF(0);
    ST32(s0+36, v0);
    v0 = 999;
    a3 = s0 + 16;
    ST32(s0+48, v0);
    v0 = D_08AF0588 - (1416);
    t0 = D_08B45AA8 - (23208);
    f0 = BITSF(LD32(v0+1416));
    ST32(a3+8, FBITS(f1));
    v1 = t0 + 23208;
    a2 = s0 + 52;
    ST32(a3+4, FBITS(f1));
    a0 = s0 + 88;
    a1 = s1 + 0;
    ST32(s0+40, FBITS(f1));
    ST32(s0+44, FBITS(f0));
    ST32(s0+16, FBITS(f1));
    ST32(s0+28, FBITS(f1));
    ST32(s0+32, FBITS(f1));
    f8 = BITSF(LD32(t0+23208));
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f5 = BITSF(LD32(v1+20));
    f6 = BITSF(LD32(v1+24));
    f7 = BITSF(LD32(v1+28));
    ST32(s0+52, FBITS(f8));
    ST32(a2+32, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    ST32(a2+12, FBITS(f3));
    ST32(a2+16, FBITS(f4));
    ST32(a2+20, FBITS(f5));
    ST32(a2+24, FBITS(f6));
    ST32(a2+28, FBITS(f7));
    func_08A5A234(a0, a1);
    goto L_08A57B80;
L_08A57B80:;
    sp = sp + 16;
    return;
}

/* 08A57B94 */
rv_t func_08A57B94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A57B94:;
    v0 = D_08B15410 - (21520);
    v0 = v0 + 21520;
    ST32(a0, v0);
    ST32(a0+88, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08A57BA8 */
rv_t func_08A57BA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A57BA8:;
    v0 = D_08B15410 - (21520);
    v0 = v0 + 21520;
    ST32(a0, v0);
    sp = sp - 16;
    ST32(a0+88, v0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A57BC8;
L_08A57BC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A57BD4 */
rv_t func_08A57BD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A57BD4:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = a0 + 88;
    s0 = s1 + 52;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08A5A28C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A57BF4;
L_08A57BF4:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A58138; }
    goto L_08A57C00;
L_08A57C00:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    v0 = v1 + 12;
    f0 = BITSF(LD32(v0+32));
    goto L_08A57C10;
L_08A57C10:;
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s0+32, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    ST32(s0+8, FBITS(f3));
    ST32(s0+12, FBITS(f4));
    ST32(s0+16, FBITS(f5));
    ST32(s0+20, FBITS(f6));
    ST32(s0+24, FBITS(f7));
    ST32(s0+28, FBITS(f8));
    v0 = LD_U8(s1+8);
    cnd_ = v0 == 0;
    v0 = D_08AE5B88 - (23432);
    if (cnd_) { goto L_08A58130; }
    goto L_08A57C60;
L_08A57C60:;
    v0 = D_08AE5B8C - (23436);
    f0 = BITSF(LD32(v0+23436));
    goto L_08A57C68;
L_08A57C68:;
    ST32(s1+44, FBITS(f0));
    f0 = BITSF(0);
    {v[112]=BITSF(LD32(s1+(52)));}
    {v[113]=BITSF(LD32(s1+(56)));}
    {v[114]=BITSF(LD32(s1+(60)));}
    {v[116]=BITSF(LD32(s1+(64)));}
    {v[117]=BITSF(LD32(s1+(68)));}
    {v[118]=BITSF(LD32(s1+(72)));}
    {v[120]=BITSF(LD32(s1+(76)));}
    {v[121]=BITSF(LD32(s1+(80)));}
    {v[122]=BITSF(LD32(s1+(84)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57EF0; }
    goto L_08A57CAC;
L_08A57CAC:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57E30; }
    goto L_08A57CBC;
L_08A57CBC:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A57D54; }
    goto L_08A57CE4;
L_08A57CE4:;
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
    if (cnd_) { goto L_08A57D30; }
    goto L_08A57D20;
L_08A57D20:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A57D30;
L_08A57D30:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57D74; }
    goto L_08A57D40;
L_08A57D40:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A57D74; }
    goto L_08A57D50;
L_08A57D50:;
    goto L_08A57D54;
L_08A57D54:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57D74; }
    goto L_08A57D68;
L_08A57D68:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A57D74;
L_08A57D74:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A57E04; }
    goto L_08A57D94;
L_08A57D94:;
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
    if (cnd_) { goto L_08A57DE0; }
    goto L_08A57DD0;
L_08A57DD0:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A57DE0;
L_08A57DE0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57E24; }
    goto L_08A57DF0;
L_08A57DF0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A57E24; }
    goto L_08A57E00;
L_08A57E00:;
    goto L_08A57E04;
L_08A57E04:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57E24; }
    goto L_08A57E18;
L_08A57E18:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A57E24;
L_08A57E24:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A57FA8; }
    goto L_08A57E2C;
L_08A57E2C:;
    goto L_08A57E30;
L_08A57E30:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A57EC4; }
    goto L_08A57E54;
L_08A57E54:;
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
    if (cnd_) { goto L_08A57EA0; }
    goto L_08A57E90;
L_08A57E90:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A57EA0;
L_08A57EA0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57EE4; }
    goto L_08A57EB0;
L_08A57EB0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A57EE4; }
    goto L_08A57EC0;
L_08A57EC0:;
    goto L_08A57EC4;
L_08A57EC4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57EE4; }
    goto L_08A57ED8;
L_08A57ED8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A57EE4;
L_08A57EE4:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A57FA8; }
    goto L_08A57EEC;
L_08A57EEC:;
    goto L_08A57EF0;
L_08A57EF0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A57F84; }
    goto L_08A57F14;
L_08A57F14:;
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
    if (cnd_) { goto L_08A57F60; }
    goto L_08A57F50;
L_08A57F50:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A57F60;
L_08A57F60:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57FA4; }
    goto L_08A57F70;
L_08A57F70:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A57FA4; }
    goto L_08A57F80;
L_08A57F80:;
    goto L_08A57F84;
L_08A57F84:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A57FA4; }
    goto L_08A57F98;
L_08A57F98:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A57FA4;
L_08A57FA4:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08A57FA8;
L_08A57FA8:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    f1 = BITSF(LD32(sp+4));
    fcc = FCMP(f1, f0, 12);
    f2 = f1;
    cnd_ = !fcc;
    ST32(s1+40, FBITS(f1));
    if (cnd_) { goto L_08A57FD8; }
    goto L_08A57FCC;
L_08A57FCC:;
    v0 = D_08AF058C - (1420);
    f0 = BITSF(LD32(v0+1420));
    f2 = f1 + f0;
    goto L_08A57FD8;
L_08A57FD8:;
    v0 = FBITS(f2);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(s1+4);
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    ST32(s1+40, FBITS(f2));
    a1 = LD32(v0+24);
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    ST32(s1+32, FBITS(f2));
    ST32(s1+28, v0);
    v1 = LD32(a1);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5802C;
L_08A5802C:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_08A58108; }
    goto L_08A58040;
L_08A58040:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A58090; }
    goto L_08A58064;
L_08A58064:;
    a0 = LD32(a1);
    goto L_08A58068;
L_08A58068:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A58110; }
    goto L_08A58080;
L_08A58080:;
    a1 = LD32(a1+4);
    goto L_08A58084;
L_08A58084:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A58068; }
    goto L_08A5808C;
L_08A5808C:;
    v1 = 0 + 0;
    goto L_08A58090;
L_08A58090:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 4; goto L_08A5809C; }
    goto L_08A58098;
L_08A58098:;
    v1 = LD32(v1+64);
    goto L_08A5809C;
L_08A5809C:;
    v0 = LD32(s1+4);
    ST32(s1+36, v1);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = s1 + 16;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A580B8;
L_08A580B8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v0 = LD32(s1+4);
    ST32(s0+8, FBITS(f0));
    ST32(s1+16, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A580E8;
L_08A580E8:;
    ST32(s1+48, v0);
    a0 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08A4FAC0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A580F4;
L_08A580F4:;
    sp = sp + 48;
    { v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08A58108:;
    v1 = 4;
    goto L_08A5809C;
L_08A58110:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A58080; }
    goto L_08A5811C;
L_08A5811C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A58084; }
    goto L_08A58128;
L_08A58128:;
    goto L_08A58090;
L_08A58130:;
    f0 = BITSF(LD32(v0+23432));
    goto L_08A57C68;
L_08A58138:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5814C;
L_08A5814C:;
    f0 = BITSF(LD32(v0+32));
    goto L_08A57C10;
    v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08A58154 */
rv_t func_08A58154(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A58154:;
    sp = sp - 32;
    s3 = D_08C30CB4 - (3252);
    s2 = s3 + 3252;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A582E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5818C;
L_08A5818C:;
    cnd_ = v0 == 0;
    a0 = 12;
    if (cnd_) { goto L_08A581B0; }
    goto L_08A58194;
L_08A58194:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A581B0:;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A581D0;
L_08A581D0:;
    a0 = LD32(s3+3252);
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
    goto L_08A58194;
}

/* 08A58200 */
u64 func_08A58200(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A58200:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A582E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58228;
L_08A58228:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5828C; }
    goto L_08A58230;
L_08A58230:;
    a1 = LD32(s0);
    v1 = D_08C30CB4 - (3252);
    s1 = v1 + 3252;
    v0 = LD32(a1-16);
    a0 = LD32(s1+4);
    a1 = LD32(v1+3252);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A5828C; }
    goto L_08A5826C;
L_08A5826C:;
    v0 = LD32(a0);
    goto L_08A58270;
L_08A58270:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08A5829C; }
    goto L_08A58278;
L_08A58278:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A58270; }
    goto L_08A58288;
L_08A58288:;
    goto L_08A5828C;
L_08A5828C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A5829C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A582AC; }
    goto L_08A582A4;
L_08A582A4:;
    ST8(a0+8, v0);
    goto L_08A58288;
L_08A582AC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A582D4; }
    goto L_08A582B4;
L_08A582B4:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08A582BC;
L_08A582BC:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A582C4;
L_08A582C4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A58288;
L_08A582D4:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08A582BC;
}

/* 08A582E4 */
u64 func_08A582E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A582E4:;
    v0 = 999;
    a2 = a0 + 0;
    cnd_ = a0 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A58350; }
    goto L_08A582F4;
L_08A582F4:;
    a0 = D_08C30CB4 - (3252);
    v1 = a0 + 3252;
    v0 = LD32(v1+4);
    a1 = LD32(a0+3252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A58350; }
    goto L_08A58320;
L_08A58320:;
    v0 = LD32(a1);
    goto L_08A58324;
L_08A58324:;
    a0 = LD32(v0);
    a3 = v0 + 0;
    v1 = LD32(a0-16);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 == a2;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A58358; }
    goto L_08A58340;
L_08A58340:;
    a1 = LD32(a1+4);
    goto L_08A58344;
L_08A58344:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08A58324; }
    goto L_08A5834C;
L_08A5834C:;
    a3 = 0 + 0;
    goto L_08A58350;
L_08A58350:;
    v0 = 0 < a3;
    return (u64)v0 | ((u64)v1 << 32);
L_08A58358:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A58344; }
    goto L_08A58360;
L_08A58360:;
    goto L_08A58350;
}

/* 08A58368 */
rv_t func_08A58368(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A58368:;
    sp = sp - 32;
    s3 = D_08C30CC4 - (3268);
    s2 = s3 + 3268;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A584F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A583A0;
L_08A583A0:;
    cnd_ = v0 == 0;
    a0 = 12;
    if (cnd_) { goto L_08A583C4; }
    goto L_08A583A8;
L_08A583A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A583C4:;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-12);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A583E4;
L_08A583E4:;
    a0 = LD32(s3+3268);
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
    goto L_08A583A8;
}

/* 08A58414 */
void func_08A58414(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A58414:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_08A584F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5843C;
L_08A5843C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A584A0; }
    goto L_08A58444;
L_08A58444:;
    a1 = LD32(s0);
    v1 = D_08C30CC4 - (3268);
    s1 = v1 + 3268;
    v0 = LD32(a1-12);
    a0 = LD32(s1+4);
    a1 = LD32(v1+3268);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A584A0; }
    goto L_08A58480;
L_08A58480:;
    v0 = LD32(a0);
    goto L_08A58484;
L_08A58484:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08A584B0; }
    goto L_08A5848C;
L_08A5848C:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A58484; }
    goto L_08A5849C;
L_08A5849C:;
    goto L_08A584A0;
L_08A584A0:;
    sp = sp + 16;
    return;
L_08A584B0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A584C0; }
    goto L_08A584B8;
L_08A584B8:;
    ST8(a0+8, v0);
    goto L_08A5849C;
L_08A584C0:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A584E8; }
    goto L_08A584C8;
L_08A584C8:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08A584D0;
L_08A584D0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A584D8;
L_08A584D8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A5849C;
L_08A584E8:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08A584D0;
}

/* 08A584F8 */
u64 func_08A584F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A584F8:;
    v0 = 999;
    a2 = a0 + 0;
    cnd_ = a0 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A58564; }
    goto L_08A58508;
L_08A58508:;
    a0 = D_08C30CC4 - (3268);
    v1 = a0 + 3268;
    v0 = LD32(v1+4);
    a1 = LD32(a0+3268);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A58564; }
    goto L_08A58534;
L_08A58534:;
    v0 = LD32(a1);
    goto L_08A58538;
L_08A58538:;
    a0 = LD32(v0);
    a3 = v0 + 0;
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 == a2;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A5856C; }
    goto L_08A58554;
L_08A58554:;
    a1 = LD32(a1+4);
    goto L_08A58558;
L_08A58558:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08A58538; }
    goto L_08A58560;
L_08A58560:;
    a3 = 0 + 0;
    goto L_08A58564;
L_08A58564:;
    v0 = 0 < a3;
    return (u64)v0 | ((u64)v1 << 32);
L_08A5856C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A58558; }
    goto L_08A58574;
L_08A58574:;
    goto L_08A58564;
}

/* 08A5857C */
rv_t func_08A5857C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5857C:;
    sp = sp - 32;
    v0 = D_08AF0590 - (1424);
    s2 = a0 + 0;
    s0 = D_08C30CA4 - (3236);
    s1 = s0 + 3236;
    f13 = BITSF(LD32(a0+44));
    f12 = BITSF(LD32(v0+1424));
    a1 = s1 + 0;
    a0 = a0 + 88;
    func_08A5A6E0(a0, a1, f12, f13);
    goto L_08A585B4;
L_08A585B4:;
    f0 = BITSF(LD32(s0+3236));
    f1 = BITSF(LD32(s1+4));
    a1 = sp + 0;
    a0 = 1;
    a2 = (u32)-1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    func_08A50A00(a0, a1, a2);
    goto L_08A585D4;
L_08A585D4:;
    a1 = sp + 0;
    f0 = BITSF(LD32(s0+3236));
    f1 = BITSF(LD32(s1+4));
    a2 = 1;
    a3 = (u32)-1;
    a0 = 2;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A585F8;
L_08A585F8:;
    a0 = s2 + 0;
    func_08A59464(a0);
    goto L_08A58600;
L_08A58600:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A58620(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58608;
L_08A58608:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A58620 */
rv_t func_08A58620(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08A58620:;
    sp = sp - 112;
    s7 = 1;
    s6 = 0 + 0;
    s5 = a0 + 0;
    v0 = func_0897364C();
    goto L_08A5865C;
L_08A5865C:;
    cnd_ = v0 == 0;
    a2 = D_08C2B928 - (-18136);
    if (cnd_) { goto L_08A587C8; }
    goto L_08A58664;
L_08A58664:;
    a1 = LD32(s5+4);
    v0 = LD32(a1+24);
    v1 = LD_U8(v0+196);
    cnd_ = v1 == 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A58688; }
    goto L_08A58678;
L_08A58678:;
    a0 = LD32(v0-28832);
    v1 = 3;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A587B8; }
    goto L_08A58688;
L_08A58688:;
    a0 = LD32(a1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5869C;
L_08A5869C:;
    v1 = 999;
    cnd_ = v0 == v1;
    v1 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A58798; }
    goto L_08A586A8;
L_08A586A8:;
    a0 = LD32(s5+36);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A586B0;
L_08A586B0:;
    a1 = v0 + 0;
    a0 = s5 + 0;
    { u64 r_ = func_08A58DF4(a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A586BC;
L_08A586BC:;
    s6 = v0 + 0;
    goto L_08A586C0;
L_08A586C0:;
    cnd_ = s6 == 0;
    if (cnd_) { a1 = LD32(s5+48); goto L_08A586D4; }
    goto L_08A586C8;
L_08A586C8:;
    cnd_ = s7 != 0;
    if (cnd_) { v1 = LD32(s6); goto L_08A58758; }
    goto L_08A586D0;
L_08A586D0:;
    a1 = LD32(s5+48);
    goto L_08A586D4;
L_08A586D4:;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A586E4;
L_08A586E4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A58728; }
    goto L_08A586EC;
L_08A586EC:;
    ST32(sp+16, 0);
    s0 = sp + 16;
    ST32(sp+20, 0);
    a2 = 0 + 0;
    a1 = s0 + 0;
    ST32(sp+24, 0);
    v1 = LD32(v0);
    v0 = LD32(v1+56);
    t_ = v0;
    f12 = BITSF(LD32(sp+16));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58714;
L_08A58714:;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a2 = 0xffff0000u;
    a3 = 0 + 0;
    { rv_t r_ = func_08A59040(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58728;
L_08A58728:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08A58758:;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s6 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58764;
L_08A58764:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a1 = sp + 16;
    a0 = s5 + 0;
    a2 = (u32)-256;
    a3 = 1;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = func_08A59040(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58790;
L_08A58790:;
    a1 = LD32(s5+48);
    goto L_08A586D4;
L_08A58798:;
    v0 = LD32(v1-28832);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a1 = 4;
    if (cnd_) { goto L_08A587B8; }
    goto L_08A587A8;
L_08A587A8:;
    a0 = s5 + 0;
    { u64 r_ = func_08A58ACC(a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A587B0;
L_08A587B0:;
    s6 = v0 + 0;
    goto L_08A586C0;
L_08A587B8:;
    a0 = LD32(s5+36);
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A587C0;
L_08A587C0:;
    a1 = v0 + 0;
    goto L_08A587A8;
L_08A587C8:;
    v0 = a2 - 18136;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A5883C; }
    goto L_08A587F0;
L_08A587F0:;
    a2 = LD32(a2-18136);
    a3 = a1 + 0;
    goto L_08A587F8;
L_08A587F8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A5882C; }
    goto L_08A58810;
L_08A58810:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+8); goto L_08A58840; }
    goto L_08A58820;
L_08A58820:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A58810; }
    goto L_08A5882C;
L_08A5882C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A587F8; }
    goto L_08A5883C;
L_08A5883C:;
    a1 = LD32(sp+8);
    goto L_08A58840;
L_08A58840:;
    v0 = D_08AF0594 - (1428);
    f20 = BITSF(LD32(v0+1428));
    cnd_ = a1 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08A58938; }
    goto L_08A58850;
L_08A58850:;
    s2 = s5 + 16;
    s3 = 999;
    goto L_08A58858;
L_08A58858:;
    s1 = LD32(v1);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A5889C; }
    goto L_08A58864;
L_08A58864:;
    a0 = sp + 0;
    a1 = 1;
    func_08ACEF54(a0, a1);
    goto L_08A58870;
L_08A58870:;
    a0 = s1 + 0;
    { u64 r_ = func_089EB9D0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58878;
L_08A58878:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_08A5889C; }
    goto L_08A58880;
L_08A58880:;
    v0 = LD32(s1+96);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A5889C; }
    goto L_08A5888C;
L_08A5888C:;
    v0 = LD_U8(s1+104);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A58A10; }
    goto L_08A58898;
L_08A58898:;
    a1 = LD32(sp+8);
    goto L_08A5889C;
L_08A5889C:;
    cnd_ = a1 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08A58858; }
    goto L_08A588A4;
L_08A588A4:;
    cnd_ = s6 == 0;
    a0 = D_08C2B8E8 - (-18200);
    if (cnd_) { goto L_08A58938; }
    goto L_08A588AC;
L_08A588AC:;
    a2 = LD32(s6+84);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 18200;
    if (cnd_) { goto L_08A58938; }
    goto L_08A588BC;
L_08A588BC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-18200);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A5890C; }
    goto L_08A588E0;
L_08A588E0:;
    a0 = LD32(a1);
    goto L_08A588E4;
L_08A588E4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A589F0; }
    goto L_08A588FC;
L_08A588FC:;
    a1 = LD32(a1+4);
    goto L_08A58900;
L_08A58900:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A588E4; }
    goto L_08A58908;
L_08A58908:;
    v1 = 0 + 0;
    goto L_08A5890C;
L_08A5890C:;
    cnd_ = v1 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08A5893C; }
    goto L_08A58914;
L_08A58914:;
    v0 = LD32(s5+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5892C;
L_08A5892C:;
    v1 = 999;
    cnd_ = v0 == v1;
    a0 = s5 + 0;
    if (cnd_) { goto L_08A589E0; }
    goto L_08A58938;
L_08A58938:;
    s1 = LD32(sp);
    goto L_08A5893C;
L_08A5893C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A586C0; }
    goto L_08A5894C;
L_08A5894C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A586C0; }
    goto L_08A58958;
L_08A58958:;
    v0 = LD32(s1);
    goto L_08A5895C;
L_08A5895C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A589B0; }
    goto L_08A58970;
L_08A58970:;
    v0 = LD_U8(s0+8);
    goto L_08A58974;
L_08A58974:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A589D8; }
    goto L_08A5897C;
L_08A5897C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A589C8; }
    goto L_08A58984;
L_08A58984:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A5898C;
L_08A5898C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58998;
L_08A58998:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A589A4;
L_08A589A4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A58974; }
    goto L_08A589AC;
L_08A589AC:;
    v1 = LD32(s1+4);
    goto L_08A589B0;
L_08A589B0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A5895C; }
    goto L_08A589C0;
L_08A589C0:;
    goto L_08A586C0;
L_08A589C8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A5898C;
L_08A589D8:;
    s0 = LD32(s0+4);
    goto L_08A589A4;
L_08A589E0:;
    a1 = (u32)-1;
    { u64 r_ = func_08A58ACC(a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A589E8;
L_08A589E8:;
    s6 = v0 + 0;
    goto L_08A58938;
L_08A589F0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A588FC; }
    goto L_08A589FC;
L_08A589FC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A58900; }
    goto L_08A58A08;
L_08A58A08:;
    goto L_08A5890C;
L_08A58A10:;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58A1C;
L_08A58A1C:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s5+16));
    f3 = BITSF(LD32(s2+4));
    f4 = BITSF(LD32(s2+8));
    f0 = f0 - f2;
    f1 = f1 - f3;
    f5 = f5 - f4;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08A58898; }
    goto L_08A58A84;
L_08A58A84:;
    v0 = LD32(s5+4);
    s0 = LD32(s1+84);
    f20 = f0;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    s6 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58AA4;
L_08A58AA4:;
    v1 = LD32(s1+84);
    s0 = s0 ^ v0;
    s7 = 0 < s0;
    a0 = 0 < s7;
    v1 = v1 ^ s3;
    v0 = 1;
    a1 = LD32(sp+8);
    if (v1 != 0) v0 = a0;
    s7 = v0 + 0;
    goto L_08A5889C;
}

/* 08A58ACC */
u64 func_08A58ACC(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A58ACC:;
    sp = sp - 48;
    a3 = D_08C2BDB8 - (-16968);
    v1 = a3 - 16968;
    s1 = a1 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A58B64; }
    goto L_08A58B1C;
L_08A58B1C:;
    a3 = LD32(a3-16968);
    goto L_08A58B20;
L_08A58B20:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A58B54; }
    goto L_08A58B38;
L_08A58B38:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+8); goto L_08A58B68; }
    goto L_08A58B48;
L_08A58B48:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A58B38; }
    goto L_08A58B54;
L_08A58B54:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A58B20; }
    goto L_08A58B64;
L_08A58B64:;
    a2 = LD32(sp+8);
    goto L_08A58B68;
L_08A58B68:;
    cnd_ = a2 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08A58BCC; }
    goto L_08A58B70;
L_08A58B70:;
    s0 = LD32(v0);
    a0 = sp + 0;
    cnd_ = s0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A58BC4; }
    goto L_08A58B80;
L_08A58B80:;
    { u64 r_ = func_08AC7140(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58B88;
L_08A58B88:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_08A58BC4; }
    goto L_08A58B94;
L_08A58B94:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A58BC4; }
    goto L_08A58BA0;
L_08A58BA0:;
    cnd_ = (s32)s1 < 0;
    if (cnd_) { s1 = LD32(sp); goto L_08A58D44; }
    goto L_08A58BA8;
L_08A58BA8:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A58BB8;
L_08A58BB8:;
    cnd_ = v0 == s1;
    if (cnd_) { s1 = LD32(sp); goto L_08A58C94; }
    goto L_08A58BC0;
L_08A58BC0:;
    a2 = LD32(sp+8);
    goto L_08A58BC4;
L_08A58BC4:;
    cnd_ = a2 != 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08A58B70; }
    goto L_08A58BCC;
L_08A58BCC:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A58C54; }
    goto L_08A58BE0;
L_08A58BE0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A58C54; }
    goto L_08A58BEC;
L_08A58BEC:;
    v0 = LD32(s1);
    goto L_08A58BF0;
L_08A58BF0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A58C44; }
    goto L_08A58C04;
L_08A58C04:;
    v0 = LD_U8(s0+8);
    goto L_08A58C08;
L_08A58C08:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A58C8C; }
    goto L_08A58C10;
L_08A58C10:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58C7C; }
    goto L_08A58C18;
L_08A58C18:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A58C20;
L_08A58C20:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58C2C;
L_08A58C2C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A58C38;
L_08A58C38:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A58C08; }
    goto L_08A58C40;
L_08A58C40:;
    v1 = LD32(s1+4);
    goto L_08A58C44;
L_08A58C44:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58BF0; }
    goto L_08A58C54;
L_08A58C54:;
    v0 = 0 + 0;
    goto L_08A58C58;
L_08A58C58:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A58C7C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A58C20;
L_08A58C8C:;
    s0 = LD32(s0+4);
    goto L_08A58C38;
L_08A58C94:;
    v0 = LD32(s0);
    v1 = LD32(s1+8);
    a0 = LD32(v0-12);
    v1 = v1 - 1;
    s5 = s0 + a0;
    cnd_ = v1 != 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A58D24; }
    goto L_08A58CB0;
L_08A58CB0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A58D24; }
    goto L_08A58CBC;
L_08A58CBC:;
    v0 = LD32(s1);
    goto L_08A58CC0;
L_08A58CC0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A58D14; }
    goto L_08A58CD4;
L_08A58CD4:;
    v0 = LD_U8(s0+8);
    goto L_08A58CD8;
L_08A58CD8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A58D3C; }
    goto L_08A58CE0;
L_08A58CE0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58D2C; }
    goto L_08A58CE8;
L_08A58CE8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A58CF0;
L_08A58CF0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58CFC;
L_08A58CFC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A58D08;
L_08A58D08:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A58CD8; }
    goto L_08A58D10;
L_08A58D10:;
    v1 = LD32(s1+4);
    goto L_08A58D14;
L_08A58D14:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58CC0; }
    goto L_08A58D24;
L_08A58D24:;
    v0 = s5 + 0;
    goto L_08A58C58;
L_08A58D2C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A58CF0;
L_08A58D3C:;
    s0 = LD32(s0+4);
    goto L_08A58D08;
L_08A58D44:;
    v0 = LD32(s0);
    v1 = LD32(s1+8);
    a0 = LD32(v0-12);
    v1 = v1 - 1;
    s5 = s0 + a0;
    cnd_ = v1 != 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A58D24; }
    goto L_08A58D60;
L_08A58D60:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A58D24; }
    goto L_08A58D6C;
L_08A58D6C:;
    v0 = LD32(s1);
    goto L_08A58D70;
L_08A58D70:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A58DC4; }
    goto L_08A58D84;
L_08A58D84:;
    v0 = LD_U8(s0+8);
    goto L_08A58D88;
L_08A58D88:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A58DEC; }
    goto L_08A58D90;
L_08A58D90:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58DDC; }
    goto L_08A58D98;
L_08A58D98:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A58DA0;
L_08A58DA0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58DAC;
L_08A58DAC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A58DB8;
L_08A58DB8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A58D88; }
    goto L_08A58DC0;
L_08A58DC0:;
    v1 = LD32(s1+4);
    goto L_08A58DC4;
L_08A58DC4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58D70; }
    goto L_08A58DD4;
L_08A58DD4:;
    v0 = s5 + 0;
    goto L_08A58C58;
L_08A58DDC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A58DA0;
L_08A58DEC:;
    s0 = LD32(s0+4);
    goto L_08A58DB8;
}

/* 08A58DF4 */
u64 func_08A58DF4(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A58DF4:;
    sp = sp - 48;
    a3 = D_08C2B8E8 - (-18200);
    v1 = a3 - 18200;
    s1 = a1 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A58E8C; }
    goto L_08A58E44;
L_08A58E44:;
    a3 = LD32(a3-18200);
    goto L_08A58E48;
L_08A58E48:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A58E7C; }
    goto L_08A58E60;
L_08A58E60:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A58E90; }
    goto L_08A58E70;
L_08A58E70:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A58E60; }
    goto L_08A58E7C;
L_08A58E7C:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A58E48; }
    goto L_08A58E8C;
L_08A58E8C:;
    v1 = LD32(sp+8);
    goto L_08A58E90;
L_08A58E90:;
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_08A58EC4; }
    goto L_08A58E98;
L_08A58E98:;
    s0 = LD32(v0);
    a0 = sp + 0;
    cnd_ = s0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A58EBC; }
    goto L_08A58EA8;
L_08A58EA8:;
    func_08AD15D4(a0, a1);
    goto L_08A58EB0;
L_08A58EB0:;
    v0 = LD32(s0+84);
    cnd_ = v0 == s1;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A58F8C; }
    goto L_08A58EBC;
L_08A58EBC:;
    cnd_ = v1 != 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_08A58E98; }
    goto L_08A58EC4;
L_08A58EC4:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A58F4C; }
    goto L_08A58ED8;
L_08A58ED8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A58F4C; }
    goto L_08A58EE4;
L_08A58EE4:;
    v0 = LD32(s1);
    goto L_08A58EE8;
L_08A58EE8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A58F3C; }
    goto L_08A58EFC;
L_08A58EFC:;
    v0 = LD_U8(s0+8);
    goto L_08A58F00;
L_08A58F00:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A58F84; }
    goto L_08A58F08;
L_08A58F08:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58F74; }
    goto L_08A58F10;
L_08A58F10:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A58F18;
L_08A58F18:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58F24;
L_08A58F24:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A58F30;
L_08A58F30:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A58F00; }
    goto L_08A58F38;
L_08A58F38:;
    v1 = LD32(s1+4);
    goto L_08A58F3C;
L_08A58F3C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58EE8; }
    goto L_08A58F4C;
L_08A58F4C:;
    v0 = 0 + 0;
    goto L_08A58F50;
L_08A58F50:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A58F74:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A58F18;
L_08A58F84:;
    s0 = LD32(s0+4);
    goto L_08A58F30;
L_08A58F8C:;
    s1 = LD32(sp);
    v0 = LD32(s0);
    v1 = LD32(s1+8);
    a0 = LD32(v0-12);
    v1 = v1 - 1;
    s5 = s0 + a0;
    cnd_ = v1 != 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A59020; }
    goto L_08A58FAC;
L_08A58FAC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A59020; }
    goto L_08A58FB8;
L_08A58FB8:;
    v0 = LD32(s1);
    goto L_08A58FBC;
L_08A58FBC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A59010; }
    goto L_08A58FD0;
L_08A58FD0:;
    v0 = LD_U8(s0+8);
    goto L_08A58FD4;
L_08A58FD4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A59038; }
    goto L_08A58FDC;
L_08A58FDC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A59028; }
    goto L_08A58FE4;
L_08A58FE4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A58FEC;
L_08A58FEC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A58FF8;
L_08A58FF8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A59004;
L_08A59004:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A58FD4; }
    goto L_08A5900C;
L_08A5900C:;
    v1 = LD32(s1+4);
    goto L_08A59010;
L_08A59010:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A58FBC; }
    goto L_08A59020;
L_08A59020:;
    v0 = s5 + 0;
    goto L_08A58F50;
L_08A59028:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A58FEC;
L_08A59038:;
    s0 = LD32(s0+4);
    goto L_08A59004;
}

/* 08A59040 */
rv_t func_08A59040(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 208);
L_08A59040:;
    sp = sp - 208;
    s4 = sp + 16;
    s3 = a2 + 0;
    s2 = a3 & 0xff;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    f20 = BITSF(0);
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    a1 = 1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5909C;
L_08A5909C:;
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    fcc = FCMP(f20, f0, 12);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+16, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+20, FBITS(f0));
    if (cnd_) { goto L_08A591F8; }
    goto L_08A590B8;
L_08A590B8:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    f12 = f20;
    v0 = func_08A59338(a1, f12);
    goto L_08A590C8;
L_08A590C8:;
    cnd_ = v0 == 0;
    v0 = D_08AF05A4 - (1444);
    if (cnd_) { goto L_08A591B0; }
    goto L_08A590D0;
L_08A590D0:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    f1 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_08A5918C; }
    goto L_08A590DC;
L_08A590DC:;
    v0 = D_08AF0598 - (1432);
    f0 = BITSF(LD32(v0+1432));
    f1 = f1 - f0;
    cnd_ = s2 != 0;
    ST32(sp+20, FBITS(f1));
    if (cnd_) { goto L_08A59160; }
    goto L_08A590F0;
L_08A590F0:;
    v1 = LD32(s1+4);
    v0 = LD32(v1+24);
    a0 = LD32(v0);
    v1 = LD32(a0-16);
    v0 = v0 + v1;
    a0 = LD_U16(v0+8);
    v1 = 0x8005;
    cnd_ = a0 == v1;
    v0 = D_08AF059C - (1436);
    if (cnd_) { goto L_08A5913C; }
    goto L_08A59114;
L_08A59114:;
    f0 = BITSF(LD32(v0+1436));
    v0 = D_08AF05A0 - (1440);
    f12 = BITSF(LD32(v0+1440));
    f0 = f1 + f0;
    a1 = s4 + 0;
    a2 = s3 + 0;
    a0 = 23;
    f13 = f12;
    ST32(sp+20, FBITS(f0));
    { u64 r_ = func_08A50B5C(a0, a1, a2, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5913C;
L_08A5913C:;
    goto L_08A59140;
L_08A59140:;
    sp = sp + 208;
    return (rv_t){ v0, v1, f0 };
L_08A59160:;
    f0 = BITSF(LD32(sp+16));
    a1 = sp + 32;
    f12 = f20;
    a3 = s3 + 0;
    a0 = 4;
    a2 = 1;
    ST32(sp+32, FBITS(f0));
    goto L_08A5917C;
L_08A5917C:;
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A50324(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A59184;
L_08A59184:;
    goto L_08A59140;
L_08A5918C:;
    f0 = BITSF(LD32(sp+16));
    a1 = sp + 32;
    a2 = s3 + 0;
    a0 = 28;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A506B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A591A8;
L_08A591A8:;
    goto L_08A59140;
L_08A591B0:;
    f12 = BITSF(LD32(v0+1444));
    a1 = s4 + 0;
    a0 = s1 + 0;
    goto L_08A591BC;
L_08A591BC:;
    v0 = func_08A59338(a1, f12);
    goto L_08A591C4;
L_08A591C4:;
    f12 = BITSF(LD32(sp+16));
    f13 = BITSF(LD32(sp+20));
    a0 = s1 + 0;
    f0 = func_08A593F0(f12, f13);
    goto L_08A591D4;
L_08A591D4:;
    f12 = f0;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a1 = sp + 32;
    ST32(sp+32, FBITS(f0));
    a3 = s3 + 0;
    a0 = 4;
    a2 = 0 + 0;
    goto L_08A5917C;
L_08A591F8:;
    f2 = BITSF(LD32(s1+60));
    f3 = BITSF(LD32(s1+72));
    f4 = BITSF(LD32(s1+84));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f0 = BITSF(LD32(s0));
    f5 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    v0 = LD32(s1+4);
    ST32(sp+48, FBITS(f0));
    a0 = LD32(v0+24);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f5));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5924C;
L_08A5924C:;
    f10 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(sp+48));
    f8 = BITSF(LD32(sp+52));
    f9 = BITSF(LD32(sp+56));
    f5 = f7 - f5;
    f6 = f8 - f6;
    f10 = f9 - f10;
    f2 = BITSF(LD32(sp+64));
    f3 = BITSF(LD32(sp+68));
    f4 = BITSF(LD32(sp+72));
    v0 = FBITS(f5);
    {u32 a_=sp+(128);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f10);
    {v[6]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    a0 = sp + 48;
    a1 = 1;
    f4 = f4 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(sp+80, FBITS(f5));
    f9 = f9 - f4;
    f7 = f7 - f2;
    f8 = f8 - f3;
    ST32(sp+84, FBITS(f6));
    ST32(sp+56, FBITS(f9));
    ST32(sp+48, FBITS(f7));
    ST32(sp+52, FBITS(f8));
    ST32(sp+88, FBITS(f10));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f3));
    ST32(sp+120, FBITS(f4));
    ST32(sp+96, FBITS(f7));
    ST32(sp+100, FBITS(f8));
    ST32(sp+104, FBITS(f9));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A59314;
L_08A59314:;
    v0 = D_08AF05A4 - (1444);
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f12 = BITSF(LD32(v0+1444));
    ST32(sp+16, FBITS(f0));
    a1 = s4 + 0;
    a0 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    goto L_08A591BC;
}

/* 08A59338 */
u32 func_08A59338(u32 a1, float f12)
{
    u32 v0 = 0, a0 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A59338:;
    sp = sp - 48;
    s0 = a1 + 0;
    v0 = D_08AF05AC - (1452);
    a0 = a1 + 4;
    a2 = sp + 20;
    f3 = BITSF(LD32(s0));
    f0 = BITSF(LD32(v0+1452));
    v0 = D_08AF05A8 - (1448);
    fcc = FCMP(f3, f12, 12);
    f4 = f0 - f12;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(v0+1448));
    a1 = sp + 16;
    ST32(sp, FBITS(f3));
    f0 = f0 - f12;
    f2 = f12;
    cnd_ = fcc;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_08A5939C; }
    goto L_08A59388;
L_08A59388:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_08A5939C; }
    goto L_08A59398;
L_08A59398:;
    f2 = f3;
    goto L_08A5939C;
L_08A5939C:;
    ST32(s0, FBITS(f2));
    ST32(sp+20, FBITS(f4));
    ST32(sp+16, FBITS(f12));
    f0 = func_08A5A1C0(a0, a1, a2);
    goto L_08A593AC;
L_08A593AC:;
    f2 = f0;
    f1 = BITSF(LD32(s0));
    ST32(s0+4, FBITS(f0));
    f0 = BITSF(LD32(sp));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A593E0; }
    goto L_08A593CC;
L_08A593CC:;
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = 1; goto L_08A593E0; }
    goto L_08A593E0;
L_08A593E0:;
    sp = sp + 48;
    return v0;
}

/* 08A593F0 */
float func_08A593F0(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_08A593F0:;
    v0 = D_08C30CAC - (3244);
    v1 = v0 + 3244;
    f0 = BITSF(LD32(v0+3244));
    f1 = BITSF(LD32(v1+4));
    {v[4]=1.57079632679f;}
    f12 = f12 - f0;
    f13 = f13 - f1;
    f1 = BITSF(0);
    f0 = f12 * f12;
    f2 = f13 * f13;
    fcc = FCMP(f12, f1, 12);
    f0 = f0 + f2;
    f0 = sqrtf(f0);
    f13 = f13 / f0;
    v0 = FBITS(f13);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    cnd_ = !fcc;
    v0 = D_08AF05B0 - (1456);
    if (cnd_) { goto L_08A5945C; }
    goto L_08A59454;
L_08A59454:;
    f0 = BITSF(LD32(v0+1456));
    f1 = f0 - f1;
    goto L_08A5945C;
L_08A5945C:;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    return f0;
}

/* 08A59464 */
void func_08A59464(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08A59464:;
    sp = sp - 160;
    a2 = D_08C30CB4 - (3252);
    v1 = a2 + 3252;
    s2 = sp + 16;
    s1 = a0 + 0;
    f20 = BITSF(0);
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp+16, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+24, 0);
    cnd_ = a1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08A59510; }
    goto L_08A594C8;
L_08A594C8:;
    a2 = LD32(a2+3252);
    goto L_08A594CC;
L_08A594CC:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08A59500; }
    goto L_08A594E4;
L_08A594E4:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_08A59514; }
    goto L_08A594F4;
L_08A594F4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08A594E4; }
    goto L_08A59500;
L_08A59500:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08A594CC; }
    goto L_08A59510;
L_08A59510:;
    a0 = LD32(sp+24);
    goto L_08A59514;
L_08A59514:;
    cnd_ = a0 == 0;
    v0 = D_08AF05B4 - (1460);
    if (cnd_) { goto L_08A595E4; }
    goto L_08A5951C;
L_08A5951C:;
    f21 = BITSF(LD32(v0+1460));
    v1 = D_08AF05B8 - (1464);
    v0 = D_08AF05BC - (1468);
    f22 = BITSF(LD32(v1+1464));
    f23 = BITSF(LD32(v0+1468));
    s5 = 16;
    s4 = D_08AF05C4 - (1476);
    s0 = LD32(a0);
    goto L_08A5953C;
L_08A5953C:;
    a1 = 1;
    a0 = s2 + 0;
    func_08AC4E2C(a0, a1);
    goto L_08A59548;
L_08A59548:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A595D8; }
    goto L_08A59550;
L_08A59550:;
    v0 = LD32(s0);
    a1 = LD32(s1+36);
    a2 = LD32(s1+48);
    v1 = LD32(v0+76);
    t_ = v1;
    a3 = sp + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A59568;
L_08A59568:;
    v0 = LD_U8(sp+5);
    cnd_ = v0 == 0;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_08A595DC; }
    goto L_08A59574;
L_08A59574:;
    v0 = LD_U8(sp+7);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A597AC; }
    goto L_08A59580;
L_08A59580:;
    v0 = LD_U8(sp+6);
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A59798; }
    goto L_08A5958C;
L_08A5958C:;
    s3 = LD32(sp);
    goto L_08A59590;
L_08A59590:;
    v1 = LD32(sp+8);
    v0 = 39;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A5978C; }
    goto L_08A595A0;
L_08A595A0:;
    v0 = LD32(s0);
    goto L_08A595A4;
L_08A595A4:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A595BC;
L_08A595BC:;
    t0 = LD_U8(sp+4);
    a2 = LD32(sp+8);
    a1 = s3 + 0;
    a3 = v0 + 0;
    a0 = s1 + 0;
    f12 = f20;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;func_08A59BC4(a0, a1, a2, a3, t0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];});
    goto L_08A595D8;
L_08A595D8:;
    a0 = LD32(sp+24);
    goto L_08A595DC;
L_08A595DC:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08A5953C; }
    goto L_08A595E4;
L_08A595E4:;
    v1 = D_08C30CC4 - (3268);
    v1 = v1 + 3268;
    v0 = LD32(v1+8);
    s2 = sp + 96;
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+96, v1);
    ST32(sp+100, 0);
    ST32(sp+104, 0);
    func_08ACEF54(a0, a1);
    goto L_08A59614;
L_08A59614:;
    v1 = LD32(sp+104);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08A59718; }
    goto L_08A59620;
L_08A59620:;
    a0 = LD32(sp+96);
    goto L_08A59624;
L_08A59624:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A59708; }
    goto L_08A59634;
L_08A59634:;
    s1 = LD32(sp+16);
    goto L_08A59638;
L_08A59638:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A596BC; }
    goto L_08A59648;
L_08A59648:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A596BC; }
    goto L_08A59654;
L_08A59654:;
    v0 = LD32(s1);
    goto L_08A59658;
L_08A59658:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A596AC; }
    goto L_08A5966C;
L_08A5966C:;
    v0 = LD_U8(s0+8);
    goto L_08A59670;
L_08A59670:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A59700; }
    goto L_08A59678;
L_08A59678:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A596F0; }
    goto L_08A59680;
L_08A59680:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A59688;
L_08A59688:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A59694;
L_08A59694:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A596A0;
L_08A596A0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A59670; }
    goto L_08A596A8;
L_08A596A8:;
    v1 = LD32(s1+4);
    goto L_08A596AC;
L_08A596AC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A59658; }
    goto L_08A596BC;
L_08A596BC:;
    sp = sp + 160;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;return; }
L_08A596F0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A59688;
L_08A59700:;
    s0 = LD32(s0+4);
    goto L_08A596A0;
L_08A59708:;
    func_08AD1CEC(a0, 0, 0, 0);
    goto L_08A59710;
L_08A59710:;
    s1 = LD32(sp+16);
    goto L_08A59638;
L_08A59718:;
    a1 = 1;
    a0 = s2 + 0;
    func_08ACEF54(a0, a1);
    goto L_08A59724;
L_08A59724:;
    a1 = LD32(s1+36);
    a2 = LD32(s1+48);
    a0 = s0 + 0;
    a3 = sp + 0;
    func_089EBC20(a0, a3);
    goto L_08A59738;
L_08A59738:;
    v0 = LD_U8(sp+5);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A59758; }
    goto L_08A59744;
L_08A59744:;
    v1 = LD32(sp+104);
    goto L_08A59748;
L_08A59748:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08A59718; }
    goto L_08A59750;
L_08A59750:;
    a0 = LD32(sp+96);
    goto L_08A59624;
L_08A59758:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A59768;
L_08A59768:;
    t0 = LD_U8(sp+4);
    a1 = LD32(sp);
    a2 = LD32(sp+8);
    a3 = v0 + 0;
    a0 = s1 + 0;
    f12 = f20;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;func_08A59BC4(a0, a1, a2, a3, t0, f12); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];});
    goto L_08A59784;
L_08A59784:;
    v1 = LD32(sp+104);
    goto L_08A59748;
L_08A5978C:;
    f20 = BITSF(0);
    v0 = LD32(s0);
    goto L_08A595A4;
L_08A59798:;
    f12 = BITSF(LD32(s1+12));
    f13 = BITSF(LD32(s4+1476));
    v0 = func_08A516BC(a0, f12, f13);
    goto L_08A597A4;
L_08A597A4:;
    s3 = v0 + 0;
    goto L_08A59590;
L_08A597AC:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A597C4;
L_08A597C4:;
    v1 = D_08B159FC - (23036);
    a0 = LD32(v1+23036);
    f9 = BITSF(LD32(v0+4));
    ST32(sp+40, 0);
    v0 = a0 + 12;
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(a0+12));
    f8 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(sp+52, FBITS(f0));
    ST32(sp+48, FBITS(f7));
    ST32(sp+56, FBITS(f1));
    ST32(sp+60, FBITS(f2));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f5));
    ST32(sp+76, FBITS(f6));
    ST32(sp+80, FBITS(f8));
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[116]=BITSF(LD32(sp+(60)));}
    {v[117]=BITSF(LD32(sp+(64)));}
    {v[118]=BITSF(LD32(sp+(68)));}
    {v[120]=BITSF(LD32(sp+(72)));}
    {v[121]=BITSF(LD32(sp+(76)));}
    {v[122]=BITSF(LD32(sp+(80)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A59AA8; }
    goto L_08A59864;
L_08A59864:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A599E8; }
    goto L_08A59874;
L_08A59874:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A5990C; }
    goto L_08A5989C;
L_08A5989C:;
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
    if (cnd_) { goto L_08A598E8; }
    goto L_08A598D8;
L_08A598D8:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A598E8;
L_08A598E8:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5992C; }
    goto L_08A598F8;
L_08A598F8:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A5992C; }
    goto L_08A59908;
L_08A59908:;
    goto L_08A5990C;
L_08A5990C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5992C; }
    goto L_08A59920;
L_08A59920:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A5992C;
L_08A5992C:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A599BC; }
    goto L_08A5994C;
L_08A5994C:;
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
    if (cnd_) { goto L_08A59998; }
    goto L_08A59988;
L_08A59988:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A59998;
L_08A59998:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A599DC; }
    goto L_08A599A8;
L_08A599A8:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A599DC; }
    goto L_08A599B8;
L_08A599B8:;
    goto L_08A599BC;
L_08A599BC:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A599DC; }
    goto L_08A599D0;
L_08A599D0:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A599DC;
L_08A599DC:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A59B60; }
    goto L_08A599E4;
L_08A599E4:;
    goto L_08A599E8;
L_08A599E8:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A59A7C; }
    goto L_08A59A0C;
L_08A59A0C:;
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
    if (cnd_) { goto L_08A59A58; }
    goto L_08A59A48;
L_08A59A48:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A59A58;
L_08A59A58:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A59A9C; }
    goto L_08A59A68;
L_08A59A68:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A59A9C; }
    goto L_08A59A78;
L_08A59A78:;
    goto L_08A59A7C;
L_08A59A7C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A59A9C; }
    goto L_08A59A90;
L_08A59A90:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A59A9C;
L_08A59A9C:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A59B60; }
    goto L_08A59AA4;
L_08A59AA4:;
    goto L_08A59AA8;
L_08A59AA8:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A59B3C; }
    goto L_08A59ACC;
L_08A59ACC:;
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
    if (cnd_) { goto L_08A59B18; }
    goto L_08A59B08;
L_08A59B08:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A59B18;
L_08A59B18:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A59B5C; }
    goto L_08A59B28;
L_08A59B28:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A59B5C; }
    goto L_08A59B38;
L_08A59B38:;
    goto L_08A59B3C;
L_08A59B3C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A59B5C; }
    goto L_08A59B50;
L_08A59B50:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A59B5C;
L_08A59B5C:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08A59B60;
L_08A59B60:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    f0 = BITSF(LD32(sp+40));
    f1 = BITSF(LD32(s1+20));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    f1 = f1 - f9;
    if (cnd_) { goto L_08A59B8C; }
    goto L_08A59B88;
L_08A59B88:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_08A59B8C;
L_08A59B8C:;
    fcc = FCMP(f22, f1, 14);
    f20 = BITSF(0);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+8, s5); goto L_08A59580; }
    goto L_08A59B9C;
L_08A59B9C:;
    fcc = FCMP(f1, f23, 14);
    cnd_ = !fcc;
    v0 = 27;
    if (cnd_) { goto L_08A59BBC; }
    goto L_08A59BAC;
L_08A59BAC:;
    v0 = D_08AF05C0 - (1472);
    f20 = BITSF(LD32(v0+1472));
    ST32(sp+8, s5);
    goto L_08A59580;
L_08A59BBC:;
    ST32(sp+8, v0);
    goto L_08A59580;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08A59BC4 */
void func_08A59BC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A59BC4:;
    f3 = BITSF(0);
    sp = sp - 96;
    s3 = a2 + 0;
    a2 = sp + 0;
    s2 = a1 + 0;
    a1 = a3 + 0;
    s1 = t0 & 0xff;
    s0 = a0 + 0;
    ST32(sp+4, FBITS(f3));
    ST32(sp, FBITS(f3));
    f21 = f12;
    func_08A59D38(a0, a1, a2);
    goto L_08A59C10;
L_08A59C10:;
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = f3 * f3;
    f1 = f2 * f2;
    f0 = f0 + f1;
    cnd_ = s1 == 0;
    f20 = sqrtf(f0);
    if (cnd_) { goto L_08A59D18; }
    goto L_08A59C2C;
L_08A59C2C:;
    a0 = D_08AF05C8 - (1480);
    f0 = BITSF(LD32(a0+1480));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = D_08C30CA4 - (3236);
    if (cnd_) { goto L_08A59C7C; }
    goto L_08A59C44;
L_08A59C44:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(sp+16, FBITS(f3)); goto L_08A59D10; }
    goto L_08A59C4C;
L_08A59C4C:;
    f0 = f0 / f20;
    f1 = f2 * f0;
    f0 = f3 * f0;
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    goto L_08A59C60;
L_08A59C60:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    ST32(sp, v0);
    ST32(sp+4, v1);
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    v0 = D_08C30CA4 - (3236);
    goto L_08A59C7C;
L_08A59C7C:;
    f0 = BITSF(LD32(v0+3236));
    v0 = v0 + 3236;
    f4 = BITSF(LD32(v0+4));
    f3 = f3 + f0;
    f1 = f2 + f4;
    fcc = FCMP(f3, f0, 2);
    ST32(sp+16, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+20, FBITS(f1));
    if (cnd_) { goto L_08A59CB0; }
    goto L_08A59CA0;
L_08A59CA0:;
    fcc = FCMP(f1, f4, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08A59CF0; }
    goto L_08A59CB0;
L_08A59CB0:;
    f0 = BITSF(LD32(a0+1480));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A59CD0; }
    goto L_08A59CC4;
L_08A59CC4:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A59CF0; }
    goto L_08A59CCC;
L_08A59CCC:;
    a0 = s3 + 0;
    goto L_08A59CD0;
L_08A59CD0:;
    a1 = sp + 32;
    f12 = f21;
    a3 = s2 + 0;
    a2 = 0 + 0;
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A50324(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A59CEC;
L_08A59CEC:;
    goto L_08A59CF0;
L_08A59CF0:;
    sp = sp + 96;
    return;
L_08A59D10:;
    ST32(sp+20, FBITS(f2));
    goto L_08A59C60;
L_08A59D18:;
    a1 = s2 + 0;
    a0 = s0 + 0;
    f12 = f20;
    v0 = func_08A59D90(a1, f12);
    goto L_08A59D28;
L_08A59D28:;
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    s2 = v0 + 0;
    goto L_08A59C2C;
}

/* 08A59D38 */
void func_08A59D38(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A59D38:;
    f5 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a0+16));
    f3 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a0+24));
    f0 = BITSF(LD32(a0+32));
    f3 = f3 - f1;
    f2 = f2 - f5;
    f4 = BITSF(LD32(a0+28));
    f5 = BITSF(LD32(a0+44));
    f1 = f3 * f0;
    f3 = f3 * f4;
    f0 = f2 * f0;
    f2 = f2 * f4;
    sp = sp - 16;
    f0 = f0 - f3;
    f1 = f1 + f2;
    f0 = f0 * f5;
    f1 = f1 * f5;
    ST32(a2+4, FBITS(f0));
    ST32(a2, FBITS(f1));
    sp = sp + 16;
    return;
}

/* 08A59D90 */
u32 func_08A59D90(u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A59D90:;
    v0 = a1 >> 24;
    v1 = a1 & 0xff;
    a2 = (a1 >> 8) & 0xff;
    a1 = (a1 >> 16) & 0xff;
    f6 = BITSF(v0);
    f0 = BITSF(v1);
    f1 = BITSF(a2);
    f2 = BITSF(a1);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f5 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f6);
    v0 = D_08AF05CC - (1484);
    v1 = D_08AF05D0 - (1488);
    f0 = BITSF(LD32(v0+1484));
    f6 = BITSF(LD32(v1+1488));
    sp = sp - 16;
    f2 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    fcc = FCMP(f6, f12, 12);
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f5));
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f2));
    if (cnd_) { goto L_08A59F10; }
    goto L_08A59DFC;
L_08A59DFC:;
    ST32(sp+12, 0);
    v1 = D_08AF05DC - (1500);
    goto L_08A59E04;
L_08A59E04:;
    f0 = BITSF(LD32(v1+1500));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A59F00; }
    goto L_08A59E24;
L_08A59E24:;
    a1 = D_08AF05E0 - (1504);
    f0 = BITSF(LD32(a1+1504));
    f0 = f1 + f0;
    goto L_08A59E30;
L_08A59E30:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v1+1500));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A59EF4; }
    goto L_08A59E58;
L_08A59E58:;
    f0 = BITSF(LD32(a1+1504));
    f0 = f2 + f0;
    goto L_08A59E60;
L_08A59E60:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+1500));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A59EE8; }
    goto L_08A59E8C;
L_08A59E8C:;
    f0 = BITSF(LD32(a1+1504));
    f0 = f1 + f0;
    goto L_08A59E94;
L_08A59E94:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v1+1500));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A59EDC; }
    goto L_08A59EC0;
L_08A59EC0:;
    f0 = BITSF(LD32(a1+1504));
    f0 = f1 + f0;
    goto L_08A59EC8;
L_08A59EC8:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 16;
    return v0;
L_08A59EDC:;
    f0 = BITSF(LD32(a1+1504));
    f0 = f1 - f0;
    goto L_08A59EC8;
L_08A59EE8:;
    f0 = BITSF(LD32(a1+1504));
    f0 = f1 - f0;
    goto L_08A59E94;
L_08A59EF4:;
    f0 = BITSF(LD32(a1+1504));
    f0 = f2 - f0;
    goto L_08A59E60;
L_08A59F00:;
    a1 = D_08AF05E0 - (1504);
    f0 = BITSF(LD32(a1+1504));
    f0 = f1 - f0;
    goto L_08A59E30;
L_08A59F10:;
    v0 = D_08AF05D4 - (1492);
    f0 = BITSF(LD32(v0+1492));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    v1 = D_08AF05DC - (1500);
    if (cnd_) { goto L_08A59E04; }
    goto L_08A59F28;
L_08A59F28:;
    f0 = f6 - f12;
    v0 = D_08AF05D8 - (1496);
    f1 = BITSF(LD32(v0+1496));
    f0 = f0 * f1;
    f0 = f2 * f0;
    ST32(sp+12, FBITS(f0));
    goto L_08A59E04;
}

/* 08A59F44 */
rv_t func_08A59F44(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A59F44:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5A0E0; }
    goto L_08A59F7C;
L_08A59F7C:;
    v0 = D_08AF05E4 - (1508);
    f1 = BITSF(LD32(v0+1508));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t5 = D_08C30C74 - (3188);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    a3 = t5 + 3188;
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
    f5 = f5 * f1;
    v0 = D_08AF05E8 - (1512);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f1;
    t1 = D_08C30CA4 - (3236);
    ST32(a3+12, FBITS(f2));
    f3 = f3 * f1;
    t0 = D_08C30C54 - (3156);
    f1 = BITSF(LD32(v0+1512));
    v0 = D_08C30C64 - (3172);
    ST32(v0+3172, FBITS(f5));
    a2 = v0 + 3172;
    v0 = D_08AF05EC - (1516);
    f0 = BITSF(LD32(v0+1516));
    v0 = D_08AF05F0 - (1520);
    t2 = t1 + 3236;
    ST32(t1+3236, FBITS(f0));
    t3 = D_08C30CAC - (3244);
    t6 = D_08C30C84 - (3204);
    f0 = BITSF(LD32(v0+1520));
    v0 = D_08AF05F4 - (1524);
    ST32(t0+3156, FBITS(f3));
    s3 = D_08C30CB4 - (3252);
    v1 = t6 + 3204;
    ST32(t2+4, FBITS(f0));
    a1 = t0 + 3156;
    t4 = t3 + 3244;
    f0 = BITSF(LD32(v0+1524));
    v0 = D_08AF05F8 - (1528);
    s0 = s3 + 3252;
    ST32(t3+3244, FBITS(f0));
    a0 = 16;
    f0 = BITSF(LD32(v0+1528));
    v0 = 4;
    ST32(t5+3188, FBITS(f2));
    ST32(t4+4, FBITS(f0));
    ST32(a1+4, FBITS(f4));
    ST32(a1+12, FBITS(f2));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f2));
    ST32(t6+3204, FBITS(f1));
    ST32(v1+28, 0);
    ST32(v1+16, FBITS(f1));
    ST32(a1+8, FBITS(f5));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f6));
    ST32(a3+4, FBITS(f2));
    ST32(a3+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f1));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5A0A4;
L_08A5A0A4:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s3+3252, v0);
    if (cnd_) { goto L_08A5A0D0; }
    goto L_08A5A0B4;
L_08A5A0B4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A5A0BC;
L_08A5A0BC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A5A0BC; }
    goto L_08A5A0D0;
L_08A5A0D0:;
    v0 = s3 + 3252;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    v1 = s2 < 0x1u;
    goto L_08A5A0E0;
L_08A5A0E0:;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s2 = D_08C30CC4 - (3268);
    if (cnd_) { goto L_08A5A170; }
    goto L_08A5A0F0;
L_08A5A0F0:;
    s0 = s4 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_08A5A118; }
    goto L_08A5A104;
L_08A5A104:;
    v0 = D_08C30CC4 - (3268);
    a0 = LD32(v0+3268);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A5A160; }
    goto L_08A5A114;
L_08A5A114:;
    v0 = s1 < 0x1u;
    goto L_08A5A118;
L_08A5A118:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5A134; }
    goto L_08A5A124;
L_08A5A124:;
    v0 = D_08C30CB4 - (3252);
    a0 = LD32(v0+3252);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A5A150; }
    goto L_08A5A134;
L_08A5A134:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5A150:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5A158;
L_08A5A158:;
    goto L_08A5A134;
L_08A5A160:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5A168;
L_08A5A168:;
    v0 = s1 < 0x1u;
    goto L_08A5A118;
L_08A5A170:;
    s0 = s2 + 3268;
    v0 = 4;
    ST32(s0+4, v0);
    a0 = 16;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5A184;
L_08A5A184:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2+3268, v0);
    if (cnd_) { goto L_08A5A1B0; }
    goto L_08A5A194;
L_08A5A194:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A5A19C;
L_08A5A19C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A5A19C; }
    goto L_08A5A1B0;
L_08A5A1B0:;
    v0 = s2 + 3268;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A5A0F0;
}

/* 08A5A1C0 */
float func_08A5A1C0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A5A1C0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A5A1EC; }
    goto L_08A5A1D8;
L_08A5A1D8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A5A1EC; }
    goto L_08A5A1EC;
L_08A5A1EC:;
    return f0;
}

/* 08A5A1F4 */
rv_t func_08A5A1F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5A1F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A59F44(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5A208;
L_08A5A208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5A214 */
rv_t func_08A5A214(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5A214:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A59F44(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5A228;
L_08A5A228:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5A234 */
void func_08A5A234(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5A234:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5A248;
L_08A5A248:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+28, 0);
    v1 = v0 + 23196;
    a0 = s0 + 16;
    f0 = BITSF(LD32(v0+23196));
    v0 = D_08B155A0 - (21920);
    v0 = v0 + 21920;
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(s0+16, FBITS(f0));
    ST32(s0, v0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    sp = sp + 16;
    return;
}

/* 08A5A28C */
rv_t func_08A5A28C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A5A28C:;
    sp = sp - 80;
    s1 = a0 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s0 = sp + 0;
    if (cnd_) { goto L_08A5A6C0; }
    goto L_08A5A2B0;
L_08A5A2B0:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    v0 = v1 + 12;
    f0 = BITSF(LD32(v0+32));
    goto L_08A5A2C0;
L_08A5A2C0:;
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s0+32, FBITS(f0));
    f0 = BITSF(0);
    ST32(s0+28, FBITS(f8));
    s2 = s1 + 16;
    ST32(s0+4, FBITS(f2));
    ST32(s0, FBITS(f1));
    ST32(s0+8, FBITS(f3));
    ST32(s0+12, FBITS(f4));
    ST32(s0+16, FBITS(f5));
    ST32(s0+20, FBITS(f6));
    ST32(s0+24, FBITS(f7));
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
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A58C; }
    goto L_08A5A348;
L_08A5A348:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A4CC; }
    goto L_08A5A358;
L_08A5A358:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A5A3F0; }
    goto L_08A5A380;
L_08A5A380:;
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
    if (cnd_) { goto L_08A5A3CC; }
    goto L_08A5A3BC;
L_08A5A3BC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A5A3CC;
L_08A5A3CC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A410; }
    goto L_08A5A3DC;
L_08A5A3DC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A5A410; }
    goto L_08A5A3EC;
L_08A5A3EC:;
    goto L_08A5A3F0;
L_08A5A3F0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A410; }
    goto L_08A5A404;
L_08A5A404:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A5A410;
L_08A5A410:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A5A4A0; }
    goto L_08A5A430;
L_08A5A430:;
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
    if (cnd_) { goto L_08A5A47C; }
    goto L_08A5A46C;
L_08A5A46C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A5A47C;
L_08A5A47C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A4C0; }
    goto L_08A5A48C;
L_08A5A48C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A5A4C0; }
    goto L_08A5A49C;
L_08A5A49C:;
    goto L_08A5A4A0;
L_08A5A4A0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A4C0; }
    goto L_08A5A4B4;
L_08A5A4B4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A5A4C0;
L_08A5A4C0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A5A644; }
    goto L_08A5A4C8;
L_08A5A4C8:;
    goto L_08A5A4CC;
L_08A5A4CC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A5A560; }
    goto L_08A5A4F0;
L_08A5A4F0:;
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
    if (cnd_) { goto L_08A5A53C; }
    goto L_08A5A52C;
L_08A5A52C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A5A53C;
L_08A5A53C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A580; }
    goto L_08A5A54C;
L_08A5A54C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A5A580; }
    goto L_08A5A55C;
L_08A5A55C:;
    goto L_08A5A560;
L_08A5A560:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A580; }
    goto L_08A5A574;
L_08A5A574:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A5A580;
L_08A5A580:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A5A644; }
    goto L_08A5A588;
L_08A5A588:;
    goto L_08A5A58C;
L_08A5A58C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A5A620; }
    goto L_08A5A5B0;
L_08A5A5B0:;
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
    if (cnd_) { goto L_08A5A5FC; }
    goto L_08A5A5EC;
L_08A5A5EC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A5A5FC;
L_08A5A5FC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A640; }
    goto L_08A5A60C;
L_08A5A60C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A5A640; }
    goto L_08A5A61C;
L_08A5A61C:;
    goto L_08A5A620;
L_08A5A620:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A5A640; }
    goto L_08A5A634;
L_08A5A634:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A5A640;
L_08A5A640:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08A5A644;
L_08A5A644:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    f1 = BITSF(LD32(sp+52));
    fcc = FCMP(f1, f0, 12);
    f2 = f1;
    cnd_ = !fcc;
    ST32(s1+28, FBITS(f1));
    if (cnd_) { goto L_08A5A674; }
    goto L_08A5A668;
L_08A5A668:;
    v0 = D_08AF05FC - (1532);
    f0 = BITSF(LD32(v0+1532));
    f2 = f1 + f0;
    goto L_08A5A674;
L_08A5A674:;
    v0 = LD32(s1+4);
    ST32(s1+28, FBITS(f2));
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5A690;
L_08A5A690:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s2+8, FBITS(f0));
    ST32(s1+16, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    sp = sp + 80;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08A5A6C0:;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5A6D8;
L_08A5A6D8:;
    f0 = BITSF(LD32(v0+32));
    goto L_08A5A2C0;
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08A5A6E0 */
void func_08A5A6E0(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A5A6E0:;
    sp = sp - 96;
    s1 = a0 + 0;
    a0 = 3;
    s2 = a1 + 0;
    s0 = D_08B2C12C - (-16084);
    f24 = f13;
    f23 = f12;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5A724;
L_08A5A724:;
    a0 = 1;
    a1 = 2;
    a2 = 255;
    func_08A990F8(a0, a1, a2);
    goto L_08A5A734;
L_08A5A734:;
    a0 = 2;
    a1 = 2;
    a2 = 2;
    func_08A99134(a0, a1, a2);
    goto L_08A5A744;
L_08A5A744:;
    v0 = D_08AF0604 - (1540);
    f0 = BITSF(LD32(v0+1540));
    f13 = BITSF(0);
    v1 = 0xff860000u;
    a0 = s0 - 16084;
    fcc = FCMP(f13, f0, 12);
    v1 = v1 | 0x807b;
    ST32(a0+64, v1);
    v0 = (u32)-1;
    v1 = D_08AF0600 - (1536);
    ST32(a0+80, v0);
    cnd_ = !fcc;
    f22 = BITSF(LD32(v1+1536));
    if (cnd_) { goto L_08A5A7B0; }
    goto L_08A5A778;
L_08A5A778:;
    f21 = f0;
    goto L_08A5A77C;
L_08A5A77C:;
    f20 = f13 + f22;
    a0 = s1 + 0;
    a1 = s2 + 0;
    f12 = f23;
    f14 = f20;
    func_08A5A98C(a1, f12, f13, f14);
    goto L_08A5A794;
L_08A5A794:;
    a0 = s0 - 16084;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5A7A0;
L_08A5A7A0:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    f13 = f20;
    if (cnd_) { goto L_08A5A77C; }
    goto L_08A5A7B0;
L_08A5A7B0:;
    a0 = 2;
    a1 = 2;
    a2 = 255;
    func_08A990F8(a0, a1, a2);
    goto L_08A5A7C0;
L_08A5A7C0:;
    s0 = D_08C2CEE0 - (-12576);
    a1 = 0 + 0;
    a2 = 0 + 0;
    a0 = 0 + 0;
    func_08A99134(a0, a1, a2);
    goto L_08A5A7D4;
L_08A5A7D4:;
    a0 = LD32(s0-12576);
    v0 = D_08C2CEE4 - (-12572);
    v1 = v0 - 12572;
    f21 = BITSF(LD32(v1+4));
    f20 = BITSF(LD32(v0-12572));
    v0 = func_0883AE14(a0);
    goto L_08A5A7EC;
L_08A5A7EC:;
    a0 = v0 + 0;
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5A7F4;
L_08A5A7F4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A5A940; }
    goto L_08A5A7FC;
L_08A5A7FC:;
    v0 = D_08AF0608 - (1544);
    f0 = BITSF(LD32(v0+1544));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = 1; goto L_08A5A944; }
    goto L_08A5A814;
L_08A5A814:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = 1; goto L_08A5A944; }
    goto L_08A5A824;
L_08A5A824:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v0 = D_08AF060C - (1548);
    if (cnd_) { goto L_08A5A848; }
    goto L_08A5A834;
L_08A5A834:;
    f0 = BITSF(LD32(v0+1548));
    fcc = FCMP(f24, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = 1; goto L_08A5A944; }
    goto L_08A5A848;
L_08A5A848:;
    f0 = BITSF(LD32(a0+16));
    f6 = BITSF(LD32(a0+24));
    v0 = D_08C2CEEC - (-12564);
    f3 = BITSF(LD32(a0+32));
    f6 = f6 - f0;
    f1 = BITSF(LD32(v0-12564));
    f0 = BITSF(LD32(a0+20));
    f4 = BITSF(LD32(a0+28));
    f2 = BITSF(LD32(s1+16));
    f6 = f6 * f3;
    f4 = f4 - f0;
    f1 = f1 - f2;
    v0 = v0 - 12564;
    f0 = BITSF(LD32(a0+36));
    f9 = BITSF(LD32(v0+8));
    f8 = BITSF(LD32(s1+24));
    f4 = f4 * f0;
    f13 = f20 / f6;
    f12 = BITSF(LD32(s1+28));
    {v[4]=0.63661977236f;}
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f12);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    f5 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2));
    a0 = LD32(s0-12576);
    a1 = sp + 16;
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    f7 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    a2 = 1;
    a3 = (u32)-1;
    f8 = f8 - f9;
    f1 = f1 / f20;
    f0 = f8 / f21;
    f14 = f21 / f4;
    f1 = f1 * f6;
    f13 = f13 * f24;
    f8 = f0 * f4;
    f14 = f14 * f24;
    f12 = BITSF(FBITS(f12) ^ 0x80000000u);
    f1 = f1 * f13;
    f8 = f8 * f14;
    f0 = f1 * f3;
    f1 = f1 * f7;
    f3 = f8 * f3;
    f7 = f8 * f7;
    f5 = f5 - f0;
    f2 = f2 + f1;
    f5 = f5 + f7;
    f2 = f2 + f3;
    ST32(sp+20, FBITS(f5));
    ST32(sp+16, FBITS(f2));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f5));
    func_08A501D8(a0, a1, a2, a3, f12, f13, f14);
    goto L_08A5A938;
L_08A5A938:;
    v0 = func_08901790();
    goto L_08A5A940;
L_08A5A940:;
    a0 = 1;
    goto L_08A5A944;
L_08A5A944:;
    a1 = 0 + 0;
    a2 = 255;
    func_08A990F8(a0, a1, a2);
    goto L_08A5A950;
L_08A5A950:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    a2 = 2;
    func_08A99134(a0, a1, a2);
    goto L_08A5A960;
L_08A5A960:;
    sp = sp + 96;
    return;
}

/* 08A5A98C */
void func_08A5A98C(u32 a1, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr8 = v[8], vr12 = v[12];
L_08A5A98C:;
    f0 = BITSF(LD32(a1));
    {vr12=0.63661977236f;}
    a0 = D_08B2C12C - (-16084);
    ST32(a0-16084, FBITS(f0));
    v0 = FBITS(f13);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr0=d0;}
    f0 = BITSF(LD32(a1+4));
    a0 = a0 - 16084;
    v1 = D_08AF0614 - (1556);
    ST32(a0+16, FBITS(f0));
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = FBITS(f13);
    {vr4=BITSF(v0);}
    f1 = f12 * f0;
    f0 = BITSF(LD32(a1));
    {float s0=vr4;float t0=vr12;float d0=s0*t0;vr0=d0;}
    f13 = f13 + f14;
    f0 = f0 + f1;
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    ST32(a0+4, FBITS(f0));
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = BITSF(LD32(a1+4));
    v0 = FBITS(f14);
    f1 = f12 * f0;
    f0 = BITSF(LD32(v1+1556));
    {v[20]=BITSF(v0);}
    f13 = f13 * f0;
    f2 = f2 + f1;
    v0 = FBITS(f13);
    {vr8=BITSF(v0);}
    {float s0=vr8;float t0=vr12;float d0=s0*t0;vr0=d0;}
    {v[16]=BITSF(v0);}
    ST32(a0+20, FBITS(f2));
    {float s0=v[16];float t0=vr12;float d0=s0*t0;vr4=d0;}
    {float s0=v[20];float t0=vr12;float d0=s0*t0;vr8=d0;}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = BITSF(LD32(a1));
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    f1 = f12 * f0;
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    {float s0=vr8;float d0=sinf(s0*1.57079632679f);vr8=d0;}
    f2 = f2 + f1;
    f3 = f12 * f0;
    {v0=FBITS(vr8);}
    f0 = BITSF(v0);
    ST32(a0+8, FBITS(f2));
    v0 = FBITS(f14);
    f4 = f12 * f0;
    f1 = BITSF(LD32(a1+4));
    {v[24]=BITSF(v0);}
    {float s0=v[24];float t0=vr12;float d0=s0*t0;vr12=d0;}
    f1 = f1 + f3;
    ST32(a0+24, FBITS(f1));
    {float s0=vr12;float d0=cosf(s0*1.57079632679f);vr12=d0;}
    {v0=FBITS(vr12);}
    f1 = BITSF(LD32(a1));
    f0 = BITSF(v0);
    f1 = f1 + f4;
    f12 = f12 * f0;
    ST32(a0+12, FBITS(f1));
    f0 = BITSF(LD32(a1+4));
    ST8(a0+93, 0);
    f0 = f0 + f12;
    ST32(a0+28, FBITS(f0));
    { v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;return; }
    v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;
}

/* 08A5AAAC */
rv_t func_08A5AAAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A5AAAC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t2 = D_08C30CD4 - (3284);
    t3 = D_08C30CE4 - (3300);
    t4 = D_08C30CF4 - (3316);
    t5 = D_08C30D04 - (3332);
    a1 = a1 & a0;
    a2 = t5 + 3332;
    a3 = t2 + 3284;
    t0 = t3 + 3300;
    cnd_ = a1 == 0;
    t1 = t4 + 3316;
    if (cnd_) { goto L_08A5AB94; }
    goto L_08A5AAE4;
L_08A5AAE4:;
    v0 = D_08AF0618 - (1560);
    f4 = BITSF(LD32(v0+1560));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF061C - (1564);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f7 = BITSF(LD32(v1+1564));
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
    ST32(a2+8, 0);
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(a2+24, 0);
    f3 = f3 * f4;
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    ST32(t1+12, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f3));
    ST32(t0+12, FBITS(f1));
    ST32(t2+3284, FBITS(f2));
    ST32(t5+3332, FBITS(f7));
    ST32(t3+3300, FBITS(f6));
    ST32(t4+3316, FBITS(f1));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f3));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A5AB94;
L_08A5AB94:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5AB9C */
rv_t func_08A5AB9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5AB9C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5AAAC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5ABB0;
L_08A5ABB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5ABBC */
void func_08A5ABBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5ABBC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5ABD0;
L_08A5ABD0:;
    v1 = D_08AF0624 - (1572);
    f0 = BITSF(LD32(v1+1572));
    v0 = D_08B155C8 - (21960);
    v0 = v0 + 21960;
    a0 = s0 + 28;
    ST32(s0, v0);
    ST32(s0+24, FBITS(f0));
    ST32(s0+76, 0);
    ST8(s0+16, 0);
    ST8(s0+17, 0);
    ST32(s0+20, 0);
    ST32(s0+28, 0);
    ST32(a0+8, 0);
    ST32(a0+4, 0);
    sp = sp + 16;
    return;
}

/* 08A5AC18 */
rv_t func_08A5AC18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5AC18:;
    sp = sp - 32;
    a1 = 0xae20000u;
    s0 = a0 + 0;
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x6e48;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5AC44;
L_08A5AC44:;
    v0 = D_08AF0628 - (1576);
    f12 = BITSF(LD32(v0+1576));
    a0 = LD32(sp);
    a1 = 0xc88a0000u;
    a1 = a1 | 0xcecf;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5AC5C;
L_08A5AC5C:;
    ST32(s0+24, FBITS(f0));
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5AC74 */
rv_t func_08A5AC74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5AC74:;
    sp = sp - 16;
    a1 = D_08C2A6C8 - (-22840);
    a3 = a1 - 22840;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v0 = 999;
    a0 = a0 + v1;
    a2 = LD32(a0+4);
    cnd_ = a2 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A5AE54; }
    goto L_08A5ACB4;
L_08A5ACB4:;
    v0 = LD32(a3+4);
    v1 = LD32(a1-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A5AD04; }
    goto L_08A5ACD8;
L_08A5ACD8:;
    a0 = LD32(a1);
    goto L_08A5ACDC;
L_08A5ACDC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A5AE64; }
    goto L_08A5ACF4;
L_08A5ACF4:;
    a1 = LD32(a1+4);
    goto L_08A5ACF8;
L_08A5ACF8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A5ACDC; }
    goto L_08A5AD00;
L_08A5AD00:;
    s1 = 0 + 0;
    goto L_08A5AD04;
L_08A5AD04:;
    cnd_ = s1 == 0;
    if (cnd_) { a1 = D_08AF062C - (1580); goto L_08A5AE58; }
    goto L_08A5AD0C;
L_08A5AD0C:;
    v1 = LD32(s1+236);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A5ADE4; }
    goto L_08A5AD18;
L_08A5AD18:;
    v0 = LD_U8(v1+125);
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s1+348)); goto L_08A5AD34; }
    goto L_08A5AD24;
L_08A5AD24:;
    v0 = LD_U8(v1+124);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5ADE4; }
    goto L_08A5AD30;
L_08A5AD30:;
    f1 = BITSF(LD32(s1+348));
    goto L_08A5AD34;
L_08A5AD34:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    a1 = D_08AF062C - (1580);
    if (cnd_) { goto L_08A5AD54; }
    goto L_08A5AD48;
L_08A5AD48:;
    f0 = BITSF(LD32(s1+344));
    f0 = f0 / f1;
    ST32(s0+20, FBITS(f0));
    goto L_08A5AD54;
L_08A5AD54:;
    v0 = 1;
    ST8(s0+16, v0);
    v1 = LD32(s1+520);
    v0 = (v1 >> 11) & 0x1;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A5AD78; }
    goto L_08A5AD6C;
L_08A5AD6C:;
    v0 = (v1 >> 10) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+17, a0); goto L_08A5AD80; }
    goto L_08A5AD78;
L_08A5AD78:;
    a0 = 1;
    ST8(s0+17, a0);
    goto L_08A5AD80;
L_08A5AD80:;
    f1 = BITSF(LD32(a1+1580));
    f0 = BITSF(LD32(s0+20));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+76, 0); goto L_08A5ADBC; }
    goto L_08A5AD98;
L_08A5AD98:;
    cnd_ = s1 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A5ADD0; }
    goto L_08A5ADA0;
L_08A5ADA0:;
    v1 = LD32(s1);
    v0 = LD32(v1+332);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5ADB0;
L_08A5ADB0:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A5ADD0; }
    goto L_08A5ADB8;
L_08A5ADB8:;
    ST32(s0+76, 0);
    goto L_08A5ADBC;
L_08A5ADBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5ADD0:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+76));
    f0 = f0 + f1;
    ST32(s0+76, FBITS(f0));
    goto L_08A5ADBC;
L_08A5ADE4:;
    cnd_ = s1 == 0;
    a1 = D_08AF062C - (1580);
    if (cnd_) { goto L_08A5AE58; }
    goto L_08A5ADEC;
L_08A5ADEC:;
    v1 = LD32(s1);
    v0 = LD32(v1+332);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5ADFC;
L_08A5ADFC:;
    cnd_ = v0 != 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_08A5AE28; }
    goto L_08A5AE04;
L_08A5AE04:;
    v0 = LD32(v1+368);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5AE10;
L_08A5AE10:;
    f1 = BITSF(LD32(s0+24));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a1 = D_08AF062C - (1580); goto L_08A5AE58; }
    goto L_08A5AE24;
L_08A5AE24:;
    v1 = LD32(s1);
    goto L_08A5AE28;
L_08A5AE28:;
    v0 = LD32(v1+368);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5AE34;
L_08A5AE34:;
    f1 = BITSF(LD32(s0+24));
    v0 = 1;
    a1 = D_08AF062C - (1580);
    f0 = f0 / f1;
    ST8(s0+17, v0);
    ST8(s0+16, 0);
    goto L_08A5AE4C;
L_08A5AE4C:;
    ST32(s0+20, FBITS(f0));
    goto L_08A5AD80;
L_08A5AE54:;
    a1 = D_08AF062C - (1580);
    goto L_08A5AE58;
L_08A5AE58:;
    f0 = BITSF(LD32(a1+1580));
    ST8(s0+17, 0);
    goto L_08A5AE4C;
L_08A5AE64:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A5ACF4; }
    goto L_08A5AE70;
L_08A5AE70:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5ACF8; }
    goto L_08A5AE7C;
L_08A5AE7C:;
    goto L_08A5AD04;
}

/* 08A5AE84 */
rv_t func_08A5AE84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A5AE84:;
    sp = sp - 80;
    s4 = 30;
    v0 = LD_U8(a0+17);
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08A5AED0; }
    goto L_08A5AEB4;
L_08A5AEB4:;
    v0 = D_08AF0630 - (1584);
    f0 = BITSF(LD32(a0+76));
    f1 = BITSF(LD32(v0+1584));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A5AFF4; }
    goto L_08A5AED0;
L_08A5AED0:;
    v0 = D_08B1C930 - (-14032);
    a0 = LD32(v0-14032);
    v1 = LD_U8(s3+16);
    v0 = 25;
    if (v1 == 0) s4 = v0;
    { u64 r_ = func_0883AF04(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5AEE8;
L_08A5AEE8:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A5AFF0; }
    goto L_08A5AEF0;
L_08A5AEF0:;
    f1 = BITSF(LD32(s3+20));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08A5AFF4; }
    goto L_08A5AF08;
L_08A5AF08:;
    v0 = LD32(s3+4);
    v1 = LD_U8(v0+28);
    cnd_ = v1 == 0;
    v0 = D_08AE5B94 - (23444);
    if (cnd_) { goto L_08A5B014; }
    goto L_08A5AF18;
L_08A5AF18:;
    v0 = D_08AE5B90 - (23440);
    s5 = LD32(v0+23440);
    goto L_08A5AF20;
L_08A5AF20:;
    a0 = sp + 0;
    func_08A5D6D0(a0, a1);
    goto L_08A5AF28;
L_08A5AF28:;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(s3+20));
    a1 = s5 + 0;
    f0 = f0 - f1;
    a0 = s3 + 0;
    s1 = sp + 32;
    s0 = D_08C30D74 - (3444);
    f0 = f0 * f2;
    s2 = s0 + 3444;
    f1 = f1 + f0;
    ST32(sp+12, FBITS(f1));
    v0 = func_08A5B01C(a0, a1);
    goto L_08A5AF5C;
L_08A5AF5C:;
    a3 = v0 + 0;
    v0 = D_08C30D7C - (3452);
    v1 = v0 + 3452;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+3452));
    a2 = 1;
    a0 = s4 + 0;
    a1 = s1 + 0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5AF88;
L_08A5AF88:;
    a1 = 0xff800000u;
    a0 = s3 + 0;
    a1 = a1 | 0x8080;
    v0 = func_08A5B01C(a0, a1);
    goto L_08A5AF98;
L_08A5AF98:;
    f0 = BITSF(LD32(s0+3444));
    f1 = BITSF(LD32(s2+4));
    a3 = v0 + 0;
    a2 = 0 + 0;
    a1 = s1 + 0;
    a0 = 18;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5AFBC;
L_08A5AFBC:;
    a1 = 0xffe60000u;
    a0 = s3 + 0;
    a1 = a1 | 0xe4e4;
    v0 = func_08A5B01C(a0, a1);
    goto L_08A5AFCC;
L_08A5AFCC:;
    f0 = BITSF(LD32(s0+3444));
    f1 = BITSF(LD32(s2+4));
    a3 = v0 + 0;
    a1 = s1 + 0;
    a0 = sp + 0;
    a2 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A5AFF0;
L_08A5AFF0:;
    goto L_08A5AFF4;
L_08A5AFF4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A5B014:;
    s5 = LD32(v0+23444);
    goto L_08A5AF20;
}

/* 08A5B01C */
u32 func_08A5B01C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B01C:;
    v0 = a1 >> 24;
    f2 = BITSF(v0);
    v0 = D_08AF0638 - (1592);
    f1 = BITSF(LD32(a0+76));
    f0 = BITSF(LD32(v0+1592));
    v0 = D_08AF0634 - (1588);
    f4 = BITSF(LD32(v0+1588));
    f1 = f1 * f0;
    f5 = (float)(s32)FBITS(f2);
    v0 = D_08AF063C - (1596);
    f0 = BITSF(LD32(v0+1596));
    v1 = a1 & 0xff;
    f5 = f5 * f4;
    f0 = f0 - f1;
    a2 = (a1 >> 8) & 0xff;
    a0 = D_08AF0640 - (1600);
    a1 = (a1 >> 16) & 0xff;
    f5 = f5 * f0;
    f2 = BITSF(v1);
    f6 = BITSF(a2);
    f8 = BITSF(LD32(a0+1600));
    f7 = BITSF(a1);
    f1 = (float)(s32)FBITS(f2);
    f3 = (float)(s32)FBITS(f6);
    f2 = (float)(s32)FBITS(f7);
    f6 = f5 * f8;
    f0 = BITSF(0);
    f1 = f1 * f4;
    f3 = f3 * f4;
    f2 = f2 * f4;
    fcc = FCMP(f0, f6, 12);
    sp = sp - 16;
    ST32(sp+8, FBITS(f1));
    v1 = sp + 0;
    ST32(sp+4, FBITS(f3));
    ST32(sp, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f5));
    if (cnd_) { goto L_08A5B190; }
    goto L_08A5B0B4;
L_08A5B0B4:;
    a1 = D_08AF0644 - (1604);
    f0 = BITSF(LD32(a1+1604));
    f0 = f6 + f0;
    goto L_08A5B0C0;
L_08A5B0C0:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(a0+1600));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A5B184; }
    goto L_08A5B0E8;
L_08A5B0E8:;
    f0 = BITSF(LD32(a1+1604));
    f0 = f2 + f0;
    goto L_08A5B0F0;
L_08A5B0F0:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0+1600));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A5B178; }
    goto L_08A5B11C;
L_08A5B11C:;
    f0 = BITSF(LD32(a1+1604));
    f0 = f1 + f0;
    goto L_08A5B124;
L_08A5B124:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a0+1600));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A5B16C; }
    goto L_08A5B150;
L_08A5B150:;
    f0 = BITSF(LD32(a1+1604));
    f0 = f1 + f0;
    goto L_08A5B158;
L_08A5B158:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 16;
    return v0;
L_08A5B16C:;
    f0 = BITSF(LD32(a1+1604));
    f0 = f1 - f0;
    goto L_08A5B158;
L_08A5B178:;
    f0 = BITSF(LD32(a1+1604));
    f0 = f1 - f0;
    goto L_08A5B124;
L_08A5B184:;
    f0 = BITSF(LD32(a1+1604));
    f0 = f2 - f0;
    goto L_08A5B0F0;
L_08A5B190:;
    a1 = D_08AF0644 - (1604);
    f0 = BITSF(LD32(a1+1604));
    f0 = f6 - f0;
    goto L_08A5B0C0;
}

/* 08A5B1A0 */
rv_t func_08A5B1A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A5B1A0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30D24 - (3364);
    t4 = D_08C30D34 - (3380);
    t7 = D_08C30D44 - (3396);
    t8 = D_08C30D54 - (3412);
    t2 = D_08C30D74 - (3444);
    t5 = D_08C30D7C - (3452);
    a1 = a1 & a0;
    a2 = t8 + 3412;
    a3 = t3 + 3364;
    t0 = t4 + 3380;
    t1 = t7 + 3396;
    t6 = t2 + 3444;
    cnd_ = a1 == 0;
    t9 = t5 + 3452;
    if (cnd_) { goto L_08A5B2C8; }
    goto L_08A5B1E8;
L_08A5B1E8:;
    v0 = D_08AF0648 - (1608);
    f3 = BITSF(LD32(v0+1608));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(a2+8, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+24, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    ST32(a2+28, 0);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    ST32(a2+20, 0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF0650 - (1616);
    f2 = f2 * f3;
    f1 = f1 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+1616));
    v0 = D_08AF0654 - (1620);
    ST32(t1+12, FBITS(f1));
    f6 = f6 * f3;
    f4 = f4 * f3;
    ST32(t2+3444, FBITS(f0));
    v1 = D_08AF064C - (1612);
    f5 = f5 * f3;
    f0 = BITSF(LD32(v0+1620));
    v0 = D_08AF0658 - (1624);
    ST32(t3+3364, FBITS(f2));
    ST32(t6+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1624));
    v0 = D_08AF065C - (1628);
    f7 = BITSF(LD32(v1+1612));
    ST32(t5+3452, FBITS(f0));
    f0 = BITSF(LD32(v0+1628));
    ST32(t4+3380, FBITS(f6));
    ST32(t9+4, FBITS(f0));
    ST32(t7+3396, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t8+3412, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A5B2C8;
L_08A5B2C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5B2D0 */
rv_t func_08A5B2D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B2D0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5B1A0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B2E4;
L_08A5B2E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5B2F0 */
void func_08A5B2F0(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B2F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5B304;
L_08A5B304:;
    v0 = D_08B155F0 - (22000);
    v0 = v0 + 22000;
    ST32(s0, v0);
    ST32(s0+20, 0);
    ST32(s0+16, 0);
    sp = sp + 16;
    return;
}

/* 08A5B328 */
rv_t func_08A5B328(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5B328:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+216);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B354;
L_08A5B354:;
    cnd_ = v0 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08A5B3DC; }
    goto L_08A5B35C;
L_08A5B35C:;
    f0 = BITSF(0);
    a0 = LD32(v0+24);
    f20 = BITSF(LD32(a0+52));
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    a1 = D_08AF0660 - (1632);
    if (cnd_) { goto L_08A5B3D4; }
    goto L_08A5B378;
L_08A5B378:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+80));
    f0 = f0 / f20;
    goto L_08A5B38C;
L_08A5B38C:;
    ST32(s0+16, FBITS(f0));
    goto L_08A5B390;
L_08A5B390:;
    f1 = BITSF(LD32(a1+1632));
    f0 = BITSF(LD32(s0+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A5B3C0; }
    goto L_08A5B3A8;
L_08A5B3A8:;
    ST32(s0+20, 0);
    goto L_08A5B3AC;
L_08A5B3AC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5B3C0:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+20));
    f0 = f0 + f1;
    ST32(s0+20, FBITS(f0));
    goto L_08A5B3AC;
L_08A5B3D4:;
    f0 = BITSF(LD32(a1+1632));
    goto L_08A5B38C;
L_08A5B3DC:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+348);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B3F0;
L_08A5B3F0:;
    f20 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    a1 = D_08AF0660 - (1632);
    if (cnd_) { goto L_08A5B390; }
    goto L_08A5B408;
L_08A5B408:;
    v0 = LD32(s0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+344);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B420;
L_08A5B420:;
    f0 = f0 / f20;
    a1 = D_08AF0660 - (1632);
    goto L_08A5B38C;
}

/* 08A5B42C */
rv_t func_08A5B42C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5B42C:;
    sp = sp - 48;
    a2 = D_08AF0664 - (1636);
    f1 = BITSF(LD32(a0+20));
    f0 = BITSF(LD32(a2+1636));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A5B548; }
    goto L_08A5B45C;
L_08A5B45C:;
    v1 = LD32(a0+4);
    v0 = LD_U8(v1+28);
    cnd_ = v0 == 0;
    v0 = D_08AE5B9C - (23452);
    if (cnd_) { goto L_08A5B560; }
    goto L_08A5B46C;
L_08A5B46C:;
    v0 = D_08AE5B98 - (23448);
    a0 = LD32(v0+23448);
    goto L_08A5B474;
L_08A5B474:;
    a1 = LD32(v1+24);
    f20 = BITSF(LD32(a2+1636));
    f12 = BITSF(LD32(s1+20));
    v0 = LD32(a1);
    f13 = f20;
    s0 = 22;
    v1 = LD32(v0-16);
    a1 = a1 + v1;
    v0 = LD_U16(a1+8);
    v1 = 25;
    v0 = v0 ^ 0x8005;
    if (v0 != 0) s0 = v1;
    v0 = func_08A512A0(a0, f12, f13);
    goto L_08A5B4A8;
L_08A5B4A8:;
    a2 = v0 + 0;
    v0 = D_08C30DDC - (3548);
    v1 = v0 + 3548;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+3548));
    a3 = a2 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B4D8;
L_08A5B4D8:;
    a0 = 0xff800000u;
    f12 = BITSF(LD32(s1+20));
    f13 = f20;
    a0 = a0 | 0x8080;
    v0 = func_08A512A0(a0, f12, f13);
    goto L_08A5B4EC;
L_08A5B4EC:;
    a2 = v0 + 0;
    v0 = D_08C30DD4 - (3540);
    s0 = v0 + 3540;
    f0 = BITSF(LD32(v0+3540));
    f1 = BITSF(LD32(s0+4));
    a3 = a2 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    a0 = 18;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B51C;
L_08A5B51C:;
    a0 = 0xffe60000u;
    f12 = BITSF(LD32(s1+20));
    a0 = a0 | 0xe4e4;
    f13 = f20;
    v0 = func_08A512A0(a0, f12, f13);
    goto L_08A5B530;
L_08A5B530:;
    f12 = BITSF(LD32(s1+16));
    a2 = v0 + 0;
    a1 = s0 + 0;
    a0 = 17;
    a3 = 0 + 0;
    { rv_t r_ = func_08A512F8(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B548;
L_08A5B548:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A5B560:;
    a0 = LD32(v0+23452);
    goto L_08A5B474;
}

/* 08A5B568 */
rv_t func_08A5B568(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A5B568:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30D84 - (3460);
    t4 = D_08C30D94 - (3476);
    t7 = D_08C30DA4 - (3492);
    t8 = D_08C30DB4 - (3508);
    t2 = D_08C30DD4 - (3540);
    t5 = D_08C30DDC - (3548);
    a1 = a1 & a0;
    a2 = t8 + 3508;
    a3 = t3 + 3460;
    t0 = t4 + 3476;
    t1 = t7 + 3492;
    t6 = t2 + 3540;
    cnd_ = a1 == 0;
    t9 = t5 + 3548;
    if (cnd_) { goto L_08A5B690; }
    goto L_08A5B5B0;
L_08A5B5B0:;
    v0 = D_08AF0668 - (1640);
    f3 = BITSF(LD32(v0+1640));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(a2+8, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+24, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    ST32(a2+28, 0);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    ST32(a2+20, 0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF0670 - (1648);
    f2 = f2 * f3;
    f1 = f1 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+1648));
    v0 = D_08AF0674 - (1652);
    ST32(t1+12, FBITS(f1));
    f6 = f6 * f3;
    f4 = f4 * f3;
    ST32(t2+3540, FBITS(f0));
    v1 = D_08AF066C - (1644);
    f5 = f5 * f3;
    f0 = BITSF(LD32(v0+1652));
    v0 = D_08AF0678 - (1656);
    ST32(t3+3460, FBITS(f2));
    ST32(t6+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1656));
    v0 = D_08AF067C - (1660);
    f7 = BITSF(LD32(v1+1644));
    ST32(t5+3548, FBITS(f0));
    f0 = BITSF(LD32(v0+1660));
    ST32(t4+3476, FBITS(f6));
    ST32(t9+4, FBITS(f0));
    ST32(t7+3492, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t8+3508, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A5B690;
L_08A5B690:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5B698 */
rv_t func_08A5B698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B698:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5B568(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B6AC;
L_08A5B6AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5B6B8 */
void func_08A5B6B8(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B6B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5B6CC;
L_08A5B6CC:;
    v0 = D_08B15618 - (22040);
    v0 = v0 + 22040;
    ST32(s0, v0);
    ST32(s0+24, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    sp = sp + 16;
    return;
}

/* 08A5B6F4 */
rv_t func_08A5B6F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B6F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE5BA0 - (23456);
    a0 = a0 + 23456;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B710;
L_08A5B710:;
    ST32(s0+16, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5B728 */
rv_t func_08A5B728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5B728:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B750;
L_08A5B750:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_08A5B7DC; }
    goto L_08A5B764;
L_08A5B764:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A5B7B4; }
    goto L_08A5B788;
L_08A5B788:;
    a0 = LD32(a1);
    goto L_08A5B78C;
L_08A5B78C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A5B7EC; }
    goto L_08A5B7A4;
L_08A5B7A4:;
    a1 = LD32(a1+4);
    goto L_08A5B7A8;
L_08A5B7A8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A5B78C; }
    goto L_08A5B7B0;
L_08A5B7B0:;
    a0 = 0 + 0;
    goto L_08A5B7B4;
L_08A5B7B4:;
    cnd_ = a0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A5B7DC; }
    goto L_08A5B7BC;
L_08A5B7BC:;
    a0 = LD32(a0+64);
    cnd_ = a0 == v0;
    ST32(s0+20, a0);
    if (cnd_) { goto L_08A5B7DC; }
    goto L_08A5B7C8;
L_08A5B7C8:;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B7D0;
L_08A5B7D0:;
    ST32(s0+24, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08A4FAC0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B7DC;
L_08A5B7DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5B7EC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5B7A8; }
    goto L_08A5B7F8;
L_08A5B7F8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5B7A8; }
    goto L_08A5B804;
L_08A5B804:;
    goto L_08A5B7B4;
}

/* 08A5B80C */
rv_t func_08A5B80C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5B80C:;
    sp = sp - 32;
    v1 = LD32(a0+20);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A5B8A8; }
    goto L_08A5B838;
L_08A5B838:;
    v0 = v1 << 2;
    v1 = D_08AE5BC8 - (23496);
    v1 = v1 + 23496;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A5B854u: goto L_08A5B854; case 0x08A5B8A8u: goto L_08A5B8A8; case 0x08A5B944u: goto L_08A5B944; case 0x08A5B950u: goto L_08A5B950; case 0x08A5B95Cu: goto L_08A5B95C; default: rs_break(0, 0x08a5b84c); }
L_08A5B854:;
    s4 = 11;
    s3 = 12;
    goto L_08A5B85C;
L_08A5B85C:;
    s2 = 0 + 0;
    v0 = func_08973660();
    goto L_08A5B864;
L_08A5B864:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5B908; }
    goto L_08A5B86C;
L_08A5B86C:;
    a0 = LD32(s0+24);
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B874;
L_08A5B874:;
    a0 = LD32(s0+20);
    s1 = v0 + 0;
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B880;
L_08A5B880:;
    s2 = v0 + 0;
    goto L_08A5B884;
L_08A5B884:;
    v1 = ~(0 | s2);
    goto L_08A5B888;
L_08A5B888:;
    v0 = ~(0 | s1);
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a3 = D_08C30E3C - (3644);
    if (cnd_) { goto L_08A5B8C8; }
    goto L_08A5B8A0;
L_08A5B8A0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A5BADC(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B8A8;
L_08A5B8A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5B8C8:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = a3 + 3644;
    a0 = s0 + 0;
    t0 = 0xffff0000u;
    func_08A5B968(a0, a1, a2, a3, t0);
    goto L_08A5B8E0;
L_08A5B8E0:;
    t0 = 0xff000000u;
    a3 = D_08C30E34 - (3636);
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = a3 + 3636;
    a0 = s0 + 0;
    t0 = t0 | 0xff;
    func_08A5B968(a0, a1, a2, a3, t0);
    goto L_08A5B900;
L_08A5B900:;
    goto L_08A5B8A0;
L_08A5B908:;
    s1 = 0 + 0;
    v0 = func_0897364C();
    goto L_08A5B910;
L_08A5B910:;
    cnd_ = v0 == 0;
    v1 = ~(0 | s2);
    if (cnd_) { goto L_08A5B888; }
    goto L_08A5B918;
L_08A5B918:;
    a0 = LD32(s0+24);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B920;
L_08A5B920:;
    a0 = v0 + 0;
    v0 = func_08973AA0(a0, 0, 0, 0);
    goto L_08A5B928;
L_08A5B928:;
    a0 = LD32(s0+20);
    s1 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5B934;
L_08A5B934:;
    a0 = v0 + 0;
    v0 = func_08973AA0(a0, 0, 0, 0);
    goto L_08A5B93C;
L_08A5B93C:;
    s2 = v0 + 0;
    goto L_08A5B884;
L_08A5B944:;
    s4 = 14;
    s3 = 13;
    goto L_08A5B85C;
L_08A5B950:;
    s4 = 13;
    s3 = 14;
    goto L_08A5B85C;
L_08A5B95C:;
    s4 = 12;
    s3 = 11;
    goto L_08A5B85C;
}

/* 08A5B968 */
void func_08A5B968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_08A5B968:;
    sp = sp - 336;
    s6 = t0 + 0;
    s5 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    v0 = LD32(a0+4);
    v1 = LD_U8(v0+28);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A5BAD0; }
    goto L_08A5B9B0;
L_08A5B9B0:;
    v0 = D_08AE5BE8 - (23528);
    s3 = LD32(v0+23528);
    goto L_08A5B9B8;
L_08A5B9B8:;
    v0 = (u32)-1;
    s4 = sp + 32;
    cnd_ = s2 == v0;
    s7 = sp + 16;
    if (cnd_) { goto L_08A5BA70; }
    goto L_08A5B9C8;
L_08A5B9C8:;
    a0 = LD32(s0+16);
    func_088CD5B0(a0);
    goto L_08A5B9D0;
L_08A5B9D0:;
    a1 = D_08AE5BDC - (23516);
    a1 = a1 + 23516;
    a2 = 128;
    t0 = s2 + 0;
    a3 = 1;
    a0 = s4 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5B9EC;
L_08A5B9EC:;
    a0 = LD32(s0+16);
    func_088CD5B0(a0);
    goto L_08A5B9F4;
L_08A5B9F4:;
    v1 = D_08AF0688 - (1672);
    f13 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v1+1672));
    v0 = D_08AF0684 - (1668);
    f12 = BITSF(LD32(s1));
    f13 = f13 + f0;
    f14 = BITSF(LD32(v0+1668));
    a0 = s3 + 0;
    a2 = s4 + 0;
    a1 = 4132;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5BA20;
L_08A5BA20:;
    f1 = BITSF(LD32(s1+4));
    goto L_08A5BA24;
L_08A5BA24:;
    f0 = BITSF(LD32(s1));
    a0 = s5 + 0;
    a1 = s7 + 0;
    a3 = s6 + 0;
    a2 = 1;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5BA44;
L_08A5BA44:;
    sp = sp + 336;
    return;
L_08A5BA70:;
    v0 = func_08973660();
    goto L_08A5BA78;
L_08A5BA78:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5B9C8; }
    goto L_08A5BA80;
L_08A5BA80:;
    v0 = func_0897364C();
    goto L_08A5BA88;
L_08A5BA88:;
    cnd_ = v0 != 0;
    v0 = D_08AF0680 - (1664);
    if (cnd_) { goto L_08A5B9C8; }
    goto L_08A5BA90;
L_08A5BA90:;
    f1 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(v0+1664));
    f2 = BITSF(LD32(s1));
    s7 = sp + 16;
    f1 = f1 + f0;
    a3 = s3 + 0;
    a0 = 36;
    a2 = 1;
    a1 = s7 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5BAC8;
L_08A5BAC8:;
    f1 = BITSF(LD32(s1+4));
    goto L_08A5BA24;
L_08A5BAD0:;
    v0 = D_08AE5BE4 - (23524);
    s3 = LD32(v0+23524);
    goto L_08A5B9B8;
}

/* 08A5BADC */
rv_t func_08A5BADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5BADC:;
    sp = sp - 32;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5BB00;
L_08A5BB00:;
    a2 = v0 + 0;
    a0 = D_08C2BDB8 - (-16968);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 16968;
    if (cnd_) { goto L_08A5BC04; }
    goto L_08A5BB14;
L_08A5BB14:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16968);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A5BB64; }
    goto L_08A5BB38;
L_08A5BB38:;
    a0 = LD32(a1);
    goto L_08A5BB3C;
L_08A5BB3C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A5BC20; }
    goto L_08A5BB54;
L_08A5BB54:;
    a1 = LD32(a1+4);
    goto L_08A5BB58;
L_08A5BB58:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A5BB3C; }
    goto L_08A5BB60;
L_08A5BB60:;
    v1 = 0 + 0;
    goto L_08A5BB64;
L_08A5BB64:;
    cnd_ = v1 == 0;
    s0 = (u32)-1;
    if (cnd_) { goto L_08A5BC04; }
    goto L_08A5BB6C;
L_08A5BB6C:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08A5BB80;
L_08A5BB80:;
    v1 = v0 + 0;
    v0 = 0x6aaa0000u;
    v0 = v0 | 0x1847;
    cnd_ = v1 == v0;
    a0 = 44;
    if (cnd_) { goto L_08A5BBDC; }
    goto L_08A5BB94;
L_08A5BB94:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x81690000u;
    if (cnd_) { goto L_08A5BC14; }
    goto L_08A5BBA0;
L_08A5BBA0:;
    v0 = 0x57590000u;
    v0 = v0 | 0x37ea;
    a0 = 45;
    goto L_08A5BBAC;
L_08A5BBAC:;
    cnd_ = v1 == v0;
    v0 = D_08C30E44 - (3652);
    if (cnd_) { goto L_08A5BBE0; }
    goto L_08A5BBB4;
L_08A5BBB4:;
    v0 = func_0897364C();
    goto L_08A5BBBC;
L_08A5BBBC:;
    cnd_ = v0 == 0;
    a0 = 44;
    if (cnd_) { goto L_08A5BBDC; }
    goto L_08A5BBC4;
L_08A5BBC4:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    a0 = 37;
    v0 = 15;
    if (v1 == 0) a0 = v0;
    s0 = (u32)-256;
    goto L_08A5BBDC;
L_08A5BBDC:;
    v0 = D_08C30E44 - (3652);
    goto L_08A5BBE0;
L_08A5BBE0:;
    v1 = v0 + 3652;
    f0 = BITSF(LD32(v0+3652));
    f1 = BITSF(LD32(v1+4));
    a3 = s0 + 0;
    a1 = sp + 0;
    a2 = 1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A4FCE8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5BC04;
L_08A5BC04:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5BC14:;
    v0 = v0 | 0x92f8;
    a0 = 43;
    goto L_08A5BBAC;
L_08A5BC20:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A5BB54; }
    goto L_08A5BC2C;
L_08A5BC2C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5BB58; }
    goto L_08A5BC38;
L_08A5BC38:;
    goto L_08A5BB64;
}

/* 08A5BC40 */
rv_t func_08A5BC40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5BC40:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    sp = sp - 16;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t4 = D_08C30DE4 - (3556);
    t5 = D_08C30DF4 - (3572);
    t7 = D_08C30E04 - (3588);
    t8 = D_08C30E14 - (3604);
    t2 = D_08C30E34 - (3636);
    t3 = D_08C30E3C - (3644);
    t6 = D_08C30E44 - (3652);
    s0 = D_08C30E4C - (3660);
    a1 = a1 & a0;
    a2 = t8 + 3604;
    a3 = t4 + 3556;
    t0 = t5 + 3572;
    t1 = t7 + 3588;
    s2 = t2 + 3636;
    t9 = t3 + 3644;
    s1 = t6 + 3652;
    cnd_ = a1 == 0;
    s3 = s0 + 3660;
    if (cnd_) { goto L_08A5BDAC; }
    goto L_08A5BCAC;
L_08A5BCAC:;
    v0 = D_08AF068C - (1676);
    f3 = BITSF(LD32(v0+1676));
    v0 = D_08AF0698 - (1688);
    f8 = BITSF(LD32(v0+1688));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(a2+8, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+24, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    ST32(a2+28, 0);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    ST32(a2+20, 0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF0694 - (1684);
    v1 = D_08AF0690 - (1680);
    f1 = f1 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+1684));
    v0 = D_08AF069C - (1692);
    ST32(t1+12, FBITS(f1));
    f6 = f6 * f3;
    f4 = f4 * f3;
    ST32(t2+3636, FBITS(f0));
    f5 = f5 * f3;
    f2 = f2 * f3;
    f0 = BITSF(LD32(v0+1692));
    v0 = D_08AF06A0 - (1696);
    f7 = BITSF(LD32(v1+1680));
    ST32(t3+3644, FBITS(f0));
    v1 = D_08AF06A4 - (1700);
    f0 = BITSF(LD32(v0+1696));
    v0 = D_08AF06A8 - (1704);
    f9 = BITSF(LD32(v1+1700));
    ST32(t6+3652, FBITS(f0));
    f0 = BITSF(LD32(v0+1704));
    ST32(t9+4, FBITS(f8));
    ST32(t4+3556, FBITS(f2));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t5+3572, FBITS(f6));
    ST32(s2+4, FBITS(f8));
    ST32(s1+4, FBITS(f9));
    ST32(t8+3604, FBITS(f7));
    ST32(t7+3588, FBITS(f1));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    ST32(s0+3660, FBITS(f0));
    ST32(s3+4, FBITS(f9));
    goto L_08A5BDAC;
L_08A5BDAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5BDC4 */
rv_t func_08A5BDC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5BDC4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5BC40(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5BDD8;
L_08A5BDD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5BDE4 */
void func_08A5BDE4(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5BDE4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5BDF8;
L_08A5BDF8:;
    v0 = D_08B15640 - (22080);
    v0 = v0 + 22080;
    ST32(s0, v0);
    ST32(s0+28, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    sp = sp + 16;
    return;
}

/* 08A5BE24 */
rv_t func_08A5BE24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5BE24:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AE5BEC - (23532);
    a0 = a0 + 23532;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5BE40;
L_08A5BE40:;
    ST32(s0+28, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5BE58 */
rv_t func_08A5BE58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A5BE58:;
    v0 = D_08C30F88 - (3976);
    a1 = LD32(v0+3976);
    v1 = D_08C30F7C - (3964);
    v0 = D_08C30F80 - (3968);
    a2 = LD32(v1+3964);
    v1 = LD32(v0+3968);
    ST32(a0+16, a1);
    ST32(a0+24, v1);
    ST32(a0+20, a2);
    return (rv_t){ v0, v1, f0 };
}

/* 08A5BE80 */
rv_t func_08A5BE80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 272);
L_08A5BE80:;
    sp = sp - 272;
    t1 = LD32(a0+16);
    cnd_ = t1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A5BF78; }
    goto L_08A5BE98;
L_08A5BE98:;
    v0 = 0x88880000u;
    v0 = v0 | 0x8889;
    { u64 p_ = (u64)t1 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a1 = D_08AE5C14 - (23572);
    v0 = hi;
    t0 = v0 >> 5;
    v1 = t0 << 4;
    v1 = v1 - t0;
    v1 = v1 << 2;
    t1 = t1 - v1;
    v0 = t1 < 0xau;
    cnd_ = v0 == 0;
    a1 = a1 + 23572;
    if (cnd_) { goto L_08A5BF60; }
    goto L_08A5BECC;
L_08A5BECC:;
    a1 = D_08AE5C20 - (23584);
    t2 = t1 + 0;
    a1 = a1 + 23584;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    t1 = 0 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5BEEC;
L_08A5BEEC:;
    t1 = LD32(s0+20);
    goto L_08A5BEF0;
L_08A5BEF0:;
    cnd_ = t1 != 0;
    if (cnd_) { goto L_08A5BF04; }
    goto L_08A5BEF8;
L_08A5BEF8:;
    v0 = LD32(s0+16);
    goto L_08A5BEFC;
L_08A5BEFC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5BF4C; }
    goto L_08A5BF04;
L_08A5BF04:;
    a0 = LD32(s0+28);
    func_088CD5B0(a0);
    goto L_08A5BF0C;
L_08A5BF0C:;
    v0 = LD32(s0+4);
    v1 = LD_U8(v0+28);
    cnd_ = v1 == 0;
    v0 = D_08AE5C44 - (23620);
    if (cnd_) { goto L_08A5BF58; }
    goto L_08A5BF1C;
L_08A5BF1C:;
    v0 = D_08AE5C40 - (23616);
    a0 = LD32(v0+23616);
    goto L_08A5BF24;
L_08A5BF24:;
    v0 = D_08C30EA4 - (3748);
    v1 = v0 + 3748;
    f12 = BITSF(LD32(v0+3748));
    v0 = D_08AF06AC - (1708);
    f13 = BITSF(LD32(v1+4));
    f14 = BITSF(LD32(v0+1708));
    a1 = 4132;
    a2 = sp + 0;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5BF48;
L_08A5BF48:;
    goto L_08A5BF4C;
L_08A5BF4C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_08A5BF58:;
    a0 = LD32(v0+23620);
    goto L_08A5BF24;
L_08A5BF60:;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5BF70;
L_08A5BF70:;
    t1 = LD32(s0+20);
    goto L_08A5BEF0;
L_08A5BF78:;
    t1 = LD32(a0+20);
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08A5BEFC; }
    goto L_08A5BF84;
L_08A5BF84:;
    t0 = LD32(a0+24);
    a1 = D_08AE5C30 - (23600);
    a1 = a1 + 23600;
    goto L_08A5BF60;
}

/* 08A5BF94 */
rv_t func_08A5BF94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A5BF94:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30E54 - (3668);
    t4 = D_08C30E64 - (3684);
    t5 = D_08C30E74 - (3700);
    t6 = D_08C30E84 - (3716);
    t2 = D_08C30EA4 - (3748);
    a1 = a1 & a0;
    a2 = t6 + 3716;
    a3 = t3 + 3668;
    t0 = t4 + 3684;
    t1 = t5 + 3700;
    cnd_ = a1 == 0;
    t7 = t2 + 3748;
    if (cnd_) { goto L_08A5C09C; }
    goto L_08A5BFD4;
L_08A5BFD4:;
    v0 = D_08AF06B0 - (1712);
    f3 = BITSF(LD32(v0+1712));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF06B4 - (1716);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+8, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF06B8 - (1720);
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0+1720));
    v0 = D_08AF06BC - (1724);
    f4 = f4 * f3;
    ST32(a2+24, 0);
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    f7 = BITSF(LD32(v1+1716));
    ST32(t1+12, FBITS(f1));
    ST32(t2+3748, FBITS(f0));
    f0 = BITSF(LD32(v0+1724));
    ST32(t3+3668, FBITS(f2));
    ST32(t4+3684, FBITS(f6));
    ST32(t7+4, FBITS(f0));
    ST32(t5+3700, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t6+3716, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A5C09C;
L_08A5C09C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5C0A4 */
rv_t func_08A5C0A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5C0A4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5BF94(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C0B8;
L_08A5C0B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5C0C4 */
void func_08A5C0C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5C0C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A4FAA4(a0, a1);
    goto L_08A5C0D8;
L_08A5C0D8:;
    v0 = D_08B15668 - (22120);
    v0 = v0 + 22120;
    v1 = s0 + 24;
    ST32(s0+16, 0);
    ST32(s0, v0);
    ST32(s0+72, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    sp = sp + 16;
    return;
}

/* 08A5C110 */
rv_t func_08A5C110(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5C110:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+328);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C13C;
L_08A5C13C:;
    v1 = 999;
    cnd_ = v0 == v1;
    v0 = 4;
    if (cnd_) { goto L_08A5C324; }
    goto L_08A5C148;
L_08A5C148:;
    a1 = LD32(s0+4);
    ST32(s0+16, v0);
    a0 = LD32(a1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C164;
L_08A5C164:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A5C1A4; }
    goto L_08A5C16C;
L_08A5C16C:;
    v0 = LD32(v0+364);
    v0 = (v0 >> 18) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A5C1A8; }
    goto L_08A5C17C;
L_08A5C17C:;
    v0 = D_08AF06C0 - (1728);
    f0 = BITSF(LD32(v1+176));
    f1 = BITSF(LD32(v0+1728));
    f0 = f0 * f1;
    ST32(s0+20, FBITS(f0));
    goto L_08A5C190;
L_08A5C190:;
    goto L_08A5C194;
L_08A5C194:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5C1A4:;
    v0 = LD32(s0+4);
    goto L_08A5C1A8;
L_08A5C1A8:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+328);
    t_ = v0;
    s1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C1BC;
L_08A5C1BC:;
    a2 = v0 + 0;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A5C258; }
    goto L_08A5C1D0;
L_08A5C1D0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A5C220; }
    goto L_08A5C1F4;
L_08A5C1F4:;
    a0 = LD32(a1);
    goto L_08A5C1F8;
L_08A5C1F8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A5C304; }
    goto L_08A5C210;
L_08A5C210:;
    a1 = LD32(a1+4);
    goto L_08A5C214;
L_08A5C214:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A5C1F8; }
    goto L_08A5C21C;
L_08A5C21C:;
    s1 = 0 + 0;
    goto L_08A5C220;
L_08A5C220:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A5C25C; }
    goto L_08A5C228;
L_08A5C228:;
    f1 = BITSF(LD32(s1+52));
    goto L_08A5C22C;
L_08A5C22C:;
    f2 = BITSF(0);
    ST32(s0+72, FBITS(f1));
    fcc = FCMP(f1, f2, 2);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    cnd_ = fcc;
    f0 = BITSF(LD32(v0+80));
    if (cnd_) { goto L_08A5C250; }
    goto L_08A5C24C;
L_08A5C24C:;
    f2 = f0 / f1;
    goto L_08A5C250;
L_08A5C250:;
    ST32(s0+20, FBITS(f2));
    goto L_08A5C190;
L_08A5C258:;
    v0 = LD32(s0+4);
    goto L_08A5C25C;
L_08A5C25C:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+328);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C270;
L_08A5C270:;
    a2 = v0 + 0;
    a0 = D_08C2B60C - (-18932);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 18932;
    if (cnd_) { goto L_08A5C190; }
    goto L_08A5C284;
L_08A5C284:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-18932);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A5C2D4; }
    goto L_08A5C2A8;
L_08A5C2A8:;
    a0 = LD32(a1);
    goto L_08A5C2AC;
L_08A5C2AC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A5C2E4; }
    goto L_08A5C2C4;
L_08A5C2C4:;
    a1 = LD32(a1+4);
    goto L_08A5C2C8;
L_08A5C2C8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A5C2AC; }
    goto L_08A5C2D0;
L_08A5C2D0:;
    v1 = 0 + 0;
    goto L_08A5C2D4;
L_08A5C2D4:;
    cnd_ = v1 != 0;
    if (cnd_) { f1 = BITSF(LD32(s1+52)); goto L_08A5C22C; }
    goto L_08A5C2DC;
L_08A5C2DC:;
    goto L_08A5C194;
L_08A5C2E4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A5C2C4; }
    goto L_08A5C2F0;
L_08A5C2F0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5C2C8; }
    goto L_08A5C2FC;
L_08A5C2FC:;
    goto L_08A5C2D4;
L_08A5C304:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A5C210; }
    goto L_08A5C310;
L_08A5C310:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A5C214; }
    goto L_08A5C31C;
L_08A5C31C:;
    goto L_08A5C220;
L_08A5C324:;
    v0 = LD32(s0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+320);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C33C;
L_08A5C33C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A5C36C; }
    goto L_08A5C344;
L_08A5C344:;
    a1 = LD32(s0+4);
    v0 = 2;
    ST32(s0+16, v0);
    a0 = LD32(a1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+360);
    goto L_08A5C35C;
L_08A5C35C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C364;
L_08A5C364:;
    ST32(s0+20, FBITS(f0));
    goto L_08A5C190;
L_08A5C36C:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+316);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C380;
L_08A5C380:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A5C3A4; }
    goto L_08A5C388;
L_08A5C388:;
    a1 = LD32(s0+4);
    v0 = 1;
    ST32(s0+16, v0);
    a0 = LD32(a1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+356);
    goto L_08A5C35C;
L_08A5C3A4:;
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+364);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C3B8;
L_08A5C3B8:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s0+4); goto L_08A5C3D8; }
    goto L_08A5C3CC;
L_08A5C3CC:;
    ST32(s0+20, FBITS(f1));
    ST32(s0+16, 0);
    goto L_08A5C190;
L_08A5C3D8:;
    v0 = 3;
    ST32(s0+16, v0);
    a0 = LD32(a1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+364);
    goto L_08A5C35C;
}

/* 08A5C3F0 */
rv_t func_08A5C3F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_08A5C3F0:;
    sp = sp - 192;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+392);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C44C;
L_08A5C44C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5C6B8; }
    goto L_08A5C454;
L_08A5C454:;
    a2 = LD32(s1+16);
    cnd_ = a2 == 0;
    if (cnd_) {  goto L_08A5C6BC; }
    goto L_08A5C460;
L_08A5C460:;
    f1 = BITSF(LD32(s1+20));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_08A5C6BC; }
    goto L_08A5C478;
L_08A5C478:;
    v0 = D_08AF06C4 - (1732);
    f2 = BITSF(LD32(v0+1732));
    f0 = f1 * f2;
    f0 = BITSF(F2I(f0, 1));
    f1 = (float)(s32)FBITS(f0);
    s3 = FBITS(f0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    if (cnd_) { s3 = 10; goto L_08A5C4A0; }
    goto L_08A5C4A0;
L_08A5C4A0:;
    s5 = 0xffff0000u;
    s4 = 0xff800000u;
    v0 = 2;
    s5 = s5 | 0xff;
    cnd_ = a2 == v0;
    s4 = s4 | 0xff;
    if (cnd_) { goto L_08A5C4E8; }
    goto L_08A5C4B8;
L_08A5C4B8:;
    v0 = a2 < 0x3u;
    cnd_ = v0 == 0;
    s5 = (u32)-256;
    if (cnd_) { goto L_08A5C71C; }
    goto L_08A5C4C4;
L_08A5C4C4:;
    s5 = 0xffc00000u;
    s4 = 0xff400000u;
    s5 = s5 | 0xc0c0;
    s4 = s4 | 0x4040;
    v0 = 1;
    goto L_08A5C4D8;
L_08A5C4D8:;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_08A5C4E8; }
    goto L_08A5C4E0;
L_08A5C4E0:;
    s5 = 0 + 0;
    s4 = 0 + 0;
    goto L_08A5C4E8;
L_08A5C4E8:;
    f20 = BITSF(0);
    t0 = LD32(s1+4);
    ST32(sp, FBITS(f20));
    ST32(sp+4, FBITS(f20));
    a3 = LD32(t0+24);
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = a3 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    s0 = sp + 16;
    if (cnd_) { goto L_08A5C700; }
    goto L_08A5C518;
L_08A5C518:;
    ST32(sp+16, FBITS(f20));
    a0 = a3 + 0;
    ST32(sp+20, FBITS(f20));
    ST32(sp+24, FBITS(f20));
    v0 = LD32(a3);
    v1 = LD32(v0+380);
    t_ = v1;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C538;
L_08A5C538:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5C544;
L_08A5C544:;
    f0 = BITSF(LD32(sp+24));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A5C6B8; }
    goto L_08A5C558;
L_08A5C558:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    t0 = LD32(s1+4);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    a2 = LD32(s1+16);
    goto L_08A5C570;
L_08A5C570:;
    a0 = LD32(t0+24);
    s2 = 0xff000000u;
    v1 = a2 ^ 0x4;
    s2 = s2 | 0xff00;
    v0 = D_08AF06C8 - (1736);
    f24 = BITSF(LD32(v0+1736));
    if (v1 != 0) s2 = 0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5C590;
L_08A5C590:;
    cnd_ = v0 == 0;
    v0 = D_08AE5C48 - (23624);
    if (cnd_) { goto L_08A5C6F8; }
    goto L_08A5C598;
L_08A5C598:;
    v0 = D_08AE5C4C - (23628);
    f21 = BITSF(LD32(v0+23628));
    goto L_08A5C5A0;
L_08A5C5A0:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    s0 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    cnd_ = (s32)s3 < 0;
    ST32(sp+36, FBITS(f1));
    if (cnd_) { goto L_08A5C6B4; }
    goto L_08A5C5B8;
L_08A5C5B8:;
    v0 = D_08AF06CC - (1740);
    v1 = D_08AF06D4 - (1748);
    {v[0]=0.63661977236f;}
    f23 = BITSF(LD32(v0+1740));
    f22 = BITSF(LD32(v1+1748));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    fp = D_08AF06D0 - (1744);
    s7 = sp + 48;
    s6 = 4;
    goto L_08A5C5DC;
L_08A5C5DC:;
    f0 = BITSF(s0);
    v1 = LD32(sp);
    v0 = LD32(s1+16);
    f20 = (float)(s32)FBITS(f0);
    ST32(sp+32, v1);
    s0 = s0 + 1;
    a0 = s1 + 0;
    v1 = LD32(sp+4);
    a1 = s5 + 0;
    a2 = s4 + 0;
    f12 = f20 * f23;
    cnd_ = v0 == s6;
    ST32(sp+36, v1);
    if (cnd_) { goto L_08A5C61C; }
    goto L_08A5C610;
L_08A5C610:;
    v0 = func_08A5C728(a1, a2, f12);
    goto L_08A5C618;
L_08A5C618:;
    s2 = v0 + 0;
    goto L_08A5C61C;
L_08A5C61C:;
    f0 = f20 * f24;
    f12 = BITSF(LD32(fp+1744));
    {u32 a_=sp+(96);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f12 = f0 + f12;
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a0 = 20;
    a1 = s7 + 0;
    v0 = FBITS(f12);
    {v[0]=BITSF(v0);}
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    {float s0=v[4];float t0=v[8];float d0=s0*t0;v[4]=d0;}
    f12 = f12 - f22;
    a2 = 0 + 0;
    a3 = s2 + 0;
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f2 = f21 * f0;
    f0 = BITSF(LD32(sp+36));
    f3 = f21 * f1;
    f1 = BITSF(LD32(sp+32));
    f0 = f0 - f3;
    f1 = f1 - f2;
    ST32(sp+52, FBITS(f0));
    ST32(sp+48, FBITS(f1));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    { u64 r_ = func_08A50324(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5C6A8;
L_08A5C6A8:;
    v0 = (s32)s3 < (s32)s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5C5DC; }
    goto L_08A5C6B4;
L_08A5C6B4:;
    goto L_08A5C6B8;
L_08A5C6B8:;
    goto L_08A5C6BC;
L_08A5C6BC:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_08A5C6F8:;
    f21 = BITSF(LD32(v0+23624));
    goto L_08A5C5A0;
L_08A5C700:;
    v0 = D_08C30EFC - (3836);
    v1 = v0 + 3836;
    a0 = LD32(v0+3836);
    a1 = LD32(v1+4);
    ST32(sp, a0);
    ST32(sp+4, a1);
    goto L_08A5C570;
L_08A5C71C:;
    s4 = 0xffff0000u;
    v0 = 3;
    goto L_08A5C4D8;
}

/* 08A5C728 */
u32 func_08A5C728(u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08A5C728:;
    sp = sp - 96;
    v0 = a1 >> 24;
    v1 = a2 >> 24;
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    v0 = D_08AF06D8 - (1752);
    f14 = (float)(s32)FBITS(f0);
    f15 = (float)(s32)FBITS(f1);
    f0 = BITSF(LD32(v0+1752));
    v0 = D_08AF06DC - (1756);
    f1 = BITSF(LD32(v0+1756));
    a0 = a1 & 0xff;
    f15 = f15 * f0;
    f1 = f1 - f12;
    f14 = f14 * f0;
    f2 = BITSF(a0);
    v0 = (a1 >> 8) & 0xff;
    a0 = (a2 >> 8) & 0xff;
    a1 = (a1 >> 16) & 0xff;
    v1 = a2 & 0xff;
    a2 = (a2 >> 16) & 0xff;
    f4 = BITSF(a1);
    f11 = BITSF(a0);
    f3 = BITSF(v0);
    f10 = BITSF(v1);
    f13 = BITSF(a2);
    f19 = f14 * f1;
    f20 = f15 * f12;
    f5 = (float)(s32)FBITS(f2);
    f6 = (float)(s32)FBITS(f3);
    f7 = (float)(s32)FBITS(f4);
    f8 = (float)(s32)FBITS(f10);
    f9 = (float)(s32)FBITS(f11);
    f10 = (float)(s32)FBITS(f13);
    f5 = f5 * f0;
    f6 = f6 * f0;
    f7 = f7 * f0;
    f8 = f8 * f0;
    f9 = f9 * f0;
    f10 = f10 * f0;
    f18 = f19 + f20;
    a1 = D_08AF06E0 - (1760);
    f0 = BITSF(LD32(a1+1760));
    f11 = f7 * f1;
    f13 = f6 * f1;
    f16 = f10 * f12;
    f17 = f9 * f12;
    f21 = f18 * f0;
    f1 = f5 * f1;
    f12 = f8 * f12;
    f0 = BITSF(0);
    f2 = f11 + f16;
    f3 = f13 + f17;
    f4 = f1 + f12;
    fcc = FCMP(f0, f21, 12);
    ST32(sp+32, FBITS(f2));
    a0 = sp + 32;
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+4, FBITS(f6));
    ST32(sp, FBITS(f7));
    ST32(sp+12, FBITS(f14));
    ST32(sp+24, FBITS(f8));
    ST32(sp+20, FBITS(f9));
    ST32(sp+16, FBITS(f10));
    ST32(sp+28, FBITS(f15));
    ST32(sp+48, FBITS(f11));
    ST32(sp+52, FBITS(f13));
    ST32(sp+56, FBITS(f1));
    ST32(sp+60, FBITS(f19));
    ST32(sp+64, FBITS(f16));
    ST32(sp+68, FBITS(f17));
    ST32(sp+72, FBITS(f12));
    ST32(sp+76, FBITS(f20));
    cnd_ = !fcc;
    ST32(sp+44, FBITS(f18));
    if (cnd_) { goto L_08A5C948; }
    goto L_08A5C864;
L_08A5C864:;
    v1 = D_08AF06E4 - (1764);
    f0 = BITSF(LD32(v1+1764));
    f0 = f21 + f0;
    goto L_08A5C870;
L_08A5C870:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a1+1760));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_08A5C93C; }
    goto L_08A5C898;
L_08A5C898:;
    f0 = BITSF(LD32(v1+1764));
    f0 = f2 + f0;
    goto L_08A5C8A0;
L_08A5C8A0:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+1760));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A5C930; }
    goto L_08A5C8CC;
L_08A5C8CC:;
    f0 = BITSF(LD32(v1+1764));
    f0 = f1 + f0;
    goto L_08A5C8D4;
L_08A5C8D4:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a1+1760));
    a0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08A5C924; }
    goto L_08A5C900;
L_08A5C900:;
    f0 = BITSF(LD32(v1+1764));
    f0 = f1 + f0;
    goto L_08A5C908;
L_08A5C908:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    v0 = v0 + a2;
    sp = sp + 96;
    return v0;
L_08A5C924:;
    f0 = BITSF(LD32(v1+1764));
    f0 = f1 - f0;
    goto L_08A5C908;
L_08A5C930:;
    f0 = BITSF(LD32(v1+1764));
    f0 = f1 - f0;
    goto L_08A5C8D4;
L_08A5C93C:;
    f0 = BITSF(LD32(v1+1764));
    f0 = f2 - f0;
    goto L_08A5C8A0;
L_08A5C948:;
    v1 = D_08AF06E4 - (1764);
    f0 = BITSF(LD32(v1+1764));
    f0 = f21 - f0;
    goto L_08A5C870;
}

/* 08A5C958 */
rv_t func_08A5C958(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_08A5C958:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C30EAC - (3756);
    t4 = D_08C30EBC - (3772);
    t5 = D_08C30ECC - (3788);
    t6 = D_08C30EDC - (3804);
    t2 = D_08C30EFC - (3836);
    a1 = a1 & a0;
    a2 = t6 + 3804;
    a3 = t3 + 3756;
    t0 = t4 + 3772;
    t1 = t5 + 3788;
    cnd_ = a1 == 0;
    t7 = t2 + 3836;
    if (cnd_) { goto L_08A5CA60; }
    goto L_08A5C998;
L_08A5C998:;
    v0 = D_08AF06E8 - (1768);
    f3 = BITSF(LD32(v0+1768));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AF06EC - (1772);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a2+8, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF06F0 - (1776);
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0+1776));
    v0 = D_08AF06F4 - (1780);
    f4 = f4 * f3;
    ST32(a2+24, 0);
    ST32(a2+28, 0);
    ST32(a2+20, 0);
    f7 = BITSF(LD32(v1+1772));
    ST32(t1+12, FBITS(f1));
    ST32(t2+3836, FBITS(f0));
    f0 = BITSF(LD32(v0+1780));
    ST32(t3+3756, FBITS(f2));
    ST32(t4+3772, FBITS(f6));
    ST32(t7+4, FBITS(f0));
    ST32(t5+3788, FBITS(f1));
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f1));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f1));
    ST32(t6+3804, FBITS(f7));
    ST32(a2+16, FBITS(f7));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f1));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f1));
    ST32(a2+4, FBITS(f7));
    ST32(a2+12, FBITS(f7));
    goto L_08A5CA60;
L_08A5CA60:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5CA68 */
rv_t func_08A5CA68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5CA68:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5C958(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CA7C;
L_08A5CA7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5CA88 */
rv_t func_08A5CA88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A5CA88:;
    sp = sp - 80;
    v0 = D_08C2937B - (-27781);
    s1 = a0 + 0;
    a0 = D_08AE5C50 - (23632);
    v1 = LD_U8(v0-27781);
    cnd_ = v1 != 0;
    a0 = a0 + 23632;
    if (cnd_) { goto L_08A5CAD4; }
    goto L_08A5CAB8;
L_08A5CAB8:;
    goto L_08A5CABC;
L_08A5CABC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A5CAD4:;
    s0 = D_08C30F5C - (3932);
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CADC;
L_08A5CADC:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08A5CAE4;
L_08A5CAE4:;
    v0 = D_08AF06F8 - (1784);
    f21 = BITSF(LD32(v0+1784));
    s0 = s0 + 3932;
    f12 = f21;
    f13 = f21;
    a1 = s0 + 0;
    a2 = 388;
    a0 = s1 + 0;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CB08;
L_08A5CB08:;
    a0 = sp + 0;
    f20 = f0;
    func_08A5D69C(a0);
    goto L_08A5CB14;
L_08A5CB14:;
    v0 = D_08AF06FC - (1788);
    f0 = BITSF(LD32(v0+1788));
    v1 = D_08C30F54 - (3924);
    a0 = v1 + 3924;
    v0 = (u32)-1;
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(v1+3924));
    f20 = f20 + f0;
    ST32(sp, v0);
    v0 = D_08AF0700 - (1792);
    a1 = sp + 32;
    f0 = BITSF(LD32(v0+1792));
    a0 = sp + 0;
    a2 = 0 + 0;
    a3 = 0xc8000000u;
    ST32(sp+24, FBITS(f20));
    ST32(sp+20, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+4, 0);
    ST32(sp+12, FBITS(f21));
    ST32(sp+8, 0);
    ST32(sp+16, FBITS(f21));
    v0 = func_08A4FF3C(a0, a1, a2, a3);
    goto L_08A5CB74;
L_08A5CB74:;
    f12 = BITSF(0);
    v0 = D_08AF0704 - (1796);
    f14 = BITSF(LD32(v0+1796));
    a0 = s0 + 0;
    f15 = f21;
    a3 = s1 + 0;
    f13 = f12;
    a1 = (u32)-1;
    a2 = 388;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CB9C;
L_08A5CB9C:;
    goto L_08A5CABC;
}

/* 08A5CBA4 */
u64 func_08A5CBA4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
L_08A5CBA4:;
    v1 = RS_FADDR(func_08A5CA88, 0x08A5CA88u) - (-13688);
    v0 = D_08B15690 - (22160);
    a3 = a0 + 4;
    v1 = v1 - 13688;
    a2 = D_08B307C8 - (1992);
    v0 = v0 + 22160;
    ST32(a2+1992, v1);
    ST32(a0, v0);
    ST32(a3+16, 0);
    ST32(a0+24, a1);
    ST8(a0+28, 0);
    ST32(a0+4, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    ST32(a3+12, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A5CBE4 */
rv_t func_08A5CBE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5CBE4:;
    sp = sp - 32;
    v0 = D_08B15690 - (22160);
    v0 = v0 + 22160;
    s2 = a0 + 0;
    s1 = a0 + 4;
    v1 = LD32(a0+4);
    ST32(a0, v0);
    ST32(sp, s1);
    cnd_ = v1 != 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_08A5CC3C; }
    goto L_08A5CC1C;
L_08A5CC1C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08AD2048(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CC24;
L_08A5CC24:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5CC3C:;
    a0 = sp + 0;
    goto L_08A5CC40;
L_08A5CC40:;
    s0 = LD32(v1);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CC48;
L_08A5CC48:;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A5CC6C; }
    goto L_08A5CC54;
L_08A5CC54:;
    v0 = LD32(a0);
    goto L_08A5CC58;
L_08A5CC58:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08A5CC98; }
    goto L_08A5CC60;
L_08A5CC60:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A5CC58; }
    goto L_08A5CC6C;
L_08A5CC6C:;
    cnd_ = s0 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_08A5CC88; }
    goto L_08A5CC74;
L_08A5CC74:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CC84;
L_08A5CC84:;
    v1 = LD32(sp+4);
    goto L_08A5CC88;
L_08A5CC88:;
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A5CC40; }
    goto L_08A5CC90;
L_08A5CC90:;
    goto L_08A5CC1C;
L_08A5CC98:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08A5CCE8; }
    goto L_08A5CCA0;
L_08A5CCA0:;
    ST32(v1+4, v0);
    goto L_08A5CCA4;
L_08A5CCA4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1, v1); goto L_08A5CCB4; }
    goto L_08A5CCB0;
L_08A5CCB0:;
    ST32(v0+8, v1);
    goto L_08A5CCB4;
L_08A5CCB4:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A5CCD8; }
    goto L_08A5CCC0;
L_08A5CCC0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CCC8;
L_08A5CCC8:;
    v0 = LD32(s1+16);
    goto L_08A5CCCC;
L_08A5CCCC:;
    v0 = v0 - 1;
    ST32(s1+16, v0);
    goto L_08A5CC6C;
L_08A5CCD8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CCE0;
L_08A5CCE0:;
    v0 = LD32(s1+16);
    goto L_08A5CCCC;
L_08A5CCE8:;
    ST32(s1+4, v0);
    v1 = LD32(a0+8);
    goto L_08A5CCA4;
}

/* 08A5CCF4 */
rv_t func_08A5CCF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5CCF4:;
    v0 = D_08B15690 - (22160);
    v0 = v0 + 22160;
    ST32(a0, v0);
    sp = sp - 32;
    s1 = a0 + 4;
    a0 = sp + 0;
    ST32(sp, s1);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CD24;
L_08A5CD24:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A5CD4C; }
    goto L_08A5CD30;
L_08A5CD30:;
    a0 = s1 + 0;
    { rv_t r_ = func_08AD2048(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CD38;
L_08A5CD38:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5CD4C:;
    a0 = sp + 0;
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CD54;
L_08A5CD54:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08AD20DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5CD60;
L_08A5CD60:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A5CD78; }
    goto L_08A5CD68;
L_08A5CD68:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CD78;
L_08A5CD78:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A5CD4C; }
    goto L_08A5CD84;
L_08A5CD84:;
    goto L_08A5CD30;
}

/* 08A5CD8C */
rv_t func_08A5CD8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5CD8C:;
    v0 = D_08B15690 - (22160);
    v0 = v0 + 22160;
    ST32(a0, v0);
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = a0 + 4;
    a0 = sp + 0;
    ST32(sp, s1);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CDC4;
L_08A5CDC4:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A5CDF8; }
    goto L_08A5CDD0;
L_08A5CDD0:;
    a0 = s1 + 0;
    { rv_t r_ = func_08AD2048(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CDD8;
L_08A5CDD8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CDE0;
L_08A5CDE0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5CDF8:;
    a0 = sp + 0;
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CE00;
L_08A5CE00:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08AD20DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5CE0C;
L_08A5CE0C:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A5CE24; }
    goto L_08A5CE14;
L_08A5CE14:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CE24;
L_08A5CE24:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A5CDF8; }
    goto L_08A5CE30;
L_08A5CE30:;
    goto L_08A5CDD0;
}

/* 08A5CE38 */
rv_t func_08A5CE38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5CE38:;
    sp = sp - 48;
    s2 = a0 + 0;
    a0 = D_08AE5C50 - (23632);
    a0 = a0 + 23632;
    s1 = 0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CE60;
L_08A5CE60:;
    v1 = D_08B306F0 - (1776);
    f2 = BITSF(LD32(v1+1776));
    a0 = D_08B306EC - (1772);
    f0 = BITSF(LD32(a0+1772));
    a1 = D_08C30FB4 - (4020);
    f1 = (float)(s32)FBITS(f2);
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(a1+4020));
    v1 = a1 + 4020;
    f2 = BITSF(LD32(v1+4));
    f1 = f1 / f0;
    v1 = D_08C30FA4 - (4004);
    ST32(v1+4004, v0);
    v0 = D_08B1C8A4 - (-14172);
    s0 = v0 - 14172;
    a0 = D_08C30FBC - (4028);
    a1 = a0 + 4028;
    f3 = f3 / f2;
    ST32(sp, FBITS(f1));
    v0 = LD32(sp);
    ST32(a0+4028, v0);
    ST32(sp+4, FBITS(f3));
    v0 = LD32(sp+4);
    ST32(a1+4, v0);
    goto L_08A5CEC0;
L_08A5CEC0:;
    a0 = LD32(s0);
    s1 = s1 + 1;
    v0 = func_0883AE14(a0);
    goto L_08A5CECC;
L_08A5CECC:;
    v1 = s1 < 0x2eu;
    ST32(s0+4, v0);
    cnd_ = v1 != 0;
    s0 = s0 + 8;
    if (cnd_) { goto L_08A5CEC0; }
    goto L_08A5CEDC;
L_08A5CEDC:;
    s0 = sp + 16;
    v0 = s2 + 4;
    a0 = s0 + 0;
    ST32(sp+16, v0);
    ST32(sp+20, 0);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CEF4;
L_08A5CEF4:;
    a0 = LD32(sp+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A5CF18; }
    goto L_08A5CF00;
L_08A5CF00:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A5CF18:;
    a0 = LD32(a0);
    goto L_08A5CF1C;
L_08A5CF1C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CF2C;
L_08A5CF2C:;
    a0 = s0 + 0;
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CF34;
L_08A5CF34:;
    a0 = LD32(sp+20);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A5CF1C; }
    goto L_08A5CF40;
L_08A5CF40:;
    goto L_08A5CF00;
}

/* 08A5CF48 */
rv_t func_08A5CF48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5CF48:;
    sp = sp - 32;
    v0 = a0 + 4;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CF64;
L_08A5CF64:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A5CF7C; }
    goto L_08A5CF70;
L_08A5CF70:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5CF7C:;
    a0 = LD32(a0);
    goto L_08A5CF80;
L_08A5CF80:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5CF90;
L_08A5CF90:;
    a0 = sp + 0;
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5CF98;
L_08A5CF98:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A5CF80; }
    goto L_08A5CFA4;
L_08A5CFA4:;
    goto L_08A5CF70;
}

/* 08A5CFAC */
rv_t func_08A5CFAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A5CFAC:;
    sp = sp - 64;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    a1 = D_08C30FB4 - (4020);
    s0 = sp + 16;
    s4 = a0 + 0;
    f2 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v0 = a1 + 4020;
    f1 = (float)(s32)FBITS(f2);
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(a1+4020));
    f2 = BITSF(LD32(v0+4));
    v0 = a0 + 4;
    f1 = f1 / f0;
    ST32(sp+16, v0);
    v1 = D_08C30FBC - (4028);
    a1 = v1 + 4028;
    a0 = s0 + 0;
    ST32(sp+20, 0);
    f3 = f3 / f2;
    ST32(sp, FBITS(f1));
    v0 = LD32(sp);
    ST32(v1+4028, v0);
    ST32(sp+4, FBITS(f3));
    v0 = LD32(sp+4);
    ST32(a1+4, v0);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D034;
L_08A5D034:;
    a0 = LD32(sp+20);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A5D0DC; }
    goto L_08A5D040;
L_08A5D040:;
    s3 = D_08C30FAC - (4012);
    v0 = func_08978770();
    goto L_08A5D048;
L_08A5D048:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D050;
L_08A5D050:;
    v1 = LD32(s3+4012);
    s0 = v0 + 0;
    v0 = D_08C29328 - (-27864);
    s1 = LD32(v0-27864);
    cnd_ = v1 == s0;
    s2 = D_08C30FB0 - (4016);
    if (cnd_) { goto L_08A5D0C8; }
    goto L_08A5D068;
L_08A5D068:;
    func_08A4ECD4();
    goto L_08A5D070;
L_08A5D070:;
    f0 = func_08A5D3BC();
    goto L_08A5D078;
L_08A5D078:;
    v1 = 0x532d0000u;
    v0 = 0x300000u;
    v1 = v1 | 0x3218;
    v0 = v0 | 0xf5bb;
    v0 = s0 ^ v0;
    v1 = s0 ^ v1;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    ST32(s2+4016, s1);
    ST8(s4+28, v1);
    ST32(s3+4012, s0);
    goto L_08A5D0B0;
L_08A5D0B0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A5D0C8:;
    v0 = LD32(s2+4016);
    cnd_ = v0 != s1;
    if (cnd_) { goto L_08A5D068; }
    goto L_08A5D0D4;
L_08A5D0D4:;
    goto L_08A5D0B0;
L_08A5D0DC:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D0EC;
L_08A5D0EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D0F4;
L_08A5D0F4:;
    a0 = LD32(sp+20);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A5D0DC; }
    goto L_08A5D100;
L_08A5D100:;
    goto L_08A5D040;
}

/* 08A5D108 */
rv_t func_08A5D108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5D108:;
    sp = sp - 48;
    s0 = a0 + 0;
    v0 = func_08A5D404();
    goto L_08A5D120;
L_08A5D120:;
    cnd_ = v0 == 0;
    v0 = s0 + 4;
    if (cnd_) { goto L_08A5D190; }
    goto L_08A5D128;
L_08A5D128:;
    v0 = LD32(s0+24);
    f1 = BITSF(0);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v0 = s0 + 4;
    if (cnd_) { goto L_08A5D190; }
    goto L_08A5D150;
L_08A5D150:;
    v1 = D_08C30FA0 - (4000);
    f0 = BITSF(LD32(v1+4000));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = D_08B285A4 - (-31324);
    if (cnd_) { goto L_08A5D174; }
    goto L_08A5D168;
L_08A5D168:;
    f0 = BITSF(LD32(v0-31324));
    ST32(v0-31324, FBITS(f1));
    ST32(v1+4000, FBITS(f0));
    goto L_08A5D174;
L_08A5D174:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A5D220(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D17C;
L_08A5D17C:;
    goto L_08A5D180;
L_08A5D180:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A5D190:;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D1A0;
L_08A5D1A0:;
    a1 = LD32(sp+4);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A5D180; }
    goto L_08A5D1AC;
L_08A5D1AC:;
    f20 = BITSF(0);
    goto L_08A5D1B0;
L_08A5D1B0:;
    v0 = LD32(s0+24);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    v0 = LD32(a1);
    if (cnd_) { goto L_08A5D1F4; }
    goto L_08A5D1D4;
L_08A5D1D4:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D1E8;
L_08A5D1E8:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+4);
    if (cnd_) { goto L_08A5D204; }
    goto L_08A5D1F0;
L_08A5D1F0:;
    v0 = LD32(a1);
    goto L_08A5D1F4;
L_08A5D1F4:;
    v1 = LD32(v0);
    a1 = LD32(v1+20);
    t_ = a1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D204;
L_08A5D204:;
    a0 = sp + 0;
    { u64 r_ = func_08AD20B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D20C;
L_08A5D20C:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A5D1B0; }
    goto L_08A5D218;
L_08A5D218:;
    goto L_08A5D180;
}

/* 08A5D220 */
rv_t func_08A5D220(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5D220:;
    sp = sp - 32;
    v0 = D_08C30F90 - (3984);
    f12 = BITSF(0);
    s1 = D_08C30FA4 - (4004);
    a1 = (u32)-1;
    s0 = D_08C30F6C - (3948);
    s0 = s0 + 3948;
    a2 = 1;
    t0 = s0 + 0;
    a0 = LD32(v0+3984);
    a3 = LD32(s1+4004);
    t1 = 388;
    { rv_t r_ = func_08A50DBC(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D264;
L_08A5D264:;
    f20 = f0;
    { rv_t r_ = func_08A5D450(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D26C;
L_08A5D26C:;
    f12 = f20;
    t0 = s0 + 0;
    a0 = 421;
    a1 = (u32)-1;
    a2 = 1;
    cnd_ = v0 != 0;
    t1 = 388;
    if (cnd_) { goto L_08A5D2A0; }
    goto L_08A5D288;
L_08A5D288:;
    goto L_08A5D28C;
L_08A5D28C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A5D2A0:;
    a3 = LD32(s1+4004);
    { rv_t r_ = func_08A50DBC(a0, a1, a2, a3, t0, t1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D2A8;
L_08A5D2A8:;
    goto L_08A5D28C;
}

/* 08A5D2B0 */
void func_08A5D2B0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A5D2B0:;
    v1 = D_08C30F7C - (3964);
    v0 = LD32(v1+3964);
    cnd_ = a0 == v0;
    v0 = D_08C30F80 - (3968);
    if (cnd_) { goto L_08A5D2C8; }
    goto L_08A5D2C0;
L_08A5D2C0:;
    ST32(v1+3964, a0);
    ST32(v0+3968, 0);
    goto L_08A5D2C8;
L_08A5D2C8:;
    return;
}

/* 08A5D2D0 */
u64 func_08A5D2D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
L_08A5D2D0:;
    a3 = D_08C30F80 - (3968);
    v0 = LD32(a3+3968);
    a2 = D_08C30F7C - (3964);
    a1 = LD32(a2+3964);
    v0 = v0 + a0;
    v1 = v0 < a1;
    if (v1 == 0) a1 = 0;
    a0 = v0 < a1;
    if (a0 == 0) v0 = 0;
    ST32(a3+3968, v0);
    ST32(a2+3964, a1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A5D300 */
float func_08A5D300(float f12)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A5D300:;
    f0 = BITSF(F2I(f12, 1));
    v0 = D_08C30F88 - (3976);
    ST32(v0+3976, FBITS(f0));
    return f0;
}

/* 08A5D310 */
rv_t func_08A5D310(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D310:;
    sp = sp - 16;
    s1 = D_08C30F8C - (3980);
    v0 = LD32(s1+3980);
    s0 = a0 + 0;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08A5D34C; }
    goto L_08A5D330;
L_08A5D330:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A5D370; }
    goto L_08A5D33C;
L_08A5D33C:;
    a0 = s0 + 0;
    goto L_08A5D340;
L_08A5D340:;
    a1 = 0 + 0;
    cnd_ = s0 != 0;
    ST32(s1+3980, s0);
    if (cnd_) { goto L_08A5D360; }
    goto L_08A5D34C;
L_08A5D34C:;
    goto L_08A5D350;
L_08A5D350:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5D360:;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D368;
L_08A5D368:;
    goto L_08A5D350;
L_08A5D370:;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D378;
L_08A5D378:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A5D33C; }
    goto L_08A5D380;
L_08A5D380:;
    a0 = LD32(s1+3980);
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D388;
L_08A5D388:;
    a0 = s0 + 0;
    goto L_08A5D340;
}

/* 08A5D390 */
rv_t func_08A5D390(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A5D390:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    v1 = D_08C30F94 - (3988);
    v0 = D_08C30F90 - (3984);
    ST32(v0+3984, a0);
    v0 = D_08C30F9C - (3996);
    ST32(v1+3988, FBITS(f12));
    v1 = D_08C30F98 - (3992);
    ST8(v0+3996, a1);
    ST32(v1+3992, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 08A5D3BC */
float func_08A5D3BC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A5D3BC:;
    v0 = D_08C30F94 - (3988);
    ST32(v0+3988, 0);
    a1 = D_08B285A4 - (-31324);
    v1 = D_08C30F9C - (3996);
    f1 = BITSF(LD32(v0+3988));
    f0 = BITSF(LD32(a1-31324));
    v0 = D_08C30F90 - (3984);
    ST32(v0+3984, 0);
    fcc = FCMP(f0, f1, 2);
    v0 = D_08C30F98 - (3992);
    a0 = D_08C30FA0 - (4000);
    ST32(v0+3992, FBITS(f1));
    cnd_ = !fcc;
    ST8(v1+3996, 0);
    if (cnd_) { goto L_08A5D3FC; }
    goto L_08A5D3F4;
L_08A5D3F4:;
    f0 = BITSF(LD32(a0+4000));
    ST32(a1-31324, FBITS(f0));
    goto L_08A5D3FC;
L_08A5D3FC:;
    ST32(a0+4000, 0);
    return f0;
}

/* 08A5D404 */
u32 func_08A5D404(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D404:;
    sp = sp - 16;
    v0 = func_08979DF4();
    goto L_08A5D414;
L_08A5D414:;
    v0 = v0 ^ 0x2;
    v1 = D_08C30F90 - (3984);
    a0 = LD32(v1+3984);
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A5D438; }
    goto L_08A5D42C;
L_08A5D42C:;
    v0 = D_08C30F9C - (3996);
    v1 = LD_U8(v0+3996);
    v1 = 0 < v1;
    goto L_08A5D438;
L_08A5D438:;
    v0 = v1 < 0x1u;
    if (a0 != 0) a1 = v0;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A5D450 */
rv_t func_08A5D450(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08A5D450:;
    v0 = D_08B285B4 - (-31308);
    v1 = D_08C30F98 - (3992);
    f0 = BITSF(LD32(v0-31308));
    f1 = BITSF(LD32(v1+3992));
    v0 = D_08C30F94 - (3988);
    f2 = BITSF(LD32(v0+3988));
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A5D480; }
    goto L_08A5D47C;
L_08A5D47C:;
    v0 = 0 + 0;
    goto L_08A5D480;
L_08A5D480:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5D488 */
rv_t func_08A5D488(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D488:;
    v0 = 80;
    f0 = BITSF(v0);
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    sp = sp - 16;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t8 = D_08C30F04 - (3844);
    t9 = D_08C30F14 - (3860);
    s1 = D_08C30F34 - (3892);
    s0 = D_08C30F24 - (3876);
    t5 = D_08C30F54 - (3924);
    t4 = D_08C30F5C - (3932);
    t6 = D_08C30F6C - (3948);
    a1 = a1 & a0;
    f0 = (float)(s32)FBITS(f0);
    a2 = s1 + 3892;
    t0 = t8 + 3844;
    t1 = t9 + 3860;
    t2 = s0 + 3876;
    a3 = t4 + 3932;
    t3 = t6 + 3948;
    cnd_ = a1 == 0;
    t7 = t5 + 3924;
    if (cnd_) { goto L_08A5D5F4; }
    goto L_08A5D4F0;
L_08A5D4F0:;
    v0 = D_08AF0708 - (1800);
    f2 = BITSF(LD32(v0+1800));
    v0 = 179;
    ST32(t4+3932, FBITS(f0));
    f7 = f0 * f2;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(a2+28, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    ST32(t5+3924, 0);
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f2;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AF0718 - (1816);
    ST32(a2+8, 0);
    f1 = f1 * f2;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0+1816));
    v0 = D_08AF071C - (1820);
    ST32(a2+24, 0);
    f4 = f4 * f2;
    v1 = D_08AF070C - (1804);
    ST32(t7+4, 0);
    f3 = f3 * f2;
    ST32(a2+20, 0);
    ST32(t2+12, FBITS(f1));
    ST32(t8+3844, FBITS(f7));
    ST32(t9+3860, FBITS(f5));
    ST32(a3+12, FBITS(f0));
    f0 = BITSF(LD32(v0+1820));
    v0 = D_08AF0710 - (1808);
    f6 = BITSF(LD32(v1+1804));
    ST32(t6+3948, FBITS(f0));
    f0 = BITSF(LD32(v0+1808));
    v0 = D_08AF0714 - (1812);
    ST32(t0+4, FBITS(f3));
    ST32(t0+12, FBITS(f1));
    ST32(t1+4, FBITS(f4));
    ST32(t1+12, FBITS(f1));
    ST32(s0+3876, FBITS(f1));
    ST32(s1+3892, FBITS(f6));
    ST32(a2+16, FBITS(f6));
    ST32(a3+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1812));
    v0 = D_08AF0720 - (1824);
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(v0+1824));
    v0 = D_08AF0724 - (1828);
    ST32(t0+8, FBITS(f5));
    ST32(t2+4, FBITS(f1));
    ST32(t1+8, FBITS(f4));
    ST32(t2+8, FBITS(f1));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f6));
    ST32(t3+4, FBITS(f0));
    f0 = BITSF(LD32(v0+1828));
    v0 = D_08AF0728 - (1832);
    ST32(t3+8, FBITS(f0));
    f0 = BITSF(LD32(v0+1832));
    ST32(t3+12, FBITS(f0));
    goto L_08A5D5F4;
L_08A5D5F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5D604 */
rv_t func_08A5D604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D604:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5D488(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D618;
L_08A5D618:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5D624 */
rv_t func_08A5D624(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_08A5D624:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    a2 = D_08C30FB4 - (4020);
    a3 = D_08C30FBC - (4028);
    a1 = a1 & a0;
    t0 = a2 + 4020;
    cnd_ = a1 == 0;
    t1 = a3 + 4028;
    if (cnd_) { goto L_08A5D674; }
    goto L_08A5D64C;
L_08A5D64C:;
    v1 = D_08AF072C - (1836);
    f0 = BITSF(LD32(v1+1836));
    v0 = D_08AF0734 - (1844);
    f1 = BITSF(LD32(v0+1844));
    v0 = D_08AF0730 - (1840);
    ST32(a2+4020, FBITS(f0));
    f0 = BITSF(LD32(v0+1840));
    ST32(a3+4028, FBITS(f1));
    ST32(t0+4, FBITS(f0));
    ST32(t1+4, FBITS(f1));
    goto L_08A5D674;
L_08A5D674:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5D67C */
rv_t func_08A5D67C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D67C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5D624(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D690;
L_08A5D690:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5D69C */
void func_08A5D69C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_08A5D69C:;
    v0 = D_08AF0740 - (1856);
    v1 = D_08AF0744 - (1860);
    f1 = BITSF(LD32(v0+1856));
    f0 = BITSF(LD32(v1+1860));
    v0 = (u32)-1;
    ST32(a0, v0);
    ST32(a0+24, FBITS(f0));
    ST32(a0+16, FBITS(f1));
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, FBITS(f1));
    ST32(a0+20, FBITS(f0));
    return;
}

/* 08A5D6D0 */
void func_08A5D6D0(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_08A5D6D0:;
    f0 = BITSF(LD32(a1+16));
    v0 = LD32(a1+12);
    ST32(a0+4, FBITS(f0));
    f1 = BITSF(LD32(a1+20));
    ST32(a0, v0);
    ST32(a0+8, FBITS(f1));
    f0 = BITSF(LD32(a1+24));
    ST32(a0+12, FBITS(f0));
    f1 = BITSF(LD32(a1+28));
    ST32(a0+16, FBITS(f1));
    f0 = BITSF(LD32(a1+32));
    ST32(a0+20, FBITS(f0));
    f1 = BITSF(LD32(a1+36));
    ST32(a0+24, FBITS(f1));
    return;
}

/* 08A5D70C */
void func_08A5D70C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D70C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A5CBA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5D720;
L_08A5D720:;
    v0 = D_08B156B0 - (22192);
    v0 = v0 + 22192;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08A5D73C */
rv_t func_08A5D73C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5D73C:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = 28;
    s1 = s2 + 4;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D760;
L_08A5D760:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08A5B6B8(a0, a1);
    goto L_08A5D770;
L_08A5D770:;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A5D9B0; }
    goto L_08A5D77C;
L_08A5D77C:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D784;
L_08A5D784:;
    v1 = v0 + 0;
    goto L_08A5D788;
L_08A5D788:;
    v0 = LD32(s1);
    ST32(v1, s0);
    ST32(v1+8, v0);
    cnd_ = v0 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_08A5D9A8; }
    goto L_08A5D79C;
L_08A5D79C:;
    ST32(v0+4, v1);
    goto L_08A5D7A0;
L_08A5D7A0:;
    v0 = LD32(s1+16);
    ST32(s1, v1);
    a0 = 40;
    v0 = v0 + 1;
    ST32(s1+16, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D7B8;
L_08A5D7B8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5736C(a0, a1);
    goto L_08A5D7C8;
L_08A5D7C8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D7D4;
L_08A5D7D4:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D7DC;
L_08A5D7DC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A529FC(a0, a1);
    goto L_08A5D7EC;
L_08A5D7EC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D7F8;
L_08A5D7F8:;
    a0 = 88;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D800;
L_08A5D800:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A56438(a0, a1);
    goto L_08A5D810;
L_08A5D810:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D81C;
L_08A5D81C:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D824;
L_08A5D824:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A541E8(a0, a1);
    goto L_08A5D834;
L_08A5D834:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D840;
L_08A5D840:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D848;
L_08A5D848:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A53544(a0, a1);
    goto L_08A5D858;
L_08A5D858:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D864;
L_08A5D864:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D86C;
L_08A5D86C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5B2F0(a0, a1);
    goto L_08A5D87C;
L_08A5D87C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D888;
L_08A5D888:;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D890;
L_08A5D890:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5ABBC(a0, a1);
    goto L_08A5D8A0;
L_08A5D8A0:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D8AC;
L_08A5D8AC:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D8B4;
L_08A5D8B4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5BDE4(a0, a1);
    goto L_08A5D8C4;
L_08A5D8C4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D8D0;
L_08A5D8D0:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D8D8;
L_08A5D8D8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A4E9BC(a0, a1);
    goto L_08A5D8E8;
L_08A5D8E8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D8F4;
L_08A5D8F4:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D8FC;
L_08A5D8FC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5C0C4(a0, a1);
    goto L_08A5D90C;
L_08A5D90C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D918;
L_08A5D918:;
    a0 = 120;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D920;
L_08A5D920:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A57ABC(a0, a1);
    goto L_08A5D930;
L_08A5D930:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D93C;
L_08A5D93C:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D944;
L_08A5D944:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A519D4(a0, a1);
    goto L_08A5D954;
L_08A5D954:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D960;
L_08A5D960:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D968;
L_08A5D968:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A550FC(a0, a1);
    goto L_08A5D978;
L_08A5D978:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5D984;
L_08A5D984:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A5CE38(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D98C;
L_08A5D98C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5D9A8:;
    ST32(s1+4, v1);
    goto L_08A5D7A0;
L_08A5D9B0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5D9B8;
L_08A5D9B8:;
    v1 = v0 + 0;
    goto L_08A5D788;
}

/* 08A5D9C0 */
rv_t func_08A5D9C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5D9C0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C30FC4 - (4036);
    t1 = D_08C30FD4 - (4052);
    t2 = D_08C30FE4 - (4068);
    a1 = a1 & a0;
    v1 = t0 + 4036;
    a2 = t1 + 4052;
    cnd_ = a1 == 0;
    a3 = t2 + 4068;
    if (cnd_) { goto L_08A5DA78; }
    goto L_08A5D9F0;
L_08A5D9F0:;
    v0 = D_08AF0748 - (1864);
    f4 = BITSF(LD32(v0+1864));
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
    ST32(t0+4036, FBITS(f2));
    ST32(t1+4052, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4068, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5DA78;
L_08A5DA78:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5DA80 */
rv_t func_08A5DA80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5DA80:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5D9C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DA94;
L_08A5DA94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5DAA0 */
u64 func_08A5DAA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5DAA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A5CBA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5DAB4;
L_08A5DAB4:;
    v0 = D_08B156D0 - (22224);
    v0 = v0 + 22224;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A5DAD0 */
rv_t func_08A5DAD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5DAD0:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = 120;
    s1 = s2 + 4;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DAF4;
L_08A5DAF4:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08A57ABC(a0, a1);
    goto L_08A5DB04;
L_08A5DB04:;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A5DCD8; }
    goto L_08A5DB10;
L_08A5DB10:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DB18;
L_08A5DB18:;
    v1 = v0 + 0;
    goto L_08A5DB1C;
L_08A5DB1C:;
    v0 = LD32(s1);
    ST32(v1, s0);
    ST32(v1+8, v0);
    cnd_ = v0 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_08A5DCD0; }
    goto L_08A5DB30;
L_08A5DB30:;
    ST32(v0+4, v1);
    goto L_08A5DB34;
L_08A5DB34:;
    v0 = LD32(s1+16);
    ST32(s1, v1);
    a0 = 40;
    v0 = v0 + 1;
    ST32(s1+16, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DB4C;
L_08A5DB4C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5736C(a0, a1);
    goto L_08A5DB5C;
L_08A5DB5C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DB68;
L_08A5DB68:;
    a0 = 88;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DB70;
L_08A5DB70:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A56438(a0, a1);
    goto L_08A5DB80;
L_08A5DB80:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DB8C;
L_08A5DB8C:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DB94;
L_08A5DB94:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A522E4(a0, a1);
    goto L_08A5DBA4;
L_08A5DBA4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DBB0;
L_08A5DBB0:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DBB8;
L_08A5DBB8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5B6B8(a0, a1);
    goto L_08A5DBC8;
L_08A5DBC8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DBD4;
L_08A5DBD4:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DBDC;
L_08A5DBDC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5BDE4(a0, a1);
    goto L_08A5DBEC;
L_08A5DBEC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DBF8;
L_08A5DBF8:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DC00;
L_08A5DC00:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5B2F0(a0, a1);
    goto L_08A5DC10;
L_08A5DC10:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DC1C;
L_08A5DC1C:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DC24;
L_08A5DC24:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5C0C4(a0, a1);
    goto L_08A5DC34;
L_08A5DC34:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DC40;
L_08A5DC40:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DC48;
L_08A5DC48:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A529FC(a0, a1);
    goto L_08A5DC58;
L_08A5DC58:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DC64;
L_08A5DC64:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DC6C;
L_08A5DC6C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A4E9BC(a0, a1);
    goto L_08A5DC7C;
L_08A5DC7C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DC88;
L_08A5DC88:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DC90;
L_08A5DC90:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A550FC(a0, a1);
    goto L_08A5DCA0;
L_08A5DCA0:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DCAC;
L_08A5DCAC:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A5CE38(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DCB4;
L_08A5DCB4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5DCD0:;
    ST32(s1+4, v1);
    goto L_08A5DB34;
L_08A5DCD8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DCE0;
L_08A5DCE0:;
    v1 = v0 + 0;
    goto L_08A5DB1C;
}

/* 08A5DCE8 */
rv_t func_08A5DCE8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5DCE8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C30FF4 - (4084);
    t1 = D_08C31004 - (4100);
    t2 = D_08C31014 - (4116);
    a1 = a1 & a0;
    v1 = t0 + 4084;
    a2 = t1 + 4100;
    cnd_ = a1 == 0;
    a3 = t2 + 4116;
    if (cnd_) { goto L_08A5DDA0; }
    goto L_08A5DD18;
L_08A5DD18:;
    v0 = D_08AF074C - (1868);
    f4 = BITSF(LD32(v0+1868));
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
    ST32(t0+4084, FBITS(f2));
    ST32(t1+4100, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4116, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5DDA0;
L_08A5DDA0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5DDA8 */
rv_t func_08A5DDA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5DDA8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5DCE8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DDBC;
L_08A5DDBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5DDC8 */
u64 func_08A5DDC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5DDC8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A5CBA4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5DDDC;
L_08A5DDDC:;
    v0 = D_08B156F0 - (22256);
    v0 = v0 + 22256;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A5DDF8 */
rv_t func_08A5DDF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5DDF8:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = 120;
    s1 = s2 + 4;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DE1C;
L_08A5DE1C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_08A57ABC(a0, a1);
    goto L_08A5DE2C;
L_08A5DE2C:;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A5E000; }
    goto L_08A5DE38;
L_08A5DE38:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DE40;
L_08A5DE40:;
    v1 = v0 + 0;
    goto L_08A5DE44;
L_08A5DE44:;
    v0 = LD32(s1);
    ST32(v1, s0);
    ST32(v1+8, v0);
    cnd_ = v0 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_08A5DFF8; }
    goto L_08A5DE58;
L_08A5DE58:;
    ST32(v0+4, v1);
    goto L_08A5DE5C;
L_08A5DE5C:;
    v0 = LD32(s1+16);
    ST32(s1, v1);
    a0 = 40;
    v0 = v0 + 1;
    ST32(s1+16, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DE74;
L_08A5DE74:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5736C(a0, a1);
    goto L_08A5DE84;
L_08A5DE84:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DE90;
L_08A5DE90:;
    a0 = 88;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DE98;
L_08A5DE98:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A56438(a0, a1);
    goto L_08A5DEA8;
L_08A5DEA8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DEB4;
L_08A5DEB4:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DEBC;
L_08A5DEBC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A522E4(a0, a1);
    goto L_08A5DECC;
L_08A5DECC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DED8;
L_08A5DED8:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DEE0;
L_08A5DEE0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5BDE4(a0, a1);
    goto L_08A5DEF0;
L_08A5DEF0:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DEFC;
L_08A5DEFC:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DF04;
L_08A5DF04:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5C0C4(a0, a1);
    goto L_08A5DF14;
L_08A5DF14:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DF20;
L_08A5DF20:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DF28;
L_08A5DF28:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5B2F0(a0, a1);
    goto L_08A5DF38;
L_08A5DF38:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DF44;
L_08A5DF44:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DF4C;
L_08A5DF4C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A5B6B8(a0, a1);
    goto L_08A5DF5C;
L_08A5DF5C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DF68;
L_08A5DF68:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DF70;
L_08A5DF70:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A529FC(a0, a1);
    goto L_08A5DF80;
L_08A5DF80:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DF8C;
L_08A5DF8C:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DF94;
L_08A5DF94:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A4E9BC(a0, a1);
    goto L_08A5DFA4;
L_08A5DFA4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DFB0;
L_08A5DFB0:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DFB8;
L_08A5DFB8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    func_08A550FC(a0, a1);
    goto L_08A5DFC8;
L_08A5DFC8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08AD21DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A5DFD4;
L_08A5DFD4:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A5CE38(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5DFDC;
L_08A5DFDC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5DFF8:;
    ST32(s1+4, v1);
    goto L_08A5DE5C;
L_08A5E000:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E008;
L_08A5E008:;
    v1 = v0 + 0;
    goto L_08A5DE44;
}

/* 08A5E010 */
rv_t func_08A5E010(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5E010:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31024 - (4132);
    t1 = D_08C31034 - (4148);
    t2 = D_08C31044 - (4164);
    a1 = a1 & a0;
    v1 = t0 + 4132;
    a2 = t1 + 4148;
    cnd_ = a1 == 0;
    a3 = t2 + 4164;
    if (cnd_) { goto L_08A5E0C8; }
    goto L_08A5E040;
L_08A5E040:;
    v0 = D_08AF0750 - (1872);
    f4 = BITSF(LD32(v0+1872));
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
    ST32(t0+4132, FBITS(f2));
    ST32(t1+4148, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4164, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5E0C8;
L_08A5E0C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E0D0 */
rv_t func_08A5E0D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E0D0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5E010(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E0E4;
L_08A5E0E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E0F0 */
rv_t func_08A5E0F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5E0F0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31054 - (4180);
    t1 = D_08C31064 - (4196);
    t2 = D_08C31074 - (4212);
    a1 = a1 & a0;
    v1 = t0 + 4180;
    a2 = t1 + 4196;
    cnd_ = a1 == 0;
    a3 = t2 + 4212;
    if (cnd_) { goto L_08A5E1A8; }
    goto L_08A5E120;
L_08A5E120:;
    v0 = D_08AF0754 - (1876);
    f4 = BITSF(LD32(v0+1876));
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
    ST32(t0+4180, FBITS(f2));
    ST32(t1+4196, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4212, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5E1A8;
L_08A5E1A8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E1B0 */
rv_t func_08A5E1B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E1B0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5E0F0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E1C4;
L_08A5E1C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E1D0 */
void func_08A5E1D0(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E1D0:;
    v0 = D_08B15710 - (22288);
    v0 = v0 + 22288;
    ST32(a0, v0);
    sp = sp - 16;
    ST32(a0+4, 0);
    func_08A5E33C(a0);
    goto L_08A5E1F0;
L_08A5E1F0:;
    sp = sp + 16;
    return;
}

/* 08A5E1FC */
u64 func_08A5E1FC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E1FC:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08B15710 - (22288);
    v0 = v0 + 22288;
    a0 = LD32(a0+8);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08A5E250; }
    goto L_08A5E224;
L_08A5E224:;
    v0 = LD32(a0-4);
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_08A5E230;
L_08A5E230:;
    cnd_ = a0 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_08A5E248; }
    goto L_08A5E238;
L_08A5E238:;
    a0 = s0 + 0;
    { rv_t r_ = func_08896370(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E240;
L_08A5E240:;
    a0 = LD32(s1+8);
    goto L_08A5E230;
L_08A5E248:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5E250;
L_08A5E250:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A5E264 */
rv_t func_08A5E264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E264:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08B15710 - (22288);
    v0 = v0 + 22288;
    a0 = LD32(a0+8);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08A5E2B8; }
    goto L_08A5E28C;
L_08A5E28C:;
    v0 = LD32(a0-4);
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_08A5E298;
L_08A5E298:;
    cnd_ = a0 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_08A5E2B0; }
    goto L_08A5E2A0;
L_08A5E2A0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08896370(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E2A8;
L_08A5E2A8:;
    a0 = LD32(s1+8);
    goto L_08A5E298;
L_08A5E2B0:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5E2B8;
L_08A5E2B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E2CC */
rv_t func_08A5E2CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E2CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08B15710 - (22288);
    v0 = v0 + 22288;
    a0 = LD32(a0+8);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08A5E320; }
    goto L_08A5E2F4;
L_08A5E2F4:;
    v0 = LD32(a0-4);
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_08A5E300;
L_08A5E300:;
    cnd_ = a0 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_08A5E318; }
    goto L_08A5E308;
L_08A5E308:;
    a0 = s0 + 0;
    { rv_t r_ = func_08896370(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E310;
L_08A5E310:;
    a0 = LD32(s1+8);
    goto L_08A5E300;
L_08A5E318:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5E320;
L_08A5E320:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5E328;
L_08A5E328:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E33C */
void func_08A5E33C(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E33C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A69E44(a0);
    goto L_08A5E350;
L_08A5E350:;
    a0 = s0 + 0;
    func_08A69E50(a0);
    goto L_08A5E358;
L_08A5E358:;
    sp = sp + 16;
    return;
}

/* 08A5E368 */
rv_t func_08A5E368(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E368:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    a0 = LD32(a0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E384;
L_08A5E384:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E390 */
void func_08A5E390(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E390:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    a0 = LD32(a0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    func_08896988(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A5E3AC;
L_08A5E3AC:;
    sp = sp + 16;
    return;
}

/* 08A5E3B8 */
rv_t func_08A5E3B8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E3B8:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    a0 = LD32(a0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_0889679C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E3D4;
L_08A5E3D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E3E0 */
rv_t func_08A5E3E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5E3E0:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    a0 = LD32(a0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968E8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E3FC;
L_08A5E3FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5E408 */
void func_08A5E408(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5E408:;
    sp = sp - 48;
    s4 = (u32)-1;
    s3 = 2;
    s2 = a0 + 0;
    func_08A5E1D0(a0);
    goto L_08A5E434;
L_08A5E434:;
    v0 = D_08B15728 - (22312);
    v0 = v0 + 22312;
    ST32(s2, v0);
    a0 = s2 + 0;
    func_08A5E33C(a0);
    goto L_08A5E448;
L_08A5E448:;
    a0 = 52;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E450;
L_08A5E450:;
    s1 = v0 + 4;
    v0 = 3;
    ST32(s1-4, v0);
    s0 = s1 + 0;
    goto L_08A5E460;
L_08A5E460:;
    a0 = s0 + 0;
    s3 = s3 - 1;
    func_0889635C(a0);
    goto L_08A5E46C;
L_08A5E46C:;
    cnd_ = s3 != s4;
    s0 = s0 + 16;
    if (cnd_) { goto L_08A5E460; }
    goto L_08A5E474;
L_08A5E474:;
    ST32(s2+8, s1);
    a0 = s1 + 0;
    a1 = 18;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5E484;
L_08A5E484:;
    a0 = LD32(s2+8);
    a1 = 18;
    a0 = a0 + 16;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5E494;
L_08A5E494:;
    a0 = LD32(s2+8);
    a1 = 18;
    a0 = a0 + 32;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5E4A4;
L_08A5E4A4:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_08A5E534(a0, a1, 0, 0, 0);
    goto L_08A5E4B0;
L_08A5E4B0:;
    a0 = s2 + 0;
    a1 = 1;
    func_08A5E8C4(a0, a1, 0, 0, 0);
    goto L_08A5E4BC;
L_08A5E4BC:;
    a0 = s2 + 0;
    a1 = 2;
    func_08A5E8BC();
    goto L_08A5E4C8;
L_08A5E4C8:;
    v0 = D_08C29B58 - (-25768);
    v1 = LD32(v0-25768);
    a0 = 0xde350000u;
    a1 = 0x5d00000u;
    ST32(s2+12, v1);
    a2 = sp + 0;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x4860;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5E4F0;
L_08A5E4F0:;
    v0 = D_08AF075C - (1884);
    f12 = BITSF(LD32(v0+1884));
    a0 = LD32(sp);
    a1 = 0x1e0b0000u;
    a1 = a1 | 0x4e10;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E508;
L_08A5E508:;
    f12 = f0;
    a0 = s2 + 0;
    func_08A69EC4(f12);
    goto L_08A5E514;
L_08A5E514:;
    sp = sp + 48;
    return;
}

/* 08A5E534 */
void func_08A5E534(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5E534:;
    sp = sp - 48;
    v1 = D_08AF0764 - (1892);
    v0 = D_08AF0760 - (1888);
    a3 = 0 + 0;
    s2 = a1 << 4;
    a1 = 0 + 0;
    s0 = a0 + 0;
    f22 = BITSF(0);
    f13 = f22;
    f21 = BITSF(LD32(v1+1892));
    f20 = BITSF(LD32(v0+1888));
    a0 = LD32(a0+8);
    a2 = LD32(s0+16);
    f12 = f20;
    a0 = a0 + s2;
    f14 = f21;
    func_08896520(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14);
    goto L_08A5E59C;
L_08A5E59C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+20);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f22;
    f14 = f21;
    a1 = 1;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5E5C0;
L_08A5E5C0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+16);
    f14 = f21;
    a0 = a0 + s2;
    a3 = 0 + 0;
    f12 = f20;
    f13 = f22;
    a1 = 2;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5E5E4;
L_08A5E5E4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 3;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5E600;
L_08A5E600:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E624;
L_08A5E624:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 5;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E648;
L_08A5E648:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    t0 = 0 + 0;
    f12 = f22;
    f13 = f20;
    a0 = a0 + s2;
    a1 = 6;
    a3 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E66C;
L_08A5E66C:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E674;
L_08A5E674:;
    a1 = LD32(s0+40);
    f12 = f22;
    f13 = f20;
    a0 = v0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s4 = v0 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_08A5E694;
L_08A5E694:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E69C;
L_08A5E69C:;
    a1 = LD32(s0+44);
    a3 = 0 + 0;
    f13 = f20;
    f12 = f22;
    a0 = v0 + 0;
    a2 = 0 + 0;
    s3 = v0 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_08A5E6BC;
L_08A5E6BC:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E6C4;
L_08A5E6C4:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = s4 + 0;
    a2 = s3 + 0;
    s1 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5E6DC;
L_08A5E6DC:;
    a0 = LD32(s0+8);
    a2 = s1 + 0;
    a1 = 7;
    a0 = a0 + s2;
    func_08896780(a0, a1, a2);
    goto L_08A5E6F0;
L_08A5E6F0:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E6F8;
L_08A5E6F8:;
    s4 = v0 + 0;
    v0 = D_08AF0768 - (1896);
    f21 = BITSF(LD32(v0+1896));
    a1 = LD32(s0+40);
    f13 = f20;
    f12 = f21;
    a0 = s4 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5E718;
L_08A5E718:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E720;
L_08A5E720:;
    a1 = LD32(s0+44);
    f13 = f20;
    f12 = f21;
    a0 = v0 + 0;
    s3 = v0 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5E738;
L_08A5E738:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E740;
L_08A5E740:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = s4 + 0;
    a2 = s3 + 0;
    s1 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5E758;
L_08A5E758:;
    a0 = LD32(s0+8);
    a2 = s1 + 0;
    a1 = 17;
    a0 = a0 + s2;
    func_08896780(a0, a1, a2);
    goto L_08A5E76C;
L_08A5E76C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 8;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5E788;
L_08A5E788:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 10;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5E7A4;
L_08A5E7A4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+52);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 11;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5E7C0;
L_08A5E7C0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 9;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E7E4;
L_08A5E7E4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 12;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E808;
L_08A5E808:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+28);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 13;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E82C;
L_08A5E82C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    a3 = 0 + 0;
    a0 = a0 + s2;
    t0 = 0 + 0;
    f12 = f22;
    f13 = f20;
    a1 = 14;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E850;
L_08A5E850:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 15;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5E86C;
L_08A5E86C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+32);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 16;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5E890;
L_08A5E890:;
    sp = sp + 48;
    return;
}

/* 08A5E8BC */
void func_08A5E8BC(void)
{
L_08A5E8BC:;
    return;
}

/* 08A5E8C4 */
void func_08A5E8C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5E8C4:;
    sp = sp - 48;
    v1 = D_08AF0770 - (1904);
    v0 = D_08AF076C - (1900);
    a3 = 0 + 0;
    s2 = a1 << 4;
    a1 = 0 + 0;
    s0 = a0 + 0;
    f22 = BITSF(0);
    f13 = f22;
    f21 = BITSF(LD32(v1+1904));
    f20 = BITSF(LD32(v0+1900));
    a0 = LD32(a0+8);
    a2 = LD32(s0+16);
    f12 = f20;
    a0 = a0 + s2;
    f14 = f21;
    func_08896520(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14);
    goto L_08A5E92C;
L_08A5E92C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+20);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f22;
    f14 = f21;
    a1 = 1;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5E950;
L_08A5E950:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+16);
    f14 = f21;
    f12 = f20;
    f13 = f22;
    a0 = a0 + s2;
    a1 = 2;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5E974;
L_08A5E974:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E97C;
L_08A5E97C:;
    a1 = LD32(s0+40);
    f12 = f22;
    f13 = f20;
    a0 = v0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s4 = v0 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_08A5E99C;
L_08A5E99C:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E9A4;
L_08A5E9A4:;
    a1 = LD32(s0+44);
    a3 = 0 + 0;
    f13 = f20;
    f12 = f22;
    a0 = v0 + 0;
    a2 = 0 + 0;
    s3 = v0 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_08A5E9C4;
L_08A5E9C4:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5E9CC;
L_08A5E9CC:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = s4 + 0;
    a2 = s3 + 0;
    s1 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5E9E4;
L_08A5E9E4:;
    a0 = LD32(s0+8);
    a2 = s1 + 0;
    a1 = 7;
    a0 = a0 + s2;
    func_08896780(a0, a1, a2);
    goto L_08A5E9F8;
L_08A5E9F8:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5EA00;
L_08A5EA00:;
    s4 = v0 + 0;
    v0 = D_08AF0774 - (1908);
    f21 = BITSF(LD32(v0+1908));
    a1 = LD32(s0+40);
    f13 = f20;
    f12 = f21;
    a0 = s4 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5EA20;
L_08A5EA20:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5EA28;
L_08A5EA28:;
    a1 = LD32(s0+44);
    f13 = f20;
    f12 = f21;
    a0 = v0 + 0;
    s3 = v0 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5EA40;
L_08A5EA40:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5EA48;
L_08A5EA48:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = s4 + 0;
    a2 = s3 + 0;
    s1 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5EA60;
L_08A5EA60:;
    a0 = LD32(s0+8);
    a2 = s1 + 0;
    a1 = 17;
    a0 = a0 + s2;
    func_08896780(a0, a1, a2);
    goto L_08A5EA74;
L_08A5EA74:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    a3 = 0 + 0;
    a0 = a0 + s2;
    t0 = 0 + 0;
    f12 = f22;
    f13 = f20;
    a1 = 14;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EA98;
L_08A5EA98:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    f12 = f21;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 15;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EAB4;
L_08A5EAB4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + s2;
    f12 = f22;
    f13 = f20;
    a1 = 12;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EAD8;
L_08A5EAD8:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 8;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EAF4;
L_08A5EAF4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 10;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EB10;
L_08A5EB10:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 9;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EB34;
L_08A5EB34:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+52);
    a3 = 0 + 0;
    a0 = a0 + s2;
    t0 = 0 + 0;
    f12 = f22;
    f13 = f20;
    a1 = 13;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EB58;
L_08A5EB58:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 3;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EB74;
L_08A5EB74:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EB98;
L_08A5EB98:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 5;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EBBC;
L_08A5EBBC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 6;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EBE0;
L_08A5EBE0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+32);
    f12 = f22;
    a0 = a0 + s2;
    f13 = f20;
    a3 = 0 + 0;
    t0 = 0 + 0;
    a1 = 16;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EC04;
L_08A5EC04:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+28);
    f12 = f20;
    a0 = a0 + s2;
    f13 = f20;
    a1 = 11;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EC20;
L_08A5EC20:;
    sp = sp + 48;
    return;
}

/* 08A5EC4C */
rv_t func_08A5EC4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5EC4C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5EC68;
L_08A5EC68:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A5EC94; }
    goto L_08A5EC74;
L_08A5EC74:;
    v0 = LD32(s0+12);
    a0 = LD32(s0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5EC88;
L_08A5EC88:;
    v0 = 1;
    cnd_ = s1 == v0;
    v0 = D_08C293C5 - (-27707);
    if (cnd_) { goto L_08A5ECA8; }
    goto L_08A5EC94;
L_08A5EC94:;
    goto L_08A5EC98;
L_08A5EC98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5ECA8:;
    v1 = LD_U8(v0-27707);
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(FBITS(f0) ^ 0x80000000u); goto L_08A5EC94; }
    goto L_08A5ECB4;
L_08A5ECB4:;
    goto L_08A5EC98;
}

/* 08A5ECBC */
rv_t func_08A5ECBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5ECBC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31084 - (4228);
    t1 = D_08C31094 - (4244);
    t2 = D_08C310A4 - (4260);
    a1 = a1 & a0;
    v1 = t0 + 4228;
    a2 = t1 + 4244;
    cnd_ = a1 == 0;
    a3 = t2 + 4260;
    if (cnd_) { goto L_08A5ED74; }
    goto L_08A5ECEC;
L_08A5ECEC:;
    v0 = D_08AF0778 - (1912);
    f4 = BITSF(LD32(v0+1912));
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
    ST32(t0+4228, FBITS(f2));
    ST32(t1+4244, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4260, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5ED74;
L_08A5ED74:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5ED7C */
rv_t func_08A5ED7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5ED7C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5ECBC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5ED90;
L_08A5ED90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5ED9C */
void func_08A5ED9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5ED9C:;
    sp = sp - 16;
    s1 = a0 + 0;
    func_08A5E1D0(a0);
    goto L_08A5EDB4;
L_08A5EDB4:;
    v0 = D_08B15740 - (22336);
    v0 = v0 + 22336;
    ST32(s1, v0);
    a0 = 20;
    ST8(s1+72, 0);
    ST32(s1+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5EDD0;
L_08A5EDD0:;
    s0 = v0 + 4;
    v0 = 1;
    ST32(s0-4, v0);
    a0 = s0 + 0;
    func_0889635C(a0);
    goto L_08A5EDE4;
L_08A5EDE4:;
    ST32(s1+8, s0);
    a0 = s0 + 0;
    a1 = 10;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5EDF4;
L_08A5EDF4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08A5EE70(a0, a1, 0, 0, 0);
    goto L_08A5EE00;
L_08A5EE00:;
    sp = sp + 16;
    return;
}

/* 08A5EE14 */
rv_t func_08A5EE14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5EE14:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+12);
    a0 = LD32(a0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5EE40;
L_08A5EE40:;
    v0 = 1;
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD_U8(s1+72); goto L_08A5EE60; }
    goto L_08A5EE4C;
L_08A5EE4C:;
    goto L_08A5EE50;
L_08A5EE50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A5EE60:;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(FBITS(f0) ^ 0x80000000u); goto L_08A5EE4C; }
    goto L_08A5EE68;
L_08A5EE68:;
    goto L_08A5EE50;
}

/* 08A5EE70 */
void func_08A5EE70(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5EE70:;
    sp = sp - 32;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A5EEAC; }
    goto L_08A5EE90;
L_08A5EE90:;
    goto L_08A5EE94;
L_08A5EE94:;
    sp = sp + 32;
    return;
L_08A5EEAC:;
    v1 = D_08AF0780 - (1920);
    v0 = D_08AF077C - (1916);
    f20 = BITSF(LD32(v0+1916));
    f22 = BITSF(LD32(v1+1920));
    a0 = LD32(a0+8);
    a2 = LD32(s0+20);
    f13 = BITSF(0);
    a1 = 2;
    f12 = f20;
    f14 = f22;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14);
    goto L_08A5EEDC;
L_08A5EEDC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+16);
    f13 = BITSF(0);
    f14 = f22;
    a1 = 4;
    f12 = f20;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5EEFC;
L_08A5EEFC:;
    v0 = D_08AF0784 - (1924);
    f21 = BITSF(LD32(v0+1924));
    a0 = LD32(s0+8);
    a2 = LD32(s0+32);
    a1 = 0 + 0;
    f12 = f21;
    f13 = f20;
    a3 = 2;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EF24;
L_08A5EF24:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+28);
    a1 = 0 + 0;
    f12 = f21;
    f13 = f22;
    a3 = 2;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EF44;
L_08A5EF44:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    a1 = 1;
    f12 = f21;
    f13 = f20;
    a3 = 2;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EF64;
L_08A5EF64:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f21;
    a1 = 1;
    f13 = f22;
    a3 = 2;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EF84;
L_08A5EF84:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = BITSF(0);
    a1 = 5;
    f13 = f20;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EFA4;
L_08A5EFA4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+52);
    f12 = BITSF(0);
    a3 = 0 + 0;
    t0 = 0 + 0;
    f13 = f22;
    a1 = 5;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5EFC4;
L_08A5EFC4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    a1 = 6;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EFDC;
L_08A5EFDC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    a1 = 7;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5EFF4;
L_08A5EFF4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    a1 = 8;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F00C;
L_08A5F00C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+64);
    f12 = f20;
    a1 = 9;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F024;
L_08A5F024:;
    goto L_08A5EE94;
}

/* 08A5F02C */
void func_08A5F02C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5F02C:;
    sp = sp - 48;
    s3 = a0 + 0;
    s2 = 0 + 0;
    func_08A5E1D0(a0);
    goto L_08A5F050;
L_08A5F050:;
    v1 = D_08C29B58 - (-25768);
    a1 = LD32(v1-25768);
    v0 = D_08B15758 - (22360);
    v0 = v0 + 22360;
    ST32(s3+12, a1);
    a0 = 36;
    ST32(s3, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F070;
L_08A5F070:;
    s1 = v0 + 4;
    s0 = v0 + 0;
    v0 = 2;
    ST32(s1-4, v0);
    a0 = s1 + 0;
    s0 = s0 + 20;
    func_0889635C(a0);
    goto L_08A5F08C;
L_08A5F08C:;
    a0 = s0 + 0;
    func_0889635C(a0);
    goto L_08A5F094;
L_08A5F094:;
    ST32(s3+8, s1);
    a0 = LD32(s3+8);
    goto L_08A5F09C;
L_08A5F09C:;
    v0 = s2 << 4;
    a1 = 28;
    a0 = a0 + v0;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5F0AC;
L_08A5F0AC:;
    a1 = s2 + 0;
    a0 = s3 + 0;
    s2 = s2 + 1;
    func_08A5F1A4(a0, a1);
    goto L_08A5F0BC;
L_08A5F0BC:;
    v0 = s2 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+8); goto L_08A5F09C; }
    goto L_08A5F0C8;
L_08A5F0C8:;
    a0 = (u32)-1;
    ST32(sp, 0);
    v0 = func_08A5FB08(a0);
    goto L_08A5F0D4;
L_08A5F0D4:;
    a0 = 0xde350000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5F0E8;
L_08A5F0E8:;
    v0 = D_08AF078C - (1932);
    f12 = BITSF(LD32(v0+1932));
    a0 = LD32(sp);
    a1 = 0x1e0b0000u;
    a1 = a1 | 0x4e10;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F100;
L_08A5F100:;
    f12 = f0;
    a0 = s3 + 0;
    func_08A69EC4(f12);
    goto L_08A5F10C;
L_08A5F10C:;
    sp = sp + 48;
    return;
}

/* 08A5F128 */
rv_t func_08A5F128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5F128:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5F144;
L_08A5F144:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A5F190; }
    goto L_08A5F150;
L_08A5F150:;
    v0 = LD32(s1+12);
    a0 = LD32(s1+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F164;
L_08A5F164:;
    v1 = s0 ^ 0x3;
    v0 = s0 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A5F194; }
    goto L_08A5F180;
L_08A5F180:;
    v0 = D_08C2938D - (-27763);
    v1 = LD_U8(v0-27763);
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(FBITS(f0) ^ 0x80000000u); goto L_08A5F194; }
    goto L_08A5F190;
L_08A5F190:;
    goto L_08A5F194;
L_08A5F194:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5F1A4 */
static void func_08A5F1A4__orig(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A5F1A4:;
    sp = sp - 80;
    s3 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    ST32(sp, 0);
    v0 = func_08A5FB08(a0);
    goto L_08A5F1F0;
L_08A5F1F0:;
    a0 = 0xde350000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5F204;
L_08A5F204:;
    v1 = D_08AF0790 - (1936);
    f20 = BITSF(LD32(v1+1936));
    a0 = LD32(sp);
    a1 = 0x80170000u;
    a1 = a1 | 0xf66c;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F220;
L_08A5F220:;
    a0 = LD32(sp);
    a1 = 0xf9c00000u;
    a1 = a1 | 0x475b;
    f12 = f20;
    f22 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F238;
L_08A5F238:;
    a0 = LD32(sp);
    a1 = 0xe4de0000u;
    a1 = a1 | 0x1d40;
    f12 = f20;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F250;
L_08A5F250:;
    a0 = LD32(sp);
    a1 = 0x1b170000u;
    f12 = f20;
    a1 = a1 | 0xe711;
    f26 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F268;
L_08A5F268:;
    v0 = D_08AF0794 - (1940);
    f24 = BITSF(LD32(v0+1940));
    a0 = LD32(sp);
    a1 = 0xa0030000u;
    a1 = a1 | 0xd60f;
    f12 = f24;
    f25 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F288;
L_08A5F288:;
    v0 = D_08AF0798 - (1944);
    f12 = BITSF(LD32(v0+1944));
    a0 = LD32(sp);
    a1 = 0xe9870000u;
    a1 = a1 | 0x960;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F2A4;
L_08A5F2A4:;
    cnd_ = s0 == 0;
    f27 = f0;
    if (cnd_) { goto L_08A5F5F0; }
    goto L_08A5F2AC;
L_08A5F2AC:;
    v0 = 1;
    cnd_ = s0 == v0;
    v0 = D_08AF079C - (1948);
    if (cnd_) { goto L_08A5F2F4; }
    goto L_08A5F2B8;
L_08A5F2B8:;
    goto L_08A5F2BC;
L_08A5F2BC:;
    sp = sp + 80;
    return;
L_08A5F2F4:;
    f20 = BITSF(LD32(v0+1948));
    a0 = LD32(s3+8);
    a2 = LD32(s3+20);
    f13 = BITSF(0);
    f14 = f20;
    a0 = a0 + 16;
    a1 = 4;
    f12 = f24;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5F31C;
L_08A5F31C:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+28);
    f13 = f20;
    a1 = 0 + 0;
    a0 = a0 + 16;
    f12 = f21;
    a3 = 1;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F340;
L_08A5F340:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+32);
    f12 = f21;
    a0 = a0 + 16;
    a1 = 0 + 0;
    f13 = f24;
    a3 = 1;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F364;
L_08A5F364:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+36);
    a1 = 1;
    a0 = a0 + 16;
    f12 = f22;
    f13 = f24;
    a3 = 1;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F388;
L_08A5F388:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+24);
    t0 = 0 + 0;
    f13 = f20;
    f12 = f22;
    a0 = a0 + 16;
    a1 = 1;
    a3 = 1;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F3AC;
L_08A5F3AC:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+16);
    f13 = BITSF(0);
    f14 = f20;
    a0 = a0 + 16;
    a1 = 5;
    f12 = f24;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5F3D0;
L_08A5F3D0:;
    a0 = LD32(s3+8);
    f13 = BITSF(FBITS(f23) ^ 0x80000000u);
    a2 = LD32(s3+36);
    a0 = a0 + 16;
    a1 = 3;
    f12 = f25;
    a3 = 1;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F3F4;
L_08A5F3F4:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+24);
    f12 = f25;
    a0 = a0 + 16;
    f13 = f23;
    a1 = 3;
    a3 = 1;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F418;
L_08A5F418:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+28);
    f13 = f20;
    a0 = a0 + 16;
    a1 = 2;
    f12 = f26;
    a3 = 1;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F43C;
L_08A5F43C:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+32);
    a3 = 1;
    t0 = 0 + 0;
    f12 = f26;
    a0 = a0 + 16;
    a1 = 2;
    f13 = f24;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F460;
L_08A5F460:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+56);
    a1 = 22;
    a0 = a0 + 16;
    f12 = f24;
    f13 = f24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F47C;
L_08A5F47C:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+60);
    a1 = 23;
    a0 = a0 + 16;
    f12 = f24;
    f13 = f24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F498;
L_08A5F498:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+44);
    f12 = BITSF(0);
    a0 = a0 + 16;
    a1 = 8;
    f13 = f24;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F4BC;
L_08A5F4BC:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+52);
    f12 = BITSF(0);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + 16;
    a1 = 9;
    f13 = f24;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F4E0;
L_08A5F4E0:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    a1 = 24;
    a0 = a0 + 16;
    f12 = f24;
    f13 = f24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F4FC;
L_08A5F4FC:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    a1 = 25;
    a0 = a0 + 16;
    f12 = f24;
    f13 = f24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F518;
L_08A5F518:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + 16;
    a1 = 10;
    f12 = f24;
    f13 = f24;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F53C;
L_08A5F53C:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    a1 = 18;
    a0 = a0 + 16;
    f12 = f24;
    f13 = f24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F558;
L_08A5F558:;
    v0 = D_08AF07A0 - (1952);
    f20 = BITSF(LD32(v0+1952));
    a0 = LD32(s3+8);
    a2 = LD32(s3+40);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + 16;
    a1 = 21;
    f12 = f20;
    f13 = f24;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F584;
L_08A5F584:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+40);
    f12 = f27;
    a0 = a0 + 16;
    a1 = 11;
    f13 = f24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F5A0;
L_08A5F5A0:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+36);
    f12 = f20;
    a0 = a0 + 16;
    a1 = 26;
    f13 = f24;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F5C4;
L_08A5F5C4:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+32);
    f12 = f20;
    a0 = a0 + 16;
    goto L_08A5F5D4;
L_08A5F5D4:;
    f13 = f24;
    a1 = 27;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F5E8;
L_08A5F5E8:;
    goto L_08A5F2BC;
L_08A5F5F0:;
    v0 = D_08AF079C - (1948);
    f20 = BITSF(LD32(v0+1948));
    a2 = LD32(s3+20);
    f13 = BITSF(0);
    a0 = LD32(s3+8);
    f14 = f20;
    f12 = f24;
    a1 = 4;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5F618;
L_08A5F618:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F620;
L_08A5F620:;
    s2 = v0 + 0;
    v0 = D_08AF07A0 - (1952);
    f22 = BITSF(LD32(v0+1952));
    a1 = LD32(s3+44);
    a3 = 1;
    f12 = f22;
    f13 = f24;
    a0 = s2 + 0;
    a2 = 0 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_08A5F648;
L_08A5F648:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F650;
L_08A5F650:;
    f14 = BITSF(0);
    a1 = LD32(s3+16);
    f13 = f21;
    a0 = v0 + 0;
    f12 = f24;
    a2 = 0 + 0;
    s1 = v0 + 0;
    func_088969FC(a0, a1, a2, f12, f13, f14);
    goto L_08A5F670;
L_08A5F670:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F678;
L_08A5F678:;
    a0 = v0 + 0;
    f12 = f24;
    a1 = s2 + 0;
    a2 = s1 + 0;
    s0 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5F690;
L_08A5F690:;
    a0 = LD32(s3+8);
    a2 = s0 + 0;
    a1 = 0 + 0;
    func_08896780(a0, a1, a2);
    goto L_08A5F6A0;
L_08A5F6A0:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F6A8;
L_08A5F6A8:;
    a1 = LD32(s3+44);
    a3 = 0 + 0;
    a0 = v0 + 0;
    f12 = f22;
    f13 = f24;
    a2 = 0 + 0;
    s2 = v0 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_08A5F6C8;
L_08A5F6C8:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F6D0;
L_08A5F6D0:;
    f13 = BITSF(0);
    a1 = LD32(s3+16);
    f14 = f20;
    a0 = v0 + 0;
    f12 = f24;
    a2 = 0 + 0;
    s1 = v0 + 0;
    func_088969FC(a0, a1, a2, f12, f13, f14);
    goto L_08A5F6F0;
L_08A5F6F0:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F6F8;
L_08A5F6F8:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    f12 = f24;
    s0 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5F710;
L_08A5F710:;
    a0 = LD32(s3+8);
    a2 = s0 + 0;
    a1 = 5;
    func_08896780(a0, a1, a2);
    goto L_08A5F720;
L_08A5F720:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+20);
    f14 = BITSF(0);
    f12 = f23;
    f13 = f25;
    a1 = 3;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5F740;
L_08A5F740:;
    f14 = BITSF(0);
    a0 = LD32(s3+8);
    a2 = LD32(s3+16);
    a3 = 0 + 0;
    f13 = f26;
    f12 = f24;
    a1 = 2;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A5F760;
L_08A5F760:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+56);
    f12 = f24;
    f13 = f24;
    a1 = 22;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F778;
L_08A5F778:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+60);
    f12 = f24;
    f13 = f24;
    a1 = 23;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F790;
L_08A5F790:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+24);
    f12 = BITSF(0);
    f13 = f24;
    a1 = 8;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F7B0;
L_08A5F7B0:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+28);
    f12 = BITSF(0);
    a3 = 0 + 0;
    t0 = 0 + 0;
    f13 = f24;
    a1 = 9;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F7D0;
L_08A5F7D0:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    f12 = f24;
    f13 = f24;
    a1 = 24;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F7E8;
L_08A5F7E8:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    f12 = f24;
    f13 = f24;
    a1 = 25;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F800;
L_08A5F800:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+48);
    a3 = 0 + 0;
    t0 = 0 + 0;
    f12 = f24;
    f13 = f24;
    a1 = 10;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F820;
L_08A5F820:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+36);
    f12 = f24;
    f13 = f24;
    a1 = 18;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F838;
L_08A5F838:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+52);
    f12 = f24;
    f13 = f24;
    a1 = 20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F850;
L_08A5F850:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+44);
    a3 = 0 + 0;
    t0 = 0 + 0;
    f12 = f22;
    f13 = f24;
    a1 = 16;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F870;
L_08A5F870:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+44);
    f12 = f24;
    f13 = f24;
    a1 = 17;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F888;
L_08A5F888:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+40);
    t0 = 0 + 0;
    a3 = 0 + 0;
    f12 = f22;
    f13 = f24;
    a1 = 21;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5F8A8;
L_08A5F8A8:;
    a2 = LD32(s3+40);
    a0 = LD32(s3+8);
    f12 = f27;
    f13 = f24;
    a1 = 11;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5F8C0;
L_08A5F8C0:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F8C8;
L_08A5F8C8:;
    a1 = LD32(s3+32);
    a0 = v0 + 0;
    f12 = f24;
    f13 = f24;
    s2 = v0 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5F8E0;
L_08A5F8E0:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F8E8;
L_08A5F8E8:;
    s1 = v0 + 0;
    v1 = D_08AF07A8 - (1960);
    v0 = D_08AF07A4 - (1956);
    f23 = BITSF(LD32(v1+1960));
    f20 = BITSF(LD32(v0+1956));
    f13 = BITSF(0);
    a1 = LD32(s3+16);
    f14 = f23;
    f15 = f24;
    a3 = 0 + 0;
    a0 = s1 + 0;
    f12 = f20;
    a2 = 1;
    func_088971A0(a0, a1, a2, a3, f12, f13, f14, f15);
    goto L_08A5F920;
L_08A5F920:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F928;
L_08A5F928:;
    a0 = v0 + 0;
    f12 = f24;
    a1 = s2 + 0;
    a2 = s1 + 0;
    s0 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5F940;
L_08A5F940:;
    a0 = LD32(s3+8);
    a2 = s0 + 0;
    a1 = 12;
    func_08896780(a0, a1, a2);
    goto L_08A5F950;
L_08A5F950:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F958;
L_08A5F958:;
    a1 = LD32(s3+32);
    a0 = v0 + 0;
    f12 = f24;
    f13 = f24;
    s2 = v0 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5F970;
L_08A5F970:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F978;
L_08A5F978:;
    s1 = v0 + 0;
    v0 = D_08AF07AC - (1964);
    f21 = BITSF(LD32(v0+1964));
    f13 = BITSF(0);
    a1 = LD32(s3+16);
    f14 = f21;
    f15 = f24;
    a3 = 0 + 0;
    a0 = s1 + 0;
    f12 = f20;
    a2 = 1;
    func_088971A0(a0, a1, a2, a3, f12, f13, f14, f15);
    goto L_08A5F9A8;
L_08A5F9A8:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F9B0;
L_08A5F9B0:;
    a0 = v0 + 0;
    f12 = f24;
    a1 = s2 + 0;
    a2 = s1 + 0;
    s0 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5F9C8;
L_08A5F9C8:;
    a0 = LD32(s3+8);
    a2 = s0 + 0;
    a1 = 13;
    func_08896780(a0, a1, a2);
    goto L_08A5F9D8;
L_08A5F9D8:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5F9E0;
L_08A5F9E0:;
    a1 = LD32(s3+32);
    a0 = v0 + 0;
    f12 = f24;
    f13 = f24;
    s2 = v0 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5F9F8;
L_08A5F9F8:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FA00;
L_08A5FA00:;
    f13 = BITSF(0);
    a1 = LD32(s3+20);
    f14 = f21;
    f15 = f24;
    a3 = 0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    a2 = 1;
    s1 = v0 + 0;
    func_088971A0(a0, a1, a2, a3, f12, f13, f14, f15);
    goto L_08A5FA28;
L_08A5FA28:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FA30;
L_08A5FA30:;
    a0 = v0 + 0;
    f12 = f24;
    a1 = s2 + 0;
    a2 = s1 + 0;
    s0 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5FA48;
L_08A5FA48:;
    a0 = LD32(s3+8);
    a2 = s0 + 0;
    a1 = 14;
    func_08896780(a0, a1, a2);
    goto L_08A5FA58;
L_08A5FA58:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FA60;
L_08A5FA60:;
    a1 = LD32(s3+32);
    a0 = v0 + 0;
    f12 = f24;
    f13 = f24;
    s2 = v0 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_08A5FA78;
L_08A5FA78:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FA80;
L_08A5FA80:;
    f13 = BITSF(0);
    a1 = LD32(s3+20);
    f14 = f23;
    f15 = f24;
    a3 = 0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    a2 = 1;
    s1 = v0 + 0;
    func_088971A0(a0, a1, a2, a3, f12, f13, f14, f15);
    goto L_08A5FAA8;
L_08A5FAA8:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FAB0;
L_08A5FAB0:;
    a0 = v0 + 0;
    f12 = f24;
    a1 = s2 + 0;
    a2 = s1 + 0;
    s0 = v0 + 0;
    func_08896BF8(a0, a1, a2, f12);
    goto L_08A5FAC8;
L_08A5FAC8:;
    a0 = LD32(s3+8);
    a2 = s0 + 0;
    a1 = 15;
    func_08896780(a0, a1, a2);
    goto L_08A5FAD8;
L_08A5FAD8:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+36);
    f12 = f22;
    f13 = f24;
    a1 = 26;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5FAF8;
L_08A5FAF8:;
    a0 = LD32(s3+8);
    a2 = LD32(s3+32);
    f12 = f22;
    goto L_08A5F5D4;
}

void func_08A5F1A4(u32 a0, u32 a1)
{
    func_08A5F1A4__orig(a0, a1);
    rs_input_after_scheme(a0, a1);   /* native hook (tools/dc/hooks.py) */
}

/* 08A5FB08 */
u32 func_08A5FB08(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A5FB08:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = 0x4e3d0000u;
    if (cnd_) { goto L_08A5FB3C; }
    goto L_08A5FB14;
L_08A5FB14:;
    cnd_ = a0 == 0;
    v1 = v1 | 0x1ebd;
    if (cnd_) { goto L_08A5FB34; }
    goto L_08A5FB1C;
L_08A5FB1C:;
    v1 = 0xac130000u;
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = v1 | 0x407a;
    if (cnd_) { goto L_08A5FB34; }
    goto L_08A5FB2C;
L_08A5FB2C:;
    v1 = 0x4e3d0000u;
    v1 = v1 | 0x1ebd;
    goto L_08A5FB34;
L_08A5FB34:;
    v0 = v1 + 0;
    return v0;
L_08A5FB3C:;
    v0 = D_08C29B58 - (-25768);
    a0 = LD32(v0-25768);
    goto L_08A5FB14;
}

/* 08A5FB48 */
rv_t func_08A5FB48(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5FB48:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C310B4 - (4276);
    t1 = D_08C310C4 - (4292);
    t2 = D_08C310D4 - (4308);
    a1 = a1 & a0;
    v1 = t0 + 4276;
    a2 = t1 + 4292;
    cnd_ = a1 == 0;
    a3 = t2 + 4308;
    if (cnd_) { goto L_08A5FC00; }
    goto L_08A5FB78;
L_08A5FB78:;
    v0 = D_08AF07B0 - (1968);
    f4 = BITSF(LD32(v0+1968));
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
    ST32(t0+4276, FBITS(f2));
    ST32(t1+4292, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4308, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5FC00;
L_08A5FC00:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5FC08 */
rv_t func_08A5FC08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5FC08:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5FB48(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FC1C;
L_08A5FC1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5FC28 */
float func_08A5FC28(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5FC28:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    f0 = f12;
    if (cnd_) { goto L_08A5FC50; }
    goto L_08A5FC38;
L_08A5FC38:;
    v1 = LD32(a0+12);
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A5FC54; }
    goto L_08A5FC48;
L_08A5FC48:;
    f0 = func_08A5FC68(f12);
    goto L_08A5FC50;
L_08A5FC50:;
    goto L_08A5FC54;
L_08A5FC54:;
    sp = sp + 16;
    return f0;
}

/* 08A5FC5C */
float func_08A5FC5C(float f12)
{
    float f0 = 0;
L_08A5FC5C:;
    f0 = f12 * f12;
    f0 = f0 * f12;
    return f0;
}

/* 08A5FC68 */
float func_08A5FC68(float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5FC68:;
    sp = sp - 16;
    v0 = D_08AF07B4 - (1972);
    v1 = D_08AF07BC - (1980);
    f0 = BITSF(LD32(v0+1972));
    v0 = D_08AF07B8 - (1976);
    f12 = f12 * f0;
    f0 = BITSF(LD32(v0+1976));
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    f1 = BITSF(LD32(v1+1980));
    if (cnd_) { goto L_08A5FC9C; }
    goto L_08A5FC98;
L_08A5FC98:;
    f0 = f12;
    goto L_08A5FC9C;
L_08A5FC9C:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08A5FCAC; }
    goto L_08A5FCAC;
L_08A5FCAC:;
    f12 = f1;
    f0 = func_08A5FC5C(f12);
    goto L_08A5FCB4;
L_08A5FCB4:;
    sp = sp + 16;
    return f0;
}

/* 08A5FCC0 */
void func_08A5FCC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5FCC0:;
    sp = sp - 16;
    s1 = a0 + 0;
    func_08A5E1D0(a0);
    goto L_08A5FCD8;
L_08A5FCD8:;
    v0 = D_08B15770 - (22384);
    v0 = v0 + 22384;
    ST32(s1, v0);
    a0 = 20;
    ST32(s1+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FCF0;
L_08A5FCF0:;
    s0 = v0 + 4;
    v0 = 1;
    ST32(s0-4, v0);
    a0 = s0 + 0;
    func_0889635C(a0);
    goto L_08A5FD04;
L_08A5FD04:;
    ST32(s1+8, s0);
    a0 = s0 + 0;
    a1 = 7;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5FD14;
L_08A5FD14:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08A5FD34(a0, a1, 0, 0, 0);
    goto L_08A5FD20;
L_08A5FD20:;
    sp = sp + 16;
    return;
}

/* 08A5FD34 */
void func_08A5FD34(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A5FD34:;
    sp = sp - 32;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A5FD60; }
    goto L_08A5FD4C;
L_08A5FD4C:;
    goto L_08A5FD50;
L_08A5FD50:;
    sp = sp + 32;
    return;
L_08A5FD60:;
    v0 = D_08AF07C0 - (1984);
    f20 = BITSF(LD32(v0+1984));
    a0 = LD32(a0+8);
    a2 = LD32(s0+64);
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, t1, t2, t3, f12, f13);
    goto L_08A5FD7C;
L_08A5FD7C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    a1 = 1;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5FD94;
L_08A5FD94:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+68);
    f12 = BITSF(0);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a1 = 2;
    f13 = f20;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A5FDB4;
L_08A5FDB4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    a1 = 3;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5FDCC;
L_08A5FDCC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    a1 = 4;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5FDE4;
L_08A5FDE4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    a1 = 5;
    f12 = f20;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5FDFC;
L_08A5FDFC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f20;
    a1 = 6;
    f13 = f20;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A5FE14;
L_08A5FE14:;
    goto L_08A5FD50;
}

/* 08A5FE1C */
rv_t func_08A5FE1C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A5FE1C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C310E4 - (4324);
    t1 = D_08C310F4 - (4340);
    t2 = D_08C31104 - (4356);
    a1 = a1 & a0;
    v1 = t0 + 4324;
    a2 = t1 + 4340;
    cnd_ = a1 == 0;
    a3 = t2 + 4356;
    if (cnd_) { goto L_08A5FED4; }
    goto L_08A5FE4C;
L_08A5FE4C:;
    v0 = D_08AF07C4 - (1988);
    f4 = BITSF(LD32(v0+1988));
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
    ST32(t0+4324, FBITS(f2));
    ST32(t1+4340, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4356, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A5FED4;
L_08A5FED4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5FEDC */
rv_t func_08A5FEDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A5FEDC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A5FE1C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FEF0;
L_08A5FEF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A5FEFC */
void func_08A5FEFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A5FEFC:;
    sp = sp - 48;
    s4 = (u32)-1;
    s3 = 2;
    s2 = a0 + 0;
    func_08A5E1D0(a0);
    goto L_08A5FF28;
L_08A5FF28:;
    v0 = D_08B15788 - (22408);
    v0 = v0 + 22408;
    ST32(s2, v0);
    a0 = s2 + 0;
    func_08A5E33C(a0);
    goto L_08A5FF3C;
L_08A5FF3C:;
    a0 = 52;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FF44;
L_08A5FF44:;
    s1 = v0 + 4;
    v0 = 3;
    ST32(s1-4, v0);
    s0 = s1 + 0;
    goto L_08A5FF54;
L_08A5FF54:;
    a0 = s0 + 0;
    s3 = s3 - 1;
    func_0889635C(a0);
    goto L_08A5FF60;
L_08A5FF60:;
    cnd_ = s3 != s4;
    s0 = s0 + 16;
    if (cnd_) { goto L_08A5FF54; }
    goto L_08A5FF68;
L_08A5FF68:;
    ST32(s2+8, s1);
    a0 = s1 + 0;
    a1 = 17;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5FF78;
L_08A5FF78:;
    a0 = LD32(s2+8);
    a1 = 17;
    a0 = a0 + 16;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5FF88;
L_08A5FF88:;
    a0 = LD32(s2+8);
    a1 = 17;
    a0 = a0 + 32;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A5FF98;
L_08A5FF98:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_08A60098(a0, a1, 0, 0, 0);
    goto L_08A5FFA4;
L_08A5FFA4:;
    a0 = s2 + 0;
    a1 = 1;
    func_08A602E4(a0, a1, 0, 0, 0);
    goto L_08A5FFB0;
L_08A5FFB0:;
    a0 = s2 + 0;
    a1 = 2;
    func_08A602DC();
    goto L_08A5FFBC;
L_08A5FFBC:;
    v0 = D_08C29B58 - (-25768);
    v1 = LD32(v0-25768);
    a0 = 0xde350000u;
    a1 = 0x360000u;
    ST32(s2+12, v1);
    a2 = sp + 0;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x34ea;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A5FFE4;
L_08A5FFE4:;
    v0 = D_08AF07CC - (1996);
    f12 = BITSF(LD32(v0+1996));
    a0 = LD32(sp);
    a1 = 0x1e0b0000u;
    a1 = a1 | 0x4e10;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A5FFFC;
L_08A5FFFC:;
    f12 = f0;
    a0 = s2 + 0;
    func_08A69EC4(f12);
    goto L_08A60008;
L_08A60008:;
    sp = sp + 48;
    return;
}

/* 08A60028 */
rv_t func_08A60028(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60028:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60044;
L_08A60044:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A60070; }
    goto L_08A60050;
L_08A60050:;
    v0 = LD32(s0+12);
    a0 = LD32(s0+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60064;
L_08A60064:;
    v0 = 1;
    cnd_ = s1 == v0;
    v0 = D_08C293A9 - (-27735);
    if (cnd_) { goto L_08A60084; }
    goto L_08A60070;
L_08A60070:;
    goto L_08A60074;
L_08A60074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A60084:;
    v1 = LD_U8(v0-27735);
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(FBITS(f0) ^ 0x80000000u); goto L_08A60070; }
    goto L_08A60090;
L_08A60090:;
    goto L_08A60074;
}

/* 08A60098 */
void func_08A60098(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A60098:;
    sp = sp - 32;
    v1 = D_08AF07D4 - (2004);
    v0 = D_08AF07D0 - (2000);
    s1 = a1 << 4;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 0 + 0;
    f22 = BITSF(0);
    f13 = f22;
    f21 = BITSF(LD32(v1+2004));
    f20 = BITSF(LD32(v0+2000));
    a0 = LD32(a0+8);
    a2 = LD32(s0+16);
    f12 = f20;
    a0 = a0 + s1;
    f14 = f21;
    func_08896520(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14);
    goto L_08A600F4;
L_08A600F4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+20);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f22;
    f14 = f21;
    a1 = 1;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A60118;
L_08A60118:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+16);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f22;
    f14 = f21;
    a1 = 2;
    a3 = 0 + 0;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A6013C;
L_08A6013C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+20);
    f14 = f21;
    a0 = a0 + s1;
    a3 = 0 + 0;
    f12 = f20;
    f13 = f22;
    a1 = 3;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A60160;
L_08A60160:;
    v0 = D_08AF07D8 - (2008);
    f21 = BITSF(LD32(v0+2008));
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 5;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60184;
L_08A60184:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 6;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A601A8;
L_08A601A8:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + s1;
    f12 = f22;
    f13 = f20;
    a1 = 8;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A601CC;
L_08A601CC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 9;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A601E8;
L_08A601E8:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 10;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60204;
L_08A60204:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+52);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 11;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60220;
L_08A60220:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 12;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A6023C;
L_08A6023C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 15;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60258;
L_08A60258:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 16;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60274;
L_08A60274:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f22;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 13;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A60298;
L_08A60298:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+28);
    f12 = f22;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 14;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A602BC;
L_08A602BC:;
    sp = sp + 32;
    return;
}

/* 08A602DC */
void func_08A602DC(void)
{
L_08A602DC:;
    return;
}

/* 08A602E4 */
void func_08A602E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A602E4:;
    sp = sp - 32;
    v1 = D_08AF07E0 - (2016);
    v0 = D_08AF07DC - (2012);
    s1 = a1 << 4;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 3;
    f22 = BITSF(0);
    f13 = f22;
    f23 = BITSF(LD32(v1+2016));
    f20 = BITSF(LD32(v0+2012));
    a0 = LD32(a0+8);
    a2 = LD32(s0+20);
    f12 = f20;
    a0 = a0 + s1;
    f14 = f23;
    func_08896520(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14);
    goto L_08A60344;
L_08A60344:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+16);
    f14 = f23;
    a0 = a0 + s1;
    a3 = 0 + 0;
    f12 = f20;
    f13 = f22;
    a1 = 4;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A60368;
L_08A60368:;
    v0 = D_08AF07E4 - (2020);
    f21 = BITSF(LD32(v0+2020));
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 5;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A6038C;
L_08A6038C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+40);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 6;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A603B0;
L_08A603B0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + s1;
    f12 = f22;
    f13 = f20;
    a1 = 13;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A603D4;
L_08A603D4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 9;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A603F0;
L_08A603F0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 10;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A6040C;
L_08A6040C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 12;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60428;
L_08A60428:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+52);
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = a0 + s1;
    f12 = f22;
    f13 = f20;
    a1 = 14;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A6044C;
L_08A6044C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+56);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 15;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60468;
L_08A60468:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 16;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60484;
L_08A60484:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+28);
    f12 = f22;
    a0 = a0 + s1;
    f13 = f23;
    a1 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A604A8;
L_08A604A8:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+32);
    f12 = f22;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A604CC;
L_08A604CC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+36);
    f13 = f20;
    a0 = a0 + s1;
    f12 = f22;
    a1 = 1;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A604F0;
L_08A604F0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f22;
    a0 = a0 + s1;
    f13 = f23;
    a1 = 1;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A60514;
L_08A60514:;
    sp = sp + 32;
    return;
}

/* 08A60538 */
rv_t func_08A60538(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A60538:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31114 - (4372);
    t1 = D_08C31124 - (4388);
    t2 = D_08C31134 - (4404);
    a1 = a1 & a0;
    v1 = t0 + 4372;
    a2 = t1 + 4388;
    cnd_ = a1 == 0;
    a3 = t2 + 4404;
    if (cnd_) { goto L_08A605F0; }
    goto L_08A60568;
L_08A60568:;
    v0 = D_08AF07E8 - (2024);
    f4 = BITSF(LD32(v0+2024));
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
    ST32(t0+4372, FBITS(f2));
    ST32(t1+4388, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4404, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A605F0;
L_08A605F0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A605F8 */
rv_t func_08A605F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A605F8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A60538(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6060C;
L_08A6060C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A60618 */
void func_08A60618(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A60618:;
    sp = sp - 48;
    s4 = (u32)-1;
    s3 = 2;
    s2 = a0 + 0;
    func_08A5E1D0(a0);
    goto L_08A60644;
L_08A60644:;
    v0 = D_08B157A0 - (22432);
    v0 = v0 + 22432;
    ST32(s2, v0);
    a0 = s2 + 0;
    func_08A5E33C(a0);
    goto L_08A60658;
L_08A60658:;
    a0 = 52;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60660;
L_08A60660:;
    s1 = v0 + 4;
    v0 = 3;
    ST32(s1-4, v0);
    s0 = s1 + 0;
    goto L_08A60670;
L_08A60670:;
    a0 = s0 + 0;
    s3 = s3 - 1;
    func_0889635C(a0);
    goto L_08A6067C;
L_08A6067C:;
    cnd_ = s3 != s4;
    s0 = s0 + 16;
    if (cnd_) { goto L_08A60670; }
    goto L_08A60684;
L_08A60684:;
    ST32(s2+8, s1);
    a0 = s1 + 0;
    a1 = 10;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A60694;
L_08A60694:;
    a0 = LD32(s2+8);
    a1 = 10;
    a0 = a0 + 16;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A606A4;
L_08A606A4:;
    a0 = LD32(s2+8);
    a1 = 10;
    a0 = a0 + 32;
    func_0889638C(a0, a1, 0, 0, 0);
    goto L_08A606B4;
L_08A606B4:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_08A60744(a0, a1, 0, 0, 0);
    goto L_08A606C0;
L_08A606C0:;
    a0 = s2 + 0;
    a1 = 1;
    func_08A6088C(a0, a1, 0, 0, 0);
    goto L_08A606CC;
L_08A606CC:;
    a0 = s2 + 0;
    a1 = 2;
    func_08A609F8();
    goto L_08A606D8;
L_08A606D8:;
    v0 = D_08C29B58 - (-25768);
    v1 = LD32(v0-25768);
    a0 = 0xde350000u;
    a1 = 0xd09a0000u;
    ST32(s2+12, v1);
    a2 = sp + 0;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x5036;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60700;
L_08A60700:;
    v0 = D_08AF07F0 - (2032);
    f12 = BITSF(LD32(v0+2032));
    a0 = LD32(sp);
    a1 = 0x1e0b0000u;
    a1 = a1 | 0x4e10;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60718;
L_08A60718:;
    f12 = f0;
    a0 = s2 + 0;
    func_08A69EC4(f12);
    goto L_08A60724;
L_08A60724:;
    sp = sp + 48;
    return;
}

/* 08A60744 */
void func_08A60744(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A60744:;
    sp = sp - 32;
    v1 = D_08AF07F8 - (2040);
    v0 = D_08AF07F4 - (2036);
    s1 = a1 << 4;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 0 + 0;
    f21 = BITSF(0);
    f13 = f21;
    f20 = BITSF(LD32(v0+2036));
    f22 = BITSF(LD32(v1+2040));
    a0 = LD32(a0+8);
    a2 = LD32(s0+16);
    f12 = f20;
    a0 = a0 + s1;
    f14 = f22;
    func_08896520(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14);
    goto L_08A607A0;
L_08A607A0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+20);
    f14 = f22;
    a3 = 0 + 0;
    a0 = a0 + s1;
    f12 = f20;
    f13 = f21;
    a1 = 1;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A607C4;
L_08A607C4:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 3;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A607E0;
L_08A607E0:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 4;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A607FC;
L_08A607FC:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+24);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 6;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A60820;
L_08A60820:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+28);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 7;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A60844;
L_08A60844:;
    a0 = LD32(s0+8);
    v0 = D_08AF07FC - (2044);
    a2 = LD32(s0+40);
    f12 = BITSF(LD32(v0+2044));
    a0 = a0 + s1;
    f13 = f20;
    a1 = 9;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A6086C;
L_08A6086C:;
    sp = sp + 32;
    return;
}

/* 08A6088C */
void func_08A6088C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6088C:;
    sp = sp - 32;
    v0 = D_08AF0800 - (2048);
    a3 = 0 + 0;
    s1 = a1 << 4;
    t0 = 0 + 0;
    s0 = a0 + 0;
    a1 = 0 + 0;
    f21 = BITSF(0);
    f12 = f21;
    f22 = BITSF(LD32(v0+2048));
    a0 = LD32(a0+8);
    a2 = LD32(s0+28);
    f13 = f22;
    a0 = a0 + s1;
    func_08896650(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13);
    goto L_08A608E0;
L_08A608E0:;
    v0 = D_08AF0804 - (2052);
    f20 = BITSF(LD32(v0+2052));
    a0 = LD32(s0+8);
    a2 = LD32(s0+32);
    t0 = 0 + 0;
    a0 = a0 + s1;
    f12 = f21;
    f13 = f20;
    a1 = 0 + 0;
    a3 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A6090C;
L_08A6090C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+20);
    f14 = f22;
    a3 = 0 + 0;
    a0 = a0 + s1;
    f12 = f20;
    f13 = f21;
    a1 = 1;
    func_08896520(a0, a1, a2, a3, 0, 0, 0, f12, f13, f14);
    goto L_08A60930;
L_08A60930:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+48);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 3;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A6094C;
L_08A6094C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+60);
    f12 = f20;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 4;
    func_088966F8(a0, a1, a2, 0, 0, 0, f12, f13);
    goto L_08A60968;
L_08A60968:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+44);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 6;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A6098C;
L_08A6098C:;
    a0 = LD32(s0+8);
    a2 = LD32(s0+52);
    f12 = f21;
    a0 = a0 + s1;
    f13 = f20;
    a1 = 7;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A609B0;
L_08A609B0:;
    a0 = LD32(s0+8);
    v0 = D_08AF0808 - (2056);
    a2 = LD32(s0+40);
    f12 = BITSF(LD32(v0+2056));
    a0 = a0 + s1;
    f13 = f20;
    a1 = 9;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08896650(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13);
    goto L_08A609D8;
L_08A609D8:;
    sp = sp + 32;
    return;
}

/* 08A609F8 */
void func_08A609F8(void)
{
L_08A609F8:;
    return;
}

/* 08A60A00 */
rv_t func_08A60A00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60A00:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60A1C;
L_08A60A1C:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A60A3C; }
    goto L_08A60A28;
L_08A60A28:;
    v0 = LD32(s1+12);
    a0 = LD32(s1+8);
    v0 = v0 << 4;
    a0 = a0 + v0;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60A3C;
L_08A60A3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A60A50 */
rv_t func_08A60A50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A60A50:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31144 - (4420);
    t1 = D_08C31154 - (4436);
    t2 = D_08C31164 - (4452);
    a1 = a1 & a0;
    v1 = t0 + 4420;
    a2 = t1 + 4436;
    cnd_ = a1 == 0;
    a3 = t2 + 4452;
    if (cnd_) { goto L_08A60B08; }
    goto L_08A60A80;
L_08A60A80:;
    v0 = D_08AF080C - (2060);
    f4 = BITSF(LD32(v0+2060));
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
    ST32(t0+4420, FBITS(f2));
    ST32(t1+4436, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4452, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A60B08;
L_08A60B08:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A60B10 */
rv_t func_08A60B10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60B10:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A60A50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60B24;
L_08A60B24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A60B30 */
u32 func_08A60B30(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60B30:;
    sp = sp - 16;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60B44;
L_08A60B44:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_0889ADD0(a0);
    goto L_08A60B50;
L_08A60B50:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A60B64 */
u32 func_08A60B64(void)
{
    u32 v0 = 0;
L_08A60B64:;
    v0 = 1;
    return v0;
}

/* 08A60B6C */
u32 func_08A60B6C(void)
{
    u32 v0 = 0;
L_08A60B6C:;
    v0 = 1;
    return v0;
}

/* 08A60B74 */
u32 func_08A60B74(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A60B74:;
    v0 = D_08B288FC - (-30468);
    v1 = LD_U8(v0-30468);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A60B90; }
    goto L_08A60B84;
L_08A60B84:;
    v0 = D_08B286E4 - (-31004);
    v1 = LD_U8(v0-31004);
    v0 = v1 < 0x1u;
    goto L_08A60B90;
L_08A60B90:;
    v0 = v0 & 0xff;
    return v0;
}

/* 08A60B98 */
rv_t func_08A60B98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60B98:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    { rv_t r_ = func_08A60BB4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60BA8;
L_08A60BA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A60BB4 */
rv_t func_08A60BB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60BB4:;
    sp = sp - 16;
    v0 = D_08C28DC4 - (-29244);
    v1 = LD32(v0-29244);
    v0 = (a0 >> 5) & 0x1;
    v1 = v1 ^ 0x1;
    v1 = 0 < v1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_08A60C68; }
    goto L_08A60BDC;
L_08A60BDC:;
    cnd_ = v0 == 0;
    v0 = a0 & 0x4;
    if (cnd_) { goto L_08A60BF4; }
    goto L_08A60BE4;
L_08A60BE4:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    v0 = a0 & 0x4;
    if (cnd_) { goto L_08A60C5C; }
    goto L_08A60BF4;
L_08A60BF4:;
    cnd_ = v0 == 0;
    v0 = a0 & 0x8;
    if (cnd_) { goto L_08A60C0C; }
    goto L_08A60BFC;
L_08A60BFC:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    v0 = a0 & 0x8;
    if (cnd_) { goto L_08A60C50; }
    goto L_08A60C0C;
L_08A60C0C:;
    cnd_ = v0 != 0;
    v0 = a0 & 0x10;
    if (cnd_) { goto L_08A60C44; }
    goto L_08A60C14;
L_08A60C14:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A60C2C; }
    goto L_08A60C1C;
L_08A60C1C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A60C2C:;
    a0 = D_08AE5C78 - (23672);
    a0 = a0 + 23672;
    goto L_08A60C34;
L_08A60C34:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A60C3C;
L_08A60C3C:;
    v1 = 0 + 0;
    goto L_08A60C1C;
L_08A60C44:;
    a0 = D_08AE5C94 - (23700);
    a0 = a0 + 23700;
    goto L_08A60C34;
L_08A60C50:;
    a0 = D_08AE5CB8 - (23736);
    a0 = a0 + 23736;
    goto L_08A60C34;
L_08A60C5C:;
    a0 = D_08AE5CD4 - (23764);
    a0 = a0 + 23764;
    goto L_08A60C34;
L_08A60C68:;
    a0 = D_08AE5CF0 - (23792);
    a0 = a0 + 23792;
    goto L_08A60C34;
}

/* 08A60C74 */
void func_08A60C74(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A60C74:;
    sp = sp - 16;
    func_08897E54(t1, t2, t3);
    goto L_08A60C84;
L_08A60C84:;
    a0 = D_08AE5D08 - (23816);
    a1 = RS_FADDR(func_08A61004, 0x08A61004u) - (4100);
    a0 = a0 + 23816;
    a1 = a1 + 4100;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60CA0;
L_08A60CA0:;
    a0 = D_08AE5D14 - (23828);
    a1 = RS_FADDR(func_08A6106C, 0x08A6106Cu) - (4204);
    a0 = a0 + 23828;
    a1 = a1 + 4204;
    a2 = 1;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60CBC;
L_08A60CBC:;
    a0 = D_08AE5D20 - (23840);
    a1 = RS_FADDR(func_08A61110, 0x08A61110u) - (4368);
    a0 = a0 + 23840;
    a1 = a1 + 4368;
    a2 = 1;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60CD8;
L_08A60CD8:;
    a0 = D_08AE5D28 - (23848);
    a1 = RS_FADDR(func_08A61248, 0x08A61248u) - (4680);
    a0 = a0 + 23848;
    a1 = a1 + 4680;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60CF4;
L_08A60CF4:;
    a0 = D_08AE5D38 - (23864);
    a1 = RS_FADDR(func_08A612B8, 0x08A612B8u) - (4792);
    a0 = a0 + 23864;
    a1 = a1 + 4792;
    a2 = 1;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60D10;
L_08A60D10:;
    a0 = D_08AE5D48 - (23880);
    a1 = RS_FADDR(func_08A61B1C, 0x08A61B1Cu) - (6940);
    a0 = a0 + 23880;
    a1 = a1 + 6940;
    a2 = 1;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60D2C;
L_08A60D2C:;
    a0 = D_08AE5D64 - (23908);
    a1 = RS_FADDR(func_08A6154C, 0x08A6154Cu) - (5452);
    a0 = a0 + 23908;
    a1 = a1 + 5452;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60D48;
L_08A60D48:;
    a0 = D_08AE5D78 - (23928);
    a1 = RS_FADDR(func_08A615B4, 0x08A615B4u) - (5556);
    a0 = a0 + 23928;
    a1 = a1 + 5556;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60D64;
L_08A60D64:;
    a0 = D_08AE5D9C - (23964);
    a1 = RS_FADDR(func_08A615F8, 0x08A615F8u) - (5624);
    a0 = a0 + 23964;
    a1 = a1 + 5624;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60D80;
L_08A60D80:;
    a0 = D_08AE5DBC - (23996);
    a1 = RS_FADDR(func_08A61700, 0x08A61700u) - (5888);
    a0 = a0 + 23996;
    a1 = a1 + 5888;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60D9C;
L_08A60D9C:;
    a0 = D_08AE5DD4 - (24020);
    a1 = RS_FADDR(func_088AD5D0, 0x088AD5D0u) - (-10800);
    a0 = a0 + 24020;
    a1 = a1 - 10800;
    a2 = 1;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60DB8;
L_08A60DB8:;
    a0 = D_08AE5DF0 - (24048);
    a1 = RS_FADDR(func_08A61BE0, 0x08A61BE0u) - (7136);
    a0 = a0 + 24048;
    a1 = a1 + 7136;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60DD4;
L_08A60DD4:;
    a0 = D_08AE5E04 - (24068);
    a1 = RS_FADDR(func_08A61CC0, 0x08A61CC0u) - (7360);
    a0 = a0 + 24068;
    a1 = a1 + 7360;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60DF0;
L_08A60DF0:;
    a0 = D_08AE5E1C - (24092);
    a1 = RS_FADDR(func_08A61D10, 0x08A61D10u) - (7440);
    a0 = a0 + 24092;
    a1 = a1 + 7440;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60E0C;
L_08A60E0C:;
    a0 = D_08AE5E38 - (24120);
    a1 = RS_FADDR(func_08A61D54, 0x08A61D54u) - (7508);
    a0 = a0 + 24120;
    a1 = a1 + 7508;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60E28;
L_08A60E28:;
    a0 = D_08AE5E50 - (24144);
    a1 = RS_FADDR(func_08A61D98, 0x08A61D98u) - (7576);
    a0 = a0 + 24144;
    a1 = a1 + 7576;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60E44;
L_08A60E44:;
    a0 = D_08AE5E64 - (24164);
    a1 = RS_FADDR(func_08A61DDC, 0x08A61DDCu) - (7644);
    a0 = a0 + 24164;
    a1 = a1 + 7644;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60E60;
L_08A60E60:;
    a0 = D_08AE5E78 - (24184);
    a1 = RS_FADDR(func_08A61E20, 0x08A61E20u) - (7712);
    a0 = a0 + 24184;
    a1 = a1 + 7712;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60E7C;
L_08A60E7C:;
    a0 = D_08AE5E8C - (24204);
    a1 = RS_FADDR(func_08A61E64, 0x08A61E64u) - (7780);
    a0 = a0 + 24204;
    a1 = a1 + 7780;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60E98;
L_08A60E98:;
    a0 = D_08AE5EA4 - (24228);
    a1 = RS_FADDR(func_08A61EA8, 0x08A61EA8u) - (7848);
    a0 = a0 + 24228;
    a1 = a1 + 7848;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60EB4;
L_08A60EB4:;
    a0 = D_08AE5EC0 - (24256);
    a1 = RS_FADDR(func_08A61EEC, 0x08A61EECu) - (7916);
    a0 = a0 + 24256;
    a1 = a1 + 7916;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60ED0;
L_08A60ED0:;
    a0 = D_08AE5EDC - (24284);
    a1 = RS_FADDR(func_08A61FE0, 0x08A61FE0u) - (8160);
    a0 = a0 + 24284;
    a1 = a1 + 8160;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A60EEC;
L_08A60EEC:;
    func_08978CEC();
    goto L_08A60EF4;
L_08A60EF4:;
    func_08974080();
    goto L_08A60EFC;
L_08A60EFC:;
    func_08A3B738(0, 0, 0);
    goto L_08A60F04;
L_08A60F04:;
    func_08A29690(0, 0, 0);
    goto L_08A60F0C;
L_08A60F0C:;
    func_08A3C110(0, 0, 0);
    goto L_08A60F14;
L_08A60F14:;
    func_088AD584(0, 0, 0);
    goto L_08A60F1C;
L_08A60F1C:;
    sp = sp + 16;
    return;
}

/* 08A60F28 */
u32 func_08A60F28(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A60F28:;
    sp = sp - 32;
    s5 = a0 + 0;
    s2 = 0 + 0;
    goto L_08A60F50;
L_08A60F50:;
    a0 = s2 + 0;
    v0 = func_08973540(a0);
    goto L_08A60F58;
L_08A60F58:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60F64;
L_08A60F64:;
    a0 = s2 + 0;
    s4 = v0 + 0;
    v0 = func_089734CC(a0);
    goto L_08A60F70;
L_08A60F70:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60F7C;
L_08A60F7C:;
    a0 = LD32(s5);
    a1 = s1 + 0;
    a2 = s4 + 0;
    s3 = v0 + 0;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60F90;
L_08A60F90:;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = s3 + 0;
    if (cnd_) { goto L_08A60FF8; }
    goto L_08A60F9C;
L_08A60F9C:;
    a0 = LD32(s5);
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A60FA4;
L_08A60FA4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s5); goto L_08A60FE4; }
    goto L_08A60FAC;
L_08A60FAC:;
    s2 = s2 + 1;
    v0 = s2 < 0x6u;
    cnd_ = v0 != 0;
    a0 = 6;
    if (cnd_) { goto L_08A60F50; }
    goto L_08A60FBC;
L_08A60FBC:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A60FE4:;
    v1 = s3 << 1;
    goto L_08A60FE8;
L_08A60FE8:;
    v0 = v0 + v1;
    a0 = s2 + 0;
    ST32(s5, v0);
    goto L_08A60FBC;
L_08A60FF8:;
    v0 = LD32(s5);
    v1 = s4 << 1;
    goto L_08A60FE8;
}

/* 08A61004 */
rv_t func_08A61004(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61004:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE5EF4 - (24308);
    v0 = v0 & 0xff;
    a1 = 1;
    cnd_ = v0 != 0;
    a0 = a0 + 24308;
    if (cnd_) { goto L_08A6105C; }
    goto L_08A61024;
L_08A61024:;
    v0 = D_08C28DC8 - (-29240);
    v1 = D_08B1BB3C - (-17604);
    ST32(v0-29240, a1);
    v0 = D_08B1BB38 - (-17608);
    ST32(v1-17604, a1);
    v1 = D_08C2932C - (-27860);
    ST8(v0-17608, a1);
    v0 = D_08C2932D - (-27859);
    ST8(v1-27860, a1);
    ST8(v0-27859, a1);
    goto L_08A61050;
L_08A61050:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6105C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61064;
L_08A61064:;
    goto L_08A61050;
}

/* 08A6106C */
rv_t func_08A6106C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6106C:;
    sp = sp - 48;
    t0 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AE5F14 - (24340);
    a0 = a0 + 24340;
    v0 = a1 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A610A8; }
    goto L_08A61090;
L_08A61090:;
    a1 = D_08AE5F4C - (24396);
    a1 = a1 + 24396;
    s0 = 1;
    a2 = 32;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A610C4; }
    goto L_08A610A8;
L_08A610A8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A610B0;
L_08A610B0:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A610C4:;
    v0 = D_08B1BB3C - (-17604);
    v1 = D_08B1BB38 - (-17608);
    a0 = sp + 0;
    ST32(v0-17604, s0);
    v0 = D_08C2932C - (-27860);
    ST8(v1-17608, 0);
    v1 = D_08C2932D - (-27859);
    ST8(v1-27859, s0);
    ST8(v0-27860, s0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A610EC;
L_08A610EC:;
    a0 = sp + 0;
    func_08979750(a0, 0, 0, 0);
    goto L_08A610F4;
L_08A610F4:;
    a0 = 1;
    func_08A27530(a0);
    goto L_08A610FC;
L_08A610FC:;
    a0 = 3;
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61104;
L_08A61104:;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, s0);
    goto L_08A610B0;
}

/* 08A61110 */
rv_t func_08A61110(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_08A61110:;
    sp = sp - 288;
    a2 = a2 & 0xff;
    a1 = a1 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A61234; }
    goto L_08A61130;
L_08A61130:;
    cnd_ = a1 == 0;
    if (cnd_) { a1 = D_08AE5F4C - (24396); goto L_08A611B0; }
    goto L_08A61138;
L_08A61138:;
    a0 = D_08AE5F50 - (24400);
    a1 = D_08C292E4 - (-27932);
    a0 = a0 + 24400;
    a1 = a1 - 27932;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6114C;
L_08A6114C:;
    a0 = D_08AE5F64 - (24420);
    goto L_08A61150;
L_08A61150:;
    a0 = a0 + 24420;
    s2 = D_08C291F4 - (-28172);
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6115C;
L_08A6115C:;
    v0 = LD32(s2-28172);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A61194; }
    goto L_08A61168;
L_08A61168:;
    s1 = D_08AE5F74 - (24436);
    goto L_08A6116C;
L_08A6116C:;
    a0 = s0 + 0;
    v0 = func_08978738(a0);
    goto L_08A61174;
L_08A61174:;
    a1 = v0 + 0;
    a0 = s1 + 24436;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61180;
L_08A61180:;
    v0 = LD32(s2-28172);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6116C; }
    goto L_08A61194;
L_08A61194:;
    goto L_08A61198;
L_08A61198:;
    goto L_08A6119C;
L_08A6119C:;
    v0 = 1;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08A611B0:;
    a1 = a1 + 24396;
    t0 = a0 + 0;
    a2 = 256;
    a0 = sp + 0;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A611C8;
L_08A611C8:;
    a0 = sp + 0;
    a1 = sp + 256;
    a2 = 2;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A611D8;
L_08A611D8:;
    cnd_ = v0 == 0;
    a0 = D_08AE5F7C - (24444);
    if (cnd_) { goto L_08A61224; }
    goto L_08A611E0;
L_08A611E0:;
    a0 = LD32(sp+256);
    v0 = func_08978704(a0);
    goto L_08A611E8;
L_08A611E8:;
    a0 = v0 + 0;
    func_08978924(a0, 0, 0, 0);
    goto L_08A611F0;
L_08A611F0:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A61198; }
    goto L_08A61200;
L_08A61200:;
    v0 = D_08C28D80 - (-29312);
    a0 = LD32(v0-29312);
    v1 = 4;
    cnd_ = a0 != v1;
    if (cnd_) { goto L_08A6119C; }
    goto L_08A61214;
L_08A61214:;
    { u64 r_ = func_08970C9C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6121C;
L_08A6121C:;
    goto L_08A61198;
L_08A61224:;
    a0 = a0 + 24444;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6122C;
L_08A6122C:;
    a0 = D_08AE5F64 - (24420);
    goto L_08A61150;
L_08A61234:;
    a0 = D_08AE5F8C - (24460);
    a0 = a0 + 24460;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61240;
L_08A61240:;
    goto L_08A61198;
}

/* 08A61248 */
rv_t func_08A61248(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61248:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE5FAC - (24492);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 24492;
    if (cnd_) { goto L_08A612A8; }
    goto L_08A61264;
L_08A61264:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A61288; }
    goto L_08A61274;
L_08A61274:;
    v0 = D_08C28D80 - (-29312);
    a0 = LD32(v0-29312);
    v1 = 4;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A61298; }
    goto L_08A61288;
L_08A61288:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61298:;
    { u64 r_ = func_08970C74(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A612A0;
L_08A612A0:;
    a1 = 1;
    goto L_08A61288;
L_08A612A8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A612B0;
L_08A612B0:;
    a1 = 1;
    goto L_08A61288;
}

/* 08A612B8 */
rv_t func_08A612B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_08A612B8:;
    sp = sp - 288;
    a2 = a2 & 0xff;
    a1 = a1 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A612E0; }
    goto L_08A612D8;
L_08A612D8:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD_U16(a0); goto L_08A61314; }
    goto L_08A612E0;
L_08A612E0:;
    a0 = D_08AE5FF8 - (24568);
    a0 = a0 + 24568;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A612EC;
L_08A612EC:;
    a0 = D_08AE6048 - (24648);
    a0 = a0 + 24648;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A612F8;
L_08A612F8:;
    v0 = 1;
    goto L_08A612FC;
L_08A612FC:;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08A61314:;
    a1 = a0 + 0;
    ST32(sp+256, a0);
    v0 = v1 ^ 0x20;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A61368; }
    goto L_08A61334;
L_08A61334:;
    v1 = LD_U8(a1);
    v0 = a2 + sp;
    a0 = a1 + 2;
    ST32(sp+256, a0);
    ST8(v0, v1);
    a1 = LD32(sp+256);
    v0 = LD_U16(a1);
    v1 = v0 ^ 0x20;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A61334; }
    goto L_08A61368;
L_08A61368:;
    v0 = sp + a2;
    ST8(v0, 0);
    s2 = 6;
    s1 = 2;
    a0 = LD32(sp+256);
    a1 = LD_U16(a0);
    cnd_ = a1 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A613A8; }
    goto L_08A61388;
L_08A61388:;
    v0 = 32;
    cnd_ = a1 == v0;
    a1 = 32;
    if (cnd_) { goto L_08A61534; }
    goto L_08A61394;
L_08A61394:;
    a0 = sp + 256;
    v0 = func_08A60F28(a0);
    goto L_08A6139C;
L_08A6139C:;
    a0 = LD32(sp+256);
    s2 = v0 + 0;
    a1 = LD_U16(a0);
    goto L_08A613A8;
L_08A613A8:;
    cnd_ = a1 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A613D8; }
    goto L_08A613B0;
L_08A613B0:;
    v0 = 32;
    cnd_ = a1 == v0;
    a1 = 32;
    if (cnd_) { goto L_08A6151C; }
    goto L_08A613BC;
L_08A613BC:;
    a1 = D_08AE609C - (24732);
    a1 = a1 + 24732;
    a2 = 7;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A613CC;
L_08A613CC:;
    cnd_ = v0 != 0;
    a0 = LD32(sp+256);
    if (cnd_) { goto L_08A614C0; }
    goto L_08A613D4;
L_08A613D4:;
    s1 = 0 + 0;
    goto L_08A613D8;
L_08A613D8:;
    v0 = D_08C292BC - (-27972);
    goto L_08A613DC;
L_08A613DC:;
    s0 = LD32(v0-27972);
    cnd_ = s0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A61498; }
    goto L_08A613E8;
L_08A613E8:;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08A61488; }
    goto L_08A613F0;
L_08A613F0:;
    v0 = 6;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08A61478; }
    goto L_08A613FC;
L_08A613FC:;
    a0 = sp + 0;
    goto L_08A61400;
L_08A61400:;
    a1 = sp + 260;
    a2 = s1 + 0;
    { u64 r_ = func_08978800(a0, a1, a2, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6140C;
L_08A6140C:;
    a0 = D_08AE60AC - (24748);
    cnd_ = v0 == 0;
    a0 = a0 + 24748;
    if (cnd_) { goto L_08A61468; }
    goto L_08A61418;
L_08A61418:;
    a0 = LD32(sp+260);
    a1 = s2 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_089798B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61428;
L_08A61428:;
    a0 = D_08AE60C0 - (24768);
    cnd_ = v0 == 0;
    a0 = a0 + 24768;
    if (cnd_) { goto L_08A61468; }
    goto L_08A61434;
L_08A61434:;
    a0 = s2 + 0;
    v0 = func_089735B4(a0);
    goto L_08A6143C;
L_08A6143C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08A27038(a0);
    goto L_08A61448;
L_08A61448:;
    a0 = D_08AE60E4 - (24804);
    a0 = a0 + 24804;
    a2 = s0 + 0;
    a3 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61460;
L_08A61460:;
    v0 = 1;
    goto L_08A612FC;
L_08A61468:;
    a1 = sp + 0;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61470;
L_08A61470:;
    v0 = 0 + 0;
    goto L_08A612FC;
L_08A61478:;
    a0 = s0 - 1;
    v0 = func_08979878(a0);
    goto L_08A61480;
L_08A61480:;
    s2 = v0 + 0;
    goto L_08A613FC;
L_08A61488:;
    a0 = s0 - 1;
    v0 = func_08979898(a0);
    goto L_08A61490;
L_08A61490:;
    s1 = v0 + 0;
    goto L_08A613F0;
L_08A61498:;
    cnd_ = s1 == v0;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08A614B8; }
    goto L_08A614A0;
L_08A614A0:;
    v0 = 6;
    cnd_ = s2 != v0;
    if (cnd_) { a0 = sp + 0; goto L_08A61400; }
    goto L_08A614AC;
L_08A614AC:;
    v0 = D_08C29328 - (-27864);
    s2 = LD32(v0-27864);
    goto L_08A613FC;
L_08A614B8:;
    s1 = LD32(v0-17572);
    goto L_08A614A0;
L_08A614C0:;
    a1 = D_08AE6114 - (24852);
    a1 = a1 + 24852;
    a2 = 5;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A614D0;
L_08A614D0:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A613D8; }
    goto L_08A614D8;
L_08A614D8:;
    a0 = LD32(sp+256);
    a1 = D_08AE6120 - (24864);
    a1 = a1 + 24864;
    a2 = 7;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A614EC;
L_08A614EC:;
    cnd_ = v0 != 0;
    a0 = LD32(sp+256);
    if (cnd_) { goto L_08A614FC; }
    goto L_08A614F4;
L_08A614F4:;
    s1 = 1;
    goto L_08A613D8;
L_08A614FC:;
    a1 = D_08AE6130 - (24880);
    a1 = a1 + 24880;
    a2 = 3;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6150C;
L_08A6150C:;
    cnd_ = v0 != 0;
    v0 = D_08C292BC - (-27972);
    if (cnd_) { goto L_08A613DC; }
    goto L_08A61514;
L_08A61514:;
    s1 = 1;
    goto L_08A613DC;
L_08A6151C:;
    a0 = v1 + 2;
    v0 = LD_U16(a0);
    cnd_ = v0 == a1;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A6151C; }
    goto L_08A6152C;
L_08A6152C:;
    ST32(sp+256, a0);
    goto L_08A613BC;
L_08A61534:;
    a0 = v1 + 2;
    v0 = LD_U16(a0);
    cnd_ = v0 == a1;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A61534; }
    goto L_08A61544;
L_08A61544:;
    ST32(sp+256, a0);
    goto L_08A61394;
}

/* 08A6154C */
rv_t func_08A6154C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6154C:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A61568; }
    goto L_08A61560;
L_08A61560:;
    cnd_ = a1 == 0;
    v1 = D_08C292BC - (-27972);
    if (cnd_) { goto L_08A61584; }
    goto L_08A61568;
L_08A61568:;
    a0 = D_08AE6138 - (24888);
    a0 = a0 + 24888;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61574;
L_08A61574:;
    v0 = 1;
    goto L_08A61578;
L_08A61578:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61584:;
    v0 = LD32(v1-27972);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE6168 - (24936); goto L_08A615A4; }
    goto L_08A61594;
L_08A61594:;
    { u64 r_ = func_089799EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6159C;
L_08A6159C:;
    v0 = 1;
    goto L_08A61578;
L_08A615A4:;
    a0 = a0 + 24936;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A615AC;
L_08A615AC:;
    v0 = 0 + 0;
    goto L_08A61578;
}

/* 08A615B4 */
rv_t func_08A615B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A615B4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE618C - (24972);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 24972;
    if (cnd_) { goto L_08A615E0; }
    goto L_08A615D0;
L_08A615D0:;
    func_08979AD8();
    goto L_08A615D8;
L_08A615D8:;
    a0 = D_08AE61BC - (25020);
    a0 = a0 + 25020;
    goto L_08A615E0;
L_08A615E0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A615E8;
L_08A615E8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A615F8 */
rv_t func_08A615F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A615F8:;
    sp = sp - 32;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A616F4; }
    goto L_08A6161C;
L_08A6161C:;
    v0 = D_08C292BC - (-27972);
    s3 = LD32(v0-27972);
    a0 = D_08AE61E0 - (25056);
    cnd_ = s3 == 0;
    a0 = a0 + 25056;
    if (cnd_) { goto L_08A616E4; }
    goto L_08A61630;
L_08A61630:;
    a0 = D_08AE6200 - (25088);
    a0 = a0 + 25088;
    a1 = s3 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61640;
L_08A61640:;
    cnd_ = s3 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A616AC; }
    goto L_08A61648;
L_08A61648:;
    s4 = D_08AE6218 - (25112);
    goto L_08A6164C;
L_08A6164C:;
    a0 = s2 + 0;
    v0 = func_08979858(a0);
    goto L_08A61654;
L_08A61654:;
    a0 = v0 + 0;
    v0 = func_08978738(a0);
    goto L_08A6165C;
L_08A6165C:;
    a0 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_08979878(a0);
    goto L_08A61668;
L_08A61668:;
    a0 = v0 + 0;
    v0 = func_089735B4(a0);
    goto L_08A61670;
L_08A61670:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08979898(a0);
    goto L_08A6167C;
L_08A6167C:;
    a0 = v0 + 0;
    v0 = func_08A27038(a0);
    goto L_08A61684;
L_08A61684:;
    t0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s0 + 0;
    a0 = s4 + 25112;
    s2 = s2 + 1;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A616A0;
L_08A616A0:;
    v0 = s2 < s3;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A6164C; }
    goto L_08A616AC;
L_08A616AC:;
    v0 = D_08C292C0 - (-27968);
    a1 = LD32(v0-27968);
    a0 = D_08AE6230 - (25136);
    a0 = a0 + 25136;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A616C0;
L_08A616C0:;
    goto L_08A616C4;
L_08A616C4:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A616E4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A616EC;
L_08A616EC:;
    goto L_08A616C4;
L_08A616F4:;
    a0 = D_08AE624C - (25164);
    a0 = a0 + 25164;
    goto L_08A616E4;
}

/* 08A61700 */
rv_t func_08A61700(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A61700:;
    sp = sp - 64;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A61B10; }
    goto L_08A61730;
L_08A61730:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    s1 = 0 < v1;
    cnd_ = s1 == 0;
    v0 = D_08B2BB84 - (-17532);
    if (cnd_) { goto L_08A61940; }
    goto L_08A61744;
L_08A61744:;
    s4 = LD32(v0-17532);
    a0 = D_08AE6278 - (25208);
    cnd_ = s4 == 0;
    a0 = a0 + 25208;
    if (cnd_) { goto L_08A6186C; }
    goto L_08A61754;
L_08A61754:;
    s7 = D_08AE6298 - (25240);
    s0 = s7 + 25240;
    a0 = s0 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61764;
L_08A61764:;
    a1 = D_08AE62E0 - (25312);
    a0 = D_08AE62E8 - (25320);
    a1 = a1 + 25312;
    a0 = a0 + 25320;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61778;
L_08A61778:;
    a0 = s0 + 0;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61780;
L_08A61780:;
    cnd_ = s4 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A61868; }
    goto L_08A61788;
L_08A61788:;
    s6 = D_08C2C664 - (-14748);
    s5 = D_08AE6310 - (25360);
    goto L_08A61790;
L_08A61790:;
    a0 = s3 + 0;
    v0 = func_088AD218(a0);
    goto L_08A61798;
L_08A61798:;
    s1 = v0 + 0;
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = s6 - 14748;
    if (cnd_) { goto L_08A618F8; }
    goto L_08A617A8;
L_08A617A8:;
    v0 = LD32(v1+4);
    v1 = D_08C2C664 - (-14748);
    a0 = LD32(v1-14748);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { s0 = 0 + 0; goto L_08A617F0; }
    goto L_08A617D0;
L_08A617D0:;
    a0 = LD32(a1);
    goto L_08A617D4;
L_08A617D4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A61920; }
    goto L_08A617E0;
L_08A617E0:;
    a1 = LD32(a1+4);
    goto L_08A617E4;
L_08A617E4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A617D4; }
    goto L_08A617EC;
L_08A617EC:;
    s0 = 0 + 0;
    goto L_08A617F0;
L_08A617F0:;
    cnd_ = s0 == 0;
    v0 = D_08AE6330 - (25392);
    if (cnd_) { goto L_08A618F8; }
    goto L_08A617F8;
L_08A617F8:;
    a0 = LD32(s0+172);
    v1 = a0 < 0x8u;
    cnd_ = v1 == 0;
    s2 = v0 + 25392;
    if (cnd_) { goto L_08A6182C; }
    goto L_08A61808;
L_08A61808:;
    v1 = D_08AE63D4 - (25556);
    v0 = a0 << 2;
    v1 = v1 + 25556;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A61824u: goto L_08A61824; case 0x08A618A4u: goto L_08A618A4; case 0x08A618B0u: goto L_08A618B0; case 0x08A618BCu: goto L_08A618BC; case 0x08A618C8u: goto L_08A618C8; case 0x08A618D4u: goto L_08A618D4; case 0x08A618E0u: goto L_08A618E0; case 0x08A618ECu: goto L_08A618EC; default: rs_break(0, 0x08a6181c); }
L_08A61824:;
    v0 = D_08AE6338 - (25400);
    s2 = v0 + 25400;
    goto L_08A6182C;
L_08A6182C:;
    v1 = LD32(s0);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6183C;
L_08A6183C:;
    t0 = (u32)(s32)LD_S16(s0+42);
    a3 = (u32)(s32)LD_S16(s0+40);
    a0 = s5 + 25360;
    a1 = v0 + 0;
    a2 = s1 + 0;
    t1 = s2 + 0;
    goto L_08A61854;
L_08A61854:;
    s3 = s3 + 1;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6185C;
L_08A6185C:;
    v0 = s3 < s4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A61790; }
    goto L_08A61868;
L_08A61868:;
    a0 = s7 + 25240;
    goto L_08A6186C;
L_08A6186C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61874;
L_08A61874:;
    goto L_08A61878;
L_08A61878:;
    v0 = 1;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A618A4:;
    v0 = D_08AE6340 - (25408);
    s2 = v0 + 25408;
    goto L_08A6182C;
L_08A618B0:;
    v0 = D_08AE634C - (25420);
    s2 = v0 + 25420;
    goto L_08A6182C;
L_08A618BC:;
    v0 = D_08AE635C - (25436);
    s2 = v0 + 25436;
    goto L_08A6182C;
L_08A618C8:;
    v0 = D_08AE6364 - (25444);
    s2 = v0 + 25444;
    goto L_08A6182C;
L_08A618D4:;
    v0 = D_08AE636C - (25452);
    s2 = v0 + 25452;
    goto L_08A6182C;
L_08A618E0:;
    v0 = D_08AE6378 - (25464);
    s2 = v0 + 25464;
    goto L_08A6182C;
L_08A618EC:;
    v0 = D_08AE6384 - (25476);
    s2 = v0 + 25476;
    goto L_08A6182C;
L_08A618F8:;
    a0 = s1 + 0;
    v0 = func_08A636E4(a0);
    goto L_08A61900;
L_08A61900:;
    t1 = D_08AE6394 - (25492);
    a0 = s5 + 25360;
    a1 = v0 + 0;
    a2 = s1 + 0;
    t1 = t1 + 25492;
    a3 = 0 + 0;
    t0 = 0 + 0;
    goto L_08A61854;
L_08A61920:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A617E4; }
    goto L_08A6192C;
L_08A6192C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A617E0; }
    goto L_08A61938;
L_08A61938:;
    goto L_08A617F0;
L_08A61940:;
    s7 = D_08AE6298 - (25240);
    s0 = s7 + 25240;
    a0 = s0 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61950;
L_08A61950:;
    a1 = D_08AE62E0 - (25312);
    a0 = D_08AE62E8 - (25320);
    a1 = a1 + 25312;
    a0 = a0 + 25320;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61964;
L_08A61964:;
    a0 = s0 + 0;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6196C;
L_08A6196C:;
    a3 = D_08C29F04 - (-24828);
    v1 = a3 - 24828;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    a0 = s1 < a2;
    ST32(v1+8, v0);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A619E4; }
    goto L_08A6199C;
L_08A6199C:;
    a3 = LD32(a3-24828);
    goto L_08A619A0;
L_08A619A0:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08A619D4; }
    goto L_08A619B8;
L_08A619B8:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A619E8; }
    goto L_08A619C8;
L_08A619C8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A619B8; }
    goto L_08A619D4;
L_08A619D4:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08A619A0; }
    goto L_08A619E4;
L_08A619E4:;
    v1 = LD32(sp+8);
    goto L_08A619E8;
L_08A619E8:;
    cnd_ = v1 == 0;
    s1 = D_08AE6310 - (25360);
    if (cnd_) { goto L_08A61A28; }
    goto L_08A619F0;
L_08A619F0:;
    s2 = D_08AE63A0 - (25504);
    s0 = LD32(v1);
    goto L_08A619F8;
L_08A619F8:;
    a0 = sp + 0;
    a1 = 1;
    func_08AD13BC(a0, a1);
    goto L_08A61A04;
L_08A61A04:;
    v0 = LD_U8(s0+96);
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A61A20; }
    goto L_08A61A10;
L_08A61A10:;
    v0 = LD32(s0+72);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A61AD8; }
    goto L_08A61A20;
L_08A61A20:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08A619F8; }
    goto L_08A61A28;
L_08A61A28:;
    a0 = s7 + 25240;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61A30;
L_08A61A30:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A61874; }
    goto L_08A61A44;
L_08A61A44:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A61874; }
    goto L_08A61A50;
L_08A61A50:;
    v0 = LD32(s1);
    goto L_08A61A54;
L_08A61A54:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A61AA8; }
    goto L_08A61A68;
L_08A61A68:;
    v0 = LD_U8(s0+8);
    goto L_08A61A6C;
L_08A61A6C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A61AD0; }
    goto L_08A61A74;
L_08A61A74:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A61AC0; }
    goto L_08A61A7C;
L_08A61A7C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A61A84;
L_08A61A84:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61A90;
L_08A61A90:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A61A9C;
L_08A61A9C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A61A6C; }
    goto L_08A61AA4;
L_08A61AA4:;
    v1 = LD32(s1+4);
    goto L_08A61AA8;
L_08A61AA8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A61A54; }
    goto L_08A61AB8;
L_08A61AB8:;
    goto L_08A61878;
L_08A61AC0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A61A84;
L_08A61AD0:;
    s0 = LD32(s0+4);
    goto L_08A61A9C;
L_08A61AD8:;
    a0 = s0 + 0;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61AE0;
L_08A61AE0:;
    a0 = LD32(s0);
    t0 = (u32)(s32)LD_S16(s0+18);
    a3 = (u32)(s32)LD_S16(s0+16);
    v1 = LD32(a0-12);
    a1 = v0 + 0;
    a0 = s1 + 25360;
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    t1 = s2 + 25504;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61B08;
L_08A61B08:;
    v1 = LD32(sp+8);
    goto L_08A61A20;
L_08A61B10:;
    a0 = D_08AE63A4 - (25508);
    a0 = a0 + 25508;
    goto L_08A6186C;
}

/* 08A61B1C */
rv_t func_08A61B1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A61B1C:;
    sp = sp - 32;
    a2 = a2 & 0xff;
    a1 = a1 & 0xff;
    cnd_ = a2 != 0;
    ST32(sp, a0);
    if (cnd_) { goto L_08A61B40; }
    goto L_08A61B38;
L_08A61B38:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A61B6C; }
    goto L_08A61B40;
L_08A61B40:;
    v0 = func_08978CCC();
    goto L_08A61B48;
L_08A61B48:;
    a0 = D_08AE63F4 - (25588);
    a0 = a0 + 25588;
    goto L_08A61B50;
L_08A61B50:;
    a1 = v0 + 0;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61B58;
L_08A61B58:;
    goto L_08A61B60;
L_08A61B60:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A61B6C:;
    a0 = sp + 0;
    v0 = func_08A60F28(a0);
    goto L_08A61B74;
L_08A61B74:;
    a0 = v0 + 0;
    v0 = 6;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = D_08AE6404 - (25604); goto L_08A61BA0; }
    goto L_08A61B84;
L_08A61B84:;
    func_08978CB4(a0);
    goto L_08A61B8C;
L_08A61B8C:;
    v0 = func_08978CCC();
    goto L_08A61B94;
L_08A61B94:;
    a0 = D_08AE6418 - (25624);
    a0 = a0 + 25624;
    goto L_08A61B50;
L_08A61BA0:;
    a0 = a0 + 25604;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61BA8;
L_08A61BA8:;
    a0 = D_08AE642C - (25644);
    a0 = a0 + 25644;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61BB4;
L_08A61BB4:;
    s0 = 0 + 0;
    goto L_08A61BB8;
L_08A61BB8:;
    a0 = s0 + 0;
    v0 = func_08973540(a0);
    goto L_08A61BC0;
L_08A61BC0:;
    a0 = v0 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61BCC;
L_08A61BCC:;
    v0 = s0 < 0x6u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A61BB8; }
    goto L_08A61BD8;
L_08A61BD8:;
    goto L_08A61B60;
}

/* 08A61BE0 */
rv_t func_08A61BE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61BE0:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE6448 - (25672);
    v0 = v0 & 0xff;
    a0 = a0 + 25672;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A61CB0; }
    goto L_08A61C08;
L_08A61C08:;
    v0 = D_08C2C3E0 - (-15392);
    v1 = LD32(v0-15392);
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 0x8001;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A61C98; }
    goto L_08A61C28;
L_08A61C28:;
    s2 = LD32(v1+20);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61C30;
L_08A61C30:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A61C94; }
    goto L_08A61C38;
L_08A61C38:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A61C70; }
    goto L_08A61C44;
L_08A61C44:;
    func_0897A7BC(a0);
    goto L_08A61C4C;
L_08A61C4C:;
    ST32(s0+4, s2);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61C54;
L_08A61C54:;
    ST32(s0+8, v0);
    v0 = D_08AF0810 - (2064);
    v1 = LD32(s0+28);
    f0 = BITSF(LD32(v0+2064));
    v1 = v1 | 0x1;
    ST32(s0+28, v1);
    ST32(s0+12, FBITS(f0));
    goto L_08A61C70;
L_08A61C70:;
    v0 = LD32(s1+28);
    ST32(s1+4, s2);
    a0 = s1 + 0;
    v0 = v0 | 0x1;
    ST32(s1, s2);
    a1 = 1;
    a2 = 1;
    ST32(s1+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61C94;
L_08A61C94:;
    v0 = 1;
    goto L_08A61C98;
L_08A61C98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61CB0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61CB8;
L_08A61CB8:;
    v0 = 1;
    goto L_08A61C98;
}

/* 08A61CC0 */
rv_t func_08A61CC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61CC0:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE6458 - (25688);
    v0 = v0 & 0xff;
    v1 = D_08C2CB48 - (-13496);
    cnd_ = v0 != 0;
    a0 = a0 + 25688;
    if (cnd_) { goto L_08A61D00; }
    goto L_08A61CE0;
L_08A61CE0:;
    v0 = LD_U8(v1-13496);
    v0 = v0 ^ 0x1;
    v0 = 0 < v0;
    ST8(v1-13496, v0);
    goto L_08A61CF4;
L_08A61CF4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61D00:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61D08;
L_08A61D08:;
    goto L_08A61CF4;
}

/* 08A61D10 */
rv_t func_08A61D10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61D10:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE6480 - (25728);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25728;
    if (cnd_) { goto L_08A61D44; }
    goto L_08A61D2C;
L_08A61D2C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61D34;
L_08A61D34:;
    goto L_08A61D38;
L_08A61D38:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61D44:;
    { u64 r_ = func_08979C58(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61D4C;
L_08A61D4C:;
    goto L_08A61D38;
}

/* 08A61D54 */
rv_t func_08A61D54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61D54:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE64A4 - (25764);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25764;
    if (cnd_) { goto L_08A61D88; }
    goto L_08A61D70;
L_08A61D70:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61D78;
L_08A61D78:;
    goto L_08A61D7C;
L_08A61D7C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61D88:;
    { u64 r_ = func_089B9C04(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61D90;
L_08A61D90:;
    goto L_08A61D7C;
}

/* 08A61D98 */
rv_t func_08A61D98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61D98:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE64C0 - (25792);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25792;
    if (cnd_) { goto L_08A61DCC; }
    goto L_08A61DB4;
L_08A61DB4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61DBC;
L_08A61DBC:;
    goto L_08A61DC0;
L_08A61DC0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61DCC:;
    { u64 r_ = func_089B4C78(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61DD4;
L_08A61DD4:;
    goto L_08A61DC0;
}

/* 08A61DDC */
rv_t func_08A61DDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61DDC:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE64D0 - (25808);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25808;
    if (cnd_) { goto L_08A61E10; }
    goto L_08A61DF8;
L_08A61DF8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61E00;
L_08A61E00:;
    goto L_08A61E04;
L_08A61E04:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61E10:;
    { u64 r_ = func_089AF948(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61E18;
L_08A61E18:;
    goto L_08A61E04;
}

/* 08A61E20 */
rv_t func_08A61E20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61E20:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE64E4 - (25828);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25828;
    if (cnd_) { goto L_08A61E54; }
    goto L_08A61E3C;
L_08A61E3C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61E44;
L_08A61E44:;
    goto L_08A61E48;
L_08A61E48:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61E54:;
    { u64 r_ = func_0899F1E4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61E5C;
L_08A61E5C:;
    goto L_08A61E48;
}

/* 08A61E64 */
rv_t func_08A61E64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61E64:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE64F8 - (25848);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25848;
    if (cnd_) { goto L_08A61E98; }
    goto L_08A61E80;
L_08A61E80:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61E88;
L_08A61E88:;
    goto L_08A61E8C;
L_08A61E8C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61E98:;
    { u64 r_ = func_089B9DF8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61EA0;
L_08A61EA0:;
    goto L_08A61E8C;
}

/* 08A61EA8 */
rv_t func_08A61EA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61EA8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE6514 - (25876);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 25876;
    if (cnd_) { goto L_08A61EDC; }
    goto L_08A61EC4;
L_08A61EC4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61ECC;
L_08A61ECC:;
    goto L_08A61ED0;
L_08A61ED0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61EDC:;
    { u64 r_ = func_089CC320(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61EE4;
L_08A61EE4:;
    goto L_08A61ED0;
}

/* 08A61EEC */
rv_t func_08A61EEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61EEC:;
    sp = sp - 16;
    s0 = a0 & 0xff;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61F00;
L_08A61F00:;
    a1 = v0 + 0;
    a0 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_08A61FB4; }
    goto L_08A61F14;
L_08A61F14:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A61F58; }
    goto L_08A61F38;
L_08A61F38:;
    a0 = LD32(v1);
    goto L_08A61F3C;
L_08A61F3C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A61FC0; }
    goto L_08A61F48;
L_08A61F48:;
    v1 = LD32(v1+4);
    goto L_08A61F4C;
L_08A61F4C:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08A61F3C; }
    goto L_08A61F54;
L_08A61F54:;
    a0 = 0 + 0;
    goto L_08A61F58;
L_08A61F58:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08AE653C - (25916); goto L_08A61FB8; }
    goto L_08A61F60;
L_08A61F60:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = D_08AE6558 - (25944); goto L_08A61FAC; }
    goto L_08A61F68;
L_08A61F68:;
    v0 = LD32(a0+96);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08AE65A0 - (26016); goto L_08A61FA4; }
    goto L_08A61F78;
L_08A61F78:;
    v0 = func_089826E8(a0, 0, 0, 0);
    goto L_08A61F80;
L_08A61F80:;
    a0 = D_08AE65C0 - (26048);
    a0 = a0 + 26048;
    goto L_08A61F88;
L_08A61F88:;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A61F90;
L_08A61F90:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A61FA4:;
    a0 = a0 + 26016;
    goto L_08A61F88;
L_08A61FAC:;
    a0 = a0 + 25944;
    goto L_08A61F88;
L_08A61FB4:;
    a0 = D_08AE653C - (25916);
    goto L_08A61FB8;
L_08A61FB8:;
    a0 = a0 + 25916;
    goto L_08A61F88;
L_08A61FC0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A61F4C; }
    goto L_08A61FCC;
L_08A61FCC:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A61F4C; }
    goto L_08A61FD8;
L_08A61FD8:;
    goto L_08A61F58;
}

/* 08A61FE0 */
rv_t func_08A61FE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A61FE0:;
    sp = sp - 16;
    s1 = a0 & 0xff;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A61FF8;
L_08A61FF8:;
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6200C;
L_08A6200C:;
    a0 = D_08AE653C - (25916);
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = a0 + 25916;
    if (cnd_) { goto L_08A620AC; }
    goto L_08A6201C;
L_08A6201C:;
    cnd_ = s1 != 0;
    a0 = D_08AE65E0 - (26080);
    if (cnd_) { goto L_08A620F8; }
    goto L_08A62024;
L_08A62024:;
    a2 = LD32(s0+28);
    goto L_08A62028;
L_08A62028:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22840;
    if (cnd_) { goto L_08A620CC; }
    goto L_08A62038;
L_08A62038:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A62088; }
    goto L_08A6205C;
L_08A6205C:;
    a0 = LD32(a1);
    goto L_08A62060;
L_08A62060:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A620D8; }
    goto L_08A62078;
L_08A62078:;
    a1 = LD32(a1+4);
    goto L_08A6207C;
L_08A6207C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A62060; }
    goto L_08A62084;
L_08A62084:;
    a0 = 0 + 0;
    goto L_08A62088;
L_08A62088:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08AE65F8 - (26104); goto L_08A620D0; }
    goto L_08A62090;
L_08A62090:;
    a0 = LD32(a0+236);
    cnd_ = a0 == 0;
    a1 = 99;
    if (cnd_) { goto L_08A620CC; }
    goto L_08A6209C;
L_08A6209C:;
    a2 = 0 + 0;
    func_08985954(a0, a1, a2);
    goto L_08A620A4;
L_08A620A4:;
    a0 = D_08AE6614 - (26132);
    a0 = a0 + 26132;
    goto L_08A620AC;
L_08A620AC:;
    { rv_t r_ = func_08898108(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A620B4;
L_08A620B4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A620CC:;
    a0 = D_08AE65F8 - (26104);
    goto L_08A620D0;
L_08A620D0:;
    a0 = a0 + 26104;
    goto L_08A620AC;
L_08A620D8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A6207C; }
    goto L_08A620E4;
L_08A620E4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A6207C; }
    goto L_08A620F0;
L_08A620F0:;
    goto L_08A62088;
L_08A620F8:;
    a0 = a0 + 26080;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62100;
L_08A62100:;
    a2 = LD32(s0+28);
    goto L_08A62028;
}

/* 08A62108 */
rv_t func_08A62108(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A62108:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31174 - (4468);
    t1 = D_08C31184 - (4484);
    t2 = D_08C31194 - (4500);
    a1 = a1 & a0;
    v1 = t0 + 4468;
    a2 = t1 + 4484;
    cnd_ = a1 == 0;
    a3 = t2 + 4500;
    if (cnd_) { goto L_08A621C0; }
    goto L_08A62138;
L_08A62138:;
    v0 = D_08AF0814 - (2068);
    f4 = BITSF(LD32(v0+2068));
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
    ST32(t0+4468, FBITS(f2));
    ST32(t1+4484, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4500, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A621C0;
L_08A621C0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A621C8 */
rv_t func_08A621C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A621C8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A62108(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A621DC;
L_08A621DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A621E8 */
void func_08A621E8(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A621E8:;
    a0 = D_08C2933C - (-27844);
    sp = sp - 16;
    a0 = a0 - 27844;
    func_08A69F30(a0);
    goto L_08A621FC;
L_08A621FC:;
    sp = sp + 16;
    return;
}

/* 08A62208 */
void func_08A62208(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62208:;
    sp = sp - 16;
    v0 = D_08C2933C - (-27844);
    v1 = D_08B1CA20 - (-13792);
    a0 = v0 - 27844;
    v0 = LD_U8(v1-13792);
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_08A62268; }
    goto L_08A62228;
L_08A62228:;
    v0 = LD_U8(a0+6);
    cnd_ = v0 == 0;
    v0 = D_08C311D4 - (4564);
    if (cnd_) { goto L_08A6226C; }
    goto L_08A62234;
L_08A62234:;
    v0 = D_08C311D8 - (4568);
    v1 = LD_U8(v0+4568);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A62258; }
    goto L_08A62244;
L_08A62244:;
    func_08A621E8();
    goto L_08A6224C;
L_08A6224C:;
    goto L_08A62250;
L_08A62250:;
    sp = sp + 16;
    return;
L_08A62258:;
    func_08A6A05C(a0);
    goto L_08A62260;
L_08A62260:;
    goto L_08A62250;
L_08A62268:;
    v0 = D_08C311D4 - (4564);
    goto L_08A6226C;
L_08A6226C:;
    ST32(v0+4564, v1);
    goto L_08A6224C;
}

/* 08A62274 */
u64 func_08A62274(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62274:;
    a0 = D_08C2933C - (-27844);
    sp = sp - 16;
    a0 = a0 - 27844;
    { u64 r_ = func_08A6A1DC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62288;
L_08A62288:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A62294 */
u64 func_08A62294(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62294:;
    sp = sp - 16;
    { u64 r_ = func_08A6A234(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A622A4;
L_08A622A4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A622B0 */
void func_08A622B0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A622B0:;
    sp = sp - 16;
    s0 = D_08B1CA14 - (-13804);
    a3 = 0x7fff0000u;
    a0 = LD32(s0-13804);
    a1 = D_08C311D4 - (4564);
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0x80000000u;
    a3 = a3 | 0xffff;
    a1 = a1 + 4564;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A622E8;
L_08A622E8:;
    s1 = D_08B1CA1C - (-13796);
    a0 = LD32(s0-13804);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A622F4;
L_08A622F4:;
    a0 = LD32(s0-13804);
    a1 = D_08AE66E0 - (26336);
    a1 = a1 + 26336;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A62304;
L_08A62304:;
    v1 = D_08B1CA18 - (-13800);
    a0 = LD32(v1-13800);
    a1 = D_08B1CA20 - (-13792);
    a1 = a1 - 13792;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62320;
L_08A62320:;
    a0 = LD32(s1-13796);
    a1 = D_08C311D8 - (4568);
    a1 = a1 + 4568;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62338;
L_08A62338:;
    a0 = LD32(s1-13796);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A62340;
L_08A62340:;
    sp = sp + 16;
    return;
}

/* 08A62354 */
rv_t func_08A62354(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A62354:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C311A4 - (4516);
    t1 = D_08C311B4 - (4532);
    t2 = D_08C311C4 - (4548);
    a1 = a1 & a0;
    v1 = t0 + 4516;
    a2 = t1 + 4532;
    cnd_ = a1 == 0;
    a3 = t2 + 4548;
    if (cnd_) { goto L_08A6240C; }
    goto L_08A62384;
L_08A62384:;
    v0 = D_08AF0818 - (2072);
    f4 = BITSF(LD32(v0+2072));
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
    ST32(t0+4516, FBITS(f2));
    ST32(t1+4532, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4548, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A6240C;
L_08A6240C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A62414 */
rv_t func_08A62414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62414:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A62354(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62428;
L_08A62428:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A62434 */
u32 func_08A62434(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62434:;
    sp = sp - 16;
    v0 = func_08A62930();
    goto L_08A62444;
L_08A62444:;
    sp = sp + 16;
    return v0;
}

/* 08A62450 */
u32 func_08A62450(void)
{
    u32 v0 = 0;
L_08A62450:;
    v0 = 1611;
    return v0;
}

/* 08A62458 */
u32 func_08A62458(void)
{
    u32 v0 = 0;
L_08A62458:;
    v0 = 10996;
    return v0;
}

/* 08A62460 */
u32 func_08A62460(void)
{
    u32 v0 = 0;
L_08A62460:;
    v0 = D_08AE6738 - (26424);
    v0 = v0 + 26424;
    return v0;
}

/* 08A6246C */
u32 func_08A6246C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
L_08A6246C:;
    v1 = D_08C3120C - (4620);
    v0 = 102;
    a1 = v1 + 4620;
    ST8(v1+4620, v0);
    v1 = 121;
    a0 = 114;
    ST8(a1+1, v1);
    v1 = 80;
    v0 = a1 + 0;
    ST8(a1+4, a0);
    a0 = 69;
    ST8(a1+5, v1);
    v1 = 116;
    ST8(a1+3, a0);
    ST8(a1+2, v1);
    ST8(a1+6, 0);
    return v0;
}

/* 08A624B0 */
u32 func_08A624B0(void)
{
    u32 v0 = 0;
L_08A624B0:;
    v0 = 0 + 0;
    return v0;
}

/* 08A624B8 */
u32 func_08A624B8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 272);
L_08A624B8:;
    sp = sp - 272;
    a0 = sp + 0;
    a1 = 256;
    s0 = D_08C31214 - (4628);
    s0 = s0 + 4628;
    func_08978C4C(a0, a1);
    goto L_08A624D8;
L_08A624D8:;
    a1 = D_08AE6744 - (26436);
    a0 = s0 + 0;
    a1 = a1 + 26436;
    a2 = 128;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A624F4;
L_08A624F4:;
    v0 = s0 + 0;
    sp = sp + 272;
    return v0;
}

/* 08A62508 */
u32 func_08A62508(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62508:;
    sp = sp - 16;
    v0 = D_08C28F60 - (-28832);
    a0 = LD32(v0-28832);
    v0 = func_08973540(a0);
    goto L_08A6251C;
L_08A6251C:;
    sp = sp + 16;
    return v0;
}

/* 08A62528 */
u32 func_08A62528(void)
{
    u32 v0 = 0;
L_08A62528:;
    v0 = 3;
    return v0;
}

/* 08A62530 */
u32 func_08A62530(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62530:;
    sp = sp - 16;
    v0 = func_08A62558();
    goto L_08A62540;
L_08A62540:;
    v1 = v0 + 0;
    v0 = 2;
    if (v1 == 0) v0 = 0;
    sp = sp + 16;
    return v0;
}

/* 08A62558 */
u32 func_08A62558(void)
{
    u32 v0 = 0;
L_08A62558:;
    v0 = 1;
    return v0;
}

/* 08A62560 */
u32 func_08A62560(void)
{
    u32 v0 = 0, v1 = 0;
L_08A62560:;
    v1 = D_08C28F54 - (-28844);
    v0 = LD32(v1-28844);
    return v0;
}

/* 08A6256C */
u32 func_08A6256C(void)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A6256C:;
    v0 = D_08C28F58 - (-28840);
    f1 = BITSF(LD32(v0-28840));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AF081C - (2076);
    if (cnd_) { goto L_08A625A0; }
    goto L_08A62588;
L_08A62588:;
    f0 = BITSF(LD32(v0+2076));
    f0 = f1 + f0;
    goto L_08A62590;
L_08A62590:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    return v0;
L_08A625A0:;
    f0 = BITSF(LD32(v0+2076));
    f0 = f1 - f0;
    goto L_08A62590;
}

/* 08A625AC */
u32 func_08A625AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A625AC:;
    a1 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 24436;
    if (cnd_) { goto L_08A62610; }
    goto L_08A625BC;
L_08A625BC:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24436);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A62600; }
    goto L_08A625E0;
L_08A625E0:;
    v1 = LD32(a1);
    goto L_08A625E4;
L_08A625E4:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A62618; }
    goto L_08A625F0;
L_08A625F0:;
    a1 = LD32(a1+4);
    goto L_08A625F4;
L_08A625F4:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08A625E4; }
    goto L_08A625FC;
L_08A625FC:;
    v1 = 0 + 0;
    goto L_08A62600;
L_08A62600:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A62610; }
    goto L_08A62608;
L_08A62608:;
    v0 = (u32)(s32)LD_S16(v1+40);
    return v0;
L_08A62610:;
    v0 = 0 + 0;
    return v0;
L_08A62618:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A625F4; }
    goto L_08A62624;
L_08A62624:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A625F4; }
    goto L_08A62630;
L_08A62630:;
    goto L_08A62600;
}

/* 08A62638 */
u32 func_08A62638(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62638:;
    a1 = a0 + 0;
    a0 = D_08C2A08C - (-24436);
    sp = sp - 16;
    a0 = a0 - 24436;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62654;
L_08A62654:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A62660; }
    goto L_08A6265C;
L_08A6265C:;
    v1 = (u32)(s32)LD_S16(v0+42);
    goto L_08A62660;
L_08A62660:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A62670 */
u32 func_08A62670(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62670:;
    a1 = a0 + 0;
    a0 = D_08C2A08C - (-24436);
    sp = sp - 16;
    a0 = a0 - 24436;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6268C;
L_08A6268C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A626A0; }
    goto L_08A62694;
L_08A62694:;
    a0 = LD32(v0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6269C;
L_08A6269C:;
    v1 = v0 + 0;
    goto L_08A626A0;
L_08A626A0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A626B0 */
u32 func_08A626B0(void)
{
    u32 v0 = 0;
L_08A626B0:;
    v0 = 0 + 0;
    return v0;
}

/* 08A626B8 */
u32 func_08A626B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A626B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A62558();
    goto L_08A626CC;
L_08A626CC:;
    cnd_ = v0 == 0;
    v0 = D_08AE674C - (26444);
    if (cnd_) { goto L_08A626F4; }
    goto L_08A626D4;
L_08A626D4:;
    cnd_ = (s32)s0 < 0;
    v0 = v0 + 26444;
    if (cnd_) { goto L_08A626F8; }
    goto L_08A626DC;
L_08A626DC:;
    v0 = func_08A62530();
    goto L_08A626E4;
L_08A626E4:;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A62708; }
    goto L_08A626F0;
L_08A626F0:;
    v0 = D_08AE674C - (26444);
    goto L_08A626F4;
L_08A626F4:;
    v0 = v0 + 26444;
    goto L_08A626F8;
L_08A626F8:;
    goto L_08A626FC;
L_08A626FC:;
    sp = sp + 16;
    return v0;
L_08A62708:;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62710;
L_08A62710:;
    a0 = v0 + 0;
    v0 = func_08A26F1C(a0);
    goto L_08A62718;
L_08A62718:;
    goto L_08A626FC;
}

/* 08A62720 */
u32 func_08A62720(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62720:;
    a0 = D_08C292E4 - (-27932);
    sp = sp - 16;
    a0 = a0 - 27932;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62734;
L_08A62734:;
    sp = sp + 16;
    return v0;
}

/* 08A62740 */
u32 func_08A62740(void)
{
    u32 v0 = 0, v1 = 0;
L_08A62740:;
    v1 = D_08C29328 - (-27864);
    v0 = LD32(v1-27864);
    return v0;
}

/* 08A6274C */
u32 func_08A6274C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A6274C:;
    cnd_ = a0 == 0;
    v1 = 60;
    if (cnd_) { goto L_08A62764; }
    goto L_08A62754;
L_08A62754:;
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = 61;
    if (cnd_) { goto L_08A62764; }
    goto L_08A62760;
L_08A62760:;
    v1 = 0 + 0;
    goto L_08A62764;
L_08A62764:;
    v0 = v1 + 0;
    return v0;
}

/* 08A6276C */
u32 func_08A6276C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A6276C:;
    v0 = D_08AE6754 - (26452);
    cnd_ = a0 == 0;
    v1 = v0 + 26452;
    if (cnd_) { goto L_08A62790; }
    goto L_08A62778;
L_08A62778:;
    v1 = D_08AE6764 - (26468);
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = v1 + 26468;
    if (cnd_) { goto L_08A62790; }
    goto L_08A62788;
L_08A62788:;
    v0 = D_08AE6768 - (26472);
    v1 = v0 + 26472;
    goto L_08A62790;
L_08A62790:;
    v0 = v1 + 0;
    return v0;
}

/* 08A62798 */
u32 func_08A62798(void)
{
    u32 v0 = 0;
L_08A62798:;
    v0 = 2;
    return v0;
}

/* 08A627A0 */
u64 func_08A627A0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A627A0:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = 60;
    cnd_ = v1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A627E8; }
    goto L_08A627B8;
L_08A627B8:;
    v0 = 61;
    cnd_ = v1 == v0;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08A627D4; }
    goto L_08A627C4;
L_08A627C4:;
    v0 = 0 + 0;
    goto L_08A627C8;
L_08A627C8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A627D4:;
    a1 = LD32(v0-17572);
    goto L_08A627D8;
L_08A627D8:;
    { u64 r_ = func_08A7D28C(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A627E0;
L_08A627E0:;
    v0 = 1;
    goto L_08A627C8;
L_08A627E8:;
    v0 = D_08C29338 - (-27848);
    a1 = LD_U8(v0-27848);
    goto L_08A627D8;
}

/* 08A627F4 */
u32 func_08A627F4(void)
{
    u32 v0 = 0;
L_08A627F4:;
    v0 = 100;
    return v0;
}

/* 08A627FC */
void func_08A627FC(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A627FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = a1 + 0;
    v0 = func_088A26F8(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A6281C;
L_08A6281C:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_088A26BC(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A62828;
L_08A62828:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_08979B58(a0, a1, a2, 0, 0, 0);
    goto L_08A62838;
L_08A62838:;
    sp = sp + 16;
    return;
}

/* 08A62850 */
rv_t func_08A62850(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A62850:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C311DC - (4572);
    t1 = D_08C311EC - (4588);
    t2 = D_08C311FC - (4604);
    a1 = a1 & a0;
    v1 = t0 + 4572;
    a2 = t1 + 4588;
    cnd_ = a1 == 0;
    a3 = t2 + 4604;
    if (cnd_) { goto L_08A62908; }
    goto L_08A62880;
L_08A62880:;
    v0 = D_08AF0820 - (2080);
    f4 = BITSF(LD32(v0+2080));
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
    ST32(t0+4572, FBITS(f2));
    ST32(t1+4588, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4604, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A62908;
L_08A62908:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A62910 */
rv_t func_08A62910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62910:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A62850(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62924;
L_08A62924:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A62930 */
u32 func_08A62930(void)
{
    u32 v0 = 0;
L_08A62930:;
    v0 = 3413;
    return v0;
}

/* 08A62938 */
u32 func_08A62938(void)
{
    u32 v0 = 0;
L_08A62938:;
    v0 = 0xde40000u;
    v0 = v0 | 0xdb7b;
    return v0;
}

/* 08A62944 */
void func_08A62944(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62944:;
    sp = sp - 16;
    s0 = D_08B2AEA8 - (-20824);
    a0 = 100;
    v1 = LD32(s0-20824);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A62978; }
    goto L_08A62960;
L_08A62960:;
    a0 = v1 + 0;
    func_08979B14(a0);
    goto L_08A62968;
L_08A62968:;
    sp = sp + 16;
    return;
L_08A62978:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62980;
L_08A62980:;
    ST32(s0-20824, v0);
    v1 = D_08B2AEAC - (-20820);
    a0 = 100;
    ST32(v1-20820, a0);
    v1 = v0 + 0;
    goto L_08A62960;
}

/* 08A62998 */
u32 func_08A62998(void)
{
    u32 v0 = 0;
L_08A62998:;
    v0 = 52;
    return v0;
}

/* 08A629A0 */
void func_08A629A0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08A629A0:;
    sp = sp - 80;
    t3 = D_08B25AC0 - (23232);
    t5 = t3 + 23232;
    v1 = D_08B15FAC - (24492);
    t0 = D_08C2933C - (-27844);
    t1 = LD32(t3+23232);
    t2 = LD32(t5+4);
    t4 = LD32(v1+24492);
    v0 = (u32)((s32)t1 >> 16);
    t1 = t1 << 16;
    t1 = t1 + v0;
    t1 = t1 + t2;
    a1 = t1 >> 1;
    v0 = 20;
    { u32 x_ = a1, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08C2932D - (-27859);
    v1 = LD_U8(v0-27859);
    s0 = a0 + 0;
    a1 = D_08AE676C - (26476);
    t0 = t0 - 27844;
    t2 = t2 + t1;
    ST32(t5+4, t2);
    a1 = a1 + 26476;
    t0 = t0 + 8;
    ST32(t3+23232, t1);
    a2 = 21;
    a3 = 1;
    a0 = a0 + 8;
    v0 = ~(0 | t4);
    ST32(s0+4, t4);
    t6 = hi;
    cnd_ = v1 == 0;
    ST32(s0, t6);
    if (cnd_) { goto L_08A62A88; }
    goto L_08A62A2C;
L_08A62A2C:;
    a1 = D_08AE6774 - (26484);
    t0 = D_08B2AC68 - (-21400);
    a1 = a1 + 26484;
    t0 = t0 - 21400;
    a0 = sp + 0;
    cnd_ = v0 != 0;
    a2 = 31;
    if (cnd_) { goto L_08A62A68; }
    goto L_08A62A48;
L_08A62A48:;
    t0 = D_08C2933C - (-27844);
    a1 = D_08AE677C - (26492);
    t0 = t0 - 27844;
    a1 = a1 + 26492;
    t0 = t0 + 8;
    a0 = sp + 0;
    a2 = 31;
    a3 = 1;
    goto L_08A62A68;
L_08A62A68:;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62A70;
L_08A62A70:;
    a1 = D_08AE676C - (26476);
    a0 = s0 + 8;
    a2 = 21;
    a3 = 1;
    t0 = sp + 0;
    a1 = a1 + 26476;
    goto L_08A62A88;
L_08A62A88:;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62A90;
L_08A62A90:;
    sp = sp + 80;
    return;
}

/* 08A62AA0 */
u32 func_08A62AA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A62AA0:;
    v0 = LD_U16(a0+8);
    ST32(a1, 0);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A62ABC; }
    goto L_08A62AB0;
L_08A62AB0:;
    v0 = 5;
    ST32(a1, v0);
    v1 = 0 + 0;
    goto L_08A62ABC;
L_08A62ABC:;
    v0 = v1 + 0;
    return v0;
}

/* 08A62AC4 */
void func_08A62AC4(u32 a0, u32 a2, u32 a3, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A62AC4:;
    sp = sp - 32;
    a1 = a3 + 0;
    v0 = LD32(a1);
    a3 = LD32(a3+4);
    t0 = LD32(a0+4);
    v1 = LD32(a0);
    a1 = a1 + 8;
    a0 = a2 + 0;
    a2 = v0 + 0;
    ST32(sp, v1);
    ST32(sp+4, t0);
    func_08A6357C(a0, a1, a2, a3, t3);
    goto L_08A62AF8;
L_08A62AF8:;
    sp = sp + 32;
    return;
}

/* 08A62B04 */
void func_08A62B04(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62B04:;
    sp = sp - 16;
    func_08A63674(a0);
    goto L_08A62B14;
L_08A62B14:;
    sp = sp + 16;
    return;
}

/* 08A62B20 */
void func_08A62B20(void)
{
L_08A62B20:;
    return;
}

/* 08A62B28 */
rv_t func_08A62B28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A62B28:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31314 - (4884);
    t1 = D_08C31324 - (4900);
    t2 = D_08C31334 - (4916);
    a1 = a1 & a0;
    v1 = t0 + 4884;
    a2 = t1 + 4900;
    cnd_ = a1 == 0;
    a3 = t2 + 4916;
    if (cnd_) { goto L_08A62BE0; }
    goto L_08A62B58;
L_08A62B58:;
    v0 = D_08AF0824 - (2084);
    f4 = BITSF(LD32(v0+2084));
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
    ST32(t0+4884, FBITS(f2));
    ST32(t1+4900, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4916, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A62BE0;
L_08A62BE0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A62BE8 */
rv_t func_08A62BE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62BE8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A62B28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62BFC;
L_08A62BFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A62C08 */
u32 func_08A62C08(void)
{
    u32 v0 = 0;
L_08A62C08:;
    v0 = 0 + 0;
    return v0;
}

/* 08A62C10 */
u32 func_08A62C10(void)
{
    u32 v0 = 0;
L_08A62C10:;
    v0 = 0 + 0;
    return v0;
}

/* 08A62C18 */
u32 func_08A62C18(void)
{
    u32 v0 = 0;
L_08A62C18:;
    v0 = 999;
    return v0;
}

/* 08A62C20 */
u32 func_08A62C20(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A62C20:;
    sp = sp - 16;
    v0 = func_08A636E4(a0);
    goto L_08A62C30;
L_08A62C30:;
    sp = sp + 16;
    return v0;
}

/* 08A62C3C */
u32 func_08A62C3C(void)
{
    u32 v0 = 0;
L_08A62C3C:;
    v0 = 1;
    return v0;
}

/* 08A62C44 */
u64 func_08A62C44(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A62C44:;
    v0 = D_08C28D80 - (-29312);
    v1 = LD32(v0-29312);
    v0 = 3;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08A62C60; }
    goto L_08A62C58;
L_08A62C58:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A62C60:;
    v0 = LD_U16(a0+16);
    v0 = v0 ^ 0x803f;
    a1 = v0 < 0x1u;
    goto L_08A62C58;
}

/* 08A62C70 */
rv_t func_08A62C70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_08A62C70:;
    sp = sp - 304;
    v0 = 0x8054;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A62DB4; }
    goto L_08A62CA0;
L_08A62CA0:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x806c;
    if (cnd_) { goto L_08A62D68; }
    goto L_08A62CAC;
L_08A62CAC:;
    v0 = 0x803d;
    cnd_ = v1 == v0;
    v0 = 0x803f;
    if (cnd_) { goto L_08A62CF4; }
    goto L_08A62CB8;
L_08A62CB8:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A62CE4; }
    goto L_08A62CC0;
L_08A62CC0:;
    goto L_08A62CC4;
L_08A62CC4:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_08A62CE4:;
    { u64 r_ = func_08A630E0(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62CEC;
L_08A62CEC:;
    goto L_08A62CC4;
L_08A62CF4:;
    v0 = D_08C28D80 - (-29312);
    a0 = LD32(v0-29312);
    v1 = 1;
    cnd_ = a0 == v1;
    a1 = sp + 256;
    if (cnd_) { goto L_08A62CC0; }
    goto L_08A62D08;
L_08A62D08:;
    s0 = LD32(a2+24);
    a2 = (u32)(s32)LD_S8(s0+1);
    a0 = s0 + 2;
    s1 = (u32)(s32)LD_S8(s0);
    { u64 r_ = func_08978800(a0, a1, a2, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62D1C;
L_08A62D1C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A62D58; }
    goto L_08A62D24;
L_08A62D24:;
    a0 = s1 + 0;
    func_08978CB4(a0);
    goto L_08A62D2C;
L_08A62D2C:;
    v0 = (u32)(s32)LD_S8(s0+1);
    a0 = LD32(sp+256);
    v1 = D_08B1BB5C - (-17572);
    ST32(v1-17572, v0);
    v0 = func_08978704(a0);
    goto L_08A62D40;
L_08A62D40:;
    a0 = v0 + 0;
    func_08978924(a0, 0, 0, 0);
    goto L_08A62D48;
L_08A62D48:;
    { u64 r_ = func_08970C9C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62D50;
L_08A62D50:;
    goto L_08A62CC4;
L_08A62D58:;
    a0 = 100;
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62D60;
L_08A62D60:;
    goto L_08A62CC4;
L_08A62D68:;
    cnd_ = v1 == v0;
    v0 = 0x807c;
    if (cnd_) { goto L_08A62D8C; }
    goto L_08A62D70;
L_08A62D70:;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_08A62CC4; }
    goto L_08A62D78;
L_08A62D78:;
    a1 = LD32(a0+20);
    a0 = LD32(a0+24);
    { rv_t r_ = func_08A644A8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62D84;
L_08A62D84:;
    goto L_08A62CC4;
L_08A62D8C:;
    a1 = LD32(a0+24);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A62CC0; }
    goto L_08A62D98;
L_08A62D98:;
    a2 = LD32(a1+24);
    a0 = a1 + 0;
    a1 = a1 + 12;
    t0 = 15;
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62DAC;
L_08A62DAC:;
    goto L_08A62CC4;
L_08A62DB4:;
    s4 = LD32(a0+24);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62DBC;
L_08A62DBC:;
    a3 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    v1 = a0 - 24828;
    cnd_ = a3 == v0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A62E24; }
    goto L_08A62DD4;
L_08A62DD4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { a1 = LD32(s4+4); goto L_08A62E28; }
    goto L_08A62DF8;
L_08A62DF8:;
    a1 = LD32(a2);
    goto L_08A62DFC;
L_08A62DFC:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A63064; }
    goto L_08A62E14;
L_08A62E14:;
    a2 = LD32(a2+4);
    goto L_08A62E18;
L_08A62E18:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08A62DFC; }
    goto L_08A62E20;
L_08A62E20:;
    s5 = 0 + 0;
    goto L_08A62E24;
L_08A62E24:;
    a1 = LD32(s4+4);
    goto L_08A62E28;
L_08A62E28:;
    s0 = a0 - 24828;
    a0 = s0 + 0;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_08A62E38;
L_08A62E38:;
    v1 = 0 < v0;
    s2 = v0 + 0;
    v0 = 0 < s5;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A62CC4; }
    goto L_08A62E50;
L_08A62E50:;
    a1 = LD32(s4);
    a0 = s0 + 0;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_08A62E60;
L_08A62E60:;
    s3 = v0 + 0;
    v0 = v0 ^ s2;
    v0 = 0 < v0;
    v1 = 0 < s3;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v1 = LD_U8(s2+111);
    if (cnd_) { goto L_08A63014; }
    goto L_08A62E7C;
L_08A62E7C:;
    v0 = 65;
    a0 = 391;
    if (v1 == 0) a0 = v0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A62E90;
L_08A62E90:;
    a0 = s3 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62E9C;
L_08A62E9C:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62EA8;
L_08A62EA8:;
    t1 = v0 + 0;
    a0 = sp + 0;
    a1 = s1 + 0;
    t0 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62EC4;
L_08A62EC4:;
    cnd_ = s2 == s5;
    if (cnd_) { v1 = LD32(s3); goto L_08A62FFC; }
    goto L_08A62ECC;
L_08A62ECC:;
    v0 = LD32(s5+64);
    goto L_08A62ED0;
L_08A62ED0:;
    v1 = LD32(s2+64);
    f12 = BITSF(0);
    a0 = 1;
    v1 = v1 ^ v0;
    v0 = 2;
    if (v1 == 0) a0 = v0;
    a1 = sp + 0;
    a2 = 1;
    { rv_t r_ = func_08A4EDDC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62EF4;
L_08A62EF4:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08A62CC4; }
    goto L_08A62EFC;
L_08A62EFC:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62F04;
L_08A62F04:;
    a0 = LD32(s4);
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A62CC4; }
    goto L_08A62F10;
L_08A62F10:;
    { u64 r_ = func_08A08BFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62F18;
L_08A62F18:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A62CC0; }
    goto L_08A62F20;
L_08A62F20:;
    v1 = LD32(v0+24);
    v0 = LD32(s4+12);
    cnd_ = v1 == v0;
    v1 = D_08C2932C - (-27860);
    if (cnd_) { goto L_08A62CC0; }
    goto L_08A62F30;
L_08A62F30:;
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A62FE4; }
    goto L_08A62F40;
L_08A62F40:;
    v1 = LD32(s4+8);
    goto L_08A62F44;
L_08A62F44:;
    v0 = v1 | 0x1;
    cnd_ = v0 == v1;
    a0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A62FCC; }
    goto L_08A62F50;
L_08A62F50:;
    v0 = v1 | 0x2;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08A62F90; }
    goto L_08A62F5C;
L_08A62F5C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A62CC4; }
    goto L_08A62F64;
L_08A62F64:;
    a0 = s0 + 0;
    { u64 r_ = func_08A09270(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A62F6C;
L_08A62F6C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A62CC4; }
    goto L_08A62F74;
L_08A62F74:;
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 47;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62F88;
L_08A62F88:;
    goto L_08A62CC4;
L_08A62F90:;
    a0 = s0 + 0;
    v0 = func_08A0930C(a0, 0, 0, 0);
    goto L_08A62F98;
L_08A62F98:;
    cnd_ = v0 == 0;
    a0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A62FBC; }
    goto L_08A62FA0;
L_08A62FA0:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 41;
    goto L_08A62FAC;
L_08A62FAC:;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62FB4;
L_08A62FB4:;
    goto L_08A62F5C;
L_08A62FBC:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 40;
    goto L_08A62FAC;
L_08A62FCC:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 46;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62FDC;
L_08A62FDC:;
    v1 = LD32(s4+8);
    goto L_08A62F50;
L_08A62FE4:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 36;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A62FF4;
L_08A62FF4:;
    v1 = LD32(s4+8);
    goto L_08A62F44;
L_08A62FFC:;
    v0 = LD32(v1-12);
    v1 = D_08B1C158 - (-16040);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    ST32(v1-16040, a0);
    goto L_08A62ECC;
L_08A63014:;
    v0 = 66;
    a0 = 392;
    if (v1 == 0) a0 = v0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A63028;
L_08A63028:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63034;
L_08A63034:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6304C;
L_08A6304C:;
    cnd_ = s2 != s5;
    if (cnd_) { v0 = LD32(s5+64); goto L_08A62ED0; }
    goto L_08A63054;
L_08A63054:;
    v1 = 999;
    v0 = D_08B1C158 - (-16040);
    ST32(v0-16040, v1);
    goto L_08A62ECC;
L_08A63064:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s5 = a1 + 0;
    if (cnd_) { goto L_08A62E14; }
    goto L_08A63070;
L_08A63070:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A62E18; }
    goto L_08A6307C;
L_08A6307C:;
    a1 = LD32(s4+4);
    goto L_08A62E28;
}

/* 08A63084 */
void func_08A63084(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63084:;
    sp = sp - 16;
    a3 = 0 + 0;
    a0 = 0x803e;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A630A4;
L_08A630A4:;
    s0 = v0 + 0;
    ST32(v0, 0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A630B0;
L_08A630B0:;
    v1 = LD32(s0+28);
    ST32(s0+4, v0);
    a0 = s0 + 0;
    v1 = v1 | 0x1;
    ST32(s0+28, v1);
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A630D0;
L_08A630D0:;
    sp = sp + 16;
    return;
}

/* 08A630E0 */
u64 func_08A630E0(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A630E0:;
    sp = sp - 32;
    a1 = sp + 0;
    s2 = D_08B1BB5C - (-17572);
    v0 = LD32(a0+24);
    s1 = (u32)(s32)LD_S8(v0+1);
    a0 = v0 + 2;
    s0 = (u32)(s32)LD_S8(v0);
    a2 = s1 + 0;
    { u64 r_ = func_08978800(a0, a1, a2, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63114;
L_08A63114:;
    cnd_ = v0 == 0;
    a0 = 100;
    if (cnd_) { goto L_08A63198; }
    goto L_08A6311C;
L_08A6311C:;
    a0 = s0 + 0;
    func_08978CB4(a0);
    goto L_08A63124;
L_08A63124:;
    a0 = s0 + 0;
    func_0897401C(a0);
    goto L_08A6312C;
L_08A6312C:;
    v0 = LD32(s2-17572);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A63174; }
    goto L_08A63138;
L_08A63138:;
    func_08978CB4(a0);
    goto L_08A63140;
L_08A63140:;
    a0 = LD32(sp);
    ST32(s2-17572, s1);
    v0 = func_08978704(a0);
    goto L_08A6314C;
L_08A6314C:;
    a0 = v0 + 0;
    func_08978924(a0, 0, 0, 0);
    goto L_08A63154;
L_08A63154:;
    { u64 r_ = func_08970C9C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6315C;
L_08A6315C:;
    goto L_08A63160;
L_08A63160:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A63174:;
    v0 = D_08C291F8 - (-28168);
    a1 = LD32(v0-28168);
    v1 = LD32(sp);
    cnd_ = a1 != v1;
    if (cnd_) { goto L_08A63138; }
    goto L_08A63188;
L_08A63188:;
    { u64 r_ = func_08970DC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63190;
L_08A63190:;
    goto L_08A63160;
L_08A63198:;
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A631A0;
L_08A631A0:;
    goto L_08A63160;
}

/* 08A631A8 */
rv_t func_08A631A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A631A8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31344 - (4932);
    t1 = D_08C31354 - (4948);
    t2 = D_08C31364 - (4964);
    a1 = a1 & a0;
    v1 = t0 + 4932;
    a2 = t1 + 4948;
    cnd_ = a1 == 0;
    a3 = t2 + 4964;
    if (cnd_) { goto L_08A63260; }
    goto L_08A631D8;
L_08A631D8:;
    v0 = D_08AF0828 - (2088);
    f4 = BITSF(LD32(v0+2088));
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
    ST32(t0+4932, FBITS(f2));
    ST32(t1+4948, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+4964, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A63260;
L_08A63260:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A63268 */
rv_t func_08A63268(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63268:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A631A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6327C;
L_08A6327C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A63288 */
rv_t func_08A63288(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63288:;
    sp = sp - 16;
    v0 = 0x803e;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A633D4; }
    goto L_08A632A0;
L_08A632A0:;
    cnd_ = v0 != 0;
    v0 = 0x8065;
    if (cnd_) { goto L_08A63378; }
    goto L_08A632A8;
L_08A632A8:;
    v0 = 95;
    cnd_ = v1 == v0;
    v0 = 96;
    if (cnd_) { goto L_08A63358; }
    goto L_08A632B4;
L_08A632B4:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+24); goto L_08A632C8; }
    goto L_08A632BC;
L_08A632BC:;
    goto L_08A632C0;
L_08A632C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A632C8:;
    a0 = D_08C2A08C - (-24436);
    a1 = LD32(v0);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_08A632BC; }
    goto L_08A632DC;
L_08A632DC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A63320; }
    goto L_08A63300;
L_08A63300:;
    a0 = LD32(v1);
    goto L_08A63304;
L_08A63304:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A63338; }
    goto L_08A63310;
L_08A63310:;
    v1 = LD32(v1+4);
    goto L_08A63314;
L_08A63314:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08A63304; }
    goto L_08A6331C;
L_08A6331C:;
    a0 = 0 + 0;
    goto L_08A63320;
L_08A63320:;
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_08A632C0; }
    goto L_08A63328;
L_08A63328:;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63330;
L_08A63330:;
    goto L_08A632C0;
L_08A63338:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A63314; }
    goto L_08A63344;
L_08A63344:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A63314; }
    goto L_08A63350;
L_08A63350:;
    goto L_08A63320;
L_08A63358:;
    a0 = LD32(a0+24);
    cnd_ = a0 == 0;
    v0 = 1000;
    if (cnd_) { goto L_08A63368; }
    goto L_08A63364;
L_08A63364:;
    v0 = LD32(a0);
    goto L_08A63368;
L_08A63368:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A0D0C8(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63370;
L_08A63370:;
    goto L_08A632C0;
L_08A63378:;
    cnd_ = v1 == v0;
    v0 = 0x807b;
    if (cnd_) { goto L_08A6339C; }
    goto L_08A63380;
L_08A63380:;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_08A632C0; }
    goto L_08A63388;
L_08A63388:;
    a1 = LD32(a0+20);
    a0 = LD32(a0+24);
    { rv_t r_ = func_08A6454C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63394;
L_08A63394:;
    goto L_08A632C0;
L_08A6339C:;
    a0 = LD32(a0+24);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_08A632C0; }
    goto L_08A633A8;
L_08A633A8:;
    f12 = BITSF(LD32(a0+12));
    f14 = BITSF(LD32(a0+16));
    a1 = LD32(a0+20);
    a2 = LD32(a0+24);
    a3 = LD32(a0+28);
    t0 = LD32(a0+32);
    f13 = f12;
    t1 = 0 + 0;
    { rv_t r_ = func_0897A7E8(a0, a1, a2, a3, t0, t1, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A633CC;
L_08A633CC:;
    goto L_08A632C0;
L_08A633D4:;
    a0 = LD32(a0+4);
    { rv_t r_ = func_08A6379C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A633DC;
L_08A633DC:;
    goto L_08A632C0;
}

/* 08A633E4 */
u32 func_08A633E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A633E4:;
    sp = sp - 32;
    v0 = D_08C313A4 - (5028);
    s5 = v0 + 5028;
    s6 = s5 + 12;
    s4 = a0 + 0;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s0 = 0 + 0;
    s1 = s0 + s5;
    goto L_08A63428;
L_08A63428:;
    v0 = LD32(s1);
    a1 = s0 + s6;
    s2 = s2 + 1;
    a0 = s4 + 0;
    cnd_ = v0 != s3;
    s0 = s0 + 56;
    if (cnd_) { goto L_08A6347C; }
    goto L_08A63440;
L_08A63440:;
    v0 = s2 < 0x8u;
    cnd_ = v0 != 0;
    s1 = s0 + s5;
    if (cnd_) { goto L_08A63428; }
    goto L_08A6344C;
L_08A6344C:;
    v1 = 0 + 0;
    goto L_08A63454;
L_08A63454:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A6347C:;
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63484;
L_08A63484:;
    cnd_ = v0 != 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08A63440; }
    goto L_08A6348C;
L_08A6348C:;
    goto L_08A63454;
}

/* 08A63494 */
void func_08A63494(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08A63494:;
    sp = sp - 128;
    s2 = a0 + 12;
    s3 = LD32(a0);
    a0 = s2 + 0;
    a1 = s3 + 0;
    v0 = func_08A633E4(a0, a1);
    goto L_08A634C8;
L_08A634C8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A634F0; }
    goto L_08A634D0;
L_08A634D0:;
    sp = sp + 128;
    return;
L_08A634F0:;
    s5 = D_08AE678C - (26508);
    a1 = s5 + 26508;
    a0 = sp + 0;
    a2 = 18;
    a3 = 1;
    t0 = s2 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6350C;
L_08A6350C:;
    s0 = 1;
    s1 = sp + 48;
    s4 = D_08AE6794 - (26516);
    t1 = s0 + 0;
    goto L_08A6351C;
L_08A6351C:;
    a2 = 21;
    a3 = 1;
    t0 = sp + 0;
    a0 = s1 + 0;
    a1 = s4 + 26516;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63534;
L_08A63534:;
    a0 = s1 + 0;
    a1 = s3 + 0;
    s0 = s0 + 1;
    v0 = func_08A633E4(a0, a1);
    goto L_08A63544;
L_08A63544:;
    cnd_ = v0 == 0;
    v1 = s0 < 0x9u;
    if (cnd_) { goto L_08A6355C; }
    goto L_08A6354C;
L_08A6354C:;
    cnd_ = v1 != 0;
    t1 = s0 + 0;
    if (cnd_) { goto L_08A6351C; }
    goto L_08A63554;
L_08A63554:;
    goto L_08A634D0;
L_08A6355C:;
    a0 = s2 + 0;
    a1 = s5 + 26508;
    t0 = s1 + 0;
    a2 = 21;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63574;
L_08A63574:;
    goto L_08A634D0;
}

/* 08A6357C */
void func_08A6357C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6357C:;
    sp = sp - 16;
    v0 = D_08C313A4 - (5028);
    t0 = a1 + 0;
    t1 = a2 + 0;
    t2 = a3 + 0;
    v1 = v0 + 5028;
    a1 = 0 + 0;
    a2 = 999;
    s2 = a0 + 0;
    goto L_08A635B0;
L_08A635B0:;
    v0 = LD32(v1);
    a1 = a1 + 1;
    cnd_ = v0 == s2;
    a0 = a1 < 0x8u;
    if (cnd_) { goto L_08A63660; }
    goto L_08A635C0;
L_08A635C0:;
    cnd_ = a0 != 0;
    v1 = v1 + 56;
    if (cnd_) { goto L_08A635B0; }
    goto L_08A635C8;
L_08A635C8:;
    v0 = D_08C313A4 - (5028);
    a2 = v0 + 5028;
    a0 = 0 + 0;
    a1 = 999;
    a3 = a2 + 12;
    s0 = 0 + 0;
    goto L_08A635E0;
L_08A635E0:;
    s1 = s0 + a2;
    v0 = LD32(s1);
    a0 = a0 + 1;
    cnd_ = v0 == a1;
    v1 = a0 < 0x8u;
    if (cnd_) { goto L_08A63614; }
    goto L_08A635F4;
L_08A635F4:;
    cnd_ = v1 != 0;
    s0 = s0 + 56;
    if (cnd_) { goto L_08A635E0; }
    goto L_08A635FC;
L_08A635FC:;
    goto L_08A63600;
L_08A63600:;
    sp = sp + 16;
    return;
L_08A63614:;
    ST32(s1+4, t1);
    s0 = s0 + a3;
    a1 = D_08AE678C - (26508);
    ST32(s1+8, t2);
    a1 = a1 + 26508;
    a2 = 21;
    ST32(s1, s2);
    a3 = 1;
    a0 = s0 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6363C;
L_08A6363C:;
    a0 = s1 + 0;
    func_08A63494(a0);
    goto L_08A63644;
L_08A63644:;
    a0 = D_08AE67A4 - (26532);
    a0 = a0 + 26532;
    a1 = s0 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63658;
L_08A63658:;
    goto L_08A63600;
L_08A63660:;
    ST32(v1, a2);
    ST16(v1+12, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    goto L_08A635C0;
}

/* 08A63674 */
void func_08A63674(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A63674:;
    v0 = D_08C313A4 - (5028);
    a2 = v0 + 5028;
    a1 = 0 + 0;
    goto L_08A63680;
L_08A63680:;
    v0 = LD32(a2);
    a1 = a1 + 1;
    cnd_ = v0 == a0;
    v1 = a1 < 0x8u;
    if (cnd_) { goto L_08A636A0; }
    goto L_08A63690;
L_08A63690:;
    cnd_ = v1 != 0;
    a2 = a2 + 56;
    if (cnd_) { goto L_08A63680; }
    goto L_08A63698;
L_08A63698:;
    return;
L_08A636A0:;
    v0 = 999;
    ST32(a2, v0);
    ST16(a2+12, 0);
    return;
}

/* 08A636B0 */
u32 func_08A636B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A636B0:;
    v0 = D_08C313A4 - (5028);
    a2 = v0 + 5028;
    a1 = 0 + 0;
    goto L_08A636BC;
L_08A636BC:;
    v0 = LD32(a2);
    a1 = a1 + 1;
    cnd_ = v0 == a0;
    v1 = a1 < 0x8u;
    if (cnd_) { goto L_08A636DC; }
    goto L_08A636CC;
L_08A636CC:;
    cnd_ = v1 != 0;
    a2 = a2 + 56;
    if (cnd_) { goto L_08A636BC; }
    goto L_08A636D4;
L_08A636D4:;
    v0 = 0 + 0;
    return v0;
L_08A636DC:;
    v0 = LD32(a2+8);
    return v0;
}

/* 08A636E4 */
u32 func_08A636E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A636E4:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    cnd_ = v1 == 0;
    v0 = v0 + 8;
    if (cnd_) { goto L_08A6373C; }
    goto L_08A636FC;
L_08A636FC:;
    v0 = D_08C313A4 - (5028);
    t0 = v0 + 5028;
    a3 = 0 + 0;
    t1 = t0 + 0;
    a2 = 0 + 0;
    v1 = LD32(t0);
    goto L_08A63714;
L_08A63714:;
    a3 = a3 + 1;
    v0 = t1 + 12;
    v0 = a2 + v0;
    a1 = a3 < 0x8u;
    t0 = t0 + 56;
    cnd_ = v1 == a0;
    a2 = a2 + 56;
    if (cnd_) { goto L_08A6373C; }
    goto L_08A63730;
L_08A63730:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(t0); goto L_08A63714; }
    goto L_08A63738;
L_08A63738:;
    v0 = 0 + 0;
    goto L_08A6373C;
L_08A6373C:;
    return v0;
}

/* 08A63744 */
void func_08A63744(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_08A63744:;
    v0 = D_08C313A4 - (5028);
    v1 = v0 + 5028;
    a0 = 0 + 0;
    a1 = 999;
    goto L_08A63754;
L_08A63754:;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    ST32(v1, a1);
    ST16(v1+12, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 56;
    if (cnd_) { goto L_08A63754; }
    goto L_08A63774;
L_08A63774:;
    return;
}

/* 08A6377C */
rv_t func_08A6377C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6377C:;
    sp = sp - 16;
    a1 = a0 + 0;
    a0 = 0x803d;
    { rv_t r_ = func_08A637BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63790;
L_08A63790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6379C */
rv_t func_08A6379C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6379C:;
    sp = sp - 16;
    a1 = a0 + 0;
    a0 = 0x803f;
    { rv_t r_ = func_08A637BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A637B0;
L_08A637B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A637BC */
rv_t func_08A637BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A637BC:;
    sp = sp - 16;
    v0 = D_08C291F8 - (-28168);
    s2 = a1 + 0;
    s0 = a0 + 0;
    s0 = s0 & 0xffff;
    v1 = LD32(v0-28168);
    a0 = v1 + 0;
    v0 = func_08978738(a0);
    goto L_08A637EC;
L_08A637EC:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A637F8;
L_08A637F8:;
    v0 = v0 + 3;
    a0 = s0 + 0;
    a1 = v0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63810;
L_08A63810:;
    s0 = v0 + 0;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    a2 = LD32(s0+24);
    v0 = D_08B1BB5C - (-17572);
    a1 = s1 + 0;
    ST8(a2, v1);
    a0 = a2 + 2;
    v1 = LD32(v0-17572);
    ST8(a2+1, v1);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6383C;
L_08A6383C:;
    v1 = 999;
    cnd_ = s2 == v1;
    v0 = 11;
    if (cnd_) { goto L_08A63884; }
    goto L_08A63848;
L_08A63848:;
    ST32(s0, v0);
    ST32(s0+4, s2);
    goto L_08A63850;
L_08A63850:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = v0 | 0x1;
    ST32(s0+28, v0);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6386C;
L_08A6386C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A63884:;
    v0 = 9;
    ST32(s0, v0);
    ST32(s0+4, 0);
    goto L_08A63850;
}

/* 08A63894 */
rv_t func_08A63894(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A63894:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    a2 = D_08C31394 - (5012);
    if (cnd_) { goto L_08A6397C; }
    goto L_08A638B0;
L_08A638B0:;
    v0 = D_08AF082C - (2092);
    f3 = BITSF(LD32(v0+2092));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    a3 = D_08C31374 - (4980);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    t0 = D_08C31384 - (4996);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f3;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f3;
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v1 = a3 + 4980;
    a0 = t0 + 4996;
    f1 = f1 * f3;
    a1 = a2 + 5012;
    ST32(a1+12, FBITS(f2));
    v0 = D_08C313A4 - (5028);
    v0 = v0 + 5028;
    ST32(v1+4, FBITS(f4));
    t1 = 999;
    ST32(v1+8, FBITS(f5));
    ST32(v1+12, FBITS(f2));
    ST32(a0+4, FBITS(f6));
    ST32(a0+8, FBITS(f6));
    ST32(a0+12, FBITS(f2));
    ST32(a2+5012, FBITS(f2));
    ST32(a1+8, FBITS(f2));
    ST32(a1+4, FBITS(f2));
    ST32(a3+4980, FBITS(f1));
    a3 = 7;
    ST32(t0+4996, FBITS(f5));
    t0 = (u32)-1;
    goto L_08A63960;
L_08A63960:;
    a3 = a3 - 1;
    ST32(v0+4, 0);
    ST32(v0, t1);
    ST32(v0+8, 0);
    ST16(v0+12, 0);
    cnd_ = a3 != t0;
    v0 = v0 + 56;
    if (cnd_) { goto L_08A63960; }
    goto L_08A6397C;
L_08A6397C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A63984 */
rv_t func_08A63984(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63984:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A63894(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63998;
L_08A63998:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A639A4 */
u32 func_08A639A4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A639A4:;
    a0 = a0 & 0xffff;
    v1 = a0 & 0xff;
    a0 = a0 + 6144;
    a0 = a0 & 0xffff;
    v0 = D_08B1CA24 - (-13788);
    v0 = v0 - 13788;
    v1 = v1 << 2;
    a0 = a0 < 0x1eu;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A639D4; }
    goto L_08A639D0;
L_08A639D0:;
    v0 = LD32(v1);
    goto L_08A639D4;
L_08A639D4:;
    return v0;
}

/* 08A639DC */
u32 func_08A639DC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A639DC:;
    v1 = 0xffff0000u;
    v0 = a0 & 0xffff;
    v1 = v1 | 0x17e5;
    v0 = v0 + v1;
    v0 = v0 < 0x3u;
    return v0;
}

/* 08A639F4 */
void func_08A639F4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A639F4:;
    a0 = D_08AE67CC - (26572);
    sp = sp - 16;
    a1 = 1;
    a0 = a0 + 26572;
    v0 = func_0883A868(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A63A0C;
L_08A63A0C:;
    v1 = D_08B1CA24 - (-13788);
    a0 = LD32(v1-13788);
    v0 = func_0883AE54(a0);
    goto L_08A63A18;
L_08A63A18:;
    a0 = D_08AE67E0 - (26592);
    a0 = a0 + 26592;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A63A34; }
    goto L_08A63A28;
L_08A63A28:;
    goto L_08A63A2C;
L_08A63A2C:;
    sp = sp + 16;
    return;
L_08A63A34:;
    v0 = func_0883A868(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A63A3C;
L_08A63A3C:;
    goto L_08A63A2C;
}

/* 08A63A44 */
u32 func_08A63A44(u32 a1, u32 a2, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08A63A44:;
    sp = sp - 112;
    v0 = 0xe9ff;
    s1 = a2 & 0xffff;
    a0 = s1 + 0;
    s4 = a1 + 0;
    v1 = 1;
    f25 = f13;
    f24 = f12;
    f22 = f14;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08A63BEC; }
    goto L_08A63A9C;
L_08A63A9C:;
    f21 = f14;
    v0 = func_08A639A4(a0);
    goto L_08A63AA4;
L_08A63AA4:;
    a0 = v0 + 0;
    v0 = func_0883AE54(a0);
    goto L_08A63AAC;
L_08A63AAC:;
    s3 = D_08B2C12C - (-16084);
    s2 = s3 - 16084;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A63BEC; }
    goto L_08A63AC0;
L_08A63AC0:;
    v0 = D_08AF0830 - (2096);
    f6 = BITSF(LD32(v0+2096));
    f1 = BITSF(LD32(s0+24));
    f3 = BITSF(LD32(s0+16));
    f0 = BITSF(LD32(s0+28));
    f2 = BITSF(LD32(s0+20));
    f1 = f1 - f3;
    fcc = FCMP(f6, f22, 14);
    f0 = f0 - f2;
    f4 = BITSF(LD32(s0+32));
    f5 = BITSF(LD32(s0+36));
    f23 = f1 * f4;
    cnd_ = fcc;
    f20 = f0 * f5;
    if (cnd_) { goto L_08A63AFC; }
    goto L_08A63AF8;
L_08A63AF8:;
    f21 = f6;
    goto L_08A63AFC;
L_08A63AFC:;
    f0 = func_088CD39C();
    goto L_08A63B04;
L_08A63B04:;
    f0 = f0 - f20;
    v0 = D_08AF0834 - (2100);
    f2 = BITSF(LD32(v0+2100));
    f3 = f23 * f22;
    f6 = f20 * f21;
    f0 = f0 * f2;
    f1 = f20 * f2;
    f5 = f23 * f21;
    f3 = f3 * f2;
    f4 = f6 * f2;
    f1 = f1 + f0;
    f2 = f5 * f2;
    f3 = f24 + f3;
    v1 = s3 - 16084;
    f1 = f1 * f22;
    v0 = 1;
    f2 = f3 - f2;
    ST8(v1+93, v0);
    f1 = f25 + f1;
    a0 = s1 + 0;
    ST8(v1+92, 0);
    s3 = v1 + 0;
    f4 = f1 - f4;
    ST32(sp+16, FBITS(f5));
    ST32(sp, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+36, FBITS(f4));
    ST32(sp+20, FBITS(f6));
    v0 = func_08A639DC(a0);
    goto L_08A63B7C;
L_08A63B7C:;
    a1 = 0xff0000u;
    a0 = s2 + 0;
    a1 = a1 | 0xffff;
    cnd_ = v0 != 0;
    v1 = s4 + 0;
    if (cnd_) { goto L_08A63B94; }
    goto L_08A63B90;
L_08A63B90:;
    v1 = s4 | a1;
    goto L_08A63B94;
L_08A63B94:;
    ST32(s3+64, v1);
    v0 = 1;
    f13 = BITSF(LD32(s0+20));
    f12 = BITSF(LD32(s0+16));
    f14 = BITSF(LD32(s0+24));
    f15 = BITSF(LD32(s0+28));
    ST32(s2+84, v0);
    f14 = f14 - f12;
    f15 = f15 - f13;
    v0 = LD32(s0+12);
    ST32(s2+80, v0);
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A63BC4;
L_08A63BC4:;
    a0 = s2 + 0;
    f12 = BITSF(LD32(sp+32));
    f13 = BITSF(LD32(sp+36));
    f14 = BITSF(LD32(sp+16));
    f15 = BITSF(LD32(sp+20));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A63BDC;
L_08A63BDC:;
    a0 = s2 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63BE8;
L_08A63BE8:;
    v1 = 1;
    goto L_08A63BEC;
L_08A63BEC:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
}

/* 08A63C28 */
u32 func_08A63C28(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63C28:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = D_08C31564 - (5476);
    s0 = v1 & 0xffff;
    v0 = 0xe9ff;
    a0 = 32;
    s1 = a1 + 5476;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A63CD4; }
    goto L_08A63C54;
L_08A63C54:;
    a0 = s0 + 0;
    v0 = func_08A639A4(a0);
    goto L_08A63C5C;
L_08A63C5C:;
    a0 = v0 + 0;
    v0 = func_0883AE54(a0);
    goto L_08A63C64;
L_08A63C64:;
    v1 = 0 < v0;
    a0 = v0 + 0;
    a3 = D_08C31574 - (5492);
    v0 = D_08B2C00C - (-16372);
    a1 = a3 + 5492;
    ST8(v0-16372, v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A63CBC; }
    goto L_08A63C84;
L_08A63C84:;
    f0 = BITSF(LD32(a0+16));
    v0 = (u32)-1;
    ST16(a1+12, s0);
    a2 = a1 + 0;
    ST32(a3+5492, FBITS(f0));
    f1 = BITSF(LD32(a0+20));
    ST16(a1+14, v0);
    ST32(a1+4, FBITS(f1));
    f0 = BITSF(LD32(a0+24));
    f1 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+32));
    f0 = f0 - f1;
    f0 = f0 * f2;
    ST32(a1+8, FBITS(f0));
    goto L_08A63CBC;
L_08A63CBC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_08A63CD4:;
    v0 = D_08AF0838 - (2104);
    f12 = BITSF(LD32(v0+2104));
    ST32(a1+5476, 0);
    ST32(s1+4, 0);
    f0 = func_088CB5D0(a0, f12);
    goto L_08A63CE8;
L_08A63CE8:;
    v0 = (u32)-5633;
    v1 = (u32)-1;
    a2 = s1 + 0;
    ST32(s1+8, FBITS(f0));
    ST16(s1+12, v0);
    ST16(s1+14, v1);
    goto L_08A63CBC;
}

/* 08A63D04 */
float func_08A63D04(void)
{
    float f0 = 0;
L_08A63D04:;
    f0 = BITSF(0);
    return f0;
}

/* 08A63D10 */
float func_08A63D10(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A63D10:;
    v0 = a0 + 0;
    a1 = v0 & 0xffff;
    v1 = a1 + 6144;
    sp = sp - 32;
    v1 = v1 & 0xffff;
    v0 = 0xe9ff;
    a0 = 32;
    v1 = v1 < 0x1eu;
    f21 = f12;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A63DA0; }
    goto L_08A63D44;
L_08A63D44:;
    f0 = BITSF(0);
    cnd_ = v1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A63D8C; }
    goto L_08A63D50;
L_08A63D50:;
    v0 = D_08AF083C - (2108);
    f0 = BITSF(LD32(v0+2108));
    f20 = f12 * f0;
    v0 = func_08A639A4(a0);
    goto L_08A63D60;
L_08A63D60:;
    a0 = v0 + 0;
    v0 = func_0883AE54(a0);
    goto L_08A63D68;
L_08A63D68:;
    cnd_ = v0 == 0;
    f0 = f20;
    if (cnd_) { goto L_08A63D8C; }
    goto L_08A63D70;
L_08A63D70:;
    f0 = BITSF(LD32(v0+24));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+32));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f20 = f0 * f21;
    f0 = f20;
    goto L_08A63D8C;
L_08A63D8C:;
    goto L_08A63D90;
L_08A63D90:;
    sp = sp + 32;
    return f0;
L_08A63DA0:;
    f0 = func_088CB5D0(a0, f12);
    goto L_08A63DA8;
L_08A63DA8:;
    goto L_08A63D90;
}

/* 08A63DB0 */
u32 func_08A63DB0(void)
{
    u32 v0 = 0;
L_08A63DB0:;
    v0 = 63;
    return v0;
}

/* 08A63DB8 */
u32 func_08A63DB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63DB8:;
    sp = sp - 16;
    v0 = D_08B1B91C - (-18148);
    s0 = a0 + 0;
    v1 = LD32(v0-18148);
    a0 = v1 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63DD8;
L_08A63DD8:;
    v0 = v0 ^ s0;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 08A63DF0 */
rv_t func_08A63DF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A63DF0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C31584 - (5508);
    t1 = D_08C31594 - (5524);
    t2 = D_08C315A4 - (5540);
    a1 = a1 & a0;
    v1 = t0 + 5508;
    a2 = t1 + 5524;
    cnd_ = a1 == 0;
    a3 = t2 + 5540;
    if (cnd_) { goto L_08A63EA8; }
    goto L_08A63E20;
L_08A63E20:;
    v0 = D_08AF0840 - (2112);
    f4 = BITSF(LD32(v0+2112));
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
    ST32(t0+5508, FBITS(f2));
    ST32(t1+5524, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+5540, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A63EA8;
L_08A63EA8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A63EB0 */
rv_t func_08A63EB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63EB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A63DF0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A63EC4;
L_08A63EC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A63ED0 */
u64 func_08A63ED0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A63ED0:;
    v0 = D_08C315EC - (5612);
    a2 = LD32(v0+5612);
    cnd_ = a2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A63F24; }
    goto L_08A63EE0;
L_08A63EE0:;
    v0 = D_08C315F0 - (5616);
    v1 = D_08C315F4 - (5620);
    t1 = LD32(v0+5616);
    a1 = LD32(v1+5620);
    t0 = a2 + 0;
    v0 = LD32(a1);
    goto L_08A63EF8;
L_08A63EF8:;
    a3 = a3 + 1;
    a2 = a3 < t0;
    v1 = v0 << 4;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = t1 + v1;
    v0 = LD32(v1);
    cnd_ = v0 == a0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A63F28; }
    goto L_08A63F1C;
L_08A63F1C:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08A63EF8; }
    goto L_08A63F24;
L_08A63F24:;
    v1 = 0 + 0;
    goto L_08A63F28;
L_08A63F28:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A63F30 */
u32 func_08A63F30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63F30:;
    sp = sp - 16;
    { u64 r_ = func_08A63ED0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63F44;
L_08A63F44:;
    v1 = D_08C3160C - (5644);
    s0 = v1 + 5644;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 28;
    cnd_ = v0 == 0;
    v1 = v0 + 40;
    if (cnd_) { goto L_08A63F74; }
    goto L_08A63F60;
L_08A63F60:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A63F74:;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A63F7C;
L_08A63F7C:;
    v1 = s0 + 0;
    goto L_08A63F60;
}

/* 08A63F84 */
u32 func_08A63F84(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A63F84:;
    v0 = D_08B285B0 - (-31312);
    v1 = D_08C315F8 - (5624);
    a0 = LD32(v0-31312);
    v0 = LD32(v1+5624);
    a3 = 0x10620000u;
    a3 = a3 | 0x4dd3;
    a1 = a0 - v0;
    a0 = a0 < v0;
    cnd_ = a0 != 0;
    v1 = a1 - 1;
    if (cnd_) { goto L_08A63FBC; }
    goto L_08A63FAC;
L_08A63FAC:;
    { u64 p_ = (u64)a1 * a3; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = hi;
    v0 = v0 >> 6;
    return v0;
L_08A63FBC:;
    { u64 p_ = (u64)v1 * a3; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = hi;
    v0 = v0 >> 6;
    return v0;
}

/* 08A63FCC */
void func_08A63FCC(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A63FCC:;
    sp = sp - 16;
    v0 = D_08C31604 - (5636);
    v1 = D_08C31608 - (5640);
    s0 = D_08C31600 - (5632);
    t1 = a1 + 0;
    a3 = LD32(v0+5636);
    v0 = LD32(s0+5632);
    a2 = LD32(v1+5640);
    a1 = D_08AE67F8 - (26616);
    a3 = a3 + v0;
    t0 = a0 + 0;
    a2 = a2 - v0;
    a0 = a3 + 0;
    a1 = a1 + 26616;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64014;
L_08A64014:;
    v1 = LD32(s0+5632);
    v1 = v1 + v0;
    ST32(s0+5632, v1);
    sp = sp + 16;
    return;
}

/* 08A64030 */
void func_08A64030(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64030:;
    sp = sp - 16;
    v0 = D_08C31604 - (5636);
    v1 = D_08C31608 - (5640);
    s0 = D_08C31600 - (5632);
    t1 = a1 + 0;
    a3 = LD32(v0+5636);
    v0 = LD32(s0+5632);
    a2 = LD32(v1+5640);
    a1 = D_08AE6800 - (26624);
    a3 = a3 + v0;
    t0 = a0 + 0;
    a2 = a2 - v0;
    a0 = a3 + 0;
    a1 = a1 + 26624;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64078;
L_08A64078:;
    v1 = LD32(s0+5632);
    v1 = v1 + v0;
    ST32(s0+5632, v1);
    sp = sp + 16;
    return;
}

/* 08A64094 */
void func_08A64094(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A64094:;
    sp = sp - 32;
    v0 = D_08C31604 - (5636);
    v1 = D_08C31608 - (5640);
    s3 = a0 + 0;
    s2 = D_08C31600 - (5632);
    s0 = LD32(v0+5636);
    s1 = LD32(v1+5640);
    v0 = LD32(s2+5632);
    s1 = s1 - v0;
    s0 = s0 + v0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A640D4;
L_08A640D4:;
    a1 = D_08AE6808 - (26632);
    a0 = s0 + 0;
    a2 = s1 + 0;
    t3 = v1 + 0;
    t0 = s3 + 0;
    a1 = a1 + 26632;
    t2 = v0 + 0;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A640F8;
L_08A640F8:;
    v1 = LD32(s2+5632);
    v1 = v1 + v0;
    ST32(s2+5632, v1);
    sp = sp + 32;
    return;
}

/* 08A64120 */
void func_08A64120(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64120:;
    sp = sp - 16;
    v0 = D_08C31604 - (5636);
    v1 = D_08C31608 - (5640);
    s0 = D_08C31600 - (5632);
    t1 = a1 + 0;
    a3 = LD32(v0+5636);
    v0 = LD32(s0+5632);
    a2 = LD32(v1+5640);
    a1 = D_08AE6814 - (26644);
    a3 = a3 + v0;
    t0 = a0 + 0;
    a2 = a2 - v0;
    a0 = a3 + 0;
    a1 = a1 + 26644;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64168;
L_08A64168:;
    v1 = LD32(s0+5632);
    v1 = v1 + v0;
    ST32(s0+5632, v1);
    sp = sp + 16;
    return;
}

/* 08A64184 */
void func_08A64184(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A64184:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+8)); goto L_08A641B0; }
    goto L_08A64190;
L_08A64190:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(a0+12)); goto L_08A641A4; }
    goto L_08A6419C;
L_08A6419C:;
    return;
L_08A641A4:;
    f0 = f0 + f12;
    ST32(a0+12, FBITS(f0));
    return;
L_08A641B0:;
    f0 = f0 + f12;
    ST32(a0+8, FBITS(f0));
    return;
}

/* 08A641BC */
void func_08A641BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A641BC:;
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 28;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A641D0;
L_08A641D0:;
    sp = sp + 16;
    return;
}

/* 08A641DC */
void func_08A641DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A641DC:;
    sp = sp - 32;
    s2 = D_08B2AA24 - (-21980);
    v0 = LD32(s2-21980);
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A64218; }
    goto L_08A64208;
L_08A64208:;
    s3 = D_08B2BB9C - (-17508);
    v0 = LD32(s3-17508);
    cnd_ = v0 != 0;
    s0 = a0 << 2;
    if (cnd_) { goto L_08A64238; }
    goto L_08A64218;
L_08A64218:;
    goto L_08A6421C;
L_08A6421C:;
    sp = sp + 32;
    return;
L_08A64238:;
    a0 = a0 << 6;
    a0 = a0 + s0;
    a0 = a0 << 2;
    s4 = D_08C315E4 - (5604);
    ST32(s4+5604, s0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64250;
L_08A64250:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08A64278; }
    goto L_08A6425C;
L_08A6425C:;
    a0 = (u32)-1;
    goto L_08A64260;
L_08A64260:;
    v1 = v1 - 1;
    ST32(v0, 0);
    ST8(v0+4, 0);
    ST8(v0+37, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 68;
    if (cnd_) { goto L_08A64260; }
    goto L_08A64278;
L_08A64278:;
    a0 = s0 + 0;
    v0 = D_08C315F0 - (5616);
    ST32(v0+5616, a1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64288;
L_08A64288:;
    v1 = D_08C315F4 - (5620);
    a1 = LD32(s4+5604);
    ST32(v1+5620, v0);
    v0 = D_08C315E8 - (5608);
    a1 = a1 << 9;
    v1 = D_08C315EC - (5612);
    a0 = a1 + 0;
    ST32(v0+5608, s1);
    v0 = D_08C31608 - (5640);
    ST32(v1+5612, 0);
    ST32(v0+5640, a1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A642B8;
L_08A642B8:;
    v1 = D_08C31604 - (5636);
    a0 = LD32(s2-21980);
    ST32(v1+5636, v0);
    v0 = D_08C31600 - (5632);
    v1 = D_08C315FC - (5628);
    ST32(v0+5632, 0);
    cnd_ = a0 == 0;
    ST8(v1+5628, 0);
    if (cnd_) { goto L_08A64218; }
    goto L_08A642D8;
L_08A642D8:;
    v0 = LD32(s3-17508);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A6421C; }
    goto L_08A642E4;
L_08A642E4:;
    a0 = 0 + 0;
    func_08A79EAC(a0, 0, 0, 0);
    goto L_08A642EC;
L_08A642EC:;
    goto L_08A6421C;
}

/* 08A642F4 */
void func_08A642F4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A642F4:;
    sp = sp - 48;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64398; }
    goto L_08A64320;
L_08A64320:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A6439C; }
    goto L_08A64330;
L_08A64330:;
    s3 = D_08C315EC - (5612);
    v1 = LD32(s3+5612);
    v0 = D_08B2859C - (-31332);
    f20 = BITSF(LD32(v0-31332));
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A64398; }
    goto L_08A64348;
L_08A64348:;
    s2 = D_08C315F4 - (5620);
    s1 = D_08C315F0 - (5616);
    a1 = LD32(s2+5620);
    goto L_08A64354;
L_08A64354:;
    v0 = s0 << 2;
    a0 = LD32(s1+5616);
    v0 = v0 + a1;
    v1 = LD32(v0);
    f12 = f20;
    s0 = s0 + 1;
    v0 = v1 << 4;
    v0 = v0 + v1;
    v0 = v0 << 2;
    a0 = a0 + v0;
    a0 = a0 + 40;
    func_08A64184(a0, f12);
    goto L_08A64384;
L_08A64384:;
    v0 = LD32(s3+5612);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = LD32(s2+5620);
    if (cnd_) { goto L_08A64354; }
    goto L_08A64394;
L_08A64394:;
    goto L_08A64398;
L_08A64398:;
    goto L_08A6439C;
L_08A6439C:;
    sp = sp + 48;
    return;
}

/* 08A643B4 */
void func_08A643B4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A643B4:;
    sp = sp - 16;
    s0 = D_08C315F0 - (5616);
    v0 = LD32(s0+5616);
    s2 = D_08C31604 - (5636);
    a0 = v0 + 0;
    s1 = D_08C315F4 - (5620);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A64498; }
    goto L_08A643E0;
L_08A643E0:;
    v1 = LD32(s1+5620);
    goto L_08A643E4;
L_08A643E4:;
    v0 = D_08C315E4 - (5604);
    ST32(s0+5616, 0);
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(v0+5604, 0);
    if (cnd_) { goto L_08A64488; }
    goto L_08A643F8;
L_08A643F8:;
    a1 = LD32(s2+5636);
    goto L_08A643FC;
L_08A643FC:;
    v0 = D_08C315E8 - (5608);
    ST32(v0+5608, 0);
    v1 = D_08C315EC - (5612);
    v0 = D_08C31608 - (5640);
    ST32(s1+5620, 0);
    a0 = a1 + 0;
    ST32(v1+5612, 0);
    cnd_ = a1 != 0;
    ST32(v0+5640, 0);
    if (cnd_) { goto L_08A64478; }
    goto L_08A64420;
L_08A64420:;
    v0 = D_08B2AA24 - (-21980);
    goto L_08A64424;
L_08A64424:;
    a0 = LD32(v0-21980);
    v1 = D_08C315FC - (5628);
    v0 = D_08C31600 - (5632);
    ST32(s2+5636, 0);
    ST32(v0+5632, 0);
    cnd_ = a0 == 0;
    ST8(v1+5628, 0);
    if (cnd_) { goto L_08A64450; }
    goto L_08A64440;
L_08A64440:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A64468; }
    goto L_08A64450;
L_08A64450:;
    goto L_08A64454;
L_08A64454:;
    sp = sp + 16;
    return;
L_08A64468:;
    func_08A7A098(a0, t1, t2, t3);
    goto L_08A64470;
L_08A64470:;
    goto L_08A64454;
L_08A64478:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64480;
L_08A64480:;
    v0 = D_08B2AA24 - (-21980);
    goto L_08A64424;
L_08A64488:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64490;
L_08A64490:;
    a1 = LD32(s2+5636);
    goto L_08A643FC;
L_08A64498:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A644A0;
L_08A644A0:;
    v1 = LD32(s1+5620);
    goto L_08A643E4;
}

/* 08A644A8 */
rv_t func_08A644A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08A644A8:;
    sp = sp - 128;
    v0 = D_08B2AA24 - (-21980);
    a1 = a0 + 0;
    v1 = LD32(v0-21980);
    a2 = 8;
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A644D4; }
    goto L_08A644C8;
L_08A644C8:;
    goto L_08A644CC;
L_08A644CC:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08A644D4:;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A644DC;
L_08A644DC:;
    v1 = D_08B15FAC - (24492);
    v0 = LD32(v1+24492);
    a1 = D_08B2AC88 - (-21368);
    a1 = a1 - 21368;
    a2 = sp + 64;
    a0 = sp + 0;
    ST32(sp+16, v0);
    ST8(sp+8, 0);
    v0 = func_08A79824(a0, a1, a2);
    goto L_08A64500;
L_08A64500:;
    a1 = v0 + 0;
    a0 = sp + 20;
    a2 = 32;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64510;
L_08A64510:;
    a0 = 0x807b;
    a1 = 36;
    a2 = 0 + 0;
    a3 = sp + 16;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64524;
L_08A64524:;
    v1 = LD32(v0+28);
    ST32(v0, 0);
    a0 = v0 + 0;
    v1 = v1 | 0x1;
    ST32(v0+28, v1);
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64544;
L_08A64544:;
    goto L_08A644CC;
}

/* 08A6454C */
rv_t func_08A6454C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A6454C:;
    sp = sp - 64;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A64588; }
    goto L_08A64570;
L_08A64570:;
    goto L_08A64574;
L_08A64574:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A64588:;
    s2 = LD32(a0);
    a0 = s2 + 0;
    { u64 r_ = func_08A63ED0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64594;
L_08A64594:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A645D4; }
    goto L_08A6459C;
L_08A6459C:;
    a1 = s1 + 4;
    goto L_08A645A0;
L_08A645A0:;
    a0 = sp + 0;
    a2 = 32;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A645AC;
L_08A645AC:;
    a1 = D_08AE6834 - (26676);
    a0 = s0 + 4;
    a1 = a1 + 26676;
    a2 = 33;
    a3 = 1;
    t0 = sp + 0;
    ST8(sp+32, 0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A645CC;
L_08A645CC:;
    goto L_08A64574;
L_08A645D4:;
    v0 = D_08C315E4 - (5604);
    a0 = LD32(v0+5604);
    v0 = s0 < a0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A6460C; }
    goto L_08A645E8;
L_08A645E8:;
    v0 = D_08C315F0 - (5616);
    v1 = LD32(v0+5616);
    a2 = a0 + 0;
    goto L_08A645F4;
L_08A645F4:;
    v0 = LD32(v1);
    a1 = a1 + 1;
    cnd_ = v0 == s2;
    a0 = a1 < a2;
    if (cnd_) { goto L_08A6461C; }
    goto L_08A64604;
L_08A64604:;
    cnd_ = a0 != 0;
    v1 = v1 + 68;
    if (cnd_) { goto L_08A645F4; }
    goto L_08A6460C;
L_08A6460C:;
    cnd_ = s0 != 0;
    if (cnd_) { a1 = s1 + 4; goto L_08A645A0; }
    goto L_08A64614;
L_08A64614:;
    goto L_08A64574;
L_08A6461C:;
    s0 = v1 + 0;
    goto L_08A6460C;
}

/* 08A64624 */
void func_08A64624(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A64624:;
    sp = sp - 32;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64718; }
    goto L_08A6464C;
L_08A6464C:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A6471C; }
    goto L_08A6465C;
L_08A6465C:;
    v0 = D_08B285B0 - (-31312);
    s3 = D_08C315EC - (5612);
    v1 = LD32(v0-31312);
    a0 = LD32(s3+5612);
    v0 = D_08C315F8 - (5624);
    ST32(v0+5624, v1);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A646C4; }
    goto L_08A6467C;
L_08A6467C:;
    s1 = D_08C315F4 - (5620);
    s2 = D_08C315F0 - (5616);
    a1 = LD32(s1+5620);
    goto L_08A64688;
L_08A64688:;
    v0 = s0 << 2;
    a0 = LD32(s2+5616);
    v0 = v0 + a1;
    v1 = LD32(v0);
    s0 = s0 + 1;
    v0 = v1 << 4;
    v0 = v0 + v1;
    v0 = v0 << 2;
    a0 = a0 + v0;
    a0 = a0 + 40;
    func_08A641BC(a0);
    goto L_08A646B4;
L_08A646B4:;
    v0 = LD32(s3+5612);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = LD32(s1+5620);
    if (cnd_) { goto L_08A64688; }
    goto L_08A646C4;
L_08A646C4:;
    s3 = D_08C315E4 - (5604);
    v0 = LD32(s3+5604);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A64708; }
    goto L_08A646D4;
L_08A646D4:;
    s2 = D_08C315F0 - (5616);
    s0 = 0 + 0;
    v0 = LD32(s2+5616);
    goto L_08A646E0;
L_08A646E0:;
    s1 = s1 + 1;
    v0 = v0 + s0;
    v1 = LD_U8(v0+37);
    a0 = v0 + 40;
    cnd_ = v1 == 0;
    s0 = s0 + 68;
    if (cnd_) { goto L_08A64730; }
    goto L_08A646F8;
L_08A646F8:;
    v0 = LD32(s3+5604);
    goto L_08A646FC;
L_08A646FC:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(s2+5616);
    if (cnd_) { goto L_08A646E0; }
    goto L_08A64708;
L_08A64708:;
    v1 = 1;
    v0 = D_08C315FC - (5628);
    ST8(v0+5628, v1);
    goto L_08A64718;
L_08A64718:;
    goto L_08A6471C;
L_08A6471C:;
    sp = sp + 32;
    return;
L_08A64730:;
    ST32(v0, 0);
    ST8(v0+37, 0);
    ST8(v0+4, 0);
    func_08A641BC(a0);
    goto L_08A64740;
L_08A64740:;
    v0 = LD32(s3+5604);
    goto L_08A646FC;
}

/* 08A64748 */
void func_08A64748(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A64748:;
    sp = sp - 32;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64778; }
    goto L_08A64764;
L_08A64764:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    a0 = D_08AE6838 - (26680);
    if (cnd_) { goto L_08A64784; }
    goto L_08A64774;
L_08A64774:;
    goto L_08A64778;
L_08A64778:;
    sp = sp + 32;
    return;
L_08A64784:;
    a0 = a0 + 26680;
    a1 = 0 + 0;
    func_08A64030(a0, a1, t2, t3);
    goto L_08A64790;
L_08A64790:;
    v0 = func_0889FD70();
    goto L_08A64798;
L_08A64798:;
    a0 = D_08AE6844 - (26692);
    a1 = v0 + 0;
    a0 = a0 + 26692;
    func_08A63FCC(a0, a1, 0, 0);
    goto L_08A647A8;
L_08A647A8:;
    v0 = D_08B2BB70 - (-17552);
    a1 = LD_U8(v0-17552);
    a0 = D_08AE684C - (26700);
    a0 = a0 + 26700;
    func_08A63FCC(a0, a1, 0, 0);
    goto L_08A647BC;
L_08A647BC:;
    v0 = D_08C315E8 - (5608);
    a1 = LD32(v0+5608);
    a0 = D_08AE6858 - (26712);
    a0 = a0 + 26712;
    func_08A64030(a0, a1, 0, 0);
    goto L_08A647D0;
L_08A647D0:;
    v0 = D_08C28F54 - (-28844);
    a1 = LD32(v0-28844);
    a0 = D_08AE6864 - (26724);
    a0 = a0 + 26724;
    func_08A64030(a0, a1, 0, 0);
    goto L_08A647E4;
L_08A647E4:;
    v0 = D_08C28F58 - (-28840);
    f12 = BITSF(LD32(v0-28840));
    a0 = D_08AE6870 - (26736);
    a0 = a0 + 26736;
    func_08A64094(a0, f12);
    goto L_08A647F8;
L_08A647F8:;
    v0 = D_08C29338 - (-27848);
    a1 = LD_U8(v0-27848);
    a0 = D_08AE687C - (26748);
    a0 = a0 + 26748;
    func_08A63FCC(a0, a1, 0, 0);
    goto L_08A6480C;
L_08A6480C:;
    v0 = D_08B1BB48 - (-17592);
    f12 = BITSF(LD32(v0-17592));
    a0 = D_08AE6880 - (26752);
    a0 = a0 + 26752;
    func_08A64094(a0, f12);
    goto L_08A64820;
L_08A64820:;
    a0 = 0 + 0;
    v0 = func_08A63DB8(a0);
    goto L_08A64828;
L_08A64828:;
    a0 = D_08AE6890 - (26768);
    a1 = v0 + 0;
    a0 = a0 + 26768;
    func_08A64030(a0, a1, 0, 0);
    goto L_08A64838;
L_08A64838:;
    a0 = 1;
    v0 = func_08A63DB8(a0);
    goto L_08A64840;
L_08A64840:;
    a0 = D_08AE689C - (26780);
    a0 = a0 + 26780;
    a1 = v0 + 0;
    func_08A64030(a0, a1, 0, 0);
    goto L_08A64850;
L_08A64850:;
    v0 = func_08A63F84();
    goto L_08A64858;
L_08A64858:;
    a0 = D_08AE68A8 - (26792);
    a1 = v0 + 0;
    a0 = a0 + 26792;
    func_08A64030(a0, a1, 0, 0);
    goto L_08A64868;
L_08A64868:;
    v0 = D_08C28F60 - (-28832);
    a0 = LD32(v0-28832);
    v0 = func_089735B4(a0);
    goto L_08A64874;
L_08A64874:;
    a0 = D_08AE68B4 - (26804);
    a0 = a0 + 26804;
    a1 = v0 + 0;
    func_08A64120(a0, a1, 0, 0);
    goto L_08A64884;
L_08A64884:;
    v0 = func_08978770();
    goto L_08A6488C;
L_08A6488C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A649A0; }
    goto L_08A64894;
L_08A64894:;
    a0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6489C;
L_08A6489C:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A648B0;
L_08A648B0:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08A6498C; }
    goto L_08A648B8;
L_08A648B8:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08A648C0;
L_08A648C0:;
    a0 = LD32(sp);
    func_088381A0(a0);
    goto L_08A648C8;
L_08A648C8:;
    a1 = LD32(sp);
    a0 = D_08AE68C0 - (26816);
    a0 = a0 + 26816;
    func_08A64120(a0, a1, 0, 0);
    goto L_08A648D8;
L_08A648D8:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A6497C; }
    goto L_08A648E4;
L_08A648E4:;
    v0 = D_08C315E4 - (5604);
    v1 = LD32(v0+5604);
    s0 = 0 + 0;
    ST32(sp+8, 0);
    a1 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A64928; }
    goto L_08A64900;
L_08A64900:;
    v0 = D_08C315F0 - (5616);
    a0 = LD32(v0+5616);
    a2 = v1 + 0;
    goto L_08A6490C;
L_08A6490C:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    v1 = a1 < a2;
    v0 = 0 < v0;
    s0 = s0 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 68;
    if (cnd_) { goto L_08A6490C; }
    goto L_08A64928;
L_08A64928:;
    a0 = D_08AE68C8 - (26824);
    a0 = a0 + 26824;
    a1 = s0 + 0;
    func_08A64030(a0, a1, 0, 0);
    goto L_08A64938;
L_08A64938:;
    cnd_ = s0 != 0;
    v0 = D_08C31604 - (5636);
    if (cnd_) { goto L_08A64964; }
    goto L_08A64940;
L_08A64940:;
    a0 = 0 + 0;
    func_08A7A098(a0, 0, 0, 0);
    goto L_08A64948;
L_08A64948:;
    a0 = 0 + 0;
    func_08A79EAC(a0, 0, 0, 0);
    goto L_08A64950;
L_08A64950:;
    v1 = D_08C31600 - (5632);
    v0 = D_08C315FC - (5628);
    ST32(v1+5632, 0);
    ST8(v0+5628, 0);
    goto L_08A64774;
L_08A64964:;
    a1 = LD32(v0+5636);
    a0 = 0 + 0;
    a2 = 1;
    func_08A7A150(a0, a1, a2, 0, 0, 0);
    goto L_08A64974;
L_08A64974:;
    goto L_08A64940;
L_08A6497C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64984;
L_08A64984:;
    ST32(sp, 0);
    goto L_08A648E4;
L_08A6498C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64998;
L_08A64998:;
    goto L_08A648C0;
L_08A649A0:;
    ST32(sp, 0);
    goto L_08A648B8;
}

/* 08A649A8 */
rv_t func_08A649A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A649A8:;
    sp = sp - 64;
    s3 = D_08B2AA24 - (-21980);
    v0 = LD32(s3-21980);
    s4 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A64C74; }
    goto L_08A649E4;
L_08A649E4:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A64B08; }
    goto L_08A649F4;
L_08A649F4:;
    s5 = D_08C315EC - (5612);
    v0 = D_08C315E8 - (5608);
    a0 = LD32(v0+5608);
    v1 = LD32(s5+5612);
    v1 = v1 < a0;
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A64B0C; }
    goto L_08A64A10;
L_08A64A10:;
    t0 = D_08C315E4 - (5604);
    s2 = LD32(t0+5604);
    s6 = 0 + 0;
    cnd_ = s2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A64A54; }
    goto L_08A64A24;
L_08A64A24:;
    s7 = D_08C315F0 - (5616);
    v1 = LD32(s7+5616);
    a1 = s2 + 0;
    goto L_08A64A30;
L_08A64A30:;
    v0 = LD32(v1);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD_U8(v1+37); goto L_08A64C68; }
    goto L_08A64A3C;
L_08A64A3C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    v1 = v1 + 68;
    if (cnd_) { goto L_08A64A30; }
    goto L_08A64A4C;
L_08A64A4C:;
    cnd_ = s6 != 0;
    v0 = LD32(t0+5604);
    if (cnd_) { goto L_08A64A8C; }
    goto L_08A64A54;
L_08A64A54:;
    a1 = LD32(t0+5604);
    v0 = s6 < a1;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A64A88; }
    goto L_08A64A64;
L_08A64A64:;
    s7 = D_08C315F0 - (5616);
    v1 = LD32(s7+5616);
    v0 = LD32(v1);
    goto L_08A64A70;
L_08A64A70:;
    cnd_ = v0 == 0;
    v1 = v1 + 68;
    if (cnd_) { goto L_08A64C60; }
    goto L_08A64A78;
L_08A64A78:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A64A70; }
    goto L_08A64A88;
L_08A64A88:;
    v0 = LD32(t0+5604);
    goto L_08A64A8C;
L_08A64A8C:;
    s7 = D_08C315F0 - (5616);
    cnd_ = s2 == v0;
    s1 = s2 << 4;
    if (cnd_) { goto L_08A64BD0; }
    goto L_08A64A98;
L_08A64A98:;
    cnd_ = s6 == 0;
    v1 = LD32(s7+5616);
    if (cnd_) { goto L_08A64B94; }
    goto L_08A64AA0;
L_08A64AA0:;
    v0 = s1 + s2;
    v0 = v0 << 2;
    v1 = v1 + v0;
    s1 = v1 + 40;
    v0 = 1;
    ST8(v1+37, v0);
    s0 = LD_U16(s1+6);
    v0 = LD_U16(s1+4);
    s0 = s0 - v0;
    v0 = func_08A63F84();
    goto L_08A64AC8;
L_08A64AC8:;
    v1 = v0 < s0;
    if (v1 != 0) s0 = v0;
    v0 = v0 - s0;
    ST16(s1+4, v0);
    ST16(s1+6, 0);
    goto L_08A64ADC;
L_08A64ADC:;
    v1 = LD32(s5+5612);
    v0 = D_08C315F4 - (5620);
    a0 = LD32(v0+5620);
    a1 = LD32(s3-21980);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s2);
    cnd_ = a1 != 0;
    ST32(s5+5612, v1);
    if (cnd_) { goto L_08A64B38; }
    goto L_08A64B04;
L_08A64B04:;
    a1 = 1;
    goto L_08A64B08;
L_08A64B08:;
    goto L_08A64B0C;
L_08A64B0C:;
    v0 = a1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A64B38:;
    a0 = 0 + 0;
    v0 = func_08A79E50(a0, 0, 0, 0, 0, 0);
    goto L_08A64B40;
L_08A64B40:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 8;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64B50;
L_08A64B50:;
    a0 = 0x807c;
    a1 = 8;
    a2 = 0 + 0;
    a3 = sp + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64B64;
L_08A64B64:;
    a3 = LD32(v0+28);
    v1 = 11;
    ST32(v0, v1);
    a3 = a3 | 0x1;
    a0 = v0 + 0;
    ST32(v0+4, s4);
    a1 = 1;
    a2 = 1;
    ST32(v0+28, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A64B8C;
L_08A64B8C:;
    a1 = 1;
    goto L_08A64B08;
L_08A64B94:;
    s1 = s1 + s2;
    s1 = s1 << 2;
    v1 = v1 + s1;
    v0 = 1;
    ST32(v1, s0);
    a0 = v1 + 40;
    ST8(v1+37, v0);
    ST8(v1+4, 0);
    func_08A641BC(a0);
    goto L_08A64BB8;
L_08A64BB8:;
    s0 = LD32(s7+5616);
    v0 = func_08A63F84();
    goto L_08A64BC0;
L_08A64BC0:;
    s0 = s0 + s1;
    s0 = s0 + 40;
    ST16(s0+4, v0);
    goto L_08A64ADC;
L_08A64BD0:;
    t1 = (u32)-1;
    cnd_ = s2 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A64C20; }
    goto L_08A64BDC;
L_08A64BDC:;
    a1 = LD32(s7+5616);
    a3 = s2 + 0;
    goto L_08A64BE4;
L_08A64BE4:;
    v0 = LD_U8(a1+37);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 + 1; goto L_08A64C14; }
    goto L_08A64BF0;
L_08A64BF0:;
    v0 = LD_U16(a1+46);
    v1 = LD_U16(a1+44);
    v0 = v0 - v1;
    a0 = v0 < t1;
    cnd_ = a0 == 0;
    if (cnd_) { a2 = a2 + 1; goto L_08A64C14; }
    goto L_08A64C08;
L_08A64C08:;
    t1 = v0 + 0;
    s2 = a2 + 0;
    a2 = a2 + 1;
    goto L_08A64C14;
L_08A64C14:;
    v0 = a2 < a3;
    cnd_ = v0 != 0;
    a1 = a1 + 68;
    if (cnd_) { goto L_08A64BE4; }
    goto L_08A64C20;
L_08A64C20:;
    v0 = LD32(t0+5604);
    cnd_ = s2 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A64B08; }
    goto L_08A64C2C;
L_08A64C2C:;
    s7 = D_08C315F0 - (5616);
    v0 = LD32(s7+5616);
    s1 = s2 << 4;
    v1 = s1 + s2;
    v1 = v1 << 2;
    v0 = v0 + v1;
    ST32(v0, 0);
    a0 = v0 + 40;
    ST8(v0+37, 0);
    ST8(v0+4, 0);
    func_08A641BC(a0);
    goto L_08A64C58;
L_08A64C58:;
    goto L_08A64A98;
L_08A64C60:;
    s2 = a0 + 0;
    goto L_08A64A88;
L_08A64C68:;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    s6 = 1;
    if (cnd_) { goto L_08A64A88; }
    goto L_08A64C74;
L_08A64C74:;
    a1 = 0 + 0;
    goto L_08A64B08;
}

/* 08A64C7C */
void func_08A64C7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64C7C:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A64CC0; }
    goto L_08A64CA0;
L_08A64CA0:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64CC4; }
    goto L_08A64CB0;
L_08A64CB0:;
    s2 = D_08C315F0 - (5616);
    v0 = LD32(s2+5616);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A64CD8; }
    goto L_08A64CC0;
L_08A64CC0:;
    goto L_08A64CC4;
L_08A64CC4:;
    goto L_08A64CC8;
L_08A64CC8:;
    sp = sp + 16;
    return;
L_08A64CD8:;
    v0 = func_08A63F30(a0);
    goto L_08A64CE0;
L_08A64CE0:;
    s0 = v0 + 0;
    v0 = func_08A63F84();
    goto L_08A64CE8;
L_08A64CE8:;
    ST16(s0+6, v0);
    a0 = s1 + 0;
    { u64 r_ = func_08A63ED0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A64CF4;
L_08A64CF4:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A64D00; }
    goto L_08A64CFC;
L_08A64CFC:;
    ST8(v0+37, 0);
    goto L_08A64D00;
L_08A64D00:;
    t0 = D_08C315EC - (5612);
    v0 = LD32(t0+5612);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    t1 = t0 + 0;
    if (cnd_) { goto L_08A64D58; }
    goto L_08A64D14;
L_08A64D14:;
    v0 = D_08C315F4 - (5620);
    t2 = LD32(v0+5620);
    a3 = LD32(s2+5616);
    a0 = t2 + 0;
    goto L_08A64D24;
L_08A64D24:;
    v0 = LD32(a0);
    v1 = v0 << 4;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = a3 + v1;
    v0 = LD32(v1);
    cnd_ = v0 == s1;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A64D8C; }
    goto L_08A64D44;
L_08A64D44:;
    v0 = LD32(t0+5612);
    a0 = a0 + 4;
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    t1 = D_08C315EC - (5612);
    if (cnd_) { goto L_08A64D24; }
    goto L_08A64D58;
L_08A64D58:;
    v0 = D_08C315FC - (5628);
    v1 = LD_U8(v0+5628);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64CC4; }
    goto L_08A64D68;
L_08A64D68:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A64CC8; }
    goto L_08A64D70;
L_08A64D70:;
    ST32(a2, 0);
    a0 = a2 + 40;
    ST8(a2+37, 0);
    ST8(a2+4, 0);
    func_08A641BC(a0);
    goto L_08A64D84;
L_08A64D84:;
    goto L_08A64CC4;
L_08A64D8C:;
    v0 = LD32(t1+5612);
    v0 = v0 - 1;
    ST32(t1+5612, v0);
    v0 = v0 << 2;
    v0 = v0 + t2;
    v1 = LD32(v0);
    ST32(a0, v1);
    goto L_08A64D58;
}

/* 08A64DAC */
void func_08A64DAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64DAC:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A64DD8; }
    goto L_08A64DC8;
L_08A64DC8:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64DE8; }
    goto L_08A64DD8;
L_08A64DD8:;
    sp = sp + 16;
    return;
L_08A64DE8:;
    v0 = func_08A63F30(a0);
    goto L_08A64DF0;
L_08A64DF0:;
    ST32(v0, s0);
    goto L_08A64DD8;
}

/* 08A64DF8 */
void func_08A64DF8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64DF8:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64E24; }
    goto L_08A64E10;
L_08A64E10:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64E2C; }
    goto L_08A64E20;
L_08A64E20:;
    goto L_08A64E24;
L_08A64E24:;
    sp = sp + 16;
    return;
L_08A64E2C:;
    v0 = func_08A63F30(a0);
    goto L_08A64E34;
L_08A64E34:;
    v1 = LD_U16(v0+22);
    v1 = v1 + 1;
    ST16(v0+22, v1);
    goto L_08A64E20;
}

/* 08A64E44 */
void func_08A64E44(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64E44:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64E70; }
    goto L_08A64E5C;
L_08A64E5C:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64E78; }
    goto L_08A64E6C;
L_08A64E6C:;
    goto L_08A64E70;
L_08A64E70:;
    sp = sp + 16;
    return;
L_08A64E78:;
    v0 = func_08A63F30(a0);
    goto L_08A64E80;
L_08A64E80:;
    v1 = LD_U16(v0+16);
    v1 = v1 + 1;
    ST16(v0+16, v1);
    goto L_08A64E6C;
}

/* 08A64E90 */
void func_08A64E90(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64E90:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A64EBC; }
    goto L_08A64EA8;
L_08A64EA8:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64EC4; }
    goto L_08A64EB8;
L_08A64EB8:;
    goto L_08A64EBC;
L_08A64EBC:;
    sp = sp + 16;
    return;
L_08A64EC4:;
    v0 = func_08A63F30(a0);
    goto L_08A64ECC;
L_08A64ECC:;
    v1 = LD_U16(v0+18);
    v1 = v1 + 1;
    ST16(v0+18, v1);
    goto L_08A64EB8;
}

/* 08A64EDC */
u64 func_08A64EDC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64EDC:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    s0 = a1 & 0xff;
    if (cnd_) { goto L_08A64F08; }
    goto L_08A64EF8;
L_08A64EF8:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64F18; }
    goto L_08A64F08;
L_08A64F08:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A64F18:;
    v0 = func_08A63F30(a0);
    goto L_08A64F20;
L_08A64F20:;
    v1 = (u32)(s32)LD_S16(v0+20);
    a1 = v1 + 1;
    v1 = v1 - 1;
    if (s0 == 0) v1 = a1;
    ST16(v0+20, v1);
    goto L_08A64F08;
}

/* 08A64F38 */
u64 func_08A64F38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A64F38:;
    sp = sp - 16;
    v0 = D_08B2AA24 - (-21980);
    s2 = (u32)(s32)(s16)a1;
    v1 = LD32(v0-21980);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A64F70; }
    goto L_08A64F60;
L_08A64F60:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A64F88; }
    goto L_08A64F70;
L_08A64F70:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A64F88:;
    v0 = func_08A63F30(a0);
    goto L_08A64F90;
L_08A64F90:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08A63F30(a0);
    goto L_08A64F9C;
L_08A64F9C:;
    v1 = LD_U16(v0+24);
    v1 = s2 + v1;
    ST16(s0+24, v1);
    goto L_08A64F70;
}

/* 08A64FAC */
u32 func_08A64FAC(void)
{
    u32 v0 = 0;
L_08A64FAC:;
    v0 = 0 + 0;
    return v0;
}

/* 08A64FB4 */
rv_t func_08A64FB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A64FB4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C315B4 - (5556);
    t1 = D_08C315C4 - (5572);
    t2 = D_08C315D4 - (5588);
    a1 = a1 & a0;
    v1 = t0 + 5556;
    a2 = t1 + 5572;
    cnd_ = a1 == 0;
    a3 = t2 + 5588;
    if (cnd_) { goto L_08A6506C; }
    goto L_08A64FE4;
L_08A64FE4:;
    v0 = D_08AF0844 - (2116);
    f4 = BITSF(LD32(v0+2116));
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
    ST32(t0+5556, FBITS(f2));
    ST32(t1+5572, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+5588, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A6506C;
L_08A6506C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A65074 */
rv_t func_08A65074(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65074:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A64FB4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65088;
L_08A65088:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A65094 */
u64 func_08A65094(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65094:;
    sp = sp - 16;
    { u64 r_ = func_0890EC50(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A650A4;
L_08A650A4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A650B0 */
void func_08A650B0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A650B0:;
    a0 = D_08AE68F0 - (26864);
    sp = sp - 16;
    a0 = a0 + 26864;
    { rv_t r_ = func_08827B7C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A650C4;
L_08A650C4:;
    sp = sp + 16;
    return;
}

/* 08A650D0 */
void func_08A650D0(void)
{
L_08A650D0:;
    return;
}

/* 08A650D8 */
u32 func_08A650D8(void)
{
    u32 v0 = 0;
L_08A650D8:;
    v0 = 1;
    return v0;
}

/* 08A650E0 */
u32 func_08A650E0(void)
{
    u32 v0 = 0;
L_08A650E0:;
    v0 = 1;
    return v0;
}

/* 08A650E8 */
u32 func_08A650E8(void)
{
    u32 v0 = 0;
L_08A650E8:;
    v0 = 1;
    return v0;
}

/* 08A650F0 */
void func_08A650F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A650F0:;
    v0 = D_08B157B8 - (22456);
    v0 = v0 + 22456;
    v1 = (u32)-1;
    ST32(a0+4, a1);
    ST32(a0, v0);
    ST32(a0+12, v1);
    ST8(a0+8, 0);
    return;
}

/* 08A65110 */
rv_t func_08A65110(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65110:;
    sp = sp - 16;
    v1 = D_08B157B8 - (22456);
    s0 = a0 + 0;
    v1 = v1 + 22456;
    a1 = (u32)-1;
    v0 = LD32(a0+12);
    ST32(s0, v1);
    cnd_ = v0 == a1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A65164; }
    goto L_08A6513C;
L_08A6513C:;
    v0 = func_088D51E0(a0);
    goto L_08A65144;
L_08A65144:;
    cnd_ = v0 == 0;
    a0 = s0 + 12;
    if (cnd_) { goto L_08A65174; }
    goto L_08A6514C;
L_08A6514C:;
    { rv_t r_ = func_088D514C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65154;
L_08A65154:;
    v0 = D_08C31658 - (5720);
    ST8(v0+5720, 0);
    v0 = (u32)-1;
    goto L_08A65160;
L_08A65160:;
    ST32(s0+12, v0);
    goto L_08A65164;
L_08A65164:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A65174:;
    { u64 r_ = func_088D51B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6517C;
L_08A6517C:;
    v0 = (u32)-1;
    goto L_08A65160;
}

/* 08A65184 */
rv_t func_08A65184(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65184:;
    sp = sp - 16;
    v1 = D_08B157B8 - (22456);
    s0 = a0 + 0;
    v1 = v1 + 22456;
    a1 = (u32)-1;
    v0 = LD32(a0+12);
    ST32(s0, v1);
    cnd_ = v0 == a1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A651D8; }
    goto L_08A651B0;
L_08A651B0:;
    v0 = func_088D51E0(a0);
    goto L_08A651B8;
L_08A651B8:;
    cnd_ = v0 == 0;
    a0 = s0 + 12;
    if (cnd_) { goto L_08A651F0; }
    goto L_08A651C0;
L_08A651C0:;
    { rv_t r_ = func_088D514C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A651C8;
L_08A651C8:;
    v0 = D_08C31658 - (5720);
    ST8(v0+5720, 0);
    v0 = (u32)-1;
    goto L_08A651D4;
L_08A651D4:;
    ST32(s0+12, v0);
    goto L_08A651D8;
L_08A651D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A651E0;
L_08A651E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A651F0:;
    { u64 r_ = func_088D51B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A651F8;
L_08A651F8:;
    v0 = (u32)-1;
    goto L_08A651D4;
}

/* 08A65200 */
u32 func_08A65200(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A65200:;
    sp = sp - 32;
    v0 = D_08C3165C - (5724);
    s1 = a2 + 0;
    s0 = a1 + 0;
    a3 = LD32(v0+5724);
    v0 = v0 + 5724;
    ST32(sp, v0);
    ST32(sp+4, a3);
    cnd_ = a3 == 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_08A65260; }
    goto L_08A65234;
L_08A65234:;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A65258; }
    goto L_08A65240;
L_08A65240:;
    v0 = LD32(v1+8);
    cnd_ = v0 == s0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08A6527C; }
    goto L_08A6524C;
L_08A6524C:;
    { u64 r_ = func_08AD2560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65254;
L_08A65254:;
    a3 = LD32(sp+4);
    goto L_08A65258;
L_08A65258:;
    cnd_ = a3 != 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_08A65234; }
    goto L_08A65260;
L_08A65260:;
    a1 = 0 + 0;
    goto L_08A6526C;
L_08A6526C:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_08A6527C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != s1;
    if (cnd_) { goto L_08A6524C; }
    goto L_08A65288;
L_08A65288:;
    goto L_08A6526C;
}

/* 08A65290 */
u32 func_08A65290(u32 a1, u32 a2)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65290:;
    sp = sp - 16;
    v0 = func_08A65200(a1, a2);
    goto L_08A652A0;
L_08A652A0:;
    v0 = 0 < v0;
    sp = sp + 16;
    return v0;
}

/* 08A652B0 */
void func_08A652B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A652B0:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    ST32(sp, 0);
    a0 = v0 + 0;
    v1 = LD32(v0);
    v0 = LD32(v1+256);
    t_ = v0;
    s2 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A652E4;
L_08A652E4:;
    a0 = LD32(s0+4);
    s1 = v0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08A65300;
L_08A65300:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65310;
L_08A65310:;
    a1 = LD32(s2);
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65320;
L_08A65320:;
    ST32(s2, v0);
    sp = sp + 32;
    return;
}

/* 08A6533C */
u32 func_08A6533C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A6533C:;
    sp = sp - 64;
    v0 = D_08C2C3E0 - (-15392);
    s2 = a1 + 0;
    a3 = 0 + 0;
    a2 = LD32(v0-15392);
    cnd_ = a2 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A654B8; }
    goto L_08A65368;
L_08A65368:;
    t0 = LD32(a0+4);
    a1 = LD32(a2);
    a0 = LD32(t0);
    v0 = LD32(a1-12);
    v1 = LD32(a0-16);
    v0 = a2 + v0;
    a0 = LD32(v0+4);
    v1 = t0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a0 == v0;
    a3 = 1;
    if (cnd_) { goto L_08A654B8; }
    goto L_08A65394;
L_08A65394:;
    a1 = LD32(a2+20);
    v0 = 999;
    a2 = D_08C2B3A4 - (-19548);
    v1 = a2 - 19548;
    cnd_ = a1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A653FC; }
    goto L_08A653AC;
L_08A653AC:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-19548);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A653FC; }
    goto L_08A653D0;
L_08A653D0:;
    a0 = LD32(a2);
    goto L_08A653D4;
L_08A653D4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A654E0; }
    goto L_08A653EC;
L_08A653EC:;
    a2 = LD32(a2+4);
    goto L_08A653F0;
L_08A653F0:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A653D4; }
    goto L_08A653F8;
L_08A653F8:;
    a0 = 0 + 0;
    goto L_08A653FC;
L_08A653FC:;
    cnd_ = a0 == 0;
    s0 = sp + 0;
    if (cnd_) { goto L_08A654D4; }
    goto L_08A65404;
L_08A65404:;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65414;
L_08A65414:;
    t0 = LD32(s1+4);
    goto L_08A65418;
L_08A65418:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    v1 = LD32(t0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = t0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65440;
L_08A65440:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {vr0=BITSF(v0);}
    v1 = FBITS(f3);
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f5 = BITSF(LD32(s2+12));
    v0 = 1;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f5, 12);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_08A654B4; }
    goto L_08A654B0;
L_08A654B0:;
    v0 = 0 + 0;
    goto L_08A654B4;
L_08A654B4:;
    a3 = v0 + 0;
    goto L_08A654B8;
L_08A654B8:;
    v0 = a3 + 0;
    sp = sp + 64;
    { v[0]=vr0;return v0; }
L_08A654D4:;
    v0 = D_08B159FC - (23036);
    v0 = LD32(v0+23036);
    goto L_08A65418;
L_08A654E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A653F0; }
    goto L_08A654EC;
L_08A654EC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A653F0; }
    goto L_08A654F8;
L_08A654F8:;
    goto L_08A653FC;
    v[0]=vr0;
}

/* 08A65500 */
rv_t func_08A65500(u32 a0, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65500:;
    sp = sp - 16;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A6553C; }
    goto L_08A6551C;
L_08A6551C:;
    v0 = D_08C2C3E0 - (-15392);
    s0 = LD32(v0-15392);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6553C; }
    goto L_08A6552C;
L_08A6552C:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A6554C; }
    goto L_08A65538;
L_08A65538:;
    v0 = 0 + 0;
    goto L_08A6553C;
L_08A6553C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6554C:;
    a3 = LD32(s0+20);
    a2 = D_08C2A9D8 - (-22056);
    v0 = LD32(v1-16);
    t0 = a2 - 22056;
    a1 = 0 + 0;
    v0 = a0 + v0;
    v1 = LD_U16(v0+8);
    v0 = 999;
    v1 = v1 ^ 0x8004;
    cnd_ = a3 == v0;
    t1 = v1 < 0x1u;
    if (cnd_) { goto L_08A655C8; }
    goto L_08A65578;
L_08A65578:;
    v0 = LD32(t0+4);
    v1 = LD32(a2-22056);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A655C8; }
    goto L_08A6559C;
L_08A6559C:;
    a1 = LD32(a2);
    goto L_08A655A0;
L_08A655A0:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A65600; }
    goto L_08A655B8;
L_08A655B8:;
    a2 = LD32(a2+4);
    goto L_08A655BC;
L_08A655BC:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08A655A0; }
    goto L_08A655C4;
L_08A655C4:;
    a1 = 0 + 0;
    goto L_08A655C8;
L_08A655C8:;
    cnd_ = t1 == 0;
    v1 = 0 < a1;
    if (cnd_) { goto L_08A655F8; }
    goto L_08A655D0;
L_08A655D0:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6553C; }
    goto L_08A655D8;
L_08A655D8:;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A655E8;
L_08A655E8:;
    v1 = LD32(s0+24);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    goto L_08A6553C;
L_08A655F8:;
    v0 = 1;
    goto L_08A6553C;
L_08A65600:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A655BC; }
    goto L_08A6560C;
L_08A6560C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A655BC; }
    goto L_08A65618;
L_08A65618:;
    goto L_08A655C8;
}

/* 08A65620 */
rv_t func_08A65620(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65620:;
    sp = sp - 16;
    v0 = a1 + 0;
    a0 = a1 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A6567C; }
    goto L_08A6563C;
L_08A6563C:;
    v0 = func_088D36BC(a0, a1);
    goto L_08A65644;
L_08A65644:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A6567C; }
    goto L_08A65650;
L_08A65650:;
    v1 = LD32(v0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65660;
L_08A65660:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A6566C; }
    goto L_08A65668;
L_08A65668:;
    v0 = LD32(s0+20);
    goto L_08A6566C;
L_08A6566C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A6567C:;
    v0 = 0 + 0;
    goto L_08A6566C;
}

/* 08A65684 */
float func_08A65684(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A65684:;
    v0 = D_08AF084C - (2124);
    f0 = BITSF(LD32(v0+2124));
    return f0;
}

/* 08A65690 */
float func_08A65690(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A65690:;
    sp = sp - 48;
    s1 = a0 + 0;
    v0 = LD32(a1+4);
    s0 = LD32(a1);
    a3 = v0 & 0x1;
    ST32(sp, s0);
    s3 = v0 >> 1;
    cnd_ = s0 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_08A65880; }
    goto L_08A656D4;
L_08A656D4:;
    a1 = LD32(a0+4);
    f0 = BITSF(0);
    v1 = LD32(a1);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_08A65884; }
    goto L_08A656FC;
L_08A656FC:;
    v0 = LD_U8(a1+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A65884; }
    goto L_08A65708;
L_08A65708:;
    v0 = LD_U8(a1+68);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A65884; }
    goto L_08A65714;
L_08A65714:;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08A65930; }
    goto L_08A6571C;
L_08A6571C:;
    cnd_ = a2 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A65920; }
    goto L_08A65724;
L_08A65724:;
    cnd_ = s4 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A65880; }
    goto L_08A6572C;
L_08A6572C:;
    a1 = s4 + 0;
    { rv_t r_ = func_08A65620(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65734;
L_08A65734:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A65880; }
    goto L_08A6573C;
L_08A6573C:;
    v0 = func_088D5200();
    goto L_08A65744;
L_08A65744:;
    a1 = s2 + 0;
    a0 = s1 + 0;
    s6 = 0 < v0;
    v0 = func_08A6533C(a0, a1);
    goto L_08A65754;
L_08A65754:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    s2 = v0 + 0;
    v0 = func_08A65290(a1, a2);
    goto L_08A65768;
L_08A65768:;
    a0 = s1 + 0;
    s5 = v0 + 0;
    { rv_t r_ = func_08A65500(a0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65774;
L_08A65774:;
    t1 = v0 + 0;
    v0 = LD_U8(s4+76);
    a0 = 100;
    cnd_ = v0 == a0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A657D4; }
    goto L_08A65788;
L_08A65788:;
    a2 = D_08B25AC0 - (23232);
    v0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v0;
    ST32(a3+4, a1);
    ST32(a2+23232, v0);
    v1 = LD_U8(s4+76);
    a0 = hi;
    a0 = a0 + 1;
    v1 = (s32)v1 < (s32)a0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A657D8; }
    goto L_08A657D4;
L_08A657D4:;
    t0 = 1;
    goto L_08A657D8;
L_08A657D8:;
    cnd_ = s2 == 0;
    v1 = t0 & 0xff;
    if (cnd_) { goto L_08A658EC; }
    goto L_08A657E0;
L_08A657E0:;
    s2 = D_08C31658 - (5720);
    v0 = LD_U8(s2+5720);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08C31659 - (5721); goto L_08A658F0; }
    goto L_08A657F0;
L_08A657F0:;
    cnd_ = s6 != 0;
    v0 = D_08C31659 - (5721);
    if (cnd_) { goto L_08A658F0; }
    goto L_08A657F8;
L_08A657F8:;
    cnd_ = s5 != 0;
    if (cnd_) { goto L_08A658F0; }
    goto L_08A65800;
L_08A65800:;
    cnd_ = t1 == 0;
    if (cnd_) { v1 = LD_U8(v0+5721); goto L_08A658F4; }
    goto L_08A65808;
L_08A65808:;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s1+4); goto L_08A658C0; }
    goto L_08A65810;
L_08A65810:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65818;
L_08A65818:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    s1 = D_08C3165C - (5724);
    s2 = v0 + 0;
    f0 = func_08A65684();
    goto L_08A6582C;
L_08A6582C:;
    v0 = s1 + 5724;
    v0 = LD32(v0+8);
    ST32(s2, FBITS(f0));
    ST32(s2+8, s0);
    cnd_ = v0 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_08A658B0; }
    goto L_08A65844;
L_08A65844:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6584C;
L_08A6584C:;
    a0 = v0 + 0;
    goto L_08A65850;
L_08A65850:;
    v0 = LD32(s1+5724);
    ST32(a0, s2);
    v1 = s1 + 5724;
    ST32(a0+8, v0);
    cnd_ = v0 == 0;
    ST32(a0+4, 0);
    if (cnd_) { goto L_08A658A8; }
    goto L_08A65868;
L_08A65868:;
    ST32(v0+4, a0);
    goto L_08A6586C;
L_08A6586C:;
    v1 = s1 + 5724;
    v0 = LD32(v1+16);
    ST32(s1+5724, a0);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    goto L_08A65880;
L_08A65880:;
    goto L_08A65884;
L_08A65884:;
    goto L_08A65888;
L_08A65888:;
    sp = sp + 48;
    return f0;
L_08A658A8:;
    ST32(v1+4, a0);
    goto L_08A6586C;
L_08A658B0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A658B8;
L_08A658B8:;
    a0 = v0 + 0;
    goto L_08A65850;
L_08A658C0:;
    a2 = s1 + 12;
    a0 = s4 + 0;
    a1 = LD32(v1);
    v0 = LD32(a1-16);
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    func_088D4F1C(a0, a1, a2);
    goto L_08A658DC;
L_08A658DC:;
    v0 = 1;
    ST8(s1+8, v0);
    ST8(s2+5720, v0);
    goto L_08A65810;
L_08A658EC:;
    v0 = D_08C31659 - (5721);
    goto L_08A658F0;
L_08A658F0:;
    v1 = LD_U8(v0+5721);
    goto L_08A658F4;
L_08A658F4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A65884; }
    goto L_08A658FC;
L_08A658FC:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A65888; }
    goto L_08A65908;
L_08A65908:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    v0 = func_08A65200(a1, a2);
    goto L_08A65918;
L_08A65918:;
    goto L_08A65884;
L_08A65920:;
    a0 = a2 + 0;
    v0 = func_088D4EF8(a0);
    goto L_08A65928;
L_08A65928:;
    s4 = v0 + 0;
    goto L_08A65724;
L_08A65930:;
    a1 = sp + 0;
    func_08A652B0(a0, a1);
    goto L_08A65938;
L_08A65938:;
    a2 = LD32(sp);
    goto L_08A6571C;
}

/* 08A65940 */
void func_08A65940(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65940:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A65974; }
    goto L_08A65964;
L_08A65964:;
    v0 = func_088D51E0(a0);
    goto L_08A6596C;
L_08A6596C:;
    cnd_ = v0 == 0;
    a0 = s0 + 12;
    if (cnd_) { goto L_08A659B0; }
    goto L_08A65974;
L_08A65974:;
    v0 = LD_U8(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A65994; }
    goto L_08A65980;
L_08A65980:;
    v1 = LD32(s0+12);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08C31658 - (5720);
    if (cnd_) { goto L_08A659A4; }
    goto L_08A65990;
L_08A65990:;
    goto L_08A65994;
L_08A65994:;
    sp = sp + 16;
    return;
L_08A659A4:;
    ST8(s0+8, 0);
    ST8(v0+5720, 0);
    goto L_08A65990;
L_08A659B0:;
    { u64 r_ = func_088D51B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A659B8;
L_08A659B8:;
    v0 = D_08C31658 - (5720);
    ST8(s0+8, 0);
    ST32(s0+12, s1);
    ST8(v0+5720, 0);
    goto L_08A65974;
}

/* 08A659CC */
void func_08A659CC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A659CC:;
    sp = sp - 64;
    s1 = D_08C3165C - (5724);
    v1 = s1 + 5724;
    v0 = LD32(s1+5724);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A65A20; }
    goto L_08A659FC;
L_08A659FC:;
    goto L_08A65A00;
L_08A65A00:;
    sp = sp + 64;
    return;
L_08A65A20:;
    a0 = sp + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD2560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65A30;
L_08A65A30:;
    a0 = LD32(sp+4);
    cnd_ = a0 == 0;
    s3 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A659FC; }
    goto L_08A65A3C;
L_08A65A3C:;
    f20 = BITSF(0);
    s4 = s1 + 0;
    s0 = LD32(a0);
    goto L_08A65A48;
L_08A65A48:;
    a0 = sp + 0;
    { u64 r_ = func_08AD2560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65A50;
L_08A65A50:;
    cnd_ = s0 == 0;
    f1 = BITSF(LD32(s3-31328));
    if (cnd_) { goto L_08A65AA0; }
    goto L_08A65A58;
L_08A65A58:;
    f0 = BITSF(LD32(s0));
    f0 = f0 - f1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(s0, FBITS(f0));
    if (cnd_) { goto L_08A65AA0; }
    goto L_08A65A70;
L_08A65A70:;
    a0 = LD32(s1+5724);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A65A98; }
    goto L_08A65A7C;
L_08A65A7C:;
    s2 = s4 + 5724;
    v0 = LD32(a0);
    goto L_08A65A84;
L_08A65A84:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(a0+8); goto L_08A65AB4; }
    goto L_08A65A8C;
L_08A65A8C:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A65A84; }
    goto L_08A65A98;
L_08A65A98:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65AA0;
L_08A65AA0:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08A65A48; }
    goto L_08A65AAC;
L_08A65AAC:;
    goto L_08A65A00;
L_08A65AB4:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08A65B04; }
    goto L_08A65ABC;
L_08A65ABC:;
    ST32(v1+4, v0);
    goto L_08A65AC0;
L_08A65AC0:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+5724, v1); goto L_08A65AD0; }
    goto L_08A65ACC;
L_08A65ACC:;
    ST32(v0+8, v1);
    goto L_08A65AD0;
L_08A65AD0:;
    v0 = LD32(s2+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A65AF4; }
    goto L_08A65ADC;
L_08A65ADC:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65AE4;
L_08A65AE4:;
    v0 = LD32(s2+16);
    goto L_08A65AE8;
L_08A65AE8:;
    v0 = v0 - 1;
    ST32(s2+16, v0);
    goto L_08A65A98;
L_08A65AF4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65AFC;
L_08A65AFC:;
    v0 = LD32(s2+16);
    goto L_08A65AE8;
L_08A65B04:;
    ST32(s2+4, v0);
    v1 = LD32(a0+8);
    goto L_08A65AC0;
}

/* 08A65B10 */
void func_08A65B10(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A65B10:;
    sp = sp - 32;
    s2 = D_08C3165C - (5724);
    v0 = s2 + 5724;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AD2560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65B3C;
L_08A65B3C:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    s0 = LD32(s2+5724);
    if (cnd_) { goto L_08A65BBC; }
    goto L_08A65B48;
L_08A65B48:;
    cnd_ = s0 == 0;
    v0 = D_08C3165C - (5724);
    if (cnd_) { goto L_08A65B78; }
    goto L_08A65B50;
L_08A65B50:;
    s1 = v0 + 5724;
    v1 = LD32(s1+12);
    goto L_08A65B58;
L_08A65B58:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08A65BAC; }
    goto L_08A65B68;
L_08A65B68:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65B70;
L_08A65B70:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08A65B58; }
    goto L_08A65B78;
L_08A65B78:;
    v0 = s2 + 5724;
    ST32(v0+16, 0);
    a0 = D_08AE6904 - (26884);
    a0 = a0 + 26884;
    ST32(v0+4, 0);
    ST32(s2+5724, 0);
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65B94;
L_08A65B94:;
    sp = sp + 32;
    return;
L_08A65BAC:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65BB4;
L_08A65BB4:;
    goto L_08A65B70;
L_08A65BBC:;
    a0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65BC4;
L_08A65BC4:;
    a0 = sp + 0;
    { u64 r_ = func_08AD2560(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65BCC;
L_08A65BCC:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    s0 = LD32(s2+5724);
    if (cnd_) { goto L_08A65BBC; }
    goto L_08A65BD8;
L_08A65BD8:;
    goto L_08A65B48;
}

/* 08A65BE0 */
void func_08A65BE0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65BE0:;
    a0 = D_08AE6904 - (26884);
    a1 = D_08C31659 - (5721);
    sp = sp - 16;
    a0 = a0 + 26884;
    a1 = a1 + 5721;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = D_08C31658 - (5720);
    ST8(v0+5720, 0);
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65C0C;
L_08A65C0C:;
    sp = sp + 16;
    return;
}

/* 08A65C18 */
rv_t func_08A65C18(u32 a0, u32 a1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65C18:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    v1 = a0 < 0x1u;
    t5 = D_08C31670 - (5744);
    t4 = D_08C3165C - (5724);
    v0 = v0 < 0x1u;
    sp = sp - 16;
    a3 = t5 + 5744;
    t6 = D_08C31628 - (5672);
    t7 = D_08C31638 - (5688);
    t8 = D_08C31648 - (5704);
    t0 = t4 + 5724;
    v1 = a1 & v1;
    a1 = a1 & v0;
    t1 = t6 + 5672;
    t2 = t7 + 5688;
    t3 = t8 + 5704;
    a2 = a3 + 12;
    cnd_ = a1 == 0;
    a0 = t0 + 0;
    if (cnd_) { goto L_08A65D8C; }
    goto L_08A65C70;
L_08A65C70:;
    v0 = D_08AF0850 - (2128);
    f2 = BITSF(LD32(v0+2128));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(a3+4, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(a3+8, 0);
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f2;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f2;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f4 = f4 * f2;
    v0 = D_08AF0854 - (2132);
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f2;
    f0 = BITSF(LD32(v0+2132));
    v0 = D_08AF0858 - (2136);
    f3 = f3 * f2;
    ST32(t5+5744, 0);
    ST32(a3+12, 0);
    ST32(a3+24, 0);
    ST32(t3+12, FBITS(f1));
    ST32(t1+4, FBITS(f5));
    ST32(t1+8, FBITS(f6));
    ST32(t1+12, FBITS(f1));
    ST32(t2+4, FBITS(f3));
    ST32(t2+8, FBITS(f3));
    ST32(t6+5672, FBITS(f4));
    ST32(t7+5688, FBITS(f6));
    ST32(t2+12, FBITS(f1));
    ST32(t8+5704, FBITS(f1));
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v0+2136));
    ST32(a2+8, 0);
    v0 = D_08AF085C - (2140);
    a2 = a3 + 24;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(v0+2140));
    ST32(a2+8, 0);
    v0 = D_08AF0860 - (2144);
    a2 = a3 + 36;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, 0);
    a2 = a3 + 48;
    ST32(t4+5724, 0);
    ST32(t0+16, 0);
    ST32(t0+4, 0);
    ST32(t0+8, 0);
    ST32(t0+12, 0);
    ST32(a3+36, 0);
    ST32(a3+48, 0);
    f0 = BITSF(LD32(v0+2144));
    v0 = D_08AF0864 - (2148);
    ST32(a2+8, 0);
    ST32(a2+4, FBITS(f0));
    a2 = a3 + 60;
    f0 = BITSF(LD32(v0+2148));
    ST32(a3+60, 0);
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, 0);
    goto L_08A65D8C;
L_08A65D8C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A65DA0; }
    goto L_08A65D94;
L_08A65D94:;
    goto L_08A65D98;
L_08A65D98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A65DA0:;
    { rv_t r_ = func_08AD2584(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65DA8;
L_08A65DA8:;
    goto L_08A65D98;
}

/* 08A65DB0 */
rv_t func_08A65DB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65DB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A65C18(a0, a1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65DC4;
L_08A65DC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A65DD0 */
rv_t func_08A65DD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65DD0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A65C18(a0, a1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65DE4;
L_08A65DE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A65DF0 */
u64 func_08A65DF0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65DF0:;
    v1 = a1 ^ 0x3e7;
    v1 = 0 < v1;
    v0 = 0 < a0;
    sp = sp - 16;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A65F1C; }
    goto L_08A65E18;
L_08A65E18:;
    a2 = D_08C2B3A4 - (-19548);
    v0 = 999;
    s1 = LD32(a0+24);
    cnd_ = a1 == v0;
    v1 = a2 - 19548;
    if (cnd_) { goto L_08A65F1C; }
    goto L_08A65E2C;
L_08A65E2C:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-19548);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A65E7C; }
    goto L_08A65E50;
L_08A65E50:;
    a0 = LD32(a2);
    goto L_08A65E54;
L_08A65E54:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A65FA0; }
    goto L_08A65E6C;
L_08A65E6C:;
    a2 = LD32(a2+4);
    goto L_08A65E70;
L_08A65E70:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A65E54; }
    goto L_08A65E78;
L_08A65E78:;
    a0 = 0 + 0;
    goto L_08A65E7C;
L_08A65E7C:;
    cnd_ = a0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A65F1C; }
    goto L_08A65E84;
L_08A65E84:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = a0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = 999;
    if (cnd_) { goto L_08A65F08; }
    goto L_08A65EA0;
L_08A65EA0:;
    a0 = LD32(s0+524);
    a2 = D_08C2A6C8 - (-22840);
    a1 = a2 - 22840;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A65F04; }
    goto L_08A65EB4;
L_08A65EB4:;
    v0 = LD32(a1+4);
    v1 = LD32(a2-22840);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A65F04; }
    goto L_08A65ED8;
L_08A65ED8:;
    a1 = LD32(a2);
    goto L_08A65EDC;
L_08A65EDC:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A65F80; }
    goto L_08A65EF4;
L_08A65EF4:;
    a2 = LD32(a2+4);
    goto L_08A65EF8;
L_08A65EF8:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08A65EDC; }
    goto L_08A65F00;
L_08A65F00:;
    v1 = 0 + 0;
    goto L_08A65F04;
L_08A65F04:;
    s0 = v1 + 0;
    goto L_08A65F08;
L_08A65F08:;
    v0 = 0 < s0;
    v1 = 0 < s1;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A65F34; }
    goto L_08A65F1C;
L_08A65F1C:;
    goto L_08A65F20;
L_08A65F20:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A65F34:;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A65F40;
L_08A65F40:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65F48;
L_08A65F48:;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = LD32(s1+4); goto L_08A65F54; }
    goto L_08A65F50;
L_08A65F50:;
    s2 = LD32(s1);
    goto L_08A65F54;
L_08A65F54:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08A65F68;
L_08A65F68:;
    a2 = LD_U8(s1+8);
    a0 = s2 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_08A65FC0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A65F78;
L_08A65F78:;
    goto L_08A65F20;
L_08A65F80:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08A65EF4; }
    goto L_08A65F8C;
L_08A65F8C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A65EF8; }
    goto L_08A65F98;
L_08A65F98:;
    s0 = v1 + 0;
    goto L_08A65F08;
L_08A65FA0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A65E70; }
    goto L_08A65FAC;
L_08A65FAC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A65E70; }
    goto L_08A65FB8;
L_08A65FB8:;
    goto L_08A65E7C;
}

/* 08A65FC0 */
u64 func_08A65FC0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A65FC0:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A65FF0; }
    goto L_08A65FD0;
L_08A65FD0:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A65FFC; }
    goto L_08A65FD8;
L_08A65FD8:;
    v0 = func_08A6600C(a0, a1);
    goto L_08A65FE0;
L_08A65FE0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A65FF0; }
    goto L_08A65FE8;
L_08A65FE8:;
    v0 = D_08C316E8 - (5864);
    ST32(v0+5864, v1);
    goto L_08A65FF0;
L_08A65FF0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A65FFC:;
    v0 = func_088D4EF8(a0);
    goto L_08A66004;
L_08A66004:;
    goto L_08A65FE0;
}

/* 08A6600C */
u32 func_08A6600C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6600C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6602C;
L_08A6602C:;
    a1 = s0 + 0;
    v1 = LD32(sp);
    a2 = 0 + 0;
    v0 = 0 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A66054; }
    goto L_08A66044;
L_08A66044:;
    goto L_08A66048;
L_08A66048:;
    sp = sp + 32;
    return v0;
L_08A66054:;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6605C;
L_08A6605C:;
    a0 = v0 + 0;
    v0 = func_088D4EF8(a0);
    goto L_08A66064;
L_08A66064:;
    goto L_08A66048;
}

/* 08A6606C */
u64 func_08A6606C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A6606C:;
    sp = sp - 32;
    s2 = a2 & 0xff;
    s3 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A660A4; }
    goto L_08A66094;
L_08A66094:;
    { u64 r_ = func_08A66240(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6609C;
L_08A6609C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A66110; }
    goto L_08A660A4;
L_08A660A4:;
    a0 = 128;
    a1 = 12;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A660B8;
L_08A660B8:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A660E4; }
    goto L_08A660C4;
L_08A660C4:;
    v0 = 1;
    cnd_ = s0 == v0;
    ST8(v1+8, s2);
    if (cnd_) { goto L_08A66144; }
    goto L_08A660D0;
L_08A660D0:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A66130; }
    goto L_08A660DC;
L_08A660DC:;
    cnd_ = s0 == v0;
    if (cnd_) { ST32(v1, s3); goto L_08A66128; }
    goto L_08A660E4;
L_08A660E4:;
    v0 = D_08C2C3E0 - (-15392);
    goto L_08A660E8;
L_08A660E8:;
    a0 = LD32(v0-15392);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A66104; }
    goto L_08A660F4;
L_08A660F4:;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66104;
L_08A66104:;
    a0 = s1 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6610C;
L_08A6610C:;
    goto L_08A66110;
L_08A66110:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A66128:;
    ST32(v1+4, s3);
    goto L_08A660E4;
L_08A66130:;
    cnd_ = s0 != 0;
    v0 = D_08C2C3E0 - (-15392);
    if (cnd_) { goto L_08A660E8; }
    goto L_08A66138;
L_08A66138:;
    ST32(v1, s3);
    ST32(v1+4, 0);
    goto L_08A660E8;
L_08A66144:;
    ST32(v1+4, s3);
    ST32(v1, 0);
    goto L_08A660E4;
}

/* 08A66150 */
rv_t func_08A66150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A66150:;
    sp = sp - 32;
    s0 = a3 & 0xff;
    s5 = a2 + 0;
    s4 = a0 + 0;
    s3 = a1 + 0;
    s2 = 1;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A66230; }
    goto L_08A66188;
L_08A66188:;
    a0 = s3 + 0;
    cnd_ = s0 != 0;
    s1 = 1;
    if (cnd_) { goto L_08A66220; }
    goto L_08A66194;
L_08A66194:;
    a0 = 128;
    a1 = 12;
    a2 = 0 + 0;
    cnd_ = s2 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A661B0; }
    goto L_08A661A8;
L_08A661A8:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A66200; }
    goto L_08A661B0;
L_08A661B0:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A661B8;
L_08A661B8:;
    v1 = LD32(v0+24);
    a3 = v0 + 0;
    a0 = v0 + 0;
    t0 = 0 + 0;
    v0 = 0 + 0;
    a1 = 1;
    a2 = 1;
    if (s1 != 0) v0 = s3;
    cnd_ = v1 == 0;
    if (s2 != 0) t0 = s4;
    if (cnd_) { goto L_08A661EC; }
    goto L_08A661E0;
L_08A661E0:;
    ST8(v1+8, s0);
    ST32(v1+4, v0);
    ST32(v1, t0);
    goto L_08A661EC;
L_08A661EC:;
    v0 = 5;
    ST32(a3+4, s5);
    ST32(a3, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A661FC;
L_08A661FC:;
    goto L_08A66200;
L_08A66200:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A66220:;
    { u64 r_ = func_08A66240(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66228;
L_08A66228:;
    s1 = v0 + 0;
    goto L_08A66194;
L_08A66230:;
    { u64 r_ = func_08A66240(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66238;
L_08A66238:;
    s2 = v0 + 0;
    goto L_08A66188;
}

/* 08A66240 */
u64 func_08A66240(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A66240:;
    v0 = D_08C29328 - (-27864);
    a1 = LD32(v0-27864);
    v1 = 0xc7450000u;
    v1 = v1 | 0xd166;
    a0 = a0 ^ v1;
    v0 = 5;
    cnd_ = a1 == v0;
    a0 = a0 < 0x1u;
    if (cnd_) { goto L_08A66264; }
    goto L_08A66260;
L_08A66260:;
    a0 = 1;
    goto L_08A66264;
L_08A66264:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A6626C */
void func_08A6626C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6626C:;
    sp = sp - 16;
    v0 = D_08C316EF - (5871);
    v1 = LD_U8(v0+5871);
    cnd_ = v1 != 0;
    s1 = D_08C316E8 - (5864);
    if (cnd_) { goto L_08A662A0; }
    goto L_08A6628C;
L_08A6628C:;
    goto L_08A66290;
L_08A66290:;
    sp = sp + 16;
    return;
L_08A662A0:;
    v0 = func_088D5200();
    goto L_08A662A8;
L_08A662A8:;
    a0 = LD32(s1+5864);
    v1 = v0 < 0x1u;
    s0 = v0 + 0;
    v0 = 0 < a0;
    v0 = v0 & v1;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A662D8; }
    goto L_08A662C8;
L_08A662C8:;
    a0 = s0 + 0;
    func_08A662E8(a0);
    goto L_08A662D0;
L_08A662D0:;
    goto L_08A66290;
L_08A662D8:;
    func_088D4F1C(a0, a1, a2);
    goto L_08A662E0;
L_08A662E0:;
    ST32(s1+5864, 0);
    goto L_08A662C8;
}

/* 08A662E8 */
void func_08A662E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A662E8:;
    sp = sp - 16;
    s0 = D_08C316ED - (5869);
    s2 = 0 + 0;
    s1 = a0 + 0;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6630C;
L_08A6630C:;
    v0 = v0 & 0xff;
    v1 = LD_U8(s0+5869);
    cnd_ = v0 == v1;
    v0 = LD_U8(s0+5869);
    if (cnd_) { goto L_08A66330; }
    goto L_08A6631C;
L_08A6631C:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66324;
L_08A66324:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A66438; }
    goto L_08A6632C;
L_08A6632C:;
    v0 = LD_U8(s0+5869);
    goto L_08A66330;
L_08A66330:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A66370; }
    goto L_08A66338;
L_08A66338:;
    a0 = s1 < 0x2u;
    cnd_ = a0 == 0;
    a1 = D_08C31658 - (5720);
    if (cnd_) { goto L_08A663F4; }
    goto L_08A66344;
L_08A66344:;
    v0 = 1;
    cnd_ = s1 == v0;
    v0 = LD_U8(a1+5720);
    if (cnd_) { goto L_08A663D8; }
    goto L_08A66350;
L_08A66350:;
    cnd_ = s1 == 0;
    s0 = D_08C316EE - (5870);
    if (cnd_) { goto L_08A663A8; }
    goto L_08A66358;
L_08A66358:;
    v0 = 1;
    cnd_ = s1 == v0;
    v0 = D_08C31658 - (5720);
    if (cnd_) { goto L_08A6639C; }
    goto L_08A66364;
L_08A66364:;
    cnd_ = s2 != 0;
    v0 = D_08AF086C - (2156);
    if (cnd_) { goto L_08A66384; }
    goto L_08A6636C;
L_08A6636C:;
    goto L_08A66370;
L_08A66370:;
    sp = sp + 16;
    return;
L_08A66384:;
    f12 = BITSF(LD32(v0+2156));
    a0 = 0x5c130000u;
    a0 = a0 | 0xd641;
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66394;
L_08A66394:;
    goto L_08A66370;
L_08A6639C:;
    v1 = LD_U8(v0+5720);
    cnd_ = v1 == 0;
    s0 = D_08C316EE - (5870);
    if (cnd_) { goto L_08A66364; }
    goto L_08A663A8;
L_08A663A8:;
    v0 = LD_U8(s0+5870);
    cnd_ = v0 != 0;
    v0 = D_08AF086C - (2156);
    if (cnd_) { goto L_08A663C0; }
    goto L_08A663B4;
L_08A663B4:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A66370; }
    goto L_08A663BC;
L_08A663BC:;
    v0 = D_08AF086C - (2156);
    goto L_08A663C0;
L_08A663C0:;
    f12 = BITSF(LD32(v0+2156));
    a0 = 0x5c130000u;
    a0 = a0 | 0xd641;
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A663D0;
L_08A663D0:;
    ST8(s0+5870, 0);
    goto L_08A6636C;
L_08A663D8:;
    cnd_ = v0 != 0;
    v0 = D_08C316EE - (5870);
    if (cnd_) { goto L_08A66350; }
    goto L_08A663E0;
L_08A663E0:;
    v1 = LD_U8(v0+5870);
    cnd_ = v1 == 0;
    v0 = LD_U8(a1+5720);
    if (cnd_) { goto L_08A663F8; }
    goto L_08A663EC;
L_08A663EC:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A66350; }
    goto L_08A663F4;
L_08A663F4:;
    v0 = LD_U8(a1+5720);
    goto L_08A663F8;
L_08A663F8:;
    cnd_ = v0 == 0;
    s0 = D_08C316EE - (5870);
    if (cnd_) { goto L_08A6640C; }
    goto L_08A66400;
L_08A66400:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A66370; }
    goto L_08A66408;
L_08A66408:;
    s0 = D_08C316EE - (5870);
    goto L_08A6640C;
L_08A6640C:;
    v0 = LD_U8(s0+5870);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A66370; }
    goto L_08A66418;
L_08A66418:;
    v0 = D_08AF086C - (2156);
    f12 = BITSF(LD32(v0+2156));
    a0 = 0xfc5f0000u;
    a0 = a0 | 0xef9c;
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6642C;
L_08A6642C:;
    v1 = 1;
    ST8(s0+5870, v1);
    goto L_08A6636C;
L_08A66438:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66440;
L_08A66440:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    ST8(s0+5869, v0);
    if (cnd_) { goto L_08A66454; }
    goto L_08A6644C;
L_08A6644C:;
    s2 = 1;
    goto L_08A6632C;
L_08A66454:;
    v0 = D_08AF0868 - (2152);
    f12 = BITSF(LD32(v0+2152));
    a0 = 0xcd7e0000u;
    a0 = a0 | 0xb4ff;
    v0 = D_08C316EE - (5870);
    ST8(v0+5870, 0);
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66470;
L_08A66470:;
    v0 = LD_U8(s0+5869);
    goto L_08A66330;
}

/* 08A66478 */
void func_08A66478(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66478:;
    v0 = D_08C316E8 - (5864);
    a0 = D_08AE694C - (26956);
    a1 = D_08C316EC - (5868);
    sp = sp - 16;
    v1 = D_08C316EE - (5870);
    a0 = a0 + 26956;
    a1 = a1 + 5868;
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(v0+5864, 0);
    v0 = D_08C316F0 - (5872);
    ST8(v1+5870, 0);
    ST32(v0+5872, 0);
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A664B4;
L_08A664B4:;
    v1 = 1;
    v0 = D_08C316EF - (5871);
    ST8(v0+5871, v1);
    sp = sp + 16;
    return;
}

/* 08A664CC */
void func_08A664CC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A664CC:;
    sp = sp - 16;
    v0 = D_08AF0870 - (2160);
    a0 = 0x5c130000u;
    f12 = BITSF(LD32(v0+2160));
    v1 = D_08C316EF - (5871);
    a0 = a0 | 0xd641;
    v0 = D_08C316E8 - (5864);
    ST8(v1+5871, 0);
    ST32(v0+5864, 0);
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A664F8;
L_08A664F8:;
    a0 = D_08AE694C - (26956);
    a0 = a0 + 26956;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66504;
L_08A66504:;
    sp = sp + 16;
    return;
}

/* 08A66510 */
rv_t func_08A66510(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A66510:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C316B8 - (5816);
    t1 = D_08C316C8 - (5832);
    t2 = D_08C316D8 - (5848);
    a1 = a1 & a0;
    v1 = t0 + 5816;
    a2 = t1 + 5832;
    cnd_ = a1 == 0;
    a3 = t2 + 5848;
    if (cnd_) { goto L_08A665C8; }
    goto L_08A66540;
L_08A66540:;
    v0 = D_08AF0874 - (2164);
    f4 = BITSF(LD32(v0+2164));
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
    ST32(t0+5816, FBITS(f2));
    ST32(t1+5832, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+5848, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A665C8;
L_08A665C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A665D0 */
rv_t func_08A665D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A665D0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A66510(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A665E4;
L_08A665E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A665F0 */
void func_08A665F0(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A665F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08869C54(a0, a1);
    goto L_08A66604;
L_08A66604:;
    v0 = D_08B157C8 - (22472);
    v0 = v0 + 22472;
    ST32(s0, v0);
    a0 = s0 + 48;
    a2 = 1;
    a1 = LD32(s0+4);
    func_08A26584(a0, a1, a2);
    goto L_08A66620;
L_08A66620:;
    v0 = (u32)-32725;
    ST16(s0+8, v0);
    s0 = s0 + 32;
    v0 = 3;
    goto L_08A66630;
L_08A66630:;
    v0 = v0 - 1;
    ST32(s0, 0);
    cnd_ = (s32)v0 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A66630; }
    goto L_08A66640;
L_08A66640:;
    sp = sp + 16;
    return;
}

/* 08A66650 */
rv_t func_08A66650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66650:;
    v0 = D_08B157C8 - (22472);
    v0 = v0 + 22472;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 48;
    func_08A26640(a0, t1, t2, t3);
    goto L_08A66674;
L_08A66674:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66688;
L_08A66688:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A66698 */
rv_t func_08A66698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66698:;
    v0 = D_08B157C8 - (22472);
    v0 = v0 + 22472;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 48;
    func_08A26640(a0, t1, t2, t3);
    goto L_08A666BC;
L_08A666BC:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A666D0;
L_08A666D0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A666D8;
L_08A666D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A666E8 */
rv_t func_08A666E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A666E8:;
    sp = sp - 32;
    s2 = a1 + 0;
    s3 = a0 + 0;
    s1 = 3;
    { rv_t r_ = func_08869D70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66710;
L_08A66710:;
    a0 = s2 + 0;
    a1 = 1;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6671C;
L_08A6671C:;
    a0 = s2 + 0;
    a1 = 4;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66728;
L_08A66728:;
    s0 = s3 + 32;
    goto L_08A6672C;
L_08A6672C:;
    a1 = LD32(s0);
    a0 = s2 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6673C;
L_08A6673C:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A6672C; }
    goto L_08A66744;
L_08A66744:;
    a0 = s3 + 48;
    a1 = s2 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66750;
L_08A66750:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6676C */
rv_t func_08A6676C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A6676C:;
    sp = sp - 48;
    s2 = a1 + 0;
    s3 = a0 + 0;
    { rv_t r_ = func_08869DD0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66790;
L_08A66790:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A6679C;
L_08A6679C:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 < 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A667F4; }
    goto L_08A667A8;
L_08A667A8:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A667B0;
L_08A667B0:;
    v0 = LD32(sp+4);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A667E0; }
    goto L_08A667BC;
L_08A667BC:;
    s0 = s3 + 32;
    goto L_08A667C0;
L_08A667C0:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A667CC;
L_08A667CC:;
    v0 = LD32(sp+4);
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A667C0; }
    goto L_08A667E0;
L_08A667E0:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    a0 = s3 + 48;
    if (cnd_) { goto L_08A667F4; }
    goto L_08A667EC;
L_08A667EC:;
    a1 = s2 + 0;
    { rv_t r_ = func_08A26C18(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A667F4;
L_08A667F4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A66810 */
rv_t func_08A66810(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66810:;
    sp = sp - 16;
    v0 = D_08B1BB5C - (-17572);
    v1 = LD32(v0-17572);
    cnd_ = v1 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A66868; }
    goto L_08A66828;
L_08A66828:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a0+40); goto L_08A66840; }
    goto L_08A66834;
L_08A66834:;
    goto L_08A66838;
L_08A66838:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A66840:;
    v0 = LD32(a0+44);
    goto L_08A66844;
L_08A66844:;
    a1 = v0 + 0;
    v0 = v1 | v0;
    a0 = v1 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A66834; }
    goto L_08A66858;
L_08A66858:;
    a2 = LD32(a2+4);
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66860;
L_08A66860:;
    goto L_08A66838;
L_08A66868:;
    v1 = LD32(a0+32);
    v0 = LD32(a0+36);
    goto L_08A66844;
}

/* 08A66874 */
rv_t func_08A66874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66874:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 48;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66894;
L_08A66894:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A668BC; }
    goto L_08A668A4;
L_08A668A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A668BC:;
    { rv_t r_ = func_08869FCC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A668C4;
L_08A668C4:;
    v1 = v0 + 0;
    goto L_08A668A4;
}

/* 08A668CC */
rv_t func_08A668CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A668CC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C316F4 - (5876);
    t1 = D_08C31704 - (5892);
    t2 = D_08C31714 - (5908);
    a1 = a1 & a0;
    v1 = t0 + 5876;
    a2 = t1 + 5892;
    cnd_ = a1 == 0;
    a3 = t2 + 5908;
    if (cnd_) { goto L_08A66984; }
    goto L_08A668FC;
L_08A668FC:;
    v0 = D_08AF0878 - (2168);
    f4 = BITSF(LD32(v0+2168));
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
    ST32(t0+5876, FBITS(f2));
    ST32(t1+5892, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+5908, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A66984;
L_08A66984:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A6698C */
rv_t func_08A6698C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A6698C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A668CC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A669A0;
L_08A669A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A669AC */
void func_08A669AC(void)
{
L_08A669AC:;
    return;
}

/* 08A669B4 */
void func_08A669B4(void)
{
L_08A669B4:;
    return;
}

/* 08A669BC */
void func_08A669BC(void)
{
L_08A669BC:;
    return;
}

/* 08A669C4 */
void func_08A669C4(void)
{
L_08A669C4:;
    return;
}

/* 08A669CC */
void func_08A669CC(void)
{
L_08A669CC:;
    return;
}

/* 08A669D4 */
void func_08A669D4(void)
{
L_08A669D4:;
    return;
}

/* 08A669DC */
void func_08A669DC(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A669DC:;
    sp = sp - 48;
    s6 = D_08C31724 - (5924);
    s0 = LD32(s6+5924);
    s1 = s6 + 5924;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A66A38; }
    goto L_08A66A18;
L_08A66A18:;
    a1 = LD32(s0+40);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A66C0C; }
    goto L_08A66A24;
L_08A66A24:;
    a1 = LD32(s0+44);
    goto L_08A66A28;
L_08A66A28:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A66BFC; }
    goto L_08A66A30;
L_08A66A30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66A38;
L_08A66A38:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A66BEC; }
    goto L_08A66A44;
L_08A66A44:;
    s0 = s6 + 5924;
    ST32(s1+16, 0);
    goto L_08A66A4C;
L_08A66A4C:;
    a0 = D_08AE69B4 - (27060);
    a0 = a0 + 27060;
    ST32(s1+12, 0);
    a1 = 1;
    ST32(s0+4, 0);
    ST32(s6+5924, 0);
    v0 = func_0883A868(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A66A68;
L_08A66A68:;
    v1 = D_08AE69C8 - (27080);
    v0 = LD32(v1+27080);
    cnd_ = v0 == 0;
    s5 = s0 + 0;
    if (cnd_) { goto L_08A66BAC; }
    goto L_08A66A78;
L_08A66A78:;
    a0 = v1 + 27080;
    s7 = a0 + 0;
    s2 = a0 + 0;
    s3 = a0 + 4;
    s4 = 0 + 0;
    fp = D_08B1CA9C - (-13668);
    goto L_08A66A90;
L_08A66A90:;
    v1 = LD_U8(s5+8);
    v0 = s4 + a0;
    cnd_ = v1 != 0;
    s0 = LD32(v0);
    if (cnd_) { goto L_08A66AF8; }
    goto L_08A66AA0;
L_08A66AA0:;
    v0 = LD32(s6+5924);
    cnd_ = v0 == 0;
    s1 = s5 + 0;
    if (cnd_) { goto L_08A66AD4; }
    goto L_08A66AAC;
L_08A66AAC:;
    v1 = v0 + 0;
    goto L_08A66AB0;
L_08A66AB0:;
    a0 = v1 + 44;
    s1 = v1 + 40;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_08A66AF8; }
    goto L_08A66AC8;
L_08A66AC8:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A66AB0; }
    goto L_08A66AD4;
L_08A66AD4:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66ADC;
L_08A66ADC:;
    ST32(v0, s0);
    v1 = LD32(s5+4);
    ST32(v0+40, 0);
    v1 = v1 + 1;
    ST32(v0+44, 0);
    ST32(s5+4, v1);
    ST32(s1, v0);
    goto L_08A66AF8;
L_08A66AF8:;
    v1 = LD32(s6+5924);
    cnd_ = v1 == 0;
    a1 = LD32(s2);
    if (cnd_) { goto L_08A66B30; }
    goto L_08A66B04;
L_08A66B04:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08A66B0C;
L_08A66B0C:;
    a0 = v0 + 44;
    a2 = v0 + 40;
    s0 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08A66B3C; }
    goto L_08A66B24;
L_08A66B24:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08A66B0C; }
    goto L_08A66B30;
L_08A66B30:;
    a0 = LD32(s5+20);
    cnd_ = a0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A66BDC; }
    goto L_08A66B3C;
L_08A66B3C:;
    cnd_ = s0 == 0;
    a3 = s0 + 0;
    if (cnd_) { goto L_08A66B94; }
    goto L_08A66B44;
L_08A66B44:;
    a2 = s3 + 0;
    t0 = s3 + 32;
    goto L_08A66B4C;
L_08A66B4C:;
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
    if (cnd_) { goto L_08A66B4C; }
    goto L_08A66B78;
L_08A66B78:;
    a0 = LD32(fp-13668);
    v0 = LD32(a2);
    ST32(a3, v0);
    v0 = func_088325D0(a0);
    goto L_08A66B88;
L_08A66B88:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66B90;
L_08A66B90:;
    ST32(s0+28, v0);
    goto L_08A66B94;
L_08A66B94:;
    s2 = s2 + 40;
    v0 = LD32(s2);
    s4 = s4 + 40;
    s3 = s3 + 40;
    cnd_ = v0 != 0;
    a0 = s7 + 0;
    if (cnd_) { goto L_08A66A90; }
    goto L_08A66BAC;
L_08A66BAC:;
    sp = sp + 48;
    return;
L_08A66BDC:;
    a2 = 1;
    { u64 r_ = func_08AD2604(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66BE4;
L_08A66BE4:;
    s0 = v0 + 0;
    goto L_08A66B3C;
L_08A66BEC:;
    s0 = s6 + 5924;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66BF4;
L_08A66BF4:;
    ST32(s1+16, 0);
    goto L_08A66A4C;
L_08A66BFC:;
    a0 = s1 + 0;
    func_08AD267C(a0, a1, t1, t2, t3);
    goto L_08A66C04;
L_08A66C04:;
    goto L_08A66A30;
L_08A66C0C:;
    a0 = s1 + 0;
    func_08AD267C(a0, a1, t1, t2, t3);
    goto L_08A66C14;
L_08A66C14:;
    a1 = LD32(s0+44);
    goto L_08A66A28;
}

/* 08A66C1C */
u64 func_08A66C1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66C1C:;
    a1 = a0 + 0;
    a0 = D_08C31724 - (5924);
    sp = sp - 16;
    a0 = a0 + 5924;
    a2 = 1;
    { u64 r_ = func_08AD2604(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66C38;
L_08A66C38:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A66C44 */
void func_08A66C44(void)
{
L_08A66C44:;
    return;
}

/* 08A66C4C */
void func_08A66C4C(void)
{
L_08A66C4C:;
    return;
}

/* 08A66C54 */
void func_08A66C54(void)
{
L_08A66C54:;
    return;
}

/* 08A66C5C */
u64 func_08A66C5C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66C5C:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A66CA4; }
    goto L_08A66C84;
L_08A66C84:;
    v1 = D_08C31724 - (5924);
    v0 = v1 + 5924;
    ST32(v1+5924, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_08A66CA4;
L_08A66CA4:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A66CFC; }
    goto L_08A66CB4;
L_08A66CB4:;
    v0 = D_08C31724 - (5924);
    s0 = LD32(v0+5924);
    cnd_ = s0 == 0;
    s1 = v0 + 5924;
    if (cnd_) { goto L_08A66CE4; }
    goto L_08A66CC4;
L_08A66CC4:;
    a1 = LD32(s0+40);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A66D2C; }
    goto L_08A66CD0;
L_08A66CD0:;
    a1 = LD32(s0+44);
    goto L_08A66CD4;
L_08A66CD4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A66D1C; }
    goto L_08A66CDC;
L_08A66CDC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66CE4;
L_08A66CE4:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A66D0C; }
    goto L_08A66CF0;
L_08A66CF0:;
    ST32(s1+16, 0);
    goto L_08A66CF4;
L_08A66CF4:;
    ST32(s1+12, 0);
    goto L_08A66CFC;
L_08A66CFC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A66D0C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66D14;
L_08A66D14:;
    ST32(s1+16, 0);
    goto L_08A66CF4;
L_08A66D1C:;
    a0 = s1 + 0;
    func_08AD267C(a0, a1, t1, t2, t3);
    goto L_08A66D24;
L_08A66D24:;
    goto L_08A66CDC;
L_08A66D2C:;
    a0 = s1 + 0;
    func_08AD267C(a0, a1, t1, t2, t3);
    goto L_08A66D34;
L_08A66D34:;
    a1 = LD32(s0+44);
    goto L_08A66CD4;
}

/* 08A66D3C */
rv_t func_08A66D3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66D3C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08A66C5C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66D50;
L_08A66D50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A66D5C */
rv_t func_08A66D5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66D5C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08A66C5C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66D70;
L_08A66D70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A66D7C */
u32 func_08A66D7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A66D7C:;
    sp = sp - 32;
    v0 = D_08AE6A18 - (27160);
    v0 = v0 + 27160;
    a0 = a0 << 2;
    a0 = a0 + v0;
    a1 = LD32(a0);
    a0 = 0x11d30000u;
    a0 = a0 | 0x6527;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66DAC;
L_08A66DAC:;
    v0 = LD32(sp);
    sp = sp + 32;
    return v0;
}

/* 08A66DBC */
u32 func_08A66DBC(u32 a0)
{
    u32 v0 = 0;
L_08A66DBC:;
    v0 = a0 & 0xff;
    return v0;
}

/* 08A66DC4 */
float func_08A66DC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08A66DC4:;
    ST32(a0+76, 0);
    sp = sp - 32;
    t1 = t1 & 0xff;
    ST32(a0+80, 0);
    v0 = a3 + 0;
    a3 = t2 + 0;
    s3 = a2 + 0;
    a2 = t1 + 0;
    s2 = a1 + 0;
    a1 = v0 + 0;
    s1 = t0 + 0;
    t0 = t3 + 0;
    s4 = t3 + 0;
    s0 = a0 + 0;
    func_08A66F80(a0, a1, a2, a3, t0);
    goto L_08A66E18;
L_08A66E18:;
    v0 = 1;
    ST32(s0+52, s1);
    a0 = s0 + 0;
    ST32(s0+44, s2);
    ST32(s0+48, s3);
    ST8(s0+74, v0);
    ST32(s0, 0);
    ST8(s0+73, v0);
    v0 = func_08A67174(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A66E3C;
L_08A66E3C:;
    a0 = s0 + 0;
    func_08A672E4(a0);
    goto L_08A66E44;
L_08A66E44:;
    a1 = LD_U8(s4+61);
    a0 = s0 + 0;
    f0 = func_08A67060(a0, a1, 0, 0);
    goto L_08A66E50;
L_08A66E50:;
    sp = sp + 32;
    return f0;
}

/* 08A66E70 */
float func_08A66E70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08A66E70:;
    ST32(a0+76, 0);
    sp = sp - 48;
    v0 = a2 + 0;
    ST32(a0+80, 0);
    t0 = t0 & 0xff;
    a2 = t0 + 0;
    t0 = t2 + 0;
    s2 = a1 + 0;
    a1 = v0 + 0;
    s1 = a3 + 0;
    a3 = t1 + 0;
    s3 = t2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    func_08A66F80(a0, a1, a2, a3, t0);
    goto L_08A66EC4;
L_08A66EC4:;
    v1 = 1;
    v0 = 999;
    ST8(s0+74, v1);
    a0 = s0 + 0;
    ST8(s0+73, v1);
    ST32(s0, FBITS(f20));
    ST32(s0+52, s1);
    ST32(s0+44, s2);
    ST32(s0+48, v0);
    v0 = func_08A67174(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A66EEC;
L_08A66EEC:;
    a0 = s0 + 0;
    func_08A672E4(a0);
    goto L_08A66EF4;
L_08A66EF4:;
    a1 = LD_U8(s3+61);
    a0 = s0 + 0;
    f0 = func_08A67060(a0, a1, 0, 0);
    goto L_08A66F00;
L_08A66F00:;
    sp = sp + 48;
    return f0;
}

/* 08A66F20 */
void func_08A66F20(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A66F20:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+56);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A66F58; }
    goto L_08A66F40;
L_08A66F40:;
    { u64 r_ = func_0889D1BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A66F48;
L_08A66F48:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A66F58; }
    goto L_08A66F50;
L_08A66F50:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66F58;
L_08A66F58:;
    v1 = LD32(s0+60);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s0 + 60;
    if (cnd_) { goto L_08A66F70; }
    goto L_08A66F68;
L_08A66F68:;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A66F70;
L_08A66F70:;
    sp = sp + 16;
    return;
}

/* 08A66F80 */
void func_08A66F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08A66F80:;
    t6 = a0 + 0;
    v0 = a0 + 8;
    ST32(v0+4, 0);
    a0 = D_08B45A9C - (23196);
    v1 = a0 + 23196;
    ST32(v0+8, 0);
    t1 = t6 + 20;
    v0 = t6 + 32;
    ST32(t6, 0);
    t2 = (u32)-1;
    t3 = 999;
    ST32(t6+8, 0);
    t5 = (u32)-1;
    t4 = t6 + 84;
    f0 = BITSF(LD32(a0+23196));
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    ST32(t6+20, FBITS(f0));
    ST32(t1+8, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    t1 = 149;
    f0 = BITSF(LD32(a0+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(t6+32, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    f0 = BITSF(LD32(t0));
    ST32(t6+48, t3);
    ST32(t6+68, FBITS(f0));
    f1 = BITSF(LD32(t0+56));
    ST32(t6+60, t2);
    ST32(t6+688, FBITS(f1));
    f0 = BITSF(LD32(t0+48));
    ST32(t6+52, 0);
    ST32(t6+692, FBITS(f0));
    ST32(t6+56, t2);
    ST8(t6+73, 0);
    ST8(t6+74, 0);
    ST32(t6+44, t3);
    ST32(t6+700, 0);
    ST32(t6+696, 0);
    ST32(t6, 0);
    ST8(t6+72, 0);
    ST32(t6+64, a1);
    f0 = BITSF(LD32(t0+44));
    ST32(t6+76, a3);
    ST32(t6+4, FBITS(f0));
    ST8(t6+75, a2);
    ST32(t6+80, t0);
    goto L_08A67048;
L_08A67048:;
    t1 = t1 - 1;
    ST32(t4, t5);
    cnd_ = (s32)t1 >= 0;
    t4 = t4 + 4;
    if (cnd_) { goto L_08A67048; }
    goto L_08A67058;
L_08A67058:;
    ST32(t6+684, 0);
    return;
}

/* 08A67060 */
float func_08A67060(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08A67060:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    v0 = (u32)-1;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A67090; }
    goto L_08A6707C;
L_08A6707C:;
    ST32(s0+56, v0);
    goto L_08A67080;
L_08A67080:;
    sp = sp + 64;
    { v[0]=vr0;return f0; }
L_08A67090:;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_0889CE40(t2, t3); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67098;
L_08A67098:;
    a0 = v0 + 0;
    v1 = s0 + 32;
    cnd_ = a0 == 0;
    v0 = s0 + 20;
    if (cnd_) { goto L_08A67080; }
    goto L_08A670A8;
L_08A670A8:;
    f6 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(s0+32));
    f2 = f2 - f6;
    f1 = f1 - f5;
    f0 = f0 - f4;
    v0 = D_08AF087C - (2172);
    f3 = BITSF(LD32(v0+2172));
    v0 = D_08AF0880 - (2176);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    a1 = LD32(s0+80);
    f4 = f4 + f0;
    f5 = f5 + f1;
    f6 = f6 + f2;
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0+2176));
    v0 = D_08AF0884 - (2180);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(a0+20, FBITS(f0));
    f0 = BITSF(LD32(v0+2180));
    ST32(a0+16, FBITS(f3));
    ST32(a0+24, FBITS(f0));
    ST32(a0, FBITS(f4));
    ST32(a0+4, FBITS(f5));
    ST32(a0+8, FBITS(f6));
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    cnd_ = a1 == 0;
    v0 = LD32(a0+28);
    if (cnd_) { goto L_08A6716C; }
    goto L_08A67164;
L_08A67164:;
    f0 = BITSF(LD32(a1+12));
    f1 = f1 * f0;
    goto L_08A6716C;
L_08A6716C:;
    ST32(a0+12, FBITS(f1));
    goto L_08A6707C;
    v[0]=vr0;
}

/* 08A67174 */
u32 func_08A67174(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08A67174:;
    sp = sp - 16;
    s2 = a0 + 20;
    v0 = a0 + 8;
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+20));
    f2 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s2+8));
    v1 = LD_U8(a0+73);
    ST32(a0+8, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_08A672B8; }
    goto L_08A671B4;
L_08A671B4:;
    a2 = LD32(a0+44);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_08A672B8; }
    goto L_08A671C4;
L_08A671C4:;
    v1 = a0 - 22840;
    v0 = LD32(v1+4);
    a1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A67218; }
    goto L_08A671EC;
L_08A671EC:;
    a0 = LD32(a1);
    goto L_08A671F0;
L_08A671F0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A672C4; }
    goto L_08A67208;
L_08A67208:;
    a1 = LD32(a1+4);
    goto L_08A6720C;
L_08A6720C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A671F0; }
    goto L_08A67214;
L_08A67214:;
    s1 = 0 + 0;
    goto L_08A67218;
L_08A67218:;
    cnd_ = s1 == 0;
    if (cnd_) { ST8(s0+73, 0); goto L_08A672BC; }
    goto L_08A67220;
L_08A67220:;
    v0 = LD32(s0+52);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A6728C; }
    goto L_08A6722C;
L_08A6722C:;
    v0 = LD32(s1+520);
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A67248; }
    goto L_08A6723C;
L_08A6723C:;
    v0 = 1;
    ST8(s0+72, v0);
    v0 = LD32(s1);
    goto L_08A67248;
L_08A67248:;
    a1 = LD32(s0+52);
    a2 = s2 + 0;
    a0 = LD32(v0-12);
    a3 = 0 + 0;
    t0 = 1;
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67270;
L_08A67270:;
    v0 = s1 + 0;
    goto L_08A67274;
L_08A67274:;
    sp = sp + 16;
    return v0;
L_08A6728C:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67298;
L_08A67298:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = s1 + 0;
    ST32(s0+20, FBITS(f0));
    ST32(s2+8, FBITS(f2));
    ST32(s2+4, FBITS(f1));
    goto L_08A67274;
L_08A672B8:;
    ST8(s0+73, 0);
    goto L_08A672BC;
L_08A672BC:;
    v0 = 0 + 0;
    goto L_08A67274;
L_08A672C4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A67208; }
    goto L_08A672D0;
L_08A672D0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A6720C; }
    goto L_08A672DC;
L_08A672DC:;
    goto L_08A67218;
}

/* 08A672E4 */
void func_08A672E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_08A672E4:;
    sp = sp - 192;
    v1 = LD_U8(a0+74);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A6737C; }
    goto L_08A67300;
L_08A67300:;
    a1 = LD32(a0+48);
    v0 = 999;
    cnd_ = a1 == v0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_08A6737C; }
    goto L_08A67310;
L_08A67310:;
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6731C;
L_08A6731C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A67370; }
    goto L_08A67324;
L_08A67324:;
    v0 = LD32(v0);
    a1 = 0x5a30000u;
    a2 = s1 + 32;
    a0 = LD32(v0-12);
    a1 = a1 | 0xe701;
    a3 = 0 + 0;
    a0 = s0 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67354;
L_08A67354:;
    a0 = s0 + 0;
    goto L_08A67358;
L_08A67358:;
    v0 = a0 + 0;
    sp = sp + 192;
    return;
L_08A67370:;
    ST8(s1+74, 0);
    goto L_08A67374;
L_08A67374:;
    a0 = 0 + 0;
    goto L_08A67358;
L_08A6737C:;
    cnd_ = v1 == 0;
    if (cnd_) { ST8(s1+74, 0); goto L_08A67374; }
    goto L_08A67384;
L_08A67384:;
    a1 = LD32(s1+44);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A673A8;
L_08A673A8:;
    cnd_ = v0 == 0;
    t2 = v0 + 0;
    if (cnd_) { goto L_08A67370; }
    goto L_08A673B0;
L_08A673B0:;
    t0 = D_08B25AC0 - (23232);
    v1 = LD32(t0+23232);
    v0 = D_08AF0888 - (2184);
    f0 = BITSF(LD32(v0+2184));
    t1 = t0 + 23232;
    a1 = LD32(t1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    ST32(sp+8, FBITS(f0));
    v1 = v1 + v0;
    v1 = v1 + a1;
    ST32(sp, 0);
    v0 = D_08AF088C - (2188);
    a2 = (u32)((s32)v1 >> 16);
    ST32(sp+4, 0);
    a1 = a1 + v1;
    a3 = LD32(s1+80);
    f4 = BITSF(LD32(v0+2188));
    v0 = v1 >> 1;
    f3 = BITSF(LD32(a3+36));
    f0 = BITSF(v0);
    v0 = v1 << 16;
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    f2 = (float)(s32)FBITS(f0);
    v0 = v0 + a2;
    v0 = v0 + a1;
    f3 = f3 - f1;
    f2 = f2 * f4;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    a1 = a1 + v0;
    f2 = f2 * f3;
    f3 = (float)(s32)FBITS(f0);
    ST32(t1+4, a1);
    f1 = f1 + f2;
    f3 = f3 * f4;
    ST32(t0+23232, v0);
    ST32(sp+4, FBITS(f1));
    f1 = f1 * f1;
    f0 = BITSF(LD32(a3+36));
    f2 = BITSF(LD32(a3+40));
    f0 = f0 * f0;
    f0 = f0 - f1;
    f0 = sqrtf(f0);
    f0 = f0 * f2;
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = f0 - f1;
    f3 = f3 * f0;
    f1 = f1 + f3;
    ST32(sp, FBITS(f1));
    v1 = LD32(t2);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = t2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67488;
L_08A67488:;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+4);
    f5 = BITSF(LD32(s1));
    a0 = LD32(v0);
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
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+8);
    {v[21]=BITSF(v0);}
    {v[34]=BITSF(a1);}
    {v[22]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f8 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f1 = BITSF(v1);
    f4 = BITSF(v1);
    {v1=FBITS(v[17]);}
    f0 = BITSF(v1);
    f6 = f1 * f5;
    v0 = s1 + 20;
    f7 = f8 * f5;
    f5 = f0 * f5;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+20));
    f2 = f2 + f7;
    f1 = f1 + f5;
    f0 = f0 + f6;
    v0 = s1 + 32;
    a0 = 0 + 0;
    ST32(v0+8, FBITS(f2));
    ST32(s1+32, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(sp, FBITS(f4));
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f8));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f7));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    goto L_08A67358;
}

/* 08A67594 */
void func_08A67594(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A67594:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v0 = D_08AF0890 - (2192);
    if (cnd_) { goto L_08A675C0; }
    goto L_08A675A0;
L_08A675A0:;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+692));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A675B8; }
    goto L_08A675B8;
L_08A675B8:;
    ST32(a0+4, FBITS(f0));
    return;
L_08A675C0:;
    f0 = BITSF(LD32(v0+2192));
    goto L_08A675B8;
}

/* 08A675C8 */
void func_08A675C8(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[1280] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1280);
L_08A675C8:;
    sp = sp - 1280;
    f20 = BITSF(0);
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    s5 = a0 + 0;
    if (cnd_) { goto L_08A6763C; }
    goto L_08A67634;
L_08A67634:;
    v0 = 1;
    ST8(a0+72, v0);
    goto L_08A6763C;
L_08A6763C:;
    v0 = LD_U8(s5+72);
    cnd_ = v0 == 0;
    s7 = D_08B25AC8 - (23240);
    if (cnd_) { goto L_08A676A0; }
    goto L_08A67648;
L_08A67648:;
    goto L_08A6764C;
L_08A6764C:;
    sp = sp + 1280;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return; }
L_08A676A0:;
    v0 = LD32(s7+23240);
    a3 = s7 + 23240;
    v1 = LD32(a3+4);
    a1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a1;
    v0 = v0 + v1;
    v1 = v1 + v0;
    ST32(a3+4, v1);
    a2 = v0 >> 1;
    s1 = 0 + 0;
    ST32(s7+23240, v0);
    v0 = D_08B285A0 - (-31328);
    a1 = LD_U8(s5+75);
    f26 = BITSF(LD32(v0-31328));
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    { u32 x_ = a2, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    v1 = hi;
    ST32(s5+700, v1);
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08A67174(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; });
    goto L_08A6770C;
L_08A6770C:;
    a0 = s5 + 0;
    s6 = v0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_08A672E4(a0); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A67718;
L_08A67718:;
    f0 = BITSF(LD32(s5+4));
    f1 = BITSF(LD32(s5+692));
    {u32 a_=sp+(1056);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f1, 12);
    {u32 a_=sp+(1088);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = !fcc;
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A68A34; }
    goto L_08A6774C;
L_08A6774C:;
    fcc = FCMP(f1, f20, 2);
    cnd_ = fcc;
    v0 = D_08AF0894 - (2196);
    if (cnd_) { goto L_08A68A38; }
    goto L_08A6775C;
L_08A6775C:;
    f1 = f0 / f1;
    v0 = LD32(s5+80);
    s1 = 1;
    f0 = BITSF(LD32(v0+52));
    f20 = f1 * f0;
    goto L_08A67770;
L_08A67770:;
    v0 = s5 + 8;
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s5+8));
    f5 = BITSF(LD32(v0+4));
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    a0 = FBITS(f5);
    {vr0=BITSF(v1);}
    a2 = FBITS(f3);
    {vr1=BITSF(a0);}
    f1 = BITSF(0);
    {vr2=BITSF(a2);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {t0=FBITS(vr0);}
    f0 = BITSF(t0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(s5+688)); goto L_08A678F8; }
    goto L_08A677BC;
L_08A677BC:;
    v0 = s5 + 20;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s5+20));
    f2 = BITSF(LD32(v0+4));
    f10 = f0 - f3;
    f13 = f1 - f4;
    f11 = f2 - f5;
    s3 = 0 + 0;
    ST32(sp+8, FBITS(f10));
    s4 = (u32)-1;
    s2 = s5 + 84;
    ST32(sp, FBITS(f13));
    ST32(sp+4, FBITS(f11));
    goto L_08A677F0;
L_08A677F0:;
    v0 = LD32(s2);
    s0 = 0 + 0;
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A67848; }
    goto L_08A67800;
L_08A67800:;
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A67824;
L_08A67824:;
    s0 = v0 + 0;
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1056);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_08A67848;
L_08A67848:;
    v0 = s0 + 44;
    a0 = s5 + 0;
    a2 = s0 + 56;
    cnd_ = s0 == 0;
    a1 = sp + 16;
    if (cnd_) { goto L_08A689E4; }
    goto L_08A6785C;
L_08A6785C:;
    f2 = BITSF(LD32(s0+44));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f8 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a0 = s0 + 0;
    f7 = f3 + f1;
    f6 = f4 + f0;
    ST32(sp+16, FBITS(f8));
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+20, FBITS(f7));
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+24, FBITS(f6));
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    f12 = BITSF(LD32(s0+68));
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    { rv_t r_ = func_088EB7DC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A678B8;
L_08A678B8:;
    {u32 a_=sp+(1056);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = s1 == 0;
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A678E4; }
    goto L_08A678DC;
L_08A678DC:;
    ST32(s0+24, FBITS(f20));
    ST32(s0+20, FBITS(f20));
    goto L_08A678E4;
L_08A678E4:;
    s3 = s3 + 1;
    v0 = (s32)s3 < 150;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A677F0; }
    goto L_08A678F4;
L_08A678F4:;
    f0 = BITSF(LD32(s5+688));
    goto L_08A678F8;
L_08A678F8:;
    f3 = BITSF(0);
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s5+4)); goto L_08A67924; }
    goto L_08A6790C;
L_08A6790C:;
    f0 = f0 - f26;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    ST32(s5+688, FBITS(f0));
    if (cnd_) { goto L_08A67930; }
    goto L_08A67920;
L_08A67920:;
    f0 = BITSF(LD32(s5+4));
    goto L_08A67924;
L_08A67924:;
    f0 = f0 - f26;
    ST32(s5+4, FBITS(f0));
    goto L_08A67648;
L_08A67930:;
    v0 = s5 + 32;
    fp = s5 + 20;
    f11 = BITSF(LD32(v0+4));
    f10 = BITSF(LD32(v0+8));
    f8 = BITSF(LD32(s5+20));
    f7 = BITSF(LD32(fp+4));
    f6 = BITSF(LD32(fp+8));
    f13 = BITSF(LD32(s5+32));
    f1 = f11 - f7;
    f2 = f10 - f6;
    f0 = f13 - f8;
    a0 = sp + 32;
    a1 = sp + 80;
    ST32(sp+432, v0);
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp+80, FBITS(f0));
    f28 = f3;
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(sp+16, FBITS(f8));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f6));
    ST32(sp, FBITS(f13));
    ST32(sp+4, FBITS(f11));
    ST32(sp+8, FBITS(f10));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_088F82FC(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A679B4;
L_08A679B4:;
    v1 = 0x10000u;
    a0 = LD32(s5+52);
    v0 = 0x66760000u;
    v1 = v1 | 0xa7d2;
    v0 = v0 | 0x4f6;
    v1 = a0 ^ v1;
    v0 = a0 ^ v0;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    a2 = D_08AF0894 - (2196);
    v1 = v1 | v0;
    f25 = BITSF(LD32(a2+2196));
    a1 = 0 + 0;
    {u32 a_=sp+(1056);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = v1 != 0;
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A67A2C; }
    goto L_08A67A0C;
L_08A67A0C:;
    v0 = 0xa2820000u;
    v0 = v0 | 0x148b;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = 1; goto L_08A67A30; }
    goto L_08A67A1C;
L_08A67A1C:;
    v0 = LD32(s5+80);
    v1 = LD_U8(v0+68);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A67A30; }
    goto L_08A67A2C;
L_08A67A2C:;
    a1 = 1;
    goto L_08A67A30;
L_08A67A30:;
    cnd_ = s6 == 0;
    s2 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08A680F0; }
    goto L_08A67A38;
L_08A67A38:;
    cnd_ = a1 == 0;
    v1 = LD32(s2+23232);
    if (cnd_) { goto L_08A680F4; }
    goto L_08A67A40;
L_08A67A40:;
    v0 = LD_U8(s5+74);
    cnd_ = v0 == 0;
    t0 = LD32(sp+432);
    if (cnd_) { goto L_08A67A68; }
    goto L_08A67A4C;
L_08A67A4C:;
    f1 = BITSF(LD32(s5));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a1 = s2 + 23232;
    if (cnd_) { goto L_08A680F8; }
    goto L_08A67A64;
L_08A67A64:;
    t0 = LD32(sp+432);
    goto L_08A67A68;
L_08A67A68:;
    f0 = BITSF(LD32(fp+8));
    f2 = BITSF(LD32(s5+32));
    f1 = BITSF(LD32(t0+8));
    ST32(sp+84, 0);
    s0 = 0 + 0;
    f5 = f1 - f0;
    f0 = BITSF(LD32(s5+20));
    f21 = BITSF(LD32(sp+84));
    {u32 a_=sp+(448);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = f2 - f0;
    v0 = FBITS(f5);
    f3 = BITSF(LD32(t0+4));
    ST32(sp+88, FBITS(f5));
    v1 = FBITS(f2);
    {v[12]=BITSF(v1);}
    {v[13]=BITSF(s0);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a0=FBITS(vr0);}
    f0 = BITSF(a0);
    ST32(sp+80, FBITS(f2));
    fcc = FCMP(f0, f21, 2);
    f0 = BITSF(LD32(fp+4));
    cnd_ = fcc;
    f4 = f3 - f0;
    if (cnd_) { goto L_08A67B00; }
    goto L_08A67ACC;
L_08A67ACC:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {a2=FBITS(vr2);}
    {t0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+96, t0);
    ST32(sp+100, v1);
    ST32(sp+104, a2);
    ST32(sp+80, t0);
    ST32(sp+84, v1);
    ST32(sp+88, a2);
    goto L_08A67B00;
L_08A67B00:;
    {u32 a_=sp+(464);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a0 = FBITS(f4);
    {v[12]=BITSF(s0);}
    {v[13]=BITSF(a0);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a2=FBITS(vr0);}
    f0 = BITSF(a2);
    ST32(sp+104, FBITS(f5));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+100, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+96, FBITS(f21));
    if (cnd_) { goto L_08A67B68; }
    goto L_08A67B34;
L_08A67B34:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {t0=FBITS(vr2);}
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+112, v0);
    ST32(sp+116, v1);
    ST32(sp+120, t0);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    ST32(sp+104, t0);
    goto L_08A67B68;
L_08A67B68:;
    a0 = D_08AF0894 - (2196);
    f22 = BITSF(LD32(a0+2196));
    ST32(sp+112, FBITS(f21));
    a0 = s6 + 0;
    ST32(sp+116, FBITS(f21));
    ST32(sp+120, FBITS(f22));
    v1 = LD32(s6);
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    v0 = LD32(v1+92);
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67BAC;
L_08A67BAC:;
    {u32 a_=sp+(1104);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(496);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(480);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    {u32 a_=sp+(512);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+112);
    v0 = LD32(sp+116);
    {v[33]=BITSF(a0);}
    {v[16]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+120);
    {v[17]=BITSF(v0);}
    {v[34]=BITSF(a1);}
    {v[18]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {t0=FBITS(v[20]);}
    {a2=FBITS(v[22]);}
    f1 = BITSF(t0);
    f0 = BITSF(a2);
    {u32 a_=sp+(544);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {v[12]=BITSF(v0);}
    {v[13]=BITSF(s0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a0=FBITS(vr0);}
    f0 = BITSF(a0);
    f6 = BITSF(a2);
    ST32(sp+116, FBITS(f21));
    fcc = FCMP(f0, f21, 2);
    {a2=FBITS(v[21]);}
    ST32(sp+144, t0);
    {u32 a_=sp+(1120);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    ST32(sp+132, a2);
    {u32 a_=sp+(1152);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    ST32(sp+148, a2);
    ST32(sp+152, FBITS(f6));
    ST32(sp+128, t0);
    ST32(sp+136, FBITS(f6));
    ST32(sp+112, t0);
    cnd_ = fcc;
    ST32(sp+120, FBITS(f6));
    if (cnd_) { goto L_08A67CE0; }
    goto L_08A67CAC;
L_08A67CAC:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {t0=FBITS(vr2);}
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+144, v0);
    ST32(sp+148, v1);
    ST32(sp+152, t0);
    ST32(sp+112, v0);
    ST32(sp+116, v1);
    ST32(sp+120, t0);
    goto L_08A67CE0;
L_08A67CE0:;
    ST32(sp+144, FBITS(f21));
    a0 = s6 + 0;
    ST32(sp+148, FBITS(f21));
    ST32(sp+152, FBITS(f22));
    v1 = LD32(s6);
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    v0 = LD32(v1+92);
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    t_ = v0;
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A67D0C;
L_08A67D0C:;
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(576);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(608);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(560);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    {u32 a_=sp+(592);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+144);
    v0 = LD32(sp+148);
    {v[33]=BITSF(a0);}
    {v[16]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+152);
    {v[17]=BITSF(v0);}
    {v[34]=BITSF(a1);}
    {v[18]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {a2=FBITS(v[21]);}
    {a0=FBITS(v[22]);}
    f0 = BITSF(a2);
    f3 = BITSF(a0);
    {u32 a_=sp+(624);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    t0 = FBITS(f0);
    {v[24]=BITSF(s0);}
    v0 = FBITS(f3);
    {v[25]=BITSF(t0);}
    {v[26]=BITSF(v0);}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=v[24];float t1=v[25];float t2=v[26];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    {a0=FBITS(v[20]);}
    ST32(sp+164, a2);
    fcc = FCMP(f0, f21, 2);
    ST32(sp+128, a0);
    ST32(sp+160, a0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+132, a2);
    ST32(sp+136, FBITS(f3));
    ST32(sp+148, a2);
    ST32(sp+152, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+144, FBITS(f21));
    if (cnd_) { goto L_08A67E2C; }
    goto L_08A67DF8;
L_08A67DF8:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {a2=FBITS(vr2);}
    {t0=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+160, t0);
    ST32(sp+164, v0);
    ST32(sp+168, a2);
    ST32(sp+144, t0);
    ST32(sp+148, v0);
    ST32(sp+152, a2);
    goto L_08A67E2C;
L_08A67E2C:;
    f1 = BITSF(LD32(sp+104));
    f6 = BITSF(LD32(sp+152));
    f0 = f1 * f6;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+84);
    if (cnd_) { goto L_08A67E54; }
    goto L_08A67E48;
L_08A67E48:;
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    ST32(sp+152, FBITS(f6));
    a2 = LD32(sp+84);
    goto L_08A67E54;
L_08A67E54:;
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    a0 = LD32(sp+120);
    a1 = LD32(sp+80);
    a3 = LD32(sp+88);
    {u32 a_=sp+(720);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {vr0=BITSF(v0);}
    {v[5]=BITSF(a2);}
    {vr1=BITSF(v1);}
    {v[6]=BITSF(a3);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {t0=FBITS(v[9]);}
    f0 = BITSF(t0);
    f2 = BITSF(t0);
    {u32 a_=sp+(640);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    fcc = FCMP(f21, f0, 12);
    {vr0=BITSF(a1);}
    {u32 a_=sp+(656);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr1=BITSF(a2);}
    {v[4]=BITSF(v0);}
    {vr2=BITSF(a3);}
    {v0=FBITS(v[10]);}
    {v[5]=BITSF(v1);}
    f3 = BITSF(v0);
    {v[6]=BITSF(a0);}
    f4 = BITSF(LD32(sp+144));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f5 = BITSF(LD32(sp+148));
    {v1=FBITS(vr0);}
    f25 = BITSF(v1);
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    a0 = FBITS(f1);
    {t0=FBITS(v[8]);}
    {u32 a_=sp+(672);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    a2 = FBITS(f4);
    {v[5]=BITSF(v1);}
    {vr0=BITSF(a2);}
    {v[6]=BITSF(a0);}
    v0 = FBITS(f5);
    v1 = FBITS(f6);
    {vr1=BITSF(v0);}
    ST32(sp+160, t0);
    {vr2=BITSF(v1);}
    f0 = f25;
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    ST32(sp+168, FBITS(f3));
    {a0=FBITS(v[4]);}
    f7 = f22;
    f8 = BITSF(a0);
    ST32(sp+128, t0);
    ST32(sp+132, FBITS(f2));
    ST32(sp+136, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+164, FBITS(f2));
    if (cnd_) { goto L_08A67F4C; }
    goto L_08A67F44;
L_08A67F44:;
    v0 = D_08AF0898 - (2200);
    f7 = BITSF(LD32(v0+2200));
    goto L_08A67F4C;
L_08A67F4C:;
    f22 = BITSF(0);
    fcc = FCMP(f0, f22, 12);
    cnd_ = !fcc;
    f28 = f7;
    if (cnd_) { goto L_08A67F6C; }
    goto L_08A67F60;
L_08A67F60:;
    v0 = 1;
    ST8(s5+72, v0);
    goto L_08A67648;
L_08A67F6C:;
    fcc = FCMP(f0, f22, 14);
    cnd_ = fcc;
    f12 = f22;
    if (cnd_) { goto L_08A67F80; }
    goto L_08A67F7C;
L_08A67F7C:;
    f12 = f0;
    goto L_08A67F80;
L_08A67F80:;
    fcc = FCMP(f8, f22, 14);
    f7 = f22;
    cnd_ = fcc;
    f25 = f12;
    if (cnd_) { goto L_08A67F94; }
    goto L_08A67F90;
L_08A67F90:;
    f7 = f8;
    goto L_08A67F94;
L_08A67F94:;
    f0 = BITSF(LD32(s5+20));
    f1 = BITSF(LD32(fp+4));
    f2 = BITSF(LD32(fp+8));
    f0 = f0 + f4;
    f1 = f1 + f5;
    f2 = f2 + f6;
    a2 = D_08C29E84 - (-24956);
    a2 = a2 - 24956;
    a0 = fp + 0;
    a1 = sp + 160;
    f12 = f22;
    a3 = 0 + 0;
    f21 = f7;
    ST32(sp+160, FBITS(f0));
    s3 = sp + 176;
    s2 = D_08C29E54 - (-25004);
    ST32(sp+164, FBITS(f1));
    s2 = s2 - 25004;
    s4 = sp + 288;
    ST32(sp+168, FBITS(f2));
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_0897BFA8(a0, a1, a2, a3, f12); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A67FE8;
L_08A67FE8:;
    a2 = D_08C29E64 - (-24988);
    f2 = BITSF(LD32(s5+20));
    f0 = BITSF(LD32(sp+96));
    f1 = BITSF(LD32(sp+100));
    f3 = BITSF(LD32(fp+4));
    f2 = f2 + f0;
    f4 = BITSF(LD32(fp+8));
    f0 = BITSF(LD32(sp+104));
    f3 = f3 + f1;
    a2 = a2 - 24988;
    f4 = f4 + f0;
    a0 = fp + 0;
    a1 = sp + 160;
    a3 = 0 + 0;
    f12 = f22;
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f3));
    ST32(sp+168, FBITS(f4));
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_0897BFA8(a0, a1, a2, a3, f12); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A68034;
L_08A68034:;
    f12 = f25;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6803C;
L_08A6803C:;
    f12 = f21;
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A6804C;
L_08A6804C:;
    a1 = D_08AE6A50 - (27216);
    t1 = s1 + 0;
    t2 = v0 + 0;
    t3 = v1 + 0;
    t0 = s0 + 0;
    a0 = s3 + 0;
    a1 = a1 + 27216;
    a2 = 100;
    a3 = 1;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68074;
L_08A68074:;
    a0 = s3 + 0;
    a3 = s2 + 0;
    a2 = 7;
    t0 = 0 + 0;
    a1 = 5;
    f12 = f22;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_0897CE90(a0, a1, a2, a3, t0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68090;
L_08A68090:;
    f12 = BITSF(LD32(sp+148));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A68098;
L_08A68098:;
    f12 = BITSF(LD32(sp+152));
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A680A8;
L_08A680A8:;
    a1 = D_08AE6A64 - (27236);
    a0 = s4 + 0;
    a1 = a1 + 27236;
    t0 = s0 + 0;
    a2 = 100;
    a3 = 1;
    t2 = v0 + 0;
    t3 = v1 + 0;
    t1 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A680D0;
L_08A680D0:;
    a0 = s4 + 0;
    a3 = s2 + 0;
    f12 = f22;
    a1 = 5;
    a2 = 8;
    t0 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_0897CE90(a0, a1, a2, a3, t0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A680EC;
L_08A680EC:;
    s2 = D_08B25AC0 - (23232);
    goto L_08A680F0;
L_08A680F0:;
    v1 = LD32(s2+23232);
    goto L_08A680F4;
L_08A680F4:;
    a1 = s2 + 23232;
    goto L_08A680F8;
L_08A680F8:;
    f8 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    f13 = BITSF(LD32(sp));
    f11 = BITSF(LD32(sp+4));
    f10 = BITSF(LD32(sp+8));
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    f4 = f8 - f13;
    v1 = v1 + v0;
    f5 = f7 - f11;
    f3 = f6 - f10;
    v1 = v1 + a0;
    a2 = v1 >> 1;
    f0 = BITSF(a2);
    t0 = FBITS(f4);
    {u32 a_=sp+(736);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    {vr0=BITSF(t0);}
    a2 = FBITS(f3);
    {vr1=BITSF(v0);}
    {vr2=BITSF(a2);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f2 = (float)(s32)FBITS(f0);
    s3 = D_08AF089C - (2204);
    f0 = BITSF(LD32(s3+2204));
    s1 = LD32(s5+80);
    a0 = a0 + v1;
    f2 = f2 * f0;
    f1 = BITSF(LD32(s1+24));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    f0 = BITSF(0);
    {t0=FBITS(vr0);}
    f9 = BITSF(t0);
    f2 = f2 * f1;
    f1 = BITSF(LD32(s5+68));
    fcc = FCMP(f9, f0, 2);
    ST32(sp+160, FBITS(f4));
    f29 = f1 + f2;
    a3 = s1 + 0;
    ST32(a1+4, a0);
    f12 = f8;
    f14 = f7;
    ST32(s2+23232, v1);
    f4 = f6;
    ST32(sp+164, FBITS(f5));
    cnd_ = fcc;
    ST32(sp+168, FBITS(f3));
    if (cnd_) { goto L_08A689D8; }
    goto L_08A681BC;
L_08A681BC:;
    f0 = BITSF(LD32(s1+16));
    v0 = D_08AF0894 - (2196);
    f1 = BITSF(LD32(v0+2196));
    f0 = f0 / f9;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A681DC; }
    goto L_08A681DC;
L_08A681DC:;
    f2 = f0;
    goto L_08A681E0;
L_08A681E0:;
    a0 = D_08AF0894 - (2196);
    f1 = BITSF(LD32(a3+20));
    f0 = BITSF(LD32(a0+2196));
    f24 = f0 / f1;
    fcc = FCMP(f2, f24, 14);
    cnd_ = !fcc;
    if (cnd_) { f24 = f2; goto L_08A68200; }
    goto L_08A68200;
L_08A68200:;
    v0 = LD32(s2+23232);
    a2 = s2 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    t0 = v1 >> 1;
    f0 = BITSF(t0);
    f2 = BITSF(LD32(s3+2204));
    ST32(sp+160, FBITS(f12));
    f1 = (float)(s32)FBITS(f0);
    f3 = f26 + f29;
    ST32(sp+164, FBITS(f14));
    a0 = a0 + v1;
    f1 = f1 * f2;
    ST32(sp+168, FBITS(f4));
    f2 = f24;
    s4 = sp + 144;
    f0 = BITSF(LD32(a3+4));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    ST32(s2+23232, v1);
    f27 = f3 + f1;
    goto L_08A68274;
L_08A68274:;
    v0 = D_08AF0894 - (2196);
    f21 = BITSF(LD32(v0+2196));
    fcc = FCMP(f21, f2, 14);
    cnd_ = fcc;
    f12 = f21;
    if (cnd_) { goto L_08A68290; }
    goto L_08A6828C;
L_08A6828C:;
    f21 = f2;
    goto L_08A68290;
L_08A68290:;
    f0 = f12 - f21;
    f4 = f13 * f21;
    f5 = f11 * f21;
    f3 = f10 * f21;
    f2 = f6 * f0;
    f1 = f8 * f0;
    f0 = f7 * f0;
    fcc = FCMP(f25, f12, 12);
    f6 = f2 + f3;
    f1 = f1 + f4;
    f0 = f0 + f5;
    f23 = BITSF(0);
    ST32(sp+152, FBITS(f6));
    ST32(sp+144, FBITS(f1));
    ST32(sp+148, FBITS(f0));
    ST32(sp+128, FBITS(f23));
    ST32(sp+132, FBITS(f23));
    cnd_ = !fcc;
    ST32(sp+136, FBITS(f23));
    if (cnd_) { goto L_08A6832C; }
    goto L_08A682DC;
L_08A682DC:;
    v0 = D_08AF08A0 - (2208);
    f0 = BITSF(LD32(v0+2208));
    {u32 a_=sp+(752);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = f12 - f25;
    f0 = f21 * f0;
    f2 = f2 * f28;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(752);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AF08A4 - (2212);
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0+2212));
    f2 = f2 * f0;
    ST32(sp+128, FBITS(f2));
    goto L_08A6832C;
L_08A6832C:;
    a0 = LD32(s2+23232);
    s0 = s2 + 23232;
    a3 = LD32(sp+32);
    t0 = LD32(sp+36);
    t1 = LD32(sp+40);
    a1 = LD32(s0+4);
    {u32 a_=sp+(848);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a3);}
    {v[33]=BITSF(t0);}
    {v[34]=BITSF(t1);}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    a2 = LD32(sp+44);
    {u32 a_=sp+(832);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    t2 = LD32(sp+48);
    t3 = LD32(sp+52);
    t4 = LD32(sp+56);
    t5 = LD32(sp+60);
    t6 = LD32(sp+64);
    {u32 a_=sp+(864);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    t7 = (u32)((s32)a0 >> 16);
    {v[32]=BITSF(a2);}
    a0 = a0 << 16;
    {v[33]=BITSF(t2);}
    {v[34]=BITSF(t3);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(880);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(t4);}
    {v[33]=BITSF(t5);}
    {v[34]=BITSF(t6);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(784);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+128);
    v1 = LD32(sp+132);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(768);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    {v[20]=BITSF(v0);}
    a0 = a0 + t7;
    v0 = LD32(sp+136);
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(v0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f8 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    a0 = a0 + a1;
    {v1=FBITS(v[16]);}
    f6 = BITSF(v0);
    f1 = BITSF(v1);
    v0 = (u32)((s32)a0 >> 16);
    a1 = a1 + a0;
    f7 = BITSF(v1);
    ST32(sp+112, v1);
    v1 = a0 << 16;
    a0 = a0 >> 1;
    ST32(sp+116, FBITS(f0));
    v1 = v1 + v0;
    f0 = BITSF(a0);
    v1 = v1 + a1;
    v0 = v1 >> 1;
    {u32 a_=sp+(960);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+96, FBITS(f1));
    f4 = (float)(s32)FBITS(f0);
    f1 = BITSF(v0);
    {u32 a_=sp+(976);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    ST32(sp+120, FBITS(f8));
    f3 = (float)(s32)FBITS(f1);
    fcc = FCMP(f24, f12, 2);
    ST32(sp+100, FBITS(f6));
    a1 = a1 + v1;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+104, FBITS(f8));
    {v[48]=BITSF(a3);}
    {v[49]=BITSF(t0);}
    ST32(sp+128, FBITS(f7));
    {v[50]=BITSF(t1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    ST32(sp+132, FBITS(f6));
    ST32(sp+136, FBITS(f8));
    {u32 a_=sp+(992);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(s1+32));
    f22 = BITSF(LD32(s3+2204));
    {v[52]=BITSF(a2);}
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f4 = f4 * f22;
    f3 = f3 * f22;
    {v[53]=BITSF(t2);}
    f0 = f0 - f2;
    {v[54]=BITSF(t3);}
    {v[32]=BITSF(t4);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f3 = f3 * f0;
    f4 = f4 * f0;
    {v[33]=BITSF(t5);}
    {u32 a_=sp+(896);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    f3 = f2 + f3;
    f2 = f2 + f4;
    {v[34]=BITSF(t6);}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a0 = FBITS(f3);
    v0 = FBITS(f2);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v0);}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {v[21]=BITSF(a0);}
    v0 = 0 + 0;
    {u32 a_=sp+(944);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {v[22]=BITSF(v0);}
    ST32(s0+4, a1);
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    {a0=FBITS(v[16]);}
    {a2=FBITS(v[17]);}
    f5 = BITSF(v0);
    f1 = BITSF(a0);
    f0 = BITSF(a2);
    ST32(s2+23232, v1);
    ST32(sp+80, a0);
    ST32(sp+84, a2);
    ST32(sp+88, v0);
    ST32(sp+96, a0);
    ST32(sp+100, a2);
    ST32(sp+104, v0);
    ST32(sp+112, a0);
    ST32(sp+116, a2);
    cnd_ = fcc;
    ST32(sp+120, v0);
    if (cnd_) { goto L_08A68574; }
    goto L_08A68538;
L_08A68538:;
    f3 = f1 + f7;
    f4 = f0 + f6;
    f5 = f5 + f8;
    f2 = BITSF(LD32(sp+144));
    f1 = BITSF(LD32(sp+148));
    f0 = BITSF(LD32(sp+152));
    f2 = f2 + f3;
    f1 = f1 + f4;
    f0 = f0 + f5;
    ST32(sp+96, FBITS(f3));
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f5));
    goto L_08A68574;
L_08A68574:;
    v0 = LD32(s5+700);
    v1 = 92;
    a2 = LD32(s5+76);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = s4 + 0;
    a0 = sp + 160;
    v0 = lo;
    a2 = a2 + v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_088EB240(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68598;
L_08A68598:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A685D0; }
    goto L_08A685A0;
L_08A685A0:;
    v0 = LD32(s5+684);
    v1 = LD32(a1+4);
    ST32(a1+28, FBITS(f27));
    v0 = v0 << 2;
    v0 = v0 + s5;
    ST32(v0+84, v1);
    a0 = s5 + 0;
    ST32(a1+20, FBITS(f20));
    ST32(a1+24, FBITS(f20));
    v0 = func_08A68B88(a0);
    goto L_08A685C8;
L_08A685C8:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A6764C; }
    goto L_08A685D0;
L_08A685D0:;
    v0 = LD32(s7+23240);
    a1 = s7 + 23240;
    v1 = LD32(a1+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f0 = BITSF(a0);
    s1 = LD32(s5+80);
    v1 = v1 + v0;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(s1+64));
    ST32(a1+4, v1);
    f1 = f1 * f22;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s7+23240, v0);
    if (cnd_) { goto L_08A687A0; }
    goto L_08A6861C;
L_08A6861C:;
    f0 = BITSF(LD32(sp+160));
    f4 = BITSF(LD32(sp+144));
    f3 = BITSF(LD32(sp+148));
    f2 = BITSF(LD32(sp+152));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+164));
    {u32 a_=sp+(1024);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f14 = f23;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+168));
    a2 = FBITS(f4);
    {v[12]=BITSF(a2);}
    f2 = f2 - f0;
    t0 = FBITS(f3);
    {v[13]=BITSF(t0);}
    ST32(sp+96, FBITS(f4));
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+100, FBITS(f3));
    fcc = FCMP(f0, f23, 2);
    cnd_ = fcc;
    ST32(sp+104, FBITS(f2));
    if (cnd_) { goto L_08A686C0; }
    goto L_08A68684;
L_08A68684:;
    {float s0=vr0;float d0=sqrtf(s0);v[4]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {a0=FBITS(v[4]);}
    f14 = BITSF(a0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {a2=FBITS(vr2);}
    {t0=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+80, t0);
    ST32(sp+84, v0);
    ST32(sp+88, a2);
    ST32(sp+96, t0);
    ST32(sp+100, v0);
    ST32(sp+104, a2);
    goto L_08A686C0;
L_08A686C0:;
    v0 = D_08AF08A8 - (2216);
    f0 = BITSF(LD32(v0+2216));
    v1 = D_08AF0894 - (2196);
    f1 = BITSF(LD32(v1+2196));
    f14 = f14 * f0;
    fcc = FCMP(f14, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f14 = f1; goto L_08A686E4; }
    goto L_08A686E4;
L_08A686E4:;
    v0 = D_08AF08AC - (2220);
    f13 = BITSF(LD32(v0+2220));
    v0 = D_08AF08B0 - (2224);
    f12 = BITSF(LD32(v0+2224));
    f15 = f14 * f13;
    a1 = sp + 96;
    a0 = sp + 80;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_088F7E04(a0, a1, f12, f13, f14, f15); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A68704;
L_08A68704:;
    v1 = LD32(s5+700);
    v0 = 92;
    f5 = BITSF(LD32(sp+80));
    f3 = BITSF(LD32(sp+84));
    f4 = BITSF(LD32(sp+88));
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    f2 = BITSF(LD32(sp+160));
    f1 = BITSF(LD32(sp+164));
    f0 = BITSF(LD32(sp+168));
    a2 = LD32(s5+76);
    f2 = f2 + f5;
    f1 = f1 + f3;
    f0 = f0 + f4;
    v1 = lo;
    a1 = sp + 80;
    a2 = a2 + v1;
    a0 = sp + 160;
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+96, FBITS(f5));
    ST32(sp+100, FBITS(f3));
    ST32(sp+104, FBITS(f4));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_088EB240(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A68764;
L_08A68764:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A6879C; }
    goto L_08A6876C;
L_08A6876C:;
    v0 = LD32(s5+684);
    v1 = LD32(a1+4);
    ST32(a1+28, FBITS(f27));
    v0 = v0 << 2;
    v0 = v0 + s5;
    ST32(v0+84, v1);
    a0 = s5 + 0;
    ST32(a1+20, FBITS(f20));
    ST32(a1+24, FBITS(f20));
    v0 = func_08A68B88(a0);
    goto L_08A68794;
L_08A68794:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A6764C; }
    goto L_08A6879C;
L_08A6879C:;
    s1 = LD32(s5+80);
    goto L_08A687A0;
L_08A687A0:;
    f0 = BITSF(LD32(sp+144));
    v0 = LD32(s2+23232);
    a0 = s2 + 23232;
    ST32(sp+160, FBITS(f0));
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    f0 = BITSF(LD32(sp+148));
    v0 = v0 + v1;
    v1 = LD32(a0+4);
    ST32(sp+164, FBITS(f0));
    t0 = D_08AF0894 - (2196);
    v0 = v0 + v1;
    f0 = BITSF(LD32(sp+152));
    a2 = v0 >> 1;
    f4 = BITSF(LD32(s3+2204));
    ST32(sp+168, FBITS(f0));
    f0 = BITSF(a2);
    v1 = v1 + v0;
    f2 = BITSF(LD32(s1+28));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(t0+2196));
    f3 = BITSF(FBITS(f2) ^ 0x80000000u);
    a1 = 1;
    f1 = f1 * f4;
    fcc = FCMP(f0, f21, 14);
    f2 = f2 - f3;
    ST32(a0+4, v1);
    f1 = f1 * f2;
    ST32(s2+23232, v0);
    cnd_ = fcc;
    f3 = f3 + f1;
    if (cnd_) { goto L_08A68820; }
    goto L_08A6881C;
L_08A6881C:;
    a1 = 0 + 0;
    goto L_08A68820;
L_08A68820:;
    f0 = f24 + f3;
    cnd_ = a1 != 0;
    f2 = f21 + f0;
    if (cnd_) { goto L_08A68848; }
    goto L_08A6882C;
L_08A6882C:;
    f13 = BITSF(LD32(sp));
    f11 = BITSF(LD32(sp+4));
    f10 = BITSF(LD32(sp+8));
    f8 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    goto L_08A68274;
L_08A68848:;
    a0 = LD32(s5+56);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { ST32(s5+688, FBITS(f29)); goto L_08A67920; }
    goto L_08A68858;
L_08A68858:;
    { u64 r_ = func_0889D1BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A68860;
L_08A68860:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A689C8; }
    goto L_08A68868;
L_08A68868:;
    v0 = LD32(sp+432);
    f6 = BITSF(LD32(fp+8));
    f4 = BITSF(LD32(s5+20));
    f3 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(fp+4));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s5+32));
    f3 = f3 - f6;
    f2 = f2 - f5;
    f1 = f1 - f4;
    v0 = D_08AF08B4 - (2228);
    f0 = BITSF(LD32(v0+2228));
    f7 = BITSF(0);
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    fcc = FCMP(f7, f26, 12);
    f6 = f6 + f3;
    f4 = f4 + f1;
    f5 = f5 + f2;
    ST32(sp+128, FBITS(f1));
    ST32(sp+112, FBITS(f4));
    ST32(sp+116, FBITS(f5));
    ST32(sp+120, FBITS(f6));
    ST32(sp+132, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+136, FBITS(f3));
    if (cnd_) { goto L_08A6898C; }
    goto L_08A688D4;
L_08A688D4:;
    f1 = BITSF(LD32(s5+692));
    fcc = FCMP(f7, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5+4));
    if (cnd_) { goto L_08A689D0; }
    goto L_08A688E8;
L_08A688E8:;
    f1 = f0 / f1;
    v1 = D_08AF0894 - (2196);
    f0 = BITSF(LD32(v1+2196));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A68904; }
    goto L_08A68904;
L_08A68904:;
    v0 = LD32(s5+80);
    cnd_ = v0 == 0;
    f4 = f0;
    if (cnd_) { goto L_08A68918; }
    goto L_08A68910;
L_08A68910:;
    f0 = BITSF(LD32(v0+12));
    f4 = f4 * f0;
    goto L_08A68918;
L_08A68918:;
    a0 = LD32(s2+23232);
    a3 = s2 + 23232;
    a1 = LD32(a3+4);
    a2 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    v0 = LD32(sp+128);
    v1 = LD32(sp+132);
    a0 = a0 + a2;
    {u32 a_=sp+(1040);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+136);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    a0 = a0 + a1;
    a2 = a0 >> 1;
    f0 = BITSF(a2);
    f3 = BITSF(LD32(s3+2204));
    a1 = a1 + a0;
    f2 = (float)(s32)FBITS(f0);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = f2 * f3;
    ST32(a3+4, a1);
    f1 = f0 * f4;
    ST32(s2+23232, a0);
    f2 = f2 * f1;
    ST32(t0+12, FBITS(f2));
    goto L_08A6898C;
L_08A6898C:;
    f0 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+116));
    a2 = D_08C29E54 - (-25004);
    ST32(t0, FBITS(f0));
    a0 = sp + 112;
    a2 = a2 - 25004;
    f0 = BITSF(LD32(sp+120));
    ST32(t0+4, FBITS(f1));
    a1 = sp + 400;
    f12 = f29;
    ST32(t0+8, FBITS(f0));
    a3 = 0 + 0;
    f0 = BITSF(LD32(t0+12));
    ST32(sp+400, FBITS(f0));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_0897B28C(a0, a1, a2, a3, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A689C8;
L_08A689C8:;
    ST32(s5+688, FBITS(f29));
    goto L_08A67920;
L_08A689D0:;
    f1 = f0;
    goto L_08A688E8;
L_08A689D8:;
    v1 = D_08AF0894 - (2196);
    f2 = BITSF(LD32(v1+2196));
    goto L_08A681E0;
L_08A689E4:;
    ST32(s2, s4);
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(s5+684, s3);
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    v0 = func_08A68B88(a0);
    goto L_08A68A10;
L_08A68A10:;
    {u32 a_=sp+(1056);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1168);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    goto L_08A678E4;
L_08A68A34:;
    v0 = D_08AF0894 - (2196);
    goto L_08A68A38;
L_08A68A38:;
    f20 = BITSF(LD32(v0+2196));
    goto L_08A67770;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}
