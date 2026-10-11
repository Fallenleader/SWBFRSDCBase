#include "game.h"

/* 089EFBC8 */
rv_t func_089EFBC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089EFBC8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EFA58(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFBDC;
L_089EFBDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EFBE8 */
rv_t func_089EFBE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089EFBE8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EFA58(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFBFC;
L_089EFBFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EFC08 */
void func_089EFC08(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089EFC08:;
    sp = sp - 32;
    s4 = a0 + 188;
    s3 = a0 + 0;
    a0 = s4 + 0;
    s0 = D_08B0A8B0 - (-22352);
    s0 = s0 - 22352;
    s1 = s3 + 112;
    func_08873E94(a0, a1);
    goto L_089EFC40;
L_089EFC40:;
    a1 = s0 + 24;
    a2 = (u32)-1;
    a0 = s1 + 0;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089EFC54;
L_089EFC54:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_08A063EC(a0, a1);
    goto L_089EFC60;
L_089EFC60:;
    a1 = D_08B0A6A0 - (-22880);
    a1 = a1 - 22880;
    v1 = a1 + 452;
    ST32(s3+188, v1);
    v1 = 2;
    v0 = a1 + 248;
    ST32(s3+88, v1);
    v1 = D_08AEF390 - (-3184);
    a0 = s1 + 0;
    ST32(s3+112, v0);
    v0 = 999;
    f0 = BITSF(LD32(v1-3184));
    ST32(s3+84, v0);
    v0 = 1;
    v1 = D_08AEF398 - (-3176);
    ST8(s3+100, v0);
    v0 = D_08AEF394 - (-3180);
    ST32(s3+104, FBITS(f0));
    f0 = BITSF(LD32(v0-3180));
    ST32(s3, a1);
    ST32(s3+108, FBITS(f0));
    ST32(s3+92, 0);
    ST32(s3+96, 0);
    v0 = LD32(s1+64);
    f12 = BITSF(LD32(v1-3176));
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+64, v0);
    func_0886422C(a0, f12);
    goto L_089EFCD0;
L_089EFCD0:;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    v0 = 5;
    a0 = s4 + 0;
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089EFD70; }
    goto L_089EFCE8;
L_089EFCE8:;
    a0 = s4 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EFCF0;
L_089EFCF0:;
    v0 = (u32)-32743;
    goto L_089EFCF4;
L_089EFCF4:;
    ST16(s4+8, v0);
    s2 = D_08C2BB38 - (-17608);
    s1 = s2 - 17608;
    a1 = LD32(s3);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFD24;
L_089EFD24:;
    a0 = LD32(s2-17608);
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
L_089EFD70:;
    { rv_t r_ = func_088741DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFD78;
L_089EFD78:;
    v0 = (u32)-32743;
    goto L_089EFCF4;
}

/* 089EFD80 */
rv_t func_089EFD80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089EFD80:;
    v1 = D_08B0A6A0 - (-22880);
    sp = sp - 32;
    v1 = v1 - 22880;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+188, a0);
    a0 = D_08C2BB38 - (-17608);
    a0 = a0 - 17608;
    ST32(s1+112, v0);
    s0 = D_08B0A8B0 - (-22352);
    s0 = s0 - 22352;
    s3 = s1 + 188;
    func_08ACA0F0(a0, a1, t1, t2, t3);
    goto L_089EFDD4;
L_089EFDD4:;
    s2 = s1 + 112;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089EFDE8;
L_089EFDE8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EFDF4;
L_089EFDF4:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EFDFC;
L_089EFDFC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EFE18 */
rv_t func_089EFE18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089EFE18:;
    v1 = D_08B0A6A0 - (-22880);
    sp = sp - 32;
    v1 = v1 - 22880;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+188, a0);
    a0 = D_08C2BB38 - (-17608);
    a0 = a0 - 17608;
    ST32(s1+112, v0);
    s0 = D_08B0A8B0 - (-22352);
    s0 = s0 - 22352;
    s3 = s1 + 188;
    func_08ACA0F0(a0, a1, t1, t2, t3);
    goto L_089EFE6C;
L_089EFE6C:;
    s2 = s1 + 112;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089EFE80;
L_089EFE80:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EFE8C;
L_089EFE8C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EFE94;
L_089EFE94:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EFE9C;
L_089EFE9C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EFEB8 */
rv_t func_089EFEB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089EFEB8:;
    sp = sp - 16;
    s2 = a0 + 0;
    a1 = 92;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EFEF0;
L_089EFEF0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089EFF2C; }
    goto L_089EFEF8;
L_089EFEF8:;
    s0 = LD32(v0+24);
    a1 = s2 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089EFF14; }
    goto L_089EFF08;
L_089EFF08:;
    func_08A08244(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EFF10;
L_089EFF10:;
    ST32(s0+32, 0);
    goto L_089EFF14;
L_089EFF14:;
    v0 = LD32(s2);
    a1 = s1 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s2 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFF2C;
L_089EFF2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EFF44 */
rv_t func_089EFF44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089EFF44:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A06744(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFF58;
L_089EFF58:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EFFE0; }
    goto L_089EFF64;
L_089EFF64:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089EFFE4; }
    goto L_089EFF70;
L_089EFF70:;
    a2 = LD32(s0+84);
    a0 = D_08C2BF38 - (-16584);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 16584;
    if (cnd_) { goto L_089EFFEC; }
    goto L_089EFF84;
L_089EFF84:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16584);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EFFD4; }
    goto L_089EFFA8;
L_089EFFA8:;
    a0 = LD32(a1);
    goto L_089EFFAC;
L_089EFFAC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EFFFC; }
    goto L_089EFFC4;
L_089EFFC4:;
    a1 = LD32(a1+4);
    goto L_089EFFC8;
L_089EFFC8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EFFAC; }
    goto L_089EFFD0;
L_089EFFD0:;
    v1 = 0 + 0;
    goto L_089EFFD4;
L_089EFFD4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089EFFEC; }
    goto L_089EFFDC;
L_089EFFDC:;
    goto L_089EFFE0;
L_089EFFE0:;
    goto L_089EFFE4;
L_089EFFE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EFFEC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089F0064(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFFF4;
L_089EFFF4:;
    goto L_089EFFE0;
L_089EFFFC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089EFFC4; }
    goto L_089F0008;
L_089F0008:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EFFC8; }
    goto L_089F0014;
L_089F0014:;
    goto L_089EFFD4;
}

/* 089F001C */
rv_t func_089F001C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F001C:;
    sp = sp - 16;
    v0 = 0x8074;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089F0048; }
    goto L_089F0034;
L_089F0034:;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F003C;
L_089F003C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F0048:;
    v0 = LD32(a0);
    a1 = 10012;
    a0 = LD32(v0-16);
    a0 = a2 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F005C;
L_089F005C:;
    v0 = 1;
    goto L_089F003C;
}

/* 089F0064 */
rv_t func_089F0064(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0064:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0090;
L_089F0090:;
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = D_08AEF39C - (-3172);
    f0 = BITSF(LD32(v0-3172));
    a0 = LD32(s0+88);
    ST32(sp, FBITS(f2));
    f1 = f1 - f0;
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f1));
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F00BC;
L_089F00BC:;
    a0 = v0 + 0;
    v1 = LD32(s0);
    t1 = LD_U8(s0+100);
    a3 = LD32(s0+92);
    v0 = LD32(v1-16);
    t0 = LD32(s0+96);
    a2 = sp + 0;
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_089F8238(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F00E4;
L_089F00E4:;
    a0 = LD32(v0);
    a1 = v0 + 56;
    a2 = LD32(s0+68);
    v1 = LD32(a0-16);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    v0 = 1;
    ST32(s0+84, a0);
    ST8(a1+22, v0);
    ST32(a1+12, a2);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F011C */
rv_t func_089F011C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F011C:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 3;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0140;
L_089F0140:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F014C;
L_089F014C:;
    a1 = LD32(s1+88);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0158;
L_089F0158:;
    a1 = LD32(s1+92);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0164;
L_089F0164:;
    a1 = LD32(s1+96);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0170;
L_089F0170:;
    a1 = LD_U8(s1+100);
    a0 = s0 + 0;
    { rv_t r_ = func_0882DB94(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F017C;
L_089F017C:;
    f12 = BITSF(LD32(s1+104));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0188;
L_089F0188:;
    f12 = BITSF(LD32(s1+108));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0194;
L_089F0194:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F01A8 */
rv_t func_089F01A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F01A8:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F01CC;
L_089F01CC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F01D8;
L_089F01D8:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F01E4;
L_089F01E4:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a1 = s1 + 92;
    a0 = s0 + 0;
    cnd_ = (s32)v1 <= 0;
    ST32(s1+88, v0);
    if (cnd_) { goto L_089F0214; }
    goto L_089F01FC;
L_089F01FC:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0204;
L_089F0204:;
    a1 = s1 + 96;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0210;
L_089F0210:;
    v1 = LD32(sp);
    goto L_089F0214;
L_089F0214:;
    v0 = (s32)v1 < 2;
    a1 = s1 + 100;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F0264; }
    goto L_089F0224;
L_089F0224:;
    v0 = (s32)v1 < 3;
    a1 = s1 + 104;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F0248; }
    goto L_089F0234;
L_089F0234:;
    goto L_089F0238;
L_089F0238:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F0248:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0250;
L_089F0250:;
    a0 = s0 + 0;
    a1 = s1 + 108;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F025C;
L_089F025C:;
    goto L_089F0238;
L_089F0264:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F026C;
L_089F026C:;
    v1 = LD32(sp);
    goto L_089F0224;
}

/* 089F0274 */
rv_t func_089F0274(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0274:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F0398; }
    goto L_089F02A8;
L_089F02A8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF3A0 - (-3168);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3168));
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
    t0 = D_08C2BB08 - (-17656);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BB18 - (-17640);
    a3 = D_08C2BB28 - (-17624);
    v1 = t0 - 17656;
    a1 = v0 - 17640;
    a2 = a3 - 17624;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BB38 - (-17608);
    s0 = s3 - 17608;
    ST32(v1+8, FBITS(f5));
    a0 = 4;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17640, FBITS(f5));
    v0 = 1;
    ST32(t0-17656, FBITS(f1));
    ST32(a3-17624, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0360;
L_089F0360:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17608, v0);
    if (cnd_) { goto L_089F038C; }
    goto L_089F0370;
L_089F0370:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F0378;
L_089F0378:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F0378; }
    goto L_089F038C;
L_089F038C:;
    v0 = s3 - 17608;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F0398;
L_089F0398:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F03BC; }
    goto L_089F03AC;
L_089F03AC:;
    v0 = D_08C2BB38 - (-17608);
    a0 = LD32(v0-17608);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F03D4; }
    goto L_089F03BC;
L_089F03BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F03D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F03DC;
L_089F03DC:;
    goto L_089F03BC;
}

/* 089F03E4 */
rv_t func_089F03E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F03E4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F0274(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F03F8;
L_089F03F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0404 */
rv_t func_089F0404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0404:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F0274(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0418;
L_089F0418:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0424 */
void func_089F0424(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0424:;
    sp = sp - 32;
    s3 = D_08C2BBF8 - (-17416);
    s2 = s3 - 17416;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_089F044C;
L_089F044C:;
    f0 = BITSF(0);
    v0 = D_08B0AC90 - (-21360);
    v0 = v0 - 21360;
    a3 = s1 + 56;
    v1 = 1;
    t0 = (u32)-1;
    ST32(s1, v0);
    v0 = 999;
    a0 = s1 + 76;
    a1 = LD32(s1+4);
    ST32(a3+8, FBITS(f0));
    a2 = 1;
    ST32(s1+36, t0);
    ST32(a3+4, FBITS(f0));
    ST32(s1+32, t0);
    ST32(s1+68, FBITS(f0));
    ST32(s1+56, FBITS(f0));
    ST32(s1+44, v0);
    ST8(s1+73, v1);
    ST8(s1+28, v1);
    ST8(s1+72, v1);
    ST8(s1+29, 0);
    ST32(s1+40, 0);
    ST8(s1+52, 0);
    func_08A26584(a0, a1, a2);
    goto L_089F04B0;
L_089F04B0:;
    v1 = LD32(s2+4);
    v0 = (u32)-32749;
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    v1 = v1 - 1;
    a0 = 12;
    ST32(s1+48, 0);
    s0 = s0 & v1;
    s0 = s0 << 2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F04D8;
L_089F04D8:;
    a0 = LD32(s3-17416);
    v1 = LD32(s2+12);
    ST32(v0, s1);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a1 = LD32(s0);
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 089F051C */
rv_t func_089F051C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F051C:;
    v0 = D_08B0AC90 - (-21360);
    v0 = v0 - 21360;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2BBF8 - (-17416);
    a1 = s0 + 0;
    a0 = a0 - 17416;
    func_08ACA1BC(a0, a1, t1, t2, t3);
    goto L_089F0548;
L_089F0548:;
    a0 = s0 + 76;
    func_08A26640(a0, 0, 0, 0);
    goto L_089F0550;
L_089F0550:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F0558;
L_089F0558:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0568 */
rv_t func_089F0568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0568:;
    v0 = D_08B0AC90 - (-21360);
    v0 = v0 - 21360;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2BBF8 - (-17416);
    a1 = s0 + 0;
    a0 = a0 - 17416;
    func_08ACA1BC(a0, a1, t1, t2, t3);
    goto L_089F0594;
L_089F0594:;
    a0 = s0 + 76;
    func_08A26640(a0, 0, 0, 0);
    goto L_089F059C;
L_089F059C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F05A4;
L_089F05A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F05AC;
L_089F05AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F05BC */
rv_t func_089F05BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F05BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 76;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F05DC;
L_089F05DC:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089F0618; }
    goto L_089F05E4;
L_089F05E4:;
    v1 = LD_U16(s1+16);
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 5;
    if (cnd_) { goto L_089F067C; }
    goto L_089F05F4;
L_089F05F4:;
    cnd_ = v0 == 0;
    v0 = 0x8008;
    if (cnd_) { goto L_089F063C; }
    goto L_089F05FC;
L_089F05FC:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_089F0630; }
    goto L_089F0608;
L_089F0608:;
    a0 = s0 + 0;
    goto L_089F060C;
L_089F060C:;
    a1 = s1 + 0;
    { rv_t r_ = func_08874198(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0614;
L_089F0614:;
    v1 = v0 + 0;
    goto L_089F0618;
L_089F0618:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F0630:;
    v1 = 1;
    ST8(s0+28, v0);
    goto L_089F0618;
L_089F063C:;
    cnd_ = v1 == v0;
    v0 = 0x8009;
    if (cnd_) { goto L_089F0668; }
    goto L_089F0644;
L_089F0644:;
    cnd_ = v1 != v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F060C; }
    goto L_089F064C;
L_089F064C:;
    v0 = 1;
    a1 = 10010;
    ST32(s0+48, v0);
    goto L_089F0658;
L_089F0658:;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0660;
L_089F0660:;
    v1 = 1;
    goto L_089F0618;
L_089F0668:;
    v0 = 2;
    ST32(s0+48, v0);
    a0 = s0 + 0;
    a1 = 10009;
    goto L_089F0658;
L_089F067C:;
    v1 = 1;
    ST8(s0+28, 0);
    goto L_089F0618;
}

/* 089F0688 */
rv_t func_089F0688(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0688:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F069C;
L_089F069C:;
    a3 = LD_U8(s0+29);
    cnd_ = a3 != 0;
    if (cnd_) { goto L_089F071C; }
    goto L_089F06A8;
L_089F06A8:;
    a2 = LD32(s0+44);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_089F0804; }
    goto L_089F06B8;
L_089F06B8:;
    v1 = a0 - 15588;
    v0 = LD32(v1+4);
    a1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F070C; }
    goto L_089F06E0;
L_089F06E0:;
    a0 = LD32(a1);
    goto L_089F06E4;
L_089F06E4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F07E4; }
    goto L_089F06FC;
L_089F06FC:;
    a1 = LD32(a1+4);
    goto L_089F0700;
L_089F0700:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089F06E4; }
    goto L_089F0708;
L_089F0708:;
    v1 = 0 + 0;
    goto L_089F070C;
L_089F070C:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_089F0728; }
    goto L_089F0714;
L_089F0714:;
    ST8(s0+29, v0);
    goto L_089F071C;
L_089F071C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F0728:;
    a0 = D_08C29FC4 - (-24636);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24636;
    if (cnd_) { goto L_089F07A4; }
    goto L_089F0738;
L_089F0738:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24636);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F077C; }
    goto L_089F075C;
L_089F075C:;
    v1 = LD32(a0);
    goto L_089F0760;
L_089F0760:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F07C4; }
    goto L_089F076C;
L_089F076C:;
    a0 = LD32(a0+4);
    goto L_089F0770;
L_089F0770:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089F0760; }
    goto L_089F0778;
L_089F0778:;
    v1 = 0 + 0;
    goto L_089F077C;
L_089F077C:;
    cnd_ = v1 == 0;
    v0 = 999;
    if (cnd_) { goto L_089F07A4; }
    goto L_089F0784;
L_089F0784:;
    v1 = LD32(v1+28);
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_089F07A4; }
    goto L_089F0790;
L_089F0790:;
    ST32(s0+44, v1);
    a0 = s0 + 0;
    ST8(s0+29, v0);
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F07A0;
L_089F07A0:;
    a3 = LD_U8(s0+29);
    goto L_089F07A4;
L_089F07A4:;
    v0 = a3 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089F071C; }
    goto L_089F07B0;
L_089F07B0:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F07BC;
L_089F07BC:;
    goto L_089F071C;
L_089F07C4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089F0770; }
    goto L_089F07D0;
L_089F07D0:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089F0770; }
    goto L_089F07DC;
L_089F07DC:;
    goto L_089F077C;
L_089F07E4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089F06FC; }
    goto L_089F07F0;
L_089F07F0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089F0700; }
    goto L_089F07FC;
L_089F07FC:;
    goto L_089F070C;
L_089F0804:;
    v0 = 1;
    a3 = 1;
    ST8(s0+29, v0);
    goto L_089F07A4;
}

/* 089F0814 */
rv_t func_089F0814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0814:;
    sp = sp - 16;
    a1 = 28;
    s1 = a0 + 0;
    a3 = 0 + 0;
    a2 = LD_U16(a0+8);
    a0 = 90;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F083C;
L_089F083C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089F086C; }
    goto L_089F0844;
L_089F0844:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F085C; }
    goto L_089F0854;
L_089F0854:;
    func_089F0CCC(a0, a1);
    goto L_089F085C;
L_089F085C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 2;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F086C;
L_089F086C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0880 */
rv_t func_089F0880(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0880:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 6;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F08A8;
L_089F08A8:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F08B4;
L_089F08B4:;
    a0 = s0 + 0;
    v0 = func_089F09CC(a0);
    goto L_089F08BC;
L_089F08BC:;
    a1 = LD32(s0+44);
    a0 = s1 + 0;
    s2 = v0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F08CC;
L_089F08CC:;
    a1 = s0 + 56;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F08D8;
L_089F08D8:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F08E4;
L_089F08E4:;
    a1 = LD32(s0+40);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F08F0;
L_089F08F0:;
    f12 = BITSF(LD32(s0+68));
    a0 = s1 + 0;
    s0 = s0 + 76;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0900;
L_089F0900:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F090C;
L_089F090C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0924 */
void func_089F0924(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_089F0924:;
    t1 = a1 + 0;
    t2 = a2 + 0;
    t0 = a0 + 0;
    v0 = a1 & 0x1;
    v1 = (a1 >> 1) & 0x1;
    a0 = (a1 >> 5) & 0xfff;
    a2 = (t1 >> 2) & 0x7;
    a1 = (a1 >> 17) & 0xfff;
    a3 = t2 < 0x5u;
    ST8(t0+28, v0);
    t3 = 0 + 0;
    ST8(t0+52, v1);
    ST32(t0+32, a0);
    ST32(t0+36, a1);
    cnd_ = a3 != 0;
    ST32(t0+48, a2);
    if (cnd_) { goto L_089F0974; }
    goto L_089F0964;
L_089F0964:;
    v0 = 0x40000000u;
    v0 = t1 & v0;
    cnd_ = v0 == 0;
    v0 = t2 < 0x6u;
    if (cnd_) { goto L_089F097C; }
    goto L_089F0974;
L_089F0974:;
    t3 = 1;
    v0 = t2 < 0x6u;
    goto L_089F097C;
L_089F097C:;
    ST8(t0+72, t3);
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089F0990; }
    goto L_089F0988;
L_089F0988:;
    cnd_ = (s32)t1 >= 0;
    if (cnd_) { v0 = LD32(t0+32); goto L_089F0998; }
    goto L_089F0990;
L_089F0990:;
    a0 = 1;
    v0 = LD32(t0+32);
    goto L_089F0998;
L_089F0998:;
    v1 = 4095;
    cnd_ = v0 == v1;
    ST8(t0+73, a0);
    if (cnd_) { goto L_089F09C0; }
    goto L_089F09A4;
L_089F09A4:;
    v0 = LD32(t0+36);
    cnd_ = v0 == v1;
    v0 = (u32)-1;
    if (cnd_) { goto L_089F09B8; }
    goto L_089F09B0;
L_089F09B0:;
    return;
L_089F09B8:;
    ST32(t0+36, v0);
    return;
L_089F09C0:;
    v0 = (u32)-1;
    ST32(t0+32, v0);
    goto L_089F09A4;
}

/* 089F09CC */
u32 func_089F09CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
L_089F09CC:;
    v1 = LD32(a0+36);
    a1 = LD32(a0+32);
    t1 = LD_U8(a0+73);
    v0 = LD_U8(a0+28);
    a2 = LD_U8(a0+52);
    a3 = LD32(a0+48);
    t0 = LD_U8(a0+72);
    v1 = v1 & 0xfff;
    a1 = a1 & 0xfff;
    v0 = v0 & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((a2 & 0x1) << 1);
    v0 = (v0 & ~(0xfffu << 17)) | ((v1 & 0xfff) << 17);
    v0 = (v0 & ~(0xfffu << 5)) | ((a1 & 0xfff) << 5);
    v0 = (v0 & ~(0x7u << 2)) | ((a3 & 0x7) << 2);
    v0 = (v0 & ~(0x1u << 30)) | ((t0 & 0x1) << 30);
    v0 = (v0 & ~(0x1u << 31)) | ((t1 & 0x1) << 31);
    return v0;
}

/* 089F0A10 */
rv_t func_089F0A10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0A10:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0A38;
L_089F0A38:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0A44;
L_089F0A44:;
    v0 = LD32(sp);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 4;
    if (cnd_) { goto L_089F0B04; }
    goto L_089F0A54;
L_089F0A54:;
    cnd_ = (s32)v0 <= 0;
    a1 = s1 + 44;
    if (cnd_) { goto L_089F0AC0; }
    goto L_089F0A5C;
L_089F0A5C:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0A64;
L_089F0A64:;
    a1 = s1 + 56;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0A70;
L_089F0A70:;
    a0 = s0 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0A7C;
L_089F0A7C:;
    a1 = LD32(sp+12);
    a2 = LD32(sp);
    a0 = s1 + 0;
    func_089F0924(a0, a1, a2);
    goto L_089F0A8C;
L_089F0A8C:;
    v1 = LD32(sp);
    a1 = s1 + 40;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F0AF4; }
    goto L_089F0AA0;
L_089F0AA0:;
    v0 = (s32)v1 < 3;
    a1 = s1 + 68;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F0AE4; }
    goto L_089F0AB0;
L_089F0AB0:;
    v0 = (s32)v1 < 4;
    a0 = s1 + 76;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089F0AD4; }
    goto L_089F0AC0;
L_089F0AC0:;
    goto L_089F0AC4;
L_089F0AC4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F0AD4:;
    { rv_t r_ = func_08A26C18(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0ADC;
L_089F0ADC:;
    goto L_089F0AC4;
L_089F0AE4:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0AEC;
L_089F0AEC:;
    v1 = LD32(sp);
    goto L_089F0AB0;
L_089F0AF4:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0AFC;
L_089F0AFC:;
    v1 = LD32(sp);
    goto L_089F0AA0;
L_089F0B04:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B0C;
L_089F0B0C:;
    v1 = LD32(sp+4);
    a0 = s0 + 0;
    a1 = sp + 4;
    ST32(s1+32, v1);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B20;
L_089F0B20:;
    v0 = LD32(sp+4);
    a0 = s0 + 0;
    a1 = sp + 8;
    ST32(s1+36, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B34;
L_089F0B34:;
    a1 = s1 + 44;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B40;
L_089F0B40:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B4C;
L_089F0B4C:;
    v0 = LD32(sp+4);
    a1 = s1 + 52;
    a0 = s0 + 0;
    ST32(s1+48, v0);
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B60;
L_089F0B60:;
    a1 = s1 + 56;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B6C;
L_089F0B6C:;
    goto L_089F0AC4;
}

/* 089F0B74 */
void func_089F0B74(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0B74:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0B98;
L_089F0B98:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 5;
    t0 = 28;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089F0BB4;
L_089F0BB4:;
    a0 = s2 + 0;
    func_089F0BDC(a0);
    goto L_089F0BBC;
L_089F0BBC:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089F0BC4;
L_089F0BC4:;
    sp = sp + 16;
    return;
}

/* 089F0BDC */
void func_089F0BDC(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089F0BDC:;
    sp = sp - 64;
    f20 = BITSF(0);
    a1 = 0 + 0;
    s0 = a0 + 0;
    f12 = f20;
    a2 = 5;
    a3 = 0 + 0;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089F0C14;
L_089F0C14:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 7;
    a3 = 4;
    t0 = 96;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089F0C38;
L_089F0C38:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 16;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089F0C5C;
L_089F0C5C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 20;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089F0C80;
L_089F0C80:;
    v0 = D_08B1BC8C - (-17268);
    f13 = BITSF(LD32(v0-17268));
    v0 = D_08AEF3A4 - (-3164);
    f14 = BITSF(LD32(v0-3164));
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 24;
    t0 = 32;
    t1 = 8;
    t2 = 1;
    t3 = 0 + 0;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089F0CB8;
L_089F0CB8:;
    sp = sp + 64;
    return;
}

/* 089F0CCC */
void func_089F0CCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0CCC:;
    sp = sp - 16;
    v0 = a1 + 56;
    s1 = a1 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0+8));
    v1 = LD32(a1+44);
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a1+56));
    v0 = a0 + 4;
    ST32(s0, v1);
    a0 = a1 + 0;
    ST32(s0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    v0 = func_089F09CC(a0);
    goto L_089F0D14;
L_089F0D14:;
    ST32(s0+16, v0);
    f0 = BITSF(LD32(s1+68));
    v0 = LD32(s1+40);
    ST32(s0+24, FBITS(f0));
    ST32(s0+20, v0);
    sp = sp + 16;
    return;
}

/* 089F0D3C */
float func_089F0D3C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0D3C:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = s1 + 4;
    s0 = a1 + 0;
    a2 = sp + 0;
    v1 = s0 + 16;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+16));
    a0 = a1 + 0;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a1 = v0 + 0;
    if (cnd_) { goto L_089F0DAC; }
    goto L_089F0D7C;
L_089F0D7C:;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08AEF3A8 - (-3160); goto L_089F0DB0; }
    goto L_089F0D94;
L_089F0D94:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1); goto L_089F0DCC; }
    goto L_089F0DAC;
L_089F0DAC:;
    v0 = D_08AEF3A8 - (-3160);
    goto L_089F0DB0;
L_089F0DB0:;
    f0 = BITSF(LD32(v0-3160));
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, FBITS(f0));
    { rv_t r_ = func_08876124(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0DC8;
L_089F0DC8:;
    v0 = LD32(s1);
    goto L_089F0DCC;
L_089F0DCC:;
    a0 = s0 + 0;
    ST32(s0+84, v0);
    a1 = LD32(s1+16);
    func_089EBC6C(a0, a1);
    goto L_089F0DDC;
L_089F0DDC:;
    v0 = LD32(s1+20);
    ST32(s0+108, v0);
    f0 = BITSF(LD32(s1+24));
    ST32(s0+112, FBITS(f0));
    sp = sp + 32;
    return f0;
}

/* 089F0E00 */
rv_t func_089F0E00(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0E00:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F0F24; }
    goto L_089F0E34;
L_089F0E34:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF3AC - (-3156);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3156));
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
    t0 = D_08C2BB48 - (-17592);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BB58 - (-17576);
    a3 = D_08C2BB68 - (-17560);
    v1 = t0 - 17592;
    a1 = v0 - 17576;
    a2 = a3 - 17560;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BBF8 - (-17416);
    s0 = s3 - 17416;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17576, FBITS(f5));
    v0 = 8;
    ST32(t0-17592, FBITS(f1));
    ST32(a3-17560, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0EEC;
L_089F0EEC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17416, v0);
    if (cnd_) { goto L_089F0F18; }
    goto L_089F0EFC;
L_089F0EFC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F0F04;
L_089F0F04:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F0F04; }
    goto L_089F0F18;
L_089F0F18:;
    v0 = s3 - 17416;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F0F24;
L_089F0F24:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F0F48; }
    goto L_089F0F38;
L_089F0F38:;
    v0 = D_08C2BBF8 - (-17416);
    a0 = LD32(v0-17416);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F0F60; }
    goto L_089F0F48;
L_089F0F48:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F0F60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F0F68;
L_089F0F68:;
    goto L_089F0F48;
}

/* 089F0F70 */
rv_t func_089F0F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0F70:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F0E00(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0F84;
L_089F0F84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0F90 */
rv_t func_089F0F90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F0F90:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F0E00(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F0FA4;
L_089F0FA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F0FB0 */
void func_089F0FB0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F0FB0:;
    sp = sp - 32;
    s6 = a0 + 176;
    s1 = a0 + 0;
    a0 = s6 + 0;
    s0 = D_08B0AF60 - (-20640);
    s0 = s0 - 20640;
    s2 = s1 + 100;
    s5 = s1 + 204;
    s4 = D_08C2BC38 - (-17352);
    func_08873E94(a0, a1);
    goto L_089F0FF8;
L_089F0FF8:;
    a1 = s0 + 44;
    a0 = s2 + 0;
    a2 = (u32)-1;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089F1008;
L_089F1008:;
    a1 = s0 + 52;
    a0 = s5 + 0;
    a2 = 1;
    s0 = s0 + 4;
    func_088657EC(a0, a1, 0, 0, 0);
    goto L_089F101C;
L_089F101C:;
    a3 = 1;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 999;
    func_089F30A0(a0, a1);
    goto L_089F1030;
L_089F1030:;
    a1 = D_08B0ACEC - (-21268);
    a1 = a1 - 21268;
    v0 = a1 + 248;
    v1 = a1 + 452;
    ST32(s1+100, v0);
    a2 = a1 + 580;
    v0 = 2;
    ST32(s1+176, v1);
    v1 = 1;
    a0 = s2 + 0;
    ST32(s1+204, a2);
    s3 = s4 - 17352;
    ST8(s1+97, v1);
    v1 = D_08AEF3B4 - (-3148);
    ST32(s1, a1);
    ST32(s1+84, v0);
    ST32(s1+88, 0);
    ST32(s1+92, 0);
    ST8(s1+96, 0);
    v0 = LD32(s2+64);
    f12 = BITSF(LD32(v1-3148));
    v0 = v0 | 0x1;
    ST32(s2+64, v0);
    func_0886422C(a0, f12);
    goto L_089F1090;
L_089F1090:;
    a0 = s5 + 0;
    a2 = 1;
    a1 = 0 + 0;
    { rv_t r_ = func_08866188(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F10A0;
L_089F10A0:;
    v0 = (u32)-32754;
    ST16(s6+8, v0);
    a0 = 12;
    a1 = LD32(s1);
    v1 = LD32(s3+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F10CC;
L_089F10CC:;
    a0 = LD32(s4-17352);
    s0 = s0 << 2;
    v1 = LD32(s3+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s3+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 089F1120 */
rv_t func_089F1120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F1120:;
    v0 = D_08B0ACEC - (-21268);
    sp = sp - 32;
    v0 = v0 - 21268;
    a2 = v0 + 580;
    v1 = v0 + 248;
    s1 = a0 + 0;
    a0 = v0 + 452;
    ST32(s1+100, v1);
    a1 = s1 + 0;
    ST32(s1+204, a2);
    ST32(s1+176, a0);
    a0 = D_08C2BC38 - (-17352);
    a0 = a0 - 17352;
    ST32(s1, v0);
    s0 = D_08B0AF60 - (-20640);
    s0 = s0 - 20640;
    s4 = s1 + 176;
    s3 = s1 + 100;
    func_08ACA4B4(a0, a1, t1, t2, t3);
    goto L_089F1184;
L_089F1184:;
    s2 = s1 + 204;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_089F3270(a0, a1, 0, 0, 0);
    goto L_089F1194;
L_089F1194:;
    a1 = s0 + 52;
    a0 = s2 + 0;
    s0 = s0 + 44;
    func_088658E8(a0, a1, 0);
    goto L_089F11A4;
L_089F11A4:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F11B0;
L_089F11B0:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F11B8;
L_089F11B8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F11D8 */
rv_t func_089F11D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F11D8:;
    v0 = D_08B0ACEC - (-21268);
    sp = sp - 32;
    v0 = v0 - 21268;
    a2 = v0 + 580;
    v1 = v0 + 248;
    s1 = a0 + 0;
    a0 = v0 + 452;
    ST32(s1+100, v1);
    a1 = s1 + 0;
    ST32(s1+204, a2);
    ST32(s1+176, a0);
    a0 = D_08C2BC38 - (-17352);
    a0 = a0 - 17352;
    ST32(s1, v0);
    s0 = D_08B0AF60 - (-20640);
    s0 = s0 - 20640;
    s4 = s1 + 176;
    s3 = s1 + 100;
    func_08ACA4B4(a0, a1, t1, t2, t3);
    goto L_089F123C;
L_089F123C:;
    s2 = s1 + 204;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_089F3270(a0, a1, 0, 0, 0);
    goto L_089F124C;
L_089F124C:;
    a1 = s0 + 52;
    a0 = s2 + 0;
    s0 = s0 + 44;
    func_088658E8(a0, a1, 0);
    goto L_089F125C;
L_089F125C:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F1268;
L_089F1268:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F1270;
L_089F1270:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F1278;
L_089F1278:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1298 */
rv_t func_089F1298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1298:;
    sp = sp - 16;
    v0 = 0x800d;
    v1 = LD_U16(a1+16);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089F12D8; }
    goto L_089F12BC;
L_089F12BC:;
    v0 = 0x800e;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    v0 = v1 ^ 0x800d;
    if (cnd_) { goto L_089F1394; }
    goto L_089F12CC;
L_089F12CC:;
    v0 = 0x8053;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = LD32(a1+24); goto L_089F12FC; }
    goto L_089F12D8;
L_089F12D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_089F3508(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F12E0;
L_089F12E0:;
    v1 = v0 + 0;
    goto L_089F12E4;
L_089F12E4:;
    goto L_089F12E8;
L_089F12E8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F12FC:;
    cnd_ = s1 == 0;
    v1 = 1;
    if (cnd_) { goto L_089F12E4; }
    goto L_089F1304;
L_089F1304:;
    v0 = LD_U8(a0+96);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089F12E8; }
    goto L_089F1310;
L_089F1310:;
    f1 = BITSF(LD32(a0+88));
    f3 = BITSF(0);
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    f2 = BITSF(LD32(s1+12));
    if (cnd_) { goto L_089F133C; }
    goto L_089F1328;
L_089F1328:;
    f0 = f1 - f2;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a0); goto L_089F1378; }
    goto L_089F133C;
L_089F133C:;
    f1 = f1 - f2;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+88, FBITS(f0)); goto L_089F1370; }
    goto L_089F1354;
L_089F1354:;
    v0 = D_08ADEA7C - (-5508);
    f0 = BITSF(LD32(v0-5508));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089F136C; }
    goto L_089F136C;
L_089F136C:;
    ST32(s0+88, FBITS(f0));
    goto L_089F1370;
L_089F1370:;
    v1 = 1;
    goto L_089F12E4;
L_089F1378:;
    a1 = 10011;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1388;
L_089F1388:;
    f2 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s0+88));
    goto L_089F133C;
L_089F1394:;
    v0 = v0 < 0x1u;
    v1 = 1;
    ST8(a0+97, v0);
    goto L_089F12E4;
}

/* 089F13A4 */
rv_t func_089F13A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F13A4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 96;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F13D8;
L_089F13D8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089F1410; }
    goto L_089F13E0;
L_089F13E0:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F13F8; }
    goto L_089F13F0;
L_089F13F0:;
    func_089F1740(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F13F8;
L_089F13F8:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1410;
L_089F1410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1424 */
rv_t func_089F1424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1424:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a1 = 104;
    v0 = LD32(a0);
    a0 = 0x8055;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F1460;
L_089F1460:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089F14A8; }
    goto L_089F1468;
L_089F1468:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F1480; }
    goto L_089F1478;
L_089F1478:;
    func_089F1880(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F1480;
L_089F1480:;
    v0 = 2;
    ST32(s0, v0);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    { rv_t r_ = func_088ACA44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F14A8;
L_089F14A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F14C0 */
rv_t func_089F14C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F14C0:;
    sp = sp - 16;
    a2 = D_08C2A08C - (-24436);
    v0 = 999;
    s0 = a1 + 0;
    s1 = a0 + 0;
    a1 = LD32(a1+8);
    cnd_ = a1 == v0;
    v1 = a2 - 24436;
    if (cnd_) { goto L_089F1558; }
    goto L_089F14EC;
L_089F14EC:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089F1530; }
    goto L_089F1510;
L_089F1510:;
    a0 = LD32(v1);
    goto L_089F1514;
L_089F1514:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089F1578; }
    goto L_089F1520;
L_089F1520:;
    v1 = LD32(v1+4);
    goto L_089F1524;
L_089F1524:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089F1514; }
    goto L_089F152C;
L_089F152C:;
    a0 = 0 + 0;
    goto L_089F1530;
L_089F1530:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089F155C; }
    goto L_089F1538;
L_089F1538:;
    v1 = LD32(a0+88);
    v0 = LD32(s1+12);
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s1 + 0; goto L_089F155C; }
    goto L_089F1548;
L_089F1548:;
    v1 = LD32(a0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1558;
L_089F1558:;
    a0 = s1 + 0;
    goto L_089F155C;
L_089F155C:;
    a1 = s0 + 0;
    { rv_t r_ = func_089F3714(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1564;
L_089F1564:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F1578:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089F1524; }
    goto L_089F1584;
L_089F1584:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089F1524; }
    goto L_089F1590;
L_089F1590:;
    goto L_089F1530;
}

/* 089F1598 */
rv_t func_089F1598(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1598:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 3;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F15BC;
L_089F15BC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089F3544(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F15C8;
L_089F15C8:;
    a1 = LD32(s1+84);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F15D4;
L_089F15D4:;
    f12 = BITSF(LD32(s1+88));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F15E0;
L_089F15E0:;
    f12 = BITSF(LD32(s1+92));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F15EC;
L_089F15EC:;
    a1 = LD_U8(s1+96);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F15F8;
L_089F15F8:;
    a1 = LD_U8(s1+97);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1604;
L_089F1604:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1618 */
rv_t func_089F1618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F1618:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = sp + 16;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp+16, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1640;
L_089F1640:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089F359C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F164C;
L_089F164C:;
    v0 = LD32(sp+16);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F16DC; }
    goto L_089F1658;
L_089F1658:;
    a0 = s0 + 0;
    goto L_089F165C;
L_089F165C:;
    a1 = sp + 20;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1664;
L_089F1664:;
    v0 = LD32(sp+20);
    a1 = s1 + 88;
    a0 = s0 + 0;
    ST32(s1+84, v0);
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1678;
L_089F1678:;
    a1 = s1 + 92;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1684;
L_089F1684:;
    v0 = LD32(sp+16);
    a0 = s0 + 0;
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    a1 = sp + 24;
    if (cnd_) { goto L_089F16AC; }
    goto L_089F1698;
L_089F1698:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089F16AC:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F16B4;
L_089F16B4:;
    v1 = LD32(sp+24);
    a0 = s0 + 0;
    a1 = sp + 28;
    v1 = 0 < v1;
    ST8(s1+96, v1);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F16CC;
L_089F16CC:;
    v1 = LD32(sp+28);
    v1 = 0 < v1;
    ST8(s1+97, v1);
    goto L_089F1698;
L_089F16DC:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F16F4;
L_089F16F4:;
    v1 = LD32(s1);
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    a0 = LD32(v1-20);
    f0 = BITSF(LD32(v0+4));
    a1 = 0 + 0;
    a0 = s1 + a0;
    a2 = 1;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_08866188(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1724;
L_089F1724:;
    a0 = s1 + 0;
    v1 = LD32(s1);
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1738;
L_089F1738:;
    a0 = s0 + 0;
    goto L_089F165C;
}

/* 089F1740 */
void func_089F1740(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1740:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089F175C;
L_089F175C:;
    f0 = BITSF(0);
    v0 = LD_U8(s0+97);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+88)); goto L_089F176C; }
    goto L_089F176C;
L_089F176C:;
    ST32(s1+92, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 089F1784 */
rv_t func_089F1784(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1784:;
    sp = sp - 16;
    a2 = 1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08A083F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F17A4;
L_089F17A4:;
    f0 = BITSF(LD32(s1+92));
    ST32(s0+88, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F17C0 */
void func_089F17C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F17C0:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F17E4;
L_089F17E4:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 20;
    t0 = 96;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089F1800;
L_089F1800:;
    a0 = s2 + 0;
    func_089F1828(a0);
    goto L_089F1808;
L_089F1808:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089F1810;
L_089F1810:;
    sp = sp + 16;
    return;
}

/* 089F1828 */
void func_089F1828(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089F1828:;
    sp = sp - 112;
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089F183C;
L_089F183C:;
    f12 = BITSF(0);
    v0 = D_08AEF3B8 - (-3144);
    f13 = BITSF(LD32(v0-3144));
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 92;
    t0 = 32;
    t1 = 16;
    t2 = 1;
    t3 = 1;
    f14 = f12;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089F1870;
L_089F1870:;
    sp = sp + 112;
    return;
}

/* 089F1880 */
void func_089F1880(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1880:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = a0 + 8;
    func_089F1740(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089F18A0;
L_089F18A0:;
    f0 = BITSF(LD32(s1+92));
    ST32(s0+4, FBITS(f0));
    v0 = LD32(s1+84);
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089F18C4 */
rv_t func_089F18C4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F18C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 8;
    s1 = a1 + 0;
    { rv_t r_ = func_089F1784(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F18E4;
L_089F18E4:;
    f0 = BITSF(LD32(s0+4));
    ST32(s1+92, FBITS(f0));
    v0 = LD32(s0);
    ST32(s1+84, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1908 */
rv_t func_089F1908(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F1908:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F1A2C; }
    goto L_089F193C;
L_089F193C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF3BC - (-3140);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3140));
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
    t0 = D_08C2BC08 - (-17400);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BC18 - (-17384);
    a3 = D_08C2BC28 - (-17368);
    v1 = t0 - 17400;
    a1 = v0 - 17384;
    a2 = a3 - 17368;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BC38 - (-17352);
    s0 = s3 - 17352;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17384, FBITS(f5));
    v0 = 8;
    ST32(t0-17400, FBITS(f1));
    ST32(a3-17368, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F19F4;
L_089F19F4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17352, v0);
    if (cnd_) { goto L_089F1A20; }
    goto L_089F1A04;
L_089F1A04:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F1A0C;
L_089F1A0C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F1A0C; }
    goto L_089F1A20;
L_089F1A20:;
    v0 = s3 - 17352;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F1A2C;
L_089F1A2C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F1A50; }
    goto L_089F1A40;
L_089F1A40:;
    v0 = D_08C2BC38 - (-17352);
    a0 = LD32(v0-17352);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F1A68; }
    goto L_089F1A50;
L_089F1A50:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F1A68:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F1A70;
L_089F1A70:;
    goto L_089F1A50;
}

/* 089F1A78 */
rv_t func_089F1A78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1A78:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F1908(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1A8C;
L_089F1A8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1A98 */
rv_t func_089F1A98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1A98:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F1908(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1AAC;
L_089F1AAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1AB8 */
void func_089F1AB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1AB8:;
    sp = sp - 16;
    s0 = D_08B0B9F8 - (-17928);
    s0 = s0 - 17928;
    s1 = a0 + 0;
    a0 = a0 + 348;
    func_08873BF8(a0);
    goto L_089F1AE0;
L_089F1AE0:;
    s2 = s1 + 368;
    a0 = s1 + 84;
    a1 = s0 + 72;
    func_0885D56C(a0, a1);
    goto L_089F1AF0;
L_089F1AF0:;
    a1 = s0 + 96;
    a0 = s2 + 0;
    func_0885EE70(a0, a1);
    goto L_089F1AFC;
L_089F1AFC:;
    a1 = s0 + 108;
    a0 = s2 + 0;
    func_0885C25C(a0, a1, 0, 0, 0);
    goto L_089F1B08;
L_089F1B08:;
    a0 = s1 + 380;
    a1 = s0 + 124;
    s0 = s0 + 4;
    func_0885A8CC(a0, a1, 0, 0, 0);
    goto L_089F1B18;
L_089F1B18:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089F2190(a0, a1);
    goto L_089F1B24;
L_089F1B24:;
    v0 = D_08B0B7FC - (-18436);
    v0 = v0 - 18436;
    v1 = v0 + 488;
    a0 = v0 + 268;
    a1 = v0 + 380;
    a2 = v0 + 436;
    ST32(s1+380, v1);
    ST32(s1+84, a0);
    ST32(s1+348, a1);
    ST32(s1+368, a2);
    ST32(s1, v0);
    sp = sp + 16;
    return;
}

/* 089F1B68 */
void func_089F1B68(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1B68:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 552;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1B84;
L_089F1B84:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    func_089F1AB8(a0);
    goto L_089F1B90;
L_089F1B90:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089F1BB0; }
    goto L_089F1B9C;
L_089F1B9C:;
    goto L_089F1BA0;
L_089F1BA0:;
    sp = sp + 16;
    return;
L_089F1BB0:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1BC0;
L_089F1BC0:;
    goto L_089F1BA0;
}

/* 089F1BC8 */
rv_t func_089F1BC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1BC8:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-28);
    a0 = s0 + a0;
    { rv_t r_ = func_0885ACE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1BF8;
L_089F1BF8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F1C24; }
    goto L_089F1C04;
L_089F1C04:;
    s2 = 1;
    goto L_089F1C08;
L_089F1C08:;
    v0 = s2 + 0;
    goto L_089F1C0C;
L_089F1C0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F1C24:;
    { rv_t r_ = func_089F2218(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1C2C;
L_089F1C2C:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089F1C0C; }
    goto L_089F1C34;
L_089F1C34:;
    s2 = 1;
    goto L_089F1C08;
}

/* 089F1C3C */
rv_t func_089F1C3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1C3C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-28);
    a0 = s0 + a0;
    { rv_t r_ = func_0885B130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1C5C;
L_089F1C5C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089F228C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1C64;
L_089F1C64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1C74 */
rv_t func_089F1C74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089F1C74:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2BC48 - (-17336);
    t1 = D_08C2BC58 - (-17320);
    t2 = D_08C2BC68 - (-17304);
    a1 = a1 & a0;
    v1 = t0 - 17336;
    a2 = t1 - 17320;
    cnd_ = a1 == 0;
    a3 = t2 - 17304;
    if (cnd_) { goto L_089F1D2C; }
    goto L_089F1CA4;
L_089F1CA4:;
    v0 = D_08AEF3C0 - (-3136);
    f4 = BITSF(LD32(v0-3136));
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
    ST32(t0-17336, FBITS(f2));
    ST32(t1-17320, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-17304, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089F1D2C;
L_089F1D2C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1D34 */
rv_t func_089F1D34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1D34:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F1C74(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1D48;
L_089F1D48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1D54 */
void func_089F1D54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1D54:;
    sp = sp - 16;
    s0 = D_08B0C840 - (-14272);
    s0 = s0 - 14272;
    s1 = a0 + 0;
    a0 = a0 + 160;
    func_08873E94(a0, a1);
    goto L_089F1D78;
L_089F1D78:;
    a0 = s1 + 84;
    a1 = s0 + 72;
    a2 = (u32)-1;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089F1D88;
L_089F1D88:;
    a2 = 1;
    a0 = s1 + 188;
    a1 = s0 + 80;
    func_088657EC(a0, a1, 0, 0, 0);
    goto L_089F1D98;
L_089F1D98:;
    a0 = s1 + 196;
    a1 = s0 + 92;
    func_08860360(a0, a1);
    goto L_089F1DA4;
L_089F1DA4:;
    a0 = s1 + 256;
    a1 = s0 + 108;
    s0 = s0 + 4;
    func_0885F36C(a0, a1, 0, 0);
    goto L_089F1DB4;
L_089F1DB4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 999;
    func_089F23B4(a0, a1);
    goto L_089F1DC4;
L_089F1DC4:;
    v0 = D_08B0C504 - (-15100);
    v0 = v0 - 15100;
    v1 = v0 + 784;
    a0 = v0 + 248;
    a1 = v0 + 452;
    a2 = v0 + 580;
    a3 = v0 + 680;
    ST32(s1+256, v1);
    ST32(s1+84, a0);
    ST32(s1+160, a1);
    ST32(s1+188, a2);
    ST32(s1+196, a3);
    ST32(s1, v0);
    sp = sp + 16;
    return;
}

/* 089F1E0C */
rv_t func_089F1E0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1E0C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-28);
    a0 = s0 + a0;
    { rv_t r_ = func_0885FDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1E2C;
L_089F1E2C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089F251C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1E34;
L_089F1E34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1E44 */
rv_t func_089F1E44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1E44:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-28);
    a0 = s0 + a0;
    { rv_t r_ = func_0885FD50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1E74;
L_089F1E74:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F1EA0; }
    goto L_089F1E80;
L_089F1E80:;
    s2 = 1;
    goto L_089F1E84;
L_089F1E84:;
    v0 = s2 + 0;
    goto L_089F1E88;
L_089F1E88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F1EA0:;
    { rv_t r_ = func_089F2538(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1EA8;
L_089F1EA8:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089F1E88; }
    goto L_089F1EB0;
L_089F1EB0:;
    s2 = 1;
    goto L_089F1E84;
}

/* 089F1EB8 */
rv_t func_089F1EB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1EB8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    a0 = a0 + v1;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1ED0;
L_089F1ED0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1EDC */
rv_t func_089F1EDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F1EDC:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1F00;
L_089F1F00:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-28);
    a0 = s0 + a0;
    { rv_t r_ = func_0885F7E4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1F14;
L_089F1F14:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089F2558(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1F20;
L_089F1F20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1F34 */
rv_t func_089F1F34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F1F34:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1F58;
L_089F1F58:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-28);
    a0 = s0 + a0;
    { rv_t r_ = func_0885F9B4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1F6C;
L_089F1F6C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089F25B0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1F78;
L_089F1F78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F1F8C */
rv_t func_089F1F8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F1F8C:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089F1FAC;
L_089F1FAC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089F1FAC; }
    goto L_089F1FD0;
L_089F1FD0:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-28);
    a0 = s1 + a0;
    { rv_t r_ = func_0885FCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1FE4;
L_089F1FE4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089F2608(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F1FF0;
L_089F1FF0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2004 */
rv_t func_089F2004(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F2004:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F200C */
rv_t func_089F200C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F200C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2014 */
rv_t func_089F2014(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F2014:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F201C */
rv_t func_089F201C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F201C:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-28);
    a0 = a0 + v1;
    { rv_t r_ = func_08860050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2034;
L_089F2034:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2040 */
void func_089F2040(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2040:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 396;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2064;
L_089F2064:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_089F1D54(a0, a1);
    goto L_089F2074;
L_089F2074:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F2098; }
    goto L_089F2080;
L_089F2080:;
    goto L_089F2084;
L_089F2084:;
    sp = sp + 16;
    return;
L_089F2098:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F20A8;
L_089F20A8:;
    goto L_089F2084;
}

/* 089F20B0 */
rv_t func_089F20B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089F20B0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2BC78 - (-17288);
    t1 = D_08C2BC88 - (-17272);
    t2 = D_08C2BC98 - (-17256);
    a1 = a1 & a0;
    v1 = t0 - 17288;
    a2 = t1 - 17272;
    cnd_ = a1 == 0;
    a3 = t2 - 17256;
    if (cnd_) { goto L_089F2168; }
    goto L_089F20E0;
L_089F20E0:;
    v0 = D_08AEF3CC - (-3124);
    f4 = BITSF(LD32(v0-3124));
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
    ST32(t0-17288, FBITS(f2));
    ST32(t1-17272, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-17256, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089F2168;
L_089F2168:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2170 */
rv_t func_089F2170(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2170:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F20B0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2184;
L_089F2184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2190 */
void func_089F2190(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2190:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a1 + 4;
    s0 = a0 + 0;
    func_089F280C(a0, a1);
    goto L_089F21B0;
L_089F21B0:;
    v1 = LD32(s1);
    ST32(s0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(s1+32);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(s1+36);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(s1+40);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(s1+44);
    v0 = LD32(v1-24);
    s0 = s0 + v0;
    ST32(s0, a0);
    sp = sp + 16;
    return;
}

/* 089F2218 */
rv_t func_089F2218(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2218:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-24);
    a0 = s0 + a0;
    { rv_t r_ = func_0885C6C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2248;
L_089F2248:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F2274; }
    goto L_089F2254;
L_089F2254:;
    s2 = 1;
    goto L_089F2258;
L_089F2258:;
    v0 = s2 + 0;
    goto L_089F225C;
L_089F225C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F2274:;
    { rv_t r_ = func_089F2DA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F227C;
L_089F227C:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089F225C; }
    goto L_089F2284;
L_089F2284:;
    s2 = 1;
    goto L_089F2258;
}

/* 089F228C */
rv_t func_089F228C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F228C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-24);
    a0 = s0 + a0;
    { rv_t r_ = func_0885C8A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F22AC;
L_089F22AC:;
    v0 = LD32(s0);
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_0885EF04(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F22BC;
L_089F22BC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A03DFC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F22C4;
L_089F22C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F22D4 */
rv_t func_089F22D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089F22D4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2BCA8 - (-17240);
    t1 = D_08C2BCB8 - (-17224);
    t2 = D_08C2BCC8 - (-17208);
    a1 = a1 & a0;
    v1 = t0 - 17240;
    a2 = t1 - 17224;
    cnd_ = a1 == 0;
    a3 = t2 - 17208;
    if (cnd_) { goto L_089F238C; }
    goto L_089F2304;
L_089F2304:;
    v0 = D_08AEF3D0 - (-3120);
    f4 = BITSF(LD32(v0-3120));
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
    ST32(t0-17240, FBITS(f2));
    ST32(t1-17224, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-17208, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089F238C;
L_089F238C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2394 */
rv_t func_089F2394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2394:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F22D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F23A8;
L_089F23A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F23B4 */
void func_089F23B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F23B4:;
    sp = sp - 16;
    a2 = 999;
    s1 = a1 + 0;
    a3 = 1;
    a1 = a1 + 4;
    s0 = a0 + 0;
    func_089F30A0(a0, a1);
    goto L_089F23DC;
L_089F23DC:;
    v1 = LD32(s1);
    a1 = 1;
    ST32(s0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(s1+32);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(s1+36);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(s1+40);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(s1+44);
    v0 = LD32(v1-24);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    a0 = s0 + 0;
    { rv_t r_ = func_08864234(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2448;
L_089F2448:;
    sp = sp + 16;
    return;
}

/* 089F245C */
void func_089F245C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F245C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a0 + 160;
    s0 = D_08B0E578 - (-6792);
    s0 = s0 - 6792;
    s2 = s1 + 84;
    func_08873E94(a0, a1);
    goto L_089F2488;
L_089F2488:;
    a1 = s0 + 48;
    a0 = s2 + 0;
    a2 = (u32)-1;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089F2498;
L_089F2498:;
    a0 = s1 + 188;
    a1 = s0 + 56;
    a2 = 1;
    func_088657EC(a0, a1, 0, 0, 0);
    goto L_089F24A8;
L_089F24A8:;
    a0 = s1 + 196;
    a1 = s0 + 68;
    s0 = s0 + 4;
    func_08860360(a0, a1);
    goto L_089F24B8;
L_089F24B8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 999;
    a3 = 1;
    func_089F30A0(a0, a1);
    goto L_089F24CC;
L_089F24CC:;
    v0 = D_08B0E2A8 - (-7512);
    v0 = v0 - 7512;
    v1 = v0 + 680;
    a2 = v0 + 248;
    a3 = v0 + 452;
    t0 = v0 + 580;
    ST32(s1+196, v1);
    a0 = s2 + 0;
    a1 = 1;
    ST32(s1+84, a2);
    ST32(s1+160, a3);
    ST32(s1+188, t0);
    ST32(s1, v0);
    { rv_t r_ = func_08864234(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2504;
L_089F2504:;
    sp = sp + 16;
    return;
}

/* 089F251C */
rv_t func_089F251C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F251C:;
    sp = sp - 16;
    { rv_t r_ = func_089F3528(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F252C;
L_089F252C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2538 */
rv_t func_089F2538(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2538:;
    sp = sp - 16;
    { rv_t r_ = func_089F3508(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2548;
L_089F2548:;
    v0 = 0 < v0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2558 */
rv_t func_089F2558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2558:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F257C;
L_089F257C:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-24);
    a0 = s0 + a0;
    { rv_t r_ = func_08860770(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2590;
L_089F2590:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089F3544(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F259C;
L_089F259C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F25B0 */
rv_t func_089F25B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F25B0:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F25D4;
L_089F25D4:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-24);
    a0 = s0 + a0;
    { rv_t r_ = func_08860870(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F25E8;
L_089F25E8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089F359C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F25F4;
L_089F25F4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2608 */
rv_t func_089F2608(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F2608:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089F2628;
L_089F2628:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089F2628; }
    goto L_089F264C;
L_089F264C:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-24);
    a0 = s1 + a0;
    { rv_t r_ = func_08860A18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2660;
L_089F2660:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089F35F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F266C;
L_089F266C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2680 */
rv_t func_089F2680(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F2680:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2688 */
rv_t func_089F2688(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F2688:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2690 */
rv_t func_089F2690(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F2690:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2698 */
rv_t func_089F2698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2698:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-24);
    a0 = a0 + v1;
    { rv_t r_ = func_08860A78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F26B0;
L_089F26B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F26BC */
void func_089F26BC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F26BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 256;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F26E0;
L_089F26E0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_089F245C(a0, a1);
    goto L_089F26F0;
L_089F26F0:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F2714; }
    goto L_089F26FC;
L_089F26FC:;
    goto L_089F2700;
L_089F2700:;
    sp = sp + 16;
    return;
L_089F2714:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2724;
L_089F2724:;
    goto L_089F2700;
}

/* 089F272C */
rv_t func_089F272C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089F272C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2BCD8 - (-17192);
    t1 = D_08C2BCE8 - (-17176);
    t2 = D_08C2BCF8 - (-17160);
    a1 = a1 & a0;
    v1 = t0 - 17192;
    a2 = t1 - 17176;
    cnd_ = a1 == 0;
    a3 = t2 - 17160;
    if (cnd_) { goto L_089F27E4; }
    goto L_089F275C;
L_089F275C:;
    v0 = D_08AEF3DC - (-3108);
    f4 = BITSF(LD32(v0-3108));
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
    ST32(t0-17192, FBITS(f2));
    ST32(t1-17176, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-17160, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089F27E4;
L_089F27E4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F27EC */
rv_t func_089F27EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F27EC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F272C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2800;
L_089F2800:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F280C */
void func_089F280C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F280C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = D_08C2BD38 - (-17096);
    s2 = s3 - 17096;
    s1 = a0 + 0;
    func_08A03594(a0, a1);
    goto L_089F283C;
L_089F283C:;
    a1 = LD32(s0);
    a0 = 12;
    ST32(s1, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s0+16);
    v0 = s1 + v0;
    ST32(v0, v1);
    a1 = LD32(s1);
    a2 = LD32(s0+20);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    ST32(v0, a2);
    v1 = LD32(s1);
    a1 = LD32(s0+24);
    v0 = LD32(v1-20);
    v0 = s1 + v0;
    ST32(v0, a1);
    v1 = LD32(s1);
    a2 = LD32(s2+4);
    v0 = LD32(v1-16);
    v1 = 7;
    a2 = a2 - 1;
    v0 = s1 + v0;
    ST16(v0+8, v1);
    a1 = LD32(s1);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & a2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F28B4;
L_089F28B4:;
    a0 = LD32(s3-17096);
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

/* 089F28FC */
void func_089F28FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F28FC:;
    sp = sp - 32;
    s4 = a0 + 348;
    s0 = D_08B0F240 - (-3520);
    s0 = s0 - 3520;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2BD38 - (-17096);
    func_08873BF8(a0);
    goto L_089F2934;
L_089F2934:;
    a0 = s1 + 84;
    a1 = s0 + 28;
    func_0885D56C(a0, a1);
    goto L_089F2940;
L_089F2940:;
    a0 = s1 + 368;
    a1 = s0 + 52;
    s0 = s0 + 4;
    func_0885EE70(a0, a1);
    goto L_089F2950;
L_089F2950:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A03594(a0, a1);
    goto L_089F295C;
L_089F295C:;
    v1 = D_08B0F07C - (-3972);
    v1 = v1 - 3972;
    v0 = v1 + 268;
    ST32(s1+84, v0);
    a0 = v1 + 432;
    v0 = 7;
    ST32(s1+368, a0);
    s2 = s3 - 17096;
    a2 = v1 + 380;
    ST32(s1, v1);
    a0 = 12;
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+348, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F29B0;
L_089F29B0:;
    a0 = LD32(s3-17096);
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

/* 089F29FC */
void func_089F29FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F29FC:;
    sp = sp - 16;
    a3 = D_08C2BD38 - (-17096);
    s2 = a3 - 17096;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+16);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = LD32(a0);
    a1 = LD32(s1+20);
    v0 = LD32(a0-16);
    v0 = s0 + v0;
    ST32(v0, a1);
    v1 = LD32(s0);
    a0 = LD32(s1+24);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    a2 = LD32(s0);
    a0 = LD32(s2+4);
    a1 = LD32(a3-17096);
    v1 = LD32(a2-16);
    a0 = a0 - 1;
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    a2 = v0 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_089F2AB0; }
    goto L_089F2A94;
L_089F2A94:;
    v0 = LD32(a0);
    goto L_089F2A98;
L_089F2A98:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_089F2AD4; }
    goto L_089F2AA0;
L_089F2AA0:;
    t0 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089F2A98; }
    goto L_089F2AB0;
L_089F2AB0:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08A0394C(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089F2ABC;
L_089F2ABC:;
    sp = sp + 16;
    return;
L_089F2AD4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089F2AE4; }
    goto L_089F2ADC;
L_089F2ADC:;
    ST8(a0+8, v0);
    goto L_089F2AB0;
L_089F2AE4:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089F2B0C; }
    goto L_089F2AEC;
L_089F2AEC:;
    v0 = LD32(a0+4);
    ST32(t0+4, v0);
    goto L_089F2AF4;
L_089F2AF4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F2AFC;
L_089F2AFC:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089F2AB0;
L_089F2B0C:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_089F2AF4;
}

/* 089F2B1C */
rv_t func_089F2B1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F2B1C:;
    v0 = D_08B0F07C - (-3972);
    sp = sp - 32;
    v0 = v0 - 3972;
    a2 = v0 + 432;
    v1 = v0 + 268;
    s1 = a0 + 0;
    a0 = v0 + 380;
    ST32(s1+84, v1);
    a1 = s1 + 0;
    ST32(s1+368, a2);
    ST32(s1+348, a0);
    a0 = D_08C2BD38 - (-17096);
    a0 = a0 - 17096;
    ST32(s1, v0);
    s0 = D_08B0F240 - (-3520);
    s0 = s0 - 3520;
    s4 = s1 + 348;
    s3 = s1 + 84;
    func_08ACBDBC(a0, a1, t1, t2, t3);
    goto L_089F2B80;
L_089F2B80:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F2B8C;
L_089F2B8C:;
    a2 = LD32(s0+52);
    a3 = s0 + 52;
    s2 = s1 + 368;
    ST32(s1+368, a2);
    s0 = s0 + 28;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+368);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F2BD0;
L_089F2BD0:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F2BD8;
L_089F2BD8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2BF8 */
rv_t func_089F2BF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F2BF8:;
    v0 = D_08B0F07C - (-3972);
    sp = sp - 32;
    v0 = v0 - 3972;
    a2 = v0 + 432;
    v1 = v0 + 268;
    s1 = a0 + 0;
    a0 = v0 + 380;
    ST32(s1+84, v1);
    a1 = s1 + 0;
    ST32(s1+368, a2);
    ST32(s1+348, a0);
    a0 = D_08C2BD38 - (-17096);
    a0 = a0 - 17096;
    ST32(s1, v0);
    s0 = D_08B0F240 - (-3520);
    s0 = s0 - 3520;
    s4 = s1 + 348;
    s3 = s1 + 84;
    func_08ACBDBC(a0, a1, t1, t2, t3);
    goto L_089F2C5C;
L_089F2C5C:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F2C68;
L_089F2C68:;
    a2 = LD32(s0+52);
    a3 = s0 + 52;
    s2 = s1 + 368;
    ST32(s1+368, a2);
    s0 = s0 + 28;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+368);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F2CAC;
L_089F2CAC:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F2CB4;
L_089F2CB4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F2CBC;
L_089F2CBC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2CDC */
rv_t func_089F2CDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F2CDC:;
    v1 = LD32(a0+28);
    v0 = 3;
    v1 = v1 & 0x2;
    if (v1 != 0) v0 = 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F2CF0 */
rv_t func_089F2CF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2CF0:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2D10;
L_089F2D10:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089F28FC(a0);
    goto L_089F2D1C;
L_089F2D1C:;
    v1 = LD32(s2+24);
    v0 = LD32(v1+52);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089F2D54; }
    goto L_089F2D30;
L_089F2D30:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s1 = LD32(v0+4);
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089F2D8C; }
    goto L_089F2D44;
L_089F2D44:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    ST32(v0+4, 0);
    v1 = LD32(s0);
    goto L_089F2D54;
L_089F2D54:;
    a1 = s2 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2D64;
L_089F2D64:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E738(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2D74;
L_089F2D74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F2D8C:;
    func_08878768(a0, 0, 0, 0);
    goto L_089F2D94;
L_089F2D94:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F2D9C;
L_089F2D9C:;
    v1 = LD32(s0);
    goto L_089F2D44;
}

/* 089F2DA4 */
rv_t func_089F2DA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2DA4:;
    sp = sp - 16;
    v0 = 90;
    s1 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089F2E24; }
    goto L_089F2DCC;
L_089F2DCC:;
    v0 = LD32(a0);
    s2 = 0 + 0;
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_0885EEB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2DE0;
L_089F2DE0:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F2E0C; }
    goto L_089F2DEC;
L_089F2DEC:;
    s2 = 1;
    goto L_089F2DF0;
L_089F2DF0:;
    v0 = s2 + 0;
    goto L_089F2DF4;
L_089F2DF4:;
    goto L_089F2DF8;
L_089F2DF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F2E0C:;
    { rv_t r_ = func_08A03F38(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2E14;
L_089F2E14:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089F2DF4; }
    goto L_089F2E1C;
L_089F2E1C:;
    s2 = 1;
    goto L_089F2DF0;
L_089F2E24:;
    { rv_t r_ = func_08A03F38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2E2C;
L_089F2E2C:;
    goto L_089F2DF8;
}

/* 089F2E34 */
rv_t func_089F2E34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F2E34:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E2D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2E58;
L_089F2E58:;
    v1 = LD32(s0);
    a1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = v0 + 88;
    s1 = LD32(v0+8);
    cnd_ = s1 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F2E94; }
    goto L_089F2E78;
L_089F2E78:;
    v0 = D_08AEF3E0 - (-3104);
    f12 = BITSF(LD32(v0-3104));
    func_088EDF74(a0, a1, 0, 0, 0, f12);
    goto L_089F2E84;
L_089F2E84:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F2EC0; }
    goto L_089F2E90;
L_089F2E90:;
    v1 = LD32(s0);
    goto L_089F2E94;
L_089F2E94:;
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2EAC;
L_089F2EAC:;
    goto L_089F2EB0;
L_089F2EB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F2EC0:;
    v0 = func_088EDEC4(a0, 0, 0, 0);
    goto L_089F2EC8;
L_089F2EC8:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089F2E90; }
    goto L_089F2ED0;
L_089F2ED0:;
    v1 = LD32(s0);
    v0 = D_08B2858C - (-31348);
    f12 = BITSF(LD32(v0-31348));
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E674(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2EE8;
L_089F2EE8:;
    goto L_089F2EB0;
}

/* 089F2EF0 */
rv_t func_089F2EF0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F2EF0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F3014; }
    goto L_089F2F24;
L_089F2F24:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF3E4 - (-3100);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3100));
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
    t0 = D_08C2BD08 - (-17144);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BD18 - (-17128);
    a3 = D_08C2BD28 - (-17112);
    v1 = t0 - 17144;
    a1 = v0 - 17128;
    a2 = a3 - 17112;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BD38 - (-17096);
    s0 = s3 - 17096;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17128, FBITS(f5));
    v0 = 32;
    ST32(t0-17144, FBITS(f1));
    ST32(a3-17112, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F2FDC;
L_089F2FDC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17096, v0);
    if (cnd_) { goto L_089F3008; }
    goto L_089F2FEC;
L_089F2FEC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F2FF4;
L_089F2FF4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F2FF4; }
    goto L_089F3008;
L_089F3008:;
    v0 = s3 - 17096;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F3014;
L_089F3014:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F3038; }
    goto L_089F3028;
L_089F3028:;
    v0 = D_08C2BD38 - (-17096);
    a0 = LD32(v0-17096);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F3050; }
    goto L_089F3038;
L_089F3038:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F3050:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3058;
L_089F3058:;
    goto L_089F3038;
}

/* 089F3060 */
rv_t func_089F3060(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3060:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F2EF0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3074;
L_089F3074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3080 */
rv_t func_089F3080(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3080:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F2EF0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3094;
L_089F3094:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F30A0 */
void func_089F30A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F30A0:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = D_08C2BD78 - (-17032);
    s2 = s3 - 17032;
    s1 = a0 + 0;
    func_08A063EC(a0, a1);
    goto L_089F30D0;
L_089F30D0:;
    a1 = LD32(s0);
    a0 = 12;
    ST32(s1, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s0+16);
    v0 = s1 + v0;
    ST32(v0, v1);
    a1 = LD32(s1);
    a2 = LD32(s0+20);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    ST32(v0, a2);
    v1 = LD32(s1);
    a2 = LD32(s0+24);
    v0 = LD32(v1-20);
    v0 = s1 + v0;
    ST32(v0, a2);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3134;
L_089F3134:;
    a0 = LD32(s3-17032);
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

/* 089F317C */
void func_089F317C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F317C:;
    sp = sp - 32;
    s0 = D_08B0F958 - (-1704);
    s0 = s0 - 1704;
    s1 = a0 + 0;
    a0 = a0 + 160;
    s3 = D_08C2BD78 - (-17032);
    s2 = a2 & 0xff;
    func_08873E94(a0, a1);
    goto L_089F31B0;
L_089F31B0:;
    a0 = s1 + 84;
    a1 = s0 + 28;
    a2 = (u32)-1;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089F31C0;
L_089F31C0:;
    a2 = s2 + 0;
    a0 = s1 + 188;
    a1 = s0 + 36;
    s0 = s0 + 4;
    func_088657EC(a0, a1, 0, 0, 0);
    goto L_089F31D4;
L_089F31D4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A063EC(a0, a1);
    goto L_089F31E0;
L_089F31E0:;
    v0 = D_08B0F6E4 - (-2332);
    v0 = v0 - 2332;
    v1 = v0 + 248;
    a0 = v0 + 580;
    ST32(s1+84, v1);
    s2 = s3 - 17032;
    a2 = v0 + 452;
    ST32(s1+188, a0);
    a0 = 12;
    ST32(s1, v0);
    v1 = LD32(v0-16);
    a1 = LD32(s2+4);
    ST32(s1+160, a2);
    v1 = s1 + v1;
    a1 = a1 - 1;
    s0 = LD32(v1+4);
    s0 = s0 & a1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3228;
L_089F3228:;
    a0 = LD32(s3-17032);
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

/* 089F3270 */
void func_089F3270(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3270:;
    sp = sp - 16;
    a3 = D_08C2BD78 - (-17032);
    s2 = a3 - 17032;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+16);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = LD32(a0);
    a1 = LD32(s1+20);
    v0 = LD32(a0-16);
    v0 = s0 + v0;
    ST32(v0, a1);
    v1 = LD32(s0);
    a0 = LD32(s1+24);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    a2 = LD32(s0);
    a0 = LD32(s2+4);
    a1 = LD32(a3-17032);
    v1 = LD32(a2-16);
    a0 = a0 - 1;
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    a2 = v0 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_089F3324; }
    goto L_089F3308;
L_089F3308:;
    v0 = LD32(a0);
    goto L_089F330C;
L_089F330C:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_089F3348; }
    goto L_089F3314;
L_089F3314:;
    t0 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089F330C; }
    goto L_089F3324;
L_089F3324:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08A0652C(a0, a1, t2, t3);
    goto L_089F3330;
L_089F3330:;
    sp = sp + 16;
    return;
L_089F3348:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089F3358; }
    goto L_089F3350;
L_089F3350:;
    ST8(a0+8, v0);
    goto L_089F3324;
L_089F3358:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089F3380; }
    goto L_089F3360;
L_089F3360:;
    v0 = LD32(a0+4);
    ST32(t0+4, v0);
    goto L_089F3368;
L_089F3368:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3370;
L_089F3370:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089F3324;
L_089F3380:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_089F3368;
}

/* 089F3390 */
rv_t func_089F3390(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F3390:;
    v0 = D_08B0F6E4 - (-2332);
    sp = sp - 32;
    v0 = v0 - 2332;
    a2 = v0 + 580;
    v1 = v0 + 248;
    s1 = a0 + 0;
    a0 = v0 + 452;
    ST32(s1+84, v1);
    a1 = s1 + 0;
    ST32(s1+188, a2);
    ST32(s1+160, a0);
    a0 = D_08C2BD78 - (-17032);
    a0 = a0 - 17032;
    ST32(s1, v0);
    s0 = D_08B0F958 - (-1704);
    s0 = s0 - 1704;
    s4 = s1 + 160;
    s3 = s1 + 84;
    func_08ACC268(a0, a1, t1, t2, t3);
    goto L_089F33F4;
L_089F33F4:;
    s2 = s1 + 188;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089F3404;
L_089F3404:;
    a1 = s0 + 36;
    a0 = s2 + 0;
    s0 = s0 + 28;
    func_088658E8(a0, a1, 0);
    goto L_089F3414;
L_089F3414:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F3420;
L_089F3420:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3428;
L_089F3428:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3448 */
rv_t func_089F3448(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F3448:;
    v0 = D_08B0F6E4 - (-2332);
    sp = sp - 32;
    v0 = v0 - 2332;
    a2 = v0 + 580;
    v1 = v0 + 248;
    s1 = a0 + 0;
    a0 = v0 + 452;
    ST32(s1+84, v1);
    a1 = s1 + 0;
    ST32(s1+188, a2);
    ST32(s1+160, a0);
    a0 = D_08C2BD78 - (-17032);
    a0 = a0 - 17032;
    ST32(s1, v0);
    s0 = D_08B0F958 - (-1704);
    s0 = s0 - 1704;
    s4 = s1 + 160;
    s3 = s1 + 84;
    func_08ACC268(a0, a1, t1, t2, t3);
    goto L_089F34AC;
L_089F34AC:;
    s2 = s1 + 188;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089F34BC;
L_089F34BC:;
    a1 = s0 + 36;
    a0 = s2 + 0;
    s0 = s0 + 28;
    func_088658E8(a0, a1, 0);
    goto L_089F34CC;
L_089F34CC:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F34D8;
L_089F34D8:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F34E0;
L_089F34E0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F34E8;
L_089F34E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3508 */
rv_t func_089F3508(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3508:;
    sp = sp - 16;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3518;
L_089F3518:;
    v0 = 0 < v0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3528 */
rv_t func_089F3528(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3528:;
    sp = sp - 16;
    { rv_t r_ = func_08A06744(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3538;
L_089F3538:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3544 */
rv_t func_089F3544(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3544:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3568;
L_089F3568:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-20);
    a0 = s0 + a0;
    { rv_t r_ = func_08865AD4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F357C;
L_089F357C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3588;
L_089F3588:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F359C */
rv_t func_089F359C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F359C:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F35C0;
L_089F35C0:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-20);
    a0 = s0 + a0;
    { rv_t r_ = func_08865D0C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F35D4;
L_089F35D4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F35E0;
L_089F35E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F35F4 */
rv_t func_089F35F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F35F4:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089F3614;
L_089F3614:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089F3614; }
    goto L_089F3638;
L_089F3638:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-20);
    a0 = s1 + a0;
    { rv_t r_ = func_08865F90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F364C;
L_089F364C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07570(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3658;
L_089F3658:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F366C */
rv_t func_089F366C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F366C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3674 */
rv_t func_089F3674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F3674:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F367C */
rv_t func_089F367C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F367C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3684 */
void func_089F3684(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3684:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 196;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F36A8;
L_089F36A8:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    func_089F317C(a0, a1, a2);
    goto L_089F36BC;
L_089F36BC:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F36E0; }
    goto L_089F36C8;
L_089F36C8:;
    goto L_089F36CC;
L_089F36CC:;
    sp = sp + 16;
    return;
L_089F36E0:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F36F0;
L_089F36F0:;
    goto L_089F36CC;
}

/* 089F36F8 */
rv_t func_089F36F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F36F8:;
    sp = sp - 16;
    { rv_t r_ = func_08A07A5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3708;
L_089F3708:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3714 */
rv_t func_089F3714(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F3714:;
    sp = sp - 32;
    s5 = a1 + 0;
    s4 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v0 = func_08864AE0(a0);
    goto L_089F374C;
L_089F374C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s4); goto L_089F38A4; }
    goto L_089F3754;
L_089F3754:;
    t0 = LD32(s4);
    goto L_089F3758;
L_089F3758:;
    v0 = LD32(t0-12);
    v0 = s4 + v0;
    v1 = LD32(v0+16);
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089F3770; }
    goto L_089F376C;
L_089F376C:;
    a1 = LD32(v0+12);
    goto L_089F3770;
L_089F3770:;
    v0 = D_08B3071C - (1820);
    v1 = LD32(v0+1820);
    cnd_ = v1 == 0;
    t1 = v0 + 1820;
    if (cnd_) { goto L_089F37AC; }
    goto L_089F3780;
L_089F3780:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089F3788;
L_089F3788:;
    a0 = v0 + 40;
    a2 = v0 + 36;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089F37B8; }
    goto L_089F37A0;
L_089F37A0:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089F3788; }
    goto L_089F37AC;
L_089F37AC:;
    a0 = LD32(t1+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089F3890; }
    goto L_089F37B8;
L_089F37B8:;
    v0 = LD32(t0-12);
    a0 = 0 < a3;
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    v1 = 0 < v1;
    v1 = v1 & a0;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089F3808; }
    goto L_089F37D8;
L_089F37D8:;
    a0 = s4 + 0;
    goto L_089F37DC;
L_089F37DC:;
    a1 = s5 + 0;
    { rv_t r_ = func_08A06CF0(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F37E4;
L_089F37E4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F3808:;
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    s3 = LD32(a3+12);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3818;
L_089F3818:;
    s2 = v0 + 0;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3838;
L_089F3838:;
    v1 = LD32(s4);
    s1 = v0 + 0;
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BAA98(a0);
    goto L_089F3850;
L_089F3850:;
    v1 = LD32(s4);
    s0 = v0 + 0;
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3868;
L_089F3868:;
    t0 = v0 + 0;
    v0 = D_08AEF3F0 - (-3088);
    f12 = BITSF(LD32(v0-3088));
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s0 + 0;
    { rv_t r_ = func_088EDEFC(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3888;
L_089F3888:;
    a0 = s4 + 0;
    goto L_089F37DC;
L_089F3890:;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3898;
L_089F3898:;
    t0 = LD32(s4);
    a3 = v0 + 0;
    goto L_089F37B8;
L_089F38A4:;
    a0 = LD32(v0-16);
    a0 = s4 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F38B0;
L_089F38B0:;
    t0 = LD32(s4);
    goto L_089F3758;
}

/* 089F38B8 */
rv_t func_089F38B8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F38B8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F39DC; }
    goto L_089F38EC;
L_089F38EC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF3F4 - (-3084);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3084));
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
    t0 = D_08C2BD48 - (-17080);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BD58 - (-17064);
    a3 = D_08C2BD68 - (-17048);
    v1 = t0 - 17080;
    a1 = v0 - 17064;
    a2 = a3 - 17048;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BD78 - (-17032);
    s0 = s3 - 17032;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17064, FBITS(f5));
    v0 = 32;
    ST32(t0-17080, FBITS(f1));
    ST32(a3-17048, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F39A4;
L_089F39A4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17032, v0);
    if (cnd_) { goto L_089F39D0; }
    goto L_089F39B4;
L_089F39B4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F39BC;
L_089F39BC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F39BC; }
    goto L_089F39D0;
L_089F39D0:;
    v0 = s3 - 17032;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F39DC;
L_089F39DC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F3A00; }
    goto L_089F39F0;
L_089F39F0:;
    v0 = D_08C2BD78 - (-17032);
    a0 = LD32(v0-17032);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F3A18; }
    goto L_089F3A00;
L_089F3A00:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F3A18:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3A20;
L_089F3A20:;
    goto L_089F3A00;
}

/* 089F3A28 */
rv_t func_089F3A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3A28:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F38B8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3A3C;
L_089F3A3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3A48 */
rv_t func_089F3A48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3A48:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F38B8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3A5C;
L_089F3A5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3A68 */
u64 func_089F3A68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F3A68:;
    sp = sp - 32;
    s4 = a0 + 396;
    s0 = D_08B100E0 - (224);
    s0 = s0 + 224;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2BDB8 - (-16968);
    func_08873BF8(a0);
    goto L_089F3AA0;
L_089F3AA0:;
    a0 = s1 + 132;
    a1 = s0 + 24;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089F3AB0;
L_089F3AB0:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A03594(a0, a1);
    goto L_089F3ABC;
L_089F3ABC:;
    v1 = D_08B0FF50 - (-176);
    v1 = v1 - 176;
    v0 = v1 + 264;
    ST32(s1+132, v0);
    v0 = 999;
    a1 = (u32)-1;
    ST32(s1+92, v0);
    v0 = (u32)-32744;
    s2 = s3 - 16968;
    ST32(s1+100, a1);
    a2 = v1 + 376;
    a0 = 12;
    ST32(s1, v1);
    ST32(s1+88, a1);
    ST32(s1+96, a1);
    ST32(s1+84, 0);
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+396, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3B24;
L_089F3B24:;
    a0 = LD32(s3-16968);
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
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3B58;
L_089F3B58:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089F3B78 */
rv_t func_089F3B78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3B78:;
    v1 = D_08B0FF50 - (-176);
    v1 = v1 - 176;
    sp = sp - 16;
    v0 = v1 + 264;
    s1 = a0 + 0;
    a0 = v1 + 376;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+396, a0);
    a0 = D_08C2BDB8 - (-16968);
    a0 = a0 - 16968;
    ST32(s1+132, v0);
    func_08ACC420(a0, a1, t1, t2, t3);
    goto L_089F3BB8;
L_089F3BB8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3BC0;
L_089F3BC0:;
    v1 = LD32(s1+88);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089F3BE8; }
    goto L_089F3BD0;
L_089F3BD0:;
    { u64 r_ = func_0889D1BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3BD8;
L_089F3BD8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F3BE8; }
    goto L_089F3BE0;
L_089F3BE0:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3BE8;
L_089F3BE8:;
    s0 = D_08B100E0 - (224);
    s0 = s0 + 224;
    a0 = s1 + 0;
    a1 = s0 + 4;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F3C00;
L_089F3C00:;
    a1 = s0 + 0;
    a0 = s1 + 132;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F3C0C;
L_089F3C0C:;
    a0 = s1 + 396;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3C14;
L_089F3C14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3C28 */
rv_t func_089F3C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3C28:;
    v1 = D_08B0FF50 - (-176);
    v1 = v1 - 176;
    sp = sp - 16;
    v0 = v1 + 264;
    s1 = a0 + 0;
    a0 = v1 + 376;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+396, a0);
    a0 = D_08C2BDB8 - (-16968);
    a0 = a0 - 16968;
    ST32(s1+132, v0);
    func_08ACC420(a0, a1, t1, t2, t3);
    goto L_089F3C68;
L_089F3C68:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3C70;
L_089F3C70:;
    v1 = LD32(s1+88);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089F3C98; }
    goto L_089F3C80;
L_089F3C80:;
    { u64 r_ = func_0889D1BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3C88;
L_089F3C88:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F3C98; }
    goto L_089F3C90;
L_089F3C90:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3C98;
L_089F3C98:;
    s0 = D_08B100E0 - (224);
    s0 = s0 + 224;
    a0 = s1 + 0;
    a1 = s0 + 4;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F3CB0;
L_089F3CB0:;
    a1 = s0 + 0;
    a0 = s1 + 132;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F3CBC;
L_089F3CBC:;
    a0 = s1 + 396;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3CC4;
L_089F3CC4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3CCC;
L_089F3CCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F3CE0 */
u64 func_089F3CE0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3CE0:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089F3CFC;
L_089F3CFC:;
    v1 = v0 + 0;
    v0 = 0x5f010000u;
    v0 = v0 | 0x7962;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 1; goto L_089F3D4C; }
    goto L_089F3D10;
L_089F3D10:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x9ea80000u;
    if (cnd_) { goto L_089F3D70; }
    goto L_089F3D1C;
L_089F3D1C:;
    v0 = 0x349d0000u;
    v0 = v0 | 0x2e89;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 1; goto L_089F3D4C; }
    goto L_089F3D2C;
L_089F3D2C:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x3d7c0000u;
    if (cnd_) { goto L_089F3D58; }
    goto L_089F3D38;
L_089F3D38:;
    v0 = 0x2e1a0000u;
    v0 = v0 | 0x9870;
    goto L_089F3D40;
L_089F3D40:;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_089F3D4C; }
    goto L_089F3D48;
L_089F3D48:;
    v0 = 0 + 0;
    goto L_089F3D4C;
L_089F3D4C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089F3D58:;
    v0 = v0 | 0x732a;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 1; goto L_089F3D4C; }
    goto L_089F3D64;
L_089F3D64:;
    v0 = 0x4f710000u;
    v0 = v0 | 0x846;
    goto L_089F3D40;
L_089F3D70:;
    v0 = v0 | 0xd745;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 1; goto L_089F3D4C; }
    goto L_089F3D7C;
L_089F3D7C:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xec5b0000u; goto L_089F3D94; }
    goto L_089F3D88;
L_089F3D88:;
    v0 = 0x95310000u;
    v0 = v0 | 0x4c5b;
    goto L_089F3D40;
L_089F3D94:;
    v0 = v0 | 0x1ee4;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 1; goto L_089F3D4C; }
    goto L_089F3DA0;
L_089F3DA0:;
    v0 = 0xf1770000u;
    v0 = v0 | 0xdbc1;
    goto L_089F3D40;
}

/* 089F3DAC */
rv_t func_089F3DAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3DAC:;
    sp = sp - 16;
    v0 = 90;
    s2 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089F3DF4; }
    goto L_089F3DD4;
L_089F3DD4:;
    { rv_t r_ = func_08A03F38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3DDC;
L_089F3DDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F3DF4:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089F3DDC; }
    goto L_089F3E00;
L_089F3E00:;
    v1 = LD32(s1+96);
    v0 = LD32(a0+92);
    cnd_ = v0 == v1;
    if (cnd_) { f12 = BITSF(LD32(s0+8)); goto L_089F3E28; }
    goto L_089F3E10;
L_089F3E10:;
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { f12 = BITSF(LD32(s0+8)); goto L_089F3E28; }
    goto L_089F3E1C;
L_089F3E1C:;
    func_089F3E3C(a0);
    goto L_089F3E24;
L_089F3E24:;
    f12 = BITSF(LD32(s0+8));
    goto L_089F3E28;
L_089F3E28:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_089F84D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3E34;
L_089F3E34:;
    v0 = 1;
    goto L_089F3DDC;
}

/* 089F3E3C */
void func_089F3E3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F3E3C:;
    sp = sp - 16;
    v0 = D_08ADEA74 - (-5516);
    a1 = 1;
    s0 = a0 + 0;
    a0 = LD32(v0-5516);
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F3E60;
L_089F3E60:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3E80;
L_089F3E80:;
    a2 = v0 + 0;
    v0 = D_08AEF3F8 - (-3080);
    f12 = BITSF(LD32(v0-3080));
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3E98;
L_089F3E98:;
    sp = sp + 16;
    return;
}

/* 089F3EAC */
rv_t func_089F3EAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089F3EAC:;
    sp = sp - 112;
    a1 = 999;
    v0 = LD32(a0+92);
    cnd_ = v0 == a1;
    s1 = a0 + 0;
    if (cnd_) { goto L_089F3EF8; }
    goto L_089F3EE0;
L_089F3EE0:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+252);
    cnd_ = v0 == a1;
    v0 = D_08B285B4 - (-31308);
    if (cnd_) { goto L_089F3F04; }
    goto L_089F3EF8;
L_089F3EF8:;
    { rv_t r_ = func_08A03E78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3F00;
L_089F3F00:;
    v0 = D_08B285B4 - (-31308);
    goto L_089F3F04;
L_089F3F04:;
    f1 = BITSF(LD32(v0-31308));
    f0 = BITSF(LD32(s1+84));
    f3 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v0 = D_08C29328 - (-27864);
    if (cnd_) { goto L_089F4178; }
    goto L_089F3F24;
L_089F3F24:;
    a0 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a0 == v1;
    v0 = D_08B285A4 - (-31324);
    if (cnd_) { goto L_089F4178; }
    goto L_089F3F34;
L_089F3F34:;
    f1 = BITSF(LD32(v0-31324));
    fcc = FCMP(f1, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = f0 * f1; goto L_089F3F54; }
    goto L_089F3F48;
L_089F3F48:;
    v0 = D_08AEF3FC - (-3076);
    f1 = BITSF(LD32(v0-3076));
    f0 = f0 * f1;
    goto L_089F3F54;
L_089F3F54:;
    s2 = D_08AEF400 - (-3072);
    f2 = BITSF(LD32(s2-3072));
    f1 = f0 + f2;
    f0 = f1 + f2;
    fcc = FCMP(f3, f1, 12);
    cnd_ = fcc;
    f20 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_089F3F7C; }
    goto L_089F3F74;
L_089F3F74:;
    f0 = f1 - f2;
    f20 = BITSF(F2I(f0, 1));
    goto L_089F3F7C;
L_089F3F7C:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = D_08C29324 - (-27868);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3F98;
L_089F3F98:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v0 = LD_U8(s0-27868);
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_089F44EC; }
    goto L_089F3FB8;
L_089F3FB8:;
    v0 = D_08AEF404 - (-3068);
    f0 = BITSF(LD32(v0-3068));
    goto L_089F3FC0;
L_089F3FC0:;
    f0 = f2 - f0;
    a0 = sp + 0;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F3FD4;
L_089F3FD4:;
    f0 = BITSF(0);
    f2 = BITSF(LD32(sp+8));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = LD_U8(s0-27868);
    if (cnd_) { goto L_089F4178; }
    goto L_089F3FEC;
L_089F3FEC:;
    cnd_ = v0 == 0;
    v0 = D_08AEF410 - (-3056);
    if (cnd_) { goto L_089F44CC; }
    goto L_089F3FF4;
L_089F3FF4:;
    v0 = D_08AEF40C - (-3060);
    f0 = BITSF(LD32(v0-3060));
    v1 = D_08AEF3FC - (-3076);
    f1 = BITSF(LD32(v1-3076));
    f0 = f2 * f0;
    v0 = D_08AEF408 - (-3064);
    f14 = BITSF(LD32(v0-3064));
    f0 = f1 - f0;
    fcc = FCMP(f14, f0, 14);
    cnd_ = fcc;
    v0 = D_08AEF414 - (-3052);
    if (cnd_) { goto L_089F402C; }
    goto L_089F4024;
L_089F4024:;
    f14 = f0;
    v0 = D_08AEF414 - (-3052);
    goto L_089F402C;
L_089F402C:;
    f0 = BITSF(LD32(v0-3052));
    fcc = FCMP(f0, f14, 12);
    cnd_ = !fcc;
    v0 = D_08AEF418 - (-3048);
    if (cnd_) { goto L_089F4178; }
    goto L_089F4040;
L_089F4040:;
    f1 = BITSF(LD32(v0-3048));
    v0 = D_08AEF408 - (-3064);
    f0 = BITSF(LD32(v0-3064));
    f1 = f14 * f1;
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f3 = BITSF(LD32(v1-3076));
    if (cnd_) { goto L_089F407C; }
    goto L_089F4068;
L_089F4068:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = fcc;
    f2 = f3;
    if (cnd_) { goto L_089F407C; }
    goto L_089F4078;
L_089F4078:;
    f2 = f0;
    goto L_089F407C;
L_089F407C:;
    f1 = BITSF(LD32(v1-3076));
    v0 = D_08AEF41C - (-3044);
    f0 = BITSF(LD32(v0-3044));
    f2 = f1 - f2;
    ST32(sp+24, FBITS(f1));
    v1 = sp + 16;
    f3 = f2 * f0;
    f0 = BITSF(0);
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f3, 12);
    ST32(sp+20, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+28, FBITS(f2));
    if (cnd_) { goto L_089F44C0; }
    goto L_089F40B0;
L_089F40B0:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f3 + f0;
    goto L_089F40B8;
L_089F40B8:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v0-3044));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = a1 << 8;
    if (cnd_) { goto L_089F44B4; }
    goto L_089F40E0;
L_089F40E0:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f2 + f0;
    goto L_089F40E8;
L_089F40E8:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0-3044));
    a1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + a1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_089F44A8; }
    goto L_089F4114;
L_089F4114:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f1 + f0;
    goto L_089F411C;
L_089F411C:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0-3044));
    v0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_089F449C; }
    goto L_089F4148;
L_089F4148:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f1 + f0;
    goto L_089F4150;
L_089F4150:;
    f0 = BITSF(F2I(f0, 1));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a3 = FBITS(f20);
    a1 = FBITS(f0);
    a2 = D_08ADEA80 - (-5504);
    a2 = a2 - 5504;
    a0 = a0 + a1;
    a1 = 4101;
    { rv_t r_ = func_088CBD68(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4178;
L_089F4178:;
    a0 = s1 + 0;
    { u64 r_ = func_089F3CE0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4180;
L_089F4180:;
    cnd_ = v0 != 0;
    a1 = sp + 16;
    if (cnd_) { goto L_089F433C; }
    goto L_089F4188;
L_089F4188:;
    s0 = 0 + 0;
    goto L_089F418C;
L_089F418C:;
    s4 = (u32)-1;
    s5 = D_08B44C2C - (19500);
    goto L_089F4194;
L_089F4194:;
    cnd_ = s0 == 0;
    if (cnd_) { a1 = LD32(s1+96); goto L_089F41A0; }
    goto L_089F419C;
L_089F419C:;
    a1 = LD32(s1+100);
    goto L_089F41A0;
L_089F41A0:;
    cnd_ = a1 == s4;
    s2 = s1 + 112;
    if (cnd_) { goto L_089F42B8; }
    goto L_089F41A8;
L_089F41A8:;
    v0 = s1 + 108;
    if (s0 == 0) s2 = v0;
    v1 = D_08B2859C - (-31332);
    f2 = BITSF(LD32(v1-31332));
    f0 = BITSF(LD32(s2));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s2, FBITS(f0));
    if (cnd_) { goto L_089F42B8; }
    goto L_089F41D4;
L_089F41D4:;
    s3 = s1 + 105;
    v0 = s1 + 104;
    if (s0 == 0) s3 = v0;
    v1 = LD_U8(s3);
    cnd_ = v1 == 0;
    t2 = LD32(s5+19500);
    if (cnd_) { goto L_089F4304; }
    goto L_089F41EC;
L_089F41EC:;
    v0 = LD32(t2+12);
    cnd_ = a1 == v0;
    if (cnd_) { a0 = LD32(t2+8); goto L_089F4290; }
    goto L_089F41F8;
L_089F41F8:;
    a0 = LD32(t2);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F4238; }
    goto L_089F4204;
L_089F4204:;
    a2 = LD32(a0+8);
    goto L_089F4208;
L_089F4208:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089F4228; }
    goto L_089F4214;
L_089F4214:;
    v0 = LD32(t2+4);
    v0 = a2 + v0;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089F4238; }
    goto L_089F4228;
L_089F4228:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a2 = LD32(a0+8); goto L_089F4208; }
    goto L_089F4234;
L_089F4234:;
    v1 = 0 + 0;
    goto L_089F4238;
L_089F4238:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089F4290; }
    goto L_089F4240;
L_089F4240:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a3 = 0 + 0;
    t1 = LD32(a0+12);
    cnd_ = (s32)t1 <= 0;
    t0 = a1 - v0;
    if (cnd_) { goto L_089F4278; }
    goto L_089F4258;
L_089F4258:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_089F4260;
L_089F4260:;
    a3 = a3 + 1;
    a2 = (s32)a3 < (s32)t1;
    cnd_ = v0 == t0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089F42EC; }
    goto L_089F4270;
L_089F4270:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089F4260; }
    goto L_089F4278;
L_089F4278:;
    v0 = 0 + 0;
    goto L_089F427C;
L_089F427C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089F4290; }
    goto L_089F4284;
L_089F4284:;
    a0 = v0 + 0;
    ST32(t2+12, a1);
    ST32(t2+8, v0);
    goto L_089F4290;
L_089F4290:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089F42A4; }
    goto L_089F4298;
L_089F4298:;
    v0 = LD32(a0+24);
    v0 = v0 | 0x1;
    ST32(a0+24, v0);
    goto L_089F42A4;
L_089F42A4:;
    cnd_ = s0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+120)); goto L_089F42B0; }
    goto L_089F42AC;
L_089F42AC:;
    f0 = BITSF(LD32(s1+128));
    goto L_089F42B0;
L_089F42B0:;
    ST32(s2, FBITS(f0));
    ST8(s3, 0);
    goto L_089F42B8;
L_089F42B8:;
    s0 = s0 + 1;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089F4194; }
    goto L_089F42C8;
L_089F42C8:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089F42EC:;
    v1 = LD32(v1);
    v0 = t0 << 4;
    v0 = v0 - t0;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_089F427C;
L_089F4304:;
    a0 = LD32(s5+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F430C;
L_089F430C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089F4320; }
    goto L_089F4314;
L_089F4314:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v1+24, v0);
    goto L_089F4320;
L_089F4320:;
    cnd_ = s0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+116)); goto L_089F432C; }
    goto L_089F4328;
L_089F4328:;
    f0 = BITSF(LD32(s1+124));
    goto L_089F432C;
L_089F432C:;
    v0 = 1;
    ST32(s2, FBITS(f0));
    ST8(s3, v0);
    goto L_089F42B8;
L_089F433C:;
    a0 = s1 + 0;
    func_089F46E8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F4344;
L_089F4344:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4360;
L_089F4360:;
    v1 = D_08AEF420 - (-3040);
    f1 = BITSF(LD32(v1-3040));
    ST32(sp+32, 0);
    ST32(sp+36, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+40, 0);
    f0 = f0 + f1;
    a0 = LD32(s1+88);
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v0 = (u32)-1;
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    cnd_ = a0 == v0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_089F444C; }
    goto L_089F439C;
L_089F439C:;
    { u64 r_ = func_0889D1BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F43A4;
L_089F43A4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089F4188; }
    goto L_089F43AC;
L_089F43AC:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F43C8;
L_089F43C8:;
    s0 = v0 + 0;
    v0 = 255;
    f0 = BITSF(v0);
    v0 = D_08AEF428 - (-3032);
    a0 = D_08ADEA84 - (-5500);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-3032));
    a0 = a0 - 5500;
    f20 = f20 * f0;
    ST32(sp+56, FBITS(f20));
    ST32(sp+52, FBITS(f20));
    ST32(sp+48, FBITS(f20));
    ST32(sp+60, FBITS(f20));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4400;
L_089F4400:;
    a3 = v0 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = sp + 48;
    f12 = f20;
    { u64 r_ = func_0897B744(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4418;
L_089F4418:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(s2, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f0));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+16));
    ST32(s2+20, FBITS(f2));
    ST32(s2+16, FBITS(f0));
    ST32(s2+24, FBITS(f1));
    goto L_089F4188;
L_089F444C:;
    s0 = 0 + 0;
    { rv_t r_ = func_0889CE40(0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4454;
L_089F4454:;
    v1 = D_08AEF424 - (-3036);
    f0 = BITSF(LD32(v1-3036));
    a0 = LD32(v0+28);
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    ST32(v0, FBITS(f1));
    f1 = BITSF(LD32(sp+8));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+16));
    ST32(v0+20, FBITS(f2));
    ST32(v0+16, FBITS(f0));
    ST32(v0+24, FBITS(f1));
    ST32(s1+88, a0);
    goto L_089F418C;
L_089F449C:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f1 - f0;
    goto L_089F4150;
L_089F44A8:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f1 - f0;
    goto L_089F411C;
L_089F44B4:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f2 - f0;
    goto L_089F40E8;
L_089F44C0:;
    f0 = BITSF(LD32(s2-3072));
    f0 = f3 - f0;
    goto L_089F40B8;
L_089F44CC:;
    f0 = BITSF(LD32(v0-3056));
    f1 = f0 / f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v1 = D_08AEF3FC - (-3076);
    if (cnd_) { goto L_089F4024; }
    goto L_089F44E4;
L_089F44E4:;
    f0 = f1;
    goto L_089F4024;
L_089F44EC:;
    v0 = D_08AEF408 - (-3064);
    f0 = BITSF(LD32(v0-3064));
    goto L_089F3FC0;
}

/* 089F44F8 */
rv_t func_089F44F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F44F8:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+164);
    t_ = v0;
    s0 = a3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4514;
L_089F4514:;
    a0 = 1;
    v1 = 39;
    ST32(s0+8, v1);
    ST32(s0, v0);
    ST8(s0+4, a0);
    ST8(s0+7, 0);
    ST8(s0+6, 0);
    ST8(s0+5, a0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F4544 */
rv_t func_089F4544(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F4544:;
    sp = sp - 16;
    v0 = D_08C28F60 - (-28832);
    s0 = a0 + 0;
    v1 = LD32(v0-28832);
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = (u32)-256;
    if (cnd_) { goto L_089F4594; }
    goto L_089F4568;
L_089F4568:;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4578;
L_089F4578:;
    v1 = 4;
    a0 = s0 + 0;
    cnd_ = v0 == v1;
    a1 = (u32)-256;
    if (cnd_) { goto L_089F4594; }
    goto L_089F4588;
L_089F4588:;
    { rv_t r_ = func_089F4658(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4590;
L_089F4590:;
    a1 = v0 + 0;
    goto L_089F4594;
L_089F4594:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F45A8 */
rv_t func_089F45A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F45A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A049C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F45BC;
L_089F45BC:;
    a1 = 1;
    s0 = LD32(s0+40);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F45DC; }
    goto L_089F45CC;
L_089F45CC:;
    goto L_089F45D0;
L_089F45D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F45DC:;
    func_088BB4A4(a0, a1);
    goto L_089F45E4;
L_089F45E4:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F45F0;
L_089F45F0:;
    goto L_089F45D0;
}

/* 089F45F8 */
rv_t func_089F45F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F45F8:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    a1 = s1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08A042E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4618;
L_089F4618:;
    v0 = (u32)-1;
    v1 = LD32(s0+88);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089F4644; }
    goto L_089F4628;
L_089F4628:;
    { u64 r_ = func_0889D1BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4630;
L_089F4630:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089F4644; }
    goto L_089F4638;
L_089F4638:;
    v0 = LD32(v0+56);
    v0 = (v0 & ~(0x1u << 0)) | ((s1 & 0x1) << 0);
    ST32(v1+56, v0);
    goto L_089F4644;
L_089F4644:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F4658 */
rv_t func_089F4658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F4658:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    s1 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4678;
L_089F4678:;
    v1 = 4;
    cnd_ = v0 == v1;
    v0 = D_08C2C3E0 - (-15392);
    if (cnd_) { goto L_089F46E0; }
    goto L_089F4684;
L_089F4684:;
    s0 = LD32(v0-15392);
    cnd_ = s0 == 0;
    a1 = (u32)-256;
    if (cnd_) { goto L_089F46C8; }
    goto L_089F4690;
L_089F4690:;
    v0 = LD32(s0+24);
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_089F46C8; }
    goto L_089F469C;
L_089F469C:;
    v1 = LD32(s1);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F46AC;
L_089F46AC:;
    v1 = LD32(s0+24);
    a0 = 0xffff0000u;
    a1 = 0xff230000u;
    v1 = v1 ^ v0;
    a0 = a0 | 0x1a1a;
    a1 = a1 | 0x23ff;
    if (v1 != 0) a1 = a0;
    goto L_089F46C8;
L_089F46C8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F46E0:;
    a1 = (u32)-256;
    goto L_089F46C8;
}

/* 089F46E8 */
void func_089F46E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F46E8:;
    v0 = 255;
    sp = sp - 32;
    f0 = BITSF(v0);
    v0 = D_08AEF42C - (-3028);
    f1 = (float)(s32)FBITS(f0);
    s2 = a0 + 0;
    f0 = BITSF(LD32(v0-3028));
    f20 = f1 * f0;
    ST32(a1+8, FBITS(f20));
    ST32(a1+4, FBITS(f20));
    ST32(a1, FBITS(f20));
    ST32(a1+12, FBITS(f20));
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F473C;
L_089F473C:;
    v1 = 4;
    cnd_ = v0 == v1;
    v0 = D_08C2C3E0 - (-15392);
    if (cnd_) { goto L_089F4788; }
    goto L_089F4748;
L_089F4748:;
    s1 = LD32(v0-15392);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089F478C; }
    goto L_089F4754;
L_089F4754:;
    v0 = LD32(s1+24);
    cnd_ = v0 == v1;
    a0 = s2 + 0;
    if (cnd_) { goto L_089F478C; }
    goto L_089F4760;
L_089F4760:;
    v1 = LD32(s2);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4770;
L_089F4770:;
    v1 = LD32(s1+24);
    cnd_ = v1 == v0;
    ST32(s0+12, FBITS(f20));
    if (cnd_) { goto L_089F47A4; }
    goto L_089F477C;
L_089F477C:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    ST32(s0, FBITS(f20));
    goto L_089F4788;
L_089F4788:;
    goto L_089F478C;
L_089F478C:;
    sp = sp + 32;
    return;
L_089F47A4:;
    ST32(s0+8, FBITS(f20));
    ST32(s0+4, 0);
    ST32(s0, 0);
    goto L_089F4788;
}

/* 089F47B4 */
void func_089F47B4(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14, float f15, float f16)
{
L_089F47B4:;
    ST32(a0+128, FBITS(f15));
    ST32(a0+96, a1);
    ST32(a0+100, a2);
    ST32(a0+112, FBITS(f16));
    ST32(a0+116, FBITS(f12));
    ST32(a0+120, FBITS(f13));
    ST32(a0+124, FBITS(f14));
    ST8(a0+104, 0);
    ST8(a0+105, 0);
    ST32(a0+108, 0);
    return;
}

/* 089F47E0 */
rv_t func_089F47E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089F47E0:;
    sp = sp - 112;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089F4944; }
    goto L_089F4828;
L_089F4828:;
    a0 = 416;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4830;
L_089F4830:;
    s3 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_089F3A68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F483C;
L_089F483C:;
    cnd_ = s3 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_089F4C8C; }
    goto L_089F4844;
L_089F4844:;
    a0 = 0x8a940000u;
    goto L_089F4848;
L_089F4848:;
    a1 = 0xc72c0000u;
    a0 = a0 | 0xc9e9;
    a1 = a1 | 0xfd72;
    a2 = sp + 16;
    ST32(sp+16, 0);
    fp = (u32)-1;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4864;
L_089F4864:;
    v1 = D_08AEF434 - (-3020);
    f23 = BITSF(LD32(v1-3020));
    ST32(sp+24, fp);
    s4 = 0 + 0;
    a1 = 0xacbf0000u;
    goto L_089F4878;
L_089F4878:;
    cnd_ = s4 != 0;
    a1 = a1 | 0xf801;
    if (cnd_) { goto L_089F4888; }
    goto L_089F4880;
L_089F4880:;
    a1 = 0x8b00000u;
    a1 = a1 | 0xb02b;
    goto L_089F4888;
L_089F4888:;
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4894;
L_089F4894:;
    cnd_ = v0 != 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_089F4988; }
    goto L_089F489C;
L_089F489C:;
    s4 = s4 + 1;
    goto L_089F48A0;
L_089F48A0:;
    v0 = s4 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 0xacbf0000u; goto L_089F4878; }
    goto L_089F48AC;
L_089F48AC:;
    f12 = BITSF(0);
    a0 = LD32(sp+16);
    a1 = 0xcd20000u;
    a1 = a1 | 0x751d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F48C0;
L_089F48C0:;
    f12 = BITSF(0);
    a0 = LD32(sp+16);
    a1 = 0x7f150000u;
    a1 = a1 | 0x12eb;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F48D8;
L_089F48D8:;
    f12 = BITSF(0);
    a0 = LD32(sp+16);
    a1 = 0xb0e10000u;
    a1 = a1 | 0xbcf3;
    f22 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F48F0;
L_089F48F0:;
    f12 = BITSF(0);
    a0 = LD32(sp+16);
    a1 = 0x5cee0000u;
    a1 = a1 | 0xc5d5;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4908;
L_089F4908:;
    f12 = BITSF(0);
    a0 = LD32(sp+16);
    a1 = 0x51b70000u;
    a1 = a1 | 0x51af;
    f20 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4920;
L_089F4920:;
    a2 = LD32(sp+24);
    a0 = s3 + 0;
    a1 = fp + 0;
    f12 = f23;
    f13 = f22;
    f14 = f21;
    f15 = f20;
    f16 = f0;
    func_089F47B4(a0, a1, a2, f12, f13, f14, f15, f16);
    goto L_089F4944;
L_089F4944:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089F4988:;
    s6 = D_08B44C2C - (19500);
    a0 = s6 + 19500;
    { rv_t r_ = func_088EBDD0(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4994;
L_089F4994:;
    ST32(sp+20, v0);
    cnd_ = s4 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_089F4C80; }
    goto L_089F49A0;
L_089F49A0:;
    v0 = D_08ADEAA4 - (-5468);
    a1 = LD32(v0-5468);
    goto L_089F49A8;
L_089F49A8:;
    v0 = D_08AEF430 - (-3024);
    f12 = BITSF(LD32(v0-3024));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F49B4;
L_089F49B4:;
    f24 = f0;
    cnd_ = s4 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_089F4C74; }
    goto L_089F49C0;
L_089F49C0:;
    v0 = D_08ADEAA0 - (-5472);
    a1 = LD32(v0-5472);
    goto L_089F49C8;
L_089F49C8:;
    a2 = (u32)-256;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089F49D0;
L_089F49D0:;
    a0 = LD32(sp+16);
    a1 = 0x89990000u;
    a2 = 0x98b80000u;
    a1 = a1 | 0x667f;
    a2 = a2 | 0xdc8f;
    s0 = v0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F49EC;
L_089F49EC:;
    s7 = v0 + 0;
    v0 = s0 >> 24;
    f5 = BITSF(v0);
    v0 = s0 & 0xff;
    f2 = BITSF(v0);
    v0 = (s0 >> 8) & 0xff;
    s0 = (s0 >> 16) & 0xff;
    f4 = BITSF(s0);
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f2 = (float)(s32)FBITS(f4);
    f1 = (float)(s32)FBITS(f3);
    f3 = (float)(s32)FBITS(f5);
    f0 = f0 * f23;
    f2 = f2 * f23;
    f1 = f1 * f23;
    f3 = f3 * f23;
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = LD32(sp+20);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4A5C;
L_089F4A5C:;
    a0 = LD32(s6+19500);
    a1 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4A6C;
L_089F4A6C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089F4AF4; }
    goto L_089F4A74;
L_089F4A74:;
    v1 = LD32(v0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s1));
    if (cnd_) { goto L_089F4AD8; }
    goto L_089F4A84;
L_089F4A84:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F4AC8; }
    goto L_089F4A98;
L_089F4A98:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F4AC8; }
    goto L_089F4AB0;
L_089F4AB0:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s1+8)); goto L_089F4ADC; }
    goto L_089F4AC8;
L_089F4AC8:;
    a0 = s0 + 0;
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F4AD0;
L_089F4AD0:;
    v1 = LD32(s0+24);
    f2 = BITSF(LD32(s1));
    goto L_089F4AD8;
L_089F4AD8:;
    f1 = BITSF(LD32(s1+8));
    goto L_089F4ADC;
L_089F4ADC:;
    f0 = BITSF(LD32(s1+4));
    v0 = v1 | 0x4;
    ST32(s0+24, v0);
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_089F4AF4;
L_089F4AF4:;
    a0 = LD32(s6+19500);
    a1 = LD32(sp+20);
    f22 = BITSF(LD32(sp));
    f21 = BITSF(LD32(sp+4));
    f20 = BITSF(LD32(sp+8));
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4B0C;
L_089F4B0C:;
    cnd_ = v0 == 0;
    s2 = D_08B44C2C - (19500);
    if (cnd_) { goto L_089F4B20; }
    goto L_089F4B14;
L_089F4B14:;
    ST32(v0+44, FBITS(f20));
    ST32(v0+36, FBITS(f22));
    ST32(v0+40, FBITS(f21));
    goto L_089F4B20;
L_089F4B20:;
    a0 = LD32(s2+19500);
    a1 = LD32(sp+20);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4B2C;
L_089F4B2C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+28, FBITS(f24)); goto L_089F4B34; }
    goto L_089F4B34;
L_089F4B34:;
    a0 = s7 + 0;
    s0 = LD32(sp+20);
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4B40;
L_089F4B40:;
    a0 = LD32(s2+19500);
    a1 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4B50;
L_089F4B50:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+32, s1); goto L_089F4B58; }
    goto L_089F4B58;
L_089F4B58:;
    a0 = LD32(s2+19500);
    a1 = LD32(sp+20);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4B64;
L_089F4B64:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089F4B78; }
    goto L_089F4B6C;
L_089F4B6C:;
    v0 = LD32(v0+24);
    v0 = v0 | 0x20;
    ST32(v1+24, v0);
    goto L_089F4B78;
L_089F4B78:;
    a0 = LD32(s2+19500);
    a1 = LD32(sp+20);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4B84;
L_089F4B84:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089F4BA4; }
    goto L_089F4B8C;
L_089F4B8C:;
    v1 = LD32(v0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F4C64; }
    goto L_089F4B9C;
L_089F4B9C:;
    v0 = v1 | 0x80;
    ST32(s0+24, v0);
    goto L_089F4BA4;
L_089F4BA4:;
    a0 = LD32(s6+19500);
    a1 = LD32(sp+20);
    s1 = s6 + 19500;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4BB4;
L_089F4BB4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F4BCC; }
    goto L_089F4BBC;
L_089F4BBC:;
    v1 = 1;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(a0+24, v0);
    goto L_089F4BCC;
L_089F4BCC:;
    v0 = D_08B44C2C - (19500);
    a0 = LD32(v0+19500);
    a1 = LD32(sp+20);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4BDC;
L_089F4BDC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089F4BF0; }
    goto L_089F4BE4;
L_089F4BE4:;
    v0 = LD32(v0+24);
    v0 = v0 | 0x1;
    ST32(v1+24, v0);
    goto L_089F4BF0;
L_089F4BF0:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4BF8;
L_089F4BF8:;
    a1 = LD32(sp+20);
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = 1;
    v0 = func_0880ED38(a0, a1, a2);
    goto L_089F4C0C;
L_089F4C0C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s3); goto L_089F4C28; }
    goto L_089F4C14;
L_089F4C14:;
    cnd_ = s4 == 0;
    if (cnd_) { fp = LD32(sp+20); goto L_089F489C; }
    goto L_089F4C1C;
L_089F4C1C:;
    v0 = LD32(sp+20);
    ST32(sp+24, v0);
    goto L_089F489C;
L_089F4C28:;
    a1 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0-12);
    v0 = LD32(a1+12);
    a2 = s5 + 0;
    v1 = s3 + v1;
    a1 = LD32(v1+100);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4C4C;
L_089F4C4C:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089F4C14; }
    goto L_089F4C54;
L_089F4C54:;
    a1 = sp + 20;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4C5C;
L_089F4C5C:;
    s4 = s4 + 1;
    goto L_089F48A0;
L_089F4C64:;
    a0 = s0 + 0;
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F4C6C;
L_089F4C6C:;
    v1 = LD32(s0+24);
    goto L_089F4B9C;
L_089F4C74:;
    v0 = D_08ADEA98 - (-5480);
    a1 = LD32(v0-5480);
    goto L_089F49C8;
L_089F4C80:;
    v0 = D_08ADEA9C - (-5476);
    a1 = LD32(v0-5476);
    goto L_089F49A8;
L_089F4C8C:;
    a1 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4C9C;
L_089F4C9C:;
    a0 = 0x8a940000u;
    goto L_089F4848;
}

/* 089F4CA4 */
rv_t func_089F4CA4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F4CA4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F4DC8; }
    goto L_089F4CD8;
L_089F4CD8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF438 - (-3016);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3016));
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
    t0 = D_08C2BD88 - (-17016);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BD98 - (-17000);
    a3 = D_08C2BDA8 - (-16984);
    v1 = t0 - 17016;
    a1 = v0 - 17000;
    a2 = a3 - 16984;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BDB8 - (-16968);
    s0 = s3 - 16968;
    ST32(v1+8, FBITS(f5));
    a0 = 4;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17000, FBITS(f5));
    v0 = 1;
    ST32(t0-17016, FBITS(f1));
    ST32(a3-16984, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4D90;
L_089F4D90:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-16968, v0);
    if (cnd_) { goto L_089F4DBC; }
    goto L_089F4DA0;
L_089F4DA0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F4DA8;
L_089F4DA8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F4DA8; }
    goto L_089F4DBC;
L_089F4DBC:;
    v0 = s3 - 16968;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F4DC8;
L_089F4DC8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F4DEC; }
    goto L_089F4DDC;
L_089F4DDC:;
    v0 = D_08C2BDB8 - (-16968);
    a0 = LD32(v0-16968);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F4E04; }
    goto L_089F4DEC;
L_089F4DEC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F4E04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F4E0C;
L_089F4E0C:;
    goto L_089F4DEC;
}

/* 089F4E14 */
rv_t func_089F4E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F4E14:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F4CA4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4E28;
L_089F4E28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F4E34 */
rv_t func_089F4E34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F4E34:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F4CA4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4E48;
L_089F4E48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F4E54 */
void func_089F4E54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F4E54:;
    sp = sp - 32;
    s4 = a0 + 448;
    s0 = D_08B10628 - (1576);
    s0 = s0 + 1576;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2BE78 - (-16776);
    func_08873BF8(a0);
    goto L_089F4E8C;
L_089F4E8C:;
    a0 = s1 + 184;
    a1 = s0 + 44;
    func_0885D56C(a0, a1);
    goto L_089F4E98;
L_089F4E98:;
    a0 = s1 + 468;
    a1 = s0 + 68;
    s0 = s0 + 4;
    func_0885EF0C(a0, a1);
    goto L_089F4EA8;
L_089F4EA8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089FC154(a0, a1);
    goto L_089F4EB4;
L_089F4EB4:;
    v1 = D_08B10464 - (1124);
    v1 = v1 + 1124;
    v0 = v1 + 272;
    ST32(s1+184, v0);
    a0 = v1 + 436;
    v0 = 999;
    ST32(s1, v1);
    a2 = s1 + 272;
    a3 = v1 + 384;
    ST32(s1+468, a0);
    v1 = (u32)-32747;
    s2 = s3 - 16776;
    ST32(s1+168, v0);
    a0 = 12;
    ST32(s1+132, 0);
    ST32(s1+136, 0);
    ST32(s1+140, 0);
    ST8(s1+144, 0);
    ST32(s1+148, 0);
    ST32(s1+152, 0);
    ST32(s1+156, 0);
    ST32(s1+160, 0);
    ST32(s1+164, 0);
    ST32(s1+176, 0);
    ST32(s1+180, 0);
    v0 = LD32(a2+116);
    ST16(s4+8, v1);
    v0 = v0 | 0x40;
    ST32(a2+116, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+448, a3);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F4F4C;
L_089F4F4C:;
    a0 = LD32(s3-16776);
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

/* 089F4F98 */
rv_t func_089F4F98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F4F98:;
    v0 = D_08B10464 - (1124);
    sp = sp - 32;
    v0 = v0 + 1124;
    a2 = v0 + 436;
    v1 = v0 + 272;
    s1 = a0 + 0;
    a0 = v0 + 384;
    ST32(s1+184, v1);
    a1 = s1 + 0;
    ST32(s1+468, a2);
    ST32(s1+448, a0);
    a0 = D_08C2BE78 - (-16776);
    a0 = a0 - 16776;
    ST32(s1, v0);
    s0 = D_08B10628 - (1576);
    s0 = s0 + 1576;
    s4 = s1 + 448;
    s3 = s1 + 184;
    func_08ACC64C(a0, a1, t1, t2, t3);
    goto L_089F4FFC;
L_089F4FFC:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_089FC410(a0, a1);
    goto L_089F5008;
L_089F5008:;
    a2 = LD32(s0+68);
    a3 = s0 + 68;
    s2 = s1 + 468;
    ST32(s1+468, a2);
    s0 = s0 + 44;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+468);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F504C;
L_089F504C:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5054;
L_089F5054:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F5074 */
rv_t func_089F5074(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F5074:;
    v0 = D_08B10464 - (1124);
    sp = sp - 32;
    v0 = v0 + 1124;
    a2 = v0 + 436;
    v1 = v0 + 272;
    s1 = a0 + 0;
    a0 = v0 + 384;
    ST32(s1+184, v1);
    a1 = s1 + 0;
    ST32(s1+468, a2);
    ST32(s1+448, a0);
    a0 = D_08C2BE78 - (-16776);
    a0 = a0 - 16776;
    ST32(s1, v0);
    s0 = D_08B10628 - (1576);
    s0 = s0 + 1576;
    s4 = s1 + 448;
    s3 = s1 + 184;
    func_08ACC64C(a0, a1, t1, t2, t3);
    goto L_089F50D8;
L_089F50D8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_089FC410(a0, a1);
    goto L_089F50E4;
L_089F50E4:;
    a2 = LD32(s0+68);
    a3 = s0 + 68;
    s2 = s1 + 468;
    ST32(s1+468, a2);
    s0 = s0 + 44;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+468);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F5128;
L_089F5128:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5130;
L_089F5130:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5138;
L_089F5138:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F5158 */
rv_t func_089F5158(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F5158:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_089F5184; }
    goto L_089F5168;
L_089F5168:;
    a2 = LD_U16(a1+16);
    v0 = 0x8070;
    cnd_ = a2 == v0;
    t0 = 1;
    if (cnd_) { goto L_089F51C0; }
    goto L_089F5178;
L_089F5178:;
    v0 = 0x8071;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(a1+24); goto L_089F51A0; }
    goto L_089F5184;
L_089F5184:;
    a0 = a3 + 0;
    { rv_t r_ = func_089FC848(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F518C;
L_089F518C:;
    t0 = v0 + 0;
    goto L_089F5190;
L_089F5190:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F51A0:;
    a2 = LD32(a0+176);
    v1 = LD32(v0+4);
    a1 = LD32(v0);
    a2 = a2 | v1;
    ST32(a0+176, a2);
    { rv_t r_ = func_089F5D60(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F51B8;
L_089F51B8:;
    t0 = 1;
    goto L_089F5190;
L_089F51C0:;
    v0 = 2;
    ST32(a0+164, v0);
    goto L_089F5190;
}

/* 089F51CC */
rv_t func_089F51CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F51CC:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_089FCC10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F51E4;
L_089F51E4:;
    v0 = LD_U8(s0+144);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F53F0; }
    goto L_089F51F0;
L_089F51F0:;
    v1 = LD32(s0+164);
    goto L_089F51F4;
L_089F51F4:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_089F52C8; }
    goto L_089F5200;
L_089F5200:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_089F5284; }
    goto L_089F5208;
L_089F5208:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s0); goto L_089F5224; }
    goto L_089F5210;
L_089F5210:;
    goto L_089F5214;
L_089F5214:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F5224:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    a0 = LD32(v1-12);
    f2 = BITSF(LD32(s0+180));
    f3 = BITSF(0);
    a0 = s0 + a0;
    f1 = f1 * f2;
    v0 = a0 + 88;
    f0 = BITSF(LD32(v0+108));
    f0 = f0 - f1;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a0); goto L_089F5270; }
    goto L_089F525C;
L_089F525C:;
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { ST32(v0+108, FBITS(f0)); goto L_089F5210; }
    goto L_089F526C;
L_089F526C:;
    v1 = LD32(a0);
    goto L_089F5270;
L_089F5270:;
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F527C;
L_089F527C:;
    goto L_089F5214;
L_089F5284:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089F5214; }
    goto L_089F528C;
L_089F528C:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+132));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s0+132, FBITS(f0));
    if (cnd_) { goto L_089F5214; }
    goto L_089F52B0;
L_089F52B0:;
    a0 = s0 + 0;
    { u64 r_ = func_089F5400(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F52B8;
L_089F52B8:;
    v0 = D_08ADEAEC - (-5396);
    f0 = BITSF(LD32(v0-5396));
    ST32(s0+132, FBITS(f0));
    goto L_089F5210;
L_089F52C8:;
    a1 = LD32(s0+160);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F52D8;
L_089F52D8:;
    a2 = LD32(s0+168);
    s1 = v0 + 0;
    a0 = D_08C2A6C8 - (-22840);
    v0 = 999;
    v1 = a0 - 22840;
    cnd_ = a2 == v0;
    t1 = 0 + 0;
    if (cnd_) { goto L_089F5344; }
    goto L_089F52F4;
L_089F52F4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_089F5348; }
    goto L_089F5318;
L_089F5318:;
    a0 = LD32(a1);
    goto L_089F531C;
L_089F531C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F53D0; }
    goto L_089F5334;
L_089F5334:;
    a1 = LD32(a1+4);
    goto L_089F5338;
L_089F5338:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089F531C; }
    goto L_089F5340;
L_089F5340:;
    t1 = 0 + 0;
    goto L_089F5344;
L_089F5344:;
    v0 = s1 < 0x1u;
    goto L_089F5348;
L_089F5348:;
    v1 = t1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(t1); goto L_089F538C; }
    goto L_089F5358;
L_089F5358:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5374;
L_089F5374:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089F5210; }
    goto L_089F537C;
L_089F537C:;
    a1 = 1;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5384;
L_089F5384:;
    goto L_089F5214;
L_089F538C:;
    a1 = 0x5a30000u;
    a2 = sp + 0;
    a0 = LD32(v0-12);
    a3 = 0 + 0;
    t0 = 1;
    a0 = t1 + a0;
    v1 = LD32(a0);
    t1 = (u32)-1;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = a1 | 0xe701;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F53B8;
L_089F53B8:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F53C8;
L_089F53C8:;
    goto L_089F5214;
L_089F53D0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    t1 = a0 + 0;
    if (cnd_) { goto L_089F5334; }
    goto L_089F53DC;
L_089F53DC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089F5338; }
    goto L_089F53E8;
L_089F53E8:;
    v0 = s1 < 0x1u;
    goto L_089F5348;
L_089F53F0:;
    a0 = s0 + 0;
    f0 = func_089F5F60(a0);
    goto L_089F53F8;
L_089F53F8:;
    v1 = LD32(s0+164);
    goto L_089F51F4;
}

/* 089F5400 */
u64 func_089F5400(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F5400:;
    sp = sp - 16;
    v0 = 0xb7350000u;
    v0 = v0 | 0x25c;
    v1 = LD32(a0+84);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089F543C; }
    goto L_089F5420;
L_089F5420:;
    { u64 r_ = func_089F544C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5428;
L_089F5428:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F543C; }
    goto L_089F5434;
L_089F5434:;
    { u64 r_ = func_089F5AF8(a0, a1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F543C;
L_089F543C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089F544C */
u64 func_089F544C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F544C:;
    sp = sp - 48;
    a2 = D_08C2A6C8 - (-22840);
    v1 = a2 - 22840;
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
    if (cnd_) { goto L_089F54E8; }
    goto L_089F549C;
L_089F549C:;
    a2 = LD32(a2-22840);
    a3 = a1 + 0;
    goto L_089F54A4;
L_089F54A4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089F54D8; }
    goto L_089F54BC;
L_089F54BC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+8); goto L_089F54EC; }
    goto L_089F54CC;
L_089F54CC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089F54BC; }
    goto L_089F54D8;
L_089F54D8:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089F54A4; }
    goto L_089F54E8;
L_089F54E8:;
    a1 = LD32(sp+8);
    goto L_089F54EC;
L_089F54EC:;
    cnd_ = a1 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089F5550; }
    goto L_089F54F4;
L_089F54F4:;
    s1 = LD32(a1);
    goto L_089F54F8;
L_089F54F8:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5504;
L_089F5504:;
    v1 = 0x36220000u;
    cnd_ = s1 == 0;
    v1 = v1 | 0x332a;
    if (cnd_) { goto L_089F5540; }
    goto L_089F5510;
L_089F5510:;
    v0 = LD32(s0+84);
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == v1;
    a3 = v1 < v0;
    if (cnd_) { goto L_089F5614; }
    goto L_089F5528;
L_089F5528:;
    v1 = 0x2d0000u;
    cnd_ = a3 != 0;
    t0 = 0x8ee80000u;
    if (cnd_) { goto L_089F56CC; }
    goto L_089F5534;
L_089F5534:;
    v1 = v1 | 0xbece;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089F5614; }
    goto L_089F5540;
L_089F5540:;
    a1 = LD32(sp+8);
    goto L_089F5544;
L_089F5544:;
    cnd_ = a1 != 0;
    if (cnd_) { s1 = LD32(a1); goto L_089F54F8; }
    goto L_089F554C;
L_089F554C:;
    s1 = LD32(sp);
    goto L_089F5550;
L_089F5550:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F55D4; }
    goto L_089F5560;
L_089F5560:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F55D4; }
    goto L_089F556C;
L_089F556C:;
    v0 = LD32(s1);
    goto L_089F5570;
L_089F5570:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F55C4; }
    goto L_089F5584;
L_089F5584:;
    v0 = LD_U8(s0+8);
    goto L_089F5588;
L_089F5588:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F560C; }
    goto L_089F5590;
L_089F5590:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F55FC; }
    goto L_089F5598;
L_089F5598:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F55A0;
L_089F55A0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F55AC;
L_089F55AC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F55B8;
L_089F55B8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F5588; }
    goto L_089F55C0;
L_089F55C0:;
    v1 = LD32(s1+4);
    goto L_089F55C4;
L_089F55C4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F5570; }
    goto L_089F55D4;
L_089F55D4:;
    v0 = 0 + 0;
    goto L_089F55D8;
L_089F55D8:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089F55FC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F55A0;
L_089F560C:;
    s0 = LD32(s0+4);
    goto L_089F55B8;
L_089F5614:;
    { rv_t r_ = func_089F5A24(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F561C;
L_089F561C:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_089F5544; }
    goto L_089F5624;
L_089F5624:;
    s2 = LD32(sp);
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089F56AC; }
    goto L_089F5638;
L_089F5638:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F56AC; }
    goto L_089F5644;
L_089F5644:;
    v0 = LD32(s2);
    goto L_089F5648;
L_089F5648:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F569C; }
    goto L_089F565C;
L_089F565C:;
    v0 = LD_U8(s0+8);
    goto L_089F5660;
L_089F5660:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s0 + 0; goto L_089F56C4; }
    goto L_089F5668;
L_089F5668:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089F56B4; }
    goto L_089F5670;
L_089F5670:;
    v0 = LD32(s0+4);
    ST32(s3+4, v0);
    goto L_089F5678;
L_089F5678:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5684;
L_089F5684:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089F5690;
L_089F5690:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F5660; }
    goto L_089F5698;
L_089F5698:;
    v1 = LD32(s2+4);
    goto L_089F569C;
L_089F569C:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089F5648; }
    goto L_089F56AC;
L_089F56AC:;
    v0 = s1 + 0;
    goto L_089F55D8;
L_089F56B4:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F5678;
L_089F56C4:;
    s0 = LD32(s0+4);
    goto L_089F5690;
L_089F56CC:;
    t0 = t0 | 0xd26f;
    a0 = s0 + 0;
    cnd_ = v0 != t0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089F5540; }
    goto L_089F56DC;
L_089F56DC:;
    { u64 r_ = func_089F5944(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F56E4;
L_089F56E4:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_089F5544; }
    goto L_089F56EC;
L_089F56EC:;
    s2 = LD32(sp);
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089F56AC; }
    goto L_089F5700;
L_089F5700:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F56AC; }
    goto L_089F570C;
L_089F570C:;
    v0 = LD32(s2);
    goto L_089F5710;
L_089F5710:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F5764; }
    goto L_089F5724;
L_089F5724:;
    v0 = LD_U8(s0+8);
    goto L_089F5728;
L_089F5728:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s0 + 0; goto L_089F578C; }
    goto L_089F5730;
L_089F5730:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089F577C; }
    goto L_089F5738;
L_089F5738:;
    v0 = LD32(s0+4);
    ST32(s3+4, v0);
    goto L_089F5740;
L_089F5740:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F574C;
L_089F574C:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089F5758;
L_089F5758:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F5728; }
    goto L_089F5760;
L_089F5760:;
    v1 = LD32(s2+4);
    goto L_089F5764;
L_089F5764:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089F5710; }
    goto L_089F5774;
L_089F5774:;
    v0 = s1 + 0;
    goto L_089F55D8;
L_089F577C:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F5740;
L_089F578C:;
    s0 = LD32(s0+4);
    goto L_089F5758;
}

/* 089F5794 */
rv_t func_089F5794(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F5794:;
    sp = sp - 48;
    v1 = LD32(a1);
    s1 = a0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F57B8;
L_089F57B8:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F57D8;
L_089F57D8:;
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f1;
    f3 = f3 - f0;
    f6 = BITSF(LD32(s1+140));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    v0 = 1;
    fcc = FCMP(f0, f6, 14);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089F5844; }
    goto L_089F5840;
L_089F5840:;
    v0 = 0 + 0;
    goto L_089F5844;
L_089F5844:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 089F5858 */
rv_t func_089F5858(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F5858:;
    sp = sp - 16;
    a0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+112);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5878;
L_089F5878:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F588C; }
    goto L_089F5880;
L_089F5880:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089F58A0; }
    goto L_089F588C;
L_089F588C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F58A0:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F58B0;
L_089F58B0:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_089F591C; }
    goto L_089F58C4;
L_089F58C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089F5914; }
    goto L_089F58E8;
L_089F58E8:;
    a0 = LD32(a1);
    goto L_089F58EC;
L_089F58EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F5924; }
    goto L_089F5904;
L_089F5904:;
    a1 = LD32(a1+4);
    goto L_089F5908;
L_089F5908:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089F58EC; }
    goto L_089F5910;
L_089F5910:;
    a0 = 0 + 0;
    goto L_089F5914;
L_089F5914:;
    cnd_ = a0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089F588C; }
    goto L_089F591C;
L_089F591C:;
    v1 = 0 + 0;
    goto L_089F588C;
L_089F5924:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089F5908; }
    goto L_089F5930;
L_089F5930:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089F5908; }
    goto L_089F593C;
L_089F593C:;
    goto L_089F5914;
}

/* 089F5944 */
u64 func_089F5944(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F5944:;
    sp = sp - 32;
    v1 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089F59B0; }
    goto L_089F5968;
L_089F5968:;
    v0 = LD_U8(a1+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089F59B4; }
    goto L_089F5974;
L_089F5974:;
    v0 = LD_U8(a1+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F59B4; }
    goto L_089F5980;
L_089F5980:;
    a0 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(a0-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089F59B4; }
    goto L_089F59A4;
L_089F59A4:;
    v0 = LD_U8(a1+196);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+344); goto L_089F59CC; }
    goto L_089F59B0;
L_089F59B0:;
    goto L_089F59B4;
L_089F59B4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_089F59CC:;
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F59D4;
L_089F59D4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+348);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F59E8;
L_089F59E8:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = s1 + 0; goto L_089F5A00; }
    goto L_089F59F8;
L_089F59F8:;
    v1 = 0 + 0;
    goto L_089F59B0;
L_089F5A00:;
    a1 = s0 + 0;
    { rv_t r_ = func_089F5794(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5A08;
L_089F5A08:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_089F59B0; }
    goto L_089F5A10;
L_089F5A10:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089F5858(a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5A1C;
L_089F5A1C:;
    v1 = v0 + 0;
    goto L_089F59B0;
}

/* 089F5A24 */
rv_t func_089F5A24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F5A24:;
    sp = sp - 32;
    v1 = 0 + 0;
    s2 = a0 + 0;
    s1 = a2 & 0xff;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089F5A98; }
    goto L_089F5A50;
L_089F5A50:;
    v0 = LD_U8(a1+196);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089F5A9C; }
    goto L_089F5A5C;
L_089F5A5C:;
    v0 = LD_U8(a1+4);
    cnd_ = v0 == 0;
    s3 = LD32(a1+236);
    if (cnd_) { goto L_089F5A98; }
    goto L_089F5A68;
L_089F5A68:;
    v0 = LD_U8(a1+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F5A9C; }
    goto L_089F5A74;
L_089F5A74:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F5AB8; }
    goto L_089F5A98;
L_089F5A98:;
    goto L_089F5A9C;
L_089F5A9C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F5AB8:;
    { rv_t r_ = func_089F5858(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5AC0;
L_089F5AC0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F5A98; }
    goto L_089F5AC8;
L_089F5AC8:;
    cnd_ = s1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089F5AE8; }
    goto L_089F5AD0;
L_089F5AD0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089F5794(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5ADC;
L_089F5ADC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F5A98; }
    goto L_089F5AE4;
L_089F5AE4:;
    a0 = s3 + 0;
    goto L_089F5AE8;
L_089F5AE8:;
    a1 = 0 + 0;
    v0 = func_0898582C(a0, a1);
    goto L_089F5AF0;
L_089F5AF0:;
    v1 = v0 + 0;
    goto L_089F5A98;
}

/* 089F5AF8 */
u64 func_089F5AF8(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F5AF8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s1 = a0 + 0;
    a1 = 4;
    cnd_ = s0 == 0;
    a0 = 0x8072;
    if (cnd_) { goto L_089F5B94; }
    goto L_089F5B24;
L_089F5B24:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5B2C;
L_089F5B2C:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_089F5B94; }
    goto L_089F5B34;
L_089F5B34:;
    a3 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = a3 == 0;
    a2 = 1;
    if (cnd_) { goto L_089F5B94; }
    goto L_089F5B48;
L_089F5B48:;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a3, v1);
    a3 = LD32(s1);
    t0 = LD32(t1+28);
    v0 = LD32(a3-16);
    t0 = t0 | 0x1;
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(t1, v1);
    a3 = LD32(s1);
    v0 = LD32(a3-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(t1+28, t0);
    ST32(t1+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5B94;
L_089F5B94:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089F5BA8 */
float func_089F5BA8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F5BA8:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089F5BF4; }
    goto L_089F5BC8;
L_089F5BC8:;
    a2 = LD32(a0+84);
    v0 = 0x36220000u;
    v0 = v0 | 0x332a;
    cnd_ = a2 == v0;
    v0 = v0 < a2;
    if (cnd_) { goto L_089F5D1C; }
    goto L_089F5BDC;
L_089F5BDC:;
    cnd_ = v0 != 0;
    v0 = 0x8ee80000u;
    if (cnd_) { goto L_089F5C70; }
    goto L_089F5BE4;
L_089F5BE4:;
    v0 = 0x2d0000u;
    v0 = v0 | 0xbece;
    cnd_ = a2 == v0;
    v0 = 0x36220000u;
    if (cnd_) { goto L_089F5C10; }
    goto L_089F5BF4;
L_089F5BF4:;
    goto L_089F5BF8;
L_089F5BF8:;
    sp = sp + 32;
    return f0;
L_089F5C0C:;
    v0 = 0x36220000u;
    goto L_089F5C10;
L_089F5C10:;
    v0 = v0 | 0x332a;
    cnd_ = a2 == v0;
    a0 = LD32(s0+236);
    if (cnd_) { goto L_089F5C68; }
    goto L_089F5C1C;
L_089F5C1C:;
    f1 = BITSF(LD32(s1+148));
    goto L_089F5C20;
L_089F5C20:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEF444 - (-3004);
    if (cnd_) { goto L_089F5C5C; }
    goto L_089F5C34;
L_089F5C34:;
    f0 = BITSF(LD32(v0-3004));
    f0 = f1 + f0;
    goto L_089F5C3C;
L_089F5C3C:;
    f0 = BITSF(F2I(f0, 1));
    a1 = FBITS(f0);
    a2 = 0 + 0;
    func_08985954(a0, a1, a2);
    goto L_089F5C4C;
L_089F5C4C:;
    v0 = LD32(s1+176);
    goto L_089F5C50;
L_089F5C50:;
    v0 = v0 | 0x2;
    ST32(s1+176, v0);
    goto L_089F5BF4;
L_089F5C5C:;
    f0 = BITSF(LD32(v0-3004));
    f0 = f1 - f0;
    goto L_089F5C3C;
L_089F5C68:;
    f1 = BITSF(LD32(s1+152));
    goto L_089F5C20;
L_089F5C70:;
    v0 = v0 | 0xd26f;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_089F5BF8; }
    goto L_089F5C7C;
L_089F5C7C:;
    v1 = LD32(a1);
    v0 = LD32(v1+344);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5C8C;
L_089F5C8C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+348);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5CA0;
L_089F5CA0:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+176); goto L_089F5C50; }
    goto L_089F5CB0;
L_089F5CB0:;
    v1 = LD32(s0);
    v0 = LD32(v1+348);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5CC0;
L_089F5CC0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+344);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5CD4;
L_089F5CD4:;
    f1 = BITSF(LD32(s1+148));
    f0 = f0 + f1;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_089F5CEC; }
    goto L_089F5CEC;
L_089F5CEC:;
    v1 = LD32(s0);
    v0 = LD32(v1+348);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5CFC;
L_089F5CFC:;
    f1 = f0;
    fcc = FCMP(f20, f1, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_089F5D14; }
    goto L_089F5D10;
L_089F5D10:;
    f0 = f1;
    goto L_089F5D14;
L_089F5D14:;
    ST32(s0+160, FBITS(f0));
    goto L_089F5C4C;
L_089F5D1C:;
    a2 = 1;
    { rv_t r_ = func_089F5A24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5D24;
L_089F5D24:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F5BF8; }
    goto L_089F5D2C;
L_089F5D2C:;
    a2 = LD32(s1+84);
    goto L_089F5C0C;
}

/* 089F5D34 */
rv_t func_089F5D34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F5D34:;
    sp = sp - 16;
    v1 = 1;
    a1 = LD32(a0+164);
    cnd_ = a1 == v1;
    if (cnd_) { goto L_089F5D58; }
    goto L_089F5D4C;
L_089F5D4C:;
    { rv_t r_ = func_08A03E78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5D54;
L_089F5D54:;
    goto L_089F5D58;
L_089F5D58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F5D60 */
rv_t func_089F5D60(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089F5D60:;
    sp = sp - 112;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    s2 = a0 + 0;
    s0 = a1 + 0;
    f0 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    v1 = LD32(a0+84);
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v0 = 0x36220000u;
    v0 = v0 | 0x332a;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    cnd_ = v1 == v0;
    ST32(sp+32, FBITS(f8));
    if (cnd_) { goto L_089F5EEC; }
    goto L_089F5DE0;
L_089F5DE0:;
    a0 = D_08C2A6C8 - (-22840);
    goto L_089F5DE4;
L_089F5DE4:;
    a0 = a0 - 22840;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5DF4;
L_089F5DF4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089F5EC8; }
    goto L_089F5DFC;
L_089F5DFC:;
    v0 = 1;
    ST32(s2+168, s0);
    s3 = sp + 48;
    a0 = LD32(s2+156);
    ST32(s2+164, v0);
    { rv_t r_ = func_088EA064(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5E14;
L_089F5E14:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a1 = 0x5a30000u;
    a1 = a1 | 0xe701;
    a0 = LD32(v0-12);
    a2 = s3 + 0;
    a3 = 0 + 0;
    a0 = s1 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5E48;
L_089F5E48:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+172); goto L_089F5E60; }
    goto L_089F5E50;
L_089F5E50:;
    a2 = LD32(s2+156);
    cnd_ = a2 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089F5EB0; }
    goto L_089F5E5C;
L_089F5E5C:;
    a0 = LD32(s2+172);
    goto L_089F5E60;
L_089F5E60:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F5E80; }
    goto L_089F5E68;
L_089F5E68:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089F5E80:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5E88;
L_089F5E88:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089F5E68; }
    goto L_089F5E90;
L_089F5E90:;
    a0 = v0 + 0;
    v0 = D_08AEF448 - (-3000);
    f12 = BITSF(LD32(v0-3000));
    a2 = s3 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5EA8;
L_089F5EA8:;
    goto L_089F5E68;
L_089F5EB0:;
    a1 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5EC0;
L_089F5EC0:;
    ST32(s2+160, v0);
    goto L_089F5E5C;
L_089F5EC8:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5EE4;
L_089F5EE4:;
    goto L_089F5E68;
L_089F5EEC:;
    a1 = 0xb7350000u;
    v0 = 1;
    ST32(sp+64, 0);
    cnd_ = a2 == v0;
    a1 = a1 | 0x25c;
    if (cnd_) { goto L_089F5F14; }
    goto L_089F5F00;
L_089F5F00:;
    v0 = 2;
    cnd_ = a2 != v0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_089F5DE4; }
    goto L_089F5F0C;
L_089F5F0C:;
    a1 = 0x2d0000u;
    a1 = a1 | 0xbece;
    goto L_089F5F14;
L_089F5F14:;
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    a2 = sp + 64;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5F24;
L_089F5F24:;
    a0 = LD32(sp+64);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08C2A6C8 - (-22840); goto L_089F5DE4; }
    goto L_089F5F30;
L_089F5F30:;
    a1 = 0xbfba0000u;
    a1 = a1 | 0xf153;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5F40;
L_089F5F40:;
    ST32(s2+156, v0);
    a1 = 0x7c880000u;
    a1 = a1 | 0x3e56;
    a0 = LD32(sp+64);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5F58;
L_089F5F58:;
    ST32(s2+172, v0);
    goto L_089F5DE0;
}

/* 089F5F60 */
float func_089F5F60(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F5F60:;
    sp = sp - 48;
    s0 = a0 + 0;
    a2 = sp + 0;
    f20 = BITSF(0);
    a1 = LD32(a0+84);
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F5F94;
L_089F5F94:;
    a1 = 0x21b20000u;
    v0 = LD32(sp);
    a1 = a1 | 0x7cf9;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F5FC0; }
    goto L_089F5FA8;
L_089F5FA8:;
    sp = sp + 48;
    return f0;
L_089F5FC0:;
    v0 = D_08AEF44C - (-2996);
    f12 = BITSF(LD32(v0-2996));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5FCC;
L_089F5FCC:;
    f1 = f0 * f0;
    v0 = D_08AEF450 - (-2992);
    f21 = BITSF(LD32(v0-2992));
    a1 = 0xe7d70000u;
    ST32(s0+140, FBITS(f1));
    a1 = a1 | 0x4cbf;
    f12 = f21;
    a0 = LD32(sp);
    ST32(s0+136, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F5FF4;
L_089F5FF4:;
    ST32(s0+132, FBITS(f0));
    a1 = 0xab3a0000u;
    a1 = a1 | 0xd22e;
    a0 = LD32(sp);
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F600C;
L_089F600C:;
    ST32(s0+152, FBITS(f0));
    a1 = 0xfbf50000u;
    f12 = f20;
    a0 = LD32(sp);
    a1 = a1 | 0x14ba;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6024;
L_089F6024:;
    ST32(s0+148, FBITS(f0));
    a1 = 0xbfba0000u;
    a1 = a1 | 0xf153;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F603C;
L_089F603C:;
    ST32(s0+156, v0);
    a1 = 0x7c880000u;
    a1 = a1 | 0x3e56;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6054;
L_089F6054:;
    ST32(s0+172, v0);
    a1 = 0x1f5e0000u;
    f12 = f20;
    a0 = LD32(sp);
    a1 = a1 | 0x8b49;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F606C;
L_089F606C:;
    fcc = FCMP(f20, f0, 12);
    v0 = 1;
    f12 = f20;
    ST8(s0+144, v0);
    cnd_ = !fcc;
    ST32(s0+180, FBITS(f0));
    if (cnd_) { goto L_089F6088; }
    goto L_089F6084;
L_089F6084:;
    f12 = f21 / f0;
    goto L_089F6088;
L_089F6088:;
    ST32(s0+180, FBITS(f12));
    goto L_089F5FA8;
}

/* 089F6090 */
rv_t func_089F6090(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F6090:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 472;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089F60FC; }
    goto L_089F60AC;
L_089F60AC:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F60B4;
L_089F60B4:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089F4E54(a0);
    goto L_089F60C0;
L_089F60C0:;
    v0 = LD32(s1+24);
    a1 = v0 + 16;
    a3 = v0 + 68;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089F60E8; }
    goto L_089F60D4;
L_089F60D4:;
    v0 = LD32(s0);
    f12 = BITSF(LD32(s1+8));
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_08875FB8(a0, a1, a2, a3, f12);
    goto L_089F60E8;
L_089F60E8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F60FC;
L_089F60FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F6110 */
rv_t func_089F6110(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F6110:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F6234; }
    goto L_089F6144;
L_089F6144:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF454 - (-2988);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2988));
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
    t0 = D_08C2BDC8 - (-16952);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BDD8 - (-16936);
    a3 = D_08C2BDE8 - (-16920);
    v1 = t0 - 16952;
    a1 = v0 - 16936;
    a2 = a3 - 16920;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BE78 - (-16776);
    s0 = s3 - 16776;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-16936, FBITS(f5));
    v0 = 32;
    ST32(t0-16952, FBITS(f1));
    ST32(a3-16920, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F61FC;
L_089F61FC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-16776, v0);
    if (cnd_) { goto L_089F6228; }
    goto L_089F620C;
L_089F620C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F6214;
L_089F6214:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F6214; }
    goto L_089F6228;
L_089F6228:;
    v0 = s3 - 16776;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F6234;
L_089F6234:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F6258; }
    goto L_089F6248;
L_089F6248:;
    v0 = D_08C2BE78 - (-16776);
    a0 = LD32(v0-16776);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F6270; }
    goto L_089F6258;
L_089F6258:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F6270:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6278;
L_089F6278:;
    goto L_089F6258;
}

/* 089F6280 */
rv_t func_089F6280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F6280:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F6110(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6294;
L_089F6294:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F62A0 */
rv_t func_089F62A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F62A0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F6110(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F62B4;
L_089F62B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F62C0 */
void func_089F62C0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F62C0:;
    sp = sp - 32;
    s5 = a0 + 0;
    s2 = a0 + 196;
    a0 = s2 + 0;
    s0 = D_08B10EC0 - (3776);
    s0 = s0 + 3776;
    s6 = a1 + 0;
    a1 = a3 + 0;
    s4 = s5 + 120;
    s3 = D_08C2BF38 - (-16584);
    s1 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_089F6310;
L_089F6310:;
    a1 = s0 + 24;
    a2 = (u32)-1;
    a0 = s4 + 0;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089F6324;
L_089F6324:;
    a1 = s0 + 0;
    a0 = s5 + 0;
    func_08A063EC(a0, a1);
    goto L_089F6330;
L_089F6330:;
    v1 = D_08B10CB0 - (3248);
    v1 = v1 + 3248;
    v0 = v1 + 248;
    ST32(s5+120, v0);
    v0 = 999;
    a3 = D_08B45A9C - (23196);
    ST32(s5+96, v0);
    v0 = 1;
    a1 = a3 + 23196;
    ST32(s5+88, s1);
    a2 = s5 + 104;
    s1 = s3 - 16584;
    ST8(s5+100, v0);
    v0 = (u32)-32744;
    t0 = v1 + 452;
    ST32(s5, v1);
    a0 = 12;
    ST32(s5+84, 0);
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a3+23196));
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST8(s5+116, 0);
    ST16(s2+8, v0);
    a1 = LD32(s5);
    v1 = LD32(s1+4);
    ST32(s5+196, t0);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    ST32(s5+104, FBITS(f2));
    v0 = s5 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F63BC;
L_089F63BC:;
    v1 = LD32(s1+12);
    a0 = LD32(s3-16584);
    s0 = s0 << 2;
    v1 = v1 + 1;
    s0 = s0 + a0;
    ST32(s1+12, v1);
    a0 = s5 + 0;
    a1 = 3;
    v1 = LD32(s0);
    a2 = LD32(s2+4);
    ST32(v0, s5);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    func_089F80A0(a1, a2, 0, 0, 0);
    goto L_089F63F8;
L_089F63F8:;
    s0 = LD32(s4+4);
    a1 = 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F643C; }
    goto L_089F6408;
L_089F6408:;
    v0 = 2;
    goto L_089F640C;
L_089F640C:;
    ST32(s5+12, s6);
    ST32(s5+92, v0);
    sp = sp + 32;
    return;
L_089F643C:;
    func_088BB4A4(a0, a1);
    goto L_089F6444;
L_089F6444:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6450;
L_089F6450:;
    v0 = 2;
    goto L_089F640C;
}

/* 089F6458 */
rv_t func_089F6458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F6458:;
    v1 = D_08B10CB0 - (3248);
    sp = sp - 32;
    v1 = v1 + 3248;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+196, a0);
    a0 = D_08C2BF38 - (-16584);
    a0 = a0 - 16584;
    ST32(s1+120, v0);
    s0 = D_08B10EC0 - (3776);
    s0 = s0 + 3776;
    s3 = s1 + 196;
    func_08ACC80C(a0, a1, t1, t2, t3);
    goto L_089F64AC;
L_089F64AC:;
    s2 = s1 + 120;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089F64C0;
L_089F64C0:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F64CC;
L_089F64CC:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F64D4;
L_089F64D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F64F0 */
rv_t func_089F64F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F64F0:;
    v1 = D_08B10CB0 - (3248);
    sp = sp - 32;
    v1 = v1 + 3248;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+196, a0);
    a0 = D_08C2BF38 - (-16584);
    a0 = a0 - 16584;
    ST32(s1+120, v0);
    s0 = D_08B10EC0 - (3776);
    s0 = s0 + 3776;
    s3 = s1 + 196;
    func_08ACC80C(a0, a1, t1, t2, t3);
    goto L_089F6544;
L_089F6544:;
    s2 = s1 + 120;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089F6558;
L_089F6558:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F6564;
L_089F6564:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F656C;
L_089F656C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6574;
L_089F6574:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F6590 */
u64 func_089F6590(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089F6590:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089F65AC; }
    goto L_089F65A8;
L_089F65A8:;
    v1 = LD32(a0+12);
    goto L_089F65AC;
L_089F65AC:;
    v0 = 0x5f010000u;
    v0 = v0 | 0x7962;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089F65FC; }
    goto L_089F65BC;
L_089F65BC:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x9ea80000u;
    if (cnd_) { goto L_089F661C; }
    goto L_089F65C8;
L_089F65C8:;
    v0 = 0x349d0000u;
    v0 = v0 | 0x2e89;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089F65FC; }
    goto L_089F65D8;
L_089F65D8:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x3d7c0000u;
    if (cnd_) { goto L_089F6604; }
    goto L_089F65E4;
L_089F65E4:;
    v0 = 0x2e1a0000u;
    v0 = v0 | 0x9870;
    goto L_089F65EC;
L_089F65EC:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089F65FC; }
    goto L_089F65F4;
L_089F65F4:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_089F65FC:;
    v0 = 1;
    return (u64)v0 | ((u64)v1 << 32);
L_089F6604:;
    v0 = v0 | 0x732a;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089F65FC; }
    goto L_089F6610;
L_089F6610:;
    v0 = 0x4f710000u;
    v0 = v0 | 0x846;
    goto L_089F65EC;
L_089F661C:;
    v0 = v0 | 0xd745;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089F65FC; }
    goto L_089F6628;
L_089F6628:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xec5b0000u; goto L_089F6640; }
    goto L_089F6634;
L_089F6634:;
    v0 = 0x95310000u;
    v0 = v0 | 0x4c5b;
    goto L_089F65EC;
L_089F6640:;
    v0 = v0 | 0x1ee4;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089F65FC; }
    goto L_089F664C;
L_089F664C:;
    v0 = 0xf1770000u;
    v0 = v0 | 0xdbc1;
    goto L_089F65EC;
}

/* 089F6658 */
rv_t func_089F6658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089F6658:;
    sp = sp - 128;
    f2 = BITSF(0);
    f1 = BITSF(LD32(a0+84));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    s3 = a0 + 0;
    if (cnd_) { goto L_089F66B4; }
    goto L_089F669C;
L_089F669C:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a0); goto L_089F7074; }
    goto L_089F66B4;
L_089F66B4:;
    a3 = LD32(s3+96);
    goto L_089F66B8;
L_089F66B8:;
    v0 = 999;
    cnd_ = a3 == v0;
    s6 = D_08C29324 - (-27868);
    if (cnd_) { goto L_089F6D6C; }
    goto L_089F66C4;
L_089F66C4:;
    v0 = LD_U8(s6-27868);
    cnd_ = v0 == 0;
    a0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089F6CF4; }
    goto L_089F66D0;
L_089F66D0:;
    a0 = D_08C2AA98 - (-21864);
    v1 = a0 - 21864;
    v0 = LD32(v1+4);
    a1 = LD32(a0-21864);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089F6728; }
    goto L_089F66FC;
L_089F66FC:;
    a0 = LD32(a2);
    goto L_089F6700;
L_089F6700:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F6CD4; }
    goto L_089F6718;
L_089F6718:;
    a2 = LD32(a2+4);
    goto L_089F671C;
L_089F671C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089F6700; }
    goto L_089F6724;
L_089F6724:;
    a1 = 0 + 0;
    goto L_089F6728;
L_089F6728:;
    cnd_ = a1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089F6C60; }
    goto L_089F6730;
L_089F6730:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v1 = 999;
    v0 = s3 + v0;
    a0 = LD32(v0+48);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a1); goto L_089F6C70; }
    goto L_089F674C;
L_089F674C:;
    a0 = s3 + 0;
    goto L_089F6750;
L_089F6750:;
    a1 = s0 + 0;
    v0 = func_089F7D9C(a0, a1);
    goto L_089F6758;
L_089F6758:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F6C60; }
    goto L_089F6760;
L_089F6760:;
    v0 = LD_U8(s6-27868);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+96); goto L_089F6780; }
    goto L_089F676C;
L_089F676C:;
    v0 = LD32(s0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F6C40; }
    goto L_089F677C;
L_089F677C:;
    v0 = LD32(s3+96);
    goto L_089F6780;
L_089F6780:;
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_089F67C4; }
    goto L_089F678C;
L_089F678C:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A06744(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6794;
L_089F6794:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089F67C4:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s3 + 104;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F67DC;
L_089F67DC:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s3+104));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s3); goto L_089F6828; }
    goto L_089F67F4;
L_089F67F4:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s3); goto L_089F6828; }
    goto L_089F680C;
L_089F680C:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s3+116); goto L_089F6864; }
    goto L_089F6824;
L_089F6824:;
    v0 = LD32(s3);
    goto L_089F6828;
L_089F6828:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6840;
L_089F6840:;
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    v0 = 1;
    ST32(s0+8, FBITS(f1));
    ST32(s0+4, FBITS(f0));
    ST32(s3+104, FBITS(f2));
    ST8(s3+116, v0);
    goto L_089F678C;
L_089F6864:;
    cnd_ = v0 == 0;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_089F678C; }
    goto L_089F686C;
L_089F686C:;
    ST8(s3+116, 0);
    s7 = 0 + 0;
    v1 = LD_U8(s6-27868);
    cnd_ = v1 == 0;
    f1 = BITSF(LD32(v0-31348));
    if (cnd_) { goto L_089F6C34; }
    goto L_089F6880;
L_089F6880:;
    v0 = D_08ADEAAC - (-5460);
    f0 = BITSF(LD32(v0-5460));
    goto L_089F6888;
L_089F6888:;
    s1 = LD_U8(s6-27868);
    cnd_ = s1 == 0;
    f20 = f1 + f0;
    if (cnd_) { goto L_089F6A30; }
    goto L_089F6894;
L_089F6894:;
    a1 = D_08C2C998 - (-13928);
    v0 = a1 - 13928;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+48, v0);
    v1 = v1 + 1;
    s1 = sp + 48;
    ST32(v0+8, v1);
    ST32(sp+56, 0);
    cnd_ = a0 == 0;
    ST32(sp+52, 0);
    if (cnd_) { goto L_089F690C; }
    goto L_089F68C0;
L_089F68C0:;
    a1 = LD32(a1-13928);
    a2 = a0 + 0;
    goto L_089F68C8;
L_089F68C8:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_089F68FC; }
    goto L_089F68E0;
L_089F68E0:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+56);
    if (cnd_) { goto L_089F6910; }
    goto L_089F68F0;
L_089F68F0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F68E0; }
    goto L_089F68FC;
L_089F68FC:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_089F68C8; }
    goto L_089F690C;
L_089F690C:;
    v0 = LD32(sp+56);
    goto L_089F6910;
L_089F6910:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+48);
    if (cnd_) { goto L_089F69D0; }
    goto L_089F6918;
L_089F6918:;
    v1 = LD32(v0);
    goto L_089F691C;
L_089F691C:;
    a0 = s1 + 0;
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_089F69B8; }
    goto L_089F6928;
L_089F6928:;
    v0 = LD_U8(v1+53);
    cnd_ = v0 != 0;
    a2 = v1 + 28;
    if (cnd_) { goto L_089F69B8; }
    goto L_089F6934;
L_089F6934:;
    f0 = BITSF(LD32(v1+28));
    f1 = BITSF(LD32(s3+104));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s7 = 1; goto L_089F69CC; }
    goto L_089F694C;
L_089F694C:;
    f0 = BITSF(LD32(a2+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s7 = 1; goto L_089F69CC; }
    goto L_089F6960;
L_089F6960:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(a2+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s7 = 1; goto L_089F69CC; }
    goto L_089F6978;
L_089F6978:;
    f0 = BITSF(LD32(a2+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s7 = 1; goto L_089F69CC; }
    goto L_089F698C;
L_089F698C:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(a2+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s7 = 1; goto L_089F69CC; }
    goto L_089F69A4;
L_089F69A4:;
    f0 = BITSF(LD32(a2+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s7 = 1; goto L_089F69CC; }
    goto L_089F69B8;
L_089F69B8:;
    { u64 r_ = func_08ACC960(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F69C0;
L_089F69C0:;
    v0 = LD32(sp+56);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089F691C; }
    goto L_089F69CC;
L_089F69CC:;
    a0 = LD32(sp+48);
    goto L_089F69D0;
L_089F69D0:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089F6A20; }
    goto L_089F69E0;
L_089F69E0:;
    cnd_ = s7 == 0;
    if (cnd_) { goto L_089F678C; }
    goto L_089F69E8;
L_089F69E8:;
    f2 = BITSF(LD32(s3+84));
    goto L_089F69EC;
L_089F69EC:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    f1 = f20;
    if (cnd_) { goto L_089F6A18; }
    goto L_089F6A00;
L_089F6A00:;
    fcc = FCMP(f2, f20, 14);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_089F6A14; }
    goto L_089F6A10;
L_089F6A10:;
    f0 = f20;
    goto L_089F6A14;
L_089F6A14:;
    f1 = f0;
    goto L_089F6A18;
L_089F6A18:;
    ST32(s3+84, FBITS(f1));
    goto L_089F678C;
L_089F6A20:;
    { u64 r_ = func_08ACC9F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6A28;
L_089F6A28:;
    goto L_089F69E0;
L_089F6A30:;
    a0 = D_08B20494 - (1172);
    a0 = a0 + 1172;
    a1 = s0 + 0;
    v0 = func_08804858(a0, a1);
    goto L_089F6A40;
L_089F6A40:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s3+84)); goto L_089F69EC; }
    goto L_089F6A4C;
L_089F6A4C:;
    a2 = D_08B28F84 - (-28796);
    v0 = a2 - 28796;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+32, v0);
    v1 = v1 + 1;
    a0 = s1 < a1;
    ST32(v0+8, v1);
    s1 = sp + 32;
    ST32(sp+36, 0);
    cnd_ = a0 == 0;
    ST32(sp+40, 0);
    if (cnd_) { goto L_089F6AC4; }
    goto L_089F6A7C;
L_089F6A7C:;
    a2 = LD32(a2-28796);
    goto L_089F6A80;
L_089F6A80:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_089F6AB4; }
    goto L_089F6A98;
L_089F6A98:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089F6AC8; }
    goto L_089F6AA8;
L_089F6AA8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F6A98; }
    goto L_089F6AB4;
L_089F6AB4:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_089F6A80; }
    goto L_089F6AC4;
L_089F6AC4:;
    a0 = s1 + 0;
    goto L_089F6AC8;
L_089F6AC8:;
    a1 = 1;
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    func_08ACC8C8(a0, a1);
    goto L_089F6AD8;
L_089F6AD8:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp+32); goto L_089F6B90; }
    goto L_089F6AE4;
L_089F6AE4:;
    v0 = LD32(v0);
    goto L_089F6AE8;
L_089F6AE8:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089F6B78; }
    goto L_089F6AF4;
L_089F6AF4:;
    f0 = BITSF(LD32(v0+28));
    f1 = BITSF(LD32(s3+104));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = v0 + 28;
    if (cnd_) { goto L_089F6B78; }
    goto L_089F6B0C;
L_089F6B0C:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F6B78; }
    goto L_089F6B20;
L_089F6B20:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F6B78; }
    goto L_089F6B38;
L_089F6B38:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F6B78; }
    goto L_089F6B4C;
L_089F6B4C:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F6B78; }
    goto L_089F6B64;
L_089F6B64:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { s7 = 1; goto L_089F6B8C; }
    goto L_089F6B78;
L_089F6B78:;
    func_08ACC8C8(a0, a1);
    goto L_089F6B80;
L_089F6B80:;
    v0 = LD32(sp+40);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_089F6AE8; }
    goto L_089F6B8C;
L_089F6B8C:;
    s1 = LD32(sp+32);
    goto L_089F6B90;
L_089F6B90:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F69E0; }
    goto L_089F6BA0;
L_089F6BA0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F69E0; }
    goto L_089F6BAC;
L_089F6BAC:;
    v0 = LD32(s1);
    goto L_089F6BB0;
L_089F6BB0:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F6C04; }
    goto L_089F6BC4;
L_089F6BC4:;
    v0 = LD_U8(s0+8);
    goto L_089F6BC8;
L_089F6BC8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F6C2C; }
    goto L_089F6BD0;
L_089F6BD0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F6C1C; }
    goto L_089F6BD8;
L_089F6BD8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F6BE0;
L_089F6BE0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6BEC;
L_089F6BEC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F6BF8;
L_089F6BF8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F6BC8; }
    goto L_089F6C00;
L_089F6C00:;
    v1 = LD32(s1+4);
    goto L_089F6C04;
L_089F6C04:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F6BB0; }
    goto L_089F6C14;
L_089F6C14:;
    goto L_089F69E0;
L_089F6C1C:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F6BE0;
L_089F6C2C:;
    s0 = LD32(s0+4);
    goto L_089F6BF8;
L_089F6C34:;
    v0 = D_08ADEAA8 - (-5464);
    f0 = BITSF(LD32(v0-5464));
    goto L_089F6888;
L_089F6C40:;
    a0 = s3 + 0;
    func_089F7B4C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F6C48;
L_089F6C48:;
    v0 = LD32(s3);
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6C58;
L_089F6C58:;
    v0 = LD32(s3+96);
    goto L_089F6780;
L_089F6C60:;
    a0 = s3 + 0;
    func_089F7B4C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089F6C68;
L_089F6C68:;
    v0 = LD32(s3+96);
    goto L_089F6780;
L_089F6C70:;
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6C88;
L_089F6C88:;
    v1 = LD32(s3);
    a1 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6C9C;
L_089F6C9C:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6CB8;
L_089F6CB8:;
    v1 = LD32(s3);
    a1 = v0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F6CCC;
L_089F6CCC:;
    a0 = s3 + 0;
    goto L_089F6750;
L_089F6CD4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_089F6718; }
    goto L_089F6CE0;
L_089F6CE0:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089F671C; }
    goto L_089F6CEC;
L_089F6CEC:;
    goto L_089F6728;
L_089F6CF4:;
    v1 = a0 - 22400;
    v0 = LD32(v1+4);
    a1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089F6728; }
    goto L_089F6D1C;
L_089F6D1C:;
    a0 = LD32(a2);
    goto L_089F6D20;
L_089F6D20:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F6D4C; }
    goto L_089F6D38;
L_089F6D38:;
    a2 = LD32(a2+4);
    goto L_089F6D3C;
L_089F6D3C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089F6D20; }
    goto L_089F6D44;
L_089F6D44:;
    a1 = 0 + 0;
    goto L_089F6728;
L_089F6D4C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_089F6D38; }
    goto L_089F6D58;
L_089F6D58:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089F6D3C; }
    goto L_089F6D64;
L_089F6D64:;
    goto L_089F6728;
L_089F6D6C:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F704C; }
    goto L_089F6D84;
L_089F6D84:;
    s6 = D_08C29324 - (-27868);
    a0 = LD_U8(s6-27868);
    goto L_089F6D8C;
L_089F6D8C:;
    cnd_ = a0 == 0;
    a3 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089F6EF0; }
    goto L_089F6D94;
L_089F6D94:;
    a2 = D_08C2AA98 - (-21864);
    v0 = a2 - 21864;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089F6E0C; }
    goto L_089F6DC0;
L_089F6DC0:;
    a2 = LD32(a2-21864);
    a3 = a1 + 0;
    goto L_089F6DC8;
L_089F6DC8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089F6DFC; }
    goto L_089F6DE0;
L_089F6DE0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+8); goto L_089F6E10; }
    goto L_089F6DF0;
L_089F6DF0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089F6DE0; }
    goto L_089F6DFC;
L_089F6DFC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089F6DC8; }
    goto L_089F6E0C;
L_089F6E0C:;
    a1 = LD32(sp+8);
    goto L_089F6E10;
L_089F6E10:;
    cnd_ = a1 != 0;
    if (cnd_) { a1 = LD32(a1); goto L_089F6EC0; }
    goto L_089F6E18;
L_089F6E18:;
    s1 = LD32(sp);
    goto L_089F6E1C;
L_089F6E1C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F677C; }
    goto L_089F6E2C;
L_089F6E2C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F677C; }
    goto L_089F6E38;
L_089F6E38:;
    v0 = LD32(s1);
    goto L_089F6E3C;
L_089F6E3C:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F6E90; }
    goto L_089F6E50;
L_089F6E50:;
    v0 = LD_U8(s0+8);
    goto L_089F6E54;
L_089F6E54:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F6EB8; }
    goto L_089F6E5C;
L_089F6E5C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F6EA8; }
    goto L_089F6E64;
L_089F6E64:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F6E6C;
L_089F6E6C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6E78;
L_089F6E78:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F6E84;
L_089F6E84:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F6E54; }
    goto L_089F6E8C;
L_089F6E8C:;
    v1 = LD32(s1+4);
    goto L_089F6E90;
L_089F6E90:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F6E3C; }
    goto L_089F6EA0;
L_089F6EA0:;
    v0 = LD32(s3+96);
    goto L_089F6780;
L_089F6EA8:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F6E6C;
L_089F6EB8:;
    s0 = LD32(s0+4);
    goto L_089F6E84;
L_089F6EC0:;
    a0 = s3 + 0;
    v0 = func_089F708C(a0, a1);
    goto L_089F6EC8;
L_089F6EC8:;
    a0 = sp + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089F6E18; }
    goto L_089F6ED4;
L_089F6ED4:;
    func_08ABF2F4(a0, a1);
    goto L_089F6EDC;
L_089F6EDC:;
    a1 = LD32(sp+8);
    cnd_ = a1 != 0;
    if (cnd_) { a1 = LD32(a1); goto L_089F6EC0; }
    goto L_089F6EE8;
L_089F6EE8:;
    s1 = LD32(sp);
    goto L_089F6E1C;
L_089F6EF0:;
    v0 = a3 - 22400;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    a0 = a0 < a1;
    ST32(v0+8, v1);
    a2 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = a0 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_089F6F64; }
    goto L_089F6F1C;
L_089F6F1C:;
    a3 = LD32(a3-22400);
    goto L_089F6F20;
L_089F6F20:;
    a0 = LD32(a2+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a2+8, v1);
    if (cnd_) { goto L_089F6F54; }
    goto L_089F6F38;
L_089F6F38:;
    v1 = LD32(a2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+24); goto L_089F6F68; }
    goto L_089F6F48;
L_089F6F48:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_089F6F38; }
    goto L_089F6F54;
L_089F6F54:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_089F6F20; }
    goto L_089F6F64;
L_089F6F64:;
    a1 = LD32(sp+24);
    goto L_089F6F68;
L_089F6F68:;
    cnd_ = a1 != 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_089F7018; }
    goto L_089F6F70;
L_089F6F70:;
    s1 = LD32(sp+16);
    goto L_089F6F74;
L_089F6F74:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F677C; }
    goto L_089F6F84;
L_089F6F84:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F677C; }
    goto L_089F6F90;
L_089F6F90:;
    v0 = LD32(s1);
    goto L_089F6F94;
L_089F6F94:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F6FE8; }
    goto L_089F6FA8;
L_089F6FA8:;
    v0 = LD_U8(s0+8);
    goto L_089F6FAC;
L_089F6FAC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F7010; }
    goto L_089F6FB4;
L_089F6FB4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F7000; }
    goto L_089F6FBC;
L_089F6FBC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F6FC4;
L_089F6FC4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F6FD0;
L_089F6FD0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F6FDC;
L_089F6FDC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F6FAC; }
    goto L_089F6FE4;
L_089F6FE4:;
    v1 = LD32(s1+4);
    goto L_089F6FE8;
L_089F6FE8:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F6F94; }
    goto L_089F6FF8;
L_089F6FF8:;
    v0 = LD32(s3+96);
    goto L_089F6780;
L_089F7000:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F6FC4;
L_089F7010:;
    s0 = LD32(s0+4);
    goto L_089F6FDC;
L_089F7018:;
    a1 = LD32(a1);
    goto L_089F701C;
L_089F701C:;
    a0 = s3 + 0;
    v0 = func_089F708C(a0, a1);
    goto L_089F7024;
L_089F7024:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089F6F70; }
    goto L_089F7030;
L_089F7030:;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7038;
L_089F7038:;
    a1 = LD32(sp+24);
    cnd_ = a1 != 0;
    if (cnd_) { a1 = LD32(a1); goto L_089F701C; }
    goto L_089F7044;
L_089F7044:;
    s1 = LD32(sp+16);
    goto L_089F6F74;
L_089F704C:;
    s6 = D_08C29324 - (-27868);
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7054;
L_089F7054:;
    v1 = LD32(s3);
    a1 = v0 + 0;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F706C;
L_089F706C:;
    a0 = LD_U8(s6-27868);
    goto L_089F6D8C;
L_089F7074:;
    ST32(a0+84, FBITS(f2));
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7084;
L_089F7084:;
    a3 = LD32(s3+96);
    goto L_089F66B8;
}

/* 089F708C */
u32 func_089F708C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089F708C:;
    sp = sp - 96;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_089F7D9C(a0, a1);
    goto L_089F70B8;
L_089F70B8:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089F72D4; }
    goto L_089F70C0;
L_089F70C0:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v0 = D_08AEF464 - (-2972);
    if (cnd_) { goto L_089F73B8; }
    goto L_089F70D0;
L_089F70D0:;
    v0 = D_08AEF460 - (-2976);
    f20 = BITSF(LD32(v0-2976));
    goto L_089F70D8;
L_089F70D8:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F70F4;
L_089F70F4:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7114;
L_089F7114:;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f3 = f3 - f0;
    f4 = f4 - f5;
    f2 = f2 - f1;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
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
    fcc = FCMP(f0, f20, 14);
    ST32(sp+4, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089F7398; }
    goto L_089F7174;
L_089F7174:;
    a1 = LD32(s1);
    a3 = D_08C2BF38 - (-16584);
    a0 = a3 - 16584;
    v1 = LD32(a0+8);
    v0 = LD32(a1-16);
    a2 = LD32(a0+4);
    v1 = v1 + 1;
    v0 = s1 + v0;
    s3 = LD32(v0+4);
    a1 = sp + 16;
    ST32(a0+8, v1);
    ST32(sp+16, a0);
    ST32(sp+20, 0);
    cnd_ = a2 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_089F71FC; }
    goto L_089F71B0;
L_089F71B0:;
    a0 = LD32(a3-16584);
    a3 = a2 + 0;
    goto L_089F71B8;
L_089F71B8:;
    a2 = LD32(a1+4);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_089F71EC; }
    goto L_089F71D0;
L_089F71D0:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+24); goto L_089F7200; }
    goto L_089F71E0;
L_089F71E0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089F71D0; }
    goto L_089F71EC;
L_089F71EC:;
    v0 = a2 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089F71B8; }
    goto L_089F71FC;
L_089F71FC:;
    v1 = LD32(sp+24);
    goto L_089F7200;
L_089F7200:;
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089F723C; }
    goto L_089F7208;
L_089F7208:;
    v1 = LD32(v1);
    goto L_089F720C;
L_089F720C:;
    a0 = s0 + 0;
    v0 = LD32(v1+96);
    cnd_ = v0 == s3;
    a1 = 1;
    if (cnd_) { goto L_089F7310; }
    goto L_089F721C;
L_089F721C:;
    func_08ABC8D8(a0, a1);
    goto L_089F7224;
L_089F7224:;
    v1 = LD32(sp+24);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_089F720C; }
    goto L_089F7230;
L_089F7230:;
    v0 = 0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp+16); goto L_089F7314; }
    goto L_089F723C;
L_089F723C:;
    a1 = s1 + 0;
    a0 = s2 + 0;
    func_089F79A0(a0, a1);
    goto L_089F7248;
L_089F7248:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F72D0; }
    goto L_089F725C;
L_089F725C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F72D0; }
    goto L_089F7268;
L_089F7268:;
    v0 = LD32(s1);
    goto L_089F726C;
L_089F726C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F72C0; }
    goto L_089F7280;
L_089F7280:;
    v0 = LD_U8(s0+8);
    goto L_089F7284;
L_089F7284:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F7308; }
    goto L_089F728C;
L_089F728C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F72F8; }
    goto L_089F7294;
L_089F7294:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F729C;
L_089F729C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F72A8;
L_089F72A8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F72B4;
L_089F72B4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F7284; }
    goto L_089F72BC;
L_089F72BC:;
    v1 = LD32(s1+4);
    goto L_089F72C0;
L_089F72C0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F726C; }
    goto L_089F72D0;
L_089F72D0:;
    v0 = 1;
    goto L_089F72D4;
L_089F72D4:;
    sp = sp + 96;
    return v0;
L_089F72F8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F729C;
L_089F7308:;
    s0 = LD32(s0+4);
    goto L_089F72B4;
L_089F7310:;
    s1 = LD32(sp+16);
    goto L_089F7314;
L_089F7314:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F7398; }
    goto L_089F7324;
L_089F7324:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F7398; }
    goto L_089F7330;
L_089F7330:;
    v0 = LD32(s1);
    goto L_089F7334;
L_089F7334:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F7388; }
    goto L_089F7348;
L_089F7348:;
    v0 = LD_U8(s0+8);
    goto L_089F734C;
L_089F734C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F73B0; }
    goto L_089F7354;
L_089F7354:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F73A0; }
    goto L_089F735C;
L_089F735C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F7364;
L_089F7364:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7370;
L_089F7370:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F737C;
L_089F737C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F734C; }
    goto L_089F7384;
L_089F7384:;
    v1 = LD32(s1+4);
    goto L_089F7388;
L_089F7388:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F7334; }
    goto L_089F7398;
L_089F7398:;
    v0 = 0 + 0;
    goto L_089F72D4;
L_089F73A0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F7364;
L_089F73B0:;
    s0 = LD32(s0+4);
    goto L_089F737C;
L_089F73B8:;
    f20 = BITSF(LD32(v0-2972));
    goto L_089F70D8;
}

/* 089F73C0 */
void func_089F73C0(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F73C0:;
    sp = sp - 48;
    v0 = 999;
    s3 = a0 + 0;
    a2 = LD32(a0+96);
    a0 = D_08C2B4CC - (-19252);
    v1 = a0 - 19252;
    cnd_ = a2 == v0;
    a3 = a2 + 0;
    if (cnd_) { goto L_089F763C; }
    goto L_089F73FC;
L_089F73FC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089F744C; }
    goto L_089F7420;
L_089F7420:;
    a0 = LD32(a1);
    goto L_089F7424;
L_089F7424:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F7740; }
    goto L_089F743C;
L_089F743C:;
    a1 = LD32(a1+4);
    goto L_089F7440;
L_089F7440:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089F7424; }
    goto L_089F7448;
L_089F7448:;
    s0 = 0 + 0;
    goto L_089F744C;
L_089F744C:;
    cnd_ = s0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089F763C; }
    goto L_089F7454;
L_089F7454:;
    a1 = LD32(s0+84);
    a0 = D_08C2C664 - (-14748);
    a2 = a1 + 0;
    cnd_ = a1 == v0;
    v1 = a0 - 14748;
    if (cnd_) { goto L_089F74C0; }
    goto L_089F7468;
L_089F7468:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-14748);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F74AC; }
    goto L_089F748C;
L_089F748C:;
    v1 = LD32(a0);
    goto L_089F7490;
L_089F7490:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F7720; }
    goto L_089F749C;
L_089F749C:;
    a0 = LD32(a0+4);
    goto L_089F74A0;
L_089F74A0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089F7490; }
    goto L_089F74A8;
L_089F74A8:;
    v1 = 0 + 0;
    goto L_089F74AC;
L_089F74AC:;
    cnd_ = v1 == 0;
    if (cnd_) { s0 = D_08C2A08C - (-24436); goto L_089F74C4; }
    goto L_089F74B4;
L_089F74B4:;
    a0 = LD32(v1+192);
    func_08A64E90(a0);
    goto L_089F74BC;
L_089F74BC:;
    a1 = LD32(s0+84);
    goto L_089F74C0;
L_089F74C0:;
    s0 = D_08C2A08C - (-24436);
    goto L_089F74C4;
L_089F74C4:;
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = s0 - 24436;
    if (cnd_) { goto L_089F7638; }
    goto L_089F74D0;
L_089F74D0:;
    v0 = LD32(v1+4);
    v1 = LD32(s0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089F7514; }
    goto L_089F74F4;
L_089F74F4:;
    a0 = LD32(v1);
    goto L_089F74F8;
L_089F74F8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089F7700; }
    goto L_089F7504;
L_089F7504:;
    v1 = LD32(v1+4);
    goto L_089F7508;
L_089F7508:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089F74F8; }
    goto L_089F7510;
L_089F7510:;
    s1 = 0 + 0;
    goto L_089F7514;
L_089F7514:;
    cnd_ = s1 == 0;
    if (cnd_) { a2 = LD32(s3+96); goto L_089F763C; }
    goto L_089F751C;
L_089F751C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7530;
L_089F7530:;
    v1 = s0 - 24436;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    a0 = sp + 0;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089F75A4; }
    goto L_089F7558;
L_089F7558:;
    a2 = LD32(s0-24436);
    a3 = a1 + 0;
    goto L_089F7560;
L_089F7560:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089F7594; }
    goto L_089F7578;
L_089F7578:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F75A8; }
    goto L_089F7588;
L_089F7588:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089F7578; }
    goto L_089F7594;
L_089F7594:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089F7560; }
    goto L_089F75A4;
L_089F75A4:;
    v0 = LD32(sp+8);
    goto L_089F75A8;
L_089F75A8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089F7694; }
    goto L_089F75B0;
L_089F75B0:;
    s1 = LD32(sp);
    goto L_089F75B4;
L_089F75B4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F7638; }
    goto L_089F75C4;
L_089F75C4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F7638; }
    goto L_089F75D0;
L_089F75D0:;
    v0 = LD32(s1);
    goto L_089F75D4;
L_089F75D4:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F7628; }
    goto L_089F75E8;
L_089F75E8:;
    v0 = LD_U8(s0+8);
    goto L_089F75EC;
L_089F75EC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F768C; }
    goto L_089F75F4;
L_089F75F4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F767C; }
    goto L_089F75FC;
L_089F75FC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F7604;
L_089F7604:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7610;
L_089F7610:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F761C;
L_089F761C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F75EC; }
    goto L_089F7624;
L_089F7624:;
    v1 = LD32(s1+4);
    goto L_089F7628;
L_089F7628:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F75D4; }
    goto L_089F7638;
L_089F7638:;
    a2 = LD32(s3+96);
    goto L_089F763C;
L_089F763C:;
    a0 = s3 + 0;
    a1 = 5;
    func_089F80A0(a1, a2, t1, t2, t3);
    goto L_089F7648;
L_089F7648:;
    v0 = LD32(s3);
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7658;
L_089F7658:;
    sp = sp + 48;
    return;
L_089F767C:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F7604;
L_089F768C:;
    s0 = LD32(s0+4);
    goto L_089F761C;
L_089F7694:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC97C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F76A0;
L_089F76A0:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    cnd_ = s0 == s1;
    a2 = s0 + 0;
    if (cnd_) { goto L_089F76D4; }
    goto L_089F76B0;
L_089F76B0:;
    v0 = func_089F7760(a1, a2);
    goto L_089F76B8;
L_089F76B8:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F76D8; }
    goto L_089F76C0;
L_089F76C0:;
    v1 = LD32(s0+88);
    v0 = LD32(s1+88);
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = 3;
    if (cnd_) { goto L_089F76E8; }
    goto L_089F76D4;
L_089F76D4:;
    v0 = LD32(sp+8);
    goto L_089F76D8;
L_089F76D8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089F7694; }
    goto L_089F76E0;
L_089F76E0:;
    s1 = LD32(sp);
    goto L_089F75B4;
L_089F76E8:;
    v0 = LD32(s0);
    v1 = LD32(v0+80);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F76F8;
L_089F76F8:;
    v0 = LD32(sp+8);
    goto L_089F76D8;
L_089F7700:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089F7504; }
    goto L_089F770C;
L_089F770C:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089F7508; }
    goto L_089F7718;
L_089F7718:;
    goto L_089F7514;
L_089F7720:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089F74A0; }
    goto L_089F772C;
L_089F772C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089F74A0; }
    goto L_089F7738;
L_089F7738:;
    goto L_089F74AC;
L_089F7740:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089F743C; }
    goto L_089F774C;
L_089F774C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089F7440; }
    goto L_089F7758;
L_089F7758:;
    goto L_089F744C;
}

/* 089F7760 */
u32 func_089F7760(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F7760:;
    sp = sp - 48;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    s2 = a1 + 0;
    s0 = a2 + 0;
    v0 = LD32(a2+28);
    a2 = 1;
    a1 = v0 + 0;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7794;
L_089F7794:;
    s1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F77E4; }
    goto L_089F77A0;
L_089F77A0:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F77B0;
L_089F77B0:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089F77E8; }
    goto L_089F77B8;
L_089F77B8:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089F77EC; }
    goto L_089F77C0;
L_089F77C0:;
    v0 = LD32(s1);
    f0 = BITSF(0);
    v1 = LD32(v0-12);
    v0 = s1 + v1;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F7800; }
    goto L_089F77E4;
L_089F77E4:;
    v0 = 0 + 0;
    goto L_089F77E8;
L_089F77E8:;
    goto L_089F77EC;
L_089F77EC:;
    sp = sp + 48;
    return v0;
L_089F7800:;
    v1 = LD32(v0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7810;
L_089F7810:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_089823D8(a0);
    goto L_089F781C;
L_089F781C:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f3;
    f2 = f2 - f0;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AEF468 - (-2968);
    f0 = BITSF(LD32(v0-2968));
    ST32(sp, FBITS(f1));
    v0 = 1;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_089F77E8; }
    goto L_089F788C;
L_089F788C:;
    v0 = 0 + 0;
    goto L_089F77E8;
}

/* 089F7894 */
rv_t func_089F7894(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F7894:;
    sp = sp - 16;
    s2 = 999;
    a2 = 1;
    s1 = a0 + 0;
    v0 = LD32(a0+96);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    cnd_ = v0 == s2;
    a1 = v0 + 0;
    if (cnd_) { goto L_089F7964; }
    goto L_089F78C8;
L_089F78C8:;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F78D0;
L_089F78D0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F7964; }
    goto L_089F78DC;
L_089F78DC:;
    v1 = LD32(v0);
    v0 = LD32(v1+168);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F78EC;
L_089F78EC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089F7968; }
    goto L_089F78F4;
L_089F78F4:;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+48);
    cnd_ = v0 == s2;
    a0 = v1 + 0;
    if (cnd_) { goto L_089F791C; }
    goto L_089F790C;
L_089F790C:;
    v1 = LD32(v1);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F791C;
L_089F791C:;
    a1 = LD32(s0+84);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7930;
L_089F7930:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F7964; }
    goto L_089F7938;
L_089F7938:;
    v0 = func_089826E8(a0, 0, 0, 0);
    goto L_089F7940;
L_089F7940:;
    ST32(s1+96, v0);
    a0 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_089F6590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7950;
L_089F7950:;
    a2 = 0x7e770000u;
    a1 = s0 + 0;
    a2 = a2 | 0x9b80;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089F797C; }
    goto L_089F7964;
L_089F7964:;
    goto L_089F7968;
L_089F7968:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F797C:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+96);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7998;
L_089F7998:;
    goto L_089F7968;
}

/* 089F79A0 */
void func_089F79A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F79A0:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1-16);
    v0 = a1 + v0;
    v1 = LD32(v0+4);
    ST32(a0+96, v1);
    { u64 r_ = func_089F6590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F79D0;
L_089F79D0:;
    cnd_ = v0 == 0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_089F7B2C; }
    goto L_089F79D8;
L_089F79D8:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v0 = D_08ADEAB0 - (-5456);
    if (cnd_) { goto L_089F7B24; }
    goto L_089F79E4;
L_089F79E4:;
    v0 = D_08ADEAB4 - (-5452);
    a2 = LD32(v0-5452);
    goto L_089F79EC;
L_089F79EC:;
    v1 = LD32(s0);
    a1 = LD32(s1);
    a0 = LD32(v1-12);
    v0 = LD32(a1-16);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    v0 = LD32(v1+96);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7A18;
L_089F7A18:;
    v1 = LD32(s0);
    goto L_089F7A1C;
L_089F7A1C:;
    ST32(s0+84, 0);
    a0 = s1 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    func_089E3CB0(a0, a1, 0, 0);
    goto L_089F7A34;
L_089F7A34:;
    v1 = LD32(s1);
    a0 = s0 + 0;
    a1 = 4;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    func_089F80A0(a1, a2, 0, 0, 0);
    goto L_089F7A50;
L_089F7A50:;
    v1 = LD32(s0+88);
    v0 = 999;
    cnd_ = v1 == v0;
    a0 = 0x8074;
    if (cnd_) { goto L_089F7A88; }
    goto L_089F7A60;
L_089F7A60:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7A70;
L_089F7A70:;
    v1 = LD32(s0);
    a2 = LD32(s0+88);
    a1 = v0 + 0;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7A88;
L_089F7A88:;
    a0 = LD32(s1+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7A90;
L_089F7A90:;
    ST32(s0+92, v0);
    a0 = LD32(s0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7A9C;
L_089F7A9C:;
    a0 = LD32(s0+92);
    v1 = v0 ^ 0x2;
    v1 = v1 < 0x1u;
    v0 = a0 ^ v0;
    v0 = 0 < v0;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F7AD0; }
    goto L_089F7ABC;
L_089F7ABC:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_089F7B0C; }
    goto L_089F7AC8;
L_089F7AC8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089F7AE0; }
    goto L_089F7AD0;
L_089F7AD0:;
    sp = sp + 16;
    return;
L_089F7AE0:;
    a0 = 0x219e0000u;
    a1 = 0x8980000u;
    v1 = LD32(v0-16);
    a0 = a0 | 0x11e5;
    a1 = a1 | 0xc72a;
    goto L_089F7AF4;
L_089F7AF4:;
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    a3 = 1;
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7B04;
L_089F7B04:;
    goto L_089F7AD0;
L_089F7B0C:;
    a0 = 0x8980000u;
    a1 = 0x219e0000u;
    v1 = LD32(v0-16);
    a0 = a0 | 0xc72a;
    a1 = a1 | 0x11e5;
    goto L_089F7AF4;
L_089F7B24:;
    a2 = LD32(v0-5456);
    goto L_089F79EC;
L_089F7B2C:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7B44;
L_089F7B44:;
    v1 = LD32(s0);
    goto L_089F7A1C;
}

/* 089F7B4C */
void func_089F7B4C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089F7B4C:;
    sp = sp - 96;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v0 = 999;
    a1 = a0 + v1;
    a0 = LD32(a1+48);
    cnd_ = a0 == v0;
    if (cnd_) { a1 = LD32(s0+96); goto L_089F7CA0; }
    goto L_089F7B80;
L_089F7B80:;
    v1 = LD32(a1);
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7B90;
L_089F7B90:;
    v0 = D_08C29328 - (-27864);
    goto L_089F7B94;
L_089F7B94:;
    a0 = LD32(v0-27864);
    v1 = 999;
    v0 = 5;
    cnd_ = a0 == v0;
    ST32(s0+96, v1);
    if (cnd_) { goto L_089F7C98; }
    goto L_089F7BA8;
L_089F7BA8:;
    v0 = D_08B2858C - (-31348);
    v1 = D_08AEF470 - (-2960);
    f0 = BITSF(LD32(v0-31348));
    f1 = BITSF(LD32(v1-2960));
    f0 = f0 + f1;
    ST32(s0+84, FBITS(f0));
    goto L_089F7BC0;
L_089F7BC0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 6;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    func_089F80A0(a1, a2, 0, 0, 0);
    goto L_089F7BDC;
L_089F7BDC:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7BE4;
L_089F7BE4:;
    a0 = LD32(s0+92);
    v1 = v0 ^ 0x2;
    v1 = v1 < 0x1u;
    v0 = v0 ^ a0;
    v0 = 0 < v0;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_089F7C1C; }
    goto L_089F7C04;
L_089F7C04:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_089F7C84; }
    goto L_089F7C10;
L_089F7C10:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089F7C5C; }
    goto L_089F7C18;
L_089F7C18:;
    v0 = 2;
    goto L_089F7C1C;
L_089F7C1C:;
    ST32(s0+92, v0);
    v1 = D_08B45A9C - (23196);
    v0 = v1 + 23196;
    f0 = BITSF(LD32(v1+23196));
    f1 = BITSF(LD32(v0+8));
    v1 = s0 + 104;
    f2 = BITSF(LD32(v0+4));
    ST32(s0+104, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    sp = sp + 96;
    return;
L_089F7C5C:;
    a0 = 0x6b6c0000u;
    a0 = a0 | 0xd432;
    v1 = LD32(v0-16);
    a1 = 0 + 0;
    goto L_089F7C6C;
L_089F7C6C:;
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    a3 = 1;
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7C7C;
L_089F7C7C:;
    v0 = 2;
    goto L_089F7C1C;
L_089F7C84:;
    a1 = 0x6b6c0000u;
    a0 = 0 + 0;
    v1 = LD32(v0-16);
    a1 = a1 | 0xd432;
    goto L_089F7C6C;
L_089F7C98:;
    ST32(s0+84, 0);
    goto L_089F7BC0;
L_089F7CA0:;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7CB0;
L_089F7CB0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089F7D7C; }
    goto L_089F7CB8;
L_089F7CB8:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BAA98(a0);
    goto L_089F7CCC;
L_089F7CCC:;
    v1 = LD32(v0);
    ST32(sp, v1);
    a0 = LD32(v0+4);
    ST32(sp+4, a0);
    v1 = LD32(v0+8);
    ST32(sp+8, v1);
    a0 = LD32(v0+12);
    f0 = BITSF(LD32(sp+8));
    ST32(sp+12, a0);
    v1 = LD32(v0+16);
    f1 = BITSF(LD32(sp+12));
    ST32(sp+16, v1);
    f2 = f1 - f0;
    v1 = LD32(v0+20);
    v0 = FBITS(f2);
    ST32(sp+20, v1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f20 = BITSF(v0);
    v0 = D_08AEF46C - (-2964);
    f0 = BITSF(LD32(v0-2964));
    v0 = LD32(s1);
    f20 = f20 + f0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f20 = BITSF(FBITS(f20) ^ 0x80000000u);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7D3C;
L_089F7D3C:;
    a0 = LD32(s0);
    ST32(sp+52, FBITS(f20));
    a1 = sp + 32;
    v1 = LD32(a0-12);
    f0 = BITSF(LD32(v0+4));
    ST32(sp+48, 0);
    v1 = s0 + v1;
    f0 = f0 + f20;
    ST32(sp+56, 0);
    f1 = BITSF(LD32(v0));
    a0 = LD32(v1+4);
    f2 = BITSF(LD32(v0+8));
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F7D7C;
L_089F7D7C:;
    v1 = LD32(s0);
    a1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7D94;
L_089F7D94:;
    v0 = D_08C29328 - (-27864);
    goto L_089F7B94;
}

/* 089F7D9C */
u32 func_089F7D9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F7D9C:;
    sp = sp - 48;
    s1 = a0 + 0;
    v0 = LD_U8(a1+5);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089F7F80; }
    goto L_089F7DCC;
L_089F7DCC:;
    v0 = LD_U8(a1+64);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089F7DFC; }
    goto L_089F7DD8;
L_089F7DD8:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089F7E24; }
    goto L_089F7DFC;
L_089F7DFC:;
    v0 = a2 + 0;
    sp = sp + 48;
    return v0;
L_089F7E24:;
    a0 = a1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089F7E2C;
L_089F7E2C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F8058; }
    goto L_089F7E34;
L_089F7E34:;
    a3 = D_08C2B2A8 - (-19800);
    v0 = a3 - 19800;
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
    if (cnd_) { goto L_089F7EAC; }
    goto L_089F7E64;
L_089F7E64:;
    a3 = LD32(a3-19800);
    goto L_089F7E68;
L_089F7E68:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_089F7E9C; }
    goto L_089F7E80;
L_089F7E80:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F7EB0; }
    goto L_089F7E90;
L_089F7E90:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089F7E80; }
    goto L_089F7E9C;
L_089F7E9C:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089F7E68; }
    goto L_089F7EAC;
L_089F7EAC:;
    v0 = LD32(sp+8);
    goto L_089F7EB0;
L_089F7EB0:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089F7EFC; }
    goto L_089F7EB8;
L_089F7EB8:;
    a3 = LD32(v0);
    goto L_089F7EBC;
L_089F7EBC:;
    a0 = sp + 0;
    cnd_ = a3 == 0;
    a1 = 1;
    if (cnd_) { goto L_089F7EE4; }
    goto L_089F7EC8;
L_089F7EC8:;
    v1 = LD32(s0);
    a2 = LD32(a3+252);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a2 == v1;
    if (cnd_) { goto L_089F7FA0; }
    goto L_089F7EE4;
L_089F7EE4:;
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7EEC;
L_089F7EEC:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(v0); goto L_089F7EBC; }
    goto L_089F7EF8;
L_089F7EF8:;
    s1 = LD32(sp);
    goto L_089F7EFC;
L_089F7EFC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F7F80; }
    goto L_089F7F0C;
L_089F7F0C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F7F80; }
    goto L_089F7F18;
L_089F7F18:;
    v0 = LD32(s1);
    goto L_089F7F1C;
L_089F7F1C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F7F70; }
    goto L_089F7F30;
L_089F7F30:;
    v0 = LD_U8(s0+8);
    goto L_089F7F34;
L_089F7F34:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F7F98; }
    goto L_089F7F3C;
L_089F7F3C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F7F88; }
    goto L_089F7F44;
L_089F7F44:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F7F4C;
L_089F7F4C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7F58;
L_089F7F58:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F7F64;
L_089F7F64:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F7F34; }
    goto L_089F7F6C;
L_089F7F6C:;
    v1 = LD32(s1+4);
    goto L_089F7F70;
L_089F7F70:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F7F1C; }
    goto L_089F7F80;
L_089F7F80:;
    a2 = 0 + 0;
    goto L_089F7DFC;
L_089F7F88:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F7F4C;
L_089F7F98:;
    s0 = LD32(s0+4);
    goto L_089F7F64;
L_089F7FA0:;
    a0 = a3 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F7FA8;
L_089F7FA8:;
    s1 = LD32(sp);
    v0 = v0 ^ 0x1;
    s5 = v0 & 0xff;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F8038; }
    goto L_089F7FC4;
L_089F7FC4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F8038; }
    goto L_089F7FD0;
L_089F7FD0:;
    v0 = LD32(s1);
    goto L_089F7FD4;
L_089F7FD4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F8028; }
    goto L_089F7FE8;
L_089F7FE8:;
    v0 = LD_U8(s0+8);
    goto L_089F7FEC;
L_089F7FEC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F8050; }
    goto L_089F7FF4;
L_089F7FF4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F8040; }
    goto L_089F7FFC;
L_089F7FFC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F8004;
L_089F8004:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8010;
L_089F8010:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F801C;
L_089F801C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F7FEC; }
    goto L_089F8024;
L_089F8024:;
    v1 = LD32(s1+4);
    goto L_089F8028;
L_089F8028:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F7FD4; }
    goto L_089F8038;
L_089F8038:;
    a2 = s5 + 0;
    goto L_089F7DFC;
L_089F8040:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F8004;
L_089F8050:;
    s0 = LD32(s0+4);
    goto L_089F801C;
L_089F8058:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8060;
L_089F8060:;
    cnd_ = v0 != 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_089F8078; }
    goto L_089F8068;
L_089F8068:;
    v0 = LD_U8(s1+100);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089F7DFC; }
    goto L_089F8074;
L_089F8074:;
    v0 = D_08C28F60 - (-28832);
    goto L_089F8078;
L_089F8078:;
    a0 = LD32(v0-28832);
    v1 = 3;
    cnd_ = a0 == v1;
    a2 = 1;
    if (cnd_) { goto L_089F7DFC; }
    goto L_089F8088;
L_089F8088:;
    v1 = LD32(s0+12);
    v0 = LD32(s1+12);
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089F7DFC; }
    goto L_089F8098;
L_089F8098:;
    a2 = 1;
    goto L_089F7DFC;
}

/* 089F80A0 */
void func_089F80A0(u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089F80A0:;
    sp = sp - 64;
    t0 = D_08C2A508 - (-23288);
    v1 = t0 - 23288;
    s1 = a1 + 0;
    s0 = a2 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a3 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a3 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089F8138; }
    goto L_089F80F0;
L_089F80F0:;
    a2 = LD32(t0-23288);
    goto L_089F80F4;
L_089F80F4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089F8128; }
    goto L_089F810C;
L_089F810C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F813C; }
    goto L_089F811C;
L_089F811C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089F810C; }
    goto L_089F8128;
L_089F8128:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089F80F4; }
    goto L_089F8138;
L_089F8138:;
    v0 = LD32(sp+8);
    goto L_089F813C;
L_089F813C:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089F817C; }
    goto L_089F8144;
L_089F8144:;
    v0 = LD32(v0);
    goto L_089F8148;
L_089F8148:;
    a1 = sp + 16;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F8160; }
    goto L_089F8154;
L_089F8154:;
    ST32(sp+16, s1);
    ST32(sp+20, s0);
    { rv_t r_ = func_0898EDBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8160;
L_089F8160:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC1700(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F816C;
L_089F816C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_089F8148; }
    goto L_089F8178;
L_089F8178:;
    s1 = LD32(sp);
    goto L_089F817C;
L_089F817C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F8200; }
    goto L_089F818C;
L_089F818C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F8200; }
    goto L_089F8198;
L_089F8198:;
    v0 = LD32(s1);
    goto L_089F819C;
L_089F819C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F81F0; }
    goto L_089F81B0;
L_089F81B0:;
    v0 = LD_U8(s0+8);
    goto L_089F81B4;
L_089F81B4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F8230; }
    goto L_089F81BC;
L_089F81BC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F8220; }
    goto L_089F81C4;
L_089F81C4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F81CC;
L_089F81CC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F81D8;
L_089F81D8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F81E4;
L_089F81E4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F81B4; }
    goto L_089F81EC;
L_089F81EC:;
    v1 = LD32(s1+4);
    goto L_089F81F0;
L_089F81F0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F819C; }
    goto L_089F8200;
L_089F8200:;
    sp = sp + 64;
    return;
L_089F8220:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F81CC;
L_089F8230:;
    s0 = LD32(s0+4);
    goto L_089F81E4;
}

/* 089F8238 */
rv_t func_089F8238(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F8238:;
    sp = sp - 32;
    s4 = a0 + 0;
    a0 = 224;
    s6 = a2 + 0;
    s5 = a1 + 0;
    s3 = t1 & 0xff;
    s2 = t0 + 0;
    s1 = a3 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F827C;
L_089F827C:;
    s0 = v0 + 0;
    a3 = 999;
    a0 = v0 + 0;
    a1 = s4 + 0;
    a2 = s5 + 0;
    func_089F62C0(a0, a1, a2, a3);
    goto L_089F8294;
L_089F8294:;
    a1 = LD32(s0);
    v0 = 0xec5b0000u;
    v0 = v0 | 0x1ee4;
    a0 = LD32(a1-12);
    v1 = 0x617d0000u;
    v1 = v1 | 0x89da;
    a0 = s0 + a0;
    a1 = LD32(a0);
    if (s1 == 0) s1 = v0;
    if (s2 == 0) s2 = v1;
    v0 = LD32(a1+8);
    a2 = s2 + 0;
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F82CC;
L_089F82CC:;
    v1 = LD32(s0);
    a1 = s6 + 0;
    v0 = LD32(v1-12);
    v1 = 1;
    v0 = s0 + v0;
    ST32(v0+28, v1);
    a2 = LD32(s0);
    v0 = LD32(a2+32);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F82F4;
L_089F82F4:;
    ST8(s0+100, s3);
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F8324 */
rv_t func_089F8324(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8324:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 100;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8358;
L_089F8358:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089F8388; }
    goto L_089F8360;
L_089F8360:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F839C; }
    goto L_089F8370;
L_089F8370:;
    v0 = LD32(s1);
    goto L_089F8374;
L_089F8374:;
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8388;
L_089F8388:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F839C:;
    func_089F844C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F83A4;
L_089F83A4:;
    v0 = LD32(s1);
    goto L_089F8374;
}

/* 089F83AC */
rv_t func_089F83AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F83AC:;
    sp = sp - 16;
    s1 = a0 + 0;
    { rv_t r_ = func_08A07B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F83C4;
L_089F83C4:;
    a1 = 1;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F83F4; }
    goto L_089F83E0;
L_089F83E0:;
    goto L_089F83E4;
L_089F83E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F83F4:;
    func_088BB4A4(a0, a1);
    goto L_089F83FC;
L_089F83FC:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8408;
L_089F8408:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8420;
L_089F8420:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089F83E0; }
    goto L_089F8430;
L_089F8430:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8444;
L_089F8444:;
    goto L_089F83E4;
}

/* 089F844C */
void func_089F844C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F844C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089F8468;
L_089F8468:;
    f2 = BITSF(0);
    f3 = BITSF(LD32(s1+84));
    fcc = FCMP(f2, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+92, FBITS(f2)); goto L_089F84B8; }
    goto L_089F8480;
L_089F8480:;
    v1 = D_08B285A4 - (-31324);
    f1 = BITSF(LD32(v1-31324));
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    fcc = FCMP(f1, f2, 2);
    v0 = D_08B285B4 - (-31308);
    f4 = BITSF(LD32(v0-31308));
    cnd_ = !fcc;
    f0 = f3 - f0;
    if (cnd_) { goto L_089F84AC; }
    goto L_089F84A4;
L_089F84A4:;
    v0 = D_08AEF474 - (-2956);
    f1 = BITSF(LD32(v0-2956));
    goto L_089F84AC;
L_089F84AC:;
    f0 = f0 / f1;
    f0 = f4 + f0;
    ST32(s0+92, FBITS(f0));
    goto L_089F84B8;
L_089F84B8:;
    v0 = LD32(s1+96);
    ST32(s0+96, v0);
    sp = sp + 16;
    return;
}

/* 089F84D4 */
rv_t func_089F84D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F84D4:;
    sp = sp - 48;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F850C;
L_089F850C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F8574; }
    goto L_089F8514;
L_089F8514:;
    a1 = LD32(s0+32);
    v1 = D_08C28F60 - (-28832);
    a0 = LD32(v1-28832);
    v0 = 0xec5b0000u;
    v0 = v0 | 0x1ee4;
    a1 = a1 ^ v0;
    a0 = a0 - 1;
    s2 = a1 < 0x1u;
    cnd_ = s2 != 0;
    s3 = a0 < 0x3u;
    if (cnd_) { goto L_089F8590; }
    goto L_089F853C;
L_089F853C:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { rv_t r_ = func_08A083F4(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8550;
L_089F8550:;
    f0 = BITSF(LD32(s0+92));
    ST32(s1+84, FBITS(f0));
    v0 = LD32(s0+96);
    cnd_ = s2 == 0;
    ST32(s1+92, v0);
    if (cnd_) { goto L_089F8570; }
    goto L_089F8564;
L_089F8564:;
    v0 = 0xec5b0000u;
    v0 = v0 | 0x1ee4;
    ST32(s0+32, v0);
    goto L_089F8570;
L_089F8570:;
    goto L_089F8574;
L_089F8574:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089F8590:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8598;
L_089F8598:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_089F853C; }
    goto L_089F85AC;
L_089F85AC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F85FC; }
    goto L_089F85D0;
L_089F85D0:;
    a0 = LD32(a1);
    goto L_089F85D4;
L_089F85D4:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089F86A0; }
    goto L_089F85EC;
L_089F85EC:;
    a1 = LD32(a1+4);
    goto L_089F85F0;
L_089F85F0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089F85D4; }
    goto L_089F85F8;
L_089F85F8:;
    v1 = 0 + 0;
    goto L_089F85FC;
L_089F85FC:;
    cnd_ = v1 == 0;
    v0 = 4;
    if (cnd_) { goto L_089F853C; }
    goto L_089F8604;
L_089F8604:;
    v1 = LD32(v1+64);
    cnd_ = v1 == v0;
    a0 = 0xec5b0000u;
    if (cnd_) { goto L_089F853C; }
    goto L_089F8610;
L_089F8610:;
    a1 = LD32(s0+84);
    a0 = a0 | 0x1ee4;
    v0 = v1 ^ a1;
    cnd_ = s3 == 0;
    a2 = v0 < 0x1u;
    if (cnd_) { goto L_089F8698; }
    goto L_089F8624;
L_089F8624:;
    v1 = 0x2e1a0000u;
    a0 = 0x95310000u;
    v1 = v1 | 0x9870;
    a0 = a0 | 0x4c5b;
    v0 = 1;
    cnd_ = a1 == v0;
    if (a2 == 0) a0 = v1;
    if (cnd_) { goto L_089F8698; }
    goto L_089F8640;
L_089F8640:;
    v0 = 0xf1770000u;
    a0 = 0x3d7c0000u;
    v0 = v0 | 0xdbc1;
    a0 = a0 | 0x732a;
    cnd_ = a1 == 0;
    if (a2 == 0) a0 = v0;
    if (cnd_) { goto L_089F8698; }
    goto L_089F8658;
L_089F8658:;
    v1 = 0x4f710000u;
    a0 = 0x9ea80000u;
    v1 = v1 | 0x846;
    a0 = a0 | 0xd745;
    v0 = 2;
    cnd_ = a1 == v0;
    if (a2 == 0) a0 = v1;
    if (cnd_) { goto L_089F8698; }
    goto L_089F8674;
L_089F8674:;
    v1 = 0x349d0000u;
    a0 = 0x5f010000u;
    v1 = v1 | 0x2e89;
    a0 = a0 | 0x7962;
    v0 = 3;
    cnd_ = a1 == v0;
    if (a2 == 0) a0 = v1;
    if (cnd_) { goto L_089F8698; }
    goto L_089F8690;
L_089F8690:;
    a0 = 0xec5b0000u;
    a0 = a0 | 0x1ee4;
    goto L_089F8698;
L_089F8698:;
    ST32(s0+32, a0);
    goto L_089F853C;
L_089F86A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089F85EC; }
    goto L_089F86AC;
L_089F86AC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089F85F0; }
    goto L_089F86B8;
L_089F86B8:;
    goto L_089F85FC;
}

/* 089F86C0 */
void func_089F86C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F86C0:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F86E4;
L_089F86E4:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 21;
    t0 = 100;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089F8700;
L_089F8700:;
    a0 = s2 + 0;
    func_089F8728(a0);
    goto L_089F8708;
L_089F8708:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089F8710;
L_089F8710:;
    sp = sp + 16;
    return;
}

/* 089F8728 */
void func_089F8728(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089F8728:;
    sp = sp - 128;
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089F873C;
L_089F873C:;
    v0 = D_08AEF478 - (-2952);
    f12 = BITSF(LD32(v0-2952));
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 92;
    t0 = 32;
    t1 = 1;
    t2 = 2;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089F8764;
L_089F8764:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 96;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089F8788;
L_089F8788:;
    sp = sp + 128;
    return;
}

/* 089F8798 */
rv_t func_089F8798(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F8798:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F88BC; }
    goto L_089F87CC;
L_089F87CC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF47C - (-2948);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2948));
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
    t0 = D_08C2BE88 - (-16760);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BE98 - (-16744);
    a3 = D_08C2BEA8 - (-16728);
    v1 = t0 - 16760;
    a1 = v0 - 16744;
    a2 = a3 - 16728;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BF38 - (-16584);
    s0 = s3 - 16584;
    ST32(v1+8, FBITS(f5));
    a0 = 4;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-16744, FBITS(f5));
    v0 = 1;
    ST32(t0-16760, FBITS(f1));
    ST32(a3-16728, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8884;
L_089F8884:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-16584, v0);
    if (cnd_) { goto L_089F88B0; }
    goto L_089F8894;
L_089F8894:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F889C;
L_089F889C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F889C; }
    goto L_089F88B0;
L_089F88B0:;
    v0 = s3 - 16584;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F88BC;
L_089F88BC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F88E0; }
    goto L_089F88D0;
L_089F88D0:;
    v0 = D_08C2BF38 - (-16584);
    a0 = LD32(v0-16584);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F88F8; }
    goto L_089F88E0;
L_089F88E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F88F8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8900;
L_089F8900:;
    goto L_089F88E0;
}

/* 089F8908 */
rv_t func_089F8908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8908:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F8798(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F891C;
L_089F891C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F8928 */
rv_t func_089F8928(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8928:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F8798(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F893C;
L_089F893C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F8948 */
void func_089F8948(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F8948:;
    sp = sp - 48;
    s4 = a0 + 0;
    s3 = a0 + 360;
    a0 = s3 + 0;
    s0 = D_08B11530 - (5424);
    s0 = s0 + 5424;
    s5 = s4 + 284;
    s2 = a1 + 0;
    a1 = a2 + 0;
    s7 = D_08C2BFF8 - (-16392);
    s6 = s7 - 16392;
    s1 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_089F89A0;
L_089F89A0:;
    a1 = s0 + 44;
    a2 = (u32)-1;
    a0 = s5 + 0;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089F89B0;
L_089F89B0:;
    a1 = s0 + 52;
    a0 = s4 + 388;
    s0 = s0 + 4;
    func_08866470(a0, a1, 0, 0);
    goto L_089F89C0;
L_089F89C0:;
    a2 = s2 + 0;
    a1 = s0 + 0;
    a0 = s4 + 0;
    a3 = s1 + 0;
    t0 = 999;
    func_089FF994(a0, a1, a2, a3);
    goto L_089F89D8;
L_089F89D8:;
    v0 = D_08B112AC - (4780);
    v0 = v0 + 4780;
    v1 = v0 + 604;
    a0 = v0 + 280;
    ST32(s4, v0);
    a1 = v0 + 484;
    a2 = 999;
    v0 = (u32)-32747;
    ST32(s4+388, v1);
    ST32(s4+280, a2);
    ST32(s4+284, a0);
    ST32(s4+248, 0);
    ST32(s4+252, 0);
    ST32(s4+256, 0);
    ST32(s4+260, 0);
    ST32(s4+264, 0);
    ST32(s4+268, a2);
    ST32(s4+272, 0);
    ST8(s4+276, 0);
    ST32(s4+360, a1);
    ST16(s3+8, v0);
    v1 = LD32(s5+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089F8ADC; }
    goto L_089F8A38;
L_089F8A38:;
    a1 = LD32(s4);
    goto L_089F8A3C;
L_089F8A3C:;
    v1 = LD32(s6+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s4 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8A5C;
L_089F8A5C:;
    a0 = LD32(s7-16392);
    s0 = s0 << 2;
    v1 = LD32(s6+12);
    s0 = s0 + a0;
    a2 = LD32(s0);
    v1 = v1 + 1;
    ST32(s6+12, v1);
    a1 = 1;
    ST32(v0+4, a2);
    ST32(v0, s4);
    ST32(s0, v0);
    ST8(v0+8, 0);
    a0 = LD32(s5+4);
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8A94;
L_089F8A94:;
    s0 = LD32(s5+4);
    a1 = 1;
    a0 = s0 + 0;
    func_088BB4A4(a0, a1);
    goto L_089F8AA4;
L_089F8AA4:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8AB0;
L_089F8AB0:;
    sp = sp + 48;
    return;
L_089F8ADC:;
    v0 = D_08AEF484 - (-2940);
    f12 = BITSF(LD32(v0-2940));
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8AE8;
L_089F8AE8:;
    a1 = LD32(s4);
    goto L_089F8A3C;
}

/* 089F8AF0 */
rv_t func_089F8AF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F8AF0:;
    v0 = D_08B112AC - (4780);
    sp = sp - 32;
    v0 = v0 + 4780;
    a2 = v0 + 604;
    v1 = v0 + 280;
    s1 = a0 + 0;
    a0 = v0 + 484;
    ST32(s1+284, v1);
    a1 = s1 + 0;
    ST32(s1+388, a2);
    ST32(s1+360, a0);
    a0 = D_08C2BFF8 - (-16392);
    a0 = a0 - 16392;
    ST32(s1, v0);
    s0 = D_08B11530 - (5424);
    s0 = s0 + 5424;
    s4 = s1 + 360;
    s3 = s1 + 284;
    func_08ACCDA4(a0, a1, t1, t2, t3);
    goto L_089F8B54;
L_089F8B54:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A00068(a0, a1, 0, 0, 0);
    goto L_089F8B60;
L_089F8B60:;
    a2 = LD32(s0+52);
    a3 = s0 + 52;
    s2 = s1 + 388;
    ST32(s1+388, a2);
    s0 = s0 + 44;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+388);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F8BA4;
L_089F8BA4:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8BAC;
L_089F8BAC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F8BCC */
rv_t func_089F8BCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F8BCC:;
    v0 = D_08B112AC - (4780);
    sp = sp - 32;
    v0 = v0 + 4780;
    a2 = v0 + 604;
    v1 = v0 + 280;
    s1 = a0 + 0;
    a0 = v0 + 484;
    ST32(s1+284, v1);
    a1 = s1 + 0;
    ST32(s1+388, a2);
    ST32(s1+360, a0);
    a0 = D_08C2BFF8 - (-16392);
    a0 = a0 - 16392;
    ST32(s1, v0);
    s0 = D_08B11530 - (5424);
    s0 = s0 + 5424;
    s4 = s1 + 360;
    s3 = s1 + 284;
    func_08ACCDA4(a0, a1, t1, t2, t3);
    goto L_089F8C30;
L_089F8C30:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A00068(a0, a1, 0, 0, 0);
    goto L_089F8C3C;
L_089F8C3C:;
    a2 = LD32(s0+52);
    a3 = s0 + 52;
    s2 = s1 + 388;
    ST32(s1+388, a2);
    s0 = s0 + 44;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+388);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089F8C80;
L_089F8C80:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8C88;
L_089F8C88:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8C90;
L_089F8C90:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089F8CB0 */
u32 func_089F8CB0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F8CB0:;
    sp = sp - 32;
    s0 = a0 + 0;
    a2 = sp + 0;
    a1 = LD32(a0+132);
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8CD8;
L_089F8CD8:;
    a1 = 0x21b20000u;
    v0 = LD32(sp);
    f12 = BITSF(0);
    a1 = a1 | 0x7cf9;
    v1 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F8D08; }
    goto L_089F8CF4;
L_089F8CF4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_089F8D08:;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8D10;
L_089F8D10:;
    f1 = f0 * f0;
    ST32(s0+252, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0xe7d70000u;
    ST32(s0+256, FBITS(f1));
    a1 = a1 | 0x4cbf;
    a0 = LD32(sp);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8D30;
L_089F8D30:;
    ST32(s0+248, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0xfbf50000u;
    a0 = LD32(sp);
    a1 = a1 | 0x14ba;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8D48;
L_089F8D48:;
    ST32(s0+260, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0xab3a0000u;
    a0 = LD32(sp);
    a1 = a1 | 0xd22e;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8D60;
L_089F8D60:;
    ST32(s0+264, FBITS(f0));
    v1 = 1;
    goto L_089F8CF4;
}

/* 089F8D6C */
rv_t func_089F8D6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8D6C:;
    sp = sp - 16;
    v0 = 0x8072;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    t0 = 1;
    if (cnd_) { goto L_089F8DA0; }
    goto L_089F8D84;
L_089F8D84:;
    { rv_t r_ = func_08A01510(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8D8C;
L_089F8D8C:;
    t0 = v0 + 0;
    goto L_089F8D94;
L_089F8D94:;
    v0 = t0 + 0;
    goto L_089F8D98;
L_089F8D98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F8DA0:;
    v1 = LD32(a0+268);
    v0 = 999;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089F8D94; }
    goto L_089F8DB0;
L_089F8DB0:;
    v0 = LD32(a1+24);
    v1 = LD32(a0+280);
    a1 = LD32(v0);
    cnd_ = a1 == v1;
    v0 = t0 + 0;
    if (cnd_) { goto L_089F8D98; }
    goto L_089F8DC4;
L_089F8DC4:;
    v0 = LD32(a0+272);
    ST32(a0+268, a1);
    v0 = v0 | 0x2;
    ST32(a0+272, v0);
    goto L_089F8D94;
}

/* 089F8DD8 */
void func_089F8DD8(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8DD8:;
    sp = sp - 16;
    v0 = LD_U8(a0+276);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089F8EA4; }
    goto L_089F8DF4;
L_089F8DF4:;
    v1 = LD32(a0+136);
    v0 = 0x36220000u;
    v0 = v0 | 0x332a;
    cnd_ = v1 == v0;
    s1 = 2;
    if (cnd_) { goto L_089F8E28; }
    goto L_089F8E08;
L_089F8E08:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x8ee80000u;
    if (cnd_) { goto L_089F8EC0; }
    goto L_089F8E14;
L_089F8E14:;
    v0 = 0x2d0000u;
    v0 = v0 | 0xbece;
    cnd_ = v1 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089F8E28; }
    goto L_089F8E24;
L_089F8E24:;
    s1 = 2;
    goto L_089F8E28;
L_089F8E28:;
    v1 = LD32(s0);
    goto L_089F8E2C;
L_089F8E2C:;
    a0 = 0x8073;
    a1 = 8;
    v0 = LD32(v1-16);
    a3 = 0 + 0;
    v0 = s0 + v0;
    a2 = LD_U16(v0+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F8E48;
L_089F8E48:;
    a1 = LD32(s0);
    t0 = LD32(v0+24);
    a0 = v0 + 0;
    v1 = LD32(a1-16);
    ST32(t0+4, s1);
    a1 = 1;
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    a2 = 1;
    ST32(t0, a3);
    t1 = LD32(s0);
    t0 = LD32(v0+28);
    v1 = LD32(t1-16);
    t0 = t0 | 0x1;
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    ST32(v0+4, a3);
    v1 = LD32(s0+268);
    ST32(v0+28, t0);
    ST32(v0, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8E9C;
L_089F8E9C:;
    v0 = 1;
    ST8(s0+276, v0);
    goto L_089F8EA4;
L_089F8EA4:;
    sp = sp + 16;
    return;
L_089F8EB8:;
    s1 = 0 + 0;
    goto L_089F8E28;
L_089F8EC0:;
    v0 = v0 | 0xd26f;
    cnd_ = v1 == v0;
    v0 = 0xb7350000u;
    if (cnd_) { goto L_089F8EB8; }
    goto L_089F8ECC;
L_089F8ECC:;
    v0 = v0 | 0x25c;
    cnd_ = v1 != v0;
    s1 = 1;
    if (cnd_) { goto L_089F8E24; }
    goto L_089F8ED8;
L_089F8ED8:;
    v1 = LD32(s0);
    goto L_089F8E2C;
}

/* 089F8EE0 */
rv_t func_089F8EE0(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8EE0:;
    sp = sp - 16;
    v0 = 0x36220000u;
    v1 = 0xb7350000u;
    v0 = v0 | 0x332a;
    s0 = a0 + 0;
    a2 = 1;
    v1 = v1 | 0x25c;
    a3 = LD32(a0+136);
    cnd_ = a3 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_089F8F48; }
    goto L_089F8F14;
L_089F8F14:;
    cnd_ = a3 == v1;
    if (cnd_) { a1 = s1 + 0; goto L_089F8F30; }
    goto L_089F8F1C;
L_089F8F1C:;
    goto L_089F8F20;
L_089F8F20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F8F30:;
    a0 = s0 + 0;
    func_089F8F60(a0, a1);
    goto L_089F8F38;
L_089F8F38:;
    v0 = LD32(s0+272);
    v0 = v0 | 0x1;
    ST32(s0+272, v0);
    goto L_089F8F1C;
L_089F8F48:;
    { rv_t r_ = func_089F9408(a0, a1, a2, a3, t0, t1, t2, t3, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F8F50;
L_089F8F50:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F8F20; }
    goto L_089F8F58;
L_089F8F58:;
    a1 = s1 + 0;
    goto L_089F8F30;
}

/* 089F8F60 */
void func_089F8F60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F8F60:;
    sp = sp - 16;
    v1 = LD32(a1);
    f2 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a0+260));
    v0 = LD32(v1-12);
    a1 = a1 + v0;
    f0 = BITSF(LD32(a1+40));
    f12 = f0 + f1;
    fcc = FCMP(f12, f2, 14);
    cnd_ = fcc;
    a0 = a1 + 0;
    if (cnd_) { goto L_089F8F98; }
    goto L_089F8F94;
L_089F8F94:;
    f12 = f2;
    goto L_089F8F98;
L_089F8F98:;
    func_0886422C(a0, f12);
    goto L_089F8FA0;
L_089F8FA0:;
    sp = sp + 16;
    return;
}

/* 089F8FAC */
u32 func_089F8FAC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u32 t_;
L_089F8FAC:;
    a0 = a0 & 0xffff;
    a0 = a0 - 1000;
    v0 = a0 < 0x6u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089F8FE4; }
    goto L_089F8FC0;
L_089F8FC0:;
    v1 = D_08ADEAF0 - (-5392);
    v0 = a0 << 2;
    v1 = v1 - 5392;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089F8FDCu: goto L_089F8FDC; case 0x089F8FECu: goto L_089F8FEC; case 0x089F8FF8u: goto L_089F8FF8; case 0x089F9004u: goto L_089F9004; case 0x089F9010u: goto L_089F9010; case 0x089F901Cu: goto L_089F901C; default: rs_break(0, 0x089f8fd4); }
L_089F8FDC:;
    v1 = 0x2d0000u;
    v1 = v1 | 0xbece;
    goto L_089F8FE4;
L_089F8FE4:;
    v0 = v1 + 0;
    return v0;
L_089F8FEC:;
    v1 = 0xb7350000u;
    v1 = v1 | 0x25c;
    goto L_089F8FE4;
L_089F8FF8:;
    v1 = 0x8ee80000u;
    v1 = v1 | 0xd26f;
    goto L_089F8FE4;
L_089F9004:;
    v1 = 0x36220000u;
    v1 = v1 | 0x332a;
    goto L_089F8FE4;
L_089F9010:;
    v1 = 0xc8120000u;
    v1 = v1 | 0xe4c3;
    goto L_089F8FE4;
L_089F901C:;
    v1 = 0x330000u;
    v1 = v1 | 0xaf38;
    goto L_089F8FE4;
}

/* 089F9028 */
u32 func_089F9028(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_089F9028:;
    v0 = 0x36220000u;
    v0 = v0 | 0x332a;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_089F906C; }
    goto L_089F9038;
L_089F9038:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0xb7350000u;
    if (cnd_) { goto L_089F9074; }
    goto L_089F9044;
L_089F9044:;
    v0 = 0x2d0000u;
    v0 = v0 | 0xbece;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_089F906C; }
    goto L_089F9054;
L_089F9054:;
    v0 = 0x330000u;
    v0 = v0 | 0xaf38;
    goto L_089F905C;
L_089F905C:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_089F906C; }
    goto L_089F9064;
L_089F9064:;
    v0 = 0 + 0;
    return v0;
L_089F906C:;
    v0 = 1;
    return v0;
L_089F9074:;
    v0 = v0 | 0x25c;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_089F906C; }
    goto L_089F9080;
L_089F9080:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xc8120000u; goto L_089F9098; }
    goto L_089F908C;
L_089F908C:;
    v0 = 0x8ee80000u;
    v0 = v0 | 0xd26f;
    goto L_089F905C;
L_089F9098:;
    v0 = v0 | 0xe4c3;
    goto L_089F905C;
}

/* 089F90A0 */
rv_t func_089F90A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F90A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A005B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F90B4;
L_089F90B4:;
    v0 = LD_U8(s0+276);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089F90E4; }
    goto L_089F90C0;
L_089F90C0:;
    v1 = LD32(s0+268);
    v0 = 999;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F90F0; }
    goto L_089F90D0;
L_089F90D0:;
    func_089F8DD8(a0, 0, 0);
    goto L_089F90D8;
L_089F90D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_089F961C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F90E0;
L_089F90E0:;
    goto L_089F90E4;
L_089F90E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089F90F0:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+248));
    f0 = BITSF(0);
    f1 = f1 - f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(s0+248, FBITS(f1));
    if (cnd_) { goto L_089F90E0; }
    goto L_089F9114;
L_089F9114:;
    { u64 r_ = func_089F912C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F911C;
L_089F911C:;
    v0 = D_08AEF488 - (-2936);
    f0 = BITSF(LD32(v0-2936));
    ST32(s0+248, FBITS(f0));
    goto L_089F90E0;
}

/* 089F912C */
u64 func_089F912C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F912C:;
    sp = sp - 16;
    a1 = 0x2d0000u;
    v1 = 0x8ee80000u;
    a1 = a1 | 0xbece;
    v1 = v1 | 0xd26f;
    v0 = LD32(a0+136);
    v1 = v0 ^ v1;
    v0 = v0 ^ a1;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089F9178; }
    goto L_089F9168;
L_089F9168:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089F9178:;
    { u64 r_ = func_089F91A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9180;
L_089F9180:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F9168; }
    goto L_089F9188;
L_089F9188:;
    v0 = LD32(v0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    ST32(s0+268, v0);
    goto L_089F9168;
}

/* 089F91A0 */
u64 func_089F91A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F91A0:;
    sp = sp - 48;
    a2 = D_08C2A880 - (-22400);
    v1 = a2 - 22400;
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
    if (cnd_) { goto L_089F923C; }
    goto L_089F91F0;
L_089F91F0:;
    a2 = LD32(a2-22400);
    a3 = a1 + 0;
    goto L_089F91F8;
L_089F91F8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089F922C; }
    goto L_089F9210;
L_089F9210:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F9240; }
    goto L_089F9220;
L_089F9220:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089F9210; }
    goto L_089F922C;
L_089F922C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089F91F8; }
    goto L_089F923C;
L_089F923C:;
    v0 = LD32(sp+8);
    goto L_089F9240;
L_089F9240:;
    cnd_ = v0 == 0;
    s1 = 0xb7350000u;
    if (cnd_) { goto L_089F9288; }
    goto L_089F9248;
L_089F9248:;
    s0 = 0x36220000u;
    s0 = s0 | 0x332a;
    s1 = s1 | 0x25c;
    a0 = sp + 0;
    goto L_089F9258;
L_089F9258:;
    a1 = 1;
    s3 = LD32(v0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9264;
L_089F9264:;
    v0 = LD32(s2+136);
    a0 = s2 + 0;
    a1 = s3 + 0;
    cnd_ = v0 == s0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089F9350; }
    goto L_089F9278;
L_089F9278:;
    cnd_ = v0 == s1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F9350; }
    goto L_089F9280;
L_089F9280:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089F9258; }
    goto L_089F9288;
L_089F9288:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F9310; }
    goto L_089F929C;
L_089F929C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089F9310; }
    goto L_089F92A8;
L_089F92A8:;
    v0 = LD32(s1);
    goto L_089F92AC;
L_089F92AC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F9300; }
    goto L_089F92C0;
L_089F92C0:;
    v0 = LD_U8(s0+8);
    goto L_089F92C4;
L_089F92C4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F9348; }
    goto L_089F92CC;
L_089F92CC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F9338; }
    goto L_089F92D4;
L_089F92D4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F92DC;
L_089F92DC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F92E8;
L_089F92E8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F92F4;
L_089F92F4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F92C4; }
    goto L_089F92FC;
L_089F92FC:;
    v1 = LD32(s1+4);
    goto L_089F9300;
L_089F9300:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F92AC; }
    goto L_089F9310;
L_089F9310:;
    v0 = 0 + 0;
    goto L_089F9314;
L_089F9314:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089F9338:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089F92DC;
L_089F9348:;
    s0 = LD32(s0+4);
    goto L_089F92F4;
L_089F9350:;
    { rv_t r_ = func_089F9408(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9358;
L_089F9358:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089F9280; }
    goto L_089F9360;
L_089F9360:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089F93E8; }
    goto L_089F9374;
L_089F9374:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089F93E8; }
    goto L_089F9380;
L_089F9380:;
    v0 = LD32(s1);
    goto L_089F9384;
L_089F9384:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089F93D8; }
    goto L_089F9398;
L_089F9398:;
    v0 = LD_U8(s0+8);
    goto L_089F939C;
L_089F939C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089F9400; }
    goto L_089F93A4;
L_089F93A4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F93F0; }
    goto L_089F93AC;
L_089F93AC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089F93B4;
L_089F93B4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F93C0;
L_089F93C0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089F93CC;
L_089F93CC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089F939C; }
    goto L_089F93D4;
L_089F93D4:;
    v1 = LD32(s1+4);
    goto L_089F93D8;
L_089F93D8:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089F9384; }
    goto L_089F93E8;
L_089F93E8:;
    v0 = s3 + 0;
    goto L_089F9314;
L_089F93F0:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089F93B4;
L_089F9400:;
    s0 = LD32(s0+4);
    goto L_089F93CC;
}

/* 089F9408 */
rv_t func_089F9408(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089F9408:;
    sp = sp - 48;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089F9468; }
    goto L_089F942C;
L_089F942C:;
    v0 = LD_U8(a1+5);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089F946C; }
    goto L_089F9438;
L_089F9438:;
    v0 = LD_U8(a1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F9470; }
    goto L_089F9444;
L_089F9444:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = a1 + 0;
    if (cnd_) { goto L_089F9488; }
    goto L_089F9468;
L_089F9468:;
    a2 = 0 + 0;
    goto L_089F946C;
L_089F946C:;
    goto L_089F9470;
L_089F9470:;
    v0 = a2 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089F9488:;
    v0 = LD32(v1+168);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9494;
L_089F9494:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089F946C; }
    goto L_089F949C;
L_089F949C:;
    v1 = LD32(s0);
    f1 = BITSF(LD32(s0+8));
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a2 = 1;
    if (cnd_) { goto L_089F9468; }
    goto L_089F94C0;
L_089F94C0:;
    cnd_ = s2 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F946C; }
    goto L_089F94C8;
L_089F94C8:;
    v1 = LD32(v0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F94D8;
L_089F94D8:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F94F8;
L_089F94F8:;
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f1;
    f3 = f3 - f0;
    f6 = BITSF(LD32(s1+256));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    a2 = 1;
    fcc = FCMP(f0, f6, 14);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089F946C; }
    goto L_089F9560;
L_089F9560:;
    a2 = 0 + 0;
    goto L_089F946C;
}

/* 089F9568 */
rv_t func_089F9568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F9568:;
    sp = sp - 16;
    { rv_t r_ = func_08A01304(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9578;
L_089F9578:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F9584 */
rv_t func_089F9584(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089F9584:;
    return (rv_t){ v0, v1, f0 };
}

/* 089F958C */
rv_t func_089F958C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F958C:;
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x8070;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F95B0;
L_089F95B0:;
    t1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089F960C; }
    goto L_089F95C4;
L_089F95C4:;
    v1 = LD32(s0);
    a3 = LD32(v0+28);
    v0 = LD32(v1-16);
    a3 = a3 | 0x1;
    v1 = 2;
    v0 = s0 + v0;
    t0 = LD32(v0+4);
    ST32(t1, v1);
    ST32(t1+4, t0);
    ST32(t1+28, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F95F0;
L_089F95F0:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F960C;
L_089F960C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F961C */
rv_t func_089F961C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F961C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9648;
L_089F9648:;
    v1 = LD32(s0);
    a0 = 0x8071;
    a1 = 8;
    v0 = LD32(v1-16);
    a3 = 0 + 0;
    v0 = s0 + v0;
    a2 = LD_U16(v0+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9668;
L_089F9668:;
    t0 = LD32(v0+24);
    v1 = LD32(s0+268);
    a0 = v0 + 0;
    a1 = 1;
    ST32(t0, v1);
    a2 = 1;
    v1 = LD32(s0+272);
    ST32(t0+4, v1);
    a3 = LD32(s0);
    t0 = LD32(v0+28);
    v1 = LD32(a3-16);
    t0 = t0 | 0x1;
    s0 = s0 + v1;
    a3 = LD32(s0+4);
    v1 = 2;
    ST32(v0, v1);
    ST32(v0+4, a3);
    ST32(v0+28, t0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F96B4;
L_089F96B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F96C4 */
void func_089F96C4(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089F96C4:;
    sp = sp - 64;
    t4 = D_08B25AC0 - (23232);
    t5 = t4 + 23232;
    v1 = LD32(t4+23232);
    t0 = LD32(t5+4);
    t7 = D_08B45A9C - (23196);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + t0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEF490 - (-2928);
    t0 = t0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-2928));
    t8 = D_08AEF48C - (-2932);
    ST32(t5+4, t0);
    f1 = f1 * f0;
    t5 = a1 + 0;
    t0 = a2 + 0;
    t6 = D_08C2C008 - (-16376);
    fcc = FCMP(f12, f1, 12);
    t9 = t7 + 23196;
    a3 = sp + 32;
    t1 = 999;
    t2 = 0 + 0;
    t3 = 0 + 0;
    a2 = sp + 16;
    ST32(t4+23232, v1);
    a1 = a0 + 0;
    v0 = 0 + 0;
    cnd_ = fcc;
    f1 = BITSF(LD32(t8-2932));
    if (cnd_) { goto L_089F97C8; }
    goto L_089F9750;
L_089F9750:;
    v0 = LD_U8(t6-16376);
    f0 = BITSF(LD32(t5+4));
    f3 = BITSF(LD32(t5+8));
    t4 = v0 ^ 0x1;
    v1 = v0 + 0;
    v0 = D_08AEF498 - (-2920);
    f2 = BITSF(LD32(t5));
    ST32(sp+20, FBITS(f0));
    f4 = f3 - f1;
    f1 = f0;
    f0 = BITSF(LD32(v0-2920));
    f5 = BITSF(LD32(t7+23196));
    ST32(sp+16, FBITS(f2));
    f1 = f1 - f0;
    cnd_ = v1 != 0;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_089F979C; }
    goto L_089F9790;
L_089F9790:;
    v0 = D_08AEF494 - (-2924);
    f0 = BITSF(LD32(v0-2924));
    f4 = f3 - f0;
    goto L_089F979C;
L_089F979C:;
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(t9+8));
    f1 = BITSF(LD32(t9+4));
    f12 = BITSF(LD32(t8-2932));
    ST8(t6-16376, t4);
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f5));
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp, 0);
    func_08A01590(a0, a1, a2, a3, t0, t1, t2, t3, f12, sp);
    goto L_089F97C8;
L_089F97C8:;
    sp = sp + 64;
    return;
}

/* 089F97D4 */
u32 func_089F97D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F97D4:;
    sp = sp - 16;
    v0 = 0x330000u;
    v0 = v0 | 0xaf38;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089F9840; }
    goto L_089F9804;
L_089F9804:;
    v0 = 0xc8120000u;
    v0 = v0 | 0xe4c3;
    cnd_ = v1 == v0;
    a2 = D_08B25AC8 - (23240);
    if (cnd_) { goto L_089F985C; }
    goto L_089F9814;
L_089F9814:;
    a0 = 424;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F981C;
L_089F981C:;
    a1 = LD32(s1);
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = s2 + 0;
    func_089F8948(a0, a1, a2);
    goto L_089F9830;
L_089F9830:;
    a0 = s0 + 0;
    v0 = func_089F8CB0(a0);
    goto L_089F9838;
L_089F9838:;
    a0 = 0 + 0;
    if (v0 != 0) a0 = s0;
    goto L_089F9840;
L_089F9840:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_089F985C:;
    a3 = a2 + 23240;
    v0 = LD32(a2+23240);
    a1 = LD32(a3+4);
    goto L_089F9868;
L_089F9868:;
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    a0 = (v0 >> 1) & 0x3;
    cnd_ = a0 == 0;
    a1 = a1 + v0;
    if (cnd_) { goto L_089F9868; }
    goto L_089F9884;
L_089F9884:;
    ST32(a3+4, a1);
    a0 = a0 + 999;
    a0 = a0 & 0xffff;
    ST32(a2+23240, v0);
    v0 = func_089F8FAC(a0);
    goto L_089F9898;
L_089F9898:;
    ST32(s1, v0);
    goto L_089F9814;
}

/* 089F98A0 */
rv_t func_089F98A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089F98A0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F99C4; }
    goto L_089F98D4;
L_089F98D4:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF49C - (-2916);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2916));
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
    t0 = D_08C2BF48 - (-16568);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BF58 - (-16552);
    a3 = D_08C2BF68 - (-16536);
    v1 = t0 - 16568;
    a1 = v0 - 16552;
    a2 = a3 - 16536;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BFF8 - (-16392);
    s0 = s3 - 16392;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-16552, FBITS(f5));
    v0 = 4;
    ST32(t0-16568, FBITS(f1));
    ST32(a3-16536, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F998C;
L_089F998C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-16392, v0);
    if (cnd_) { goto L_089F99B8; }
    goto L_089F999C;
L_089F999C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089F99A4;
L_089F99A4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089F99A4; }
    goto L_089F99B8;
L_089F99B8:;
    v0 = s3 - 16392;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089F99C4;
L_089F99C4:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089F99E8; }
    goto L_089F99D8;
L_089F99D8:;
    v0 = D_08C2BFF8 - (-16392);
    a0 = LD32(v0-16392);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089F9A00; }
    goto L_089F99E8;
L_089F99E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089F9A00:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9A08;
L_089F9A08:;
    goto L_089F99E8;
}

/* 089F9A10 */
rv_t func_089F9A10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F9A10:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089F98A0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9A24;
L_089F9A24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F9A30 */
rv_t func_089F9A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F9A30:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089F98A0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9A44;
L_089F9A44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089F9A50 */
void func_089F9A50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089F9A50:;
    sp = sp - 128;
    v0 = D_08AEF4B8 - (-2888);
    v1 = D_08AEF4BC - (-2884);
    t4 = a0 + 48;
    t5 = D_08B45A9C - (23196);
    t6 = t5 + 23196;
    t7 = (u32)-1;
    t1 = t1 & 0x1;
    s2 = a1 + 0;
    s3 = a2 + 0;
    a2 = sp + 48;
    s0 = a0 + 0;
    s4 = t3 + 0;
    f20 = BITSF(LD32(v0-2888));
    f22 = BITSF(LD32(v1-2884));
    v0 = a0 + 36;
    ST32(a0+12, FBITS(f20));
    v1 = a0 + 60;
    ST32(a0+16, FBITS(f20));
    ST32(a0+32, FBITS(f22));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    v0 = 999;
    f1 = BITSF(LD32(a1+8));
    ST32(a0+36, FBITS(f0));
    f2 = BITSF(LD32(a1+4));
    ST32(t4+8, FBITS(f1));
    ST32(t4+4, FBITS(f2));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(t6+4));
    ST32(s0+4, a3);
    a1 = t2 + 0;
    ST32(a0+48, FBITS(f0));
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    f0 = BITSF(LD32(t6+8));
    f2 = BITSF(LD32(t5+23196));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(s0+124, v0);
    v0 = D_08AEF4C0 - (-2880);
    f21 = BITSF(LD32(v0-2880));
    ST32(s0+136, t1);
    ST32(s0+8, t0);
    ST32(s0+28, t7);
    ST32(s0+60, FBITS(f2));
    ST32(s0+20, t2);
    ST32(s0+24, t7);
    ST32(s0, 0);
    ST32(s0+112, 0);
    ST32(s0+116, 0);
    ST32(s0+120, 0);
    ST32(s0+128, 0);
    ST32(s0+132, FBITS(f21));
    ST8(s0+104, 0);
    ST32(s0+76, 0);
    ST32(sp+48, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9B70;
L_089F9B70:;
    v0 = D_08AEF4C4 - (-2876);
    f12 = BITSF(LD32(v0-2876));
    a0 = LD32(sp+48);
    a1 = 0xbe0e0000u;
    a1 = a1 | 0x3ae6;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9B88;
L_089F9B88:;
    v0 = D_08AEF4C8 - (-2872);
    f12 = BITSF(LD32(v0-2872));
    a0 = LD32(sp+48);
    a1 = 0x6740000u;
    a1 = a1 | 0x393d;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9BA4;
L_089F9BA4:;
    a0 = LD32(sp+48);
    a1 = 0x22300000u;
    f12 = f22;
    a1 = a1 | 0x3f45;
    f24 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9BBC;
L_089F9BBC:;
    ST32(s0+32, FBITS(f0));
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    a0 = LD32(sp+48);
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9BD4;
L_089F9BD4:;
    ST32(s0+12, FBITS(f0));
    a1 = 0xbdde0000u;
    f12 = f20;
    a0 = LD32(sp+48);
    a1 = a1 | 0x31c2;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9BEC;
L_089F9BEC:;
    ST32(s0+16, FBITS(f0));
    f12 = BITSF(0);
    a0 = LD32(sp+48);
    a1 = 0x1cae0000u;
    a1 = a1 | 0xaad8;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9C04;
L_089F9C04:;
    ST32(s0+128, FBITS(f0));
    a1 = 0x79f70000u;
    f12 = f21;
    a0 = LD32(sp+48);
    a1 = a1 | 0x1258;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9C1C;
L_089F9C1C:;
    ST32(s0+132, FBITS(f0));
    a0 = LD32(s0+20);
    v0 = func_089FBC4C(a0);
    goto L_089F9C28;
L_089F9C28:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089F9E18; }
    goto L_089F9C30;
L_089F9C30:;
    f3 = BITSF(LD32(s3));
    goto L_089F9C34;
L_089F9C34:;
    f4 = BITSF(LD32(s3+4));
    f5 = BITSF(LD32(s3+8));
    f3 = f3 * f23;
    f4 = f4 * f23;
    f5 = f5 * f23;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f0 = f0 + f3;
    f1 = f1 + f4;
    f2 = f2 + f5;
    a0 = s2 + 0;
    a2 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    v0 = func_089FBC74(a0, a1, a2);
    goto L_089F9C88;
L_089F9C88:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089F9CBC; }
    goto L_089F9C90;
L_089F9C90:;
    v0 = LD32(v0+72);
    v1 = LD32(a0+4);
    ST32(a0+68, FBITS(f23));
    v0 = v0 | 0x2;
    a1 = s2 + 0;
    ST32(a0+72, v0);
    a2 = s3 + 0;
    f12 = f24;
    ST32(s0+24, v1);
    a0 = s0 + 0;
    func_089FAB30(a0, a1, a2, f12);
    goto L_089F9CBC;
L_089F9CBC:;
    a0 = LD32(sp+48);
    a1 = 0x87ba0000u;
    a1 = a1 | 0x7997;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9CD0;
L_089F9CD0:;
    v1 = LD32(s0+136);
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    ST32(s0+136, v1);
    if (cnd_) { goto L_089F9D1C; }
    goto L_089F9CE4;
L_089F9CE4:;
    ST32(s0, s4);
    goto L_089F9CE8;
L_089F9CE8:;
    sp = sp + 128;
    return;
L_089F9D1C:;
    f12 = BITSF(0);
    a0 = LD32(sp+48);
    a1 = 0x7dc30000u;
    a1 = a1 | 0x5ac4;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9D30;
L_089F9D30:;
    ST32(s0+112, FBITS(f0));
    f12 = BITSF(0);
    a0 = LD32(sp+48);
    a1 = 0x95a30000u;
    a1 = a1 | 0x3be7;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9D48;
L_089F9D48:;
    ST32(s0+116, FBITS(f0));
    a1 = 0xc8d60000u;
    a1 = a1 | 0x2a0d;
    a0 = LD32(sp+48);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9D60;
L_089F9D60:;
    ST32(s0+120, v0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    a0 = LD32(s0+20);
    { rv_t r_ = func_088E9FDC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9D74;
L_089F9D74:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+20); goto L_089F9E10; }
    goto L_089F9D7C;
L_089F9D7C:;
    v0 = LD32(s0+120);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, s4); goto L_089F9CE8; }
    goto L_089F9D88;
L_089F9D88:;
    a0 = LD32(sp+48);
    a1 = 0xaf3e0000u;
    a1 = a1 | 0xbdcc;
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089F9D9C;
L_089F9D9C:;
    v1 = v0 >> 24;
    f6 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f1 = BITSF(v1);
    f2 = BITSF(v0);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f5 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f6);
    v0 = D_08AEF4CC - (-2868);
    f0 = BITSF(LD32(v0-2868));
    a0 = LD32(s0+120);
    a1 = LD32(s0+20);
    f1 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    a2 = sp + 32;
    ST32(sp+40, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+32, FBITS(f5));
    ST32(sp+44, FBITS(f1));
    v0 = func_089FB4AC(a0, a1, a2, 0, 0, 0);
    goto L_089F9E04;
L_089F9E04:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, s4); goto L_089F9CE8; }
    goto L_089F9E0C;
L_089F9E0C:;
    v0 = LD32(s0+20);
    goto L_089F9E10;
L_089F9E10:;
    ST32(s0+120, v0);
    goto L_089F9CE4;
L_089F9E18:;
    a0 = LD32(s0+20);
    v0 = func_089FBB54(a0, 0, 0, 0);
    goto L_089F9E20;
L_089F9E20:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    s1 = v0 + 0;
    func_089FB2F0(a0, a1);
    goto L_089F9E30;
L_089F9E30:;
    f3 = BITSF(LD32(s3));
    goto L_089F9C34;
}

/* 089F9E38 */
void func_089F9E38(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089F9E38:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+28);
    cnd_ = v0 == s1;
    a0 = a0 + 28;
    if (cnd_) { goto L_089F9E64; }
    goto L_089F9E5C;
L_089F9E5C:;
    { rv_t r_ = func_088DFEC0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089F9E64;
L_089F9E64:;
    v0 = LD32(s0+24);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089F9E78; }
    goto L_089F9E70;
L_089F9E70:;
    func_089FAE50(a0);
    goto L_089F9E78;
L_089F9E78:;
    sp = sp + 16;
    return;
}

/* 089F9E8C */
void func_089F9E8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_089F9E8C:;
    sp = sp - 160;
    s5 = sp + 0;
    s4 = 0 + 0;
    s1 = a0 + 0;
    a0 = LD32(a0+24);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089F9EC4;
L_089F9EC4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089FA164; }
    goto L_089F9ECC;
L_089F9ECC:;
    cnd_ = s0 == 0;
    s2 = s1 + 36;
    if (cnd_) { goto L_089FA07C; }
    goto L_089F9ED4;
L_089F9ED4:;
    f2 = BITSF(LD32(s1+36));
    f0 = BITSF(LD32(s2+4));
    f1 = BITSF(LD32(s2+8));
    v0 = s1 + 48;
    ST32(v0+4, FBITS(f0));
    s3 = D_08AEF4D0 - (-2864);
    v1 = s0 + 56;
    ST32(v0+8, FBITS(f1));
    a0 = s0 + 44;
    f7 = BITSF(0);
    ST32(s1+48, FBITS(f2));
    f4 = BITSF(LD32(s3-2864));
    f0 = BITSF(LD32(s0+68));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f0 = f0 * f4;
    f3 = BITSF(LD32(s0+56));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    ST32(sp+72, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    f0 = BITSF(LD32(a0+8));
    f4 = BITSF(LD32(a0+4));
    ST32(sp+64, FBITS(f3));
    f5 = f0 + f1;
    f4 = f4 + f2;
    f0 = BITSF(LD32(s0+44));
    ST32(s2+8, FBITS(f5));
    f3 = f0 + f3;
    ST32(s2+4, FBITS(f4));
    f6 = BITSF(LD32(s1+128));
    ST32(sp+48, FBITS(f3));
    fcc = FCMP(f7, f6, 12);
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    cnd_ = !fcc;
    ST32(s1+36, FBITS(f3));
    if (cnd_) { goto L_089FA02C; }
    goto L_089F9F6C;
L_089F9F6C:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = D_08AEF4D4 - (-2860);
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    ST32(sp+72, FBITS(f2));
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f1);
    {v[1]=BITSF(v1);}
    v1 = FBITS(f2);
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f1 = f0 / f6;
    fcc = FCMP(f1, f7, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(v0-2860));
    if (cnd_) { goto L_089F9FF0; }
    goto L_089F9FDC;
L_089F9FDC:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f7 = f0;
    if (cnd_) { goto L_089F9FF0; }
    goto L_089F9FEC;
L_089F9FEC:;
    f7 = f1;
    goto L_089F9FF0;
L_089F9FF0:;
    f1 = BITSF(LD32(s1+132));
    f2 = BITSF(LD32(s3-2864));
    f3 = BITSF(LD32(v0-2860));
    f0 = f7 * f1;
    f1 = f1 * f2;
    a0 = sp + 80;
    a1 = sp + 84;
    f0 = f0 * f2;
    a2 = sp + 88;
    ST32(sp+84, FBITS(f3));
    ST32(sp+80, FBITS(f0));
    ST32(sp+88, FBITS(f1));
    f0 = func_089FC0E0(a0, a1, a2);
    goto L_089FA024;
L_089FA024:;
    ST32(s0+12, FBITS(f0));
    ST32(s0+8, FBITS(f0));
    goto L_089FA02C;
L_089FA02C:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA034;
L_089FA034:;
    v1 = LD32(s1+8);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+136); goto L_089FA070; }
    goto L_089FA040;
L_089FA040:;
    f12 = BITSF(LD32(s1+32));
    a0 = s2 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA04C;
L_089FA04C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+28); goto L_089FA148; }
    goto L_089FA054;
L_089FA054:;
    a0 = LD32(s1+28);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    s0 = D_08C2C068 - (-16280);
    if (cnd_) { goto L_089FA0D0; }
    goto L_089FA064;
L_089FA064:;
    a1 = s2 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA06C;
L_089FA06C:;
    v0 = LD32(s1+136);
    goto L_089FA070;
L_089FA070:;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089FA0C0; }
    goto L_089FA07C;
L_089FA07C:;
    a0 = s1 + 0;
    cnd_ = s4 != 0;
    a1 = s5 + 0;
    if (cnd_) { goto L_089FA0B0; }
    goto L_089FA088;
L_089FA088:;
    goto L_089FA08C;
L_089FA08C:;
    sp = sp + 160;
    return;
L_089FA0B0:;
    func_089FA66C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FA0B8;
L_089FA0B8:;
    goto L_089FA08C;
L_089FA0C0:;
    a1 = sp + 0;
    { u64 r_ = func_089FA30C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA0C8;
L_089FA0C8:;
    s4 = v0 + 0;
    goto L_089FA07C;
L_089FA0D0:;
    f1 = BITSF(LD32(s0-16280));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+136); goto L_089FA070; }
    goto L_089FA0E8;
L_089FA0E8:;
    a1 = LD32(s1+20);
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    a2 = sp + 92;
    ST32(sp+92, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA100;
L_089FA100:;
    a1 = 0x22440000u;
    a0 = LD32(sp+92);
    a2 = 0xe5340000u;
    a2 = a2 | 0x9b3e;
    a1 = a1 | 0xcf17;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA118;
L_089FA118:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA124;
L_089FA124:;
    a0 = v0 + 0;
    v0 = D_08AEF4D4 - (-2860);
    f12 = BITSF(LD32(v0-2860));
    a1 = s1 + 28;
    a2 = s2 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA13C;
L_089FA13C:;
    f0 = BITSF(LD32(s3-2864));
    ST32(s0-16280, FBITS(f0));
    goto L_089FA06C;
L_089FA148:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+136); goto L_089FA070; }
    goto L_089FA154;
L_089FA154:;
    a0 = s1 + 28;
    { rv_t r_ = func_088DFEC0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA15C;
L_089FA15C:;
    v0 = LD32(s1+136);
    goto L_089FA070;
L_089FA164:;
    v0 = LD32(s1+76);
    s4 = 1;
    cnd_ = v0 != 0;
    s5 = s1 + 72;
    if (cnd_) { goto L_089F9ECC; }
    goto L_089FA174;
L_089FA174:;
    a0 = s1 + 36;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+8));
    v0 = s1 + 48;
    ST32(v0+4, FBITS(f0));
    v1 = s1 + 60;
    ST32(v0+8, FBITS(f1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(s1+36));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    v0 = LD32(s1+136);
    f0 = BITSF(LD32(s1+60));
    ST32(s1+48, FBITS(f2));
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    ST32(s1+36, FBITS(f0));
    if (cnd_) { goto L_089FA2EC; }
    goto L_089FA1BC;
L_089FA1BC:;
    v1 = LD_U8(s1+104);
    goto L_089FA1C0;
L_089FA1C0:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+136); goto L_089FA1D8; }
    goto L_089FA1C8;
L_089FA1C8:;
    v0 = LD32(s1+76);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FA20C; }
    goto L_089FA1D4;
L_089FA1D4:;
    v0 = LD32(s1+136);
    goto L_089FA1D8;
L_089FA1D8:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089FA1FC; }
    goto L_089FA1E4;
L_089FA1E4:;
    cnd_ = v1 == 0;
    a1 = s1 + 72;
    if (cnd_) { goto L_089FA200; }
    goto L_089FA1EC;
L_089FA1EC:;
    a0 = LD_U16(s1+88);
    v0 = a0 & 0x300;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089FA21C; }
    goto L_089FA1FC;
L_089FA1FC:;
    a1 = s1 + 72;
    goto L_089FA200;
L_089FA200:;
    a2 = s2 + 0;
    a0 = s1 + 0;
    func_089FAE94(a0, a1, a2);
    goto L_089FA20C;
L_089FA20C:;
    a0 = s1 + 0;
    func_089FB164(a0, 0, 0);
    goto L_089FA214;
L_089FA214:;
    goto L_089FA08C;
L_089FA21C:;
    v0 = func_089EC244(a0, 0, 0, 0);
    goto L_089FA224;
L_089FA224:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089FA1FC; }
    goto L_089FA22C;
L_089FA22C:;
    v1 = LD32(v0);
    f20 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    a1 = s1 + 72;
    if (cnd_) { goto L_089FA200; }
    goto L_089FA250;
L_089FA250:;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA25C;
L_089FA25C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    a1 = s1 + 72;
    if (cnd_) { goto L_089FA200; }
    goto L_089FA26C;
L_089FA26C:;
    a0 = 0x8053;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA280;
L_089FA280:;
    s4 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = 1;
    if (cnd_) { goto L_089FA1FC; }
    goto L_089FA28C;
L_089FA28C:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089FA298;
L_089FA298:;
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s1+16));
    a0 = s4 + 0;
    ST32(s0+4, v0);
    a1 = 1;
    a2 = 1;
    v1 = LD32(s1+8);
    ST32(s0+12, FBITS(f0));
    ST32(s0+8, v1);
    v0 = LD32(s1);
    ST32(s0, v0);
    v1 = LD32(s3);
    v0 = LD32(v1-16);
    v0 = s3 + v0;
    v1 = LD32(v0+4);
    ST32(s4, v1);
    v0 = LD32(s1+4);
    ST32(s4+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA2E4;
L_089FA2E4:;
    a1 = s1 + 72;
    goto L_089FA200;
L_089FA2EC:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { u64 r_ = func_089FA30C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA2F8;
L_089FA2F8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s1+104); goto L_089FA1C0; }
    goto L_089FA300;
L_089FA300:;
    a0 = s1 + 0;
    a1 = sp + 0;
    goto L_089FA0B0;
}

/* 089FA30C */
u64 func_089FA30C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_089FA30C:;
    sp = sp - 192;
    v0 = a0 + 36;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    s2 = a0 + 48;
    f12 = BITSF(0);
    s3 = a1 + 0;
    s1 = a0 + 0;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(a0+48));
    f6 = BITSF(LD32(s2+4));
    f7 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(a0+36));
    f3 = f3 - f6;
    f4 = f4 - f7;
    f2 = f2 - f5;
    ST32(sp, FBITS(f5));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+4, FBITS(f6));
    fcc = FCMP(f0, f12, 2);
    ST32(sp+8, FBITS(f7));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089FA3EC; }
    goto L_089FA3A8;
L_089FA3A8:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f12 = BITSF(v0);
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
    goto L_089FA3EC;
L_089FA3EC:;
    a3 = LD32(s1+4);
    s0 = sp + 48;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = sp + 16;
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089FA404;
L_089FA404:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_089DD5B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA410;
L_089FA410:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089FA5C0; }
    goto L_089FA418;
L_089FA418:;
    s4 = s1 + 60;
    f0 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s2+8));
    f3 = BITSF(LD32(s1+48));
    f5 = BITSF(LD32(s1+60));
    f2 = BITSF(LD32(s2+4));
    f1 = BITSF(LD32(s4+8));
    f7 = BITSF(LD32(s3));
    f2 = f2 - f0;
    f3 = f3 - f5;
    f4 = f4 - f1;
    f6 = f7 * f7;
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f3));
    fcc = FCMP(f6, f0, 12);
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    cnd_ = !fcc;
    a2 = LD32(s3+4);
    if (cnd_) { goto L_089FA664; }
    goto L_089FA488;
L_089FA488:;
    a1 = D_08C2B3A4 - (-19548);
    v0 = 999;
    v1 = a1 - 19548;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089FA4EC; }
    goto L_089FA49C;
L_089FA49C:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { a3 = LD32(s1+8); goto L_089FA4F0; }
    goto L_089FA4C0;
L_089FA4C0:;
    a0 = LD32(a1);
    goto L_089FA4C4;
L_089FA4C4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089FA644; }
    goto L_089FA4DC;
L_089FA4DC:;
    a1 = LD32(a1+4);
    goto L_089FA4E0;
L_089FA4E0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089FA4C4; }
    goto L_089FA4E8;
L_089FA4E8:;
    a0 = 0 + 0;
    goto L_089FA4EC;
L_089FA4EC:;
    a3 = LD32(s1+8);
    goto L_089FA4F0;
L_089FA4F0:;
    a1 = D_08C29F04 - (-24828);
    v0 = 999;
    v1 = a1 - 24828;
    cnd_ = a3 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089FA554; }
    goto L_089FA504;
L_089FA504:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24828);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v0 = 0 < a0;
    if (cnd_) { goto L_089FA558; }
    goto L_089FA528;
L_089FA528:;
    a1 = LD32(a2);
    goto L_089FA52C;
L_089FA52C:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089FA624; }
    goto L_089FA544;
L_089FA544:;
    a2 = LD32(a2+4);
    goto L_089FA548;
L_089FA548:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_089FA52C; }
    goto L_089FA550;
L_089FA550:;
    s0 = 0 + 0;
    goto L_089FA554;
L_089FA554:;
    v0 = 0 < a0;
    goto L_089FA558;
L_089FA558:;
    v1 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089FA5E0; }
    goto L_089FA568;
L_089FA568:;
    f5 = BITSF(LD32(sp+60));
    f4 = BITSF(LD32(sp+64));
    f3 = BITSF(LD32(sp+68));
    f5 = f5 * f7;
    f4 = f4 * f7;
    f3 = f3 * f7;
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    v0 = 1;
    ST32(s1+60, FBITS(f2));
    ST32(s4+8, FBITS(f0));
    ST32(s4+4, FBITS(f1));
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f4));
    ST32(sp+136, FBITS(f3));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    goto L_089FA5C0;
L_089FA5C0:;
    sp = sp + 192;
    return (u64)v0 | ((u64)v1 << 32);
L_089FA5E0:;
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA5EC;
L_089FA5EC:;
    v1 = LD32(s0+64);
    cnd_ = v0 == v1;
    v0 = D_08C29338 - (-27848);
    if (cnd_) { goto L_089FA600; }
    goto L_089FA5F8;
L_089FA5F8:;
    f7 = BITSF(LD32(s3));
    goto L_089FA568;
L_089FA600:;
    v1 = LD_U8(v0-27848);
    cnd_ = v1 == 0;
    v1 = LD32(s1+136);
    if (cnd_) { goto L_089FA618; }
    goto L_089FA60C;
L_089FA60C:;
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { f7 = BITSF(LD32(s3)); goto L_089FA568; }
    goto L_089FA618;
L_089FA618:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+136, v1);
    goto L_089FA5F8;
L_089FA624:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089FA544; }
    goto L_089FA630;
L_089FA630:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089FA548; }
    goto L_089FA63C;
L_089FA63C:;
    v0 = 0 < a0;
    goto L_089FA558;
L_089FA644:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FA4E0; }
    goto L_089FA650;
L_089FA650:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FA4E0; }
    goto L_089FA65C;
L_089FA65C:;
    a3 = LD32(s1+8);
    goto L_089FA4F0;
L_089FA664:;
    v0 = 0 + 0;
    goto L_089FA5C0;
}

/* 089FA66C */
void func_089FA66C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FA66C:;
    sp = sp - 32;
    s4 = a1 + 0;
    s0 = LD32(a1+4);
    v0 = LD32(a0+4);
    cnd_ = s0 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089FA740; }
    goto L_089FA6A0;
L_089FA6A0:;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    v1 = a0 - 15872;
    cnd_ = s0 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089FA704; }
    goto L_089FA6B4;
L_089FA6B4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s1+136); goto L_089FA708; }
    goto L_089FA6D8;
L_089FA6D8:;
    a0 = LD32(a1);
    goto L_089FA6DC;
L_089FA6DC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_089FA808; }
    goto L_089FA6F4;
L_089FA6F4:;
    a1 = LD32(a1+4);
    goto L_089FA6F8;
L_089FA6F8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089FA6DC; }
    goto L_089FA700;
L_089FA700:;
    s3 = 0 + 0;
    goto L_089FA704;
L_089FA704:;
    v0 = LD32(s1+136);
    goto L_089FA708;
L_089FA708:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0x8001; goto L_089FA764; }
    goto L_089FA714;
L_089FA714:;
    cnd_ = s3 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089FA728; }
    goto L_089FA71C;
L_089FA71C:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A04F20(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA724;
L_089FA724:;
    a2 = 0 < v0;
    goto L_089FA728;
L_089FA728:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    func_089FAE94(a0, a1, a2);
    goto L_089FA734;
L_089FA734:;
    ST32(s1+124, s0);
    a0 = s1 + 0;
    func_089FB164(a0, 0, 0);
    goto L_089FA740;
L_089FA740:;
    sp = sp + 32;
    return;
L_089FA764:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA774;
L_089FA774:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_089FA714; }
    goto L_089FA77C;
L_089FA77C:;
    s2 = LD32(v0+24);
    cnd_ = s2 == 0;
    if (cnd_) { ST32(s5, s0); goto L_089FA7E8; }
    goto L_089FA788;
L_089FA788:;
    a0 = s2 + 0;
    func_0897A7BC(a0);
    goto L_089FA790;
L_089FA790:;
    cnd_ = s3 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+16)); goto L_089FA7B8; }
    goto L_089FA798;
L_089FA798:;
    v1 = LD32(s3);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s3 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { f0 = BITSF(LD32(s1+12)); goto L_089FA7B8; }
    goto L_089FA7B4;
L_089FA7B4:;
    f0 = BITSF(LD32(s1+16));
    goto L_089FA7B8;
L_089FA7B8:;
    v1 = LD32(s1+4);
    ST32(s2+12, FBITS(f0));
    ST32(s2+4, v1);
    v0 = LD32(s1+8);
    ST32(s2+8, v0);
    v1 = LD32(s4+8);
    ST32(s2+20, v1);
    v0 = LD32(s4+12);
    ST32(s2+16, v0);
    v1 = LD32(s1);
    ST32(s2, v1);
    ST32(s5, s0);
    goto L_089FA7E8;
L_089FA7E8:;
    a0 = s5 + 0;
    a1 = 1;
    v0 = LD32(s1+4);
    a2 = 1;
    ST32(s5+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA800;
L_089FA800:;
    goto L_089FA714;
L_089FA808:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_089FA6F4; }
    goto L_089FA814;
L_089FA814:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FA6F8; }
    goto L_089FA820;
L_089FA820:;
    v0 = LD32(s1+136);
    goto L_089FA708;
}

/* 089FA828 */
void func_089FA828(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089FA828:;
    sp = sp - 128;
    s4 = a2 + 0;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a0 = LD32(a0+24);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA864;
L_089FA864:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089FAA14; }
    goto L_089FA86C;
L_089FA86C:;
    a1 = LD32(s2+20);
    a0 = 0x5f6b0000u;
    a2 = sp + 48;
    a0 = a0 | 0x9be0;
    ST32(sp+48, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA884;
L_089FA884:;
    v0 = D_08AEF4D8 - (-2856);
    f12 = BITSF(LD32(v0-2856));
    a0 = LD32(sp+48);
    a1 = 0x6740000u;
    a1 = a1 | 0x393d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA89C;
L_089FA89C:;
    v0 = s1 + 56;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f21 = f0;
    f0 = BITSF(LD32(s1+56));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = D_08AEF4DC - (-2852);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f20 = BITSF(0);
    f12 = BITSF(LD32(v0-2852));
    s3 = sp + 16;
    a0 = s3 + 0;
    a1 = sp + 0;
    f13 = f20;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    func_088F7EAC(a0, a1, f12, f13);
    goto L_089FA8E8;
L_089FA8E8:;
    a1 = D_08B25AC8 - (23240);
    v0 = LD32(a1+23240);
    a2 = a1 + 23240;
    f0 = BITSF(LD32(sp+16));
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    ST32(sp, FBITS(f0));
    v0 = v0 + v1;
    v1 = v1 + v0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    a0 = (v0 >> 1) & 0x3;
    ST32(a2+4, v1);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    cnd_ = a0 == 0;
    ST32(a1+23240, v0);
    if (cnd_) { goto L_089FAA40; }
    goto L_089FA934;
L_089FA934:;
    f7 = BITSF(LD32(s0));
    f6 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s0+8));
    s5 = D_08C2B3A4 - (-19548);
    goto L_089FA944;
L_089FA944:;
    v0 = D_08AEF4E0 - (-2848);
    f0 = BITSF(LD32(v0-2848));
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    a0 = D_08ADEB08 - (-5368);
    f4 = f7 + f3;
    f0 = f6 + f2;
    f5 = f5 + f1;
    a0 = a0 - 5368;
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA994;
L_089FA994:;
    v1 = D_08AEF4E4 - (-2844);
    f12 = BITSF(LD32(v1-2844));
    a2 = D_08C29E74 - (-24972);
    a1 = sp + 32;
    a2 = a2 - 24972;
    a3 = v0 + 0;
    a0 = s0 + 0;
    func_0897BFA8(a0, a1, a2, a3, f12);
    goto L_089FA9B4;
L_089FA9B4:;
    ST32(s2+4, s4);
    a0 = s5 - 19548;
    a1 = s4 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FA9C8;
L_089FA9C8:;
    cnd_ = v0 == 0;
    v1 = 999;
    if (cnd_) { goto L_089FA9E8; }
    goto L_089FA9D0;
L_089FA9D0:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FA9E4;
L_089FA9E4:;
    v1 = v0 + 0;
    goto L_089FA9E8;
L_089FA9E8:;
    ST32(s2+8, v1);
    a0 = s2 + 0;
    f12 = f21;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_089FAB30(a0, a1, a2, f12);
    goto L_089FAA00;
L_089FAA00:;
    f12 = BITSF(LD32(s1+68));
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_088EB7DC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FAA14;
L_089FAA14:;
    sp = sp + 128;
    return;
L_089FAA40:;
    a1 = LD32(s2+4);
    s5 = D_08C2B3A4 - (-19548);
    a0 = s5 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAA54;
L_089FAA54:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FAB20; }
    goto L_089FAA5C;
L_089FAA5C:;
    v0 = LD32(v0);
    a1 = s3 + 0;
    f12 = f20;
    v1 = LD32(v0+56);
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FAA74;
L_089FAA74:;
    f7 = BITSF(LD32(s0));
    f6 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f4 = f4 - f7;
    f3 = f3 - f6;
    f2 = f2 - f5;
    {u32 a_=sp+(64);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f2));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_089FA944; }
    goto L_089FAAE0;
L_089FAAE0:;
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
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_089FA944;
L_089FAB20:;
    f7 = BITSF(LD32(s0));
    f6 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s0+8));
    goto L_089FA944;
}

/* 089FAB30 */
void func_089FAB30(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_089FAB30:;
    sp = sp - 256;
    s7 = a2 + 0;
    s5 = a1 + 0;
    s2 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+24);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAB74;
L_089FAB74:;
    cnd_ = v0 == 0;
    s6 = v0 + 0;
    if (cnd_) { goto L_089FADE4; }
    goto L_089FAB7C;
L_089FAB7C:;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a1 = s5 + 0;
    if (cnd_) { goto L_089FADE4; }
    goto L_089FAB88;
L_089FAB88:;
    a3 = LD32(s2+4);
    a2 = s7 + 0;
    f12 = f20;
    a0 = sp + 0;
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089FAB9C;
L_089FAB9C:;
    a0 = sp + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FABA4;
L_089FABA4:;
    s4 = D_08C2B3A4 - (-19548);
    s1 = v0 + 0;
    v0 = s4 - 19548;
    s0 = LD32(v0+12);
    s3 = (u32)-1;
    goto L_089FABB8;
L_089FABB8:;
    s0 = s0 - 1;
    a0 = s4 - 19548;
    cnd_ = s0 == s3;
    a2 = 1;
    if (cnd_) { goto L_089FAC54; }
    goto L_089FABC8;
L_089FABC8:;
    a1 = LD32(s1+4);
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FABD0;
L_089FABD0:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089FAC54; }
    goto L_089FABD8;
L_089FABD8:;
    v0 = LD32(s2+136);
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+12));
    v0 = v0 | 0x4;
    f4 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    ST32(s2+136, v0);
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(sp+8));
    v0 = LD32(s1+4);
    f5 = f5 * f0;
    f2 = f2 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(sp+4));
    f1 = f1 + f5;
    f3 = f3 + f2;
    f0 = f0 + f4;
    ST32(sp+64, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f5));
    f0 = BITSF(LD32(sp+40));
    f1 = BITSF(LD32(s1));
    ST32(sp+36, v0);
    f0 = f0 - f1;
    ST32(sp+40, FBITS(f0));
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FAC4C;
L_089FAC4C:;
    s1 = v0 + 0;
    goto L_089FABB8;
L_089FAC54:;
    v1 = LD32(s2+136);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    v0 = v1 | 0x2;
    if (cnd_) { goto L_089FAE14; }
    goto L_089FAC64;
L_089FAC64:;
    ST32(s2+136, v0);
    goto L_089FAC68;
L_089FAC68:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f5 = f5 + f1;
    f4 = f4 + f2;
    f0 = f0 + f3;
    v0 = s2 + 60;
    ST32(s2+60, FBITS(f5));
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f4));
    f3 = BITSF(LD32(s5+8));
    f1 = BITSF(LD32(s5));
    f2 = BITSF(LD32(s5+4));
    f3 = f3 - f0;
    f1 = f1 - f5;
    f2 = f2 - f4;
    ST32(sp+68, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+72, FBITS(f0));
    ST32(sp+64, FBITS(f5));
    ST32(sp+144, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(sp+148, FBITS(f2));
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    ST32(sp+152, FBITS(f3));
    f2 = BITSF(LD32(s6+68));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f4 = f2; goto L_089FAD20; }
    goto L_089FAD20;
L_089FAD20:;
    v1 = LD32(s6);
    f1 = f0 - f4;
    v0 = D_08AEF4EC - (-2836);
    f0 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v0-2836));
    f0 = f1 / f0;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = f0; goto L_089FAD48; }
    goto L_089FAD48;
L_089FAD48:;
    t4 = LD_U8(s1+32);
    cnd_ = t4 != 0;
    t3 = LD32(s1+4);
    if (cnd_) { goto L_089FAD5C; }
    goto L_089FAD54;
L_089FAD54:;
    cnd_ = t3 == 0;
    if (cnd_) { goto L_089FADC0; }
    goto L_089FAD5C;
L_089FAD5C:;
    f0 = BITSF(LD32(s1));
    v1 = s1 + 20;
    t2 = LD32(s1+36);
    ST32(s2+72, FBITS(f0));
    v0 = s2 + 72;
    t1 = s2 + 92;
    f1 = BITSF(LD32(v1+8));
    a0 = LD32(s1+8);
    a1 = LD32(s1+12);
    a2 = LD_U16(s1+16);
    a3 = LD_U16(s1+18);
    f0 = BITSF(LD32(s1+20));
    f2 = BITSF(LD32(v1+4));
    t0 = LD_U8(s1+33);
    ST32(s2+92, FBITS(f0));
    ST32(t1+8, FBITS(f1));
    ST32(v0+36, t2);
    ST32(v0+4, t3);
    ST32(v0+8, a0);
    ST32(v0+12, a1);
    ST16(v0+16, a2);
    ST16(v0+18, a3);
    ST32(t1+4, FBITS(f2));
    ST8(v0+32, t4);
    ST8(v0+33, t0);
    goto L_089FADC0;
L_089FADC0:;
    f0 = BITSF(0);
    v0 = D_08AEF4E8 - (-2840);
    fcc = FCMP(f3, f0, 2);
    cnd_ = fcc;
    f1 = BITSF(LD32(v0-2840));
    if (cnd_) { goto L_089FADDC; }
    goto L_089FADD8;
L_089FADD8:;
    f1 = f1 / f3;
    goto L_089FADDC;
L_089FADDC:;
    ST32(s6+68, FBITS(f4));
    ST32(s6+32, FBITS(f1));
    goto L_089FADE4;
L_089FADE4:;
    sp = sp + 256;
    return;
L_089FAE14:;
    a3 = LD32(s2+4);
    s0 = sp + 80;
    a2 = s7 + 0;
    f12 = f20;
    a1 = s5 + 0;
    t0 = 1;
    a0 = s0 + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089FAE34;
L_089FAE34:;
    a0 = s0 + 0;
    a1 = sp + 160;
    v0 = func_089DD324(a0, a1, 0, 0, 0);
    goto L_089FAE40;
L_089FAE40:;
    v1 = LD32(s2+136);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s2+136, v1);
    goto L_089FAC68;
}

/* 089FAE50 */
void func_089FAE50(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FAE50:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+24);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FAE80; }
    goto L_089FAE74;
L_089FAE74:;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAE7C;
L_089FAE7C:;
    ST32(s0+24, s1);
    goto L_089FAE80;
L_089FAE80:;
    sp = sp + 16;
    return;
}

/* 089FAE94 */
void func_089FAE94(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089FAE94:;
    sp = sp - 144;
    v0 = a2 + 0;
    a2 = sp + 80;
    s5 = v0 & 0xff;
    s2 = a0 + 0;
    s4 = s2 + 60;
    s1 = a1 + 0;
    a1 = LD32(a0+20);
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    ST32(sp+80, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAEE8;
L_089FAEE8:;
    v0 = D_08AEF4F0 - (-2832);
    f12 = BITSF(LD32(v0-2832));
    a0 = LD32(sp+80);
    a1 = 0x88f60000u;
    a1 = a1 | 0x649a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FAF00;
L_089FAF00:;
    f12 = f0;
    a0 = s4 + 0;
    v0 = func_0896D040(a0, f12);
    goto L_089FAF0C;
L_089FAF0C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FB05C; }
    goto L_089FAF14;
L_089FAF14:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089FB060; }
    goto L_089FAF1C;
L_089FAF1C:;
    a0 = (u32)(s32)LD_S16(s1+18);
    s6 = 0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAF28;
L_089FAF28:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+32); goto L_089FAF40; }
    goto L_089FAF30;
L_089FAF30:;
    a0 = LD32(v0+28);
    v0 = func_08A66DBC(a0);
    goto L_089FAF38;
L_089FAF38:;
    s6 = v0 + 0;
    v0 = LD_U8(s1+32);
    goto L_089FAF40;
L_089FAF40:;
    cnd_ = v0 == 0;
    s3 = s1 + 20;
    if (cnd_) { goto L_089FAFA4; }
    goto L_089FAF48;
L_089FAF48:;
    cnd_ = s5 != 0;
    a0 = LD32(sp+80);
    if (cnd_) { goto L_089FAFA8; }
    goto L_089FAF50;
L_089FAF50:;
    v0 = 7;
    cnd_ = s6 == v0;
    v0 = D_08AEF4F4 - (-2828);
    if (cnd_) { goto L_089FAFA8; }
    goto L_089FAF5C;
L_089FAF5C:;
    f12 = BITSF(LD32(v0-2828));
    a0 = LD32(sp+80);
    a1 = 0xe1cd0000u;
    a1 = a1 | 0xaf3d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FAF70;
L_089FAF70:;
    a0 = LD32(sp+80);
    a1 = 0xfbff0000u;
    a2 = 0x5f6b0000u;
    a1 = a1 | 0x5c53;
    a2 = a2 | 0x9be0;
    f20 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAF8C;
L_089FAF8C:;
    f13 = BITSF(0);
    a2 = v0 + 0;
    f12 = f20;
    a0 = s4 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_088EC5E8(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FAFA4;
L_089FAFA4:;
    a0 = LD32(sp+80);
    goto L_089FAFA8;
L_089FAFA8:;
    a1 = 0x80650000u;
    a2 = 0xfca90000u;
    a2 = a2 | 0x394e;
    a1 = a1 | 0x6768;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FAFBC;
L_089FAFBC:;
    v1 = D_08B45AA8 - (23208);
    s0 = v0 + 0;
    v0 = v1 + 23208;
    f7 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    a0 = sp + 0;
    a1 = s3 + 0;
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+32, FBITS(f8));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB01C;
L_089FB01C:;
    a0 = s4 + 0;
    a1 = sp + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB034;
L_089FB034:;
    cnd_ = s5 != 0;
    if (cnd_) { f5 = BITSF(LD32(s4+4)); goto L_089FB0D8; }
    goto L_089FB03C;
L_089FB03C:;
    s0 = D_08C2C06C - (-16276);
    goto L_089FB040;
L_089FB040:;
    f1 = BITSF(LD32(s0-16276));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089FB084; }
    goto L_089FB058;
L_089FB058:;
    goto L_089FB05C;
L_089FB05C:;
    goto L_089FB060;
L_089FB060:;
    sp = sp + 144;
    return;
L_089FB084:;
    a0 = s6 + 0;
    v0 = func_08A66D7C(a0);
    goto L_089FB08C;
L_089FB08C:;
    a1 = 0xa7fc0000u;
    a0 = v0 + 0;
    a1 = a1 | 0x40ea;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB0A0;
L_089FB0A0:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB0AC;
L_089FB0AC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FB0C8; }
    goto L_089FB0B4;
L_089FB0B4:;
    v0 = D_08AEF4F4 - (-2828);
    f12 = BITSF(LD32(v0-2828));
    a2 = s4 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB0C8;
L_089FB0C8:;
    v0 = D_08AEF4FC - (-2820);
    f0 = BITSF(LD32(v0-2820));
    ST32(s0-16276, FBITS(f0));
    goto L_089FB058;
L_089FB0D8:;
    f6 = BITSF(LD32(s4+8));
    v0 = D_08AEF4F8 - (-2824);
    ST32(sp+52, FBITS(f5));
    a1 = 0x94b70000u;
    a1 = a1 | 0x147f;
    ST32(sp+56, FBITS(f6));
    f0 = BITSF(LD32(v0-2824));
    f4 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s1+20));
    f3 = BITSF(LD32(s3+4));
    f4 = f4 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f1 = BITSF(LD32(s2+60));
    f6 = f6 + f4;
    v0 = D_08ADE9F0 - (-5648);
    f1 = f1 + f2;
    f5 = f5 + f3;
    a2 = LD32(v0-5648);
    a0 = LD32(sp+80);
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB144;
L_089FB144:;
    a2 = v0 + 0;
    a0 = sp + 48;
    a1 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB15C;
L_089FB15C:;
    s0 = D_08C2C06C - (-16276);
    goto L_089FB040;
}

/* 089FB164 */
void func_089FB164(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FB164:;
    sp = sp - 16;
    v1 = LD32(a0+136);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089FB198; }
    goto L_089FB180;
L_089FB180:;
    v0 = v1 | 0x8;
    ST32(s0+136, v0);
    sp = sp + 16;
    return;
L_089FB198:;
    func_089FB1A8(a0, t2, t3);
    goto L_089FB1A0;
L_089FB1A0:;
    v1 = LD32(s0+136);
    goto L_089FB180;
}

/* 089FB1A8 */
void func_089FB1A8(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FB1A8:;
    sp = sp - 16;
    a1 = 36;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = LD32(a0+136);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = 0x8065;
    if (cnd_) { goto L_089FB1EC; }
    goto L_089FB1D4;
L_089FB1D4:;
    a0 = s0 + 0;
    func_089FB274(a0);
    goto L_089FB1DC;
L_089FB1DC:;
    sp = sp + 16;
    return;
L_089FB1EC:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB1F4;
L_089FB1F4:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089FB1D4; }
    goto L_089FB208;
L_089FB208:;
    a3 = LD32(t0+24);
    cnd_ = a3 == 0;
    v0 = s0 + 60;
    if (cnd_) { goto L_089FB25C; }
    goto L_089FB214;
L_089FB214:;
    v1 = LD32(s0+124);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0+60));
    ST32(a3+20, v1);
    f1 = BITSF(LD32(v0+4));
    v0 = LD32(s0+4);
    ST32(a3, FBITS(f0));
    ST32(a3+24, v0);
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(s0+8);
    f0 = BITSF(LD32(s0+112));
    ST32(a3+28, v0);
    ST32(a3+12, FBITS(f0));
    v0 = LD32(s0+20);
    f0 = BITSF(LD32(s0+116));
    ST32(a3+32, v0);
    ST32(a3+16, FBITS(f0));
    goto L_089FB25C;
L_089FB25C:;
    v0 = LD32(s0+4);
    ST32(t0, 0);
    ST32(t0+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB26C;
L_089FB26C:;
    goto L_089FB1D4;
}

/* 089FB274 */
void func_089FB274(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089FB274:;
    sp = sp - 64;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    a2 = LD32(a0+120);
    f7 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    a0 = a0 + 60;
    a1 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+32, FBITS(f8));
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB2E4;
L_089FB2E4:;
    sp = sp + 64;
    return;
}

/* 089FB2F0 */
void func_089FB2F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089FB2F0:;
    sp = sp - 64;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089FB494; }
    goto L_089FB30C;
L_089FB30C:;
    a1 = LD32(a0+20);
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    a2 = sp + 16;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB324;
L_089FB324:;
    v0 = D_08AEF500 - (-2816);
    f0 = BITSF(LD32(v0-2816));
    a0 = LD32(sp+16);
    a1 = 0xab7d0000u;
    ST32(s0+16, FBITS(f0));
    a2 = 0x8b460000u;
    a2 = a2 | 0x8a7;
    a1 = a1 | 0xd51b;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB348;
L_089FB348:;
    v1 = D_08AEF504 - (-2812);
    f21 = BITSF(LD32(v1-2812));
    ST32(s0+20, v0);
    a1 = 0xc3f10000u;
    a1 = a1 | 0xf774;
    a0 = LD32(sp+16);
    f12 = f21;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB368;
L_089FB368:;
    v0 = D_08AEF508 - (-2808);
    f20 = BITSF(LD32(v0-2808));
    a0 = LD32(sp+16);
    a1 = 0xc3f10000u;
    f0 = f0 * f20;
    f12 = f21;
    a1 = a1 | 0xf774;
    ST32(s0, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB38C;
L_089FB38C:;
    f0 = f0 * f20;
    v0 = D_08AEF50C - (-2804);
    f20 = BITSF(LD32(v0-2804));
    a0 = LD32(sp+16);
    ST32(s0+4, FBITS(f0));
    a1 = 0x84220000u;
    a1 = a1 | 0xfffe;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB3B0;
L_089FB3B0:;
    ST32(s0+8, FBITS(f0));
    a1 = 0x84220000u;
    f12 = f20;
    a0 = LD32(sp+16);
    a1 = a1 | 0xfffe;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB3C8;
L_089FB3C8:;
    ST32(s0+12, FBITS(f0));
    a1 = 0xaf3e0000u;
    a1 = a1 | 0xbdcc;
    a0 = LD32(sp+16);
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089FB3E0;
L_089FB3E0:;
    v1 = v0 >> 24;
    f6 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f4 = BITSF(v1);
    f5 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f2 = (float)(s32)FBITS(f4);
    f3 = (float)(s32)FBITS(f5);
    f4 = (float)(s32)FBITS(f6);
    v0 = D_08AEF510 - (-2800);
    f0 = BITSF(LD32(v0-2800));
    v1 = s0 + 28;
    a1 = s0 + 44;
    f4 = f4 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    v0 = s0 + 60;
    a2 = s0 + 76;
    a0 = LD32(s0+20);
    ST32(s0+28, FBITS(f3));
    ST32(v1+12, FBITS(f4));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f1));
    ST32(s0+44, FBITS(f3));
    ST32(a1+12, FBITS(f4));
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f1));
    ST32(s0+60, FBITS(f3));
    ST32(v0+12, FBITS(f4));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f1));
    ST32(s0+76, FBITS(f3));
    ST32(a2+12, FBITS(f4));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f1));
    ST32(sp+8, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp, FBITS(f3));
    ST32(sp+12, FBITS(f4));
    v0 = func_0883AE14(a0);
    goto L_089FB490;
L_089FB490:;
    ST32(s0+24, v0);
    goto L_089FB494;
L_089FB494:;
    sp = sp + 64;
    return;
}

/* 089FB4AC */
u32 func_089FB4AC(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089FB4AC:;
    sp = sp - 64;
    s1 = a1 + 0;
    ST32(sp, a2);
    { rv_t r_ = func_088E9FDC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB4E4;
L_089FB4E4:;
    s0 = v0 + 0;
    v1 = 0 < s1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089FB510; }
    goto L_089FB4FC;
L_089FB4FC:;
    a0 = s1 + 0;
    { rv_t r_ = func_088E9FDC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB504;
L_089FB504:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089FB544; }
    goto L_089FB50C;
L_089FB50C:;
    a1 = s2 + 0;
    goto L_089FB510;
L_089FB510:;
    v0 = a1 + 0;
    sp = sp + 64;
    return v0;
L_089FB544:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB54C;
L_089FB54C:;
    s6 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    s2 = v0 + 0;
    func_08ACD1FC(a0, a1, 0, 0, 0);
    goto L_089FB560;
L_089FB560:;
    a0 = s1 + 0;
    a1 = s6 + 0;
    func_088E9ED0(a0, a1, 0, 0, 0);
    goto L_089FB56C;
L_089FB56C:;
    v1 = LD32(s6);
    cnd_ = v1 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_089FB61C; }
    goto L_089FB578;
L_089FB578:;
    fp = 0 + 0;
    goto L_089FB57C;
L_089FB57C:;
    v0 = LD32(s6+4);
    s5 = s1 + s7;
    s7 = s7 + 1;
    v0 = fp + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088E9F80(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB594;
L_089FB594:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 232;
    if (cnd_) { goto L_089FB60C; }
    goto L_089FB5A0;
L_089FB5A0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB5A8;
L_089FB5A8:;
    s3 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08ACD014(a0, a1, 0, 0, 0);
    goto L_089FB5B8;
L_089FB5B8:;
    a0 = s5 + 0;
    a1 = s3 + 0;
    func_088E9E7C(a0, a1, 0, 0, 0);
    goto L_089FB5C4;
L_089FB5C4:;
    v1 = LD32(s6+4);
    v1 = fp + v1;
    ST32(v1, s5);
    a0 = LD32(s3+172);
    { rv_t r_ = func_088E9F24(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB5D8;
L_089FB5D8:;
    s4 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 152;
    if (cnd_) { goto L_089FB60C; }
    goto L_089FB5E4;
L_089FB5E4:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB5EC;
L_089FB5EC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s4 + 0;
    func_08ACCE60(a0, a1, 0, 0, 0);
    goto L_089FB5FC;
L_089FB5FC:;
    a0 = s5 + 0;
    a1 = s0 + 0;
    func_088E9DA4(a0, a1, 0, 0, 0);
    goto L_089FB608;
L_089FB608:;
    ST32(s3+172, s5);
    goto L_089FB60C;
L_089FB60C:;
    v0 = LD32(s6);
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    fp = fp + 104;
    if (cnd_) { goto L_089FB57C; }
    goto L_089FB61C;
L_089FB61C:;
    a1 = LD32(sp);
    a0 = s6 + 0;
    func_088EA28C(a0, a1, 0, 0, 0);
    goto L_089FB628;
L_089FB628:;
    a1 = s2 + 0;
    goto L_089FB510;
}

/* 089FB630 */
void func_089FB630(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FB630:;
    sp = sp - 16;
    s0 = D_08C2C064 - (-16284);
    v0 = LD32(s0-16284);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089FB678; }
    goto L_089FB648;
L_089FB648:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FB650;
L_089FB650:;
    ST32(s0-16284, v0);
    v1 = 256;
    a0 = 140;
    ST32(v0+4, v1);
    ST32(v0+8, a0);
    ST32(v0, 0);
    sp = sp + 16;
    return;
L_089FB678:;
    { u64 r_ = func_089FB688(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB680;
L_089FB680:;
    goto L_089FB648;
}

/* 089FB688 */
u64 func_089FB688(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FB688:;
    sp = sp - 32;
    s3 = D_08C2C064 - (-16284);
    { u64 r_ = func_089FB730(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB6A8;
L_089FB6A8:;
    s0 = LD32(s3-16284);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s3-16284, 0); goto L_089FB6EC; }
    goto L_089FB6B4;
L_089FB6B4:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089FB6E0; }
    goto L_089FB6C0;
L_089FB6C0:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FB720; }
    goto L_089FB6CC;
L_089FB6CC:;
    s1 = LD32(s2+12);
    goto L_089FB6D0;
L_089FB6D0:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089FB708; }
    goto L_089FB6D8;
L_089FB6D8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB6E0;
L_089FB6E0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB6E8;
L_089FB6E8:;
    ST32(s3-16284, 0);
    goto L_089FB6EC;
L_089FB6EC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_089FB708:;
    func_08AA3740(a0, 0, 0, 0);
    goto L_089FB710;
L_089FB710:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB718;
L_089FB718:;
    goto L_089FB6D8;
L_089FB720:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB728;
L_089FB728:;
    s1 = LD32(s2+12);
    goto L_089FB6D0;
}

/* 089FB730 */
u64 func_089FB730(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089FB730:;
    sp = sp - 48;
    s2 = D_08C2C054 - (-16300);
    v0 = s2 - 16300;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089FB7C4; }
    goto L_089FB778;
L_089FB778:;
    a2 = LD32(s2-16300);
    a3 = a1 + 0;
    goto L_089FB780;
L_089FB780:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089FB7B4; }
    goto L_089FB798;
L_089FB798:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089FB7C8; }
    goto L_089FB7A8;
L_089FB7A8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089FB798; }
    goto L_089FB7B4;
L_089FB7B4:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089FB780; }
    goto L_089FB7C4;
L_089FB7C4:;
    a0 = LD32(sp+8);
    goto L_089FB7C8;
L_089FB7C8:;
    cnd_ = a0 == 0;
    s3 = D_08C2C064 - (-16284);
    if (cnd_) { goto L_089FB848; }
    goto L_089FB7D0;
L_089FB7D0:;
    s0 = LD32(a0);
    goto L_089FB7D4;
L_089FB7D4:;
    a1 = 0 + 0;
    a0 = sp + 0;
    func_08ACD4F4(a0, a1);
    goto L_089FB7E0;
L_089FB7E0:;
    cnd_ = s0 == 0;
    v1 = LD32(s2-16300);
    if (cnd_) { goto L_089FB83C; }
    goto L_089FB7E8;
L_089FB7E8:;
    s1 = s2 - 16300;
    v0 = LD32(s1+4);
    v0 = v0 - 1;
    v0 = v0 & 0x3e7;
    a2 = v0 << 2;
    v1 = a2 + v1;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089FB828; }
    goto L_089FB80C;
L_089FB80C:;
    v0 = LD32(a0);
    goto L_089FB810;
L_089FB810:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_089FB988; }
    goto L_089FB818;
L_089FB818:;
    a1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089FB810; }
    goto L_089FB828;
L_089FB828:;
    a0 = s0 + 0;
    func_089F9E38(a0);
    goto L_089FB830;
L_089FB830:;
    a0 = LD32(s3-16284);
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB83C;
L_089FB83C:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089FB7D4; }
    goto L_089FB848;
L_089FB848:;
    s2 = D_08C2C03C - (-16324);
    s0 = LD32(s2-16324);
    cnd_ = s0 == 0;
    s3 = s2 - 16324;
    if (cnd_) { goto L_089FB878; }
    goto L_089FB858;
L_089FB858:;
    a1 = LD32(s0+96);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089FB978; }
    goto L_089FB864;
L_089FB864:;
    a1 = LD32(s0+100);
    goto L_089FB868;
L_089FB868:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089FB968; }
    goto L_089FB870;
L_089FB870:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB878;
L_089FB878:;
    a0 = LD32(s3+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089FB958; }
    goto L_089FB884;
L_089FB884:;
    v0 = s2 - 16324;
    goto L_089FB888;
L_089FB888:;
    ST32(s3+16, 0);
    ST32(v0+4, 0);
    s1 = LD32(sp);
    ST32(s2-16324, 0);
    v0 = LD32(s1+8);
    ST32(s3+12, 0);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089FB920; }
    goto L_089FB8AC;
L_089FB8AC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089FB920; }
    goto L_089FB8B8;
L_089FB8B8:;
    v0 = LD32(s1);
    goto L_089FB8BC;
L_089FB8BC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089FB910; }
    goto L_089FB8D0;
L_089FB8D0:;
    v0 = LD_U8(s0+8);
    goto L_089FB8D4;
L_089FB8D4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089FB950; }
    goto L_089FB8DC;
L_089FB8DC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089FB940; }
    goto L_089FB8E4;
L_089FB8E4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089FB8EC;
L_089FB8EC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB8F8;
L_089FB8F8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089FB904;
L_089FB904:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089FB8D4; }
    goto L_089FB90C;
L_089FB90C:;
    v1 = LD32(s1+4);
    goto L_089FB910;
L_089FB910:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089FB8BC; }
    goto L_089FB920;
L_089FB920:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089FB940:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089FB8EC;
L_089FB950:;
    s0 = LD32(s0+4);
    goto L_089FB904;
L_089FB958:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB960;
L_089FB960:;
    v0 = s2 - 16324;
    goto L_089FB888;
L_089FB968:;
    a0 = s3 + 0;
    func_08ACD700(a0, a1, t1, t2, t3);
    goto L_089FB970;
L_089FB970:;
    goto L_089FB870;
L_089FB978:;
    a0 = s3 + 0;
    func_08ACD700(a0, a1, t1, t2, t3);
    goto L_089FB980;
L_089FB980:;
    a1 = LD32(s0+100);
    goto L_089FB868;
L_089FB988:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089FB998; }
    goto L_089FB990;
L_089FB990:;
    ST8(a0+8, v0);
    goto L_089FB828;
L_089FB998:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089FB9C0; }
    goto L_089FB9A0;
L_089FB9A0:;
    v0 = LD32(a0+4);
    ST32(a1+4, v0);
    goto L_089FB9A8;
L_089FB9A8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FB9B0;
L_089FB9B0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089FB828;
L_089FB9C0:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_089FB9A8;
}

/* 089FB9D0 */
void func_089FB9D0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FB9D0:;
    sp = sp - 32;
    v1 = D_08C2C068 - (-16280);
    f2 = BITSF(0);
    f1 = BITSF(LD32(v1-16280));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = D_08C2C06C - (-16276); goto L_089FBA14; }
    goto L_089FBA00;
L_089FBA00:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(v1-16280, FBITS(f0));
    v1 = D_08C2C06C - (-16276);
    goto L_089FBA14;
L_089FBA14:;
    f1 = BITSF(LD32(v1-16276));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    s2 = D_08C2C054 - (-16300);
    if (cnd_) { goto L_089FBA38; }
    goto L_089FBA28;
L_089FBA28:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(v1-16276, FBITS(f0));
    goto L_089FBA38;
L_089FBA38:;
    v1 = s2 - 16300;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08ACD4F4(a0, a1);
    goto L_089FBA60;
L_089FBA60:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_089FBB24; }
    goto L_089FBA6C;
L_089FBA6C:;
    a0 = sp + 0;
    goto L_089FBA70;
L_089FBA70:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08ACD4F4(a0, a1);
    goto L_089FBA80;
L_089FBA80:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    s1 = D_08C2C064 - (-16284);
    if (cnd_) { goto L_089FBAC4; }
    goto L_089FBA8C;
L_089FBA8C:;
    s0 = LD32(a0);
    goto L_089FBA90;
L_089FBA90:;
    a1 = 1;
    a0 = sp + 0;
    func_08ACD4F4(a0, a1);
    goto L_089FBA9C;
L_089FBA9C:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089FBABC; }
    goto L_089FBAA4;
L_089FBAA4:;
    v0 = LD32(s0+136);
    a1 = s0 + 0;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a0 = s2 - 16300;
    if (cnd_) { goto L_089FBB00; }
    goto L_089FBAB8;
L_089FBAB8:;
    a0 = LD32(sp+8);
    goto L_089FBABC;
L_089FBABC:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089FBA90; }
    goto L_089FBAC4;
L_089FBAC4:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089FBAF0; }
    goto L_089FBAD8;
L_089FBAD8:;
    goto L_089FBADC;
L_089FBADC:;
    sp = sp + 32;
    return;
L_089FBAF0:;
    func_08ACD58C(a0, 0, 0, 0);
    goto L_089FBAF8;
L_089FBAF8:;
    goto L_089FBADC;
L_089FBB00:;
    func_08ACD658(a0, a1, 0, 0, 0);
    goto L_089FBB08;
L_089FBB08:;
    a0 = s0 + 0;
    func_089F9E38(a0);
    goto L_089FBB10;
L_089FBB10:;
    a0 = LD32(s1-16284);
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FBB1C;
L_089FBB1C:;
    a0 = LD32(sp+8);
    goto L_089FBABC;
L_089FBB24:;
    a0 = sp + 0;
    a1 = 1;
    func_08ACD4F4(a0, a1);
    goto L_089FBB30;
L_089FBB30:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089FBB40; }
    goto L_089FBB38;
L_089FBB38:;
    func_089F9E8C(a0);
    goto L_089FBB40;
L_089FBB40:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_089FBB24; }
    goto L_089FBB4C;
L_089FBB4C:;
    a0 = sp + 0;
    goto L_089FBA70;
}

/* 089FBB54 */
u32 func_089FBB54(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FBB54:;
    sp = sp - 16;
    s2 = D_08C2C03C - (-16324);
    v1 = s2 - 16324;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089FBBD8; }
    goto L_089FBB7C;
L_089FBB7C:;
    v0 = LD32(s2-16324);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_089FBBB0; }
    goto L_089FBB88;
L_089FBB88:;
    v1 = v0 + 0;
    goto L_089FBB8C;
L_089FBB8C:;
    a0 = v1 + 100;
    s1 = v1 + 96;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_089FBBD8; }
    goto L_089FBBA4;
L_089FBBA4:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089FBB8C; }
    goto L_089FBBB0;
L_089FBBB0:;
    a0 = 104;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FBBB8;
L_089FBBB8:;
    ST32(v0, s0);
    a0 = s2 - 16324;
    v1 = LD32(a0+4);
    ST32(v0+96, 0);
    v1 = v1 + 1;
    ST32(v0+100, 0);
    ST32(a0+4, v1);
    ST32(s1, v0);
    goto L_089FBBD8;
L_089FBBD8:;
    v1 = LD32(s2-16324);
    cnd_ = v1 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_089FBC0C; }
    goto L_089FBBE4;
L_089FBBE4:;
    v1 = LD32(v0);
    goto L_089FBBE8;
L_089FBBE8:;
    a0 = v0 + 100;
    a1 = v0 + 96;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_089FBC1C; }
    goto L_089FBC00;
L_089FBC00:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089FBBE8; }
    goto L_089FBC0C;
L_089FBC0C:;
    v0 = s2 - 16324;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089FBC38; }
    goto L_089FBC1C;
L_089FBC1C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_089FBC38:;
    a2 = 1;
    a1 = s0 + 0;
    v0 = func_08ACD770(a0, a1, a2);
    goto L_089FBC44;
L_089FBC44:;
    a2 = v0 + 0;
    goto L_089FBC1C;
}

/* 089FBC4C */
u32 func_089FBC4C(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FBC4C:;
    a1 = a0 + 0;
    a0 = D_08C2C03C - (-16324);
    sp = sp - 16;
    a0 = a0 - 16324;
    a2 = 1;
    v0 = func_08ACD770(a0, a1, a2);
    goto L_089FBC68;
L_089FBC68:;
    sp = sp + 16;
    return v0;
}

/* 089FBC74 */
u32 func_089FBC74(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089FBC74:;
    sp = sp - 64;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FBCA8;
L_089FBCA8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089FBCDC; }
    goto L_089FBCB0;
L_089FBCB0:;
    v0 = s1 + 0;
    goto L_089FBCB4;
L_089FBCB4:;
    sp = sp + 64;
    return v0;
L_089FBCDC:;
    v0 = D_08C2C054 - (-16300);
    v0 = v0 - 16300;
    v1 = LD32(v0+8);
    a0 = sp + 0;
    a1 = 1;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08AEF514 - (-2796);
    s5 = 0 + 0;
    f20 = BITSF(LD32(v1-2796));
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08ACD4F4(a0, a1);
    goto L_089FBD14;
L_089FBD14:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_089FBD44; }
    goto L_089FBD20;
L_089FBD20:;
    a0 = LD32(sp);
    goto L_089FBD24;
L_089FBD24:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089FBCB0; }
    goto L_089FBD34;
L_089FBD34:;
    func_08ACD58C(a0, 0, 0, 0);
    goto L_089FBD3C;
L_089FBD3C:;
    v0 = s1 + 0;
    goto L_089FBCB4;
L_089FBD44:;
    a0 = sp + 0;
    a1 = 1;
    func_08ACD4F4(a0, a1);
    goto L_089FBD50;
L_089FBD50:;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089FBD60; }
    goto L_089FBD58;
L_089FBD58:;
    a0 = LD32(s0+24);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FBD60;
L_089FBD60:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_089FBD84; }
    goto L_089FBD68;
L_089FBD68:;
    f0 = BITSF(LD32(v0+28));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089FBD84; }
    goto L_089FBD7C;
L_089FBD7C:;
    f20 = f0;
    s5 = s0 + 0;
    goto L_089FBD84;
L_089FBD84:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_089FBD44; }
    goto L_089FBD8C;
L_089FBD8C:;
    cnd_ = s5 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_089FBD24; }
    goto L_089FBD94;
L_089FBD94:;
    a0 = s5 + 0;
    func_089FAE50(a0);
    goto L_089FBD9C;
L_089FBD9C:;
    a0 = s5 + 0;
    func_089FB164(a0, 0, 0);
    goto L_089FBDA4;
L_089FBDA4:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FBDB4;
L_089FBDB4:;
    s1 = v0 + 0;
    goto L_089FBD20;
}

/* 089FBDBC */
u32 func_089FBDBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089FBDBC:;
    sp = sp - 48;
    v0 = D_08C2C054 - (-16300);
    fp = v0 - 16300;
    v0 = D_08C2C064 - (-16284);
    s6 = a0 + 0;
    s5 = t2 + 0;
    s4 = t1 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = t0 & 0xff;
    a0 = LD32(v0-16284);
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FBE18;
L_089FBE18:;
    s7 = v0 + 0;
    a1 = s6 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    t1 = s0 + 0;
    t2 = s4 + 0;
    t3 = s5 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089FBE94; }
    goto L_089FBE44;
L_089FBE44:;
    func_089F9A50(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089FBE4C;
L_089FBE4C:;
    s0 = LD32(fp+4);
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FBE58;
L_089FBE58:;
    v1 = D_08C2C054 - (-16300);
    a0 = LD32(v1-16300);
    s0 = s0 - 1;
    s0 = s0 & 0x3e7;
    s0 = s0 << 2;
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = LD32(fp+12);
    ST32(v0, s7);
    v1 = v1 + 1;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(fp+12, v1);
    v1 = s7 + 0;
    goto L_089FBE94;
L_089FBE94:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
}

/* 089FBEC8 */
rv_t func_089FBEC8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FBEC8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FC00C; }
    goto L_089FBEFC;
L_089FBEFC:;
    v0 = D_08AEF51C - (-2788);
    f3 = BITSF(LD32(v0-2788));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t1 = D_08C2C00C - (-16372);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    t2 = D_08C2C01C - (-16356);
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
    v0 = D_08C2C02C - (-16340);
    f2 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    t0 = D_08C2C03C - (-16324);
    s3 = D_08C2C054 - (-16300);
    v1 = t0 - 16324;
    a3 = v0 - 16340;
    a1 = t1 - 16372;
    a2 = t2 - 16356;
    f2 = f2 * f3;
    s0 = s3 - 16300;
    ST32(v0-16340, FBITS(f1));
    v0 = 32;
    a0 = 128;
    ST32(a3+12, FBITS(f1));
    ST32(a1+4, FBITS(f4));
    ST32(s0+4, v0);
    ST32(a1+8, FBITS(f5));
    ST32(a1+12, FBITS(f1));
    ST32(a2+4, FBITS(f6));
    ST32(v1+20, 0);
    ST32(a2+8, FBITS(f6));
    ST32(v1+4, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, 0);
    ST32(a2+12, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    ST32(t1-16372, FBITS(f2));
    ST32(t2-16356, FBITS(f5));
    ST32(t0-16324, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FBFD4;
L_089FBFD4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-16300, v0);
    if (cnd_) { goto L_089FC000; }
    goto L_089FBFE4;
L_089FBFE4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089FBFEC;
L_089FBFEC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089FBFEC; }
    goto L_089FC000;
L_089FC000:;
    v0 = s3 - 16300;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089FC00C;
L_089FC00C:;
    s0 = s2 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_089FC034; }
    goto L_089FC020;
L_089FC020:;
    v0 = D_08C2C054 - (-16300);
    a0 = LD32(v0-16300);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089FC0D0; }
    goto L_089FC030;
L_089FC030:;
    v0 = s1 < 0x1u;
    goto L_089FC034;
L_089FC034:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FC088; }
    goto L_089FC040;
L_089FC040:;
    v0 = D_08C2C03C - (-16324);
    s0 = LD32(v0-16324);
    cnd_ = s0 == 0;
    s1 = v0 - 16324;
    if (cnd_) { goto L_089FC070; }
    goto L_089FC050;
L_089FC050:;
    a1 = LD32(s0+96);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089FC0C0; }
    goto L_089FC05C;
L_089FC05C:;
    a1 = LD32(s0+100);
    goto L_089FC060;
L_089FC060:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089FC0B0; }
    goto L_089FC068;
L_089FC068:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC070;
L_089FC070:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089FC0A0; }
    goto L_089FC07C;
L_089FC07C:;
    ST32(s1+16, 0);
    goto L_089FC080;
L_089FC080:;
    ST32(s1+12, 0);
    goto L_089FC088;
L_089FC088:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089FC0A0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC0A8;
L_089FC0A8:;
    ST32(s1+16, 0);
    goto L_089FC080;
L_089FC0B0:;
    a0 = s1 + 0;
    func_08ACD700(a0, a1, t1, t2, t3);
    goto L_089FC0B8;
L_089FC0B8:;
    goto L_089FC068;
L_089FC0C0:;
    a0 = s1 + 0;
    func_08ACD700(a0, a1, t1, t2, t3);
    goto L_089FC0C8;
L_089FC0C8:;
    a1 = LD32(s0+100);
    goto L_089FC060;
L_089FC0D0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC0D8;
L_089FC0D8:;
    v0 = s1 < 0x1u;
    goto L_089FC034;
}

/* 089FC0E0 */
float func_089FC0E0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089FC0E0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089FC10C; }
    goto L_089FC0F8;
L_089FC0F8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089FC10C; }
    goto L_089FC10C;
L_089FC10C:;
    return f0;
}

/* 089FC114 */
rv_t func_089FC114(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FC114:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089FBEC8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC128;
L_089FC128:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FC134 */
rv_t func_089FC134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FC134:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089FBEC8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC148;
L_089FC148:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FC154 */
void func_089FC154(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FC154:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = D_08C2C0A0 - (-16224);
    s2 = s3 - 16224;
    s1 = a0 + 0;
    func_08A03594(a0, a1);
    goto L_089FC184;
L_089FC184:;
    a0 = LD32(s0);
    t0 = D_08B45A9C - (23196);
    a2 = t0 + 23196;
    ST32(s1, a0);
    a3 = s1 + 92;
    v0 = LD32(a0-12);
    v1 = LD32(s0+16);
    a0 = 12;
    v0 = s1 + v0;
    ST32(v0, v1);
    v1 = LD32(s1);
    a1 = LD32(s0+20);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    ST32(v0, a1);
    v1 = LD32(s1);
    a1 = LD32(s0+24);
    v0 = LD32(v1-20);
    v0 = s1 + v0;
    ST32(v0, a1);
    v0 = 999;
    ST32(s1+84, 0);
    ST32(s1+88, 0);
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(t0+23196));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    a1 = LD32(s1);
    ST32(s1+104, v0);
    v0 = (u32)-1;
    v1 = LD32(a1-16);
    ST32(s1+108, v0);
    v0 = (u32)-32751;
    v1 = s1 + v1;
    ST32(s1+112, 0);
    ST32(s1+116, 0);
    ST32(s1+120, 0);
    ST32(s1+124, 0);
    ST32(s1+128, 0);
    ST16(v1+8, v0);
    a1 = LD32(s1);
    ST32(s1+92, FBITS(f2));
    v1 = LD32(a1-12);
    v1 = s1 + v1;
    v1 = v1 + 88;
    v0 = LD32(v1+116);
    v0 = v0 | 0x40;
    ST32(v1+116, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC268;
L_089FC268:;
    a0 = LD32(s3-16224);
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

/* 089FC2B0 */
void func_089FC2B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FC2B0:;
    sp = sp - 32;
    s4 = a0 + 396;
    s0 = D_08B11F88 - (8072);
    s0 = s0 + 8072;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2C0A0 - (-16224);
    func_08873BF8(a0);
    goto L_089FC2E8;
L_089FC2E8:;
    a0 = s1 + 132;
    a1 = s0 + 28;
    func_0885D56C(a0, a1);
    goto L_089FC2F4;
L_089FC2F4:;
    a0 = s1 + 416;
    a1 = s0 + 52;
    s0 = s0 + 4;
    func_0885EF0C(a0, a1);
    goto L_089FC304;
L_089FC304:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A03594(a0, a1);
    goto L_089FC310;
L_089FC310:;
    a1 = D_08B11DC4 - (7620);
    a1 = a1 + 7620;
    v1 = a1 + 436;
    v0 = a1 + 272;
    ST32(s1, a1);
    a0 = D_08B45A9C - (23196);
    a2 = s1 + 92;
    ST32(s1+132, v0);
    v0 = a0 + 23196;
    a3 = s1 + 220;
    ST32(s1+416, v1);
    v1 = (u32)-1;
    s2 = s3 - 16224;
    ST32(s1+84, 0);
    a1 = a1 + 384;
    ST32(s1+88, 0);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v0 = 999;
    f2 = BITSF(LD32(a0+23196));
    ST32(a2+8, FBITS(f0));
    a0 = 12;
    ST32(a2+4, FBITS(f1));
    ST32(s1+108, v1);
    v1 = (u32)-32751;
    ST32(s1+104, v0);
    ST32(s1+112, 0);
    ST32(s1+116, 0);
    ST32(s1+120, 0);
    ST32(s1+124, 0);
    ST32(s1+128, 0);
    v0 = LD32(a3+116);
    ST16(s4+8, v1);
    v0 = v0 | 0x40;
    ST32(a3+116, v0);
    a2 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+396, a1);
    v1 = v1 - 1;
    v0 = LD32(a2-16);
    ST32(s1+92, FBITS(f2));
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC3C4;
L_089FC3C4:;
    a0 = LD32(s3-16224);
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

/* 089FC410 */
void func_089FC410(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FC410:;
    sp = sp - 32;
    s0 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(a1+16);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(a1+20);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(a1+24);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    v0 = (u32)-1;
    v1 = LD32(s0+108);
    cnd_ = v1 == v0;
    s2 = a1 + 0;
    if (cnd_) { goto L_089FC480; }
    goto L_089FC478;
L_089FC478:;
    a0 = s0 + 108;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC480;
L_089FC480:;
    a1 = LD32(s0+112);
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_089FC594; }
    goto L_089FC48C;
L_089FC48C:;
    a0 = LD32(s0+120);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC494;
L_089FC494:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089FC4D0; }
    goto L_089FC49C;
L_089FC49C:;
    a1 = LD32(s0+84);
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC4B4;
L_089FC4B4:;
    v0 = D_08AEF530 - (-2768);
    f12 = BITSF(LD32(v0-2768));
    a0 = LD32(sp);
    a1 = 0x7ff0000u;
    a1 = a1 | 0x779a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC4CC;
L_089FC4CC:;
    ST32(s1+32, FBITS(f0));
    goto L_089FC4D0;
L_089FC4D0:;
    a1 = LD32(s0);
    v1 = D_08C2C0A0 - (-16224);
    s1 = v1 - 16224;
    v0 = LD32(a1-16);
    a0 = LD32(s1+4);
    a1 = LD32(v1-16224);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089FC528; }
    goto L_089FC50C;
L_089FC50C:;
    v0 = LD32(a0);
    goto L_089FC510;
L_089FC510:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_089FC54C; }
    goto L_089FC518;
L_089FC518:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089FC510; }
    goto L_089FC528;
L_089FC528:;
    a1 = s2 + 4;
    a0 = s0 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FC534;
L_089FC534:;
    sp = sp + 32;
    return;
L_089FC54C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089FC55C; }
    goto L_089FC554;
L_089FC554:;
    ST8(a0+8, v0);
    goto L_089FC528;
L_089FC55C:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089FC584; }
    goto L_089FC564;
L_089FC564:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_089FC56C;
L_089FC56C:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC574;
L_089FC574:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089FC528;
L_089FC584:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_089FC56C;
L_089FC594:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC59C;
L_089FC59C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089FC48C; }
    goto L_089FC5A4;
L_089FC5A4:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_089FC48C;
}

/* 089FC5B0 */
rv_t func_089FC5B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FC5B0:;
    sp = sp - 32;
    v1 = D_08B11DC4 - (7620);
    v1 = v1 + 7620;
    s1 = a0 + 0;
    v0 = v1 + 272;
    a2 = v1 + 436;
    a1 = v1 + 384;
    a3 = LD32(a0+108);
    ST32(s1+132, v0);
    v0 = (u32)-1;
    a0 = a0 + 108;
    ST32(s1+396, a1);
    ST32(s1+416, a2);
    cnd_ = a3 == v0;
    ST32(s1, v1);
    if (cnd_) { goto L_089FC600; }
    goto L_089FC5F8;
L_089FC5F8:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC600;
L_089FC600:;
    v0 = LD32(s1+112);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089FC6DC; }
    goto L_089FC614;
L_089FC614:;
    a0 = LD32(s1+120);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC61C;
L_089FC61C:;
    a0 = 0x8a940000u;
    s0 = v0 + 0;
    a2 = sp + 0;
    cnd_ = v0 == 0;
    a0 = a0 | 0xc9e9;
    if (cnd_) { goto L_089FC658; }
    goto L_089FC630;
L_089FC630:;
    a1 = LD32(s1+84);
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC63C;
L_089FC63C:;
    v0 = D_08AEF534 - (-2764);
    f12 = BITSF(LD32(v0-2764));
    a0 = LD32(sp);
    a1 = 0x7ff0000u;
    a1 = a1 | 0x779a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC654;
L_089FC654:;
    ST32(s0+32, FBITS(f0));
    goto L_089FC658;
L_089FC658:;
    a0 = D_08C2C0A0 - (-16224);
    s0 = D_08B11F88 - (8072);
    s0 = s0 + 8072;
    a1 = s1 + 0;
    a0 = a0 - 16224;
    func_08ACE0F8(a0, a1, 0, 0, 0);
    goto L_089FC670;
L_089FC670:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FC67C;
L_089FC67C:;
    a1 = LD32(s0+52);
    t0 = s0 + 52;
    a2 = s1 + 416;
    ST32(s1+416, a1);
    s0 = s0 + 28;
    a0 = s1 + 132;
    v0 = LD32(a1-12);
    v1 = LD32(t0+4);
    a1 = s0 + 0;
    v0 = a2 + v0;
    ST32(v0, v1);
    v1 = LD32(s1+416);
    a3 = LD32(t0+8);
    v0 = LD32(v1-16);
    a2 = a2 + v0;
    ST32(a2, a3);
    func_0885D658(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FC6C0;
L_089FC6C0:;
    a0 = s1 + 396;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC6C8;
L_089FC6C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089FC6DC:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC6E4;
L_089FC6E4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089FC614; }
    goto L_089FC6EC;
L_089FC6EC:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_089FC614;
}

/* 089FC6F8 */
rv_t func_089FC6F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FC6F8:;
    sp = sp - 32;
    v1 = D_08B11DC4 - (7620);
    v1 = v1 + 7620;
    s1 = a0 + 0;
    v0 = v1 + 272;
    a2 = v1 + 436;
    a1 = v1 + 384;
    a3 = LD32(a0+108);
    ST32(s1+132, v0);
    v0 = (u32)-1;
    a0 = a0 + 108;
    ST32(s1+396, a1);
    ST32(s1+416, a2);
    cnd_ = a3 == v0;
    ST32(s1, v1);
    if (cnd_) { goto L_089FC748; }
    goto L_089FC740;
L_089FC740:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC748;
L_089FC748:;
    v0 = LD32(s1+112);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089FC82C; }
    goto L_089FC75C;
L_089FC75C:;
    a0 = LD32(s1+120);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC764;
L_089FC764:;
    a0 = 0x8a940000u;
    s0 = v0 + 0;
    a2 = sp + 0;
    cnd_ = v0 == 0;
    a0 = a0 | 0xc9e9;
    if (cnd_) { goto L_089FC7A0; }
    goto L_089FC778;
L_089FC778:;
    a1 = LD32(s1+84);
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC784;
L_089FC784:;
    v0 = D_08AEF538 - (-2760);
    f12 = BITSF(LD32(v0-2760));
    a0 = LD32(sp);
    a1 = 0x7ff0000u;
    a1 = a1 | 0x779a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC79C;
L_089FC79C:;
    ST32(s0+32, FBITS(f0));
    goto L_089FC7A0;
L_089FC7A0:;
    a0 = D_08C2C0A0 - (-16224);
    s0 = D_08B11F88 - (8072);
    s0 = s0 + 8072;
    a1 = s1 + 0;
    a0 = a0 - 16224;
    func_08ACE0F8(a0, a1, 0, 0, 0);
    goto L_089FC7B8;
L_089FC7B8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FC7C4;
L_089FC7C4:;
    a1 = LD32(s0+52);
    t0 = s0 + 52;
    a2 = s1 + 416;
    ST32(s1+416, a1);
    s0 = s0 + 28;
    a0 = s1 + 132;
    v0 = LD32(a1-12);
    v1 = LD32(t0+4);
    a1 = s0 + 0;
    v0 = a2 + v0;
    ST32(v0, v1);
    v1 = LD32(s1+416);
    a3 = LD32(t0+8);
    v0 = LD32(v1-16);
    a2 = a2 + v0;
    ST32(a2, a3);
    func_0885D658(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FC808;
L_089FC808:;
    a0 = s1 + 396;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC810;
L_089FC810:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC818;
L_089FC818:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089FC82C:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FC834;
L_089FC834:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089FC75C; }
    goto L_089FC83C;
L_089FC83C:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_089FC75C;
}

/* 089FC848 */
rv_t func_089FC848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FC848:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089FC884; }
    goto L_089FC86C;
L_089FC86C:;
    v1 = LD_U16(a1+16);
    v0 = 90;
    cnd_ = v1 == v0;
    v0 = 0x806c;
    if (cnd_) { goto L_089FC914; }
    goto L_089FC87C;
L_089FC87C:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_089FC8D4; }
    goto L_089FC884;
L_089FC884:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-20);
    a0 = s1 + a0;
    { rv_t r_ = func_0885EF64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC898;
L_089FC898:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089FC8C0; }
    goto L_089FC8A0;
L_089FC8A0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089FC8C0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A03F38(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC8CC;
L_089FC8CC:;
    v1 = v0 + 0;
    goto L_089FC8A0;
L_089FC8D4:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089FC904; }
    goto L_089FC8DC;
L_089FC8DC:;
    v1 = LD32(a0);
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    v0 = LD32(v1-12);
    f0 = BITSF(LD32(a1+4));
    v0 = v0 + 16;
    v0 = a0 + v0;
    ST32(v0+8, FBITS(f1));
    ST32(v0, FBITS(f2));
    ST32(v0+4, FBITS(f0));
    goto L_089FC904;
L_089FC904:;
    f0 = func_089FD8B4(a0);
    goto L_089FC90C;
L_089FC90C:;
    v1 = 1;
    goto L_089FC8A0;
L_089FC914:;
    v0 = LD32(a0);
    s2 = LD32(a1+24);
    f12 = BITSF(LD32(a1+8));
    a0 = LD32(v0-12);
    a1 = s2 + 0;
    a2 = 1;
    a0 = s1 + a0;
    { rv_t r_ = func_0885DE10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC934;
L_089FC934:;
    v1 = LD32(s2+84);
    v0 = D_08AEF53C - (-2756);
    f20 = BITSF(LD32(v0-2756));
    f0 = BITSF(LD32(s1+88));
    ST32(s1+84, v1);
    fcc = FCMP(f20, f0, 12);
    v0 = LD32(s2+88);
    cnd_ = fcc;
    ST32(s1+104, v0);
    if (cnd_) { goto L_089FC998; }
    goto L_089FC958;
L_089FC958:;
    v0 = LD32(s1);
    goto L_089FC95C;
L_089FC95C:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089FC96C;
L_089FC96C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_089FC8A0; }
    goto L_089FC974;
L_089FC974:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = s1 + 92;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC990;
L_089FC990:;
    v1 = 1;
    goto L_089FC8A0;
L_089FC998:;
    a1 = s1 + 92;
    a0 = s1 + 0;
    v0 = func_089FCA04(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FC9A4;
L_089FC9A4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089FC95C; }
    goto L_089FC9AC;
L_089FC9AC:;
    a1 = LD_U16(s2+80);
    a0 = s1 + 0;
    v0 = func_089FCAA4();
    goto L_089FC9B8;
L_089FC9B8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089FC958; }
    goto L_089FC9C0;
L_089FC9C0:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FC9DC;
L_089FC9DC:;
    v1 = D_08AEF540 - (-2752);
    f12 = BITSF(LD32(v1-2752));
    f14 = f20;
    a0 = s0 + 0;
    a1 = v0 + 0;
    f13 = f12;
    f15 = f20;
    f0 = func_088DBFA4(a0, a1, f12, f13, f14, f15);
    goto L_089FC9FC;
L_089FC9FC:;
    v0 = LD32(s1);
    goto L_089FC95C;
}

/* 089FCA04 */
u32 func_089FCA04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089FCA04:;
    sp = sp - 48;
    s0 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCA30;
L_089FCA30:;
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+4));
    v0 = D_08AEF544 - (-2748);
    v1 = 1;
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    f4 = f1 * f1;
    ST32(sp+16, FBITS(f1));
    f3 = f3 - f0;
    f5 = f2 * f2;
    ST32(sp+20, FBITS(f2));
    f0 = f3 * f3;
    f4 = f4 + f5;
    f4 = f4 + f0;
    f0 = BITSF(LD32(v0-2748));
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_089FCA90; }
    goto L_089FCA8C;
L_089FCA8C:;
    v1 = 0 + 0;
    goto L_089FCA90;
L_089FCA90:;
    v0 = v1 ^ 0x1;
    sp = sp + 48;
    return v0;
}

/* 089FCAA4 */
u32 func_089FCAA4(void)
{
    u32 v0 = 0;
L_089FCAA4:;
    v0 = 0 + 0;
    return v0;
}

/* 089FCAAC */
rv_t func_089FCAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089FCAAC:;
    sp = sp - 64;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+172);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCAD8;
L_089FCAD8:;
    a3 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_089FCBF8; }
    goto L_089FCAE8;
L_089FCAE8:;
    v0 = LD32(v0);
    a0 = LD32(s0);
    ST32(sp, v0);
    v1 = LD32(a3+4);
    v0 = LD32(a0-12);
    ST32(sp+4, v1);
    v0 = s0 + v0;
    a0 = v0 + 0;
    v1 = LD32(a3+8);
    a2 = LD32(v0);
    ST32(sp+8, v1);
    a1 = LD32(a3+12);
    v0 = LD32(a2+12);
    ST32(sp+12, a1);
    v1 = LD32(a3+16);
    ST32(sp+16, v1);
    a1 = LD32(a3+20);
    t_ = v0;
    ST32(sp+20, a1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCB34;
L_089FCB34:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+4));
    a0 = s1 + 0;
    a1 = s1 + 12;
    f0 = f0 + f1;
    a2 = sp + 0;
    a3 = sp + 32;
    t0 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    t1 = 0 + 0;
    t2 = 0 + 0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
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
    { rv_t r_ = func_08834B8C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCBB4;
L_089FCBB4:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089FCBDC; }
    goto L_089FCBBC;
L_089FCBBC:;
    f0 = BITSF(LD32(sp+32));
    a0 = 1;
    ST32(s2, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s2+4, v1);
    goto L_089FCBDC;
L_089FCBDC:;
    v0 = a0 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089FCBF8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E594(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCC08;
L_089FCC08:;
    a0 = v0 + 0;
    goto L_089FCBDC;
}

/* 089FCC10 */
rv_t func_089FCC10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089FCC10:;
    sp = sp - 80;
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+88));
    v0 = LD32(a0+40);
    f0 = f0 + f1;
    cnd_ = v0 != 0;
    ST32(a0+88, FBITS(f0));
    if (cnd_) { goto L_089FCD4C; }
    goto L_089FCC44;
L_089FCC44:;
    v1 = LD32(s0+108);
    goto L_089FCC48;
L_089FCC48:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+112); goto L_089FCC80; }
    goto L_089FCC54;
L_089FCC54:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCC70;
L_089FCC70:;
    a0 = LD32(s0+108);
    a1 = v0 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCC7C;
L_089FCC7C:;
    v0 = LD32(s0+112);
    goto L_089FCC80;
L_089FCC80:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089FCCD4; }
    goto L_089FCC90;
L_089FCC90:;
    v1 = LD32(s0+84);
    goto L_089FCC94;
L_089FCC94:;
    v0 = 0x8af70000u;
    v0 = v0 | 0x5923;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089FCCC4; }
    goto L_089FCCA4;
L_089FCCA4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A03DFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCCAC;
L_089FCCAC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089FCCC4:;
    func_089FDB7C(a0);
    goto L_089FCCCC;
L_089FCCCC:;
    goto L_089FCCA4;
L_089FCCD4:;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCCDC;
L_089FCCDC:;
    s2 = sp + 48;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_089FCC90; }
    goto L_089FCCEC;
L_089FCCEC:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCD08;
L_089FCD08:;
    a1 = s2 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCD14;
L_089FCD14:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCD30;
L_089FCD30:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 1;
    { rv_t r_ = func_088E48F4(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCD44;
L_089FCD44:;
    v1 = LD32(s0+84);
    goto L_089FCC94;
L_089FCD4C:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCD68;
L_089FCD68:;
    a0 = LD32(s0+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCD74;
L_089FCD74:;
    v1 = LD32(s0+108);
    goto L_089FCC48;
}

/* 089FCD7C */
rv_t func_089FCD7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089FCD7C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089FCD84 */
rv_t func_089FCD84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089FCD84:;
    sp = sp - 176;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089FD028; }
    goto L_089FCDC4;
L_089FCDC4:;
    a0 = 420;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCDCC;
L_089FCDCC:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    func_089FC2B0(a0);
    goto L_089FCDD8;
L_089FCDD8:;
    s3 = LD32(s1+24);
    cnd_ = s3 == 0;
    s0 = s3 + 16;
    if (cnd_) { goto L_089FCE88; }
    goto L_089FCDE4;
L_089FCDE4:;
    v0 = LD32(s2);
    f12 = BITSF(LD32(s1+8));
    a0 = LD32(v0-12);
    a1 = s0 + 0;
    a2 = s3 + 0;
    a0 = s2 + a0;
    { rv_t r_ = func_08876124(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCE00;
L_089FCE00:;
    v1 = s3 + 68;
    v0 = D_08AEF548 - (-2744);
    f0 = BITSF(LD32(v0-2744));
    f3 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(s3+68));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    ST32(sp+24, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s3+16));
    f2 = BITSF(LD32(s0+4));
    f0 = f0 + f3;
    f1 = f1 + f4;
    f2 = f2 + f5;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCE70;
L_089FCE70:;
    v1 = LD32(s2);
    a2 = v0 + 0;
    a0 = s2 + 0;
    v0 = LD32(v1+144);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCE88;
L_089FCE88:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCE9C;
L_089FCE9C:;
    v1 = LD32(s2);
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089FCEB0;
L_089FCEB0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089FD554; }
    goto L_089FCEB8;
L_089FCEB8:;
    a1 = LD32(s2+84);
    goto L_089FCEBC;
L_089FCEBC:;
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    a2 = sp + 96;
    ST32(sp+96, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCED0;
L_089FCED0:;
    a1 = 0x85550000u;
    a0 = LD32(sp+96);
    a1 = a1 | 0x2ac9;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCEE4;
L_089FCEE4:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FD508; }
    goto L_089FCEEC;
L_089FCEEC:;
    a0 = LD32(sp+96);
    goto L_089FCEF0;
L_089FCEF0:;
    a1 = 0x8c70000u;
    a1 = a1 | 0x4656;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCF00;
L_089FCF00:;
    cnd_ = v0 != 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_089FD0A8; }
    goto L_089FCF08;
L_089FCF08:;
    a0 = LD32(sp+96);
    goto L_089FCF0C;
L_089FCF0C:;
    a1 = 0x35e20000u;
    a1 = a1 | 0x15fe;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCF1C;
L_089FCF1C:;
    a0 = LD32(sp+96);
    a1 = 0xbfba0000u;
    a1 = a1 | 0xf153;
    a2 = 0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCF34;
L_089FCF34:;
    a0 = LD32(sp+96);
    a1 = 0xc1f00000u;
    a1 = a1 | 0x2951;
    a2 = 0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FCF4C;
L_089FCF4C:;
    cnd_ = s1 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FCFE8; }
    goto L_089FCF54;
L_089FCF54:;
    cnd_ = s0 == 0;
    v1 = D_08B45AA8 - (23208);
    if (cnd_) { goto L_089FCFE8; }
    goto L_089FCF5C;
L_089FCF5C:;
    v0 = v1 + 23208;
    f0 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+48, FBITS(f0));
    s3 = sp + 48;
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+60, FBITS(f3));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f6));
    ST32(sp+76, FBITS(f7));
    cnd_ = a0 != 0;
    ST32(sp+80, FBITS(f8));
    if (cnd_) { goto L_089FD074; }
    goto L_089FCFB0;
L_089FCFB0:;
    v0 = LD32(s2);
    goto L_089FCFB4;
L_089FCFB4:;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCFCC;
L_089FCFCC:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCFE4;
L_089FCFE4:;
    ST32(s2+112, v0);
    goto L_089FCFE8;
L_089FCFE8:;
    f12 = BITSF(0);
    a0 = LD32(sp+96);
    a1 = 0x27d70000u;
    a1 = a1 | 0xafb9;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FCFFC;
L_089FCFFC:;
    v1 = LD32(s2+84);
    v0 = 0x8af70000u;
    v0 = v0 | 0x5923;
    cnd_ = v1 == v0;
    ST32(s2+116, FBITS(f0));
    if (cnd_) { goto L_089FD064; }
    goto L_089FD010;
L_089FD010:;
    f12 = BITSF(0);
    a0 = LD32(sp+96);
    a1 = 0x6940000u;
    a1 = a1 | 0x745;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD024;
L_089FD024:;
    ST32(s2+128, FBITS(f0));
    goto L_089FD028;
L_089FD028:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_089FD064:;
    a0 = s2 + 0;
    func_089FD948(a0);
    goto L_089FD06C;
L_089FD06C:;
    goto L_089FD010;
L_089FD074:;
    v0 = LD32(s2);
    s0 = sp + 16;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD094;
L_089FD094:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD0A0;
L_089FD0A0:;
    v0 = LD32(s2);
    goto L_089FCFB4;
L_089FD0A8:;
    s6 = D_08B44C2C - (19500);
    a0 = s6 + 19500;
    { rv_t r_ = func_088EBDD0(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD0B4;
L_089FD0B4:;
    s1 = v0 + 0;
    v0 = D_08AEF550 - (-2736);
    f12 = BITSF(LD32(v0-2736));
    a0 = LD32(sp+96);
    a1 = 0xb56e0000u;
    a1 = a1 | 0x691d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD0D0;
L_089FD0D0:;
    a0 = LD32(sp+96);
    a1 = 0x89990000u;
    a2 = 0x98b80000u;
    a1 = a1 | 0x667f;
    a2 = a2 | 0xdc8f;
    f23 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD0EC;
L_089FD0EC:;
    a0 = LD32(sp+96);
    a1 = 0xf8790000u;
    a1 = a1 | 0x6fe8;
    a2 = 0xffff0000u;
    s7 = v0 + 0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089FD104;
L_089FD104:;
    v1 = v0 >> 24;
    f6 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f1 = BITSF(v1);
    f2 = BITSF(v0);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f5 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f6);
    v0 = D_08AEF554 - (-2732);
    f0 = BITSF(LD32(v0-2732));
    a0 = LD32(sp+96);
    a1 = 0xe4e00000u;
    f1 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    a1 = a1 | 0x3fdd;
    a2 = 0 + 0;
    ST32(sp+40, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+32, FBITS(f5));
    ST32(sp+44, FBITS(f1));
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD170;
L_089FD170:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089FD23C; }
    goto L_089FD178;
L_089FD178:;
    v0 = D_08C2C3E0 - (-15392);
    s5 = LD32(v0-15392);
    cnd_ = s5 == 0;
    a0 = D_08C2B3A4 - (-19548);
    if (cnd_) { goto L_089FD238; }
    goto L_089FD188;
L_089FD188:;
    a2 = LD32(s3+88);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_089FD238; }
    goto L_089FD198;
L_089FD198:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089FD1E8; }
    goto L_089FD1BC;
L_089FD1BC:;
    a0 = LD32(a1);
    goto L_089FD1C0;
L_089FD1C0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089FD4E8; }
    goto L_089FD1D8;
L_089FD1D8:;
    a1 = LD32(a1+4);
    goto L_089FD1DC;
L_089FD1DC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089FD1C0; }
    goto L_089FD1E4;
L_089FD1E4:;
    a0 = 0 + 0;
    goto L_089FD1E8;
L_089FD1E8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089FD23C; }
    goto L_089FD1F0;
L_089FD1F0:;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    s0 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD200;
L_089FD200:;
    a0 = LD32(s5+24);
    v1 = D_08C2C070 - (-16272);
    cnd_ = a0 == v0;
    v1 = v1 - 16272;
    if (cnd_) { goto L_089FD218; }
    goto L_089FD210;
L_089FD210:;
    v0 = D_08C2C080 - (-16256);
    v1 = v0 - 16256;
    goto L_089FD218;
L_089FD218:;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    ST32(s0+12, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    ST32(s0+8, FBITS(f3));
    goto L_089FD238;
L_089FD238:;
    v0 = LD32(s2);
    goto L_089FD23C;
L_089FD23C:;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD254;
L_089FD254:;
    s3 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    t1 = LD32(s6+19500);
    if (cnd_) { goto L_089FD390; }
    goto L_089FD264;
L_089FD264:;
    v0 = LD32(t1+12);
    cnd_ = s1 == v0;
    if (cnd_) { s0 = LD32(t1+8); goto L_089FD308; }
    goto L_089FD270;
L_089FD270:;
    a0 = LD32(t1);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089FD2B0; }
    goto L_089FD27C;
L_089FD27C:;
    a1 = LD32(a0+8);
    goto L_089FD280;
L_089FD280:;
    v0 = (s32)s1 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089FD2A0; }
    goto L_089FD28C;
L_089FD28C:;
    v0 = LD32(t1+4);
    v0 = a1 + v0;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089FD2B0; }
    goto L_089FD2A0;
L_089FD2A0:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_089FD280; }
    goto L_089FD2AC;
L_089FD2AC:;
    v1 = 0 + 0;
    goto L_089FD2B0;
L_089FD2B0:;
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089FD308; }
    goto L_089FD2B8;
L_089FD2B8:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    a3 = s1 - v0;
    if (cnd_) { goto L_089FD2F0; }
    goto L_089FD2D0;
L_089FD2D0:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_089FD2D8;
L_089FD2D8:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_089FD4D0; }
    goto L_089FD2E8;
L_089FD2E8:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089FD2D8; }
    goto L_089FD2F0;
L_089FD2F0:;
    v0 = 0 + 0;
    goto L_089FD2F4;
L_089FD2F4:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089FD308; }
    goto L_089FD2FC;
L_089FD2FC:;
    s0 = v0 + 0;
    ST32(t1+8, v0);
    ST32(t1+12, s1);
    goto L_089FD308;
L_089FD308:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s6+19500); goto L_089FD394; }
    goto L_089FD310;
L_089FD310:;
    v1 = LD32(s0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s3));
    if (cnd_) { goto L_089FD374; }
    goto L_089FD320;
L_089FD320:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089FD364; }
    goto L_089FD334;
L_089FD334:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s3+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089FD364; }
    goto L_089FD34C;
L_089FD34C:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s3+8)); goto L_089FD378; }
    goto L_089FD364;
L_089FD364:;
    a0 = s0 + 0;
    func_088EC3FC(a0, t1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FD36C;
L_089FD36C:;
    v1 = LD32(s0+24);
    f2 = BITSF(LD32(s3));
    goto L_089FD374;
L_089FD374:;
    f1 = BITSF(LD32(s3+8));
    goto L_089FD378;
L_089FD378:;
    f0 = BITSF(LD32(s3+4));
    v0 = v1 | 0x4;
    ST32(s0+24, v0);
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_089FD390;
L_089FD390:;
    a0 = LD32(s6+19500);
    goto L_089FD394;
L_089FD394:;
    a1 = s1 + 0;
    f21 = BITSF(LD32(sp+32));
    f22 = BITSF(LD32(sp+36));
    f20 = BITSF(LD32(sp+40));
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD3A8;
L_089FD3A8:;
    cnd_ = v0 == 0;
    s3 = D_08B44C2C - (19500);
    if (cnd_) { goto L_089FD3BC; }
    goto L_089FD3B0;
L_089FD3B0:;
    ST32(v0+44, FBITS(f20));
    ST32(v0+36, FBITS(f21));
    ST32(v0+40, FBITS(f22));
    goto L_089FD3BC;
L_089FD3BC:;
    v0 = D_08AEF558 - (-2728);
    f0 = BITSF(LD32(v0-2728));
    a0 = LD32(s3+19500);
    a1 = s1 + 0;
    f20 = f23 * f0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD3D4;
L_089FD3D4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+28, FBITS(f20)); goto L_089FD3DC; }
    goto L_089FD3DC;
L_089FD3DC:;
    a0 = s7 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD3E4;
L_089FD3E4:;
    a0 = LD32(s3+19500);
    a1 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD3F4;
L_089FD3F4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+32, s0); goto L_089FD3FC; }
    goto L_089FD3FC;
L_089FD3FC:;
    a0 = LD32(s3+19500);
    a1 = s1 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD408;
L_089FD408:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089FD41C; }
    goto L_089FD410;
L_089FD410:;
    v0 = LD32(v0+24);
    v0 = v0 | 0x20;
    ST32(v1+24, v0);
    goto L_089FD41C;
L_089FD41C:;
    a0 = LD32(s3+19500);
    a1 = s1 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD428;
L_089FD428:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089FD448; }
    goto L_089FD430;
L_089FD430:;
    v1 = LD32(v0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FD4C0; }
    goto L_089FD440;
L_089FD440:;
    v0 = v1 | 0x80;
    ST32(s0+24, v0);
    goto L_089FD448;
L_089FD448:;
    a0 = LD32(s6+19500);
    a1 = s1 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD454;
L_089FD454:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FD46C; }
    goto L_089FD45C;
L_089FD45C:;
    v1 = 1;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(a0+24, v0);
    goto L_089FD46C;
L_089FD46C:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD474;
L_089FD474:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    v0 = func_0880ED38(a0, a1, a2);
    goto L_089FD488;
L_089FD488:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(sp+96); goto L_089FCF0C; }
    goto L_089FD490;
L_089FD490:;
    v0 = LD32(s2);
    a1 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0-12);
    v0 = LD32(a1+12);
    a2 = s4 + 0;
    v1 = s2 + v1;
    a1 = LD32(v1+100);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD4B8;
L_089FD4B8:;
    a0 = LD32(sp+96);
    goto L_089FCF0C;
L_089FD4C0:;
    a0 = s0 + 0;
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FD4C8;
L_089FD4C8:;
    v1 = LD32(s0+24);
    goto L_089FD440;
L_089FD4D0:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_089FD2F4;
L_089FD4E8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FD1DC; }
    goto L_089FD4F4;
L_089FD4F4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FD1DC; }
    goto L_089FD500;
L_089FD500:;
    goto L_089FD1E8;
L_089FD508:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD510;
L_089FD510:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089FCEEC; }
    goto L_089FD518;
L_089FD518:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD534;
L_089FD534:;
    a2 = v0 + 0;
    v0 = D_08AEF54C - (-2740);
    f12 = BITSF(LD32(v0-2740));
    a1 = s2 + 108;
    a0 = s0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD54C;
L_089FD54C:;
    a0 = LD32(sp+96);
    goto L_089FCEF0;
L_089FD554:;
    ST32(s2+20, v0);
    v0 = LD32(s2);
    v1 = LD32(v0+140);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD568;
L_089FD568:;
    a1 = LD32(s2+84);
    goto L_089FCEBC;
}

/* 089FD570 */
rv_t func_089FD570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_089FD570:;
    sp = sp - 304;
    s4 = t0 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    f20 = f12;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089FD808; }
    goto L_089FD5C4;
L_089FD5C4:;
    a0 = LD32(a0+40);
    cnd_ = a0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089FD854; }
    goto L_089FD5D0;
L_089FD5D0:;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_089FD82C; }
    goto L_089FD5E0;
L_089FD5E0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089FD630; }
    goto L_089FD604;
L_089FD604:;
    a0 = LD32(a1);
    goto L_089FD608;
L_089FD608:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089FD834; }
    goto L_089FD620;
L_089FD620:;
    a1 = LD32(a1+4);
    goto L_089FD624;
L_089FD624:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089FD608; }
    goto L_089FD62C;
L_089FD62C:;
    s0 = 0 + 0;
    goto L_089FD630;
L_089FD630:;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089FD808; }
    goto L_089FD638;
L_089FD638:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(v1+12);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    t_ = v0;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD660;
L_089FD660:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD694;
L_089FD694:;
    f6 = BITSF(LD32(s3));
    f0 = BITSF(LD32(sp));
    f9 = BITSF(LD32(s3+8));
    f7 = BITSF(LD32(s3+4));
    f6 = f6 - f0;
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(v0));
    f9 = f9 - f1;
    f7 = f7 - f0;
    f12 = BITSF(LD32(v0+4));
    f14 = BITSF(LD32(v0+8));
    f13 = BITSF(LD32(v0+12));
    f11 = BITSF(LD32(v0+16));
    f10 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+32));
    f3 = BITSF(LD32(v0+24));
    f2 = BITSF(LD32(v0+28));
    {u32 a_=sp+(240);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    t3 = D_08B45ACC - (23244);
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    a0 = FBITS(f12);
    v0 = FBITS(f2);
    {u32 a_=sp+(176);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = FBITS(f14);
    {v[33]=BITSF(a0);}
    a0 = FBITS(f13);
    {v[34]=BITSF(v1);}
    v1 = FBITS(f11);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = FBITS(f10);
    {v[33]=BITSF(v1);}
    v1 = LD32(t3+23244);
    {v[34]=BITSF(a0);}
    a0 = FBITS(f3);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = FBITS(f5);
    {v[33]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[34]=BITSF(a0);}
    {v[36]=BITSF(v0);}
    a0 = FBITS(f7);
    v0 = FBITS(f9);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[37]=BITSF(a0);}
    {v[38]=BITSF(v0);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[18]);}
    f8 = BITSF(a0);
    {v0=FBITS(v[16]);}
    {a0=FBITS(v[17]);}
    ST32(sp+80, v0);
    t3 = t3 + 23244;
    a1 = s1 + 0;
    ST32(sp+84, a0);
    a2 = sp + 80;
    a3 = sp + 112;
    ST32(sp+20, FBITS(f12));
    t0 = s4 + 0;
    f12 = f20;
    ST32(sp+16, FBITS(f4));
    ST32(sp+88, FBITS(f8));
    ST32(sp+24, FBITS(f14));
    ST32(sp+28, FBITS(f13));
    ST32(sp+32, FBITS(f11));
    ST32(sp+36, FBITS(f10));
    ST32(sp+40, FBITS(f3));
    ST32(sp+44, FBITS(f2));
    ST32(sp+48, FBITS(f5));
    ST32(sp+64, FBITS(f6));
    ST32(sp+100, a0);
    ST32(sp+68, FBITS(f7));
    ST32(sp+72, FBITS(f9));
    ST32(sp+96, v0);
    ST32(sp+104, FBITS(f8));
    ST32(sp+112, v1);
    v0 = LD32(s2);
    t2 = LD32(t3+12);
    v1 = LD32(t3+4);
    a0 = LD32(v0-12);
    t1 = LD32(t3+8);
    ST32(sp+116, v1);
    a0 = s2 + a0;
    ST32(sp+120, t1);
    ST32(sp+124, t2);
    { rv_t r_ = func_0885E970(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD808;
L_089FD808:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_089FD82C:;
    v0 = 0 + 0;
    goto L_089FD808;
L_089FD834:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089FD620; }
    goto L_089FD840;
L_089FD840:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FD624; }
    goto L_089FD84C;
L_089FD84C:;
    goto L_089FD630;
L_089FD854:;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD868;
L_089FD868:;
    {u32 a_=sp+(240);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    goto L_089FD5D0;
}

/* 089FD87C */
rv_t func_089FD87C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FD87C:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    { rv_t r_ = func_08A04C0C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD88C;
L_089FD88C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FD898 */
rv_t func_089FD898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FD898:;
    sp = sp - 16;
    { rv_t r_ = func_08A04D74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD8A8;
L_089FD8A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FD8B4 */
float func_089FD8B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FD8B4:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    a1 = LD32(a0+84);
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD8E0;
L_089FD8E0:;
    a1 = 0x47280000u;
    a0 = LD32(sp);
    a2 = 0 + 0;
    a1 = a1 | 0xcc13;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD8F4;
L_089FD8F4:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_088EA064(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD900;
L_089FD900:;
    a2 = s0 + 0;
    a3 = 0 + 0;
    cnd_ = v0 != 0;
    t0 = 15;
    if (cnd_) { goto L_089FD924; }
    goto L_089FD910;
L_089FD910:;
    goto L_089FD914;
L_089FD914:;
    sp = sp + 32;
    return f0;
L_089FD924:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a1 = a0 + 28;
    a0 = a0 + 16;
    a1 = s1 + a1;
    a0 = s1 + a0;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD940;
L_089FD940:;
    goto L_089FD914;
}

/* 089FD948 */
void func_089FD948(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089FD948:;
    sp = sp - 128;
    s2 = D_08B1BC90 - (-17264);
    v0 = (u32)-1;
    s0 = s2 - 17264;
    v1 = LD32(s0+24);
    s1 = a0 + 0;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089FDB6C; }
    goto L_089FD978;
L_089FD978:;
    a1 = LD32(s1+84);
    a0 = 0x8a940000u;
    a2 = sp + 80;
    a0 = a0 | 0xc9e9;
    ST32(sp+80, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FD990;
L_089FD990:;
    v0 = D_08AEF55C - (-2724);
    f12 = BITSF(LD32(v0-2724));
    a0 = LD32(sp+80);
    a1 = 0xc3f10000u;
    a1 = a1 | 0xf774;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FD9A8;
L_089FD9A8:;
    a0 = LD32(sp+80);
    a1 = 0xaf3e0000u;
    a2 = (u32)-1;
    a1 = a1 | 0xbdcc;
    ST32(s2-17264, FBITS(f0));
    ST32(s0+4, FBITS(f0));
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089FD9C4;
L_089FD9C4:;
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    f1 = BITSF(v1);
    v1 = (v0 >> 16) & 0xff;
    f2 = BITSF(v1);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f5 = (float)(s32)FBITS(f2);
    v1 = D_08AEF560 - (-2720);
    f1 = BITSF(LD32(v1-2720));
    v0 = v0 >> 24;
    f0 = BITSF(v0);
    f3 = f3 * f1;
    f4 = f4 * f1;
    f5 = f5 * f1;
    a0 = D_08AEF564 - (-2716);
    f6 = BITSF(LD32(a0-2716));
    a2 = s0 + 76;
    a1 = s0 + 60;
    v1 = s0 + 28;
    a0 = s0 + 44;
    f2 = (float)(s32)FBITS(f0);
    ST32(s0+28, FBITS(f5));
    ST32(v1+12, FBITS(f6));
    f2 = f2 * f1;
    ST32(v1+4, FBITS(f4));
    ST32(v1+8, FBITS(f3));
    ST32(s0+44, FBITS(f5));
    ST32(a0+12, FBITS(f6));
    ST32(a0+4, FBITS(f4));
    ST32(a0+8, FBITS(f3));
    ST32(s0+60, FBITS(f5));
    ST32(a1+4, FBITS(f4));
    ST32(a1+8, FBITS(f3));
    ST32(a1+12, 0);
    ST32(s0+76, FBITS(f5));
    ST32(a2+4, FBITS(f4));
    ST32(a2+8, FBITS(f3));
    ST32(a2+12, 0);
    v0 = LD32(s1);
    ST32(sp+8, FBITS(f3));
    a0 = LD32(v0-12);
    ST32(sp+12, FBITS(f2));
    a0 = s1 + a0;
    v1 = LD32(a0);
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f5));
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDA90;
L_089FDA90:;
    f0 = BITSF(LD32(v0));
    v1 = D_08AEF56C - (-2708);
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f20 = BITSF(LD32(v1-2708));
    v0 = D_08AEF568 - (-2712);
    a0 = LD32(sp+80);
    ST32(sp+16, FBITS(f0));
    a1 = 0xbe0e0000u;
    a1 = a1 | 0x397e;
    f0 = BITSF(LD32(v0-2712));
    f12 = f20;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, 0);
    ST32(sp+40, 0);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDAD8;
L_089FDAD8:;
    a0 = sp + 16;
    f5 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+36));
    f3 = BITSF(LD32(sp+40));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    a1 = sp + 48;
    a2 = s0 + 0;
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    ST32(sp+64, FBITS(f5));
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f3));
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDB30;
L_089FDB30:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FDB50; }
    goto L_089FDB38;
L_089FDB38:;
    v0 = LD32(v0+72);
    v1 = LD32(a0+4);
    ST32(a0+68, FBITS(f20));
    v0 = v0 | 0x1;
    ST32(a0+72, v0);
    ST32(s1+120, v1);
    goto L_089FDB50;
L_089FDB50:;
    sp = sp + 128;
    return;
L_089FDB6C:;
    a0 = LD32(s0+20);
    v0 = func_0883AE14(a0);
    goto L_089FDB74;
L_089FDB74:;
    ST32(s0+24, v0);
    goto L_089FD978;
}

/* 089FDB7C */
void func_089FDB7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_089FDB7C:;
    sp = sp - 240;
    s2 = a0 + 0;
    a0 = LD32(a0+120);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FDBB0;
L_089FDBB0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089FDC1C; }
    goto L_089FDBB8;
L_089FDBB8:;
    v0 = LD32(s2);
    f20 = BITSF(0);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v0 = LD32(a0);
    v1 = LD32(v0+20);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDBD8;
L_089FDBD8:;
    v0 = LD32(sp);
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = LD32(s1+72);
    if (cnd_) { goto L_089FDC48; }
    goto L_089FDC14;
L_089FDC14:;
    v0 = v0 | 0x1;
    ST32(s1+72, v0);
    goto L_089FDC1C;
L_089FDC1C:;
    goto L_089FDC20;
L_089FDC20:;
    sp = sp + 240;
    return;
L_089FDC48:;
    ST32(s1+32, FBITS(f20));
    s3 = D_08AEF570 - (-2704);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+72, v0);
    s0 = sp + 96;
    s5 = sp + 16;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s4 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDC7C;
L_089FDC7C:;
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0));
    ST32(sp+24, FBITS(f4));
    a1 = sp + 64;
    a2 = sp + 32;
    ST32(sp+16, FBITS(f3));
    a0 = s0 + 0;
    ST32(sp+20, FBITS(f1));
    v1 = LD32(s2);
    f21 = BITSF(LD32(s1+68));
    f0 = BITSF(LD32(s3-2704));
    v0 = LD32(v1-16);
    f2 = BITSF(FBITS(f21) ^ 0x80000000u);
    ST32(sp+36, FBITS(f0));
    v0 = s2 + v0;
    f12 = f21;
    f1 = f1 + f2;
    a3 = LD32(v0+4);
    v0 = D_08AEF574 - (-2700);
    f0 = BITSF(LD32(v0-2700));
    ST32(sp+64, FBITS(f3));
    ST32(sp+52, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f4));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f20));
    ST32(sp+32, FBITS(f20));
    ST32(sp+40, FBITS(f20));
    ST32(sp+48, FBITS(f20));
    ST32(sp+56, FBITS(f20));
    ST32(sp+80, FBITS(f20));
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089FDD00;
L_089FDD00:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDD08;
L_089FDD08:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_089FDE34; }
    goto L_089FDD18;
L_089FDD18:;
    f0 = BITSF(LD32(v1));
    f5 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+36));
    f3 = BITSF(LD32(sp+40));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(sp+72));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    a1 = sp + 80;
    f12 = f21;
    a0 = s1 + 0;
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+160, FBITS(f5));
    ST32(sp+164, FBITS(f4));
    ST32(sp+168, FBITS(f3));
    goto L_089FDD70;
L_089FDD70:;
    { rv_t r_ = func_088EB7DC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDD78;
L_089FDD78:;
    f2 = BITSF(LD32(s2+128));
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(s3-2704));
    if (cnd_) { goto L_089FDD9C; }
    goto L_089FDD90;
L_089FDD90:;
    f1 = f1 / f2;
    f0 = BITSF(LD32(s2+88));
    f1 = f0 * f1;
    goto L_089FDD9C;
L_089FDD9C:;
    ST32(s1+12, FBITS(f1));
    ST32(s1+8, FBITS(f1));
    a1 = LD32(s2+124);
    cnd_ = a1 != 0;
    v0 = D_08AEF578 - (-2696);
    if (cnd_) { goto L_089FDDC8; }
    goto L_089FDDB0;
L_089FDDB0:;
    f0 = BITSF(LD32(s2+88));
    f1 = BITSF(LD32(v0-2696));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 0x36e60000u;
    if (cnd_) { goto L_089FDE10; }
    goto L_089FDDC8;
L_089FDDC8:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FDDD4;
L_089FDDD4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089FDC1C; }
    goto L_089FDDDC;
L_089FDDDC:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDDF8;
L_089FDDF8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDE08;
L_089FDE08:;
    goto L_089FDC20;
L_089FDE10:;
    a1 = D_08B45AA8 - (23208);
    a0 = s5 + 0;
    a1 = a1 + 23208;
    a2 = a2 | 0x2bcc;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDE2C;
L_089FDE2C:;
    ST32(s2+124, v0);
    goto L_089FDC1C;
L_089FDE34:;
    f12 = f21;
    a0 = s1 + 0;
    a1 = s5 + 0;
    goto L_089FDD70;
}

/* 089FDE44 */
void func_089FDE44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FDE44:;
    sp = sp - 16;
    v0 = a1 + 96;
    s2 = a0 + 16;
    s1 = 0 + 0;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a1+96));
    f2 = BITSF(LD32(v0+4));
    v0 = a0 + 68;
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(a0+68, FBITS(f1));
    v1 = LD32(a1);
    v0 = LD32(v1-16);
    v0 = a1 + v0;
    v1 = LD_U16(v0+8);
    ST16(a0+80, v1);
    v0 = LD32(a1+132);
    ST32(a0+84, v0);
    v1 = LD32(a1);
    v0 = LD32(v1-20);
    v0 = a1 + v0;
    v1 = LD32(v0+4);
    ST32(a0+88, v1);
    v0 = LD32(a1);
    v1 = LD32(v0-20);
    a1 = a1 + v1;
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089FDED0; }
    goto L_089FDEC4;
L_089FDEC4:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    s1 = a1 + v1;
    goto L_089FDED0;
L_089FDED0:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDEE0;
L_089FDEE0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDEEC;
L_089FDEEC:;
    v1 = LD32(s1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDEFC;
L_089FDEFC:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    ST32(s2+4, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    ST32(s0+16, FBITS(f2));
    f0 = BITSF(LD32(s1+40));
    ST32(s0+28, FBITS(f0));
    v0 = LD32(s1+8);
    ST32(s0+52, v0);
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+12); goto L_089FDF30; }
    goto L_089FDF30;
L_089FDF30:;
    ST32(s0+32, v0);
    v1 = LD32(s1+20);
    ST32(s0+36, v1);
    v0 = LD32(s1+20);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089FDF4C; }
    goto L_089FDF48;
L_089FDF48:;
    a0 = LD32(s1+28);
    goto L_089FDF4C;
L_089FDF4C:;
    ST32(s0+40, a0);
    f0 = BITSF(LD32(s1+32));
    ST32(s0+44, FBITS(f0));
    f1 = BITSF(LD32(s1+36));
    ST32(s0+48, FBITS(f1));
    v0 = LD32(s1+48);
    ST32(s0+56, v0);
    v1 = LD32(s1+52);
    ST32(s0+60, v1);
    v0 = (u32)(s32)LD_S16(s1+60);
    ST16(s0+64, v0);
    v1 = LD_U8(s1+62);
    ST8(s0+66, v1);
    sp = sp + 16;
    return;
}

/* 089FDF98 */
void func_089FDF98(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FDF98:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FDFBC;
L_089FDFBC:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 17;
    t0 = 92;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089FDFD8;
L_089FDFD8:;
    a0 = s2 + 0;
    func_089FE000(a0);
    goto L_089FDFE0;
L_089FDFE0:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089FDFE8;
L_089FDFE8:;
    sp = sp + 16;
    return;
}

/* 089FE000 */
void func_089FE000(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089FE000:;
    sp = sp - 128;
    s0 = a0 + 0;
    func_08864D34(a0);
    goto L_089FE018;
L_089FE018:;
    v0 = D_08AEF57C - (-2692);
    f12 = BITSF(LD32(v0-2692));
    f20 = BITSF(0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 7;
    a3 = 68;
    t0 = 96;
    t1 = 1;
    t2 = 2;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089FE044;
L_089FE044:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 3;
    a3 = 80;
    t0 = 16;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089FE068;
L_089FE068:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 84;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089FE08C;
L_089FE08C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 88;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089FE0B0;
L_089FE0B0:;
    sp = sp + 128;
    return;
}

/* 089FE0C4 */
rv_t func_089FE0C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FE0C4:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FE1EC; }
    goto L_089FE0FC;
L_089FE0FC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF580 - (-2688);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2688));
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
    t0 = D_08C2C070 - (-16272);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C080 - (-16256);
    a3 = D_08C2C090 - (-16240);
    s3 = D_08C2C0A0 - (-16224);
    v1 = t0 - 16272;
    a1 = v0 - 16256;
    a2 = a3 - 16240;
    f1 = f1 * f3;
    s0 = s3 - 16224;
    ST32(v0-16256, FBITS(f5));
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
    ST32(t0-16272, FBITS(f1));
    ST32(a3-16240, FBITS(f2));
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE1B4;
L_089FE1B4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-16224, v0);
    if (cnd_) { goto L_089FE1E0; }
    goto L_089FE1C4;
L_089FE1C4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089FE1CC;
L_089FE1CC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089FE1CC; }
    goto L_089FE1E0;
L_089FE1E0:;
    v0 = s3 - 16224;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089FE1EC;
L_089FE1EC:;
    s0 = s1 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08ADEB10 - (-5360); goto L_089FE24C; }
    goto L_089FE200;
L_089FE200:;
    v0 = s4 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089FE220; }
    goto L_089FE210;
L_089FE210:;
    v0 = D_08C2C0A0 - (-16224);
    a0 = LD32(v0-16224);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089FE23C; }
    goto L_089FE220;
L_089FE220:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089FE23C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE244;
L_089FE244:;
    goto L_089FE220;
L_089FE24C:;
    a0 = a0 - 5360;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE254;
L_089FE254:;
    v1 = D_08B1BC90 - (-17264);
    v1 = v1 - 17264;
    ST32(v1+20, v0);
    goto L_089FE200;
}

/* 089FE264 */
rv_t func_089FE264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FE264:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089FE0C4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE278;
L_089FE278:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FE284 */
rv_t func_089FE284(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FE284:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089FE0C4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE298;
L_089FE298:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FE2A4 */
void func_089FE2A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FE2A4:;
    sp = sp - 32;
    s3 = a0 + 492;
    s1 = a0 + 0;
    a0 = s3 + 0;
    s0 = D_08B125F8 - (9720);
    s0 = s0 + 9720;
    s2 = s1 + 228;
    func_08873BF8(a0);
    goto L_089FE2D8;
L_089FE2D8:;
    a1 = s0 + 44;
    a0 = s2 + 0;
    func_0885D56C(a0, a1);
    goto L_089FE2E4;
L_089FE2E4:;
    a0 = s1 + 512;
    a1 = s0 + 68;
    s0 = s0 + 4;
    func_0885EF0C(a0, a1);
    goto L_089FE2F4;
L_089FE2F4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089FC154(a0, a1);
    goto L_089FE300;
L_089FE300:;
    v1 = D_08B1242C - (9260);
    v1 = v1 + 9260;
    a0 = v1 + 444;
    v0 = v1 + 280;
    ST32(s1+228, v0);
    a2 = D_08B45A9C - (23196);
    a3 = a2 + 23196;
    ST32(s1+512, a0);
    t0 = s1 + 144;
    t1 = v1 + 392;
    ST32(s1, v1);
    a1 = D_08B45AA8 - (23208);
    v0 = a1 + 23208;
    ST32(s1+132, 0);
    v1 = s1 + 156;
    a0 = s1 + 192;
    ST32(s1+136, 0);
    ST32(s1+140, 0);
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3+4));
    ST32(s1+492, t1);
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(s1+144, FBITS(f2));
    f0 = BITSF(LD32(a1+23208));
    f1 = BITSF(LD32(v0+4));
    f8 = BITSF(LD32(v0+8));
    ST32(s1+156, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f2 = BITSF(LD32(a1+23208));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(v0+28));
    ST32(s1+192, FBITS(f2));
    ST32(v1+32, FBITS(f0));
    ST32(v1+8, FBITS(f8));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    v1 = 1;
    f0 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(a0+4, FBITS(f1));
    f1 = BITSF(LD32(v0+8));
    v0 = (u32)-32730;
    ST32(a0+32, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    ST32(a0+12, FBITS(f2));
    ST32(a0+16, FBITS(f3));
    ST32(a0+20, FBITS(f4));
    ST32(a0+24, FBITS(f5));
    ST32(a0+28, FBITS(f6));
    ST16(s3+8, v0);
    ST8(s2+246, v1);
    sp = sp + 32;
    return;
}

/* 089FE420 */
rv_t func_089FE420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FE420:;
    sp = sp - 16;
    v0 = D_08B1242C - (9260);
    v0 = v0 + 9260;
    s1 = a0 + 0;
    a2 = v0 + 444;
    a0 = v0 + 392;
    v1 = v0 + 280;
    ST32(s1+492, a0);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    ST32(s1+512, a2);
    a2 = 1;
    a1 = LD32(s1+104);
    ST32(s1+228, v1);
    ST32(s1, v0);
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE46C;
L_089FE46C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FE490; }
    goto L_089FE478;
L_089FE478:;
    v1 = LD32(v0);
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE488;
L_089FE488:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089FE504; }
    goto L_089FE490;
L_089FE490:;
    s0 = D_08B125F8 - (9720);
    s0 = s0 + 9720;
    goto L_089FE498;
L_089FE498:;
    a0 = s1 + 0;
    a1 = s0 + 4;
    func_089FC410(a0, a1);
    goto L_089FE4A4;
L_089FE4A4:;
    a1 = LD32(s0+68);
    t0 = s0 + 68;
    a2 = s1 + 512;
    ST32(s1+512, a1);
    s0 = s0 + 44;
    a0 = s1 + 228;
    v0 = LD32(a1-12);
    v1 = LD32(t0+4);
    a1 = s0 + 0;
    v0 = a2 + v0;
    ST32(v0, v1);
    v1 = LD32(s1+512);
    a3 = LD32(t0+8);
    v0 = LD32(v1-16);
    a2 = a2 + v0;
    ST32(a2, a3);
    func_0885D658(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FE4E8;
L_089FE4E8:;
    a0 = s1 + 492;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE4F0;
L_089FE4F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089FE504:;
    v1 = LD32(s0);
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE514;
L_089FE514:;
    a2 = LD32(v0+20);
    v1 = 0xf4a20000u;
    v1 = v1 | 0xac2b;
    a0 = v0 + 0;
    cnd_ = a2 != v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_089FE490; }
    goto L_089FE52C;
L_089FE52C:;
    s0 = D_08B125F8 - (9720);
    { rv_t r_ = func_08A20D60(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE534;
L_089FE534:;
    s0 = s0 + 9720;
    goto L_089FE498;
}

/* 089FE53C */
rv_t func_089FE53C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FE53C:;
    sp = sp - 16;
    v0 = D_08B1242C - (9260);
    v0 = v0 + 9260;
    s1 = a0 + 0;
    a2 = v0 + 444;
    a0 = v0 + 392;
    v1 = v0 + 280;
    ST32(s1+492, a0);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    ST32(s1+512, a2);
    a2 = 1;
    a1 = LD32(s1+104);
    ST32(s1+228, v1);
    ST32(s1, v0);
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE588;
L_089FE588:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FE5AC; }
    goto L_089FE594;
L_089FE594:;
    v1 = LD32(v0);
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE5A4;
L_089FE5A4:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089FE628; }
    goto L_089FE5AC;
L_089FE5AC:;
    s0 = D_08B125F8 - (9720);
    s0 = s0 + 9720;
    goto L_089FE5B4;
L_089FE5B4:;
    a0 = s1 + 0;
    a1 = s0 + 4;
    func_089FC410(a0, a1);
    goto L_089FE5C0;
L_089FE5C0:;
    a1 = LD32(s0+68);
    t0 = s0 + 68;
    a2 = s1 + 512;
    ST32(s1+512, a1);
    s0 = s0 + 44;
    a0 = s1 + 228;
    v0 = LD32(a1-12);
    v1 = LD32(t0+4);
    a1 = s0 + 0;
    v0 = a2 + v0;
    ST32(v0, v1);
    v1 = LD32(s1+512);
    a3 = LD32(t0+8);
    v0 = LD32(v1-16);
    a2 = a2 + v0;
    ST32(a2, a3);
    func_0885D658(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FE604;
L_089FE604:;
    a0 = s1 + 492;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE60C;
L_089FE60C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FE614;
L_089FE614:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089FE628:;
    v1 = LD32(s0);
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE638;
L_089FE638:;
    a2 = LD32(v0+20);
    v1 = 0xf4a20000u;
    v1 = v1 | 0xac2b;
    a0 = v0 + 0;
    cnd_ = a2 != v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_089FE5AC; }
    goto L_089FE650;
L_089FE650:;
    s0 = D_08B125F8 - (9720);
    { rv_t r_ = func_08A20D60(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE658;
L_089FE658:;
    s0 = s0 + 9720;
    goto L_089FE5B4;
}

/* 089FE660 */
rv_t func_089FE660(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_089FE660:;
    sp = sp - 400;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    s1 = a0 + 0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { rv_t r_ = func_089FCC10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE6A8;
L_089FE6A8:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    v0 = D_08AEF594 - (-2668);
    f0 = BITSF(LD32(v0-2668));
    f1 = BITSF(LD32(s1+132));
    ST32(sp, 0);
    f0 = f2 * f0;
    a2 = s1 + 156;
    ST32(sp+8, 0);
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f1));
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
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[100]));}
    {ST32(sp+(32),FBITS(v[101]));}
    {ST32(sp+(36),FBITS(v[102]));}
    {ST32(sp+(40),FBITS(v[104]));}
    {ST32(sp+(44),FBITS(v[105]));}
    {ST32(sp+(48),FBITS(v[106]));}
    ST32(s1+132, FBITS(f1));
    {v[112]=BITSF(LD32(s1+(192)));}
    {v[113]=BITSF(LD32(s1+(196)));}
    {v[114]=BITSF(LD32(s1+(200)));}
    {v[116]=BITSF(LD32(s1+(204)));}
    {v[117]=BITSF(LD32(s1+(208)));}
    {v[118]=BITSF(LD32(s1+(212)));}
    {v[120]=BITSF(LD32(s1+(216)));}
    {v[121]=BITSF(LD32(s1+(220)));}
    {v[122]=BITSF(LD32(s1+(224)));}
    {v[96]=BITSF(LD32(sp+(16)));}
    {v[97]=BITSF(LD32(sp+(20)));}
    {v[98]=BITSF(LD32(sp+(24)));}
    {v[100]=BITSF(LD32(sp+(28)));}
    {v[101]=BITSF(LD32(sp+(32)));}
    {v[102]=BITSF(LD32(sp+(36)));}
    {v[104]=BITSF(LD32(sp+(40)));}
    {v[105]=BITSF(LD32(sp+(44)));}
    {v[106]=BITSF(LD32(sp+(48)));}
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
    f0 = BITSF(LD32(sp+68));
    f1 = BITSF(LD32(sp+72));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    f0 = BITSF(LD32(sp+76));
    f1 = BITSF(LD32(sp+80));
    ST32(a2+12, FBITS(f0));
    ST32(a2+16, FBITS(f1));
    f0 = BITSF(LD32(sp+84));
    f1 = BITSF(LD32(sp+88));
    ST32(a2+20, FBITS(f0));
    ST32(a2+24, FBITS(f1));
    f0 = BITSF(LD32(sp+92));
    f1 = BITSF(LD32(sp+96));
    ST32(a2+28, FBITS(f0));
    ST32(a2+32, FBITS(f1));
    f4 = BITSF(LD32(s1+140));
    f1 = BITSF(LD32(s1+136));
    f0 = BITSF(LD32(sp+64));
    fcc = FCMP(f4, f1, 2);
    ST32(s1+156, FBITS(f0));
    cnd_ = fcc;
    {u32 a_=sp+(320);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089FE88C; }
    goto L_089FE834;
L_089FE834:;
    f1 = f1 - f4;
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = D_08AEF598 - (-2664);
    f0 = BITSF(LD32(v0-2664));
    v0 = FBITS(f1);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f2 = f2 * f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v1=FBITS(v[0]);}
    fcc = FCMP(f2, f1, 14);
    f0 = BITSF(v1);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 * f2; goto L_089FE880; }
    goto L_089FE878;
L_089FE878:;
    f2 = BITSF(v0);
    f0 = f0 * f2;
    goto L_089FE880;
L_089FE880:;
    f0 = f4 + f0;
    ST32(s1+140, FBITS(f0));
    f4 = f0;
    goto L_089FE88C;
L_089FE88C:;
    a1 = LD32(s1);
    v1 = LD32(s1+156);
    v0 = LD32(a2+4);
    a0 = LD32(a1-12);
    {u32 a_=sp+(224);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a1 = LD32(a2+32);
    {v[32]=BITSF(v1);}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(a2+8);
    {v[33]=BITSF(v0);}
    {u32 a_=sp+(208);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = LD32(a2+16);
    {v[34]=BITSF(v1);}
    v1 = LD32(a2+12);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(240);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(a2+20);
    {v[33]=BITSF(v0);}
    v0 = LD32(a2+24);
    {v[34]=BITSF(v1);}
    v1 = LD32(a2+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v0);}
    v0 = 0 + 0;
    {v[33]=BITSF(v1);}
    {v[16]=BITSF(v0);}
    v1 = FBITS(f4);
    {v[34]=BITSF(a1);}
    {v[17]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f3 = BITSF(v0);
    a0 = s1 + a0;
    {v1=FBITS(v[20]);}
    {v0=FBITS(v[21]);}
    ST32(sp+128, v1);
    s0 = s1 + 144;
    ST32(sp+136, FBITS(f3));
    ST32(sp+148, FBITS(f4));
    ST32(sp+160, v1);
    ST32(sp+168, FBITS(f3));
    ST32(sp+144, 0);
    ST32(sp+132, v0);
    ST32(sp+152, 0);
    ST32(sp+164, v0);
    { rv_t r_ = func_08875D9C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE954;
L_089FE954:;
    f0 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(sp+132));
    f1 = BITSF(LD32(sp+136));
    f4 = BITSF(LD32(v0));
    f2 = f2 + f0;
    f1 = f1 + f3;
    f0 = BITSF(LD32(sp+128));
    ST32(s0+4, FBITS(f2));
    f0 = f0 + f4;
    ST32(s0+8, FBITS(f1));
    v1 = LD32(s1);
    ST32(s1+144, FBITS(f0));
    v0 = LD32(v1-12);
    ST32(sp+112, FBITS(f0));
    v0 = s1 + v0;
    s4 = LD32(v0+100);
    ST32(sp+116, FBITS(f2));
    cnd_ = s4 == 0;
    ST32(sp+120, FBITS(f1));
    if (cnd_) { goto L_089FEA0C; }
    goto L_089FE9A4;
L_089FE9A4:;
    v1 = D_08ADEB28 - (-5336);
    v0 = LD32(v1-5336);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089FEA0C; }
    goto L_089FE9B4;
L_089FE9B4:;
    v1 = v1 - 5336;
    fp = sp + 160;
    a0 = 0 + 0;
    s7 = 999;
    s6 = v1 + 0;
    goto L_089FE9C8;
L_089FE9C8:;
    v0 = a0 + v1;
    a1 = LD32(v0);
    a0 = s4 + 0;
    ST32(sp+160, 0);
    ST32(sp+164, 0);
    ST32(sp+168, 0);
    ST32(sp+176, s7);
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FE9E8;
L_089FE9E8:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089FEA40; }
    goto L_089FE9F0;
L_089FE9F0:;
    s3 = s3 + 1;
    goto L_089FE9F4;
L_089FE9F4:;
    v0 = s3 << 2;
    v1 = v0 + s6;
    a0 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    v1 = s6 + 0;
    if (cnd_) { goto L_089FE9C8; }
    goto L_089FEA0C;
L_089FEA0C:;
    sp = sp + 400;
    return (rv_t){ v0, v1, f0 };
L_089FEA40:;
    v0 = 1;
    ST8(a0+92, v0);
    a1 = fp + 0;
    a2 = sp + 176;
    { rv_t r_ = func_08968D74(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEA54;
L_089FEA54:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_089FE9F4; }
    goto L_089FEA5C;
L_089FEA5C:;
    v1 = LD32(s1+104);
    v0 = LD32(sp+176);
    cnd_ = v0 == v1;
    a0 = 0x8a940000u;
    if (cnd_) { goto L_089FE9F0; }
    goto L_089FEA6C;
L_089FEA6C:;
    a1 = LD32(s1+84);
    a2 = sp + 180;
    a0 = a0 | 0xc9e9;
    s0 = D_08AEF59C - (-2660);
    ST32(sp+180, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FEA84;
L_089FEA84:;
    a1 = 0xbdde0000u;
    f12 = BITSF(LD32(s0-2660));
    a0 = LD32(sp+180);
    a1 = a1 | 0x31c2;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEA98;
L_089FEA98:;
    a2 = LD32(sp+176);
    v1 = D_08C2C200 - (-15872);
    f20 = f0;
    cnd_ = a2 == s7;
    v0 = v1 - 15872;
    if (cnd_) { goto L_089FEB20; }
    goto L_089FEAAC;
L_089FEAAC:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089FEAFC; }
    goto L_089FEAD0;
L_089FEAD0:;
    a0 = LD32(a1);
    goto L_089FEAD4;
L_089FEAD4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089FEBD4; }
    goto L_089FEAEC;
L_089FEAEC:;
    a1 = LD32(a1+4);
    goto L_089FEAF0;
L_089FEAF0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089FEAD4; }
    goto L_089FEAF8;
L_089FEAF8:;
    a0 = 0 + 0;
    goto L_089FEAFC;
L_089FEAFC:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = 0x8001; goto L_089FEB24; }
    goto L_089FEB04;
L_089FEB04:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = a0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    f12 = BITSF(LD32(s0-2660));
    if (cnd_) { goto L_089FEBBC; }
    goto L_089FEB20;
L_089FEB20:;
    a0 = 0x8001;
    goto L_089FEB24;
L_089FEB24:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FEB34;
L_089FEB34:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089FE9F0; }
    goto L_089FEB3C;
L_089FEB3C:;
    a1 = LD32(s1+104);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FEB50;
L_089FEB50:;
    cnd_ = v0 == 0;
    s5 = 999;
    if (cnd_) { goto L_089FEB70; }
    goto L_089FEB58;
L_089FEB58:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEB6C;
L_089FEB6C:;
    s5 = v0 + 0;
    goto L_089FEB70;
L_089FEB70:;
    s0 = LD32(s2+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089FEB7C;
L_089FEB7C:;
    ST32(s0+12, FBITS(f20));
    v0 = 0xf4a20000u;
    v0 = v0 | 0xac2b;
    v1 = LD32(s1+104);
    ST32(s0, v0);
    a0 = s2 + 0;
    a1 = 1;
    ST32(s0+4, v1);
    a2 = 1;
    ST32(s0+8, s5);
    v0 = LD32(sp+176);
    ST32(s2+4, s5);
    ST32(s2, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEBB4;
L_089FEBB4:;
    s3 = s3 + 1;
    goto L_089FE9F4;
L_089FEBBC:;
    a0 = LD32(sp+180);
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEBCC;
L_089FEBCC:;
    f20 = f0;
    goto L_089FEB20;
L_089FEBD4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FEAF0; }
    goto L_089FEBE0;
L_089FEBE0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089FEAF0; }
    goto L_089FEBEC;
L_089FEBEC:;
    goto L_089FEAFC;
}

/* 089FEBF4 */
rv_t func_089FEBF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FEBF4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 516;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089FEC68; }
    goto L_089FEC10;
L_089FEC10:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEC18;
L_089FEC18:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_089FE2A4(a0);
    goto L_089FEC24;
L_089FEC24:;
    v0 = LD32(s1+24);
    a1 = v0 + 16;
    a3 = v0 + 68;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089FEC4C; }
    goto L_089FEC38;
L_089FEC38:;
    v0 = LD32(s0);
    f12 = BITSF(LD32(s1+8));
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_08875FB8(a0, a1, a2, a3, f12);
    goto L_089FEC4C;
L_089FEC4C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEC60;
L_089FEC60:;
    a0 = s0 + 0;
    { rv_t r_ = func_089FEC7C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEC68;
L_089FEC68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FEC7C */
rv_t func_089FEC7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[752] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 752);
L_089FEC7C:;
    sp = sp - 752;
    s4 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+104);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FECC8;
L_089FECC8:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089FECEC; }
    goto L_089FECD0;
L_089FECD0:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FECE4;
L_089FECE4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_089FED24; }
    goto L_089FECEC;
L_089FECEC:;
    goto L_089FECF0;
L_089FECF0:;
    sp = sp + 752;
    return (rv_t){ v0, v1, f0 };
L_089FED24:;
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FED30;
L_089FED30:;
    v1 = LD32(v0+20);
    s6 = v0 + 0;
    v0 = 0xf4a20000u;
    v0 = v0 | 0xac2b;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_089FECF0; }
    goto L_089FED48;
L_089FED48:;
    s5 = LD32(s6+308);
    cnd_ = s5 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_089FED70; }
    goto L_089FED54;
L_089FED54:;
    v1 = LD32(s5);
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FED64;
L_089FED64:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s5); goto L_089FED80; }
    goto L_089FED6C;
L_089FED6C:;
    a0 = s6 + 0;
    goto L_089FED70;
L_089FED70:;
    a1 = 1;
    { rv_t r_ = func_08A20D60(a0, a1, 0, 0, 0, 0, 0, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FED78;
L_089FED78:;
    goto L_089FECF0;
L_089FED80:;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FED8C;
L_089FED8C:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_089FED6C; }
    goto L_089FED98;
L_089FED98:;
    v1 = LD32(s5);
    s2 = D_08B45A9C - (23196);
    v0 = LD32(v1+36);
    t_ = v0;
    s1 = s2 + 23196;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEDAC;
L_089FEDAC:;
    v1 = LD32(s4);
    a2 = LD32(v0+16);
    v0 = D_08B285B4 - (-31308);
    a0 = LD32(v1-12);
    f13 = BITSF(LD32(v0-31308));
    f12 = BITSF(0);
    a1 = LD32(a2+64);
    a3 = 0 + 0;
    a2 = 0 + 0;
    a0 = s4 + a0;
    func_0885E6B0(a0, a1, a2, a3, 0, 0, 0, f12, f13);
    goto L_089FEDD8;
L_089FEDD8:;
    v0 = LD32(s4);
    a1 = LD32(s5);
    a0 = s5 + 0;
    v1 = LD32(v0-12);
    v0 = LD32(a1+36);
    v1 = s4 + v1;
    t_ = v0;
    s0 = LD32(v1+100);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEDF8;
L_089FEDF8:;
    a1 = v0 + 0;
    v0 = LD32(s0);
    a3 = 1;
    t0 = 1;
    t1 = LD32(v0+8);
    a0 = s0 + 0;
    t_ = t1;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEE18;
L_089FEE18:;
    v1 = LD32(s4);
    a1 = LD32(v1-16);
    v0 = LD32(v1-12);
    a1 = s4 + a1;
    v0 = s4 + v0;
    v1 = LD32(a1+4);
    a2 = LD32(v0+100);
    ST32(a2+232, v1);
    a1 = LD32(s3);
    v0 = LD32(a1+92);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEE48;
L_089FEE48:;
    f8 = BITSF(LD32(v0+32));
    f19 = BITSF(LD32(s2+23196));
    f13 = BITSF(LD32(s1+4));
    f10 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    a0 = s5 + 0;
    a1 = sp + 48;
    a2 = 0 + 0;
    ST32(sp+48, FBITS(f19));
    ST32(sp+52, FBITS(f13));
    ST32(sp+56, FBITS(f10));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    { rv_t r_ = func_0880DD94(a0, a1, a2, 0, 0, 0, 0.0f, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FEEB8;
L_089FEEB8:;
    v0 = D_08AEF5A0 - (-2656);
    f0 = BITSF(LD32(v0-2656));
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
    if (cnd_) { goto L_089FF140; }
    goto L_089FEEFC;
L_089FEEFC:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF080; }
    goto L_089FEF0C;
L_089FEF0C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089FEFA4; }
    goto L_089FEF34;
L_089FEF34:;
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
    if (cnd_) { goto L_089FEF80; }
    goto L_089FEF70;
L_089FEF70:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089FEF80;
L_089FEF80:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FEFC4; }
    goto L_089FEF90;
L_089FEF90:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089FEFC4; }
    goto L_089FEFA0;
L_089FEFA0:;
    goto L_089FEFA4;
L_089FEFA4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FEFC4; }
    goto L_089FEFB8;
L_089FEFB8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089FEFC4;
L_089FEFC4:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089FF054; }
    goto L_089FEFE4;
L_089FEFE4:;
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
    if (cnd_) { goto L_089FF030; }
    goto L_089FF020;
L_089FF020:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089FF030;
L_089FF030:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF074; }
    goto L_089FF040;
L_089FF040:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089FF074; }
    goto L_089FF050;
L_089FF050:;
    goto L_089FF054;
L_089FF054:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF074; }
    goto L_089FF068;
L_089FF068:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089FF074;
L_089FF074:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089FF1F8; }
    goto L_089FF07C;
L_089FF07C:;
    goto L_089FF080;
L_089FF080:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089FF114; }
    goto L_089FF0A4;
L_089FF0A4:;
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
    if (cnd_) { goto L_089FF0F0; }
    goto L_089FF0E0;
L_089FF0E0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089FF0F0;
L_089FF0F0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF134; }
    goto L_089FF100;
L_089FF100:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089FF134; }
    goto L_089FF110;
L_089FF110:;
    goto L_089FF114;
L_089FF114:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF134; }
    goto L_089FF128;
L_089FF128:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089FF134;
L_089FF134:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089FF1F8; }
    goto L_089FF13C;
L_089FF13C:;
    goto L_089FF140;
L_089FF140:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089FF1D4; }
    goto L_089FF164;
L_089FF164:;
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
    if (cnd_) { goto L_089FF1B0; }
    goto L_089FF1A0;
L_089FF1A0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089FF1B0;
L_089FF1B0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF1F4; }
    goto L_089FF1C0;
L_089FF1C0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089FF1F4; }
    goto L_089FF1D0;
L_089FF1D0:;
    goto L_089FF1D4;
L_089FF1D4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089FF1F4; }
    goto L_089FF1E8;
L_089FF1E8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089FF1F4;
L_089FF1F4:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089FF1F8;
L_089FF1F8:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    ST32(sp+72, 0);
    v1 = s4 + 156;
    a0 = s4 + 192;
    ST32(sp+64, 0);
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
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    a1 = s4 + 144;
    ST32(sp+136, FBITS(f0));
    ST32(sp+128, 0);
    ST32(sp+132, 0);
    {v[112]=BITSF(LD32(sp+(128)));}
    {v[113]=BITSF(LD32(sp+(132)));}
    {v[114]=BITSF(LD32(sp+(136)));}
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
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[100]));}
    {ST32(sp+(96),FBITS(v[101]));}
    {ST32(sp+(100),FBITS(v[102]));}
    {ST32(sp+(104),FBITS(v[104]));}
    {ST32(sp+(108),FBITS(v[105]));}
    {ST32(sp+(112),FBITS(v[106]));}
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
    {v[116]=BITSF(LD32(sp+(92)));}
    {v[117]=BITSF(LD32(sp+(96)));}
    {v[118]=BITSF(LD32(sp+(100)));}
    {v[120]=BITSF(LD32(sp+(104)));}
    {v[121]=BITSF(LD32(sp+(108)));}
    {v[122]=BITSF(LD32(sp+(112)));}
    {v[96]=BITSF(LD32(sp+(0)));}
    {v[97]=BITSF(LD32(sp+(4)));}
    {v[98]=BITSF(LD32(sp+(8)));}
    {v[100]=BITSF(LD32(sp+(12)));}
    {v[101]=BITSF(LD32(sp+(16)));}
    {v[102]=BITSF(LD32(sp+(20)));}
    {v[104]=BITSF(LD32(sp+(24)));}
    {v[105]=BITSF(LD32(sp+(28)));}
    {v[106]=BITSF(LD32(sp+(32)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(144),FBITS(v[80]));}
    {ST32(sp+(148),FBITS(v[81]));}
    {ST32(sp+(152),FBITS(v[82]));}
    {ST32(sp+(156),FBITS(v[84]));}
    {ST32(sp+(160),FBITS(v[85]));}
    {ST32(sp+(164),FBITS(v[86]));}
    {ST32(sp+(168),FBITS(v[88]));}
    {ST32(sp+(172),FBITS(v[89]));}
    {ST32(sp+(176),FBITS(v[90]));}
    f1 = BITSF(LD32(sp+148));
    f2 = BITSF(LD32(sp+152));
    f8 = BITSF(LD32(sp+144));
    f3 = BITSF(LD32(sp+156));
    f4 = BITSF(LD32(sp+160));
    f5 = BITSF(LD32(sp+164));
    f6 = BITSF(LD32(sp+168));
    f7 = BITSF(LD32(sp+172));
    f0 = BITSF(LD32(sp+176));
    f19 = BITSF(LD32(sp+48));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f8));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f0));
    f13 = BITSF(LD32(sp+52));
    f10 = BITSF(LD32(sp+56));
    ST32(s4+144, FBITS(f19));
    ST32(a1+4, FBITS(f13));
    ST32(a1+8, FBITS(f10));
    ST32(v1+32, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    ST32(a0+32, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    ST32(a0+12, FBITS(f3));
    ST32(a0+16, FBITS(f4));
    ST32(a0+20, FBITS(f5));
    ST32(a0+24, FBITS(f6));
    ST32(a0+28, FBITS(f7));
    v1 = LD32(s4);
    ST32(s4+192, FBITS(f8));
    v0 = LD32(v1-12);
    ST32(s4+156, FBITS(f8));
    v0 = s4 + v0;
    f1 = BITSF(LD32(s2+23196));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1+4));
    s2 = LD32(v0+100);
    ST32(sp+208, FBITS(f1));
    ST32(sp+212, FBITS(f0));
    ST32(sp+216, FBITS(f2));
    ST32(sp+192, FBITS(f1));
    ST32(sp+196, FBITS(f0));
    cnd_ = s2 == 0;
    ST32(sp+200, FBITS(f2));
    if (cnd_) { goto L_089FF670; }
    goto L_089FF498;
L_089FF498:;
    a0 = LD32(s2+16);
    s1 = 0 + 0;
    v0 = func_08817C00(a0);
    goto L_089FF4A4;
L_089FF4A4:;
    f1 = BITSF(LD32(v0+12));
    a0 = D_08ADEB28 - (-5336);
    v1 = LD32(a0-5336);
    ST32(sp+212, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    cnd_ = v1 == 0;
    ST32(sp+196, FBITS(f0));
    if (cnd_) { goto L_089FF664; }
    goto L_089FF4C0;
L_089FF4C0:;
    v1 = a0 - 5336;
    s3 = 0 + 0;
    a0 = 0 + 0;
    s5 = v1 + 0;
    goto L_089FF4D0;
L_089FF4D0:;
    v0 = a0 + v1;
    a1 = LD32(v0);
    a0 = s2 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FF4E0;
L_089FF4E0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089FF648; }
    goto L_089FF4E8;
L_089FF4E8:;
    a1 = LD32(v0+12);
    a0 = s2 + 0;
    a2 = sp + 224;
    a3 = sp + 144;
    t0 = 0 + 0;
    { rv_t r_ = func_08806D1C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FF500;
L_089FF500:;
    f6 = BITSF(LD32(s0+64));
    v1 = LD32(sp+144);
    v0 = LD32(sp+148);
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+152);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    v1 = LD32(sp+156);
    v0 = LD32(sp+160);
    f1 = BITSF(LD32(sp+228));
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(400);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(sp+164);
    {v[49]=BITSF(v0);}
    {v[16]=BITSF(s3);}
    {v[50]=BITSF(v1);}
    v0 = LD32(sp+168);
    v1 = LD32(sp+172);
    {v[32]=BITSF(v0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(sp+176);
    {v[33]=BITSF(v1);}
    {v[17]=BITSF(s3);}
    {v[34]=BITSF(v0);}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = FBITS(f6);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f5 = BITSF(v0);
    f2 = BITSF(LD32(sp+224));
    f7 = f1 + f0;
    f8 = BITSF(LD32(sp+196));
    f0 = BITSF(LD32(sp+232));
    {v0=FBITS(v[22]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f1 = BITSF(v0);
    f0 = f0 + f4;
    fcc = FCMP(f8, f7, 14);
    f2 = f2 + f1;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+256, 0);
    ST32(sp+224, FBITS(f2));
    ST32(sp+232, FBITS(f0));
    ST32(sp+260, 0);
    ST32(sp+264, FBITS(f6));
    ST32(sp+272, v0);
    ST32(sp+276, FBITS(f5));
    ST32(sp+280, FBITS(f4));
    ST32(sp+240, v0);
    ST32(sp+244, FBITS(f5));
    ST32(sp+248, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+228, FBITS(f7));
    if (cnd_) { goto L_089FF608; }
    goto L_089FF604;
L_089FF604:;
    f8 = f7;
    goto L_089FF608;
L_089FF608:;
    f0 = BITSF(LD32(sp+212));
    fcc = FCMP(f7, f0, 14);
    cnd_ = fcc;
    ST32(sp+196, FBITS(f8));
    if (cnd_) { goto L_089FF620; }
    goto L_089FF61C;
L_089FF61C:;
    f0 = f7;
    goto L_089FF620;
L_089FF620:;
    v1 = LD32(s4);
    v0 = 1;
    ST8(s0+93, v0);
    a0 = s0 + 0;
    v0 = LD32(v1-16);
    ST32(sp+212, FBITS(f0));
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    ST32(s0+100, v1);
    func_08968CD4(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089FF648;
L_089FF648:;
    s1 = s1 + 1;
    v0 = s1 << 2;
    v1 = v0 + s5;
    a0 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    v1 = s5 + 0;
    if (cnd_) { goto L_089FF4D0; }
    goto L_089FF664;
L_089FF664:;
    f19 = BITSF(LD32(sp+48));
    f13 = BITSF(LD32(sp+52));
    f10 = BITSF(LD32(sp+56));
    goto L_089FF670;
L_089FF670:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {u32 a_=sp+(624);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(v1);}
    {v[64]=BITSF(v1);}
    v1 = LD32(sp+8);
    {v[65]=BITSF(v0);}
    {v[66]=BITSF(v1);}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(480);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[69]=BITSF(v0);}
    {u32 a_=sp+(512);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[70]=BITSF(v1);}
    v0 = LD32(sp+16);
    v1 = LD32(sp+12);
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {v[64]=BITSF(v1);}
    {u32 a_=sp+(640);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(v1);}
    v1 = LD32(sp+20);
    {v[69]=BITSF(v0);}
    {v[70]=BITSF(v1);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {v[65]=BITSF(v0);}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {v[66]=BITSF(v1);}
    v0 = LD32(sp+28);
    v1 = LD32(sp+24);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(656);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(v1);}
    {v[64]=BITSF(v1);}
    {v[69]=BITSF(v0);}
    v1 = LD32(sp+32);
    {v[65]=BITSF(v0);}
    {v[70]=BITSF(v1);}
    {v[66]=BITSF(v1);}
    v0 = LD32(sp+212);
    v1 = LD32(sp+208);
    {u32 a_=sp+(416);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {v[36]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(sp+216);
    {v[37]=BITSF(v0);}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = LD32(sp+192);
    {v[38]=BITSF(v1);}
    {v[40]=BITSF(v0);}
    v1 = LD32(sp+196);
    v0 = LD32(sp+200);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v[41]=BITSF(v1);}
    {v[42]=BITSF(v0);}
    {v0=FBITS(v[34]);}
    {float t0=v[40];float t1=v[41];float t2=v[42];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    f18 = BITSF(v0);
    {v0=FBITS(v[32]);}
    f17 = BITSF(v0);
    {v0=FBITS(v[33]);}
    f12 = BITSF(v0);
    {v0=FBITS(v[2]);}
    f11 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    f4 = f17 + f19;
    f5 = f12 + f13;
    f6 = f18 + f10;
    f21 = f1 + f19;
    f22 = f0 + f13;
    f11 = f11 + f10;
    v0 = D_08AEF5A4 - (-2652);
    f7 = f21 - f4;
    f8 = f22 - f5;
    f9 = f11 - f6;
    f0 = BITSF(LD32(v0-2652));
    f19 = f19 - f4;
    f13 = f13 - f5;
    f7 = f7 * f0;
    f8 = f8 * f0;
    f9 = f9 * f0;
    f10 = f10 - f6;
    f7 = f7 + f4;
    f8 = f8 + f5;
    f9 = f9 + f6;
    {u32 a_=sp+(688);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f14 = f7 - f4;
    f15 = f8 - f5;
    f16 = f9 - f6;
    v0 = FBITS(f19);
    {u32 a_=sp+(672);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f14);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f15);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f13);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f16);
    {v[2]=BITSF(v0);}
    v0 = FBITS(f10);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v[6]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+240, FBITS(f17));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    f1 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    ST32(sp+244, FBITS(f12));
    f3 = f1 - f2;
    ST32(sp+208, FBITS(f4));
    ST32(sp+212, FBITS(f5));
    ST32(sp+216, FBITS(f6));
    ST32(sp+192, FBITS(f21));
    ST32(sp+196, FBITS(f22));
    ST32(sp+200, FBITS(f11));
    ST32(sp+272, FBITS(f7));
    ST32(s4+136, FBITS(f3));
    ST32(s4+140, 0);
    ST32(sp+276, FBITS(f8));
    ST32(sp+280, FBITS(f9));
    ST32(sp+256, FBITS(f19));
    ST32(sp+260, FBITS(f13));
    ST32(sp+264, FBITS(f10));
    ST32(sp+240, FBITS(f14));
    ST32(sp+244, FBITS(f15));
    ST32(sp+248, FBITS(f16));
    goto L_089FED6C;
}

/* 089FF8B4 */
rv_t func_089FF8B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089FF8B4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2C0B0 - (-16208);
    t1 = D_08C2C0C0 - (-16192);
    t2 = D_08C2C0D0 - (-16176);
    a1 = a1 & a0;
    v1 = t0 - 16208;
    a2 = t1 - 16192;
    cnd_ = a1 == 0;
    a3 = t2 - 16176;
    if (cnd_) { goto L_089FF96C; }
    goto L_089FF8E4;
L_089FF8E4:;
    v0 = D_08AEF5A8 - (-2648);
    f4 = BITSF(LD32(v0-2648));
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
    ST32(t0-16208, FBITS(f2));
    ST32(t1-16192, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-16176, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089FF96C;
L_089FF96C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089FF974 */
rv_t func_089FF974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089FF974:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089FF8B4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FF988;
L_089FF988:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089FF994 */
void func_089FF994(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FF994:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = a0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    func_08A063EC(a0, a1);
    goto L_089FF9C4;
L_089FF9C4:;
    a2 = D_08B45A9C - (23196);
    a0 = LD32(s0);
    a1 = a2 + 23196;
    a3 = s3 + 84;
    ST32(s3, a0);
    t0 = s3 + 96;
    t1 = s3 + 108;
    v0 = LD32(a0-12);
    v1 = LD32(s0+16);
    t2 = s3 + 120;
    v0 = s3 + v0;
    ST32(v0, v1);
    t4 = 999;
    t3 = s3 + 204;
    v1 = LD32(s3);
    a0 = LD32(s0+20);
    v0 = LD32(v1-16);
    v0 = s3 + v0;
    ST32(v0, a0);
    v1 = LD32(s3);
    a0 = LD32(s0+24);
    v0 = LD32(v1-20);
    v0 = s3 + v0;
    ST32(v0, a0);
    v0 = D_08AEF5B4 - (-2636);
    f0 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    ST32(s3+84, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    f2 = BITSF(LD32(a2+23196));
    ST32(a3+8, FBITS(f3));
    f0 = BITSF(LD32(a1+4));
    ST32(s3+96, FBITS(f2));
    ST32(t0+4, FBITS(f0));
    f1 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    ST32(s3+108, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    ST32(t1+4, FBITS(f2));
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a2+23196));
    f2 = BITSF(LD32(a1+4));
    ST32(t1+8, FBITS(f0));
    ST32(s3+120, FBITS(f1));
    f0 = BITSF(LD32(a1+8));
    ST32(t2+4, FBITS(f2));
    ST32(t2+8, FBITS(f0));
    f0 = BITSF(LD32(v0-2636));
    v0 = 4;
    ST32(s3+156, v0);
    v0 = D_08AEF5B8 - (-2632);
    ST32(s3+132, s1);
    ST32(s3+136, s2);
    ST32(s3+148, FBITS(f0));
    ST32(s3+140, t4);
    ST32(s3+144, 0);
    ST8(s3+152, 0);
    ST8(s3+153, 0);
    ST8(s3+154, 0);
    ST32(s3+160, 0);
    ST32(s3+164, 0);
    ST8(s3+168, 0);
    ST32(s3+176, 0);
    ST32(s3+180, 0);
    ST32(s3+184, 0);
    ST32(s3+188, 0);
    ST32(s3+192, 0);
    ST32(s3+196, 0);
    ST8(s3+200, 0);
    f0 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+4));
    ST32(s3+204, FBITS(f0));
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f2));
    ST32(s3+216, 0);
    ST32(s3+220, 0);
    ST32(s3+228, 0);
    ST32(s3+232, 0);
    ST8(s3+236, 0);
    v1 = LD32(s3);
    f0 = BITSF(LD32(v0-2632));
    ST32(s3+244, t4);
    v0 = LD32(v1-16);
    v1 = (u32)-32751;
    ST32(s3+240, FBITS(f0));
    v0 = s3 + v0;
    ST16(v0+8, v1);
    a0 = LD32(s3);
    v1 = LD32(a0-12);
    v1 = s3 + v1;
    v0 = LD32(v1+64);
    v0 = v0 | 0x1;
    ST32(v1+64, v0);
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089FFC44; }
    goto L_089FFB5C;
L_089FFB5C:;
    a0 = LD32(v1-12);
    v1 = D_08AEF5BC - (-2628);
    f12 = BITSF(LD32(v1-2628));
    a0 = s3 + a0;
    v0 = LD32(a0+8);
    v0 = v0 | 0x1;
    ST32(a0+8, v0);
    v1 = LD32(s3);
    a0 = LD32(v1-12);
    a0 = s3 + a0;
    func_0886422C(a0, f12);
    goto L_089FFB88;
L_089FFB88:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEF5C0 - (-2624);
    if (cnd_) { goto L_089FFC34; }
    goto L_089FFBA0;
L_089FFBA0:;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEF5C4 - (-2620);
    if (cnd_) { goto L_089FFC24; }
    goto L_089FFBB4;
L_089FFBB4:;
    v1 = LD32(v1-16);
    s2 = D_08C2C190 - (-15984);
    s1 = s2 - 15984;
    v1 = s3 + v1;
    v0 = LD32(s1+4);
    s0 = LD32(v1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFBDC;
L_089FFBDC:;
    a0 = LD32(s2-15984);
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
L_089FFC24:;
    f12 = BITSF(LD32(v0-2620));
    f0 = func_088BB400(a0, f12);
    goto L_089FFC2C;
L_089FFC2C:;
    v1 = LD32(s3);
    goto L_089FFBB4;
L_089FFC34:;
    f12 = BITSF(LD32(v0-2624));
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFC3C;
L_089FFC3C:;
    v1 = LD32(s3);
    goto L_089FFBA0;
L_089FFC44:;
    v0 = func_088BB4E4(a0);
    goto L_089FFC4C;
L_089FFC4C:;
    a0 = LD32(s3);
    v0 = v0 & 0xffff;
    v0 = v0 | 0x8000;
    v1 = LD32(a0-12);
    a1 = v0 + 0;
    v1 = s3 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFC6C;
L_089FFC6C:;
    v1 = LD32(s3);
    a1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    a0 = s0 + 0;
    func_088BB4A4(a0, a1);
    goto L_089FFC88;
L_089FFC88:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089FFC94;
L_089FFC94:;
    v1 = LD32(s3);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    func_088BB27C(a0, a1);
    goto L_089FFCAC;
L_089FFCAC:;
    a0 = LD32(s3);
    v0 = LD32(a0-16);
    v1 = LD32(a0-12);
    v0 = s3 + v0;
    v1 = s3 + v1;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    func_088BB2C4(a0, a1);
    goto L_089FFCCC;
L_089FFCCC:;
    v1 = LD32(s3);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    func_088BB2A0(a0, a1);
    goto L_089FFCE4;
L_089FFCE4:;
    v1 = LD32(s3);
    a1 = 8;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB56C(a0, a1);
    goto L_089FFCFC;
L_089FFCFC:;
    v1 = LD32(s3);
    a1 = (u32)-11;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB578(a0, a1);
    goto L_089FFD14;
L_089FFD14:;
    v1 = LD32(s3);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    func_088BB264(a0, a1);
    goto L_089FFD2C;
L_089FFD2C:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    { rv_t r_ = func_08863FB8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFD3C;
L_089FFD3C:;
    v1 = LD32(s3);
    goto L_089FFB5C;
}

/* 089FFD44 */
void func_089FFD44(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089FFD44:;
    sp = sp - 32;
    s5 = a0 + 324;
    s3 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08B12F08 - (12040);
    s0 = s0 + 12040;
    s4 = s3 + 248;
    s2 = a1 + 0;
    a1 = a3 + 0;
    s1 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_089FFD8C;
L_089FFD8C:;
    a2 = (u32)-1;
    a1 = s0 + 28;
    a0 = s4 + 0;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089FFD9C;
L_089FFD9C:;
    a1 = s0 + 36;
    a0 = s3 + 352;
    s0 = s0 + 4;
    func_08866470(a0, a1, 0, 0);
    goto L_089FFDAC;
L_089FFDAC:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_08A063EC(a0, a1);
    goto L_089FFDB8;
L_089FFDB8:;
    v1 = D_08B12C84 - (11396);
    v1 = v1 + 11396;
    a1 = v1 + 604;
    v0 = v1 + 280;
    ST32(s3+248, v0);
    a2 = D_08B45A9C - (23196);
    a0 = a2 + 23196;
    ST32(s3+352, a1);
    v0 = s3 + 84;
    a1 = s3 + 96;
    ST32(s3, v1);
    a3 = s3 + 108;
    t0 = s3 + 120;
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a2+23196));
    ST32(v0+8, FBITS(f1));
    t2 = 999;
    v1 = v1 + 484;
    ST32(v0+4, FBITS(f2));
    v0 = D_08AEF5C8 - (-2616);
    t1 = s3 + 204;
    ST32(s3+84, FBITS(f0));
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a2+23196));
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f2));
    f0 = BITSF(LD32(a0+8));
    ST32(s3+96, FBITS(f1));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a2+23196));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f2));
    f0 = BITSF(LD32(a0+8));
    ST32(s3+108, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    f1 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(v0-2616));
    v0 = 4;
    ST32(t0+4, FBITS(f1));
    ST32(s3+324, v1);
    v1 = (u32)-32751;
    ST32(s3+120, FBITS(f3));
    ST32(s3+132, s2);
    ST32(s3+136, s1);
    ST32(s3+140, t2);
    ST32(s3+144, 0);
    ST32(s3+148, FBITS(f0));
    ST32(s3+156, v0);
    v0 = D_08AEF5CC - (-2612);
    ST8(s3+152, 0);
    ST8(s3+153, 0);
    ST8(s3+154, 0);
    ST32(s3+160, 0);
    ST32(s3+164, 0);
    ST8(s3+168, 0);
    ST32(s3+176, 0);
    ST32(s3+180, 0);
    ST32(s3+184, 0);
    ST32(s3+188, 0);
    ST32(s3+192, 0);
    ST32(s3+196, 0);
    ST8(s3+200, 0);
    f0 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    ST32(s3+204, FBITS(f0));
    f0 = BITSF(LD32(v0-2612));
    ST32(t1+8, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    ST32(s3+240, FBITS(f0));
    ST32(s3+244, t2);
    ST32(s3+216, 0);
    ST32(s3+220, 0);
    ST32(s3+228, 0);
    ST32(s3+232, 0);
    ST8(s3+236, 0);
    ST16(s5+8, v1);
    v0 = LD32(s4+64);
    a0 = LD32(s4+4);
    v0 = v0 | 0x1;
    cnd_ = a0 != 0;
    ST32(s4+64, v0);
    if (cnd_) { goto L_089FFFD8; }
    goto L_089FFF0C;
L_089FFF0C:;
    v0 = LD32(s4+8);
    goto L_089FFF10;
L_089FFF10:;
    v1 = D_08AEF5D0 - (-2608);
    f12 = BITSF(LD32(v1-2608));
    v0 = v0 | 0x1;
    ST32(s4+8, v0);
    a0 = s4 + 0;
    func_0886422C(a0, f12);
    goto L_089FFF28;
L_089FFF28:;
    a0 = LD32(s4+4);
    cnd_ = a0 != 0;
    v0 = D_08AEF5D4 - (-2604);
    if (cnd_) { goto L_089FFFB0; }
    goto L_089FFF34;
L_089FFF34:;
    a0 = LD32(s3);
    goto L_089FFF38;
L_089FFF38:;
    s2 = D_08C2C190 - (-15984);
    s1 = s2 - 15984;
    v0 = LD32(a0-16);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFF60;
L_089FFF60:;
    a0 = LD32(s2-15984);
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
L_089FFFB0:;
    f12 = BITSF(LD32(v0-2604));
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFFB8;
L_089FFFB8:;
    a0 = LD32(s4+4);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s3); goto L_089FFF38; }
    goto L_089FFFC4;
L_089FFFC4:;
    v0 = D_08AEF5D8 - (-2600);
    f12 = BITSF(LD32(v0-2600));
    f0 = func_088BB400(a0, f12);
    goto L_089FFFD0;
L_089FFFD0:;
    a0 = LD32(s3);
    goto L_089FFF38;
L_089FFFD8:;
    v0 = func_088BB4E4(a0);
    goto L_089FFFE0;
L_089FFFE0:;
    v0 = v0 & 0xffff;
    a0 = LD32(s4+4);
    v0 = v0 | 0x8000;
    a1 = v0 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089FFFF4;
L_089FFFF4:;
    s0 = LD32(s4+4);
    a1 = 0 + 0;
    a0 = s0 + 0;
    func_088BB4A4(a0, a1);
    goto L_08A00004;
L_08A00004:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00010;
L_08A00010:;
    a0 = LD32(s4+4);
    a1 = 1;
    func_088BB27C(a0, a1);
    goto L_08A0001C;
L_08A0001C:;
    a1 = LD32(s5+4);
    a0 = LD32(s4+4);
    func_088BB2C4(a0, a1);
    goto L_08A00028;
L_08A00028:;
    a0 = LD32(s4+4);
    a1 = 1;
    func_088BB2A0(a0, a1);
    goto L_08A00034;
L_08A00034:;
    a0 = LD32(s4+4);
    a1 = 8;
    v0 = func_088BB56C(a0, a1);
    goto L_08A00040;
L_08A00040:;
    a0 = LD32(s4+4);
    a1 = (u32)-11;
    v0 = func_088BB578(a0, a1);
    goto L_08A0004C;
L_08A0004C:;
    a0 = LD32(s4+4);
    a1 = 1;
    func_088BB264(a0, a1);
    goto L_08A00058;
L_08A00058:;
    a0 = s4 + 0;
    { rv_t r_ = func_08863FB8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00060;
L_08A00060:;
    v0 = LD32(s4+8);
    goto L_089FFF10;
}

/* 08A00068 */
void func_08A00068(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A00068:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a1 = LD32(a1+16);
    v0 = a0 + v0;
    ST32(v0, a1);
    v1 = LD32(a0);
    a1 = LD32(s1+20);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    ST32(v0, a1);
    v1 = LD32(a0);
    a1 = LD32(s1+24);
    v0 = LD32(v1-20);
    v0 = a0 + v0;
    ST32(v0, a1);
    v1 = LD_U8(a0+168);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A000E4; }
    goto L_08A000CC;
L_08A000CC:;
    v1 = LD32(a0+140);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s0); goto L_08A000E8; }
    goto L_08A000DC;
L_08A000DC:;
    a1 = 999;
    { u64 r_ = func_08A021E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A000E4;
L_08A000E4:;
    a1 = LD32(s0);
    goto L_08A000E8;
L_08A000E8:;
    v1 = D_08C2C190 - (-15984);
    s2 = v1 - 15984;
    v0 = LD32(a1-16);
    a0 = LD32(s2+4);
    a1 = LD32(v1-15984);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A0013C; }
    goto L_08A00120;
L_08A00120:;
    v0 = LD32(a0);
    goto L_08A00124;
L_08A00124:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08A00160; }
    goto L_08A0012C;
L_08A0012C:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A00124; }
    goto L_08A0013C;
L_08A0013C:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08A0652C(a0, a1, t2, t3);
    goto L_08A00148;
L_08A00148:;
    sp = sp + 16;
    return;
L_08A00160:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A00170; }
    goto L_08A00168;
L_08A00168:;
    ST8(a0+8, v0);
    goto L_08A0013C;
L_08A00170:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08A00198; }
    goto L_08A00178;
L_08A00178:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08A00180;
L_08A00180:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00188;
L_08A00188:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_08A0013C;
L_08A00198:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08A00180;
}

/* 08A001A8 */
rv_t func_08A001A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A001A8:;
    sp = sp - 16;
    v0 = D_08B12C84 - (11396);
    v0 = v0 + 11396;
    a2 = v0 + 604;
    v1 = v0 + 280;
    a1 = v0 + 484;
    s1 = a0 + 0;
    a3 = LD_U8(a0+168);
    ST32(a0+248, v1);
    ST32(a0+324, a1);
    ST32(a0+352, a2);
    cnd_ = a3 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08A00200; }
    goto L_08A001E8;
L_08A001E8:;
    v1 = LD32(a0+140);
    v0 = 999;
    cnd_ = v1 == v0;
    a1 = 999;
    if (cnd_) { goto L_08A00200; }
    goto L_08A001F8;
L_08A001F8:;
    { u64 r_ = func_08A021E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00200;
L_08A00200:;
    a0 = D_08C2C190 - (-15984);
    s0 = D_08B12F08 - (12040);
    s0 = s0 + 12040;
    a1 = s1 + 0;
    a0 = a0 - 15984;
    func_08ACE5FC(a0, a1, t1, t2, t3);
    goto L_08A00218;
L_08A00218:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0652C(a0, a1, 0, 0);
    goto L_08A00224;
L_08A00224:;
    a1 = LD32(s0+36);
    t0 = s0 + 36;
    a2 = s1 + 352;
    ST32(s1+352, a1);
    s0 = s0 + 28;
    a0 = s1 + 248;
    v0 = LD32(a1-12);
    v1 = LD32(t0+4);
    a1 = s0 + 0;
    v0 = a2 + v0;
    ST32(v0, v1);
    v1 = LD32(s1+352);
    a3 = LD32(t0+8);
    v0 = LD32(v1-16);
    a2 = a2 + v0;
    ST32(a2, a3);
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A00268;
L_08A00268:;
    a0 = s1 + 324;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00270;
L_08A00270:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A00284 */
rv_t func_08A00284(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A00284:;
    sp = sp - 16;
    v0 = D_08B12C84 - (11396);
    v0 = v0 + 11396;
    a2 = v0 + 604;
    v1 = v0 + 280;
    a1 = v0 + 484;
    s1 = a0 + 0;
    a3 = LD_U8(a0+168);
    ST32(a0+248, v1);
    ST32(a0+324, a1);
    ST32(a0+352, a2);
    cnd_ = a3 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08A002DC; }
    goto L_08A002C4;
L_08A002C4:;
    v1 = LD32(a0+140);
    v0 = 999;
    cnd_ = v1 == v0;
    a1 = 999;
    if (cnd_) { goto L_08A002DC; }
    goto L_08A002D4;
L_08A002D4:;
    { u64 r_ = func_08A021E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A002DC;
L_08A002DC:;
    a0 = D_08C2C190 - (-15984);
    s0 = D_08B12F08 - (12040);
    s0 = s0 + 12040;
    a1 = s1 + 0;
    a0 = a0 - 15984;
    func_08ACE5FC(a0, a1, t1, t2, t3);
    goto L_08A002F4;
L_08A002F4:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0652C(a0, a1, 0, 0);
    goto L_08A00300;
L_08A00300:;
    a1 = LD32(s0+36);
    t0 = s0 + 36;
    a2 = s1 + 352;
    ST32(s1+352, a1);
    s0 = s0 + 28;
    a0 = s1 + 248;
    v0 = LD32(a1-12);
    v1 = LD32(t0+4);
    a1 = s0 + 0;
    v0 = a2 + v0;
    ST32(v0, v1);
    v1 = LD32(s1+352);
    a3 = LD32(t0+8);
    v0 = LD32(v1-16);
    a2 = a2 + v0;
    ST32(a2, a3);
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A00344;
L_08A00344:;
    a0 = s1 + 324;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0034C;
L_08A0034C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00354;
L_08A00354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A00368 */
rv_t func_08A00368(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A00368:;
    sp = sp - 32;
    a2 = sp + 0;
    ST32(sp, 0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08A0038C;
L_08A0038C:;
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
    if (cnd_) { goto L_08A0038C; }
    goto L_08A003B4;
L_08A003B4:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-20);
    a0 = s1 + a0;
    { rv_t r_ = func_08866504(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A003C8;
L_08A003C8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07830(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A003D4;
L_08A003D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A003E8 */
rv_t func_08A003E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A003E8:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08A00408;
L_08A00408:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A00408; }
    goto L_08A0042C;
L_08A0042C:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-20);
    a0 = s1 + a0;
    { rv_t r_ = func_08866650(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00440;
L_08A00440:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07570(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0044C;
L_08A0044C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A00460 */
rv_t func_08A00460(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A00460:;
    sp = sp - 32;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A00534; }
    goto L_08A00488;
L_08A00488:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A004A4;
L_08A004A4:;
    s0 = v0 + 0;
    v0 = LD32(v0+4);
    v0 = (v0 >> 0) & 0x7fffffff;
    f20 = BITSF(v0);
    f0 = func_088A4F4C();
    goto L_08A004BC;
L_08A004BC:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A004F0; }
    goto L_08A004CC;
L_08A004CC:;
    v0 = LD32(s0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f20 = BITSF(v0);
    { rv_t r_ = func_088A4F28(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A004E0;
L_08A004E0:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0+8); goto L_08A00514; }
    goto L_08A004F0;
L_08A004F0:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A004F8;
L_08A004F8:;
    goto L_08A004FC;
L_08A004FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A00514:;
    v0 = (v0 >> 0) & 0x7fffffff;
    f20 = BITSF(v0);
    f0 = func_088A4F70();
    goto L_08A00524;
L_08A00524:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A004F0; }
    goto L_08A00534;
L_08A00534:;
    v0 = LD32(s1);
    a0 = 90;
    a1 = 92;
    v1 = LD32(v0-16);
    a3 = 0 + 0;
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00554;
L_08A00554:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A004F8; }
    goto L_08A0055C;
L_08A0055C:;
    s0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A00590; }
    goto L_08A0056C;
L_08A0056C:;
    func_089FDE44(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A00574;
L_08A00574:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD_U16(v0+8);
    ST16(s0+80, v1);
    v0 = LD32(s1+132);
    ST32(s0+84, v0);
    goto L_08A00590;
L_08A00590:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A005A8;
L_08A005A8:;
    goto L_08A004FC;
}

/* 08A005B0 */
rv_t func_08A005B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08A005B0:;
    sp = sp - 336;
    s2 = D_08B285A0 - (-31328);
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    s1 = a0 + 0;
    f20 = BITSF(LD32(s2-31328));
    f0 = BITSF(LD32(a0+216));
    v1 = LD32(a0+136);
    f0 = f0 + f20;
    cnd_ = v1 == v0;
    ST32(a0+216, FBITS(f0));
    if (cnd_) { goto L_08A00EB8; }
    goto L_08A005F0;
L_08A005F0:;
    v0 = LD_U8(a0+168);
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(a0+220)); goto L_08A00A30; }
    goto L_08A005FC;
L_08A005FC:;
    a2 = LD32(a0+140);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_08A006A4; }
    goto L_08A0060C;
L_08A0060C:;
    v1 = a0 - 15588;
    v0 = LD32(v1+4);
    a1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A00660; }
    goto L_08A00634;
L_08A00634:;
    a0 = LD32(a1);
    goto L_08A00638;
L_08A00638:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A00A10; }
    goto L_08A00650;
L_08A00650:;
    a1 = LD32(a1+4);
    goto L_08A00654;
L_08A00654:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A00638; }
    goto L_08A0065C;
L_08A0065C:;
    s0 = 0 + 0;
    goto L_08A00660;
L_08A00660:;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A006A8; }
    goto L_08A00668;
L_08A00668:;
    a0 = LD32(s0);
    f20 = BITSF(0);
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1); goto L_08A006A8; }
    goto L_08A0068C;
L_08A0068C:;
    v0 = LD32(a0-16);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a0+44); goto L_08A0086C; }
    goto L_08A006A4;
L_08A006A4:;
    v0 = LD32(s1);
    goto L_08A006A8;
L_08A006A8:;
    a0 = s1 + 0;
    s2 = s1 + 84;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08A021E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A006C0;
L_08A006C0:;
    v0 = LD_U8(s1+152);
    goto L_08A006C4;
L_08A006C4:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A00818; }
    goto L_08A006CC;
L_08A006CC:;
    f0 = BITSF(LD32(s1+176));
    goto L_08A006D0;
L_08A006D0:;
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1); goto L_08A0078C; }
    goto L_08A006E4;
L_08A006E4:;
    v0 = LD_U8(s1+200);
    goto L_08A006E8;
L_08A006E8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0077C; }
    goto L_08A006F0;
L_08A006F0:;
    v1 = LD32(s1+136);
    goto L_08A006F4;
L_08A006F4:;
    v0 = 0x8af70000u;
    v0 = v0 | 0x5923;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A0076C; }
    goto L_08A00704;
L_08A00704:;
    v0 = LD32(s1);
    goto L_08A00708;
L_08A00708:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00720;
L_08A00720:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0));
    ST32(s2+8, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    v0 = LD32(s1);
    ST32(s1+84, FBITS(f2));
    a0 = LD32(v0-20);
    a0 = s1 + a0;
    { rv_t r_ = func_08866A8C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00748;
L_08A00748:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A06744(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00750;
L_08A00750:;
    sp = sp + 336;
    return (rv_t){ v0, v1, f0 };
L_08A0076C:;
    a0 = s1 + 0;
    func_08A02A60(a0);
    goto L_08A00774;
L_08A00774:;
    v0 = LD32(s1);
    goto L_08A00708;
L_08A0077C:;
    a0 = s1 + 0;
    func_08A02810(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A00784;
L_08A00784:;
    v1 = LD32(s1+136);
    goto L_08A006F4;
L_08A0078C:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A007A4;
L_08A007A4:;
    a0 = LD32(s1);
    a1 = v0 + 0;
    v0 = D_08AEF5EC - (-2580);
    v1 = LD32(a0-16);
    f12 = BITSF(LD32(v0-2580));
    v0 = D_08AEF5E0 - (-2592);
    v1 = s1 + v1;
    f0 = BITSF(LD32(v0-2592));
    a3 = LD32(v1+4);
    a2 = sp + 32;
    a0 = s0 + 0;
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f20));
    ST32(sp+32, FBITS(f20));
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_08A007E0;
L_08A007E0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A007E8;
L_08A007E8:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s1+176));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+200); goto L_08A006E8; }
    goto L_08A00800;
L_08A00800:;
    a0 = s1 + 0;
    func_08A02464(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A00808;
L_08A00808:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00810;
L_08A00810:;
    v0 = LD_U8(s1+200);
    goto L_08A006E8;
L_08A00818:;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    { u64 r_ = func_088BB430(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A00828;
L_08A00828:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+176)); goto L_08A006D0; }
    goto L_08A00830;
L_08A00830:;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    v0 = func_088BB484(a0);
    goto L_08A00844;
L_08A00844:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0085C; }
    goto L_08A0084C;
L_08A0084C:;
    a0 = s1 + 0;
    v0 = func_08A00F24(a0);
    goto L_08A00854;
L_08A00854:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+176)); goto L_08A006D0; }
    goto L_08A0085C;
L_08A0085C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00864;
L_08A00864:;
    f0 = BITSF(LD32(s1+176));
    goto L_08A006D0;
L_08A0086C:;
    a1 = sp + 0;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00878;
L_08A00878:;
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00888;
L_08A00888:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2-31328));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    v0 = LD32(s1);
    f5 = f5 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    a0 = LD32(v0-12);
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f1 = f1 + f3;
    f2 = f2 + f4;
    f0 = f0 + f5;
    a0 = s1 + a0;
    v1 = LD32(a0);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A008F0;
L_08A008F0:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
    {u32 a_=sp+(112);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    {v[12]=BITSF(v0);}
    a0 = FBITS(f2);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_08A00984; }
    goto L_08A00950;
L_08A00950:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    {a0=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+32, a0);
    ST32(sp+36, v0);
    ST32(sp+40, v1);
    ST32(sp+16, a0);
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    goto L_08A00984;
L_08A00984:;
    v1 = LD32(s1);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00994;
L_08A00994:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = LD32(s1);
    f3 = BITSF(LD32(sp+24));
    f2 = BITSF(LD32(sp+16));
    a0 = LD32(v0-12);
    a1 = sp + 16;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f1 = BITSF(v1);
    a0 = s1 + a0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    f0 = BITSF(LD32(sp+20));
    v1 = LD32(a0);
    ST32(sp+24, FBITS(f3));
    f0 = f0 * f1;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00A08;
L_08A00A08:;
    v0 = LD32(s1);
    goto L_08A006A8;
L_08A00A10:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A00650; }
    goto L_08A00A1C;
L_08A00A1C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A00654; }
    goto L_08A00A28;
L_08A00A28:;
    goto L_08A00660;
L_08A00A30:;
    f6 = BITSF(0);
    fcc = FCMP(f6, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(s1+96)); goto L_08A00EB0; }
    goto L_08A00A44;
L_08A00A44:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(s1+96)); goto L_08A00EB0; }
    goto L_08A00A54;
L_08A00A54:;
    f3 = BITSF(LD32(a0+96));
    s0 = a0 + 96;
    v0 = LD32(s0+4);
    a0 = FBITS(f3);
    v1 = LD32(s0+8);
    {v[0]=BITSF(a0);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f6, f0, 12);
    cnd_ = !fcc;
    s2 = s0 + 0;
    if (cnd_) { goto L_08A00E08; }
    goto L_08A00A90;
L_08A00A90:;
    f5 = BITSF(LD32(s1+204));
    a3 = s1 + 204;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = FBITS(f5);
    v0 = LD32(a3+4);
    {v[0]=BITSF(v1);}
    v1 = LD32(a3+8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    fcc = FCMP(f0, f6, 2);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s1+224)); goto L_08A00BA8; }
    goto L_08A00AD0;
L_08A00AD0:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    v1 = D_08AEF5E4 - (-2588);
    f4 = BITSF(LD32(v1-2588));
    f0 = (float)(s32)FBITS(f1);
    v1 = D_08AEF5DC - (-2596);
    a0 = a0 + v0;
    f1 = BITSF(LD32(v1-2596));
    f0 = f0 * f4;
    ST32(a2+4, a0);
    f0 = f0 + f0;
    ST32(a1+23232, v0);
    v0 = D_08AEF5E8 - (-2584);
    f0 = f0 + f1;
    f2 = BITSF(LD32(s1+228));
    f3 = BITSF(LD32(v0-2584));
    f0 = f0 * f2;
    ST32(s1+204, FBITS(f0));
    v0 = LD32(a1+23232);
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f0 = BITSF(a0);
    v1 = v1 + v0;
    ST32(a2+4, v1);
    f1 = (float)(s32)FBITS(f0);
    ST32(a1+23232, v0);
    f1 = f1 * f4;
    f5 = BITSF(LD32(s1+204));
    v0 = LD32(s1+212);
    f4 = BITSF(LD32(s1+228));
    f1 = f1 * f3;
    v1 = FBITS(f5);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = f1 + f3;
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    f3 = BITSF(v0);
    f1 = f1 * f4;
    f2 = f2 + f3;
    ST32(s1+208, FBITS(f1));
    ST32(s1+212, FBITS(f2));
    f2 = BITSF(LD32(s1+224));
    goto L_08A00BA8;
L_08A00BA8:;
    v0 = D_08AEF5E0 - (-2592);
    fcc = FCMP(f6, f2, 12);
    cnd_ = !fcc;
    f3 = BITSF(LD32(v0-2592));
    if (cnd_) { goto L_08A00BE0; }
    goto L_08A00BBC;
L_08A00BBC:;
    f1 = BITSF(LD32(s1+216));
    f0 = BITSF(LD32(s1+220));
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_08A00BD8; }
    goto L_08A00BD8;
L_08A00BD8:;
    f0 = f3 / f2;
    f3 = f1 * f0;
    goto L_08A00BE0;
L_08A00BE0:;
    v0 = LD32(s1);
    f1 = BITSF(LD32(a3+8));
    f0 = BITSF(LD32(a3+4));
    a0 = LD32(v0-12);
    f1 = f1 * f3;
    f2 = f5 * f3;
    f0 = f0 * f3;
    a0 = s1 + a0;
    v1 = LD32(a0);
    ST32(sp+24, FBITS(f1));
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+16, FBITS(f2));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+20, FBITS(f0));
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00C2C;
L_08A00C2C:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
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
    {v[33]=BITSF(a0);}
    a0 = LD32(s1);
    {u32 a_=sp+(288);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(a1);}
    {u32 a_=sp+(144);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[21]=BITSF(v0);}
    v0 = LD32(a0+40);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[18]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[17]);}
    f0 = BITSF(a0);
    {v1=FBITS(v[16]);}
    ST32(sp+40, FBITS(f3));
    a0 = s1 + 0;
    ST32(sp+32, v1);
    ST32(sp+36, FBITS(f0));
    ST32(sp, v1);
    ST32(sp+4, FBITS(f0));
    t_ = v0;
    ST32(sp+8, FBITS(f3));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00CF0;
L_08A00CF0:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+32));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    {u32 a_=sp+(208);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f4 = f4 + f1;
    f5 = f5 + f0;
    v0 = FBITS(f3);
    f1 = BITSF(0);
    {v[12]=BITSF(v0);}
    v1 = FBITS(f4);
    a0 = FBITS(f5);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+20, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08A00D88; }
    goto L_08A00D54;
L_08A00D54:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    {a0=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp, a0);
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    ST32(sp+16, a0);
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    goto L_08A00D88;
L_08A00D88:;
    a0 = LD32(s2+8);
    v1 = LD32(s2+4);
    v0 = LD32(s1+96);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(sp+24));
    f3 = BITSF(LD32(sp+16));
    v0 = LD32(s1);
    a1 = sp + 16;
    s2 = s1 + 84;
    a0 = LD32(v0-12);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f1 = BITSF(v1);
    a0 = s1 + a0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f0 = BITSF(LD32(sp+20));
    v1 = LD32(a0);
    ST32(sp+24, FBITS(f2));
    f0 = f0 * f1;
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    goto L_08A00DF4;
L_08A00DF4:;
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00E00;
L_08A00E00:;
    v0 = LD_U8(s1+152);
    goto L_08A006C4;
L_08A00E08:;
    f0 = BITSF(0);
    f2 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    fcc = FCMP(f20, f0, 2);
    v0 = s1 + 108;
    ST32(v0+8, FBITS(f1));
    s2 = s1 + 84;
    ST32(s1+108, FBITS(f3));
    cnd_ = fcc;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_08A006C0; }
    goto L_08A00E30;
L_08A00E30:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A00E4C;
L_08A00E4C:;
    v1 = D_08AEF5E0 - (-2592);
    f0 = BITSF(LD32(v1-2592));
    f3 = BITSF(LD32(s2+4));
    f4 = BITSF(LD32(v0+8));
    f0 = f0 / f20;
    f6 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s1+84));
    f1 = f1 - f3;
    f6 = f6 - f2;
    f4 = f4 - f5;
    f2 = f1 * f0;
    f3 = f6 * f0;
    f0 = f4 * f0;
    ST32(sp+20, FBITS(f1));
    ST32(s1+96, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    ST32(s0+4, FBITS(f2));
    ST32(s0+8, FBITS(f0));
    ST32(sp+16, FBITS(f6));
    ST32(sp+32, FBITS(f3));
    goto L_08A006C0;
L_08A00EB0:;
    s0 = s1 + 96;
    goto L_08A00E08;
L_08A00EB8:;
    v0 = a0 + 120;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    v1 = a0 + 96;
    f5 = f5 * f20;
    f4 = f4 * f20;
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(a0+120));
    f0 = f0 + f4;
    f2 = f2 + f5;
    f3 = f3 * f20;
    f1 = BITSF(LD32(a0+96));
    ST32(v1+4, FBITS(f0));
    s2 = a0 + 84;
    f1 = f1 + f3;
    ST32(v1+8, FBITS(f2));
    a1 = v1 + 0;
    v0 = LD32(a0);
    ST32(a0+96, FBITS(f1));
    a0 = LD32(v0-12);
    ST32(sp, FBITS(f3));
    a0 = s1 + a0;
    v1 = LD32(a0);
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    goto L_08A00DF4;
}

/* 08A00F24 */
u32 func_08A00F24(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A00F24:;
    sp = sp - 32;
    s5 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A0105C; }
    goto L_08A00F64;
L_08A00F64:;
    v1 = LD32(a0);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A01060; }
    goto L_08A00F74;
L_08A00F74:;
    v0 = func_088BB294(a0);
    goto L_08A00F7C;
L_08A00F7C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A01058; }
    goto L_08A00F84;
L_08A00F84:;
    s6 = 999;
    v1 = LD32(s5);
    goto L_08A00F8C;
L_08A00F8C:;
    s3 = LD32(s4+4);
    v0 = LD32(v1-20);
    v0 = s5 + v0;
    a2 = LD32(v0+4);
    cnd_ = s3 == a2;
    s1 = 1;
    if (cnd_) { goto L_08A0104C; }
    goto L_08A00FA4;
L_08A00FA4:;
    s2 = D_08C2B2A8 - (-19800);
    cnd_ = a2 == s6;
    v0 = s2 - 19800;
    if (cnd_) { goto L_08A01088; }
    goto L_08A00FB0;
L_08A00FB0:;
    v0 = LD32(v0+4);
    v1 = LD32(s2-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A01000; }
    goto L_08A00FD4;
L_08A00FD4:;
    a0 = LD32(a1);
    goto L_08A00FD8;
L_08A00FD8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A01090; }
    goto L_08A00FF0;
L_08A00FF0:;
    a1 = LD32(a1+4);
    goto L_08A00FF4;
L_08A00FF4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A00FD8; }
    goto L_08A00FFC;
L_08A00FFC:;
    v1 = 0 + 0;
    goto L_08A01000;
L_08A01000:;
    cnd_ = v1 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08A01088; }
    goto L_08A01008;
L_08A01008:;
    s0 = 999;
    goto L_08A0100C;
L_08A0100C:;
    v0 = LD32(a1);
    a0 = s2 - 19800;
    a2 = 1;
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    v0 = LD32(v1+48);
    a1 = v0 + 0;
    cnd_ = v0 == s0;
    v1 = s3 ^ v0;
    if (cnd_) { goto L_08A01034; }
    goto L_08A01030;
L_08A01030:;
    if (v1 == 0) s1 = 0;
    goto L_08A01034;
L_08A01034:;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0103C;
L_08A0103C:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A0100C; }
    goto L_08A01044;
L_08A01044:;
    cnd_ = s1 != 0;
    if (cnd_) { a1 = 1; goto L_08A0105C; }
    goto L_08A0104C;
L_08A0104C:;
    s4 = LD32(s4+8);
    cnd_ = s4 != 0;
    if (cnd_) { v1 = LD32(s5); goto L_08A00F8C; }
    goto L_08A01058;
L_08A01058:;
    a1 = 0 + 0;
    goto L_08A0105C;
L_08A0105C:;
    goto L_08A01060;
L_08A01060:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_08A01088:;
    a1 = 1;
    goto L_08A0105C;
L_08A01090:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A00FF0; }
    goto L_08A0109C;
L_08A0109C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A00FF4; }
    goto L_08A010A8;
L_08A010A8:;
    goto L_08A01000;
}

/* 08A010B0 */
rv_t func_08A010B0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A010B0:;
    sp = sp - 48;
    a3 = D_08C2C190 - (-15984);
    v1 = a3 - 15984;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A01148; }
    goto L_08A01100;
L_08A01100:;
    a3 = LD32(a3-15984);
    goto L_08A01104;
L_08A01104:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A01138; }
    goto L_08A0111C;
L_08A0111C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A0114C; }
    goto L_08A0112C;
L_08A0112C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A0111C; }
    goto L_08A01138;
L_08A01138:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A01104; }
    goto L_08A01148;
L_08A01148:;
    v0 = LD32(sp+8);
    goto L_08A0114C;
L_08A0114C:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A01214; }
    goto L_08A01154;
L_08A01154:;
    s1 = LD32(sp);
    goto L_08A01158;
L_08A01158:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A011DC; }
    goto L_08A01168;
L_08A01168:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A011DC; }
    goto L_08A01174;
L_08A01174:;
    v0 = LD32(s1);
    goto L_08A01178;
L_08A01178:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A011CC; }
    goto L_08A0118C;
L_08A0118C:;
    v0 = LD_U8(s0+8);
    goto L_08A01190;
L_08A01190:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A0120C; }
    goto L_08A01198;
L_08A01198:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A011FC; }
    goto L_08A011A0;
L_08A011A0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A011A8;
L_08A011A8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A011B4;
L_08A011B4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A011C0;
L_08A011C0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A01190; }
    goto L_08A011C8;
L_08A011C8:;
    v1 = LD32(s1+4);
    goto L_08A011CC;
L_08A011CC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A01178; }
    goto L_08A011DC;
L_08A011DC:;
    goto L_08A011E0;
L_08A011E0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A011FC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A011A8;
L_08A0120C:;
    s0 = LD32(s0+4);
    goto L_08A011C0;
L_08A01214:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01220;
L_08A01220:;
    v0 = LD32(s0);
    v1 = LD32(v0-20);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = s1 == v0;
    if (cnd_) { v0 = LD32(s0+136); goto L_08A0124C; }
    goto L_08A01238;
L_08A01238:;
    v0 = LD32(sp+8);
    goto L_08A0123C;
L_08A0123C:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A01214; }
    goto L_08A01244;
L_08A01244:;
    s1 = LD32(sp);
    goto L_08A01158;
L_08A0124C:;
    cnd_ = v0 != s2;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A0123C; }
    goto L_08A01254;
L_08A01254:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0125C;
L_08A0125C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A011DC; }
    goto L_08A01270;
L_08A01270:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A011DC; }
    goto L_08A0127C;
L_08A0127C:;
    v0 = LD32(s1);
    goto L_08A01280;
L_08A01280:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A012D4; }
    goto L_08A01294;
L_08A01294:;
    v0 = LD_U8(s0+8);
    goto L_08A01298;
L_08A01298:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A012FC; }
    goto L_08A012A0;
L_08A012A0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A012EC; }
    goto L_08A012A8;
L_08A012A8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A012B0;
L_08A012B0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A012BC;
L_08A012BC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A012C8;
L_08A012C8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A01298; }
    goto L_08A012D0;
L_08A012D0:;
    v1 = LD32(s1+4);
    goto L_08A012D4;
L_08A012D4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A01280; }
    goto L_08A012E4;
L_08A012E4:;
    goto L_08A011E0;
L_08A012EC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A012B0;
L_08A012FC:;
    s0 = LD32(s0+4);
    goto L_08A012C8;
}

/* 08A01304 */
rv_t func_08A01304(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A01304:;
    sp = sp - 32;
    v0 = LD_U8(a0+152);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0136C; }
    goto L_08A0131C;
L_08A0131C:;
    v1 = LD32(a0);
    a1 = D_08B45A9C - (23196);
    a1 = a1 + 23196;
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A0136C; }
    goto L_08A0133C;
L_08A0133C:;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01344;
L_08A01344:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01358;
L_08A01358:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A01398; }
    goto L_08A01360;
L_08A01360:;
    v0 = LD_U8(s0+200);
    goto L_08A01364;
L_08A01364:;
    cnd_ = v0 != 0;
    a1 = 3;
    if (cnd_) { goto L_08A0137C; }
    goto L_08A0136C;
L_08A0136C:;
    goto L_08A01370;
L_08A01370:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0137C:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BA5D4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01390;
L_08A01390:;
    goto L_08A01370;
L_08A01398:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A013A8;
L_08A013A8:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEF5F0 - (-2576);
    f0 = BITSF(LD32(v0-2576));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s0+200); goto L_08A01364; }
    goto L_08A013E8;
L_08A013E8:;
    v0 = LD_U8(s0+236);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+200); goto L_08A01364; }
    goto L_08A013F4;
L_08A013F4:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a1 = LD32(a0+8);
    a1 = a1 | 0x4;
    { rv_t r_ = func_08864108(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0140C;
L_08A0140C:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01424;
L_08A01424:;
    v0 = 1;
    ST8(s0+236, v0);
    goto L_08A01360;
}

/* 08A01430 */
rv_t func_08A01430(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A01430:;
    sp = sp - 48;
    f20 = BITSF(0);
    f0 = BITSF(LD32(a0+176));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A01500; }
    goto L_08A01458;
L_08A01458:;
    v1 = LD32(a0+136);
    v0 = 0x8af70000u;
    v0 = v0 | 0x5923;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A014AC; }
    goto L_08A0146C;
L_08A0146C:;
    v0 = LD_U8(a0+154);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0149C; }
    goto L_08A01478;
L_08A01478:;
    v0 = LD32(s0);
    goto L_08A0147C;
L_08A0147C:;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01488;
L_08A01488:;
    goto L_08A0148C;
L_08A0148C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A0149C:;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A014A4;
L_08A014A4:;
    goto L_08A0148C;
L_08A014AC:;
    v0 = func_08A02AE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A014B4;
L_08A014B4:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A01478; }
    goto L_08A014BC;
L_08A014BC:;
    a0 = s0 + 96;
    v0 = LD32(s0+96);
    a1 = LD32(a0+8);
    v1 = LD32(a0+4);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08A0147C; }
    goto L_08A014F8;
L_08A014F8:;
    a0 = s0 + 0;
    goto L_08A0149C;
L_08A01500:;
    func_08A02464(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A01508;
L_08A01508:;
    a0 = s0 + 0;
    goto L_08A0149C;
}

/* 08A01510 */
rv_t func_08A01510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A01510:;
    sp = sp - 16;
    v0 = 0x806b;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A01580; }
    goto L_08A01528;
L_08A01528:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x806d;
    if (cnd_) { goto L_08A01568; }
    goto L_08A01534;
L_08A01534:;
    v0 = 0x8028;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_08A01554; }
    goto L_08A01540;
L_08A01540:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01548;
L_08A01548:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A01554:;
    a0 = LD32(v0-16);
    a0 = a2 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01560;
L_08A01560:;
    v0 = 1;
    goto L_08A01548;
L_08A01568:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A01540; }
    goto L_08A01570;
L_08A01570:;
    a1 = LD32(a1+4);
    { u64 r_ = func_08A027B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01578;
L_08A01578:;
    v0 = 1;
    goto L_08A01548;
L_08A01580:;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01588;
L_08A01588:;
    v0 = 1;
    goto L_08A01548;
}

/* 08A01590 */
void func_08A01590(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336); memcpy(stack_ + 336, PTR(sp_in), 16); /* stack-passed arguments */
L_08A01590:;
    sp = sp - 336;
    v0 = 0x1b670000u;
    v0 = v0 | 0x90dc;
    fp = t2 & 0xff;
    s6 = a0 + 0;
    s5 = a3 + 0;
    s4 = a2 + 0;
    s3 = t0 + 0;
    f23 = f12;
    f0 = BITSF(LD32(a3));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+256, t1);
    ST32(sp+8, FBITS(f2));
    ST32(sp+260, t3);
    cnd_ = a1 == v0;
    ST32(sp+180, a1);
    if (cnd_) { goto L_08A02118; }
    goto L_08A01614;
L_08A01614:;
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    cnd_ = a1 == v0;
    if (cnd_) { s0 = D_08C2C31C - (-15588); goto L_08A01F50; }
    goto L_08A01624;
L_08A01624:;
    a0 = a1 + 0;
    v0 = func_089F9028(a0);
    goto L_08A0162C;
L_08A0162C:;
    cnd_ = v0 == 0;
    a0 = sp + 180;
    if (cnd_) { goto L_08A01F28; }
    goto L_08A01634;
L_08A01634:;
    a1 = 999;
    v0 = func_089F97D4(a0, a1, 0, 0, 0);
    goto L_08A0163C;
L_08A0163C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A01D70; }
    goto L_08A01644;
L_08A01644:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+128);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01658;
L_08A01658:;
    s6 = v0 + 0;
    goto L_08A0165C;
L_08A0165C:;
    cnd_ = s1 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_08A01D74; }
    goto L_08A01664;
L_08A01664:;
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    a1 = s6 + 0;
    a2 = sp + 184;
    ST32(sp+184, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0167C;
L_08A0167C:;
    a1 = 0x77ba0000u;
    a0 = LD32(sp+184);
    a2 = 1;
    a1 = a1 | 0x7a21;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01690;
L_08A01690:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    f22 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A016AC;
L_08A016AC:;
    a0 = LD32(sp+184);
    a1 = 0x87ba0000u;
    a1 = a1 | 0x7997;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A016C0;
L_08A016C0:;
    ST8(s1+152, v0);
    a1 = 0xc2e90000u;
    a1 = a1 | 0x7cd4;
    a0 = LD32(sp+184);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A016D8;
L_08A016D8:;
    ST8(s1+154, v0);
    a1 = 0x6940000u;
    a1 = a1 | 0x745;
    v0 = LD32(s1);
    a0 = LD32(sp+184);
    f12 = f22;
    s0 = LD32(v0-20);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A016F8;
L_08A016F8:;
    s0 = s1 + s0;
    ST32(s0+32, FBITS(f0));
    v0 = LD32(s1);
    v1 = LD32(v0-20);
    v1 = s1 + v1;
    f0 = BITSF(LD32(v1+32));
    fcc = FCMP(f0, f22, 14);
    cnd_ = !fcc;
    a0 = LD32(sp+184);
    if (cnd_) { goto L_08A01730; }
    goto L_08A01720;
L_08A01720:;
    v0 = D_08AEF604 - (-2556);
    f0 = BITSF(LD32(v0-2556));
    ST32(v1+32, FBITS(f0));
    a0 = LD32(sp+184);
    goto L_08A01730;
L_08A01730:;
    a1 = 0x312f0000u;
    a2 = fp + 0;
    a1 = a1 | 0xa6d8;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01740;
L_08A01740:;
    fp = v0 + 0;
    v0 = D_08AEF608 - (-2552);
    f12 = BITSF(LD32(v0-2552));
    a0 = LD32(sp+184);
    a1 = 0x95a30000u;
    a1 = a1 | 0x3be7;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0175C;
L_08A0175C:;
    ST32(s1+144, FBITS(f0));
    v0 = D_08AEF5F4 - (-2572);
    a1 = 0xbdde0000u;
    f20 = BITSF(LD32(v0-2572));
    a0 = LD32(sp+184);
    a1 = a1 | 0x31c2;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0177C;
L_08A0177C:;
    ST32(s1+160, FBITS(f0));
    a1 = 0x8fbb0000u;
    f12 = f20;
    a0 = LD32(sp+184);
    a1 = a1 | 0x8757;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01794;
L_08A01794:;
    ST32(s1+164, FBITS(f0));
    a1 = 0x972f0000u;
    a2 = 0 + 0;
    a0 = LD32(sp+184);
    a1 = a1 | 0x54b9;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A017AC;
L_08A017AC:;
    ST8(s1+168, v0);
    v0 = D_08AEF60C - (-2548);
    a1 = 0x90110000u;
    f12 = BITSF(LD32(v0-2548));
    a0 = LD32(sp+184);
    a1 = a1 | 0xd1a5;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A017C8;
L_08A017C8:;
    ST32(s1+148, FBITS(f0));
    a1 = 0xa0b0000u;
    a1 = a1 | 0xeaa3;
    a0 = LD32(sp+184);
    f12 = f22;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A017E0;
L_08A017E0:;
    ST32(s1+188, FBITS(f0));
    a1 = 0x51dd0000u;
    a1 = a1 | 0xdcab;
    a0 = LD32(sp+184);
    f12 = f22;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A017F8;
L_08A017F8:;
    ST32(s1+184, FBITS(f0));
    a1 = 0xf120000u;
    a1 = a1 | 0xe0f9;
    a0 = LD32(sp+184);
    f12 = f22;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01810;
L_08A01810:;
    ST32(s1+192, FBITS(f0));
    a1 = 0x7cf00000u;
    f12 = f22;
    a0 = LD32(sp+184);
    a1 = a1 | 0xa3e3;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01828;
L_08A01828:;
    ST32(s1+176, FBITS(f0));
    a1 = 0xc9330000u;
    a1 = a1 | 0x750e;
    a0 = LD32(sp+184);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01840;
L_08A01840:;
    ST32(s1+180, v0);
    a1 = 0x30800000u;
    a2 = 0 + 0;
    a0 = LD32(sp+184);
    a1 = a1 | 0xb8df;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A01858;
L_08A01858:;
    ST32(s1+196, v0);
    v0 = D_08AEF5F8 - (-2568);
    a1 = 0xb2580000u;
    f12 = BITSF(LD32(v0-2568));
    a0 = LD32(sp+184);
    a1 = a1 | 0xef41;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01874;
L_08A01874:;
    ST32(s1+240, FBITS(f0));
    a1 = 0x97220000u;
    a2 = 0 + 0;
    a0 = LD32(sp+184);
    a1 = a1 | 0x43fe;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0188C;
L_08A0188C:;
    ST8(s1+200, v0);
    a1 = 0xfa300000u;
    a1 = a1 | 0xc190;
    a0 = LD32(sp+184);
    f12 = f22;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A018A4;
L_08A018A4:;
    a0 = LD32(sp+184);
    a1 = 0x10d40000u;
    a1 = a1 | 0x1a5b;
    f12 = f22;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A018BC;
L_08A018BC:;
    a0 = LD32(sp+184);
    a1 = 0xf130000u;
    a1 = a1 | 0xa2d7;
    f12 = f22;
    f20 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A018D4;
L_08A018D4:;
    ST32(s1+220, FBITS(f21));
    a1 = 0x5d20000u;
    a1 = a1 | 0x2bb3;
    a0 = LD32(sp+184);
    ST32(s1+228, FBITS(f20));
    a2 = 0 + 0;
    ST32(s1+224, FBITS(f0));
    v0 = LD32(sp+336);
    ST32(s1+232, v0);
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A018FC;
L_08A018FC:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+184);
    if (cnd_) { goto L_08A01EF0; }
    goto L_08A01904;
L_08A01904:;
    a1 = 0x6850000u;
    a1 = a1 | 0x4fa1;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01914;
L_08A01914:;
    a0 = LD32(s1);
    v1 = LD32(a0-12);
    v1 = s1 + v1;
    a1 = LD32(v1+8);
    ST32(v1+12, v0);
    a1 = (a1 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    ST32(v1+8, a1);
    ST32(v1+16, 0);
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    v0 = LD32(v1);
    a1 = LD32(v0+120);
    t_ = a1;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0194C;
L_08A0194C:;
    a2 = LD32(s1);
    goto L_08A01950;
L_08A01950:;
    a1 = 0 + 0;
    v1 = LD32(a2-12);
    v1 = s1 + v1;
    v0 = LD32(v1+16);
    cnd_ = v0 != 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08A0196C; }
    goto L_08A01968;
L_08A01968:;
    a1 = LD32(v1+12);
    goto L_08A0196C;
L_08A0196C:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a2-12); goto L_08A0198C; }
    goto L_08A01974;
L_08A01974:;
    v0 = LD32(a0-12);
    a0 = s1 + v0;
    v1 = LD32(a0+16);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A01EC4; }
    goto L_08A01988;
L_08A01988:;
    v0 = LD32(a2-12);
    goto L_08A0198C;
L_08A0198C:;
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A01AD4; }
    goto L_08A0199C;
L_08A0199C:;
    s7 = D_08C2C31C - (-15588);
    a0 = s7 - 15588;
    a2 = 1;
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A019AC;
L_08A019AC:;
    a1 = v0 + 0;
    s0 = s3 + 0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A019CC; }
    goto L_08A019BC;
L_08A019BC:;
    v1 = LD32(v0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    s2 = LD32(v0+4);
    goto L_08A019CC;
L_08A019CC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A01A1C; }
    goto L_08A019D4;
L_08A019D4:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    v0 = 999;
    v1 = a1 + v1;
    v1 = LD32(v1+48);
    cnd_ = v1 == v0;
    a0 = s7 - 15588;
    if (cnd_) { goto L_08A01A1C; }
    goto L_08A019F0;
L_08A019F0:;
    a1 = v1 + 0;
    a2 = 1;
    s0 = v1 + 0;
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01A00;
L_08A01A00:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A01A1C; }
    goto L_08A01A0C;
L_08A01A0C:;
    v1 = LD32(v0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s2 = LD32(v0+4);
    goto L_08A01A1C;
L_08A01A1C:;
    cnd_ = s2 == 0;
    a0 = D_08C2C200 - (-15872);
    if (cnd_) { goto L_08A01A34; }
    goto L_08A01A24;
L_08A01A24:;
    a0 = s2 + 0;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01A2C;
L_08A01A2C:;
    cnd_ = v0 == 0;
    a0 = D_08C2C200 - (-15872);
    if (cnd_) { goto L_08A01AA4; }
    goto L_08A01A34;
L_08A01A34:;
    v0 = 999;
    cnd_ = s0 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A01AA4; }
    goto L_08A01A40;
L_08A01A40:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A01A90; }
    goto L_08A01A64;
L_08A01A64:;
    a0 = LD32(a1);
    goto L_08A01A68;
L_08A01A68:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A01EA4; }
    goto L_08A01A80;
L_08A01A80:;
    a1 = LD32(a1+4);
    goto L_08A01A84;
L_08A01A84:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A01A68; }
    goto L_08A01A8C;
L_08A01A8C:;
    a0 = 0 + 0;
    goto L_08A01A90;
L_08A01A90:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A01AA4; }
    goto L_08A01A98;
L_08A01A98:;
    { rv_t r_ = func_08A05694(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01AA0;
L_08A01AA0:;
    s2 = v0 + 0;
    goto L_08A01AA4;
L_08A01AA4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD_U8(s1+200); goto L_08A01AC8; }
    goto L_08A01AAC;
L_08A01AAC:;
    v1 = LD32(s1);
    a1 = LD32(s2+8);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    func_088BAEAC(a0, a1);
    goto L_08A01AC4;
L_08A01AC4:;
    v0 = LD_U8(s1+200);
    goto L_08A01AC8;
L_08A01AC8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A01E48; }
    goto L_08A01AD0;
L_08A01AD0:;
    a2 = LD32(s1);
    goto L_08A01AD4;
L_08A01AD4:;
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    cnd_ = s3 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08A01B44; }
    goto L_08A01AE4;
L_08A01AE4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A01B34; }
    goto L_08A01B08;
L_08A01B08:;
    a0 = LD32(a1);
    goto L_08A01B0C;
L_08A01B0C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A01E28; }
    goto L_08A01B24;
L_08A01B24:;
    a1 = LD32(a1+4);
    goto L_08A01B28;
L_08A01B28:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A01B0C; }
    goto L_08A01B30;
L_08A01B30:;
    v1 = 0 + 0;
    goto L_08A01B34;
L_08A01B34:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(a2+32); goto L_08A01B48; }
    goto L_08A01B3C;
L_08A01B3C:;
    v0 = LD32(v1+12);
    ST32(s1+156, v0);
    goto L_08A01B44;
L_08A01B44:;
    v1 = LD32(a2+32);
    goto L_08A01B48;
L_08A01B48:;
    a0 = s1 + 0;
    t_ = v1;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01B54;
L_08A01B54:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    a1 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01B70;
L_08A01B70:;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+120);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01B8C;
L_08A01B8C:;
    v1 = LD32(s1);
    a3 = s1 + 84;
    a1 = 0xc1f00000u;
    v0 = LD32(v1-20);
    a1 = a1 | 0x2951;
    a2 = 0 + 0;
    v0 = s1 + v0;
    ST32(v0+4, s3);
    v0 = LD32(sp+256);
    a0 = LD32(sp+184);
    ST32(s1+244, v0);
    v0 = LD32(sp+260);
    ST32(s1+140, v0);
    f1 = BITSF(LD32(s4+8));
    f0 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    ST32(s1+132, s6);
    v0 = LD32(sp+180);
    ST32(s1+84, FBITS(f2));
    ST32(s1+136, v0);
    ST32(s1+172, FBITS(f23));
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01BEC;
L_08A01BEC:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+180);
    if (cnd_) { goto L_08A01DFC; }
    goto L_08A01BF4;
L_08A01BF4:;
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    cnd_ = v1 == v0;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    if (cnd_) { goto L_08A01CB8; }
    goto L_08A01C04;
L_08A01C04:;
    {v0=FBITS(v[50]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[54]);}
    f8 = BITSF(v0);
    {v0=FBITS(v[58]);}
    f9 = BITSF(v0);
    {v0=FBITS(v[48]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[49]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[52]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[53]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[56]);}
    f3 = BITSF(v0);
    f7 = f0;
    {v0=FBITS(v[57]);}
    ST32(sp+128, FBITS(f6));
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(sp+132, FBITS(f4));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(sp+136, FBITS(f7));
    a1 = sp + 80;
    ST32(sp+140, FBITS(f5));
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f8));
    ST32(sp+152, FBITS(f3));
    ST32(sp+156, v0);
    ST32(sp+160, FBITS(f9));
    ST32(sp+80, FBITS(f6));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f7));
    ST32(sp+92, FBITS(f5));
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f8));
    ST32(sp+104, FBITS(f3));
    ST32(sp+108, v0);
    ST32(sp+112, FBITS(f9));
    v0 = LD32(s1);
    v1 = LD32(v0+36);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01CB8;
L_08A01CB8:;
    v0 = LD32(s1);
    goto L_08A01CBC;
L_08A01CBC:;
    a0 = LD32(v0-20);
    a0 = s1 + a0;
    func_088666FC(a0);
    goto L_08A01CC8;
L_08A01CC8:;
    cnd_ = fp == 0;
    if (cnd_) { a2 = LD32(s1); goto L_08A01D40; }
    goto L_08A01CD0;
L_08A01CD0:;
    v1 = LD32(sp+180);
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    cnd_ = v1 == v0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_08A01D3C; }
    goto L_08A01CE4;
L_08A01CE4:;
    a0 = a0 - 15588;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01CF4;
L_08A01CF4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A01D3C; }
    goto L_08A01CFC;
L_08A01CFC:;
    v1 = LD32(v0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01D0C;
L_08A01D0C:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f1 = f1 + f3;
    f0 = f0 + f4;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    goto L_08A01D3C;
L_08A01D3C:;
    a2 = LD32(s1);
    goto L_08A01D40;
L_08A01D40:;
    v0 = LD32(a2-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { a2 = 1; goto L_08A01DB4; }
    goto L_08A01D54;
L_08A01D54:;
    v0 = LD32(a2+132);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01D60;
L_08A01D60:;
    v1 = LD32(s1);
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01D70;
L_08A01D70:;
    v0 = s1 + 0;
    goto L_08A01D74;
L_08A01D74:;
    sp = sp + 336;
    return;
L_08A01DB4:;
    a1 = sp + 0;
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01DBC;
L_08A01DBC:;
    f0 = BITSF(LD32(sp+4));
    v0 = s1 + 96;
    f1 = BITSF(LD32(sp));
    ST32(v0+4, FBITS(f0));
    v1 = s1 + 108;
    f0 = BITSF(LD32(sp+8));
    ST32(s1+96, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(sp));
    a2 = LD32(s1);
    ST32(s1+108, FBITS(f0));
    goto L_08A01D54;
L_08A01DFC:;
    s0 = sp + 80;
    a1 = s5 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01E0C;
L_08A01E0C:;
    v1 = LD32(s1);
    a1 = s0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01E20;
L_08A01E20:;
    v0 = LD32(s1);
    goto L_08A01CBC;
L_08A01E28:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A01B24; }
    goto L_08A01E34;
L_08A01E34:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A01B28; }
    goto L_08A01E40;
L_08A01E40:;
    goto L_08A01B34;
L_08A01E48:;
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    a0 = s0 + 0;
    func_088BB4A4(a0, a1);
    goto L_08A01E60;
L_08A01E60:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01E6C;
L_08A01E6C:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    func_088BB4A4(a0, a1);
    goto L_08A01E84;
L_08A01E84:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01E9C;
L_08A01E9C:;
    a2 = LD32(s1);
    goto L_08A01AD4;
L_08A01EA4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A01A84; }
    goto L_08A01EB0;
L_08A01EB0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A01A84; }
    goto L_08A01EBC;
L_08A01EBC:;
    goto L_08A01A90;
L_08A01EC4:;
    a1 = 1;
    { rv_t r_ = func_08864BB0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01ECC;
L_08A01ECC:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+120);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01EE8;
L_08A01EE8:;
    a2 = LD32(s1);
    goto L_08A01988;
L_08A01EF0:;
    a1 = 0x350000u;
    a1 = a1 | 0xe57d;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01F00;
L_08A01F00:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01F20;
L_08A01F20:;
    a2 = LD32(s1);
    goto L_08A01950;
L_08A01F28:;
    a0 = 388;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01F30;
L_08A01F30:;
    a2 = LD32(sp+180);
    a0 = v0 + 0;
    a1 = s6 + 0;
    a3 = 999;
    s0 = v0 + 0;
    func_089FFD44(a0, a1, a2, a3);
    goto L_08A01F48;
L_08A01F48:;
    s1 = s0 + 0;
    goto L_08A0165C;
L_08A01F50:;
    s0 = s0 - 15588;
    a0 = s0 + 0;
    a1 = t0 + 0;
    a2 = 1;
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01F70;
L_08A01F70:;
    a0 = s0 + 0;
    a1 = LD32(sp+260);
    a2 = 1;
    s1 = v0 + 0;
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A01F84;
L_08A01F84:;
    cnd_ = s1 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A020D4; }
    goto L_08A01F8C;
L_08A01F8C:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A01FA8;
L_08A01FA8:;
    v1 = D_08AEF5F4 - (-2572);
    f5 = BITSF(LD32(v0+28));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v1-2572));
    ST32(sp+32, FBITS(f1));
    f4 = f5 * f0;
    f3 = f1 * f0;
    f0 = f2 * f0;
    ST32(sp+36, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f0));
    cnd_ = s0 == 0;
    ST32(sp+56, FBITS(f4));
    if (cnd_) { goto L_08A020D4; }
    goto L_08A01FF0;
L_08A01FF0:;
    a0 = 0x8a940000u;
    a2 = sp + 176;
    a0 = a0 | 0xc9e9;
    a1 = s6 + 0;
    ST32(sp+176, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02008;
L_08A02008:;
    v0 = D_08AEF5F8 - (-2568);
    f12 = BITSF(LD32(v0-2568));
    a0 = LD32(sp+176);
    a1 = 0xe1640000u;
    a1 = a1 | 0xda1d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02020;
L_08A02020:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0203C;
L_08A0203C:;
    f1 = f20 * f20;
    v1 = D_08AEF5FC - (-2564);
    f0 = BITSF(LD32(v1-2564));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 * f0;
    v0 = D_08AEF600 - (-2560);
    f0 = BITSF(LD32(v0-2560));
    f5 = BITSF(LD32(s4));
    ST32(sp+48, FBITS(f2));
    f6 = f0 / f1;
    a1 = 0 + 0;
    f0 = BITSF(LD32(s4+4));
    f1 = BITSF(LD32(s4+8));
    ST32(sp+52, FBITS(f3));
    a3 = sp + 16;
    a2 = sp + 64;
    ST32(sp+56, FBITS(f4));
    f2 = f2 - f5;
    f3 = f3 - f0;
    f4 = f4 - f1;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    goto L_08A020A0;
L_08A020A0:;
    a0 = a1 << 2;
    v0 = a0 + s5;
    f1 = BITSF(LD32(v0));
    v1 = a0 + a2;
    f0 = BITSF(LD32(v1));
    f1 = f1 * f20;
    a1 = a1 + 1;
    a0 = a3 + a0;
    v0 = (s32)a1 < 3;
    f0 = f0 - f1;
    f0 = f0 * f6;
    cnd_ = v0 != 0;
    ST32(a0, FBITS(f0));
    if (cnd_) { goto L_08A020A0; }
    goto L_08A020D4;
L_08A020D4:;
    a0 = 388;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A020DC;
L_08A020DC:;
    a2 = LD32(sp+180);
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s6 + 0;
    a3 = 999;
    func_089FFD44(a0, a1, a2, a3);
    goto L_08A020F4;
L_08A020F4:;
    cnd_ = s1 == 0;
    v0 = s1 + 120;
    if (cnd_) { goto L_08A01D70; }
    goto L_08A020FC;
L_08A020FC:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+24));
    ST32(s1+120, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    goto L_08A0165C;
L_08A02118:;
    a0 = 388;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02120;
L_08A02120:;
    a2 = LD32(sp+180);
    a0 = v0 + 0;
    a1 = s6 + 0;
    a3 = 999;
    s0 = v0 + 0;
    func_08A02E44(a0, a1, a2, a3);
    goto L_08A02138;
L_08A02138:;
    s1 = s0 + 0;
    goto L_08A0165C;
}

/* 08A02140 */
rv_t func_08A02140(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A02140:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A02148 */
rv_t func_08A02148(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
L_08A02148:;
    v0 = LD_U8(a0+153);
    v1 = 0x8af70000u;
    a2 = a0 + 0;
    cnd_ = v0 != 0;
    v1 = v1 | 0x5923;
    if (cnd_) { goto L_08A021E0; }
    goto L_08A0215C;
L_08A0215C:;
    v0 = LD32(a2+136);
    a3 = D_08B25AC0 - (23232);
    a0 = 1;
    cnd_ = v0 == v1;
    t0 = a3 + 23232;
    if (cnd_) { goto L_08A021E0; }
    goto L_08A02170;
L_08A02170:;
    ST8(a2+153, a0);
    v0 = D_08AEF614 - (-2540);
    ST8(a2+154, a0);
    v1 = LD32(a3+23232);
    a0 = LD32(t0+4);
    f3 = BITSF(LD32(v0-2540));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEF618 - (-2536);
    f2 = BITSF(LD32(v0-2536));
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AEF61C - (-2532);
    f0 = BITSF(LD32(v0-2532));
    f2 = f2 - f3;
    a1 = LD32(a2);
    f1 = f1 * f0;
    a0 = a0 + v1;
    v0 = LD32(a1-20);
    ST32(t0+4, a0);
    f1 = f1 * f2;
    v0 = a2 + v0;
    ST32(a3+23232, v1);
    f1 = f1 + f3;
    ST32(v0+32, FBITS(f1));
    goto L_08A021E0;
L_08A021E0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A021E8 */
u64 func_08A021E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A021E8:;
    sp = sp - 16;
    a2 = 1;
    s0 = a1 + 0;
    v0 = LD32(a0+140);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = v0 + 0;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02210;
L_08A02210:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+132, s0); goto L_08A02218; }
    goto L_08A02218;
L_08A02218:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A02228 */
void func_08A02228(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A02228:;
    sp = sp - 16;
    v0 = LD32(a0+156);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A02254; }
    goto L_08A0223C;
L_08A0223C:;
    f1 = BITSF(LD32(a0+240));
    f0 = BITSF(LD32(a0+216));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A0225C; }
    goto L_08A02254;
L_08A02254:;
    sp = sp + 16;
    return;
L_08A0225C:;
    { rv_t r_ = func_08A0226C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02264;
L_08A02264:;
    goto L_08A02254;
}

/* 08A0226C */
rv_t func_08A0226C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0226C:;
    sp = sp - 80;
    a2 = sp + 16;
    s1 = a0 + 0;
    a1 = LD32(a0+132);
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A022AC;
L_08A022AC:;
    a1 = 0x47280000u;
    a0 = LD32(sp+16);
    a1 = a1 | 0xcc13;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A022C0;
L_08A022C0:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A02358; }
    goto L_08A022C8;
L_08A022C8:;
    v0 = LD32(s1);
    goto L_08A022CC;
L_08A022CC:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A022E4;
L_08A022E4:;
    a1 = LD32(s1);
    f12 = BITSF(LD32(s1+164));
    f13 = BITSF(LD32(s1+160));
    v1 = LD32(a1-16);
    a0 = LD32(a1-20);
    f14 = BITSF(LD32(s1+144));
    v1 = s1 + v1;
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    a3 = LD32(s1+244);
    t0 = LD32(s1+132);
    t1 = LD32(s1+232);
    a1 = LD32(v1+4);
    a0 = v0 + 0;
    { rv_t r_ = func_0897A7E8(a0, a1, a2, a3, t0, t1, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02320;
L_08A02320:;
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02330;
L_08A02330:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A02358:;
    a0 = 0x806c;
    a1 = 28;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0236C;
L_08A0236C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A0244C; }
    goto L_08A02374;
L_08A02374:;
    s2 = LD32(v0+24);
    cnd_ = s2 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A02434; }
    goto L_08A02380;
L_08A02380:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s2 + 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0239C;
L_08A0239C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s2+8, FBITS(f0));
    ST32(s2, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A023D0;
L_08A023D0:;
    v1 = LD32(s1);
    f21 = BITSF(LD32(v0+8));
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A023F0;
L_08A023F0:;
    v1 = LD32(s1);
    f20 = BITSF(LD32(v0+20));
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02410;
L_08A02410:;
    f0 = BITSF(LD32(v0+32));
    ST32(sp, FBITS(f21));
    ST32(sp+4, FBITS(f20));
    ST32(sp+8, FBITS(f0));
    ST32(s2+24, s3);
    ST32(s2+12, FBITS(f21));
    ST32(s0+4, FBITS(f20));
    ST32(s0+8, FBITS(f0));
    v1 = LD32(s1);
    goto L_08A02434;
L_08A02434:;
    v0 = LD32(v1-16);
    v1 = 8;
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    ST32(s4, v1);
    ST32(s4+4, a0);
    goto L_08A0244C;
L_08A0244C:;
    a0 = s4 + 0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0245C;
L_08A0245C:;
    v0 = LD32(s1);
    goto L_08A022CC;
}

/* 08A02464 */
void func_08A02464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_08A02464:;
    sp = sp - 256;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s5 = D_08AEF620 - (-2528);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A024A8;
L_08A024A8:;
    ST32(sp+20, 0);
    s2 = v0 + 0;
    a0 = LD32(s0+196);
    f0 = BITSF(LD32(s5-2528));
    ST32(sp+24, 0);
    ST32(sp+40, FBITS(f0));
    ST32(sp+16, FBITS(f0));
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    cnd_ = a0 == 0;
    f20 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_08A024EC; }
    goto L_08A024D4;
L_08A024D4:;
    f0 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A02794; }
    goto L_08A024E0;
L_08A024E0:;
    v0 = D_08AEF624 - (-2524);
    f0 = BITSF(LD32(v0-2524));
    f20 = f0 / f1;
    goto L_08A024EC;
L_08A024EC:;
    ST32(sp+48, 0);
    v0 = D_08AEF628 - (-2520);
    s1 = 0 + 0;
    f1 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(v0-2520));
    ST32(sp+52, FBITS(f1));
    ST32(sp+84, FBITS(f0));
    ST32(sp+88, FBITS(f1));
    ST32(sp+56, FBITS(f1));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f1));
    cnd_ = a0 == 0;
    ST32(sp+80, FBITS(f1));
    if (cnd_) { goto L_08A02750; }
    goto L_08A02524;
L_08A02524:;
    {v[0]=0.63661977236f;}
    s4 = sp + 128;
    s3 = sp + 64;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_08A02534;
L_08A02534:;
    f1 = BITSF(s1);
    cnd_ = (s32)s1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A02778; }
    goto L_08A02540;
L_08A02540:;
    f1 = f0 * f20;
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v[8]=BITSF(v0);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[4]=d0;}
    {float s0=v[8];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    f7 = BITSF(LD32(sp+24));
    f4 = BITSF(LD32(sp+16));
    f6 = BITSF(LD32(sp+20));
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f3 = BITSF(LD32(sp+40));
    f5 = f0;
    f7 = f7 * f1;
    f4 = f4 * f1;
    f6 = f6 * f1;
    f1 = BITSF(LD32(sp+32));
    f3 = f3 * f0;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f1 = f1 * f0;
    f0 = BITSF(LD32(sp+36));
    f3 = f3 + f7;
    f8 = BITSF(LD32(s0+188));
    f0 = f0 * f5;
    f1 = f1 + f4;
    f2 = BITSF(LD32(s0+192));
    f13 = f3 * f8;
    f0 = f0 + f6;
    f12 = f1 * f8;
    f10 = f3 * f2;
    f9 = f1 * f2;
    f8 = f0 * f8;
    f2 = f0 * f2;
    ST32(sp+128, FBITS(f4));
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+96, FBITS(f1));
    ST32(sp+104, FBITS(f3));
    ST32(sp+48, FBITS(f1));
    ST32(sp+56, FBITS(f3));
    f4 = BITSF(LD32(sp+80));
    f3 = BITSF(LD32(sp+84));
    f1 = BITSF(LD32(sp+88));
    f4 = f4 + f12;
    f3 = f3 + f8;
    f1 = f1 + f13;
    ST32(sp+132, FBITS(f6));
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    ST32(sp+136, FBITS(f7));
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    ST32(sp+100, FBITS(f0));
    v0 = FBITS(f1);
    {v[14]=BITSF(v0);}
    ST32(sp+52, FBITS(f0));
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f0 = BITSF(0);
    ST32(sp+112, FBITS(f9));
    {v0=FBITS(v[0]);}
    f5 = BITSF(v0);
    ST32(sp+116, FBITS(f2));
    fcc = FCMP(f5, f0, 2);
    ST32(sp+120, FBITS(f10));
    f6 = BITSF(LD32(s2));
    f7 = BITSF(LD32(s2+4));
    f11 = BITSF(LD32(s2+8));
    f9 = f9 + f6;
    f2 = f2 + f7;
    f10 = f10 + f11;
    ST32(sp+64, FBITS(f9));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f10));
    ST32(sp+128, FBITS(f12));
    ST32(sp+132, FBITS(f8));
    ST32(sp+136, FBITS(f13));
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+88, FBITS(f1));
    if (cnd_) { goto L_08A026D8; }
    goto L_08A0269C;
L_08A0269C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+136, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    goto L_08A026D8;
L_08A026D8:;
    v0 = LD32(s0);
    f0 = BITSF(LD32(s0+184));
    f2 = BITSF(LD32(sp+80));
    v1 = LD32(v0-20);
    f3 = BITSF(LD32(sp+84));
    f1 = BITSF(LD32(sp+88));
    a0 = LD32(s0+180);
    v1 = s0 + v1;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f1 = f1 * f0;
    t0 = LD32(v1+4);
    v0 = LD32(s0+232);
    t1 = LD32(s0+244);
    t3 = LD32(s0+140);
    f12 = BITSF(LD32(s5-2528));
    a1 = a0 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t2 = 0 + 0;
    ST32(sp+128, FBITS(f2));
    s1 = s1 + 1;
    ST32(sp+132, FBITS(f3));
    ST32(sp+136, FBITS(f1));
    ST32(sp, v0);
    func_08A01590(a0, a1, a2, a3, t0, t1, t2, t3, f12, sp);
    goto L_08A02740;
L_08A02740:;
    v1 = LD32(s0+196);
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A02534; }
    goto L_08A02750;
L_08A02750:;
    sp = sp + 256;
    return;
L_08A02778:;
    v0 = s1 & 0x1;
    v1 = s1 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A02540;
L_08A02794:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08A024E0;
}

/* 08A027B0 */
u64 func_08A027B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A027B0:;
    sp = sp - 16;
    v1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a0+168);
    cnd_ = v0 == 0;
    a2 = LD32(a0+140);
    if (cnd_) { goto L_08A027EC; }
    goto L_08A027D0;
L_08A027D0:;
    v1 = a2 ^ v1;
    v0 = a2 ^ 0x3e7;
    v0 = 0 < v0;
    v1 = v1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a1 = 999;
    if (cnd_) { goto L_08A027FC; }
    goto L_08A027EC;
L_08A027EC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A027FC:;
    { u64 r_ = func_08A021E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02804;
L_08A02804:;
    v0 = 999;
    ST32(s0+140, v0);
    goto L_08A027EC;
}

/* 08A02810 */
void func_08A02810(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_08A02810:;
    sp = sp - 240;
    s2 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0284C;
L_08A0284C:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s2 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = func_08A07134(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0286C;
L_08A0286C:;
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f5 = BITSF(0);
    v1 = FBITS(f3);
    v0 = FBITS(f2);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_08A028F8; }
    goto L_08A028B8;
L_08A028B8:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v1=FBITS(v[4]);}
    f5 = BITSF(v1);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08A028F8;
L_08A028F8:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f5, 12);
    cnd_ = fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A0292C; }
    goto L_08A0290C;
L_08A0290C:;
    goto L_08A02910;
L_08A02910:;
    sp = sp + 240;
    return;
L_08A0292C:;
    f12 = BITSF(LD32(v0-31328));
    v1 = LD32(s2);
    s0 = sp + 48;
    f12 = f12 + f12;
    v0 = LD32(v1-16);
    s1 = sp + 16;
    a1 = sp + 0;
    v0 = s2 + v0;
    f12 = f12 * f5;
    a3 = LD32(v0+4);
    a2 = s1 + 0;
    a0 = s0 + 0;
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_08A02960;
L_08A02960:;
    a0 = s0 + 0;
    v0 = func_08834F00(a0);
    goto L_08A02968;
L_08A02968:;
    s3 = LD32(v0+4);
    cnd_ = s3 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A0290C; }
    goto L_08A02974;
L_08A02974:;
    v0 = LD32(s2);
    v1 = LD32(v0-20);
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    cnd_ = s3 == v0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_08A0290C; }
    goto L_08A0298C;
L_08A0298C:;
    a0 = a0 - 15588;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0299C;
L_08A0299C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A02910; }
    goto L_08A029A4;
L_08A029A4:;
    v1 = LD32(s2);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s4)); goto L_08A029C8; }
    goto L_08A029BC;
L_08A029BC:;
    a1 = 3;
    { rv_t r_ = func_088BA5D4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A029C4;
L_08A029C4:;
    f0 = BITSF(LD32(s4));
    goto L_08A029C8;
L_08A029C8:;
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
    s0 = sp + 128;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s1 = sp + 176;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f4));
    ST32(sp+120, FBITS(f3));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02A24;
L_08A02A24:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02A30;
L_08A02A30:;
    v0 = LD32(s2);
    t0 = LD32(s4+8);
    a1 = s3 + 0;
    a0 = LD32(v0-12);
    a2 = sp + 32;
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    a3 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02A58;
L_08A02A58:;
    ST8(s2+200, 0);
    goto L_08A0290C;
}

/* 08A02A60 */
void func_08A02A60(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A02A60:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a0);
    a0 = D_08C2C31C - (-15588);
    a0 = a0 - 15588;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a1 = LD32(v1+48);
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02A90;
L_08A02A90:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A02AD8; }
    goto L_08A02A98;
L_08A02A98:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s0 = LD32(v0+4);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A02ADC; }
    goto L_08A02AB0;
L_08A02AB0:;
    v0 = LD32(a1);
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02ACC;
L_08A02ACC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02AD8;
L_08A02AD8:;
    goto L_08A02ADC;
L_08A02ADC:;
    sp = sp + 16;
    return;
}

/* 08A02AE8 */
u32 func_08A02AE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08A02AE8:;
    sp = sp - 160;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = sp + 80;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02B18;
L_08A02B18:;
    v1 = D_08AEF62C - (-2516);
    a0 = D_08AEF634 - (-2508);
    f7 = BITSF(LD32(a0-2508));
    f12 = BITSF(LD32(v1-2516));
    a1 = LD32(s0);
    v1 = D_08AEF630 - (-2512);
    f6 = f7 * f12;
    f3 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v1-2512));
    v1 = LD32(a1-16);
    f4 = f3 + f6;
    f12 = f12 - f5;
    s0 = s0 + v1;
    f0 = BITSF(0);
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    a3 = LD32(s0+4);
    a1 = sp + 48;
    a2 = sp + 16;
    a0 = s1 + 0;
    ST32(sp+72, FBITS(f0));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f0));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f0));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f6));
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_08A02BA8;
L_08A02BA8:;
    a0 = s1 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02BB0;
L_08A02BB0:;
    v0 = LD_U8(v0+32);
    v0 = v0 ^ 0x1;
    sp = sp + 160;
    return v0;
}

/* 08A02BCC */
void func_08A02BCC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A02BCC:;
    sp = sp - 32;
    v1 = D_08C2C190 - (-15984);
    v1 = v1 - 15984;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02C04;
L_08A02C04:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A02C50; }
    goto L_08A02C10;
L_08A02C10:;
    s0 = LD32(v0);
    goto L_08A02C14;
L_08A02C14:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A02C34; }
    goto L_08A02C1C;
L_08A02C1C:;
    v1 = LD32(s0);
    v0 = LD32(v1+140);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02C2C;
L_08A02C2C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A02C80; }
    goto L_08A02C34;
L_08A02C34:;
    a0 = sp + 0;
    goto L_08A02C38;
L_08A02C38:;
    a1 = 1;
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02C40;
L_08A02C40:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A02C14; }
    goto L_08A02C4C;
L_08A02C4C:;
    a0 = LD32(sp);
    goto L_08A02C50;
L_08A02C50:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A02C70; }
    goto L_08A02C60;
L_08A02C60:;
    goto L_08A02C64;
L_08A02C64:;
    sp = sp + 32;
    return;
L_08A02C70:;
    func_08ABD5DC(a0, 0, 0, 0);
    goto L_08A02C78;
L_08A02C78:;
    goto L_08A02C64;
L_08A02C80:;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02C8C;
L_08A02C8C:;
    a0 = sp + 0;
    goto L_08A02C38;
}

/* 08A02C94 */
rv_t func_08A02C94(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A02C94:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A02DB8; }
    goto L_08A02CC8;
L_08A02CC8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF638 - (-2504);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2504));
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
    t0 = D_08C2C0E0 - (-16160);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C0F0 - (-16144);
    a3 = D_08C2C100 - (-16128);
    v1 = t0 - 16160;
    a1 = v0 - 16144;
    a2 = a3 - 16128;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C190 - (-15984);
    s0 = s3 - 15984;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-16144, FBITS(f5));
    v0 = 4;
    ST32(t0-16160, FBITS(f1));
    ST32(a3-16128, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02D80;
L_08A02D80:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-15984, v0);
    if (cnd_) { goto L_08A02DAC; }
    goto L_08A02D90;
L_08A02D90:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A02D98;
L_08A02D98:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A02D98; }
    goto L_08A02DAC;
L_08A02DAC:;
    v0 = s3 - 15984;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A02DB8;
L_08A02DB8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A02DDC; }
    goto L_08A02DCC;
L_08A02DCC:;
    v0 = D_08C2C190 - (-15984);
    a0 = LD32(v0-15984);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A02DF4; }
    goto L_08A02DDC;
L_08A02DDC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A02DF4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02DFC;
L_08A02DFC:;
    goto L_08A02DDC;
}

/* 08A02E04 */
rv_t func_08A02E04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A02E04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A02C94(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02E18;
L_08A02E18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A02E24 */
rv_t func_08A02E24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A02E24:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A02C94(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02E38;
L_08A02E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A02E44 */
void func_08A02E44(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A02E44:;
    sp = sp - 32;
    s6 = a0 + 324;
    s1 = a0 + 0;
    a0 = s6 + 0;
    s0 = D_08B13778 - (14200);
    s0 = s0 + 14200;
    s5 = s1 + 248;
    s4 = a1 + 0;
    a1 = a3 + 0;
    s3 = a2 + 0;
    s2 = a3 + 0;
    func_08873E94(a0, a1);
    goto L_08A02E94;
L_08A02E94:;
    a1 = s0 + 44;
    a2 = (u32)-1;
    a0 = s5 + 0;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_08A02EA4;
L_08A02EA4:;
    a1 = s0 + 52;
    a0 = s1 + 352;
    s0 = s0 + 4;
    func_08866470(a0, a1, 0, 0);
    goto L_08A02EB4;
L_08A02EB4:;
    a1 = s0 + 0;
    a2 = s4 + 0;
    a0 = s1 + 0;
    a3 = s3 + 0;
    t0 = s2 + 0;
    func_089FF994(a0, a1, a2, a3);
    goto L_08A02ECC;
L_08A02ECC:;
    v1 = D_08B134F4 - (13556);
    v1 = v1 + 13556;
    v0 = v1 + 604;
    ST32(s1+352, v0);
    a0 = v1 + 280;
    a2 = v1 + 484;
    v0 = (u32)-32730;
    ST32(s1+248, a0);
    a1 = 1;
    ST32(s1, v1);
    ST32(s1+324, a2);
    ST16(s6+8, v0);
    s0 = LD32(s5+4);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A02F30; }
    goto L_08A02F08;
L_08A02F08:;
    goto L_08A02F0C;
L_08A02F0C:;
    sp = sp + 32;
    return;
L_08A02F30:;
    func_088BB4A4(a0, a1);
    goto L_08A02F38;
L_08A02F38:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A02F44;
L_08A02F44:;
    goto L_08A02F0C;
}

/* 08A02F4C */
rv_t func_08A02F4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A02F4C:;
    sp = sp - 112;
    s0 = a0 + 0;
    { rv_t r_ = func_08A005B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A02F68;
L_08A02F68:;
    f0 = BITSF(0);
    a3 = LD32(s0);
    v0 = LD32(a3-20);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+32));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A03048; }
    goto L_08A02F8C;
L_08A02F8C:;
    a2 = LD32(v0+4);
    a0 = D_08C2C31C - (-15588);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15588;
    if (cnd_) { goto L_08A033CC; }
    goto L_08A02FA0;
L_08A02FA0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A02FF0; }
    goto L_08A02FC4;
L_08A02FC4:;
    a0 = LD32(a1);
    goto L_08A02FC8;
L_08A02FC8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A033E0; }
    goto L_08A02FE0;
L_08A02FE0:;
    a1 = LD32(a1+4);
    goto L_08A02FE4;
L_08A02FE4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A02FC8; }
    goto L_08A02FEC;
L_08A02FEC:;
    s2 = 0 + 0;
    goto L_08A02FF0;
L_08A02FF0:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = LD32(a3-16); goto L_08A033D0; }
    goto L_08A02FF8;
L_08A02FF8:;
    v0 = LD32(s2);
    f0 = BITSF(0);
    v1 = LD32(v0-12);
    a0 = s2 + v1;
    f1 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = D_08AEF64C - (-2484);
    if (cnd_) { goto L_08A03084; }
    goto L_08A0301C;
L_08A0301C:;
    v0 = LD32(a3-20);
    f0 = BITSF(LD32(v1-2484));
    v0 = s0 + v0;
    ST32(v0+32, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A0305C; }
    goto L_08A03044;
L_08A03044:;
    goto L_08A03048;
L_08A03048:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08A0305C:;
    a1 = 1;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03064;
L_08A03064:;
    v1 = LD32(s0);
    a1 = 2;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BA5D4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0307C;
L_08A0307C:;
    goto L_08A03048;
L_08A03084:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03094;
L_08A03094:;
    a3 = LD32(s0);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    v1 = LD32(a3-20);
    f1 = BITSF(LD32(v0+4));
    a0 = D_08C2B3A4 - (-19548);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    v0 = 999;
    ST32(sp, FBITS(f0));
    v1 = a0 - 19548;
    ST32(sp+4, FBITS(f1));
    cnd_ = a2 == v0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08A03140; }
    goto L_08A030CC;
L_08A030CC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A0311C; }
    goto L_08A030F0;
L_08A030F0:;
    a0 = LD32(a1);
    goto L_08A030F4;
L_08A030F4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A033AC; }
    goto L_08A0310C;
L_08A0310C:;
    a1 = LD32(a1+4);
    goto L_08A03110;
L_08A03110:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A030F4; }
    goto L_08A03118;
L_08A03118:;
    s1 = 0 + 0;
    goto L_08A0311C;
L_08A0311C:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(a3-12); goto L_08A03144; }
    goto L_08A03124;
L_08A03124:;
    v1 = LD32(s1);
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03134;
L_08A03134:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A03308; }
    goto L_08A0313C;
L_08A0313C:;
    a3 = LD32(s0);
    goto L_08A03140;
L_08A03140:;
    a0 = LD32(a3-12);
    goto L_08A03144;
L_08A03144:;
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03158;
L_08A03158:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    f5 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_08A03200; }
    goto L_08A031BC;
L_08A031BC:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f5 = BITSF(v0);
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
    goto L_08A03200;
L_08A03200:;
    v0 = D_08AEF644 - (-2492);
    f0 = BITSF(LD32(v0-2492));
    fcc = FCMP(f0, f5, 12);
    cnd_ = !fcc;
    v0 = LD32(s0);
    if (cnd_) { goto L_08A032BC; }
    goto L_08A03218;
L_08A03218:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03230;
L_08A03230:;
    v1 = D_08AEF648 - (-2488);
    f0 = BITSF(LD32(v1-2488));
    f3 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    v1 = D_08B285A0 - (-31328);
    f4 = BITSF(LD32(v1-31328));
    ST32(sp+64, FBITS(f3));
    a0 = s0 + 0;
    f5 = f2 * f4;
    f3 = f3 * f4;
    f4 = f1 * f4;
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = f1 + f3;
    f0 = f0 + f5;
    f2 = f2 + f4;
    v1 = LD32(s0);
    ST32(sp+32, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A032B4;
L_08A032B4:;
    goto L_08A03048;
L_08A032BC:;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A032C8;
L_08A032C8:;
    a0 = 0x806e;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A032DC;
L_08A032DC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A03044; }
    goto L_08A032E4;
L_08A032E4:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A032F8;
L_08A032F8:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03300;
L_08A03300:;
    goto L_08A03048;
L_08A03308:;
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03314;
L_08A03314:;
    a2 = LD32(s1);
    a1 = LD32(v0+308);
    v0 = LD32(a2-12);
    a0 = 0 < a1;
    v0 = s1 + v0;
    v0 = LD32(v0+100);
    v1 = 0 < v0;
    a0 = a0 & v1;
    cnd_ = a0 == 0;
    if (cnd_) { a3 = LD32(s0); goto L_08A03140; }
    goto L_08A0333C;
L_08A0333C:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    if (cnd_) { a3 = LD32(s0); goto L_08A03140; }
    goto L_08A03348;
L_08A03348:;
    a0 = LD32(a1+12);
    cnd_ = (s32)a0 < 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A03368; }
    goto L_08A03354;
L_08A03354:;
    v0 = LD32(v1+68);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+72); goto L_08A03394; }
    goto L_08A03364;
L_08A03364:;
    a1 = 0 + 0;
    goto L_08A03368;
L_08A03368:;
    a0 = LD32(a2-12);
    a3 = 0 + 0;
    a2 = sp + 0;
    a0 = s1 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0338C;
L_08A0338C:;
    a3 = LD32(s0);
    goto L_08A03140;
L_08A03394:;
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+52);
    goto L_08A03368;
L_08A033AC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A0310C; }
    goto L_08A033B8;
L_08A033B8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A03110; }
    goto L_08A033C4;
L_08A033C4:;
    goto L_08A0311C;
L_08A033CC:;
    a0 = LD32(a3-16);
    goto L_08A033D0;
L_08A033D0:;
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A033D8;
L_08A033D8:;
    goto L_08A03048;
L_08A033E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A02FE0; }
    goto L_08A033EC;
L_08A033EC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A02FE4; }
    goto L_08A033F8;
L_08A033F8:;
    goto L_08A02FF0;
}

/* 08A03400 */
rv_t func_08A03400(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A03400:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a0);
    a0 = D_08C2C31C - (-15588);
    a0 = a0 - 15588;
    a1 = LD32(v0-20);
    a1 = s0 + a1;
    ST32(a1+32, 0);
    v1 = LD32(s0);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03440;
L_08A03440:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0346C; }
    goto L_08A03448;
L_08A03448:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08A0348C; }
    goto L_08A0346C;
L_08A0346C:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0347C;
L_08A0347C:;
    goto L_08A03480;
L_08A03480:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0348C:;
    a1 = 3;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0347C; }
    goto L_08A034A4;
L_08A034A4:;
    { rv_t r_ = func_088BA5D4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A034AC;
L_08A034AC:;
    goto L_08A03480;
}

/* 08A034B4 */
rv_t func_08A034B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A034B4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2C1A0 - (-15968);
    t1 = D_08C2C1B0 - (-15952);
    t2 = D_08C2C1C0 - (-15936);
    a1 = a1 & a0;
    v1 = t0 - 15968;
    a2 = t1 - 15952;
    cnd_ = a1 == 0;
    a3 = t2 - 15936;
    if (cnd_) { goto L_08A0356C; }
    goto L_08A034E4;
L_08A034E4:;
    v0 = D_08AEF650 - (-2480);
    f4 = BITSF(LD32(v0-2480));
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
    ST32(t0-15968, FBITS(f2));
    ST32(t1-15952, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-15936, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A0356C;
L_08A0356C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A03574 */
rv_t func_08A03574(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A03574:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A034B4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03588;
L_08A03588:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A03594 */
void func_08A03594(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A03594:;
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = D_08C2C200 - (-15872);
    s3 = s1 - 15872;
    s0 = (u32)-1;
    s4 = s3 + 16;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    v1 = LD32(a1+8);
    a0 = a0 + 60;
    v0 = LD32(a2-16);
    v0 = s2 + v0;
    ST32(v0, v1);
    v0 = 1;
    v1 = LD32(s2);
    ST8(s2+4, v0);
    v0 = D_08AEF654 - (-2476);
    f0 = BITSF(LD32(v0-2476));
    a2 = LD32(v1-16);
    v0 = 4;
    v1 = 999;
    ST32(s2+16, FBITS(f0));
    a2 = s2 + a2;
    ST32(s2+24, v0);
    ST32(s2+44, v1);
    ST32(s2+20, s0);
    ST32(s2+32, s0);
    ST8(s2+5, 0);
    ST8(s2+6, 0);
    ST32(s2+8, 0);
    ST32(s2+12, 0);
    ST32(s2+28, 0);
    ST32(s2+36, 0);
    ST32(s2+40, 0);
    ST8(s2+48, 0);
    ST8(s2+49, 0);
    ST8(s2+56, 0);
    ST8(s2+57, 0);
    a1 = LD32(a2+4);
    func_08A25B58(a0, a1);
    goto L_08A03660;
L_08A03660:;
    a1 = LD32(s2);
    ST32(s2+80, s0);
    a0 = 12;
    ST32(s2+76, s0);
    v0 = LD32(a1-16);
    v1 = LD32(s3+4);
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0368C;
L_08A0368C:;
    a0 = LD32(s1-15872);
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
    f0 = func_08ABFBA4(a0, 0, 0, 0);
    goto L_08A036C0;
L_08A036C0:;
    v0 = LD32(s4+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A03700; }
    goto L_08A036CC;
L_08A036CC:;
    v1 = LD32(s2);
    s1 = LD32(s3+16);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    cnd_ = s1 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_08A03700; }
    goto L_08A036E4;
L_08A036E4:;
    v0 = LD32(s1);
    goto L_08A036E8;
L_08A036E8:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A03760; }
    goto L_08A036F4;
L_08A036F4:;
    s1 = LD32(s1+4);
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A036E8; }
    goto L_08A03700;
L_08A03700:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03708;
L_08A03708:;
    v1 = LD32(s4+4);
    ST32(v0, s2);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s4+4, v0);
    goto L_08A0371C;
L_08A0371C:;
    v0 = D_08C2C230 - (-15824);
    a0 = LD_U8(v0-15824);
    v1 = D_08C2C22C - (-15828);
    cnd_ = a0 == 0;
    ST32(v1-15828, s2);
    if (cnd_) { goto L_08A03750; }
    goto L_08A03730;
L_08A03730:;
    goto L_08A03734;
L_08A03734:;
    sp = sp + 32;
    return;
L_08A03750:;
    a0 = s2 + 0;
    func_08A059E4();
    goto L_08A03758;
L_08A03758:;
    goto L_08A03734;
L_08A03760:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A03700; }
    goto L_08A03768;
L_08A03768:;
    v0 = LD32(s1);
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08A03700; }
    goto L_08A03774;
L_08A03774:;
    s1 = LD32(s1+8);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A03700; }
    goto L_08A03780;
L_08A03780:;
    v0 = LD32(s1);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_08A037A4; }
    goto L_08A0378C;
L_08A0378C:;
    s1 = LD32(s1+4);
    goto L_08A03790;
L_08A03790:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A03700; }
    goto L_08A03798;
L_08A03798:;
    v0 = LD32(s1);
    cnd_ = v0 != s2;
    if (cnd_) { s1 = LD32(s1+4); goto L_08A03790; }
    goto L_08A037A4;
L_08A037A4:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A03700; }
    goto L_08A037AC;
L_08A037AC:;
    v1 = LD32(s1);
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A03700; }
    goto L_08A037CC;
L_08A037CC:;
    ST8(s1+8, 0);
    goto L_08A0371C;
}

/* 08A037D4 */
void func_08A037D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A037D4:;
    sp = sp - 32;
    s4 = a0 + 348;
    s0 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2C200 - (-15872);
    s2 = s3 - 15872;
    func_08873BF8(a0);
    goto L_08A03808;
L_08A03808:;
    a1 = D_08B14198 - (16792);
    a1 = a1 + 16792;
    a0 = s0 + 84;
    a1 = a1 + 12;
    func_0885D56C(a0, a1);
    goto L_08A0381C;
L_08A0381C:;
    a1 = D_08B14008 - (16392);
    a1 = a1 + 16392;
    v0 = a1 + 264;
    ST32(s0+84, v0);
    v0 = 1;
    s1 = (u32)-1;
    ST8(s0+4, v0);
    v0 = D_08AEF658 - (-2472);
    v1 = 999;
    f0 = BITSF(LD32(v0-2472));
    v0 = 4;
    ST32(s0+24, v0);
    a2 = a1 + 376;
    a0 = s0 + 60;
    ST32(s0+16, FBITS(f0));
    ST32(s0+44, v1);
    ST32(s0+20, s1);
    ST32(s0+32, s1);
    ST32(s0, a1);
    ST8(s0+5, 0);
    ST8(s0+6, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(s0+28, 0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    ST8(s0+48, 0);
    ST8(s0+49, 0);
    ST8(s0+56, 0);
    ST8(s0+57, 0);
    ST32(s0+348, a2);
    a1 = LD32(s4+4);
    func_08A25B58(a0, a1);
    goto L_08A038A0;
L_08A038A0:;
    a1 = LD32(s0);
    ST32(s0+80, s1);
    a0 = 12;
    ST32(s0+76, s1);
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s0 + v0;
    s1 = LD32(v0+4);
    v1 = v1 - 1;
    s1 = s1 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A038CC;
L_08A038CC:;
    a0 = LD32(s3-15872);
    s1 = s1 << 2;
    v1 = LD32(s2+12);
    s1 = s1 + a0;
    a1 = LD32(s1);
    ST32(v0, s0);
    v1 = v1 + 1;
    a0 = s2 + 16;
    ST32(v0+4, a1);
    a1 = s0 + 0;
    ST32(s1, v0);
    ST8(v0+8, 0);
    ST32(s2+12, v1);
    func_08ACEDC0(a0, a1, 0, 0, 0);
    goto L_08A03904;
L_08A03904:;
    v0 = D_08C2C230 - (-15824);
    v1 = LD_U8(v0-15824);
    v0 = D_08C2C22C - (-15828);
    a0 = s0 + 0;
    cnd_ = v1 == 0;
    ST32(v0-15828, s0);
    if (cnd_) { goto L_08A0393C; }
    goto L_08A0391C;
L_08A0391C:;
    goto L_08A03920;
L_08A03920:;
    sp = sp + 32;
    return;
L_08A0393C:;
    func_08A059E4();
    goto L_08A03944;
L_08A03944:;
    goto L_08A03920;
}

/* 08A0394C */
void func_08A0394C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0394C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(a1+4);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(a1+8);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    ST32(v0, a0);
    a0 = LD32(s0+40);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A03B2C; }
    goto L_08A0399C;
L_08A0399C:;
    v1 = LD32(s0);
    s1 = D_08C2C200 - (-15872);
    s2 = s1 - 15872;
    v0 = LD32(v1-16);
    a0 = LD32(s2+4);
    a1 = LD32(s1-15872);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A039F4; }
    goto L_08A039D8;
L_08A039D8:;
    v0 = LD32(a0);
    goto L_08A039DC;
L_08A039DC:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08A03AE4; }
    goto L_08A039E4;
L_08A039E4:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A039DC; }
    goto L_08A039F4;
L_08A039F4:;
    a0 = s1 - 15872;
    a0 = a0 + 16;
    a1 = s0 + 0;
    a2 = 1;
    func_08ACEC6C(a0, a1, t1, t2, t3);
    goto L_08A03A08;
L_08A03A08:;
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    a1 = s0 + 0;
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03A18;
L_08A03A18:;
    v1 = LD_U8(s0+56);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A03ACC; }
    goto L_08A03A24;
L_08A03A24:;
    v0 = LD_U8(s0+57);
    goto L_08A03A28;
L_08A03A28:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A03AB4; }
    goto L_08A03A30;
L_08A03A30:;
    v0 = LD_U8(s0+4);
    goto L_08A03A34;
L_08A03A34:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+76); goto L_08A03A4C; }
    goto L_08A03A3C;
L_08A03A3C:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A03A9C; }
    goto L_08A03A48;
L_08A03A48:;
    v1 = LD32(s0+76);
    goto L_08A03A4C;
L_08A03A4C:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+80); goto L_08A03A8C; }
    goto L_08A03A58;
L_08A03A58:;
    v0 = 1;
    goto L_08A03A5C;
L_08A03A5C:;
    ST8(s0+49, v0);
    a0 = s0 + 0;
    ST8(s0+48, 0);
    { rv_t r_ = func_08A059DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03A6C;
L_08A03A6C:;
    a0 = s0 + 80;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03A74;
L_08A03A74:;
    goto L_08A03A78;
L_08A03A78:;
    sp = sp + 16;
    return;
L_08A03A8C:;
    cnd_ = v0 != v1;
    v0 = 1;
    if (cnd_) { goto L_08A03A5C; }
    goto L_08A03A94;
L_08A03A94:;
    goto L_08A03A78;
L_08A03A9C:;
    a1 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_08A03AAC;
L_08A03AAC:;
    v1 = LD32(s0+76);
    goto L_08A03A4C;
L_08A03AB4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03ABC;
L_08A03ABC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03AC4;
L_08A03AC4:;
    v0 = LD_U8(s0+4);
    goto L_08A03A34;
L_08A03ACC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03AD4;
L_08A03AD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03ADC;
L_08A03ADC:;
    v0 = LD_U8(s0+57);
    goto L_08A03A28;
L_08A03AE4:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A03AF4; }
    goto L_08A03AEC;
L_08A03AEC:;
    ST8(a0+8, v0);
    goto L_08A039F4;
L_08A03AF4:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08A03B1C; }
    goto L_08A03AFC;
L_08A03AFC:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08A03B04;
L_08A03B04:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03B0C;
L_08A03B0C:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_08A039F4;
L_08A03B1C:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08A03B04;
L_08A03B2C:;
    { rv_t r_ = func_088BA7D8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03B34;
L_08A03B34:;
    ST32(s0+40, 0);
    goto L_08A0399C;
}

/* 08A03B3C */
rv_t func_08A03B3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A03B3C:;
    sp = sp - 16;
    v0 = D_08B14008 - (16392);
    v0 = v0 + 16392;
    s1 = a0 + 0;
    v1 = v0 + 264;
    a1 = LD32(a0+40);
    a0 = v0 + 376;
    ST32(s1+84, v1);
    ST32(s1+348, a0);
    cnd_ = a1 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08A03C88; }
    goto L_08A03B74;
L_08A03B74:;
    s0 = D_08C2C200 - (-15872);
    s0 = s0 - 15872;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s0 = s0 + 16;
    { u64 r_ = func_08AC3300(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03B8C;
L_08A03B8C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_08ACEC6C(a0, a1, 0, 0, 0);
    goto L_08A03B9C;
L_08A03B9C:;
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    a1 = s1 + 0;
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03BAC;
L_08A03BAC:;
    v1 = LD_U8(s1+56);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A03C70; }
    goto L_08A03BB8;
L_08A03BB8:;
    v0 = LD_U8(s1+57);
    goto L_08A03BBC;
L_08A03BBC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A03C58; }
    goto L_08A03BC4;
L_08A03BC4:;
    v0 = LD_U8(s1+4);
    goto L_08A03BC8;
L_08A03BC8:;
    cnd_ = v0 == 0;
    s0 = s1 + 84;
    if (cnd_) { goto L_08A03BDC; }
    goto L_08A03BD0;
L_08A03BD0:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A03C48; }
    goto L_08A03BDC;
L_08A03BDC:;
    v1 = LD32(s1+76);
    goto L_08A03BE0;
L_08A03BE0:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+80); goto L_08A03C38; }
    goto L_08A03BEC;
L_08A03BEC:;
    v0 = 1;
    goto L_08A03BF0;
L_08A03BF0:;
    ST8(s1+49, v0);
    a0 = s1 + 0;
    ST8(s1+48, 0);
    { rv_t r_ = func_08A059DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03C00;
L_08A03C00:;
    a0 = s1 + 80;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03C08;
L_08A03C08:;
    a1 = D_08B14198 - (16792);
    goto L_08A03C0C;
L_08A03C0C:;
    a1 = a1 + 16792;
    a0 = s0 + 0;
    a1 = a1 + 12;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A03C1C;
L_08A03C1C:;
    a0 = s1 + 348;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03C24;
L_08A03C24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A03C38:;
    cnd_ = v0 != v1;
    v0 = 1;
    if (cnd_) { goto L_08A03BF0; }
    goto L_08A03C40;
L_08A03C40:;
    a1 = D_08B14198 - (16792);
    goto L_08A03C0C;
L_08A03C48:;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_08A03C50;
L_08A03C50:;
    v1 = LD32(s1+76);
    goto L_08A03BE0;
L_08A03C58:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03C60;
L_08A03C60:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03C68;
L_08A03C68:;
    v0 = LD_U8(s1+4);
    goto L_08A03BC8;
L_08A03C70:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03C78;
L_08A03C78:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03C80;
L_08A03C80:;
    v0 = LD_U8(s1+57);
    goto L_08A03BBC;
L_08A03C88:;
    a0 = a1 + 0;
    { rv_t r_ = func_088BA7D8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03C90;
L_08A03C90:;
    ST32(s1+40, 0);
    goto L_08A03B74;
}

/* 08A03C98 */
rv_t func_08A03C98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A03C98:;
    sp = sp - 16;
    v0 = D_08B14008 - (16392);
    v0 = v0 + 16392;
    s1 = a0 + 0;
    v1 = v0 + 264;
    a1 = LD32(a0+40);
    a0 = v0 + 376;
    ST32(s1+84, v1);
    ST32(s1+348, a0);
    cnd_ = a1 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08A03DEC; }
    goto L_08A03CD0;
L_08A03CD0:;
    s0 = D_08C2C200 - (-15872);
    s0 = s0 - 15872;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s0 = s0 + 16;
    { u64 r_ = func_08AC3300(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03CE8;
L_08A03CE8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_08ACEC6C(a0, a1, 0, 0, 0);
    goto L_08A03CF8;
L_08A03CF8:;
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    a1 = s1 + 0;
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03D08;
L_08A03D08:;
    v1 = LD_U8(s1+56);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A03DD4; }
    goto L_08A03D14;
L_08A03D14:;
    v0 = LD_U8(s1+57);
    goto L_08A03D18;
L_08A03D18:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A03DBC; }
    goto L_08A03D20;
L_08A03D20:;
    v0 = LD_U8(s1+4);
    goto L_08A03D24;
L_08A03D24:;
    cnd_ = v0 == 0;
    s0 = s1 + 84;
    if (cnd_) { goto L_08A03D38; }
    goto L_08A03D2C;
L_08A03D2C:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A03DAC; }
    goto L_08A03D38;
L_08A03D38:;
    v1 = LD32(s1+76);
    goto L_08A03D3C;
L_08A03D3C:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+80); goto L_08A03D9C; }
    goto L_08A03D48;
L_08A03D48:;
    v0 = 1;
    goto L_08A03D4C;
L_08A03D4C:;
    ST8(s1+49, v0);
    a0 = s1 + 0;
    ST8(s1+48, 0);
    { rv_t r_ = func_08A059DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03D5C;
L_08A03D5C:;
    a0 = s1 + 80;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03D64;
L_08A03D64:;
    a1 = D_08B14198 - (16792);
    goto L_08A03D68;
L_08A03D68:;
    a1 = a1 + 16792;
    a1 = a1 + 12;
    a0 = s0 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A03D78;
L_08A03D78:;
    a0 = s1 + 348;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03D80;
L_08A03D80:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03D88;
L_08A03D88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A03D9C:;
    cnd_ = v0 != v1;
    v0 = 1;
    if (cnd_) { goto L_08A03D4C; }
    goto L_08A03DA4;
L_08A03DA4:;
    a1 = D_08B14198 - (16792);
    goto L_08A03D68;
L_08A03DAC:;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_08A03DB4;
L_08A03DB4:;
    v1 = LD32(s1+76);
    goto L_08A03D3C;
L_08A03DBC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03DC4;
L_08A03DC4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03DCC;
L_08A03DCC:;
    v0 = LD_U8(s1+4);
    goto L_08A03D24;
L_08A03DD4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03DDC;
L_08A03DDC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A03DE4;
L_08A03DE4:;
    v0 = LD_U8(s1+57);
    goto L_08A03D18;
L_08A03DEC:;
    a0 = a1 + 0;
    { rv_t r_ = func_088BA7D8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03DF4;
L_08A03DF4:;
    ST32(s1+40, 0);
    goto L_08A03CD0;
}

/* 08A03DFC */
rv_t func_08A03DFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A03DFC:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A03E24; }
    goto L_08A03E18;
L_08A03E18:;
    v0 = LD_U8(a0+68);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A03E38; }
    goto L_08A03E24;
L_08A03E24:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03E34;
L_08A03E34:;
    v0 = LD32(s0);
    goto L_08A03E38;
L_08A03E38:;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03E44;
L_08A03E44:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+132);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03E58;
L_08A03E58:;
    v1 = LD32(s0);
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03E68;
L_08A03E68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A03E78 */
rv_t func_08A03E78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A03E78:;
    sp = sp - 32;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A03F18; }
    goto L_08A03E98;
L_08A03E98:;
    v0 = LD_U8(s0+4);
    goto L_08A03E9C;
L_08A03E9C:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A03EB4; }
    goto L_08A03EA8;
L_08A03EA8:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A03EC8; }
    goto L_08A03EB4;
L_08A03EB4:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03EC4;
L_08A03EC4:;
    v1 = LD32(s0);
    goto L_08A03EC8;
L_08A03EC8:;
    f0 = BITSF(LD32(s0+16));
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = v0 + 88;
    f20 = BITSF(LD32(v0+108));
    f0 = f20 * f0;
    ST32(v0+108, FBITS(f0));
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E3DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03EF4;
L_08A03EF4:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    ST32(v0+196, FBITS(f20));
    goto L_08A03F08;
L_08A03F08:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A03F18:;
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03F28;
L_08A03F28:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A03F08; }
    goto L_08A03F30;
L_08A03F30:;
    v0 = LD_U8(s0+4);
    goto L_08A03E9C;
}

/* 08A03F38 */
rv_t func_08A03F38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A03F38:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 60;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03F58;
L_08A03F58:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A03FA4; }
    goto L_08A03F60;
L_08A03F60:;
    v1 = LD_U16(s1+16);
    v0 = 90;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 91;
    if (cnd_) { goto L_08A0402C; }
    goto L_08A03F70;
L_08A03F70:;
    cnd_ = v0 == 0;
    v0 = 0xffff0000u;
    if (cnd_) { goto L_08A03FF8; }
    goto L_08A03F78;
L_08A03F78:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A03FE0; }
    goto L_08A03F84;
L_08A03F84:;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(s1+8)); goto L_08A03FBC; }
    goto L_08A03F8C;
L_08A03F8C:;
    v0 = LD32(s0);
    goto L_08A03F90;
L_08A03F90:;
    a1 = s1 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885DA3C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03FA0;
L_08A03FA0:;
    v1 = v0 + 0;
    goto L_08A03FA4;
L_08A03FA4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A03FBC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    ST32(s0+8, FBITS(f0));
    a1 = 0 + 0;
    goto L_08A03FCC;
L_08A03FCC:;
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A03FD8;
L_08A03FD8:;
    v1 = 1;
    goto L_08A03FA4;
L_08A03FE0:;
    f0 = BITSF(LD32(s1+8));
    goto L_08A03FE4;
L_08A03FE4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+8, FBITS(f0));
    goto L_08A03FCC;
L_08A03FF8:;
    v0 = v0 | 0x7faf;
    v0 = v1 + v0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A03F90; }
    goto L_08A0400C;
L_08A0400C:;
    v0 = LD_U8(s0+57);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A03FA4; }
    goto L_08A04018;
L_08A04018:;
    v0 = LD_U8(s0+56);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A03FA4; }
    goto L_08A04024;
L_08A04024:;
    f0 = BITSF(LD32(s1+8));
    goto L_08A03FE4;
L_08A0402C:;
    a0 = LD32(s1+24);
    cnd_ = a0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A03FD8; }
    goto L_08A04038;
L_08A04038:;
    f12 = BITSF(LD32(s1+8));
    a2 = 1;
    { rv_t r_ = func_08A083F4(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04044;
L_08A04044:;
    v1 = 1;
    goto L_08A03FA4;
}

/* 08A0404C */
rv_t func_08A0404C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_08A0404C:;
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A04064; }
    goto L_08A04060;
L_08A04060:;
    v0 = 0 + 0;
    goto L_08A04064;
L_08A04064:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0406C */
rv_t func_08A0406C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0406C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0);
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    if (cnd_) { a1 = 0 + 0; goto L_08A041F4; }
    goto L_08A0409C;
L_08A0409C:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_08A041F4; }
    goto L_08A040A8;
L_08A040A8:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_08A041F4; }
    goto L_08A040B4;
L_08A040B4:;
    v0 = LD32(a0-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { a1 = 0 + 0; goto L_08A041F4; }
    goto L_08A040D4;
L_08A040D4:;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A04220; }
    goto L_08A040E4;
L_08A040E4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A04134; }
    goto L_08A04108;
L_08A04108:;
    a0 = LD32(a2);
    goto L_08A0410C;
L_08A0410C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A04228; }
    goto L_08A04124;
L_08A04124:;
    a2 = LD32(a2+4);
    goto L_08A04128;
L_08A04128:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A0410C; }
    goto L_08A04130;
L_08A04130:;
    s2 = 0 + 0;
    goto L_08A04134;
L_08A04134:;
    cnd_ = s2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A041F4; }
    goto L_08A0413C;
L_08A0413C:;
    v1 = LD32(s2);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0414C;
L_08A0414C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04160;
L_08A04160:;
    cnd_ = s0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A041F4; }
    goto L_08A04168;
L_08A04168:;
    v1 = LD32(s1);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04178;
L_08A04178:;
    v1 = 4;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A041F4; }
    goto L_08A04184;
L_08A04184:;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v0 = 0x8005;
    v1 = s1 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    a0 = 0x8004;
    if (cnd_) { goto L_08A041F0; }
    goto L_08A041A0;
L_08A041A0:;
    cnd_ = v1 == a0;
    a1 = 0x801e;
    if (cnd_) { goto L_08A041F0; }
    goto L_08A041A8;
L_08A041A8:;
    cnd_ = v1 == a1;
    a2 = 0x8014;
    if (cnd_) { goto L_08A041F0; }
    goto L_08A041B0;
L_08A041B0:;
    cnd_ = v1 == a2;
    a3 = 0x801d;
    if (cnd_) { goto L_08A041F0; }
    goto L_08A041B8;
L_08A041B8:;
    cnd_ = v1 == a3;
    if (cnd_) { a1 = 1; goto L_08A041F4; }
    goto L_08A041C0;
L_08A041C0:;
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v0 = LD_U16(v0+8);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD_U8(s1+57); goto L_08A04210; }
    goto L_08A041D8;
L_08A041D8:;
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD_U8(s1+57); goto L_08A04210; }
    goto L_08A041E0;
L_08A041E0:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD_U8(s1+57); goto L_08A04210; }
    goto L_08A041E8;
L_08A041E8:;
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD_U8(s1+57); goto L_08A04210; }
    goto L_08A041F0;
L_08A041F0:;
    a1 = 1;
    goto L_08A041F4;
L_08A041F4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A04210:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A041F4; }
    goto L_08A04218;
L_08A04218:;
    a1 = 1;
    goto L_08A041F4;
L_08A04220:;
    a1 = 0 + 0;
    goto L_08A041F4;
L_08A04228:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A04124; }
    goto L_08A04234;
L_08A04234:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A04128; }
    goto L_08A04240;
L_08A04240:;
    goto L_08A04134;
}

/* 08A04248 */
rv_t func_08A04248(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A04248:;
    sp = sp - 32;
    a2 = a0 + 0;
    a0 = LD32(a0+40);
    cnd_ = a0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A0428C; }
    goto L_08A04260;
L_08A04260:;
    v1 = LD32(a0);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a2); goto L_08A04290; }
    goto L_08A04270;
L_08A04270:;
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04278;
L_08A04278:;
    a3 = v0 + 0;
    goto L_08A0427C;
L_08A0427C:;
    v0 = a3 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0428C:;
    v0 = LD32(a2);
    goto L_08A04290;
L_08A04290:;
    a1 = sp + 0;
    v1 = LD32(v0-12);
    v1 = a2 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0427C; }
    goto L_08A042A8;
L_08A042A8:;
    v0 = D_08AEF65C - (-2468);
    f12 = BITSF(LD32(v0-2468));
    ST32(sp, 0);
    func_08809E70(a0, a1, f12);
    goto L_08A042B8;
L_08A042B8:;
    v0 = D_08AEF660 - (-2464);
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(v0-2464));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08A042D8; }
    goto L_08A042D4;
L_08A042D4:;
    v1 = 0 + 0;
    goto L_08A042D8;
L_08A042D8:;
    a3 = v1 + 0;
    goto L_08A0427C;
}

/* 08A042E0 */
rv_t func_08A042E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A042E0:;
    sp = sp - 32;
    v1 = 0 + 0;
    s2 = a1 & 0xff;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A04318; }
    goto L_08A04310;
L_08A04310:;
    v0 = LD_U8(a0+68);
    v1 = 0 < v0;
    goto L_08A04318;
L_08A04318:;
    cnd_ = s2 == v1;
    a1 = s2 ^ 0x1;
    if (cnd_) { goto L_08A04370; }
    goto L_08A04320;
L_08A04320:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08876270(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04330;
L_08A04330:;
    cnd_ = s2 == 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08A04448; }
    goto L_08A04338;
L_08A04338:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04344;
L_08A04344:;
    v0 = LD_U8(s1+6);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A043C8; }
    goto L_08A04350;
L_08A04350:;
    a0 = LD32(s1+40);
    goto L_08A04354;
L_08A04354:;
    cnd_ = a0 == 0;
    if (cnd_) { ST8(s1+4, s2); goto L_08A04374; }
    goto L_08A0435C;
L_08A0435C:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A043A4; }
    goto L_08A04364;
L_08A04364:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A04394; }
    goto L_08A04370;
L_08A04370:;
    ST8(s1+4, s2);
    goto L_08A04374;
L_08A04374:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A04394:;
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0439C;
L_08A0439C:;
    ST8(s1+5, 0);
    goto L_08A04370;
L_08A043A4:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A043AC;
L_08A043AC:;
    v0 = v0 ^ 0x1;
    ST8(s1+5, v0);
    a1 = 1;
    a0 = LD32(s1+40);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A043C0;
L_08A043C0:;
    ST8(s1+4, s2);
    goto L_08A04374;
L_08A043C8:;
    s4 = D_08C2C21C - (-15844);
    s3 = s4 - 15844;
    v0 = LD32(v1-16);
    a0 = s3 + 0;
    a2 = 1;
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A043E8;
L_08A043E8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+40); goto L_08A04354; }
    goto L_08A043F0;
L_08A043F0:;
    a1 = LD32(s1);
    ST8(s1+6, 0);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = LD32(s3+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04418;
L_08A04418:;
    a0 = LD32(s4-15844);
    s0 = s0 << 2;
    v1 = LD32(s3+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s3+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_08A04350;
L_08A04448:;
    a1 = 1;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_08A04458;
L_08A04458:;
    a0 = LD32(s1);
    v0 = D_08C2C21C - (-15844);
    s0 = v0 - 15844;
    v1 = LD32(a0-16);
    a2 = 1;
    a0 = s0 + 0;
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0447C;
L_08A0447C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A04494; }
    goto L_08A04484;
L_08A04484:;
    ST8(s1+6, v0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04494;
L_08A04494:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    ST32(s1+12, FBITS(f0));
    goto L_08A04350;
}

/* 08A044A4 */
rv_t func_08A044A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A044A4:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    s2 = a2 & 0xff;
    v0 = LD_U8(a0+56);
    cnd_ = v0 == a1;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A04514; }
    goto L_08A044D4;
L_08A044D4:;
    cnd_ = a1 == 0;
    ST8(a0+56, a1);
    if (cnd_) { goto L_08A04670; }
    goto L_08A044DC;
L_08A044DC:;
    s4 = D_08C2C21C - (-15844);
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A044E4;
L_08A044E4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A044EC;
L_08A044EC:;
    v1 = LD32(s1);
    s3 = s4 - 15844;
    v0 = LD32(v1-16);
    a0 = s3 + 0;
    a2 = 1;
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0450C;
L_08A0450C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A04620; }
    goto L_08A04514;
L_08A04514:;
    v0 = LD_U8(s1+57);
    goto L_08A04518;
L_08A04518:;
    cnd_ = v0 == s2;
    if (cnd_) { goto L_08A04568; }
    goto L_08A04520;
L_08A04520:;
    cnd_ = s2 == 0;
    ST8(s1+57, s2);
    if (cnd_) { goto L_08A045D4; }
    goto L_08A04528;
L_08A04528:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04530;
L_08A04530:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04538;
L_08A04538:;
    v1 = LD32(s1);
    s3 = D_08C2C21C - (-15844);
    s2 = s3 - 15844;
    v0 = LD32(v1-16);
    a0 = s2 + 0;
    a2 = 1;
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0455C;
L_08A0455C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A04584; }
    goto L_08A04564;
L_08A04564:;
    goto L_08A04568;
L_08A04568:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A04584:;
    v1 = LD32(s2+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A045A4;
L_08A045A4:;
    a0 = LD32(s3-15844);
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
    goto L_08A04564;
L_08A045D4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A045DC;
L_08A045DC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A045E4;
L_08A045E4:;
    a0 = LD32(s1);
    v0 = D_08C2C21C - (-15844);
    s0 = v0 - 15844;
    v1 = LD32(a0-16);
    a2 = 1;
    a0 = s0 + 0;
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04608;
L_08A04608:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A04564; }
    goto L_08A04610;
L_08A04610:;
    a1 = s1 + 0;
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04618;
L_08A04618:;
    goto L_08A04568;
L_08A04620:;
    v1 = LD32(s3+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04640;
L_08A04640:;
    a0 = LD32(s4-15844);
    s0 = s0 << 2;
    v1 = LD32(s3+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s3+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_08A04514;
L_08A04670:;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04678;
L_08A04678:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04680;
L_08A04680:;
    a0 = LD32(s1);
    v0 = D_08C2C21C - (-15844);
    s0 = v0 - 15844;
    v1 = LD32(a0-16);
    a2 = 1;
    a0 = s0 + 0;
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A046A4;
L_08A046A4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A04514; }
    goto L_08A046AC;
L_08A046AC:;
    a1 = s1 + 0;
    { u64 r_ = func_08AC3300(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A046B4;
L_08A046B4:;
    v0 = LD_U8(s1+57);
    goto L_08A04518;
}

/* 08A046BC */
rv_t func_08A046BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A046BC:;
    sp = sp - 16;
    v0 = LD32(a0+40);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0472C; }
    goto L_08A046D4;
L_08A046D4:;
    a0 = v0 + 0;
    v0 = LD32(v0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08A04730; }
    goto L_08A046E4;
L_08A046E4:;
    { rv_t r_ = func_088BA5D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A046EC;
L_08A046EC:;
    a1 = LD32(s0);
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+256);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A0474C; }
    goto L_08A04704;
L_08A04704:;
    v0 = D_08B2BB9C - (-17508);
    goto L_08A04708;
L_08A04708:;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A04730; }
    goto L_08A04714;
L_08A04714:;
    a2 = LD32(s0+40);
    v0 = 3;
    a1 = 1;
    v1 = LD32(a2);
    cnd_ = v1 == v0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08A0473C; }
    goto L_08A0472C;
L_08A0472C:;
    goto L_08A04730;
L_08A04730:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0473C:;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04744;
L_08A04744:;
    goto L_08A04730;
L_08A0474C:;
    v0 = LD32(a1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04758;
L_08A04758:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A04704; }
    goto L_08A04760;
L_08A04760:;
    a0 = LD32(s0+40);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04768;
L_08A04768:;
    v0 = D_08B2BB9C - (-17508);
    goto L_08A04708;
}

/* 08A04770 */
rv_t func_08A04770(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A04770:;
    sp = sp - 32;
    s2 = D_08B2BB9C - (-17508);
    s1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0479C;
L_08A0479C:;
    a1 = v0 + 0;
    v0 = LD32(s2-17508);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+40); goto L_08A047B8; }
    goto L_08A047AC;
L_08A047AC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A048AC; }
    goto L_08A047B4;
L_08A047B4:;
    a0 = LD32(s0+40);
    goto L_08A047B8;
L_08A047B8:;
    cnd_ = a0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A047D0; }
    goto L_08A047C0;
L_08A047C0:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A049AC; }
    goto L_08A047D0;
L_08A047D0:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A0498C; }
    goto L_08A047D8;
L_08A047D8:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A04978; }
    goto L_08A047E8;
L_08A047E8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A048AC; }
    goto L_08A047F0;
L_08A047F0:;
    v0 = LD32(s2-17508);
    cnd_ = v0 == 0;
    a2 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_08A048F0; }
    goto L_08A047FC;
L_08A047FC:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    cnd_ = a3 == v0;
    a1 = a2 - 15588;
    if (cnd_) { goto L_08A04898; }
    goto L_08A04818;
L_08A04818:;
    v0 = LD32(a1+4);
    v1 = LD32(a2-15588);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A04868; }
    goto L_08A0483C;
L_08A0483C:;
    a1 = LD32(a2);
    goto L_08A04840;
L_08A04840:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A048D0; }
    goto L_08A04858;
L_08A04858:;
    a2 = LD32(a2+4);
    goto L_08A0485C;
L_08A0485C:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08A04840; }
    goto L_08A04864;
L_08A04864:;
    t0 = 0 + 0;
    goto L_08A04868;
L_08A04868:;
    cnd_ = t0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A0489C; }
    goto L_08A04870;
L_08A04870:;
    v1 = LD32(t0);
    v0 = LD32(v1-12);
    v0 = t0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A0488C; }
    goto L_08A04888;
L_08A04888:;
    a1 = LD32(v0+8);
    goto L_08A0488C;
L_08A0488C:;
    a0 = LD32(s0+40);
    func_088BAEAC(a0, a1);
    goto L_08A04894;
L_08A04894:;
    a0 = LD32(s0+40);
    goto L_08A04898;
L_08A04898:;
    v1 = LD32(a0);
    goto L_08A0489C;
L_08A0489C:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A048C0; }
    goto L_08A048A8;
L_08A048A8:;
    goto L_08A048AC;
L_08A048AC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A048C0:;
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A048C8;
L_08A048C8:;
    goto L_08A048AC;
L_08A048D0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    t0 = a1 + 0;
    if (cnd_) { goto L_08A04858; }
    goto L_08A048DC;
L_08A048DC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A0485C; }
    goto L_08A048E8;
L_08A048E8:;
    goto L_08A04868;
L_08A048F0:;
    cnd_ = s1 == 0;
    if (cnd_) {  goto L_08A048AC; }
    goto L_08A048F8;
L_08A048F8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04914;
L_08A04914:;
    a0 = LD32(s0+40);
    a1 = sp + 0;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04920;
L_08A04920:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0493C;
L_08A0493C:;
    a0 = LD32(s0+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04948;
L_08A04948:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04964;
L_08A04964:;
    a0 = LD32(s0+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04970;
L_08A04970:;
    goto L_08A048AC;
L_08A04978:;
    v0 = LD32(v1+136);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04984;
L_08A04984:;
    a0 = LD32(s0+40);
    goto L_08A047E8;
L_08A0498C:;
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08A047E8; }
    goto L_08A04994;
L_08A04994:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A049A4;
L_08A049A4:;
    a0 = LD32(s0+40);
    goto L_08A047E8;
L_08A049AC:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A049B4;
L_08A049B4:;
    a0 = 0 + 0;
    ST32(s0+40, 0);
    goto L_08A047E8;
}

/* 08A049C0 */
rv_t func_08A049C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A049C0:;
    sp = sp - 80;
    s0 = a0 + 0;
    a0 = LD32(a0+40);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A04B84; }
    goto L_08A049DC;
L_08A049DC:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A049FC; }
    goto L_08A049EC;
L_08A049EC:;
    goto L_08A049F0;
L_08A049F0:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A049FC:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04A14;
L_08A04A14:;
    a0 = LD32(s0);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(a0-12);
    ST32(sp, FBITS(f0));
    v1 = s0 + v1;
    a1 = LD32(v1);
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    a0 = v1 + 0;
    v0 = LD32(a1+16);
    t_ = v0;
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04A48;
L_08A04A48:;
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
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    v1 = LD32(s0);
    v0 = LD32(v1+128);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04AA0;
L_08A04AA0:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BA110(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04AA8;
L_08A04AA8:;
    cnd_ = v0 == 0;
    ST32(s0+40, v0);
    if (cnd_) { goto L_08A049EC; }
    goto L_08A04AB0;
L_08A04AB0:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04ABC;
L_08A04ABC:;
    a0 = LD32(s0+40);
    a1 = 0 + 0;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04AC8;
L_08A04AC8:;
    a0 = LD32(s0+40);
    a1 = sp + 0;
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04AD4;
L_08A04AD4:;
    a0 = LD32(s0+40);
    a1 = sp + 16;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04AE0;
L_08A04AE0:;
    v1 = LD32(s0);
    a0 = LD32(s0+40);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    func_088BB2C4(a0, a1);
    goto L_08A04AF8;
L_08A04AF8:;
    a0 = LD32(s0+40);
    a1 = 1;
    v0 = func_088BB56C(a0, a1);
    goto L_08A04B04;
L_08A04B04:;
    a0 = LD32(s0+40);
    a1 = (u32)-3;
    v0 = func_088BB578(a0, a1);
    goto L_08A04B10;
L_08A04B10:;
    v1 = LD32(s0);
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04B20;
L_08A04B20:;
    v1 = D_08B2BB9C - (-17508);
    v0 = LD32(v1-17508);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A04B48; }
    goto L_08A04B30;
L_08A04B30:;
    a0 = LD32(s0+40);
    v0 = 3;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A04B74; }
    goto L_08A04B44;
L_08A04B44:;
    v1 = LD32(s0);
    goto L_08A04B48;
L_08A04B48:;
    v0 = LD32(v1-12);
    v1 = 999;
    v0 = s0 + v0;
    a0 = LD32(v0+252);
    cnd_ = a0 == v1;
    if (cnd_) {  goto L_08A049F0; }
    goto L_08A04B60;
L_08A04B60:;
    a0 = LD32(s0+40);
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04B6C;
L_08A04B6C:;
    goto L_08A049F0;
L_08A04B74:;
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04B7C;
L_08A04B7C:;
    v1 = LD32(s0);
    goto L_08A04B48;
L_08A04B84:;
    { rv_t r_ = func_088BA7D8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04B8C;
L_08A04B8C:;
    ST32(s0+40, 0);
    goto L_08A049DC;
}

/* 08A04B94 */
rv_t func_08A04B94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A04B94:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A04BF0; }
    goto L_08A04BC0;
L_08A04BC0:;
    v0 = LD32(s0);
    goto L_08A04BC4;
L_08A04BC4:;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08875EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04BD8;
L_08A04BD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A04BF0:;
    { rv_t r_ = func_088BAB18(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04BF8;
L_08A04BF8:;
    a0 = LD32(s0+40);
    a1 = s2 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04C04;
L_08A04C04:;
    v0 = LD32(s0);
    goto L_08A04BC4;
}

/* 08A04C0C */
rv_t func_08A04C0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A04C0C:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a2 + 0;
    a2 = 1;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v0 = a0 + v1;
    f0 = BITSF(LD32(v0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f20 = f12;
    if (cnd_) { goto L_08A04C98; }
    goto L_08A04C54;
L_08A04C54:;
    a0 = LD32(a0+40);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A04C98; }
    goto L_08A04C60;
L_08A04C60:;
    v0 = LD32(v0+100);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A04C98; }
    goto L_08A04C6C;
L_08A04C6C:;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04C74;
L_08A04C74:;
    v0 = LD32(s0);
    a2 = s1 + 0;
    a3 = 0 + 0;
    a0 = LD32(v0-12);
    f12 = f20;
    a1 = s2 + 0;
    a0 = s0 + a0;
    { rv_t r_ = func_0885E844(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04C94;
L_08A04C94:;
    a2 = v0 + 0;
    goto L_08A04C98;
L_08A04C98:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A04CB8 */
rv_t func_08A04CB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A04CB8:;
    sp = sp - 48;
    s4 = a3 + 0;
    s3 = a1 + 0;
    s2 = t0 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f0 = BITSF(LD32(v0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A04D40; }
    goto L_08A04D10;
L_08A04D10:;
    v0 = LD32(a0+40);
    a1 = 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A04D64; }
    goto L_08A04D20;
L_08A04D20:;
    a0 = LD32(v1-12);
    a1 = s3 + 0;
    a2 = s1 + 0;
    a0 = s0 + a0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    f12 = f20;
    { rv_t r_ = func_0885E970(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04D40;
L_08A04D40:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A04D64:;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04D6C;
L_08A04D6C:;
    v1 = LD32(s0);
    goto L_08A04D20;
}

/* 08A04D74 */
rv_t func_08A04D74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A04D74:;
    sp = sp - 48;
    s4 = a3 + 0;
    s3 = a1 + 0;
    s2 = t0 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f0 = BITSF(LD32(v0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A04DFC; }
    goto L_08A04DCC;
L_08A04DCC:;
    v0 = LD32(a0+40);
    a1 = 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A04E20; }
    goto L_08A04DDC;
L_08A04DDC:;
    a0 = LD32(v1-12);
    a1 = s3 + 0;
    a2 = s1 + 0;
    a0 = s0 + a0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    f12 = f20;
    { rv_t r_ = func_0885EA58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04DFC;
L_08A04DFC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A04E20:;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04E28;
L_08A04E28:;
    v1 = LD32(s0);
    goto L_08A04DDC;
}

/* 08A04E30 */
rv_t func_08A04E30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A04E30:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_08A04E8C; }
    goto L_08A04E68;
L_08A04E68:;
    v0 = LD32(s0+40);
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A04EA4; }
    goto L_08A04E78;
L_08A04E78:;
    a0 = LD32(v1-12);
    f12 = f20;
    a0 = s0 + a0;
    { rv_t r_ = func_0885EB94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04E88;
L_08A04E88:;
    a0 = v0 + 0;
    goto L_08A04E8C;
L_08A04E8C:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A04EA4:;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A04EAC;
L_08A04EAC:;
    v1 = LD32(s0);
    goto L_08A04E78;
}

/* 08A04EB4 */
rv_t func_08A04EB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A04EB4:;
    sp = sp - 16;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A04EDC; }
    goto L_08A04ECC;
L_08A04ECC:;
    goto L_08A04ED0;
L_08A04ED0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A04EDC:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08A04EF0;
L_08A04EF0:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = LD32(s0+20);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    v0 = func_0885EF6C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A04F0C;
L_08A04F0C:;
    a0 = LD32(s0+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAEB8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04F18;
L_08A04F18:;
    goto L_08A04ED0;
}

/* 08A04F20 */
rv_t func_08A04F20(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A04F20:;
    sp = sp - 32;
    v0 = 999;
    a2 = LD32(a0+44);
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD_U8(a0+48); goto L_08A05008; }
    goto L_08A04F40;
L_08A04F40:;
    a0 = D_08C2B968 - (-18072);
    v1 = a0 - 18072;
    v0 = LD32(v1+4);
    a1 = LD32(a0-18072);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A04F98; }
    goto L_08A04F6C;
L_08A04F6C:;
    a0 = LD32(a1);
    goto L_08A04F70;
L_08A04F70:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A05018; }
    goto L_08A04F88;
L_08A04F88:;
    a1 = LD32(a1+4);
    goto L_08A04F8C;
L_08A04F8C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A04F70; }
    goto L_08A04F94;
L_08A04F94:;
    s0 = 0 + 0;
    goto L_08A04F98;
L_08A04F98:;
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A04FC8; }
    goto L_08A04FA0;
L_08A04FA0:;
    v1 = LD32(s0);
    f20 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A04FE0; }
    goto L_08A04FC4;
L_08A04FC4:;
    v1 = 0 + 0;
    goto L_08A04FC8;
L_08A04FC8:;
    goto L_08A04FCC;
L_08A04FCC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A04FE0:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A04FE8;
L_08A04FE8:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A04FC8; }
    goto L_08A04FF8;
L_08A04FF8:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A04FCC; }
    goto L_08A05004;
L_08A05004:;
    v0 = LD_U8(s0+68);
    goto L_08A05008;
L_08A05008:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A04FC8; }
    goto L_08A05010;
L_08A05010:;
    v1 = 0 + 0;
    goto L_08A04FC8;
L_08A05018:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A04F88; }
    goto L_08A05024;
L_08A05024:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A04F8C; }
    goto L_08A05030;
L_08A05030:;
    goto L_08A04F98;
}

/* 08A05038 */
rv_t func_08A05038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05038:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+44);
    a0 = D_08C2B968 - (-18072);
    a0 = a0 - 18072;
    { u64 r_ = func_08ACEEC0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05054;
L_08A05054:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A05070; }
    goto L_08A05060;
L_08A05060:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05070;
L_08A05070:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0507C */
rv_t func_08A0507C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0507C:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+44);
    a0 = D_08C2B968 - (-18072);
    a0 = a0 - 18072;
    { u64 r_ = func_08ACEEC0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05098;
L_08A05098:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A050B4; }
    goto L_08A050A4;
L_08A050A4:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A050B4;
L_08A050B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A050C0 */
rv_t func_08A050C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A050C0:;
    sp = sp - 16;
    v1 = D_08ADEB40 - (-5312);
    v0 = (u32)-1;
    a1 = LD32(a0+32);
    a2 = a0 + 0;
    v1 = v1 - 5312;
    cnd_ = a1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A050F0; }
    goto L_08A050E4;
L_08A050E4:;
    a1 = LD32(a2+36);
    v0 = func_0897A064(a0, a1);
    goto L_08A050EC;
L_08A050EC:;
    v1 = v0 + 0;
    goto L_08A050F0;
L_08A050F0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A05100 */
rv_t func_08A05100(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A05100:;
    sp = sp - 64;
    s1 = a1 + 0;
    a1 = 0xcb7e0000u;
    s0 = a0 + 0;
    a1 = a1 | 0x7191;
    a2 = s1 + 0;
    a3 = 0 + 0;
    v0 = LD32(a0);
    t0 = 1;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05148;
L_08A05148:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A05164; }
    goto L_08A05150;
L_08A05150:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A05164:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0517C;
L_08A0517C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    a0 = s0 + 0;
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    { rv_t r_ = func_08A05610(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0519C;
L_08A0519C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A05150; }
    goto L_08A051A4;
L_08A051A4:;
    { rv_t r_ = func_08A05610(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A051AC;
L_08A051AC:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A05150; }
    goto L_08A051B8;
L_08A051B8:;
    { rv_t r_ = func_08A05610(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A051C0;
L_08A051C0:;
    v1 = LD32(v0+16);
    f5 = BITSF(LD32(s1));
    v0 = D_08AEF664 - (-2460);
    a0 = LD32(v1+4);
    v1 = v1 + 4;
    f7 = BITSF(LD32(v0-2460));
    ST32(sp, a0);
    v0 = LD32(v1+4);
    f4 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(sp));
    ST32(sp+4, v0);
    a0 = LD32(v1+8);
    f6 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(sp+4));
    ST32(sp+8, a0);
    f3 = f3 + f0;
    v0 = LD32(v1+12);
    f1 = BITSF(LD32(sp+8));
    ST32(sp+12, v0);
    f3 = f3 * f7;
    a0 = LD32(v1+16);
    f0 = BITSF(LD32(sp+12));
    f5 = f5 + f3;
    ST32(sp+16, a0);
    f1 = f1 + f0;
    v0 = LD32(v1+20);
    f0 = BITSF(LD32(sp+16));
    f1 = f1 * f7;
    ST32(sp+20, v0);
    f2 = BITSF(LD32(sp+20));
    f4 = f4 + f1;
    ST32(s1, FBITS(f5));
    f0 = f0 + f2;
    ST32(s1+4, FBITS(f4));
    f0 = f0 * f7;
    ST32(sp+32, FBITS(f3));
    f6 = f6 + f0;
    ST32(sp+36, FBITS(f1));
    ST32(s1+8, FBITS(f6));
    ST32(sp+40, FBITS(f0));
    goto L_08A05150;
}

/* 08A05264 */
rv_t func_08A05264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05264:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 368;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05280;
L_08A05280:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A037D4(a0);
    goto L_08A0528C;
L_08A0528C:;
    v1 = LD32(s0);
    a2 = LD_U16(s1+18);
    a0 = s0 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    ST16(v0+8, a2);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A052B4;
L_08A052B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A052C8 */
void func_08A052C8(void)
{
    u32 v0 = 0;
L_08A052C8:;
    v0 = D_08C2C22C - (-15828);
    ST32(v0-15828, 0);
    return;
}

/* 08A052D4 */
float func_08A052D4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A052D4:;
    sp = sp - 32;
    s2 = D_08C2C22C - (-15828);
    a0 = LD32(s2-15828);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A05400; }
    goto L_08A052F8;
L_08A052F8:;
    v1 = LD32(a0);
    s1 = D_08B29018 - (-28648);
    s3 = s1 - 28648;
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v1 = 999;
    v0 = v0 + a0;
    s0 = LD32(v0+4);
    cnd_ = s0 == v1;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A053D4; }
    goto L_08A05328;
L_08A05328:;
    a0 = s3 + 0;
    f0 = func_08AAFE90(a0, t1, t2, t3);
    goto L_08A05330;
L_08A05330:;
    a2 = LD32(s1-28648);
    cnd_ = a2 == 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_08A05390; }
    goto L_08A0533C;
L_08A0533C:;
    a1 = LD32(a2+8);
    goto L_08A05340;
L_08A05340:;
    cnd_ = a1 == 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A05384; }
    goto L_08A05348;
L_08A05348:;
    v0 = LD_U8(a1+8);
    goto L_08A0534C;
L_08A0534C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A05378; }
    goto L_08A05354;
L_08A05354:;
    a0 = LD32(a1);
    v1 = LD32(a0);
    a3 = a0 + 0;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A05430; }
    goto L_08A05374;
L_08A05374:;
    a1 = LD32(a1+4);
    goto L_08A05378;
L_08A05378:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A0534C; }
    goto L_08A05380;
L_08A05380:;
    a2 = LD32(a2+4);
    goto L_08A05384;
L_08A05384:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2+8); goto L_08A05340; }
    goto L_08A0538C;
L_08A0538C:;
    a1 = LD32(s3+4);
    goto L_08A05390;
L_08A05390:;
    cnd_ = a1 == 0;
    if (cnd_) { a3 = 0 + 0; goto L_08A053D4; }
    goto L_08A05398;
L_08A05398:;
    v0 = LD_U8(a1+8);
    goto L_08A0539C;
L_08A0539C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A053C8; }
    goto L_08A053A4;
L_08A053A4:;
    a0 = LD32(a1);
    v1 = LD32(a0);
    a3 = a0 + 0;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A0541C; }
    goto L_08A053C4;
L_08A053C4:;
    a1 = LD32(a1+4);
    goto L_08A053C8;
L_08A053C8:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A0539C; }
    goto L_08A053D0;
L_08A053D0:;
    a3 = 0 + 0;
    goto L_08A053D4;
L_08A053D4:;
    cnd_ = a3 != 0;
    if (cnd_) { ST32(s2-15828, 0); goto L_08A05400; }
    goto L_08A053DC;
L_08A053DC:;
    a1 = LD32(s2-15828);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A053F4; }
    goto L_08A053E8;
L_08A053E8:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    a0 = a1 + v1;
    goto L_08A053F4;
L_08A053F4:;
    { rv_t r_ = func_08874C84(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A053FC;
L_08A053FC:;
    ST32(s2-15828, 0);
    goto L_08A05400;
L_08A05400:;
    sp = sp + 32;
    return f0;
L_08A0541C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A053C8; }
    goto L_08A05428;
L_08A05428:;
    goto L_08A053D4;
L_08A05430:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A05378; }
    goto L_08A0543C;
L_08A0543C:;
    goto L_08A053D4;
}

/* 08A05444 */
rv_t func_08A05444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A05444:;
    sp = sp - 32;
    s1 = a2 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+104);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0546C;
L_08A0546C:;
    s2 = v0 + 0;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = sp + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0548C;
L_08A0548C:;
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

/* 08A054D8 */
rv_t func_08A054D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A054D8:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a3 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+164);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05504;
L_08A05504:;
    ST32(s1, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = s2 ^ v1;
    v1 = v1 < 0x1u;
    ST8(s1+4, v1);
    a0 = LD32(s0);
    v0 = LD32(a0-16);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A05560; }
    goto L_08A05540;
L_08A05540:;
    v0 = LD32(a0-12);
    f0 = BITSF(0);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = 1; goto L_08A05560; }
    goto L_08A05560;
L_08A05560:;
    ST8(s1+5, a1);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v0 = 27;
    ST32(s1+8, v0);
    v1 = s2 ^ v1;
    v1 = v1 < 0x1u;
    ST8(s1+6, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A055A0 */
rv_t func_08A055A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A055A0:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A055C4;
L_08A055C4:;
    a1 = 0xff000000u;
    a0 = s1 + 0;
    cnd_ = s0 == v0;
    a1 = a1 | 0xff;
    if (cnd_) { goto L_08A055F8; }
    goto L_08A055D4;
L_08A055D4:;
    v1 = LD32(s1);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A055E4;
L_08A055E4:;
    a1 = 0xff800000u;
    v0 = v0 ^ 0x4;
    a1 = a1 | 0x8080;
    v1 = 0xffff0000u;
    if (v0 != 0) a1 = v1;
    goto L_08A055F8;
L_08A055F8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A05610 */
rv_t func_08A05610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05610:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0562C;
L_08A0562C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_08A05650; }
    goto L_08A05634;
L_08A05634:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    a0 = D_08C2C31C - (-15588);
    a2 = 1;
    cnd_ = v1 != 0;
    a0 = a0 - 15588;
    if (cnd_) { goto L_08A05660; }
    goto L_08A0564C;
L_08A0564C:;
    v0 = LD32(s0+40);
    goto L_08A05650;
L_08A05650:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A05660:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05674;
L_08A05674:;
    a0 = v0 + 0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A05650; }
    goto L_08A05680;
L_08A05680:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    goto L_08A05650;
}

/* 08A05694 */
rv_t func_08A05694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05694:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A056B0;
L_08A056B0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_08A056D4; }
    goto L_08A056B8;
L_08A056B8:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    a0 = D_08C2C31C - (-15588);
    a2 = 1;
    cnd_ = v1 != 0;
    a0 = a0 - 15588;
    if (cnd_) { goto L_08A056E4; }
    goto L_08A056D0;
L_08A056D0:;
    v0 = LD32(s0+40);
    goto L_08A056D4;
L_08A056D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A056E4:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A056F8;
L_08A056F8:;
    a0 = v0 + 0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A056D4; }
    goto L_08A05704;
L_08A05704:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    goto L_08A056D4;
}

/* 08A05718 */
rv_t func_08A05718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_08A05718:;
    sp = sp - 208;
    s1 = a2 + 0;
    s0 = a1 + 0;
    a1 = sp + 0;
    v0 = LD32(a0);
    a3 = LD32(v0-12);
    a0 = a0 + a3;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05754;
L_08A05754:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f11 = BITSF(LD32(sp+8));
    f9 = BITSF(LD32(s0+8));
    f8 = BITSF(LD32(s0));
    f7 = BITSF(LD32(s0+4));
    v0 = D_08AEF668 - (-2456);
    f2 = BITSF(LD32(v0-2456));
    a1 = FBITS(f8);
    a0 = FBITS(f12);
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f13);
    {v[4]=BITSF(a0);}
    v1 = FBITS(f11);
    {v[5]=BITSF(v0);}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(a1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    a1 = FBITS(f7);
    {v[1]=BITSF(a1);}
    a1 = FBITS(f9);
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    fcc = FCMP(f2, f20, 12);
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {a1=FBITS(v[4]);}
    f1 = BITSF(a1);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    f10 = BITSF(a1);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+8, FBITS(f9)); goto L_08A059D0; }
    goto L_08A057DC;
L_08A057DC:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+8, FBITS(f9)); goto L_08A059D0; }
    goto L_08A057EC;
L_08A057EC:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+8, FBITS(f9)); goto L_08A059D0; }
    goto L_08A057FC;
L_08A057FC:;
    f3 = BITSF(FBITS(f8) ^ 0x80000000u);
    f2 = BITSF(FBITS(f9) ^ 0x80000000u);
    f4 = BITSF(FBITS(f7) ^ 0x80000000u);
    f5 = f0 * f1;
    {u32 a_=sp+(96);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {v[5]=BITSF(v0);}
    v0 = D_08AEF66C - (-2452);
    f6 = f1 / f20;
    {v[6]=BITSF(v1);}
    a1 = FBITS(f4);
    f15 = BITSF(LD32(v0-2452));
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(a1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a1=FBITS(v[0]);}
    f1 = BITSF(a1);
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[8]=1.57079632679f;}
    {v[12]=0.63661977236f;}
    ST32(sp+24, FBITS(f2));
    v1 = D_08AEF670 - (-2448);
    f14 = BITSF(LD32(v1-2448));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    f0 = f1 / f5;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(v0);
    a1 = FBITS(f0);
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    f6 = f6 * f0;
    fcc = FCMP(f6, f14, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A058E8; }
    goto L_08A058D4;
L_08A058D4:;
    fcc = FCMP(f15, f6, 12);
    cnd_ = fcc;
    f14 = f15;
    if (cnd_) { goto L_08A058E8; }
    goto L_08A058E4;
L_08A058E4:;
    f14 = f6;
    goto L_08A058E8;
L_08A058E8:;
    a1 = FBITS(f14);
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AEF674 - (-2444);
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f0 + f2;
    f0 = BITSF(LD32(v0-2444));
    f0 = f0 - f1;
    a1 = FBITS(f0);
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEF678 - (-2440);
    f0 = BITSF(LD32(v0-2440));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f3 / f1; goto L_08A05970; }
    goto L_08A05954;
L_08A05954:;
    v0 = D_08AEF67C - (-2436);
    f0 = BITSF(LD32(v0-2436));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+8, FBITS(f9)); goto L_08A059D0; }
    goto L_08A0596C;
L_08A0596C:;
    f0 = f3 / f1;
    goto L_08A05970;
L_08A05970:;
    f1 = f10 / f20;
    f0 = f0 * f1;
    f4 = f11 * f0;
    f1 = f12 * f0;
    f0 = f13 * f0;
    f5 = f9 + f4;
    f2 = f8 + f1;
    f3 = f7 + f0;
    ST32(sp+32, FBITS(f1));
    ST32(s1+8, FBITS(f5));
    ST32(s1+4, FBITS(f3));
    ST32(s1, FBITS(f2));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f4));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    goto L_08A059B4;
L_08A059B4:;
    v0 = 1;
    sp = sp + 208;
    return (rv_t){ v0, v1, f0 };
L_08A059D0:;
    ST32(s1, FBITS(f8));
    ST32(s1+4, FBITS(f7));
    goto L_08A059B4;
}

/* 08A059DC */
rv_t func_08A059DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A059DC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A059E4 */
void func_08A059E4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A059E4:;
    sp = sp - 32;
    a0 = 0xd0cd0000u;
    a1 = 0xae20000u;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x6e48;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05A08;
L_08A05A08:;
    a1 = 0xe8b70000u;
    v0 = LD32(sp);
    a1 = a1 | 0x4401;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A05A38; }
    goto L_08A05A20;
L_08A05A20:;
    v1 = 1;
    v0 = D_08C2C230 - (-15824);
    ST8(v0-15824, v1);
    sp = sp + 32;
    return;
L_08A05A38:;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05A40;
L_08A05A40:;
    a0 = LD32(sp);
    a1 = 0xd38e0000u;
    v1 = D_08C2C234 - (-15820);
    a1 = a1 | 0x50c3;
    a2 = 0 + 0;
    ST32(v1-15820, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05A5C;
L_08A05A5C:;
    a1 = 0x45a60000u;
    a0 = LD32(sp);
    v1 = D_08C2C238 - (-15816);
    a1 = a1 | 0xc0d0;
    a2 = 0 + 0;
    ST32(v1-15816, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05A78;
L_08A05A78:;
    a1 = 0x90150000u;
    a0 = LD32(sp);
    v1 = D_08C2C23C - (-15812);
    a1 = a1 | 0xce1e;
    a2 = 0 + 0;
    ST32(v1-15812, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05A94;
L_08A05A94:;
    v1 = D_08C2C240 - (-15808);
    ST32(v1-15808, v0);
    goto L_08A05A20;
}

/* 08A05AA0 */
u32 func_08A05AA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A05AA0:;
    sp = sp - 48;
    a2 = D_08C2B928 - (-18136);
    v1 = a2 - 18136;
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
    if (cnd_) { goto L_08A05B38; }
    goto L_08A05AEC;
L_08A05AEC:;
    a2 = LD32(a2-18136);
    a3 = a1 + 0;
    goto L_08A05AF4;
L_08A05AF4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A05B28; }
    goto L_08A05B0C;
L_08A05B0C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A05B3C; }
    goto L_08A05B1C;
L_08A05B1C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A05B0C; }
    goto L_08A05B28;
L_08A05B28:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A05AF4; }
    goto L_08A05B38;
L_08A05B38:;
    v0 = LD32(sp+8);
    goto L_08A05B3C;
L_08A05B3C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_08A05C08; }
    goto L_08A05B44;
L_08A05B44:;
    s1 = LD32(sp);
    goto L_08A05B48;
L_08A05B48:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A05BCC; }
    goto L_08A05B58;
L_08A05B58:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A05BCC; }
    goto L_08A05B64;
L_08A05B64:;
    v0 = LD32(s1);
    goto L_08A05B68;
L_08A05B68:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A05BBC; }
    goto L_08A05B7C;
L_08A05B7C:;
    v0 = LD_U8(s0+8);
    goto L_08A05B80;
L_08A05B80:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A05C00; }
    goto L_08A05B88;
L_08A05B88:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A05BF0; }
    goto L_08A05B90;
L_08A05B90:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A05B98;
L_08A05B98:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05BA4;
L_08A05BA4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A05BB0;
L_08A05BB0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A05B80; }
    goto L_08A05BB8;
L_08A05BB8:;
    v1 = LD32(s1+4);
    goto L_08A05BBC;
L_08A05BBC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A05B68; }
    goto L_08A05BCC;
L_08A05BCC:;
    v0 = 0 + 0;
    goto L_08A05BD0;
L_08A05BD0:;
    sp = sp + 48;
    return v0;
L_08A05BF0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A05B98;
L_08A05C00:;
    s0 = LD32(s0+4);
    goto L_08A05BB0;
L_08A05C08:;
    a1 = 1;
    s0 = LD32(v0);
    func_08ACEF54(a0, a1);
    goto L_08A05C14;
L_08A05C14:;
    v1 = LD32(s1);
    a1 = LD32(s0+84);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A05C44; }
    goto L_08A05C30;
L_08A05C30:;
    v0 = LD32(sp+8);
    goto L_08A05C34;
L_08A05C34:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_08A05C08; }
    goto L_08A05C3C;
L_08A05C3C:;
    s1 = LD32(sp);
    goto L_08A05B48;
L_08A05C44:;
    { u64 r_ = func_089EB9D0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05C4C;
L_08A05C4C:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A05C34; }
    goto L_08A05C54;
L_08A05C54:;
    v0 = LD32(s0+96);
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A05C34; }
    goto L_08A05C60;
L_08A05C60:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A05CE8; }
    goto L_08A05C74;
L_08A05C74:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A05CE8; }
    goto L_08A05C80;
L_08A05C80:;
    v0 = LD32(s1);
    goto L_08A05C84;
L_08A05C84:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A05CD8; }
    goto L_08A05C98;
L_08A05C98:;
    v0 = LD_U8(s0+8);
    goto L_08A05C9C;
L_08A05C9C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A05D00; }
    goto L_08A05CA4;
L_08A05CA4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A05CF0; }
    goto L_08A05CAC;
L_08A05CAC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A05CB4;
L_08A05CB4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05CC0;
L_08A05CC0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A05CCC;
L_08A05CCC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A05C9C; }
    goto L_08A05CD4;
L_08A05CD4:;
    v1 = LD32(s1+4);
    goto L_08A05CD8;
L_08A05CD8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A05C84; }
    goto L_08A05CE8;
L_08A05CE8:;
    v0 = 1;
    goto L_08A05BD0;
L_08A05CF0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A05CB4;
L_08A05D00:;
    s0 = LD32(s0+4);
    goto L_08A05CCC;
}

/* 08A05D08 */
rv_t func_08A05D08(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A05D08:;
    sp = sp - 32;
    s3 = a0 ^ 0x1;
    v1 = s3 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A05E40; }
    goto L_08A05D40;
L_08A05D40:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF680 - (-2432);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2432));
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
    t0 = D_08C2C1D0 - (-15920);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C1E0 - (-15904);
    a3 = D_08C2C1F0 - (-15888);
    s0 = D_08C2C200 - (-15872);
    a1 = v0 - 15904;
    v1 = t0 - 15920;
    a2 = a3 - 15888;
    f1 = f1 * f3;
    s2 = s0 - 15872;
    ST32(v0-15904, FBITS(f5));
    v0 = 32;
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(v1+4, FBITS(f4));
    ST32(v1+8, FBITS(f5));
    ST32(a1+4, FBITS(f6));
    ST32(a1+8, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(s2+4, v0);
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(t0-15920, FBITS(f1));
    ST32(a3-15888, FBITS(f2));
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05DF8;
L_08A05DF8:;
    a1 = 0 + 0;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    ST32(s0-15872, v0);
    if (cnd_) { goto L_08A05E20; }
    goto L_08A05E08;
L_08A05E08:;
    v1 = v0 + 0;
    goto L_08A05E0C;
L_08A05E0C:;
    a1 = a1 + 1;
    v0 = a1 < a0;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A05E0C; }
    goto L_08A05E20;
L_08A05E20:;
    v0 = s0 - 15872;
    v1 = v0 + 16;
    ST32(s2+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s2+12, 0);
    v1 = s3 < 0x1u;
    goto L_08A05E40;
L_08A05E40:;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s2 = D_08C2C21C - (-15844);
    if (cnd_) { goto L_08A05ED0; }
    goto L_08A05E50;
L_08A05E50:;
    s0 = s4 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_08A05E78; }
    goto L_08A05E64;
L_08A05E64:;
    v0 = D_08C2C21C - (-15844);
    a0 = LD32(v0-15844);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A05EC0; }
    goto L_08A05E74;
L_08A05E74:;
    v0 = s1 < 0x1u;
    goto L_08A05E78;
L_08A05E78:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A05E94; }
    goto L_08A05E84;
L_08A05E84:;
    v0 = D_08C2C200 - (-15872);
    a0 = LD32(v0-15872);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A05EB0; }
    goto L_08A05E94;
L_08A05E94:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A05EB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05EB8;
L_08A05EB8:;
    goto L_08A05E94;
L_08A05EC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A05EC8;
L_08A05EC8:;
    v0 = s1 < 0x1u;
    goto L_08A05E78;
L_08A05ED0:;
    s0 = s2 - 15844;
    v0 = 32;
    ST32(s0+4, v0);
    a0 = 128;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05EE4;
L_08A05EE4:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2-15844, v0);
    if (cnd_) { goto L_08A05F10; }
    goto L_08A05EF4;
L_08A05EF4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A05EFC;
L_08A05EFC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A05EFC; }
    goto L_08A05F10;
L_08A05F10:;
    v0 = s2 - 15844;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A05E50;
}

/* 08A05F20 */
rv_t func_08A05F20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05F20:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A05D08(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05F34;
L_08A05F34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A05F40 */
rv_t func_08A05F40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05F40:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A05D08(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A05F54;
L_08A05F54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A05F60 */
rv_t func_08A05F60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A05F60:;
    sp = sp - 16;
    v0 = a0 < 0x2u;
    s0 = a2 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A05FA4; }
    goto L_08A05F78;
L_08A05F78:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08C2C29C - (-15716);
    v1 = v1 << 3;
    v0 = v0 - 15716;
    v1 = v1 + v0;
    goto L_08A05F90;
L_08A05F90:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A05FA4:;
    cnd_ = a1 == 0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_08A06028; }
    goto L_08A05FAC;
L_08A05FAC:;
    v0 = D_08B3071C - (1820);
    v1 = LD32(v0+1820);
    cnd_ = v1 == 0;
    t0 = v0 + 1820;
    if (cnd_) { goto L_08A05FE8; }
    goto L_08A05FBC;
L_08A05FBC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08A05FC4;
L_08A05FC4:;
    a0 = v0 + 40;
    a2 = v0 + 36;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08A05FF4; }
    goto L_08A05FDC;
L_08A05FDC:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08A05FC4; }
    goto L_08A05FE8;
L_08A05FE8:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A061AC; }
    goto L_08A05FF4;
L_08A05FF4:;
    cnd_ = a3 == 0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_08A06028; }
    goto L_08A05FFC;
L_08A05FFC:;
    v0 = LD32(a3+20);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0601C; }
    goto L_08A06008;
L_08A06008:;
    v0 = LD32(a3+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a3+16); goto L_08A0601C; }
    goto L_08A06018;
L_08A06018:;
    a0 = LD32(a3+24);
    goto L_08A0601C;
L_08A0601C:;
    cnd_ = a0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A05F90; }
    goto L_08A06024;
L_08A06024:;
    a0 = D_08C2C31C - (-15588);
    goto L_08A06028;
L_08A06028:;
    v0 = 999;
    a1 = 0 + 0;
    cnd_ = s0 == v0;
    v1 = a0 - 15588;
    if (cnd_) { goto L_08A060A0; }
    goto L_08A06038;
L_08A06038:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A06088; }
    goto L_08A0605C;
L_08A0605C:;
    a0 = LD32(a2);
    goto L_08A06060;
L_08A06060:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0618C; }
    goto L_08A06078;
L_08A06078:;
    a2 = LD32(a2+4);
    goto L_08A0607C;
L_08A0607C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A06060; }
    goto L_08A06084;
L_08A06084:;
    a0 = 0 + 0;
    goto L_08A06088;
L_08A06088:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08C2C200 - (-15872); goto L_08A060A4; }
    goto L_08A06090;
L_08A06090:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a1 = LD32(v0+16);
    goto L_08A060A0;
L_08A060A0:;
    a0 = D_08C2C200 - (-15872);
    goto L_08A060A4;
L_08A060A4:;
    v0 = 999;
    cnd_ = s0 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A06130; }
    goto L_08A060B0;
L_08A060B0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A06100; }
    goto L_08A060D4;
L_08A060D4:;
    a0 = LD32(a2);
    goto L_08A060D8;
L_08A060D8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0616C; }
    goto L_08A060F0;
L_08A060F0:;
    a2 = LD32(a2+4);
    goto L_08A060F4;
L_08A060F4:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A060D8; }
    goto L_08A060FC;
L_08A060FC:;
    a0 = 0 + 0;
    goto L_08A06100;
L_08A06100:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A06130; }
    goto L_08A06108;
L_08A06108:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    a0 = v1 + 88;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A06130; }
    goto L_08A06124;
L_08A06124:;
    v0 = func_088D1C74(a0);
    goto L_08A0612C;
L_08A0612C:;
    a1 = v0 + 0;
    goto L_08A06130;
L_08A06130:;
    cnd_ = a1 != 0;
    a0 = D_08B204FC - (1276);
    if (cnd_) { goto L_08A06144; }
    goto L_08A06138;
L_08A06138:;
    v0 = D_08C2C274 - (-15756);
    goto L_08A0613C;
L_08A0613C:;
    v1 = v0 - 15756;
    goto L_08A05F90;
L_08A06144:;
    a0 = a0 + 1276;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0614C;
L_08A0614C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2C274 - (-15756); goto L_08A0613C; }
    goto L_08A06154;
L_08A06154:;
    a0 = v0 + 0;
    v0 = func_08817BF8(a0);
    goto L_08A0615C;
L_08A0615C:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A05F90; }
    goto L_08A06164;
L_08A06164:;
    v0 = D_08C2C274 - (-15756);
    goto L_08A0613C;
L_08A0616C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A060F4; }
    goto L_08A06178;
L_08A06178:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A060F4; }
    goto L_08A06184;
L_08A06184:;
    goto L_08A06100;
L_08A0618C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A0607C; }
    goto L_08A06198;
L_08A06198:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A0607C; }
    goto L_08A061A4;
L_08A061A4:;
    goto L_08A06088;
L_08A061AC:;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A061B4;
L_08A061B4:;
    a3 = v0 + 0;
    goto L_08A05FF4;
}

/* 08A061BC */
rv_t func_08A061BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A061BC:;
    sp = sp - 48;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s1 = s3 < 0x1u;
    v0 = s1 & v0;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A06328; }
    goto L_08A061F8;
L_08A061F8:;
    v0 = D_08AEF68C - (-2420);
    f2 = BITSF(LD32(v0-2420));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    a2 = D_08C2C244 - (-15804);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AEF690 - (-2416);
    f21 = BITSF(LD32(v0-2416));
    v0 = 179;
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
    a3 = D_08C2C254 - (-15788);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f2;
    t0 = D_08C2C264 - (-15772);
    v1 = D_08AEF694 - (-2412);
    v0 = D_08AEF698 - (-2408);
    f20 = BITSF(LD32(v1-2412));
    a1 = t0 - 15772;
    v1 = a2 - 15804;
    f3 = f3 * f2;
    f14 = BITSF(LD32(v0-2408));
    v0 = a3 - 15788;
    ST32(v1+4, FBITS(f4));
    f15 = BITSF(0);
    ST32(v0+4, FBITS(f6));
    a0 = D_08C2C274 - (-15756);
    a0 = a0 - 15756;
    ST32(v1+8, FBITS(f5));
    f12 = f21;
    f13 = f20;
    ST32(a1+12, FBITS(f1));
    f16 = f21;
    f17 = f20;
    ST32(v1+12, FBITS(f1));
    s0 = D_08C2C29C - (-15716);
    s0 = s0 - 15716;
    ST32(v0+8, FBITS(f6));
    ST32(v0+12, FBITS(f1));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f1));
    ST32(a2-15804, FBITS(f3));
    ST32(a3-15788, FBITS(f5));
    ST32(t0-15772, FBITS(f1));
    f0 = func_0884B44C(a0, f12, f13, f14, f15, f16, f17);
    goto L_08A062D8;
L_08A062D8:;
    v0 = D_08AEF69C - (-2404);
    f14 = BITSF(LD32(v0-2404));
    f15 = BITSF(0);
    a0 = s0 + 0;
    f12 = f21;
    f13 = f20;
    f16 = f21;
    f17 = f20;
    f0 = func_0884B44C(a0, f12, f13, f14, f15, f16, f17);
    goto L_08A062FC;
L_08A062FC:;
    v0 = D_08AEF6A0 - (-2400);
    v1 = D_08AEF6A4 - (-2396);
    f12 = BITSF(LD32(v0-2400));
    f13 = BITSF(LD32(v1-2396));
    s0 = s0 + 40;
    a0 = s0 + 0;
    f14 = f12;
    f15 = f13;
    f16 = f12;
    f17 = f13;
    f0 = func_0884B44C(a0, f12, f13, f14, f15, f16, f17);
    goto L_08A06328;
L_08A06328:;
    s2 = s2 < 0x1u;
    v0 = s1 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08A06370; }
    goto L_08A06338;
L_08A06338:;
    v0 = D_08C2C29C - (-15716);
    v0 = v0 - 15716;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A0636C; }
    goto L_08A06348;
L_08A06348:;
    s0 = v0 + 80;
    goto L_08A0634C;
L_08A0634C:;
    cnd_ = s0 == s1;
    s0 = s0 - 40;
    if (cnd_) { goto L_08A0636C; }
    goto L_08A06354;
L_08A06354:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06364;
L_08A06364:;
    goto L_08A0634C;
L_08A0636C:;
    v0 = s3 < 0x1u;
    goto L_08A06370;
L_08A06370:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0638C; }
    goto L_08A0637C;
L_08A0637C:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    v1 = D_08C2C274 - (-15756);
    ST32(v1-15756, v0);
    goto L_08A0638C;
L_08A0638C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A063AC */
rv_t func_08A063AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A063AC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A061BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A063C0;
L_08A063C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A063CC */
rv_t func_08A063CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A063CC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A061BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A063E0;
L_08A063E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A063EC */
void func_08A063EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A063EC:;
    sp = sp - 32;
    t0 = 1;
    s3 = D_08C2C31C - (-15588);
    s2 = s3 - 15588;
    s1 = a0 + 0;
    v0 = LD32(a1);
    ST32(a0, v0);
    v1 = LD32(v0-12);
    a0 = LD32(a1+4);
    v0 = D_08AEF6A8 - (-2392);
    v1 = s1 + v1;
    ST32(v1, a0);
    a0 = s1 + 56;
    a2 = LD32(s1);
    f0 = BITSF(LD32(v0-2392));
    v1 = LD32(a1+8);
    v0 = LD32(a2-16);
    a2 = 1;
    v0 = s1 + v0;
    ST32(v0, v1);
    v0 = 4;
    v1 = LD32(s1);
    ST32(s1+12, v0);
    v0 = (u32)-1;
    a3 = LD32(v1-16);
    ST32(s1+16, v0);
    v0 = 999;
    a3 = s1 + a3;
    ST8(s1+30, t0);
    ST32(s1+36, FBITS(f0));
    ST8(s1+5, t0);
    ST32(s1+8, FBITS(f0));
    ST32(s1+24, v0);
    ST8(s1+4, 0);
    ST8(s1+6, 0);
    ST32(s1+20, 0);
    ST8(s1+28, 0);
    ST8(s1+29, 0);
    ST32(s1+32, 0);
    ST32(s1+40, 0);
    ST32(s1+44, 0);
    ST32(s1+48, 0);
    ST8(s1+52, 0);
    ST8(s1+53, 0);
    ST8(s1+54, 0);
    a1 = LD32(a3+4);
    func_08A26584(a0, a1, a2);
    goto L_08A064BC;
L_08A064BC:;
    a1 = LD32(s1);
    ST8(s1+80, 0);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A064E4;
L_08A064E4:;
    a0 = LD32(s3-15588);
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

/* 08A0652C */
void func_08A0652C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0652C:;
    sp = sp - 16;
    t0 = D_08C2C31C - (-15588);
    s1 = t0 - 15588;
    s0 = a0 + 0;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    a3 = LD32(a1+8);
    a0 = LD32(s1+4);
    v0 = LD32(a2-16);
    a1 = LD32(t0-15588);
    a0 = a0 - 1;
    v0 = s0 + v0;
    ST32(v0, a3);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a2 = v1 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A065C4; }
    goto L_08A065A8;
L_08A065A8:;
    v0 = LD32(a0);
    goto L_08A065AC;
L_08A065AC:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08A065E0; }
    goto L_08A065B4;
L_08A065B4:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A065AC; }
    goto L_08A065C4;
L_08A065C4:;
    a0 = s0 + 56;
    func_08A26640(a0, t1, t2, t3);
    goto L_08A065CC;
L_08A065CC:;
    sp = sp + 16;
    return;
L_08A065E0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A065F0; }
    goto L_08A065E8;
L_08A065E8:;
    ST8(a0+8, v0);
    goto L_08A065C4;
L_08A065F0:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A06618; }
    goto L_08A065F8;
L_08A065F8:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_08A06600;
L_08A06600:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06608;
L_08A06608:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A065C4;
L_08A06618:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_08A06600;
}

/* 08A06628 */
rv_t func_08A06628(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A06628:;
    v1 = D_08B14370 - (17264);
    sp = sp - 16;
    v1 = v1 + 17264;
    v0 = v1 + 248;
    s0 = a0 + 0;
    a0 = v1 + 452;
    ST32(s0, v1);
    a1 = s0 + 0;
    ST32(s0+160, a0);
    a0 = D_08C2C31C - (-15588);
    a0 = a0 - 15588;
    ST32(s0+84, v0);
    s2 = s0 + 160;
    s1 = s0 + 84;
    s0 = s0 + 56;
    func_08ACF338(a0, a1, t1, t2, t3);
    goto L_08A06678;
L_08A06678:;
    a0 = s0 + 0;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A06680;
L_08A06680:;
    a1 = D_08B14580 - (17792);
    a1 = a1 + 17792;
    a0 = s1 + 0;
    a1 = a1 + 12;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A06694;
L_08A06694:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0669C;
L_08A0669C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A066B4 */
rv_t func_08A066B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A066B4:;
    v1 = D_08B14370 - (17264);
    sp = sp - 16;
    v1 = v1 + 17264;
    v0 = v1 + 248;
    s0 = a0 + 0;
    a0 = v1 + 452;
    ST32(s0, v1);
    a1 = s0 + 0;
    ST32(s0+160, a0);
    a0 = D_08C2C31C - (-15588);
    a0 = a0 - 15588;
    ST32(s0+84, v0);
    s2 = s0 + 160;
    func_08ACF338(a0, a1, t1, t2, t3);
    goto L_08A066FC;
L_08A066FC:;
    a0 = s0 + 56;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A06704;
L_08A06704:;
    a1 = D_08B14580 - (17792);
    s1 = s0 + 84;
    a1 = a1 + 17792;
    a1 = a1 + 12;
    a0 = s1 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A0671C;
L_08A0671C:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06724;
L_08A06724:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0672C;
L_08A0672C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A06744 */
rv_t func_08A06744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A06744:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08862F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06764;
L_08A06764:;
    a1 = LD32(s0);
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A06794; }
    goto L_08A0677C;
L_08A0677C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A07D24(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06784;
L_08A06784:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A06794:;
    v0 = LD32(a1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A067A0;
L_08A067A0:;
    goto L_08A0677C;
}

/* 08A067A8 */
rv_t func_08A067A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A067A8:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a0 + 56;
    s0 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A067C8;
L_08A067C8:;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A06830; }
    goto L_08A067D0;
L_08A067D0:;
    a1 = LD_U16(s0+16);
    v0 = 63;
    v1 = a1 & 0xffff;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 64;
    if (cnd_) { goto L_08A06830; }
    goto L_08A067E4;
L_08A067E4:;
    cnd_ = v0 == 0;
    v0 = 0x8001;
    if (cnd_) { goto L_08A068FC; }
    goto L_08A067EC;
L_08A067EC:;
    v0 = 27;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 28;
    if (cnd_) { goto L_08A068A4; }
    goto L_08A067F8;
L_08A067F8:;
    cnd_ = v0 == 0;
    v0 = 28;
    if (cnd_) { goto L_08A06860; }
    goto L_08A06800;
L_08A06800:;
    v0 = v1 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08A06848; }
    goto L_08A06810;
L_08A06810:;
    a1 = a1 & 0xffff;
    a1 = a1 ^ 0x3;
    v1 = LD32(v0+28);
    a1 = a1 < 0x1u;
    a0 = s1 + 0;
    goto L_08A06824;
L_08A06824:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0682C;
L_08A0682C:;
    a2 = 1;
    goto L_08A06830;
L_08A06830:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A06848:;
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08862C40(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06858;
L_08A06858:;
    a2 = v0 + 0;
    goto L_08A06830;
L_08A06860:;
    cnd_ = v1 != v0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08A06848; }
    goto L_08A06868;
L_08A06868:;
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08862C40(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06878;
L_08A06878:;
    v1 = LD_U8(s1+4);
    cnd_ = v1 == 0;
    if (cnd_) { a2 = 1; goto L_08A06830; }
    goto L_08A06884;
L_08A06884:;
    v0 = LD32(s1);
    a1 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    goto L_08A06894;
L_08A06894:;
    { rv_t r_ = func_08864234(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0689C;
L_08A0689C:;
    a2 = 1;
    goto L_08A06830;
L_08A068A4:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08862C40(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A068B8;
L_08A068B8:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A068E8; }
    goto L_08A068D0;
L_08A068D0:;
    a0 = LD32(v1-12);
    v0 = a1 ^ 0x1;
    a1 = 1;
    a0 = s1 + a0;
    ST8(s1+4, v0);
    goto L_08A06894;
L_08A068E8:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A068F0;
L_08A068F0:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    goto L_08A068D0;
L_08A068FC:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A069D4; }
    goto L_08A06904;
L_08A06904:;
    cnd_ = v0 != 0;
    v0 = 0x8019;
    if (cnd_) { goto L_08A06928; }
    goto L_08A0690C;
L_08A0690C:;
    v0 = 93;
    cnd_ = v1 != v0;
    v0 = LD32(s1);
    if (cnd_) { goto L_08A06848; }
    goto L_08A06918;
L_08A06918:;
    a1 = LD32(s0+4);
    a0 = s1 + 0;
    v1 = LD32(v0+84);
    goto L_08A06824;
L_08A06928:;
    cnd_ = v1 == v0;
    v0 = 0x8064;
    if (cnd_) { goto L_08A069B8; }
    goto L_08A06930;
L_08A06930:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A06848; }
    goto L_08A06938;
L_08A06938:;
    v0 = LD_U8(s1+28);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s1+28, 0); goto L_08A0682C; }
    goto L_08A06944;
L_08A06944:;
    v1 = LD_U8(s1+30);
    v0 = 1;
    cnd_ = v1 != 0;
    ST8(s1+28, v0);
    if (cnd_) { goto L_08A0695C; }
    goto L_08A06954;
L_08A06954:;
    ST8(s1+30, 0);
    goto L_08A0682C;
L_08A0695C:;
    a0 = 0xd0cd0000u;
    a1 = 0xae20000u;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x6e48;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06978;
L_08A06978:;
    v0 = D_08AEF6B0 - (-2384);
    f12 = BITSF(LD32(v0-2384));
    a0 = LD32(sp);
    a1 = 0xc88a0000u;
    a1 = a1 | 0xcecf;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06990;
L_08A06990:;
    ST32(s1+36, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0x7fea0000u;
    a0 = LD32(sp);
    a1 = a1 | 0x2007;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A069A8;
L_08A069A8:;
    f1 = BITSF(LD32(s1+36));
    ST32(s1+44, FBITS(f0));
    ST32(s1+32, FBITS(f1));
    goto L_08A06954;
L_08A069B8:;
    v0 = LD32(s0+24);
    a2 = 1;
    v1 = LD_U8(v0+1);
    ST8(s1+53, v1);
    a0 = LD_U8(v0);
    ST8(s1+52, a0);
    goto L_08A06830;
L_08A069D4:;
    a1 = LD32(s0+24);
    cnd_ = a1 == 0;
    if (cnd_) { a2 = 1; goto L_08A06830; }
    goto L_08A069E0;
L_08A069E0:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A069F0;
L_08A069F0:;
    a2 = 1;
    goto L_08A06830;
}

/* 08A069F8 */
rv_t func_08A069F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A069F8:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    v0 = LD32(a0+64);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08A06A8C; }
    goto L_08A06A2C;
L_08A06A2C:;
    f1 = BITSF(LD32(a0+40));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_08A06A90; }
    goto L_08A06A44;
L_08A06A44:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A06A90; }
    goto L_08A06A60;
L_08A06A60:;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08A06A90; }
    goto L_08A06A70;
L_08A06A70:;
    v0 = LD_U8(s0+54);
    cnd_ = v0 == 0;
    v0 = 0x3e2c0000u;
    if (cnd_) { goto L_08A06AA4; }
    goto L_08A06A7C;
L_08A06A7C:;
    v1 = LD32(a1+24);
    v0 = v0 | 0x2ac5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A06AA4; }
    goto L_08A06A8C;
L_08A06A8C:;
    goto L_08A06A90;
L_08A06A90:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A06AA4:;
    f20 = BITSF(LD32(s1+12));
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06AAC;
L_08A06AAC:;
    cnd_ = v0 == 0;
    a0 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08A06B28; }
    goto L_08A06AB4;
L_08A06AB4:;
    a2 = LD32(s1+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08A06B28; }
    goto L_08A06AC4;
L_08A06AC4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A06B14; }
    goto L_08A06AE8;
L_08A06AE8:;
    a0 = LD32(a1);
    goto L_08A06AEC;
L_08A06AEC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A06CD0; }
    goto L_08A06B04;
L_08A06B04:;
    a1 = LD32(a1+4);
    goto L_08A06B08;
L_08A06B08:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A06AEC; }
    goto L_08A06B10;
L_08A06B10:;
    v1 = 0 + 0;
    goto L_08A06B14;
L_08A06B14:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A06B28; }
    goto L_08A06B1C;
L_08A06B1C:;
    a0 = LD32(v1+12);
    f0 = func_08A3CD68(a0);
    goto L_08A06B24;
L_08A06B24:;
    f20 = f20 * f0;
    goto L_08A06B28;
L_08A06B28:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A06E00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06B30;
L_08A06B30:;
    cnd_ = v0 == 0;
    v1 = LD32(s1+28);
    if (cnd_) { goto L_08A06B98; }
    goto L_08A06B38;
L_08A06B38:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    v0 = 0x46650000u;
    if (cnd_) { goto L_08A06B98; }
    goto L_08A06B44;
L_08A06B44:;
    v1 = LD32(s1+24);
    v0 = v0 | 0x7316;
    cnd_ = v1 == v0;
    f20 = BITSF(LD32(s1+12));
    if (cnd_) { goto L_08A06CC0; }
    goto L_08A06B54;
L_08A06B54:;
    v0 = LD_U8(s0+28);
    cnd_ = v0 == 0;
    a1 = 32;
    if (cnd_) { goto L_08A06C40; }
    goto L_08A06B60;
L_08A06B60:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08A06C2C; }
    goto L_08A06B7C;
L_08A06B7C:;
    v0 = FBITS(f0);
    ST32(s0+32, FBITS(f1));
    v0 = (v0 >> 0) & 0x7fffffff;
    f20 = BITSF(v0);
    ST8(s0+28, 0);
    ST8(s0+29, 0);
    goto L_08A06B94;
L_08A06B94:;
    v1 = LD32(s1+28);
    goto L_08A06B98;
L_08A06B98:;
    f12 = BITSF(0);
    fcc = FCMP(f12, f20, 12);
    cnd_ = fcc;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_08A06BB8; }
    goto L_08A06BAC;
L_08A06BAC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A06A90; }
    goto L_08A06BB4;
L_08A06BB4:;
    v0 = v1 & 0x1;
    goto L_08A06BB8;
L_08A06BB8:;
    cnd_ = v0 != 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_08A06BD0; }
    goto L_08A06BC0;
L_08A06BC0:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    f12 = f0 - f20;
    goto L_08A06BD0;
L_08A06BD0:;
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    a0 = LD32(v1-12);
    if (cnd_) { goto L_08A06BE8; }
    goto L_08A06BE4;
L_08A06BE4:;
    f12 = f0;
    goto L_08A06BE8;
L_08A06BE8:;
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_08A06BF0;
L_08A06BF0:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08A06A90; }
    goto L_08A06C14;
L_08A06C14:;
    v0 = LD32(v1+12);
    a0 = s0 + 0;
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06C24;
L_08A06C24:;
    goto L_08A06A90;
L_08A06C2C:;
    f20 = f1;
    ST32(s0+32, FBITS(f0));
    ST8(s0+28, v0);
    ST8(s0+29, v0);
    goto L_08A06B94;
L_08A06C40:;
    a0 = 0x8053;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06C50;
L_08A06C50:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A06B94; }
    goto L_08A06C58;
L_08A06C58:;
    a0 = LD32(v0+24);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A06CA8; }
    goto L_08A06C64;
L_08A06C64:;
    v0 = LD32(s1);
    ST32(a0, v0);
    v1 = LD32(s1+4);
    ST32(a0+4, v1);
    v0 = LD32(s1+8);
    ST32(a0+8, v0);
    v1 = LD32(s1+12);
    ST32(a0+12, v1);
    v0 = LD32(s1+16);
    ST32(a0+16, v0);
    v1 = LD32(s1+20);
    ST32(a0+20, v1);
    v0 = LD32(s1+24);
    ST32(a0+24, v0);
    v1 = LD32(s1+28);
    ST32(a0+28, v1);
    v0 = LD32(s0);
    goto L_08A06CA8;
L_08A06CA8:;
    a2 = LD32(s0+24);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06CB8;
L_08A06CB8:;
    goto L_08A06A90;
L_08A06CC0:;
    v0 = D_08AEF6B4 - (-2380);
    f0 = BITSF(LD32(v0-2380));
    f20 = f20 * f0;
    goto L_08A06B54;
L_08A06CD0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A06B04; }
    goto L_08A06CDC;
L_08A06CDC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A06B08; }
    goto L_08A06CE8;
L_08A06CE8:;
    goto L_08A06B14;
}

/* 08A06CF0 */
rv_t func_08A06CF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A06CF0:;
    sp = sp - 16;
    v0 = 4;
    s0 = a0 + 0;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    ST8(a0+28, 0);
    if (cnd_) { goto L_08A06D28; }
    goto L_08A06D10;
L_08A06D10:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08A06DE8; }
    goto L_08A06D1C;
L_08A06D1C:;
    v0 = v1 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A06DAC; }
    goto L_08A06D28;
L_08A06D28:;
    a1 = LD32(a1+8);
    a0 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_08A06DA8; }
    goto L_08A06D3C;
L_08A06D3C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A06D80; }
    goto L_08A06D60;
L_08A06D60:;
    a0 = LD32(v1);
    goto L_08A06D64;
L_08A06D64:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A06DC8; }
    goto L_08A06D70;
L_08A06D70:;
    v1 = LD32(v1+4);
    goto L_08A06D74;
L_08A06D74:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08A06D64; }
    goto L_08A06D7C;
L_08A06D7C:;
    a0 = 0 + 0;
    goto L_08A06D80;
L_08A06D80:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A06DAC; }
    goto L_08A06D88;
L_08A06D88:;
    v1 = LD32(a0+88);
    v0 = LD32(s0+12);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_08A06DAC; }
    goto L_08A06D98;
L_08A06D98:;
    v1 = LD32(a0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06DA8;
L_08A06DA8:;
    v0 = LD32(s0);
    goto L_08A06DAC;
L_08A06DAC:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08863F98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06DB8;
L_08A06DB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A06DC8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A06D74; }
    goto L_08A06DD4;
L_08A06DD4:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A06D74; }
    goto L_08A06DE0;
L_08A06DE0:;
    goto L_08A06D80;
L_08A06DE8:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0); goto L_08A06DAC; }
    goto L_08A06DF0;
L_08A06DF0:;
    a0 = a1 + 8;
    func_08974EB8(a0);
    goto L_08A06DF8;
L_08A06DF8:;
    v0 = LD32(s0);
    goto L_08A06DAC;
}

/* 08A06E00 */
rv_t func_08A06E00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A06E00:;
    a2 = LD32(a0+24);
    v0 = 999;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD_U8(a0+28); goto L_08A06EE0; }
    goto L_08A06E10;
L_08A06E10:;
    a0 = D_08C2BC38 - (-17352);
    v1 = a0 - 17352;
    v0 = LD32(v1+4);
    a1 = LD32(a0-17352);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A06E68; }
    goto L_08A06E3C;
L_08A06E3C:;
    a0 = LD32(a1);
    goto L_08A06E40;
L_08A06E40:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A06EC0; }
    goto L_08A06E58;
L_08A06E58:;
    a1 = LD32(a1+4);
    goto L_08A06E5C;
L_08A06E5C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A06E40; }
    goto L_08A06E64;
L_08A06E64:;
    a0 = 0 + 0;
    goto L_08A06E68;
L_08A06E68:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A06EB8; }
    goto L_08A06E70;
L_08A06E70:;
    v0 = LD32(a0);
    f1 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A06EB8; }
    goto L_08A06E94;
L_08A06E94:;
    v0 = LD_U8(a0+97);
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(a0+88)); goto L_08A06EA0; }
    goto L_08A06EA0;
L_08A06EA0:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08A06EB8; }
    goto L_08A06EB4;
L_08A06EB4:;
    v0 = 0 + 0;
    goto L_08A06EB8;
L_08A06EB8:;
    return (rv_t){ v0, v1, f0 };
L_08A06EC0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A06E5C; }
    goto L_08A06ECC;
L_08A06ECC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A06E5C; }
    goto L_08A06ED8;
L_08A06ED8:;
    goto L_08A06E68;
L_08A06EE0:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A06EB8; }
    goto L_08A06EE8;
L_08A06EE8:;
    f1 = BITSF(LD32(a0+32));
    goto L_08A06EA0;
}

/* 08A06EF0 */
rv_t func_08A06EF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A06EF0:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A0700C; }
    goto L_08A06F0C;
L_08A06F0C:;
    v0 = LD32(a0);
    a1 = 1;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06F20;
L_08A06F20:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06F30;
L_08A06F30:;
    v1 = LD32(s0);
    goto L_08A06F34;
L_08A06F34:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s0+5); goto L_08A06F60; }
    goto L_08A06F48;
L_08A06F48:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A06FDC; }
    goto L_08A06F50;
L_08A06F50:;
    v0 = LD_U8(s0+6);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A06FCC; }
    goto L_08A06F5C;
L_08A06F5C:;
    v0 = LD_U8(s0+5);
    goto L_08A06F60;
L_08A06F60:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+5, s1); goto L_08A06F74; }
    goto L_08A06F68;
L_08A06F68:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = 4; goto L_08A06F88; }
    goto L_08A06F70;
L_08A06F70:;
    ST8(s0+5, s1);
    goto L_08A06F74;
L_08A06F74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A06F88:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06F98;
L_08A06F98:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A06F70; }
    goto L_08A06FA0;
L_08A06FA0:;
    v0 = LD32(v0+28);
    a1 = v1 + 0;
    a2 = 2;
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    v1 = LD32(s0);
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A06FC4;
L_08A06FC4:;
    ST8(s0+5, s1);
    goto L_08A06F74;
L_08A06FCC:;
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06FD4;
L_08A06FD4:;
    ST8(s0+6, 0);
    goto L_08A06F5C;
L_08A06FDC:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A06FE4;
L_08A06FE4:;
    v1 = LD32(s0);
    v0 = v0 ^ 0x1;
    ST8(s0+6, v0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A07004;
L_08A07004:;
    v0 = LD_U8(s0+5);
    goto L_08A06F60;
L_08A0700C:;
    v0 = LD32(a0);
    a1 = 0 + 0;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07020;
L_08A07020:;
    v0 = LD32(s0);
    a1 = 1;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_088741DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07034;
L_08A07034:;
    v1 = LD32(s0);
    goto L_08A06F34;
}

/* 08A0703C */
rv_t func_08A0703C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0703C:;
    sp = sp - 16;
    s1 = a1 + 0;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A070A4; }
    goto L_08A07068;
L_08A07068:;
    v0 = LD32(a2-12);
    a1 = s1 + 0;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A07094; }
    goto L_08A07080;
L_08A07080:;
    goto L_08A07084;
L_08A07084:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A07094:;
    { rv_t r_ = func_088BAAA4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0709C;
L_08A0709C:;
    goto L_08A07084;
L_08A070A4:;
    v0 = LD32(a2+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A070B0;
L_08A070B0:;
    a2 = LD32(s0);
    goto L_08A07068;
}

/* 08A070B8 */
rv_t func_08A070B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A070B8:;
    sp = sp - 16;
    s1 = a1 + 0;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A07120; }
    goto L_08A070E4;
L_08A070E4:;
    v0 = LD32(a2-12);
    a1 = s1 + 0;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A07110; }
    goto L_08A070FC;
L_08A070FC:;
    goto L_08A07100;
L_08A07100:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A07110:;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07118;
L_08A07118:;
    goto L_08A07100;
L_08A07120:;
    v0 = LD32(a2+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0712C;
L_08A0712C:;
    a2 = LD32(s0);
    goto L_08A070E4;
}

/* 08A07134 */
rv_t func_08A07134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A07134:;
    sp = sp - 16;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0716C; }
    goto L_08A0715C;
L_08A0715C:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a2-16); goto L_08A071AC; }
    goto L_08A0716C;
L_08A0716C:;
    v0 = LD32(a2-12);
    goto L_08A07170;
L_08A07170:;
    v1 = D_08B45A9C - (23196);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v1 = v1 + 23196;
    if (cnd_) { goto L_08A0719C; }
    goto L_08A07184;
L_08A07184:;
    v0 = v1 + 0;
    goto L_08A0718C;
L_08A0718C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0719C:;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A071A4;
L_08A071A4:;
    v1 = v0 + 0;
    goto L_08A07184;
L_08A071AC:;
    a0 = D_08C2C200 - (-15872);
    v0 = s0 + v0;
    a3 = LD32(v0+4);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A0716C; }
    goto L_08A071C4;
L_08A071C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A07214; }
    goto L_08A071E8;
L_08A071E8:;
    a0 = LD32(a1);
    goto L_08A071EC;
L_08A071EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0724C; }
    goto L_08A07204;
L_08A07204:;
    a1 = LD32(a1+4);
    goto L_08A07208;
L_08A07208:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A071EC; }
    goto L_08A07210;
L_08A07210:;
    s1 = 0 + 0;
    goto L_08A07214;
L_08A07214:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(a2-12); goto L_08A07170; }
    goto L_08A0721C;
L_08A0721C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07224;
L_08A07224:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A07234; }
    goto L_08A0722C;
L_08A0722C:;
    a2 = LD32(s0);
    goto L_08A0716C;
L_08A07234:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0723C;
L_08A0723C:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07244;
L_08A07244:;
    goto L_08A0718C;
L_08A0724C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A07204; }
    goto L_08A07258;
L_08A07258:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A07208; }
    goto L_08A07264;
L_08A07264:;
    goto L_08A07214;
}

/* 08A0726C */
rv_t func_08A0726C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0726C:;
    sp = sp - 16;
    s1 = a1 + 0;
    a2 = 1;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A072A4;
L_08A072A4:;
    a0 = v0 + 0;
    f12 = BITSF(0);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A072DC; }
    goto L_08A072B8;
L_08A072B8:;
    v0 = LD32(v0);
    v1 = LD32(v0+56);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A072C8;
L_08A072C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A072DC:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A072F8;
L_08A072F8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_08A072C8;
}

/* 08A07314 */
rv_t func_08A07314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A07314:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07338;
L_08A07338:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0886302C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0734C;
L_08A0734C:;
    v1 = LD_U8(s0+52);
    a2 = LD_U8(s0+6);
    a3 = LD_U8(s0+54);
    a0 = LD_U8(s0+53);
    a1 = LD_U8(s0+4);
    v0 = LD_U8(s0+5);
    a1 = a1 & 0x1;
    a1 = (a1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    a1 = (a1 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    a1 = (a1 & ~(0x1u << 3)) | ((a0 & 0x1) << 3);
    a1 = (a1 & ~(0x1u << 4)) | ((a2 & 0x1) << 4);
    a0 = s1 + 0;
    a1 = (a1 & ~(0x1u << 5)) | ((a3 & 0x1) << 5);
    { rv_t r_ = func_0882D900(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07384;
L_08A07384:;
    a1 = LD32(s0+24);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07390;
L_08A07390:;
    a1 = LD32(s0+16);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0739C;
L_08A0739C:;
    a1 = LD32(s0+20);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A073A8;
L_08A073A8:;
    f12 = BITSF(LD32(s0+8));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A073B4;
L_08A073B4:;
    a0 = s0 + 56;
    a1 = s1 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A073C0;
L_08A073C0:;
    a1 = LD32(s0+12);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A073CC;
L_08A073CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A073E0 */
rv_t func_08A073E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A073E0:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07404;
L_08A07404:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08863284(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07418;
L_08A07418:;
    a1 = sp + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07424;
L_08A07424:;
    v0 = LD_U8(sp+4);
    a1 = LD32(sp);
    t0 = 0 + 0;
    v0 = v0 & 0x1;
    ST8(s0+4, v0);
    cnd_ = a1 == 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_08A07568; }
    goto L_08A07440;
L_08A07440:;
    a2 = LD32(sp+4);
    v0 = a2 & 0x2;
    cnd_ = v0 == 0;
    v0 = (a2 >> 2) & 0x1;
    if (cnd_) { goto L_08A07458; }
    goto L_08A07450;
L_08A07450:;
    t0 = 1;
    v0 = (a2 >> 2) & 0x1;
    goto L_08A07458;
L_08A07458:;
    v1 = (a2 >> 3) & 0x1;
    a0 = a3 < 0x7u;
    ST8(s0+5, t0);
    t0 = 0 + 0;
    ST8(s0+52, v0);
    cnd_ = a0 != 0;
    ST8(s0+53, v1);
    if (cnd_) { goto L_08A07480; }
    goto L_08A07474;
L_08A07474:;
    v0 = a2 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = 1; goto L_08A07480; }
    goto L_08A07480;
L_08A07480:;
    v0 = a3 < 0x8u;
    ST8(s0+6, t0);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0749C; }
    goto L_08A07490;
L_08A07490:;
    v0 = a2 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A0749C; }
    goto L_08A0749C;
L_08A0749C:;
    v0 = a3 < 0x2u;
    cnd_ = v0 == 0;
    ST8(s0+54, v1);
    if (cnd_) { goto L_08A07554; }
    goto L_08A074A8;
L_08A074A8:;
    v0 = a1 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 16; goto L_08A07544; }
    goto L_08A074B4;
L_08A074B4:;
    v0 = a1 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 20; goto L_08A07534; }
    goto L_08A074C0;
L_08A074C0:;
    v0 = a1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 8; goto L_08A07518; }
    goto L_08A074CC;
L_08A074CC:;
    v0 = a1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 12; goto L_08A07508; }
    goto L_08A074D8;
L_08A074D8:;
    v0 = a1 < 0x7u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A074F8; }
    goto L_08A074E4;
L_08A074E4:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    ST32(s0+8, FBITS(f0));
    goto L_08A074F8;
L_08A074F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A07508:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07510;
L_08A07510:;
    a1 = LD32(sp);
    goto L_08A074D8;
L_08A07518:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07520;
L_08A07520:;
    a1 = s1 + 0;
    a0 = s0 + 56;
    { rv_t r_ = func_08A26C18(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0752C;
L_08A0752C:;
    a1 = LD32(sp);
    goto L_08A074CC;
L_08A07534:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0753C;
L_08A0753C:;
    a1 = LD32(sp);
    goto L_08A074C0;
L_08A07544:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0754C;
L_08A0754C:;
    a1 = LD32(sp);
    goto L_08A074B4;
L_08A07554:;
    a1 = s0 + 24;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07560;
L_08A07560:;
    a1 = LD32(sp);
    goto L_08A074A8;
L_08A07568:;
    a2 = LD32(sp+4);
    goto L_08A07450;
}
