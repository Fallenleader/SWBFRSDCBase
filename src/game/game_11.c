#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

/* 088F96B0 */
void func_088F96B0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F96B0:;
    sp = sp - 32;
    s1 = D_08B16198 - (24984);
    func_088FACE8(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088F96C8;
L_088F96C8:;
    a1 = 0x2410000u;
    v0 = LD32(s1+24984);
    a0 = D_08AD8C5C - (-29604);
    a1 = a1 | 0x5822;
    a2 = sp + 0;
    a3 = 4;
    t0 = 0 + 0;
    t1 = 0 + 0;
    s0 = D_08B1618C - (24972);
    a0 = a0 - 29604;
    ST32(sp, v0);
    v0 = sceIoDevctl(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F96F8;
L_088F96F8:;
    a0 = LD32(s0+24972);
    v0 = sceUmdUnRegisterUMDCallBack(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9700;
L_088F9700:;
    a0 = 0 + 0;
    v0 = scePowerUnregisterCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9708;
L_088F9708:;
    a0 = LD32(s1+24984);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9710;
L_088F9710:;
    a0 = LD32(s0+24972);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9718;
L_088F9718:;
    v1 = D_08B16190 - (24976);
    a0 = LD32(v1+24976);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9724;
L_088F9724:;
    v1 = D_08B16194 - (24980);
    a0 = LD32(v1+24980);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9730;
L_088F9730:;
    v1 = D_08B45B1C - (23324);
    ST32(v1+23324, 0);
    sp = sp + 32;
    return;
}

/* 088F974C */
u64 func_088F974C(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F974C:;
    sp = sp - 16;
    s1 = D_08B45B1C - (23324);
    a1 = 1;
    v0 = LD32(s1+23324);
    a2 = D_08B15AB0 - (23216);
    a3 = D_08B285A4 - (-31324);
    cnd_ = v0 == 0;
    s0 = a1 << (a0 & 31);
    if (cnd_) { goto L_088F97C0; }
    goto L_088F9778;
L_088F9778:;
    v0 = LD32(s1+23324);
    a1 = a0 + 0;
    a0 = D_08AD8C70 - (-29584);
    v0 = v0 & s0;
    cnd_ = v0 != 0;
    a0 = a0 - 29584;
    if (cnd_) { goto L_088F97B0; }
    goto L_088F9790;
L_088F9790:;
    v0 = LD32(s1+23324);
    v0 = v0 | s0;
    ST32(s1+23324, v0);
    goto L_088F97A0;
L_088F97A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F97B0:;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F97B8;
L_088F97B8:;
    goto L_088F9790;
L_088F97C0:;
    a0 = LD_U8(a2+23216);
    v1 = LD32(s1+23324);
    f0 = BITSF(LD32(a3-31324));
    v0 = D_08B45B18 - (23320);
    v1 = v1 | s0;
    ST8(v0+23320, a0);
    v0 = D_08B45B14 - (23316);
    ST8(a2+23216, a1);
    ST32(s1+23324, v1);
    ST32(v0+23316, FBITS(f0));
    ST32(a3-31324, 0);
    func_088FE378(a1, a2, a3, t0, t1, t2, t3);
    goto L_088F97F0;
L_088F97F0:;
    func_08910DB0(0, 0, 0, 0, 0, 0, 0);
    goto L_088F97F8;
L_088F97F8:;
    func_088FC86C(0, 0, 0, 0, 0, 0);
    goto L_088F9800;
L_088F9800:;
    func_088FAEB8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F9808;
L_088F9808:;
    func_08A698EC();
    goto L_088F9810;
L_088F9810:;
    goto L_088F97A0;
}

/* 088F9818 */
u64 func_088F9818(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9818:;
    sp = sp - 16;
    a1 = D_08B45B1C - (23324);
    v0 = 1;
    v1 = LD32(a1+23324);
    v0 = v0 << (a0 & 31);
    v0 = ~(0 | v0);
    v1 = v1 & v0;
    ST32(a1+23324, v1);
    v0 = LD32(a1+23324);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F9850; }
    goto L_088F9848;
L_088F9848:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F9850:;
    func_088FAF6C(a3, t0, t1, t2, t3);
    goto L_088F9858;
L_088F9858:;
    func_088FC8B4(0, 0, 0, 0, 0, 0);
    goto L_088F9860;
L_088F9860:;
    func_08910DD4(0, 0, 0, 0, 0, 0, 0);
    goto L_088F9868;
L_088F9868:;
    func_088FE40C();
    goto L_088F9870;
L_088F9870:;
    v1 = D_08B285A4 - (-31324);
    f1 = BITSF(LD32(v1-31324));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    v0 = D_08B45B14 - (23316);
    if (cnd_) { goto L_088F9894; }
    goto L_088F988C;
L_088F988C:;
    f0 = BITSF(LD32(v0+23316));
    ST32(v1-31324, FBITS(f0));
    goto L_088F9894;
L_088F9894:;
    func_08A698F4();
    goto L_088F989C;
L_088F989C:;
    a0 = D_08B15AB0 - (23216);
    v0 = LD_U8(a0+23216);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F9848; }
    goto L_088F98AC;
L_088F98AC:;
    v0 = D_08B45B18 - (23320);
    v1 = LD_U8(v0+23320);
    ST8(a0+23216, v1);
    goto L_088F9848;
}

/* 088F98BC */
u32 func_088F98BC(void)
{
    u32 v0 = 0, v1 = 0;
L_088F98BC:;
    v1 = D_08B1619C - (24988);
    v0 = LD_U8(v1+24988);
    v0 = v0 & 0xff;
    return v0;
}

/* 088F98CC */
void func_088F98CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F98CC:;
    sp = sp - 16;
    v0 = sceKernelGetThreadId(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F98DC;
L_088F98DC:;
    v1 = D_08B45B20 - (23328);
    ST32(v1+23328, v0);
    sp = sp + 16;
    return;
}

/* 088F98F0 */
u64 func_088F98F0(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F98F0:;
    sp = sp - 32;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s2 = D_08B45B24 - (23332);
    s1 = a0 + 0;
    a0 = D_08AD8CAC - (-29524);
    a0 = a0 - 29524;
    a1 = 512;
    a2 = 0 + 0;
    a3 = 0 + 0;
    cnd_ = v0 != 0;
    s3 = s2 + 23332;
    if (cnd_) { goto L_088F997C; }
    goto L_088F9940;
L_088F9940:;
    v0 = s1 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08B45B24 - (23332);
    if (cnd_) { goto L_088F996C; }
    goto L_088F9950;
L_088F9950:;
    goto L_088F9954;
L_088F9954:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088F996C:;
    a0 = LD32(v0+23332);
    v0 = sceKernelDeleteEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9974;
L_088F9974:;
    goto L_088F9954;
L_088F997C:;
    v0 = sceKernelCreateEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9984;
L_088F9984:;
    ST32(s2+23332, v0);
    ST8(s3+4, 0);
    goto L_088F9940;
}

/* 088F9990 */
rv_t func_088F9990(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9990:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088F98F0(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F99A4;
L_088F99A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F99B0 */
rv_t func_088F99B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F99B0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088F98F0(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F99C4;
L_088F99C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F99D0 */
rv_t func_088F99D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F99D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088F88CC(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F99E4;
L_088F99E4:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088F9A00; }
    goto L_088F99F0;
L_088F99F0:;
    v0 = func_088F9F08(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088F99F8;
L_088F99F8:;
    s0 = v0 + 0;
    { u64 r_ = func_088F88EC(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9A00;
L_088F9A00:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F9A14 */
rv_t func_088F9A14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9A14:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088F88CC(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9A28;
L_088F9A28:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F9A40; }
    goto L_088F9A30;
L_088F9A30:;
    goto L_088F9A34;
L_088F9A34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F9A40:;
    func_088FA3B4(a0);
    goto L_088F9A48;
L_088F9A48:;
    { u64 r_ = func_088F88EC(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9A50;
L_088F9A50:;
    goto L_088F9A34;
}

/* 088F9A58 */
rv_t func_088F9A58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9A58:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_088F88CC(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9A74;
L_088F9A74:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088F9A98; }
    goto L_088F9A84;
L_088F9A84:;
    v0 = func_088FA614(a0, a1, 0, 0, 0, 0, 0);
    goto L_088F9A8C;
L_088F9A8C:;
    s1 = v0 + 0;
    { u64 r_ = func_088F88EC(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9A94;
L_088F9A94:;
    v1 = s1 + 0;
    goto L_088F9A98;
L_088F9A98:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F9AB0 */
rv_t func_088F9AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9AB0:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_088F88CC(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9ACC;
L_088F9ACC:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088F9AEC; }
    goto L_088F9ADC;
L_088F9ADC:;
    v0 = func_088FA87C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088F9AE4;
L_088F9AE4:;
    s0 = v0 + 0;
    { u64 r_ = func_088F88EC(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9AEC;
L_088F9AEC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F9B04 */
u32 func_088F9B04(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088F9B04:;
    v1 = a0 >> 8;
    a1 = v1 - 256;
    a1 = a1 >> 16;
    a1 = a1 & 0x8;
    a2 = 0xffff;
    a2 = a2 < v1;
    v1 = v1 << (a1 & 31);
    v0 = v1 - 4096;
    v0 = v0 >> 16;
    a3 = v0 & 0x4;
    v1 = v1 << (a3 & 31);
    v0 = v1 - 16384;
    v0 = v0 >> 16;
    a1 = a1 + a3;
    a3 = v0 & 0x2;
    v1 = v1 << (a3 & 31);
    v0 = v1 >> 15;
    v0 = ~(0 | v0);
    v1 = v1 >> 14;
    v0 = v1 & v0;
    a1 = a1 + a3;
    v0 = v0 - a1;
    v1 = v0 + 19;
    a0 = a0 >> (v1 & 31);
    a3 = v0 + 13;
    v1 = a3 << 2;
    a0 = a0 & 0x3;
    v0 = v1 + a0;
    cnd_ = a2 != 0;
    v1 = 95;
    if (cnd_) { goto L_088F9B80; }
    goto L_088F9B7C;
L_088F9B7C:;
    v1 = v0 + 32;
    goto L_088F9B80;
L_088F9B80:;
    v0 = v1 + 0;
    return v0;
}

/* 088F9B88 */
void func_088F9B88(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088F9B88:;
    a3 = a0 + 0;
    v0 = a0 + 56;
    v1 = 94;
    goto L_088F9B94;
L_088F9B94:;
    v1 = v1 - 1;
    ST32(v0+12, v0);
    ST32(v0+8, v0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 8;
    if (cnd_) { goto L_088F9B94; }
    goto L_088F9BA8;
L_088F9BA8:;
    v1 = LD32(a3);
    a0 = LD32(a3+868);
    a2 = 0x40000u;
    v1 = v1 & 0x3;
    a0 = a0 | 0x1;
    v1 = v1 | 0x50;
    a1 = a3 + 56;
    v0 = 4096;
    ST32(a3+864, v0);
    ST32(a3+840, a2);
    ST32(a3+868, a0);
    ST32(a3, v1);
    ST32(a3+48, a1);
    ST32(a3+844, 0);
    ST32(a3+856, 0);
    ST32(a3+848, a2);
    return;
}

/* 088F9BEC */
u32 func_088F9BEC(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088F9BEC:;
    sp = sp - 64;
    s6 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a1);
    v1 = LD32(a1+864);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s4 = v1 - 1;
    if (cnd_) { goto L_088F9EF0; }
    goto L_088F9C34;
L_088F9C34:;
    v0 = LD32(a1+48);
    v1 = LD32(a1+868);
    a3 = ~(0 | s4);
    ST32(sp, v0);
    v1 = v1 & 0x1;
    s7 = (u32)-1;
    a0 = LD32(sp);
    v0 = LD32(a1+844);
    ST32(sp+8, a3);
    s5 = (u32)-1;
    v0 = s6 + v0;
    s2 = LD32(a0+4);
    s0 = v0 + 16;
    s2 = (s2 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = s0 - s2;
    if (v1 != 0) s0 = v0;
    v0 = LD32(sp);
    a0 = s0 + s4;
    s0 = a0 & a3;
    cnd_ = (s32)s0 <= 0;
    s3 = v0 + s2;
    if (cnd_) { goto L_088F9C94; }
    goto L_088F9C88;
L_088F9C88:;
    a0 = s0 + 0;
    v0 = func_088F8740(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9C90;
L_088F9C90:;
    s5 = v0 + 0;
    goto L_088F9C94;
L_088F9C94:;
    cnd_ = s5 == s7;
    if (cnd_) { goto L_088F9D54; }
    goto L_088F9C9C;
L_088F9C9C:;
    v0 = LD32(s1+876);
    v0 = v0 + s0;
    cnd_ = s5 != s3;
    ST32(s1+876, v0);
    if (cnd_) { goto L_088F9D64; }
    goto L_088F9CAC;
L_088F9CAC:;
    v1 = LD32(sp);
    v0 = s0 + s2;
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    goto L_088F9CBC;
L_088F9CBC:;
    a0 = LD32(s1+876);
    v0 = LD32(s1+880);
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+880, a0); goto L_088F9CD0; }
    goto L_088F9CD0;
L_088F9CD0:;
    v1 = LD32(s1+872);
    v0 = LD32(s1+888);
    a0 = a0 + v1;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+888, a0); goto L_088F9CE8; }
    goto L_088F9CE8;
L_088F9CE8:;
    a1 = LD32(s1+48);
    v0 = s6 + 16;
    s0 = LD32(a1+4);
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    v0 = s0 - s6;
    if (cnd_) { goto L_088F9D54; }
    goto L_088F9D04;
L_088F9D04:;
    v1 = a1 + s6;
    a0 = s6 | 0x1;
    v0 = v0 | 0x1;
    a2 = a1 + 8;
    ST32(a1+4, a0);
    ST32(s1+48, v1);
    ST32(v1+4, v0);
    goto L_088F9D20;
L_088F9D20:;
    v0 = a2 + 0;
    sp = sp + 64;
    return v0;
L_088F9D54:;
    a0 = s6 + 0;
    func_088F8888(a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9D5C;
L_088F9D5C:;
    a2 = 0 + 0;
    goto L_088F9D20;
L_088F9D64:;
    a0 = LD32(s1+868);
    v1 = 0 < s2;
    fp = 0 + 0;
    v0 = a0 & 0x1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    ST32(sp+4, s5);
    if (cnd_) { goto L_088F9D9C; }
    goto L_088F9D80;
L_088F9D80:;
    v0 = s5 < s3;
    cnd_ = v0 == 0;
    v0 = a0 & 0x1;
    if (cnd_) { goto L_088F9DA0; }
    goto L_088F9D8C;
L_088F9D8C:;
    v0 = a0 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+868, v0);
    a0 = v0 + 0;
    goto L_088F9D9C;
L_088F9D9C:;
    v0 = a0 & 0x1;
    goto L_088F9DA0;
L_088F9DA0:;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088F9ED8; }
    goto L_088F9DA8;
L_088F9DA8:;
    cnd_ = s2 == 0;
    v0 = s5 + 8;
    if (cnd_) { goto L_088F9DC4; }
    goto L_088F9DB0;
L_088F9DB0:;
    v0 = LD32(s1+876);
    v1 = s5 - s3;
    v0 = v0 + v1;
    ST32(s1+876, v0);
    v0 = s5 + 8;
    goto L_088F9DC4;
L_088F9DC4:;
    v1 = v0 & 0xf;
    cnd_ = v1 == 0;
    fp = fp + s2;
    if (cnd_) { goto L_088F9DE4; }
    goto L_088F9DD0;
L_088F9DD0:;
    v0 = 16;
    fp = v0 - v1;
    a0 = s5 + fp;
    ST32(sp+4, a0);
    fp = fp + s2;
    goto L_088F9DE4;
L_088F9DE4:;
    a3 = LD32(sp+8);
    s3 = s5 + s0;
    v1 = s3 + fp;
    v0 = v1 + s4;
    v0 = v0 & a3;
    v0 = v0 - v1;
    fp = fp + v0;
    a0 = fp + 0;
    v0 = func_088F8740(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9E08;
L_088F9E08:;
    s4 = (u32)-1;
    cnd_ = v0 == s4;
    s7 = v0 + 0;
    if (cnd_) { goto L_088F9EAC; }
    goto L_088F9E14;
L_088F9E14:;
    v0 = v0 < s5;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_088F9E38; }
    goto L_088F9E20;
L_088F9E20:;
    v0 = LD32(s1+868);
    s7 = s3 + 0;
    fp = 0 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+868, v0);
    goto L_088F9E34;
L_088F9E34:;
    a2 = (u32)-1;
    goto L_088F9E38;
L_088F9E38:;
    cnd_ = s7 == a2;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_088F9CBC; }
    goto L_088F9E40;
L_088F9E40:;
    a0 = LD32(sp+4);
    v0 = s7 - v1;
    v0 = v0 + fp;
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    v1 = LD32(s1+876);
    ST32(s1+48, a0);
    v1 = v1 + fp;
    cnd_ = s2 == 0;
    ST32(s1+876, v1);
    if (cnd_) { goto L_088F9CBC; }
    goto L_088F9E68;
L_088F9E68:;
    a3 = LD32(sp);
    s2 = s2 - 12;
    s2 = (s2 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    a0 = a3 + s2;
    v1 = 5;
    v0 = s2 | 0x1;
    a1 = s2 < 0x10u;
    ST32(a3+4, v0);
    ST32(a0+8, v1);
    cnd_ = a1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_088F9CBC; }
    goto L_088F9E94;
L_088F9E94:;
    s0 = LD32(s1+840);
    ST32(s1+840, a2);
    a0 = a3 + 8;
    func_088FA3B4(a0);
    goto L_088F9EA4;
L_088F9EA4:;
    ST32(s1+840, s0);
    goto L_088F9CBC;
L_088F9EAC:;
    a0 = 0 + 0;
    v0 = func_088F8740(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088F9EB4;
L_088F9EB4:;
    s7 = v0 + 0;
    cnd_ = v0 == s4;
    fp = 0 + 0;
    if (cnd_) { goto L_088F9E34; }
    goto L_088F9EC0;
L_088F9EC0:;
    v1 = LD32(s1+876);
    v0 = s7 - s5;
    v0 = v0 - s0;
    v1 = v1 + v0;
    ST32(s1+876, v1);
    goto L_088F9E34;
L_088F9ED8:;
    cnd_ = s7 != v0;
    a2 = (u32)-1;
    if (cnd_) { goto L_088F9E38; }
    goto L_088F9EE0;
L_088F9EE0:;
    a0 = 0 + 0;
    v0 = func_088F8740(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9EE8;
L_088F9EE8:;
    s7 = v0 + 0;
    goto L_088F9EC0;
L_088F9EF0:;
    a0 = a1 + 0;
    func_088FA4F8(a0);
    goto L_088F9EF8;
L_088F9EF8:;
    a0 = s6 - 15;
    v0 = func_088F9F08(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088F9F00;
L_088F9F00:;
    a2 = v0 + 0;
    goto L_088F9D20;
}

/* 088F9F08 */
u32 func_088F9F08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088F9F08:;
    sp = sp - 64;
    v1 = D_08B45B30 - (23344);
    v0 = a0 < 0xffffffe0u;
    s3 = v1 + 23344;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FA3A4; }
    goto L_088F9F44;
L_088F9F44:;
    s0 = LD32(v1+23344);
    v0 = a0 + 19;
    a0 = v0 < 0x10u;
    s4 = 16;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    v1 = s0 & 0x1;
    cnd_ = v1 == 0;
    if (a0 == 0) s4 = v0;
    if (cnd_) { goto L_088FA38C; }
    goto L_088F9F64;
L_088F9F64:;
    v0 = s0 < s4;
    cnd_ = v0 != 0;
    s7 = s4 < 0x100u;
    if (cnd_) { goto L_088F9FC0; }
    goto L_088F9F70;
L_088F9F70:;
    v0 = s4 >> 1;
    v1 = v0 + s3;
    s1 = LD32(v1-4);
    cnd_ = s1 == 0;
    a2 = s1 + 8;
    if (cnd_) { goto L_088F9FC0; }
    goto L_088F9F84;
L_088F9F84:;
    v0 = LD32(s1+8);
    ST32(v1-4, v0);
    goto L_088F9F8C;
L_088F9F8C:;
    v0 = a2 + 0;
    sp = sp + 64;
    return v0;
L_088F9FC0:;
    cnd_ = s7 == 0;
    v0 = s4 + s3;
    if (cnd_) { goto L_088FA364; }
    goto L_088F9FC8;
L_088F9FC8:;
    t0 = v0 + 48;
    s1 = LD32(t0+12);
    cnd_ = s1 == t0;
    s5 = s4 >> 3;
    if (cnd_) { goto L_088F9FFC; }
    goto L_088F9FD8;
L_088F9FD8:;
    v1 = s1 + s4;
    v0 = LD32(v1+4);
    a1 = LD32(s1+12);
    a2 = s1 + 8;
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    ST32(a1+8, t0);
    ST32(t0+12, a1);
    goto L_088F9F8C;
L_088F9FFC:;
    s1 = LD32(s3+68);
    goto L_088FA000;
L_088FA000:;
    s6 = s3 + 56;
    cnd_ = s1 == s6;
    v0 = s4 + 16;
    if (cnd_) { goto L_088FA08C; }
    goto L_088FA00C;
L_088FA00C:;
    ST32(sp, v0);
    fp = 1;
    goto L_088FA014;
L_088FA014:;
    s0 = LD32(s1+4);
    a1 = LD32(s1+12);
    cnd_ = s7 == 0;
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_088FA02C; }
    goto L_088FA024;
L_088FA024:;
    cnd_ = a1 == s6;
    if (cnd_) { v0 = LD32(s3+52); goto L_088FA314; }
    goto L_088FA02C;
L_088FA02C:;
    ST32(a1+8, s6);
    goto L_088FA030;
L_088FA030:;
    cnd_ = s0 == s4;
    ST32(s3+68, a1);
    if (cnd_) { goto L_088FA30C; }
    goto L_088FA038;
L_088FA038:;
    s2 = s0 < 0x100u;
    cnd_ = s2 == 0;
    v1 = s0 >> 3;
    if (cnd_) { goto L_088FA290; }
    goto L_088FA044;
L_088FA044:;
    v0 = v1 << 3;
    v0 = s3 + v0;
    a1 = v0 + 48;
    a2 = LD32(a1+8);
    goto L_088FA054;
L_088FA054:;
    v0 = (u32)((s32)v1 >> 5);
    goto L_088FA058;
L_088FA058:;
    ST32(s1+12, a1);
    v0 = v0 << 2;
    v0 = v0 + s3;
    ST32(a2+12, s1);
    v1 = v1 & 0x1f;
    v1 = fp << (v1 & 31);
    a0 = LD32(v0+824);
    ST32(s1+8, a2);
    a0 = a0 | v1;
    ST32(a1+8, s1);
    s1 = LD32(s3+68);
    cnd_ = s1 != s6;
    ST32(v0+824, a0);
    if (cnd_) { goto L_088FA014; }
    goto L_088FA08C;
L_088FA08C:;
    cnd_ = s7 != 0;
    if (cnd_) { s5 = s5 + 1; goto L_088FA0D0; }
    goto L_088FA094;
L_088FA094:;
    v0 = s5 << 3;
    v0 = s3 + v0;
    t0 = v0 + 48;
    s1 = LD32(t0+12);
    cnd_ = s1 == t0;
    a0 = s4 | 0x1;
    if (cnd_) { goto L_088FA0CC; }
    goto L_088FA0AC;
L_088FA0AC:;
    s0 = LD32(s1+4);
    goto L_088FA0B0;
L_088FA0B0:;
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = s0 < s4;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s1+8); goto L_088FA248; }
    goto L_088FA0C0;
L_088FA0C0:;
    s1 = LD32(s1+12);
    cnd_ = s1 != t0;
    if (cnd_) { s0 = LD32(s1+4); goto L_088FA0B0; }
    goto L_088FA0CC;
L_088FA0CC:;
    s5 = s5 + 1;
    goto L_088FA0D0;
L_088FA0D0:;
    t1 = s5 >> 5;
    t2 = t1 << 2;
    a2 = t2 + s3;
    v1 = s5 << 3;
    a3 = LD32(a2+824);
    v1 = s3 + v1;
    a0 = s5 & 0x1f;
    a1 = t1 << 8;
    v0 = 1;
    a0 = v0 << (a0 & 31);
    t0 = v1 + 48;
    a1 = a1 + s3;
    t3 = s4 | 0x1;
    goto L_088FA104;
L_088FA104:;
    v0 = a3 < a0;
    v1 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = a0 & a3;
    if (cnd_) { goto L_088FA150; }
    goto L_088FA118;
L_088FA118:;
    v1 = a2 + 824;
    t1 = t1 + 1;
    goto L_088FA120;
L_088FA120:;
    v0 = t1 < 0x3u;
    t2 = t1 << 2;
    v1 = v1 + 4;
    a2 = a2 + 4;
    cnd_ = v0 == 0;
    a1 = a1 + 256;
    if (cnd_) { goto L_088FA1FC; }
    goto L_088FA138;
L_088FA138:;
    a3 = LD32(v1);
    cnd_ = a3 == 0;
    if (cnd_) { t1 = t1 + 1; goto L_088FA120; }
    goto L_088FA144;
L_088FA144:;
    t0 = a1 + 48;
    a0 = 1;
    v0 = a0 & a3;
    goto L_088FA150;
L_088FA150:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(t0+12); goto L_088FA16C; }
    goto L_088FA158;
L_088FA158:;
    a0 = a0 << 1;
    v0 = a0 & a3;
    cnd_ = v0 == 0;
    t0 = t0 + 8;
    if (cnd_) { goto L_088FA158; }
    goto L_088FA168;
L_088FA168:;
    s1 = LD32(t0+12);
    goto L_088FA16C;
L_088FA16C:;
    cnd_ = s1 != t0;
    v0 = ~(0 | a0);
    if (cnd_) { goto L_088FA18C; }
    goto L_088FA174;
L_088FA174:;
    a3 = a3 & v0;
    t0 = s1 + 8;
    v0 = t2 + s3;
    a0 = a0 << 1;
    ST32(v0+824, a3);
    goto L_088FA104;
L_088FA18C:;
    s0 = LD32(s1+4);
    a1 = LD32(s1+12);
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a3 = s0 - s4;
    v0 = a3 < 0x10u;
    ST32(a1+8, t0);
    cnd_ = v0 != 0;
    ST32(t0+12, a1);
    if (cnd_) { goto L_088FA1E4; }
    goto L_088FA1AC;
L_088FA1AC:;
    a1 = s1 + s4;
    ST32(s3+64, a1);
    ST32(s3+68, a1);
    ST32(a1+8, s6);
    cnd_ = s7 == 0;
    ST32(a1+12, s6);
    if (cnd_) { goto L_088FA1C8; }
    goto L_088FA1C4;
L_088FA1C4:;
    ST32(s3+52, a1);
    goto L_088FA1C8;
L_088FA1C8:;
    v0 = a1 + a3;
    v1 = a3 | 0x1;
    a2 = s1 + 8;
    ST32(s1+4, t3);
    ST32(v0, a3);
    goto L_088FA1DC;
L_088FA1DC:;
    ST32(a1+4, v1);
    goto L_088F9F8C;
L_088FA1E4:;
    v1 = s1 + s0;
    goto L_088FA1E8;
L_088FA1E8:;
    v0 = LD32(v1+4);
    a2 = s1 + 8;
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    goto L_088F9F8C;
L_088FA1FC:;
    s1 = LD32(s3+48);
    goto L_088FA200;
L_088FA200:;
    v0 = s4 + 16;
    s0 = LD32(s1+4);
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a3 = s0 - s4;
    if (cnd_) { goto L_088FA234; }
    goto L_088FA218;
L_088FA218:;
    a1 = s1 + s4;
    v0 = s4 | 0x1;
    v1 = a3 | 0x1;
    a2 = s1 + 8;
    ST32(s1+4, v0);
    ST32(s3+48, a1);
    goto L_088FA1DC;
L_088FA234:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    v0 = func_088F9BEC(a0, a1, a2, t0, t1, t2, t3);
    goto L_088FA240;
L_088FA240:;
    a2 = v0 + 0;
    goto L_088F9F8C;
L_088FA248:;
    a1 = LD32(s1+12);
    a3 = s0 - s4;
    v0 = a3 < 0x10u;
    ST32(a1+8, a2);
    cnd_ = v0 != 0;
    ST32(a2+12, a1);
    if (cnd_) { goto L_088FA1E4; }
    goto L_088FA260;
L_088FA260:;
    a1 = s1 + s4;
    v0 = a1 + a3;
    v1 = a3 | 0x1;
    a2 = s1 + 8;
    ST32(s3+68, a1);
    ST32(s1+4, a0);
    ST32(v0, a3);
    ST32(a1+12, s6);
    ST32(a1+4, v1);
    ST32(s3+64, a1);
    goto L_088FA288;
L_088FA288:;
    ST32(a1+8, s6);
    goto L_088F9F8C;
L_088FA290:;
    a0 = s0 + 0;
    v0 = func_088F9B04(a0);
    goto L_088FA298;
L_088FA298:;
    v1 = v0 + 0;
    v0 = v0 << 3;
    v0 = s3 + v0;
    a1 = v0 + 48;
    a2 = LD32(a1+8);
    cnd_ = a2 == a1;
    v0 = (u32)((s32)v1 >> 5);
    if (cnd_) { goto L_088FA058; }
    goto L_088FA2B4;
L_088FA2B4:;
    a0 = LD32(a1+12);
    v0 = LD32(a0+4);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FA2D4; }
    goto L_088FA2C8;
L_088FA2C8:;
    a2 = a1 + 0;
    a1 = a0 + 0;
    goto L_088FA054;
L_088FA2D4:;
    cnd_ = s2 != 0;
    v0 = (u32)((s32)v1 >> 5);
    if (cnd_) { goto L_088FA058; }
    goto L_088FA2DC;
L_088FA2DC:;
    v0 = LD32(a2+4);
    s0 = s0 | 0x1;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(a2+12); goto L_088FA054; }
    goto L_088FA2F0;
L_088FA2F0:;
    a2 = LD32(a2+8);
    goto L_088FA2F4;
L_088FA2F4:;
    v0 = LD32(a2+4);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+8); goto L_088FA2F4; }
    goto L_088FA304;
L_088FA304:;
    a1 = LD32(a2+12);
    goto L_088FA054;
L_088FA30C:;
    v1 = s1 + s4;
    goto L_088FA1E8;
L_088FA314:;
    cnd_ = s1 != v0;
    if (cnd_) { ST32(a1+8, s6); goto L_088FA030; }
    goto L_088FA31C;
L_088FA31C:;
    v1 = LD32(sp);
    v0 = v1 < s0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1+8, s6); goto L_088FA030; }
    goto L_088FA32C;
L_088FA32C:;
    a1 = s1 + s4;
    a3 = s0 - s4;
    v0 = s4 | 0x1;
    v1 = a1 + a3;
    a0 = a3 | 0x1;
    ST32(s3+52, a1);
    a2 = s1 + 8;
    ST32(s1+4, v0);
    ST32(s3+68, a1);
    ST32(v1, a3);
    ST32(a1+4, a0);
    ST32(s3+64, a1);
    ST32(a1+12, s6);
    goto L_088FA288;
L_088FA364:;
    a0 = s4 + 0;
    v0 = func_088F9B04(a0);
    goto L_088FA36C;
L_088FA36C:;
    s5 = v0 + 0;
    v0 = s0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(s3+68); goto L_088FA000; }
    goto L_088FA37C;
L_088FA37C:;
    a0 = s3 + 0;
    func_088FA4F8(a0);
    goto L_088FA384;
L_088FA384:;
    s1 = LD32(s3+68);
    goto L_088FA000;
L_088FA38C:;
    cnd_ = s0 != 0;
    if (cnd_) { s1 = LD32(s3+48); goto L_088FA200; }
    goto L_088FA394;
L_088FA394:;
    a0 = s3 + 0;
    func_088FA4F8(a0);
    goto L_088FA39C;
L_088FA39C:;
    s1 = LD32(s3+48);
    goto L_088FA200;
L_088FA3A4:;
    func_088F8888(a1, a2, a3, t0, t1, t2, t3);
    goto L_088FA3AC;
L_088FA3AC:;
    a2 = 0 + 0;
    goto L_088F9F8C;
}

/* 088FA3B4 */
void func_088FA3B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FA3B4:;
    sp = sp - 16;
    t0 = D_08B45B30 - (23344);
    cnd_ = a0 == 0;
    t3 = t0 + 23344;
    if (cnd_) { goto L_088FA408; }
    goto L_088FA3C8;
L_088FA3C8:;
    a2 = a0 - 8;
    a1 = LD32(a2+4);
    v1 = LD32(t0+23344);
    a3 = a1 + 0;
    a3 = (a3 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = v1 < a3;
    cnd_ = v0 != 0;
    v0 = a1 & 0x2;
    if (cnd_) { goto L_088FA414; }
    goto L_088FA3E8;
L_088FA3E8:;
    v0 = a3 >> 3;
    v0 = v0 << 2;
    v0 = v0 + t3;
    a0 = LD32(v0-4);
    v1 = v1 | 0x3;
    ST32(t0+23344, v1);
    ST32(a2+8, a0);
    ST32(v0-4, a2);
    goto L_088FA408;
L_088FA408:;
    goto L_088FA40C;
L_088FA40C:;
    sp = sp + 16;
    return;
L_088FA414:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FA40C; }
    goto L_088FA41C;
L_088FA41C:;
    v0 = v1 | 0x1;
    ST32(t0+23344, v0);
    t1 = a2 + a3;
    v0 = LD32(a2+4);
    t2 = LD32(t1+4);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    t2 = (t2 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_088FA458; }
    goto L_088FA43C;
L_088FA43C:;
    v0 = LD32(a0-8);
    a2 = a2 - v0;
    t0 = LD32(a2+8);
    a1 = LD32(a2+12);
    a3 = a3 + v0;
    ST32(a1+8, t0);
    ST32(t0+12, a1);
    goto L_088FA458;
L_088FA458:;
    v0 = LD32(t3+48);
    cnd_ = t1 == v0;
    v1 = t1 + t2;
    if (cnd_) { goto L_088FA4E4; }
    goto L_088FA464;
L_088FA464:;
    v0 = LD32(v1+4);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    ST32(t1+4, t2);
    if (cnd_) { goto L_088FA488; }
    goto L_088FA474;
L_088FA474:;
    a1 = LD32(t1+12);
    t0 = LD32(t1+8);
    a3 = a3 + t2;
    ST32(a1+8, t0);
    ST32(t0+12, a1);
    goto L_088FA488;
L_088FA488:;
    a1 = t3 + 56;
    t0 = LD32(a1+8);
    v1 = a2 + a3;
    v0 = a3 | 0x1;
    ST32(a2+12, a1);
    ST32(a2+8, t0);
    ST32(a2+4, v0);
    ST32(v1, a3);
    ST32(t0+12, a2);
    ST32(a1+8, a2);
    goto L_088FA4B0;
L_088FA4B0:;
    v0 = 0x10000u;
    v0 = v0 | 0xffff;
    v0 = v0 < a3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FA40C; }
    goto L_088FA4C4;
L_088FA4C4:;
    v0 = LD32(t3);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FA40C; }
    goto L_088FA4D4;
L_088FA4D4:;
    a0 = t3 + 0;
    func_088FA4F8(a0);
    goto L_088FA4DC;
L_088FA4DC:;
    goto L_088FA40C;
L_088FA4E4:;
    a3 = a3 + t2;
    v0 = a3 | 0x1;
    ST32(a2+4, v0);
    ST32(t3+48, a2);
    goto L_088FA4B0;
}

/* 088FA4F8 */
void func_088FA4F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FA4F8:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    t3 = a0 + 0;
    if (cnd_) { goto L_088FA604; }
    goto L_088FA50C;
L_088FA50C:;
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v0 = v1 >> 3;
    v0 = v0 << 2;
    ST32(a0, v1);
    v0 = a0 + v0;
    t5 = v0 - 4;
    t1 = a0 + 56;
    t4 = a0 + 4;
    goto L_088FA52C;
L_088FA52C:;
    a1 = LD32(t4);
    cnd_ = a1 == 0;
    v0 = t4 + 0;
    if (cnd_) { goto L_088FA5E0; }
    goto L_088FA538;
L_088FA538:;
    ST32(t4, 0);
    goto L_088FA53C;
L_088FA53C:;
    v0 = LD32(a1+4);
    t2 = LD32(a1+8);
    a2 = v0 + 0;
    a2 = (a2 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = a1 + a2;
    a3 = LD32(a0+4);
    v0 = v0 & 0x1;
    a3 = (a3 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    cnd_ = v0 != 0;
    t0 = a0 + a3;
    if (cnd_) { goto L_088FA580; }
    goto L_088FA564;
L_088FA564:;
    v0 = LD32(a1);
    a1 = a1 - v0;
    v1 = LD32(a1+8);
    a2 = a2 + v0;
    v0 = LD32(a1+12);
    ST32(v0+8, v1);
    ST32(v1+12, v0);
    goto L_088FA580;
L_088FA580:;
    v0 = LD32(t3+48);
    cnd_ = a0 == v0;
    if (cnd_) { a2 = a2 + a3; goto L_088FA5F4; }
    goto L_088FA58C;
L_088FA58C:;
    v0 = LD32(t0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    ST32(a0+4, a3);
    if (cnd_) { goto L_088FA5B0; }
    goto L_088FA59C;
L_088FA59C:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a2 = a2 + a3;
    ST32(v0+8, v1);
    ST32(v1+12, v0);
    goto L_088FA5B0;
L_088FA5B0:;
    v0 = LD32(t1+8);
    v1 = a1 + a2;
    a0 = a2 | 0x1;
    ST32(t1+8, a1);
    ST32(v0+12, a1);
    ST32(v1, a2);
    ST32(a1+4, a0);
    ST32(a1+8, v0);
    ST32(a1+12, t1);
    goto L_088FA5D4;
L_088FA5D4:;
    cnd_ = t2 != 0;
    a1 = t2 + 0;
    if (cnd_) { goto L_088FA53C; }
    goto L_088FA5DC;
L_088FA5DC:;
    v0 = t4 + 0;
    goto L_088FA5E0;
L_088FA5E0:;
    cnd_ = v0 != t5;
    t4 = t4 + 4;
    if (cnd_) { goto L_088FA52C; }
    goto L_088FA5E8;
L_088FA5E8:;
    goto L_088FA5EC;
L_088FA5EC:;
    sp = sp + 16;
    return;
L_088FA5F4:;
    v0 = a2 | 0x1;
    ST32(t3+48, a1);
    ST32(a1+4, v0);
    goto L_088FA5D4;
L_088FA604:;
    func_088F9B88(a0);
    goto L_088FA60C;
L_088FA60C:;
    goto L_088FA5EC;
}

/* 088FA614 */
u32 func_088FA614(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FA614:;
    sp = sp - 32;
    v0 = D_08B45B30 - (23344);
    a2 = v0 + 23344;
    s3 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088FA86C; }
    goto L_088FA644;
L_088FA644:;
    v0 = a1 < 0xffffffe0u;
    cnd_ = v0 == 0;
    s2 = a0 - 8;
    if (cnd_) { goto L_088FA85C; }
    goto L_088FA650;
L_088FA650:;
    a3 = LD32(s2+4);
    v0 = a1 + 19;
    a0 = v0 < 0x10u;
    s4 = 16;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    s0 = a3 + 0;
    v1 = a3 & 0x2;
    if (a0 == 0) s4 = v0;
    cnd_ = v1 != 0;
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_088FA85C; }
    goto L_088FA678;
L_088FA678:;
    v0 = s0 < s4;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088FA6D4; }
    goto L_088FA684;
L_088FA684:;
    v0 = LD32(a2+48);
    s1 = s2 + s0;
    cnd_ = s1 == v0;
    if (cnd_) { v0 = LD32(s1+4); goto L_088FA820; }
    goto L_088FA694;
L_088FA694:;
    a0 = LD32(s1+4);
    v0 = a0 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    a0 = (a0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_088FA75C; }
    goto L_088FA6B4;
L_088FA6B4:;
    a0 = s0 + a0;
    v0 = a0 < s4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FA75C; }
    goto L_088FA6C4;
L_088FA6C4:;
    v1 = LD32(s1+12);
    v0 = LD32(s1+8);
    ST32(v1+8, v0);
    ST32(v0+12, v1);
    goto L_088FA6D4;
L_088FA6D4:;
    a2 = a0 - s4;
    v0 = a2 < 0x10u;
    cnd_ = v0 == 0;
    v0 = a3 & 0x1;
    if (cnd_) { goto L_088FA728; }
    goto L_088FA6E4;
L_088FA6E4:;
    v0 = v0 | a0;
    ST32(s2+4, v0);
    v1 = s2 + a0;
    v0 = LD32(v1+4);
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    a1 = s2 + 8;
    goto L_088FA700;
L_088FA700:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_088FA728:;
    v1 = s2 + s4;
    v0 = v0 | s4;
    a1 = a2 | 0x1;
    ST32(s2+4, v0);
    a2 = v1 + a2;
    a0 = v1 + 8;
    ST32(v1+4, a1);
    v0 = LD32(a2+4);
    v0 = v0 | 0x1;
    ST32(a2+4, v0);
    func_088FA3B4(a0);
    goto L_088FA754;
L_088FA754:;
    a1 = s2 + 8;
    goto L_088FA700;
L_088FA75C:;
    a0 = s4 - 15;
    v0 = func_088F9F08(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FA764;
L_088FA764:;
    a3 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088FA700; }
    goto L_088FA770;
L_088FA770:;
    s5 = v0 - 8;
    a0 = LD32(s5+4);
    cnd_ = s5 == s1;
    a0 = (a0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_088FA814; }
    goto L_088FA780;
L_088FA780:;
    a2 = s0 - 4;
    a1 = a2 >> 2;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_088FA804; }
    goto L_088FA794;
L_088FA794:;
    v1 = LD32(s3);
    a0 = a1 < 0x5u;
    ST32(a3, v1);
    v0 = LD32(s3+4);
    ST32(a3+4, v0);
    v1 = LD32(s3+8);
    cnd_ = a0 != 0;
    ST32(a3+8, v1);
    if (cnd_) { goto L_088FA7F4; }
    goto L_088FA7B4;
L_088FA7B4:;
    v0 = LD32(s3+12);
    a0 = a1 < 0x7u;
    ST32(a3+12, v0);
    v1 = LD32(s3+16);
    cnd_ = a0 != 0;
    ST32(a3+16, v1);
    if (cnd_) { goto L_088FA7F4; }
    goto L_088FA7CC;
L_088FA7CC:;
    v0 = LD32(s3+20);
    a0 = a1 < 0x9u;
    ST32(a3+20, v0);
    v1 = LD32(s3+24);
    cnd_ = a0 != 0;
    ST32(a3+24, v1);
    if (cnd_) { goto L_088FA7F4; }
    goto L_088FA7E4;
L_088FA7E4:;
    v0 = LD32(s3+28);
    ST32(a3+28, v0);
    v1 = LD32(s3+32);
    ST32(a3+32, v1);
    goto L_088FA7F4;
L_088FA7F4:;
    a0 = s3 + 0;
    func_088FA3B4(a0);
    goto L_088FA7FC;
L_088FA7FC:;
    a1 = s5 + 8;
    goto L_088FA700;
L_088FA804:;
    a1 = s3 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_088FA80C;
L_088FA80C:;
    goto L_088FA7F4;
L_088FA814:;
    a3 = LD32(s2+4);
    a0 = a0 + s0;
    goto L_088FA6D4;
L_088FA820:;
    v1 = s4 + 16;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a0 = s0 + v0;
    v1 = a0 < v1;
    cnd_ = v1 != 0;
    v0 = a0 - s4;
    if (cnd_) { goto L_088FA75C; }
    goto L_088FA838;
L_088FA838:;
    v1 = a3 & 0x1;
    a0 = s2 + s4;
    v1 = v1 | s4;
    v0 = v0 | 0x1;
    a1 = s3 + 0;
    ST32(s2+4, v1);
    ST32(a2+48, a0);
    ST32(a0+4, v0);
    goto L_088FA700;
L_088FA85C:;
    a0 = a1 + 0;
    func_088F8888(a1, a2, a3, t0, t1, t2, t3);
    goto L_088FA864;
L_088FA864:;
    a1 = 0 + 0;
    goto L_088FA700;
L_088FA86C:;
    a0 = a1 + 0;
    v0 = func_088F9F08(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FA874;
L_088FA874:;
    a1 = v0 + 0;
    goto L_088FA700;
}

/* 088FA87C */
u32 func_088FA87C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, ra = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FA87C:;
    sp = sp - 16;
    v0 = a0 < 0x11u;
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FAA20; }
    goto L_088FA89C;
L_088FA89C:;
    a0 = a0 < 0x10u;
    v1 = 16;
    if (a0 != 0) s0 = v1;
    v0 = s0 - 1;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    v0 = a1 < 0xffffffe0u;
    if (cnd_) { goto L_088FA8E0; }
    goto L_088FA8B8;
L_088FA8B8:;
    v1 = 32;
    v0 = v1 < s0;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = v1 + 0; goto L_088FA8DC; }
    goto L_088FA8C8;
L_088FA8C8:;
    v1 = v1 << 1;
    goto L_088FA8CC;
L_088FA8CC:;
    v0 = v1 < s0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v1 << 1; goto L_088FA8CC; }
    goto L_088FA8D8;
L_088FA8D8:;
    s0 = v1 + 0;
    goto L_088FA8DC;
L_088FA8DC:;
    v0 = a1 < 0xffffffe0u;
    goto L_088FA8E0;
L_088FA8E0:;
    cnd_ = v0 == 0;
    v0 = a1 + 19;
    if (cnd_) { goto L_088FAA10; }
    goto L_088FA8E8;
L_088FA8E8:;
    v1 = v0 < 0x10u;
    s2 = 16;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    if (v1 == 0) s2 = v0;
    a0 = s2 + s0;
    a0 = a0 + 16;
    v0 = func_088F9F08(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FA904;
L_088FA904:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088FA974; }
    goto L_088FA910;
L_088FA910:;
    { u32 x_ = v0, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = hi;
    cnd_ = v0 == 0;
    s1 = a0 - 8;
    if (cnd_) { goto L_088FA9C0; }
    goto L_088FA920;
L_088FA920:;
    v0 = a0 + s0;
    v0 = v0 - 1;
    v1 = 0 - s0;
    v0 = v0 & v1;
    a2 = v0 - 8;
    a3 = a2 - s1;
    v0 = a3 < 0x10u;
    cnd_ = v0 == 0;
    v0 = LD32(s1+4);
    if (cnd_) { goto L_088FA94C; }
    goto L_088FA944;
L_088FA944:;
    a2 = a2 + s0;
    a3 = a2 - s1;
    goto L_088FA94C;
L_088FA94C:;
    v1 = v0 & 0x2;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    cnd_ = v1 == 0;
    a1 = v0 - a3;
    if (cnd_) { goto L_088FA990; }
    goto L_088FA95C;
L_088FA95C:;
    v0 = LD32(a0-8);
    v1 = a1 | 0x2;
    a1 = a2 + 8;
    v0 = v0 + a3;
    ST32(a2, v0);
    ST32(a2+4, v1);
    goto L_088FA974;
L_088FA974:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_088FA990:;
    v0 = a1 | 0x1;
    ST32(a2+4, v0);
    a1 = a2 + a1;
    v0 = LD32(a1+4);
    v0 = v0 | 0x1;
    ST32(a1+4, v0);
    v1 = LD32(s1+4);
    v1 = v1 & 0x1;
    v1 = v1 | a3;
    ST32(s1+4, v1);
    s1 = a2 + 0;
    func_088FA3B4(a0);
    goto L_088FA9C0;
L_088FA9C0:;
    v1 = LD32(s1+4);
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    a1 = s1 + 8;
    if (cnd_) { goto L_088FA974; }
    goto L_088FA9D0;
L_088FA9D0:;
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = s2 + 16;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = v1 - s2;
    if (cnd_) { goto L_088FA974; }
    goto L_088FA9E4;
L_088FA9E4:;
    v0 = v0 | 0x1;
    a0 = s1 + s2;
    ST32(a0+4, v0);
    a0 = a0 + 8;
    v0 = LD32(s1+4);
    v0 = v0 & 0x1;
    v0 = v0 | s2;
    ST32(s1+4, v0);
    func_088FA3B4(a0);
    goto L_088FAA08;
L_088FAA08:;
    a1 = s1 + 8;
    goto L_088FA974;
L_088FAA10:;
    a0 = a1 + 0;
    func_088F8888(a1, a2, a3, t0, t1, t2, t3);
    goto L_088FAA18;
L_088FAA18:;
    a1 = 0 + 0;
    goto L_088FA974;
L_088FAA20:;
    a0 = a1 + 0;
    v0 = func_088F9F08(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FAA28;
L_088FAA28:;
    a1 = v0 + 0;
    goto L_088FA974;
L_088FAA30:;
    sp = sp - 16;
    v0 = D_08B45B30 - (23344);
    ST32(sp+8, s2);
    s2 = v0 + 23344;
    ST32(sp, s0);
    s0 = a0 + 0;
    s0 = s0 + 4;
    a0 = s2 + 0;
    ST32(sp+4, s1);
    ST32(sp+12, ra);
    s1 = a1 + 0;
    func_088FA4F8(a0);
    goto L_088FAA60;
L_088FAA60:;
    v0 = s0 < 0x6u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FAAC4; }
    goto L_088FAA6C;
L_088FAA6C:;
    v1 = D_08AD8D14 - (-29420);
    v0 = s0 << 2;
    v1 = v1 - 29420;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088FAA88u: goto L_088FAA88; case 0x088FAAE0u: goto L_088FAAE0; case 0x088FAAF4u: goto L_088FAAF4; case 0x088FAB00u: goto L_088FAB00; case 0x088FAB0Cu: goto L_088FAB0C; case 0x088FAB18u: goto L_088FAB18; default: rs_break(0, 0x088faa80); }
L_088FAA88:;
    v0 = s1 < 0x51u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FAAC4; }
    goto L_088FAA94;
L_088FAA94:;
    v0 = LD32(s2);
    a0 = v0 & 0x3;
    cnd_ = s1 == 0;
    v0 = a0 | 0x8;
    if (cnd_) { goto L_088FAABC; }
    goto L_088FAAA4;
L_088FAAA4:;
    v0 = s1 + 19;
    v1 = v0 < 0x10u;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    cnd_ = v1 == 0;
    v0 = v0 | a0;
    if (cnd_) { goto L_088FAABC; }
    goto L_088FAAB8;
L_088FAAB8:;
    v0 = a0 | 0x10;
    goto L_088FAABC;
L_088FAABC:;
    v1 = 1;
    ST32(s2, v0);
    goto L_088FAAC4;
L_088FAAC4:;
    ra = LD32(sp+12);
    s2 = LD32(sp+8);
    s1 = LD32(sp+4);
    s0 = LD32(sp);
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088FAAE0:;
    cnd_ = s1 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FAAC4; }
    goto L_088FAAE8;
L_088FAAE8:;
    v1 = 1;
    ST32(s2+856, 0);
    goto L_088FAAC4;
L_088FAAF4:;
    v1 = 1;
    ST32(s2+848, s1);
    goto L_088FAAC4;
L_088FAB00:;
    v1 = 1;
    ST32(s2+844, s1);
    goto L_088FAAC4;
L_088FAB0C:;
    v1 = 1;
    ST32(s2+840, s1);
    goto L_088FAAC4;
L_088FAB18:;
    v1 = 0 + 0;
    goto L_088FAAC4;
}

/* 088FAB20 */
void func_088FAB20(void)
{
L_088FAB20:;
    return;
}

/* 088FAB28 */
void func_088FAB28(void)
{
L_088FAB28:;
    return;
}

/* 088FAB30 */
void func_088FAB30(void)
{
L_088FAB30:;
    return;
}

/* 088FAB38 */
void func_088FAB38(void)
{
L_088FAB38:;
    return;
}

/* 088FAB40 */
void func_088FAB40(u32 a0)
{
L_088FAB40:;
    ST32(a0+12, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 088FAB54 */
rv_t func_088FAB54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FAB54:;
    sp = sp - 16;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FAB74; }
    goto L_088FAB68;
L_088FAB68:;
    goto L_088FAB6C;
L_088FAB6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088FAB74:;
    { rv_t r_ = func_088FABB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FAB7C;
L_088FAB7C:;
    goto L_088FAB6C;
}

/* 088FAB84 */
void func_088FAB84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FAB84:;
    v1 = a1 + 0;
    ST32(a0+12, t0);
    sp = sp - 16;
    ST32(a0, v1);
    ST32(a0+8, a3);
    a1 = a2 + 0;
    func_088FAC20(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088FABA4;
L_088FABA4:;
    sp = sp + 16;
    return;
}

/* 088FABB0 */
rv_t func_088FABB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FABB0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088FABE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FABC4;
L_088FABC4:;
    ST32(s0+12, 0);
    ST32(s0, 0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FABE4 */
rv_t func_088FABE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FABE4:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088FAC10; }
    goto L_088FABFC;
L_088FABFC:;
    ST32(s0+4, 0);
    goto L_088FAC00;
L_088FAC00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088FAC10:;
    t_ = v0;
    a0 = LD32(a0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FAC18;
L_088FAC18:;
    ST32(s0+4, 0);
    goto L_088FAC00;
}

/* 088FAC20 */
void func_088FAC20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FAC20:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088FAC5C; }
    goto L_088FAC44;
L_088FAC44:;
    ST32(s1+4, s0);
    goto L_088FAC48;
L_088FAC48:;
    sp = sp + 16;
    return;
L_088FAC5C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FAC64;
L_088FAC64:;
    ST32(s1+4, s0);
    goto L_088FAC48;
}

/* 088FAC6C */
void func_088FAC6C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FAC6C:;
    sp = sp - 32;
    v0 = D_08B45EAD - (24237);
    v1 = LD_U8(v0+24237);
    cnd_ = v1 == 0;
    s0 = D_08B45EB0 - (24240);
    if (cnd_) { goto L_088FACA4; }
    goto L_088FAC88;
L_088FAC88:;
    v1 = 1;
    v0 = D_08B45EAE - (24238);
    ST8(v0+24238, v1);
    goto L_088FAC94;
L_088FAC94:;
    sp = sp + 32;
    return;
L_088FACA4:;
    v0 = LD32(s0+24240);
    a2 = D_08B45EB4 - (24244);
    a2 = a2 + 24244;
    a0 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_088FACCC; }
    goto L_088FACBC;
L_088FACBC:;
    v1 = 1;
    goto L_088FACC0;
L_088FACC0:;
    v0 = D_08B45EAC - (24236);
    ST8(v0+24236, v1);
    goto L_088FAC94;
L_088FACCC:;
    v0 = sceKernelVolatileMemLock(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FACD4;
L_088FACD4:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088FACC0; }
    goto L_088FACDC;
L_088FACDC:;
    v0 = LD32(sp);
    ST32(s0+24240, v0);
    goto L_088FACC0;
}

/* 088FACE8 */
void func_088FACE8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FACE8:;
    sp = sp - 32;
    s3 = D_08B45EB0 - (24240);
    v0 = LD32(s3+24240);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FAD60; }
    goto L_088FAD0C;
L_088FAD0C:;
    s2 = D_08B45EBC - (24252);
    v0 = LD32(s2+24252);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088FAD40; }
    goto L_088FAD1C;
L_088FAD1C:;
    v0 = D_08B45EC0 - (24256);
    s0 = v0 + 24256;
    goto L_088FAD24;
L_088FAD24:;
    a0 = s0 + 0;
    { rv_t r_ = func_088FABB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FAD2C;
L_088FAD2C:;
    v0 = LD32(s2+24252);
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_088FAD24; }
    goto L_088FAD40;
L_088FAD40:;
    v0 = D_08B45EB8 - (24248);
    v1 = D_08B45EB4 - (24244);
    a0 = 0 + 0;
    ST32(s3+24240, 0);
    ST32(s2+24252, 0);
    ST32(v0+24248, 0);
    ST32(v1+24244, 0);
    v0 = sceKernelVolatileMemUnlock(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FAD60;
L_088FAD60:;
    v0 = D_08B45EAC - (24236);
    ST8(v0+24236, 0);
    sp = sp + 32;
    return;
}

/* 088FAD84 */
u32 func_088FAD84(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FAD84:;
    sp = sp - 16;
    v0 = D_08B45EB0 - (24240);
    t4 = D_08B45EBC - (24252);
    t3 = a0 + 0;
    a3 = a1 + 0;
    t0 = a2 + 0;
    t2 = LD32(v0+24240);
    cnd_ = t2 == 0;
    t1 = (u32)-1;
    if (cnd_) { goto L_088FAE00; }
    goto L_088FADB4;
L_088FADB4:;
    v0 = LD32(t4+24252);
    cnd_ = v0 != 0;
    s1 = D_08B45EB8 - (24248);
    if (cnd_) { goto L_088FAE00; }
    goto L_088FADC0;
L_088FADC0:;
    t1 = LD32(s1+24248);
    v0 = D_08B45EB4 - (24244);
    v1 = LD32(v0+24244);
    s0 = t1 + t3;
    a0 = D_08B45EC0 - (24256);
    v1 = v1 < s0;
    a2 = t2 + t1;
    a0 = a0 + 24256;
    a1 = t3 + 0;
    cnd_ = v1 != 0;
    t1 = (u32)-1;
    if (cnd_) { goto L_088FAE00; }
    goto L_088FADEC;
L_088FADEC:;
    v0 = 1;
    ST32(t4+24252, v0);
    func_088FAB84(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088FADF8;
L_088FADF8:;
    t1 = 0 + 0;
    ST32(s1+24248, s0);
    goto L_088FAE00;
L_088FAE00:;
    v0 = t1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088FAE18 */
void func_088FAE18(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FAE18:;
    sp = sp - 16;
    v0 = D_08B45EB0 - (24240);
    s1 = (u32)-1;
    a2 = 0 + 0;
    v1 = LD32(v0+24240);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088FAE8C; }
    goto L_088FAE44;
L_088FAE44:;
    a1 = LD32(a0);
    v0 = D_08B45EC0 - (24256);
    v0 = v0 + 24256;
    v1 = a1 << 4;
    v1 = v1 + v0;
    cnd_ = a1 == s1;
    a0 = v1 + 0;
    if (cnd_) { goto L_088FAE8C; }
    goto L_088FAE60;
L_088FAE60:;
    s2 = LD32(v1);
    { rv_t r_ = func_088FABB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FAE68;
L_088FAE68:;
    a0 = D_08B45EBC - (24252);
    v1 = LD32(a0+24252);
    a1 = D_08B45EB8 - (24248);
    v1 = v1 - 1;
    ST32(a0+24252, v1);
    v0 = LD32(s0);
    cnd_ = v0 == v1;
    a2 = 1;
    if (cnd_) { goto L_088FAEA8; }
    goto L_088FAE88;
L_088FAE88:;
    ST32(s0, s1);
    goto L_088FAE8C;
L_088FAE8C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return;
L_088FAEA8:;
    v0 = LD32(a1+24248);
    v0 = v0 - s2;
    ST32(a1+24248, v0);
    goto L_088FAE88;
}

/* 088FAEB8 */
void func_088FAEB8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FAEB8:;
    sp = sp - 16;
    v0 = D_08B45EAC - (24236);
    v1 = 1;
    a0 = LD_U8(v0+24236);
    v0 = D_08B45EAD - (24237);
    cnd_ = a0 == 0;
    ST8(v0+24237, v1);
    if (cnd_) { goto L_088FAF54; }
    goto L_088FAEE4;
L_088FAEE4:;
    v1 = D_08B45EBC - (24252);
    v0 = LD32(v1+24252);
    cnd_ = v0 == 0;
    s0 = 1;
    if (cnd_) { goto L_088FAF34; }
    goto L_088FAEF4;
L_088FAEF4:;
    v0 = D_08B45EC0 - (24256);
    s1 = v1 + 0;
    s2 = v0 + 24256;
    v0 = LD32(s1+24252);
    goto L_088FAF04;
L_088FAF04:;
    v0 = v0 - s0;
    v0 = v0 << 4;
    v0 = v0 + s2;
    s0 = s0 + 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088FAF24; }
    goto L_088FAF1C;
L_088FAF1C:;
    { rv_t r_ = func_088FABE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FAF24;
L_088FAF24:;
    v0 = LD32(s1+24252);
    v0 = v0 < s0;
    cnd_ = v0 == 0;
    v0 = LD32(s1+24252);
    if (cnd_) { goto L_088FAF04; }
    goto L_088FAF34;
L_088FAF34:;
    v0 = D_08B45EB8 - (24248);
    ST32(v0+24248, 0);
    v1 = D_08B45EB4 - (24244);
    v0 = D_08B45EB0 - (24240);
    a0 = 0 + 0;
    ST32(v1+24244, 0);
    ST32(v0+24240, 0);
    v0 = sceKernelVolatileMemUnlock(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FAF54;
L_088FAF54:;
    sp = sp + 16;
    return;
}

/* 088FAF6C */
void func_088FAF6C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FAF6C:;
    sp = sp - 48;
    a0 = D_08B45EAE - (24238);
    v0 = D_08B45EAD - (24237);
    v1 = LD_U8(a0+24238);
    cnd_ = v1 != 0;
    ST8(v0+24237, 0);
    if (cnd_) { goto L_088FB050; }
    goto L_088FAF9C;
L_088FAF9C:;
    v0 = D_08B45EAC - (24236);
    v1 = LD_U8(v0+24236);
    cnd_ = v1 != 0;
    a2 = D_08B45EB4 - (24244);
    if (cnd_) { goto L_088FAFCC; }
    goto L_088FAFAC;
L_088FAFAC:;
    goto L_088FAFB0;
L_088FAFB0:;
    sp = sp + 48;
    return;
L_088FAFCC:;
    a2 = a2 + 24244;
    a0 = 0 + 0;
    a1 = sp + 0;
    v0 = sceKernelVolatileMemLock(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FAFDC;
L_088FAFDC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FAFB0; }
    goto L_088FAFE4;
L_088FAFE4:;
    s3 = D_08B45EBC - (24252);
    v0 = LD32(sp);
    v1 = LD32(s3+24252);
    s4 = D_08B45EB0 - (24240);
    ST32(s4+24240, v0);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088FAFB0; }
    goto L_088FB000;
L_088FB000:;
    v0 = D_08B45EC0 - (24256);
    s0 = v0 + 24256;
    s2 = D_08B45EB8 - (24248);
    goto L_088FB00C;
L_088FB00C:;
    a0 = s0 + 0;
    cnd_ = s0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_088FB038; }
    goto L_088FB018;
L_088FB018:;
    v0 = LD32(s2+24248);
    a1 = LD32(s4+24240);
    a1 = a1 + v0;
    func_088FAC20(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FB028;
L_088FB028:;
    v0 = LD32(s2+24248);
    v1 = LD32(s0);
    v0 = v0 + v1;
    ST32(s2+24248, v0);
    goto L_088FB038;
L_088FB038:;
    v0 = LD32(s3+24252);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_088FB00C; }
    goto L_088FB048;
L_088FB048:;
    goto L_088FAFB0;
L_088FB050:;
    ST8(a0+24238, 0);
    func_088FAC6C(a3, t0, t1, t2, t3);
    goto L_088FB058;
L_088FB058:;
    goto L_088FAFB0;
}

/* 088FB060 */
rv_t func_088FB060(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB060:;
    sp = sp - 16;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FB0DC; }
    goto L_088FB08C;
L_088FB08C:;
    v0 = s1 < 0x1u;
    goto L_088FB090;
L_088FB090:;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088FB0CC; }
    goto L_088FB09C;
L_088FB09C:;
    v0 = D_08B45EC0 - (24256);
    v0 = v0 + 24256;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088FB0C8; }
    goto L_088FB0AC;
L_088FB0AC:;
    s0 = v0 + 16;
    goto L_088FB0B0;
L_088FB0B0:;
    cnd_ = s0 == s1;
    s0 = s0 - 16;
    if (cnd_) { goto L_088FB0C8; }
    goto L_088FB0B8;
L_088FB0B8:;
    a0 = s0 + 0;
    { rv_t r_ = func_088FAB54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FB0C0;
L_088FB0C0:;
    goto L_088FB0B0;
L_088FB0C8:;
    goto L_088FB0CC;
L_088FB0CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088FB0DC:;
    a0 = D_08B45EC0 - (24256);
    a0 = a0 + 24256;
    func_088FAB40(a0);
    goto L_088FB0E8;
L_088FB0E8:;
    v0 = s1 < 0x1u;
    goto L_088FB090;
}

/* 088FB0F0 */
rv_t func_088FB0F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB0F0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088FB060(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FB104;
L_088FB104:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FB110 */
rv_t func_088FB110(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB110:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088FB060(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FB124;
L_088FB124:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FB130 */
u64 func_088FB130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[1072] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1072);
L_088FB130:;
    sp = sp - 1072;
    ST32(sp+1044, a1);
    a1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp+1048, a2);
    a2 = sp + 1044;
    ST32(sp+1052, a3);
    a3 = 1024;
    ST32(sp+1056, t0);
    t0 = 1;
    ST32(sp+1060, t1);
    ST32(sp+1064, t2);
    ST32(sp+1068, t3);
    func_08837508(a0, a1, a2, a3, t0);
    goto L_088FB16C;
L_088FB16C:;
    a0 = sp + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FB174;
L_088FB174:;
    sp = sp + 1072;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088FB180 */
void func_088FB180(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FB180:;
    sp = sp - 32;
    ST32(sp+4, a1);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    ST32(sp+24, t2);
    ST32(sp+28, t3);
    sp = sp + 32;
    return;
}

/* 088FB1A8 */
u32 func_088FB1A8(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088FB1A8:;
    sp = sp - 272;
    a3 = 0 + 0;
    s1 = a0 + 0;
    a0 = a1 + 0;
    a1 = 256;
    s0 = a2 + 0;
    a2 = sp + 0;
    s0 = s0 & 0xff;
    func_088FCA60(a0, a1, a2, a3, t2, t3);
    goto L_088FB1DC;
L_088FB1DC:;
    a0 = D_08AD8D38 - (-29384);
    a0 = a0 - 29384;
    a1 = sp + 0;
    func_088FB180(a1, 0, 0, 0, 0, 0, 0);
    goto L_088FB1EC;
L_088FB1EC:;
    a3 = s0 + 0;
    s0 = D_08B45FF8 - (24568);
    s2 = s1 << 2;
    a2 = 511;
    a0 = sp + 0;
    a1 = 1;
    s0 = s0 + 24568;
    v0 = func_088FBD38(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_088FB20C;
L_088FB20C:;
    s0 = s2 + s0;
    ST32(s0, v0);
    s1 = D_08B46000 - (24576);
    s1 = s1 + 24576;
    v0 = func_088F8ED0(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FB220;
L_088FB220:;
    v1 = LD32(s0);
    s1 = s2 + s1;
    a0 = D_08AD8D44 - (-29372);
    a0 = a0 - 29372;
    a1 = v1 + 0;
    a2 = sp + 0;
    cnd_ = (s32)v1 < 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088FB2D8; }
    goto L_088FB240;
L_088FB240:;
    a0 = sp + 0;
    v0 = func_088FBF74(a0);
    goto L_088FB248;
L_088FB248:;
    a2 = v0 + 0;
    v1 = D_08B45FF0 - (24560);
    v0 = D_08B45FD8 - (24536);
    v0 = v0 + 24536;
    v1 = v1 + 24560;
    t0 = s2 + v0;
    a3 = s2 + v1;
    v0 = D_08B45FE8 - (24552);
    v1 = D_08B45FE0 - (24544);
    a0 = D_08AD8D64 - (-29340);
    v0 = v0 + 24552;
    v1 = v1 + 24544;
    a0 = a0 - 29340;
    a1 = sp + 0;
    v0 = s2 + v0;
    cnd_ = (s32)a2 < 0;
    s0 = s2 + v1;
    if (cnd_) { goto L_088FB2C8; }
    goto L_088FB28C;
L_088FB28C:;
    ST32(v0, a2);
    a0 = D_08AD8D80 - (-29312);
    a0 = a0 - 29312;
    ST32(a3, a2);
    a1 = sp + 0;
    ST32(s0, 0);
    ST32(t0, 0);
    func_088FB180(a1, a2, a3, t0, 0, 0, 0);
    goto L_088FB2AC;
L_088FB2AC:;
    v0 = 1;
    goto L_088FB2B0;
L_088FB2B0:;
    sp = sp + 272;
    return v0;
L_088FB2C8:;
    func_088FB180(a1, a2, a3, t0, 0, 0, 0);
    goto L_088FB2D0;
L_088FB2D0:;
    v0 = 0 + 0;
    goto L_088FB2B0;
L_088FB2D8:;
    func_088FB180(a1, a2, 0, 0, 0, 0, 0);
    goto L_088FB2E0;
L_088FB2E0:;
    v0 = 0 + 0;
    goto L_088FB2B0;
}

/* 088FB2E8 */
void func_088FB2E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB2E8:;
    sp = sp - 16;
    v0 = D_08B46000 - (24576);
    v0 = v0 + 24576;
    s0 = a0 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v0 = func_088F8EEC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FB30C;
L_088FB30C:;
    a0 = v0 + 0;
    f0 = func_088F8F1C(a0);
    goto L_088FB314;
L_088FB314:;
    f12 = f0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB31C;
L_088FB31C:;
    a0 = D_08B45FE0 - (24544);
    a0 = a0 + 24544;
    a0 = s0 + a0;
    a1 = LD32(a0);
    a0 = D_08AD8D98 - (-29288);
    a2 = v0 + 0;
    a3 = v1 + 0;
    a0 = a0 - 29288;
    func_088FB180(a1, a2, a3, 0, 0, 0, 0);
    goto L_088FB340;
L_088FB340:;
    v0 = D_08B45FF8 - (24568);
    v0 = v0 + 24568;
    s0 = s0 + v0;
    a0 = LD32(s0);
    v0 = func_088FC260(a0, 0, 0, 0, 0, 0);
    goto L_088FB354;
L_088FB354:;
    v0 = ~(0 | v0);
    v0 = v0 >> 31;
    sp = sp + 16;
    return;
}

/* 088FB36C */
void func_088FB36C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB36C:;
    sp = sp - 16;
    s0 = 1;
    func_088FBC20(t1, t2, t3);
    goto L_088FB384;
L_088FB384:;
    v1 = D_08B45FD0 - (24528);
    s1 = v1 + 24528;
    goto L_088FB38C;
L_088FB38C:;
    a0 = 64;
    a1 = 0x8000;
    { rv_t r_ = func_088F9AB0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FB398;
L_088FB398:;
    s0 = s0 - 1;
    ST32(s1, v0);
    cnd_ = (s32)s0 >= 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_088FB38C; }
    goto L_088FB3A8;
L_088FB3A8:;
    sp = sp + 16;
    return;
}

/* 088FB3BC */
void func_088FB3BC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB3BC:;
    sp = sp - 16;
    v0 = D_08B45FD0 - (24528);
    s1 = v0 + 24528;
    s0 = 1;
    a0 = LD32(s1);
    goto L_088FB3DC;
L_088FB3DC:;
    s0 = s0 - 1;
    s1 = s1 + 4;
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FB3E8;
L_088FB3E8:;
    cnd_ = (s32)s0 >= 0;
    if (cnd_) { a0 = LD32(s1); goto L_088FB3DC; }
    goto L_088FB3F0;
L_088FB3F0:;
    func_088FBCB4(0, 0, 0, 0, 0);
    goto L_088FB3F8;
L_088FB3F8:;
    sp = sp + 16;
    return;
}

/* 088FB40C */
u32 func_088FB40C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FB40C:;
    sp = sp - 32;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    a2 = 1;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_088FB46C; }
    goto L_088FB440;
L_088FB440:;
    a2 = 0 + 0;
    v0 = func_088FB1A8(a0, a1, a2, t2, t3);
    goto L_088FB448;
L_088FB448:;
    v1 = v0 + 0;
    goto L_088FB44C;
L_088FB44C:;
    goto L_088FB450;
L_088FB450:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088FB46C:;
    s3 = D_08B45FE8 - (24552);
    s0 = a0 << 2;
    v0 = func_088FB1A8(a0, a1, a2, t2, t3);
    goto L_088FB478;
L_088FB478:;
    v1 = s3 + 24552;
    a2 = s0 + v1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FB44C; }
    goto L_088FB488;
L_088FB488:;
    v0 = D_08B45FF0 - (24560);
    v1 = D_08B45FF8 - (24568);
    v0 = v0 + 24560;
    v1 = v1 + 24568;
    s1 = s0 + v0;
    t0 = s0 + v1;
    v0 = D_08B45FD0 - (24528);
    v1 = LD32(a2);
    v0 = v0 + 24528;
    t1 = s0 + v0;
    v0 = 32767;
    v0 = v0 < v1;
    a3 = 1;
    cnd_ = v0 != 0;
    a2 = 0x8000;
    if (cnd_) { goto L_088FB534; }
    goto L_088FB4C4;
L_088FB4C4:;
    a0 = LD32(t0);
    a1 = LD32(t1);
    a2 = LD32(s1);
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB4D4;
L_088FB4D4:;
    t0 = v0 + 0;
    v0 = LD32(s1);
    v1 = 0 + 0;
    goto L_088FB4E0;
L_088FB4E0:;
    cnd_ = t0 != v0;
    if (cnd_) { goto L_088FB450; }
    goto L_088FB4E8;
L_088FB4E8:;
    a3 = s3 + 24552;
    a3 = s0 + a3;
    a2 = LD32(a3);
    v1 = D_08B45FD8 - (24536);
    v0 = D_08B45FE0 - (24544);
    v1 = v1 + 24536;
    v0 = v0 + 24544;
    v1 = s0 + v1;
    a2 = a2 - t0;
    v0 = s0 + v0;
    ST32(v1, 0);
    a0 = D_08AD8D80 - (-29312);
    a1 = s2 + 0;
    ST32(a3, a2);
    a0 = a0 - 29312;
    ST32(v0, t0);
    func_088FB180(a1, a2, a3, t0, 0, 0, 0);
    goto L_088FB52C;
L_088FB52C:;
    v1 = 1;
    goto L_088FB44C;
L_088FB534:;
    a0 = LD32(t0);
    a1 = LD32(t1);
    a3 = 1;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB544;
L_088FB544:;
    t0 = v0 + 0;
    v1 = 0 + 0;
    v0 = 0x8000;
    goto L_088FB4E0;
}

/* 088FB554 */
void func_088FB554(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB554:;
    sp = sp - 16;
    func_088FB2E8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FB564;
L_088FB564:;
    sp = sp + 16;
    return;
}

/* 088FB570 */
u32 func_088FB570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FB570:;
    sp = sp - 16;
    v0 = func_088FBCF8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FB580;
L_088FB580:;
    sp = sp + 16;
    return v0;
}

/* 088FB58C */
u32 func_088FB58C(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088FB58C:;
    sp = sp - 272;
    a1 = 256;
    a2 = sp + 0;
    a3 = 0 + 0;
    func_088FCA60(a0, a1, a2, a3, t2, t3);
    goto L_088FB5A4;
L_088FB5A4:;
    a0 = sp + 0;
    v0 = func_088FBD18(a0);
    goto L_088FB5AC;
L_088FB5AC:;
    sp = sp + 272;
    return v0;
}

/* 088FB5B8 */
u32 func_088FB5B8(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088FB5B8:;
    sp = sp - 272;
    a1 = 256;
    a2 = sp + 0;
    a3 = 0 + 0;
    func_088FCA60(a0, a1, a2, a3, t2, t3);
    goto L_088FB5D0;
L_088FB5D0:;
    a0 = sp + 0;
    v0 = func_088FBF74(a0);
    goto L_088FB5D8;
L_088FB5D8:;
    sp = sp + 272;
    return v0;
}

/* 088FB5E4 */
u32 func_088FB5E4(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FB5E4:;
    sp = sp - 32;
    v0 = D_08B45FF8 - (24568);
    v0 = v0 + 24568;
    s1 = a0 << 2;
    v0 = s1 + v0;
    t0 = 0 + 0;
    s0 = a0 + 0;
    s3 = a1 + 0;
    t1 = 0 + 0;
    s2 = LD32(v0);
    cnd_ = (s32)s2 < 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088FB650; }
    goto L_088FB62C;
L_088FB62C:;
    a2 = a1 + 0;
    a3 = 0 + 0;
    v0 = func_088FC1A8(a0, a2, a3, t0, t1, t2, t3);
    goto L_088FB638;
L_088FB638:;
    a2 = v0 + 0;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    a0 = s0 + v0;
    cnd_ = s3 == a2;
    t1 = 0 + 0;
    if (cnd_) { goto L_088FB674; }
    goto L_088FB650;
L_088FB650:;
    goto L_088FB654;
L_088FB654:;
    v0 = t1 + 0;
    sp = sp + 32;
    return v0;
L_088FB674:;
    v0 = D_08B45FF0 - (24560);
    v0 = v0 + 24560;
    t3 = s1 + v0;
    v0 = D_08B45FD8 - (24536);
    v0 = v0 + 24536;
    a1 = LD_U8(a0);
    s4 = D_08B45FE8 - (24552);
    t0 = s1 + v0;
    v0 = D_08B45FE0 - (24544);
    a0 = s4 + 24552;
    v0 = v0 + 24544;
    s0 = s1 + a0;
    t1 = 1;
    cnd_ = a1 == 0;
    a0 = s1 + v0;
    if (cnd_) { goto L_088FB6C8; }
    goto L_088FB6B0;
L_088FB6B0:;
    v0 = LD32(t3);
    ST32(a0, a2);
    v0 = v0 - s3;
    ST32(t0, 0);
    ST32(s0, v0);
    goto L_088FB650;
L_088FB6C8:;
    a1 = LD32(t3);
    v0 = D_08B45FD0 - (24528);
    v0 = v0 + 24528;
    v1 = a1 - s3;
    t1 = s1 + v0;
    v0 = 32767;
    v0 = v0 < v1;
    a0 = s2 + 0;
    a3 = 1;
    a2 = 0x8000;
    cnd_ = v0 != 0;
    ST32(s0, v1);
    if (cnd_) { goto L_088FB754; }
    goto L_088FB6F8;
L_088FB6F8:;
    a1 = LD32(t1);
    a2 = v1 + 0;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, 0, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB704;
L_088FB704:;
    a2 = v0 + 0;
    v0 = LD32(s0);
    t1 = 0 + 0;
    goto L_088FB710;
L_088FB710:;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_088FB654; }
    goto L_088FB718;
L_088FB718:;
    a1 = s4 + 24552;
    a1 = s1 + a1;
    a0 = LD32(a1);
    v1 = D_08B45FD8 - (24536);
    v0 = D_08B45FE0 - (24544);
    v1 = v1 + 24536;
    v0 = v0 + 24544;
    v1 = s1 + v1;
    v0 = s1 + v0;
    a0 = a0 - a2;
    ST32(a1, a0);
    t1 = 1;
    ST32(v0, a2);
    ST32(v1, 0);
    goto L_088FB654;
L_088FB754:;
    a1 = LD32(t1);
    a0 = s2 + 0;
    a3 = 1;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, 0, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB764;
L_088FB764:;
    a2 = v0 + 0;
    t1 = 0 + 0;
    v0 = 0x8000;
    goto L_088FB710;
}

/* 088FB774 */
u32 func_088FB774(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FB774:;
    sp = sp - 48;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    t0 = a1 + 0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s3 = a2 + 0;
    if (cnd_) { goto L_088FB890; }
    goto L_088FB7BC;
L_088FB7BC:;
    v0 = D_08B45FF8 - (24568);
    v1 = a0 << 2;
    v0 = v0 + 24568;
    v0 = v1 + v0;
    s6 = LD32(v0);
    cnd_ = (s32)s6 < 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088FB85C; }
    goto L_088FB7D8;
L_088FB7D8:;
    v0 = D_08B45FD0 - (24528);
    v0 = v0 + 24528;
    v0 = v1 + v0;
    s5 = LD32(v0);
    cnd_ = a2 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_088FB858; }
    goto L_088FB7F0;
L_088FB7F0:;
    v0 = D_08B45FE8 - (24552);
    v0 = v0 + 24552;
    s4 = v1 + v0;
    s7 = 0x8000;
    goto L_088FB800;
L_088FB800:;
    v0 = s7 < s3;
    s0 = 0x8000;
    if (v0 == 0) s0 = s3;
    a0 = s6 + 0;
    a1 = s5 + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB820;
L_088FB820:;
    s1 = v0 + 0;
    a0 = s2 + 0;
    a2 = v0 + 0;
    a1 = s5 + 0;
    s3 = s3 - v0;
    s2 = s2 + v0;
    cnd_ = v0 != s0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088FB85C; }
    goto L_088FB840;
L_088FB840:;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB848;
L_088FB848:;
    v1 = LD32(s4);
    v1 = v1 - s1;
    cnd_ = s3 != 0;
    ST32(s4, v1);
    if (cnd_) { goto L_088FB800; }
    goto L_088FB858;
L_088FB858:;
    a3 = 1;
    goto L_088FB85C;
L_088FB85C:;
    v0 = a3 + 0;
    sp = sp + 48;
    return v0;
L_088FB890:;
    cnd_ = a2 == 0;
    a3 = 1;
    if (cnd_) { goto L_088FB85C; }
    goto L_088FB898;
L_088FB898:;
    v1 = D_08B45FD8 - (24536);
    s6 = a0 << 2;
    v0 = v1 + 24536;
    a3 = s6 + v0;
    v0 = D_08B45FD0 - (24528);
    a1 = LD32(a3);
    v0 = v0 + 24528;
    a2 = s6 + v0;
    a0 = LD32(a2);
    v0 = 0x8000;
    s0 = v0 - a1;
    v1 = s3 < s0;
    a1 = a0 + a1;
    cnd_ = v1 != 0;
    s2 = t0 + 0;
    if (cnd_) { goto L_088FB978; }
    goto L_088FB8D4;
L_088FB8D4:;
    v0 = D_08B45FE8 - (24552);
    v0 = v0 + 24552;
    s1 = s6 + v0;
    v1 = D_08B45FF8 - (24568);
    v0 = D_08B45FE0 - (24544);
    v1 = v1 + 24568;
    v0 = v0 + 24544;
    fp = s6 + v1;
    s4 = a2 + 0;
    s5 = s6 + v0;
    s7 = a3 + 0;
    goto L_088FB900;
L_088FB900:;
    a0 = s2 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB90C;
L_088FB90C:;
    v1 = LD32(s1);
    a0 = 32767;
    a3 = 1;
    v0 = a0 < v1;
    a2 = 0x8000;
    s3 = s3 - s0;
    cnd_ = v0 != 0;
    s2 = s2 + s0;
    if (cnd_) { goto L_088FB9A8; }
    goto L_088FB92C;
L_088FB92C:;
    a0 = LD32(fp);
    a1 = LD32(s4);
    a2 = v1 + 0;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB93C;
L_088FB93C:;
    a2 = v0 + 0;
    v0 = LD32(s1);
    a3 = 0 + 0;
    goto L_088FB948;
L_088FB948:;
    cnd_ = a2 != v0;
    s0 = 0x8000;
    if (cnd_) { goto L_088FB85C; }
    goto L_088FB950;
L_088FB950:;
    v0 = LD32(s5);
    v1 = LD32(s1);
    v0 = v0 + a2;
    v1 = v1 - a2;
    a0 = s3 < s0;
    ST32(s7, 0);
    a1 = LD32(s4);
    ST32(s5, v0);
    cnd_ = a0 == 0;
    ST32(s1, v1);
    if (cnd_) { goto L_088FB900; }
    goto L_088FB978;
L_088FB978:;
    cnd_ = s3 == 0;
    a3 = 1;
    if (cnd_) { goto L_088FB85C; }
    goto L_088FB980;
L_088FB980:;
    a0 = s2 + 0;
    a2 = s3 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB98C;
L_088FB98C:;
    a0 = D_08B45FD8 - (24536);
    v1 = a0 + 24536;
    v1 = s6 + v1;
    v0 = LD32(v1);
    v0 = v0 + s3;
    ST32(v1, v0);
    goto L_088FB858;
L_088FB9A8:;
    a0 = LD32(fp);
    a1 = LD32(s4);
    a3 = 1;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FB9B8;
L_088FB9B8:;
    a2 = v0 + 0;
    a3 = 0 + 0;
    v0 = 0x8000;
    goto L_088FB948;
}

/* 088FB9C8 */
u64 func_088FB9C8(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FB9C8:;
    sp = sp - 32;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088FBAAC; }
    goto L_088FBA00;
L_088FBA00:;
    v0 = D_08B45FF8 - (24568);
    a0 = a0 << 2;
    v0 = v0 + 24568;
    v0 = a0 + v0;
    s3 = LD32(v0);
    cnd_ = (s32)s3 < 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088FBA84; }
    goto L_088FBA1C;
L_088FBA1C:;
    v0 = D_08B45FD0 - (24528);
    v0 = v0 + 24528;
    v0 = a0 + v0;
    cnd_ = a1 == 0;
    s4 = LD32(v0);
    if (cnd_) { goto L_088FBA80; }
    goto L_088FBA30;
L_088FBA30:;
    v0 = D_08B45FE8 - (24552);
    v0 = v0 + 24552;
    s2 = a0 + v0;
    s5 = 0x8000;
    goto L_088FBA40;
L_088FBA40:;
    v0 = s5 < s1;
    s0 = 0x8000;
    if (v0 == 0) s0 = s1;
    a3 = 0 + 0;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FBA60;
L_088FBA60:;
    v1 = v0 + 0;
    s1 = s1 - v0;
    cnd_ = v0 != s0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088FBA84; }
    goto L_088FBA70;
L_088FBA70:;
    v0 = LD32(s2);
    v0 = v0 - v1;
    cnd_ = s1 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_088FBA40; }
    goto L_088FBA80;
L_088FBA80:;
    a3 = 1;
    goto L_088FBA84;
L_088FBA84:;
    goto L_088FBA88;
L_088FBA88:;
    v0 = a3 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088FBAAC:;
    s4 = D_08B45FD8 - (24536);
    s0 = a0 << 2;
    v0 = s4 + 24536;
    a1 = s0 + v0;
    a0 = LD32(a1);
    v0 = 0x8000;
    v0 = v0 - a0;
    v1 = s1 < v0;
    cnd_ = v1 == 0;
    if (cnd_) { s1 = s1 - v0; goto L_088FBAE4; }
    goto L_088FBAD4;
L_088FBAD4:;
    v0 = a0 + s1;
    a3 = 1;
    ST32(a1, v0);
    goto L_088FBA84;
L_088FBAE4:;
    v0 = 32767;
    v0 = v0 < s1;
    s3 = D_08B45FF8 - (24568);
    cnd_ = v0 != 0;
    s5 = D_08B45FE8 - (24552);
    if (cnd_) { goto L_088FBBBC; }
    goto L_088FBAF8;
L_088FBAF8:;
    v0 = s5 + 24552;
    s2 = s0 + v0;
    a2 = LD32(s2);
    v0 = 32767;
    v0 = v0 < a2;
    cnd_ = v0 != 0;
    v1 = D_08B45FD0 - (24528);
    if (cnd_) { goto L_088FBB88; }
    goto L_088FBB14;
L_088FBB14:;
    v0 = s3 + 24568;
    v1 = v1 + 24528;
    v0 = s0 + v0;
    v1 = s0 + v1;
    a0 = LD32(v0);
    a1 = LD32(v1);
    a3 = 1;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FBB34;
L_088FBB34:;
    t0 = v0 + 0;
    v0 = LD32(s2);
    a3 = 0 + 0;
    goto L_088FBB40;
L_088FBB40:;
    cnd_ = t0 != v0;
    if (cnd_) { goto L_088FBA88; }
    goto L_088FBB48;
L_088FBB48:;
    v0 = D_08B45FE0 - (24544);
    a2 = s5 + 24552;
    v0 = v0 + 24544;
    v0 = s0 + v0;
    a2 = s0 + a2;
    v1 = LD32(v0);
    a0 = LD32(a2);
    a1 = s4 + 24536;
    a1 = s0 + a1;
    a0 = a0 - t0;
    v1 = v1 + t0;
    ST32(v0, v1);
    a3 = 1;
    ST32(a2, a0);
    ST32(a1, s1);
    goto L_088FBA88;
L_088FBB88:;
    v0 = s3 + 24568;
    v1 = v1 + 24528;
    v0 = s0 + v0;
    v1 = s0 + v1;
    a0 = LD32(v0);
    a1 = LD32(v1);
    a3 = 1;
    a2 = 0x8000;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FBBAC;
L_088FBBAC:;
    t0 = v0 + 0;
    a3 = 0 + 0;
    v0 = 0x8000;
    goto L_088FBB40;
L_088FBBBC:;
    v0 = s3 + 24568;
    v0 = s0 + v0;
    a0 = LD32(v0);
    s2 = s1 + 0;
    s2 = (s2 & ~(0x7fffu << 0)) | ((0 & 0x7fff) << 0);
    a2 = s2 + 0;
    a3 = 0 + 0;
    t0 = 1;
    v0 = func_088FC1A8(a0, a2, a3, t0, t1, t2, t3);
    goto L_088FBBE0;
L_088FBBE0:;
    a0 = v0 + 0;
    v0 = D_08B45FE0 - (24544);
    v0 = v0 + 24544;
    a2 = s0 + v0;
    v1 = LD32(a2);
    v1 = v1 + s2;
    cnd_ = v1 != a0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088FBA84; }
    goto L_088FBC00;
L_088FBC00:;
    v1 = s5 + 24552;
    v1 = s0 + v1;
    v0 = LD32(v1);
    ST32(a2, a0);
    s1 = s1 - s2;
    v0 = v0 - s2;
    ST32(v1, v0);
    goto L_088FBAF8;
}

/* 088FBC20 */
void func_088FBC20(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FBC20:;
    sp = sp - 16;
    s0 = D_08B161A0 - (24992);
    a0 = D_08AD8DD0 - (-29232);
    v0 = LD32(s0+24992);
    a0 = a0 - 29232;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    a1 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FBC68; }
    goto L_088FBC54;
L_088FBC54:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_088FBC68:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBC70;
L_088FBC70:;
    a1 = D_08AD8DE0 - (-29216);
    ST32(s0+24992, v0);
    a0 = 1;
    a1 = a1 - 29216;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088FBC54; }
    goto L_088FBC88;
L_088FBC88:;
    v0 = sceUmdActivate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBC90;
L_088FBC90:;
    a0 = 32;
    v0 = sceUmdWaitDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBC98;
L_088FBC98:;
    a0 = D_08AD8DE8 - (-29208);
    a0 = a0 - 29208;
    a1 = 0 + 0;
    a2 = 1;
    func_088FD040(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FBCAC;
L_088FBCAC:;
    v1 = 0 + 0;
    goto L_088FBC54;
}

/* 088FBCB4 */
void func_088FBCB4(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FBCB4:;
    sp = sp - 16;
    s0 = D_08B161A0 - (24992);
    v0 = LD32(s0+24992);
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_088FBCE4; }
    goto L_088FBCCC;
L_088FBCCC:;
    func_088FCA0C(a3, t0, t1, t2, t3);
    goto L_088FBCD4;
L_088FBCD4:;
    a0 = LD32(s0+24992);
    v0 = (u32)-1;
    ST32(s0+24992, v0);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBCE4;
L_088FBCE4:;
    v0 = 0 + 0;
    sp = sp + 16;
    return;
}

/* 088FBCF8 */
u32 func_088FBCF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FBCF8:;
    sp = sp - 16;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBD08;
L_088FBD08:;
    v0 = (v0 >> 5) & 0x1;
    sp = sp + 16;
    return v0;
}

/* 088FBD18 */
u32 func_088FBD18(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FBD18:;
    sp = sp - 16;
    v0 = func_088FD248(a0);
    goto L_088FBD28;
L_088FBD28:;
    v0 = 0 < v0;
    sp = sp + 16;
    return v0;
}

/* 088FBD38 */
u32 func_088FBD38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FBD38:;
    sp = sp - 48;
    s4 = 0x80210000u;
    s4 = s4 | 0x3;
    s3 = 0x80210000u;
    s3 = s3 | 0x1;
    s7 = a0 + 0;
    s6 = a1 + 0;
    s5 = a2 + 0;
    s2 = a3 & 0xff;
    s1 = D_08B46018 - (24600);
    goto L_088FBD84;
L_088FBD84:;
    a0 = s2 + 0;
    a1 = 154;
    v0 = func_088FC908(a0, a1, a3, t0, t1, t2, t3);
    goto L_088FBD90;
L_088FBD90:;
    s0 = v0 + 0;
    a1 = s6 + 0;
    a2 = s5 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s7 + 0;
    if (cnd_) { goto L_088FBE40; }
    goto L_088FBDA4;
L_088FBDA4:;
    v0 = func_088FD380(a0, a1, a2);
    goto L_088FBDAC;
L_088FBDAC:;
    s0 = v0 + 0;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FBDB4;
L_088FBDB4:;
    cnd_ = s2 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088FBE44; }
    goto L_088FBDBC;
L_088FBDBC:;
    cnd_ = (s32)s0 >= 0;
    v0 = LD32(s1+24600);
    if (cnd_) { goto L_088FBE40; }
    goto L_088FBDC4;
L_088FBDC4:;
    v0 = v0 < 0x1u;
    ST32(s1+24600, v0);
    a0 = LD_U8(s1+24600);
    a0 = a0 << 7;
    a0 = a0 & 0xff;
    v0 = sceKernelSetGPO(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBDDC;
L_088FBDDC:;
    a0 = 0xf0000u;
    a0 = a0 | 0x4240;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBDE8;
L_088FBDE8:;
    v1 = s0 ^ s3;
    v0 = s0 ^ s4;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_088FBE1C; }
    goto L_088FBE04;
L_088FBE04:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBE0C;
L_088FBE0C:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_088FBE30; }
    goto L_088FBE18;
L_088FBE18:;
    a0 = 2;
    goto L_088FBE1C;
L_088FBE1C:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBE24;
L_088FBE24:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FBE40; }
    goto L_088FBE2C;
L_088FBE2C:;
    a0 = 32;
    goto L_088FBE30;
L_088FBE30:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBE38;
L_088FBE38:;
    cnd_ = (s32)v0 >= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FBD84; }
    goto L_088FBE40;
L_088FBE40:;
    v0 = s0 + 0;
    goto L_088FBE44;
L_088FBE44:;
    sp = sp + 48;
    return v0;
}

/* 088FBE70 */
void func_088FBE70(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FBE70:;
    sp = sp - 32;
    s2 = 0x80210000u;
    s2 = s2 | 0x3;
    s1 = 0x80210000u;
    s1 = s1 | 0x1;
    s5 = D_08B46014 - (24596);
    s4 = a0 + 0;
    s3 = a1 + 0;
    goto L_088FBEAC;
L_088FBEAC:;
    a0 = 1;
    a1 = 233;
    v0 = func_088FC908(a0, a1, a3, t0, t1, t2, t3);
    goto L_088FBEB8;
L_088FBEB8:;
    s0 = v0 + 0;
    a1 = s3 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_088FBF4C; }
    goto L_088FBEC8;
L_088FBEC8:;
    v0 = sceIoGetstat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBED0;
L_088FBED0:;
    s0 = v0 + 0;
    v0 = func_088F8ED0(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FBED8;
L_088FBED8:;
    ST32(s5+24596, v0);
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FBEE0;
L_088FBEE0:;
    a0 = 0xf0000u;
    cnd_ = (s32)s0 >= 0;
    a0 = a0 | 0x4240;
    if (cnd_) { goto L_088FBF4C; }
    goto L_088FBEEC;
L_088FBEEC:;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBEF4;
L_088FBEF4:;
    v1 = s0 ^ s1;
    v0 = s0 ^ s2;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_088FBF28; }
    goto L_088FBF10;
L_088FBF10:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBF18;
L_088FBF18:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_088FBF3C; }
    goto L_088FBF24;
L_088FBF24:;
    a0 = 2;
    goto L_088FBF28;
L_088FBF28:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBF30;
L_088FBF30:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FBF4C; }
    goto L_088FBF38;
L_088FBF38:;
    a0 = 32;
    goto L_088FBF3C;
L_088FBF3C:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FBF44;
L_088FBF44:;
    cnd_ = (s32)v0 >= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FBEAC; }
    goto L_088FBF4C;
L_088FBF4C:;
    v0 = s0 + 0;
    sp = sp + 32;
    return;
}

/* 088FBF74 */
u32 func_088FBF74(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FBF74:;
    sp = sp - 16;
    v0 = func_088FD420(a0);
    goto L_088FBF84;
L_088FBF84:;
    sp = sp + 16;
    return v0;
}

/* 088FBF90 */
u64 func_088FBF90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FBF90:;
    v1 = D_08B4600C - (24588);
    v0 = LD32(v1+24588);
    sp = sp - 48;
    v0 = v0 + 1;
    ST32(v1+24588, v0);
    s7 = 0x80210000u;
    s7 = s7 | 0x3;
    s6 = 0x80210000u;
    s6 = s6 | 0x1;
    s5 = 0xf00d0000u;
    s5 = s5 | 0x4a11;
    fp = a0 + 0;
    s4 = a2 + 0;
    s3 = a3 & 0xff;
    s2 = a1 + 0;
    goto L_088FBFF4;
L_088FBFF4:;
    a0 = s3 + 0;
    a1 = 301;
    v0 = func_088FC908(a0, a1, a3, t0, t1, t2, t3);
    goto L_088FC000;
L_088FC000:;
    s0 = v0 >> 31;
    cnd_ = s0 != 0;
    s1 = s4 < 0x4u;
    if (cnd_) { goto L_088FC0E8; }
    goto L_088FC00C;
L_088FC00C:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s2, s5); goto L_088FC014; }
    goto L_088FC014;
L_088FC014:;
    a0 = fp + 0;
    a1 = s2 + 0;
    a2 = s4 + 0;
    v0 = sceIoRead(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC024;
L_088FC024:;
    s0 = v0 + 0;
    v0 = func_088F8ED0(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FC02C;
L_088FC02C:;
    a0 = D_08B46014 - (24596);
    cnd_ = s3 == 0;
    ST32(a0+24596, v0);
    if (cnd_) { goto L_088FC170; }
    goto L_088FC038;
L_088FC038:;
    v0 = s1 ^ 0x1;
    v1 = (s32)0 < (s32)s0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FC058; }
    goto L_088FC04C;
L_088FC04C:;
    v0 = LD32(s2);
    cnd_ = v0 == s5;
    a2 = 0 - s0;
    if (cnd_) { goto L_088FC158; }
    goto L_088FC058;
L_088FC058:;
    v0 = func_088FCA34(a2, 0, 0, 0, 0, 0);
    goto L_088FC060;
L_088FC060:;
    cnd_ = (s32)s0 < 0;
    a0 = 0xf0000u;
    if (cnd_) { goto L_088FC088; }
    goto L_088FC068;
L_088FC068:;
    v0 = LD32(s2);
    v0 = v0 ^ s5;
    v0 = 0 < v0;
    v0 = v0 | s1;
    cnd_ = v0 != 0;
    v0 = D_08B46008 - (24584);
    if (cnd_) { goto L_088FC0EC; }
    goto L_088FC080;
L_088FC080:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088FC0EC; }
    goto L_088FC088;
L_088FC088:;
    a0 = a0 | 0x4240;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC090;
L_088FC090:;
    v1 = s0 ^ s6;
    v0 = s0 ^ s7;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_088FC0C4; }
    goto L_088FC0AC;
L_088FC0AC:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC0B4;
L_088FC0B4:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_088FC0D8; }
    goto L_088FC0C0;
L_088FC0C0:;
    a0 = 2;
    goto L_088FC0C4;
L_088FC0C4:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC0CC;
L_088FC0CC:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC0E8; }
    goto L_088FC0D4;
L_088FC0D4:;
    a0 = 32;
    goto L_088FC0D8;
L_088FC0D8:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC0E0;
L_088FC0E0:;
    cnd_ = (s32)v0 >= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FBFF4; }
    goto L_088FC0E8;
L_088FC0E8:;
    v0 = D_08B46008 - (24584);
    goto L_088FC0EC;
L_088FC0EC:;
    v1 = LD_U8(v0+24584);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FC140; }
    goto L_088FC0F8;
L_088FC0F8:;
    v0 = D_08B4600C - (24588);
    goto L_088FC0FC;
L_088FC0FC:;
    v1 = LD32(v0+24588);
    v0 = s0 + 0;
    v1 = v1 - 1;
    a0 = D_08B4600C - (24588);
    ST32(a0+24588, v1);
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_088FC140:;
    a0 = 390;
    v0 = func_088FC9CC(a0, 0, 0, 0, 0, 0);
    goto L_088FC148;
L_088FC148:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC150;
L_088FC150:;
    v0 = D_08B4600C - (24588);
    goto L_088FC0FC;
L_088FC158:;
    a3 = (u32)((s32)a2 >> 31);
    a0 = fp + 0;
    t0 = 1;
    { u64 r_ = sceIoLseek(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FC168;
L_088FC168:;
    goto L_088FC058;
L_088FC170:;
    v0 = s1 ^ 0x1;
    v1 = (s32)0 < (s32)s0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FC198; }
    goto L_088FC184;
L_088FC184:;
    v1 = LD32(s2);
    v0 = 0x80010000u;
    v0 = v0 | 0x9;
    v1 = v1 ^ s5;
    if (v1 == 0) s0 = v0;
    goto L_088FC198;
L_088FC198:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC1A0;
L_088FC1A0:;
    v0 = D_08B46008 - (24584);
    goto L_088FC0EC;
}

/* 088FC1A8 */
u32 func_088FC1A8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FC1A8:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = 406;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = t0 + 0;
    v0 = func_088FC9CC(a0, a3, t0, t1, t2, t3);
    goto L_088FC1D8;
L_088FC1D8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    cnd_ = (s32)v0 < 0;
    t0 = s1 + 0;
    if (cnd_) { goto L_088FC248; }
    goto L_088FC1F0;
L_088FC1F0:;
    { u64 r_ = sceIoLseek(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FC1F8;
L_088FC1F8:;
    s0 = v0 + 0;
    cnd_ = (s32)v1 < 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_088FC250; }
    goto L_088FC204;
L_088FC204:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC20C;
L_088FC20C:;
    cnd_ = (s32)v0 < 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088FC248; }
    goto L_088FC214;
L_088FC214:;
    v0 = func_088F8ED0(0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088FC21C;
L_088FC21C:;
    v1 = D_08B46014 - (24596);
    ST32(v1+24596, v0);
    v0 = s0 + 0;
    goto L_088FC228;
L_088FC228:;
    v1 = s1 + 0;
    goto L_088FC22C;
L_088FC22C:;
    sp = sp + 32;
    return v0;
L_088FC248:;
    v1 = (u32)((s32)a1 >> 31);
    goto L_088FC22C;
L_088FC250:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC258;
L_088FC258:;
    v0 = s0 + 0;
    goto L_088FC228;
}

/* 088FC260 */
u32 func_088FC260(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC260:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 439;
    v0 = func_088FC9CC(a0, a3, t0, t1, t2, t3);
    goto L_088FC27C;
L_088FC27C:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC2A4; }
    goto L_088FC284;
L_088FC284:;
    s0 = D_08B4600C - (24588);
    v0 = LD32(s0+24588);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FC2BC; }
    goto L_088FC294;
L_088FC294:;
    a0 = s1 + 0;
    v0 = sceIoClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC29C;
L_088FC29C:;
    s0 = v0 + 0;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC2A4;
L_088FC2A4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
L_088FC2BC:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC2C4;
L_088FC2C4:;
    a0 = 1000;
    v0 = sceKernelDelayThreadCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC2CC;
L_088FC2CC:;
    a0 = 452;
    v0 = func_088FC9CC(a0, 0, 0, 0, 0, 0);
    goto L_088FC2D4;
L_088FC2D4:;
    v1 = LD32(s0+24588);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FC2BC; }
    goto L_088FC2E0;
L_088FC2E0:;
    goto L_088FC294;
}

/* 088FC2E8 */
u32 func_088FC2E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FC2E8:;
    sp = sp - 32;
    s2 = 0x80210000u;
    s2 = s2 | 0x3;
    s1 = 0x80210000u;
    s1 = s1 | 0x1;
    s6 = D_08B46014 - (24596);
    s5 = a0 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    goto L_088FC32C;
L_088FC32C:;
    a0 = 1;
    a1 = 472;
    v0 = func_088FC908(a0, a1, a3, t0, t1, t2, t3);
    goto L_088FC338;
L_088FC338:;
    s0 = v0 + 0;
    a1 = s4 + 0;
    a2 = s3 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_088FC3D0; }
    goto L_088FC34C;
L_088FC34C:;
    v0 = sceKernelLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC354;
L_088FC354:;
    s0 = v0 + 0;
    v0 = func_088F8ED0(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FC35C;
L_088FC35C:;
    ST32(s6+24596, v0);
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC364;
L_088FC364:;
    a0 = 0xf0000u;
    cnd_ = (s32)s0 >= 0;
    a0 = a0 | 0x4240;
    if (cnd_) { goto L_088FC3D0; }
    goto L_088FC370;
L_088FC370:;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC378;
L_088FC378:;
    v1 = s0 ^ s1;
    v0 = s0 ^ s2;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_088FC3AC; }
    goto L_088FC394;
L_088FC394:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC39C;
L_088FC39C:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_088FC3C0; }
    goto L_088FC3A8;
L_088FC3A8:;
    a0 = 2;
    goto L_088FC3AC;
L_088FC3AC:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC3B4;
L_088FC3B4:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC3D0; }
    goto L_088FC3BC;
L_088FC3BC:;
    a0 = 32;
    goto L_088FC3C0;
L_088FC3C0:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC3C8;
L_088FC3C8:;
    cnd_ = (s32)v0 >= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC32C; }
    goto L_088FC3D0;
L_088FC3D0:;
    v0 = s0 + 0;
    sp = sp + 32;
    return v0;
}

/* 088FC3FC */
u32 func_088FC3FC(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FC3FC:;
    sp = sp - 32;
    s4 = 0x80210000u;
    s4 = s4 | 0x3;
    s3 = 0x80210000u;
    s3 = s3 | 0x1;
    s5 = a0 + 0;
    s2 = a1 & 0xff;
    s1 = D_08B4601C - (24604);
    goto L_088FC438;
L_088FC438:;
    a0 = s2 + 0;
    a1 = 539;
    v0 = func_088FC908(a0, a1, a3, t0, t1, t2, t3);
    goto L_088FC444;
L_088FC444:;
    s0 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_088FC4EC; }
    goto L_088FC450;
L_088FC450:;
    v0 = sceIoDopen(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC458;
L_088FC458:;
    cnd_ = s2 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC514; }
    goto L_088FC460;
L_088FC460:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC468;
L_088FC468:;
    cnd_ = (s32)s0 >= 0;
    v0 = LD32(s1+24604);
    if (cnd_) { goto L_088FC4EC; }
    goto L_088FC470;
L_088FC470:;
    v0 = v0 < 0x1u;
    ST32(s1+24604, v0);
    a0 = LD_U8(s1+24604);
    a0 = a0 << 7;
    a0 = a0 & 0xff;
    v0 = sceKernelSetGPO(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC488;
L_088FC488:;
    a0 = 0xf0000u;
    a0 = a0 | 0x4240;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC494;
L_088FC494:;
    v1 = s0 ^ s3;
    v0 = s0 ^ s4;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_088FC4C8; }
    goto L_088FC4B0;
L_088FC4B0:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC4B8;
L_088FC4B8:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_088FC4DC; }
    goto L_088FC4C4;
L_088FC4C4:;
    a0 = 2;
    goto L_088FC4C8;
L_088FC4C8:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC4D0;
L_088FC4D0:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC4EC; }
    goto L_088FC4D8;
L_088FC4D8:;
    a0 = 32;
    goto L_088FC4DC;
L_088FC4DC:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC4E4;
L_088FC4E4:;
    cnd_ = (s32)v0 >= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC438; }
    goto L_088FC4EC;
L_088FC4EC:;
    v0 = s0 + 0;
    goto L_088FC4F0;
L_088FC4F0:;
    sp = sp + 32;
    return v0;
L_088FC514:;
    v0 = 0x80010000u;
    v0 = v0 | 0x9;
    v1 = (s32)s0 < 0;
    if (v1 != 0) s0 = v0;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC528;
L_088FC528:;
    v0 = s0 + 0;
    goto L_088FC4F0;
}

/* 088FC530 */
u32 func_088FC530(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FC530:;
    sp = sp - 48;
    s6 = D_08B4600C - (24588);
    v1 = a2 + 0;
    v0 = LD32(s6+24588);
    s1 = a1 + 0;
    v0 = v0 + 1;
    a1 = 0 + 0;
    s5 = a0 + 0;
    a2 = 352;
    a0 = s1 + 0;
    s7 = D_08B46014 - (24596);
    s4 = 0x80210000u;
    s4 = s4 | 0x3;
    s3 = v1 & 0xff;
    s2 = 0x80210000u;
    s2 = s2 | 0x1;
    ST32(s6+24588, v0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FC59C;
L_088FC59C:;
    v1 = D_08B46020 - (24608);
    v1 = v1 + 24608;
    ST32(s1+344, v1);
    goto L_088FC5A8;
L_088FC5A8:;
    a0 = s3 + 0;
    a1 = 623;
    v0 = func_088FC908(a0, a1, 0, 0, 0, 0, 0);
    goto L_088FC5B4;
L_088FC5B4:;
    s0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_088FC64C; }
    goto L_088FC5C4;
L_088FC5C4:;
    v0 = sceIoDread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC5CC;
L_088FC5CC:;
    s0 = v0 + 0;
    v0 = func_088F8ED0(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FC5D4;
L_088FC5D4:;
    cnd_ = s3 == 0;
    ST32(s7+24596, v0);
    if (cnd_) { goto L_088FC6B0; }
    goto L_088FC5DC;
L_088FC5DC:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC5E4;
L_088FC5E4:;
    cnd_ = (s32)s0 >= 0;
    a0 = 0xf0000u;
    if (cnd_) { goto L_088FC64C; }
    goto L_088FC5EC;
L_088FC5EC:;
    a0 = a0 | 0x4240;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC5F4;
L_088FC5F4:;
    v1 = s0 ^ s2;
    v0 = s0 ^ s4;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_088FC628; }
    goto L_088FC610;
L_088FC610:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC618;
L_088FC618:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_088FC63C; }
    goto L_088FC624;
L_088FC624:;
    a0 = 2;
    goto L_088FC628;
L_088FC628:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC630;
L_088FC630:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC64C; }
    goto L_088FC638;
L_088FC638:;
    a0 = 32;
    goto L_088FC63C;
L_088FC63C:;
    a1 = 0 + 0;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC644;
L_088FC644:;
    cnd_ = (s32)v0 >= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC5A8; }
    goto L_088FC64C;
L_088FC64C:;
    v0 = D_08B46008 - (24584);
    goto L_088FC650;
L_088FC650:;
    v1 = LD_U8(v0+24584);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FC698; }
    goto L_088FC65C;
L_088FC65C:;
    v1 = LD32(s6+24588);
    v0 = s0 + 0;
    v1 = v1 - 1;
    ST32(s6+24588, v1);
    sp = sp + 48;
    return v0;
L_088FC698:;
    a0 = 699;
    v0 = func_088FC9CC(a0, 0, 0, 0, 0, 0);
    goto L_088FC6A0;
L_088FC6A0:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC6A8;
L_088FC6A8:;
    goto L_088FC65C;
L_088FC6B0:;
    v0 = 0x80010000u;
    v0 = v0 | 0x9;
    v1 = (s32)s0 < 0;
    if (v1 != 0) s0 = v0;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC6C4;
L_088FC6C4:;
    v0 = D_08B46008 - (24584);
    goto L_088FC650;
}

/* 088FC6CC */
void func_088FC6CC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC6CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 725;
    v0 = func_088FC9CC(a0, a3, t0, t1, t2, t3);
    goto L_088FC6E8;
L_088FC6E8:;
    cnd_ = (s32)v0 < 0;
    s0 = D_08B4600C - (24588);
    if (cnd_) { goto L_088FC718; }
    goto L_088FC6F0;
L_088FC6F0:;
    v0 = LD32(s0+24588);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FC72C; }
    goto L_088FC6FC;
L_088FC6FC:;
    a0 = s1 + 0;
    v0 = sceIoDclose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC704;
L_088FC704:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC70C;
L_088FC70C:;
    v1 = v0 + 0;
    v0 = 0 + 0;
    v0 = (s32)v1 < (s32)v0 ? v1 : v0;
    goto L_088FC718;
L_088FC718:;
    sp = sp + 16;
    return;
L_088FC72C:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC734;
L_088FC734:;
    a0 = 1000;
    v0 = sceKernelDelayThreadCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC73C;
L_088FC73C:;
    a0 = 738;
    v0 = func_088FC9CC(a0, 0, 0, 0, 0, 0);
    goto L_088FC744;
L_088FC744:;
    v1 = LD32(s0+24588);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FC72C; }
    goto L_088FC750;
L_088FC750:;
    goto L_088FC6FC;
}

/* 088FC758 */
u32 func_088FC758(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_088FC758:;
    sp = sp - 288;
    t0 = a1 + 0;
    a1 = D_08AD8DF0 - (-29200);
    a1 = a1 - 29200;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a2 + 0;
    a3 = 1;
    a2 = 255;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FC78C;
L_088FC78C:;
    v1 = (u32)(s32)LD_S8(sp);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088FC7C4; }
    goto L_088FC798;
L_088FC798:;
    a1 = sp + 0;
    a3 = 92;
    goto L_088FC7A0;
L_088FC7A0:;
    v0 = LD_U8(a1);
    a2 = a2 + 1;
    v1 = (u32)(s32)(s8)v0;
    cnd_ = v1 == a3;
    a0 = sp + a2;
    if (cnd_) { goto L_088FC81C; }
    goto L_088FC7B4;
L_088FC7B4:;
    ST8(a1, v0);
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088FC7A0; }
    goto L_088FC7C4;
L_088FC7C4:;
    a0 = sp + 0;
    func_08A8B1E8(a0);
    goto L_088FC7CC;
L_088FC7CC:;
    a0 = sp + 0;
    a2 = s0 + 0;
    a1 = 0 + 0;
    v0 = func_088FC2E8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_088FC7DC;
L_088FC7DC:;
    ST32(s1, v0);
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088FC804; }
    goto L_088FC7E8;
L_088FC7E8:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = sp + 256;
    t0 = 0 + 0;
    v0 = sceKernelStartModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC800;
L_088FC800:;
    v1 = v0 + 0;
    goto L_088FC804;
L_088FC804:;
    v0 = v1 + 0;
    sp = sp + 288;
    return v0;
L_088FC81C:;
    v0 = 47;
    goto L_088FC7B4;
}

/* 088FC824 */
u32 func_088FC824(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FC824:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = sp + 0;
    a0 = LD32(a0);
    t0 = 0 + 0;
    v0 = sceKernelStopModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC84C;
L_088FC84C:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_088FC860; }
    goto L_088FC854;
L_088FC854:;
    a0 = LD32(s0);
    v0 = sceKernelUnloadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC85C;
L_088FC85C:;
    goto L_088FC860;
L_088FC860:;
    sp = sp + 32;
    return v0;
}

/* 088FC86C */
void func_088FC86C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC86C:;
    sp = sp - 16;
    v0 = func_088FC8E4(a2, a3, t0, t1, t2, t3);
    goto L_088FC87C;
L_088FC87C:;
    v1 = 0x80020000u;
    v1 = v1 | 0x1ad;
    cnd_ = v0 == v1;
    a0 = 981;
    if (cnd_) { goto L_088FC8A4; }
    goto L_088FC88C;
L_088FC88C:;
    goto L_088FC890;
L_088FC890:;
    v1 = 1;
    v0 = D_08B46008 - (24584);
    ST8(v0+24584, v1);
    sp = sp + 16;
    return;
L_088FC8A4:;
    v0 = func_088FC9CC(a0, 0, 0, 0, 0, 0);
    goto L_088FC8AC;
L_088FC8AC:;
    goto L_088FC890;
}

/* 088FC8B4 */
void func_088FC8B4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC8B4:;
    sp = sp - 16;
    v0 = D_08B46008 - (24584);
    ST8(v0+24584, 0);
    v0 = func_088FCA34(a2, a3, t0, t1, t2, t3);
    goto L_088FC8C8;
L_088FC8C8:;
    sp = sp + 16;
    return;
}

/* 088FC8D4 */
u32 func_088FC8D4(void)
{
    u32 v0 = 0, v1 = 0;
L_088FC8D4:;
    v1 = D_08B46008 - (24584);
    v0 = LD_U8(v1+24584);
    v0 = v0 & 0xff;
    return v0;
}

/* 088FC8E4 */
u32 func_088FC8E4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC8E4:;
    sp = sp - 16;
    v0 = D_08B161A0 - (24992);
    a1 = 1;
    a0 = LD32(v0+24992);
    v0 = sceKernelPollSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC8FC;
L_088FC8FC:;
    sp = sp + 16;
    return v0;
}

/* 088FC908 */
u32 func_088FC908(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC908:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = a1 + 0;
    s2 = v0 & 0xff;
    s1 = a1 + 0;
    v0 = func_088FC9CC(a0, a3, t0, t1, t2, t3);
    goto L_088FC930;
L_088FC930:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC9A4; }
    goto L_088FC938;
L_088FC938:;
    v0 = sceUmdGetDriveStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC940;
L_088FC940:;
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088FC9A8; }
    goto L_088FC94C;
L_088FC94C:;
    cnd_ = s2 == 0;
    s2 = 0x80020000u;
    if (cnd_) { goto L_088FC9C0; }
    goto L_088FC954;
L_088FC954:;
    s2 = s2 | 0x1a8;
    a1 = 0xf0000u;
    goto L_088FC95C;
L_088FC95C:;
    a1 = a1 | 0x4240;
    a0 = 32;
    v0 = sceUmdWaitDriveStatCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC968;
L_088FC968:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FC9A4; }
    goto L_088FC970;
L_088FC970:;
    cnd_ = v0 != s2;
    if (cnd_) { goto L_088FC99C; }
    goto L_088FC978;
L_088FC978:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC980;
L_088FC980:;
    a0 = 0xf0000u;
    a0 = a0 | 0x4240;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC98C;
L_088FC98C:;
    a0 = s1 + 0;
    v0 = func_088FC9CC(a0, 0, 0, 0, 0, 0);
    goto L_088FC994;
L_088FC994:;
    a1 = 0xf0000u;
    goto L_088FC95C;
L_088FC99C:;
    v0 = func_088FCA34(0, 0, 0, 0, 0, 0);
    goto L_088FC9A4;
L_088FC9A4:;
    v0 = s0 + 0;
    goto L_088FC9A8;
L_088FC9A8:;
    sp = sp + 16;
    return v0;
L_088FC9C0:;
    s0 = 0x80210000u;
    s0 = s0 | 0x3;
    goto L_088FC99C;
}

/* 088FC9CC */
u32 func_088FC9CC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FC9CC:;
    sp = sp - 16;
    v0 = D_08B161A0 - (24992);
    s0 = a0 + 0;
    a1 = 1;
    a2 = 0 + 0;
    a0 = LD32(v0+24992);
    v0 = sceKernelWaitSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FC9F0;
L_088FC9F0:;
    cnd_ = (s32)v0 < 0;
    v1 = D_08B46010 - (24592);
    if (cnd_) { goto L_088FC9FC; }
    goto L_088FC9F8;
L_088FC9F8:;
    ST32(v1+24592, s0);
    goto L_088FC9FC;
L_088FC9FC:;
    sp = sp + 16;
    return v0;
}

/* 088FCA0C */
void func_088FCA0C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FCA0C:;
    sp = sp - 16;
    v0 = D_08B161A0 - (24992);
    a1 = 1;
    a0 = LD32(v0+24992);
    a2 = 0 + 0;
    v0 = sceKernelWaitSemaCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCA28;
L_088FCA28:;
    sp = sp + 16;
    return;
}

/* 088FCA34 */
u32 func_088FCA34(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FCA34:;
    sp = sp - 16;
    v0 = D_08B161A0 - (24992);
    a1 = 1;
    a0 = LD32(v0+24992);
    v0 = D_08B46010 - (24592);
    ST32(v0+24592, 0);
    v0 = sceKernelSignalSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCA54;
L_088FCA54:;
    sp = sp + 16;
    return v0;
}

/* 088FCA60 */
void func_088FCA60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FCA60:;
    sp = sp - 16;
    v0 = D_08AD8E0C - (-29172);
    a3 = a3 & 0xff;
    v1 = a1 + 0;
    s0 = a2 + 0;
    cnd_ = a3 != 0;
    t0 = v0 - 29172;
    if (cnd_) { goto L_088FCA8C; }
    goto L_088FCA84;
L_088FCA84:;
    v0 = D_08AD8E14 - (-29164);
    t0 = v0 - 29164;
    goto L_088FCA8C;
L_088FCA8C:;
    a1 = D_08AD8E2C - (-29140);
    a2 = v1 + 0;
    t1 = a0 + 0;
    a1 = a1 - 29140;
    a0 = s0 + 0;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FCAA8;
L_088FCAA8:;
    v1 = (u32)(s32)LD_S8(s0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088FCAE0; }
    goto L_088FCAB4;
L_088FCAB4:;
    a0 = s0 + 0;
    a3 = 92;
    goto L_088FCABC;
L_088FCABC:;
    v0 = LD_U8(a0);
    a2 = a2 + 1;
    v1 = (u32)(s32)(s8)v0;
    cnd_ = v1 == a3;
    a1 = s0 + a2;
    if (cnd_) { goto L_088FCAF8; }
    goto L_088FCAD0;
L_088FCAD0:;
    ST8(a0, v0);
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088FCABC; }
    goto L_088FCAE0;
L_088FCAE0:;
    a0 = s0 + 0;
    func_08A8B1E8(a0);
    goto L_088FCAE8;
L_088FCAE8:;
    sp = sp + 16;
    return;
L_088FCAF8:;
    v0 = 47;
    goto L_088FCAD0;
}

/* 088FCB00 */
void func_088FCB00(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FCB00:;
    sp = sp - 16;
    a3 = 0 + 0;
    func_088FCA60(a0, a1, a2, a3, t2, t3);
    goto L_088FCB10;
L_088FCB10:;
    sp = sp + 16;
    return;
}

/* 088FCB1C */
u64 func_088FCB1C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FCB1C:;
    t8 = 0x9e370000u;
    sp = sp - 16;
    v0 = a1 < 0xcu;
    t8 = t8 | 0x79b9;
    t9 = a0 + 0;
    s1 = a1 + 0;
    t6 = a2 + 0;
    s0 = a1 + 0;
    t7 = t8 + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088FCC74; }
    goto L_088FCB50;
L_088FCB50:;
    a1 = LD_U8(t9+1);
    a2 = LD_U8(t9+5);
    a0 = LD_U8(t9);
    t1 = LD_U8(t9+2);
    v1 = LD_U8(t9+4);
    a3 = LD_U8(t9+6);
    t0 = LD_U8(t9+9);
    t4 = LD_U8(t9+3);
    t5 = LD_U8(t9+7);
    v0 = LD_U8(t9+8);
    t3 = LD_U8(t9+10);
    t2 = LD_U8(t9+11);
    a1 = a1 << 8;
    a2 = a2 << 8;
    a0 = a0 + a1;
    v1 = v1 + a2;
    t1 = t1 << 16;
    a3 = a3 << 16;
    t0 = t0 << 8;
    a0 = a0 + t1;
    v1 = v1 + a3;
    v0 = v0 + t0;
    t4 = t4 << 24;
    t5 = t5 << 24;
    t3 = t3 << 16;
    v1 = v1 + t5;
    a0 = a0 + t4;
    v0 = v0 + t3;
    t2 = t2 << 24;
    t8 = t8 + v1;
    v0 = v0 + t2;
    t7 = t7 + a0;
    t6 = t6 + v0;
    t7 = t7 - t8;
    v0 = t6 >> 13;
    t7 = t7 - t6;
    t7 = t7 ^ v0;
    t8 = t8 - t6;
    v0 = t7 << 8;
    t8 = t8 - t7;
    t8 = t8 ^ v0;
    t6 = t6 - t7;
    v0 = t8 >> 13;
    t6 = t6 - t8;
    t6 = t6 ^ v0;
    t7 = t7 - t8;
    v0 = t6 >> 12;
    t7 = t7 - t6;
    t7 = t7 ^ v0;
    t8 = t8 - t6;
    v0 = t7 << 16;
    t8 = t8 - t7;
    t8 = t8 ^ v0;
    t6 = t6 - t7;
    v0 = t8 >> 5;
    t6 = t6 - t8;
    t6 = t6 ^ v0;
    t7 = t7 - t8;
    v0 = t6 >> 3;
    t7 = t7 - t6;
    t7 = t7 ^ v0;
    t8 = t8 - t6;
    v0 = t7 << 10;
    t8 = t8 - t7;
    t8 = t8 ^ v0;
    t6 = t6 - t7;
    s0 = s0 - 12;
    t6 = t6 - t8;
    v0 = t8 >> 15;
    v1 = s0 < 0xcu;
    t6 = t6 ^ v0;
    cnd_ = v1 == 0;
    t9 = t9 + 12;
    if (cnd_) { goto L_088FCB50; }
    goto L_088FCC74;
L_088FCC74:;
    cnd_ = v1 == 0;
    t6 = t6 + s1;
    if (cnd_) { goto L_088FCD14; }
    goto L_088FCC7C;
L_088FCC7C:;
    v1 = D_08AD8E34 - (-29132);
    v0 = s0 << 2;
    v1 = v1 - 29132;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088FCC98u: goto L_088FCC98; case 0x088FCCA4u: goto L_088FCCA4; case 0x088FCCB0u: goto L_088FCCB0; case 0x088FCCBCu: goto L_088FCCBC; case 0x088FCCC8u: goto L_088FCCC8; case 0x088FCCD4u: goto L_088FCCD4; case 0x088FCCE0u: goto L_088FCCE0; case 0x088FCCE8u: goto L_088FCCE8; case 0x088FCCF4u: goto L_088FCCF4; case 0x088FCD00u: goto L_088FCD00; case 0x088FCD0Cu: goto L_088FCD0C; case 0x088FCD14u: goto L_088FCD14; default: rs_break(0, 0x088fcc90); }
L_088FCC98:;
    v0 = LD_U8(t9+10);
    v0 = v0 << 24;
    t6 = t6 + v0;
    goto L_088FCCA4;
L_088FCCA4:;
    v0 = LD_U8(t9+9);
    v0 = v0 << 16;
    t6 = t6 + v0;
    goto L_088FCCB0;
L_088FCCB0:;
    v0 = LD_U8(t9+8);
    v0 = v0 << 8;
    t6 = t6 + v0;
    goto L_088FCCBC;
L_088FCCBC:;
    v0 = LD_U8(t9+7);
    v0 = v0 << 24;
    t8 = t8 + v0;
    goto L_088FCCC8;
L_088FCCC8:;
    v0 = LD_U8(t9+6);
    v0 = v0 << 16;
    t8 = t8 + v0;
    goto L_088FCCD4;
L_088FCCD4:;
    v0 = LD_U8(t9+5);
    v0 = v0 << 8;
    t8 = t8 + v0;
    goto L_088FCCE0;
L_088FCCE0:;
    v0 = LD_U8(t9+4);
    t8 = t8 + v0;
    goto L_088FCCE8;
L_088FCCE8:;
    v0 = LD_U8(t9+3);
    v0 = v0 << 24;
    t7 = t7 + v0;
    goto L_088FCCF4;
L_088FCCF4:;
    v0 = LD_U8(t9+2);
    v0 = v0 << 16;
    t7 = t7 + v0;
    goto L_088FCD00;
L_088FCD00:;
    v0 = LD_U8(t9+1);
    v0 = v0 << 8;
    t7 = t7 + v0;
    goto L_088FCD0C;
L_088FCD0C:;
    v0 = LD_U8(t9);
    t7 = t7 + v0;
    goto L_088FCD14;
L_088FCD14:;
    t7 = t7 - t8;
    v0 = t6 >> 13;
    t7 = t7 - t6;
    t7 = t7 ^ v0;
    t8 = t8 - t6;
    v0 = t7 << 8;
    t8 = t8 - t7;
    t8 = t8 ^ v0;
    t6 = t6 - t7;
    v0 = t8 >> 13;
    t6 = t6 - t8;
    t6 = t6 ^ v0;
    t7 = t7 - t8;
    v0 = t6 >> 12;
    t7 = t7 - t6;
    t7 = t7 ^ v0;
    t8 = t8 - t6;
    v0 = t7 << 16;
    t8 = t8 - t7;
    t8 = t8 ^ v0;
    t6 = t6 - t7;
    v0 = t8 >> 5;
    t6 = t6 - t8;
    t6 = t6 ^ v0;
    t7 = t7 - t8;
    v0 = t6 >> 3;
    t7 = t7 - t6;
    t7 = t7 ^ v0;
    t8 = t8 - t6;
    v0 = t7 << 10;
    t8 = t8 - t7;
    t8 = t8 ^ v0;
    t6 = t6 - t7;
    v0 = t8 >> 15;
    t6 = t6 - t8;
    t6 = t6 ^ v0;
    v0 = t6 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088FCDB8 */
rv_t func_088FCDB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FCDB8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FCDCC;
L_088FCDCC:;
    a2 = 0x4c10000u;
    a0 = s0 + 0;
    a1 = v0 + 0;
    a2 = a2 | 0x1db7;
    { u64 r_ = func_088FCB1C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FCDE0;
L_088FCDE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FCDF0 */
u32 func_088FCDF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[640] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 640);
L_088FCDF0:;
    sp = sp - 640;
    s5 = a0 + 0;
    s4 = a1 + 0;
    s1 = 0 + 0;
    v0 = sceIoDopen(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCE24;
L_088FCE24:;
    s0 = v0 + 0;
    cnd_ = (s32)s0 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FCE9C; }
    goto L_088FCE30;
L_088FCE30:;
    s2 = sp + 256;
    s3 = 4096;
    s6 = D_08AD8E64 - (-29084);
    goto L_088FCE3C;
L_088FCE3C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = sceIoDread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCE48;
L_088FCE48:;
    cnd_ = (s32)v0 <= 0;
    v0 = LD32(sp+256);
    if (cnd_) { goto L_088FCE90; }
    goto L_088FCE50;
L_088FCE50:;
    v0 = v0 & 0xf000;
    cnd_ = v0 == s3;
    a2 = s5 + 0;
    if (cnd_) { goto L_088FCE64; }
    goto L_088FCE5C;
L_088FCE5C:;
    s1 = s1 + 1;
    goto L_088FCE3C;
L_088FCE64:;
    a3 = sp + 344;
    a0 = sp + 0;
    cnd_ = s4 == 0;
    a1 = s6 - 29084;
    if (cnd_) { goto L_088FCE3C; }
    goto L_088FCE74;
L_088FCE74:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FCE7C;
L_088FCE7C:;
    a0 = sp + 0;
    a1 = s4 + 0;
    v0 = func_088FCDF0(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088FCE88;
L_088FCE88:;
    s1 = s1 + v0;
    goto L_088FCE3C;
L_088FCE90:;
    a0 = s0 + 0;
    v0 = sceIoDclose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCE98;
L_088FCE98:;
    v0 = s1 + 0;
    goto L_088FCE9C;
L_088FCE9C:;
    sp = sp + 640;
    return v0;
}

/* 088FCEC4 */
u32 func_088FCEC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[656] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 656);
L_088FCEC4:;
    sp = sp - 656;
    s5 = a2 + 0;
    s4 = a0 + 0;
    s2 = a1 + 0;
    v0 = sceIoDopen(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCF00;
L_088FCF00:;
    cnd_ = (s32)v0 < 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_088FD00C; }
    goto L_088FCF08;
L_088FCF08:;
    s6 = sp + 256;
    s7 = 4096;
    fp = D_08AD8E6C - (-29076);
    goto L_088FCF14;
L_088FCF14:;
    a0 = s3 + 0;
    a1 = s6 + 0;
    v0 = sceIoDread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCF20;
L_088FCF20:;
    a2 = s4 + 0;
    a3 = sp + 344;
    a1 = fp - 29076;
    cnd_ = (s32)v0 <= 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088FD004; }
    goto L_088FCF34;
L_088FCF34:;
    v0 = LD32(sp+256);
    v0 = v0 & 0xf000;
    cnd_ = v0 == s7;
    v0 = D_08AD8E64 - (-29084);
    if (cnd_) { goto L_088FCFDC; }
    goto L_088FCF44;
L_088FCF44:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FCF4C;
L_088FCF4C:;
    v1 = D_08B161A8 - (25000);
    v0 = LD32(v1+25000);
    t_ = v0;
    a0 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FCF5C;
L_088FCF5C:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    v0 = func_088FD1F0(a0);
    goto L_088FCF68;
L_088FCF68:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088FCF94; }
    goto L_088FCF74;
L_088FCF74:;
    a1 = LD32(v0+4);
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FCF7C;
L_088FCF7C:;
    v1 = D_08AD8E74 - (-29068);
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a0 = v1 - 29068;
    if (cnd_) { goto L_088FCF14; }
    goto L_088FCF8C;
L_088FCF8C:;
    a2 = LD32(s0+4);
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FCF94;
L_088FCF94:;
    ST32(s2, s1);
    a0 = sp + 0;
    v1 = LD32(sp+320);
    v0 = LD32(sp+264);
    ST32(s2+8, v1);
    ST32(s2+12, v0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FCFB0;
L_088FCFB0:;
    a0 = D_08B161AC - (25004);
    v1 = LD32(a0+25004);
    v0 = v0 + 1;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FCFC4;
L_088FCFC4:;
    ST32(s2+4, v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FCFD4;
L_088FCFD4:;
    s2 = s2 + 16;
    goto L_088FCF14;
L_088FCFDC:;
    cnd_ = s5 == 0;
    a1 = v0 - 29084;
    if (cnd_) { goto L_088FCF14; }
    goto L_088FCFE4;
L_088FCFE4:;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FCFEC;
L_088FCFEC:;
    a1 = s2 + 0;
    a0 = sp + 0;
    a2 = s5 + 0;
    v0 = func_088FCEC4(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_088FCFFC;
L_088FCFFC:;
    s2 = v0 + 0;
    goto L_088FCF14;
L_088FD004:;
    a0 = s3 + 0;
    v0 = sceIoDclose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD00C;
L_088FD00C:;
    v0 = s2 + 0;
    sp = sp + 656;
    return v0;
}

/* 088FD040 */
void func_088FD040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FD040:;
    sp = sp - 32;
    s4 = D_08B161AC - (25004);
    s3 = a2 + 0;
    s2 = a0 + 0;
    a0 = 8;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088FD0C0; }
    goto L_088FD074;
L_088FD074:;
    a1 = LD32(s1+4);
    goto L_088FD078;
L_088FD078:;
    a0 = s2 + 0;
    a2 = s3 + 0;
    v0 = D_08B46130 - (24880);
    ST32(v0+24880, s1);
    v0 = func_088FCEC4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD08C;
L_088FD08C:;
    v1 = D_08B161A4 - (24996);
    v0 = LD32(v1+24996);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD09C;
L_088FD09C:;
    v0 = s1 + 0;
    goto L_088FD0A0;
L_088FD0A0:;
    sp = sp + 32;
    return;
L_088FD0C0:;
    v0 = LD32(s4+25004);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD0CC;
L_088FD0CC:;
    s1 = v0 + 0;
    a1 = s3 + 0;
    a0 = s2 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FD0A0; }
    goto L_088FD0E0;
L_088FD0E0:;
    v0 = func_088FCDF0(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088FD0E8;
L_088FD0E8:;
    s0 = v0 << 4;
    v1 = LD32(s4+25004);
    ST32(s1, v0);
    s0 = s0 + 16;
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD100;
L_088FD100:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    a2 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088FD124; }
    goto L_088FD114;
L_088FD114:;
    a0 = v0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FD11C;
L_088FD11C:;
    a1 = LD32(s1+4);
    goto L_088FD078;
L_088FD124:;
    v0 = D_08B161B0 - (25008);
    v1 = LD32(v0+25008);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD134;
L_088FD134:;
    v0 = 0 + 0;
    goto L_088FD0A0;
}

/* 088FD13C */
rv_t func_088FD13C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0;
    float f0 = 0;
    int cnd_;
L_088FD13C:;
    a1 = LD32(a0);
    t4 = a0 + 0;
    a0 = 0 + 0;
    v0 = a1 - 1;
    cnd_ = (s32)v0 <= 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088FD1E8; }
    goto L_088FD154;
L_088FD154:;
    t3 = a0 + 1;
    v0 = (s32)t3 < (s32)v1;
    cnd_ = v0 == 0;
    t1 = t3 + 0;
    if (cnd_) { goto L_088FD1D4; }
    goto L_088FD164;
L_088FD164:;
    v0 = LD32(t4+4);
    a0 = a0 << 4;
    v1 = t3 << 4;
    a2 = v1 + v0;
    a3 = a0 + v0;
    goto L_088FD178;
L_088FD178:;
    t2 = LD32(a2);
    t0 = LD32(a3);
    v0 = t2 < t0;
    cnd_ = v0 == 0;
    t1 = t1 + 1;
    if (cnd_) { goto L_088FD1C8; }
    goto L_088FD18C;
L_088FD18C:;
    a1 = LD32(a2+12);
    v0 = LD32(a3+8);
    v1 = LD32(a3+12);
    a0 = LD32(a2+8);
    ST32(a2, t0);
    ST32(a2+8, v0);
    ST32(a2+12, v1);
    v0 = LD32(a3+4);
    v1 = LD32(a2+4);
    ST32(a3+8, a0);
    ST32(a3, t2);
    ST32(a3+12, a1);
    ST32(a2+4, v0);
    a1 = LD32(t4);
    ST32(a3+4, v1);
    goto L_088FD1C8;
L_088FD1C8:;
    v0 = (s32)t1 < (s32)a1;
    cnd_ = v0 != 0;
    a2 = a2 + 16;
    if (cnd_) { goto L_088FD178; }
    goto L_088FD1D4;
L_088FD1D4:;
    v0 = a1 - 1;
    v0 = (s32)t3 < (s32)v0;
    a0 = t3 + 0;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088FD154; }
    goto L_088FD1E8;
L_088FD1E8:;
    return (rv_t){ v0, v1, f0 };
}

/* 088FD1F0 */
u32 func_088FD1F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088FD1F0:;
    v0 = D_08B46130 - (24880);
    v0 = LD32(v0+24880);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088FD240; }
    goto L_088FD200;
L_088FD200:;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FD240; }
    goto L_088FD20C;
L_088FD20C:;
    v0 = LD32(v0);
    cnd_ = (s32)v0 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088FD240; }
    goto L_088FD218;
L_088FD218:;
    t0 = v0 + 0;
    v0 = LD32(v1);
    goto L_088FD220;
L_088FD220:;
    a2 = a2 + 1;
    a3 = v1 + 0;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a0;
    v1 = v1 + 16;
    if (cnd_) { goto L_088FD240; }
    goto L_088FD234;
L_088FD234:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088FD220; }
    goto L_088FD23C;
L_088FD23C:;
    a3 = 0 + 0;
    goto L_088FD240;
L_088FD240:;
    v0 = a3 + 0;
    return v0;
}

/* 088FD248 */
u32 func_088FD248(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FD248:;
    sp = sp - 48;
    v0 = D_08B46130 - (24880);
    v0 = LD32(v0+24880);
    cnd_ = v0 == 0;
    s7 = a0 + 0;
    if (cnd_) { goto L_088FD2E4; }
    goto L_088FD280;
L_088FD280:;
    s4 = LD32(v0+4);
    cnd_ = s4 == 0;
    v1 = D_08B161A8 - (25000);
    if (cnd_) { goto L_088FD2E4; }
    goto L_088FD28C;
L_088FD28C:;
    s3 = LD32(v0);
    v0 = LD32(v1+25000);
    t_ = v0;
    s5 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD29C;
L_088FD29C:;
    cnd_ = (s32)s3 < 0;
    s6 = v0 + 0;
    if (cnd_) { goto L_088FD2E4; }
    goto L_088FD2A4;
L_088FD2A4:;
    v0 = s5 + s3;
    goto L_088FD2A8;
L_088FD2A8:;
    s1 = (u32)((s32)v0 >> 1);
    s2 = s1 << 4;
    s0 = s2 + s4;
    v0 = LD32(s0);
    cnd_ = v0 == s6;
    a0 = s7 + 0;
    if (cnd_) { goto L_088FD318; }
    goto L_088FD2C0;
L_088FD2C0:;
    v1 = s2 + s4;
    v0 = LD32(v1);
    v0 = s6 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { s5 = s1 + 1; goto L_088FD2D8; }
    goto L_088FD2D4;
L_088FD2D4:;
    s3 = s1 - 1;
    goto L_088FD2D8;
L_088FD2D8:;
    v0 = (s32)s3 < (s32)s5;
    cnd_ = v0 == 0;
    v0 = s5 + s3;
    if (cnd_) { goto L_088FD2A8; }
    goto L_088FD2E4;
L_088FD2E4:;
    v1 = 0 + 0;
    goto L_088FD2EC;
L_088FD2EC:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_088FD318:;
    a1 = LD32(s0+4);
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FD320;
L_088FD320:;
    cnd_ = v0 != 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_088FD2C0; }
    goto L_088FD328;
L_088FD328:;
    goto L_088FD2EC;
}

/* 088FD330 */
u32 func_088FD330(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD330:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_088FD248(a0);
    goto L_088FD348;
L_088FD348:;
    a1 = D_08AD8EC4 - (-28988);
    s1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = a1 - 28988;
    if (cnd_) { goto L_088FD368; }
    goto L_088FD35C;
L_088FD35C:;
    a2 = LD32(v0+8);
    a3 = LD32(v0+12);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD368;
L_088FD368:;
    v0 = s1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088FD380 */
u32 func_088FD380(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FD380:;
    sp = sp - 32;
    v0 = D_08B46164 - (24932);
    s1 = v0 + 24932;
    s3 = a1 + 0;
    a1 = s1 + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    v0 = func_088FD330(a0, a1);
    goto L_088FD3B4;
L_088FD3B4:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_088FD3EC; }
    goto L_088FD3C4;
L_088FD3C4:;
    a0 = s1 + 0;
    goto L_088FD3C8;
L_088FD3C8:;
    v0 = sceIoOpen(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD3D0;
L_088FD3D0:;
    sp = sp + 32;
    return v0;
L_088FD3EC:;
    v1 = D_08B161A8 - (25000);
    v0 = LD32(v1+25000);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD3FC;
L_088FD3FC:;
    a0 = D_08AD8EE0 - (-28960);
    a0 = a0 - 28960;
    a2 = v0 + 0;
    a1 = s0 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD410;
L_088FD410:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    goto L_088FD3C8;
}

/* 088FD420 */
u32 func_088FD420(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088FD420:;
    a1 = D_08B461C4 - (25028);
    sp = sp - 112;
    a1 = a1 + 25028;
    s1 = a0 + 0;
    v0 = func_088FD330(a0, a1);
    goto L_088FD440;
L_088FD440:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088FD460; }
    goto L_088FD448;
L_088FD448:;
    v0 = LD32(v0+12);
    goto L_088FD44C;
L_088FD44C:;
    sp = sp + 112;
    return v0;
L_088FD460:;
    v1 = D_08B161A8 - (25000);
    v0 = LD32(v1+25000);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD470;
L_088FD470:;
    a0 = D_08AD8EE0 - (-28960);
    a2 = v0 + 0;
    a0 = a0 - 28960;
    a1 = s1 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD484;
L_088FD484:;
    a0 = s1 + 0;
    a1 = sp + 0;
    v0 = sceIoGetstat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD490;
L_088FD490:;
    a0 = D_08AD8F64 - (-28828);
    a0 = a0 - 28828;
    a2 = s1 + 0;
    a1 = v0 + 0;
    s0 = v0 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD4A8;
L_088FD4A8:;
    v0 = LD32(sp+8);
    s0 = (s32)s0 < 0;
    if (s0 != 0) v0 = 0;
    goto L_088FD44C;
}

/* 088FD4B8 */
void func_088FD4B8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FD4B8:;
    sp = sp - 32;
    s0 = D_08B29960 - (-26272);
    s0 = s0 - 26272;
    a0 = s0 + 0;
    a1 = 30;
    func_0889638C(a0, a1, t1, t2, t3);
    goto L_088FD4DC;
L_088FD4DC:;
    v0 = D_08AED048 - (-12216);
    f20 = BITSF(LD32(v0-12216));
    a0 = s0 + 0;
    a1 = 0 + 0;
    f12 = f20;
    a2 = 461;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD4FC;
L_088FD4FC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 1;
    a2 = 462;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD514;
L_088FD514:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 2;
    a2 = 463;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD52C;
L_088FD52C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 3;
    a2 = 464;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD544;
L_088FD544:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 4;
    a2 = 449;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD55C;
L_088FD55C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 5;
    a2 = 451;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD574;
L_088FD574:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 6;
    a2 = 452;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD58C;
L_088FD58C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 8;
    a2 = 456;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD5A4;
L_088FD5A4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 9;
    a2 = 455;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD5BC;
L_088FD5BC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 10;
    a2 = 457;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD5D4;
L_088FD5D4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 11;
    a2 = 458;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD5EC;
L_088FD5EC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 14;
    a2 = 450;
    a3 = 2;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD604;
L_088FD604:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 15;
    a2 = 461;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD61C;
L_088FD61C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 16;
    a2 = 462;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD634;
L_088FD634:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 17;
    a2 = 463;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD64C;
L_088FD64C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 18;
    a2 = 464;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD664;
L_088FD664:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 19;
    a2 = 449;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD67C;
L_088FD67C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 20;
    a2 = 451;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD694;
L_088FD694:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 21;
    a2 = 452;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD6AC;
L_088FD6AC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 23;
    a2 = 456;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD6C4;
L_088FD6C4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 24;
    a2 = 455;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD6DC;
L_088FD6DC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 25;
    a2 = 457;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD6F4;
L_088FD6F4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 26;
    a2 = 458;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD70C;
L_088FD70C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 29;
    a2 = 450;
    a3 = 0 + 0;
    func_088965C8(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088FD724;
L_088FD724:;
    sp = sp + 32;
    return;
}

/* 088FD738 */
void func_088FD738(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD738:;
    a0 = D_08B29960 - (-26272);
    sp = sp - 16;
    a0 = a0 - 26272;
    { rv_t r_ = func_08896444(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD74C;
L_088FD74C:;
    sp = sp + 16;
    return;
}

/* 088FD758 */
u32 func_088FD758(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD758:;
    sp = sp - 16;
    v0 = func_0890EA18();
    goto L_088FD768;
L_088FD768:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    sp = sp + 16;
    return v0;
}

/* 088FD77C */
u32 func_088FD77C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD77C:;
    sp = sp - 16;
    v0 = func_0890EA18();
    goto L_088FD790;
L_088FD790:;
    f12 = BITSF(0);
    v1 = D_08B2C12C - (-16084);
    s0 = v1 - 16084;
    f13 = f12;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088FD7C0; }
    goto L_088FD7AC;
L_088FD7AC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088FD7C0:;
    v0 = (u32)-1;
    v1 = D_08AED04C - (-12212);
    ST32(s0+80, v0);
    v0 = D_08AED050 - (-12208);
    f14 = BITSF(LD32(v1-12212));
    f15 = BITSF(LD32(v0-12208));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_088FD7DC;
L_088FD7DC:;
    v0 = 0xff000000u;
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+64, v0);
    ST32(s0+84, 0);
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FD7F4;
L_088FD7F4:;
    v0 = func_08901790();
    goto L_088FD7FC;
L_088FD7FC:;
    v1 = 0 + 0;
    goto L_088FD7AC;
}

/* 088FD804 */
void func_088FD804(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FD804:;
    sp = sp - 32;
    s0 = a2 + 1;
    v0 = s0 << 1;
    v1 = 1;
    s4 = a0 + 0;
    a0 = v0 + 0;
    v0 = D_08B461F4 - (25076);
    s3 = D_08B461F8 - (25080);
    ST8(v0+25076, v1);
    s2 = a1 + 0;
    s1 = D_08B461FC - (25084);
    ST32(s3+25080, a1);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FD850;
L_088FD850:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    ST32(s1+25084, v0);
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FD860;
L_088FD860:;
    a0 = s4 + 0;
    a1 = LD32(s3+25080);
    a2 = LD32(s1+25084);
    a3 = s0 + 0;
    t0 = 4;
    func_0890E204(a0, a1, a2, a3, t0);
    goto L_088FD878;
L_088FD878:;
    sp = sp + 32;
    return;
}

/* 088FD898 */
void func_088FD898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD898:;
    sp = sp - 16;
    v0 = func_0890E850(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FD8A8;
L_088FD8A8:;
    sp = sp + 16;
    return;
}

/* 088FD8B4 */
void func_088FD8B4(void)
{
L_088FD8B4:;
    return;
}

/* 088FD8BC */
u32 func_088FD8BC(void)
{
    u32 v0 = 0, v1 = 0;
L_088FD8BC:;
    v1 = D_08BD73F8 - (29688);
    v0 = LD32(v1+29688);
    v0 = v0 ^ 0x1;
    v0 = 0 < v0;
    return v0;
}

/* 088FD8D0 */
void func_088FD8D0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD8D0:;
    sp = sp - 16;
    s1 = D_08B461F8 - (25080);
    v0 = D_08B461F4 - (25076);
    s0 = D_08B461FC - (25084);
    a0 = LD32(s1+25080);
    a1 = LD32(s0+25084);
    ST8(v0+25076, 0);
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FD8FC;
L_088FD8FC:;
    v1 = LD32(s0+25084);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088FD924; }
    goto L_088FD908;
L_088FD908:;
    ST32(s0+25084, 0);
    goto L_088FD90C;
L_088FD90C:;
    ST32(s1+25080, 0);
    sp = sp + 16;
    return;
L_088FD924:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FD92C;
L_088FD92C:;
    ST32(s0+25084, 0);
    goto L_088FD90C;
}

/* 088FD934 */
void func_088FD934(void)
{
    u32 a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD934:;
    a0 = D_08B2889C - (-30564);
    a1 = D_08B28AB8 - (-30024);
    sp = sp - 16;
    a0 = a0 - 30564;
    a1 = a1 - 30024;
    func_088FD9B8(a0, a1);
    goto L_088FD950;
L_088FD950:;
    sp = sp + 16;
    return;
}

/* 088FD95C */
void func_088FD95C(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD95C:;
    sp = sp - 16;
    func_088FDA24();
    goto L_088FD96C;
L_088FD96C:;
    sp = sp + 16;
    return;
}

/* 088FD978 */
void func_088FD978(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD978:;
    sp = sp - 16;
    func_088FDA2C();
    goto L_088FD988;
L_088FD988:;
    sp = sp + 16;
    return;
}

/* 088FD994 */
void func_088FD994(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD994:;
    sp = sp - 16;
    func_088FDCC0(a2, a3, t0, t1, t2, t3);
    goto L_088FD9A4;
L_088FD9A4:;
    sp = sp + 16;
    return;
}

/* 088FD9B0 */
void func_088FD9B0(void)
{
L_088FD9B0:;
    return;
}

/* 088FD9B8 */
void func_088FD9B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FD9B8:;
    sp = sp - 16;
    v1 = D_08B46200 - (25088);
    v0 = D_08B46204 - (25092);
    ST32(v1+25088, a1);
    ST32(v0+25092, a0);
    func_088FDE94();
    goto L_088FD9D4;
L_088FD9D4:;
    v0 = D_08AED054 - (-12204);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-12204));
    a0 = D_08AD8FA4 - (-28764);
    a1 = D_08B161B4 - (25012);
    a0 = a0 - 28764;
    a1 = a1 + 25012;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_088FD9FC;
L_088FD9FC:;
    a0 = D_08AD8FC0 - (-28736);
    a1 = D_08B46208 - (25096);
    a0 = a0 - 28736;
    a1 = a1 + 25096;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FDA18;
L_088FDA18:;
    sp = sp + 16;
    return;
}

/* 088FDA24 */
void func_088FDA24(void)
{
L_088FDA24:;
    return;
}

/* 088FDA2C */
void func_088FDA2C(void)
{
L_088FDA2C:;
    return;
}

/* 088FDA34 */
float func_088FDA34(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
L_088FDA34:;
    a0 = a0 & 0xff;
    f0 = BITSF(a0);
    v0 = D_08AED058 - (-12200);
    v1 = D_08B161B4 - (25012);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12200));
    f2 = BITSF(LD32(v1+25012));
    f5 = BITSF(0);
    f1 = f1 - f0;
    f3 = BITSF(FBITS(f2) ^ 0x80000000u);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f4 = f1 - f2;
    if (cnd_) { goto L_088FDAB4; }
    goto L_088FDA6C;
L_088FDA6C:;
    v0 = D_08AED05C - (-12196);
    f0 = BITSF(LD32(v0-12196));
    f1 = f0 - f2;
    f0 = f0 / f1;
    f1 = f4 * f0;
    goto L_088FDA80;
L_088FDA80:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08AED064 - (-12188); goto L_088FDAAC; }
    goto L_088FDA94;
L_088FDA94:;
    v0 = D_08AED060 - (-12192);
    f0 = BITSF(LD32(v0-12192));
    goto L_088FDA9C;
L_088FDA9C:;
    f0 = f1 * f0;
    f5 = f0;
    goto L_088FDAA4;
L_088FDAA4:;
    f0 = f5;
    return f0;
L_088FDAAC:;
    f0 = BITSF(LD32(v0-12188));
    goto L_088FDA9C;
L_088FDAB4:;
    fcc = FCMP(f1, f3, 12);
    f4 = f0 - f2;
    cnd_ = !fcc;
    f1 = f1 + f2;
    if (cnd_) { goto L_088FDAA4; }
    goto L_088FDAC4;
L_088FDAC4:;
    f0 = f0 / f4;
    f1 = f1 * f0;
    goto L_088FDA80;
}

/* 088FDAD0 */
void func_088FDAD0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088FDAD0:;
    v0 = D_08B161B4 - (25012);
    f1 = BITSF(LD32(v0+25012));
    f0 = BITSF(0);
    t1 = a0 & 0xff;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    t2 = a1 & 0xff;
    if (cnd_) { goto L_088FDCB0; }
    goto L_088FDAF0;
L_088FDAF0:;
    v0 = D_08AED068 - (-12184);
    f0 = BITSF(LD32(v0-12184));
    f0 = f1 + f0;
    goto L_088FDAFC;
L_088FDAFC:;
    f0 = BITSF(F2I(f0, 1));
    v0 = 128;
    t0 = t1 - 128;
    ST32(a2, 0);
    v1 = FBITS(f0);
    ST32(a3, 0);
    t4 = 0 + 0;
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    v1 = (s32)v1 < 0;
    if (v1 != 0) v0 = 0;
    a1 = v0 & 0xff;
    v1 = (u32)-128;
    v1 = v1 - a1;
    v0 = a1 - 128;
    v1 = v1 & 0xff;
    t3 = v0 & 0xff;
    t5 = 0 + 0;
    cnd_ = (s32)t0 < 0;
    a0 = t2 - 128;
    if (cnd_) { goto L_088FDCA4; }
    goto L_088FDB48;
L_088FDB48:;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { a0 = ~(0 | a0); goto L_088FDC9C; }
    goto L_088FDB50;
L_088FDB50:;
    v0 = (s32)a1 < (s32)t0;
    cnd_ = v0 != 0;
    v0 = (u32)((s32)t0 >> 31);
    if (cnd_) { goto L_088FDC3C; }
    goto L_088FDB5C;
L_088FDB5C:;
    v0 = (s32)a1 < (s32)a0;
    cnd_ = v0 != 0;
    v0 = (u32)((s32)t0 >> 31);
    if (cnd_) { goto L_088FDC3C; }
    goto L_088FDB68;
L_088FDB68:;
    t0 = D_08B46209 - (25097);
    a0 = LD_U8(t0+25097);
    v0 = a0 < v1;
    cnd_ = v0 != 0;
    t6 = D_08B4620A - (25098);
    if (cnd_) { goto L_088FDC08; }
    goto L_088FDB7C;
L_088FDB7C:;
    v0 = t3 < a0;
    cnd_ = v0 != 0;
    a1 = LD_U8(t6+25098);
    if (cnd_) { goto L_088FDC08; }
    goto L_088FDB88;
L_088FDB88:;
    v0 = a1 < v1;
    cnd_ = v0 != 0;
    v0 = t3 < a1;
    if (cnd_) { goto L_088FDC08; }
    goto L_088FDB94;
L_088FDB94:;
    cnd_ = v0 != 0;
    v0 = (u32)(s32)(s8)t1;
    if (cnd_) { goto L_088FDC08; }
    goto L_088FDB9C;
L_088FDB9C:;
    cnd_ = (s32)v0 < 0;
    v0 = a0 - t1;
    if (cnd_) { goto L_088FDBB0; }
    goto L_088FDBA4;
L_088FDBA4:;
    v0 = (s32)v0 < 6;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a2, 0); goto L_088FDBD0; }
    goto L_088FDBB0;
L_088FDBB0:;
    v0 = t1 < 0x81u;
    cnd_ = v0 != 0;
    v0 = (u32)(s32)(s8)t2;
    if (cnd_) { goto L_088FDBD4; }
    goto L_088FDBBC;
L_088FDBBC:;
    v0 = t1 - a0;
    v0 = (s32)v0 < 6;
    cnd_ = v0 != 0;
    v0 = (u32)(s32)(s8)t2;
    if (cnd_) { goto L_088FDBD4; }
    goto L_088FDBCC;
L_088FDBCC:;
    ST32(a2, 0);
    goto L_088FDBD0;
L_088FDBD0:;
    v0 = (u32)(s32)(s8)t2;
    goto L_088FDBD4;
L_088FDBD4:;
    cnd_ = (s32)v0 < 0;
    v0 = LD_U8(t6+25098);
    if (cnd_) { goto L_088FDBEC; }
    goto L_088FDBDC;
L_088FDBDC:;
    v0 = v0 - t2;
    v0 = (s32)v0 < 6;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, 0); goto L_088FDC08; }
    goto L_088FDBEC;
L_088FDBEC:;
    v0 = t2 < 0x81u;
    cnd_ = v0 != 0;
    v0 = LD_U8(t6+25098);
    if (cnd_) { goto L_088FDC08; }
    goto L_088FDBF8;
L_088FDBF8:;
    v0 = t2 - v0;
    v0 = (s32)v0 < 6;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3, 0); goto L_088FDC08; }
    goto L_088FDC08;
L_088FDC08:;
    cnd_ = t4 == 0;
    if (cnd_) { goto L_088FDC1C; }
    goto L_088FDC10;
L_088FDC10:;
    f0 = BITSF(LD32(a2));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a2, FBITS(f0));
    goto L_088FDC1C;
L_088FDC1C:;
    cnd_ = t5 != 0;
    if (cnd_) { ST8(t0+25097, t1); goto L_088FDC34; }
    goto L_088FDC24;
L_088FDC24:;
    f0 = BITSF(LD32(a3));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a3, FBITS(f0));
    ST8(t0+25097, t1);
    goto L_088FDC34;
L_088FDC34:;
    ST8(t6+25098, t2);
    return;
L_088FDC3C:;
    v1 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 28;
    v1 = v1 >> 28;
    v0 = t0 + v0;
    v1 = a0 + v1;
    v0 = (u32)((s32)v0 >> 4);
    v1 = (u32)((s32)v1 >> 4);
    a0 = v0 << 3;
    a1 = v1 << 3;
    a1 = a1 + v0;
    a0 = a0 + v1;
    v0 = D_08AD8FF0 - (-28688);
    v0 = v0 - 28688;
    a0 = a0 << 2;
    a1 = a1 << 2;
    a1 = a1 + v0;
    a0 = a0 + v0;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a1));
    t0 = D_08B46209 - (25097);
    ST32(a2, FBITS(f0));
    t6 = D_08B4620A - (25098);
    ST32(a3, FBITS(f1));
    goto L_088FDC08;
L_088FDC9C:;
    t5 = 1;
    goto L_088FDB50;
L_088FDCA4:;
    t0 = ~(0 | t0);
    t4 = 1;
    goto L_088FDB48;
L_088FDCB0:;
    v0 = D_08AED068 - (-12184);
    f0 = BITSF(LD32(v0-12184));
    f0 = f1 - f0;
    goto L_088FDAFC;
}

/* 088FDCC0 */
static void func_088FDCC0__orig(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_088FDCC0:;
    sp = sp - 160;
    a0 = sp + 0;
    a1 = 8;
    s2 = 128;
    s1 = 0 + 0;
    v0 = sceCtrlReadBufferPositive(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FDCEC;
L_088FDCEC:;
    cnd_ = v0 == 0;
    a0 = 128;
    if (cnd_) { goto L_088FDD00; }
    goto L_088FDCF4;
L_088FDCF4:;
    s1 = LD32(sp+4);
    a0 = LD_U8(sp+8);
    s2 = LD_U8(sp+9);
    goto L_088FDD00;
L_088FDD00:;
    v0 = D_08B46208 - (25096);
    v1 = LD_U8(v0+25096);
    cnd_ = v1 != 0;
    s3 = D_08B46200 - (25088);
    if (cnd_) { goto L_088FDE78; }
    goto L_088FDD10;
L_088FDD10:;
    f0 = func_088FDA34(a0);
    goto L_088FDD18;
L_088FDD18:;
    s0 = LD32(s3+25088);
    a0 = s2 + 0;
    ST32(s0+12, FBITS(f0));
    f0 = func_088FDA34(a0);
    goto L_088FDD28;
L_088FDD28:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s0+16, FBITS(f0));
    v0 = LD32(s3+25088);
    goto L_088FDD34;
L_088FDD34:;
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_088FDD60; }
    goto L_088FDD4C;
L_088FDD4C:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    t0 = D_08B46204 - (25092);
    if (cnd_) { goto L_088FDD6C; }
    goto L_088FDD60;
L_088FDD60:;
    a0 = 0 + 0;
    v0 = sceKernelPowerTick(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FDD68;
L_088FDD68:;
    t0 = D_08B46204 - (25092);
    goto L_088FDD6C;
L_088FDD6C:;
    a0 = LD32(t0+25092);
    v0 = s1 & 0x4000;
    v0 = v0 < 0x1u;
    v0 = v0 - 1;
    ST8(a0+449, v0);
    v1 = s1 & 0x2000;
    v1 = v1 < 0x1u;
    a0 = LD32(t0+25092);
    v1 = v1 - 1;
    v0 = s1 & 0x8000;
    ST8(a0+450, v1);
    v0 = v0 < 0x1u;
    v0 = v0 - 1;
    a0 = LD32(t0+25092);
    v1 = s1 & 0x1000;
    v1 = v1 < 0x1u;
    ST8(a0+451, v0);
    v1 = v1 - 1;
    v0 = s1 & 0x8;
    a1 = LD32(t0+25092);
    v0 = v0 < 0x1u;
    v0 = v0 - 1;
    ST8(a1+452, v1);
    a0 = s1 & 0x1;
    a1 = a0 << 8;
    a2 = LD32(t0+25092);
    a1 = a1 - a0;
    v1 = s1 & 0x100;
    ST8(a2+455, v0);
    v1 = v1 < 0x1u;
    v1 = v1 - 1;
    a0 = LD32(t0+25092);
    v0 = s1 & 0x200;
    v0 = v0 < 0x1u;
    ST8(a0+456, a1);
    v0 = v0 - 1;
    a3 = s1 & 0x10;
    a0 = LD32(t0+25092);
    a3 = a3 < 0x1u;
    a3 = a3 - 1;
    ST8(a0+457, v1);
    a2 = s1 & 0x40;
    a2 = a2 < 0x1u;
    v1 = LD32(t0+25092);
    a2 = a2 - 1;
    a1 = s1 & 0x80;
    ST8(v1+458, v0);
    a1 = a1 < 0x1u;
    a1 = a1 - 1;
    v0 = LD32(t0+25092);
    a0 = s1 & 0x20;
    ST8(v0+461, a3);
    a0 = a0 < 0x1u;
    a0 = a0 - 1;
    v0 = LD32(t0+25092);
    ST8(v0+462, a2);
    v1 = LD32(t0+25092);
    ST8(v1+463, a1);
    v0 = LD32(t0+25092);
    ST8(v0+464, a0);
    sp = sp + 160;
    return;
L_088FDE78:;
    a2 = LD32(s3+25088);
    a1 = s2 + 0;
    a3 = a2 + 16;
    a2 = a2 + 12;
    func_088FDAD0(a0, a1, a2, a3);
    goto L_088FDE8C;
L_088FDE8C:;
    v0 = LD32(s3+25088);
    goto L_088FDD34;
}

void func_088FDCC0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    func_088FDCC0__orig(a2, a3, t0, t1, t2, t3);
    rs_input_after_pad(), rs_picker_pad();   /* native hook (tools/dc/hooks.py) */
}

/* 088FDE94 */
void func_088FDE94(void)
{
L_088FDE94:;
    return;
}

/* 088FDE9C */
void func_088FDE9C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FDE9C:;
    sp = sp - 16;
    v0 = D_08AED06C - (-12180);
    f12 = BITSF(LD32(v0-12180));
    func_08898184(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088FDEB0;
L_088FDEB0:;
    v0 = D_08AED070 - (-12176);
    f12 = BITSF(LD32(v0-12176));
    { rv_t r_ = func_08898344(0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FDEBC;
L_088FDEBC:;
    a0 = (u32)-1;
    func_088981B0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FDEC4;
L_088FDEC4:;
    a0 = 0xff000000u;
    func_088981E0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FDECC;
L_088FDECC:;
    sp = sp + 16;
    return;
}

/* 088FDED8 */
u32 func_088FDED8(u32 t2, u32 t3)
{
    u32 v0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FDED8:;
    sp = sp - 16;
    v0 = 0 + 0;
    fpu_csr = v0 & 0x0183FFFFu; fcc = (v0 >> 23) & 1;
    func_088F9634(t2, t3);
    goto L_088FDEF0;
L_088FDEF0:;
    func_08832080(0, 0, 0);
    goto L_088FDEF8;
L_088FDEF8:;
    func_08979F90(0, 0, 0, 0, 0, 0);
    goto L_088FDF00;
L_088FDF00:;
    func_08832114();
    goto L_088FDF08;
L_088FDF08:;
    func_08970ED0(0, 0, 0);
    goto L_088FDF10;
L_088FDF10:;
    v0 = func_08971158();
    goto L_088FDF18;
L_088FDF18:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FDF10; }
    goto L_088FDF24;
L_088FDF24:;
    func_08970F64();
    goto L_088FDF2C;
L_088FDF2C:;
    func_08832200(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FDF34;
L_088FDF34:;
    v0 = 0 + 0;
    sp = sp + 16;
    return v0;
}

/* 088FDF44 */
void func_088FDF44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 448);
L_088FDF44:;
    sp = sp - 448;
    t0 = t0 & 0xff;
    ST32(sp+368, a0);
    a0 = sp + 0;
    ST32(sp+372, a1);
    a1 = a3 + 0;
    fp = a2 + 0;
    s5 = D_08B46241 - (25153);
    s4 = D_08B46243 - (25155);
    s3 = D_08B46240 - (25152);
    ST32(sp+376, t0);
    func_088FE4BC(a0, a1, t1, t2, t3, f12, f13);
    goto L_088FDF9C;
L_088FDF9C:;
    v0 = D_08B2BFA4 - (-16476);
    v0 = LD_U8(v0-16476);
    a0 = 0 + 0;
    ST32(sp+384, v0);
    v0 = D_08BB1D80 - (7552);
    v0 = LD_U8(v0+7552);
    ST32(sp+380, v0);
    func_088CAD80(a0);
    goto L_088FDFBC;
L_088FDFBC:;
    v0 = D_08B46234 - (25140);
    v1 = LD32(sp+368);
    ST32(v0+25140, v1);
    v0 = D_08B46238 - (25144);
    v1 = LD32(sp+372);
    ST32(v0+25144, v1);
    v0 = D_08B4623C - (25148);
    ST32(v0+25148, fp);
    v0 = D_08BB1D80 - (7552);
    ST8(v0+7552, 0);
    goto L_088FDFE4;
L_088FDFE4:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 == 0;
    v1 = s3 + 0;
    if (cnd_) { goto L_088FE2AC; }
    goto L_088FDFF0;
L_088FDFF0:;
    v0 = LD_U8(s5+25153);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE2AC; }
    goto L_088FDFFC;
L_088FDFFC:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE028; }
    goto L_088FE008;
L_088FE008:;
    v0 = LD_U8(s5+25153);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE284; }
    goto L_088FE014;
L_088FE014:;
    ST8(v1+25152, 0);
    ST8(s5+25153, 0);
    goto L_088FE01C;
L_088FE01C:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 != 0;
    v1 = D_08B46240 - (25152);
    if (cnd_) { goto L_088FE008; }
    goto L_088FE028;
L_088FE028:;
    s2 = D_08B46242 - (25154);
    func_088FE2B8();
    goto L_088FE030;
L_088FE030:;
    v0 = LD_U8(s2+25154);
    cnd_ = v0 == 0;
    v1 = s2 + 0;
    if (cnd_) { goto L_088FE278; }
    goto L_088FE03C;
L_088FE03C:;
    v0 = LD_U8(s4+25155);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s2+25154, 0); goto L_088FE27C; }
    goto L_088FE048;
L_088FE048:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE05C; }
    goto L_088FE054;
L_088FE054:;
    ST8(v1+25154, 0);
    ST8(s4+25155, 0);
    goto L_088FE05C;
L_088FE05C:;
    func_088FE2B8();
    goto L_088FE064;
L_088FE064:;
    v0 = LD_U8(s4+25155);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE250; }
    goto L_088FE070;
L_088FE070:;
    ST8(s2+25154, 0);
    ST8(s4+25155, 0);
    v0 = LD_U8(s2+25154);
    goto L_088FE07C;
L_088FE07C:;
    cnd_ = v0 != 0;
    v1 = D_08B46242 - (25154);
    if (cnd_) { goto L_088FE048; }
    goto L_088FE084;
L_088FE084:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 != 0;
    v0 = LD_U8(s2+25154);
    if (cnd_) { goto L_088FE098; }
    goto L_088FE090;
L_088FE090:;
    cnd_ = v0 == 0;
    a0 = 184;
    if (cnd_) { goto L_088FE120; }
    goto L_088FE098;
L_088FE098:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 != 0;
    v0 = LD_U8(s2+25154);
    if (cnd_) { goto L_088FDFE4; }
    goto L_088FE0A4;
L_088FE0A4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FDFE4; }
    goto L_088FE0AC;
L_088FE0AC:;
    a0 = 240;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE0B4;
L_088FE0B4:;
    s0 = D_08B46230 - (25136);
    v0 = D_08B4622C - (25132);
    a0 = sp + 0;
    ST32(v0+25132, 0);
    ST32(s0+25136, sp);
    func_088FE8DC(a0, 0, 0, 0, 0, 0, 0);
    goto L_088FE0CC;
L_088FE0CC:;
    ST32(s0+25136, 0);
    func_088FF488();
    goto L_088FE0D4;
L_088FE0D4:;
    a0 = LD32(sp+384);
    func_088CAD80(a0);
    goto L_088FE0DC;
L_088FE0DC:;
    v0 = LD32(sp+380);
    v1 = D_08BB1D80 - (7552);
    a0 = sp + 0;
    ST8(v1+7552, v0);
    func_088FE5B4(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FE0F0;
L_088FE0F0:;
    sp = sp + 448;
    return;
L_088FE120:;
    s7 = D_08B46228 - (25128);
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE128;
L_088FE128:;
    s6 = s7 + 0;
    a1 = LD32(sp+368);
    goto L_088FE130;
L_088FE130:;
    a2 = LD32(sp+372);
    t0 = LD32(sp+376);
    a0 = sp + 0;
    a3 = fp + 0;
    s0 = LD32(s6+25128);
    v0 = func_088FE5D0(a0, a1, a2, a3, 0, 0);
    goto L_088FE148;
L_088FE148:;
    s1 = v0 + 0;
    a0 = sp + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FE238; }
    goto L_088FE158;
L_088FE158:;
    v1 = D_08B4622C - (25132);
    ST32(v1+25132, sp);
    goto L_088FE160;
L_088FE160:;
    ST8(s3+25152, 0);
    ST8(s2+25154, 0);
    ST8(s4+25155, 0);
    ST8(s5+25153, 0);
    cnd_ = v0 != 0;
    a1 = LD32(sp+368);
    if (cnd_) { goto L_088FE130; }
    goto L_088FE178;
L_088FE178:;
    func_088FF488();
    goto L_088FE180;
L_088FE180:;
    func_088FE2B8();
    goto L_088FE188;
L_088FE188:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088FE098; }
    goto L_088FE190;
L_088FE190:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 != 0;
    v0 = LD_U8(s2+25154);
    if (cnd_) { goto L_088FE098; }
    goto L_088FE19C;
L_088FE19C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE098; }
    goto L_088FE1A4;
L_088FE1A4:;
    a0 = 221;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE1AC;
L_088FE1AC:;
    a0 = sp + 0;
    func_088FEA34(a0);
    goto L_088FE1B4;
L_088FE1B4:;
    s0 = D_08B46244 - (25156);
    func_088FF488();
    goto L_088FE1BC;
L_088FE1BC:;
    v0 = 1;
    ST8(s0+25156, v0);
    func_088FE2B8();
    goto L_088FE1C8;
L_088FE1C8:;
    v0 = LD_U8(sp+337);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE1E8; }
    goto L_088FE1D4;
L_088FE1D4:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 != 0;
    v0 = LD_U8(s2+25154);
    if (cnd_) { goto L_088FE1E8; }
    goto L_088FE1E0;
L_088FE1E0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE1F0; }
    goto L_088FE1E8;
L_088FE1E8:;
    ST8(s0+25156, 0);
    goto L_088FE098;
L_088FE1F0:;
    a0 = 230;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE1F8;
L_088FE1F8:;
    a0 = sp + 0;
    func_088FEB08(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FE200;
L_088FE200:;
    func_088FF488();
    goto L_088FE208;
L_088FE208:;
    func_088FE2B8();
    goto L_088FE210;
L_088FE210:;
    v0 = LD_U8(sp+337);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE1E8; }
    goto L_088FE21C;
L_088FE21C:;
    v0 = LD_U8(s3+25152);
    cnd_ = v0 != 0;
    v0 = LD_U8(s2+25154);
    if (cnd_) { goto L_088FE1E8; }
    goto L_088FE228;
L_088FE228:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE1F0; }
    goto L_088FE230;
L_088FE230:;
    goto L_088FE1E8;
L_088FE238:;
    func_088FE8DC(a0, 0, 0, 0, 0, 0, 0);
    goto L_088FE240;
L_088FE240:;
    v0 = LD32(s7+25128);
    v0 = s0 ^ v0;
    v0 = 0 < v0;
    goto L_088FE160;
L_088FE250:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FE258;
L_088FE258:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE260;
L_088FE260:;
    func_0883BFA8();
    goto L_088FE268;
L_088FE268:;
    func_088F8B84(0, 0, 0, 0, 0, 0, 0);
    goto L_088FE270;
L_088FE270:;
    v0 = LD_U8(s2+25154);
    goto L_088FE07C;
L_088FE278:;
    ST8(s2+25154, 0);
    goto L_088FE27C;
L_088FE27C:;
    ST8(s4+25155, 0);
    goto L_088FE084;
L_088FE284:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FE28C;
L_088FE28C:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE294;
L_088FE294:;
    func_0883BFA8();
    goto L_088FE29C;
L_088FE29C:;
    func_088F8B84(0, 0, 0, 0, 0, 0, 0);
    goto L_088FE2A4;
L_088FE2A4:;
    goto L_088FE01C;
L_088FE2AC:;
    ST8(s3+25152, 0);
    ST8(s5+25153, 0);
    goto L_088FE028;
}

/* 088FE2B8 */
void func_088FE2B8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE2B8:;
    sp = sp - 16;
    v0 = D_08B46240 - (25152);
    v1 = LD_U8(v0+25152);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FE2F0; }
    goto L_088FE2DC;
L_088FE2DC:;
    goto L_088FE2E0;
L_088FE2E0:;
    goto L_088FE2E4;
L_088FE2E4:;
    sp = sp + 16;
    return;
L_088FE2F0:;
    s0 = D_08B46242 - (25154);
    v0 = func_088F98BC();
    goto L_088FE2F8;
L_088FE2F8:;
    s1 = v0 + 0;
    v0 = LD_U8(s0+25154);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE33C; }
    goto L_088FE308;
L_088FE308:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088FE33C; }
    goto L_088FE310;
L_088FE310:;
    s2 = D_08B4622C - (25132);
    a0 = LD32(s2+25132);
    v0 = 1;
    cnd_ = a0 == 0;
    ST8(s0+25154, v0);
    if (cnd_) { goto L_088FE338; }
    goto L_088FE324;
L_088FE324:;
    v0 = LD_U8(a0+337);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE368; }
    goto L_088FE330;
L_088FE330:;
    a0 = LD32(s2+25132);
    func_088FE8DC(a0, 0, 0, 0, 0, 0, 0);
    goto L_088FE338;
L_088FE338:;
    v0 = LD_U8(s0+25154);
    goto L_088FE33C;
L_088FE33C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE2DC; }
    goto L_088FE344;
L_088FE344:;
    v1 = D_08B46243 - (25155);
    v0 = LD_U8(v1+25155);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE2E0; }
    goto L_088FE354;
L_088FE354:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088FE2E4; }
    goto L_088FE35C;
L_088FE35C:;
    v0 = 1;
    ST8(v1+25155, v0);
    goto L_088FE2E4;
L_088FE368:;
    func_088FECF8(a0);
    goto L_088FE370;
L_088FE370:;
    goto L_088FE330;
}

/* 088FE378 */
void func_088FE378(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE378:;
    sp = sp - 16;
    a0 = 286;
    s0 = D_08B4622C - (25132);
    { u64 r_ = func_088FF41C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE390;
L_088FE390:;
    v1 = 1;
    a0 = LD32(s0+25132);
    v0 = D_08B46240 - (25152);
    ST8(v0+25152, v1);
    cnd_ = a0 == 0;
    v0 = D_08B46230 - (25136);
    if (cnd_) { goto L_088FE3C0; }
    goto L_088FE3A8;
L_088FE3A8:;
    v0 = LD_U8(a0+337);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FE3FC; }
    goto L_088FE3B4;
L_088FE3B4:;
    a0 = LD32(s0+25132);
    func_088FE8DC(a0, 0, 0, 0, 0, 0, 0);
    goto L_088FE3BC;
L_088FE3BC:;
    v0 = D_08B46230 - (25136);
    goto L_088FE3C0;
L_088FE3C0:;
    v1 = LD32(v0+25136);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088FE3EC; }
    goto L_088FE3CC;
L_088FE3CC:;
    v1 = D_08B46228 - (25128);
    goto L_088FE3D0;
L_088FE3D0:;
    v0 = LD32(v1+25128);
    v0 = v0 + 1;
    ST32(v1+25128, v0);
    sp = sp + 16;
    return;
L_088FE3EC:;
    func_088FE9FC(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FE3F4;
L_088FE3F4:;
    v1 = D_08B46228 - (25128);
    goto L_088FE3D0;
L_088FE3FC:;
    func_088FECF8(a0);
    goto L_088FE404;
L_088FE404:;
    goto L_088FE3B4;
}

/* 088FE40C */
void func_088FE40C(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE40C:;
    sp = sp - 16;
    v1 = 1;
    v0 = D_08B46241 - (25153);
    ST8(v0+25153, v1);
    func_088FF488();
    goto L_088FE424;
L_088FE424:;
    sp = sp + 16;
    return;
}

/* 088FE430 */
u32 func_088FE430(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE430:;
    sp = sp - 16;
    v0 = D_08B4622C - (25132);
    t0 = a0 + 0;
    a3 = LD32(v0+25132);
    a2 = a1 + 0;
    cnd_ = a3 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088FE484; }
    goto L_088FE450;
L_088FE450:;
    v0 = D_08B46244 - (25156);
    v1 = LD_U8(v0+25156);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088FE488; }
    goto L_088FE460;
L_088FE460:;
    v0 = D_08B46240 - (25152);
    v1 = LD_U8(v0+25152);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FE488; }
    goto L_088FE470;
L_088FE470:;
    v0 = D_08B46242 - (25154);
    v1 = LD_U8(v0+25154);
    a0 = a3 + 0;
    cnd_ = v1 == 0;
    a1 = t0 + 0;
    if (cnd_) { goto L_088FE494; }
    goto L_088FE484;
L_088FE484:;
    goto L_088FE488;
L_088FE488:;
    v0 = t1 + 0;
    sp = sp + 16;
    return v0;
L_088FE494:;
    v0 = func_088FF2F4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE49C;
L_088FE49C:;
    t1 = v0 + 0;
    goto L_088FE484;
}

/* 088FE4A4 */
rv_t func_088FE4A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088FE4A4:;
    v0 = D_08B46214 - (25108);
    ST32(v0+25108, a0);
    return (rv_t){ v0, v1, f0 };
}

/* 088FE4B0 */
rv_t func_088FE4B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088FE4B0:;
    v0 = D_08B46214 - (25108);
    ST32(v0+25108, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088FE4BC */
void func_088FE4BC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f20 = 0, f21 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FE4BC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = D_08AD90F0 - (-28432);
    a0 = a0 - 28432;
    s2 = a1 + 0;
    a2 = 1;
    a1 = 0 + 0;
    a3 = 1;
    t0 = 0 + 0;
    s1 = s0 + 288;
    f21 = f13;
    f20 = f12;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE508;
L_088FE508:;
    ST32(s0+288, v0);
    ST32(s1+8, 0);
    v0 = func_088F8C18();
    goto L_088FE514;
L_088FE514:;
    ST32(s1+4, v0);
    v0 = (u32)-1;
    ST32(s0+132, v0);
    v0 = 1;
    ST32(s0+340, s2);
    ST32(s0+344, FBITS(f20));
    ST32(s0+348, FBITS(f21));
    ST32(s0+316, 0);
    ST32(s0+364, 0);
    ST8(s0+337, v0);
    ST32(s0+136, 0);
    ST32(s0+140, 0);
    ST32(s0+144, 0);
    ST32(s0+148, 0);
    ST32(s0+152, 0);
    ST32(s0+284, 0);
    ST32(s0+300, 0);
    ST32(s0+304, 0);
    ST32(s0+308, 0);
    ST32(s0+312, 0);
    ST8(s0+320, 0);
    ST8(s0+321, 0);
    ST8(s0+322, 0);
    ST8(s0+323, 0);
    ST32(s0+324, 0);
    ST32(s0+328, 0);
    ST32(s0+332, 0);
    ST8(s0+336, 0);
    ST8(s0+338, 0);
    ST32(s0+352, 0);
    ST32(s0+356, 0);
    ST32(s0+360, 0);
    sp = sp + 32;
    return;
}

/* 088FE5B4 */
void func_088FE5B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE5B4:;
    sp = sp - 16;
    a0 = LD32(a0+288);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE5C4;
L_088FE5C4:;
    sp = sp + 16;
    return;
}

/* 088FE5D0 */
u32 func_088FE5D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[2368] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 2368);
L_088FE5D0:;
    sp = sp - 2368;
    s1 = a0 + 0;
    ST8(a0+337, 0);
    a0 = a1 + 0;
    a1 = 256;
    ST8(s1+338, 0);
    ST8(s1+320, 0);
    ST8(s1+321, 0);
    s0 = sp + 2048;
    s3 = a2 + 0;
    a2 = s0 + 0;
    s2 = a3 + 0;
    func_088FCB00(a0, a1, a2, t2, t3);
    goto L_088FE62C;
L_088FE62C:;
    a0 = D_08AD90FC - (-28420);
    a0 = a0 - 28420;
    a1 = s0 + 0;
    func_088FB180(a1, 0, 0, 0, 0, 0, 0);
    goto L_088FE63C;
L_088FE63C:;
    func_088FF488();
    goto L_088FE644;
L_088FE644:;
    a0 = s0 + 0;
    a1 = 1;
    a2 = 511;
    a3 = 1;
    v0 = func_088FBD38(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_088FE658;
L_088FE658:;
    ST32(s1+132, v0);
    cnd_ = (s32)v0 < 0;
    a0 = 412;
    if (cnd_) { goto L_088FE698; }
    goto L_088FE664;
L_088FE664:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 2048;
    a3 = 1;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE678;
L_088FE678:;
    v0 = v0 < 0x800u;
    cnd_ = v0 != 0;
    a0 = 423;
    if (cnd_) { goto L_088FE698; }
    goto L_088FE684;
L_088FE684:;
    a0 = s1 + 0;
    a1 = sp + 0;
    v0 = func_088FF018(a0, a1, 0, 0, 0);
    goto L_088FE690;
L_088FE690:;
    cnd_ = v0 != 0;
    a0 = 432;
    if (cnd_) { goto L_088FE6D8; }
    goto L_088FE698;
L_088FE698:;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE6A0;
L_088FE6A0:;
    v1 = 0 + 0;
    goto L_088FE6A4;
L_088FE6A4:;
    v0 = v1 + 0;
    sp = sp + 2368;
    return v0;
L_088FE6D8:;
    a0 = 437;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE6E0;
L_088FE6E0:;
    v0 = sceMpegInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE6E8;
L_088FE6E8:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE6F0;
L_088FE6F0:;
    s7 = 1;
    ST8(s1+322, s7);
    a0 = 1024;
    v0 = sceMpegRingbufferQueryMemSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE700;
L_088FE700:;
    s0 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE70C;
L_088FE70C:;
    a0 = 0 + 0;
    v0 = sceMpegQueryMemSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE714;
L_088FE714:;
    s4 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE720;
L_088FE720:;
    v0 = 0x10000u;
    v0 = v0 | 0x87f;
    a0 = s0 + s4;
    a1 = ((u32)(uintptr_t)func_088FE4A4) - (-7004);
    a2 = ((u32)(uintptr_t)func_088FE4B0) - (-6992);
    a0 = a0 + v0;
    a1 = a1 - 7004;
    a2 = a2 - 6992;
    v0 = func_088FAD84(a0, a1, a2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FE744;
L_088FE744:;
    fp = (u32)-1;
    v1 = D_08B161C0 - (25024);
    ST32(v1+25024, v0);
    cnd_ = v0 == fp;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE758;
L_088FE758:;
    v0 = D_08B46214 - (25108);
    s5 = LD32(v0+25108);
    s6 = s1 + 4;
    t0 = ((u32)(uintptr_t)func_088FF19C) - (-3684);
    ST32(s1+324, s5);
    a2 = s5 + 0;
    s5 = s5 + s0;
    ST32(s1+328, s5);
    a3 = s0 + 0;
    t0 = t0 - 3684;
    a0 = s6 + 0;
    a1 = 1024;
    t1 = s1 + 0;
    v0 = sceMpegRingbufferConstruct(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE790;
L_088FE790:;
    s5 = s5 + s4;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE79C;
L_088FE79C:;
    a1 = LD32(s1+328);
    a2 = s4 + 0;
    a3 = s6 + 0;
    a0 = s1 + 0;
    t0 = 512;
    t1 = 0 + 0;
    t2 = 0 + 0;
    v0 = sceMpegCreate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE7BC;
L_088FE7BC:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE7C4;
L_088FE7C4:;
    ST8(s1+323, s7);
    a0 = s1 + 0;
    a1 = sp + 0;
    v0 = func_088FF0E8(a0, a1, 0, 0, 0, 0, 0);
    goto L_088FE7D4;
L_088FE7D4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE7DC;
L_088FE7DC:;
    v0 = LD32(s1+364);
    a1 = LD32(s1+360);
    a0 = s1 + 0;
    v0 = (s32)s2 < (s32)v0;
    if (v0 == 0) s2 = 0;
    v0 = fp + 0;
    v1 = (s32)s3 < (s32)a1;
    if (a1 != 0) v0 = 0;
    a2 = s2 + 0;
    a1 = 0 + 0;
    if (v1 == 0) s3 = v0;
    v0 = sceMpegRegistStream(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE80C;
L_088FE80C:;
    ST32(s1+148, v0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE818;
L_088FE818:;
    a0 = s1 + 0;
    v0 = sceMpegMallocAvcEsBuf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE820;
L_088FE820:;
    ST32(s1+284, v0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE82C;
L_088FE82C:;
    a2 = s1 + 156;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = sceMpegInitAu(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE83C;
L_088FE83C:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE844;
L_088FE844:;
    cnd_ = (s32)s3 < 0;
    a2 = s3 + 0;
    if (cnd_) { goto L_088FE8D4; }
    goto L_088FE84C;
L_088FE84C:;
    a0 = s1 + 0;
    a1 = 1;
    v0 = sceMpegRegistStream(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE858;
L_088FE858:;
    ST32(s1+152, v0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE864;
L_088FE864:;
    a0 = s1 + 0;
    a1 = sp + 2304;
    a2 = sp + 2308;
    v0 = sceMpegQueryAtracEsSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE874;
L_088FE874:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE87C;
L_088FE87C:;
    v0 = s5 + 63;
    v0 = (v0 & ~(0x3fu << 0)) | ((0 & 0x3f) << 0);
    ST32(s1+332, v0);
    a2 = s1 + 220;
    a1 = v0 + 0;
    a0 = s1 + 0;
    s5 = v0 + 2112;
    v0 = sceMpegInitAu(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE89C;
L_088FE89C:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FE6A4; }
    goto L_088FE8A4;
L_088FE8A4:;
    a0 = 32;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FE8AC;
L_088FE8AC:;
    ST32(s1+300, v0);
    v1 = v0 + 0;
    a0 = 0 + 0;
    a1 = LD32(sp+2308);
    goto L_088FE8BC;
L_088FE8BC:;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    ST32(v1, s5);
    s5 = s5 + a1;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088FE8BC; }
    goto L_088FE8D4;
L_088FE8D4:;
    v1 = 1;
    goto L_088FE6A4;
}

/* 088FE8DC */
void func_088FE8DC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE8DC:;
    sp = sp - 16;
    a1 = LD32(a0+284);
    cnd_ = a1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088FE9EC; }
    goto L_088FE8F8;
L_088FE8F8:;
    a1 = LD32(s1+148);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088FE9DC; }
    goto L_088FE904;
L_088FE904:;
    v0 = LD_U8(s1+323);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE9C4; }
    goto L_088FE910;
L_088FE910:;
    a1 = LD32(s1+152);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088FE9B4; }
    goto L_088FE91C;
L_088FE91C:;
    v0 = LD_U8(s1+322);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FE9A4; }
    goto L_088FE928;
L_088FE928:;
    a0 = LD32(s1+300);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088FE994; }
    goto L_088FE934;
L_088FE934:;
    a0 = LD32(s1+132);
    goto L_088FE938;
L_088FE938:;
    cnd_ = (s32)a0 < 0;
    ST32(s1+300, 0);
    if (cnd_) { goto L_088FE950; }
    goto L_088FE940;
L_088FE940:;
    v0 = func_088FC260(a0, a3, t0, t1, t2, t3);
    goto L_088FE948;
L_088FE948:;
    v1 = (u32)-1;
    ST32(s1+132, v1);
    goto L_088FE950;
L_088FE950:;
    s0 = 4;
    goto L_088FE954;
L_088FE954:;
    s0 = s0 - 1;
    v0 = sceDisplayWaitVblankStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE95C;
L_088FE95C:;
    cnd_ = (s32)s0 >= 0;
    v0 = D_08B46214 - (25108);
    if (cnd_) { goto L_088FE954; }
    goto L_088FE964;
L_088FE964:;
    v1 = LD32(v0+25108);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FE984; }
    goto L_088FE970;
L_088FE970:;
    goto L_088FE974;
L_088FE974:;
    sp = sp + 16;
    return;
L_088FE984:;
    a0 = s1 + 0;
    func_088FE9FC(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FE98C;
L_088FE98C:;
    goto L_088FE974;
L_088FE994:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FE99C;
L_088FE99C:;
    a0 = LD32(s1+132);
    goto L_088FE938;
L_088FE9A4:;
    v0 = sceMpegFinish(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE9AC;
L_088FE9AC:;
    ST8(s1+322, 0);
    goto L_088FE928;
L_088FE9B4:;
    a0 = s1 + 0;
    v0 = sceMpegUnRegistStream(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE9BC;
L_088FE9BC:;
    ST32(s1+152, 0);
    goto L_088FE91C;
L_088FE9C4:;
    a0 = s1 + 0;
    v0 = sceMpegDelete(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE9CC;
L_088FE9CC:;
    a0 = s1 + 4;
    v0 = sceMpegRingbufferDestruct(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE9D4;
L_088FE9D4:;
    ST8(s1+323, 0);
    goto L_088FE910;
L_088FE9DC:;
    a0 = s1 + 0;
    v0 = sceMpegUnRegistStream(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE9E4;
L_088FE9E4:;
    ST32(s1+148, 0);
    goto L_088FE904;
L_088FE9EC:;
    v0 = sceMpegFreeAvcEsBuf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FE9F4;
L_088FE9F4:;
    ST32(s1+284, 0);
    goto L_088FE8F8;
}

/* 088FE9FC */
void func_088FE9FC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FE9FC:;
    sp = sp - 16;
    v0 = D_08B46214 - (25108);
    a0 = D_08B161C0 - (25024);
    v1 = LD32(v0+25108);
    cnd_ = v1 != 0;
    a0 = a0 + 25024;
    if (cnd_) { goto L_088FEA24; }
    goto L_088FEA18;
L_088FEA18:;
    goto L_088FEA1C;
L_088FEA1C:;
    sp = sp + 16;
    return;
L_088FEA24:;
    func_088FAE18(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088FEA2C;
L_088FEA2C:;
    goto L_088FEA1C;
}

/* 088FEA34 */
void func_088FEA34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FEA34:;
    sp = sp - 16;
    v0 = D_08AED074 - (-12172);
    s0 = a0 + 0;
    f1 = BITSF(LD32(v0-12172));
    f0 = BITSF(LD32(a0+344));
    v0 = 1;
    ST32(a0+304, v0);
    fcc = FCMP(f0, f1, 14);
    ST32(a0+144, 0);
    ST32(a0+308, 0);
    ST32(a0+312, 0);
    ST32(a0+316, 0);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+344, FBITS(f1)); goto L_088FEA78; }
    goto L_088FEA78;
L_088FEA78:;
    v1 = D_08B160D9 - (24793);
    v0 = LD_U8(v1+24793);
    a0 = 1;
    s1 = s0 + 4;
    ST8(s0+336, v0);
    ST8(v1+24793, 0);
    func_08904228(a0);
    goto L_088FEA94;
L_088FEA94:;
    a0 = s1 + 0;
    v0 = sceMpegRingbufferAvailableSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEA9C;
L_088FEA9C:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_088FEAE4; }
    goto L_088FEAA4;
L_088FEAA4:;
    v0 = LD32(s0+144);
    v1 = LD32(s0+140);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FEAE4; }
    goto L_088FEAB8;
L_088FEAB8:;
    v0 = LD_U8(s0+337);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FEAE4; }
    goto L_088FEAC4;
L_088FEAC4:;
    v0 = func_088F98BC();
    goto L_088FEACC;
L_088FEACC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088FEAE4; }
    goto L_088FEAD4;
L_088FEAD4:;
    func_088FED64(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FEADC;
L_088FEADC:;
    goto L_088FEA94;
L_088FEAE4:;
    v0 = sceDisplayGetVcount(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEAEC;
L_088FEAEC:;
    ST32(s0+352, v0);
    ST32(s0+356, 0);
    sp = sp + 16;
    return;
}

/* 088FEB08 */
void func_088FEB08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FEB08:;
    sp = sp - 16;
    s1 = a0 + 0;
    goto L_088FEB20;
L_088FEB20:;
    v0 = sceDisplayGetVcount(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEB28;
L_088FEB28:;
    a1 = LD32(s1+352);
    v1 = LD32(s1+356);
    v0 = v0 - a1;
    v1 = v1 << 1;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088FEB80; }
    goto L_088FEB44;
L_088FEB44:;
    v0 = LD32(s1+144);
    v1 = LD32(s1+140);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FEB70; }
    goto L_088FEB58;
L_088FEB58:;
    func_088FED64(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088FEB60;
L_088FEB60:;
    a0 = s1 + 0;
    func_088FEEAC(a0);
    goto L_088FEB68;
L_088FEB68:;
    goto L_088FEB20;
L_088FEB70:;
    v0 = sceDisplayWaitVblankStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEB78;
L_088FEB78:;
    goto L_088FEB20;
L_088FEB80:;
    func_088CF2F8(a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088FEB88;
L_088FEB88:;
    a0 = LD32(s1+144);
    v1 = LD32(s1+140);
    v0 = a0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FECB8; }
    goto L_088FEB9C;
L_088FEB9C:;
    v0 = a0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FECA8; }
    goto L_088FEBA8;
L_088FEBA8:;
    a0 = s1 + 0;
    func_088FEEAC(a0);
    goto L_088FEBB0;
L_088FEBB0:;
    s2 = 0 + 0;
    goto L_088FEBB4;
L_088FEBB4:;
    s0 = LD32(s1+356);
    v0 = sceDisplayGetVcount(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEBBC;
L_088FEBBC:;
    v1 = LD32(s1+352);
    s0 = s0 << 1;
    a1 = s2 < 0x4u;
    v0 = v0 - v1;
    v0 = (s32)v0 < (s32)s0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_088FEBF4; }
    goto L_088FEBDC;
L_088FEBDC:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s1+340); goto L_088FEBF8; }
    goto L_088FEBE4;
L_088FEBE4:;
    func_088FEDCC(a0, 0, 0, 0, 0);
    goto L_088FEBEC;
L_088FEBEC:;
    goto L_088FEBB4;
L_088FEBF4:;
    v1 = LD32(s1+340);
    goto L_088FEBF8;
L_088FEBF8:;
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(LD32(s1+356)); goto L_088FEC8C; }
    goto L_088FEC00;
L_088FEC00:;
    { u64 r_ = func_088CF370(a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FEC08;
L_088FEC08:;
    a0 = 6;
    v0 = sceKernelPowerTick(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEC10;
L_088FEC10:;
    func_0883BFA8();
    goto L_088FEC18;
L_088FEC18:;
    v0 = D_08B28A5D - (-30115);
    v1 = LD_U8(v0-30115);
    cnd_ = v1 == 0;
    v0 = D_08B28845 - (-30651);
    if (cnd_) { goto L_088FEC58; }
    goto L_088FEC28;
L_088FEC28:;
    v1 = LD_U8(v0-30651);
    cnd_ = v1 != 0;
    v0 = D_08AED078 - (-12168);
    if (cnd_) { goto L_088FEC58; }
    goto L_088FEC34;
L_088FEC34:;
    f0 = BITSF(LD32(s1+356));
    f2 = BITSF(LD32(s1+344));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12168));
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088FEC64; }
    goto L_088FEC58;
L_088FEC58:;
    v0 = LD_U8(s1+337);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FEC6C; }
    goto L_088FEC64;
L_088FEC64:;
    a0 = s1 + 0;
    func_088FECF8(a0);
    goto L_088FEC6C;
L_088FEC6C:;
    v0 = LD_U8(s1+337);
    v0 = v0 & 0xff;
    sp = sp + 16;
    return;
L_088FEC8C:;
    v0 = D_08AED078 - (-12168);
    f12 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12168));
    t_ = v1;
    f12 = f12 * f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FECA0;
L_088FECA0:;
    goto L_088FEC00;
L_088FECA8:;
    a0 = s1 + 0;
    func_088FED64(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FECB0;
L_088FECB0:;
    goto L_088FEBA8;
L_088FECB8:;
    a0 = s1 + 4;
    v0 = sceMpegRingbufferAvailableSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FECC0;
L_088FECC0:;
    v1 = 1024;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_088FECD8; }
    goto L_088FECCC;
L_088FECCC:;
    a0 = LD32(s1+144);
    v1 = LD32(s1+140);
    goto L_088FEB9C;
L_088FECD8:;
    a0 = s1 + 0;
    func_088FEFF8(a0);
    goto L_088FECE0;
L_088FECE0:;
    a0 = s1 + 0;
    func_088FEE60(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FECE8;
L_088FECE8:;
    v1 = 1;
    ST8(s1+337, v1);
    v1 = LD32(s1+340);
    goto L_088FEBF8;
}

/* 088FECF8 */
void func_088FECF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FECF8:;
    sp = sp - 16;
    s1 = 1;
    s0 = a0 + 0;
    v0 = LD_U8(a0+337);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FED4C; }
    goto L_088FED1C;
L_088FED1C:;
    ST8(s0+337, s1);
    v0 = D_08B160D9 - (24793);
    a0 = 0 + 0;
    v1 = LD_U8(s0+336);
    ST8(v0+24793, v1);
    func_08904228(a0);
    goto L_088FED34;
L_088FED34:;
    ST8(s0+320, s1);
    sp = sp + 16;
    return;
L_088FED4C:;
    func_088FEFF8(a0);
    goto L_088FED54;
L_088FED54:;
    a0 = s0 + 0;
    func_088FEE60(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FED5C;
L_088FED5C:;
    goto L_088FED1C;
}

/* 088FED64 */
void func_088FED64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FED64:;
    sp = sp - 16;
    s0 = a0 + 4;
    s1 = a0 + 0;
    a0 = s0 + 0;
    v0 = sceMpegRingbufferAvailableSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FED84;
L_088FED84:;
    v1 = (s32)v0 < 32;
    a1 = 32;
    if (v1 != 0) a1 = v0;
    a0 = s0 + 0;
    cnd_ = (s32)v0 <= 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088FEDB8; }
    goto L_088FED9C;
L_088FED9C:;
    v0 = sceMpegRingbufferPut(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEDA4;
L_088FEDA4:;
    cnd_ = (s32)v0 <= 0;
    v1 = v0 << 11;
    if (cnd_) { goto L_088FEDB8; }
    goto L_088FEDAC;
L_088FEDAC:;
    v0 = LD32(s1+144);
    v0 = v0 + v1;
    ST32(s1+144, v0);
    goto L_088FEDB8;
L_088FEDB8:;
    sp = sp + 16;
    return;
}

/* 088FEDCC */
void func_088FEDCC(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FEDCC:;
    sp = sp - 32;
    s1 = a0 + 156;
    a2 = s1 + 0;
    a3 = sp + 0;
    s0 = a0 + 0;
    a1 = LD32(a0+148);
    v0 = sceMpegGetAvcAu(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEDF4;
L_088FEDF4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FEE14; }
    goto L_088FEDFC;
L_088FEDFC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return;
L_088FEE14:;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEE1C;
L_088FEE1C:;
    v1 = D_08BB1D14 - (7444);
    a0 = LD32(v1+7444);
    a1 = s1 + 0;
    a2 = 512;
    v0 = v0 + a0;
    a3 = sp + 4;
    a0 = s0 + 0;
    t0 = sp + 8;
    ST32(sp+4, v0);
    v0 = sceMpegAvcDecode(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEE44;
L_088FEE44:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FEDFC; }
    goto L_088FEE4C;
L_088FEE4C:;
    v0 = LD32(s0+356);
    v1 = 1;
    v0 = v0 + 1;
    ST32(s0+356, v0);
    goto L_088FEDFC;
}

/* 088FEE60 */
void func_088FEE60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FEE60:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEE74;
L_088FEE74:;
    v1 = D_08BB1D14 - (7444);
    a2 = LD32(v1+7444);
    a0 = s0 + 0;
    a1 = 512;
    v0 = v0 + a2;
    a3 = sp + 4;
    a2 = sp + 0;
    ST32(sp, v0);
    v0 = sceMpegAvcDecodeStop(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEE98;
L_088FEE98:;
    v0 = v0 < 0x1u;
    sp = sp + 32;
    return;
}

/* 088FEEAC */
void func_088FEEAC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FEEAC:;
    sp = sp - 32;
    v0 = LD32(a0+152);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088FEEE8; }
    goto L_088FEECC;
L_088FEECC:;
    v0 = 1;
    goto L_088FEED0;
L_088FEED0:;
    sp = sp + 32;
    return;
L_088FEEE8:;
    v0 = func_088FF144(a0);
    goto L_088FEEF0;
L_088FEEF0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_088FEED0; }
    goto L_088FEEF8;
L_088FEEF8:;
    a0 = s0 + 0;
    v0 = func_088FF184(a0);
    goto L_088FEF00;
L_088FEF00:;
    s2 = v0 + 0;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FEED0; }
    goto L_088FEF0C;
L_088FEF0C:;
    a1 = LD32(s0+152);
    s1 = s0 + 220;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = sp + 0;
    v0 = sceMpegGetAtracAu(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEF24;
L_088FEF24:;
    v1 = v0 + 0;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FEED0; }
    goto L_088FEF30;
L_088FEF30:;
    a3 = LD32(s0+304);
    a1 = s1 + 0;
    a2 = s2 + 0;
    a0 = s0 + 0;
    v0 = sceMpegAtracDecode(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FEF44;
L_088FEF44:;
    v1 = v0 + 0;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FEED0; }
    goto L_088FEF50;
L_088FEF50:;
    v0 = LD32(s0+304);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FEF64; }
    goto L_088FEF5C;
L_088FEF5C:;
    ST32(s0+304, 0);
    goto L_088FEECC;
L_088FEF64:;
    s1 = s0 + 288;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FEF6C;
L_088FEF6C:;
    s2 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_088FEF88; }
    goto L_088FEF7C;
L_088FEF7C:;
    a0 = s1 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FEF84;
L_088FEF84:;
    ST32(s1+4, s2);
    goto L_088FEF88;
L_088FEF88:;
    v0 = LD32(s1+8);
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = LD32(s0+308);
    v1 = LD32(s0+316);
    v0 = v0 + 1;
    v1 = v1 + 1;
    a0 = v0 < 0x8u;
    ST32(s0+316, v1);
    cnd_ = a0 != 0;
    ST32(s0+308, v0);
    if (cnd_) { goto L_088FEFB8; }
    goto L_088FEFB4;
L_088FEFB4:;
    ST32(s0+308, 0);
    goto L_088FEFB8;
L_088FEFB8:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+304, 0); goto L_088FEECC; }
    goto L_088FEFC4;
L_088FEFC4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 != 0;
    if (cnd_) { ST32(s0+304, 0); goto L_088FEECC; }
    goto L_088FEFDC;
L_088FEFDC:;
    v0 = func_088F8C18();
    goto L_088FEFE4;
L_088FEFE4:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FEFF0;
L_088FEFF0:;
    ST32(s0+304, 0);
    goto L_088FEECC;
}

/* 088FEFF8 */
void func_088FEFF8(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FEFF8:;
    sp = sp - 16;
    func_088FEEAC(a0);
    goto L_088FF008;
L_088FF008:;
    v0 = 1;
    sp = sp + 16;
    return;
}

/* 088FF018 */
u32 func_088FF018(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_088FF018:;
    sp = sp - 128;
    v0 = 20;
    s0 = a1 + 0;
    a1 = D_08AD9110 - (-28400);
    v1 = 2;
    a1 = a1 - 28400;
    s2 = a0 + 0;
    ST32(sp, v0);
    a0 = sp + 96;
    v0 = 1;
    a2 = sp + 0;
    s1 = sp + 32;
    ST32(sp+8, v1);
    ST32(sp+4, v1);
    ST8(sp+17, v0);
    ST8(sp+16, 0);
    v0 = func_088FC758(a0, a1, a2, t1, t2, t3);
    goto L_088FF06C;
L_088FF06C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FF0BC; }
    goto L_088FF07C;
L_088FF07C:;
    v0 = scePsmfSetPsmf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF084;
L_088FF084:;
    a1 = 1;
    cnd_ = (s32)v0 < 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088FF0D8; }
    goto L_088FF090;
L_088FF090:;
    v0 = scePsmfGetNumberOfSpecificStreams(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF098;
L_088FF098:;
    ST32(s2+360, v0);
    a1 = 0 + 0;
    a0 = s1 + 0;
    v0 = scePsmfGetNumberOfSpecificStreams(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF0A8;
L_088FF0A8:;
    ST32(s2+364, v0);
    a0 = sp + 96;
    v0 = func_088FC824(a0, 0, 0, 0);
    goto L_088FF0B4;
L_088FF0B4:;
    v0 = ~(0 | v0);
    v1 = v0 >> 31;
    goto L_088FF0BC;
L_088FF0BC:;
    v0 = v1 + 0;
    sp = sp + 128;
    return v0;
L_088FF0D8:;
    a0 = sp + 96;
    v0 = func_088FC824(a0, 0, 0, 0);
    goto L_088FF0E0;
L_088FF0E0:;
    v1 = 0 + 0;
    goto L_088FF0BC;
}

/* 088FF0E8 */
u32 func_088FF0E8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF0E8:;
    sp = sp - 16;
    a2 = a0 + 136;
    s0 = a0 + 0;
    s0 = s0 + 140;
    s1 = a1 + 0;
    v0 = sceMpegQueryStreamOffset(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF10C;
L_088FF10C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FF12C; }
    goto L_088FF11C;
L_088FF11C:;
    v0 = sceMpegQueryStreamSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF124;
L_088FF124:;
    v0 = ~(0 | v0);
    v1 = v0 >> 31;
    goto L_088FF12C;
L_088FF12C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088FF144 */
u32 func_088FF144(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_088FF144:;
    v0 = LD32(a0+316);
    v0 = v0 < 0x6u;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088FF168; }
    goto L_088FF154;
L_088FF154:;
    v1 = LD32(a0+312);
    v0 = LD32(a0+308);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088FF170; }
    goto L_088FF164;
L_088FF164:;
    a1 = 1;
    goto L_088FF168;
L_088FF168:;
    v0 = a1 + 0;
    return v0;
L_088FF170:;
    v0 = LD32(a0+316);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FF168; }
    goto L_088FF17C;
L_088FF17C:;
    a1 = 1;
    goto L_088FF168;
}

/* 088FF184 */
u32 func_088FF184(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088FF184:;
    v1 = LD32(a0+308);
    v0 = LD32(a0+300);
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
}

/* 088FF19C */
rv_t func_088FF19C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FF19C:;
    sp = sp - 48;
    s5 = a1 << 11;
    v0 = s5 + 0;
    s6 = 0 + 0;
    s4 = a0 + 0;
    s2 = a2 + 0;
    cnd_ = (s32)s5 <= 0;
    if (cnd_) { goto L_088FF2B4; }
    goto L_088FF1E0;
L_088FF1E0:;
    fp = D_08B46250 - (25168);
    goto L_088FF1E4;
L_088FF1E4:;
    v1 = LD_U8(s2+337);
    v0 = v0 - s6;
    a0 = 0x8000;
    s7 = fp + 25168;
    cnd_ = v1 != 0;
    s3 = (s32)v0 < (s32)a0 ? v0 : a0;
    if (cnd_) { goto L_088FF2B4; }
    goto L_088FF1FC;
L_088FF1FC:;
    v0 = LD_U8(s2+338);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FF240; }
    goto L_088FF208;
L_088FF208:;
    func_088FF488();
    goto L_088FF210;
L_088FF210:;
    a0 = LD32(s2+132);
    a2 = LD32(s2+136);
    a3 = 0 + 0;
    t0 = 0 + 0;
    v0 = func_088FC1A8(a0, a2, a3, t0, 0, 0, 0);
    goto L_088FF224;
L_088FF224:;
    s0 = v0 + 0;
    a0 = 1135;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF230;
L_088FF230:;
    cnd_ = (s32)s0 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FF2C4; }
    goto L_088FF238;
L_088FF238:;
    v0 = 1;
    ST8(s2+338, v0);
    goto L_088FF240;
L_088FF240:;
    func_088FF488();
    goto L_088FF248;
L_088FF248:;
    a0 = LD32(s2+132);
    a1 = s7 + 0;
    a2 = s3 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF25C;
L_088FF25C:;
    s0 = v0 + 0;
    a0 = 1145;
    { u64 r_ = func_088FF41C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF268;
L_088FF268:;
    a0 = s4 + 0;
    a1 = s7 + 0;
    a2 = s3 + 0;
    s4 = s4 + s3;
    a3 = s0 & 0x7ff;
    cnd_ = (s32)s0 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FF2C4; }
    goto L_088FF284;
L_088FF284:;
    cnd_ = s0 == 0;
    v0 = (u32)((s32)s6 >> 31);
    if (cnd_) { goto L_088FF2B8; }
    goto L_088FF28C;
L_088FF28C:;
    cnd_ = a3 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088FF2C4; }
    goto L_088FF294;
L_088FF294:;
    v0 = LD_U8(s2+337);
    cnd_ = v0 != 0;
    v0 = (u32)((s32)s6 >> 31);
    if (cnd_) { goto L_088FF2B8; }
    goto L_088FF2A0;
L_088FF2A0:;
    s6 = s6 + s0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF2A8;
L_088FF2A8:;
    v1 = (s32)s6 < (s32)s5;
    cnd_ = v1 != 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_088FF1E4; }
    goto L_088FF2B4;
L_088FF2B4:;
    v0 = (u32)((s32)s6 >> 31);
    goto L_088FF2B8;
L_088FF2B8:;
    v0 = v0 >> 21;
    v0 = s6 + v0;
    v0 = (u32)((s32)v0 >> 11);
    goto L_088FF2C4;
L_088FF2C4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088FF2F4 */
u32 func_088FF2F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FF2F4:;
    sp = sp - 32;
    v1 = 0 + 0;
    s5 = a2 + 0;
    s3 = a1 + 0;
    v0 = LD_U8(a0+320);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088FF3D8; }
    goto L_088FF32C;
L_088FF32C:;
    v0 = LD32(a0+316);
    cnd_ = (s32)v0 <= 0;
    s1 = a0 + 288;
    if (cnd_) { goto L_088FF3D8; }
    goto L_088FF338;
L_088FF338:;
    v0 = LD32(a0+312);
    v1 = LD32(a0+300);
    v0 = v0 << 2;
    v0 = v0 + v1;
    s4 = LD32(v0);
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF350;
L_088FF350:;
    s2 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_088FF36C; }
    goto L_088FF360;
L_088FF360:;
    a0 = s1 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF368;
L_088FF368:;
    ST32(s1+4, s2);
    goto L_088FF36C;
L_088FF36C:;
    v0 = LD32(s1+8);
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = v0 + 1;
    ST32(s1+8, v0);
    a2 = 8192;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF388;
L_088FF388:;
    v1 = LD32(s0+312);
    v0 = LD32(s0+316);
    v1 = v1 + 1;
    v0 = v0 - 1;
    a0 = v1 < 0x8u;
    ST32(s0+316, v0);
    cnd_ = a0 != 0;
    ST32(s0+312, v1);
    if (cnd_) { goto L_088FF3AC; }
    goto L_088FF3A8;
L_088FF3A8:;
    ST32(s0+312, 0);
    goto L_088FF3AC;
L_088FF3AC:;
    f0 = BITSF(LD32(s0+348));
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    ST32(s5, FBITS(f0));
    if (cnd_) { goto L_088FF3D4; }
    goto L_088FF3BC;
L_088FF3BC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FF400; }
    goto L_088FF3D4;
L_088FF3D4:;
    v1 = 1;
    goto L_088FF3D8;
L_088FF3D8:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088FF400:;
    v0 = func_088F8C18();
    goto L_088FF408;
L_088FF408:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF414;
L_088FF414:;
    v1 = 1;
    goto L_088FF3D8;
}

/* 088FF41C */
u64 func_088FF41C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF41C:;
    sp = sp - 16;
    s2 = a0 + 0;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF438;
L_088FF438:;
    s1 = v0 + 0;
    v0 = D_08B46218 - (25112);
    s0 = v0 + 25112;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_088FF45C; }
    goto L_088FF450;
L_088FF450:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF458;
L_088FF458:;
    ST32(s0+4, s1);
    goto L_088FF45C;
L_088FF45C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08B46224 - (25124);
    ST32(v0+25124, s2);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088FF488 */
void func_088FF488(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF488:;
    sp = sp - 16;
    v0 = D_08B46218 - (25112);
    s0 = v0 + 25112;
    v0 = D_08B46224 - (25124);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    ST32(v0+25124, 0);
    if (cnd_) { goto L_088FF4C4; }
    goto L_088FF4AC;
L_088FF4AC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FF4D4; }
    goto L_088FF4C4;
L_088FF4C4:;
    goto L_088FF4C8;
L_088FF4C8:;
    sp = sp + 16;
    return;
L_088FF4D4:;
    v0 = func_088F8C18();
    goto L_088FF4DC;
L_088FF4DC:;
    a0 = s0 + 0;
    ST32(s0+4, v0);
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF4E8;
L_088FF4E8:;
    goto L_088FF4C8;
}

/* 088FF4F0 */
u64 func_088FF4F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FF4F0:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a1 ^ 0xffff;
    v1 = s1 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    a0 = D_08AD90F0 - (-28432);
    s2 = D_08B46218 - (25112);
    v1 = s0 & v1;
    a0 = a0 - 28432;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v1 != 0;
    s3 = s2 + 25112;
    if (cnd_) { goto L_088FF580; }
    goto L_088FF544;
L_088FF544:;
    v0 = s1 < 0x1u;
    goto L_088FF548;
L_088FF548:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08B46218 - (25112);
    if (cnd_) { goto L_088FF570; }
    goto L_088FF554;
L_088FF554:;
    goto L_088FF558;
L_088FF558:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088FF570:;
    a0 = LD32(v0+25112);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF578;
L_088FF578:;
    goto L_088FF558;
L_088FF580:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF588;
L_088FF588:;
    ST32(s2+25112, v0);
    ST32(s3+8, 0);
    v0 = func_088F8C18();
    goto L_088FF594;
L_088FF594:;
    ST32(s3+4, v0);
    v0 = s1 < 0x1u;
    goto L_088FF548;
}

/* 088FF5A0 */
rv_t func_088FF5A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF5A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088FF4F0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF5B4;
L_088FF5B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FF5C0 */
rv_t func_088FF5C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF5C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088FF4F0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FF5D4;
L_088FF5D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FF5E0 */
u32 func_088FF5E0(void)
{
    u32 v0 = 0;
L_088FF5E0:;
    v0 = 0 + 0;
    return v0;
}

/* 088FF5E8 */
void func_088FF5E8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF5E8:;
    sp = sp - 16;
    v0 = D_08B2AE2C - (-20948);
    v1 = 1;
    a0 = LD32(v0-20948);
    cnd_ = a0 == v1;
    s0 = D_08B2AE30 - (-20944);
    if (cnd_) { goto L_088FF618; }
    goto L_088FF608;
L_088FF608:;
    goto L_088FF60C;
L_088FF60C:;
    sp = sp + 16;
    return;
L_088FF618:;
    v0 = sceWlanGetSwitchState(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF620;
L_088FF620:;
    v0 = v0 < 0x1u;
    ST8(s0-20944, v0);
    func_08900AFC(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FF62C;
L_088FF62C:;
    v0 = LD_U8(s0-20944);
    cnd_ = v0 != 0;
    v1 = D_08B285B0 - (-31312);
    if (cnd_) { goto L_088FF654; }
    goto L_088FF638;
L_088FF638:;
    a0 = D_08B4E250 - (-7600);
    v0 = LD32(v1-31312);
    v1 = LD32(a0-7600);
    v0 = v0 - v1;
    v0 = v0 < 0x2711u;
    cnd_ = v0 != 0;
    v0 = D_08B161D8 - (25048);
    if (cnd_) { goto L_088FF670; }
    goto L_088FF654;
L_088FF654:;
    func_089008F8(0, 0, 0, 0, 0, 0, 0);
    goto L_088FF65C;
L_088FF65C:;
    a0 = 0 + 0;
    goto L_088FF660;
L_088FF660:;
    func_088A4BCC(a0, 0, 0, 0);
    goto L_088FF668;
L_088FF668:;
    goto L_088FF60C;
L_088FF670:;
    a0 = LD32(v0+25048);
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    v0 = D_08B4E26C - (-7572);
    if (cnd_) { goto L_088FF6A8; }
    goto L_088FF680;
L_088FF680:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_088FF688;
L_088FF688:;
    v1 = D_08B4E26C - (-7572);
    s0 = LD32(v1-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_088FF694;
L_088FF694:;
    v0 = s0 ^ 0x3;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_088FF608; }
    goto L_088FF6A0;
L_088FF6A0:;
    goto L_088FF660;
L_088FF6A8:;
    s0 = LD32(v0-7572);
    goto L_088FF694;
}

/* 088FF6B0 */
void func_088FF6B0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF6B0:;
    sp = sp - 16;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FF6D8; }
    goto L_088FF6CC;
L_088FF6CC:;
    sp = sp + 16;
    return;
L_088FF6D8:;
    func_0890103C();
    goto L_088FF6E0;
L_088FF6E0:;
    func_08901044(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FF6E8;
L_088FF6E8:;
    v0 = func_089010B4();
    goto L_088FF6F0;
L_088FF6F0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FF6CC; }
    goto L_088FF6F8;
L_088FF6F8:;
    v0 = func_089010A8();
    goto L_088FF700;
L_088FF700:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088FF718; }
    goto L_088FF708;
L_088FF708:;
    a0 = s0 + 0;
    func_088A4BCC(a0, 0, 0, 0);
    goto L_088FF710;
L_088FF710:;
    goto L_088FF6CC;
L_088FF718:;
    func_08901074(0, 0, 0, 0, 0, 0, 0);
    goto L_088FF720;
L_088FF720:;
    goto L_088FF708;
}

/* 088FF728 */
void func_088FF728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF728:;
    sp = sp - 16;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FF7B0; }
    goto L_088FF74C;
L_088FF74C:;
    s1 = D_08B161D8 - (25048);
    func_08900AFC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF754;
L_088FF754:;
    v1 = LD32(s1+25048);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s2 = D_08B4E26C - (-7572);
    if (cnd_) { goto L_088FF7D0; }
    goto L_088FF764;
L_088FF764:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_088FF76C;
L_088FF76C:;
    s0 = LD32(s2-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_088FF774;
L_088FF774:;
    v0 = s0 ^ 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(s1+25048);
    if (cnd_) { goto L_088FF7A8; }
    goto L_088FF780;
L_088FF780:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s0 = LD32(s2-7572);
    if (cnd_) { goto L_088FF79C; }
    goto L_088FF78C;
L_088FF78C:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_088FF794;
L_088FF794:;
    s0 = LD32(s2-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_088FF79C;
L_088FF79C:;
    v0 = s0 ^ 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088FF7BC; }
    goto L_088FF7A8;
L_088FF7A8:;
    func_089008F8(0, 0, 0, 0, 0, 0, 0);
    goto L_088FF7B0;
L_088FF7B0:;
    func_088A4C1C();
    goto L_088FF7B8;
L_088FF7B8:;
    goto L_088FF7BC;
L_088FF7BC:;
    sp = sp + 16;
    return;
L_088FF7D0:;
    s0 = LD32(s2-7572);
    goto L_088FF774;
}

/* 088FF7D8 */
void func_088FF7D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF7D8:;
    sp = sp - 16;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088FF844; }
    goto L_088FF7F4;
L_088FF7F4:;
    v0 = sceWlanGetSwitchState(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF7FC;
L_088FF7FC:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_088FF838; }
    goto L_088FF804;
L_088FF804:;
    v0 = func_089010A8();
    goto L_088FF80C;
L_088FF80C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088FF824; }
    goto L_088FF814;
L_088FF814:;
    goto L_088FF818;
L_088FF818:;
    sp = sp + 16;
    return;
L_088FF824:;
    func_088A4C40(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088FF82C;
L_088FF82C:;
    goto L_088FF818;
L_088FF834:;
    v1 = 1;
    goto L_088FF838;
L_088FF838:;
    v0 = D_08B2AE30 - (-20944);
    ST8(v0-20944, v1);
    goto L_088FF824;
L_088FF844:;
    func_08900AFC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF84C;
L_088FF84C:;
    v0 = D_08B161D8 - (25048);
    a0 = LD32(v0+25048);
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    v0 = D_08B4E26C - (-7572);
    if (cnd_) { goto L_088FF890; }
    goto L_088FF860;
L_088FF860:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_088FF868;
L_088FF868:;
    v1 = D_08B4E26C - (-7572);
    s0 = LD32(v1-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_088FF874;
L_088FF874:;
    v0 = 8;
    cnd_ = s0 == v0;
    v0 = 1;
    if (cnd_) { goto L_088FF834; }
    goto L_088FF880;
L_088FF880:;
    cnd_ = s0 != v0;
    if (cnd_) {  goto L_088FF818; }
    goto L_088FF888;
L_088FF888:;
    goto L_088FF824;
L_088FF890:;
    s0 = LD32(v0-7572);
    goto L_088FF874;
}

/* 088FF898 */
u32 func_088FF898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF898:;
    sp = sp - 16;
    v0 = sceWlanGetSwitchState(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF8A8;
L_088FF8A8:;
    v1 = D_08B285B0 - (-31312);
    a0 = D_08B2AE2C - (-20948);
    a2 = LD32(v1-31312);
    a1 = LD32(a0-20948);
    v0 = v0 < 0x1u;
    v1 = D_08B2AE30 - (-20944);
    ST8(v1-20944, v0);
    v0 = D_08B4E250 - (-7600);
    cnd_ = a1 != 0;
    ST32(v0-7600, a2);
    if (cnd_) { goto L_088FF8E8; }
    goto L_088FF8D0;
L_088FF8D0:;
    func_08900FFC(a2, 0, 0, 0, 0, 0);
    goto L_088FF8D8;
L_088FF8D8:;
    goto L_088FF8DC;
L_088FF8DC:;
    v0 = 1;
    sp = sp + 16;
    return v0;
L_088FF8E8:;
    func_08900798(a1, a2, 0, 0, 0, 0, 0);
    goto L_088FF8F0;
L_088FF8F0:;
    a0 = D_08AD9120 - (-28384);
    a0 = a0 - 28384;
    func_08900A68(a0);
    goto L_088FF8FC;
L_088FF8FC:;
    goto L_088FF8DC;
}

/* 088FF904 */
void func_088FF904(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FF904:;
    sp = sp - 16;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088FF940; }
    goto L_088FF91C;
L_088FF91C:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088FF930; }
    goto L_088FF924;
L_088FF924:;
    goto L_088FF928;
L_088FF928:;
    sp = sp + 16;
    return;
L_088FF930:;
    func_08900AB4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF938;
L_088FF938:;
    goto L_088FF928;
L_088FF940:;
    func_08901074(a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF948;
L_088FF948:;
    goto L_088FF928;
}

/* 088FF950 */
u64 func_088FF950(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FF950:;
    sp = sp - 32;
    v0 = D_08B161D8 - (25048);
    s2 = a0 + 0;
    v1 = LD32(v0+25048);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088FFA24; }
    goto L_088FF97C;
L_088FF97C:;
    func_08900D84(a3, t0, t1, t2, t3);
    goto L_088FF984;
L_088FF984:;
    v1 = D_08B4E26C - (-7572);
    s0 = LD32(v1-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_088FF990;
L_088FF990:;
    a1 = s1 + 0;
    a3 = 0 + 0;
    t0 = sp + 0;
    t1 = 16;
    cnd_ = s0 == 0;
    t2 = 1;
    if (cnd_) { goto L_088FF9E0; }
    goto L_088FF9A8;
L_088FF9A8:;
    a2 = LD_U16(s1+8);
    a0 = LD32(s2+4);
    a3 = LD32(s1+12);
    t0 = LD32(s1+16);
    t1 = 0 + 0;
    v0 = sceNetAdhocPdpSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FF9C0;
L_088FF9C0:;
    v0 = ~(0 | v0);
    v0 = v0 >> 31;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088FF9E0:;
    v1 = LD_U16(s1+8);
    t2 = LD32(s1);
    a0 = LD32(s2+4);
    a2 = LD32(s1+16);
    a1 = LD32(s1+12);
    v1 = WSBH(v1);
    v0 = 2;
    ST32(sp, 0);
    ST32(sp+4, t2);
    ST8(sp+1, v0);
    ST16(sp+2, v1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFA18;
L_088FFA18:;
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    goto L_088FF9C0;
L_088FFA24:;
    v0 = D_08B4E26C - (-7572);
    s0 = LD32(v0-7572);
    goto L_088FF990;
}

/* 088FFA30 */
u32 func_088FFA30(void)
{
    u32 v0 = 0;
L_088FFA30:;
    v0 = 1;
    return v0;
}

/* 088FFA38 */
void func_088FFA38(void)
{
    u32 v0 = 0;
L_088FFA38:;
    v0 = 1;
    return;
}

/* 088FFA40 */
void func_088FFA40(void)
{
L_088FFA40:;
    return;
}

/* 088FFA48 */
u32 func_088FFA48(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FFA48:;
    sp = sp - 16;
    v0 = D_08B161D8 - (25048);
    v1 = LD32(v0+25048);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088FFAA0; }
    goto L_088FFA6C;
L_088FFA6C:;
    func_08900D84(a3, t0, t1, t2, t3);
    goto L_088FFA74;
L_088FFA74:;
    v1 = D_08B4E26C - (-7572);
    s0 = LD32(v1-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_088FFA80;
L_088FFA80:;
    cnd_ = s0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088FFA8C; }
    goto L_088FFA88;
L_088FFA88:;
    v0 = LD32(s1);
    goto L_088FFA8C;
L_088FFA8C:;
    sp = sp + 16;
    return v0;
L_088FFAA0:;
    v0 = D_08B4E26C - (-7572);
    s0 = LD32(v0-7572);
    goto L_088FFA80;
}

/* 088FFAAC */
rv_t func_088FFAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088FFAAC:;
    sp = sp - 80;
    s1 = a0 + 0;
    a2 = LD_U16(a2);
    v0 = LD32(a1+4);
    v1 = LD32(a1);
    ST32(sp+4, v0);
    cnd_ = a2 == 0;
    ST32(sp, v1);
    if (cnd_) { goto L_088FFB98; }
    goto L_088FFADC;
L_088FFADC:;
    ST16(a0+16, a2);
    goto L_088FFAE0;
L_088FFAE0:;
    a0 = sp + 16;
    v0 = sceNetGetLocalEtherAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFAE8;
L_088FFAE8:;
    s0 = s1 + 8;
    a2 = 8192;
    a3 = 0 + 0;
    a0 = s0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FFB7C; }
    goto L_088FFB00;
L_088FFB00:;
    v1 = LD_U8(sp+17);
    a1 = LD_U8(sp+18);
    t0 = LD_U8(sp+19);
    t1 = LD_U8(sp+20);
    t2 = LD_U8(sp+21);
    v0 = LD_U8(sp+16);
    s2 = sp + 32;
    ST8(s1+8, v0);
    ST8(s0+1, v1);
    ST8(s0+2, a1);
    ST8(s0+3, t0);
    ST8(s0+4, t1);
    ST8(s0+5, t2);
    a1 = LD_U16(s1+16);
    v0 = sceNetAdhocPdpCreate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFB3C;
L_088FFB3C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FFB7C; }
    goto L_088FFB4C;
L_088FFB4C:;
    ST32(s1+4, v0);
    v0 = sceNetEtherNtostr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFB54;
L_088FFB54:;
    a2 = LD_U16(s1+16);
    a0 = D_08AD9128 - (-28376);
    a0 = a0 - 28376;
    a1 = s2 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFB68;
L_088FFB68:;
    ST32(s1+28, 0);
    v1 = 1;
    ST8(s1+21, 0);
    ST8(s1+20, v1);
    v1 = 1;
    goto L_088FFB7C;
L_088FFB7C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088FFB98:;
    v0 = 3658;
    ST16(a0+16, v0);
    goto L_088FFAE0;
}

/* 088FFBA4 */
rv_t func_088FFBA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FFBA4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AD9148 - (-28344);
    a0 = a0 - 28344;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFBC0;
L_088FFBC0:;
    v1 = LD_U8(s0+20);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088FFBEC; }
    goto L_088FFBCC;
L_088FFBCC:;
    v0 = LD32(s0+4);
    a1 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088FFBE4; }
    goto L_088FFBDC;
L_088FFBDC:;
    v0 = sceNetAdhocPdpDelete(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFBE4;
L_088FFBE4:;
    ST8(s0+20, 0);
    goto L_088FFBEC;
L_088FFBEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FFBF8 */
rv_t func_088FFBF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[8288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 8288);
L_088FFBF8:;
    sp = sp - 8288;
    s1 = 0x80410000u;
    s1 = s1 | 0x709;
    s0 = a0 + 0;
    a0 = 500;
    s4 = sp + 16;
    s3 = 8192;
    s2 = sp + 32;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFC34;
L_088FFC34:;
    a0 = LD32(s0+4);
    a1 = sp + 0;
    a3 = s2 + 0;
    a2 = s4 + 0;
    t0 = sp + 8240;
    t1 = 0 + 0;
    t2 = 1;
    ST32(sp+8240, s3);
    v0 = sceNetAdhocPdpRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFC58;
L_088FFC58:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a3 = sp + 8224;
    cnd_ = v0 == s1;
    v1 = 1;
    if (cnd_) { goto L_088FFCC0; }
    goto L_088FFC6C;
L_088FFC6C:;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FFCC0; }
    goto L_088FFC74;
L_088FFC74:;
    v0 = LD_U8(sp);
    v1 = LD_U8(sp+1);
    t0 = LD_U16(sp+16);
    ST8(sp+8224, v0);
    ST8(sp+8225, v1);
    v0 = LD_U8(sp+2);
    v1 = LD_U8(sp+3);
    a2 = LD32(sp+8240);
    ST8(sp+8226, v0);
    ST8(sp+8227, v1);
    v0 = LD_U8(sp+4);
    v1 = LD_U8(sp+5);
    ST8(sp+8228, v0);
    ST8(sp+8229, v1);
    { rv_t r_ = func_088A8BCC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FFCB0;
L_088FFCB0:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088FFC34; }
    goto L_088FFCC0;
L_088FFCC0:;
    v0 = v1 + 0;
    sp = sp + 8288;
    return (rv_t){ v0, v1, f0 };
}

/* 088FFCE4 */
rv_t func_088FFCE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088FFCE4:;
    sp = sp - 16;
    { u64 r_ = func_088FF950(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FFCF4;
L_088FFCF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088FFD00 */
rv_t func_088FFD00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088FFD00:;
    return (rv_t){ v0, v1, f0 };
}

/* 088FFD08 */
rv_t func_088FFD08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088FFD08:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 088FFD10 */
void func_088FFD10(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088FFD10:;
    sp = sp - 96;
    s2 = a2 + 0;
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088FFD44; }
    goto L_088FFD38;
L_088FFD38:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    s4 = sp + 16;
    if (cnd_) { goto L_088FFD8C; }
    goto L_088FFD44;
L_088FFD44:;
    s3 = 0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    goto L_088FFD50;
L_088FFD50:;
    cnd_ = s1 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_088FFD64; }
    goto L_088FFD58;
L_088FFD58:;
    v0 = LD32(sp);
    ST32(s1+4, v1);
    ST32(s1, v0);
    goto L_088FFD64;
L_088FFD64:;
    cnd_ = s2 != 0;
    if (cnd_) { ST16(s2, s3); goto L_088FFD6C; }
    goto L_088FFD6C;
L_088FFD6C:;
    sp = sp + 96;
    return;
L_088FFD8C:;
    a1 = a0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FFD98;
L_088FFD98:;
    a0 = sp + 33;
    a1 = 58;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088FFDA4;
L_088FFDA4:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088FFDCC; }
    goto L_088FFDB0;
L_088FFDB0:;
    a0 = v0 + 1;
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FFDB8;
L_088FFDB8:;
    v1 = 0xffff;
    ST8(s0, 0);
    v1 = v1 < v0;
    v0 = v0 & 0xffff;
    if (v1 == 0) s3 = v0;
    goto L_088FFDCC;
L_088FFDCC:;
    a0 = s4 + 0;
    a1 = sp + 48;
    v0 = sceNetEtherStrton(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088FFDD8;
L_088FFDD8:;
    v0 = LD_U8(sp+48);
    v1 = LD_U8(sp+49);
    ST8(sp, v0);
    ST8(sp+1, v1);
    v0 = LD_U8(sp+50);
    v1 = LD_U8(sp+51);
    ST8(sp+2, v0);
    ST8(sp+3, v1);
    v0 = LD_U8(sp+52);
    v1 = LD_U8(sp+53);
    ST8(sp+4, v0);
    ST8(sp+5, v1);
    goto L_088FFD50;
}

/* 088FFE0C */
void func_088FFE0C(void)
{
L_088FFE0C:;
    return;
}

/* 088FFE14 */
void func_088FFE14(void)
{
L_088FFE14:;
    return;
}

/* 088FFE1C */
void func_088FFE1C(void)
{
L_088FFE1C:;
    return;
}

/* 088FFE24 */
void func_088FFE24(void)
{
L_088FFE24:;
    return;
}

/* 088FFE2C */
void func_088FFE2C(void)
{
L_088FFE2C:;
    return;
}

/* 088FFE34 */
float func_088FFE34(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FFE34:;
    sp = sp - 48;
    v1 = (u32)-1;
    v0 = (u32)-4096;
    ST8(sp, v1);
    ST8(sp+5, v1);
    ST8(sp+4, v1);
    ST8(sp+3, v1);
    ST8(sp+2, v1);
    ST8(sp+1, v1);
    s0 = 0 + 0;
    ST16(sp+20, v0);
    ST16(sp+16, 0);
    v0 = func_08A62930();
    goto L_088FFE70;
L_088FFE70:;
    ST16(sp+22, v0);
    v0 = func_08A62938();
    goto L_088FFE78;
L_088FFE78:;
    a0 = sp + 19;
    a1 = 8;
    ST32(sp+24, v0);
    v0 = func_088AB190(a0, a1);
    goto L_088FFE88;
L_088FFE88:;
    v1 = D_08B2AE88 - (-20856);
    t2 = LD32(v1-20856);
    a3 = sp + 16;
    a1 = sp + 0;
    a0 = t2 + 0;
    a2 = 3658;
    t0 = 12;
    t1 = 1;
    cnd_ = t2 != 0;
    ST16(sp+18, v0);
    if (cnd_) { goto L_088FFED4; }
    goto L_088FFEB0;
L_088FFEB0:;
    v1 = D_08B28588 - (-31352);
    v0 = s0 + 0;
    f0 = BITSF(LD32(v1-31352));
    a0 = D_08B2AEE4 - (-20764);
    ST32(a0-20764, FBITS(f0));
    sp = sp + 48;
    return f0;
L_088FFED4:;
    { rv_t r_ = func_088A9198(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FFEDC;
L_088FFEDC:;
    s0 = 0 < v0;
    goto L_088FFEB0;
}

/* 088FFEE4 */
void func_088FFEE4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088FFEE4:;
    sp = sp - 32;
    s1 = a1 & 0xffff;
    s0 = a2 + 0;
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    ST32(sp+4, v1);
    ST32(sp, v0);
    v0 = func_08A62938();
    goto L_088FFF10;
L_088FFF10:;
    v1 = LD32(s0+8);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088FFF30; }
    goto L_088FFF1C;
L_088FFF1C:;
    goto L_088FFF20;
L_088FFF20:;
    sp = sp + 32;
    return;
L_088FFF30:;
    s0 = LD_U16(s0+6);
    v0 = func_08A62930();
    goto L_088FFF38;
L_088FFF38:;
    a1 = s1 + 0;
    cnd_ = s0 != v0;
    a0 = sp + 0;
    if (cnd_) { goto L_088FFF1C; }
    goto L_088FFF44;
L_088FFF44:;
    func_088FFF54(a0, a1, 0, 0, 0);
    goto L_088FFF4C;
L_088FFF4C:;
    goto L_088FFF20;
}

/* 088FFF54 */
void func_088FFF54(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088FFF54:;
    sp = sp - 48;
    s3 = a1 & 0xffff;
    s2 = D_08B2AEAC - (-20820);
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    ST32(sp+4, v1);
    ST32(sp, v0);
    func_08A62944(t1, t2, t3);
    goto L_088FFF88;
L_088FFF88:;
    s1 = LD32(s2-20820);
    s1 = s1 + 84;
    a0 = s1 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088FFF98;
L_088FFF98:;
    s0 = v0 + 0;
    v0 = (u32)-4095;
    ST16(s0+4, v0);
    ST16(s0, 0);
    v0 = func_08A62930();
    goto L_088FFFAC;
L_088FFFAC:;
    ST16(s0+6, v0);
    v0 = func_08A62938();
    goto L_088FFFB4;
L_088FFFB4:;
    v1 = D_08B2BB84 - (-17532);
    a1 = LD32(v1-17532);
    a0 = D_08B2AE98 - (-20840);
    t0 = LD_U16(s2-20820);
    a3 = LD32(a0-20840);
    ST8(s0+82, a1);
    v1 = D_08B2BB7C - (-17540);
    a0 = s0 + 3;
    a2 = LD32(v1-17540);
    ST16(s0+16, t0);
    a1 = 80;
    ST32(s0+12, a3);
    ST8(s0+83, a2);
    ST32(s0+8, v0);
    v0 = func_088AB190(a0, a1);
    goto L_088FFFF0;
L_088FFFF0:;
    ST16(s0+2, v0);
    t0 = D_08B16040 - (24640);
    a1 = D_08AD915C - (-28324);
    a0 = s0 + 18;
    t0 = t0 + 24640;
    a3 = 1;
    a1 = a1 - 28324;
    a2 = 32;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900014;
L_08900014:;
    v1 = D_08B2AEA8 - (-20824);
    a1 = LD32(v1-20824);
    a2 = LD32(s2-20820);
    a0 = s0 + 84;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900028;
L_08900028:;
    v1 = D_08B2AE88 - (-20856);
    a0 = LD32(v1-20856);
    a2 = s3 + 0;
    t0 = s1 + 0;
    a3 = s0 + 0;
    a1 = sp + 0;
    t1 = 1;
    { rv_t r_ = func_088A9198(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900048;
L_08900048:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900050;
L_08900050:;
    sp = sp + 48;
    return;
}

/* 0890006C */
float func_0890006C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0890006C:;
    sp = sp - 64;
    s4 = a1 & 0xffff;
    s2 = sp + 16;
    s1 = a2 + 0;
    s3 = s1 + 84;
    v1 = LD32(a0+4);
    v0 = LD32(a0);
    ST32(sp+20, v1);
    ST32(sp+16, v0);
    v0 = func_08A62938();
    goto L_089000B4;
L_089000B4:;
    v1 = LD32(s1+8);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089000E8; }
    goto L_089000C0;
L_089000C0:;
    goto L_089000C4;
L_089000C4:;
    goto L_089000C8;
L_089000C8:;
    sp = sp + 64;
    return f0;
L_089000E8:;
    s0 = LD_U16(s1+6);
    v0 = func_08A62930();
    goto L_089000F0;
L_089000F0:;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_089000C4; }
    goto L_089000F8;
L_089000F8:;
    s6 = D_08B2AEE0 - (-20768);
    v0 = LD32(s6-20768);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089000C8; }
    goto L_08900108;
L_08900108:;
    v0 = D_08B28588 - (-31352);
    v1 = D_08B2AEE4 - (-20764);
    f2 = BITSF(LD32(v0-31352));
    f0 = BITSF(LD32(v1-20764));
    v0 = D_08AED07C - (-12164);
    f1 = BITSF(0);
    f2 = f2 - f0;
    f0 = BITSF(LD32(v0-12164));
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AED080 - (-12160);
    if (cnd_) { goto L_08900264; }
    goto L_0890013C;
L_0890013C:;
    f0 = BITSF(LD32(v0-12160));
    f0 = f2 + f0;
    goto L_08900144;
L_08900144:;
    f0 = BITSF(F2I(f0, 1));
    s0 = FBITS(f0);
    a0 = 108;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900154;
L_08900154:;
    t0 = LD32(s1+12);
    v1 = LD_U16(s1+16);
    t4 = LD_U8(s1+82);
    t5 = LD_U8(s1+83);
    s5 = v0 + 0;
    a1 = s2 + 0;
    v0 = s1 + 18;
    a2 = s4 + 0;
    a3 = s0 + 0;
    t3 = s3 + 0;
    a0 = s5 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    s2 = D_08B2AEDC - (-20772);
    ST32(sp+4, v0);
    s1 = 0 + 0;
    ST32(sp, v1);
    ST32(sp+8, t4);
    ST32(sp+12, t5);
    f0 = func_088AB53C(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_089001A4;
L_089001A4:;
    v0 = LD32(s2-20772);
    cnd_ = v0 != 0;
    a0 = LD32(s2-20772);
    if (cnd_) { goto L_089001F4; }
    goto L_089001B0;
L_089001B0:;
    v0 = a0 < 0x10u;
    cnd_ = v0 == 0;
    v0 = LD32(s6-20768);
    if (cnd_) { goto L_089001D4; }
    goto L_089001BC;
L_089001BC:;
    v1 = a0 << 2;
    a0 = a0 + 1;
    v1 = v1 + v0;
    ST32(v1, s5);
    ST32(s2-20772, a0);
    goto L_089000C0;
L_089001D4:;
    cnd_ = s5 == 0;
    if (cnd_) {  goto L_089000C4; }
    goto L_089001DC;
L_089001DC:;
    a0 = s5 + 0;
    func_088AB62C(a0, 0, 0, 0);
    goto L_089001E4;
L_089001E4:;
    a0 = s5 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089001EC;
L_089001EC:;
    goto L_089000C4;
L_089001F4:;
    v0 = LD32(s6-20768);
    goto L_089001F8;
L_089001F8:;
    s0 = s1 << 2;
    a1 = s5 + 0;
    v0 = s0 + v0;
    a0 = LD32(v0);
    s1 = s1 + 1;
    v0 = func_08900434(a0, a1);
    goto L_08900210;
L_08900210:;
    cnd_ = v0 != 0;
    v0 = LD32(s2-20772);
    if (cnd_) { goto L_0890022C; }
    goto L_08900218;
L_08900218:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(s6-20768);
    if (cnd_) { goto L_089001F8; }
    goto L_08900224;
L_08900224:;
    a0 = LD32(s2-20772);
    goto L_089001B0;
L_0890022C:;
    v1 = LD32(s6-20768);
    v0 = s0 + v1;
    s1 = LD32(v0);
    cnd_ = s1 != 0;
    if (cnd_) { goto L_0890024C; }
    goto L_08900240;
L_08900240:;
    v0 = s0 + v1;
    ST32(v0, s5);
    goto L_089000C0;
L_0890024C:;
    a0 = s1 + 0;
    func_088AB62C(a0, 0, 0, 0);
    goto L_08900254;
L_08900254:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890025C;
L_0890025C:;
    v1 = LD32(s6-20768);
    goto L_08900240;
L_08900264:;
    f0 = BITSF(LD32(v0-12160));
    f0 = f2 - f0;
    goto L_08900144;
}

/* 08900270 */
void func_08900270(void)
{
L_08900270:;
    return;
}

/* 08900278 */
void func_08900278(void)
{
L_08900278:;
    return;
}

/* 08900280 */
void func_08900280(void)
{
L_08900280:;
    return;
}

/* 08900288 */
u32 func_08900288(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900288:;
    v0 = 0 + 0;
    sp = sp - 16;
    sp = sp + 16;
    return v0;
}

/* 08900298 */
u32 func_08900298(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08900298:;
    sp = sp - 48;
    s0 = a1 & 0xffff;
    v1 = LD32(a0);
    v0 = LD32(a0+4);
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    v0 = func_089010A8();
    goto L_089002C0;
L_089002C0:;
    v1 = D_08B4E254 - (-7596);
    s1 = v1 - 7596;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 24;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_089002F8; }
    goto L_089002DC;
L_089002DC:;
    a0 = LD32(sp+16);
    v0 = func_088A9968(a0, a1);
    goto L_089002E4;
L_089002E4:;
    sp = sp + 48;
    return v0;
L_089002F8:;
    v0 = LD_U8(sp+20);
    v1 = LD_U8(sp+21);
    t0 = LD_U8(sp+16);
    t1 = LD_U8(sp+17);
    t2 = LD_U8(sp+18);
    t3 = LD_U8(sp+19);
    a1 = D_08AD9164 - (-28316);
    a1 = a1 - 28316;
    ST32(sp+8, s0);
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900328;
L_08900328:;
    v0 = s1 + 0;
    goto L_089002E4;
}

/* 08900330 */
void func_08900330(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08900330:;
    sp = sp - 32;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = func_089010A8();
    goto L_08900354;
L_08900354:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08900394; }
    goto L_08900364;
L_08900364:;
    func_088A98B0(a0, a1, a2);
    goto L_0890036C;
L_0890036C:;
    v0 = LD32(sp);
    ST8(s0+5, 0);
    ST32(s0, v0);
    ST8(s0+4, 0);
    goto L_08900380;
L_08900380:;
    sp = sp + 32;
    return;
L_08900394:;
    a1 = s0 + 0;
    a2 = s2 + 0;
    func_088FFD10(a0, a1, a2);
    goto L_089003A0;
L_089003A0:;
    goto L_08900380;
}

/* 089003A8 */
u32 func_089003A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089003A8:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = func_089010A8();
    goto L_089003C0;
L_089003C0:;
    cnd_ = v0 == 0;
    a0 = 36;
    if (cnd_) { goto L_08900408; }
    goto L_089003C8;
L_089003C8:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089003D0;
L_089003D0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088A86EC(a0, a1, 0, 0, 0);
    goto L_089003E0;
L_089003E0:;
    v0 = D_08AF7BA0 - (31648);
    v0 = v0 + 31648;
    v1 = s0 + 0;
    ST32(s0, v0);
    goto L_089003F0;
L_089003F0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08900408:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900410;
L_08900410:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_088A86EC(a0, a1, 0, 0, 0);
    goto L_08900420;
L_08900420:;
    v0 = D_08AF7DF8 - (32248);
    v0 = v0 + 32248;
    ST32(s0, v0);
    v1 = s0 + 0;
    goto L_089003F0;
}

/* 08900434 */
u32 func_08900434(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08900434:;
    v1 = LD32(a0);
    v0 = LD32(a1);
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0890044C; }
    goto L_08900444;
L_08900444:;
    v0 = a2 + 0;
    return v0;
L_0890044C:;
    v1 = LD_U16(a0+4);
    v0 = LD_U16(a1+4);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08900444; }
    goto L_0890045C;
L_0890045C:;
    v0 = LD_U16(a0+8);
    v1 = LD_U16(a1+8);
    v0 = v0 ^ v1;
    a2 = v0 < 0x1u;
    goto L_08900444;
}

/* 08900470 */
void func_08900470(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900470:;
    sp = sp - 16;
    func_088A9EB0();
    goto L_08900480;
L_08900480:;
    sp = sp + 16;
    return;
}

/* 0890048C */
void func_0890048C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890048C:;
    sp = sp - 16;
    func_088AA328(a3, t0, t1, t2, t3);
    goto L_0890049C;
L_0890049C:;
    sp = sp + 16;
    return;
}

/* 089004A8 */
void func_089004A8(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089004A8:;
    sp = sp - 16;
    func_088AA114(t1, t2, t3);
    goto L_089004B8;
L_089004B8:;
    sp = sp + 16;
    return;
}

/* 089004C4 */
void func_089004C4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089004C4:;
    sp = sp - 16;
    func_088AAB98();
    goto L_089004D4;
L_089004D4:;
    sp = sp + 16;
    return;
}

/* 089004E0 */
void func_089004E0(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089004E0:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    func_088AA60C(a0);
    goto L_089004F0;
L_089004F0:;
    sp = sp + 16;
    return;
}

/* 089004FC */
void func_089004FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089004FC:;
    sp = sp - 48;
    a2 = sp + 16;
    a1 = sp + 0;
    func_08900330(a0, a1, a2);
    goto L_08900510;
L_08900510:;
    v1 = LD_U16(sp+16);
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08900524; }
    goto L_0890051C;
L_0890051C:;
    v0 = D_08B2AE8E - (-20850);
    ST16(v0-20850, v1);
    goto L_08900524;
L_08900524:;
    func_088AA6D8(a0);
    goto L_0890052C;
L_0890052C:;
    sp = sp + 48;
    return;
}

/* 08900538 */
void func_08900538(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900538:;
    sp = sp - 16;
    func_088AA774();
    goto L_08900548;
L_08900548:;
    sp = sp + 16;
    return;
}

/* 08900554 */
void func_08900554(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900554:;
    sp = sp - 16;
    v0 = D_08B2BB6E - (-17554);
    a0 = LD_U8(v0-17554);
    func_088AA494(a0);
    goto L_08900568;
L_08900568:;
    sp = sp + 16;
    return;
}

/* 08900574 */
void func_08900574(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900574:;
    sp = sp - 16;
    func_088AA5C8();
    goto L_08900584;
L_08900584:;
    sp = sp + 16;
    return;
}

/* 08900590 */
u64 func_08900590(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900590:;
    sp = sp - 16;
    { u64 r_ = func_088AA888(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089005A0;
L_089005A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089005AC */
u64 func_089005AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089005AC:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = a1 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_088AA618(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089005C4;
L_089005C4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089005D0 */
void func_089005D0(void)
{
L_089005D0:;
    return;
}

/* 089005D8 */
void func_089005D8(void)
{
L_089005D8:;
    return;
}

/* 089005E0 */
float func_089005E0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089005E0:;
    sp = sp - 16;
    v0 = D_08B2BB6F - (-17553);
    f0 = BITSF(0);
    v1 = LD_U8(v0-17553);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0890062C; }
    goto L_089005FC;
L_089005FC:;
    v0 = func_088AA8C4();
    goto L_08900604;
L_08900604:;
    f0 = BITSF(v0);
    v1 = v0 >> 1;
    a0 = v0 & 0x1;
    a0 = a0 | v1;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08900634; }
    goto L_0890061C;
L_0890061C:;
    v0 = D_08AED084 - (-12156);
    f0 = BITSF(LD32(v0-12156));
    f0 = f1 * f0;
    goto L_0890062C;
L_0890062C:;
    sp = sp + 16;
    return f0;
L_08900634:;
    f0 = BITSF(a0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_0890061C;
}

/* 08900644 */
u32 func_08900644(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900644:;
    sp = sp - 16;
    a1 = 1;
    v0 = func_088AD374(a0, a1);
    goto L_08900654;
L_08900654:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08900670; }
    goto L_0890065C;
L_0890065C:;
    v1 = D_08B2BB80 - (-17536);
    v0 = LD32(v1-17536);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08900680; }
    goto L_08900670;
L_08900670:;
    v0 = 0 + 0;
    goto L_08900678;
L_08900678:;
    sp = sp + 16;
    return v0;
L_08900680:;
    v0 = func_088AA66C(a0);
    goto L_08900688;
L_08900688:;
    goto L_08900678;
}

/* 08900690 */
void func_08900690(u32 a0, u32 a1)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900690:;
    sp = sp - 16;
    func_088AAB60(a0, a1);
    goto L_089006A0;
L_089006A0:;
    sp = sp + 16;
    return;
}

/* 089006AC */
void func_089006AC(u32 a0, u32 a1)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089006AC:;
    sp = sp - 16;
    func_088AAB7C(a0, a1);
    goto L_089006BC;
L_089006BC:;
    sp = sp + 16;
    return;
}

/* 089006C8 */
float func_089006C8(void)
{
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089006C8:;
    sp = sp - 16;
    f0 = func_088AA8E8();
    goto L_089006D8;
L_089006D8:;
    sp = sp + 16;
    return f0;
}

/* 089006E4 */
void func_089006E4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089006E4:;
    sp = sp - 16;
    func_088AA664();
    goto L_089006F4;
L_089006F4:;
    sp = sp + 16;
    return;
}

/* 08900700 */
void func_08900700(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900700:;
    sp = sp - 16;
    func_088AA2F4(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08900710;
L_08900710:;
    sp = sp + 16;
    return;
}

/* 0890071C */
void func_0890071C(void)
{
L_0890071C:;
    return;
}

/* 08900724 */
void func_08900724(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900724:;
    sp = sp - 16;
    func_088A9EB0();
    goto L_08900734;
L_08900734:;
    a0 = 0 + 0;
    func_088AA77C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0890073C;
L_0890073C:;
    sp = sp + 16;
    return;
}

/* 08900748 */
u64 func_08900748(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900748:;
    sp = sp - 16;
    func_088AA328(a3, t0, t1, t2, t3);
    goto L_08900758;
L_08900758:;
    { u64 r_ = func_088AA7D8(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900760;
L_08900760:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890076C */
rv_t func_0890076C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890076C:;
    sp = sp - 16;
    func_088AA114(t1, t2, t3);
    goto L_0890077C;
L_0890077C:;
    { rv_t r_ = func_088AA9A4(0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900784;
L_08900784:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08900790 */
u32 func_08900790(void)
{
    u32 v0 = 0;
L_08900790:;
    v0 = 0 + 0;
    return v0;
}

/* 08900798 */
void func_08900798(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900798:;
    sp = sp - 16;
    s2 = D_08B161D8 - (25048);
    v0 = (u32)-1;
    v1 = LD32(s2+25048);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089008EC; }
    goto L_089007BC;
L_089007BC:;
    s1 = D_08B4E26C - (-7572);
    func_08900D84(a3, t0, t1, t2, t3);
    goto L_089007C4;
L_089007C4:;
    s0 = LD32(s1-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_089007CC;
L_089007CC:;
    cnd_ = s0 == 0;
    a0 = 30000;
    if (cnd_) { goto L_089007EC; }
    goto L_089007D4;
L_089007D4:;
    goto L_089007D8;
L_089007D8:;
    sp = sp + 16;
    return;
L_089007EC:;
    v0 = 1;
    ST32(s1-7572, v0);
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089007F8;
L_089007F8:;
    a0 = 0x20000u;
    a1 = 18;
    a2 = 0 + 0;
    a3 = 17;
    t0 = 0 + 0;
    v0 = sceNetInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900810;
L_08900810:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_089007D8; }
    goto L_08900818;
L_08900818:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900820;
L_08900820:;
    v0 = sceNetAdhocInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900828;
L_08900828:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_089007D8; }
    goto L_08900830;
L_08900830:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900838;
L_08900838:;
    a2 = D_08B161C4 - (25028);
    a2 = a2 + 25028;
    a0 = 8192;
    a1 = 19;
    v0 = sceNetAdhocctlInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890084C;
L_0890084C:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_089007D8; }
    goto L_08900854;
L_08900854:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890085C;
L_0890085C:;
    a0 = ((u32)(uintptr_t)func_08900CE0) - (3296);
    a0 = a0 + 3296;
    a1 = 0 + 0;
    v0 = sceNetAdhocctlAddHandler(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890086C;
L_0890086C:;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089007D4; }
    goto L_08900874;
L_08900874:;
    a0 = 30000;
    v0 = D_08B4E270 - (-7568);
    ST32(v0-7568, v1);
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900884;
L_08900884:;
    v1 = D_08B45B20 - (23328);
    a0 = LD32(v1+23328);
    a1 = 64;
    v0 = sceKernelChangeThreadPriority(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900894;
L_08900894:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890089C;
L_0890089C:;
    v1 = LD32(s2+25048);
    cnd_ = (s32)v1 >= 0;
    if (cnd_) { goto L_089007D8; }
    goto L_089008A8;
L_089008A8:;
    a0 = D_08AD9194 - (-28268);
    a0 = a0 - 28268;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089008C4;
L_089008C4:;
    cnd_ = (s32)v0 >= 0;
    ST32(s2+25048, v0);
    if (cnd_) { goto L_089007D4; }
    goto L_089008CC;
L_089008CC:;
    a0 = D_08AD91A8 - (-28248);
    a1 = D_08AD9188 - (-28280);
    a0 = a0 - 28248;
    a1 = a1 - 28280;
    a2 = v0 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089008E4;
L_089008E4:;
    goto L_089007D8;
L_089008EC:;
    s1 = D_08B4E26C - (-7572);
    s0 = LD32(s1-7572);
    goto L_089007CC;
}

/* 089008F8 */
void func_089008F8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089008F8:;
    sp = sp - 32;
    s1 = D_08B161D8 - (25048);
    v0 = (u32)-1;
    v1 = LD32(s1+25048);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08900A5C; }
    goto L_08900920;
L_08900920:;
    s3 = D_08B4E26C - (-7572);
    func_08900D84(a3, t0, t1, t2, t3);
    goto L_08900928;
L_08900928:;
    s0 = LD32(s3-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_08900930;
L_08900930:;
    v0 = s0 ^ 0x1;
    cnd_ = v0 == 0;
    s0 = D_08B4E274 - (-7564);
    if (cnd_) { goto L_0890096C; }
    goto L_0890093C;
L_0890093C:;
    v1 = LD32(s1+25048);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s0 = LD32(s3-7572);
    if (cnd_) { goto L_0890095C; }
    goto L_0890094C;
L_0890094C:;
    func_08900D84(a3, t0, t1, t2, t3);
    goto L_08900954;
L_08900954:;
    s0 = LD32(s3-7572);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_0890095C;
L_0890095C:;
    v0 = s0 ^ 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08900A34; }
    goto L_08900968;
L_08900968:;
    s0 = D_08B4E274 - (-7564);
    goto L_0890096C;
L_0890096C:;
    a0 = LD32(s0-7564);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08900A4C; }
    goto L_08900978;
L_08900978:;
    a0 = 30000;
    goto L_0890097C;
L_0890097C:;
    v0 = D_08B161D4 - (25044);
    s2 = (u32)-1;
    ST32(s0-7564, 0);
    ST32(v0+25044, s2);
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900990;
L_08900990:;
    v1 = D_08B4E270 - (-7568);
    a0 = LD32(v1-7568);
    v0 = sceNetAdhocctlDelHandler(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890099C;
L_0890099C:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900A34; }
    goto L_089009A4;
L_089009A4:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009AC;
L_089009AC:;
    v0 = sceNetAdhocctlTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009B4;
L_089009B4:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900A34; }
    goto L_089009BC;
L_089009BC:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009C4;
L_089009C4:;
    v0 = sceNetAdhocTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009CC;
L_089009CC:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900A34; }
    goto L_089009D4;
L_089009D4:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009DC;
L_089009DC:;
    v0 = sceNetTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009E4;
L_089009E4:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900A34; }
    goto L_089009EC;
L_089009EC:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089009F4;
L_089009F4:;
    v1 = D_08B45B20 - (23328);
    a0 = LD32(v1+23328);
    a1 = 32;
    v0 = sceKernelChangeThreadPriority(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900A04;
L_08900A04:;
    a0 = 30000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900A0C;
L_08900A0C:;
    v1 = LD32(s1+25048);
    cnd_ = (s32)v1 < 0;
    if (cnd_) { ST32(s3-7572, 0); goto L_08900A30; }
    goto L_08900A18;
L_08900A18:;
    func_08900DAC(0, 0, 0, 0, 0);
    goto L_08900A20;
L_08900A20:;
    a0 = LD32(s1+25048);
    ST32(s1+25048, s2);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900A2C;
L_08900A2C:;
    ST32(s3-7572, 0);
    goto L_08900A30;
L_08900A30:;
    goto L_08900A34;
L_08900A34:;
    sp = sp + 32;
    return;
L_08900A4C:;
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900A54;
L_08900A54:;
    a0 = 30000;
    goto L_0890097C;
L_08900A5C:;
    s3 = D_08B4E26C - (-7572);
    s0 = LD32(s3-7572);
    goto L_08900930;
}

/* 08900A68 */
void func_08900A68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08900A68:;
    sp = sp - 32;
    a1 = a0 + 0;
    a2 = 8;
    a0 = sp + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900A80;
L_08900A80:;
    a0 = sp + 0;
    v0 = sceNetAdhocctlConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900A88;
L_08900A88:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900AAC; }
    goto L_08900A90;
L_08900A90:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_08900A98;
L_08900A98:;
    v1 = 2;
    v0 = D_08B4E26C - (-7572);
    ST32(v0-7572, v1);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_08900AA8;
L_08900AA8:;
    goto L_08900AAC;
L_08900AAC:;
    sp = sp + 32;
    return;
}

/* 08900AB4 */
void func_08900AB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900AB4:;
    sp = sp - 16;
    v0 = sceNetAdhocctlDisconnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900AC4;
L_08900AC4:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900AF4; }
    goto L_08900ACC;
L_08900ACC:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_08900AD4;
L_08900AD4:;
    v1 = 4;
    v0 = D_08B4E26C - (-7572);
    ST32(v0-7572, v1);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_08900AE4;
L_08900AE4:;
    v1 = (u32)-1;
    v0 = D_08B161D4 - (25044);
    ST32(v0+25044, v1);
    goto L_08900AF4;
L_08900AF4:;
    sp = sp + 16;
    return;
}

/* 08900AFC */
void func_08900AFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08900AFC:;
    sp = sp - 32;
    v0 = sceWlanGetSwitchState(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900B14;
L_08900B14:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08900B4C; }
    goto L_08900B1C;
L_08900B1C:;
    func_08900D84(0, 0, 0, 0, 0);
    goto L_08900B24;
L_08900B24:;
    v1 = 8;
    v0 = D_08B4E26C - (-7572);
    ST32(v0-7572, v1);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_08900B34;
L_08900B34:;
    goto L_08900B38;
L_08900B38:;
    sp = sp + 32;
    return;
L_08900B4C:;
    s2 = D_08B4E278 - (-7560);
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900B54;
L_08900B54:;
    s0 = s2 - 7560;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08900B74; }
    goto L_08900B68;
L_08900B68:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900B70;
L_08900B70:;
    ST32(s0+4, s1);
    goto L_08900B74;
L_08900B74:;
    v0 = LD32(s0+8);
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = sceNetAdhocctlGetState(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900B88;
L_08900B88:;
    cnd_ = (s32)v0 < 0;
    s0 = s2 - 7560;
    if (cnd_) { goto L_08900CCC; }
    goto L_08900B90;
L_08900B90:;
    s0 = D_08B4E26C - (-7572);
    func_08900D84(0, 0, 0, 0, 0);
    goto L_08900B98;
L_08900B98:;
    v1 = LD32(s0-7572);
    v0 = v1 < 0x9u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08900BD0; }
    goto L_08900BA8;
L_08900BA8:;
    v1 = D_08AD91C0 - (-28224);
    v1 = v1 - 28224;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08900BC0u: goto L_08900BC0; case 0x08900BD0u: goto L_08900BD0; case 0x08900C20u: goto L_08900C20; case 0x08900C40u: goto L_08900C40; case 0x08900CACu: goto L_08900CAC; default: rs_break(0, 0x08900bb8); }
L_08900BC0:;
    v1 = LD32(sp);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08900C18; }
    goto L_08900BD0;
L_08900BD0:;
    s0 = s2 - 7560;
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_08900BD8;
L_08900BD8:;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08900B38; }
    goto L_08900BE4;
L_08900BE4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08900B38; }
    goto L_08900BFC;
L_08900BFC:;
    v0 = func_088F8C18();
    goto L_08900C04;
L_08900C04:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900C10;
L_08900C10:;
    goto L_08900B38;
L_08900C18:;
    ST32(s0-7572, v0);
    goto L_08900BD0;
L_08900C20:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08900BD0; }
    goto L_08900C2C;
L_08900C2C:;
    ST32(s0-7572, v0);
    v1 = (u32)-1;
    v0 = D_08B161D4 - (25044);
    ST32(v0+25044, v1);
    goto L_08900BD0;
L_08900C40:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    a0 = sp + 4;
    if (cnd_) { goto L_08900BD0; }
    goto L_08900C4C;
L_08900C4C:;
    a1 = 0 + 0;
    v0 = sceNetAdhocctlGetScanInfo(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900C54;
L_08900C54:;
    cnd_ = (s32)v0 < 0;
    a0 = LD32(sp+4);
    if (cnd_) { goto L_08900BD0; }
    goto L_08900C5C;
L_08900C5C:;
    cnd_ = a0 == 0;
    v0 = D_08B161D4 - (25044);
    if (cnd_) { goto L_08900CC4; }
    goto L_08900C64;
L_08900C64:;
    v0 = 0x24920000u;
    v1 = a0 >> 2;
    v0 = v0 | 0x4925;
    { u64 p_ = (u64)v1 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    s1 = D_08B4E274 - (-7564);
    a1 = LD32(s1-7564);
    v0 = D_08B161D4 - (25044);
    v1 = hi;
    cnd_ = a1 != 0;
    ST32(v0+25044, v1);
    if (cnd_) { goto L_08900CB4; }
    goto L_08900C8C;
L_08900C8C:;
    { rv_t r_ = func_088F99D0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900C94;
L_08900C94:;
    a1 = v0 + 0;
    a0 = sp + 4;
    ST32(s1-7564, v0);
    v0 = sceNetAdhocctlGetScanInfo(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900CA4;
L_08900CA4:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08900BD0; }
    goto L_08900CAC;
L_08900CAC:;
    v0 = 1;
    goto L_08900C18;
L_08900CB4:;
    a0 = a1 + 0;
    { rv_t r_ = func_088F9A14(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08900CBC;
L_08900CBC:;
    a0 = LD32(sp+4);
    goto L_08900C8C;
L_08900CC4:;
    ST32(v0+25044, 0);
    goto L_08900CAC;
L_08900CCC:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08900B38; }
    goto L_08900CD8;
L_08900CD8:;
    goto L_08900BE4;
}

/* 08900CE0 */
rv_t func_08900CE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900CE0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 0;
    a0 = D_08AD91E4 - (-28188);
    a0 = a0 - 28188;
    s2 = D_08B4E26C - (-7572);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08900D74; }
    goto L_08900D10;
L_08900D10:;
    v1 = LD32(s2-7572);
    v0 = 2;
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 2;
    if (cnd_) { goto L_08900D34; }
    goto L_08900D20;
L_08900D20:;
    v0 = v1 - 5;
    cnd_ = a0 != 0;
    v0 = v0 < 0x3u;
    if (cnd_) { goto L_08900D48; }
    goto L_08900D2C;
L_08900D2C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AD9204 - (-28156); goto L_08900D4C; }
    goto L_08900D34;
L_08900D34:;
    func_08900D84(a3, t0, t1, t2, t3);
    goto L_08900D3C;
L_08900D3C:;
    v1 = 1;
    ST32(s2-7572, v1);
    func_08900DD4(0, 0, 0, 0, 0, 0);
    goto L_08900D48;
L_08900D48:;
    a0 = D_08AD9204 - (-28156);
    goto L_08900D4C;
L_08900D4C:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a0 = a0 - 28156;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900D5C;
L_08900D5C:;
    goto L_08900D60;
L_08900D60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08900D74:;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900D7C;
L_08900D7C:;
    goto L_08900D60;
}

/* 08900D84 */
void func_08900D84(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900D84:;
    sp = sp - 16;
    v0 = D_08B161D8 - (25048);
    a1 = 1;
    a0 = LD32(v0+25048);
    a2 = 0 + 0;
    v0 = sceKernelWaitSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900DA0;
L_08900DA0:;
    sp = sp + 16;
    return;
}

/* 08900DAC */
void func_08900DAC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900DAC:;
    sp = sp - 16;
    v0 = D_08B161D8 - (25048);
    a1 = 1;
    a0 = LD32(v0+25048);
    a2 = 0 + 0;
    v0 = sceKernelWaitSemaCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900DC8;
L_08900DC8:;
    sp = sp + 16;
    return;
}

/* 08900DD4 */
void func_08900DD4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900DD4:;
    sp = sp - 16;
    v0 = D_08B161D8 - (25048);
    a1 = 1;
    a0 = LD32(v0+25048);
    v0 = sceKernelSignalSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900DEC;
L_08900DEC:;
    sp = sp + 16;
    return;
}

/* 08900DF8 */
u64 func_08900DF8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08900DF8:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a1 ^ 0xffff;
    v1 = s1 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    a0 = D_08AD9234 - (-28108);
    s2 = D_08B4E278 - (-7560);
    v1 = s0 & v1;
    a0 = a0 - 28108;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v1 != 0;
    s3 = s2 - 7560;
    if (cnd_) { goto L_08900E88; }
    goto L_08900E4C;
L_08900E4C:;
    v0 = s1 < 0x1u;
    goto L_08900E50;
L_08900E50:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08B4E278 - (-7560);
    if (cnd_) { goto L_08900E78; }
    goto L_08900E5C;
L_08900E5C:;
    goto L_08900E60;
L_08900E60:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08900E78:;
    a0 = LD32(v0-7560);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900E80;
L_08900E80:;
    goto L_08900E60;
L_08900E88:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900E90;
L_08900E90:;
    ST32(s2-7560, v0);
    ST32(s3+8, 0);
    v0 = func_088F8C18();
    goto L_08900E9C;
L_08900E9C:;
    ST32(s3+4, v0);
    v0 = s1 < 0x1u;
    goto L_08900E50;
}

/* 08900EA8 */
rv_t func_08900EA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900EA8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08900DF8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900EBC;
L_08900EBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08900EC8 */
rv_t func_08900EC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900EC8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08900DF8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08900EDC;
L_08900EDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08900EE8 */
rv_t func_08900EE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08900EE8:;
    v0 = 4;
    cnd_ = a1 == v0;
    a3 = D_08B4E294 - (-7532);
    if (cnd_) { goto L_08900F30; }
    goto L_08900EF4;
L_08900EF4:;
    cnd_ = a1 != 0;
    v0 = 5;
    if (cnd_) { goto L_08900F18; }
    goto L_08900EFC;
L_08900EFC:;
    cnd_ = a2 == v0;
    a0 = D_08B4E294 - (-7532);
    if (cnd_) { goto L_08900F20; }
    goto L_08900F04;
L_08900F04:;
    v1 = LD32(a0-7532);
    v0 = D_08B4E291 - (-7535);
    ST8(v0-7535, 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0-7532, v1);
    goto L_08900F18;
L_08900F18:;
    return (rv_t){ v0, v1, f0 };
L_08900F20:;
    v0 = LD32(a0-7532);
    v0 = v0 | 0x2;
    ST32(a0-7532, v0);
    goto L_08900F04;
L_08900F30:;
    a0 = LD32(a3-7532);
    v1 = 1;
    v0 = D_08B4E291 - (-7535);
    a0 = a0 | 0x1;
    ST8(v0-7535, v1);
    ST32(a3-7532, a0);
    return (rv_t){ v0, v1, f0 };
}

/* 08900F4C */
void func_08900F4C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900F4C:;
    sp = sp - 16;
    s0 = D_08B161DC - (25052);
    v0 = LD32(s0+25052);
    cnd_ = (s32)v0 < 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08900F78; }
    goto L_08900F68;
L_08900F68:;
    v0 = sceNetApctlDelHandler(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900F70;
L_08900F70:;
    v1 = (u32)-1;
    ST32(s0+25052, v1);
    goto L_08900F78;
L_08900F78:;
    v0 = sceNetApctlTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900F80;
L_08900F80:;
    sp = sp + 16;
    return;
}

/* 08900F90 */
u32 func_08900F90(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900F90:;
    sp = sp - 16;
    a0 = 8192;
    a1 = 19;
    v0 = sceNetApctlInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900FA8;
L_08900FA8:;
    a0 = ((u32)(uintptr_t)func_08900EE8) - (3816);
    s0 = v0 + 0;
    a0 = a0 + 3816;
    cnd_ = (s32)v0 < 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08900FD8; }
    goto L_08900FBC;
L_08900FBC:;
    v0 = D_08B4E294 - (-7532);
    ST32(v0-7532, 0);
    v0 = sceNetApctlAddHandler(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08900FC8;
L_08900FC8:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08900FEC; }
    goto L_08900FD0;
L_08900FD0:;
    v0 = D_08B161DC - (25052);
    ST32(v0+25052, s0);
    goto L_08900FD8;
L_08900FD8:;
    v0 = s0 + 0;
    goto L_08900FDC;
L_08900FDC:;
    sp = sp + 16;
    return v0;
L_08900FEC:;
    func_08900F4C(0, 0, 0, 0, 0, 0, 0);
    goto L_08900FF4;
L_08900FF4:;
    v0 = s0 + 0;
    goto L_08900FDC;
}

/* 08900FFC */
void func_08900FFC(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08900FFC:;
    sp = sp - 16;
    v0 = func_089010C0(a2, a3, t0, t1, t2, t3);
    goto L_0890100C;
L_0890100C:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08901020; }
    goto L_08901014;
L_08901014:;
    goto L_08901018;
L_08901018:;
    sp = sp + 16;
    return;
L_08901020:;
    v0 = D_08B4E292 - (-7534);
    v1 = D_08B4E290 - (-7536);
    ST8(v0-7534, a0);
    ST8(v1-7536, a0);
    func_0890E7DC();
    goto L_08901034;
L_08901034:;
    goto L_08901018;
}

/* 0890103C */
void func_0890103C(void)
{
L_0890103C:;
    return;
}

/* 08901044 */
void func_08901044(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901044:;
    sp = sp - 16;
    v0 = func_0890E850(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901054;
L_08901054:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = D_08B4E292 - (-7534);
    if (cnd_) { goto L_08901068; }
    goto L_08901064;
L_08901064:;
    ST8(v0-7534, 0);
    goto L_08901068;
L_08901068:;
    sp = sp + 16;
    return;
}

/* 08901074 */
void func_08901074(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901074:;
    sp = sp - 16;
    func_0890114C(a1, a2, a3, t0, t1, t2, t3);
    goto L_08901084;
L_08901084:;
    v0 = D_08B4E290 - (-7536);
    ST8(v0-7536, 0);
    v1 = D_08B4E291 - (-7535);
    v0 = D_08B4E292 - (-7534);
    ST8(v1-7535, 0);
    ST8(v0-7534, 0);
    sp = sp + 16;
    return;
}

/* 089010A8 */
u32 func_089010A8(void)
{
    u32 v0 = 0, v1 = 0;
L_089010A8:;
    v1 = D_08B4E291 - (-7535);
    v0 = LD_U8(v1-7535);
    return v0;
}

/* 089010B4 */
u32 func_089010B4(void)
{
    u32 v0 = 0, v1 = 0;
L_089010B4:;
    v1 = D_08B4E292 - (-7534);
    v0 = LD_U8(v1-7534);
    return v0;
}

/* 089010C0 */
u32 func_089010C0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089010C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 64;
    v0 = sceKernelChangeThreadPriority(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089010D8;
L_089010D8:;
    a0 = 0x20000u;
    a1 = 18;
    a2 = 0 + 0;
    a3 = 17;
    t0 = 0 + 0;
    v0 = sceNetInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089010F0;
L_089010F0:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08901130; }
    goto L_089010F8;
L_089010F8:;
    v0 = sceNetInetInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901100;
L_08901100:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0890113C; }
    goto L_08901108;
L_08901108:;
    v0 = sceNetResolverInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901110;
L_08901110:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0890113C; }
    goto L_08901118;
L_08901118:;
    v0 = func_08900F90(0, 0, 0, 0, 0, 0);
    goto L_08901120;
L_08901120:;
    s0 = v0 + 0;
    cnd_ = (s32)s0 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890113C; }
    goto L_0890112C;
L_0890112C:;
    goto L_08901130;
L_08901130:;
    sp = sp + 16;
    return v0;
L_0890113C:;
    func_0890114C(0, 0, 0, 0, 0, 0, 0);
    goto L_08901144;
L_08901144:;
    v0 = s0 + 0;
    goto L_0890112C;
}

/* 0890114C */
void func_0890114C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890114C:;
    sp = sp - 16;
    func_08900F4C(a1, a2, a3, t0, t1, t2, t3);
    goto L_0890115C;
L_0890115C:;
    v0 = sceNetResolverTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901164;
L_08901164:;
    v0 = sceNetInetTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890116C;
L_0890116C:;
    v0 = sceNetTerm(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901174;
L_08901174:;
    a0 = 0 + 0;
    a1 = 32;
    v0 = sceKernelChangeThreadPriority(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901180;
L_08901180:;
    sp = sp + 16;
    return;
}

/* 0890118C */
void func_0890118C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890118C:;
    sp = sp - 48;
    s3 = D_08B2C18C - (-15988);
    s2 = a0 + 0;
    a0 = 0 + 0;
    s1 = a1 + 0;
    s0 = s3 - 15988;
    f20 = f12;
    func_08904FB8(a0);
    goto L_089011C4;
L_089011C4:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_089011CC;
L_089011CC:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089012E0; }
    goto L_089011D8;
L_089011D8:;
    a0 = s2 + 0;
    func_0890C3C0(a0);
    goto L_089011E0;
L_089011E0:;
    v0 = LD32(s0+28);
    cnd_ = v0 == s1;
    a1 = s1 + 0;
    if (cnd_) { goto L_089011F4; }
    goto L_089011EC;
L_089011EC:;
    a0 = s0 + 0;
    func_0890D108(a0, a1);
    goto L_089011F4;
L_089011F4:;
    v0 = D_08AED088 - (-12152);
    f0 = BITSF(LD32(v0-12152));
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    v0 = D_08B4E298 - (-7528);
    if (cnd_) { goto L_0890126C; }
    goto L_0890120C;
L_0890120C:;
    v1 = LD_U8(s0+18);
    cnd_ = v1 != 0;
    ST32(v0-7528, 0);
    if (cnd_) { goto L_08901258; }
    goto L_08901218;
L_08901218:;
    v0 = LD_U8(s0+24);
    goto L_0890121C;
L_0890121C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08901244; }
    goto L_08901224;
L_08901224:;
    goto L_08901228;
L_08901228:;
    sp = sp + 48;
    return;
L_08901244:;
    a1 = 0 + 0;
    goto L_08901248;
L_08901248:;
    v0 = func_0890D084(a0, a1);
    goto L_08901250;
L_08901250:;
    goto L_08901228;
L_08901258:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901264;
L_08901264:;
    v0 = LD_U8(s0+24);
    goto L_0890121C;
L_0890126C:;
    f12 = f20;
    f0 = func_08903EB0(f12);
    goto L_08901274;
L_08901274:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AED08C - (-12148);
    if (cnd_) { goto L_089012D4; }
    goto L_0890128C;
L_0890128C:;
    f0 = BITSF(LD32(v0-12148));
    f0 = f1 + f0;
    goto L_08901294;
L_08901294:;
    f0 = BITSF(F2I(f0, 1));
    s0 = s3 - 15988;
    v1 = LD_U8(s0+18);
    v0 = D_08B4E298 - (-7528);
    s1 = 1;
    cnd_ = v1 == s1;
    ST32(v0-7528, FBITS(f0));
    if (cnd_) { goto L_089012BC; }
    goto L_089012B0;
L_089012B0:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089012BC;
L_089012BC:;
    v0 = LD_U8(s0+24);
    a0 = s0 + 0;
    cnd_ = v0 != s1;
    a1 = 1;
    if (cnd_) { goto L_08901248; }
    goto L_089012CC;
L_089012CC:;
    goto L_08901228;
L_089012D4:;
    f0 = BITSF(LD32(v0-12148));
    f0 = f1 - f0;
    goto L_08901294;
L_089012E0:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_089012E8;
L_089012E8:;
    goto L_089011D8;
}

/* 089012F0 */
void func_089012F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, t5 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089012F0:;
    sp = sp - 16;
    v0 = D_08B4E298 - (-7528);
    t5 = a2 + 0;
    a2 = LD32(v0-7528);
    v1 = a3 + 0;
    v0 = t0 + 0;
    t4 = t1 + 0;
    t3 = t2 + 0;
    a3 = t5 + 0;
    t0 = v1 + 0;
    t1 = v0 + 0;
    t2 = t4 + 0;
    func_08906A60(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901328;
L_08901328:;
    sp = sp + 16;
    return;
}

/* 08901334 */
void func_08901334(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901334:;
    sp = sp - 16;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    a0 = s0 + 0;
    v1 = LD_U8(s0+18);
    s1 = 1;
    a1 = 1;
    cnd_ = v1 == s1;
    if (cnd_) { goto L_08901368; }
    goto L_08901360;
L_08901360:;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901368;
L_08901368:;
    v0 = LD_U8(s0+24);
    a0 = s0 + 0;
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08901380; }
    goto L_08901378;
L_08901378:;
    v0 = func_0890D084(a0, a1);
    goto L_08901380;
L_08901380:;
    sp = sp + 16;
    return;
}

/* 08901394 */
void func_08901394(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_08901394:;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    f1 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v0 = a0 + 0;
    f2 = (float)(s32)FBITS(f1);
    f3 = (float)(s32)FBITS(f0);
    ST32(a0, 0);
    ST32(a0+8, FBITS(f2));
    ST32(a0+12, FBITS(f3));
    ST32(a0+4, 0);
    return;
}

/* 089013C4 */
void func_089013C4(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089013C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08901394(a0);
    goto L_089013D8;
L_089013D8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 089013EC */
void func_089013EC(void)
{
L_089013EC:;
    return;
}

/* 089013F4 */
void func_089013F4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089013F4:;
    sp = sp - 16;
    func_0890BC58();
    goto L_08901404;
L_08901404:;
    sp = sp + 16;
    return;
}

/* 08901410 */
void func_08901410(void)
{
L_08901410:;
    return;
}

/* 08901418 */
void func_08901418(void)
{
L_08901418:;
    return;
}

/* 08901420 */
void func_08901420(void)
{
L_08901420:;
    return;
}

/* 08901428 */
float func_08901428(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_08901428:;
    v0 = D_08AED090 - (-12144);
    f0 = BITSF(LD32(v0-12144));
    return f0;
}

/* 08901434 */
void func_08901434(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901434:;
    sp = sp - 16;
    func_0890CD2C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901444;
L_08901444:;
    func_08903A24(0, 0, 0, 0, 0, 0);
    goto L_0890144C;
L_0890144C:;
    func_0890BC0C();
    goto L_08901454;
L_08901454:;
    func_089020E8();
    goto L_0890145C;
L_0890145C:;
    func_089059D0();
    goto L_08901464;
L_08901464:;
    func_0890645C();
    goto L_0890146C;
L_0890146C:;
    sp = sp + 16;
    return;
}

/* 08901478 */
void func_08901478(void)
{
L_08901478:;
    return;
}

/* 08901480 */
void func_08901480(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901480:;
    sp = sp - 16;
    func_08902110(t1, t2, t3);
    goto L_08901490;
L_08901490:;
    func_08905A14(0, 0, 0);
    goto L_08901498;
L_08901498:;
    func_08906484(0, 0, 0);
    goto L_089014A0;
L_089014A0:;
    func_0890BC38();
    goto L_089014A8;
L_089014A8:;
    func_08903DA8();
    goto L_089014B0;
L_089014B0:;
    sp = sp + 16;
    return;
}

/* 089014BC */
void func_089014BC(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089014BC:;
    sp = sp - 16;
    func_089020F0(t1, t2, t3);
    goto L_089014CC;
L_089014CC:;
    func_089059EC(0, 0, 0);
    goto L_089014D4;
L_089014D4:;
    func_08906464(0, 0, 0);
    goto L_089014DC;
L_089014DC:;
    func_0890BC14();
    goto L_089014E4;
L_089014E4:;
    sp = sp + 16;
    return;
}

/* 089014F0 */
void func_089014F0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089014F0:;
    sp = sp - 32;
    s4 = D_08B159FC - (23036);
    v0 = LD32(s4+23036);
    s2 = D_08AED094 - (-12140);
    s1 = D_08AED098 - (-12136);
    s0 = v0 + 60;
    f1 = BITSF(LD32(s2-12140));
    f0 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s1-12136));
    f0 = f0 * f1;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    a0 = FBITS(f1);
    cnd_ = !fcc;
    s3 = D_08AED09C - (-12132);
    if (cnd_) { goto L_08901558; }
    goto L_08901544;
L_08901544:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    a0 = a0 | v0;
    goto L_08901558;
L_08901558:;
    f1 = BITSF(LD32(s0+12));
    f0 = BITSF(LD32(s3-12132));
    f2 = BITSF(LD32(s1-12136));
    f0 = f1 * f0;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    a1 = FBITS(f1);
    cnd_ = !fcc;
    a0 = a0 & 0xffff;
    if (cnd_) { goto L_08901590; }
    goto L_0890157C;
L_0890157C:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a1 = FBITS(f0);
    a1 = a1 | v0;
    goto L_08901590;
L_08901590:;
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s2-12140));
    f2 = BITSF(LD32(s1-12136));
    f0 = f1 * f0;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    a2 = FBITS(f1);
    cnd_ = !fcc;
    a1 = a1 & 0xffff;
    if (cnd_) { goto L_089015C8; }
    goto L_089015B4;
L_089015B4:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    a2 = a2 | v0;
    goto L_089015C8;
L_089015C8:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s3-12132));
    f2 = BITSF(LD32(s1-12136));
    f0 = f1 * f0;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    a3 = FBITS(f1);
    cnd_ = !fcc;
    a2 = a2 & 0xffff;
    if (cnd_) { goto L_08901600; }
    goto L_089015EC;
L_089015EC:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a3 = FBITS(f0);
    a3 = a3 | v0;
    goto L_08901600;
L_08901600:;
    a3 = a3 & 0xffff;
    func_08A98FF8(a0, a1, a2, a3);
    goto L_08901608;
L_08901608:;
    v1 = D_08AED0A0 - (-12128);
    f2 = BITSF(LD32(v1-12128));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s2-12140));
    f1 = f1 * f2;
    v0 = D_08AED0A4 - (-12124);
    f4 = BITSF(LD32(s1-12136));
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-12124));
    f0 = f0 - f2;
    f0 = f0 * f3;
    f0 = f1 - f0;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f4, f0, 14);
    a0 = FBITS(f1);
    cnd_ = !fcc;
    f1 = BITSF(LD32(s0+4));
    if (cnd_) { goto L_08901668; }
    goto L_08901650;
L_08901650:;
    f0 = f0 - f4;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    a0 = a0 | v0;
    f2 = BITSF(LD32(v1-12128));
    goto L_08901668;
L_08901668:;
    f0 = BITSF(LD32(s0+12));
    f3 = BITSF(LD32(s3-12132));
    f1 = f1 * f2;
    v0 = D_08AED0A8 - (-12120);
    f4 = BITSF(LD32(s1-12136));
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-12120));
    f0 = f0 - f2;
    f0 = f0 * f3;
    f0 = f1 - f0;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f4, f0, 14);
    a1 = FBITS(f1);
    cnd_ = !fcc;
    a0 = a0 & 0xffff;
    if (cnd_) { goto L_089016B8; }
    goto L_089016A4;
L_089016A4:;
    f0 = f0 - f4;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a1 = FBITS(f0);
    a1 = a1 | v0;
    goto L_089016B8;
L_089016B8:;
    a1 = a1 & 0xffff;
    func_08A9883C(a0, a1);
    goto L_089016C0;
L_089016C0:;
    a1 = LD32(s4+23036);
    a0 = a1 + 12;
    func_08903DB4(a0, a1);
    goto L_089016CC;
L_089016CC:;
    sp = sp + 32;
    return;
}

/* 089016EC */
void func_089016EC(float f12)
{
    float f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089016EC:;
    f13 = BITSF(0);
    sp = sp - 16;
    func_0890500C(f12, f13);
    goto L_08901700;
L_08901700:;
    func_08A9B1D4();
    goto L_08901708;
L_08901708:;
    sp = sp + 16;
    return;
}

/* 08901714 */
void func_08901714(void)
{
L_08901714:;
    return;
}

/* 0890171C */
void func_0890171C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890171C:;
    sp = sp - 16;
    a0 = D_08B2C18C - (-15988);
    a0 = a0 - 15988;
    v1 = LD_U8(a0+24);
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08901744; }
    goto L_0890173C;
L_0890173C:;
    v0 = func_0890D084(a0, a1);
    goto L_08901744;
L_08901744:;
    a0 = 4;
    func_08A9806C(a0);
    goto L_0890174C;
L_0890174C:;
    sp = sp + 16;
    return;
}

/* 08901758 */
void func_08901758(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901758:;
    sp = sp - 16;
    func_08903F14(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901768;
L_08901768:;
    sp = sp + 16;
    return;
}

/* 08901774 */
u64 func_08901774(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901774:;
    sp = sp - 16;
    { u64 r_ = func_0890427C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901784;
L_08901784:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08901790 */
u32 func_08901790(void)
{
    u32 v0 = 0;
L_08901790:;
    v0 = D_08BB1D10 - (7440);
    ST32(v0+7440, 0);
    return v0;
}

/* 0890179C */
void func_0890179C(void)
{
L_0890179C:;
    return;
}

/* 089017A4 */
u32 func_089017A4(u32 a0)
{
    u32 v0 = 0;
L_089017A4:;
    v0 = LD32(a0);
    return v0;
}

/* 089017AC */
void func_089017AC(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089017AC:;
    sp = sp - 64;
    v0 = D_08B4F350 - (-3248);
    v1 = LD_U8(v0-3248);
    cnd_ = v1 != 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08901818; }
    goto L_089017E8;
L_089017E8:;
    sp = sp + 64;
    return;
L_08901818:;
    a1 = (u32)-1;
    a0 = 1;
    func_08904E88(a0, a1);
    goto L_08901824;
L_08901824:;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_0890182C;
L_0890182C:;
    s0 = 0x150000u;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901834;
L_08901834:;
    v1 = LD32(sp);
    a0 = D_08B4F344 - (-3260);
    s0 = s0 | 0x4000;
    s3 = v0 + v1;
    ST32(a0-3260, s0);
    s1 = 0x160000u;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901850;
L_08901850:;
    v0 = v0 + s0;
    s1 = s1 | 0x4000;
    fp = D_08B4F340 - (-3264);
    s7 = D_08B4F34C - (-3252);
    ST32(fp-3264, v0);
    s4 = D_08B4E340 - (-7360);
    s5 = D_08B4E740 - (-6336);
    ST32(s7-3252, s1);
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08901874;
L_08901874:;
    t8 = D_08B4F351 - (-3247);
    v1 = LD_U8(t8-3247);
    v0 = v0 + s1;
    a1 = D_08B4F348 - (-3256);
    ST32(a1-3256, v0);
    cnd_ = v1 != 0;
    s6 = D_08B4EB40 - (-5312);
    if (cnd_) { goto L_089019C8; }
    goto L_08901890;
L_08901890:;
    v0 = D_08B161E8 - (25064);
    t2 = LD32(v0+25064);
    v1 = D_08B161EC - (25068);
    t7 = LD32(v1+25068);
    v1 = D_08AED0B0 - (-12112);
    v0 = D_08AED0AC - (-12116);
    f5 = BITSF(LD32(v1-12112));
    a2 = t2 & 0x1;
    v1 = t2 >> 1;
    f6 = BITSF(LD32(v0-12116));
    a2 = a2 | v1;
    v0 = D_08AED0B4 - (-12108);
    f4 = BITSF(LD32(v0-12108));
    f7 = BITSF(a2);
    t1 = 0 + 0;
    s2 = 255;
    t5 = 0x80000000u;
    t6 = t2 + 0;
    t3 = t7 + 0;
    goto L_089018DC;
L_089018DC:;
    v0 = t2 < t1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08901F40; }
    goto L_089018E8;
L_089018E8:;
    f0 = BITSF(t3);
    cnd_ = (s32)t3 < 0;
    f3 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08901F24; }
    goto L_089018F4;
L_089018F4:;
    v0 = t1 - t2;
    f8 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f8);
    if (cnd_) { goto L_08901F08; }
    goto L_08901904;
L_08901904:;
    f1 = BITSF(t6);
    cnd_ = (s32)t6 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08901EEC; }
    goto L_08901910;
L_08901910:;
    f0 = f6 - f0;
    v0 = s2 - t7;
    f8 = BITSF(v0);
    f0 = f5 / f0;
    f1 = (float)(s32)FBITS(f8);
    cnd_ = (s32)v0 < 0;
    f0 = f2 * f0;
    if (cnd_) { goto L_08901ED0; }
    goto L_0890192C;
L_0890192C:;
    f0 = f0 * f1;
    f0 = f3 + f0;
    f3 = BITSF(F2I(f0, 1));
    fcc = FCMP(f4, f0, 14);
    a0 = FBITS(f3);
    goto L_08901940;
L_08901940:;
    cnd_ = !fcc;
    v0 = t1 << 2;
    if (cnd_) { goto L_08901958; }
    goto L_08901948;
L_08901948:;
    f0 = f0 - f4;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    a0 = a0 | t5;
    goto L_08901958;
L_08901958:;
    a1 = a0 << 16;
    v1 = a0 << 8;
    t4 = s4 - 7360;
    s0 = s5 - 6336;
    s1 = s6 - 5312;
    t1 = t1 + 1;
    t0 = v0 + s1;
    a2 = v0 + t4;
    v1 = v1 | t5;
    a1 = a1 | t5;
    a0 = a0 | t5;
    v0 = v0 + s0;
    a3 = (s32)t1 < 256;
    ST32(a2, a0);
    ST32(v0, v1);
    cnd_ = a3 != 0;
    ST32(t0, a1);
    if (cnd_) { goto L_089018DC; }
    goto L_0890199C;
L_0890199C:;
    a0 = t4 + 0;
    v0 = 1;
    a1 = 1024;
    ST8(t8-3247, v0);
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089019B0;
L_089019B0:;
    a0 = s0 + 0;
    a1 = 1024;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089019BC;
L_089019BC:;
    a0 = s1 + 0;
    a1 = 1024;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089019C8;
L_089019C8:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089019D0;
L_089019D0:;
    a0 = 0 + 0;
    func_0890BEE0(a0);
    goto L_089019D8;
L_089019D8:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089019E0;
L_089019E0:;
    a0 = 4;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089019E8;
L_089019E8:;
    a0 = 0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089019F0;
L_089019F0:;
    v0 = D_08B4F344 - (-3260);
    a0 = LD32(v0-3260);
    a1 = 128;
    a2 = 128;
    func_08902D38(a0, a1, a2);
    goto L_08901A04;
L_08901A04:;
    a0 = s3 + 0;
    func_08902BCC(a0);
    goto L_08901A0C;
L_08901A0C:;
    a0 = 0 + 0;
    func_08A98048(a0);
    goto L_08901A14;
L_08901A14:;
    a0 = 128;
    func_0890BF58(a0);
    goto L_08901A1C;
L_08901A1C:;
    a0 = 3;
    func_08A9806C(a0);
    goto L_08901A24;
L_08901A24:;
    a0 = 0 + 0;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901A2C;
L_08901A2C:;
    a0 = 2;
    a1 = 254;
    a2 = 255;
    func_08A990BC(a0, a1, a2);
    goto L_08901A3C;
L_08901A3C:;
    a1 = 272;
    a2 = 128;
    a3 = 128;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a0 = 480;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901A5C;
L_08901A5C:;
    a0 = 0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901A64;
L_08901A64:;
    s3 = 128;
    v1 = D_08B161E0 - (25056);
    v0 = LD32(v1+25056);
    cnd_ = v0 == s3;
    s2 = 128;
    if (cnd_) { goto L_08901B0C; }
    goto L_08901A78;
L_08901A78:;
    a0 = LD32(s7-3252);
    s0 = s2 >> 1;
    s1 = s3 >> 1;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08902D38(a0, a1, a2);
    goto L_08901A90;
L_08901A90:;
    a0 = LD32(fp-3264);
    a1 = s2 + 0;
    a2 = s3 + 0;
    t0 = 0 + 0;
    a3 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_08901AA8;
L_08901AA8:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901AC8;
L_08901AC8:;
    a0 = D_08B4F344 - (-3260);
    a1 = LD32(a0-3260);
    a2 = D_08B4F348 - (-3256);
    v1 = LD32(s7-3252);
    a0 = LD32(a2-3256);
    a2 = D_08B161E0 - (25056);
    ST32(s7-3252, a1);
    s2 = s0 + 0;
    s3 = s1 + 0;
    a1 = LD32(fp-3264);
    v0 = LD32(a2+25056);
    a2 = D_08B4F344 - (-3260);
    ST32(a2-3260, v1);
    v1 = D_08B4F348 - (-3256);
    ST32(fp-3264, a0);
    cnd_ = s0 != v0;
    ST32(v1-3256, a1);
    if (cnd_) { goto L_08901A78; }
    goto L_08901B0C;
L_08901B0C:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901B14;
L_08901B14:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901B1C;
L_08901B1C:;
    a0 = 4;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901B24;
L_08901B24:;
    a0 = 0 + 0;
    func_0890BEE0(a0);
    goto L_08901B2C;
L_08901B2C:;
    a0 = LD32(s7-3252);
    a1 = s2 + 0;
    a2 = s3 + 0;
    func_08902D38(a0, a1, a2);
    goto L_08901B3C;
L_08901B3C:;
    a0 = 0xff000000u;
    func_08A98048(a0);
    goto L_08901B44;
L_08901B44:;
    a0 = 128;
    func_0890BF58(a0);
    goto L_08901B4C;
L_08901B4C:;
    a0 = 3;
    func_08A9806C(a0);
    goto L_08901B54;
L_08901B54:;
    a0 = LD32(fp-3264);
    a1 = s2 + 0;
    a2 = s3 + 0;
    a3 = 1;
    t0 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_08901B6C;
L_08901B6C:;
    a0 = 4;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901B74;
L_08901B74:;
    t0 = 0xff0000u;
    t0 = t0 | 0xffff;
    a3 = t0 + 0;
    a0 = 0 + 0;
    a1 = 10;
    a2 = 10;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_08901B90;
L_08901B90:;
    a2 = 255;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 0 + 0;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_08901BA4;
L_08901BA4:;
    a1 = s4 - 7360;
    a0 = 32;
    func_08A98F20(a0, a1);
    goto L_08901BB0;
L_08901BB0:;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901BD0;
L_08901BD0:;
    a2 = 255;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 8;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_08901BE4;
L_08901BE4:;
    a1 = s5 - 6336;
    a0 = 32;
    func_08A98F20(a0, a1);
    goto L_08901BF0;
L_08901BF0:;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901C10;
L_08901C10:;
    a2 = 255;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 16;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_08901C24;
L_08901C24:;
    a1 = s6 - 5312;
    a0 = 32;
    func_08A98F20(a0, a1);
    goto L_08901C30;
L_08901C30:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901C50;
L_08901C50:;
    a0 = D_08B4F344 - (-3260);
    a1 = LD32(a0-3260);
    v0 = LD32(s7-3252);
    a2 = D_08B4F348 - (-3256);
    v1 = LD32(a2-3256);
    ST32(s7-3252, a1);
    a2 = D_08B4F344 - (-3260);
    a0 = 4;
    a1 = LD32(fp-3264);
    ST32(a2-3260, v0);
    v0 = D_08B4F348 - (-3256);
    ST32(v0-3256, a1);
    ST32(fp-3264, v1);
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901C88;
L_08901C88:;
    v0 = 128;
    cnd_ = s2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08901D24; }
    goto L_08901C94;
L_08901C94:;
    s4 = 128;
    goto L_08901C98;
L_08901C98:;
    a0 = LD32(s7-3252);
    s0 = s2 << 1;
    s1 = s3 << 1;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08902D38(a0, a1, a2);
    goto L_08901CB0;
L_08901CB0:;
    a0 = LD32(fp-3264);
    a1 = s2 + 0;
    a2 = s3 + 0;
    t0 = 0 + 0;
    a3 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_08901CC8;
L_08901CC8:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901CE8;
L_08901CE8:;
    v1 = D_08B4F344 - (-3260);
    a0 = LD32(v1-3260);
    a1 = D_08B4F348 - (-3256);
    v0 = LD32(s7-3252);
    v1 = LD32(a1-3256);
    ST32(s7-3252, a0);
    a2 = D_08B4F344 - (-3260);
    s2 = s0 + 0;
    a0 = LD32(fp-3264);
    s3 = s1 + 0;
    ST32(a2-3260, v0);
    ST32(fp-3264, v1);
    cnd_ = s0 != s4;
    ST32(a1-3256, a0);
    if (cnd_) { goto L_08901C98; }
    goto L_08901D20;
L_08901D20:;
    a0 = 0 + 0;
    goto L_08901D24;
L_08901D24:;
    a1 = 0 + 0;
    a2 = 2;
    func_0890BDD8(a0, a1, a2);
    goto L_08901D30;
L_08901D30:;
    a1 = 254;
    a2 = 255;
    a0 = 3;
    func_0890BE58(a0, a1, a2);
    goto L_08901D40;
L_08901D40:;
    a0 = 1;
    func_0890BEE0(a0);
    goto L_08901D48;
L_08901D48:;
    a0 = 17;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901D50;
L_08901D50:;
    a2 = 0xff0000u;
    a1 = 0 + 0;
    a2 = a2 | 0xffff;
    a0 = 3;
    func_08A99078(a0, a1, a2);
    goto L_08901D64;
L_08901D64:;
    a0 = LD32(sp);
    s0 = 0 + 0;
    func_08902DAC(a0);
    goto L_08901D70;
L_08901D70:;
    a0 = LD32(fp-3264);
    a1 = s2 + 0;
    a2 = s3 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_08901D88;
L_08901D88:;
    a0 = 4;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901D90;
L_08901D90:;
    a2 = 10;
    a3 = (u32)-1;
    t0 = (u32)-1;
    a1 = 10;
    a0 = 0 + 0;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_08901DA8;
L_08901DA8:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901DB0;
L_08901DB0:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901DB8;
L_08901DB8:;
    a0 = 0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901DC0;
L_08901DC0:;
    a3 = 272;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a1 = s3 + 0;
    a2 = 480;
    a0 = s2 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08901DE0;
L_08901DE0:;
    a0 = 0 + 0;
    func_0890BEE0(a0);
    goto L_08901DE8;
L_08901DE8:;
    a2 = 255;
    a1 = 0 + 0;
    a0 = 3;
    func_08A990BC(a0, a1, a2);
    goto L_08901DF8;
L_08901DF8:;
    a0 = 17;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901E00;
L_08901E00:;
    a0 = 7;
    a1 = 1;
    func_08A98D28(a0, a1);
    goto L_08901E0C;
L_08901E0C:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A98D8C(a0, a1);
    goto L_08901E18;
L_08901E18:;
    v0 = D_08B2C18C - (-15988);
    s1 = v0 - 15988;
    a1 = s0 + 0;
    goto L_08901E24;
L_08901E24:;
    a0 = s1 + 0;
    a2 = (u32)-1;
    s0 = s0 + 1;
    func_0890CFBC(a2);
    goto L_08901E34;
L_08901E34:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08901E24; }
    goto L_08901E40;
L_08901E40:;
    a1 = 0 + 0;
    a0 = s1 + 0;
    func_0890CFD8(a0, a1);
    goto L_08901E4C;
L_08901E4C:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890CFE0(a0, a1);
    goto L_08901E58;
L_08901E58:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901E64;
L_08901E64:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D028(a0, a1);
    goto L_08901E70;
L_08901E70:;
    a0 = s1 + 0;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08901E7C;
L_08901E7C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D0B8(a0, a1);
    goto L_08901E88;
L_08901E88:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08901E94;
L_08901E94:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D248(a0, a1);
    goto L_08901EA0;
L_08901EA0:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_08901EAC;
L_08901EAC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D290(a0, a1);
    goto L_08901EB8;
L_08901EB8:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08901EC4;
L_08901EC4:;
    v0 = 10;
    ST32(s1+44, v0);
    goto L_089017E8;
L_08901ED0:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_0890192C;
L_08901EEC:;
    v0 = t6 & 0x1;
    v1 = t6 >> 1;
    v0 = v0 | v1;
    f8 = BITSF(v0);
    f0 = (float)(s32)FBITS(f8);
    f0 = f0 + f0;
    goto L_08901910;
L_08901F08:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08901904;
L_08901F24:;
    v0 = t3 & 0x1;
    v1 = t3 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f3 = (float)(s32)FBITS(f1);
    f3 = f3 + f3;
    goto L_089018F4;
L_08901F40:;
    f8 = BITSF(t1);
    f1 = BITSF(t2);
    f2 = (float)(s32)FBITS(f8);
    cnd_ = (s32)t2 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08901F9C; }
    goto L_08901F54;
L_08901F54:;
    f0 = f5 / f0;
    f3 = BITSF(t3);
    f1 = (float)(s32)FBITS(f3);
    cnd_ = (s32)t3 < 0;
    f0 = f2 * f0;
    if (cnd_) { goto L_08901F80; }
    goto L_08901F68;
L_08901F68:;
    f0 = f0 * f1;
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f4, f0, 14);
    a0 = FBITS(f1);
    goto L_08901940;
L_08901F80:;
    v0 = t3 & 0x1;
    v1 = t3 >> 1;
    v0 = v0 | v1;
    f8 = BITSF(v0);
    f1 = (float)(s32)FBITS(f8);
    f1 = f1 + f1;
    goto L_08901F68;
L_08901F9C:;
    f0 = (float)(s32)FBITS(f7);
    f0 = f0 + f0;
    goto L_08901F54;
}

/* 08901FA8 */
void func_08901FA8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08901FA8:;
    sp = sp - 16;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08902008; }
    goto L_08901FC8;
L_08901FC8:;
    a1 = LD32(s2+24);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0890205C; }
    goto L_08901FD4;
L_08901FD4:;
    a1 = LD32(s2+28);
    goto L_08901FD8;
L_08901FD8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0890204C; }
    goto L_08901FE0;
L_08901FE0:;
    a0 = 15;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08901FE8;
L_08901FE8:;
    a0 = s2 + 8;
    func_08AB9EF8(a0, 0, 0, 0);
    goto L_08901FF0;
L_08901FF0:;
    a0 = s2 + 20;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08901FF8;
L_08901FF8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902000;
L_08902000:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902008;
L_08902008:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0890203C; }
    goto L_08902014;
L_08902014:;
    ST32(s1, 0);
    goto L_08902018;
L_08902018:;
    ST32(s1+12, 0);
    ST32(s1+16, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return;
L_0890203C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902044;
L_08902044:;
    ST32(s1, 0);
    goto L_08902018;
L_0890204C:;
    a0 = s1 + 0;
    func_08AB9FB0(a0, a1);
    goto L_08902054;
L_08902054:;
    goto L_08901FE0;
L_0890205C:;
    func_08AB9FB0(a0, a1);
    goto L_08902064;
L_08902064:;
    a1 = LD32(s2+28);
    goto L_08901FD8;
}

/* 0890206C */
u32 func_0890206C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890206C:;
    sp = sp - 16;
    t0 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a1 = LD32(a1+64);
    if (cnd_) { goto L_089020B0; }
    goto L_08902084;
L_08902084:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0890208C;
L_0890208C:;
    a0 = v0 + 28;
    a2 = v0 + 24;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089020BC; }
    goto L_089020A4;
L_089020A4:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0890208C; }
    goto L_089020B0;
L_089020B0:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089020D8; }
    goto L_089020BC;
L_089020BC:;
    cnd_ = a3 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_089020CC; }
    goto L_089020C4;
L_089020C4:;
    v0 = LD32(a3+4);
    v0 = LD32(v0);
    goto L_089020CC;
L_089020CC:;
    sp = sp + 16;
    return v0;
L_089020D8:;
    a2 = 1;
    v0 = func_08AB9F38(a0, a1, a2);
    goto L_089020E0;
L_089020E0:;
    a3 = v0 + 0;
    goto L_089020BC;
}

/* 089020E8 */
void func_089020E8(void)
{
L_089020E8:;
    return;
}

/* 089020F0 */
void func_089020F0(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089020F0:;
    a0 = D_08B4F380 - (-3200);
    sp = sp - 16;
    a0 = a0 - 3200;
    func_08901FA8(a0, t1, t2, t3);
    goto L_08902104;
L_08902104:;
    sp = sp + 16;
    return;
}

/* 08902110 */
void func_08902110(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08902110:;
    a0 = D_08B4F380 - (-3200);
    sp = sp - 16;
    a0 = a0 - 3200;
    func_08901FA8(a0, t1, t2, t3);
    goto L_08902124;
L_08902124:;
    sp = sp + 16;
    return;
}

/* 08902130 */
u32 func_08902130(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08902130:;
    sp = sp - 64;
    v0 = D_08B161F0 - (25072);
    s3 = a2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    v1 = LD32(v0+25072);
    a0 = LD32(a0);
    cnd_ = v1 == a0;
    v0 = v1 + 0;
    if (cnd_) { goto L_0890226C; }
    goto L_0890216C;
L_0890216C:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_089022EC; }
    goto L_08902178;
L_08902178:;
    a0 = LD32(s0);
    a1 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    v0 = func_088355D4(a0, a1, a2);
    goto L_08902190;
L_08902190:;
    cnd_ = v0 == 0;
    v0 = D_08B162C4 - (25284);
    if (cnd_) { goto L_089022AC; }
    goto L_08902198;
L_08902198:;
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(v0+25284));
    f2 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_089021C8; }
    goto L_089021B4;
L_089021B4:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = (u32)-1; goto L_089021E4; }
    goto L_089021C8;
L_089021C8:;
    f12 = f1;
    f13 = f2;
    ST32(v0+25284, FBITS(f1));
    ST32(v1+25288, FBITS(f2));
    goto L_089021D8;
L_089021D8:;
    func_08A98E9C(f12, f13);
    goto L_089021E0;
L_089021E0:;
    v0 = (u32)-1;
    goto L_089021E4;
L_089021E4:;
    cnd_ = s1 == v0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08902200; }
    goto L_089021EC;
L_089021EC:;
    v0 = D_08B25FC4 - (24516);
    v1 = s1 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    s2 = LD32(v1);
    goto L_08902200;
L_08902200:;
    a0 = LD32(s0);
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902208;
L_08902208:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08902224; }
    goto L_08902214;
L_08902214:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890229C; }
    goto L_08902220;
L_08902220:;
    v1 = LD32(a0+24);
    goto L_08902224;
L_08902224:;
    v0 = D_08AED0C8 - (-12088);
    f0 = BITSF(LD32(v0-12088));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08902240; }
    goto L_0890223C;
L_0890223C:;
    a2 = 0 + 0;
    goto L_08902240;
L_08902240:;
    a0 = v1 + 0;
    a1 = s2 + 0;
    func_08904368(a0, a1, a2);
    goto L_0890224C;
L_0890224C:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_0890228C; }
    goto L_08902254;
L_08902254:;
    a0 = s1 + 0;
    func_0890C400(a0);
    goto L_0890225C;
L_0890225C:;
    a0 = s1 + 0;
    a1 = s3 + 0;
    func_0890C440(a0, a1);
    goto L_08902268;
L_08902268:;
    v0 = LD32(s0);
    goto L_0890226C;
L_0890226C:;
    sp = sp + 64;
    return v0;
L_0890228C:;
    a0 = s1 + 0;
    func_0890C3C0(a0);
    goto L_08902294;
L_08902294:;
    v0 = LD32(s0);
    goto L_0890226C;
L_0890229C:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089022A4;
L_089022A4:;
    v1 = v0 + 0;
    goto L_08902224;
L_089022AC:;
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_089022D8; }
    goto L_089022C4;
L_089022C4:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = (u32)-1; goto L_089021E4; }
    goto L_089022D8;
L_089022D8:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    ST32(v1+25288, FBITS(f12));
    f13 = f12;
    goto L_089021D8;
L_089022EC:;
    a1 = 0 + 0;
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089022F4;
L_089022F4:;
    s1 = v0 + 0;
    goto L_08902178;
}

/* 089022FC */
void func_089022FC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089022FC:;
    sp = sp - 112;
    v1 = D_08B4F3C0 - (-3136);
    v0 = a0 + 0;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    a3 = v1 - 3136;
    a2 = a1 + 0;
    ST32(sp+4, FBITS(f0));
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    a1 = sp + 32;
    ST32(sp+8, FBITS(f1));
    a0 = 1;
    ST32(sp+12, 0);
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=v1+(-3136);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f0 = BITSF(LD32(v0+16));
    f1 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+12));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a3+(16);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f1 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(v0+24));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    v0 = D_08AED0CC - (-12084);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, 0);
    f3 = BITSF(LD32(v0-12084));
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    ST32(sp, 0);
    {u32 a_=a3+(32);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    ST32(sp+12, FBITS(f3));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a3+(48);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f2 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+28, FBITS(f3));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    ST32(sp+16, FBITS(f0));
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    ST32(sp+20, FBITS(f1));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    ST32(sp+24, FBITS(f2));
    {u32 a_=sp+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;o0+=v[12]*t3;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;o1+=v[13]*t3;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;o2+=v[14]*t3;float o3=0;o3+=v[3]*t0;o3+=v[7]*t1;o3+=v[11]*t2;o3+=v[15]*t3;vr20=o0;vr21=o1;vr22=o2;vr23=o3;}
    {u32 a_=a3+(48);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    func_08A992E0(a0, a1);
    goto L_0890241C;
L_0890241C:;
    sp = sp + 112;
    { v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;return; }
    v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;
}

/* 08902428 */
void func_08902428(u32 a0, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f13 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08902428:;
    sp = sp - 176;
    f20 = f12;
    a1 = LD32(a0+64);
    a0 = D_08B4F380 - (-3200);
    ST32(sp+96, a2);
    a0 = a0 - 3200;
    a2 = 1;
    ST32(sp+100, a3);
    v0 = func_08AB9F38(a0, a1, a2);
    goto L_08902478;
L_08902478:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_089026D8; }
    goto L_08902480;
L_08902480:;
    v0 = LD32(v0+16);
    a0 = 1;
    s2 = D_08B2118C - (4492);
    ST32(sp+104, v0);
    func_08904FB8(a0);
    goto L_08902494;
L_08902494:;
    f12 = f20;
    a0 = LD_U8(s2+4492);
    s1 = 1;
    func_0890452C(a0, f12);
    goto L_089024A4;
L_089024A4:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v1 = LD_U8(s0+18);
    cnd_ = v1 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089024C0; }
    goto L_089024B8;
L_089024B8:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089024C0;
L_089024C0:;
    v0 = LD32(s0+40);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089024D4; }
    goto L_089024CC;
L_089024CC:;
    a1 = 1;
    func_0890D298(a0, a1);
    goto L_089024D4;
L_089024D4:;
    v0 = LD_U8(s2+4492);
    cnd_ = v0 == 0;
    v0 = D_08B4F3C0 - (-3136);
    if (cnd_) { goto L_08902748; }
    goto L_089024E0;
L_089024E0:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[0]=m00;v[1]=m01;v[2]=m02;v[3]=m03;v[4]=m10;v[5]=m11;v[6]=m12;v[7]=m13;v[8]=m20;v[9]=m21;v[10]=m22;v[11]=m23;v[12]=m30;v[13]=m31;v[14]=m32;v[15]=m33;}
    a0 = 2;
    a1 = sp + 0;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    func_08A992E0(a0, a1);
    goto L_08902500;
L_08902500:;
    v0 = D_08B50400 - (1024);
    v0 = LD32(v0+1024);
    a0 = D_08B4F3C0 - (-3136);
    a0 = a0 - 3136;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08902738; }
    goto L_08902518;
L_08902518:;
    ST32(sp+64, 0);
    goto L_0890251C;
L_0890251C:;
    fp = 0xc31e;
    a2 = D_08B161F0 - (25072);
    ST32(sp+68, 0);
    v0 = 999;
    v1 = 0xc342;
    ST32(sp+72, 0);
    s7 = 0 + 0;
    ST32(sp+76, 0);
    a0 = LD_U8(s5+8);
    a1 = LD32(s5);
    ST32(a2+25072, v0);
    cnd_ = a1 == 0;
    if (a0 == 0) fp = v1;
    if (cnd_) { goto L_08902654; }
    goto L_08902550;
L_08902550:;
    a0 = D_08B50404 - (1028);
    v1 = LD32(s5+4);
    a3 = LD32(a0+1028);
    v0 = s7 << 4;
    cnd_ = a3 == 0;
    s3 = v1 + v0;
    if (cnd_) { goto L_0890271C; }
    goto L_08902568;
L_08902568:;
    a1 = LD32(sp+96);
    a2 = LD32(sp+100);
    a0 = s3 + 0;
    t_ = a3;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890257C;
L_0890257C:;
    a0 = v0 + 0;
    goto L_08902580;
L_08902580:;
    v1 = LD32(s5+12);
    v0 = LD32(s3+8);
    a1 = D_08B161F0 - (25072);
    a1 = a1 + 25072;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a1, a0);
    v1 = D_08B4F400 - (-3072);
    s1 = 0 + 0;
    a0 = LD32(sp+104);
    v0 = lo;
    s6 = v1 - 3072;
    s2 = sp + 0;
    s4 = a0 + v0;
    goto L_089025B4;
L_089025B4:;
    v0 = s3 + s1;
    s0 = LD_U8(v0+12);
    cnd_ = s0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_089025E8; }
    goto L_089025C4;
L_089025C4:;
    v0 = LD32(s2+64);
    a1 = s0 << 6;
    a1 = a1 + s6;
    cnd_ = v0 == s0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089025E4; }
    goto L_089025D8;
L_089025D8:;
    func_08A99240(a0, a1);
    goto L_089025E0;
L_089025E0:;
    ST32(s2+64, s0);
    goto L_089025E4;
L_089025E4:;
    s1 = s1 + 1;
    goto L_089025E8;
L_089025E8:;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089025B4; }
    goto L_089025F4;
L_089025F4:;
    a2 = LD_U16(s3+4);
    a0 = 4;
    a1 = fp + 0;
    t0 = s4 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890260C;
L_0890260C:;
    a1 = D_08B2C1C4 - (-15932);
    v1 = LD32(s3+4);
    a1 = a1 - 15932;
    v0 = LD32(a1+16);
    a1 = D_08B2C1F0 - (-15888);
    a0 = LD32(a1-15888);
    v1 = v1 - 2;
    a1 = D_08B2C1C4 - (-15932);
    v0 = v0 + v1;
    a1 = a1 - 15932;
    ST32(a1+16, v0);
    s7 = s7 + 1;
    a0 = a0 + v1;
    v0 = LD32(s5);
    v1 = D_08B2C1F0 - (-15888);
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    ST32(v1-15888, a0);
    if (cnd_) { goto L_08902550; }
    goto L_08902654;
L_08902654:;
    v0 = D_08B162C4 - (25284);
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08902684; }
    goto L_08902670;
L_08902670:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = D_08B50408 - (1032); goto L_0890269C; }
    goto L_08902684;
L_08902684:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    f13 = f12;
    ST32(v1+25288, FBITS(f12));
    func_08A98E9C(f12, f13);
    goto L_08902698;
L_08902698:;
    v0 = D_08B50408 - (1032);
    goto L_0890269C;
L_0890269C:;
    v0 = LD32(v0+1032);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890270C; }
    goto L_089026A8;
L_089026A8:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_089026B0;
L_089026B0:;
    func_08A9A274();
    goto L_089026B8;
L_089026B8:;
    func_08A9A2C4();
    goto L_089026C0;
L_089026C0:;
    a0 = 1;
    func_08A9A13C(a0);
    goto L_089026C8;
L_089026C8:;
    func_08A9A274();
    goto L_089026D0;
L_089026D0:;
    func_08A9A2C4();
    goto L_089026D8;
L_089026D8:;
    sp = sp + 176;
    return;
L_0890270C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08902714;
L_08902714:;
    goto L_089026A8;
L_0890271C:;
    a1 = LD32(sp+96);
    a2 = LD32(sp+100);
    a0 = s3 + 0;
    f12 = f20;
    v0 = func_08902130(a0, a1, a2, f12);
    goto L_08902730;
L_08902730:;
    a0 = v0 + 0;
    goto L_08902580;
L_08902738:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08902740;
L_08902740:;
    ST32(sp+64, 0);
    goto L_0890251C;
L_08902748:;
    v1 = D_08B221C0 - (8640);
    s0 = v0 - 3136;
    s1 = v1 + 8640;
    {u32 a_=v0+(-3136);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=v1+(8640);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    a0 = 2;
    a1 = sp + 0;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    func_08A992E0(a0, a1);
    goto L_08902794;
L_08902794:;
    v0 = D_08B50400 - (1024);
    v0 = LD32(v0+1024);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+64, 0); goto L_0890251C; }
    goto L_089027A4;
L_089027A4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    goto L_08902738;
}

/* 089027B0 */
u64 func_089027B0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089027B0:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = a1 < 0x1u;
    sp = sp - 16;
    a2 = v1 & v0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08902814; }
    goto L_089027DC;
L_089027DC:;
    v1 = D_08B4F380 - (-3200);
    v0 = v1 - 3200;
    ST32(v1-3200, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    cnd_ = a2 == 0;
    ST32(v0+16, 0);
    if (cnd_) { goto L_08902814; }
    goto L_08902800;
L_08902800:;
    v0 = 63;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_0890280C;
L_0890280C:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_0890280C; }
    goto L_08902814;
L_08902814:;
    v0 = a1 < 0x1u;
    v1 = a0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08902890; }
    goto L_08902828;
L_08902828:;
    v0 = D_08B4F380 - (-3200);
    s1 = LD32(v0-3200);
    cnd_ = s1 == 0;
    s2 = v0 - 3200;
    if (cnd_) { goto L_08902878; }
    goto L_08902838;
L_08902838:;
    a1 = LD32(s1+24);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089028C4; }
    goto L_08902844;
L_08902844:;
    a1 = LD32(s1+28);
    goto L_08902848;
L_08902848:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089028B4; }
    goto L_08902850;
L_08902850:;
    a0 = 15;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902858;
L_08902858:;
    a0 = s1 + 8;
    func_08AB9EF8(a0, 0, 0, 0);
    goto L_08902860;
L_08902860:;
    a0 = s1 + 20;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08902868;
L_08902868:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902870;
L_08902870:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902878;
L_08902878:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089028A4; }
    goto L_08902884;
L_08902884:;
    ST32(s2+16, 0);
    goto L_08902888;
L_08902888:;
    ST32(s2+12, 0);
    goto L_08902890;
L_08902890:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089028A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089028AC;
L_089028AC:;
    ST32(s2+16, 0);
    goto L_08902888;
L_089028B4:;
    a0 = s2 + 0;
    func_08AB9FB0(a0, a1);
    goto L_089028BC;
L_089028BC:;
    goto L_08902850;
L_089028C4:;
    a0 = s2 + 0;
    func_08AB9FB0(a0, a1);
    goto L_089028CC;
L_089028CC:;
    a1 = LD32(s1+28);
    goto L_08902848;
}

/* 089028D4 */
rv_t func_089028D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089028D4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_089027B0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089028E8;
L_089028E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089028F4 */
rv_t func_089028F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089028F4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_089027B0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08902908;
L_08902908:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08902914 */
void func_08902914(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08902914:;
    sp = sp - 128;
    a0 = a0 & 0xff;
    v0 = D_08B51050 - (4176);
    fp = a1 + 0;
    ST8(v0+4176, a0);
    ST32(sp+36, a2);
    ST32(sp+40, a3);
    cnd_ = a0 == 0;
    ST32(sp+44, t0);
    if (cnd_) { goto L_08902B50; }
    goto L_08902980;
L_08902980:;
    v1 = D_08B161F4 - (25076);
    v0 = LD32(v1+25076);
    cnd_ = v0 == a1;
    v1 = D_08B161F8 - (25080);
    if (cnd_) { goto L_08902BA0; }
    goto L_08902990;
L_08902990:;
    f0 = BITSF(fp);
    v0 = D_08AED0D0 - (-12080);
    v1 = D_08AED0D4 - (-12076);
    f27 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(sp+36));
    f23 = BITSF(LD32(v0-12080));
    f22 = BITSF(0);
    f26 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(sp+40));
    v0 = D_08B50440 - (1088);
    f21 = BITSF(LD32(v1-12076));
    f25 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(sp+44));
    s7 = v0 + 1088;
    v1 = D_08B50840 - (2112);
    f24 = (float)(s32)FBITS(f0);
    v0 = D_08B50C40 - (3136);
    s6 = v1 + 2112;
    s5 = v0 + 3136;
    s1 = 0 + 0;
    s4 = 255;
    goto L_089029E4;
L_089029E4:;
    f0 = BITSF(s1);
    a0 = sp + 0;
    a1 = sp + 4;
    f20 = (float)(s32)FBITS(f0);
    a2 = sp + 8;
    f0 = f20 * f27;
    f1 = f20 * f26;
    f0 = f0 * f23;
    f2 = f1 * f23;
    f1 = f0 + f21;
    fcc = FCMP(f22, f0, 12);
    f3 = f0 - f21;
    f4 = f2 - f21;
    f1 = BITSF(F2I(f1, 1));
    v1 = FBITS(f1);
    cnd_ = fcc;
    f0 = f2 + f21;
    if (cnd_) { goto L_08902A30; }
    goto L_08902A28;
L_08902A28:;
    f3 = BITSF(F2I(f3, 1));
    v1 = FBITS(f3);
    goto L_08902A30;
L_08902A30:;
    fcc = FCMP(f22, f2, 12);
    v0 = 255;
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    s3 = 0 + 0;
    v1 = (s32)v1 < 0;
    if (v1 == 0) s3 = v0;
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08902A54; }
    goto L_08902A50;
L_08902A50:;
    f0 = BITSF(F2I(f4, 1));
    goto L_08902A54;
L_08902A54:;
    ST32(sp, FBITS(f0));
    ST32(sp+4, 0);
    ST32(sp+8, s4);
    v0 = func_0890343C(a0, a1, a2);
    goto L_08902A64;
L_08902A64:;
    f0 = f20 * f25;
    s2 = v0 + 0;
    a0 = sp + 12;
    a1 = sp + 16;
    f0 = f0 * f23;
    a2 = sp + 20;
    f1 = f0 + f21;
    fcc = FCMP(f22, f0, 12);
    f2 = f0 - f21;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_08902A94; }
    goto L_08902A90;
L_08902A90:;
    f1 = BITSF(F2I(f2, 1));
    goto L_08902A94;
L_08902A94:;
    ST32(sp+12, FBITS(f1));
    ST32(sp+16, 0);
    ST32(sp+20, s4);
    v0 = func_0890343C(a0, a1, a2);
    goto L_08902AA4;
L_08902AA4:;
    f0 = f20 * f24;
    s0 = v0 + 0;
    a0 = sp + 24;
    a1 = sp + 28;
    f0 = f0 * f23;
    a2 = sp + 32;
    f1 = f0 + f21;
    fcc = FCMP(f22, f0, 12);
    f2 = f0 - f21;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_08902AD4; }
    goto L_08902AD0;
L_08902AD0:;
    f1 = BITSF(F2I(f2, 1));
    goto L_08902AD4;
L_08902AD4:;
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, 0);
    ST32(sp+32, s4);
    v0 = func_0890343C(a0, a1, a2);
    goto L_08902AE4;
L_08902AE4:;
    v1 = s2 << 8;
    a0 = s0 << 16;
    v1 = s3 | v1;
    v1 = v1 | a0;
    v0 = v0 << 24;
    a0 = s1 << 2;
    s1 = s1 + 1;
    v1 = v1 | v0;
    a1 = a0 + s7;
    v0 = a0 + s5;
    a2 = (s32)s1 < 256;
    a0 = a0 + s6;
    ST32(v0, v1);
    ST32(a1, v1);
    cnd_ = a2 != 0;
    ST32(a0, v1);
    if (cnd_) { goto L_089029E4; }
    goto L_08902B24;
L_08902B24:;
    v0 = D_08B161F4 - (25076);
    ST32(v0+25076, fp);
    v1 = D_08B161F8 - (25080);
    v0 = LD32(sp+36);
    ST32(v1+25080, v0);
    v1 = D_08B161FC - (25084);
    v0 = LD32(sp+40);
    ST32(v1+25084, v0);
    v1 = D_08B16200 - (25088);
    v0 = LD32(sp+44);
    ST32(v1+25088, v0);
    goto L_08902B50;
L_08902B50:;
    goto L_08902B58;
L_08902B58:;
    sp = sp + 128;
    return;
L_08902BA0:;
    v0 = LD32(v1+25080);
    cnd_ = v0 != a2;
    v1 = D_08B161FC - (25084);
    if (cnd_) { goto L_08902990; }
    goto L_08902BAC;
L_08902BAC:;
    v0 = LD32(v1+25084);
    cnd_ = v0 != a3;
    v1 = D_08B16200 - (25088);
    if (cnd_) { goto L_08902990; }
    goto L_08902BB8;
L_08902BB8:;
    v0 = LD32(v1+25088);
    cnd_ = v0 != t0;
    if (cnd_) { goto L_08902990; }
    goto L_08902BC4;
L_08902BC4:;
    goto L_08902B58;
}

/* 08902BCC */
void func_08902BCC(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08902BCC:;
    sp = sp - 16;
    a1 = 512;
    a2 = 512;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_08902BE8;
L_08902BE8:;
    sp = sp + 16;
    return;
}

/* 08902BF4 */
void func_08902BF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08902BF4:;
    sp = sp - 16;
    v0 = a1 < 0x2u;
    t2 = a1 + 0;
    t3 = a0 + 0;
    t1 = a2 + 0;
    s1 = a3 & 0xff;
    cnd_ = v0 != 0;
    s0 = t0 & 0xff;
    if (cnd_) { goto L_08902C4C; }
    goto L_08902C20;
L_08902C20:;
    v0 = 0 + 0;
    cnd_ = a1 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08902C38; }
    goto L_08902C2C;
L_08902C2C:;
    v1 = v1 >> 1;
    cnd_ = v1 != 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08902C2C; }
    goto L_08902C38;
L_08902C38:;
    v0 = v0 - 1;
    v1 = 1;
    v1 = v1 << (v0 & 31);
    a0 = v1 < t2;
    a1 = v1 << (a0 & 31);
    goto L_08902C4C;
L_08902C4C:;
    v0 = t1 < 0x2u;
    cnd_ = v0 != 0;
    a2 = t1 + 0;
    if (cnd_) { goto L_08902C84; }
    goto L_08902C58;
L_08902C58:;
    v0 = 0 + 0;
    cnd_ = t1 == 0;
    v1 = t1 + 0;
    if (cnd_) { goto L_08902C70; }
    goto L_08902C64;
L_08902C64:;
    v1 = v1 >> 1;
    cnd_ = v1 != 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08902C64; }
    goto L_08902C70;
L_08902C70:;
    v0 = v0 - 1;
    v1 = 1;
    v1 = v1 << (v0 & 31);
    a0 = v1 < t1;
    a2 = v1 << (a0 & 31);
    goto L_08902C84;
L_08902C84:;
    v1 = a1 ^ t2;
    v0 = a2 ^ t1;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = a1 & 0xffff; goto L_08902D24; }
    goto L_08902CA0;
L_08902CA0:;
    a1 = t2 & 0xffff;
    a2 = t1 & 0xffff;
    t0 = t3 + 0;
    a0 = 0 + 0;
    a3 = a1 + 0;
    goto L_08902CB4;
L_08902CB4:;
    func_08A98DD4(a0, a1, a2, a3, t0);
    goto L_08902CBC;
L_08902CBC:;
    v0 = 7;
    v1 = 6;
    if (s0 == 0) v1 = v0;
    a0 = 3;
    if (s1 != 0) a0 = v1;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a1 = 0 + 0;
    func_08A98CE4(a0, a1, a2, a3);
    goto L_08902CE0;
L_08902CE0:;
    a0 = 1;
    a1 = 1;
    func_08A98D8C(a0, a1);
    goto L_08902CEC;
L_08902CEC:;
    f12 = BITSF(0);
    f13 = f12;
    func_08A98E9C(f12, f13);
    goto L_08902CF8;
L_08902CF8:;
    v0 = D_08AED0D8 - (-12072);
    f12 = BITSF(LD32(v0-12072));
    f13 = f12;
    func_08A98E60(f12, f13);
    goto L_08902D08;
L_08902D08:;
    func_08A98DB8();
    goto L_08902D10;
L_08902D10:;
    sp = sp + 16;
    return;
L_08902D24:;
    a2 = a2 & 0xffff;
    a3 = t2 & 0xffff;
    t0 = t3 + 0;
    a0 = 0 + 0;
    goto L_08902CB4;
}

/* 08902D38 */
void func_08902D38(u32 a0, u32 a1, u32 a2)
{
    u32 a3 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08902D38:;
    sp = sp - 16;
    s0 = a1 & 0xffff;
    a1 = a0 + 0;
    a0 = 3;
    s1 = a2 + 0;
    a2 = s0 + 0;
    s1 = s1 & 0xffff;
    func_08A9844C(a0, a1, a2);
    goto L_08902D64;
L_08902D64:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A9883C(a0, a1);
    goto L_08902D70;
L_08902D70:;
    a2 = s0 + 0;
    a3 = s1 + 0;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A98670(a0, a1, a2, a3);
    goto L_08902D84;
L_08902D84:;
    a2 = s0 + 0;
    a3 = s1 + 0;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A98FF8(a0, a1, a2, a3);
    goto L_08902D98;
L_08902D98:;
    sp = sp + 16;
    return;
}

/* 08902DAC */
void func_08902DAC(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08902DAC:;
    sp = sp - 16;
    a1 = a0 + 0;
    a2 = 512;
    a0 = 3;
    func_08A9844C(a0, a1, a2);
    goto L_08902DC4;
L_08902DC4:;
    a0 = 1808;
    a1 = 1912;
    func_08A9883C(a0, a1);
    goto L_08902DD0;
L_08902DD0:;
    a0 = 2048;
    a1 = 2048;
    a2 = 480;
    a3 = 272;
    func_08A98670(a0, a1, a2, a3);
    goto L_08902DE4;
L_08902DE4:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    a2 = 480;
    a3 = 272;
    func_08A98FF8(a0, a1, a2, a3);
    goto L_08902DF8;
L_08902DF8:;
    sp = sp + 16;
    return;
}

/* 08902E04 */
void func_08902E04(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08902E04:;
    sp = sp - 16;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    func_08902BCC(a0);
    goto L_08902E28;
L_08902E28:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    func_08902D38(a0, a1, a2);
    goto L_08902E38;
L_08902E38:;
    a2 = s1 + 0;
    a3 = s2 + 0;
    a0 = 480;
    a1 = 272;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08902E58;
L_08902E58:;
    sp = sp + 16;
    return;
}

/* 08902E70 */
void func_08902E70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08902E70:;
    f0 = BITSF(a0);
    sp = sp - 64;
    t0 = t0 & 0xff;
    s1 = a1 + 0;
    f1 = (float)(s32)FBITS(f0);
    s0 = a3 + 0;
    ST32(sp, t1);
    cnd_ = (s32)a0 < 0;
    ST32(sp+4, t2);
    if (cnd_) { goto L_08903070; }
    goto L_08902EBC;
L_08902EBC:;
    v0 = D_08AED0DC - (-12068);
    f0 = BITSF(LD32(v0-12068));
    a1 = D_08AED0E0 - (-12064);
    f2 = BITSF(LD32(a1-12064));
    f1 = f1 * f0;
    f0 = BITSF(F2I(f1, 1));
    fcc = FCMP(f2, f1, 14);
    s2 = FBITS(f0);
    cnd_ = !fcc;
    v0 = 0x80000000u;
    if (cnd_) { goto L_08902EF4; }
    goto L_08902EE4;
L_08902EE4:;
    f0 = f1 - f2;
    f0 = BITSF(F2I(f0, 1));
    s2 = FBITS(f0);
    s2 = s2 | v0;
    goto L_08902EF4;
L_08902EF4:;
    f2 = BITSF(a2);
    v0 = s2 << 6;
    ST32(sp+8, v0);
    fp = a0 - v0;
    cnd_ = (s32)a2 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08903054; }
    goto L_08902F0C;
L_08902F0C:;
    f0 = f0 / f1;
    f1 = BITSF(LD32(a1-12064));
    f2 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f0, 14);
    s3 = FBITS(f2);
    cnd_ = !fcc;
    { s64 p_ = (s64)(s32)s2 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_08902F40; }
    goto L_08902F28;
L_08902F28:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    s3 = FBITS(f0);
    s3 = s3 | v0;
    { s64 p_ = (s64)(s32)s2 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    goto L_08902F40;
L_08902F40:;
    a0 = 1;
    a1 = 1;
    s7 = lo;
    a2 = a2 - s7;
    cnd_ = t0 != 0;
    ST32(sp+12, a2);
    if (cnd_) { goto L_08902F60; }
    goto L_08902F58;
L_08902F58:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    goto L_08902F60;
L_08902F60:;
    s5 = (u32)(s32)(s16)s1;
    s6 = (u32)(s32)(s16)s0;
    func_08A98D28(a0, a1);
    goto L_08902F6C;
L_08902F6C:;
    a2 = (u32)(s32)(s16)s3;
    a0 = 64;
    a1 = s5 + 0;
    a3 = s6 + 0;
    func_08A9802C(a0, a1, a2, a3);
    goto L_08902F80;
L_08902F80:;
    cnd_ = s2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08902FCC; }
    goto L_08902F88;
L_08902F88:;
    v0 = LD32(sp+4);
    s4 = 0 - v0;
    v0 = LD32(sp);
    s0 = 0 - v0;
    goto L_08902F98;
L_08902F98:;
    a3 = s1 << 6;
    a0 = (u32)(s32)(s16)s0;
    a3 = (u32)(s32)(s16)a3;
    a1 = (u32)(s32)(s16)s4;
    a2 = 0 + 0;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    s1 = s1 + 1;
    func_08A97E6C(a0, a1, a2, a3, t0, t1, t2);
    goto L_08902FC0;
L_08902FC0:;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    s0 = s0 + s3;
    if (cnd_) { goto L_08902F98; }
    goto L_08902FCC;
L_08902FCC:;
    cnd_ = fp != 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08903004; }
    goto L_08902FD4;
L_08902FD4:;
    goto L_08902FD8;
L_08902FD8:;
    sp = sp + 64;
    return;
L_08903004:;
    a0 = (u32)(s32)(s16)fp;
    a1 = s5 + 0;
    a2 = (u32)(s32)(s16)v0;
    a3 = s6 + 0;
    func_08A9802C(a0, a1, a2, a3);
    goto L_08903018;
L_08903018:;
    v0 = LD32(sp);
    a2 = 0 + 0;
    t0 = 0 + 0;
    a0 = s7 - v0;
    v0 = LD32(sp+4);
    a0 = (u32)(s32)(s16)a0;
    t1 = 0 + 0;
    a1 = 0 - v0;
    v0 = LD32(sp+8);
    a1 = (u32)(s32)(s16)a1;
    t2 = 0 + 0;
    a3 = (u32)(s32)(s16)v0;
    func_08A97E6C(a0, a1, a2, a3, t0, t1, t2);
    goto L_0890304C;
L_0890304C:;
    goto L_08902FD8;
L_08903054:;
    v0 = a2 & 0x1;
    v1 = a2 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08902F0C;
L_08903070:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08902EBC;
}

/* 0890308C */
void func_0890308C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890308C:;
    sp = sp - 48;
    v0 = D_08B51050 - (4176);
    v1 = LD_U8(v0+4176);
    cnd_ = v1 != 0;
    s7 = a1 + 0;
    if (cnd_) { goto L_089030F0; }
    goto L_089030C4;
L_089030C4:;
    sp = sp + 48;
    return;
L_089030F0:;
    a1 = (u32)-1;
    a0 = 1;
    s0 = 0x150000u;
    func_08904E88(a0, a1);
    goto L_08903100;
L_08903100:;
    s0 = s0 | 0x4000;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903108;
L_08903108:;
    s3 = D_08B51044 - (4164);
    s2 = v0 + s7;
    ST32(s3+4164, s0);
    s1 = 0x160000u;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890311C;
L_0890311C:;
    v0 = v0 + s0;
    s4 = D_08B51040 - (4160);
    s0 = D_08B5104C - (4172);
    s1 = s1 | 0x2100;
    ST32(s0+4172, s1);
    s5 = D_08B51048 - (4168);
    s6 = 0 + 0;
    ST32(s4+4160, v0);
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903140;
L_08903140:;
    v0 = v0 + s1;
    a0 = 9;
    ST32(s5+4168, v0);
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903150;
L_08903150:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903158;
L_08903158:;
    a0 = 4;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903160;
L_08903160:;
    a0 = 0 + 0;
    func_0890BEE0(a0);
    goto L_08903168;
L_08903168:;
    a0 = 0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903170;
L_08903170:;
    a1 = LD32(s3+4164);
    a3 = 120;
    a0 = s2 + 0;
    a2 = 120;
    func_08902E04(a0, a1, a2, a3);
    goto L_08903184;
L_08903184:;
    a0 = LD32(s0+4172);
    a1 = 120;
    a2 = 120;
    func_08902D38(a0, a1, a2);
    goto L_08903194;
L_08903194:;
    a0 = LD32(s4+4160);
    a1 = 120;
    a2 = 120;
    a3 = 1;
    t0 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_089031AC;
L_089031AC:;
    a0 = 4;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089031B4;
L_089031B4:;
    a3 = 0xff0000u;
    t0 = 0 + 0;
    a0 = 0 + 0;
    a1 = 10;
    a2 = 10;
    a3 = a3 | 0xffff;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_089031D0;
L_089031D0:;
    a2 = 255;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 0 + 0;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_089031E4;
L_089031E4:;
    a1 = D_08B50440 - (1088);
    a1 = a1 + 1088;
    a0 = 32;
    func_08A98F20(a0, a1);
    goto L_089031F4;
L_089031F4:;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a0 = 120;
    a1 = 120;
    a2 = 120;
    a3 = 120;
    t0 = 1;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08903214;
L_08903214:;
    t0 = 0xff0000u;
    t0 = t0 | 0xffff;
    a3 = t0 + 0;
    a0 = 0 + 0;
    a1 = 10;
    a2 = 10;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_08903230;
L_08903230:;
    a2 = 255;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 8;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_08903244;
L_08903244:;
    a1 = D_08B50840 - (2112);
    a1 = a1 + 2112;
    a0 = 32;
    func_08A98F20(a0, a1);
    goto L_08903254;
L_08903254:;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a0 = 120;
    a1 = 120;
    a2 = 120;
    a3 = 120;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_08903274;
L_08903274:;
    a2 = 255;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 16;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_08903288;
L_08903288:;
    a1 = D_08B50C40 - (3136);
    a1 = a1 + 3136;
    a0 = 32;
    func_08A98F20(a0, a1);
    goto L_08903298;
L_08903298:;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a1 = 120;
    a2 = 120;
    a3 = 120;
    t0 = 1;
    a0 = 120;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_089032B8;
L_089032B8:;
    a0 = s7 + 0;
    func_08902DAC(a0);
    goto L_089032C0;
L_089032C0:;
    a0 = LD32(s5+4168);
    a1 = 120;
    a2 = 120;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08902BF4(a0, a1, a2, a3, t0);
    goto L_089032D8;
L_089032D8:;
    a0 = 4;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089032E0;
L_089032E0:;
    v0 = D_08B16200 - (25088);
    a0 = LD32(v0+25088);
    v0 = 255;
    a2 = 0xff000000u;
    v0 = v0 - a0;
    t0 = v0 << 16;
    v1 = v0 << 8;
    a1 = a0 << 8;
    a3 = a0 << 16;
    t0 = t0 | v1;
    a3 = a3 | a1;
    t0 = t0 | v0;
    a3 = a3 | a0;
    t0 = t0 | a2;
    a3 = a3 | a2;
    a1 = 10;
    a2 = 10;
    a0 = 0 + 0;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_0890332C;
L_0890332C:;
    a0 = 17;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903334;
L_08903334:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890333C;
L_0890333C:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903344;
L_08903344:;
    a0 = 0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890334C;
L_0890334C:;
    a2 = 480;
    a3 = 272;
    t0 = 1;
    t1 = 0 + 0;
    t2 = 0 + 0;
    a0 = 120;
    a1 = 120;
    func_08902E70(a0, a1, a2, a3, t0, t1, t2);
    goto L_0890336C;
L_0890336C:;
    a0 = 7;
    a1 = 1;
    func_08A98D28(a0, a1);
    goto L_08903378;
L_08903378:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A98D8C(a0, a1);
    goto L_08903384;
L_08903384:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    a1 = s6 + 0;
    goto L_08903390;
L_08903390:;
    a0 = s0 + 0;
    a2 = (u32)-1;
    s6 = s6 + 1;
    func_0890CFBC(a2);
    goto L_089033A0;
L_089033A0:;
    v0 = (s32)s6 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s6 + 0; goto L_08903390; }
    goto L_089033AC;
L_089033AC:;
    a1 = 0 + 0;
    a0 = s0 + 0;
    func_0890CFD8(a0, a1);
    goto L_089033B8;
L_089033B8:;
    a0 = s0 + 0;
    a1 = 1;
    func_0890CFE0(a0, a1);
    goto L_089033C4;
L_089033C4:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089033D0;
L_089033D0:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_0890D028(a0, a1);
    goto L_089033DC;
L_089033DC:;
    a0 = s0 + 0;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_089033E8;
L_089033E8:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_0890D0B8(a0, a1);
    goto L_089033F4;
L_089033F4:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08903400;
L_08903400:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_0890D248(a0, a1);
    goto L_0890340C;
L_0890340C:;
    a0 = s0 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_08903418;
L_08903418:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_0890D290(a0, a1);
    goto L_08903424;
L_08903424:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_08903430;
L_08903430:;
    v0 = 10;
    ST32(s0+44, v0);
    goto L_089030C4;
}

/* 0890343C */
u32 func_0890343C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0890343C:;
    a0 = LD32(a0);
    v1 = LD32(a1);
    v0 = (s32)a0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08903458; }
    goto L_08903450;
L_08903450:;
    v0 = LD32(a2);
    v1 = (s32)v0 < (s32)a0 ? v0 : a0;
    goto L_08903458;
L_08903458:;
    v0 = v1 + 0;
    return v0;
}

/* 08903460 */
void func_08903460(void)
{
L_08903460:;
    return;
}

/* 08903468 */
void func_08903468(void)
{
L_08903468:;
    return;
}

/* 08903470 */
void func_08903470(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08903470:;
    sp = sp - 48;
    v0 = D_08B2BFA8 - (-16472);
    v1 = v0 - 16472;
    f1 = BITSF(LD32(v0-16472));
    v0 = D_08B2BFA4 - (-16476);
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    a0 = LD_U8(v0-16476);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, 0);
    {vr0=BITSF(LD32(sp+(4)));}
    {vr1=BITSF(LD32(sp+(8)));}
    {vr2=BITSF(LD32(sp+(12)));}
    {vr3=BITSF(LD32(sp+(16)));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=(s0<0?0:(s0>1?1:s0));float d1=(s1<0?0:(s1>1?1:s1));float d2=(s2<0?0:(s2>1?1:s2));float d3=(s3<0?0:(s3>1?1:s3));vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=BITSF(F2I(s0*BITSF(0x4f000000u),1));float d1=BITSF(F2I(s1*BITSF(0x4f000000u),1));float d2=BITSF(F2I(s2*BITSF(0x4f000000u),1));float d3=BITSF(F2I(s3*BITSF(0x4f000000u),1));vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4&&i<4;i++){s32 x=(s32)in_[i];out_[0]|=(u32)(x<0?0:(u32)x>>23)<<(8*i);}float d0=BITSF(out_[0]);vr0=d0;}
    {ST32(sp+(0),FBITS(vr0));}
    cnd_ = a0 != 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_089034E0; }
    goto L_089034CC;
L_089034CC:;
    a0 = 7;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089034D4;
L_089034D4:;
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;return; }
L_089034E0:;
    v0 = D_08B2BFC0 - (-16448);
    f13 = BITSF(LD32(v0-16448));
    f12 = BITSF(LD32(sp+16));
    a0 = v1 + 0;
    func_08A98F6C(a0, f12, f13);
    goto L_089034F4;
L_089034F4:;
    goto L_089034CC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;
}

/* 089034FC */
void func_089034FC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089034FC:;
    v0 = D_08B2BFA4 - (-16476);
    v1 = LD_U8(v0-16476);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = 7;
    if (cnd_) { goto L_08903520; }
    goto L_08903514;
L_08903514:;
    goto L_08903518;
L_08903518:;
    sp = sp + 16;
    return;
L_08903520:;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903528;
L_08903528:;
    goto L_08903518;
}

/* 08903530 */
void func_08903530(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08903530:;
    v0 = D_08B2BFA4 - (-16476);
    v1 = LD_U8(v0-16476);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = 7;
    if (cnd_) { goto L_08903554; }
    goto L_08903548;
L_08903548:;
    goto L_0890354C;
L_0890354C:;
    sp = sp + 16;
    return;
L_08903554:;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890355C;
L_0890355C:;
    goto L_0890354C;
}

/* 08903564 */
rv_t func_08903564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08903564:;
    v0 = D_08BB1D30 - (7472);
    ST32(v0+7472, a0);
    return (rv_t){ v0, v1, f0 };
}

/* 08903570 */
rv_t func_08903570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08903570:;
    v0 = D_08BB1D30 - (7472);
    ST32(v0+7472, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0890357C */
void func_0890357C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0890357C:;
    { s64 p_ = (s64)(s32)a1 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 128;
    t6 = a1 + 0;
    a1 = (u32)((s32)a3 >> 3);
    s3 = lo;
    { s64 p_ = (s64)(s32)s3 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08AD9240 - (-28096);
    v0 = v1 - 28096;
    t7 = a2 + 0;
    a1 = ((u32)(uintptr_t)func_08903564) - (13668);
    a2 = ((u32)(uintptr_t)func_08903570) - (13680);
    s7 = a0 + 0;
    s2 = a3 + 0;
    a1 = a1 + 13668;
    s1 = lo;
    s6 = s1 + 44;
    a2 = a2 + 13680;
    a0 = s6 + 0;
    s5 = t0 + 0;
    a3 = LD32(v1-28096);
    t5 = LD32(v0+24);
    v1 = LD32(v0+4);
    t1 = LD32(v0+8);
    t2 = LD32(v0+12);
    t3 = LD32(v0+16);
    t4 = LD32(v0+20);
    v0 = 32;
    ST16(sp+16, 0);
    ST8(sp+17, v0);
    v0 = 2;
    ST32(sp+12, 0);
    ST32(sp+36, v1);
    ST32(sp, 0);
    ST32(sp+32, a3);
    ST32(sp+40, t1);
    ST32(sp+44, t2);
    ST32(sp+48, t3);
    ST32(sp+52, t4);
    ST32(sp+56, t5);
    ST16(sp+12, t6);
    ST16(sp+14, t7);
    ST8(sp+2, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST8(sp+16, s2);
    v0 = func_088FAD84(a0, a1, a2, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08903658;
L_08903658:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    ST32(sp+64, v0);
    if (cnd_) { goto L_0890372C; }
    goto L_08903664;
L_08903664:;
    v0 = D_08BB1D30 - (7472);
    s4 = LD32(v0+7472);
    a1 = sp + 0;
    a2 = 18;
    a0 = s4 + 0;
    s0 = s4 + 18;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903680;
L_08903680:;
    a1 = s5 + 0;
    a0 = s0 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903690;
L_08903690:;
    a0 = s0 + s1;
    a1 = sp + 32;
    a2 = 26;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089036A0;
L_089036A0:;
    v1 = 32;
    cnd_ = s2 == v1;
    v0 = LD_U16(sp+14);
    if (cnd_) { goto L_08903758; }
    goto L_089036AC;
L_089036AC:;
    v0 = v0 << 1;
    cnd_ = (s32)s3 <= 0;
    ST16(sp+14, v0);
    if (cnd_) { goto L_089036EC; }
    goto L_089036B8;
L_089036B8:;
    a1 = s0 + 0;
    t6 = s3 + 0;
    goto L_089036C0;
L_089036C0:;
    v0 = LD_U16(a1);
    t6 = t6 - 1;
    v1 = v0 & 0x1f;
    a0 = v0 & 0x3e0;
    v1 = v1 << 10;
    v1 = v1 + a0;
    v0 = (v0 >> 10) & 0x1f;
    v1 = v0 | v1;
    ST16(a1, v1);
    cnd_ = t6 != 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_089036C0; }
    goto L_089036EC;
L_089036EC:;
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089036F4;
L_089036F4:;
    a0 = s7 + 0;
    a1 = 514;
    a2 = 0 + 0;
    v0 = sceIoOpen(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903704;
L_08903704:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08903724; }
    goto L_0890370C;
L_0890370C:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    a2 = s6 + 0;
    v0 = sceIoWrite(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890371C;
L_0890371C:;
    a0 = s0 + 0;
    v0 = sceIoClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903724;
L_08903724:;
    a0 = sp + 64;
    func_088FAE18(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0890372C;
L_0890372C:;
    sp = sp + 128;
    return;
L_08903758:;
    cnd_ = (s32)s3 <= 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089036EC; }
    goto L_08903760;
L_08903760:;
    t6 = s3 + 0;
    a2 = (u32)-256;
    goto L_08903768;
L_08903768:;
    v0 = LD_U16(a1);
    a0 = LD_U8(a1+2);
    t6 = t6 - 1;
    v1 = v0 & 0xff00;
    v0 = v0 & 0xff;
    v1 = v1 | a0;
    v0 = v0 | a2;
    ST16(a1, v1);
    ST16(a1+2, v0);
    cnd_ = t6 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08903768; }
    goto L_08903794;
L_08903794:;
    goto L_089036EC;
}

/* 0890379C */
void func_0890379C(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0890379C:;
    sp = sp - 112;
    a1 = 0x2420000u;
    a0 = D_08AD925C - (-28068);
    a0 = a0 - 28068;
    a1 = a1 | 0x5823;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = sp + 80;
    t1 = 4;
    v0 = sceIoDevctl(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089037D4;
L_089037D4:;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089037E8; }
    goto L_089037DC;
L_089037DC:;
    v0 = LD32(sp+80);
    v0 = v0 ^ 0x1;
    v1 = v0 < 0x1u;
    goto L_089037E8;
L_089037E8:;
    v0 = v1 ^ 0x1;
    v1 = D_08AD9264 - (-28060);
    a0 = LD32(v1-28060);
    ST8(sp+20, 0);
    cnd_ = v0 == 0;
    ST32(sp+16, a0);
    if (cnd_) { goto L_08903818; }
    goto L_08903800;
L_08903800:;
    sp = sp + 112;
    return;
L_08903818:;
    s2 = D_08BB1D34 - (7476);
    s0 = s2 + 7476;
    a1 = D_08AD926C - (-28052);
    a2 = 64;
    a3 = 1;
    t0 = sp + 16;
    a0 = s0 + 0;
    a1 = a1 - 28052;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890383C;
L_0890383C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = sceIoMkdir(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903848;
L_08903848:;
    a0 = sp + 32;
    v0 = sceRtcGetCurrentClockLocalTime(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903850;
L_08903850:;
    v1 = D_08C28DD0 - (-29232);
    s0 = LD32(v1-29232);
    ST32(sp+52, 0);
    ST32(sp+48, 0);
    cnd_ = s0 == 0;
    ST32(sp+56, 0);
    if (cnd_) { goto L_08903874; }
    goto L_08903868;
L_08903868:;
    v0 = (u32)(s32)LD_S8(s0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089039A0; }
    goto L_08903874;
L_08903874:;
    a0 = LD32(sp+48);
    v0 = D_08AD9278 - (-28040);
    s0 = v0 - 28040;
    cnd_ = a0 == 0;
    s1 = sp + 48;
    if (cnd_) { goto L_089038A4; }
    goto L_08903888;
L_08903888:;
    cnd_ = a0 == s0;
    v1 = LD_U16(sp+38);
    if (cnd_) { goto L_089038E4; }
    goto L_08903890;
L_08903890:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+56, 0); goto L_089038A8; }
    goto L_08903898;
L_08903898:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089038A0;
L_089038A0:;
    ST32(sp+48, 0);
    goto L_089038A4;
L_089038A4:;
    ST32(sp+56, 0);
    goto L_089038A8;
L_089038A8:;
    cnd_ = s0 == 0;
    ST32(sp+52, 0);
    if (cnd_) { goto L_08903994; }
    goto L_089038B0;
L_089038B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089038B8;
L_089038B8:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089038CC;
L_089038CC:;
    cnd_ = v0 != 0;
    ST32(sp+48, v0);
    if (cnd_) { goto L_08903980; }
    goto L_089038D4;
L_089038D4:;
    ST32(sp+56, 0);
    a0 = 0 + 0;
    ST32(sp+52, 0);
    goto L_089038E0;
L_089038E0:;
    v1 = LD_U16(sp+38);
    goto L_089038E4;
L_089038E4:;
    t4 = LD_U16(sp+40);
    t5 = LD_U16(sp+42);
    t2 = LD_U16(sp+32);
    t3 = LD_U16(sp+34);
    v0 = LD_U16(sp+36);
    s0 = s2 + 7476;
    a1 = D_08AD9284 - (-28028);
    t1 = a0 + 0;
    a1 = a1 - 28028;
    a0 = s0 + 0;
    a2 = 64;
    a3 = 1;
    t0 = sp + 16;
    ST32(sp+4, v1);
    ST32(sp+8, t4);
    ST32(sp+12, t5);
    ST32(sp, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890392C;
L_0890392C:;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903934;
L_08903934:;
    v1 = D_08BB1D14 - (7444);
    a2 = LD32(v1+7444);
    a0 = s0 + 0;
    a1 = 512;
    v0 = v0 + a2;
    t0 = v0 + 0;
    a2 = 272;
    a3 = 32;
    func_0890357C(a0, a1, a2, a3, t0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08903958;
L_08903958:;
    a0 = LD32(sp+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08903970; }
    goto L_08903964;
L_08903964:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_08903800;
L_08903970:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903978;
L_08903978:;
    ST32(sp+48, 0);
    goto L_08903964;
L_08903980:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890398C;
L_0890398C:;
    a0 = LD32(sp+48);
    goto L_089038E0;
L_08903994:;
    a0 = 0 + 0;
    ST32(sp+48, 0);
    goto L_089038E0;
L_089039A0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089039A8;
L_089039A8:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+68, v0);
    ST32(sp+72, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089039BC;
L_089039BC:;
    cnd_ = v0 != 0;
    ST32(sp+64, v0);
    if (cnd_) { goto L_08903A10; }
    goto L_089039C4;
L_089039C4:;
    ST32(sp+72, 0);
    ST32(sp+68, 0);
    s1 = sp + 48;
    goto L_089039D0;
L_089039D0:;
    a0 = sp + 64;
    a1 = 0 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    func_08ABA058(a0, a1, a2, a3, 0, 0, 0);
    goto L_089039E4;
L_089039E4:;
    a0 = LD32(sp+64);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08903A00; }
    goto L_089039F0;
L_089039F0:;
    a0 = LD32(sp+48);
    ST32(sp+72, 0);
    ST32(sp+68, 0);
    goto L_089038E0;
L_08903A00:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903A08;
L_08903A08:;
    ST32(sp+64, 0);
    goto L_089039F0;
L_08903A10:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903A1C;
L_08903A1C:;
    s1 = sp + 48;
    goto L_089039D0;
}

/* 08903A24 */
void func_08903A24(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08903A24:;
    sp = sp - 16;
    v1 = D_08BB1D08 - (7432);
    v0 = LD_U8(v1+7432);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08903A5C; }
    goto L_08903A48;
L_08903A48:;
    sp = sp + 16;
    return;
L_08903A5C:;
    v0 = 1;
    ST8(v1+7432, v0);
    v1 = 272;
    v0 = D_08B306EC - (1772);
    ST32(v0+1772, v1);
    a1 = 480;
    v0 = D_08B306F0 - (1776);
    ST32(v0+1776, a1);
    v0 = 240;
    f0 = BITSF(v0);
    v0 = D_08B306F4 - (1780);
    a0 = 1;
    f1 = (float)(s32)FBITS(f0);
    s0 = D_08BB1D14 - (7444);
    s1 = D_08BB1D18 - (7448);
    ST32(v0+1780, FBITS(f1));
    v0 = 136;
    f0 = BITSF(v0);
    v0 = D_08B306F8 - (1784);
    f1 = (float)(s32)FBITS(f0);
    ST32(v0+1784, FBITS(f1));
    v0 = sceCtrlSetSamplingMode(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903AB4;
L_08903AB4:;
    a0 = 0 + 0;
    v0 = sceCtrlSetSamplingCycle(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903ABC;
L_08903ABC:;
    func_08A972CC(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08903AC4;
L_08903AC4:;
    a0 = 1;
    func_08A97860(a0, 0, 0);
    goto L_08903ACC;
L_08903ACC:;
    v1 = D_08B51080 - (4224);
    s2 = v1 + 4224;
    v0 = 0x80000u;
    v0 = v0 | 0x8000;
    a0 = 0 + 0;
    a1 = s2 + 0;
    a2 = 0x30000u;
    ST32(s1+7448, v0);
    ST32(s0+7444, 0);
    func_08A973B0(a0, a1, a2);
    goto L_08903AF4;
L_08903AF4:;
    a0 = 3;
    a1 = LD32(s0+7444);
    a2 = 512;
    func_08A983E4(a0, a1, a2);
    goto L_08903B04;
L_08903B04:;
    a2 = LD32(s1+7448);
    a3 = 512;
    a0 = 480;
    a1 = 272;
    func_08A9854C(a0, a1, a2, a3);
    goto L_08903B18;
L_08903B18:;
    a0 = 0x110000u;
    a1 = 512;
    func_08A984A0(a0, a1);
    goto L_08903B24;
L_08903B24:;
    v0 = func_08A974A0(0, 0);
    goto L_08903B2C;
L_08903B2C:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_08903B38;
L_08903B38:;
    a2 = 0x30000u;
    a0 = 2;
    a1 = s2 + 0;
    func_08A973B0(a0, a1, a2);
    goto L_08903B48;
L_08903B48:;
    a0 = 1808;
    a1 = 1912;
    func_08A9883C(a0, a1);
    goto L_08903B54;
L_08903B54:;
    a2 = 480;
    a3 = 272;
    a0 = 2048;
    a1 = 2048;
    func_08A98670(a0, a1, a2, a3);
    goto L_08903B68;
L_08903B68:;
    a1 = 0xffff;
    a0 = 0 + 0;
    func_08A9871C(a0, a1);
    goto L_08903B74;
L_08903B74:;
    a0 = 4;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903B7C;
L_08903B7C:;
    a3 = 272;
    a1 = 0 + 0;
    a2 = 480;
    a0 = 0 + 0;
    func_08A98FF8(a0, a1, a2, a3);
    goto L_08903B90;
L_08903B90:;
    a0 = 2;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903B98;
L_08903B98:;
    a2 = 255;
    a1 = 0 + 0;
    a0 = 6;
    func_08A990BC(a0, a1, a2);
    goto L_08903BA8;
L_08903BA8:;
    a0 = 0 + 0;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903BB0;
L_08903BB0:;
    a0 = 5;
    func_08A99168(a0);
    goto L_08903BB8;
L_08903BB8:;
    a0 = 1;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903BC0;
L_08903BC0:;
    a0 = 1;
    func_08A98878(a0);
    goto L_08903BC8;
L_08903BC8:;
    a0 = 5;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903BD0;
L_08903BD0:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903BD8;
L_08903BD8:;
    a0 = 0 + 0;
    a1 = 1;
    func_08A98D54(a0, a1);
    goto L_08903BE4;
L_08903BE4:;
    a0 = 7;
    a1 = 1;
    func_08A98D28(a0, a1);
    goto L_08903BF0;
L_08903BF0:;
    f12 = BITSF(0);
    a0 = 2;
    func_08A98C6C(a0, f12);
    goto L_08903BFC;
L_08903BFC:;
    v1 = D_08B162CC - (25292);
    v0 = D_08AED0EC - (-12052);
    f1 = BITSF(LD32(v0-12052));
    f0 = BITSF(LD32(v1+25292));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    f12 = f1;
    if (cnd_) { goto L_08903D98; }
    goto L_08903C1C;
L_08903C1C:;
    a0 = 0 + 0;
    goto L_08903C20;
L_08903C20:;
    a1 = 0 + 0;
    func_08A98D8C(a0, a1);
    goto L_08903C28;
L_08903C28:;
    a1 = 2;
    a2 = 0 + 0;
    a3 = 1;
    a0 = 5;
    func_08A98CE4(a0, a1, a2, a3);
    goto L_08903C3C;
L_08903C3C:;
    a0 = (u32)-1;
    func_08A98994(a0);
    goto L_08903C44;
L_08903C44:;
    a0 = 1;
    func_08A988A0(a0);
    goto L_08903C4C;
L_08903C4C:;
    a0 = 8;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903C54;
L_08903C54:;
    a0 = 10;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903C5C;
L_08903C5C:;
    a0 = 11;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903C64;
L_08903C64:;
    a0 = 12;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903C6C;
L_08903C6C:;
    s0 = D_08B45A9C - (23196);
    a0 = 13;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903C78;
L_08903C78:;
    s0 = s0 + 23196;
    a0 = 14;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903C84;
L_08903C84:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    a2 = 2;
    a3 = s0 + 0;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08903C98;
L_08903C98:;
    a0 = 1;
    a1 = 0 + 0;
    a2 = 2;
    a3 = s0 + 0;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08903CAC;
L_08903CAC:;
    a0 = 2;
    a1 = 0 + 0;
    a2 = 2;
    a3 = s0 + 0;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08903CC0;
L_08903CC0:;
    a1 = 0 + 0;
    a3 = s0 + 0;
    a0 = 3;
    a2 = 2;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08903CD4;
L_08903CD4:;
    a0 = 7;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08903CDC;
L_08903CDC:;
    a1 = D_08B162B0 - (25264);
    v0 = LD32(a1+25264);
    v1 = 0xff000000u;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = 4; goto L_08903D00; }
    goto L_08903CF0;
L_08903CF0:;
    a0 = 0xff000000u;
    ST32(a1+25264, v1);
    func_08A988C4(a0);
    goto L_08903CFC;
L_08903CFC:;
    a0 = 4;
    goto L_08903D00;
L_08903D00:;
    a1 = 0xffff0000u;
    func_08A9891C(a0, a1);
    goto L_08903D08;
L_08903D08:;
    a0 = D_08BB1080 - (4224);
    a2 = 8;
    a3 = 32;
    t0 = 2;
    a1 = 8;
    a0 = a0 + 4224;
    func_08A9A038(a0, a1, a2, a3, t0);
    goto L_08903D24;
L_08903D24:;
    v0 = D_08AED0F0 - (-12048);
    f13 = BITSF(0);
    f12 = BITSF(LD32(v0-12048));
    func_0890500C(f12, f13);
    goto L_08903D34;
L_08903D34:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_08903D3C;
L_08903D3C:;
    a0 = 0x330000u;
    a0 = a0 | 0x3333;
    func_08A98048(a0);
    goto L_08903D48;
L_08903D48:;
    a0 = 0xffff;
    func_08A98060(a0);
    goto L_08903D50;
L_08903D50:;
    a0 = 0 + 0;
    func_0890BF58(a0);
    goto L_08903D58;
L_08903D58:;
    v0 = func_08A974A0(0, 0);
    goto L_08903D60;
L_08903D60:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903D6C;
L_08903D6C:;
    a1 = s2 + 0;
    a0 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08A976D4(a0, a1, a2, a3, t0);
    goto L_08903D84;
L_08903D84:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_08903D90;
L_08903D90:;
    goto L_08903A48;
L_08903D98:;
    ST32(v1+25292, FBITS(f1));
    func_08A98CBC(f12);
    goto L_08903DA0;
L_08903DA0:;
    a0 = 0 + 0;
    goto L_08903C20;
}

/* 08903DA8 */
void func_08903DA8(void)
{
    u32 v0 = 0;
L_08903DA8:;
    v0 = D_08BB1D08 - (7432);
    ST8(v0+7432, 0);
    return;
}

/* 08903DB4 */
void func_08903DB4(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08903DB4:;
    sp = sp - 96;
    s0 = a0 + 0;
    a0 = 1;
    s1 = a1 + 0;
    func_08A9A13C(a0);
    goto L_08903DD4;
L_08903DD4:;
    f0 = BITSF(LD32(s0+4));
    f6 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+16));
    f4 = BITSF(LD32(s0+20));
    f5 = BITSF(LD32(s0+28));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    v0 = D_08AED0F4 - (-12044);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f7 = BITSF(LD32(s0+12));
    f8 = BITSF(LD32(s0+24));
    f2 = BITSF(LD32(s0));
    ST32(sp+4, FBITS(f0));
    a0 = sp + 0;
    f0 = BITSF(LD32(v0-12044));
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f8));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    ST32(sp+60, FBITS(f0));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    ST32(sp+12, 0);
    ST32(sp+28, 0);
    ST32(sp+44, 0);
    func_08A9A1D8(a0);
    goto L_08903E60;
L_08903E60:;
    a0 = sp + 64;
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(sp+72, FBITS(f0));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    func_08A9AF68(a0);
    goto L_08903E8C;
L_08903E8C:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_08903E94;
L_08903E94:;
    func_08A9A170();
    goto L_08903E9C;
L_08903E9C:;
    sp = sp + 96;
    return;
}

/* 08903EB0 */
float func_08903EB0(float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08903EB0:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f3 = f12;
    f12 = BITSF(0);
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    v0 = D_08BB1D28 - (7464);
    if (cnd_) { goto L_08903F0C; }
    goto L_08903ED4;
L_08903ED4:;
    f1 = BITSF(LD32(v0+7464));
    v1 = D_08BB1D24 - (7460);
    f0 = BITSF(LD32(v1+7460));
    f1 = f1 / f3;
    v0 = D_08AED0F8 - (-12040);
    f2 = BITSF(LD32(v0-12040));
    v0 = D_08AED0FC - (-12036);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-12036));
    v0 = D_08AED100 - (-12032);
    f0 = f0 + f2;
    f0 = f0 * f1;
    f1 = BITSF(LD32(v0-12032));
    f12 = f0 * f1;
    goto L_08903F0C;
L_08903F0C:;
    f0 = f12;
    return f0;
}

/* 08903F14 */
void func_08903F14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08903F14:;
    sp = sp - 16;
    func_08905150(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08903F24;
L_08903F24:;
    v0 = D_08BB1D1C - (7452);
    v1 = LD32(v0+7452);
    v0 = D_08B51080 - (4224);
    v0 = v0 + 4224;
    a1 = v1 << 1;
    a1 = a1 + v1;
    a1 = a1 << 16;
    a1 = a1 + v0;
    a0 = 2;
    a2 = 0x30000u;
    func_08A973B0(a0, a1, a2);
    goto L_08903F50;
L_08903F50:;
    v1 = D_08BB1D14 - (7444);
    a1 = LD32(v1+7444);
    a0 = 3;
    a2 = 512;
    func_08A9844C(a0, a1, a2);
    goto L_08903F64;
L_08903F64:;
    v0 = D_08B2C18C - (-15988);
    a0 = v0 - 15988;
    v1 = LD_U8(a0+24);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = D_08B2BFA4 - (-16476);
    if (cnd_) { goto L_08903F88; }
    goto L_08903F7C;
L_08903F7C:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08903F84;
L_08903F84:;
    v0 = D_08B2BFA4 - (-16476);
    goto L_08903F88;
L_08903F88:;
    v1 = LD_U8(v0-16476);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0890406C; }
    goto L_08903F94;
L_08903F94:;
    v0 = D_08B2BFA8 - (-16472);
    v0 = v0 - 16472;
    v1 = D_08AED104 - (-12028);
    f2 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1-12028));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a1 = D_08AED108 - (-12024);
    if (cnd_) { goto L_0890411C; }
    goto L_08903FC0;
L_08903FC0:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f2 + f0;
    goto L_08903FC8;
L_08903FC8:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v1-12028));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = a2 << 8;
    if (cnd_) { goto L_08904110; }
    goto L_08903FF0;
L_08903FF0:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f2 + f0;
    goto L_08903FF8;
L_08903FF8:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1-12028));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08904104; }
    goto L_08904024;
L_08904024:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f1 + f0;
    goto L_0890402C;
L_0890402C:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1-12028));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_089040F8; }
    goto L_08904058;
L_08904058:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f1 + f0;
    goto L_08904060;
L_08904060:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    a0 = a0 + a2;
    goto L_0890406C;
L_0890406C:;
    func_08A98048(a0);
    goto L_08904074;
L_08904074:;
    v0 = D_08B160D9 - (24793);
    v1 = LD_U8(v0+24793);
    cnd_ = v1 != 0;
    a0 = 23;
    if (cnd_) { goto L_08904088; }
    goto L_08904084;
L_08904084:;
    a0 = 22;
    goto L_08904088;
L_08904088:;
    func_08A9806C(a0);
    goto L_08904090;
L_08904090:;
    v0 = D_08B159FC - (23036);
    a1 = LD32(v0+23036);
    a0 = a1 + 12;
    func_08903DB4(a0, a1);
    goto L_089040A0;
L_089040A0:;
    f12 = BITSF(0);
    func_08905124(f12);
    goto L_089040AC;
L_089040AC:;
    v1 = D_08B162CC - (25292);
    v0 = D_08B16208 - (25096);
    f1 = BITSF(LD32(v0+25096));
    f0 = BITSF(LD32(v1+25292));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    f12 = f1;
    if (cnd_) { goto L_089040E8; }
    goto L_089040CC;
L_089040CC:;
    func_08903470();
    goto L_089040D4;
L_089040D4:;
    func_0890CF08();
    goto L_089040DC;
L_089040DC:;
    sp = sp + 16;
    return;
L_089040E8:;
    ST32(v1+25292, FBITS(f1));
    func_08A98CBC(f12);
    goto L_089040F0;
L_089040F0:;
    goto L_089040CC;
L_089040F8:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f1 - f0;
    goto L_08904060;
L_08904104:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f1 - f0;
    goto L_0890402C;
L_08904110:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f2 - f0;
    goto L_08903FF8;
L_0890411C:;
    f0 = BITSF(LD32(a1-12024));
    f0 = f2 - f0;
    goto L_08903FC8;
}

/* 08904128 */
void func_08904128(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08904128:;
    sp = sp - 16;
    a1 = 0 + 0;
    a0 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_08904140;
L_08904140:;
    func_089041CC(0);
    goto L_08904148;
L_08904148:;
    v0 = D_08B16204 - (25092);
    v1 = LD_U8(v0+25092);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089041BC; }
    goto L_08904158;
L_08904158:;
    v1 = D_08B285AC - (-31316);
    goto L_0890415C;
L_0890415C:;
    v0 = LD32(v1-31316);
    a0 = 1;
    v0 = (v0 >> 2) & 0x3;
    a0 = a0 << (v0 & 31);
    a0 = a0 & 0xff;
    v0 = sceKernelSetGPO(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08904174;
L_08904174:;
    s0 = D_08BB1D2C - (7468);
    v0 = LD_U8(s0+7468);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089041AC; }
    goto L_08904184;
L_08904184:;
    func_08906A44();
    goto L_0890418C;
L_0890418C:;
    func_08913684();
    goto L_08904194;
L_08904194:;
    func_08908AFC();
    goto L_0890419C;
L_0890419C:;
    sp = sp + 16;
    return;
L_089041AC:;
    func_0890379C(0, 0);
    goto L_089041B4;
L_089041B4:;
    ST8(s0+7468, 0);
    goto L_08904184;
L_089041BC:;
    v0 = sceDisplayWaitVblankStartCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089041C4;
L_089041C4:;
    v1 = D_08B285AC - (-31316);
    goto L_0890415C;
}

/* 089041CC */
void func_089041CC(u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089041CC:;
    sp = sp - 16;
    v0 = func_08A9861C(t3);
    goto L_089041DC;
L_089041DC:;
    v1 = 0x80000u;
    a0 = D_08BB1D14 - (7444);
    a1 = D_08BB1D18 - (7448);
    v1 = v1 | 0x8000;
    cnd_ = v0 != 0;
    ST32(a0+7444, v0);
    if (cnd_) { goto L_08904220; }
    goto L_089041F4;
L_089041F4:;
    ST32(a1+7448, v1);
    goto L_089041F8;
L_089041F8:;
    v0 = D_08BB1D20 - (7456);
    v1 = LD_U8(v0+7456);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08904218; }
    goto L_08904208;
L_08904208:;
    v0 = LD32(a1+7448);
    v1 = LD32(a0+7444);
    ST32(a0+7444, v0);
    ST32(a1+7448, v1);
    goto L_08904218;
L_08904218:;
    sp = sp + 16;
    return;
L_08904220:;
    ST32(a1+7448, 0);
    goto L_089041F8;
}

/* 08904228 */
void func_08904228(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08904228:;
    sp = sp - 16;
    s0 = a0 & 0xff;
    s1 = D_08BB1D20 - (7456);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08904254; }
    goto L_08904244;
L_08904244:;
    v0 = LD_U8(s1+7456);
    a0 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0890426C; }
    goto L_08904254;
L_08904254:;
    ST8(s1+7456, s0);
    goto L_08904258;
L_08904258:;
    sp = sp + 16;
    return;
L_0890426C:;
    func_08A977CC(a0, a1);
    goto L_08904274;
L_08904274:;
    ST8(s1+7456, s0);
    goto L_08904258;
}

/* 0890427C */
u64 func_0890427C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890427C:;
    sp = sp - 32;
    s3 = D_08BB1D20 - (7456);
    s2 = D_08BB1D1C - (7452);
    func_0890CF14();
    goto L_089042A0;
L_089042A0:;
    func_08905320(0, 0, 0, 0);
    goto L_089042A8;
L_089042A8:;
    v0 = func_08A974A0(0, 0);
    goto L_089042B0;
L_089042B0:;
    s1 = v0 + 0;
    v0 = LD_U8(s3+7456);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08904358; }
    goto L_089042C0;
L_089042C0:;
    v0 = LD32(s2+7452);
    goto L_089042C4;
L_089042C4:;
    s0 = D_08B51080 - (4224);
    s0 = s0 + 4224;
    a0 = v0 << 1;
    a0 = a0 + v0;
    a0 = a0 << 16;
    a1 = s1 + 0;
    a0 = a0 + s0;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089042E4;
L_089042E4:;
    v0 = LD32(s2+7452);
    a0 = 0 + 0;
    a2 = 0 + 0;
    a1 = v0 << 1;
    a1 = a1 + v0;
    a1 = a1 << 16;
    a1 = a1 + s0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08A976D4(a0, a1, a2, a3, t0);
    goto L_0890430C;
L_0890430C:;
    v1 = LD_U8(s3+7456);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08904348; }
    goto L_08904318;
L_08904318:;
    v1 = LD32(s2+7452);
    goto L_0890431C;
L_0890431C:;
    v0 = 1;
    v0 = v0 - v1;
    ST32(s2+7452, v0);
    { u64 r_ = func_089051AC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890432C;
L_0890432C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08904348:;
    func_08904128();
    goto L_08904350;
L_08904350:;
    v1 = LD32(s2+7452);
    goto L_0890431C;
L_08904358:;
    func_08904128();
    goto L_08904360;
L_08904360:;
    v0 = LD32(s2+7452);
    goto L_089042C4;
}

/* 08904368 */
void func_08904368(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08904368:;
    sp = sp - 32;
    v0 = a0 & 0x2;
    s3 = a1 + 0;
    s2 = a2 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08904398; }
    goto L_08904390;
L_08904390:;
    cnd_ = s2 == 0;
    v0 = a0 & 0x1000;
    if (cnd_) { goto L_0890444C; }
    goto L_08904398;
L_08904398:;
    s1 = D_08B2C18C - (-15988);
    s0 = s1 - 15988;
    v0 = D_08B16205 - (25093);
    a1 = LD_U8(v0+25093);
    v1 = LD_U8(s0+24);
    cnd_ = v1 == a1;
    if (cnd_) { v1 = LD_U8(s0+36); goto L_089043C0; }
    goto L_089043B4;
L_089043B4:;
    a0 = s0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_089043BC;
L_089043BC:;
    v1 = LD_U8(s0+36);
    goto L_089043C0;
L_089043C0:;
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = 10;
    if (cnd_) { goto L_08904438; }
    goto L_089043CC;
L_089043CC:;
    ST32(s0+44, a2);
    goto L_089043D0;
L_089043D0:;
    a0 = s0 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_089043DC;
L_089043DC:;
    v0 = s3 & 0x8;
    goto L_089043E0;
L_089043E0:;
    cnd_ = v0 != 0;
    a0 = s1 - 15988;
    if (cnd_) { goto L_089043F4; }
    goto L_089043E8;
L_089043E8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(a0+28); goto L_08904428; }
    goto L_089043F0;
L_089043F0:;
    a0 = s1 - 15988;
    goto L_089043F4;
L_089043F4:;
    v1 = LD32(a0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_0890440C; }
    goto L_08904404;
L_08904404:;
    func_0890D108(a0, a1);
    goto L_0890440C;
L_0890440C:;
    goto L_08904410;
L_08904410:;
    sp = sp + 32;
    return;
L_08904428:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08904410; }
    goto L_08904430;
L_08904430:;
    a1 = 0 + 0;
    goto L_08904404;
L_08904438:;
    v0 = LD32(s0+44);
    cnd_ = v0 != a2;
    if (cnd_) { ST32(s0+44, a2); goto L_089043D0; }
    goto L_08904444;
L_08904444:;
    v0 = s3 & 0x8;
    goto L_089043E0;
L_0890444C:;
    cnd_ = v0 == 0;
    v0 = D_08B2C18C - (-15988);
    if (cnd_) { goto L_089044CC; }
    goto L_08904454;
L_08904454:;
    s0 = v0 - 15988;
    v1 = LD_U8(s0+24);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089044BC; }
    goto L_08904464;
L_08904464:;
    v1 = LD32(s0+28);
    goto L_08904468;
L_08904468:;
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890447C; }
    goto L_08904474;
L_08904474:;
    a1 = 5;
    func_0890D108(a0, a1);
    goto L_0890447C;
L_0890447C:;
    v1 = LD_U8(s0+36);
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = 10;
    if (cnd_) { goto L_089044A8; }
    goto L_0890448C;
L_0890448C:;
    a0 = s0 + 0;
    goto L_08904490;
L_08904490:;
    a1 = 1;
    ST32(s0+44, a2);
    goto L_08904498;
L_08904498:;
    func_0890D250(a0, a1);
    goto L_089044A0;
L_089044A0:;
    goto L_08904410;
L_089044A8:;
    v0 = LD32(s0+44);
    cnd_ = v0 != a2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08904490; }
    goto L_089044B4;
L_089044B4:;
    goto L_08904410;
L_089044BC:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_089044C4;
L_089044C4:;
    v1 = LD32(s0+28);
    goto L_08904468;
L_089044CC:;
    s0 = v0 - 15988;
    v1 = LD_U8(s0+24);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089044E8; }
    goto L_089044E0;
L_089044E0:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_089044E8;
L_089044E8:;
    v0 = LD32(s0+28);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890451C; }
    goto L_089044F4;
L_089044F4:;
    v0 = LD_U8(s0+36);
    goto L_089044F8;
L_089044F8:;
    cnd_ = v0 != 0;
    v1 = 10;
    if (cnd_) { goto L_0890450C; }
    goto L_08904500;
L_08904500:;
    v0 = LD32(s0+44);
    cnd_ = v0 == v1;
    if (cnd_) {  goto L_08904410; }
    goto L_0890450C;
L_0890450C:;
    ST32(s0+44, v1);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08904498;
L_0890451C:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08904524;
L_08904524:;
    v0 = LD_U8(s0+36);
    goto L_089044F8;
}

/* 0890452C */
void func_0890452C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr63 = v[63], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119];
    u8 stack_[976] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 976);
L_0890452C:;
    sp = sp - 976;
    v0 = D_08B2A744 - (-22716);
    a1 = v0 - 22716;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f9 = BITSF(0);
    fp = a0 & 0xff;
    f4 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+12));
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    {vr12=BITSF(v0);}
    v0 = FBITS(f2);
    {vr13=BITSF(v1);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f1 = BITSF(LD32(a1+24));
    f5 = BITSF(LD32(a1+28));
    fcc = FCMP(f0, f9, 2);
    f6 = BITSF(LD32(a1+36));
    f0 = BITSF(LD32(a1+20));
    f7 = BITSF(LD32(a1+40));
    f8 = BITSF(LD32(a1+44));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08904620; }
    goto L_089045E0;
L_089045E0:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;vr11=(float)1;}
    {v0=FBITS(vr4);}
    f9 = BITSF(v0);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f3));
    goto L_08904620;
L_08904620:;
    a2 = D_08AED10C - (-12020);
    f0 = BITSF(LD32(a2-12020));
    fcc = FCMP(f9, f0, 14);
    cnd_ = fcc;
    f3 = f9;
    if (cnd_) { goto L_0890463C; }
    goto L_08904638;
L_08904638:;
    f3 = f0;
    goto L_0890463C;
L_0890463C:;
    a0 = D_08AED110 - (-12016);
    f2 = BITSF(LD32(a0-12016));
    v0 = LD32(sp+16);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f2 = f3 * f2;
    {vr12=BITSF(v0);}
    f4 = BITSF(0);
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    {vr13=BITSF(v0);}
    {vr14=BITSF(v1);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f2 = BITSF(F2I(f2, 1));
    fcc = FCMP(f0, f4, 2);
    s7 = FBITS(f2);
    cnd_ = fcc;
    f0 = BITSF(LD32(a2-12020));
    if (cnd_) { goto L_089046CC; }
    goto L_08904688;
L_08904688:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;vr11=(float)1;}
    {v1=FBITS(vr4);}
    f4 = BITSF(v1);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    f0 = BITSF(LD32(a2-12020));
    goto L_089046CC;
L_089046CC:;
    fcc = FCMP(f4, f0, 14);
    cnd_ = fcc;
    f3 = f4;
    if (cnd_) { goto L_089046E0; }
    goto L_089046DC;
L_089046DC:;
    f3 = f0;
    goto L_089046E0;
L_089046E0:;
    f2 = BITSF(LD32(a0-12016));
    v0 = LD32(sp+32);
    v1 = LD32(sp+40);
    f2 = f3 * f2;
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f5 = BITSF(0);
    {vr12=BITSF(v0);}
    v0 = LD32(sp+36);
    {vr13=BITSF(v0);}
    {vr14=BITSF(v1);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f2 = BITSF(F2I(f2, 1));
    fcc = FCMP(f0, f5, 2);
    s6 = FBITS(f2);
    cnd_ = fcc;
    f4 = BITSF(LD32(a2-12020));
    if (cnd_) { goto L_0890476C; }
    goto L_08904728;
L_08904728:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;vr9=(float)1;vr10=(float)1;vr11=(float)1;}
    {v0=FBITS(vr4);}
    f5 = BITSF(v0);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    f4 = BITSF(LD32(a2-12020));
    goto L_0890476C;
L_0890476C:;
    fcc = FCMP(f5, f4, 14);
    cnd_ = fcc;
    f0 = f5;
    if (cnd_) { goto L_08904780; }
    goto L_0890477C;
L_0890477C:;
    f0 = f4;
    goto L_08904780;
L_08904780:;
    f5 = BITSF(LD32(a0-12016));
    f2 = BITSF(LD32(a1));
    f0 = f0 * f5;
    fcc = FCMP(f2, f4, 14);
    f0 = BITSF(F2I(f0, 1));
    s5 = FBITS(f0);
    cnd_ = !fcc;
    if (cnd_) { f2 = f4; goto L_089047A0; }
    goto L_089047A0;
L_089047A0:;
    f0 = f2 * f5;
    f3 = BITSF(LD32(a1+16));
    f0 = BITSF(F2I(f0, 1));
    fcc = FCMP(f3, f4, 14);
    s2 = FBITS(f0);
    cnd_ = !fcc;
    if (cnd_) { f3 = f4; goto L_089047BC; }
    goto L_089047BC;
L_089047BC:;
    f0 = f3 * f5;
    f1 = BITSF(LD32(a1+32));
    f0 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f4, 14);
    s3 = FBITS(f0);
    cnd_ = !fcc;
    if (cnd_) { f1 = f4; goto L_089047D8; }
    goto L_089047D8;
L_089047D8:;
    f12 = f12 * f5;
    f1 = f1 * f5;
    f0 = BITSF(0);
    f1 = BITSF(F2I(f1, 1));
    fcc = FCMP(f0, f12, 12);
    s4 = FBITS(f1);
    cnd_ = !fcc;
    v0 = D_08AED114 - (-12012);
    if (cnd_) { goto L_08904D68; }
    goto L_089047F8;
L_089047F8:;
    f0 = BITSF(LD32(v0-12012));
    f0 = f12 + f0;
    goto L_08904800;
L_08904800:;
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08BB1D0A - (7434);
    v1 = LD_U8(v0+7434);
    v0 = FBITS(f0);
    cnd_ = v1 == 0;
    s1 = v0 << 24;
    if (cnd_) { goto L_08904D2C; }
    goto L_08904818;
L_08904818:;
    v0 = s2 - s7;
    v1 = 255;
    v1 = (s32)v1 < (s32)v0 ? v1 : v0;
    v0 = (s32)v0 < 0;
    s0 = 255;
    if (v0 != 0) v1 = 0;
    a0 = sp + 80;
    a1 = sp + 84;
    a2 = sp + 88;
    v0 = s3 - s6;
    s1 = s1 + v1;
    ST32(sp+80, v0);
    ST32(sp+84, 0);
    ST32(sp+88, s0);
    v0 = func_089052BC(a0, a1, a2);
    goto L_08904854;
L_08904854:;
    v0 = v0 << 8;
    v1 = s4 - s5;
    a0 = sp + 92;
    a1 = sp + 96;
    a2 = sp + 100;
    ST32(sp+92, v1);
    s1 = s1 + v0;
    ST32(sp+96, 0);
    ST32(sp+100, s0);
    v0 = func_089052BC(a0, a1, a2);
    goto L_0890487C;
L_0890487C:;
    v0 = v0 << 16;
    v1 = s7 + s2;
    a0 = sp + 104;
    a1 = sp + 108;
    a2 = sp + 112;
    ST32(sp+104, v1);
    s1 = s1 + v0;
    ST32(sp+108, 0);
    ST32(sp+112, s0);
    v0 = func_089052BC(a0, a1, a2);
    goto L_089048A4;
L_089048A4:;
    a2 = v0 + 0;
    a0 = 0 + 0;
    a1 = 2;
    func_08A98B3C(a0, a1, a2);
    goto L_089048B4;
L_089048B4:;
    v0 = s6 + s3;
    a0 = sp + 116;
    a1 = sp + 120;
    a2 = sp + 124;
    ST32(sp+116, v0);
    ST32(sp+120, 0);
    ST32(sp+124, s0);
    v0 = func_089052BC(a0, a1, a2);
    goto L_089048D4;
L_089048D4:;
    v0 = v0 << 8;
    a2 = v0 + 0;
    a0 = 1;
    a1 = 2;
    func_08A98B3C(a0, a1, a2);
    goto L_089048E8;
L_089048E8:;
    v0 = s5 + s4;
    a2 = sp + 136;
    a0 = sp + 128;
    a1 = sp + 132;
    ST32(sp+128, v0);
    ST32(sp+136, s0);
    ST32(sp+132, 0);
    v0 = func_089052BC(a0, a1, a2);
    goto L_08904908;
L_08904908:;
    v0 = v0 << 16;
    a2 = v0 + 0;
    goto L_08904910;
L_08904910:;
    a0 = 2;
    a1 = 2;
    func_08A98B3C(a0, a1, a2);
    goto L_0890491C;
L_0890491C:;
    v1 = D_08B162B0 - (25264);
    v0 = LD32(v1+25264);
    cnd_ = v0 == s1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08904934; }
    goto L_0890492C;
L_0890492C:;
    ST32(v1+25264, s1);
    func_08A988C4(a0);
    goto L_08904934;
L_08904934:;
    cnd_ = fp != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_08904CA8; }
    goto L_0890493C;
L_0890493C:;
    v0 = D_08B159FC - (23036);
    a2 = LD32(v0+23036);
    {u32 a_=sp+(192);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    a0 = a2 + 12;
    v0 = LD32(a2+12);
    v1 = LD32(a0+4);
    {u32 a_=sp+(208);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {vr96=BITSF(v0);}
    v0 = LD32(a0+8);
    {vr97=BITSF(v1);}
    v1 = LD32(a0+12);
    {vr98=BITSF(v0);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    v0 = LD32(a0+16);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    v1 = LD32(a0+20);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    v1 = LD32(a0+24);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(a0+28);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    v1 = LD32(a0+32);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    a1 = LD32(sp);
    v0 = LD32(sp+4);
    v1 = LD32(sp+8);
    {u32 a_=sp+(256);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {vr36=BITSF(a1);}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr37=BITSF(v0);}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {vr38=BITSF(v1);}
    {float t0=vr36;float t1=vr37;float t2=vr38;float o0=0;o0+=vr0*t0;o0+=vr4*t1;o0+=vr8*t2;float o1=0;o1+=vr1*t0;o1+=vr5*t1;o1+=vr9*t2;float o2=0;o2+=vr2*t0;o2+=vr6*t1;o2+=vr10*t2;vr32=o0;vr33=o1;vr34=o2;}
    {v1=FBITS(vr34);}
    f6 = BITSF(v1);
    {v1=FBITS(vr32);}
    f2 = BITSF(v1);
    v0 = LD32(sp+16);
    {v1=FBITS(vr33);}
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    ST32(sp+68, v1);
    {u32 a_=sp+(384);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    ST32(sp+72, FBITS(f6));
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = BITSF(v1);
    ST32(sp+52, v1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    ST32(sp+56, FBITS(f6));
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    ST32(sp, FBITS(f2));
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    f9 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+64, FBITS(f2));
    ST32(sp+48, FBITS(f2));
    ST32(sp+4, v1);
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f6));
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    v0 = LD32(a2+12);
    v1 = LD32(a0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(a0+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(a0+12);
    v1 = LD32(a0+16);
    {u32 a_=sp+(272);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(a0+20);
    {vr1=BITSF(v1);}
    v1 = LD32(a0+24);
    {vr2=BITSF(v0);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(a0+28);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr116=d0;vr117=d1;vr118=d2;vr119=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    v1 = LD32(a0+32);
    {vr1=BITSF(v0);}
    v0 = LD32(sp+24);
    {vr2=BITSF(v1);}
    v1 = LD32(sp+20);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {vr21=BITSF(v1);}
    {vr22=BITSF(v0);}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(400);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float t0=vr96;float t1=vr97;float t2=vr98;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+48, v1);
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    ST32(sp+16, v1);
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    f0 = BITSF(v0);
    ST32(sp+52, v0);
    f7 = BITSF(FBITS(f3) ^ 0x80000000u);
    f8 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+56, FBITS(f3));
    ST32(sp+64, v1);
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+20, v0);
    {u32 a_=sp+(544);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    ST32(sp+24, FBITS(f3));
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(a2+12);
    v1 = LD32(a0+4);
    {vr0=BITSF(v0);}
    v0 = LD32(a0+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(480);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(a0+12);
    v1 = LD32(a0+16);
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(a0+20);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a1 = LD32(a0+32);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(736);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    v0 = LD32(a0+24);
    v1 = LD32(a0+28);
    {u32 a_=sp+(704);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(848);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {vr0=BITSF(v1);}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    v1 = LD32(sp+40);
    {vr1=BITSF(v0);}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {vr2=BITSF(v1);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    {v0=FBITS(vr6);}
    {v1=FBITS(vr5);}
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    f3 = BITSF(v0);
    f5 = BITSF(FBITS(f0) ^ 0x80000000u);
    f4 = BITSF(FBITS(f1) ^ 0x80000000u);
    {v0=FBITS(vr4);}
    ST32(sp+4, FBITS(f9));
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    ST32(sp+32, v0);
    ST32(sp+8, FBITS(f6));
    ST32(sp+20, FBITS(f8));
    ST32(sp+24, FBITS(f7));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f3));
    a3 = sp + 0;
    goto L_08904CA8;
L_08904CA8:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    a2 = 2;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08904CB8;
L_08904CB8:;
    a3 = sp + 16;
    a0 = 1;
    a1 = 0 + 0;
    a2 = 2;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08904CCC;
L_08904CCC:;
    a3 = sp + 32;
    a2 = 2;
    a1 = 0 + 0;
    a0 = 2;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08904CE0;
L_08904CE0:;
    a0 = 1;
    func_08904E30(a0);
    goto L_08904CE8;
L_08904CE8:;
    a0 = 3;
    func_08904D74(a0);
    goto L_08904CF0;
L_08904CF0:;
    a0 = 1;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08904CFC;
L_08904CFC:;
    sp = sp + 976;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;return; }
L_08904D2C:;
    v0 = s3 << 8;
    s1 = s1 + s2;
    s1 = s1 + v0;
    a2 = s7 + 0;
    v0 = s4 << 16;
    a0 = 0 + 0;
    a1 = 2;
    s1 = s1 + v0;
    func_08A98B3C(a0, a1, a2);
    goto L_08904D50;
L_08904D50:;
    a2 = s6 << 8;
    a0 = 1;
    a1 = 2;
    func_08A98B3C(a0, a1, a2);
    goto L_08904D60;
L_08904D60:;
    a2 = s5 << 16;
    goto L_08904910;
L_08904D68:;
    f0 = BITSF(LD32(v0-12012));
    f0 = f12 - f0;
    goto L_08904800;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;
}

/* 08904D74 */
void func_08904D74(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08904D74:;
    sp = sp - 32;
    s2 = D_08BB1D0C - (7436);
    v1 = LD32(s2+7436);
    s1 = a0 + 0;
    cnd_ = v1 == a0;
    if (cnd_) { goto L_08904DC8; }
    goto L_08904D9C;
L_08904D9C:;
    v0 = v1 < a0;
    cnd_ = v0 == 0;
    v0 = a0 < v1;
    if (cnd_) { goto L_08904DE4; }
    goto L_08904DA8;
L_08904DA8:;
    s0 = v1 + 0;
    a0 = s0 + 11;
    goto L_08904DB0;
L_08904DB0:;
    s0 = s0 + 1;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08904DB8;
L_08904DB8:;
    v0 = s0 < s1;
    cnd_ = v0 != 0;
    a0 = s0 + 11;
    if (cnd_) { goto L_08904DB0; }
    goto L_08904DC4;
L_08904DC4:;
    ST32(s2+7436, s1);
    goto L_08904DC8;
L_08904DC8:;
    sp = sp + 32;
    return;
L_08904DE4:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+7436, s1); goto L_08904DC8; }
    goto L_08904DEC;
L_08904DEC:;
    v0 = D_08B45A9C - (23196);
    s3 = v0 + 23196;
    s0 = a0 + 0;
    goto L_08904DF8;
L_08904DF8:;
    a0 = s0 + 11;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08904E00;
L_08904E00:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 2;
    a3 = s3 + 0;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08904E14;
L_08904E14:;
    v0 = LD32(s2+7436);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08904DF8; }
    goto L_08904E28;
L_08904E28:;
    ST32(s2+7436, s1);
    goto L_08904DC8;
}

/* 08904E30 */
void func_08904E30(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08904E30:;
    sp = sp - 16;
    s1 = D_08BB1D0B - (7435);
    v0 = LD_U8(s1+7435);
    s0 = a0 & 0xff;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08904E64; }
    goto L_08904E50;
L_08904E50:;
    cnd_ = s0 == 0;
    a0 = 10;
    if (cnd_) { goto L_08904E78; }
    goto L_08904E58;
L_08904E58:;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08904E60;
L_08904E60:;
    ST8(s1+7435, s0);
    goto L_08904E64;
L_08904E64:;
    sp = sp + 16;
    return;
L_08904E78:;
    a0 = 10;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08904E80;
L_08904E80:;
    ST8(s1+7435, s0);
    goto L_08904E64;
}

/* 08904E88 */
void func_08904E88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08904E88:;
    sp = sp - 16;
    s2 = D_08BB1D10 - (7440);
    v0 = LD32(s2+7440);
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08904F14; }
    goto L_08904EB0;
L_08904EB0:;
    v0 = a0 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+7440, s0); goto L_08904F14; }
    goto L_08904EBC;
L_08904EBC:;
    v1 = D_08AD92B4 - (-27980);
    v0 = a0 << 2;
    v1 = v1 - 27980;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08904ED8u: goto L_08904ED8; case 0x08904F10u: goto L_08904F10; case 0x08904F3Cu: goto L_08904F3C; case 0x08904F60u: goto L_08904F60; case 0x08904F8Cu: goto L_08904F8C; default: rs_break(0, 0x08904ed0); }
L_08904ED8:;
    v1 = D_08B162B4 - (25268);
    v0 = LD32(v1+25268);
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08904F2C; }
    goto L_08904EE8;
L_08904EE8:;
    a0 = 1;
    goto L_08904EEC;
L_08904EEC:;
    a1 = (u32)-1;
    goto L_08904EF0;
L_08904EF0:;
    func_08A9891C(a0, a1);
    goto L_08904EF8;
L_08904EF8:;
    a0 = 2;
    goto L_08904EFC;
L_08904EFC:;
    a1 = (u32)-1;
    func_08A9891C(a0, a1);
    goto L_08904F04;
L_08904F04:;
    a0 = 4;
    a1 = (u32)-1;
    func_08A9891C(a0, a1);
    goto L_08904F10;
L_08904F10:;
    ST32(s2+7440, s0);
    goto L_08904F14;
L_08904F14:;
    sp = sp + 16;
    return;
L_08904F2C:;
    ST32(v1+25268, 0);
    func_08A988F8(a0);
    goto L_08904F34;
L_08904F34:;
    a0 = 1;
    goto L_08904EEC;
L_08904F3C:;
    a1 = D_08B162B4 - (25268);
    v0 = LD32(a1+25268);
    v1 = 1;
    cnd_ = v0 == v1;
    a0 = 1;
    if (cnd_) { goto L_08904EF8; }
    goto L_08904F50;
L_08904F50:;
    ST32(a1+25268, v1);
    func_08A988F8(a0);
    goto L_08904F58;
L_08904F58:;
    a0 = 2;
    goto L_08904EFC;
L_08904F60:;
    v1 = D_08B162B4 - (25268);
    v0 = LD32(v1+25268);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0 + 0; goto L_08904F7C; }
    goto L_08904F70;
L_08904F70:;
    a0 = 1;
    goto L_08904F74;
L_08904F74:;
    a1 = 0xff000000u;
    goto L_08904EF0;
L_08904F7C:;
    ST32(v1+25268, 0);
    func_08A988F8(a0);
    goto L_08904F84;
L_08904F84:;
    a0 = 1;
    goto L_08904F74;
L_08904F8C:;
    v1 = D_08B162B4 - (25268);
    v0 = LD32(v1+25268);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0 + 0; goto L_08904FA8; }
    goto L_08904F9C;
L_08904F9C:;
    a1 = s1 + 0;
    goto L_08904FA0;
L_08904FA0:;
    a0 = 1;
    goto L_08904EF0;
L_08904FA8:;
    ST32(v1+25268, 0);
    func_08A988F8(a0);
    goto L_08904FB0;
L_08904FB0:;
    a1 = s1 + 0;
    goto L_08904FA0;
}

/* 08904FB8 */
void func_08904FB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08904FB8:;
    sp = sp - 16;
    a1 = D_08BB1D09 - (7433);
    v1 = a0 & 0xff;
    v0 = LD_U8(a1+7433);
    cnd_ = v1 == v0;
    a0 = 21;
    if (cnd_) { goto L_08904FE4; }
    goto L_08904FD4;
L_08904FD4:;
    cnd_ = v1 == 0;
    ST8(a1+7433, v1);
    if (cnd_) { goto L_08904FF0; }
    goto L_08904FDC;
L_08904FDC:;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08904FE4;
L_08904FE4:;
    goto L_08904FE8;
L_08904FE8:;
    sp = sp + 16;
    return;
L_08904FF0:;
    a0 = 21;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08904FF8;
L_08904FF8:;
    goto L_08904FE8;
}

/* 08905000 */
void func_08905000(u32 a0)
{
    u32 v0 = 0;
L_08905000:;
    v0 = D_08B16205 - (25093);
    ST8(v0+25093, a0);
    return;
}

/* 0890500C */
void func_0890500C(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0890500C:;
    sp = sp - 112;
    v1 = D_08B2C218 - (-15848);
    v0 = v1 - 15848;
    a0 = 0 + 0;
    s0 = sp + 16;
    f22 = f12;
    f1 = BITSF(LD32(v0+4));
    v0 = D_08AED118 - (-12008);
    f2 = BITSF(LD32(v1-15848));
    f0 = BITSF(LD32(v0-12008));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = D_08AED11C - (-12004);
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-12004));
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f1 = f1 * f0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, 0);
    f20 = BITSF(LD32(v1+80));
    f21 = BITSF(LD32(v1+76));
    f20 = f20 + f13;
    func_08A9A13C(a0);
    goto L_08905080;
L_08905080:;
    func_08A9A170();
    goto L_08905088;
L_08905088:;
    a0 = sp + 0;
    func_08A9AF68(a0);
    goto L_08905090;
L_08905090:;
    v0 = D_08AED120 - (-12000);
    f13 = BITSF(LD32(v0-12000));
    f12 = f22;
    f14 = f20;
    f15 = f21;
    func_08A9B044(f12, f13, f14, f15);
    goto L_089050A8;
L_089050A8:;
    a0 = s0 + 0;
    func_08A9A230(a0);
    goto L_089050B0;
L_089050B0:;
    v0 = D_08AED128 - (-11992);
    f22 = BITSF(LD32(v0-11992));
    v0 = D_08AED124 - (-11996);
    f0 = BITSF(LD32(v0-11996));
    f1 = f20 * f22;
    a0 = s0 + 0;
    ST32(sp+56, FBITS(f0));
    ST32(sp+72, FBITS(f1));
    func_08A9A1D8(a0);
    goto L_089050D4;
L_089050D4:;
    f2 = f21 - f20;
    v0 = D_08AED12C - (-11988);
    f0 = BITSF(LD32(v0-11988));
    f1 = f20 * f21;
    f20 = f20 + f21;
    f0 = f0 / f2;
    v0 = D_08BB1D24 - (7460);
    v1 = D_08BB1D28 - (7464);
    f1 = f1 * f22;
    f20 = f20 * f0;
    f1 = f1 * f0;
    ST32(v0+7460, FBITS(f20));
    ST32(v1+7464, FBITS(f1));
    sp = sp + 112;
    return;
}

/* 08905124 */
void func_08905124(float f12)
{
    u32 v0 = 0, v1 = 0;
    float f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905124:;
    sp = sp - 16;
    v0 = D_08B159FC - (23036);
    f13 = f12;
    v1 = LD32(v0+23036);
    f12 = BITSF(LD32(v1+108));
    f12 = f12 + f12;
    func_0890500C(f12, f13);
    goto L_08905144;
L_08905144:;
    sp = sp + 16;
    return;
}

/* 08905150 */
void func_08905150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905150:;
    sp = sp - 16;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905168;
L_08905168:;
    s1 = v0 + 0;
    v0 = D_08BB1D74 - (7540);
    s0 = v0 + 7540;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890518C; }
    goto L_08905180;
L_08905180:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905188;
L_08905188:;
    ST32(s0+4, s1);
    goto L_0890518C;
L_0890518C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    sp = sp + 16;
    return;
}

/* 089051AC */
u64 func_089051AC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089051AC:;
    sp = sp - 16;
    v0 = D_08BB1D74 - (7540);
    s0 = v0 + 7540;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089051E0; }
    goto L_089051C8;
L_089051C8:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089051F0; }
    goto L_089051E0;
L_089051E0:;
    goto L_089051E4;
L_089051E4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089051F0:;
    v0 = func_088F8C18();
    goto L_089051F8;
L_089051F8:;
    a0 = s0 + 0;
    ST32(s0+4, v0);
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905204;
L_08905204:;
    goto L_089051E4;
}

/* 0890520C */
u64 func_0890520C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890520C:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a1 ^ 0xffff;
    v1 = s1 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    a0 = D_08AD92CC - (-27956);
    s2 = D_08BB1D74 - (7540);
    v1 = s0 & v1;
    a0 = a0 - 27956;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v1 != 0;
    s3 = s2 + 7540;
    if (cnd_) { goto L_0890529C; }
    goto L_08905260;
L_08905260:;
    v0 = s1 < 0x1u;
    goto L_08905264;
L_08905264:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08BB1D74 - (7540);
    if (cnd_) { goto L_0890528C; }
    goto L_08905270;
L_08905270:;
    goto L_08905274;
L_08905274:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0890528C:;
    a0 = LD32(v0+7540);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08905294;
L_08905294:;
    goto L_08905274;
L_0890529C:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_089052A4;
L_089052A4:;
    ST32(s2+7540, v0);
    ST32(s3+8, 0);
    v0 = func_088F8C18();
    goto L_089052B0;
L_089052B0:;
    ST32(s3+4, v0);
    v0 = s1 < 0x1u;
    goto L_08905264;
}

/* 089052BC */
u32 func_089052BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089052BC:;
    a0 = LD32(a0);
    v1 = LD32(a1);
    v0 = (s32)a0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089052D8; }
    goto L_089052D0;
L_089052D0:;
    v0 = LD32(a2);
    v1 = (s32)v0 < (s32)a0 ? v0 : a0;
    goto L_089052D8;
L_089052D8:;
    v0 = v1 + 0;
    return v0;
}

/* 089052E0 */
rv_t func_089052E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089052E0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0890520C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089052F4;
L_089052F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08905300 */
rv_t func_08905300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905300:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0890520C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905314;
L_08905314:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08905320 */
void func_08905320(u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08905320:;
    sp = sp - 32;
    v0 = D_08BB1D80 - (7552);
    v1 = LD_U8(v0+7552);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08905700; }
    goto L_08905348;
L_08905348:;
    a0 = D_08B162AC - (25260);
    f1 = BITSF(LD32(a0+25260));
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_08905700; }
    goto L_08905364;
L_08905364:;
    v0 = D_08B285A4 - (-31324);
    v1 = D_08AED134 - (-11980);
    f3 = BITSF(LD32(v0-31324));
    f0 = BITSF(LD32(v1-11980));
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_08905700; }
    goto L_08905384;
L_08905384:;
    v0 = D_08AED140 - (-11968);
    f0 = BITSF(LD32(v0-11968));
    a2 = 0xff0000u;
    a2 = a2 | 0xffff;
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a1 = a2 + 0;
    if (cnd_) { goto L_08905830; }
    goto L_089053A8;
L_089053A8:;
    a3 = D_08AED144 - (-11964);
    f0 = BITSF(LD32(a3-11964));
    f0 = f1 + f0;
    goto L_089053B4;
L_089053B4:;
    v1 = D_08AED148 - (-11960);
    f4 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1-11960));
    f0 = BITSF(LD32(a0+25260));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a3-11964));
    if (cnd_) { goto L_08905828; }
    goto L_089053DC;
L_089053DC:;
    f0 = f1 + f0;
    goto L_089053E0;
L_089053E0:;
    v0 = D_08AED138 - (-11976);
    f5 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(v0-11976));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    v0 = D_08AED13C - (-11972);
    if (cnd_) { goto L_08905728; }
    goto L_089053FC;
L_089053FC:;
    v1 = FBITS(f4);
    a0 = FBITS(f5);
    s3 = D_08AED150 - (-11952);
    v0 = v1 << 24;
    v1 = a0 << 24;
    a2 = a2 | v0;
    a1 = a1 | v1;
    goto L_08905418;
L_08905418:;
    s2 = D_08B1620C - (25100);
    v0 = s2 + 25100;
    ST32(v0+4, a2);
    a0 = v0 + 20;
    v1 = 1;
    goto L_0890542C;
L_0890542C:;
    v1 = v1 + 1;
    v0 = v1 < 0xau;
    ST32(a0, a1);
    cnd_ = v0 != 0;
    a0 = a0 + 16;
    if (cnd_) { goto L_0890542C; }
    goto L_08905440;
L_08905440:;
    s1 = D_08B2C18C - (-15988);
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08905448;
L_08905448:;
    a0 = 5;
    s0 = v0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905454;
L_08905454:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_0890545C;
L_0890545C:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905464;
L_08905464:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890546C;
L_0890546C:;
    a0 = s1 - 15988;
    v1 = LD_U8(a0+24);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08905488; }
    goto L_08905480;
L_08905480:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08905488;
L_08905488:;
    f12 = BITSF(0);
    a0 = 1;
    func_08A98C6C(a0, f12);
    goto L_08905494;
L_08905494:;
    a0 = 7;
    a1 = 1;
    func_08A98D28(a0, a1);
    goto L_089054A0;
L_089054A0:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 3;
    a1 = 0 + 0;
    func_08A98CE4(a0, a1, a2, a3);
    goto L_089054B4;
L_089054B4:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A98D54(a0, a1);
    goto L_089054C0;
L_089054C0:;
    a0 = 1;
    a1 = 1;
    func_08A98D8C(a0, a1);
    goto L_089054CC;
L_089054CC:;
    v1 = D_08B162BC - (25276);
    f1 = BITSF(LD32(s3-11952));
    f0 = BITSF(LD32(v1+25276));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = D_08B162C0 - (25280);
    if (cnd_) { goto L_089054FC; }
    goto L_089054E8;
L_089054E8:;
    f0 = BITSF(LD32(v0+25280));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = D_08B162C4 - (25284); goto L_08905514; }
    goto L_089054FC;
L_089054FC:;
    f12 = f1;
    f13 = f1;
    ST32(v1+25276, FBITS(f1));
    ST32(v0+25280, FBITS(f1));
    func_08A98E60(f12, f13);
    goto L_08905510;
L_08905510:;
    v0 = D_08B162C4 - (25284);
    goto L_08905514;
L_08905514:;
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08905540; }
    goto L_0890552C;
L_0890552C:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = D_08BB1D18 - (7448); goto L_08905558; }
    goto L_08905540;
L_08905540:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    f13 = f12;
    ST32(v1+25288, FBITS(f12));
    func_08A98E9C(f12, f13);
    goto L_08905554;
L_08905554:;
    v0 = D_08BB1D18 - (7448);
    goto L_08905558;
L_08905558:;
    t0 = LD32(v0+7448);
    a2 = 512;
    a3 = 512;
    t0 = s0 + t0;
    a0 = 0 + 0;
    a1 = 512;
    func_08A98DD4(a0, a1, a2, a3, t0);
    goto L_08905574;
L_08905574:;
    a0 = 1808;
    a1 = 1912;
    func_08A9883C(a0, a1);
    goto L_08905580;
L_08905580:;
    a0 = 2048;
    a1 = 2048;
    a2 = 480;
    a3 = 272;
    func_08A98670(a0, a1, a2, a3);
    goto L_08905594;
L_08905594:;
    a1 = 0 + 0;
    a2 = 480;
    a3 = 272;
    a0 = 0 + 0;
    func_08A98FF8(a0, a1, a2, a3);
    goto L_089055A8;
L_089055A8:;
    a0 = 4;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089055B0;
L_089055B0:;
    a3 = 0 + 0;
    t0 = 0 + 0;
    a0 = 0 + 0;
    a1 = 2;
    a2 = 3;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_089055C8;
L_089055C8:;
    a1 = 0 + 0;
    a2 = 255;
    a0 = 1;
    func_08A990BC(a0, a1, a2);
    goto L_089055D8;
L_089055D8:;
    f12 = BITSF(0);
    a0 = 1;
    s0 = s1 - 15988;
    func_08A98C6C(a0, f12);
    goto L_089055E8;
L_089055E8:;
    a1 = 0x800000u;
    t0 = s2 + 25100;
    a1 = a1 | 0x11e;
    a2 = 10;
    a3 = 0 + 0;
    a0 = 5;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_08905604;
L_08905604:;
    a0 = 5;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890560C;
L_0890560C:;
    a0 = 1;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905614;
L_08905614:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08905718; }
    goto L_08905620;
L_08905620:;
    a1 = 1;
    goto L_08905624;
L_08905624:;
    a0 = 0 + 0;
    func_08A98D54(a0, a1);
    goto L_0890562C;
L_0890562C:;
    f12 = BITSF(0);
    a0 = 2;
    s1 = s0 + 0;
    func_08A98C6C(a0, f12);
    goto L_0890563C;
L_0890563C:;
    a0 = 6;
    a1 = 4;
    a2 = 255;
    func_08A990BC(a0, a1, a2);
    goto L_0890564C;
L_0890564C:;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_08905654;
L_08905654:;
    a0 = s1 + 0;
    a2 = (u32)-1;
    s0 = s0 + 1;
    func_0890CFBC(a2);
    goto L_08905664;
L_08905664:;
    v0 = (s32)s0 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08905654; }
    goto L_08905670;
L_08905670:;
    a1 = 0 + 0;
    a0 = s1 + 0;
    func_0890CFD8(a0, a1);
    goto L_0890567C;
L_0890567C:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890CFE0(a0, a1);
    goto L_08905688;
L_08905688:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905694;
L_08905694:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D028(a0, a1);
    goto L_089056A0;
L_089056A0:;
    a0 = s1 + 0;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_089056AC;
L_089056AC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D0B8(a0, a1);
    goto L_089056B8;
L_089056B8:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_089056C4;
L_089056C4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D248(a0, a1);
    goto L_089056D0;
L_089056D0:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_089056DC;
L_089056DC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D290(a0, a1);
    goto L_089056E8;
L_089056E8:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_089056F4;
L_089056F4:;
    v0 = 10;
    ST32(s1+44, v0);
    goto L_08905700;
L_08905700:;
    sp = sp + 32;
    return;
L_08905718:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_08905720;
L_08905720:;
    a1 = 1;
    goto L_08905624;
L_08905728:;
    f1 = BITSF(LD32(v0-11972));
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = f3 - f1; goto L_089057C4; }
    goto L_0890573C;
L_0890573C:;
    f1 = f3 - f0;
    v0 = D_08AED14C - (-11956);
    f0 = BITSF(LD32(v0-11956));
    s3 = D_08AED150 - (-11952);
    f2 = BITSF(LD32(s3-11952));
    f1 = f1 * f0;
    v0 = FBITS(f4);
    f0 = (float)(s32)FBITS(f4);
    cnd_ = (s32)v0 < 0;
    f1 = f2 - f1;
    if (cnd_) { goto L_089057A8; }
    goto L_08905764;
L_08905764:;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a3-11964));
    if (cnd_) { goto L_089057A0; }
    goto L_0890577C;
L_0890577C:;
    f0 = f1 + f0;
    goto L_08905780;
L_08905780:;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f5);
    v0 = FBITS(f0);
    v1 = a0 << 24;
    a1 = a1 | v1;
    v0 = v0 << 24;
    a2 = a2 | v0;
    goto L_08905418;
L_089057A0:;
    f0 = f1 - f0;
    goto L_08905780;
L_089057A8:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08905764;
L_089057C4:;
    v0 = D_08AED154 - (-11948);
    f0 = BITSF(LD32(v0-11948));
    s3 = D_08AED150 - (-11952);
    f2 = BITSF(LD32(s3-11952));
    f1 = f1 * f0;
    f3 = BITSF(LD32(v1-11960));
    f0 = BITSF(0);
    v1 = FBITS(f4);
    f2 = f2 - f1;
    v0 = v1 << 24;
    f1 = f2 * f3;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a2 = a2 | v0;
    if (cnd_) { goto L_0890581C; }
    goto L_08905800;
L_08905800:;
    f0 = BITSF(LD32(a3-11964));
    f0 = f1 + f0;
    goto L_08905808;
L_08905808:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 << 24;
    a1 = a1 | v0;
    goto L_08905418;
L_0890581C:;
    f0 = BITSF(LD32(a3-11964));
    f0 = f1 - f0;
    goto L_08905808;
L_08905828:;
    f0 = f1 - f0;
    goto L_089053E0;
L_08905830:;
    a3 = D_08AED144 - (-11964);
    f0 = BITSF(LD32(a3-11964));
    f0 = f1 - f0;
    goto L_089053B4;
}

/* 08905840 */
void func_08905840(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905840:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s2 = s0 + 4;
    if (cnd_) { goto L_089058B0; }
    goto L_08905864;
L_08905864:;
    v0 = LD32(s0+32);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08905904; }
    goto L_08905870;
L_08905870:;
    v0 = LD32(s0+36);
    goto L_08905874;
L_08905874:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089058F4; }
    goto L_08905880;
L_08905880:;
    a0 = 13;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905888;
L_08905888:;
    a0 = s2 + 0;
    func_08ABA444(a0, 0, 0, 0);
    goto L_08905890;
L_08905890:;
    a0 = s0 + 8;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08905898;
L_08905898:;
    a0 = s0 + 12;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_089058A0;
L_089058A0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089058A8;
L_089058A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089058B0;
L_089058B0:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089058E4; }
    goto L_089058BC;
L_089058BC:;
    ST32(s1, 0);
    goto L_089058C0;
L_089058C0:;
    ST32(s1+12, 0);
    ST32(s1+16, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return;
L_089058E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089058EC;
L_089058EC:;
    ST32(s1, 0);
    goto L_089058C0;
L_089058F4:;
    func_08ABA4FC(a0, a1);
    goto L_089058FC;
L_089058FC:;
    goto L_08905880;
L_08905904:;
    func_08ABA4FC(a0, a1);
    goto L_0890590C;
L_0890590C:;
    v0 = LD32(s0+36);
    goto L_08905874;
}

/* 08905914 */
u32 func_08905914(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905914:;
    sp = sp - 16;
    t0 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a1 = LD32(a1+64);
    if (cnd_) { goto L_08905958; }
    goto L_0890592C;
L_0890592C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08905934;
L_08905934:;
    a0 = v0 + 36;
    a2 = v0 + 32;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08905964; }
    goto L_0890594C;
L_0890594C:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08905934; }
    goto L_08905958;
L_08905958:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089059C0; }
    goto L_08905964;
L_08905964:;
    cnd_ = a3 == 0;
    t0 = (u32)-1;
    if (cnd_) { goto L_089059B0; }
    goto L_0890596C;
L_0890596C:;
    v0 = LD32(a3);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089059B4; }
    goto L_08905978;
L_08905978:;
    v1 = LD32(a3+12);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089059B4; }
    goto L_08905984;
L_08905984:;
    a1 = v0 + 0;
    a0 = (u32)-1;
    v0 = LD32(a1);
    goto L_08905990;
L_08905990:;
    a3 = a3 + 1;
    a2 = a3 < v1;
    a1 = a1 + 16;
    cnd_ = v0 != a0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089059B0; }
    goto L_089059A4;
L_089059A4:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08905990; }
    goto L_089059AC;
L_089059AC:;
    t0 = (u32)-1;
    goto L_089059B0;
L_089059B0:;
    goto L_089059B4;
L_089059B4:;
    v0 = t0 + 0;
    sp = sp + 16;
    return v0;
L_089059C0:;
    a2 = 1;
    v0 = func_08ABA484(a0, a1, a2);
    goto L_089059C8;
L_089059C8:;
    a3 = v0 + 0;
    goto L_08905964;
}

/* 089059D0 */
void func_089059D0(void)
{
    u32 v0 = 0, v1 = 0;
L_089059D0:;
    v0 = D_08BB1E59 - (7769);
    ST8(v0+7769, 0);
    v1 = D_08BB1E58 - (7768);
    v0 = D_08BB1E5C - (7772);
    ST8(v1+7768, 0);
    ST32(v0+7772, 0);
    return;
}

/* 089059EC */
void func_089059EC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089059EC:;
    a0 = D_08BB1E40 - (7744);
    sp = sp - 16;
    a0 = a0 + 7744;
    func_08905840(a0, t1, t2, t3);
    goto L_08905A00;
L_08905A00:;
    v0 = D_08BB1E5C - (7772);
    ST32(v0+7772, 0);
    sp = sp + 16;
    return;
}

/* 08905A14 */
void func_08905A14(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905A14:;
    a0 = D_08BB1E40 - (7744);
    sp = sp - 16;
    a0 = a0 + 7744;
    func_08905840(a0, t1, t2, t3);
    goto L_08905A28;
L_08905A28:;
    v0 = D_08BB1E59 - (7769);
    ST8(v0+7769, 0);
    v1 = D_08BB1E58 - (7768);
    v0 = D_08BB1E5C - (7772);
    ST8(v1+7768, 0);
    ST32(v0+7772, 0);
    sp = sp + 16;
    return;
}

/* 08905A4C */
void func_08905A4C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08905A4C:;
    sp = sp - 16;
    a0 = D_08BB1E40 - (7744);
    a0 = a0 + 7744;
    s0 = D_08BB1E58 - (7768);
    a2 = 1;
    a1 = LD32(a1+64);
    ST8(s0+7768, 0);
    v0 = func_08ABA484(a0, a1, a2);
    goto L_08905A78;
L_08905A78:;
    v1 = v0 + 0;
    v0 = D_08BB1E5C - (7772);
    cnd_ = v1 == 0;
    ST32(v0+7772, v1);
    if (cnd_) { goto L_08905B20; }
    goto L_08905A88;
L_08905A88:;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08905B24; }
    goto L_08905A94;
L_08905A94:;
    v0 = LD32(v1+20);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08905B28; }
    goto L_08905AA0;
L_08905AA0:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08905B2C; }
    goto L_08905AAC;
L_08905AAC:;
    v0 = D_08BB1DC4 - (7620);
    a0 = LD32(v0+7620);
    v1 = 1;
    cnd_ = a0 != 0;
    ST8(s0+7768, v1);
    if (cnd_) { goto L_08905B10; }
    goto L_08905AC0;
L_08905AC0:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v1 = LD_U8(s0+18);
    s1 = 1;
    cnd_ = v1 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08905AE0; }
    goto L_08905AD8;
L_08905AD8:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905AE0;
L_08905AE0:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08905AF4; }
    goto L_08905AEC;
L_08905AEC:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08905AF4;
L_08905AF4:;
    v0 = LD32(s0+40);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08905B08; }
    goto L_08905B00;
L_08905B00:;
    a1 = 1;
    func_0890D298(a0, a1);
    goto L_08905B08;
L_08905B08:;
    a0 = 1;
    func_08904FB8(a0);
    goto L_08905B10;
L_08905B10:;
    v0 = D_08BB1DC0 - (7616);
    v0 = LD32(v0+7616);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08905B34; }
    goto L_08905B20;
L_08905B20:;
    goto L_08905B24;
L_08905B24:;
    goto L_08905B28;
L_08905B28:;
    goto L_08905B2C;
L_08905B2C:;
    sp = sp + 16;
    return;
L_08905B34:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08905B3C;
L_08905B3C:;
    goto L_08905B24;
}

/* 08905B44 */
u32 func_08905B44(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08905B44:;
    sp = sp - 64;
    v0 = (u32)-1;
    s5 = a3 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    f20 = f12;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_08905D50; }
    goto L_08905B84;
L_08905B84:;
    a0 = LD32(s0);
    s4 = 0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905B90;
L_08905B90:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08905BA8; }
    goto L_08905B98;
L_08905B98:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08905D40; }
    goto L_08905BA4;
L_08905BA4:;
    s4 = LD32(a0+24);
    goto L_08905BA8;
L_08905BA8:;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08905BC8; }
    goto L_08905BB4;
L_08905BB4:;
    v0 = D_08B25FC4 - (24516);
    v1 = s1 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    s3 = LD32(v1);
    goto L_08905BC8;
L_08905BC8:;
    a0 = LD32(s0);
    a1 = s2 + 264;
    a2 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    v0 = func_088355D4(a0, a1, a2);
    goto L_08905BE0;
L_08905BE0:;
    cnd_ = v0 == 0;
    v0 = D_08B162C4 - (25284);
    if (cnd_) { goto L_08905D00; }
    goto L_08905BE8;
L_08905BE8:;
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(v0+25284));
    f2 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08905C18; }
    goto L_08905C04;
L_08905C04:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = s3 & 0x40; goto L_08905C34; }
    goto L_08905C18;
L_08905C18:;
    f12 = f1;
    f13 = f2;
    ST32(v0+25284, FBITS(f1));
    ST32(v1+25288, FBITS(f2));
    goto L_08905C28;
L_08905C28:;
    func_08A98E9C(f12, f13);
    goto L_08905C30;
L_08905C30:;
    v0 = s3 & 0x40;
    goto L_08905C34;
L_08905C34:;
    cnd_ = v0 == 0;
    v0 = D_08AD92D8 - (-27944);
    if (cnd_) { goto L_08905CF8; }
    goto L_08905C3C;
L_08905C3C:;
    v0 = D_08AD92DC - (-27940);
    f1 = BITSF(LD32(v0-27940));
    goto L_08905C44;
L_08905C44:;
    v0 = D_08B162CC - (25292);
    f0 = BITSF(LD32(v0+25292));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    f12 = f1;
    if (cnd_) { goto L_08905CE8; }
    goto L_08905C5C;
L_08905C5C:;
    v0 = D_08AED158 - (-11944);
    goto L_08905C60;
L_08905C60:;
    f0 = BITSF(LD32(v0-11944));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08905C78; }
    goto L_08905C74;
L_08905C74:;
    a2 = 0 + 0;
    goto L_08905C78;
L_08905C78:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    func_08904368(a0, a1, a2);
    goto L_08905C84;
L_08905C84:;
    f12 = f20;
    a0 = 0 + 0;
    func_0890452C(a0, f12);
    goto L_08905C90;
L_08905C90:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_08905CD8; }
    goto L_08905C98;
L_08905C98:;
    a0 = s1 + 0;
    func_0890C400(a0);
    goto L_08905CA0;
L_08905CA0:;
    a0 = s1 + 0;
    a1 = s5 + 0;
    func_0890C440(a0, a1);
    goto L_08905CAC;
L_08905CAC:;
    v0 = s4 & 0x1;
    goto L_08905CB0;
L_08905CB0:;
    sp = sp + 64;
    return v0;
L_08905CD8:;
    a0 = s1 + 0;
    func_0890C3C0(a0);
    goto L_08905CE0;
L_08905CE0:;
    v0 = s4 & 0x1;
    goto L_08905CB0;
L_08905CE8:;
    ST32(v0+25292, FBITS(f1));
    func_08A98CBC(f12);
    goto L_08905CF0;
L_08905CF0:;
    v0 = D_08AED158 - (-11944);
    goto L_08905C60;
L_08905CF8:;
    f1 = BITSF(LD32(v0-27944));
    goto L_08905C44;
L_08905D00:;
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08905D2C; }
    goto L_08905D18;
L_08905D18:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = s3 & 0x40; goto L_08905C34; }
    goto L_08905D2C;
L_08905D2C:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    ST32(v1+25288, FBITS(f12));
    f13 = f12;
    goto L_08905C28;
L_08905D40:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08905D48;
L_08905D48:;
    s4 = v0 + 0;
    goto L_08905BA8;
L_08905D50:;
    a0 = LD32(a1);
    a1 = 0 + 0;
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905D5C;
L_08905D5C:;
    s1 = v0 + 0;
    goto L_08905B84;
}

/* 08905D64 */
void func_08905D64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08905D64:;
    sp = sp - 112;
    v1 = D_08BB1E00 - (7680);
    v0 = a0 + 0;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    a3 = v1 + 7680;
    a2 = a1 + 0;
    ST32(sp+4, FBITS(f0));
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    a1 = sp + 32;
    ST32(sp+8, FBITS(f1));
    a0 = 1;
    ST32(sp+12, 0);
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=v1+(7680);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f0 = BITSF(LD32(v0+16));
    f1 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+12));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a3+(16);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f1 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(v0+24));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp, FBITS(f2));
    v0 = D_08AED15C - (-11940);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, 0);
    f3 = BITSF(LD32(v0-11940));
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    ST32(sp, 0);
    {u32 a_=a3+(32);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    ST32(sp+12, FBITS(f3));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=a3+(48);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    f2 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+28, FBITS(f3));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    ST32(sp+16, FBITS(f0));
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    ST32(sp+20, FBITS(f1));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    ST32(sp+24, FBITS(f2));
    {u32 a_=sp+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;o0+=v[12]*t3;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;o1+=v[13]*t3;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;o2+=v[14]*t3;float o3=0;o3+=v[3]*t0;o3+=v[7]*t1;o3+=v[11]*t2;o3+=v[15]*t3;vr20=o0;vr21=o1;vr22=o2;vr23=o3;}
    {u32 a_=a3+(48);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    func_08A992E0(a0, a1);
    goto L_08905E84;
L_08905E84:;
    sp = sp + 112;
    { v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;return; }
    v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;
}

/* 08905E90 */
void func_08905E90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08905E90:;
    a1 = a1 < 0x1u;
    v0 = a0 < 0x1u;
    sp = sp - 112;
    v0 = v0 | a1;
    s3 = t1 + 0;
    s2 = t0 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089060F0; }
    goto L_08905EDC;
L_08905EDC:;
    v0 = D_08BB1E58 - (7768);
    v1 = LD_U8(v0+7768);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089060F4; }
    goto L_08905EEC;
L_08905EEC:;
    v0 = D_08BB1E5C - (7772);
    t1 = LD32(v0+7772);
    cnd_ = t1 == 0;
    if (cnd_) { goto L_089060F4; }
    goto L_08905EFC;
L_08905EFC:;
    v0 = LD32(t1+12);
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089060F8; }
    goto L_08905F0C;
L_08905F0C:;
    v0 = LD32(t1);
    v1 = a2 << 4;
    s4 = v0 + v1;
    a0 = LD32(s4+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089060F8; }
    goto L_08905F24;
L_08905F24:;
    v0 = D_08BB1E00 - (7680);
    s5 = v0 + 7680;
    {u32 a_=v0+(7680);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    s6 = LD_U8(t1+24);
    a2 = LD32(s4+8);
    v1 = 32;
    v0 = 24;
    if (s6 == 0) v0 = v1;
    { s64 p_ = (s64)(s32)a2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(s4+12);
    v0 = LD32(t1+4);
    a3 = LD32(t1+8);
    v1 = v1 << 1;
    a2 = lo;
    a0 = 2;
    a1 = sp + 0;
    fp = v0 + a2;
    s7 = a3 + v1;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    func_08A992E0(a0, a1);
    goto L_08905FA0;
L_08905FA0:;
    v0 = D_08BB1DC4 - (7620);
    v0 = LD32(v0+7620);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s0+248));
    if (cnd_) { goto L_08906130; }
    goto L_08905FB0;
L_08905FB0:;
    a0 = s0 + 0;
    a1 = s5 + 0;
    a2 = s1 + 0;
    t0 = s2 + 0;
    t1 = s3 + 0;
    t_ = v0;
    a3 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08905FCC;
L_08905FCC:;
    a2 = LD_U16(s4+4);
    goto L_08905FD0;
L_08905FD0:;
    s1 = v0 + 0;
    s0 = 4511;
    v0 = 4579;
    if (s6 == 0) s0 = v0;
    a2 = a2 + 2;
    a3 = s7 + 0;
    t0 = fp + 0;
    a2 = a2 & 0xffff;
    a0 = 4;
    a1 = s0 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08905FFC;
L_08905FFC:;
    a3 = D_08B2C1C4 - (-15932);
    cnd_ = s1 == 0;
    t0 = D_08B2C1F0 - (-15888);
    if (cnd_) { goto L_08906080; }
    goto L_08906008;
L_08906008:;
    v0 = D_08B2C18C - (-15988);
    a0 = v0 - 15988;
    v1 = LD32(a0+28);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08906028; }
    goto L_08906020;
L_08906020:;
    a1 = 5;
    func_0890D108(a0, a1);
    goto L_08906028;
L_08906028:;
    a0 = 0 + 0;
    func_08904D74(a0);
    goto L_08906030;
L_08906030:;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_08906038;
L_08906038:;
    a2 = LD_U16(s4+4);
    a1 = s0 + 0;
    a3 = s7 + 0;
    a2 = a2 + 2;
    t0 = fp + 0;
    a0 = 4;
    a2 = a2 & 0xffff;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906058;
L_08906058:;
    a3 = D_08B2C1C4 - (-15932);
    a1 = a3 - 15932;
    t0 = D_08B2C1F0 - (-15888);
    a0 = LD32(s4+4);
    v0 = LD32(a1+8);
    v1 = LD32(t0-15888);
    v0 = v0 + a0;
    v1 = v1 + a0;
    ST32(a1+8, v0);
    ST32(t0-15888, v1);
    goto L_08906080;
L_08906080:;
    a2 = D_08B162C4 - (25284);
    f0 = BITSF(LD32(a2+25284));
    f1 = BITSF(0);
    a1 = a3 - 15932;
    a0 = LD32(s4+4);
    v0 = LD32(a1+12);
    v1 = LD32(t0-15888);
    fcc = FCMP(f0, f1, 2);
    v0 = v0 + a0;
    v1 = v1 + a0;
    a3 = D_08B162C8 - (25288);
    ST32(a1+12, v0);
    cnd_ = !fcc;
    ST32(t0-15888, v1);
    if (cnd_) { goto L_089060CC; }
    goto L_089060B8;
L_089060B8:;
    f0 = BITSF(LD32(a3+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = D_08BB1DC8 - (7624);
    if (cnd_) { goto L_089060E4; }
    goto L_089060CC;
L_089060CC:;
    ST32(a2+25284, 0);
    f12 = BITSF(LD32(a2+25284));
    f13 = f12;
    ST32(a3+25288, FBITS(f12));
    func_08A98E9C(f12, f13);
    goto L_089060E0;
L_089060E0:;
    v0 = D_08BB1DC8 - (7624);
    goto L_089060E4;
L_089060E4:;
    v0 = LD32(v0+7624);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08906120; }
    goto L_089060F0;
L_089060F0:;
    goto L_089060F4;
L_089060F4:;
    goto L_089060F8;
L_089060F8:;
    sp = sp + 112;
    return;
L_08906120:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08906128;
L_08906128:;
    goto L_089060F4;
L_08906130:;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_08905B44(a0, a1, a2, a3, f12);
    goto L_08906144;
L_08906144:;
    a2 = LD_U16(s4+4);
    goto L_08905FD0;
}

/* 0890614C */
void func_0890614C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890614C:;
    sp = sp - 16;
    v1 = D_08B162CC - (25292);
    v0 = D_08AED160 - (-11936);
    f1 = BITSF(LD32(v0-11936));
    f0 = BITSF(LD32(v1+25292));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    f12 = f1;
    if (cnd_) { goto L_089061C0; }
    goto L_08906174;
L_08906174:;
    v0 = D_08BB1E5C - (7772);
    goto L_08906178;
L_08906178:;
    v1 = D_08BB1E58 - (7768);
    a0 = 2;
    ST32(v0+7772, 0);
    ST8(v1+7768, 0);
    func_08A9A13C(a0);
    goto L_0890618C;
L_0890618C:;
    func_08A9A274();
    goto L_08906194;
L_08906194:;
    func_08A9A2C4();
    goto L_0890619C;
L_0890619C:;
    a0 = 1;
    func_08A9A13C(a0);
    goto L_089061A4;
L_089061A4:;
    func_08A9A274();
    goto L_089061AC;
L_089061AC:;
    func_08A9A2C4();
    goto L_089061B4;
L_089061B4:;
    sp = sp + 16;
    return;
L_089061C0:;
    ST32(v1+25292, FBITS(f1));
    func_08A98CBC(f12);
    goto L_089061C8;
L_089061C8:;
    v0 = D_08BB1E5C - (7772);
    goto L_08906178;
}

/* 089061D0 */
u64 func_089061D0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089061D0:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890621C; }
    goto L_089061FC;
L_089061FC:;
    v1 = D_08BB1E40 - (7744);
    v0 = v1 + 7744;
    ST32(v1+7744, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_0890621C;
L_0890621C:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089062A0; }
    goto L_0890622C;
L_0890622C:;
    v0 = D_08BB1E40 - (7744);
    s1 = LD32(v0+7744);
    cnd_ = s1 == 0;
    s2 = v0 + 7744;
    if (cnd_) { goto L_08906288; }
    goto L_0890623C;
L_0890623C:;
    a1 = LD32(s1+32);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089062D4; }
    goto L_08906248;
L_08906248:;
    a1 = LD32(s1+36);
    goto L_0890624C;
L_0890624C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089062C4; }
    goto L_08906254;
L_08906254:;
    a0 = 13;
    goto L_08906258;
L_08906258:;
    s0 = s1 + 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906260;
L_08906260:;
    a0 = s0 + 0;
    func_08ABA444(a0, 0, 0, 0);
    goto L_08906268;
L_08906268:;
    a0 = s1 + 8;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08906270;
L_08906270:;
    a0 = s1 + 12;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08906278;
L_08906278:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906280;
L_08906280:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906288;
L_08906288:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089062B4; }
    goto L_08906294;
L_08906294:;
    ST32(s2+16, 0);
    goto L_08906298;
L_08906298:;
    ST32(s2+12, 0);
    goto L_089062A0;
L_089062A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089062B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089062BC;
L_089062BC:;
    ST32(s2+16, 0);
    goto L_08906298;
L_089062C4:;
    a0 = s2 + 0;
    func_08ABA4FC(a0, a1);
    goto L_089062CC;
L_089062CC:;
    a0 = 13;
    goto L_08906258;
L_089062D4:;
    a0 = s2 + 0;
    func_08ABA4FC(a0, a1);
    goto L_089062DC;
L_089062DC:;
    a1 = LD32(s1+36);
    goto L_0890624C;
}

/* 089062E4 */
rv_t func_089062E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089062E4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_089061D0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089062F8;
L_089062F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08906304 */
rv_t func_08906304(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906304:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_089061D0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906318;
L_08906318:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08906324 */
void func_08906324(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906324:;
    sp = sp - 16;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08906384; }
    goto L_08906340;
L_08906340:;
    v0 = LD32(s1+36);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089063D4; }
    goto L_0890634C;
L_0890634C:;
    v0 = LD32(s1+40);
    goto L_08906350;
L_08906350:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089063C4; }
    goto L_0890635C;
L_0890635C:;
    a0 = 12;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906364;
L_08906364:;
    a0 = s1 + 20;
    func_08ABA5A8(a0, 0, 0, 0);
    goto L_0890636C;
L_0890636C:;
    a0 = s1 + 24;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08906374;
L_08906374:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890637C;
L_0890637C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906384;
L_08906384:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089063B4; }
    goto L_08906390;
L_08906390:;
    ST32(s0, 0);
    goto L_08906394;
L_08906394:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
L_089063B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089063BC;
L_089063BC:;
    ST32(s0, 0);
    goto L_08906394;
L_089063C4:;
    func_08ABA660(a0, a1);
    goto L_089063CC;
L_089063CC:;
    goto L_0890635C;
L_089063D4:;
    func_08ABA660(a0, a1);
    goto L_089063DC;
L_089063DC:;
    v0 = LD32(s1+40);
    goto L_08906350;
}

/* 089063E4 */
u32 func_089063E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089063E4:;
    sp = sp - 16;
    t0 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    a1 = LD32(a1+8);
    if (cnd_) { goto L_08906428; }
    goto L_089063FC;
L_089063FC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08906404;
L_08906404:;
    a0 = v0 + 40;
    a2 = v0 + 36;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08906434; }
    goto L_0890641C;
L_0890641C:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08906404; }
    goto L_08906428;
L_08906428:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0890644C; }
    goto L_08906434;
L_08906434:;
    cnd_ = a3 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08906440; }
    goto L_0890643C;
L_0890643C:;
    v0 = LD32(a3);
    goto L_08906440;
L_08906440:;
    sp = sp + 16;
    return v0;
L_0890644C:;
    a2 = 1;
    v0 = func_08ABA5E8(a0, a1, a2);
    goto L_08906454;
L_08906454:;
    a3 = v0 + 0;
    goto L_08906434;
}

/* 0890645C */
void func_0890645C(void)
{
L_0890645C:;
    return;
}

/* 08906464 */
void func_08906464(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906464:;
    a0 = D_08BB1E80 - (7808);
    sp = sp - 16;
    a0 = a0 + 7808;
    func_08906324(a0, t1, t2, t3);
    goto L_08906478;
L_08906478:;
    sp = sp + 16;
    return;
}

/* 08906484 */
void func_08906484(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906484:;
    a0 = D_08BB1E80 - (7808);
    sp = sp - 16;
    a0 = a0 + 7808;
    func_08906324(a0, t1, t2, t3);
    goto L_08906498;
L_08906498:;
    sp = sp + 16;
    return;
}

/* 089064A4 */
u32 func_089064A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_089064A4:;
    sp = sp - 208;
    s2 = a1 + 0;
    s0 = a2 + 0;
    a2 = 1;
    v0 = LD32(a0+8);
    a0 = D_08BB1E80 - (7808);
    a0 = a0 + 7808;
    a1 = v0 + 0;
    v0 = func_08ABA5E8(a0, a1, a2);
    goto L_089064F4;
L_089064F4:;
    s1 = v0 + 0;
    v1 = s2 < 0x1u;
    v0 = v0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08906534; }
    goto L_0890650C;
L_0890650C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08906538; }
    goto L_08906518;
L_08906518:;
    v0 = LD32(s1+20);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890653C; }
    goto L_08906524;
L_08906524:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08906564; }
    goto L_08906530;
L_08906530:;
    goto L_08906534;
L_08906534:;
    goto L_08906538;
L_08906538:;
    goto L_0890653C;
L_0890653C:;
    sp = sp + 208;
    return v0;
L_08906564:;
    a0 = 1;
    func_08904FB8(a0);
    goto L_0890656C;
L_0890656C:;
    v0 = s0 >> 24;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f12 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_089068E8; }
    goto L_0890657C;
L_0890657C:;
    v0 = D_08AED164 - (-11932);
    f0 = BITSF(LD32(v0-11932));
    a0 = LD32(s1);
    a1 = 0 + 0;
    f20 = f12 * f0;
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906594;
L_08906594:;
    a0 = LD32(s1);
    s0 = v0 + 0;
    s4 = 0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089065A4;
L_089065A4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089065BC; }
    goto L_089065AC;
L_089065AC:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089068D8; }
    goto L_089065B8;
L_089065B8:;
    s4 = LD32(a0+24);
    goto L_089065BC;
L_089065BC:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089065DC; }
    goto L_089065C8;
L_089065C8:;
    v0 = D_08B25FC4 - (24516);
    v1 = s0 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    a1 = LD32(v1);
    goto L_089065DC;
L_089065DC:;
    v0 = D_08AED168 - (-11928);
    f0 = BITSF(LD32(v0-11928));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_089065F8; }
    goto L_089065F4;
L_089065F4:;
    a2 = 0 + 0;
    goto L_089065F8;
L_089065F8:;
    a0 = s4 + 0;
    s7 = D_08B2C18C - (-15988);
    func_08904368(a0, a1, a2);
    goto L_08906604;
L_08906604:;
    a0 = s0 + 0;
    s0 = s7 - 15988;
    func_0890C3C0(a0);
    goto L_08906610;
L_08906610:;
    v0 = LD_U8(s0+18);
    s3 = 1;
    cnd_ = v0 == s3;
    a0 = s0 + 0;
    if (cnd_) { goto L_08906628; }
    goto L_08906620;
L_08906620:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906628;
L_08906628:;
    v0 = LD32(s0+40);
    cnd_ = v0 == s3;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890663C; }
    goto L_08906634;
L_08906634:;
    a1 = 1;
    func_0890D298(a0, a1);
    goto L_0890663C;
L_0890663C:;
    a0 = LD32(s1);
    a1 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    v0 = func_088355D4(a0, a1, a2);
    goto L_08906654;
L_08906654:;
    cnd_ = v0 == 0;
    s6 = D_08B162C4 - (25284);
    if (cnd_) { goto L_08906894; }
    goto L_0890665C;
L_0890665C:;
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(s6+25284));
    f2 = BITSF(LD32(sp+4));
    v0 = s6 + 0;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    fp = D_08B162C8 - (25288);
    if (cnd_) { goto L_08906690; }
    goto L_0890667C;
L_0890667C:;
    f0 = BITSF(LD32(fp+25288));
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = 1; goto L_089066AC; }
    goto L_08906690;
L_08906690:;
    f12 = f1;
    f13 = f2;
    ST32(v0+25284, FBITS(f1));
    ST32(fp+25288, FBITS(f2));
    goto L_089066A0;
L_089066A0:;
    func_08A98E9C(f12, f13);
    goto L_089066A8;
L_089066A8:;
    a0 = 1;
    goto L_089066AC;
L_089066AC:;
    s0 = sp + 16;
    func_08A9A13C(a0);
    goto L_089066B4;
L_089066B4:;
    s5 = D_08B2C1C4 - (-15932);
    func_08A9A274();
    goto L_089066BC;
L_089066BC:;
    a0 = s0 + 0;
    func_08A9A230(a0);
    goto L_089066C4;
L_089066C4:;
    s3 = D_08B2C1F0 - (-15888);
    func_08A9A170();
    goto L_089066CC;
L_089066CC:;
    f0 = BITSF(LD32(s2+68));
    v0 = s2 + 68;
    f10 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+28));
    f6 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0+20));
    v1 = s2 + 56;
    v0 = D_08AED16C - (-11924);
    f11 = BITSF(LD32(v1+8));
    f8 = BITSF(LD32(s2+56));
    f9 = BITSF(LD32(v1+4));
    ST32(sp+80, FBITS(f0));
    a0 = 2;
    f0 = BITSF(LD32(v0-11924));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    ST32(sp+96, FBITS(f3));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f5));
    ST32(sp+112, FBITS(f6));
    ST32(sp+116, FBITS(f7));
    ST32(sp+120, FBITS(f10));
    ST32(sp+128, FBITS(f8));
    ST32(sp+132, FBITS(f9));
    ST32(sp+136, FBITS(f11));
    ST32(sp+140, FBITS(f0));
    ST32(sp+92, 0);
    ST32(sp+108, 0);
    ST32(sp+124, 0);
    func_08A9A13C(a0);
    goto L_08906754;
L_08906754:;
    func_08A9A274();
    goto L_0890675C;
L_0890675C:;
    a0 = s0 + 0;
    func_08A9A1D8(a0);
    goto L_08906764;
L_08906764:;
    a0 = sp + 80;
    func_08A9A2EC(a0);
    goto L_0890676C;
L_0890676C:;
    a0 = s2 + 0;
    func_088D1CE0(a0, 0, 0, 0);
    goto L_08906774;
L_08906774:;
    f12 = f20;
    a0 = 0 + 0;
    func_0890452C(a0, f12);
    goto L_08906780;
L_08906780:;
    a2 = LD_U16(s1+4);
    a3 = LD32(s1+20);
    t0 = LD32(s1+16);
    a2 = a2 + 2;
    a2 = a2 & 0xffff;
    a0 = 4;
    a1 = 4579;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_089067A0;
L_089067A0:;
    v0 = s4 & 0x1;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s6+25284));
    if (cnd_) { goto L_0890681C; }
    goto L_089067AC;
L_089067AC:;
    a0 = s7 - 15988;
    v1 = LD32(a0+28);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089067C8; }
    goto L_089067C0;
L_089067C0:;
    a1 = 5;
    func_0890D108(a0, a1);
    goto L_089067C8;
L_089067C8:;
    a0 = 0 + 0;
    func_08904D74(a0);
    goto L_089067D0;
L_089067D0:;
    a2 = LD_U16(s1+4);
    a3 = LD32(s1+20);
    t0 = LD32(s1+16);
    a2 = a2 + 2;
    a0 = 4;
    a1 = 4579;
    a2 = a2 & 0xffff;
    s5 = D_08B2C1C4 - (-15932);
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_089067F4;
L_089067F4:;
    s3 = D_08B2C1F0 - (-15888);
    a1 = s5 - 15932;
    a0 = LD32(s1+4);
    v0 = LD32(a1+8);
    v1 = LD32(s3-15888);
    v0 = v0 + a0;
    v1 = v1 + a0;
    ST32(a1+8, v0);
    ST32(s3-15888, v1);
    f0 = BITSF(LD32(s6+25284));
    goto L_0890681C;
L_0890681C:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    f0 = BITSF(LD32(fp+25288));
    if (cnd_) { goto L_08906840; }
    goto L_08906830;
L_08906830:;
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08906858; }
    goto L_08906840;
L_08906840:;
    v0 = D_08B162C4 - (25284);
    f12 = f1;
    f13 = f1;
    ST32(v0+25284, FBITS(f1));
    ST32(fp+25288, FBITS(f1));
    func_08A98E9C(f12, f13);
    goto L_08906858;
L_08906858:;
    func_08A9A2C4();
    goto L_08906860;
L_08906860:;
    a0 = 1;
    func_08A9A13C(a0);
    goto L_08906868;
L_08906868:;
    func_08A9A2C4();
    goto L_08906870;
L_08906870:;
    a1 = s5 - 15932;
    a0 = LD32(s1+4);
    v0 = LD32(a1+20);
    v1 = LD32(s3-15888);
    v0 = v0 + a0;
    v1 = v1 + a0;
    ST32(a1+20, v0);
    ST32(s3-15888, v1);
    goto L_08906530;
L_08906894:;
    f0 = BITSF(LD32(s6+25284));
    f1 = BITSF(0);
    v0 = s6 + 0;
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    fp = D_08B162C8 - (25288);
    if (cnd_) { goto L_089068C4; }
    goto L_089068B0;
L_089068B0:;
    f0 = BITSF(LD32(fp+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = 1; goto L_089066AC; }
    goto L_089068C4;
L_089068C4:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    ST32(fp+25288, FBITS(f12));
    f13 = f12;
    goto L_089066A0;
L_089068D8:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089068E0;
L_089068E0:;
    s4 = v0 + 0;
    goto L_089065BC;
L_089068E8:;
    v0 = v0 & 0x1;
    v1 = s0 >> 25;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f12 = (float)(s32)FBITS(f0);
    f12 = f12 + f12;
    goto L_0890657C;
}

/* 08906904 */
u64 func_08906904(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906904:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890694C; }
    goto L_0890692C;
L_0890692C:;
    v1 = D_08BB1E80 - (7808);
    v0 = v1 + 7808;
    ST32(v1+7808, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_0890694C;
L_0890694C:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089069C4; }
    goto L_0890695C;
L_0890695C:;
    v0 = D_08BB1E80 - (7808);
    s0 = LD32(v0+7808);
    cnd_ = s0 == 0;
    s1 = v0 + 7808;
    if (cnd_) { goto L_089069AC; }
    goto L_0890696C;
L_0890696C:;
    a1 = LD32(s0+36);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089069F4; }
    goto L_08906978;
L_08906978:;
    a1 = LD32(s0+40);
    goto L_0890697C;
L_0890697C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089069E4; }
    goto L_08906984;
L_08906984:;
    a0 = 12;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890698C;
L_0890698C:;
    a0 = s0 + 20;
    func_08ABA5A8(a0, 0, 0, 0);
    goto L_08906994;
L_08906994:;
    a0 = s0 + 24;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_0890699C;
L_0890699C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089069A4;
L_089069A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089069AC;
L_089069AC:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089069D4; }
    goto L_089069B8;
L_089069B8:;
    ST32(s1+16, 0);
    goto L_089069BC;
L_089069BC:;
    ST32(s1+12, 0);
    goto L_089069C4;
L_089069C4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089069D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089069DC;
L_089069DC:;
    ST32(s1+16, 0);
    goto L_089069BC;
L_089069E4:;
    a0 = s1 + 0;
    func_08ABA660(a0, a1);
    goto L_089069EC;
L_089069EC:;
    goto L_08906984;
L_089069F4:;
    a0 = s1 + 0;
    func_08ABA660(a0, a1);
    goto L_089069FC;
L_089069FC:;
    a1 = LD32(s0+40);
    goto L_0890697C;
}

/* 08906A04 */
rv_t func_08906A04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906A04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08906904(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906A18;
L_08906A18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08906A24 */
rv_t func_08906A24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906A24:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08906904(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906A38;
L_08906A38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08906A44 */
void func_08906A44(void)
{
    u32 v0 = 0, v1 = 0;
L_08906A44:;
    v0 = D_08BBF6A0 - (-2400);
    ST32(v0-2400, 0);
    v1 = D_08BBF6A4 - (-2396);
    v0 = D_08BBF6A8 - (-2392);
    ST32(v1-2396, 0);
    ST32(v0-2392, 0);
    return;
}

/* 08906A60 */
void func_08906A60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906A60:;
    sp = sp - 16;
    v0 = D_08BB1D1C - (7452);
    t6 = a1 + t0;
    t0 = t2 + t0;
    s2 = t3 + 0;
    s1 = D_08BBF6A0 - (-2400);
    t5 = LD32(s1-2400);
    t4 = LD32(v0+7452);
    v0 = D_08BB1EA0 - (7840);
    v1 = t5 << 2;
    s0 = t4 << 2;
    s0 = s0 + t4;
    v1 = v1 + t5;
    v1 = v1 << 1;
    s0 = s0 << 12;
    s0 = s0 + v1;
    v0 = v0 + 7840;
    s0 = s0 + v0;
    v0 = s0 + 10;
    t5 = a0 + a3;
    v1 = a0 + 0;
    t4 = a1 + 0;
    a3 = t1 + a3;
    ST16(s0+4, v1);
    a0 = 5;
    a1 = (u32)-1;
    ST16(s0+6, t4);
    ST16(s0+8, a2);
    ST16(s0+2, t2);
    ST16(v0+8, a2);
    ST16(v0+4, t5);
    ST16(v0+6, t6);
    ST16(v0+2, t0);
    ST16(s0, t1);
    ST16(s0+10, a3);
    func_08904E88(a0, a1);
    goto L_08906B00;
L_08906B00:;
    a1 = s2 + 0;
    a0 = 1;
    func_08A9891C(a0, a1);
    goto L_08906B0C;
L_08906B0C:;
    a0 = s0 + 0;
    a1 = 20;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08906B18;
L_08906B18:;
    a1 = 0x800000u;
    t0 = s0 + 0;
    a0 = 6;
    a1 = a1 | 0x102;
    a2 = 2;
    a3 = 0 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906B34;
L_08906B34:;
    v0 = LD32(s1-2400);
    v0 = v0 + 2;
    ST32(s1-2400, v0);
    sp = sp + 16;
    return;
}

/* 08906B58 */
u64 func_08906B58(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08906B58:;
    sp = sp - 16;
    s2 = D_08BBF6A0 - (-2400);
    a2 = a0 + 0;
    v0 = LD32(s2-2400);
    v0 = v0 < 0x800u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08906DE8; }
    goto L_08906B80;
L_08906B80:;
    f4 = BITSF(0);
    v1 = LD32(a0+80);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    f1 = f4;
    if (cnd_) { goto L_08906BC8; }
    goto L_08906B94;
L_08906B94:;
    v0 = D_08BD394C - (14668);
    v1 = v1 << 2;
    v0 = v0 + 14668;
    v1 = v1 + v0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    if (cnd_) { f0 = BITSF(LD32(a2+32)); goto L_08906BCC; }
    goto L_08906BB0;
L_08906BB0:;
    v0 = LD_U16(v1+2);
    v1 = LD_U16(v1);
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    f4 = (float)(s32)FBITS(f0);
    f1 = (float)(s32)FBITS(f1);
    goto L_08906BC8;
L_08906BC8:;
    f0 = BITSF(LD32(a2+32));
    goto L_08906BCC;
L_08906BCC:;
    v0 = D_08BB1D1C - (7452);
    a1 = LD32(v0+7452);
    f2 = f0 * f1;
    v0 = LD32(s2-2400);
    f0 = BITSF(0);
    v1 = a1 << 2;
    a0 = v0 << 2;
    fcc = FCMP(f0, f2, 12);
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 << 12;
    a0 = a0 << 1;
    v0 = D_08BB1EA0 - (7840);
    v1 = v1 + a0;
    v0 = v0 + 7840;
    cnd_ = !fcc;
    s1 = v1 + v0;
    if (cnd_) { goto L_08906E54; }
    goto L_08906C10;
L_08906C10:;
    a0 = D_08AED170 - (-11920);
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 + f0;
    goto L_08906C1C;
L_08906C1C:;
    f3 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(a2+48));
    v0 = 0xffff;
    f2 = f0 * f4;
    f0 = BITSF(0);
    a1 = FBITS(f3);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v1 = (s32)a1 < (s32)v0 ? a1 : v0;
    if (cnd_) { goto L_08906E48; }
    goto L_08906C44;
L_08906C44:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 + f0;
    goto L_08906C4C;
L_08906C4C:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a2));
    v0 = 0xffff;
    ST16(s1, v1);
    a1 = FBITS(f0);
    f0 = BITSF(0);
    v0 = (s32)a1 < (s32)v0 ? a1 : v0;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST16(s1+2, v0);
    if (cnd_) { goto L_08906E3C; }
    goto L_08906C78;
L_08906C78:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 + f0;
    goto L_08906C80;
L_08906C80:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a2+16));
    v0 = FBITS(f0);
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST16(s1+4, v0);
    if (cnd_) { goto L_08906E30; }
    goto L_08906CA0;
L_08906CA0:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 + f0;
    goto L_08906CA8;
L_08906CA8:;
    f2 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(a2+40));
    a3 = s1 + 10;
    ST16(s1+8, 0);
    f1 = f0 * f1;
    f0 = BITSF(0);
    a1 = FBITS(f2);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST16(s1+6, a1);
    if (cnd_) { goto L_08906E24; }
    goto L_08906CD4;
L_08906CD4:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f1 + f0;
    goto L_08906CDC;
L_08906CDC:;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(a2+56));
    v0 = 0xffff;
    f2 = f0 * f4;
    f0 = BITSF(0);
    a1 = FBITS(f1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v1 = (s32)a1 < (s32)v0 ? a1 : v0;
    if (cnd_) { goto L_08906E18; }
    goto L_08906D04;
L_08906D04:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 + f0;
    goto L_08906D0C;
L_08906D0C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+8));
    v0 = 0xffff;
    ST16(a3, v1);
    a1 = FBITS(f0);
    f0 = BITSF(0);
    v0 = (s32)a1 < (s32)v0 ? a1 : v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST16(a3+2, v0);
    if (cnd_) { goto L_08906E0C; }
    goto L_08906D38;
L_08906D38:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f1 + f0;
    goto L_08906D40;
L_08906D40:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+24));
    v0 = FBITS(f0);
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST16(a3+4, v0);
    if (cnd_) { goto L_08906E00; }
    goto L_08906D60;
L_08906D60:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f1 + f0;
    goto L_08906D68;
L_08906D68:;
    f0 = BITSF(F2I(f0, 1));
    ST16(a3+8, 0);
    a0 = 5;
    a1 = FBITS(f0);
    ST16(a3+6, a1);
    a1 = (u32)-1;
    v1 = LD32(a2+64);
    v0 = v1 & 0xff00;
    a2 = v1 & 0xff;
    s0 = (v1 >> 16) & 0xff;
    s0 = s0 + v0;
    a2 = a2 << 16;
    s0 = s0 + a2;
    v1 = (v1 & ~(0xffffffu << 0)) | ((0 & 0xffffff) << 0);
    s0 = s0 + v1;
    func_08904E88(a0, a1);
    goto L_08906DA8;
L_08906DA8:;
    a1 = s0 + 0;
    a0 = 1;
    func_08A9891C(a0, a1);
    goto L_08906DB4;
L_08906DB4:;
    a0 = s1 + 0;
    a1 = 20;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08906DC0;
L_08906DC0:;
    a1 = 0x800000u;
    t0 = s1 + 0;
    a0 = 6;
    a1 = a1 | 0x102;
    a2 = 2;
    a3 = 0 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08906DDC;
L_08906DDC:;
    v0 = LD32(s2-2400);
    v0 = v0 + 2;
    ST32(s2-2400, v0);
    goto L_08906DE8;
L_08906DE8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08906E00:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f1 - f0;
    goto L_08906D68;
L_08906E0C:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f1 - f0;
    goto L_08906D40;
L_08906E18:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 - f0;
    goto L_08906D0C;
L_08906E24:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f1 - f0;
    goto L_08906CDC;
L_08906E30:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 - f0;
    goto L_08906CA8;
L_08906E3C:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 - f0;
    goto L_08906C80;
L_08906E48:;
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 - f0;
    goto L_08906C4C;
L_08906E54:;
    a0 = D_08AED170 - (-11920);
    f0 = BITSF(LD32(a0-11920));
    f0 = f2 - f0;
    goto L_08906C1C;
}

/* 08906E64 */
u64 func_08906E64(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08906E64:;
    sp = sp - 32;
    s2 = D_08BBF6A4 - (-2396);
    t3 = a0 + 0;
    v0 = LD32(s2-2396);
    v0 = v0 < 0x200u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890708C; }
    goto L_08906E8C;
L_08906E8C:;
    f6 = BITSF(0);
    v1 = LD32(a0+80);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    f7 = f6;
    if (cnd_) { goto L_08906ED4; }
    goto L_08906EA0;
L_08906EA0:;
    v0 = D_08BD394C - (14668);
    v1 = v1 << 2;
    v0 = v0 + 14668;
    v1 = v1 + v0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    v0 = D_08BB1D1C - (7452);
    if (cnd_) { goto L_08906ED8; }
    goto L_08906EBC;
L_08906EBC:;
    v0 = LD_U16(v1+2);
    v1 = LD_U16(v1);
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    f6 = (float)(s32)FBITS(f0);
    f7 = (float)(s32)FBITS(f1);
    goto L_08906ED4;
L_08906ED4:;
    v0 = D_08BB1D1C - (7452);
    goto L_08906ED8;
L_08906ED8:;
    a1 = LD32(v0+7452);
    a2 = LD32(s2-2396);
    v0 = D_08AD92E0 - (-27936);
    a0 = v0 - 27936;
    t0 = LD32(v0-27936);
    v1 = a1 << 2;
    v0 = a2 << 2;
    v1 = v1 + a1;
    v0 = v0 + a2;
    v0 = v0 << 1;
    v1 = v1 << 10;
    t2 = LD32(a0+12);
    t1 = LD32(a0+8);
    v1 = v1 + v0;
    v0 = D_08BBBEA0 - (-16736);
    v0 = v0 - 16736;
    a3 = LD32(a0+4);
    s1 = v1 + v0;
    v0 = D_08AED174 - (-11916);
    f5 = BITSF(0);
    ST32(sp+8, t1);
    a0 = s1 + 0;
    t4 = 0xffff;
    ST32(sp+12, t2);
    f3 = BITSF(LD32(v0-11916));
    ST32(sp, t0);
    t0 = 0 + 0;
    ST32(sp+4, a3);
    a3 = sp + 0;
    goto L_08906F4C;
L_08906F4C:;
    v0 = LD32(a3);
    t0 = t0 + 1;
    t1 = t0 < 0x4u;
    v0 = v0 << 2;
    v1 = v0 + t3;
    f0 = BITSF(LD32(v1+32));
    a1 = v1 + 0;
    a2 = v1 + 0;
    f0 = f0 * f7;
    v0 = v1 + 0;
    a3 = a3 + 4;
    f1 = f0 + f3;
    fcc = FCMP(f5, f0, 12);
    f2 = f0 - f3;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_08906F90; }
    goto L_08906F8C;
L_08906F8C:;
    f1 = BITSF(F2I(f2, 1));
    goto L_08906F90;
L_08906F90:;
    f0 = BITSF(LD32(a1+48));
    a1 = FBITS(f1);
    f0 = f0 * f6;
    v1 = (s32)a1 < (s32)t4 ? a1 : t4;
    f1 = f0 + f3;
    fcc = FCMP(f5, f0, 12);
    f2 = f0 - f3;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_08906FB8; }
    goto L_08906FB4;
L_08906FB4:;
    f1 = BITSF(F2I(f2, 1));
    goto L_08906FB8;
L_08906FB8:;
    f0 = BITSF(LD32(v0));
    a1 = FBITS(f1);
    ST16(a0, v1);
    f1 = f0 + f3;
    fcc = FCMP(f5, f0, 12);
    v0 = (s32)a1 < (s32)t4 ? a1 : t4;
    f4 = f0 - f3;
    f2 = BITSF(F2I(f1, 1));
    cnd_ = fcc;
    ST16(a0+2, v0);
    if (cnd_) { goto L_08906FE4; }
    goto L_08906FE0;
L_08906FE0:;
    f2 = BITSF(F2I(f4, 1));
    goto L_08906FE4;
L_08906FE4:;
    f1 = BITSF(LD32(a2+16));
    v0 = FBITS(f2);
    f0 = f1 + f3;
    fcc = FCMP(f5, f1, 12);
    ST16(a0+4, v0);
    f2 = f1 - f3;
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08907008; }
    goto L_08907004;
L_08907004:;
    f0 = BITSF(F2I(f2, 1));
    goto L_08907008;
L_08907008:;
    a1 = FBITS(f0);
    ST16(a0+8, 0);
    ST16(a0+6, a1);
    cnd_ = t1 != 0;
    a0 = a0 + 10;
    if (cnd_) { goto L_08906F4C; }
    goto L_0890701C;
L_0890701C:;
    a2 = LD32(t3+64);
    a0 = 5;
    a1 = (u32)-1;
    v0 = a2 & 0xff00;
    v1 = a2 & 0xff;
    s0 = (a2 >> 16) & 0xff;
    s0 = s0 + v0;
    v1 = v1 << 16;
    s0 = s0 + v1;
    a2 = (a2 & ~(0xffffffu << 0)) | ((0 & 0xffffff) << 0);
    s0 = s0 + a2;
    func_08904E88(a0, a1);
    goto L_0890704C;
L_0890704C:;
    a1 = s0 + 0;
    a0 = 1;
    func_08A9891C(a0, a1);
    goto L_08907058;
L_08907058:;
    a0 = s1 + 0;
    a1 = 40;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08907064;
L_08907064:;
    a1 = 0x800000u;
    t0 = s1 + 0;
    a0 = 5;
    a1 = a1 | 0x102;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08907080;
L_08907080:;
    v0 = LD32(s2-2396);
    v0 = v0 + 4;
    ST32(s2-2396, v0);
    goto L_0890708C;
L_0890708C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089070A4 */
u64 func_089070A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089070A4:;
    sp = sp - 32;
    s1 = D_08BBF6A8 - (-2392);
    t1 = a0 + 0;
    v0 = LD32(s1-2392);
    v0 = v0 < 0x80u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089072B4; }
    goto L_089070C8;
L_089070C8:;
    f5 = BITSF(0);
    v1 = LD32(a0+80);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    f6 = f5;
    if (cnd_) { goto L_08907110; }
    goto L_089070DC;
L_089070DC:;
    v0 = D_08BD394C - (14668);
    v1 = v1 << 2;
    v0 = v0 + 14668;
    v1 = v1 + v0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    v0 = D_08BB1D1C - (7452);
    if (cnd_) { goto L_08907114; }
    goto L_089070F8;
L_089070F8:;
    v0 = LD_U16(v1+2);
    v1 = LD_U16(v1);
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    f5 = (float)(s32)FBITS(f0);
    f6 = (float)(s32)FBITS(f1);
    goto L_08907110;
L_08907110:;
    v0 = D_08BB1D1C - (7452);
    goto L_08907114;
L_08907114:;
    v1 = LD32(v0+7452);
    a1 = LD32(s1-2392);
    a0 = D_08AD92E0 - (-27936);
    v0 = a0 - 27936;
    v1 = v1 << 7;
    a2 = LD32(a0-27936);
    a3 = LD32(v0+8);
    t0 = LD32(v0+12);
    a0 = LD32(v0+4);
    v1 = v1 + a1;
    v0 = D_08BBE6A0 - (-6496);
    v0 = v0 - 6496;
    v1 = v1 << 4;
    s0 = v1 + v0;
    v0 = D_08AED178 - (-11912);
    ST32(sp+4, a0);
    f4 = BITSF(0);
    ST32(sp+12, t0);
    t3 = 0xff000000u;
    a1 = s0 + 0;
    f3 = BITSF(LD32(v0-11912));
    ST32(sp, a2);
    t4 = 0xffff;
    t5 = 0xff0000u;
    ST32(sp+8, a3);
    t3 = t3 | 0xff00;
    a3 = 0 + 0;
    a2 = sp + 0;
    goto L_08907184;
L_08907184:;
    v0 = LD32(a2);
    a3 = a3 + 1;
    t2 = a3 < 0x4u;
    v0 = v0 << 2;
    v1 = v0 + t1;
    f0 = BITSF(LD32(v1+32));
    a0 = v1 + 0;
    t0 = v1 + 0;
    f0 = f0 * f6;
    a2 = a2 + 4;
    f1 = f0 + f3;
    fcc = FCMP(f4, f0, 12);
    f2 = f0 - f3;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_089071C4; }
    goto L_089071C0;
L_089071C0:;
    f1 = BITSF(F2I(f2, 1));
    goto L_089071C4;
L_089071C4:;
    f0 = BITSF(LD32(a0+48));
    a0 = FBITS(f1);
    f0 = f0 * f5;
    v0 = (s32)a0 < (s32)t4 ? a0 : t4;
    ST16(a1, v0);
    f1 = f0 + f3;
    fcc = FCMP(f4, f0, 12);
    f2 = f0 - f3;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_089071F0; }
    goto L_089071EC;
L_089071EC:;
    f1 = BITSF(F2I(f2, 1));
    goto L_089071F0;
L_089071F0:;
    a0 = FBITS(f1);
    f1 = BITSF(LD32(v1));
    v0 = (s32)a0 < (s32)t4 ? a0 : t4;
    ST16(a1+2, v0);
    f0 = f1 + f3;
    fcc = FCMP(f4, f1, 12);
    v1 = LD32(v1+64);
    f2 = f1 - f3;
    f0 = BITSF(F2I(f0, 1));
    v0 = v1 & t5;
    a0 = v1 & 0xff;
    v0 = v0 >> 16;
    v1 = v1 & t3;
    v0 = v0 + v1;
    a0 = a0 << 16;
    v0 = v0 + a0;
    cnd_ = fcc;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0890723C; }
    goto L_08907238;
L_08907238:;
    f0 = BITSF(F2I(f2, 1));
    goto L_0890723C;
L_0890723C:;
    f1 = BITSF(LD32(t0+16));
    v0 = FBITS(f0);
    fcc = FCMP(f4, f1, 12);
    f0 = f1 + f3;
    ST16(a1+8, v0);
    f2 = f1 - f3;
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08907260; }
    goto L_0890725C;
L_0890725C:;
    f0 = BITSF(F2I(f2, 1));
    goto L_08907260;
L_08907260:;
    a0 = FBITS(f0);
    ST16(a1+12, 0);
    ST16(a1+10, a0);
    cnd_ = t2 != 0;
    a1 = a1 + 16;
    if (cnd_) { goto L_08907184; }
    goto L_08907274;
L_08907274:;
    a1 = (u32)-1;
    a0 = 2;
    func_08904E88(a0, a1);
    goto L_08907280;
L_08907280:;
    a0 = s0 + 0;
    a1 = 64;
    v0 = sceKernelDcacheWritebackRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890728C;
L_0890728C:;
    a1 = 0x800000u;
    t0 = s0 + 0;
    a0 = 5;
    a1 = a1 | 0x11e;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_08A97AE8(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089072A8;
L_089072A8:;
    v0 = LD32(s1-2392);
    v0 = v0 + 4;
    ST32(s1-2392, v0);
    goto L_089072B4;
L_089072B4:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089072C8 */
u64 func_089072C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089072C8:;
    sp = sp - 16;
    s2 = D_08B2C18C - (-15988);
    s0 = a0 + 0;
    a0 = 0 + 0;
    func_08904FB8(a0);
    goto L_089072EC;
L_089072EC:;
    s1 = s2 - 15988;
    a0 = 0 + 0;
    func_08904E30(a0);
    goto L_089072F8;
L_089072F8:;
    v0 = LD32(s1+40);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08907454; }
    goto L_08907304;
L_08907304:;
    a0 = LD32(s0+80);
    func_0890C3C0(a0);
    goto L_0890730C;
L_0890730C:;
    a1 = LD32(s0+84);
    v0 = LD32(s1+28);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD_U8(s1+18); goto L_08907328; }
    goto L_0890731C;
L_0890731C:;
    a0 = s1 + 0;
    func_0890D108(a0, a1);
    goto L_08907324;
L_08907324:;
    v0 = LD_U8(s1+18);
    goto L_08907328;
L_08907328:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08907444; }
    goto L_08907330;
L_08907330:;
    v0 = LD_U8(s1+24);
    goto L_08907334;
L_08907334:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08907434; }
    goto L_0890733C;
L_0890733C:;
    v0 = LD_U8(s0+93);
    goto L_08907340;
L_08907340:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+92); goto L_089073B0; }
    goto L_08907348;
L_08907348:;
    f1 = BITSF(LD32(s0+32));
    f0 = BITSF(LD32(s0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST8(s0+93, 0); goto L_089073AC; }
    goto L_08907360;
L_08907360:;
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+8));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST8(s0+93, 0); goto L_089073AC; }
    goto L_08907378;
L_08907378:;
    f1 = BITSF(LD32(s0+48));
    f0 = BITSF(LD32(s0+56));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST8(s0+93, 0); goto L_089073AC; }
    goto L_08907390;
L_08907390:;
    f1 = BITSF(LD32(s0+16));
    f0 = BITSF(LD32(s0+24));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s0+92); goto L_089073B0; }
    goto L_089073A8;
L_089073A8:;
    ST8(s0+93, 0);
    goto L_089073AC;
L_089073AC:;
    v0 = LD_U8(s0+92);
    goto L_089073B0;
L_089073B0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08907424; }
    goto L_089073B8;
L_089073B8:;
    v0 = LD_U8(s0+93);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08907414; }
    goto L_089073C4;
L_089073C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08906B58(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089073CC;
L_089073CC:;
    s0 = s2 - 15988;
    goto L_089073D0;
L_089073D0:;
    v0 = LD_U8(s0+18);
    s1 = 1;
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089073E8; }
    goto L_089073E0;
L_089073E0:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089073E8;
L_089073E8:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089073FC; }
    goto L_089073F4;
L_089073F4:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_089073FC;
L_089073FC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08907414:;
    a0 = s0 + 0;
    { u64 r_ = func_08906E64(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890741C;
L_0890741C:;
    s0 = s2 - 15988;
    goto L_089073D0;
L_08907424:;
    a0 = s0 + 0;
    { u64 r_ = func_089070A4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890742C;
L_0890742C:;
    s0 = s2 - 15988;
    goto L_089073D0;
L_08907434:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_0890743C;
L_0890743C:;
    v0 = LD_U8(s0+93);
    goto L_08907340;
L_08907444:;
    a1 = 0 + 0;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890744C;
L_0890744C:;
    v0 = LD_U8(s1+24);
    goto L_08907334;
L_08907454:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_0890745C;
L_0890745C:;
    goto L_08907304;
}

/* 08907464 */
void func_08907464(u32 a0)
{
L_08907464:;
    ST32(a0+100, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+44, 0);
    ST32(a0+48, 0);
    ST32(a0+52, 0);
    ST32(a0+56, 0);
    ST32(a0+60, 0);
    ST32(a0+76, 0);
    ST32(a0+80, 0);
    ST32(a0+96, 0);
    return;
}

/* 08907494 */
u64 func_08907494(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08907494:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 5;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089074AC;
L_089074AC:;
    a0 = s0 + 48;
    func_08ABA728(a0, 0, 0, 0);
    goto L_089074B4;
L_089074B4:;
    a0 = s0 + 52;
    func_08ABA768(a0, 0, 0, 0);
    goto L_089074BC;
L_089074BC:;
    a0 = s0 + 76;
    func_08ABA7EC(a0, 0, 0, 0);
    goto L_089074C4;
L_089074C4:;
    a0 = s0 + 56;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_089074CC;
L_089074CC:;
    a0 = s0 + 60;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_089074D4;
L_089074D4:;
    a0 = s0 + 96;
    s0 = s0 + 100;
    func_08AA2994(a0, 0, 0, 0);
    goto L_089074E0;
L_089074E0:;
    a0 = s0 + 0;
    func_08AA2994(a0, 0, 0, 0);
    goto L_089074E8;
L_089074E8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089074F0;
L_089074F0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08907500 */
void func_08907500(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08907500:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 5;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08907518;
L_08907518:;
    a0 = s0 + 48;
    func_08ABA728(a0, 0, 0, 0);
    goto L_08907520;
L_08907520:;
    a0 = s0 + 52;
    func_08ABA768(a0, 0, 0, 0);
    goto L_08907528;
L_08907528:;
    a0 = s0 + 76;
    func_08ABA7EC(a0, 0, 0, 0);
    goto L_08907530;
L_08907530:;
    a0 = s0 + 56;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_08907538;
L_08907538:;
    a0 = s0 + 60;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_08907540;
L_08907540:;
    a0 = s0 + 96;
    func_08AA2994(a0, 0, 0, 0);
    goto L_08907548;
L_08907548:;
    a0 = s0 + 100;
    func_08AA2994(a0, 0, 0, 0);
    goto L_08907550;
L_08907550:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08907558;
L_08907558:;
    ST32(s0+80, 0);
    ST32(s0+44, 0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    sp = sp + 16;
    return;
}

/* 08907578 */
void func_08907578(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr16 = v[16], vr20 = v[20], vr24 = v[24], vr28 = v[28], vr32 = v[32], vr36 = v[36], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr107 = v[107], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[1232] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1232);
L_08907578:;
    sp = sp - 1232;
    v0 = D_08AED17C - (-11908);
    {vr8=0.63661977236f;}
    s1 = D_08B159FC - (23036);
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    s0 = a0 + 0;
    v1 = LD32(s1+23036);
    f0 = BITSF(LD32(v0-11908));
    v0 = D_08AED180 - (-11904);
    f20 = BITSF(LD32(v1+92));
    f23 = BITSF(LD32(v0-11904));
    f22 = BITSF(LD32(v1+108));
    f20 = f20 + f20;
    f22 = f22 + f22;
    f20 = f20 * f0;
    f22 = f22 * f0;
    v0 = FBITS(f20);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr8;float d0=s0*t0;vr4=d0;}
    v0 = D_08AED184 - (-11900);
    a1 = FBITS(f22);
    f13 = BITSF(LD32(v0-11900));
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr12=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {vr0=BITSF(a1);}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float t0=vr12;float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f12 = f0 * f23;
    f0 = func_08A9F5FC(f12, f13);
    goto L_08907634;
L_08907634:;
    {u32 a_=sp+(336);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = D_08AED188 - (-11896);
    {float s0=vr4;float t0=vr8;float d0=s0*t0;vr8=d0;}
    f13 = BITSF(LD32(v0-11896));
    a1 = FBITS(f0);
    {u32 a_=sp+(848);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f21 = f0;
    {float s0=vr8;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    {float s0=vr8;float d0=sinf(s0*1.57079632679f);vr8=d0;}
    {vr0=BITSF(a1);}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f21 = BITSF(FBITS(f21) ^ 0x80000000u);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f12 = f0 * f23;
    f0 = func_08A9F5FC(f12, f13);
    goto L_0890767C;
L_0890767C:;
    a2 = LD32(s1+23036);
    v0 = D_08AED18C - (-11892);
    f8 = BITSF(LD32(v0-11892));
    f1 = BITSF(LD32(a2+16));
    {u32 a_=sp+(368);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f20 = f20 * f8;
    ST32(sp, FBITS(f1));
    a0 = FBITS(f1);
    {u32 a_=sp+(464);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(a2+28));
    f1 = BITSF(FBITS(f20) ^ 0x80000000u);
    {vr16=0.31830988618f;}
    ST32(sp+4, FBITS(f2));
    v1 = FBITS(f2);
    a1 = FBITS(f1);
    {vr4=BITSF(a1);}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f3 = BITSF(LD32(a2+40));
    a1 = FBITS(f21);
    {vr12=BITSF(a1);}
    ST32(sp+8, FBITS(f3));
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {float s0=vr4;float t0=vr16;float d0=s0*t0;vr4=d0;}
    f1 = BITSF(LD32(a2+12));
    f22 = f22 * f8;
    v0 = FBITS(f3);
    ST32(sp+16, FBITS(f1));
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    f2 = BITSF(LD32(a2+24));
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(a0);}
    ST32(sp+20, FBITS(f2));
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    f2 = BITSF(LD32(a2+36));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr8;float d0=s0;vr3=d0;}
    ST32(sp+24, FBITS(f2));
    {t0=FBITS(vr0);}
    f3 = BITSF(t0);
    f2 = BITSF(LD32(a2+20));
    {a1=FBITS(vr3);}
    {t0=FBITS(vr2);}
    ST32(sp+32, FBITS(f2));
    f2 = BITSF(FBITS(f22) ^ 0x80000000u);
    f6 = BITSF(a1);
    f1 = BITSF(LD32(a2+32));
    {a1=FBITS(vr1);}
    {u32 a_=sp+(400);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+36, FBITS(f1));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    {u32 a_=sp+(656);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f7 = BITSF(LD32(a2+44));
    ST32(sp+64, FBITS(f3));
    {vr8=BITSF(a0);}
    {vr9=BITSF(v1);}
    {vr10=BITSF(v0);}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = FBITS(f20);
    {float s0=vr0;float t0=vr16;float d0=s0*t0;vr20=d0;}
    {u32 a_=sp+(752);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+64);
    ST32(sp+76, FBITS(f6));
    {u32 a_=sp+(656);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr12;float t0=vr16;float d0=s0*t0;vr12=d0;}
    ST32(sp+68, a1);
    a3 = s0 + 112;
    {float s0=vr4;float t0=vr16;float d0=s0*t0;vr24=d0;}
    ST32(sp+72, t0);
    {float s0=vr0;float t0=vr16;float d0=s0*t0;vr28=d0;}
    {float s0=vr12;float d0=cosf(s0*1.57079632679f);v[40]=d0;}
    ST32(sp+80, v0);
    {u32 a_=sp+(848);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float t0=vr16;float d0=s0*t0;vr32=d0;}
    v0 = LD32(sp+68);
    ST32(sp+40, FBITS(f7));
    {u32 a_=sp+(944);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr12;float d0=sinf(s0*1.57079632679f);vr12=d0;}
    ST32(sp+84, v0);
    {float s0=vr20;float d0=cosf(s0*1.57079632679f);v[44]=d0;}
    {float s0=vr20;float d0=sinf(s0*1.57079632679f);vr20=d0;}
    v0 = LD32(sp+72);
    {float s0=vr24;float d0=cosf(s0*1.57079632679f);v[48]=d0;}
    {float s0=vr24;float d0=sinf(s0*1.57079632679f);vr24=d0;}
    ST32(sp+88, v0);
    {float s0=vr28;float d0=cosf(s0*1.57079632679f);v[52]=d0;}
    {float s0=vr28;float d0=sinf(s0*1.57079632679f);vr28=d0;}
    v0 = LD32(sp+76);
    {float s0=vr32;float d0=cosf(s0*1.57079632679f);v[56]=d0;}
    {float s0=vr32;float d0=sinf(s0*1.57079632679f);vr32=d0;}
    ST32(sp+92, v0);
    v0 = FBITS(f22);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(112),FBITS(vr120));}
    {ST32(s0+(116),FBITS(vr121));}
    {ST32(s0+(120),FBITS(vr122));}
    {vr0=BITSF(v0);}
    v1 = LD32(a3+4);
    v0 = LD32(s0+112);
    a0 = LD32(a3+8);
    {float s0=vr0;float t0=vr16;float d0=s0*t0;vr36=d0;}
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {a1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    f4 = BITSF(a1);
    f1 = BITSF(t0);
    {v0=FBITS(vr6);}
    f3 = BITSF(v0);
    ST32(sp+52, FBITS(f1));
    {u32 a_=sp+(416);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = a1 + 0;
    ST32(sp+96, a1);
    {u32 a_=sp+(1040);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a1 = FBITS(f1);
    ST32(sp+100, t0);
    {vr4=BITSF(v0);}
    t0 = FBITS(f3);
    ST32(a3+4, FBITS(f1));
    v0 = FBITS(f0);
    {vr5=BITSF(a1);}
    ST32(sp+104, FBITS(f3));
    {vr0=BITSF(v0);}
    {vr6=BITSF(t0);}
    ST32(sp+56, FBITS(f3));
    {float s0=vr0;float t0=vr16;float d0=s0*t0;vr16=d0;}
    {u32 a_=sp+(432);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+48, FBITS(f4));
    {float s0=vr36;float d0=cosf(s0*1.57079632679f);v[60]=d0;}
    {float s0=vr36;float d0=sinf(s0*1.57079632679f);vr36=d0;}
    ST32(s0+112, FBITS(f4));
    {float s0=vr16;float d0=cosf(s0*1.57079632679f);v[64]=d0;}
    {float s0=vr16;float d0=sinf(s0*1.57079632679f);vr16=d0;}
    ST32(a3+8, FBITS(f3));
    a0 = 1;
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    ST32(a3+12, v0);
    {u32 a_=sp+(448);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a3 = s0 + 176;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a1 = LD32(sp+8);
    {vr0=BITSF(v1);}
    {vr1=BITSF(v0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[40];float d0=s0;vr3=d0;}
    {t0=FBITS(vr3);}
    f4 = BITSF(t0);
    {t0=FBITS(vr0);}
    f2 = BITSF(t0);
    {t0=FBITS(vr1);}
    f3 = BITSF(t0);
    ST32(sp+64, FBITS(f2));
    {t0=FBITS(vr2);}
    {u32 a_=sp+(496);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+68, FBITS(f3));
    {vr8=BITSF(v1);}
    {vr9=BITSF(v0);}
    ST32(sp+72, t0);
    {vr10=BITSF(a1);}
    {u32 a_=sp+(480);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(176),FBITS(vr120));}
    {ST32(s0+(180),FBITS(vr121));}
    {ST32(s0+(184),FBITS(vr122));}
    v1 = LD32(a3+4);
    a1 = LD32(a3+8);
    v0 = LD32(s0+176);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {a1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    f3 = BITSF(a1);
    f0 = BITSF(t0);
    {v0=FBITS(vr6);}
    f2 = BITSF(v0);
    ST32(sp+48, a1);
    {u32 a_=sp+(512);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = a1 + 0;
    ST32(sp+52, t0);
    a1 = FBITS(f0);
    t0 = FBITS(f2);
    ST32(sp+56, FBITS(f2));
    {u32 a_=sp+(528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    ST32(sp+100, FBITS(f0));
    {vr5=BITSF(a1);}
    {vr6=BITSF(t0);}
    ST32(sp+104, FBITS(f2));
    ST32(sp+96, FBITS(f3));
    ST32(a3+4, FBITS(f0));
    ST32(a3+8, FBITS(f2));
    ST32(s0+176, FBITS(f3));
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    ST32(a3+12, v0);
    {u32 a_=sp+(544);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = LD32(sp+20);
    a1 = LD32(sp+24);
    v1 = LD32(sp+16);
    {vr0=BITSF(v1);}
    {vr1=BITSF(v0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr20;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[44];float d0=s0;vr3=d0;}
    {t0=FBITS(vr3);}
    f4 = BITSF(t0);
    {t0=FBITS(vr0);}
    f2 = BITSF(t0);
    {t0=FBITS(vr1);}
    f3 = BITSF(t0);
    ST32(sp+64, FBITS(f2));
    {t0=FBITS(vr2);}
    {vr8=BITSF(v1);}
    ST32(sp+68, FBITS(f3));
    {vr9=BITSF(v0);}
    a3 = s0 + 160;
    ST32(sp+72, t0);
    {vr10=BITSF(a1);}
    {u32 a_=sp+(576);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(160),FBITS(vr120));}
    {ST32(s0+(164),FBITS(vr121));}
    {ST32(s0+(168),FBITS(vr122));}
    v1 = LD32(a3+4);
    a1 = LD32(a3+8);
    v0 = LD32(s0+160);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {a1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    f3 = BITSF(a1);
    f0 = BITSF(t0);
    {v0=FBITS(vr6);}
    f2 = BITSF(v0);
    ST32(sp+52, t0);
    {u32 a_=sp+(608);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = a1 + 0;
    ST32(sp+56, FBITS(f2));
    t0 = FBITS(f2);
    ST32(sp+96, FBITS(f3));
    {vr4=BITSF(v0);}
    ST32(sp+100, FBITS(f0));
    ST32(sp+104, FBITS(f2));
    ST32(sp+48, a1);
    a1 = FBITS(f0);
    {vr5=BITSF(a1);}
    ST32(a3+4, FBITS(f0));
    {vr6=BITSF(t0);}
    ST32(a3+8, FBITS(f2));
    ST32(s0+160, FBITS(f3));
    {u32 a_=sp+(624);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    ST32(a3+12, v0);
    {u32 a_=sp+(640);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a3 = s0 + 224;
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    a1 = LD32(sp+24);
    {vr0=BITSF(v1);}
    {vr1=BITSF(v0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr24;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[48];float d0=s0;vr3=d0;}
    {t0=FBITS(vr3);}
    f4 = BITSF(t0);
    {t0=FBITS(vr0);}
    f2 = BITSF(t0);
    {t0=FBITS(vr1);}
    f3 = BITSF(t0);
    ST32(sp+64, FBITS(f2));
    {t0=FBITS(vr2);}
    {vr8=BITSF(v1);}
    ST32(sp+68, FBITS(f3));
    {vr9=BITSF(v0);}
    {u32 a_=sp+(672);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+72, t0);
    {vr10=BITSF(a1);}
    ST32(sp+76, FBITS(f4));
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(224),FBITS(vr120));}
    {ST32(s0+(228),FBITS(vr121));}
    {ST32(s0+(232),FBITS(vr122));}
    v1 = LD32(a3+4);
    a1 = LD32(a3+8);
    v0 = LD32(s0+224);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {a1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    f3 = BITSF(a1);
    f0 = BITSF(t0);
    {v0=FBITS(vr6);}
    f2 = BITSF(v0);
    ST32(sp+48, a1);
    {u32 a_=sp+(704);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = a1 + 0;
    ST32(sp+52, t0);
    a1 = FBITS(f0);
    t0 = FBITS(f2);
    ST32(sp+56, FBITS(f2));
    {vr4=BITSF(v0);}
    {vr5=BITSF(a1);}
    ST32(sp+100, FBITS(f0));
    {vr6=BITSF(t0);}
    {u32 a_=sp+(720);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(a3+4, FBITS(f0));
    {u32 a_=sp+(784);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+104, FBITS(f2));
    ST32(sp+96, FBITS(f3));
    ST32(a3+8, FBITS(f2));
    ST32(s0+224, FBITS(f3));
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    ST32(a3+12, v0);
    {u32 a_=sp+(736);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a3 = s0 + 128;
    f4 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    a1 = FBITS(f4);
    t0 = FBITS(f2);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    v0 = FBITS(f3);
    {vr0=BITSF(a1);}
    {vr1=BITSF(t0);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr28;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[52];float d0=s0;vr3=d0;}
    {a1=FBITS(vr3);}
    {t0=FBITS(vr0);}
    f7 = BITSF(a1);
    ST32(sp+64, t0);
    {v0=FBITS(vr1);}
    {a1=FBITS(vr2);}
    ST32(sp+68, v0);
    t0 = FBITS(f4);
    v0 = FBITS(f2);
    ST32(sp+72, a1);
    {vr8=BITSF(t0);}
    {vr9=BITSF(v0);}
    ST32(sp+76, FBITS(f7));
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    {u32 a_=sp+(768);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a1 = FBITS(f3);
    ST32(sp+80, v0);
    {vr10=BITSF(a1);}
    ST32(sp+84, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(128),FBITS(vr120));}
    {ST32(s0+(132),FBITS(vr121));}
    {ST32(s0+(136),FBITS(vr122));}
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    v1 = LD32(a3+4);
    a1 = LD32(a3+8);
    v0 = LD32(s0+128);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr4);}
    {t0=FBITS(vr6);}
    f3 = BITSF(v0);
    f2 = BITSF(t0);
    {a1=FBITS(vr5);}
    f0 = BITSF(a1);
    ST32(sp+48, FBITS(f4));
    t0 = v0 + 0;
    {u32 a_=sp+(800);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+112, FBITS(f3));
    v0 = FBITS(f0);
    a1 = FBITS(f2);
    ST32(sp+100, FBITS(f0));
    {u32 a_=sp+(816);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr4=BITSF(t0);}
    ST32(sp+104, FBITS(f2));
    {vr5=BITSF(v0);}
    {vr6=BITSF(a1);}
    ST32(sp+116, FBITS(f0));
    {u32 a_=sp+(880);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(a3+4, FBITS(f0));
    ST32(sp+120, FBITS(f2));
    ST32(sp+96, FBITS(f3));
    ST32(a3+8, FBITS(f2));
    ST32(s0+128, FBITS(f3));
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t0=FBITS(vr4);}
    ST32(a3+12, t0);
    {u32 a_=sp+(832);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a3 = s0 + 192;
    f4 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    a1 = FBITS(f2);
    t0 = FBITS(f3);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    {vr0=BITSF(v0);}
    {vr1=BITSF(a1);}
    {vr2=BITSF(t0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr32;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[56];float d0=s0;vr3=d0;}
    {v0=FBITS(vr3);}
    {a1=FBITS(vr0);}
    f7 = BITSF(v0);
    ST32(sp+64, a1);
    {t0=FBITS(vr1);}
    {v0=FBITS(vr2);}
    ST32(sp+68, t0);
    a1 = FBITS(f4);
    t0 = FBITS(f2);
    ST32(sp+72, v0);
    {vr8=BITSF(a1);}
    v0 = FBITS(f3);
    ST32(sp+76, FBITS(f7));
    {vr9=BITSF(t0);}
    {vr10=BITSF(v0);}
    v1 = LD32(sp+68);
    v0 = LD32(sp+64);
    ST32(sp+84, v1);
    ST32(sp+80, v0);
    v1 = LD32(sp+76);
    v0 = LD32(sp+72);
    ST32(sp+92, v1);
    ST32(sp+88, v0);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(192),FBITS(vr120));}
    {ST32(s0+(196),FBITS(vr121));}
    {ST32(s0+(200),FBITS(vr122));}
    ST32(sp+100, FBITS(f2));
    {u32 a_=sp+(864);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+104, FBITS(f3));
    v0 = LD32(s0+192);
    v1 = LD32(a3+4);
    a1 = LD32(a3+8);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {t0=FBITS(vr4);}
    {a1=FBITS(vr6);}
    f3 = BITSF(t0);
    f2 = BITSF(a1);
    {v0=FBITS(vr5);}
    f0 = BITSF(v0);
    ST32(sp+96, FBITS(f4));
    {u32 a_=sp+(896);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a1 = t0 + 0;
    ST32(sp+48, FBITS(f3));
    t0 = FBITS(f0);
    v0 = FBITS(f2);
    ST32(sp+52, FBITS(f0));
    {u32 a_=sp+(912);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr4=BITSF(a1);}
    ST32(sp+56, FBITS(f2));
    {vr5=BITSF(t0);}
    {vr6=BITSF(v0);}
    ST32(sp+116, FBITS(f0));
    {u32 a_=sp+(976);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(a3+4, FBITS(f0));
    ST32(sp+120, FBITS(f2));
    ST32(sp+112, FBITS(f3));
    ST32(a3+8, FBITS(f2));
    ST32(s0+192, FBITS(f3));
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {a1=FBITS(vr4);}
    ST32(a3+12, a1);
    {u32 a_=sp+(928);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a3 = s0 + 144;
    f4 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    t0 = FBITS(f4);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    v0 = FBITS(f2);
    a1 = FBITS(f3);
    {vr0=BITSF(t0);}
    {vr1=BITSF(v0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr36;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[60];float d0=s0;vr3=d0;}
    {v0=FBITS(vr0);}
    {a1=FBITS(vr1);}
    ST32(sp+64, v0);
    {t0=FBITS(vr3);}
    v0 = FBITS(f4);
    ST32(sp+68, a1);
    f7 = BITSF(t0);
    {vr8=BITSF(v0);}
    v1 = LD32(sp+68);
    v0 = LD32(sp+64);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    {t0=FBITS(vr2);}
    ST32(sp+76, FBITS(f7));
    s1 = a3 + 0;
    a1 = FBITS(f2);
    ST32(sp+72, t0);
    {vr9=BITSF(a1);}
    t0 = FBITS(f3);
    ST32(sp+80, v0);
    {vr10=BITSF(t0);}
    a3 = s0 + 208;
    ST32(sp+84, v1);
    {u32 a_=sp+(960);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(144),FBITS(vr120));}
    {ST32(s0+(148),FBITS(vr121));}
    {ST32(s0+(152),FBITS(vr122));}
    ST32(sp+100, FBITS(f2));
    ST32(sp+104, FBITS(f3));
    v0 = LD32(s0+144);
    v1 = LD32(s1+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s1+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {a1=FBITS(vr4);}
    {v0=FBITS(vr6);}
    f3 = BITSF(a1);
    f2 = BITSF(v0);
    {t0=FBITS(vr5);}
    f0 = BITSF(t0);
    ST32(sp+96, FBITS(f4));
    {u32 a_=sp+(992);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = a1 + 0;
    ST32(sp+48, FBITS(f3));
    a1 = FBITS(f0);
    t0 = FBITS(f2);
    ST32(sp+52, FBITS(f0));
    {u32 a_=sp+(1008);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    ST32(sp+56, FBITS(f2));
    {vr5=BITSF(a1);}
    {vr6=BITSF(t0);}
    ST32(sp+116, FBITS(f0));
    ST32(sp+120, FBITS(f2));
    ST32(sp+112, FBITS(f3));
    ST32(s1+4, FBITS(f0));
    ST32(s0+144, FBITS(f3));
    ST32(s1+8, FBITS(f2));
    v1 = LD32(a2+4);
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    v0 = LD32(a2+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    ST32(s1+12, v0);
    {u32 a_=sp+(1024);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    a1 = FBITS(f4);
    t0 = FBITS(f2);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    v0 = FBITS(f3);
    {vr0=BITSF(a1);}
    {vr1=BITSF(t0);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[64];float d0=s0;vr3=d0;}
    {a1=FBITS(vr3);}
    {t0=FBITS(vr0);}
    f7 = BITSF(a1);
    ST32(sp+64, t0);
    {v0=FBITS(vr1);}
    t0 = FBITS(f4);
    ST32(sp+68, v0);
    {a1=FBITS(vr2);}
    {u32 a_=sp+(1072);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    ST32(sp+76, FBITS(f7));
    v0 = FBITS(f2);
    {vr8=BITSF(t0);}
    ST32(sp+72, a1);
    {vr9=BITSF(v0);}
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    {u32 a_=sp+(1056);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+80, v0);
    a1 = FBITS(f3);
    {vr10=BITSF(a1);}
    ST32(sp+84, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
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
    {ST32(s0+(208),FBITS(vr120));}
    {ST32(s0+(212),FBITS(vr121));}
    {ST32(s0+(216),FBITS(vr122));}
    ST32(sp+100, FBITS(f2));
    ST32(sp+104, FBITS(f3));
    v1 = LD32(a3+4);
    a1 = LD32(a3+8);
    v0 = LD32(s0+208);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr4);}
    {t0=FBITS(vr6);}
    f2 = BITSF(v0);
    f3 = BITSF(t0);
    {a1=FBITS(vr5);}
    f0 = BITSF(a1);
    ST32(sp+96, FBITS(f4));
    a1 = FBITS(f3);
    ST32(sp+52, FBITS(f0));
    {u32 a_=sp+(1088);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    t0 = v0 + 0;
    ST32(sp+48, FBITS(f2));
    v0 = FBITS(f0);
    {u32 a_=sp+(1104);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+56, FBITS(f3));
    {vr4=BITSF(t0);}
    {vr5=BITSF(v0);}
    ST32(sp+116, FBITS(f0));
    {vr6=BITSF(a1);}
    ST32(sp+120, FBITS(f3));
    ST32(sp+112, FBITS(f2));
    ST32(a3+4, FBITS(f0));
    ST32(s0+208, FBITS(f2));
    ST32(a3+8, FBITS(f3));
    v0 = LD32(a2);
    a1 = LD32(a2+8);
    v1 = LD32(a2+4);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t0=FBITS(vr4);}
    ST32(a3+12, t0);
    func_08A9A13C(a0);
    goto L_08908478;
L_08908478:;
    a0 = sp + 128;
    func_08A9A230(a0);
    goto L_08908480;
L_08908480:;
    a0 = 0 + 0;
    func_08A9A13C(a0);
    goto L_08908488;
L_08908488:;
    a0 = sp + 192;
    func_08A9A230(a0);
    goto L_08908490;
L_08908490:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_08908498;
L_08908498:;
    f0 = BITSF(LD32(sp+212));
    f4 = BITSF(LD32(sp+128));
    f17 = BITSF(LD32(sp+192));
    f18 = BITSF(LD32(sp+196));
    f16 = BITSF(LD32(sp+204));
    ST32(sp+1120, FBITS(f0));
    f7 = f4 * f17;
    f12 = f4 * f16;
    f2 = BITSF(LD32(sp+200));
    f6 = BITSF(LD32(sp+216));
    f26 = BITSF(LD32(sp+208));
    f29 = BITSF(LD32(sp+220));
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+148));
    ST32(sp+1124, FBITS(f2));
    f8 = f4 * f18;
    f4 = f4 * f2;
    ST32(sp+1128, FBITS(f6));
    f24 = f1 * f29;
    f22 = f1 * f26;
    f10 = BITSF(LD32(sp+1120));
    f2 = BITSF(LD32(sp+1120));
    f5 = BITSF(LD32(sp+144));
    f13 = BITSF(LD32(sp+160));
    f23 = BITSF(LD32(sp+164));
    f21 = f1 * f10;
    f15 = f0 * f2;
    f1 = f1 * f6;
    f2 = BITSF(LD32(sp+1128));
    f6 = BITSF(LD32(sp+1124));
    f25 = f0 * f29;
    f19 = f0 * f26;
    f14 = f5 * f16;
    f9 = f5 * f17;
    f10 = f5 * f18;
    f0 = f0 * f2;
    f11 = f13 * f17;
    f5 = f5 * f6;
    f6 = f23 * f26;
    f3 = BITSF(LD32(sp+136));
    f27 = BITSF(LD32(sp+224));
    f2 = BITSF(LD32(sp+152));
    f9 = f9 + f19;
    f5 = f5 + f0;
    f19 = BITSF(LD32(sp+228));
    f0 = BITSF(LD32(sp+232));
    f11 = f11 + f6;
    f6 = BITSF(LD32(sp+236));
    f10 = f10 + f15;
    f15 = f3 * f19;
    f31 = f3 * f6;
    f28 = f2 * f6;
    f6 = f3 * f27;
    f3 = f3 * f0;
    f0 = BITSF(LD32(sp+228));
    f7 = f7 + f22;
    f20 = BITSF(LD32(sp+168));
    f22 = f2 * f0;
    f0 = BITSF(LD32(sp+232));
    f19 = f2 * f27;
    f30 = f20 * f27;
    f2 = f2 * f0;
    f4 = f4 + f1;
    f0 = BITSF(LD32(sp+156));
    f1 = BITSF(LD32(sp+140));
    f12 = f12 + f24;
    f5 = f5 + f2;
    f24 = BITSF(LD32(sp+240));
    f2 = BITSF(LD32(sp+252));
    f7 = f7 + f6;
    f10 = f10 + f22;
    f11 = f11 + f30;
    f22 = f1 * f2;
    f30 = f0 * f2;
    f2 = f1 * f24;
    f8 = f8 + f21;
    f6 = BITSF(LD32(sp+248));
    f14 = f14 + f25;
    f7 = f7 + f2;
    f25 = BITSF(LD32(sp+244));
    f9 = f9 + f19;
    f19 = BITSF(LD32(sp+248));
    f8 = f8 + f15;
    f4 = f4 + f3;
    f15 = f0 * f25;
    f3 = f1 * f25;
    f1 = f1 * f6;
    f6 = f0 * f24;
    f0 = f0 * f19;
    f21 = BITSF(LD32(sp+172));
    ST32(s0+384, FBITS(f7));
    f8 = f8 + f3;
    f5 = f5 + f0;
    f2 = BITSF(LD32(sp+1120));
    f3 = f13 * f18;
    f4 = f4 + f1;
    f0 = f23 * f2;
    f1 = f23 * f29;
    f9 = f9 + f6;
    f6 = f13 * f16;
    f2 = BITSF(LD32(sp+228));
    f19 = f21 * f24;
    f10 = f10 + f15;
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+236));
    f6 = f6 + f1;
    f7 = BITSF(LD32(sp+1124));
    f1 = f20 * f0;
    f0 = f20 * f2;
    f11 = f11 + f19;
    ST32(s0+404, FBITS(f10));
    f13 = f13 * f7;
    f3 = f3 + f0;
    f19 = BITSF(LD32(sp+1128));
    f10 = BITSF(LD32(sp+252));
    f0 = BITSF(LD32(sp+180));
    f7 = BITSF(LD32(sp+232));
    f23 = f23 * f19;
    ST32(s0+408, FBITS(f5));
    f5 = f21 * f10;
    f20 = f20 * f7;
    f19 = BITSF(LD32(sp+248));
    f10 = BITSF(LD32(sp+1120));
    ST32(s0+392, FBITS(f4));
    f6 = f6 + f1;
    f4 = f21 * f25;
    f1 = BITSF(LD32(sp+176));
    f7 = f0 * f10;
    f21 = f21 * f19;
    f10 = BITSF(LD32(sp+1128));
    f19 = BITSF(LD32(sp+1124));
    ST32(s0+388, FBITS(f8));
    f16 = f1 * f16;
    f8 = f0 * f26;
    ST32(s0+400, FBITS(f9));
    f17 = f1 * f17;
    f9 = f0 * f29;
    f18 = f1 * f18;
    f0 = f0 * f10;
    f1 = f1 * f19;
    f2 = BITSF(LD32(sp+184));
    f19 = BITSF(LD32(sp+236));
    f18 = f18 + f7;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+228));
    f7 = BITSF(LD32(sp+232));
    f19 = f2 * f19;
    f0 = f2 * f0;
    f27 = f2 * f27;
    f16 = f16 + f9;
    f2 = f2 * f7;
    ST32(sp+1132, FBITS(f0));
    f13 = f13 + f23;
    f17 = f17 + f8;
    f0 = BITSF(LD32(sp+188));
    f10 = BITSF(LD32(sp+1132));
    ST32(sp+1136, FBITS(f19));
    f1 = f1 + f2;
    f16 = f16 + f19;
    f2 = BITSF(LD32(sp+248));
    f19 = BITSF(LD32(sp+252));
    f24 = f0 * f24;
    f25 = f0 * f25;
    f19 = f0 * f19;
    f12 = f12 + f31;
    f0 = f0 * f2;
    f14 = f14 + f28;
    f13 = f13 + f20;
    f17 = f17 + f27;
    f18 = f18 + f10;
    f12 = f12 + f22;
    f14 = f14 + f30;
    f3 = f3 + f4;
    f13 = f13 + f21;
    f6 = f6 + f5;
    f17 = f17 + f24;
    f18 = f18 + f25;
    f1 = f1 + f0;
    f16 = f16 + f19;
    ST32(s0+396, FBITS(f12));
    v0 = s0 + 112;
    v1 = s0 + 240;
    ST32(s0+412, FBITS(f14));
    a0 = s0 + 128;
    a1 = s0 + 256;
    ST32(s0+416, FBITS(f11));
    a3 = s0 + 272;
    t0 = s0 + 160;
    ST32(s0+420, FBITS(f3));
    t1 = s0 + 288;
    a2 = s0 + 320;
    ST32(sp+1140, FBITS(f19));
    ST32(s0+424, FBITS(f13));
    ST32(s0+428, FBITS(f6));
    ST32(s0+432, FBITS(f17));
    ST32(s0+436, FBITS(f18));
    ST32(s0+444, FBITS(f16));
    ST32(s0+440, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+112));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s0+128));
    ST32(v1+8, FBITS(f0));
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(s0+124));
    ST32(s0+240, FBITS(f2));
    ST32(s0+252, FBITS(f0));
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(s0+144));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    ST32(s0+256, FBITS(f3));
    ST32(a1+8, FBITS(f2));
    ST32(a1+4, FBITS(f0));
    f1 = BITSF(LD32(s0+140));
    ST32(sp+116, FBITS(f0));
    ST32(s0+268, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s1+8));
    ST32(s0+272, FBITS(f4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(a3+4, FBITS(f0));
    ST32(a3+8, FBITS(f1));
    f2 = BITSF(LD32(s0+156));
    f0 = BITSF(LD32(s0+160));
    ST32(s0+284, FBITS(f2));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(LD32(t0+8));
    f2 = BITSF(LD32(t0+4));
    ST32(s0+288, FBITS(f0));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(t1+8, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    f0 = BITSF(LD32(s0+384));
    f1 = BITSF(LD32(s0+388));
    f2 = BITSF(LD32(s0+392));
    f3 = BITSF(LD32(s0+396));
    ST32(sp+320, FBITS(f0));
    ST32(sp+324, FBITS(f1));
    ST32(sp+328, FBITS(f2));
    ST32(sp+332, FBITS(f3));
    f0 = BITSF(LD32(s0+172));
    f1 = BITSF(LD32(s0+400));
    f5 = BITSF(LD32(s0+408));
    ST32(s0+300, FBITS(f0));
    f6 = BITSF(LD32(s0+412));
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(s0+404));
    ST32(sp+320, FBITS(f1));
    f9 = BITSF(LD32(s0+432));
    f10 = BITSF(LD32(s0+436));
    f1 = BITSF(LD32(s0+424));
    f8 = BITSF(LD32(s0+440));
    f0 = BITSF(LD32(s0+428));
    f7 = BITSF(LD32(s0+444));
    f3 = BITSF(LD32(s0+416));
    f4 = BITSF(LD32(s0+420));
    ST32(sp+324, FBITS(f2));
    {u32 a_=s0+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+328, FBITS(f5));
    ST32(sp+332, FBITS(f6));
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+320, FBITS(f3));
    {u32 a_=a2+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+324, FBITS(f4));
    ST32(sp+328, FBITS(f1));
    ST32(sp+332, FBITS(f0));
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+320, FBITS(f9));
    {u32 a_=a2+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+324, FBITS(f10));
    ST32(sp+328, FBITS(f8));
    ST32(sp+332, FBITS(f7));
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a2+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    sp = sp + 1232;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[16]=vr16;v[20]=vr20;v[24]=vr24;v[28]=vr28;v[32]=vr32;v[36]=vr36;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[16]=vr16;v[20]=vr20;v[24]=vr24;v[28]=vr28;v[32]=vr32;v[36]=vr36;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 0890894C */
void func_0890894C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0890894C:;
    sp = sp - 64;
    s4 = a1 & 0xff;
    s2 = 0 + 0;
    v0 = LD32(a0+44);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08908AA0; }
    goto L_08908984;
L_08908984:;
    s6 = D_08B2C0FC - (-16132);
    s5 = a0 + 112;
    s3 = 0 + 0;
    goto L_08908990;
L_08908990:;
    cnd_ = s4 == 0;
    v1 = s2 << 2;
    if (cnd_) { goto L_08908AF4; }
    goto L_08908998;
L_08908998:;
    v0 = LD32(s0+100);
    goto L_0890899C;
L_0890899C:;
    a1 = s2 + 0;
    a0 = s6 - 16132;
    s1 = v0 + v1;
    v0 = func_088CED80(a0, a1);
    goto L_089089AC;
L_089089AC:;
    v1 = LD32(v0+4);
    v0 = v0 + 4;
    a3 = LD32(s6-16132);
    ST32(sp, v1);
    a0 = sp + 0;
    a3 = a3 + s3;
    v1 = LD32(v0+4);
    t0 = a3 + 28;
    a1 = s5 + 0;
    ST32(sp+4, v1);
    v1 = LD32(v0+8);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+8, v1);
    a2 = LD32(v0+12);
    ST32(sp+12, a2);
    v1 = LD32(v0+16);
    ST32(sp+16, v1);
    a2 = LD32(v0+20);
    ST32(sp+20, a2);
    f1 = BITSF(LD32(a3+28));
    f0 = f0 + f1;
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(a3+28));
    f0 = f0 + f1;
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(t0+4));
    f0 = f0 + f1;
    ST32(sp+12, FBITS(f0));
    f3 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(sp+8));
    f0 = f0 + f1;
    ST32(sp+8, FBITS(f0));
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(sp+20));
    f0 = f0 + f1;
    ST32(sp+20, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(t0+8));
    f0 = f0 + f1;
    cnd_ = s4 == 0;
    ST32(sp+16, FBITS(f0));
    if (cnd_) { goto L_08908A68; }
    goto L_08908A60;
L_08908A60:;
    ST32(sp+8, FBITS(f3));
    ST32(sp+12, FBITS(f2));
    goto L_08908A68;
L_08908A68:;
    v0 = LD32(s0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST32(s1, 0);
    v0 = func_0890B9D4(a0, a1);
    goto L_08908A7C;
L_08908A7C:;
    a0 = sp + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 176;
    if (cnd_) { goto L_08908AC8; }
    goto L_08908A88;
L_08908A88:;
    ST32(s1, v0);
    goto L_08908A8C;
L_08908A8C:;
    v0 = LD32(s0+44);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s3 = s3 + 40;
    if (cnd_) { goto L_08908990; }
    goto L_08908AA0;
L_08908AA0:;
    sp = sp + 64;
    return;
L_08908AC8:;
    v0 = func_0890BABC(a0, a1);
    goto L_08908AD0;
L_08908AD0:;
    v1 = LD32(s1);
    v1 = v1 | v0;
    v0 = v1 & 0xf0;
    cnd_ = v0 == 0;
    ST32(s1, v1);
    if (cnd_) { goto L_08908A8C; }
    goto L_08908AE4;
L_08908AE4:;
    v0 = LD32(s0+4);
    v0 = v0 + 1;
    ST32(s0+4, v0);
    goto L_08908A8C;
L_08908AF4:;
    v0 = LD32(s0+96);
    goto L_0890899C;
}

/* 08908AFC */
void func_08908AFC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_08908AFC:;
    a2 = D_08BD3744 - (14148);
    a0 = D_08BD3740 - (14144);
    a1 = LD32(a2+14148);
    v0 = LD32(a0+14144);
    ST32(a0+14144, 0);
    v1 = v0 + 0;
    v0 = a1 < v0;
    if (v0 == 0) v1 = a1;
    ST32(a2+14148, v1);
    return;
}

/* 08908B24 */
void func_08908B24(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_08908B24:;
    sp = sp - 208;
    s1 = a0 + 0;
    v0 = LD32(a0+36);
    cnd_ = v0 != 0;
    ST8(a0+84, 0);
    if (cnd_) { goto L_08908BB0; }
    goto L_08908B70;
L_08908B70:;
    goto L_08908B74;
L_08908B74:;
    sp = sp + 208;
    return;
L_08908BB0:;
    s2 = 1;
    func_089034FC();
    goto L_08908BB8;
L_08908BB8:;
    a0 = 1;
    func_08904E30(a0);
    goto L_08908BC0;
L_08908BC0:;
    a0 = 2;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08908BCC;
L_08908BCC:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    a0 = 1;
    func_08904FB8(a0);
    goto L_08908BDC;
L_08908BDC:;
    v0 = LD_U8(s0+18);
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08908BF0; }
    goto L_08908BE8;
L_08908BE8:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08908BF0;
L_08908BF0:;
    v0 = LD32(s0+28);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089092EC; }
    goto L_08908BFC;
L_08908BFC:;
    v0 = LD_U8(s0+24);
    goto L_08908C00;
L_08908C00:;
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08908C10; }
    goto L_08908C08;
L_08908C08:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08908C10;
L_08908C10:;
    v0 = LD32(s0+40);
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08908C24; }
    goto L_08908C1C;
L_08908C1C:;
    a1 = 1;
    func_0890D298(a0, a1);
    goto L_08908C24;
L_08908C24:;
    a1 = D_08B162B0 - (25264);
    v0 = LD32(a1+25264);
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = (u32)-1;
    if (cnd_) { goto L_08908C40; }
    goto L_08908C38;
L_08908C38:;
    ST32(a1+25264, v1);
    func_08A988C4(a0);
    goto L_08908C40;
L_08908C40:;
    v0 = D_08B2326F - (12911);
    v1 = LD_U8(v0+12911);
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_08908C54; }
    goto L_08908C50;
L_08908C50:;
    v0 = 4;
    goto L_08908C54;
L_08908C54:;
    ST32(s1+88, v0);
    v0 = D_08B285A0 - (-31328);
    v1 = D_08AED194 - (-11884);
    f1 = BITSF(LD32(v0-31328));
    v0 = D_08AED190 - (-11888);
    f0 = BITSF(LD32(v0-11888));
    f2 = BITSF(LD32(s1+80));
    f3 = BITSF(LD32(v1-11884));
    f1 = f1 * f0;
    f0 = f2 + f1;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    ST32(s1+80, FBITS(f0));
    if (cnd_) { goto L_08908C94; }
    goto L_08908C8C;
L_08908C8C:;
    f0 = f0 - f3;
    ST32(s1+80, FBITS(f0));
    goto L_08908C94;
L_08908C94:;
    v0 = D_08AED198 - (-11880);
    a0 = D_08B162BC - (25276);
    f1 = BITSF(LD32(v0-11880));
    f0 = BITSF(LD32(a0+25276));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = a0 + 0;
    if (cnd_) { goto L_08908CCC; }
    goto L_08908CB4;
L_08908CB4:;
    a3 = D_08B162C0 - (25280);
    f0 = BITSF(LD32(a3+25280));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+44); goto L_08908CE8; }
    goto L_08908CCC;
L_08908CCC:;
    ST32(v0+25276, FBITS(f1));
    f12 = f1;
    v0 = D_08B162C0 - (25280);
    f13 = f1;
    ST32(v0+25280, FBITS(f1));
    func_08A98E60(f12, f13);
    goto L_08908CE4;
L_08908CE4:;
    a0 = LD32(s1+44);
    goto L_08908CE8;
L_08908CE8:;
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08908D40; }
    goto L_08908CF0;
L_08908CF0:;
    ST32(sp+128, 0);
    fp = 0 + 0;
    goto L_08908CF8;
L_08908CF8:;
    a3 = D_08B2C0FC - (-16132);
    a3 = a3 - 16132;
    v1 = LD32(a3+16);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08908D1C; }
    goto L_08908D0C;
L_08908D0C:;
    v1 = v1 + s4;
    v0 = LD_U8(v1);
    v0 = v0 & 0xf;
    v0 = 0 < v0;
    goto L_08908D1C;
L_08908D1C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890900C; }
    goto L_08908D24;
L_08908D24:;
    v1 = LD32(sp+128);
    s4 = s4 + 1;
    v0 = s4 < a0;
    v1 = v1 + 80;
    fp = fp + 40;
    cnd_ = v0 != 0;
    ST32(sp+128, v1);
    if (cnd_) { goto L_08908CF8; }
    goto L_08908D40;
L_08908D40:;
    a1 = D_08B162B8 - (25272);
    v1 = LD32(a1+25272);
    v0 = D_08BBF704 - (-2300);
    cnd_ = v1 != 0;
    ST32(v0-2300, 0);
    if (cnd_) { goto L_08908FF8; }
    goto L_08908D54;
L_08908D54:;
    a1 = D_08B15A04 - (23044);
    goto L_08908D58;
L_08908D58:;
    v0 = LD32(a1+23044);
    cnd_ = v0 == 0;
    s0 = D_08B159FC - (23036);
    if (cnd_) { goto L_08908D90; }
    goto L_08908D64;
L_08908D64:;
    v0 = D_08B22E88 - (11912);
    a0 = 1;
    v1 = D_08B230B0 - (12464);
    v0 = v0 + 11912;
    ST8(v1+12464, a0);
    v1 = D_08B15A0C - (23052);
    ST32(s0+23036, v0);
    v0 = D_08B230A8 - (12456);
    ST32(a1+23044, 0);
    ST8(v0+12456, a0);
    ST8(v1+23052, a0);
    goto L_08908D90;
L_08908D90:;
    v0 = LD32(s0+23036);
    v1 = LD_U8(v0+132);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08908EFC; }
    goto L_08908DA0;
L_08908DA0:;
    v0 = D_08B162BC - (25276);
    goto L_08908DA4;
L_08908DA4:;
    v1 = D_08AED194 - (-11884);
    f0 = BITSF(LD32(v0+25276));
    f1 = BITSF(LD32(v1-11884));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a0 = D_08B162C0 - (25280);
    if (cnd_) { goto L_08908DD4; }
    goto L_08908DC0;
L_08908DC0:;
    f0 = BITSF(LD32(a0+25280));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = D_08B162C4 - (25284);
    if (cnd_) { goto L_08908DF4; }
    goto L_08908DD4;
L_08908DD4:;
    v0 = D_08B162BC - (25276);
    a3 = D_08B162C0 - (25280);
    f12 = f1;
    f13 = f1;
    ST32(v0+25276, FBITS(f1));
    ST32(a3+25280, FBITS(f1));
    func_08A98E60(f12, f13);
    goto L_08908DF0;
L_08908DF0:;
    v0 = D_08B162C4 - (25284);
    goto L_08908DF4;
L_08908DF4:;
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08908E20; }
    goto L_08908E0C;
L_08908E0C:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = D_08B2C18C - (-15988); goto L_08908E38; }
    goto L_08908E20;
L_08908E20:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    f13 = f12;
    ST32(v1+25288, FBITS(f12));
    func_08A98E9C(f12, f13);
    goto L_08908E34;
L_08908E34:;
    v0 = D_08B2C18C - (-15988);
    goto L_08908E38;
L_08908E38:;
    s0 = v0 - 15988;
    v0 = LD_U8(s0+24);
    s1 = 1;
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08908E54; }
    goto L_08908E4C;
L_08908E4C:;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_08908E54;
L_08908E54:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == s1;
    v1 = 10;
    if (cnd_) { goto L_08908EE8; }
    goto L_08908E60;
L_08908E60:;
    ST32(s0+44, v1);
    goto L_08908E64;
L_08908E64:;
    a0 = s0 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_08908E70;
L_08908E70:;
    v1 = D_08B2C18C - (-15988);
    goto L_08908E74;
L_08908E74:;
    s0 = v1 - 15988;
    v1 = LD32(s0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08908E94; }
    goto L_08908E88;
L_08908E88:;
    a1 = 1;
    func_0890D108(a0, a1);
    goto L_08908E90;
L_08908E90:;
    v1 = LD32(s0+28);
    goto L_08908E94;
L_08908E94:;
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08908ED8; }
    goto L_08908E9C;
L_08908E9C:;
    func_08903530();
    goto L_08908EA4;
L_08908EA4:;
    v1 = D_08B162CC - (25292);
    v0 = D_08AED1A0 - (-11872);
    f1 = BITSF(LD32(v0-11872));
    f0 = BITSF(LD32(v1+25292));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_08908B74; }
    goto L_08908EC4;
L_08908EC4:;
    f12 = f1;
    ST32(v1+25292, FBITS(f1));
    func_08A98CBC(f12);
    goto L_08908ED0;
L_08908ED0:;
    goto L_08908B74;
L_08908ED8:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08908EE0;
L_08908EE0:;
    goto L_08908E9C;
L_08908EE8:;
    v0 = LD32(s0+44);
    cnd_ = v0 != v1;
    if (cnd_) { ST32(s0+44, v1); goto L_08908E64; }
    goto L_08908EF4;
L_08908EF4:;
    v1 = D_08B2C18C - (-15988);
    goto L_08908E74;
L_08908EFC:;
    func_089014F0();
    goto L_08908F04;
L_08908F04:;
    a0 = s1 + 0;
    func_08907578(a0);
    goto L_08908F0C;
L_08908F0C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890894C(a0, a1);
    goto L_08908F18;
L_08908F18:;
    a0 = LD32(s0+23036);
    v0 = D_08BD3760 - (14176);
    a1 = v0 + 14176;
    f0 = BITSF(LD32(a0+20));
    a2 = LD32(s1+36);
    {u32 a_=sp+(96);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(v0+14176, FBITS(f0));
    a3 = FBITS(f0);
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(a0+32));
    {v[4]=BITSF(a3);}
    s0 = 0 + 0;
    ST32(a1+4, FBITS(f0));
    v0 = FBITS(f0);
    {v[5]=BITSF(v0);}
    f0 = BITSF(LD32(a0+44));
    v0 = LD32(a0);
    {v[0]=BITSF(v0);}
    ST32(a1+8, FBITS(f0));
    v1 = FBITS(f0);
    {v[6]=BITSF(v1);}
    v0 = LD32(a0+8);
    v1 = LD32(a0+4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    v0 = D_08BD3750 - (14160);
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    ST32(v0+14160, a0);
    {a3=FBITS(v[4]);}
    cnd_ = a2 != 0;
    ST32(a1+12, a3);
    if (cnd_) { goto L_08908FCC; }
    goto L_08908F94;
L_08908F94:;
    v0 = LD32(s1+40);
    goto L_08908F98;
L_08908F98:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08908DA0; }
    goto L_08908FA0;
L_08908FA0:;
    a1 = a2 + s0;
    a0 = s1 + 0;
    a2 = 1;
    func_089092FC(a0, a1, a2);
    goto L_08908FB0;
L_08908FB0:;
    v0 = LD32(s1+40);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    v0 = D_08B162BC - (25276);
    if (cnd_) { goto L_08908DA4; }
    goto L_08908FC4;
L_08908FC4:;
    a2 = LD32(s1+36);
    goto L_08908FA0;
L_08908FCC:;
    a1 = s0 + 0;
    goto L_08908FD0;
L_08908FD0:;
    a2 = 0 + 0;
    a0 = s1 + 0;
    func_089092FC(a0, a1, a2);
    goto L_08908FDC;
L_08908FDC:;
    a2 = LD32(s1+36);
    s0 = s0 + 1;
    v0 = s0 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08908FD0; }
    goto L_08908FF0;
L_08908FF0:;
    v0 = LD32(s1+40);
    goto L_08908F98;
L_08908FF8:;
    a0 = 0 + 0;
    ST32(a1+25272, 0);
    func_08A98808(a0);
    goto L_08909004;
L_08909004:;
    a1 = D_08B15A04 - (23044);
    goto L_08908D58;
L_0890900C:;
    a0 = D_08B2C0FC - (-16132);
    a0 = a0 - 16132;
    a1 = s4 + 0;
    v0 = func_088CED80(a0, a1);
    goto L_0890901C;
L_0890901C:;
    v1 = LD32(v0+4);
    v0 = v0 + 4;
    a0 = D_08B2C0FC - (-16132);
    ST32(sp, v1);
    a1 = s4 + 0;
    s6 = 0 + 0;
    v1 = LD32(v0+4);
    a3 = LD32(a0-16132);
    a0 = D_08B2C0FC - (-16132);
    a0 = a0 - 16132;
    ST32(sp+4, v1);
    v1 = s4 << 2;
    a3 = a3 + fp;
    a2 = LD32(v0+8);
    ST32(sp+88, v1);
    t0 = a3 + 28;
    ST32(sp+8, a2);
    v1 = LD32(v0+12);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+12, v1);
    a2 = LD32(v0+16);
    ST32(sp+16, a2);
    v1 = LD32(v0+20);
    ST32(sp+20, v1);
    f1 = BITSF(LD32(a3+28));
    f0 = f0 + f1;
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(a3+28));
    f0 = f0 + f1;
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(t0+4));
    f0 = f0 + f1;
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(t0+4));
    f0 = f0 + f1;
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(t0+8));
    f0 = f0 + f1;
    ST32(sp+20, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(t0+8));
    f0 = f0 + f1;
    ST32(sp+16, FBITS(f0));
    v0 = func_088CED9C(a0, a1);
    goto L_089090DC;
L_089090DC:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 0 + 0;
    a3 = 1;
    t0 = 4;
    t1 = 1;
    func_0889D764(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089090F8;
L_089090F8:;
    v0 = D_08B2A8C8 - (-22328);
    s3 = LD32(v0-22328);
    cnd_ = s3 == 0;
    v1 = D_08AED19C - (-11876);
    if (cnd_) { goto L_08909294; }
    goto L_08909108;
L_08909108:;
    v0 = D_08AED194 - (-11884);
    f22 = BITSF(LD32(v1-11876));
    s5 = LD32(sp+128);
    f23 = BITSF(LD32(v0-11884));
    v0 = D_08B2A8CC - (-22324);
    s0 = v0 - 22324;
    s7 = D_08B2A9EC - (-22036);
    s2 = 0 + 0;
    goto L_08909128;
L_08909128:;
    v1 = LD32(s0);
    v0 = LD32(v1+56);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    f1 = BITSF(LD32(v1+16));
    if (cnd_) { goto L_08909144; }
    goto L_0890913C;
L_0890913C:;
    f0 = BITSF(LD32(s7-22036));
    f1 = f1 * f0;
    goto L_08909144;
L_08909144:;
    f20 = BITSF(0);
    a0 = D_08AED194 - (-11884);
    fcc = FCMP(f1, f20, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(a0-11884));
    if (cnd_) { goto L_08909170; }
    goto L_0890915C;
L_0890915C:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f20 = f0;
    if (cnd_) { goto L_08909170; }
    goto L_0890916C;
L_0890916C:;
    f20 = f1;
    goto L_08909170;
L_08909170:;
    v0 = LD32(v1+56);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    f1 = BITSF(LD32(v1+20));
    if (cnd_) { goto L_08909188; }
    goto L_08909180;
L_08909180:;
    f0 = BITSF(LD32(s7-22036));
    f1 = f1 * f0;
    goto L_08909188;
L_08909188:;
    a0 = sp + 64;
    a1 = sp + 68;
    a2 = sp + 72;
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, 0);
    ST32(sp+72, FBITS(f23));
    f0 = func_0890BD64(a0, a1, a2);
    goto L_089091A4;
L_089091A4:;
    v1 = LD32(s0);
    v0 = LD32(v1+56);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    f21 = f0;
    if (cnd_) { goto L_089092E4; }
    goto L_089091B8;
L_089091B8:;
    f1 = BITSF(LD32(v1+24));
    f0 = BITSF(LD32(s7-22036));
    f1 = f1 * f0;
    goto L_089091C4;
L_089091C4:;
    a0 = sp + 76;
    a1 = sp + 80;
    a2 = sp + 84;
    ST32(sp+76, FBITS(f1));
    s6 = s6 + 1;
    ST32(sp+80, 0);
    ST32(sp+84, FBITS(f23));
    f0 = func_0890BD64(a0, a1, a2);
    goto L_089091E4;
L_089091E4:;
    f0 = f0 * f22;
    a0 = LD32(s0);
    f3 = f20 * f22;
    f1 = f21 * f22;
    f4 = BITSF(LD32(a0));
    f5 = BITSF(LD32(a0+4));
    f6 = BITSF(LD32(a0+8));
    ST32(sp+32, FBITS(f4));
    f2 = BITSF(F2I(f3, 1));
    a2 = s2 + s5;
    ST32(sp+48, FBITS(f4));
    f4 = BITSF(F2I(f0, 1));
    f3 = BITSF(F2I(f1, 1));
    ST32(sp+52, FBITS(f5));
    v0 = 0xff000000u;
    s0 = s0 + 8;
    ST32(sp+56, FBITS(f6));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    f0 = BITSF(LD32(a0+12));
    a3 = LD32(s1+76);
    a0 = FBITS(f4);
    f0 = f23 / f0;
    a2 = a2 + a3;
    a1 = s5 + a3;
    a3 = FBITS(f2);
    a1 = s2 + a1;
    s2 = s2 + 20;
    v0 = a3 + v0;
    a3 = FBITS(f3);
    v1 = a3 << 8;
    v0 = v0 + v1;
    v1 = a0 << 16;
    v0 = v0 + v1;
    ST32(a1+12, v0);
    a0 = s6 < s3;
    ST32(a1+16, FBITS(f0));
    v0 = LD32(sp+48);
    ST32(a2, v0);
    v1 = LD32(sp+52);
    ST32(a2+4, v1);
    v0 = LD32(sp+56);
    cnd_ = a0 != 0;
    ST32(a2+8, v0);
    if (cnd_) { goto L_08909128; }
    goto L_08909294;
L_08909294:;
    v0 = s3 < 0x4u;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089092DC; }
    goto L_089092A0;
L_089092A0:;
    v0 = LD32(sp+88);
    a3 = LD32(s1+76);
    v1 = v0 + s4;
    v0 = s3 << 2;
    v0 = v0 + s3;
    v1 = v1 << 4;
    v1 = v1 + a3;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = v0 + 12;
    goto L_089092C8;
L_089092C8:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 20;
    if (cnd_) { goto L_089092C8; }
    goto L_089092DC;
L_089092DC:;
    a0 = LD32(s1+44);
    goto L_08908D24;
L_089092E4:;
    f1 = BITSF(LD32(v1+24));
    goto L_089091C4;
L_089092EC:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_089092F4;
L_089092F4:;
    v0 = LD_U8(s0+24);
    goto L_08908C00;
}

/* 089092FC */
void func_089092FC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089092FC:;
    sp = sp - 96;
    v0 = a1 << 3;
    v0 = v0 - a1;
    s3 = a2 ^ 0x1;
    v0 = v0 << 3;
    s4 = a2 + 0;
    s1 = s3 < 0x1u;
    s0 = a0 + 0;
    v1 = LD32(a0+52);
    cnd_ = s1 == 0;
    s2 = v1 + v0;
    if (cnd_) { goto L_08909B74; }
    goto L_08909354;
L_08909354:;
    v0 = LD_U16(a0+72);
    goto L_08909358;
L_08909358:;
    cnd_ = s1 == 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08909B6C; }
    goto L_08909360;
L_08909360:;
    v1 = LD_U16(s0+74);
    goto L_08909364;
L_08909364:;
    v0 = D_08B2C10C - (-16116);
    ST32(sp+20, v1);
    a2 = 0 + 0;
    a0 = LD32(v0-16116);
    v0 = D_08B230A8 - (12456);
    a1 = LD_U8(v0+12456);
    cnd_ = a0 == 0;
    v1 = LD32(s2+16);
    if (cnd_) { goto L_08909394; }
    goto L_08909384;
L_08909384:;
    v1 = a0 + v1;
    v0 = LD_U8(v1);
    v0 = v0 & a1;
    a2 = 0 < v0;
    goto L_08909394;
L_08909394:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_089093D0; }
    goto L_0890939C;
L_0890939C:;
    goto L_089093A0;
L_089093A0:;
    goto L_089093A4;
L_089093A4:;
    sp = sp + 96;
    return;
L_089093D0:;
    s6 = 0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089093D8;
L_089093D8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089093F0; }
    goto L_089093E0;
L_089093E0:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08909B5C; }
    goto L_089093EC;
L_089093EC:;
    s6 = LD32(a0+24);
    goto L_089093F0;
L_089093F0:;
    v0 = 0x80000u;
    v0 = s6 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089093A0; }
    goto L_08909400;
L_08909400:;
    a0 = LD32(s2+12);
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08909408;
L_08909408:;
    v1 = LD32(s2+16);
    a0 = LD32(s0+96);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    v0 = v0 & 0xf;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089093A0; }
    goto L_08909428;
L_08909428:;
    v0 = LD_U16(s2);
    v0 = v0 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089093A4; }
    goto L_08909438;
L_08909438:;
    v0 = D_08BD374C - (14156);
    v0 = LD32(v0+14156);
    cnd_ = v0 == 0;
    s5 = s2 + 20;
    if (cnd_) { goto L_08909460; }
    goto L_08909448;
L_08909448:;
    a0 = s0 + 0;
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08909454;
L_08909454:;
    v1 = 1;
    cnd_ = v0 == v1;
    s5 = s2 + 20;
    if (cnd_) { goto L_0890939C; }
    goto L_08909460;
L_08909460:;
    a1 = D_08BD3760 - (14176);
    a1 = a1 + 14176;
    a0 = s5 + 0;
    v0 = func_0890B9F0(a0, a1);
    goto L_08909470;
L_08909470:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089093A0; }
    goto L_08909478;
L_08909478:;
    a1 = s0 + 112;
    a0 = s5 + 0;
    v0 = func_0890B9D4(a0, a1);
    goto L_08909484;
L_08909484:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089093A0; }
    goto L_0890948C;
L_0890948C:;
    a0 = LD32(s2+12);
    a1 = 0 < s1;
    s7 = 0 + 0;
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890949C;
L_0890949C:;
    a0 = v0 + 0;
    ST32(sp+24, v0);
    func_0890C3C0(a0);
    goto L_089094A8;
L_089094A8:;
    v0 = D_08AED1A4 - (-11868);
    f20 = BITSF(LD32(v0-11868));
    fp = 0 + 0;
    v1 = LD32(s2+16);
    goto L_089094B8;
L_089094B8:;
    a2 = LD32(s0+76);
    a0 = s7 + 0;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 4;
    v0 = v0 + fp;
    s5 = v0 + a2;
    v1 = LD32(s5+12);
    a1 = 2;
    fp = fp + 20;
    cnd_ = v1 == 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_08909530; }
    goto L_089094E8;
L_089094E8:;
    func_08A98B3C(a0, a1, a2);
    goto L_089094F0;
L_089094F0:;
    a0 = s7 + 0;
    a1 = 1;
    a3 = s5 + 0;
    a2 = 2;
    func_08A989B4(a0, a1, a2, a3);
    goto L_08909504;
L_08909504:;
    f14 = BITSF(LD32(s5+16));
    f12 = BITSF(0);
    a0 = s7 + 0;
    f14 = f14 * f14;
    f13 = f12;
    s7 = s7 + 1;
    f14 = f14 * f20;
    func_08A98AD8(a0, f12, f13, f14);
    goto L_08909524;
L_08909524:;
    v0 = s7 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+16); goto L_089094B8; }
    goto L_08909530;
L_08909530:;
    a0 = s7 + 0;
    func_08904D74(a0);
    goto L_08909538;
L_08909538:;
    a0 = LD32(s2+12);
    a1 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    v0 = func_088355D4(a0, a1, a2);
    goto L_08909550;
L_08909550:;
    cnd_ = v0 == 0;
    v0 = s6 & 0x400;
    if (cnd_) { goto L_08909AD0; }
    goto L_08909558;
L_08909558:;
    v0 = D_08B162C4 - (25284);
    f2 = BITSF(LD32(sp));
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_0890958C; }
    goto L_08909578;
L_08909578:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(sp+24); goto L_089095A8; }
    goto L_0890958C;
L_0890958C:;
    f12 = f2;
    f13 = f1;
    ST32(v0+25284, FBITS(f2));
    ST32(v1+25288, FBITS(f1));
    goto L_0890959C;
L_0890959C:;
    func_08A98E9C(f12, f13);
    goto L_089095A4;
L_089095A4:;
    v1 = LD32(sp+24);
    goto L_089095A8;
L_089095A8:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08909AC4; }
    goto L_089095B4;
L_089095B4:;
    v1 = D_08B25FC4 - (24516);
    v1 = v1 + 24516;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a0 = a0 & 0x40;
    cnd_ = a0 == 0;
    v0 = D_08AD9314 - (-27884);
    if (cnd_) { goto L_08909AC8; }
    goto L_089095D0;
L_089095D0:;
    v0 = D_08AD9318 - (-27880);
    f1 = BITSF(LD32(v0-27880));
    goto L_089095D8;
L_089095D8:;
    v0 = D_08B162CC - (25292);
    f0 = BITSF(LD32(v0+25292));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    f12 = f1;
    if (cnd_) { goto L_08909AB4; }
    goto L_089095F0;
L_089095F0:;
    v0 = 0x20000u;
    goto L_089095F4;
L_089095F4:;
    v0 = s6 & v0;
    cnd_ = v0 == 0;
    v0 = s6 & 0x2;
    if (cnd_) { goto L_089098F0; }
    goto L_08909600;
L_08909600:;
    fp = D_08B2C18C - (-15988);
    s1 = fp - 15988;
    v0 = LD32(s1+28);
    s5 = 1;
    cnd_ = v0 == s5;
    a0 = s1 + 0;
    if (cnd_) { goto L_08909620; }
    goto L_08909618;
L_08909618:;
    a1 = 1;
    func_0890D108(a0, a1);
    goto L_08909620;
L_08909620:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == s5;
    v1 = 10;
    if (cnd_) { goto L_089098DC; }
    goto L_0890962C;
L_0890962C:;
    ST32(s1+44, v1);
    goto L_08909630;
L_08909630:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_0890963C;
L_0890963C:;
    a0 = fp - 15988;
    goto L_08909640;
L_08909640:;
    v0 = LD_U8(a0+24);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089098CC; }
    goto L_0890964C;
L_0890964C:;
    a2 = D_08BBF704 - (-2300);
    goto L_08909650;
L_08909650:;
    v0 = s6 & 0x80;
    cnd_ = v0 != 0;
    a1 = a2 - 2300;
    if (cnd_) { goto L_089098BC; }
    goto L_0890965C;
L_0890965C:;
    v1 = D_08AD930C - (-27892);
    v0 = LD32(a2-2300);
    a0 = LD32(v1-27892);
    goto L_08909668;
L_08909668:;
    v0 = v0 + a0;
    ST32(a1, v0);
    a1 = D_08B162B8 - (25272);
    v1 = LD32(a2-2300);
    v0 = LD32(a1+25272);
    cnd_ = v0 == v1;
    s5 = s6 & 0x1;
    if (cnd_) { goto L_08909690; }
    goto L_08909684;
L_08909684:;
    a0 = v1 + 0;
    ST32(a1+25272, v1);
    func_08A98808(a0);
    goto L_08909690;
L_08909690:;
    v0 = D_08BD3748 - (14152);
    goto L_08909694;
L_08909694:;
    v0 = LD32(v0+14152);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089098AC; }
    goto L_089096A0;
L_089096A0:;
    v0 = LD32(s2+16);
    goto L_089096A4;
L_089096A4:;
    a0 = LD32(s0+96);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    v1 = v1 & 0xf0;
    cnd_ = v1 == 0;
    a2 = LD32(sp+16);
    if (cnd_) { goto L_08909898; }
    goto L_089096C0;
L_089096C0:;
    a2 = s4 ^ 0x2;
    a2 = a2 < 0x1u;
    a3 = s3 < 0x1u;
    a0 = s0 + 0;
    a1 = s2 + 0;
    t0 = sp + 16;
    t1 = sp + 20;
    func_0890ABDC(a0, a1, a2, t0);
    goto L_089096E0;
L_089096E0:;
    v0 = s5 & 0xff;
    goto L_089096E4;
L_089096E4:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD_U16(s2); goto L_08909888; }
    goto L_089096EC;
L_089096EC:;
    v0 = s6 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD_U16(s2); goto L_08909888; }
    goto L_089096F8;
L_089096F8:;
    a0 = fp - 15988;
    v1 = LD32(a0+28);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08909714; }
    goto L_0890970C;
L_0890970C:;
    a1 = 5;
    func_0890D108(a0, a1);
    goto L_08909714;
L_08909714:;
    a0 = 0 + 0;
    func_08904D74(a0);
    goto L_0890971C;
L_0890971C:;
    a0 = 1;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08909728;
L_08909728:;
    v0 = LD32(s2+16);
    a0 = LD32(s0+96);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    v1 = v1 & 0xf0;
    cnd_ = v1 == 0;
    a2 = LD32(sp+16);
    if (cnd_) { goto L_08909874; }
    goto L_08909748;
L_08909748:;
    a2 = s4 ^ 0x2;
    a2 = a2 < 0x1u;
    a3 = s3 < 0x1u;
    a0 = s0 + 0;
    a1 = s2 + 0;
    t0 = sp + 16;
    t1 = sp + 20;
    func_0890ABDC(a0, a1, a2, t0);
    goto L_08909768;
L_08909768:;
    a0 = 2;
    goto L_0890976C;
L_0890976C:;
    a1 = (u32)-1;
    func_08904E88(a0, a1);
    goto L_08909774;
L_08909774:;
    a3 = LD_U16(s2);
    t3 = D_08B2C1C4 - (-15932);
    a2 = t3 - 15932;
    t2 = D_08B2C1F0 - (-15888);
    t1 = D_08B2C1F4 - (-15884);
    v1 = LD32(a2+8);
    a0 = LD32(t2-15888);
    a1 = LD32(t1-15884);
    v0 = a3 & 0xffff;
    v0 = v0 - 2;
    a0 = a0 + v0;
    v1 = v1 + v0;
    a1 = a1 + 1;
    ST32(a2+8, v1);
    ST32(t2-15888, a0);
    ST32(t1-15884, a1);
    goto L_089097B4;
L_089097B4:;
    v0 = LD32(s2+44);
    v1 = a3 & 0xffff;
    t0 = t3 - 15932;
    a0 = LD32(t2-15888);
    v0 = v0 << 2;
    v0 = v0 - 4;
    a1 = LD32(t3-15932);
    a2 = LD32(t0+4);
    a3 = LD32(t1-15884);
    v1 = v1 - 2;
    v1 = v1 - v0;
    a0 = a0 + v1;
    a0 = a0 + v0;
    a2 = a2 + v0;
    a1 = a1 + v1;
    a3 = a3 + 1;
    v0 = 3;
    ST32(t3-15932, a1);
    ST32(t0+4, a2);
    ST32(t2-15888, a0);
    cnd_ = s4 == v0;
    ST32(t1-15884, a3);
    if (cnd_) { goto L_0890939C; }
    goto L_0890980C;
L_0890980C:;
    v0 = 0x20000u;
    v0 = s6 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089093A0; }
    goto L_0890981C;
L_0890981C:;
    a2 = D_08BBF704 - (-2300);
    v0 = s6 & 0x80;
    cnd_ = v0 != 0;
    a1 = a2 - 2300;
    if (cnd_) { goto L_08909864; }
    goto L_0890982C;
L_0890982C:;
    v1 = D_08AD930C - (-27892);
    v0 = LD32(a2-2300);
    a0 = LD32(v1-27892);
    goto L_08909838;
L_08909838:;
    v0 = v0 - a0;
    ST32(a1, v0);
    a1 = D_08B162B8 - (25272);
    v1 = LD32(a2-2300);
    v0 = LD32(a1+25272);
    cnd_ = v0 == v1;
    a0 = v1 + 0;
    if (cnd_) { goto L_0890939C; }
    goto L_08909854;
L_08909854:;
    ST32(a1+25272, v1);
    func_08A98808(a0);
    goto L_0890985C;
L_0890985C:;
    goto L_089093A0;
L_08909864:;
    v1 = D_08AD9310 - (-27888);
    v0 = LD32(a2-2300);
    a0 = LD32(v1-27888);
    goto L_08909838;
L_08909874:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    func_0890A3B0(a0, a1);
    goto L_08909880;
L_08909880:;
    a0 = 2;
    goto L_0890976C;
L_08909888:;
    t3 = D_08B2C1C4 - (-15932);
    t2 = D_08B2C1F0 - (-15888);
    t1 = D_08B2C1F4 - (-15884);
    goto L_089097B4;
L_08909898:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    func_0890A3B0(a0, a1);
    goto L_089098A4;
L_089098A4:;
    v0 = s5 & 0xff;
    goto L_089096E4;
L_089098AC:;
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089098B4;
L_089098B4:;
    v0 = LD32(s2+16);
    goto L_089096A4;
L_089098BC:;
    v1 = D_08AD9310 - (-27888);
    v0 = LD32(a2-2300);
    a0 = LD32(v1-27888);
    goto L_08909668;
L_089098CC:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_089098D4;
L_089098D4:;
    a2 = D_08BBF704 - (-2300);
    goto L_08909650;
L_089098DC:;
    v0 = LD32(s1+44);
    cnd_ = v0 != v1;
    if (cnd_) { ST32(s1+44, v1); goto L_08909630; }
    goto L_089098E8;
L_089098E8:;
    a0 = fp - 15988;
    goto L_08909640;
L_089098F0:;
    cnd_ = v0 == 0;
    v0 = s6 & 0x1000;
    if (cnd_) { goto L_08909978; }
    goto L_089098F8;
L_089098F8:;
    fp = D_08B2C18C - (-15988);
    s1 = fp - 15988;
    v0 = LD32(s1+28);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08909968; }
    goto L_0890990C;
L_0890990C:;
    v1 = LD_U8(s1+36);
    goto L_08909910;
L_08909910:;
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = 10;
    if (cnd_) { goto L_08909954; }
    goto L_0890991C;
L_0890991C:;
    ST32(s1+44, a2);
    goto L_08909920;
L_08909920:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_0890992C;
L_0890992C:;
    a0 = fp - 15988;
    goto L_08909930;
L_08909930:;
    v1 = LD_U8(a0+24);
    s5 = s6 & 0x1;
    goto L_08909938;
L_08909938:;
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08909690; }
    goto L_08909944;
L_08909944:;
    v0 = func_0890D084(a0, a1);
    goto L_0890994C;
L_0890994C:;
    v0 = D_08BD3748 - (14152);
    goto L_08909694;
L_08909954:;
    v0 = LD32(s1+44);
    cnd_ = v0 != a2;
    if (cnd_) { ST32(s1+44, a2); goto L_08909920; }
    goto L_08909960;
L_08909960:;
    a0 = fp - 15988;
    goto L_08909930;
L_08909968:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08909970;
L_08909970:;
    v1 = LD_U8(s1+36);
    goto L_08909910;
L_08909978:;
    cnd_ = v0 == 0;
    s5 = s6 & 0x1;
    if (cnd_) { goto L_089099F0; }
    goto L_08909980;
L_08909980:;
    fp = D_08B2C18C - (-15988);
    s1 = fp - 15988;
    v1 = LD32(s1+28);
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089099A0; }
    goto L_08909998;
L_08909998:;
    a1 = 5;
    func_0890D108(a0, a1);
    goto L_089099A0;
L_089099A0:;
    v1 = LD_U8(s1+36);
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = 10;
    if (cnd_) { goto L_089099DC; }
    goto L_089099B0;
L_089099B0:;
    ST32(s1+44, a2);
    goto L_089099B4;
L_089099B4:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_089099C0;
L_089099C0:;
    a0 = fp - 15988;
    goto L_089099C4;
L_089099C4:;
    v0 = LD_U8(a0+24);
    s5 = s6 & 0x1;
    goto L_089099CC;
L_089099CC:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08909690; }
    goto L_089099D4;
L_089099D4:;
    goto L_08909944;
L_089099DC:;
    v0 = LD32(s1+44);
    cnd_ = v0 != a2;
    if (cnd_) { ST32(s1+44, a2); goto L_089099B4; }
    goto L_089099E8;
L_089099E8:;
    a0 = fp - 15988;
    goto L_089099C4;
L_089099F0:;
    v0 = s5 & 0xff;
    cnd_ = v0 != 0;
    fp = D_08B2C18C - (-15988);
    if (cnd_) { goto L_08909A60; }
    goto L_089099FC;
L_089099FC:;
    cnd_ = s1 == 0;
    s1 = fp - 15988;
    if (cnd_) { goto L_08909A64; }
    goto L_08909A04;
L_08909A04:;
    fp = D_08B2C18C - (-15988);
    s1 = fp - 15988;
    v0 = LD32(s1+28);
    s7 = 1;
    cnd_ = v0 == s7;
    a0 = s1 + 0;
    if (cnd_) { goto L_08909A24; }
    goto L_08909A1C;
L_08909A1C:;
    a1 = 1;
    func_0890D108(a0, a1);
    goto L_08909A24;
L_08909A24:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == s7;
    v1 = 10;
    if (cnd_) { goto L_08909A4C; }
    goto L_08909A30;
L_08909A30:;
    ST32(s1+44, v1);
    goto L_08909A34;
L_08909A34:;
    a0 = s1 + 0;
    a1 = 1;
    func_0890D250(a0, a1);
    goto L_08909A40;
L_08909A40:;
    a0 = fp - 15988;
    goto L_08909A44;
L_08909A44:;
    v0 = LD_U8(a0+24);
    goto L_089099CC;
L_08909A4C:;
    v0 = LD32(s1+44);
    cnd_ = v0 != v1;
    if (cnd_) { ST32(s1+44, v1); goto L_08909A34; }
    goto L_08909A58;
L_08909A58:;
    a0 = fp - 15988;
    goto L_08909A44;
L_08909A60:;
    s1 = fp - 15988;
    goto L_08909A64;
L_08909A64:;
    v0 = LD32(s1+28);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08909AA4; }
    goto L_08909A70;
L_08909A70:;
    v0 = LD_U8(s1+36);
    goto L_08909A74;
L_08909A74:;
    cnd_ = v0 != 0;
    v1 = 10;
    if (cnd_) { goto L_08909A88; }
    goto L_08909A7C;
L_08909A7C:;
    v0 = LD32(s1+44);
    cnd_ = v0 == v1;
    if (cnd_) { a0 = fp - 15988; goto L_08909A9C; }
    goto L_08909A88;
L_08909A88:;
    ST32(s1+44, v1);
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_0890D250(a0, a1);
    goto L_08909A98;
L_08909A98:;
    a0 = fp - 15988;
    goto L_08909A9C;
L_08909A9C:;
    v1 = LD_U8(a0+24);
    goto L_08909938;
L_08909AA4:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_08909AAC;
L_08909AAC:;
    v0 = LD_U8(s1+36);
    goto L_08909A74;
L_08909AB4:;
    ST32(v0+25292, FBITS(f1));
    func_08A98CBC(f12);
    goto L_08909ABC;
L_08909ABC:;
    v0 = 0x20000u;
    goto L_089095F4;
L_08909AC4:;
    v0 = D_08AD9314 - (-27884);
    goto L_08909AC8;
L_08909AC8:;
    f1 = BITSF(LD32(v0-27884));
    goto L_089095D8;
L_08909AD0:;
    cnd_ = v0 == 0;
    v0 = D_08B162C4 - (25284);
    if (cnd_) { goto L_08909B1C; }
    goto L_08909AD8;
L_08909AD8:;
    f2 = BITSF(LD32(s0+80));
    f0 = BITSF(LD32(v0+25284));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08909B08; }
    goto L_08909AF0;
L_08909AF0:;
    f1 = BITSF(LD32(v1+25288));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(sp+24); goto L_089095A8; }
    goto L_08909B08;
L_08909B08:;
    ST32(v1+25288, 0);
    f12 = f2;
    f13 = BITSF(LD32(v1+25288));
    ST32(v0+25284, FBITS(f2));
    goto L_0890959C;
L_08909B1C:;
    f0 = BITSF(LD32(v0+25284));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v1 = D_08B162C8 - (25288);
    if (cnd_) { goto L_08909B48; }
    goto L_08909B34;
L_08909B34:;
    f0 = BITSF(LD32(v1+25288));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(sp+24); goto L_089095A8; }
    goto L_08909B48;
L_08909B48:;
    ST32(v0+25284, 0);
    f12 = BITSF(LD32(v0+25284));
    ST32(v1+25288, FBITS(f12));
    f13 = f12;
    goto L_0890959C;
L_08909B5C:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08909B64;
L_08909B64:;
    s6 = v0 + 0;
    goto L_089093F0;
L_08909B6C:;
    v1 = LD_U16(s0+68);
    goto L_08909364;
L_08909B74:;
    v0 = LD_U16(a0+66);
    goto L_08909358;
}

/* 08909B7C */
void func_08909B7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08909B7C:;
    sp = sp - 176;
    s2 = a0 + 0;
    a0 = 5;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08909BC0;
L_08909BC0:;
    a0 = 0xb6db0000u;
    v0 = LD32(s2+52);
    a0 = a0 | 0x6db7;
    v1 = LD32(s2+36);
    v0 = s1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U16(s2+68); goto L_0890A3A8; }
    goto L_08909BF0;
L_08909BF0:;
    v0 = LD_U16(s2+74);
    ST32(sp+64, v0);
    goto L_08909BF8;
L_08909BF8:;
    a0 = LD_U16(s1+2);
    v0 = func_0890CA3C(a0);
    goto L_08909C00;
L_08909C00:;
    v1 = LD_U16(s1);
    ST32(sp+68, v0);
    v0 = v1 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+48, 0); goto L_0890A39C; }
    goto L_08909C14;
L_08909C14:;
    a1 = 1;
    v0 = v1 - 3;
    ST32(sp+72, a1);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08909CD4; }
    goto L_08909C28;
L_08909C28:;
    s7 = 0xb6db0000u;
    s7 = s7 | 0x6db7;
    goto L_08909C30;
L_08909C30:;
    a3 = LD32(s2+52);
    t0 = LD32(s2+36);
    v0 = s1 - a3;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)s7; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < t0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a2 = LD32(s1+4);
    if (cnd_) { goto L_0890A394; }
    goto L_08909C58;
L_08909C58:;
    v1 = LD_U16(s2+72);
    goto L_08909C5C;
L_08909C5C:;
    v0 = a2 + s3;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = LD32(s2+56);
    s0 = s3 + 1;
    v0 = lo;
    a0 = a1 + v0;
    v0 = s1 - a3;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)s7; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < t0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    fp = s0 + 0;
    if (cnd_) { goto L_0890A38C; }
    goto L_08909C94;
L_08909C94:;
    v1 = LD_U16(s2+72);
    goto L_08909C98;
L_08909C98:;
    v0 = a2 + s0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    v0 = lo;
    s4 = a1 + v0;
    a1 = s4 + 0;
    v0 = func_0890CCDC(a0, a1, a2, a3);
    goto L_08909CB8;
L_08909CB8:;
    cnd_ = v0 != 0;
    s6 = v0 + 0;
    if (cnd_) { goto L_0890A2AC; }
    goto L_08909CC0;
L_08909CC0:;
    v0 = LD_U16(s1);
    goto L_08909CC4;
L_08909CC4:;
    v0 = v0 - 3;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    s3 = s0 + 0;
    if (cnd_) { goto L_08909C30; }
    goto L_08909CD4;
L_08909CD4:;
    v1 = LD32(sp+72);
    a0 = s1 + 52;
    ST32(s1+44, v1);
    a1 = v1 + 0;
    func_08ABA82C(a0, a1, 0, 0, 0);
    goto L_08909CE8;
L_08909CE8:;
    a1 = LD32(sp+72);
    a0 = s1 + 48;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_08909CF4;
L_08909CF4:;
    v1 = D_08AED1C0 - (-11840);
    v0 = D_08AED1C4 - (-11836);
    a0 = LD32(s1+48);
    f0 = BITSF(LD32(v1-11840));
    f1 = BITSF(LD32(v0-11836));
    v1 = LD32(s1+52);
    ST32(a0, 0);
    a1 = 0xb6db0000u;
    a1 = a1 | 0x6db7;
    ST32(sp+76, 0);
    ST32(v1+20, FBITS(f1));
    ST32(v1+16, FBITS(f0));
    ST32(v1, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+12, FBITS(f1));
    v0 = LD32(s2+52);
    v1 = LD32(s2+36);
    v0 = s1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s2+66); goto L_08909D60; }
    goto L_08909D5C;
L_08909D5C:;
    v0 = LD_U16(s2+72);
    goto L_08909D60;
L_08909D60:;
    v1 = LD32(s1+4);
    a0 = LD32(s2+56);
    a1 = LD_U16(s1+2);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(sp+64);
    fp = 0 + 0;
    v1 = lo;
    a0 = a0 + v1;
    v0 = func_0890CC9C(a0, a2);
    goto L_08909D84;
L_08909D84:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(s1+52);
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+92, 0);
    ST32(sp+8, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_08909DAC;
L_08909DAC:;
    a1 = LD_U16(s1);
    v0 = a1 & 0xffff;
    v0 = v0 - 3;
    cnd_ = v0 == 0;
    v1 = D_08AED1C4 - (-11836);
    if (cnd_) { goto L_08909F9C; }
    goto L_08909DC0;
L_08909DC0:;
    f21 = BITSF(LD32(v1-11836));
    v1 = LD32(sp+76);
    v0 = D_08AED1C0 - (-11840);
    f20 = BITSF(LD32(v0-11840));
    v0 = v1 << 1;
    v0 = v0 + v1;
    a1 = 0xb6db0000u;
    v0 = v0 << 3;
    a1 = a1 | 0x6db7;
    ST32(sp+96, v0);
    ST32(sp+92, 0);
    ST32(sp+80, a1);
    a0 = LD32(s2+52);
    goto L_08909DF4;
L_08909DF4:;
    v1 = LD32(sp+80);
    a3 = LD32(s2+36);
    v0 = s1 - a0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < a3;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a2 = LD32(s1+4);
    if (cnd_) { goto L_0890A2A4; }
    goto L_08909E1C;
L_08909E1C:;
    v1 = LD_U16(s2+72);
    goto L_08909E20;
L_08909E20:;
    v0 = a2 + fp;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = LD32(s2+56);
    v1 = LD32(sp+80);
    s7 = fp + 1;
    v0 = lo;
    s6 = a1 + v0;
    v0 = s1 - a0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < a3;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    ST32(sp+84, s7);
    if (cnd_) { goto L_0890A29C; }
    goto L_08909E5C;
L_08909E5C:;
    v1 = LD_U16(s2+72);
    goto L_08909E60;
L_08909E60:;
    v0 = a2 + s7;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(sp+80);
    t0 = fp + 2;
    v0 = lo;
    s4 = a1 + v0;
    v0 = s1 - a0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < a3;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    ST32(sp+88, t0);
    if (cnd_) { goto L_0890A290; }
    goto L_08909E98;
L_08909E98:;
    v1 = LD_U16(s2+72);
    goto L_08909E9C;
L_08909E9C:;
    v0 = a2 + t0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(sp+80);
    v0 = lo;
    s5 = a1 + v0;
    v0 = s1 - a0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < a3;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = fp + 3;
    if (cnd_) { goto L_0890A288; }
    goto L_08909ED0;
L_08909ED0:;
    v1 = LD_U16(s2+72);
    goto L_08909ED4;
L_08909ED4:;
    v0 = a2 + a0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    a0 = s6 + 0;
    v0 = lo;
    s3 = a1 + v0;
    a1 = s4 + 0;
    v0 = func_0890CCDC(a0, a1, a2, a3);
    goto L_08909EF8;
L_08909EF8:;
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    a1 = s3 + 0;
    a0 = s5 + 0;
    s0 = v0 + 0;
    v0 = func_0890CCDC(a0, a1, a2, a3);
    goto L_08909F10;
L_08909F10:;
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    a0 = s4 + 0;
    a1 = s5 + 0;
    s3 = v0 + 0;
    v0 = func_0890CCDC(a0, a1, a2, a3);
    goto L_08909F28;
L_08909F28:;
    v0 = v0 ^ 0x1;
    cnd_ = s0 == 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_08909F44; }
    goto L_08909F34;
L_08909F34:;
    cnd_ = s3 == 0;
    if (cnd_) { a1 = LD_U16(s1+2); goto L_08909F48; }
    goto L_08909F3C;
L_08909F3C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD_U16(s1+2); goto L_0890A1BC; }
    goto L_08909F44;
L_08909F44:;
    a1 = LD_U16(s1+2);
    goto L_08909F48;
L_08909F48:;
    a2 = LD32(sp+64);
    a0 = s6 + 0;
    v0 = func_0890CC9C(a0, a2);
    goto L_08909F54;
L_08909F54:;
    f2 = BITSF(LD32(v0+8));
    a0 = LD32(s1+52);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = LD32(sp+96);
    a0 = a0 + v0;
    goto L_08909F6C;
L_08909F6C:;
    a1 = sp + 32;
    ST32(sp+32, FBITS(f0));
    fp = s7 + 0;
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_08909F84;
L_08909F84:;
    a1 = LD_U16(s1);
    v0 = a1 & 0xffff;
    v0 = v0 - 3;
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+52); goto L_08909DF4; }
    goto L_08909F9C;
L_08909F9C:;
    v0 = LD32(s2+52);
    v1 = 0xb6db0000u;
    v1 = v1 | 0x6db7;
    v0 = s1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s2+36);
    v1 = a1 & 0xffff;
    v0 = lo;
    v0 = v0 < a0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a1 = v1 - 3;
    if (cnd_) { goto L_0890A1B0; }
    goto L_08909FD0;
L_08909FD0:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s2+72);
    goto L_08909FD8;
L_08909FD8:;
    v0 = v0 + a1;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s2+56);
    a1 = LD_U16(s1+2);
    a2 = LD32(sp+64);
    v0 = lo;
    a0 = a0 + v0;
    v0 = func_0890CC9C(a0, a2);
    goto L_08909FF8;
L_08909FF8:;
    a1 = LD32(sp+92);
    a2 = LD32(sp+76);
    a0 = LD32(s1+52);
    f2 = BITSF(LD32(v0+8));
    v1 = a1 + a2;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = v1 << 3;
    a0 = a0 + v1;
    a1 = sp + 32;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_0890A030;
L_0890A030:;
    a0 = 0xb6db0000u;
    v0 = LD32(s2+52);
    a0 = a0 | 0x6db7;
    a1 = LD32(s2+36);
    v0 = s1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD_U16(s1);
    v0 = lo;
    v0 = v0 < a1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a2 = v1 - 2;
    if (cnd_) { goto L_0890A1A4; }
    goto L_0890A064;
L_0890A064:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s2+72);
    goto L_0890A06C;
L_0890A06C:;
    v0 = v0 + a2;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s2+56);
    a1 = LD_U16(s1+2);
    a2 = LD32(sp+64);
    v0 = lo;
    a0 = a0 + v0;
    v0 = func_0890CC9C(a0, a2);
    goto L_0890A08C;
L_0890A08C:;
    a1 = LD32(sp+92);
    a2 = LD32(sp+76);
    a0 = LD32(s1+52);
    f2 = BITSF(LD32(v0+8));
    v1 = a1 + a2;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = v1 << 3;
    a0 = a0 + v1;
    a1 = sp + 16;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_0890A0C4;
L_0890A0C4:;
    a0 = 0xb6db0000u;
    v0 = LD32(s2+52);
    a0 = a0 | 0x6db7;
    a1 = LD32(s2+36);
    v0 = s1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD_U16(s1);
    v0 = lo;
    v0 = v0 < a1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a2 = v1 - 1;
    if (cnd_) { goto L_0890A198; }
    goto L_0890A0F8;
L_0890A0F8:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s2+72);
    goto L_0890A100;
L_0890A100:;
    v0 = v0 + a2;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s2+56);
    a1 = LD_U16(s1+2);
    a2 = LD32(sp+64);
    v0 = lo;
    a0 = a0 + v0;
    v0 = func_0890CC9C(a0, a2);
    goto L_0890A120;
L_0890A120:;
    a1 = LD32(sp+92);
    a2 = LD32(sp+76);
    a0 = LD32(s1+52);
    f2 = BITSF(LD32(v0+8));
    v1 = a1 + a2;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = v1 << 3;
    a0 = a0 + v1;
    a1 = sp + 48;
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_0890A158;
L_0890A158:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890A160;
L_0890A160:;
    sp = sp + 176;
    return;
L_0890A198:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s2+66);
    goto L_0890A100;
L_0890A1A4:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s2+66);
    goto L_0890A06C;
L_0890A1B0:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s2+66);
    goto L_08909FD8;
L_0890A1BC:;
    a2 = LD32(sp+64);
    a0 = s6 + 0;
    v0 = func_0890CC9C(a0, a2);
    goto L_0890A1C8;
L_0890A1C8:;
    v1 = LD32(sp+76);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(s1+52);
    v0 = LD32(sp+96);
    a2 = LD32(sp+84);
    v1 = v1 + 1;
    t0 = v1 << 1;
    a0 = a0 + v0;
    a1 = sp + 16;
    v0 = v0 + 24;
    ST32(sp+16, FBITS(f0));
    s7 = a2 + 1;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+96, v0);
    ST32(sp+76, v1);
    ST32(sp+92, t0);
    f0 = func_08AA0F30(a0, a1);
    goto L_0890A218;
L_0890A218:;
    t0 = fp & 0x1;
    a2 = LD32(sp+96);
    v0 = LD32(s1+52);
    v1 = LD32(sp+76);
    a1 = LD32(sp+88);
    v0 = v0 + a2;
    ST32(v0+20, FBITS(f21));
    a3 = v1 << 2;
    t0 = a1 + t0;
    a2 = LD32(sp+64);
    ST32(v0, FBITS(f20));
    a0 = s5 + 0;
    ST32(v0+8, FBITS(f20));
    ST32(v0+16, FBITS(f20));
    ST32(v0+4, FBITS(f21));
    ST32(v0+12, FBITS(f21));
    v1 = LD32(s1+48);
    a1 = LD_U16(s1+2);
    a3 = a3 + v1;
    ST32(a3, t0);
    v0 = func_0890CC9C(a0, a2);
    goto L_0890A26C;
L_0890A26C:;
    a0 = LD32(s1+52);
    t0 = LD32(sp+96);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = a0 + t0;
    goto L_08909F6C;
L_0890A288:;
    v1 = LD_U16(s2+66);
    goto L_08909ED4;
L_0890A290:;
    v1 = LD_U16(s2+66);
    t0 = LD32(sp+88);
    goto L_08909E9C;
L_0890A29C:;
    v1 = LD_U16(s2+66);
    goto L_08909E60;
L_0890A2A4:;
    v1 = LD_U16(s2+66);
    goto L_08909E20;
L_0890A2AC:;
    a3 = LD32(s2+52);
    t0 = LD32(s2+36);
    v0 = s1 - a3;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)s7; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < t0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = s3 + 2;
    if (cnd_) { goto L_0890A380; }
    goto L_0890A2D4;
L_0890A2D4:;
    a2 = LD32(s1+4);
    v1 = LD_U16(s2+72);
    goto L_0890A2DC;
L_0890A2DC:;
    v0 = a2 + a0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = LD32(s2+56);
    v0 = lo;
    s5 = a1 + v0;
    v0 = s1 - a3;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)s7; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < t0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = s3 + 3;
    if (cnd_) { goto L_0890A378; }
    goto L_0890A310;
L_0890A310:;
    v1 = LD_U16(s2+72);
    goto L_0890A314;
L_0890A314:;
    v0 = a2 + a0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    a0 = s5 + 0;
    v0 = lo;
    a1 = a1 + v0;
    v0 = func_0890CCDC(a0, a1, a2, a3);
    goto L_0890A334;
L_0890A334:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s1); goto L_08909CC4; }
    goto L_0890A33C;
L_0890A33C:;
    a2 = LD32(sp+64);
    a3 = LD32(sp+68);
    a0 = s4 + 0;
    a1 = s5 + 0;
    v0 = func_0890CCDC(a0, a1, a2, a3);
    goto L_0890A350;
L_0890A350:;
    v0 = v0 ^ 0x1;
    cnd_ = s6 == 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_08909CC0; }
    goto L_0890A35C;
L_0890A35C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s1); goto L_08909CC4; }
    goto L_0890A364;
L_0890A364:;
    v0 = LD32(sp+72);
    s0 = fp + 1;
    v0 = v0 + 1;
    ST32(sp+72, v0);
    goto L_08909CC0;
L_0890A378:;
    v1 = LD_U16(s2+66);
    goto L_0890A314;
L_0890A380:;
    a2 = LD32(s1+4);
    v1 = LD_U16(s2+66);
    goto L_0890A2DC;
L_0890A38C:;
    v1 = LD_U16(s2+66);
    goto L_08909C98;
L_0890A394:;
    v1 = LD_U16(s2+66);
    goto L_08909C5C;
L_0890A39C:;
    ST32(s1+44, 0);
    ST32(s1+52, 0);
    goto L_0890A158;
L_0890A3A8:;
    ST32(sp+64, v1);
    goto L_08909BF8;
}

/* 0890A3B0 */
void func_0890A3B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890A3B0:;
    sp = sp - 16;
    t1 = 0xb6db0000u;
    t1 = t1 | 0x6db7;
    t0 = LD32(a0+60);
    cnd_ = t0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_0890A43C; }
    goto L_0890A3CC;
L_0890A3CC:;
    v0 = LD32(a0+52);
    v1 = LD32(a0+36);
    v0 = a1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)t1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_0890A434; }
    goto L_0890A3F4;
L_0890A3F4:;
    v0 = LD_U16(a0+72);
    a0 = LD32(a1+4);
    goto L_0890A3FC;
L_0890A3FC:;
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(a2+56);
    v0 = lo;
    t1 = v1 + v0;
    v0 = a0 << 1;
    t0 = t0 + v0;
    goto L_0890A414;
L_0890A414:;
    a0 = a2 + 0;
    a3 = LD_U16(a1);
    a2 = LD_U16(a1+2);
    a1 = LD32(a0+88);
    func_08ABA6F8(a1, a2, a3, t0, t1);
    goto L_0890A428;
L_0890A428:;
    sp = sp + 16;
    return;
L_0890A434:;
    v0 = LD_U16(a2+66);
    goto L_0890A3FC;
L_0890A43C:;
    v0 = LD32(a0+52);
    v1 = LD32(a0+36);
    v0 = a1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)t1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(a0+66); goto L_0890A468; }
    goto L_0890A464;
L_0890A464:;
    v0 = LD_U16(a0+72);
    goto L_0890A468;
L_0890A468:;
    v1 = LD32(a1+4);
    a0 = LD32(a2+56);
    t0 = 0 + 0;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    t1 = a0 + v1;
    goto L_0890A414;
}

/* 0890A484 */
void func_0890A484(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890A484:;
    sp = sp - 16;
    v1 = 0xb6db0000u;
    v1 = v1 | 0x6db7;
    v0 = LD32(a0+52);
    t0 = a0 + 0;
    a0 = LD32(a0+36);
    v0 = a1 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t2 = LD32(a1+48);
    a3 = a2 << 2;
    v1 = a3 + t2;
    v0 = lo;
    v0 = v0 < a0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    t3 = LD32(v1);
    if (cnd_) { goto L_0890A530; }
    goto L_0890A4CC;
L_0890A4CC:;
    v0 = LD32(a1+4);
    v1 = LD_U16(t0+72);
    goto L_0890A4D4;
L_0890A4D4:;
    v0 = v0 + t3;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(t0+56);
    v0 = lo;
    t1 = a0 + v0;
    v0 = LD32(a1+44);
    v0 = v0 - 1;
    cnd_ = a2 == v0;
    a0 = a3 + t2;
    if (cnd_) { goto L_0890A524; }
    goto L_0890A4F8;
L_0890A4F8:;
    v1 = LD32(a0);
    v0 = LD32(a0+4);
    goto L_0890A500;
L_0890A500:;
    a0 = t0 + 0;
    a2 = LD_U16(a1+2);
    a1 = LD32(a0+88);
    a3 = v0 - v1;
    t0 = 0 + 0;
    func_08ABA6F8(a1, a2, a3, t0, t1);
    goto L_0890A518;
L_0890A518:;
    sp = sp + 16;
    return;
L_0890A524:;
    v1 = LD32(a0);
    v0 = LD_U16(a1);
    goto L_0890A500;
L_0890A530:;
    v0 = LD32(a1+4);
    v1 = LD_U16(t0+66);
    goto L_0890A4D4;
}

/* 0890A53C */
u64 func_0890A53C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0890A53C:;
    sp = sp - 80;
    fp = sp + 0;
    t2 = t0 + 0;
    t1 = 0 + 0;
    s6 = a2 + 0;
    a2 = 0 + 0;
    s1 = a1 + 0;
    ST32(fp+4, a3);
    a3 = LD32(a3);
    ST32(fp, a0);
    v0 = a3 << 3;
    v0 = v0 + 15;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    sp = (u32)(uintptr_t)RS_ALLOCA(v0); /* runtime-sized stack allocation */
    t3 = a3 + 0;
    cnd_ = a3 == 0;
    t4 = sp + 0;
    if (cnd_) { goto L_0890A5FC; }
    goto L_0890A5A8;
L_0890A5A8:;
    f1 = BITSF(0);
    a0 = a1 + 32;
    v1 = sp + 0;
    goto L_0890A5B4;
L_0890A5B4:;
    {u32 a_=t2+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float t0=v[3];float d0=s0+t0;v[0]=d0;}
    {t0=FBITS(v[0]);}
    f0 = BITSF(t0);
    fcc = FCMP(f0, f1, 12);
    ST32(v1, FBITS(f0));
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_0890A5E0; }
    goto L_0890A5DC;
L_0890A5DC:;
    a1 = 0 + 0;
    goto L_0890A5E0;
L_0890A5E0:;
    a2 = a2 + 1;
    v0 = a2 < t3;
    ST32(v1+4, a1);
    t1 = t1 + a1;
    v1 = v1 + 8;
    cnd_ = v0 != 0;
    a0 = a0 + 48;
    if (cnd_) { goto L_0890A5B4; }
    goto L_0890A5FC;
L_0890A5FC:;
    cnd_ = t1 == t3;
    if (cnd_) { v1 = LD32(fp+4); goto L_0890A770; }
    goto L_0890A604;
L_0890A604:;
    cnd_ = t1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890A640; }
    goto L_0890A60C;
L_0890A60C:;
    sp = fp + 0;
    sp = sp + 80;
    return (u64)v0 | ((u64)v1 << 32);
L_0890A640:;
    s2 = t4 - 8;
    v1 = LD32(s2+12);
    v0 = LD32(s2+20);
    a0 = s6 + 0;
    s4 = v1 << 1;
    v0 = v0 << 2;
    a1 = 12288;
    s4 = s4 | v0;
    v0 = sceKernelDcacheInvalidateRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890A664;
L_0890A664:;
    v1 = 0x40000000u;
    s6 = s6 /* uncached alias of the output buffer argument (used as a store base below) */;
    s0 = s4 >> 1;
    v0 = 1;
    s3 = s1 - 48;
    cnd_ = s0 == v0;
    s5 = s6 + 0;
    if (cnd_) { goto L_0890ABB4; }
    goto L_0890A680;
L_0890A680:;
    cnd_ = s0 == 0;
    if (cnd_) { s5 = s6 + 96; goto L_0890AB74; }
    goto L_0890A688;
L_0890A688:;
    v0 = 2;
    cnd_ = s0 == v0;
    v0 = LD32(fp);
    if (cnd_) { goto L_0890AB34; }
    goto L_0890A694;
L_0890A694:;
    v1 = LD32(fp+4);
    goto L_0890A698;
L_0890A698:;
    s7 = 2;
    a3 = LD32(v1);
    v0 = s7 < a3;
    cnd_ = v0 == 0;
    v0 = s5 - s6;
    if (cnd_) { goto L_0890A740; }
    goto L_0890A6AC;
L_0890A6AC:;
    s2 = s2 + 8;
    v0 = LD32(s2+20);
    v0 = v0 << 2;
    s4 = s0 | v0;
    v1 = s4 < 0x7u;
    cnd_ = v1 == 0;
    s3 = s3 + 48;
    if (cnd_) { goto L_0890A728; }
    goto L_0890A6C8;
L_0890A6C8:;
    v1 = D_08AD92F0 - (-27920);
    v0 = s4 << 2;
    v1 = v1 - 27920;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890A6E4u: goto L_0890A6E4; case 0x0890A77Cu: goto L_0890A77C; case 0x0890A808u: goto L_0890A808; case 0x0890A874u: goto L_0890A874; case 0x0890A9E0u: goto L_0890A9E0; case 0x0890AA70u: goto L_0890AA70; case 0x0890AAC0u: goto L_0890AAC0; default: rs_break(0, 0x0890a6dc); }
L_0890A6E4:;
    v0 = s5 - s6;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + 1;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    v1 = LD32(fp+4);
    if (cnd_) { goto L_0890A770; }
    goto L_0890A70C;
L_0890A70C:;
    {u32 a_=s3+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_0890A724;
L_0890A724:;
    s5 = s5 + 48;
    goto L_0890A728;
L_0890A728:;
    s7 = s7 + 1;
    v0 = s7 < a3;
    cnd_ = v0 != 0;
    s0 = s4 >> 1;
    if (cnd_) { goto L_0890A6AC; }
    goto L_0890A73C;
L_0890A73C:;
    v0 = s5 - s6;
    goto L_0890A740;
L_0890A740:;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(fp+4);
    v0 = lo;
    ST32(v1, v0);
    v0 = 1;
    goto L_0890A60C;
L_0890A76C:;
    v1 = LD32(fp+4);
    goto L_0890A770;
L_0890A770:;
    v0 = 0 + 0;
    ST32(v1, 0);
    goto L_0890A60C;
L_0890A77C:;
    v0 = s5 - s6;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + 3;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    a1 = s3 + 96;
    if (cnd_) { goto L_0890A76C; }
    goto L_0890A7A4;
L_0890A7A4:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    a3 = v0 + 320;
    a0 = s5 + 0;
    a2 = s3 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A7C0;
L_0890A7C0:;
    v1 = LD32(fp+4);
    {u32 a_=s3+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(64);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(80);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_0890A7DC;
L_0890A7DC:;
    a3 = LD32(v1);
    {u32 a_=s3+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(112);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(128);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_0890A7FC;
L_0890A7FC:;
    s5 = s5 + 144;
    goto L_0890A728;
L_0890A808:;
    v0 = s5 - s6;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + 3;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(fp+4); goto L_0890A770; }
    goto L_0890A830;
L_0890A830:;
    v0 = LD32(fp);
    {u32 a_=s3+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a3 = v0 + 320;
    a0 = s5 + 48;
    a2 = s3 + 96;
    a1 = s3 + 48;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A86C;
L_0890A86C:;
    v1 = LD32(fp+4);
    goto L_0890A7DC;
L_0890A874:;
    v1 = s5 - s6;
    v0 = 0xaaaa0000u;
    v1 = (u32)((s32)v1 >> 4);
    v0 = v0 | 0xaaab;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = s7 & 0x1;
    v1 = lo;
    v0 = v1 & 0x1;
    cnd_ = v0 == a0;
    v0 = v1 + 4;
    if (cnd_) { goto L_0890A930; }
    goto L_0890A89C;
L_0890A89C:;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    s0 = s3 + 96;
    if (cnd_) { goto L_0890A76C; }
    goto L_0890A8A8;
L_0890A8A8:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    s1 = v0 + 320;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A8CC;
L_0890A8CC:;
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    a0 = s5 + 48;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A8E8;
L_0890A8E8:;
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a0 = s5 + 96;
    a3 = s1 + 0;
    a1 = s3 + 48;
    a2 = s0 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A904;
L_0890A904:;
    v1 = LD32(fp+4);
    {u32 a_=s3+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(160);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(176);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    s5 = s5 + 192;
    goto L_0890A924;
L_0890A924:;
    a3 = LD32(v1);
    goto L_0890A728;
L_0890A930:;
    v0 = v1 + 5;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    s0 = s3 + 96;
    if (cnd_) { goto L_0890A76C; }
    goto L_0890A940;
L_0890A940:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    s1 = v0 + 320;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A964;
L_0890A964:;
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    a0 = s5 + 48;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A980;
L_0890A980:;
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    a0 = s5 + 96;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A99C;
L_0890A99C:;
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a0 = s5 + 144;
    a3 = s1 + 0;
    a1 = s3 + 48;
    a2 = s0 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890A9B8;
L_0890A9B8:;
    v1 = LD32(fp+4);
    {u32 a_=s3+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(208);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(224);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    s5 = s5 + 240;
    goto L_0890A924;
L_0890A9E0:;
    v0 = s5 - s6;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + 3;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    s0 = s3 + 96;
    if (cnd_) { goto L_0890A76C; }
    goto L_0890AA08;
L_0890AA08:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    s1 = v0 + 320;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890AA2C;
L_0890AA2C:;
    {u32 a_=s3+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s5+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s5+(64);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s5+(80);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a3 = s1 + 0;
    a0 = s5 + 96;
    a1 = s3 + 48;
    a2 = s0 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890AA64;
L_0890AA64:;
    v1 = LD32(fp+4);
    a3 = LD32(v1);
    goto L_0890A7FC;
L_0890AA70:;
    v0 = s5 - s6;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + 1;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    a1 = s3 + 48;
    if (cnd_) { goto L_0890A76C; }
    goto L_0890AA98;
L_0890AA98:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a3 = v0 + 320;
    a2 = s3 + 96;
    a0 = s5 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890AAB4;
L_0890AAB4:;
    v1 = LD32(fp+4);
    a3 = LD32(v1);
    goto L_0890A724;
L_0890AAC0:;
    v0 = s5 - s6;
    v1 = 0xaaaa0000u;
    v0 = (u32)((s32)v0 >> 4);
    v1 = v1 | 0xaaab;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + 2;
    v0 = (s32)v0 < 257;
    cnd_ = v0 == 0;
    s0 = s3 + 96;
    if (cnd_) { goto L_0890A76C; }
    goto L_0890AAE8;
L_0890AAE8:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    s1 = v0 + 320;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890AB0C;
L_0890AB0C:;
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2));
    a0 = s5 + 48;
    a3 = s1 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890AB28;
L_0890AB28:;
    v1 = LD32(fp+4);
    s5 = s5 + 96;
    goto L_0890A924;
L_0890AB34:;
    {u32 a_=s1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s6+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s6+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s6+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a0 = s6 + 48;
    a2 = s1 + 48;
    a3 = v0 + 320;
    a1 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890AB6C;
L_0890AB6C:;
    s5 = s6 + 96;
    goto L_0890A694;
L_0890AB74:;
    {u32 a_=s1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s6+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s6+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s6+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_0890AB8C;
L_0890AB8C:;
    {u32 a_=s1+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s6+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s6+(64);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s6+(80);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v1 = LD32(fp+4);
    goto L_0890A698;
L_0890ABB4:;
    v0 = LD32(fp);
    f12 = BITSF(LD32(s2+8));
    f13 = BITSF(LD32(s2+16));
    a2 = s1 + 48;
    a3 = v0 + 320;
    a0 = s6 + 0;
    a1 = s1 + 0;
    func_08ABA8C0(a0, a1, a2, a3, f12, f13);
    goto L_0890ABD4;
L_0890ABD4:;
    s5 = s6 + 96;
    goto L_0890AB8C;
}

/* 0890ABDC */
void func_0890ABDC(u32 a0, u32 a1, u32 a2, u32 t0)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_0890ABDC:;
    sp = sp - 224;
    s7 = a2 & 0xff;
    s5 = a0 + 0;
    s3 = a1 + 0;
    v0 = LD32(a1+20);
    v1 = LD32(a1+24);
    a3 = LD32(s3+32);
    a1 = LD32(a1+28);
    t1 = LD32(s3+36);
    t2 = LD32(s3+40);
    ST32(sp+120, t0);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    ST32(sp+12, a3);
    ST32(sp+16, t1);
    cnd_ = s7 == 0;
    ST32(sp+20, t2);
    if (cnd_) { goto L_0890B684; }
    goto L_0890AC4C;
L_0890AC4C:;
    f0 = BITSF(LD32(s3+32));
    f1 = BITSF(LD32(s3+28));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+8, FBITS(f0));
    cnd_ = s7 == 0;
    ST32(sp+12, FBITS(f1));
    if (cnd_) { goto L_0890B684; }
    goto L_0890AC68;
L_0890AC68:;
    v0 = LD32(s3+16);
    v1 = LD32(a0+100);
    goto L_0890AC70;
L_0890AC70:;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    v0 = s5 + 176;
    a0 = sp + 0;
    a1 = v0 + 0;
    ST32(sp+128, v0);
    v0 = func_0890BB40(a0, a1, a2);
    goto L_0890AC90;
L_0890AC90:;
    ST32(sp+124, v0);
    v0 = v0 & 0xf0;
    cnd_ = v0 == 0;
    v1 = LD32(sp+120);
    if (cnd_) { goto L_0890B66C; }
    goto L_0890ACA0;
L_0890ACA0:;
    v0 = LD32(s3+44);
    ST32(sp+132, 0);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0890ADE8; }
    goto L_0890ACB0;
L_0890ACB0:;
    s6 = 0 + 0;
    goto L_0890ACB4;
L_0890ACB4:;
    v0 = LD32(s3+52);
    a0 = s6 + v0;
    v1 = LD32(a0);
    ST32(sp+32, v1);
    v0 = LD32(a0+4);
    ST32(sp+36, v0);
    v1 = LD32(a0+8);
    ST32(sp+40, v1);
    v0 = LD32(a0+12);
    ST32(sp+44, v0);
    v1 = LD32(a0+16);
    ST32(sp+48, v1);
    v0 = LD32(a0+20);
    cnd_ = s7 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_0890AD08; }
    goto L_0890ACF0;
L_0890ACF0:;
    f0 = BITSF(LD32(a0+12));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+40, FBITS(f0));
    f1 = BITSF(LD32(a0+8));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+44, FBITS(f1));
    goto L_0890AD08;
L_0890AD08:;
    a2 = D_08BD3760 - (14176);
    a0 = sp + 32;
    a1 = a2 + 14176;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890AD18;
L_0890AD18:;
    cnd_ = v0 != 0;
    a0 = sp + 32;
    if (cnd_) { goto L_0890AE18; }
    goto L_0890AD20;
L_0890AD20:;
    a2 = LD32(s3+44);
    goto L_0890AD24;
L_0890AD24:;
    s4 = s4 + 1;
    goto L_0890AD28;
L_0890AD28:;
    v0 = s4 < a2;
    cnd_ = v0 != 0;
    s6 = s6 + 24;
    if (cnd_) { goto L_0890ACB4; }
    goto L_0890AD34;
L_0890AD34:;
    a2 = LD32(sp+132);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_0890ADEC; }
    goto L_0890AD40;
L_0890AD40:;
    s0 = D_08BBF704 - (-2300);
    v0 = LD32(s0-2300);
    s2 = D_08B162B8 - (25272);
    v1 = LD32(s2+25272);
    v0 = v0 + 10;
    cnd_ = v1 == v0;
    ST32(s0-2300, v0);
    if (cnd_) { goto L_0890AD68; }
    goto L_0890AD5C;
L_0890AD5C:;
    a0 = v0 + 0;
    ST32(s2+25272, v0);
    func_08A98808(a0);
    goto L_0890AD68;
L_0890AD68:;
    v0 = D_08BB1D1C - (7452);
    s1 = D_08BD3740 - (14144);
    a0 = LD32(v0+7452);
    a1 = LD32(s1+14144);
    v0 = D_08BBF740 - (-2240);
    t1 = a0 << 3;
    v1 = a1 << 3;
    t1 = t1 - a0;
    v1 = v1 - a1;
    v1 = v1 << 2;
    t1 = t1 << 12;
    a3 = LD32(sp+132);
    t1 = t1 + v1;
    v0 = v0 - 2240;
    t1 = t1 + v0;
    a0 = s5 + 0;
    a1 = 4;
    a2 = 478;
    t0 = 0 + 0;
    func_08ABA6F8(a1, a2, a3, t0, t1);
    goto L_0890ADB8;
L_0890ADB8:;
    v0 = LD32(s0-2300);
    v1 = LD32(s2+25272);
    v0 = v0 - 10;
    cnd_ = v1 == v0;
    ST32(s0-2300, v0);
    if (cnd_) { goto L_0890ADD8; }
    goto L_0890ADCC;
L_0890ADCC:;
    a0 = v0 + 0;
    ST32(s2+25272, v0);
    func_08A98808(a0);
    goto L_0890ADD8;
L_0890ADD8:;
    v0 = LD32(s1+14144);
    a3 = LD32(sp+132);
    v0 = v0 + a3;
    ST32(s1+14144, v0);
    goto L_0890ADE8;
L_0890ADE8:;
    goto L_0890ADEC;
L_0890ADEC:;
    sp = sp + 224;
    return;
L_0890AE18:;
    a1 = s5 + 112;
    v0 = func_0890B9D4(a0, a1);
    goto L_0890AE20;
L_0890AE20:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s3+44); goto L_0890AD24; }
    goto L_0890AE28;
L_0890AE28:;
    a1 = LD32(sp+128);
    a2 = LD32(sp+124);
    a0 = sp + 32;
    v0 = func_0890BB40(a0, a1, a2);
    goto L_0890AE38;
L_0890AE38:;
    v1 = v0 + 0;
    v0 = v0 & 0xf0;
    cnd_ = v0 == 0;
    v0 = (v1 >> 6) & 0x1;
    if (cnd_) { goto L_0890B64C; }
    goto L_0890AE48;
L_0890AE48:;
    a2 = LD32(s3+44);
    t2 = (v1 >> 4) & 0x1;
    a0 = (v1 >> 7) & 0x1;
    ST32(sp+136, v0);
    v1 = (v1 >> 5) & 0x1;
    v0 = a2 - 1;
    ST32(sp+148, t2);
    ST32(sp+140, a0);
    ST32(sp+144, v1);
    cnd_ = s4 == v0;
    ST32(sp+152, 0);
    if (cnd_) { goto L_0890B62C; }
    goto L_0890AE74;
L_0890AE74:;
    a3 = LD32(s3+48);
    a1 = s4 << 2;
    v0 = a1 + a3;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    v1 = v1 - a0;
    ST32(sp+156, v1);
    goto L_0890AE90;
L_0890AE90:;
    t0 = LD32(sp+156);
    v0 = t0 < 0x101u;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s4 + 1; goto L_0890AD28; }
    goto L_0890AEA0;
L_0890AEA0:;
    v0 = LD32(s5+52);
    v1 = 0xb6db0000u;
    v1 = v1 | 0x6db7;
    v0 = s3 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s5+36);
    a1 = a1 + a3;
    a1 = LD32(a1);
    v0 = lo;
    v0 = v0 < a0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    ST32(sp+160, 0);
    if (cnd_) { goto L_0890B620; }
    goto L_0890AED8;
L_0890AED8:;
    v0 = LD32(s3+4);
    v1 = LD_U16(s5+72);
    goto L_0890AEE0;
L_0890AEE0:;
    v0 = v0 + a1;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s5+56);
    fp = 0 + 0;
    v0 = lo;
    a0 = a0 + v0;
    v0 = LD32(sp+156);
    ST32(sp+164, a0);
    v0 = 0 < v0;
    cnd_ = v0 == 0;
    ST32(sp+168, v0);
    if (cnd_) { goto L_0890B030; }
    goto L_0890AF0C;
L_0890AF0C:;
    s2 = D_08BCD740 - (-10432);
    s2 = s2 - 10432;
    goto L_0890AF14;
L_0890AF14:;
    v1 = LD32(sp+164);
    a0 = LD32(sp+152);
    s1 = LD_U16(s3+2);
    fp = fp + 1;
    s0 = v1 + a0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_0890CAC8(a0, a1);
    goto L_0890AF34;
L_0890AF34:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    ST32(sp+112, v0);
    {v[0]=BITSF(LD32(sp+(112)));}
    {float s0=v[0];u32 in_[4]={FBITS(s0),0,0,0};u32 out_[4]={0,0,0,0};for(int i=0;i<4;i++)out_[i]=((((in_[0]>>(8*i))&0xff))*0x01010101u)>>1;float d0=BITSF(out_[0]);float d1=BITSF(out_[1]);float d2=BITSF(out_[2]);float d3=BITSF(out_[3]);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=(float)(s32)FBITS(s0)*BITSF(0x34000000u);float d1=(float)(s32)FBITS(s1)*BITSF(0x34000000u);float d2=(float)(s32)FBITS(s2)*BITSF(0x34000000u);float d3=(float)(s32)FBITS(s3)*BITSF(0x34000000u);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=s2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = func_0890CA6C(a0, a1);
    goto L_0890AF58;
L_0890AF58:;
    a1 = s1 + 0;
    a2 = LDU32(v0);
    STU32(sp+64, a2);
    a0 = s0 + 0;
    v0 = func_0890CB94(a0, a1);
    goto L_0890AF74;
L_0890AF74:;
    a0 = s0 + 0;
    v1 = LDU32(v0);
    a1 = (u32)(s32)LD_S16(v0+4);
    STU32(sp+80, v1);
    ST16(sp+84, a1);
    a1 = s1 + 0;
    v1 = (u32)(s32)LD_S16(sp+64);
    t0 = (u32)(s32)LD_S16(sp+80);
    t2 = (u32)(s32)LD_S16(sp+82);
    v0 = (u32)(s32)LD_S16(sp+84);
    f3 = BITSF(v1);
    f0 = BITSF(t0);
    f1 = BITSF(t2);
    f2 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f5 = (float)(s32)FBITS(f1);
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f3);
    ST32(s2+16, FBITS(f4));
    ST32(s2+24, FBITS(f0));
    ST32(s2+28, FBITS(f1));
    ST32(s2+20, FBITS(f5));
    v0 = func_0890CBFC(a0, a1);
    goto L_0890AFD8;
L_0890AFD8:;
    a1 = (u32)(s32)LD_S16(sp+66);
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(a1);
    f3 = BITSF(LD32(v0+4));
    a0 = LD32(sp+156);
    f1 = (float)(s32)FBITS(f0);
    ST32(s2+32, FBITS(f2));
    v1 = fp < a0;
    ST32(s2+36, FBITS(f3));
    ST32(s2+40, FBITS(f4));
    ST32(s2+44, FBITS(f1));
    s2 = s2 + 48;
    a2 = LD32(sp+120);
    a3 = LD32(sp+152);
    ST32(sp+96, FBITS(f2));
    v0 = LD32(a2);
    ST32(sp+100, FBITS(f3));
    a3 = a3 + v0;
    ST32(sp+152, a3);
    cnd_ = v1 != 0;
    ST32(sp+104, FBITS(f4));
    if (cnd_) { goto L_0890AF14; }
    goto L_0890B030;
L_0890B030:;
    cnd_ = s7 == 0;
    a3 = LD32(sp+156);
    if (cnd_) { goto L_0890B074; }
    goto L_0890B038;
L_0890B038:;
    t0 = LD32(sp+168);
    cnd_ = t0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0890B074; }
    goto L_0890B044;
L_0890B044:;
    t2 = D_08BCD740 - (-10432);
    t2 = t2 - 10432;
    v1 = t2 + 32;
    goto L_0890B050;
L_0890B050:;
    f0 = BITSF(LD32(v1+4));
    a1 = LD32(sp+156);
    a0 = a0 + 1;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = a0 < a1;
    ST32(v1+4, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 48;
    if (cnd_) { goto L_0890B050; }
    goto L_0890B070;
L_0890B070:;
    a3 = LD32(sp+156);
    goto L_0890B074;
L_0890B074:;
    a2 = LD32(sp+144);
    cnd_ = a2 == 0;
    ST32(sp+116, a3);
    if (cnd_) { goto L_0890B088; }
    goto L_0890B080;
L_0890B080:;
    cnd_ = a3 != 0;
    a1 = D_08BCD740 - (-10432);
    if (cnd_) { goto L_0890B5F4; }
    goto L_0890B088;
L_0890B088:;
    t2 = LD32(sp+136);
    cnd_ = t2 == 0;
    a1 = LD32(sp+140);
    if (cnd_) { goto L_0890B0A0; }
    goto L_0890B094;
L_0890B094:;
    cnd_ = a3 != 0;
    if (cnd_) { v1 = LD32(sp+160); goto L_0890B5A4; }
    goto L_0890B09C;
L_0890B09C:;
    a1 = LD32(sp+140);
    goto L_0890B0A0;
L_0890B0A0:;
    cnd_ = a1 == 0;
    t2 = LD32(sp+148);
    if (cnd_) { goto L_0890B0B4; }
    goto L_0890B0A8;
L_0890B0A8:;
    cnd_ = a3 != 0;
    if (cnd_) { a3 = LD32(sp+160); goto L_0890B554; }
    goto L_0890B0B0;
L_0890B0B0:;
    t2 = LD32(sp+148);
    goto L_0890B0B4;
L_0890B0B4:;
    cnd_ = t2 == 0;
    if (cnd_) { goto L_0890B114; }
    goto L_0890B0BC;
L_0890B0BC:;
    cnd_ = a3 == 0;
    if (cnd_) { a2 = LD32(s3+44); goto L_0890AD24; }
    goto L_0890B0C4;
L_0890B0C4:;
    v1 = LD32(sp+160);
    v0 = 1;
    a0 = D_08BCD740 - (-10432);
    s0 = v0 - v1;
    a1 = v1 << 1;
    a2 = s0 << 1;
    a1 = a1 + v1;
    a2 = a2 + s0;
    a0 = a0 - 10432;
    a1 = a1 << 12;
    a2 = a2 << 12;
    a1 = a1 + a0;
    a2 = a2 + a0;
    a3 = sp + 116;
    a0 = s5 + 0;
    t0 = s5 + 272;
    { u64 r_ = func_0890A53C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890B108;
L_0890B108:;
    cnd_ = v0 == 0;
    a3 = LD32(sp+116);
    if (cnd_) { goto L_0890B114; }
    goto L_0890B110;
L_0890B110:;
    ST32(sp+160, s0);
    goto L_0890B114;
L_0890B114:;
    cnd_ = a3 == 0;
    if (cnd_) { a2 = LD32(s3+44); goto L_0890AD24; }
    goto L_0890B11C;
L_0890B11C:;
    v1 = D_08BD3740 - (14144);
    a1 = LD32(v1+14144);
    v0 = a1 + a3;
    v0 = v0 + 3;
    v0 = v0 < 0x401u;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s3+44); goto L_0890AD24; }
    goto L_0890B138;
L_0890B138:;
    v0 = D_08BB1D1C - (7452);
    a2 = LD32(sp+132);
    a0 = LD32(v0+7452);
    t0 = LD32(sp+160);
    a1 = a1 + a2;
    v0 = a1 << 3;
    v1 = a0 << 3;
    v1 = v1 - a0;
    v0 = v0 - a1;
    v0 = v0 << 2;
    v1 = v1 << 12;
    v1 = v1 + v0;
    a0 = t0 << 1;
    v0 = D_08BBF740 - (-2240);
    v0 = v0 - 2240;
    a0 = a0 + t0;
    t2 = D_08BCD740 - (-10432);
    v1 = v1 + v0;
    a0 = a0 << 12;
    v0 = 0x40000000u;
    t2 = t2 - 10432;
    a1 = v1 /* uncached output pointer for VFPU stores */;
    cnd_ = a2 == 0;
    a0 = a0 + t2;
    if (cnd_) { goto L_0890B348; }
    goto L_0890B198;
L_0890B198:;
    {u32 a_=a0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=BITSF(F2I(s0*BITSF(0x4b000000u),1));float d1=BITSF(F2I(s1*BITSF(0x4b000000u),1));float d2=BITSF(F2I(s2*BITSF(0x4b000000u),1));float d3=BITSF(F2I(s3*BITSF(0x4b000000u),1));v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4&&i<4;i++){s32 x=(s32)in_[i];out_[0]|=(u32)(x<0?0:(u32)x>>23)<<(8*i);}float d0=BITSF(out_[0]);v[0]=d0;}
    {ST32(a1+(4),FBITS(v[0]));}
    f0 = BITSF(LD32(a0+16));
    a2 = a1 + 0;
    a3 = a0 + 16;
    f1 = BITSF(F2I(f0, 1));
    t1 = D_08AED1C8 - (-11832);
    f2 = BITSF(LD32(t1-11832));
    v0 = FBITS(f1);
    ST16(a2+8, v0);
    f0 = BITSF(LD32(a3+4));
    f1 = BITSF(F2I(f0, 1));
    v1 = FBITS(f1);
    ST16(a2+10, v1);
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(F2I(f0, 1));
    t0 = FBITS(f1);
    ST16(a2+12, t0);
    f0 = BITSF(LD32(a3+12));
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v0 = FBITS(f1);
    cnd_ = !fcc;
    a1 = a1 + 28;
    if (cnd_) { goto L_0890B214; }
    goto L_0890B200;
L_0890B200:;
    f0 = f0 - f2;
    v1 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | v1;
    goto L_0890B214;
L_0890B214:;
    ST16(a2, v0);
    t0 = a0 + 32;
    f0 = BITSF(LD32(a0+32));
    f2 = BITSF(LD32(t1-11832));
    ST32(a2+16, FBITS(f0));
    f1 = BITSF(LD32(t0+4));
    ST32(a2+20, FBITS(f1));
    f0 = BITSF(LD32(t0+8));
    ST32(a2+24, FBITS(f0));
    f0 = BITSF(LD32(t0+12));
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v1 = FBITS(f1);
    cnd_ = !fcc;
    t2 = LD32(sp+132);
    if (cnd_) { goto L_0890B264; }
    goto L_0890B250;
L_0890B250:;
    f0 = f0 - f2;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    v1 = v1 | v0;
    goto L_0890B264;
L_0890B264:;
    ST16(a2+2, v1);
    t2 = t2 + 1;
    v0 = t2 & 0x1;
    cnd_ = v0 == 0;
    ST32(sp+132, t2);
    if (cnd_) { goto L_0890B54C; }
    goto L_0890B278;
L_0890B278:;
    {u32 a_=a0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=BITSF(F2I(s0*BITSF(0x4b000000u),1));float d1=BITSF(F2I(s1*BITSF(0x4b000000u),1));float d2=BITSF(F2I(s2*BITSF(0x4b000000u),1));float d3=BITSF(F2I(s3*BITSF(0x4b000000u),1));v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4&&i<4;i++){s32 x=(s32)in_[i];out_[0]|=(u32)(x<0?0:(u32)x>>23)<<(8*i);}float d0=BITSF(out_[0]);v[0]=d0;}
    {ST32(a1+(4),FBITS(v[0]));}
    f1 = BITSF(LD32(a0+16));
    v1 = a1 + 0;
    f2 = BITSF(LD32(t1-11832));
    f0 = BITSF(F2I(f1, 1));
    v0 = FBITS(f0);
    ST16(v1+8, v0);
    f1 = BITSF(LD32(a3+4));
    f0 = BITSF(F2I(f1, 1));
    a2 = FBITS(f0);
    ST16(v1+10, a2);
    f1 = BITSF(LD32(a3+8));
    f0 = BITSF(F2I(f1, 1));
    t2 = FBITS(f0);
    ST16(v1+12, t2);
    f0 = BITSF(LD32(a3+12));
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v0 = FBITS(f1);
    cnd_ = !fcc;
    a1 = a1 + 28;
    if (cnd_) { goto L_0890B2EC; }
    goto L_0890B2D8;
L_0890B2D8:;
    f0 = f0 - f2;
    a2 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | a2;
    goto L_0890B2EC;
L_0890B2EC:;
    ST16(v1, v0);
    f0 = BITSF(LD32(a0+32));
    f2 = BITSF(LD32(t1-11832));
    ST32(v1+16, FBITS(f0));
    f1 = BITSF(LD32(t0+4));
    ST32(v1+20, FBITS(f1));
    f0 = BITSF(LD32(t0+8));
    ST32(v1+24, FBITS(f0));
    f0 = BITSF(LD32(t0+12));
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v0 = FBITS(f1);
    cnd_ = !fcc;
    t0 = LD32(sp+132);
    if (cnd_) { goto L_0890B338; }
    goto L_0890B324;
L_0890B324:;
    f0 = f0 - f2;
    a2 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | a2;
    goto L_0890B338;
L_0890B338:;
    a3 = LD32(sp+116);
    ST16(v1+2, v0);
    t0 = t0 + 1;
    ST32(sp+132, t0);
    goto L_0890B348;
L_0890B348:;
    cnd_ = a3 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0890B428; }
    goto L_0890B350;
L_0890B350:;
    t1 = D_08AED1C8 - (-11832);
    f2 = BITSF(LD32(t1-11832));
    a3 = LD32(sp+116);
    t2 = 0x80000000u;
    f3 = f2;
    a2 = a1 + 0;
    v1 = a0 + 0;
    goto L_0890B36C;
L_0890B36C:;
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=BITSF(F2I(s0*BITSF(0x4b000000u),1));float d1=BITSF(F2I(s1*BITSF(0x4b000000u),1));float d2=BITSF(F2I(s2*BITSF(0x4b000000u),1));float d3=BITSF(F2I(s3*BITSF(0x4b000000u),1));v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4&&i<4;i++){s32 x=(s32)in_[i];out_[0]|=(u32)(x<0?0:(u32)x>>23)<<(8*i);}float d0=BITSF(out_[0]);v[0]=d0;}
    {ST32(a2+(4),FBITS(v[0]));}
    f0 = BITSF(LD32(v1+16));
    t0 = t0 + 1;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    ST16(a2+8, v0);
    f0 = BITSF(LD32(v1+20));
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    ST16(a2+10, v0);
    f0 = BITSF(LD32(v1+24));
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    ST16(a2+12, v0);
    f0 = BITSF(LD32(v1+28));
    f1 = f0 - f2;
    fcc = FCMP(f2, f0, 14);
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    cnd_ = !fcc;
    t1 = t0 < a3;
    if (cnd_) { goto L_0890B3D8; }
    goto L_0890B3CC;
L_0890B3CC:;
    f1 = BITSF(F2I(f1, 1));
    v0 = FBITS(f1);
    v0 = v0 | t2;
    goto L_0890B3D8;
L_0890B3D8:;
    ST16(a2, v0);
    f0 = BITSF(LD32(v1+32));
    ST32(a2+16, FBITS(f0));
    f1 = BITSF(LD32(v1+36));
    ST32(a2+20, FBITS(f1));
    f0 = BITSF(LD32(v1+40));
    ST32(a2+24, FBITS(f0));
    f1 = BITSF(LD32(v1+44));
    f0 = f1 - f3;
    fcc = FCMP(f3, f1, 14);
    f1 = BITSF(F2I(f1, 1));
    v0 = FBITS(f1);
    cnd_ = !fcc;
    v1 = v1 + 48;
    if (cnd_) { goto L_0890B41C; }
    goto L_0890B410;
L_0890B410:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | t2;
    goto L_0890B41C;
L_0890B41C:;
    ST16(a2+2, v0);
    cnd_ = t1 != 0;
    a2 = a2 + 28;
    if (cnd_) { goto L_0890B36C; }
    goto L_0890B428;
L_0890B428:;
    a2 = LD32(s3+44);
    v0 = a2 - 1;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+132); goto L_0890B540; }
    goto L_0890B43C;
L_0890B43C:;
    v0 = a3 << 1;
    v0 = v0 + a3;
    v1 = a3 << 3;
    v1 = v1 - a3;
    v0 = v0 << 4;
    v0 = a0 + v0;
    v1 = v1 << 2;
    a1 = a1 + v1;
    {u32 a_=v0+(-48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=BITSF(F2I(s0*BITSF(0x4b000000u),1));float d1=BITSF(F2I(s1*BITSF(0x4b000000u),1));float d2=BITSF(F2I(s2*BITSF(0x4b000000u),1));float d3=BITSF(F2I(s3*BITSF(0x4b000000u),1));v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];u32 in_[4]={FBITS(s0),FBITS(s1),FBITS(s2),FBITS(s3)};u32 out_[4]={0,0,0,0};for(int i=0;i<4&&i<4;i++){s32 x=(s32)in_[i];out_[0]|=(u32)(x<0?0:(u32)x>>23)<<(8*i);}float d0=BITSF(out_[0]);v[0]=d0;}
    {ST32(a1+(4),FBITS(v[0]));}
    f0 = BITSF(LD32(v0-32));
    v1 = v0 - 32;
    t1 = D_08AED1C8 - (-11832);
    f1 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(t1-11832));
    a0 = v0 - 48;
    a2 = FBITS(f1);
    ST16(a1+8, a2);
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(F2I(f0, 1));
    a3 = FBITS(f1);
    ST16(a1+10, a3);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(F2I(f0, 1));
    t0 = FBITS(f1);
    ST16(a1+12, t0);
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v0 = FBITS(f1);
    cnd_ = !fcc;
    if (cnd_) { ST16(a1, v0); goto L_0890B4DC; }
    goto L_0890B4C4;
L_0890B4C4:;
    f0 = f0 - f2;
    v1 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | v1;
    ST16(a1, v0);
    goto L_0890B4DC;
L_0890B4DC:;
    v0 = a0 + 32;
    f1 = BITSF(LD32(a0+32));
    f2 = BITSF(LD32(t1-11832));
    ST32(a1+16, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(a1+20, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(a1+24, FBITS(f1));
    f0 = BITSF(LD32(v0+12));
    f1 = BITSF(F2I(f0, 1));
    fcc = FCMP(f2, f0, 14);
    v0 = FBITS(f1);
    cnd_ = !fcc;
    a0 = LD32(sp+132);
    if (cnd_) { goto L_0890B528; }
    goto L_0890B514;
L_0890B514:;
    f0 = f0 - f2;
    v1 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | v1;
    goto L_0890B528;
L_0890B528:;
    ST16(a1+2, v0);
    a0 = a0 + 1;
    ST32(sp+132, a0);
    a2 = LD32(s3+44);
    a3 = LD32(sp+116);
    a1 = LD32(sp+132);
    goto L_0890B540;
L_0890B540:;
    a1 = a1 + a3;
    ST32(sp+132, a1);
    goto L_0890AD24;
L_0890B54C:;
    a3 = LD32(sp+116);
    goto L_0890B348;
L_0890B554:;
    a2 = 1;
    t0 = D_08BCD740 - (-10432);
    s0 = a2 - a3;
    a1 = a3 << 1;
    a2 = s0 << 1;
    a1 = a1 + a3;
    a2 = a2 + s0;
    t0 = t0 - 10432;
    a1 = a1 << 12;
    a2 = a2 << 12;
    a1 = a1 + t0;
    a2 = a2 + t0;
    a0 = s5 + 0;
    a3 = sp + 116;
    t0 = s5 + 256;
    { u64 r_ = func_0890A53C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890B594;
L_0890B594:;
    cnd_ = v0 == 0;
    a3 = LD32(sp+116);
    if (cnd_) { goto L_0890B0B0; }
    goto L_0890B59C;
L_0890B59C:;
    ST32(sp+160, s0);
    goto L_0890B0B0;
L_0890B5A4:;
    v0 = 1;
    a0 = D_08BCD740 - (-10432);
    s0 = v0 - v1;
    a1 = v1 << 1;
    a2 = s0 << 1;
    a1 = a1 + v1;
    a2 = a2 + s0;
    a0 = a0 - 10432;
    a1 = a1 << 12;
    a2 = a2 << 12;
    a1 = a1 + a0;
    a2 = a2 + a0;
    a3 = sp + 116;
    a0 = s5 + 0;
    t0 = s5 + 240;
    { u64 r_ = func_0890A53C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890B5E4;
L_0890B5E4:;
    cnd_ = v0 == 0;
    a3 = LD32(sp+116);
    if (cnd_) { goto L_0890B09C; }
    goto L_0890B5EC;
L_0890B5EC:;
    ST32(sp+160, s0);
    goto L_0890B09C;
L_0890B5F4:;
    a1 = a1 - 10432;
    a0 = s5 + 0;
    a2 = a1 + 12288;
    a3 = sp + 116;
    t0 = s5 + 288;
    { u64 r_ = func_0890A53C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890B60C;
L_0890B60C:;
    cnd_ = v0 == 0;
    a3 = LD32(sp+116);
    if (cnd_) { goto L_0890B088; }
    goto L_0890B614;
L_0890B614:;
    t0 = 1;
    ST32(sp+160, t0);
    goto L_0890B088;
L_0890B620:;
    v0 = LD32(s3+4);
    v1 = LD_U16(s5+66);
    goto L_0890AEE0;
L_0890B62C:;
    a3 = LD32(s3+48);
    a1 = s4 << 2;
    v0 = LD_U16(s3);
    v1 = a1 + a3;
    a0 = LD32(v1);
    v0 = v0 - a0;
    ST32(sp+156, v0);
    goto L_0890AE90;
L_0890B64C:;
    t0 = LD32(sp+120);
    a0 = s5 + 0;
    a1 = s3 + 0;
    a3 = LD32(t0);
    a2 = s4 + 0;
    func_0890A484(a0, a1, a2);
    goto L_0890B664;
L_0890B664:;
    a2 = LD32(s3+44);
    goto L_0890AD24;
L_0890B66C:;
    a0 = s5 + 0;
    a1 = s3 + 0;
    a2 = LD32(v1);
    func_0890A3B0(a0, a1);
    goto L_0890B67C;
L_0890B67C:;
    goto L_0890ADEC;
L_0890B684:;
    v0 = LD32(s3+16);
    v1 = LD32(s5+96);
    goto L_0890AC70;
}

/* 0890B690 */
u32 func_0890B690(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890B690:;
    f3 = BITSF(LD32(a1));
    f0 = BITSF(0);
    sp = sp - 16;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v0 = sp + 0;
    if (cnd_) { goto L_0890B9CC; }
    goto L_0890B6AC;
L_0890B6AC:;
    f5 = BITSF(LD32(a0+4));
    goto L_0890B6B0;
L_0890B6B0:;
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(a0+8)); goto L_0890B6CC; }
    goto L_0890B6C8;
L_0890B6C8:;
    f4 = BITSF(LD32(a0+12));
    goto L_0890B6CC;
L_0890B6CC:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+16)); goto L_0890B6E8; }
    goto L_0890B6E4;
L_0890B6E4:;
    f0 = BITSF(LD32(a0+20));
    goto L_0890B6E8;
L_0890B6E8:;
    ST32(v0+8, FBITS(f0));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v1 = FBITS(f3);
    ST32(v0+4, FBITS(f4));
    {vr4=BITSF(v1);}
    v1 = FBITS(f2);
    ST32(v0, FBITS(f5));
    {vr5=BITSF(v1);}
    v1 = FBITS(f1);
    v0 = LD32(sp);
    {vr6=BITSF(v1);}
    {vr0=BITSF(v0);}
    f2 = BITSF(LD32(a1+12));
    v0 = LD32(sp+8);
    v1 = LD32(sp+4);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_0890B74C; }
    goto L_0890B748;
L_0890B748:;
    a2 = 0 + 0;
    goto L_0890B74C;
L_0890B74C:;
    cnd_ = a2 != 0;
    v1 = 4;
    if (cnd_) { goto L_0890B9A8; }
    goto L_0890B754;
L_0890B754:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(0);
    a2 = a1 + 16;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = sp + 0;
    if (cnd_) { goto L_0890B9C4; }
    goto L_0890B770;
L_0890B770:;
    f4 = BITSF(LD32(a0+4));
    goto L_0890B774;
L_0890B774:;
    f3 = BITSF(LD32(a2+4));
    f0 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(a0+8)); goto L_0890B790; }
    goto L_0890B78C;
L_0890B78C:;
    f2 = BITSF(LD32(a0+12));
    goto L_0890B790;
L_0890B790:;
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+16)); goto L_0890B7AC; }
    goto L_0890B7A8;
L_0890B7A8:;
    f0 = BITSF(LD32(a0+20));
    goto L_0890B7AC;
L_0890B7AC:;
    ST32(v0+8, FBITS(f0));
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(v0, FBITS(f4));
    a3 = 1;
    ST32(v0+4, FBITS(f2));
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {vr4=BITSF(v0);}
    f2 = BITSF(LD32(a2+12));
    {vr5=BITSF(v1);}
    v0 = LD32(sp+8);
    v1 = LD32(a2);
    {vr6=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f3);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = 0 + 0; goto L_0890B814; }
    goto L_0890B814;
L_0890B814:;
    cnd_ = a3 != 0;
    v1 = 8;
    if (cnd_) { goto L_0890B9A8; }
    goto L_0890B81C;
L_0890B81C:;
    f1 = BITSF(LD32(a1+32));
    f0 = BITSF(0);
    a2 = a1 + 32;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = sp + 0;
    if (cnd_) { goto L_0890B9BC; }
    goto L_0890B838;
L_0890B838:;
    f4 = BITSF(LD32(a0+4));
    goto L_0890B83C;
L_0890B83C:;
    f3 = BITSF(LD32(a2+4));
    f0 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(a0+8)); goto L_0890B858; }
    goto L_0890B854;
L_0890B854:;
    f2 = BITSF(LD32(a0+12));
    goto L_0890B858;
L_0890B858:;
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+16)); goto L_0890B874; }
    goto L_0890B870;
L_0890B870:;
    f0 = BITSF(LD32(a0+20));
    goto L_0890B874;
L_0890B874:;
    ST32(v0+8, FBITS(f0));
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(v0, FBITS(f4));
    a3 = 1;
    ST32(v0+4, FBITS(f2));
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {vr4=BITSF(v0);}
    f2 = BITSF(LD32(a2+12));
    {vr5=BITSF(v1);}
    v0 = LD32(sp+8);
    v1 = LD32(a2);
    {vr6=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = FBITS(f3);
    v1 = FBITS(f1);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = 0 + 0; goto L_0890B8DC; }
    goto L_0890B8DC;
L_0890B8DC:;
    cnd_ = a3 != 0;
    v1 = 1;
    if (cnd_) { goto L_0890B9A8; }
    goto L_0890B8E4;
L_0890B8E4:;
    f1 = BITSF(LD32(a1+48));
    f0 = BITSF(0);
    a1 = a1 + 48;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = sp + 0;
    if (cnd_) { goto L_0890B9B4; }
    goto L_0890B900;
L_0890B900:;
    f4 = BITSF(LD32(a0+4));
    goto L_0890B904;
L_0890B904:;
    f3 = BITSF(LD32(a1+4));
    f0 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(a0+8)); goto L_0890B920; }
    goto L_0890B91C;
L_0890B91C:;
    f2 = BITSF(LD32(a0+12));
    goto L_0890B920;
L_0890B920:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+16)); goto L_0890B93C; }
    goto L_0890B938;
L_0890B938:;
    f0 = BITSF(LD32(a0+20));
    goto L_0890B93C;
L_0890B93C:;
    ST32(v0+8, FBITS(f0));
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(v0, FBITS(f4));
    a0 = 1;
    ST32(v0+4, FBITS(f2));
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {vr4=BITSF(v0);}
    f2 = BITSF(LD32(a1+12));
    {vr5=BITSF(v1);}
    v0 = LD32(sp+8);
    v1 = LD32(a1);
    {vr6=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f3);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_0890B9A4; }
    goto L_0890B9A4;
L_0890B9A4:;
    v1 = a0 << 1;
    goto L_0890B9A8;
L_0890B9A8:;
    v0 = v1 + 0;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;return v0; }
L_0890B9B4:;
    f4 = BITSF(LD32(a0));
    goto L_0890B904;
L_0890B9BC:;
    f4 = BITSF(LD32(a0));
    goto L_0890B83C;
L_0890B9C4:;
    f4 = BITSF(LD32(a0));
    goto L_0890B774;
L_0890B9CC:;
    f5 = BITSF(LD32(a0));
    goto L_0890B6B0;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;
}

/* 0890B9D4 */
u32 func_0890B9D4(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890B9D4:;
    sp = sp - 16;
    v0 = func_0890B690(a0, a1);
    goto L_0890B9E4;
L_0890B9E4:;
    sp = sp + 16;
    return v0;
}

/* 0890B9F0 */
u32 func_0890B9F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890B9F0:;
    f5 = BITSF(LD32(a1));
    f0 = BITSF(0);
    fcc = FCMP(f0, f5, 12);
    cnd_ = !fcc;
    sp = sp - 16;
    if (cnd_) { goto L_0890BAB4; }
    goto L_0890BA08;
L_0890BA08:;
    f0 = BITSF(LD32(a0+4));
    goto L_0890BA0C;
L_0890BA0C:;
    f4 = BITSF(LD32(a1+4));
    ST32(sp, FBITS(f0));
    f0 = BITSF(0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+8)); goto L_0890BA2C; }
    goto L_0890BA28;
L_0890BA28:;
    f0 = BITSF(LD32(a0+12));
    goto L_0890BA2C;
L_0890BA2C:;
    f1 = BITSF(LD32(a1+8));
    ST32(sp+4, FBITS(f0));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(a0+16)); goto L_0890BA4C; }
    goto L_0890BA48;
L_0890BA48:;
    f3 = BITSF(LD32(a0+20));
    goto L_0890BA4C;
L_0890BA4C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    v0 = FBITS(f5);
    f2 = BITSF(LD32(a1+12));
    {vr4=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = FBITS(f4);
    {vr5=BITSF(v0);}
    v0 = FBITS(f1);
    {vr6=BITSF(v0);}
    v0 = LD32(sp);
    {vr0=BITSF(v0);}
    v0 = FBITS(f3);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0890BAA8; }
    goto L_0890BAA4;
L_0890BAA4:;
    v0 = 0 + 0;
    goto L_0890BAA8;
L_0890BAA8:;
    v0 = v0 & 0xff;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;return v0; }
L_0890BAB4:;
    f0 = BITSF(LD32(a0));
    goto L_0890BA0C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 0890BABC */
u32 func_0890BABC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BABC:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BADC;
L_0890BADC:;
    s0 = 64;
    a1 = s1 + 16;
    if (v0 == 0) s0 = 0;
    a0 = s2 + 0;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BAF0;
L_0890BAF0:;
    v1 = s0 | 0x80;
    a1 = s1 + 32;
    if (v0 != 0) s0 = v1;
    a0 = s2 + 0;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BB04;
L_0890BB04:;
    s1 = s1 + 48;
    v1 = s0 | 0x10;
    if (v0 != 0) s0 = v1;
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BB1C;
L_0890BB1C:;
    v1 = s0 | 0x20;
    if (v0 != 0) s0 = v1;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0890BB40 */
u32 func_0890BB40(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890BB40:;
    sp = sp - 32;
    v0 = a2 & 0x40;
    s3 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890BBFC; }
    goto L_0890BB70;
L_0890BB70:;
    v0 = s0 & 0x80;
    a1 = s2 + 16;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0890BBE8; }
    goto L_0890BB80;
L_0890BB80:;
    v0 = s0 & 0x10;
    a1 = s2 + 32;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0890BBD4; }
    goto L_0890BB90;
L_0890BB90:;
    v0 = s0 & 0x20;
    a1 = s2 + 48;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0890BBC0; }
    goto L_0890BBA0;
L_0890BBA0:;
    v0 = s3 + 0;
    sp = sp + 32;
    return v0;
L_0890BBC0:;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BBC8;
L_0890BBC8:;
    v1 = s3 | 0x20;
    if (v0 != 0) s3 = v1;
    goto L_0890BBA0;
L_0890BBD4:;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BBDC;
L_0890BBDC:;
    v1 = s3 | 0x10;
    if (v0 != 0) s3 = v1;
    goto L_0890BB90;
L_0890BBE8:;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BBF0;
L_0890BBF0:;
    v1 = s3 | 0x80;
    if (v0 != 0) s3 = v1;
    goto L_0890BB80;
L_0890BBFC:;
    s3 = 64;
    v0 = func_0890B9F0(a0, a1);
    goto L_0890BC04;
L_0890BC04:;
    if (v0 == 0) s3 = 0;
    goto L_0890BB70;
}

/* 0890BC0C */
void func_0890BC0C(void)
{
L_0890BC0C:;
    return;
}

/* 0890BC14 */
void func_0890BC14(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BC14:;
    sp = sp - 16;
    func_0890BC38();
    goto L_0890BC24;
L_0890BC24:;
    func_0890BC0C();
    goto L_0890BC2C;
L_0890BC2C:;
    sp = sp + 16;
    return;
}

/* 0890BC38 */
void func_0890BC38(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BC38:;
    a0 = D_08BD3780 - (14208);
    sp = sp - 16;
    a0 = a0 + 14208;
    func_08907500(a0);
    goto L_0890BC4C;
L_0890BC4C:;
    sp = sp + 16;
    return;
}

/* 0890BC58 */
void func_0890BC58(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BC58:;
    a0 = D_08BD3780 - (14208);
    sp = sp - 16;
    a0 = a0 + 14208;
    func_08908B24(a0);
    goto L_0890BC6C;
L_0890BC6C:;
    sp = sp + 16;
    return;
}

/* 0890BC78 */
u64 func_0890BC78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890BC78:;
    sp = sp - 48;
    s6 = a0 ^ 0x1;
    v1 = s6 < 0x1u;
    s5 = a1 ^ 0xffff;
    v0 = s5 < 0x1u;
    v0 = v0 & v1;
    s7 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890BCF4; }
    goto L_0890BCBC;
L_0890BCBC:;
    v0 = D_08BCD740 - (-10432);
    s4 = v0 - 10432;
    s3 = 1;
    s2 = (u32)-1;
    goto L_0890BCCC;
L_0890BCCC:;
    s0 = s4 + 0;
    s1 = 255;
    goto L_0890BCD4;
L_0890BCD4:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_08ABA8B8();
    goto L_0890BCE0;
L_0890BCE0:;
    cnd_ = s1 != s2;
    s0 = s0 + 48;
    if (cnd_) { goto L_0890BCD4; }
    goto L_0890BCE8;
L_0890BCE8:;
    s3 = s3 - 1;
    cnd_ = s3 != s2;
    s4 = s4 + 12288;
    if (cnd_) { goto L_0890BCCC; }
    goto L_0890BCF4;
L_0890BCF4:;
    s0 = s5 < 0x1u;
    v0 = s6 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = D_08BD3780 - (14208);
    if (cnd_) { goto L_0890BD54; }
    goto L_0890BD08;
L_0890BD08:;
    v0 = s7 < 0x1u;
    goto L_0890BD0C;
L_0890BD0C:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = D_08BD3780 - (14208);
    if (cnd_) { goto L_0890BD44; }
    goto L_0890BD18;
L_0890BD18:;
    goto L_0890BD1C;
L_0890BD1C:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0890BD44:;
    a0 = a0 + 14208;
    { u64 r_ = func_08907494(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890BD4C;
L_0890BD4C:;
    goto L_0890BD1C;
L_0890BD54:;
    a0 = a0 + 14208;
    func_08907464(a0);
    goto L_0890BD5C;
L_0890BD5C:;
    v0 = s7 < 0x1u;
    goto L_0890BD0C;
}

/* 0890BD64 */
float func_0890BD64(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0890BD64:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0890BD90; }
    goto L_0890BD7C;
L_0890BD7C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0890BD90; }
    goto L_0890BD90;
L_0890BD90:;
    return f0;
}

/* 0890BD98 */
rv_t func_0890BD98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BD98:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0890BC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890BDAC;
L_0890BDAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890BDB8 */
rv_t func_0890BDB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BDB8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0890BC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890BDCC;
L_0890BDCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890BDD8 */
void func_0890BDD8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BDD8:;
    sp = sp - 16;
    t1 = D_08BD3940 - (14656);
    v0 = D_08BD394A - (14666);
    v1 = LD32(t1+14656);
    t0 = LD_U8(v0+14666);
    a3 = D_08BD3944 - (14660);
    cnd_ = a0 == v1;
    t2 = D_08B162D0 - (25296);
    if (cnd_) { goto L_0890BE38; }
    goto L_0890BDFC;
L_0890BDFC:;
    v1 = 1;
    goto L_0890BE00;
L_0890BE00:;
    v0 = D_08B162DA - (25306);
    goto L_0890BE04;
L_0890BE04:;
    ST8(v0+25306, v1);
    ST32(t1+14656, a0);
    ST32(a3+14660, a1);
    ST32(t2+25296, a2);
    goto L_0890BE14;
L_0890BE14:;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_0890BE28; }
    goto L_0890BE1C;
L_0890BE1C:;
    goto L_0890BE20;
L_0890BE20:;
    sp = sp + 16;
    return;
L_0890BE28:;
    func_0890BFE4();
    goto L_0890BE30;
L_0890BE30:;
    goto L_0890BE20;
L_0890BE38:;
    v0 = LD32(a3+14660);
    cnd_ = a1 != v0;
    v1 = 1;
    if (cnd_) { goto L_0890BE00; }
    goto L_0890BE44;
L_0890BE44:;
    v0 = LD32(t2+25296);
    cnd_ = a2 != v0;
    v0 = D_08B162DA - (25306);
    if (cnd_) { goto L_0890BE04; }
    goto L_0890BE50;
L_0890BE50:;
    goto L_0890BE14;
}

/* 0890BE58 */
void func_0890BE58(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BE58:;
    sp = sp - 16;
    t1 = D_08B162D4 - (25300);
    v0 = D_08BD394A - (14666);
    v1 = LD32(t1+25300);
    t0 = LD_U8(v0+14666);
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    a3 = D_08B162D8 - (25304);
    cnd_ = a0 == v1;
    t2 = D_08BD3948 - (14664);
    if (cnd_) { goto L_0890BEC0; }
    goto L_0890BE84;
L_0890BE84:;
    v1 = 1;
    goto L_0890BE88;
L_0890BE88:;
    v0 = D_08B162D9 - (25305);
    goto L_0890BE8C;
L_0890BE8C:;
    ST32(t1+25300, a0);
    ST8(a3+25304, a1);
    ST8(t2+14664, a2);
    ST8(v0+25305, v1);
    goto L_0890BE9C;
L_0890BE9C:;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_0890BEB0; }
    goto L_0890BEA4;
L_0890BEA4:;
    goto L_0890BEA8;
L_0890BEA8:;
    sp = sp + 16;
    return;
L_0890BEB0:;
    func_0890BF88();
    goto L_0890BEB8;
L_0890BEB8:;
    goto L_0890BEA8;
L_0890BEC0:;
    v0 = LD_U8(a3+25304);
    cnd_ = v0 != a1;
    v1 = 1;
    if (cnd_) { goto L_0890BE88; }
    goto L_0890BECC;
L_0890BECC:;
    v0 = LD_U8(t2+14664);
    cnd_ = v0 != a2;
    v0 = D_08B162D9 - (25305);
    if (cnd_) { goto L_0890BE8C; }
    goto L_0890BED8;
L_0890BED8:;
    goto L_0890BE9C;
}

/* 0890BEE0 */
void func_0890BEE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BEE0:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    s0 = D_08BD394A - (14666);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0890BF3C; }
    goto L_0890BEF8;
L_0890BEF8:;
    v0 = LD_U8(s0+14666);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890BF14; }
    goto L_0890BF04;
L_0890BF04:;
    goto L_0890BF08;
L_0890BF08:;
    sp = sp + 16;
    return;
L_0890BF14:;
    func_0890BF88();
    goto L_0890BF1C;
L_0890BF1C:;
    func_0890BFE4();
    goto L_0890BF24;
L_0890BF24:;
    v0 = 1;
    a0 = 3;
    ST8(s0+14666, v0);
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890BF34;
L_0890BF34:;
    goto L_0890BF08;
L_0890BF3C:;
    v0 = LD_U8(s0+14666);
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_0890BF04; }
    goto L_0890BF48;
L_0890BF48:;
    ST8(s0+14666, 0);
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890BF50;
L_0890BF50:;
    goto L_0890BF08;
}

/* 0890BF58 */
void func_0890BF58(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BF58:;
    sp = sp - 16;
    a1 = D_08BD3949 - (14665);
    v1 = a0 & 0xff;
    v0 = LD_U8(a1+14665);
    cnd_ = v0 == v1;
    a0 = v1 + 0;
    if (cnd_) { goto L_0890BF7C; }
    goto L_0890BF74;
L_0890BF74:;
    ST8(a1+14665, v1);
    func_08A98054(a0);
    goto L_0890BF7C;
L_0890BF7C:;
    sp = sp + 16;
    return;
}

/* 0890BF88 */
void func_0890BF88(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BF88:;
    sp = sp - 16;
    a0 = D_08B162D9 - (25305);
    v0 = LD_U8(a0+25305);
    cnd_ = v0 != 0;
    v0 = D_08B162D4 - (25300);
    if (cnd_) { goto L_0890BFAC; }
    goto L_0890BFA0;
L_0890BFA0:;
    goto L_0890BFA4;
L_0890BFA4:;
    sp = sp + 16;
    return;
L_0890BFAC:;
    a3 = LD32(v0+25300);
    v0 = D_08BD3948 - (14664);
    a2 = LD_U8(v0+14664);
    v0 = D_08AD9334 - (-27852);
    a3 = a3 << 2;
    v0 = v0 - 27852;
    v1 = D_08B162D8 - (25304);
    a3 = a3 + v0;
    ST8(a0+25305, 0);
    a1 = LD_U8(v1+25304);
    a0 = LD32(a3);
    func_08A990F8(a0, a1, a2);
    goto L_0890BFDC;
L_0890BFDC:;
    goto L_0890BFA4;
}

/* 0890BFE4 */
void func_0890BFE4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890BFE4:;
    sp = sp - 16;
    v0 = D_08AD931C - (-27876);
    a3 = D_08B162DA - (25306);
    a0 = v0 - 27876;
    v0 = LD_U8(a3+25306);
    cnd_ = v0 != 0;
    v0 = D_08BD3940 - (14656);
    if (cnd_) { goto L_0890C010; }
    goto L_0890C004;
L_0890C004:;
    goto L_0890C008;
L_0890C008:;
    sp = sp + 16;
    return;
L_0890C010:;
    a1 = LD32(v0+14656);
    v1 = D_08BD3944 - (14660);
    v0 = D_08B162D0 - (25296);
    a2 = LD32(v1+14660);
    v1 = LD32(v0+25296);
    a1 = a1 << 2;
    a2 = a2 << 2;
    v1 = v1 << 2;
    a2 = a2 + a0;
    v1 = v1 + a0;
    a1 = a1 + a0;
    a0 = LD32(a1);
    a1 = LD32(a2);
    a2 = LD32(v1);
    ST8(a3+25306, 0);
    func_08A99134(a0, a1, a2);
    goto L_0890C050;
L_0890C050:;
    goto L_0890C008;
}

/* 0890C058 */
void func_0890C058(void)
{
L_0890C058:;
    return;
}

/* 0890C060 */
void func_0890C060(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0890C060:;
    sp = sp - 64;
    v0 = D_08BD394C - (14668);
    a2 = a2 << 2;
    v0 = v0 + 14668;
    s5 = a2 + v0;
    s6 = a0 + 0;
    s0 = LD32(s5);
    cnd_ = s0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0890C28C; }
    goto L_0890C0A8;
L_0890C0A8:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890C0B0;
L_0890C0B0:;
    a1 = v0 + 0;
    v0 = (u32)-1;
    ST32(a1+16, v0);
    ST32(a1+8, 0);
    ST32(a1+12, 0);
    ST32(a1+20, 0);
    cnd_ = a1 != 0;
    ST32(s5, a1);
    if (cnd_) { goto L_0890C0FC; }
    goto L_0890C0D0;
L_0890C0D0:;
    goto L_0890C0D4;
L_0890C0D4:;
    sp = sp + 64;
    return;
L_0890C0FC:;
    a0 = s6 + 0;
    a2 = 8;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C10C;
L_0890C10C:;
    a0 = LD32(s5);
    v0 = 4;
    v1 = LD_U8(a0+6);
    cnd_ = v1 == v0;
    a1 = s1 - 8;
    if (cnd_) { goto L_0890C270; }
    goto L_0890C120;
L_0890C120:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_0890C250; }
    goto L_0890C12C;
L_0890C12C:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U16(a0+2); goto L_0890C148; }
    goto L_0890C138;
L_0890C138:;
    a0 = s6 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C140;
L_0890C140:;
    goto L_0890C0D4;
L_0890C148:;
    v1 = LD_U16(a0);
    s7 = 0 + 0;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = v0 << 2;
    goto L_0890C15C;
L_0890C15C:;
    s4 = LD_U8(a0+7);
    goto L_0890C160;
L_0890C160:;
    s1 = s0 + s7;
    a1 = 2;
    cnd_ = s4 == 0;
    a0 = 1;
    if (cnd_) { goto L_0890C188; }
    goto L_0890C170;
L_0890C170:;
    a0 = a0 + 1;
    v0 = (u32)((s32)s0 >> (a1 & 31));
    v1 = s4 < a0;
    s1 = s1 + v0;
    cnd_ = v1 == 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_0890C170; }
    goto L_0890C188;
L_0890C188:;
    a0 = 20;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C190;
L_0890C190:;
    a1 = s1 + 0;
    a0 = sp + 8;
    a2 = 1;
    a3 = 16;
    ST32(sp+8, 0);
    s1 = s0 + 0;
    s3 = 0 + 0;
    s0 = LD32(s5);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_0890C1B4;
L_0890C1B4:;
    v0 = LD32(sp+8);
    s2 = 0 + 0;
    ST32(s0+8, v0);
    goto L_0890C1C0;
L_0890C1C0:;
    v0 = LD32(s5);
    a2 = s1 + 0;
    a0 = s6 + 0;
    a1 = LD32(v0+8);
    a3 = 0 + 0;
    s2 = s2 + 1;
    a1 = a1 + s3;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C1E0;
L_0890C1E0:;
    v1 = s4 < s2;
    s3 = s3 + s1;
    cnd_ = v1 == 0;
    s1 = (u32)((s32)s1 >> 2);
    if (cnd_) { goto L_0890C1C0; }
    goto L_0890C1F0;
L_0890C1F0:;
    cnd_ = s7 != 0;
    if (cnd_) { a0 = sp + 12; goto L_0890C210; }
    goto L_0890C1F8;
L_0890C1F8:;
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890C200;
L_0890C200:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C208;
L_0890C208:;
    goto L_0890C0D4;
L_0890C210:;
    a1 = s7 + 0;
    a2 = 1;
    a3 = 16;
    s0 = LD32(s5);
    ST32(sp+12, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_0890C228;
L_0890C228:;
    a0 = s6 + 0;
    v0 = LD32(sp+12);
    v1 = LD32(s5);
    a2 = s7 + 0;
    ST32(s0+12, v0);
    a3 = 0 + 0;
    a1 = LD32(v1+12);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C248;
L_0890C248:;
    goto L_0890C1F8;
L_0890C250:;
    cnd_ = v1 != v0;
    s7 = 1024;
    if (cnd_) { goto L_0890C138; }
    goto L_0890C258;
L_0890C258:;
    v1 = LD_U16(a0+2);
    v0 = LD_U16(a0);
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = lo;
    s4 = LD_U8(a0+7);
    goto L_0890C160;
L_0890C270:;
    v0 = LD_U16(a0+2);
    v1 = LD_U16(a0);
    s7 = 64;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = (u32)((s32)v0 >> 1);
    goto L_0890C15C;
L_0890C28C:;
    a0 = 20;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C294;
L_0890C294:;
    v0 = LD32(s0+8);
    a0 = sp + 0;
    ST32(sp, v0);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0890C2A4;
L_0890C2A4:;
    a0 = sp + 4;
    v0 = LD32(sp);
    v1 = LD32(s0+12);
    ST32(s0+8, v0);
    ST32(sp+4, v1);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0890C2BC;
L_0890C2BC:;
    v1 = LD32(sp+4);
    ST32(s0+12, v1);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C2C8;
L_0890C2C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C2D0;
L_0890C2D0:;
    goto L_0890C0A8;
}

/* 0890C2D8 */
void func_0890C2D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890C2D8:;
    sp = sp - 32;
    v1 = a0 + 0;
    v0 = D_08BD394C - (14668);
    v1 = v1 << 2;
    v0 = v0 + 14668;
    s1 = v1 + v0;
    s0 = LD32(s1);
    cnd_ = s0 != 0;
    a0 = 20;
    if (cnd_) { goto L_0890C320; }
    goto L_0890C308;
L_0890C308:;
    ST32(s1, 0);
    goto L_0890C30C;
L_0890C30C:;
    sp = sp + 32;
    return;
L_0890C320:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C328;
L_0890C328:;
    v0 = LD32(s0+8);
    a0 = sp + 0;
    ST32(sp, v0);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0890C338;
L_0890C338:;
    a0 = sp + 4;
    v0 = LD32(sp);
    v1 = LD32(s0+12);
    ST32(s0+8, v0);
    ST32(sp+4, v1);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0890C350;
L_0890C350:;
    v1 = LD32(sp+4);
    ST32(s0+12, v1);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C35C;
L_0890C35C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C364;
L_0890C364:;
    ST32(s1, 0);
    goto L_0890C30C;
}

/* 0890C36C */
void func_0890C36C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_0890C36C:;
    v0 = D_08BD394C - (14668);
    a0 = v0 + 14668;
    v1 = 0 + 0;
    goto L_0890C378;
L_0890C378:;
    v1 = v1 + 1;
    v0 = v1 < 0xfau;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0890C378; }
    goto L_0890C38C;
L_0890C38C:;
    return;
}

/* 0890C394 */
void func_0890C394(void)
{
L_0890C394:;
    return;
}

/* 0890C39C */
void func_0890C39C(void)
{
L_0890C39C:;
    return;
}

/* 0890C3A4 */
void func_0890C3A4(u32 a0)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C3A4:;
    sp = sp - 16;
    a1 = 1;
    func_0890C53C(a0, a1);
    goto L_0890C3B4;
L_0890C3B4:;
    sp = sp + 16;
    return;
}

/* 0890C3C0 */
void func_0890C3C0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C3C0:;
    sp = sp - 16;
    v0 = (u32)-2;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0890C3F4; }
    goto L_0890C3D0;
L_0890C3D0:;
    v0 = D_08B162DC - (25308);
    v1 = LD32(v0+25308);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_0890C3EC; }
    goto L_0890C3E0;
L_0890C3E0:;
    func_0890C3A4(a0);
    goto L_0890C3E8;
L_0890C3E8:;
    goto L_0890C3EC;
L_0890C3EC:;
    sp = sp + 16;
    return;
L_0890C3F4:;
    v0 = D_08B162DC - (25308);
    ST32(v0+25308, a0);
    goto L_0890C3E8;
}

/* 0890C400 */
void func_0890C400(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C400:;
    sp = sp - 16;
    v0 = (u32)-2;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0890C434; }
    goto L_0890C410;
L_0890C410:;
    v0 = D_08B162DC - (25308);
    v1 = LD32(v0+25308);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_0890C42C; }
    goto L_0890C420;
L_0890C420:;
    func_0890C4D0(a0);
    goto L_0890C428;
L_0890C428:;
    goto L_0890C42C;
L_0890C42C:;
    sp = sp + 16;
    return;
L_0890C434:;
    v0 = D_08B162DC - (25308);
    ST32(v0+25308, a0);
    goto L_0890C428;
}

/* 0890C440 */
void func_0890C440(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C440:;
    sp = sp - 16;
    v0 = D_08BD394C - (14668);
    v0 = v0 + 14668;
    a0 = a0 << 2;
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = 4;
    v1 = LD_U8(v1+6);
    cnd_ = v1 == v0;
    a0 = 16;
    if (cnd_) { goto L_0890C484; }
    goto L_0890C46C;
L_0890C46C:;
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = 256;
    if (cnd_) { goto L_0890C484; }
    goto L_0890C478;
L_0890C478:;
    goto L_0890C47C;
L_0890C47C:;
    sp = sp + 16;
    return;
L_0890C484:;
    func_0890C494(a0, a1);
    goto L_0890C48C;
L_0890C48C:;
    goto L_0890C47C;
}

/* 0890C494 */
void func_0890C494(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C494:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0890C4C4; }
    goto L_0890C4A0;
L_0890C4A0:;
    v0 = D_08BD3D34 - (15668);
    v1 = LD32(v0+15668);
    cnd_ = a1 == v1;
    if (cnd_) { goto L_0890C4BC; }
    goto L_0890C4B0;
L_0890C4B0:;
    func_0890C4EC(a0, a1);
    goto L_0890C4B8;
L_0890C4B8:;
    goto L_0890C4BC;
L_0890C4BC:;
    sp = sp + 16;
    return;
L_0890C4C4:;
    v0 = D_08BD3D34 - (15668);
    ST32(v0+15668, 0);
    goto L_0890C4B8;
}

/* 0890C4D0 */
void func_0890C4D0(u32 a0)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C4D0:;
    sp = sp - 16;
    a1 = 0 + 0;
    func_0890C53C(a0, a1);
    goto L_0890C4E0;
L_0890C4E0:;
    sp = sp + 16;
    return;
}

/* 0890C4EC */
void func_0890C4EC(u32 a0, u32 a1)
{
    u32 a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C4EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 255;
    a3 = 0 + 0;
    s1 = a1 + 0;
    a0 = 3;
    a1 = 0 + 0;
    s0 = (s0 >> 3) & 0xff;
    func_08A98ED8(a0, a1, a2, a3);
    goto L_0890C51C;
L_0890C51C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A98F20(a0, a1);
    goto L_0890C528;
L_0890C528:;
    sp = sp + 16;
    return;
}

/* 0890C53C */
void func_0890C53C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0890C53C:;
    sp = sp - 80;
    v1 = (u32)-1;
    s4 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_0890C8B8; }
    goto L_0890C578;
L_0890C578:;
    s2 = D_08B162DC - (25308);
    v0 = LD32(s2+25308);
    cnd_ = v0 == v1;
    v0 = D_08BD394C - (14668);
    if (cnd_) { goto L_0890C898; }
    goto L_0890C588;
L_0890C588:;
    v1 = s0 << 2;
    v0 = v0 + 14668;
    v1 = v1 + v0;
    s1 = LD32(v1);
    cnd_ = s1 == 0;
    ST32(s2+25308, s0);
    if (cnd_) { goto L_0890C888; }
    goto L_0890C5A0;
L_0890C5A0:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C5A8;
L_0890C5A8:;
    v0 = D_08B162E4 - (25316);
    v1 = LD32(v0+25316);
    s7 = LD_U8(s1+7);
    v0 = D_08BD3D38 - (15672);
    a1 = LD32(v0+15672);
    { s64 p_ = (s64)(s32)s7 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = 2;
    ST32(sp+16, a0);
    s6 = 0 + 0;
    v1 = lo;
    v1 = v1 + a1;
    v1 = 0 - v1;
    f0 = BITSF(v1);
    f12 = (float)(s32)FBITS(f0);
    func_08A98C6C(a0, f12);
    goto L_0890C5E4;
L_0890C5E4:;
    s0 = LD_U16(s1);
    v1 = LD_U8(s1+6);
    v0 = 4;
    s2 = LD_U16(s1+2);
    cnd_ = v1 == v0;
    s3 = s0 + 0;
    if (cnd_) { goto L_0890C850; }
    goto L_0890C5FC;
L_0890C5FC:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_0890C818; }
    goto L_0890C608;
L_0890C608:;
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = 3;
    if (cnd_) { goto L_0890C644; }
    goto L_0890C614;
L_0890C614:;
    goto L_0890C618;
L_0890C618:;
    sp = sp + 80;
    return;
L_0890C644:;
    a1 = s7 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A98CE4(a0, a1, a2, a3);
    goto L_0890C654;
L_0890C654:;
    v0 = 8;
    ST32(sp+16, v0);
    goto L_0890C65C;
L_0890C65C:;
    a0 = LD32(s1+16);
    v0 = func_0890CE74(a0);
    goto L_0890C664;
L_0890C664:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890C74C; }
    goto L_0890C66C;
L_0890C66C:;
    v0 = LD32(s1+20);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890C73C; }
    goto L_0890C678;
L_0890C678:;
    a0 = LD32(s1+20);
    goto L_0890C67C;
L_0890C67C:;
    s4 = 0 + 0;
    v0 = func_0890CDEC(a0);
    goto L_0890C684;
L_0890C684:;
    ST32(s1+16, v0);
    a0 = v0 + 0;
    v0 = func_0890CEB8(a0);
    goto L_0890C690;
L_0890C690:;
    fp = v0 + 0;
    goto L_0890C694;
L_0890C694:;
    { s64 p_ = (s64)(s32)s0 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a3 = LD32(sp+16);
    v1 = fp + s6;
    a0 = 3;
    a1 = 0 + 0;
    v0 = lo;
    { s64 p_ = (s64)(s32)v0 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = 0 + 0;
    a3 = 128;
    t1 = 128;
    t3 = 0 + 0;
    v0 = lo;
    t0 = v0 >> 10;
    t0 = t0 + 1;
    t0 = t0 & 0xffff;
    cnd_ = fp == 0;
    s5 = v0 >> 1;
    if (cnd_) { goto L_0890C6F0; }
    goto L_0890C6D8;
L_0890C6D8:;
    t2 = LD32(s1+8);
    ST32(sp+8, v1);
    t2 = t2 + s6;
    ST32(sp, 0);
    ST32(sp+4, t1);
    func_08A982C0(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0890C6F0;
L_0890C6F0:;
    t0 = LD32(s1+8);
    a1 = s0 & 0xffff;
    a2 = s2 & 0xffff;
    a3 = s3 & 0xffff;
    a0 = s4 + 0;
    t0 = t0 + s6;
    func_08A98DD4(a0, a1, a2, a3, t0);
    goto L_0890C70C;
L_0890C70C:;
    v0 = s4 + 1;
    s4 = v0 & 0xff;
    v1 = s7 < s4;
    s0 = s0 >> 1;
    s2 = s2 >> 1;
    s3 = s3 >> 1;
    cnd_ = v1 == 0;
    s6 = s6 + s5;
    if (cnd_) { goto L_0890C694; }
    goto L_0890C72C;
L_0890C72C:;
    func_08A98DB8();
    goto L_0890C734;
L_0890C734:;
    goto L_0890C618;
L_0890C73C:;
    a0 = s1 + 0;
    func_08ABAB74(a0);
    goto L_0890C744;
L_0890C744:;
    a0 = LD32(s1+20);
    goto L_0890C67C;
L_0890C74C:;
    a0 = LD32(s1+16);
    v0 = func_0890CEB8(a0);
    goto L_0890C754;
L_0890C754:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_0890C7B8; }
    goto L_0890C75C;
L_0890C75C:;
    s1 = 0 + 0;
    goto L_0890C760;
L_0890C760:;
    a0 = s1 + 0;
    a1 = s0 & 0xffff;
    a2 = s2 & 0xffff;
    a3 = s3 & 0xffff;
    t0 = s4 + s6;
    func_08A98DD4(a0, a1, a2, a3, t0);
    goto L_0890C778;
L_0890C778:;
    { s64 p_ = (s64)(s32)s0 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = s1 + 1;
    s1 = v0 & 0xff;
    v0 = LD32(sp+16);
    a0 = s7 < s1;
    v1 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = s0 >> 1;
    s2 = s2 >> 1;
    s3 = s3 >> 1;
    v1 = lo;
    v1 = v1 >> 1;
    cnd_ = a0 == 0;
    s6 = s6 + v1;
    if (cnd_) { goto L_0890C760; }
    goto L_0890C7B0;
L_0890C7B0:;
    goto L_0890C72C;
L_0890C7B8:;
    s4 = 0 + 0;
    goto L_0890C7BC;
L_0890C7BC:;
    t0 = LD32(s1+8);
    a0 = s4 + 0;
    a1 = s0 & 0xffff;
    a2 = s2 & 0xffff;
    t0 = t0 + s6;
    a3 = s3 & 0xffff;
    func_08A98DD4(a0, a1, a2, a3, t0);
    goto L_0890C7D8;
L_0890C7D8:;
    { s64 p_ = (s64)(s32)s0 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = s4 + 1;
    s4 = v0 & 0xff;
    v0 = LD32(sp+16);
    a0 = s7 < s4;
    v1 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = s0 >> 1;
    s2 = s2 >> 1;
    s3 = s3 >> 1;
    v1 = lo;
    v1 = v1 >> 1;
    cnd_ = a0 == 0;
    s6 = s6 + v1;
    if (cnd_) { goto L_0890C7BC; }
    goto L_0890C810;
L_0890C810:;
    goto L_0890C72C;
L_0890C818:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0890C618; }
    goto L_0890C820;
L_0890C820:;
    a0 = 5;
    a1 = s7 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A98CE4(a0, a1, a2, a3);
    goto L_0890C834;
L_0890C834:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_0890C65C; }
    goto L_0890C83C;
L_0890C83C:;
    a1 = LD32(s1+12);
    a0 = 256;
    func_0890C4EC(a0, a1);
    goto L_0890C848;
L_0890C848:;
    goto L_0890C65C;
L_0890C850:;
    a0 = 4;
    a1 = s7 + 0;
    a2 = 0 + 0;
    a3 = 1;
    func_08A98CE4(a0, a1, a2, a3);
    goto L_0890C864;
L_0890C864:;
    cnd_ = s4 != 0;
    if (cnd_) { a1 = LD32(s1+12); goto L_0890C878; }
    goto L_0890C86C;
L_0890C86C:;
    a3 = 1;
    goto L_0890C870;
L_0890C870:;
    ST32(sp+16, a3);
    goto L_0890C65C;
L_0890C878:;
    a0 = 16;
    func_0890C4EC(a0, a1);
    goto L_0890C880;
L_0890C880:;
    a3 = 1;
    goto L_0890C870;
L_0890C888:;
    a0 = 9;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C890;
L_0890C890:;
    goto L_0890C618;
L_0890C898:;
    a0 = 9;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C8A0;
L_0890C8A0:;
    v0 = D_08B162E0 - (25312);
    v1 = LD32(v0+25312);
    cnd_ = v1 != s0;
    v0 = D_08BD394C - (14668);
    if (cnd_) { goto L_0890C588; }
    goto L_0890C8B0;
L_0890C8B0:;
    ST32(s2+25308, s0);
    goto L_0890C614;
L_0890C8B8:;
    a0 = 9;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890C8C0;
L_0890C8C0:;
    v0 = D_08B162DC - (25308);
    a0 = LD32(v0+25308);
    v1 = D_08B162E0 - (25312);
    ST32(v0+25308, s0);
    ST32(v1+25312, a0);
    goto L_0890C614;
}

/* 0890C8D8 */
void func_0890C8D8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0890C8D8:;
    v0 = D_08BD394C - (14668);
    v0 = v0 + 14668;
    a1 = 0 + 0;
    a2 = (u32)-1;
    v1 = LD32(v0);
    goto L_0890C8EC;
L_0890C8EC:;
    a1 = a1 + 1;
    a0 = a1 < 0xfau;
    cnd_ = v1 == 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_0890C900; }
    goto L_0890C8FC;
L_0890C8FC:;
    ST32(v1+16, a2);
    goto L_0890C900;
L_0890C900:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0890C8EC; }
    goto L_0890C908;
L_0890C908:;
    return;
}

/* 0890C910 */
u64 func_0890C910(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0890C910:;
    v0 = D_08BD394C - (14668);
    v1 = a0 << 2;
    v0 = v0 + 14668;
    a0 = a0 < 0xfau;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890C930; }
    goto L_0890C92C;
L_0890C92C:;
    v0 = LD32(v1);
    goto L_0890C930;
L_0890C930:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890C938 */
u32 func_0890C938(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890C938:;
    sp = sp - 16;
    s1 = a0 & 0xffff;
    a0 = s1 + 0;
    v0 = func_0890C9A4(a0);
    goto L_0890C954;
L_0890C954:;
    a0 = s1 + 0;
    s0 = v0 << 1;
    v0 = func_0890CA0C(a0);
    goto L_0890C960;
L_0890C960:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    a0 = s1 + 0;
    s0 = s0 + v1;
    v0 = func_0890C9D4(a0);
    goto L_0890C974;
L_0890C974:;
    a0 = s1 + 0;
    s0 = s0 + v0;
    v0 = func_0890CA3C(a0);
    goto L_0890C980;
L_0890C980:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    s0 = s0 + v1;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0890C9A4 */
u32 func_0890C9A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0890C9A4:;
    a0 = a0 & 0x3;
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_0890C9CC; }
    goto L_0890C9B4;
L_0890C9B4:;
    v0 = 2;
    a1 = a0 ^ 0x3;
    cnd_ = a0 == v0;
    v1 = 2;
    if (cnd_) { goto L_0890C9CC; }
    goto L_0890C9C4;
L_0890C9C4:;
    v1 = 4;
    if (a1 != 0) v1 = 0;
    goto L_0890C9CC;
L_0890C9CC:;
    v0 = v1 + 0;
    return v0;
}

/* 0890C9D4 */
u32 func_0890C9D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0890C9D4:;
    a0 = a0 & 0x1c;
    v0 = 16;
    cnd_ = a0 == v0;
    a1 = 2;
    if (cnd_) { goto L_0890CA04; }
    goto L_0890C9E4;
L_0890C9E4:;
    v0 = 20;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0890CA04; }
    goto L_0890C9F0;
L_0890C9F0:;
    v0 = 24;
    cnd_ = a0 == v0;
    v1 = a0 ^ 0x1c;
    if (cnd_) { goto L_0890CA04; }
    goto L_0890C9FC;
L_0890C9FC:;
    a1 = 4;
    if (v1 != 0) a1 = 0;
    goto L_0890CA04;
L_0890CA04:;
    v0 = a1 + 0;
    return v0;
}

/* 0890CA0C */
u32 func_0890CA0C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0890CA0C:;
    a0 = a0 & 0x60;
    v0 = 32;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_0890CA34; }
    goto L_0890CA1C;
L_0890CA1C:;
    v0 = 64;
    a1 = a0 ^ 0x60;
    cnd_ = a0 == v0;
    v1 = 2;
    if (cnd_) { goto L_0890CA34; }
    goto L_0890CA2C;
L_0890CA2C:;
    v1 = 4;
    if (a1 != 0) v1 = 0;
    goto L_0890CA34;
L_0890CA34:;
    v0 = v1 + 0;
    return v0;
}

/* 0890CA3C */
u32 func_0890CA3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0890CA3C:;
    a0 = a0 & 0x180;
    v0 = 128;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_0890CA64; }
    goto L_0890CA4C;
L_0890CA4C:;
    v0 = 256;
    a1 = a0 ^ 0x180;
    cnd_ = a0 == v0;
    v1 = 2;
    if (cnd_) { goto L_0890CA64; }
    goto L_0890CA5C;
L_0890CA5C:;
    v1 = 4;
    if (a1 != 0) v1 = 0;
    goto L_0890CA64;
L_0890CA64:;
    v0 = v1 + 0;
    return v0;
}

/* 0890CA6C */
u32 func_0890CA6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0890CA6C:;
    a1 = a1 & 0xffff;
    v0 = 466;
    cnd_ = a1 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0890CAAC; }
    goto L_0890CA7C;
L_0890CA7C:;
    v0 = (s32)a1 < 467;
    cnd_ = v0 == 0;
    v0 = 474;
    if (cnd_) { goto L_0890CA8C; }
    goto L_0890CA88;
L_0890CA88:;
    v0 = 414;
    goto L_0890CA8C;
L_0890CA8C:;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD_U16(v1); goto L_0890CAB0; }
    goto L_0890CA94;
L_0890CA94:;
    a1 = D_08BD3D84 - (15748);
    v0 = a1 + 15748;
    ST16(v0+2, 0);
    ST16(a1+15748, 0);
    goto L_0890CAA4;
L_0890CAA4:;
    v0 = a1 + 15748;
    return v0;
L_0890CAAC:;
    v0 = LD_U16(v1);
    goto L_0890CAB0;
L_0890CAB0:;
    a1 = D_08BD3D84 - (15748);
    a0 = a1 + 15748;
    ST16(a1+15748, v0);
    v1 = LD_U16(v1+2);
    ST16(a0+2, v1);
    goto L_0890CAA4;
}

/* 0890CAC8 */
u32 func_0890CAC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_0890CAC8:;
    a1 = a1 & 0xffff;
    v0 = 466;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD_U16(a0+4); goto L_0890CB68; }
    goto L_0890CAD8;
L_0890CAD8:;
    v0 = (s32)a1 < 467;
    cnd_ = v0 == 0;
    v0 = 474;
    if (cnd_) { goto L_0890CB00; }
    goto L_0890CAE4;
L_0890CAE4:;
    v0 = 414;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0890CAF8; }
    goto L_0890CAF0;
L_0890CAF0:;
    v0 = (u32)-1;
    return v0;
L_0890CAF8:;
    v0 = LD32(a0+4);
    return v0;
L_0890CB00:;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_0890CAF0; }
    goto L_0890CB08;
L_0890CB08:;
    v1 = LD_U16(a0+4);
    a2 = v1 & 0xffff;
    v0 = (a2 >> 8) & 0xf;
    v1 = (v1 >> 12) & 0xf;
    a3 = (a2 >> 4) & 0xf;
    a0 = v0 << 4;
    a0 = a0 + v0;
    a1 = a3 << 4;
    v0 = v1 << 4;
    v0 = v0 + v1;
    a2 = a2 & 0xf;
    a1 = a1 + a3;
    a0 = a0 & 0xff;
    a1 = a1 & 0xff;
    v0 = v0 << 24;
    a0 = a0 << 16;
    v1 = a2 << 4;
    v1 = v1 + a2;
    v0 = v0 | a0;
    a1 = a1 << 8;
    v0 = v0 | a1;
    v1 = v1 & 0xff;
    goto L_0890CB60;
L_0890CB60:;
    v0 = v0 | v1;
    return v0;
L_0890CB68:;
    a0 = LD_U8(a0+4);
    v0 = v1 & 0xf800;
    v1 = v1 & 0x7e0;
    v1 = v1 << 5;
    a0 = a0 & 0x1f;
    v0 = v0 << 8;
    v0 = v0 | v1;
    a0 = a0 << 3;
    v0 = v0 | a0;
    v1 = 0xff000000u;
    goto L_0890CB60;
}

/* 0890CB94 */
u32 func_0890CB94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_0890CB94:;
    a1 = a1 & 0xffff;
    v0 = 466;
    cnd_ = a1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_0890CBD8; }
    goto L_0890CBA4;
L_0890CBA4:;
    v0 = (s32)a1 < 467;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = D_08BD3D88 - (15752); goto L_0890CBC0; }
    goto L_0890CBB0;
L_0890CBB0:;
    v0 = 474;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD_U16(a2+6); goto L_0890CBDC; }
    goto L_0890CBBC;
L_0890CBBC:;
    a1 = D_08BD3D88 - (15752);
    goto L_0890CBC0;
L_0890CBC0:;
    v0 = a1 + 15752;
    ST16(v0+4, 0);
    ST16(a1+15752, 0);
    ST16(v0+2, 0);
    goto L_0890CBD0;
L_0890CBD0:;
    v0 = a1 + 15752;
    return v0;
L_0890CBD8:;
    v1 = LD_U16(a2+6);
    goto L_0890CBDC;
L_0890CBDC:;
    a1 = D_08BD3D88 - (15752);
    a0 = a1 + 15752;
    ST16(a1+15752, v1);
    v0 = LD_U16(a2+8);
    ST16(a0+2, v0);
    v1 = LD_U16(a2+10);
    ST16(a0+4, v1);
    goto L_0890CBD0;
}

/* 0890CBFC */
u32 func_0890CBFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_0890CBFC:;
    v1 = D_08BD3D90 - (15760);
    v0 = (u32)(s32)LD_S8(v1+15760);
    cnd_ = v0 != 0;
    a1 = a1 & 0xffff;
    if (cnd_) { goto L_0890CC14; }
    goto L_0890CC0C;
L_0890CC0C:;
    v0 = 1;
    ST8(v1+15760, v0);
    goto L_0890CC14;
L_0890CC14:;
    v0 = 466;
    cnd_ = a1 == v0;
    if (cnd_) { f1 = BITSF(LD32(a0+12)); goto L_0890CC80; }
    goto L_0890CC20;
L_0890CC20:;
    v0 = (s32)a1 < 467;
    cnd_ = v0 == 0;
    v0 = 474;
    if (cnd_) { goto L_0890CC74; }
    goto L_0890CC2C;
L_0890CC2C:;
    v0 = 414;
    cnd_ = a1 == v0;
    if (cnd_) { f1 = BITSF(LD32(a0+8)); goto L_0890CC54; }
    goto L_0890CC38;
L_0890CC38:;
    v1 = D_08BD3D98 - (15768);
    goto L_0890CC3C;
L_0890CC3C:;
    v0 = v1 + 15768;
    ST32(v0+8, 0);
    ST32(v1+15768, 0);
    ST32(v0+4, 0);
    goto L_0890CC4C;
L_0890CC4C:;
    v0 = v1 + 15768;
    return v0;
L_0890CC54:;
    v1 = D_08BD3D98 - (15768);
    v0 = v1 + 15768;
    ST32(v1+15768, FBITS(f1));
    f0 = BITSF(LD32(a0+12));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(a0+16));
    goto L_0890CC6C;
L_0890CC6C:;
    ST32(v0+8, FBITS(f1));
    goto L_0890CC4C;
L_0890CC74:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = D_08BD3D98 - (15768); goto L_0890CC3C; }
    goto L_0890CC7C;
L_0890CC7C:;
    f1 = BITSF(LD32(a0+12));
    goto L_0890CC80;
L_0890CC80:;
    v1 = D_08BD3D98 - (15768);
    v0 = v1 + 15768;
    ST32(v1+15768, FBITS(f1));
    f0 = BITSF(LD32(a0+16));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(a0+20));
    goto L_0890CC6C;
}

/* 0890CC9C */
u32 func_0890CC9C(u32 a0, u32 a2)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_0890CC9C:;
    a1 = D_08BD3DA8 - (15784);
    v0 = (u32)(s32)LD_S8(a1+15784);
    a3 = D_08BD3DB0 - (15792);
    v1 = a3 + 15792;
    cnd_ = v0 != 0;
    a0 = a0 + a2;
    if (cnd_) { goto L_0890CCBC; }
    goto L_0890CCB4;
L_0890CCB4:;
    v0 = 1;
    ST8(a1+15784, v0);
    goto L_0890CCBC;
L_0890CCBC:;
    f0 = BITSF(LD32(a0));
    v0 = v1 + 0;
    ST32(a3+15792, FBITS(f0));
    f1 = BITSF(LD32(a0+4));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(a0+8));
    ST32(v1+8, FBITS(f0));
    return v0;
}

/* 0890CCDC */
u32 func_0890CCDC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_0890CCDC:;
    v0 = a3 << 1;
    v0 = v0 + a3;
    t1 = a1 + a2;
    t0 = a0 + a2;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0890CD20; }
    goto L_0890CCF4;
L_0890CCF4:;
    a3 = v0 + 0;
    v0 = t0 + a2;
    goto L_0890CCFC;
L_0890CCFC:;
    v1 = t1 + a2;
    a1 = LD_U8(v0);
    a0 = LD_U8(v1);
    a2 = a2 + 1;
    v1 = a2 < a3;
    cnd_ = a1 != a0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890CD24; }
    goto L_0890CD18;
L_0890CD18:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = t0 + a2; goto L_0890CCFC; }
    goto L_0890CD20;
L_0890CD20:;
    v0 = 1;
    goto L_0890CD24;
L_0890CD24:;
    return v0;
}

/* 0890CD2C */
void func_0890CD2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890CD2C:;
    sp = sp - 16;
    s0 = D_08BD3DC0 - (15808);
    v0 = LD_U8(s0+15808);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890CD54; }
    goto L_0890CD44;
L_0890CD44:;
    sp = sp + 16;
    return;
L_0890CD54:;
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890CD5C;
L_0890CD5C:;
    v1 = 0x170000u;
    v1 = v1 | 0x4000;
    v0 = v0 + v1;
    a0 = D_08BD3DC4 - (15812);
    v1 = D_08BD3DC8 - (15816);
    ST32(a0+15812, v0);
    v0 = 1;
    ST8(s0+15808, v0);
    v0 = D_08BD3DCC - (15820);
    ST32(v1+15816, 0);
    v1 = D_08BD3DD0 - (15824);
    ST32(v0+15820, 0);
    v0 = D_08BD41D0 - (16848);
    ST32(v1+15824, 0);
    v1 = D_08BD41D4 - (16852);
    ST32(v0+16848, 0);
    ST32(v1+16852, 0);
    goto L_0890CD44;
}

/* 0890CDA4 */
void func_0890CDA4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890CDA4:;
    sp = sp - 16;
    a0 = D_08BD3DD0 - (15824);
    v1 = D_08BD3DC8 - (15816);
    v0 = LD32(a0+15824);
    ST32(v1+15816, 0);
    v1 = D_08BD41D0 - (16848);
    v0 = v0 + 256;
    ST32(a0+15824, v0);
    v0 = D_08BD3DCC - (15820);
    ST32(v0+15820, 0);
    v0 = D_08BD41D4 - (16852);
    ST32(v1+16848, 0);
    ST32(v0+16852, 0);
    func_0890C8D8();
    goto L_0890CDE0;
L_0890CDE0:;
    sp = sp + 16;
    return;
}

/* 0890CDEC */
u32 func_0890CDEC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_0890CDEC:;
    t2 = D_08BD3DCC - (15820);
    a3 = LD32(t2+15820);
    a2 = 0x80000u;
    t3 = D_08BD3DC8 - (15816);
    v0 = a3 < 0xffu;
    a2 = a2 | 0xc000;
    t0 = a0 + 0;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_0890CE5C; }
    goto L_0890CE10;
L_0890CE10:;
    a1 = LD32(t3+15816);
    v1 = D_08BD3DD4 - (15828);
    a0 = a3 << 2;
    v0 = a2 - a1;
    v1 = v1 + 15828;
    v0 = t0 < v0;
    a2 = a1 + t0;
    t1 = a0 + v1;
    cnd_ = v0 == 0;
    t0 = a3 + 1;
    if (cnd_) { goto L_0890CE64; }
    goto L_0890CE38;
L_0890CE38:;
    v0 = D_08BD3DD0 - (15824);
    v1 = D_08BD3DC4 - (15812);
    a0 = LD32(v0+15824);
    v0 = LD32(v1+15812);
    ST32(t3+15816, a2);
    v1 = a0 + a3;
    v0 = v0 + a1;
    ST32(t2+15820, t0);
    ST32(t1, v0);
    goto L_0890CE5C;
L_0890CE5C:;
    v0 = v1 + 0;
    return v0;
L_0890CE64:;
    v0 = D_08BD3DD0 - (15824);
    v1 = LD32(v0+15824);
    v1 = v1 + 255;
    goto L_0890CE5C;
}

/* 0890CE74 */
u32 func_0890CE74(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0890CE74:;
    v0 = D_08BD3DD0 - (15824);
    v1 = LD32(v0+15824);
    a2 = 0 + 0;
    a0 = a0 - v1;
    cnd_ = (s32)a0 < 0;
    a1 = a0 < 0xffu;
    if (cnd_) { goto L_0890CEA4; }
    goto L_0890CE8C;
L_0890CE8C:;
    v1 = D_08BD3DCC - (15820);
    v0 = LD32(v1+15820);
    v0 = (s32)a0 < (s32)v0;
    v0 = v0 & a1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 1; goto L_0890CEB0; }
    goto L_0890CEA4;
L_0890CEA4:;
    v0 = 255;
    cnd_ = a0 == v0;
    if (cnd_) { a2 = 1; goto L_0890CEB0; }
    goto L_0890CEB0;
L_0890CEB0:;
    v0 = a2 + 0;
    return v0;
}

/* 0890CEB8 */
u32 func_0890CEB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_0890CEB8:;
    v0 = D_08BD3DD0 - (15824);
    v1 = LD32(v0+15824);
    a1 = a0 - v1;
    cnd_ = (s32)a1 < 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0890CF00; }
    goto L_0890CECC;
L_0890CECC:;
    v0 = D_08BD3DD4 - (15828);
    v0 = v0 + 15828;
    a0 = a1 << 2;
    v1 = D_08BD3DCC - (15820);
    a0 = a0 + v0;
    v0 = LD32(v1+15820);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    a2 = D_08BD41D0 - (16848);
    if (cnd_) { goto L_0890CF00; }
    goto L_0890CEF0;
L_0890CEF0:;
    v0 = LD32(a2+16848);
    a3 = LD32(a0);
    v0 = v0 + 1;
    ST32(a2+16848, v0);
    goto L_0890CF00;
L_0890CF00:;
    v0 = a3 + 0;
    return v0;
}

/* 0890CF08 */
void func_0890CF08(void)
{
    u32 v0 = 0;
L_0890CF08:;
    v0 = D_08BD41D0 - (16848);
    ST32(v0+16848, 0);
    return;
}

/* 0890CF14 */
void func_0890CF14(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890CF14:;
    sp = sp - 16;
    v1 = D_08BD41D0 - (16848);
    v0 = LD32(v1+16848);
    v0 = v0 < 0x28u;
    cnd_ = v0 == 0;
    v1 = D_08BD41D4 - (16852);
    if (cnd_) { goto L_0890CF40; }
    goto L_0890CF30;
L_0890CF30:;
    v0 = LD32(v1+16852);
    v0 = v0 < 0x96u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890CF58; }
    goto L_0890CF40;
L_0890CF40:;
    v0 = LD32(v1+16852);
    v0 = v0 + 1;
    ST32(v1+16852, v0);
    goto L_0890CF50;
L_0890CF50:;
    sp = sp + 16;
    return;
L_0890CF58:;
    func_0890CDA4();
    goto L_0890CF60;
L_0890CF60:;
    goto L_0890CF50;
}

/* 0890CF68 */
u64 func_0890CF68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0890CF68:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    v0 = D_08B162EC - (25324);
    if (cnd_) { goto L_0890CF94; }
    goto L_0890CF84;
L_0890CF84:;
    v1 = LD32(v0+25324);
    v0 = D_08BD73D8 - (29656);
    v1 = v1 << 10;
    ST32(v0+29656, v1);
    goto L_0890CF94;
L_0890CF94:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890CF9C */
rv_t func_0890CF9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890CF9C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0890CF68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890CFB0;
L_0890CFB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890CFBC */
void func_0890CFBC(u32 a2)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890CFBC:;
    sp = sp - 16;
    a0 = a2 + 0;
    func_0890C3A4(a0);
    goto L_0890CFCC;
L_0890CFCC:;
    sp = sp + 16;
    return;
}

/* 0890CFD8 */
void func_0890CFD8(u32 a0, u32 a1)
{
L_0890CFD8:;
    ST8(a0+16, a1);
    return;
}

/* 0890CFE0 */
void func_0890CFE0(u32 a0, u32 a1)
{
L_0890CFE0:;
    ST8(a0+17, a1);
    return;
}

/* 0890CFE8 */
u64 func_0890CFE8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890CFE8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = 1;
    cnd_ = a1 == 0;
    ST8(v0+18, a1);
    if (cnd_) { goto L_0890D018; }
    goto L_0890D004;
L_0890D004:;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D00C;
L_0890D00C:;
    goto L_0890D010;
L_0890D010:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0890D018:;
    a0 = 1;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D020;
L_0890D020:;
    goto L_0890D010;
}

/* 0890D028 */
void func_0890D028(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D028:;
    v1 = a0 + 0;
    sp = sp - 16;
    v0 = 1;
    a0 = 1;
    a2 = (s32)a1 < 2;
    cnd_ = a1 == v0;
    ST32(v1+20, a1);
    if (cnd_) { goto L_0890D064; }
    goto L_0890D048;
L_0890D048:;
    cnd_ = a2 != 0;
    v0 = 2;
    if (cnd_) { goto L_0890D074; }
    goto L_0890D050;
L_0890D050:;
    cnd_ = a1 == v0;
    a0 = 2;
    if (cnd_) { goto L_0890D064; }
    goto L_0890D058;
L_0890D058:;
    goto L_0890D05C;
L_0890D05C:;
    sp = sp + 16;
    return;
L_0890D064:;
    func_08A99168(a0);
    goto L_0890D06C;
L_0890D06C:;
    goto L_0890D05C;
L_0890D074:;
    cnd_ = a1 != 0;
    a0 = 5;
    if (cnd_) { goto L_0890D058; }
    goto L_0890D07C;
L_0890D07C:;
    goto L_0890D064;
}

/* 0890D084 */
u32 func_0890D084(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D084:;
    v0 = a0 + 0;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = 0 + 0;
    cnd_ = a1 != 0;
    ST8(v0+24, a1);
    if (cnd_) { goto L_0890D0A4; }
    goto L_0890D0A0;
L_0890D0A0:;
    a0 = 1;
    goto L_0890D0A4;
L_0890D0A4:;
    v0 = func_08A9918C(a0);
    goto L_0890D0AC;
L_0890D0AC:;
    sp = sp + 16;
    return v0;
}

/* 0890D0B8 */
void func_0890D0B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D0B8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = 4;
    cnd_ = a1 == 0;
    ST8(v0+25, a1);
    if (cnd_) { goto L_0890D0F8; }
    goto L_0890D0D4;
L_0890D0D4:;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D0DC;
L_0890D0DC:;
    a1 = 4;
    a0 = 6;
    a2 = 255;
    func_08A990BC(a0, a1, a2);
    goto L_0890D0EC;
L_0890D0EC:;
    goto L_0890D0F0;
L_0890D0F0:;
    sp = sp + 16;
    return;
L_0890D0F8:;
    a0 = 4;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D100;
L_0890D100:;
    goto L_0890D0F0;
}

/* 0890D108 */
void func_0890D108(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D108:;
    sp = sp - 16;
    v0 = a1 < 0xdu;
    a2 = a0 + 0;
    cnd_ = v0 == 0;
    ST32(a0+28, a1);
    if (cnd_) { goto L_0890D14C; }
    goto L_0890D120;
L_0890D120:;
    v1 = D_08AD9354 - (-27820);
    v0 = a1 << 2;
    v1 = v1 - 27820;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890D13Cu: goto L_0890D13C; case 0x0890D14Cu: goto L_0890D14C; case 0x0890D168u: goto L_0890D168; case 0x0890D1A8u: goto L_0890D1A8; case 0x0890D1D4u: goto L_0890D1D4; case 0x0890D20Cu: goto L_0890D20C; case 0x0890D224u: goto L_0890D224; default: rs_break(0, 0x0890d134); }
L_0890D13C:;
    v0 = LD_U8(a2+25);
    a0 = a2 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0890D158; }
    goto L_0890D14C;
L_0890D14C:;
    goto L_0890D150;
L_0890D150:;
    sp = sp + 16;
    return;
L_0890D158:;
    func_0890D0B8(a0, a1);
    goto L_0890D160;
L_0890D160:;
    goto L_0890D150;
L_0890D168:;
    v0 = LD_U8(a2+25);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a2 + 0; goto L_0890D198; }
    goto L_0890D174;
L_0890D174:;
    a0 = 0 + 0;
    goto L_0890D178;
L_0890D178:;
    a1 = 2;
    a2 = 3;
    goto L_0890D180;
L_0890D180:;
    a3 = 0 + 0;
    t0 = 0 + 0;
    goto L_0890D188;
L_0890D188:;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_0890D190;
L_0890D190:;
    goto L_0890D150;
L_0890D198:;
    a1 = 1;
    func_0890D0B8(a0, a1);
    goto L_0890D1A0;
L_0890D1A0:;
    a0 = 0 + 0;
    goto L_0890D178;
L_0890D1A8:;
    v0 = LD_U8(a2+25);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a2 + 0; goto L_0890D1C4; }
    goto L_0890D1B4;
L_0890D1B4:;
    a0 = 0 + 0;
    goto L_0890D1B8;
L_0890D1B8:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    goto L_0890D180;
L_0890D1C4:;
    a1 = 1;
    func_0890D0B8(a0, a1);
    goto L_0890D1CC;
L_0890D1CC:;
    a0 = 0 + 0;
    goto L_0890D1B8;
L_0890D1D4:;
    v0 = LD_U8(a2+25);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a2 + 0; goto L_0890D1FC; }
    goto L_0890D1E0;
L_0890D1E0:;
    t0 = 0xff0000u;
    goto L_0890D1E4;
L_0890D1E4:;
    a0 = 0 + 0;
    a1 = 2;
    a2 = 10;
    a3 = 0 + 0;
    t0 = t0 | 0xffff;
    goto L_0890D188;
L_0890D1FC:;
    a1 = 1;
    func_0890D0B8(a0, a1);
    goto L_0890D204;
L_0890D204:;
    t0 = 0xff0000u;
    goto L_0890D1E4;
L_0890D20C:;
    v0 = LD_U8(a2+25);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0890D150; }
    goto L_0890D218;
L_0890D218:;
    a0 = a2 + 0;
    a1 = 1;
    goto L_0890D158;
L_0890D224:;
    v0 = LD_U8(a2+25);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a2 + 0; goto L_0890D238; }
    goto L_0890D230;
L_0890D230:;
    a0 = 3;
    goto L_0890D1B8;
L_0890D238:;
    a1 = 1;
    func_0890D0B8(a0, a1);
    goto L_0890D240;
L_0890D240:;
    a0 = 3;
    goto L_0890D1B8;
}

/* 0890D248 */
void func_0890D248(u32 a0, u32 a1)
{
L_0890D248:;
    ST32(a0+32, a1);
    return;
}

/* 0890D250 */
void func_0890D250(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D250:;
    v0 = a0 + 0;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST8(v0+36, a1);
    if (cnd_) { goto L_0890D280; }
    goto L_0890D26C;
L_0890D26C:;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D274;
L_0890D274:;
    goto L_0890D278;
L_0890D278:;
    sp = sp + 16;
    return;
L_0890D280:;
    a0 = 0 + 0;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D288;
L_0890D288:;
    goto L_0890D278;
}

/* 0890D290 */
void func_0890D290(u32 a0, u32 a1)
{
L_0890D290:;
    ST8(a0+37, a1);
    return;
}

/* 0890D298 */
void func_0890D298(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D298:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    ST32(a0+40, a1);
    if (cnd_) { goto L_0890D300; }
    goto L_0890D2AC;
L_0890D2AC:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0890D2C0; }
    goto L_0890D2B8;
L_0890D2B8:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0890D2D4; }
    goto L_0890D2C0;
L_0890D2C0:;
    a0 = 5;
    { u64 r_ = func_08A97960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D2C8;
L_0890D2C8:;
    goto L_0890D2CC;
L_0890D2CC:;
    sp = sp + 16;
    return;
L_0890D2D4:;
    a0 = 5;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D2DC;
L_0890D2DC:;
    v0 = D_08B2C1C0 - (-15936);
    v1 = LD_U8(v0-15936);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_0890D2F0; }
    goto L_0890D2EC;
L_0890D2EC:;
    a0 = 1;
    goto L_0890D2F0;
L_0890D2F0:;
    func_08A98878(a0);
    goto L_0890D2F8;
L_0890D2F8:;
    goto L_0890D2CC;
L_0890D300:;
    a0 = 5;
    { u64 r_ = func_08A9789C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D308;
L_0890D308:;
    v0 = D_08B2C1C0 - (-15936);
    v1 = LD_U8(v0-15936);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = 0 + 0; goto L_0890D2F0; }
    goto L_0890D318;
L_0890D318:;
    a0 = 1;
    goto L_0890D2F0;
}

/* 0890D320 */
void func_0890D320(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_0890D320:;
    sp = sp - 288;
    a2 = sp + 0;
    s4 = a1 + 0;
    a3 = 0 + 0;
    a1 = 256;
    func_088FCA60(a0, a1, a2, a3, t2, t3);
    goto L_0890D350;
L_0890D350:;
    a3 = 1;
    a0 = sp + 0;
    a1 = 1;
    a2 = 0 + 0;
    v0 = func_088FBD38(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_0890D364;
L_0890D364:;
    s3 = v0 + 0;
    a0 = s4 + 0;
    a2 = 16;
    a1 = 0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D378;
L_0890D378:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 2;
    a0 = s3 + 0;
    cnd_ = (s32)s3 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890D3E8; }
    goto L_0890D390;
L_0890D390:;
    v0 = func_088FC1A8(a0, a2, a3, t0, 0, 0, 0);
    goto L_0890D398;
L_0890D398:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890D3A4;
L_0890D3A4:;
    s2 = v0 + 0;
    t0 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = s3 + 0;
    v0 = func_088FC1A8(a0, a2, a3, t0, 0, 0, 0);
    goto L_0890D3BC;
L_0890D3BC:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    a3 = 1;
    { u64 r_ = func_088FBF90(a0, a1, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D3D0;
L_0890D3D0:;
    ST32(s4+8, v0);
    a0 = s3 + 0;
    ST32(s4, s2);
    ST32(s4+4, v0);
    v0 = func_088FC260(a0, 0, 0, 0, 0, 0);
    goto L_0890D3E4;
L_0890D3E4:;
    v0 = 1;
    goto L_0890D3E8;
L_0890D3E8:;
    sp = sp + 288;
    return;
}

/* 0890D408 */
void func_0890D408(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D408:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    a1 = 0 + 0;
    s0 = a2 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D430;
L_0890D430:;
    v1 = D_08B1B44C - (-19380);
    a0 = LD32(v1-19380);
    v0 = 1;
    ST32(s0+4, v0);
    v1 = 26;
    v0 = 24;
    ST32(s0+12, v0);
    v0 = 25;
    ST32(s0+16, v1);
    v1 = 23;
    ST32(s0, s1);
    ST32(s0+8, a0);
    ST32(s0+20, v0);
    ST32(s0+24, v1);
    sp = sp + 16;
    return;
}

/* 0890D47C */
void func_0890D47C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890D47C:;
    sp = sp - 32;
    s4 = D_08B1644C - (25676);
    s2 = a0 + 0;
    s1 = 0 + 0;
    cnd_ = (s32)a0 <= 0;
    if (cnd_) { goto L_0890D4D0; }
    goto L_0890D4A8;
L_0890D4A8:;
    s3 = D_08AD9388 - (-27768);
    s0 = s4 + 25676;
    goto L_0890D4B0;
L_0890D4B0:;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a1 = s3 - 27768;
    s1 = s1 + 1;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890D4C4;
L_0890D4C4:;
    v1 = (s32)s1 < (s32)s2;
    cnd_ = v1 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_0890D4B0; }
    goto L_0890D4D0;
L_0890D4D0:;
    v0 = s2 << 2;
    v1 = s4 + 25676;
    v0 = v0 + s2;
    v0 = v0 << 2;
    v0 = v0 + v1;
    ST8(v0, 0);
    sp = sp + 32;
    return;
}

/* 0890D508 */
void func_0890D508(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890D508:;
    sp = sp - 32;
    s0 = D_08BD7570 - (30064);
    s0 = s0 + 30064;
    s3 = a1 + 0;
    a1 = D_08AD950C - (-27380);
    a1 = a1 - 27380;
    s2 = a0 + 0;
    a0 = s0 + 0;
    s1 = a2 + 0;
    a2 = 13;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D548;
L_0890D548:;
    a1 = D_08AD9518 - (-27368);
    a0 = s0 + 40;
    a1 = a1 - 27368;
    a2 = 13;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D55C;
L_0890D55C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890D564;
L_0890D564:;
    s0 = s0 - 60;
    v1 = D_08BD7478 - (29816);
    a0 = D_08BD747C - (29820);
    ST32(s0+120, s1);
    ST32(v1+29816, s2);
    ST32(a0+29820, s3);
    ST32(s0+116, v0);
    sp = sp + 32;
    return;
}

/* 0890D59C */
void func_0890D59C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890D59C:;
    sp = sp - 48;
    s6 = a0 + 0;
    a0 = t0 + 0;
    s0 = D_08BD7570 - (30064);
    s0 = s0 + 30064;
    s7 = a1 + 0;
    s5 = a2 + 0;
    s4 = a3 + 0;
    s3 = t0 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890D5E8;
L_0890D5E8:;
    a1 = D_08AD950C - (-27380);
    a0 = s0 + 0;
    a1 = a1 - 27380;
    a2 = 13;
    s2 = v0 + 0;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D600;
L_0890D600:;
    a1 = D_08AD9518 - (-27368);
    a0 = s0 + 40;
    a1 = a1 - 27368;
    a2 = 13;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D614;
L_0890D614:;
    a1 = D_08BD7510 - (29968);
    a0 = s0 + 1352;
    a1 = a1 + 29968;
    a2 = 16;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D628;
L_0890D628:;
    a1 = D_08BD7500 - (29952);
    s1 = s0 - 60;
    a0 = s0 + 1384;
    a1 = a1 + 29952;
    a2 = 16;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D640;
L_0890D640:;
    ST32(s1+116, s2);
    a2 = s3 + 0;
    a0 = s2 + 0;
    ST32(s1+120, s3);
    a1 = 0 + 0;
    ST32(s1+124, s3);
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D65C;
L_0890D65C:;
    a0 = s5 + 0;
    a1 = s4 + 0;
    a2 = s2 + 0;
    s2 = s2 + 16;
    func_08831CE8(a0, a1, a2);
    goto L_0890D670;
L_0890D670:;
    a2 = s4 + 0;
    a0 = s2 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D680;
L_0890D680:;
    v1 = D_08BD7EBC - (32444);
    a0 = LD32(v1+32444);
    a1 = s0 + 68;
    func_08838200(a0, a1);
    goto L_0890D690;
L_0890D690:;
    a1 = s0 + 196;
    a0 = s6 + 0;
    s0 = s0 + 324;
    func_08838200(a0, a1);
    goto L_0890D6A0;
L_0890D6A0:;
    a0 = s7 + 0;
    a1 = s0 + 0;
    func_08838200(a0, a1);
    goto L_0890D6AC;
L_0890D6AC:;
    a0 = D_08BD7520 - (29984);
    a0 = a0 + 29984;
    v1 = 5;
    ST32(s1+1476, a0);
    v0 = D_08BD7480 - (29824);
    v0 = v0 + 29824;
    ST8(s1+1408, v1);
    ST32(a0+16, v0);
    sp = sp + 48;
    return;
}

/* 0890D6F8 */
void func_0890D6F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D6F8:;
    sp = sp - 16;
    v0 = D_08BD7404 - (29700);
    v1 = D_08BD7454 - (29780);
    a1 = v0 + 29700;
    v0 = LD32(v1+29780);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a1+40); goto L_0890D724; }
    goto L_0890D718;
L_0890D718:;
    sp = sp + 16;
    return;
L_0890D724:;
    a1 = LD32(a1+32);
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D72C;
L_0890D72C:;
    v1 = 3;
    v0 = D_08BD73FC - (29692);
    ST32(v0+29692, v1);
    goto L_0890D718;
}

/* 0890D73C */
void func_0890D73C(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D73C:;
    sp = sp - 16;
    v0 = func_0890EA80(t2, t3);
    goto L_0890D74C;
L_0890D74C:;
    v1 = D_08BD7550 - (30032);
    a1 = LD32(v1+30032);
    a0 = D_08B1B450 - (-19376);
    cnd_ = a1 == 0;
    ST32(a0-19376, v0);
    if (cnd_) { goto L_0890D76C; }
    goto L_0890D760;
L_0890D760:;
    v1 = 3;
    v0 = D_08BD73FC - (29692);
    ST32(v0+29692, v1);
    goto L_0890D76C;
L_0890D76C:;
    sp = sp + 16;
    return;
}

/* 0890D778 */
void func_0890D778(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890D778:;
    sp = sp - 48;
    v0 = 2;
    a2 = 0 + 0;
    s4 = D_08BD7534 - (30004);
    a0 = s4 + 30004;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0890D93C; }
    goto L_0890D7B4;
L_0890D7B4:;
    s2 = s4 + 30004;
    a1 = LD32(s2+28);
    cnd_ = a1 == 0;
    if (cnd_) { s0 = LD32(s2+116); goto L_0890D7D0; }
    goto L_0890D7C4;
L_0890D7C4:;
    cnd_ = a2 == 0;
    v0 = D_08BD73F4 - (29684);
    if (cnd_) { goto L_0890D8E4; }
    goto L_0890D7CC;
L_0890D7CC:;
    s0 = LD32(s2+116);
    goto L_0890D7D0;
L_0890D7D0:;
    s3 = D_08BD747C - (29820);
    a1 = LD32(s3+29820);
    s1 = s0 + 16;
    a2 = sp + 0;
    a0 = s1 + 0;
    func_08831CE8(a0, a1, a2);
    goto L_0890D7E8;
L_0890D7E8:;
    a0 = sp + 0;
    a1 = s0 + 0;
    v0 = func_08831D4C(a0, a1);
    goto L_0890D7F4;
L_0890D7F4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0890D8B0; }
    goto L_0890D7FC;
L_0890D7FC:;
    v0 = D_08BD7EC0 - (32448);
    v0 = LD32(v0+32448);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s3+29820); goto L_0890D8D0; }
    goto L_0890D80C;
L_0890D80C:;
    cnd_ = v1 == 0;
    a0 = 0x80110000u;
    if (cnd_) { goto L_0890D8B4; }
    goto L_0890D814;
L_0890D814:;
    v1 = D_08BD73F4 - (29684);
    v0 = LD32(v1+29684);
    v0 = v0 - 7;
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    a0 = D_08B16438 - (25656);
    if (cnd_) { goto L_0890D898; }
    goto L_0890D82C;
L_0890D82C:;
    v0 = D_08BD7478 - (29816);
    goto L_0890D830;
L_0890D830:;
    a0 = LD32(v0+29816);
    a2 = LD32(s3+29820);
    a1 = s1 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D840;
L_0890D840:;
    v1 = D_08BD7EC6 - (32454);
    ST8(v1+32454, 0);
    v0 = func_0890EA80(0, 0);
    goto L_0890D84C;
L_0890D84C:;
    v1 = D_08B1B450 - (-19376);
    ST32(v1-19376, v0);
    goto L_0890D854;
L_0890D854:;
    cnd_ = s5 == 0;
    s0 = s4 + 30004;
    if (cnd_) { goto L_0890D868; }
    goto L_0890D85C;
L_0890D85C:;
    v1 = 5;
    v0 = D_08BD73FC - (29692);
    ST32(v0+29692, v1);
    goto L_0890D868;
L_0890D868:;
    a0 = LD32(s0+116);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D870;
L_0890D870:;
    ST32(s0+116, 0);
    sp = sp + 48;
    return;
L_0890D898:;
    a1 = s2 + 76;
    a0 = a0 + 25656;
    a2 = 20;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D8A8;
L_0890D8A8:;
    v0 = D_08BD7478 - (29816);
    goto L_0890D830;
L_0890D8B0:;
    a0 = 0x80110000u;
    goto L_0890D8B4;
L_0890D8B4:;
    a0 = a0 | 0x306;
    a1 = 4;
    v0 = D_08BD73FC - (29692);
    v1 = D_08BD7400 - (29696);
    ST32(v0+29692, a1);
    ST32(v1+29696, a0);
    goto L_0890D854;
L_0890D8D0:;
    a0 = s1 + 0;
    t_ = v0;
    a2 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890D8DC;
L_0890D8DC:;
    v1 = v0 + 0;
    goto L_0890D80C;
L_0890D8E4:;
    a0 = LD32(v0+29684);
    v1 = 2;
    cnd_ = a0 == v1;
    v0 = 9;
    if (cnd_) { goto L_0890D924; }
    goto L_0890D8F4;
L_0890D8F4:;
    cnd_ = a0 == v0;
    v0 = 0x80110000u;
    if (cnd_) { goto L_0890D90C; }
    goto L_0890D8FC;
L_0890D8FC:;
    v1 = 3;
    goto L_0890D900;
L_0890D900:;
    v0 = D_08BD73FC - (29692);
    ST32(v0+29692, v1);
    goto L_0890D854;
L_0890D90C:;
    v0 = v0 | 0x307;
    cnd_ = a1 == v0;
    v0 = 0x80110000u;
    if (cnd_) { goto L_0890D8FC; }
    goto L_0890D918;
L_0890D918:;
    v0 = v0 | 0x341;
    cnd_ = a1 == v0;
    v1 = 3;
    if (cnd_) { goto L_0890D900; }
    goto L_0890D924;
L_0890D924:;
    v0 = 4;
    v1 = D_08BD73FC - (29692);
    a0 = D_08BD7400 - (29696);
    ST32(v1+29692, v0);
    ST32(a0+29696, a1);
    goto L_0890D854;
L_0890D93C:;
    v0 = LD32(a0+1484);
    cnd_ = v0 != 0;
    if (cnd_) { s5 = 1; goto L_0890D7B4; }
    goto L_0890D948;
L_0890D948:;
    a2 = 1;
    goto L_0890D7B4;
}

/* 0890D950 */
void func_0890D950(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890D950:;
    sp = sp - 16;
    s0 = D_08BD7534 - (30004);
    v1 = s0 + 30004;
    v0 = 0x80110000u;
    v0 = v0 | 0x385;
    a1 = LD32(v1+28);
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    v0 = 0x80110000u;
    if (cnd_) { goto L_0890DA28; }
    goto L_0890D97C;
L_0890D97C:;
    v0 = v0 | 0x384;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = D_08BD73F4 - (29684);
    if (cnd_) { goto L_0890D9AC; }
    goto L_0890D98C;
L_0890D98C:;
    v0 = 0x80110000u;
    v0 = v0 | 0x382;
    cnd_ = a1 == v0;
    v0 = 0x80110000u;
    if (cnd_) { goto L_0890D9A8; }
    goto L_0890D99C;
L_0890D99C:;
    v0 = v0 | 0x383;
    cnd_ = a1 == v0;
    v0 = 4;
    if (cnd_) { goto L_0890DA14; }
    goto L_0890D9A8;
L_0890D9A8:;
    v0 = D_08BD73F4 - (29684);
    goto L_0890D9AC;
L_0890D9AC:;
    v1 = LD32(v0+29684);
    a0 = v1 ^ 0xa;
    v1 = v1 ^ 0x3;
    v1 = v1 < 0x1u;
    a0 = a0 < 0x1u;
    v1 = v1 | a0;
    cnd_ = v1 == 0;
    v1 = 3;
    if (cnd_) { goto L_0890DA08; }
    goto L_0890D9CC;
L_0890D9CC:;
    v0 = s0 + 30004;
    a1 = LD32(v0+28);
    a0 = 4;
    v0 = D_08BD73FC - (29692);
    v1 = D_08BD7400 - (29696);
    ST32(v0+29692, a0);
    ST32(v1+29696, a1);
    goto L_0890D9E8;
L_0890D9E8:;
    s0 = s0 + 30004;
    a0 = LD32(s0+116);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890D9F4;
L_0890D9F4:;
    ST32(s0+116, 0);
    sp = sp + 16;
    return;
L_0890DA08:;
    v0 = D_08BD73FC - (29692);
    ST32(v0+29692, v1);
    goto L_0890D9E8;
L_0890DA14:;
    v1 = D_08BD73FC - (29692);
    a0 = D_08BD7400 - (29696);
    ST32(v1+29692, v0);
    ST32(a0+29696, a1);
    goto L_0890D9E8;
L_0890DA28:;
    v0 = v0 | 0x38b;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_0890D9A8; }
    goto L_0890DA34;
L_0890DA34:;
    cnd_ = v0 == 0;
    v0 = D_08BD73F4 - (29684);
    if (cnd_) { goto L_0890D9AC; }
    goto L_0890DA3C;
L_0890DA3C:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = D_08BD73F4 - (29684); goto L_0890DA60; }
    goto L_0890DA44;
L_0890DA44:;
    v0 = 2;
    cnd_ = a1 != v0;
    v0 = D_08BD73F4 - (29684);
    if (cnd_) { goto L_0890D9AC; }
    goto L_0890DA50;
L_0890DA50:;
    v0 = LD32(v1+1484);
    cnd_ = v0 != 0;
    v1 = 5;
    if (cnd_) { goto L_0890DA08; }
    goto L_0890DA5C;
L_0890DA5C:;
    v1 = D_08BD73F4 - (29684);
    goto L_0890DA60;
L_0890DA60:;
    v0 = LD32(v1+29684);
    v0 = v0 - 7;
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    a0 = D_08B16438 - (25656);
    if (cnd_) { goto L_0890DA8C; }
    goto L_0890DA74;
L_0890DA74:;
    v0 = D_08BD7EC6 - (32454);
    goto L_0890DA78;
L_0890DA78:;
    ST8(v0+32454, 0);
    v0 = func_0890EA80(t2, t3);
    goto L_0890DA80;
L_0890DA80:;
    v1 = D_08B1B450 - (-19376);
    ST32(v1-19376, v0);
    goto L_0890D9E8;
L_0890DA8C:;
    a1 = D_08BD7580 - (30080);
    a0 = a0 + 25656;
    a1 = a1 + 30080;
    a2 = 20;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DAA0;
L_0890DAA0:;
    v0 = D_08BD7EC6 - (32454);
    goto L_0890DA78;
}

/* 0890DAA8 */
u32 func_0890DAA8(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890DAA8:;
    sp = sp - 32;
    s5 = D_08BD73F4 - (29684);
    v1 = 4;
    v0 = LD32(s5+29684);
    s3 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890DB9C; }
    goto L_0890DAE0;
L_0890DAE0:;
    a1 = 2;
    v0 = D_08BD73FC - (29692);
    v1 = D_08BD7400 - (29696);
    a0 = 1;
    s4 = D_08BD7EC8 - (32456);
    ST32(v0+29692, a1);
    s0 = s4 + 32456;
    ST32(v1+29696, 0);
    { u64 r_ = func_088F974C(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DB04;
L_0890DB04:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DB0C;
L_0890DB0C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0890DB28; }
    goto L_0890DB1C;
L_0890DB1C:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DB24;
L_0890DB24:;
    ST32(s0+4, s1);
    goto L_0890DB28;
L_0890DB28:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s2 < 0xdu;
    cnd_ = v0 == 0;
    v1 = D_08AD9390 - (-27760);
    if (cnd_) { goto L_0890DBF0; }
    goto L_0890DB40;
L_0890DB40:;
    v0 = s2 << 2;
    v1 = v1 - 27760;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890DB58u: goto L_0890DB58; case 0x0890DBF0u: goto L_0890DBF0; case 0x0890DC34u: goto L_0890DC34; case 0x0890DC44u: goto L_0890DC44; case 0x0890DC54u: goto L_0890DC54; default: rs_break(0, 0x0890db50); }
L_0890DB58:;
    a0 = s3 + 0;
    v0 = sceUtilityOskInitStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DB60;
L_0890DB60:;
    s0 = s4 + 32456;
    goto L_0890DB64;
L_0890DB64:;
    s1 = v0 + 0;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890DB8C; }
    goto L_0890DB74;
L_0890DB74:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890DBD4; }
    goto L_0890DB8C;
L_0890DB8C:;
    cnd_ = (s32)s1 < 0;
    if (cnd_) { goto L_0890DBC4; }
    goto L_0890DB94;
L_0890DB94:;
    v1 = 1;
    ST32(s5+29684, s2);
    goto L_0890DB9C;
L_0890DB9C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0890DBC4:;
    a0 = 1;
    { u64 r_ = func_088F9818(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DBCC;
L_0890DBCC:;
    v1 = 4;
    goto L_0890DB9C;
L_0890DBD4:;
    v0 = func_088F8C18();
    goto L_0890DBDC;
L_0890DBDC:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DBE8;
L_0890DBE8:;
    goto L_0890DB8C;
L_0890DBF0:;
    s0 = s4 + 32456;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v1 = 4;
    if (cnd_) { goto L_0890DB9C; }
    goto L_0890DC00;
L_0890DC00:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = 4; goto L_0890DB9C; }
    goto L_0890DC18;
L_0890DC18:;
    v0 = func_088F8C18();
    goto L_0890DC20;
L_0890DC20:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DC2C;
L_0890DC2C:;
    v1 = 4;
    goto L_0890DB9C;
L_0890DC34:;
    a0 = s3 + 0;
    v0 = sceUtilitySavedataInitStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DC3C;
L_0890DC3C:;
    s0 = s4 + 32456;
    goto L_0890DB64;
L_0890DC44:;
    a0 = s3 + 0;
    v0 = sceUtilityMsgDialogInitStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DC4C;
L_0890DC4C:;
    s0 = s4 + 32456;
    goto L_0890DB64;
L_0890DC54:;
    a0 = D_08BD7B34 - (31540);
    a0 = a0 + 31540;
    v0 = sceUtilityNetconfInitStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DC60;
L_0890DC60:;
    s0 = s4 + 32456;
    goto L_0890DB64;
}

/* 0890DC68 */
u32 func_0890DC68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890DC68:;
    sp = sp - 16;
    s2 = D_08BD7EC8 - (32456);
    s0 = s2 + 32456;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DC88;
L_0890DC88:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0890DCA4; }
    goto L_0890DC98;
L_0890DC98:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DCA0;
L_0890DCA0:;
    ST32(s0+4, s1);
    goto L_0890DCA4;
L_0890DCA4:;
    v0 = LD32(s0+8);
    s1 = 0x80110000u;
    s1 = s1 | 0x1;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD73F4 - (29684);
    v1 = LD32(v0+29684);
    v0 = v1 < 0xdu;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s2 + 32456; goto L_0890DCF0; }
    goto L_0890DCCC;
L_0890DCCC:;
    v0 = v1 << 2;
    v1 = D_08AD93C4 - (-27708);
    v1 = v1 - 27708;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890DCE8u: goto L_0890DCE8; case 0x0890DD4Cu: goto L_0890DD4C; case 0x0890DD5Cu: goto L_0890DD5C; case 0x0890DD6Cu: goto L_0890DD6C; case 0x0890DD7Cu: goto L_0890DD7C; default: rs_break(0, 0x0890dce0); }
L_0890DCE8:;
    s1 = 0 + 0;
    goto L_0890DCEC;
L_0890DCEC:;
    s0 = s2 + 32456;
    goto L_0890DCF0;
L_0890DCF0:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0890DD18; }
    goto L_0890DCFC;
L_0890DCFC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890DD30; }
    goto L_0890DD14;
L_0890DD14:;
    v0 = s1 + 0;
    goto L_0890DD18;
L_0890DD18:;
    sp = sp + 16;
    return v0;
L_0890DD30:;
    v0 = func_088F8C18();
    goto L_0890DD38;
L_0890DD38:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DD44;
L_0890DD44:;
    v0 = s1 + 0;
    goto L_0890DD18;
L_0890DD4C:;
    v0 = sceUtilityOskGetStatus(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DD54;
L_0890DD54:;
    s1 = v0 + 0;
    goto L_0890DCEC;
L_0890DD5C:;
    v0 = sceUtilitySavedataGetStatus(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DD64;
L_0890DD64:;
    s1 = v0 + 0;
    goto L_0890DCEC;
L_0890DD6C:;
    v0 = sceUtilityMsgDialogGetStatus(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DD74;
L_0890DD74:;
    s1 = v0 + 0;
    goto L_0890DCEC;
L_0890DD7C:;
    v0 = sceUtilityNetconfGetStatus(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DD84;
L_0890DD84:;
    s1 = v0 + 0;
    goto L_0890DCEC;
}

/* 0890DD8C */
u32 func_0890DD8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890DD8C:;
    sp = sp - 32;
    s3 = D_08BD7EC8 - (32456);
    s2 = a0 + 0;
    s0 = s3 + 32456;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DDB4;
L_0890DDB4:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0890DDD0; }
    goto L_0890DDC4;
L_0890DDC4:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DDCC;
L_0890DDCC:;
    ST32(s0+4, s1);
    goto L_0890DDD0;
L_0890DDD0:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD73F4 - (29684);
    v0 = LD32(v0+29684);
    v1 = v0 < 0xdu;
    cnd_ = v1 == 0;
    v1 = D_08AD93F8 - (-27656);
    if (cnd_) { goto L_0890DF98; }
    goto L_0890DDF0;
L_0890DDF0:;
    v0 = v0 << 2;
    v1 = v1 - 27656;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890DE08u: goto L_0890DE08; case 0x0890DE70u: goto L_0890DE70; case 0x0890DEDCu: goto L_0890DEDC; case 0x0890DEF8u: goto L_0890DEF8; case 0x0890DF58u: goto L_0890DF58; case 0x0890DF78u: goto L_0890DF78; default: rs_break(0, 0x0890de00); }
L_0890DE08:;
    s0 = s3 + 32456;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0890DE34; }
    goto L_0890DE18;
L_0890DE18:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890DE54; }
    goto L_0890DE30;
L_0890DE30:;
    v1 = 0 + 0;
    goto L_0890DE34;
L_0890DE34:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0890DE54:;
    v0 = func_088F8C18();
    goto L_0890DE5C;
L_0890DE5C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DE68;
L_0890DE68:;
    v1 = 0 + 0;
    goto L_0890DE34;
L_0890DE70:;
    a1 = 0 + 0;
    a0 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_0890DE7C;
L_0890DE7C:;
    a0 = s2 + 0;
    v0 = sceUtilityOskUpdate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DE84;
L_0890DE84:;
    s0 = s3 + 32456;
    goto L_0890DE88;
L_0890DE88:;
    s1 = v0 + 0;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0890DEB4; }
    goto L_0890DE98;
L_0890DE98:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890DEC0; }
    goto L_0890DEB0;
L_0890DEB0:;
    v1 = 1;
    goto L_0890DEB4;
L_0890DEB4:;
    v0 = 4;
    if (s1 != 0) v1 = v0;
    goto L_0890DE34;
L_0890DEC0:;
    v0 = func_088F8C18();
    goto L_0890DEC8;
L_0890DEC8:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DED4;
L_0890DED4:;
    v1 = 1;
    goto L_0890DEB4;
L_0890DEDC:;
    a1 = 0 + 0;
    a0 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_0890DEE8;
L_0890DEE8:;
    a0 = s2 + 0;
    v0 = sceUtilitySavedataUpdate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DEF0;
L_0890DEF0:;
    s0 = s3 + 32456;
    goto L_0890DE88;
L_0890DEF8:;
    a1 = 0 + 0;
    a0 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_0890DF04;
L_0890DF04:;
    a0 = s2 + 0;
    s0 = s3 + 32456;
    v0 = sceUtilitySavedataUpdate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DF10;
L_0890DF10:;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    v1 = 1;
    if (cnd_) { goto L_0890DE34; }
    goto L_0890DF1C;
L_0890DF1C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890DF3C; }
    goto L_0890DF34;
L_0890DF34:;
    v1 = 1;
    goto L_0890DE34;
L_0890DF3C:;
    v0 = func_088F8C18();
    goto L_0890DF44;
L_0890DF44:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DF50;
L_0890DF50:;
    v1 = 1;
    goto L_0890DE34;
L_0890DF58:;
    a1 = 0 + 0;
    a0 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_0890DF64;
L_0890DF64:;
    a0 = s2 + 0;
    s0 = s3 + 32456;
    v0 = sceUtilityMsgDialogUpdate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DF70;
L_0890DF70:;
    goto L_0890DF10;
L_0890DF78:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_08A977CC(a0, a1);
    goto L_0890DF84;
L_0890DF84:;
    a0 = s2 + 0;
    s0 = s3 + 32456;
    v0 = sceUtilityNetconfUpdate(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890DF90;
L_0890DF90:;
    goto L_0890DF10;
L_0890DF98:;
    s0 = s3 + 32456;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v1 = 4;
    if (cnd_) { goto L_0890DE34; }
    goto L_0890DFA8;
L_0890DFA8:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890DFC8; }
    goto L_0890DFC0;
L_0890DFC0:;
    v1 = 4;
    goto L_0890DE34;
L_0890DFC8:;
    v0 = func_088F8C18();
    goto L_0890DFD0;
L_0890DFD0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890DFDC;
L_0890DFDC:;
    v1 = 4;
    goto L_0890DE34;
}

/* 0890DFE4 */
u32 func_0890DFE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890DFE4:;
    sp = sp - 16;
    s2 = D_08BD7EC8 - (32456);
    s0 = s2 + 32456;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E004;
L_0890E004:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0890E020; }
    goto L_0890E014;
L_0890E014:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E01C;
L_0890E01C:;
    ST32(s0+4, s1);
    goto L_0890E020;
L_0890E020:;
    v0 = LD32(s0+8);
    s1 = 4;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD73F4 - (29684);
    v1 = LD32(v0+29684);
    v0 = v1 < 0xdu;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s2 + 32456; goto L_0890E068; }
    goto L_0890E044;
L_0890E044:;
    v0 = v1 << 2;
    v1 = D_08AD942C - (-27604);
    v1 = v1 - 27604;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890E060u: goto L_0890E060; case 0x0890E0C4u: goto L_0890E0C4; case 0x0890E0DCu: goto L_0890E0DC; case 0x0890E0F4u: goto L_0890E0F4; case 0x0890E104u: goto L_0890E104; case 0x0890E114u: goto L_0890E114; case 0x0890E124u: goto L_0890E124; default: rs_break(0, 0x0890e058); }
L_0890E060:;
    s1 = 0 + 0;
    s0 = s2 + 32456;
    goto L_0890E068;
L_0890E068:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0890E090; }
    goto L_0890E074;
L_0890E074:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890E0A8; }
    goto L_0890E08C;
L_0890E08C:;
    v0 = s1 + 0;
    goto L_0890E090;
L_0890E090:;
    sp = sp + 16;
    return v0;
L_0890E0A8:;
    v0 = func_088F8C18();
    goto L_0890E0B0;
L_0890E0B0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E0BC;
L_0890E0BC:;
    v0 = s1 + 0;
    goto L_0890E090;
L_0890E0C4:;
    s1 = 1;
    func_0890D6F8(a0);
    goto L_0890E0CC;
L_0890E0CC:;
    v0 = sceUtilityOskShutdownStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E0D4;
L_0890E0D4:;
    s0 = s2 + 32456;
    goto L_0890E068;
L_0890E0DC:;
    func_0890D73C(0, 0);
    goto L_0890E0E4;
L_0890E0E4:;
    s1 = 1;
    v0 = sceUtilitySavedataShutdownStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E0EC;
L_0890E0EC:;
    s0 = s2 + 32456;
    goto L_0890E068;
L_0890E0F4:;
    func_0890D778(0, 0, 0);
    goto L_0890E0FC;
L_0890E0FC:;
    goto L_0890E0E4;
L_0890E104:;
    func_0890D950(0, 0, 0);
    goto L_0890E10C;
L_0890E10C:;
    goto L_0890E0E4;
L_0890E114:;
    s1 = 1;
    v0 = sceUtilityMsgDialogShutdownStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E11C;
L_0890E11C:;
    s0 = s2 + 32456;
    goto L_0890E068;
L_0890E124:;
    v0 = D_08BD7B50 - (31568);
    v1 = LD32(v0+31568);
    cnd_ = v1 == 0;
    v1 = 3;
    if (cnd_) { goto L_0890E13C; }
    goto L_0890E134;
L_0890E134:;
    v0 = D_08BD73FC - (29692);
    ST32(v0+29692, v1);
    goto L_0890E13C;
L_0890E13C:;
    s1 = 1;
    v0 = sceUtilityNetconfShutdownStart(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E144;
L_0890E144:;
    s0 = s2 + 32456;
    goto L_0890E068;
}

/* 0890E14C */
void func_0890E14C(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0890E14C:;
    sp = sp - 144;
    a1 = D_08BD7520 - (29984);
    s0 = a0 + 0;
    a0 = D_08AD9460 - (-27552);
    a1 = a1 + 29984;
    a0 = a0 - 27552;
    func_0890D320(a0, a1, t2, t3);
    goto L_0890E170;
L_0890E170:;
    a0 = D_08AD9478 - (-27528);
    a1 = D_08BD7510 - (29968);
    a0 = a0 - 27528;
    a1 = a1 + 29968;
    func_0890D320(a0, a1, 0, 0);
    goto L_0890E184;
L_0890E184:;
    a1 = D_08B1B44C - (-19380);
    a1 = a1 - 19380;
    a0 = 9;
    v0 = sceUtilityGetSystemParamInt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E194;
L_0890E194:;
    a1 = sp + 0;
    a2 = 128;
    a0 = 1;
    v0 = sceUtilityGetSystemParamString(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E1A4;
L_0890E1A4:;
    a1 = D_08BD7DBC - (32188);
    a1 = a1 + 32188;
    a0 = sp + 0;
    func_088382E8(a0, a1);
    goto L_0890E1B4;
L_0890E1B4:;
    v1 = D_08BD7EBC - (32444);
    ST32(v1+32444, s0);
    sp = sp + 144;
    return;
}

/* 0890E1CC */
void func_0890E1CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890E1CC:;
    sp = sp - 16;
    v0 = D_08BD7520 - (29984);
    a0 = LD32(v0+29984);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E1E0;
L_0890E1E0:;
    v0 = D_08BD7510 - (29968);
    a0 = LD32(v0+29968);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E1EC;
L_0890E1EC:;
    v0 = D_08BD7500 - (29952);
    a0 = LD32(v0+29952);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E1F8;
L_0890E1F8:;
    sp = sp + 16;
    return;
}

/* 0890E204 */
void func_0890E204(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890E204:;
    sp = sp - 48;
    v0 = D_08BD73F4 - (29684);
    s7 = a0 + 0;
    s6 = a3 + 0;
    s5 = a1 + 0;
    s4 = a2 + 0;
    v1 = LD32(v0+29684);
    cnd_ = v1 == 0;
    s1 = t0 + 0;
    if (cnd_) { goto L_0890E290; }
    goto L_0890E250;
L_0890E250:;
    v1 = D_08BD73F8 - (29688);
    v0 = 4;
    goto L_0890E258;
L_0890E258:;
    ST32(v1+29688, v0);
    v0 = LD32(v1+29688);
    sp = sp + 48;
    return;
L_0890E290:;
    fp = D_08BD7438 - (29752);
    s0 = fp + 29752;
    a0 = 64;
    a1 = s0 + 0;
    a2 = s0 + 0;
    s3 = D_08BD7404 - (29700);
    func_0890D408(a0, a1, a2);
    goto L_0890E2AC;
L_0890E2AC:;
    v0 = s3 + 29700;
    ST32(s0+52, v0);
    v1 = s1 < 0x7u;
    v0 = 1;
    s2 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s0+48, v0);
    if (cnd_) { goto L_0890E2E8; }
    goto L_0890E2C8;
L_0890E2C8:;
    v1 = D_08AD948C - (-27508);
    v0 = s1 << 2;
    v1 = v1 - 27508;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890E2E4u: goto L_0890E2E4; case 0x0890E344u: goto L_0890E344; case 0x0890E34Cu: goto L_0890E34C; case 0x0890E354u: goto L_0890E354; case 0x0890E35Cu: goto L_0890E35C; case 0x0890E364u: goto L_0890E364; case 0x0890E36Cu: goto L_0890E36C; default: rs_break(0, 0x0890e2dc); }
L_0890E2E4:;
    s2 = 12;
    goto L_0890E2E8;
L_0890E2E8:;
    s0 = s3 + 29700;
    a2 = 52;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E2FC;
L_0890E2FC:;
    v0 = 1;
    ST32(s0+16, s2);
    a0 = s4 + 0;
    a1 = s5 + 0;
    ST32(s0+20, v0);
    ST32(s0+28, s7);
    ST32(s0+36, s6);
    ST32(s0+40, s4);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    ST32(s0+32, s5);
    ST32(s3+29700, 0);
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E330;
L_0890E330:;
    a1 = fp + 29752;
    a0 = 1;
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E33C;
L_0890E33C:;
    v1 = D_08BD73F8 - (29688);
    goto L_0890E258;
L_0890E344:;
    s2 = 8;
    goto L_0890E2E8;
L_0890E34C:;
    s2 = 4;
    goto L_0890E2E8;
L_0890E354:;
    s2 = 1;
    goto L_0890E2E8;
L_0890E35C:;
    s2 = 13;
    goto L_0890E2E8;
L_0890E364:;
    s2 = 9;
    goto L_0890E2E8;
L_0890E36C:;
    s2 = 5;
    goto L_0890E2E8;
}

/* 0890E374 */
u32 func_0890E374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890E374:;
    sp = sp - 32;
    v0 = D_08BD7534 - (30004);
    v1 = D_08BD73F4 - (29684);
    s6 = t1 + 0;
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a0 + 0;
    a0 = 1536;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = v0 + 30004;
    a1 = s0 + 0;
    a2 = s0 + 0;
    v0 = LD32(v1+29684);
    cnd_ = v0 == 0;
    v1 = D_08BD73F8 - (29688);
    if (cnd_) { goto L_0890E408; }
    goto L_0890E3D4;
L_0890E3D4:;
    v0 = 4;
    goto L_0890E3D8;
L_0890E3D8:;
    ST32(v1+29688, v0);
    v0 = LD32(v1+29688);
    sp = sp + 32;
    return v0;
L_0890E408:;
    func_0890D408(a0, a1, a2);
    goto L_0890E410;
L_0890E410:;
    a1 = D_08B16438 - (25656);
    a0 = s0 + 76;
    v0 = 1;
    a1 = a1 + 25656;
    a2 = 20;
    ST32(s0+48, v0);
    ST32(s0+56, 0);
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E430;
L_0890E430:;
    v1 = D_08AD94A8 - (-27480);
    v0 = v1 - 27480;
    t0 = LD32(v1-27480);
    a2 = LD32(v0+12);
    v1 = LD32(v0+4);
    a3 = LD32(v0+8);
    v0 = s0 + 1500;
    ST32(v0+12, a2);
    a1 = D_08BD7480 - (29824);
    a0 = s1 + 0;
    ST32(s0+1500, t0);
    a1 = a1 + 29824;
    ST32(v0+4, v1);
    ST32(v0+8, a3);
    ST32(s0+1516, 0);
    func_08838200(a0, a1);
    goto L_0890E470;
L_0890E470:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    t0 = s6 + 0;
    func_0890D59C(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_0890E488;
L_0890E488:;
    a1 = s0 + 0;
    a0 = 3;
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E494;
L_0890E494:;
    v1 = D_08BD73F8 - (29688);
    goto L_0890E3D8;
}

/* 0890E49C */
u32 func_0890E49C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890E49C:;
    sp = sp - 16;
    v0 = D_08BD7534 - (30004);
    v1 = D_08BD73F4 - (29684);
    s0 = v0 + 30004;
    a0 = 1536;
    v0 = LD32(v1+29684);
    a1 = s0 + 0;
    a2 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = D_08BD73F8 - (29688);
    if (cnd_) { goto L_0890E4E8; }
    goto L_0890E4CC;
L_0890E4CC:;
    v0 = 4;
    goto L_0890E4D0;
L_0890E4D0:;
    ST32(v1+29688, v0);
    v0 = LD32(v1+29688);
    sp = sp + 16;
    return v0;
L_0890E4E8:;
    func_0890D408(a0, a1, a2);
    goto L_0890E4F0;
L_0890E4F0:;
    v0 = 7;
    a0 = 4;
    a1 = s0 + 0;
    ST32(s0+48, v0);
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E504;
L_0890E504:;
    v1 = D_08BD73F8 - (29688);
    goto L_0890E4D0;
}

/* 0890E50C */
u32 func_0890E50C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890E50C:;
    sp = sp - 32;
    v0 = D_08BD7534 - (30004);
    v1 = D_08BD73F4 - (29684);
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = v0 + 30004;
    a1 = s1 + 0;
    a2 = s1 + 0;
    s0 = a0 + 0;
    a0 = 1536;
    v0 = LD32(v1+29684);
    cnd_ = v0 == 0;
    v1 = D_08BD73F8 - (29688);
    if (cnd_) { goto L_0890E594; }
    goto L_0890E564;
L_0890E564:;
    v0 = 4;
    goto L_0890E568;
L_0890E568:;
    ST32(v1+29688, v0);
    v0 = LD32(v1+29688);
    sp = sp + 32;
    return v0;
L_0890E594:;
    func_0890D408(a0, a1, a2);
    goto L_0890E59C;
L_0890E59C:;
    a0 = s0 + 0;
    func_0890D47C(a0, 0, 0, 0, 0, 0);
    goto L_0890E5A4;
L_0890E5A4:;
    v1 = D_08AD94A8 - (-27480);
    v0 = v1 - 27480;
    t0 = LD32(v0+12);
    a3 = s1 + 1500;
    t3 = LD32(v1-27480);
    t1 = LD32(v0+4);
    t2 = LD32(v0+8);
    v0 = D_08BD7EC0 - (32448);
    ST32(a3+12, t0);
    v1 = 4;
    a0 = s3 + 0;
    ST32(v0+32448, s5);
    v0 = D_08B1644C - (25676);
    v0 = v0 + 25676;
    ST32(s1+48, v1);
    v1 = 3;
    a1 = s2 + 0;
    ST32(s1+1480, v1);
    a2 = s4 + 0;
    ST32(s1+96, v0);
    ST32(s1+1500, t3);
    ST32(a3+4, t1);
    ST32(a3+8, t2);
    ST32(s1+1516, 0);
    func_0890D508(a0, a1, a2);
    goto L_0890E608;
L_0890E608:;
    a1 = s1 + 0;
    a0 = 5;
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E614;
L_0890E614:;
    v1 = D_08BD73F8 - (29688);
    goto L_0890E568;
}

/* 0890E61C */
u32 func_0890E61C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890E61C:;
    sp = sp - 48;
    v0 = D_08BD7534 - (30004);
    v1 = D_08BD73F4 - (29684);
    s7 = t2 + 0;
    s6 = t1 + 0;
    s5 = t0 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a3 + 0;
    s1 = v0 + 30004;
    a1 = s1 + 0;
    a2 = s1 + 0;
    s0 = a0 + 0;
    a0 = 1536;
    v0 = LD32(v1+29684);
    cnd_ = v0 == 0;
    v1 = D_08BD73F8 - (29688);
    if (cnd_) { goto L_0890E6BC; }
    goto L_0890E684;
L_0890E684:;
    v0 = 4;
    goto L_0890E688;
L_0890E688:;
    ST32(v1+29688, v0);
    v0 = LD32(v1+29688);
    sp = sp + 48;
    return v0;
L_0890E6BC:;
    func_0890D408(a0, a1, a2);
    goto L_0890E6C4;
L_0890E6C4:;
    a0 = s0 + 0;
    func_0890D47C(a0, 0, 0, 0, 0, 0);
    goto L_0890E6CC;
L_0890E6CC:;
    v1 = D_08AD94A8 - (-27480);
    v0 = v1 - 27480;
    a3 = LD32(v0+12);
    t2 = LD32(v1-27480);
    t1 = LD32(v0+8);
    a2 = s1 + 1500;
    t0 = LD32(v0+4);
    v0 = 5;
    ST32(a2+12, a3);
    v1 = 1;
    a1 = D_08BD7480 - (29824);
    ST32(s1+48, v0);
    v0 = D_08B1644C - (25676);
    v0 = v0 + 25676;
    ST32(s1+56, v1);
    v1 = 3;
    a0 = s2 + 0;
    ST32(s1+1480, v1);
    a1 = a1 + 29824;
    ST32(s1+1500, t2);
    ST32(s1+96, v0);
    ST32(a2+8, t1);
    ST32(a2+4, t0);
    ST32(s1+1516, 0);
    func_08838200(a0, a1);
    goto L_0890E730;
L_0890E730:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = s5 + 0;
    a3 = s6 + 0;
    t0 = s7 + 0;
    func_0890D59C(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_0890E748;
L_0890E748:;
    a1 = s1 + 0;
    a0 = 6;
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E754;
L_0890E754:;
    v1 = D_08BD73F8 - (29688);
    goto L_0890E688;
}

/* 0890E75C */
u32 func_0890E75C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890E75C:;
    sp = sp - 16;
    v1 = D_08BD7B78 - (31608);
    v0 = D_08BD73F4 - (29684);
    s0 = v1 + 31608;
    s1 = a0 + 0;
    a1 = s0 + 0;
    a2 = s0 + 0;
    v1 = LD32(v0+29684);
    v0 = 11;
    a3 = D_08BD73F8 - (29688);
    cnd_ = v1 == v0;
    a0 = 580;
    if (cnd_) { goto L_0890E7D4; }
    goto L_0890E798;
L_0890E798:;
    func_0890D408(a0, a1, a2);
    goto L_0890E7A0;
L_0890E7A0:;
    a1 = s0 + 0;
    a0 = 11;
    ST32(s0+52, 0);
    ST32(s0+56, s1);
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E7B4;
L_0890E7B4:;
    a3 = D_08BD73F8 - (29688);
    goto L_0890E7B8;
L_0890E7B8:;
    ST32(a3+29688, v0);
    v0 = LD32(a3+29688);
    sp = sp + 16;
    return v0;
L_0890E7D4:;
    v0 = 4;
    goto L_0890E7B8;
}

/* 0890E7DC */
void func_0890E7DC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890E7DC:;
    sp = sp - 16;
    v0 = D_08BD7B34 - (31540);
    v1 = D_08BD73F4 - (29684);
    s0 = v0 + 31540;
    a0 = 68;
    v0 = LD32(v1+29684);
    a1 = s0 + 0;
    a2 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = D_08BD73F8 - (29688);
    if (cnd_) { goto L_0890E828; }
    goto L_0890E80C;
L_0890E80C:;
    v0 = 4;
    goto L_0890E810;
L_0890E810:;
    ST32(v1+29688, v0);
    v0 = LD32(v1+29688);
    sp = sp + 16;
    return;
L_0890E828:;
    func_0890D408(a0, a1, a2);
    goto L_0890E830;
L_0890E830:;
    v0 = 3;
    a0 = 12;
    a1 = s0 + 0;
    ST32(s0+48, v0);
    ST32(s0+56, 0);
    v0 = func_0890DAA8(a0, a1, 0, 0, 0, 0);
    goto L_0890E848;
L_0890E848:;
    v1 = D_08BD73F8 - (29688);
    goto L_0890E810;
}

/* 0890E850 */
u32 func_0890E850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890E850:;
    sp = sp - 16;
    v0 = D_08B28594 - (-31340);
    f2 = BITSF(0);
    f1 = BITSF(LD32(v0-31340));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    s0 = 1;
    if (cnd_) { goto L_0890E8A8; }
    goto L_0890E87C;
L_0890E87C:;
    v0 = D_08AED230 - (-11728);
    f0 = BITSF(LD32(v0-11728));
    f1 = f0 / f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AED234 - (-11724);
    if (cnd_) { goto L_0890EA0C; }
    goto L_0890E898;
L_0890E898:;
    f0 = BITSF(LD32(v0-11724));
    f0 = f1 + f0;
    goto L_0890E8A0;
L_0890E8A0:;
    f0 = BITSF(F2I(f0, 1));
    s0 = FBITS(f0);
    goto L_0890E8A8;
L_0890E8A8:;
    v0 = func_0890DC68(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890E8B0;
L_0890E8B0:;
    v1 = v0 + 0;
    v0 = v0 < 0x5u;
    cnd_ = v0 == 0;
    s1 = D_08BD73F8 - (29688);
    if (cnd_) { goto L_0890EA04; }
    goto L_0890E8C0;
L_0890E8C0:;
    v0 = v1 << 2;
    v1 = D_08AD94BC - (-27460);
    v1 = v1 - 27460;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0890E8DCu: goto L_0890E8DC; case 0x0890E9C0u: goto L_0890E9C0; case 0x0890E9E8u: goto L_0890E9E8; case 0x0890E9F8u: goto L_0890E9F8; default: rs_break(0, 0x0890e8d4); }
L_0890E8DC:;
    a1 = D_08BD73F4 - (29684);
    a0 = LD32(a1+29684);
    cnd_ = a0 != 0;
    s0 = D_08BD7400 - (29696);
    if (cnd_) { goto L_0890E90C; }
    goto L_0890E8EC;
L_0890E8EC:;
    s1 = D_08BD73F8 - (29688);
    ST32(s1+29688, 0);
    goto L_0890E8F4;
L_0890E8F4:;
    v0 = LD32(s1+29688);
    goto L_0890E8F8;
L_0890E8F8:;
    sp = sp + 16;
    return v0;
L_0890E90C:;
    v0 = LD32(s0+29696);
    cnd_ = v0 == 0;
    v1 = a0 ^ 0x8;
    if (cnd_) { goto L_0890E99C; }
    goto L_0890E918;
L_0890E918:;
    v0 = a0 ^ 0x6;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_0890E980; }
    goto L_0890E930;
L_0890E930:;
    ST32(a1+29684, 0);
    { u64 r_ = func_088F9818(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E938;
L_0890E938:;
    v0 = D_08BD7EC5 - (32453);
    v1 = LD_U8(v0+32453);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_0890E960; }
    goto L_0890E948;
L_0890E948:;
    s1 = D_08BD73F8 - (29688);
    v1 = D_08BD7EC4 - (32452);
    a0 = 3;
    ST8(v1+32452, v0);
    ST32(s1+29688, a0);
    goto L_0890E8F4;
L_0890E960:;
    s1 = D_08BD73F8 - (29688);
    v0 = func_0890E49C();
    goto L_0890E968;
L_0890E968:;
    a0 = 4;
    goto L_0890E96C;
L_0890E96C:;
    v1 = D_08BD73FC - (29692);
    ST32(v1+29692, a0);
    ST32(s1+29688, v0);
    ST32(s0+29696, 0);
    goto L_0890E8F4;
L_0890E980:;
    ST32(a1+29684, 0);
    { u64 r_ = func_088F9818(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E988;
L_0890E988:;
    s1 = D_08BD73F8 - (29688);
    a0 = LD32(s0+29696);
    v0 = func_0890E75C(a0);
    goto L_0890E994;
L_0890E994:;
    a0 = 4;
    goto L_0890E96C;
L_0890E99C:;
    v0 = D_08BD73FC - (29692);
    v1 = LD32(v0+29692);
    s1 = D_08BD73F8 - (29688);
    a0 = 1;
    ST32(a1+29684, 0);
    ST32(s1+29688, v1);
    { u64 r_ = func_088F9818(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890E9B8;
L_0890E9B8:;
    v0 = LD32(s1+29688);
    goto L_0890E8F8;
L_0890E9C0:;
    a0 = s0 + 0;
    v0 = func_0890DD8C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0890E9C8;
L_0890E9C8:;
    s1 = D_08BD73F8 - (29688);
    v1 = 4;
    cnd_ = v0 != v1;
    ST32(s1+29688, v0);
    if (cnd_) { goto L_0890E8F4; }
    goto L_0890E9D8;
L_0890E9D8:;
    v0 = func_0890DFE4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0890E9E0;
L_0890E9E0:;
    ST32(s1+29688, v0);
    goto L_0890E8F4;
L_0890E9E8:;
    s1 = D_08BD73F8 - (29688);
    v0 = func_0890DFE4(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0890E9F0;
L_0890E9F0:;
    ST32(s1+29688, v0);
    goto L_0890E8F4;
L_0890E9F8:;
    s1 = D_08BD73F8 - (29688);
    v0 = 1;
    goto L_0890E9E0;
L_0890EA04:;
    v0 = 4;
    goto L_0890E9E0;
L_0890EA0C:;
    f0 = BITSF(LD32(v0-11724));
    f0 = f1 - f0;
    goto L_0890E8A0;
}

/* 0890EA18 */
u32 func_0890EA18(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_0890EA18:;
    v0 = D_08BD73F8 - (29688);
    v1 = LD32(v0+29688);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0890EA34; }
    goto L_0890EA2C;
L_0890EA2C:;
    v0 = a0 + 0;
    return v0;
L_0890EA34:;
    v1 = D_08BD73F4 - (29684);
    v0 = LD32(v1+29684);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    a0 = v0 ^ 0x1;
    goto L_0890EA2C;
}

/* 0890EA4C */
u64 func_0890EA4C(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EA4C:;
    sp = sp - 16;
    v0 = func_0890EA80(t2, t3);
    goto L_0890EA5C;
L_0890EA5C:;
    v1 = D_08B1B450 - (-19376);
    a0 = LD32(v1-19376);
    cnd_ = v0 == a0;
    v1 = 1;
    if (cnd_) { goto L_0890EA74; }
    goto L_0890EA6C;
L_0890EA6C:;
    v0 = D_08BD7EC6 - (32454);
    ST8(v0+32454, v1);
    goto L_0890EA74;
L_0890EA74:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890EA80 */
u32 func_0890EA80(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0890EA80:;
    sp = sp - 64;
    a1 = 0x2420000u;
    a0 = D_08AD94D8 - (-27432);
    a0 = a0 - 27432;
    a1 = a1 | 0x5818;
    a2 = sp + 32;
    a3 = 4;
    t0 = 0 + 0;
    t1 = 0 + 0;
    ST32(sp+32, sp);
    v0 = sceIoDevctl(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890EAB0;
L_0890EAB0:;
    a0 = D_08AD94E0 - (-27424);
    a0 = a0 - 27424;
    cnd_ = (s32)v0 < 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0890EAD0; }
    goto L_0890EAC0;
L_0890EAC0:;
    v0 = LD32(sp+4);
    goto L_0890EAC4;
L_0890EAC4:;
    sp = sp + 64;
    return v0;
L_0890EAD0:;
    { u64 r_ = func_088FB130(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EAD8;
L_0890EAD8:;
    v0 = (u32)-1;
    goto L_0890EAC4;
}

/* 0890EAE0 */
u64 func_0890EAE0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890EAE0:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = a1 ^ 0xffff;
    v1 = s1 ^ 0x1;
    v1 = v1 < 0x1u;
    s0 = v0 < 0x1u;
    a0 = D_08AD9500 - (-27392);
    s2 = D_08BD7EC8 - (32456);
    v1 = s0 & v1;
    a0 = a0 - 27392;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v1 != 0;
    s3 = s2 + 32456;
    if (cnd_) { goto L_0890EB70; }
    goto L_0890EB34;
L_0890EB34:;
    v0 = s1 < 0x1u;
    goto L_0890EB38;
L_0890EB38:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08BD7EC8 - (32456);
    if (cnd_) { goto L_0890EB60; }
    goto L_0890EB44;
L_0890EB44:;
    goto L_0890EB48;
L_0890EB48:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0890EB60:;
    a0 = LD32(v0+32456);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890EB68;
L_0890EB68:;
    goto L_0890EB48;
L_0890EB70:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890EB78;
L_0890EB78:;
    ST32(s2+32456, v0);
    ST32(s3+8, 0);
    v0 = func_088F8C18();
    goto L_0890EB84;
L_0890EB84:;
    ST32(s3+4, v0);
    v0 = s1 < 0x1u;
    goto L_0890EB38;
}

/* 0890EB90 */
rv_t func_0890EB90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EB90:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0890EAE0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EBA4;
L_0890EBA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890EBB0 */
rv_t func_0890EBB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EBB0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0890EAE0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EBC4;
L_0890EBC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890EBD0 */
void func_0890EBD0(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_0890EBD0:;
    v0 = LD32(a0+116);
    ST32(a0+104, a1);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(a0+116, v0);
    return;
}

/* 0890EBE4 */
void func_0890EBE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0;
L_0890EBE4:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+116);
    a2 = a2 & 0xff;
    t0 = t0 << 24;
    a1 = a1 << 16;
    t0 = t0 | a1;
    a2 = a2 << 8;
    t0 = t0 | a2;
    a3 = a3 & 0xff;
    t0 = t0 | a3;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(a0+116, v0);
    ST32(a0+104, t0);
    return;
}

/* 0890EC1C */
void func_0890EC1C(u32 a0)
{
    u32 v0 = 0;
L_0890EC1C:;
    v0 = LD32(a0+116);
    v0 = v0 | 0x20;
    ST32(a0+116, v0);
    return;
}

/* 0890EC2C */
u32 func_0890EC2C(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EC2C:;
    a1 = a0 + 0;
    a0 = D_08BB1E80 - (7808);
    sp = sp - 16;
    a0 = a0 + 7808;
    v0 = func_089063E4(a0, a1);
    goto L_0890EC44;
L_0890EC44:;
    sp = sp + 16;
    return v0;
}

/* 0890EC50 */
u64 func_0890EC50(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0890EC50:;
    sp = sp - 64;
    v0 = D_08B15A00 - (23040);
    s6 = a3 + 0;
    s0 = LD32(v0+23040);
    v0 = (u32)-1;
    ST32(sp, a0);
    s0 = s0 - 1;
    ST32(sp+4, a1);
    cnd_ = s0 == v0;
    ST32(sp+8, a2);
    if (cnd_) { goto L_0890ED48; }
    goto L_0890ECA0;
L_0890ECA0:;
    v0 = s0 << 4;
    v0 = v0 + s0;
    v1 = D_08B22E88 - (11912);
    v0 = v0 << 3;
    v1 = v1 + 11912;
    s1 = v0 + v1;
    s4 = D_08B15A04 - (23044);
    s3 = D_08B159FC - (23036);
    fp = D_08B230A8 - (12456);
    s2 = 1;
    s7 = D_08B15A0C - (23052);
    s5 = (u32)-1;
    v1 = LD32(s4+23044);
    goto L_0890ECD4;
L_0890ECD4:;
    v0 = s2 << (s0 & 31);
    cnd_ = s0 == v1;
    a0 = v0 & s6;
    if (cnd_) { goto L_0890ECFC; }
    goto L_0890ECE0;
L_0890ECE0:;
    ST8(fp+12456, v0);
    v0 = D_08B230AC - (12460);
    v0 = v0 + 12460;
    ST8(s7+23052, s2);
    ST32(s3+23036, s1);
    ST32(s4+23044, s0);
    ST8(v0+4, s2);
    goto L_0890ECFC;
L_0890ECFC:;
    v1 = LD32(s3+23036);
    s0 = s0 - 1;
    v0 = LD_U8(v1+132);
    cnd_ = v0 == 0;
    s1 = s1 - 136;
    if (cnd_) { goto L_0890ED40; }
    goto L_0890ED10;
L_0890ED10:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0890ED40; }
    goto L_0890ED18;
L_0890ED18:;
    v0 = LD32(v1+128);
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0890ED40; }
    goto L_0890ED28;
L_0890ED28:;
    func_089014F0();
    goto L_0890ED30;
L_0890ED30:;
    a0 = LD32(sp);
    a1 = LD32(sp+4);
    a2 = LD32(sp+8);
    v0 = func_089064A4(a0, a1, a2);
    goto L_0890ED40;
L_0890ED40:;
    cnd_ = s0 != s5;
    v1 = LD32(s4+23044);
    if (cnd_) { goto L_0890ECD4; }
    goto L_0890ED48;
L_0890ED48:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890ED78 */
void func_0890ED78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_0890ED78:;
    v1 = LD32(a1);
    v0 = D_08AF7E20 - (32288);
    v0 = v0 + 32288;
    v1 = v1 + 260;
    ST32(a0, v0);
    ST32(a1, v1);
    return;
}

/* 0890ED94 */
u32 func_0890ED94(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890ED94:;
    sp = sp - 16;
    v0 = func_0890EC2C(a0);
    goto L_0890EDA4;
L_0890EDA4:;
    a0 = v0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EDAC;
L_0890EDAC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0890EDB8; }
    goto L_0890EDB4;
L_0890EDB4:;
    v1 = LD32(v0+24);
    goto L_0890EDB8;
L_0890EDB8:;
    v0 = (v1 >> 1) & 0x1;
    v0 = v0 ^ 0x1;
    sp = sp + 16;
    return v0;
}

/* 0890EDCC */
u32 func_0890EDCC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EDCC:;
    sp = sp - 16;
    func_08912D70(t1, t2, t3);
    goto L_0890EDDC;
L_0890EDDC:;
    v0 = 16;
    sp = sp + 16;
    return v0;
}

/* 0890EDEC */
void func_0890EDEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EDEC:;
    sp = sp - 16;
    func_08912EF8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890EDFC;
L_0890EDFC:;
    sp = sp + 16;
    return;
}

/* 0890EE08 */
void func_0890EE08(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EE08:;
    sp = sp - 16;
    func_08912DCC(a1, a2, a3, t0, t1, t2, t3);
    goto L_0890EE18;
L_0890EE18:;
    sp = sp + 16;
    return;
}

/* 0890EE24 */
void func_0890EE24(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EE24:;
    sp = sp - 16;
    func_08912F24();
    goto L_0890EE34;
L_0890EE34:;
    sp = sp + 16;
    return;
}

/* 0890EE40 */
void func_0890EE40(void)
{
L_0890EE40:;
    return;
}

/* 0890EE48 */
u32 func_0890EE48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EE48:;
    sp = sp - 16;
    v0 = func_089113F0(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890EE58;
L_0890EE58:;
    sp = sp + 16;
    return v0;
}

/* 0890EE64 */
u64 func_0890EE64(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EE64:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08913448(a0);
    goto L_0890EE78;
L_0890EE78:;
    v0 = v0 ^ 0x1;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0890EE9C; }
    goto L_0890EE88;
L_0890EE88:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0890EE9C:;
    v0 = func_0891158C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0890EEA4;
L_0890EEA4:;
    v1 = v0 + 0;
    goto L_0890EE88;
}

/* 0890EEAC */
u32 func_0890EEAC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EEAC:;
    sp = sp - 16;
    v0 = func_08912F68(a0, a1);
    goto L_0890EEBC;
L_0890EEBC:;
    sp = sp + 16;
    return v0;
}

/* 0890EEC8 */
u32 func_0890EEC8(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EEC8:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = func_08913018(a0, a1);
    goto L_0890EED8;
L_0890EED8:;
    sp = sp + 16;
    return v0;
}

/* 0890EEE4 */
u64 func_0890EEE4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EEE4:;
    sp = sp - 16;
    { u64 r_ = func_089130B0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EEF4;
L_0890EEF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890EF00 */
void func_0890EF00(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EF00:;
    sp = sp - 16;
    func_08913134(a0);
    goto L_0890EF10;
L_0890EF10:;
    sp = sp + 16;
    return;
}

/* 0890EF1C */
u64 func_0890EF1C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EF1C:;
    sp = sp - 16;
    { u64 r_ = func_089131D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EF2C;
L_0890EF2C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890EF38 */
u64 func_0890EF38(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EF38:;
    sp = sp - 16;
    { u64 r_ = func_08913260(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EF48;
L_0890EF48:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890EF54 */
rv_t func_0890EF54(u32 a0, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EF54:;
    sp = sp - 16;
    { rv_t r_ = func_089132E8(a0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890EF64;
L_0890EF64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890EF70 */
rv_t func_0890EF70(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890EF70:;
    sp = sp - 16;
    { rv_t r_ = func_089133A0(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0890EF80;
L_0890EF80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0890EF8C */
void func_0890EF8C(void)
{
L_0890EF8C:;
    return;
}

/* 0890EF94 */
void func_0890EF94(void)
{
L_0890EF94:;
    return;
}

/* 0890EF9C */
float func_0890EF9C(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_0890EF9C:;
    v0 = D_08AED238 - (-11720);
    f0 = BITSF(LD32(v0-11720));
    return f0;
}

/* 0890EFA8 */
u32 func_0890EFA8(void)
{
    u32 v0 = 0;
L_0890EFA8:;
    v0 = 1;
    return v0;
}

/* 0890EFB0 */
u32 func_0890EFB0(void)
{
    u32 v0 = 0;
L_0890EFB0:;
    v0 = 1;
    return v0;
}

/* 0890EFB8 */
void func_0890EFB8(void)
{
    u32 v0 = 0;
L_0890EFB8:;
    v0 = 1;
    return;
}

/* 0890EFC0 */
u32 func_0890EFC0(void)
{
    u32 v0 = 0;
L_0890EFC0:;
    v0 = 1;
    return v0;
}

/* 0890EFC8 */
u32 func_0890EFC8(void)
{
    u32 v0 = 0;
L_0890EFC8:;
    v0 = 1;
    return v0;
}

/* 0890EFD0 */
u32 func_0890EFD0(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0890EFD0:;
    sp = sp - 272;
    a0 = sp + 0;
    s0 = a2 + 0;
    a2 = 256;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EFEC;
L_0890EFEC:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890EFF4;
L_0890EFF4:;
    t2 = sp - 4;
    t2 = t2 + v0;
    v0 = D_08AD9524 - (-27356);
    v1 = D_08B1B468 - (-19352);
    v0 = v0 - 27356;
    a0 = LD32(v1-19352);
    v1 = LDU32(v0);
    t3 = (u32)(s32)LD_S8(v0+4);
    STU32(t2, v1);
    ST8(t2+4, t3);
    t0 = s0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    a3 = (u32)-1;
    t1 = 0 + 0;
    v0 = func_089105B4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890F03C;
L_0890F03C:;
    sp = sp + 272;
    return v0;
}

/* 0890F04C */
void func_0890F04C(u32 a1)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F04C:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    a1 = a1 & 0xff;
    func_08910BE4(a0, a1);
    goto L_0890F064;
L_0890F064:;
    sp = sp + 16;
    return;
}

/* 0890F070 */
void func_0890F070(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F070:;
    sp = sp - 16;
    v0 = D_08B1B468 - (-19352);
    s0 = LD32(v0-19352);
    a0 = s0 + 0;
    v0 = func_08910D0C(a0);
    goto L_0890F08C;
L_0890F08C:;
    v1 = 1;
    a0 = s0 + 0;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_0890F0AC; }
    goto L_0890F09C;
L_0890F09C:;
    goto L_0890F0A0;
L_0890F0A0:;
    sp = sp + 16;
    return;
L_0890F0AC:;
    { u64 r_ = func_08910C84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F0B4;
L_0890F0B4:;
    goto L_0890F0A0;
}

/* 0890F0BC */
void func_0890F0BC(void)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F0BC:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    a1 = 1;
    func_08910C38(a0, a1);
    goto L_0890F0D4;
L_0890F0D4:;
    sp = sp + 16;
    return;
}

/* 0890F0E0 */
void func_0890F0E0(void)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F0E0:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    a1 = 0 + 0;
    func_08910C38(a0, a1);
    goto L_0890F0F8;
L_0890F0F8:;
    sp = sp + 16;
    return;
}

/* 0890F104 */
void func_0890F104(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F104:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    func_08910930(a0);
    goto L_0890F11C;
L_0890F11C:;
    sp = sp + 16;
    return;
}

/* 0890F128 */
u32 func_0890F128(void)
{
    u32 v0 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F128:;
    sp = sp - 16;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    f0 = func_08910554(a0);
    goto L_0890F13C;
L_0890F13C:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0890F154; }
    goto L_0890F150;
L_0890F150:;
    v0 = 0 + 0;
    goto L_0890F154;
L_0890F154:;
    sp = sp + 16;
    return v0;
}

/* 0890F160 */
u32 func_0890F160(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F160:;
    sp = sp - 16;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    v0 = func_08910D0C(a0);
    goto L_0890F174;
L_0890F174:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    sp = sp + 16;
    return v0;
}

/* 0890F188 */
float func_0890F188(void)
{
    u32 v0 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F188:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    f0 = func_089105A8();
    goto L_0890F1A0;
L_0890F1A0:;
    sp = sp + 16;
    return f0;
}

/* 0890F1AC */
float func_0890F1AC(void)
{
    u32 v0 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F1AC:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    f0 = func_08910554(a0);
    goto L_0890F1C4;
L_0890F1C4:;
    sp = sp + 16;
    return f0;
}

/* 0890F1D0 */
u32 func_0890F1D0(void)
{
    u32 v0 = 0;
L_0890F1D0:;
    v0 = 1;
    return v0;
}

/* 0890F1D8 */
u64 func_0890F1D8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F1D8:;
    sp = sp - 16;
    a0 = 0 + 0;
    { u64 r_ = func_08910E1C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F1E8;
L_0890F1E8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890F1F4 */
u64 func_0890F1F4(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0890F1F4:;
    v0 = D_08B1B468 - (-19352);
    a0 = LD32(v0-19352);
    sp = sp - 16;
    { u64 r_ = func_08910F10(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F20C;
L_0890F20C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0890F218 */
u32 func_0890F218(u32 a0)
{
    u32 v0 = 0;
L_0890F218:;
    v0 = a0 + 0;
    return v0;
}

/* 0890F220 */
u32 func_0890F220(void)
{
    u32 v0 = 0;
L_0890F220:;
    v0 = 0 + 0;
    return v0;
}

/* 0890F228 */
void func_0890F228(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0890F228:;
    v0 = D_08AED23C - (-11716);
    f0 = BITSF(LD32(v0-11716));
    v1 = (u32)-1;
    v0 = 1;
    ST8(a0, 0);
    ST8(a0+1, 0);
    ST8(a0+2, 0);
    ST8(a0+3, 0);
    ST8(a0+4, 0);
    ST8(a0+5, 0);
    ST8(a0+6, 0);
    ST8(a0+7, 0);
    ST8(a0+8, 0);
    ST8(a0+9, 0);
    ST32(a0+12, FBITS(f0));
    ST32(a0+16, 0);
    ST32(a0+20, v1);
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    ST32(a0+32, v1);
    ST32(a0+36, v0);
    return;
}

/* 0890F280 */
u32 func_0890F280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f12 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0890F280:;
    sp = sp - 96;
    v0 = a0 << 2;
    ST32(sp+32, v0);
    v1 = D_08BD8170 - (-32400);
    v1 = v1 - 32400;
    ST32(sp+8, a0);
    a0 = v0 + a0;
    v0 = D_08BD7ED4 - (32468);
    s6 = a0 << 3;
    v0 = v0 + 32468;
    a0 = LD32(sp+32);
    v0 = a0 + v0;
    v1 = a0 + v1;
    ST32(sp+28, v0);
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    ST32(sp+12, a2);
    ST32(sp+16, a3);
    ST32(sp+20, 0);
    ST32(sp+24, v1);
    s5 = D_08BD7F2C - (32556);
    s7 = s6 + v0;
    s3 = a1 + 0;
    s2 = s5 + 32556;
    goto L_0890F308;
L_0890F308:;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F310;
L_0890F310:;
    s0 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_0890F32C; }
    goto L_0890F320;
L_0890F320:;
    a0 = s2 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F328;
L_0890F328:;
    ST32(s2+4, s0);
    goto L_0890F32C;
L_0890F32C:;
    v0 = LD32(s2+8);
    a0 = D_08BD7EDC - (32476);
    a0 = a0 + 32476;
    v0 = v0 + 1;
    ST32(s2+8, v0);
    v1 = s6 + a0;
    v0 = LD32(v1+20);
    cnd_ = (s32)v0 < 0;
    s0 = s5 + 32556;
    if (cnd_) { goto L_0890F414; }
    goto L_0890F350;
L_0890F350:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v1 = LD32(sp+20);
    if (cnd_) { goto L_0890F378; }
    goto L_0890F35C;
L_0890F35C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890F3F8; }
    goto L_0890F374;
L_0890F374:;
    v1 = LD32(sp+20);
    goto L_0890F378;
L_0890F378:;
    cnd_ = v1 != 0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_0890F3B4; }
    goto L_0890F380;
L_0890F380:;
    a0 = s3 + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_0890F388;
L_0890F388:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v0 = D_08AED244 - (-11708);
    if (cnd_) { goto L_0890F3E4; }
    goto L_0890F394;
L_0890F394:;
    a0 = s3 + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_0890F39C;
L_0890F39C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_0890F3B4; }
    goto L_0890F3A8;
L_0890F3A8:;
    v0 = LD_U8(s7+6);
    cnd_ = v0 == 0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_0890F308; }
    goto L_0890F3B4;
L_0890F3B4:;
    sp = sp + 96;
    return v0;
L_0890F3E4:;
    f12 = BITSF(LD32(v0-11708));
    a0 = 1;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F3F0;
L_0890F3F0:;
    goto L_0890F394;
L_0890F3F8:;
    v0 = func_088F8C18();
    goto L_0890F400;
L_0890F400:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F40C;
L_0890F40C:;
    v1 = LD32(sp+20);
    goto L_0890F378;
L_0890F414:;
    v0 = LD_U8(v1+7);
    cnd_ = v0 != 0;
    s0 = s5 + 32556;
    if (cnd_) { goto L_0890F350; }
    goto L_0890F420;
L_0890F420:;
    v0 = LD32(sp+32);
    a0 = D_08BD8170 - (-32400);
    a0 = a0 - 32400;
    s4 = v0 + a0;
    fp = D_08AED240 - (-11712);
    ST8(v1+6, 0);
    a0 = LD32(s4);
    goto L_0890F43C;
L_0890F43C:;
    a3 = LD32(sp+12);
    s1 = s5 + 32556;
    a1 = s3 + 0;
    a2 = 0 + 0;
    s0 = s1 + 0;
    v0 = func_0887BFCC(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_0890F454;
L_0890F454:;
    cnd_ = v0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0890F4E0; }
    goto L_0890F45C;
L_0890F45C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(fp-11712));
    if (cnd_) { goto L_0890F484; }
    goto L_0890F468;
L_0890F468:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890F4C4; }
    goto L_0890F480;
L_0890F480:;
    f12 = BITSF(LD32(fp-11712));
    goto L_0890F484;
L_0890F484:;
    a0 = 0 + 0;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F48C;
L_0890F48C:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F494;
L_0890F494:;
    s0 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v0 == s0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0890F4B0; }
    goto L_0890F4A4;
L_0890F4A4:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F4AC;
L_0890F4AC:;
    ST32(s1+4, s0);
    goto L_0890F4B0;
L_0890F4B0:;
    v0 = LD32(s1+8);
    v0 = v0 + 1;
    ST32(s1+8, v0);
    a0 = LD32(s4);
    goto L_0890F43C;
L_0890F4C4:;
    v0 = func_088F8C18();
    goto L_0890F4CC;
L_0890F4CC:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F4D8;
L_0890F4D8:;
    f12 = BITSF(LD32(fp-11712));
    goto L_0890F484;
L_0890F4E0:;
    ST32(s7+16, 0);
    ST32(s7+24, v0);
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_0890F510; }
    goto L_0890F4F4;
L_0890F4F4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890F620; }
    goto L_0890F50C;
L_0890F50C:;
    v1 = LD32(sp+24);
    goto L_0890F510;
L_0890F510:;
    v0 = LD32(sp+28);
    a1 = 4096;
    a0 = LD32(v1);
    a2 = LD32(v0);
    s0 = s5 + 32556;
    v0 = func_0887C198(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0890F528;
L_0890F528:;
    s4 = v0 + 0;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F530;
L_0890F530:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0890F54C; }
    goto L_0890F540;
L_0890F540:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F548;
L_0890F548:;
    ST32(s0+4, s1);
    goto L_0890F54C;
L_0890F54C:;
    v0 = LD32(s0+8);
    v1 = LD32(sp+12);
    a0 = LD32(sp+16);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = v1 + a0;
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_0890F610; }
    goto L_0890F570;
L_0890F570:;
    v1 = LD32(sp+28);
    goto L_0890F574;
L_0890F574:;
    a1 = s4 + 0;
    a0 = LD32(v1);
    v1 = D_08BD7EDC - (32476);
    v1 = v1 + 32476;
    s0 = s6 + v1;
    ST32(s0+28, v0);
    v0 = sceAtracSetDataAndGetID(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890F590;
L_0890F590:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { v0 = LD32(sp+24); goto L_0890F5F4; }
    goto L_0890F598;
L_0890F598:;
    ST32(s0+20, v0);
    a2 = sp + 4;
    a1 = sp + 0;
    a0 = LD32(s0+20);
    a3 = a2 + 0;
    v0 = sceAtracGetSoundSample(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890F5B0;
L_0890F5B0:;
    cnd_ = (s32)v0 < 0;
    v0 = 1;
    if (cnd_) { goto L_0890F5D8; }
    goto L_0890F5B8;
L_0890F5B8:;
    ST8(s0+6, 0);
    ST32(sp+20, v0);
    ST8(s0, v0);
    v0 = LD32(sp);
    ST8(s0+4, 0);
    ST32(s0+24, v0);
    s0 = s5 + 32556;
    goto L_0890F350;
L_0890F5D8:;
    a0 = LD32(sp+8);
    func_0890F63C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0890F5E0;
L_0890F5E0:;
    a0 = 1;
    ST8(s0+6, a0);
    ST8(s0, 0);
    s0 = s5 + 32556;
    goto L_0890F350;
L_0890F5F4:;
    a1 = 0 + 0;
    a0 = LD32(v0);
    func_0887C5EC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_0890F600;
L_0890F600:;
    v1 = 1;
    ST8(s0+6, v1);
    s0 = s5 + 32556;
    goto L_0890F350;
L_0890F610:;
    v0 = LD32(a0);
    v0 = LD32(v0+356);
    v1 = LD32(sp+28);
    goto L_0890F574;
L_0890F620:;
    v0 = func_088F8C18();
    goto L_0890F628;
L_0890F628:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F634;
L_0890F634:;
    v1 = LD32(sp+24);
    goto L_0890F510;
}

/* 0890F63C */
void func_0890F63C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0890F63C:;
    sp = sp - 32;
    s3 = D_08BD7F2C - (32556);
    s4 = 0 + 0;
    s2 = a0 + 0;
    s0 = s3 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F66C;
L_0890F66C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890F688; }
    goto L_0890F67C;
L_0890F67C:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F684;
L_0890F684:;
    ST32(s0+4, s1);
    goto L_0890F688;
L_0890F688:;
    v0 = LD32(s0+8);
    a0 = s2 << 2;
    a1 = 1;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8170 - (-32400);
    v0 = v0 - 32400;
    a2 = a0 + v0;
    a0 = a0 + s2;
    v0 = D_08BD7EDC - (32476);
    a0 = a0 << 3;
    v0 = v0 + 32476;
    s0 = a0 + v0;
    v1 = LD32(s0+20);
    cnd_ = (s32)v1 < 0;
    s1 = s3 + 32556;
    if (cnd_) { goto L_0890F6F0; }
    goto L_0890F6C8;
L_0890F6C8:;
    a0 = LD32(a2);
    s4 = 1;
    func_0887C5EC(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0890F6D4;
L_0890F6D4:;
    a0 = LD32(s0+20);
    v0 = sceAtracReleaseAtracID(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890F6E0;
L_0890F6E0:;
    v0 = (u32)-1;
    ST8(s0+4, 0);
    ST8(s0, 0);
    ST32(s0+20, v0);
    goto L_0890F6F0;
L_0890F6F0:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_0890F718; }
    goto L_0890F6FC;
L_0890F6FC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890F738; }
    goto L_0890F714;
L_0890F714:;
    v0 = s4 + 0;
    goto L_0890F718;
L_0890F718:;
    sp = sp + 32;
    return;
L_0890F738:;
    v0 = func_088F8C18();
    goto L_0890F740;
L_0890F740:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F74C;
L_0890F74C:;
    v0 = s4 + 0;
    goto L_0890F718;
}

/* 0890F754 */
u32 func_0890F754(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0890F754:;
    sp = sp - 112;
    s3 = a0 << 2;
    v0 = s3 + a0;
    s6 = D_08BD7EDC - (32476);
    v0 = v0 << 3;
    v1 = s6 + 32476;
    v0 = v0 + v1;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s2 = a0 + 0;
    s0 = a3 + 0;
    a0 = LD_U8(v0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0890F7F4; }
    goto L_0890F7B8;
L_0890F7B8:;
    v0 = 0 + 0;
    ST32(a3, 0);
    goto L_0890F7C0;
L_0890F7C0:;
    sp = sp + 112;
    return v0;
L_0890F7F4:;
    v0 = LD_U8(v0+1);
    cnd_ = v0 == 0;
    v0 = D_08BD7F2C - (32556);
    if (cnd_) { goto L_0890F8E8; }
    goto L_0890F800;
L_0890F800:;
    ST32(a3, 0);
    s0 = v0 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F80C;
L_0890F80C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0890F828; }
    goto L_0890F81C;
L_0890F81C:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F824;
L_0890F824:;
    ST32(s0+4, s1);
    goto L_0890F828;
L_0890F828:;
    v0 = LD32(s0+8);
    a0 = s6 + 32476;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s3 + s2;
    v0 = v0 << 3;
    a0 = v0 + a0;
    v1 = LD_U8(a0+6);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0890F8AC; }
    goto L_0890F850;
L_0890F850:;
    v1 = LD32(a0+20);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v1 = D_08BD7F2C - (32556);
    if (cnd_) { goto L_0890F8AC; }
    goto L_0890F860;
L_0890F860:;
    s0 = v1 + 32556;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890F7C0; }
    goto L_0890F870;
L_0890F870:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890F890; }
    goto L_0890F888;
L_0890F888:;
    v0 = 0 + 0;
    goto L_0890F7C0;
L_0890F890:;
    v0 = func_088F8C18();
    goto L_0890F898;
L_0890F898:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F8A4;
L_0890F8A4:;
    v0 = 0 + 0;
    goto L_0890F7C0;
L_0890F8AC:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 != 0;
    v1 = D_08BD7F2C - (32556);
    if (cnd_) { goto L_0890F860; }
    goto L_0890F8B8;
L_0890F8B8:;
    v0 = D_08BD7F38 - (32568);
    v0 = v0 + 32568;
    v0 = s3 + v0;
    a0 = LD32(v0);
    v1 = LD_U8(a0+4);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = D_08BD7F2C - (32556); goto L_0890F860; }
    goto L_0890F8D4;
L_0890F8D4:;
    v0 = 1;
    ST8(a0+4, v0);
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F8E0;
L_0890F8E0:;
    v1 = D_08BD7F2C - (32556);
    goto L_0890F860;
L_0890F8E8:;
    v0 = func_088FB570(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890F8F0;
L_0890F8F0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890F7C0; }
    goto L_0890F8FC;
L_0890F8FC:;
    v0 = func_088FC8D4();
    goto L_0890F904;
L_0890F904:;
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0890F7C0; }
    goto L_0890F90C;
L_0890F90C:;
    a0 = D_08BD7F2C - (32556);
    s1 = a0 + 32556;
    { u64 r_ = func_088F8BFC(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F918;
L_0890F918:;
    s7 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v0 == s7;
    fp = 0 + 0;
    if (cnd_) { goto L_0890F934; }
    goto L_0890F928;
L_0890F928:;
    a0 = s1 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890F930;
L_0890F930:;
    ST32(s1+4, s7);
    goto L_0890F934;
L_0890F934:;
    v0 = LD32(s1+8);
    a3 = s6 + 32476;
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = s3 + s2;
    a1 = v0 << 3;
    a2 = a1 + a3;
    v0 = LD_U8(a2);
    cnd_ = v0 == 0;
    v1 = D_08BD7F2C - (32556);
    if (cnd_) { goto L_0890FB30; }
    goto L_0890F95C;
L_0890F95C:;
    v0 = LD_U8(a2+1);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = v1 + 32556; goto L_0890FB34; }
    goto L_0890F968;
L_0890F968:;
    v0 = LD32(a2+16);
    a0 = LD32(a2+16);
    v1 = 2048;
    v0 = v0 << 2;
    v0 = s5 + v0;
    fp = v1 - a0;
    cnd_ = fp == 0;
    ST32(sp+24, v0);
    if (cnd_) { goto L_0890FA68; }
    goto L_0890F988;
L_0890F988:;
    v0 = D_08BD8170 - (-32400);
    v0 = v0 - 32400;
    v0 = s3 + v0;
    ST32(sp+28, a1);
    s1 = a2 + 0;
    ST32(sp+36, v0);
    goto L_0890F9A0;
L_0890F9A0:;
    v0 = LD32(s1+20);
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0890FE0C; }
    goto L_0890F9B0;
L_0890F9B0:;
    v0 = LD_U8(s1);
    cnd_ = v0 == 0;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FA6C; }
    goto L_0890F9BC;
L_0890F9BC:;
    a0 = LD32(s1+20);
    a1 = LD32(sp+24);
    a2 = sp + 0;
    a3 = sp + 4;
    t0 = sp + 8;
    v0 = sceAtracDecodeData(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890F9D4;
L_0890F9D4:;
    v1 = ~(0 | v0);
    v1 = v1 >> 31;
    ST8(s1, v1);
    a1 = 0x80630000u;
    a1 = a1 | 0x24;
    a0 = LD32(sp);
    v1 = LD32(s1+16);
    a2 = a0 << 2;
    v1 = v1 + a0;
    a0 = LD32(sp+24);
    ST32(s1+16, v1);
    a0 = a0 + a2;
    cnd_ = v0 == a1;
    ST32(sp+24, a0);
    if (cnd_) { goto L_0890FDB4; }
    goto L_0890FA0C;
L_0890FA0C:;
    a0 = D_08BD8170 - (-32400);
    a0 = a0 - 32400;
    s7 = s3 + a0;
    v0 = LD32(s7);
    v1 = LD32(v0+352);
    a0 = LD32(s1+28);
    v1 = v1 < a0;
    cnd_ = v1 != 0;
    a0 = LD32(sp+28);
    if (cnd_) { goto L_0890FCA0; }
    goto L_0890FA30;
L_0890FA30:;
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    v1 = a0 + v0;
    v0 = LD32(v1+20);
    a0 = (u32)-1;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_0890FC40; }
    goto L_0890FA4C;
L_0890FA4C:;
    v1 = LD32(sp);
    v0 = v1 < fp;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0890FBDC; }
    goto L_0890FA5C;
L_0890FA5C:;
    fp = fp - v1;
    goto L_0890FA60;
L_0890FA60:;
    cnd_ = fp != 0;
    if (cnd_) { goto L_0890F9A0; }
    goto L_0890FA68;
L_0890FA68:;
    v0 = s3 + s2;
    goto L_0890FA6C;
L_0890FA6C:;
    v0 = v0 << 3;
    v1 = s6 + 32476;
    a1 = v0 + v1;
    a0 = LD_U8(a1);
    cnd_ = a0 == 0;
    fp = 0 + 0;
    if (cnd_) { goto L_0890FADC; }
    goto L_0890FA84;
L_0890FA84:;
    v0 = LD_U8(a1+6);
    cnd_ = v0 != 0;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FAE0; }
    goto L_0890FA90;
L_0890FA90:;
    v1 = LD32(a1+20);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FAE0; }
    goto L_0890FAA0;
L_0890FAA0:;
    v0 = LD_U8(a1+5);
    cnd_ = v0 == 0;
    fp = 1;
    if (cnd_) { goto L_0890FADC; }
    goto L_0890FAAC;
L_0890FAAC:;
    v0 = D_08AED248 - (-11704);
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(v0-11704));
    f1 = f1 - f0;
    f0 = BITSF(0);
    ST32(a1+12, FBITS(f1));
    f2 = BITSF(LD32(a1+12));
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FAE0; }
    goto L_0890FAD8;
L_0890FAD8:;
    fp = 0 + 0;
    goto L_0890FADC;
L_0890FADC:;
    v0 = s3 + s2;
    goto L_0890FAE0;
L_0890FAE0:;
    v0 = v0 << 3;
    v1 = s6 + 32476;
    v1 = v0 + v1;
    a0 = LD32(v1+20);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { ST32(s0, 0); goto L_0890FAFC; }
    goto L_0890FAFC;
L_0890FAFC:;
    cnd_ = fp != 0;
    if (cnd_) { goto L_0890FB8C; }
    goto L_0890FB04;
L_0890FB04:;
    v0 = LD_U8(v1+4);
    cnd_ = v0 != 0;
    v1 = D_08BD7F2C - (32556);
    if (cnd_) { goto L_0890FB30; }
    goto L_0890FB10;
L_0890FB10:;
    v0 = D_08BD7F38 - (32568);
    v0 = v0 + 32568;
    v0 = s3 + v0;
    a0 = LD32(v0);
    v1 = LD_U8(a0+4);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0890FB7C; }
    goto L_0890FB2C;
L_0890FB2C:;
    v1 = D_08BD7F2C - (32556);
    goto L_0890FB30;
L_0890FB30:;
    s0 = v1 + 32556;
    goto L_0890FB34;
L_0890FB34:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = fp + 0;
    if (cnd_) { goto L_0890F7C0; }
    goto L_0890FB40;
L_0890FB40:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890FB60; }
    goto L_0890FB58;
L_0890FB58:;
    v0 = fp + 0;
    goto L_0890F7C0;
L_0890FB60:;
    v0 = func_088F8C18();
    goto L_0890FB68;
L_0890FB68:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FB74;
L_0890FB74:;
    v0 = fp + 0;
    goto L_0890F7C0;
L_0890FB7C:;
    ST8(a0+4, v0);
    { u64 r_ = func_088F8C90(a0, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FB84;
L_0890FB84:;
    v1 = D_08BD7F2C - (32556);
    goto L_0890FB30;
L_0890FB8C:;
    f20 = BITSF(LD32(v1+12));
    a0 = LD32(v1+36);
    f0 = func_088D9E34(a0);
    goto L_0890FB98;
L_0890FB98:;
    v0 = D_08B1B454 - (-19372);
    f1 = BITSF(LD32(v0-19372));
    f2 = BITSF(0);
    f1 = f1 * f20;
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    ST32(s0, FBITS(f1));
    if (cnd_) { goto L_0890FBD4; }
    goto L_0890FBBC;
L_0890FBBC:;
    v0 = D_08AED24C - (-11700);
    f2 = BITSF(LD32(v0-11700));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = f1; goto L_0890FBD4; }
    goto L_0890FBD4;
L_0890FBD4:;
    ST32(s0, FBITS(f2));
    goto L_0890FB2C;
L_0890FBDC:;
    cnd_ = fp == v1;
    a0 = LD32(sp+28);
    if (cnd_) { goto L_0890FC24; }
    goto L_0890FBE4;
L_0890FBE4:;
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    v1 = a0 + v0;
    v0 = LD32(v1+16);
    a1 = s5 + 8192;
    fp = 0 + 0;
    v0 = v0 - 2048;
    ST32(v1+16, v0);
    cnd_ = s4 == a1;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FA6C; }
    goto L_0890FC0C;
L_0890FC0C:;
    a2 = LD32(v1+16);
    a0 = s4 + 0;
    a2 = a2 << 2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FC1C;
L_0890FC1C:;
    goto L_0890FA60;
L_0890FC24:;
    v0 = s3 + s2;
    v0 = v0 << 3;
    v1 = s6 + 32476;
    v0 = v0 + v1;
    ST32(v0+16, 0);
    v0 = s3 + s2;
    goto L_0890FA6C;
L_0890FC40:;
    v0 = LD32(v1+16);
    v0 = v0 < 0x801u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890FC80; }
    goto L_0890FC50;
L_0890FC50:;
    a2 = LD32(v1+16);
    v0 = 2048;
    a1 = 0 + 0;
    a2 = a2 - 2048;
    a0 = a2 << 2;
    a2 = v0 - a2;
    a2 = a2 << 2;
    a0 = a0 + s4;
    goto L_0890FC70;
L_0890FC70:;
    fp = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FC78;
L_0890FC78:;
    ST32(sp, 0);
    goto L_0890FA4C;
L_0890FC80:;
    a2 = LD32(v1+16);
    v1 = 2048;
    a1 = 0 + 0;
    a0 = a2 << 2;
    a2 = v1 - a2;
    a2 = a2 << 2;
    a0 = a0 + s5;
    goto L_0890FC70;
L_0890FCA0:;
    a0 = LD32(s1+20);
    a1 = sp + 12;
    a2 = sp + 16;
    a3 = sp + 20;
    v0 = sceAtracGetStreamDataInfo(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890FCB4;
L_0890FCB4:;
    a1 = LD32(sp+16);
    cnd_ = a1 == 0;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FA6C; }
    goto L_0890FCC0;
L_0890FCC0:;
    v1 = LD32(s7);
    v0 = LD32(v1+376);
    v0 = v0 < a1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = D_08BD7F2C - (32556);
    if (cnd_) { goto L_0890FA68; }
    goto L_0890FCD8;
L_0890FCD8:;
    s7 = v0 + 32556;
    v0 = LD32(s7+8);
    cnd_ = v0 == 0;
    v1 = LD32(sp+36);
    if (cnd_) { goto L_0890FD04; }
    goto L_0890FCE8;
L_0890FCE8:;
    v0 = LD32(s7+8);
    v0 = v0 - 1;
    ST32(s7+8, v0);
    v1 = LD32(s7+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0890FD98; }
    goto L_0890FD00;
L_0890FD00:;
    v1 = LD32(sp+36);
    goto L_0890FD04;
L_0890FD04:;
    a2 = LD32(sp+12);
    v0 = D_08BD7F2C - (32556);
    a0 = LD32(v1);
    s7 = v0 + 32556;
    v0 = func_0887C198(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0890FD18;
L_0890FD18:;
    ST32(sp+32, v0);
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FD20;
L_0890FD20:;
    ST32(sp+40, v0);
    v0 = LD32(s7+4);
    v1 = LD32(sp+40);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0890FD44; }
    goto L_0890FD34;
L_0890FD34:;
    a0 = s7 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FD3C;
L_0890FD3C:;
    a0 = LD32(sp+40);
    ST32(s7+4, a0);
    goto L_0890FD44;
L_0890FD44:;
    v0 = LD32(s7+8);
    v1 = D_08BD7EDC - (32476);
    v1 = v1 + 32476;
    v0 = v0 + 1;
    ST32(s7+8, v0);
    v0 = LD32(sp+28);
    a0 = v0 + v1;
    v0 = LD_U8(a0+6);
    v1 = 1;
    v0 = v0 & 0xff;
    cnd_ = v0 == v1;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FA6C; }
    goto L_0890FD74;
L_0890FD74:;
    v0 = LD32(a0+20);
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    v0 = s3 + s2;
    if (cnd_) { goto L_0890FA6C; }
    goto L_0890FD84;
L_0890FD84:;
    a0 = LD32(a0+20);
    a1 = LD32(sp+32);
    v0 = sceAtracAddStreamData(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890FD90;
L_0890FD90:;
    a0 = LD32(sp+28);
    goto L_0890FA30;
L_0890FD98:;
    v0 = func_088F8C18();
    goto L_0890FDA0;
L_0890FDA0:;
    ST32(s7+4, v0);
    a0 = s7 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FDAC;
L_0890FDAC:;
    a1 = LD32(sp+16);
    goto L_0890FD00;
L_0890FDB4:;
    v0 = LD32(s1+16);
    v0 = v0 < 0x801u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890FDF0; }
    goto L_0890FDC4;
L_0890FDC4:;
    a0 = LD32(s1+16);
    v0 = 2048;
    a1 = 0 + 0;
    a0 = a0 - 2048;
    a2 = v0 - a0;
    a0 = a0 << 2;
    a0 = a0 + s4;
    goto L_0890FDE0;
L_0890FDE0:;
    a2 = a2 << 2;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FDE8;
L_0890FDE8:;
    v0 = s3 + s2;
    goto L_0890FA6C;
L_0890FDF0:;
    a0 = LD32(s1+16);
    v1 = 2048;
    a1 = 0 + 0;
    a2 = v1 - a0;
    a0 = a0 << 2;
    a0 = a0 + s5;
    goto L_0890FDE0;
L_0890FE0C:;
    ST8(s1, 0);
    goto L_0890F9B0;
}

/* 0890FE18 */
rv_t func_0890FE18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0890FE18:;
    sp = sp - 48;
    v0 = 0 + 0;
    s1 = a1 + 0;
    fpu_csr = v0 & 0x0183FFFFu; fcc = (v0 >> 23) & 1;
    v0 = D_08BD7EDC - (32476);
    s2 = LD32(a1+268);
    s7 = v0 + 32476;
    v0 = D_08BD7F38 - (32568);
    s6 = s2 << 2;
    v1 = s6 + s2;
    s5 = v1 << 3;
    v0 = v0 + 32568;
    s4 = s6 + v0;
    s3 = s5 + s7;
    fp = 1;
    s0 = LD32(s4);
    goto L_0890FE80;
L_0890FE80:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890FF48; }
    goto L_0890FE8C;
L_0890FE8C:;
    a2 = LD32(s1+260);
    a3 = LD32(s1+264);
    a1 = s1 + 0;
    a0 = s2 + 0;
    v0 = func_0890F280(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890FEA0;
L_0890FEA0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0890FF30; }
    goto L_0890FEA8;
L_0890FEA8:;
    ST8(s3+3, 0);
    ST8(s3+6, fp);
    a2 = s5 + s7;
    goto L_0890FEB4;
L_0890FEB4:;
    v0 = LD_U8(a2+3);
    cnd_ = v0 == 0;
    v0 = D_08BD8178 - (-32392);
    if (cnd_) { goto L_0890FED0; }
    goto L_0890FEC0;
L_0890FEC0:;
    v0 = LD_U8(a2+6);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s4); goto L_0890FE80; }
    goto L_0890FECC;
L_0890FECC:;
    v0 = D_08BD8178 - (-32392);
    goto L_0890FED0;
L_0890FED0:;
    v0 = v0 - 32392;
    a1 = (u32)-1;
    v0 = s6 + v0;
    v1 = 1;
    ST8(a2+3, 0);
    a0 = 0 + 0;
    ST8(a2+6, v1);
    ST8(a2+2, 0);
    ST32(a2+32, a1);
    ST32(v0, a1);
    v0 = sceKernelExitDeleteThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0890FEFC;
L_0890FEFC:;
    v0 = 0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0890FF30:;
    a0 = LD32(s4);
    func_088F8C64(a0, 0, 0, 0);
    goto L_0890FF38;
L_0890FF38:;
    a0 = s2 + 0;
    func_0890F63C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0890FF40;
L_0890FF40:;
    a2 = s5 + s7;
    goto L_0890FEB4;
L_0890FF48:;
    func_088F8CB0(a0, a2, a3, t0, t1, t2, t3);
    goto L_0890FF50;
L_0890FF50:;
    ST8(s0+4, 0);
    goto L_0890FE8C;
}

/* 0890FF58 */
void func_0890FF58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0890FF58:;
    sp = sp - 64;
    s5 = D_08BD7F2C - (32556);
    s4 = a0 + 0;
    s0 = s5 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FF88;
L_0890FF88:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0890FFA4; }
    goto L_0890FF98;
L_0890FF98:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0890FFA0;
L_0890FFA0:;
    ST32(s0+4, s1);
    goto L_0890FFA4;
L_0890FFA4:;
    v0 = LD32(s0+8);
    s2 = s4 << 2;
    a0 = s2 + s4;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    a0 = a0 << 3;
    a0 = a0 + v0;
    s1 = D_08BD8170 - (-32400);
    v0 = D_08BD8178 - (-32392);
    s1 = s1 - 32400;
    v0 = v0 - 32392;
    v0 = s2 + v0;
    s1 = s2 + s1;
    s3 = (u32)-1;
    ST32(v0, s3);
    s0 = s4 << 4;
    s0 = s0 + s4;
    ST32(s1, 0);
    s0 = s0 << 4;
    s5 = s5 + 32556;
    func_0890F228(a0);
    goto L_08910000;
L_08910000:;
    v0 = D_08BD7F50 - (32592);
    v0 = v0 + 32592;
    s0 = s0 + v0;
    a1 = D_08AD952C - (-27348);
    t0 = D_08AD9530 - (-27344);
    a0 = s0 + 0;
    a1 = a1 - 27348;
    t0 = t0 - 27344;
    a2 = 260;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891002C;
L_0891002C:;
    ST32(s0+268, s3);
    a1 = D_08AD9538 - (-27336);
    t0 = s4 + 0;
    ST32(s0+260, 0);
    a1 = a1 - 27336;
    a2 = 32;
    ST32(s0+264, 0);
    a3 = 0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08910054;
L_08910054:;
    a0 = 388;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891005C;
L_0891005C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0x20000u;
    a3 = 2;
    t0 = 0 + 0;
    func_0887BE14(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08910078;
L_08910078:;
    ST32(s1, s0);
    v0 = D_08BD7ED4 - (32468);
    v0 = v0 + 32468;
    a0 = 16;
    a1 = 16386;
    s2 = s2 + v0;
    { rv_t r_ = func_088F9AB0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08910094;
L_08910094:;
    v1 = LD32(s5+8);
    cnd_ = v1 == 0;
    ST32(s2, v0);
    if (cnd_) { goto L_089100B8; }
    goto L_089100A0;
L_089100A0:;
    v0 = LD32(s5+8);
    v0 = v0 - 1;
    ST32(s5+8, v0);
    v1 = LD32(s5+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089100DC; }
    goto L_089100B8;
L_089100B8:;
    goto L_089100BC;
L_089100BC:;
    sp = sp + 64;
    return;
L_089100DC:;
    v0 = func_088F8C18();
    goto L_089100E4;
L_089100E4:;
    ST32(s5+4, v0);
    a0 = s5 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089100F0;
L_089100F0:;
    goto L_089100BC;
}

/* 089100F8 */
void func_089100F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089100F8:;
    sp = sp - 32;
    s6 = D_08BD7F2C - (32556);
    s0 = s6 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910128;
L_08910128:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08910144; }
    goto L_08910138;
L_08910138:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910140;
L_08910140:;
    ST32(s0+4, s1);
    goto L_08910144;
L_08910144:;
    v0 = LD32(s0+8);
    s1 = 0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8180 - (-32384);
    ST8(v0-32384, 0);
    func_08910DF8(0, 0, 0, 0, 0, 0, 0);
    goto L_08910160;
L_08910160:;
    v0 = D_08BD8170 - (-32400);
    v1 = D_08BD7ED4 - (32468);
    s5 = v0 - 32400;
    s4 = v1 + 32468;
    goto L_08910170;
L_08910170:;
    v0 = s1 << 2;
    s2 = v0 + s5;
    s0 = LD32(s2);
    s3 = v0 + s4;
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08910210; }
    goto L_0891018C;
L_0891018C:;
    a0 = LD32(s3);
    { rv_t r_ = func_088F9A14(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08910194;
L_08910194:;
    v0 = (s32)s1 < 2;
    ST32(s2, 0);
    cnd_ = v0 != 0;
    ST32(s3, 0);
    if (cnd_) { goto L_08910170; }
    goto L_089101A4;
L_089101A4:;
    s0 = s6 + 32556;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089101D0; }
    goto L_089101B4;
L_089101B4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089101F4; }
    goto L_089101CC;
L_089101CC:;
    goto L_089101D0;
L_089101D0:;
    sp = sp + 32;
    return;
L_089101F4:;
    v0 = func_088F8C18();
    goto L_089101FC;
L_089101FC:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910208;
L_08910208:;
    goto L_089101D0;
L_08910210:;
    func_0887BF74(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08910218;
L_08910218:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910220;
L_08910220:;
    goto L_0891018C;
}

/* 08910228 */
void func_08910228(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08910228:;
    sp = sp - 32;
    s3 = D_08BD7F2C - (32556);
    s2 = a0 + 0;
    s0 = s3 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910250;
L_08910250:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891026C; }
    goto L_08910260;
L_08910260:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910268;
L_08910268:;
    ST32(s0+4, s1);
    goto L_0891026C;
L_0891026C:;
    v0 = LD32(s0+8);
    v1 = s2 << 2;
    v1 = v1 + s2;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    v1 = v1 << 3;
    v1 = v1 + v0;
    v0 = 1;
    a0 = LD32(v1+32);
    ST8(v1+7, v0);
    s0 = s3 + 32556;
    a1 = 1;
    v0 = LD_U8(v1+2);
    ST8(v1+8, v0);
    a2 = LD_U8(v1+1);
    ST8(v1+9, a2);
    v0 = LD_U8(v1+9);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891031C; }
    goto L_089102C0;
L_089102C0:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089102E8; }
    goto L_089102CC;
L_089102CC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910300; }
    goto L_089102E4;
L_089102E4:;
    goto L_089102E8;
L_089102E8:;
    sp = sp + 32;
    return;
L_08910300:;
    v0 = func_088F8C18();
    goto L_08910308;
L_08910308:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910314;
L_08910314:;
    goto L_089102E8;
L_0891031C:;
    func_08910C38(a0, a1);
    goto L_08910324;
L_08910324:;
    goto L_089102C0;
}

/* 0891032C */
void func_0891032C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891032C:;
    sp = sp - 32;
    s4 = D_08BD7F2C - (32556);
    s2 = a0 + 0;
    s0 = s4 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910358;
L_08910358:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08910374; }
    goto L_08910368;
L_08910368:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910370;
L_08910370:;
    ST32(s0+4, s1);
    goto L_08910374;
L_08910374:;
    v0 = LD32(s0+8);
    s3 = D_08BD7EDC - (32476);
    s1 = s4 + 32556;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s0 = s2 << 2;
    v1 = s0 + s2;
    v0 = s3 + 32476;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a0 = LD32(v1+32);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = s0 + s2;
    if (cnd_) { goto L_089103BC; }
    goto L_089103AC;
L_089103AC:;
    v0 = LD_U8(v1+9);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08910434; }
    goto L_089103B8;
L_089103B8:;
    v0 = s0 + s2;
    goto L_089103BC;
L_089103BC:;
    v1 = s3 + 32476;
    v0 = v0 << 3;
    v0 = v0 + v1;
    ST8(v0+7, 0);
    ST8(v0+8, 0);
    ST8(v0+9, 0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089103FC; }
    goto L_089103E0;
L_089103E0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910418; }
    goto L_089103F8;
L_089103F8:;
    goto L_089103FC;
L_089103FC:;
    sp = sp + 32;
    return;
L_08910418:;
    v0 = func_088F8C18();
    goto L_08910420;
L_08910420:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891042C;
L_0891042C:;
    goto L_089103FC;
L_08910434:;
    func_08910C38(a0, a1);
    goto L_0891043C;
L_0891043C:;
    v0 = s0 + s2;
    goto L_089103BC;
}

/* 08910444 */
void func_08910444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08910444:;
    sp = sp - 32;
    s3 = D_08BD7F2C - (32556);
    s2 = a0 + 0;
    s0 = s3 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891046C;
L_0891046C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08910488; }
    goto L_0891047C;
L_0891047C:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910484;
L_08910484:;
    ST32(s0+4, s1);
    goto L_08910488;
L_08910488:;
    v0 = LD32(s0+8);
    s1 = s3 + 32556;
    s3 = (u32)-1;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8178 - (-32392);
    s0 = s2 << 2;
    v0 = v0 - 32392;
    v0 = s0 + v0;
    v1 = LD32(v0);
    a0 = s2 + 0;
    cnd_ = v1 == s3;
    a1 = 0 + 0;
    if (cnd_) { goto L_089104C4; }
    goto L_089104BC;
L_089104BC:;
    { u64 r_ = func_08910CC0(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089104C4;
L_089104C4:;
    v0 = s0 + s2;
    v1 = D_08BD7EDC - (32476);
    v1 = v1 + 32476;
    v0 = v0 << 3;
    v0 = v0 + v1;
    ST32(v0+20, s3);
    ST8(v0, 0);
    ST8(v0+1, 0);
    ST8(v0+2, 0);
    ST8(v0+3, 0);
    ST8(v0+4, 0);
    ST8(v0+5, 0);
    ST8(v0+6, 0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910520; }
    goto L_08910504;
L_08910504:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910538; }
    goto L_0891051C;
L_0891051C:;
    goto L_08910520;
L_08910520:;
    sp = sp + 32;
    return;
L_08910538:;
    v0 = func_088F8C18();
    goto L_08910540;
L_08910540:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891054C;
L_0891054C:;
    goto L_08910520;
}

/* 08910554 */
float func_08910554(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910554:;
    sp = sp - 16;
    v0 = (u32)-1;
    f0 = BITSF(0);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0891059C; }
    goto L_08910568;
L_08910568:;
    v0 = func_08910E88(a0);
    goto L_08910570;
L_08910570:;
    v1 = v0 << 2;
    v1 = v1 + v0;
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    v1 = v1 << 3;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+24));
    v0 = D_08AED250 - (-11696);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-11696));
    f0 = f1 * f0;
    goto L_0891059C;
L_0891059C:;
    sp = sp + 16;
    return f0;
}

/* 089105A8 */
float func_089105A8(void)
{
    float f0 = 0;
L_089105A8:;
    f0 = BITSF(0);
    return f0;
}

/* 089105B4 */
u32 func_089105B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089105B4:;
    sp = sp - 96;
    s6 = D_08BD7F2C - (32556);
    fp = a0 + 0;
    s7 = a1 + 0;
    s2 = t1 + 0;
    s1 = s6 + 32556;
    ST32(sp+32, a2);
    ST32(sp+36, a3);
    ST32(sp+40, t0);
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910604;
L_08910604:;
    s0 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v0 == s0;
    ST32(sp+44, 0);
    if (cnd_) { goto L_08910620; }
    goto L_08910614;
L_08910614:;
    a0 = s1 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891061C;
L_0891061C:;
    ST32(s1+4, s0);
    goto L_08910620;
L_08910620:;
    v0 = LD32(s1+8);
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = (u32)-1;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08910920; }
    goto L_08910638;
L_08910638:;
    cnd_ = (s32)s2 < 0;
    s4 = s2 << 2;
    if (cnd_) { goto L_089108D4; }
    goto L_08910640;
L_08910640:;
    s5 = D_08BD7EDC - (32476);
    v0 = s4 + s2;
    v0 = v0 << 3;
    v1 = s5 + 32476;
    a1 = v0 + v1;
    a0 = LD32(a1+20);
    cnd_ = (s32)a0 < 0;
    v0 = D_08BD8178 - (-32392);
    if (cnd_) { goto L_089108B8; }
    goto L_08910660;
L_08910660:;
    v0 = LD_U8(a1+6);
    cnd_ = v0 != 0;
    v0 = s4 + s2;
    if (cnd_) { goto L_089106D8; }
    goto L_0891066C;
L_0891066C:;
    s0 = s6 + 32556;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08910698; }
    goto L_0891067C;
L_0891067C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0891089C; }
    goto L_08910694;
L_08910694:;
    a0 = s2 + 0;
    goto L_08910698;
L_08910698:;
    a1 = 0 + 0;
    s0 = s6 + 32556;
    { u64 r_ = func_08910CC0(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089106A4;
L_089106A4:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089106AC;
L_089106AC:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089106C8; }
    goto L_089106BC;
L_089106BC:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089106C4;
L_089106C4:;
    ST32(s0+4, s1);
    goto L_089106C8;
L_089106C8:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s4 + s2;
    goto L_089106D8;
L_089106D8:;
    v0 = v0 << 3;
    v1 = s5 + 32476;
    v0 = v0 + v1;
    a0 = LD32(v0+20);
    cnd_ = (s32)a0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08910704; }
    goto L_089106F0;
L_089106F0:;
    func_088F8B84(a1, 0, 0, 0, 0, 0, 0);
    goto L_089106F8;
L_089106F8:;
    v0 = LD32(s0+20);
    cnd_ = (s32)v0 >= 0;
    if (cnd_) { goto L_089106F0; }
    goto L_08910704;
L_08910704:;
    a0 = s7 + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_0891070C;
L_0891070C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v1 = s2 << 4;
    if (cnd_) { goto L_08910790; }
    goto L_08910718;
L_08910718:;
    s0 = s6 + 32556;
    goto L_0891071C;
L_0891071C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08910744; }
    goto L_08910728;
L_08910728:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910774; }
    goto L_08910740;
L_08910740:;
    v0 = LD32(sp+44);
    goto L_08910744;
L_08910744:;
    sp = sp + 96;
    return v0;
L_08910774:;
    v0 = func_088F8C18();
    goto L_0891077C;
L_0891077C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910788;
L_08910788:;
    v0 = LD32(sp+44);
    goto L_08910744;
L_08910790:;
    v1 = v1 + s2;
    v0 = D_08BD7F50 - (32592);
    v1 = v1 << 4;
    v0 = v0 + 32592;
    a0 = s4 + s2;
    s3 = v1 + v0;
    a0 = a0 << 3;
    v0 = s5 + 32476;
    s0 = a0 + v0;
    v0 = LD32(sp+40);
    ST8(s0, 0);
    a1 = D_08AD952C - (-27348);
    a1 = a1 - 27348;
    ST8(s0+1, 0);
    t0 = s7 + 0;
    a0 = s3 + 0;
    ST8(s0+2, 0);
    a2 = 260;
    a3 = 1;
    ST8(s0+3, 0);
    ST8(s0+4, 0);
    ST8(s0+5, 0);
    ST8(s0+6, 0);
    ST32(s0+28, 0);
    ST32(s0+32, fp);
    ST32(s0+36, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089107FC;
L_089107FC:;
    v0 = LD32(sp+32);
    ST32(s3+268, s2);
    a1 = D_08AD9550 - (-27312);
    a1 = a1 - 27312;
    ST32(s3+260, v0);
    t0 = s2 + 0;
    a0 = sp + 0;
    v0 = LD32(sp+36);
    a2 = 32;
    a3 = 0 + 0;
    ST32(s3+264, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0891082C;
L_0891082C:;
    a1 = ((u32)(uintptr_t)func_0890FE18) - (-488);
    a1 = a1 - 488;
    a0 = sp + 0;
    a2 = 22;
    a3 = 0x8000;
    t0 = 16384;
    t1 = 0 + 0;
    v0 = sceKernelCreateThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0891084C;
L_0891084C:;
    cnd_ = (s32)v0 < 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08910718; }
    goto L_08910854;
L_08910854:;
    a2 = s3 + 0;
    a0 = v0 + 0;
    a1 = 544;
    v0 = sceKernelStartThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910864;
L_08910864:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s6 + 32556; goto L_0891071C; }
    goto L_0891086C;
L_0891086C:;
    v1 = D_08BD8178 - (-32392);
    v1 = v1 - 32392;
    v0 = 1;
    v1 = s4 + v1;
    a0 = 1;
    ST8(s0+1, v0);
    ST32(sp+44, a0);
    ST8(s0+2, v0);
    ST8(s0+4, v0);
    ST32(v1, s1);
    s0 = s6 + 32556;
    goto L_0891071C;
L_0891089C:;
    v0 = func_088F8C18();
    goto L_089108A4;
L_089108A4:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089108B0;
L_089108B0:;
    a0 = s2 + 0;
    goto L_08910698;
L_089108B8:;
    v0 = v0 - 32392;
    v0 = s4 + v0;
    v1 = LD32(v0);
    cnd_ = (s32)v1 >= 0;
    if (cnd_) { goto L_08910660; }
    goto L_089108CC;
L_089108CC:;
    goto L_08910704;
L_089108D4:;
    s0 = s6 + 32556;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08910744; }
    goto L_089108E4;
L_089108E4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910904; }
    goto L_089108FC;
L_089108FC:;
    v0 = 0 + 0;
    goto L_08910744;
L_08910904:;
    v0 = func_088F8C18();
    goto L_0891090C;
L_0891090C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910918;
L_08910918:;
    v0 = 0 + 0;
    goto L_08910744;
L_08910920:;
    a0 = fp + 0;
    v0 = func_08910EBC(a0);
    goto L_08910928;
L_08910928:;
    s2 = v0 + 0;
    goto L_08910638;
}

/* 08910930 */
void func_08910930(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910930:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08910950; }
    goto L_08910940;
L_08910940:;
    v0 = func_08910E88(a0);
    goto L_08910948;
L_08910948:;
    a0 = v0 + 0;
    { u64 r_ = func_0891095C(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910950;
L_08910950:;
    sp = sp + 16;
    return;
}

/* 0891095C */
u64 func_0891095C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0891095C:;
    sp = sp - 32;
    s4 = D_08BD7F2C - (32556);
    s3 = (u32)-1;
    s2 = a0 + 0;
    s0 = s4 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891098C;
L_0891098C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089109A8; }
    goto L_0891099C;
L_0891099C:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089109A4;
L_089109A4:;
    ST32(s0+4, s1);
    goto L_089109A8;
L_089109A8:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    cnd_ = (s32)s2 < 0;
    s0 = s4 + 32556;
    if (cnd_) { goto L_08910A7C; }
    goto L_089109BC;
L_089109BC:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089109C4;
L_089109C4:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089109E0; }
    goto L_089109D4;
L_089109D4:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089109DC;
L_089109DC:;
    ST32(s0+4, s1);
    goto L_089109E0;
L_089109E0:;
    v0 = LD32(s0+8);
    s1 = s2 << 2;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8178 - (-32392);
    v0 = v0 - 32392;
    v0 = s1 + v0;
    s0 = s4 + 32556;
    s3 = LD32(v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    v0 = s1 + s2;
    if (cnd_) { goto L_08910A2C; }
    goto L_08910A10;
L_08910A10:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910BC8; }
    goto L_08910A28;
L_08910A28:;
    v0 = s1 + s2;
    goto L_08910A2C;
L_08910A2C:;
    v1 = D_08BD7EDC - (32476);
    v0 = v0 << 3;
    v1 = v1 + 32476;
    v1 = v0 + v1;
    a0 = LD_U8(v1+6);
    cnd_ = a0 != 0;
    s0 = s4 + 32556;
    if (cnd_) { goto L_08910A7C; }
    goto L_08910A48;
L_08910A48:;
    v0 = D_08BD7F38 - (32568);
    v0 = v0 + 32568;
    v0 = s1 + v0;
    a1 = 1;
    ST8(v1+6, a1);
    a0 = LD32(v0);
    ST8(v1, 0);
    ST8(v1+3, 0);
    ST8(v1+1, a1);
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08910BB8; }
    goto L_08910A78;
L_08910A78:;
    s0 = s4 + 32556;
    goto L_08910A7C;
L_08910A7C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08910AA0; }
    goto L_08910A88;
L_08910A88:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910B9C; }
    goto L_08910AA0;
L_08910AA0:;
    cnd_ = (s32)s3 < 0;
    if (cnd_) { goto L_08910AE8; }
    goto L_08910AA8;
L_08910AA8:;
    a0 = 20000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910AB0;
L_08910AB0:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    v0 = sceKernelWaitThreadEndCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910ABC;
L_08910ABC:;
    a0 = s3 + 0;
    v0 = sceKernelDeleteThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910AC4;
L_08910AC4:;
    cnd_ = (s32)s2 < 0;
    v0 = s2 << 2;
    if (cnd_) { goto L_08910B60; }
    goto L_08910ACC;
L_08910ACC:;
    v0 = v0 + s2;
    v1 = D_08BD7EDC - (32476);
    v0 = v0 << 3;
    v1 = v1 + 32476;
    v0 = v0 + v1;
    a0 = (u32)-1;
    ST32(v0+32, a0);
    goto L_08910AE8;
L_08910AE8:;
    cnd_ = (s32)s2 < 0;
    if (cnd_) { goto L_08910B64; }
    goto L_08910AF0;
L_08910AF0:;
    s0 = s4 + 32556;
    { u64 r_ = func_088F8BFC(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910AF8;
L_08910AF8:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08910B14; }
    goto L_08910B08;
L_08910B08:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910B10;
L_08910B10:;
    ST32(s0+4, s1);
    goto L_08910B14;
L_08910B14:;
    v0 = LD32(s0+8);
    a0 = s2 << 2;
    v1 = (u32)-1;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8178 - (-32392);
    v0 = v0 - 32392;
    a0 = a0 + v0;
    ST32(a0, v1);
    s0 = s4 + 32556;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08910B64; }
    goto L_08910B48;
L_08910B48:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08910B80; }
    goto L_08910B60;
L_08910B60:;
    goto L_08910B64;
L_08910B64:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08910B80:;
    v0 = func_088F8C18();
    goto L_08910B88;
L_08910B88:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910B94;
L_08910B94:;
    goto L_08910B64;
L_08910B9C:;
    v0 = func_088F8C18();
    goto L_08910BA4;
L_08910BA4:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910BB0;
L_08910BB0:;
    goto L_08910AA0;
L_08910BB8:;
    ST8(a0+4, a1);
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910BC0;
L_08910BC0:;
    s0 = s4 + 32556;
    goto L_08910A7C;
L_08910BC8:;
    v0 = func_088F8C18();
    goto L_08910BD0;
L_08910BD0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910BDC;
L_08910BDC:;
    v0 = s1 + s2;
    goto L_08910A2C;
}

/* 08910BE4 */
void func_08910BE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910BE4:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a1 & 0xff;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08910C28; }
    goto L_08910BFC;
L_08910BFC:;
    v0 = func_08910E88(a0);
    goto L_08910C04;
L_08910C04:;
    a0 = v0 << 2;
    a0 = a0 + v0;
    v1 = D_08BD7EDC - (32476);
    a0 = a0 << 3;
    v1 = v1 + 32476;
    cnd_ = (s32)v0 < 0;
    a0 = a0 + v1;
    if (cnd_) { goto L_08910C28; }
    goto L_08910C20;
L_08910C20:;
    ST8(a0+1, 0);
    ST8(a0+3, s0);
    goto L_08910C28;
L_08910C28:;
    sp = sp + 16;
    return;
}

/* 08910C38 */
void func_08910C38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910C38:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a1 & 0xff;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08910C74; }
    goto L_08910C50;
L_08910C50:;
    v0 = func_08910E88(a0);
    goto L_08910C58;
L_08910C58:;
    v1 = v0 << 2;
    v1 = v1 + v0;
    v0 = D_08BD7EDC - (32476);
    v1 = v1 << 3;
    v0 = v0 + 32476;
    v1 = v1 + v0;
    ST8(v1+1, s0);
    goto L_08910C74;
L_08910C74:;
    sp = sp + 16;
    return;
}

/* 08910C84 */
u64 func_08910C84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910C84:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a1 & 0xff;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08910CB0; }
    goto L_08910C9C;
L_08910C9C:;
    v0 = func_08910E88(a0);
    goto L_08910CA4;
L_08910CA4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08910CC0(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910CB0;
L_08910CB0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08910CC0 */
u64 func_08910CC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910CC0:;
    v1 = a0 << 2;
    v1 = v1 + a0;
    v0 = D_08BD7EDC - (32476);
    sp = sp - 16;
    v1 = v1 << 3;
    v0 = v0 + 32476;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08910CFC; }
    goto L_08910CE8;
L_08910CE8:;
    v0 = 1;
    ST8(v1+5, v0);
    goto L_08910CF4;
L_08910CF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08910CFC:;
    { u64 r_ = func_0891095C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910D04;
L_08910D04:;
    goto L_08910CF4;
}

/* 08910D0C */
u32 func_08910D0C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910D0C:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08910D50; }
    goto L_08910D20;
L_08910D20:;
    v0 = func_08910E88(a0);
    goto L_08910D28;
L_08910D28:;
    a0 = v0 << 2;
    a0 = a0 + v0;
    v1 = D_08BD7EDC - (32476);
    a0 = a0 << 3;
    v1 = v1 + 32476;
    a0 = a0 + v1;
    cnd_ = (s32)v0 < 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08910D50; }
    goto L_08910D48;
L_08910D48:;
    v0 = LD_U8(a0+2);
    a1 = v0 & 0xff;
    goto L_08910D50;
L_08910D50:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08910D60 */
void func_08910D60(u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910D60:;
    a1 = 1;
    v1 = D_08BD8180 - (-32384);
    a2 = D_08BD7F38 - (32568);
    ST8(v1-32384, a1);
    v1 = D_08BD7F48 - (32584);
    a3 = a2 + 32568;
    v1 = v1 + 32584;
    ST32(a3+4, v1);
    v0 = D_08BD7F40 - (32576);
    sp = sp - 16;
    v0 = v0 + 32576;
    a0 = 0 + 0;
    ST32(a2+32568, v0);
    func_0890FF58(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910D9C;
L_08910D9C:;
    a0 = 1;
    func_0890FF58(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08910DA4;
L_08910DA4:;
    sp = sp + 16;
    return;
}

/* 08910DB0 */
void func_08910DB0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910DB0:;
    sp = sp - 16;
    a0 = 0 + 0;
    func_08910228(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910DC0;
L_08910DC0:;
    a0 = 1;
    func_08910228(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08910DC8;
L_08910DC8:;
    sp = sp + 16;
    return;
}

/* 08910DD4 */
void func_08910DD4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910DD4:;
    sp = sp - 16;
    a0 = 0 + 0;
    func_0891032C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910DE4;
L_08910DE4:;
    a0 = 1;
    func_0891032C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08910DEC;
L_08910DEC:;
    sp = sp + 16;
    return;
}

/* 08910DF8 */
void func_08910DF8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08910DF8:;
    sp = sp - 16;
    a0 = 0 + 0;
    func_08910444(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08910E08;
L_08910E08:;
    a0 = 1;
    func_08910444(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08910E10;
L_08910E10:;
    sp = sp + 16;
    return;
}

/* 08910E1C */
u64 func_08910E1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08910E1C:;
    sp = sp - 32;
    v0 = D_08BD7EDC - (32476);
    s3 = (u32)-1;
    s2 = a0 & 0xff;
    s1 = v0 + 32476;
    s0 = 1;
    goto L_08910E48;
L_08910E48:;
    v0 = LD32(s1+32);
    s0 = s0 - 1;
    s1 = s1 + 40;
    a0 = v0 + 0;
    cnd_ = v0 == s3;
    a1 = s2 + 0;
    if (cnd_) { goto L_08910E68; }
    goto L_08910E60;
L_08910E60:;
    { u64 r_ = func_08910C84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08910E68;
L_08910E68:;
    cnd_ = (s32)s0 >= 0;
    if (cnd_) { goto L_08910E48; }
    goto L_08910E70;
L_08910E70:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08910E88 */
u32 func_08910E88(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08910E88:;
    v0 = D_08BD7EDC - (32476);
    a2 = v0 + 32476;
    a1 = 0 + 0;
    goto L_08910E94;
L_08910E94:;
    v0 = LD32(a2+32);
    a3 = a1 + 0;
    a1 = a1 + 1;
    a2 = a2 + 40;
    cnd_ = v0 == a0;
    v1 = (s32)a1 < 2;
    if (cnd_) { goto L_08910EB4; }
    goto L_08910EAC;
L_08910EAC:;
    cnd_ = v1 != 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08910E94; }
    goto L_08910EB4;
L_08910EB4:;
    v0 = a3 + 0;
    return v0;
}

/* 08910EBC */
u32 func_08910EBC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08910EBC:;
    v0 = D_08BD7EDC - (32476);
    a2 = v0 + 32476;
    a3 = (u32)-1;
    a1 = 0 + 0;
    t0 = (u32)-1;
    goto L_08910ED0;
L_08910ED0:;
    v0 = LD32(a2+32);
    cnd_ = v0 == a0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08910EF8; }
    goto L_08910EDC;
L_08910EDC:;
    cnd_ = a3 == t0;
    if (cnd_) { goto L_08910F00; }
    goto L_08910EE4;
L_08910EE4:;
    a1 = a1 + 1;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    a2 = a2 + 40;
    if (cnd_) { goto L_08910ED0; }
    goto L_08910EF4;
L_08910EF4:;
    v1 = a3 + 0;
    goto L_08910EF8;
L_08910EF8:;
    v0 = v1 + 0;
    return v0;
L_08910F00:;
    v0 = LD32(a2+32);
    v0 = v0 ^ a3;
    if (v0 == 0) a3 = a1;
    goto L_08910EE4;
}

/* 08910F10 */
u64 func_08910F10(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08910F10:;
    sp = sp - 32;
    f20 = f12;
    v0 = func_08910E88(a0);
    goto L_08910F24;
L_08910F24:;
    v1 = v0 << 2;
    v1 = v1 + v0;
    v0 = D_08BD7EDC - (32476);
    v0 = v0 + 32476;
    v1 = v1 << 3;
    v1 = v1 + v0;
    ST32(v1+12, FBITS(f20));
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08910F50 */
u64 func_08910F50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08910F50:;
    sp = sp - 48;
    v1 = a1 + 0;
    s1 = a0 + 0;
    v1 = v1 ^ 0xffff;
    v0 = s1 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = v1 < 0x1u;
    a0 = D_08AD9564 - (-27292);
    s4 = D_08BD7F48 - (32584);
    v0 = s0 & v0;
    s3 = D_08BD7F40 - (32576);
    s2 = D_08BD7F2C - (32556);
    t0 = 0 + 0;
    a2 = 1;
    a3 = 1;
    a1 = 0 + 0;
    a0 = a0 - 27292;
    s6 = s3 + 32576;
    s5 = s2 + 32556;
    cnd_ = v0 != 0;
    s7 = s4 + 32584;
    if (cnd_) { goto L_0891102C; }
    goto L_08910FC8;
L_08910FC8:;
    v0 = s1 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    v0 = D_08BD7F48 - (32584);
    if (cnd_) { goto L_08911004; }
    goto L_08910FD8;
L_08910FD8:;
    goto L_08910FDC;
L_08910FDC:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08911004:;
    a0 = LD32(v0+32584);
    v0 = sceKernelDeleteEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0891100C;
L_0891100C:;
    v1 = D_08BD7F40 - (32576);
    a0 = LD32(v1+32576);
    v0 = sceKernelDeleteEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08911018;
L_08911018:;
    v1 = D_08BD7F2C - (32556);
    a0 = LD32(v1+32556);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08911024;
L_08911024:;
    goto L_08910FDC;
L_0891102C:;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08911034;
L_08911034:;
    ST32(s2+32556, v0);
    ST32(s5+8, 0);
    v0 = func_088F8C18();
    goto L_08911040;
L_08911040:;
    a0 = D_08AD9570 - (-27280);
    a0 = a0 - 27280;
    a1 = 512;
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(s5+4, v0);
    v0 = sceKernelCreateEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0891105C;
L_0891105C:;
    a0 = D_08AD9588 - (-27256);
    a0 = a0 - 27256;
    a1 = 512;
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(s3+32576, v0);
    ST8(s6+4, 0);
    v0 = sceKernelCreateEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0891107C;
L_0891107C:;
    ST32(s4+32584, v0);
    ST8(s7+4, 0);
    goto L_08910FC8;
}

/* 08911088 */
rv_t func_08911088(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08911088:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08910F50(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0891109C;
L_0891109C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089110A8 */
rv_t func_089110A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089110A8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08910F50(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089110BC;
L_089110BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089110C8 */
void func_089110C8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089110C8:;
    sp = sp - 32;
    a0 = 256;
    v0 = func_08A96AC8(a0, t1, t2, t3);
    goto L_089110E8;
L_089110E8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08911108; }
    goto L_089110F0;
L_089110F0:;
    sp = sp + 32;
    return;
L_08911108:;
    a0 = 1;
    a1 = 0 + 0;
    func_08A96E50(a0, a1, 0, 0, 0, 0);
    goto L_08911114;
L_08911114:;
    v1 = D_08BD8184 - (-32380);
    s0 = v1 - 32380;
    s1 = 0 + 0;
    s3 = (u32)-1;
    s2 = 4096;
    goto L_08911128;
L_08911128:;
    a2 = 0x7fff0000u;
    a2 = a2 | 0xffff;
    a0 = s1 + 0;
    a1 = 15;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t1 = a2 + 0;
    s1 = s1 + 1;
    ST32(s0, s3);
    ST32(s0+4, s2);
    ST32(s0+16, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    func_08A96DA8(a0, a1, a2, a3, t0, t1);
    goto L_08911160;
L_08911160:;
    v1 = s1 < 0x10u;
    cnd_ = v1 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_08911128; }
    goto L_0891116C;
L_0891116C:;
    goto L_089110F0;
}

/* 08911174 */
void func_08911174(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08911174:;
    sp = sp - 16;
    s0 = D_08BD82D0 - (-32048);
    func_08A96EE4();
    goto L_08911188;
L_08911188:;
    a0 = LD32(s0-32048);
    { rv_t r_ = func_088F9A14(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08911190;
L_08911190:;
    ST32(s0-32048, 0);
    v0 = D_08BD82D4 - (-32044);
    ST32(v0-32044, 0);
    sp = sp + 16;
    return;
}

/* 089111AC */
void func_089111AC(void)
{
L_089111AC:;
    return;
}

/* 089111B4 */
u32 func_089111B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089111B4:;
    sp = sp - 32;
    s5 = D_08BD82C4 - (-32060);
    s0 = s5 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089111E0;
L_089111E0:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089111FC; }
    goto L_089111F0;
L_089111F0:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089111F8;
L_089111F8:;
    ST32(s0+4, s1);
    goto L_089111FC;
L_089111FC:;
    v0 = LD32(s0+8);
    s2 = 1;
    s1 = 0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s4 = 48;
    v0 = func_08A96E14(0, 0, 0, 0, 0, 0);
    goto L_08911218;
L_08911218:;
    s3 = v0 + 0;
    v0 = D_08BD8184 - (-32380);
    s0 = v0 - 32380;
    goto L_08911224;
L_08911224:;
    v0 = s3 & s2;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08911278; }
    goto L_08911230;
L_08911230:;
    v1 = LD32(s0+16);
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    v0 = v1 & 0x80;
    if (cnd_) { goto L_08911254; }
    goto L_08911240;
L_08911240:;
    v0 = v1 + 0;
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s0+16, v0);
    v1 = v0 + 0;
    v0 = v1 & 0x80;
    goto L_08911254;
L_08911254:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2); goto L_08911270; }
    goto L_0891125C;
L_0891125C:;
    v0 = v1 + 0;
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+16, v0);
    v1 = v0 + 0;
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    goto L_08911270;
L_08911270:;
    ST32(s0+16, v1);
    a0 = s1 + 0;
    goto L_08911278;
L_08911278:;
    a1 = s0 + 0;
    func_08912224(a0, a1, 0, 0, 0);
    goto L_08911280;
L_08911280:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08912248(a0, a1);
    goto L_0891128C;
L_0891128C:;
    v1 = LD32(s0+16);
    v0 = v1 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = (v1 & ~(0x1u << 5)) | ((0 & 0x1) << 5); goto L_089113C8; }
    goto L_0891129C;
L_0891129C:;
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089113AC; }
    goto L_089112A8;
L_089112A8:;
    v0 = v1 & 0x30;
    cnd_ = v0 == s4;
    if (cnd_) { v1 = (v1 & ~(0x1u << 6)) | ((0 & 0x1) << 6); goto L_08911384; }
    goto L_089112B4;
L_089112B4:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08911368; }
    goto L_089112C0;
L_089112C0:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0891134C; }
    goto L_089112CC;
L_089112CC:;
    s1 = s1 + 1;
    v0 = s1 < 0x10u;
    s0 = s0 + 20;
    cnd_ = v0 != 0;
    s2 = s2 << 1;
    if (cnd_) { goto L_08911224; }
    goto L_089112E0;
L_089112E0:;
    s0 = s5 - 32060;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0891130C; }
    goto L_089112F0;
L_089112F0:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911330; }
    goto L_08911308;
L_08911308:;
    goto L_0891130C;
L_0891130C:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_08911330:;
    v0 = func_088F8C18();
    goto L_08911338;
L_08911338:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911344;
L_08911344:;
    goto L_0891130C;
L_0891134C:;
    a1 = s0 + 0;
    v0 = func_08912350(a0, 0, 0, 0, 0, 0);
    goto L_08911354;
L_08911354:;
    v1 = LD32(s0+16);
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+16, v1);
    goto L_089112CC;
L_08911368:;
    a1 = s0 + 0;
    v0 = func_089122DC(a0, a1);
    goto L_08911370;
L_08911370:;
    v1 = LD32(s0+16);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+16, v1);
    goto L_089112C0;
L_08911384:;
    ST32(s0+16, v1);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08912424(a0, 0, 0);
    goto L_08911394;
L_08911394:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    v1 = LD32(s0+16);
    v1 = (v1 & ~(0x1u << 5)) | ((v0 & 0x1) << 5);
    ST32(s0+16, v1);
    goto L_089112B4;
L_089113AC:;
    a1 = s0 + 0;
    v0 = func_089123D0(a0, 0, 0, 0, 0, 0);
    goto L_089113B4;
L_089113B4:;
    v1 = LD32(s0+16);
    v1 = (v1 & ~(0x1u << 7)) | ((v0 & 0x1) << 7);
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s0+16, v1);
    goto L_089112A8;
L_089113C8:;
    ST32(s0+16, v1);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08912448(a0, 0, 0);
    goto L_089113D8;
L_089113D8:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    v1 = LD32(s0+16);
    v1 = (v1 & ~(0x1u << 6)) | ((v0 & 0x1) << 6);
    ST32(s0+16, v1);
    goto L_0891129C;
}

/* 089113F0 */
u32 func_089113F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089113F0:;
    sp = sp - 96;
    s4 = D_08BD82C4 - (-32060);
    s5 = a2 + 0;
    s3 = a0 + 0;
    s1 = a1 + 0;
    s0 = s4 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911428;
L_08911428:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08911444; }
    goto L_08911438;
L_08911438:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911440;
L_08911440:;
    ST32(s0+4, s2);
    goto L_08911444;
L_08911444:;
    v0 = LD32(s0+8);
    s1 = s1 - 48;
    a0 = 16;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s4 = s4 - 32060;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911460;
L_08911460:;
    a0 = sp + 48;
    a1 = s1 + 0;
    a2 = 1;
    a3 = 64;
    ST32(sp+48, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_08911478;
L_08911478:;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = 48;
    a3 = 0 + 0;
    s2 = LD32(sp+48);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911490;
L_08911490:;
    a2 = LD32(sp+16);
    a0 = s3 + 0;
    a1 = s2 + 0;
    v1 = a2 & 0xff00;
    v1 = v1 << 8;
    s0 = a2 << 24;
    v0 = a2 >> 8;
    s0 = s0 + v1;
    v0 = v0 & 0xff00;
    s0 = s0 + v0;
    a2 = a2 >> 24;
    s0 = s0 + a2;
    a3 = 0 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089114CC;
L_089114CC:;
    f1 = BITSF(s0);
    v1 = s0 >> 1;
    v0 = s0 & 0x1;
    v0 = v0 | v1;
    a0 = s5 + 0;
    a1 = s2 + 0;
    a3 = s1 + 0;
    a2 = 1;
    cnd_ = (s32)s0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0891157C; }
    goto L_089114F4;
L_089114F4:;
    v0 = D_08AED254 - (-11692);
    f12 = BITSF(LD32(v0-11692));
    f12 = f0 * f12;
    func_08913494(a0, a1, a2, a3, f12);
    goto L_08911504;
L_08911504:;
    v0 = sceKernelDcacheWritebackInvalidateAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0891150C;
L_0891150C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911514;
L_08911514:;
    v1 = LD32(s4+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0891153C; }
    goto L_08911520;
L_08911520:;
    v0 = LD32(s4+8);
    v0 = v0 - 1;
    ST32(s4+8, v0);
    v1 = LD32(s4+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911560; }
    goto L_08911538;
L_08911538:;
    goto L_0891153C;
L_0891153C:;
    v0 = 1;
    sp = sp + 96;
    return v0;
L_08911560:;
    v0 = func_088F8C18();
    goto L_08911568;
L_08911568:;
    ST32(s4+4, v0);
    a0 = s4 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911574;
L_08911574:;
    goto L_0891153C;
L_0891157C:;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_089114F4;
}

/* 0891158C */
u32 func_0891158C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0891158C:;
    sp = sp - 48;
    s4 = D_08BD82C4 - (-32060);
    s3 = 0 + 0;
    s2 = a0 + 0;
    s0 = s4 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089115BC;
L_089115BC:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_089115D8; }
    goto L_089115CC;
L_089115CC:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089115D4;
L_089115D4:;
    ST32(s0+4, s1);
    goto L_089115D8;
L_089115D8:;
    v0 = LD32(s0+8);
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = func_08913460(a0);
    goto L_089115EC;
L_089115EC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08911628; }
    goto L_089115F4;
L_089115F4:;
    a0 = 16;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089115FC;
L_089115FC:;
    a0 = s2 + 0;
    v0 = func_0891246C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08911604;
L_08911604:;
    v1 = LD32(s0+4);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08911690; }
    goto L_08911614;
L_08911614:;
    a0 = s2 + 0;
    goto L_08911618;
L_08911618:;
    s3 = 1;
    func_089134CC(a0);
    goto L_08911620;
L_08911620:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911628;
L_08911628:;
    s0 = s4 - 32060;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_08911654; }
    goto L_08911638;
L_08911638:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911674; }
    goto L_08911650;
L_08911650:;
    v0 = s3 + 0;
    goto L_08911654;
L_08911654:;
    sp = sp + 48;
    return v0;
L_08911674:;
    v0 = func_088F8C18();
    goto L_0891167C;
L_0891167C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911688;
L_08911688:;
    v0 = s3 + 0;
    goto L_08911654;
L_08911690:;
    a0 = sp + 0;
    ST32(sp, v0);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0891169C;
L_0891169C:;
    a0 = s2 + 0;
    goto L_08911618;
}

/* 089116A4 */
u32 func_089116A4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089116A4:;
    sp = sp - 64;
    v0 = D_08B1B458 - (-19368);
    s3 = a2 + 0;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = D_08BD82D0 - (-32048);
    s1 = LD_U8(v0-19368);
    cnd_ = s1 == 0;
    ST8(v0-19368, 0);
    if (cnd_) { goto L_08911710; }
    goto L_089116E0;
L_089116E0:;
    v0 = 0x230000u;
    v0 = v0 | 0x5c56;
    v1 = v0 + 0;
    v0 = s0 < v0;
    if (v0 == 0) v1 = s0;
    a1 = v1 + 0;
    v0 = D_08BD82D4 - (-32044);
    a0 = 64;
    ST32(v0-32044, v1);
    { rv_t r_ = func_088F9AB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08911708;
L_08911708:;
    a1 = D_08BD82D0 - (-32048);
    ST32(a1-32048, v0);
    goto L_08911710;
L_08911710:;
    a1 = LD32(a1-32048);
    cnd_ = a1 != 0;
    v0 = D_08BD82D4 - (-32044);
    if (cnd_) { goto L_08911748; }
    goto L_0891171C;
L_0891171C:;
    v1 = 0 + 0;
    ST32(v0-32044, 0);
    goto L_08911724;
L_08911724:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08911748:;
    a2 = s0 + 0;
    a0 = s2 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911758;
L_08911758:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08911724; }
    goto L_08911760;
L_08911760:;
    cnd_ = s1 == 0;
    v0 = D_08BD82D0 - (-32048);
    if (cnd_) { goto L_089117F8; }
    goto L_08911768;
L_08911768:;
    s0 = LD32(v0-32048);
    cnd_ = s3 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089117F8; }
    goto L_08911774;
L_08911774:;
    v0 = D_08AED258 - (-11688);
    f20 = BITSF(LD32(v0-11688));
    goto L_0891177C;
L_0891177C:;
    a1 = sp + 0;
    a2 = 12;
    a3 = 0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911790;
L_08911790:;
    s1 = s1 + 1;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08911724; }
    goto L_089117A0;
L_089117A0:;
    a0 = LD32(sp);
    v0 = func_088DAB48(a0, a1, 0, 0, 0);
    goto L_089117A8;
L_089117A8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = (s32)v0 < 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089117E0; }
    goto L_089117B8;
L_089117B8:;
    v0 = LD32(sp+4);
    a3 = LD32(sp+8);
    f0 = BITSF(v0);
    v1 = v0 >> 1;
    t0 = v0 & 0x1;
    t0 = t0 | v1;
    cnd_ = (s32)v0 < 0;
    f12 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08911808; }
    goto L_089117D8;
L_089117D8:;
    f12 = f12 * f20;
    func_08913494(a0, a1, a2, a3, f12);
    goto L_089117E0;
L_089117E0:;
    v0 = LD32(sp+8);
    v1 = s1 < s3;
    v0 = v0 + 63;
    v0 = (v0 & ~(0x3fu << 0)) | ((0 & 0x3f) << 0);
    cnd_ = v1 != 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_0891177C; }
    goto L_089117F8;
L_089117F8:;
    v0 = sceKernelDcacheWritebackInvalidateAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08911800;
L_08911800:;
    v1 = 1;
    goto L_08911724;
L_08911808:;
    f0 = BITSF(t0);
    f12 = (float)(s32)FBITS(f0);
    f12 = f12 + f12;
    goto L_089117D8;
}

/* 08911818 */
u32 func_08911818(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911818:;
    sp = sp - 32;
    s3 = D_08BD82C4 - (-32060);
    s5 = 0 + 0;
    s4 = a1 + 0;
    s2 = a0 + 0;
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911850;
L_08911850:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0891186C; }
    goto L_08911860;
L_08911860:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911868;
L_08911868:;
    ST32(s0+4, s1);
    goto L_0891186C;
L_0891186C:;
    v0 = LD32(s0+8);
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    cnd_ = (s32)s2 < 0;
    s0 = s3 - 32060;
    if (cnd_) { goto L_089118D8; }
    goto L_08911884;
L_08911884:;
    v0 = func_08913460(a0);
    goto L_0891188C;
L_0891188C:;
    cnd_ = v0 == 0;
    a0 = s4 << 2;
    if (cnd_) { goto L_089118D8; }
    goto L_08911894;
L_08911894:;
    f0 = BITSF(LD32(v0+8));
    a0 = a0 + s4;
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08BD8184 - (-32380);
    v0 = v0 - 32380;
    a0 = a0 << 2;
    v1 = FBITS(f0);
    a0 = a0 + v0;
    v0 = 16384;
    a1 = (s32)0 < (s32)v1;
    v0 = (s32)v0 < (s32)v1 ? v0 : v1;
    a2 = 1;
    if (a1 != 0) a2 = v0;
    v1 = a0 + 4;
    ST32(v1, a2);
    s5 = 1;
    ST32(a0, s2);
    goto L_089118D8;
L_089118D8:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08911900; }
    goto L_089118E4;
L_089118E4:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911924; }
    goto L_089118FC;
L_089118FC:;
    v0 = s5 + 0;
    goto L_08911900;
L_08911900:;
    sp = sp + 32;
    return v0;
L_08911924:;
    v0 = func_088F8C18();
    goto L_0891192C;
L_0891192C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911938;
L_08911938:;
    v0 = s5 + 0;
    goto L_08911900;
}

/* 08911940 */
u32 func_08911940(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911940:;
    sp = sp - 32;
    s4 = D_08BD82C4 - (-32060);
    s5 = 0 + 0;
    s3 = a1 & 0xff;
    s2 = a0 + 0;
    s0 = s4 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911978;
L_08911978:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08911994; }
    goto L_08911988;
L_08911988:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911990;
L_08911990:;
    ST32(s0+4, s1);
    goto L_08911994;
L_08911994:;
    v0 = LD32(s0+8);
    v1 = D_08BD8184 - (-32380);
    v1 = v1 - 32380;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 2;
    a1 = v0 + v1;
    a0 = LD32(a1);
    cnd_ = (s32)a0 < 0;
    if (cnd_) { s0 = s4 - 32060; goto L_08911A04; }
    goto L_089119C4;
L_089119C4:;
    v1 = LD32(a1+16);
    v0 = v1 & 0x13;
    cnd_ = v0 == 0;
    a0 = (v1 >> 2) & 0x1;
    if (cnd_) { goto L_089119E4; }
    goto L_089119D4;
L_089119D4:;
    v0 = v1 & 0x84;
    cnd_ = v0 == 0;
    s0 = s4 - 32060;
    if (cnd_) { goto L_08911A04; }
    goto L_089119E0;
L_089119E0:;
    a0 = (v1 >> 2) & 0x1;
    goto L_089119E4;
L_089119E4:;
    v0 = 1;
    v1 = v1 & 0x40;
    v0 = (v0 & ~(0x1u << 2)) | ((a0 & 0x1) << 2);
    v1 = v1 | v0;
    v1 = (v1 & ~(0x1u << 3)) | ((s3 & 0x1) << 3);
    ST32(a1+16, v1);
    s5 = 1;
    s0 = s4 - 32060;
    goto L_08911A04;
L_08911A04:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08911A2C; }
    goto L_08911A10;
L_08911A10:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911A50; }
    goto L_08911A28;
L_08911A28:;
    v0 = s5 + 0;
    goto L_08911A2C;
L_08911A2C:;
    sp = sp + 32;
    return v0;
L_08911A50:;
    v0 = func_088F8C18();
    goto L_08911A58;
L_08911A58:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911A64;
L_08911A64:;
    v0 = s5 + 0;
    goto L_08911A2C;
}

/* 08911A6C */
u32 func_08911A6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911A6C:;
    sp = sp - 32;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911A94;
L_08911A94:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08911AB0; }
    goto L_08911AA4;
L_08911AA4:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911AAC;
L_08911AAC:;
    ST32(s0+4, s1);
    goto L_08911AB0;
L_08911AB0:;
    v0 = LD32(s0+8);
    v1 = s2 << 2;
    v1 = v1 + s2;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = D_08BD8184 - (-32380);
    v0 = v0 - 32380;
    v1 = v1 << 2;
    v1 = v1 + v0;
    s0 = s3 - 32060;
    a0 = LD32(v1+16);
    v0 = LD32(s0+8);
    a0 = a0 & 0x13;
    cnd_ = v0 == 0;
    s1 = 0 < a0;
    if (cnd_) { goto L_08911B04; }
    goto L_08911AEC;
L_08911AEC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911B24; }
    goto L_08911B04;
L_08911B04:;
    v0 = s1 + 0;
    goto L_08911B08;
L_08911B08:;
    sp = sp + 32;
    return v0;
L_08911B24:;
    v0 = func_088F8C18();
    goto L_08911B2C;
L_08911B2C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911B38;
L_08911B38:;
    v0 = s1 + 0;
    goto L_08911B08;
}

/* 08911B40 */
u32 func_08911B40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911B40:;
    sp = sp - 32;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911B68;
L_08911B68:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08911B84; }
    goto L_08911B78;
L_08911B78:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911B80;
L_08911B80:;
    ST32(s0+4, s1);
    goto L_08911B84;
L_08911B84:;
    v0 = LD32(s0+8);
    v1 = D_08BD8184 - (-32380);
    v1 = v1 - 32380;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 2;
    a0 = v0 + v1;
    a1 = LD32(a0+16);
    v0 = a1 & 0x3;
    cnd_ = v0 == 0;
    v0 = a1 & 0x10;
    if (cnd_) { goto L_08911C20; }
    goto L_08911BB8;
L_08911BB8:;
    ST32(a0+16, 0);
    s0 = s3 - 32060;
    goto L_08911BC0;
L_08911BC0:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08911BE8; }
    goto L_08911BCC;
L_08911BCC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911C04; }
    goto L_08911BE4;
L_08911BE4:;
    goto L_08911BE8;
L_08911BE8:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_08911C04:;
    v0 = func_088F8C18();
    goto L_08911C0C;
L_08911C0C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911C18;
L_08911C18:;
    goto L_08911BE8;
L_08911C20:;
    cnd_ = v0 == 0;
    s0 = s3 - 32060;
    if (cnd_) { goto L_08911BC0; }
    goto L_08911C28;
L_08911C28:;
    v1 = a1 & 0x300;
    v1 = 0 < v1;
    v0 = a1 + 0;
    v0 = (v0 & ~(0x1u << 6)) | ((v1 & 0x1) << 6);
    v0 = v0 | 0x4;
    ST32(a0+16, v0);
    goto L_08911BC0;
}

/* 08911C44 */
u32 func_08911C44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911C44:;
    sp = sp - 32;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911C6C;
L_08911C6C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08911C88; }
    goto L_08911C7C;
L_08911C7C:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911C84;
L_08911C84:;
    ST32(s0+4, s1);
    goto L_08911C88;
L_08911C88:;
    v0 = LD32(s0+8);
    v1 = D_08BD8184 - (-32380);
    v1 = v1 - 32380;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 2;
    s0 = v0 + v1;
    a1 = LD32(s0+16);
    s1 = s3 - 32060;
    a1 = a1 & 0x13;
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08911D24; }
    goto L_08911CC0;
L_08911CC0:;
    v1 = LD32(s1+8);
    v0 = (u32)-1;
    cnd_ = v1 == 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08911CE8; }
    goto L_08911CD0;
L_08911CD0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    ST32(s1+8, v0);
    v1 = LD32(s1+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911D08; }
    goto L_08911CE8;
L_08911CE8:;
    goto L_08911CEC;
L_08911CEC:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_08911D08:;
    v0 = func_088F8C18();
    goto L_08911D10;
L_08911D10:;
    ST32(s1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911D1C;
L_08911D1C:;
    goto L_08911CEC;
L_08911D24:;
    v0 = func_08911B40(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08911D2C;
L_08911D2C:;
    goto L_08911CC0;
}

/* 08911D34 */
u32 func_08911D34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911D34:;
    sp = sp - 32;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911D5C;
L_08911D5C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08911D78; }
    goto L_08911D6C;
L_08911D6C:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911D74;
L_08911D74:;
    ST32(s0+4, s1);
    goto L_08911D78;
L_08911D78:;
    v0 = LD32(s0+8);
    v1 = D_08BD8184 - (-32380);
    v1 = v1 - 32380;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+16);
    s0 = s3 - 32060;
    v1 = a1 | 0x100;
    a1 = a1 & 0x100;
    cnd_ = a1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08911E14; }
    goto L_08911DB4;
L_08911DB4:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08911DDC; }
    goto L_08911DC0;
L_08911DC0:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911DF8; }
    goto L_08911DD8;
L_08911DD8:;
    goto L_08911DDC;
L_08911DDC:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_08911DF8:;
    v0 = func_088F8C18();
    goto L_08911E00;
L_08911E00:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911E0C;
L_08911E0C:;
    goto L_08911DDC;
L_08911E14:;
    ST32(v0+16, v1);
    func_089121A8(a0);
    goto L_08911E1C;
L_08911E1C:;
    goto L_08911DB4;
}

/* 08911E24 */
u32 func_08911E24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08911E24:;
    sp = sp - 32;
    s3 = D_08BD82C4 - (-32060);
    s2 = a0 + 0;
    s0 = s3 - 32060;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911E4C;
L_08911E4C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08911E68; }
    goto L_08911E5C;
L_08911E5C:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911E64;
L_08911E64:;
    ST32(s0+4, s1);
    goto L_08911E68;
L_08911E68:;
    v0 = LD32(s0+8);
    v1 = D_08BD8184 - (-32380);
    v1 = v1 - 32380;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 2;
    a1 = v0 + v1;
    v1 = LD32(a1+16);
    s0 = s3 - 32060;
    a0 = s2 + 0;
    v0 = v1 & 0x100;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    if (cnd_) { goto L_08911F04; }
    goto L_08911EA4;
L_08911EA4:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08911ECC; }
    goto L_08911EB0;
L_08911EB0:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08911EE8; }
    goto L_08911EC8;
L_08911EC8:;
    goto L_08911ECC;
L_08911ECC:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_08911EE8:;
    v0 = func_088F8C18();
    goto L_08911EF0;
L_08911EF0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08911EFC;
L_08911EFC:;
    goto L_08911ECC;
L_08911F04:;
    ST32(a1+16, v1);
    func_089121E4(a0);
    goto L_08911F0C;
L_08911F0C:;
    goto L_08911EA4;
}
