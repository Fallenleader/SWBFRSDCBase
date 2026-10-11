#include "game.h"

/* 088E1F58 */
float func_088E1F58(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1F58:;
    sp = sp - 16;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_088E1FA4; }
    goto L_088E1F64;
L_088E1F64:;
    v0 = 88;
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B30AF0 - (2800);
    a0 = LD32(v1+2800);
    v0 = lo;
    v0 = v0 + a0;
    a0 = LD32(v0+84);
    goto L_088E1F80;
L_088E1F80:;
    v0 = 0x248f0000u;
    v0 = v0 | 0xd6c2;
    if (a0 == 0) a0 = v0;
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1F90;
L_088E1F90:;
    a0 = v0 + 0;
    f0 = func_088E0858(a0);
    goto L_088E1F98;
L_088E1F98:;
    sp = sp + 16;
    return f0;
L_088E1FA4:;
    v0 = D_08B30AE8 - (2792);
    a0 = LD32(v0+2792);
    goto L_088E1F80;
}

/* 088E1FB0 */
u32 func_088E1FB0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1FB0:;
    sp = sp - 16;
    v0 = D_08AECCA4 - (-13148);
    s0 = a0 + 0;
    v1 = a1 + 0;
    a0 = a1 + 0;
    f0 = BITSF(LD32(v0-13148));
    v0 = D_08AECCA8 - (-13144);
    a1 = 0 + 0;
    ST32(s0+16, FBITS(f0));
    f0 = BITSF(LD32(v0-13144));
    ST32(s0, a2);
    ST32(s0+4, a3);
    cnd_ = v1 == 0;
    ST32(s0+20, FBITS(f0));
    if (cnd_) { goto L_088E2024; }
    goto L_088E1FF0;
L_088E1FF0:;
    v0 = func_088DC9D0(a0, a1);
    goto L_088E1FF8;
L_088E1FF8:;
    v1 = (u32)-1;
    ST32(s0+12, v0);
    a2 = 0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == v1;
    a1 = 1;
    if (cnd_) { goto L_088E2024; }
    goto L_088E2010;
L_088E2010:;
    func_088DCA88(a0, a1, a2);
    goto L_088E2018;
L_088E2018:;
    f12 = BITSF(LD32(s0+16));
    a0 = LD32(s0+12);
    { u64 r_ = func_088DCC54(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E2024;
L_088E2024:;
    sp = sp + 16;
    return v0;
}

/* 088E2034 */
void func_088E2034(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E2034:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E2064; }
    goto L_088E2058;
L_088E2058:;
    { rv_t r_ = func_088DCB5C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2060;
L_088E2060:;
    ST32(s0+12, s1);
    goto L_088E2064;
L_088E2064:;
    ST32(s0, s1);
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
}

/* 088E2080 */
void func_088E2080(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E2080:;
    sp = sp - 16;
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f12, f0, 2);
    cnd_ = fcc;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E20B4; }
    goto L_088E209C;
L_088E209C:;
    v1 = LD32(a0+12);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088E20B4; }
    goto L_088E20AC;
L_088E20AC:;
    ST32(a1+16, FBITS(f12));
    { u64 r_ = func_088DCC54(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E20B4;
L_088E20B4:;
    sp = sp + 16;
    return;
}

/* 088E20C0 */
rv_t func_088E20C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088E20C0:;
    a3 = D_08AECCAC - (-13140);
    f0 = BITSF(LD32(a0+80));
    f9 = BITSF(LD32(a3-13140));
    f8 = BITSF(LD32(a1+8));
    f7 = BITSF(LD32(a1));
    fcc = FCMP(f0, f9, 2);
    f6 = BITSF(LD32(a1+4));
    sp = sp - 80;
    a2 = a0 + 0;
    ST32(sp+8, FBITS(f8));
    ST32(sp, FBITS(f7));
    cnd_ = fcc;
    ST32(sp+4, FBITS(f6));
    if (cnd_) { goto L_088E2234; }
    goto L_088E20F4;
L_088E20F4:;
    v0 = a0 + 44;
    f2 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(a0+44));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+16));
    f5 = f5 + f1;
    f4 = f4 + f0;
    f3 = f3 + f2;
    v0 = D_08AECCB0 - (-13136);
    f0 = BITSF(LD32(v0-13136));
    v1 = LD32(a0+68);
    v0 = LD32(a0+72);
    f3 = f3 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    a0 = LD32(a0+76);
    f8 = f8 - f3;
    ST32(sp+48, v1);
    f7 = f7 - f5;
    f6 = f6 - f4;
    ST32(sp+52, v0);
    ST32(sp+56, a0);
    f1 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    ST32(sp+24, FBITS(f3));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(sp+32, FBITS(f7));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+36, FBITS(f6));
    ST32(sp+40, FBITS(f8));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f4));
    v0 = LD32(a2+80);
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f0));
    ST32(sp+60, v0);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[115]=BITSF(LD32(sp+(60)));}
    {v[116]=BITSF(LD32(sp+(32)));}
    {v[117]=BITSF(LD32(sp+(36)));}
    {v[118]=BITSF(LD32(sp+(40)));}
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
    f0 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+40));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+20));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(sp+64, FBITS(f2));
    f1 = f1 + f0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f1));
    goto L_088E2234;
L_088E2234:;
    f2 = BITSF(LD32(sp));
    f4 = BITSF(LD32(a2+20));
    fcc = FCMP(f4, f2, 14);
    cnd_ = !fcc;
    v0 = a2 + 20;
    if (cnd_) { goto L_088E22B8; }
    goto L_088E224C;
L_088E224C:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a2+44)); goto L_088E22BC; }
    goto L_088E2260;
L_088E2260:;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a2+44)); goto L_088E22BC; }
    goto L_088E2278;
L_088E2278:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a2+44)); goto L_088E22BC; }
    goto L_088E228C;
L_088E228C:;
    f3 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a2+44)); goto L_088E22BC; }
    goto L_088E22A4;
L_088E22A4:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    f1 = f9;
    if (cnd_) { goto L_088E2334; }
    goto L_088E22B8;
L_088E22B8:;
    f1 = BITSF(LD32(a2+44));
    goto L_088E22BC;
L_088E22BC:;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    v0 = a2 + 44;
    if (cnd_) { goto L_088E2330; }
    goto L_088E22CC;
L_088E22CC:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    f3 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_088E2330; }
    goto L_088E22E0;
L_088E22E0:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088E2330; }
    goto L_088E22F4;
L_088E22F4:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    f3 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_088E2330; }
    goto L_088E2308;
L_088E2308:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088E2330; }
    goto L_088E231C;
L_088E231C:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(a2+24)); goto L_088E2340; }
    goto L_088E2330;
L_088E2330:;
    f1 = BITSF(0);
    goto L_088E2334;
L_088E2334:;
    f0 = f1;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088E2340:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f3 = BITSF(LD32(a3-13140));
    if (cnd_) { goto L_088E23F4; }
    goto L_088E2350;
L_088E2350:;
    f1 = BITSF(LD32(a2+48));
    f0 = f1 - f0;
    goto L_088E2358;
L_088E2358:;
    f0 = f3 / f0;
    f1 = f1 - f2;
    f3 = f1 * f0;
    f2 = BITSF(LD32(sp+4));
    goto L_088E2368;
L_088E2368:;
    f1 = BITSF(LD32(a2+32));
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a2+28)); goto L_088E23DC; }
    goto L_088E237C;
L_088E237C:;
    f0 = BITSF(LD32(a2+56));
    goto L_088E2380;
L_088E2380:;
    f1 = f0 - f1;
    f0 = f0 - f2;
    f0 = f0 / f1;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp+8));
    goto L_088E2394;
L_088E2394:;
    f1 = BITSF(LD32(a2+40));
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a2+36)); goto L_088E23C4; }
    goto L_088E23A8;
L_088E23A8:;
    f0 = BITSF(LD32(a2+64));
    goto L_088E23AC;
L_088E23AC:;
    f1 = f0 - f1;
    f0 = f0 - f2;
    f0 = f0 / f1;
    f3 = f3 * f0;
    f1 = f3;
    goto L_088E2334;
L_088E23C4:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = f3; goto L_088E2334; }
    goto L_088E23D4;
L_088E23D4:;
    f0 = BITSF(LD32(a2+60));
    goto L_088E23AC;
L_088E23DC:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(sp+8)); goto L_088E2394; }
    goto L_088E23EC;
L_088E23EC:;
    f0 = BITSF(LD32(a2+52));
    goto L_088E2380;
L_088E23F4:;
    fcc = FCMP(f2, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(sp+4)); goto L_088E2368; }
    goto L_088E2404;
L_088E2404:;
    f0 = f1 - f4;
    goto L_088E2358;
}

/* 088E240C */
u64 func_088E240C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E240C:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s2 = D_08B30AD4 - (2772);
    s1 = a0 + 0;
    a0 = s2 + 2772;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E2490; }
    goto L_088E2444;
L_088E2444:;
    v0 = s1 < 0x1u;
    goto L_088E2448;
L_088E2448:;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    s1 = s2 + 2772;
    if (cnd_) { goto L_088E2468; }
    goto L_088E2454;
L_088E2454:;
    v0 = LD32(s2+2772);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E2480; }
    goto L_088E2460;
L_088E2460:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_088E2468;
L_088E2468:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088E2480:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E2488;
L_088E2488:;
    ST32(s2+2772, 0);
    goto L_088E2460;
L_088E2490:;
    func_08AB889C(a0);
    goto L_088E2498;
L_088E2498:;
    v0 = s1 < 0x1u;
    goto L_088E2448;
}

/* 088E24A0 */
rv_t func_088E24A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E24A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088E240C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E24B4;
L_088E24B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E24C0 */
rv_t func_088E24C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E24C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088E240C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E24D4;
L_088E24D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E24E0 */
void func_088E24E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E24E0:;
    sp = sp - 16;
    v0 = (u32)-1;
    ST8(a0+23, v0);
    a3 = D_08B30BB8 - (3000);
    ST8(a0+22, v0);
    v0 = D_08AF7D38 - (32056);
    v0 = v0 + 32056;
    s0 = a0 + 0;
    v1 = LD32(a3+3000);
    ST32(a0, v0);
    a2 = v1 + 0;
    ST16(a0+20, a1);
    a0 = D_08B30B5C - (2908);
    v1 = v1 + 1;
    ST32(s0+4, 0);
    a0 = a0 + 2908;
    a1 = s0 + 0;
    ST32(a3+3000, v1);
    func_088E8A34(a0, a1, a2, t1, t2, t3);
    goto L_088E2534;
L_088E2534:;
    a0 = (u32)-1;
    v0 = s0 + 68;
    v1 = 3;
    goto L_088E2540;
L_088E2540:;
    v1 = v1 - 1;
    ST32(v0, a0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_088E2540; }
    goto L_088E2550;
L_088E2550:;
    v0 = LD32(s0+132);
    v1 = s0 + 28;
    ST32(s0+124, 0);
    v0 = (v0 & ~(0x3u << 1)) | ((0 & 0x3) << 1);
    a1 = s0 + 8;
    ST32(s0+132, v0);
    a0 = s0 + 0;
    ST32(s0+128, 0);
    ST32(s0+120, 0);
    ST32(s0+116, 0);
    ST32(v1+4, 0);
    ST32(v1+20, 0);
    ST32(v1+16, 0);
    ST32(v1+12, 0);
    ST32(v1+8, 0);
    v0 = LD32(s0+132);
    ST32(s0+28, 0);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+132, v0);
    ST32(s0+52, 0);
    ST32(s0+8, 0);
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    func_088E292C(a0);
    goto L_088E25B0;
L_088E25B0:;
    v0 = D_08AECD2C - (-13012);
    f0 = BITSF(LD32(v0-13012));
    ST32(s0+64, FBITS(f0));
    ST32(s0+56, FBITS(f0));
    ST32(s0+60, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 088E25D4 */
u32 func_088E25D4(u32 a0)
{
    u32 v0 = 0;
L_088E25D4:;
    v0 = D_08AF7D38 - (32056);
    v0 = v0 + 32056;
    ST32(a0, v0);
    return v0;
}

/* 088E25E4 */
rv_t func_088E25E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088E25E4:;
    v0 = D_08AF7D38 - (32056);
    v0 = v0 + 32056;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088E25F4 */
rv_t func_088E25F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E25F4:;
    v0 = D_08AF7D38 - (32056);
    v0 = v0 + 32056;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E2610;
L_088E2610:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E261C */
rv_t func_088E261C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E261C:;
    sp = sp - 32;
    s4 = a1 + 0;
    a1 = 1;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088E2A30(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2654;
L_088E2654:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    cnd_ = v0 != 0;
    t0 = s3 + 0;
    if (cnd_) { goto L_088E268C; }
    goto L_088E266C;
L_088E266C:;
    goto L_088E2670;
L_088E2670:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088E268C:;
    { rv_t r_ = func_089173D4(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2694;
L_088E2694:;
    goto L_088E2670;
}

/* 088E269C */
float func_088E269C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088E269C:;
    sp = sp - 112;
    s4 = t0 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088E2748; }
    goto L_088E26E0;
L_088E26E0:;
    v1 = LD32(a3+228);
    a1 = sp + 16;
    s6 = 0 + 0;
    v0 = v1 & 0x2;
    s7 = 0 + 0;
    cnd_ = v0 != 0;
    fp = sp + 32;
    if (cnd_) { goto L_088E2790; }
    goto L_088E26FC;
L_088E26FC:;
    v0 = v1 & 0x800;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s5 = sp + 48;
    if (cnd_) { goto L_088E2778; }
    goto L_088E270C;
L_088E270C:;
    f12 = BITSF(LD32(s0+60));
    ST32(sp, s4);
    v0 = D_08B285A0 - (-31328);
    v1 = D_08B2858C - (-31348);
    f13 = BITSF(LD32(v0-31328));
    f14 = BITSF(LD32(v1-31348));
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = s6 + 0;
    t1 = fp + 0;
    t2 = s7 + 0;
    t3 = s5 + 0;
    t0 = sp + 16;
    f0 = func_088E2DDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, sp);
    goto L_088E2748;
L_088E2748:;
    sp = sp + 112;
    return f0;
L_088E2778:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2788;
L_088E2788:;
    s7 = v0 + 0;
    goto L_088E270C;
L_088E2790:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    a2 = fp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E27A0;
L_088E27A0:;
    v1 = LD32(s1+228);
    s6 = v0 + 0;
    goto L_088E26FC;
}

/* 088E27AC */
rv_t func_088E27AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E27AC:;
    sp = sp - 32;
    a2 = a0 + 28;
    s0 = a0 + 0;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a0+28));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E2850; }
    goto L_088E27D8;
L_088E27D8:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a2+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = v0 ^ 0x1; goto L_088E2854; }
    goto L_088E27F0;
L_088E27F0:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(a2+16));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = v0 ^ 0x1; goto L_088E2854; }
    goto L_088E2808;
L_088E2808:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = v0 ^ 0x1; goto L_088E2854; }
    goto L_088E2820;
L_088E2820:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a2+12));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = v0 ^ 0x1; goto L_088E2854; }
    goto L_088E2838;
L_088E2838:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(a2+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = 1; goto L_088E2850; }
    goto L_088E2850;
L_088E2850:;
    v0 = v0 ^ 0x1;
    goto L_088E2854;
L_088E2854:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088E2870; }
    goto L_088E285C;
L_088E285C:;
    v0 = LD32(s0+132);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E2920; }
    goto L_088E286C;
L_088E286C:;
    v0 = LD32(a1);
    goto L_088E2870;
L_088E2870:;
    a0 = s0 + 0;
    ST32(s0+28, v0);
    v1 = LD32(a1+4);
    f5 = BITSF(LD32(s0+28));
    ST32(s0+32, v1);
    v0 = LD32(a1+8);
    ST32(s0+36, v0);
    v1 = LD32(a1+12);
    ST32(s0+40, v1);
    v0 = LD32(a1+16);
    ST32(s0+44, v0);
    v1 = LD32(a1+20);
    ST32(s0+48, v1);
    f4 = BITSF(LD32(a2+16));
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+12));
    f3 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+20));
    f0 = f0 - f5;
    f1 = f1 - f3;
    f2 = f2 - f4;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AECD34 - (-13004);
    f0 = BITSF(LD32(v0-13004));
    ST32(sp+8, FBITS(f2));
    f1 = f1 * f0;
    ST32(s0+52, FBITS(f1));
    func_088E292C(a0);
    goto L_088E290C;
L_088E290C:;
    v0 = LD32(s0+132);
    ST32(s0+116, 0);
    v0 = v0 | 0x1;
    ST32(s0+132, v0);
    goto L_088E2920;
L_088E2920:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088E292C */
void func_088E292C(u32 a0)
{
    u32 v0 = 0;
L_088E292C:;
    v0 = LD32(a0+132);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(a0+132, v0);
    return;
}

/* 088E293C */
u32 func_088E293C(u32 a0)
{
    u32 v0 = 0;
L_088E293C:;
    v0 = LD32(a0+132);
    v0 = v0 ^ 0x4;
    v0 = (v0 >> 2) & 0x1;
    return v0;
}

/* 088E294C */
u32 func_088E294C(u32 a0)
{
    u32 v0 = 0;
L_088E294C:;
    v0 = LD32(a0+132);
    v0 = (v0 >> 2) & 0x1;
    return v0;
}

/* 088E2958 */
void func_088E2958(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E2958:;
    sp = sp - 16;
    s0 = D_08B2C0FC - (-16132);
    s0 = s0 - 16132;
    a1 = 16;
    s1 = a0 + 0;
    a0 = s0 + 0;
    func_088CE680(a1);
    goto L_088E2980;
L_088E2980:;
    a2 = ((u32)(uintptr_t)func_08AB88CC) - (-30516);
    a1 = s1 + 28;
    a2 = a2 - 30516;
    a0 = s0 + 0;
    { rv_t r_ = func_088CE404(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2994;
L_088E2994:;
    a1 = s1 + 84;
    a0 = s0 + 0;
    v0 = func_088CE75C(a1);
    goto L_088E29A0;
L_088E29A0:;
    v0 = v0 & 0xff;
    v1 = LD32(s1+132);
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s1+132, v1);
    sp = sp + 16;
    return;
}

/* 088E29C4 */
u32 func_088E29C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_088E29C4:;
    v0 = D_08B230A8 - (12456);
    t1 = LD_U8(v0+12456);
    v0 = D_08B2C0FC - (-16132);
    t3 = v0 - 16132;
    a0 = a0 + 84;
    t4 = 0 + 0;
    a3 = 0 + 0;
    t2 = 0xffff;
    v1 = LD_U16(a0);
    goto L_088E29E8;
L_088E29E8:;
    a3 = a3 + 1;
    t0 = (s32)a3 < 16;
    cnd_ = v1 == t2;
    a0 = a0 + 2;
    if (cnd_) { goto L_088E2A28; }
    goto L_088E29F8;
L_088E29F8:;
    v0 = LD32(t3+16);
    a2 = 0 + 0;
    a1 = t1 & 0xff;
    cnd_ = v0 == 0;
    v1 = v0 + v1;
    if (cnd_) { goto L_088E2A18; }
    goto L_088E2A0C;
L_088E2A0C:;
    v0 = LD_U8(v1);
    v0 = v0 & a1;
    a2 = 0 < v0;
    goto L_088E2A18;
L_088E2A18:;
    cnd_ = a2 != 0;
    if (cnd_) { t4 = 1; goto L_088E2A28; }
    goto L_088E2A20;
L_088E2A20:;
    cnd_ = t0 != 0;
    if (cnd_) { v1 = LD_U16(a0); goto L_088E29E8; }
    goto L_088E2A28;
L_088E2A28:;
    v0 = t4 + 0;
    return v0;
}

/* 088E2A30 */
rv_t func_088E2A30(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088E2A30:;
    sp = sp - 96;
    v0 = D_08B285AC - (-31316);
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    s7 = LD32(v0-31316);
    v1 = LD32(a0+116);
    cnd_ = v1 == s7;
    ST32(sp+16, a1);
    if (cnd_) { goto L_088E2C5C; }
    goto L_088E2A7C;
L_088E2A7C:;
    v1 = LD32(a0+132);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088E2C70; }
    goto L_088E2A8C;
L_088E2A8C:;
    v0 = LD32(a0+120);
    cnd_ = s7 == v0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088E2D30; }
    goto L_088E2A98;
L_088E2A98:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E2D20; }
    goto L_088E2AA4;
L_088E2AA4:;
    v0 = LD_U16(s0+20);
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+23); goto L_088E2AC8; }
    goto L_088E2AB4;
L_088E2AB4:;
    v0 = func_088E293C(a0);
    goto L_088E2ABC;
L_088E2ABC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E2CD4; }
    goto L_088E2AC4;
L_088E2AC4:;
    v0 = LD_U8(s0+23);
    goto L_088E2AC8;
L_088E2AC8:;
    ST8(s0+22, 0);
    v1 = D_08B15A00 - (23040);
    ST32(sp+20, v0);
    ST8(s0+23, 0);
    v0 = LD32(v1+23040);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088E2C58; }
    goto L_088E2AE4;
L_088E2AE4:;
    a0 = s7 & 0x7;
    v0 = D_08AECD38 - (-13000);
    ST32(sp+24, a0);
    s6 = D_08B159FC - (23036);
    s4 = 1;
    f20 = BITSF(LD32(v0-13000));
    v0 = D_08B22E88 - (11912);
    s3 = v0 + 11912;
    s5 = s0 + 28;
    s2 = s0 + 68;
    goto L_088E2B0C;
L_088E2B0C:;
    v1 = D_08B15A04 - (23044);
    v0 = LD32(v1+23044);
    cnd_ = s1 == v0;
    v0 = s4 << (s1 & 31);
    if (cnd_) { goto L_088E2B40; }
    goto L_088E2B1C;
L_088E2B1C:;
    a0 = D_08B230A8 - (12456);
    ST32(v1+23044, s1);
    v1 = D_08B230AC - (12460);
    v1 = v1 + 12460;
    ST8(a0+12456, v0);
    v0 = D_08B15A0C - (23052);
    ST8(v0+23052, s4);
    ST32(s6+23036, s3);
    ST8(v1+4, s4);
    goto L_088E2B40;
L_088E2B40:;
    v0 = LD32(s6+23036);
    v1 = LD_U8(v0+132);
    cnd_ = v1 == 0;
    v1 = D_08B15A00 - (23040);
    if (cnd_) { goto L_088E2C40; }
    goto L_088E2B50;
L_088E2B50:;
    v1 = LD_U16(s0+20);
    v0 = (u32)((s32)v1 >> (s1 & 31));
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = D_08B15A00 - (23040); goto L_088E2C40; }
    goto L_088E2B64;
L_088E2B64:;
    v0 = v1 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+23); goto L_088E2BA4; }
    goto L_088E2B70;
L_088E2B70:;
    a0 = s0 + 0;
    v0 = func_088E294C(a0);
    goto L_088E2B78;
L_088E2B78:;
    cnd_ = v0 != 0;
    a0 = LD32(sp+20);
    if (cnd_) { goto L_088E2CC4; }
    goto L_088E2B80;
L_088E2B80:;
    v0 = LD32(s0+24);
    v1 = (u32)((s32)a0 >> (s1 & 31));
    a0 = LD32(sp+24);
    v0 = v0 & 0x7;
    cnd_ = a0 == v0;
    v1 = v1 & 0x1;
    if (cnd_) { goto L_088E2CA8; }
    goto L_088E2B98;
L_088E2B98:;
    cnd_ = v1 == 0;
    v1 = D_08B15A00 - (23040);
    if (cnd_) { goto L_088E2C40; }
    goto L_088E2BA0;
L_088E2BA0:;
    v0 = LD_U8(s0+23);
    goto L_088E2BA4;
L_088E2BA4:;
    fp = s4 << (s1 & 31);
    f2 = BITSF(LD32(s0+28));
    v0 = v0 | fp;
    ST8(s0+23, v0);
    f5 = BITSF(LD32(s5+4));
    f4 = BITSF(LD32(s5+12));
    f3 = BITSF(LD32(s5+20));
    f1 = BITSF(LD32(s5+8));
    f0 = BITSF(LD32(s5+16));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    v0 = LD_U16(s0+20);
    f4 = f2 * f20;
    f5 = f1 * f20;
    f3 = f0 * f20;
    v0 = v0 & 0x400;
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    cnd_ = v0 == 0;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_088E2C20; }
    goto L_088E2BF8;
L_088E2BF8:;
    v0 = LD32(s6+23036);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = f3 + f0;
    f1 = f4 + f1;
    f2 = f5 + f2;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_088E2C20;
L_088E2C20:;
    f12 = BITSF(LD32(s0+52));
    a0 = sp + 0;
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2C2C;
L_088E2C2C:;
    cnd_ = v0 == 0;
    v1 = D_08B15A00 - (23040);
    if (cnd_) { goto L_088E2C40; }
    goto L_088E2C34;
L_088E2C34:;
    v0 = LD_U8(s0+22);
    v0 = v0 | fp;
    ST8(s0+22, v0);
    goto L_088E2C40;
L_088E2C40:;
    v0 = LD32(v1+23040);
    s1 = s1 + 1;
    s3 = s3 + 136;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_088E2B0C; }
    goto L_088E2C58;
L_088E2C58:;
    ST32(s0+116, s7);
    goto L_088E2C5C;
L_088E2C5C:;
    a0 = LD32(sp+16);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s0+23); goto L_088E2C6C; }
    goto L_088E2C68;
L_088E2C68:;
    v0 = LD_U8(s0+22);
    goto L_088E2C6C;
L_088E2C6C:;
    a1 = v0 + 0;
    goto L_088E2C70;
L_088E2C70:;
    v0 = a1 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088E2CA8:;
    a0 = D_08B2C0FC - (-16132);
    a0 = a0 - 16132;
    a1 = s0 + 28;
    a2 = s2 + 0;
    { rv_t r_ = func_088CE800(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E2CBC;
L_088E2CBC:;
    v1 = v0 & 0xff;
    goto L_088E2B98;
L_088E2CC4:;
    a0 = s0 + 0;
    v0 = func_088E29C4(a0);
    goto L_088E2CCC;
L_088E2CCC:;
    v1 = v0 + 0;
    goto L_088E2B98;
L_088E2CD4:;
    a0 = s0 + 0;
    func_088E2958(a0);
    goto L_088E2CDC;
L_088E2CDC:;
    a0 = LD32(s0+124);
    v0 = a0 + 1;
    cnd_ = s7 == v0;
    if (cnd_) { v0 = LD32(s0+128); goto L_088E2CF4; }
    goto L_088E2CEC;
L_088E2CEC:;
    ST32(s0+124, s7);
    goto L_088E2AC4;
L_088E2CF4:;
    v1 = 30;
    v0 = v0 + 1;
    cnd_ = v0 != v1;
    ST32(s0+128, v0);
    if (cnd_) { goto L_088E2CEC; }
    goto L_088E2D04;
L_088E2D04:;
    v0 = LD32(s0+132);
    v1 = a0 + 1201;
    ST32(s0+120, v1);
    v0 = v0 | 0x2;
    ST32(s0+132, v0);
    ST32(s0+128, 0);
    goto L_088E2CEC;
L_088E2D20:;
    func_088E292C(a0);
    goto L_088E2D28;
L_088E2D28:;
    v0 = LD_U8(s0+23);
    goto L_088E2AC8;
L_088E2D30:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(a0+120, 0);
    v1 = v0 + 0;
    ST32(a0+132, v0);
    goto L_088E2A98;
}

/* 088E2D44 */
void func_088E2D44(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088E2D44:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v0 = LD_U16(a0+20);
    if (cnd_) { goto L_088E2D5C; }
    goto L_088E2D50;
L_088E2D50:;
    v0 = v0 | 0x20;
    goto L_088E2D54;
L_088E2D54:;
    ST16(a0+20, v0);
    return;
L_088E2D5C:;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    goto L_088E2D54;
}

/* 088E2D64 */
u32 func_088E2D64(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088E2D64:;
    v1 = LD_U16(a0+20);
    a0 = 1;
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    a1 = v1 & 0x400;
    if (cnd_) { goto L_088E2D94; }
    goto L_088E2D78;
L_088E2D78:;
    a2 = v1 & 0x2000;
    cnd_ = a1 != 0;
    a0 = 2;
    if (cnd_) { goto L_088E2D94; }
    goto L_088E2D84;
L_088E2D84:;
    v0 = v1 >> 12;
    cnd_ = a2 != 0;
    a0 = 3;
    if (cnd_) { goto L_088E2D94; }
    goto L_088E2D90;
L_088E2D90:;
    a0 = v0 & 0x4;
    goto L_088E2D94;
L_088E2D94:;
    v0 = a0 + 0;
    return v0;
}

/* 088E2D9C */
void func_088E2D9C(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088E2D9C:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v0 = LD_U16(a0+20);
    if (cnd_) { goto L_088E2DB4; }
    goto L_088E2DA8;
L_088E2DA8:;
    v0 = v0 | 0x400;
    goto L_088E2DAC;
L_088E2DAC:;
    ST16(a0+20, v0);
    return;
L_088E2DB4:;
    v0 = (v0 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    goto L_088E2DAC;
}

/* 088E2DBC */
u32 func_088E2DBC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088E2DBC:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v0 = LD_U16(a0+20);
    if (cnd_) { goto L_088E2DD4; }
    goto L_088E2DC8;
L_088E2DC8:;
    v0 = v0 | 0x4000;
    goto L_088E2DCC;
L_088E2DCC:;
    ST16(a0+20, v0);
    return v0;
L_088E2DD4:;
    v0 = (v0 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    goto L_088E2DCC;
}

/* 088E2DDC */
float func_088E2DDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160); memcpy(stack_ + 160, PTR(sp_in), 16); /* stack-passed arguments */
L_088E2DDC:;
    sp = sp - 160;
    a3 = a3 & 0xff;
    s7 = a0 + 0;
    t2 = t2 & 0xff;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = t3 + 0;
    f23 = f12;
    f22 = f14;
    f21 = f13;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088E3474; }
    goto L_088E2E50;
L_088E2E50:;
    v0 = LD32(sp+160);
    cnd_ = v0 == 0;
    v1 = 0x4000000u;
    if (cnd_) { goto L_088E2E6C; }
    goto L_088E2E5C;
L_088E2E5C:;
    v0 = LD32(v0+140);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E3478; }
    goto L_088E2E6C;
L_088E2E6C:;
    v1 = LD32(s3+228);
    v0 = v1 & 0x8;
    cnd_ = v0 == 0;
    fp = 0 < s2;
    if (cnd_) { goto L_088E2E84; }
    goto L_088E2E7C;
L_088E2E7C:;
    f0 = BITSF(LD32(s3+196));
    f21 = f21 * f0;
    goto L_088E2E84;
L_088E2E84:;
    cnd_ = fp == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E2EE8; }
    goto L_088E2E8C;
L_088E2E8C:;
    v1 = s7 + 0;
    goto L_088E2E90;
L_088E2E90:;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+16));
    f2 = BITSF(LD32(v1+20));
    f5 = f0 * f21;
    f4 = f1 * f21;
    f3 = f2 * f21;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f0 = f0 + f5;
    f1 = f1 + f4;
    f2 = f2 + f3;
    a0 = a0 + 1;
    v0 = a0 < s2;
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    cnd_ = v0 != 0;
    v1 = v1 + 32;
    if (cnd_) { goto L_088E2E90; }
    goto L_088E2EDC;
L_088E2EDC:;
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f5));
    goto L_088E2EE8;
L_088E2EE8:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088E3104; }
    goto L_088E2EF0;
L_088E2EF0:;
    cnd_ = fp == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E3104; }
    goto L_088E2EF8;
L_088E2EF8:;
    f19 = BITSF(0);
    f13 = BITSF(LD32(sp+16));
    f11 = BITSF(LD32(sp+20));
    f12 = BITSF(LD32(sp+24));
    f18 = BITSF(LD32(sp+32));
    f17 = BITSF(LD32(sp+36));
    f16 = BITSF(LD32(sp+40));
    v0 = D_08AECD40 - (-12992);
    f20 = BITSF(LD32(v0-12992));
    v0 = s7 + 0;
    goto L_088E2F20;
L_088E2F20:;
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f8 = BITSF(LD32(v0));
    f14 = BITSF(LD32(v0+4));
    f15 = BITSF(LD32(v0+8));
    f7 = f8 - f0;
    f5 = f14 - f1;
    f6 = f15 - f2;
    f3 = BITSF(LD32(t1));
    f4 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    a0 = FBITS(f7);
    a2 = FBITS(f3);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(a0);}
    {v[0]=BITSF(a2);}
    a0 = FBITS(f5);
    a2 = FBITS(f4);
    {v[5]=BITSF(a0);}
    {v[1]=BITSF(a2);}
    a0 = FBITS(f6);
    a2 = FBITS(f2);
    {v[6]=BITSF(a0);}
    {v[2]=BITSF(a2);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {a0=FBITS(v[4]);}
    f0 = BITSF(a0);
    f1 = BITSF(a0);
    v1 = v1 + 1;
    fcc = FCMP(f0, f19, 12);
    f1 = f1 + f1;
    a0 = v1 < s2;
    cnd_ = !fcc;
    a1 = v0 + 12;
    if (cnd_) { goto L_088E30D8; }
    goto L_088E2FB0;
L_088E2FB0:;
    f7 = f3 * f1;
    f6 = f2 * f1;
    f5 = f4 * f1;
    f10 = BITSF(LD32(v0+12));
    f0 = f8 - f7;
    f2 = f15 - f6;
    f1 = f14 - f5;
    f9 = BITSF(LD32(v0+16));
    ST32(v0, FBITS(f0));
    a2 = FBITS(f10);
    ST32(v0+4, FBITS(f1));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(v0+8, FBITS(f2));
    {v[4]=BITSF(a2);}
    a2 = FBITS(f9);
    f8 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(t1));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    {v[5]=BITSF(a2);}
    a2 = FBITS(f8);
    {v[6]=BITSF(a2);}
    a2 = FBITS(f4);
    {v[0]=BITSF(a2);}
    a2 = FBITS(f1);
    {v[1]=BITSF(a2);}
    a2 = FBITS(f2);
    {v[2]=BITSF(a2);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {a2=FBITS(v[4]);}
    f0 = BITSF(a2);
    f3 = BITSF(a2);
    fcc = FCMP(f0, f19, 12);
    cnd_ = !fcc;
    f12 = f2 * f3;
    if (cnd_) { goto L_088E3090; }
    goto L_088E3044;
L_088E3044:;
    f0 = BITSF(LD32(s3+184));
    f0 = f0 + f20;
    f0 = f0 * f3;
    f6 = f2 * f0;
    f7 = f4 * f0;
    f5 = f1 * f0;
    f2 = f8 - f6;
    f0 = f10 - f7;
    f1 = f9 - f5;
    ST32(v0+20, FBITS(f2));
    f8 = f2;
    f9 = f1;
    ST32(v0+12, FBITS(f0));
    f10 = f0;
    ST32(v0+16, FBITS(f1));
    f4 = BITSF(LD32(t1));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    f12 = f2 * f3;
    goto L_088E3090;
L_088E3090:;
    f11 = f1 * f3;
    f13 = f4 * f3;
    f0 = BITSF(LD32(s3+192));
    f6 = f8 - f12;
    f5 = f9 - f11;
    f7 = f10 - f13;
    f16 = f6 * f0;
    f17 = f5 * f0;
    f18 = f7 * f0;
    f12 = f16 * f21;
    f11 = f17 * f21;
    f13 = f18 * f21;
    f0 = f8 - f12;
    f2 = f9 - f11;
    f1 = f10 - f13;
    ST32(a1+8, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_088E30D8;
L_088E30D8:;
    cnd_ = a0 != 0;
    v0 = v0 + 32;
    if (cnd_) { goto L_088E2F20; }
    goto L_088E30E0;
L_088E30E0:;
    ST32(sp+40, FBITS(f16));
    ST32(sp+36, FBITS(f17));
    ST32(sp+32, FBITS(f18));
    ST32(sp+24, FBITS(f12));
    ST32(sp+20, FBITS(f11));
    ST32(sp+16, FBITS(f13));
    ST32(sp+8, FBITS(f6));
    ST32(sp+4, FBITS(f5));
    ST32(sp, FBITS(f7));
    goto L_088E3104;
L_088E3104:;
    cnd_ = t2 == 0;
    if (cnd_) { v1 = LD32(s3+228); goto L_088E3680; }
    goto L_088E310C;
L_088E310C:;
    cnd_ = fp == 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_088E32C4; }
    goto L_088E3114;
L_088E3114:;
    v0 = D_08AECD44 - (-12988);
    v1 = D_08AECD48 - (-12984);
    f24 = BITSF(LD32(v0-12988));
    f25 = BITSF(LD32(v1-12984));
    v0 = D_08AECD4C - (-12980);
    v1 = D_08AECD50 - (-12976);
    f26 = BITSF(LD32(v0-12980));
    f27 = BITSF(LD32(v1-12976));
    s5 = sp + 32;
    s4 = s3 + 120;
    s0 = s7 + 0;
    goto L_088E3140;
L_088E3140:;
    f3 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1));
    f5 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s1+8));
    f0 = f0 - f5;
    f1 = f1 - f4;
    f2 = f2 - f3;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    a0 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+32, FBITS(f0));
    v1 = 0 + 0;
    ST32(sp+36, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+40, FBITS(f2));
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    v0 = LD32(s3+120);
    f3 = BITSF(LD32(s0+24));
    cnd_ = v0 == 0;
    f20 = f21 / f0;
    if (cnd_) { goto L_088E31B4; }
    goto L_088E31B0;
L_088E31B0:;
    v1 = LD32(v0);
    goto L_088E31B4;
L_088E31B4:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E35F0; }
    goto L_088E31BC;
L_088E31BC:;
    a1 = LD32(s4);
    cnd_ = a1 == 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_088E31CC; }
    goto L_088E31C8;
L_088E31C8:;
    v0 = LD32(a1);
    goto L_088E31CC;
L_088E31CC:;
    v1 = v0 + 0;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088E3218; }
    goto L_088E31DC;
L_088E31DC:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+8); goto L_088E3218; }
    goto L_088E31F0;
L_088E31F0:;
    v1 = v0 + 0;
    goto L_088E31F4;
L_088E31F4:;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088E3218; }
    goto L_088E3200;
L_088E3200:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = v0 + 0; goto L_088E31F4; }
    goto L_088E3214;
L_088E3214:;
    v0 = LD32(v1+8);
    goto L_088E3218;
L_088E3218:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_088E3268; }
    goto L_088E3220;
L_088E3220:;
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(v1+12);
    f2 = f3 - f0;
    f1 = f1 - f0;
    a2 = D_08AECD40 - (-12992);
    f0 = BITSF(LD32(a2-12992));
    cnd_ = a0 == 0;
    f10 = f2 / f1;
    if (cnd_) { goto L_088E3250; }
    goto L_088E3244;
L_088E3244:;
    a2 = LD32(v0+8);
    cnd_ = a2 != 0;
    if (cnd_) { f2 = BITSF(LD32(v0)); goto L_088E353C; }
    goto L_088E3250;
L_088E3250:;
    f2 = f0 - f10;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1));
    f1 = f1 * f10;
    f0 = f0 * f2;
    f0 = f1 + f0;
    goto L_088E3268;
L_088E3268:;
    f0 = f20 * f0;
    f3 = BITSF(LD32(s5));
    f4 = BITSF(LD32(s5+4));
    f5 = BITSF(LD32(s5+8));
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f1 = BITSF(LD32(s0+12));
    f0 = BITSF(LD32(s0+16));
    f2 = BITSF(LD32(s0+20));
    f1 = f1 + f3;
    f0 = f0 + f4;
    f2 = f2 + f5;
    s6 = s6 + 1;
    v0 = s6 < s2;
    ST32(s0+12, FBITS(f1));
    ST32(s0+16, FBITS(f0));
    ST32(s0+20, FBITS(f2));
    s0 = s0 + 32;
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    cnd_ = v0 != 0;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_088E3140; }
    goto L_088E32C4;
L_088E32C4:;
    v1 = LD32(s3+228);
    goto L_088E32C8;
L_088E32C8:;
    v0 = v1 & 0x80;
    goto L_088E32CC;
L_088E32CC:;
    cnd_ = v0 == 0;
    v0 = v1 & 0x100;
    if (cnd_) { goto L_088E33C4; }
    goto L_088E32D4;
L_088E32D4:;
    cnd_ = fp == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088E33C4; }
    goto L_088E32DC;
L_088E32DC:;
    s5 = s3 + 140;
    s1 = sp + 16;
    s0 = s7 + 0;
    goto L_088E32E8;
L_088E32E8:;
    f12 = BITSF(LD32(s0+24));
    a0 = s5 + 0;
    s4 = s4 + 1;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E32F8;
L_088E32F8:;
    f20 = f0;
    f3 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s3+204));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f20 = f20 * f21;
    a0 = s1 + 0;
    a1 = 0 + 0;
    ST32(sp+32, FBITS(f3));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+24, FBITS(f22));
    f0 = func_088EF134(a0, a1);
    goto L_088E3340;
L_088E3340:;
    f0 = f20 * f0;
    f1 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(sp+32));
    a0 = s1 + 0;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+40));
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(s0+12, FBITS(f1));
    ST32(sp+24, FBITS(f22));
    f0 = func_088EF134(a0, a1);
    goto L_088E3370;
L_088E3370:;
    f0 = f20 * f0;
    f1 = BITSF(LD32(s0+16));
    f2 = BITSF(LD32(sp+36));
    a0 = s1 + 0;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+32));
    a1 = 0 + 0;
    ST32(sp+24, FBITS(f22));
    ST32(s0+16, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    f0 = func_088EF134(a0, a1);
    goto L_088E33A0;
L_088E33A0:;
    f20 = f20 * f0;
    f0 = BITSF(LD32(s0+20));
    v0 = s4 < s2;
    f0 = f0 + f20;
    ST32(s0+20, FBITS(f0));
    cnd_ = v0 != 0;
    s0 = s0 + 32;
    if (cnd_) { goto L_088E32E8; }
    goto L_088E33BC;
L_088E33BC:;
    v1 = LD32(s3+228);
    v0 = v1 & 0x100;
    goto L_088E33C4;
L_088E33C4:;
    cnd_ = v0 == 0;
    v0 = v1 & 0x200;
    if (cnd_) { goto L_088E34C4; }
    goto L_088E33CC;
L_088E33CC:;
    v0 = LD32(sp+160);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E3478; }
    goto L_088E33D8;
L_088E33D8:;
    cnd_ = fp == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088E3478; }
    goto L_088E33E0;
L_088E33E0:;
    v1 = D_08AECD40 - (-12992);
    f20 = BITSF(LD32(v1-12992));
    s0 = s7 + 0;
    s4 = v0 + 20;
    s5 = 0x40000u;
    goto L_088E33F4;
L_088E33F4:;
    f12 = BITSF(LD32(s0+24));
    a0 = s4 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3404;
L_088E3404:;
    a0 = LD32(sp+160);
    f1 = f0;
    f3 = BITSF(0);
    v0 = LD32(a0+140);
    v1 = s0 + 12;
    v0 = v0 & s5;
    cnd_ = v0 == 0;
    a0 = s1 < s2;
    if (cnd_) { goto L_088E3428; }
    goto L_088E3424;
L_088E3424:;
    f1 = f0 * f23;
    goto L_088E3428;
L_088E3428:;
    f0 = BITSF(LD32(s3+180));
    f0 = f0 * f21;
    f0 = f1 * f0;
    f0 = f20 - f0;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = f0; goto L_088E3448; }
    goto L_088E3448;
L_088E3448:;
    f0 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f0 = f0 * f3;
    f2 = f2 * f3;
    f1 = f1 * f3;
    ST32(s0+12, FBITS(f0));
    s0 = s0 + 32;
    ST32(v1+8, FBITS(f1));
    cnd_ = a0 != 0;
    ST32(v1+4, FBITS(f2));
    if (cnd_) { goto L_088E33F4; }
    goto L_088E3474;
L_088E3474:;
    goto L_088E3478;
L_088E3478:;
    sp = sp + 160;
    return f0;
L_088E34C4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E3478; }
    goto L_088E34CC;
L_088E34CC:;
    cnd_ = fp == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E3478; }
    goto L_088E34D4;
L_088E34D4:;
    a2 = D_08AECD40 - (-12992);
    f4 = BITSF(LD32(a2-12992));
    a0 = s7 + 0;
    goto L_088E34E0;
L_088E34E0:;
    f0 = BITSF(LD32(s3+180));
    f3 = BITSF(0);
    v1 = v1 + 1;
    f0 = f0 * f21;
    f0 = f4 - f0;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    v0 = v1 < s2;
    if (cnd_) { goto L_088E3508; }
    goto L_088E3504;
L_088E3504:;
    f3 = f0;
    goto L_088E3508;
L_088E3508:;
    f0 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+20));
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    ST32(a0+12, FBITS(f0));
    ST32(a0+16, FBITS(f1));
    ST32(a0+20, FBITS(f2));
    cnd_ = v0 != 0;
    a0 = a0 + 32;
    if (cnd_) { goto L_088E34E0; }
    goto L_088E3534;
L_088E3534:;
    goto L_088E3478;
L_088E353C:;
    f3 = BITSF(LD32(a0));
    f6 = BITSF(LD32(v1));
    f4 = f2 * f24;
    f1 = f3 + f3;
    f0 = f6 * f24;
    f5 = f6 * f25;
    f8 = f2 * f26;
    f7 = BITSF(LD32(a2));
    f0 = f0 - f4;
    f1 = f1 - f5;
    f9 = f10 * f10;
    f2 = f2 - f3;
    f0 = f0 + f7;
    f1 = f1 + f8;
    f4 = f10 * f9;
    f2 = f2 * f10;
    f0 = f0 - f3;
    f1 = f1 - f7;
    v0 = LD32(a3+12);
    f0 = f0 * f4;
    f1 = f1 * f9;
    v0 = v0 & 0x1;
    f0 = f0 + f1;
    f0 = f0 + f2;
    f0 = f0 * f27;
    f0 = f0 + f6;
    cnd_ = v0 != 0;
    ST32(sp+48, FBITS(f0));
    if (cnd_) { goto L_088E35D8; }
    goto L_088E35AC;
L_088E35AC:;
    v0 = LD32(a1+12);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(a1+8)); goto L_088E35C4; }
    goto L_088E35BC;
L_088E35BC:;
    f0 = BITSF(LD32(sp+48));
    goto L_088E3268;
L_088E35C4:;
    a0 = s4 + 0;
    a1 = sp + 48;
    func_088324B4(a1, f12);
    goto L_088E35D0;
L_088E35D0:;
    f0 = BITSF(LD32(sp+48));
    goto L_088E3268;
L_088E35D8:;
    f12 = BITSF(LD32(a3+4));
    a1 = sp + 48;
    a0 = s4 + 0;
    func_08832498(a1, f12);
    goto L_088E35E8;
L_088E35E8:;
    a1 = LD32(s4);
    goto L_088E35AC;
L_088E35F0:;
    f2 = BITSF(LD32(s4+12));
    f1 = BITSF(LD32(s4+16));
    v0 = LD32(s4+4);
    f0 = f3 - f2;
    f1 = f1 - f2;
    a1 = v0 - 1;
    f3 = BITSF(a1);
    v0 = D_08AECD40 - (-12992);
    f0 = f0 / f1;
    f2 = (float)(s32)FBITS(f3);
    f0 = f0 * f2;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    cnd_ = (s32)a0 < 0;
    f3 = BITSF(LD32(v0-12992));
    if (cnd_) { goto L_088E3678; }
    goto L_088E362C;
L_088E362C:;
    v0 = (s32)a0 < (s32)a1;
    cnd_ = v0 != 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088E364C; }
    goto L_088E3638;
L_088E3638:;
    v1 = LD32(s4+8);
    v0 = a1 << 2;
    v0 = v0 + v1;
    goto L_088E3644;
L_088E3644:;
    f0 = BITSF(LD32(v0));
    goto L_088E3268;
L_088E364C:;
    v1 = LD32(s4+8);
    v0 = a0 << 2;
    f2 = f0 - f2;
    v0 = v0 + v1;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f3 = f3 - f2;
    f1 = f1 * f2;
    f0 = f0 * f3;
    f0 = f0 + f1;
    goto L_088E3268;
L_088E3678:;
    v0 = LD32(s4+8);
    goto L_088E3644;
L_088E3680:;
    v0 = v1 & 0x400;
    cnd_ = v0 == 0;
    v0 = v1 & 0x80;
    if (cnd_) { goto L_088E32CC; }
    goto L_088E368C;
L_088E368C:;
    cnd_ = fp == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088E32CC; }
    goto L_088E3694;
L_088E3694:;
    s4 = s3 + 120;
    s5 = s3 + 160;
    s0 = s7 + 0;
    goto L_088E36A0;
L_088E36A0:;
    f0 = BITSF(LD32(s3+160));
    f1 = BITSF(LD32(s5+4));
    f2 = BITSF(LD32(s5+8));
    f0 = f0 * f21;
    f1 = f1 * f21;
    f2 = f2 * f21;
    f12 = BITSF(LD32(s0+24));
    a0 = s4 + 0;
    ST32(sp+20, FBITS(f1));
    s1 = s1 + 1;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E36D4;
L_088E36D4:;
    v0 = s1 < s2;
    f3 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+24));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f1 = BITSF(LD32(s0+16));
    f0 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(s0+20));
    f1 = f1 + f5;
    f0 = f0 + f3;
    f2 = f2 + f4;
    ST32(sp+32, FBITS(f3));
    ST32(s0+16, FBITS(f1));
    ST32(s0+20, FBITS(f2));
    ST32(s0+12, FBITS(f0));
    s0 = s0 + 32;
    ST32(sp+36, FBITS(f5));
    cnd_ = v0 != 0;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_088E36A0; }
    goto L_088E3728;
L_088E3728:;
    v1 = LD32(s3+228);
    goto L_088E32C8;
}

/* 088E3730 */
rv_t func_088E3730(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E3730:;
    sp = sp - 32;
    s5 = t0 & 0xffff;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = func_088E9218();
    goto L_088E3768;
L_088E3768:;
    cnd_ = v0 != 0;
    a0 = 328;
    if (cnd_) { goto L_088E3798; }
    goto L_088E3770;
L_088E3770:;
    v0 = 0 + 0;
    goto L_088E3774;
L_088E3774:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088E3798:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E37A0;
L_088E37A0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    t1 = s5 + 0;
    { rv_t r_ = func_088E3844(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E37C0;
L_088E37C0:;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E3774; }
    goto L_088E37C8;
L_088E37C8:;
    v1 = LD32(s0+4);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 0 + 0; goto L_088E3774; }
    goto L_088E37D8;
L_088E37D8:;
    v0 = LD32(s0+24);
    goto L_088E3774;
}

/* 088E37E0 */
rv_t func_088E37E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088E37E0:;
    sp = sp - 80;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = t0 & 0xffff;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3810;
L_088E3810:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3828;
L_088E3828:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 088E3844 */
rv_t func_088E3844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 416);
L_088E3844:;
    sp = sp - 416;
    t1 = t1 & 0xffff;
    s6 = a1 + 0;
    a1 = t1 + 0;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    s7 = t0 + 0;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    s3 = a2 + 0;
    s2 = a0 + 0;
    s0 = a3 + 0;
    ST32(sp+96, t1);
    func_088E24E0(a0, a1, t1, t2, t3);
    goto L_088E38A4;
L_088E38A4:;
    v0 = D_08AF7D60 - (32096);
    f2 = BITSF(LD32(s6));
    f0 = BITSF(LD32(s6+4));
    f1 = BITSF(LD32(s6+8));
    a3 = s2 + 140;
    v0 = v0 + 32096;
    ST32(a3+4, FBITS(f0));
    v1 = s2 + 152;
    t0 = (u32)-1;
    ST32(a3+8, FBITS(f1));
    t2 = 0 < s7;
    a1 = s2 + 264;
    ST32(s2, v0);
    a2 = s2 + 288;
    a0 = s0 + 0;
    ST32(s2+140, FBITS(f2));
    v0 = LD32(sp+96);
    f0 = BITSF(LD32(s3+32));
    f8 = BITSF(LD32(s3));
    t1 = (v0 >> 8) & 0x1;
    v0 = D_08AECD70 - (-12944);
    ST32(v1+32, FBITS(f0));
    f1 = BITSF(LD32(s3+4));
    f2 = BITSF(LD32(s3+8));
    f3 = BITSF(LD32(s3+12));
    f4 = BITSF(LD32(s3+16));
    f5 = BITSF(LD32(s3+20));
    f6 = BITSF(LD32(s3+24));
    f7 = BITSF(LD32(s3+28));
    f0 = BITSF(LD32(v0-12944));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    ST32(s2+152, FBITS(f8));
    ST32(s2+224, FBITS(f0));
    ST32(s2+228, t0);
    ST32(s2+220, t0);
    ST32(s2+212, 0);
    ST32(s2+216, 0);
    ST8(s2+232, 0);
    ST8(s2+233, 0);
    v0 = LD32(s2+320);
    f1 = BITSF(LD32(s2+140));
    v0 = (v0 & ~(0x1u << 0)) | ((t2 & 0x1) << 0);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v0 = (v0 & ~(0x1u << 2)) | ((t1 & 0x1) << 2);
    v0 = v0 | 0x10;
    ST32(s2+320, v0);
    ST32(s2+236, 0);
    ST32(s2+312, 0);
    ST32(s2+324, 0);
    ST32(s2+264, FBITS(f1));
    ST32(a1+4, FBITS(f1));
    f0 = BITSF(LD32(a3+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1+12, FBITS(f0));
    f1 = BITSF(LD32(a3+8));
    ST32(a1+16, FBITS(f1));
    ST32(a1+20, FBITS(f1));
    f0 = BITSF(LD32(s2+140));
    ST32(a2+4, FBITS(f0));
    ST32(s2+288, FBITS(f0));
    f1 = BITSF(LD32(a3+4));
    ST32(a2+8, FBITS(f1));
    ST32(a2+12, FBITS(f1));
    f0 = BITSF(LD32(a3+8));
    ST32(a2+16, FBITS(f0));
    ST32(a2+20, FBITS(f0));
    v0 = LD32(s2+320);
    ST32(s2+316, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s2+320, v0);
    { rv_t r_ = func_088E9FDC(a0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E39D8;
L_088E39D8:;
    v1 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+136, v0);
    if (cnd_) { goto L_088E3A28; }
    goto L_088E39E4;
L_088E39E4:;
    v0 = 3;
    ST32(s2+4, v0);
    goto L_088E39EC;
L_088E39EC:;
    v0 = LD_U16(s2+20);
    goto L_088E39F0;
L_088E39F0:;
    v0 = v0 | 0x1000;
    ST16(s2+20, v0);
    sp = sp + 416;
    return (rv_t){ v0, v1, f0 };
L_088E3A28:;
    v0 = LD32(v0+68);
    a0 = LD32(v1);
    ST32(sp+100, 0);
    v0 = v0 + 1;
    a0 = a0 << 2;
    ST32(v1+68, v0);
    fp = 0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3A48;
L_088E3A48:;
    v1 = LD32(s2+136);
    a0 = v0 + 0;
    ST32(s2+324, v0);
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = LD32(v1);
    s4 = LD32(v1+4);
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E3C9C; }
    goto L_088E3A70;
L_088E3A70:;
    a3 = a0 + 0;
    goto L_088E3A74;
L_088E3A74:;
    cnd_ = s7 == 0;
    a0 = 132;
    if (cnd_) { goto L_088E3CA8; }
    goto L_088E3A7C;
L_088E3A7C:;
    s5 = fp << 2;
    s1 = s5 + a3;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3A98;
L_088E3A98:;
    t0 = LD32(s4);
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s6 + 0;
    a3 = s3 + 0;
    t1 = s7 + 0;
    s0 = v0 + 0;
    f0 = func_088E643C(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_088E3AB8;
L_088E3AB8:;
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    ST32(s1, s0);
    goto L_088E3ACC;
L_088E3ACC:;
    s1 = LD32(s2+324);
    v0 = s5 + s1;
    a2 = LD32(v0);
    v1 = LD32(a2+104);
    cnd_ = v1 == 0;
    a3 = s1 + 0;
    if (cnd_) { goto L_088E3BE4; }
    goto L_088E3AE4;
L_088E3AE4:;
    v0 = LD32(a2+108);
    cnd_ = v0 == 0;
    v0 = s5 + s1;
    if (cnd_) { goto L_088E3BE4; }
    goto L_088E3AF0;
L_088E3AF0:;
    v0 = LD32(v1+228);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088E3BDC; }
    goto L_088E3B00;
L_088E3B00:;
    v1 = LD32(s3);
    v0 = LD32(s3+4);
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s3+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s3+12);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s3+16);
    {u32 a_=sp+(240);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s3+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s3+24);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s3+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    a1 = s4 + 52;
    {u32 a_=sp+(288);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(s3+32);
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(s4+52);
    v1 = LD32(a1+4);
    a0 = LD32(a1+8);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(176);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v0);}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = a2 + 52;
    {v1=FBITS(v[17]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    ST32(a2+52, FBITS(f2));
    ST32(v0+4, v1);
    ST32(v0+8, FBITS(f3));
    v0 = 1;
    goto L_088E3BDC;
L_088E3BDC:;
    ST32(sp+100, v0);
    v0 = s5 + s1;
    goto L_088E3BE4;
L_088E3BE4:;
    v1 = LD32(v0);
    s1 = LD32(v1+108);
    cnd_ = s1 == 0;
    if (cnd_) { v1 = LD32(s2+136); goto L_088E3C30; }
    goto L_088E3BF4;
L_088E3BF4:;
    v1 = LD32(s1+140);
    v0 = 0x20000u;
    f2 = BITSF(LD32(s2+312));
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    f1 = BITSF(LD32(s1+84));
    if (cnd_) { goto L_088E3C14; }
    goto L_088E3C0C;
L_088E3C0C:;
    f0 = BITSF(LD32(s1+88));
    f1 = f1 + f0;
    goto L_088E3C14;
L_088E3C14:;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_088E3C28; }
    goto L_088E3C24;
L_088E3C24:;
    f0 = f1;
    goto L_088E3C28;
L_088E3C28:;
    ST32(s2+312, FBITS(f0));
    v1 = LD32(s2+136);
    goto L_088E3C30;
L_088E3C30:;
    fp = fp + 1;
    v0 = LD32(v1);
    v0 = fp < v0;
    cnd_ = v0 != 0;
    s4 = s4 + 104;
    if (cnd_) { goto L_088E3A74; }
    goto L_088E3C44;
L_088E3C44:;
    v0 = LD32(sp+100);
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_088E3CA0; }
    goto L_088E3C50;
L_088E3C50:;
    v1 = LD32(sp+96);
    v0 = v1 & 0x200;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_088E3C8C; }
    goto L_088E3C60;
L_088E3C60:;
    ST32(s2+4, v0);
    goto L_088E3C64;
L_088E3C64:;
    a0 = s2 + 0;
    f0 = func_088E524C(a0);
    goto L_088E3C6C;
L_088E3C6C:;
    v1 = LD32(s2+136);
    goto L_088E3C70;
L_088E3C70:;
    v0 = LD32(v1+64);
    v0 = v0 & 0x200;
    cnd_ = v0 == 0;
    v0 = LD_U16(s2+20);
    if (cnd_) { goto L_088E39F0; }
    goto L_088E3C80;
L_088E3C80:;
    v0 = v0 | 0x810;
    ST16(s2+20, v0);
    goto L_088E39EC;
L_088E3C8C:;
    a0 = s2 + 0;
    { rv_t r_ = func_088E5398(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3C94;
L_088E3C94:;
    goto L_088E3C64;
L_088E3C9C:;
    v0 = 3;
    goto L_088E3CA0;
L_088E3CA0:;
    ST32(s2+4, v0);
    goto L_088E3C70;
L_088E3CA8:;
    s5 = fp << 2;
    s1 = s5 + a3;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3CC4;
L_088E3CC4:;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a1 = s4 + 4;
    v1 = LD32(s3);
    a0 = LD32(a1+8);
    f4 = BITSF(LD32(s6));
    f5 = BITSF(LD32(s6+4));
    f6 = BITSF(LD32(s6+8));
    s0 = v0 + 0;
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(s3+4);
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(s3+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(s3+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s3+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s3+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(s3+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(s3+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(s3+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(s4+4);
    {v[34]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = LD32(a1+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[16]);}
    {v1=FBITS(v[18]);}
    f2 = BITSF(v0);
    f3 = BITSF(v1);
    {v1=FBITS(v[17]);}
    f0 = BITSF(v1);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    t0 = LD32(s4);
    t1 = s4 + 68;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = sp + 0;
    a3 = sp + 48;
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f6));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    {v[112]=BITSF(LD32(s4+(16)));}
    {v[113]=BITSF(LD32(s4+(20)));}
    {v[114]=BITSF(LD32(s4+(24)));}
    {v[116]=BITSF(LD32(s4+(28)));}
    {v[117]=BITSF(LD32(s4+(32)));}
    {v[118]=BITSF(LD32(s4+(36)));}
    {v[120]=BITSF(LD32(s4+(40)));}
    {v[121]=BITSF(LD32(s4+(44)));}
    {v[122]=BITSF(LD32(s4+(48)));}
    {v[96]=BITSF(LD32(s3+(0)));}
    {v[97]=BITSF(LD32(s3+(4)));}
    {v[98]=BITSF(LD32(s3+(8)));}
    {v[100]=BITSF(LD32(s3+(12)));}
    {v[101]=BITSF(LD32(s3+(16)));}
    {v[102]=BITSF(LD32(s3+(20)));}
    {v[104]=BITSF(LD32(s3+(24)));}
    {v[105]=BITSF(LD32(s3+(28)));}
    {v[106]=BITSF(LD32(s3+(32)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(48),FBITS(v[80]));}
    {ST32(sp+(52),FBITS(v[81]));}
    {ST32(sp+(56),FBITS(v[82]));}
    {ST32(sp+(60),FBITS(v[84]));}
    {ST32(sp+(64),FBITS(v[85]));}
    {ST32(sp+(68),FBITS(v[86]));}
    {ST32(sp+(72),FBITS(v[88]));}
    {ST32(sp+(76),FBITS(v[89]));}
    {ST32(sp+(80),FBITS(v[90]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    f0 = func_088E643C(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_088E3E44;
L_088E3E44:;
    ST32(s1, s0);
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_088E3ACC;
}

/* 088E3E5C */
rv_t func_088E3E5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E3E5C:;
    sp = sp - 16;
    v0 = D_08AF7D60 - (32096);
    v0 = v0 + 32096;
    s1 = a0 + 0;
    v1 = LD32(a0+136);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088E3ED8; }
    goto L_088E3E88;
L_088E3E88:;
    v0 = LD32(v1+68);
    a1 = LD32(a0+324);
    v0 = v0 - 1;
    cnd_ = a1 == 0;
    ST32(v1+68, v0);
    if (cnd_) { goto L_088E3ED8; }
    goto L_088E3E9C;
L_088E3E9C:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088E3ED0; }
    goto L_088E3EA8;
L_088E3EA8:;
    v0 = s2 << 2;
    goto L_088E3EAC;
L_088E3EAC:;
    v0 = v0 + a1;
    s0 = LD32(v0);
    s2 = s2 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088E3F3C; }
    goto L_088E3EC0;
L_088E3EC0:;
    v0 = LD32(v1);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v0 = s2 << 2;
    if (cnd_) { goto L_088E3EAC; }
    goto L_088E3ED0;
L_088E3ED0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E3F2C; }
    goto L_088E3ED8;
L_088E3ED8:;
    a0 = s1 + 0;
    { rv_t r_ = func_088E5ACC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3EE0;
L_088E3EE0:;
    v0 = LD32(s1+220);
    s0 = (u32)-1;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+228); goto L_088E3EFC; }
    goto L_088E3EF0;
L_088E3EF0:;
    a0 = s1 + 220;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3EF8;
L_088E3EF8:;
    v0 = LD32(s1+228);
    goto L_088E3EFC;
L_088E3EFC:;
    cnd_ = v0 == s0;
    if (cnd_) { goto L_088E3F0C; }
    goto L_088E3F04;
L_088E3F04:;
    a0 = s1 + 228;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3F0C;
L_088E3F0C:;
    a0 = s1 + 0;
    v0 = func_088E25D4(a0);
    goto L_088E3F14;
L_088E3F14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E3F2C:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E3F34;
L_088E3F34:;
    goto L_088E3ED8;
L_088E3F3C:;
    func_088E65C8(a0, t1, t2, t3);
    goto L_088E3F44;
L_088E3F44:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E3F4C;
L_088E3F4C:;
    a1 = LD32(s1+324);
    v1 = LD32(s1+136);
    goto L_088E3EC0;
}

/* 088E3F58 */
rv_t func_088E3F58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E3F58:;
    sp = sp - 16;
    v0 = D_08AF7D60 - (32096);
    v0 = v0 + 32096;
    s1 = a0 + 0;
    v1 = LD32(a0+136);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088E3FD4; }
    goto L_088E3F84;
L_088E3F84:;
    v0 = LD32(v1+68);
    a1 = LD32(a0+324);
    v0 = v0 - 1;
    cnd_ = a1 == 0;
    ST32(v1+68, v0);
    if (cnd_) { goto L_088E3FD4; }
    goto L_088E3F98;
L_088E3F98:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088E3FCC; }
    goto L_088E3FA4;
L_088E3FA4:;
    v0 = s2 << 2;
    goto L_088E3FA8;
L_088E3FA8:;
    v0 = v0 + a1;
    s0 = LD32(v0);
    s2 = s2 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088E4040; }
    goto L_088E3FBC;
L_088E3FBC:;
    v0 = LD32(v1);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v0 = s2 << 2;
    if (cnd_) { goto L_088E3FA8; }
    goto L_088E3FCC;
L_088E3FCC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E4030; }
    goto L_088E3FD4;
L_088E3FD4:;
    a0 = s1 + 0;
    { rv_t r_ = func_088E5ACC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3FDC;
L_088E3FDC:;
    v0 = LD32(s1+220);
    s0 = (u32)-1;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+228); goto L_088E3FF8; }
    goto L_088E3FEC;
L_088E3FEC:;
    a0 = s1 + 220;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E3FF4;
L_088E3FF4:;
    v0 = LD32(s1+228);
    goto L_088E3FF8;
L_088E3FF8:;
    cnd_ = v0 == s0;
    if (cnd_) { goto L_088E4008; }
    goto L_088E4000;
L_088E4000:;
    a0 = s1 + 228;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4008;
L_088E4008:;
    a0 = s1 + 0;
    v0 = func_088E25D4(a0);
    goto L_088E4010;
L_088E4010:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E4018;
L_088E4018:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E4030:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E4038;
L_088E4038:;
    goto L_088E3FD4;
L_088E4040:;
    func_088E65C8(a0, t1, t2, t3);
    goto L_088E4048;
L_088E4048:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E4050;
L_088E4050:;
    a1 = LD32(s1+324);
    v1 = LD32(s1+136);
    goto L_088E3FBC;
}

/* 088E405C */
rv_t func_088E405C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088E405C:;
    sp = sp - 80;
    v0 = LD32(a0+324);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088E4324; }
    goto L_088E4088;
L_088E4088:;
    v0 = LD32(a0+136);
    f2 = BITSF(0);
    f0 = BITSF(LD32(v0+52));
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_088E4328; }
    goto L_088E40A4;
L_088E40A4:;
    v0 = LD32(a0+320);
    v1 = D_08B285A0 - (-31328);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    f21 = BITSF(LD32(v1-31328));
    if (cnd_) { goto L_088E4258; }
    goto L_088E40B8;
L_088E40B8:;
    f0 = BITSF(LD32(a0+316));
    f1 = BITSF(LD32(a0+312));
    f0 = f0 + f21;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(a0+316, FBITS(f0));
    if (cnd_) { goto L_088E4258; }
    goto L_088E40D4;
L_088E40D4:;
    v1 = LD32(a0+264);
    f3 = BITSF(LD32(a0+140));
    a1 = LD32(a0+268);
    a2 = LD32(a0+272);
    a3 = LD32(a0+276);
    t0 = LD32(a0+280);
    t1 = LD32(a0+284);
    v0 = a0 + 264;
    ST32(a0+288, v1);
    a0 = a0 + 140;
    v1 = s2 + 288;
    ST32(s2+316, FBITS(f2));
    t2 = 0 + 0;
    ST32(s2+292, a1);
    ST32(s2+296, a2);
    ST32(s2+300, a3);
    ST32(s2+304, t0);
    ST32(s2+308, t1);
    ST32(s2+264, FBITS(f3));
    ST32(v0+4, FBITS(f3));
    f2 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(s2+288));
    ST32(v0+12, FBITS(f2));
    fcc = FCMP(f3, f0, 2);
    ST32(v0+8, FBITS(f2));
    f1 = BITSF(LD32(a0+8));
    ST32(v0+16, FBITS(f1));
    cnd_ = !fcc;
    ST32(v0+20, FBITS(f1));
    if (cnd_) { goto L_088E41AC; }
    goto L_088E4148;
L_088E4148:;
    f0 = BITSF(LD32(v1+8));
    fcc = FCMP(f2, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+288); goto L_088E41B0; }
    goto L_088E415C;
L_088E415C:;
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+288); goto L_088E41B0; }
    goto L_088E4170;
L_088E4170:;
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f3, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+288); goto L_088E41B0; }
    goto L_088E4184;
L_088E4184:;
    f0 = BITSF(LD32(v1+12));
    fcc = FCMP(f2, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+288); goto L_088E41B0; }
    goto L_088E4198;
L_088E4198:;
    f0 = BITSF(LD32(v1+20));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { t2 = 1; goto L_088E41AC; }
    goto L_088E41AC;
L_088E41AC:;
    v0 = LD32(s2+288);
    goto L_088E41B0;
L_088E41B0:;
    v1 = LD32(s2+292);
    a2 = LD32(s2+296);
    a3 = LD32(s2+300);
    t0 = LD32(s2+304);
    t1 = LD32(s2+308);
    ST32(sp, v0);
    t2 = t2 ^ 0x1;
    a0 = s2 + 0;
    ST32(sp+4, v1);
    a1 = sp + 0;
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    f5 = BITSF(LD32(sp));
    f0 = BITSF(LD32(s2+240));
    f1 = BITSF(LD32(s2+248));
    f4 = BITSF(LD32(sp+8));
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(s2+256));
    f7 = BITSF(LD32(s2+244));
    f8 = BITSF(LD32(s2+252));
    f9 = BITSF(LD32(s2+260));
    f5 = f5 + f0;
    f4 = f4 + f1;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+12));
    v0 = LD32(s2+320);
    f3 = f3 + f6;
    f2 = f2 + f7;
    f1 = f1 + f8;
    f0 = f0 + f9;
    v0 = (v0 & ~(0x1u << 3)) | ((t2 & 0x1) << 3);
    ST32(s2+320, v0);
    ST32(sp, FBITS(f5));
    ST32(sp+8, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    { rv_t r_ = func_088E27AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4258;
L_088E4258:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088E2A30(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4264;
L_088E4264:;
    a0 = LD32(s2+136);
    f1 = BITSF(LD32(s2+236));
    v1 = D_08AECD74 - (-12940);
    f0 = BITSF(LD32(a0+52));
    f20 = BITSF(LD32(v1-12940));
    s3 = 0 < v0;
    f0 = f21 / f0;
    f1 = f1 + f0;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    ST32(s2+236, FBITS(f1));
    if (cnd_) { goto L_088E42B4; }
    goto L_088E4294;
L_088E4294:;
    v0 = LD32(a0+64);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088E42B0; }
    goto L_088E42A4;
L_088E42A4:;
    v0 = LD32(s2+4);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088E4434; }
    goto L_088E42B0;
L_088E42B0:;
    ST32(s2+4, v0);
    goto L_088E42B4;
L_088E42B4:;
    a0 = s2 + 0;
    f0 = func_088E5B50(a0, 0, 0, 0);
    goto L_088E42BC;
L_088E42BC:;
    v1 = LD32(s2+136);
    f0 = BITSF(LD32(s2+236));
    s1 = 0 + 0;
    f1 = BITSF(LD32(v1+52));
    v0 = LD32(v1);
    s0 = LD32(v1+4);
    cnd_ = v0 == 0;
    f20 = f0 * f1;
    if (cnd_) { goto L_088E4308; }
    goto L_088E42DC;
L_088E42DC:;
    f0 = BITSF(LD32(s0+64));
    goto L_088E42E0;
L_088E42E0:;
    a0 = s1 << 2;
    s0 = s0 + 104;
    fcc = FCMP(f0, f20, 12);
    s1 = s1 + 1;
    cnd_ = fcc;
    a1 = s3 + 0;
    if (cnd_) { goto L_088E441C; }
    goto L_088E42F8;
L_088E42F8:;
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+64)); goto L_088E42E0; }
    goto L_088E4308;
L_088E4308:;
    f12 = f21;
    a0 = s2 + 0;
    f0 = func_088E5F54(a0, 0, f12);
    goto L_088E4314;
L_088E4314:;
    v1 = LD32(s2+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s2+136); goto L_088E4348; }
    goto L_088E4324;
L_088E4324:;
    goto L_088E4328;
L_088E4328:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088E4348:;
    v1 = LD32(v1+64);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    s0 = 1;
    if (cnd_) { goto L_088E4378; }
    goto L_088E4358;
L_088E4358:;
    a0 = LD32(s2+220);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = v1 & 0x80;
    if (cnd_) { goto L_088E4378; }
    goto L_088E4368;
L_088E4368:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E4408; }
    goto L_088E4370;
L_088E4370:;
    a0 = s2 + 220;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4378;
L_088E4378:;
    a0 = LD32(s2+228);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088E43A0; }
    goto L_088E4388;
L_088E4388:;
    { u64 r_ = func_088DFF84(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E4390;
L_088E4390:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E43F4; }
    goto L_088E4398;
L_088E4398:;
    a0 = s2 + 228;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E43A0;
L_088E43A0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088E4328; }
    goto L_088E43A8;
L_088E43A8:;
    v0 = LD32(s2+136);
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088E43DC; }
    goto L_088E43B8;
L_088E43B8:;
    a1 = LD32(s2+324);
    a3 = v0 + 0;
    goto L_088E43C0;
L_088E43C0:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < a3;
    v1 = LD32(v0+100);
    a1 = a1 + 4;
    cnd_ = a0 != 0;
    if (v1 != 0) s0 = 0;
    if (cnd_) { goto L_088E43C0; }
    goto L_088E43DC;
L_088E43DC:;
    cnd_ = s0 == 0;
    if (cnd_) {  goto L_088E4328; }
    goto L_088E43E4;
L_088E43E4:;
    a0 = s2 + 0;
    { rv_t r_ = func_088E576C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E43EC;
L_088E43EC:;
    goto L_088E4328;
L_088E43F4:;
    a0 = LD32(s2+228);
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E43FC;
L_088E43FC:;
    v0 = v0 ^ 0x1;
    s0 = v0 & 0xff;
    goto L_088E43A0;
L_088E4408:;
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E4410;
L_088E4410:;
    v0 = v0 ^ 0x1;
    s0 = v0 & 0xff;
    goto L_088E4378;
L_088E441C:;
    v0 = LD32(s2+324);
    v0 = a0 + v0;
    a0 = LD32(v0);
    f0 = func_088E6638(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088E442C;
L_088E442C:;
    v1 = LD32(s2+136);
    goto L_088E42F8;
L_088E4434:;
    a0 = s2 + 0;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E443C;
L_088E443C:;
    v0 = LD32(s2+136);
    f0 = BITSF(LD32(v0+52));
    f0 = f20 / f0;
    f0 = f21 * f0;
    ST32(s2+236, FBITS(f0));
    goto L_088E42B4;
}

/* 088E4454 */
rv_t func_088E4454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E4454:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+324);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088E44B8; }
    goto L_088E4474;
L_088E4474:;
    v1 = LD32(s1+136);
    v0 = LD32(v1);
    s0 = v0 - 1;
    cnd_ = (s32)s0 < 0;
    if (cnd_) {  goto L_088E44BC; }
    goto L_088E4488;
L_088E4488:;
    v0 = s0 << 2;
    a1 = LD32(v1+64);
    v0 = v0 + a0;
    a0 = LD32(v0);
    s0 = s0 - 1;
    a1 = (a1 >> 2) & 0x1;
    { rv_t r_ = func_088E6CD4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E44A4;
L_088E44A4:;
    cnd_ = (s32)s0 < 0;
    if (cnd_) { goto L_088E44B8; }
    goto L_088E44AC;
L_088E44AC:;
    a0 = LD32(s1+324);
    v1 = LD32(s1+136);
    goto L_088E4488;
L_088E44B8:;
    goto L_088E44BC;
L_088E44BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E44C8 */
rv_t func_088E44C8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E44C8:;
    sp = sp - 16;
    s2 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_088E4554; }
    goto L_088E44E8;
L_088E44E8:;
    v0 = 1;
    ST32(a0+4, v0);
    a0 = LD32(s1+324);
    goto L_088E44F4;
L_088E44F4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088E4540; }
    goto L_088E44FC;
L_088E44FC:;
    v1 = LD32(s1+136);
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088E4540; }
    goto L_088E450C;
L_088E450C:;
    v0 = s0 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    a1 = s2 + 0;
    s0 = s0 + 1;
    f0 = func_088E6E54(a0, a1);
    goto L_088E4524;
L_088E4524:;
    v1 = LD32(s1+136);
    v0 = LD32(v1);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E4540; }
    goto L_088E4538;
L_088E4538:;
    a0 = LD32(s1+324);
    goto L_088E450C;
L_088E4540:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E4554:;
    { rv_t r_ = func_088E576C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E455C;
L_088E455C:;
    a0 = LD32(s1+324);
    goto L_088E44F4;
}

/* 088E4564 */
rv_t func_088E4564(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_088E4564:;
    sp = sp - 176;
    t0 = a0 + 0;
    t5 = 0 + 0;
    v1 = LD32(a0+136);
    ST32(a0+236, 0);
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    t1 = LD32(v1+4);
    if (cnd_) { goto L_088E4738; }
    goto L_088E4588;
L_088E4588:;
    t2 = LD32(a0+324);
    t4 = a0 + 140;
    a2 = a0 + 152;
    goto L_088E4594;
L_088E4594:;
    t3 = t5 << 2;
    v0 = t3 + t2;
    a3 = LD32(v0);
    ST32(a3+116, 0);
    v0 = LD32(t0+320);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = t1 + 4;
    if (cnd_) { goto L_088E474C; }
    goto L_088E45B4;
L_088E45B4:;
    f2 = BITSF(LD32(t0+140));
    f0 = BITSF(LD32(t4+4));
    f1 = BITSF(LD32(t4+8));
    v1 = a3 + 4;
    ST32(v1+4, FBITS(f0));
    v0 = a3 + 16;
    ST32(v1+8, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    f1 = BITSF(LD32(t0+152));
    f2 = BITSF(LD32(a2+4));
    f3 = BITSF(LD32(a2+8));
    f4 = BITSF(LD32(a2+12));
    f5 = BITSF(LD32(a2+16));
    f6 = BITSF(LD32(a2+20));
    f7 = BITSF(LD32(a2+24));
    f8 = BITSF(LD32(a2+28));
    f0 = BITSF(LD32(a2+32));
    ST32(a3+16, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+12, FBITS(f4));
    ST32(v0+16, FBITS(f5));
    ST32(v0+20, FBITS(f6));
    ST32(v0+24, FBITS(f7));
    ST32(v0+28, FBITS(f8));
    goto L_088E461C;
L_088E461C:;
    v0 = LD32(t0+324);
    v1 = t3 + v0;
    a3 = LD32(v1);
    t2 = v0 + 0;
    v0 = LD32(a3+104);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(t0+136); goto L_088E4724; }
    goto L_088E4638;
L_088E4638:;
    v0 = LD32(v0+228);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(t0+136); goto L_088E4724; }
    goto L_088E4648;
L_088E4648:;
    v1 = LD32(t0+152);
    v0 = LD32(a2+4);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {v[48]=BITSF(v1);}
    v1 = LD32(a2+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(a2+12);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(a2+16);
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {v[48]=BITSF(v1);}
    v1 = LD32(a2+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(a2+24);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(a2+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    a1 = t1 + 52;
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(a2+32);
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(t1+52);
    v1 = LD32(a1+4);
    a0 = LD32(a1+8);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v0);}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = a3 + 52;
    {v1=FBITS(v[17]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    ST32(a3+52, FBITS(f2));
    ST32(v0+4, v1);
    ST32(v0+8, FBITS(f3));
    v1 = LD32(t0+136);
    goto L_088E4724;
L_088E4724:;
    t5 = t5 + 1;
    v0 = LD32(v1);
    v0 = t5 < v0;
    cnd_ = v0 != 0;
    t1 = t1 + 104;
    if (cnd_) { goto L_088E4594; }
    goto L_088E4738;
L_088E4738:;
    a0 = t0 + 0;
    { rv_t r_ = func_088E5398(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4740;
L_088E4740:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_088E474C:;
    v1 = LD32(t0+152);
    v0 = LD32(a2+4);
    f4 = BITSF(LD32(t0+140));
    f5 = BITSF(LD32(t4+4));
    f6 = BITSF(LD32(t4+8));
    a0 = LD32(a1+8);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    v1 = LD32(a2+8);
    {v[49]=BITSF(v0);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = LD32(a2+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a2+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {v[48]=BITSF(v1);}
    v1 = LD32(a2+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(a2+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(a2+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(a2+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(t1+4);
    {v[34]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = LD32(a1+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    v1 = a3 + 4;
    ST32(sp+36, FBITS(f0));
    v0 = a3 + 16;
    ST32(sp+20, FBITS(f0));
    ST32(sp+32, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    ST32(a3+4, FBITS(f4));
    ST32(v1+4, FBITS(f5));
    ST32(sp+8, FBITS(f6));
    ST32(v1+8, FBITS(f6));
    {v[112]=BITSF(LD32(t1+(16)));}
    {v[113]=BITSF(LD32(t1+(20)));}
    {v[114]=BITSF(LD32(t1+(24)));}
    {v[116]=BITSF(LD32(t1+(28)));}
    {v[117]=BITSF(LD32(t1+(32)));}
    {v[118]=BITSF(LD32(t1+(36)));}
    {v[120]=BITSF(LD32(t1+(40)));}
    {v[121]=BITSF(LD32(t1+(44)));}
    {v[122]=BITSF(LD32(t1+(48)));}
    {v[96]=BITSF(LD32(t0+(152)));}
    {v[97]=BITSF(LD32(t0+(156)));}
    {v[98]=BITSF(LD32(t0+(160)));}
    {v[100]=BITSF(LD32(t0+(164)));}
    {v[101]=BITSF(LD32(t0+(168)));}
    {v[102]=BITSF(LD32(t0+(172)));}
    {v[104]=BITSF(LD32(t0+(176)));}
    {v[105]=BITSF(LD32(t0+(180)));}
    {v[106]=BITSF(LD32(t0+(184)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(48),FBITS(v[80]));}
    {ST32(sp+(52),FBITS(v[81]));}
    {ST32(sp+(56),FBITS(v[82]));}
    {ST32(sp+(60),FBITS(v[84]));}
    {ST32(sp+(64),FBITS(v[85]));}
    {ST32(sp+(68),FBITS(v[86]));}
    {ST32(sp+(72),FBITS(v[88]));}
    {ST32(sp+(76),FBITS(v[89]));}
    {ST32(sp+(80),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    ST32(a3+16, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    f0 = BITSF(LD32(sp+56));
    f1 = BITSF(LD32(sp+80));
    ST32(v0+8, FBITS(f0));
    f0 = BITSF(LD32(sp+60));
    ST32(v0+32, FBITS(f1));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+64));
    f0 = BITSF(LD32(sp+68));
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+72));
    f0 = BITSF(LD32(sp+76));
    ST32(v0+24, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    goto L_088E461C;
}

/* 088E48F4 */
rv_t func_088E48F4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E48F4:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    { rv_t r_ = func_088E4934(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4904;
L_088E4904:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E4910 */
rv_t func_088E4910(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E4910:;
    a2 = a2 & 0xff;
    sp = sp - 16;
    a3 = a2 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4934(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4928;
L_088E4928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E4934 */
rv_t func_088E4934(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_088E4934:;
    sp = sp - 544;
    s5 = a3 & 0xff;
    s3 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+136);
    cnd_ = v0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_088E4D10; }
    goto L_088E496C;
L_088E496C:;
    f2 = BITSF(LD32(a0+140));
    f8 = BITSF(LD32(a1));
    fcc = FCMP(f2, f8, 2);
    cnd_ = !fcc;
    s4 = a0 + 140;
    if (cnd_) { goto L_088E49B4; }
    goto L_088E4984;
L_088E4984:;
    f1 = BITSF(LD32(s4+4));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U16(s1+20); goto L_088E49B8; }
    goto L_088E499C;
L_088E499C:;
    f1 = BITSF(LD32(s4+8));
    f0 = BITSF(LD32(a1+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { a2 = LD32(s1+324); goto L_088E4AF4; }
    goto L_088E49B4;
L_088E49B4:;
    v0 = LD_U16(s1+20);
    goto L_088E49B8;
L_088E49B8:;
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+240); goto L_088E513C; }
    goto L_088E49C4;
L_088E49C4:;
    v1 = LD32(s1+320);
    a0 = s1 + 264;
    v0 = v1 & 0x8;
    cnd_ = v0 != 0;
    s2 = s1 + 288;
    if (cnd_) { goto L_088E4A28; }
    goto L_088E49D8;
L_088E49D8:;
    v0 = v1 | 0x8;
    ST32(s1+320, v0);
    ST32(s1+264, FBITS(f2));
    ST32(a0+4, FBITS(f2));
    f0 = BITSF(LD32(s4+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0+12, FBITS(f0));
    f1 = BITSF(LD32(s4+8));
    ST32(a0+16, FBITS(f1));
    ST32(a0+20, FBITS(f1));
    f0 = BITSF(LD32(s1+140));
    ST32(s2+4, FBITS(f0));
    ST32(s1+288, FBITS(f0));
    f1 = BITSF(LD32(s4+4));
    ST32(s2+8, FBITS(f1));
    ST32(s2+12, FBITS(f1));
    f0 = BITSF(LD32(s4+8));
    ST32(s2+16, FBITS(f0));
    ST32(s2+20, FBITS(f0));
    ST32(s1+316, 0);
    goto L_088E4A28;
L_088E4A28:;
    a1 = s3 + 0;
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    f0 = func_08AA0F30(a0, a1);
    goto L_088E4A40;
L_088E4A40:;
    v0 = LD32(s1+264);
    v1 = LD32(s1+268);
    a2 = LD32(s1+272);
    a3 = LD32(s1+276);
    t0 = LD32(s1+280);
    t1 = LD32(s1+284);
    a1 = s2 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    f0 = func_08AA1680(a0, a1);
    goto L_088E4A7C;
L_088E4A7C:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(s1+240));
    f1 = BITSF(LD32(s1+248));
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+8));
    f6 = BITSF(LD32(s1+256));
    f7 = BITSF(LD32(s1+244));
    f8 = BITSF(LD32(s1+252));
    f9 = BITSF(LD32(s1+260));
    f5 = f5 + f0;
    f4 = f4 + f1;
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(sp+20));
    f3 = f3 + f6;
    f2 = f2 + f7;
    f1 = f1 + f8;
    f0 = f0 + f9;
    ST32(sp, FBITS(f5));
    a1 = sp + 0;
    ST32(sp+8, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    goto L_088E4AE4;
L_088E4AE4:;
    { rv_t r_ = func_088E27AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E4AEC;
L_088E4AEC:;
    {u32 a_=sp+(496);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a2 = LD32(s1+324);
    goto L_088E4AF4;
L_088E4AF4:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088E4C90; }
    goto L_088E4AFC;
L_088E4AFC:;
    t1 = LD32(s1+136);
    t2 = 0 + 0;
    v0 = LD32(t1);
    cnd_ = v0 == 0;
    v1 = LD32(t1+4);
    if (cnd_) { goto L_088E4C90; }
    goto L_088E4B10;
L_088E4B10:;
    a3 = v1 + 4;
    t3 = s1 + 152;
    goto L_088E4B18;
L_088E4B18:;
    v0 = LD32(s1+320);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = t2 << 2;
    if (cnd_) { goto L_088E4E78; }
    goto L_088E4B28;
L_088E4B28:;
    v0 = a1 + a2;
    v1 = LD32(v0);
    f1 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    v0 = v1 + 4;
    ST32(v1+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    cnd_ = s0 == 0;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_088E4BA4; }
    goto L_088E4B50;
L_088E4B50:;
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0+12));
    f5 = BITSF(LD32(s0+16));
    f6 = BITSF(LD32(s0+20));
    f7 = BITSF(LD32(s0+24));
    f8 = BITSF(LD32(s0+28));
    f0 = BITSF(LD32(s0+32));
    v0 = v1 + 16;
    ST32(v1+16, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+12, FBITS(f4));
    ST32(v0+16, FBITS(f5));
    ST32(v0+20, FBITS(f6));
    ST32(v0+24, FBITS(f7));
    ST32(v0+28, FBITS(f8));
    goto L_088E4B9C;
L_088E4B9C:;
    t1 = LD32(s1+136);
    a2 = LD32(s1+324);
    goto L_088E4BA4;
L_088E4BA4:;
    v0 = a1 + a2;
    a0 = LD32(v0);
    v0 = LD32(a0+104);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088E4BCC; }
    goto L_088E4BB8;
L_088E4BB8:;
    v1 = LD32(v0+228);
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    v0 = v1 & 0x4;
    if (cnd_) { goto L_088E4D94; }
    goto L_088E4BC8;
L_088E4BC8:;
    t0 = 1;
    goto L_088E4BCC;
L_088E4BCC:;
    v0 = LD_U16(s1+20);
    goto L_088E4BD0;
L_088E4BD0:;
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = 1; goto L_088E4BEC; }
    goto L_088E4BDC;
L_088E4BDC:;
    v0 = LD32(t1+64);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = 1; goto L_088E4BEC; }
    goto L_088E4BEC;
L_088E4BEC:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(t1); goto L_088E4C80; }
    goto L_088E4BF4;
L_088E4BF4:;
    v0 = a1 + a2;
    f1 = BITSF(LD32(s3));
    f5 = BITSF(LD32(s1+140));
    f2 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s4+4));
    f0 = BITSF(LD32(s3+8));
    f3 = BITSF(LD32(s4+8));
    v0 = LD32(v0);
    f1 = f1 - f5;
    f2 = f2 - f4;
    f0 = f0 - f3;
    a1 = LD32(v0+100);
    ST32(sp+64, FBITS(f1));
    v1 = 0 + 0;
    ST32(sp+68, FBITS(f2));
    cnd_ = a1 == 0;
    ST32(sp+72, FBITS(f0));
    if (cnd_) { goto L_088E4C7C; }
    goto L_088E4C38;
L_088E4C38:;
    a0 = LD32(v0+96);
    goto L_088E4C3C;
L_088E4C3C:;
    f2 = BITSF(LD32(a0));
    f0 = BITSF(LD32(sp+64));
    f3 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(sp+72));
    v1 = v1 + 1;
    f3 = f3 + f1;
    f4 = f4 + f0;
    v0 = v1 < a1;
    ST32(a0, FBITS(f2));
    ST32(a0+4, FBITS(f3));
    ST32(a0+8, FBITS(f4));
    cnd_ = v0 != 0;
    a0 = a0 + 32;
    if (cnd_) { goto L_088E4C3C; }
    goto L_088E4C7C;
L_088E4C7C:;
    v0 = LD32(t1);
    goto L_088E4C80;
L_088E4C80:;
    t2 = t2 + 1;
    v0 = t2 < v0;
    cnd_ = v0 != 0;
    a3 = a3 + 104;
    if (cnd_) { goto L_088E4B18; }
    goto L_088E4C90;
L_088E4C90:;
    cnd_ = s5 == 0;
    if (cnd_) { v0 = LD_U16(s1+20); goto L_088E4D34; }
    goto L_088E4C98;
L_088E4C98:;
    v0 = s1 + 8;
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(s1+8, 0);
    goto L_088E4CA8;
L_088E4CA8:;
    f0 = BITSF(LD32(s3+8));
    goto L_088E4CAC;
L_088E4CAC:;
    f1 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    ST32(s4+8, FBITS(f0));
    ST32(s1+140, FBITS(f1));
    cnd_ = s0 == 0;
    ST32(s4+4, FBITS(f2));
    if (cnd_) { goto L_088E4D10; }
    goto L_088E4CC4;
L_088E4CC4:;
    f8 = BITSF(LD32(s0+32));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+12));
    f4 = BITSF(LD32(s0+16));
    f5 = BITSF(LD32(s0+20));
    f6 = BITSF(LD32(s0+24));
    f7 = BITSF(LD32(s0+28));
    v0 = s1 + 152;
    ST32(s1+152, FBITS(f0));
    ST32(v0+32, FBITS(f8));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    goto L_088E4D10;
L_088E4D10:;
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
L_088E4D34:;
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(s3+8));
    if (cnd_) { goto L_088E4CAC; }
    goto L_088E4D40;
L_088E4D40:;
    v1 = LD32(s1+136);
    v0 = LD32(v1+64);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E4CAC; }
    goto L_088E4D54;
L_088E4D54:;
    f1 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f5 = BITSF(LD32(s4+4));
    f3 = BITSF(LD32(s4+8));
    f4 = BITSF(LD32(s1+140));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    v0 = s1 + 8;
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    ST32(sp+64, FBITS(f1));
    ST32(sp+72, FBITS(f0));
    goto L_088E4CA8;
L_088E4D94:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s1+20); goto L_088E4BD0; }
    goto L_088E4D9C;
L_088E4D9C:;
    cnd_ = s0 == 0;
    {u32 a_=sp+(400);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E4BCC; }
    goto L_088E4DA4;
L_088E4DA4:;
    v1 = LD32(s0);
    v0 = LD32(s0+4);
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+12);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s0+16);
    {u32 a_=sp+(384);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+24);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(s0+32);
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(336);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(a3+48);
    v0 = LD32(a3+52);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(320);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(a3+56);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = a0 + 52;
    {v1=FBITS(v[17]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f3));
    ST32(a0+52, FBITS(f2));
    ST32(v0+4, v1);
    ST32(v0+8, FBITS(f3));
    goto L_088E4BCC;
L_088E4E78:;
    cnd_ = s0 == 0;
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E5030; }
    goto L_088E4E80;
L_088E4E80:;
    v1 = LD32(s0);
    v0 = LD32(s0+4);
    f4 = BITSF(LD32(s3));
    f5 = BITSF(LD32(s3+4));
    f6 = BITSF(LD32(s3+8));
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+8);
    {v[49]=BITSF(v0);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(s0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(s0+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(s0+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(a3);
    {v[34]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = LD32(a3+4);
    v0 = LD32(a3+8);
    {v[21]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    a1 = t2 << 2;
    a0 = a1 + a2;
    v1 = LD32(a0);
    f5 = f0 + f5;
    f4 = f2 + f4;
    f6 = f3 + f6;
    a0 = v1 + 4;
    ST32(sp+68, FBITS(f0));
    v0 = v1 + 16;
    ST32(sp+52, FBITS(f0));
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(v1+4, FBITS(f4));
    ST32(a0+4, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(a0+8, FBITS(f6));
    {v[112]=BITSF(LD32(a3+(12)));}
    {v[113]=BITSF(LD32(a3+(16)));}
    {v[114]=BITSF(LD32(a3+(20)));}
    {v[116]=BITSF(LD32(a3+(24)));}
    {v[117]=BITSF(LD32(a3+(28)));}
    {v[118]=BITSF(LD32(a3+(32)));}
    {v[120]=BITSF(LD32(a3+(36)));}
    {v[121]=BITSF(LD32(a3+(40)));}
    {v[122]=BITSF(LD32(a3+(44)));}
    {v[96]=BITSF(LD32(s0+(0)));}
    {v[97]=BITSF(LD32(s0+(4)));}
    {v[98]=BITSF(LD32(s0+(8)));}
    {v[100]=BITSF(LD32(s0+(12)));}
    {v[101]=BITSF(LD32(s0+(16)));}
    {v[102]=BITSF(LD32(s0+(20)));}
    {v[104]=BITSF(LD32(s0+(24)));}
    {v[105]=BITSF(LD32(s0+(28)));}
    {v[106]=BITSF(LD32(s0+(32)));}
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
    ST32(v1+16, FBITS(f0));
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+88));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+112));
    f0 = BITSF(LD32(sp+92));
    ST32(v0+32, FBITS(f1));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+96));
    f0 = BITSF(LD32(sp+100));
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+104));
    f0 = BITSF(LD32(sp+108));
    ST32(v0+24, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    goto L_088E4B9C;
L_088E5030:;
    v1 = LD32(s1+152);
    v0 = LD32(t3+4);
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(t3+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(t3+12);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(t3+16);
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    a1 = t2 << 2;
    {v[48]=BITSF(v1);}
    v1 = LD32(t3+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(t3+24);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(t3+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(192);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(t3+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(a3+4);
    {v[34]=BITSF(v1);}
    v1 = LD32(a3);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {v[20]=BITSF(v1);}
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[21]=BITSF(v0);}
    v0 = a1 + a2;
    f4 = BITSF(LD32(s3));
    v1 = LD32(a3+8);
    f5 = BITSF(LD32(s3+4));
    f6 = BITSF(LD32(s3+8));
    {v[22]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(v0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    v0 = v1 + 4;
    ST32(sp+32, FBITS(f2));
    ST32(sp+48, FBITS(f2));
    ST32(sp+64, FBITS(f4));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f3));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f3));
    ST32(v1+4, FBITS(f4));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f6));
    ST32(v0+4, FBITS(f5));
    ST32(v0+8, FBITS(f6));
    goto L_088E4BA4;
L_088E513C:;
    v1 = LD32(s1+244);
    a2 = LD32(s1+248);
    a3 = LD32(s1+252);
    t0 = LD32(s1+256);
    t1 = LD32(s1+260);
    ST32(sp, v0);
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp+4, v1);
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+8, a2);
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    f3 = BITSF(LD32(sp));
    f6 = BITSF(LD32(s3+4));
    f7 = BITSF(LD32(s3+8));
    f4 = BITSF(LD32(sp+8));
    f5 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+20));
    f3 = f3 + f8;
    f4 = f4 + f6;
    f5 = f5 + f7;
    f2 = f2 + f8;
    f0 = f0 + f6;
    f1 = f1 + f7;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    goto L_088E4AE4;
}

/* 088E51D4 */
float func_088E51D4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_088E51D4:;
    ST32(a0+236, FBITS(f12));
    a1 = 0 + 0;
    v0 = LD32(a0+136);
    f0 = BITSF(LD32(v0+52));
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    f12 = f12 * f0;
    if (cnd_) { goto L_088E5224; }
    goto L_088E51F0;
L_088E51F0:;
    v0 = D_08AECD78 - (-12936);
    f2 = BITSF(LD32(v0-12936));
    a0 = LD32(a0+324);
    f1 = BITSF(0);
    a2 = v1 + 0;
    goto L_088E5204;
L_088E5204:;
    v1 = LD32(a0);
    v0 = LD32(v1+104);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0+176)); goto L_088E522C; }
    goto L_088E5214;
L_088E5214:;
    a1 = a1 + 1;
    v0 = a1 < a2;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088E5204; }
    goto L_088E5224;
L_088E5224:;
    return f0;
L_088E522C:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(v1+116, FBITS(f2)); goto L_088E5214; }
    goto L_088E523C;
L_088E523C:;
    f0 = f2 / f0;
    f0 = f12 * f0;
    ST32(v1+116, FBITS(f0));
    goto L_088E5214;
}

/* 088E524C */
float func_088E524C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088E524C:;
    sp = sp - 64;
    a1 = LD32(a0+324);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E5384; }
    goto L_088E5268;
L_088E5268:;
    v0 = D_08AECD7C - (-12932);
    v1 = D_08AECD80 - (-12928);
    f0 = BITSF(LD32(v0-12932));
    f1 = BITSF(LD32(v1-12928));
    a0 = LD32(a0+136);
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f1));
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088E52D4; }
    goto L_088E52A0;
L_088E52A0:;
    v0 = s1 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    a1 = sp + 0;
    s1 = s1 + 1;
    func_088E7BC0(a0, a1);
    goto L_088E52B8;
L_088E52B8:;
    v1 = LD32(s0+136);
    v0 = LD32(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(sp+4);
    if (cnd_) { goto L_088E52D8; }
    goto L_088E52CC;
L_088E52CC:;
    a1 = LD32(s0+324);
    goto L_088E52A0;
L_088E52D4:;
    a0 = LD32(sp+4);
    goto L_088E52D8;
L_088E52D8:;
    v0 = LD32(sp);
    a2 = LD32(sp+8);
    a3 = LD32(sp+12);
    t0 = LD32(sp+16);
    t1 = LD32(sp+20);
    ST32(s0+240, v0);
    v1 = s0 + 140;
    v0 = s0 + 240;
    ST32(s0+244, a0);
    a1 = sp + 0;
    a0 = s0 + 0;
    ST32(s0+248, a2);
    ST32(s0+252, a3);
    ST32(s0+256, t0);
    ST32(s0+260, t1);
    f6 = BITSF(LD32(s0+140));
    f8 = BITSF(LD32(v1+8));
    f7 = BITSF(LD32(v1+4));
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f8 = BITSF(FBITS(f8) ^ 0x80000000u);
    f7 = BITSF(FBITS(f7) ^ 0x80000000u);
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+240));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v0+16));
    f2 = f2 + f6;
    f4 = f4 + f7;
    f0 = f0 + f8;
    f1 = f1 + f6;
    f3 = f3 + f7;
    f5 = f5 + f8;
    ST32(v0+16, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(s0+240, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+8, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    { rv_t r_ = func_088E27AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5384;
L_088E5384:;
    sp = sp + 64;
    return f0;
}

/* 088E5398 */
rv_t func_088E5398(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088E5398:;
    sp = sp - 48;
    s0 = a0 + 0;
    ST32(a0+4, 0);
    a3 = LD32(a0+136);
    v0 = LD32(a3+64);
    t0 = a3 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a2 = a3 + 0;
    if (cnd_) { goto L_088E5444; }
    goto L_088E53E0;
L_088E53E0:;
    v0 = LD_U16(a0+20);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a3+64); goto L_088E5448; }
    goto L_088E53F0;
L_088E53F0:;
    v0 = LD32(a3);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E5430; }
    goto L_088E5400;
L_088E5400:;
    a3 = v0 + 0;
    t1 = (u32)-1;
    v0 = LD32(a2+48);
    goto L_088E540C;
L_088E540C:;
    v1 = a0 << 2;
    cnd_ = v0 == t1;
    a2 = t0 + 0;
    if (cnd_) { goto L_088E5748; }
    goto L_088E5418;
L_088E5418:;
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(s0+324); goto L_088E574C; }
    goto L_088E5420;
L_088E5420:;
    a0 = a0 + 1;
    goto L_088E5424;
L_088E5424:;
    v0 = a0 < a3;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a2+48); goto L_088E540C; }
    goto L_088E5430;
L_088E5430:;
    a0 = s0 + 0;
    func_088E59C8(a0, a1, t1, t2, t3);
    goto L_088E5438;
L_088E5438:;
    a0 = s0 + 0;
    f0 = func_088E5B50(a0, 0, 0, 0);
    goto L_088E5440;
L_088E5440:;
    a3 = LD32(s0+136);
    goto L_088E5444;
L_088E5444:;
    v1 = LD32(a3+64);
    goto L_088E5448;
L_088E5448:;
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a3+60); goto L_088E5470; }
    goto L_088E5454;
L_088E5454:;
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    v1 = LD32(s0+220);
    if (cnd_) { goto L_088E572C; }
    goto L_088E5460;
L_088E5460:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088E56CC; }
    goto L_088E546C;
L_088E546C:;
    v0 = LD32(a3+60);
    goto L_088E5470;
L_088E5470:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a3+64); goto L_088E54B0; }
    goto L_088E5478;
L_088E5478:;
    a0 = LD32(s0+228);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = LD32(a3+60); goto L_088E5600; }
    goto L_088E5488;
L_088E5488:;
    { u64 r_ = func_088DFF84(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E5490;
L_088E5490:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E56B8; }
    goto L_088E5498;
L_088E5498:;
    a3 = LD32(s0+136);
    goto L_088E549C;
L_088E549C:;
    a0 = LD32(s0+228);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = LD32(a3+60); goto L_088E5600; }
    goto L_088E54AC;
L_088E54AC:;
    v1 = LD32(a3+64);
    goto L_088E54B0;
L_088E54B0:;
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E5594; }
    goto L_088E54BC;
L_088E54BC:;
    a0 = LD32(s0+320);
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E5598; }
    goto L_088E54CC;
L_088E54CC:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E559C; }
    goto L_088E54D8;
L_088E54D8:;
    v1 = LD32(s0+324);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E55A0; }
    goto L_088E54E4;
L_088E54E4:;
    v0 = LD32(a3);
    s2 = 0 + 0;
    cnd_ = v0 == 0;
    s3 = 0x20000u;
    if (cnd_) { goto L_088E5588; }
    goto L_088E54F4;
L_088E54F4:;
    v0 = s2 << 2;
    v0 = v0 + v1;
    s1 = LD32(v0);
    a0 = LD32(s1+104);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_088E5594; }
    goto L_088E550C;
L_088E550C:;
    v1 = LD32(s1+108);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088E5594; }
    goto L_088E5518;
L_088E5518:;
    v0 = LD32(s1+128);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088E5594; }
    goto L_088E5528;
L_088E5528:;
    v0 = LD32(v1+140);
    f22 = BITSF(LD32(a0+176));
    v0 = v0 & s3;
    cnd_ = v0 == 0;
    f21 = BITSF(LD32(v1+84));
    if (cnd_) { goto L_088E5544; }
    goto L_088E553C;
L_088E553C:;
    f0 = BITSF(LD32(v1+88));
    f21 = f21 + f0;
    goto L_088E5544;
L_088E5544:;
    f0 = BITSF(LD32(a3+52));
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_088E55EC; }
    goto L_088E5558;
L_088E5558:;
    f20 = BITSF(0);
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    f12 = f20;
    if (cnd_) { goto L_088E55C0; }
    goto L_088E556C;
L_088E556C:;
    v0 = LD32(a3);
    goto L_088E5570;
L_088E5570:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+320); goto L_088E5588; }
    goto L_088E5580;
L_088E5580:;
    v1 = LD32(s0+324);
    goto L_088E54F4;
L_088E5588:;
    a0 = (a0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s0+320, a0);
    goto L_088E5594;
L_088E5594:;
    goto L_088E5598;
L_088E5598:;
    goto L_088E559C;
L_088E559C:;
    goto L_088E55A0;
L_088E55A0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088E55BC:;
    a0 = s1 + 0;
    goto L_088E55C0;
L_088E55C0:;
    f13 = f22;
    { rv_t r_ = func_088E8400(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E55C8;
L_088E55C8:;
    a3 = LD32(s0+136);
    f0 = BITSF(LD32(a3+52));
    f20 = f20 + f0;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    f12 = f20;
    if (cnd_) { goto L_088E55BC; }
    goto L_088E55E4;
L_088E55E4:;
    v0 = LD32(a3);
    goto L_088E5570;
L_088E55EC:;
    f12 = BITSF(0);
    f13 = f21;
    { rv_t r_ = func_088E8400(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E55F8;
L_088E55F8:;
    a3 = LD32(s0+136);
    goto L_088E556C;
L_088E5600:;
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E560C;
L_088E560C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088E567C; }
    goto L_088E5614;
L_088E5614:;
    v0 = D_08B309FC - (2556);
    a1 = LD32(v0+2556);
    s4 = LD_U8(s1+72);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E563C; }
    goto L_088E5628;
L_088E5628:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_088E563C;
L_088E563C:;
    v0 = D_08B30A04 - (2564);
    v1 = LD32(v0+2564);
    cnd_ = s4 == 0;
    a0 = v1 - a0;
    if (cnd_) { goto L_088E56AC; }
    goto L_088E564C;
L_088E564C:;
    v1 = D_08AD89E4 - (-30236);
    v0 = LD32(v1-30236);
    goto L_088E5654;
L_088E5654:;
    f12 = BITSF(LD32(s1+84));
    s2 = s0 + 140;
    v0 = (s32)v0 < (s32)a0;
    a0 = s2 + 0;
    s3 = v0 ^ 0x1;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E566C;
L_088E566C:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(s0+136); goto L_088E54AC; }
    goto L_088E5674;
L_088E5674:;
    cnd_ = s3 == 0;
    v0 = D_08AECD88 - (-12920);
    if (cnd_) { goto L_088E5684; }
    goto L_088E567C;
L_088E567C:;
    a3 = LD32(s0+136);
    goto L_088E54AC;
L_088E5684:;
    f12 = BITSF(LD32(v0-12920));
    a1 = s0 + 228;
    a0 = s1 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5698;
L_088E5698:;
    cnd_ = s4 != 0;
    a3 = LD32(s0+136);
    if (cnd_) { goto L_088E54AC; }
    goto L_088E56A0;
L_088E56A0:;
    v0 = 1;
    ST8(s0+232, v0);
    goto L_088E54AC;
L_088E56AC:;
    v1 = D_08AD89E0 - (-30240);
    v0 = LD32(v1-30240);
    goto L_088E5654;
L_088E56B8:;
    a0 = s0 + 228;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E56C0;
L_088E56C0:;
    a3 = LD32(s0+136);
    goto L_088E549C;
L_088E56C8:;
    a1 = D_08B25AC0 - (23232);
    goto L_088E56CC;
L_088E56CC:;
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    t0 = v1 >> 1;
    v0 = LD32(a3+56);
    f0 = BITSF(t0);
    a0 = a0 + v1;
    f3 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(v0+32));
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AECD84 - (-12924);
    f0 = BITSF(LD32(v0-12924));
    f2 = f2 - f3;
    ST32(a2+4, a0);
    f1 = f1 * f0;
    ST32(a1+23232, v1);
    f1 = f1 * f2;
    f3 = f3 + f1;
    ST32(s0+224, FBITS(f3));
    goto L_088E546C;
L_088E572C:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088E56CC; }
    goto L_088E5738;
L_088E5738:;
    a0 = s0 + 220;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5740;
L_088E5740:;
    a3 = LD32(s0+136);
    goto L_088E56C8;
L_088E5748:;
    v0 = LD32(s0+324);
    goto L_088E574C;
L_088E574C:;
    v0 = v1 + v0;
    v1 = LD32(v0);
    v0 = LD32(v1+104);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 + 1; goto L_088E5424; }
    goto L_088E5760;
L_088E5760:;
    v0 = LD32(v0+220);
    a1 = a1 + v0;
    goto L_088E5420;
}

/* 088E576C */
rv_t func_088E576C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E576C:;
    sp = sp - 16;
    v0 = LD32(a0+320);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E57DC; }
    goto L_088E578C;
L_088E578C:;
    v0 = 2;
    goto L_088E5790;
L_088E5790:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    s1 = (u32)-1;
    { rv_t r_ = func_088E5ACC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E57A0;
L_088E57A0:;
    v0 = LD32(s0+220);
    cnd_ = v0 == s1;
    a0 = s0 + 220;
    if (cnd_) { goto L_088E57B4; }
    goto L_088E57AC;
L_088E57AC:;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E57B4;
L_088E57B4:;
    v0 = LD32(s0+228);
    cnd_ = v0 == s1;
    a0 = s0 + 228;
    if (cnd_) { goto L_088E57C8; }
    goto L_088E57C0;
L_088E57C0:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E57C8;
L_088E57C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E57DC:;
    v0 = 3;
    goto L_088E5790;
}

/* 088E57E4 */
float func_088E57E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E57E4:;
    sp = sp - 16;
    s1 = D_08AECD8C - (-12916);
    t0 = LD32(a0+136);
    a3 = LD32(t0+56);
    cnd_ = a3 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E5880; }
    goto L_088E5808;
L_088E5808:;
    v0 = LD32(a3);
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s1-12916));
    if (cnd_) { goto L_088E5884; }
    goto L_088E5814;
L_088E5814:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E585C; }
    goto L_088E5820;
L_088E5820:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    ST32(a2+4, v1);
    a0 = v0 >> 1;
    ST32(a1+23232, v0);
    v1 = LD32(a3);
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    goto L_088E585C;
L_088E585C:;
    v0 = LD32(t0+56);
    v1 = v1 << 2;
    s1 = D_08AECD8C - (-12916);
    a0 = LD32(v0+4);
    v1 = v1 + a0;
    a0 = LD32(v1);
    v0 = func_088DA8C0(a0);
    goto L_088E5878;
L_088E5878:;
    cnd_ = v0 != 0;
    f12 = BITSF(LD32(s1-12916));
    if (cnd_) { goto L_088E589C; }
    goto L_088E5880;
L_088E5880:;
    f0 = BITSF(LD32(s1-12916));
    goto L_088E5884;
L_088E5884:;
    ST32(s0+224, FBITS(f0));
    sp = sp + 16;
    return f0;
L_088E589C:;
    a1 = s0 + 140;
    a0 = v0 + 0;
    f13 = f12;
    { rv_t r_ = func_088DBF24(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E58AC;
L_088E58AC:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    ST32(s0+220, v0);
    if (cnd_) { goto L_088E5880; }
    goto L_088E58B8;
L_088E58B8:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    a3 = a2 + 23232;
    a0 = LD32(a3+4);
    a1 = LD32(s0+136);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = LD32(a1+56);
    a1 = v1 >> 1;
    f0 = BITSF(a1);
    f12 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AECD90 - (-12912);
    f0 = BITSF(LD32(v0-12912));
    f2 = f2 - f12;
    a0 = a0 + v1;
    f1 = f1 * f0;
    ST32(a3+4, a0);
    f1 = f1 * f2;
    ST32(a2+23232, v1);
    f12 = f12 + f1;
    a0 = LD32(s0+220);
    f0 = func_088DB940(a0, f12);
    goto L_088E5920;
L_088E5920:;
    t0 = LD32(s0+136);
    v0 = LD32(t0+64);
    v0 = v0 & 0x400;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(t0+56); goto L_088E5970; }
    goto L_088E5934;
L_088E5934:;
    v0 = LD32(t0+64);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088E5960; }
    goto L_088E5944;
L_088E5944:;
    v0 = LD32(t0+56);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0+32));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { a1 = 1; goto L_088E5960; }
    goto L_088E5960;
L_088E5960:;
    a0 = LD32(s0+220);
    { rv_t r_ = func_088DB45C(a0, a1, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5968;
L_088E5968:;
    f0 = BITSF(LD32(s1-12916));
    goto L_088E5884;
L_088E5970:;
    a0 = LD32(s0+220);
    f12 = BITSF(LD32(v0+24));
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E597C;
L_088E597C:;
    v1 = LD32(s0+136);
    a0 = LD32(s0+220);
    v0 = LD32(v1+56);
    f13 = BITSF(LD32(v0+20));
    f12 = BITSF(LD32(v0+16));
    { rv_t r_ = func_088DBAA8(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5994;
L_088E5994:;
    t0 = LD32(s0+136);
    goto L_088E5934;
}

/* 088E599C */
rv_t func_088E599C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088E599C:;
    v0 = LD32(a0+136);
    a2 = a1 << 2;
    v1 = LD32(v0);
    a1 = a1 < v1;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E59C0; }
    goto L_088E59B4;
L_088E59B4:;
    v0 = LD32(a0+324);
    v0 = a2 + v0;
    v0 = LD32(v0);
    goto L_088E59C0;
L_088E59C0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088E59C8 */
void func_088E59C8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E59C8:;
    sp = sp - 16;
    v1 = LD32(a0+212);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088E5A2C; }
    goto L_088E59E8;
L_088E59E8:;
    v0 = LD32(a0+136);
    s0 = 1;
    v1 = LD32(v0+64);
    v1 = v1 & 0x100;
    if (v1 != 0) s0 = a1;
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5A04;
L_088E5A04:;
    ST32(s1+212, v0);
    cnd_ = s0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E5A28; }
    goto L_088E5A10;
L_088E5A10:;
    v1 = v0 + 0;
    goto L_088E5A14;
L_088E5A14:;
    a0 = a0 + 1;
    v0 = a0 < s0;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E5A14; }
    goto L_088E5A28;
L_088E5A28:;
    ST32(s1+216, 0);
    goto L_088E5A2C;
L_088E5A2C:;
    v1 = LD32(s1+136);
    v0 = LD32(v1+64);
    v0 = v0 & 0x100;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E5A98; }
    goto L_088E5A40;
L_088E5A40:;
    v1 = LD32(s1+216);
    cnd_ = v1 == 0;
    v0 = v1 < 0x2u;
    if (cnd_) { goto L_088E5AAC; }
    goto L_088E5A4C;
L_088E5A4C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E5A9C; }
    goto L_088E5A54;
L_088E5A54:;
    s2 = 1;
    v0 = s2 < v1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088E5A9C; }
    goto L_088E5A64;
L_088E5A64:;
    v1 = LD32(s1+212);
    goto L_088E5A68;
L_088E5A68:;
    s0 = s2 << 2;
    v0 = s0 + v1;
    a0 = LD32(v0);
    s2 = s2 + 1;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5A7C;
L_088E5A7C:;
    v1 = LD32(s1+212);
    v0 = LD32(s1+216);
    s0 = s0 + v1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_088E5A68; }
    goto L_088E5A94;
L_088E5A94:;
    goto L_088E5A98;
L_088E5A98:;
    goto L_088E5A9C;
L_088E5A9C:;
    sp = sp + 16;
    return;
L_088E5AAC:;
    { rv_t r_ = func_0889CE40(t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5AB4;
L_088E5AB4:;
    v1 = LD32(s1+212);
    cnd_ = v0 == 0;
    ST32(v1, v0);
    if (cnd_) { goto L_088E5A94; }
    goto L_088E5AC0;
L_088E5AC0:;
    v0 = 1;
    ST32(s1+216, v0);
    goto L_088E5A94;
}

/* 088E5ACC */
rv_t func_088E5ACC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E5ACC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+212);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088E5B34; }
    goto L_088E5AE8;
L_088E5AE8:;
    v1 = LD32(s0+216);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E5B24; }
    goto L_088E5AF4;
L_088E5AF4:;
    v0 = v1 - 1;
    v1 = v0 << 2;
    v1 = v1 + a0;
    ST32(s0+216, v0);
    a0 = LD32(v1);
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5B0C;
L_088E5B0C:;
    v0 = LD32(s0+216);
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E5B20; }
    goto L_088E5B18;
L_088E5B18:;
    a0 = LD32(s0+212);
    goto L_088E5AF4;
L_088E5B20:;
    a0 = LD32(s0+212);
    goto L_088E5B24;
L_088E5B24:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E5B40; }
    goto L_088E5B2C;
L_088E5B2C:;
    ST32(s0+212, 0);
    goto L_088E5B30;
L_088E5B30:;
    goto L_088E5B34;
L_088E5B34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E5B40:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E5B48;
L_088E5B48:;
    ST32(s0+212, 0);
    goto L_088E5B30;
}

/* 088E5B50 */
float func_088E5B50(u32 a0, u32 t0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088E5B50:;
    sp = sp - 80;
    s1 = a0 + 0;
    v1 = LD32(a0+212);
    cnd_ = v1 == 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_088E5BE8; }
    goto L_088E5B80;
L_088E5B80:;
    a1 = LD32(a0+136);
    v0 = LD32(a1+64);
    a2 = a1 + 0;
    v0 = v0 & 0x100;
    cnd_ = v0 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088E5EDC; }
    goto L_088E5B98;
L_088E5B98:;
    v0 = LD32(a1);
    s3 = 0 + 0;
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088E5BD4; }
    goto L_088E5BA8;
L_088E5BA8:;
    v1 = LD32(a0+48);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { t0 = LD32(s1+324); goto L_088E5C44; }
    goto L_088E5BB8;
L_088E5BB8:;
    cnd_ = v1 == s5;
    if (cnd_) { t0 = LD32(s1+324); goto L_088E5C44; }
    goto L_088E5BC0;
L_088E5BC0:;
    v0 = LD32(a2);
    s5 = s5 + 1;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_088E5BA8; }
    goto L_088E5BD4;
L_088E5BD4:;
    v0 = LD32(s1+216);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s2 = s3 + 0;
    if (cnd_) { goto L_088E5C0C; }
    goto L_088E5BE4;
L_088E5BE4:;
    ST32(s1+216, s2);
    goto L_088E5BE8;
L_088E5BE8:;
    goto L_088E5BEC;
L_088E5BEC:;
    sp = sp + 80;
    return f0;
L_088E5C0C:;
    s0 = s3 << 2;
    v0 = s0 + a3;
    a0 = LD32(v0);
    s3 = s3 + 1;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5C20;
L_088E5C20:;
    v1 = LD32(s1+212);
    v0 = LD32(s1+216);
    s0 = s0 + v1;
    v0 = s3 < v0;
    a3 = v1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_088E5C0C; }
    goto L_088E5C3C;
L_088E5C3C:;
    ST32(s1+216, s2);
    goto L_088E5BE8;
L_088E5C44:;
    s2 = s5 << 2;
    v0 = s2 + t0;
    v1 = LD32(v0);
    a0 = LD32(v1+100);
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088E5BC0; }
    goto L_088E5C5C;
L_088E5C5C:;
    s0 = s3 << 2;
    goto L_088E5C60;
L_088E5C60:;
    v0 = s0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E5EB4; }
    goto L_088E5C70;
L_088E5C70:;
    v0 = s2 + t0;
    v1 = LD32(v0);
    a2 = LD32(s1+136);
    t2 = s4 << 5;
    v0 = LD32(v1+96);
    a1 = a2 + 8;
    f2 = BITSF(LD32(a1+12));
    v0 = t2 + v0;
    f9 = BITSF(LD32(v0+24));
    f0 = BITSF(LD32(a1+16));
    v0 = LD32(a1+4);
    f1 = f9 - f2;
    f0 = f0 - f2;
    a0 = v0 - 1;
    f3 = BITSF(a0);
    t3 = D_08AECD94 - (-12908);
    f1 = f1 / f0;
    t1 = a2 + 0;
    f2 = (float)(s32)FBITS(f3);
    f2 = f1 * f2;
    f1 = BITSF(F2I(f2, 1));
    v1 = FBITS(f1);
    cnd_ = (s32)v1 < 0;
    f0 = BITSF(LD32(t3-12908));
    if (cnd_) { goto L_088E5EAC; }
    goto L_088E5CD0;
L_088E5CD0:;
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 != 0;
    f1 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088E5E10; }
    goto L_088E5CDC;
L_088E5CDC:;
    v0 = LD32(a1+8);
    v1 = a0 << 4;
    v0 = v0 + v1;
    goto L_088E5CE8;
L_088E5CE8:;
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    goto L_088E5D08;
L_088E5D08:;
    v0 = s0 + a3;
    a2 = LD32(v0);
    f1 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    ST32(a2+20, FBITS(f1));
    v1 = t1 + 28;
    ST32(a2+16, FBITS(f0));
    ST32(a2+24, FBITS(f3));
    f2 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+16));
    v0 = LD32(v1+4);
    f0 = f9 - f2;
    f1 = f1 - f2;
    a1 = v0 - 1;
    f3 = BITSF(a1);
    f0 = f0 / f1;
    f2 = (float)(s32)FBITS(f3);
    f0 = f0 * f2;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    cnd_ = (s32)a0 < 0;
    f3 = BITSF(LD32(t3-12908));
    if (cnd_) { goto L_088E5E08; }
    goto L_088E5D64;
L_088E5D64:;
    v0 = (s32)a0 < (s32)a1;
    cnd_ = v0 != 0;
    f2 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088E5DDC; }
    goto L_088E5D70;
L_088E5D70:;
    v1 = LD32(v1+8);
    v0 = a1 << 2;
    v0 = v0 + v1;
    goto L_088E5D7C;
L_088E5D7C:;
    f0 = BITSF(LD32(v0));
    goto L_088E5D80;
L_088E5D80:;
    v0 = s2 + t0;
    a1 = LD32(v0);
    ST32(a2+12, FBITS(f0));
    a0 = s0 + a3;
    s3 = s3 + 1;
    v0 = LD32(a1+96);
    v1 = LD32(a0);
    v0 = v0 + t2;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(v1+8, FBITS(f0));
    ST32(v1, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    goto L_088E5DB8;
L_088E5DB8:;
    v0 = s2 + t0;
    v1 = LD32(v0);
    s4 = s4 + 1;
    v0 = LD32(v1+100);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s0 = s3 << 2;
    if (cnd_) { goto L_088E5C60; }
    goto L_088E5DD4;
L_088E5DD4:;
    a2 = LD32(s1+136);
    goto L_088E5BC0;
L_088E5DDC:;
    v1 = LD32(v1+8);
    v0 = a0 << 2;
    f2 = f0 - f2;
    v0 = v0 + v1;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f3 = f3 - f2;
    f1 = f1 * f2;
    f0 = f0 * f3;
    f0 = f0 + f1;
    goto L_088E5D80;
L_088E5E08:;
    v0 = LD32(v1+8);
    goto L_088E5D7C;
L_088E5E10:;
    v0 = LD32(a1+8);
    v1 = v1 << 4;
    f1 = f2 - f1;
    v0 = v0 + v1;
    f7 = BITSF(LD32(v0));
    f8 = BITSF(LD32(v0+4));
    f0 = f0 - f1;
    f6 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    v1 = v0 + 16;
    f7 = f7 * f0;
    f3 = f3 * f0;
    f8 = f8 * f0;
    f6 = f6 * f0;
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f8));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f3));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f5 = f5 * f1;
    f4 = f4 * f1;
    f0 = f0 * f1;
    f2 = f2 * f1;
    f3 = f3 + f5;
    f7 = f7 + f4;
    f8 = f8 + f0;
    f6 = f6 + f2;
    ST32(sp+12, FBITS(f3));
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f8));
    ST32(sp+8, FBITS(f6));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    ST32(sp+44, FBITS(f5));
    goto L_088E5D08;
L_088E5EAC:;
    v0 = LD32(a1+8);
    goto L_088E5CE8;
L_088E5EB4:;
    { rv_t r_ = func_0889CE40(t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5EBC;
L_088E5EBC:;
    a3 = LD32(s1+212);
    v1 = s0 + a3;
    cnd_ = v0 != 0;
    ST32(v1, v0);
    if (cnd_) { goto L_088E5ED4; }
    goto L_088E5ECC;
L_088E5ECC:;
    t0 = LD32(s1+324);
    goto L_088E5DB8;
L_088E5ED4:;
    t0 = LD32(s1+324);
    goto L_088E5C70;
L_088E5EDC:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E5BEC; }
    goto L_088E5EE8;
L_088E5EE8:;
    f12 = BITSF(LD32(s1+236));
    a1 = a1 + 8;
    a0 = sp + 32;
    func_08AB8994(a0, a1, f12);
    goto L_088E5EF8;
L_088E5EF8:;
    v0 = LD32(s1+212);
    f1 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    s0 = LD32(v0);
    f0 = BITSF(LD32(sp+32));
    a0 = LD32(s1+136);
    ST32(s0+20, FBITS(f1));
    a0 = a0 + 28;
    ST32(s0+24, FBITS(f2));
    ST32(s0+16, FBITS(f0));
    f12 = BITSF(LD32(s1+236));
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5F28;
L_088E5F28:;
    ST32(s0+12, FBITS(f0));
    a0 = s1 + 140;
    v1 = LD32(s1+212);
    f2 = BITSF(LD32(s1+140));
    f0 = BITSF(LD32(a0+8));
    v0 = LD32(v1);
    f1 = BITSF(LD32(a0+4));
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_088E5BE8;
}

/* 088E5F54 */
float func_088E5F54(u32 a0, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088E5F54:;
    sp = sp - 48;
    s0 = a0 + 0;
    v1 = LD32(a0+136);
    v0 = LD32(v1+64);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_088E5FD8; }
    goto L_088E5F88;
L_088E5F88:;
    a0 = LD32(a0+220);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { f0 = BITSF(LD32(s0+224)); goto L_088E6174; }
    goto L_088E5F98;
L_088E5F98:;
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E5FA0;
L_088E5FA0:;
    cnd_ = v0 == 0;
    v0 = D_08B16141 - (24897);
    if (cnd_) { goto L_088E6230; }
    goto L_088E5FA8;
L_088E5FA8:;
    a2 = LD_U8(v0+24897);
    a0 = LD32(s0+220);
    a1 = s0 + 140;
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E5FB8;
L_088E5FB8:;
    v1 = D_08B30C0C - (3084);
    v0 = LD32(v1+3084);
    a0 = LD32(s0+220);
    v0 = v0 + 1;
    ST32(v1+3084, v0);
    goto L_088E5FCC;
L_088E5FCC:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { f0 = BITSF(LD32(s0+224)); goto L_088E6174; }
    goto L_088E5FD8;
L_088E5FD8:;
    v0 = LD_U8(s0+232);
    goto L_088E5FDC;
L_088E5FDC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E6044; }
    goto L_088E5FE4;
L_088E5FE4:;
    a0 = LD32(s0+228);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD32(s0+136); goto L_088E60C0; }
    goto L_088E5FF4;
L_088E5FF4:;
    v0 = LD_U8(s0+233);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088E6070; }
    goto L_088E6000;
L_088E6000:;
    a0 = LD32(s0+228);
    goto L_088E6004;
L_088E6004:;
    s1 = s0 + 140;
    f0 = func_088E0018(a0);
    goto L_088E600C;
L_088E600C:;
    f12 = f0;
    a0 = s1 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6018;
L_088E6018:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E6038; }
    goto L_088E6020;
L_088E6020:;
    a0 = LD32(s0+228);
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6028;
L_088E6028:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E6038; }
    goto L_088E6030;
L_088E6030:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = LD32(s0+228); goto L_088E6060; }
    goto L_088E6038;
L_088E6038:;
    a0 = s0 + 228;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6040;
L_088E6040:;
    goto L_088E6044;
L_088E6044:;
    sp = sp + 48;
    return f0;
L_088E6060:;
    a1 = s1 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6068;
L_088E6068:;
    goto L_088E6044;
L_088E6070:;
    { u64 r_ = func_088DFF84(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6078;
L_088E6078:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+228); goto L_088E6004; }
    goto L_088E6080;
L_088E6080:;
    v0 = D_08B309FC - (2556);
    a1 = LD32(v0+2556);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E60A4; }
    goto L_088E6090;
L_088E6090:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_088E60A4;
L_088E60A4:;
    v0 = D_08B30A04 - (2564);
    v1 = LD32(v0+2564);
    v0 = 1;
    v1 = v1 - a0;
    v1 = (s32)v1 < 5;
    if (v1 != 0) s2 = v0;
    goto L_088E6000;
L_088E60C0:;
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    a1 = LD32(v0+60);
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E60D0;
L_088E60D0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088E6040; }
    goto L_088E60D8;
L_088E60D8:;
    v0 = D_08B309FC - (2556);
    a1 = LD32(v0+2556);
    s3 = LD_U8(s1+72);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E6100; }
    goto L_088E60EC;
L_088E60EC:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_088E6100;
L_088E6100:;
    v0 = D_08B30A04 - (2564);
    v1 = LD32(v0+2564);
    cnd_ = s3 == 0;
    a0 = v1 - a0;
    if (cnd_) { goto L_088E6168; }
    goto L_088E6110;
L_088E6110:;
    v1 = D_08AD89E4 - (-30236);
    v0 = LD32(v1-30236);
    goto L_088E6118;
L_088E6118:;
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E6044; }
    goto L_088E6124;
L_088E6124:;
    f12 = BITSF(LD32(s1+84));
    s2 = s0 + 140;
    a0 = s2 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6134;
L_088E6134:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E6044; }
    goto L_088E613C;
L_088E613C:;
    v0 = D_08AECD9C - (-12900);
    f12 = BITSF(LD32(v0-12900));
    a1 = s0 + 228;
    a0 = s1 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6154;
L_088E6154:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_088E6044; }
    goto L_088E615C;
L_088E615C:;
    v0 = 1;
    ST8(s0+232, v0);
    goto L_088E6044;
L_088E6168:;
    v1 = D_08AD89E0 - (-30240);
    v0 = LD32(v1-30240);
    goto L_088E6118;
L_088E6174:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a3 = LD32(s0+136); goto L_088E61AC; }
    goto L_088E6188;
L_088E6188:;
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s0+224, FBITS(f0));
    if (cnd_) { goto L_088E5FD8; }
    goto L_088E619C;
L_088E619C:;
    a0 = s0 + 0;
    f0 = func_088E57E4(a0);
    goto L_088E61A4;
L_088E61A4:;
    v0 = LD_U8(s0+232);
    goto L_088E5FDC;
L_088E61AC:;
    v0 = LD32(a3+64);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+232); goto L_088E5FDC; }
    goto L_088E61BC;
L_088E61BC:;
    v1 = LD32(s0+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s0+232); goto L_088E5FDC; }
    goto L_088E61CC;
L_088E61CC:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = LD32(a3+56);
    a3 = v1 >> 1;
    f0 = BITSF(a3);
    f3 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(v0+32));
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AECD98 - (-12904);
    f0 = BITSF(LD32(v0-12904));
    f2 = f2 - f3;
    a0 = a0 + v1;
    f1 = f1 * f0;
    ST32(a2+4, a0);
    f1 = f1 * f2;
    ST32(a1+23232, v1);
    f3 = f3 + f1;
    ST32(s0+224, FBITS(f3));
    goto L_088E5FD8;
L_088E6230:;
    a0 = s0 + 220;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6238;
L_088E6238:;
    a0 = LD32(s0+220);
    goto L_088E5FCC;
}

/* 088E6240 */
rv_t func_088E6240(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E6240:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = 1;
    v1 = a0 + 0;
    cnd_ = a1 == v0;
    ST8(a0+232, a1);
    if (cnd_) { goto L_088E6268; }
    goto L_088E625C;
L_088E625C:;
    goto L_088E6260;
L_088E6260:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E6268:;
    v1 = LD32(v1+228);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = a0 + 228;
    if (cnd_) { goto L_088E625C; }
    goto L_088E6278;
L_088E6278:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6280;
L_088E6280:;
    goto L_088E6260;
}

/* 088E6288 */
float func_088E6288(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088E6288:;
    sp = sp - 48;
    v0 = 0x80000u;
    a3 = a1 + 0;
    s3 = D_08B2A744 - (-22716);
    s2 = s3 - 22716;
    s1 = a0 + 0;
    s0 = a0 + 20;
    v1 = LD32(a1+140);
    f20 = BITSF(LD32(a3+104));
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_088E62E0; }
    goto L_088E62D0;
L_088E62D0:;
    v0 = LD32(s0+20);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+20); goto L_088E62EC; }
    goto L_088E62E0;
L_088E62E0:;
    a0 = s0 + 0;
    func_0889C888(a0, a1);
    goto L_088E62E8;
L_088E62E8:;
    v0 = LD32(s0+20);
    goto L_088E62EC;
L_088E62EC:;
    a0 = s0 + 0;
    a1 = 1;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088E6314; }
    goto L_088E6300;
L_088E6300:;
    f0 = BITSF(LD32(s1));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088E6420; }
    goto L_088E6314;
L_088E6314:;
    func_0889C91C(a0, a1, a2);
    goto L_088E631C;
L_088E631C:;
    v0 = LD32(s3-22716);
    v1 = LD32(s2+4);
    a0 = LD32(s2+8);
    v0 = (v0 >> 0) & 0x7fffffff;
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    f1 = BITSF(v0);
    a0 = (a0 >> 0) & 0x7fffffff;
    v1 = LD32(s2+12);
    f1 = f1 + f0;
    f2 = BITSF(a0);
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    f1 = f1 + f2;
    v0 = D_08AECDA8 - (-12888);
    f4 = BITSF(LD32(v0-12888));
    f1 = f1 + f0;
    f5 = f4 - f20;
    fcc = FCMP(f20, f4, 12);
    ST32(s1+4, FBITS(f1));
    f1 = f1 * f20;
    v0 = LD32(s2+16);
    v1 = LD32(s2+20);
    a0 = LD32(s2+24);
    v0 = (v0 >> 0) & 0x7fffffff;
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    f2 = BITSF(v0);
    a0 = (a0 >> 0) & 0x7fffffff;
    v0 = LD32(s2+28);
    f2 = f2 + f0;
    f3 = BITSF(a0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f2 = f2 + f3;
    f6 = f5 + f1;
    f2 = f2 + f0;
    ST32(s1+8, FBITS(f2));
    f2 = f2 * f20;
    v0 = LD32(s2+32);
    v1 = LD32(s2+36);
    a0 = LD32(s2+40);
    v0 = (v0 >> 0) & 0x7fffffff;
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f1 = BITSF(v1);
    a0 = (a0 >> 0) & 0x7fffffff;
    v0 = LD32(s2+44);
    f0 = f0 + f1;
    f3 = BITSF(a0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    f0 = f0 + f3;
    ST32(s1+16, FBITS(f4));
    f2 = f5 + f2;
    f0 = f0 + f1;
    f4 = f0 * f20;
    cnd_ = !fcc;
    ST32(s1+12, FBITS(f0));
    if (cnd_) { goto L_088E6418; }
    goto L_088E6408;
L_088E6408:;
    f0 = f5 + f4;
    ST32(s1+4, FBITS(f6));
    ST32(s1+8, FBITS(f2));
    ST32(s1+12, FBITS(f0));
    goto L_088E6418;
L_088E6418:;
    ST32(s1, FBITS(f20));
    goto L_088E6420;
L_088E6420:;
    sp = sp + 48;
    return f0;
}

/* 088E643C */
float func_088E643C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E643C:;
    sp = sp - 16;
    v1 = a0 + 4;
    v0 = a0 + 16;
    s1 = a0 + 0;
    a0 = t0 + 0;
    f0 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    ST32(s1, a1);
    f7 = BITSF(LD32(a3+32));
    f8 = BITSF(LD32(a3));
    f0 = BITSF(LD32(a3+4));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a3+12));
    f3 = BITSF(LD32(a3+16));
    f4 = BITSF(LD32(a3+20));
    f5 = BITSF(LD32(a3+24));
    f6 = BITSF(LD32(a3+28));
    ST32(v0+32, FBITS(f7));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f2));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f4));
    ST32(v0+24, FBITS(f5));
    ST32(v0+28, FBITS(f6));
    ST32(s1+16, FBITS(f8));
    v0 = LD32(t1);
    ST32(s1+64, v0);
    v1 = LD32(t1+4);
    ST32(s1+68, v1);
    v0 = LD32(t1+8);
    ST32(s1+72, v0);
    v1 = LD32(t1+12);
    ST32(s1+96, 0);
    ST32(s1+76, v1);
    v0 = LD32(t1+16);
    ST32(s1+104, 0);
    ST32(s1+80, v0);
    v1 = LD32(t1+20);
    ST32(s1+108, 0);
    ST32(s1+84, v1);
    v0 = LD32(t1+24);
    ST32(s1+124, 0);
    ST32(s1+88, v0);
    v1 = LD32(t1+28);
    ST32(s1+100, 0);
    ST32(s1+92, v1);
    ST32(s1+112, 0);
    ST32(s1+116, 0);
    ST32(s1+120, 0);
    ST32(s1+128, 0);
    { rv_t r_ = func_088E9F80(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6528;
L_088E6528:;
    cnd_ = v0 != 0;
    ST32(s1+104, v0);
    if (cnd_) { goto L_088E6544; }
    goto L_088E6530;
L_088E6530:;
    sp = sp + 16;
    return f0;
L_088E6544:;
    f0 = BITSF(LD32(v0+216));
    a0 = LD32(v0+172);
    ST32(s1+120, FBITS(f0));
    { rv_t r_ = func_088E9F24(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6554;
L_088E6554:;
    cnd_ = v0 == 0;
    ST32(s1+108, v0);
    if (cnd_) { goto L_088E656C; }
    goto L_088E655C;
L_088E655C:;
    v0 = LD32(v0+140);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = 44;
    if (cnd_) { goto L_088E657C; }
    goto L_088E656C;
L_088E656C:;
    v0 = LD32(s1+128);
    v0 = v0 | 0x1;
    ST32(s1+128, v0);
    goto L_088E6530;
L_088E657C:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6584;
L_088E6584:;
    s0 = v0 + 0;
    v0 = D_08AECDB8 - (-12872);
    f1 = BITSF(LD32(v0-12872));
    v0 = D_08AECDB4 - (-12876);
    f0 = BITSF(LD32(v0-12876));
    v1 = s0 + 4;
    ST32(s0+4, FBITS(f1));
    a0 = s0 + 20;
    a1 = 1;
    ST32(s0, FBITS(f0));
    a2 = 0 + 0;
    ST32(v1+12, FBITS(f1));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f1));
    func_0889C644(a0, a1, a2, 0, 0, 0);
    goto L_088E65C0;
L_088E65C0:;
    ST32(s1+124, s0);
    goto L_088E656C;
}

/* 088E65C8 */
void func_088E65C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E65C8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = LD32(a0+124);
    cnd_ = s0 != 0;
    a0 = s0 + 20;
    if (cnd_) { goto L_088E6620; }
    goto L_088E65E8;
L_088E65E8:;
    a0 = s1 + 0;
    f0 = func_088E7B58(a0);
    goto L_088E65F0;
L_088E65F0:;
    v0 = LD32(s1+96);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E6610; }
    goto L_088E65FC;
L_088E65FC:;
    goto L_088E6600;
L_088E6600:;
    sp = sp + 16;
    return;
L_088E6610:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6618;
L_088E6618:;
    goto L_088E6600;
L_088E6620:;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6628;
L_088E6628:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6630;
L_088E6630:;
    goto L_088E65E8;
}

/* 088E6638 */
float func_088E6638(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088E6638:;
    sp = sp - 96;
    s3 = a1 & 0xff;
    v1 = LD32(a0+104);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E6A18; }
    goto L_088E6680;
L_088E6680:;
    a3 = LD32(a0+108);
    cnd_ = a3 == 0;
    if (cnd_) {  goto L_088E6A1C; }
    goto L_088E668C;
L_088E668C:;
    f1 = BITSF(LD32(v1+176));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_088E6A1C; }
    goto L_088E66A4;
L_088E66A4:;
    f2 = BITSF(LD32(a0+116));
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    fp = 1;
    if (cnd_) { goto L_088E66BC; }
    goto L_088E66B8;
L_088E66B8:;
    fp = 0 + 0;
    goto L_088E66BC;
L_088E66BC:;
    v0 = LD32(v1+228);
    s1 = D_08B285A0 - (-31328);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    f21 = BITSF(LD32(s1-31328));
    if (cnd_) { goto L_088E66D8; }
    goto L_088E66D0;
L_088E66D0:;
    f0 = BITSF(LD32(v1+196));
    f21 = f21 * f0;
    goto L_088E66D8;
L_088E66D8:;
    f0 = f21 / f1;
    f0 = f2 + f0;
    ST32(s0+116, FBITS(f0));
    v0 = LD32(v1+228);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    s7 = D_08AECDBC - (-12868);
    if (cnd_) { goto L_088E6CA4; }
    goto L_088E66F4;
L_088E66F4:;
    v0 = LD32(v1+228);
    s6 = LD32(s0+100);
    v0 = v0 & 0x2000;
    cnd_ = v0 == 0;
    s2 = s6 + 0;
    if (cnd_) { goto L_088E6880; }
    goto L_088E6708;
L_088E6708:;
    v0 = D_08B15A00 - (23040);
    a1 = LD32(v0+23040);
    cnd_ = (s32)a1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E6C94; }
    goto L_088E6718;
L_088E6718:;
    v0 = D_08B230AC - (12460);
    t6 = v0 + 12460;
    v0 = D_08B22E88 - (11912);
    t1 = a1 + 0;
    a2 = v0 + 11912;
    t3 = D_08B15A04 - (23044);
    t2 = D_08B159FC - (23036);
    t5 = D_08B230A8 - (12456);
    a3 = 1;
    t4 = D_08B15A0C - (23052);
    t0 = s0 + 4;
    v0 = LD32(t3+23044);
    goto L_088E6748;
L_088E6748:;
    cnd_ = a0 == v0;
    v1 = a3 << (a0 & 31);
    if (cnd_) { goto L_088E6764; }
    goto L_088E6750;
L_088E6750:;
    ST8(t5+12456, v1);
    ST32(t2+23036, a2);
    ST32(t3+23044, a0);
    ST8(t4+23052, a3);
    ST8(t6+4, a3);
    goto L_088E6764;
L_088E6764:;
    v1 = LD32(t2+23036);
    a0 = a0 + 1;
    a1 = (s32)a0 < (s32)t1;
    v0 = LD_U8(v1+132);
    cnd_ = v0 == 0;
    a2 = a2 + 136;
    if (cnd_) { goto L_088E6804; }
    goto L_088E677C;
L_088E677C:;
    f5 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(t0+4));
    f4 = BITSF(LD32(t0+8));
    f0 = f0 - f2;
    f1 = f1 - f3;
    f5 = f5 - f4;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f1));
    v1 = LD32(s0+104);
    ST32(sp, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+8, FBITS(f5));
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f0 = BITSF(LD32(v1+208));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088E6804; }
    goto L_088E67F0;
L_088E67F0:;
    f0 = BITSF(LD32(v1+212));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s2 = LD32(s0+100); goto L_088E681C; }
    goto L_088E6804;
L_088E6804:;
    cnd_ = a1 != 0;
    v0 = LD32(t3+23044);
    if (cnd_) { goto L_088E6748; }
    goto L_088E680C;
L_088E680C:;
    v0 = 0 + 0;
    v1 = LD32(s0+104);
    cnd_ = v0 == 0;
    s2 = LD32(s0+100);
    if (cnd_) { goto L_088E6C94; }
    goto L_088E681C;
L_088E681C:;
    f1 = BITSF(LD32(s1-31328));
    f0 = BITSF(LD32(s0+120));
    f0 = f0 + f1;
    goto L_088E6828;
L_088E6828:;
    a0 = LD32(s0+128);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    ST32(s0+120, FBITS(f0));
    if (cnd_) { goto L_088E6C74; }
    goto L_088E6838;
L_088E6838:;
    f1 = BITSF(LD32(s0+120));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088E6858; }
    goto L_088E6850;
L_088E6850:;
    ST32(s0+128, a0);
    goto L_088E6854;
L_088E6854:;
    f0 = BITSF(0);
    goto L_088E6858;
L_088E6858:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+120, FBITS(f0)); goto L_088E6880; }
    goto L_088E6868;
L_088E6868:;
    f0 = BITSF(LD32(v1+216));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088E687C; }
    goto L_088E687C;
L_088E687C:;
    ST32(s0+120, FBITS(f0));
    goto L_088E6880;
L_088E6880:;
    cnd_ = s2 == 0;
    a3 = LD32(s0+108);
    if (cnd_) { goto L_088E694C; }
    goto L_088E6888;
L_088E6888:;
    v1 = 0x20000u;
    v0 = LD32(a3+140);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a3+84)); goto L_088E6BD8; }
    goto L_088E689C;
L_088E689C:;
    cnd_ = s2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088E694C; }
    goto L_088E68A4;
L_088E68A4:;
    v0 = D_08AECDC0 - (-12864);
    v1 = D_08AECDBC - (-12868);
    f22 = BITSF(LD32(v0-12864));
    f20 = BITSF(LD32(v1-12868));
    s4 = 0x20000u;
    s5 = 0x4000000u;
    v0 = LD32(a3+140);
    goto L_088E68C0;
L_088E68C0:;
    a1 = LD32(s0+96);
    a0 = s1 << 5;
    v0 = v0 & s4;
    v1 = a0 + a1;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(v1+28));
    if (cnd_) { goto L_088E6BD0; }
    goto L_088E68D8;
L_088E68D8:;
    f0 = f0 * f22;
    f3 = BITSF(LD32(a3+88));
    f4 = BITSF(LD32(a3+84));
    f1 = BITSF(F2I(f0, 1));
    f2 = (float)(s32)FBITS(f1);
    f0 = f0 - f2;
    f0 = f0 * f3;
    f0 = f4 + f0;
    goto L_088E68F8;
L_088E68F8:;
    f0 = f20 / f0;
    f1 = BITSF(LD32(v1+24));
    a2 = a0 + a1;
    f0 = f21 * f0;
    f1 = f1 + f0;
    ST32(v1+24, FBITS(f1));
    f0 = BITSF(LD32(a2+24));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = s1 + 1; goto L_088E6940; }
    goto L_088E6924;
L_088E6924:;
    v0 = LD32(a3+140);
    a0 = s0 + 0;
    v0 = v0 & s5;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088E6BBC; }
    goto L_088E6938;
L_088E6938:;
    s1 = s1 + 1;
    ST32(a2+24, 0);
    goto L_088E6940;
L_088E6940:;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E68C0; }
    goto L_088E694C;
L_088E694C:;
    f3 = BITSF(LD32(s7-12868));
    goto L_088E6950;
L_088E6950:;
    f1 = BITSF(LD32(s0+116));
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E69B4; }
    goto L_088E6964;
L_088E6964:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E69B4; }
    goto L_088E696C;
L_088E696C:;
    cnd_ = a3 == 0;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E69B4; }
    goto L_088E6974;
L_088E6974:;
    v0 = LD32(s0+128);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E69B4; }
    goto L_088E6984;
L_088E6984:;
    v1 = LD32(s0+104);
    v0 = LD32(v1+228);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = v1 + 80; goto L_088E6ABC; }
    goto L_088E6998;
L_088E6998:;
    cnd_ = fp == 0;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E69B4; }
    goto L_088E69A0;
L_088E69A0:;
    v0 = LD32(v1+220);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_088E6A90; }
    goto L_088E69B0;
L_088E69B0:;
    v0 = LD32(a3+140);
    goto L_088E69B4;
L_088E69B4:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E69E0; }
    goto L_088E69C0;
L_088E69C0:;
    v0 = LD32(s0+100);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E69E0; }
    goto L_088E69CC;
L_088E69CC:;
    cnd_ = s3 == 0;
    if (cnd_) { a0 = LD32(s0+96); goto L_088E69F8; }
    goto L_088E69D4;
L_088E69D4:;
    a0 = LD32(s0+124);
    cnd_ = a0 != 0;
    a2 = s0 + 4;
    if (cnd_) { goto L_088E6A80; }
    goto L_088E69E0;
L_088E69E0:;
    cnd_ = s3 == 0;
    if (cnd_) { a0 = LD32(s0+96); goto L_088E69F8; }
    goto L_088E69E8;
L_088E69E8:;
    v0 = LD32(s0+100);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_088E6A64; }
    goto L_088E69F4;
L_088E69F4:;
    a0 = LD32(s0+96);
    goto L_088E69F8;
L_088E69F8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088E6A1C; }
    goto L_088E6A00;
L_088E6A00:;
    v0 = LD32(s0+100);
    v1 = s6 < 0x1u;
    v0 = v0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E6A54; }
    goto L_088E6A18;
L_088E6A18:;
    goto L_088E6A1C;
L_088E6A1C:;
    sp = sp + 96;
    return f0;
L_088E6A54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6A5C;
L_088E6A5C:;
    ST32(s0+96, 0);
    goto L_088E6A18;
L_088E6A64:;
    a1 = LD32(s0+96);
    a3 = LD32(s0+104);
    t0 = LD32(s0+108);
    a2 = s2 + 0;
    f0 = func_088E269C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E6A78;
L_088E6A78:;
    a0 = LD32(s0+96);
    goto L_088E69F8;
L_088E6A80:;
    a1 = a3 + 0;
    f0 = func_088E6288(a0, a1, a2);
    goto L_088E6A88;
L_088E6A88:;
    goto L_088E69E0;
L_088E6A90:;
    a0 = s0 + 0;
    goto L_088E6A94;
L_088E6A94:;
    f12 = f21;
    { rv_t r_ = func_088E6E9C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6A9C;
L_088E6A9C:;
    v1 = LD32(s0+104);
    s1 = s1 + 1;
    v0 = LD32(v1+220);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088E6A94; }
    goto L_088E6AB4;
L_088E6AB4:;
    a3 = LD32(s0+108);
    goto L_088E69B0;
L_088E6ABC:;
    f2 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1+16));
    v0 = LD32(v1+4);
    f1 = f1 - f2;
    f0 = f0 - f2;
    a1 = v0 - 1;
    f4 = BITSF(a1);
    f0 = f3 / f0;
    f2 = (float)(s32)FBITS(f4);
    f1 = f1 * f0;
    f1 = f1 * f2;
    f0 = BITSF(F2I(f1, 1));
    a0 = FBITS(f0);
    cnd_ = (s32)a0 < 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088E6B10; }
    goto L_088E6AF8;
L_088E6AF8:;
    v0 = (s32)a0 < (s32)a1;
    cnd_ = v0 != 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088E6B90; }
    goto L_088E6B04;
L_088E6B04:;
    v1 = LD32(v1+8);
    v0 = a1 << 2;
    v0 = v0 + v1;
    goto L_088E6B10;
L_088E6B10:;
    f1 = BITSF(LD32(v0));
    goto L_088E6B14;
L_088E6B14:;
    v0 = LD32(s0);
    f0 = BITSF(LD32(v0+64));
    f2 = f1 * f0;
    f1 = BITSF(0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a3+140); goto L_088E69B4; }
    goto L_088E6B34;
L_088E6B34:;
    f1 = f2 * f21;
    f0 = BITSF(LD32(s0+112));
    v0 = D_08AECDBC - (-12868);
    f3 = BITSF(LD32(v0-12868));
    f0 = f0 + f1;
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    ST32(s0+112, FBITS(f0));
    if (cnd_) { goto L_088E69B0; }
    goto L_088E6B58;
L_088E6B58:;
    f21 = f3 / f2;
    f20 = f3;
    f0 = f0 - f20;
    goto L_088E6B64;
L_088E6B64:;
    a0 = s0 + 0;
    f12 = f0 * f21;
    ST32(s0+112, FBITS(f0));
    { rv_t r_ = func_088E6E9C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6B74;
L_088E6B74:;
    f0 = BITSF(LD32(s0+112));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 - f20; goto L_088E6B64; }
    goto L_088E6B88;
L_088E6B88:;
    a3 = LD32(s0+108);
    goto L_088E69B0;
L_088E6B90:;
    v1 = LD32(v1+8);
    v0 = a0 << 2;
    f2 = f1 - f2;
    v0 = v0 + v1;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f3 = f3 - f2;
    f1 = f1 * f2;
    f0 = f0 * f3;
    f1 = f0 + f1;
    goto L_088E6B14;
L_088E6BBC:;
    { rv_t r_ = func_088E7AEC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6BC4;
L_088E6BC4:;
    a3 = LD32(s0+108);
    s2 = LD32(s0+100);
    goto L_088E6940;
L_088E6BD0:;
    f0 = BITSF(LD32(a3+84));
    goto L_088E68F8;
L_088E6BD8:;
    f1 = BITSF(LD32(s7-12868));
    s1 = 0 + 0;
    cnd_ = s2 == 0;
    f20 = f21 / f0;
    if (cnd_) { goto L_088E694C; }
    goto L_088E6BE8;
L_088E6BE8:;
    f22 = f1;
    s4 = 0x4000000u;
    s5 = 1;
    v1 = LD32(s0+96);
    goto L_088E6BF8;
L_088E6BF8:;
    v0 = s1 << 5;
    a2 = v0 + v1;
    f0 = BITSF(LD32(a2+24));
    f0 = f0 + f20;
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    ST32(a2+24, FBITS(f0));
    if (cnd_) { goto L_088E6C6C; }
    goto L_088E6C18;
L_088E6C18:;
    v0 = LD32(a3+140);
    a0 = s0 + 0;
    v0 = v0 & s4;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088E6C58; }
    goto L_088E6C2C;
L_088E6C2C:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    cnd_ = v1 == s5;
    if (cnd_) { goto L_088E6C58; }
    goto L_088E6C3C;
L_088E6C3C:;
    s1 = s1 + 1;
    ST32(a2+24, 0);
    goto L_088E6C44;
L_088E6C44:;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+96); goto L_088E6BF8; }
    goto L_088E6C50;
L_088E6C50:;
    f3 = BITSF(LD32(s7-12868));
    goto L_088E6950;
L_088E6C58:;
    { rv_t r_ = func_088E7AEC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6C60;
L_088E6C60:;
    a3 = LD32(s0+108);
    s2 = LD32(s0+100);
    goto L_088E6C44;
L_088E6C6C:;
    s1 = s1 + 1;
    goto L_088E6C44;
L_088E6C74:;
    f1 = BITSF(LD32(s0+120));
    f0 = BITSF(LD32(v1+216));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = a0 | 0x1;
    if (cnd_) { goto L_088E6854; }
    goto L_088E6C8C;
L_088E6C8C:;
    ST32(s0+128, v0);
    goto L_088E6854;
L_088E6C94:;
    f1 = BITSF(LD32(s1-31328));
    f0 = BITSF(LD32(s0+120));
    f0 = f0 - f1;
    goto L_088E6828;
L_088E6CA4:;
    f12 = BITSF(LD32(v1+188));
    a0 = s0 + 4;
    a1 = s0 + 52;
    { u64 r_ = func_088505AC(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6CB4;
L_088E6CB4:;
    v1 = D_08B28CA4 - (-29532);
    f0 = BITSF(LD32(v1-29532));
    f1 = BITSF(LD32(s0+56));
    v1 = LD32(s0+104);
    f0 = f0 * f21;
    f1 = f1 + f0;
    ST32(s0+56, FBITS(f1));
    goto L_088E66F4;
}

/* 088E6CD4 */
rv_t func_088E6CD4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088E6CD4:;
    sp = sp - 48;
    s1 = a1 & 0xff;
    v0 = LD32(a0+104);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E6D0C; }
    goto L_088E6CF4;
L_088E6CF4:;
    v0 = LD32(a0+108);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E6D10; }
    goto L_088E6D00;
L_088E6D00:;
    v0 = LD32(a0+100);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E6D20; }
    goto L_088E6D0C;
L_088E6D0C:;
    goto L_088E6D10;
L_088E6D10:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088E6D20:;
    { u64 r_ = func_088E7BA0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6D28;
L_088E6D28:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E6E3C; }
    goto L_088E6D30;
L_088E6D30:;
    cnd_ = s1 != 0;
    if (cnd_) { v1 = LD32(s0+124); goto L_088E6DC4; }
    goto L_088E6D38;
L_088E6D38:;
    v0 = LD32(s0+108);
    v1 = 11;
    a0 = LD32(v0+80);
    cnd_ = a0 == v1;
    v1 = LD32(s0+124);
    if (cnd_) { goto L_088E6DC4; }
    goto L_088E6D4C;
L_088E6D4C:;
    cnd_ = v1 == 0;
    v0 = D_08AECDC4 - (-12860);
    if (cnd_) { goto L_088E6D9C; }
    goto L_088E6D54;
L_088E6D54:;
    v0 = v1 + 4;
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, FBITS(f3));
    goto L_088E6D78;
L_088E6D78:;
    t0 = LD32(s0);
    a0 = LD32(s0+108);
    a1 = LD32(s0+96);
    a2 = LD32(s0+100);
    a3 = sp + 16;
    t1 = 0 + 0;
    { rv_t r_ = func_088E92CC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6D94;
L_088E6D94:;
    goto L_088E6D10;
L_088E6D9C:;
    f0 = BITSF(LD32(v0-12860));
    ST32(sp+28, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f0));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f0));
    goto L_088E6D78;
L_088E6DC4:;
    cnd_ = v1 == 0;
    v0 = D_08AECDC4 - (-12860);
    if (cnd_) { goto L_088E6E14; }
    goto L_088E6DCC;
L_088E6DCC:;
    v0 = v1 + 4;
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f3));
    goto L_088E6DF0;
L_088E6DF0:;
    a3 = LD32(s0+108);
    a0 = LD32(s0);
    a1 = LD32(s0+96);
    a2 = LD32(s0+100);
    t0 = sp + 0;
    t1 = 0 + 0;
    { rv_t r_ = func_088E261C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6E0C;
L_088E6E0C:;
    goto L_088E6D10;
L_088E6E14:;
    f0 = BITSF(LD32(v0-12860));
    ST32(sp+12, FBITS(f0));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f0));
    ST32(sp+28, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    goto L_088E6DF0;
L_088E6E3C:;
    a0 = s0 + 0;
    { u64 r_ = func_088E9238(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E6E44;
L_088E6E44:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E6D10; }
    goto L_088E6E4C;
L_088E6E4C:;
    goto L_088E6D30;
}

/* 088E6E54 */
float func_088E6E54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E6E54:;
    sp = sp - 16;
    v0 = LD32(a0+104);
    cnd_ = v0 == 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088E6E78; }
    goto L_088E6E68;
L_088E6E68:;
    v0 = LD32(v0+228);
    v1 = 1;
    v0 = (v0 >> 16) & 0x1;
    if (v0 != 0) a1 = v1;
    goto L_088E6E78;
L_088E6E78:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E6E8C; }
    goto L_088E6E80;
L_088E6E80:;
    goto L_088E6E84;
L_088E6E84:;
    sp = sp + 16;
    return f0;
L_088E6E8C:;
    f0 = func_088E7B58(a0);
    goto L_088E6E94;
L_088E6E94:;
    goto L_088E6E84;
}

/* 088E6E9C */
rv_t func_088E6E9C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[640] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 640);
L_088E6E9C:;
    sp = sp - 640;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    f21 = f12;
    if (cnd_) { goto L_088E6F14; }
    goto L_088E6EE0;
L_088E6EE0:;
    goto L_088E6EE4;
L_088E6EE4:;
    sp = sp + 640;
    return (rv_t){ v0, v1, f0 };
L_088E6F14:;
    a0 = LD32(a0+104);
    f12 = BITSF(LD32(s1+116));
    s3 = D_08B25AC0 - (23232);
    a0 = a0 + 100;
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E6F38;
L_088E6F38:;
    v0 = LD32(s3+23232);
    a1 = s3 + 23232;
    v1 = LD32(a1+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    s4 = D_08AECDC8 - (-12856);
    v1 = v1 + v0;
    f2 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(s4-12856));
    ST32(a1+4, v1);
    {u32 a_=sp+(528);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    f2 = f2 * f1;
    ST32(s3+23232, v0);
    {u32 a_=sp+(544);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    {u32 a_=sp+(576);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E6EE0; }
    goto L_088E6F94;
L_088E6F94:;
    a0 = LD32(s1+104);
    v0 = LD32(s1+100);
    v1 = LD32(a0+220);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E6EE0; }
    goto L_088E6FAC;
L_088E6FAC:;
    v0 = LD32(a0+228);
    v1 = D_08B285A0 - (-31328);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(v1-31328));
    if (cnd_) { goto L_088E6FC8; }
    goto L_088E6FC0;
L_088E6FC0:;
    f0 = BITSF(LD32(a0+196));
    f2 = f2 * f0;
    goto L_088E6FC8;
L_088E6FC8:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    v0 = D_08AECDCC - (-12852);
    if (cnd_) { goto L_088E7AB4; }
    goto L_088E6FDC;
L_088E6FDC:;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    goto L_088E6FE8;
L_088E6FE8:;
    a1 = LD32(a1+224);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088E7054; }
    goto L_088E6FF8;
L_088E6FF8:;
    a0 = LD32(s1);
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v1 = LD32(a0);
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = LD32(v1+28);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E701C;
L_088E701C:;
    {u32 a_=sp+(528);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(576);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E7050; }
    goto L_088E7030;
L_088E7030:;
    a0 = v0 + 0;
    { u64 r_ = func_088E84E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E7038;
L_088E7038:;
    s2 = v0 + 0;
    {u32 a_=sp+(528);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(576);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E6EE0; }
    goto L_088E7050;
L_088E7050:;
    a0 = LD32(s1+104);
    goto L_088E7054;
L_088E7054:;
    f0 = BITSF(LD32(a0+176));
    f1 = BITSF(LD32(s1+116));
    s5 = D_08AECDCC - (-12852);
    f0 = f21 / f0;
    f2 = BITSF(LD32(s5-12852));
    a0 = sp + 192;
    a1 = sp + 196;
    a2 = sp + 200;
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+200, FBITS(f2));
    ST32(sp+196, 0);
    f1 = f1 - f0;
    ST32(sp+192, FBITS(f1));
    f0 = func_088E8538(a0, a1, a2);
    goto L_088E7098;
L_088E7098:;
    f22 = f0;
    a0 = LD32(s1+96);
    {u32 a_=sp+(528);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = a0 == 0;
    {u32 a_=sp+(576);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E7A70; }
    goto L_088E70B4;
L_088E70B4:;
    v0 = LD32(s1+100);
    v1 = v0 + 1;
    v0 = v0 << 5;
    s0 = a0 + v0;
    cnd_ = s2 == 0;
    ST32(s1+100, v1);
    if (cnd_) { goto L_088E7A54; }
    goto L_088E70CC;
L_088E70CC:;
    v0 = s2 + 12;
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s2+12));
    f5 = BITSF(LD32(v0+4));
    f3 = f3 * f21;
    f4 = f4 * f21;
    f5 = f5 * f21;
    ST32(sp+40, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s2+4));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    goto L_088E7120;
L_088E7120:;
    ST32(s0+4, FBITS(f2));
    a0 = LD32(s1+104);
    v0 = LD32(a0+228);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+228); goto L_088E7188; }
    goto L_088E7138;
L_088E7138:;
    v0 = s1 + 52;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s1+52));
    f4 = BITSF(LD32(v0+4));
    f5 = f5 * f21;
    f3 = f3 * f21;
    f4 = f4 * f21;
    ST32(sp+40, FBITS(f5));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    v0 = LD32(a0+228);
    goto L_088E7188;
L_088E7188:;
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+92); goto L_088E71E0; }
    goto L_088E7194;
L_088E7194:;
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f5 * f21;
    f4 = f4 * f21;
    f3 = f3 * f21;
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f3));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f5;
    f1 = f1 - f4;
    f2 = f2 - f3;
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    v0 = LD32(s1+92);
    goto L_088E71E0;
L_088E71E0:;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    a2 = s3 + 23232;
    if (cnd_) { goto L_088E7A10; }
    goto L_088E71EC;
L_088E71EC:;
    a0 = sp + 16;
    a1 = s1 + 64;
    s2 = s1 + 16;
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    func_088EA81C(a0, a1, a2);
    goto L_088E720C;
L_088E720C:;
    {u32 a_=sp+(576);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(s2+4);
    v1 = LD32(s2+8);
    v0 = LD32(s1+16);
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v0);}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(s2+16);
    {v[49]=BITSF(a0);}
    {u32 a_=sp+(208);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[50]=BITSF(v1);}
    v1 = LD32(s2+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(240);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s2+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(s2+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(s2+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(s2+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp+16);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    {v1=FBITS(v[16]);}
    {a0=FBITS(v[17]);}
    ST32(sp+48, v1);
    f5 = BITSF(v0);
    f4 = BITSF(v1);
    ST32(sp+52, a0);
    f3 = BITSF(a0);
    ST32(sp+56, v0);
    ST32(sp+32, v1);
    ST32(sp+36, a0);
    ST32(sp+40, v0);
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 + f4;
    f1 = f1 + f3;
    f2 = f2 + f5;
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    goto L_088E72E8;
L_088E72E8:;
    a0 = LD32(s1+104);
    f12 = f22;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E72F4;
L_088E72F4:;
    a0 = LD32(s1+104);
    f23 = f0;
    v1 = a0 + 20;
    f2 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+16));
    v0 = LD32(v1+4);
    f0 = f22 - f2;
    f1 = f1 - f2;
    a2 = v0 - 1;
    f4 = BITSF(a2);
    f0 = f0 / f1;
    f2 = (float)(s32)FBITS(f4);
    f0 = f0 * f2;
    f1 = BITSF(F2I(f0, 1));
    a1 = FBITS(f1);
    cnd_ = (s32)a1 < 0;
    f3 = BITSF(LD32(s5-12852));
    if (cnd_) { goto L_088E79FC; }
    goto L_088E7338;
L_088E7338:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    f6 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088E7978; }
    goto L_088E7344;
L_088E7344:;
    v1 = LD32(v1+8);
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    goto L_088E7364;
L_088E7364:;
    ST32(sp+56, FBITS(f0));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    goto L_088E7370;
L_088E7370:;
    a0 = a0 + 40;
    f12 = f22;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E737C;
L_088E737C:;
    a1 = LD32(s1+104);
    a0 = sp + 32;
    f12 = f22;
    a1 = a1 + 60;
    f20 = f0;
    func_08AB1490(a0, a1, f12);
    goto L_088E7394;
L_088E7394:;
    v0 = LD32(s3+23232);
    t1 = s3 + 23232;
    a0 = LD32(t1+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    f9 = BITSF(LD32(s4-12856));
    a0 = a0 + v0;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(s5-12852));
    ST32(s3+23232, v0);
    f1 = f1 * f9;
    ST32(t1+4, a0);
    f20 = f20 * f1;
    ST32(sp+16, 0);
    f0 = f0 - f20;
    ST32(sp+20, 0);
    f1 = f23 * f0;
    t2 = LD32(s1+104);
    ST32(sp+24, FBITS(f1));
    v0 = LD32(t2+228);
    v0 = v0 & 0x8000;
    cnd_ = v0 == 0;
    t3 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088E7410; }
    goto L_088E7400;
L_088E7400:;
    v0 = LD32(s1);
    f0 = BITSF(LD32(v0+56));
    f0 = f1 * f0;
    ST32(sp+24, FBITS(f0));
    goto L_088E7410;
L_088E7410:;
    v0 = LD32(t3+23232);
    a1 = LD32(t1+4);
    f4 = BITSF(LD32(sp+32));
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = (u32)((s32)v0 >> 16);
    a1 = a1 + v0;
    a0 = v0 << 16;
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    a0 = a0 + v1;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f3 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AECDD0 - (-12848);
    v1 = D_08AECDD4 - (-12844);
    f8 = BITSF(LD32(v0-12848));
    f7 = BITSF(LD32(v1-12844));
    f2 = (float)(s32)FBITS(f3);
    f1 = f1 * f9;
    f6 = f8 - f7;
    v0 = (u32)((s32)a0 >> 16);
    a2 = a0 << 16;
    f2 = f2 * f9;
    a1 = a1 + a0;
    a2 = a2 + v0;
    f1 = f1 * f6;
    a2 = a2 + a1;
    v1 = a2 >> 1;
    f0 = BITSF(v1);
    f2 = f2 * f6;
    f1 = f1 + f7;
    f5 = (float)(s32)FBITS(f0);
    f3 = BITSF(LD32(sp+36));
    f2 = f2 + f7;
    f0 = BITSF(LD32(sp+48));
    f4 = f4 * f1;
    f1 = BITSF(LD32(sp+52));
    f5 = f5 * f9;
    f3 = f3 * f2;
    f0 = f0 * f8;
    f1 = f1 * f8;
    f5 = f5 * f6;
    ST32(sp+72, 0);
    f0 = f0 + f4;
    f1 = f1 + f3;
    f5 = f5 + f7;
    {u32 a_=sp+(304);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+64, FBITS(f0));
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {u32 a_=sp+(320);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+68, FBITS(f1));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[115]=0.31830988618f;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[115];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);v[116]=d0;v[117]=d1;v[118]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[117];float t0=v[118];float d0=s0*t0;v[83]=d0;}
    {float s0=v[121];float t0=v[118];float d0=s0*t0;v[81]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;v[82]=d0;}
    {float s0=v[120];float t0=v[83];float d0=s0*t0;v[80]=d0;}
    {float s0=v[81];float s1=v[82];float s2=v[83];float t0=v[116];v[81]=s0*t0;v[82]=s1*t0;v[83]=s2*t0;}
    {float s0=v[121];float t0=v[122];float d0=s0*t0;v[87]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;v[85]=d0;}
    {float s0=v[121];float t0=v[118];float d0=s0*t0;v[86]=d0;}
    {float s0=v[116];float t0=v[87];float d0=s0*t0;v[84]=d0;}
    {float s0=-(v[85]);float s1=-(v[86]);float s2=v[87];float t0=v[120];v[85]=s0*t0;v[86]=s1*t0;v[87]=s2*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[99]));}
    {u32 a_=sp+(336);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(sp+56));
    f0 = BITSF(LD32(sp+40));
    a3 = a1 + a2;
    f1 = f1 * f8;
    f0 = f0 * f5;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+96, 0);
    f1 = f1 + f0;
    t0 = s0 + 12;
    ST32(sp+100, 0);
    ST32(t3+23232, a0);
    ST32(sp+104, FBITS(f1));
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[115]=0.31830988618f;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[115];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);v[116]=d0;v[117]=d1;v[118]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[117];float t0=v[118];float d0=s0*t0;v[83]=d0;}
    {float s0=v[121];float t0=v[118];float d0=s0*t0;v[81]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;v[82]=d0;}
    {float s0=v[120];float t0=v[83];float d0=s0*t0;v[80]=d0;}
    {float s0=v[81];float s1=v[82];float s2=v[83];float t0=v[116];v[81]=s0*t0;v[82]=s1*t0;v[83]=s2*t0;}
    {float s0=v[121];float t0=v[122];float d0=s0*t0;v[87]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;v[85]=d0;}
    {float s0=v[121];float t0=v[118];float d0=s0*t0;v[86]=d0;}
    {float s0=v[116];float t0=v[87];float d0=s0*t0;v[84]=d0;}
    {float s0=-(v[85]);float s1=-(v[86]);float s2=v[87];float t0=v[120];v[85]=s0*t0;v[86]=s1*t0;v[87]=s2*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[99]));}
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    {v[8]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[9]=BITSF(v1);}
    v1 = LD32(sp+124);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+80);
    {v[11]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+84);
    v0 = LD32(sp+88);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+92);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[7]);}
    {v1=FBITS(v[4]);}
    {a0=FBITS(v[5]);}
    f4 = BITSF(v0);
    ST32(sp+144, v1);
    {v0=FBITS(v[6]);}
    ST32(t1+4, a3);
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+148, a0);
    ST32(sp+152, v0);
    ST32(sp+156, FBITS(f4));
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    ST32(t3+23232, a2);
    ST32(sp+128, v0);
    ST32(sp+132, v1);
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+136, v0);
    ST32(sp+140, v1);
    {v[112]=BITSF(LD32(sp+(128)));}
    {v[113]=BITSF(LD32(sp+(132)));}
    {v[114]=BITSF(LD32(sp+(136)));}
    {v[115]=BITSF(LD32(sp+(140)));}
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
    v0 = LD32(s1+16);
    v1 = LD32(s2+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(s2+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    v0 = LD32(s2+12);
    v1 = LD32(s2+16);
    a0 = LD32(s2+32);
    {u32 a_=sp+(368);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(s2+20);
    {v[1]=BITSF(v1);}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    v0 = LD32(s2+24);
    v1 = LD32(s2+28);
    {u32 a_=sp+(384);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(320);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {v[0]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    v1 = LD32(sp+24);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[6]);}
    {v1=FBITS(v[4]);}
    {a0=FBITS(v[5]);}
    ST32(sp+176, v1);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(sp+180, a0);
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    ST32(sp+160, v1);
    ST32(sp+164, a0);
    ST32(sp+184, v0);
    ST32(sp+168, v0);
    ST32(s0+12, v1);
    ST32(t0+4, a0);
    ST32(t0+8, v0);
    v0 = LD32(t2+228);
    v0 = v0 & 0x1000;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+108); goto L_088E7828; }
    goto L_088E77D8;
L_088E77D8:;
    f0 = BITSF(LD32(t2+200));
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    ST32(sp+176, FBITS(f5));
    ST32(sp+180, FBITS(f4));
    ST32(sp+184, FBITS(f3));
    f0 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f0 = f0 + f5;
    f1 = f1 + f4;
    f2 = f2 + f3;
    ST32(s0+12, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f2));
    a1 = LD32(s1+108);
    goto L_088E7828;
L_088E7828:;
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_088E6EE4; }
    goto L_088E7830;
L_088E7830:;
    v0 = LD32(t3+23232);
    v1 = LD32(t1+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f0 = BITSF(a0);
    v1 = v1 + v0;
    ST32(t1+4, v1);
    f1 = (float)(s32)FBITS(f0);
    v1 = 0x20000u;
    ST32(t3+23232, v0);
    f1 = f1 * f9;
    ST32(s0+28, FBITS(f1));
    v0 = LD32(a1+140);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a1+84)); goto L_088E78A4; }
    goto L_088E787C;
L_088E787C:;
    v0 = D_08AECDD8 - (-12840);
    f0 = BITSF(LD32(v0-12840));
    f3 = BITSF(LD32(a1+88));
    f4 = BITSF(LD32(a1+84));
    f0 = f1 * f0;
    f1 = BITSF(F2I(f0, 1));
    f2 = (float)(s32)FBITS(f1);
    f0 = f0 - f2;
    f0 = f0 * f3;
    f0 = f4 + f0;
    goto L_088E78A4;
L_088E78A4:;
    f0 = f21 / f0;
    f2 = BITSF(LD32(s5-12852));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_088E78BC; }
    goto L_088E78BC;
L_088E78BC:;
    ST32(s0+24, FBITS(f2));
    f3 = BITSF(LD32(s0+12));
    f5 = BITSF(LD32(t0+8));
    f4 = BITSF(LD32(t0+4));
    f3 = f3 * f21;
    f5 = f5 * f21;
    f4 = f4 * f21;
    ST32(sp+176, FBITS(f3));
    ST32(sp+184, FBITS(f5));
    ST32(sp+180, FBITS(f4));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 + f3;
    f1 = f1 + f4;
    f2 = f2 + f5;
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    v0 = LD32(t2+228);
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E6EE4; }
    goto L_088E7918;
L_088E7918:;
    f1 = f21 * f21;
    v0 = D_08AECDDC - (-12836);
    f0 = BITSF(LD32(v0-12836));
    v1 = t2 + 160;
    f5 = BITSF(LD32(t2+160));
    f1 = f1 * f0;
    f4 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+4));
    f4 = f4 * f1;
    f5 = f5 * f1;
    f3 = f3 * f1;
    ST32(sp+184, FBITS(f4));
    ST32(sp+176, FBITS(f5));
    ST32(sp+180, FBITS(f3));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    f1 = f1 + f5;
    f2 = f2 + f3;
    f0 = f0 + f4;
    ST32(s0, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    ST32(s0+4, FBITS(f2));
    goto L_088E6EE4;
L_088E7978:;
    v1 = LD32(v1+8);
    v0 = a1 << 1;
    v0 = v0 + a1;
    f6 = f0 - f6;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f5 = BITSF(LD32(v1));
    f0 = f3 - f6;
    f4 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+4));
    v0 = v1 + 12;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    f0 = BITSF(LD32(v1+12));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 * f6;
    f2 = f2 * f6;
    f1 = f1 * f6;
    f5 = f5 + f0;
    f4 = f4 + f2;
    f3 = f3 + f1;
    ST32(sp+16, FBITS(f0));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f4));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    goto L_088E7370;
L_088E79FC:;
    v0 = LD32(v1+8);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    goto L_088E7364;
L_088E7A10:;
    a1 = s1 + 64;
    a0 = sp + 48;
    func_088EA81C(a0, a1, a2);
    goto L_088E7A1C;
L_088E7A1C:;
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    s2 = s1 + 16;
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f3));
    ST32(s0+8, FBITS(f4));
    goto L_088E72E8;
L_088E7A54:;
    v0 = s1 + 4;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    goto L_088E7120;
L_088E7A70:;
    v0 = LD32(s1+104);
    s0 = LD32(v0+220);
    a0 = s0 << 5;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E7A80;
L_088E7A80:;
    v1 = s0 - 1;
    {u32 a_=sp+(528);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = s0 == 0;
    {u32 a_=sp+(576);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088E7AA8; }
    goto L_088E7A98;
L_088E7A98:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_088E7AA0;
L_088E7AA0:;
    cnd_ = v1 != a0;
    v1 = v1 - 1;
    if (cnd_) { goto L_088E7AA0; }
    goto L_088E7AA8;
L_088E7AA8:;
    ST32(s1+96, v0);
    a0 = v0 + 0;
    goto L_088E70B4;
L_088E7AB4:;
    f1 = BITSF(LD32(v0-12852));
    v1 = LD32(s1);
    f1 = f1 / f2;
    v0 = v1 + 8;
    f3 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f0 = f0 * f1;
    f3 = f3 * f1;
    f2 = f2 * f1;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    goto L_088E6FE8;
}

/* 088E7AEC */
rv_t func_088E7AEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088E7AEC:;
    a3 = LD32(a0+100);
    v1 = LD32(a0+96);
    a1 = a1 << 5;
    a3 = a3 - 1;
    v0 = a3 << 5;
    v0 = v1 + v0;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    v1 = v1 + a1;
    ST32(v1+4, FBITS(f0));
    a1 = v0 + 12;
    a2 = v1 + 12;
    ST32(v1+8, FBITS(f1));
    ST32(v1, FBITS(f2));
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(v0+12));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    ST32(v1+12, FBITS(f2));
    f0 = BITSF(LD32(v0+28));
    f1 = BITSF(LD32(v0+24));
    ST32(a0+100, a3);
    ST32(v1+28, FBITS(f0));
    ST32(v1+24, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 088E7B58 */
float func_088E7B58(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E7B58:;
    sp = sp - 16;
    v0 = LD32(a0+100);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E7B80; }
    goto L_088E7B70;
L_088E7B70:;
    goto L_088E7B74;
L_088E7B74:;
    sp = sp + 16;
    return f0;
L_088E7B80:;
    a0 = s0 + 0;
    goto L_088E7B84;
L_088E7B84:;
    a1 = 0 + 0;
    { rv_t r_ = func_088E7AEC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E7B8C;
L_088E7B8C:;
    v0 = LD32(s0+100);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088E7B84; }
    goto L_088E7B98;
L_088E7B98:;
    goto L_088E7B74;
}

/* 088E7BA0 */
u64 func_088E7BA0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088E7BA0:;
    v1 = LD32(a0+108);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E7BB8; }
    goto L_088E7BAC;
L_088E7BAC:;
    v0 = LD32(v1+80);
    v0 = v0 ^ 0xb;
    v0 = v0 < 0x1u;
    goto L_088E7BB8;
L_088E7BB8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088E7BC0 */
void func_088E7BC0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_088E7BC0:;
    sp = sp - 224;
    s2 = a1 + 0;
    v0 = LD32(a0+104);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E7FA4; }
    goto L_088E7BF0;
L_088E7BF0:;
    v0 = LD32(a0+108);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088E7FA8; }
    goto L_088E7BFC;
L_088E7BFC:;
    t0 = LD32(a0+64);
    v0 = 1;
    cnd_ = t0 == v0;
    v0 = (s32)t0 < 2;
    if (cnd_) { goto L_088E81D4; }
    goto L_088E7C0C;
L_088E7C0C:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088E7C24; }
    goto L_088E7C14;
L_088E7C14:;
    cnd_ = t0 == v0;
    v0 = 3;
    if (cnd_) { goto L_088E81B0; }
    goto L_088E7C1C;
L_088E7C1C:;
    cnd_ = t0 == v0;
    if (cnd_) { f0 = BITSF(LD32(a0+68)); goto L_088E8180; }
    goto L_088E7C24;
L_088E7C24:;
    ST32(sp+20, 0);
    ST32(sp+16, 0);
    ST32(sp+12, 0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    ST32(sp, 0);
    goto L_088E7C3C;
L_088E7C3C:;
    v0 = LD32(s0+92);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    s1 = s0 + 16;
    if (cnd_) { goto L_088E7C68; }
    goto L_088E7C4C;
L_088E7C4C:;
    v1 = t0 ^ 0x1;
    v0 = t0 ^ 0x3;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088E8168; }
    goto L_088E7C68;
L_088E7C68:;
    f2 = BITSF(LD32(s0+4));
    goto L_088E7C6C;
L_088E7C6C:;
    f3 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    v0 = s0 + 4;
    f7 = BITSF(LD32(v0+8));
    f6 = BITSF(LD32(v0+4));
    f0 = f0 + f2;
    f3 = f3 + f2;
    f4 = BITSF(LD32(sp+8));
    f5 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(sp+20));
    f4 = f4 + f6;
    f1 = f1 + f6;
    f2 = f2 + f7;
    f5 = f5 + f7;
    a1 = LD32(s0+104);
    f20 = BITSF(0);
    a0 = s0 + 0;
    a2 = sp + 96;
    ST32(sp+4, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp, FBITS(f3));
    ST32(sp+8, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+96, FBITS(f20));
    func_088E829C(a1, a2);
    goto L_088E7CD8;
L_088E7CD8:;
    a2 = sp + 100;
    a1 = LD32(s0+104);
    a3 = a2 + 0;
    a0 = s0 + 0;
    a1 = a1 + 60;
    ST32(sp+100, FBITS(f20));
    func_088E8360(a1, a2, a3);
    goto L_088E7CF4;
L_088E7CF4:;
    a2 = sp + 104;
    a1 = LD32(s0+104);
    a0 = s0 + 0;
    a3 = a2 + 0;
    a1 = a1 + 20;
    ST32(sp+104, FBITS(f20));
    func_088E8360(a1, a2, a3);
    goto L_088E7D10;
L_088E7D10:;
    v0 = D_08AECDE0 - (-12832);
    f1 = BITSF(LD32(sp+104));
    f0 = BITSF(LD32(sp+100));
    f2 = BITSF(LD32(v0-12832));
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f1; goto L_088E7D34; }
    goto L_088E7D34;
L_088E7D34:;
    a0 = LD32(s0+108);
    v0 = 0x20000u;
    f20 = f2;
    v1 = LD32(a0+140);
    ST32(sp+100, FBITS(f2));
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    f21 = BITSF(LD32(a0+84));
    if (cnd_) { goto L_088E7D5C; }
    goto L_088E7D54;
L_088E7D54:;
    f0 = BITSF(LD32(a0+88));
    f21 = f21 + f0;
    goto L_088E7D5C;
L_088E7D5C:;
    s3 = D_08AECDE4 - (-12828);
    f1 = BITSF(LD32(s3-12828));
    f0 = BITSF(LD32(sp+96));
    fcc = FCMP(f1, f20, 12);
    f6 = f0 * f21;
    cnd_ = !fcc;
    ST32(sp+52, FBITS(f6));
    if (cnd_) { goto L_088E8158; }
    goto L_088E7D78;
L_088E7D78:;
    v0 = D_08AECDE8 - (-12824);
    f0 = BITSF(LD32(v0-12824));
    {v[4]=0.63661977236f;}
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f20 * f0;
    ST32(sp+100, FBITS(f1));
    f20 = f1;
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    f0 = f1 * f6;
    ST32(sp+48, FBITS(f0));
    goto L_088E7DB8;
L_088E7DB8:;
    f0 = BITSF(LD32(v0-12824));
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = sp + 32;
    f0 = f20 * f0;
    a2 = s1 + 0;
    a1 = a0 + 0;
    a3 = 0 + 0;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = f6 * f0;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+44, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E7E0C;
L_088E7E0C:;
    f6 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+36));
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+12));
    f6 = f6 + f0;
    f0 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+20));
    f5 = f5 + f0;
    f0 = BITSF(LD32(sp+44));
    f1 = BITSF(LD32(sp+16));
    ST32(sp+4, FBITS(f6));
    f4 = f4 + f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp, FBITS(f5));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+52));
    ST32(sp+12, FBITS(f4));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+48));
    ST32(sp+8, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+20, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    a2 = LD32(s0+104);
    v0 = LD32(a2+228);
    v0 = v0 & 0xc00;
    cnd_ = v0 != 0;
    a1 = a2 + 120;
    if (cnd_) { goto L_088E7FC8; }
    goto L_088E7E80;
L_088E7E80:;
    v0 = LD32(a2+228);
    goto L_088E7E84;
L_088E7E84:;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+108); goto L_088E7F38; }
    goto L_088E7E90;
L_088E7E90:;
    a0 = s0 + 52;
    v0 = LD32(s0+52);
    v1 = LD32(a0+4);
    a1 = LD32(a0+8);
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(a2+176));
    f5 = BITSF(LD32(sp+12));
    f7 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    v0 = D_08B28CA4 - (-29532);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f6 = BITSF(LD32(v0-29532));
    f1 = f0 * f2;
    f2 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+16));
    f5 = f5 + f1;
    f0 = f0 - f1;
    f7 = f7 + f1;
    f4 = f4 - f1;
    f3 = f3 + f1;
    f2 = f2 - f1;
    ST32(sp+12, FBITS(f5));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f7));
    f0 = BITSF(LD32(a2+176));
    f1 = BITSF(LD32(s3-12828));
    f6 = f6 * f0;
    f6 = f6 * f0;
    f6 = f6 * f1;
    f5 = f5 + f6;
    ST32(sp+12, FBITS(f5));
    a1 = LD32(s0+108);
    goto L_088E7F38;
L_088E7F38:;
    a0 = s0 + 0;
    a2 = sp + 116;
    a1 = a1 + 20;
    ST32(sp+116, 0);
    func_088E829C(a1, a2);
    goto L_088E7F4C;
L_088E7F4C:;
    a0 = s2 + 0;
    f0 = BITSF(LD32(sp+116));
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+16));
    f5 = f5 - f0;
    f4 = f4 + f0;
    f6 = f6 + f0;
    f3 = f3 - f0;
    f2 = f2 + f0;
    f1 = f1 - f0;
    a1 = sp + 0;
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f3));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f6));
    f0 = func_08AA1680(a0, a1);
    goto L_088E7FA4;
L_088E7FA4:;
    goto L_088E7FA8;
L_088E7FA8:;
    sp = sp + 224;
    return;
L_088E7FC8:;
    f20 = BITSF(0);
    a0 = s0 + 0;
    a2 = sp + 108;
    a3 = sp + 112;
    ST32(sp+108, FBITS(f20));
    ST32(sp+112, FBITS(f20));
    func_088E82F0(a1, a2, a3);
    goto L_088E7FE4;
L_088E7FE4:;
    a2 = LD32(s0+104);
    v0 = LD32(a2+228);
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+108));
    if (cnd_) { goto L_088E80E4; }
    goto L_088E7FF8;
L_088E7FF8:;
    f5 = BITSF(LD32(sp+108));
    fcc = FCMP(f5, f20, 12);
    cnd_ = fcc;
    v0 = a2 + 160;
    if (cnd_) { goto L_088E8084; }
    goto L_088E800C;
L_088E800C:;
    f5 = BITSF(LD32(sp+112));
    fcc = FCMP(f20, f5, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(a2+228); goto L_088E7E84; }
    goto L_088E8020;
L_088E8020:;
    v0 = a2 + 160;
    f0 = f21 * f21;
    f3 = BITSF(LD32(a2+160));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s3-12828));
    f3 = f3 * f5;
    f2 = f2 * f5;
    f4 = f4 * f5;
    f0 = f0 * f1;
    a2 = sp + 80;
    a0 = s0 + 0;
    a1 = sp + 0;
    f5 = f4 * f0;
    f1 = f3 * f0;
    f0 = f2 * f0;
    ST32(sp+64, FBITS(f3));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f0));
    ST32(sp+88, FBITS(f5));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f4));
    func_088E8208(a1, a2);
    goto L_088E807C;
L_088E807C:;
    a2 = LD32(s0+104);
    goto L_088E7E80;
L_088E8084:;
    f0 = f21 * f21;
    f3 = BITSF(LD32(a2+160));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s3-12828));
    f3 = f3 * f5;
    f2 = f2 * f5;
    f4 = f4 * f5;
    f0 = f0 * f1;
    a2 = sp + 64;
    a0 = s0 + 0;
    a1 = sp + 0;
    f5 = f4 * f0;
    f1 = f3 * f0;
    f0 = f2 * f0;
    ST32(sp+80, FBITS(f3));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f5));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f4));
    func_088E8208(a1, a2);
    goto L_088E80DC;
L_088E80DC:;
    a2 = LD32(s0+104);
    goto L_088E800C;
L_088E80E4:;
    f2 = BITSF(LD32(sp+112));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_088E80FC; }
    goto L_088E80FC;
L_088E80FC:;
    f0 = f21 * f21;
    f1 = BITSF(LD32(s3-12828));
    f6 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+4));
    f0 = f2 * f0;
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 * f1;
    f1 = BITSF(LD32(sp+20));
    f6 = f6 - f0;
    f5 = f5 + f0;
    f4 = f4 - f0;
    f3 = f3 + f0;
    f2 = f2 - f0;
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f5));
    ST32(sp, FBITS(f4));
    ST32(sp+12, FBITS(f3));
    ST32(sp+8, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f6));
    goto L_088E7E80;
L_088E8158:;
    ST32(sp+48, 0);
    {v[4]=0.63661977236f;}
    v0 = D_08AECDE8 - (-12824);
    goto L_088E7DB8;
L_088E8168:;
    a1 = sp + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E8178;
L_088E8178:;
    f2 = BITSF(LD32(s0+4));
    goto L_088E7C6C;
L_088E8180:;
    f4 = BITSF(LD32(a0+72));
    f5 = BITSF(LD32(a0+76));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    f2 = BITSF(FBITS(f4) ^ 0x80000000u);
    f3 = BITSF(FBITS(f5) ^ 0x80000000u);
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+12, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    goto L_088E7C3C;
L_088E81B0:;
    f1 = BITSF(LD32(a0+68));
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f1));
    goto L_088E7C3C;
L_088E81D4:;
    v0 = LD32(a0+68);
    v1 = LD32(a0+72);
    a1 = LD32(s0+80);
    a0 = LD32(a0+76);
    a2 = LD32(s0+84);
    a3 = LD32(s0+88);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    goto L_088E7C3C;
}

/* 088E8208 */
void func_088E8208(u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088E8208:;
    f1 = BITSF(LD32(a2));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1)); goto L_088E8290; }
    goto L_088E8220;
L_088E8220:;
    f0 = BITSF(LD32(a1+4));
    f0 = f0 + f1;
    ST32(a1+4, FBITS(f0));
    goto L_088E822C;
L_088E822C:;
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+8)); goto L_088E8284; }
    goto L_088E8244;
L_088E8244:;
    f0 = BITSF(LD32(a1+12));
    f0 = f0 + f1;
    ST32(a1+12, FBITS(f0));
    goto L_088E8250;
L_088E8250:;
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+16)); goto L_088E8278; }
    goto L_088E8268;
L_088E8268:;
    f0 = BITSF(LD32(a1+20));
    f0 = f0 + f1;
    ST32(a1+20, FBITS(f0));
    return;
L_088E8278:;
    f0 = f0 + f1;
    ST32(a1+16, FBITS(f0));
    return;
L_088E8284:;
    f0 = f0 + f1;
    ST32(a1+8, FBITS(f0));
    goto L_088E8250;
L_088E8290:;
    f0 = f0 + f1;
    ST32(a1, FBITS(f0));
    goto L_088E822C;
}

/* 088E829C */
void func_088E829C(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088E829C:;
    a0 = LD32(a1+4);
    v0 = (u32)-1;
    a0 = a0 - 1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088E82E8; }
    goto L_088E82B0;
L_088E82B0:;
    v1 = LD32(a1+8);
    v0 = a0 << 2;
    a1 = (u32)-1;
    v0 = v0 + v1;
    goto L_088E82C0;
L_088E82C0:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a2));
    a0 = a0 - 1;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = v0 - 4;
    if (cnd_) { goto L_088E82E0; }
    goto L_088E82DC;
L_088E82DC:;
    f0 = f1;
    goto L_088E82E0;
L_088E82E0:;
    cnd_ = a0 != a1;
    ST32(a2, FBITS(f0));
    if (cnd_) { goto L_088E82C0; }
    goto L_088E82E8;
L_088E82E8:;
    return;
}

/* 088E82F0 */
void func_088E82F0(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088E82F0:;
    a0 = LD32(a1+4);
    v0 = (u32)-1;
    a0 = a0 - 1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088E8358; }
    goto L_088E8304;
L_088E8304:;
    v1 = LD32(a1+8);
    v0 = a0 << 2;
    a1 = (u32)-1;
    v0 = v0 + v1;
    goto L_088E8314;
L_088E8314:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    a0 = a0 - 1;
    if (cnd_) { goto L_088E8330; }
    goto L_088E832C;
L_088E832C:;
    f0 = f1;
    goto L_088E8330;
L_088E8330:;
    ST32(a2, FBITS(f0));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a3));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = v0 - 4;
    if (cnd_) { goto L_088E8350; }
    goto L_088E834C;
L_088E834C:;
    f0 = f1;
    goto L_088E8350;
L_088E8350:;
    cnd_ = a0 != a1;
    ST32(a3, FBITS(f0));
    if (cnd_) { goto L_088E8314; }
    goto L_088E8358;
L_088E8358:;
    return;
}

/* 088E8360 */
void func_088E8360(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8360:;
    a0 = LD32(a1+4);
    v0 = (u32)-1;
    a0 = a0 - 1;
    cnd_ = a0 == v0;
    sp = sp - 16;
    if (cnd_) { goto L_088E83F8; }
    goto L_088E8374;
L_088E8374:;
    v1 = LD32(a1+8);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = (u32)-1;
    goto L_088E838C;
L_088E838C:;
    f2 = BITSF(LD32(v0));
    f4 = BITSF(LD32(a2));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f4, f2, 14);
    f3 = f2;
    a0 = a0 - 1;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    cnd_ = fcc;
    ST32(sp, FBITS(f2));
    if (cnd_) { goto L_088E83BC; }
    goto L_088E83B8;
L_088E83B8:;
    f3 = f4;
    goto L_088E83BC;
L_088E83BC:;
    ST32(a2, FBITS(f3));
    f2 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(a3));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f4, f2, 14);
    f3 = f2;
    v0 = v0 - 12;
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    cnd_ = fcc;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_088E83F0; }
    goto L_088E83EC;
L_088E83EC:;
    f3 = f4;
    goto L_088E83F0;
L_088E83F0:;
    cnd_ = a0 != v1;
    ST32(a3, FBITS(f3));
    if (cnd_) { goto L_088E838C; }
    goto L_088E83F8;
L_088E83F8:;
    sp = sp + 16;
    return;
}

/* 088E8400 */
rv_t func_088E8400(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E8400:;
    sp = sp - 32;
    s0 = a0 + 0;
    f22 = f12;
    f20 = f13;
    a0 = LD32(a0+104);
    f12 = BITSF(LD32(s0+116));
    a0 = a0 + 80;
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8434;
L_088E8434:;
    v0 = LD32(s0);
    a0 = LD32(s0+108);
    f1 = BITSF(LD32(v0+64));
    v1 = LD32(a0+140);
    v0 = D_08AECDEC - (-12820);
    f2 = f0 * f1;
    f3 = BITSF(LD32(v0-12820));
    v0 = 0x20000u;
    v1 = v1 & v0;
    f1 = BITSF(LD32(a0+84));
    cnd_ = v1 == 0;
    f21 = f3 / f2;
    if (cnd_) { goto L_088E846C; }
    goto L_088E8464;
L_088E8464:;
    f0 = BITSF(LD32(a0+88));
    f1 = f1 + f0;
    goto L_088E846C;
L_088E846C:;
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_088E8480; }
    goto L_088E847C;
L_088E847C:;
    f0 = f20;
    goto L_088E8480;
L_088E8480:;
    f0 = f2 * f0;
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    ST32(s0+112, FBITS(f0));
    if (cnd_) { goto L_088E84C4; }
    goto L_088E8494;
L_088E8494:;
    f20 = f3;
    f0 = f0 - f20;
    goto L_088E849C;
L_088E849C:;
    a0 = s0 + 0;
    f12 = f0 * f21;
    ST32(s0+112, FBITS(f0));
    f12 = f12 + f22;
    { rv_t r_ = func_088E6E9C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E84B0;
L_088E84B0:;
    f0 = BITSF(LD32(s0+112));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 - f20; goto L_088E849C; }
    goto L_088E84C4;
L_088E84C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088E84E0 */
u64 func_088E84E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_088E84E0:;
    a3 = LD32(a0+100);
    t0 = D_08B25AC0 - (23232);
    t1 = t0 + 23232;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E8530; }
    goto L_088E84F4;
L_088E84F4:;
    v0 = LD32(t0+23232);
    a1 = LD32(t1+4);
    a2 = LD32(a0+96);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v0;
    ST32(t1+4, a1);
    ST32(t0+23232, v0);
    a0 = hi;
    a0 = a0 << 5;
    v0 = a2 + a0;
    goto L_088E8530;
L_088E8530:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088E8538 */
float func_088E8538(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088E8538:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088E8564; }
    goto L_088E8550;
L_088E8550:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088E8564; }
    goto L_088E8564;
L_088E8564:;
    return f0;
}

/* 088E856C */
void func_088E856C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E856C:;
    sp = sp - 16;
    v0 = 0x7fff0000u;
    v0 = v0 | 0xffff;
    s0 = a0 + 0;
    ST32(a0+12, v0);
    ST32(s0+8, 0);
    ST32(s0, 0);
    ST32(s0+4, 0);
    ST32(s0+16, 0);
    a0 = 4096;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E85A0;
L_088E85A0:;
    a0 = s0 + 0;
    ST32(s0+20, v0);
    func_08AB8E34(a0, 0, 0, 0);
    goto L_088E85AC;
L_088E85AC:;
    ST32(s0+88, 0);
    sp = sp + 16;
    return;
}

/* 088E85C0 */
rv_t func_088E85C0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E85C0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088E8624(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E85D4;
L_088E85D4:;
    v0 = LD32(s0+20);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E85F8; }
    goto L_088E85E0;
L_088E85E0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08AB8D9C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E85E8;
L_088E85E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E85F8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E8600;
L_088E8600:;
    goto L_088E85E0;
}

/* 088E8608 */
void func_088E8608(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8608:;
    sp = sp - 16;
    func_088E8624(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E8618;
L_088E8618:;
    sp = sp + 16;
    return;
}

/* 088E8624 */
void func_088E8624(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8624:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088E8678; }
    goto L_088E8640;
L_088E8640:;
    a1 = LD32(s0+20);
    goto L_088E8644;
L_088E8644:;
    v1 = a0 - 1;
    v0 = v1 << 2;
    v0 = v0 + a1;
    v0 = LD32(v0);
    ST32(s0+16, v1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E8694; }
    goto L_088E8660;
L_088E8660:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a1;
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(v0, 0);
    if (cnd_) { goto L_088E8644; }
    goto L_088E8678;
L_088E8678:;
    a0 = s0 + 0;
    func_08AB8E34(a0, t1, t2, t3);
    goto L_088E8680;
L_088E8680:;
    ST32(s0+88, 0);
    sp = sp + 16;
    return;
L_088E8694:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E86A4;
L_088E86A4:;
    a1 = LD32(s0+20);
    goto L_088E8660;
}

/* 088E86AC */
void func_088E86AC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E86AC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088E86FC; }
    goto L_088E86CC;
L_088E86CC:;
    v0 = LD32(s1+20);
    goto L_088E86D0;
L_088E86D0:;
    v1 = s0 << 2;
    s0 = s0 + 1;
    v1 = v1 + v0;
    v1 = LD32(v1);
    v0 = LD32(v1+4);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088E8710; }
    goto L_088E86F0;
L_088E86F0:;
    v0 = s0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+20); goto L_088E86D0; }
    goto L_088E86FC;
L_088E86FC:;
    sp = sp + 16;
    return;
L_088E8710:;
    v0 = LD32(v1);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8720;
L_088E8720:;
    a1 = LD32(s1+16);
    goto L_088E86F0;
}

/* 088E8728 */
void func_088E8728(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088E8728:;
    sp = sp - 64;
    s6 = D_08B16150 - (24912);
    s0 = a0 + 0;
    s4 = a1 + 0;
    s2 = 0 + 0;
    ST32(s6+24912, a1);
    func_089155C4();
    goto L_088E8768;
L_088E8768:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s7 = 3;
    if (cnd_) { goto L_088E87A4; }
    goto L_088E8774;
L_088E8774:;
    v0 = LD32(s0+20);
    goto L_088E8778;
L_088E8778:;
    s1 = s2 << 2;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v0 = func_088E2D64(a0);
    goto L_088E8788;
L_088E8788:;
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(s0+20); goto L_088E87F0; }
    goto L_088E8790;
L_088E8790:;
    s2 = s2 + 1;
    goto L_088E8794;
L_088E8794:;
    v0 = LD32(s0+16);
    goto L_088E8798;
L_088E8798:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+20); goto L_088E8778; }
    goto L_088E87A4;
L_088E87A4:;
    func_088E9398();
    goto L_088E87AC;
L_088E87AC:;
    func_08915880(0, 0, 0, 0, 0);
    goto L_088E87B4;
L_088E87B4:;
    func_088E9294();
    goto L_088E87BC;
L_088E87BC:;
    v0 = (u32)-1;
    ST32(s6+24912, v0);
    sp = sp + 64;
    return;
L_088E87F0:;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0+4);
    cnd_ = v1 == s7;
    if (cnd_) { a2 = LD32(a0+24); goto L_088E881C; }
    goto L_088E8804;
L_088E8804:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s2 = s2 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8814;
L_088E8814:;
    v0 = LD32(s0+16);
    goto L_088E8798;
L_088E881C:;
    a1 = s0 + 0;
    a0 = s0 + 0;
    a3 = sp + 0;
    { u64 r_ = func_08AB8ABC(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E882C;
L_088E882C:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s0+20); goto L_088E887C; }
    goto L_088E8834;
L_088E8834:;
    s3 = LD32(s0);
    cnd_ = s3 == 0;
    if (cnd_) { a2 = LD32(s0+20); goto L_088E887C; }
    goto L_088E8840;
L_088E8840:;
    s5 = LD32(s0+8);
    v0 = LD32(s3+4);
    cnd_ = v0 == s5;
    v1 = s3 + 0;
    if (cnd_) { goto L_088E886C; }
    goto L_088E8850;
L_088E8850:;
    a1 = LD32(s3+8);
    cnd_ = a1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E88D8; }
    goto L_088E885C;
L_088E885C:;
    a1 = LD32(s3+12);
    goto L_088E8860;
L_088E8860:;
    cnd_ = a1 != 0;
    a2 = s5 + 0;
    if (cnd_) { goto L_088E88C8; }
    goto L_088E8868;
L_088E8868:;
    v1 = v0 + 0;
    goto L_088E886C;
L_088E886C:;
    cnd_ = v1 == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_088E8878; }
    goto L_088E8874;
L_088E8874:;
    ST32(v1+4, v0);
    goto L_088E8878;
L_088E8878:;
    a2 = LD32(s0+20);
    goto L_088E887C;
L_088E887C:;
    v0 = s1 + a2;
    a0 = LD32(v0);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088E88B4; }
    goto L_088E888C;
L_088E888C:;
    v1 = LD32(s0+16);
    a1 = s1 + a2;
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a2;
    a0 = LD32(v0);
    ST32(s0+16, v1);
    ST32(a1, a0);
    ST32(v0, 0);
    goto L_088E8794;
L_088E88B4:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E88C0;
L_088E88C0:;
    a2 = LD32(s0+20);
    goto L_088E888C;
L_088E88C8:;
    a0 = s0 + 0;
    v0 = func_08AB8F58(a0, a1, a2);
    goto L_088E88D0;
L_088E88D0:;
    v1 = v0 + 0;
    goto L_088E886C;
L_088E88D8:;
    a0 = s0 + 0;
    a2 = s5 + 0;
    v0 = func_08AB8F58(a0, a1, a2);
    goto L_088E88E4;
L_088E88E4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E886C; }
    goto L_088E88EC;
L_088E88EC:;
    a1 = LD32(s3+12);
    goto L_088E8860;
}

/* 088E88F4 */
u32 func_088E88F4(u32 a0)
{
    u32 v0 = 0;
L_088E88F4:;
    v0 = LD32(a0+16);
    v0 = v0 < 0x400u;
    return v0;
}

/* 088E8900 */
u64 func_088E8900(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8900:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E8964; }
    goto L_088E891C;
L_088E891C:;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_088E8968; }
    goto L_088E8928;
L_088E8928:;
    v0 = LD32(a1);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a1+4); goto L_088E894C; }
    goto L_088E8934;
L_088E8934:;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(a1+12); goto L_088E8944; }
    goto L_088E8940;
L_088E8940:;
    a1 = LD32(a1+8);
    goto L_088E8944;
L_088E8944:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB8FEC(a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E894C;
L_088E894C:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { v0 = 0 + 0; goto L_088E8964; }
    goto L_088E8954;
L_088E8954:;
    v1 = LD32(s0+20);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_088E8964;
L_088E8964:;
    goto L_088E8968;
L_088E8968:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088E8974 */
u64 func_088E8974(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8974:;
    sp = sp - 16;
    a2 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E89E8; }
    goto L_088E8990;
L_088E8990:;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_088E89EC; }
    goto L_088E899C;
L_088E899C:;
    v0 = LD32(a1);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a1+4); goto L_088E89C0; }
    goto L_088E89A8;
L_088E89A8:;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(a1+12); goto L_088E89B8; }
    goto L_088E89B4;
L_088E89B4:;
    a1 = LD32(a1+8);
    goto L_088E89B8;
L_088E89B8:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB8FEC(a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E89C0;
L_088E89C0:;
    cnd_ = (s32)v0 < 0;
    v0 = v0 << 2;
    if (cnd_) { goto L_088E89E4; }
    goto L_088E89C8;
L_088E89C8:;
    v1 = LD32(s0+20);
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD_U16(a0+20);
    v1 = (v1 >> 12) & 0x1;
    cnd_ = v1 != 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_088E89E8; }
    goto L_088E89E4;
L_088E89E4:;
    v0 = 0 + 0;
    goto L_088E89E8;
L_088E89E8:;
    goto L_088E89EC;
L_088E89EC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088E89F8 */
void func_088E89F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E89F8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = LD32(a1);
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E8A10;
L_088E8A10:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E8A20; }
    goto L_088E8A18;
L_088E8A18:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_088E8A20;
L_088E8A20:;
    ST32(s0, 0);
    sp = sp + 16;
    return;
}

/* 088E8A34 */
void func_088E8A34(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088E8A34:;
    sp = sp - 48;
    s3 = a1 + 0;
    s2 = sp + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    a3 = LD32(a0);
    cnd_ = a3 == 0;
    ST32(s3+24, a2);
    if (cnd_) { goto L_088E8C64; }
    goto L_088E8A68;
L_088E8A68:;
    v0 = LD32(a3);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a3+4); goto L_088E8D48; }
    goto L_088E8A74;
L_088E8A74:;
    v0 = LD32(a3+16);
    v0 = v0 + 1;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088E8D2C; }
    goto L_088E8A88;
L_088E8A88:;
    v1 = D_08AECDF8 - (-12808);
    f2 = BITSF(LD32(v1-12808));
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    f2 = f2 / f0;
    a2 = a1 + 23232;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    v1 = v1 + v0;
    ST32(a1+23232, v0);
    v0 = D_08AECDFC - (-12804);
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v0-12804));
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(a2+4, v1);
    if (cnd_) { goto L_088E8CEC; }
    goto L_088E8AE4;
L_088E8AE4:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088E8C64; }
    goto L_088E8AEC;
L_088E8AEC:;
    v0 = LD32(a3);
    cnd_ = s0 == v0;
    v0 = s0 < v0;
    if (cnd_) { goto L_088E8C58; }
    goto L_088E8AF8;
L_088E8AF8:;
    cnd_ = v0 == 0;
    a1 = a3 + 12;
    if (cnd_) { goto L_088E8BCC; }
    goto L_088E8B00;
L_088E8B00:;
    a1 = a3 + 8;
    a2 = s0 + 0;
    a3 = s2 + 0;
    a0 = s1 + 0;
    v0 = func_08AB91F8(a0, a1, a2, a3, t1, t2, t3);
    goto L_088E8B14;
L_088E8B14:;
    cnd_ = v0 != 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_088E8B94; }
    goto L_088E8B1C;
L_088E8B1C:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_088E8B98; }
    goto L_088E8B28;
L_088E8B28:;
    a1 = LD32(a0+8);
    a2 = 0 + 0;
    v1 = LD32(a1+12);
    ST32(s1, a1);
    ST32(a1+12, a0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_088E8B48; }
    goto L_088E8B44;
L_088E8B44:;
    a2 = LD32(v1+16);
    goto L_088E8B48;
L_088E8B48:;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E8B58; }
    goto L_088E8B54;
L_088E8B54:;
    v0 = LD32(v1+16);
    goto L_088E8B58;
L_088E8B58:;
    v1 = LD32(a1+8);
    v0 = a2 + v0;
    v0 = v0 + 1;
    ST32(a0+16, v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E8B74; }
    goto L_088E8B70;
L_088E8B70:;
    a0 = LD32(v1+16);
    goto L_088E8B74;
L_088E8B74:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E8B84; }
    goto L_088E8B80;
L_088E8B80:;
    v0 = LD32(v1+16);
    goto L_088E8B84;
L_088E8B84:;
    v0 = a0 + v0;
    goto L_088E8B88;
L_088E8B88:;
    v0 = v0 + 1;
    ST32(a1+16, v0);
    goto L_088E8B90;
L_088E8B90:;
    v1 = LD32(sp);
    goto L_088E8B94;
L_088E8B94:;
    v0 = LD32(s1+16);
    goto L_088E8B98;
L_088E8B98:;
    a0 = LD32(s1+20);
    v1 = v1 << 2;
    v0 = v0 + 1;
    v1 = v1 + a0;
    ST32(v1, s3);
    ST32(s1+16, v0);
    sp = sp + 48;
    return;
L_088E8BCC:;
    a2 = s0 + 0;
    a3 = s2 + 0;
    a0 = s1 + 0;
    v0 = func_08AB91F8(a0, a1, a2, a3, t1, t2, t3);
    goto L_088E8BDC;
L_088E8BDC:;
    cnd_ = v0 != 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_088E8B94; }
    goto L_088E8BE4;
L_088E8BE4:;
    v1 = LD32(s1);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(sp); goto L_088E8B94; }
    goto L_088E8BF0;
L_088E8BF0:;
    a1 = LD32(v1+12);
    a2 = 0 + 0;
    v0 = LD32(a1+8);
    ST32(s1, a1);
    ST32(a1+8, v1);
    a0 = LD32(v1+8);
    cnd_ = a0 == 0;
    ST32(v1+12, v0);
    if (cnd_) { goto L_088E8C14; }
    goto L_088E8C10;
L_088E8C10:;
    a2 = LD32(a0+16);
    goto L_088E8C14;
L_088E8C14:;
    a0 = LD32(v1+12);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E8C24; }
    goto L_088E8C20;
L_088E8C20:;
    v0 = LD32(a0+16);
    goto L_088E8C24;
L_088E8C24:;
    a0 = LD32(a1+8);
    v0 = a2 + v0;
    v0 = v0 + 1;
    ST32(v1+16, v0);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088E8C40; }
    goto L_088E8C3C;
L_088E8C3C:;
    a2 = LD32(a0+16);
    goto L_088E8C40;
L_088E8C40:;
    v1 = LD32(a1+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E8C50; }
    goto L_088E8C4C;
L_088E8C4C:;
    v0 = LD32(v1+16);
    goto L_088E8C50;
L_088E8C50:;
    v0 = a2 + v0;
    goto L_088E8B88;
L_088E8C58:;
    v0 = LD32(a3+4);
    ST32(s2, v0);
    goto L_088E8B90;
L_088E8C64:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8C6C;
L_088E8C6C:;
    a1 = v0 + 0;
    v0 = LD32(s1+8);
    a3 = LD32(s1+4);
    ST32(a1+8, 0);
    v1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s1+8, v0);
    v0 = 1;
    ST32(a1+12, 0);
    ST32(a1, s0);
    ST32(a1+4, v1);
    ST32(a1+16, v0);
    cnd_ = a3 == 0;
    ST32(s1, a1);
    if (cnd_) { goto L_088E8CD4; }
    goto L_088E8CA4;
L_088E8CA4:;
    a2 = LD32(a3+12);
    v0 = LD32(a3+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088E8CE4; }
    goto L_088E8CB8;
L_088E8CB8:;
    v1 = a2 + 1;
    a0 = LD32(a3+4);
    ST32(a3+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    ST32(a1+4, v1);
    goto L_088E8CD4;
L_088E8CD4:;
    v0 = LD32(s1);
    v1 = LD32(v0+4);
    ST32(s2, v1);
    goto L_088E8B90;
L_088E8CE4:;
    ST32(a1+4, v0);
    goto L_088E8CD4;
L_088E8CEC:;
    v0 = LD32(a3);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a1 = a3 + 8;
    if (cnd_) { goto L_088E8D00; }
    goto L_088E8CFC;
L_088E8CFC:;
    a1 = a3 + 12;
    goto L_088E8D00;
L_088E8D00:;
    a2 = s0 + 0;
    a3 = s2 + 0;
    a0 = s1 + 0;
    v0 = func_08AB9020(a0, a1, a2, a3, t1, t2, t3);
    goto L_088E8D10;
L_088E8D10:;
    cnd_ = v0 != 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_088E8B94; }
    goto L_088E8D18;
L_088E8D18:;
    v1 = LD32(s1);
    v0 = LD32(v1+16);
    v0 = v0 + 1;
    ST32(v1+16, v0);
    goto L_088E8B90;
L_088E8D2C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088E8A88;
L_088E8D48:;
    ST32(sp, v0);
    goto L_088E8B90;
}

/* 088E8D50 */
u64 func_088E8D50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088E8D50:;
    v1 = LD32(a0+88);
    a2 = a0 + 0;
    v0 = 1;
    a0 = v1 << 2;
    a3 = v1 + 1;
    v1 = v1 < 0x10u;
    cnd_ = v1 == 0;
    a0 = a0 + a2;
    if (cnd_) { goto L_088E8D78; }
    goto L_088E8D70;
L_088E8D70:;
    ST32(a0+24, a1);
    ST32(a2+88, a3);
    goto L_088E8D78;
L_088E8D78:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088E8D80 */
void func_088E8D80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8D80:;
    sp = sp - 16;
    v0 = LD32(a0+88);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088E8DBC; }
    goto L_088E8DA0;
L_088E8DA0:;
    ST32(s1+88, 0);
    goto L_088E8DA4;
L_088E8DA4:;
    sp = sp + 16;
    return;
L_088E8DBC:;
    s2 = 0 + 0;
    func_089155C4();
    goto L_088E8DC4;
L_088E8DC4:;
    v0 = LD32(s1+88);
    cnd_ = v0 == 0;
    s0 = s1 + 24;
    if (cnd_) { goto L_088E8DF0; }
    goto L_088E8DD0;
L_088E8DD0:;
    a0 = LD32(s0);
    a1 = 0 + 0;
    s2 = s2 + 1;
    { rv_t r_ = func_088E6CD4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8DE0;
L_088E8DE0:;
    v0 = LD32(s1+88);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088E8DD0; }
    goto L_088E8DF0;
L_088E8DF0:;
    func_088E9398();
    goto L_088E8DF8;
L_088E8DF8:;
    func_08915880(0, 0, 0, 0, 0);
    goto L_088E8E00;
L_088E8E00:;
    ST32(s1+88, 0);
    goto L_088E8DA4;
}

/* 088E8E08 */
void func_088E8E08(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E8E08:;
    a1 = 1;
    v0 = D_08B30BB8 - (3000);
    ST32(v0+3000, a1);
    v1 = D_08B30C08 - (3080);
    v0 = D_08B30BFC - (3068);
    sp = sp - 16;
    a0 = 4096;
    ST8(v1+3080, 0);
    v1 = D_08B30C04 - (3076);
    ST32(v0+3068, 0);
    v0 = D_08B30C00 - (3072);
    s1 = D_08B30BBC - (3004);
    s2 = s1 + 3004;
    ST32(v1+3076, 0);
    ST32(v0+3072, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8E58;
L_088E8E58:;
    v1 = D_08B30BEC - (3052);
    a0 = 4096;
    ST32(v1+3052, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8E68;
L_088E8E68:;
    v1 = D_08B30BF0 - (3056);
    a0 = 2048;
    ST32(v1+3056, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8E78;
L_088E8E78:;
    v1 = D_08B30BF4 - (3060);
    a0 = 4096;
    ST32(v1+3060, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8E88;
L_088E8E88:;
    v1 = D_08B30BF8 - (3064);
    s0 = LD32(s1+3004);
    cnd_ = s0 == 0;
    ST32(v1+3064, v0);
    if (cnd_) { goto L_088E8EB8; }
    goto L_088E8E98;
L_088E8E98:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9074; }
    goto L_088E8EA4;
L_088E8EA4:;
    a1 = LD32(s0+12);
    goto L_088E8EA8;
L_088E8EA8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9064; }
    goto L_088E8EB0;
L_088E8EB0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E8EB8;
L_088E8EB8:;
    v0 = s1 + 3004;
    a1 = LD32(v0+4);
    ST32(s1+3004, 0);
    cnd_ = a1 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_088E8EF8; }
    goto L_088E8ECC;
L_088E8ECC:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E8EF8; }
    goto L_088E8EDC;
L_088E8EDC:;
    v1 = LD32(a1+4);
    goto L_088E8EE0;
L_088E8EE0:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E8EE0; }
    goto L_088E8EF8;
L_088E8EF8:;
    s1 = D_08B30BCC - (3020);
    s0 = LD32(s1+3020);
    cnd_ = s0 == 0;
    s2 = s1 + 3020;
    if (cnd_) { goto L_088E8F28; }
    goto L_088E8F08;
L_088E8F08:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9054; }
    goto L_088E8F14;
L_088E8F14:;
    a1 = LD32(s0+12);
    goto L_088E8F18;
L_088E8F18:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9044; }
    goto L_088E8F20;
L_088E8F20:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E8F28;
L_088E8F28:;
    v0 = s1 + 3020;
    a1 = LD32(v0+4);
    ST32(s1+3020, 0);
    cnd_ = a1 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_088E8F68; }
    goto L_088E8F3C;
L_088E8F3C:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E8F68; }
    goto L_088E8F4C;
L_088E8F4C:;
    v1 = LD32(a1+4);
    goto L_088E8F50;
L_088E8F50:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E8F50; }
    goto L_088E8F68;
L_088E8F68:;
    s1 = D_08B30BDC - (3036);
    s0 = LD32(s1+3036);
    cnd_ = s0 == 0;
    s2 = s1 + 3036;
    if (cnd_) { goto L_088E8F98; }
    goto L_088E8F78;
L_088E8F78:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9034; }
    goto L_088E8F84;
L_088E8F84:;
    a1 = LD32(s0+12);
    goto L_088E8F88;
L_088E8F88:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9024; }
    goto L_088E8F90;
L_088E8F90:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E8F98;
L_088E8F98:;
    v0 = s1 + 3036;
    a1 = LD32(v0+4);
    ST32(s1+3036, 0);
    cnd_ = a1 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_088E8FD8; }
    goto L_088E8FAC;
L_088E8FAC:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E8FD8; }
    goto L_088E8FBC;
L_088E8FBC:;
    v1 = LD32(a1+4);
    goto L_088E8FC0;
L_088E8FC0:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E8FC0; }
    goto L_088E8FD8;
L_088E8FD8:;
    a0 = 4096;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E8FE0;
L_088E8FE0:;
    a0 = v0 + 0;
    v1 = (u32)-1;
    v0 = 127;
    v0 = v0 - 32;
    goto L_088E8FF0;
L_088E8FF0:;
    cnd_ = v0 != v1;
    v0 = v0 - 32;
    if (cnd_) { goto L_088E8FF0; }
    goto L_088E8FF8;
L_088E8FF8:;
    v0 = D_08B30C14 - (3092);
    v1 = D_08B30C10 - (3088);
    ST32(v0+3092, a0);
    ST32(v1+3088, 0);
    func_089175A4();
    goto L_088E900C;
L_088E900C:;
    sp = sp + 16;
    return;
L_088E9024:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088E902C;
L_088E902C:;
    goto L_088E8F90;
L_088E9034:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088E903C;
L_088E903C:;
    a1 = LD32(s0+12);
    goto L_088E8F88;
L_088E9044:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088E904C;
L_088E904C:;
    goto L_088E8F20;
L_088E9054:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088E905C;
L_088E905C:;
    a1 = LD32(s0+12);
    goto L_088E8F18;
L_088E9064:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088E906C;
L_088E906C:;
    goto L_088E8EB0;
L_088E9074:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, 0, 0, 0);
    goto L_088E907C;
L_088E907C:;
    a1 = LD32(s0+12);
    goto L_088E8EA8;
}

/* 088E9084 */
void func_088E9084(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9084:;
    sp = sp - 16;
    func_089175BC();
    goto L_088E9094;
L_088E9094:;
    func_088E91F0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088E909C;
L_088E909C:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    func_088E8608(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088E90A8;
L_088E90A8:;
    func_088E9714(0, 0, 0);
    goto L_088E90B0;
L_088E90B0:;
    v0 = D_08B30BEC - (3052);
    a0 = LD32(v0+3052);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E914C; }
    goto L_088E90C0;
L_088E90C0:;
    v0 = D_08B30BF0 - (3056);
    goto L_088E90C4;
L_088E90C4:;
    a0 = LD32(v0+3056);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E913C; }
    goto L_088E90D0;
L_088E90D0:;
    v0 = D_08B30BF4 - (3060);
    goto L_088E90D4;
L_088E90D4:;
    a0 = LD32(v0+3060);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E912C; }
    goto L_088E90E0;
L_088E90E0:;
    v0 = D_08B30BF8 - (3064);
    goto L_088E90E4;
L_088E90E4:;
    a0 = LD32(v0+3064);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E911C; }
    goto L_088E90F0;
L_088E90F0:;
    v0 = D_08B30C14 - (3092);
    goto L_088E90F4;
L_088E90F4:;
    a0 = LD32(v0+3092);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E910C; }
    goto L_088E9100;
L_088E9100:;
    goto L_088E9104;
L_088E9104:;
    sp = sp + 16;
    return;
L_088E910C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9114;
L_088E9114:;
    goto L_088E9104;
L_088E911C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9124;
L_088E9124:;
    v0 = D_08B30C14 - (3092);
    goto L_088E90F4;
L_088E912C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9134;
L_088E9134:;
    v0 = D_08B30BF8 - (3064);
    goto L_088E90E4;
L_088E913C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9144;
L_088E9144:;
    v0 = D_08B30BF4 - (3060);
    goto L_088E90D4;
L_088E914C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9154;
L_088E9154:;
    v0 = D_08B30BF0 - (3056);
    goto L_088E90C4;
}

/* 088E915C */
void func_088E915C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E915C:;
    sp = sp - 16;
    func_089175AC();
    goto L_088E916C;
L_088E916C:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    func_088E8608(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088E9178;
L_088E9178:;
    func_088E9714(0, 0, 0);
    goto L_088E9180;
L_088E9180:;
    sp = sp + 16;
    return;
}

/* 088E918C */
void func_088E918C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E918C:;
    a0 = D_08B30B5C - (2908);
    sp = sp - 16;
    v0 = D_08B30C0C - (3084);
    a0 = a0 + 2908;
    ST32(v0+3084, 0);
    func_088E86AC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E91A8;
L_088E91A8:;
    sp = sp + 16;
    return;
}

/* 088E91B4 */
void func_088E91B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E91B4:;
    v0 = D_08B2C22B - (-15829);
    v1 = LD_U8(v0-15829);
    sp = sp - 16;
    a1 = a0 + 0;
    a0 = D_08B30B5C - (2908);
    cnd_ = v1 != 0;
    a0 = a0 + 2908;
    if (cnd_) { goto L_088E91E0; }
    goto L_088E91D4;
L_088E91D4:;
    goto L_088E91D8;
L_088E91D8:;
    sp = sp + 16;
    return;
L_088E91E0:;
    func_088E8728(a0, a1);
    goto L_088E91E8;
L_088E91E8:;
    goto L_088E91D8;
}

/* 088E91F0 */
void func_088E91F0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E91F0:;
    a0 = D_08B30B5C - (2908);
    sp = sp - 16;
    v0 = D_08B30C08 - (3080);
    a0 = a0 + 2908;
    ST8(v0+3080, 0);
    func_088E8624(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E920C;
L_088E920C:;
    sp = sp + 16;
    return;
}

/* 088E9218 */
u32 func_088E9218(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9218:;
    sp = sp - 16;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    v0 = func_088E88F4(a0);
    goto L_088E922C;
L_088E922C:;
    sp = sp + 16;
    return v0;
}

/* 088E9238 */
u64 func_088E9238(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9238:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891759C();
    goto L_088E924C;
L_088E924C:;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_088E9270; }
    goto L_088E9254;
L_088E9254:;
    v0 = D_08B30C08 - (3080);
    v1 = LD_U8(v0+3080);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    a1 = s0 + 0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088E9284; }
    goto L_088E9270;
L_088E9270:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088E9284:;
    { u64 r_ = func_088E8D50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E928C;
L_088E928C:;
    a2 = v0 + 0;
    goto L_088E9270;
}

/* 088E9294 */
void func_088E9294(void)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9294:;
    sp = sp - 16;
    a0 = D_08B30B5C - (2908);
    v0 = 1;
    s0 = D_08B30C08 - (3080);
    a0 = a0 + 2908;
    ST8(s0+3080, v0);
    func_088E8D80(a0);
    goto L_088E92B8;
L_088E92B8:;
    ST8(s0+3080, 0);
    sp = sp + 16;
    return;
}

/* 088E92CC */
rv_t func_088E92CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E92CC:;
    sp = sp - 32;
    s1 = D_08B30C10 - (3088);
    v0 = 128;
    t1 = LD32(s1+3088);
    s5 = a2 + 0;
    s4 = a1 + 0;
    s3 = t0 + 0;
    s2 = a0 + 0;
    s0 = a3 + 0;
    cnd_ = t1 == v0;
    if (cnd_) { goto L_088E9388; }
    goto L_088E9310;
L_088E9310:;
    v0 = D_08B30C14 - (3092);
    v1 = LD32(v0+3092);
    a1 = LD32(s2+148);
    a0 = t1 << 5;
    v1 = v1 + a0;
    v0 = t1 + 1;
    f0 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    ST32(s1+3088, v0);
    a0 = v1 + 8;
    ST32(v1+24, s3);
    ST32(v1+28, a1);
    ST32(v1, s4);
    ST32(s2+148, v1);
    ST32(v1+4, s5);
    ST32(a0+12, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f3));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088E9388:;
    func_088E9398();
    goto L_088E9390;
L_088E9390:;
    t1 = LD32(s1+3088);
    goto L_088E9310;
}

/* 088E9398 */
void func_088E9398(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9398:;
    sp = sp - 32;
    s5 = D_08B30C10 - (3088);
    v0 = LD32(s5+3088);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E9440; }
    goto L_088E93C4;
L_088E93C4:;
    s3 = D_08B30BFC - (3068);
    v0 = LD32(s3+3068);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088E943C; }
    goto L_088E93D4;
L_088E93D4:;
    s4 = D_08B30BF8 - (3064);
    v1 = LD32(s4+3064);
    goto L_088E93DC;
L_088E93DC:;
    v0 = s2 << 2;
    v0 = v0 + v1;
    s1 = LD32(v0);
    cnd_ = s1 == 0;
    v0 = LD32(s3+3068);
    if (cnd_) { goto L_088E942C; }
    goto L_088E93F0;
L_088E93F0:;
    s0 = LD32(s1+148);
    cnd_ = s0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_088E9430; }
    goto L_088E93FC;
L_088E93FC:;
    a0 = LD32(s0+24);
    goto L_088E9400;
L_088E9400:;
    a1 = LD32(s0);
    a2 = LD32(s0+4);
    t0 = s0 + 8;
    a3 = s1 + 0;
    t1 = 0 + 0;
    { rv_t r_ = func_088E261C(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9418;
L_088E9418:;
    s0 = LD32(s0+28);
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_088E9400; }
    goto L_088E9424;
L_088E9424:;
    ST32(s1+148, 0);
    v0 = LD32(s3+3068);
    goto L_088E942C;
L_088E942C:;
    s2 = s2 + 1;
    goto L_088E9430;
L_088E9430:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(s4+3064);
    if (cnd_) { goto L_088E93DC; }
    goto L_088E943C;
L_088E943C:;
    ST32(s5+3088, 0);
    goto L_088E9440;
L_088E9440:;
    sp = sp + 32;
    return;
}

/* 088E9464 */
u32 func_088E9464(void)
{
    u32 v0 = 0;
L_088E9464:;
    v0 = D_08AD89E8 - (-30232);
    v0 = v0 - 30232;
    return v0;
}

/* 088E9470 */
rv_t func_088E9470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9470:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = s3 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E9674; }
    goto L_088E94A8;
L_088E94A8:;
    s1 = s1 < 0x1u;
    v0 = s0 & s1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088E94FC; }
    goto L_088E94B8;
L_088E94B8:;
    s2 = D_08B30BDC - (3036);
    s0 = LD32(s2+3036);
    cnd_ = s0 == 0;
    s4 = s2 + 3036;
    if (cnd_) { goto L_088E94E8; }
    goto L_088E94C8;
L_088E94C8:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9664; }
    goto L_088E94D4;
L_088E94D4:;
    a1 = LD32(s0+12);
    goto L_088E94D8;
L_088E94D8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9654; }
    goto L_088E94E0;
L_088E94E0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E94E8;
L_088E94E8:;
    v0 = s2 + 3036;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088E9640; }
    goto L_088E94F8;
L_088E94F8:;
    v0 = s3 < 0x1u;
    goto L_088E94FC;
L_088E94FC:;
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088E954C; }
    goto L_088E9508;
L_088E9508:;
    s2 = D_08B30BCC - (3020);
    s0 = LD32(s2+3020);
    cnd_ = s0 == 0;
    s4 = s2 + 3020;
    if (cnd_) { goto L_088E9538; }
    goto L_088E9518;
L_088E9518:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9630; }
    goto L_088E9524;
L_088E9524:;
    a1 = LD32(s0+12);
    goto L_088E9528;
L_088E9528:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9620; }
    goto L_088E9530;
L_088E9530:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9538;
L_088E9538:;
    v0 = s2 + 3020;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088E960C; }
    goto L_088E9548;
L_088E9548:;
    v0 = s3 < 0x1u;
    goto L_088E954C;
L_088E954C:;
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088E959C; }
    goto L_088E9558;
L_088E9558:;
    s2 = D_08B30BBC - (3004);
    s0 = LD32(s2+3004);
    cnd_ = s0 == 0;
    s4 = s2 + 3004;
    if (cnd_) { goto L_088E9588; }
    goto L_088E9568;
L_088E9568:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E95FC; }
    goto L_088E9574;
L_088E9574:;
    a1 = LD32(s0+12);
    goto L_088E9578;
L_088E9578:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E95EC; }
    goto L_088E9580;
L_088E9580:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9588;
L_088E9588:;
    v0 = s2 + 3004;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088E95D8; }
    goto L_088E9598;
L_088E9598:;
    v0 = s3 < 0x1u;
    goto L_088E959C;
L_088E959C:;
    v0 = v0 & s1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08B30B5C - (2908); goto L_088E95C8; }
    goto L_088E95A8;
L_088E95A8:;
    goto L_088E95AC;
L_088E95AC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088E95C8:;
    a0 = a0 + 2908;
    { rv_t r_ = func_088E85C0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E95D0;
L_088E95D0:;
    goto L_088E95AC;
L_088E95D8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E95E4;
L_088E95E4:;
    v0 = s3 < 0x1u;
    goto L_088E959C;
L_088E95EC:;
    a0 = s4 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E95F4;
L_088E95F4:;
    goto L_088E9580;
L_088E95FC:;
    a0 = s4 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9604;
L_088E9604:;
    a1 = LD32(s0+12);
    goto L_088E9578;
L_088E960C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9618;
L_088E9618:;
    v0 = s3 < 0x1u;
    goto L_088E954C;
L_088E9620:;
    a0 = s4 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9628;
L_088E9628:;
    goto L_088E9530;
L_088E9630:;
    a0 = s4 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9638;
L_088E9638:;
    a1 = LD32(s0+12);
    goto L_088E9528;
L_088E9640:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E964C;
L_088E964C:;
    v0 = s3 < 0x1u;
    goto L_088E94FC;
L_088E9654:;
    a0 = s4 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E965C;
L_088E965C:;
    goto L_088E94E0;
L_088E9664:;
    a0 = s4 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E966C;
L_088E966C:;
    a1 = LD32(s0+12);
    goto L_088E94D8;
L_088E9674:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    func_088E856C(a0, t1, t2, t3);
    goto L_088E9680;
L_088E9680:;
    a2 = D_08B30BBC - (3004);
    a3 = D_08B30BCC - (3020);
    t0 = D_08B30BDC - (3036);
    v0 = 0x7fff0000u;
    v1 = a2 + 3004;
    v0 = v0 | 0xffff;
    a0 = a3 + 3020;
    a1 = t0 + 3036;
    ST32(v1+4, 0);
    ST32(a1+12, v0);
    ST32(v1+8, 0);
    ST32(a0+4, 0);
    ST32(v1+12, v0);
    ST32(a0+8, 0);
    ST32(a2+3004, 0);
    ST32(a3+3020, 0);
    ST32(t0+3036, 0);
    ST32(a1+4, 0);
    ST32(a0+12, v0);
    ST32(a1+8, 0);
    goto L_088E94A8;
}

/* 088E96D4 */
rv_t func_088E96D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E96D4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088E9470(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E96E8;
L_088E96E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E96F4 */
rv_t func_088E96F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E96F4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088E9470(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9708;
L_088E9708:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E9714 */
void func_088E9714(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9714:;
    sp = sp - 32;
    s3 = D_08B30BFC - (3068);
    v0 = LD32(s3+3068);
    cnd_ = v0 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_088E9774; }
    goto L_088E9740;
L_088E9740:;
    v1 = v0 + 0;
    s4 = D_08B30BEC - (3052);
    goto L_088E9748;
L_088E9748:;
    a0 = LD32(s4+3052);
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    ST32(a1+3068, v1);
    if (cnd_) { goto L_088E9B10; }
    goto L_088E9764;
L_088E9764:;
    v0 = LD32(s3+3068);
    goto L_088E9768;
L_088E9768:;
    a1 = D_08B30BFC - (3068);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E9748; }
    goto L_088E9774;
L_088E9774:;
    s1 = D_08B30BBC - (3004);
    s0 = LD32(s1+3004);
    cnd_ = s0 == 0;
    s2 = s1 + 3004;
    if (cnd_) { goto L_088E97A4; }
    goto L_088E9784;
L_088E9784:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9B00; }
    goto L_088E9790;
L_088E9790:;
    a1 = LD32(s0+12);
    goto L_088E9794;
L_088E9794:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9AF0; }
    goto L_088E979C;
L_088E979C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E97A4;
L_088E97A4:;
    v0 = s1 + 3004;
    a1 = LD32(v0+4);
    ST32(s1+3004, 0);
    cnd_ = a1 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_088E97E4; }
    goto L_088E97B8;
L_088E97B8:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E97E4; }
    goto L_088E97C8;
L_088E97C8:;
    v1 = LD32(a1+4);
    goto L_088E97CC;
L_088E97CC:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E97CC; }
    goto L_088E97E4;
L_088E97E4:;
    s3 = D_08B30C00 - (3072);
    v0 = LD32(s3+3072);
    cnd_ = v0 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_088E9828; }
    goto L_088E97F4;
L_088E97F4:;
    v1 = v0 + 0;
    s4 = D_08B30BF0 - (3056);
    goto L_088E97FC;
L_088E97FC:;
    a0 = LD32(s4+3056);
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    ST32(a1+3072, v1);
    if (cnd_) { goto L_088E9A1C; }
    goto L_088E9818;
L_088E9818:;
    v0 = LD32(s3+3072);
    goto L_088E981C;
L_088E981C:;
    a1 = D_08B30C00 - (3072);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E97FC; }
    goto L_088E9828;
L_088E9828:;
    s1 = D_08B30BCC - (3020);
    s0 = LD32(s1+3020);
    cnd_ = s0 == 0;
    s2 = s1 + 3020;
    if (cnd_) { goto L_088E9858; }
    goto L_088E9838;
L_088E9838:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9A0C; }
    goto L_088E9844;
L_088E9844:;
    a1 = LD32(s0+12);
    goto L_088E9848;
L_088E9848:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E99FC; }
    goto L_088E9850;
L_088E9850:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9858;
L_088E9858:;
    v0 = s1 + 3020;
    a1 = LD32(v0+4);
    ST32(s1+3020, 0);
    cnd_ = a1 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_088E9898; }
    goto L_088E986C;
L_088E986C:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E9898; }
    goto L_088E987C;
L_088E987C:;
    v1 = LD32(a1+4);
    goto L_088E9880;
L_088E9880:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E9880; }
    goto L_088E9898;
L_088E9898:;
    s2 = D_08B30C04 - (3076);
    v0 = LD32(s2+3076);
    cnd_ = v0 == 0;
    a2 = s2 + 0;
    if (cnd_) { goto L_088E98E0; }
    goto L_088E98A8;
L_088E98A8:;
    v1 = v0 + 0;
    s3 = D_08B30BF4 - (3060);
    goto L_088E98B0;
L_088E98B0:;
    a1 = LD32(s3+3060);
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a1;
    s0 = LD32(v0);
    a0 = 14;
    cnd_ = s0 != 0;
    ST32(a2+3076, v1);
    if (cnd_) { goto L_088E9990; }
    goto L_088E98D0;
L_088E98D0:;
    v0 = LD32(s2+3076);
    goto L_088E98D4;
L_088E98D4:;
    a2 = D_08B30C04 - (3076);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E98B0; }
    goto L_088E98E0;
L_088E98E0:;
    s1 = D_08B30BDC - (3036);
    s0 = LD32(s1+3036);
    cnd_ = s0 == 0;
    s2 = s1 + 3036;
    if (cnd_) { goto L_088E9910; }
    goto L_088E98F0;
L_088E98F0:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9980; }
    goto L_088E98FC;
L_088E98FC:;
    a1 = LD32(s0+12);
    goto L_088E9900;
L_088E9900:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E9970; }
    goto L_088E9908;
L_088E9908:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9910;
L_088E9910:;
    v0 = s1 + 3036;
    a1 = LD32(v0+4);
    ST32(s1+3036, 0);
    cnd_ = a1 == 0;
    ST32(v0+8, 0);
    if (cnd_) { goto L_088E9950; }
    goto L_088E9924;
L_088E9924:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088E9950; }
    goto L_088E9934;
L_088E9934:;
    v1 = LD32(a1+4);
    goto L_088E9938;
L_088E9938:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088E9938; }
    goto L_088E9950;
L_088E9950:;
    sp = sp + 32;
    return;
L_088E9970:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9978;
L_088E9978:;
    goto L_088E9908;
L_088E9980:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9988;
L_088E9988:;
    a1 = LD32(s0+12);
    goto L_088E9900;
L_088E9990:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9998;
L_088E9998:;
    a0 = s0 + 4;
    func_08AB95E4(a0, 0, 0, 0);
    goto L_088E99A0;
L_088E99A0:;
    s1 = LD32(s0+56);
    cnd_ = s1 != 0;
    a0 = 14;
    if (cnd_) { goto L_088E99D4; }
    goto L_088E99AC;
L_088E99AC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E99B4;
L_088E99B4:;
    a0 = s0 + 28;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E99BC;
L_088E99BC:;
    a0 = s0 + 8;
    func_08AB9624(a0, 0, 0, 0);
    goto L_088E99C4;
L_088E99C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E99CC;
L_088E99CC:;
    v0 = LD32(s2+3076);
    goto L_088E98D4;
L_088E99D4:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E99DC;
L_088E99DC:;
    a0 = s1 + 4;
    func_08AA2994(a0, 0, 0, 0);
    goto L_088E99E4;
L_088E99E4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E99EC;
L_088E99EC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E99F4;
L_088E99F4:;
    goto L_088E99AC;
L_088E99FC:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9A04;
L_088E9A04:;
    goto L_088E9850;
L_088E9A0C:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9A14;
L_088E9A14:;
    a1 = LD32(s0+12);
    goto L_088E9848;
L_088E9A1C:;
    a0 = s0 + 140;
    func_08AABCA0(a0, t1, t2, t3);
    goto L_088E9A24;
L_088E9A24:;
    a0 = s0 + 120;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9A2C;
L_088E9A2C:;
    a0 = s0 + 100;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9A34;
L_088E9A34:;
    a0 = s0 + 80;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9A3C;
L_088E9A3C:;
    a0 = s0 + 60;
    func_08AB128C(a0, 0, 0, 0);
    goto L_088E9A44;
L_088E9A44:;
    a0 = s0 + 40;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9A4C;
L_088E9A4C:;
    a0 = LD32(s0+28);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9AE0; }
    goto L_088E9A58;
L_088E9A58:;
    s2 = LD32(s0+20);
    goto L_088E9A5C;
L_088E9A5C:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088E9A8C; }
    goto L_088E9A64;
L_088E9A64:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088E9A84; }
    goto L_088E9A70;
L_088E9A70:;
    a0 = LD32(s1+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9AB4; }
    goto L_088E9A7C;
L_088E9A7C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088E9AA4; }
    goto L_088E9A84;
L_088E9A84:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9A8C;
L_088E9A8C:;
    a0 = s0 + 0;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9A94;
L_088E9A94:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9A9C;
L_088E9A9C:;
    v0 = LD32(s3+3072);
    goto L_088E981C;
L_088E9AA4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9AAC;
L_088E9AAC:;
    goto L_088E9A84;
L_088E9AB4:;
    func_08AA6018(a0);
    goto L_088E9ABC;
L_088E9ABC:;
    a0 = LD32(s1+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9AD0; }
    goto L_088E9AC8;
L_088E9AC8:;
    s1 = LD32(s2);
    goto L_088E9A7C;
L_088E9AD0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9AD8;
L_088E9AD8:;
    s1 = LD32(s2);
    goto L_088E9A7C;
L_088E9AE0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9AE8;
L_088E9AE8:;
    s2 = LD32(s0+20);
    goto L_088E9A5C;
L_088E9AF0:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9AF8;
L_088E9AF8:;
    goto L_088E979C;
L_088E9B00:;
    a0 = s2 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088E9B08;
L_088E9B08:;
    a1 = LD32(s0+12);
    goto L_088E9794;
L_088E9B10:;
    a0 = 14;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9B18;
L_088E9B18:;
    a0 = s0 + 136;
    func_08AB95A4(a0, 0, 0, 0);
    goto L_088E9B20;
L_088E9B20:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9B28;
L_088E9B28:;
    a0 = s0 + 60;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9B30;
L_088E9B30:;
    a0 = s0 + 40;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088E9B38;
L_088E9B38:;
    a0 = LD32(s0+28);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9C50; }
    goto L_088E9B44;
L_088E9B44:;
    s2 = LD32(s0+20);
    goto L_088E9B48;
L_088E9B48:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = LD32(s0+8); goto L_088E9B7C; }
    goto L_088E9B50;
L_088E9B50:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088E9B70; }
    goto L_088E9B5C;
L_088E9B5C:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9C24; }
    goto L_088E9B68;
L_088E9B68:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088E9C14; }
    goto L_088E9B70;
L_088E9B70:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9B78;
L_088E9B78:;
    a0 = LD32(s0+8);
    goto L_088E9B7C;
L_088E9B7C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9C04; }
    goto L_088E9B84;
L_088E9B84:;
    s2 = LD32(s0);
    goto L_088E9B88;
L_088E9B88:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088E9BB8; }
    goto L_088E9B90;
L_088E9B90:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088E9BB0; }
    goto L_088E9B9C;
L_088E9B9C:;
    a0 = LD32(s1+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9BD8; }
    goto L_088E9BA8;
L_088E9BA8:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088E9BC8; }
    goto L_088E9BB0;
L_088E9BB0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9BB8;
L_088E9BB8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9BC0;
L_088E9BC0:;
    v0 = LD32(s3+3068);
    goto L_088E9768;
L_088E9BC8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9BD0;
L_088E9BD0:;
    goto L_088E9BB0;
L_088E9BD8:;
    func_08AA5F78(a0);
    goto L_088E9BE0;
L_088E9BE0:;
    a0 = LD32(s1+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9BF4; }
    goto L_088E9BEC;
L_088E9BEC:;
    s1 = LD32(s2);
    goto L_088E9BA8;
L_088E9BF4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9BFC;
L_088E9BFC:;
    s1 = LD32(s2);
    goto L_088E9BA8;
L_088E9C04:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9C0C;
L_088E9C0C:;
    s2 = LD32(s0);
    goto L_088E9B88;
L_088E9C14:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9C1C;
L_088E9C1C:;
    goto L_088E9B70;
L_088E9C24:;
    func_08AA5FC8(a0);
    goto L_088E9C2C;
L_088E9C2C:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E9C40; }
    goto L_088E9C38;
L_088E9C38:;
    s1 = LD32(s2);
    goto L_088E9B68;
L_088E9C40:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9C48;
L_088E9C48:;
    s1 = LD32(s2);
    goto L_088E9B68;
L_088E9C50:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E9C58;
L_088E9C58:;
    s2 = LD32(s0+20);
    goto L_088E9B48;
}

/* 088E9C60 */
u32 func_088E9C60(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9C60:;
    sp = sp - 32;
    s0 = D_08B30BFC - (3068);
    a1 = a0 + 0;
    v0 = LD32(s0+3068);
    a0 = D_08B30BBC - (3004);
    v0 = v0 < 0x400u;
    a2 = 1;
    a3 = sp + 0;
    a0 = a0 + 3004;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E9CA8; }
    goto L_088E9C94;
L_088E9C94:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088E9CA8:;
    ST32(sp, 0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9CB0;
L_088E9CB0:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E9C94; }
    goto L_088E9CB8;
L_088E9CB8:;
    v1 = LD32(s0+3068);
    v0 = LD32(sp);
    v0 = v0 ^ v1;
    v1 = v0 < 0x1u;
    goto L_088E9C94;
}

/* 088E9CCC */
u32 func_088E9CCC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9CCC:;
    sp = sp - 32;
    s0 = D_08B30C00 - (3072);
    a1 = a0 + 0;
    v0 = LD32(s0+3072);
    a0 = D_08B30BCC - (3020);
    v0 = v0 < 0x400u;
    a2 = 1;
    a3 = sp + 0;
    a0 = a0 + 3020;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E9D14; }
    goto L_088E9D00;
L_088E9D00:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088E9D14:;
    ST32(sp, 0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9D1C;
L_088E9D1C:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E9D00; }
    goto L_088E9D24;
L_088E9D24:;
    v1 = LD32(s0+3072);
    v0 = LD32(sp);
    v0 = v0 ^ v1;
    v1 = v0 < 0x1u;
    goto L_088E9D00;
}

/* 088E9D38 */
u32 func_088E9D38(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9D38:;
    sp = sp - 32;
    s0 = D_08B30C04 - (3076);
    a1 = a0 + 0;
    v0 = LD32(s0+3076);
    a0 = D_08B30BDC - (3036);
    v0 = v0 < 0x200u;
    a2 = 1;
    a3 = sp + 0;
    a0 = a0 + 3036;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E9D80; }
    goto L_088E9D6C;
L_088E9D6C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088E9D80:;
    ST32(sp, 0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9D88;
L_088E9D88:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088E9D6C; }
    goto L_088E9D90;
L_088E9D90:;
    v1 = LD32(s0+3076);
    v0 = LD32(sp);
    v0 = v0 ^ v1;
    v1 = v0 < 0x1u;
    goto L_088E9D6C;
}

/* 088E9DA4 */
void func_088E9DA4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9DA4:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_088E9C60(a0, t1, t2, t3);
    goto L_088E9DB8;
L_088E9DB8:;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_088E9E68; }
    goto L_088E9DC0;
L_088E9DC0:;
    t2 = D_08B30BFC - (3068);
    v0 = LD32(t2+3068);
    a2 = 0 + 0;
    t3 = D_08B30BF8 - (3064);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088E9E0C; }
    goto L_088E9DD8;
L_088E9DD8:;
    t1 = LD32(s0+132);
    t0 = LD32(t3+3064);
    a1 = v0 + 0;
    goto L_088E9DE4;
L_088E9DE4:;
    a3 = a2 << 2;
    v0 = a3 + t0;
    v1 = LD32(v0);
    a0 = LD32(v1+132);
    cnd_ = t1 == a0;
    if (cnd_) { a1 = LD32(t2+3068); goto L_088E9E10; }
    goto L_088E9DFC;
L_088E9DFC:;
    a2 = a2 + 1;
    v0 = a2 < a1;
    cnd_ = v0 != 0;
    a3 = a2 << 2;
    if (cnd_) { goto L_088E9DE4; }
    goto L_088E9E0C;
L_088E9E0C:;
    a1 = LD32(t2+3068);
    goto L_088E9E10;
L_088E9E10:;
    v0 = a2 < a1;
    cnd_ = v0 == 0;
    v1 = LD32(t3+3064);
    if (cnd_) { goto L_088E9E3C; }
    goto L_088E9E1C;
L_088E9E1C:;
    v0 = a1 << 2;
    a0 = v0 + v1;
    goto L_088E9E24;
L_088E9E24:;
    v0 = LD32(a0-4);
    a1 = a1 - 1;
    v1 = a2 < a1;
    ST32(a0, v0);
    cnd_ = v1 != 0;
    a0 = a0 - 4;
    if (cnd_) { goto L_088E9E24; }
    goto L_088E9E3C;
L_088E9E3C:;
    a0 = LD32(t2+3068);
    v0 = D_08B30BEC - (3052);
    a2 = LD32(v0+3052);
    a1 = LD32(t3+3064);
    v1 = a0 << 2;
    v1 = v1 + a2;
    a1 = a3 + a1;
    v0 = a0 + 1;
    ST32(a1, s0);
    ST32(t2+3068, v0);
    ST32(v1, s0);
    goto L_088E9E68;
L_088E9E68:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
}

/* 088E9E7C */
void func_088E9E7C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9E7C:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_088E9CCC(a0, t1, t2, t3);
    goto L_088E9E90;
L_088E9E90:;
    a2 = D_08B30C00 - (3072);
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_088E9EBC; }
    goto L_088E9E9C;
L_088E9E9C:;
    a0 = LD32(a2+3072);
    v1 = D_08B30BF0 - (3056);
    a1 = LD32(v1+3056);
    v0 = a0 << 2;
    v1 = a0 + 1;
    v0 = v0 + a1;
    ST32(v0, s0);
    ST32(a2+3072, v1);
    goto L_088E9EBC;
L_088E9EBC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
}

/* 088E9ED0 */
void func_088E9ED0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E9ED0:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_088E9D38(a0, t1, t2, t3);
    goto L_088E9EE4;
L_088E9EE4:;
    a2 = D_08B30C04 - (3076);
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_088E9F10; }
    goto L_088E9EF0;
L_088E9EF0:;
    a0 = LD32(a2+3076);
    v1 = D_08B30BF4 - (3060);
    a1 = LD32(v1+3060);
    v0 = a0 << 2;
    v1 = a0 + 1;
    v0 = v0 + a1;
    ST32(v0, s0);
    ST32(a2+3076, v1);
    goto L_088E9F10;
L_088E9F10:;
    v0 = a0 + 0;
    sp = sp + 16;
    return;
}

/* 088E9F24 */
rv_t func_088E9F24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9F24:;
    sp = sp - 32;
    a1 = a0 + 0;
    a0 = D_08B30BBC - (3004);
    v0 = (u32)-1;
    a0 = a0 + 3004;
    a2 = 0 + 0;
    a3 = sp + 0;
    ST32(sp, v0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9F4C;
L_088E9F4C:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E9F74; }
    goto L_088E9F54;
L_088E9F54:;
    v0 = D_08B30BEC - (3052);
    v1 = LD32(v0+3052);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E9F74; }
    goto L_088E9F64;
L_088E9F64:;
    v0 = LD32(sp);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_088E9F74;
L_088E9F74:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088E9F80 */
rv_t func_088E9F80(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9F80:;
    sp = sp - 32;
    a1 = a0 + 0;
    a0 = D_08B30BCC - (3020);
    v0 = (u32)-1;
    a0 = a0 + 3020;
    a2 = 0 + 0;
    a3 = sp + 0;
    ST32(sp, v0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E9FA8;
L_088E9FA8:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E9FD0; }
    goto L_088E9FB0;
L_088E9FB0:;
    v0 = D_08B30BF0 - (3056);
    v1 = LD32(v0+3056);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E9FD0; }
    goto L_088E9FC0;
L_088E9FC0:;
    v0 = LD32(sp);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_088E9FD0;
L_088E9FD0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088E9FDC */
rv_t func_088E9FDC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E9FDC:;
    sp = sp - 32;
    a1 = a0 + 0;
    a0 = D_08B30BDC - (3036);
    v0 = (u32)-1;
    a0 = a0 + 3036;
    a2 = 0 + 0;
    a3 = sp + 0;
    ST32(sp, v0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA004;
L_088EA004:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088EA02C; }
    goto L_088EA00C;
L_088EA00C:;
    v0 = D_08B30BF4 - (3060);
    v1 = LD32(v0+3060);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088EA02C; }
    goto L_088EA01C;
L_088EA01C:;
    v0 = LD32(sp);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_088EA02C;
L_088EA02C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088EA038 */
void func_088EA038(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EA038:;
    sp = sp - 32;
    a1 = a0 + 0;
    a0 = D_08B30BCC - (3020);
    a0 = a0 + 3020;
    a2 = 0 + 0;
    a3 = sp + 0;
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA058;
L_088EA058:;
    sp = sp + 32;
    return;
}

/* 088EA064 */
rv_t func_088EA064(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EA064:;
    sp = sp - 32;
    a1 = a0 + 0;
    a0 = D_08B30BDC - (3036);
    a0 = a0 + 3036;
    a2 = 0 + 0;
    a3 = sp + 0;
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA084;
L_088EA084:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088EA090 */
void func_088EA090(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EA090:;
    sp = sp - 48;
    s3 = a2 + 0;
    s2 = a1 + 0;
    v0 = LD32(a0+140);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088EA1C8; }
    goto L_088EA0C0;
L_088EA0C0:;
    f1 = BITSF(LD32(a0+84));
    f0 = BITSF(LD32(a0+128));
    v0 = D_08AECE10 - (-12784);
    f1 = f1 * f12;
    f1 = f1 * f0;
    f0 = BITSF(F2I(f1, 1));
    a2 = FBITS(f0);
    f0 = (float)(s32)FBITS(f0);
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-12784));
    f0 = f0 - f1;
    ST32(a3, FBITS(f0));
    v0 = LD32(a0+140);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+92); goto L_088EA164; }
    goto L_088EA100;
L_088EA100:;
    v1 = LD32(a0+92);
    a1 = a2 + 1;
    a0 = LD32(a0+136);
    { u32 x_ = a2, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = hi;
    { u32 x_ = a1, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = a2 << 2;
    v0 = v0 + a2;
    v0 = v0 << 2;
    a0 = a0 + v0;
    ST32(s2, a0);
    v1 = LD32(s1+136);
    a3 = hi;
    v0 = a3 << 2;
    v0 = v0 + a3;
    v0 = v0 << 2;
    v1 = v1 + v0;
    ST32(s3, v1);
    goto L_088EA148;
L_088EA148:;
    sp = sp + 48;
    return;
L_088EA164:;
    a0 = (s32)a2 < 0;
    v1 = a2 + 1;
    v0 = v0 - 1;
    s0 = (s32)v0 < (s32)a2 ? v0 : a2;
    if (a0 != 0) s0 = 0;
    a1 = sp + 4;
    a0 = sp + 0;
    a2 = sp + 8;
    ST32(sp, v1);
    ST32(sp+8, v0);
    ST32(sp+4, 0);
    v0 = func_088EA368(a0, a1, a2);
    goto L_088EA194;
L_088EA194:;
    v1 = s0 << 2;
    a0 = LD32(s1+136);
    v1 = v1 + s0;
    v1 = v1 << 2;
    a0 = a0 + v1;
    ST32(s2, a0);
    v1 = v0 << 2;
    v1 = v1 + v0;
    v0 = LD32(s1+136);
    v1 = v1 << 2;
    goto L_088EA1BC;
L_088EA1BC:;
    v0 = v0 + v1;
    ST32(s3, v0);
    goto L_088EA148;
L_088EA1C8:;
    v0 = LD32(a0+92);
    t0 = LD32(a0+136);
    v0 = v0 - 1;
    v1 = v0 << 2;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = v1 + t0;
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    t1 = D_08AECE10 - (-12784);
    if (cnd_) { goto L_088EA208; }
    goto L_088EA1F8;
L_088EA1F8:;
    ST32(a2, v1);
    ST32(a3, 0);
    ST32(a1, v1);
    goto L_088EA148;
L_088EA208:;
    f0 = BITSF(LD32(t1-12784));
    a0 = v0 + 0;
    a2 = 0 + 0;
    v0 = 0 + 0;
    ST32(a3, FBITS(f0));
    cnd_ = (s32)a0 <= 0;
    a1 = a0 << 2;
    if (cnd_) { goto L_088EA254; }
    goto L_088EA224;
L_088EA224:;
    v1 = v1 + 16;
    goto L_088EA228;
L_088EA228:;
    f1 = BITSF(LD32(v1-20));
    v0 = a0 - 1;
    f2 = BITSF(LD32(v1));
    fcc = FCMP(f1, f12, 12);
    a1 = a0 << 2;
    a2 = v0 << 2;
    cnd_ = fcc;
    v1 = v1 - 20;
    if (cnd_) { goto L_088EA274; }
    goto L_088EA248;
L_088EA248:;
    a0 = v0 + 0;
    cnd_ = (s32)v0 > 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_088EA228; }
    goto L_088EA254;
L_088EA254:;
    v0 = a2 + v0;
    v0 = v0 << 2;
    v0 = t0 + v0;
    ST32(s2, v0);
    v1 = a1 + a0;
    v1 = v1 << 2;
    v0 = LD32(s1+136);
    goto L_088EA1BC;
L_088EA274:;
    f0 = f12 - f1;
    f1 = f2 - f1;
    f0 = f1 - f0;
    f0 = f0 / f1;
    ST32(a3, FBITS(f0));
    goto L_088EA254;
}

/* 088EA28C */
void func_088EA28C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EA28C:;
    sp = sp - 32;
    s3 = 0 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088EA34C; }
    goto L_088EA2B8;
L_088EA2B8:;
    s2 = 0 + 0;
    goto L_088EA2BC;
L_088EA2BC:;
    v0 = LD32(s1+4);
    v0 = s2 + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088E9F80(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA2CC;
L_088EA2CC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088EA33C; }
    goto L_088EA2D4;
L_088EA2D4:;
    a0 = LD32(v0+172);
    { rv_t r_ = func_088E9F24(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA2DC;
L_088EA2DC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088EA33C; }
    goto L_088EA2E4;
L_088EA2E4:;
    a1 = LD32(v0+4);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    v0 = LD32(v0+8);
    if (cnd_) { goto L_088EA338; }
    goto L_088EA2F4;
L_088EA2F4:;
    v1 = v0 + 0;
    goto L_088EA2F8;
L_088EA2F8:;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(s0));
    f4 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s0+8));
    f0 = f0 * f3;
    f1 = f1 * f4;
    f2 = f2 * f5;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    cnd_ = v0 != 0;
    v1 = v1 + 16;
    if (cnd_) { goto L_088EA2F8; }
    goto L_088EA338;
L_088EA338:;
    v0 = LD32(s1);
    goto L_088EA33C;
L_088EA33C:;
    s3 = s3 + 1;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s2 = s2 + 104;
    if (cnd_) { goto L_088EA2BC; }
    goto L_088EA34C;
L_088EA34C:;
    sp = sp + 32;
    return;
}

/* 088EA368 */
u32 func_088EA368(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088EA368:;
    a0 = LD32(a0);
    v1 = LD32(a1);
    v0 = (s32)a0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088EA384; }
    goto L_088EA37C;
L_088EA37C:;
    v0 = LD32(a2);
    v1 = (s32)v0 < (s32)a0 ? v0 : a0;
    goto L_088EA384;
L_088EA384:;
    v0 = v1 + 0;
    return v0;
}

/* 088EA38C */
void func_088EA38C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EA38C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 4;
    a0 = a1 + 0;
    a3 = 0 + 0;
    s1 = a1 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EA3B8;
L_088EA3B8:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EA3CC;
L_088EA3CC:;
    t0 = LD32(s0);
    v0 = 1;
    a1 = s0 + 4;
    a0 = s1 + 0;
    a2 = 24;
    a3 = 0 + 0;
    cnd_ = t0 == v0;
    v1 = (s32)t0 < 2;
    if (cnd_) { goto L_088EA420; }
    goto L_088EA3EC;
L_088EA3EC:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088EA410; }
    goto L_088EA3F4;
L_088EA3F4:;
    v0 = 2;
    cnd_ = t0 == v0;
    a2 = 4;
    if (cnd_) { goto L_088EA420; }
    goto L_088EA400;
L_088EA400:;
    v0 = 3;
    cnd_ = t0 == v0;
    a2 = 12;
    if (cnd_) { goto L_088EA420; }
    goto L_088EA40C;
L_088EA40C:;
    goto L_088EA410;
L_088EA410:;
    sp = sp + 16;
    return;
L_088EA420:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EA428;
L_088EA428:;
    goto L_088EA410;
}

/* 088EA430 */
void func_088EA430(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088EA430:;
    t0 = a0 + 0;
    a2 = a0 + 0;
    a3 = 0 + 0;
    goto L_088EA43C;
L_088EA43C:;
    v1 = LD32(a1);
    a3 = a3 + 1;
    a0 = a3 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a2, v0);
    a2 = a2 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088EA43C; }
    goto L_088EA464;
L_088EA464:;
    a2 = t0 + 28;
    a3 = 0 + 0;
    goto L_088EA46C;
L_088EA46C:;
    v1 = LD32(a1);
    a3 = a3 + 1;
    a0 = a3 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a2, v0);
    a2 = a2 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088EA46C; }
    goto L_088EA494;
L_088EA494:;
    v1 = LD32(t0);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_088EA534; }
    goto L_088EA4A4;
L_088EA4A4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088EA564; }
    goto L_088EA4AC;
L_088EA4AC:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088EA4FC; }
    goto L_088EA4B8;
L_088EA4B8:;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = t0 + 4; goto L_088EA4C8; }
    goto L_088EA4C0;
L_088EA4C0:;
    return;
L_088EA4C8:;
    a3 = 0 + 0;
    goto L_088EA4CC;
L_088EA4CC:;
    v1 = LD32(a1);
    a3 = a3 + 1;
    a0 = a3 < 0xcu;
    v0 = LD_U8(v1);
    ST8(a2, v0);
    a2 = a2 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088EA4CC; }
    goto L_088EA4F4;
L_088EA4F4:;
    return;
L_088EA4FC:;
    a2 = t0 + 4;
    a3 = 0 + 0;
    goto L_088EA504;
L_088EA504:;
    v1 = LD32(a1);
    a3 = a3 + 1;
    a0 = a3 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a2, v0);
    a2 = a2 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088EA504; }
    goto L_088EA52C;
L_088EA52C:;
    return;
L_088EA534:;
    a2 = t0 + 4;
    a3 = 0 + 0;
    goto L_088EA53C;
L_088EA53C:;
    v1 = LD32(a1);
    a3 = a3 + 1;
    a0 = a3 < 0x18u;
    v0 = LD_U8(v1);
    ST8(a2, v0);
    a2 = a2 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088EA53C; }
    goto L_088EA564;
L_088EA564:;
    return;
}

/* 088EA56C */
rv_t func_088EA56C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088EA56C:;
    v0 = LD32(a0);
    sp = sp - 64;
    t0 = a1 + 0;
    ST32(sp+48, v0);
    t1 = a0 + 0;
    a2 = sp + 48;
    a1 = 0 + 0;
    goto L_088EA588;
L_088EA588:;
    v0 = LD_U8(a2);
    v1 = LD32(t0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(t0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(t0, v0);
    if (cnd_) { goto L_088EA588; }
    goto L_088EA5B0;
L_088EA5B0:;
    v0 = LD32(t1+28);
    a2 = sp + 52;
    a1 = 0 + 0;
    ST32(sp+52, v0);
    goto L_088EA5C0;
L_088EA5C0:;
    v0 = LD_U8(a2);
    v1 = LD32(t0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(t0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(t0, v0);
    if (cnd_) { goto L_088EA5C0; }
    goto L_088EA5E8;
L_088EA5E8:;
    v1 = LD32(t1);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_088EA6A4; }
    goto L_088EA5F8;
L_088EA5F8:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088EA610; }
    goto L_088EA600;
L_088EA600:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088EA664; }
    goto L_088EA608;
L_088EA608:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(t1+12); goto L_088EA618; }
    goto L_088EA610;
L_088EA610:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088EA618:;
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    ST32(sp+40, v0);
    a2 = sp + 32;
    a1 = 0 + 0;
    ST32(sp+32, v1);
    ST32(sp+36, a0);
    goto L_088EA634;
L_088EA634:;
    v0 = LD_U8(a2);
    v1 = LD32(t0);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(t0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(t0, v0);
    if (cnd_) { goto L_088EA634; }
    goto L_088EA65C;
L_088EA65C:;
    goto L_088EA610;
L_088EA664:;
    f0 = BITSF(LD32(t1+4));
    a2 = sp + 56;
    a1 = 0 + 0;
    ST32(sp+56, FBITS(f0));
    goto L_088EA674;
L_088EA674:;
    v0 = LD_U8(a2);
    v1 = LD32(t0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(t0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(t0, v0);
    if (cnd_) { goto L_088EA674; }
    goto L_088EA69C;
L_088EA69C:;
    goto L_088EA610;
L_088EA6A4:;
    a3 = LD32(t1+24);
    v0 = LD32(t1+4);
    v1 = LD32(t1+8);
    a0 = LD32(t1+12);
    a1 = LD32(t1+16);
    a2 = LD32(t1+20);
    ST32(sp, v0);
    t2 = sp + 0;
    t1 = 0 + 0;
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    goto L_088EA6DC;
L_088EA6DC:;
    v0 = LD_U8(t2);
    v1 = LD32(t0);
    t1 = t1 + 1;
    a0 = t1 < 0x18u;
    ST8(v1, v0);
    t2 = t2 + 1;
    v0 = LD32(t0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(t0, v0);
    if (cnd_) { goto L_088EA6DC; }
    goto L_088EA704;
L_088EA704:;
    goto L_088EA610;
}

/* 088EA70C */
rv_t func_088EA70C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EA70C:;
    sp = sp - 16;
    a2 = a0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA73C;
L_088EA73C:;
    a1 = LD32(s0+28);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA748;
L_088EA748:;
    v1 = LD32(s0);
    v0 = 1;
    a1 = s0 + 4;
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a2 = (s32)v1 < 2;
    if (cnd_) { goto L_088EA7C0; }
    goto L_088EA760;
L_088EA760:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088EA77C; }
    goto L_088EA768;
L_088EA768:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088EA7B8; }
    goto L_088EA774;
L_088EA774:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088EA78C; }
    goto L_088EA77C;
L_088EA77C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088EA78C:;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA794;
L_088EA794:;
    f12 = BITSF(LD32(s0+8));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA7A0;
L_088EA7A0:;
    f12 = BITSF(LD32(s0+12));
    a0 = v0 + 0;
    goto L_088EA7A8;
L_088EA7A8:;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA7B0;
L_088EA7B0:;
    goto L_088EA77C;
L_088EA7B8:;
    f12 = BITSF(LD32(s0+4));
    goto L_088EA7A8;
L_088EA7C0:;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EA7C8;
L_088EA7C8:;
    goto L_088EA77C;
}

/* 088EA7D0 */
u64 func_088EA7D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_088EA7D0:;
    a0 = LD32(a0);
    v0 = 1;
    a1 = 32;
    cnd_ = a0 == v0;
    v1 = (s32)a0 < 2;
    if (cnd_) { goto L_088EA804; }
    goto L_088EA7E4;
L_088EA7E4:;
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_088EA80C; }
    goto L_088EA7EC;
L_088EA7EC:;
    cnd_ = a0 == v0;
    a1 = 12;
    if (cnd_) { goto L_088EA804; }
    goto L_088EA7F4;
L_088EA7F4:;
    v0 = 3;
    cnd_ = a0 == v0;
    a1 = 20;
    if (cnd_) { goto L_088EA804; }
    goto L_088EA800;
L_088EA800:;
    a1 = 0 + 0;
    goto L_088EA804;
L_088EA804:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_088EA80C:;
    cnd_ = a0 != 0;
    a1 = 8;
    if (cnd_) { goto L_088EA800; }
    goto L_088EA814;
L_088EA814:;
    goto L_088EA804;
}

/* 088EA81C */
void func_088EA81C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EA81C:;
    t0 = LD32(a1);
    v0 = 1;
    sp = sp - 16;
    t2 = a1 + 0;
    t3 = a0 + 0;
    cnd_ = t0 == v0;
    t1 = a2 + 0;
    if (cnd_) { goto L_088EACE8; }
    goto L_088EA838;
L_088EA838:;
    v0 = (s32)t0 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088EA854; }
    goto L_088EA844;
L_088EA844:;
    cnd_ = t0 == v0;
    v0 = 3;
    if (cnd_) { goto L_088EAAB8; }
    goto L_088EA84C;
L_088EA84C:;
    cnd_ = t0 == v0;
    if (cnd_) { v0 = LD32(a1+28); goto L_088EA880; }
    goto L_088EA854;
L_088EA854:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(t3, FBITS(f1));
    ST32(t3+4, FBITS(f0));
    ST32(t3+8, FBITS(f2));
    goto L_088EA874;
L_088EA874:;
    v0 = t3 + 0;
    sp = sp + 16;
    return;
L_088EA880:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08AECE18 - (-12776);
    if (cnd_) { goto L_088EA9DC; }
    goto L_088EA88C;
L_088EA88C:;
    v1 = D_08AECE1C - (-12772);
    f7 = BITSF(LD32(v0-12776));
    f8 = BITSF(LD32(v1-12772));
    v0 = D_08AECE14 - (-12780);
    v1 = D_08AECE20 - (-12768);
    f6 = BITSF(LD32(v0-12780));
    f9 = BITSF(LD32(v1-12768));
    a2 = sp + 0;
    goto L_088EA8AC;
L_088EA8AC:;
    v0 = LD32(t1);
    goto L_088EA8B0;
L_088EA8B0:;
    a0 = LD32(t1+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    a1 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a0 = a0 + v1;
    v0 = v0 + a1;
    v0 = v0 + a0;
    f2 = (float)(s32)FBITS(f0);
    f3 = (float)(s32)FBITS(f1);
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    f2 = f2 * f6;
    f3 = f3 * f6;
    f0 = (float)(s32)FBITS(f1);
    a0 = a0 + v0;
    f2 = f2 + f2;
    f3 = f3 + f3;
    f0 = f0 * f6;
    ST32(t1+4, a0);
    f5 = f2 + f7;
    f3 = f3 + f7;
    f0 = f0 + f0;
    ST32(t1, v0);
    f1 = f5 * f5;
    f2 = f3 * f3;
    f4 = f0 + f7;
    ST32(a2, FBITS(f5));
    f1 = f1 + f2;
    f0 = f4 * f4;
    ST32(a2+4, FBITS(f3));
    f2 = f1 + f0;
    fcc = FCMP(f8, f2, 12);
    cnd_ = fcc;
    ST32(a2+8, FBITS(f4));
    if (cnd_) { goto L_088EA8AC; }
    goto L_088EA96C;
L_088EA96C:;
    fcc = FCMP(f2, f9, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(t1); goto L_088EA8B0; }
    goto L_088EA97C;
L_088EA97C:;
    f0 = sqrtf(f2);
    f2 = f8 / f0;
    f1 = f4 * f2;
    f0 = f5 * f2;
    f2 = f3 * f2;
    ST32(a2+8, FBITS(f1));
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    goto L_088EA99C;
L_088EA99C:;
    f0 = BITSF(LD32(t2+4));
    f2 = BITSF(LD32(sp));
    f4 = BITSF(LD32(t2+12));
    f3 = BITSF(LD32(t2+8));
    f2 = f2 * f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f1 = f1 * f3;
    f0 = f0 * f4;
    ST32(t3, FBITS(f2));
    ST32(t3+4, FBITS(f1));
    ST32(t3+8, FBITS(f0));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    goto L_088EA9D4;
L_088EA9D4:;
    ST32(sp+8, FBITS(f0));
    goto L_088EA874;
L_088EA9DC:;
    f6 = BITSF(LD32(v0-12776));
    v1 = D_08AECE1C - (-12772);
    v0 = D_08AECE14 - (-12780);
    f7 = BITSF(LD32(v1-12772));
    f5 = BITSF(LD32(v0-12780));
    a1 = LD32(a2);
    a2 = sp + 0;
    goto L_088EA9F8;
L_088EA9F8:;
    v1 = LD32(t1+4);
    a0 = (u32)((s32)a1 >> 16);
    v0 = a1 << 16;
    a1 = v0 + a0;
    a1 = a1 + v1;
    a0 = (u32)((s32)a1 >> 16);
    v0 = a1 << 16;
    v1 = v1 + a1;
    a1 = a1 >> 1;
    f3 = BITSF(a1);
    a1 = v0 + a0;
    a1 = a1 + v1;
    a0 = a1 >> 1;
    f0 = BITSF(a0);
    v0 = a1 << 16;
    a0 = (u32)((s32)a1 >> 16);
    v1 = v1 + a1;
    a1 = v0 + a0;
    a1 = a1 + v1;
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f0);
    v0 = a1 >> 1;
    f3 = BITSF(v0);
    f1 = f1 * f5;
    f2 = f2 * f5;
    f0 = (float)(s32)FBITS(f3);
    v1 = v1 + a1;
    f1 = f1 + f1;
    f2 = f2 + f2;
    f0 = f0 * f5;
    ST32(t1+4, v1);
    f1 = f1 + f6;
    f2 = f2 + f6;
    f0 = f0 + f0;
    f3 = f1 * f1;
    f4 = f2 * f2;
    f0 = f0 + f6;
    ST32(a2, FBITS(f1));
    f3 = f3 + f4;
    f1 = f0 * f0;
    ST32(a2+4, FBITS(f2));
    f3 = f3 + f1;
    fcc = FCMP(f7, f3, 12);
    cnd_ = fcc;
    ST32(a2+8, FBITS(f0));
    if (cnd_) { goto L_088EA9F8; }
    goto L_088EAAB0;
L_088EAAB0:;
    ST32(t1, a1);
    goto L_088EA99C;
L_088EAAB8:;
    v0 = LD32(a1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08AECE18 - (-12776);
    if (cnd_) { goto L_088EAC0C; }
    goto L_088EAAC8;
L_088EAAC8:;
    v1 = D_08AECE1C - (-12772);
    f7 = BITSF(LD32(v0-12776));
    f8 = BITSF(LD32(v1-12772));
    v0 = D_08AECE14 - (-12780);
    v1 = D_08AECE20 - (-12768);
    f6 = BITSF(LD32(v0-12780));
    f9 = BITSF(LD32(v1-12768));
    a2 = sp + 0;
    goto L_088EAAE8;
L_088EAAE8:;
    v0 = LD32(t1);
    goto L_088EAAEC;
L_088EAAEC:;
    a0 = LD32(t1+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    a1 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a0 = a0 + v1;
    v0 = v0 + a1;
    v0 = v0 + a0;
    f2 = (float)(s32)FBITS(f0);
    f3 = (float)(s32)FBITS(f1);
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    f2 = f2 * f6;
    f3 = f3 * f6;
    f0 = (float)(s32)FBITS(f1);
    a0 = a0 + v0;
    f2 = f2 + f2;
    f3 = f3 + f3;
    f0 = f0 * f6;
    ST32(t1+4, a0);
    f5 = f2 + f7;
    f3 = f3 + f7;
    f0 = f0 + f0;
    ST32(t1, v0);
    f1 = f5 * f5;
    f2 = f3 * f3;
    f4 = f0 + f7;
    ST32(a2, FBITS(f5));
    f1 = f1 + f2;
    f0 = f4 * f4;
    ST32(a2+4, FBITS(f3));
    f2 = f1 + f0;
    fcc = FCMP(f8, f2, 12);
    cnd_ = fcc;
    ST32(a2+8, FBITS(f4));
    if (cnd_) { goto L_088EAAE8; }
    goto L_088EABA8;
L_088EABA8:;
    fcc = FCMP(f2, f9, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(t1); goto L_088EAAEC; }
    goto L_088EABB8;
L_088EABB8:;
    f0 = sqrtf(f2);
    f2 = f8 / f0;
    f1 = f4 * f2;
    f0 = f5 * f2;
    f2 = f3 * f2;
    ST32(a2+8, FBITS(f1));
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    goto L_088EABD8;
L_088EABD8:;
    f1 = BITSF(LD32(t2+4));
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f3 = f3 * f1;
    f2 = f2 * f1;
    f0 = f0 * f1;
    ST32(t3, FBITS(f3));
    ST32(t3+4, FBITS(f2));
    ST32(t3+8, FBITS(f0));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    goto L_088EA9D4;
L_088EAC0C:;
    f6 = BITSF(LD32(v0-12776));
    v1 = D_08AECE1C - (-12772);
    v0 = D_08AECE14 - (-12780);
    f7 = BITSF(LD32(v1-12772));
    f5 = BITSF(LD32(v0-12780));
    a1 = LD32(a2);
    a2 = sp + 0;
    goto L_088EAC28;
L_088EAC28:;
    v1 = LD32(t1+4);
    a0 = (u32)((s32)a1 >> 16);
    v0 = a1 << 16;
    a1 = v0 + a0;
    a1 = a1 + v1;
    a0 = (u32)((s32)a1 >> 16);
    v0 = a1 << 16;
    v1 = v1 + a1;
    a1 = a1 >> 1;
    f3 = BITSF(a1);
    a1 = v0 + a0;
    a1 = a1 + v1;
    a0 = a1 >> 1;
    f0 = BITSF(a0);
    v0 = a1 << 16;
    a0 = (u32)((s32)a1 >> 16);
    v1 = v1 + a1;
    a1 = v0 + a0;
    a1 = a1 + v1;
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f0);
    v0 = a1 >> 1;
    f3 = BITSF(v0);
    f1 = f1 * f5;
    f2 = f2 * f5;
    f0 = (float)(s32)FBITS(f3);
    v1 = v1 + a1;
    f1 = f1 + f1;
    f2 = f2 + f2;
    f0 = f0 * f5;
    ST32(t1+4, v1);
    f1 = f1 + f6;
    f2 = f2 + f6;
    f0 = f0 + f0;
    f3 = f1 * f1;
    f4 = f2 * f2;
    f0 = f0 + f6;
    ST32(a2, FBITS(f1));
    f3 = f3 + f4;
    f1 = f0 * f0;
    ST32(a2+4, FBITS(f2));
    f3 = f3 + f1;
    fcc = FCMP(f7, f3, 12);
    cnd_ = fcc;
    ST32(a2+8, FBITS(f0));
    if (cnd_) { goto L_088EAC28; }
    goto L_088EACE0;
L_088EACE0:;
    ST32(t1, a1);
    goto L_088EABD8;
L_088EACE8:;
    v0 = LD32(a1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a2); goto L_088EAEAC; }
    goto L_088EACF8;
L_088EACF8:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = v1 >> 1;
    v0 = 6;
    { u32 x_ = a0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    ST32(a3+4, a1);
    t4 = hi;
    cnd_ = t4 != 0;
    ST32(a2+23232, v1);
    if (cnd_) { goto L_088EAE4C; }
    goto L_088EAD38;
L_088EAD38:;
    f0 = BITSF(LD32(t2+4));
    goto L_088EAD3C;
L_088EAD3C:;
    ST32(sp, FBITS(f0));
    goto L_088EAD40;
L_088EAD40:;
    v0 = 2;
    cnd_ = t4 == v0;
    v0 = 3;
    if (cnd_) { goto L_088EAE44; }
    goto L_088EAD4C;
L_088EAD4C:;
    cnd_ = t4 == v0;
    if (cnd_) { f0 = BITSF(LD32(t2+16)); goto L_088EAE3C; }
    goto L_088EAD54;
L_088EAD54:;
    v1 = LD32(t1);
    a0 = LD32(t1+4);
    f3 = BITSF(LD32(t2+12));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AECE14 - (-12780);
    f1 = BITSF(LD32(t2+16));
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12780));
    f1 = f1 - f3;
    a0 = a0 + v1;
    f2 = f2 * f0;
    ST32(t1+4, a0);
    f2 = f2 * f1;
    ST32(t1, v1);
    f3 = f3 + f2;
    ST32(sp+4, FBITS(f3));
    goto L_088EADA8;
L_088EADA8:;
    v0 = 4;
    cnd_ = t4 == v0;
    v0 = 5;
    if (cnd_) { goto L_088EAE34; }
    goto L_088EADB4;
L_088EADB4:;
    cnd_ = t4 == v0;
    if (cnd_) { f0 = BITSF(LD32(t2+24)); goto L_088EAE2C; }
    goto L_088EADBC;
L_088EADBC:;
    v1 = LD32(t1);
    a0 = LD32(t1+4);
    f3 = BITSF(LD32(t2+20));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AECE14 - (-12780);
    f2 = BITSF(LD32(t2+24));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12780));
    f2 = f2 - f3;
    a0 = a0 + v1;
    f1 = f1 * f0;
    ST32(t1+4, a0);
    f1 = f1 * f2;
    ST32(t1, v1);
    f3 = f3 + f1;
    ST32(sp+8, FBITS(f3));
    goto L_088EAE10;
L_088EAE10:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(t3, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(t3+4, FBITS(f1));
    ST32(t3+8, FBITS(f0));
    goto L_088EA874;
L_088EAE2C:;
    ST32(sp+8, FBITS(f0));
    goto L_088EAE10;
L_088EAE34:;
    f0 = BITSF(LD32(t2+20));
    goto L_088EAE2C;
L_088EAE3C:;
    ST32(sp+4, FBITS(f0));
    goto L_088EADA8;
L_088EAE44:;
    f0 = BITSF(LD32(t2+12));
    goto L_088EAE3C;
L_088EAE4C:;
    cnd_ = t4 == t0;
    if (cnd_) { f0 = BITSF(LD32(t2+8)); goto L_088EAD3C; }
    goto L_088EAE54;
L_088EAE54:;
    v1 = LD32(t1);
    a0 = LD32(t1+4);
    f3 = BITSF(LD32(t2+4));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AECE14 - (-12780);
    f1 = BITSF(LD32(t2+8));
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12780));
    f1 = f1 - f3;
    a0 = a0 + v1;
    f2 = f2 * f0;
    ST32(t1+4, a0);
    f2 = f2 * f1;
    ST32(t1, v1);
    f3 = f3 + f2;
    ST32(sp, FBITS(f3));
    goto L_088EAD40;
L_088EAEAC:;
    a1 = LD32(a2+4);
    f9 = BITSF(LD32(t2+4));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a1 = a1 + v1;
    v0 = v0 + a0;
    v0 = v0 + a1;
    f8 = BITSF(LD32(t2+8));
    a0 = (u32)((s32)v0 >> 16);
    ST32(a2, v1);
    a2 = v0 << 16;
    a2 = a2 + a0;
    ST32(t1+4, a1);
    a1 = a1 + v0;
    a2 = a2 + a1;
    f7 = BITSF(LD32(t2+12));
    f6 = BITSF(LD32(t2+16));
    a0 = a2 >> 1;
    ST32(t1, v0);
    v1 = v1 >> 1;
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    f5 = BITSF(a0);
    f2 = BITSF(v1);
    ST32(t1+4, a1);
    f3 = (float)(s32)FBITS(f0);
    f1 = (float)(s32)FBITS(f2);
    v0 = D_08AECE14 - (-12780);
    f2 = (float)(s32)FBITS(f5);
    f4 = BITSF(LD32(t2+24));
    f5 = BITSF(LD32(t2+20));
    f0 = BITSF(LD32(v0-12780));
    f8 = f8 - f9;
    f6 = f6 - f7;
    f4 = f4 - f5;
    f2 = f2 * f0;
    f1 = f1 * f0;
    f3 = f3 * f0;
    a1 = a1 + a2;
    f2 = f2 * f4;
    f1 = f1 * f8;
    f3 = f3 * f6;
    ST32(t1+4, a1);
    f5 = f5 + f2;
    f9 = f9 + f1;
    f7 = f7 + f3;
    ST32(t1, a2);
    ST32(t3, FBITS(f9));
    ST32(t3+4, FBITS(f7));
    ST32(t3+8, FBITS(f5));
    ST32(sp, FBITS(f9));
    ST32(sp+4, FBITS(f7));
    ST32(sp+8, FBITS(f5));
    goto L_088EA874;
}

/* 088EAF94 */
float func_088EAF94(float f12, float f13, float f14)
{
    float f0 = 0;
L_088EAF94:;
    f12 = f12 - f13;
    f14 = f14 * f12;
    f0 = f13 + f14;
    return f0;
}

/* 088EAFA4 */
void func_088EAFA4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EAFA4:;
    a0 = D_08AD8A00 - (-30208);
    sp = sp - 16;
    a0 = a0 - 30208;
    a1 = 1;
    v0 = func_0883A868(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088EAFBC;
L_088EAFBC:;
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_088EAFF0; }
    goto L_088EAFC4;
L_088EAFC4:;
    v0 = D_08B44C28 - (19496);
    ST32(v0+19496, v1);
    goto L_088EAFCC;
L_088EAFCC:;
    func_088EB06C();
    goto L_088EAFD4;
L_088EAFD4:;
    func_089135E0();
    goto L_088EAFDC;
L_088EAFDC:;
    func_08A66C44();
    goto L_088EAFE4;
L_088EAFE4:;
    sp = sp + 16;
    return;
L_088EAFF0:;
    v0 = func_0883A23C();
    goto L_088EAFF8;
L_088EAFF8:;
    v1 = D_08B44C28 - (19496);
    ST32(v1+19496, v0);
    goto L_088EAFCC;
}

/* 088EB004 */
void func_088EB004(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB004:;
    sp = sp - 16;
    func_08A66C54();
    goto L_088EB014;
L_088EB014:;
    func_089135E8();
    goto L_088EB01C;
L_088EB01C:;
    v0 = D_08B43C20 - (15392);
    v1 = D_08B30C20 - (3104);
    a1 = v0 + 15392;
    v1 = v1 + 3104;
    a0 = 0 + 0;
    goto L_088EB030;
L_088EB030:;
    a0 = a0 + 1;
    v0 = a0 < 0x400u;
    ST32(a1, v1);
    a1 = a1 + 4;
    ST32(v1+4, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 76;
    if (cnd_) { goto L_088EB030; }
    goto L_088EB04C;
L_088EB04C:;
    v0 = 1;
    v1 = D_08B44C24 - (19492);
    a0 = D_08B44C20 - (19488);
    ST32(v1+19492, v0);
    ST32(a0+19488, 0);
    sp = sp + 16;
    return;
}

/* 088EB06C */
void func_088EB06C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB06C:;
    sp = sp - 16;
    func_08A66C4C();
    goto L_088EB07C;
L_088EB07C:;
    v0 = D_08B43C20 - (15392);
    v1 = D_08B30C20 - (3104);
    a1 = v0 + 15392;
    v1 = v1 + 3104;
    a0 = 0 + 0;
    goto L_088EB090;
L_088EB090:;
    a0 = a0 + 1;
    v0 = a0 < 0x400u;
    ST32(a1, v1);
    a1 = a1 + 4;
    ST32(v1+4, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 76;
    if (cnd_) { goto L_088EB090; }
    goto L_088EB0AC;
L_088EB0AC:;
    v0 = 1;
    v1 = D_08B44C24 - (19492);
    a0 = D_08B44C20 - (19488);
    ST32(v1+19492, v0);
    ST32(a0+19488, 0);
    sp = sp + 16;
    return;
}

/* 088EB0CC */
void func_088EB0CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB0CC:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = 0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088EB10C; }
    goto L_088EB0EC;
L_088EB0EC:;
    s0 = a0 + 0;
    goto L_088EB0F0;
L_088EB0F0:;
    a0 = LD32(s0+20);
    s1 = s1 + 1;
    v0 = func_0883AE14(a0);
    goto L_088EB0FC;
L_088EB0FC:;
    v1 = s1 < s2;
    ST32(s0+24, v0);
    cnd_ = v1 != 0;
    s0 = s0 + 92;
    if (cnd_) { goto L_088EB0F0; }
    goto L_088EB10C;
L_088EB10C:;
    sp = sp + 16;
    return;
}

/* 088EB124 */
void func_088EB124(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088EB124:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088EB148; }
    goto L_088EB12C;
L_088EB12C:;
    a0 = a0 + 24;
    a2 = (u32)-1;
    goto L_088EB134;
L_088EB134:;
    v1 = v1 + 1;
    v0 = v1 < a1;
    ST32(a0, a2);
    cnd_ = v0 != 0;
    a0 = a0 + 92;
    if (cnd_) { goto L_088EB134; }
    goto L_088EB148;
L_088EB148:;
    return;
}

/* 088EB150 */
u64 func_088EB150(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB150:;
    sp = sp - 16;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088EB168; }
    goto L_088EB15C;
L_088EB15C:;
    goto L_088EB160;
L_088EB160:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088EB168:;
    v0 = func_088EB548(a0);
    goto L_088EB170;
L_088EB170:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088EB15C; }
    goto L_088EB17C;
L_088EB17C:;
    { u64 r_ = func_088EB5DC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EB184;
L_088EB184:;
    goto L_088EB160;
}

/* 088EB18C */
void func_088EB18C(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB18C:;
    sp = sp - 16;
    v0 = D_08B44C20 - (19488);
    v1 = LD32(v0+19488);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088EB1B4; }
    goto L_088EB1A4;
L_088EB1A4:;
    v0 = D_08B2C227 - (-15833);
    v1 = LD_U8(v0-15833);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088EB1BC; }
    goto L_088EB1B4;
L_088EB1B4:;
    sp = sp + 16;
    return;
L_088EB1BC:;
    func_089135F0();
    goto L_088EB1C4;
L_088EB1C4:;
    func_08914B0C();
    goto L_088EB1CC;
L_088EB1CC:;
    func_0891367C();
    goto L_088EB1D4;
L_088EB1D4:;
    goto L_088EB1B4;
}

/* 088EB1DC */
rv_t func_088EB1DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB1DC:;
    sp = sp - 16;
    v0 = 112;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    if (cnd_) { s0 = LD32(a0+24); goto L_088EB208; }
    goto L_088EB1F8;
L_088EB1F8:;
    goto L_088EB1FC;
L_088EB1FC:;
    goto L_088EB200;
L_088EB200:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088EB208:;
    a1 = s0 + 12;
    a2 = s0 + 24;
    a0 = s0 + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EB218;
L_088EB218:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088EB1FC; }
    goto L_088EB220;
L_088EB220:;
    f1 = BITSF(LD32(s0+116));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(v0+32, FBITS(f1)); goto L_088EB1FC; }
    goto L_088EB238;
L_088EB238:;
    goto L_088EB200;
}

/* 088EB240 */
rv_t func_088EB240(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EB240:;
    sp = sp - 32;
    t2 = D_08B44C20 - (19488);
    a3 = a1 + 0;
    s1 = a2 + 0;
    t0 = LD32(t2+19488);
    v0 = t0 < 0x400u;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088EB2E8; }
    goto L_088EB26C;
L_088EB26C:;
    v1 = LD32(a2+24);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08B43C20 - (15392);
    if (cnd_) { goto L_088EB2E8; }
    goto L_088EB27C;
L_088EB27C:;
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    f3 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a0+4));
    f2 = f2 - f1;
    f4 = BITSF(LD32(a1+8));
    f3 = f3 - f0;
    f0 = BITSF(LD32(a0+8));
    f1 = f2 * f2;
    f4 = f4 - f0;
    f5 = f3 * f3;
    v1 = t0 << 2;
    v0 = v0 + 15392;
    f0 = f4 * f4;
    f1 = f1 + f5;
    s0 = v1 + v0;
    v0 = D_08AECE24 - (-12764);
    v1 = t0 + 1;
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-12764));
    a1 = a0 + 0;
    a2 = a3 + 0;
    fcc = FCMP(f1, f0, 12);
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_088EB300; }
    goto L_088EB2E8;
L_088EB2E8:;
    v0 = t1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088EB300:;
    s0 = LD32(s0);
    ST32(t2+19488, v1);
    a0 = s0 + 0;
    func_088EB81C(a0, a1, a2);
    goto L_088EB310;
L_088EB310:;
    v0 = D_08AECE28 - (-12760);
    f0 = BITSF(LD32(v0-12760));
    a0 = D_08B44C24 - (19492);
    v0 = LD32(a0+19492);
    ST32(s0+28, FBITS(f0));
    t1 = s0 + 0;
    a1 = v0 + 0;
    ST32(s0+8, FBITS(f0));
    v0 = v0 + 1;
    ST32(s0+12, FBITS(f0));
    ST32(s0+16, FBITS(f0));
    ST32(s0+20, FBITS(f0));
    ST32(s0+24, FBITS(f0));
    f0 = BITSF(LD32(s1+16));
    v1 = LD32(s0+72);
    ST32(a0+19492, v0);
    v0 = D_08AECE2C - (-12756);
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s0+32, FBITS(f0));
    f0 = BITSF(LD32(v0-12756));
    v0 = 5;
    ST32(s0+40, v0);
    ST32(s0+36, FBITS(f0));
    ST32(s0, s1);
    ST32(s0+4, a1);
    ST32(s0+72, v1);
    goto L_088EB2E8;
}

/* 088EB37C */
void func_088EB37C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EB37C:;
    sp = sp - 48;
    s1 = D_08B44C20 - (19488);
    v0 = D_08B285A0 - (-31328);
    s0 = 0 + 0;
    v1 = LD32(s1+19488);
    cnd_ = v1 == 0;
    f20 = BITSF(LD32(v0-31328));
    if (cnd_) { goto L_088EB3F4; }
    goto L_088EB3B0;
L_088EB3B0:;
    v0 = D_08AECE30 - (-12752);
    f21 = BITSF(LD32(v0-12752));
    v1 = D_08B43C20 - (15392);
    s2 = v1 + 15392;
    v0 = s0 << 2;
    goto L_088EB3C4;
L_088EB3C4:;
    v0 = v0 + s2;
    v1 = LD32(v0);
    f2 = BITSF(0);
    v0 = LD32(v1+72);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    f6 = f20;
    if (cnd_) { goto L_088EB414; }
    goto L_088EB3E0;
L_088EB3E0:;
    s0 = s0 + 1;
    goto L_088EB3E4;
L_088EB3E4:;
    v0 = LD32(s1+19488);
    goto L_088EB3E8;
L_088EB3E8:;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    v0 = s0 << 2;
    if (cnd_) { goto L_088EB3C4; }
    goto L_088EB3F4;
L_088EB3F4:;
    sp = sp + 48;
    return;
L_088EB414:;
    f0 = BITSF(LD32(v1+36));
    a2 = v1 + 56;
    a1 = v1 + 44;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_088EB438; }
    goto L_088EB430;
L_088EB430:;
    ST32(v1+36, FBITS(f21));
    f6 = f0;
    goto L_088EB438;
L_088EB438:;
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+28));
    f0 = f0 * f6;
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    ST32(v1+28, FBITS(f1));
    if (cnd_) { goto L_088EB4D8; }
    goto L_088EB458;
L_088EB458:;
    v0 = LD32(v1);
    f2 = BITSF(LD32(v1+16));
    f4 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(a2+4));
    f0 = f6 * f0;
    f3 = f6 * f3;
    f5 = BITSF(LD32(v1+56));
    s0 = s0 + 1;
    f0 = f0 * f2;
    f3 = f3 * f2;
    f1 = f1 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f3 = f3 - f0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f4));
    f0 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    ST32(sp, FBITS(f5));
    f0 = f0 + f1;
    f2 = f2 + f4;
    f1 = BITSF(LD32(v1+44));
    ST32(a1+4, FBITS(f0));
    f1 = f1 + f5;
    ST32(a1+8, FBITS(f2));
    f0 = BITSF(LD32(v1+68));
    ST32(v1+44, FBITS(f1));
    f0 = f0 + f3;
    ST32(v1+68, FBITS(f0));
    goto L_088EB3E4;
L_088EB4D8:;
    { u64 r_ = func_088EB5DC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EB4E0;
L_088EB4E0:;
    v0 = LD32(s1+19488);
    goto L_088EB3E8;
}

/* 088EB4E8 */
rv_t func_088EB4E8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EB4E8:;
    sp = sp - 32;
    f20 = f12;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088EB50C; }
    goto L_088EB4FC;
L_088EB4FC:;
    goto L_088EB500;
L_088EB500:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088EB50C:;
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EB514;
L_088EB514:;
    f1 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088EB500; }
    goto L_088EB520;
L_088EB520:;
    f0 = BITSF(LD32(v0+36));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = f0 + f20;
    if (cnd_) { goto L_088EB540; }
    goto L_088EB534;
L_088EB534:;
    ST32(v0+36, FBITS(f1));
    f0 = f1;
    f0 = f0 + f20;
    goto L_088EB540;
L_088EB540:;
    ST32(v0+36, FBITS(f0));
    goto L_088EB4FC;
}

/* 088EB548 */
u32 func_088EB548(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088EB548:;
    cnd_ = a0 == 0;
    t0 = (u32)-1;
    if (cnd_) { goto L_088EB594; }
    goto L_088EB550;
L_088EB550:;
    v0 = D_08B44C20 - (19488);
    v0 = LD32(v0+19488);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088EB594; }
    goto L_088EB560;
L_088EB560:;
    a3 = v0 + 0;
    v0 = D_08B43C20 - (15392);
    a1 = v0 + 15392;
    v0 = LD32(a1);
    goto L_088EB570;
L_088EB570:;
    t0 = a2 + 0;
    a2 = a2 + 1;
    v1 = LD32(v0+4);
    a1 = a1 + 4;
    cnd_ = v1 == a0;
    v0 = a2 < a3;
    if (cnd_) { goto L_088EB594; }
    goto L_088EB588;
L_088EB588:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088EB570; }
    goto L_088EB590;
L_088EB590:;
    t0 = (u32)-1;
    goto L_088EB594;
L_088EB594:;
    v0 = t0 + 0;
    return v0;
}

/* 088EB59C */
u64 func_088EB59C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB59C:;
    sp = sp - 16;
    v0 = func_088EB548(a0);
    goto L_088EB5AC;
L_088EB5AC:;
    v1 = D_08B43C20 - (15392);
    v1 = v1 + 15392;
    a0 = v0 << 2;
    a0 = a0 + v1;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_088EB5CC; }
    goto L_088EB5C8;
L_088EB5C8:;
    a1 = LD32(a0);
    goto L_088EB5CC;
L_088EB5CC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088EB5DC */
u64 func_088EB5DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
L_088EB5DC:;
    a3 = D_08B44C20 - (19488);
    a1 = LD32(a3+19488);
    v0 = D_08B43C20 - (15392);
    v0 = v0 + 15392;
    a1 = a1 - 1;
    a0 = a0 << 2;
    v1 = a1 << 2;
    a0 = a0 + v0;
    v1 = v1 + v0;
    a2 = LD32(a0);
    v0 = LD32(v1);
    ST32(a3+19488, a1);
    ST32(a0, v0);
    ST32(v1, a2);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088EB618 */
void func_088EB618(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088EB618:;
    sp = sp - 64;
    s7 = a0 + 0;
    s4 = a2 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s3 = LD32(a0);
    f20 = BITSF(LD32(a0+28));
    s6 = s3 + 28;
    s5 = s3 + 60;
    goto L_088EB664;
L_088EB664:;
    s0 = s1 << 2;
    v0 = s0 + s6;
    v1 = s0 + s5;
    f12 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v1));
    f14 = f20;
    s1 = s1 + 1;
    f0 = func_088EAF94(f12, f13, f14);
    goto L_088EB684;
L_088EB684:;
    s0 = s0 + s2;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    ST32(s0, FBITS(f0));
    if (cnd_) { goto L_088EB664; }
    goto L_088EB694;
L_088EB694:;
    f0 = BITSF(LD32(s2+12));
    f1 = BITSF(LD32(s7+20));
    s5 = s3 + 76;
    s1 = 0 + 0;
    f0 = f0 * f1;
    s3 = s3 + 44;
    ST32(s2+12, FBITS(f0));
    goto L_088EB6B0;
L_088EB6B0:;
    s0 = s1 << 2;
    v0 = s0 + s3;
    v1 = s0 + s5;
    f12 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v1));
    f14 = f20;
    s1 = s1 + 1;
    f0 = func_088EAF94(f12, f13, f14);
    goto L_088EB6D0;
L_088EB6D0:;
    s0 = s0 + s4;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    ST32(s0, FBITS(f0));
    if (cnd_) { goto L_088EB6B0; }
    goto L_088EB6E0;
L_088EB6E0:;
    f1 = BITSF(LD32(s7+24));
    f0 = BITSF(LD32(s4+12));
    f0 = f0 * f1;
    ST32(s4+12, FBITS(f0));
    sp = sp + 64;
    return;
}

/* 088EB720 */
void func_088EB720(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB720:;
    v0 = a1 + 56;
    f0 = BITSF(LD32(a1+68));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(a1+56));
    v0 = a1 + 44;
    f5 = f5 * f0;
    f2 = f2 * f0;
    f4 = f4 * f0;
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a1+44));
    f3 = f3 + f5;
    f1 = f1 + f4;
    f0 = f0 + f2;
    v0 = a0 + 0;
    sp = sp - 16;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f0));
    ST32(a0+8, FBITS(f3));
    sp = sp + 16;
    return;
}

/* 088EB778 */
void func_088EB778(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB778:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    f14 = BITSF(LD32(a0+28));
    f13 = BITSF(LD32(v0+4));
    f12 = BITSF(LD32(v0));
    f0 = func_088EAF94(f12, f13, f14);
    goto L_088EB7AC;
L_088EB7AC:;
    f1 = BITSF(LD32(s0+8));
    f1 = f0 * f1;
    ST32(s1, FBITS(f1));
    f2 = BITSF(LD32(s0+12));
    f0 = f0 * f2;
    ST32(s2, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 088EB7DC */
rv_t func_088EB7DC(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088EB7DC:;
    f0 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = a0 + 44;
    ST32(v0+8, FBITS(f0));
    v1 = a0 + 56;
    ST32(v0+4, FBITS(f1));
    ST32(a0+44, FBITS(f2));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    f0 = BITSF(LD32(a2+4));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(a0+56, FBITS(f2));
    ST32(a0+68, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 088EB81C */
void func_088EB81C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB81C:;
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    v0 = a0 + 44;
    ST32(v0+4, FBITS(f1));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    f6 = BITSF(0);
    ST32(v0+8, FBITS(f0));
    sp = sp - 16;
    v0 = a0 + 56;
    ST32(a0+44, FBITS(f2));
    f4 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a1));
    f5 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a1+4));
    f3 = f3 - f0;
    f4 = f4 - f5;
    f2 = f2 - f1;
    v1 = FBITS(f3);
    {v[8]=BITSF(v1);}
    v1 = FBITS(f2);
    {v[9]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[10]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+4, FBITS(f2));
    fcc = FCMP(f0, f6, 2);
    ST32(sp+8, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[12]=d0;}
    ST32(sp, FBITS(f3));
    ST32(a0+56, FBITS(f3));
    ST32(v0+4, FBITS(f2));
    cnd_ = fcc;
    ST32(v0+8, FBITS(f4));
    if (cnd_) { goto L_088EB8F8; }
    goto L_088EB8B4;
L_088EB8B4:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[12];float d0=s0/t0;v[0]=d0;}
    {v1=FBITS(v[12]);}
    f4 = BITSF(v1);
    f6 = f4;
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[0]);}
    f2 = BITSF(v1);
    ST32(v0+8, FBITS(f3));
    {v1=FBITS(v[1]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f3));
    ST32(a0+56, FBITS(f2));
    ST32(v0+4, v1);
    goto L_088EB8F8;
L_088EB8F8:;
    ST32(a0+68, FBITS(f6));
    sp = sp + 16;
    return;
}

/* 088EB904 */
void func_088EB904(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB904:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088EB954; }
    goto L_088EB930;
L_088EB930:;
    v0 = D_08B30C20 - (3104);
    s1 = v0 + 3104;
    s0 = 1023;
    s2 = (u32)-1;
    goto L_088EB940;
L_088EB940:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_08AB96D8();
    goto L_088EB94C;
L_088EB94C:;
    cnd_ = s0 != s2;
    s1 = s1 + 76;
    if (cnd_) { goto L_088EB940; }
    goto L_088EB954;
L_088EB954:;
    sp = sp + 16;
    return;
}

/* 088EB96C */
rv_t func_088EB96C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB96C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088EB904(a0, a1);
    goto L_088EB980;
L_088EB980:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088EB98C */
void func_088EB98C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB98C:;
    a0 = D_08B44C2C - (19500);
    sp = sp - 16;
    a0 = a0 + 19500;
    func_088EBC18(a0, t1, t2, t3);
    goto L_088EB9A0;
L_088EB9A0:;
    func_08914C10();
    goto L_088EB9A8;
L_088EB9A8:;
    sp = sp + 16;
    return;
}

/* 088EB9B4 */
void func_088EB9B4(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB9B4:;
    sp = sp - 16;
    func_08914C18();
    goto L_088EB9C4;
L_088EB9C4:;
    a0 = D_08B44C2C - (19500);
    a0 = a0 + 19500;
    func_088EBD10(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088EB9D0;
L_088EB9D0:;
    sp = sp + 16;
    return;
}

/* 088EB9DC */
void func_088EB9DC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB9DC:;
    a0 = D_08B44C2C - (19500);
    sp = sp - 16;
    a0 = a0 + 19500;
    func_088EBC5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088EB9F0;
L_088EB9F0:;
    sp = sp + 16;
    return;
}

/* 088EB9FC */
void func_088EB9FC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EB9FC:;
    v0 = D_08B2C22C - (-15828);
    v1 = LD_U8(v0-15828);
    sp = sp - 16;
    a0 = D_08B44C2C - (19500);
    cnd_ = v1 != 0;
    a0 = a0 + 19500;
    if (cnd_) { goto L_088EBA24; }
    goto L_088EBA18;
L_088EBA18:;
    goto L_088EBA1C;
L_088EBA1C:;
    sp = sp + 16;
    return;
L_088EBA24:;
    func_088EC270(a0);
    goto L_088EBA2C;
L_088EBA2C:;
    goto L_088EBA1C;
}

/* 088EBA34 */
rv_t func_088EBA34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088EBA34:;
    sp = sp - 112;
    v0 = 2;
    s0 = a0 + 0;
    a0 = LD32(a0+24);
    v1 = a0 & 0x6;
    cnd_ = v1 == v0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088EBB90; }
    goto L_088EBA7C;
L_088EBA7C:;
    v0 = a0 + 0;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v1 = a0 & 0x1;
    cnd_ = v1 != 0;
    ST32(s0+24, v0);
    if (cnd_) { goto L_088EBB90; }
    goto L_088EBA90;
L_088EBA90:;
    s7 = D_08B15A00 - (23040);
    v0 = LD32(s7+23040);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088EBB90; }
    goto L_088EBAA0;
L_088EBAA0:;
    v0 = D_08AECE34 - (-12748);
    f20 = BITSF(LD32(v0-12748));
    v0 = D_08B22E88 - (11912);
    s3 = v0 + 11912;
    s4 = D_08B15A04 - (23044);
    s6 = D_08B159FC - (23036);
    s2 = 1;
    fp = D_08B15A0C - (23052);
    v0 = LD32(s4+23044);
    goto L_088EBAC4;
L_088EBAC4:;
    cnd_ = s1 == v0;
    v1 = s2 << (s1 & 31);
    if (cnd_) { goto L_088EBAEC; }
    goto L_088EBACC;
L_088EBACC:;
    v0 = D_08B230A8 - (12456);
    ST8(v0+12456, v1);
    v0 = D_08B230AC - (12460);
    v0 = v0 + 12460;
    ST8(fp+23052, s2);
    ST32(s6+23036, s3);
    ST32(s4+23044, s1);
    ST8(v0+4, s2);
    goto L_088EBAEC;
L_088EBAEC:;
    v0 = LD32(s0+24);
    a1 = v0 & 0x80;
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    s3 = s3 + 136;
    if (cnd_) { goto L_088EBBD4; }
    goto L_088EBB00;
L_088EBB00:;
    v0 = LD32(s6+23036);
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+4));
    f4 = f4 - f0;
    f2 = f2 - f1;
    f3 = f3 - f5;
    {u32 a_=sp+(32);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a0 = FBITS(f4);
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v[6]=BITSF(a0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f20, f0, 14);
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_088EBBD4; }
    goto L_088EBB74;
L_088EBB74:;
    v0 = LD32(s7+23040);
    goto L_088EBB78;
L_088EBB78:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4+23044); goto L_088EBAC4; }
    goto L_088EBB88;
L_088EBB88:;
    cnd_ = s5 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088EBBC4; }
    goto L_088EBB90;
L_088EBB90:;
    goto L_088EBB94;
L_088EBB94:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_088EBBC4:;
    a1 = s5 + 0;
    { rv_t r_ = func_08914DF0(a0, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBBCC;
L_088EBBCC:;
    goto L_088EBB94;
L_088EBBD4:;
    cnd_ = a1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088EBBEC; }
    goto L_088EBBDC;
L_088EBBDC:;
    { rv_t r_ = func_088EC328(a0, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBBE4;
L_088EBBE4:;
    cnd_ = v0 == 0;
    v0 = LD32(s7+23040);
    if (cnd_) { goto L_088EBB78; }
    goto L_088EBBEC;
L_088EBBEC:;
    f12 = BITSF(LD32(s0+28));
    a0 = s0 + 0;
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBBF8;
L_088EBBF8:;
    cnd_ = v0 == 0;
    v1 = s2 << (s1 & 31);
    if (cnd_) { goto L_088EBB74; }
    goto L_088EBC00;
L_088EBC00:;
    s5 = s5 | v1;
    goto L_088EBB74;
}

/* 088EBC08 */
void func_088EBC08(void)
{
L_088EBC08:;
    return;
}

/* 088EBC10 */
void func_088EBC10(void)
{
L_088EBC10:;
    return;
}

/* 088EBC18 */
void func_088EBC18(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EBC18:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBC30;
L_088EBC30:;
    v1 = 16;
    ST32(s0, v0);
    a0 = (u32)-1;
    ST32(v0+4, v1);
    ST32(v0+12, a0);
    ST32(v0, 0);
    ST32(v0+16, 0);
    sp = sp + 16;
    return;
}

/* 088EBC5C */
void func_088EBC5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EBC5C:;
    sp = sp - 16;
    s2 = LD32(a0);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088EBCB0; }
    goto L_088EBC80;
L_088EBC80:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088EBD00; }
    goto L_088EBC8C;
L_088EBC8C:;
    v0 = LD32(s1+4);
    goto L_088EBC90;
L_088EBC90:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088EBCE8; }
    goto L_088EBC98;
L_088EBC98:;
    s0 = LD32(s1+12);
    goto L_088EBC9C;
L_088EBC9C:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088EBCD0; }
    goto L_088EBCA4;
L_088EBCA4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBCAC;
L_088EBCAC:;
    v0 = (u32)-1;
    goto L_088EBCB0;
L_088EBCB0:;
    ST32(s2, 0);
    ST32(s2+12, v0);
    sp = sp + 16;
    return;
L_088EBCD0:;
    func_08AB96E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088EBCD8;
L_088EBCD8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBCE0;
L_088EBCE0:;
    goto L_088EBCA4;
L_088EBCE8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBCF8;
L_088EBCF8:;
    s0 = LD32(s1+12);
    goto L_088EBC9C;
L_088EBD00:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBD08;
L_088EBD08:;
    v0 = LD32(s1+4);
    goto L_088EBC90;
}

/* 088EBD10 */
void func_088EBD10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EBD10:;
    sp = sp - 32;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_088EBD74; }
    goto L_088EBD34;
L_088EBD34:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088EBD6C; }
    goto L_088EBD40;
L_088EBD40:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088EBDC0; }
    goto L_088EBD4C;
L_088EBD4C:;
    a0 = LD32(s2+4);
    goto L_088EBD50;
L_088EBD50:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088EBDAC; }
    goto L_088EBD58;
L_088EBD58:;
    s1 = LD32(s2+12);
    goto L_088EBD5C;
L_088EBD5C:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088EBD94; }
    goto L_088EBD64;
L_088EBD64:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBD6C;
L_088EBD6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBD74;
L_088EBD74:;
    ST32(s3, 0);
    sp = sp + 32;
    return;
L_088EBD94:;
    a0 = s1 + 0;
    func_08AB96E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088EBD9C;
L_088EBD9C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBDA4;
L_088EBDA4:;
    goto L_088EBD64;
L_088EBDAC:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBDB8;
L_088EBDB8:;
    s1 = LD32(s2+12);
    goto L_088EBD5C;
L_088EBDC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EBDC8;
L_088EBDC8:;
    a0 = LD32(s2+4);
    goto L_088EBD50;
}

/* 088EBDD0 */
rv_t func_088EBDD0(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EBDD0:;
    sp = sp - 32;
    s5 = a0 + 0;
    s4 = LD32(a0);
    t1 = LD32(s4);
    cnd_ = t1 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_088EBE54; }
    goto L_088EBE04;
L_088EBE04:;
    t2 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_088EBE0C;
L_088EBE0C:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_088EBE40; }
    goto L_088EBE28;
L_088EBE28:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_088EBE40;
L_088EBE40:;
    cnd_ = a2 != t2;
    s0 = a2 + 0;
    if (cnd_) { goto L_088EBE9C; }
    goto L_088EBE48;
L_088EBE48:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_088EBE0C; }
    goto L_088EBE54;
L_088EBE54:;
    v1 = t1 + 0;
    cnd_ = t1 == 0;
    s1 = LD32(s4+16);
    if (cnd_) { goto L_088EC0E0; }
    goto L_088EBE60;
L_088EBE60:;
    s0 = LD32(s4+4);
    v0 = LD32(v1+8);
    goto L_088EBE68;
L_088EBE68:;
    cnd_ = v0 == s1;
    if (cnd_) { s1 = s1 + s0; goto L_088EC0D8; }
    goto L_088EBE70;
L_088EBE70:;
    v1 = LD32(v1+12);
    goto L_088EBE74;
L_088EBE74:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088EBE68; }
    goto L_088EBE7C;
L_088EBE7C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBE84;
L_088EBE84:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_088EBFAC; }
    goto L_088EBE98;
L_088EBE98:;
    s0 = (u32)-1;
    goto L_088EBE9C;
L_088EBE9C:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088EBF70; }
    goto L_088EBEA8;
L_088EBEA8:;
    a0 = LD32(s5);
    v0 = LD32(a0+12);
    cnd_ = s0 == v0;
    if (cnd_) { s1 = LD32(a0+8); goto L_088EBF50; }
    goto L_088EBEB8;
L_088EBEB8:;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088EBEF8; }
    goto L_088EBEC4;
L_088EBEC4:;
    a2 = LD32(a1+8);
    goto L_088EBEC8;
L_088EBEC8:;
    v0 = (s32)s0 < (s32)a2;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088EBEE8; }
    goto L_088EBED4;
L_088EBED4:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088EBEF8; }
    goto L_088EBEE8;
L_088EBEE8:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a2 = LD32(a1+8); goto L_088EBEC8; }
    goto L_088EBEF4;
L_088EBEF4:;
    v1 = 0 + 0;
    goto L_088EBEF8;
L_088EBEF8:;
    cnd_ = v1 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_088EBF50; }
    goto L_088EBF00;
L_088EBF00:;
    a1 = LD32(v1+4);
    v0 = LD32(v1+8);
    a3 = 0 + 0;
    t1 = LD32(a1+12);
    cnd_ = (s32)t1 <= 0;
    t0 = s0 - v0;
    if (cnd_) { goto L_088EBF38; }
    goto L_088EBF18;
L_088EBF18:;
    a1 = LD32(a1+4);
    v0 = LD32(a1);
    goto L_088EBF20;
L_088EBF20:;
    a3 = a3 + 1;
    a2 = (s32)a3 < (s32)t1;
    cnd_ = v0 == t0;
    a1 = a1 + 4;
    if (cnd_) { goto L_088EBF94; }
    goto L_088EBF30;
L_088EBF30:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088EBF20; }
    goto L_088EBF38;
L_088EBF38:;
    v0 = 0 + 0;
    goto L_088EBF3C;
L_088EBF3C:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088EBF50; }
    goto L_088EBF44;
L_088EBF44:;
    s1 = v0 + 0;
    ST32(a0+8, v0);
    ST32(a0+12, s0);
    goto L_088EBF50;
L_088EBF50:;
    cnd_ = s1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088EBF70; }
    goto L_088EBF58;
L_088EBF58:;
    ST32(s1+24, 0);
    a0 = s1 + 0;
    func_088EC474(a0);
    goto L_088EBF64;
L_088EBF64:;
    v0 = (u32)-1;
    ST32(s1+56, v0);
    v0 = s0 + 0;
    goto L_088EBF70;
L_088EBF70:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088EBF94:;
    v1 = LD32(v1);
    v0 = t0 << 4;
    v0 = v0 - t0;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_088EBF3C;
L_088EBFAC:;
    a0 = s0 << 4;
    a0 = a0 - s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBFBC;
L_088EBFBC:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_088EBFD4; }
    goto L_088EBFC4;
L_088EBFC4:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_088EBFCC;
L_088EBFCC:;
    cnd_ = v1 != a0;
    v1 = v1 - 1;
    if (cnd_) { goto L_088EBFCC; }
    goto L_088EBFD4;
L_088EBFD4:;
    ST32(s2, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBFE0;
L_088EBFE0:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EBFF8;
L_088EBFF8:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s3+8, s0);
    if (cnd_) { goto L_088EC024; }
    goto L_088EC00C;
L_088EC00C:;
    v1 = v0 + 0;
    goto L_088EC010;
L_088EC010:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088EC010; }
    goto L_088EC024;
L_088EC024:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_088EC088; }
    goto L_088EC03C;
L_088EC03C:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_088EC078; }
    goto L_088EC044;
L_088EC044:;
    s0 = LD32(s2+12);
    goto L_088EC048;
L_088EC048:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088EC060; }
    goto L_088EC050;
L_088EC050:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC058;
L_088EC058:;
    s0 = (u32)-1;
    goto L_088EBE9C;
L_088EC060:;
    a0 = s0 + 0;
    func_08AB96E0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088EC068;
L_088EC068:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC070;
L_088EC070:;
    goto L_088EC050;
L_088EC078:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC080;
L_088EC080:;
    s0 = LD32(s2+12);
    goto L_088EC048;
L_088EC088:;
    cnd_ = s2 == 0;
    ST32(s2+8, s1);
    if (cnd_) { goto L_088EBE98; }
    goto L_088EC090;
L_088EC090:;
    a2 = LD32(s3+12);
    v0 = LD32(s3+8);
    v1 = LD32(s4);
    a0 = (u32)-1;
    v0 = (s32)a2 < (s32)v0;
    ST32(s2+12, v1);
    cnd_ = v0 == 0;
    ST32(s4, s2);
    if (cnd_) { goto L_088EC0D0; }
    goto L_088EC0B0;
L_088EC0B0:;
    v1 = a2 + 1;
    a0 = LD32(s3+4);
    ST32(s3+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(s2+8);
    a0 = a0 + v1;
    goto L_088EC0D0;
L_088EC0D0:;
    s0 = a0 + 0;
    goto L_088EBE9C;
L_088EC0D8:;
    v1 = t1 + 0;
    goto L_088EBE74;
L_088EC0E0:;
    s0 = LD32(s4+4);
    goto L_088EBE7C;
}

/* 088EC0E8 */
rv_t func_088EC0E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EC0E8:;
    sp = sp - 32;
    s3 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    { rv_t r_ = func_08AB9764(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC110;
L_088EC110:;
    s2 = v0 + 0;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s2 == v0;
    v0 = s2 + 0;
    if (cnd_) { goto L_088EC160; }
    goto L_088EC124;
L_088EC124:;
    a0 = LD32(s0);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC12C;
L_088EC12C:;
    a0 = LD32(s0);
    a1 = s3 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC13C;
L_088EC13C:;
    v1 = 0 < v0;
    a1 = v0 + 0;
    a2 = v0 + 12;
    v0 = 0 < s1;
    v0 = v0 & v1;
    a3 = s1 + 12;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088EC17C; }
    goto L_088EC15C;
L_088EC15C:;
    v0 = s2 + 0;
    goto L_088EC160;
L_088EC160:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088EC17C:;
    f2 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    ST32(s1, FBITS(f2));
    ST32(s1+4, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    f2 = BITSF(LD32(a1+12));
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a2+4));
    ST32(s1+12, FBITS(f2));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    v1 = LD32(a1+32);
    v0 = LD32(a1+24);
    f0 = BITSF(LD32(a1+28));
    f1 = BITSF(LD32(a1+36));
    f2 = BITSF(LD32(a1+40));
    f3 = BITSF(LD32(a1+44));
    ST32(s1+28, FBITS(f0));
    ST32(s1+32, v1);
    ST32(s1+36, FBITS(f1));
    ST32(s1+40, FBITS(f2));
    ST32(s1+44, FBITS(f3));
    ST32(s1+24, v0);
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088EC1E0;
L_088EC1E0:;
    v0 = s2 + 0;
    goto L_088EC160;
}

/* 088EC1E8 */
rv_t func_088EC1E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC1E8:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = (u32)-1;
    s0 = LD32(a1);
    cnd_ = s0 == s1;
    a1 = s0 + 0;
    if (cnd_) { goto L_088EC250; }
    goto L_088EC210;
L_088EC210:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    cnd_ = s0 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088EC268; }
    goto L_088EC220;
L_088EC220:;
    v0 = func_08AB99EC(a0, a1);
    goto L_088EC228;
L_088EC228:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088EC24C; }
    goto L_088EC230;
L_088EC230:;
    v0 = LD32(v0+4);
    a1 = LD32(v1+8);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s0 - a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC24C;
L_088EC24C:;
    ST32(s2, s1);
    goto L_088EC250;
L_088EC250:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088EC268:;
    ST32(v1+12, s1);
    goto L_088EC220;
}

/* 088EC270 */
void func_088EC270(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EC270:;
    sp = sp - 32;
    s0 = a0 + 0;
    func_08914C20();
    goto L_088EC288;
L_088EC288:;
    v0 = LD32(s0);
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    v0 = ((u32)(uintptr_t)func_088EBA34) - (-17868);
    if (cnd_) { goto L_088EC2C4; }
    goto L_088EC298;
L_088EC298:;
    s1 = v0 - 17868;
    ST32(sp+4, 0);
    goto L_088EC2A0;
L_088EC2A0:;
    v1 = LD32(s0+4);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088EC2E0; }
    goto L_088EC2B8;
L_088EC2B8:;
    s0 = LD32(s0+12);
    goto L_088EC2BC;
L_088EC2BC:;
    cnd_ = s0 != 0;
    if (cnd_) { ST32(sp+4, 0); goto L_088EC2A0; }
    goto L_088EC2C4;
L_088EC2C4:;
    func_089151E8(0, 0, 0, 0, 0);
    goto L_088EC2CC;
L_088EC2CC:;
    sp = sp + 32;
    return;
L_088EC2E0:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(s0);
    a2 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a2;
    a1 = LD32(v0);
    v1 = a1 << 4;
    v1 = v1 - a1;
    v1 = v1 << 2;
    t_ = s1;
    a0 = a0 + v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC310;
L_088EC310:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088EC2E0; }
    goto L_088EC320;
L_088EC320:;
    s0 = LD32(s0+12);
    goto L_088EC2BC;
}

/* 088EC328 */
rv_t func_088EC328(u32 a0, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EC328:;
    sp = sp - 48;
    v0 = 0xffff;
    a2 = a0 + 56;
    v1 = LD_U16(a0+48);
    cnd_ = v1 == v0;
    a1 = sp + 0;
    if (cnd_) { goto L_088EC358; }
    goto L_088EC344;
L_088EC344:;
    { u64 r_ = func_088EC390(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC34C;
L_088EC34C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088EC358:;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    a0 = D_08B2C0FC - (-16132);
    a0 = a0 - 16132;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+16, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    { rv_t r_ = func_088CE800(a0, a1, a2, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC388;
L_088EC388:;
    v0 = v0 & 0xff;
    goto L_088EC34C;
}

/* 088EC390 */
u64 func_088EC390(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_088EC390:;
    v0 = D_08B230A8 - (12456);
    t1 = LD_U8(v0+12456);
    v0 = D_08B2C0FC - (-16132);
    t3 = v0 - 16132;
    a0 = a0 + 48;
    t4 = 0 + 0;
    a3 = 0 + 0;
    t2 = 0xffff;
    v1 = LD_U16(a0);
    goto L_088EC3B4;
L_088EC3B4:;
    a3 = a3 + 1;
    t0 = (s32)a3 < 4;
    cnd_ = v1 == t2;
    a0 = a0 + 2;
    if (cnd_) { goto L_088EC3F4; }
    goto L_088EC3C4;
L_088EC3C4:;
    v0 = LD32(t3+16);
    a2 = 0 + 0;
    a1 = t1 & 0xff;
    cnd_ = v0 == 0;
    v1 = v0 + v1;
    if (cnd_) { goto L_088EC3E4; }
    goto L_088EC3D8;
L_088EC3D8:;
    v0 = LD_U8(v1);
    v0 = v0 & a1;
    a2 = 0 < v0;
    goto L_088EC3E4;
L_088EC3E4:;
    cnd_ = a2 != 0;
    if (cnd_) { t4 = 1; goto L_088EC3F4; }
    goto L_088EC3EC;
L_088EC3EC:;
    cnd_ = t0 != 0;
    if (cnd_) { v1 = LD_U16(a0); goto L_088EC3B4; }
    goto L_088EC3F4;
L_088EC3F4:;
    v0 = t4 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088EC3FC */
void func_088EC3FC(u32 a0, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EC3FC:;
    sp = sp - 48;
    a2 = ((u32)(uintptr_t)func_08AB68B0) - (26800);
    a2 = a2 + 26800;
    s1 = D_08B2C0FC - (-16132);
    s1 = s1 - 16132;
    s0 = a0 + 0;
    a1 = sp + 0;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    s0 = s0 + 48;
    a0 = s1 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+16, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    { rv_t r_ = func_088CE404(a0, a1, a2, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC454;
L_088EC454:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088CE610(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC460;
L_088EC460:;
    sp = sp + 48;
    return;
}

/* 088EC474 */
void func_088EC474(u32 a0)
{
    u32 v0 = 0;
L_088EC474:;
    v0 = (u32)-1;
    ST16(a0+48, v0);
    return;
}

/* 088EC480 */
u32 func_088EC480(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC480:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B44C2C - (19500);
    cnd_ = v0 == 0;
    a0 = a0 + 19500;
    if (cnd_) { goto L_088EC4BC; }
    goto L_088EC4B4;
L_088EC4B4:;
    func_088EBC08();
    goto L_088EC4BC;
L_088EC4BC:;
    v0 = s1 < 0x1u;
    a0 = D_08B44C2C - (19500);
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    a0 = a0 + 19500;
    if (cnd_) { goto L_088EC4D8; }
    goto L_088EC4D0;
L_088EC4D0:;
    func_088EBC10();
    goto L_088EC4D8;
L_088EC4D8:;
    sp = sp + 16;
    return v0;
}

/* 088EC4EC */
rv_t func_088EC4EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC4EC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    v0 = func_088EC480(a0, a1);
    goto L_088EC500;
L_088EC500:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088EC50C */
rv_t func_088EC50C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC50C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    v0 = func_088EC480(a0, a1);
    goto L_088EC520;
L_088EC520:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088EC52C */
void func_088EC52C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC52C:;
    sp = sp - 16;
    func_08A669DC(a2, a3, t0, t1, t2, t3);
    goto L_088EC53C;
L_088EC53C:;
    func_0891528C();
    goto L_088EC544;
L_088EC544:;
    sp = sp + 16;
    return;
}

/* 088EC550 */
void func_088EC550(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC550:;
    sp = sp - 16;
    s0 = D_08B44C30 - (19504);
    v0 = LD32(s0+19504);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088EC584; }
    goto L_088EC56C;
L_088EC56C:;
    ST32(s0+19504, 0);
    func_08915294();
    goto L_088EC574;
L_088EC574:;
    sp = sp + 16;
    return;
L_088EC584:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC594;
L_088EC594:;
    goto L_088EC56C;
}

/* 088EC59C */
void func_088EC59C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EC59C:;
    sp = sp - 16;
    s0 = D_08B44C30 - (19504);
    v0 = LD32(s0+19504);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088EC5D0; }
    goto L_088EC5B8;
L_088EC5B8:;
    ST32(s0+19504, 0);
    func_0891529C();
    goto L_088EC5C0;
L_088EC5C0:;
    sp = sp + 16;
    return;
L_088EC5D0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC5E0;
L_088EC5E0:;
    goto L_088EC5B8;
}

/* 088EC5E8 */
rv_t func_088EC5E8(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_088EC5E8:;
    sp = sp - 224;
    s2 = a0 + 0;
    a0 = sp + 0;
    s0 = a2 + 0;
    s1 = a1 + 0;
    f21 = f12;
    f20 = f13;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC620;
L_088EC620:;
    a0 = s0 + 0;
    { u64 r_ = func_08A66C1C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EC628;
L_088EC628:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088EC840; }
    goto L_088EC630;
L_088EC630:;
    v0 = LD32(v0+32);
    a1 = D_08B25AC0 - (23232);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    a3 = a1 + 23232;
    if (cnd_) { goto L_088EC860; }
    goto L_088EC644;
L_088EC644:;
    v0 = LD32(a1+23232);
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AECE38 - (-12744);
    a0 = a0 + v0;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-12744));
    v1 = D_08AECE3C - (-12740);
    ST32(a3+4, a0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v1-12740));
    ST32(a1+23232, v0);
    f20 = f1 * f0;
    goto L_088EC68C;
L_088EC68C:;
    f0 = BITSF(0);
    {v[4]=0.63661977236f;}
    a0 = s2 + 0;
    fcc = FCMP(f20, f0, 2);
    a1 = s1 + 0;
    f12 = f21;
    cnd_ = fcc;
    a3 = sp + 0;
    if (cnd_) { goto L_088EC838; }
    goto L_088EC6AC;
L_088EC6AC:;
    v0 = FBITS(f20);
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    {u32 a_=sp+(176);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v[8]=BITSF(v0);}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    f4 = f4 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    ST32(sp+56, FBITS(f4));
    {v1=FBITS(v[4]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f3));
    ST32(sp+60, v1);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[115]=BITSF(LD32(sp+(60)));}
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
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
    {v[96]=BITSF(LD32(sp+(64)));}
    {v[97]=BITSF(LD32(sp+(68)));}
    {v[98]=BITSF(LD32(sp+(72)));}
    {v[100]=BITSF(LD32(sp+(76)));}
    {v[101]=BITSF(LD32(sp+(80)));}
    {v[102]=BITSF(LD32(sp+(84)));}
    {v[104]=BITSF(LD32(sp+(88)));}
    {v[105]=BITSF(LD32(sp+(92)));}
    {v[106]=BITSF(LD32(sp+(96)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(112),FBITS(v[80]));}
    {ST32(sp+(116),FBITS(v[81]));}
    {ST32(sp+(120),FBITS(v[82]));}
    {ST32(sp+(124),FBITS(v[84]));}
    {ST32(sp+(128),FBITS(v[85]));}
    {ST32(sp+(132),FBITS(v[86]));}
    {ST32(sp+(136),FBITS(v[88]));}
    {ST32(sp+(140),FBITS(v[89]));}
    {ST32(sp+(144),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+116));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(sp+120));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f1 = BITSF(LD32(sp+124));
    f0 = BITSF(LD32(sp+128));
    ST32(sp+12, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    f1 = BITSF(LD32(sp+140));
    f0 = BITSF(LD32(sp+144));
    ST32(sp+28, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    goto L_088EC838;
L_088EC838:;
    { rv_t r_ = func_088EC870(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EC840;
L_088EC840:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_088EC860:;
    v0 = D_08AECE40 - (-12736);
    f0 = BITSF(LD32(v0-12736));
    f20 = f20 * f0;
    goto L_088EC68C;
}

/* 088EC870 */
rv_t func_088EC870(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[1104] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1104);
L_088EC870:;
    sp = sp - 1104;
    v0 = D_08AECE44 - (-12732);
    v1 = D_08AECE48 - (-12728);
    s7 = a2 + 0;
    s3 = a0 + 0;
    s1 = a1 + 0;
    s0 = sp + 48;
    a0 = s0 + 0;
    f0 = BITSF(LD32(a2+20));
    f0 = f0 * f12;
    ST32(sp+740, FBITS(f0));
    f0 = BITSF(LD32(a2+16));
    f13 = BITSF(LD32(a3));
    f14 = BITSF(LD32(a3+12));
    f0 = f0 * f12;
    f15 = BITSF(LD32(a3+24));
    f1 = BITSF(LD32(sp+740));
    ST32(sp+736, FBITS(f0));
    f13 = f13 * f1;
    f14 = f14 * f1;
    f0 = BITSF(LD32(a2+24));
    f6 = BITSF(LD32(a3+4));
    f9 = BITSF(LD32(sp+736));
    f0 = f0 * f12;
    f8 = BITSF(LD32(a3+28));
    f7 = BITSF(LD32(a3+16));
    f6 = f6 * f9;
    ST32(sp+744, FBITS(f0));
    f7 = f7 * f9;
    f8 = f8 * f9;
    f0 = BITSF(LD32(a1));
    f9 = BITSF(LD32(sp+744));
    f20 = f13 + f6;
    f2 = BITSF(LD32(a1+8));
    f0 = f0 * f9;
    f15 = f15 * f1;
    f1 = BITSF(LD32(a1+4));
    f2 = f2 * f9;
    f21 = f14 + f7;
    f1 = f1 * f9;
    f9 = f20 - f0;
    f22 = f15 + f8;
    f3 = BITSF(FBITS(f13) ^ 0x80000000u);
    f4 = BITSF(FBITS(f14) ^ 0x80000000u);
    ST32(sp+208, FBITS(f9));
    f9 = f21 - f1;
    f17 = f3 + f6;
    f18 = f4 + f7;
    f5 = BITSF(FBITS(f15) ^ 0x80000000u);
    ST32(sp+212, FBITS(f9));
    f9 = f22 - f2;
    f3 = f3 - f6;
    f19 = f5 + f8;
    f4 = f4 - f7;
    ST32(sp+216, FBITS(f9));
    f9 = f17 - f0;
    f5 = f5 - f8;
    f11 = f13 - f6;
    f12 = f14 - f7;
    ST32(sp+192, FBITS(f9));
    f9 = f18 - f1;
    f16 = f15 - f8;
    f26 = f3 - f0;
    f27 = f4 - f1;
    ST32(sp+196, FBITS(f9));
    f9 = f19 - f2;
    f28 = f5 - f2;
    f29 = f11 - f0;
    f30 = f12 - f1;
    f31 = f16 - f2;
    f3 = f3 + f0;
    f4 = f4 + f1;
    f5 = f5 + f2;
    f11 = f11 + f0;
    f12 = f12 + f1;
    f16 = f16 + f2;
    f17 = f17 + f0;
    f18 = f18 + f1;
    f19 = f19 + f2;
    f23 = f20 + f0;
    f24 = f21 + f1;
    f25 = f22 + f2;
    f10 = BITSF(LD32(v1-12728));
    ST32(sp+200, FBITS(f9));
    a1 = sp + 80;
    f9 = BITSF(LD32(v0-12732));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f5));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f8));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+64, FBITS(f9));
    ST32(sp+68, FBITS(f10));
    ST32(sp+112, FBITS(f11));
    ST32(sp, FBITS(f13));
    ST32(sp+4, FBITS(f14));
    ST32(sp+8, FBITS(f15));
    ST32(sp+48, FBITS(f9));
    ST32(sp+56, FBITS(f9));
    ST32(sp+52, FBITS(f10));
    ST32(sp+60, FBITS(f10));
    ST32(sp+116, FBITS(f12));
    ST32(sp+120, FBITS(f16));
    ST32(sp+128, FBITS(f26));
    ST32(sp+160, FBITS(f17));
    ST32(sp+164, FBITS(f18));
    ST32(sp+168, FBITS(f19));
    ST32(sp+224, FBITS(f13));
    ST32(sp+228, FBITS(f14));
    ST32(sp+232, FBITS(f15));
    ST32(sp+132, FBITS(f27));
    ST32(sp+136, FBITS(f28));
    ST32(sp+144, FBITS(f29));
    ST32(sp+148, FBITS(f30));
    ST32(sp+152, FBITS(f31));
    ST32(sp+176, FBITS(f23));
    ST32(sp+180, FBITS(f24));
    ST32(sp+184, FBITS(f25));
    ST32(sp+96, FBITS(f20));
    ST32(sp+100, FBITS(f21));
    ST32(sp+104, FBITS(f22));
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECAC0;
L_088ECAC0:;
    a0 = s0 + 0;
    a1 = sp + 112;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECACC;
L_088ECACC:;
    a0 = s0 + 0;
    a1 = sp + 128;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECAD8;
L_088ECAD8:;
    a0 = s0 + 0;
    a1 = sp + 144;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECAE4;
L_088ECAE4:;
    a0 = s0 + 0;
    a1 = sp + 160;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECAF0;
L_088ECAF0:;
    a0 = s0 + 0;
    a1 = sp + 176;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECAFC;
L_088ECAFC:;
    a0 = s0 + 0;
    a1 = sp + 192;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECB08;
L_088ECB08:;
    a0 = s0 + 0;
    a1 = sp + 208;
    f0 = func_08AA0F30(a0, a1);
    goto L_088ECB14;
L_088ECB14:;
    f2 = BITSF(LD32(s3));
    f7 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+56));
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+60));
    f8 = BITSF(LD32(s3+8));
    v0 = LD32(sp);
    f3 = f3 + f2;
    f4 = f4 + f7;
    f5 = BITSF(LD32(sp+64));
    f0 = f0 + f2;
    f1 = f1 + f7;
    f2 = BITSF(LD32(sp+68));
    {u32 a_=sp+(752);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[12]=BITSF(v0);}
    f7 = BITSF(0);
    v0 = LD32(sp+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f6 = BITSF(v0);
    f5 = f5 + f8;
    f2 = f2 + f8;
    fcc = FCMP(f6, f7, 2);
    ST32(sp+52, FBITS(f0));
    ST32(sp+48, FBITS(f3));
    ST32(sp+60, FBITS(f1));
    ST32(sp+56, FBITS(f4));
    ST32(sp+68, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+64, FBITS(f5));
    if (cnd_) { goto L_088ECBD8; }
    goto L_088ECB9C;
L_088ECB9C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+232, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+224, FBITS(f2));
    ST32(sp+228, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_088ECBD8;
L_088ECBD8:;
    v0 = LD32(sp+16);
    {u32 a_=sp+(768);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+20);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+24);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_088ECC54; }
    goto L_088ECC14;
L_088ECC14:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+232, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+224, FBITS(f2));
    ST32(sp+228, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    v0 = LD32(sp+32);
    goto L_088ECC54;
L_088ECC54:;
    {u32 a_=sp+(784);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+36);
    {v[12]=BITSF(v0);}
    f0 = BITSF(0);
    v0 = LD32(sp+40);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    a0 = sp + 240;
    if (cnd_) { goto L_088ECCCC; }
    goto L_088ECC8C;
L_088ECC8C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+232, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+224, FBITS(f2));
    ST32(sp+228, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    a0 = sp + 240;
    goto L_088ECCCC;
L_088ECCCC:;
    ST32(sp+264, 0);
    ST32(sp+268, 0);
    ST32(sp+272, 0);
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ECCDC;
L_088ECCDC:;
    v0 = 2;
    ST16(sp+276, v0);
    f12 = BITSF(0);
    v1 = 0x10000u;
    v0 = LD32(sp+276);
    a1 = s0 + 0;
    a0 = sp + 240;
    v0 = v0 | v1;
    ST32(sp+276, v0);
    { rv_t r_ = func_088B8958(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ECD04;
L_088ECD04:;
    s0 = LD32(sp+264);
    cnd_ = s0 == 0;
    v0 = D_08AECE50 - (-12720);
    if (cnd_) { goto L_088ECED0; }
    goto L_088ECD10;
L_088ECD10:;
    f21 = BITSF(LD32(v0-12720));
    fp = D_08B2BDB4 - (-16972);
    s6 = fp - 16972;
    a3 = LD32(s0);
    goto L_088ECD20;
L_088ECD20:;
    v1 = LD32(fp-16972);
    t1 = LD32(s6+44);
    v0 = a3 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + v1;
    a1 = LD32(a0);
    v1 = (a3 >> 1) & 0x7fff;
    v0 = 1;
    a3 = a3 & 0x1;
    a1 = a1 + v1;
    v1 = 3;
    if (a3 != 0) v0 = v1;
    a1 = a1 << 3;
    t1 = t1 + a1;
    v1 = a3 << 2;
    v0 = v0 << 1;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a2 = LD32(a0+4);
    a1 = LD_U16(v1);
    a0 = LD_U16(v0);
    t0 = LD32(s6+56);
    a1 = a2 + a1;
    a0 = a2 + a0;
    v0 = 2;
    if (a3 != 0) v0 = 0;
    a1 = a1 << 4;
    a0 = a0 << 4;
    a3 = t0 + a1;
    t2 = t0 + a0;
    v0 = v0 << 1;
    {u32 a_=a3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=t2+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = v0 + t1;
    v1 = LD_U16(v0);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f1 = BITSF(0);
    a2 = a2 + v1;
    a2 = a2 << 4;
    t0 = t0 + a2;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=t0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(800);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f5 = BITSF(LD32(sp+288));
    f4 = BITSF(LD32(sp+292));
    f3 = BITSF(LD32(sp+296));
    v0 = FBITS(f5);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+224, FBITS(f5));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+228, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+232, FBITS(f3));
    if (cnd_) { goto L_088ECE68; }
    goto L_088ECE2C;
L_088ECE2C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+216, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+208, FBITS(f2));
    ST32(sp+212, v0);
    ST32(sp+224, FBITS(f2));
    ST32(sp+228, v0);
    ST32(sp+232, FBITS(f3));
    goto L_088ECE68;
L_088ECE68:;
    v0 = D_08AECE4C - (-12724);
    f2 = BITSF(LD32(v0-12724));
    v1 = LD32(s1+4);
    v0 = LD32(s1);
    {u32 a_=sp+(816);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(832);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(s1+8);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+224);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+228);
    v1 = LD32(sp+232);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a3)); goto L_088ECF38; }
    goto L_088ECEC4;
L_088ECEC4:;
    s0 = LD32(s0+12);
    goto L_088ECEC8;
L_088ECEC8:;
    cnd_ = s0 != 0;
    if (cnd_) { a3 = LD32(s0); goto L_088ECD20; }
    goto L_088ECED0;
L_088ECED0:;
    a0 = sp + 240;
    { rv_t r_ = func_088B8B58(a0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ECED8;
L_088ECED8:;
    sp = sp + 1104;
    return (rv_t){ v0, v1, f0 };
L_088ECF38:;
    v0 = LD32(s3);
    {u32 a_=sp+(848);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+336, FBITS(f0));
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(864);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(a3+4));
    v0 = LD32(s3+4);
    {v[5]=BITSF(v0);}
    ST32(sp+340, FBITS(f0));
    s4 = sp + 336;
    s5 = sp + 528;
    f0 = BITSF(LD32(a3+8));
    v0 = LD32(s3+8);
    {v[6]=BITSF(v0);}
    ST32(sp+344, FBITS(f0));
    a0 = s4 + 0;
    a1 = 3;
    f0 = BITSF(LD32(t2));
    v0 = LD32(sp);
    {v[0]=BITSF(v0);}
    ST32(sp+356, FBITS(f0));
    a2 = s5 + 0;
    a3 = sp + 0;
    f1 = BITSF(LD32(t2+4));
    v0 = LD32(sp+4);
    {v[1]=BITSF(v0);}
    ST32(sp+360, FBITS(f1));
    f0 = BITSF(LD32(t2+8));
    v0 = LD32(sp+8);
    {v[2]=BITSF(v0);}
    ST32(sp+364, FBITS(f0));
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f2 = BITSF(LD32(t0));
    f0 = BITSF(LD32(sp+740));
    f20 = BITSF(v0);
    ST32(sp+376, FBITS(f2));
    f12 = f0 - f20;
    f1 = BITSF(LD32(t0+4));
    ST32(sp+380, FBITS(f1));
    f0 = BITSF(LD32(t0+8));
    ST32(sp+384, FBITS(f0));
    v0 = func_088ED400(a0, a1, a2, a3, f12);
    goto L_088ECFE4;
L_088ECFE4:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+12); goto L_088ECEC8; }
    goto L_088ECFEC;
L_088ECFEC:;
    f1 = BITSF(LD32(sp+740));
    f2 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+8));
    f12 = f1 + f20;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a1 = v0 + 0;
    a0 = s5 + 0;
    a2 = s4 + 0;
    a3 = sp + 208;
    ST32(sp+208, FBITS(f2));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f0));
    v0 = func_088ED400(a0, a1, a2, a3, f12);
    goto L_088ED02C;
L_088ED02C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088ECEC4; }
    goto L_088ED034;
L_088ED034:;
    v0 = LD32(s3);
    v1 = LD32(s3+4);
    {u32 a_=sp+(880);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(896);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    f0 = BITSF(LD32(sp+736));
    {v[5]=BITSF(v1);}
    v0 = LD32(s3+8);
    v1 = LD32(sp+16);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    a1 = s2 + 0;
    a0 = s4 + 0;
    f12 = f0 - f20;
    a2 = s5 + 0;
    a3 = sp + 16;
    v0 = func_088ED400(a0, a1, a2, a3, f12);
    goto L_088ED094;
L_088ED094:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+12); goto L_088ECEC8; }
    goto L_088ED09C;
L_088ED09C:;
    f1 = BITSF(LD32(sp+736));
    f2 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+24));
    f12 = f1 + f20;
    f1 = BITSF(LD32(sp+20));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a1 = v0 + 0;
    a0 = s5 + 0;
    a2 = s4 + 0;
    a3 = sp + 208;
    ST32(sp+208, FBITS(f2));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f0));
    ST32(sp+192, FBITS(f2));
    ST32(sp+196, FBITS(f1));
    ST32(sp+200, FBITS(f0));
    v0 = func_088ED400(a0, a1, a2, a3, f12);
    goto L_088ED0E8;
L_088ED0E8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088ECEC4; }
    goto L_088ED0F0;
L_088ED0F0:;
    v0 = LD32(s3);
    v1 = LD32(s3+4);
    {u32 a_=sp+(912);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(928);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    f0 = BITSF(LD32(sp+744));
    {v[5]=BITSF(v1);}
    v0 = LD32(s3+8);
    v1 = LD32(sp+32);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    a1 = s2 + 0;
    a0 = s4 + 0;
    f12 = f0 - f20;
    a2 = s5 + 0;
    a3 = sp + 32;
    v0 = func_088ED400(a0, a1, a2, a3, f12);
    goto L_088ED150;
L_088ED150:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+12); goto L_088ECEC8; }
    goto L_088ED158;
L_088ED158:;
    f1 = BITSF(LD32(sp+744));
    f2 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f12 = f1 + f20;
    f1 = BITSF(LD32(sp+32));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a1 = v0 + 0;
    a0 = s5 + 0;
    a2 = s4 + 0;
    a3 = sp + 208;
    ST32(sp+208, FBITS(f1));
    ST32(sp+212, FBITS(f2));
    ST32(sp+216, FBITS(f0));
    ST32(sp+192, FBITS(f1));
    ST32(sp+196, FBITS(f2));
    ST32(sp+200, FBITS(f0));
    v0 = func_088ED400(a0, a1, a2, a3, f12);
    goto L_088ED1A4;
L_088ED1A4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088ECEC4; }
    goto L_088ED1AC;
L_088ED1AC:;
    v0 = LD32(s7+32);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    a0 = D_08B2A7A4 - (-22620);
    if (cnd_) { goto L_088ED3E0; }
    goto L_088ED1BC;
L_088ED1BC:;
    ST32(sp+720, FBITS(f21));
    ST32(sp+724, FBITS(f21));
    ST32(sp+728, FBITS(f21));
    ST32(sp+732, FBITS(f21));
    goto L_088ED1CC;
L_088ED1CC:;
    cnd_ = s2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088ED304; }
    goto L_088ED1D4;
L_088ED1D4:;
    f7 = BITSF(LD32(sp+740));
    f0 = BITSF(LD32(sp+736));
    v0 = D_08AECE54 - (-12716);
    f6 = f21 / f7;
    f5 = BITSF(LD32(v0-12716));
    f8 = BITSF(LD32(s3));
    f10 = BITSF(LD32(s3+4));
    f12 = BITSF(LD32(s3+8));
    f13 = BITSF(LD32(s7+8));
    f9 = BITSF(LD32(s7));
    f14 = BITSF(LD32(s7+12));
    f11 = BITSF(LD32(s7+4));
    a2 = sp + 0;
    a3 = 0 + 0;
    f7 = f21 / f0;
    goto L_088ED210;
L_088ED210:;
    v0 = s4 + a3;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = f4 - f12;
    f2 = f2 - f8;
    f3 = f3 - f10;
    v1 = LD32(sp+4);
    {u32 a_=sp+(944);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {u32 a_=sp+(960);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    ST32(sp+192, FBITS(f2));
    {u32 a_=sp+(976);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f0 = f1 * f5;
    ST32(sp+196, FBITS(f3));
    {u32 a_=sp+(992);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a1 = a1 + 1;
    f0 = f0 * f6;
    ST32(sp+200, FBITS(f4));
    a0 = a1 < s2;
    a3 = a3 + 20;
    f0 = f0 + f5;
    f0 = f0 * f13;
    f0 = f0 + f9;
    ST32(a2+348, FBITS(f0));
    v0 = LD32(sp+192);
    v1 = LD32(sp+196);
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+200);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+16);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f0 = f1 * f5;
    f0 = f0 * f7;
    f0 = f0 + f5;
    f0 = f0 * f14;
    f0 = f0 + f11;
    ST32(a2+352, FBITS(f0));
    cnd_ = a0 != 0;
    a2 = a2 + 20;
    if (cnd_) { goto L_088ED210; }
    goto L_088ED304;
L_088ED304:;
    f0 = BITSF(LD32(sp+336));
    f1 = BITSF(LD32(sp+352));
    v1 = s2 - 1;
    ST32(sp+528, FBITS(f0));
    v0 = v1 << 2;
    v0 = v0 + v1;
    f0 = BITSF(LD32(sp+340));
    ST32(sp+544, FBITS(f1));
    v0 = v0 << 2;
    a0 = v0 + s4;
    ST32(sp+532, FBITS(f0));
    v0 = s4 + 20;
    a1 = 1;
    f0 = BITSF(LD32(sp+344));
    v1 = s5 + 20;
    ST32(sp+536, FBITS(f0));
    f0 = BITSF(LD32(sp+348));
    ST32(sp+540, FBITS(f0));
    goto L_088ED34C;
L_088ED34C:;
    v0 = v0 + 20;
    f0 = BITSF(LD32(v0-20));
    f1 = BITSF(LD32(v0-16));
    f2 = BITSF(LD32(v0-12));
    v1 = v1 + 20;
    ST32(v1-20, FBITS(f0));
    a1 = a1 + 1;
    a0 = a0 - 20;
    ST32(v1-16, FBITS(f1));
    ST32(v1-12, FBITS(f2));
    f0 = BITSF(LD32(v0-8));
    f1 = BITSF(LD32(v0-4));
    ST32(v1-8, FBITS(f0));
    ST32(v1-4, FBITS(f1));
    cnd_ = a1 == s2;
    v1 = v1 + 20;
    if (cnd_) { goto L_088ED3BC; }
    goto L_088ED38C;
L_088ED38C:;
    f0 = BITSF(LD32(a0+20));
    f1 = BITSF(LD32(a0+24));
    f2 = BITSF(LD32(a0+28));
    ST32(v1-20, FBITS(f0));
    a1 = a1 + 1;
    ST32(v1-16, FBITS(f1));
    ST32(v1-12, FBITS(f2));
    f0 = BITSF(LD32(a0+32));
    f1 = BITSF(LD32(a0+36));
    ST32(v1-8, FBITS(f0));
    cnd_ = a1 != s2;
    ST32(v1-4, FBITS(f1));
    if (cnd_) { goto L_088ED34C; }
    goto L_088ED3BC;
L_088ED3BC:;
    a0 = D_08B44C30 - (19504);
    a0 = a0 + 19504;
    a1 = s5 + 0;
    a2 = s2 + 0;
    a3 = sp + 720;
    t0 = s7 + 0;
    func_089152A4(a0, a1, a2, t0, 0, 0, 0);
    goto L_088ED3D8;
L_088ED3D8:;
    s0 = LD32(s0+12);
    goto L_088ECEC8;
L_088ED3E0:;
    a0 = a0 - 22620;
    a1 = sp + 720;
    a2 = s3 + 0;
    a3 = s1 + 0;
    t0 = 0 + 0;
    func_0889BDFC(a0, a1, a2, a3, t0);
    goto L_088ED3F8;
L_088ED3F8:;
    ST32(sp+732, FBITS(f21));
    goto L_088ED1CC;
}

/* 088ED400 */
u32 func_088ED400(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088ED400:;
    t4 = 0 < a1;
    sp = sp - 96;
    t5 = 0 + 0;
    t3 = 1;
    cnd_ = t4 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088ED49C; }
    goto L_088ED418;
L_088ED418:;
    f2 = BITSF(0);
    t0 = a0 + 0;
    t1 = sp + 0;
    v0 = LD32(a3);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(a3+4);
    {v[4]=BITSF(v0);}
    v0 = LD32(a3+8);
    {v[5]=BITSF(v1);}
    {v[6]=BITSF(v0);}
    v0 = LD32(t0);
    goto L_088ED444;
L_088ED444:;
    v1 = LD32(t0+4);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    v0 = LD32(t0+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    t2 = t2 + 1;
    v0 = t2 < a1;
    f1 = f0 + f12;
    t0 = t0 + 20;
    fcc = FCMP(f2, f1, 14);
    ST32(t1, FBITS(f1));
    cnd_ = !fcc;
    t1 = t1 + 4;
    if (cnd_) { goto L_088ED48C; }
    goto L_088ED488;
L_088ED488:;
    t3 = 0 + 0;
    goto L_088ED48C;
L_088ED48C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_088ED444; }
    goto L_088ED494;
L_088ED494:;
    cnd_ = t3 == 0;
    if (cnd_) { goto L_088ED4A8; }
    goto L_088ED49C;
L_088ED49C:;
    v0 = 0 + 0;
    goto L_088ED4A0;
L_088ED4A0:;
    sp = sp + 96;
    return v0;
L_088ED4A8:;
    cnd_ = t4 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088ED610; }
    goto L_088ED4B0;
L_088ED4B0:;
    v0 = t5 << 2;
    v1 = D_08AECE58 - (-12712);
    v0 = v0 + t5;
    f10 = BITSF(LD32(v1-12712));
    v0 = v0 << 2;
    a2 = v0 + a2;
    t1 = a0 + 0;
    t3 = sp + 0;
    goto L_088ED4D0;
L_088ED4D0:;
    f0 = BITSF(LD32(t3));
    f8 = BITSF(0);
    v1 = t2 - 1;
    v0 = a1 - 1;
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    if (t2 == 0) v1 = v0;
    if (cnd_) { goto L_088ED618; }
    goto L_088ED4F0;
L_088ED4F0:;
    v0 = v1 << 2;
    t0 = v0 + sp;
    f0 = BITSF(LD32(t0));
    fcc = FCMP(f8, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { t2 = t2 + 1; goto L_088ED600; }
    goto L_088ED50C;
L_088ED50C:;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    f4 = BITSF(LD32(v0+8));
    f9 = BITSF(LD32(v0));
    f7 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(t1+4));
    f1 = BITSF(LD32(t1+8));
    f2 = BITSF(LD32(t1));
    f6 = f7 - f0;
    f5 = f4 - f1;
    f2 = f9 - f2;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+52, FBITS(f6));
    v0 = FBITS(f2);
    {v[4]=BITSF(v0);}
    v0 = LD32(a3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = LD32(a3+4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[6]=BITSF(v0);}
    v0 = LD32(a3+8);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f2));
    f1 = f10 / f0;
    ST32(sp+56, FBITS(f5));
    f0 = BITSF(LD32(t0));
    f3 = f0 * f1;
    fcc = FCMP(f3, f8, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f8; goto L_088ED5A8; }
    goto L_088ED5A8;
L_088ED5A8:;
    fcc = FCMP(f10, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f10; goto L_088ED5B8; }
    goto L_088ED5B8;
L_088ED5B8:;
    f0 = f2 * f3;
    f5 = f5 * f3;
    f3 = f6 * f3;
    t5 = t5 + 1;
    f1 = f9 - f0;
    f4 = f4 - f5;
    f2 = f7 - f3;
    ST32(sp+80, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f4));
    ST32(a2, FBITS(f1));
    a2 = a2 + 20;
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f5));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f4));
    goto L_088ED5FC;
L_088ED5FC:;
    t2 = t2 + 1;
    goto L_088ED600;
L_088ED600:;
    v0 = t2 < a1;
    t3 = t3 + 4;
    cnd_ = v0 != 0;
    t1 = t1 + 20;
    if (cnd_) { goto L_088ED4D0; }
    goto L_088ED610;
L_088ED610:;
    v0 = t5 + 0;
    goto L_088ED4A0;
L_088ED618:;
    t0 = v1 << 2;
    v0 = t0 + sp;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t1)); goto L_088ED728; }
    goto L_088ED634;
L_088ED634:;
    v0 = t0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f9 = BITSF(LD32(t1));
    f3 = BITSF(LD32(t1+4));
    f5 = BITSF(LD32(t1+8));
    f6 = f9 - f1;
    f7 = f3 - f0;
    f4 = f5 - f2;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f6);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(v0);}
    v0 = LD32(a3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[5]=BITSF(v0);}
    v0 = LD32(a3+4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[6]=BITSF(v0);}
    v0 = LD32(a3+8);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+80, FBITS(f6));
    f1 = f10 / f0;
    ST32(sp+84, FBITS(f7));
    ST32(sp+88, FBITS(f4));
    f0 = BITSF(LD32(t3));
    f1 = f0 * f1;
    fcc = FCMP(f1, f8, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f8; goto L_088ED6D0; }
    goto L_088ED6D0;
L_088ED6D0:;
    fcc = FCMP(f10, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f10; goto L_088ED6E0; }
    goto L_088ED6E0;
L_088ED6E0:;
    f4 = f4 * f1;
    f0 = f6 * f1;
    f1 = f7 * f1;
    t5 = t5 + 1;
    f5 = f5 - f4;
    f2 = f9 - f0;
    f3 = f3 - f1;
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f5));
    ST32(a2, FBITS(f2));
    ST32(a2+4, FBITS(f3));
    ST32(a2+8, FBITS(f5));
    a2 = a2 + 20;
    f0 = BITSF(LD32(t1));
    goto L_088ED728;
L_088ED728:;
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    ST32(a2, FBITS(f0));
    t5 = t5 + 1;
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    a2 = a2 + 20;
    goto L_088ED5FC;
}

/* 088ED748 */
void func_088ED748(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088ED748:;
    v0 = D_08B2C228 - (-15832);
    v1 = LD_U8(v0-15832);
    sp = sp - 16;
    a0 = D_08B44C30 - (19504);
    cnd_ = v1 != 0;
    a0 = a0 + 19504;
    if (cnd_) { goto L_088ED770; }
    goto L_088ED764;
L_088ED764:;
    goto L_088ED768;
L_088ED768:;
    sp = sp + 16;
    return;
L_088ED770:;
    func_08915368(a0);
    goto L_088ED778;
L_088ED778:;
    goto L_088ED768;
}

/* 088ED780 */
rv_t func_088ED780(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088ED780:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    a0 = a0 < 0x1u;
    sp = sp - 16;
    v1 = a1 & a0;
    a1 = a1 & v0;
    s0 = D_08B44C30 - (19504);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088ED7B4; }
    goto L_088ED7B0;
L_088ED7B0:;
    ST32(s0+19504, 0);
    goto L_088ED7B4;
L_088ED7B4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088ED7D0; }
    goto L_088ED7BC;
L_088ED7BC:;
    v0 = LD32(s0+19504);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088ED7DC; }
    goto L_088ED7C8;
L_088ED7C8:;
    ST32(s0+19504, 0);
    goto L_088ED7CC;
L_088ED7CC:;
    goto L_088ED7D0;
L_088ED7D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088ED7DC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ED7EC;
L_088ED7EC:;
    ST32(s0+19504, 0);
    goto L_088ED7CC;
}

/* 088ED7F4 */
rv_t func_088ED7F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088ED7F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088ED780(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ED808;
L_088ED808:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088ED814 */
rv_t func_088ED814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088ED814:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088ED780(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ED828;
L_088ED828:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088ED834 */
void func_088ED834(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088ED834:;
    sp = sp - 16;
    func_08915514();
    goto L_088ED844;
L_088ED844:;
    sp = sp + 16;
    return;
}

/* 088ED850 */
void func_088ED850(u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088ED850:;
    sp = sp - 32;
    a3 = D_08B16154 - (24916);
    v0 = 999;
    a2 = LD32(a3+24916);
    cnd_ = a2 == v0;
    a0 = D_08B29024 - (-28636);
    if (cnd_) { goto L_088ED950; }
    goto L_088ED86C;
L_088ED86C:;
    v1 = a0 - 28636;
    v0 = LD32(v1+4);
    a1 = LD32(a0-28636);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088ED8C0; }
    goto L_088ED894;
L_088ED894:;
    a0 = LD32(a1);
    goto L_088ED898;
L_088ED898:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_088ED994; }
    goto L_088ED8B0;
L_088ED8B0:;
    a1 = LD32(a1+4);
    goto L_088ED8B4;
L_088ED8B4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_088ED898; }
    goto L_088ED8BC;
L_088ED8BC:;
    a0 = 0 + 0;
    goto L_088ED8C0;
L_088ED8C0:;
    cnd_ = a0 == 0;
    a1 = LD32(a3+24916);
    if (cnd_) { goto L_088ED95C; }
    goto L_088ED8C8;
L_088ED8C8:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ED8D8;
L_088ED8D8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    a0 = sp + 0;
    goto L_088ED8F4;
L_088ED8F4:;
    a1 = 0 + 0;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ED8FC;
L_088ED8FC:;
    v1 = D_08B16158 - (24920);
    f0 = BITSF(LD32(v1+24920));
    f3 = BITSF(LD32(sp+8));
    f2 = BITSF(0);
    f0 = f3 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_088ED920; }
    goto L_088ED920;
L_088ED920:;
    v0 = D_08B1615C - (24924);
    f0 = BITSF(LD32(v0+24924));
    f1 = BITSF(0);
    v0 = D_08B44C34 - (19508);
    f0 = f3 + f0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(v0+19508, FBITS(f2));
    if (cnd_) { goto L_088ED948; }
    goto L_088ED944;
L_088ED944:;
    f1 = f0;
    goto L_088ED948;
L_088ED948:;
    v0 = D_08B44C38 - (19512);
    ST32(v0+19512, FBITS(f1));
    goto L_088ED950;
L_088ED950:;
    sp = sp + 32;
    return;
L_088ED95C:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    v0 = func_08846B80(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088ED968;
L_088ED968:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088ED988; }
    goto L_088ED970;
L_088ED970:;
    v1 = LD32(v0);
    v0 = LD32(v1+64);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088ED980;
L_088ED980:;
    a0 = sp + 0;
    goto L_088ED8F4;
L_088ED988:;
    v1 = D_08B159FC - (23036);
    v0 = LD32(v1+23036);
    goto L_088ED8D8;
L_088ED994:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088ED8B4; }
    goto L_088ED9A0;
L_088ED9A0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088ED8B4; }
    goto L_088ED9AC;
L_088ED9AC:;
    goto L_088ED8C0;
}

/* 088ED9B4 */
void func_088ED9B4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088ED9B4:;
    sp = sp - 16;
    func_0891551C();
    goto L_088ED9C4;
L_088ED9C4:;
    sp = sp + 16;
    return;
}

/* 088ED9D0 */
rv_t func_088ED9D0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0;
L_088ED9D0:;
    v0 = D_08AECE5C - (-12708);
    f1 = BITSF(LD32(v0-12708));
    a0 = 999;
    v0 = D_08B16154 - (24916);
    ST32(v0+24916, a0);
    v0 = D_08AECE60 - (-12704);
    v1 = D_08B1615C - (24924);
    f0 = BITSF(LD32(v0-12704));
    ST32(v1+24924, FBITS(f1));
    v0 = D_08AECE64 - (-12700);
    v1 = D_08B16164 - (24932);
    ST32(v1+24932, FBITS(f0));
    v1 = D_08B16160 - (24928);
    f0 = BITSF(LD32(v0-12700));
    v0 = D_08B16158 - (24920);
    ST32(v0+24920, FBITS(f1));
    v0 = D_08B44C38 - (19512);
    ST32(v1+24928, FBITS(f0));
    v1 = D_08B44C34 - (19508);
    ST32(v1+19508, 0);
    ST32(v0+19512, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088EDA28 */
void func_088EDA28(void)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EDA28:;
    sp = sp - 16;
    v0 = D_08B44C34 - (19508);
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0+19508));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = D_08B16160 - (24928);
    if (cnd_) { goto L_088EDA68; }
    goto L_088EDA4C;
L_088EDA4C:;
    v0 = D_08B44C38 - (19512);
    f0 = BITSF(LD32(v0+19512));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088EDA80; }
    goto L_088EDA64;
L_088EDA64:;
    v0 = D_08B16160 - (24928);
    goto L_088EDA68;
L_088EDA68:;
    f0 = BITSF(LD32(v0+24928));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_088EDA88; }
    goto L_088EDA7C;
L_088EDA7C:;
    goto L_088EDA80;
L_088EDA80:;
    sp = sp + 16;
    return;
L_088EDA88:;
    func_08915524();
    goto L_088EDA90;
L_088EDA90:;
    goto L_088EDA80;
}

/* 088EDA98 */
u64 func_088EDA98(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
L_088EDA98:;
    v0 = D_08B16154 - (24916);
    ST32(v0+24916, a0);
    v1 = D_08B16158 - (24920);
    v0 = D_08B1615C - (24924);
    ST32(v1+24920, FBITS(f12));
    ST32(v0+24924, FBITS(f13));
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088EDAB4 */
u64 func_088EDAB4(float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
L_088EDAB4:;
    v0 = D_08B44C34 - (19508);
    v1 = D_08B44C38 - (19512);
    ST32(v0+19508, FBITS(f12));
    ST32(v1+19512, FBITS(f13));
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088EDAC8 */
void func_088EDAC8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EDAC8:;
    sp = sp - 16;
    a0 = 16;
    v0 = D_08B44C40 - (19520);
    ST32(v0+19520, 0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDAE0;
L_088EDAE0:;
    a0 = 0x7fff0000u;
    a0 = a0 | 0xffff;
    v1 = D_08B44C3C - (19516);
    ST32(v1+19516, v0);
    ST32(v0+12, a0);
    ST32(v0+8, 0);
    ST32(v0, 0);
    ST32(v0+4, 0);
    sp = sp + 16;
    return;
}

/* 088EDB0C */
void func_088EDB0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EDB0C:;
    sp = sp - 32;
    s3 = D_08B44C40 - (19520);
    v0 = LD32(s3+19520);
    s2 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_088EDB60; }
    goto L_088EDB34;
L_088EDB34:;
    v0 = D_08B44C44 - (19524);
    s1 = v0 + 19524;
    s0 = LD32(s1);
    goto L_088EDB40;
L_088EDB40:;
    s2 = s2 + 1;
    s1 = s1 + 4;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088EDC08; }
    goto L_088EDB50;
L_088EDB50:;
    v0 = LD32(s3+19520);
    goto L_088EDB54;
L_088EDB54:;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s1); goto L_088EDB40; }
    goto L_088EDB60;
L_088EDB60:;
    s2 = D_08B44C3C - (19516);
    s0 = LD32(s2+19516);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s3+19520, 0); goto L_088EDBB4; }
    goto L_088EDB70;
L_088EDB70:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088EDBA0; }
    goto L_088EDB7C;
L_088EDB7C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088EDBF8; }
    goto L_088EDB88;
L_088EDB88:;
    a1 = LD32(s1+12);
    goto L_088EDB8C;
L_088EDB8C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088EDBE8; }
    goto L_088EDB94;
L_088EDB94:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDB9C;
L_088EDB9C:;
    a0 = LD32(s0+4);
    goto L_088EDBA0;
L_088EDBA0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088EDBD4; }
    goto L_088EDBA8;
L_088EDBA8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDBB0;
L_088EDBB0:;
    ST32(s3+19520, 0);
    goto L_088EDBB4;
L_088EDBB4:;
    ST32(s2+19516, 0);
    sp = sp + 32;
    return;
L_088EDBD4:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDBE0;
L_088EDBE0:;
    goto L_088EDBA8;
L_088EDBE8:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088EDBF0;
L_088EDBF0:;
    goto L_088EDB94;
L_088EDBF8:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088EDC00;
L_088EDC00:;
    a1 = LD32(s1+12);
    goto L_088EDB8C;
L_088EDC08:;
    func_088EDE74(a0);
    goto L_088EDC10;
L_088EDC10:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDC18;
L_088EDC18:;
    v0 = LD32(s3+19520);
    goto L_088EDB54;
}

/* 088EDC20 */
void func_088EDC20(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EDC20:;
    sp = sp - 32;
    s3 = D_08B44C40 - (19520);
    v0 = LD32(s3+19520);
    s2 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_088EDC74; }
    goto L_088EDC48;
L_088EDC48:;
    v0 = D_08B44C44 - (19524);
    s1 = v0 + 19524;
    goto L_088EDC50;
L_088EDC50:;
    s0 = LD32(s1);
    s2 = s2 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088EDD24; }
    goto L_088EDC60;
L_088EDC60:;
    v0 = LD32(s3+19520);
    goto L_088EDC64;
L_088EDC64:;
    ST32(s1, 0);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_088EDC50; }
    goto L_088EDC74;
L_088EDC74:;
    v0 = D_08B44C3C - (19516);
    s0 = LD32(v0+19516);
    ST32(s3+19520, 0);
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    if (cnd_) { a1 = LD32(s0+4); goto L_088EDCB0; }
    goto L_088EDC8C;
L_088EDC8C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088EDD14; }
    goto L_088EDC98;
L_088EDC98:;
    a1 = LD32(s1+12);
    goto L_088EDC9C;
L_088EDC9C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088EDD04; }
    goto L_088EDCA4;
L_088EDCA4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDCAC;
L_088EDCAC:;
    a1 = LD32(s0+4);
    goto L_088EDCB0;
L_088EDCB0:;
    ST32(s0+8, 0);
    cnd_ = a1 == 0;
    ST32(s0, 0);
    if (cnd_) { goto L_088EDCE8; }
    goto L_088EDCBC;
L_088EDCBC:;
    v0 = LD32(a1+8);
    ST32(a1+12, 0);
    cnd_ = (s32)v0 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088EDCE8; }
    goto L_088EDCCC;
L_088EDCCC:;
    v1 = LD32(a1+4);
    goto L_088EDCD0;
L_088EDCD0:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = LD32(a1+8);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088EDCD0; }
    goto L_088EDCE8;
L_088EDCE8:;
    sp = sp + 32;
    return;
L_088EDD04:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088EDD0C;
L_088EDD0C:;
    goto L_088EDCA4;
L_088EDD14:;
    a0 = s0 + 0;
    func_08AA6750(a0, a1, t1, t2, t3);
    goto L_088EDD1C;
L_088EDD1C:;
    a1 = LD32(s1+12);
    goto L_088EDC9C;
L_088EDD24:;
    func_088EDE74(a0);
    goto L_088EDD2C;
L_088EDD2C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDD34;
L_088EDD34:;
    v0 = LD32(s3+19520);
    goto L_088EDC64;
}

/* 088EDD3C */
u32 func_088EDD3C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EDD3C:;
    sp = sp - 48;
    v0 = D_08B44C3C - (19516);
    s3 = a1 + 0;
    s2 = a0 + 0;
    a1 = s2 + 0;
    a2 = 1;
    a3 = sp + 0;
    a0 = LD32(v0+19516);
    ST32(sp, 0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDD78;
L_088EDD78:;
    a1 = D_08B44C40 - (19520);
    cnd_ = v0 == 0;
    a0 = 16;
    if (cnd_) { goto L_088EDDC4; }
    goto L_088EDD84;
L_088EDD84:;
    v0 = LD32(sp);
    v1 = D_08B44C44 - (19524);
    v1 = v1 + 19524;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = 0 + 0;
    ST32(s3, a0);
    goto L_088EDDA4;
L_088EDDA4:;
    v0 = a1 + 0;
    sp = sp + 48;
    return v0;
L_088EDDC4:;
    v1 = LD32(a1+19520);
    s1 = LD32(sp);
    v0 = D_08B44C44 - (19524);
    v1 = v1 + 1;
    v0 = v0 + 19524;
    s1 = s1 << 2;
    ST32(a1+19520, v1);
    s1 = s1 + v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDDE8;
L_088EDDE8:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_088EDE60(a0, a1);
    goto L_088EDDF8;
L_088EDDF8:;
    a1 = 1;
    ST32(s1, s0);
    ST32(s3, s0);
    goto L_088EDDA4;
}

/* 088EDE08 */
rv_t func_088EDE08(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EDE08:;
    sp = sp - 32;
    v0 = D_08B44C3C - (19516);
    a1 = a0 + 0;
    a0 = LD32(v0+19516);
    a2 = 0 + 0;
    v0 = (u32)-1;
    a3 = sp + 0;
    ST32(sp, v0);
    { rv_t r_ = func_08AA65BC(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDE30;
L_088EDE30:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088EDE50; }
    goto L_088EDE38;
L_088EDE38:;
    v1 = LD32(sp);
    v0 = D_08B44C44 - (19524);
    v0 = v0 + 19524;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v1 = LD32(v1);
    goto L_088EDE50;
L_088EDE50:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088EDE60 */
void func_088EDE60(u32 a0, u32 a1)
{
L_088EDE60:;
    ST32(a0, a1);
    ST8(a0+12, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 088EDE74 */
void func_088EDE74(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EDE74:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 8;
    a0 = 6;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDE90;
L_088EDE90:;
    a0 = s0 + 0;
    func_08AB9A34(a0, 0, 0, 0);
    goto L_088EDE98;
L_088EDE98:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EDEA0;
L_088EDEA0:;
    sp = sp + 16;
    return;
}

/* 088EDEB0 */
void func_088EDEB0(u32 a0)
{
    u32 v0 = 0;
L_088EDEB0:;
    v0 = 1;
    ST32(a0+20, v0);
    ST32(a0, 0);
    ST32(a0+16, 0);
    return;
}

/* 088EDEC4 */
u32 func_088EDEC4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EDEC4:;
    sp = sp - 16;
    { rv_t r_ = func_088EDE08(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDED4;
L_088EDED4:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088EDEEC; }
    goto L_088EDEE0;
L_088EDEE0:;
    v0 = func_088EE044(a0);
    goto L_088EDEE8;
L_088EDEE8:;
    v1 = v0 + 0;
    goto L_088EDEEC;
L_088EDEEC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088EDEFC */
rv_t func_088EDEFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EDEFC:;
    sp = sp - 48;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    f20 = f12;
    { rv_t r_ = func_088EDE08(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDF30;
L_088EDF30:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_088EDF54; }
    goto L_088EDF4C;
L_088EDF4C:;
    { rv_t r_ = func_088EE080(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EDF54;
L_088EDF54:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088EDF74 */
void func_088EDF74(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EDF74:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a0 + 68;
    s0 = a0 + 56;
    a3 = LD32(a0+4);
    cnd_ = a3 == 0;
    f20 = f12;
    if (cnd_) { goto L_088EE014; }
    goto L_088EDFA4;
L_088EDFA4:;
    v0 = D_08B3071C - (1820);
    v1 = LD32(v0+1820);
    cnd_ = v1 == 0;
    t0 = v0 + 1820;
    if (cnd_) { goto L_088EDFE0; }
    goto L_088EDFB4;
L_088EDFB4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088EDFBC;
L_088EDFBC:;
    a0 = v0 + 40;
    a1 = v0 + 36;
    a2 = v0 + 4;
    v0 = a3 < v1;
    cnd_ = v1 == a3;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_088EDFEC; }
    goto L_088EDFD4;
L_088EDFD4:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088EDFBC; }
    goto L_088EDFE0;
L_088EDFE0:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088EE030; }
    goto L_088EDFEC;
L_088EDFEC:;
    cnd_ = a2 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088EE014; }
    goto L_088EDFF4;
L_088EDFF4:;
    v0 = LD32(a2+16);
    a0 = LD32(a2+12);
    a3 = v0 + 4;
    if (v0 == 0) a3 = 0;
    a2 = s1 + 0;
    t0 = s2 + 0;
    f12 = f20;
    { rv_t r_ = func_088EDEFC(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EE014;
L_088EE014:;
    sp = sp + 32;
    return;
L_088EE030:;
    a2 = 1;
    a1 = a3 + 0;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EE03C;
L_088EE03C:;
    a2 = v0 + 0;
    goto L_088EDFEC;
}

/* 088EE044 */
u32 func_088EE044(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088EE044:;
    a2 = LD32(a0+4);
    cnd_ = (s32)a2 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088EE070; }
    goto L_088EE050;
L_088EE050:;
    a0 = LD32(a0+8);
    goto L_088EE054;
L_088EE054:;
    v0 = LD32(a0+16);
    a1 = a1 + 1;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    v1 = (s32)a1 < (s32)a2;
    if (cnd_) { goto L_088EE078; }
    goto L_088EE068;
L_088EE068:;
    cnd_ = v1 != 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_088EE054; }
    goto L_088EE070;
L_088EE070:;
    v0 = 0 + 0;
    return v0;
L_088EE078:;
    v0 = LD32(a0);
    return v0;
}

/* 088EE080 */
rv_t func_088EE080(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[464] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 464);
L_088EE080:;
    sp = sp - 464;
    fp = a0 + 0;
    s4 = a1 + 0;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s0 = a2 + 0;
    v0 = LD_U8(a0+12);
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_088EE87C; }
    goto L_088EE0E4;
L_088EE0E4:;
    a0 = LD32(a0+4);
    cnd_ = (s32)a0 <= 0;
    ST32(sp+80, 0);
    if (cnd_) { goto L_088EE160; }
    goto L_088EE0F0;
L_088EE0F0:;
    v0 = D_08AECE68 - (-12696);
    f21 = BITSF(LD32(v0-12696));
    v0 = D_08AECE80 - (-12672);
    v1 = D_08AECE6C - (-12692);
    f25 = BITSF(LD32(v0-12672));
    v0 = D_08AECE84 - (-12668);
    f24 = BITSF(LD32(v1-12692));
    f23 = BITSF(LD32(v0-12668));
    v1 = D_08AECE7C - (-12676);
    ST32(sp+240, 0);
    f22 = BITSF(LD32(v1-12676));
    v1 = D_08B25AC0 - (23232);
    s7 = v1 + 23232;
    goto L_088EE124;
L_088EE124:;
    v0 = LD32(fp+8);
    v1 = LD32(sp+240);
    s1 = v0 + v1;
    v1 = LD32(s1+16);
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+20); goto L_088EE1A8; }
    goto L_088EE140;
L_088EE140:;
    a2 = LD32(sp+80);
    a3 = LD32(sp+240);
    a2 = a2 + 1;
    a3 = a3 + 24;
    v0 = (s32)a2 < (s32)a0;
    ST32(sp+80, a2);
    cnd_ = v0 != 0;
    ST32(sp+240, a3);
    if (cnd_) { goto L_088EE124; }
    goto L_088EE160;
L_088EE160:;
    goto L_088EE164;
L_088EE164:;
    sp = sp + 464;
    return (rv_t){ v0, v1, f0 };
L_088EE1A8:;
    s6 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    s5 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088EE140; }
    goto L_088EE1B4;
L_088EE1B4:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = s1 + 4;
    if (cnd_) { goto L_088EE70C; }
    goto L_088EE1C0;
L_088EE1C0:;
    f7 = BITSF(LD32(v0+8));
    f9 = BITSF(LD32(s1+4));
    f8 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f7));
    ST32(sp, FBITS(f9));
    ST32(sp+4, FBITS(f8));
    goto L_088EE1D8;
L_088EE1D8:;
    cnd_ = s3 == 0;
    v0 = D_08AECE70 - (-12688);
    if (cnd_) { goto L_088EE4AC; }
    goto L_088EE1E0;
L_088EE1E0:;
    f10 = BITSF(LD32(s3+4));
    f6 = BITSF(LD32(s3));
    f11 = BITSF(LD32(s3+8));
    v1 = D_08AECE74 - (-12684);
    ST32(sp+20, FBITS(f10));
    a3 = sp + 32;
    a2 = s5 + 23232;
    f7 = BITSF(LD32(v0-12688));
    f10 = BITSF(LD32(v1-12684));
    v0 = D_08AECE68 - (-12696);
    v1 = D_08AECE78 - (-12680);
    ST32(sp+16, FBITS(f6));
    ST32(sp+24, FBITS(f11));
    f6 = BITSF(LD32(v0-12696));
    f8 = BITSF(LD32(v1-12680));
    goto L_088EE21C;
L_088EE21C:;
    v0 = LD32(a2);
    goto L_088EE220;
L_088EE220:;
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
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    a1 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a0 = a0 + v1;
    v0 = v0 + a1;
    v0 = v0 + a0;
    f2 = (float)(s32)FBITS(f0);
    f3 = (float)(s32)FBITS(f1);
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    f2 = f2 * f6;
    f3 = f3 * f6;
    f0 = (float)(s32)FBITS(f1);
    a0 = a0 + v0;
    f2 = f2 + f2;
    f3 = f3 + f3;
    f0 = f0 * f6;
    ST32(a2+4, a0);
    f5 = f2 + f7;
    f3 = f3 + f7;
    f0 = f0 + f0;
    ST32(a2, v0);
    f1 = f5 * f5;
    f2 = f3 * f3;
    f4 = f0 + f7;
    ST32(a3, FBITS(f5));
    f1 = f1 + f2;
    f0 = f4 * f4;
    ST32(a3+4, FBITS(f3));
    f2 = f1 + f0;
    fcc = FCMP(f10, f2, 12);
    cnd_ = fcc;
    ST32(a3+8, FBITS(f4));
    if (cnd_) { goto L_088EE21C; }
    goto L_088EE2DC;
L_088EE2DC:;
    fcc = FCMP(f2, f8, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a2); goto L_088EE220; }
    goto L_088EE2EC;
L_088EE2EC:;
    f1 = sqrtf(f2);
    t1 = LD32(s0);
    t3 = LD32(s0+4);
    t2 = LD32(s0+8);
    a1 = LD32(s0+12);
    a2 = LD32(s0+16);
    t0 = LD32(s0+20);
    v0 = LD32(s0+24);
    a0 = LD32(s0+28);
    v1 = LD32(s0+32);
    f9 = BITSF(LD32(sp));
    f8 = BITSF(LD32(sp+4));
    f7 = BITSF(LD32(sp+8));
    f2 = f10 / f1;
    f1 = f5 * f2;
    f0 = f4 * f2;
    f3 = f3 * f2;
    ST32(a3, FBITS(f1));
    ST32(a3+4, FBITS(f3));
    ST32(a3+8, FBITS(f0));
    f2 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+36));
    f3 = BITSF(LD32(sp+40));
    f2 = f2 * f20;
    f0 = BITSF(LD32(sp+16));
    f4 = f4 * f20;
    f3 = f3 * f20;
    f6 = f0 + f2;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+48, FBITS(f2));
    f10 = f1 + f4;
    f11 = f0 + f3;
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f10));
    ST32(sp+24, FBITS(f11));
    ST32(sp+52, FBITS(f4));
    goto L_088EE380;
L_088EE380:;
    ST32(sp+56, FBITS(f3));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s4));
    f5 = BITSF(LD32(s4+4));
    f6 = BITSF(LD32(s4+8));
    {v[48]=BITSF(t1);}
    {u32 a_=sp+(208);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {v[49]=BITSF(t3);}
    {v[52]=BITSF(a1);}
    {v[50]=BITSF(t2);}
    {v[53]=BITSF(a2);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[54]=BITSF(t0);}
    a2 = FBITS(f7);
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[48]=BITSF(v0);}
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = FBITS(f9);
    {v[49]=BITSF(a0);}
    {v[32]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = FBITS(f8);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a2);}
    {float t0=v[32];float t1=v[33];float t2=v[34];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[17]);}
    {v0=FBITS(v[16]);}
    {a3=FBITS(v[18]);}
    f0 = BITSF(v1);
    f3 = BITSF(a3);
    f2 = BITSF(v0);
    f5 = f0 + f5;
    f6 = f3 + f6;
    f4 = f2 + f4;
    a0 = LD32(s1);
    a1 = sp + 0;
    a2 = s0 + 0;
    a3 = sp + 16;
    ST32(sp+68, v1);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    ST32(sp+36, v1);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp, FBITS(f4));
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(sp+4, FBITS(f5));
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    s6 = s6 + 1;
    ST32(sp+8, FBITS(f6));
    ST32(sp+64, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+32, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    f0 = func_08984498(a0, a1, a2, a3, t1, t2, t3);
    goto L_088EE47C;
L_088EE47C:;
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+20);
    {u32 a_=sp+(320);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    v1 = (s32)s6 < (s32)v1;
    {u32 a_=sp+(352);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = v1 == 0;
    {u32 a_=sp+(368);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088EE4A4; }
    goto L_088EE49C;
L_088EE49C:;
    v1 = LD32(s1+16);
    goto L_088EE1B4;
L_088EE4A4:;
    a0 = LD32(fp+4);
    goto L_088EE140;
L_088EE4AC:;
    f9 = BITSF(LD32(sp));
    f0 = BITSF(0);
    f8 = BITSF(LD32(sp+4));
    f7 = BITSF(LD32(sp+8));
    fcc = FCMP(f9, f0, 2);
    ST32(sp+16, FBITS(f9));
    ST32(sp+20, FBITS(f8));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f7));
    if (cnd_) { goto L_088EE680; }
    goto L_088EE4D0;
L_088EE4D0:;
    fcc = FCMP(f8, f0, 2);
    cnd_ = !fcc;
    f6 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_088EE684; }
    goto L_088EE4E0;
L_088EE4E0:;
    fcc = FCMP(f7, f0, 2);
    cnd_ = !fcc;
    f10 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_088EE688; }
    goto L_088EE4F0;
L_088EE4F0:;
    v0 = D_08AECE70 - (-12688);
    f10 = BITSF(LD32(v0-12688));
    f6 = f9;
    f11 = f7;
    ST32(sp+20, FBITS(f10));
    goto L_088EE504;
L_088EE504:;
    v1 = LD32(s5+23232);
    goto L_088EE508;
L_088EE508:;
    a1 = LD32(s7+4);
    f5 = f20 + f20;
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a1 = a1 + v1;
    v0 = v0 + a0;
    v0 = v0 + a1;
    a2 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + a2;
    a0 = a0 + a1;
    a2 = a0 >> 1;
    v1 = v1 >> 1;
    v0 = v0 >> 1;
    f0 = BITSF(v1);
    f4 = BITSF(a2);
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f0 = (float)(s32)FBITS(f4);
    f3 = (float)(s32)FBITS(f1);
    a1 = a1 + a0;
    f2 = f2 * f21;
    f0 = f0 * f21;
    f3 = f3 * f21;
    ST32(s7+4, a1);
    f2 = f2 * f23;
    f0 = f0 * f23;
    f3 = f3 * f23;
    ST32(s5+23232, a0);
    f2 = f2 + f22;
    f0 = f0 + f22;
    f3 = f3 + f22;
    t1 = LD32(s0);
    f6 = f6 + f2;
    f11 = f11 + f0;
    f10 = f10 + f3;
    t3 = LD32(s0+4);
    f6 = f6 * f5;
    f11 = f11 * f5;
    f10 = f10 * f5;
    t2 = LD32(s0+8);
    a1 = LD32(s0+12);
    a2 = LD32(s0+16);
    t0 = LD32(s0+20);
    v0 = LD32(s0+24);
    a0 = LD32(s0+28);
    v1 = LD32(s0+32);
    a3 = FBITS(f6);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(t1);}
    {v[32]=BITSF(a1);}
    {v[49]=BITSF(t3);}
    {v[33]=BITSF(a2);}
    {v[50]=BITSF(t2);}
    {v[34]=BITSF(t0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(a3);}
    {v[32]=BITSF(v0);}
    a3 = FBITS(f10);
    {v[33]=BITSF(a0);}
    {v[21]=BITSF(a3);}
    {v[34]=BITSF(v1);}
    a3 = FBITS(f11);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(a3);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a3=FBITS(v[18]);}
    f3 = BITSF(a3);
    {a3=FBITS(v[16]);}
    f2 = BITSF(a3);
    ST32(sp+16, FBITS(f6));
    {a3=FBITS(v[17]);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    ST32(sp+16, FBITS(f2));
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    ST32(sp+20, a3);
    ST32(sp+24, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, a3);
    ST32(sp+40, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, a3);
    goto L_088EE380;
L_088EE680:;
    f6 = BITSF(LD32(sp+16));
    goto L_088EE684;
L_088EE684:;
    f10 = BITSF(LD32(sp+20));
    goto L_088EE688;
L_088EE688:;
    f11 = BITSF(LD32(sp+24));
    {u32 a_=sp+(96);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a2 = FBITS(f6);
    a3 = FBITS(f10);
    {v[12]=BITSF(a2);}
    v0 = FBITS(f11);
    {v[13]=BITSF(a3);}
    f1 = BITSF(0);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s5+23232); goto L_088EE508; }
    goto L_088EE6C8;
L_088EE6C8:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a2=FBITS(v[2]);}
    {a3=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    f11 = BITSF(a2);
    f6 = BITSF(a3);
    f10 = BITSF(v0);
    ST32(sp+16, a3);
    ST32(sp+20, v0);
    ST32(sp+24, a2);
    ST32(sp+48, a3);
    ST32(sp+52, v0);
    ST32(sp+56, a2);
    goto L_088EE504;
L_088EE70C:;
    cnd_ = s2 == 0;
    v1 = LD32(s5+23232);
    if (cnd_) { goto L_088EE7E8; }
    goto L_088EE714;
L_088EE714:;
    a1 = LD32(s7+4);
    f9 = BITSF(LD32(s2));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a1 = a1 + v1;
    v0 = v0 + a0;
    v0 = v0 + a1;
    f6 = BITSF(LD32(s2+4));
    a2 = (u32)((s32)v0 >> 16);
    ST32(s5+23232, v1);
    a0 = v0 << 16;
    a0 = a0 + a2;
    ST32(s7+4, a1);
    a1 = a1 + v0;
    a0 = a0 + a1;
    f8 = BITSF(LD32(s2+8));
    f4 = BITSF(LD32(s2+12));
    a2 = a0 >> 1;
    ST32(s5+23232, v0);
    v1 = v1 >> 1;
    v0 = v0 >> 1;
    f3 = BITSF(v1);
    f0 = BITSF(v0);
    f5 = BITSF(a2);
    ST32(s7+4, a1);
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f0);
    f3 = (float)(s32)FBITS(f5);
    f7 = BITSF(LD32(s2+16));
    f0 = BITSF(LD32(s2+20));
    f6 = f6 - f9;
    f4 = f4 - f8;
    f0 = f0 - f7;
    f1 = f1 * f21;
    f2 = f2 * f21;
    f3 = f3 * f21;
    a1 = a1 + a0;
    f1 = f1 * f6;
    f2 = f2 * f4;
    f3 = f3 * f0;
    ST32(s7+4, a1);
    f9 = f9 + f1;
    f8 = f8 + f2;
    f7 = f7 + f3;
    ST32(s5+23232, a0);
    goto L_088EE7D8;
L_088EE7D8:;
    ST32(sp, FBITS(f9));
    ST32(sp+4, FBITS(f8));
    ST32(sp+8, FBITS(f7));
    goto L_088EE1D8;
L_088EE7E8:;
    a1 = LD32(s7+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a1 = a1 + v1;
    v0 = v0 + a0;
    v0 = v0 + a1;
    a2 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + a2;
    a0 = a0 + a1;
    a3 = a0 >> 1;
    v1 = v1 >> 1;
    v0 = v0 >> 1;
    f0 = BITSF(v1);
    f4 = BITSF(a3);
    f1 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f0 = (float)(s32)FBITS(f4);
    f3 = (float)(s32)FBITS(f1);
    a1 = a1 + a0;
    f2 = f2 * f21;
    f0 = f0 * f21;
    f3 = f3 * f21;
    ST32(s7+4, a1);
    f2 = f2 * f25;
    f0 = f0 * f25;
    f3 = f3 * f25;
    ST32(s5+23232, a0);
    f9 = f2 + f24;
    f7 = f0 + f24;
    f8 = f3 + f24;
    goto L_088EE7D8;
L_088EE87C:;
    a0 = LD32(a0);
    a2 = a1 + 0;
    a3 = s0 + 0;
    a1 = a0 + 0;
    { rv_t r_ = func_08984530(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EE890;
L_088EE890:;
    goto L_088EE164;
}

/* 088EE898 */
rv_t func_088EE898(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_088EE898:;
    v1 = a1 >> 24;
    v0 = a1 >> 25;
    a3 = v1 & 0x1;
    f1 = BITSF(v1);
    a3 = a3 | v0;
    v0 = D_08B44DDC - (19932);
    a2 = a1 + 0;
    ST32(v0+19932, FBITS(f12));
    a1 = D_08B44DD4 - (19924);
    v0 = D_08B44DD8 - (19928);
    t0 = D_08B44DE4 - (19940);
    f0 = (float)(s32)FBITS(f1);
    ST32(a1+19924, a0);
    cnd_ = (s32)v1 < 0;
    ST32(v0+19928, FBITS(f12));
    if (cnd_) { goto L_088EE8FC; }
    goto L_088EE8D4;
L_088EE8D4:;
    v0 = D_08B44DE0 - (19936);
    ST32(v0+19936, FBITS(f0));
    v0 = 1;
    ST32(t0+19940, a2);
    cnd_ = a0 == v0;
    a2 = (a2 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    if (cnd_) { goto L_088EE8F4; }
    goto L_088EE8EC;
L_088EE8EC:;
    return (rv_t){ v0, v1, f0 };
L_088EE8F4:;
    ST32(t0+19940, a2);
    return (rv_t){ v0, v1, f0 };
L_088EE8FC:;
    f1 = BITSF(a3);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088EE8D4;
}

/* 088EE90C */
u32 func_088EE90C(void)
{
    u32 v0 = 0;
L_088EE90C:;
    v0 = D_08B44DD4 - (19924);
    ST32(v0+19924, 0);
    return v0;
}

/* 088EE918 */
void func_088EE918(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EE918:;
    sp = sp - 16;
    func_088EE9DC();
    goto L_088EE928;
L_088EE928:;
    func_088EEB84();
    goto L_088EE930;
L_088EE930:;
    func_0891559C();
    goto L_088EE938;
L_088EE938:;
    sp = sp + 16;
    return;
}

/* 088EE944 */
void func_088EE944(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EE944:;
    v0 = D_08B44DE8 - (19944);
    v1 = LD_U8(v0+19944);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088EE964; }
    goto L_088EE958;
L_088EE958:;
    goto L_088EE95C;
L_088EE95C:;
    sp = sp + 16;
    return;
L_088EE964:;
    func_088EEBEC();
    goto L_088EE96C;
L_088EE96C:;
    goto L_088EE95C;
}

/* 088EE974 */
void func_088EE974(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EE974:;
    sp = sp - 16;
    v0 = D_08B44DE9 - (19945);
    v1 = LD_U8(v0+19945);
    cnd_ = v1 != 0;
    v0 = D_08B44DEA - (19946);
    if (cnd_) { goto L_088EE998; }
    goto L_088EE98C;
L_088EE98C:;
    goto L_088EE990;
L_088EE990:;
    sp = sp + 16;
    return;
L_088EE998:;
    a0 = LD_U8(v0+19946);
    func_089155A4();
    goto L_088EE9A0;
L_088EE9A0:;
    goto L_088EE990;
}

/* 088EE9A8 */
void func_088EE9A8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EE9A8:;
    sp = sp - 16;
    v0 = D_08B44DD4 - (19924);
    v1 = LD32(v0+19924);
    cnd_ = v1 != 0;
    v0 = D_08B44DE4 - (19940);
    if (cnd_) { goto L_088EE9CC; }
    goto L_088EE9C0;
L_088EE9C0:;
    goto L_088EE9C4;
L_088EE9C4:;
    sp = sp + 16;
    return;
L_088EE9CC:;
    a0 = LD32(v0+19940);
    func_0891552C(a0);
    goto L_088EE9D4;
L_088EE9D4:;
    goto L_088EE9C4;
}

/* 088EE9DC */
void func_088EE9DC(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EE9DC:;
    sp = sp - 16;
    v0 = func_088EE90C();
    goto L_088EE9EC;
L_088EE9EC:;
    func_088EEBA0();
    goto L_088EE9F4;
L_088EE9F4:;
    sp = sp + 16;
    return;
}

/* 088EEA00 */
void func_088EEA00(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EEA00:;
    sp = sp - 16;
    func_088EE9DC();
    goto L_088EEA10;
L_088EEA10:;
    func_088EEBD0();
    goto L_088EEA18;
L_088EEA18:;
    sp = sp + 16;
    return;
}

/* 088EEA24 */
void func_088EEA24(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EEA24:;
    sp = sp - 16;
    func_088EEA40();
    goto L_088EEA34;
L_088EEA34:;
    sp = sp + 16;
    return;
}

/* 088EEA40 */
void func_088EEA40(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EEA40:;
    sp = sp - 16;
    a0 = D_08B44DD4 - (19924);
    v1 = LD32(a0+19924);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088EEB30; }
    goto L_088EEA58;
L_088EEA58:;
    a2 = D_08B44DDC - (19932);
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(a2+19932));
    f1 = BITSF(LD32(v0-31328));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(a2+19932, FBITS(f0));
    if (cnd_) { goto L_088EEA94; }
    goto L_088EEA80;
L_088EEA80:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_088EEB7C; }
    goto L_088EEA8C;
L_088EEA8C:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088EEB6C; }
    goto L_088EEA94;
L_088EEA94:;
    v0 = D_08B44DD8 - (19928);
    f2 = BITSF(LD32(v0+19928));
    f0 = BITSF(0);
    a1 = D_08B44DE4 - (19940);
    v0 = LD32(a1+19940);
    fcc = FCMP(f2, f0, 2);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    cnd_ = fcc;
    ST32(a1+19940, v0);
    if (cnd_) { goto L_088EEB50; }
    goto L_088EEAB8;
L_088EEAB8:;
    v1 = LD32(a0+19924);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_088EEAD0; }
    goto L_088EEAC8;
L_088EEAC8:;
    cnd_ = v1 == v0;
    f0 = BITSF(LD32(a2+19932));
    if (cnd_) { goto L_088EEB48; }
    goto L_088EEAD0;
L_088EEAD0:;
    f0 = BITSF(LD32(a2+19932));
    v0 = D_08AECE88 - (-12664);
    f1 = BITSF(LD32(v0-12664));
    f0 = f0 / f2;
    f1 = f1 - f0;
    goto L_088EEAE4;
L_088EEAE4:;
    v0 = D_08B44DE0 - (19936);
    f0 = BITSF(LD32(v0+19936));
    a0 = a1 + 19940;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a0 + 0;
    if (cnd_) { goto L_088EEB38; }
    goto L_088EEB08;
L_088EEB08:;
    v0 = D_08AECE8C - (-12660);
    f0 = BITSF(LD32(v0-12660));
    f0 = f1 + f0;
    goto L_088EEB14;
L_088EEB14:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(a1);
    v1 = FBITS(f0);
    v1 = v1 << 24;
    v0 = v0 | v1;
    ST32(a0, v0);
    goto L_088EEB30;
L_088EEB30:;
    sp = sp + 16;
    return;
L_088EEB38:;
    v0 = D_08AECE8C - (-12660);
    f0 = BITSF(LD32(v0-12660));
    f0 = f1 - f0;
    goto L_088EEB14;
L_088EEB48:;
    f1 = f0 / f2;
    goto L_088EEAE4;
L_088EEB50:;
    v1 = LD32(a0+19924);
    v0 = 2;
    cnd_ = v1 == v0;
    f1 = f0;
    if (cnd_) { goto L_088EEAE4; }
    goto L_088EEB60;
L_088EEB60:;
    v0 = D_08AECE88 - (-12664);
    f1 = BITSF(LD32(v0-12664));
    goto L_088EEAE4;
L_088EEB6C:;
    v0 = func_088EE90C();
    goto L_088EEB74;
L_088EEB74:;
    goto L_088EEB30;
L_088EEB7C:;
    ST32(a2+19932, FBITS(f2));
    goto L_088EEA94;
}

/* 088EEB84 */
void func_088EEB84(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EEB84:;
    sp = sp - 16;
    func_089155AC();
    goto L_088EEB94;
L_088EEB94:;
    sp = sp + 16;
    return;
}

/* 088EEBA0 */
void func_088EEBA0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
L_088EEBA0:;
    v0 = D_08AECE90 - (-12656);
    f0 = BITSF(LD32(v0-12656));
    v1 = D_08B16178 - (24952);
    v1 = v1 + 24952;
    a0 = 0 + 0;
    goto L_088EEBB4;
L_088EEBB4:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088EEBB4; }
    goto L_088EEBC8;
L_088EEBC8:;
    return;
}

/* 088EEBD0 */
void func_088EEBD0(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EEBD0:;
    sp = sp - 16;
    func_089155B4();
    goto L_088EEBE0;
L_088EEBE0:;
    sp = sp + 16;
    return;
}

/* 088EEBEC */
void func_088EEBEC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EEBEC:;
    a0 = D_08B16168 - (24936);
    v1 = a0 + 24936;
    v0 = D_08AECE94 - (-12652);
    f15 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v0-12652));
    sp = sp - 16;
    fcc = FCMP(f15, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088EEC20; }
    goto L_088EEC14;
L_088EEC14:;
    goto L_088EEC18;
L_088EEC18:;
    sp = sp + 16;
    return;
L_088EEC20:;
    f12 = BITSF(LD32(a0+24936));
    f14 = BITSF(LD32(v1+8));
    f13 = BITSF(LD32(v1+4));
    func_089155BC();
    goto L_088EEC30;
L_088EEC30:;
    goto L_088EEC18;
}

/* 088EEC38 */
void func_088EEC38(float f12)
{
    u32 v0 = 0;
L_088EEC38:;
    v0 = D_08B16174 - (24948);
    ST32(v0+24948, FBITS(f12));
    return;
}

/* 088EEC44 */
void func_088EEC44(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_088EEC44:;
    v0 = D_08AECE98 - (-12648);
    f0 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(v0-12648));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v1 = D_08AECE9C - (-12644);
    if (cnd_) { goto L_088EEE00; }
    goto L_088EEC68;
L_088EEC68:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f1 + f0;
    goto L_088EEC70;
L_088EEC70:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v0-12648));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a2 << 8;
    if (cnd_) { goto L_088EEDF4; }
    goto L_088EEC98;
L_088EEC98:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f2 + f0;
    goto L_088EECA0;
L_088EECA0:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v0-12648));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_088EEDE8; }
    goto L_088EECCC;
L_088EECCC:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f1 + f0;
    goto L_088EECD4;
L_088EECD4:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v0-12648));
    v0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_088EEDDC; }
    goto L_088EED00;
L_088EED00:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f1 + f0;
    goto L_088EED08;
L_088EED08:;
    f0 = BITSF(F2I(f0, 1));
    a2 = FBITS(f0);
    a1 = a1 + a2;
    v0 = a1 >> 16;
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    a2 = D_08B16168 - (24936);
    t0 = a2 + 24936;
    cnd_ = (s32)v1 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088EEDC0; }
    goto L_088EED30;
L_088EED30:;
    a0 = D_08AECEA0 - (-12640);
    f0 = BITSF(LD32(a0-12640));
    v0 = a1 >> 8;
    v1 = v0 & 0xff;
    f0 = f1 * f0;
    f2 = BITSF(v1);
    a3 = a2 + 24936;
    f1 = (float)(s32)FBITS(f2);
    cnd_ = (s32)v1 < 0;
    ST32(t0, FBITS(f0));
    if (cnd_) { goto L_088EEDA4; }
    goto L_088EED58;
L_088EED58:;
    f0 = BITSF(LD32(a0-12640));
    v1 = a1 & 0xff;
    f2 = BITSF(v1);
    f0 = f1 * f0;
    a2 = a2 + 24936;
    f1 = (float)(s32)FBITS(f2);
    cnd_ = (s32)v1 < 0;
    ST32(a3+4, FBITS(f0));
    if (cnd_) { goto L_088EED88; }
    goto L_088EED78;
L_088EED78:;
    f0 = BITSF(LD32(a0-12640));
    f0 = f1 * f0;
    ST32(a2+8, FBITS(f0));
    return;
L_088EED88:;
    v0 = a1 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088EED78;
L_088EEDA4:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088EED58;
L_088EEDC0:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_088EED30;
L_088EEDDC:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f1 - f0;
    goto L_088EED08;
L_088EEDE8:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f1 - f0;
    goto L_088EECD4;
L_088EEDF4:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f2 - f0;
    goto L_088EECA0;
L_088EEE00:;
    f0 = BITSF(LD32(v1-12644));
    f0 = f1 - f0;
    goto L_088EEC70;
}

/* 088EEE0C */
void func_088EEE0C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
L_088EEE0C:;
    v1 = D_08B4500C - (20492);
    v0 = LD_U8(v1+20492);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088EF024; }
    goto L_088EEE1C;
L_088EEE1C:;
    ST8(v1+20492, v0);
    v0 = D_08AECEA8 - (-12632);
    v1 = D_08AECEAC - (-12628);
    f7 = BITSF(LD32(v0-12632));
    f8 = BITSF(LD32(v1-12628));
    v0 = D_08AECEB0 - (-12624);
    v1 = D_08AECEB4 - (-12620);
    t3 = D_08B25AC0 - (23232);
    f6 = BITSF(LD32(v0-12624));
    f9 = BITSF(LD32(v1-12620));
    v0 = D_08B44E74 - (20084);
    v1 = D_08B44DEC - (19948);
    a2 = v0 + 20084;
    t1 = v1 + 19948;
    t0 = 0 + 0;
    a3 = t3 + 23232;
    goto L_088EEE5C;
L_088EEE5C:;
    ST32(t1, t0);
    goto L_088EEE60;
L_088EEE60:;
    v0 = LD32(a3);
    goto L_088EEE64;
L_088EEE64:;
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    v0 = v0 >> 1;
    f0 = BITSF(v0);
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    a1 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a0 = a0 + v1;
    v0 = v0 + a1;
    v0 = v0 + a0;
    f2 = (float)(s32)FBITS(f0);
    f3 = (float)(s32)FBITS(f1);
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    f2 = f2 * f6;
    f3 = f3 * f6;
    f0 = (float)(s32)FBITS(f1);
    a0 = a0 + v0;
    f2 = f2 + f2;
    f3 = f3 + f3;
    f0 = f0 * f6;
    ST32(a3+4, a0);
    f5 = f2 + f7;
    f3 = f3 + f7;
    f0 = f0 + f0;
    ST32(a3, v0);
    f1 = f5 * f5;
    f2 = f3 * f3;
    f4 = f0 + f7;
    ST32(a2, FBITS(f5));
    f1 = f1 + f2;
    f0 = f4 * f4;
    ST32(a2+4, FBITS(f3));
    f2 = f1 + f0;
    fcc = FCMP(f8, f2, 12);
    cnd_ = fcc;
    ST32(a2+8, FBITS(f4));
    if (cnd_) { goto L_088EEE60; }
    goto L_088EEF20;
L_088EEF20:;
    fcc = FCMP(f2, f9, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a3); goto L_088EEE64; }
    goto L_088EEF30;
L_088EEF30:;
    f1 = sqrtf(f2);
    t0 = t0 + 1;
    v0 = (s32)t0 < 16;
    t1 = t1 + 4;
    f2 = f8 / f1;
    f0 = f4 * f2;
    f1 = f5 * f2;
    f2 = f3 * f2;
    ST32(a2+8, FBITS(f0));
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    cnd_ = v0 != 0;
    a2 = a2 + 12;
    if (cnd_) { goto L_088EEE5C; }
    goto L_088EEF64;
L_088EEF64:;
    t0 = t0 - 1;
    cnd_ = t0 == 0;
    v0 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088EEFD0; }
    goto L_088EEF70;
L_088EEF70:;
    t2 = v0 + 23232;
    a1 = LD32(t3+23232);
    v0 = D_08B44DEC - (19948);
    a3 = LD32(t2+4);
    t1 = v0 + 19948;
    v1 = t0 << 2;
    a2 = v1 + t1;
    goto L_088EEF8C;
L_088EEF8C:;
    v1 = (u32)((s32)a1 >> 16);
    v0 = a1 << 16;
    a1 = v0 + v1;
    a1 = a1 + a3;
    v0 = (a1 >> 1) & 0xf;
    v0 = v0 << 2;
    v0 = v0 + t1;
    a0 = LD32(a2);
    v1 = LD32(v0);
    t0 = t0 - 1;
    a3 = a3 + a1;
    ST32(a2, v1);
    a2 = a2 - 4;
    cnd_ = t0 != 0;
    ST32(v0, a0);
    if (cnd_) { goto L_088EEF8C; }
    goto L_088EEFC8;
L_088EEFC8:;
    ST32(t2+4, a3);
    ST32(t3+23232, a1);
    goto L_088EEFD0;
L_088EEFD0:;
    v0 = D_08B44F34 - (20276);
    t1 = v0 + 20276;
    v1 = D_08B44DEC - (19948);
    a2 = v1 + 19948;
    a3 = t1 - 192;
    a1 = 0 + 0;
    t0 = 17;
    goto L_088EEFEC;
L_088EEFEC:;
    v0 = a1 + a3;
    a0 = LD32(a2);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v1 = a1 + t1;
    t0 = t0 - 1;
    ST32(a2+64, a0);
    a1 = a1 + 12;
    a2 = a2 + 4;
    ST32(v1+8, FBITS(f0));
    ST32(v1, FBITS(f1));
    cnd_ = (s32)t0 >= 0;
    ST32(v1+4, FBITS(f2));
    if (cnd_) { goto L_088EEFEC; }
    goto L_088EF024;
L_088EF024:;
    return;
}

/* 088EF02C */
rv_t func_088EF02C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
L_088EF02C:;
    v0 = D_08AECEB8 - (-12616);
    f0 = BITSF(LD32(v0-12616));
    v0 = D_08AECEBC - (-12612);
    f3 = BITSF(LD32(v0-12612));
    f12 = f12 + f0;
    a1 = D_08B44DEC - (19948);
    a1 = a1 + 19948;
    f1 = BITSF(F2I(f12, 1));
    v0 = FBITS(f1);
    f0 = (float)(s32)FBITS(f1);
    v1 = v0 & 0xf;
    v0 = v1 + 1;
    f12 = f12 - f0;
    v1 = v1 << 2;
    v0 = v0 << 2;
    v0 = v0 + a1;
    v1 = v1 + a1;
    a2 = LD32(v1);
    a3 = LD32(v0);
    f1 = f12 + f12;
    v0 = D_08AECED0 - (-12592);
    v1 = a2 << 1;
    f0 = BITSF(LD32(v0-12592));
    a1 = a3 << 1;
    v1 = v1 + a2;
    a1 = a1 + a3;
    a2 = D_08B44E74 - (20084);
    a2 = a2 + 20084;
    v1 = v1 << 2;
    a1 = a1 << 2;
    f9 = f0 - f1;
    a1 = a1 + a2;
    v1 = v1 + a2;
    f0 = f12 - f3;
    f6 = BITSF(LD32(v1));
    f5 = BITSF(LD32(a1));
    f4 = f12 * f12;
    f7 = f12 * f6;
    cnd_ = a0 == 0;
    f8 = f0 * f5;
    if (cnd_) { goto L_088EF120; }
    goto L_088EF0CC;
L_088EF0CC:;
    v0 = D_08AECEC0 - (-12608);
    f2 = BITSF(LD32(v0-12608));
    v0 = D_08AECECC - (-12596);
    f1 = BITSF(LD32(v0-12596));
    v0 = D_08AECEC8 - (-12600);
    f0 = BITSF(LD32(v0-12600));
    f2 = f4 * f2;
    f1 = f4 * f1;
    f0 = f12 * f0;
    v0 = D_08AECEC4 - (-12604);
    f2 = f3 - f2;
    f3 = f4 * f12;
    f0 = f0 - f1;
    f1 = BITSF(LD32(v0-12604));
    f3 = f3 * f1;
    f0 = f0 + f3;
    f2 = f2 + f3;
    f0 = f5 * f0;
    f2 = f6 * f2;
    f2 = f2 - f0;
    ST32(a0, FBITS(f2));
    goto L_088EF120;
L_088EF120:;
    f0 = f4 * f9;
    f1 = f8 - f7;
    f0 = f0 * f1;
    f0 = f7 + f0;
    return (rv_t){ v0, v1, f0 };
}

/* 088EF134 */
float func_088EF134(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088EF134:;
    sp = sp - 48;
    v0 = D_08AECEE4 - (-12572);
    t2 = D_08B44DEC - (19948);
    t2 = t2 + 19948;
    f22 = BITSF(0);
    f26 = f22;
    f25 = f22;
    f29 = f22;
    f0 = BITSF(LD32(v0-12572));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f1 = f1 + f0;
    f2 = f2 + f0;
    f3 = f3 + f0;
    f4 = BITSF(F2I(f1, 1));
    f5 = BITSF(F2I(f2, 1));
    f6 = BITSF(F2I(f3, 1));
    v1 = FBITS(f4);
    f0 = (float)(s32)FBITS(f4);
    f4 = (float)(s32)FBITS(f5);
    v0 = v1 & 0xf;
    v1 = v0 + 1;
    v0 = v0 << 2;
    v0 = v0 + t2;
    v1 = v1 << 2;
    v1 = v1 + t2;
    t0 = LD32(v0);
    v0 = FBITS(f5);
    t1 = LD32(v1);
    f11 = f1 - f0;
    t3 = v0 & 0xf;
    v1 = t1 + t3;
    v0 = t0 + t3;
    v1 = v1 << 2;
    v1 = v1 + t2;
    v0 = v0 << 2;
    v0 = v0 + t2;
    t6 = LD32(v1);
    v1 = FBITS(f6);
    t5 = LD32(v0);
    v0 = D_08AECEE8 - (-12568);
    t4 = v1 & 0xf;
    a2 = t5 + t4;
    a3 = t6 + t4;
    f27 = BITSF(LD32(v0-12568));
    v1 = a2 << 1;
    a0 = a3 << 1;
    v1 = v1 + a2;
    a0 = a0 + a3;
    v0 = D_08B44E74 - (20084);
    a3 = v0 + 20084;
    v1 = v1 << 2;
    a0 = a0 << 2;
    f14 = f2 - f4;
    v0 = v1 + a3;
    f0 = (float)(s32)FBITS(f6);
    v1 = a0 + a3;
    f17 = f11 - f27;
    f9 = BITSF(LD32(v0));
    f20 = BITSF(LD32(v0+4));
    f13 = BITSF(LD32(v1));
    f23 = BITSF(LD32(v1+4));
    f8 = f3 - f0;
    f5 = f14 * f20;
    f2 = f14 * f23;
    f4 = f11 * f9;
    f3 = f17 * f13;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v1+8));
    f4 = f4 + f5;
    f3 = f3 + f2;
    f0 = f8 * f0;
    f1 = f8 * f1;
    f2 = f11 + f11;
    v0 = D_08AECEEC - (-12564);
    f5 = BITSF(LD32(v0-12564));
    f6 = f4 + f0;
    f7 = f3 + f1;
    f2 = f5 - f2;
    f0 = f11 * f11;
    f1 = f8 + f8;
    f3 = f14 + f14;
    f4 = f7 - f6;
    f12 = f0 * f2;
    t3 = t3 + 1;
    f3 = f5 - f3;
    f0 = f14 * f14;
    f5 = f5 - f1;
    f4 = f12 * f4;
    f1 = f8 * f8;
    t1 = t1 + t3;
    t0 = t0 + t3;
    t0 = t0 << 2;
    t1 = t1 << 2;
    t1 = t1 + t2;
    t0 = t0 + t2;
    t2 = LD32(t0);
    a2 = a1 + 0;
    f16 = f0 * f3;
    f24 = f1 * f5;
    t1 = LD32(t1);
    f10 = f6 + f4;
    f19 = f14 - f27;
    t0 = t4 + 1;
    cnd_ = a1 == 0;
    f21 = f8 - f27;
    if (cnd_) { goto L_088EF330; }
    goto L_088EF308;
L_088EF308:;
    f0 = f6 - f7;
    f2 = f13 - f9;
    f1 = f11 * f17;
    v0 = D_08AECEF0 - (-12560);
    f2 = f12 * f2;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-12560));
    f2 = f9 + f2;
    f1 = f1 * f0;
    f22 = f1 + f2;
    goto L_088EF330;
L_088EF330:;
    a1 = t1 + t4;
    a0 = t2 + t4;
    v1 = a1 << 1;
    v0 = a0 << 1;
    v1 = v1 + a1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = v1 << 2;
    v0 = v0 + a3;
    a1 = v1 + a3;
    f9 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v0+4));
    f15 = BITSF(LD32(a1));
    f18 = BITSF(LD32(a1+4));
    f3 = f11 * f9;
    f5 = f19 * f13;
    f2 = f17 * f15;
    f4 = f19 * f18;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1+8));
    f3 = f3 + f5;
    f1 = f8 * f1;
    f0 = f8 * f0;
    f2 = f2 + f4;
    f6 = f3 + f1;
    f7 = f2 + f0;
    f0 = f7 - f6;
    f0 = f12 * f0;
    cnd_ = a2 == 0;
    f8 = f6 + f0;
    if (cnd_) { goto L_088EF3D0; }
    goto L_088EF3A8;
L_088EF3A8:;
    f0 = f6 - f7;
    f2 = f15 - f9;
    f1 = f11 * f17;
    v0 = D_08AECEF0 - (-12560);
    f2 = f12 * f2;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-12560));
    f2 = f9 + f2;
    f1 = f1 * f0;
    f25 = f1 + f2;
    goto L_088EF3D0;
L_088EF3D0:;
    f0 = f8 - f10;
    f0 = f16 * f0;
    cnd_ = a2 == 0;
    f28 = f10 + f0;
    if (cnd_) { goto L_088EF430; }
    goto L_088EF3E0;
L_088EF3E0:;
    f5 = f23 - f20;
    f0 = f10 - f8;
    f2 = f18 - f13;
    f1 = f14 * f19;
    f5 = f12 * f5;
    f4 = f27 - f16;
    f2 = f12 * f2;
    f1 = f1 * f0;
    f5 = f20 + f5;
    v0 = D_08AECEF0 - (-12560);
    f0 = BITSF(LD32(v0-12560));
    f2 = f13 + f2;
    f3 = f25 - f22;
    f1 = f1 * f0;
    f4 = f4 * f5;
    f2 = f16 * f2;
    f3 = f16 * f3;
    f1 = f1 + f4;
    f29 = f22 + f3;
    f26 = f1 + f2;
    goto L_088EF430;
L_088EF430:;
    a0 = t5 + t0;
    a1 = t6 + t0;
    v0 = a0 << 1;
    v1 = a1 << 1;
    v0 = v0 + a0;
    v1 = v1 + a1;
    v0 = v0 << 2;
    v1 = v1 << 2;
    v0 = v0 + a3;
    v1 = v1 + a3;
    f8 = BITSF(LD32(v0));
    f18 = BITSF(LD32(v0+4));
    f9 = BITSF(LD32(v1));
    f23 = BITSF(LD32(v1+4));
    f3 = f11 * f8;
    f5 = f14 * f18;
    f2 = f17 * f9;
    f4 = f14 * f23;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v1+8));
    f3 = f3 + f5;
    f0 = f21 * f0;
    f2 = f2 + f4;
    f1 = f21 * f1;
    f6 = f3 + f0;
    f7 = f2 + f1;
    f0 = f7 - f6;
    f0 = f12 * f0;
    cnd_ = a2 == 0;
    f10 = f6 + f0;
    if (cnd_) { goto L_088EF4D0; }
    goto L_088EF4A8;
L_088EF4A8:;
    f0 = f6 - f7;
    f2 = f9 - f8;
    f1 = f11 * f17;
    v0 = D_08AECEF0 - (-12560);
    f2 = f12 * f2;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-12560));
    f2 = f8 + f2;
    f1 = f1 * f0;
    f22 = f1 + f2;
    goto L_088EF4D0;
L_088EF4D0:;
    a1 = t1 + t0;
    a0 = t2 + t0;
    v0 = a1 << 1;
    v1 = a0 << 1;
    v0 = v0 + a1;
    v1 = v1 + a0;
    v0 = v0 << 2;
    v1 = v1 << 2;
    a1 = v0 + a3;
    v0 = v1 + a3;
    f9 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v0+4));
    f15 = BITSF(LD32(a1));
    f20 = BITSF(LD32(a1+4));
    f3 = f11 * f9;
    f5 = f19 * f13;
    f2 = f17 * f15;
    f4 = f19 * f20;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1+8));
    f3 = f3 + f5;
    f2 = f2 + f4;
    f0 = f21 * f0;
    f1 = f21 * f1;
    f7 = f2 + f0;
    f6 = f3 + f1;
    f0 = f7 - f6;
    f0 = f12 * f0;
    cnd_ = a2 == 0;
    f8 = f6 + f0;
    if (cnd_) { goto L_088EF570; }
    goto L_088EF548;
L_088EF548:;
    f0 = f6 - f7;
    f2 = f11 * f17;
    f1 = f15 - f9;
    v0 = D_08AECEF0 - (-12560);
    f2 = f2 * f0;
    f1 = f12 * f1;
    f0 = BITSF(LD32(v0-12560));
    f1 = f9 + f1;
    f2 = f2 * f0;
    f25 = f2 + f1;
    goto L_088EF570;
L_088EF570:;
    f0 = f8 - f10;
    f0 = f16 * f0;
    cnd_ = a2 == 0;
    f5 = f10 + f0;
    if (cnd_) { goto L_088EF5F0; }
    goto L_088EF580;
L_088EF580:;
    f0 = f23 - f18;
    f2 = f10 - f8;
    f1 = f14 * f19;
    f3 = f20 - f13;
    f0 = f12 * f0;
    f4 = f27 - f16;
    f1 = f1 * f2;
    f3 = f12 * f3;
    f0 = f18 + f0;
    v0 = D_08AECEF0 - (-12560);
    f2 = BITSF(LD32(v0-12560));
    f3 = f13 + f3;
    f4 = f4 * f0;
    f1 = f1 * f2;
    f0 = f25 - f22;
    f3 = f16 * f3;
    f1 = f1 + f4;
    f0 = f16 * f0;
    f1 = f1 + f3;
    f0 = f22 + f0;
    f1 = f1 - f26;
    f0 = f0 - f29;
    f1 = f24 * f1;
    f0 = f24 * f0;
    f1 = f26 + f1;
    f0 = f29 + f0;
    ST32(a2+4, FBITS(f1));
    ST32(a2, FBITS(f0));
    goto L_088EF5F0;
L_088EF5F0:;
    f0 = f5 - f28;
    f0 = f24 * f0;
    f0 = f28 + f0;
    sp = sp + 48;
    return f0;
}

/* 088EF62C */
void func_088EF62C(void)
{
L_088EF62C:;
    return;
}

/* 088EF634 */
rv_t func_088EF634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EF634:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088EF62C();
    goto L_088EF648;
L_088EF648:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088EF654 */
void func_088EF654(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088EF654:;
    sp = sp - 32;
    s3 = (u32)-1;
    s2 = 15;
    func_08918098(a1, a2, a3, t0, t1, t2, t3);
    goto L_088EF67C;
L_088EF67C:;
    a0 = 772;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EF684;
L_088EF684:;
    s4 = v0 + 4;
    v0 = 16;
    ST32(s4-4, v0);
    s1 = s4 + 0;
    s0 = s1 + 8;
    goto L_088EF698;
L_088EF698:;
    ST32(s0+24, 0);
    a0 = s0 + 0;
    s2 = s2 - 1;
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EF6B0;
L_088EF6B0:;
    ST32(s1, 0);
    a0 = s0 + 0;
    ST32(s1+4, 0);
    s1 = s1 + 48;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EF6C4;
L_088EF6C4:;
    cnd_ = s2 != s3;
    s0 = s1 + 8;
    if (cnd_) { goto L_088EF698; }
    goto L_088EF6CC;
L_088EF6CC:;
    v0 = D_08B45010 - (20496);
    ST32(v0+20496, s4);
    sp = sp + 32;
    return;
}

/* 088EF6F4 */
void func_088EF6F4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EF6F4:;
    sp = sp - 16;
    s2 = D_08B45010 - (20496);
    func_089180DC(a1, a2, a3, t0, t1, t2, t3);
    goto L_088EF710;
L_088EF710:;
    v0 = LD32(s2+20496);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088EF754; }
    goto L_088EF71C;
L_088EF71C:;
    s1 = 0 + 0;
    s0 = 0 + 0;
    v0 = LD32(s2+20496);
    goto L_088EF728;
L_088EF728:;
    s1 = s1 + 1;
    v0 = v0 + s0;
    ST32(v0, 0);
    a0 = v0 + 8;
    s0 = s0 + 48;
    ST32(v0+4, 0);
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EF744;
L_088EF744:;
    v0 = s1 < 0x10u;
    cnd_ = v0 != 0;
    v0 = LD32(s2+20496);
    if (cnd_) { goto L_088EF728; }
    goto L_088EF750;
L_088EF750:;
    goto L_088EF754;
L_088EF754:;
    sp = sp + 16;
    return;
}

/* 088EF768 */
void func_088EF768(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EF768:;
    sp = sp - 16;
    s1 = D_08B45010 - (20496);
    func_089180F8();
    goto L_088EF780;
L_088EF780:;
    a0 = LD32(s1+20496);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+20496, 0); goto L_088EF7C8; }
    goto L_088EF78C;
L_088EF78C:;
    v1 = LD32(a0-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 4;
    s0 = a0 + v0;
    a0 = LD32(s1+20496);
    goto L_088EF7A4;
L_088EF7A4:;
    cnd_ = a0 == s0;
    s0 = s0 - 48;
    if (cnd_) { goto L_088EF7BC; }
    goto L_088EF7AC;
L_088EF7AC:;
    a0 = s0 + 8;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EF7B4;
L_088EF7B4:;
    a0 = LD32(s1+20496);
    goto L_088EF7A4;
L_088EF7BC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088EF7C4;
L_088EF7C4:;
    ST32(s1+20496, 0);
    goto L_088EF7C8;
L_088EF7C8:;
    sp = sp + 16;
    return;
}

/* 088EF7DC */
void func_088EF7DC(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088EF7DC:;
    sp = sp - 16;
    v0 = D_08AECEF4 - (-12556);
    s2 = a0 + 0;
    f0 = BITSF(LD32(a1+248));
    f1 = BITSF(LD32(v0-12556));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    s1 = a1 + 0;
    if (cnd_) { goto L_088EF894; }
    goto L_088EF810;
L_088EF810:;
    a3 = 0 + 0;
    a2 = 0 + 0;
    t1 = D_08B45010 - (20496);
    t0 = 0 + 0;
    a1 = LD32(t1+20496);
    v0 = a3 << 1;
    goto L_088EF828;
L_088EF828:;
    v0 = v0 + a3;
    v0 = v0 << 4;
    a0 = a1 + t0;
    v1 = a1 + v0;
    v0 = LD32(a0);
    cnd_ = s1 == v0;
    t0 = t0 + 48;
    if (cnd_) { goto L_088EF888; }
    goto L_088EF844;
L_088EF844:;
    v0 = LD32(a0+4);
    v1 = LD32(v1+4);
    v0 = v0 < v1;
    if (v0 != 0) a3 = a2;
    a2 = a2 + 1;
    v0 = a2 < 0x10u;
    cnd_ = v0 != 0;
    v0 = a3 << 1;
    if (cnd_) { goto L_088EF828; }
    goto L_088EF864;
L_088EF864:;
    s0 = a3 << 1;
    s0 = s0 + a3;
    s0 = s0 << 4;
    s0 = a1 + s0;
    ST32(s0, 0);
    a0 = s0 + 8;
    ST32(s0+4, 0);
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088EF884;
L_088EF884:;
    a0 = s0 + 0;
    goto L_088EF888;
L_088EF888:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    func_088EF8AC(a0, a1, a2);
    goto L_088EF894;
L_088EF894:;
    sp = sp + 16;
    return;
}

/* 088EF8AC */
void func_088EF8AC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[2064] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 2064);
L_088EF8AC:;
    sp = sp - 2064;
    s3 = a1 + 0;
    t1 = s3 + 16;
    s2 = a1 + 32;
    t4 = D_08B15A04 - (23044);
    s1 = a0 + 0;
    t5 = D_08B159FC - (23036);
    a1 = LD32(a1+32);
    a3 = LD32(s2+4);
    v1 = LD32(s2+16);
    t2 = LD32(s2+32);
    v0 = LD32(s2+8);
    t3 = LD32(s2+36);
    t0 = LD32(s2+20);
    ST32(sp+48, v1);
    ST32(sp+64, t2);
    ST32(sp+68, a3);
    ST32(sp+32, a1);
    ST32(sp+72, v0);
    ST32(sp+52, t0);
    ST32(sp+36, t3);
    v0 = LD32(s2+12);
    f3 = BITSF(LD32(s3));
    a0 = LD32(s2+24);
    ST32(sp+76, v0);
    f0 = BITSF(LD32(sp+48));
    f6 = BITSF(LD32(s3+4));
    f7 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(sp+64));
    f1 = f6 * f0;
    ST32(sp+64, a1);
    f11 = f7 * f2;
    f0 = BITSF(LD32(sp+68));
    v0 = FBITS(f1);
    f4 = BITSF(LD32(sp+52));
    f8 = f3 * f0;
    f0 = BITSF(LD32(sp+32));
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(LD32(sp+72));
    f2 = f3 * f0;
    f10 = BITSF(v0);
    v0 = LD32(s2+40);
    a1 = LD32(s2+28);
    a3 = LD32(s2+44);
    ST32(sp+56, a0);
    f9 = f3 * f1;
    v1 = FBITS(f2);
    ST32(sp+40, v0);
    f1 = f6 * f4;
    v0 = FBITS(f8);
    f0 = BITSF(LD32(sp+56));
    v1 = (v1 >> 0) & 0x7fffffff;
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = f6 * f0;
    f5 = BITSF(v1);
    f4 = BITSF(v0);
    v1 = FBITS(f1);
    v0 = FBITS(f9);
    f0 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+40));
    v1 = (v1 >> 0) & 0x7fffffff;
    v0 = (v0 >> 0) & 0x7fffffff;
    f8 = f7 * f0;
    f6 = f7 * f1;
    f3 = BITSF(v1);
    f0 = BITSF(v0);
    v1 = FBITS(f2);
    v0 = FBITS(f11);
    f4 = f4 + f3;
    v1 = (v1 >> 0) & 0x7fffffff;
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    f2 = BITSF(v0);
    v1 = FBITS(f8);
    v0 = FBITS(f6);
    f0 = f0 + f1;
    v1 = (v1 >> 0) & 0x7fffffff;
    v0 = (v0 >> 0) & 0x7fffffff;
    f5 = f5 + f10;
    f1 = BITSF(v1);
    f3 = BITSF(v0);
    f6 = BITSF(LD32(t1+8));
    f5 = f5 + f2;
    f4 = f4 + f1;
    f0 = f0 + f3;
    f1 = BITSF(LD32(s3+16));
    f2 = BITSF(LD32(t1+4));
    v0 = D_08B285AC - (-31316);
    f8 = f6 + f0;
    f3 = f1 + f5;
    f7 = f2 + f4;
    f1 = f1 - f5;
    f2 = f2 - f4;
    f6 = f6 - f0;
    v1 = LD32(v0-31316);
    a0 = LD32(t4+23044);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f7));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f8));
    ST32(sp+60, a1);
    ST32(sp+32, t2);
    ST32(sp+44, a3);
    ST32(s1, a2);
    cnd_ = a0 == 0;
    ST32(s1+4, v1);
    if (cnd_) { goto L_088EFAC0; }
    goto L_088EFA94;
L_088EFA94:;
    v0 = D_08B22E88 - (11912);
    a0 = 1;
    v1 = D_08B230B0 - (12464);
    v0 = v0 + 11912;
    ST8(v1+12464, a0);
    v1 = D_08B15A0C - (23052);
    ST32(t5+23036, v0);
    v0 = D_08B230A8 - (12456);
    ST32(t4+23044, 0);
    ST8(v0+12456, a0);
    ST8(v1+23052, a0);
    goto L_088EFAC0;
L_088EFAC0:;
    f6 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f12 = BITSF(LD32(sp+12));
    f8 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+8));
    f3 = f6 + f5;
    f2 = f8 + f7;
    v0 = D_08AECF00 - (-12544);
    f1 = f1 + f12;
    f0 = BITSF(LD32(v0-12544));
    v1 = LD32(t5+23036);
    f10 = f2 * f0;
    f9 = f3 * f0;
    f1 = f1 * f0;
    ST32(sp+104, FBITS(f10));
    ST32(sp+100, FBITS(f1));
    ST32(sp+96, FBITS(f9));
    f0 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f1 = f1 - f0;
    f4 = f10 - f4;
    f2 = f9 - f2;
    v0 = FBITS(f1);
    ST32(sp+84, FBITS(f1));
    v1 = FBITS(f2);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AECF04 - (-12540);
    f0 = BITSF(LD32(v0-12540));
    ST32(sp+80, FBITS(f2));
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    ST32(sp+88, FBITS(f4));
    if (cnd_) { goto L_088EFB8C; }
    goto L_088EFB64;
L_088EFB64:;
    f21 = f7 - f8;
    f20 = BITSF(0);
    fcc = FCMP(f21, f20, 2);
    cnd_ = fcc;
    f11 = f5 - f6;
    if (cnd_) { goto L_088EFB8C; }
    goto L_088EFB7C;
L_088EFB7C:;
    fcc = FCMP(f11, f20, 2);
    cnd_ = !fcc;
    f3 = BITSF(FBITS(f20) ^ 0x80000000u);
    if (cnd_) { goto L_088EFBCC; }
    goto L_088EFB8C;
L_088EFB8C:;
    goto L_088EFB90;
L_088EFB90:;
    sp = sp + 2064;
    return;
L_088EFBCC:;
    v0 = D_08AECF14 - (-12524);
    f6 = BITSF(LD32(v0-12524));
    v0 = D_08AECF18 - (-12520);
    f2 = BITSF(FBITS(f11) ^ 0x80000000u);
    f5 = f3 - f6;
    f4 = BITSF(LD32(v0-12520));
    f8 = f21 + f3;
    f7 = BITSF(FBITS(f21) ^ 0x80000000u);
    f3 = f3 - f21;
    v1 = D_08AECF0C - (-12532);
    v0 = D_08AECF10 - (-12528);
    f0 = BITSF(LD32(v1-12532));
    f1 = BITSF(LD32(v0-12528));
    s0 = sp + 112;
    a1 = sp + 192;
    a0 = s0 + 0;
    ST32(sp+100, FBITS(f12));
    s7 = sp + 272;
    fp = sp + 320;
    ST32(sp+128, FBITS(f0));
    s1 = s1 + 8;
    ST32(sp+132, FBITS(f1));
    ST32(sp+112, FBITS(f0));
    ST32(sp+120, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+124, FBITS(f1));
    ST32(sp+80, FBITS(f2));
    ST32(sp+164, FBITS(f6));
    ST32(sp+180, FBITS(f4));
    ST32(sp+192, FBITS(f11));
    ST32(sp+196, FBITS(f4));
    ST32(sp+200, FBITS(f3));
    ST32(sp+224, FBITS(f2));
    ST32(sp+228, FBITS(f4));
    ST32(sp+232, FBITS(f7));
    ST32(sp+240, FBITS(f11));
    ST32(sp+244, FBITS(f5));
    ST32(sp+248, FBITS(f3));
    ST32(sp+264, FBITS(f7));
    ST32(sp+84, FBITS(f20));
    ST32(sp+88, FBITS(f20));
    ST32(sp+144, FBITS(f20));
    ST32(sp+148, FBITS(f20));
    ST32(sp+152, FBITS(f21));
    ST32(sp+160, FBITS(f20));
    ST32(sp+168, FBITS(f20));
    ST32(sp+176, FBITS(f20));
    ST32(sp+184, FBITS(f20));
    ST32(sp+292, FBITS(f4));
    ST32(sp+304, FBITS(f11));
    ST32(sp+312, FBITS(f8));
    ST32(sp+320, FBITS(f2));
    ST32(sp+324, FBITS(f5));
    ST32(sp+256, FBITS(f2));
    ST32(sp+260, FBITS(f5));
    ST32(sp+272, FBITS(f11));
    ST32(sp+276, FBITS(f4));
    ST32(sp+280, FBITS(f8));
    ST32(sp+288, FBITS(f2));
    ST32(sp+308, FBITS(f5));
    ST32(sp+336, FBITS(f2));
    ST32(sp+208, FBITS(f2));
    ST32(sp+296, FBITS(f21));
    ST32(sp+340, FBITS(f20));
    ST32(sp+344, FBITS(f20));
    ST32(sp+212, FBITS(f20));
    ST32(sp+216, FBITS(f21));
    ST32(sp+328, FBITS(f21));
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFCE0;
L_088EFCE0:;
    a0 = s0 + 0;
    a1 = sp + 224;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFCEC;
L_088EFCEC:;
    a0 = s0 + 0;
    a1 = sp + 240;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFCF8;
L_088EFCF8:;
    a0 = s0 + 0;
    a1 = sp + 256;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFD04;
L_088EFD04:;
    a0 = s0 + 0;
    a1 = s7 + 0;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFD10;
L_088EFD10:;
    a0 = s0 + 0;
    a1 = sp + 288;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFD1C;
L_088EFD1C:;
    a0 = s0 + 0;
    a1 = sp + 304;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFD28;
L_088EFD28:;
    a0 = s0 + 0;
    a1 = fp + 0;
    f0 = func_08AA0F30(a0, a1);
    goto L_088EFD34;
L_088EFD34:;
    f3 = BITSF(LD32(sp+96));
    f2 = BITSF(LD32(sp+112));
    f0 = BITSF(LD32(sp+116));
    v0 = LD32(s3+32);
    f5 = BITSF(LD32(sp+100));
    f7 = BITSF(LD32(sp+104));
    f2 = f2 + f3;
    f4 = BITSF(LD32(sp+120));
    f6 = BITSF(LD32(sp+128));
    f0 = f0 + f3;
    f1 = BITSF(LD32(sp+124));
    f3 = BITSF(LD32(sp+132));
    ST32(sp+64, v0);
    v0 = D_08AECF1C - (-12516);
    f4 = f4 + f5;
    f6 = f6 + f7;
    f1 = f1 + f5;
    f3 = f3 + f7;
    f5 = BITSF(LD32(v0-12516));
    {u32 a_=sp+(848);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    v0 = D_08AECF20 - (-12512);
    t0 = LD32(s2+4);
    t1 = LD32(s2+8);
    a0 = LD32(s3+48);
    f7 = BITSF(LD32(sp+64));
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(864);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    ST32(sp+116, FBITS(f0));
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    f0 = BITSF(LD32(v0-12512));
    {u32 a_=sp+(1088);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(1376);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1392);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v1 = FBITS(f7);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    ST32(sp+112, FBITS(f2));
    {u32 a_=sp+(1408);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1424);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    ST32(sp+124, FBITS(f1));
    {v[48]=BITSF(v1);}
    a2 = s3 + 48;
    ST32(sp+120, FBITS(f4));
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    t2 = s2 + 32;
    ST32(sp+132, FBITS(f3));
    a3 = 0 + 0;
    t3 = 0xbf800000u;
    ST32(sp+128, FBITS(f6));
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    ST32(sp+328, FBITS(f0));
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[124]=d0;v[125]=d1;v[126]=d2;v[127]=d3;}
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    ST32(sp+308, FBITS(f5));
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(880);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    ST32(sp+68, t0);
    {v[52]=BITSF(v1);}
    {u32 a_=sp+(1120);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    ST32(sp+72, t1);
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(1024);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+336, FBITS(f5));
    {v[0]=BITSF(a3);}
    {u32 a_=sp+(1328);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+352, FBITS(f7));
    {v[4]=BITSF(a3);}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+64, a0);
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(784);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+312, FBITS(f20));
    {v[0]=BITSF(t3);}
    {u32 a_=sp+(1456);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+340, FBITS(f20));
    {u32 a_=sp+(800);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(912);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+344, FBITS(f20));
    {u32 a_=sp+(896);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp+320, FBITS(f20));
    a1 = s0 + 0;
    ST32(sp+324, FBITS(f20));
    ST32(sp+304, FBITS(f20));
    a0 = LD32(a2+8);
    v1 = LD32(a2+4);
    f3 = BITSF(LD32(sp+68));
    f5 = BITSF(LD32(sp+72));
    ST32(sp+68, v1);
    v0 = FBITS(f3);
    {v[4]=BITSF(v0);}
    ST32(sp+72, a0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    a0 = LD32(t2+8);
    v1 = LD32(s3+68);
    {u32 a_=sp+(1152);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(s3+64);
    f1 = BITSF(LD32(sp+64));
    {u32 a_=sp+(928);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+64, v0);
    v0 = FBITS(f1);
    {u32 a_=sp+(1440);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(sp+68));
    f7 = BITSF(LD32(sp+72));
    ST32(sp+68, v1);
    {u32 a_=sp+(896);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[1]=BITSF(v0);}
    ST32(sp+72, a0);
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[5]=BITSF(v0);}
    f0 = BITSF(LD32(sp+64));
    a0 = LD32(t2+4);
    t0 = LD32(t2+12);
    v1 = LD32(s2+32);
    f4 = BITSF(LD32(sp+68));
    f6 = BITSF(LD32(sp+72));
    {u32 a_=sp+(896);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(1136);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[1]=BITSF(v0);}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = FBITS(f0);
    {u32 a_=sp+(1440);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(896);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[6]=BITSF(v0);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(1136);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[6]=BITSF(v0);}
    v0 = 2;
    ST32(sp+64, v1);
    {u32 a_=sp+(896);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+68, a0);
    {u32 a_=sp+(816);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+76, t0);
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    a2 = FBITS(f2);
    ST32(sp+356, FBITS(f1));
    t1 = FBITS(f5);
    a0 = s1 + 0;
    ST32(sp+360, FBITS(f0));
    ST32(sp+364, FBITS(f3));
    ST32(sp+368, FBITS(f2));
    ST32(sp+372, FBITS(f4));
    ST32(sp+376, FBITS(f5));
    {u32 a_=sp+(1056);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    ST32(sp+380, FBITS(f7));
    {u32 a_=sp+(1360);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1472);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(sp+384, FBITS(f6));
    {u32 a_=sp+(832);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1488);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    ST16(s1+36, v0);
    {u32 a_=sp+(816);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = LD32(s1+36);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    {u32 a_=sp+(928);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[49]=BITSF(a2);}
    {v[50]=BITSF(v0);}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {u32 a_=sp+(928);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1536);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(a2);}
    {v[6]=BITSF(v0);}
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(1168);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(a2);}
    {v[6]=BITSF(v0);}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(1472);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1168);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1504);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(1520);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(1552);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(1568);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(1584);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(1600);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(928);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1536);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(1536);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(816);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1056);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1568);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = 0x10000u;
    {u32 a_=sp+(1168);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1936);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(832);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1360);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = v1 | v0;
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {u32 a_=sp+(1376);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1952);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1072);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1984);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(1632);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(1648);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(1968);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(1664);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1680);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1616);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    ST32(s1+36, v1);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(1952);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {u32 a_=sp+(1984);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(1632);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1696);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1648);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1936);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1248);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(1712);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1664);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {u32 a_=sp+(1728);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1680);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1344);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[1]=BITSF(t3);}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1264);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f7);
    v1 = FBITS(f6);
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[56]=BITSF(t1);}
    {v[48]=BITSF(t1);}
    {v[52]=BITSF(t1);}
    {v[57]=BITSF(v0);}
    {v[49]=BITSF(v0);}
    {v[53]=BITSF(v0);}
    {u32 a_=sp+(1744);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {v[54]=BITSF(v1);}
    v0 = D_08AECF24 - (-12508);
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1696);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(1712);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1744);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1344);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    f12 = BITSF(LD32(v0-12508));
    {v[18]=BITSF(a3);}
    {u32 a_=sp+(1040);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(816);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[53]=BITSF(a3);}
    {v[49]=BITSF(a3);}
    v0 = 0x3f800000u;
    {v[50]=BITSF(a3);}
    {v[54]=BITSF(v0);}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1056);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {v[58]=BITSF(v1);}
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1408);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(800);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {float t0=v[52];float t1=v[53];float t2=v[54];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[48]=o0;v[49]=o1;v[50]=o2;}
    {u32 a_=sp+(1360);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v0=FBITS(v[50]);}
    {v1=FBITS(v[48]);}
    f9 = BITSF(v0);
    {v0=FBITS(v[49]);}
    {u32 a_=sp+(1088);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    f8 = BITSF(v1);
    f6 = BITSF(v0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(1040);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(1408);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    f7 = BITSF(v0);
    {v0=FBITS(v[1]);}
    {u32 a_=sp+(1376);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = BITSF(v1);
    f3 = BITSF(v0);
    {u32 a_=sp+(1344);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float t0=v[48];float t1=v[49];float t2=v[50];float o0=0;o0+=v[32]*t0;o0+=v[33]*t1;o0+=v[34]*t2;float o1=0;o1+=v[36]*t0;o1+=v[37]*t1;o1+=v[38]*t2;float o2=0;o2+=v[40]*t0;o2+=v[41]*t1;o2+=v[42]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f5 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(1728);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    ST32(sp+336, FBITS(f8));
    ST32(sp+340, FBITS(f6));
    ST32(sp+344, FBITS(f9));
    ST32(sp+320, FBITS(f4));
    ST32(sp+324, FBITS(f3));
    ST32(sp+328, FBITS(f7));
    ST32(sp+304, v1);
    ST32(sp+308, v0);
    ST32(sp+312, FBITS(f5));
    ST32(sp+272, v1);
    ST32(sp+276, v0);
    ST32(sp+280, FBITS(f5));
    ST32(sp+288, v1);
    ST32(sp+292, v0);
    ST32(sp+296, FBITS(f5));
    { rv_t r_ = func_088B8958(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F02B4;
L_088F02B4:;
    s1 = LD32(s1+24);
    cnd_ = s1 == 0;
    s5 = D_08B2BDB4 - (-16972);
    if (cnd_) { goto L_088EFB8C; }
    goto L_088F02C0;
L_088F02C0:;
    s6 = D_08AECF28 - (-12504);
    s4 = s5 - 16972;
    a3 = LD32(s1);
    goto L_088F02CC;
L_088F02CC:;
    v1 = LD32(s5-16972);
    t1 = LD32(s4+44);
    v0 = a3 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + v1;
    a1 = LD32(a0);
    v1 = (a3 >> 1) & 0x7fff;
    v0 = 1;
    a3 = a3 & 0x1;
    a1 = a1 + v1;
    v1 = 3;
    a1 = a1 << 3;
    if (a3 != 0) v0 = v1;
    t1 = t1 + a1;
    v0 = v0 << 1;
    v1 = a3 << 2;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a2 = LD32(a0+4);
    a1 = LD_U16(v1);
    a0 = LD_U16(v0);
    t0 = LD32(s4+56);
    a1 = a2 + a1;
    a0 = a2 + a0;
    v0 = 2;
    if (a3 != 0) v0 = 0;
    a1 = a1 << 4;
    a0 = a0 << 4;
    a1 = t0 + a1;
    t2 = t0 + a0;
    v0 = v0 << 1;
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=t2+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = v0 + t1;
    v1 = LD_U16(v0);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f1 = BITSF(0);
    a2 = a2 + v1;
    a2 = a2 << 4;
    t0 = t0 + a2;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=t0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1760);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    f5 = BITSF(LD32(sp+64));
    f4 = BITSF(LD32(sp+68));
    f3 = BITSF(LD32(sp+72));
    v1 = FBITS(f5);
    v0 = FBITS(f4);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+288, FBITS(f5));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+292, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+296, FBITS(f3));
    if (cnd_) { goto L_088F0410; }
    goto L_088F03D8;
L_088F03D8:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+272, v0);
    ST32(sp+276, v1);
    ST32(sp+280, FBITS(f3));
    ST32(sp+288, v0);
    ST32(sp+292, v1);
    ST32(sp+296, FBITS(f3));
    goto L_088F0410;
L_088F0410:;
    f0 = BITSF(LD32(sp+292));
    f1 = BITSF(LD32(s6-12504));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1)); goto L_088F0440; }
    goto L_088F042C;
L_088F042C:;
    s1 = LD32(s1+12);
    goto L_088F0430;
L_088F0430:;
    cnd_ = s1 != 0;
    if (cnd_) { a3 = LD32(s1); goto L_088F02CC; }
    goto L_088F0438;
L_088F0438:;
    goto L_088EFB90;
L_088F0440:;
    f0 = BITSF(LD32(s3));
    v0 = LD32(sp+96);
    ST32(sp+400, FBITS(f1));
    f22 = f0 + f0;
    {u32 a_=sp+(1776);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(a1+4));
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(1792);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+404, FBITS(f0));
    s0 = sp + 400;
    s2 = sp + 592;
    f0 = BITSF(LD32(a1+8));
    v0 = LD32(sp+100);
    {v[5]=BITSF(v0);}
    ST32(sp+408, FBITS(f0));
    a1 = 3;
    a0 = s0 + 0;
    f0 = BITSF(LD32(t2));
    v0 = LD32(sp+104);
    {v[6]=BITSF(v0);}
    ST32(sp+420, FBITS(f0));
    a2 = s2 + 0;
    a3 = sp + 336;
    f0 = BITSF(LD32(t2+4));
    v0 = LD32(sp+336);
    {v[0]=BITSF(v0);}
    ST32(sp+424, FBITS(f0));
    f1 = BITSF(LD32(t2+8));
    v0 = LD32(sp+340);
    {v[1]=BITSF(v0);}
    ST32(sp+428, FBITS(f1));
    f2 = BITSF(LD32(t0));
    v0 = LD32(sp+344);
    {v[2]=BITSF(v0);}
    ST32(sp+440, FBITS(f2));
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(LD32(t0+4));
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    ST32(sp+444, FBITS(f1));
    f12 = f22 - f0;
    f0 = BITSF(LD32(t0+8));
    ST32(sp+448, FBITS(f0));
    v0 = func_088F0884(a0, a1, a2, a3, f12);
    goto L_088F04F4;
L_088F04F4:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F042C; }
    goto L_088F04FC;
L_088F04FC:;
    f2 = BITSF(LD32(sp+336));
    f1 = BITSF(LD32(sp+340));
    f0 = BITSF(LD32(sp+344));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f12 = f22 + f20;
    a0 = s2 + 0;
    a2 = s0 + 0;
    a3 = s7 + 0;
    ST32(sp+272, FBITS(f2));
    ST32(sp+276, FBITS(f1));
    ST32(sp+280, FBITS(f0));
    v0 = func_088F0884(a0, a1, a2, a3, f12);
    goto L_088F0534;
L_088F0534:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F042C; }
    goto L_088F053C;
L_088F053C:;
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    {u32 a_=sp+(1808);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1824);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+104);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+320);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+324);
    v1 = LD32(sp+328);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    a0 = s0 + 0;
    a2 = s2 + 0;
    f12 = f21 - f0;
    f20 = BITSF(v1);
    a3 = fp + 0;
    v0 = func_088F0884(a0, a1, a2, a3, f12);
    goto L_088F0598;
L_088F0598:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F042C; }
    goto L_088F05A0;
L_088F05A0:;
    f2 = BITSF(LD32(sp+320));
    f1 = BITSF(LD32(sp+324));
    f0 = BITSF(LD32(sp+328));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f12 = f21 + f20;
    a0 = s2 + 0;
    a2 = s0 + 0;
    a3 = s7 + 0;
    ST32(sp+272, FBITS(f2));
    ST32(sp+276, FBITS(f1));
    ST32(sp+280, FBITS(f0));
    ST32(sp+256, FBITS(f2));
    ST32(sp+260, FBITS(f1));
    ST32(sp+264, FBITS(f0));
    v0 = func_088F0884(a0, a1, a2, a3, f12);
    goto L_088F05E4;
L_088F05E4:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F042C; }
    goto L_088F05EC;
L_088F05EC:;
    v1 = D_08AECF08 - (-12536);
    f23 = BITSF(LD32(v1-12536));
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    {u32 a_=sp+(1840);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1856);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+104);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+304);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+308);
    v1 = LD32(sp+312);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    a0 = s0 + 0;
    a2 = s2 + 0;
    f12 = f23 - f0;
    f20 = BITSF(v0);
    a3 = sp + 304;
    v0 = func_088F0884(a0, a1, a2, a3, f12);
    goto L_088F0650;
L_088F0650:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F042C; }
    goto L_088F0658;
L_088F0658:;
    f2 = BITSF(LD32(sp+304));
    f1 = BITSF(LD32(sp+308));
    f0 = BITSF(LD32(sp+312));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f12 = f20 + f23;
    a0 = s2 + 0;
    a2 = s0 + 0;
    a3 = s7 + 0;
    ST32(sp+272, FBITS(f2));
    ST32(sp+276, FBITS(f1));
    ST32(sp+280, FBITS(f0));
    ST32(sp+256, FBITS(f2));
    ST32(sp+260, FBITS(f1));
    ST32(sp+264, FBITS(f0));
    v0 = func_088F0884(a0, a1, a2, a3, f12);
    goto L_088F069C;
L_088F069C:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F042C; }
    goto L_088F06A4;
L_088F06A4:;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088F07BC; }
    goto L_088F06AC;
L_088F06AC:;
    v0 = D_08AECF20 - (-12512);
    f0 = BITSF(LD32(v0-12512));
    v1 = D_08AECF00 - (-12544);
    f5 = BITSF(LD32(v1-12544));
    f12 = f0 / f22;
    a2 = sp + 0;
    a3 = 0 + 0;
    f6 = f0 / f21;
    goto L_088F06CC;
L_088F06CC:;
    v0 = s0 + a3;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+96));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp+100));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+104));
    f3 = f3 - f1;
    {u32 a_=sp+(1872);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f4 = f4 - f0;
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {v[4]=BITSF(v1);}
    {u32 a_=sp+(1888);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(v0);}
    v1 = FBITS(f4);
    v0 = LD32(sp+336);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+340);
    v0 = LD32(sp+344);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    ST32(sp+256, FBITS(f2));
    {u32 a_=sp+(1904);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f0 = f1 * f5;
    ST32(sp+260, FBITS(f3));
    {u32 a_=sp+(1920);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    t0 = t0 + 1;
    f0 = f0 * f12;
    ST32(sp+264, FBITS(f4));
    a0 = t0 < a1;
    a3 = a3 + 20;
    f0 = f0 + f5;
    ST32(a2+412, FBITS(f0));
    v0 = LD32(sp+256);
    v1 = LD32(sp+260);
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+264);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+320);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+324);
    v1 = LD32(sp+328);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f1 = BITSF(v1);
    f0 = f1 * f5;
    f0 = f0 * f6;
    f0 = f0 + f5;
    ST32(a2+416, FBITS(f0));
    cnd_ = a0 != 0;
    a2 = a2 + 20;
    if (cnd_) { goto L_088F06CC; }
    goto L_088F07BC;
L_088F07BC:;
    f0 = BITSF(LD32(sp+400));
    f1 = BITSF(LD32(sp+416));
    v1 = a1 - 1;
    ST32(sp+592, FBITS(f0));
    v0 = v1 << 2;
    v0 = v0 + v1;
    f0 = BITSF(LD32(sp+404));
    ST32(sp+608, FBITS(f1));
    v0 = v0 << 2;
    a0 = v0 + s0;
    ST32(sp+596, FBITS(f0));
    v0 = s0 + 20;
    a2 = 1;
    f0 = BITSF(LD32(sp+408));
    v1 = s2 + 20;
    ST32(sp+600, FBITS(f0));
    f0 = BITSF(LD32(sp+412));
    ST32(sp+604, FBITS(f0));
    goto L_088F0804;
L_088F0804:;
    v0 = v0 + 20;
    f0 = BITSF(LD32(v0-20));
    f1 = BITSF(LD32(v0-16));
    f2 = BITSF(LD32(v0-12));
    v1 = v1 + 20;
    ST32(v1-20, FBITS(f0));
    a2 = a2 + 1;
    a0 = a0 - 20;
    ST32(v1-16, FBITS(f1));
    ST32(v1-12, FBITS(f2));
    f0 = BITSF(LD32(v0-8));
    f1 = BITSF(LD32(v0-4));
    ST32(v1-8, FBITS(f0));
    ST32(v1-4, FBITS(f1));
    cnd_ = a2 == a1;
    v1 = v1 + 20;
    if (cnd_) { goto L_088F0874; }
    goto L_088F0844;
L_088F0844:;
    f0 = BITSF(LD32(a0+20));
    f1 = BITSF(LD32(a0+24));
    f2 = BITSF(LD32(a0+28));
    ST32(v1-20, FBITS(f0));
    a2 = a2 + 1;
    ST32(v1-16, FBITS(f1));
    ST32(v1-12, FBITS(f2));
    f0 = BITSF(LD32(a0+32));
    f1 = BITSF(LD32(a0+36));
    ST32(v1-8, FBITS(f0));
    cnd_ = a2 != a1;
    ST32(v1-4, FBITS(f1));
    if (cnd_) { goto L_088F0804; }
    goto L_088F0874;
L_088F0874:;
    a0 = s2 + 0;
    func_08918118(a0, a1);
    goto L_088F087C;
L_088F087C:;
    s1 = LD32(s1+12);
    goto L_088F0430;
}

/* 088F0884 */
u32 func_088F0884(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088F0884:;
    t4 = 0 < a1;
    sp = sp - 96;
    t5 = 0 + 0;
    t3 = 1;
    cnd_ = t4 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088F0920; }
    goto L_088F089C;
L_088F089C:;
    f2 = BITSF(0);
    t0 = a0 + 0;
    t1 = sp + 0;
    v0 = LD32(a3);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(a3+4);
    {v[4]=BITSF(v0);}
    v0 = LD32(a3+8);
    {v[5]=BITSF(v1);}
    {v[6]=BITSF(v0);}
    v0 = LD32(t0);
    goto L_088F08C8;
L_088F08C8:;
    v1 = LD32(t0+4);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    v0 = LD32(t0+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    t2 = t2 + 1;
    v0 = t2 < a1;
    f1 = f0 + f12;
    t0 = t0 + 20;
    fcc = FCMP(f2, f1, 14);
    ST32(t1, FBITS(f1));
    cnd_ = !fcc;
    t1 = t1 + 4;
    if (cnd_) { goto L_088F0910; }
    goto L_088F090C;
L_088F090C:;
    t3 = 0 + 0;
    goto L_088F0910;
L_088F0910:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(t0); goto L_088F08C8; }
    goto L_088F0918;
L_088F0918:;
    cnd_ = t3 == 0;
    if (cnd_) { goto L_088F092C; }
    goto L_088F0920;
L_088F0920:;
    v0 = 0 + 0;
    goto L_088F0924;
L_088F0924:;
    sp = sp + 96;
    return v0;
L_088F092C:;
    cnd_ = t4 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088F0A94; }
    goto L_088F0934;
L_088F0934:;
    v0 = t5 << 2;
    v1 = D_08AECF2C - (-12500);
    v0 = v0 + t5;
    f10 = BITSF(LD32(v1-12500));
    v0 = v0 << 2;
    a2 = v0 + a2;
    t1 = a0 + 0;
    t3 = sp + 0;
    goto L_088F0954;
L_088F0954:;
    f0 = BITSF(LD32(t3));
    f8 = BITSF(0);
    v1 = t2 - 1;
    v0 = a1 - 1;
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    if (t2 == 0) v1 = v0;
    if (cnd_) { goto L_088F0A9C; }
    goto L_088F0974;
L_088F0974:;
    v0 = v1 << 2;
    t0 = v0 + sp;
    f0 = BITSF(LD32(t0));
    fcc = FCMP(f8, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { t2 = t2 + 1; goto L_088F0A84; }
    goto L_088F0990;
L_088F0990:;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    f4 = BITSF(LD32(v0+8));
    f9 = BITSF(LD32(v0));
    f7 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(t1+4));
    f1 = BITSF(LD32(t1+8));
    f2 = BITSF(LD32(t1));
    f6 = f7 - f0;
    f5 = f4 - f1;
    f2 = f9 - f2;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+52, FBITS(f6));
    v0 = FBITS(f2);
    {v[4]=BITSF(v0);}
    v0 = LD32(a3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = LD32(a3+4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[6]=BITSF(v0);}
    v0 = LD32(a3+8);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f2));
    f1 = f10 / f0;
    ST32(sp+56, FBITS(f5));
    f0 = BITSF(LD32(t0));
    f3 = f0 * f1;
    fcc = FCMP(f3, f8, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f8; goto L_088F0A2C; }
    goto L_088F0A2C;
L_088F0A2C:;
    fcc = FCMP(f10, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f10; goto L_088F0A3C; }
    goto L_088F0A3C;
L_088F0A3C:;
    f0 = f2 * f3;
    f5 = f5 * f3;
    f3 = f6 * f3;
    t5 = t5 + 1;
    f1 = f9 - f0;
    f4 = f4 - f5;
    f2 = f7 - f3;
    ST32(sp+80, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f4));
    ST32(a2, FBITS(f1));
    a2 = a2 + 20;
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f5));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f4));
    goto L_088F0A80;
L_088F0A80:;
    t2 = t2 + 1;
    goto L_088F0A84;
L_088F0A84:;
    v0 = t2 < a1;
    t3 = t3 + 4;
    cnd_ = v0 != 0;
    t1 = t1 + 20;
    if (cnd_) { goto L_088F0954; }
    goto L_088F0A94;
L_088F0A94:;
    v0 = t5 + 0;
    goto L_088F0924;
L_088F0A9C:;
    t0 = v1 << 2;
    v0 = t0 + sp;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t1)); goto L_088F0BAC; }
    goto L_088F0AB8;
L_088F0AB8:;
    v0 = t0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f9 = BITSF(LD32(t1));
    f3 = BITSF(LD32(t1+4));
    f5 = BITSF(LD32(t1+8));
    f6 = f9 - f1;
    f7 = f3 - f0;
    f4 = f5 - f2;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f6);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(v0);}
    v0 = LD32(a3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[5]=BITSF(v0);}
    v0 = LD32(a3+4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[6]=BITSF(v0);}
    v0 = LD32(a3+8);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+80, FBITS(f6));
    f1 = f10 / f0;
    ST32(sp+84, FBITS(f7));
    ST32(sp+88, FBITS(f4));
    f0 = BITSF(LD32(t3));
    f1 = f0 * f1;
    fcc = FCMP(f1, f8, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f8; goto L_088F0B54; }
    goto L_088F0B54;
L_088F0B54:;
    fcc = FCMP(f10, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f10; goto L_088F0B64; }
    goto L_088F0B64;
L_088F0B64:;
    f4 = f4 * f1;
    f0 = f6 * f1;
    f1 = f7 * f1;
    t5 = t5 + 1;
    f5 = f5 - f4;
    f2 = f9 - f0;
    f3 = f3 - f1;
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f5));
    ST32(a2, FBITS(f2));
    ST32(a2+4, FBITS(f3));
    ST32(a2+8, FBITS(f5));
    a2 = a2 + 20;
    f0 = BITSF(LD32(t1));
    goto L_088F0BAC;
L_088F0BAC:;
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    ST32(a2, FBITS(f0));
    t5 = t5 + 1;
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    a2 = a2 + 20;
    goto L_088F0A80;
}

/* 088F0BCC */
void func_088F0BCC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F0BCC:;
    sp = sp - 16;
    func_08918144(a3, t0, t1, t2, t3);
    goto L_088F0BDC;
L_088F0BDC:;
    sp = sp + 16;
    return;
}

/* 088F0BE8 */
void func_088F0BE8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F0BE8:;
    sp = sp - 16;
    v0 = D_08AECF30 - (-12496);
    f12 = BITSF(LD32(v0-12496));
    f13 = f12;
    f14 = f12;
    func_088F1110(f12, f13, f14);
    goto L_088F0C04;
L_088F0C04:;
    v0 = D_08AECF34 - (-12492);
    f12 = BITSF(LD32(v0-12492));
    f13 = f12;
    f14 = f12;
    func_088F1138(f12, f13, f14);
    goto L_088F0C18;
L_088F0C18:;
    f12 = BITSF(0);
    func_088F10F8(f12);
    goto L_088F0C24;
L_088F0C24:;
    a1 = 1;
    v0 = D_08B45090 - (20624);
    v1 = D_08B45091 - (20625);
    ST8(v0+20624, a1);
    a0 = 0 + 0;
    v0 = D_08B45092 - (20626);
    ST8(v1+20625, 0);
    v1 = D_08B45093 - (20627);
    ST8(v0+20626, 0);
    ST8(v1+20627, 0);
    func_088F0C80(a0, 0, 0, 0);
    goto L_088F0C50;
L_088F0C50:;
    func_08918430();
    goto L_088F0C58;
L_088F0C58:;
    sp = sp + 16;
    return;
}

/* 088F0C64 */
void func_088F0C64(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F0C64:;
    sp = sp - 16;
    a0 = 1;
    func_088F0C80(a0, t1, t2, t3);
    goto L_088F0C74;
L_088F0C74:;
    sp = sp + 16;
    return;
}

/* 088F0C80 */
void func_088F0C80(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F0C80:;
    sp = sp - 16;
    v0 = D_08B45014 - (20500);
    s2 = a0 & 0xff;
    s1 = 7;
    s0 = v0 + 20500;
    goto L_088F0CA4;
L_088F0CA4:;
    v0 = LD32(s0);
    s1 = s1 - 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088F0D08; }
    goto L_088F0CB4;
L_088F0CB4:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_088F0CA4; }
    goto L_088F0CC4;
L_088F0CC4:;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_088F0CF8; }
    goto L_088F0CCC;
L_088F0CCC:;
    func_088F1288();
    goto L_088F0CD4;
L_088F0CD4:;
    v1 = 1;
    v0 = D_08B450A8 - (20648);
    ST8(v0+20648, v1);
    sp = sp + 16;
    return;
L_088F0CF8:;
    func_08918414();
    goto L_088F0D00;
L_088F0D00:;
    goto L_088F0CCC;
L_088F0D08:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F0D10;
L_088F0D10:;
    ST32(s0, 0);
    goto L_088F0CB4;
}

/* 088F0D18 */
void func_088F0D18(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F0D18:;
    sp = sp - 16;
    a0 = 0 + 0;
    func_088F0C80(a0, t1, t2, t3);
    goto L_088F0D28;
L_088F0D28:;
    func_089184A8();
    goto L_088F0D30;
L_088F0D30:;
    sp = sp + 16;
    return;
}

/* 088F0D3C */
void func_088F0D3C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088F0D3C:;
    sp = sp - 80;
    v0 = D_08B2C220 - (-15840);
    v1 = LD_U8(v0-15840);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088F0DA4; }
    goto L_088F0D7C;
L_088F0D7C:;
    s0 = D_08B450A8 - (20648);
    v0 = LD_U8(s0+20648);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F1024; }
    goto L_088F0D8C;
L_088F0D8C:;
    func_0891844C();
    goto L_088F0D94;
L_088F0D94:;
    v0 = D_08B16188 - (24968);
    v1 = LD_U8(v0+24968);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088F0DD4; }
    goto L_088F0DA4;
L_088F0DA4:;
    sp = sp + 80;
    return;
L_088F0DD4:;
    v0 = func_089184C4();
    goto L_088F0DDC;
L_088F0DDC:;
    s4 = v0 + 0;
    v1 = D_08B2BFD0 - (-16432);
    v0 = D_08B2BFA4 - (-16476);
    s5 = LD_U8(v0-16476);
    s6 = LD_U8(v1-16432);
    v0 = D_08B2BFC0 - (-16448);
    v1 = D_08B2BFC4 - (-16444);
    f21 = BITSF(LD32(v0-16448));
    cnd_ = s4 == 0;
    f22 = BITSF(LD32(v1-16444));
    if (cnd_) { goto L_088F0E0C; }
    goto L_088F0E04;
L_088F0E04:;
    cnd_ = s5 != 0;
    if (cnd_) { goto L_088F0FF4; }
    goto L_088F0E0C;
L_088F0E0C:;
    v0 = D_08B45094 - (20628);
    goto L_088F0E10;
L_088F0E10:;
    v1 = LD32(v0+20628);
    v0 = v0 + 20628;
    ST32(sp, v0);
    cnd_ = v1 == 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_088F0EB0; }
    goto L_088F0E24;
L_088F0E24:;
    f20 = BITSF(0);
    s3 = sp + 16;
    s2 = D_08B159FC - (23036);
    s0 = LD32(v1);
    goto L_088F0E34;
L_088F0E34:;
    v0 = LD32(s0+60);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F0EE0; }
    goto L_088F0E40;
L_088F0E40:;
    f4 = BITSF(LD32(s0));
    goto L_088F0E44;
L_088F0E44:;
    f5 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    v0 = LD32(s2+23036);
    ST32(sp+16, FBITS(f4));
    a2 = s0 + 12;
    a1 = s3 + 0;
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f0));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f4 = f4 + f2;
    f0 = f0 + f1;
    f5 = f5 + f3;
    a0 = LD32(s0+60);
    ST32(sp+16, FBITS(f4));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f5));
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F0E90;
L_088F0E90:;
    a1 = 0 + 0;
    a0 = LD32(s0+60);
    { rv_t r_ = func_088D1050(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F0E9C;
L_088F0E9C:;
    a0 = sp + 0;
    { u64 r_ = func_08AB9A74(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F0EA4;
L_088F0EA4:;
    v1 = LD32(sp+4);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_088F0E34; }
    goto L_088F0EB0;
L_088F0EB0:;
    cnd_ = s4 == 0;
    if (cnd_) {  goto L_088F0DA4; }
    goto L_088F0EB8;
L_088F0EB8:;
    f12 = f21;
    func_088CAEE0(f12);
    goto L_088F0EC0;
L_088F0EC0:;
    f12 = f22;
    func_088CAF00(f12);
    goto L_088F0EC8;
L_088F0EC8:;
    a0 = s5 + 0;
    func_088CAD80(a0);
    goto L_088F0ED0;
L_088F0ED0:;
    a0 = s6 + 0;
    func_088CAFDC(a0, 0, 0, 0);
    goto L_088F0ED8;
L_088F0ED8:;
    goto L_088F0DA4;
L_088F0EE0:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F0EE8;
L_088F0EE8:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    func_088D06E4(a0, 0, 0, 0);
    goto L_088F0EF4;
L_088F0EF4:;
    a2 = LD32(s0+56);
    cnd_ = a2 != 0;
    ST32(s0+60, s1);
    if (cnd_) { goto L_088F0FD8; }
    goto L_088F0F00;
L_088F0F00:;
    a1 = LD32(s0+52);
    a0 = s1 + 0;
    { rv_t r_ = func_088D0A64(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F0F0C;
L_088F0F0C:;
    v0 = D_08B45084 - (20612);
    goto L_088F0F10;
L_088F0F10:;
    a2 = D_08AECF38 - (-12488);
    f0 = BITSF(LD32(v0+20612));
    f2 = BITSF(LD32(a2-12488));
    a0 = LD32(s0+64);
    a1 = LD32(s0+60);
    f1 = f0 * f2;
    a0 = a0 & 0x1;
    v1 = 67;
    v0 = 195;
    f0 = f1 + f2;
    fcc = FCMP(f20, f1, 12);
    if (a0 != 0) v1 = v0;
    ST32(a1+116, v1);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_088F0F54; }
    goto L_088F0F4C;
L_088F0F4C:;
    f0 = f1 - f2;
    f0 = BITSF(F2I(f0, 1));
    goto L_088F0F54;
L_088F0F54:;
    v0 = D_08B45088 - (20616);
    f1 = BITSF(LD32(v0+20616));
    f2 = BITSF(LD32(a2-12488));
    v0 = FBITS(f0);
    f1 = f1 * f2;
    a1 = v0 & 0xff;
    f0 = f1 + f2;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f3 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_088F0F88; }
    goto L_088F0F80;
L_088F0F80:;
    f0 = f1 - f2;
    f3 = BITSF(F2I(f0, 1));
    goto L_088F0F88;
L_088F0F88:;
    v0 = D_08B4508C - (20620);
    f2 = BITSF(LD32(a2-12488));
    f0 = BITSF(LD32(v0+20620));
    v0 = FBITS(f3);
    f0 = f0 * f2;
    a2 = v0 & 0xff;
    f1 = f0 + f2;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_088F0FBC; }
    goto L_088F0FB4;
L_088F0FB4:;
    f0 = f0 - f2;
    f1 = BITSF(F2I(f0, 1));
    goto L_088F0FBC;
L_088F0FBC:;
    v0 = FBITS(f1);
    a0 = LD32(s0+60);
    t0 = 255;
    a3 = v0 & 0xff;
    func_0890EBE4(a0, a1, a2, a3, t0);
    goto L_088F0FD0;
L_088F0FD0:;
    f4 = BITSF(LD32(s0));
    goto L_088F0E44;
L_088F0FD8:;
    a1 = LD32(s0+52);
    a3 = LD32(s0+48);
    f12 = BITSF(0);
    a0 = s1 + 0;
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F0FEC;
L_088F0FEC:;
    v0 = D_08B45084 - (20612);
    goto L_088F0F10;
L_088F0FF4:;
    a0 = 1;
    func_088CAD80(a0);
    goto L_088F0FFC;
L_088F0FFC:;
    a0 = 0 + 0;
    func_088CAFDC(a0, 0, 0, 0);
    goto L_088F1004;
L_088F1004:;
    f12 = BITSF(0);
    func_088CAEE0(f12);
    goto L_088F1010;
L_088F1010:;
    v0 = D_08B2BFCC - (-16436);
    f12 = BITSF(LD32(v0-16436));
    func_088CAF00(f12);
    goto L_088F101C;
L_088F101C:;
    v0 = D_08B45094 - (20628);
    goto L_088F0E10;
L_088F1024:;
    func_089183F8(a3, t0, t1, t2, t3);
    goto L_088F102C;
L_088F102C:;
    ST8(s0+20648, 0);
    goto L_088F0D8C;
}

/* 088F1034 */
void func_088F1034(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1034:;
    sp = sp - 16;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v0 = D_08B45014 - (20500);
    v0 = v0 + 20500;
    v1 = v1 << 2;
    s0 = v1 + v0;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088F107C; }
    goto L_088F1068;
L_088F1068:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088F10C0; }
    goto L_088F1070;
L_088F1070:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F1078;
L_088F1078:;
    ST32(s0, 0);
    goto L_088F107C;
L_088F107C:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088F10F0; }
    goto L_088F108C;
L_088F108C:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F1094;
L_088F1094:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F10A8;
L_088F10A8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088F10E0; }
    goto L_088F10B8;
L_088F10B8:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088F10C0;
L_088F10C0:;
    goto L_088F10C4;
L_088F10C4:;
    v1 = 1;
    v0 = D_08B450A8 - (20648);
    ST8(v0+20648, v1);
    sp = sp + 16;
    return;
L_088F10E0:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F10E8;
L_088F10E8:;
    goto L_088F10C4;
L_088F10F0:;
    ST32(s0, 0);
    goto L_088F10C0;
}

/* 088F10F8 */
void func_088F10F8(float f12)
{
    u32 v0 = 0, v1 = 0;
L_088F10F8:;
    v0 = D_08B45074 - (20596);
    ST32(v0+20596, FBITS(f12));
    v1 = 1;
    v0 = D_08B450A8 - (20648);
    ST8(v0+20648, v1);
    return;
}

/* 088F1110 */
void func_088F1110(float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0;
L_088F1110:;
    v0 = D_08B45078 - (20600);
    v1 = D_08B4507C - (20604);
    ST32(v0+20600, FBITS(f12));
    v0 = D_08B45080 - (20608);
    ST32(v1+20604, FBITS(f13));
    v1 = 1;
    ST32(v0+20608, FBITS(f14));
    v0 = D_08B450A8 - (20648);
    ST8(v0+20648, v1);
    return;
}

/* 088F1138 */
void func_088F1138(float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F1138:;
    sp = sp - 48;
    v0 = D_08B45094 - (20628);
    v0 = v0 + 20628;
    a0 = sp + 0;
    s2 = D_08B45084 - (20612);
    s1 = D_08B45088 - (20616);
    s0 = D_08B4508C - (20620);
    ST32(sp, v0);
    ST32(s2+20612, FBITS(f12));
    ST32(s1+20616, FBITS(f13));
    ST32(s0+20620, FBITS(f14));
    ST32(sp+4, 0);
    { u64 r_ = func_08AB9A74(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F1180;
L_088F1180:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F1240; }
    goto L_088F118C;
L_088F118C:;
    f20 = BITSF(0);
    a0 = LD32(v0);
    goto L_088F1194;
L_088F1194:;
    v1 = D_08AECF3C - (-12484);
    v0 = LD32(a0+60);
    cnd_ = v0 == 0;
    t0 = 255;
    if (cnd_) { goto L_088F1228; }
    goto L_088F11A4;
L_088F11A4:;
    f5 = BITSF(LD32(v1-12484));
    f0 = BITSF(LD32(s2+20612));
    f2 = BITSF(LD32(s1+20616));
    f3 = BITSF(LD32(s0+20620));
    f0 = f0 * f5;
    f2 = f2 * f5;
    f3 = f3 * f5;
    f1 = f0 + f5;
    fcc = FCMP(f20, f0, 12);
    f6 = f0 - f5;
    f7 = f2 - f5;
    f8 = f3 - f5;
    f0 = f2 + f5;
    f4 = f3 + f5;
    cnd_ = fcc;
    f1 = BITSF(F2I(f1, 1));
    if (cnd_) { goto L_088F11E8; }
    goto L_088F11E4;
L_088F11E4:;
    f1 = BITSF(F2I(f6, 1));
    goto L_088F11E8;
L_088F11E8:;
    fcc = FCMP(f20, f2, 12);
    v0 = FBITS(f1);
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(F2I(f4, 1));
    cnd_ = fcc;
    a1 = v0 & 0xff;
    if (cnd_) { goto L_088F1204; }
    goto L_088F1200;
L_088F1200:;
    f0 = BITSF(F2I(f7, 1));
    goto L_088F1204;
L_088F1204:;
    fcc = FCMP(f20, f3, 12);
    v0 = FBITS(f0);
    cnd_ = fcc;
    a2 = v0 & 0xff;
    if (cnd_) { goto L_088F1218; }
    goto L_088F1214;
L_088F1214:;
    f1 = BITSF(F2I(f8, 1));
    goto L_088F1218;
L_088F1218:;
    v0 = FBITS(f1);
    a0 = LD32(a0+60);
    a3 = v0 & 0xff;
    func_0890EBE4(a0, a1, a2, a3, t0);
    goto L_088F1228;
L_088F1228:;
    a0 = sp + 0;
    { u64 r_ = func_08AB9A74(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F1230;
L_088F1230:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(v0); goto L_088F1194; }
    goto L_088F123C;
L_088F123C:;
    goto L_088F1240;
L_088F1240:;
    sp = sp + 48;
    return;
}

/* 088F1258 */
void func_088F1258(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088F1258:;
    v0 = D_08B45092 - (20626);
    ST8(v0+20626, a0);
    v1 = 1;
    v0 = D_08B450A8 - (20648);
    ST8(v0+20648, v1);
    return;
}

/* 088F1270 */
void func_088F1270(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088F1270:;
    v0 = D_08B45093 - (20627);
    ST8(v0+20627, a0);
    v1 = 1;
    v0 = D_08B450A8 - (20648);
    ST8(v0+20648, v1);
    return;
}

/* 088F1288 */
void func_088F1288(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F1288:;
    sp = sp - 32;
    v0 = D_08B45094 - (20628);
    a0 = sp + 0;
    v0 = v0 + 20628;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AB9A74(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F12B0;
L_088F12B0:;
    s1 = LD32(sp+4);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088F12F0; }
    goto L_088F12BC;
L_088F12BC:;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088F12E0; }
    goto L_088F12C8;
L_088F12C8:;
    a0 = LD32(s0+60);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088F139C; }
    goto L_088F12D4;
L_088F12D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F12DC;
L_088F12DC:;
    s1 = LD32(sp+4);
    goto L_088F12E0;
L_088F12E0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088F1304; }
    goto L_088F12E8;
L_088F12E8:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088F12BC; }
    goto L_088F12F0;
L_088F12F0:;
    sp = sp + 32;
    return;
L_088F1304:;
    a0 = sp + 0;
    { u64 r_ = func_08AB9A74(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F130C;
L_088F130C:;
    s0 = LD32(sp);
    a0 = LD32(s0);
    cnd_ = a0 == 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_088F1334; }
    goto L_088F131C;
L_088F131C:;
    v0 = LD32(a0);
    goto L_088F1320;
L_088F1320:;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(a0+8); goto L_088F133C; }
    goto L_088F1328;
L_088F1328:;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088F1320; }
    goto L_088F1334;
L_088F1334:;
    s1 = LD32(sp+4);
    goto L_088F12E8;
L_088F133C:;
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_088F1390; }
    goto L_088F1344;
L_088F1344:;
    ST32(v1+4, v0);
    goto L_088F1348;
L_088F1348:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0, v1); goto L_088F1358; }
    goto L_088F1354;
L_088F1354:;
    ST32(v0+8, v1);
    goto L_088F1358;
L_088F1358:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F1380; }
    goto L_088F1364;
L_088F1364:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F136C;
L_088F136C:;
    v0 = LD32(s0+16);
    goto L_088F1370;
L_088F1370:;
    s1 = LD32(sp+4);
    v0 = v0 - 1;
    ST32(s0+16, v0);
    goto L_088F12E8;
L_088F1380:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F1388;
L_088F1388:;
    v0 = LD32(s0+16);
    goto L_088F1370;
L_088F1390:;
    ST32(s0+4, v0);
    v1 = LD32(a0+8);
    goto L_088F1348;
L_088F139C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F13A8;
L_088F13A8:;
    goto L_088F12D4;
}

/* 088F13B0 */
rv_t func_088F13B0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F13B0:;
    sp = sp - 32;
    a2 = a0 ^ 0x1;
    s2 = a1 ^ 0xffff;
    v0 = s2 < 0x1u;
    v1 = a2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F1408; }
    goto L_088F13E0;
L_088F13E0:;
    v0 = D_08B45014 - (20500);
    v0 = v0 + 20500;
    v1 = 7;
    a1 = (u32)-1;
    goto L_088F13F0;
L_088F13F0:;
    v1 = v1 - 1;
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    cnd_ = v1 != a1;
    v0 = v0 + 12;
    if (cnd_) { goto L_088F13F0; }
    goto L_088F1408;
L_088F1408:;
    v0 = a2 < 0x1u;
    a1 = s2 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    s3 = a0 < 0x1u;
    if (cnd_) { goto L_088F1438; }
    goto L_088F141C;
L_088F141C:;
    v1 = D_08B45094 - (20628);
    v0 = v1 + 20628;
    ST32(v1+20628, 0);
    ST32(v0+16, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088F1438;
L_088F1438:;
    v0 = a1 & s3;
    cnd_ = v0 == 0;
    v0 = s2 < 0x1u;
    if (cnd_) { goto L_088F1488; }
    goto L_088F1444;
L_088F1444:;
    v0 = D_08B45094 - (20628);
    s0 = LD32(v0+20628);
    cnd_ = s0 == 0;
    s1 = v0 + 20628;
    if (cnd_) { goto L_088F1478; }
    goto L_088F1454;
L_088F1454:;
    v1 = LD32(s1+12);
    goto L_088F1458;
L_088F1458:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_088F14F4; }
    goto L_088F1468;
L_088F1468:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F1470;
L_088F1470:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_088F1458; }
    goto L_088F1478;
L_088F1478:;
    ST32(s1+16, 0);
    ST32(s1, 0);
    ST32(s1+4, 0);
    v0 = s2 < 0x1u;
    goto L_088F1488;
L_088F1488:;
    v0 = v0 & s3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F14DC; }
    goto L_088F1494;
L_088F1494:;
    v0 = D_08B45014 - (20500);
    v0 = v0 + 20500;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088F14DC; }
    goto L_088F14A4;
L_088F14A4:;
    s0 = v0 + 96;
    goto L_088F14A8;
L_088F14A8:;
    cnd_ = s0 == s1;
    s0 = s0 - 12;
    if (cnd_) { goto L_088F14D8; }
    goto L_088F14B0;
L_088F14B0:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088F14C8; }
    goto L_088F14BC;
L_088F14BC:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_088F14A8;
L_088F14C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F14D0;
L_088F14D0:;
    ST32(s0, 0);
    goto L_088F14BC;
L_088F14D8:;
    goto L_088F14DC;
L_088F14DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088F14F4:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F14FC;
L_088F14FC:;
    goto L_088F1470;
}

/* 088F1504 */
rv_t func_088F1504(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1504:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088F13B0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F1518;
L_088F1518:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F1524 */
rv_t func_088F1524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1524:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088F13B0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F1538;
L_088F1538:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F1544 */
void func_088F1544(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1544:;
    sp = sp - 16;
    func_088F19E0();
    goto L_088F1554;
L_088F1554:;
    func_088EC52C(0, 0, 0, 0, 0, 0);
    goto L_088F155C;
L_088F155C:;
    func_088EB98C(0, 0, 0);
    goto L_088F1564;
L_088F1564:;
    func_088F0BE8();
    goto L_088F156C;
L_088F156C:;
    func_088F2730(0, 0, 0);
    goto L_088F1574;
L_088F1574:;
    func_088E8E08(0, 0, 0);
    goto L_088F157C;
L_088F157C:;
    func_088EEE0C();
    goto L_088F1584;
L_088F1584:;
    func_088EAFA4(0, 0, 0, 0, 0, 0);
    goto L_088F158C;
L_088F158C:;
    func_088EE918();
    goto L_088F1594;
L_088F1594:;
    func_088ED834();
    goto L_088F159C;
L_088F159C:;
    func_088EF654(0, 0, 0, 0, 0, 0, 0);
    goto L_088F15A4;
L_088F15A4:;
    func_089183A0();
    goto L_088F15AC;
L_088F15AC:;
    func_08A669AC();
    goto L_088F15B4;
L_088F15B4:;
    sp = sp + 16;
    return;
}

/* 088F15C0 */
void func_088F15C0(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F15C0:;
    sp = sp - 16;
    func_08A669B4();
    goto L_088F15D0;
L_088F15D0:;
    func_089183C0();
    goto L_088F15D8;
L_088F15D8:;
    func_088ED9B4();
    goto L_088F15E0;
L_088F15E0:;
    func_088EEA00();
    goto L_088F15E8;
L_088F15E8:;
    func_088EB004();
    goto L_088F15F0;
L_088F15F0:;
    func_088F2784();
    goto L_088F15F8;
L_088F15F8:;
    func_088F0D18(0, 0, 0);
    goto L_088F1600;
L_088F1600:;
    func_088EB9B4();
    goto L_088F1608;
L_088F1608:;
    func_088EC59C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F1610;
L_088F1610:;
    func_088E9084();
    goto L_088F1618;
L_088F1618:;
    func_088EF768();
    goto L_088F1620;
L_088F1620:;
    sp = sp + 16;
    return;
}

/* 088F162C */
void func_088F162C(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F162C:;
    sp = sp - 16;
    func_08A669BC();
    goto L_088F163C;
L_088F163C:;
    func_089183B8();
    goto L_088F1644;
L_088F1644:;
    { rv_t r_ = func_088ED9D0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F164C;
L_088F164C:;
    func_088EE9DC();
    goto L_088F1654;
L_088F1654:;
    func_088EB06C();
    goto L_088F165C;
L_088F165C:;
    func_088F2760(0, 0, 0);
    goto L_088F1664;
L_088F1664:;
    func_088F0C64(0, 0, 0);
    goto L_088F166C;
L_088F166C:;
    func_088EB9DC(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F1674;
L_088F1674:;
    func_088EC550(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F167C;
L_088F167C:;
    func_088E915C();
    goto L_088F1684;
L_088F1684:;
    func_088EF6F4(0, 0, 0, 0, 0, 0, 0);
    goto L_088F168C;
L_088F168C:;
    sp = sp + 16;
    return;
}

/* 088F1698 */
void func_088F1698(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1698:;
    sp = sp - 16;
    func_088F27A8();
    goto L_088F16A8;
L_088F16A8:;
    func_088EB37C();
    goto L_088F16B0;
L_088F16B0:;
    func_088E918C(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F16B8;
L_088F16B8:;
    func_088EEA24();
    goto L_088F16C0;
L_088F16C0:;
    func_088ED850(0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F16C8;
L_088F16C8:;
    func_089183A8();
    goto L_088F16D0;
L_088F16D0:;
    func_08A669C4();
    goto L_088F16D8;
L_088F16D8:;
    sp = sp + 16;
    return;
}

/* 088F16E4 */
void func_088F16E4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F16E4:;
    sp = sp - 16;
    func_088ED748();
    goto L_088F16F4;
L_088F16F4:;
    sp = sp + 16;
    return;
}

/* 088F1700 */
void func_088F1700(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1700:;
    sp = sp - 16;
    a0 = 2;
    func_088E91B4(a0);
    goto L_088F1710;
L_088F1710:;
    func_088E9294();
    goto L_088F1718;
L_088F1718:;
    sp = sp + 16;
    return;
}

/* 088F1724 */
void func_088F1724(void)
{
L_088F1724:;
    return;
}

/* 088F172C */
void func_088F172C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F172C:;
    sp = sp - 16;
    func_088F1724();
    goto L_088F173C;
L_088F173C:;
    func_088F0BCC(0, 0, 0, 0, 0);
    goto L_088F1744;
L_088F1744:;
    func_08A669CC();
    goto L_088F174C;
L_088F174C:;
    v0 = D_08B2C22D - (-15827);
    v1 = LD_U8(v0-15827);
    cnd_ = v1 == 0;
    v0 = D_08B2BFA4 - (-16476);
    if (cnd_) { goto L_088F1768; }
    goto L_088F175C;
L_088F175C:;
    v1 = LD_U8(v0-16476);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088F17C4; }
    goto L_088F1768;
L_088F1768:;
    func_088EB9FC();
    goto L_088F1770;
L_088F1770:;
    func_088EB18C();
    goto L_088F1778;
L_088F1778:;
    func_089183B0();
    goto L_088F1780;
L_088F1780:;
    a0 = 0 + 0;
    func_088E91B4(a0);
    goto L_088F1788;
L_088F1788:;
    func_088E9294();
    goto L_088F1790;
L_088F1790:;
    func_08A669D4();
    goto L_088F1798;
L_088F1798:;
    func_088EDA28();
    goto L_088F17A0;
L_088F17A0:;
    func_088EE944();
    goto L_088F17A8;
L_088F17A8:;
    func_088F27B0();
    goto L_088F17B0;
L_088F17B0:;
    func_088EE974();
    goto L_088F17B8;
L_088F17B8:;
    sp = sp + 16;
    return;
L_088F17C4:;
    func_08903468();
    goto L_088F17CC;
L_088F17CC:;
    goto L_088F1768;
}

/* 088F17D4 */
void func_088F17D4(void)
{
    u32 v0 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F17D4:;
    sp = sp - 16;
    func_088EE9A8();
    goto L_088F17E4;
L_088F17E4:;
    v0 = func_08845BC4(0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F17EC;
L_088F17EC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F1818; }
    goto L_088F17F4;
L_088F17F4:;
    a0 = ((u32)(uintptr_t)func_08845D04) - (23812);
    goto L_088F17F8;
L_088F17F8:;
    a0 = a0 + 23812;
    a1 = 1;
    func_08845D58(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F1804;
L_088F1804:;
    func_088D5580(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F180C;
L_088F180C:;
    sp = sp + 16;
    return;
L_088F1818:;
    func_08845C00(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F1820;
L_088F1820:;
    a0 = ((u32)(uintptr_t)func_08845D04) - (23812);
    goto L_088F17F8;
}

/* 088F1828 */
void func_088F1828(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_088F1828:;
    a1 = D_08AECF40 - (-12480);
    a2 = D_08AECF44 - (-12476);
    f0 = BITSF(LD32(a1-12480));
    f1 = BITSF(LD32(a2-12476));
    v0 = D_08B450AC - (20652);
    v1 = v0 + 20652;
    fcc = FCMP(f0, f1, 12);
    ST32(v1+4, 0);
    f8 = f0;
    ST32(v1+8, FBITS(f0));
    v1 = v1 + 12;
    cnd_ = !fcc;
    ST32(v0+20652, 0);
    if (cnd_) { goto L_088F1954; }
    goto L_088F185C;
L_088F185C:;
    v0 = D_08AECF48 - (-12472);
    {v[16]=0.63661977236f;}
    f14 = BITSF(LD32(v0-12472));
    v0 = D_08AECF4C - (-12468);
    f13 = f1;
    a0 = v0 - 12468;
    f11 = f0;
    f12 = f0;
    goto L_088F187C;
L_088F187C:;
    f0 = f8 * f14;
    fcc = FCMP(f12, f8, 12);
    ST32(v1+4, 0);
    f5 = f12;
    v0 = FBITS(f0);
    {v[24]=BITSF(v0);}
    {float s0=v[24];float t0=v[16];float d0=s0*t0;v[0]=d0;}
    {v[20]=BITSF(v0);}
    {float s0=v[20];float t0=v[16];float d0=s0*t0;v[4]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[4]);}
    ST32(v1, FBITS(f0));
    f4 = f0;
    f6 = BITSF(v0);
    ST32(v1+8, v0);
    cnd_ = !fcc;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1930; }
    goto L_088F18CC;
L_088F18CC:;
    f7 = f12 / f8;
    f10 = BITSF(LD32(a0));
    f9 = f12;
    goto L_088F18D8;
L_088F18D8:;
    f0 = f5 * f10;
    f5 = f5 + f9;
    ST32(v1+8, FBITS(f6));
    f0 = f0 * f7;
    fcc = FCMP(f5, f8, 12);
    v0 = FBITS(f0);
    {v[12]=BITSF(v0);}
    {v[8]=BITSF(v0);}
    {float s0=v[12];float t0=v[16];float d0=s0*t0;v[0]=d0;}
    {float s0=v[8];float t0=v[16];float d0=s0*t0;v[4]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    f1 = f2 * f4;
    f0 = f3 * f4;
    ST32(v1+4, FBITS(f1));
    ST32(v1, FBITS(f0));
    cnd_ = fcc;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F18D8; }
    goto L_088F1930;
L_088F1930:;
    f8 = f8 + f11;
    ST32(v1+4, FBITS(f4));
    fcc = FCMP(f8, f13, 12);
    ST32(v1+8, FBITS(f6));
    ST32(v1, 0);
    cnd_ = fcc;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F187C; }
    goto L_088F194C;
L_088F194C:;
    f0 = BITSF(LD32(a1-12480));
    f1 = BITSF(LD32(a2-12476));
    goto L_088F1954;
L_088F1954:;
    ST32(v1+4, 0);
    f5 = f0;
    fcc = FCMP(f0, f1, 12);
    ST32(v1, FBITS(f0));
    ST32(v1+8, 0);
    cnd_ = !fcc;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F19CC; }
    goto L_088F1970;
L_088F1970:;
    v0 = D_08AECF48 - (-12472);
    f7 = BITSF(LD32(v0-12472));
    {v[16]=0.63661977236f;}
    f6 = f1;
    f4 = f0;
    goto L_088F1984;
L_088F1984:;
    f0 = f5 * f7;
    f5 = f5 + f4;
    ST32(v1+8, 0);
    v0 = FBITS(f0);
    {v[32]=BITSF(v0);}
    {float s0=v[32];float t0=v[16];float d0=s0*t0;v[0]=d0;}
    {v[28]=BITSF(v0);}
    {float s0=v[28];float t0=v[16];float d0=s0*t0;v[4]=d0;}
    fcc = FCMP(f5, f6, 12);
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[4]);}
    ST32(v1+4, FBITS(f1));
    ST32(v1, v0);
    cnd_ = fcc;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1984; }
    goto L_088F19CC;
L_088F19CC:;
    f0 = BITSF(LD32(a1-12480));
    ST32(v1+8, 0);
    ST32(v1+4, FBITS(f0));
    ST32(v1, 0);
    return;
}

/* 088F19E0 */
void func_088F19E0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088F19E0:;
    sp = sp - 80;
    s0 = D_08B450AC - (20652);
    s1 = s0 + 20652;
    func_088F1828();
    goto L_088F1A10;
L_088F1A10:;
    t2 = D_08B45484 - (21636);
    f1 = BITSF(LD32(s0+20652));
    f2 = BITSF(LD32(s1+4));
    a2 = t2 + 21636;
    f0 = BITSF(LD32(s1+8));
    v0 = a2 + 0;
    ST32(t2+21636, FBITS(f1));
    a0 = 1;
    a1 = 12;
    ST32(v0+4, FBITS(f2));
    ST32(a2+8, FBITS(f0));
    a2 = a2 + 24;
    goto L_088F1A40;
L_088F1A40:;
    v1 = a0 - 1;
    s1 = s1 + a1;
    cnd_ = (s32)v1 < 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1B18; }
    goto L_088F1A50;
L_088F1A50:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    v0 = v0 - 1;
    ST32(a2, FBITS(f0));
    s1 = s1 + 12;
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    cnd_ = (s32)v0 >= 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1A50; }
    goto L_088F1A78;
L_088F1A78:;
    cnd_ = (s32)v1 < 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1B18; }
    goto L_088F1A80;
L_088F1A80:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2+4, FBITS(f1));
    s1 = s1 - 12;
    ST32(a2, FBITS(f0));
    ST32(a2+8, FBITS(f2));
    cnd_ = (s32)v0 >= 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1A80; }
    goto L_088F1AAC;
L_088F1AAC:;
    cnd_ = (s32)v1 < 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1B18; }
    goto L_088F1AB4;
L_088F1AB4:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2+8, FBITS(f2));
    s1 = s1 + 12;
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    cnd_ = (s32)v0 >= 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1AB4; }
    goto L_088F1AE4;
L_088F1AE4:;
    cnd_ = (s32)v1 < 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1B18; }
    goto L_088F1AEC;
L_088F1AEC:;
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2, FBITS(f1));
    s1 = s1 - 12;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f2));
    cnd_ = (s32)v0 >= 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1AEC; }
    goto L_088F1B18;
L_088F1B18:;
    a0 = a0 + 1;
    v0 = (s32)a0 < 4;
    cnd_ = v0 != 0;
    a1 = a1 + 12;
    if (cnd_) { goto L_088F1A40; }
    goto L_088F1B28;
L_088F1B28:;
    a0 = 3;
    goto L_088F1B2C;
L_088F1B2C:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v1 = a0 - 1;
    s1 = s1 - v0;
    cnd_ = (s32)v1 <= 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1C20; }
    goto L_088F1B48;
L_088F1B48:;
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2, FBITS(f1));
    s1 = s1 + 12;
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f0));
    cnd_ = (s32)v0 > 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1B48; }
    goto L_088F1B74;
L_088F1B74:;
    cnd_ = (s32)v1 <= 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1C20; }
    goto L_088F1B7C;
L_088F1B7C:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2+4, FBITS(f2));
    s1 = s1 - 12;
    ST32(a2, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    cnd_ = (s32)v0 > 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1B7C; }
    goto L_088F1BAC;
L_088F1BAC:;
    cnd_ = (s32)v1 <= 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1C20; }
    goto L_088F1BB4;
L_088F1BB4:;
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2, FBITS(f0));
    s1 = s1 + 12;
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    cnd_ = (s32)v0 > 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1BB4; }
    goto L_088F1BE8;
L_088F1BE8:;
    cnd_ = (s32)v1 <= 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_088F1C20; }
    goto L_088F1BF0;
L_088F1BF0:;
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    v0 = v0 - 1;
    ST32(a2, FBITS(f2));
    s1 = s1 - 12;
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    cnd_ = (s32)v0 > 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088F1BF0; }
    goto L_088F1C20;
L_088F1C20:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088F1B2C; }
    goto L_088F1C2C;
L_088F1C2C:;
    s1 = s1 - 12;
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    v0 = D_08B45124 - (20772);
    ST32(a2+8, FBITS(f0));
    v1 = v0 + 20772;
    a0 = 0 + 0;
    ST32(a2, FBITS(f1));
    a1 = 1;
    a3 = 0 + 0;
    ST32(a2+4, FBITS(f2));
    goto L_088F1C68;
L_088F1C68:;
    t1 = a0 + 0;
    t0 = a1 + 0;
    a2 = 1;
    v0 = a3 + 0;
    goto L_088F1C78;
L_088F1C78:;
    ST32(v1+4, a1);
    a1 = a1 + 1;
    ST32(v1, a0);
    ST32(v1+8, a1);
    cnd_ = v0 == 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1CAC; }
    goto L_088F1C90;
L_088F1C90:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = v0 - 1;
    ST32(v1+4, a1);
    ST32(v1+8, a0);
    v1 = v1 + 12;
    goto L_088F1C78;
L_088F1CAC:;
    a2 = a2 + 1;
    v0 = (s32)a2 < 4;
    cnd_ = v0 != 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_088F1C78; }
    goto L_088F1CBC;
L_088F1CBC:;
    a2 = 1;
    goto L_088F1CC0;
L_088F1CC0:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 + 1; goto L_088F1D0C; }
    goto L_088F1CC8;
L_088F1CC8:;
    ST32(v1+4, a1);
    a1 = a1 + 1;
    ST32(v1, a0);
    ST32(v1+8, a1);
    cnd_ = v0 == a2;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1CFC; }
    goto L_088F1CE0;
L_088F1CE0:;
    ST32(v1, a0);
    a0 = a0 + 1;
    ST32(v1+4, a1);
    ST32(v1+8, a0);
    goto L_088F1CF0;
L_088F1CF0:;
    v1 = v1 + 12;
    v0 = v0 - 1;
    goto L_088F1CC0;
L_088F1CFC:;
    ST32(v1, a0);
    ST32(v1+4, a1);
    ST32(v1+8, t1);
    goto L_088F1CF0;
L_088F1D0C:;
    v0 = (s32)a3 < 3;
    ST32(v1+4, a1);
    a0 = a0 + 1;
    a1 = a1 + 1;
    ST32(v1, t1);
    ST32(v1+8, t0);
    cnd_ = v0 != 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1C68; }
    goto L_088F1D2C;
L_088F1D2C:;
    a3 = 2;
    goto L_088F1D30;
L_088F1D30:;
    t1 = a0 + 0;
    t0 = a1 + 0;
    a2 = 5;
    v0 = a3 + 0;
    goto L_088F1D40;
L_088F1D40:;
    ST32(v1, a0);
    a0 = a0 + 1;
    ST32(v1+4, a1);
    ST32(v1+8, a0);
    cnd_ = v0 == 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1D74; }
    goto L_088F1D58;
L_088F1D58:;
    ST32(v1+4, a1);
    a1 = a1 + 1;
    v0 = v0 - 1;
    ST32(v1, a0);
    ST32(v1+8, a1);
    v1 = v1 + 12;
    goto L_088F1D40;
L_088F1D74:;
    a2 = a2 + 1;
    v0 = (s32)a2 < 8;
    cnd_ = v0 != 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_088F1D40; }
    goto L_088F1D84;
L_088F1D84:;
    a2 = 1;
    goto L_088F1D88;
L_088F1D88:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 - 1; goto L_088F1DD4; }
    goto L_088F1D90;
L_088F1D90:;
    ST32(v1, a0);
    a0 = a0 + 1;
    ST32(v1+4, a1);
    ST32(v1+8, a0);
    cnd_ = v0 == a2;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1DC4; }
    goto L_088F1DA8;
L_088F1DA8:;
    ST32(v1+4, a1);
    a1 = a1 + 1;
    ST32(v1, a0);
    ST32(v1+8, a1);
    goto L_088F1DB8;
L_088F1DB8:;
    v1 = v1 + 12;
    v0 = v0 - 1;
    goto L_088F1D88;
L_088F1DC4:;
    ST32(v1, a0);
    ST32(v1+4, a1);
    ST32(v1+8, t0);
    goto L_088F1DB8;
L_088F1DD4:;
    ST32(v1, a0);
    a1 = a1 + 1;
    a0 = a0 + 1;
    ST32(v1+4, t0);
    ST32(v1+8, t1);
    cnd_ = (s32)a3 >= 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_088F1D30; }
    goto L_088F1DF0;
L_088F1DF0:;
    v0 = D_08AECF50 - (-12464);
    f22 = BITSF(LD32(v0-12464));
    v1 = D_08AECF54 - (-12460);
    v0 = D_08AECF58 - (-12456);
    {v[0]=1.57079632679f;}
    f21 = BITSF(LD32(v1-12460));
    f20 = BITSF(LD32(v0-12456));
    s1 = t2 + 21636;
    s3 = 0x3fff0000u;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s3 = s3 | 0xffff;
    s0 = s1 + 0;
    s2 = 37;
    goto L_088F1E24;
L_088F1E24:;
    f0 = BITSF(LD32(s1+4));
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    f12 = BITSF(LD32(s1+8));
    f13 = BITSF(LD32(s1));
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    s2 = s2 - 1;
    s1 = s1 + 24;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f0 = f1 * f22;
    f0 = f0 + f21;
    f0 = f0 * f20;
    ST32(s0+16, FBITS(f0));
    f0 = func_08A9F5FC(f12, f13);
    goto L_088F1E78;
L_088F1E78:;
    f0 = f0 * f22;
    ST32(s0+12, s3);
    f0 = f0 + f21;
    f0 = f0 * f20;
    ST32(s0+20, FBITS(f0));
    cnd_ = (s32)s2 >= 0;
    s0 = s0 + 24;
    if (cnd_) { goto L_088F1E24; }
    goto L_088F1E94;
L_088F1E94:;
    v0 = D_08B45814 - (22548);
    v1 = D_08B45124 - (20772);
    a3 = v0 + 22548;
    a2 = v1 + 20772;
    s2 = 0 + 0;
    v0 = s2 << 1;
    goto L_088F1EAC;
L_088F1EAC:;
    v0 = v0 + s2;
    v1 = v0 << 2;
    v0 = v0 << 1;
    a0 = v0 + a3;
    v1 = v1 + a2;
    a1 = 2;
    goto L_088F1EC4;
L_088F1EC4:;
    v0 = LD_U16(v1);
    a1 = a1 - 1;
    v1 = v1 + 4;
    ST16(a0, v0);
    cnd_ = (s32)a1 >= 0;
    a0 = a0 + 2;
    if (cnd_) { goto L_088F1EC4; }
    goto L_088F1EDC;
L_088F1EDC:;
    s2 = s2 + 1;
    v0 = (s32)s2 < 72;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s2 << 1; goto L_088F1EAC; }
    goto L_088F1EEC;
L_088F1EEC:;
    sp = sp + 80;
    return;
}

/* 088F1F14 */
void func_088F1F14(void)
{
L_088F1F14:;
    return;
}

/* 088F1F1C */
rv_t func_088F1F1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1F1C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088F1F14();
    goto L_088F1F30;
L_088F1F30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F1F3C */
void func_088F1F3C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1F3C:;
    a0 = D_08B459C4 - (22980);
    sp = sp - 16;
    a0 = a0 + 22980;
    func_088F1F9C(a0);
    goto L_088F1F50;
L_088F1F50:;
    sp = sp + 16;
    return;
}

/* 088F1F5C */
void func_088F1F5C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1F5C:;
    a0 = D_08B459C4 - (22980);
    sp = sp - 16;
    a0 = a0 + 22980;
    func_088F1FAC(a0);
    goto L_088F1F70;
L_088F1F70:;
    sp = sp + 16;
    return;
}

/* 088F1F7C */
void func_088F1F7C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1F7C:;
    a0 = D_08B459C4 - (22980);
    sp = sp - 16;
    a0 = a0 + 22980;
    func_088F2038(a0);
    goto L_088F1F90;
L_088F1F90:;
    sp = sp + 16;
    return;
}

/* 088F1F9C */
void func_088F1F9C(u32 a0)
{
L_088F1F9C:;
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0, 0);
    return;
}

/* 088F1FAC */
void func_088F1FAC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F1FAC:;
    sp = sp - 16;
    s2 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F1FF8; }
    goto L_088F1FD0;
L_088F1FD0:;
    s0 = 0 + 0;
    a0 = LD32(s2+8);
    goto L_088F1FD8;
L_088F1FD8:;
    s1 = s1 + 1;
    a0 = s0 + a0;
    v0 = LD32(a0+44);
    cnd_ = (s32)v0 >= 0;
    s0 = s0 + 52;
    if (cnd_) { goto L_088F2028; }
    goto L_088F1FEC;
L_088F1FEC:;
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+8); goto L_088F1FD8; }
    goto L_088F1FF8;
L_088F1FF8:;
    a0 = 17;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2000;
L_088F2000:;
    a0 = s2 + 8;
    func_08AB9A98(a0, 0, 0, 0);
    goto L_088F2008;
L_088F2008:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2010;
L_088F2010:;
    sp = sp + 16;
    return;
L_088F2028:;
    func_088F269C(a0);
    goto L_088F2030;
L_088F2030:;
    v1 = LD32(s2);
    goto L_088F1FEC;
}

/* 088F2038 */
void func_088F2038(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2038:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088F1FAC(a0);
    goto L_088F204C;
L_088F204C:;
    a0 = s0 + 0;
    func_088F1F9C(a0);
    goto L_088F2054;
L_088F2054:;
    sp = sp + 16;
    return;
}

/* 088F2064 */
u32 func_088F2064(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2064:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    s2 = LD32(a0);
    func_088F20F4(a0, a1);
    goto L_088F2088;
L_088F2088:;
    v1 = LD32(s1+4);
    v0 = LD32(s1);
    a2 = s2 + 0;
    v1 = v1 + s0;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    ST32(s1+4, v1);
    if (cnd_) { goto L_088F20D8; }
    goto L_088F20A4;
L_088F20A4:;
    v0 = 52;
    { s64 p_ = (s64)(s32)s2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    goto L_088F20B0;
L_088F20B0:;
    a0 = LD32(s1+8);
    a2 = a2 + 1;
    a0 = a1 + a0;
    v1 = LD32(a0+44);
    v1 = (v1 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    ST32(a0+44, v1);
    v0 = LD32(s1);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = a1 + 52;
    if (cnd_) { goto L_088F20B0; }
    goto L_088F20D8;
L_088F20D8:;
    v0 = s2 + 0;
    sp = sp + 16;
    return v0;
}

/* 088F20F4 */
void func_088F20F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F20F4:;
    sp = sp - 48;
    s2 = a0 + 0;
    v0 = LD32(a0);
    a0 = 17;
    ST32(sp, 0);
    s4 = v0 + a1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2128;
L_088F2128:;
    a0 = sp + 0;
    a1 = s4 + 0;
    func_08AB9AD8(a0, a1, 0, 0, 0);
    goto L_088F2134;
L_088F2134:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F213C;
L_088F213C:;
    a2 = LD32(sp);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088F2208; }
    goto L_088F2148;
L_088F2148:;
    v1 = LD32(s2);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F2198; }
    goto L_088F2154;
L_088F2154:;
    a1 = LD32(s2+8);
    s0 = 0 + 0;
    goto L_088F215C;
L_088F215C:;
    a0 = a2 + s0;
    a1 = a1 + s0;
    func_088F22D4(a0, a1);
    goto L_088F2168;
L_088F2168:;
    v1 = LD32(s2+8);
    a2 = LD32(sp);
    s1 = s1 + 1;
    v0 = s0 + v1;
    a0 = LD32(v0+48);
    a1 = v1 + 0;
    v1 = s0 + a2;
    ST32(v1+48, a0);
    v1 = LD32(s2);
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    s0 = s0 + 52;
    if (cnd_) { goto L_088F215C; }
    goto L_088F2198;
L_088F2198:;
    v0 = (s32)v1 < (s32)s4;
    cnd_ = v0 == 0;
    v0 = 52;
    if (cnd_) { goto L_088F21E0; }
    goto L_088F21A4;
L_088F21A4:;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s3 = 0x80000000u;
    s0 = s4 - v1;
    s1 = lo;
    goto L_088F21B4;
L_088F21B4:;
    a0 = a2 + s1;
    func_088F2274(a0);
    goto L_088F21BC;
L_088F21BC:;
    v1 = LD32(sp);
    s0 = s0 - 1;
    a0 = s1 + v1;
    v0 = LD32(a0+44);
    a2 = v1 + 0;
    s1 = s1 + 52;
    v0 = v0 | s3;
    cnd_ = s0 != 0;
    ST32(a0+44, v0);
    if (cnd_) { goto L_088F21B4; }
    goto L_088F21E0;
L_088F21E0:;
    a0 = 17;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F21E8;
L_088F21E8:;
    a0 = s2 + 8;
    func_08AB9A98(a0, 0, 0, 0);
    goto L_088F21F0;
L_088F21F0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F21F8;
L_088F21F8:;
    v0 = LD32(sp);
    ST32(s2, s4);
    v1 = 1;
    ST32(s2+8, v0);
    goto L_088F2208;
L_088F2208:;
    v0 = v1 + 0;
    sp = sp + 48;
    return;
}

/* 088F222C */
u32 func_088F222C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_088F222C:;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088F226C; }
    goto L_088F2238;
L_088F2238:;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_088F226C; }
    goto L_088F2240;
L_088F2240:;
    v0 = LD32(a0);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F226C; }
    goto L_088F2250;
L_088F2250:;
    v0 = 52;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + v1;
    v1 = LD32(v0+44);
    v1 = (v1 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0);
    if (v1 == 0) a2 = v0;
    goto L_088F226C;
L_088F226C:;
    v0 = a2 + 0;
    return v0;
}

/* 088F2274 */
void func_088F2274(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088F2274:;
    v0 = D_08AECF5C - (-12452);
    f2 = BITSF(LD32(v0-12452));
    v0 = D_08AECF60 - (-12448);
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0-12448));
    a2 = (u32)-1;
    v1 = a0 + 20;
    a1 = a0 + 32;
    v0 = 1;
    ST32(a0+12, FBITS(f0));
    ST32(a0+44, v0);
    ST32(a0, FBITS(f2));
    ST32(a0+4, FBITS(f2));
    ST32(a0+8, FBITS(f2));
    ST32(a0+48, a2);
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f1));
    ST32(a1+8, FBITS(f1));
    ST32(a0+32, FBITS(f1));
    ST32(a1+4, FBITS(f1));
    ST32(a0+16, a2);
    ST32(a0+40, FBITS(f2));
    ST32(a0+20, FBITS(f1));
    return;
}

/* 088F22D4 */
void func_088F22D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_088F22D4:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+12));
    ST32(a0, FBITS(f0));
    v1 = a1 + 20;
    a2 = a0 + 20;
    ST32(a0+4, FBITS(f1));
    a3 = a1 + 32;
    t0 = a0 + 32;
    ST32(a0+8, FBITS(f2));
    v0 = a0 + 0;
    ST32(a0+12, FBITS(f3));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(a1+20));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    ST32(a0+20, FBITS(f2));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(a3+4));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f0));
    ST32(a0+32, FBITS(f2));
    a2 = LD32(a1+16);
    v1 = LD32(a1+44);
    ST32(a0+16, a2);
    ST32(a0+44, v1);
    return;
}

/* 088F234C */
void func_088F234C(u32 a0, u32 a1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F234C:;
    sp = sp - 48;
    s2 = (u32)-1;
    v1 = LD32(a0+16);
    cnd_ = v1 == s2;
    s0 = a0 + 0;
    if (cnd_) { goto L_088F2680; }
    goto L_088F2384;
L_088F2384:;
    s1 = LD32(a0+48);
    cnd_ = s1 == s2;
    s4 = D_08B44C2C - (19500);
    if (cnd_) { goto L_088F2668; }
    goto L_088F2390;
L_088F2390:;
    s3 = s0 + 20;
    cnd_ = s1 == s2;
    t1 = LD32(s4+19500);
    if (cnd_) { goto L_088F24C8; }
    goto L_088F239C;
L_088F239C:;
    v0 = LD32(t1+12);
    cnd_ = s1 == v0;
    if (cnd_) { s2 = LD32(t1+8); goto L_088F2440; }
    goto L_088F23A8;
L_088F23A8:;
    a0 = LD32(t1);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088F23E8; }
    goto L_088F23B4;
L_088F23B4:;
    a1 = LD32(a0+8);
    goto L_088F23B8;
L_088F23B8:;
    v0 = (s32)s1 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088F23D8; }
    goto L_088F23C4;
L_088F23C4:;
    v0 = LD32(t1+4);
    v0 = a1 + v0;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F23E8; }
    goto L_088F23D8;
L_088F23D8:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_088F23B8; }
    goto L_088F23E4;
L_088F23E4:;
    v1 = 0 + 0;
    goto L_088F23E8;
L_088F23E8:;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F2440; }
    goto L_088F23F0;
L_088F23F0:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    a3 = s1 - v0;
    if (cnd_) { goto L_088F2428; }
    goto L_088F2408;
L_088F2408:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_088F2410;
L_088F2410:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_088F2650; }
    goto L_088F2420;
L_088F2420:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088F2410; }
    goto L_088F2428;
L_088F2428:;
    v0 = 0 + 0;
    goto L_088F242C;
L_088F242C:;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F2440; }
    goto L_088F2434;
L_088F2434:;
    s2 = v0 + 0;
    ST32(t1+12, s1);
    ST32(t1+8, v0);
    goto L_088F2440;
L_088F2440:;
    cnd_ = s2 == 0;
    if (cnd_) { a1 = LD32(s0+48); goto L_088F24CC; }
    goto L_088F2448;
L_088F2448:;
    v1 = LD32(s2+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s3));
    if (cnd_) { goto L_088F24AC; }
    goto L_088F2458;
L_088F2458:;
    f0 = BITSF(LD32(s2));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_088F249C; }
    goto L_088F246C;
L_088F246C:;
    f1 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s3+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_088F249C; }
    goto L_088F2484;
L_088F2484:;
    f1 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s3+8)); goto L_088F24B0; }
    goto L_088F249C;
L_088F249C:;
    a0 = s2 + 0;
    func_088EC3FC(a0, t1, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088F24A4;
L_088F24A4:;
    v1 = LD32(s2+24);
    f2 = BITSF(LD32(s3));
    goto L_088F24AC;
L_088F24AC:;
    f1 = BITSF(LD32(s3+8));
    goto L_088F24B0;
L_088F24B0:;
    f0 = BITSF(LD32(s3+4));
    v0 = v1 | 0x4;
    ST32(s2+24, v0);
    ST32(s2, FBITS(f2));
    ST32(s2+4, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    goto L_088F24C8;
L_088F24C8:;
    a1 = LD32(s0+48);
    goto L_088F24CC;
L_088F24CC:;
    a0 = LD32(s4+19500);
    s1 = s0 + 32;
    s2 = D_08B44C2C - (19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F24DC;
L_088F24DC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F2500; }
    goto L_088F24E4;
L_088F24E4:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(s1+4));
    v0 = v0 + 12;
    ST32(v1+12, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_088F2500;
L_088F2500:;
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    f20 = BITSF(LD32(s0+12));
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2510;
L_088F2510:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+28, FBITS(f20)); goto L_088F2518; }
    goto L_088F2518;
L_088F2518:;
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    s1 = LD32(s0+16);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2528;
L_088F2528:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+32, s1); goto L_088F2530; }
    goto L_088F2530;
L_088F2530:;
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    f22 = BITSF(LD32(s0));
    f21 = BITSF(LD32(s0+4));
    f20 = BITSF(LD32(s0+8));
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2548;
L_088F2548:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+44); goto L_088F2560; }
    goto L_088F2550;
L_088F2550:;
    ST32(v0+44, FBITS(f20));
    ST32(v0+36, FBITS(f22));
    ST32(v0+40, FBITS(f21));
    v0 = LD32(s0+44);
    goto L_088F2560;
L_088F2560:;
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    s1 = v0 & 0x1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2570;
L_088F2570:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F2584; }
    goto L_088F2578;
L_088F2578:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 3)) | ((s1 & 0x1) << 3);
    ST32(v1+24, v0);
    goto L_088F2584;
L_088F2584:;
    v0 = LD32(s0+44);
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    s1 = (v0 >> 1) & 0x1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2598;
L_088F2598:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F25AC; }
    goto L_088F25A0;
L_088F25A0:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 5)) | ((s1 & 0x1) << 5);
    ST32(v1+24, v0);
    goto L_088F25AC;
L_088F25AC:;
    v0 = LD32(s0+44);
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    s1 = (v0 >> 2) & 0x1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F25C0;
L_088F25C0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F25D4; }
    goto L_088F25C8;
L_088F25C8:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 6)) | ((s1 & 0x1) << 6);
    ST32(v1+24, v0);
    goto L_088F25D4;
L_088F25D4:;
    v0 = LD32(s0+44);
    a1 = LD32(s0+48);
    a0 = LD32(s2+19500);
    s1 = (v0 >> 3) & 0x1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F25E8;
L_088F25E8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F2614; }
    goto L_088F25F0;
L_088F25F0:;
    cnd_ = s1 == 0;
    if (cnd_) { v1 = LD32(s0+24); goto L_088F2608; }
    goto L_088F25F8;
L_088F25F8:;
    v1 = LD32(v0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F2640; }
    goto L_088F2608;
L_088F2608:;
    v0 = v1 + 0;
    v0 = (v0 & ~(0x1u << 7)) | ((s1 & 0x1) << 7);
    ST32(s0+24, v0);
    goto L_088F2614;
L_088F2614:;
    goto L_088F2618;
L_088F2618:;
    sp = sp + 48;
    return;
L_088F2640:;
    a0 = s0 + 0;
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088F2648;
L_088F2648:;
    v1 = LD32(s0+24);
    goto L_088F2608;
L_088F2650:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_088F242C;
L_088F2668:;
    a0 = s4 + 19500;
    { rv_t r_ = func_088EBDD0(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F2670;
L_088F2670:;
    cnd_ = v0 == s1;
    ST32(s0+48, v0);
    if (cnd_) { goto L_088F2614; }
    goto L_088F2678;
L_088F2678:;
    s1 = v0 + 0;
    goto L_088F2390;
L_088F2680:;
    v0 = LD32(a0+48);
    cnd_ = v0 == v1;
    if (cnd_) {  goto L_088F2618; }
    goto L_088F268C;
L_088F268C:;
    func_088F269C(a0);
    goto L_088F2694;
L_088F2694:;
    goto L_088F2618;
}

/* 088F269C */
void func_088F269C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F269C:;
    sp = sp - 16;
    a1 = a0 + 48;
    s1 = (u32)-1;
    s0 = a0 + 0;
    a0 = D_08B44C2C - (19500);
    v0 = LD32(s0+48);
    cnd_ = v0 == s1;
    a0 = a0 + 19500;
    if (cnd_) { goto L_088F26D4; }
    goto L_088F26C8;
L_088F26C8:;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F26D0;
L_088F26D0:;
    ST32(s0+48, s1);
    goto L_088F26D4;
L_088F26D4:;
    sp = sp + 16;
    return;
}

/* 088F26E8 */
void func_088F26E8(void)
{
L_088F26E8:;
    return;
}

/* 088F26F0 */
rv_t func_088F26F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F26F0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088F26E8();
    goto L_088F2704;
L_088F2704:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F2710 */
rv_t func_088F2710(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2710:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    func_088F26E8();
    goto L_088F2724;
L_088F2724:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F2730 */
void func_088F2730(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2730:;
    sp = sp - 16;
    v0 = D_08B459D0 - (22992);
    ST32(v0+22992, 0);
    func_088F2760(t1, t2, t3);
    goto L_088F2744;
L_088F2744:;
    func_088CAC84();
    goto L_088F274C;
L_088F274C:;
    func_089183E0();
    goto L_088F2754;
L_088F2754:;
    sp = sp + 16;
    return;
}

/* 088F2760 */
void func_088F2760(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2760:;
    sp = sp - 16;
    func_088CAC8C(t1, t2, t3);
    goto L_088F2770;
L_088F2770:;
    func_089183D8();
    goto L_088F2778;
L_088F2778:;
    sp = sp + 16;
    return;
}

/* 088F2784 */
void func_088F2784(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2784:;
    sp = sp - 16;
    func_089183E8();
    goto L_088F2794;
L_088F2794:;
    func_088CAD64(0, 0, 0);
    goto L_088F279C;
L_088F279C:;
    sp = sp + 16;
    return;
}

/* 088F27A8 */
void func_088F27A8(void)
{
L_088F27A8:;
    return;
}

/* 088F27B0 */
void func_088F27B0(void)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F27B0:;
    sp = sp - 16;
    s0 = D_08B459D0 - (22992);
    v1 = LD32(s0+22992);
    v0 = (v1 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F2814; }
    goto L_088F27CC;
L_088F27CC:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F2804; }
    goto L_088F27D8;
L_088F27D8:;
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F27F4; }
    goto L_088F27E4;
L_088F27E4:;
    goto L_088F27E8;
L_088F27E8:;
    sp = sp + 16;
    return;
L_088F27F4:;
    func_089183D0();
    goto L_088F27FC;
L_088F27FC:;
    goto L_088F27E8;
L_088F2804:;
    func_089183C8();
    goto L_088F280C;
L_088F280C:;
    v1 = LD32(s0+22992);
    goto L_088F27D8;
L_088F2814:;
    func_089183F0();
    goto L_088F281C;
L_088F281C:;
    v1 = LD32(s0+22992);
    goto L_088F27CC;
}

/* 088F2824 */
void func_088F2824(void)
{
L_088F2824:;
    return;
}

/* 088F282C */
rv_t func_088F282C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F282C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088F2824();
    goto L_088F2840;
L_088F2840:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F284C */
u64 func_088F284C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088F284C:;
    v0 = D_08B459F4 - (23028);
    v1 = LD32(v0+23028);
    cnd_ = a0 == v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_088F2868; }
    goto L_088F285C;
L_088F285C:;
    v0 = D_08B459F8 - (23032);
    ST32(v0+23032, a0);
    v0 = 1;
    goto L_088F2868;
L_088F2868:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F2870 */
rv_t func_088F2870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088F2870:;
    sp = sp - 64;
    v0 = D_08B45A30 - (23088);
    s2 = a1 + 0;
    s1 = a2 + 0;
    v0 = LD32(v0+23088);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088F29CC; }
    goto L_088F289C;
L_088F289C:;
    a0 = D_08B28EF4 - (-28940);
    goto L_088F28A0;
L_088F28A0:;
    v0 = 999;
    cnd_ = s0 == v0;
    v1 = a0 - 28940;
    if (cnd_) { goto L_088F2994; }
    goto L_088F28AC;
L_088F28AC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088F28FC; }
    goto L_088F28D0;
L_088F28D0:;
    a0 = LD32(a1);
    goto L_088F28D4;
L_088F28D4:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_088F29AC; }
    goto L_088F28EC;
L_088F28EC:;
    a1 = LD32(a1+4);
    goto L_088F28F0;
L_088F28F0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_088F28D4; }
    goto L_088F28F8;
L_088F28F8:;
    a0 = 0 + 0;
    goto L_088F28FC;
L_088F28FC:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088F2998; }
    goto L_088F2904;
L_088F2904:;
    {v[112]=BITSF(LD32(s1+(0)));}
    {v[113]=BITSF(LD32(s1+(4)));}
    {v[114]=BITSF(LD32(s1+(8)));}
    {v[115]=BITSF(LD32(s1+(12)));}
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
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    v0 = LD32(a0);
    a1 = s2 + 0;
    a2 = sp + 0;
    v1 = LD32(v0+52);
    t_ = v1;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F2994;
L_088F2994:;
    goto L_088F2998;
L_088F2998:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088F29AC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088F28F0; }
    goto L_088F29B8;
L_088F29B8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088F28F0; }
    goto L_088F29C4;
L_088F29C4:;
    goto L_088F28FC;
L_088F29CC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F29D4;
L_088F29D4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F2998; }
    goto L_088F29DC;
L_088F29DC:;
    a0 = D_08B28EF4 - (-28940);
    goto L_088F28A0;
}

/* 088F29E4 */
u64 func_088F29E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F29E4:;
    sp = sp - 16;
    v0 = D_08B459F4 - (23028);
    v1 = LD32(v0+23028);
    cnd_ = v1 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088F2A8C; }
    goto L_088F29FC;
L_088F29FC:;
    v1 = LD32(a0+40);
    v0 = D_08B45A0C - (23052);
    a0 = D_08B45A04 - (23044);
    cnd_ = v1 != 0;
    ST32(v0+23052, v1);
    if (cnd_) { goto L_088F2A98; }
    goto L_088F2A10;
L_088F2A10:;
    v0 = D_08B45A08 - (23048);
    ST32(v0+23048, 0);
    ST32(a0+23044, 0);
    goto L_088F2A1C;
L_088F2A1C:;
    v0 = LD32(a1);
    f1 = BITSF(LD32(a0+23044));
    f0 = BITSF(0);
    a3 = D_08B45A14 - (23060);
    v1 = a3 + 23060;
    v0 = v0 & 0x1;
    a0 = 2;
    fcc = FCMP(f1, f0, 2);
    cnd_ = v0 == 0;
    a2 = v1 + 12;
    if (cnd_) { goto L_088F2A7C; }
    goto L_088F2A44;
L_088F2A44:;
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+12));
    ST32(a3+23060, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    v0 = LD32(a1+16);
    ST32(v1+12, v0);
    v1 = LD32(a1+20);
    ST32(a2+4, v1);
    v0 = LD32(a1+24);
    ST32(a2+8, v0);
    v1 = LD32(a1+28);
    ST32(a2+12, v1);
    goto L_088F2A7C;
L_088F2A7C:;
    cnd_ = !fcc;
    if (cnd_) { a0 = 1; goto L_088F2A84; }
    goto L_088F2A84;
L_088F2A84:;
    { u64 r_ = func_088F284C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2A8C;
L_088F2A8C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F2A98:;
    f1 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(a1+36));
    v0 = D_08B45A08 - (23048);
    ST32(a0+23044, FBITS(f1));
    ST32(v0+23048, FBITS(f0));
    goto L_088F2A1C;
}

/* 088F2AB0 */
void func_088F2AB0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
L_088F2AB0:;
    v1 = 4;
    v0 = D_08B459F8 - (23032);
    ST32(v0+23032, v1);
    a0 = 0xff000000u;
    v0 = D_08B459FC - (23036);
    ST32(v0+23036, a0);
    a1 = 999;
    v0 = D_08B45A10 - (23056);
    ST32(v0+23056, a1);
    v1 = D_08B459F4 - (23028);
    v0 = D_08B45A00 - (23040);
    ST32(v1+23028, 0);
    ST32(v0+23040, 0);
    return;
}

/* 088F2AE8 */
void func_088F2AE8(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2AE8:;
    sp = sp - 16;
    func_088F2B0C();
    goto L_088F2AF8;
L_088F2AF8:;
    func_088F2AB0();
    goto L_088F2B00;
L_088F2B00:;
    sp = sp + 16;
    return;
}

/* 088F2B0C */
void func_088F2B0C(void)
{
L_088F2B0C:;
    return;
}

/* 088F2B14 */
rv_t func_088F2B14(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F2B14:;
    sp = sp - 32;
    a2 = a1 + 0;
    v0 = 999;
    a1 = D_08B28F54 - (-28844);
    cnd_ = a2 == v0;
    v1 = a1 - 28844;
    if (cnd_) { goto L_088F2BA8; }
    goto L_088F2B30;
L_088F2B30:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-28844);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088F2B74; }
    goto L_088F2B54;
L_088F2B54:;
    a1 = LD32(v1);
    goto L_088F2B58;
L_088F2B58:;
    v0 = LD32(a1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a1+16); goto L_088F2BB4; }
    goto L_088F2B64;
L_088F2B64:;
    v1 = LD32(v1+4);
    goto L_088F2B68;
L_088F2B68:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1); goto L_088F2B58; }
    goto L_088F2B70;
L_088F2B70:;
    a1 = 0 + 0;
    goto L_088F2B74;
L_088F2B74:;
    cnd_ = a1 == 0;
    a3 = a1 + 40;
    if (cnd_) { goto L_088F2BA8; }
    goto L_088F2B7C;
L_088F2B7C:;
    v0 = LD32(a1+40);
    a2 = sp + 0;
    ST32(sp, v0);
    a1 = a1 + 28;
    v1 = LD32(a3+4);
    ST32(sp+4, v1);
    v0 = LD32(a3+8);
    ST32(sp+8, v0);
    v1 = LD32(a3+12);
    ST32(sp+12, v1);
    { rv_t r_ = func_088F2870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F2BA8;
L_088F2BA8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088F2BB4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_088F2B68; }
    goto L_088F2BC0;
L_088F2BC0:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_088F2B68; }
    goto L_088F2BCC;
L_088F2BCC:;
    goto L_088F2B74;
}

/* 088F2BD4 */
u64 func_088F2BD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2BD4:;
    sp = sp - 16;
    v0 = 136;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088F2BFC; }
    goto L_088F2BEC;
L_088F2BEC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F2BFC:;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088F2C10; }
    goto L_088F2C08;
L_088F2C08:;
    { u64 r_ = func_088F29E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F2C10;
L_088F2C10:;
    a1 = 1;
    goto L_088F2BEC;
}

/* 088F2C18 */
u32 func_088F2C18(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2C18:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    a0 = D_08B45A10 - (23056);
    a1 = a1 & v0;
    cnd_ = a1 != 0;
    a0 = a0 + 23056;
    if (cnd_) { goto L_088F2C4C; }
    goto L_088F2C40;
L_088F2C40:;
    goto L_088F2C44;
L_088F2C44:;
    sp = sp + 16;
    return v0;
L_088F2C4C:;
    func_08AB9B40();
    goto L_088F2C54;
L_088F2C54:;
    goto L_088F2C44;
}

/* 088F2C5C */
rv_t func_088F2C5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F2C5C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    v0 = func_088F2C18(a0, a1);
    goto L_088F2C70;
L_088F2C70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F2C7C */
float func_088F2C7C(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_088F2C7C:;
    v0 = D_08AECF74 - (-12428);
    f0 = BITSF(LD32(v0-12428));
    return f0;
}

/* 088F2C88 */
void func_088F2C88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 560);
L_088F2C88:;
    sp = sp - 560;
    s6 = D_08B21184 - (4484);
    s4 = a2 + 0;
    s1 = sp + 48;
    f20 = f12;
    t0 = LD32(s6+4484);
    ST32(sp+320, a0);
    a0 = s1 + 0;
    v0 = LD32(t0+104);
    t0 = t0 + 104;
    ST32(sp+324, a1);
    a1 = 0 + 0;
    ST32(sp, v0);
    v0 = LD32(t0+4);
    ST32(sp+328, a3);
    ST32(sp+4, v0);
    v0 = LD32(t0+8);
    ST32(sp+332, t1);
    ST32(sp+8, v0);
    v1 = LD32(t0+12);
    ST32(sp+12, v1);
    v0 = LD32(t0+16);
    ST32(sp+16, v0);
    v1 = LD32(t0+20);
    ST32(sp+20, v1);
    func_088198E0(a0, a1);
    goto L_088F2D1C;
L_088F2D1C:;
    t5 = D_08B4F400 - (-3072);
    a0 = LD32(s6+4484);
    f8 = BITSF(LD32(sp+56));
    f7 = BITSF(LD32(sp+48));
    v0 = LD32(a0+36);
    f3 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f8 = f8 - f0;
    f7 = f7 - f1;
    f3 = f3 - f2;
    f5 = BITSF(LD32(sp+8));
    f6 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(sp+20));
    f4 = f4 + f7;
    f5 = f5 + f3;
    f6 = f6 + f8;
    f0 = f0 + f7;
    f1 = f1 + f3;
    f2 = f2 + f8;
    v0 = t5 - 3072;
    v1 = 0x40000000u;
    ST32(sp+4, FBITS(f0));
    t2 = v0 /* uncached alias of the static buffer D_08B4F400 (cache invalidated later in the function) */;
    ST32(sp, FBITS(f4));
    ST32(sp+12, FBITS(f1));
    ST32(sp+8, FBITS(f5));
    ST32(sp+20, FBITS(f2));
    ST32(sp+16, FBITS(f6));
    ST32(sp+32, FBITS(f7));
    ST32(sp+36, FBITS(f3));
    cnd_ = s4 == 0;
    ST32(sp+40, FBITS(f8));
    if (cnd_) { goto L_088F3338; }
    goto L_088F2DB0;
L_088F2DB0:;
    a1 = LD32(sp+328);
    v0 = a1 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s6 = D_08B21184 - (4484); goto L_088F333C; }
    goto L_088F2DC0;
L_088F2DC0:;
    v0 = D_08AECF78 - (-12424);
    f0 = BITSF(LD32(v0-12424));
    v1 = D_08AECF7C - (-12420);
    v0 = D_08B2118C - (4492);
    f1 = BITSF(LD32(v1-12420));
    v1 = LD_U8(v0+4492);
    ST32(sp+76, FBITS(f0));
    ST32(sp+92, FBITS(f1));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f0));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f1));
    cnd_ = v1 == 0;
    ST32(sp+88, FBITS(f1));
    if (cnd_) { goto L_088F327C; }
    goto L_088F2DFC;
L_088F2DFC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088F2E90; }
    goto L_088F2E08;
L_088F2E08:;
    v0 = D_08B211C0 - (4544);
    t1 = v0 + 4544;
    a1 = t0 << 6;
    goto L_088F2E14;
L_088F2E14:;
    a2 = a1 + t1;
    {u32 a_=a2+(48);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=(s0>t0?s0:t0);float d1=(s1>t1?s1:t1);float d2=(s2>t2?s2:t2);float d3=(s3>t3?s3:t3);v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=(s0<t0?s0:t0);float d1=(s1<t1?s1:t1);float d2=(s2<t2?s2:t2);float d3=(s3<t3?s3:t3);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(s6+4484);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(v1+4);
    a0 = LD32(v1+44);
    t0 = t0 + 1;
    v0 = t0 < v0;
    a3 = a1 + t2;
    a1 = a1 + a0;
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    {u32 a_=a3+(0);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=a3+(16);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=a3+(32);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=a3+(48);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    cnd_ = v0 != 0;
    if (cnd_) { a1 = t0 << 6; goto L_088F2E14; }
    goto L_088F2E90;
L_088F2E90:;
    v0 = LD32(s6+4484);
    a0 = t5 - 3072;
    s5 = D_08B15A00 - (23040);
    a1 = LD32(v0+4);
    s0 = 0 + 0;
    a1 = a1 << 6;
    v0 = sceKernelDcacheInvalidateRange(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F2EB4;
L_088F2EB4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_088198E0(a0, a1);
    goto L_088F2EC0;
L_088F2EC0:;
    v0 = LD32(s5+23040);
    cnd_ = (s32)v0 <= 0;
    v1 = D_08B22E88 - (11912);
    if (cnd_) { goto L_088F2FB4; }
    goto L_088F2ECC;
L_088F2ECC:;
    s2 = v1 + 11912;
    s3 = 1;
    fp = D_08B230A8 - (12456);
    s7 = D_08B15A0C - (23052);
    goto L_088F2EDC;
L_088F2EDC:;
    v1 = s3 << (s0 & 31);
    v0 = v1 & s4;
    cnd_ = v0 == 0;
    a0 = D_08B15A04 - (23044);
    if (cnd_) { goto L_088F2FA0; }
    goto L_088F2EEC;
L_088F2EEC:;
    v0 = LD32(a0+23044);
    cnd_ = s0 == v0;
    s1 = D_08B159FC - (23036);
    if (cnd_) { goto L_088F2F14; }
    goto L_088F2EF8;
L_088F2EF8:;
    v0 = D_08B230AC - (12460);
    v0 = v0 + 12460;
    ST8(fp+12456, v1);
    ST8(s7+23052, s3);
    ST32(a0+23044, s0);
    ST32(s1+23036, s2);
    ST8(v0+4, s3);
    goto L_088F2F14;
L_088F2F14:;
    a1 = LD32(s1+23036);
    a0 = a1 + 12;
    func_089022FC(a0, a1);
    goto L_088F2F20;
L_088F2F20:;
    v0 = LD32(s1+23036);
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+56));
    f3 = f3 - f1;
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f0;
    v1 = FBITS(f2);
    a1 = FBITS(f3);
    {v[0]=BITSF(v1);}
    v0 = FBITS(f4);
    {v[1]=BITSF(a1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    a0 = LD32(s6+4484);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f12 = BITSF(v1);
    ST32(sp+40, FBITS(f4));
    v0 = func_0881794C(a0, f12);
    goto L_088F2F88;
L_088F2F88:;
    a2 = LD32(sp+324);
    a3 = LD32(sp+332);
    a0 = v0 + 0;
    a1 = sp + 0;
    f12 = f20;
    func_08902428(a0, a2, a3, f12);
    goto L_088F2FA0;
L_088F2FA0:;
    v0 = LD32(s5+23040);
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = s2 + 136;
    if (cnd_) { goto L_088F2EDC; }
    goto L_088F2FB4;
L_088F2FB4:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_088F324C; }
    goto L_088F2FBC;
L_088F2FBC:;
    a1 = LD32(sp+328);
    v0 = 0x40000000u;
    v0 = a1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088F3250; }
    goto L_088F2FD0;
L_088F2FD0:;
    f4 = BITSF(LD32(sp+64));
    f5 = BITSF(LD32(sp+68));
    f6 = BITSF(LD32(sp+80));
    f7 = BITSF(LD32(sp+84));
    f8 = BITSF(LD32(sp+88));
    f9 = BITSF(LD32(sp+72));
    f0 = f4 + f6;
    f2 = f5 + f7;
    f3 = f9 + f8;
    v0 = D_08AECF80 - (-12416);
    f1 = BITSF(LD32(v0-12416));
    ST32(sp+112, FBITS(f4));
    {u32 a_=sp+(352);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    f0 = f0 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(sp+116, FBITS(f6));
    v0 = FBITS(f1);
    {v[80]=BITSF(v0);}
    {float s0=v[80];float s1=v[80];float s2=v[80];float s3=v[80];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(400);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(416);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(sp+120, FBITS(f5));
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    ST32(sp+124, FBITS(f7));
    a3 = sp + 240;
    a2 = sp + 160;
    ST32(sp+132, FBITS(f8));
    t0 = sp + 208;
    ST32(sp+144, FBITS(f0));
    ST32(sp+148, FBITS(f2));
    ST32(sp+152, FBITS(f3));
    ST32(sp+128, FBITS(f9));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    v0 = LD32(sp+320);
    {v[112]=BITSF(LD32(v0+(292)));}
    {v[113]=BITSF(LD32(v0+(296)));}
    {v[114]=BITSF(LD32(v0+(300)));}
    {v[115]=BITSF(LD32(v0+(304)));}
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
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[100]));ST32(a_+8,FBITS(v[104]));ST32(a_+12,FBITS(v[108]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[97]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[105]));ST32(a_+12,FBITS(v[109]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[98]));ST32(a_+4,FBITS(v[102]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[110]));}
    f4 = BITSF(LD32(sp+116));
    f8 = BITSF(LD32(sp+112));
    f6 = BITSF(LD32(sp+124));
    f7 = BITSF(LD32(sp+120));
    f0 = f4 - f8;
    f3 = BITSF(LD32(sp+132));
    f5 = BITSF(LD32(sp+128));
    f2 = f6 - f7;
    ST32(sp+288, FBITS(f0));
    f8 = f8 + f4;
    f0 = f3 - f5;
    f7 = f7 + f6;
    f5 = f5 + f3;
    ST32(sp+292, FBITS(f2));
    f8 = f8 * f1;
    f7 = f7 * f1;
    v0 = LD32(sp+288);
    f5 = f5 * f1;
    ST32(sp+296, FBITS(f0));
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+208, v0);
    {u32 a_=sp+(368);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+292);
    ST32(sp+304, FBITS(f8));
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(192);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+308, FBITS(f7));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+312, FBITS(f5));
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+212, v0);
    {u32 a_=sp+(304);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    v0 = LD32(sp+296);
    v1 = LD32(sp+300);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+216, v0);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(352);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+288);
    ST32(sp+220, v1);
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(sp+224, v0);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    v0 = LD32(sp+292);
    v1 = LD32(sp+296);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(sp+228, v0);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[20];float t1=v[21];float t2=v[22];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+232, v1);
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+300);
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+32, FBITS(f8));
    ST32(sp+236, v0);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f5));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088F31F0;
L_088F31F0:;
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
    if (cnd_) { goto L_088F31F0; }
    goto L_088F321C;
L_088F321C:;
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    a1 = LD32(sp+320);
    ST32(sp+224, v0);
    a0 = t0 + 0;
    ST32(sp+228, v1);
    v0 = LD32(sp+152);
    v1 = LD32(sp+156);
    ST32(sp+232, v0);
    ST32(sp+236, v1);
    func_088EF7DC(a0, a1, 0, 0);
    goto L_088F3248;
L_088F3248:;
    goto L_088F324C;
L_088F324C:;
    goto L_088F3250;
L_088F3250:;
    sp = sp + 560;
    return;
L_088F327C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088F2E90; }
    goto L_088F3288;
L_088F3288:;
    t3 = D_08B221C0 - (8640);
    v0 = D_08B211C0 - (4544);
    t4 = v0 + 4544;
    t1 = t3 + 8640;
    a1 = t0 << 6;
    goto L_088F329C;
L_088F329C:;
    a2 = a1 + t4;
    {u32 a_=t3+(8640);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=t1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(48);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=t1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=t1+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float t0=v[20];float t1=v[21];float t2=v[22];float t3=v[23];float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;o0+=v[12]*t3;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;o1+=v[13]*t3;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;o2+=v[14]*t3;float o3=0;o3+=v[3]*t0;o3+=v[7]*t1;o3+=v[11]*t2;o3+=v[15]*t3;v[16]=o0;v[17]=o1;v[18]=o2;v[19]=o3;}
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(s6+4484);
    t0 = t0 + 1;
    a3 = a1 + t2;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=(s0>t0?s0:t0);float d1=(s1>t1?s1:t1);float d2=(s2>t2?s2:t2);float d3=(s3>t3?s3:t3);v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=(s0<t0?s0:t0);float d1=(s1<t1?s1:t1);float d2=(s2<t2?s2:t2);float d3=(s3<t3?s3:t3);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(v1+4);
    a0 = LD32(v1+44);
    v0 = t0 < v0;
    a1 = a1 + a0;
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    {u32 a_=a3+(0);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=a3+(16);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=a3+(32);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=a3+(48);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    cnd_ = v0 != 0;
    if (cnd_) { a1 = t0 << 6; goto L_088F329C; }
    goto L_088F3330;
L_088F3330:;
    goto L_088F2E90;
L_088F3338:;
    s6 = D_08B21184 - (4484);
    goto L_088F333C;
L_088F333C:;
    v1 = LD32(s6+4484);
    a3 = 0 + 0;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    a1 = s6 + 0;
    if (cnd_) { goto L_088F2E90; }
    goto L_088F3350;
L_088F3350:;
    v0 = D_08B211C0 - (4544);
    t0 = v0 + 4544;
    a1 = LD32(a1+4484);
    goto L_088F335C;
L_088F335C:;
    v1 = a3 << 6;
    a3 = a3 + 1;
    a0 = LD32(a1+4);
    v0 = LD32(a1+44);
    a2 = v1 + t0;
    a0 = a3 < a0;
    v0 = v1 + v0;
    a1 = s6 + 0;
    v1 = v1 + t2;
    {u32 a_=v0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=v1+(16);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=v1+(32);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=v1+(48);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a1+4484); goto L_088F335C; }
    goto L_088F33C0;
L_088F33C0:;
    goto L_088F2E90;
}

/* 088F33C8 */
void func_088F33C8(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[640] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 640);
L_088F33C8:;
    sp = sp - 640;
    fp = a1 + 0;
    s6 = t0 + 0;
    s5 = t1 + 0;
    s4 = a0 + 0;
    cnd_ = a0 == 0;
    ST32(sp+336, a2);
    if (cnd_) { goto L_088F342C; }
    goto L_088F3414;
L_088F3414:;
    f1 = BITSF(LD32(a0+248));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088F39D4; }
    goto L_088F342C;
L_088F342C:;
    a0 = sp + 32;
    a1 = 0 + 0;
    func_088198E0(a0, a1);
    goto L_088F3438;
L_088F3438:;
    v0 = D_08B21180 - (4480);
    v1 = LD_U8(v0+4480);
    cnd_ = v1 != 0;
    v1 = D_08B15A00 - (23040);
    if (cnd_) { goto L_088F3BB8; }
    goto L_088F3448;
L_088F3448:;
    v0 = LD32(v1+23040);
    cnd_ = (s32)v0 <= 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_088F3630; }
    goto L_088F3454;
L_088F3454:;
    v0 = D_08AECF84 - (-12412);
    f20 = BITSF(LD32(v0-12412));
    v0 = LD32(sp+336);
    v1 = D_08AECF88 - (-12408);
    f21 = BITSF(LD32(v1-12408));
    v1 = 0x40000000u;
    v1 = v0 & v1;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    ST32(sp+384, v1);
    ST32(sp+560, v0);
    goto L_088F3480;
L_088F3480:;
    v0 = 1;
    v1 = v0 << (s7 & 31);
    v0 = v1 & fp;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = D_08B15A00 - (23040); goto L_088F3614; }
    goto L_088F3494;
L_088F3494:;
    a0 = D_08B15A04 - (23044);
    v0 = LD32(a0+23044);
    cnd_ = s7 == v0;
    s0 = D_08B159FC - (23036);
    if (cnd_) { goto L_088F34D0; }
    goto L_088F34A4;
L_088F34A4:;
    v0 = D_08B230A8 - (12456);
    ST8(v0+12456, v1);
    v0 = D_08B15A0C - (23052);
    v1 = 1;
    ST8(v0+23052, v1);
    v0 = LD32(sp+560);
    ST32(a0+23044, s7);
    ST32(s0+23036, v0);
    v0 = D_08B230AC - (12460);
    v0 = v0 + 12460;
    ST8(v0+4, v1);
    goto L_088F34D0;
L_088F34D0:;
    a1 = LD32(s0+23036);
    a0 = a1 + 12;
    func_08905D64(a0, a1);
    goto L_088F34DC;
L_088F34DC:;
    v0 = LD32(s0+23036);
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+40));
    f3 = f3 - f1;
    {u32 a_=sp+(368);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f0;
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08B21184 - (4484);
    a0 = LD32(v0+4484);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f12 = BITSF(v1);
    ST32(sp+56, FBITS(f4));
    v0 = func_0881794C(a0, f12);
    goto L_088F3548;
L_088F3548:;
    a1 = v0 + 0;
    a0 = s4 + 0;
    s3 = v0 + 0;
    func_08905A4C(a1);
    goto L_088F3558;
L_088F3558:;
    cnd_ = fp == 0;
    v1 = D_08B2118C - (4492);
    if (cnd_) { goto L_088F3ABC; }
    goto L_088F3560;
L_088F3560:;
    v0 = LD32(sp+384);
    cnd_ = v0 != 0;
    v0 = LD_U8(v1+4492);
    if (cnd_) { goto L_088F3AC0; }
    goto L_088F356C;
L_088F356C:;
    v1 = D_08B2118C - (4492);
    v0 = LD_U8(v1+4492);
    ST32(sp, FBITS(f20));
    ST32(sp+4, FBITS(f20));
    ST32(sp+8, FBITS(f20));
    ST32(sp+12, FBITS(f20));
    ST32(sp+16, FBITS(f21));
    ST32(sp+20, FBITS(f21));
    ST32(sp+24, FBITS(f21));
    cnd_ = v0 == 0;
    ST32(sp+28, FBITS(f21));
    if (cnd_) { goto L_088F3A08; }
    goto L_088F3598;
L_088F3598:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F3608; }
    goto L_088F35AC;
L_088F35AC:;
    v1 = D_08B211C0 - (4544);
    s0 = v1 + 4544;
    goto L_088F35B4;
L_088F35B4:;
    {u32 a_=s0+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=(s0>t0?s0:t0);float d1=(s1>t1?s1:t1);float d2=(s2>t2?s2:t2);float d3=(s3>t3?s3:t3);v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=(s0<t0?s0:t0);float d1=(s1<t1?s1:t1);float d2=(s2<t2?s2:t2);float d3=(s3<t3?s3:t3);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a2 = s1 + 0;
    a3 = s0 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    t0 = s6 + 0;
    t1 = s5 + 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F35EC;
L_088F35EC:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    s1 = s1 + 1;
    v0 = LD32(v1+4);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 64;
    if (cnd_) { goto L_088F35B4; }
    goto L_088F3608;
L_088F3608:;
    func_0890614C();
    goto L_088F3610;
L_088F3610:;
    v1 = D_08B15A00 - (23040);
    goto L_088F3614;
L_088F3614:;
    v0 = LD32(v1+23040);
    v1 = LD32(sp+560);
    s7 = s7 + 1;
    v0 = (s32)s7 < (s32)v0;
    v1 = v1 + 136;
    cnd_ = v0 != 0;
    ST32(sp+560, v1);
    if (cnd_) { goto L_088F3480; }
    goto L_088F3630;
L_088F3630:;
    cnd_ = fp == 0;
    if (cnd_) { goto L_088F39D4; }
    goto L_088F3638;
L_088F3638:;
    v1 = LD32(sp+336);
    v0 = 0x40000000u;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088F39D8; }
    goto L_088F364C;
L_088F364C:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    v1 = D_08B21184 - (4484);
    ST32(sp+128, FBITS(f0));
    ST32(sp+136, FBITS(f1));
    ST32(sp+144, FBITS(f2));
    ST32(sp+132, FBITS(f3));
    ST32(sp+140, FBITS(f4));
    ST32(sp+148, FBITS(f5));
    a0 = LD32(v1+4484);
    v0 = LD32(a0+4);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+104); goto L_088F36E4; }
    goto L_088F3694;
L_088F3694:;
    f3 = f3 - f0;
    f4 = f4 - f1;
    f5 = f5 - f2;
    {u32 a_=sp+(400);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    v1 = FBITS(f4);
    {v[0]=BITSF(v0);}
    f1 = BITSF(0);
    {v[1]=BITSF(v1);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+48, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f5));
    if (cnd_) { goto L_088F377C; }
    goto L_088F36E0;
L_088F36E0:;
    v0 = LD32(a0+104);
    goto L_088F36E4;
L_088F36E4:;
    v1 = D_08B221C0 - (8640);
    a0 = a0 + 104;
    ST32(sp+128, v0);
    v1 = v1 + 8640;
    a1 = v1 + 48;
    v1 = LD32(a0+4);
    v0 = D_08B221C0 - (8640);
    v0 = v0 + 8640;
    f1 = BITSF(LD32(v0+48));
    f5 = BITSF(LD32(a1+8));
    ST32(sp+132, v1);
    v0 = LD32(a0+8);
    f0 = BITSF(LD32(sp+132));
    f4 = BITSF(LD32(sp+128));
    ST32(sp+136, v0);
    f0 = f0 + f1;
    f4 = f4 + f1;
    v0 = LD32(a0+12);
    f1 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(sp+136));
    ST32(sp+140, v0);
    f3 = f3 + f1;
    v0 = LD32(a0+16);
    f2 = BITSF(LD32(sp+140));
    ST32(sp+144, v0);
    f2 = f2 + f1;
    v0 = LD32(a0+20);
    f1 = BITSF(LD32(sp+144));
    ST32(sp+132, FBITS(f0));
    f1 = f1 + f5;
    ST32(sp+148, v0);
    f0 = BITSF(LD32(sp+148));
    ST32(sp+128, FBITS(f4));
    f0 = f0 + f5;
    ST32(sp+140, FBITS(f2));
    ST32(sp+136, FBITS(f3));
    ST32(sp+148, FBITS(f0));
    ST32(sp+144, FBITS(f1));
    goto L_088F377C;
L_088F377C:;
    f0 = BITSF(LD32(sp+132));
    f2 = BITSF(LD32(sp+128));
    f4 = BITSF(LD32(sp+136));
    f3 = BITSF(LD32(sp+144));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+140));
    v0 = D_08AECF8C - (-12404);
    f1 = BITSF(LD32(v0-12404));
    f4 = f4 + f0;
    f0 = BITSF(LD32(sp+148));
    f2 = f2 * f1;
    {u32 a_=sp+(464);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    f3 = f3 + f0;
    f4 = f4 * f1;
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(480);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    f3 = f3 * f1;
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+160, FBITS(f2));
    {u32 a_=sp+(416);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f1);
    ST32(sp+164, FBITS(f4));
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+168, FBITS(f3));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+48, FBITS(f2));
    a3 = sp + 256;
    a2 = sp + 176;
    ST32(sp+52, FBITS(f4));
    t0 = sp + 224;
    ST32(sp+56, FBITS(f3));
    {v[112]=BITSF(LD32(s4+(292)));}
    {v[113]=BITSF(LD32(s4+(296)));}
    {v[114]=BITSF(LD32(s4+(300)));}
    {v[115]=BITSF(LD32(s4+(304)));}
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
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[100]));ST32(a_+8,FBITS(v[104]));ST32(a_+12,FBITS(v[108]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[97]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[105]));ST32(a_+12,FBITS(v[109]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[98]));ST32(a_+4,FBITS(v[102]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[110]));}
    f5 = BITSF(LD32(sp+132));
    f8 = BITSF(LD32(sp+128));
    f3 = BITSF(LD32(sp+140));
    f6 = BITSF(LD32(sp+136));
    f4 = BITSF(LD32(sp+148));
    f7 = BITSF(LD32(sp+144));
    f0 = f5 - f8;
    f2 = f3 - f6;
    f9 = f4 - f7;
    f8 = f8 + f5;
    ST32(sp+304, FBITS(f0));
    f6 = f6 + f3;
    f7 = f7 + f4;
    v0 = LD32(sp+304);
    ST32(sp+308, FBITS(f2));
    f8 = f8 * f1;
    f6 = f6 * f1;
    ST32(sp+312, FBITS(f9));
    f7 = f7 * f1;
    v1 = LD32(sp+308);
    ST32(sp+224, v0);
    v0 = LD32(sp+312);
    ST32(sp+228, v1);
    ST32(sp+232, v0);
    {u32 a_=sp+(416);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+316);
    ST32(sp+320, FBITS(f8));
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    ST32(sp+236, v1);
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+324, FBITS(f6));
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    ST32(sp+328, FBITS(f7));
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[24];float s1=v[25];float s2=v[26];float s3=v[27];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {u32 a_=sp+(320);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+304);
    v1 = LD32(sp+308);
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(sp+244, v1);
    v0 = LD32(sp+312);
    v1 = LD32(sp+316);
    ST32(sp+48, FBITS(f8));
    ST32(sp+248, v0);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+52, FBITS(f6));
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+56, FBITS(f7));
    goto L_088F3978;
L_088F3978:;
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
    if (cnd_) { goto L_088F3978; }
    goto L_088F39A4;
L_088F39A4:;
    v0 = LD32(sp+160);
    v1 = LD32(sp+164);
    a0 = t0 + 0;
    ST32(sp+240, v0);
    a1 = s4 + 0;
    ST32(sp+244, v1);
    v0 = LD32(sp+168);
    v1 = LD32(sp+172);
    ST32(sp+248, v0);
    ST32(sp+252, v1);
    func_088EF7DC(a0, a1, 0, 0);
    goto L_088F39D0;
L_088F39D0:;
    goto L_088F39D4;
L_088F39D4:;
    goto L_088F39D8;
L_088F39D8:;
    sp = sp + 640;
    return;
L_088F3A08:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F3608; }
    goto L_088F3A1C;
L_088F3A1C:;
    v1 = D_08B221C0 - (8640);
    v0 = D_08B211C0 - (4544);
    s1 = v1 + 8640;
    s0 = v0 + 4544;
    {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    goto L_088F3A30;
L_088F3A30:;
    {u32 a_=s0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a2 = s2 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a3 = sp + 64;
    t0 = s6 + 0;
    t1 = s5 + 0;
    s2 = s2 + 1;
    s0 = s0 + 64;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[44];float t1=v[45];float t2=v[46];float t3=v[47];float d0=(s0>t0?s0:t0);float d1=(s1>t1?s1:t1);float d2=(s2>t2?s2:t2);float d3=(s3>t3?s3:t3);v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[44];float t1=v[45];float t2=v[46];float t3=v[47];float d0=(s0<t0?s0:t0);float d1=(s1<t1?s1:t1);float d2=(s2<t2?s2:t2);float d3=(s3<t3?s3:t3);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3A9C;
L_088F3A9C:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));} goto L_088F3A30; }
    goto L_088F3AB4;
L_088F3AB4:;
    goto L_088F3608;
L_088F3ABC:;
    v0 = LD_U8(v1+4492);
    goto L_088F3AC0;
L_088F3AC0:;
    cnd_ = v0 == 0;
    v0 = D_08B21184 - (4484);
    if (cnd_) { goto L_088F3B20; }
    goto L_088F3AC8;
L_088F3AC8:;
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F3608; }
    goto L_088F3AD8;
L_088F3AD8:;
    v1 = D_08B211C0 - (4544);
    s0 = v1 + 4544;
    goto L_088F3AE0;
L_088F3AE0:;
    a2 = s1 + 0;
    a3 = s0 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    t0 = s6 + 0;
    t1 = s5 + 0;
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3AFC;
L_088F3AFC:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    s1 = s1 + 1;
    v0 = LD32(v1+4);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 64;
    if (cnd_) { goto L_088F3AE0; }
    goto L_088F3B18;
L_088F3B18:;
    goto L_088F3608;
L_088F3B20:;
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F3608; }
    goto L_088F3B30;
L_088F3B30:;
    v1 = D_08B221C0 - (8640);
    v0 = D_08B211C0 - (4544);
    s1 = v1 + 8640;
    s0 = v0 + 4544;
    {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    goto L_088F3B44;
L_088F3B44:;
    {u32 a_=s0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    a2 = s2 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a3 = sp + 64;
    t0 = s6 + 0;
    t1 = s5 + 0;
    s2 = s2 + 1;
    s0 = s0 + 64;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3B98;
L_088F3B98:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));} goto L_088F3B44; }
    goto L_088F3BB0;
L_088F3BB0:;
    goto L_088F3608;
L_088F3BB8:;
    s0 = D_08B159FC - (23036);
    v0 = LD32(s0+23036);
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+40));
    f3 = f3 - f1;
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f0;
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = D_08B21184 - (4484);
    a0 = LD32(v1+4484);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    ST32(sp+56, FBITS(f4));
    v0 = func_0881794C(a0, f12);
    goto L_088F3C28;
L_088F3C28:;
    a1 = LD32(s0+23036);
    s3 = v0 + 0;
    a0 = a1 + 12;
    func_089022FC(a0, a1);
    goto L_088F3C38;
L_088F3C38:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    func_08905A4C(a1);
    goto L_088F3C44;
L_088F3C44:;
    cnd_ = fp == 0;
    v0 = D_08B2118C - (4492);
    if (cnd_) { goto L_088F3DD0; }
    goto L_088F3C4C;
L_088F3C4C:;
    v1 = LD32(sp+336);
    v0 = 0x40000000u;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    v0 = D_08B2118C - (4492);
    if (cnd_) { goto L_088F3DD0; }
    goto L_088F3C60;
L_088F3C60:;
    v0 = D_08AECF84 - (-12412);
    f0 = BITSF(LD32(v0-12412));
    v1 = D_08AECF88 - (-12408);
    v0 = D_08B2118C - (4492);
    f1 = BITSF(LD32(v1-12408));
    v1 = LD_U8(v0+4492);
    ST32(sp+12, FBITS(f0));
    ST32(sp+28, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f1));
    cnd_ = v1 == 0;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_088F3D1C; }
    goto L_088F3C9C;
L_088F3C9C:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F3D0C; }
    goto L_088F3CB0;
L_088F3CB0:;
    v0 = D_08B211C0 - (4544);
    s0 = v0 + 4544;
    goto L_088F3CB8;
L_088F3CB8:;
    {u32 a_=s0+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=(s0>t0?s0:t0);float d1=(s1>t1?s1:t1);float d2=(s2>t2?s2:t2);float d3=(s3>t3?s3:t3);v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=(s0<t0?s0:t0);float d1=(s1<t1?s1:t1);float d2=(s2<t2?s2:t2);float d3=(s3<t3?s3:t3);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a2 = s1 + 0;
    a3 = s0 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    t0 = s6 + 0;
    t1 = s5 + 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3CF0;
L_088F3CF0:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    s1 = s1 + 1;
    v0 = LD32(v1+4);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 64;
    if (cnd_) { goto L_088F3CB8; }
    goto L_088F3D0C;
L_088F3D0C:;
    func_0890614C();
    goto L_088F3D14;
L_088F3D14:;
    goto L_088F39D4;
L_088F3D1C:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F3D0C; }
    goto L_088F3D30;
L_088F3D30:;
    v0 = D_08B211C0 - (4544);
    s1 = D_08B221C0 - (8640);
    s1 = s1 + 8640;
    s0 = v0 + 4544;
    {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    goto L_088F3D44;
L_088F3D44:;
    {u32 a_=s0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a2 = s2 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a3 = sp + 64;
    t0 = s6 + 0;
    t1 = s5 + 0;
    s2 = s2 + 1;
    s0 = s0 + 64;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[44];float t1=v[45];float t2=v[46];float t3=v[47];float d0=(s0>t0?s0:t0);float d1=(s1>t1?s1:t1);float d2=(s2>t2?s2:t2);float d3=(s3>t3?s3:t3);v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[44];float t1=v[45];float t2=v[46];float t3=v[47];float d0=(s0<t0?s0:t0);float d1=(s1<t1?s1:t1);float d2=(s2<t2?s2:t2);float d3=(s3<t3?s3:t3);v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3DB0;
L_088F3DB0:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));} goto L_088F3D44; }
    goto L_088F3DC8;
L_088F3DC8:;
    goto L_088F3D0C;
L_088F3DD0:;
    v1 = LD_U8(v0+4492);
    cnd_ = v1 == 0;
    v0 = D_08B21184 - (4484);
    if (cnd_) { goto L_088F3E34; }
    goto L_088F3DDC;
L_088F3DDC:;
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088F3D0C; }
    goto L_088F3DEC;
L_088F3DEC:;
    v0 = D_08B211C0 - (4544);
    s1 = v0 + 4544;
    goto L_088F3DF4;
L_088F3DF4:;
    a2 = s0 + 0;
    a3 = s1 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    t0 = s6 + 0;
    t1 = s5 + 0;
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3E10;
L_088F3E10:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    s0 = s0 + 1;
    v0 = LD32(v1+4);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 64;
    if (cnd_) { goto L_088F3DF4; }
    goto L_088F3E2C;
L_088F3E2C:;
    goto L_088F3D0C;
L_088F3E34:;
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F3D0C; }
    goto L_088F3E44;
L_088F3E44:;
    v0 = D_08B221C0 - (8640);
    v1 = D_08B211C0 - (4544);
    s1 = v0 + 8640;
    s0 = v1 + 4544;
    {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    goto L_088F3E58;
L_088F3E58:;
    {u32 a_=s0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(48);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=0;m00+=v[16]*v[0];m00+=v[20]*v[1];m00+=v[24]*v[2];m00+=v[28]*v[3];float m01=0;m01+=v[17]*v[0];m01+=v[21]*v[1];m01+=v[25]*v[2];m01+=v[29]*v[3];float m02=0;m02+=v[18]*v[0];m02+=v[22]*v[1];m02+=v[26]*v[2];m02+=v[30]*v[3];float m03=0;m03+=v[19]*v[0];m03+=v[23]*v[1];m03+=v[27]*v[2];m03+=v[31]*v[3];float m10=0;m10+=v[16]*v[4];m10+=v[20]*v[5];m10+=v[24]*v[6];m10+=v[28]*v[7];float m11=0;m11+=v[17]*v[4];m11+=v[21]*v[5];m11+=v[25]*v[6];m11+=v[29]*v[7];float m12=0;m12+=v[18]*v[4];m12+=v[22]*v[5];m12+=v[26]*v[6];m12+=v[30]*v[7];float m13=0;m13+=v[19]*v[4];m13+=v[23]*v[5];m13+=v[27]*v[6];m13+=v[31]*v[7];float m20=0;m20+=v[16]*v[8];m20+=v[20]*v[9];m20+=v[24]*v[10];m20+=v[28]*v[11];float m21=0;m21+=v[17]*v[8];m21+=v[21]*v[9];m21+=v[25]*v[10];m21+=v[29]*v[11];float m22=0;m22+=v[18]*v[8];m22+=v[22]*v[9];m22+=v[26]*v[10];m22+=v[30]*v[11];float m23=0;m23+=v[19]*v[8];m23+=v[23]*v[9];m23+=v[27]*v[10];m23+=v[31]*v[11];float m30=0;m30+=v[16]*v[12];m30+=v[20]*v[13];m30+=v[24]*v[14];m30+=v[28]*v[15];float m31=0;m31+=v[17]*v[12];m31+=v[21]*v[13];m31+=v[25]*v[14];m31+=v[29]*v[15];float m32=0;m32+=v[18]*v[12];m32+=v[22]*v[13];m32+=v[26]*v[14];m32+=v[30]*v[15];float m33=0;m33+=v[19]*v[12];m33+=v[23]*v[13];m33+=v[27]*v[14];m33+=v[31]*v[15];v[32]=m00;v[33]=m01;v[34]=m02;v[35]=m03;v[36]=m10;v[37]=m11;v[38]=m12;v[39]=m13;v[40]=m20;v[41]=m21;v[42]=m22;v[43]=m23;v[44]=m30;v[45]=m31;v[46]=m32;v[47]=m33;}
    a2 = s2 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a3 = sp + 64;
    t0 = s6 + 0;
    t1 = s5 + 0;
    s2 = s2 + 1;
    s0 = s0 + 64;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    func_08905E90(a0, a1, a2, a3, t0, t1);
    goto L_088F3EAC;
L_088F3EAC:;
    v0 = D_08B21184 - (4484);
    v1 = LD32(v0+4484);
    v0 = LD32(v1+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));} goto L_088F3E58; }
    goto L_088F3EC4;
L_088F3EC4:;
    goto L_088F3D0C;
}

/* 088F3ECC */
u64 func_088F3ECC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F3ECC:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = v1 + 0;
    v0 = LD32(a0+8);
    a0 = D_08B4F380 - (-3200);
    cnd_ = v0 == 0;
    a0 = a0 - 3200;
    if (cnd_) { goto L_088F3F0C; }
    goto L_088F3EEC;
L_088F3EEC:;
    v0 = func_0890206C(a0, a1);
    goto L_088F3EF4;
L_088F3EF4:;
    a0 = v0 + 0;
    goto L_088F3EF8;
L_088F3EF8:;
    a1 = 0 + 0;
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F3F00;
L_088F3F00:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F3F0C:;
    a0 = D_08BB1E40 - (7744);
    a0 = a0 + 7744;
    a1 = v1 + 0;
    v0 = func_08905914(a0, a1);
    goto L_088F3F1C;
L_088F3F1C:;
    a0 = v0 + 0;
    goto L_088F3EF8;
}

/* 088F3F24 */
void func_088F3F24(void)
{
L_088F3F24:;
    return;
}

/* 088F3F2C */
void func_088F3F2C(void)
{
L_088F3F2C:;
    return;
}

/* 088F3F34 */
void func_088F3F34(void)
{
L_088F3F34:;
    return;
}

/* 088F3F3C */
u64 func_088F3F3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F3F3C:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = v1 + 0;
    v0 = LD32(a0+8);
    a0 = D_08B4F380 - (-3200);
    cnd_ = v0 == 0;
    a0 = a0 - 3200;
    if (cnd_) { goto L_088F3F8C; }
    goto L_088F3F5C;
L_088F3F5C:;
    v0 = func_0890206C(a0, a1);
    goto L_088F3F64;
L_088F3F64:;
    a0 = v0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F3F6C;
L_088F3F6C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088F3F78; }
    goto L_088F3F74;
L_088F3F74:;
    v1 = LD32(v0+24);
    goto L_088F3F78;
L_088F3F78:;
    v0 = (v1 >> 1) & 0x1;
    v0 = v0 ^ 0x1;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F3F8C:;
    a0 = D_08BB1E40 - (7744);
    a0 = a0 + 7744;
    a1 = v1 + 0;
    v0 = func_08905914(a0, a1);
    goto L_088F3F9C;
L_088F3F9C:;
    goto L_088F3F64;
}

/* 088F3FA4 */
void func_088F3FA4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F3FA4:;
    sp = sp - 16;
    func_088F5068();
    goto L_088F3FB4;
L_088F3FB4:;
    sp = sp + 16;
    return;
}

/* 088F3FC0 */
void func_088F3FC0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F3FC0:;
    sp = sp - 16;
    func_088F5194(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088F3FD0;
L_088F3FD0:;
    sp = sp + 16;
    return;
}

/* 088F3FDC */
void func_088F3FDC(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F3FDC:;
    sp = sp - 16;
    func_088F50C0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088F3FEC;
L_088F3FEC:;
    sp = sp + 16;
    return;
}

/* 088F3FF8 */
void func_088F3FF8(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F3FF8:;
    sp = sp - 16;
    func_088F51BC();
    goto L_088F4008;
L_088F4008:;
    sp = sp + 16;
    return;
}

/* 088F4014 */
void func_088F4014(u32 a0)
{
L_088F4014:;
    ST32(a0+12, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 088F4028 */
void func_088F4028(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F4028:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+8, 0); goto L_088F4080; }
    goto L_088F4048;
L_088F4048:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_088F405C;
L_088F405C:;
    cnd_ = a0 == s0;
    s0 = s0 - 28;
    if (cnd_) { goto L_088F4074; }
    goto L_088F4064;
L_088F4064:;
    a0 = s0 + 0;
    func_088F4188(a0);
    goto L_088F406C;
L_088F406C:;
    a0 = LD32(s1+12);
    goto L_088F405C;
L_088F4074:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F407C;
L_088F407C:;
    ST32(s1+8, 0);
    goto L_088F4080;
L_088F4080:;
    ST32(s1+12, 0);
    sp = sp + 16;
    return;
}

/* 088F4098 */
void func_088F4098(u32 a0, u32 a3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088F4098:;
    sp = sp - 64;
    s1 = a0 + 0;
    s0 = a3 + 0;
    f21 = f12;
    f20 = f13;
    f1 = BITSF(LD32(a0));
    f0 = BITSF(LD32(a3+4));
    a0 = a3 + 0;
    f0 = f0 + f1;
    ST32(a3+4, FBITS(f0));
    f12 = BITSF(LD32(s1+4));
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F40E4;
L_088F40E4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F4148; }
    goto L_088F40EC;
L_088F40EC:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088F4148; }
    goto L_088F40F8;
L_088F40F8:;
    s2 = 0 + 0;
    a0 = LD32(s1+12);
    goto L_088F4100;
L_088F4100:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    a0 = a0 + s2;
    a1 = sp + 0;
    f12 = f21;
    f13 = f20;
    ST32(sp, FBITS(f0));
    s3 = s3 + 1;
    s2 = s2 + 28;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    func_088F4238(a0, a1, f12, f13);
    goto L_088F4134;
L_088F4134:;
    v0 = LD32(s1+8);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+12); goto L_088F4100; }
    goto L_088F4144;
L_088F4144:;
    goto L_088F4148;
L_088F4148:;
    sp = sp + 64;
    return;
}

/* 088F4168 */
void func_088F4168(u32 a0)
{
L_088F4168:;
    ST32(a0+24, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    return;
}

/* 088F4188 */
void func_088F4188(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F4188:;
    sp = sp - 16;
    v0 = 2;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088F421C; }
    goto L_088F41A8;
L_088F41A8:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 3; goto L_088F41F8; }
    goto L_088F41B4;
L_088F41B4:;
    cnd_ = (s32)v1 < 0;
    if (cnd_) { goto L_088F41D0; }
    goto L_088F41BC;
L_088F41BC:;
    s1 = LD32(a0+24);
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088F41E0; }
    goto L_088F41C8;
L_088F41C8:;
    ST32(s0+24, 0);
    goto L_088F41CC;
L_088F41CC:;
    goto L_088F41D0;
L_088F41D0:;
    sp = sp + 16;
    return;
L_088F41E0:;
    a0 = s1 + 0;
    func_088F452C(a0);
    goto L_088F41E8;
L_088F41E8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F41F0;
L_088F41F0:;
    ST32(s0+24, 0);
    goto L_088F41CC;
L_088F41F8:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_088F41D0; }
    goto L_088F4200;
L_088F4200:;
    s1 = LD32(a0+24);
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s0+24, 0); goto L_088F41D0; }
    goto L_088F420C;
L_088F420C:;
    a0 = s1 + 0;
    func_088F4B04(a0);
    goto L_088F4214;
L_088F4214:;
    goto L_088F41E8;
L_088F421C:;
    s1 = LD32(a0+24);
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s0+24, 0); goto L_088F41CC; }
    goto L_088F4228;
L_088F4228:;
    a0 = s1 + 0;
    func_088F466C(a0);
    goto L_088F4230;
L_088F4230:;
    goto L_088F41E8;
}

/* 088F4238 */
void func_088F4238(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F4238:;
    sp = sp - 32;
    s2 = a1 + 0;
    s0 = a0 + 0;
    f20 = f13;
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+12));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    f3 = BITSF(LD32(a0+16));
    if (cnd_) { goto L_088F434C; }
    goto L_088F4278;
L_088F4278:;
    fcc = FCMP(f12, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_088F444C; }
    goto L_088F4288;
L_088F4288:;
    fcc = FCMP(f1, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088F42A8; }
    goto L_088F4298;
L_088F4298:;
    fcc = FCMP(f12, f2, 12);
    a0 = 6;
    cnd_ = fcc;
    a1 = 128;
    if (cnd_) { goto L_088F430C; }
    goto L_088F42A8;
L_088F42A8:;
    fcc = FCMP(f12, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = f3 - f2; goto L_088F4400; }
    goto L_088F42B8;
L_088F42B8:;
    f1 = f1 - f0;
    f0 = f12 - f0;
    v0 = D_08AECF90 - (-12400);
    f2 = BITSF(LD32(v0-12400));
    v0 = D_08AECF94 - (-12396);
    f0 = f0 / f1;
    f1 = BITSF(0);
    f0 = f0 + f2;
    f2 = f2 / f0;
    f0 = BITSF(LD32(v0-12396));
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AECF98 - (-12392);
    if (cnd_) { goto L_088F43F4; }
    goto L_088F42F4;
L_088F42F4:;
    f0 = BITSF(LD32(v0-12392));
    f0 = f2 + f0;
    goto L_088F42FC;
L_088F42FC:;
    f0 = BITSF(F2I(f0, 1));
    a0 = 6;
    v0 = FBITS(f0);
    a1 = v0 & 0xff;
    goto L_088F430C;
L_088F430C:;
    a2 = 255;
    func_08A990BC(a0, a1, a2);
    goto L_088F4314;
L_088F4314:;
    s1 = LD32(s0);
    v0 = 1;
    cnd_ = s1 == v0;
    v0 = (s32)s1 < 2;
    if (cnd_) { goto L_088F43AC; }
    goto L_088F4324;
L_088F4324:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088F4394; }
    goto L_088F432C;
L_088F432C:;
    cnd_ = s1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088F437C; }
    goto L_088F4334;
L_088F4334:;
    cnd_ = s1 == v0;
    if (cnd_) { a0 = LD32(s0+24); goto L_088F4368; }
    goto L_088F433C;
L_088F433C:;
    a0 = 6;
    goto L_088F4340;
L_088F4340:;
    a1 = 4;
    a2 = 255;
    func_08A990BC(a0, a1, a2);
    goto L_088F434C;
L_088F434C:;
    goto L_088F4350;
L_088F4350:;
    sp = sp + 32;
    return;
L_088F4368:;
    a1 = s2 + 0;
    f12 = f20;
    func_088F4B54(a0, a1, f12);
    goto L_088F4374;
L_088F4374:;
    a0 = 6;
    goto L_088F4340;
L_088F437C:;
    a0 = LD32(s0+24);
    a1 = s2 + 0;
    f12 = f20;
    func_088F46EC(a0, a1, f12);
    goto L_088F438C;
L_088F438C:;
    a0 = 6;
    goto L_088F4340;
L_088F4394:;
    cnd_ = s1 != 0;
    if (cnd_) { a0 = 6; goto L_088F4340; }
    goto L_088F439C;
L_088F439C:;
    a0 = LD32(s0+24);
    func_088F457C(a0);
    goto L_088F43A4;
L_088F43A4:;
    a0 = 6;
    goto L_088F4340;
L_088F43AC:;
    v0 = D_08B2C18C - (-15988);
    s2 = v0 - 15988;
    v1 = LD32(s2+40);
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088F43E4; }
    goto L_088F43C0;
L_088F43C0:;
    a0 = LD32(s0+24);
    func_088F457C(a0);
    goto L_088F43C8;
L_088F43C8:;
    v0 = LD32(s2+40);
    cnd_ = v0 == s1;
    a0 = s2 + 0;
    if (cnd_) { goto L_088F433C; }
    goto L_088F43D4;
L_088F43D4:;
    a1 = 1;
    func_0890D298(a0, a1);
    goto L_088F43DC;
L_088F43DC:;
    a0 = 6;
    goto L_088F4340;
L_088F43E4:;
    a1 = 0 + 0;
    func_0890D298(a0, a1);
    goto L_088F43EC;
L_088F43EC:;
    goto L_088F43C0;
L_088F43F4:;
    f0 = BITSF(LD32(v0-12392));
    f0 = f2 - f0;
    goto L_088F42FC;
L_088F4400:;
    f0 = f12 - f2;
    v0 = D_08AECF9C - (-12388);
    f2 = BITSF(0);
    f0 = f0 / f1;
    f1 = BITSF(LD32(v0-12388));
    v0 = D_08AECF94 - (-12396);
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-12396));
    f1 = f0 / f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AECF98 - (-12392);
    if (cnd_) { goto L_088F4440; }
    goto L_088F4434;
L_088F4434:;
    f0 = BITSF(LD32(v0-12392));
    f0 = f1 + f0;
    goto L_088F42FC;
L_088F4440:;
    f0 = BITSF(LD32(v0-12392));
    f0 = f1 - f0;
    goto L_088F42FC;
L_088F444C:;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_088F4350; }
    goto L_088F4458;
L_088F4458:;
    a0 = LD32(a0+24);
    f12 = f13;
    func_088F4B54(a0, a1, f12);
    goto L_088F4464;
L_088F4464:;
    goto L_088F4350;
}

/* 088F446C */
void func_088F446C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F446C:;
    sp = sp - 16;
    v0 = 2;
    s1 = a0 + 0;
    a0 = 24;
    v1 = (s32)a1 < 3;
    cnd_ = a1 == v0;
    ST32(s1, a1);
    if (cnd_) { goto L_088F44F4; }
    goto L_088F4494;
L_088F4494:;
    cnd_ = v1 == 0;
    v0 = 3;
    if (cnd_) { goto L_088F44D0; }
    goto L_088F449C;
L_088F449C:;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_088F44C0; }
    goto L_088F44A4;
L_088F44A4:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F44AC;
L_088F44AC:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088F4510(a0);
    goto L_088F44B8;
L_088F44B8:;
    ST32(s1+24, s0);
    goto L_088F44BC;
L_088F44BC:;
    goto L_088F44C0;
L_088F44C0:;
    sp = sp + 16;
    return;
L_088F44D0:;
    cnd_ = a1 != v0;
    a0 = 12;
    if (cnd_) { goto L_088F44BC; }
    goto L_088F44D8;
L_088F44D8:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F44E0;
L_088F44E0:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088F4AF4(a0);
    goto L_088F44EC;
L_088F44EC:;
    ST32(s1+24, s0);
    goto L_088F44BC;
L_088F44F4:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F44FC;
L_088F44FC:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088F4650(a0);
    goto L_088F4508;
L_088F4508:;
    ST32(s1+24, s0);
    goto L_088F44BC;
}

/* 088F4510 */
void func_088F4510(u32 a0)
{
L_088F4510:;
    ST32(a0+48, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+44, 0);
    return;
}

/* 088F452C */
void func_088F452C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F452C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 24;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4544;
L_088F4544:;
    a0 = s0 + 48;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_088F454C;
L_088F454C:;
    a0 = s0 + 44;
    func_08AB9B48(a0, 0, 0, 0);
    goto L_088F4554;
L_088F4554:;
    ST32(s0+4, 0);
    ST32(s0+48, 0);
    ST32(s0+44, 0);
    ST32(s0+12, 0);
    ST32(s0+8, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F456C;
L_088F456C:;
    sp = sp + 16;
    return;
}

/* 088F457C */
void func_088F457C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F457C:;
    sp = sp - 16;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = LD32(a0);
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F459C;
L_088F459C:;
    a0 = LD32(s1);
    s0 = v0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F45A8;
L_088F45A8:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088F45C4; }
    goto L_088F45B4;
L_088F45B4:;
    v0 = LD32(v1+32);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088F4640; }
    goto L_088F45C0;
L_088F45C0:;
    v0 = LD32(v1+24);
    goto L_088F45C4;
L_088F45C4:;
    v1 = D_08B25FC4 - (24516);
    goto L_088F45C8;
L_088F45C8:;
    a0 = v0 + 0;
    v1 = v1 + 24516;
    v0 = s0 << 2;
    a1 = (u32)-1;
    a2 = 1;
    a3 = 0 + 0;
    cnd_ = s0 == a1;
    v0 = v0 + v1;
    if (cnd_) { goto L_088F45EC; }
    goto L_088F45E8;
L_088F45E8:;
    a3 = LD32(v0);
    goto L_088F45EC;
L_088F45EC:;
    a1 = a3 + 0;
    func_08904368(a0, a1, a2);
    goto L_088F45F4;
L_088F45F4:;
    a0 = s0 + 0;
    func_0890C3C0(a0);
    goto L_088F45FC;
L_088F45FC:;
    a0 = s1 + 16;
    func_08A9765C(a0);
    goto L_088F4604;
L_088F4604:;
    a0 = D_08B2C1C4 - (-15932);
    a0 = a0 - 15932;
    a2 = D_08B2C1F0 - (-15888);
    a1 = LD32(s1+8);
    v0 = LD32(a0+20);
    v1 = LD32(a2-15888);
    v0 = v0 + a1;
    v1 = v1 + a1;
    ST32(a0+20, v0);
    ST32(a2-15888, v1);
    sp = sp + 16;
    return;
L_088F4640:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F4648;
L_088F4648:;
    v1 = D_08B25FC4 - (24516);
    goto L_088F45C8;
}

/* 088F4650 */
void func_088F4650(u32 a0)
{
L_088F4650:;
    ST32(a0+20, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    return;
}

/* 088F466C */
void func_088F466C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F466C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 24;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4684;
L_088F4684:;
    a0 = s0 + 12;
    func_08AB9B88(a0, 0, 0, 0);
    goto L_088F468C;
L_088F468C:;
    v1 = LD32(s0+16);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088F46DC; }
    goto L_088F4698;
L_088F4698:;
    v0 = LD32(s0+20);
    goto L_088F469C;
L_088F469C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088F46CC; }
    goto L_088F46A4;
L_088F46A4:;
    ST32(s0+8, 0);
    goto L_088F46A8;
L_088F46A8:;
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+12, 0);
    ST32(s0+4, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F46BC;
L_088F46BC:;
    sp = sp + 16;
    return;
L_088F46CC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F46D4;
L_088F46D4:;
    ST32(s0+8, 0);
    goto L_088F46A8;
L_088F46DC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F46E4;
L_088F46E4:;
    v0 = LD32(s0+20);
    goto L_088F469C;
}

/* 088F46EC */
void func_088F46EC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_088F46EC:;
    sp = sp - 240;
    s3 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    f20 = f12;
    a0 = LD32(a0);
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4730;
L_088F4730:;
    a0 = LD32(s3);
    s1 = v0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F473C;
L_088F473C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088F4758; }
    goto L_088F4748;
L_088F4748:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F4AE4; }
    goto L_088F4754;
L_088F4754:;
    a2 = LD32(a0+24);
    goto L_088F4758;
L_088F4758:;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088F4778; }
    goto L_088F4764;
L_088F4764:;
    v0 = D_08B25FC4 - (24516);
    v1 = s1 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    a1 = LD32(v1);
    goto L_088F4778;
L_088F4778:;
    a0 = a2 + 0;
    a2 = 1;
    func_08904368(a0, a1, a2);
    goto L_088F4784;
L_088F4784:;
    a0 = s1 + 0;
    func_0890C3C0(a0);
    goto L_088F478C;
L_088F478C:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_088F4794;
L_088F4794:;
    func_08A9A274();
    goto L_088F479C;
L_088F479C:;
    func_08A9A170();
    goto L_088F47A4;
L_088F47A4:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f12 = BITSF(LD32(s0));
    f11 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f3 = BITSF(LD32(v1+4));
    f10 = BITSF(LD32(s0+8));
    f2 = f2 - f12;
    f3 = f3 - f11;
    f4 = f4 - f10;
    f5 = BITSF(0);
    v0 = FBITS(f2);
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_088F484C; }
    goto L_088F4810;
L_088F4810:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_088F484C;
L_088F484C:;
    v1 = 0 + 0;
    v0 = 0x3f800000u;
    {u32 a_=sp+(144);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(v1);}
    {v[9]=BITSF(v0);}
    v0 = LD32(sp);
    {v[10]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f1 = BITSF(v0);
    v0 = D_08AECFA0 - (-12384);
    f0 = BITSF(LD32(v0-12384));
    a0 = LD32(s3+4);
    s2 = 0 + 0;
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f5));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f5));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    cnd_ = a0 == 0;
    ST32(sp+56, FBITS(f3));
    if (cnd_) { goto L_088F4AAC; }
    goto L_088F48D4;
L_088F48D4:;
    s6 = D_08B45A44 - (23108);
    s4 = D_08B45A48 - (23112);
    s7 = D_08B2C1C4 - (-15932);
    s5 = D_08B2C1F0 - (-15888);
    goto L_088F48E4;
L_088F48E4:;
    v0 = LD32(s4+23112);
    v1 = LD32(s6+23108);
    t4 = LD32(s3+12);
    t3 = LD32(s3+16);
    v0 = v0 << 5;
    s1 = v1 + v0;
    t0 = 0 + 0;
    t2 = s2 << 2;
    t1 = s2 << 1;
    goto L_088F4908;
L_088F4908:;
    a0 = t2 + t0;
    a0 = a0 << 4;
    a0 = a0 + t4;
    f5 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+12));
    f6 = BITSF(LD32(sp+40));
    f3 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+36));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f7 = f7 * f0;
    f6 = f6 * f5;
    f4 = f4 * f5;
    f2 = f2 * f5;
    f8 = f3 * f20;
    f5 = f1 * f20;
    f6 = f6 * f20;
    f4 = f4 * f20;
    f2 = f2 * f20;
    f9 = f7 * f20;
    ST32(sp+80, FBITS(f3));
    v0 = t1 + s2;
    v0 = v0 << 2;
    ST32(sp+84, FBITS(f1));
    v0 = t3 + v0;
    v1 = t0 << 5;
    ST32(sp+88, FBITS(f7));
    v1 = s1 + v1;
    a1 = v1 + 20;
    ST32(sp+48, FBITS(f4));
    t0 = t0 + 1;
    a2 = v1 + 8;
    ST32(sp+52, FBITS(f2));
    a3 = t0 < 0x4u;
    ST32(sp+56, FBITS(f6));
    ST32(sp+64, FBITS(f8));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f9));
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f12 + f0;
    f3 = f10 + f3;
    f1 = f11 + f1;
    f4 = f0 + f4;
    f6 = f3 + f6;
    f2 = f1 + f2;
    ST32(sp+84, FBITS(f1));
    f8 = f4 + f8;
    f9 = f6 + f9;
    f5 = f2 + f5;
    ST32(sp+80, FBITS(f0));
    ST32(sp+88, FBITS(f3));
    ST32(sp+112, FBITS(f4));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f6));
    ST32(sp+96, FBITS(f8));
    ST32(sp+100, FBITS(f5));
    ST32(sp+104, FBITS(f9));
    ST32(v1+20, FBITS(f8));
    ST32(a1+4, FBITS(f5));
    ST32(a1+8, FBITS(f9));
    f0 = BITSF(LD32(a0));
    ST32(v1, FBITS(f0));
    f1 = BITSF(LD32(a0+4));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(a2+8, FBITS(f1));
    cnd_ = a3 == 0;
    ST32(a2+4, FBITS(f0));
    if (cnd_) { goto L_088F4A48; }
    goto L_088F4A38;
L_088F4A38:;
    f12 = BITSF(LD32(s0));
    f11 = BITSF(LD32(s0+4));
    f10 = BITSF(LD32(s0+8));
    goto L_088F4908;
L_088F4A48:;
    v0 = LD32(s4+23112);
    s2 = s2 + 1;
    v0 = v0 + 4;
    ST32(s4+23112, v0);
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F4A5C;
L_088F4A5C:;
    a0 = 4;
    t0 = s1 + 0;
    a1 = 483;
    a2 = 4;
    a3 = 0 + 0;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_088F4A74;
L_088F4A74:;
    a0 = s7 - 15932;
    v0 = LD32(a0+20);
    v1 = LD32(s5-15888);
    v0 = v0 + 2;
    ST32(a0+20, v0);
    v1 = v1 + 2;
    v0 = LD32(s3+4);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    ST32(s5-15888, v1);
    if (cnd_) { goto L_088F4AAC; }
    goto L_088F4A9C;
L_088F4A9C:;
    f12 = BITSF(LD32(s0));
    f11 = BITSF(LD32(s0+4));
    f10 = BITSF(LD32(s0+8));
    goto L_088F48E4;
L_088F4AAC:;
    func_08A9A2C4();
    goto L_088F4AB4;
L_088F4AB4:;
    sp = sp + 240;
    return;
L_088F4AE4:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F4AEC;
L_088F4AEC:;
    a2 = v0 + 0;
    goto L_088F4758;
}

/* 088F4AF4 */
void func_088F4AF4(u32 a0)
{
L_088F4AF4:;
    ST32(a0+8, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 088F4B04 */
void func_088F4B04(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F4B04:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 24;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4B1C;
L_088F4B1C:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088F4B44; }
    goto L_088F4B28;
L_088F4B28:;
    ST32(s0+4, 0);
    goto L_088F4B2C;
L_088F4B2C:;
    ST32(s0+8, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4B34;
L_088F4B34:;
    sp = sp + 16;
    return;
L_088F4B44:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4B4C;
L_088F4B4C:;
    ST32(s0+4, 0);
    goto L_088F4B2C;
}

/* 088F4B54 */
void func_088F4B54(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088F4B54:;
    sp = sp - 272;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    f20 = f12;
    a0 = LD32(a0);
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4B84;
L_088F4B84:;
    a0 = LD32(s2);
    s1 = v0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4B90;
L_088F4B90:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088F4BAC; }
    goto L_088F4B9C;
L_088F4B9C:;
    v0 = LD32(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088F4F30; }
    goto L_088F4BA8;
L_088F4BA8:;
    a2 = LD32(a0+24);
    goto L_088F4BAC;
L_088F4BAC:;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088F4BCC; }
    goto L_088F4BB8;
L_088F4BB8:;
    v0 = D_08B25FC4 - (24516);
    v1 = s1 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    a1 = LD32(v1);
    goto L_088F4BCC;
L_088F4BCC:;
    a0 = a2 + 0;
    a2 = 1;
    func_08904368(a0, a1, a2);
    goto L_088F4BD8;
L_088F4BD8:;
    a0 = s1 + 0;
    func_0890C3C0(a0);
    goto L_088F4BE0;
L_088F4BE0:;
    a0 = 2;
    func_08A9A13C(a0);
    goto L_088F4BE8;
L_088F4BE8:;
    func_08A9A274();
    goto L_088F4BF0;
L_088F4BF0:;
    func_08A9A170();
    goto L_088F4BF8;
L_088F4BF8:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f13 = BITSF(LD32(s0));
    f14 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f3 = BITSF(LD32(v1+4));
    f12 = BITSF(LD32(s0+8));
    f2 = f2 - f13;
    f3 = f3 - f14;
    f4 = f4 - f12;
    f5 = BITSF(0);
    v0 = FBITS(f2);
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_088F4CA0; }
    goto L_088F4C64;
L_088F4C64:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_088F4CA0;
L_088F4CA0:;
    a0 = 0 + 0;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {u32 a_=sp+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    v1 = 0x3f800000u;
    {v[2]=BITSF(v0);}
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(a0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f1 = BITSF(v0);
    v0 = D_08AECFA4 - (-12380);
    f0 = BITSF(LD32(v0-12380));
    a0 = LD32(s2+8);
    ST32(sp+32, FBITS(f2));
    v0 = D_08AECFA8 - (-12376);
    t0 = D_08B45A48 - (23112);
    ST32(sp+20, FBITS(f0));
    a3 = 0 + 0;
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f5));
    ST32(sp+24, FBITS(f5));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f3));
    f0 = BITSF(LD32(v0-12376));
    f1 = BITSF(LD32(a0+24));
    f2 = BITSF(LD32(a0+28));
    ST32(sp+92, FBITS(f5));
    f1 = f1 * f0;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(sp+88, FBITS(f5));
    v0 = D_08B45A44 - (23108);
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+76, FBITS(f1));
    ST32(sp+72, FBITS(f0));
    ST32(sp+84, FBITS(f2));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+80, FBITS(f2));
    f0 = BITSF(LD32(a0+36));
    a1 = LD32(v0+23108);
    v1 = LD32(t0+23112);
    ST32(sp+96, FBITS(f0));
    v1 = v1 << 5;
    f1 = BITSF(LD32(a0+32));
    s1 = a1 + v1;
    ST32(sp+100, FBITS(f1));
    f0 = BITSF(LD32(a0+36));
    ST32(sp+104, FBITS(f0));
    f1 = BITSF(LD32(a0+32));
    ST32(sp+108, FBITS(f1));
    f0 = BITSF(LD32(a0+40));
    ST32(sp+112, FBITS(f0));
    f1 = BITSF(LD32(a0+40));
    ST32(sp+116, FBITS(f1));
    f0 = BITSF(LD32(a0+44));
    ST32(sp+120, FBITS(f0));
    f1 = BITSF(LD32(a0+44));
    ST32(sp+124, FBITS(f1));
    goto L_088F4DB8;
L_088F4DB8:;
    v1 = a3 << 2;
    v1 = v1 + sp;
    f0 = BITSF(LD32(v1+64));
    f3 = BITSF(LD32(sp+32));
    f6 = BITSF(LD32(sp+36));
    f5 = BITSF(LD32(sp+40));
    f3 = f3 * f0;
    f6 = f6 * f0;
    f5 = f5 * f0;
    f1 = BITSF(LD32(v1+80));
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+24));
    f2 = BITSF(LD32(sp+20));
    f3 = f3 * f20;
    f6 = f6 * f20;
    f4 = f4 * f1;
    f5 = f5 * f20;
    f0 = f0 * f1;
    f2 = f2 * f1;
    f7 = f13 + f3;
    f10 = f14 + f6;
    f0 = f0 * f20;
    f11 = f12 + f5;
    f2 = f2 * f20;
    f4 = f4 * f20;
    f1 = f7 + f0;
    v0 = a3 << 5;
    f8 = f10 + f2;
    f9 = f11 + f4;
    v0 = s1 + v0;
    a0 = v0 + 20;
    ST32(sp+144, FBITS(f13));
    a1 = v0 + 8;
    a3 = a3 + 1;
    ST32(sp+48, FBITS(f3));
    a2 = a3 < 0x4u;
    ST32(sp+128, FBITS(f0));
    ST32(sp+176, FBITS(f7));
    ST32(sp+160, FBITS(f1));
    ST32(sp+148, FBITS(f14));
    ST32(sp+152, FBITS(f12));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f5));
    ST32(sp+132, FBITS(f2));
    ST32(sp+136, FBITS(f4));
    ST32(sp+180, FBITS(f10));
    ST32(sp+184, FBITS(f11));
    ST32(sp+164, FBITS(f8));
    ST32(sp+168, FBITS(f9));
    ST32(a0+4, FBITS(f8));
    ST32(a0+8, FBITS(f9));
    ST32(v0+20, FBITS(f1));
    f0 = BITSF(LD32(v1+96));
    ST32(v0, FBITS(f0));
    f1 = BITSF(LD32(v1+112));
    ST32(v0+4, FBITS(f1));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(v0+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    f0 = BITSF(LD32(sp+8));
    cnd_ = a2 == 0;
    ST32(a1+8, FBITS(f0));
    if (cnd_) { goto L_088F4EC4; }
    goto L_088F4EB4;
L_088F4EB4:;
    f13 = BITSF(LD32(s0));
    f14 = BITSF(LD32(s0+4));
    f12 = BITSF(LD32(s0+8));
    goto L_088F4DB8;
L_088F4EC4:;
    v0 = LD32(t0+23112);
    v0 = v0 + 4;
    ST32(t0+23112, v0);
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F4ED4;
L_088F4ED4:;
    t0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    a0 = 4;
    a1 = 483;
    func_08A9B2EC(a0, a1, a2, a3, t0);
    goto L_088F4EEC;
L_088F4EEC:;
    a0 = D_08B2C1C4 - (-15932);
    a0 = a0 - 15932;
    v0 = LD32(a0+20);
    a1 = D_08B2C1F0 - (-15888);
    v1 = LD32(a1-15888);
    v0 = v0 + 2;
    ST32(a0+20, v0);
    v1 = v1 + 2;
    ST32(a1-15888, v1);
    func_08A9A2C4();
    goto L_088F4F14;
L_088F4F14:;
    sp = sp + 272;
    return;
L_088F4F30:;
    { rv_t r_ = func_0883563C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F4F38;
L_088F4F38:;
    a2 = v0 + 0;
    goto L_088F4BAC;
}

/* 088F4F40 */
void func_088F4F40(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088F4F40:;
    v0 = 0x7fff0000u;
    v1 = D_08AF7D88 - (32136);
    v0 = v0 | 0xffff;
    v1 = v1 + 32136;
    ST32(a0+4, v0);
    ST32(a0, v1);
    ST32(a0+44, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    return;
}

/* 088F4F68 */
rv_t func_088F4F68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F4F68:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08AF7D88 - (32136);
    v0 = v0 + 32136;
    a0 = LD32(a0+36);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088F4FBC; }
    goto L_088F4F90;
L_088F4F90:;
    v0 = LD32(a0-4);
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_088F4F9C;
L_088F4F9C:;
    cnd_ = a0 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_088F4FB4; }
    goto L_088F4FA4;
L_088F4FA4:;
    a0 = s0 + 0;
    func_088F4028(a0, t1, t2, t3);
    goto L_088F4FAC;
L_088F4FAC:;
    a0 = LD32(s1+36);
    goto L_088F4F9C;
L_088F4FB4:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F4FBC;
L_088F4FBC:;
    v0 = D_08AF7D98 - (32152);
    v0 = v0 + 32152;
    ST32(s1, v0);
    ST32(s1+36, 0);
    ST32(s1+44, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F4FE4 */
rv_t func_088F4FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F4FE4:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = D_08AF7D88 - (32136);
    v0 = v0 + 32136;
    a0 = LD32(a0+36);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088F5038; }
    goto L_088F500C;
L_088F500C:;
    v0 = LD32(a0-4);
    v0 = v0 << 4;
    s0 = a0 + v0;
    goto L_088F5018;
L_088F5018:;
    cnd_ = a0 == s0;
    s0 = s0 - 16;
    if (cnd_) { goto L_088F5030; }
    goto L_088F5020;
L_088F5020:;
    a0 = s0 + 0;
    func_088F4028(a0, t1, t2, t3);
    goto L_088F5028;
L_088F5028:;
    a0 = LD32(s1+36);
    goto L_088F5018;
L_088F5030:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5038;
L_088F5038:;
    v0 = D_08AF7D98 - (32152);
    v0 = v0 + 32152;
    ST32(s1, v0);
    a0 = s1 + 0;
    ST32(s1+36, 0);
    ST32(s1+44, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5054;
L_088F5054:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F5068 */
void func_088F5068(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F5068:;
    sp = sp - 16;
    v0 = D_08B45A44 - (23108);
    a0 = 24;
    v1 = LD32(v0+23108);
    cnd_ = v1 == 0;
    s0 = v0 + 23108;
    if (cnd_) { goto L_088F5098; }
    goto L_088F5088;
L_088F5088:;
    sp = sp + 16;
    return;
L_088F5098:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F50A0;
L_088F50A0:;
    a0 = s0 + 0;
    a1 = 1024;
    func_08AB9BC8(a0, a1, 0, 0, 0);
    goto L_088F50AC;
L_088F50AC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F50B4;
L_088F50B4:;
    v1 = D_08B45A48 - (23112);
    ST32(v1+23112, 0);
    goto L_088F5088;
}

/* 088F50C0 */
void func_088F50C0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F50C0:;
    sp = sp - 16;
    s2 = D_08B45A34 - (23092);
    a0 = LD32(s2+23092);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088F5120; }
    goto L_088F50E0;
L_088F50E0:;
    v1 = LD32(a0-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 4;
    s0 = a0 + v0;
    a0 = LD32(s2+23092);
    goto L_088F50F8;
L_088F50F8:;
    cnd_ = a0 == s0;
    s0 = s0 - 48;
    if (cnd_) { goto L_088F5118; }
    goto L_088F5100;
L_088F5100:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F5110;
L_088F5110:;
    a0 = LD32(s2+23092);
    goto L_088F50F8;
L_088F5118:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5120;
L_088F5120:;
    s1 = D_08B45A38 - (23096);
    a0 = LD32(s1+23096);
    cnd_ = a0 == 0;
    ST32(s2+23092, 0);
    if (cnd_) { goto L_088F5168; }
    goto L_088F5130;
L_088F5130:;
    v0 = LD32(a0-4);
    v0 = v0 << 6;
    s0 = a0 + v0;
    a0 = LD32(s1+23096);
    goto L_088F5140;
L_088F5140:;
    cnd_ = a0 == s0;
    s0 = s0 - 64;
    if (cnd_) { goto L_088F5160; }
    goto L_088F5148;
L_088F5148:;
    v0 = LD32(s0);
    v1 = LD32(v0);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F5158;
L_088F5158:;
    a0 = LD32(s1+23096);
    goto L_088F5140;
L_088F5160:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5168;
L_088F5168:;
    ST32(s1+23096, 0);
    v0 = D_08B45A40 - (23104);
    v1 = D_08B45A3C - (23100);
    ST32(v0+23104, 0);
    ST32(v1+23100, 0);
    sp = sp + 16;
    return;
}

/* 088F5194 */
void func_088F5194(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F5194:;
    sp = sp - 16;
    func_088F50C0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088F51A4;
L_088F51A4:;
    a0 = D_08B45A44 - (23108);
    a0 = a0 + 23108;
    func_08AB9C28(a0, 0, 0, 0);
    goto L_088F51B0;
L_088F51B0:;
    sp = sp + 16;
    return;
}

/* 088F51BC */
void func_088F51BC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F51BC:;
    sp = sp - 16;
    a0 = 1;
    s1 = 1;
    func_08904E30(a0);
    goto L_088F51DC;
L_088F51DC:;
    a0 = 1;
    func_08904FB8(a0);
    goto L_088F51E4;
L_088F51E4:;
    v0 = D_08B2C18C - (-15988);
    s0 = v0 - 15988;
    v1 = LD_U8(s0+18);
    cnd_ = v1 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F5200; }
    goto L_088F51F8;
L_088F51F8:;
    a1 = 1;
    { u64 r_ = func_0890CFE8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5200;
L_088F5200:;
    v0 = LD32(s0+40);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F5214; }
    goto L_088F520C;
L_088F520C:;
    a1 = 1;
    func_0890D298(a0, a1);
    goto L_088F5214;
L_088F5214:;
    s2 = D_08B45A40 - (23104);
    v1 = LD32(s2+23104);
    v0 = D_08B45A48 - (23112);
    ST32(v0+23112, 0);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088F5254; }
    goto L_088F522C;
L_088F522C:;
    s1 = D_08B45A38 - (23096);
    a0 = LD32(s1+23096);
    goto L_088F5234;
L_088F5234:;
    v0 = s0 << 6;
    s0 = s0 + 1;
    a0 = a0 + v0;
    func_088F5840(a0);
    goto L_088F5244;
L_088F5244:;
    v0 = LD32(s2+23104);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+23096); goto L_088F5234; }
    goto L_088F5254;
L_088F5254:;
    sp = sp + 16;
    return;
}

/* 088F526C */
rv_t func_088F526C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088F526C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088F5274 */
rv_t func_088F5274(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088F5274:;
    v1 = D_08B45A40 - (23104);
    v0 = LD32(v1+23104);
    return (rv_t){ v0, v1, f0 };
}

/* 088F5280 */
rv_t func_088F5280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088F5280:;
    v1 = D_08B45A38 - (23096);
    v0 = LD32(v1+23096);
    a1 = a1 << 6;
    v0 = v0 + a1;
    return (rv_t){ v0, v1, f0 };
}

/* 088F5294 */
rv_t func_088F5294(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088F5294:;
    v1 = D_08B45A38 - (23096);
    v0 = LD32(v1+23096);
    a1 = a1 << 6;
    v0 = v0 + a1;
    return (rv_t){ v0, v1, f0 };
}

/* 088F52A8 */
rv_t func_088F52A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088F52A8:;
    a0 = D_08B45A34 - (23092);
    v0 = LD32(a0+23092);
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 4;
    v0 = v0 + v1;
    return (rv_t){ v0, v1, f0 };
}

/* 088F52C4 */
u32 func_088F52C4(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F52C4:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    a0 = D_08B45A4C - (23116);
    a1 = a1 & v0;
    cnd_ = a1 != 0;
    a0 = a0 + 23116;
    if (cnd_) { goto L_088F52F8; }
    goto L_088F52EC;
L_088F52EC:;
    goto L_088F52F0;
L_088F52F0:;
    sp = sp + 16;
    return v0;
L_088F52F8:;
    v0 = func_08AB9C68(a0);
    goto L_088F5300;
L_088F5300:;
    goto L_088F52F0;
}

/* 088F5308 */
rv_t func_088F5308(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F5308:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    v0 = func_088F52C4(a0, a1);
    goto L_088F531C;
L_088F531C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F5328 */
void func_088F5328(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F5328:;
    sp = sp - 48;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+168);
    v0 = LD32(a0+20);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    s1 = s0 + 108;
    if (cnd_) { goto L_088F541C; }
    goto L_088F536C;
L_088F536C:;
    a0 = LD32(s0+168);
    goto L_088F5370;
L_088F5370:;
    a1 = 1;
    a2 = 0 + 0;
    func_0889C91C(a0, a1, a2);
    goto L_088F537C;
L_088F537C:;
    v0 = D_08AECFAC - (-12372);
    f12 = BITSF(LD32(v0-12372));
    a0 = 1;
    func_0890452C(a0, f12);
    goto L_088F538C;
L_088F538C:;
    a0 = s0 + 0;
    func_08A9765C(a0);
    goto L_088F5394;
L_088F5394:;
    v0 = LD32(s0+160);
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s3 + 0;
    t0 = s4 + 0;
    cnd_ = v0 != 0;
    a3 = sp + 0;
    if (cnd_) { goto L_088F53EC; }
    goto L_088F53B0;
L_088F53B0:;
    f0 = BITSF(LD32(s0+108));
    ST32(sp, FBITS(f0));
    f1 = BITSF(LD32(s1+4));
    ST32(sp+4, FBITS(f1));
    f0 = BITSF(LD32(s1+8));
    ST32(sp+8, FBITS(f0));
    func_088F5440(a0, a1, a2, a3, t0);
    goto L_088F53CC;
L_088F53CC:;
    goto L_088F53D0;
L_088F53D0:;
    sp = sp + 48;
    return;
L_088F53EC:;
    f0 = BITSF(LD32(s0+108));
    a0 = s0 + 0;
    a1 = s3 + 0;
    ST32(sp, FBITS(f0));
    a2 = sp + 0;
    f1 = BITSF(LD32(s1+4));
    ST32(sp+4, FBITS(f1));
    f0 = BITSF(LD32(s1+8));
    ST32(sp+8, FBITS(f0));
    func_088F557C(a1, a2);
    goto L_088F5414;
L_088F5414:;
    goto L_088F53D0;
L_088F541C:;
    f0 = BITSF(LD32(s0+108));
    ST32(sp, FBITS(f0));
    f1 = BITSF(LD32(s1+4));
    ST32(sp+4, FBITS(f1));
    f0 = BITSF(LD32(s1+8));
    ST32(sp+8, FBITS(f0));
    func_0889C888(a0, a1);
    goto L_088F5438;
L_088F5438:;
    a0 = LD32(s0+168);
    goto L_088F5370;
}

/* 088F5440 */
void func_088F5440(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088F5440:;
    sp = sp - 80;
    v1 = a0 + 108;
    v0 = D_08B159FC - (23036);
    s5 = a1 + 0;
    s4 = t0 + 0;
    s3 = a0 + 0;
    s2 = 0 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    f5 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(a0+108));
    v1 = LD32(v0+23036);
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f3));
    ST32(sp+8, FBITS(f5));
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f3 = f3 - f1;
    f5 = f5 - f0;
    f4 = f4 - f2;
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v1 = FBITS(f4);
    v0 = FBITS(f5);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = LD32(a2+44);
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+8, FBITS(f5));
    {v1=FBITS(v[0]);}
    f20 = BITSF(v1);
    cnd_ = v0 == 0;
    s6 = sp + 16;
    if (cnd_) { goto L_088F5550; }
    goto L_088F54FC;
L_088F54FC:;
    a0 = LD32(s1+36);
    goto L_088F5500;
L_088F5500:;
    f13 = BITSF(LD32(s3+104));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    v0 = s2 << 4;
    a0 = a0 + v0;
    a1 = s5 + 0;
    a2 = s1 + 0;
    a3 = s6 + 0;
    t0 = s4 + 0;
    f12 = f20;
    ST32(sp+16, FBITS(f0));
    s2 = s2 + 1;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    func_088F4098(a0, a3, f12, f13);
    goto L_088F5540;
L_088F5540:;
    v0 = LD32(s1+44);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+36); goto L_088F5500; }
    goto L_088F5550;
L_088F5550:;
    sp = sp + 80;
    return;
}

/* 088F557C */
void func_088F557C(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F557C:;
    sp = sp - 32;
    s3 = 0 + 0;
    s2 = a1 + 0;
    v0 = LD32(a1+44);
    cnd_ = v0 == 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_088F5600; }
    goto L_088F55B0;
L_088F55B0:;
    v0 = D_08B2C1C4 - (-15932);
    s5 = v0 - 15932;
    s4 = D_08B2C1F0 - (-15888);
    v1 = LD32(s2+36);
    goto L_088F55C0;
L_088F55C0:;
    v0 = s3 << 4;
    f0 = BITSF(LD32(s1+4));
    s0 = v1 + v0;
    f1 = BITSF(LD32(s0));
    a0 = s1 + 0;
    s3 = s3 + 1;
    f0 = f0 + f1;
    ST32(s1+4, FBITS(f0));
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F55E8;
L_088F55E8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+12); goto L_088F5624; }
    goto L_088F55F0;
L_088F55F0:;
    v0 = LD32(s2+44);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+36); goto L_088F55C0; }
    goto L_088F5600;
L_088F5600:;
    sp = sp + 32;
    return;
L_088F5624:;
    s0 = LD32(v0+24);
    a0 = s0 + 16;
    func_08A9765C(a0);
    goto L_088F5630;
L_088F5630:;
    a0 = LD32(s0+8);
    v0 = LD32(s5+20);
    v1 = LD32(s4-15888);
    v0 = v0 + a0;
    v1 = v1 + a0;
    ST32(s5+20, v0);
    ST32(s4-15888, v1);
    goto L_088F55F0;
}

/* 088F5650 */
void func_088F5650(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088F5650:;
    v1 = 0x7fff0000u;
    v0 = D_08AF7DC8 - (32200);
    a1 = a0 + 40;
    v1 = v1 | 0xffff;
    v0 = v0 + 32200;
    ST32(a0+4, v1);
    ST32(a0, v0);
    ST32(a1+8, 0);
    ST32(a1+4, 0);
    ST32(a0+32, 0);
    ST32(a0+60, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+52, 0);
    ST32(a0+56, 0);
    return;
}

/* 088F5690 */
rv_t func_088F5690(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F5690:;
    sp = sp - 16;
    v0 = D_08AF7DC8 - (32200);
    v0 = v0 + 32200;
    s2 = a0 + 0;
    a1 = LD32(a0+36);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088F5704; }
    goto L_088F56BC;
L_088F56BC:;
    v0 = LD32(a1-4);
    v1 = 172;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s1 = a1 + v0;
    goto L_088F56D0;
L_088F56D0:;
    cnd_ = a1 == s1;
    s1 = s1 - 172;
    if (cnd_) { goto L_088F56FC; }
    goto L_088F56D8;
L_088F56D8:;
    s0 = LD32(s1+168);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F56D0; }
    goto L_088F56E4;
L_088F56E4:;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F56EC;
L_088F56EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F56F4;
L_088F56F4:;
    a1 = LD32(s2+36);
    goto L_088F56D0;
L_088F56FC:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5704;
L_088F5704:;
    a0 = LD32(s2+40);
    ST32(s2+56, 0);
    s0 = s2 + 40;
    cnd_ = a0 != 0;
    ST32(s2+36, 0);
    if (cnd_) { goto L_088F5744; }
    goto L_088F5718;
L_088F5718:;
    v0 = D_08AF7DE0 - (32224);
    v0 = v0 + 32224;
    ST32(s2, v0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F5744:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F574C;
L_088F574C:;
    ST32(s2+40, 0);
    goto L_088F5718;
}

/* 088F5754 */
rv_t func_088F5754(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F5754:;
    sp = sp - 16;
    v0 = D_08AF7DC8 - (32200);
    v0 = v0 + 32200;
    s2 = a0 + 0;
    a1 = LD32(a0+36);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088F57C8; }
    goto L_088F5780;
L_088F5780:;
    v0 = LD32(a1-4);
    v1 = 172;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s1 = a1 + v0;
    goto L_088F5794;
L_088F5794:;
    cnd_ = a1 == s1;
    s1 = s1 - 172;
    if (cnd_) { goto L_088F57C0; }
    goto L_088F579C;
L_088F579C:;
    s0 = LD32(s1+168);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F5794; }
    goto L_088F57A8;
L_088F57A8:;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F57B0;
L_088F57B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F57B8;
L_088F57B8:;
    a1 = LD32(s2+36);
    goto L_088F5794;
L_088F57C0:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F57C8;
L_088F57C8:;
    a0 = LD32(s2+40);
    ST32(s2+56, 0);
    s0 = s2 + 40;
    cnd_ = a0 != 0;
    ST32(s2+36, 0);
    if (cnd_) { goto L_088F5810; }
    goto L_088F57DC;
L_088F57DC:;
    v0 = D_08AF7DE0 - (32224);
    v0 = v0 + 32224;
    ST32(s2, v0);
    a0 = s2 + 0;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F57F8;
L_088F57F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F5810:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5818;
L_088F5818:;
    ST32(s2+40, 0);
    goto L_088F57DC;
}

/* 088F5820 */
rv_t func_088F5820(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088F5820:;
    v0 = LD32(a0+56);
    return (rv_t){ v0, v1, f0 };
}

/* 088F5828 */
rv_t func_088F5828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
L_088F5828:;
    v0 = 172;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(a0+36);
    a1 = lo;
    v0 = v0 + a1;
    return (rv_t){ v0, v1, f0 };
}

/* 088F5840 */
void func_088F5840(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F5840:;
    sp = sp - 16;
    v0 = LD32(a0+56);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088F58D8; }
    goto L_088F5860;
L_088F5860:;
    v0 = LD32(a0+32);
    v1 = LD32(v0+44);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088F58DC; }
    goto L_088F5870;
L_088F5870:;
    v0 = D_08B2C18C - (-15988);
    a0 = v0 - 15988;
    v1 = LD32(a0+28);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088F58F0; }
    goto L_088F5884;
L_088F5884:;
    a0 = 0 + 0;
    goto L_088F5888;
L_088F5888:;
    a1 = 10;
    a2 = 10;
    a3 = (u32)-1;
    t0 = 0 + 0;
    func_08A991B4(a0, a1, a2, a3, t0);
    goto L_088F589C;
L_088F589C:;
    v0 = LD32(s0+56);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F58D8; }
    goto L_088F58A8;
L_088F58A8:;
    s2 = 0 + 0;
    goto L_088F58AC;
L_088F58AC:;
    a0 = LD32(s0+36);
    a2 = LD32(s0+32);
    a3 = s1 + 0;
    a0 = a0 + s2;
    a1 = s0 + 0;
    func_088F5328(a0, a1, a2, a3);
    goto L_088F58C4;
L_088F58C4:;
    v0 = LD32(s0+56);
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = s2 + 172;
    if (cnd_) { goto L_088F58AC; }
    goto L_088F58D8;
L_088F58D8:;
    goto L_088F58DC;
L_088F58DC:;
    sp = sp + 16;
    return;
L_088F58F0:;
    a1 = 0 + 0;
    func_0890D108(a0, a1);
    goto L_088F58F8;
L_088F58F8:;
    a0 = 0 + 0;
    goto L_088F5888;
}

/* 088F5900 */
float func_088F5900(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_088F5900:;
    v0 = D_08AECFB0 - (-12368);
    f0 = BITSF(LD32(v0-12368));
    v0 = D_08AECFB4 - (-12364);
    ST32(a0+76, FBITS(f0));
    f0 = BITSF(LD32(v0-12364));
    ST32(a0+80, FBITS(f0));
    return f0;
}

/* 088F591C */
u32 func_088F591C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F591C:;
    sp = sp - 16;
    a2 = a0 + 0;
    v1 = LD32(a0+20);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_088F599C; }
    goto L_088F5938;
L_088F5938:;
    v0 = v1 << 2;
    v1 = D_08AD8A14 - (-30188);
    v1 = v1 - 30188;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088F5954u: goto L_088F5954; case 0x088F596Cu: goto L_088F596C; case 0x088F597Cu: goto L_088F597C; case 0x088F598Cu: goto L_088F598C; case 0x088F599Cu: goto L_088F599C; case 0x088F59B0u: goto L_088F59B0; case 0x088F59C0u: goto L_088F59C0; case 0x088F59D0u: goto L_088F59D0; default: rs_break(0, 0x088f594c); }
L_088F5954:;
    a0 = a2 + 0;
    func_088F6B98(a0, a1);
    goto L_088F595C;
L_088F595C:;
    v0 = 1;
    goto L_088F5960;
L_088F5960:;
    goto L_088F5964;
L_088F5964:;
    sp = sp + 16;
    return v0;
L_088F596C:;
    a0 = a2 + 0;
    func_088F6974(a0, a1);
    goto L_088F5974;
L_088F5974:;
    v0 = 1;
    goto L_088F5960;
L_088F597C:;
    a0 = a2 + 0;
    func_088F702C(a1);
    goto L_088F5984;
L_088F5984:;
    v0 = 1;
    goto L_088F5960;
L_088F598C:;
    a0 = a2 + 0;
    v0 = func_088F7584(a0, a1, t1, t2, t3);
    goto L_088F5994;
L_088F5994:;
    goto L_088F5964;
L_088F599C:;
    a1 = LD32(a2+24);
    a0 = a3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F59A8;
L_088F59A8:;
    v0 = 1;
    goto L_088F5960;
L_088F59B0:;
    a0 = a2 + 0;
    func_088F725C(a0, a1);
    goto L_088F59B8;
L_088F59B8:;
    v0 = 1;
    goto L_088F5960;
L_088F59C0:;
    a0 = a2 + 0;
    v0 = func_088F74FC(a1, t1, t2, t3);
    goto L_088F59C8;
L_088F59C8:;
    goto L_088F5964;
L_088F59D0:;
    a0 = a2 + 0;
    func_088F6544(a0, a1);
    goto L_088F59D8;
L_088F59D8:;
    v0 = 1;
    goto L_088F5960;
}

/* 088F59E0 */
u32 func_088F59E0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088F59E0:;
    sp = sp - 80;
    fp = a2 + 0;
    s7 = 0 + 0;
    s6 = a3 + 0;
    s2 = a1 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088F5C28; }
    goto L_088F5A20;
L_088F5A20:;
    v0 = a3 << 1;
    v0 = v0 + a3;
    v1 = a3 << 2;
    s5 = v1 + t0;
    s4 = v0 << 4;
    v1 = D_08B45A34 - (23092);
    goto L_088F5A38;
L_088F5A38:;
    v0 = LD32(v1+23092);
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s2 + 0;
    s3 = v0 + s4;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5A54;
L_088F5A54:;
    a0 = s2 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5A68;
L_088F5A68:;
    a0 = s2 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5A7C;
L_088F5A7C:;
    a0 = s2 + 0;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5A90;
L_088F5A90:;
    a0 = s2 + 0;
    a1 = sp + 16;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5AA4;
L_088F5AA4:;
    a1 = sp + 20;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5AB8;
L_088F5AB8:;
    ST32(s5, s3);
    a0 = 20;
    s6 = s6 + 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F5AC8;
L_088F5AC8:;
    s1 = v0 + 4;
    v0 = 1;
    ST32(s1-4, v0);
    a0 = s1 + 0;
    s4 = s4 + 48;
    func_088F4014(a0);
    goto L_088F5AE0;
L_088F5AE0:;
    s5 = s5 + 4;
    cnd_ = s1 == 0;
    ST32(s3+36, s1);
    if (cnd_) { goto L_088F5CE4; }
    goto L_088F5AEC;
L_088F5AEC:;
    a0 = 32;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F5AF4;
L_088F5AF4:;
    s0 = v0 + 4;
    v1 = 1;
    ST32(s0-4, v1);
    a0 = s0 + 0;
    func_088F4168(a0);
    goto L_088F5B08;
L_088F5B08:;
    ST32(s1+12, s0);
    a1 = 0 + 0;
    v0 = LD32(s3+36);
    a0 = LD32(v0+12);
    func_088F446C(a0, a1, 0, 0, 0);
    goto L_088F5B1C;
L_088F5B1C:;
    v0 = LD32(s3+36);
    a0 = LD32(sp+8);
    v1 = LD32(v0+12);
    v0 = LD32(sp+12);
    s0 = LD32(v1+24);
    ST32(s0+4, v0);
    v1 = LD32(sp+16);
    ST32(s0+8, v1);
    v0 = LD32(sp+20);
    ST32(s0+12, v0);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5B48;
L_088F5B48:;
    a1 = LD32(sp+20);
    cnd_ = a1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088F5CA0; }
    goto L_088F5B54;
L_088F5B54:;
    a1 = LD32(sp+12);
    goto L_088F5B58;
L_088F5B58:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088F5C5C; }
    goto L_088F5B60;
L_088F5B60:;
    t3 = LD32(s0+44);
    goto L_088F5B64;
L_088F5B64:;
    t4 = LD32(s0+48);
    t0 = LD32(sp+16);
    v0 = 0xff0000u;
    t1 = t3 >> 8;
    t2 = t4 >> 8;
    t1 = t1 & v0;
    t2 = t2 & v0;
    v1 = 0x2000000u;
    v0 = 0x1000000u;
    t0 = t0 + 2;
    t3 = (t3 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t4 = (t4 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t3 = t3 | v0;
    t4 = t4 | v1;
    v0 = 0x4040000u;
    v1 = 0x10000000u;
    t0 = t0 & 0xffff;
    a0 = 0x12000000u;
    t0 = t0 | v0;
    t1 = t1 | v1;
    t2 = t2 | v1;
    a0 = a0 | 0x11e3;
    v0 = 0xb000000u;
    ST32(s0+16, a0);
    a1 = sp + 24;
    a2 = 4;
    ST32(s0+20, t1);
    a3 = 0 + 0;
    a0 = s2 + 0;
    ST32(s0+24, t3);
    ST32(s0+28, t2);
    ST32(s0+32, t4);
    ST32(s0+36, t0);
    ST32(s0+40, v0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5BF0;
L_088F5BF0:;
    a0 = s2 + 0;
    a1 = sp + 28;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5C04;
L_088F5C04:;
    v1 = LD32(s3+36);
    f0 = BITSF(LD32(sp+24));
    ST32(v1, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    ST32(v1+4, FBITS(f1));
    s7 = s7 + 1;
    goto L_088F5C1C;
L_088F5C1C:;
    v0 = s7 < fp;
    cnd_ = v0 != 0;
    v1 = D_08B45A34 - (23092);
    if (cnd_) { goto L_088F5A38; }
    goto L_088F5C28;
L_088F5C28:;
    v0 = s6 + 0;
    sp = sp + 80;
    return v0;
L_088F5C5C:;
    a0 = s0 + 48;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_088F5C64;
L_088F5C64:;
    a1 = LD32(s0+48);
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(sp+12); goto L_088F5C8C; }
    goto L_088F5C70;
L_088F5C70:;
    a2 = LD32(sp+12);
    a0 = s2 + 0;
    a3 = 0 + 0;
    a2 = a2 << 1;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5C84;
L_088F5C84:;
    t3 = LD32(s0+44);
    goto L_088F5B64;
L_088F5C8C:;
    a0 = s2 + 0;
    a1 = a1 << 1;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5C98;
L_088F5C98:;
    t3 = LD32(s0+44);
    goto L_088F5B64;
L_088F5CA0:;
    a0 = s0 + 44;
    func_08AB9C78(a0, a1, 0, 0, 0);
    goto L_088F5CA8;
L_088F5CA8:;
    a1 = LD32(s0+44);
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(sp+20); goto L_088F5CD0; }
    goto L_088F5CB4;
L_088F5CB4:;
    a2 = LD32(sp+20);
    a0 = s2 + 0;
    a3 = 0 + 0;
    a2 = a2 << 5;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5CC8;
L_088F5CC8:;
    a1 = LD32(sp+12);
    goto L_088F5B58;
L_088F5CD0:;
    a0 = s2 + 0;
    a1 = a1 << 5;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5CDC;
L_088F5CDC:;
    a1 = LD32(sp+12);
    goto L_088F5B58;
L_088F5CE4:;
    a1 = LD32(sp+20);
    a0 = s2 + 0;
    a1 = a1 << 5;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5CF4;
L_088F5CF4:;
    a1 = LD32(sp+12);
    cnd_ = a1 != 0;
    if (cnd_) { a1 = a1 << 1; goto L_088F5D20; }
    goto L_088F5D00;
L_088F5D00:;
    a1 = 4;
    goto L_088F5D04;
L_088F5D04:;
    a0 = s2 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5D0C;
L_088F5D0C:;
    a0 = s2 + 0;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5D18;
L_088F5D18:;
    s7 = s7 + 1;
    goto L_088F5C1C;
L_088F5D20:;
    a0 = s2 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5D28;
L_088F5D28:;
    a1 = 4;
    goto L_088F5D04;
}

/* 088F5D30 */
void func_088F5D30(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F5D30:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = a3 + 0;
    s1 = a2 + 0;
    s0 = t0 << 3;
    s0 = s0 - t0;
    a0 = LD32(a2+12);
    s0 = s0 << 2;
    a0 = a0 + s0;
    func_088F446C(a0, a1, t1, t2, t3);
    goto L_088F5D68;
L_088F5D68:;
    v0 = LD32(s1+12);
    a1 = sp + 0;
    a2 = 4;
    s0 = s0 + v0;
    a3 = 0 + 0;
    a0 = s2 + 0;
    s0 = LD32(s0+24);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5D88;
L_088F5D88:;
    a0 = s2 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5D9C;
L_088F5D9C:;
    a0 = s2 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5DB0;
L_088F5DB0:;
    a1 = sp + 12;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5DC4;
L_088F5DC4:;
    a0 = LD32(sp);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5DCC;
L_088F5DCC:;
    a1 = LD32(sp+12);
    ST32(s0, v0);
    v0 = LD32(sp+4);
    ST32(s0+4, v0);
    v1 = LD32(sp+8);
    ST32(s0+12, a1);
    cnd_ = a1 != 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_088F5ED0; }
    goto L_088F5DEC;
L_088F5DEC:;
    a1 = LD32(sp+4);
    goto L_088F5DF0;
L_088F5DF0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088F5E8C; }
    goto L_088F5DF8;
L_088F5DF8:;
    t0 = LD32(s0+44);
    goto L_088F5DFC;
L_088F5DFC:;
    t1 = LD32(s0+48);
    a0 = LD32(sp+8);
    v0 = 0xff0000u;
    a1 = t0 >> 8;
    a2 = t1 >> 8;
    a2 = a2 & v0;
    a1 = a1 & v0;
    a0 = a0 + 2;
    v0 = 0x1000000u;
    t0 = (t0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t2 = 0x10000000u;
    t0 = t0 | v0;
    v1 = 0x4040000u;
    v0 = 0x2000000u;
    a0 = a0 & 0xffff;
    a3 = 0x12000000u;
    t1 = (t1 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t1 = t1 | v0;
    a2 = a2 | t2;
    a0 = a0 | v1;
    a1 = a1 | t2;
    a3 = a3 | 0x11e3;
    v0 = 0xb000000u;
    ST32(s0+40, v0);
    ST32(s0+16, a3);
    ST32(s0+20, a1);
    ST32(s0+24, t0);
    ST32(s0+28, a2);
    ST32(s0+32, t1);
    ST32(s0+36, a0);
    sp = sp + 32;
    return;
L_088F5E8C:;
    a0 = s0 + 48;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_088F5E94;
L_088F5E94:;
    a1 = LD32(s0+48);
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(sp+4); goto L_088F5EBC; }
    goto L_088F5EA0;
L_088F5EA0:;
    a2 = LD32(sp+4);
    a0 = s2 + 0;
    a3 = 0 + 0;
    a2 = a2 << 1;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5EB4;
L_088F5EB4:;
    t0 = LD32(s0+44);
    goto L_088F5DFC;
L_088F5EBC:;
    a0 = s2 + 0;
    a1 = a1 << 1;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5EC8;
L_088F5EC8:;
    t0 = LD32(s0+44);
    goto L_088F5DFC;
L_088F5ED0:;
    a0 = s0 + 44;
    func_08AB9C78(a0, a1, 0, 0, 0);
    goto L_088F5ED8;
L_088F5ED8:;
    a1 = LD32(s0+44);
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(sp+12); goto L_088F5F00; }
    goto L_088F5EE4;
L_088F5EE4:;
    a2 = LD32(sp+12);
    a0 = s2 + 0;
    a3 = 0 + 0;
    a2 = a2 << 5;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5EF8;
L_088F5EF8:;
    a1 = LD32(sp+4);
    goto L_088F5DF0;
L_088F5F00:;
    a0 = s2 + 0;
    a1 = a1 << 5;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5F0C;
L_088F5F0C:;
    a1 = LD32(sp+4);
    goto L_088F5DF0;
}

/* 088F5F14 */
void func_088F5F14(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F5F14:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = a3 + 0;
    s1 = a2 + 0;
    s0 = t0 << 3;
    s0 = s0 - t0;
    a0 = LD32(a2+12);
    s0 = s0 << 2;
    a0 = a0 + s0;
    func_088F446C(a0, a1, t1, t2, t3);
    goto L_088F5F4C;
L_088F5F4C:;
    v0 = LD32(s1+12);
    a1 = sp + 0;
    a2 = 4;
    s0 = s0 + v0;
    a3 = 0 + 0;
    a0 = s2 + 0;
    s1 = LD32(s0+24);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5F6C;
L_088F5F6C:;
    a0 = s2 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5F80;
L_088F5F80:;
    a1 = sp + 8;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5F94;
L_088F5F94:;
    a0 = LD32(sp);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F5F9C;
L_088F5F9C:;
    a1 = LD32(sp+8);
    ST32(s1, v0);
    v0 = LD32(sp+4);
    ST32(s1+8, a1);
    cnd_ = a1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_088F606C; }
    goto L_088F5FB4;
L_088F5FB4:;
    s0 = LD32(sp+4);
    goto L_088F5FB8;
L_088F5FB8:;
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F5FC8;
L_088F5FC8:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_088F5FE4; }
    goto L_088F5FD4;
L_088F5FD4:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_088F5FDC;
L_088F5FDC:;
    cnd_ = v0 != v1;
    if (cnd_) { v0 = v0 - 1; goto L_088F5FDC; }
    goto L_088F5FE4;
L_088F5FE4:;
    v0 = LD32(sp+4);
    ST32(s1+16, a1);
    a0 = s2 + 0;
    a2 = v0 << 1;
    a2 = a2 + v0;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6004;
L_088F6004:;
    s0 = LD32(sp+4);
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6018;
L_088F6018:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_088F6034; }
    goto L_088F6024;
L_088F6024:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_088F602C;
L_088F602C:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_088F602C; }
    goto L_088F6034;
L_088F6034:;
    v0 = LD32(sp+4);
    ST32(s1+20, a1);
    a0 = s2 + 0;
    a2 = v0 << 1;
    a2 = a2 + v0;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6054;
L_088F6054:;
    sp = sp + 32;
    return;
L_088F606C:;
    a0 = s1 + 12;
    func_08AB9CBC(a0, a1, 0, 0, 0);
    goto L_088F6074;
L_088F6074:;
    a2 = LD32(sp+8);
    a1 = LD32(s1+12);
    a0 = s2 + 0;
    a2 = a2 << 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F608C;
L_088F608C:;
    s0 = LD32(sp+4);
    goto L_088F5FB8;
}

/* 088F6094 */
void func_088F6094(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F6094:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = a3 + 0;
    s1 = a2 + 0;
    s0 = t0 << 3;
    s0 = s0 - t0;
    a0 = LD32(a2+12);
    s0 = s0 << 2;
    a0 = a0 + s0;
    func_088F446C(a0, a1, t1, t2, t3);
    goto L_088F60CC;
L_088F60CC:;
    v0 = LD32(s1+12);
    a1 = sp + 0;
    a2 = 4;
    s0 = s0 + v0;
    a3 = 0 + 0;
    a0 = s2 + 0;
    s1 = LD32(s0+24);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F60EC;
L_088F60EC:;
    a0 = LD32(sp);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F60F4;
L_088F60F4:;
    ST32(s1, v0);
    a1 = sp + 0;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F610C;
L_088F610C:;
    s0 = LD32(sp);
    a0 = s0 << 3;
    ST32(s1+4, s0);
    a0 = a0 - s0;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6124;
L_088F6124:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_088F6140; }
    goto L_088F6130;
L_088F6130:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_088F6138;
L_088F6138:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_088F6138; }
    goto L_088F6140;
L_088F6140:;
    v0 = LD32(s1+4);
    ST32(s1+8, a1);
    a0 = s2 + 0;
    a2 = v0 << 3;
    a2 = a2 - v0;
    a2 = a2 << 3;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6160;
L_088F6160:;
    sp = sp + 32;
    return;
}

/* 088F6178 */
void func_088F6178(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_088F6178:;
    sp = sp - 144;
    s7 = a0 + 0;
    s4 = a1 + 0;
    ST32(sp+76, a2);
    ST32(sp+80, a3);
    cnd_ = a2 == 0;
    ST32(sp+84, 0);
    if (cnd_) { goto L_088F62E8; }
    goto L_088F61BC;
L_088F61BC:;
    v0 = a3 << 1;
    v0 = v0 + a3;
    v1 = a3 << 2;
    v1 = v1 + t0;
    v0 = v0 << 4;
    ST32(sp+88, v1);
    ST32(sp+92, v0);
    goto L_088F61D8;
L_088F61D8:;
    a1 = sp + 32;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F61EC;
L_088F61EC:;
    a0 = s4 + 0;
    a1 = sp + 36;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6200;
L_088F6200:;
    v0 = D_08B45A34 - (23092);
    v1 = LD32(v0+23092);
    a0 = LD32(sp+92);
    v0 = LD32(sp+80);
    s0 = LD32(sp+36);
    s6 = v1 + a0;
    ST32(s6+4, v0);
    a0 = s0 << 4;
    a0 = a0 + 4;
    v0 = LD32(sp+32);
    v1 = LD32(sp+88);
    s1 = s0 - 1;
    ST32(s6+40, v0);
    ST32(v1, s6);
    v0 = LD32(sp+80);
    v1 = LD32(sp+92);
    v0 = v0 + 1;
    v1 = v1 + 48;
    ST32(sp+80, v0);
    ST32(sp+92, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6254;
L_088F6254:;
    s2 = v0 + 4;
    a0 = LD32(sp+88);
    v0 = (u32)-1;
    ST32(s2-4, s0);
    a0 = a0 + 4;
    s0 = s2 + 0;
    cnd_ = s1 == v0;
    ST32(sp+88, a0);
    if (cnd_) { goto L_088F628C; }
    goto L_088F6274;
L_088F6274:;
    s3 = (u32)-1;
    goto L_088F6278;
L_088F6278:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_088F4014(a0);
    goto L_088F6284;
L_088F6284:;
    cnd_ = s1 != s3;
    s0 = s0 + 16;
    if (cnd_) { goto L_088F6278; }
    goto L_088F628C;
L_088F628C:;
    cnd_ = s2 == 0;
    ST32(s6+36, s2);
    if (cnd_) { goto L_088F62A4; }
    goto L_088F6294;
L_088F6294:;
    v0 = LD32(sp+36);
    fp = 0 + 0;
    cnd_ = v0 != 0;
    ST32(s6+44, v0);
    if (cnd_) { goto L_088F631C; }
    goto L_088F62A4;
L_088F62A4:;
    a0 = LD32(sp+84);
    goto L_088F62A8;
L_088F62A8:;
    v1 = LD32(sp+76);
    ST32(sp+4, 0);
    a0 = a0 + 1;
    v0 = a0 < v1;
    v1 = D_08AF0EC0 - (3776);
    ST32(sp+84, a0);
    v1 = v1 + 3776;
    a0 = (u32)-1;
    ST32(sp+8, 0);
    ST32(sp+12, a0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s4);
    cnd_ = v0 != 0;
    ST32(sp, v1);
    if (cnd_) { goto L_088F61D8; }
    goto L_088F62E8;
L_088F62E8:;
    v0 = LD32(sp+80);
    sp = sp + 144;
    return;
L_088F631C:;
    a1 = sp + 40;
    goto L_088F6320;
L_088F6320:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6330;
L_088F6330:;
    a0 = s4 + 0;
    a1 = sp + 44;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6344;
L_088F6344:;
    s0 = LD32(sp+44);
    v1 = LD32(s6+36);
    v0 = fp << 4;
    a0 = s0 << 3;
    a0 = a0 - s0;
    a0 = a0 << 2;
    a0 = a0 + 4;
    s5 = v1 + v0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6368;
L_088F6368:;
    s2 = v0 + 4;
    s1 = s0 - 1;
    v1 = (u32)-1;
    ST32(s2-4, s0);
    cnd_ = s1 == v1;
    s0 = s2 + 0;
    if (cnd_) { goto L_088F6398; }
    goto L_088F6380;
L_088F6380:;
    s3 = (u32)-1;
    goto L_088F6384;
L_088F6384:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_088F4168(a0);
    goto L_088F6390;
L_088F6390:;
    cnd_ = s1 != s3;
    s0 = s0 + 28;
    if (cnd_) { goto L_088F6384; }
    goto L_088F6398;
L_088F6398:;
    v0 = LD32(sp+44);
    ST32(s5+12, s2);
    cnd_ = s2 == 0;
    ST32(s5+8, v0);
    if (cnd_) { goto L_088F64F8; }
    goto L_088F63A8;
L_088F63A8:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088F6410; }
    goto L_088F63B0;
L_088F63B0:;
    s2 = 2;
    s3 = 3;
    s1 = 0 + 0;
    goto L_088F63BC;
L_088F63BC:;
    v0 = LD32(sp+40);
    a0 = s7 + 0;
    a1 = s4 + 0;
    a2 = s5 + 0;
    a3 = 2;
    t0 = s0 + 0;
    cnd_ = v0 == s2;
    v1 = v0 < 0x2u;
    if (cnd_) { goto L_088F6534; }
    goto L_088F63DC;
L_088F63DC:;
    cnd_ = v1 != 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_088F6524; }
    goto L_088F63E4;
L_088F63E4:;
    cnd_ = v0 == s3;
    a3 = 3;
    if (cnd_) { goto L_088F6514; }
    goto L_088F63EC;
L_088F63EC:;
    a0 = LD32(s5+12);
    a1 = v0 + 0;
    a0 = a0 + s1;
    func_088F446C(a0, a1, 0, 0, 0);
    goto L_088F63FC;
L_088F63FC:;
    v0 = LD32(sp+44);
    goto L_088F6400;
L_088F6400:;
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 28;
    if (cnd_) { goto L_088F63BC; }
    goto L_088F6410;
L_088F6410:;
    a1 = sp + 48;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6424;
L_088F6424:;
    a0 = s4 + 0;
    a1 = sp + 52;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6438;
L_088F6438:;
    f0 = BITSF(LD32(sp+48));
    v0 = LD32(sp+44);
    s1 = 0 + 0;
    ST32(s5, FBITS(f0));
    f0 = BITSF(LD32(sp+52));
    cnd_ = v0 == 0;
    ST32(s5+4, FBITS(f0));
    if (cnd_) { goto L_088F64F8; }
    goto L_088F6454;
L_088F6454:;
    s0 = 0 + 0;
    goto L_088F6458;
L_088F6458:;
    a1 = sp + 56;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F646C;
L_088F646C:;
    a0 = s4 + 0;
    a1 = sp + 60;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6480;
L_088F6480:;
    a0 = s4 + 0;
    a1 = sp + 64;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6494;
L_088F6494:;
    a0 = s4 + 0;
    a1 = sp + 68;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F64A8;
L_088F64A8:;
    a0 = s4 + 0;
    a1 = sp + 72;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F64BC;
L_088F64BC:;
    v1 = LD32(s5+12);
    f0 = BITSF(LD32(sp+64));
    v0 = LD32(sp+44);
    v1 = s0 + v1;
    ST32(v1+12, FBITS(f0));
    s1 = s1 + 1;
    v0 = s1 < v0;
    f0 = BITSF(LD32(sp+56));
    s0 = s0 + 28;
    ST32(v1+4, FBITS(f0));
    f1 = BITSF(LD32(sp+60));
    ST32(v1+8, FBITS(f1));
    f0 = BITSF(LD32(sp+68));
    cnd_ = v0 != 0;
    ST32(v1+16, FBITS(f0));
    if (cnd_) { goto L_088F6458; }
    goto L_088F64F8;
L_088F64F8:;
    v0 = LD32(sp+36);
    fp = fp + 1;
    v0 = fp < v0;
    cnd_ = v0 != 0;
    a1 = sp + 40;
    if (cnd_) { goto L_088F6320; }
    goto L_088F650C;
L_088F650C:;
    a0 = LD32(sp+84);
    goto L_088F62A8;
L_088F6514:;
    func_088F6094(a1, a2, a3, t0, 0, 0, 0);
    goto L_088F651C;
L_088F651C:;
    v0 = LD32(sp+44);
    goto L_088F6400;
L_088F6524:;
    func_088F5D30(a1, a2, a3, t0, 0, 0, 0);
    goto L_088F652C;
L_088F652C:;
    v0 = LD32(sp+44);
    goto L_088F6400;
L_088F6534:;
    func_088F5F14(a1, a2, a3, t0, 0, 0, 0);
    goto L_088F653C;
L_088F653C:;
    v0 = LD32(sp+44);
    goto L_088F6400;
}

/* 088F6544 */
void func_088F6544(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_088F6544:;
    sp = sp - 128;
    s7 = a0 + 0;
    a0 = 24;
    s2 = a1 + 0;
    s6 = D_08B45A3C - (23100);
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6584;
L_088F6584:;
    a0 = s2 + 0;
    a1 = sp + 32;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6598;
L_088F6598:;
    a0 = s2 + 0;
    a1 = sp + 36;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F65AC;
L_088F65AC:;
    a0 = s2 + 0;
    a1 = sp + 40;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F65C0;
L_088F65C0:;
    v0 = LD32(sp+36);
    a1 = LD32(sp+32);
    v1 = LD32(sp+40);
    s5 = a1 + v0;
    a0 = s5 << 1;
    a0 = a0 + s5;
    a0 = a0 << 4;
    v0 = D_08B45A40 - (23104);
    a0 = a0 + 4;
    ST32(v0+23104, v1);
    s1 = s5 - 1;
    ST32(s6+23100, a1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F65F4;
L_088F65F4:;
    s3 = v0 + 4;
    ST32(s3-4, s5);
    cnd_ = s5 == 0;
    s0 = s3 + 0;
    if (cnd_) { goto L_088F661C; }
    goto L_088F6604;
L_088F6604:;
    s4 = (u32)-1;
    goto L_088F6608;
L_088F6608:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_088F4F40(a0);
    goto L_088F6614;
L_088F6614:;
    cnd_ = s1 != s4;
    s0 = s0 + 48;
    if (cnd_) { goto L_088F6608; }
    goto L_088F661C;
L_088F661C:;
    s0 = LD32(sp+40);
    v0 = D_08B45A34 - (23092);
    ST32(v0+23092, s3);
    a0 = s0 << 6;
    a0 = a0 + 4;
    ST32(s6+23100, s5);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6638;
L_088F6638:;
    s4 = v0 + 4;
    fp = D_08B45A38 - (23096);
    ST32(s4-4, s0);
    s6 = fp + 23096;
    s3 = s4 + 0;
    cnd_ = s0 == 0;
    s1 = s0 - 1;
    if (cnd_) { goto L_088F666C; }
    goto L_088F6654;
L_088F6654:;
    s0 = (u32)-1;
    goto L_088F6658;
L_088F6658:;
    a0 = s3 + 0;
    s1 = s1 - 1;
    func_088F5650(a0);
    goto L_088F6664;
L_088F6664:;
    cnd_ = s1 != s0;
    s3 = s3 + 64;
    if (cnd_) { goto L_088F6658; }
    goto L_088F666C;
L_088F666C:;
    ST32(s6, s4);
    a0 = s5 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6678;
L_088F6678:;
    a2 = LD32(sp+32);
    t0 = v0 + 0;
    a0 = s7 + 0;
    a1 = s2 + 0;
    a3 = 0 + 0;
    ST32(sp+60, v0);
    v0 = func_088F59E0(a1, a2, a3, t0, 0, 0, 0);
    goto L_088F6694;
L_088F6694:;
    a3 = v0 + 0;
    a2 = LD32(sp+36);
    t0 = LD32(sp+60);
    a0 = s7 + 0;
    a1 = s2 + 0;
    func_088F6178(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_088F66AC;
L_088F66AC:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    ST32(sp+64, 0);
    if (cnd_) { goto L_088F6928; }
    goto L_088F66B8;
L_088F66B8:;
    a0 = s2 + 0;
    goto L_088F66BC;
L_088F66BC:;
    a1 = sp + 44;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F66CC;
L_088F66CC:;
    v1 = LD32(sp+64);
    v0 = LD32(fp+23096);
    t0 = LD32(sp+44);
    s5 = v1 << 6;
    a0 = LD32(sp+60);
    v0 = v0 + s5;
    ST32(v0+4, t0);
    v1 = t0 << 2;
    v1 = v1 + a0;
    s6 = LD32(v1);
    v0 = LD32(sp+32);
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 24;
    a3 = 0 + 0;
    s7 = t0 < v0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6710;
L_088F6710:;
    f1 = BITSF(LD32(s6+32));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+8));
    f5 = BITSF(LD32(sp+20));
    f0 = f0 - f1;
    f3 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(sp+12));
    v0 = D_08B45A38 - (23096);
    ST32(sp, FBITS(f0));
    f2 = f2 - f1;
    f5 = f5 + f1;
    f0 = BITSF(LD32(sp+16));
    f3 = f3 + f1;
    f4 = f4 + f1;
    f0 = f0 - f1;
    t0 = LD32(v0+23096);
    v0 = LD32(sp);
    ST32(sp+8, FBITS(f2));
    t0 = t0 + s5;
    a1 = sp + 48;
    ST32(sp+16, FBITS(f0));
    a0 = s2 + 0;
    a2 = 4;
    ST32(sp+4, FBITS(f3));
    a3 = 0 + 0;
    ST32(sp+12, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(t0+8, v0);
    v1 = LD32(sp+4);
    ST32(t0+12, v1);
    v0 = LD32(sp+8);
    ST32(t0+16, v0);
    v1 = LD32(sp+12);
    ST32(t0+20, v1);
    v0 = LD32(sp+16);
    ST32(t0+24, v0);
    v1 = LD32(sp+20);
    ST32(t0+28, v1);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F67AC;
L_088F67AC:;
    s0 = LD32(sp+48);
    v1 = D_08B45A38 - (23096);
    a0 = 172;
    v0 = LD32(v1+23096);
    { s64 p_ = (s64)(s32)s0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s1 = s5 + v0;
    ST32(s1+32, s6);
    a0 = lo;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F67D4;
L_088F67D4:;
    a1 = v0 + 4;
    ST32(a1-4, s0);
    v0 = a1 + 0;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_088F6800; }
    goto L_088F67E8;
L_088F67E8:;
    a0 = (u32)-1;
    goto L_088F67EC;
L_088F67EC:;
    v1 = v1 - 1;
    ST32(v0+164, 0);
    ST32(v0+168, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 172;
    if (cnd_) { goto L_088F67EC; }
    goto L_088F6800;
L_088F6800:;
    v0 = LD32(fp+23096);
    v1 = LD32(sp+48);
    ST32(s1+36, a1);
    v0 = s5 + v0;
    s4 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(v0+56, v1);
    if (cnd_) { goto L_088F6908; }
    goto L_088F681C;
L_088F681C:;
    s3 = 0 + 0;
    goto L_088F6820;
L_088F6820:;
    v0 = LD32(fp+23096);
    a3 = 0 + 0;
    a2 = 56;
    v0 = s5 + v0;
    s0 = LD32(v0+36);
    a0 = s2 + 0;
    s4 = s4 + 1;
    s0 = s0 + s3;
    a1 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6848;
L_088F6848:;
    ST32(s0+160, s7);
    a0 = 24;
    s3 = s3 + 172;
    ST32(s0+164, s6);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F685C;
L_088F685C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    a2 = 0 + 0;
    func_0889C644(a0, a1, a2, 0, 0, 0);
    goto L_088F6870;
L_088F6870:;
    ST32(s0+168, s1);
    a1 = s0 + 56;
    a0 = s2 + 0;
    a2 = 16;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6888;
L_088F6888:;
    a1 = s0 + 72;
    a0 = s2 + 0;
    a2 = 16;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F689C;
L_088F689C:;
    a1 = s0 + 88;
    a2 = 16;
    a3 = 0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F68B0;
L_088F68B0:;
    a0 = s2 + 0;
    a1 = sp + 52;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F68C4;
L_088F68C4:;
    f0 = BITSF(LD32(sp+52));
    a1 = s0 + 108;
    a2 = 12;
    ST32(s0+104, FBITS(f0));
    a3 = 0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F68E0;
L_088F68E0:;
    a0 = s2 + 0;
    a1 = sp + 56;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F68F4;
L_088F68F4:;
    v1 = LD32(sp+48);
    v0 = LD32(sp+56);
    v1 = s4 < v1;
    cnd_ = v1 != 0;
    ST32(s0+120, v0);
    if (cnd_) { goto L_088F6820; }
    goto L_088F6908;
L_088F6908:;
    v0 = LD32(sp+64);
    v0 = v0 + 1;
    ST32(sp+64, v0);
    v0 = LD32(sp+40);
    v1 = LD32(sp+64);
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088F66BC; }
    goto L_088F6928;
L_088F6928:;
    a0 = LD32(sp+60);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088F693C; }
    goto L_088F6934;
L_088F6934:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F693C;
L_088F693C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6944;
L_088F6944:;
    sp = sp + 128;
    return;
}

/* 088F6974 */
void func_088F6974(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F6974:;
    sp = sp - 48;
    s5 = 0 + 0;
    v0 = LD32(a0+12);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_088F69B4; }
    goto L_088F69A8;
L_088F69A8:;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 2;
    s5 = v0 < 0x1u;
    goto L_088F69B4;
L_088F69B4:;
    a0 = 15;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F69BC;
L_088F69BC:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F69CC;
L_088F69CC:;
    s1 = D_08B4F380 - (-3200);
    v1 = s1 - 3200;
    a0 = v0 + 0;
    s2 = v1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F69E0;
L_088F69E0:;
    s0 = v0 + 0;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088F6A60; }
    goto L_088F69F0;
L_088F69F0:;
    v0 = LD32(s1-3200);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_088F6A28; }
    goto L_088F69FC;
L_088F69FC:;
    v1 = v0 + 0;
    goto L_088F6A00;
L_088F6A00:;
    a0 = v1 + 28;
    s1 = v1 + 24;
    v1 = LD32(v1);
    s4 = 0 + 0;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_088F6A60; }
    goto L_088F6A1C;
L_088F6A1C:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F6A00; }
    goto L_088F6A28;
L_088F6A28:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F6A30;
L_088F6A30:;
    ST32(v0, s0);
    a0 = v0 + 4;
    s4 = a0 + 0;
    v1 = LD32(s2+4);
    ST32(v0+24, 0);
    v1 = v1 + 1;
    ST32(v0+28, 0);
    ST32(s2+4, v1);
    ST32(s1, v0);
    ST32(a0+4, 0);
    ST32(a0+16, 0);
    ST8(a0+8, 0);
    goto L_088F6A60;
L_088F6A60:;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6A74;
L_088F6A74:;
    a0 = s3 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6A88;
L_088F6A88:;
    cnd_ = s4 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_088F6B68; }
    goto L_088F6A90;
L_088F6A90:;
    v0 = 20;
    ST32(s4+12, v0);
    a1 = v1 + 0;
    a0 = s4 + 4;
    ST32(s4, v1);
    s1 = 0 + 0;
    ST8(s4+8, s5);
    func_08AB9D00(a0, a1, 0, 0, 0);
    goto L_088F6AB0;
L_088F6AB0:;
    v1 = LD32(s4+12);
    a1 = LD32(sp);
    { s64 p_ = (s64)(s32)a1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    a0 = s4 + 16;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_088F6AC8;
L_088F6AC8:;
    a2 = LD32(sp+4);
    a1 = LD32(s4+4);
    a0 = s3 + 0;
    a2 = a2 << 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6AE0;
L_088F6AE0:;
    a2 = LD32(sp);
    v0 = LD32(s4+12);
    a1 = LD32(s4+16);
    a0 = s3 + 0;
    { s64 p_ = (s64)(s32)a2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = lo;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6B00;
L_088F6B00:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4+4); goto L_088F6B38; }
    goto L_088F6B0C;
L_088F6B0C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6B14;
L_088F6B14:;
    sp = sp + 48;
    return;
L_088F6B38:;
    s0 = s1 << 4;
    s1 = s1 + 1;
    s0 = s0 + v0;
    a0 = LD32(s0);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6B4C;
L_088F6B4C:;
    ST32(s0, v0);
    v0 = LD32(sp+4);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4+4); goto L_088F6B38; }
    goto L_088F6B60;
L_088F6B60:;
    goto L_088F6B0C;
L_088F6B68:;
    a1 = LD32(sp+4);
    a0 = s3 + 0;
    a1 = a1 << 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6B78;
L_088F6B78:;
    a1 = LD32(sp);
    v1 = LD32(s4+12);
    { s64 p_ = (s64)(s32)a1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6B90;
L_088F6B90:;
    goto L_088F6B0C;
}

/* 088F6B98 */
void func_088F6B98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088F6B98:;
    sp = sp - 96;
    s5 = a1 + 0;
    s2 = a0 + 0;
    a0 = 5;
    s1 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6BD8;
L_088F6BD8:;
    a1 = sp + 16;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s5 + 0;
    v0 = D_08BD3780 - (14208);
    s3 = v0 + 14208;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6BF4;
L_088F6BF4:;
    a0 = s5 + 0;
    a1 = sp + 20;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6C08;
L_088F6C08:;
    a0 = s5 + 0;
    a1 = sp + 24;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6C1C;
L_088F6C1C:;
    a0 = s5 + 0;
    a1 = sp + 28;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6C30;
L_088F6C30:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s5 + 0;
    a1 = sp + 32;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6C44;
L_088F6C44:;
    v1 = LD32(sp+16);
    a0 = s3 + 76;
    a1 = v1 + 0;
    ST32(s3+44, v1);
    func_08AB9D44(a0, a1, 0, 0, 0);
    goto L_088F6C58;
L_088F6C58:;
    a0 = s3 + 96;
    a1 = LD32(sp+16);
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_088F6C64;
L_088F6C64:;
    a1 = LD32(sp+16);
    a0 = s3 + 100;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_088F6C70;
L_088F6C70:;
    v1 = LD32(sp+20);
    v0 = LD32(sp+24);
    a0 = s3 + 52;
    ST32(s3+36, v1);
    a1 = v1 + v0;
    ST32(s3+40, v0);
    func_08AB9D90(a0, a1, 0, 0, 0);
    goto L_088F6C8C;
L_088F6C8C:;
    v1 = LD32(sp+20);
    v0 = LD32(sp+24);
    v1 = v1 + v0;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s3+52); goto L_088F6CF4; }
    goto L_088F6CA0;
L_088F6CA0:;
    s4 = 466;
    s6 = 474;
    s0 = 0 + 0;
    goto L_088F6CAC;
L_088F6CAC:;
    a1 = LD32(s3+52);
    a0 = s5 + 0;
    a2 = 20;
    a1 = a1 + s0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6CC4;
L_088F6CC4:;
    v1 = LD32(s2+8);
    cnd_ = (s32)v1 <= 0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_088F7008; }
    goto L_088F6CD0;
L_088F6CD0:;
    s1 = s1 + 1;
    func_08828FF8();
    goto L_088F6CD8;
L_088F6CD8:;
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    v0 = v0 + v1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 56;
    if (cnd_) { goto L_088F6CAC; }
    goto L_088F6CF0;
L_088F6CF0:;
    v0 = LD32(s3+52);
    goto L_088F6CF4;
L_088F6CF4:;
    v1 = LD_U16(v0+2);
    a0 = v1 + 0;
    ST16(s3+64, v1);
    v0 = func_0890C938(a0);
    goto L_088F6D04;
L_088F6D04:;
    a0 = LD_U16(s3+64);
    ST16(s3+66, v0);
    v0 = func_0890C9A4(a0);
    goto L_088F6D10;
L_088F6D10:;
    a0 = LD_U16(s3+64);
    s0 = v0 << 1;
    v0 = func_0890CA0C(a0);
    goto L_088F6D1C;
L_088F6D1C:;
    a0 = LD_U16(s3+64);
    v1 = v0 << 1;
    v1 = v1 + v0;
    s0 = s0 + v1;
    v0 = func_0890C9D4(a0);
    goto L_088F6D30;
L_088F6D30:;
    v1 = LD32(s3+40);
    s0 = s0 + v0;
    cnd_ = v1 != 0;
    ST16(s3+68, s0);
    if (cnd_) { goto L_088F6FA8; }
    goto L_088F6D40;
L_088F6D40:;
    ST16(s3+70, 0);
    ST16(s3+72, 0);
    ST16(s3+74, 0);
    goto L_088F6D4C;
L_088F6D4C:;
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    v0 = v0 + v1;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F6D98; }
    goto L_088F6D60;
L_088F6D60:;
    s1 = 0 + 0;
    s0 = LD32(s3+52);
    goto L_088F6D68;
L_088F6D68:;
    s2 = s2 + 1;
    s0 = s1 + s0;
    a0 = LD32(s0+12);
    s1 = s1 + 56;
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6D7C;
L_088F6D7C:;
    ST32(s0+12, v0);
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    v0 = v0 + v1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s3+52); goto L_088F6D68; }
    goto L_088F6D98;
L_088F6D98:;
    s4 = 0 + 0;
    func_08828FF8();
    goto L_088F6DA0;
L_088F6DA0:;
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    v0 = v0 + v1;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088F6DF4; }
    goto L_088F6DB4;
L_088F6DB4:;
    s1 = 0 + 0;
    goto L_088F6DB8;
L_088F6DB8:;
    v0 = LD32(s3+52);
    s2 = s2 + 1;
    v0 = s1 + v0;
    a0 = LD_U16(v0+2);
    s0 = LD_U16(v0);
    s1 = s1 + 56;
    v0 = func_0890C938(a0);
    goto L_088F6DD4;
L_088F6DD4:;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(sp+24);
    v0 = LD32(sp+20);
    v0 = v0 + v1;
    s0 = lo;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s4 = s4 + s0;
    if (cnd_) { goto L_088F6DB8; }
    goto L_088F6DF4;
L_088F6DF4:;
    a0 = s3 + 56;
    a1 = s4 + 0;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_088F6E00;
L_088F6E00:;
    a1 = LD32(s3+56);
    a0 = s5 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6E14;
L_088F6E14:;
    func_08828FF8();
    goto L_088F6E1C;
L_088F6E1C:;
    a1 = LD32(sp+32);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088F6F78; }
    goto L_088F6E28;
L_088F6E28:;
    ST32(s3+60, 0);
    v0 = LD32(sp+20);
    goto L_088F6E30;
L_088F6E30:;
    v1 = LD32(sp+24);
    v0 = v0 + v1;
    cnd_ = v0 == 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_088F6F38; }
    goto L_088F6E40;
L_088F6E40:;
    v0 = D_08AECFB8 - (-12360);
    v1 = D_08AECFBC - (-12356);
    f21 = BITSF(LD32(v0-12360));
    f20 = BITSF(LD32(v1-12356));
    s5 = 0 + 0;
    goto L_088F6E54;
L_088F6E54:;
    v0 = LD32(s3+52);
    a0 = s3 + 0;
    s2 = 0 + 0;
    s0 = v0 + s5;
    s1 = s0 + 20;
    a1 = s0 + 0;
    func_08909B7C(a0, a1);
    goto L_088F6E70;
L_088F6E70:;
    ST32(s1+8, FBITS(f21));
    ST32(s1+16, FBITS(f21));
    ST32(s1+4, FBITS(f20));
    ST32(s1+12, FBITS(f20));
    ST32(s1+20, FBITS(f20));
    v0 = LD_U16(s0);
    cnd_ = v0 == 0;
    ST32(s0+20, FBITS(f21));
    if (cnd_) { goto L_088F6F18; }
    goto L_088F6E90;
L_088F6E90:;
    s4 = 0xb6db0000u;
    s4 = s4 | 0x6db7;
    v0 = LD32(s3+52);
    goto L_088F6E9C;
L_088F6E9C:;
    v1 = LD32(s3+36);
    v0 = s0 - v0;
    v0 = (u32)((s32)v0 >> 3);
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_088F6F70; }
    goto L_088F6EC0;
L_088F6EC0:;
    v1 = LD_U16(s3+72);
    goto L_088F6EC4;
L_088F6EC4:;
    v0 = v0 + s2;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s3+56);
    a1 = LD_U16(s0+2);
    s2 = s2 + 1;
    v0 = lo;
    a0 = a0 + v0;
    v0 = func_0890CBFC(a0, a1);
    goto L_088F6EE4;
L_088F6EE4:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_088F6F08;
L_088F6F08:;
    v0 = LD_U16(s0);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+52); goto L_088F6E9C; }
    goto L_088F6F18;
L_088F6F18:;
    s6 = s6 + 1;
    func_08828FF8();
    goto L_088F6F20;
L_088F6F20:;
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    v0 = v0 + v1;
    v0 = s6 < v0;
    cnd_ = v0 != 0;
    s5 = s5 + 56;
    if (cnd_) { goto L_088F6E54; }
    goto L_088F6F38;
L_088F6F38:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6F40;
L_088F6F40:;
    sp = sp + 96;
    return;
L_088F6F70:;
    v1 = LD_U16(s3+66);
    goto L_088F6EC4;
L_088F6F78:;
    a0 = s3 + 60;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_088F6F80;
L_088F6F80:;
    a2 = LD32(sp+32);
    a1 = LD32(s3+60);
    a0 = s5 + 0;
    a2 = a2 << 1;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F6F98;
L_088F6F98:;
    func_08828FF8();
    goto L_088F6FA0;
L_088F6FA0:;
    v0 = LD32(sp+20);
    goto L_088F6E30;
L_088F6FA8:;
    v1 = LD32(s3+36);
    a0 = LD32(s3+52);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    v0 = v0 + a0;
    v1 = LD_U16(v0+2);
    a0 = v1 + 0;
    ST16(s3+70, v1);
    v0 = func_0890C938(a0);
    goto L_088F6FD0;
L_088F6FD0:;
    a0 = LD_U16(s3+70);
    ST16(s3+72, v0);
    v0 = func_0890C9A4(a0);
    goto L_088F6FDC;
L_088F6FDC:;
    a0 = LD_U16(s3+70);
    s0 = v0 << 1;
    v0 = func_0890CA0C(a0);
    goto L_088F6FE8;
L_088F6FE8:;
    a0 = LD_U16(s3+70);
    v1 = v0 << 1;
    v1 = v1 + v0;
    s0 = s0 + v1;
    v0 = func_0890C9D4(a0);
    goto L_088F6FFC;
L_088F6FFC:;
    s0 = s0 + v0;
    ST16(s3+74, s0);
    goto L_088F6D4C;
L_088F7008:;
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    v0 = LD32(s3+52);
    if (cnd_) { goto L_088F7020; }
    goto L_088F7014;
L_088F7014:;
    v0 = s0 + v0;
    ST16(v0+2, s4);
    goto L_088F6CD0;
L_088F7020:;
    v0 = s0 + v0;
    ST16(v0+2, s6);
    goto L_088F6CD0;
}

/* 088F702C */
void func_088F702C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088F702C:;
    sp = sp - 64;
    a0 = 12;
    s3 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7054;
L_088F7054:;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7068;
L_088F7068:;
    a0 = s3 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F707C;
L_088F707C:;
    a0 = s3 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7090;
L_088F7090:;
    a0 = s3 + 0;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F70A4;
L_088F70A4:;
    a0 = s3 + 0;
    a1 = sp + 16;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F70B8;
L_088F70B8:;
    v1 = D_08BB1E80 - (7808);
    s2 = v1 + 7808;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_088F7210; }
    goto L_088F70CC;
L_088F70CC:;
    v0 = LD32(v1+7808);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_088F7100; }
    goto L_088F70D8;
L_088F70D8:;
    v1 = v0 + 0;
    goto L_088F70DC;
L_088F70DC:;
    a0 = v1 + 40;
    s1 = v1 + 36;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_088F7210; }
    goto L_088F70F4;
L_088F70F4:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F70DC; }
    goto L_088F7100;
L_088F7100:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F7108;
L_088F7108:;
    ST32(v0, s0);
    s4 = v0 + 0;
    v1 = v0 + 4;
    v0 = LD32(s2+4);
    ST32(s4+36, 0);
    s0 = v1 + 0;
    v0 = v0 + 1;
    ST32(s4+40, 0);
    ST32(s2+4, v0);
    ST32(s1, s4);
    ST32(v1+16, 0);
    cnd_ = v1 == 0;
    ST32(v1+20, 0);
    if (cnd_) { goto L_088F7210; }
    goto L_088F713C;
L_088F713C:;
    v0 = LD32(sp+4);
    ST32(v1+4, v0);
    v0 = LD32(sp+12);
    a0 = LD32(sp+16);
    ST32(v1+12, v0);
    v1 = LD32(sp+8);
    ST32(s0+8, v1);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F715C;
L_088F715C:;
    ST32(s4+4, v0);
    a0 = s4 + 20;
    a1 = LD32(sp+8);
    func_08AB9E10(a0, a1, 0, 0, 0);
    goto L_088F716C;
L_088F716C:;
    a1 = LD32(sp+12);
    a0 = s4 + 24;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_088F7178;
L_088F7178:;
    a2 = LD32(sp+8);
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(s0+16); goto L_088F71F8; }
    goto L_088F7184;
L_088F7184:;
    a2 = LD32(sp+12);
    goto L_088F7188;
L_088F7188:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(s0+20); goto L_088F71E0; }
    goto L_088F7190;
L_088F7190:;
    a1 = s4 + 28;
    goto L_088F7194;
L_088F7194:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F71A4;
L_088F71A4:;
    a1 = s4 + 32;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F71B8;
L_088F71B8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F71C0;
L_088F71C0:;
    sp = sp + 64;
    return;
L_088F71E0:;
    a2 = a2 << 1;
    a0 = s3 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F71F0;
L_088F71F0:;
    a1 = s4 + 28;
    goto L_088F7194;
L_088F71F8:;
    a2 = a2 << 5;
    a0 = s3 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7208;
L_088F7208:;
    a2 = LD32(sp+12);
    goto L_088F7188;
L_088F7210:;
    a1 = LD32(sp+8);
    a0 = s3 + 0;
    a1 = a1 << 5;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7220;
L_088F7220:;
    a1 = LD32(sp+12);
    cnd_ = a1 != 0;
    if (cnd_) { a1 = a1 << 1; goto L_088F724C; }
    goto L_088F722C;
L_088F722C:;
    a1 = 4;
    goto L_088F7230;
L_088F7230:;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7238;
L_088F7238:;
    a0 = s3 + 0;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7244;
L_088F7244:;
    goto L_088F71B8;
L_088F724C:;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7254;
L_088F7254:;
    a1 = 4;
    goto L_088F7230;
}

/* 088F725C */
void func_088F725C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F725C:;
    sp = sp - 48;
    s5 = a0 + 0;
    a0 = 13;
    s3 = a1 + 0;
    s4 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7290;
L_088F7290:;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F72A4;
L_088F72A4:;
    a0 = s3 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F72B8;
L_088F72B8:;
    a0 = s3 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F72CC;
L_088F72CC:;
    a0 = s3 + 0;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F72E0;
L_088F72E0:;
    v1 = D_08BB1E40 - (7744);
    s2 = v1 + 7744;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_088F7374; }
    goto L_088F72F4;
L_088F72F4:;
    v0 = LD32(v1+7744);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_088F732C; }
    goto L_088F7300;
L_088F7300:;
    v1 = v0 + 0;
    goto L_088F7304;
L_088F7304:;
    a0 = v1 + 36;
    s1 = v1 + 32;
    v1 = LD32(v1);
    s4 = 0 + 0;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_088F7374; }
    goto L_088F7320;
L_088F7320:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088F7304; }
    goto L_088F732C;
L_088F732C:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F7334;
L_088F7334:;
    a0 = v0 + 4;
    ST32(a0+12, 0);
    s4 = a0 + 0;
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(v0, s0);
    v1 = LD32(s2+4);
    ST32(v0+32, 0);
    v1 = v1 + 1;
    ST32(v0+36, 0);
    ST32(s2+4, v1);
    ST32(s1, v0);
    ST32(v0+4, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST8(a0+24, 0);
    goto L_088F7374;
L_088F7374:;
    v0 = LD32(s5+12);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088F74F4; }
    goto L_088F7384;
L_088F7384:;
    v0 = LD32(s5+8);
    cnd_ = (s32)v0 <= 0;
    s0 = 32;
    if (cnd_) { goto L_088F7398; }
    goto L_088F7390;
L_088F7390:;
    v1 = 1;
    s0 = 24;
    goto L_088F7398;
L_088F7398:;
    cnd_ = s4 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088F74B4; }
    goto L_088F73A0;
L_088F73A0:;
    a2 = LD32(sp+4);
    ST8(s4+24, v1);
    a0 = s4 + 0;
    a1 = a2 + 0;
    ST32(s4+20, v0);
    v1 = LD32(sp+8);
    ST32(s4+12, a2);
    ST32(s4+16, v1);
    func_08AB9E54(a0, a1, 0, 0, 0);
    goto L_088F73C4;
L_088F73C4:;
    a1 = LD32(sp+8);
    { s64 p_ = (s64)(s32)a1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    a0 = s4 + 4;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_088F73D8;
L_088F73D8:;
    a1 = LD32(sp+12);
    a0 = s4 + 8;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_088F73E4;
L_088F73E4:;
    a2 = LD32(sp+4);
    a1 = LD32(s4);
    a0 = s3 + 0;
    a2 = a2 << 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F73FC;
L_088F73FC:;
    a1 = LD32(sp+8);
    cnd_ = a1 != 0;
    { s64 p_ = (s64)(s32)s0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_088F7498; }
    goto L_088F7408;
L_088F7408:;
    a2 = LD32(sp+12);
    goto L_088F740C;
L_088F740C:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(s4+8); goto L_088F7480; }
    goto L_088F7414;
L_088F7414:;
    v0 = LD32(sp+4);
    goto L_088F7418;
L_088F7418:;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088F744C; }
    goto L_088F7420;
L_088F7420:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7428;
L_088F7428:;
    sp = sp + 48;
    return;
L_088F744C:;
    v0 = LD32(s4);
    goto L_088F7450;
L_088F7450:;
    s0 = s1 << 4;
    s1 = s1 + 1;
    s0 = s0 + v0;
    a0 = LD32(s0);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7464;
L_088F7464:;
    ST32(s0, v0);
    v0 = LD32(sp+4);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s4); goto L_088F7450; }
    goto L_088F7478;
L_088F7478:;
    goto L_088F7420;
L_088F7480:;
    a2 = a2 << 1;
    a0 = s3 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7490;
L_088F7490:;
    v0 = LD32(sp+4);
    goto L_088F7418;
L_088F7498:;
    a1 = LD32(s4+4);
    a0 = s3 + 0;
    a2 = lo;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F74AC;
L_088F74AC:;
    a2 = LD32(sp+12);
    goto L_088F740C;
L_088F74B4:;
    a1 = LD32(sp+4);
    a0 = s3 + 0;
    a1 = a1 << 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F74C4;
L_088F74C4:;
    a1 = LD32(sp+8);
    { s64 p_ = (s64)(s32)s0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F74D8;
L_088F74D8:;
    a1 = LD32(sp+12);
    cnd_ = a1 == 0;
    a1 = a1 << 1;
    if (cnd_) { goto L_088F7420; }
    goto L_088F74E4;
L_088F74E4:;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F74EC;
L_088F74EC:;
    goto L_088F7420;
L_088F74F4:;
    s0 = 32;
    goto L_088F7398;
}

/* 088F74FC */
u32 func_088F74FC(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F74FC:;
    sp = sp - 32;
    a0 = a1 + 0;
    a2 = 4;
    s0 = a1 + 0;
    a3 = 0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7520;
L_088F7520:;
    a1 = sp + 4;
    v0 = LD32(sp);
    a2 = 4;
    a3 = 0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088F7550; }
    goto L_088F753C;
L_088F753C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088F7550:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F7558;
L_088F7558:;
    a0 = s0 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F756C;
L_088F756C:;
    a1 = LD32(sp+4);
    a2 = LD32(sp+8);
    a0 = s0 + 0;
    v0 = func_089116A4(a0, a1, a2, 0, 0, 0);
    goto L_088F757C;
L_088F757C:;
    v1 = v0 + 0;
    goto L_088F753C;
}

/* 088F7584 */
u32 func_088F7584(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F7584:;
    sp = sp - 48;
    s2 = a1 + 0;
    a2 = 4;
    a1 = sp + 16;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F75B4;
L_088F75B4:;
    a0 = s2 + 0;
    a1 = sp + 20;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F75C8;
L_088F75C8:;
    v1 = LD32(sp+20);
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { goto L_088F7648; }
    goto L_088F75D4;
L_088F75D4:;
    a0 = s2 + 0;
    v0 = func_0887B084(a0);
    goto L_088F75DC;
L_088F75DC:;
    a0 = v0 + 0;
    func_08913508(a0, 0, 0, 0);
    goto L_088F75E4;
L_088F75E4:;
    v1 = LD32(s0+12);
    v0 = LD32(sp+20);
    s0 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    s1 = v1 & 0x1;
    if (cnd_) { goto L_088F7644; }
    goto L_088F75F8;
L_088F75F8:;
    a0 = s2 + 0;
    goto L_088F75FC;
L_088F75FC:;
    a1 = sp + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F760C;
L_088F760C:;
    v1 = LD32(sp);
    a0 = 0x7fff0000u;
    a1 = LD32(sp+4);
    a2 = LD32(sp+8);
    a0 = a0 | 0xffff;
    a3 = 0 + 0;
    if (s1 != 0) a3 = v1;
    if (s1 == 0) a0 = v1;
    func_0891357C(a0, a1, a2, a3, 0, 0, 0);
    goto L_088F7630;
L_088F7630:;
    v0 = LD32(sp+20);
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088F75FC; }
    goto L_088F7644;
L_088F7644:;
    goto L_088F7648;
L_088F7648:;
    v0 = 0 + 0;
    sp = sp + 48;
    return v0;
}

/* 088F7660 */
u32 func_088F7660(void)
{
    u32 v0 = 0;
L_088F7660:;
    v0 = 0x10000u;
    return v0;
}

/* 088F7668 */
void func_088F7668(void)
{
L_088F7668:;
    return;
}

/* 088F7670 */
void func_088F7670(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088F7670:;
    ST32(a2, 0);
    ST32(a2+8, 0);
    ST32(a2+4, 0);
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f1 - f0; goto L_088F76AC; }
    goto L_088F7694;
L_088F7694:;
    f1 = BITSF(LD32(a0+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+4)); goto L_088F76B4; }
    goto L_088F76A8;
L_088F76A8:;
    f0 = f1 - f0;
    goto L_088F76AC;
L_088F76AC:;
    ST32(a2, FBITS(f0));
    f0 = BITSF(LD32(a1+4));
    goto L_088F76B4;
L_088F76B4:;
    f1 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f1 - f0; goto L_088F76E0; }
    goto L_088F76C8;
L_088F76C8:;
    f1 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+8)); goto L_088F76E8; }
    goto L_088F76DC;
L_088F76DC:;
    f0 = f1 - f0;
    goto L_088F76E0;
L_088F76E0:;
    ST32(a2+4, FBITS(f0));
    f0 = BITSF(LD32(a1+8));
    goto L_088F76E8;
L_088F76E8:;
    f1 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a0+20)); goto L_088F7708; }
    goto L_088F76FC;
L_088F76FC:;
    f0 = f1 - f0;
    ST32(a2+8, FBITS(f0));
    return;
L_088F7708:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f0 = f1 - f0;
    if (cnd_) { goto L_088F771C; }
    goto L_088F7718;
L_088F7718:;
    ST32(a2+8, FBITS(f0));
    goto L_088F771C;
L_088F771C:;
    return;
}

/* 088F7724 */
u64 func_088F7724(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088F7724:;
    sp = sp - 80;
    a3 = a3 & 0xff;
    f13 = BITSF(LD32(a1));
    f21 = BITSF(LD32(a1+4));
    f12 = BITSF(LD32(a1+8));
    f19 = BITSF(LD32(a1+12));
    f15 = f21 - f13;
    f4 = BITSF(LD32(a2));
    f14 = f19 - f12;
    f5 = BITSF(LD32(a2+4));
    f2 = f4 * f15;
    f8 = BITSF(LD32(a2+12));
    f3 = f5 * f14;
    f9 = BITSF(LD32(a2+16));
    v0 = FBITS(f2);
    f6 = f8 * f15;
    f10 = f9 * f14;
    v0 = (v0 >> 0) & 0x7fffffff;
    f5 = BITSF(v0);
    v0 = FBITS(f3);
    f0 = BITSF(LD32(a2+24));
    f20 = BITSF(LD32(a1+20));
    v0 = (v0 >> 0) & 0x7fffffff;
    f9 = BITSF(v0);
    v0 = FBITS(f6);
    f17 = f0 * f15;
    f7 = BITSF(LD32(a1+16));
    v0 = (v0 >> 0) & 0x7fffffff;
    f4 = BITSF(v0);
    v0 = FBITS(f10);
    f1 = BITSF(LD32(a2+28));
    f11 = f20 - f7;
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    f18 = f1 * f14;
    v0 = FBITS(f17);
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a2+32));
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = f1 * f11;
    f1 = BITSF(v0);
    v0 = FBITS(f18);
    f8 = BITSF(LD32(a2+20));
    f16 = f0 * f11;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f6 = f8 * f11;
    v0 = FBITS(f3);
    f4 = f4 + f2;
    f1 = f1 + f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v0 = FBITS(f6);
    f5 = f5 + f9;
    f13 = f13 + f21;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = FBITS(f16);
    f5 = f5 + f2;
    f4 = f4 + f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    v0 = D_08AECFC0 - (-12352);
    f0 = BITSF(LD32(v0-12352));
    f1 = f1 + f3;
    f12 = f12 + f19;
    f9 = f5 * f0;
    f10 = f4 * f0;
    f6 = f1 * f0;
    f7 = f7 + f20;
    f1 = f13 * f0;
    f2 = f12 * f0;
    f5 = BITSF(FBITS(f10) ^ 0x80000000u);
    f12 = BITSF(FBITS(f9) ^ 0x80000000u);
    f3 = f7 * f0;
    f13 = BITSF(FBITS(f6) ^ 0x80000000u);
    ST32(sp, FBITS(f1));
    a1 = a0 + 0;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, FBITS(f15));
    ST32(sp+20, FBITS(f14));
    ST32(sp+24, FBITS(f11));
    ST32(a0, FBITS(f12));
    ST32(a0+4, FBITS(f9));
    ST32(a0+8, FBITS(f5));
    ST32(a0+12, FBITS(f10));
    ST32(a0+16, FBITS(f13));
    cnd_ = a3 == 0;
    ST32(a0+20, FBITS(f6));
    if (cnd_) { goto L_088F78D4; }
    goto L_088F7894;
L_088F7894:;
    f4 = f12 + f1;
    f5 = f5 + f2;
    f0 = f13 + f3;
    f1 = f9 + f1;
    f2 = f10 + f2;
    f3 = f6 + f3;
    ST32(a0+16, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f4));
    ST32(a0+12, FBITS(f2));
    ST32(a0+8, FBITS(f5));
    ST32(a0+20, FBITS(f3));
    goto L_088F78C4;
L_088F78C4:;
    sp = sp + 80;
    return (u64)v0 | ((u64)v1 << 32);
L_088F78D4:;
    v1 = LD32(a2);
    v0 = LD32(a2+4);
    a0 = LD32(a2+32);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    v1 = LD32(a2+8);
    {v[49]=BITSF(v0);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    v0 = LD32(a2+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a2+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {v[48]=BITSF(v1);}
    v1 = LD32(a2+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(a2+24);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(a2+28);
    v0 = FBITS(f1);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[36]=BITSF(v0);}
    {v[33]=BITSF(v1);}
    v0 = FBITS(f2);
    {v[34]=BITSF(a0);}
    {v[37]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = FBITS(f3);
    {v[38]=BITSF(v0);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    f7 = f12 + f2;
    f8 = f5 + f0;
    f3 = f9 + f2;
    f0 = f13 + f4;
    f5 = f10 + f1;
    f6 = f6 + f4;
    ST32(a1+4, FBITS(f3));
    ST32(a1+16, FBITS(f0));
    ST32(a1, FBITS(f7));
    ST32(a1+12, FBITS(f5));
    ST32(a1+8, FBITS(f8));
    ST32(a1+20, FBITS(f6));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f4));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f4));
    goto L_088F78C4;
}

/* 088F79C0 */
void func_088F79C0(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088F79C0:;
    f3 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a1+8));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = FBITS(f3);
    f5 = BITSF(0);
    {v[12]=BITSF(v0);}
    v1 = FBITS(f2);
    a1 = FBITS(f4);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    sp = sp - 112;
    t0 = a0 + 0;
    fcc = FCMP(f0, f5, 2);
    ST32(a0, FBITS(f3));
    ST32(a0+4, FBITS(f2));
    cnd_ = fcc;
    ST32(a0+8, FBITS(f4));
    if (cnd_) { goto L_088F7A48; }
    goto L_088F7A14;
L_088F7A14:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    {a1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp, a1);
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    ST32(t0, a1);
    ST32(t0+4, v0);
    ST32(t0+8, v1);
    goto L_088F7A48;
L_088F7A48:;
    fcc = FCMP(f12, f13, 12);
    cnd_ = fcc;
    v0 = t0 + 0;
    if (cnd_) { goto L_088F7DAC; }
    goto L_088F7A58;
L_088F7A58:;
    f16 = BITSF(LD32(t0));
    f17 = BITSF(LD32(t0+4));
    f18 = BITSF(LD32(t0+8));
    v1 = FBITS(f16);
    a1 = FBITS(f17);
    v0 = FBITS(f18);
    v1 = (v1 >> 0) & 0x7fffffff;
    a1 = (a1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    f1 = BITSF(a1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088F7DE0; }
    goto L_088F7A98;
L_088F7A98:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f11 = BITSF(FBITS(f16) ^ 0x80000000u);
    if (cnd_) { goto L_088F7DD0; }
    goto L_088F7AA8;
L_088F7AA8:;
    f8 = BITSF(FBITS(f18) ^ 0x80000000u);
    ST32(sp+4, FBITS(f5));
    ST32(sp, FBITS(f8));
    ST32(sp+8, FBITS(f16));
    goto L_088F7AB8;
L_088F7AB8:;
    f8 = BITSF(LD32(sp));
    f11 = BITSF(LD32(sp+4));
    f14 = BITSF(LD32(sp+8));
    v1 = FBITS(f8);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    a1 = FBITS(f11);
    {v[12]=BITSF(v1);}
    v0 = FBITS(f14);
    {v[13]=BITSF(a1);}
    f1 = BITSF(0);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    if (cnd_) { goto L_088F7B3C; }
    goto L_088F7B00;
L_088F7B00:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a1=FBITS(v[2]);}
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    f14 = BITSF(a1);
    f8 = BITSF(v0);
    f11 = BITSF(v1);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a1);
    goto L_088F7B3C;
L_088F7B3C:;
    a1 = FBITS(f16);
    v0 = FBITS(f8);
    v1 = FBITS(f17);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(a1);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    a1 = FBITS(f11);
    v0 = FBITS(f18);
    {v[1]=BITSF(a1);}
    {v[6]=BITSF(v0);}
    v1 = FBITS(f14);
    t3 = D_08AECFF0 - (-12304);
    {v[2]=BITSF(v1);}
    t2 = D_08AECFF4 - (-12300);
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[8]);}
    {v1=FBITS(v[9]);}
    ST32(sp+16, v0);
    {a1=FBITS(v[10]);}
    t1 = D_08B25AC0 - (23232);
    ST32(sp+20, v1);
    a3 = sp + 48;
    a2 = t1 + 23232;
    ST32(sp+32, v0);
    v0 = D_08AECFF8 - (-12296);
    ST32(sp+36, v1);
    v1 = D_08AECFFC - (-12292);
    ST32(sp+24, a1);
    ST32(sp+40, a1);
    f9 = BITSF(LD32(v0-12296));
    f5 = BITSF(LD32(v1-12292));
    f4 = BITSF(LD32(t3-12304));
    f10 = BITSF(LD32(t2-12300));
    goto L_088F7BC8;
L_088F7BC8:;
    v0 = LD32(a2);
    goto L_088F7BCC;
L_088F7BCC:;
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
    a1 = v1 >> 1;
    v0 = v0 >> 1;
    f3 = BITSF(a1);
    f0 = BITSF(v0);
    a0 = a0 + v1;
    f2 = (float)(s32)FBITS(f3);
    f1 = (float)(s32)FBITS(f0);
    ST32(a2+4, a0);
    f2 = f2 * f9;
    f1 = f1 * f9;
    ST32(a2, v1);
    f2 = f2 + f2;
    f1 = f1 + f1;
    f6 = f2 + f4;
    f7 = f1 + f4;
    f0 = f6 * f6;
    f1 = f7 * f7;
    ST32(a3, FBITS(f7));
    f3 = f1 + f0;
    fcc = FCMP(f10, f3, 12);
    cnd_ = fcc;
    ST32(a3+4, FBITS(f6));
    if (cnd_) { goto L_088F7BC8; }
    goto L_088F7C50;
L_088F7C50:;
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a2); goto L_088F7BCC; }
    goto L_088F7C60;
L_088F7C60:;
    f5 = sqrtf(f3);
    v0 = LD32(t1+23232);
    a1 = t1 + 23232;
    a0 = LD32(a1+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = FBITS(f13);
    {v[20]=BITSF(v1);}
    v1 = FBITS(f12);
    {v[16]=BITSF(v1);}
    v1 = v0 >> 1;
    f3 = BITSF(v1);
    {v[0]=0.63661977236f;}
    a0 = a0 + v0;
    ST32(a1+4, a0);
    {float s0=v[16];float t0=v[0];float d0=s0*t0;v[4]=d0;}
    {float s0=v[20];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    ST32(t1+23232, v0);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {a1=FBITS(v[4]);}
    {v1=FBITS(v[0]);}
    f4 = BITSF(a1);
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f3);
    f3 = f10 / f5;
    f2 = f1 - f4;
    f0 = f0 * f9;
    f1 = f6 * f3;
    f3 = f7 * f3;
    f0 = f0 * f2;
    ST32(a3+4, FBITS(f1));
    f15 = f0 + f4;
    fcc = FCMP(f10, f15, 12);
    cnd_ = !fcc;
    ST32(a3, FBITS(f3));
    if (cnd_) { goto L_088F7DB4; }
    goto L_088F7CFC;
L_088F7CFC:;
    f15 = f10;
    goto L_088F7D00;
L_088F7D00:;
    f2 = f15 * f15;
    goto L_088F7D04;
L_088F7D04:;
    f1 = BITSF(LD32(t2-12300));
    f0 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp+48));
    f1 = f1 - f2;
    f7 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f1 = sqrtf(f1);
    f14 = f14 * f4;
    f7 = f7 * f0;
    f8 = f8 * f4;
    f6 = f6 * f0;
    f5 = f5 * f0;
    f4 = f11 * f4;
    f13 = f14 + f7;
    f10 = f8 + f6;
    f3 = f16 * f15;
    f11 = f4 + f5;
    f12 = f13 * f1;
    f9 = f10 * f1;
    f2 = f17 * f15;
    f1 = f11 * f1;
    f0 = f18 * f15;
    f3 = f3 + f9;
    ST32(sp+80, FBITS(f8));
    f2 = f2 + f1;
    f0 = f0 + f12;
    ST32(t0, FBITS(f3));
    ST32(t0+8, FBITS(f0));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f14));
    ST32(t0+4, FBITS(f2));
    ST32(sp+96, FBITS(f6));
    ST32(sp+100, FBITS(f5));
    ST32(sp+104, FBITS(f7));
    ST32(sp+64, FBITS(f10));
    ST32(sp+68, FBITS(f11));
    ST32(sp+72, FBITS(f13));
    ST32(sp+32, FBITS(f9));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f12));
    v0 = t0 + 0;
    goto L_088F7DAC;
L_088F7DAC:;
    sp = sp + 112;
    return;
L_088F7DB4:;
    f0 = BITSF(LD32(t3-12304));
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f0; goto L_088F7D00; }
    goto L_088F7DC8;
L_088F7DC8:;
    f2 = f15 * f15;
    goto L_088F7D04;
L_088F7DD0:;
    ST32(sp+8, FBITS(f5));
    ST32(sp+4, FBITS(f11));
    ST32(sp, FBITS(f17));
    goto L_088F7AB8;
L_088F7DE0:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f11 = BITSF(FBITS(f16) ^ 0x80000000u);
    if (cnd_) { goto L_088F7DD0; }
    goto L_088F7DF0;
L_088F7DF0:;
    f14 = BITSF(FBITS(f17) ^ 0x80000000u);
    ST32(sp, FBITS(f5));
    ST32(sp+8, FBITS(f14));
    ST32(sp+4, FBITS(f18));
    goto L_088F7AB8;
}

/* 088F7E04 */
void func_088F7E04(u32 a0, u32 a1, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F7E04:;
    sp = sp - 48;
    a3 = D_08B25AC0 - (23232);
    t0 = a3 + 23232;
    f14 = f14 - f15;
    s0 = a0 + 0;
    a0 = sp + 0;
    v1 = LD32(a3+23232);
    a2 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AED000 - (-12288);
    a2 = a2 + v1;
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-12288));
    ST32(t0+4, a2);
    f20 = f20 * f0;
    ST32(a3+23232, v1);
    f20 = f20 * f14;
    f20 = f20 + f15;
    func_088F79C0(a0, a1, f12, f13);
    goto L_088F7E70;
L_088F7E70:;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    v0 = s0 + 0;
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    sp = sp + 48;
    return;
}

/* 088F7EAC */
void func_088F7EAC(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088F7EAC:;
    f3 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a1+8));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = FBITS(f3);
    f5 = BITSF(0);
    {v[12]=BITSF(v0);}
    v1 = FBITS(f2);
    a1 = FBITS(f4);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    sp = sp - 112;
    t0 = a0 + 0;
    fcc = FCMP(f0, f5, 2);
    ST32(a0, FBITS(f3));
    ST32(a0+4, FBITS(f2));
    cnd_ = fcc;
    ST32(a0+8, FBITS(f4));
    if (cnd_) { goto L_088F7F34; }
    goto L_088F7F00;
L_088F7F00:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    {a1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp, a1);
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    ST32(t0, a1);
    ST32(t0+4, v0);
    ST32(t0+8, v1);
    goto L_088F7F34;
L_088F7F34:;
    fcc = FCMP(f12, f13, 12);
    cnd_ = fcc;
    v0 = t0 + 0;
    if (cnd_) { goto L_088F82A4; }
    goto L_088F7F44;
L_088F7F44:;
    f16 = BITSF(LD32(t0));
    f17 = BITSF(LD32(t0+4));
    f18 = BITSF(LD32(t0+8));
    v1 = FBITS(f16);
    a1 = FBITS(f17);
    v0 = FBITS(f18);
    v1 = (v1 >> 0) & 0x7fffffff;
    a1 = (a1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    f1 = BITSF(a1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088F82D8; }
    goto L_088F7F84;
L_088F7F84:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f11 = BITSF(FBITS(f16) ^ 0x80000000u);
    if (cnd_) { goto L_088F82C8; }
    goto L_088F7F94;
L_088F7F94:;
    f8 = BITSF(FBITS(f18) ^ 0x80000000u);
    ST32(sp+4, FBITS(f5));
    ST32(sp, FBITS(f8));
    ST32(sp+8, FBITS(f16));
    goto L_088F7FA4;
L_088F7FA4:;
    f8 = BITSF(LD32(sp));
    f11 = BITSF(LD32(sp+4));
    f14 = BITSF(LD32(sp+8));
    v1 = FBITS(f8);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    a1 = FBITS(f11);
    {v[12]=BITSF(v1);}
    v0 = FBITS(f14);
    {v[13]=BITSF(a1);}
    f1 = BITSF(0);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    if (cnd_) { goto L_088F8028; }
    goto L_088F7FEC;
L_088F7FEC:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a1=FBITS(v[2]);}
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    f14 = BITSF(a1);
    f8 = BITSF(v0);
    f11 = BITSF(v1);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a1);
    goto L_088F8028;
L_088F8028:;
    a1 = FBITS(f16);
    v0 = FBITS(f8);
    v1 = FBITS(f17);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(a1);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    a1 = FBITS(f11);
    v0 = FBITS(f18);
    {v[1]=BITSF(a1);}
    {v[6]=BITSF(v0);}
    v1 = FBITS(f14);
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[8]);}
    f2 = BITSF(v0);
    ST32(sp+16, v0);
    v0 = D_08B25AC8 - (23240);
    {v1=FBITS(v[9]);}
    t2 = D_08AED004 - (-12284);
    t1 = D_08AED008 - (-12280);
    a2 = v0 + 23240;
    ST32(sp+20, v1);
    v0 = D_08AED00C - (-12276);
    {a1=FBITS(v[10]);}
    ST32(sp+36, v1);
    v1 = D_08AED010 - (-12272);
    a3 = sp + 48;
    ST32(sp+24, a1);
    ST32(sp+32, FBITS(f2));
    ST32(sp+40, a1);
    f9 = BITSF(LD32(v0-12276));
    f5 = BITSF(LD32(v1-12272));
    f4 = BITSF(LD32(t2-12284));
    f10 = BITSF(LD32(t1-12280));
    goto L_088F80B8;
L_088F80B8:;
    v0 = LD32(a2);
    goto L_088F80BC;
L_088F80BC:;
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
    a1 = v1 >> 1;
    v0 = v0 >> 1;
    f3 = BITSF(a1);
    f0 = BITSF(v0);
    a0 = a0 + v1;
    f2 = (float)(s32)FBITS(f3);
    f1 = (float)(s32)FBITS(f0);
    ST32(a2+4, a0);
    f2 = f2 * f9;
    f1 = f1 * f9;
    ST32(a2, v1);
    f2 = f2 + f2;
    f1 = f1 + f1;
    f6 = f2 + f4;
    f7 = f1 + f4;
    f0 = f6 * f6;
    f1 = f7 * f7;
    ST32(a3, FBITS(f7));
    f3 = f1 + f0;
    fcc = FCMP(f10, f3, 12);
    cnd_ = fcc;
    ST32(a3+4, FBITS(f6));
    if (cnd_) { goto L_088F80B8; }
    goto L_088F8140;
L_088F8140:;
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a2); goto L_088F80BC; }
    goto L_088F8150;
L_088F8150:;
    f5 = sqrtf(f3);
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    {v[0]=0.63661977236f;}
    a2 = a1 + 23232;
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    a0 = LD32(a2+4);
    v0 = v0 + v1;
    v1 = FBITS(f13);
    {v[20]=BITSF(v1);}
    v1 = FBITS(f12);
    {v[16]=BITSF(v1);}
    {float s0=v[16];float t0=v[0];float d0=s0*t0;v[4]=d0;}
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f3 = BITSF(v1);
    {float s0=v[20];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    a0 = a0 + v0;
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    f4 = f0;
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    ST32(a2+4, a0);
    f0 = (float)(s32)FBITS(f3);
    f2 = f1 - f4;
    f3 = f10 / f5;
    ST32(a1+23232, v0);
    f0 = f0 * f9;
    f1 = f6 * f3;
    f3 = f7 * f3;
    f0 = f0 * f2;
    ST32(a3+4, FBITS(f1));
    f15 = f0 + f4;
    fcc = FCMP(f10, f15, 12);
    cnd_ = !fcc;
    ST32(a3, FBITS(f3));
    if (cnd_) { goto L_088F82AC; }
    goto L_088F81F4;
L_088F81F4:;
    f15 = f10;
    goto L_088F81F8;
L_088F81F8:;
    f2 = f15 * f15;
    goto L_088F81FC;
L_088F81FC:;
    f1 = BITSF(LD32(t1-12280));
    f0 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp+48));
    f1 = f1 - f2;
    f7 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f1 = sqrtf(f1);
    f14 = f14 * f4;
    f7 = f7 * f0;
    f8 = f8 * f4;
    f6 = f6 * f0;
    f5 = f5 * f0;
    f4 = f11 * f4;
    f13 = f14 + f7;
    f10 = f8 + f6;
    f3 = f16 * f15;
    f11 = f4 + f5;
    f12 = f13 * f1;
    f9 = f10 * f1;
    f2 = f17 * f15;
    f1 = f11 * f1;
    f0 = f18 * f15;
    f3 = f3 + f9;
    ST32(sp+80, FBITS(f8));
    f2 = f2 + f1;
    f0 = f0 + f12;
    ST32(t0, FBITS(f3));
    ST32(t0+8, FBITS(f0));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f14));
    ST32(t0+4, FBITS(f2));
    ST32(sp+96, FBITS(f6));
    ST32(sp+100, FBITS(f5));
    ST32(sp+104, FBITS(f7));
    ST32(sp+64, FBITS(f10));
    ST32(sp+68, FBITS(f11));
    ST32(sp+72, FBITS(f13));
    ST32(sp+32, FBITS(f9));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f12));
    v0 = t0 + 0;
    goto L_088F82A4;
L_088F82A4:;
    sp = sp + 112;
    return;
L_088F82AC:;
    f0 = BITSF(LD32(t2-12284));
    fcc = FCMP(f15, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = f0; goto L_088F81F8; }
    goto L_088F82C0;
L_088F82C0:;
    f2 = f15 * f15;
    goto L_088F81FC;
L_088F82C8:;
    ST32(sp+8, FBITS(f5));
    ST32(sp+4, FBITS(f11));
    ST32(sp, FBITS(f17));
    goto L_088F7FA4;
L_088F82D8:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f11 = BITSF(FBITS(f16) ^ 0x80000000u);
    if (cnd_) { goto L_088F82C8; }
    goto L_088F82E8;
L_088F82E8:;
    f14 = BITSF(FBITS(f17) ^ 0x80000000u);
    ST32(sp, FBITS(f5));
    ST32(sp+8, FBITS(f14));
    ST32(sp+4, FBITS(f18));
    goto L_088F7FA4;
}

/* 088F82FC */
rv_t func_088F82FC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088F82FC:;
    f2 = BITSF(LD32(a1+8));
    f7 = BITSF(LD32(a1));
    f8 = BITSF(LD32(a1+4));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = FBITS(f7);
    f4 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    sp = sp - 96;
    ST32(sp+32, FBITS(f7));
    fcc = FCMP(f0, f4, 2);
    ST32(sp+36, FBITS(f8));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_088F8388; }
    goto L_088F834C;
L_088F834C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    ST32(sp+56, FBITS(f2));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, v0);
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f2));
    goto L_088F8388;
L_088F8388:;
    f12 = BITSF(LD32(sp+40));
    fcc = FCMP(f12, f4, 2);
    cnd_ = !fcc;
    f7 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_088F84FC; }
    goto L_088F839C;
L_088F839C:;
    fcc = FCMP(f7, f4, 2);
    cnd_ = !fcc;
    f11 = BITSF(FBITS(f7) ^ 0x80000000u);
    if (cnd_) { goto L_088F8500; }
    goto L_088F83AC;
L_088F83AC:;
    f8 = BITSF(LD32(sp+36));
    v1 = FBITS(f7);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f10 = BITSF(FBITS(f8) ^ 0x80000000u);
    ST32(sp+4, FBITS(f7));
    v0 = FBITS(f10);
    {v[12]=BITSF(v0);}
    v0 = 0 + 0;
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f10));
    fcc = FCMP(f0, f4, 2);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_088F8430; }
    goto L_088F83F4;
L_088F83F4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f11 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    ST32(sp+56, FBITS(f11));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, v0);
    ST32(sp, FBITS(f1));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f11));
    goto L_088F8430;
L_088F8430:;
    f10 = BITSF(LD32(sp));
    f9 = BITSF(LD32(sp+4));
    f11 = BITSF(LD32(sp+8));
    f6 = BITSF(FBITS(f10) ^ 0x80000000u);
    f5 = BITSF(FBITS(f9) ^ 0x80000000u);
    f4 = BITSF(FBITS(f11) ^ 0x80000000u);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = FBITS(f6);
    {v[8]=BITSF(v1);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f12);
    {v[10]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[5]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+64, FBITS(f6));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f4));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_088F84C4;
L_088F84C4:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    ST32(a0+32, FBITS(f12));
    ST32(a0, FBITS(f10));
    ST32(a0+12, FBITS(f9));
    ST32(a0+24, FBITS(f11));
    ST32(a0+4, FBITS(f0));
    ST32(a0+16, FBITS(f1));
    ST32(a0+28, FBITS(f2));
    ST32(a0+8, FBITS(f7));
    ST32(a0+20, FBITS(f8));
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088F84FC:;
    f11 = BITSF(FBITS(f7) ^ 0x80000000u);
    goto L_088F8500;
L_088F8500:;
    f9 = BITSF(0);
    v0 = 0 + 0;
    v1 = FBITS(f12);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[12]=BITSF(v1);}
    {v[13]=BITSF(v0);}
    v0 = FBITS(f11);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f12));
    fcc = FCMP(f0, f9, 2);
    ST32(sp+4, FBITS(f9));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f11));
    if (cnd_) { goto L_088F8580; }
    goto L_088F8540;
L_088F8540:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f11 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    ST32(sp+88, FBITS(f11));
    {v0=FBITS(v[1]);}
    f9 = BITSF(v0);
    ST32(sp+80, FBITS(f1));
    ST32(sp, FBITS(f1));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f11));
    ST32(sp+84, v0);
    goto L_088F8580;
L_088F8580:;
    f10 = BITSF(LD32(sp));
    f11 = BITSF(LD32(sp+8));
    f6 = BITSF(FBITS(f9) ^ 0x80000000u);
    f4 = BITSF(FBITS(f10) ^ 0x80000000u);
    f5 = BITSF(FBITS(f11) ^ 0x80000000u);
    f8 = BITSF(LD32(sp+36));
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f4);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[6]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[10]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[8]);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[9]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f6));
    ST32(sp+72, FBITS(f5));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    goto L_088F84C4;
}

/* 088F8618 */
rv_t func_088F8618(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0;
    int cnd_;
L_088F8618:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08B45A94 - (23188);
    t1 = D_08B45A9C - (23196);
    t4 = D_08B45AA8 - (23208);
    t2 = D_08B45ACC - (23244);
    a1 = a1 & a0;
    v1 = t4 + 23208;
    a2 = t2 + 23244;
    t3 = t1 + 23196;
    cnd_ = a1 == 0;
    a3 = t0 + 23188;
    if (cnd_) { goto L_088F86A0; }
    goto L_088F8650;
L_088F8650:;
    v0 = D_08AED024 - (-12252);
    f0 = BITSF(LD32(v0-12252));
    ST32(a3+4, 0);
    ST32(t0+23188, 0);
    ST32(t1+23196, 0);
    ST32(t3+8, 0);
    ST32(a2+12, FBITS(f0));
    ST32(t2+23244, 0);
    ST32(t4+23208, FBITS(f0));
    ST32(v1+32, FBITS(f0));
    ST32(t3+4, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, FBITS(f0));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    ST32(v1+28, 0);
    ST32(a2+4, 0);
    ST32(a2+8, 0);
    goto L_088F86A0;
L_088F86A0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088F86A8 */
rv_t func_088F86A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F86A8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088F8618(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F86BC;
L_088F86BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F86C8 */
u32 func_088F86C8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F86C8:;
    sp = sp - 16;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_088F86D8;
L_088F86D8:;
    sp = sp + 16;
    return v0;
}

/* 088F86E4 */
u64 func_088F86E4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F86E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A96F0C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F86F8;
L_088F86F8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F870C */
u64 func_088F870C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F870C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A97224(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F8720;
L_088F8720:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F8734 */
u32 func_088F8734(void)
{
    u32 v0 = 0;
L_088F8734:;
    v0 = 0x100000u;
    v0 = v0 | 0x8000;
    return v0;
}

/* 088F8740 */
u32 func_088F8740(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F8740:;
    sp = sp - 48;
    s2 = D_08B1618A - (24970);
    v0 = LD_U8(s2+24970);
    s3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F8838; }
    goto L_088F876C;
L_088F876C:;
    cnd_ = (s32)a0 <= 0;
    s4 = D_08B45AE8 - (23272);
    if (cnd_) { goto L_088F8838; }
    goto L_088F8774;
L_088F8774:;
    v0 = sceKernelTotalFreeMemSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F877C;
L_088F877C:;
    s0 = v0 + 0;
    v0 = sceKernelMaxFreeMemSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8784;
L_088F8784:;
    a0 = D_08AD8A64 - (-30108);
    a1 = s0 + 0;
    a0 = a0 - 30108;
    s1 = v0 + 0;
    ST8(s2+24970, 0);
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F879C;
L_088F879C:;
    a0 = D_08AD8A8C - (-30068);
    a1 = s1 + 0;
    a0 = a0 - 30068;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F87AC;
L_088F87AC:;
    v0 = sceKernelMaxFreeMemSize(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F87B4;
L_088F87B4:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_088F8734();
    goto L_088F87C0;
L_088F87C0:;
    s0 = s0 - v0;
    a0 = D_08AD8AB0 - (-30032);
    a0 = a0 - 30032;
    a1 = s0 + 0;
    ST32(s4+23272, s0);
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F87D8;
L_088F87D8:;
    a0 = D_08AD8AC8 - (-30008);
    a3 = LD32(s4+23272);
    a0 = a0 - 30008;
    a1 = 2;
    a2 = 256;
    t0 = 1;
    t1 = 0 + 0;
    v0 = sceKernelCreateFpl(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F87F8;
L_088F87F8:;
    a0 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a1 = sp + 0;
    if (cnd_) { goto L_088F887C; }
    goto L_088F8804;
L_088F8804:;
    v0 = sceKernelTryAllocateFpl(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F880C;
L_088F880C:;
    a0 = D_08AD8AD0 - (-30000);
    cnd_ = (s32)v0 < 0;
    a0 = a0 - 30000;
    if (cnd_) { goto L_088F886C; }
    goto L_088F8818;
L_088F8818:;
    a0 = LD32(sp);
    v0 = LD32(s4+23272);
    v1 = D_08B45AEC - (23276);
    a1 = a0 + 4095;
    v0 = a0 + v0;
    a1 = (a1 & ~(0xfffu << 0)) | ((0 & 0xfff) << 0);
    cnd_ = a0 != 0;
    ST32(v1+23276, v0);
    if (cnd_) { goto L_088F8848; }
    goto L_088F8838;
L_088F8838:;
    cnd_ = s3 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_088F8848; }
    goto L_088F8840;
L_088F8840:;
    v0 = D_08B45AEC - (23276);
    a1 = LD32(v0+23276);
    goto L_088F8848;
L_088F8848:;
    v0 = a1 + 0;
    sp = sp + 48;
    return v0;
L_088F886C:;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8874;
L_088F8874:;
    a1 = (u32)-1;
    goto L_088F8848;
L_088F887C:;
    a0 = D_08AD8AF0 - (-29968);
    a0 = a0 - 29968;
    goto L_088F886C;
}

/* 088F8888 */
void func_088F8888(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8888:;
    sp = sp - 16;
    a0 = 64;
    s0 = 1;
    v0 = sceKernelSetGPO(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F88A0;
L_088F88A0:;
    a0 = 1000;
    v0 = sceKernelDelayThreadCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F88A8;
L_088F88A8:;
    v1 = s0 < 0x5u;
    cnd_ = v1 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_088F88A0; }
    goto L_088F88B4;
L_088F88B4:;
    rs_break(0x1, 0x088f88b4);
    sp = sp + 16;
    return;
}

/* 088F88CC */
u64 func_088F88CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F88CC:;
    sp = sp - 16;
    { u64 r_ = func_088F8998(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F88DC;
L_088F88DC:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F88EC */
u64 func_088F88EC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F88EC:;
    sp = sp - 16;
    { u64 r_ = func_088F8A18(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F88FC;
L_088F88FC:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F890C */
u64 func_088F890C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F890C:;
    sp = sp - 16;
    s2 = D_08B45AF8 - (23288);
    a0 = D_08AD8B08 - (-29944);
    v0 = (u32)(s32)LD_S8(s2+23288);
    a0 = a0 - 29944;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 1;
    t0 = 0 + 0;
    cnd_ = v0 == 0;
    s1 = D_08B45B00 - (23296);
    if (cnd_) { goto L_088F8964; }
    goto L_088F8948;
L_088F8948:;
    v0 = s1 + 23296;
    goto L_088F894C;
L_088F894C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F8964:;
    s0 = s1 + 23296;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F896C;
L_088F896C:;
    ST32(s1+23296, v0);
    ST32(s0+8, 0);
    v0 = func_088F8C18();
    goto L_088F8978;
L_088F8978:;
    a0 = ((u32)(uintptr_t)func_088F8A90) - (-30064);
    ST32(s0+4, v0);
    a0 = a0 - 30064;
    v0 = 1;
    ST8(s2+23288, v0);
    { u64 r_ = func_08A85E78(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F8990;
L_088F8990:;
    v0 = s1 + 23296;
    goto L_088F894C;
}

/* 088F8998 */
u64 func_088F8998(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8998:;
    sp = sp - 16;
    v0 = D_08B15AB0 - (23216);
    v1 = LD_U8(v0+23216);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088F89CC; }
    goto L_088F89B8;
L_088F89B8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F89CC:;
    { u64 r_ = func_088F890C(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F89D4;
L_088F89D4:;
    s0 = v0 + 0;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F89DC;
L_088F89DC:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F89F8; }
    goto L_088F89EC;
L_088F89EC:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F89F4;
L_088F89F4:;
    ST32(s0+4, s1);
    goto L_088F89F8;
L_088F89F8:;
    v0 = LD32(s0+8);
    v1 = D_08B45AF0 - (23280);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD32(v1+23280);
    v0 = v0 + 1;
    ST32(v1+23280, v0);
    goto L_088F89B8;
}

/* 088F8A18 */
u64 func_088F8A18(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8A18:;
    sp = sp - 16;
    a0 = D_08B45AF0 - (23280);
    v0 = LD32(a0+23280);
    cnd_ = v0 != 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_088F8A44; }
    goto L_088F8A34;
L_088F8A34:;
    goto L_088F8A38;
L_088F8A38:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F8A44:;
    ST32(a0+23280, v1);
    { u64 r_ = func_088F890C(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F8A4C;
L_088F8A4C:;
    s0 = v0 + 0;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088F8A38; }
    goto L_088F8A5C;
L_088F8A5C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_088F8A38; }
    goto L_088F8A74;
L_088F8A74:;
    v0 = func_088F8C18();
    goto L_088F8A7C;
L_088F8A7C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F8A88;
L_088F8A88:;
    goto L_088F8A38;
}

/* 088F8A90 */
rv_t func_088F8A90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8A90:;
    sp = sp - 16;
    v0 = D_08B45B00 - (23296);
    a0 = LD32(v0+23296);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8AA4;
L_088F8AA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F8AB0 */
rv_t func_088F8AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8AB0:;
    sp = sp - 16;
    v0 = 0 + 0;
    fpu_csr = v0 & 0x0183FFFFu; fcc = (v0 >> 23) & 1;
    v0 = LD32(a1);
    t_ = v0;
    a0 = LD32(a1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088F8ACC;
L_088F8ACC:;
    a0 = 0 + 0;
    v0 = sceKernelExitDeleteThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8AD4;
L_088F8AD4:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088F8AE4 */
u32 func_088F8AE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F8AE4:;
    sp = sp - 32;
    s0 = a0 + 0;
    ST32(sp, a1);
    ST32(sp+4, a2);
    v0 = sceKernelGetThreadCurrentPriority(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8B04;
L_088F8B04:;
    a1 = ((u32)(uintptr_t)func_088F8AB0) - (-30032);
    a0 = s0 + 0;
    a1 = a1 - 30032;
    a2 = v0 + 0;
    a3 = 0xa000;
    t0 = 16384;
    t1 = 0 + 0;
    v0 = sceKernelCreateThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8B24;
L_088F8B24:;
    cnd_ = (s32)v0 <= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F8B74; }
    goto L_088F8B2C;
L_088F8B2C:;
    a0 = s0 + 0;
    goto L_088F8B30;
L_088F8B30:;
    a1 = 8;
    a2 = sp + 0;
    v0 = sceKernelStartThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8B3C;
L_088F8B3C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088F8B4C; }
    goto L_088F8B44;
L_088F8B44:;
    rs_break(0x1, 0x088f8b44);
    goto L_088F8B4C;
L_088F8B4C:;
    func_088F8B84(0, 0, 0, 0, 0, 0, 0);
    goto L_088F8B54;
L_088F8B54:;
    v1 = s1 < 0x1u;
    v0 = (s32)0 < (s32)s0;
    v0 = v0 & v1;
    sp = sp + 32;
    return v0;
L_088F8B74:;
    rs_break(0x1, 0x088f8b74);
    a0 = s0 + 0;
    goto L_088F8B30;
}

/* 088F8B84 */
void func_088F8B84(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8B84:;
    sp = sp - 16;
    a0 = 0 + 0;
    v0 = sceKernelRotateThreadReadyQueue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8B94;
L_088F8B94:;
    sp = sp + 16;
    return;
}

/* 088F8BA0 */
u64 func_088F8BA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8BA0:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088F8BD8; }
    goto L_088F8BB0;
L_088F8BB0:;
    v0 = D_08AED028 - (-12248);
    f0 = BITSF(LD32(v0-12248));
    f0 = f12 * f0;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    v0 = sceKernelDelayThreadCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8BCC;
L_088F8BCC:;
    goto L_088F8BD0;
L_088F8BD0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088F8BD8:;
    v0 = D_08AED028 - (-12248);
    f0 = BITSF(LD32(v0-12248));
    f0 = f12 * f0;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8BF4;
L_088F8BF4:;
    goto L_088F8BD0;
}

/* 088F8BFC */
u64 func_088F8BFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8BFC:;
    sp = sp - 16;
    v0 = sceKernelGetThreadId(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8C0C;
L_088F8C0C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F8C18 */
u32 func_088F8C18(void)
{
    u32 v0 = 0;
L_088F8C18:;
    v0 = (u32)-1;
    return v0;
}

/* 088F8C20 */
u64 func_088F8C20(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8C20:;
    sp = sp - 16;
    a1 = 1;
    a2 = 0 + 0;
    a0 = LD32(a0);
    v0 = sceKernelWaitSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8C38;
L_088F8C38:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F8C44 */
u64 func_088F8C44(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8C44:;
    sp = sp - 16;
    a1 = 1;
    a0 = LD32(a0);
    v0 = sceKernelSignalSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8C58;
L_088F8C58:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F8C64 */
void func_088F8C64(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8C64:;
    sp = sp - 16;
    a1 = 1;
    a2 = 1;
    a0 = LD32(a0);
    a3 = 0 + 0;
    t0 = 0 + 0;
    v0 = sceKernelWaitEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8C84;
L_088F8C84:;
    sp = sp + 16;
    return;
}

/* 088F8C90 */
u64 func_088F8C90(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8C90:;
    sp = sp - 16;
    a1 = 1;
    a0 = LD32(a0);
    v0 = sceKernelSetEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8CA4;
L_088F8CA4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F8CB0 */
void func_088F8CB0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8CB0:;
    sp = sp - 16;
    a1 = 0 + 0;
    a0 = LD32(a0);
    v0 = sceKernelClearEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8CC4;
L_088F8CC4:;
    sp = sp + 16;
    return;
}

/* 088F8CD0 */
void func_088F8CD0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F8CD0:;
    sp = sp - 32;
    a0 = sp + 0;
    v0 = sceRtcGetCurrentClockLocalTime(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8CE4;
L_088F8CE4:;
    v1 = D_08B28440 - (-31680);
    s0 = v1 - 31680;
    cnd_ = (s32)v0 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F8D34; }
    goto L_088F8CF4;
L_088F8CF4:;
    v0 = LD_U16(sp);
    a2 = LD_U8(sp+4);
    a1 = LD_U8(sp+2);
    ST16(v1-31680, v0);
    a2 = a2 - 1;
    a1 = a1 - 1;
    v1 = LD_U8(sp+10);
    v0 = LD_U8(sp+8);
    ST8(s0+3, a2);
    ST8(s0+7, v1);
    v1 = LD_U8(sp+6);
    ST8(s0+6, v0);
    ST8(s0+5, v1);
    ST8(s0+2, a1);
    v0 = func_0883B73C(a0);
    goto L_088F8D30;
L_088F8D30:;
    ST8(s0+4, v0);
    goto L_088F8D34;
L_088F8D34:;
    sp = sp + 32;
    return;
}

/* 088F8D44 */
u32 func_088F8D44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8D44:;
    sp = sp - 16;
    v0 = sceKernelGetSystemTimeLow(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8D54;
L_088F8D54:;
    sp = sp + 16;
    return v0;
}

/* 088F8D60 */
u32 func_088F8D60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088F8D60:;
    v1 = a1 < a0;
    v0 = a1 - a0;
    v0 = v0 - v1;
    return v0;
}

/* 088F8D70 */
float func_088F8D70(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_088F8D70:;
    v0 = a0 + 0;
    a0 = (a0 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    f0 = BITSF(a0);
    v0 = (v0 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0);
    cnd_ = v0 == 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088F8D94; }
    goto L_088F8D88;
L_088F8D88:;
    v0 = D_08AED02C - (-12244);
    f0 = BITSF(LD32(v0-12244));
    f1 = f1 + f0;
    goto L_088F8D94;
L_088F8D94:;
    v0 = D_08AED030 - (-12240);
    f0 = BITSF(LD32(v0-12240));
    f0 = f1 * f0;
    return f0;
}

/* 088F8DA4 */
void func_088F8DA4(void)
{
L_088F8DA4:;
    return;
}

/* 088F8DAC */
void func_088F8DAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8DAC:;
    sp = sp - 16;
    v0 = func_088F8D44(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8DBC;
L_088F8DBC:;
    v1 = D_08B45B10 - (23312);
    ST32(v1+23312, v0);
    sp = sp + 16;
    return;
}

/* 088F8DD0 */
void func_088F8DD0(void)
{
L_088F8DD0:;
    return;
}

/* 088F8DD8 */
void func_088F8DD8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F8DD8:;
    sp = sp - 32;
    a0 = 0 + 0;
    v0 = sceKernelRotateThreadReadyQueue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8DEC;
L_088F8DEC:;
    v1 = D_08B285CC - (-31284);
    f1 = BITSF(LD32(v1-31284));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088F8E40; }
    goto L_088F8E08;
L_088F8E08:;
    v0 = D_08AED034 - (-12236);
    f0 = BITSF(LD32(v0-12236));
    f20 = f0 / f1;
    goto L_088F8E14;
L_088F8E14:;
    f0 = func_0883BCF4(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088F8E1C;
L_088F8E1C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_088F8E3C; }
    goto L_088F8E2C;
L_088F8E2C:;
    v0 = sceKernelRotateThreadReadyQueue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8E34;
L_088F8E34:;
    goto L_088F8E14;
L_088F8E3C:;
    goto L_088F8E40;
L_088F8E40:;
    sp = sp + 32;
    return;
}

/* 088F8E4C */
u32 func_088F8E4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8E4C:;
    sp = sp - 16;
    s1 = D_08B45B10 - (23312);
    v0 = func_088F8D44(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8E64;
L_088F8E64:;
    s0 = v0 + 0;
    a0 = LD32(s1+23312);
    a1 = v0 + 0;
    v0 = func_088F8D60(a0, a1);
    goto L_088F8E74;
L_088F8E74:;
    ST32(s1+23312, s0);
    sp = sp + 16;
    return v0;
}

/* 088F8E8C */
u32 func_088F8E8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8E8C:;
    sp = sp - 16;
    v0 = func_088F8D44(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8E9C;
L_088F8E9C:;
    v1 = D_08B45B10 - (23312);
    a0 = LD32(v1+23312);
    a1 = v0 + 0;
    v0 = func_088F8D60(a0, a1);
    goto L_088F8EAC;
L_088F8EAC:;
    sp = sp + 16;
    return v0;
}

/* 088F8EB8 */
float func_088F8EB8(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_088F8EB8:;
    v0 = D_08AED038 - (-12232);
    f0 = BITSF(LD32(v0-12232));
    return f0;
}

/* 088F8EC4 */
float func_088F8EC4(void)
{
    u32 v0 = 0;
    float f0 = 0;
L_088F8EC4:;
    v0 = D_08AED03C - (-12228);
    f0 = BITSF(LD32(v0-12228));
    return f0;
}

/* 088F8ED0 */
u32 func_088F8ED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8ED0:;
    sp = sp - 16;
    v0 = func_088F8D44(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8EE0;
L_088F8EE0:;
    sp = sp + 16;
    return v0;
}

/* 088F8EEC */
u32 func_088F8EEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8EEC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_088F8D44(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F8F00;
L_088F8F00:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_088F8D60(a0, a1);
    goto L_088F8F0C;
L_088F8F0C:;
    sp = sp + 16;
    return v0;
}

/* 088F8F1C */
float func_088F8F1C(u32 a0)
{
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8F1C:;
    sp = sp - 16;
    f0 = func_088F8D70(a0);
    goto L_088F8F2C;
L_088F8F2C:;
    sp = sp + 16;
    return f0;
}

/* 088F8F38 */
u64 func_088F8F38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F8F38:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a0 = LD_U16(s2);
    goto L_088F8F58;
L_088F8F58:;
    s2 = s2 + 2;
    v0 = func_08A8B264(a0);
    goto L_088F8F60;
L_088F8F60:;
    a0 = LD_U16(s1);
    s0 = v0 & 0xffff;
    s1 = s1 + 2;
    v0 = func_08A8B264(a0);
    goto L_088F8F70;
L_088F8F70:;
    a0 = v0 & 0xffff;
    v1 = s0 ^ a0;
    v1 = v1 < 0x1u;
    v0 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD_U16(s2); goto L_088F8F58; }
    goto L_088F8F8C;
L_088F8F8C:;
    v0 = s0 - a0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F8FA8 */
u64 func_088F8FA8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088F8FA8:;
    sp = sp - 32;
    v0 = 0 + 0;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088F8FF0; }
    goto L_088F8FD4;
L_088F8FD4:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088F8FF0:;
    a0 = LD_U16(s3);
    goto L_088F8FF4;
L_088F8FF4:;
    s1 = s1 - 1;
    s3 = s3 + 2;
    v0 = func_08A8B264(a0);
    goto L_088F9000;
L_088F9000:;
    a0 = LD_U16(s2);
    s0 = v0 & 0xffff;
    s2 = s2 + 2;
    v0 = func_08A8B264(a0);
    goto L_088F9010;
L_088F9010:;
    a0 = v0 & 0xffff;
    v0 = s0 ^ a0;
    v1 = 0 < s0;
    v0 = v0 < 0x1u;
    cnd_ = s1 == 0;
    v1 = v1 & v0;
    if (cnd_) { goto L_088F9030; }
    goto L_088F9028;
L_088F9028:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD_U16(s3); goto L_088F8FF4; }
    goto L_088F9030;
L_088F9030:;
    v0 = s0 - a0;
    goto L_088F8FD4;
}

/* 088F9038 */
u64 func_088F9038(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088F9038:;
    v1 = a0 + 0;
    goto L_088F903C;
L_088F903C:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    a0 = a0 + 2;
    if (cnd_) { goto L_088F903C; }
    goto L_088F9048;
L_088F9048:;
    v0 = a0 - v1;
    v0 = v0 - 2;
    v0 = (u32)((s32)v0 >> 1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F9058 */
u64 func_088F9058(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088F9058:;
    v1 = LD_U16(a0);
    cnd_ = v1 == 0;
    a1 = a1 & 0xffff;
    if (cnd_) { goto L_088F907C; }
    goto L_088F9064;
L_088F9064:;
    v0 = a0 + 0;
    goto L_088F9068;
L_088F9068:;
    cnd_ = v1 == a1;
    a0 = a0 + 2;
    if (cnd_) { goto L_088F9080; }
    goto L_088F9070;
L_088F9070:;
    v1 = LD_U16(a0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = a0 + 0; goto L_088F9068; }
    goto L_088F907C;
L_088F907C:;
    v0 = 0 + 0;
    goto L_088F9080;
L_088F9080:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F9088 */
u32 func_088F9088(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088F9088:;
    v1 = LD_U16(a0);
    v0 = LD_U16(a1);
    a0 = a0 + 2;
    cnd_ = v1 == v0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088F90A8; }
    goto L_088F909C;
L_088F909C:;
    v0 = v1 - v0;
    goto L_088F90A0;
L_088F90A0:;
    return v0;
L_088F90A8:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088F90A0; }
    goto L_088F90B0;
L_088F90B0:;
    v1 = LD_U16(a0);
    v0 = LD_U16(a1);
    a0 = a0 + 2;
    cnd_ = v1 == v0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088F90A8; }
    goto L_088F90C4;
L_088F90C4:;
    v0 = v1 - v0;
    return v0;
}

/* 088F90CC */
u32 func_088F90CC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088F90CC:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088F9108; }
    goto L_088F90D4;
L_088F90D4:;
    a3 = LD_U16(a0);
    goto L_088F90D8;
L_088F90D8:;
    t0 = LD_U16(a1);
    a2 = a2 - 1;
    v1 = 0 < a3;
    v0 = a3 ^ t0;
    v0 = v0 < 0x1u;
    a0 = a0 + 2;
    v1 = v1 & v0;
    cnd_ = a2 == 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088F9104; }
    goto L_088F90FC;
L_088F90FC:;
    cnd_ = v1 != 0;
    if (cnd_) { a3 = LD_U16(a0); goto L_088F90D8; }
    goto L_088F9104;
L_088F9104:;
    v0 = a3 - t0;
    goto L_088F9108;
L_088F9108:;
    return v0;
}

/* 088F9110 */
u64 func_088F9110(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088F9110:;
    a1 = a1 - a0;
    a1 = (a1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = a1 + a0;
    v1 = LD_U16(v0);
    a2 = a0 + 0;
    cnd_ = v1 == 0;
    ST16(a0, v1);
    if (cnd_) { goto L_088F9140; }
    goto L_088F912C;
L_088F912C:;
    a2 = a2 + 2;
    v0 = a1 + a2;
    v1 = LD_U16(v0);
    cnd_ = v1 != 0;
    ST16(a2, v1);
    if (cnd_) { goto L_088F912C; }
    goto L_088F9140;
L_088F9140:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F9148 */
u64 func_088F9148(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_088F9148:;
    a1 = a1 - a0;
    v0 = (u32)((s32)a1 >> 1);
    cnd_ = a2 == 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_088F9188; }
    goto L_088F9158;
L_088F9158:;
    a1 = v0 << 1;
    v0 = a1 + a0;
    v1 = LD_U16(v0);
    cnd_ = v1 == 0;
    ST16(a0, v1);
    if (cnd_) { goto L_088F9188; }
    goto L_088F916C;
L_088F916C:;
    a3 = a3 + 2;
    a2 = a2 - 1;
    cnd_ = a2 == 0;
    v0 = a1 + a3;
    if (cnd_) { goto L_088F9188; }
    goto L_088F917C;
L_088F917C:;
    v0 = LD_U16(v0);
    cnd_ = v0 != 0;
    ST16(a3, v0);
    if (cnd_) { goto L_088F916C; }
    goto L_088F9188;
L_088F9188:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088F9190 */
void func_088F9190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9190:;
    sp = sp - 16;
    func_088F98CC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91A0;
L_088F91A0:;
    func_088F967C(0, 0, 0, 0, 0, 0);
    goto L_088F91A8;
L_088F91A8:;
    a0 = 768;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91B0;
L_088F91B0:;
    a0 = 769;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91B8;
L_088F91B8:;
    a0 = 770;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91C0;
L_088F91C0:;
    a0 = 771;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91C8;
L_088F91C8:;
    a0 = 256;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91D0;
L_088F91D0:;
    a0 = D_08AD8B14 - (-29932);
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = a0 - 29932;
    if (cnd_) { goto L_088F923C; }
    goto L_088F91E0;
L_088F91E0:;
    a0 = 257;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F91E8;
L_088F91E8:;
    a0 = D_08AD8B60 - (-29856);
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = a0 - 29856;
    if (cnd_) { goto L_088F922C; }
    goto L_088F91F8;
L_088F91F8:;
    a0 = 258;
    v0 = sceUtilityLoadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9200;
L_088F9200:;
    a0 = D_08AD8BA8 - (-29784);
    a0 = a0 - 29784;
    cnd_ = (s32)v0 < 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088F921C; }
    goto L_088F9210;
L_088F9210:;
    goto L_088F9214;
L_088F9214:;
    sp = sp + 16;
    return;
L_088F921C:;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9224;
L_088F9224:;
    goto L_088F9214;
L_088F922C:;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9234;
L_088F9234:;
    goto L_088F91F8;
L_088F923C:;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9244;
L_088F9244:;
    goto L_088F91E0;
}

/* 088F924C */
void func_088F924C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F924C:;
    sp = sp - 16;
    func_088F96B0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088F925C;
L_088F925C:;
    sp = sp + 16;
    return;
}

/* 088F9268 */
void func_088F9268(void)
{
L_088F9268:;
    return;
}

/* 088F9270 */
u32 func_088F9270(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9270:;
    sp = sp - 16;
    v0 = D_08B45B20 - (23328);
    s0 = LD32(v0+23328);
    v0 = sceKernelGetThreadId(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9288;
L_088F9288:;
    s0 = s0 ^ v0;
    s0 = s0 < 0x1u;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 088F92A4 */
rv_t func_088F92A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F92A4:;
    v0 = a1 & 0x3f;
    v0 = v0 ^ 0x32;
    sp = sp - 16;
    v0 = v0 < 0x1u;
    v1 = D_08B1619C - (24988);
    a1 = a1 & 0x8;
    ST8(v1+24988, v0);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088F92D8; }
    goto L_088F92CC;
L_088F92CC:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F92D8:;
    v0 = sceUmdCheckMedium(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F92E0;
L_088F92E0:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088F92CC; }
    goto L_088F92E8;
L_088F92E8:;
    v0 = sceUmdGetErrorStat(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F92F0;
L_088F92F0:;
    a0 = D_08AD8BFC - (-29700);
    a1 = D_08AD8BF0 - (-29712);
    a0 = a0 - 29700;
    a1 = a1 - 29712;
    a2 = v0 + 0;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9308;
L_088F9308:;
    goto L_088F92CC;
}

/* 088F9310 */
rv_t func_088F9310(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9310:;
    sp = sp - 16;
    s2 = D_08BD7EC8 - (32456);
    func_08912C14(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F932C;
L_088F932C:;
    a0 = 10000;
    s0 = s2 + 32456;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9338;
L_088F9338:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9340;
L_088F9340:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_088F935C; }
    goto L_088F9350;
L_088F9350:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9358;
L_088F9358:;
    ST32(s0+4, s1);
    goto L_088F935C;
L_088F935C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    s0 = s2 + 32456;
    v0 = sceKernelExitGame(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9370;
L_088F9370:;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088F9394; }
    goto L_088F937C;
L_088F937C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088F93B8; }
    goto L_088F9394;
L_088F9394:;
    a0 = 10000;
    v0 = sceKernelDelayThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F939C;
L_088F939C:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F93B8:;
    v0 = func_088F8C18();
    goto L_088F93C0;
L_088F93C0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F93CC;
L_088F93CC:;
    goto L_088F9394;
}

/* 088F93D4 */
rv_t func_088F93D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F93D4:;
    v0 = 0x10000u;
    sp = sp - 16;
    a2 = a1 & v0;
    v1 = 0x40000u;
    v0 = (a1 >> 16) & 0x3;
    cnd_ = v0 == 0;
    v1 = a1 & v1;
    if (cnd_) { goto L_088F941C; }
    goto L_088F93F4;
L_088F93F4:;
    cnd_ = a2 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088F940C; }
    goto L_088F93FC;
L_088F93FC:;
    goto L_088F9400;
L_088F9400:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F940C:;
    { u64 r_ = func_088F974C(a0, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9414;
L_088F9414:;
    goto L_088F9400;
L_088F941C:;
    v0 = 0x80000u;
    a0 = 0 + 0;
    cnd_ = v1 != 0;
    v0 = a1 & v0;
    if (cnd_) { goto L_088F943C; }
    goto L_088F942C;
L_088F942C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088F9400; }
    goto L_088F9434;
L_088F9434:;
    goto L_088F940C;
L_088F943C:;
    { u64 r_ = func_088F9818(a0, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9444;
L_088F9444:;
    goto L_088F9400;
}

/* 088F944C */
rv_t func_088F944C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F944C:;
    sp = sp - 16;
    a1 = a1 & 0x1;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088F946C; }
    goto L_088F945C;
L_088F945C:;
    goto L_088F9460;
L_088F9460:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088F946C:;
    { u64 r_ = func_0890EA4C(t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F9474;
L_088F9474:;
    goto L_088F9460;
}

/* 088F947C */
rv_t func_088F947C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088F947C:;
    sp = sp - 48;
    v0 = 0 + 0;
    fpu_csr = v0 & 0x0183FFFFu; fcc = (v0 >> 23) & 1;
    a0 = D_08AD8C14 - (-29676);
    a1 = ((u32)(uintptr_t)func_088F93D4) - (-27692);
    a0 = a0 - 29676;
    a1 = a1 - 27692;
    a2 = 0 + 0;
    v0 = sceKernelCreateCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F94B8;
L_088F94B8:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F95F8; }
    goto L_088F94C0;
L_088F94C0:;
    a0 = D_08AD8C24 - (-29660);
    a1 = ((u32)(uintptr_t)func_088F92A4) - (-27996);
    a0 = a0 - 29660;
    a1 = a1 - 27996;
    s3 = D_08B16190 - (24976);
    a2 = 0 + 0;
    ST32(s3+24976, v0);
    v0 = sceKernelCreateCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F94E0;
L_088F94E0:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F962C; }
    goto L_088F94E8;
L_088F94E8:;
    a0 = D_08AD8C34 - (-29644);
    a1 = ((u32)(uintptr_t)func_088F944C) - (-27572);
    a0 = a0 - 29644;
    a1 = a1 - 27572;
    s1 = D_08B1618C - (24972);
    a2 = 0 + 0;
    ST32(s1+24972, v0);
    v0 = sceKernelCreateCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9508;
L_088F9508:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F9624; }
    goto L_088F9510;
L_088F9510:;
    a0 = D_08AD8C4C - (-29620);
    a1 = ((u32)(uintptr_t)func_088F9310) - (-27888);
    a0 = a0 - 29620;
    a1 = a1 - 27888;
    s2 = D_08B16198 - (24984);
    a2 = 0 + 0;
    ST32(s2+24984, v0);
    v0 = sceKernelCreateCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9530;
L_088F9530:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F961C; }
    goto L_088F9538;
L_088F9538:;
    a0 = LD32(s1+24972);
    s4 = D_08B16194 - (24980);
    ST32(s4+24980, v0);
    v0 = sceUmdRegisterUMDCallBack(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9548;
L_088F9548:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F95CC; }
    goto L_088F9550;
L_088F9550:;
    a0 = LD32(s4+24980);
    v0 = sceKernelRegisterExitCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9558;
L_088F9558:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F95C4; }
    goto L_088F9560;
L_088F9560:;
    a0 = D_08B45B24 - (23332);
    a0 = a0 + 23332;
    func_088F8C64(a0, 0, 0, 0);
    goto L_088F956C;
L_088F956C:;
    a1 = LD32(s3+24976);
    a0 = 0 + 0;
    v0 = scePowerRegisterCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9578;
L_088F9578:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F95D4; }
    goto L_088F9580;
L_088F9580:;
    v0 = LD32(s2+24984);
    a1 = 0x2410000u;
    a0 = D_08AD8C5C - (-29604);
    a0 = a0 - 29604;
    a1 = a1 | 0x5821;
    a2 = sp + 0;
    a3 = 4;
    t0 = 0 + 0;
    t1 = 0 + 0;
    ST32(sp, v0);
    v0 = sceIoDevctl(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95AC;
L_088F95AC:;
    cnd_ = (s32)v0 < 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088F95C4; }
    goto L_088F95B4;
L_088F95B4:;
    a0 = 20000;
    v0 = sceKernelDelayThreadCB(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95BC;
L_088F95BC:;
    goto L_088F95B4;
L_088F95C4:;
    a0 = LD32(s1+24972);
    v0 = sceUmdUnRegisterUMDCallBack(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95CC;
L_088F95CC:;
    a0 = 0 + 0;
    v0 = scePowerUnregisterCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95D4;
L_088F95D4:;
    a0 = LD32(s2+24984);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95DC;
L_088F95DC:;
    a0 = LD32(s1+24972);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95E4;
L_088F95E4:;
    a0 = LD32(s3+24976);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95EC;
L_088F95EC:;
    a0 = LD32(s4+24980);
    goto L_088F95F0;
L_088F95F0:;
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F95F8;
L_088F95F8:;
    v0 = s0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088F961C:;
    a0 = LD32(s2+24984);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9624;
L_088F9624:;
    a0 = LD32(s1+24972);
    v0 = sceKernelDeleteCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F962C;
L_088F962C:;
    a0 = LD32(s3+24976);
    goto L_088F95F0;
}

/* 088F9634 */
void func_088F9634(u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F9634:;
    a1 = ((u32)(uintptr_t)func_088F947C) - (-27524);
    a0 = D_08AD8C64 - (-29596);
    sp = sp - 16;
    a3 = 4096;
    t0 = 16384;
    t1 = 0 + 0;
    a1 = a1 - 27524;
    a0 = a0 - 29596;
    a2 = 16;
    v0 = sceKernelCreateThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9660;
L_088F9660:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    v0 = sceKernelStartThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088F9670;
L_088F9670:;
    sp = sp + 16;
    return;
}

/* 088F967C */
void func_088F967C(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088F967C:;
    v0 = D_08B45B24 - (23332);
    v0 = v0 + 23332;
    v1 = 1;
    ST8(v0+4, v1);
    sp = sp - 16;
    a0 = v0 + 0;
    { u64 r_ = func_088F8C90(a0, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088F969C;
L_088F969C:;
    func_088FAC6C(0, 0, 0, 0, 0);
    goto L_088F96A4;
L_088F96A4:;
    sp = sp + 16;
    return;
}
